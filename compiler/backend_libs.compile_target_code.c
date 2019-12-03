/*
** Automatically generated from `compile_target_code.m'
** by the Mercury compiler,
** version rotd-2019-12-03
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


#include "backend_libs.mih"
#include "hlds.mih"
#include "libs.mih"
#include "mdbcomp.mih"
#include "parse_tree.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "libs.compute_grade.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.op_mode.mih"
#include "libs.options.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
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
#include "getopt_io.mih"
#include "io.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "multi_map.mih"
#include "ops.mih"
#include "pair.mih"
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

static const MR_VA_TypeInfo_Struct4 backend_libs__compile_target_code____vti_pred_4builtin__type_ctor_info_string_0bool__type_ctor_info_bool_0io__type_ctor_info_state_0io__type_ctor_info_state_0;

static const MR_EnumFunctorDesc backend_libs__compile_target_code__backend_libs__compile_target_code__enum_functor_desc_is_as_new_as_0_0;

static const MR_EnumFunctorDesc backend_libs__compile_target_code__backend_libs__compile_target_code__enum_functor_desc_is_as_new_as_0_1;

static const MR_EnumFunctorDesc backend_libs__compile_target_code__backend_libs__compile_target_code__enum_functor_desc_is_as_new_as_0_2;

static const MR_EnumFunctorDescPtr backend_libs__compile_target_code__backend_libs__compile_target_code__enum_value_ordered_is_as_new_as_0[3];

static const MR_EnumFunctorDescPtr backend_libs__compile_target_code__backend_libs__compile_target_code__enum_name_ordered_is_as_new_as_0[3];

static const MR_Integer backend_libs__compile_target_code__backend_libs__compile_target_code__functor_number_map_is_as_new_as_0[3];

static const MR_EnumFunctorDesc backend_libs__compile_target_code__backend_libs__compile_target_code__enum_functor_desc_linked_target_type_0_0;

static const MR_EnumFunctorDesc backend_libs__compile_target_code__backend_libs__compile_target_code__enum_functor_desc_linked_target_type_0_1;

static const MR_EnumFunctorDesc backend_libs__compile_target_code__backend_libs__compile_target_code__enum_functor_desc_linked_target_type_0_2;

static const MR_EnumFunctorDesc backend_libs__compile_target_code__backend_libs__compile_target_code__enum_functor_desc_linked_target_type_0_3;

static const MR_EnumFunctorDesc backend_libs__compile_target_code__backend_libs__compile_target_code__enum_functor_desc_linked_target_type_0_4;

static const MR_EnumFunctorDesc backend_libs__compile_target_code__backend_libs__compile_target_code__enum_functor_desc_linked_target_type_0_5;

static const MR_EnumFunctorDesc backend_libs__compile_target_code__backend_libs__compile_target_code__enum_functor_desc_linked_target_type_0_6;

static const MR_EnumFunctorDesc backend_libs__compile_target_code__backend_libs__compile_target_code__enum_functor_desc_linked_target_type_0_7;

static const MR_EnumFunctorDesc backend_libs__compile_target_code__backend_libs__compile_target_code__enum_functor_desc_linked_target_type_0_8;

static const MR_EnumFunctorDescPtr backend_libs__compile_target_code__backend_libs__compile_target_code__enum_value_ordered_linked_target_type_0[9];

static const MR_EnumFunctorDescPtr backend_libs__compile_target_code__backend_libs__compile_target_code__enum_name_ordered_linked_target_type_0[9];

static const MR_Integer backend_libs__compile_target_code__backend_libs__compile_target_code__functor_number_map_linked_target_type_0[9];

static const MR_EnumFunctorDesc backend_libs__compile_target_code__backend_libs__compile_target_code__enum_functor_desc_pic_0_0;

static const MR_EnumFunctorDesc backend_libs__compile_target_code__backend_libs__compile_target_code__enum_functor_desc_pic_0_1;

static const MR_EnumFunctorDescPtr backend_libs__compile_target_code__backend_libs__compile_target_code__enum_value_ordered_pic_0[2];

static const MR_EnumFunctorDescPtr backend_libs__compile_target_code__backend_libs__compile_target_code__enum_name_ordered_pic_0[2];

static const MR_Integer backend_libs__compile_target_code__backend_libs__compile_target_code__functor_number_map_pic_0[2];

static MR_String MR_CALL 
backend_libs__compile_target_code__IntroducedFrom__func__get_link_libraries__2298__1_2_f_0(
  MR_String GradeDir_9,
  MR_String LambdaHeadVar__1_19);

static MR_Word MR_CALL 
backend_libs__compile_target_code__IntroducedFrom__func__referenced_dlls__1084__1_1_f_0(
  MR_Word LambdaHeadVar__1_17);

static MR_Word MR_CALL 
backend_libs__compile_target_code__IntroducedFrom__func__gather_c_include_dir_flags__816__1_1_f_0(
  MR_String LambdaHeadVar__1_11);

static void MR_CALL 
backend_libs__compile_target_code__IntroducedFrom__pred__link_module_list__1635__1_2_p_0(
  MR_String LambdaHeadVar__1_42,
  MR_Word * LambdaHeadVar__2_43);

static MR_Word MR_CALL 
backend_libs__compile_target_code__IntroducedFrom__func__compile_erlang_file__1127__1_1_f_0(
  MR_String LambdaHeadVar__1_52);

static void MR_CALL 
backend_libs__compile_target_code__IntroducedFrom__pred__compile_csharp_file__1048__1_6_p_0(
  MR_Word Globals_9,
  MR_String Prefix_27,
  MR_Word LambdaHeadVar__1_80,
  MR_Word * LambdaHeadVar__2_81);

static MR_Word MR_CALL 
backend_libs__compile_target_code__IntroducedFrom__func__compile_csharp_file__1040__1_2_f_0(
  MR_Word ModuleName_26,
  MR_Word LambdaHeadVar__1_73);

static MR_Word MR_CALL 
backend_libs__compile_target_code__IntroducedFrom__func__compile_csharp_file__1028__1_1_f_0(
  MR_String LambdaHeadVar__1_65);

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
  MR_Word STATE_VARIABLE_Succeeded_0_33,
  MR_Word * STATE_VARIABLE_Succeeded_34);

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
backend_libs__compile_target_code__make_standalone_int_body_4_p_0(
  MR_Word Globals_5,
  MR_String Basename_6);

static void MR_CALL 
backend_libs__compile_target_code__link_module_list_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
backend_libs__compile_target_code__join_module_list_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_String HeadVar__3_3,
  MR_Word * HeadVar__4_4);

static void MR_CALL 
backend_libs__compile_target_code__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_101_114_108_97_110_103_95_97_114_99_104_105_118_101_95_95_91_51_93_95_48_8_p_0(
  MR_Word Globals_9,
  MR_Word ErrorStream_10,
  MR_String ErlangArchiveFileName_12,
  MR_Word ObjectList_13,
  MR_Word * Succeeded_14);

static void MR_CALL 
backend_libs__compile_target_code__copy_erlang_archive_files_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_String HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5);

static void MR_CALL 
backend_libs__compile_target_code__create_java_exe_or_lib_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
backend_libs__compile_target_code__create_java_exe_or_lib_9_p_0(
  MR_Word Globals_10,
  MR_Word ErrorStream_11,
  MR_Word LinkTargetType_12,
  MR_Word MainModuleName_13,
  MR_String JarFileName_14,
  MR_Word ObjectList_15,
  MR_Word * Succeeded_16);

static void MR_CALL 
backend_libs__compile_target_code__create_csharp_exe_or_lib_9_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_Box MR_CALL 
backend_libs__compile_target_code__create_csharp_exe_or_lib_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
backend_libs__compile_target_code__create_csharp_exe_or_lib_9_p_0(
  MR_Word Globals_10,
  MR_Word ErrorStream_11,
  MR_Word LinkTargetType_12,
  MR_Word MainModuleName_13,
  MR_String OutputFileName0_14,
  MR_Word SourceList0_15,
  MR_Word * Succeeded_16);

static void MR_CALL 
backend_libs__compile_target_code__invoke_long_system_command_8_p_0(
  MR_Word Globals_9,
  MR_Word ErrorStream_10,
  MR_Word Verbosity_11,
  MR_String Cmd_12,
  MR_String Args_13,
  MR_Word * Succeeded_14);

static MR_String MR_CALL 
backend_libs__compile_target_code__csharp_file_name_3_f_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_String HeadVar__3_3);

static void MR_CALL 
backend_libs__compile_target_code__link_exe_or_shared_lib_9_p_0(
  MR_Word Globals_10,
  MR_Word ErrorStream_11,
  MR_Word LinkTargetType_12,
  MR_Word ModuleName_13,
  MR_String OutputFileName_14,
  MR_Word ObjectsList_15,
  MR_Word * Succeeded_16);

static MR_Box MR_CALL 
backend_libs__compile_target_code__create_archive_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
backend_libs__compile_target_code__create_archive_8_p_0(
  MR_Word Globals_9,
  MR_Word ErrorStream_10,
  MR_String LibFileName_11,
  MR_Word Quote_12,
  MR_Word ObjectList_13,
  MR_Word * Succeeded_14);

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
  MR_String LibExt_13,
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
  MR_String * Ext_11,
  MR_String * OutputFileName_12);

static void MR_CALL 
backend_libs__compile_target_code__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_99_111_109_112_105_108_101_95_105_110_105_116_95_111_98_106_95_102_105_108_101_95_95_104_111_50_95_95_91_54_93_95_48_8_p_0(
  MR_Word Var_30,
  MR_Word Var_31,
  MR_Word Globals_9,
  MR_Word MaybeInitTargetFile_10,
  MR_Word MustCompile_11,
  MR_String InitObjFileName_13,
  MR_Word * Result_14);

static void MR_CALL 
backend_libs__compile_target_code__do_make_init_obj_file_8_p_0(
  MR_Word Globals_9,
  MR_Word ErrorStream_10,
  MR_Word MustCompile_11,
  MR_Word ModuleName_12,
  MR_Word ModuleNames_13,
  MR_Word * Result_14);

static void MR_CALL 
backend_libs__compile_target_code__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_99_111_109_112_105_108_101_95_105_110_105_116_95_111_98_106_95_102_105_108_101_95_95_104_111_49_95_95_91_56_93_95_48_8_p_0(
  MR_Word Var_30,
  MR_Word Var_31,
  MR_Word Var_32,
  MR_String Var_33,
  MR_Word Globals_9,
  MR_Word MaybeInitTargetFile_10,
  MR_Word MustCompile_11,
  MR_String InitObjFileName_13,
  MR_Word * Result_14);

static void MR_CALL 
backend_libs__compile_target_code__IntroducedFrom__pred__do_make_init_obj_file__1344__1_8_p_0(
  MR_Word Globals_9,
  MR_Word ErrorStream_10,
  MR_Word PIC_26,
  MR_String InitObjFileName_28,
  MR_String LambdaHeadVar__1_65,
  MR_Word * LambdaHeadVar__2_66);

static MR_String MR_CALL 
backend_libs__compile_target_code__IntroducedFrom__func__do_make_init_obj_file__1313__1_3_f_0(
  MR_String GradeDir_17,
  MR_String StdLibDir_18,
  MR_String LambdaHeadVar__1_36);

static void MR_CALL 
backend_libs__compile_target_code__make_init_target_file_13_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
backend_libs__compile_target_code__make_init_target_file_13_p_0(
  MR_Word Globals_14,
  MR_Word ErrorStream_15,
  MR_String MkInit_16,
  MR_Word ModuleName_17,
  MR_Word ModuleNames_18,
  MR_String TargetExt_19,
  MR_Word StdInitFileNames_20,
  MR_Word StdTraceInitFileNames_21,
  MR_Word SourceDebugInitFileNames_22,
  MR_String ModuleNameOption_23,
  MR_Word * MaybeInitTargetFile_24);

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
backend_libs__compile_target_code__make_library_init_file_2_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
backend_libs__compile_target_code__make_library_init_file_2_9_p_0(
  MR_Word Globals_10,
  MR_Word ErrorStream_11,
  MR_Word MainModuleName_12,
  MR_Word AllModules_13,
  MR_String TargetExt_14,
  MR_String MkInit_15,
  MR_Word * Succeeded_16);

static void MR_CALL 
backend_libs__compile_target_code__invoke_mkinit_9_p_0(
  MR_Word Globals_10,
  MR_Word InitFileStream_11,
  MR_Word Verbosity_12,
  MR_String MkInit_13,
  MR_String Args_14,
  MR_Word FileNames_15,
  MR_Word * MkInitOK_16);

static MR_Box MR_CALL 
backend_libs__compile_target_code__make_all_module_command_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
backend_libs__compile_target_code__make_all_module_command_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static MR_Box MR_CALL 
backend_libs__compile_target_code__compile_erlang_file_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
backend_libs__compile_target_code__compile_csharp_file_8_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static MR_Box MR_CALL 
backend_libs__compile_target_code__compile_csharp_file_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
backend_libs__compile_target_code__compile_csharp_file_8_p_0_1(
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
backend_libs__compile_target_code__compile_java_files_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
backend_libs__compile_target_code__invoke_long_system_command_maybe_filter_output_10_p_0(
  MR_Word Globals_11,
  MR_Word ErrorStream_12,
  MR_Word Verbosity_13,
  MR_String Cmd_14,
  MR_String NonAtArgs_15,
  MR_String Args_16,
  MR_Word MaybeProcessOutput_17,
  MR_Word * Succeeded_18);

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
backend_libs__compile_target_code__gather_grade_defines_2_p_0(
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


static /* final */ const MR_Box backend_libs__compile_target_code_scalar_common_1[12][2];

static /* final */ const MR_Box backend_libs__compile_target_code_scalar_common_2[3][6];

static /* final */ const MR_Box backend_libs__compile_target_code_scalar_common_3[5][1];

static /* final */ const MR_Box backend_libs__compile_target_code_scalar_common_4[4][5];

static /* final */ const MR_Box backend_libs__compile_target_code_scalar_common_5[16][3];

static /* final */ const MR_Box backend_libs__compile_target_code_scalar_common_6[1][4];

static /* final */ const MR_Box backend_libs__compile_target_code_scalar_common_7[1][9];

static /* final */ const MR_Box backend_libs__compile_target_code_scalar_common_8[1][10];

static /* final */ const MR_Box backend_libs__compile_target_code_scalar_common_10[1][11];

static /* final */ const MR_Box backend_libs__compile_target_code_scalar_common_11[2][7];

static /* final */ const MR_Box backend_libs__compile_target_code_scalar_common_12[2][8];


/* sealed */ struct backend_libs__compile_target_code__vector_common_type_9_0_s {
  const MR_String backend_libs__compile_target_code__vector_common_type_9_0__vct_9_f_0;
};

static /* final */ const struct backend_libs__compile_target_code__vector_common_type_9_0_s backend_libs__compile_target_code_vector_common_9[15];



static /* final */ const MR_Box backend_libs__compile_target_code_scalar_common_1[12][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&backend_libs__compile_target_code_scalar_common_3[0])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 2 */
  {
    ((MR_Box) (&backend_libs__compile_target_code_scalar_common_3[1])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &backend_libs__compile_target_code_scalar_common_1[1])))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_String) "-defaultlib:libcmt")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 4 */
  {
    ((MR_Box) ((MR_String) "-entry:wmainCRTStartup")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &backend_libs__compile_target_code_scalar_common_1[3])))
  },
  /* row 5 */
  {
    ((MR_Box) ((MR_String) "-machine:x86")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &backend_libs__compile_target_code_scalar_common_1[4])))
  },
  /* row 6 */
  {
    ((MR_Box) ((MR_String) "-subsystem:console")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &backend_libs__compile_target_code_scalar_common_1[5])))
  },
  /* row 7 */
  {
    ((MR_Box) ((MR_String) "-nologo")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &backend_libs__compile_target_code_scalar_common_1[6])))
  },
  /* row 8 */
  {
    ((MR_Box) ((MR_String) " ")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 9 */
  {
    ((MR_Box) ((MR_String) " -s ")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 10 */
  {
    ((MR_Box) ((MR_String) "_H */\n")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 11 */
  {
    ((MR_Box) ((MR_String) "\" \"\044\100\"\n")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box backend_libs__compile_target_code_scalar_common_2[3][6] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_pred_0)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
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

static /* final */ const MR_Box backend_libs__compile_target_code_scalar_common_3[5][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_String) "mercury_il"))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_String) "mercury_dotnet"))
  },
  /* row 2 */
  {
    (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1))))))))
  },
  /* row 3 */
  {
    (MR_Box) ((MR_Unsigned) 0U)
  },
  /* row 4 */
  {
    ((MR_Box) ((MR_String) "mercury"))
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
    ((MR_Box) (backend_libs__compile_target_code__compile_java_files_6_p_0_1)),
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
    ((MR_Box) (backend_libs__compile_target_code__compile_csharp_file_8_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&backend_libs__compile_target_code_scalar_common_4[0])),
    ((MR_Box) (backend_libs__compile_target_code__compile_erlang_file_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&backend_libs__compile_target_code_scalar_common_4[1])),
    ((MR_Box) (backend_libs__compile_target_code__make_all_module_command_7_p_0_2)),
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
    ((MR_Box) (backend_libs__compile_target_code__create_archive_8_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 11 */
  {
    ((MR_Box) (&backend_libs__compile_target_code_scalar_common_4[3])),
    ((MR_Box) (backend_libs__compile_target_code__link_module_list_6_p_0_1)),
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

static /* final */ const MR_Box backend_libs__compile_target_code_scalar_common_8[1][10] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&parse_tree__file_names__parse_tree__file_names__type_ctor_info_maybe_create_dirs_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box backend_libs__compile_target_code_scalar_common_10[1][11] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&backend_libs__compile_target_code__list__pti_list_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box backend_libs__compile_target_code_scalar_common_11[2][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_env_type_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_csharp_compiler_type_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 1 */
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

static /* final */ const MR_Box backend_libs__compile_target_code_scalar_common_12[2][8] = {
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


static /* final */ const struct backend_libs__compile_target_code__vector_common_type_9_0_s backend_libs__compile_target_code_vector_common_9[15] = {
  /* row 0 */   {     (MR_String) "" },
  /* row 1 */   {     (MR_String) "" },
  /* row 2 */   {     (MR_String) "" },
  /* row 3 */   {     (MR_String) ".bat" },
  /* row 4 */   {     (MR_String) ".bat" },
  /* row 5 */   {     (MR_String) "" },
  /* row 6 */   {     (MR_String) "" },
  /* row 7 */   {     (MR_String) "" },
  /* row 8 */   {     (MR_String) ".bat" },
  /* row 9 */   {     (MR_String) ".bat" },
  /* row 10 */   {     (MR_String) "" },
  /* row 11 */   {     (MR_String) "" },
  /* row 12 */   {     (MR_String) "" },
  /* row 13 */   {     (MR_String) ".bat" },
  /* row 14 */   {     (MR_String) ".bat" },
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

static const MR_VA_TypeInfo_Struct4 backend_libs__compile_target_code____vti_pred_4builtin__type_ctor_info_string_0bool__type_ctor_info_bool_0io__type_ctor_info_state_0io__type_ctor_info_state_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 4,
  {
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
    (MR_TypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0),
    (MR_TypeInfo) (&mercury__io__io__type_ctor_info_state_0),
    (MR_TypeInfo) (&mercury__io__io__type_ctor_info_state_0)
  }
};

const MR_TypeCtorInfo_Struct backend_libs__compile_target_code__backend_libs__compile_target_code__type_ctor_info_compile_init_file_pred_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (backend_libs__compile_target_code____Unify____compile_init_file_pred_0_0_10001)),
  ((MR_Box) (backend_libs__compile_target_code____Compare____compile_init_file_pred_0_0_10001)),
  (MR_String) "backend_libs.compile_target_code",
  (MR_String) "compile_init_file_pred",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&backend_libs__compile_target_code____vti_pred_4builtin__type_ctor_info_string_0bool__type_ctor_info_bool_0io__type_ctor_info_state_0io__type_ctor_info_state_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL
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

static const MR_EnumFunctorDescPtr backend_libs__compile_target_code__backend_libs__compile_target_code__enum_value_ordered_is_as_new_as_0[3] = {
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
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (backend_libs__compile_target_code____Unify____is_as_new_as_0_0_10001)),
  ((MR_Box) (backend_libs__compile_target_code____Compare____is_as_new_as_0_0_10001)),
  (MR_String) "backend_libs.compile_target_code",
  (MR_String) "is_as_new_as",
  {     backend_libs__compile_target_code__backend_libs__compile_target_code__enum_name_ordered_is_as_new_as_0 },
  {     backend_libs__compile_target_code__backend_libs__compile_target_code__enum_value_ordered_is_as_new_as_0 },
  (MR_Integer) 3,
  UINT16_C(4),
  backend_libs__compile_target_code__backend_libs__compile_target_code__functor_number_map_is_as_new_as_0
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

static const MR_EnumFunctorDesc backend_libs__compile_target_code__backend_libs__compile_target_code__enum_functor_desc_linked_target_type_0_7 = {
  (MR_String) "erlang_launcher",
  INT32_C(7)
};

static const MR_EnumFunctorDesc backend_libs__compile_target_code__backend_libs__compile_target_code__enum_functor_desc_linked_target_type_0_8 = {
  (MR_String) "erlang_archive",
  INT32_C(8)
};

static const MR_EnumFunctorDescPtr backend_libs__compile_target_code__backend_libs__compile_target_code__enum_value_ordered_linked_target_type_0[9] = {
  &backend_libs__compile_target_code__backend_libs__compile_target_code__enum_functor_desc_linked_target_type_0_0,
  &backend_libs__compile_target_code__backend_libs__compile_target_code__enum_functor_desc_linked_target_type_0_1,
  &backend_libs__compile_target_code__backend_libs__compile_target_code__enum_functor_desc_linked_target_type_0_2,
  &backend_libs__compile_target_code__backend_libs__compile_target_code__enum_functor_desc_linked_target_type_0_3,
  &backend_libs__compile_target_code__backend_libs__compile_target_code__enum_functor_desc_linked_target_type_0_4,
  &backend_libs__compile_target_code__backend_libs__compile_target_code__enum_functor_desc_linked_target_type_0_5,
  &backend_libs__compile_target_code__backend_libs__compile_target_code__enum_functor_desc_linked_target_type_0_6,
  &backend_libs__compile_target_code__backend_libs__compile_target_code__enum_functor_desc_linked_target_type_0_7,
  &backend_libs__compile_target_code__backend_libs__compile_target_code__enum_functor_desc_linked_target_type_0_8
};

static const MR_EnumFunctorDescPtr backend_libs__compile_target_code__backend_libs__compile_target_code__enum_name_ordered_linked_target_type_0[9] = {
  &backend_libs__compile_target_code__backend_libs__compile_target_code__enum_functor_desc_linked_target_type_0_3,
  &backend_libs__compile_target_code__backend_libs__compile_target_code__enum_functor_desc_linked_target_type_0_4,
  &backend_libs__compile_target_code__backend_libs__compile_target_code__enum_functor_desc_linked_target_type_0_8,
  &backend_libs__compile_target_code__backend_libs__compile_target_code__enum_functor_desc_linked_target_type_0_7,
  &backend_libs__compile_target_code__backend_libs__compile_target_code__enum_functor_desc_linked_target_type_0_0,
  &backend_libs__compile_target_code__backend_libs__compile_target_code__enum_functor_desc_linked_target_type_0_6,
  &backend_libs__compile_target_code__backend_libs__compile_target_code__enum_functor_desc_linked_target_type_0_5,
  &backend_libs__compile_target_code__backend_libs__compile_target_code__enum_functor_desc_linked_target_type_0_2,
  &backend_libs__compile_target_code__backend_libs__compile_target_code__enum_functor_desc_linked_target_type_0_1
};

static const MR_Integer backend_libs__compile_target_code__backend_libs__compile_target_code__functor_number_map_linked_target_type_0[9] = {
  (MR_Integer) 4,
  (MR_Integer) 8,
  (MR_Integer) 7,
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 6,
  (MR_Integer) 5,
  (MR_Integer) 3,
  (MR_Integer) 2
};

const MR_TypeCtorInfo_Struct backend_libs__compile_target_code__backend_libs__compile_target_code__type_ctor_info_linked_target_type_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (backend_libs__compile_target_code____Unify____linked_target_type_0_0_10001)),
  ((MR_Box) (backend_libs__compile_target_code____Compare____linked_target_type_0_0_10001)),
  (MR_String) "backend_libs.compile_target_code",
  (MR_String) "linked_target_type",
  {     backend_libs__compile_target_code__backend_libs__compile_target_code__enum_name_ordered_linked_target_type_0 },
  {     backend_libs__compile_target_code__backend_libs__compile_target_code__enum_value_ordered_linked_target_type_0 },
  (MR_Integer) 9,
  UINT16_C(4),
  backend_libs__compile_target_code__backend_libs__compile_target_code__functor_number_map_linked_target_type_0
};

static const MR_EnumFunctorDesc backend_libs__compile_target_code__backend_libs__compile_target_code__enum_functor_desc_pic_0_0 = {
  (MR_String) "pic",
  INT32_C(0)
};

static const MR_EnumFunctorDesc backend_libs__compile_target_code__backend_libs__compile_target_code__enum_functor_desc_pic_0_1 = {
  (MR_String) "non_pic",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr backend_libs__compile_target_code__backend_libs__compile_target_code__enum_value_ordered_pic_0[2] = {
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
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (backend_libs__compile_target_code____Unify____pic_0_0_10001)),
  ((MR_Box) (backend_libs__compile_target_code____Compare____pic_0_0_10001)),
  (MR_String) "backend_libs.compile_target_code",
  (MR_String) "pic",
  {     backend_libs__compile_target_code__backend_libs__compile_target_code__enum_name_ordered_pic_0 },
  {     backend_libs__compile_target_code__backend_libs__compile_target_code__enum_value_ordered_pic_0 },
  (MR_Integer) 2,
  UINT16_C(4),
  backend_libs__compile_target_code__backend_libs__compile_target_code__functor_number_map_pic_0
};

static MR_String MR_CALL 
backend_libs__compile_target_code__IntroducedFrom__func__get_link_libraries__2298__1_2_f_0(
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
backend_libs__compile_target_code__IntroducedFrom__func__referenced_dlls__1084__1_1_f_0(
  MR_Word LambdaHeadVar__1_17)
{
  {
    MR_bool succeeded;
    MR_Word LambdaHeadVar__2_18;

    succeeded = parse_tree__file_names__mercury_std_library_module_name_1_p_0(LambdaHeadVar__1_17);
    if (succeeded)
      LambdaHeadVar__2_18 = (MR_Word) (&backend_libs__compile_target_code_scalar_common_3[4]);
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
backend_libs__compile_target_code__IntroducedFrom__func__gather_c_include_dir_flags__816__1_1_f_0(
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
      MR_hl_field(MR_mktag(1), Var_14, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &backend_libs__compile_target_code_scalar_common_1[8])));
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
backend_libs__compile_target_code__IntroducedFrom__pred__link_module_list__1635__1_2_p_0(
  MR_String LambdaHeadVar__1_42,
  MR_Word * LambdaHeadVar__2_43)
{
  {
    MR_String Var_44;

    Var_44 = mercury__dir__det_basename_1_f_0(LambdaHeadVar__1_42);
    parse_tree__file_names__file_name_to_module_name_2_p_0(Var_44, LambdaHeadVar__2_43);
  }
}

static MR_Word MR_CALL 
backend_libs__compile_target_code__IntroducedFrom__func__compile_erlang_file__1127__1_1_f_0(
  MR_String LambdaHeadVar__1_52)
{
  {
    MR_Word LambdaHeadVar__2_53;
    MR_Word Var_55;
    MR_String Var_56;

    Var_56 = libs__options__quote_arg_1_f_0(LambdaHeadVar__1_52);
    {
      Var_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_55, 0) = ((MR_Box) (Var_56));
      MR_hl_field(MR_mktag(1), Var_55, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &backend_libs__compile_target_code_scalar_common_1[8])));
    }
    {
      LambdaHeadVar__2_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), LambdaHeadVar__2_53, 0) = ((MR_Box) ((MR_String) "-I"));
      MR_hl_field(MR_mktag(1), LambdaHeadVar__2_53, 1) = ((MR_Box) (Var_55));
    }
    return LambdaHeadVar__2_53;
  }
}

static void MR_CALL 
backend_libs__compile_target_code__IntroducedFrom__pred__compile_csharp_file__1048__1_6_p_0(
  MR_Word Globals_9,
  MR_String Prefix_27,
  MR_Word LambdaHeadVar__1_80,
  MR_Word * LambdaHeadVar__2_81)
{
  {
    MR_String FileName_39;
    MR_Word Var_86;

    parse_tree__file_names__module_name_to_file_name_7_p_0(Globals_9, (MR_Integer) 1, (MR_String) ".dll", LambdaHeadVar__1_80, &FileName_39);
    {
      Var_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_86, 0) = ((MR_Box) (FileName_39));
      MR_hl_field(MR_mktag(1), Var_86, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &backend_libs__compile_target_code_scalar_common_1[8])));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *LambdaHeadVar__2_81 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Prefix_27));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Var_86));
    }
  }
}

static MR_Word MR_CALL 
backend_libs__compile_target_code__IntroducedFrom__func__compile_csharp_file__1040__1_2_f_0(
  MR_Word ModuleName_26,
  MR_Word LambdaHeadVar__1_73)
{
  {
    MR_Word LambdaHeadVar__2_74;

    LambdaHeadVar__2_74 = parse_tree__prog_foreign__fim_spec_module_name_from_module_2_f_0(LambdaHeadVar__1_73, ModuleName_26);
    return LambdaHeadVar__2_74;
  }
}

static MR_Word MR_CALL 
backend_libs__compile_target_code__IntroducedFrom__func__compile_csharp_file__1028__1_1_f_0(
  MR_String LambdaHeadVar__1_65)
{
  {
    MR_Word LambdaHeadVar__2_66;
    MR_Word Var_68;

    {
      Var_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_68, 0) = ((MR_Box) (LambdaHeadVar__1_65));
      MR_hl_field(MR_mktag(1), Var_68, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &backend_libs__compile_target_code_scalar_common_1[8])));
    }
    {
      LambdaHeadVar__2_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), LambdaHeadVar__2_66, 0) = ((MR_Box) ((MR_String) "-lib:"));
      MR_hl_field(MR_mktag(1), LambdaHeadVar__2_66, 1) = ((MR_Box) (Var_68));
    }
    return LambdaHeadVar__2_66;
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
    if (!(succeeded))
    {
      mercury__io__write_string_4_p_0(Stream_6, (MR_String) "-C ");
      mercury__io__write_string_4_p_0(Stream_6, ClassSubDir_7);
      mercury__io__write_string_4_p_0(Stream_6, (MR_String) " ");
    }
    mercury__io__write_string_4_p_0(Stream_6, ClassFileName_8);
    mercury__io__nl_3_p_0(Stream_6);
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

    libs__globals__lookup_string_option_3_p_0(Globals_6, (MR_Integer) 554, &CLI_10);
    libs__globals__lookup_accumulating_option_3_p_0(Globals_6, (MR_Integer) 568, &LinkLibraryDirectoriesList_11);
    Var_54 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&backend_libs__compile_target_code_scalar_common_5[15]), LinkLibraryDirectoriesList_11);
    backend_libs__compile_target_code__join_string_list_5_p_0(Var_54, (MR_String) "", (MR_String) "", (MR_String) ":", &LinkLibraryDirectories_12);
    {
      Var_20 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_20, 0) = ((MR_Box) (&backend_libs__compile_target_code_scalar_common_11[1]));
      MR_hl_field(MR_mktag(0), Var_20, 1) = ((MR_Box) (backend_libs__compile_target_code__write_cli_shell_script_5_p_0_2));
      MR_hl_field(MR_mktag(0), Var_20, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_20, 3) = ((MR_Box) (Stream_8));
    }
    {
      Var_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_40, 0) = ((MR_Box) (ExeFileName_7));
      MR_hl_field(MR_mktag(1), Var_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &backend_libs__compile_target_code_scalar_common_1[11])));
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
  MR_Word STATE_VARIABLE_Succeeded_0_33,
  MR_Word * STATE_VARIABLE_Succeeded_34)
{
  {
    MR_bool succeeded;
    MR_Word Target_15;
    MR_String MercuryLinkage_16;
    MR_String LinkOpt_22;
    MR_String LibSuffix_23;
    MR_Word MercuryLibs_25;
    MR_Word TypeCtorInfo_59_59;

    libs__globals__get_target_2_p_0(Globals_9, &Target_15);
    switch (Target_15) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word CCompilerType_17;

          libs__globals__lookup_string_option_3_p_0(Globals_9, (MR_Integer) 586, &MercuryLinkage_16);
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
      case (MR_Integer) 3:
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140backend_libs.compile_target_code.process_link_library\'/8", (MR_String) "target_erlang");
          return;
        }
        break;
      case (MR_Integer) 2:
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140backend_libs.compile_target_code.process_link_library\'/8", (MR_String) "target_java");
          return;
        }
        break;
    }
    libs__globals__lookup_accumulating_option_3_p_0(Globals_9, (MR_Integer) 577, &MercuryLibs_25);
    succeeded = (strcmp(MercuryLinkage_16, (MR_String) "static") == 0);
    if (succeeded)
    {
      TypeCtorInfo_59_59 = (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0);
      succeeded = mercury__list__member_2_p_0(TypeCtorInfo_59_59, ((MR_Box) (LibName_11)), MercuryLibs_25);
    }
    if (succeeded)
    {
      MR_Word LibModuleName_26;
      MR_String LibExt_27;
      MR_Word NoSubDirGlobals_28;
      MR_String LibFileName_29;
      MR_Word MaybeDirName_30;

      parse_tree__file_names__file_name_to_module_name_2_p_0(LibName_11, &LibModuleName_26);
      libs__globals__lookup_string_option_3_p_0(Globals_9, (MR_Integer) 600, &LibExt_27);
      libs__globals__set_option_4_p_0((MR_Integer) 674, (MR_Word) (MR_mkword(MR_mktag(1), &backend_libs__compile_target_code_scalar_common_3[3])), Globals_9, &NoSubDirGlobals_28);
      parse_tree__file_names__module_name_to_lib_file_name_8_p_0(NoSubDirGlobals_28, (MR_String) "lib", LibModuleName_26, LibExt_27, (MR_Integer) 1, &LibFileName_29);
      libs__file_util__search_for_file_returning_dir_5_p_0(MercuryLibDirs_10, LibFileName_29, &MaybeDirName_30);
      if (((MR_tag((MR_Word) MaybeDirName_30)) == (MR_Integer) 1))
      {
        MR_String Error_32 = ((MR_String) ((MR_hl_field(MR_mktag(1), MaybeDirName_30, (MR_Integer) 0))));
        MR_Word Var_53;
        MR_Word Var_55;

        *LinkerOpt_12 = (MR_String) "";
        {
          Var_55 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_55, 0) = ((MR_Box) ((MR_Unsigned) 5U));
          MR_hl_field(MR_mktag(3), Var_55, 1) = ((MR_Box) (Error_32));
        }
        {
          Var_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_53, 0) = ((MR_Box) (Var_55));
          MR_hl_field(MR_mktag(1), Var_53, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        parse_tree__error_util__write_error_pieces_maybe_with_context_6_p_0(Globals_9, (MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 0, Var_53);
        *STATE_VARIABLE_Succeeded_34 = (MR_Integer) 0;
      }
      else
      {
        MR_String DirName_31 = ((MR_String) ((MR_hl_field(MR_mktag(0), MaybeDirName_30, (MR_Integer) 0))));

        *LinkerOpt_12 = mercury__dir__f_slash_2_f_0(DirName_31, LibFileName_29);
        *STATE_VARIABLE_Succeeded_34 = STATE_VARIABLE_Succeeded_0_33;
      }
    }
    else
    {
      MR_String Var_58;

      Var_58 = mercury__string__f_43_43_2_f_0(LibName_11, LibSuffix_23);
      *LinkerOpt_12 = mercury__string__f_43_43_2_f_0(LinkOpt_22, Var_58);
      *STATE_VARIABLE_Succeeded_34 = STATE_VARIABLE_Succeeded_0_33;
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
    MR_String LinkFlags_20;
    MR_Word Var_31;
    MR_Word Var_32;
    MR_Word Var_34;
    MR_Word Var_35;
    MR_Word Var_37;
    MR_Word Var_38;
    MR_Word Var_40;
    MR_Word Var_41;
    MR_Word Var_43;
    MR_Word Var_52;
    MR_Word UseInstallName_62;
    MR_Word SharedLibsSupported_63;
    MR_String Linkage_64;

    libs__globals__lookup_accumulating_option_3_p_0(Globals_5, (MR_Integer) 568, &LinkLibraryDirectoriesList_11);
    libs__globals__lookup_string_option_3_p_0(Globals_5, (MR_Integer) 636, &LinkerPathFlag_12);
    Var_52 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&backend_libs__compile_target_code_scalar_common_5[13]), LinkLibraryDirectoriesList_11);
    backend_libs__compile_target_code__join_string_list_5_p_0(Var_52, LinkerPathFlag_12, (MR_String) "", (MR_String) " ", &LinkLibraryDirectories_13);
    libs__globals__lookup_bool_option_3_p_0(Globals_5, (MR_Integer) 643, &UseInstallName_62);
    backend_libs__compile_target_code__shared_libraries_supported_2_p_0(Globals_5, &SharedLibsSupported_63);
    libs__globals__lookup_string_option_3_p_0(Globals_5, (MR_Integer) 584, &Linkage_64);
    succeeded = (UseInstallName_62 == (MR_Integer) 0);
    if (succeeded)
    {
      succeeded = (SharedLibsSupported_63 == (MR_Integer) 1);
      if (succeeded)
        succeeded = (strcmp(Linkage_64, (MR_String) "shared") == 0);
    }
    if (succeeded)
    {
      MR_Word RpathDirs0_65;
      MR_Word RpathDirs_66;

      libs__globals__lookup_accumulating_option_3_p_0(Globals_5, (MR_Integer) 569, &RpathDirs0_65);
      RpathDirs_66 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&backend_libs__compile_target_code_scalar_common_5[14]), RpathDirs0_65);
      if ((RpathDirs_66 == (MR_Word) ((MR_Unsigned) 0U)))
        RpathOpts_14 = (MR_String) "";
      else
      {
        MR_String RpathSep_69;
        MR_String RpathFlag_70;
        MR_String RpathOpts0_71;

        libs__globals__lookup_string_option_3_p_0(Globals_5, (MR_Integer) 638, &RpathSep_69);
        libs__globals__lookup_string_option_3_p_0(Globals_5, (MR_Integer) 637, &RpathFlag_70);
        RpathOpts0_71 = mercury__string__join_list_2_f_0(RpathSep_69, RpathDirs_66);
        RpathOpts_14 = mercury__string__f_43_43_2_f_0(RpathFlag_70, RpathOpts0_71);
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
    {
      Var_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_43, 0) = ((MR_Box) (SystemLibs_19));
      MR_hl_field(MR_mktag(1), Var_43, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_41, 0) = ((MR_Box) ((MR_String) " "));
      MR_hl_field(MR_mktag(1), Var_41, 1) = ((MR_Box) (Var_43));
    }
    {
      Var_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_40, 0) = ((MR_Box) (MercuryStdLibs_18));
      MR_hl_field(MR_mktag(1), Var_40, 1) = ((MR_Box) (Var_41));
    }
    {
      Var_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_38, 0) = ((MR_Box) ((MR_String) " "));
      MR_hl_field(MR_mktag(1), Var_38, 1) = ((MR_Box) (Var_40));
    }
    {
      Var_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_37, 0) = ((MR_Box) (LinkLibraries_17));
      MR_hl_field(MR_mktag(1), Var_37, 1) = ((MR_Box) (Var_38));
    }
    {
      Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_35, 0) = ((MR_Box) ((MR_String) " "));
      MR_hl_field(MR_mktag(1), Var_35, 1) = ((MR_Box) (Var_37));
    }
    {
      Var_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_34, 0) = ((MR_Box) (RpathOpts_14));
      MR_hl_field(MR_mktag(1), Var_34, 1) = ((MR_Box) (Var_35));
    }
    {
      Var_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_32, 0) = ((MR_Box) ((MR_String) " "));
      MR_hl_field(MR_mktag(1), Var_32, 1) = ((MR_Box) (Var_34));
    }
    {
      Var_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_31, 0) = ((MR_Box) (LinkLibraryDirectories_13));
      MR_hl_field(MR_mktag(1), Var_31, 1) = ((MR_Box) (Var_32));
    }
    mercury__string__append_list_2_p_0(Var_31, &LinkFlags_20);
    mercury__io__write_string_4_p_0(Stream_6, LinkFlags_20);
    mercury__io__nl_3_p_0(Stream_6);
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

    conv0_LambdaHeadVar__2_12 = backend_libs__compile_target_code__IntroducedFrom__func__gather_c_include_dir_flags__816__1_1_f_0(((MR_String) (wrapper_arg_1)));
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

    libs__globals__lookup_accumulating_option_3_p_0(Globals_5, (MR_Integer) 520, &C_Incl_Dirs_15);
    Var_19 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&backend_libs__compile_target_code_scalar_common_1[0]), (MR_Word) (&backend_libs__compile_target_code_scalar_common_5[12]), C_Incl_Dirs_15);
    Var_18 = mercury__list__condense_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_19);
    InclOpts_8 = mercury__string__append_list_1_f_0(Var_18);
    mercury__io__write_string_4_p_0(Stream_6, InclOpts_8);
    mercury__io__nl_3_p_0(Stream_6);
  }
}

void MR_CALL 
backend_libs__compile_target_code__output_grade_defines_4_p_0(
  MR_Word Globals_5,
  MR_Word Stream_6)
{
  {
    MR_String GradeDefines_9;

    backend_libs__compile_target_code__gather_grade_defines_2_p_0(Globals_5, &GradeDefines_9);
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
backend_libs__compile_target_code__make_standalone_interface_4_p_0(
  MR_Word Globals_5,
  MR_String Basename_6)
{
  {
    MR_String HdrFileName_18;
    MR_Word OpenResult_19;

    HdrFileName_18 = mercury__string__f_43_43_2_f_0(Basename_6, (MR_String) ".h");
    mercury__io__open_output_4_p_0(HdrFileName_18, &OpenResult_19);
    if (((MR_tag((MR_Word) OpenResult_19)) == (MR_Integer) 1))
    {
      MR_Word Error_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), OpenResult_19, (MR_Integer) 0))));

      parse_tree__error_util__unable_to_open_file_4_p_0(HdrFileName_18, Error_21);
    }
    else
    {
      MR_Word HdrFileStream_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OpenResult_19, (MR_Integer) 0))));
      MR_Word Var_25;
      MR_Word Var_28;
      MR_String Var_29;
      MR_Word Var_30;
      MR_Word Var_32;
      MR_Word Var_34;
      MR_String Var_35;
      MR_Word Var_36;
      MR_Word Var_38;
      MR_Word Var_40;
      MR_Word Var_42;
      MR_Word Var_44;
      MR_Word Var_46;
      MR_Word Var_48;
      MR_Word Var_50;
      MR_Word Var_52;
      MR_Word Var_54;
      MR_Word Var_56;
      MR_Word Var_58;
      MR_Word Var_60;
      MR_Word Var_62;
      MR_Word Var_64;
      MR_Word Var_66;
      MR_Word Var_68;
      MR_Word Var_70;
      MR_String Var_71;

      Var_29 = mercury__string__to_upper_1_f_0(Basename_6);
      Var_35 = mercury__string__to_upper_1_f_0(Basename_6);
      Var_71 = mercury__string__to_upper_1_f_0(Basename_6);
      {
        Var_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_70, 0) = ((MR_Box) (Var_71));
        MR_hl_field(MR_mktag(1), Var_70, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &backend_libs__compile_target_code_scalar_common_1[10])));
      }
      {
        Var_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_68, 0) = ((MR_Box) ((MR_String) "#endif /* "));
        MR_hl_field(MR_mktag(1), Var_68, 1) = ((MR_Box) (Var_70));
      }
      {
        Var_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_66, 0) = ((MR_Box) ((MR_String) "\n"));
        MR_hl_field(MR_mktag(1), Var_66, 1) = ((MR_Box) (Var_68));
      }
      {
        Var_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_64, 0) = ((MR_Box) ((MR_String) "#endif\n"));
        MR_hl_field(MR_mktag(1), Var_64, 1) = ((MR_Box) (Var_66));
      }
      {
        Var_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_62, 0) = ((MR_Box) ((MR_String) "}\n"));
        MR_hl_field(MR_mktag(1), Var_62, 1) = ((MR_Box) (Var_64));
      }
      {
        Var_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_60, 0) = ((MR_Box) ((MR_String) "#ifdef __cplusplus\n"));
        MR_hl_field(MR_mktag(1), Var_60, 1) = ((MR_Box) (Var_62));
      }
      {
        Var_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_58, 0) = ((MR_Box) ((MR_String) "\n"));
        MR_hl_field(MR_mktag(1), Var_58, 1) = ((MR_Box) (Var_60));
      }
      {
        Var_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_56, 0) = ((MR_Box) ((MR_String) "mercury_terminate(void);\n"));
        MR_hl_field(MR_mktag(1), Var_56, 1) = ((MR_Box) (Var_58));
      }
      {
        Var_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_54, 0) = ((MR_Box) ((MR_String) "extern int\n"));
        MR_hl_field(MR_mktag(1), Var_54, 1) = ((MR_Box) (Var_56));
      }
      {
        Var_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_52, 0) = ((MR_Box) ((MR_String) "\n"));
        MR_hl_field(MR_mktag(1), Var_52, 1) = ((MR_Box) (Var_54));
      }
      {
        Var_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_50, 0) = ((MR_Box) ((MR_String) "mercury_init(int argc, char **argv, void *stackbottom);\n"));
        MR_hl_field(MR_mktag(1), Var_50, 1) = ((MR_Box) (Var_52));
      }
      {
        Var_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_48, 0) = ((MR_Box) ((MR_String) "extern void\n"));
        MR_hl_field(MR_mktag(1), Var_48, 1) = ((MR_Box) (Var_50));
      }
      {
        Var_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_46, 0) = ((MR_Box) ((MR_String) "\n"));
        MR_hl_field(MR_mktag(1), Var_46, 1) = ((MR_Box) (Var_48));
      }
      {
        Var_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_44, 0) = ((MR_Box) ((MR_String) "#endif\n"));
        MR_hl_field(MR_mktag(1), Var_44, 1) = ((MR_Box) (Var_46));
      }
      {
        Var_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_42, 0) = ((MR_Box) ((MR_String) "extern \"C\" {\n"));
        MR_hl_field(MR_mktag(1), Var_42, 1) = ((MR_Box) (Var_44));
      }
      {
        Var_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_40, 0) = ((MR_Box) ((MR_String) "#ifdef __cplusplus\n"));
        MR_hl_field(MR_mktag(1), Var_40, 1) = ((MR_Box) (Var_42));
      }
      {
        Var_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_38, 0) = ((MR_Box) ((MR_String) "\n"));
        MR_hl_field(MR_mktag(1), Var_38, 1) = ((MR_Box) (Var_40));
      }
      {
        Var_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_36, 0) = ((MR_Box) ((MR_String) "_H\n"));
        MR_hl_field(MR_mktag(1), Var_36, 1) = ((MR_Box) (Var_38));
      }
      {
        Var_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_34, 0) = ((MR_Box) (Var_35));
        MR_hl_field(MR_mktag(1), Var_34, 1) = ((MR_Box) (Var_36));
      }
      {
        Var_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_32, 0) = ((MR_Box) ((MR_String) "#define "));
        MR_hl_field(MR_mktag(1), Var_32, 1) = ((MR_Box) (Var_34));
      }
      {
        Var_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_30, 0) = ((MR_Box) ((MR_String) "_H\n"));
        MR_hl_field(MR_mktag(1), Var_30, 1) = ((MR_Box) (Var_32));
      }
      {
        Var_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_28, 0) = ((MR_Box) (Var_29));
        MR_hl_field(MR_mktag(1), Var_28, 1) = ((MR_Box) (Var_30));
      }
      {
        Var_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_25, 0) = ((MR_Box) ((MR_String) "#ifndef "));
        MR_hl_field(MR_mktag(1), Var_25, 1) = ((MR_Box) (Var_28));
      }
      mercury__io__write_strings_4_p_0(HdrFileStream_20, Var_25);
      mercury__io__close_output_3_p_0(HdrFileStream_20);
      backend_libs__compile_target_code__make_standalone_int_body_4_p_0(Globals_5, Basename_6);
    }
  }
}

static void MR_CALL 
backend_libs__compile_target_code__make_standalone_int_body_4_p_0(
  MR_Word Globals_5,
  MR_String Basename_6)
{
  {
    MR_bool succeeded;
    MR_Word InitFiles0_8;
    MR_Word InitFiles1_9;
    MR_Word TraceInitFiles0_10;
    MR_Word MaybeStdLibDir_11;
    MR_String GradeDir_12;
    MR_Word InitFiles2_14;
    MR_Word TraceInitFiles_15;
    MR_Word SourceDebugInitFiles_16;
    MR_Word TraceLevel_17;
    MR_Word TraceLevelIsNone_18;
    MR_String TraceOpt_19;
    MR_Word InitFiles3_20;
    MR_Word SourceDebug_21;
    MR_Word InitFiles_22;
    MR_Word RuntimeFlagsList_23;
    MR_String RuntimeFlags_24;
    MR_Word InitFileDirsList_25;
    MR_String InitFileDirs_26;
    MR_String ExperimentalComplexity_27;
    MR_String ExperimentalComplexityOpt_28;
    MR_String Grade_29;
    MR_String MkInit_30;
    MR_String CFileName_31;
    MR_Word ErrorStream_32;
    MR_String MkInitArgs_33;
    MR_Word MkInitCmdOk_34;
    MR_Word Var_86;
    MR_Word Var_88;
    MR_Word Var_89;
    MR_Word Var_91;
    MR_Word Var_92;
    MR_Word Var_94;
    MR_Word Var_95;
    MR_Word Var_97;
    MR_Word Var_98;
    MR_Word Var_100;
    MR_String Var_101;
    MR_Word Var_102;
    MR_Word Var_104;

    libs__globals__lookup_accumulating_option_3_p_0(Globals_5, (MR_Integer) 582, &InitFiles0_8);
    mercury__list__remove_dups_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), InitFiles0_8, &InitFiles1_9);
    libs__globals__lookup_accumulating_option_3_p_0(Globals_5, (MR_Integer) 583, &TraceInitFiles0_10);
    libs__globals__lookup_maybe_string_option_3_p_0(Globals_5, (MR_Integer) 579, &MaybeStdLibDir_11);
    libs__compute_grade__grade_directory_component_2_p_0(Globals_5, &GradeDir_12);
    if ((MaybeStdLibDir_11 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      InitFiles2_14 = InitFiles1_9;
      TraceInitFiles_15 = TraceInitFiles0_10;
      SourceDebugInitFiles_16 = (MR_Word) ((MR_Unsigned) 0U);
    }
    else
    {
      MR_String StdLibDir_13 = ((MR_String) ((MR_hl_field(MR_mktag(1), MaybeStdLibDir_11, (MR_Integer) 0))));
      MR_String Var_44;
      MR_String Var_45;
      MR_String Var_46;
      MR_Word Var_49;
      MR_String Var_50;
      MR_String Var_51;
      MR_String Var_52;
      MR_String Var_55;
      MR_String Var_56;
      MR_String Var_57;
      MR_Word Var_60;
      MR_String Var_61;
      MR_String Var_62;
      MR_String Var_63;
      MR_String Var_66;
      MR_String Var_67;
      MR_String Var_68;

      Var_46 = mercury__dir__f_slash_2_f_0(StdLibDir_13, (MR_String) "modules");
      Var_45 = mercury__dir__f_slash_2_f_0(Var_46, GradeDir_12);
      Var_44 = mercury__dir__f_slash_2_f_0(Var_45, (MR_String) "mer_rt.init");
      Var_52 = mercury__dir__f_slash_2_f_0(StdLibDir_13, (MR_String) "modules");
      Var_51 = mercury__dir__f_slash_2_f_0(Var_52, GradeDir_12);
      Var_50 = mercury__dir__f_slash_2_f_0(Var_51, (MR_String) "mer_std.init");
      {
        Var_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_49, 0) = ((MR_Box) (Var_50));
        MR_hl_field(MR_mktag(1), Var_49, 1) = ((MR_Box) (InitFiles1_9));
      }
      {
        InitFiles2_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), InitFiles2_14, 0) = ((MR_Box) (Var_44));
        MR_hl_field(MR_mktag(1), InitFiles2_14, 1) = ((MR_Box) (Var_49));
      }
      Var_57 = mercury__dir__f_slash_2_f_0(StdLibDir_13, (MR_String) "modules");
      Var_56 = mercury__dir__f_slash_2_f_0(Var_57, GradeDir_12);
      Var_55 = mercury__dir__f_slash_2_f_0(Var_56, (MR_String) "mer_browser.init");
      Var_63 = mercury__dir__f_slash_2_f_0(StdLibDir_13, (MR_String) "modules");
      Var_62 = mercury__dir__f_slash_2_f_0(Var_63, GradeDir_12);
      Var_61 = mercury__dir__f_slash_2_f_0(Var_62, (MR_String) "mer_mdbcomp.init");
      {
        Var_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_60, 0) = ((MR_Box) (Var_61));
        MR_hl_field(MR_mktag(1), Var_60, 1) = ((MR_Box) (TraceInitFiles0_10));
      }
      {
        TraceInitFiles_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), TraceInitFiles_15, 0) = ((MR_Box) (Var_55));
        MR_hl_field(MR_mktag(1), TraceInitFiles_15, 1) = ((MR_Box) (Var_60));
      }
      Var_68 = mercury__dir__f_slash_2_f_0(StdLibDir_13, (MR_String) "modules");
      Var_67 = mercury__dir__f_slash_2_f_0(Var_68, GradeDir_12);
      Var_66 = mercury__dir__f_slash_2_f_0(Var_67, (MR_String) "mer_ssdb.init");
      {
        SourceDebugInitFiles_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), SourceDebugInitFiles_16, 0) = ((MR_Box) (Var_66));
        MR_hl_field(MR_mktag(1), SourceDebugInitFiles_16, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
    }
    libs__globals__get_trace_level_2_p_0(Globals_5, &TraceLevel_17);
    TraceLevelIsNone_18 = libs__trace_params__given_trace_level_is_none_1_f_0(TraceLevel_17);
    switch (TraceLevelIsNone_18) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          TraceOpt_19 = (MR_String) "-t";
          InitFiles3_20 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), InitFiles2_14, TraceInitFiles_15);
        }
        break;
      case (MR_Integer) 1:
        {
          TraceOpt_19 = (MR_String) "";
          InitFiles3_20 = InitFiles2_14;
        }
        break;
    }
    libs__globals__lookup_bool_option_3_p_0(Globals_5, (MR_Integer) 259, &SourceDebug_21);
    switch (SourceDebug_21) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        InitFiles_22 = InitFiles3_20;
        break;
      case (MR_Integer) 1:
        InitFiles_22 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), InitFiles3_20, SourceDebugInitFiles_16);
        break;
    }
    libs__globals__lookup_accumulating_option_3_p_0(Globals_5, (MR_Integer) 593, &RuntimeFlagsList_23);
    backend_libs__compile_target_code__join_quoted_string_list_5_p_0(RuntimeFlagsList_23, (MR_String) "-r ", (MR_String) "", (MR_String) " ", &RuntimeFlags_24);
    libs__globals__lookup_accumulating_option_3_p_0(Globals_5, (MR_Integer) 581, &InitFileDirsList_25);
    backend_libs__compile_target_code__join_quoted_string_list_5_p_0(InitFileDirsList_25, (MR_String) "-I ", (MR_String) "", (MR_String) " ", &InitFileDirs_26);
    libs__globals__lookup_string_option_3_p_0(Globals_5, (MR_Integer) 238, &ExperimentalComplexity_27);
    succeeded = (strcmp(ExperimentalComplexity_27, (MR_String) "") == 0);
    if (succeeded)
      ExperimentalComplexityOpt_28 = (MR_String) "";
    else
      ExperimentalComplexityOpt_28 = mercury__string__f_43_43_2_f_0((MR_String) "-X ", ExperimentalComplexity_27);
    libs__compute_grade__compute_grade_2_p_0(Globals_5, &Grade_29);
    libs__globals__lookup_string_option_3_p_0(Globals_5, (MR_Integer) 609, &MkInit_30);
    CFileName_31 = mercury__string__f_43_43_2_f_0(Basename_6, (MR_String) ".c");
    mercury__io__output_stream_3_p_0(&ErrorStream_32);
    Var_101 = libs__options__quote_arg_1_f_0(CFileName_31);
    {
      Var_104 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_104, 0) = ((MR_Box) (InitFileDirs_26));
      MR_hl_field(MR_mktag(1), Var_104, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &backend_libs__compile_target_code_scalar_common_1[9])));
    }
    {
      Var_102 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_102, 0) = ((MR_Box) ((MR_String) " "));
      MR_hl_field(MR_mktag(1), Var_102, 1) = ((MR_Box) (Var_104));
    }
    {
      Var_100 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_100, 0) = ((MR_Box) (Var_101));
      MR_hl_field(MR_mktag(1), Var_100, 1) = ((MR_Box) (Var_102));
    }
    {
      Var_98 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_98, 0) = ((MR_Box) ((MR_String) " -o "));
      MR_hl_field(MR_mktag(1), Var_98, 1) = ((MR_Box) (Var_100));
    }
    {
      Var_97 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_97, 0) = ((MR_Box) (RuntimeFlags_24));
      MR_hl_field(MR_mktag(1), Var_97, 1) = ((MR_Box) (Var_98));
    }
    {
      Var_95 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_95, 0) = ((MR_Box) ((MR_String) " "));
      MR_hl_field(MR_mktag(1), Var_95, 1) = ((MR_Box) (Var_97));
    }
    {
      Var_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_94, 0) = ((MR_Box) (ExperimentalComplexityOpt_28));
      MR_hl_field(MR_mktag(1), Var_94, 1) = ((MR_Box) (Var_95));
    }
    {
      Var_92 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_92, 0) = ((MR_Box) ((MR_String) " "));
      MR_hl_field(MR_mktag(1), Var_92, 1) = ((MR_Box) (Var_94));
    }
    {
      Var_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_91, 0) = ((MR_Box) (TraceOpt_19));
      MR_hl_field(MR_mktag(1), Var_91, 1) = ((MR_Box) (Var_92));
    }
    {
      Var_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_89, 0) = ((MR_Box) ((MR_String) " "));
      MR_hl_field(MR_mktag(1), Var_89, 1) = ((MR_Box) (Var_91));
    }
    {
      Var_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_88, 0) = ((MR_Box) (Grade_29));
      MR_hl_field(MR_mktag(1), Var_88, 1) = ((MR_Box) (Var_89));
    }
    {
      Var_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_86, 0) = ((MR_Box) ((MR_String) " -g "));
      MR_hl_field(MR_mktag(1), Var_86, 1) = ((MR_Box) (Var_88));
    }
    MkInitArgs_33 = mercury__string__append_list_1_f_0(Var_86);
    backend_libs__compile_target_code__invoke_mkinit_9_p_0(Globals_5, ErrorStream_32, (MR_Integer) 1, MkInit_30, MkInitArgs_33, InitFiles_22, &MkInitCmdOk_34);
    switch (MkInitCmdOk_34) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
          mercury__io__write_string_3_p_0((MR_String) "mercury_compile: error while creating ");
          mercury__io__write_string_3_p_0((MR_String) "standalone interface in \140");
          mercury__io__write_string_3_p_0(CFileName_31);
          mercury__io__write_string_3_p_0((MR_String) "\'\n");
        }
        break;
      case (MR_Integer) 1:
        {
          MR_String ObjExt_36;
          MR_String ObjFileName_37;
          MR_Word CompileOk_38;

          libs__globals__lookup_string_option_3_p_0(Globals_5, (MR_Integer) 541, &ObjExt_36);
          ObjFileName_37 = mercury__string__f_43_43_2_f_0(Basename_6, ObjExt_36);
          backend_libs__compile_target_code__do_compile_c_file_8_p_0(Globals_5, ErrorStream_32, (MR_Integer) 1, CFileName_31, ObjFileName_37, &CompileOk_38);
          switch (CompileOk_38) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
                mercury__io__write_string_3_p_0((MR_String) "mercury_compile: error while compiling ");
                mercury__io__write_string_3_p_0((MR_String) "standalone interface in \140");
                mercury__io__write_string_3_p_0(CFileName_31);
                mercury__io__write_string_3_p_0((MR_String) "\'\n");
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
backend_libs__compile_target_code__maybe_pic_object_file_extension_3_p_1(
  MR_Word Globals_1,
  MR_Word * PIC_2,
  MR_String Ext_3)
{
  {
    MR_bool succeeded;
    MR_String Var_14;

    libs__globals__lookup_string_option_3_p_0(Globals_1, (MR_Integer) 541, &Var_14);
    succeeded = (strcmp(Ext_3, Var_14) == 0);
    if (succeeded)
    {
      *PIC_2 = (MR_Integer) 1;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_String Var_15;

      libs__globals__lookup_string_option_3_p_0(Globals_1, (MR_Integer) 542, &Var_15);
      succeeded = (strcmp(Ext_3, Var_15) == 0);
      if (succeeded)
      {
        *PIC_2 = (MR_Integer) 0;
        succeeded = MR_TRUE;
      }
    }
    return succeeded;
  }
}

void MR_CALL 
backend_libs__compile_target_code__maybe_pic_object_file_extension_3_p_0(
  MR_Word Globals_1,
  MR_Word PIC_2,
  MR_String * Ext_3)
{
  switch (PIC_2) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      libs__globals__lookup_string_option_3_p_0(Globals_1, (MR_Integer) 541, Ext_3);
      break;
    case (MR_Integer) 0:
      libs__globals__lookup_string_option_3_p_0(Globals_1, (MR_Integer) 542, Ext_3);
      break;
  }
}

void MR_CALL 
backend_libs__compile_target_code__get_linked_target_type_2_p_0(
  MR_Word Globals_3,
  MR_Word * LinkedTargetType_4)
{
  {
    MR_Word MakeSharedLib_5;

    libs__globals__lookup_bool_option_3_p_0(Globals_3, (MR_Integer) 118, &MakeSharedLib_5);
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
      case (MR_Integer) 8:
      case (MR_Integer) 7:
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

          libs__globals__lookup_string_option_3_p_0(Globals_4, (MR_Integer) 542, &PicObjExt_7);
          libs__globals__lookup_string_option_3_p_0(Globals_4, (MR_Integer) 541, &ObjExt_8);
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
backend_libs__compile_target_code__link_module_list_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_LambdaHeadVar__2_43;

    backend_libs__compile_target_code__IntroducedFrom__pred__link_module_list__1635__1_2_p_0(((MR_String) (wrapper_arg_1)), &conv0_LambdaHeadVar__2_43);
    *wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_43));
  }
}

void MR_CALL 
backend_libs__compile_target_code__link_module_list_6_p_0(
  MR_Word Modules_7,
  MR_Word ExtraObjFiles_8,
  MR_Word Globals_9,
  MR_Word * Succeeded_10)
{
  {
    MR_bool succeeded;
    MR_String OutputFileName0_12;
    MR_String OutputFileName_15;
    MR_Word MainModuleName_16;
    MR_Word CompileToSharedLib_17;
    MR_Word TargetType_18;
    MR_String Obj_20;
    MR_Word OutputStream_21;
    MR_Word ObjectsList_22;

    libs__globals__lookup_string_option_3_p_0(Globals_9, (MR_Integer) 563, &OutputFileName0_12);
    libs__globals__lookup_bool_option_3_p_0(Globals_9, (MR_Integer) 118, &CompileToSharedLib_17);
    switch (CompileToSharedLib_17) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          TargetType_18 = (MR_Integer) 0;
          libs__globals__lookup_string_option_3_p_0(Globals_9, (MR_Integer) 541, &Obj_20);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_String PicObjExt_93;
          MR_String ObjExt_94;

          TargetType_18 = (MR_Integer) 2;
          libs__globals__lookup_string_option_3_p_0(Globals_9, (MR_Integer) 542, &PicObjExt_93);
          libs__globals__lookup_string_option_3_p_0(Globals_9, (MR_Integer) 541, &ObjExt_94);
          succeeded = (strcmp(PicObjExt_93, ObjExt_94) == 0);
          if (succeeded)
            libs__globals__lookup_string_option_3_p_0(Globals_9, (MR_Integer) 541, &Obj_20);
          else
            libs__globals__lookup_string_option_3_p_0(Globals_9, (MR_Integer) 542, &Obj_20);
        }
        break;
    }
    mercury__io__output_stream_3_p_0(&OutputStream_21);
    succeeded = (strcmp(OutputFileName0_12, (MR_String) "") == 0);
    if (succeeded)
    {
      MR_String Module_70;
      MR_Word Modules_71;
      MR_String FileName_73;
      MR_Word FileNames_74;
      MR_Word ModuleName_76;
      MR_String Var_79;

      if ((Modules_7 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140backend_libs.compile_target_code.link_module_list\'/6", (MR_String) "no modules");
          return;
        }
      else
        OutputFileName_15 = ((MR_String) ((MR_hl_field(MR_mktag(1), Modules_7, (MR_Integer) 0))));
      Module_70 = ((MR_String) ((MR_hl_field(MR_mktag(1), Modules_7, (MR_Integer) 0))));
      Modules_71 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Modules_7, (MR_Integer) 1))));
      Var_79 = mercury__dir__det_basename_1_f_0(Module_70);
      parse_tree__file_names__file_name_to_module_name_2_p_0(Var_79, &ModuleName_76);
      parse_tree__file_names__module_name_to_file_name_7_p_0(Globals_9, (MR_Integer) 1, Obj_20, ModuleName_76, &FileName_73);
      backend_libs__compile_target_code__join_module_list_6_p_0(Globals_9, Modules_71, Obj_20, &FileNames_74);
      {
        ObjectsList_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), ObjectsList_22, 0) = ((MR_Box) (FileName_73));
        MR_hl_field(MR_mktag(1), ObjectsList_22, 1) = ((MR_Box) (FileNames_74));
      }
    }
    else
    {
      OutputFileName_15 = OutputFileName0_12;
      backend_libs__compile_target_code__join_module_list_6_p_0(Globals_9, Modules_7, Obj_20, &ObjectsList_22);
    }
    parse_tree__file_names__file_name_to_module_name_2_p_0(OutputFileName_15, &MainModuleName_16);
    switch (TargetType_18) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word ModuleNames_25;
          MR_Word InitObjResult_27;

          mercury__list__map_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&backend_libs__compile_target_code_scalar_common_5[11]), Modules_7, &ModuleNames_25);
          backend_libs__compile_target_code__do_make_init_obj_file_8_p_0(Globals_9, OutputStream_21, (MR_Integer) 1, MainModuleName_16, ModuleNames_25, &InitObjResult_27);
          if ((InitObjResult_27 == (MR_Word) ((MR_Unsigned) 0U)))
            *Succeeded_10 = (MR_Integer) 0;
          else
          {
            MR_String InitObjFileName_28 = ((MR_String) ((MR_hl_field(MR_mktag(1), InitObjResult_27, (MR_Integer) 0))));
            MR_Word ExtraLinkObjectsList_29;
            MR_Word AllObjects0_30;
            MR_Word AllObjects_31;
            MR_Word Var_47;

            libs__globals__lookup_accumulating_option_3_p_0(Globals_9, (MR_Integer) 572, &ExtraLinkObjectsList_29);
            Var_47 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ExtraLinkObjectsList_29, ExtraObjFiles_8);
            AllObjects0_30 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ObjectsList_22, Var_47);
            succeeded = (strcmp(InitObjFileName_28, (MR_String) "") == 0);
            if (succeeded)
              AllObjects_31 = AllObjects0_30;
            else
              {
                AllObjects_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), AllObjects_31, 0) = ((MR_Box) (InitObjFileName_28));
                MR_hl_field(MR_mktag(1), AllObjects_31, 1) = ((MR_Box) (AllObjects0_30));
              }
            backend_libs__compile_target_code__link_8_p_0(Globals_9, OutputStream_21, TargetType_18, MainModuleName_16, AllObjects_31, Succeeded_10);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ExtraLinkObjectsList_107;
          MR_Word AllObjects_109;
          MR_Word Var_112;

          libs__globals__lookup_accumulating_option_3_p_0(Globals_9, (MR_Integer) 572, &ExtraLinkObjectsList_107);
          Var_112 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ExtraLinkObjectsList_107, ExtraObjFiles_8);
          AllObjects_109 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ObjectsList_22, Var_112);
          backend_libs__compile_target_code__link_8_p_0(Globals_9, OutputStream_21, TargetType_18, MainModuleName_16, AllObjects_109, Succeeded_10);
        }
        break;
    }
  }
}

static void MR_CALL 
backend_libs__compile_target_code__join_module_list_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_String HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_String Module_13 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
    MR_Word Modules_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
    MR_String FileName_16;
    MR_Word FileNames_17;
    MR_Word ModuleName_19;
    MR_String Var_22;

    Var_22 = mercury__dir__det_basename_1_f_0(Module_13);
    parse_tree__file_names__file_name_to_module_name_2_p_0(Var_22, &ModuleName_19);
    parse_tree__file_names__module_name_to_file_name_7_p_0(HeadVar__1_1, (MR_Integer) 1, HeadVar__3_3, ModuleName_19, &FileName_16);
    backend_libs__compile_target_code__join_module_list_6_p_0(HeadVar__1_1, Modules_14, HeadVar__3_3, &FileNames_17);
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
backend_libs__compile_target_code__link_8_p_0(
  MR_Word Globals_9,
  MR_Word ErrorStream_10,
  MR_Word LinkTargetType_11,
  MR_Word ModuleName_12,
  MR_Word ObjectsList_13,
  MR_Word * Succeeded_14)
{
  {
    MR_Word Verbose_16;
    MR_Word Stats_17;
    MR_String OutputFileName_19;
    MR_Word LinkSucceeded_20;

    libs__globals__lookup_bool_option_3_p_0(Globals_9, (MR_Integer) 63, &Verbose_16);
    libs__globals__lookup_bool_option_3_p_0(Globals_9, (MR_Integer) 73, &Stats_17);
    libs__file_util__maybe_write_string_4_p_0(Verbose_16, (MR_String) "% Linking...\n");
    switch (LinkTargetType_11) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 3:
        parse_tree__file_names__module_name_to_file_name_7_p_0(Globals_9, (MR_Integer) 0, (MR_String) ".exe", ModuleName_12, &OutputFileName_19);
        break;
      case (MR_Integer) 4:
        parse_tree__file_names__module_name_to_file_name_7_p_0(Globals_9, (MR_Integer) 0, (MR_String) ".dll", ModuleName_12, &OutputFileName_19);
        break;
      case (MR_Integer) 8:
        parse_tree__file_names__module_name_to_lib_file_name_8_p_0(Globals_9, (MR_String) "lib", ModuleName_12, (MR_String) ".beams", (MR_Integer) 0, &OutputFileName_19);
        break;
      case (MR_Integer) 7:
        {
          MR_Word TargetEnvType_73;
          MR_String _Ext_76;

          libs__globals__get_target_env_type_2_p_0(Globals_9, &TargetEnvType_73);
          _Ext_76 = ((&backend_libs__compile_target_code_vector_common_9[10 + TargetEnvType_73]))->backend_libs__compile_target_code__vector_common_type_9_0__vct_9_f_0;
          parse_tree__file_names__module_name_to_file_name_7_p_0(Globals_9, (MR_Integer) 0, _Ext_76, ModuleName_12, &OutputFileName_19);
        }
        break;
      case (MR_Integer) 0:
        {
          MR_String _Ext_77;

          libs__globals__lookup_string_option_3_p_0(Globals_9, (MR_Integer) 601, &_Ext_77);
          parse_tree__file_names__module_name_to_file_name_7_p_0(Globals_9, (MR_Integer) 0, _Ext_77, ModuleName_12, &OutputFileName_19);
        }
        break;
      case (MR_Integer) 6:
        parse_tree__file_names__module_name_to_file_name_7_p_0(Globals_9, (MR_Integer) 0, (MR_String) ".jar", ModuleName_12, &OutputFileName_19);
        break;
      case (MR_Integer) 5:
        parse_tree__file_names__module_name_to_file_name_7_p_0(Globals_9, (MR_Integer) 0, (MR_String) ".jar", ModuleName_12, &OutputFileName_19);
        break;
      case (MR_Integer) 2:
        {
          MR_String _Ext_80;

          libs__globals__lookup_string_option_3_p_0(Globals_9, (MR_Integer) 599, &_Ext_80);
          parse_tree__file_names__module_name_to_lib_file_name_8_p_0(Globals_9, (MR_String) "lib", ModuleName_12, _Ext_80, (MR_Integer) 0, &OutputFileName_19);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_String _Ext_81;

          libs__globals__lookup_string_option_3_p_0(Globals_9, (MR_Integer) 600, &_Ext_81);
          parse_tree__file_names__module_name_to_lib_file_name_8_p_0(Globals_9, (MR_String) "lib", ModuleName_12, _Ext_81, (MR_Integer) 0, &OutputFileName_19);
        }
        break;
    }
    switch (LinkTargetType_11) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 3:
      case (MR_Integer) 4:
        backend_libs__compile_target_code__create_csharp_exe_or_lib_9_p_0(Globals_9, ErrorStream_10, LinkTargetType_11, ModuleName_12, OutputFileName_19, ObjectsList_13, &LinkSucceeded_20);
        break;
      case (MR_Integer) 8:
        backend_libs__compile_target_code__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_101_114_108_97_110_103_95_97_114_99_104_105_118_101_95_95_91_51_93_95_48_8_p_0(Globals_9, ErrorStream_10, OutputFileName_19, ObjectsList_13, &LinkSucceeded_20);
        break;
      case (MR_Integer) 7:
        parse_tree__module_cmds__create_erlang_shell_script_5_p_0(Globals_9, ModuleName_12, &LinkSucceeded_20);
        break;
      case (MR_Integer) 0:
        backend_libs__compile_target_code__link_exe_or_shared_lib_9_p_0(Globals_9, ErrorStream_10, LinkTargetType_11, ModuleName_12, OutputFileName_19, ObjectsList_13, &LinkSucceeded_20);
        break;
      case (MR_Integer) 6:
      case (MR_Integer) 5:
        backend_libs__compile_target_code__create_java_exe_or_lib_9_p_0(Globals_9, ErrorStream_10, LinkTargetType_11, ModuleName_12, OutputFileName_19, ObjectsList_13, &LinkSucceeded_20);
        break;
      case (MR_Integer) 2:
        backend_libs__compile_target_code__link_exe_or_shared_lib_9_p_0(Globals_9, ErrorStream_10, LinkTargetType_11, ModuleName_12, OutputFileName_19, ObjectsList_13, &LinkSucceeded_20);
        break;
      case (MR_Integer) 1:
        backend_libs__compile_target_code__create_archive_8_p_0(Globals_9, ErrorStream_10, OutputFileName_19, (MR_Integer) 1, ObjectsList_13, &LinkSucceeded_20);
        break;
    }
    libs__file_util__maybe_report_stats_3_p_0(Stats_17);
    switch (LinkSucceeded_20) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *Succeeded_14 = (MR_Integer) 0;
        break;
      case (MR_Integer) 1:
        {
          MR_Word _MadeSymlinkOrCopy_21;

          backend_libs__compile_target_code__post_link_make_symlink_or_copy_8_p_0(Globals_9, ErrorStream_10, LinkTargetType_11, ModuleName_12, Succeeded_14, &_MadeSymlinkOrCopy_21);
        }
        break;
    }
  }
}

static void MR_CALL 
backend_libs__compile_target_code__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_101_114_108_97_110_103_95_97_114_99_104_105_118_101_95_95_91_51_93_95_48_8_p_0(
  MR_Word Globals_9,
  MR_Word ErrorStream_10,
  MR_String ErlangArchiveFileName_12,
  MR_Word ObjectList_13,
  MR_Word * Succeeded_14)
{
  {
    MR_Word Res_17;
    MR_Word Var_16;

    mercury__io__remove_file_recursively_4_p_0(ErlangArchiveFileName_12, &Var_16);
    mercury__dir__make_directory_4_p_0(ErlangArchiveFileName_12, &Res_17);
    if ((Res_17 == (MR_Word) ((MR_Unsigned) 0U)))
      backend_libs__compile_target_code__copy_erlang_archive_files_7_p_0(Globals_9, ErrorStream_10, ErlangArchiveFileName_12, ObjectList_13, Succeeded_14);
    else
    {
      MR_Word Error_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Res_17, (MR_Integer) 0))));
      MR_String Var_28;

      mercury__io__write_string_4_p_0(ErrorStream_10, (MR_String) "Error creating \140");
      mercury__io__write_string_4_p_0(ErrorStream_10, ErlangArchiveFileName_12);
      mercury__io__write_string_4_p_0(ErrorStream_10, (MR_String) "\': ");
      Var_28 = mercury__io__error_message_1_f_0(Error_18);
      mercury__io__write_string_4_p_0(ErrorStream_10, Var_28);
      mercury__io__nl_3_p_0(ErrorStream_10);
      *Succeeded_14 = (MR_Integer) 0;
    }
  }
}

static void MR_CALL 
backend_libs__compile_target_code__copy_erlang_archive_files_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_String HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__5_5 = (MR_Integer) 1;
    else
    {
      MR_String Obj_17 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 0))));
      MR_Word Objs_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 1))));
      MR_Word Res_21;

      parse_tree__module_cmds__copy_file_6_p_0(HeadVar__1_1, Obj_17, HeadVar__3_3, &Res_21);
      if ((Res_21 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word next_value_of_HeadVar__4_4 = Objs_18;

        // direct tailcall eliminated
        ;
        HeadVar__4_4 = next_value_of_HeadVar__4_4;
        continue;
      }
      else
      {
        MR_Word Error_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Res_21, (MR_Integer) 0))));
        MR_String Var_31;

        mercury__io__write_string_4_p_0(HeadVar__2_2, (MR_String) "Error copying \140");
        mercury__io__write_string_4_p_0(HeadVar__2_2, Obj_17);
        mercury__io__write_string_4_p_0(HeadVar__2_2, (MR_String) "\': ");
        Var_31 = mercury__io__error_message_1_f_0(Error_22);
        mercury__io__write_string_4_p_0(HeadVar__2_2, Var_31);
        mercury__io__nl_3_p_0(HeadVar__2_2);
        *HeadVar__5_5 = (MR_Integer) 0;
      }
    }
    break;
  }
}

static void MR_CALL 
backend_libs__compile_target_code__create_java_exe_or_lib_9_p_0_1(
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
backend_libs__compile_target_code__create_java_exe_or_lib_9_p_0(
  MR_Word Globals_10,
  MR_Word ErrorStream_11,
  MR_Word LinkTargetType_12,
  MR_Word MainModuleName_13,
  MR_String JarFileName_14,
  MR_Word ObjectList_15,
  MR_Word * Succeeded_16)
{
  {
    MR_bool succeeded;
    MR_String Jar_18;
    MR_String ClassSubDir_19;
    MR_Word ListClassFiles_20;
    MR_Word TempFileResult_23;
    MR_Word Succeeded0_27;

    libs__globals__lookup_string_option_3_p_0(Globals_10, (MR_Integer) 649, &Jar_18);
    parse_tree__module_cmds__list_class_files_for_jar_6_p_0(Globals_10, ObjectList_15, &ClassSubDir_19, &ListClassFiles_20);
    if ((ListClassFiles_20 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140backend_libs.compile_target_code.create_java_exe_or_lib\'/9", (MR_String) "empty list of .class files");
        return;
      }
    libs__file_util__open_temp_output_6_p_0((MR_String) ".", (MR_String) "mtmp", (MR_String) "", &TempFileResult_23);
    if (((MR_tag((MR_Word) TempFileResult_23)) == (MR_Integer) 1))
    {
      MR_String ErrorMessage_30 = ((MR_String) ((MR_hl_field(MR_mktag(1), TempFileResult_23, (MR_Integer) 0))));

      mercury__io__write_string_4_p_0(ErrorStream_11, ErrorMessage_30);
      mercury__io__nl_2_p_0();
      Succeeded0_27 = (MR_Integer) 0;
    }
    else
    {
      MR_String TempFileName_24;
      MR_Word Stream_25;
      MR_String Cmd_26;
      MR_Tuple Var_43 = ((MR_Tuple) ((MR_hl_field(MR_mktag(0), TempFileResult_23, (MR_Integer) 0))));
      MR_Word Var_44;
      MR_Word Var_47;
      MR_Word Var_48;
      MR_Word Var_50;
      MR_Word Var_51;
      MR_Word Var_53;
      MR_Box conv0_STATE_VARIABLE_IO_45_45;
      MR_Word Var_28;

      TempFileName_24 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_43, (MR_Integer) 0))));
      Stream_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_43, (MR_Integer) 1))));
      {
        Var_44 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_44, 0) = ((MR_Box) (&backend_libs__compile_target_code_scalar_common_12[1]));
        MR_hl_field(MR_mktag(0), Var_44, 1) = ((MR_Box) (backend_libs__compile_target_code__create_java_exe_or_lib_9_p_0_1));
        MR_hl_field(MR_mktag(0), Var_44, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), Var_44, 3) = ((MR_Box) (Stream_25));
        MR_hl_field(MR_mktag(0), Var_44, 4) = ((MR_Box) (ClassSubDir_19));
      }
      mercury__list__foldl_4_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_44, ListClassFiles_20, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_45_45);
      mercury__io__close_output_3_p_0(Stream_25);
      {
        Var_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_53, 0) = ((MR_Box) (TempFileName_24));
        MR_hl_field(MR_mktag(1), Var_53, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_51, 0) = ((MR_Box) ((MR_String) " \100"));
        MR_hl_field(MR_mktag(1), Var_51, 1) = ((MR_Box) (Var_53));
      }
      {
        Var_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_50, 0) = ((MR_Box) (JarFileName_14));
        MR_hl_field(MR_mktag(1), Var_50, 1) = ((MR_Box) (Var_51));
      }
      {
        Var_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_48, 0) = ((MR_Box) ((MR_String) " cf "));
        MR_hl_field(MR_mktag(1), Var_48, 1) = ((MR_Box) (Var_50));
      }
      {
        Var_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_47, 0) = ((MR_Box) (Jar_18));
        MR_hl_field(MR_mktag(1), Var_47, 1) = ((MR_Box) (Var_48));
      }
      Cmd_26 = mercury__string__append_list_1_f_0(Var_47);
      parse_tree__module_cmds__invoke_system_command_7_p_0(Globals_10, ErrorStream_11, (MR_Integer) 1, Cmd_26, &Succeeded0_27);
      mercury__io__remove_file_4_p_0(TempFileName_24, &Var_28);
      switch (Succeeded0_27) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Var_29;

            mercury__io__remove_file_4_p_0(JarFileName_14, &Var_29);
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
      succeeded = (LinkTargetType_12 == (MR_Integer) 5);
    if (succeeded)
      parse_tree__module_cmds__create_java_shell_script_5_p_0(Globals_10, MainModuleName_13, Succeeded_16);
    else
      *Succeeded_16 = Succeeded0_27;
  }
}

static void MR_CALL 
backend_libs__compile_target_code__create_csharp_exe_or_lib_9_p_0_2(
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
backend_libs__compile_target_code__create_csharp_exe_or_lib_9_p_0_1(
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
backend_libs__compile_target_code__create_csharp_exe_or_lib_9_p_0(
  MR_Word Globals_10,
  MR_Word ErrorStream_11,
  MR_Word LinkTargetType_12,
  MR_Word MainModuleName_13,
  MR_String OutputFileName0_14,
  MR_Word SourceList0_15,
  MR_Word * Succeeded_16)
{
  {
    MR_bool succeeded;
    MR_Word EnvType_18;
    MR_Word CSharpCompilerType_19;
    MR_String OutputFileName_20;
    MR_Word SourceList_21;
    MR_String NoLogoOpt_22;
    MR_Word LineNumbers_23;
    MR_String NoWarnLineNumberOpt_24;
    MR_Word HighLevelData_26;
    MR_String HighLevelDataOpt_27;
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
    MR_Word Var_72;
    MR_Word Var_73;
    MR_Word Var_74;
    MR_Word Var_75;
    MR_Word Var_76;
    MR_Word Var_77;
    MR_Word Var_78;
    MR_String Var_79;
    MR_Word Var_81;
    MR_Word Var_82;
    MR_Word Var_83;
    MR_Word Var_84;
    MR_Word Var_86;

    libs__globals__get_system_env_type_2_p_0(Globals_10, &EnvType_18);
    libs__globals__get_csharp_compiler_type_2_p_0(Globals_10, &CSharpCompilerType_19);
    OutputFileName_20 = backend_libs__compile_target_code__csharp_file_name_3_f_0(EnvType_18, CSharpCompilerType_19, OutputFileName0_14);
    {
      Var_50 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_50, 0) = ((MR_Box) (&backend_libs__compile_target_code_scalar_common_11[0]));
      MR_hl_field(MR_mktag(0), Var_50, 1) = ((MR_Box) (backend_libs__compile_target_code__create_csharp_exe_or_lib_9_p_0_1));
      MR_hl_field(MR_mktag(0), Var_50, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_50, 3) = ((MR_Box) (EnvType_18));
      MR_hl_field(MR_mktag(0), Var_50, 4) = ((MR_Box) (CSharpCompilerType_19));
    }
    SourceList_21 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_50, SourceList0_15);
    switch (CSharpCompilerType_19) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        NoLogoOpt_22 = (MR_String) "-nologo ";
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        NoLogoOpt_22 = (MR_String) "";
        break;
    }
    libs__globals__lookup_bool_option_3_p_0(Globals_10, (MR_Integer) 155, &LineNumbers_23);
    switch (LineNumbers_23) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        NoWarnLineNumberOpt_24 = (MR_String) "";
        break;
      case (MR_Integer) 1:
        NoWarnLineNumberOpt_24 = (MR_String) "-nowarn:162,219 ";
        break;
    }
    libs__globals__lookup_string_option_3_p_0(Globals_10, (MR_Integer) 551, &Cmd_43);
    libs__globals__lookup_bool_option_3_p_0(Globals_10, (MR_Integer) 285, &HighLevelData_26);
    switch (HighLevelData_26) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        HighLevelDataOpt_27 = (MR_String) "";
        break;
      case (MR_Integer) 1:
        HighLevelDataOpt_27 = (MR_String) "-define:MR_HIGHLEVEL_DATA";
        break;
    }
    libs__globals__lookup_bool_option_3_p_0(Globals_10, (MR_Integer) 516, &Debug_28);
    switch (Debug_28) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        DebugOpt_29 = (MR_String) "";
        break;
      case (MR_Integer) 1:
        DebugOpt_29 = (MR_String) "-debug ";
        break;
    }
    libs__globals__lookup_accumulating_option_3_p_0(Globals_10, (MR_Integer) 552, &CSCFlagsList_30);
    switch (LinkTargetType_12) {
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
          libs__globals__lookup_string_option_3_p_0(Globals_10, (MR_Integer) 597, &KeyFile_33);
          succeeded = (strcmp(KeyFile_33, (MR_String) "") == 0);
          if (succeeded)
            SignAssemblyOpt_32 = (MR_String) "";
          else
          {
            MR_String Var_60;

            Var_60 = mercury__string__f_43_43_2_f_0(KeyFile_33, (MR_String) " ");
            SignAssemblyOpt_32 = mercury__string__f_43_43_2_f_0((MR_String) "-keyfile:", Var_60);
          }
        }
        break;
      case (MR_Integer) 8:
      case (MR_Integer) 7:
      case (MR_Integer) 0:
      case (MR_Integer) 6:
      case (MR_Integer) 5:
      case (MR_Integer) 2:
      case (MR_Integer) 1:
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140backend_libs.compile_target_code.create_csharp_exe_or_lib\'/9", (MR_String) "wrong target type");
          return;
        }
        break;
    }
    libs__globals__lookup_accumulating_option_3_p_0(Globals_10, (MR_Integer) 568, &LinkLibraryDirectoriesList0_34);
    LinkLibraryDirectoriesList_35 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_50, LinkLibraryDirectoriesList0_34);
    backend_libs__compile_target_code__join_quoted_string_list_5_p_0(LinkLibraryDirectoriesList_35, (MR_String) "-lib:", (MR_String) "", (MR_String) " ", &LinkLibraryDirectories_37);
    backend_libs__compile_target_code__get_link_libraries_4_p_0(Globals_10, &MaybeLinkLibraries_38);
    if ((MaybeLinkLibraries_38 == (MR_Word) ((MR_Unsigned) 0U)))
      LinkLibraries_41 = (MR_String) "";
    else
    {
      MR_Word LinkLibrariesList0_39 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeLinkLibraries_38, (MR_Integer) 0))));
      MR_Word LinkLibrariesList_40;

      LinkLibrariesList_40 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_50, LinkLibrariesList0_39);
      backend_libs__compile_target_code__join_quoted_string_list_5_p_0(LinkLibrariesList_40, (MR_String) "", (MR_String) "", (MR_String) " ", &LinkLibraries_41);
    }
    backend_libs__compile_target_code__get_mercury_std_libs_3_p_0(Globals_10, LinkTargetType_12, &MercuryStdLibs_42);
    Var_79 = mercury__string__f_43_43_2_f_0((MR_String) "-out:", OutputFileName_20);
    {
      Var_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_84, 0) = ((MR_Box) (MercuryStdLibs_42));
      MR_hl_field(MR_mktag(1), Var_84, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_83, 0) = ((MR_Box) (LinkLibraries_41));
      MR_hl_field(MR_mktag(1), Var_83, 1) = ((MR_Box) (Var_84));
    }
    {
      Var_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_82, 0) = ((MR_Box) (LinkLibraryDirectories_37));
      MR_hl_field(MR_mktag(1), Var_82, 1) = ((MR_Box) (Var_83));
    }
    {
      Var_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_81, 0) = ((MR_Box) (SignAssemblyOpt_32));
      MR_hl_field(MR_mktag(1), Var_81, 1) = ((MR_Box) (Var_82));
    }
    {
      Var_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_78, 0) = ((MR_Box) (Var_79));
      MR_hl_field(MR_mktag(1), Var_78, 1) = ((MR_Box) (Var_81));
    }
    {
      Var_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_77, 0) = ((MR_Box) (TargetOption_31));
      MR_hl_field(MR_mktag(1), Var_77, 1) = ((MR_Box) (Var_78));
    }
    {
      Var_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_76, 0) = ((MR_Box) (DebugOpt_29));
      MR_hl_field(MR_mktag(1), Var_76, 1) = ((MR_Box) (Var_77));
    }
    {
      Var_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_75, 0) = ((MR_Box) (HighLevelDataOpt_27));
      MR_hl_field(MR_mktag(1), Var_75, 1) = ((MR_Box) (Var_76));
    }
    {
      Var_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_74, 0) = ((MR_Box) (NoWarnLineNumberOpt_24));
      MR_hl_field(MR_mktag(1), Var_74, 1) = ((MR_Box) (Var_75));
    }
    {
      Var_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_73, 0) = ((MR_Box) (NoLogoOpt_22));
      MR_hl_field(MR_mktag(1), Var_73, 1) = ((MR_Box) (Var_74));
    }
    Var_86 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), CSCFlagsList_30, SourceList_21);
    Var_72 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_73, Var_86);
    CmdArgs_44 = mercury__string__join_list_2_f_0((MR_String) " ", Var_72);
    backend_libs__compile_target_code__invoke_long_system_command_8_p_0(Globals_10, ErrorStream_11, (MR_Integer) 1, Cmd_43, CmdArgs_44, &Succeeded0_45);
    libs__globals__get_target_env_type_2_p_0(Globals_10, &TargetEnvType_46);
    libs__globals__lookup_string_option_3_p_0(Globals_10, (MR_Integer) 554, &CLI_47);
    succeeded = (Succeeded0_45 == (MR_Integer) 1);
    if (succeeded)
    {
      succeeded = (LinkTargetType_12 == (MR_Integer) 3);
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
      MR_Word Var_90;

      {
        Var_90 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_90, 0) = ((MR_Box) (&backend_libs__compile_target_code_scalar_common_12[0]));
        MR_hl_field(MR_mktag(0), Var_90, 1) = ((MR_Box) (backend_libs__compile_target_code__create_csharp_exe_or_lib_9_p_0_2));
        MR_hl_field(MR_mktag(0), Var_90, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), Var_90, 3) = ((MR_Box) (Globals_10));
        MR_hl_field(MR_mktag(0), Var_90, 4) = ((MR_Box) (OutputFileName_20));
      }
      parse_tree__module_cmds__create_launcher_shell_script_6_p_0(Globals_10, MainModuleName_13, Var_90, Succeeded_16);
    }
    else
      *Succeeded_16 = Succeeded0_45;
  }
}

static void MR_CALL 
backend_libs__compile_target_code__invoke_long_system_command_8_p_0(
  MR_Word Globals_9,
  MR_Word ErrorStream_10,
  MR_Word Verbosity_11,
  MR_String Cmd_12,
  MR_String Args_13,
  MR_Word * Succeeded_14)
{
  backend_libs__compile_target_code__invoke_long_system_command_maybe_filter_output_10_p_0(Globals_9, ErrorStream_10, Verbosity_11, Cmd_12, (MR_String) "", Args_13, (MR_Word) ((MR_Unsigned) 0U), Succeeded_14);
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
backend_libs__compile_target_code__link_exe_or_shared_lib_9_p_0(
  MR_Word Globals_10,
  MR_Word ErrorStream_11,
  MR_Word LinkTargetType_12,
  MR_Word ModuleName_13,
  MR_String OutputFileName_14,
  MR_Word ObjectsList_15,
  MR_Word * Succeeded_16)
{
  {
    MR_bool succeeded;
    MR_Word CommandOpt_18;
    MR_Word RpathFlagOpt_19;
    MR_Word RpathSepOpt_20;
    MR_Word LDFlagsOpt_21;
    MR_Word ThreadFlagsOpt_22;
    MR_Word DebugFlagsOpt_23;
    MR_Word TraceFlagsOpt_24;
    MR_String UndefOpt_26;
    MR_String ReserveStackSizeOpt_27;
    MR_String LTOOpts_28;
    MR_Word Strip_29;
    MR_String LinkerStripOpt_30;
    MR_String StripExeCommand_31;
    MR_String StripExeFlags_34;
    MR_Word TargetDebug_35;
    MR_String DebugOpts_36;
    MR_String SanitizerOpts_37;
    MR_String Linkage_38;
    MR_String StaticOpts_39;
    MR_Word UseThreadLibs_40;
    MR_String ThreadOpts_41;
    MR_String HwlocOpts_43;
    MR_String MercuryStdLibs_44;
    MR_String SystemLibs_45;
    MR_String ResCmdLinkOpts_46;
    MR_Word LDFlagsList_47;
    MR_String LDFlags_48;
    MR_Word LinkLibraryDirectoriesList_49;
    MR_String LinkerPathFlag_50;
    MR_String LinkLibraryDirectories_51;
    MR_String RpathOpts_52;
    MR_String FrameworkDirectories_53;
    MR_Word UseInstallName_54;
    MR_String InstallNameOpt_58;
    MR_Word TraceLevel_59;
    MR_Word TraceLevelIsNone_60;
    MR_String TraceOpts_61;
    MR_String Frameworks_62;
    MR_Word MaybeLinkLibraries_63;
    MR_String LinkOptSep_64;

    switch (LinkTargetType_12) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          CommandOpt_18 = (MR_Integer) 602;
          RpathFlagOpt_19 = (MR_Integer) 637;
          RpathSepOpt_20 = (MR_Integer) 638;
          LDFlagsOpt_21 = (MR_Integer) 564;
          ThreadFlagsOpt_22 = (MR_Integer) 622;
          DebugFlagsOpt_23 = (MR_Integer) 631;
          TraceFlagsOpt_24 = (MR_Integer) 634;
          UndefOpt_26 = (MR_String) "";
          ReserveStackSizeOpt_27 = backend_libs__compile_target_code__reserve_stack_size_flags_1_f_0(Globals_10);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word AllowUndef_25;

          CommandOpt_18 = (MR_Integer) 603;
          RpathFlagOpt_19 = (MR_Integer) 639;
          RpathSepOpt_20 = (MR_Integer) 640;
          LDFlagsOpt_21 = (MR_Integer) 566;
          ThreadFlagsOpt_22 = (MR_Integer) 623;
          DebugFlagsOpt_23 = (MR_Integer) 632;
          TraceFlagsOpt_24 = (MR_Integer) 635;
          libs__globals__lookup_bool_option_3_p_0(Globals_10, (MR_Integer) 591, &AllowUndef_25);
          switch (AllowUndef_25) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              libs__globals__lookup_string_option_3_p_0(Globals_10, (MR_Integer) 642, &UndefOpt_26);
              break;
            case (MR_Integer) 1:
              libs__globals__lookup_string_option_3_p_0(Globals_10, (MR_Integer) 641, &UndefOpt_26);
              break;
          }
          ReserveStackSizeOpt_27 = (MR_String) "";
        }
        break;
    }
    libs__globals__lookup_string_option_3_p_0(Globals_10, (MR_Integer) 624, &LTOOpts_28);
    libs__globals__lookup_bool_option_3_p_0(Globals_10, (MR_Integer) 588, &Strip_29);
    succeeded = (LinkTargetType_12 == (MR_Integer) 0);
    if (succeeded)
      succeeded = (Strip_29 == (MR_Integer) 1);
    if (succeeded)
    {
      MR_String MercuryLinkage_32;
      MR_Word StripExeFlagsOpt_33;

      libs__globals__lookup_string_option_3_p_0(Globals_10, (MR_Integer) 626, &LinkerStripOpt_30);
      libs__globals__lookup_string_option_3_p_0(Globals_10, (MR_Integer) 646, &StripExeCommand_31);
      libs__globals__lookup_string_option_3_p_0(Globals_10, (MR_Integer) 586, &MercuryLinkage_32);
      succeeded = (strcmp(MercuryLinkage_32, (MR_String) "shared") == 0);
      if (succeeded)
        StripExeFlagsOpt_33 = (MR_Integer) 647;
      else
        StripExeFlagsOpt_33 = (MR_Integer) 648;
      libs__globals__lookup_string_option_3_p_0(Globals_10, StripExeFlagsOpt_33, &StripExeFlags_34);
    }
    else
    {
      LinkerStripOpt_30 = (MR_String) "";
      StripExeCommand_31 = (MR_String) "";
      StripExeFlags_34 = (MR_String) "";
    }
    libs__globals__lookup_bool_option_3_p_0(Globals_10, (MR_Integer) 516, &TargetDebug_35);
    switch (TargetDebug_35) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        DebugOpts_36 = (MR_String) "";
        break;
      case (MR_Integer) 1:
        libs__globals__lookup_string_option_3_p_0(Globals_10, DebugFlagsOpt_23, &DebugOpts_36);
        break;
    }
    libs__globals__lookup_string_option_3_p_0(Globals_10, (MR_Integer) 633, &SanitizerOpts_37);
    libs__globals__lookup_string_option_3_p_0(Globals_10, (MR_Integer) 584, &Linkage_38);
    succeeded = (LinkTargetType_12 == (MR_Integer) 0);
    if (succeeded)
      succeeded = (strcmp(Linkage_38, (MR_String) "static") == 0);
    if (succeeded)
      libs__globals__lookup_string_option_3_p_0(Globals_10, (MR_Integer) 625, &StaticOpts_39);
    else
      StaticOpts_39 = (MR_String) "";
    backend_libs__compile_target_code__use_thread_libs_2_p_0(Globals_10, &UseThreadLibs_40);
    switch (UseThreadLibs_40) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          ThreadOpts_41 = (MR_String) "";
          HwlocOpts_43 = (MR_String) "";
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word HwlocFlagsOpt_42;

          libs__globals__lookup_string_option_3_p_0(Globals_10, ThreadFlagsOpt_22, &ThreadOpts_41);
          succeeded = (strcmp(Linkage_38, (MR_String) "shared") == 0);
          if (succeeded)
            HwlocFlagsOpt_42 = (MR_Integer) 616;
          else
          {
            succeeded = (strcmp(Linkage_38, (MR_String) "static") == 0);
            if (succeeded)
              HwlocFlagsOpt_42 = (MR_Integer) 617;
            else
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140backend_libs.compile_target_code.link_exe_or_shared_lib\'/9", (MR_String) "Invalid linkage");
                return;
              }
          }
          libs__globals__lookup_string_option_3_p_0(Globals_10, HwlocFlagsOpt_42, &HwlocOpts_43);
        }
        break;
    }
    backend_libs__compile_target_code__get_mercury_std_libs_3_p_0(Globals_10, LinkTargetType_12, &MercuryStdLibs_44);
    backend_libs__compile_target_code__get_system_libs_3_p_0(Globals_10, LinkTargetType_12, &SystemLibs_45);
    backend_libs__compile_target_code__get_restricted_command_line_link_opts_3_p_0(Globals_10, LinkTargetType_12, &ResCmdLinkOpts_46);
    libs__globals__lookup_accumulating_option_3_p_0(Globals_10, LDFlagsOpt_21, &LDFlagsList_47);
    backend_libs__compile_target_code__join_string_list_5_p_0(LDFlagsList_47, (MR_String) "", (MR_String) "", (MR_String) " ", &LDFlags_48);
    libs__globals__lookup_accumulating_option_3_p_0(Globals_10, (MR_Integer) 568, &LinkLibraryDirectoriesList_49);
    libs__globals__lookup_string_option_3_p_0(Globals_10, (MR_Integer) 636, &LinkerPathFlag_50);
    backend_libs__compile_target_code__join_quoted_string_list_5_p_0(LinkLibraryDirectoriesList_49, LinkerPathFlag_50, (MR_String) "", (MR_String) " ", &LinkLibraryDirectories_51);
    backend_libs__compile_target_code__get_runtime_library_path_opts_5_p_0(Globals_10, LinkTargetType_12, RpathFlagOpt_19, RpathSepOpt_20, &RpathOpts_52);
    backend_libs__compile_target_code__get_framework_directories_2_p_0(Globals_10, &FrameworkDirectories_53);
    libs__globals__lookup_bool_option_3_p_0(Globals_10, (MR_Integer) 643, &UseInstallName_54);
    succeeded = (UseInstallName_54 == (MR_Integer) 1);
    if (succeeded)
      succeeded = (LinkTargetType_12 == (MR_Integer) 2);
    if (succeeded)
    {
      MR_String BaseFileName_55;
      MR_String SharedLibExt_56;
      MR_String ShLibFileName_57;
      MR_String Var_115;

      BaseFileName_55 = mdbcomp__sym_name__sym_name_to_string_1_f_0(ModuleName_13);
      libs__globals__lookup_string_option_3_p_0(Globals_10, (MR_Integer) 599, &SharedLibExt_56);
      Var_115 = mercury__string__f_43_43_2_f_0(BaseFileName_55, SharedLibExt_56);
      ShLibFileName_57 = mercury__string__f_43_43_2_f_0((MR_String) "lib", Var_115);
      libs__file_util__get_install_name_option_3_p_0(Globals_10, ShLibFileName_57, &InstallNameOpt_58);
    }
    else
      InstallNameOpt_58 = (MR_String) "";
    libs__globals__get_trace_level_2_p_0(Globals_10, &TraceLevel_59);
    TraceLevelIsNone_60 = libs__trace_params__given_trace_level_is_none_1_f_0(TraceLevel_59);
    switch (TraceLevelIsNone_60) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        libs__globals__lookup_string_option_3_p_0(Globals_10, TraceFlagsOpt_24, &TraceOpts_61);
        break;
      case (MR_Integer) 1:
        TraceOpts_61 = (MR_String) "";
        break;
    }
    backend_libs__compile_target_code__get_frameworks_2_p_0(Globals_10, &Frameworks_62);
    backend_libs__compile_target_code__get_link_libraries_4_p_0(Globals_10, &MaybeLinkLibraries_63);
    libs__globals__lookup_string_option_3_p_0(Globals_10, (MR_Integer) 621, &LinkOptSep_64);
    if ((MaybeLinkLibraries_63 == (MR_Word) ((MR_Unsigned) 0U)))
      *Succeeded_16 = (MR_Integer) 0;
    else
    {
      MR_Word LinkLibrariesList_65 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeLinkLibraries_63, (MR_Integer) 0))));
      MR_String LinkLibraries_66;
      MR_Word RestrictedCommandLine_67;
      MR_Word ArchiveSucceeded_75;
      MR_Word MaybeDeleteTmpArchive_76;
      MR_String Objects_77;

      backend_libs__compile_target_code__join_quoted_string_list_5_p_0(LinkLibrariesList_65, (MR_String) "", (MR_String) "", (MR_String) " ", &LinkLibraries_66);
      libs__globals__lookup_bool_option_3_p_0(Globals_10, (MR_Integer) 682, &RestrictedCommandLine_67);
      switch (RestrictedCommandLine_67) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            ArchiveSucceeded_75 = (MR_Integer) 1;
            MaybeDeleteTmpArchive_76 = (MR_Word) ((MR_Unsigned) 0U);
            backend_libs__compile_target_code__join_quoted_string_list_5_p_0(ObjectsList_15, (MR_String) "", (MR_String) "", (MR_String) " ", &Objects_77);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_String LibExt_68;
            MR_String TempDir_69;
            MR_Word TmpArchiveResult_70;

            libs__globals__lookup_string_option_3_p_0(Globals_10, (MR_Integer) 600, &LibExt_68);
            mercury__io__get_temp_directory_3_p_0(&TempDir_69);
            mercury__io__make_temp_file_6_p_0(TempDir_69, (MR_String) "mtmp", LibExt_68, &TmpArchiveResult_70);
            if (((MR_tag((MR_Word) TmpArchiveResult_70)) == (MR_Integer) 1))
            {
              MR_Word Error_78 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TmpArchiveResult_70, (MR_Integer) 0))));
              MR_Word Var_129;
              MR_String Var_134;

              Var_129 = mercury__io__stderr_stream_0_f_0();
              Var_134 = mercury__io__error_message_1_f_0(Error_78);
              mercury__io__write_string_4_p_0(Var_129, (MR_String) "Could not create temporary file: ");
              mercury__io__write_string_4_p_0(Var_129, Var_134);
              mercury__io__write_string_4_p_0(Var_129, (MR_String) "\n");
              ArchiveSucceeded_75 = (MR_Integer) 0;
              MaybeDeleteTmpArchive_76 = (MR_Word) ((MR_Unsigned) 0U);
              backend_libs__compile_target_code__join_quoted_string_list_5_p_0(ObjectsList_15, (MR_String) "", (MR_String) "", (MR_String) " ", &Objects_77);
            }
            else
            {
              MR_String TmpArchive_71 = ((MR_String) ((MR_hl_field(MR_mktag(0), TmpArchiveResult_70, (MR_Integer) 0))));
              MR_Word ProperObjectFiles_72;
              MR_Word NonObjectFiles_73;
              MR_Word Var_142;
              MR_Word Var_74;

              backend_libs__compile_target_code__filter_object_files_4_p_0(Globals_10, ObjectsList_15, &ProperObjectFiles_72, &NonObjectFiles_73);
              mercury__io__remove_file_4_p_0(TmpArchive_71, &Var_74);
              backend_libs__compile_target_code__create_archive_8_p_0(Globals_10, ErrorStream_11, TmpArchive_71, (MR_Integer) 1, ProperObjectFiles_72, &ArchiveSucceeded_75);
              {
                MaybeDeleteTmpArchive_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), MaybeDeleteTmpArchive_76, 0) = ((MR_Box) (TmpArchive_71));
              }
              {
                Var_142 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_142, 0) = ((MR_Box) (TmpArchive_71));
                MR_hl_field(MR_mktag(1), Var_142, 1) = ((MR_Box) (NonObjectFiles_73));
              }
              backend_libs__compile_target_code__join_quoted_string_list_5_p_0(Var_142, (MR_String) "", (MR_String) "", (MR_String) " ", &Objects_77);
            }
          }
          break;
      }
      switch (ArchiveSucceeded_75) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          *Succeeded_16 = (MR_Integer) 0;
          break;
        case (MR_Integer) 1:
          {
            MR_String Command_79;
            MR_String OutputOpt_80;
            MR_String LinkCmd_81;
            MR_Word Demangle_82;
            MR_Word MaybeDemangleCmd_84;
            MR_Word LinkSucceeded_85;
            MR_Word Var_146;
            MR_Word Var_147;
            MR_Word Var_149;
            MR_Word Var_150;
            MR_Word Var_152;
            MR_Word Var_153;
            MR_Word Var_155;
            MR_Word Var_156;
            MR_Word Var_158;
            MR_Word Var_159;
            MR_Word Var_161;
            MR_Word Var_162;
            MR_Word Var_164;
            MR_Word Var_165;
            MR_Word Var_167;
            MR_Word Var_168;
            MR_Word Var_170;
            MR_Word Var_171;
            MR_String Var_172;
            MR_Word Var_173;
            MR_Word Var_175;
            MR_Word Var_176;
            MR_Word Var_178;
            MR_Word Var_179;
            MR_Word Var_181;
            MR_Word Var_182;
            MR_Word Var_184;
            MR_Word Var_185;
            MR_Word Var_187;
            MR_Word Var_188;
            MR_Word Var_190;
            MR_Word Var_191;
            MR_Word Var_193;
            MR_Word Var_194;
            MR_Word Var_196;
            MR_Word Var_197;
            MR_Word Var_199;
            MR_Word Var_200;
            MR_Word Var_202;
            MR_Word Var_203;
            MR_Word Var_205;
            MR_Word Var_206;
            MR_Word Var_208;
            MR_Word Var_209;
            MR_Word Var_211;
            MR_Word Var_212;
            MR_Word Var_214;
            MR_Word Var_215;
            MR_Word Var_217;

            libs__globals__lookup_string_option_3_p_0(Globals_10, CommandOpt_18, &Command_79);
            backend_libs__compile_target_code__get_linker_output_option_3_p_0(Globals_10, LinkTargetType_12, &OutputOpt_80);
            Var_172 = libs__options__quote_arg_1_f_0(OutputFileName_14);
            {
              Var_217 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_217, 0) = ((MR_Box) (SystemLibs_45));
              MR_hl_field(MR_mktag(1), Var_217, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Var_215 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_215, 0) = ((MR_Box) ((MR_String) " "));
              MR_hl_field(MR_mktag(1), Var_215, 1) = ((MR_Box) (Var_217));
            }
            {
              Var_214 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_214, 0) = ((MR_Box) (HwlocOpts_43));
              MR_hl_field(MR_mktag(1), Var_214, 1) = ((MR_Box) (Var_215));
            }
            {
              Var_212 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_212, 0) = ((MR_Box) ((MR_String) " "));
              MR_hl_field(MR_mktag(1), Var_212, 1) = ((MR_Box) (Var_214));
            }
            {
              Var_211 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_211, 0) = ((MR_Box) (MercuryStdLibs_44));
              MR_hl_field(MR_mktag(1), Var_211, 1) = ((MR_Box) (Var_212));
            }
            {
              Var_209 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_209, 0) = ((MR_Box) ((MR_String) " "));
              MR_hl_field(MR_mktag(1), Var_209, 1) = ((MR_Box) (Var_211));
            }
            {
              Var_208 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_208, 0) = ((MR_Box) (LinkLibraries_66));
              MR_hl_field(MR_mktag(1), Var_208, 1) = ((MR_Box) (Var_209));
            }
            {
              Var_206 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_206, 0) = ((MR_Box) ((MR_String) " "));
              MR_hl_field(MR_mktag(1), Var_206, 1) = ((MR_Box) (Var_208));
            }
            {
              Var_205 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_205, 0) = ((MR_Box) (LDFlags_48));
              MR_hl_field(MR_mktag(1), Var_205, 1) = ((MR_Box) (Var_206));
            }
            {
              Var_203 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_203, 0) = ((MR_Box) ((MR_String) " "));
              MR_hl_field(MR_mktag(1), Var_203, 1) = ((MR_Box) (Var_205));
            }
            {
              Var_202 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_202, 0) = ((MR_Box) (ResCmdLinkOpts_46));
              MR_hl_field(MR_mktag(1), Var_202, 1) = ((MR_Box) (Var_203));
            }
            {
              Var_200 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_200, 0) = ((MR_Box) ((MR_String) " "));
              MR_hl_field(MR_mktag(1), Var_200, 1) = ((MR_Box) (Var_202));
            }
            {
              Var_199 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_199, 0) = ((MR_Box) (Frameworks_62));
              MR_hl_field(MR_mktag(1), Var_199, 1) = ((MR_Box) (Var_200));
            }
            {
              Var_197 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_197, 0) = ((MR_Box) ((MR_String) " "));
              MR_hl_field(MR_mktag(1), Var_197, 1) = ((MR_Box) (Var_199));
            }
            {
              Var_196 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_196, 0) = ((MR_Box) (SanitizerOpts_37));
              MR_hl_field(MR_mktag(1), Var_196, 1) = ((MR_Box) (Var_197));
            }
            {
              Var_194 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_194, 0) = ((MR_Box) ((MR_String) " "));
              MR_hl_field(MR_mktag(1), Var_194, 1) = ((MR_Box) (Var_196));
            }
            {
              Var_193 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_193, 0) = ((MR_Box) (DebugOpts_36));
              MR_hl_field(MR_mktag(1), Var_193, 1) = ((MR_Box) (Var_194));
            }
            {
              Var_191 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_191, 0) = ((MR_Box) ((MR_String) " "));
              MR_hl_field(MR_mktag(1), Var_191, 1) = ((MR_Box) (Var_193));
            }
            {
              Var_190 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_190, 0) = ((MR_Box) (InstallNameOpt_58));
              MR_hl_field(MR_mktag(1), Var_190, 1) = ((MR_Box) (Var_191));
            }
            {
              Var_188 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_188, 0) = ((MR_Box) ((MR_String) " "));
              MR_hl_field(MR_mktag(1), Var_188, 1) = ((MR_Box) (Var_190));
            }
            {
              Var_187 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_187, 0) = ((MR_Box) (FrameworkDirectories_53));
              MR_hl_field(MR_mktag(1), Var_187, 1) = ((MR_Box) (Var_188));
            }
            {
              Var_185 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_185, 0) = ((MR_Box) ((MR_String) " "));
              MR_hl_field(MR_mktag(1), Var_185, 1) = ((MR_Box) (Var_187));
            }
            {
              Var_184 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_184, 0) = ((MR_Box) (RpathOpts_52));
              MR_hl_field(MR_mktag(1), Var_184, 1) = ((MR_Box) (Var_185));
            }
            {
              Var_182 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_182, 0) = ((MR_Box) ((MR_String) " "));
              MR_hl_field(MR_mktag(1), Var_182, 1) = ((MR_Box) (Var_184));
            }
            {
              Var_181 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_181, 0) = ((MR_Box) (LinkLibraryDirectories_51));
              MR_hl_field(MR_mktag(1), Var_181, 1) = ((MR_Box) (Var_182));
            }
            {
              Var_179 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_179, 0) = ((MR_Box) ((MR_String) " "));
              MR_hl_field(MR_mktag(1), Var_179, 1) = ((MR_Box) (Var_181));
            }
            {
              Var_178 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_178, 0) = ((MR_Box) (LinkOptSep_64));
              MR_hl_field(MR_mktag(1), Var_178, 1) = ((MR_Box) (Var_179));
            }
            {
              Var_176 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_176, 0) = ((MR_Box) ((MR_String) " "));
              MR_hl_field(MR_mktag(1), Var_176, 1) = ((MR_Box) (Var_178));
            }
            {
              Var_175 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_175, 0) = ((MR_Box) (Objects_77));
              MR_hl_field(MR_mktag(1), Var_175, 1) = ((MR_Box) (Var_176));
            }
            {
              Var_173 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_173, 0) = ((MR_Box) ((MR_String) " "));
              MR_hl_field(MR_mktag(1), Var_173, 1) = ((MR_Box) (Var_175));
            }
            {
              Var_171 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_171, 0) = ((MR_Box) (Var_172));
              MR_hl_field(MR_mktag(1), Var_171, 1) = ((MR_Box) (Var_173));
            }
            {
              Var_170 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_170, 0) = ((MR_Box) (OutputOpt_80));
              MR_hl_field(MR_mktag(1), Var_170, 1) = ((MR_Box) (Var_171));
            }
            {
              Var_168 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_168, 0) = ((MR_Box) ((MR_String) " "));
              MR_hl_field(MR_mktag(1), Var_168, 1) = ((MR_Box) (Var_170));
            }
            {
              Var_167 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_167, 0) = ((MR_Box) (ReserveStackSizeOpt_27));
              MR_hl_field(MR_mktag(1), Var_167, 1) = ((MR_Box) (Var_168));
            }
            {
              Var_165 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_165, 0) = ((MR_Box) ((MR_String) " "));
              MR_hl_field(MR_mktag(1), Var_165, 1) = ((MR_Box) (Var_167));
            }
            {
              Var_164 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_164, 0) = ((MR_Box) (TraceOpts_61));
              MR_hl_field(MR_mktag(1), Var_164, 1) = ((MR_Box) (Var_165));
            }
            {
              Var_162 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_162, 0) = ((MR_Box) ((MR_String) " "));
              MR_hl_field(MR_mktag(1), Var_162, 1) = ((MR_Box) (Var_164));
            }
            {
              Var_161 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_161, 0) = ((MR_Box) (LTOOpts_28));
              MR_hl_field(MR_mktag(1), Var_161, 1) = ((MR_Box) (Var_162));
            }
            {
              Var_159 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_159, 0) = ((MR_Box) ((MR_String) " "));
              MR_hl_field(MR_mktag(1), Var_159, 1) = ((MR_Box) (Var_161));
            }
            {
              Var_158 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_158, 0) = ((MR_Box) (ThreadOpts_41));
              MR_hl_field(MR_mktag(1), Var_158, 1) = ((MR_Box) (Var_159));
            }
            {
              Var_156 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_156, 0) = ((MR_Box) ((MR_String) " "));
              MR_hl_field(MR_mktag(1), Var_156, 1) = ((MR_Box) (Var_158));
            }
            {
              Var_155 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_155, 0) = ((MR_Box) (UndefOpt_26));
              MR_hl_field(MR_mktag(1), Var_155, 1) = ((MR_Box) (Var_156));
            }
            {
              Var_153 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_153, 0) = ((MR_Box) ((MR_String) " "));
              MR_hl_field(MR_mktag(1), Var_153, 1) = ((MR_Box) (Var_155));
            }
            {
              Var_152 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_152, 0) = ((MR_Box) (LinkerStripOpt_30));
              MR_hl_field(MR_mktag(1), Var_152, 1) = ((MR_Box) (Var_153));
            }
            {
              Var_150 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_150, 0) = ((MR_Box) ((MR_String) " "));
              MR_hl_field(MR_mktag(1), Var_150, 1) = ((MR_Box) (Var_152));
            }
            {
              Var_149 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_149, 0) = ((MR_Box) (StaticOpts_39));
              MR_hl_field(MR_mktag(1), Var_149, 1) = ((MR_Box) (Var_150));
            }
            {
              Var_147 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_147, 0) = ((MR_Box) ((MR_String) " "));
              MR_hl_field(MR_mktag(1), Var_147, 1) = ((MR_Box) (Var_149));
            }
            {
              Var_146 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_146, 0) = ((MR_Box) (Command_79));
              MR_hl_field(MR_mktag(1), Var_146, 1) = ((MR_Box) (Var_147));
            }
            mercury__string__append_list_2_p_0(Var_146, &LinkCmd_81);
            libs__globals__lookup_bool_option_3_p_0(Globals_10, (MR_Integer) 589, &Demangle_82);
            switch (Demangle_82) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                MaybeDemangleCmd_84 = (MR_Word) ((MR_Unsigned) 0U);
                break;
              case (MR_Integer) 1:
                {
                  MR_String DemangleCmd_83;

                  libs__globals__lookup_string_option_3_p_0(Globals_10, (MR_Integer) 611, &DemangleCmd_83);
                  {
                    MaybeDemangleCmd_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), MaybeDemangleCmd_84, 0) = ((MR_Box) (DemangleCmd_83));
                  }
                }
                break;
            }
            parse_tree__module_cmds__invoke_system_command_maybe_filter_output_8_p_0(Globals_10, ErrorStream_11, (MR_Integer) 1, LinkCmd_81, MaybeDemangleCmd_84, &LinkSucceeded_85);
            succeeded = (LinkSucceeded_85 == (MR_Integer) 1);
            if (succeeded)
            {
              succeeded = (strcmp(LinkerStripOpt_30, (MR_String) "") == 0);
              if (succeeded)
              {
                succeeded = (strcmp(StripExeCommand_31, (MR_String) "") == 0);
                succeeded = !(succeeded);
              }
            }
            if (succeeded)
            {
              MR_String StripCmd_86;
              MR_Word Var_223;
              MR_Word Var_224;
              MR_Word Var_226;
              MR_Word Var_227;
              MR_Word Var_229;
              MR_String Var_230;

              Var_230 = libs__options__quote_arg_1_f_0(OutputFileName_14);
              {
                Var_229 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_229, 0) = ((MR_Box) (Var_230));
                MR_hl_field(MR_mktag(1), Var_229, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                Var_227 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_227, 0) = ((MR_Box) ((MR_String) " "));
                MR_hl_field(MR_mktag(1), Var_227, 1) = ((MR_Box) (Var_229));
              }
              {
                Var_226 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_226, 0) = ((MR_Box) (StripExeFlags_34));
                MR_hl_field(MR_mktag(1), Var_226, 1) = ((MR_Box) (Var_227));
              }
              {
                Var_224 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_224, 0) = ((MR_Box) ((MR_String) " "));
                MR_hl_field(MR_mktag(1), Var_224, 1) = ((MR_Box) (Var_226));
              }
              {
                Var_223 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_223, 0) = ((MR_Box) (StripExeCommand_31));
                MR_hl_field(MR_mktag(1), Var_223, 1) = ((MR_Box) (Var_224));
              }
              mercury__string__append_list_2_p_0(Var_223, &StripCmd_86);
              parse_tree__module_cmds__invoke_system_command_maybe_filter_output_8_p_0(Globals_10, ErrorStream_11, (MR_Integer) 1, StripCmd_86, (MR_Word) ((MR_Unsigned) 0U), Succeeded_16);
            }
            else
              *Succeeded_16 = LinkSucceeded_85;
          }
          break;
      }
      if (!((MaybeDeleteTmpArchive_76 == (MR_Word) ((MR_Unsigned) 0U))))
      {
        MR_String FileToDelete_87 = ((MR_String) ((MR_hl_field(MR_mktag(1), MaybeDeleteTmpArchive_76, (MR_Integer) 0))));
        MR_Word Var_88;

        mercury__io__remove_file_4_p_0(FileToDelete_87, &Var_88);
      }
    }
  }
}

static MR_Box MR_CALL 
backend_libs__compile_target_code__create_archive_8_p_0_1(
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
backend_libs__compile_target_code__create_archive_8_p_0(
  MR_Word Globals_9,
  MR_Word ErrorStream_10,
  MR_String LibFileName_11,
  MR_Word Quote_12,
  MR_Word ObjectList_13,
  MR_Word * Succeeded_14)
{
  {
    MR_bool succeeded;
    MR_String ArCmd_16;
    MR_Word ArFlagsList_17;
    MR_String ArFlags_18;
    MR_String ArOutputFlag_19;
    MR_String RanLib_20;
    MR_String Objects_21;
    MR_Word C_CompilerType_22;
    MR_String ArOutputSpace_24;
    MR_String MakeLibCmdArgs_29;
    MR_Word MakeLibCmdSucceeded_30;
    MR_Word Var_47;
    MR_Word Var_48;
    MR_Word Var_50;
    MR_Word Var_51;
    MR_Word Var_52;
    MR_Word Var_53;
    MR_Word Var_55;

    libs__globals__lookup_string_option_3_p_0(Globals_9, (MR_Integer) 604, &ArCmd_16);
    libs__globals__lookup_accumulating_option_3_p_0(Globals_9, (MR_Integer) 606, &ArFlagsList_17);
    backend_libs__compile_target_code__join_string_list_5_p_0(ArFlagsList_17, (MR_String) "", (MR_String) "", (MR_String) " ", &ArFlags_18);
    libs__globals__lookup_string_option_3_p_0(Globals_9, (MR_Integer) 605, &ArOutputFlag_19);
    libs__globals__lookup_string_option_3_p_0(Globals_9, (MR_Integer) 607, &RanLib_20);
    switch (Quote_12) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        backend_libs__compile_target_code__join_string_list_5_p_0(ObjectList_13, (MR_String) "", (MR_String) "", (MR_String) " ", &Objects_21);
        break;
      case (MR_Integer) 1:
        {
          MR_Word Var_71;

          Var_71 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&backend_libs__compile_target_code_scalar_common_5[10]), ObjectList_13);
          backend_libs__compile_target_code__join_string_list_5_p_0(Var_71, (MR_String) "", (MR_String) "", (MR_String) " ", &Objects_21);
        }
        break;
    }
    libs__globals__get_c_compiler_type_2_p_0(Globals_9, &C_CompilerType_22);
    switch (MR_tag((MR_Word) C_CompilerType_22)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        ArOutputSpace_24 = (MR_String) " ";
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        ArOutputSpace_24 = (MR_String) " ";
        break;
      case (MR_Integer) 3:
        ArOutputSpace_24 = (MR_String) "";
        break;
    }
    {
      Var_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_55, 0) = ((MR_Box) (Objects_21));
      MR_hl_field(MR_mktag(1), Var_55, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_53, 0) = ((MR_Box) ((MR_String) " "));
      MR_hl_field(MR_mktag(1), Var_53, 1) = ((MR_Box) (Var_55));
    }
    {
      Var_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_52, 0) = ((MR_Box) (LibFileName_11));
      MR_hl_field(MR_mktag(1), Var_52, 1) = ((MR_Box) (Var_53));
    }
    {
      Var_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_51, 0) = ((MR_Box) (ArOutputSpace_24));
      MR_hl_field(MR_mktag(1), Var_51, 1) = ((MR_Box) (Var_52));
    }
    {
      Var_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_50, 0) = ((MR_Box) (ArOutputFlag_19));
      MR_hl_field(MR_mktag(1), Var_50, 1) = ((MR_Box) (Var_51));
    }
    {
      Var_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_48, 0) = ((MR_Box) ((MR_String) " "));
      MR_hl_field(MR_mktag(1), Var_48, 1) = ((MR_Box) (Var_50));
    }
    {
      Var_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_47, 0) = ((MR_Box) (ArFlags_18));
      MR_hl_field(MR_mktag(1), Var_47, 1) = ((MR_Box) (Var_48));
    }
    MakeLibCmdArgs_29 = mercury__string__append_list_1_f_0(Var_47);
    backend_libs__compile_target_code__invoke_long_system_command_maybe_filter_output_10_p_0(Globals_9, ErrorStream_10, (MR_Integer) 1, ArCmd_16, (MR_String) "", MakeLibCmdArgs_29, (MR_Word) ((MR_Unsigned) 0U), &MakeLibCmdSucceeded_30);
    succeeded = (strcmp(RanLib_20, (MR_String) "") == 0);
    if (!(succeeded))
      succeeded = (MakeLibCmdSucceeded_30 == (MR_Integer) 0);
    if (succeeded)
      *Succeeded_14 = MakeLibCmdSucceeded_30;
    else
    {
      MR_String RanLibCmd_31;
      MR_Word Var_59;
      MR_Word Var_60;
      MR_Word Var_62;

      {
        Var_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_62, 0) = ((MR_Box) (LibFileName_11));
        MR_hl_field(MR_mktag(1), Var_62, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_60, 0) = ((MR_Box) ((MR_String) " "));
        MR_hl_field(MR_mktag(1), Var_60, 1) = ((MR_Box) (Var_62));
      }
      {
        Var_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_59, 0) = ((MR_Box) (RanLib_20));
        MR_hl_field(MR_mktag(1), Var_59, 1) = ((MR_Box) (Var_60));
      }
      RanLibCmd_31 = mercury__string__append_list_1_f_0(Var_59);
      parse_tree__module_cmds__invoke_system_command_7_p_0(Globals_9, ErrorStream_10, (MR_Integer) 1, RanLibCmd_31, Succeeded_14);
    }
  }
}

static MR_String MR_CALL 
backend_libs__compile_target_code__reserve_stack_size_flags_1_f_0(
  MR_Word Globals_3)
{
  {
    MR_bool succeeded;
    MR_String Flags_4;
    MR_Integer ReserveStackSize_5;

    libs__globals__lookup_int_option_3_p_0(Globals_3, (MR_Integer) 598, &ReserveStackSize_5);
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

            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&backend_libs__compile_target_code_scalar_common_3[2]), ReserveStackSize_5, &Var_21);
            Flags_4 = mercury__string__f_43_43_2_f_0((MR_String) "-Wl,--stack=", Var_21);
          }
          break;
        case (MR_Integer) 1:
        case (MR_Integer) 2:
          {
            MR_String Var_21;

            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&backend_libs__compile_target_code_scalar_common_3[2]), ReserveStackSize_5, &Var_21);
            Flags_4 = mercury__string__f_43_43_2_f_0((MR_String) "-Wl,--stack=", Var_21);
          }
          break;
        case (MR_Integer) 3:
          {
            MR_String Var_29;

            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&backend_libs__compile_target_code_scalar_common_3[2]), ReserveStackSize_5, &Var_29);
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

    libs__globals__lookup_accumulating_option_3_p_0(Globals_3, (MR_Integer) 595, &Frameworks_5);
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

    libs__globals__lookup_string_option_3_p_0(Globals_5, (MR_Integer) 541, &ObjExt_9);
    libs__globals__lookup_string_option_3_p_0(Globals_5, (MR_Integer) 542, &PicObjExt_10);
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

    libs__globals__lookup_bool_option_3_p_0(Globals_4, (MR_Integer) 682, &RestrictedCommandLine_7);
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
          case (MR_Integer) 8:
          case (MR_Integer) 7:
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
                  backend_libs__compile_target_code__join_string_list_5_p_0((MR_Word) (MR_mkword(MR_mktag(1), &backend_libs__compile_target_code_scalar_common_1[7])), (MR_String) "", (MR_String) "", (MR_String) " ", ResCmdLinkOpts_6);
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
  libs__globals__lookup_bool_option_3_p_0(Globals_3, (MR_Integer) 240, UseThreadLibs_4);
}

static void MR_CALL 
backend_libs__compile_target_code__get_system_libs_3_p_0(
  MR_Word Globals_4,
  MR_Word TargetType_5,
  MR_String * SystemLibs_6)
{
  {
    MR_Word TraceLevel_7;
    MR_Word TraceLevelIsNone_8;
    MR_String SystemTraceLibs_9;
    MR_Word UseThreadLibs_13;
    MR_String ThreadLibs_14;
    MR_String OtherSystemLibs_15;
    MR_Word Var_27;
    MR_Word Var_28;
    MR_Word Var_29;

    libs__globals__get_trace_level_2_p_0(Globals_4, &TraceLevel_7);
    TraceLevelIsNone_8 = libs__trace_params__given_trace_level_is_none_1_f_0(TraceLevel_7);
    switch (TraceLevelIsNone_8) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_String SystemTraceLibs0_10;
          MR_Word UseReadline_11;

          libs__globals__lookup_string_option_3_p_0(Globals_4, (MR_Integer) 614, &SystemTraceLibs0_10);
          libs__globals__lookup_bool_option_3_p_0(Globals_4, (MR_Integer) 592, &UseReadline_11);
          switch (UseReadline_11) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              SystemTraceLibs_9 = SystemTraceLibs0_10;
              break;
            case (MR_Integer) 1:
              {
                MR_String ReadlineLibs_12;
                MR_String Var_19;

                libs__globals__lookup_string_option_3_p_0(Globals_4, (MR_Integer) 620, &ReadlineLibs_12);
                Var_19 = mercury__string__f_43_43_2_f_0((MR_String) " ", ReadlineLibs_12);
                SystemTraceLibs_9 = mercury__string__f_43_43_2_f_0(SystemTraceLibs0_10, Var_19);
              }
              break;
          }
        }
        break;
      case (MR_Integer) 1:
        SystemTraceLibs_9 = (MR_String) "";
        break;
    }
    libs__globals__lookup_bool_option_3_p_0(Globals_4, (MR_Integer) 240, &UseThreadLibs_13);
    switch (UseThreadLibs_13) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        ThreadLibs_14 = (MR_String) "";
        break;
      case (MR_Integer) 1:
        libs__globals__lookup_string_option_3_p_0(Globals_4, (MR_Integer) 615, &ThreadLibs_14);
        break;
    }
    switch (TargetType_5) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 3:
      case (MR_Integer) 4:
      case (MR_Integer) 8:
      case (MR_Integer) 7:
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
        libs__globals__lookup_string_option_3_p_0(Globals_4, (MR_Integer) 619, &OtherSystemLibs_15);
        break;
      case (MR_Integer) 2:
        libs__globals__lookup_string_option_3_p_0(Globals_4, (MR_Integer) 618, &OtherSystemLibs_15);
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

    libs__globals__lookup_bool_option_3_p_0(Globals_6, (MR_Integer) 643, &UseInstallName_11);
    backend_libs__compile_target_code__shared_libraries_supported_2_p_0(Globals_6, &SharedLibsSupported_12);
    libs__globals__lookup_string_option_3_p_0(Globals_6, (MR_Integer) 584, &Linkage_13);
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

      libs__globals__lookup_accumulating_option_3_p_0(Globals_6, (MR_Integer) 569, &RpathDirs0_14);
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

    libs__globals__lookup_string_option_3_p_0(Globals_3, (MR_Integer) 600, &LibExt_5);
    libs__globals__lookup_string_option_3_p_0(Globals_3, (MR_Integer) 599, &SharedLibExt_6);
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
    MR_Word conv1_STATE_VARIABLE_Succeeded_34;

    backend_libs__compile_target_code__process_link_library_8_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_String) (wrapper_arg_1)), &conv2_LinkerOpt_12, ((MR_Word) (wrapper_arg_3)), &conv1_STATE_VARIABLE_Succeeded_34);
    *wrapper_arg_2 = ((MR_Box) (conv2_LinkerOpt_12));
    *wrapper_arg_4 = ((MR_Box) (conv1_STATE_VARIABLE_Succeeded_34));
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

    conv0_LambdaHeadVar__2_20 = backend_libs__compile_target_code__IntroducedFrom__func__get_link_libraries__2298__1_2_f_0(((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) (wrapper_arg_1)));
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

    libs__globals__lookup_accumulating_option_3_p_0(Globals_5, (MR_Integer) 573, &MercuryLibDirs0_8);
    libs__compute_grade__grade_directory_component_2_p_0(Globals_5, &GradeDir_9);
    {
      Var_18 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_18, 0) = ((MR_Box) (&backend_libs__compile_target_code_scalar_common_2[2]));
      MR_hl_field(MR_mktag(0), Var_18, 1) = ((MR_Box) (backend_libs__compile_target_code__get_link_libraries_4_p_0_1));
      MR_hl_field(MR_mktag(0), Var_18, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_18, 3) = ((MR_Box) (GradeDir_9));
    }
    MercuryLibDirs_10 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_18, MercuryLibDirs0_8);
    libs__globals__lookup_accumulating_option_3_p_0(Globals_5, (MR_Integer) 571, &LinkLibrariesList0_12);
    {
      Var_24 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_24, 0) = ((MR_Box) (&backend_libs__compile_target_code_scalar_common_10[0]));
      MR_hl_field(MR_mktag(0), Var_24, 1) = ((MR_Box) (backend_libs__compile_target_code__get_link_libraries_4_p_0_2));
      MR_hl_field(MR_mktag(0), Var_24, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_24, 3) = ((MR_Box) (Globals_5));
      MR_hl_field(MR_mktag(0), Var_24, 4) = ((MR_Box) (MercuryLibDirs_10));
    }
    mercury__list__map_foldl2_7_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__bool__bool__type_ctor_info_bool_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_24, LinkLibrariesList0_12, &LinkLibrariesList_13, ((MR_Box) ((MR_Integer) 1)), &conv4_LibrariesSucceeded_14, ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_IO_16);
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

    libs__globals__lookup_maybe_string_option_3_p_0(Globals_4, (MR_Integer) 579, &MaybeStdlibDir_7);
    if ((MaybeStdlibDir_7 == (MR_Word) ((MR_Unsigned) 0U)))
      *StdLibs_6 = (MR_String) "";
    else
    {
      MR_String StdLibDir_8 = ((MR_String) ((MR_hl_field(MR_mktag(1), MaybeStdlibDir_7, (MR_Integer) 0))));
      MR_Word GCMethod_9;
      MR_String LibExt_10;
      MR_String MercuryLinkage_11;
      MR_String GradeDir_12;
      MR_String StaticGCLibs_13;
      MR_String SharedGCLibs_14;
      MR_Word TraceLevel_23;
      MR_Word TraceLevelIsNone_24;
      MR_String StaticTraceLibs_25;
      MR_String SharedTraceLibs_26;
      MR_Word SourceDebug_35;
      MR_String StaticSourceDebugLibs_42;
      MR_String SharedSourceDebugLibs_43;
      MR_String StaticStdLib_44;
      MR_String StdLib_45;
      MR_String StaticRuntimeLib_46;
      MR_String RuntimeLib_47;

      libs__globals__get_gc_method_2_p_0(Globals_4, &GCMethod_9);
      switch (TargetType_5) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 3:
        case (MR_Integer) 4:
          {
            LibExt_10 = (MR_String) ".dll";
            MercuryLinkage_11 = (MR_String) "csharp";
          }
          break;
        case (MR_Integer) 8:
        case (MR_Integer) 7:
        case (MR_Integer) 6:
        case (MR_Integer) 5:
          {
            MR_String Var_50;

            Var_50 = mercury__string__string_1_f_0((MR_Word) (&backend_libs__compile_target_code__backend_libs__compile_target_code__type_ctor_info_linked_target_type_0), ((MR_Box) (TargetType_5)));
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140backend_libs.compile_target_code.get_mercury_std_libs\'/3", Var_50);
              return;
            }
          }
          break;
        case (MR_Integer) 0:
        case (MR_Integer) 2:
        case (MR_Integer) 1:
          {
            libs__globals__lookup_string_option_3_p_0(Globals_4, (MR_Integer) 600, &LibExt_10);
            libs__globals__lookup_string_option_3_p_0(Globals_4, (MR_Integer) 586, &MercuryLinkage_11);
          }
          break;
      }
      libs__compute_grade__grade_directory_component_2_p_0(Globals_4, &GradeDir_12);
      switch (GCMethod_9) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 5:
          {
            StaticGCLibs_13 = (MR_String) "";
            SharedGCLibs_14 = (MR_String) "";
          }
          break;
        case (MR_Integer) 0:
          {
            StaticGCLibs_13 = (MR_String) "";
            SharedGCLibs_14 = (MR_String) "";
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word LLDebug_16;
            MR_String GCGrade1_17;
            MR_Word ProfTime_18;
            MR_Word ProfDeep_19;
            MR_String GCGrade2_20;
            MR_Word Parallel_21;
            MR_String GCGrade_22;

            libs__globals__lookup_bool_option_3_p_0(Globals_4, (MR_Integer) 324, &LLDebug_16);
            switch (LLDebug_16) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                GCGrade1_17 = (MR_String) "gc";
                break;
              case (MR_Integer) 1:
                GCGrade1_17 = (MR_String) "gc_ll_debug";
                break;
            }
            libs__globals__lookup_bool_option_3_p_0(Globals_4, (MR_Integer) 217, &ProfTime_18);
            libs__globals__lookup_bool_option_3_p_0(Globals_4, (MR_Integer) 219, &ProfDeep_19);
            succeeded = (ProfTime_18 == (MR_Integer) 1);
            if (!(succeeded))
              succeeded = (ProfDeep_19 == (MR_Integer) 1);
            if (succeeded)
              GCGrade2_20 = mercury__string__f_43_43_2_f_0(GCGrade1_17, (MR_String) "_prof");
            else
              GCGrade2_20 = GCGrade1_17;
            libs__globals__lookup_bool_option_3_p_0(Globals_4, (MR_Integer) 240, &Parallel_21);
            switch (Parallel_21) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                GCGrade_22 = GCGrade2_20;
                break;
              case (MR_Integer) 1:
                GCGrade_22 = mercury__string__f_43_43_2_f_0((MR_String) "par_", GCGrade2_20);
                break;
            }
            backend_libs__compile_target_code__link_lib_args_8_p_0(Globals_4, TargetType_5, StdLibDir_8, (MR_String) "", LibExt_10, GCGrade_22, &StaticGCLibs_13, &SharedGCLibs_14);
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word LLDebug_123;
            MR_String GCGrade1_124;
            MR_Word ProfTime_125;
            MR_Word ProfDeep_126;
            MR_String GCGrade2_127;
            MR_Word Parallel_128;
            MR_String GCGrade_129;

            libs__globals__lookup_bool_option_3_p_0(Globals_4, (MR_Integer) 324, &LLDebug_123);
            switch (LLDebug_123) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                GCGrade1_124 = (MR_String) "gc_debug";
                break;
              case (MR_Integer) 1:
                GCGrade1_124 = (MR_String) "gc_debug_ll_debug";
                break;
            }
            libs__globals__lookup_bool_option_3_p_0(Globals_4, (MR_Integer) 217, &ProfTime_125);
            libs__globals__lookup_bool_option_3_p_0(Globals_4, (MR_Integer) 219, &ProfDeep_126);
            succeeded = (ProfTime_125 == (MR_Integer) 1);
            if (!(succeeded))
              succeeded = (ProfDeep_126 == (MR_Integer) 1);
            if (succeeded)
              GCGrade2_127 = mercury__string__f_43_43_2_f_0(GCGrade1_124, (MR_String) "_prof");
            else
              GCGrade2_127 = GCGrade1_124;
            libs__globals__lookup_bool_option_3_p_0(Globals_4, (MR_Integer) 240, &Parallel_128);
            switch (Parallel_128) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                GCGrade_129 = GCGrade2_127;
                break;
              case (MR_Integer) 1:
                GCGrade_129 = mercury__string__f_43_43_2_f_0((MR_String) "par_", GCGrade2_127);
                break;
            }
            backend_libs__compile_target_code__link_lib_args_8_p_0(Globals_4, TargetType_5, StdLibDir_8, (MR_String) "", LibExt_10, GCGrade_129, &StaticGCLibs_13, &SharedGCLibs_14);
          }
          break;
        case (MR_Integer) 4:
          {
            StaticGCLibs_13 = (MR_String) "";
            SharedGCLibs_14 = (MR_String) "";
          }
          break;
        case (MR_Integer) 1:
          {
            StaticGCLibs_13 = (MR_String) "";
            SharedGCLibs_14 = (MR_String) "";
          }
          break;
      }
      libs__globals__get_trace_level_2_p_0(Globals_4, &TraceLevel_23);
      TraceLevelIsNone_24 = libs__trace_params__given_trace_level_is_none_1_f_0(TraceLevel_23);
      switch (TraceLevelIsNone_24) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_String StaticTraceLib_27;
            MR_String TraceLib_28;
            MR_String StaticEventSpecLib_29;
            MR_String EventSpecLib_30;
            MR_String StaticBrowserLib_31;
            MR_String BrowserLib_32;
            MR_String StaticMdbCompLib_33;
            MR_String MdbCompLib_34;
            MR_Word Var_66;
            MR_Word Var_67;
            MR_Word Var_68;
            MR_Word Var_69;
            MR_Word Var_72;
            MR_Word Var_73;
            MR_Word Var_74;
            MR_Word Var_75;

            backend_libs__compile_target_code__link_lib_args_8_p_0(Globals_4, TargetType_5, StdLibDir_8, GradeDir_12, LibExt_10, (MR_String) "mer_trace", &StaticTraceLib_27, &TraceLib_28);
            backend_libs__compile_target_code__link_lib_args_8_p_0(Globals_4, TargetType_5, StdLibDir_8, GradeDir_12, LibExt_10, (MR_String) "mer_eventspec", &StaticEventSpecLib_29, &EventSpecLib_30);
            backend_libs__compile_target_code__link_lib_args_8_p_0(Globals_4, TargetType_5, StdLibDir_8, GradeDir_12, LibExt_10, (MR_String) "mer_browser", &StaticBrowserLib_31, &BrowserLib_32);
            backend_libs__compile_target_code__link_lib_args_8_p_0(Globals_4, TargetType_5, StdLibDir_8, GradeDir_12, LibExt_10, (MR_String) "mer_mdbcomp", &StaticMdbCompLib_33, &MdbCompLib_34);
            {
              Var_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_69, 0) = ((MR_Box) (StaticMdbCompLib_33));
              MR_hl_field(MR_mktag(1), Var_69, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Var_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_68, 0) = ((MR_Box) (StaticBrowserLib_31));
              MR_hl_field(MR_mktag(1), Var_68, 1) = ((MR_Box) (Var_69));
            }
            {
              Var_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_67, 0) = ((MR_Box) (StaticEventSpecLib_29));
              MR_hl_field(MR_mktag(1), Var_67, 1) = ((MR_Box) (Var_68));
            }
            {
              Var_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_66, 0) = ((MR_Box) (StaticTraceLib_27));
              MR_hl_field(MR_mktag(1), Var_66, 1) = ((MR_Box) (Var_67));
            }
            StaticTraceLibs_25 = mercury__string__join_list_2_f_0((MR_String) " ", Var_66);
            {
              Var_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_75, 0) = ((MR_Box) (MdbCompLib_34));
              MR_hl_field(MR_mktag(1), Var_75, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Var_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_74, 0) = ((MR_Box) (BrowserLib_32));
              MR_hl_field(MR_mktag(1), Var_74, 1) = ((MR_Box) (Var_75));
            }
            {
              Var_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_73, 0) = ((MR_Box) (EventSpecLib_30));
              MR_hl_field(MR_mktag(1), Var_73, 1) = ((MR_Box) (Var_74));
            }
            {
              Var_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_72, 0) = ((MR_Box) (TraceLib_28));
              MR_hl_field(MR_mktag(1), Var_72, 1) = ((MR_Box) (Var_73));
            }
            SharedTraceLibs_26 = mercury__string__join_list_2_f_0((MR_String) " ", Var_72);
          }
          break;
        case (MR_Integer) 1:
          {
            StaticTraceLibs_25 = (MR_String) "";
            SharedTraceLibs_26 = (MR_String) "";
          }
          break;
      }
      libs__globals__lookup_bool_option_3_p_0(Globals_4, (MR_Integer) 259, &SourceDebug_35);
      switch (SourceDebug_35) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            StaticSourceDebugLibs_42 = (MR_String) "";
            SharedSourceDebugLibs_43 = (MR_String) "";
          }
          break;
        case (MR_Integer) 1:
          {
            MR_String StaticSsdbLib_36;
            MR_String SsdbLib_37;
            MR_String StaticBrowserLib2_38;
            MR_String BrowserLib2_39;
            MR_String StaticMdbCompLib2_40;
            MR_String MdbCompLib2_41;
            MR_Word Var_82;
            MR_Word Var_83;
            MR_Word Var_84;
            MR_Word Var_87;
            MR_Word Var_88;
            MR_Word Var_89;

            backend_libs__compile_target_code__link_lib_args_8_p_0(Globals_4, TargetType_5, StdLibDir_8, GradeDir_12, LibExt_10, (MR_String) "mer_ssdb", &StaticSsdbLib_36, &SsdbLib_37);
            backend_libs__compile_target_code__link_lib_args_8_p_0(Globals_4, TargetType_5, StdLibDir_8, GradeDir_12, LibExt_10, (MR_String) "mer_browser", &StaticBrowserLib2_38, &BrowserLib2_39);
            backend_libs__compile_target_code__link_lib_args_8_p_0(Globals_4, TargetType_5, StdLibDir_8, GradeDir_12, LibExt_10, (MR_String) "mer_mdbcomp", &StaticMdbCompLib2_40, &MdbCompLib2_41);
            {
              Var_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_84, 0) = ((MR_Box) (StaticMdbCompLib2_40));
              MR_hl_field(MR_mktag(1), Var_84, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Var_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_83, 0) = ((MR_Box) (StaticBrowserLib2_38));
              MR_hl_field(MR_mktag(1), Var_83, 1) = ((MR_Box) (Var_84));
            }
            {
              Var_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_82, 0) = ((MR_Box) (StaticSsdbLib_36));
              MR_hl_field(MR_mktag(1), Var_82, 1) = ((MR_Box) (Var_83));
            }
            StaticSourceDebugLibs_42 = mercury__string__join_list_2_f_0((MR_String) " ", Var_82);
            {
              Var_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_89, 0) = ((MR_Box) (MdbCompLib2_41));
              MR_hl_field(MR_mktag(1), Var_89, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Var_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_88, 0) = ((MR_Box) (BrowserLib2_39));
              MR_hl_field(MR_mktag(1), Var_88, 1) = ((MR_Box) (Var_89));
            }
            {
              Var_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_87, 0) = ((MR_Box) (SsdbLib_37));
              MR_hl_field(MR_mktag(1), Var_87, 1) = ((MR_Box) (Var_88));
            }
            SharedSourceDebugLibs_43 = mercury__string__join_list_2_f_0((MR_String) " ", Var_87);
          }
          break;
      }
      backend_libs__compile_target_code__link_lib_args_8_p_0(Globals_4, TargetType_5, StdLibDir_8, GradeDir_12, LibExt_10, (MR_String) "mer_std", &StaticStdLib_44, &StdLib_45);
      backend_libs__compile_target_code__link_lib_args_8_p_0(Globals_4, TargetType_5, StdLibDir_8, GradeDir_12, LibExt_10, (MR_String) "mer_rt", &StaticRuntimeLib_46, &RuntimeLib_47);
      succeeded = (strcmp(MercuryLinkage_11, (MR_String) "static") == 0);
      if (succeeded)
      {
        MR_Word Var_94;
        MR_Word Var_95;
        MR_Word Var_96;
        MR_Word Var_97;
        MR_Word Var_98;

        {
          Var_98 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_98, 0) = ((MR_Box) (StaticGCLibs_13));
          MR_hl_field(MR_mktag(1), Var_98, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_97 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_97, 0) = ((MR_Box) (StaticRuntimeLib_46));
          MR_hl_field(MR_mktag(1), Var_97, 1) = ((MR_Box) (Var_98));
        }
        {
          Var_96 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_96, 0) = ((MR_Box) (StaticStdLib_44));
          MR_hl_field(MR_mktag(1), Var_96, 1) = ((MR_Box) (Var_97));
        }
        {
          Var_95 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_95, 0) = ((MR_Box) (StaticSourceDebugLibs_42));
          MR_hl_field(MR_mktag(1), Var_95, 1) = ((MR_Box) (Var_96));
        }
        {
          Var_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_94, 0) = ((MR_Box) (StaticTraceLibs_25));
          MR_hl_field(MR_mktag(1), Var_94, 1) = ((MR_Box) (Var_95));
        }
        *StdLibs_6 = mercury__string__join_list_2_f_0((MR_String) " ", Var_94);
      }
      else
      {
        succeeded = (strcmp(MercuryLinkage_11, (MR_String) "shared") == 0);
        if (succeeded)
        {
          MR_Word Var_101;
          MR_Word Var_102;
          MR_Word Var_103;
          MR_Word Var_104;
          MR_Word Var_105;

          {
            Var_105 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_105, 0) = ((MR_Box) (SharedGCLibs_14));
            MR_hl_field(MR_mktag(1), Var_105, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_104 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_104, 0) = ((MR_Box) (RuntimeLib_47));
            MR_hl_field(MR_mktag(1), Var_104, 1) = ((MR_Box) (Var_105));
          }
          {
            Var_103 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_103, 0) = ((MR_Box) (StdLib_45));
            MR_hl_field(MR_mktag(1), Var_103, 1) = ((MR_Box) (Var_104));
          }
          {
            Var_102 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_102, 0) = ((MR_Box) (SharedSourceDebugLibs_43));
            MR_hl_field(MR_mktag(1), Var_102, 1) = ((MR_Box) (Var_103));
          }
          {
            Var_101 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_101, 0) = ((MR_Box) (SharedTraceLibs_26));
            MR_hl_field(MR_mktag(1), Var_101, 1) = ((MR_Box) (Var_102));
          }
          *StdLibs_6 = mercury__string__join_list_2_f_0((MR_String) " ", Var_101);
        }
        else
        {
          succeeded = (strcmp(MercuryLinkage_11, (MR_String) "csharp") == 0);
          if (succeeded)
          {
            MR_Word Var_108;
            MR_Word Var_109;
            MR_Word Var_110;

            {
              Var_110 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_110, 0) = ((MR_Box) (StdLib_45));
              MR_hl_field(MR_mktag(1), Var_110, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Var_109 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_109, 0) = ((MR_Box) (SharedSourceDebugLibs_43));
              MR_hl_field(MR_mktag(1), Var_109, 1) = ((MR_Box) (Var_110));
            }
            {
              Var_108 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_108, 0) = ((MR_Box) (SharedTraceLibs_26));
              MR_hl_field(MR_mktag(1), Var_108, 1) = ((MR_Box) (Var_109));
            }
            *StdLibs_6 = mercury__string__join_list_2_f_0((MR_String) " ", Var_108);
          }
          else
          {
            MR_String Var_113;

            Var_113 = mercury__string__f_43_43_2_f_0((MR_String) "unknown linkage ", MercuryLinkage_11);
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140backend_libs.compile_target_code.get_mercury_std_libs\'/3", Var_113);
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
  MR_String LibExt_13,
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

    switch (TargetType_10) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 3:
      case (MR_Integer) 4:
        LibPrefix_17 = (MR_String) "";
        break;
      case (MR_Integer) 8:
      case (MR_Integer) 7:
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
      case (MR_Integer) 0:
      case (MR_Integer) 2:
      case (MR_Integer) 1:
        LibPrefix_17 = (MR_String) "lib";
        break;
    }
    Var_21 = mercury__string__f_43_43_2_f_0(Name_14, LibExt_13);
    StaticLibName_18 = mercury__string__f_43_43_2_f_0(LibPrefix_17, Var_21);
    Var_24 = mercury__dir__f_slash_2_f_0(StdLibDir_11, (MR_String) "lib");
    Var_23 = mercury__dir__f_slash_2_f_0(Var_24, GradeDir_12);
    Var_22 = mercury__dir__f_slash_2_f_0(Var_23, StaticLibName_18);
    *StaticArg_15 = libs__options__quote_arg_1_f_0(Var_22);
    switch (TargetType_10) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 3:
      case (MR_Integer) 4:
        {
          MR_String Var_37;
          MR_String Var_38;

          Var_38 = mercury__string__f_43_43_2_f_0(Name_14, (MR_String) ".dll");
          Var_37 = mercury__string__f_43_43_2_f_0((MR_String) "-r:", Var_38);
          *SharedArg_16 = libs__options__quote_arg_1_f_0(Var_37);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_String Var_36;

          Var_36 = mercury__string__string_1_f_0((MR_Word) (&backend_libs__compile_target_code__backend_libs__compile_target_code__type_ctor_info_linked_target_type_0), ((MR_Box) (TargetType_10)));
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140backend_libs.compile_target_code.make_link_lib\'/4", Var_36);
            return;
          }
        }
        break;
      case (MR_Integer) 0:
        {
          MR_String LinkLibOpt_33;
          MR_String Suffix_34;
          MR_String Var_39;
          MR_String Var_40;

          libs__globals__lookup_string_option_3_p_0(Globals_9, (MR_Integer) 627, &LinkLibOpt_33);
          libs__globals__lookup_string_option_3_p_0(Globals_9, (MR_Integer) 628, &Suffix_34);
          Var_40 = mercury__string__f_43_43_2_f_0(Name_14, Suffix_34);
          Var_39 = mercury__string__f_43_43_2_f_0(LinkLibOpt_33, Var_40);
          *SharedArg_16 = libs__options__quote_arg_1_f_0(Var_39);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_String LinkLibOpt_46;
          MR_String Suffix_47;
          MR_String Var_48;
          MR_String Var_49;

          libs__globals__lookup_string_option_3_p_0(Globals_9, (MR_Integer) 629, &LinkLibOpt_46);
          libs__globals__lookup_string_option_3_p_0(Globals_9, (MR_Integer) 630, &Suffix_47);
          Var_49 = mercury__string__f_43_43_2_f_0(Name_14, Suffix_47);
          Var_48 = mercury__string__f_43_43_2_f_0(LinkLibOpt_46, Var_49);
          *SharedArg_16 = libs__options__quote_arg_1_f_0(Var_48);
        }
        break;
    }
  }
}

void MR_CALL 
backend_libs__compile_target_code__post_link_make_symlink_or_copy_8_p_0(
  MR_Word Globals_9,
  MR_Word ErrorStream_10,
  MR_Word LinkTargetType_11,
  MR_Word ModuleName_12,
  MR_Word * Succeeded_13,
  MR_Word * MadeSymlinkOrCopy_14)
{
  {
    MR_bool succeeded;
    MR_Word UseGradeSubdirs_16;

    libs__globals__lookup_bool_option_3_p_0(Globals_9, (MR_Integer) 674, &UseGradeSubdirs_16);
    switch (UseGradeSubdirs_16) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *Succeeded_13 = (MR_Integer) 1;
          *MadeSymlinkOrCopy_14 = (MR_Integer) 0;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_String Ext_17;
          MR_String OutputFileName_18;
          MR_Word NoSubdirGlobals0_19;
          MR_Word NoSubdirGlobals_20;
          MR_String UserDirFileName_21;
          MR_Word Succeeded0_23;
          MR_Word Var_40;
          MR_Word MaybeCompare_71;
          MR_Word TimeResultA_80;
          MR_Word TimeResultB_81;
          MR_Word TimeA_82;
          MR_Word TimeB_83;
          MR_Word Var_73;

          backend_libs__compile_target_code__link_output_filename_7_p_0(Globals_9, LinkTargetType_11, ModuleName_12, &Ext_17, &OutputFileName_18);
          Var_40 = (MR_Word) (MR_mkword(MR_mktag(1), &backend_libs__compile_target_code_scalar_common_3[3]));
          libs__globals__set_option_4_p_0((MR_Integer) 673, Var_40, Globals_9, &NoSubdirGlobals0_19);
          libs__globals__set_option_4_p_0((MR_Integer) 674, Var_40, NoSubdirGlobals0_19, &NoSubdirGlobals_20);
          switch (LinkTargetType_11) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 3:
            case (MR_Integer) 4:
            case (MR_Integer) 7:
            case (MR_Integer) 0:
            case (MR_Integer) 6:
            case (MR_Integer) 5:
              parse_tree__file_names__module_name_to_file_name_7_p_0(NoSubdirGlobals_20, (MR_Integer) 1, Ext_17, ModuleName_12, &UserDirFileName_21);
              break;
            case (MR_Integer) 8:
            case (MR_Integer) 2:
            case (MR_Integer) 1:
              parse_tree__file_names__module_name_to_lib_file_name_8_p_0(NoSubdirGlobals_20, (MR_String) "lib", ModuleName_12, Ext_17, (MR_Integer) 1, &UserDirFileName_21);
              break;
          }
          mercury__io__file_modification_time_4_p_0(OutputFileName_18, &TimeResultA_80);
          mercury__io__file_modification_time_4_p_0(UserDirFileName_21, &TimeResultB_81);
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
            Succeeded0_23 = (MR_Integer) 1;
            *MadeSymlinkOrCopy_14 = (MR_Integer) 0;
          }
          else
          {
            MR_Word OutputStream_24;
            MR_Word Var_25;
            MR_Word Var_26;

            mercury__io__set_output_stream_4_p_0(ErrorStream_10, &OutputStream_24);
            mercury__io__remove_file_recursively_4_p_0(UserDirFileName_21, &Var_25);
            succeeded = (LinkTargetType_11 == (MR_Integer) 8);
            if (succeeded)
              parse_tree__module_cmds__make_symlink_or_copy_dir_6_p_0(Globals_9, OutputFileName_18, UserDirFileName_21, &Succeeded0_23);
            else
              parse_tree__module_cmds__make_symlink_or_copy_file_6_p_0(Globals_9, OutputFileName_18, UserDirFileName_21, &Succeeded0_23);
            mercury__io__set_output_stream_4_p_0(OutputStream_24, &Var_26);
            *MadeSymlinkOrCopy_14 = (MR_Integer) 1;
          }
          succeeded = (Succeeded0_23 == (MR_Integer) 1);
          if (succeeded)
            switch (LinkTargetType_11) {
              default:
                succeeded = MR_FALSE;
                break;
              case (MR_Integer) 3:
                {
                  MR_Word TargetEnvType_27;

                  libs__globals__get_target_env_type_2_p_0(Globals_9, &TargetEnvType_27);
                  succeeded = (TargetEnvType_27 == (MR_Integer) 0);
                }
                break;
              case (MR_Integer) 5:
                succeeded = MR_TRUE;
                break;
            }
          if (succeeded)
          {
            MR_String ScriptExt_28;
            MR_String OutputScriptName_29;
            MR_String UserDirScriptName_30;
            MR_Word ScriptSameTimestamp_31;
            MR_Word TargetEnvType_90;

            libs__globals__get_target_env_type_2_p_0(Globals_9, &TargetEnvType_90);
            ScriptExt_28 = ((&backend_libs__compile_target_code_vector_common_9[5 + TargetEnvType_90]))->backend_libs__compile_target_code__vector_common_type_9_0__vct_9_f_0;
            parse_tree__file_names__module_name_to_file_name_7_p_0(Globals_9, (MR_Integer) 1, ScriptExt_28, ModuleName_12, &OutputScriptName_29);
            parse_tree__file_names__module_name_to_file_name_7_p_0(NoSubdirGlobals_20, (MR_Integer) 1, ScriptExt_28, ModuleName_12, &UserDirScriptName_30);
            backend_libs__compile_target_code__same_timestamp_5_p_0(OutputScriptName_29, UserDirScriptName_30, &ScriptSameTimestamp_31);
            switch (ScriptSameTimestamp_31) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word ScriptOutputStream_32;
                  MR_Word Var_33;
                  MR_Word Var_34;

                  mercury__io__set_output_stream_4_p_0(ErrorStream_10, &ScriptOutputStream_32);
                  mercury__io__remove_file_recursively_4_p_0(UserDirScriptName_30, &Var_33);
                  parse_tree__module_cmds__make_symlink_or_copy_file_6_p_0(Globals_9, OutputScriptName_29, UserDirScriptName_30, Succeeded_13);
                  mercury__io__set_output_stream_4_p_0(ScriptOutputStream_32, &Var_34);
                }
                break;
              case (MR_Integer) 1:
                *Succeeded_13 = (MR_Integer) 1;
                break;
            }
          }
          else
            *Succeeded_13 = Succeeded0_23;
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
  MR_String * Ext_11,
  MR_String * OutputFileName_12)
{
  switch (LinkTargetType_9) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 3:
      {
        *Ext_11 = (MR_String) ".exe";
        parse_tree__file_names__module_name_to_file_name_7_p_0(Globals_8, (MR_Integer) 0, *Ext_11, ModuleName_10, OutputFileName_12);
      }
      break;
    case (MR_Integer) 4:
      {
        *Ext_11 = (MR_String) ".dll";
        parse_tree__file_names__module_name_to_file_name_7_p_0(Globals_8, (MR_Integer) 0, *Ext_11, ModuleName_10, OutputFileName_12);
      }
      break;
    case (MR_Integer) 8:
      {
        *Ext_11 = (MR_String) ".beams";
        parse_tree__file_names__module_name_to_lib_file_name_8_p_0(Globals_8, (MR_String) "lib", ModuleName_10, *Ext_11, (MR_Integer) 0, OutputFileName_12);
      }
      break;
    case (MR_Integer) 7:
      {
        MR_Word TargetEnvType_42;

        libs__globals__get_target_env_type_2_p_0(Globals_8, &TargetEnvType_42);
        *Ext_11 = ((&backend_libs__compile_target_code_vector_common_9[0 + TargetEnvType_42]))->backend_libs__compile_target_code__vector_common_type_9_0__vct_9_f_0;
        parse_tree__file_names__module_name_to_file_name_7_p_0(Globals_8, (MR_Integer) 0, *Ext_11, ModuleName_10, OutputFileName_12);
      }
      break;
    case (MR_Integer) 0:
      {
        libs__globals__lookup_string_option_3_p_0(Globals_8, (MR_Integer) 601, Ext_11);
        parse_tree__file_names__module_name_to_file_name_7_p_0(Globals_8, (MR_Integer) 0, *Ext_11, ModuleName_10, OutputFileName_12);
      }
      break;
    case (MR_Integer) 6:
      {
        *Ext_11 = (MR_String) ".jar";
        parse_tree__file_names__module_name_to_file_name_7_p_0(Globals_8, (MR_Integer) 0, *Ext_11, ModuleName_10, OutputFileName_12);
      }
      break;
    case (MR_Integer) 5:
      {
        *Ext_11 = (MR_String) ".jar";
        parse_tree__file_names__module_name_to_file_name_7_p_0(Globals_8, (MR_Integer) 0, *Ext_11, ModuleName_10, OutputFileName_12);
      }
      break;
    case (MR_Integer) 2:
      {
        libs__globals__lookup_string_option_3_p_0(Globals_8, (MR_Integer) 599, Ext_11);
        parse_tree__file_names__module_name_to_lib_file_name_8_p_0(Globals_8, (MR_String) "lib", ModuleName_10, *Ext_11, (MR_Integer) 0, OutputFileName_12);
      }
      break;
    case (MR_Integer) 1:
      {
        libs__globals__lookup_string_option_3_p_0(Globals_8, (MR_Integer) 600, Ext_11);
        parse_tree__file_names__module_name_to_lib_file_name_8_p_0(Globals_8, (MR_String) "lib", ModuleName_10, *Ext_11, (MR_Integer) 0, OutputFileName_12);
      }
      break;
  }
}

void MR_CALL 
backend_libs__compile_target_code__make_erlang_program_init_file_7_p_0(
  MR_Word Globals_8,
  MR_Word ErrorStream_9,
  MR_Word ModuleName_10,
  MR_Word ModuleNames_11,
  MR_Word * Result_12)
{
  {
    MR_Word MustCompile_14;
    MR_Word MaybeStdLibDir_15;
    MR_String GradeDir_16;
    MR_Word StdInitFileNames_18;
    MR_Word SourceDebugInitFileNames_19;
    MR_Word ErlangModuleName_21;
    MR_String ModuleNameStr_22;
    MR_String ModuleNameOption_23;
    MR_String MkInitErl_24;
    MR_Word MaybeInitTargetFile_25;
    MR_String InitObjFileName_26;
    MR_String Var_47;
    MR_String Var_51;

    libs__globals__lookup_bool_option_3_p_0(Globals_8, (MR_Integer) 651, &MustCompile_14);
    libs__globals__lookup_maybe_string_option_3_p_0(Globals_8, (MR_Integer) 579, &MaybeStdLibDir_15);
    libs__compute_grade__grade_directory_component_2_p_0(Globals_8, &GradeDir_16);
    if ((MaybeStdLibDir_15 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      StdInitFileNames_18 = (MR_Word) ((MR_Unsigned) 0U);
      SourceDebugInitFileNames_19 = (MR_Word) ((MR_Unsigned) 0U);
    }
    else
    {
      MR_String StdLibDir_17 = ((MR_String) ((MR_hl_field(MR_mktag(1), MaybeStdLibDir_15, (MR_Integer) 0))));
      MR_String Var_35;
      MR_String Var_36;
      MR_String Var_37;
      MR_String Var_41;
      MR_String Var_42;
      MR_String Var_43;

      Var_37 = mercury__dir__f_slash_2_f_0(StdLibDir_17, (MR_String) "modules");
      Var_36 = mercury__dir__f_slash_2_f_0(Var_37, GradeDir_16);
      Var_35 = mercury__dir__f_slash_2_f_0(Var_36, (MR_String) "mer_std.init");
      {
        StdInitFileNames_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), StdInitFileNames_18, 0) = ((MR_Box) (Var_35));
        MR_hl_field(MR_mktag(1), StdInitFileNames_18, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      Var_43 = mercury__dir__f_slash_2_f_0(StdLibDir_17, (MR_String) "modules");
      Var_42 = mercury__dir__f_slash_2_f_0(Var_43, GradeDir_16);
      Var_41 = mercury__dir__f_slash_2_f_0(Var_42, (MR_String) "mer_ssdb.init");
      {
        SourceDebugInitFileNames_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), SourceDebugInitFileNames_19, 0) = ((MR_Box) (Var_41));
        MR_hl_field(MR_mktag(1), SourceDebugInitFileNames_19, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
    }
    ErlangModuleName_21 = parse_tree__file_names__qualify_mercury_std_library_module_name_1_f_0(ModuleName_10);
    Var_47 = mdbcomp__sym_name__sym_name_to_string_sep_2_f_0(ErlangModuleName_21, (MR_String) "__");
    ModuleNameStr_22 = mercury__string__f_43_43_2_f_0(Var_47, (MR_String) "_init");
    Var_51 = libs__options__quote_arg_1_f_0(ModuleNameStr_22);
    ModuleNameOption_23 = mercury__string__f_43_43_2_f_0((MR_String) " -m ", Var_51);
    libs__globals__lookup_string_option_3_p_0(Globals_8, (MR_Integer) 610, &MkInitErl_24);
    backend_libs__compile_target_code__make_init_target_file_13_p_0(Globals_8, ErrorStream_9, MkInitErl_24, ModuleName_10, ModuleNames_11, (MR_String) ".erl", StdInitFileNames_18, (MR_Word) ((MR_Unsigned) 0U), SourceDebugInitFileNames_19, ModuleNameOption_23, &MaybeInitTargetFile_25);
    parse_tree__file_names__module_name_to_file_name_7_p_0(Globals_8, (MR_Integer) 0, (MR_String) "_init.beam", ModuleName_10, &InitObjFileName_26);
    backend_libs__compile_target_code__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_99_111_109_112_105_108_101_95_105_110_105_116_95_111_98_106_95_102_105_108_101_95_95_104_111_50_95_95_91_54_93_95_48_8_p_0(Globals_8, ErrorStream_9, Globals_8, MaybeInitTargetFile_25, MustCompile_14, InitObjFileName_26, Result_12);
  }
}

static void MR_CALL 
backend_libs__compile_target_code__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_99_111_109_112_105_108_101_95_105_110_105_116_95_111_98_106_95_102_105_108_101_95_95_104_111_50_95_95_91_54_93_95_48_8_p_0(
  MR_Word Var_30,
  MR_Word Var_31,
  MR_Word Globals_9,
  MR_Word MaybeInitTargetFile_10,
  MR_Word MustCompile_11,
  MR_String InitObjFileName_13,
  MR_Word * Result_14)
{
  {
    MR_bool succeeded;
    MR_Word Verbose_16;
    MR_Word Stats_17;

    libs__globals__lookup_bool_option_3_p_0(Globals_9, (MR_Integer) 63, &Verbose_16);
    libs__globals__lookup_bool_option_3_p_0(Globals_9, (MR_Integer) 73, &Stats_17);
    if ((MaybeInitTargetFile_10 == (MR_Word) ((MR_Unsigned) 0U)))
      *Result_14 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_String InitTargetFileName_18 = ((MR_String) ((MR_hl_field(MR_mktag(1), MaybeInitTargetFile_10, (MR_Integer) 0))));
      MR_Word Rel_19;
      MR_Word TimeResultA_50;
      MR_Word TimeResultB_51;
      MR_Word TimeA_52;
      MR_Word TimeB_53;

      mercury__io__file_modification_time_4_p_0(InitObjFileName_13, &TimeResultA_50);
      mercury__io__file_modification_time_4_p_0(InitTargetFileName_18, &TimeResultB_51);
      succeeded = ((MR_tag((MR_Word) TimeResultA_50)) == (MR_Integer) 0);
      if (succeeded)
      {
        TimeA_52 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TimeResultA_50, (MR_Integer) 0))));
        succeeded = ((MR_tag((MR_Word) TimeResultB_51)) == (MR_Integer) 0);
        if (succeeded)
          TimeB_53 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TimeResultB_51, (MR_Integer) 0))));
      }
      if (succeeded)
      {
        MR_Word Compare_54;

        mercury__time____Compare____time_t_0_0(&Compare_54, TimeA_52, TimeB_53);
        switch (Compare_54) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            Rel_19 = (MR_Integer) 1;
            break;
          case (MR_Integer) 0:
            Rel_19 = (MR_Integer) 0;
            break;
          case (MR_Integer) 2:
            Rel_19 = (MR_Integer) 0;
            break;
        }
      }
      else
        Rel_19 = (MR_Integer) 2;
      switch (Rel_19) {
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
        succeeded = (MustCompile_11 == (MR_Integer) 1);
      if (succeeded)
      {
        MR_Word CompileOk_20;

        libs__file_util__maybe_write_string_4_p_0(Verbose_16, (MR_String) "% Compiling initialization file...\n");
        backend_libs__compile_target_code__compile_erlang_file_6_p_0(Var_30, Var_31, InitTargetFileName_18, &CompileOk_20);
        libs__file_util__maybe_report_stats_3_p_0(Stats_17);
        switch (CompileOk_20) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *Result_14 = (MR_Word) ((MR_Unsigned) 0U);
            break;
          case (MR_Integer) 1:
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *Result_14 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (InitObjFileName_13));
            }
            break;
        }
      }
      else
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *Result_14 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (InitObjFileName_13));
        }
    }
  }
}

void MR_CALL 
backend_libs__compile_target_code__make_init_obj_file_7_p_0(
  MR_Word Globals_8,
  MR_Word ErrorStream_9,
  MR_Word ModuleName_10,
  MR_Word ModuleNames_11,
  MR_Word * Result_12)
{
  {
    MR_Word MustCompile_14;

    libs__globals__lookup_bool_option_3_p_0(Globals_8, (MR_Integer) 651, &MustCompile_14);
    backend_libs__compile_target_code__do_make_init_obj_file_8_p_0(Globals_8, ErrorStream_9, MustCompile_14, ModuleName_10, ModuleNames_11, Result_12);
  }
}

static void MR_CALL 
backend_libs__compile_target_code__do_make_init_obj_file_8_p_0(
  MR_Word Globals_9,
  MR_Word ErrorStream_10,
  MR_Word MustCompile_11,
  MR_Word ModuleName_12,
  MR_Word ModuleNames_13,
  MR_Word * Result_14)
{
  {
    MR_Word MaybeStdLibDir_16;
    MR_String GradeDir_17;
    MR_Word StdInitFileNames_21;
    MR_Word StdTraceInitFileNames_22;
    MR_Word SourceDebugInitFileNames_23;
    MR_String MkInit_24;
    MR_Word MaybeInitTargetFile_25;
    MR_String ObjExt_27;
    MR_String InitObjFileName_28;
    MR_String Var_62;

    libs__globals__lookup_maybe_string_option_3_p_0(Globals_9, (MR_Integer) 579, &MaybeStdLibDir_16);
    libs__compute_grade__grade_directory_component_2_p_0(Globals_9, &GradeDir_17);
    if ((MaybeStdLibDir_16 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      StdInitFileNames_21 = (MR_Word) ((MR_Unsigned) 0U);
      StdTraceInitFileNames_22 = (MR_Word) ((MR_Unsigned) 0U);
      SourceDebugInitFileNames_23 = (MR_Word) ((MR_Unsigned) 0U);
    }
    else
    {
      MR_String StdLibDir_18 = ((MR_String) ((MR_hl_field(MR_mktag(1), MaybeStdLibDir_16, (MR_Integer) 0))));
      MR_String Var_41;
      MR_Word Var_43;
      MR_String Var_44;
      MR_String Var_47;
      MR_Word Var_49;
      MR_String Var_50;
      MR_String Var_53;

      Var_41 = backend_libs__compile_target_code__IntroducedFrom__func__do_make_init_obj_file__1313__1_3_f_0(GradeDir_17, StdLibDir_18, (MR_String) "mer_rt.init");
      Var_44 = backend_libs__compile_target_code__IntroducedFrom__func__do_make_init_obj_file__1313__1_3_f_0(GradeDir_17, StdLibDir_18, (MR_String) "mer_std.init");
      {
        Var_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_43, 0) = ((MR_Box) (Var_44));
        MR_hl_field(MR_mktag(1), Var_43, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        StdInitFileNames_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), StdInitFileNames_21, 0) = ((MR_Box) (Var_41));
        MR_hl_field(MR_mktag(1), StdInitFileNames_21, 1) = ((MR_Box) (Var_43));
      }
      Var_47 = backend_libs__compile_target_code__IntroducedFrom__func__do_make_init_obj_file__1313__1_3_f_0(GradeDir_17, StdLibDir_18, (MR_String) "mer_browser.init");
      Var_50 = backend_libs__compile_target_code__IntroducedFrom__func__do_make_init_obj_file__1313__1_3_f_0(GradeDir_17, StdLibDir_18, (MR_String) "mer_mdbcomp.init");
      {
        Var_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_49, 0) = ((MR_Box) (Var_50));
        MR_hl_field(MR_mktag(1), Var_49, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        StdTraceInitFileNames_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), StdTraceInitFileNames_22, 0) = ((MR_Box) (Var_47));
        MR_hl_field(MR_mktag(1), StdTraceInitFileNames_22, 1) = ((MR_Box) (Var_49));
      }
      Var_53 = backend_libs__compile_target_code__IntroducedFrom__func__do_make_init_obj_file__1313__1_3_f_0(GradeDir_17, StdLibDir_18, (MR_String) "mer_ssdb.init");
      {
        SourceDebugInitFileNames_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), SourceDebugInitFileNames_23, 0) = ((MR_Box) (Var_53));
        MR_hl_field(MR_mktag(1), SourceDebugInitFileNames_23, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
    }
    libs__globals__lookup_string_option_3_p_0(Globals_9, (MR_Integer) 609, &MkInit_24);
    backend_libs__compile_target_code__make_init_target_file_13_p_0(Globals_9, ErrorStream_10, MkInit_24, ModuleName_12, ModuleNames_13, (MR_String) ".c", StdInitFileNames_21, StdTraceInitFileNames_22, SourceDebugInitFileNames_23, (MR_String) "", &MaybeInitTargetFile_25);
    libs__globals__lookup_string_option_3_p_0(Globals_9, (MR_Integer) 541, &ObjExt_27);
    Var_62 = mercury__string__f_43_43_2_f_0((MR_String) "_init", ObjExt_27);
    parse_tree__file_names__module_name_to_file_name_7_p_0(Globals_9, (MR_Integer) 0, Var_62, ModuleName_12, &InitObjFileName_28);
    backend_libs__compile_target_code__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_99_111_109_112_105_108_101_95_105_110_105_116_95_111_98_106_95_102_105_108_101_95_95_104_111_49_95_95_91_56_93_95_48_8_p_0(Globals_9, ErrorStream_10, (MR_Integer) 1, InitObjFileName_28, Globals_9, MaybeInitTargetFile_25, MustCompile_11, InitObjFileName_28, Result_14);
  }
}

static void MR_CALL 
backend_libs__compile_target_code__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_99_111_109_112_105_108_101_95_105_110_105_116_95_111_98_106_95_102_105_108_101_95_95_104_111_49_95_95_91_56_93_95_48_8_p_0(
  MR_Word Var_30,
  MR_Word Var_31,
  MR_Word Var_32,
  MR_String Var_33,
  MR_Word Globals_9,
  MR_Word MaybeInitTargetFile_10,
  MR_Word MustCompile_11,
  MR_String InitObjFileName_13,
  MR_Word * Result_14)
{
  {
    MR_bool succeeded;
    MR_Word Verbose_16;
    MR_Word Stats_17;

    libs__globals__lookup_bool_option_3_p_0(Globals_9, (MR_Integer) 63, &Verbose_16);
    libs__globals__lookup_bool_option_3_p_0(Globals_9, (MR_Integer) 73, &Stats_17);
    if ((MaybeInitTargetFile_10 == (MR_Word) ((MR_Unsigned) 0U)))
      *Result_14 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_String InitTargetFileName_18 = ((MR_String) ((MR_hl_field(MR_mktag(1), MaybeInitTargetFile_10, (MR_Integer) 0))));
      MR_Word Rel_19;
      MR_Word TimeResultA_52;
      MR_Word TimeResultB_53;
      MR_Word TimeA_54;
      MR_Word TimeB_55;

      mercury__io__file_modification_time_4_p_0(InitObjFileName_13, &TimeResultA_52);
      mercury__io__file_modification_time_4_p_0(InitTargetFileName_18, &TimeResultB_53);
      succeeded = ((MR_tag((MR_Word) TimeResultA_52)) == (MR_Integer) 0);
      if (succeeded)
      {
        TimeA_54 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TimeResultA_52, (MR_Integer) 0))));
        succeeded = ((MR_tag((MR_Word) TimeResultB_53)) == (MR_Integer) 0);
        if (succeeded)
          TimeB_55 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TimeResultB_53, (MR_Integer) 0))));
      }
      if (succeeded)
      {
        MR_Word Compare_56;

        mercury__time____Compare____time_t_0_0(&Compare_56, TimeA_54, TimeB_55);
        switch (Compare_56) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            Rel_19 = (MR_Integer) 1;
            break;
          case (MR_Integer) 0:
            Rel_19 = (MR_Integer) 0;
            break;
          case (MR_Integer) 2:
            Rel_19 = (MR_Integer) 0;
            break;
        }
      }
      else
        Rel_19 = (MR_Integer) 2;
      switch (Rel_19) {
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
        succeeded = (MustCompile_11 == (MR_Integer) 1);
      if (succeeded)
      {
        MR_Word CompileOk_20;

        libs__file_util__maybe_write_string_4_p_0(Verbose_16, (MR_String) "% Compiling initialization file...\n");
        backend_libs__compile_target_code__IntroducedFrom__pred__do_make_init_obj_file__1344__1_8_p_0(Var_30, Var_31, Var_32, Var_33, InitTargetFileName_18, &CompileOk_20);
        libs__file_util__maybe_report_stats_3_p_0(Stats_17);
        switch (CompileOk_20) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *Result_14 = (MR_Word) ((MR_Unsigned) 0U);
            break;
          case (MR_Integer) 1:
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *Result_14 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (InitObjFileName_13));
            }
            break;
        }
      }
      else
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *Result_14 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (InitObjFileName_13));
        }
    }
  }
}

static void MR_CALL 
backend_libs__compile_target_code__IntroducedFrom__pred__do_make_init_obj_file__1344__1_8_p_0(
  MR_Word Globals_9,
  MR_Word ErrorStream_10,
  MR_Word PIC_26,
  MR_String InitObjFileName_28,
  MR_String LambdaHeadVar__1_65,
  MR_Word * LambdaHeadVar__2_66)
{
  backend_libs__compile_target_code__do_compile_c_file_8_p_0(Globals_9, ErrorStream_10, PIC_26, LambdaHeadVar__1_65, InitObjFileName_28, LambdaHeadVar__2_66);
}

static MR_String MR_CALL 
backend_libs__compile_target_code__IntroducedFrom__func__do_make_init_obj_file__1313__1_3_f_0(
  MR_String GradeDir_17,
  MR_String StdLibDir_18,
  MR_String LambdaHeadVar__1_36)
{
  {
    MR_String LambdaHeadVar__2_37;
    MR_String Var_38;
    MR_String Var_39;

    Var_39 = mercury__dir__f_slash_2_f_0(StdLibDir_18, (MR_String) "modules");
    Var_38 = mercury__dir__f_slash_2_f_0(Var_39, GradeDir_17);
    LambdaHeadVar__2_37 = mercury__dir__f_slash_2_f_0(Var_38, LambdaHeadVar__1_36);
    return LambdaHeadVar__2_37;
  }
}

static void MR_CALL 
backend_libs__compile_target_code__make_init_target_file_13_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_String conv0_HeadVar__5_5;

    parse_tree__file_names__module_name_to_file_name_7_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__5_5);
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__5_5));
  }
}

static void MR_CALL 
backend_libs__compile_target_code__make_init_target_file_13_p_0(
  MR_Word Globals_14,
  MR_Word ErrorStream_15,
  MR_String MkInit_16,
  MR_Word ModuleName_17,
  MR_Word ModuleNames_18,
  MR_String TargetExt_19,
  MR_Word StdInitFileNames_20,
  MR_Word StdTraceInitFileNames_21,
  MR_Word SourceDebugInitFileNames_22,
  MR_String ModuleNameOption_23,
  MR_Word * MaybeInitTargetFile_24)
{
  {
    MR_bool succeeded;
    MR_Word Verbose_26;
    MR_Word Stats_27;
    MR_String Grade_28;
    MR_String InitTargetFileName_29;
    MR_Word TargetFileNameList_30;
    MR_Word InitFileDirsList_31;
    MR_String InitFileDirs_32;
    MR_Word InitFileNamesList0_33;
    MR_Word InitFileNamesList1_34;
    MR_Word TraceInitFileNamesList0_35;
    MR_Word InitFileNamesList2_36;
    MR_Word TraceInitFileNamesList_37;
    MR_Word TraceLevel_38;
    MR_Word TraceLevelIsNone_39;
    MR_String TraceOpt_40;
    MR_Word InitFileNamesList3_41;
    MR_Word SourceDebug_42;
    MR_Word InitFileNamesList_43;
    MR_Word RuntimeFlagsList_44;
    MR_String RuntimeFlags_45;
    MR_Word ExtraInits_46;
    MR_String ExtraInitsOpt_47;
    MR_Word Main_48;
    MR_String NoMainOpt_49;
    MR_String ExperimentalComplexity_50;
    MR_String ExperimentalComplexityOpt_51;
    MR_String TmpInitTargetFileName_52;
    MR_String MkInitArgs_53;
    MR_Word MkInitOk_54;
    MR_String Var_63;
    MR_Word Var_66;
    MR_Word Var_85;
    MR_Word Var_87;
    MR_Word Var_88;
    MR_Word Var_90;
    MR_Word Var_91;
    MR_Word Var_93;
    MR_Word Var_94;
    MR_Word Var_96;
    MR_Word Var_97;
    MR_Word Var_99;
    MR_Word Var_100;
    MR_Word Var_102;
    MR_Word Var_103;
    MR_Word Var_105;
    MR_String Var_106;
    MR_Word Var_107;
    MR_Word Var_109;
    MR_Word Var_110;
    MR_Word Var_113;
    MR_Box conv1_STATE_VARIABLE_IO_67_67;

    libs__globals__lookup_bool_option_3_p_0(Globals_14, (MR_Integer) 63, &Verbose_26);
    libs__globals__lookup_bool_option_3_p_0(Globals_14, (MR_Integer) 73, &Stats_27);
    libs__file_util__maybe_write_string_4_p_0(Verbose_26, (MR_String) "% Creating initialization file...\n");
    libs__compute_grade__compute_grade_2_p_0(Globals_14, &Grade_28);
    Var_63 = mercury__string__f_43_43_2_f_0((MR_String) "_init", TargetExt_19);
    parse_tree__file_names__module_name_to_file_name_7_p_0(Globals_14, (MR_Integer) 0, Var_63, ModuleName_17, &InitTargetFileName_29);
    {
      Var_66 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_66, 0) = ((MR_Box) (&backend_libs__compile_target_code_scalar_common_8[0]));
      MR_hl_field(MR_mktag(0), Var_66, 1) = ((MR_Box) (backend_libs__compile_target_code__make_init_target_file_13_p_0_1));
      MR_hl_field(MR_mktag(0), Var_66, 2) = ((MR_Box) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), Var_66, 3) = ((MR_Box) (Globals_14));
      MR_hl_field(MR_mktag(0), Var_66, 4) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_66, 5) = ((MR_Box) (TargetExt_19));
    }
    mercury__list__map_foldl_5_p_2((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_66, ModuleNames_18, &TargetFileNameList_30, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_67_67);
    libs__globals__lookup_accumulating_option_3_p_0(Globals_14, (MR_Integer) 581, &InitFileDirsList_31);
    backend_libs__compile_target_code__join_quoted_string_list_5_p_0(InitFileDirsList_31, (MR_String) "-I ", (MR_String) "", (MR_String) " ", &InitFileDirs_32);
    libs__globals__lookup_accumulating_option_3_p_0(Globals_14, (MR_Integer) 582, &InitFileNamesList0_33);
    mercury__list__remove_dups_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), InitFileNamesList0_33, &InitFileNamesList1_34);
    libs__globals__lookup_accumulating_option_3_p_0(Globals_14, (MR_Integer) 583, &TraceInitFileNamesList0_35);
    InitFileNamesList2_36 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), StdInitFileNames_20, InitFileNamesList1_34);
    TraceInitFileNamesList_37 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), StdTraceInitFileNames_21, TraceInitFileNamesList0_35);
    libs__globals__get_trace_level_2_p_0(Globals_14, &TraceLevel_38);
    TraceLevelIsNone_39 = libs__trace_params__given_trace_level_is_none_1_f_0(TraceLevel_38);
    switch (TraceLevelIsNone_39) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          TraceOpt_40 = (MR_String) "-t";
          InitFileNamesList3_41 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), InitFileNamesList2_36, TraceInitFileNamesList_37);
        }
        break;
      case (MR_Integer) 1:
        {
          TraceOpt_40 = (MR_String) "";
          InitFileNamesList3_41 = InitFileNamesList2_36;
        }
        break;
    }
    libs__globals__lookup_bool_option_3_p_0(Globals_14, (MR_Integer) 259, &SourceDebug_42);
    switch (SourceDebug_42) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        InitFileNamesList_43 = InitFileNamesList3_41;
        break;
      case (MR_Integer) 1:
        InitFileNamesList_43 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), InitFileNamesList3_41, SourceDebugInitFileNames_22);
        break;
    }
    libs__globals__lookup_accumulating_option_3_p_0(Globals_14, (MR_Integer) 593, &RuntimeFlagsList_44);
    backend_libs__compile_target_code__join_quoted_string_list_5_p_0(RuntimeFlagsList_44, (MR_String) "-r ", (MR_String) "", (MR_String) " ", &RuntimeFlags_45);
    libs__globals__lookup_bool_option_3_p_0(Globals_14, (MR_Integer) 594, &ExtraInits_46);
    switch (ExtraInits_46) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        ExtraInitsOpt_47 = (MR_String) "";
        break;
      case (MR_Integer) 1:
        ExtraInitsOpt_47 = (MR_String) "-x";
        break;
    }
    libs__globals__lookup_bool_option_3_p_0(Globals_14, (MR_Integer) 590, &Main_48);
    switch (Main_48) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        NoMainOpt_49 = (MR_String) "-l";
        break;
      case (MR_Integer) 1:
        NoMainOpt_49 = (MR_String) "";
        break;
    }
    libs__globals__lookup_string_option_3_p_0(Globals_14, (MR_Integer) 238, &ExperimentalComplexity_50);
    succeeded = (strcmp(ExperimentalComplexity_50, (MR_String) "") == 0);
    if (succeeded)
      ExperimentalComplexityOpt_51 = (MR_String) "";
    else
      ExperimentalComplexityOpt_51 = mercury__string__f_43_43_2_f_0((MR_String) "-X ", ExperimentalComplexity_50);
    TmpInitTargetFileName_52 = mercury__string__f_43_43_2_f_0(InitTargetFileName_29, (MR_String) ".tmp");
    Var_106 = libs__options__quote_arg_1_f_0(TmpInitTargetFileName_52);
    {
      Var_110 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_110, 0) = ((MR_Box) (ModuleNameOption_23));
      MR_hl_field(MR_mktag(1), Var_110, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_109 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_109, 0) = ((MR_Box) (InitFileDirs_32));
      MR_hl_field(MR_mktag(1), Var_109, 1) = ((MR_Box) (Var_110));
    }
    {
      Var_107 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_107, 0) = ((MR_Box) ((MR_String) " "));
      MR_hl_field(MR_mktag(1), Var_107, 1) = ((MR_Box) (Var_109));
    }
    {
      Var_105 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_105, 0) = ((MR_Box) (Var_106));
      MR_hl_field(MR_mktag(1), Var_105, 1) = ((MR_Box) (Var_107));
    }
    {
      Var_103 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_103, 0) = ((MR_Box) ((MR_String) " -o "));
      MR_hl_field(MR_mktag(1), Var_103, 1) = ((MR_Box) (Var_105));
    }
    {
      Var_102 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_102, 0) = ((MR_Box) (RuntimeFlags_45));
      MR_hl_field(MR_mktag(1), Var_102, 1) = ((MR_Box) (Var_103));
    }
    {
      Var_100 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_100, 0) = ((MR_Box) ((MR_String) " "));
      MR_hl_field(MR_mktag(1), Var_100, 1) = ((MR_Box) (Var_102));
    }
    {
      Var_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_99, 0) = ((MR_Box) (ExperimentalComplexityOpt_51));
      MR_hl_field(MR_mktag(1), Var_99, 1) = ((MR_Box) (Var_100));
    }
    {
      Var_97 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_97, 0) = ((MR_Box) ((MR_String) " "));
      MR_hl_field(MR_mktag(1), Var_97, 1) = ((MR_Box) (Var_99));
    }
    {
      Var_96 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_96, 0) = ((MR_Box) (NoMainOpt_49));
      MR_hl_field(MR_mktag(1), Var_96, 1) = ((MR_Box) (Var_97));
    }
    {
      Var_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_94, 0) = ((MR_Box) ((MR_String) " "));
      MR_hl_field(MR_mktag(1), Var_94, 1) = ((MR_Box) (Var_96));
    }
    {
      Var_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_93, 0) = ((MR_Box) (ExtraInitsOpt_47));
      MR_hl_field(MR_mktag(1), Var_93, 1) = ((MR_Box) (Var_94));
    }
    {
      Var_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_91, 0) = ((MR_Box) ((MR_String) " "));
      MR_hl_field(MR_mktag(1), Var_91, 1) = ((MR_Box) (Var_93));
    }
    {
      Var_90 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_90, 0) = ((MR_Box) (TraceOpt_40));
      MR_hl_field(MR_mktag(1), Var_90, 1) = ((MR_Box) (Var_91));
    }
    {
      Var_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_88, 0) = ((MR_Box) ((MR_String) " "));
      MR_hl_field(MR_mktag(1), Var_88, 1) = ((MR_Box) (Var_90));
    }
    {
      Var_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_87, 0) = ((MR_Box) (Grade_28));
      MR_hl_field(MR_mktag(1), Var_87, 1) = ((MR_Box) (Var_88));
    }
    {
      Var_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_85, 0) = ((MR_Box) ((MR_String) " -g "));
      MR_hl_field(MR_mktag(1), Var_85, 1) = ((MR_Box) (Var_87));
    }
    MkInitArgs_53 = mercury__string__append_list_1_f_0(Var_85);
    Var_113 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), TargetFileNameList_30, InitFileNamesList_43);
    backend_libs__compile_target_code__invoke_mkinit_9_p_0(Globals_14, ErrorStream_15, (MR_Integer) 1, MkInit_16, MkInitArgs_53, Var_113, &MkInitOk_54);
    libs__file_util__maybe_report_stats_3_p_0(Stats_27);
    switch (MkInitOk_54) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *MaybeInitTargetFile_24 = (MR_Word) ((MR_Unsigned) 0U);
        break;
      case (MR_Integer) 1:
        {
          MR_Word UpdateOk_55;

          parse_tree__module_cmds__update_interface_return_succeeded_5_p_0(Globals_14, InitTargetFileName_29, &UpdateOk_55);
          switch (UpdateOk_55) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *MaybeInitTargetFile_24 = (MR_Word) ((MR_Unsigned) 0U);
              break;
            case (MR_Integer) 1:
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                *MaybeInitTargetFile_24 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (InitTargetFileName_29));
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
backend_libs__compile_target_code__make_erlang_library_init_file_7_p_0(
  MR_Word Globals_8,
  MR_Word ErrorStream_9,
  MR_Word MainModuleName_10,
  MR_Word AllModules_11,
  MR_Word * Succeeded_12)
{
  {
    MR_String MkInit_14;

    libs__globals__lookup_string_option_3_p_0(Globals_8, (MR_Integer) 610, &MkInit_14);
    backend_libs__compile_target_code__make_library_init_file_2_9_p_0(Globals_8, ErrorStream_9, MainModuleName_10, AllModules_11, (MR_String) ".erl", MkInit_14, Succeeded_12);
  }
}

void MR_CALL 
backend_libs__compile_target_code__make_library_init_file_7_p_0(
  MR_Word Globals_8,
  MR_Word ErrorStream_9,
  MR_Word MainModuleName_10,
  MR_Word AllModules_11,
  MR_Word * Succeeded_12)
{
  {
    MR_String MkInit_14;

    libs__globals__lookup_string_option_3_p_0(Globals_8, (MR_Integer) 609, &MkInit_14);
    backend_libs__compile_target_code__make_library_init_file_2_9_p_0(Globals_8, ErrorStream_9, MainModuleName_10, AllModules_11, (MR_String) ".c", MkInit_14, Succeeded_12);
  }
}

static void MR_CALL 
backend_libs__compile_target_code__make_library_init_file_2_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_String conv0_HeadVar__5_5;

    parse_tree__file_names__module_name_to_file_name_7_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__5_5);
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__5_5));
  }
}

static void MR_CALL 
backend_libs__compile_target_code__make_library_init_file_2_9_p_0(
  MR_Word Globals_10,
  MR_Word ErrorStream_11,
  MR_Word MainModuleName_12,
  MR_Word AllModules_13,
  MR_String TargetExt_14,
  MR_String MkInit_15,
  MR_Word * Succeeded_16)
{
  {
    MR_String TmpInitFileName_18;
    MR_Word InitFileRes_19;

    parse_tree__file_names__module_name_to_file_name_7_p_0(Globals_10, (MR_Integer) 0, (MR_String) ".init.tmp", MainModuleName_12, &TmpInitFileName_18);
    mercury__io__open_output_4_p_0(TmpInitFileName_18, &InitFileRes_19);
    if (((MR_tag((MR_Word) InitFileRes_19)) == (MR_Integer) 1))
    {
      MR_Word Error_37 = ((MR_Word) ((MR_hl_field(MR_mktag(1), InitFileRes_19, (MR_Integer) 0))));
      MR_String ProgName_38;
      MR_String Var_54;

      mercury__io__progname_base_4_p_0((MR_String) "mercury_compile", &ProgName_38);
      mercury__io__write_string_4_p_0(ErrorStream_11, ProgName_38);
      mercury__io__write_string_4_p_0(ErrorStream_11, (MR_String) ": can\'t open \140");
      mercury__io__write_string_4_p_0(ErrorStream_11, TmpInitFileName_18);
      mercury__io__write_string_4_p_0(ErrorStream_11, (MR_String) "\' for output:\n");
      mercury__io__nl_3_p_0(ErrorStream_11);
      Var_54 = mercury__io__error_message_1_f_0(Error_37);
      mercury__io__write_string_4_p_0(ErrorStream_11, Var_54);
      mercury__io__nl_3_p_0(ErrorStream_11);
      *Succeeded_16 = (MR_Integer) 0;
    }
    else
    {
      MR_Word InitFileStream_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InitFileRes_19, (MR_Integer) 0))));
      MR_Word AllTargetFilesList_21;
      MR_Word MkInitOK_22;
      MR_Word Succeeded0_26;
      MR_String InitFileName_27;
      MR_Word Succeeded1_28;
      MR_Word Succeeded2_29;
      MR_Word Var_57;
      MR_Box conv1_STATE_VARIABLE_IO_58_58;

      {
        Var_57 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_57, 0) = ((MR_Box) (&backend_libs__compile_target_code_scalar_common_8[0]));
        MR_hl_field(MR_mktag(0), Var_57, 1) = ((MR_Box) (backend_libs__compile_target_code__make_library_init_file_2_9_p_0_1));
        MR_hl_field(MR_mktag(0), Var_57, 2) = ((MR_Box) ((MR_Integer) 3));
        MR_hl_field(MR_mktag(0), Var_57, 3) = ((MR_Box) (Globals_10));
        MR_hl_field(MR_mktag(0), Var_57, 4) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_57, 5) = ((MR_Box) (TargetExt_14));
      }
      mercury__list__map_foldl_5_p_2((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_57, AllModules_13, &AllTargetFilesList_21, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_58_58);
      backend_libs__compile_target_code__invoke_mkinit_9_p_0(Globals_10, InitFileStream_20, (MR_Integer) 1, MkInit_15, (MR_String) " -k ", AllTargetFilesList_21, &MkInitOK_22);
      switch (MkInitOK_22) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          Succeeded0_26 = (MR_Integer) 0;
          break;
        case (MR_Integer) 1:
          {
            MR_Word MaybeInitFileCommand_23;

            libs__globals__lookup_maybe_string_option_3_p_0(Globals_10, (MR_Integer) 656, &MaybeInitFileCommand_23);
            if ((MaybeInitFileCommand_23 == (MR_Word) ((MR_Unsigned) 0U)))
              Succeeded0_26 = (MR_Integer) 1;
            else
            {
              MR_String InitFileCommand_24 = ((MR_String) ((MR_hl_field(MR_mktag(1), MaybeInitFileCommand_23, (MR_Integer) 0))));
              MR_String CommandString_25;

              backend_libs__compile_target_code__make_all_module_command_7_p_0(Globals_10, InitFileCommand_24, MainModuleName_12, AllModules_13, &CommandString_25);
              parse_tree__module_cmds__invoke_system_command_7_p_0(Globals_10, InitFileStream_20, (MR_Integer) 1, CommandString_25, &Succeeded0_26);
            }
          }
          break;
      }
      mercury__io__close_output_3_p_0(InitFileStream_20);
      parse_tree__file_names__module_name_to_file_name_7_p_0(Globals_10, (MR_Integer) 0, (MR_String) ".init", MainModuleName_12, &InitFileName_27);
      parse_tree__module_cmds__update_interface_return_succeeded_5_p_0(Globals_10, InitFileName_27, &Succeeded1_28);
      Succeeded2_29 = mercury__bool__and_2_f_0(Succeeded0_26, Succeeded1_28);
      switch (Succeeded2_29) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          *Succeeded_16 = (MR_Integer) 0;
          break;
        case (MR_Integer) 1:
          {
            MR_Word UseGradeSubDirs_30;

            libs__globals__lookup_bool_option_3_p_0(Globals_10, (MR_Integer) 674, &UseGradeSubDirs_30);
            switch (UseGradeSubDirs_30) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *Succeeded_16 = (MR_Integer) 1;
                break;
              case (MR_Integer) 1:
                {
                  MR_Word OutputStream_31;
                  MR_Word NoSubdirGlobals0_32;
                  MR_Word NoSubdirGlobals_33;
                  MR_String UserDirFileName_34;
                  MR_Word Var_75;
                  MR_Word Var_35;
                  MR_Word Var_36;

                  mercury__io__set_output_stream_4_p_0(ErrorStream_11, &OutputStream_31);
                  Var_75 = (MR_Word) (MR_mkword(MR_mktag(1), &backend_libs__compile_target_code_scalar_common_3[3]));
                  libs__globals__set_option_4_p_0((MR_Integer) 673, Var_75, Globals_10, &NoSubdirGlobals0_32);
                  libs__globals__set_option_4_p_0((MR_Integer) 674, Var_75, NoSubdirGlobals0_32, &NoSubdirGlobals_33);
                  parse_tree__file_names__module_name_to_file_name_7_p_0(NoSubdirGlobals_33, (MR_Integer) 1, (MR_String) ".init", MainModuleName_12, &UserDirFileName_34);
                  mercury__io__remove_file_4_p_0(UserDirFileName_34, &Var_35);
                  parse_tree__module_cmds__make_symlink_or_copy_file_6_p_0(Globals_10, InitFileName_27, UserDirFileName_34, Succeeded_16);
                  mercury__io__set_output_stream_4_p_0(OutputStream_31, &Var_36);
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
backend_libs__compile_target_code__invoke_mkinit_9_p_0(
  MR_Word Globals_10,
  MR_Word InitFileStream_11,
  MR_Word Verbosity_12,
  MR_String MkInit_13,
  MR_String Args_14,
  MR_Word FileNames_15,
  MR_Word * MkInitOK_16)
{
  {
    MR_String TargetFileNames_18;
    MR_Word TmpFileResult_19;

    backend_libs__compile_target_code__join_string_list_5_p_0(FileNames_15, (MR_String) "", (MR_String) "\n", (MR_String) "", &TargetFileNames_18);
    libs__file_util__open_temp_output_3_p_0(&TmpFileResult_19);
    if (((MR_tag((MR_Word) TmpFileResult_19)) == (MR_Integer) 1))
    {
      MR_String ErrorMessage_26 = ((MR_String) ((MR_hl_field(MR_mktag(1), TmpFileResult_19, (MR_Integer) 0))));
      MR_Word Var_33;

      Var_33 = mercury__io__stderr_stream_0_f_0();
      mercury__io__write_string_4_p_0(Var_33, ErrorMessage_26);
      mercury__io__nl_2_p_0();
      *MkInitOK_16 = (MR_Integer) 0;
    }
    else
    {
      MR_String TmpFile_20;
      MR_Word TmpStream_21;
      MR_String MkInitCmd_22;
      MR_Word MkInitOK0_23;
      MR_Word RemoveResult_24;
      MR_Tuple Var_36 = ((MR_Tuple) ((MR_hl_field(MR_mktag(0), TmpFileResult_19, (MR_Integer) 0))));
      MR_Word Var_39;
      MR_Word Var_40;
      MR_Word Var_42;
      MR_Word Var_43;
      MR_Word Var_45;

      TmpFile_20 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_36, (MR_Integer) 0))));
      TmpStream_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_36, (MR_Integer) 1))));
      mercury__io__write_string_4_p_0(TmpStream_21, TargetFileNames_18);
      mercury__io__close_output_3_p_0(TmpStream_21);
      {
        Var_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_45, 0) = ((MR_Box) (TmpFile_20));
        MR_hl_field(MR_mktag(1), Var_45, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_43, 0) = ((MR_Box) ((MR_String) " -f "));
        MR_hl_field(MR_mktag(1), Var_43, 1) = ((MR_Box) (Var_45));
      }
      {
        Var_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_42, 0) = ((MR_Box) (Args_14));
        MR_hl_field(MR_mktag(1), Var_42, 1) = ((MR_Box) (Var_43));
      }
      {
        Var_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_40, 0) = ((MR_Box) ((MR_String) " "));
        MR_hl_field(MR_mktag(1), Var_40, 1) = ((MR_Box) (Var_42));
      }
      {
        Var_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_39, 0) = ((MR_Box) (MkInit_13));
        MR_hl_field(MR_mktag(1), Var_39, 1) = ((MR_Box) (Var_40));
      }
      MkInitCmd_22 = mercury__string__append_list_1_f_0(Var_39);
      parse_tree__module_cmds__invoke_system_command_7_p_0(Globals_10, InitFileStream_11, Verbosity_12, MkInitCmd_22, &MkInitOK0_23);
      mercury__io__remove_file_4_p_0(TmpFile_20, &RemoveResult_24);
      if ((RemoveResult_24 == (MR_Word) ((MR_Unsigned) 0U)))
        *MkInitOK_16 = MkInitOK0_23;
      else
        *MkInitOK_16 = (MR_Integer) 0;
    }
  }
}

static MR_Box MR_CALL 
backend_libs__compile_target_code__make_all_module_command_7_p_0_2(
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
backend_libs__compile_target_code__make_all_module_command_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_String conv0_HeadVar__5_5;

    parse_tree__file_names__module_name_to_file_name_7_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__5_5);
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__5_5));
  }
}

void MR_CALL 
backend_libs__compile_target_code__make_all_module_command_7_p_0(
  MR_Word Globals_8,
  MR_String Command0_9,
  MR_Word MainModule_10,
  MR_Word AllModules_11,
  MR_String * Command_12)
{
  {
    MR_Word ModuleNameStrings_14;
    MR_Word Var_17;
    MR_Word Var_18;
    MR_Word Var_22;
    MR_Word Var_24;
    MR_Word Var_26;
    MR_Box conv1_STATE_VARIABLE_IO_16;

    {
      Var_17 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_17, 0) = ((MR_Box) (&backend_libs__compile_target_code_scalar_common_8[0]));
      MR_hl_field(MR_mktag(0), Var_17, 1) = ((MR_Box) (backend_libs__compile_target_code__make_all_module_command_7_p_0_1));
      MR_hl_field(MR_mktag(0), Var_17, 2) = ((MR_Box) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), Var_17, 3) = ((MR_Box) (Globals_8));
      MR_hl_field(MR_mktag(0), Var_17, 4) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_17, 5) = ((MR_Box) ((MR_String) ".m"));
    }
    Var_22 = mercury__list__delete_all_2_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), AllModules_11, ((MR_Box) (MainModule_10)));
    {
      Var_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_18, 0) = ((MR_Box) (MainModule_10));
      MR_hl_field(MR_mktag(1), Var_18, 1) = ((MR_Box) (Var_22));
    }
    mercury__list__map_foldl_5_p_2((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_17, Var_18, &ModuleNameStrings_14, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_16);
    {
      Var_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_26, 0) = ((MR_Box) (Command0_9));
      MR_hl_field(MR_mktag(1), Var_26, 1) = ((MR_Box) (ModuleNameStrings_14));
    }
    Var_24 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&backend_libs__compile_target_code_scalar_common_5[6]), Var_26);
    *Command_12 = mercury__string__join_list_2_f_0((MR_String) " ", Var_24);
  }
}

static MR_Box MR_CALL 
backend_libs__compile_target_code__compile_erlang_file_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_LambdaHeadVar__2_53;

    conv0_LambdaHeadVar__2_53 = backend_libs__compile_target_code__IntroducedFrom__func__compile_erlang_file__1127__1_1_f_0(((MR_String) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_53));
    return wrapper_arg_2;
  }
}

void MR_CALL 
backend_libs__compile_target_code__compile_erlang_file_6_p_0(
  MR_Word Globals_7,
  MR_Word ErrorStream_8,
  MR_String ErlangFile_9,
  MR_Word * Succeeded_10)
{
  {
    MR_Word Verbose_12;
    MR_String ErlangCompiler_13;
    MR_Word ErlangFlagsList0_14;
    MR_Word ErlangNativeCode_15;
    MR_Word ErlangInhibitTrivialWarnings_16;
    MR_Word ErlangFlagsList1_17;
    MR_Word ErlangFlagsList_18;
    MR_String ERLANGFLAGS_19;
    MR_Word Erlang_Incl_Dirs_20;
    MR_String InclOpt_21;
    MR_Word UseSubdirs_23;
    MR_Word UseGradeSubdirs_24;
    MR_String TargetArch_25;
    MR_String DestDir_29;
    MR_String Command_30;
    MR_Word Var_49;
    MR_Word Var_50;
    MR_Word Var_75;
    MR_Word Var_76;
    MR_Word Var_78;
    MR_Word Var_79;
    MR_Word Var_80;
    MR_Word Var_81;
    MR_Word Var_83;

    libs__globals__lookup_bool_option_3_p_0(Globals_7, (MR_Integer) 63, &Verbose_12);
    libs__file_util__maybe_write_string_4_p_0(Verbose_12, (MR_String) "% Compiling \140");
    libs__file_util__maybe_write_string_4_p_0(Verbose_12, ErlangFile_9);
    libs__file_util__maybe_write_string_4_p_0(Verbose_12, (MR_String) "\':\n");
    libs__globals__lookup_string_option_3_p_0(Globals_7, (MR_Integer) 555, &ErlangCompiler_13);
    libs__globals__lookup_accumulating_option_3_p_0(Globals_7, (MR_Integer) 557, &ErlangFlagsList0_14);
    libs__globals__lookup_bool_option_3_p_0(Globals_7, (MR_Integer) 561, &ErlangNativeCode_15);
    libs__globals__lookup_bool_option_3_p_0(Globals_7, (MR_Integer) 562, &ErlangInhibitTrivialWarnings_16);
    switch (ErlangNativeCode_15) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        ErlangFlagsList1_17 = ErlangFlagsList0_14;
        break;
      case (MR_Integer) 1:
        {
          ErlangFlagsList1_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ErlangFlagsList1_17, 0) = ((MR_Box) ((MR_String) "+native"));
          MR_hl_field(MR_mktag(1), ErlangFlagsList1_17, 1) = ((MR_Box) (ErlangFlagsList0_14));
        }
        break;
    }
    switch (ErlangInhibitTrivialWarnings_16) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        ErlangFlagsList_18 = ErlangFlagsList1_17;
        break;
      case (MR_Integer) 1:
        {
          MR_Word Var_45;

          {
            Var_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_45, 0) = ((MR_Box) ((MR_String) "+nowarn_unused_function"));
            MR_hl_field(MR_mktag(1), Var_45, 1) = ((MR_Box) (ErlangFlagsList1_17));
          }
          {
            ErlangFlagsList_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ErlangFlagsList_18, 0) = ((MR_Box) ((MR_String) "+nowarn_unused_vars"));
            MR_hl_field(MR_mktag(1), ErlangFlagsList_18, 1) = ((MR_Box) (Var_45));
          }
        }
        break;
    }
    ERLANGFLAGS_19 = mercury__string__join_list_2_f_0((MR_String) " ", ErlangFlagsList_18);
    libs__globals__lookup_accumulating_option_3_p_0(Globals_7, (MR_Integer) 559, &Erlang_Incl_Dirs_20);
    Var_50 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&backend_libs__compile_target_code_scalar_common_1[0]), (MR_Word) (&backend_libs__compile_target_code_scalar_common_5[5]), Erlang_Incl_Dirs_20);
    Var_49 = mercury__list__condense_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_50);
    InclOpt_21 = mercury__string__append_list_1_f_0(Var_49);
    libs__globals__lookup_bool_option_3_p_0(Globals_7, (MR_Integer) 673, &UseSubdirs_23);
    libs__globals__lookup_bool_option_3_p_0(Globals_7, (MR_Integer) 674, &UseGradeSubdirs_24);
    libs__globals__lookup_string_option_3_p_0(Globals_7, (MR_Integer) 692, &TargetArch_25);
    switch (UseSubdirs_23) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        DestDir_29 = (MR_String) "";
        break;
      case (MR_Integer) 1:
        {
          MR_String DirName_27;
          MR_String Var_73;
          MR_Word Var_28;

          switch (UseGradeSubdirs_24) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              DirName_27 = mercury__dir__f_slash_2_f_0((MR_String) "Mercury", (MR_String) "beams");
              break;
            case (MR_Integer) 1:
              {
                MR_String Grade_26;
                MR_String Var_65;
                MR_String Var_66;
                MR_String Var_67;

                libs__compute_grade__grade_directory_component_2_p_0(Globals_7, &Grade_26);
                Var_67 = mercury__dir__f_slash_2_f_0((MR_String) "Mercury", Grade_26);
                Var_66 = mercury__dir__f_slash_2_f_0(Var_67, TargetArch_25);
                Var_65 = mercury__dir__f_slash_2_f_0(Var_66, (MR_String) "Mercury");
                DirName_27 = mercury__dir__f_slash_2_f_0(Var_65, (MR_String) "beams");
              }
              break;
          }
          mercury__dir__make_directory_4_p_0(DirName_27, &Var_28);
          Var_73 = mercury__string__f_43_43_2_f_0(DirName_27, (MR_String) " ");
          DestDir_29 = mercury__string__f_43_43_2_f_0((MR_String) "-o ", Var_73);
        }
        break;
    }
    {
      Var_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_83, 0) = ((MR_Box) (ErlangFile_9));
      MR_hl_field(MR_mktag(1), Var_83, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_81, 0) = ((MR_Box) ((MR_String) " "));
      MR_hl_field(MR_mktag(1), Var_81, 1) = ((MR_Box) (Var_83));
    }
    {
      Var_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_80, 0) = ((MR_Box) (ERLANGFLAGS_19));
      MR_hl_field(MR_mktag(1), Var_80, 1) = ((MR_Box) (Var_81));
    }
    {
      Var_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_79, 0) = ((MR_Box) (DestDir_29));
      MR_hl_field(MR_mktag(1), Var_79, 1) = ((MR_Box) (Var_80));
    }
    {
      Var_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_78, 0) = ((MR_Box) (InclOpt_21));
      MR_hl_field(MR_mktag(1), Var_78, 1) = ((MR_Box) (Var_79));
    }
    {
      Var_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_76, 0) = ((MR_Box) ((MR_String) " "));
      MR_hl_field(MR_mktag(1), Var_76, 1) = ((MR_Box) (Var_78));
    }
    {
      Var_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_75, 0) = ((MR_Box) (ErlangCompiler_13));
      MR_hl_field(MR_mktag(1), Var_75, 1) = ((MR_Box) (Var_76));
    }
    mercury__string__append_list_2_p_0(Var_75, &Command_30);
    parse_tree__module_cmds__invoke_system_command_7_p_0(Globals_7, ErrorStream_8, (MR_Integer) 1, Command_30, Succeeded_10);
  }
}

static void MR_CALL 
backend_libs__compile_target_code__compile_csharp_file_8_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_LambdaHeadVar__2_81;

    backend_libs__compile_target_code__IntroducedFrom__pred__compile_csharp_file__1048__1_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv2_LambdaHeadVar__2_81);
    *wrapper_arg_2 = ((MR_Box) (conv2_LambdaHeadVar__2_81));
  }
}

static MR_Box MR_CALL 
backend_libs__compile_target_code__compile_csharp_file_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv1_LambdaHeadVar__2_74;

    conv1_LambdaHeadVar__2_74 = backend_libs__compile_target_code__IntroducedFrom__func__compile_csharp_file__1040__1_2_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv1_LambdaHeadVar__2_74));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
backend_libs__compile_target_code__compile_csharp_file_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_LambdaHeadVar__2_66;

    conv0_LambdaHeadVar__2_66 = backend_libs__compile_target_code__IntroducedFrom__func__compile_csharp_file__1028__1_1_f_0(((MR_String) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_66));
    return wrapper_arg_2;
  }
}

void MR_CALL 
backend_libs__compile_target_code__compile_csharp_file_8_p_0(
  MR_Word Globals_9,
  MR_Word ErrorStream_10,
  MR_Word ModuleAndImports_11,
  MR_String CSharpFileName0_12,
  MR_String DLLFileName_13,
  MR_Word * Succeeded_14)
{
  {
    MR_bool succeeded;
    MR_Word Verbose_16;
    MR_String CSharpFileName_17;
    MR_String CSC_18;
    MR_Word CSCFlagsList_19;
    MR_String CSCFlags_20;
    MR_Word Debug_21;
    MR_String DebugOpt_22;
    MR_Word DLLDirs_23;
    MR_String DLLDirOpts_24;
    MR_Word ModuleName_26;
    MR_String Prefix_27;
    MR_Word ForeignImportModules_28;
    MR_Word ForeignDeps_29;
    MR_Word IntDeps_31;
    MR_Word ImpDeps_32;
    MR_Word IntImpDeps_33;
    MR_Word IntImpForeignDeps_34;
    MR_Word ReferencedDlls_35;
    MR_Word ReferencedDllsList_40;
    MR_String ReferencedDllsStr_41;
    MR_String Command_42;
    MR_String Var_61;
    MR_Word Var_62;
    MR_Word Var_63;
    MR_Word Var_72;
    MR_Word Var_75;
    MR_Word Var_76;
    MR_Word Var_77;
    MR_Word Var_78;
    MR_Word Var_90;
    MR_Word Var_91;
    MR_Word Var_92;
    MR_Word Var_93;
    MR_Word Var_95;
    MR_Word Var_96;
    MR_Word Var_97;
    MR_Word Var_98;
    MR_Word Var_100;
    MR_Word Var_101;
    MR_Word Var_103;
    MR_Box conv3_STATE_VARIABLE_IO_79_79;

    libs__globals__lookup_bool_option_3_p_0(Globals_9, (MR_Integer) 63, &Verbose_16);
    libs__file_util__maybe_write_string_4_p_0(Verbose_16, (MR_String) "% Compiling \140");
    libs__globals__lookup_string_option_3_p_0(Globals_9, (MR_Integer) 551, &CSC_18);
    libs__globals__lookup_accumulating_option_3_p_0(Globals_9, (MR_Integer) 552, &CSCFlagsList_19);
    backend_libs__compile_target_code__join_string_list_5_p_0(CSCFlagsList_19, (MR_String) "", (MR_String) "", (MR_String) " ", &CSCFlags_20);
    CSharpFileName_17 = mercury__string__replace_all_3_f_0(CSharpFileName0_12, (MR_String) "/", (MR_String) "\\\\");
    libs__file_util__maybe_write_string_4_p_0(Verbose_16, CSharpFileName_17);
    libs__file_util__maybe_write_string_4_p_0(Verbose_16, (MR_String) "\':\n");
    libs__globals__lookup_bool_option_3_p_0(Globals_9, (MR_Integer) 516, &Debug_21);
    switch (Debug_21) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        DebugOpt_22 = (MR_String) "";
        break;
      case (MR_Integer) 1:
        DebugOpt_22 = (MR_String) "";
        break;
    }
    libs__globals__lookup_accumulating_option_3_p_0(Globals_9, (MR_Integer) 568, &DLLDirs_23);
    Var_63 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&backend_libs__compile_target_code_scalar_common_1[0]), (MR_Word) (&backend_libs__compile_target_code_scalar_common_5[4]), DLLDirs_23);
    Var_62 = mercury__list__condense_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_63);
    Var_61 = mercury__string__append_list_1_f_0(Var_62);
    DLLDirOpts_24 = mercury__string__f_43_43_2_f_0((MR_String) "-lib:Mercury/dlls ", Var_61);
    parse_tree__module_imports__module_and_imports_get_module_name_2_p_0(ModuleAndImports_11, &ModuleName_26);
    succeeded = parse_tree__file_names__mercury_std_library_module_name_1_p_0(ModuleName_26);
    if (succeeded)
      Prefix_27 = (MR_String) "-addmodule:";
    else
      Prefix_27 = (MR_String) "-r:";
    parse_tree__module_imports__module_and_imports_get_foreign_import_modules_2_p_0(ModuleAndImports_11, &ForeignImportModules_28);
    {
      Var_72 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_72, 0) = ((MR_Box) (&backend_libs__compile_target_code_scalar_common_2[1]));
      MR_hl_field(MR_mktag(0), Var_72, 1) = ((MR_Box) (backend_libs__compile_target_code__compile_csharp_file_8_p_0_2));
      MR_hl_field(MR_mktag(0), Var_72, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_72, 3) = ((MR_Box) (ModuleName_26));
    }
    Var_76 = parse_tree__prog_data_foreign__get_all_fim_specs_1_f_0(ForeignImportModules_28);
    Var_75 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), Var_76);
    ForeignDeps_29 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_72, Var_75);
    parse_tree__module_imports__module_and_imports_get_int_deps_set_2_p_0(ModuleAndImports_11, &IntDeps_31);
    parse_tree__module_imports__module_and_imports_get_imp_deps_set_2_p_0(ModuleAndImports_11, &ImpDeps_32);
    mercury__set__union_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), IntDeps_31, ImpDeps_32, &IntImpDeps_33);
    mercury__set__insert_list_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ForeignDeps_29, IntImpDeps_33, &IntImpForeignDeps_34);
    ReferencedDlls_35 = backend_libs__compile_target_code__referenced_dlls_2_f_0(ModuleName_26, IntImpForeignDeps_34);
    {
      Var_77 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_77, 0) = ((MR_Box) (&backend_libs__compile_target_code_scalar_common_7[0]));
      MR_hl_field(MR_mktag(0), Var_77, 1) = ((MR_Box) (backend_libs__compile_target_code__compile_csharp_file_8_p_0_3));
      MR_hl_field(MR_mktag(0), Var_77, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_77, 3) = ((MR_Box) (Globals_9));
      MR_hl_field(MR_mktag(0), Var_77, 4) = ((MR_Box) (Prefix_27));
    }
    Var_78 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ReferencedDlls_35);
    mercury__list__map_foldl_5_p_2((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&backend_libs__compile_target_code_scalar_common_1[0]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_77, Var_78, &ReferencedDllsList_40, ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_IO_79_79);
    Var_90 = mercury__list__condense_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ReferencedDllsList_40);
    ReferencedDllsStr_41 = mercury__string__append_list_1_f_0(Var_90);
    {
      Var_103 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_103, 0) = ((MR_Box) (CSharpFileName_17));
      MR_hl_field(MR_mktag(1), Var_103, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_101 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_101, 0) = ((MR_Box) ((MR_String) " "));
      MR_hl_field(MR_mktag(1), Var_101, 1) = ((MR_Box) (Var_103));
    }
    {
      Var_100 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_100, 0) = ((MR_Box) (DLLFileName_13));
      MR_hl_field(MR_mktag(1), Var_100, 1) = ((MR_Box) (Var_101));
    }
    {
      Var_98 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_98, 0) = ((MR_Box) ((MR_String) " -out:"));
      MR_hl_field(MR_mktag(1), Var_98, 1) = ((MR_Box) (Var_100));
    }
    {
      Var_97 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_97, 0) = ((MR_Box) (ReferencedDllsStr_41));
      MR_hl_field(MR_mktag(1), Var_97, 1) = ((MR_Box) (Var_98));
    }
    {
      Var_96 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_96, 0) = ((MR_Box) (CSCFlags_20));
      MR_hl_field(MR_mktag(1), Var_96, 1) = ((MR_Box) (Var_97));
    }
    {
      Var_95 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_95, 0) = ((MR_Box) (DLLDirOpts_24));
      MR_hl_field(MR_mktag(1), Var_95, 1) = ((MR_Box) (Var_96));
    }
    {
      Var_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_93, 0) = ((MR_Box) ((MR_String) " -t:library "));
      MR_hl_field(MR_mktag(1), Var_93, 1) = ((MR_Box) (Var_95));
    }
    {
      Var_92 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_92, 0) = ((MR_Box) (DebugOpt_22));
      MR_hl_field(MR_mktag(1), Var_92, 1) = ((MR_Box) (Var_93));
    }
    {
      Var_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_91, 0) = ((MR_Box) (CSC_18));
      MR_hl_field(MR_mktag(1), Var_91, 1) = ((MR_Box) (Var_92));
    }
    mercury__string__append_list_2_p_0(Var_91, &Command_42);
    parse_tree__module_cmds__invoke_system_command_7_p_0(Globals_9, ErrorStream_10, (MR_Integer) 1, Command_42, Succeeded_14);
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

    conv0_LambdaHeadVar__2_18 = backend_libs__compile_target_code__IntroducedFrom__func__referenced_dlls__1084__1_1_f_0(((MR_Word) (wrapper_arg_1)));
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
      mercury__set__insert_list_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (MR_mkword(MR_mktag(1), &backend_libs__compile_target_code_scalar_common_1[2])), DepModules_7, &Modules_6);
    else
      Modules_6 = mercury__set__map_2_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&backend_libs__compile_target_code_scalar_common_5[3]), DepModules_7);
    return Modules_6;
  }
}

static MR_bool MR_CALL 
backend_libs__compile_target_code__compile_java_files_6_p_0_1(
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
backend_libs__compile_target_code__compile_java_files_6_p_0(
  MR_Word Globals_7,
  MR_Word ErrorStream_8,
  MR_Word JavaFiles_9,
  MR_Word * Succeeded_10)
{
  {
    MR_bool succeeded;
    MR_Word Verbose_12;
    MR_String JavaCompiler_17;
    MR_Word JavaFlagsList_18;
    MR_Word RestrictedCommandLine_19;
    MR_String JAVAFLAGS_23;
    MR_Word MercuryStdLibs_24;
    MR_Word UserClasspath_25;
    MR_Word Java_Incl_Dirs_26;
    MR_String EnvClasspath_27;
    MR_Word ClassPathList_28;
    MR_String ClassPath_29;
    MR_String InclOpt_30;
    MR_Word Target_Debug_31;
    MR_String Target_DebugOpt_32;
    MR_Word UseSubdirs_33;
    MR_Word UseGradeSubdirs_34;
    MR_String TargetArch_35;
    MR_String DirOpts_40;
    MR_String MFilterJavac_41;
    MR_Word MaybeMFilterJavac_42;
    MR_String NonAtFileCommandArgs_43;
    MR_String JoinedJavaFiles_44;
    MR_String CommandArgs_45;
    MR_String Var_73;
    MR_Word Var_115;
    MR_Word Var_116;
    MR_Word Var_117;
    MR_Word Var_118;
    MR_Word Var_119;
    MR_Word Var_121;

    libs__globals__lookup_bool_option_3_p_0(Globals_7, (MR_Integer) 63, &Verbose_12);
    if ((JavaFiles_9 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140backend_libs.compile_target_code.compile_java_files\'/6", (MR_String) "empty list");
        return;
      }
    else
    {
      MR_String JavaFile_13 = ((MR_String) ((MR_hl_field(MR_mktag(1), JavaFiles_9, (MR_Integer) 0))));
      MR_Word MoreFiles_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), JavaFiles_9, (MR_Integer) 1))));

      switch (Verbose_12) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
          }
          break;
        case (MR_Integer) 1:
          {
            mercury__io__write_string_3_p_0((MR_String) "% Compiling \140");
            mercury__io__write_string_3_p_0(JavaFile_13);
            if ((MoreFiles_14 == (MR_Word) ((MR_Unsigned) 0U)))
              mercury__io__write_string_3_p_0((MR_String) "\':\n");
            else
              mercury__io__write_string_3_p_0((MR_String) "\', etc.:\n");
          }
          break;
      }
    }
    libs__globals__lookup_string_option_3_p_0(Globals_7, (MR_Integer) 545, &JavaCompiler_17);
    libs__globals__lookup_accumulating_option_3_p_0(Globals_7, (MR_Integer) 547, &JavaFlagsList_18);
    libs__globals__lookup_bool_option_3_p_0(Globals_7, (MR_Integer) 682, &RestrictedCommandLine_19);
    switch (RestrictedCommandLine_19) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          backend_libs__compile_target_code__join_string_list_5_p_0(JavaFlagsList_18, (MR_String) "", (MR_String) "", (MR_String) " ", &JAVAFLAGS_23);
          NonAtFileCommandArgs_43 = (MR_String) "";
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word JRT_JavaFlagsList_20;
          MR_Word NonJRT_JavaFlagsList_21;

          mercury__list__filter_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&backend_libs__compile_target_code_scalar_common_5[2]), JavaFlagsList_18, &JRT_JavaFlagsList_20, &NonJRT_JavaFlagsList_21);
          backend_libs__compile_target_code__join_string_list_5_p_0(JRT_JavaFlagsList_20, (MR_String) "", (MR_String) "", (MR_String) " ", &NonAtFileCommandArgs_43);
          backend_libs__compile_target_code__join_string_list_5_p_0(NonJRT_JavaFlagsList_21, (MR_String) "", (MR_String) "", (MR_String) " ", &JAVAFLAGS_23);
        }
        break;
    }
    parse_tree__module_cmds__get_mercury_std_libs_for_java_2_p_0(Globals_7, &MercuryStdLibs_24);
    libs__globals__lookup_accumulating_option_3_p_0(Globals_7, (MR_Integer) 549, &UserClasspath_25);
    Java_Incl_Dirs_26 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), MercuryStdLibs_24, UserClasspath_25);
    parse_tree__module_cmds__get_env_classpath_3_p_0(&EnvClasspath_27);
    succeeded = (strcmp(EnvClasspath_27, (MR_String) "") == 0);
    if (succeeded)
      ClassPathList_28 = Java_Incl_Dirs_26;
    else
      {
        ClassPathList_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), ClassPathList_28, 0) = ((MR_Box) (EnvClasspath_27));
        MR_hl_field(MR_mktag(1), ClassPathList_28, 1) = ((MR_Box) (Java_Incl_Dirs_26));
      }
    Var_73 = backend_libs__compile_target_code__java_classpath_separator_0_f_0();
    ClassPath_29 = mercury__string__join_list_2_f_0(Var_73, ClassPathList_28);
    succeeded = (strcmp(ClassPath_29, (MR_String) "") == 0);
    if (succeeded)
      InclOpt_30 = (MR_String) "";
    else
    {
      MR_Word Var_74;
      MR_Word Var_76;
      MR_String Var_77;

      Var_77 = libs__options__quote_arg_1_f_0(ClassPath_29);
      {
        Var_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_76, 0) = ((MR_Box) (Var_77));
        MR_hl_field(MR_mktag(1), Var_76, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &backend_libs__compile_target_code_scalar_common_1[8])));
      }
      {
        Var_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_74, 0) = ((MR_Box) ((MR_String) "-classpath "));
        MR_hl_field(MR_mktag(1), Var_74, 1) = ((MR_Box) (Var_76));
      }
      InclOpt_30 = mercury__string__append_list_1_f_0(Var_74);
    }
    libs__globals__lookup_bool_option_3_p_0(Globals_7, (MR_Integer) 516, &Target_Debug_31);
    switch (Target_Debug_31) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        Target_DebugOpt_32 = (MR_String) "";
        break;
      case (MR_Integer) 1:
        Target_DebugOpt_32 = (MR_String) "-g ";
        break;
    }
    libs__globals__lookup_bool_option_3_p_0(Globals_7, (MR_Integer) 673, &UseSubdirs_33);
    libs__globals__lookup_bool_option_3_p_0(Globals_7, (MR_Integer) 674, &UseGradeSubdirs_34);
    libs__globals__lookup_string_option_3_p_0(Globals_7, (MR_Integer) 692, &TargetArch_35);
    switch (UseSubdirs_33) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        DirOpts_40 = (MR_String) "";
        break;
      case (MR_Integer) 1:
        {
          MR_String SourceDirName_37;
          MR_String DestDirName_38;
          MR_Word Var_102;
          MR_Word Var_104;
          MR_Word Var_105;
          MR_Word Var_107;
          MR_Word Var_109;
          MR_Word Var_39;

          switch (UseGradeSubdirs_34) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                SourceDirName_37 = mercury__dir__f_slash_2_f_0((MR_String) "Mercury", (MR_String) "javas");
                DestDirName_38 = mercury__dir__f_slash_2_f_0((MR_String) "Mercury", (MR_String) "classs");
              }
              break;
            case (MR_Integer) 1:
              {
                MR_String Grade_36;
                MR_String Var_89;
                MR_String Var_90;
                MR_String Var_91;
                MR_String Var_95;
                MR_String Var_96;
                MR_String Var_97;

                libs__compute_grade__grade_directory_component_2_p_0(Globals_7, &Grade_36);
                Var_91 = mercury__dir__f_slash_2_f_0((MR_String) "Mercury", Grade_36);
                Var_90 = mercury__dir__f_slash_2_f_0(Var_91, TargetArch_35);
                Var_89 = mercury__dir__f_slash_2_f_0(Var_90, (MR_String) "Mercury");
                SourceDirName_37 = mercury__dir__f_slash_2_f_0(Var_89, (MR_String) "javas");
                Var_97 = mercury__dir__f_slash_2_f_0((MR_String) "Mercury", Grade_36);
                Var_96 = mercury__dir__f_slash_2_f_0(Var_97, TargetArch_35);
                Var_95 = mercury__dir__f_slash_2_f_0(Var_96, (MR_String) "Mercury");
                DestDirName_38 = mercury__dir__f_slash_2_f_0(Var_95, (MR_String) "classs");
              }
              break;
          }
          mercury__dir__make_directory_4_p_0(DestDirName_38, &Var_39);
          {
            Var_109 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_109, 0) = ((MR_Box) (DestDirName_38));
            MR_hl_field(MR_mktag(1), Var_109, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &backend_libs__compile_target_code_scalar_common_1[8])));
          }
          {
            Var_107 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_107, 0) = ((MR_Box) ((MR_String) "-d "));
            MR_hl_field(MR_mktag(1), Var_107, 1) = ((MR_Box) (Var_109));
          }
          {
            Var_105 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_105, 0) = ((MR_Box) ((MR_String) " "));
            MR_hl_field(MR_mktag(1), Var_105, 1) = ((MR_Box) (Var_107));
          }
          {
            Var_104 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_104, 0) = ((MR_Box) (SourceDirName_37));
            MR_hl_field(MR_mktag(1), Var_104, 1) = ((MR_Box) (Var_105));
          }
          {
            Var_102 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_102, 0) = ((MR_Box) ((MR_String) "-sourcepath "));
            MR_hl_field(MR_mktag(1), Var_102, 1) = ((MR_Box) (Var_104));
          }
          DirOpts_40 = mercury__string__append_list_1_f_0(Var_102);
        }
        break;
    }
    libs__globals__lookup_string_option_3_p_0(Globals_7, (MR_Integer) 613, &MFilterJavac_41);
    succeeded = (strcmp(MFilterJavac_41, (MR_String) "") == 0);
    if (succeeded)
      MaybeMFilterJavac_42 = (MR_Word) ((MR_Unsigned) 0U);
    else
      {
        MaybeMFilterJavac_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), MaybeMFilterJavac_42, 0) = ((MR_Box) (MFilterJavac_41));
      }
    JoinedJavaFiles_44 = mercury__string__join_list_2_f_0((MR_String) " ", JavaFiles_9);
    {
      Var_121 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_121, 0) = ((MR_Box) (JoinedJavaFiles_44));
      MR_hl_field(MR_mktag(1), Var_121, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_119 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_119, 0) = ((MR_Box) ((MR_String) " "));
      MR_hl_field(MR_mktag(1), Var_119, 1) = ((MR_Box) (Var_121));
    }
    {
      Var_118 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_118, 0) = ((MR_Box) (JAVAFLAGS_23));
      MR_hl_field(MR_mktag(1), Var_118, 1) = ((MR_Box) (Var_119));
    }
    {
      Var_117 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_117, 0) = ((MR_Box) (Target_DebugOpt_32));
      MR_hl_field(MR_mktag(1), Var_117, 1) = ((MR_Box) (Var_118));
    }
    {
      Var_116 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_116, 0) = ((MR_Box) (DirOpts_40));
      MR_hl_field(MR_mktag(1), Var_116, 1) = ((MR_Box) (Var_117));
    }
    {
      Var_115 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_115, 0) = ((MR_Box) (InclOpt_30));
      MR_hl_field(MR_mktag(1), Var_115, 1) = ((MR_Box) (Var_116));
    }
    mercury__string__append_list_2_p_0(Var_115, &CommandArgs_45);
    backend_libs__compile_target_code__invoke_long_system_command_maybe_filter_output_10_p_0(Globals_7, ErrorStream_8, (MR_Integer) 1, JavaCompiler_17, NonAtFileCommandArgs_43, CommandArgs_45, MaybeMFilterJavac_42, Succeeded_10);
  }
}

static void MR_CALL 
backend_libs__compile_target_code__invoke_long_system_command_maybe_filter_output_10_p_0(
  MR_Word Globals_11,
  MR_Word ErrorStream_12,
  MR_Word Verbosity_13,
  MR_String Cmd_14,
  MR_String NonAtArgs_15,
  MR_String Args_16,
  MR_Word MaybeProcessOutput_17,
  MR_Word * Succeeded_18)
{
  {
    MR_bool succeeded;
    MR_Word RestrictedCommandLine_20;

    libs__globals__lookup_bool_option_3_p_0(Globals_11, (MR_Integer) 682, &RestrictedCommandLine_20);
    switch (RestrictedCommandLine_20) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_String FullCmd_76;

          succeeded = (strcmp(NonAtArgs_15, (MR_String) "") == 0);
          if (succeeded)
          {
            MR_String Var_35;

            Var_35 = mercury__string__f_43_43_2_f_0((MR_String) " ", Args_16);
            FullCmd_76 = mercury__string__f_43_43_2_f_0(Cmd_14, Var_35);
          }
          else
          {
            MR_Word Var_37;
            MR_Word Var_38;
            MR_Word Var_40;
            MR_Word Var_41;
            MR_Word Var_43;

            {
              Var_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_43, 0) = ((MR_Box) (Args_16));
              MR_hl_field(MR_mktag(1), Var_43, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Var_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_41, 0) = ((MR_Box) ((MR_String) " "));
              MR_hl_field(MR_mktag(1), Var_41, 1) = ((MR_Box) (Var_43));
            }
            {
              Var_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_40, 0) = ((MR_Box) (NonAtArgs_15));
              MR_hl_field(MR_mktag(1), Var_40, 1) = ((MR_Box) (Var_41));
            }
            {
              Var_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_38, 0) = ((MR_Box) ((MR_String) " "));
              MR_hl_field(MR_mktag(1), Var_38, 1) = ((MR_Box) (Var_40));
            }
            {
              Var_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_37, 0) = ((MR_Box) (Cmd_14));
              MR_hl_field(MR_mktag(1), Var_37, 1) = ((MR_Box) (Var_38));
            }
            mercury__string__append_list_2_p_0(Var_37, &FullCmd_76);
          }
          parse_tree__module_cmds__invoke_system_command_maybe_filter_output_8_p_0(Globals_11, ErrorStream_12, Verbosity_13, FullCmd_76, MaybeProcessOutput_17, Succeeded_18);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word TmpFileResult_21;

          libs__file_util__open_temp_output_3_p_0(&TmpFileResult_21);
          if (((MR_tag((MR_Word) TmpFileResult_21)) == (MR_Integer) 1))
          {
            MR_String ErrorMessage_31 = ((MR_String) ((MR_hl_field(MR_mktag(1), TmpFileResult_21, (MR_Integer) 0))));
            MR_Word Var_47;

            Var_47 = mercury__io__stderr_stream_0_f_0();
            mercury__io__write_string_4_p_0(Var_47, ErrorMessage_31);
            mercury__io__nl_2_p_0();
            *Succeeded_18 = (MR_Integer) 0;
          }
          else
          {
            MR_String TmpFile_22;
            MR_Word TmpStream_23;
            MR_String TmpFileArgs_24;
            MR_Word VeryVerbose_25;
            MR_String AtFileName_26;
            MR_String FullCmd_27;
            MR_Word Succeeded0_28;
            MR_Word RemoveResult_29;
            MR_Tuple Var_50 = ((MR_Tuple) ((MR_hl_field(MR_mktag(0), TmpFileResult_21, (MR_Integer) 0))));
            MR_Word EnvType_87;

            TmpFile_22 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_50, (MR_Integer) 0))));
            TmpStream_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_50, (MR_Integer) 1))));
            TmpFileArgs_24 = mercury__string__replace_all_3_f_0(Args_16, (MR_String) "\\", (MR_String) "\\\\");
            mercury__io__write_string_4_p_0(TmpStream_23, TmpFileArgs_24);
            mercury__io__close_output_3_p_0(TmpStream_23);
            libs__globals__lookup_bool_option_3_p_0(Globals_11, (MR_Integer) 64, &VeryVerbose_25);
            libs__globals__get_system_env_type_2_p_0(Globals_11, &EnvType_87);
            switch (EnvType_87) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
              case (MR_Integer) 2:
              case (MR_Integer) 0:
              case (MR_Integer) 3:
                AtFileName_26 = mercury__string__f_43_43_2_f_0((MR_String) "\100", TmpFile_22);
                break;
              case (MR_Integer) 4:
                AtFileName_26 = mercury__string__f_43_43_2_f_0((MR_String) "\140\100", TmpFile_22);
                break;
            }
            switch (VeryVerbose_25) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                }
                break;
              case (MR_Integer) 1:
                {
                  mercury__io__write_string_3_p_0((MR_String) "% Args placed in ");
                  mercury__io__write_string_3_p_0(AtFileName_26);
                  mercury__io__write_string_3_p_0((MR_String) ": \140");
                  mercury__io__write_string_3_p_0(TmpFileArgs_24);
                  mercury__io__write_string_3_p_0((MR_String) "\'\n");
                  mercury__io__flush_output_2_p_0();
                }
                break;
            }
            succeeded = (strcmp(NonAtArgs_15, (MR_String) "") == 0);
            if (succeeded)
            {
              MR_String Var_64;

              Var_64 = mercury__string__f_43_43_2_f_0((MR_String) " ", AtFileName_26);
              FullCmd_27 = mercury__string__f_43_43_2_f_0(Cmd_14, Var_64);
            }
            else
            {
              MR_Word Var_66;
              MR_Word Var_67;
              MR_Word Var_69;
              MR_Word Var_70;
              MR_Word Var_72;

              {
                Var_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_72, 0) = ((MR_Box) (AtFileName_26));
                MR_hl_field(MR_mktag(1), Var_72, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                Var_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_70, 0) = ((MR_Box) ((MR_String) " "));
                MR_hl_field(MR_mktag(1), Var_70, 1) = ((MR_Box) (Var_72));
              }
              {
                Var_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_69, 0) = ((MR_Box) (NonAtArgs_15));
                MR_hl_field(MR_mktag(1), Var_69, 1) = ((MR_Box) (Var_70));
              }
              {
                Var_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_67, 0) = ((MR_Box) ((MR_String) " "));
                MR_hl_field(MR_mktag(1), Var_67, 1) = ((MR_Box) (Var_69));
              }
              {
                Var_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_66, 0) = ((MR_Box) (Cmd_14));
                MR_hl_field(MR_mktag(1), Var_66, 1) = ((MR_Box) (Var_67));
              }
              mercury__string__append_list_2_p_0(Var_66, &FullCmd_27);
            }
            parse_tree__module_cmds__invoke_system_command_maybe_filter_output_8_p_0(Globals_11, ErrorStream_12, Verbosity_13, FullCmd_27, MaybeProcessOutput_17, &Succeeded0_28);
            mercury__io__remove_file_4_p_0(TmpFile_22, &RemoveResult_29);
            if ((RemoveResult_29 == (MR_Word) ((MR_Unsigned) 0U)))
              *Succeeded_18 = Succeeded0_28;
            else
              *Succeeded_18 = (MR_Integer) 0;
          }
        }
        break;
    }
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
backend_libs__compile_target_code__compile_c_file_7_p_0(
  MR_Word Globals_8,
  MR_Word ErrorStream_9,
  MR_Word PIC_10,
  MR_Word ModuleName_11,
  MR_Word * Succeeded_12)
{
  {
    MR_String C_File_14;
    MR_String ObjExt_15;
    MR_String O_File_16;

    parse_tree__file_names__module_name_to_file_name_7_p_0(Globals_8, (MR_Integer) 0, (MR_String) ".c", ModuleName_11, &C_File_14);
    switch (PIC_10) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        libs__globals__lookup_string_option_3_p_0(Globals_8, (MR_Integer) 541, &ObjExt_15);
        break;
      case (MR_Integer) 0:
        libs__globals__lookup_string_option_3_p_0(Globals_8, (MR_Integer) 542, &ObjExt_15);
        break;
    }
    parse_tree__file_names__module_name_to_file_name_7_p_0(Globals_8, (MR_Integer) 0, ObjExt_15, ModuleName_11, &O_File_16);
    backend_libs__compile_target_code__do_compile_c_file_8_p_0(Globals_8, ErrorStream_9, PIC_10, C_File_14, O_File_16, Succeeded_12);
  }
}

void MR_CALL 
backend_libs__compile_target_code__do_compile_c_file_8_p_0(
  MR_Word Globals_9,
  MR_Word ErrorStream_10,
  MR_Word PIC_11,
  MR_String C_File_12,
  MR_String O_File_13,
  MR_Word * Succeeded_14)
{
  {
    MR_bool succeeded;
    MR_Word Verbose_16;
    MR_String NameObjectFile_17;
    MR_String CC_18;
    MR_String AllCFlags_19;
    MR_String Command_20;
    MR_Word MaybeFilterCmd_21;
    MR_Word Var_32;
    MR_Word Var_33;
    MR_Word Var_35;
    MR_Word Var_36;
    MR_Word Var_38;
    MR_String Var_39;
    MR_Word Var_40;
    MR_Word Var_42;
    MR_Word Var_43;
    MR_String Var_44;
    MR_String FilterCmd_50;
    MR_Word Var_53;

    libs__globals__lookup_bool_option_3_p_0(Globals_9, (MR_Integer) 63, &Verbose_16);
    libs__globals__lookup_string_option_3_p_0(Globals_9, (MR_Integer) 540, &NameObjectFile_17);
    libs__file_util__maybe_write_string_4_p_0(Verbose_16, (MR_String) "% Compiling \140");
    libs__file_util__maybe_write_string_4_p_0(Verbose_16, C_File_12);
    libs__file_util__maybe_write_string_4_p_0(Verbose_16, (MR_String) "\':\n");
    libs__globals__lookup_string_option_3_p_0(Globals_9, (MR_Integer) 517, &CC_18);
    backend_libs__compile_target_code__gather_c_compiler_flags_3_p_0(Globals_9, PIC_11, &AllCFlags_19);
    Var_39 = libs__options__quote_arg_1_f_0(C_File_12);
    Var_44 = libs__options__quote_arg_1_f_0(O_File_13);
    {
      Var_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_43, 0) = ((MR_Box) (Var_44));
      MR_hl_field(MR_mktag(1), Var_43, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_42, 0) = ((MR_Box) (NameObjectFile_17));
      MR_hl_field(MR_mktag(1), Var_42, 1) = ((MR_Box) (Var_43));
    }
    {
      Var_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_40, 0) = ((MR_Box) ((MR_String) " "));
      MR_hl_field(MR_mktag(1), Var_40, 1) = ((MR_Box) (Var_42));
    }
    {
      Var_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_38, 0) = ((MR_Box) (Var_39));
      MR_hl_field(MR_mktag(1), Var_38, 1) = ((MR_Box) (Var_40));
    }
    {
      Var_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_36, 0) = ((MR_Box) ((MR_String) " -c "));
      MR_hl_field(MR_mktag(1), Var_36, 1) = ((MR_Box) (Var_38));
    }
    {
      Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_35, 0) = ((MR_Box) (AllCFlags_19));
      MR_hl_field(MR_mktag(1), Var_35, 1) = ((MR_Box) (Var_36));
    }
    {
      Var_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_33, 0) = ((MR_Box) ((MR_String) " "));
      MR_hl_field(MR_mktag(1), Var_33, 1) = ((MR_Box) (Var_35));
    }
    {
      Var_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_32, 0) = ((MR_Box) (CC_18));
      MR_hl_field(MR_mktag(1), Var_32, 1) = ((MR_Box) (Var_33));
    }
    mercury__string__append_list_2_p_0(Var_32, &Command_20);
    succeeded = libs__globals__lookup_bool_option_3_p_1(Globals_9, (MR_Integer) 282, (MR_Integer) 1);
    if (succeeded)
    {
      Var_53 = (MR_Integer) 612;
      libs__globals__lookup_string_option_3_p_0(Globals_9, Var_53, &FilterCmd_50);
      succeeded = (strcmp(FilterCmd_50, (MR_String) "") == 0);
      succeeded = !(succeeded);
    }
    if (succeeded)
      {
        MaybeFilterCmd_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), MaybeFilterCmd_21, 0) = ((MR_Box) (FilterCmd_50));
      }
    else
      MaybeFilterCmd_21 = (MR_Word) ((MR_Unsigned) 0U);
    parse_tree__module_cmds__invoke_system_command_maybe_filter_output_8_p_0(Globals_9, ErrorStream_10, (MR_Integer) 1, Command_20, MaybeFilterCmd_21, Succeeded_14);
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
    MR_Word UseTrail_27;
    MR_String C_FnAlignOpt_33;
    MR_Word TypeLayoutOption_36;
    MR_String TypeLayoutOpt_37;
    MR_Word C_optimize_38;
    MR_String OptimizeOpt_39;
    MR_Word Ansi_40;
    MR_String AnsiOpt_41;
    MR_Word InlineAlloc_42;
    MR_String InlineAllocOpt_43;
    MR_Word Warn_44;
    MR_String WarningOpt_45;
    MR_String TargetArch_46;
    MR_String AppleGCCRegWorkaroundOpt_47;
    MR_String OverrideOpts_48;
    MR_Word Var_88;
    MR_Word Var_89;
    MR_Word Var_90;
    MR_Word Var_92;
    MR_Word Var_93;
    MR_Word Var_95;
    MR_Word Var_96;
    MR_Word Var_98;
    MR_Word Var_99;
    MR_Word Var_100;
    MR_Word Var_102;
    MR_Word Var_103;
    MR_Word Var_105;
    MR_Word Var_106;
    MR_Word Var_108;
    MR_Word Var_109;
    MR_Word Var_111;
    MR_Word Var_112;
    MR_Word Var_114;
    MR_Word Var_115;
    MR_Word Var_116;
    MR_Word Var_118;
    MR_Word Var_119;
    MR_Word Var_120;
    MR_Word Var_121;
    MR_Word Var_123;
    MR_Word Var_124;
    MR_Word Var_125;
    MR_Word Var_126;
    MR_Word Var_128;
    MR_Word Var_129;
    MR_Word Var_131;
    MR_Word Var_132;
    MR_Word Var_134;
    MR_Word Var_83;
    MR_Word Var_84;
    MR_String Var_85;

    libs__globals__lookup_accumulating_option_3_p_0(Globals_4, (MR_Integer) 518, &C_Flags_List_7);
    backend_libs__compile_target_code__join_string_list_5_p_0(C_Flags_List_7, (MR_String) "", (MR_String) "", (MR_String) " ", &CFLAGS_8);
    backend_libs__compile_target_code__gather_compiler_specific_flags_2_p_0(Globals_4, &CC_Specific_CFLAGS_9);
    libs__globals__lookup_bool_option_3_p_0(Globals_4, (MR_Integer) 673, &UseSubdirs_10);
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
    backend_libs__compile_target_code__gather_grade_defines_2_p_0(Globals_4, &GradeDefinesOpts_14);
    libs__globals__lookup_bool_option_3_p_0(Globals_4, (MR_Integer) 281, &GCC_Regs_15);
    switch (GCC_Regs_15) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        CFLAGS_FOR_REGS_16 = (MR_String) "";
        break;
      case (MR_Integer) 1:
        libs__globals__lookup_string_option_3_p_0(Globals_4, (MR_Integer) 533, &CFLAGS_FOR_REGS_16);
        break;
    }
    libs__globals__lookup_bool_option_3_p_0(Globals_4, (MR_Integer) 280, &GCC_Gotos_17);
    switch (GCC_Gotos_17) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        CFLAGS_FOR_GOTOS_18 = (MR_String) "";
        break;
      case (MR_Integer) 1:
        libs__globals__lookup_string_option_3_p_0(Globals_4, (MR_Integer) 534, &CFLAGS_FOR_GOTOS_18);
        break;
    }
    libs__globals__lookup_bool_option_3_p_0(Globals_4, (MR_Integer) 240, &Parallel_19);
    switch (Parallel_19) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        CFLAGS_FOR_THREADS_20 = (MR_String) "";
        break;
      case (MR_Integer) 1:
        libs__globals__lookup_string_option_3_p_0(Globals_4, (MR_Integer) 535, &CFLAGS_FOR_THREADS_20);
        break;
    }
    switch (PIC_5) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        CFLAGS_FOR_PIC_21 = (MR_String) "";
        break;
      case (MR_Integer) 0:
        libs__globals__lookup_string_option_3_p_0(Globals_4, (MR_Integer) 538, &CFLAGS_FOR_PIC_21);
        break;
    }
    libs__globals__lookup_string_option_3_p_0(Globals_4, (MR_Integer) 539, &CFLAGS_FOR_LTO_22);
    libs__globals__lookup_bool_option_3_p_0(Globals_4, (MR_Integer) 516, &Target_Debug_23);
    switch (Target_Debug_23) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        Target_DebugOpt_25 = (MR_String) "";
        break;
      case (MR_Integer) 1:
        {
          MR_String Target_DebugOpt0_24;

          libs__globals__lookup_string_option_3_p_0(Globals_4, (MR_Integer) 536, &Target_DebugOpt0_24);
          Target_DebugOpt_25 = mercury__string__f_43_43_2_f_0(Target_DebugOpt0_24, (MR_String) " ");
        }
        break;
    }
    libs__globals__lookup_string_option_3_p_0(Globals_4, (MR_Integer) 537, &SanitizerOpts_26);
    libs__globals__lookup_bool_option_3_p_0(Globals_4, (MR_Integer) 242, &UseTrail_27);
    switch (UseTrail_27) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        C_FnAlignOpt_33 = (MR_String) "";
        break;
      case (MR_Integer) 1:
        {
          MR_Word C_CompilerType_28;

          libs__globals__get_c_compiler_type_2_p_0(Globals_4, &C_CompilerType_28);
          switch (MR_tag((MR_Word) C_CompilerType_28)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              C_FnAlignOpt_33 = (MR_String) "";
              break;
            case (MR_Integer) 1:
              {
                MR_Integer BytesPerWord_32;
                MR_String Var_137;
                MR_String Var_144;

                libs__globals__lookup_int_option_3_p_0(Globals_4, (MR_Integer) 263, &BytesPerWord_32);
                mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&backend_libs__compile_target_code_scalar_common_3[2]), BytesPerWord_32, &Var_137);
                Var_144 = mercury__string__f_43_43_2_f_0(Var_137, (MR_String) " ");
                C_FnAlignOpt_33 = mercury__string__f_43_43_2_f_0((MR_String) "-falign-functions=", Var_144);
              }
              break;
            case (MR_Integer) 2:
            case (MR_Integer) 3:
              C_FnAlignOpt_33 = (MR_String) "";
              break;
          }
        }
        break;
    }
    libs__globals__lookup_bool_option_3_p_0(Globals_4, (MR_Integer) 249, &TypeLayoutOption_36);
    switch (TypeLayoutOption_36) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        TypeLayoutOpt_37 = (MR_String) "-DMR_NO_TYPE_LAYOUT ";
        break;
      case (MR_Integer) 1:
        TypeLayoutOpt_37 = (MR_String) "";
        break;
    }
    libs__globals__lookup_bool_option_3_p_0(Globals_4, (MR_Integer) 521, &C_optimize_38);
    switch (C_optimize_38) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        OptimizeOpt_39 = (MR_String) "";
        break;
      case (MR_Integer) 1:
        libs__globals__lookup_string_option_3_p_0(Globals_4, (MR_Integer) 531, &OptimizeOpt_39);
        break;
    }
    libs__globals__lookup_bool_option_3_p_0(Globals_4, (MR_Integer) 522, &Ansi_40);
    switch (Ansi_40) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        AnsiOpt_41 = (MR_String) "";
        break;
      case (MR_Integer) 1:
        libs__globals__lookup_string_option_3_p_0(Globals_4, (MR_Integer) 532, &AnsiOpt_41);
        break;
    }
    libs__globals__lookup_bool_option_3_p_0(Globals_4, (MR_Integer) 523, &InlineAlloc_42);
    switch (InlineAlloc_42) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        InlineAllocOpt_43 = (MR_String) "";
        break;
      case (MR_Integer) 1:
        InlineAllocOpt_43 = (MR_String) "";
        break;
    }
    libs__globals__lookup_bool_option_3_p_0(Globals_4, (MR_Integer) 37, &Warn_44);
    switch (Warn_44) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        WarningOpt_45 = (MR_String) "";
        break;
      case (MR_Integer) 1:
        libs__globals__lookup_string_option_3_p_0(Globals_4, (MR_Integer) 530, &WarningOpt_45);
        break;
    }
    libs__globals__lookup_string_option_3_p_0(Globals_4, (MR_Integer) 692, &TargetArch_46);
    succeeded = libs__globals__lookup_bool_option_3_p_1(Globals_4, (MR_Integer) 284, (MR_Integer) 0);
    if (succeeded)
    {
      Var_83 = (MR_Integer) 281;
      Var_84 = (MR_Integer) 1;
      succeeded = libs__globals__lookup_bool_option_3_p_1(Globals_4, Var_83, Var_84);
      if (succeeded)
      {
        Var_85 = (MR_String) "powerpc-apple-darwin";
        succeeded = mercury__string__prefix_2_p_0(TargetArch_46, Var_85);
      }
    }
    if (succeeded)
      AppleGCCRegWorkaroundOpt_47 = (MR_String) "-fno-loop-optimize ";
    else
      AppleGCCRegWorkaroundOpt_47 = (MR_String) "";
    succeeded = libs__globals__lookup_bool_option_3_p_1(Globals_4, (MR_Integer) 210, (MR_Integer) 1);
    if (succeeded)
      succeeded = backend_libs__compile_target_code__arch_is_apple_darwin_1_p_0(TargetArch_46);
    if (succeeded)
      OverrideOpts_48 = (MR_String) "-O0";
    else
      OverrideOpts_48 = (MR_String) "";
    {
      Var_134 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_134, 0) = ((MR_Box) (OverrideOpts_48));
      MR_hl_field(MR_mktag(1), Var_134, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_132 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_132, 0) = ((MR_Box) ((MR_String) " "));
      MR_hl_field(MR_mktag(1), Var_132, 1) = ((MR_Box) (Var_134));
    }
    {
      Var_131 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_131, 0) = ((MR_Box) (CC_Specific_CFLAGS_9));
      MR_hl_field(MR_mktag(1), Var_131, 1) = ((MR_Box) (Var_132));
    }
    {
      Var_129 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_129, 0) = ((MR_Box) ((MR_String) " "));
      MR_hl_field(MR_mktag(1), Var_129, 1) = ((MR_Box) (Var_131));
    }
    {
      Var_128 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_128, 0) = ((MR_Box) (CFLAGS_8));
      MR_hl_field(MR_mktag(1), Var_128, 1) = ((MR_Box) (Var_129));
    }
    {
      Var_126 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_126, 0) = ((MR_Box) ((MR_String) " "));
      MR_hl_field(MR_mktag(1), Var_126, 1) = ((MR_Box) (Var_128));
    }
    {
      Var_125 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_125, 0) = ((MR_Box) (WarningOpt_45));
      MR_hl_field(MR_mktag(1), Var_125, 1) = ((MR_Box) (Var_126));
    }
    {
      Var_124 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_124, 0) = ((MR_Box) (C_FnAlignOpt_33));
      MR_hl_field(MR_mktag(1), Var_124, 1) = ((MR_Box) (Var_125));
    }
    {
      Var_123 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_123, 0) = ((MR_Box) (AppleGCCRegWorkaroundOpt_47));
      MR_hl_field(MR_mktag(1), Var_123, 1) = ((MR_Box) (Var_124));
    }
    {
      Var_121 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_121, 0) = ((MR_Box) ((MR_String) " "));
      MR_hl_field(MR_mktag(1), Var_121, 1) = ((MR_Box) (Var_123));
    }
    {
      Var_120 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_120, 0) = ((MR_Box) (AnsiOpt_41));
      MR_hl_field(MR_mktag(1), Var_120, 1) = ((MR_Box) (Var_121));
    }
    {
      Var_119 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_119, 0) = ((MR_Box) (InlineAllocOpt_43));
      MR_hl_field(MR_mktag(1), Var_119, 1) = ((MR_Box) (Var_120));
    }
    {
      Var_118 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_118, 0) = ((MR_Box) (TypeLayoutOpt_37));
      MR_hl_field(MR_mktag(1), Var_118, 1) = ((MR_Box) (Var_119));
    }
    {
      Var_116 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_116, 0) = ((MR_Box) ((MR_String) " "));
      MR_hl_field(MR_mktag(1), Var_116, 1) = ((MR_Box) (Var_118));
    }
    {
      Var_115 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_115, 0) = ((MR_Box) (SanitizerOpts_26));
      MR_hl_field(MR_mktag(1), Var_115, 1) = ((MR_Box) (Var_116));
    }
    {
      Var_114 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_114, 0) = ((MR_Box) (Target_DebugOpt_25));
      MR_hl_field(MR_mktag(1), Var_114, 1) = ((MR_Box) (Var_115));
    }
    {
      Var_112 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_112, 0) = ((MR_Box) ((MR_String) " "));
      MR_hl_field(MR_mktag(1), Var_112, 1) = ((MR_Box) (Var_114));
    }
    {
      Var_111 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_111, 0) = ((MR_Box) (CFLAGS_FOR_LTO_22));
      MR_hl_field(MR_mktag(1), Var_111, 1) = ((MR_Box) (Var_112));
    }
    {
      Var_109 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_109, 0) = ((MR_Box) ((MR_String) " "));
      MR_hl_field(MR_mktag(1), Var_109, 1) = ((MR_Box) (Var_111));
    }
    {
      Var_108 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_108, 0) = ((MR_Box) (CFLAGS_FOR_PIC_21));
      MR_hl_field(MR_mktag(1), Var_108, 1) = ((MR_Box) (Var_109));
    }
    {
      Var_106 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_106, 0) = ((MR_Box) ((MR_String) " "));
      MR_hl_field(MR_mktag(1), Var_106, 1) = ((MR_Box) (Var_108));
    }
    {
      Var_105 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_105, 0) = ((MR_Box) (CFLAGS_FOR_THREADS_20));
      MR_hl_field(MR_mktag(1), Var_105, 1) = ((MR_Box) (Var_106));
    }
    {
      Var_103 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_103, 0) = ((MR_Box) ((MR_String) " "));
      MR_hl_field(MR_mktag(1), Var_103, 1) = ((MR_Box) (Var_105));
    }
    {
      Var_102 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_102, 0) = ((MR_Box) (CFLAGS_FOR_GOTOS_18));
      MR_hl_field(MR_mktag(1), Var_102, 1) = ((MR_Box) (Var_103));
    }
    {
      Var_100 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_100, 0) = ((MR_Box) ((MR_String) " "));
      MR_hl_field(MR_mktag(1), Var_100, 1) = ((MR_Box) (Var_102));
    }
    {
      Var_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_99, 0) = ((MR_Box) (CFLAGS_FOR_REGS_16));
      MR_hl_field(MR_mktag(1), Var_99, 1) = ((MR_Box) (Var_100));
    }
    {
      Var_98 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_98, 0) = ((MR_Box) (GradeDefinesOpts_14));
      MR_hl_field(MR_mktag(1), Var_98, 1) = ((MR_Box) (Var_99));
    }
    {
      Var_96 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_96, 0) = ((MR_Box) ((MR_String) " "));
      MR_hl_field(MR_mktag(1), Var_96, 1) = ((MR_Box) (Var_98));
    }
    {
      Var_95 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_95, 0) = ((MR_Box) (OptimizeOpt_39));
      MR_hl_field(MR_mktag(1), Var_95, 1) = ((MR_Box) (Var_96));
    }
    {
      Var_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_93, 0) = ((MR_Box) ((MR_String) " "));
      MR_hl_field(MR_mktag(1), Var_93, 1) = ((MR_Box) (Var_95));
    }
    {
      Var_92 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_92, 0) = ((MR_Box) (FrameworkInclOpt_13));
      MR_hl_field(MR_mktag(1), Var_92, 1) = ((MR_Box) (Var_93));
    }
    {
      Var_90 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_90, 0) = ((MR_Box) ((MR_String) " "));
      MR_hl_field(MR_mktag(1), Var_90, 1) = ((MR_Box) (Var_92));
    }
    {
      Var_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_89, 0) = ((MR_Box) (InclOpt_12));
      MR_hl_field(MR_mktag(1), Var_89, 1) = ((MR_Box) (Var_90));
    }
    {
      Var_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_88, 0) = ((MR_Box) (SubDirInclOpt_11));
      MR_hl_field(MR_mktag(1), Var_88, 1) = ((MR_Box) (Var_89));
    }
    mercury__string__append_list_2_p_0(Var_88, AllCFlags_6);
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

    libs__globals__lookup_accumulating_option_3_p_0(Globals_3, (MR_Integer) 596, &FrameworkDirs0_5);
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
        libs__globals__lookup_accumulating_option_3_p_0(Globals_3, (MR_Integer) 524, &FlagsList_9);
        break;
      case (MR_Integer) 2:
        libs__globals__lookup_accumulating_option_3_p_0(Globals_3, (MR_Integer) 526, &FlagsList_9);
        break;
      case (MR_Integer) 3:
        libs__globals__lookup_accumulating_option_3_p_0(Globals_3, (MR_Integer) 528, &FlagsList_9);
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

    conv0_LambdaHeadVar__2_12 = backend_libs__compile_target_code__IntroducedFrom__func__gather_c_include_dir_flags__816__1_1_f_0(((MR_String) (wrapper_arg_1)));
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

    libs__globals__lookup_accumulating_option_3_p_0(Globals_3, (MR_Integer) 520, &C_Incl_Dirs_5);
    Var_9 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&backend_libs__compile_target_code_scalar_common_1[0]), (MR_Word) (&backend_libs__compile_target_code_scalar_common_5[0]), C_Incl_Dirs_5);
    Var_8 = mercury__list__condense_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_9);
    *InclOpt_4 = mercury__string__append_list_1_f_0(Var_8);
  }
}

static void MR_CALL 
backend_libs__compile_target_code__gather_grade_defines_2_p_0(
  MR_Word Globals_3,
  MR_String * GradeDefines_4)
{
  {
    MR_bool succeeded;
    MR_Word HighLevelCode_5;
    MR_String HighLevelCodeOpt_6;
    MR_Word HighLevelData_7;
    MR_String HighLevelDataOpt_8;
    MR_Word GCC_Regs_9;
    MR_String RegOpt_10;
    MR_Word GCC_Gotos_11;
    MR_String GotoOpt_12;
    MR_Word ASM_Labels_13;
    MR_String AsmOpt_14;
    MR_Word Parallel_15;
    MR_String ParallelOpt_16;
    MR_Word Threadscope_17;
    MR_String ThreadscopeOpt_18;
    MR_Word GC_Method_19;
    MR_String GC_Opt_21;
    MR_Word ProfileCalls_22;
    MR_String ProfileCallsOpt_23;
    MR_Word ProfileTime_24;
    MR_String ProfileTimeOpt_25;
    MR_Word ProfileMemory_26;
    MR_String ProfileMemoryOpt_27;
    MR_Word ProfileDeep_28;
    MR_String ProfileDeepOpt_29;
    MR_Word RecordTermSizesAsWords_30;
    MR_Word RecordTermSizesAsCells_31;
    MR_String RecordTermSizesOpt_32;
    MR_Integer NumPtagBits_33;
    MR_String NumPtagBitsString_34;
    MR_String NumPtagBitsOpt_35;
    MR_Word DeclDebug_36;
    MR_String DeclDebugOpt_37;
    MR_Word SourceDebug_38;
    MR_String SourceDebugOpt_39;
    MR_Word ExecTrace_40;
    MR_String ExecTraceOpt_41;
    MR_Word Extend_42;
    MR_Word StackSegments_43;
    MR_String ExtendOpt_44;
    MR_Word LL_Debug_45;
    MR_String LL_DebugOpt_46;
    MR_Word UseTrail_47;
    MR_String UseTrailOpt_48;
    MR_String TrailSegOpt_50;
    MR_Word MinimalModelStackCopy_51;
    MR_Word MinimalModelOwnStacks_52;
    MR_String MinimalModelBaseOpt_53;
    MR_Word MinimalModelDebug_54;
    MR_String MinimalModelOpt_55;
    MR_Word PregeneratedDist_56;
    MR_String PregeneratedDistOpt_57;
    MR_Word SinglePrecFloat_58;
    MR_String SinglePrecFloatOpt_59;
    MR_Word UseRegions_60;
    MR_String UseRegionsOpt_65;
    MR_String Var_86;
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
    MR_Word Var_128;
    MR_Word Var_129;
    MR_Word Var_130;
    MR_Word Var_131;
    MR_Word Var_132;
    MR_Word Var_133;
    MR_Word Var_134;
    MR_Word Var_135;

    libs__globals__lookup_bool_option_3_p_0(Globals_3, (MR_Integer) 284, &HighLevelCode_5);
    switch (HighLevelCode_5) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        HighLevelCodeOpt_6 = (MR_String) "";
        break;
      case (MR_Integer) 1:
        HighLevelCodeOpt_6 = (MR_String) "-DMR_HIGHLEVEL_CODE ";
        break;
    }
    libs__globals__lookup_bool_option_3_p_0(Globals_3, (MR_Integer) 285, &HighLevelData_7);
    switch (HighLevelData_7) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        HighLevelDataOpt_8 = (MR_String) "";
        break;
      case (MR_Integer) 1:
        HighLevelDataOpt_8 = (MR_String) "-DMR_HIGHLEVEL_DATA ";
        break;
    }
    libs__globals__lookup_bool_option_3_p_0(Globals_3, (MR_Integer) 281, &GCC_Regs_9);
    switch (GCC_Regs_9) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        RegOpt_10 = (MR_String) "";
        break;
      case (MR_Integer) 1:
        RegOpt_10 = (MR_String) "-DMR_USE_GCC_GLOBAL_REGISTERS ";
        break;
    }
    libs__globals__lookup_bool_option_3_p_0(Globals_3, (MR_Integer) 280, &GCC_Gotos_11);
    switch (GCC_Gotos_11) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        GotoOpt_12 = (MR_String) "";
        break;
      case (MR_Integer) 1:
        GotoOpt_12 = (MR_String) "-DMR_USE_GCC_NONLOCAL_GOTOS ";
        break;
    }
    libs__globals__lookup_bool_option_3_p_0(Globals_3, (MR_Integer) 282, &ASM_Labels_13);
    switch (ASM_Labels_13) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        AsmOpt_14 = (MR_String) "";
        break;
      case (MR_Integer) 1:
        AsmOpt_14 = (MR_String) "-DMR_USE_ASM_LABELS ";
        break;
    }
    libs__globals__lookup_bool_option_3_p_0(Globals_3, (MR_Integer) 240, &Parallel_15);
    switch (Parallel_15) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        ParallelOpt_16 = (MR_String) "";
        break;
      case (MR_Integer) 1:
        ParallelOpt_16 = (MR_String) "-DMR_THREAD_SAFE ";
        break;
    }
    libs__globals__lookup_bool_option_3_p_0(Globals_3, (MR_Integer) 241, &Threadscope_17);
    switch (Threadscope_17) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        ThreadscopeOpt_18 = (MR_String) "";
        break;
      case (MR_Integer) 1:
        ThreadscopeOpt_18 = (MR_String) "-DMR_THREADSCOPE ";
        break;
    }
    libs__globals__get_gc_method_2_p_0(Globals_3, &GC_Method_19);
    switch (GC_Method_19) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 5:
        GC_Opt_21 = (MR_String) "-DMR_NATIVE_GC ";
        break;
      case (MR_Integer) 0:
        GC_Opt_21 = (MR_String) "";
        break;
      case (MR_Integer) 2:
        GC_Opt_21 = (MR_String) "-DMR_CONSERVATIVE_GC -DMR_BOEHM_GC ";
        break;
      case (MR_Integer) 3:
        GC_Opt_21 = (MR_String) "-DMR_CONSERVATIVE_GC -DMR_BOEHM_GC -DMR_BOEHM_GC_DEBUG -DGC_DEBUG -DKEEP_BACKPTRS ";
        break;
      case (MR_Integer) 4:
        GC_Opt_21 = (MR_String) "-DMR_CONSERVATIVE_GC -DMR_HGC ";
        break;
      case (MR_Integer) 1:
        GC_Opt_21 = (MR_String) "";
        break;
    }
    libs__globals__lookup_bool_option_3_p_0(Globals_3, (MR_Integer) 216, &ProfileCalls_22);
    switch (ProfileCalls_22) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        ProfileCallsOpt_23 = (MR_String) "";
        break;
      case (MR_Integer) 1:
        ProfileCallsOpt_23 = (MR_String) "-DMR_MPROF_PROFILE_CALLS ";
        break;
    }
    libs__globals__lookup_bool_option_3_p_0(Globals_3, (MR_Integer) 217, &ProfileTime_24);
    switch (ProfileTime_24) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        ProfileTimeOpt_25 = (MR_String) "";
        break;
      case (MR_Integer) 1:
        ProfileTimeOpt_25 = (MR_String) "-DMR_MPROF_PROFILE_TIME ";
        break;
    }
    libs__globals__lookup_bool_option_3_p_0(Globals_3, (MR_Integer) 218, &ProfileMemory_26);
    switch (ProfileMemory_26) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        ProfileMemoryOpt_27 = (MR_String) "";
        break;
      case (MR_Integer) 1:
        ProfileMemoryOpt_27 = (MR_String) "-DMR_MPROF_PROFILE_MEMORY ";
        break;
    }
    libs__globals__lookup_bool_option_3_p_0(Globals_3, (MR_Integer) 219, &ProfileDeep_28);
    switch (ProfileDeep_28) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        ProfileDeepOpt_29 = (MR_String) "";
        break;
      case (MR_Integer) 1:
        ProfileDeepOpt_29 = (MR_String) "-DMR_DEEP_PROFILING ";
        break;
    }
    libs__globals__lookup_bool_option_3_p_0(Globals_3, (MR_Integer) 236, &RecordTermSizesAsWords_30);
    libs__globals__lookup_bool_option_3_p_0(Globals_3, (MR_Integer) 237, &RecordTermSizesAsCells_31);
    switch (RecordTermSizesAsWords_30) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (RecordTermSizesAsCells_31) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            RecordTermSizesOpt_32 = (MR_String) "";
            break;
          case (MR_Integer) 1:
            RecordTermSizesOpt_32 = (MR_String) "-DMR_RECORD_TERM_SIZES -DMR_RECORD_TERM_SIZES_AS_CELLS ";
            break;
        }
        break;
      case (MR_Integer) 1:
        switch (RecordTermSizesAsCells_31) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            RecordTermSizesOpt_32 = (MR_String) "-DMR_RECORD_TERM_SIZES ";
            break;
          case (MR_Integer) 1:
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140backend_libs.compile_target_code.gather_grade_defines\'/2", (MR_String) "inconsistent record term size options");
              return;
            }
            break;
        }
        break;
    }
    libs__globals__lookup_int_option_3_p_0(Globals_3, (MR_Integer) 261, &NumPtagBits_33);
    mercury__string__int_to_string_2_p_0(NumPtagBits_33, &NumPtagBitsString_34);
    Var_86 = mercury__string__f_43_43_2_f_0(NumPtagBitsString_34, (MR_String) " ");
    NumPtagBitsOpt_35 = mercury__string__f_43_43_2_f_0((MR_String) "-DMR_TAGBITS=", Var_86);
    libs__globals__lookup_bool_option_3_p_0(Globals_3, (MR_Integer) 211, &DeclDebug_36);
    switch (DeclDebug_36) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        DeclDebugOpt_37 = (MR_String) "";
        break;
      case (MR_Integer) 1:
        DeclDebugOpt_37 = (MR_String) "-DMR_DECL_DEBUG ";
        break;
    }
    libs__globals__lookup_bool_option_3_p_0(Globals_3, (MR_Integer) 257, &SourceDebug_38);
    switch (SourceDebug_38) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        SourceDebugOpt_39 = (MR_String) "";
        break;
      case (MR_Integer) 1:
        SourceDebugOpt_39 = (MR_String) "-DMR_SS_DEBUG ";
        break;
    }
    libs__globals__lookup_bool_option_3_p_0(Globals_3, (MR_Integer) 210, &ExecTrace_40);
    switch (ExecTrace_40) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        ExecTraceOpt_41 = (MR_String) "";
        break;
      case (MR_Integer) 1:
        ExecTraceOpt_41 = (MR_String) "-DMR_EXEC_TRACE ";
        break;
    }
    libs__globals__lookup_bool_option_3_p_0(Globals_3, (MR_Integer) 251, &Extend_42);
    libs__globals__lookup_bool_option_3_p_0(Globals_3, (MR_Integer) 252, &StackSegments_43);
    switch (Extend_42) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (StackSegments_43) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            ExtendOpt_44 = (MR_String) "";
            break;
          case (MR_Integer) 1:
            ExtendOpt_44 = (MR_String) "-DMR_STACK_SEGMENTS ";
            break;
        }
        break;
      case (MR_Integer) 1:
        switch (StackSegments_43) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            ExtendOpt_44 = (MR_String) "-DMR_EXTEND_STACKS_WHEN_NEEDED ";
            break;
          case (MR_Integer) 1:
            {
              MR_Box conv0_ExtendOpt_44;

              {
                conv0_ExtendOpt_44 = mercury__require__unexpected_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_String) "predicate \140backend_libs.compile_target_code.gather_grade_defines\'/2", (MR_String) "--extend-stacks-when-needed and --stack-segments");
                return;
              }
              ExtendOpt_44 = ((MR_String) (conv0_ExtendOpt_44));
            }
            break;
        }
        break;
    }
    libs__globals__lookup_bool_option_3_p_0(Globals_3, (MR_Integer) 324, &LL_Debug_45);
    switch (LL_Debug_45) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        LL_DebugOpt_46 = (MR_String) "";
        break;
      case (MR_Integer) 1:
        LL_DebugOpt_46 = (MR_String) "-DMR_LL_DEBUG ";
        break;
    }
    libs__globals__lookup_bool_option_3_p_0(Globals_3, (MR_Integer) 242, &UseTrail_47);
    switch (UseTrail_47) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          UseTrailOpt_48 = (MR_String) "";
          TrailSegOpt_50 = (MR_String) "";
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word TrailSegments_49;

          UseTrailOpt_48 = (MR_String) "-DMR_USE_TRAIL ";
          libs__globals__lookup_bool_option_3_p_0(Globals_3, (MR_Integer) 243, &TrailSegments_49);
          switch (TrailSegments_49) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              TrailSegOpt_50 = (MR_String) "";
              break;
            case (MR_Integer) 1:
              TrailSegOpt_50 = (MR_String) "-DMR_TRAIL_SEGMENTS ";
              break;
          }
        }
        break;
    }
    libs__globals__lookup_bool_option_3_p_0(Globals_3, (MR_Integer) 244, &MinimalModelStackCopy_51);
    libs__globals__lookup_bool_option_3_p_0(Globals_3, (MR_Integer) 245, &MinimalModelOwnStacks_52);
    switch (MinimalModelStackCopy_51) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MinimalModelOwnStacks_52) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            MinimalModelBaseOpt_53 = (MR_String) "";
            break;
          case (MR_Integer) 1:
            MinimalModelBaseOpt_53 = (MR_String) "-DMR_USE_MINIMAL_MODEL_OWN_STACKS ";
            break;
        }
        break;
      case (MR_Integer) 1:
        switch (MinimalModelOwnStacks_52) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            MinimalModelBaseOpt_53 = (MR_String) "-DMR_USE_MINIMAL_MODEL_STACK_COPY ";
            break;
          case (MR_Integer) 1:
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140backend_libs.compile_target_code.gather_grade_defines\'/2", (MR_String) "inconsistent minimal model options");
              return;
            }
            break;
        }
        break;
    }
    libs__globals__lookup_bool_option_3_p_0(Globals_3, (MR_Integer) 246, &MinimalModelDebug_54);
    switch (MinimalModelDebug_54) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        MinimalModelOpt_55 = MinimalModelBaseOpt_53;
        break;
      case (MR_Integer) 1:
        {
          succeeded = (strcmp(MinimalModelBaseOpt_53, (MR_String) "") == 0);
          if (succeeded)
            MinimalModelOpt_55 = MinimalModelBaseOpt_53;
          else
            MinimalModelOpt_55 = mercury__string__f_43_43_2_f_0(MinimalModelBaseOpt_53, (MR_String) "-DMR_MINIMAL_MODEL_DEBUG ");
        }
        break;
    }
    libs__globals__lookup_bool_option_3_p_0(Globals_3, (MR_Integer) 247, &PregeneratedDist_56);
    switch (PregeneratedDist_56) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        PregeneratedDistOpt_57 = (MR_String) "";
        break;
      case (MR_Integer) 1:
        PregeneratedDistOpt_57 = (MR_String) "-DMR_PREGENERATED_DIST ";
        break;
    }
    libs__globals__lookup_bool_option_3_p_0(Globals_3, (MR_Integer) 248, &SinglePrecFloat_58);
    switch (SinglePrecFloat_58) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        SinglePrecFloatOpt_59 = (MR_String) "";
        break;
      case (MR_Integer) 1:
        SinglePrecFloatOpt_59 = (MR_String) "-DMR_USE_SINGLE_PREC_FLOAT ";
        break;
    }
    libs__globals__lookup_bool_option_3_p_0(Globals_3, (MR_Integer) 253, &UseRegions_60);
    switch (UseRegions_60) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        UseRegionsOpt_65 = (MR_String) "";
        break;
      case (MR_Integer) 1:
        {
          MR_Word UseRegionsDebug_62;
          MR_String UseRegionsOpt1_63;
          MR_Word UseRegionsProfiling_64;

          libs__globals__lookup_bool_option_3_p_0(Globals_3, (MR_Integer) 255, &UseRegionsDebug_62);
          switch (UseRegionsDebug_62) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              UseRegionsOpt1_63 = (MR_String) "-DMR_USE_REGIONS ";
              break;
            case (MR_Integer) 1:
              UseRegionsOpt1_63 = (MR_String) "-DMR_USE_REGIONS -DMR_RBMM_DEBUG ";
              break;
          }
          libs__globals__lookup_bool_option_3_p_0(Globals_3, (MR_Integer) 256, &UseRegionsProfiling_64);
          switch (UseRegionsProfiling_64) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              UseRegionsOpt_65 = UseRegionsOpt1_63;
              break;
            case (MR_Integer) 1:
              UseRegionsOpt_65 = mercury__string__f_43_43_2_f_0(UseRegionsOpt1_63, (MR_String) "-DMR_RBMM_PROFILING ");
              break;
          }
        }
        break;
    }
    {
      Var_135 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_135, 0) = ((MR_Box) (UseRegionsOpt_65));
      MR_hl_field(MR_mktag(1), Var_135, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_134 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_134, 0) = ((MR_Box) (SinglePrecFloatOpt_59));
      MR_hl_field(MR_mktag(1), Var_134, 1) = ((MR_Box) (Var_135));
    }
    {
      Var_133 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_133, 0) = ((MR_Box) (PregeneratedDistOpt_57));
      MR_hl_field(MR_mktag(1), Var_133, 1) = ((MR_Box) (Var_134));
    }
    {
      Var_132 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_132, 0) = ((MR_Box) (MinimalModelOpt_55));
      MR_hl_field(MR_mktag(1), Var_132, 1) = ((MR_Box) (Var_133));
    }
    {
      Var_131 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_131, 0) = ((MR_Box) (TrailSegOpt_50));
      MR_hl_field(MR_mktag(1), Var_131, 1) = ((MR_Box) (Var_132));
    }
    {
      Var_130 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_130, 0) = ((MR_Box) (UseTrailOpt_48));
      MR_hl_field(MR_mktag(1), Var_130, 1) = ((MR_Box) (Var_131));
    }
    {
      Var_129 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_129, 0) = ((MR_Box) (ExecTraceOpt_41));
      MR_hl_field(MR_mktag(1), Var_129, 1) = ((MR_Box) (Var_130));
    }
    {
      Var_128 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_128, 0) = ((MR_Box) (SourceDebugOpt_39));
      MR_hl_field(MR_mktag(1), Var_128, 1) = ((MR_Box) (Var_129));
    }
    {
      Var_127 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_127, 0) = ((MR_Box) (DeclDebugOpt_37));
      MR_hl_field(MR_mktag(1), Var_127, 1) = ((MR_Box) (Var_128));
    }
    {
      Var_126 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_126, 0) = ((MR_Box) (LL_DebugOpt_46));
      MR_hl_field(MR_mktag(1), Var_126, 1) = ((MR_Box) (Var_127));
    }
    {
      Var_125 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_125, 0) = ((MR_Box) (ExtendOpt_44));
      MR_hl_field(MR_mktag(1), Var_125, 1) = ((MR_Box) (Var_126));
    }
    {
      Var_124 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_124, 0) = ((MR_Box) (NumPtagBitsOpt_35));
      MR_hl_field(MR_mktag(1), Var_124, 1) = ((MR_Box) (Var_125));
    }
    {
      Var_123 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_123, 0) = ((MR_Box) (RecordTermSizesOpt_32));
      MR_hl_field(MR_mktag(1), Var_123, 1) = ((MR_Box) (Var_124));
    }
    {
      Var_122 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_122, 0) = ((MR_Box) (ProfileDeepOpt_29));
      MR_hl_field(MR_mktag(1), Var_122, 1) = ((MR_Box) (Var_123));
    }
    {
      Var_121 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_121, 0) = ((MR_Box) (ProfileMemoryOpt_27));
      MR_hl_field(MR_mktag(1), Var_121, 1) = ((MR_Box) (Var_122));
    }
    {
      Var_120 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_120, 0) = ((MR_Box) (ProfileTimeOpt_25));
      MR_hl_field(MR_mktag(1), Var_120, 1) = ((MR_Box) (Var_121));
    }
    {
      Var_119 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_119, 0) = ((MR_Box) (ProfileCallsOpt_23));
      MR_hl_field(MR_mktag(1), Var_119, 1) = ((MR_Box) (Var_120));
    }
    {
      Var_118 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_118, 0) = ((MR_Box) (GC_Opt_21));
      MR_hl_field(MR_mktag(1), Var_118, 1) = ((MR_Box) (Var_119));
    }
    {
      Var_117 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_117, 0) = ((MR_Box) (ThreadscopeOpt_18));
      MR_hl_field(MR_mktag(1), Var_117, 1) = ((MR_Box) (Var_118));
    }
    {
      Var_116 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_116, 0) = ((MR_Box) (ParallelOpt_16));
      MR_hl_field(MR_mktag(1), Var_116, 1) = ((MR_Box) (Var_117));
    }
    {
      Var_115 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_115, 0) = ((MR_Box) (AsmOpt_14));
      MR_hl_field(MR_mktag(1), Var_115, 1) = ((MR_Box) (Var_116));
    }
    {
      Var_114 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_114, 0) = ((MR_Box) (GotoOpt_12));
      MR_hl_field(MR_mktag(1), Var_114, 1) = ((MR_Box) (Var_115));
    }
    {
      Var_113 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_113, 0) = ((MR_Box) (RegOpt_10));
      MR_hl_field(MR_mktag(1), Var_113, 1) = ((MR_Box) (Var_114));
    }
    {
      Var_112 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_112, 0) = ((MR_Box) (HighLevelDataOpt_8));
      MR_hl_field(MR_mktag(1), Var_112, 1) = ((MR_Box) (Var_113));
    }
    {
      Var_111 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_111, 0) = ((MR_Box) (HighLevelCodeOpt_6));
      MR_hl_field(MR_mktag(1), Var_111, 1) = ((MR_Box) (Var_112));
    }
    mercury__string__append_list_2_p_0(Var_111, GradeDefines_4);
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
