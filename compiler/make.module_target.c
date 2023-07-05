/*
** Automatically generated from `make.module_target.m'
** by the Mercury compiler,
** version rotd-2023-07-05
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


// :- module make.module_target.
// :- implementation.

/*
INIT mercury__make__module_target__init
ENDINIT
*/

#include "make.module_target.mih"


#include "analysis.mih"
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
#include "enum.mih"
#include "float.mih"
#include "getopt.mih"
#include "hlds.mih"
#include "int.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "make.mih"
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
#include "top_level.mih"
#include "transform_hlds.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "version_array.mih"
#include "version_hash_table.mih"
#include "backend_libs.compile_target_code.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "io.environment.mih"
#include "io.file.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.maybe_util.mih"
#include "libs.op_mode.mih"
#include "libs.optimization_options.mih"
#include "libs.options.mih"
#include "libs.process_util.mih"
#include "libs.shell_util.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "make.build.mih"
#include "make.dependencies.mih"
#include "make.deps_set.mih"
#include "make.make_info.mih"
#include "make.module_dep_file.mih"
#include "make.options_file.mih"
#include "make.util.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.module_baggage.mih"
#include "parse_tree.module_cmds.mih"
#include "parse_tree.module_dep_info.mih"
#include "parse_tree.parse_error.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.read_modules.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.write_error_spec.mih"
#include "string.format.mih"
#include "string.parse_util.mih"
#include "top_level.mercury_compile_main.mih"
#include "transform_hlds.mmc_analysis.mih"



struct make__module_target__make_dependency_files_11_p_0_env_0_s {
  MR_bool make__module_target__make_dependency_files_11_p_0_env_0__succeeded;
  MR_Word make__module_target__make_dependency_files_11_p_0_env_0__TargetTimestamps_23;
  jmp_buf make__module_target__make_dependency_files_11_p_0_env_0__commit_0;
  MR_Word make__module_target__make_dependency_files_11_p_0_env_0__Var_104;
  MR_Box make__module_target__make_dependency_files_11_p_0_env_0__conv5_Var_104;
};


static const MR_FA_PseudoTypeInfo_Struct2 make__module_target__maybe__pti_maybe_error_2__plain_libs__timestamp__type_ctor_info_timestamp_0__plain_builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct1 make__module_target__list__pti_list_1__plain_string__type_ctor_info_poly_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 make__module_target__list__pti_list_1__plain_builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct1 make__module_target__maybe__pti_maybe_1__plain_builtin__type_ctor_info_string_0;

static const MR_FA_TypeInfo_Struct2 make__module_target__maybe__ti_maybe_error_2libs__timestamp__type_ctor_info_timestamp_0builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct2 make__module_target__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_maybe__ti_maybe_error_2libs__timestamp__type_ctor_info_timestamp_0builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct1 make__module_target__list__pti_list_1__plain_make__make_info__type_ctor_info_target_file_0;

static const MR_FA_PseudoTypeInfo_Struct1 make__module_target__list__pti_list_1__plain_make__module_target__type_ctor_info_foreign_code_file_0;

static const MR_FA_TypeInfo_Struct1 make__module_target__list__ti_list_1builtin__type_ctor_info_string_0;

static const MR_PseudoTypeInfo make__module_target__make__module_target__field_types_compilation_task_type_and_options_0_0[2];

static const MR_DuFunctorDesc make__module_target__make__module_target__du_functor_desc_compilation_task_type_and_options_0_0;

static const MR_DuFunctorDescPtr make__module_target__make__module_target__du_stag_ordered_compilation_task_type_and_options_0_0[1];

static const MR_DuPtagLayout make__module_target__make__module_target__du_ptag_ordered_compilation_task_type_and_options_0[1];

static const MR_DuFunctorDescPtr make__module_target__make__module_target__du_name_ordered_compilation_task_type_and_options_0[1];

static const MR_Integer make__module_target__make__module_target__functor_number_map_compilation_task_type_and_options_0[1];

static const MR_PseudoTypeInfo make__module_target__make__module_target__field_types_foreign_code_file_0_0[3];

static const MR_ConstString make__module_target__make__module_target__field_names_foreign_code_file_0_0[3];

static const MR_DuArgLocn make__module_target__make__module_target__field_locns_foreign_code_file_0_0[3];

static const MR_DuFunctorDesc make__module_target__make__module_target__du_functor_desc_foreign_code_file_0_0;

static const MR_DuFunctorDescPtr make__module_target__make__module_target__du_stag_ordered_foreign_code_file_0_0[1];

static const MR_DuPtagLayout make__module_target__make__module_target__du_ptag_ordered_foreign_code_file_0[1];

static const MR_DuFunctorDescPtr make__module_target__make__module_target__du_name_ordered_foreign_code_file_0[1];

static const MR_Integer make__module_target__make__module_target__functor_number_map_foreign_code_file_0[1];

static MR_String MR_CALL 
make__module_target__IntroducedFrom__func__find_files_maybe_touched_by_process_module__1093__1_1_f_0(
  MR_Word LambdaHeadVar__1_60);

static MR_bool MR_CALL 
make__module_target__IntroducedFrom__pred__find_files_maybe_touched_by_process_module__1072__1_2_p_0(
  MR_Word LambdaHeadVar__1_53,
  MR_Word * LambdaHeadVar__2_54);

static MR_bool MR_CALL 
make__module_target__IntroducedFrom__pred__make_dependency_files__399__1_2_p_0(
  MR_String TargetFileName_14,
  MR_String TargetFileNameB_32);

static void MR_CALL 
make__module_target__IntroducedFrom__pred__make_module_target_file_main_path__248__1_3_p_0(
  MR_String LambdaHeadVar__1_87);

static void MR_CALL 
make__module_target____Compare____compilation_task_type_and_options_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
make__module_target____Unify____compilation_task_type_and_options_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
make__module_target__get_fact_table_foreign_code_file_7_p_0(
  MR_Word Globals_8,
  MR_Word Mkdir_9,
  MR_Word ObjExt_10,
  MR_String FactTableFileName_11,
  MR_Word * ForeignCodeFile_12);

static void MR_CALL 
make__module_target__gather_target_file_timestamp_file_names_6_p_0(
  MR_Word Globals_7,
  MR_Word TouchedTargetFile_8,
  MR_Word STATE_VARIABLE_TimestampFileNames_0_15,
  MR_Word * STATE_VARIABLE_TimestampFileNames_16);

static void MR_CALL 
make__module_target__delete_analysis_registry_timestamps_5_p_0(
  MR_Word Globals_6,
  MR_String FileName_7,
  MR_Word HeadVar__3_8,
  MR_Word STATE_VARIABLE_Timestamps_0_10,
  MR_Word * STATE_VARIABLE_Timestamps_11);

static void MR_CALL 
make__module_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_108_101_116_101_95_97_110_97_108_121_115_105_115_95_114_101_103_105_115_116_114_121_95_116_105_109_101_115_116_97_109_112_115_95_95_91_51_93_95_48_5_p_0(
  MR_Word Globals_6,
  MR_String FileName_7,
  MR_Word STATE_VARIABLE_Timestamps_0_10,
  MR_Word * STATE_VARIABLE_Timestamps_11);

static void MR_CALL 
make__module_target__delete_timestamp_4_p_0_1(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1);

static void MR_CALL 
make__module_target__delete_timestamp_4_p_0(
  MR_Word Globals_5,
  MR_String TouchedFile_6,
  MR_Word STATE_VARIABLE_Timestamps_0_10,
  MR_Word * STATE_VARIABLE_Timestamps_11);

static void MR_CALL 
make__module_target__update_target_status_4_p_0(
  MR_Word TargetStatus_5,
  MR_Word TargetFile_6,
  MR_Word STATE_VARIABLE_Info_0_11,
  MR_Word * STATE_VARIABLE_Info_12);

static MR_Box MR_CALL 
make__module_target__invoke_mmc_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
make__module_target__invoke_mmc_8_p_0(
  MR_Word Globals_9,
  MR_Word ProgressStream_10,
  MR_Word ErrorStream_11,
  MR_Word MaybeArgFileName_12,
  MR_Word Args_13,
  MR_Word * Succeeded_14);

static void MR_CALL 
make__module_target__compile_foreign_code_file_9_p_0(
  MR_Word Globals_10,
  MR_Word ProgressStream_11,
  MR_Word ErrorStream_12,
  MR_Word PIC_13,
  MR_Word ModuleDepInfo_14,
  MR_Word ForeignCodeFile_15,
  MR_Word * Succeeded_16);

static void MR_CALL 
make__module_target__build_object_code_10_p_0(
  MR_Word Globals_11,
  MR_Word ModuleName_12,
  MR_Word Target_13,
  MR_Word PIC_14,
  MR_Word ProgressStream_15,
  MR_Word ErrorStream_16,
  MR_Word _ModuleDepInfo_17,
  MR_Word * Succeeded_18);

static void MR_CALL 
make__module_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_111_98_106_101_99_116_95_99_111_100_101_95_95_91_55_93_95_48_10_p_0(
  MR_Word Globals_11,
  MR_Word ModuleName_12,
  MR_Word Target_13,
  MR_Word PIC_14,
  MR_Word ProgressStream_15,
  MR_Word ErrorStream_16,
  MR_Word * Succeeded_18);

static void MR_CALL 
make__module_target__cleanup_files_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
make__module_target__cleanup_files_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
make__module_target__cleanup_files_8_p_0(
  MR_Word Globals_9,
  MR_Word MaybeArgFileName_10,
  MR_Word TouchedTargetFiles_11,
  MR_Word TouchedFiles_12,
  MR_Word STATE_VARIABLE_MakeInfo_0_17,
  MR_Word * STATE_VARIABLE_MakeInfo_18);

static void MR_CALL 
make__module_target__external_foreign_code_files_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
make__module_target__record_made_target_9_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
make__module_target__record_made_target_9_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
make__module_target__record_made_target_9_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
make__module_target__record_made_target_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
make__module_target__make_module_target_file_main_path_10_p_0_9(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
make__module_target__make_module_target_file_main_path_10_p_0_8(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1);

static void MR_CALL 
make__module_target__make_module_target_file_main_path_10_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
make__module_target__make_module_target_file_main_path_10_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
make__module_target__make_module_target_file_main_path_10_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
make__module_target__make_module_target_file_main_path_10_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
make__module_target__make_module_target_file_main_path_10_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
make__module_target__make_module_target_file_main_path_10_p_0_2(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1);

static void MR_CALL 
make__module_target__make_module_target_file_main_path_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
make__module_target__make_module_target_file_main_path_10_p_0(
  MR_Word ExtraOptions_11,
  MR_Word Globals_12,
  MR_Word TargetFile_13,
  MR_Word CompilationTaskAndOptions_14,
  MR_Word ModuleDepInfo_15,
  MR_Word * Succeeded_16,
  MR_Word STATE_VARIABLE_Info_0_54,
  MR_Word * STATE_VARIABLE_Info_55);

static void MR_CALL 
make__module_target__find_files_maybe_touched_by_task_9_p_0(
  MR_Word Globals_10,
  MR_Word TargetFile_11,
  MR_Word Task_12,
  MR_Word * TouchedTargetFiles_13,
  MR_Word * TouchedFileNames_14,
  MR_Word STATE_VARIABLE_Info_0_28,
  MR_Word * STATE_VARIABLE_Info_29);

static void MR_CALL 
make__module_target__find_files_maybe_touched_by_process_module_9_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static MR_Box MR_CALL 
make__module_target__find_files_maybe_touched_by_process_module_9_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
make__module_target__find_files_maybe_touched_by_process_module_9_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static MR_bool MR_CALL 
make__module_target__find_files_maybe_touched_by_process_module_9_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
make__module_target__find_files_maybe_touched_by_process_module_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
make__module_target__find_files_maybe_touched_by_process_module_9_p_0(
  MR_Word Globals_10,
  MR_Word TargetFile_11,
  MR_Word Task_12,
  MR_Word * TouchedTargetFiles_13,
  MR_Word * TouchedFileNames_14,
  MR_Word STATE_VARIABLE_Info_0_41,
  MR_Word * STATE_VARIABLE_Info_42);

static void MR_CALL 
make__module_target__build_target_12_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
make__module_target__build_target_12_p_0(
  MR_Word Globals_13,
  MR_Word CompilationTask_14,
  MR_Word TargetFile_15,
  MR_Word ModuleDepInfo_16,
  MR_Word TouchedTargetFiles_17,
  MR_Word TouchedFiles_18,
  MR_Word ExtraOptions_19,
  MR_Word * Succeeded_20,
  MR_Word STATE_VARIABLE_Info_0_54,
  MR_Word * STATE_VARIABLE_Info_55);

static void MR_CALL 
make__module_target__record_made_target_given_maybe_touched_files_10_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
make__module_target__record_made_target_given_maybe_touched_files_10_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
make__module_target__record_made_target_given_maybe_touched_files_10_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
make__module_target__record_made_target_given_maybe_touched_files_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
make__module_target__record_made_target_given_maybe_touched_files_10_p_0(
  MR_Word Globals_11,
  MR_Word Succeeded_12,
  MR_Word TargetFile_13,
  MR_String TargetFileName_14,
  MR_Word TouchedTargetFiles_15,
  MR_Word OtherTouchedFiles_16,
  MR_Word STATE_VARIABLE_Info_0_26,
  MR_Word * STATE_VARIABLE_Info_27);

static void MR_CALL 
make__module_target__build_target_2_12_p_0_12(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
make__module_target__build_target_2_12_p_0_11(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
make__module_target__build_target_2_12_p_0_10(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
make__module_target__build_target_2_12_p_0_9(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
make__module_target__build_target_2_12_p_0_8(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
make__module_target__build_target_2_12_p_0_7(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
make__module_target__build_target_2_12_p_0_6(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
make__module_target__build_target_2_12_p_0_5(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
make__module_target__build_target_2_12_p_0_4(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_Box MR_CALL 
make__module_target__build_target_2_12_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
make__module_target__build_target_2_12_p_0_2(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
make__module_target__build_target_2_12_p_0_1(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
make__module_target__build_target_2_12_p_0(
  MR_Word ModuleName_13,
  MR_Word Task_14,
  MR_Word ArgFileName_15,
  MR_Word ModuleDepInfo_16,
  MR_Word Globals_17,
  MR_Word AllOptionArgs_18,
  MR_Word ErrorStream_19,
  MR_Word * Succeeded_20,
  MR_Word STATE_VARIABLE_Info_0_42,
  MR_Word * STATE_VARIABLE_Info_43);

static void MR_CALL 
make__module_target__call_mercury_compile_main_5_p_0(
  MR_Word Globals_6,
  MR_Word Args_7,
  MR_Word * Succeeded_8);

static void MR_CALL 
make__module_target__get_foreign_code_file_7_p_0(
  MR_Word Globals_8,
  MR_Word ModuleName_9,
  MR_Word PIC_10,
  MR_Word Lang_11,
  MR_Word * ForeignCodeFile_12);

static MR_bool MR_CALL 
make__module_target__make_dependency_files_11_p_0_10(
  MR_Box closure_arg);

static void MR_CALL 
make__module_target__make_dependency_files_11_p_0_9(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
make__module_target__make_dependency_files_11_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
make__module_target__make_dependency_files_11_p_0_7(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1);

static void MR_CALL 
make__module_target__make_dependency_files_11_p_0_2(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1);

static void MR_CALL 
make__module_target__make_dependency_files_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
make__module_target__make_dependency_files_11_p_0_3(
  void * env_ptr_arg);

static void MR_CALL 
make__module_target__make_dependency_files_11_p_0_5(
  void * env_ptr_arg);

static void MR_CALL 
make__module_target__make_dependency_files_11_p_0_4(
  void * env_ptr_arg);

static void MR_CALL 
make__module_target__make_dependency_files_11_p_0_6(
  void * env_ptr_arg);

static void MR_CALL 
make__module_target__make_dependency_files_11_p_0(
  MR_Word Globals_12,
  MR_Word TargetFile_13,
  MR_String TargetFileName_14,
  MR_Word DepFilesToMake_15,
  MR_Word TouchedTargetFiles_16,
  MR_Word TouchedFiles_17,
  MR_Word * DepsResult_18,
  MR_Word STATE_VARIABLE_Info_0_33,
  MR_Word * STATE_VARIABLE_Info_34);

static MR_bool MR_CALL 
make__module_target____Unify____compilation_task_type_and_options_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
make__module_target____Compare____compilation_task_type_and_options_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
make__module_target____Unify____foreign_code_file_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
make__module_target____Compare____foreign_code_file_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box make__module_target_scalar_common_1[29][2];

static /* final */ const MR_Box make__module_target_scalar_common_2[7][3];

static /* final */ const MR_Box make__module_target_scalar_common_3[9][1];

static /* final */ const MR_Box make__module_target_scalar_common_4[4][11];

static /* final */ const MR_Box make__module_target_scalar_common_5[2][6];

static /* final */ const MR_Box make__module_target_scalar_common_6[5][10];

static /* final */ const MR_Box make__module_target_scalar_common_7[3][5];

static /* final */ const MR_Box make__module_target_scalar_common_8[2][12];

static /* final */ const MR_Box make__module_target_scalar_common_9[3][8];

static /* final */ const MR_Box make__module_target_scalar_common_10[1][13];

static /* final */ const MR_Box make__module_target_scalar_common_11[2][7];

static /* final */ const MR_Box make__module_target_scalar_common_12[2][9];

static /* final */ const MR_Box make__module_target_scalar_common_13[5][4];




static /* final */ const MR_Box make__module_target_scalar_common_1[29][2] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_enum__uenum__arity1__make__deps_set__module_index__arity0__)),
    ((MR_Box) (&make__deps_set__make__deps_set__type_ctor_info_module_index_0))
  },
  /* row   1 */
  {
    ((MR_Box) (base_typeclass_info_analysis__compiler__arity1__transform_hlds__mmc_analysis__mmc__arity0__)),
    ((MR_Box) (&transform_hlds__mmc_analysis__transform_hlds__mmc_analysis__type_ctor_info_mmc_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&make__module_target__make__module_target__type_ctor_info_foreign_code_file_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   4 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 18U)),
    (MR_Box) ((MR_Unsigned) 1U)
  },
  /* row   5 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 2U)),
    (MR_Box) ((MR_Unsigned) 1U)
  },
  /* row   6 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 3U)),
    (MR_Box) ((MR_Unsigned) 0U)
  },
  /* row   7 */
  {
    ((MR_Box) ((MR_String) "--make-analysis-registry")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   8 */
  {
    ((MR_Box) (&make__module_target_scalar_common_3[1])),
    ((MR_Box) (MR_mkword(1, &make__module_target_scalar_common_1[7])))
  },
  /* row   9 */
  {
    ((MR_Box) ((MR_String) "--compile-to-c")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  10 */
  {
    ((MR_Box) (&make__module_target_scalar_common_3[2])),
    ((MR_Box) (MR_mkword(1, &make__module_target_scalar_common_1[9])))
  },
  /* row  11 */
  {
    ((MR_Box) ((MR_String) "--csharp-only")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  12 */
  {
    ((MR_Box) (&make__module_target_scalar_common_3[2])),
    ((MR_Box) (MR_mkword(1, &make__module_target_scalar_common_1[11])))
  },
  /* row  13 */
  {
    ((MR_Box) ((MR_String) "--errorcheck-only")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  14 */
  {
    ((MR_Box) (&make__module_target_scalar_common_3[3])),
    ((MR_Box) (MR_mkword(1, &make__module_target_scalar_common_1[13])))
  },
  /* row  15 */
  {
    ((MR_Box) ((MR_String) "--make-private-interface")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  16 */
  {
    ((MR_Box) (&make__module_target_scalar_common_3[4])),
    ((MR_Box) (MR_mkword(1, &make__module_target_scalar_common_1[15])))
  },
  /* row  17 */
  {
    ((MR_Box) ((MR_String) "--make-interface")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  18 */
  {
    ((MR_Box) (&make__module_target_scalar_common_3[5])),
    ((MR_Box) (MR_mkword(1, &make__module_target_scalar_common_1[17])))
  },
  /* row  19 */
  {
    ((MR_Box) ((MR_String) "--make-short-interface")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  20 */
  {
    ((MR_Box) (&make__module_target_scalar_common_3[6])),
    ((MR_Box) (MR_mkword(1, &make__module_target_scalar_common_1[19])))
  },
  /* row  21 */
  {
    ((MR_Box) (MR_mkword(1, &make__module_target_scalar_common_3[4]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  22 */
  {
    ((MR_Box) ((MR_String) "--java-only")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  23 */
  {
    ((MR_Box) (&make__module_target_scalar_common_3[2])),
    ((MR_Box) (MR_mkword(1, &make__module_target_scalar_common_1[22])))
  },
  /* row  24 */
  {
    ((MR_Box) ((MR_String) "--make-optimization-interface")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  25 */
  {
    ((MR_Box) (&make__module_target_scalar_common_3[7])),
    ((MR_Box) (MR_mkword(1, &make__module_target_scalar_common_1[24])))
  },
  /* row  26 */
  {
    ((MR_Box) ((MR_String) "--make-xml-doc")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  27 */
  {
    ((MR_Box) (&make__module_target_scalar_common_3[8])),
    ((MR_Box) (MR_mkword(1, &make__module_target_scalar_common_1[26])))
  },
  /* row  28 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 2U)),
    (MR_Box) ((MR_Unsigned) 0U)
  },
};

static /* final */ const MR_Box make__module_target_scalar_common_2[7][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_error_2)),
    ((MR_Box) (&libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&make__module_target_scalar_common_2[0]))
  },
  /* row   2 */
  {
    ((MR_Box) (&make__module_target_scalar_common_7[0])),
    ((MR_Box) (make__module_target__build_target_2_12_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   3 */
  {
    ((MR_Box) (&make__module_target_scalar_common_7[1])),
    ((MR_Box) (make__module_target__find_files_maybe_touched_by_process_module_9_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   4 */
  {
    ((MR_Box) (&make__module_target_scalar_common_7[2])),
    ((MR_Box) (make__module_target__find_files_maybe_touched_by_process_module_9_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   5 */
  {
    ((MR_Box) (&make__module_target_scalar_common_5[1])),
    ((MR_Box) (make__module_target__make_module_target_file_main_path_10_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   6 */
  {
    ((MR_Box) (&make__module_target_scalar_common_7[0])),
    ((MR_Box) (make__module_target__invoke_mmc_8_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box make__module_target_scalar_common_3[9][1] = {
  /* row   0 */
  { (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1)))))))) },
  /* row   1 */
  { (MR_Box) ((MR_Unsigned) 5U) },
  /* row   2 */
  { (MR_Box) ((MR_Unsigned) 6U) },
  /* row   3 */
  { (MR_Box) ((MR_Unsigned) 0U) },
  /* row   4 */
  { (MR_Box) ((MR_Unsigned) 1U) },
  /* row   5 */
  { (MR_Box) ((MR_Unsigned) 2U) },
  /* row   6 */
  { (MR_Box) ((MR_Unsigned) 3U) },
  /* row   7 */
  { (MR_Box) ((MR_Unsigned) 4U) },
  /* row   8 */
  { (MR_Box) ((MR_Unsigned) 7U) },
};

static /* final */ const MR_Box make__module_target_scalar_common_4[4][11] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&parse_tree__file_names__parse_tree__file_names__type_ctor_info_maybe_search_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_target_file_0)),
    ((MR_Box) (&make__module_target__maybe__pti_maybe_error_2__plain_libs__timestamp__type_ctor_info_timestamp_0__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_make_info_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_make_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&make__module_target__maybe__pti_maybe_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&make__module_target__list__pti_list_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&libs__maybe_util__libs__maybe_util__type_ctor_info_maybe_succeeded_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&make__module_target__maybe__pti_maybe_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&make__module_target__list__pti_list_1__plain_make__make_info__type_ctor_info_target_file_0)),
    ((MR_Box) (&make__module_target__list__pti_list_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_make_info_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_make_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&libs__options__libs__options__type_ctor_info_option_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_target_file_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_make_info_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_make_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box make__module_target_scalar_common_5[2][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&make__module_target__list__pti_list_1__plain_string__type_ctor_info_poly_type_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box make__module_target_scalar_common_6[5][10] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_target_file_0)),
    ((MR_Box) (&make__module_target__maybe__pti_maybe_error_2__plain_libs__timestamp__type_ctor_info_timestamp_0__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_make_info_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_make_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&make__module_target__list__pti_list_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&make__module_target__maybe__pti_maybe_error_2__plain_libs__timestamp__type_ctor_info_timestamp_0__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_make_info_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_make_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_maybe_module_dep_info_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_make_info_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_make_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&parse_tree__file_names__parse_tree__file_names__type_ctor_info_maybe_create_dirs_0)),
    ((MR_Box) (&parse_tree__file_names__parse_tree__file_names__type_ctor_info_ext_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&make__module_target__make__module_target__type_ctor_info_foreign_code_file_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&libs__options__libs__options__type_ctor_info_option_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_make_info_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_make_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box make__module_target_scalar_common_7[3][5] = {
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
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_maybe_module_dep_info_0)),
    ((MR_Box) (&parse_tree__module_dep_info__parse_tree__module_dep_info__type_ctor_info_module_dep_info_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&make__module_target__make__module_target__type_ctor_info_foreign_code_file_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box make__module_target_scalar_common_8[2][12] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 9)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&backend_libs__compile_target_code__backend_libs__compile_target_code__type_ctor_info_pic_0)),
    ((MR_Box) (&parse_tree__module_dep_info__parse_tree__module_dep_info__type_ctor_info_module_dep_info_0)),
    ((MR_Box) (&make__module_target__make__module_target__type_ctor_info_foreign_code_file_0)),
    ((MR_Box) (&libs__maybe_util__libs__maybe_util__type_ctor_info_maybe_succeeded_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 9)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&parse_tree__file_names__parse_tree__file_names__type_ctor_info_maybe_search_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_target_file_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_make_info_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_make_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box make__module_target_scalar_common_9[3][8] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&make__module_target__list__pti_list_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&libs__maybe_util__libs__maybe_util__type_ctor_info_maybe_succeeded_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&make__module_target__maybe__pti_maybe_error_2__plain_libs__timestamp__type_ctor_info_timestamp_0__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&make__module_target__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_maybe__ti_maybe_error_2libs__timestamp__type_ctor_info_timestamp_0builtin__type_ctor_info_string_0)),
    ((MR_Box) (&make__module_target__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_maybe__ti_maybe_error_2libs__timestamp__type_ctor_info_timestamp_0builtin__type_ctor_info_string_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&make__dependencies__make__dependencies__type_ctor_info_dependency_file_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box make__module_target_scalar_common_10[1][13] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 10)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_compilation_target_0)),
    ((MR_Box) (&backend_libs__compile_target_code__backend_libs__compile_target_code__type_ctor_info_pic_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&parse_tree__module_dep_info__parse_tree__module_dep_info__type_ctor_info_module_dep_info_0)),
    ((MR_Box) (&libs__maybe_util__libs__maybe_util__type_ctor_info_maybe_succeeded_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box make__module_target_scalar_common_11[2][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_dependency_status_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_target_file_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_make_info_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_make_info_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&make__module_target__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_maybe__ti_maybe_error_2libs__timestamp__type_ctor_info_timestamp_0builtin__type_ctor_info_string_0)),
    ((MR_Box) (&make__module_target__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_maybe__ti_maybe_error_2libs__timestamp__type_ctor_info_timestamp_0builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box make__module_target_scalar_common_12[2][9] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&backend_libs__compile_target_code__backend_libs__compile_target_code__type_ctor_info_pic_0)),
    ((MR_Box) (&parse_tree__module_dep_info__parse_tree__module_dep_info__type_ctor_info_module_dep_info_0)),
    ((MR_Box) (&make__module_target__list__pti_list_1__plain_make__module_target__type_ctor_info_foreign_code_file_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_target_file_0)),
    ((MR_Box) (&make__module_target__list__pti_list_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&make__module_target__list__pti_list_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box make__module_target_scalar_common_13[5][4] = {
  /* row   0 */
  {
    ((MR_Box) (&make__module_target_scalar_common_11[0])),
    ((MR_Box) (make__module_target__make_module_target_file_main_path_10_p_0_1)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row   1 */
  {
    ((MR_Box) (&make__module_target_scalar_common_11[0])),
    ((MR_Box) (make__module_target__make_module_target_file_main_path_10_p_0_5)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 3))
  },
  /* row   2 */
  {
    ((MR_Box) (&make__module_target_scalar_common_11[0])),
    ((MR_Box) (make__module_target__make_module_target_file_main_path_10_p_0_6)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 3))
  },
  /* row   3 */
  {
    ((MR_Box) (&make__module_target_scalar_common_11[0])),
    ((MR_Box) (make__module_target__make_module_target_file_main_path_10_p_0_7)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 3))
  },
  /* row   4 */
  {
    ((MR_Box) (&make__module_target_scalar_common_11[0])),
    ((MR_Box) (make__module_target__make_module_target_file_main_path_10_p_0_9)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 2))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "dir.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "version_array.mh"
#include "io.stream_ops.mh"
#include "libs.process_util.mh"
#include "make.build.mh"


static const MR_FA_PseudoTypeInfo_Struct2 make__module_target__maybe__pti_maybe_error_2__plain_libs__timestamp__type_ctor_info_timestamp_0__plain_builtin__type_ctor_info_string_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_error_2,
  {
    (MR_PseudoTypeInfo) (&libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0),
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 make__module_target__list__pti_list_1__plain_string__type_ctor_info_poly_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&mercury__string__string__type_ctor_info_poly_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 make__module_target__list__pti_list_1__plain_builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 make__module_target__maybe__pti_maybe_1__plain_builtin__type_ctor_info_string_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) }
};

static const MR_FA_TypeInfo_Struct2 make__module_target__maybe__ti_maybe_error_2libs__timestamp__type_ctor_info_timestamp_0builtin__type_ctor_info_string_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_error_2,
  {
    (MR_TypeInfo) (&libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0),
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 make__module_target__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_maybe__ti_maybe_error_2libs__timestamp__type_ctor_info_timestamp_0builtin__type_ctor_info_string_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
    (MR_PseudoTypeInfo) (&make__module_target__maybe__ti_maybe_error_2libs__timestamp__type_ctor_info_timestamp_0builtin__type_ctor_info_string_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 make__module_target__list__pti_list_1__plain_make__make_info__type_ctor_info_target_file_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&make__make_info__make__make_info__type_ctor_info_target_file_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 make__module_target__list__pti_list_1__plain_make__module_target__type_ctor_info_foreign_code_file_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&make__module_target__make__module_target__type_ctor_info_foreign_code_file_0) }
};

static const MR_FA_TypeInfo_Struct1 make__module_target__list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) }
};

static const MR_PseudoTypeInfo make__module_target__make__module_target__field_types_compilation_task_type_and_options_0_0[2] = {
  (MR_PseudoTypeInfo) (&make__make_info__make__make_info__type_ctor_info_compilation_task_type_0),
  (MR_PseudoTypeInfo) (&make__module_target__list__ti_list_1builtin__type_ctor_info_string_0)
};

static const MR_DuFunctorDesc make__module_target__make__module_target__du_functor_desc_compilation_task_type_and_options_0_0 = {
  (MR_String) "task_and_options",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  make__module_target__make__module_target__field_types_compilation_task_type_and_options_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr make__module_target__make__module_target__du_stag_ordered_compilation_task_type_and_options_0_0[1] = { &make__module_target__make__module_target__du_functor_desc_compilation_task_type_and_options_0_0 };

static const MR_DuPtagLayout make__module_target__make__module_target__du_ptag_ordered_compilation_task_type_and_options_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    make__module_target__make__module_target__du_stag_ordered_compilation_task_type_and_options_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr make__module_target__make__module_target__du_name_ordered_compilation_task_type_and_options_0[1] = { &make__module_target__make__module_target__du_functor_desc_compilation_task_type_and_options_0_0 };

static const MR_Integer make__module_target__make__module_target__functor_number_map_compilation_task_type_and_options_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct make__module_target__make__module_target__type_ctor_info_compilation_task_type_and_options_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (make__module_target____Unify____compilation_task_type_and_options_0_0_10001)),
  ((MR_Box) (make__module_target____Compare____compilation_task_type_and_options_0_0_10001)),
  (MR_String) "make.module_target",
  (MR_String) "compilation_task_type_and_options",
  { make__module_target__make__module_target__du_name_ordered_compilation_task_type_and_options_0 },
  { make__module_target__make__module_target__du_ptag_ordered_compilation_task_type_and_options_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  make__module_target__make__module_target__functor_number_map_compilation_task_type_and_options_0,

};

static const MR_PseudoTypeInfo make__module_target__make__module_target__field_types_foreign_code_file_0_0[3] = {
  (MR_PseudoTypeInfo) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
};

static const MR_ConstString make__module_target__make__module_target__field_names_foreign_code_file_0_0[3] = {
  (MR_String) "foreign_language",
  (MR_String) "target_file",
  (MR_String) "object_file"
};

static const MR_DuArgLocn make__module_target__make__module_target__field_locns_foreign_code_file_0_0[3] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 2
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 2,
    (MR_Integer) 0,
    (MR_Integer) 0
  }
};

static const MR_DuFunctorDesc make__module_target__make__module_target__du_functor_desc_foreign_code_file_0_0 = {
  (MR_String) "foreign_code_file",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  make__module_target__make__module_target__field_types_foreign_code_file_0_0,
  make__module_target__make__module_target__field_names_foreign_code_file_0_0,
  make__module_target__make__module_target__field_locns_foreign_code_file_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr make__module_target__make__module_target__du_stag_ordered_foreign_code_file_0_0[1] = { &make__module_target__make__module_target__du_functor_desc_foreign_code_file_0_0 };

static const MR_DuPtagLayout make__module_target__make__module_target__du_ptag_ordered_foreign_code_file_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    make__module_target__make__module_target__du_stag_ordered_foreign_code_file_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr make__module_target__make__module_target__du_name_ordered_foreign_code_file_0[1] = { &make__module_target__make__module_target__du_functor_desc_foreign_code_file_0_0 };

static const MR_Integer make__module_target__make__module_target__functor_number_map_foreign_code_file_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct make__module_target__make__module_target__type_ctor_info_foreign_code_file_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (make__module_target____Unify____foreign_code_file_0_0_10001)),
  ((MR_Box) (make__module_target____Compare____foreign_code_file_0_0_10001)),
  (MR_String) "make.module_target",
  (MR_String) "foreign_code_file",
  { make__module_target__make__module_target__du_name_ordered_foreign_code_file_0 },
  { make__module_target__make__module_target__du_ptag_ordered_foreign_code_file_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  make__module_target__make__module_target__functor_number_map_foreign_code_file_0,

};

static MR_String MR_CALL 
make__module_target__IntroducedFrom__func__find_files_maybe_touched_by_process_module__1093__1_1_f_0(
  MR_Word LambdaHeadVar__1_60)
{
  MR_String LambdaHeadVar__2_61 = ((MR_String) ((MR_hl_field(0, LambdaHeadVar__1_60, (MR_Integer) 1))));

  return LambdaHeadVar__2_61;
}

static MR_bool MR_CALL 
make__module_target__IntroducedFrom__pred__find_files_maybe_touched_by_process_module__1072__1_2_p_0(
  MR_Word LambdaHeadVar__1_53,
  MR_Word * LambdaHeadVar__2_54)
{
  MR_bool succeeded = (LambdaHeadVar__1_53 != (MR_Word) ((MR_Unsigned) 0U));

  if (succeeded)
    *LambdaHeadVar__2_54 = ((MR_Word) ((MR_hl_field(1, LambdaHeadVar__1_53, (MR_Integer) 0))));
  return succeeded;
}

static MR_bool MR_CALL 
make__module_target__IntroducedFrom__pred__make_dependency_files__399__1_2_p_0(
  MR_String TargetFileName_14,
  MR_String TargetFileNameB_32)
{
  MR_bool succeeded = (strcmp(TargetFileName_14, TargetFileNameB_32) == 0);

  return succeeded;
}

static void MR_CALL 
make__module_target__IntroducedFrom__pred__make_module_target_file_main_path__248__1_3_p_0(
  MR_String LambdaHeadVar__1_87)
{
  MR_Word Var_91;
  MR_Word Var_92;

  {
    Var_92 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_92, 0) = ((MR_Box) ((MR_Unsigned) 8U));
    MR_hl_field(3, Var_92, 1) = ((MR_Box) (LambdaHeadVar__1_87));
  }
  {
    Var_91 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_91, 0) = ((MR_Box) (Var_92));
    MR_hl_field(1, Var_91, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  mercury__io__format_4_p_0((MR_String) "\t%s\n", Var_91);
}

void MR_CALL 
make__module_target____Compare____foreign_code_file_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_12 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_13 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_12 == CastY_13);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 3);
    MR_Word ArgY1_5 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))) & (MR_Integer) 3);
    MR_String ArgX2_7 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_String ArgY2_8 = ((MR_String) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
    MR_String ArgX3_10 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_String ArgY3_11 = ((MR_String) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 2))));
    MR_Word SubResult1_6;
    MR_Integer Var_17 = (MR_Integer) (ArgX1_4);
    MR_Integer Var_18 = (MR_Integer) (ArgY1_5);

    succeeded = (Var_17 < Var_18);
    if (succeeded)
    {
      SubResult1_6 = (MR_Integer) 1;
      succeeded = MR_TRUE;
    }
    else
    {
      succeeded = (Var_17 > Var_18);
      if (succeeded)
      {
        SubResult1_6 = (MR_Integer) 2;
        succeeded = MR_TRUE;
      }
      else
      {
        succeeded = MR_TRUE;
        succeeded = !(succeeded);
        if (succeeded)
        {
          SubResult1_6 = (MR_Integer) 0;
          succeeded = MR_TRUE;
        }
      }
    }
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult2_9, ArgX2_7, ArgY2_8);
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
        mercury__private_builtin__builtin_compare_string_3_p_0(HeadVar__1_1, ArgX3_10, ArgY3_11);
    }
  }
}

MR_bool MR_CALL 
make__module_target____Unify____foreign_code_file_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_9 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_10 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_9 == CastY_10);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word ArgX1_3 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 3);
    MR_Word ArgY1_4 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 3);
    MR_String ArgX2_5 = ((MR_String) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_String ArgY2_6 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_String ArgX3_7 = ((MR_String) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 2))));
    MR_String ArgY3_8 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));

    succeeded = (ArgX1_3 == ArgY1_4);
    if (succeeded)
    {
      succeeded = (strcmp(ArgX2_5, ArgY2_6) == 0);
      if (succeeded)
        succeeded = (strcmp(ArgX3_7, ArgY3_8) == 0);
    }
  }
  return succeeded;
}

static void MR_CALL 
make__module_target____Compare____compilation_task_type_and_options_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_9 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_10 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_9 == CastY_10);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word SubResult1_6;

    make__make_info____Compare____compilation_task_type_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
      mercury__builtin__compare_3_p_0((MR_Word) (&make__module_target_scalar_common_1[3]), HeadVar__1_1, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
  }
}

static MR_bool MR_CALL 
make__module_target____Unify____compilation_task_type_and_options_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_7 == CastY_8);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word TypeInfo_10_10;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));

    succeeded = make__make_info____Unify____compilation_task_type_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
    {
      TypeInfo_10_10 = (MR_Word) (&make__module_target_scalar_common_1[3]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_10_10, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
    }
  }
  return succeeded;
}

static void MR_CALL 
make__module_target__get_fact_table_foreign_code_file_7_p_0(
  MR_Word Globals_8,
  MR_Word Mkdir_9,
  MR_Word ObjExt_10,
  MR_String FactTableFileName_11,
  MR_Word * ForeignCodeFile_12)
{
  MR_String FactTableCFileName_14;
  MR_String FactTableObjFileName_15;

  parse_tree__file_names__fact_table_file_name_8_p_0(Globals_8, (MR_String) "predicate \140make.module_target.get_fact_table_foreign_code_file\'/7", Mkdir_9, (MR_Word) (MR_mkword(3, &make__module_target_scalar_common_1[28])), FactTableFileName_11, &FactTableCFileName_14);
  parse_tree__file_names__fact_table_file_name_8_p_0(Globals_8, (MR_String) "predicate \140make.module_target.get_fact_table_foreign_code_file\'/7", Mkdir_9, ObjExt_10, FactTableFileName_11, &FactTableObjFileName_15);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    *ForeignCodeFile_12 = base;
    MR_hl_field(0, base, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(0, base, 1) = ((MR_Box) (FactTableCFileName_14));
    MR_hl_field(0, base, 2) = ((MR_Box) (FactTableObjFileName_15));
  }
}

static void MR_CALL 
make__module_target__gather_target_file_timestamp_file_names_6_p_0(
  MR_Word Globals_7,
  MR_Word TouchedTargetFile_8,
  MR_Word STATE_VARIABLE_TimestampFileNames_0_15,
  MR_Word * STATE_VARIABLE_TimestampFileNames_16)
{
  MR_bool succeeded;
  MR_Word TargetModuleName_11 = ((MR_Word) ((MR_hl_field(0, TouchedTargetFile_8, (MR_Integer) 0))));
  MR_Word TargetType_12 = ((MR_Word) ((MR_hl_field(0, TouchedTargetFile_8, (MR_Integer) 1))));
  MR_Word TimestampExt_13;

  succeeded = make__util__timestamp_extension_2_p_0(TargetType_12, &TimestampExt_13);
  if (succeeded)
  {
    MR_String TimestampFile_14;

    parse_tree__file_names__module_name_to_file_name_8_p_0(Globals_7, (MR_String) "predicate \140make.module_target.gather_target_file_timestamp_file_names\'/6", (MR_Integer) 1, TimestampExt_13, TargetModuleName_11, &TimestampFile_14);
    mercury__list__cons_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (TimestampFile_14)), STATE_VARIABLE_TimestampFileNames_0_15, STATE_VARIABLE_TimestampFileNames_16);
  }
  else
    *STATE_VARIABLE_TimestampFileNames_16 = STATE_VARIABLE_TimestampFileNames_0_15;
}

static void MR_CALL 
make__module_target__delete_analysis_registry_timestamps_5_p_0(
  MR_Word Globals_6,
  MR_String FileName_7,
  MR_Word HeadVar__3_8,
  MR_Word STATE_VARIABLE_Timestamps_0_10,
  MR_Word * STATE_VARIABLE_Timestamps_11)
{
  make__module_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_108_101_116_101_95_97_110_97_108_121_115_105_115_95_114_101_103_105_115_116_114_121_95_116_105_109_101_115_116_97_109_112_115_95_95_91_51_93_95_48_5_p_0(Globals_6, FileName_7, STATE_VARIABLE_Timestamps_0_10, STATE_VARIABLE_Timestamps_11);
}

static void MR_CALL 
make__module_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_108_101_116_101_95_97_110_97_108_121_115_105_115_95_114_101_103_105_115_116_114_121_95_116_105_109_101_115_116_97_109_112_115_95_95_91_51_93_95_48_5_p_0(
  MR_Word Globals_6,
  MR_String FileName_7,
  MR_Word STATE_VARIABLE_Timestamps_0_10,
  MR_Word * STATE_VARIABLE_Timestamps_11)
{
  MR_bool succeeded;

  succeeded = mercury__string__suffix_2_p_0(FileName_7, (MR_String) ".analysis");
  if (succeeded)
    make__module_target__delete_timestamp_4_p_0(Globals_6, FileName_7, STATE_VARIABLE_Timestamps_0_10, STATE_VARIABLE_Timestamps_11);
  else
    *STATE_VARIABLE_Timestamps_11 = STATE_VARIABLE_Timestamps_0_10;
}

static void MR_CALL 
make__module_target__delete_timestamp_4_p_0_1(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1)
{
  MR_Box closure = closure_arg;
  MR_String conv0_HeadVar__3_3;

  mercury__string__format_3_p_0(((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), &conv0_HeadVar__3_3);
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__3_3));
}

static void MR_CALL 
make__module_target__delete_timestamp_4_p_0(
  MR_Word Globals_5,
  MR_String TouchedFile_6,
  MR_Word STATE_VARIABLE_Timestamps_0_10,
  MR_Word * STATE_VARIABLE_Timestamps_11)
{
  MR_String DebugMsg_9;
  MR_Word Var_13;
  MR_Word Var_15;
  MR_Word Var_16;

  {
    Var_16 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_16, 0) = ((MR_Box) ((MR_Unsigned) 8U));
    MR_hl_field(3, Var_16, 1) = ((MR_Box) (TouchedFile_6));
  }
  {
    Var_15 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_15, 0) = ((MR_Box) (Var_16));
    MR_hl_field(1, Var_15, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_13 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_13, 0) = ((MR_Box) (&make__module_target_scalar_common_5[0]));
    MR_hl_field(0, Var_13, 1) = ((MR_Box) (make__module_target__delete_timestamp_4_p_0_1));
    MR_hl_field(0, Var_13, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_13, 3) = ((MR_Box) ((MR_String) "Deleting timestamp for %s\n"));
    MR_hl_field(0, Var_13, 4) = ((MR_Box) (Var_15));
  }
  make__util__debug_make_msg_3_p_0(Globals_5, Var_13, &DebugMsg_9);
  make__util__maybe_write_msg_3_p_0(DebugMsg_9);
  mercury__map__delete_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__module_target_scalar_common_2[0]), ((MR_Box) (TouchedFile_6)), STATE_VARIABLE_Timestamps_0_10, STATE_VARIABLE_Timestamps_11);
}

static void MR_CALL 
make__module_target__update_target_status_4_p_0(
  MR_Word TargetStatus_5,
  MR_Word TargetFile_6,
  MR_Word STATE_VARIABLE_Info_0_11,
  MR_Word * STATE_VARIABLE_Info_12)
{
  MR_Word Dep_8;
  MR_Word DepStatusMap0_9;
  MR_Word DepStatusMap_10;

  {
    Dep_8 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Dep_8, 0) = ((MR_Box) (TargetFile_6));
  }
  DepStatusMap0_9 = make__make_info__make_info_get_dependency_status_1_f_0(STATE_VARIABLE_Info_0_11);
  mercury__version_hash_table__set_4_p_0((MR_Word) (&make__dependencies__make__dependencies__type_ctor_info_dependency_file_0), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_dependency_status_0), ((MR_Box) (Dep_8)), ((MR_Box) (TargetStatus_5)), DepStatusMap0_9, &DepStatusMap_10);
  make__make_info__make_info_set_dependency_status_3_p_0(DepStatusMap_10, STATE_VARIABLE_Info_0_11, STATE_VARIABLE_Info_12);
}

static MR_Box MR_CALL 
make__module_target__invoke_mmc_8_p_0_1(
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

static void MR_CALL 
make__module_target__invoke_mmc_8_p_0(
  MR_Word Globals_9,
  MR_Word ProgressStream_10,
  MR_Word ErrorStream_11,
  MR_Word MaybeArgFileName_12,
  MR_Word Args_13,
  MR_Word * Succeeded_14)
{
  MR_bool succeeded;
  MR_String ProgName_16;
  MR_String MercuryCompiler_18;
  MR_Word QuotedArgs_19;
  MR_String ArgFileName_20;
  MR_Word ArgFileOpenRes_21;
  MR_Word Var_27;

  mercury__io__progname_4_p_0((MR_String) "", &ProgName_16);
  succeeded = (strcmp(ProgName_16, (MR_String) "") == 0);
  if (!(succeeded))
    succeeded = mercury__builtin__semidet_fail_0_p_0();
  if (succeeded)
  {
    MR_Word MaybeMercuryCompiler_17;

    mercury__io__environment__get_environment_var_4_p_0((MR_String) "MERCURY_COMPILER", &MaybeMercuryCompiler_17);
    if ((MaybeMercuryCompiler_17 == (MR_Word) ((MR_Unsigned) 0U)))
      MercuryCompiler_18 = (MR_String) "mmc";
    else
      MercuryCompiler_18 = ((MR_String) ((MR_hl_field(1, MaybeMercuryCompiler_17, (MR_Integer) 0))));
  }
  else
    MercuryCompiler_18 = ProgName_16;
  QuotedArgs_19 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__module_target_scalar_common_2[6]), Args_13);
  if ((MaybeArgFileName_12 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140make.module_target.invoke_mmc\'/8", (MR_String) "argument file not created");
      return;
    }
  else
    ArgFileName_20 = ((MR_String) ((MR_hl_field(1, MaybeArgFileName_12, (MR_Integer) 0))));
  mercury__io__open_output_4_p_0(ArgFileName_20, &ArgFileOpenRes_21);
  if (((MR_tag((MR_Word) ArgFileOpenRes_21)) == (MR_Integer) 1))
  {
    MR_Word Error_25 = ((MR_Word) ((MR_hl_field(1, ArgFileOpenRes_21, (MR_Integer) 0))));
    MR_String ErrorMsg_26;

    *Succeeded_14 = (MR_Integer) 0;
    mercury__io__error_message_2_p_0(Error_25, &ErrorMsg_26);
    mercury__io__write_string_3_p_0((MR_String) "Error opening \140");
    mercury__io__write_string_3_p_0(ArgFileName_20);
    mercury__io__write_string_3_p_0((MR_String) "\' for output: ");
    mercury__io__write_string_3_p_0(ErrorMsg_26);
    mercury__io__write_string_3_p_0((MR_String) "\n");
  }
  else
  {
    MR_Word ArgFileStream_22 = ((MR_Word) ((MR_hl_field(0, ArgFileOpenRes_21, (MR_Integer) 0))));
    MR_String Command_23;
    MR_String Var_42;
    MR_String Var_49;
    MR_String Var_52;
    MR_String Var_71;

    Var_42 = mercury__string__join_list_2_f_0((MR_String) " ", QuotedArgs_19);
    mercury__io__write_string_4_p_0(ArgFileStream_22, (MR_String) "MCFLAGS = ");
    mercury__io__write_string_4_p_0(ArgFileStream_22, Var_42);
    mercury__io__write_string_4_p_0(ArgFileStream_22, (MR_String) "\n");
    mercury__io__close_output_3_p_0(ArgFileStream_22);
    Var_49 = libs__shell_util__quote_shell_cmd_arg_1_f_0(MercuryCompiler_18);
    Var_52 = libs__shell_util__quote_shell_cmd_arg_1_f_0(ArgFileName_20);
    Var_71 = mercury__string__f_43_43_2_f_0((MR_String) " --arg-file ", Var_52);
    Command_23 = mercury__string__f_43_43_2_f_0(Var_49, Var_71);
    parse_tree__module_cmds__invoke_system_command_9_p_0(Globals_9, ProgressStream_10, ErrorStream_11, ErrorStream_11, (MR_Integer) 0, Command_23, Succeeded_14);
  }
  mercury__io__file__remove_file_4_p_0(ArgFileName_20, &Var_27);
}

static void MR_CALL 
make__module_target__compile_foreign_code_file_9_p_0(
  MR_Word Globals_10,
  MR_Word ProgressStream_11,
  MR_Word ErrorStream_12,
  MR_Word PIC_13,
  MR_Word ModuleDepInfo_14,
  MR_Word ForeignCodeFile_15,
  MR_Word * Succeeded_16)
{
  MR_String Var_32 = ((MR_String) ((MR_hl_field(0, ForeignCodeFile_15, (MR_Integer) 2))));
  MR_String Var_33 = ((MR_String) ((MR_hl_field(0, ForeignCodeFile_15, (MR_Integer) 1))));
  MR_Word Var_34 = ((MR_Unsigned) ((MR_hl_field(0, ForeignCodeFile_15, (MR_Integer) 0))) & (MR_Integer) 3);

  switch (Var_34) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      backend_libs__compile_target_code__do_compile_c_file_9_p_0(Globals_10, ProgressStream_11, ErrorStream_12, PIC_13, Var_33, Var_32, Succeeded_16);
      break;
    case (MR_Integer) 1:
      backend_libs__compile_target_code__compile_csharp_file_9_p_0(Globals_10, ProgressStream_11, ErrorStream_12, ModuleDepInfo_14, Var_33, Var_32, Succeeded_16);
      break;
    case (MR_Integer) 2:
      backend_libs__compile_target_code__compile_java_files_8_p_0(Globals_10, ProgressStream_11, ErrorStream_12, Var_33, (MR_Word) ((MR_Unsigned) 0U), Succeeded_16);
      break;
  }
}

static void MR_CALL 
make__module_target__build_object_code_10_p_0(
  MR_Word Globals_11,
  MR_Word ModuleName_12,
  MR_Word Target_13,
  MR_Word PIC_14,
  MR_Word ProgressStream_15,
  MR_Word ErrorStream_16,
  MR_Word _ModuleDepInfo_17,
  MR_Word * Succeeded_18)
{
  make__module_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_111_98_106_101_99_116_95_99_111_100_101_95_95_91_55_93_95_48_10_p_0(Globals_11, ModuleName_12, Target_13, PIC_14, ProgressStream_15, ErrorStream_16, Succeeded_18);
}

static void MR_CALL 
make__module_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_111_98_106_101_99_116_95_99_111_100_101_95_95_91_55_93_95_48_10_p_0(
  MR_Word Globals_11,
  MR_Word ModuleName_12,
  MR_Word Target_13,
  MR_Word PIC_14,
  MR_Word ProgressStream_15,
  MR_Word ErrorStream_16,
  MR_Word * Succeeded_18)
{
  switch (Target_13) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      backend_libs__compile_target_code__compile_c_file_8_p_0(Globals_11, ProgressStream_15, ErrorStream_16, PIC_14, ModuleName_12, Succeeded_18);
      break;
    case (MR_Integer) 1:
      {
        MR_String CsharpFile_21;
        MR_Word Var_38;

        parse_tree__file_names__module_name_to_file_name_8_p_0(Globals_11, (MR_String) "predicate \140make.module_target.build_object_code\'/10", (MR_Integer) 0, (MR_Word) (MR_mkword(3, &make__module_target_scalar_common_1[5])), ModuleName_12, &CsharpFile_21);
        {
          Var_38 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_38, 0) = ((MR_Box) (CsharpFile_21));
          MR_hl_field(1, Var_38, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        backend_libs__compile_target_code__link_9_p_0(Globals_11, ProgressStream_15, ErrorStream_16, (MR_Integer) 4, ModuleName_12, Var_38, Succeeded_18);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_String JavaFile_20;

        parse_tree__file_names__module_name_to_file_name_8_p_0(Globals_11, (MR_String) "predicate \140make.module_target.build_object_code\'/10", (MR_Integer) 0, (MR_Word) (MR_mkword(3, &make__module_target_scalar_common_1[6])), ModuleName_12, &JavaFile_20);
        backend_libs__compile_target_code__compile_java_files_8_p_0(Globals_11, ProgressStream_15, ErrorStream_16, JavaFile_20, (MR_Word) ((MR_Unsigned) 0U), Succeeded_18);
      }
      break;
  }
}

static void MR_CALL 
make__module_target__cleanup_files_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv3_HeadVar__5_5;

  make__util__make_remove_file_7_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_String) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv3_HeadVar__5_5);
  *wrapper_arg_3 = ((MR_Box) (conv3_HeadVar__5_5));
}

static void MR_CALL 
make__module_target__cleanup_files_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__6_6;

  make__util__remove_make_target_file_8_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_HeadVar__6_6);
  *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__6_6));
}

static void MR_CALL 
make__module_target__cleanup_files_8_p_0(
  MR_Word Globals_9,
  MR_Word MaybeArgFileName_10,
  MR_Word TouchedTargetFiles_11,
  MR_Word TouchedFiles_12,
  MR_Word STATE_VARIABLE_MakeInfo_0_17,
  MR_Word * STATE_VARIABLE_MakeInfo_18)
{
  MR_Word Var_21;
  MR_Word STATE_VARIABLE_MakeInfo_22_22;
  MR_Word Var_26;
  MR_Box conv2_STATE_VARIABLE_MakeInfo_22_22;
  MR_Box conv1_STATE_VARIABLE_IO_23_23;
  MR_Box conv5_STATE_VARIABLE_MakeInfo_18;
  MR_Box conv4_STATE_VARIABLE_IO_28_28;

  {
    Var_21 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_21, 0) = ((MR_Box) (&make__module_target_scalar_common_4[3]));
    MR_hl_field(0, Var_21, 1) = ((MR_Box) (make__module_target__cleanup_files_8_p_0_1));
    MR_hl_field(0, Var_21, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(0, Var_21, 3) = ((MR_Box) (Globals_9));
    MR_hl_field(0, Var_21, 4) = ((MR_Box) ((MR_String) "predicate \140make.module_target.cleanup_files\'/8"));
    MR_hl_field(0, Var_21, 5) = ((MR_Box) ((MR_Integer) 73));
  }
  mercury__list__foldl2_6_p_2((MR_Word) (&make__make_info__make__make_info__type_ctor_info_target_file_0), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_21, TouchedTargetFiles_11, ((MR_Box) (STATE_VARIABLE_MakeInfo_0_17)), &conv2_STATE_VARIABLE_MakeInfo_22_22, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_23_23);
  STATE_VARIABLE_MakeInfo_22_22 = ((MR_Word) (conv2_STATE_VARIABLE_MakeInfo_22_22));
  {
    Var_26 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_26, 0) = ((MR_Box) (&make__module_target_scalar_common_6[4]));
    MR_hl_field(0, Var_26, 1) = ((MR_Box) (make__module_target__cleanup_files_8_p_0_2));
    MR_hl_field(0, Var_26, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_26, 3) = ((MR_Box) (Globals_9));
    MR_hl_field(0, Var_26, 4) = ((MR_Box) ((MR_Integer) 73));
  }
  mercury__list__foldl2_6_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_26, TouchedFiles_12, ((MR_Box) (STATE_VARIABLE_MakeInfo_22_22)), &conv5_STATE_VARIABLE_MakeInfo_18, ((MR_Box) ((MR_Integer) 0)), &conv4_STATE_VARIABLE_IO_28_28);
  *STATE_VARIABLE_MakeInfo_18 = ((MR_Word) (conv5_STATE_VARIABLE_MakeInfo_18));
  if (!((MaybeArgFileName_10 == (MR_Word) ((MR_Unsigned) 0U))))
  {
    MR_String ArgFileName2_15 = ((MR_String) ((MR_hl_field(1, MaybeArgFileName_10, (MR_Integer) 0))));
    MR_Word Var_16;

    mercury__io__file__remove_file_4_p_0(ArgFileName2_15, &Var_16);
  }
}

static void MR_CALL 
make__module_target__external_foreign_code_files_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_ForeignCodeFile_12;

  make__module_target__get_fact_table_foreign_code_file_7_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_String) (wrapper_arg_1)), &conv0_ForeignCodeFile_12);
  *wrapper_arg_2 = ((MR_Box) (conv0_ForeignCodeFile_12));
}

void MR_CALL 
make__module_target__external_foreign_code_files_6_p_0(
  MR_Word Globals_7,
  MR_Word PIC_8,
  MR_Word ModuleDepInfo_9,
  MR_Word * ForeignFiles_10)
{
  MR_Word ObjExt_12;
  MR_Word CompilationTarget_14;
  MR_Word Var_13;

  backend_libs__compile_target_code__maybe_pic_object_file_extension_3_p_0(PIC_8, &ObjExt_12, &Var_13);
  libs__globals__get_target_2_p_0(Globals_7, &CompilationTarget_14);
  switch (CompilationTarget_14) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word FactTableFiles_15;
        MR_Word Var_19;
        MR_Word Var_20;
        MR_Word Var_23;
        MR_Box conv1_STATE_VARIABLE_IO_18;

        parse_tree__module_dep_info__module_dep_info_get_fact_tables_2_p_0(ModuleDepInfo_9, &FactTableFiles_15);
        {
          Var_23 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_23, 0) = ((MR_Box) ((MR_Unsigned) 5U));
          MR_hl_field(3, Var_23, 1) = (MR_Box) ((MR_Unsigned) (ObjExt_12));
        }
        {
          Var_19 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_19, 0) = ((MR_Box) (&make__module_target_scalar_common_6[3]));
          MR_hl_field(0, Var_19, 1) = ((MR_Box) (make__module_target__external_foreign_code_files_6_p_0_1));
          MR_hl_field(0, Var_19, 2) = ((MR_Box) ((MR_Integer) 3));
          MR_hl_field(0, Var_19, 3) = ((MR_Box) (Globals_7));
          MR_hl_field(0, Var_19, 4) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(0, Var_19, 5) = ((MR_Box) (Var_23));
        }
        Var_20 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), FactTableFiles_15);
        mercury__list__map_foldl_5_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__module_target__make__module_target__type_ctor_info_foreign_code_file_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_19, Var_20, ForeignFiles_10, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_18);
      }
      break;
    case (MR_Integer) 1:
    case (MR_Integer) 2:
      *ForeignFiles_10 = (MR_Word) ((MR_Unsigned) 0U);
      break;
  }
}

static void MR_CALL 
make__module_target__record_made_target_9_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv9_STATE_VARIABLE_Timestamps_11;

  make__module_target__delete_analysis_registry_timestamps_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_String) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv9_STATE_VARIABLE_Timestamps_11);
  *wrapper_arg_4 = ((MR_Box) (conv9_STATE_VARIABLE_Timestamps_11));
}

static void MR_CALL 
make__module_target__record_made_target_9_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv6_STATE_VARIABLE_Timestamps_11;

  make__module_target__delete_timestamp_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_String) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv6_STATE_VARIABLE_Timestamps_11);
  *wrapper_arg_3 = ((MR_Box) (conv6_STATE_VARIABLE_Timestamps_11));
}

static void MR_CALL 
make__module_target__record_made_target_9_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  MR_Box closure = closure_arg;
  MR_String conv3_HeadVar__5_5;
  MR_Word conv2_HeadVar__7_7;

  make__util__get_file_name_9_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), &conv3_HeadVar__5_5, ((MR_Word) (wrapper_arg_3)), &conv2_HeadVar__7_7);
  *wrapper_arg_2 = ((MR_Box) (conv3_HeadVar__5_5));
  *wrapper_arg_4 = ((MR_Box) (conv2_HeadVar__7_7));
}

static void MR_CALL 
make__module_target__record_made_target_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_Info_12;

  make__module_target__update_target_status_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_Info_12);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Info_12));
}

void MR_CALL 
make__module_target__record_made_target_9_p_0(
  MR_Word Globals_10,
  MR_Word TargetFile_11,
  MR_String TargetFileName_12,
  MR_Word CompilationTask_13,
  MR_Word Succeeded_14,
  MR_Word STATE_VARIABLE_Info_0_19,
  MR_Word * STATE_VARIABLE_Info_20)
{
  MR_bool succeeded;
  MR_Word TouchedTargetFiles_17;
  MR_Word TouchedFiles_18;
  MR_Word STATE_VARIABLE_Info_23_23;
  MR_Word TargetStatus_25;
  MR_Word TouchedTargetFileNames_27;
  MR_Word TargetFileTimestamps0_29;
  MR_Word TargetFileTimestamps_30;
  MR_Word Var_32;
  MR_Word STATE_VARIABLE_Info_32_33;
  MR_Word Var_34;
  MR_Word STATE_VARIABLE_Info_34_35;
  MR_Word STATE_VARIABLE_FileTimestamps_38_38;
  MR_Word Var_39;
  MR_Word STATE_VARIABLE_FileTimestamps_40_40;
  MR_Word STATE_VARIABLE_FileTimestamps_42_42;
  MR_Word STATE_VARIABLE_FileTimestamps_46_45;
  MR_Word STATE_VARIABLE_Info_47_46;
  MR_Box conv1_STATE_VARIABLE_Info_32_33;
  MR_Box conv5_STATE_VARIABLE_Info_34_35;
  MR_Box conv4_STATE_VARIABLE_IO_22;
  MR_Box conv7_STATE_VARIABLE_FileTimestamps_40_40;
  MR_Box conv8_STATE_VARIABLE_FileTimestamps_42_42;
  MR_Word Var_43;

  make__module_target__find_files_maybe_touched_by_task_9_p_0(Globals_10, TargetFile_11, CompilationTask_13, &TouchedTargetFiles_17, &TouchedFiles_18, STATE_VARIABLE_Info_0_19, &STATE_VARIABLE_Info_23_23);
  switch (Succeeded_14) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_String ErrorMsg_26;

        TargetStatus_25 = (MR_Integer) 3;
        make__util__file_error_msg_2_p_0(TargetFileName_12, &ErrorMsg_26);
        make__util__maybe_write_msg_locked_4_p_0(STATE_VARIABLE_Info_23_23, ErrorMsg_26);
      }
      break;
    case (MR_Integer) 1:
      TargetStatus_25 = (MR_Integer) 2;
      break;
  }
  {
    Var_32 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_32, 0) = ((MR_Box) (&make__module_target_scalar_common_11[0]));
    MR_hl_field(0, Var_32, 1) = ((MR_Box) (make__module_target__record_made_target_9_p_0_1));
    MR_hl_field(0, Var_32, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_32, 3) = ((MR_Box) (TargetStatus_25));
  }
  mercury__list__foldl_4_p_0((MR_Word) (&make__make_info__make__make_info__type_ctor_info_target_file_0), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), Var_32, TouchedTargetFiles_17, ((MR_Box) (STATE_VARIABLE_Info_23_23)), &conv1_STATE_VARIABLE_Info_32_33);
  STATE_VARIABLE_Info_32_33 = ((MR_Word) (conv1_STATE_VARIABLE_Info_32_33));
  {
    Var_34 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_34, 0) = ((MR_Box) (&make__module_target_scalar_common_8[1]));
    MR_hl_field(0, Var_34, 1) = ((MR_Box) (make__module_target__record_made_target_9_p_0_2));
    MR_hl_field(0, Var_34, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(0, Var_34, 3) = ((MR_Box) (Globals_10));
    MR_hl_field(0, Var_34, 4) = ((MR_Box) ((MR_String) "predicate \140make.module_target.record_made_target_given_maybe_touched_files\'/10"));
    MR_hl_field(0, Var_34, 5) = ((MR_Box) ((MR_Integer) 1));
  }
  mercury__list__map_foldl2_7_p_2((MR_Word) (&make__make_info__make__make_info__type_ctor_info_target_file_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_34, TouchedTargetFiles_17, &TouchedTargetFileNames_27, ((MR_Box) (STATE_VARIABLE_Info_32_33)), &conv5_STATE_VARIABLE_Info_34_35, ((MR_Box) ((MR_Integer) 0)), &conv4_STATE_VARIABLE_IO_22);
  STATE_VARIABLE_Info_34_35 = ((MR_Word) (conv5_STATE_VARIABLE_Info_34_35));
  STATE_VARIABLE_FileTimestamps_38_38 = make__make_info__make_info_get_file_timestamps_1_f_0(STATE_VARIABLE_Info_34_35);
  {
    Var_39 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_39, 0) = ((MR_Box) (&make__module_target_scalar_common_11[1]));
    MR_hl_field(0, Var_39, 1) = ((MR_Box) (make__module_target__record_made_target_9_p_0_3));
    MR_hl_field(0, Var_39, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_39, 3) = ((MR_Box) (Globals_10));
  }
  mercury__list__foldl_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__module_target_scalar_common_2[1]), Var_39, TouchedTargetFileNames_27, ((MR_Box) (STATE_VARIABLE_FileTimestamps_38_38)), &conv7_STATE_VARIABLE_FileTimestamps_40_40);
  STATE_VARIABLE_FileTimestamps_40_40 = ((MR_Word) (conv7_STATE_VARIABLE_FileTimestamps_40_40));
  mercury__list__foldl_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__module_target_scalar_common_2[1]), Var_39, TouchedFiles_18, ((MR_Box) (STATE_VARIABLE_FileTimestamps_40_40)), &conv8_STATE_VARIABLE_FileTimestamps_42_42);
  STATE_VARIABLE_FileTimestamps_42_42 = ((MR_Word) (conv8_STATE_VARIABLE_FileTimestamps_42_42));
  Var_43 = ((MR_Word) ((MR_hl_field(0, TargetFile_11, (MR_Integer) 1))));
  succeeded = (Var_43 == (MR_Word) ((MR_Unsigned) 28U));
  if (succeeded)
  {
    MR_Word Var_44;
    MR_Box conv10_STATE_VARIABLE_FileTimestamps_46_45;

    {
      Var_44 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_44, 0) = ((MR_Box) (&make__module_target_scalar_common_9[1]));
      MR_hl_field(0, Var_44, 1) = ((MR_Box) (make__module_target__record_made_target_9_p_0_4));
      MR_hl_field(0, Var_44, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_44, 3) = ((MR_Box) (Globals_10));
    }
    mercury__map__foldl_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__module_target_scalar_common_2[0]), (MR_Word) (&make__module_target_scalar_common_2[1]), Var_44, STATE_VARIABLE_FileTimestamps_42_42, ((MR_Box) (STATE_VARIABLE_FileTimestamps_42_42)), &conv10_STATE_VARIABLE_FileTimestamps_46_45);
    STATE_VARIABLE_FileTimestamps_46_45 = ((MR_Word) (conv10_STATE_VARIABLE_FileTimestamps_46_45));
  }
  else
    STATE_VARIABLE_FileTimestamps_46_45 = STATE_VARIABLE_FileTimestamps_42_42;
  make__make_info__make_info_set_file_timestamps_3_p_0(STATE_VARIABLE_FileTimestamps_46_45, STATE_VARIABLE_Info_34_35, &STATE_VARIABLE_Info_47_46);
  TargetFileTimestamps0_29 = make__make_info__make_info_get_target_file_timestamps_1_f_0(STATE_VARIABLE_Info_47_46);
  mercury__version_hash_table__delete_3_p_0((MR_Word) (&make__make_info__make__make_info__type_ctor_info_target_file_0), (MR_Word) (&libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0), ((MR_Box) (TargetFile_11)), TargetFileTimestamps0_29, &TargetFileTimestamps_30);
  make__make_info__make_info_set_target_file_timestamps_3_p_0(TargetFileTimestamps_30, STATE_VARIABLE_Info_47_46, STATE_VARIABLE_Info_20);
}

void MR_CALL 
make__module_target__make_module_target_8_p_0(
  MR_Word ExtraOptions_9,
  MR_Word Globals_10,
  MR_Word Dep_11,
  MR_Word * Succeeded_12,
  MR_Word STATE_VARIABLE_Info_0_34,
  MR_Word * STATE_VARIABLE_Info_35)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word Status_17;
    MR_Tuple Var_38;
    MR_Word STATE_VARIABLE_Info_39_39;

    // setup for model_det tailcalls optimized into a loop
    ;
    make__dependencies__get_dependency_status_7_p_0(Globals_10, Dep_11, &Var_38, STATE_VARIABLE_Info_0_34, &STATE_VARIABLE_Info_39_39);
    Status_17 = ((MR_Word) ((MR_hl_field(0, Var_38, (MR_Integer) 2))));
    switch (Status_17) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          if (((MR_tag((MR_Word) Dep_11)) == (MR_Integer) 1))
            *Succeeded_12 = (MR_Integer) 1;
          else
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140make.module_target.make_module_target\'/8", (MR_String) "target being built, circular dependencies\?");
              return;
            }
          *STATE_VARIABLE_Info_35 = STATE_VARIABLE_Info_39_39;
        }
        break;
      case (MR_Integer) 3:
        {
          *Succeeded_12 = (MR_Integer) 0;
          *STATE_VARIABLE_Info_35 = STATE_VARIABLE_Info_39_39;
        }
        break;
      case (MR_Integer) 0:
        if (((MR_tag((MR_Word) Dep_11)) == (MR_Integer) 1))
        {
          *Succeeded_12 = (MR_Integer) 1;
          *STATE_VARIABLE_Info_35 = STATE_VARIABLE_Info_39_39;
        }
        else
        {
          MR_Word TargetFile_19 = ((MR_Word) ((MR_hl_field(0, Dep_11, (MR_Integer) 0))));
          MR_Word ModuleName_20 = ((MR_Word) ((MR_hl_field(0, TargetFile_19, (MR_Integer) 0))));
          MR_Word TargetType_21 = ((MR_Word) ((MR_hl_field(0, TargetFile_19, (MR_Integer) 1))));
          MR_Word MaybeModuleDepInfo_22;
          MR_Word STATE_VARIABLE_Info_41_41;

          make__module_dep_file__get_module_dependencies_7_p_0(Globals_10, ModuleName_20, &MaybeModuleDepInfo_22, STATE_VARIABLE_Info_39_39, &STATE_VARIABLE_Info_41_41);
          if ((MaybeModuleDepInfo_22 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            MR_Word DepStatusMap0_23;
            MR_Word DepStatusMap_24;

            *Succeeded_12 = (MR_Integer) 0;
            DepStatusMap0_23 = make__make_info__make_info_get_dependency_status_1_f_0(STATE_VARIABLE_Info_41_41);
            mercury__version_hash_table__set_4_p_0((MR_Word) (&make__dependencies__make__dependencies__type_ctor_info_dependency_file_0), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_dependency_status_0), ((MR_Box) (Dep_11)), ((MR_Box) ((MR_Integer) 3)), DepStatusMap0_23, &DepStatusMap_24);
            make__make_info__make_info_set_dependency_status_3_p_0(DepStatusMap_24, STATE_VARIABLE_Info_41_41, STATE_VARIABLE_Info_35);
          }
          else
          {
            MR_Word ModuleDepInfo_25 = ((MR_Word) ((MR_hl_field(1, MaybeModuleDepInfo_22, (MR_Integer) 0))));
            MR_Word CompilationTaskAndOptions_26;
            MR_Word SourceFileModuleName_27;
            MR_Word CompilationTaskType_28;

            switch (MR_tag((MR_Word) TargetType_21)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(TargetType_21)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                  case (MR_Integer) 8:
                    {
                      mercury__require__unexpected_2_p_0((MR_String) "predicate \140make.module_target.get_compilation_task_and_options\'/2", (MR_String) "compilation_task");
                      return;
                    }
                    break;
                  case (MR_Integer) 1:
                    CompilationTaskAndOptions_26 = (MR_Word) (&make__module_target_scalar_common_1[14]);
                    break;
                  case (MR_Integer) 2:
                    CompilationTaskAndOptions_26 = (MR_Word) (&make__module_target_scalar_common_1[16]);
                    break;
                  case (MR_Integer) 3:
                  case (MR_Integer) 4:
                    CompilationTaskAndOptions_26 = (MR_Word) (&make__module_target_scalar_common_1[18]);
                    break;
                  case (MR_Integer) 5:
                    CompilationTaskAndOptions_26 = (MR_Word) (&make__module_target_scalar_common_1[20]);
                    break;
                  case (MR_Integer) 6:
                    CompilationTaskAndOptions_26 = (MR_Word) (&make__module_target_scalar_common_1[25]);
                    break;
                  case (MR_Integer) 7:
                    CompilationTaskAndOptions_26 = (MR_Word) (&make__module_target_scalar_common_1[8]);
                    break;
                  case (MR_Integer) 9:
                    CompilationTaskAndOptions_26 = (MR_Word) (&make__module_target_scalar_common_1[10]);
                    break;
                  case (MR_Integer) 10:
                    CompilationTaskAndOptions_26 = (MR_Word) (&make__module_target_scalar_common_1[12]);
                    break;
                  case (MR_Integer) 11:
                    CompilationTaskAndOptions_26 = (MR_Word) (&make__module_target_scalar_common_1[23]);
                    break;
                  case (MR_Integer) 12:
                    CompilationTaskAndOptions_26 = (MR_Word) (&make__module_target_scalar_common_1[21]);
                    break;
                  case (MR_Integer) 13:
                    CompilationTaskAndOptions_26 = (MR_Word) (&make__module_target_scalar_common_1[27]);
                    break;
                }
                break;
              case (MR_Integer) 1:
                CompilationTaskAndOptions_26 = (MR_Word) (&make__module_target_scalar_common_1[10]);
                break;
              case (MR_Integer) 2:
                {
                  MR_Word PIC_56 = ((MR_Unsigned) ((MR_hl_field(2, TargetType_21, (MR_Integer) 0))) & (MR_Integer) 1);
                  MR_Word Var_64;

                  {
                    Var_64 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_64, 0) = (MR_Box) ((MR_Unsigned) (PIC_56));
                  }
                  {
                    CompilationTaskAndOptions_26 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, CompilationTaskAndOptions_26, 0) = ((MR_Box) (Var_64));
                    MR_hl_field(0, CompilationTaskAndOptions_26, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                }
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(3, TargetType_21, (MR_Integer) 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      MR_Word Var_66;
                      MR_Unsigned packed_word_1 = (MR_Unsigned) ((MR_hl_field(3, TargetType_21, (MR_Integer) 1)));

                      {
                        Var_66 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(2, Var_66, 0) = (MR_Box) (packed_word_1);
                      }
                      {
                        CompilationTaskAndOptions_26 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(0, CompilationTaskAndOptions_26, 0) = ((MR_Box) (Var_66));
                        MR_hl_field(0, CompilationTaskAndOptions_26, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                      }
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_String FactTable_58 = ((MR_String) ((MR_hl_field(3, TargetType_21, (MR_Integer) 2))));
                      MR_Word Var_68;
                      MR_Word PIC_71 = ((MR_Unsigned) ((MR_hl_field(3, TargetType_21, (MR_Integer) 1))) & (MR_Integer) 1);

                      {
                        Var_68 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(3, Var_68, 0) = (MR_Box) ((MR_Unsigned) (PIC_71));
                        MR_hl_field(3, Var_68, 1) = ((MR_Box) (FactTable_58));
                      }
                      {
                        CompilationTaskAndOptions_26 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(0, CompilationTaskAndOptions_26, 0) = ((MR_Box) (Var_68));
                        MR_hl_field(0, CompilationTaskAndOptions_26, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                      }
                    }
                    break;
                }
                break;
            }
            parse_tree__module_dep_info__module_dep_info_get_source_file_module_name_2_p_0(ModuleDepInfo_25, &SourceFileModuleName_27);
            CompilationTaskType_28 = ((MR_Word) ((MR_hl_field(0, CompilationTaskAndOptions_26, (MR_Integer) 0))));
            succeeded = ((MR_tag((MR_Word) CompilationTaskType_28)) == (MR_Integer) 0);
            if (succeeded)
            {
              succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(SourceFileModuleName_27, ModuleName_20);
              succeeded = !(succeeded);
            }
            if (succeeded)
            {
              MR_Word NestedTargetFile_31;
              MR_Word Var_45;
              MR_Word next_value_of_Dep_11;
              MR_Word next_value_of_STATE_VARIABLE_Info_0_34;

              {
                NestedTargetFile_31 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, NestedTargetFile_31, 0) = ((MR_Box) (SourceFileModuleName_27));
                MR_hl_field(0, NestedTargetFile_31, 1) = ((MR_Box) (TargetType_21));
              }
              {
                Var_45 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_45, 0) = ((MR_Box) (NestedTargetFile_31));
              }
              // direct tailcall eliminated
              ;
              next_value_of_Dep_11 = Var_45;
              next_value_of_STATE_VARIABLE_Info_0_34 = STATE_VARIABLE_Info_41_41;
              Dep_11 = next_value_of_Dep_11;
              STATE_VARIABLE_Info_0_34 = next_value_of_STATE_VARIABLE_Info_0_34;
              continue;
            }
            else
              make__module_target__make_module_target_file_main_path_10_p_0(ExtraOptions_9, Globals_10, TargetFile_19, CompilationTaskAndOptions_26, ModuleDepInfo_25, Succeeded_12, STATE_VARIABLE_Info_41_41, STATE_VARIABLE_Info_35);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          *Succeeded_12 = (MR_Integer) 1;
          *STATE_VARIABLE_Info_35 = STATE_VARIABLE_Info_39_39;
        }
        break;
    }
    break;
  }
}

static void MR_CALL 
make__module_target__make_module_target_file_main_path_10_p_0_9(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv13_STATE_VARIABLE_Info_12;

  make__module_target__update_target_status_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv13_STATE_VARIABLE_Info_12);
  *wrapper_arg_3 = ((MR_Box) (conv13_STATE_VARIABLE_Info_12));
}

static void MR_CALL 
make__module_target__make_module_target_file_main_path_10_p_0_8(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1)
{
  MR_Box closure = closure_arg;
  MR_String conv12_HeadVar__3_3;

  mercury__string__format_3_p_0(((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), &conv12_HeadVar__3_3);
  *wrapper_arg_1 = ((MR_Box) (conv12_HeadVar__3_3));
}

static void MR_CALL 
make__module_target__make_module_target_file_main_path_10_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv10_STATE_VARIABLE_Info_12;

  make__module_target__update_target_status_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv10_STATE_VARIABLE_Info_12);
  *wrapper_arg_3 = ((MR_Box) (conv10_STATE_VARIABLE_Info_12));
}

static void MR_CALL 
make__module_target__make_module_target_file_main_path_10_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv8_STATE_VARIABLE_Info_12;

  make__module_target__update_target_status_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv8_STATE_VARIABLE_Info_12);
  *wrapper_arg_3 = ((MR_Box) (conv8_STATE_VARIABLE_Info_12));
}

static void MR_CALL 
make__module_target__make_module_target_file_main_path_10_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv6_STATE_VARIABLE_Info_12;

  make__module_target__update_target_status_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv6_STATE_VARIABLE_Info_12);
  *wrapper_arg_3 = ((MR_Box) (conv6_STATE_VARIABLE_Info_12));
}

static void MR_CALL 
make__module_target__make_module_target_file_main_path_10_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  make__module_target__IntroducedFrom__pred__make_module_target_file_main_path__248__1_3_p_0(((MR_String) (wrapper_arg_1)));
}

static void MR_CALL 
make__module_target__make_module_target_file_main_path_10_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_String conv3_HeadVar__3_3;

  make__util__dependency_file_to_file_name_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv3_HeadVar__3_3);
  *wrapper_arg_2 = ((MR_Box) (conv3_HeadVar__3_3));
}

static void MR_CALL 
make__module_target__make_module_target_file_main_path_10_p_0_2(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1)
{
  MR_Box closure = closure_arg;
  MR_String conv2_HeadVar__3_3;

  mercury__string__format_3_p_0(((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), &conv2_HeadVar__3_3);
  *wrapper_arg_1 = ((MR_Box) (conv2_HeadVar__3_3));
}

static void MR_CALL 
make__module_target__make_module_target_file_main_path_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_Info_12;

  make__module_target__update_target_status_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_Info_12);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Info_12));
}

static void MR_CALL 
make__module_target__make_module_target_file_main_path_10_p_0(
  MR_Word ExtraOptions_11,
  MR_Word Globals_12,
  MR_Word TargetFile_13,
  MR_Word CompilationTaskAndOptions_14,
  MR_Word ModuleDepInfo_15,
  MR_Word * Succeeded_16,
  MR_Word STATE_VARIABLE_Info_0_54,
  MR_Word * STATE_VARIABLE_Info_55)
{
  MR_bool succeeded;
  MR_Word ModuleName_19 = ((MR_Word) ((MR_hl_field(0, TargetFile_13, (MR_Integer) 0))));
  MR_Word TargetType_20 = ((MR_Word) ((MR_hl_field(0, TargetFile_13, (MR_Integer) 1))));
  MR_String TargetFileName_21;
  MR_Word CompilationTaskType_22;
  MR_Word TouchedTargetFiles_24;
  MR_Word TouchedFiles_25;
  MR_String CheckingMsg_26;
  MR_Word ModulesToCheck_30;
  MR_Word ModuleIndexesToCheckSet_31;
  MR_Word ModuleIndexesToCheck_32;
  MR_Word KeepGoing_33;
  MR_Word DepsSucceeded_34;
  MR_Word DepFiles0_35;
  MR_Word DepFilesSet0_36;
  MR_Word DepFilesSet_38;
  MR_Word DepFilesToMake_39;
  MR_Word DebugMake_40;
  MR_Word STATE_VARIABLE_Info_60_60;
  MR_Word STATE_VARIABLE_Info_63_63;
  MR_Word Var_65;
  MR_Word Var_67;
  MR_Word Var_68;
  MR_Word STATE_VARIABLE_Info_72_72;
  MR_Word Var_74;
  MR_Word STATE_VARIABLE_Info_75_75;
  MR_Box conv1_STATE_VARIABLE_Info_63_63;

  make__util__get_make_target_file_name_6_p_0(Globals_12, (MR_String) "predicate \140make.module_target.make_module_target_file_main_path\'/10", TargetFile_13, &TargetFileName_21);
  CompilationTaskType_22 = ((MR_Word) ((MR_hl_field(0, CompilationTaskAndOptions_14, (MR_Integer) 0))));
  make__module_target__find_files_maybe_touched_by_task_9_p_0(Globals_12, TargetFile_13, CompilationTaskType_22, &TouchedTargetFiles_24, &TouchedFiles_25, STATE_VARIABLE_Info_0_54, &STATE_VARIABLE_Info_60_60);
  mercury__list__foldl_4_p_0((MR_Word) (&make__make_info__make__make_info__type_ctor_info_target_file_0), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), (MR_Word) (&make__module_target_scalar_common_13[0]), TouchedTargetFiles_24, ((MR_Box) (STATE_VARIABLE_Info_60_60)), &conv1_STATE_VARIABLE_Info_63_63);
  STATE_VARIABLE_Info_63_63 = ((MR_Word) (conv1_STATE_VARIABLE_Info_63_63));
  {
    Var_68 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_68, 0) = ((MR_Box) ((MR_Unsigned) 8U));
    MR_hl_field(3, Var_68, 1) = ((MR_Box) (TargetFileName_21));
  }
  {
    Var_67 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_67, 0) = ((MR_Box) (Var_68));
    MR_hl_field(1, Var_67, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_65 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_65, 0) = ((MR_Box) (&make__module_target_scalar_common_5[0]));
    MR_hl_field(0, Var_65, 1) = ((MR_Box) (make__module_target__make_module_target_file_main_path_10_p_0_2));
    MR_hl_field(0, Var_65, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_65, 3) = ((MR_Box) ((MR_String) "%s: checking dependencies\n"));
    MR_hl_field(0, Var_65, 4) = ((MR_Box) (Var_67));
  }
  make__util__debug_make_msg_3_p_0(Globals_12, Var_65, &CheckingMsg_26);
  make__util__maybe_write_msg_3_p_0(CheckingMsg_26);
  succeeded = ((MR_tag((MR_Word) CompilationTaskType_22)) == (MR_Integer) 0);
  if (succeeded)
  {
    MR_Word MaybeTopModule_28;
    MR_Word NestedSubModules_29;

    parse_tree__module_dep_info__module_dep_info_get_maybe_top_module_2_p_0(ModuleDepInfo_15, &MaybeTopModule_28);
    NestedSubModules_29 = parse_tree__module_baggage__get_nested_children_list_of_top_module_1_f_0(MaybeTopModule_28);
    {
      ModulesToCheck_30 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, ModulesToCheck_30, 0) = ((MR_Box) (ModuleName_19));
      MR_hl_field(1, ModulesToCheck_30, 1) = ((MR_Box) (NestedSubModules_29));
    }
  }
  else
    {
      ModulesToCheck_30 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, ModulesToCheck_30, 0) = ((MR_Box) (ModuleName_19));
      MR_hl_field(1, ModulesToCheck_30, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
  make__deps_set__module_names_to_index_set_4_p_0(ModulesToCheck_30, &ModuleIndexesToCheckSet_31, STATE_VARIABLE_Info_63_63, &STATE_VARIABLE_Info_72_72);
  ModuleIndexesToCheck_32 = mercury__sparse_bitset__to_sorted_list_1_f_0((MR_Word) (&make__module_target_scalar_common_1[0]), ModuleIndexesToCheckSet_31);
  KeepGoing_33 = make__make_info__make_info_get_keep_going_1_f_0(STATE_VARIABLE_Info_72_72);
  Var_74 = mercury__sparse_bitset__init_0_f_0((MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_dependency_file_index_0));
  make__dependencies__find_target_dependencies_of_modules_12_p_0(KeepGoing_33, Globals_12, TargetType_20, ModuleIndexesToCheck_32, (MR_Integer) 1, &DepsSucceeded_34, Var_74, &DepFiles0_35, STATE_VARIABLE_Info_72_72, &STATE_VARIABLE_Info_75_75);
  make__deps_set__dependency_file_index_set_to_plain_set_3_p_0(STATE_VARIABLE_Info_75_75, DepFiles0_35, &DepFilesSet0_36);
  succeeded = (TargetType_20 == (MR_Word) ((MR_Unsigned) 8U));
  if (succeeded)
  {
    MR_Word PrivateInts_37;

    PrivateInts_37 = make__util__make_dependency_list_2_f_0(ModulesToCheck_30, (MR_Word) ((MR_Unsigned) 8U));
    mercury__set__delete_list_3_p_0((MR_Word) (&make__dependencies__make__dependencies__type_ctor_info_dependency_file_0), PrivateInts_37, DepFilesSet0_36, &DepFilesSet_38);
  }
  else
    DepFilesSet_38 = DepFilesSet0_36;
  DepFilesToMake_39 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&make__dependencies__make__dependencies__type_ctor_info_dependency_file_0), DepFilesSet_38);
  libs__globals__lookup_bool_option_3_p_0(Globals_12, (MR_Integer) 105, &DebugMake_40);
  switch (DebugMake_40) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word DepFilesPlainSet_41;
        MR_Word DepFileNames_42;
        MR_Word Var_79;
        MR_Word Var_80;
        MR_Box conv4_STATE_VARIABLE_IO_81_81;
        MR_Box conv5_STATE_VARIABLE_IO_94_94;

        make__deps_set__dependency_file_index_set_to_plain_set_3_p_0(STATE_VARIABLE_Info_75_75, DepFiles0_35, &DepFilesPlainSet_41);
        {
          Var_79 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_79, 0) = ((MR_Box) (&make__module_target_scalar_common_9[2]));
          MR_hl_field(0, Var_79, 1) = ((MR_Box) (make__module_target__make_module_target_file_main_path_10_p_0_3));
          MR_hl_field(0, Var_79, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(0, Var_79, 3) = ((MR_Box) (Globals_12));
        }
        Var_80 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&make__dependencies__make__dependencies__type_ctor_info_dependency_file_0), DepFilesPlainSet_41);
        mercury__list__map_foldl_5_p_2((MR_Word) (&make__dependencies__make__dependencies__type_ctor_info_dependency_file_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_79, Var_80, &DepFileNames_42, ((MR_Box) ((MR_Integer) 0)), &conv4_STATE_VARIABLE_IO_81_81);
        mercury__io__write_string_3_p_0(TargetFileName_21);
        mercury__io__write_string_3_p_0((MR_String) ": dependencies:\n");
        mercury__list__foldl_4_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), (MR_Word) (&make__module_target_scalar_common_2[5]), DepFileNames_42, ((MR_Box) ((MR_Integer) 0)), &conv5_STATE_VARIABLE_IO_94_94);
      }
      break;
  }
  succeeded = (DepsSucceeded_34 == (MR_Integer) 0);
  if (succeeded)
    succeeded = (KeepGoing_33 == (MR_Integer) 0);
  if (succeeded)
  {
    MR_Box conv7_STATE_VARIABLE_Info_55;

    *Succeeded_16 = (MR_Integer) 0;
    mercury__list__foldl_4_p_0((MR_Word) (&make__make_info__make__make_info__type_ctor_info_target_file_0), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), (MR_Word) (&make__module_target_scalar_common_13[1]), TouchedTargetFiles_24, ((MR_Box) (STATE_VARIABLE_Info_75_75)), &conv7_STATE_VARIABLE_Info_55);
    *STATE_VARIABLE_Info_55 = ((MR_Word) (conv7_STATE_VARIABLE_Info_55));
  }
  else
  {
    MR_Word DepsResult0_48;
    MR_Word STATE_VARIABLE_Info_95_153;

    make__module_target__make_dependency_files_11_p_0(Globals_12, TargetFile_13, TargetFileName_21, DepFilesToMake_39, TouchedTargetFiles_24, TouchedFiles_25, &DepsResult0_48, STATE_VARIABLE_Info_75_75, &STATE_VARIABLE_Info_95_153);
    switch (DepsSucceeded_34) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Box conv9_STATE_VARIABLE_Info_55;

          *Succeeded_16 = (MR_Integer) 0;
          mercury__list__foldl_4_p_0((MR_Word) (&make__make_info__make__make_info__type_ctor_info_target_file_0), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), (MR_Word) (&make__module_target_scalar_common_13[2]), TouchedTargetFiles_24, ((MR_Box) (STATE_VARIABLE_Info_95_153)), &conv9_STATE_VARIABLE_Info_55);
          *STATE_VARIABLE_Info_55 = ((MR_Word) (conv9_STATE_VARIABLE_Info_55));
        }
        break;
      case (MR_Integer) 1:
        switch (DepsResult0_48) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 2:
            {
              MR_Box conv11_STATE_VARIABLE_Info_55;

              *Succeeded_16 = (MR_Integer) 0;
              mercury__list__foldl_4_p_0((MR_Word) (&make__make_info__make__make_info__type_ctor_info_target_file_0), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), (MR_Word) (&make__module_target_scalar_common_13[3]), TouchedTargetFiles_24, ((MR_Box) (STATE_VARIABLE_Info_95_153)), &conv11_STATE_VARIABLE_Info_55);
              *STATE_VARIABLE_Info_55 = ((MR_Word) (conv11_STATE_VARIABLE_Info_55));
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Targets0_49;
              MR_Word Targets_50;
              MR_Word Var_100;
              MR_Word Var_101;
              MR_Word STATE_VARIABLE_Info_102_102;

              Targets0_49 = make__make_info__make_info_get_command_line_targets_1_f_0(STATE_VARIABLE_Info_95_153);
              {
                Var_101 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_101, 0) = ((MR_Box) (TargetType_20));
              }
              {
                Var_100 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_100, 0) = ((MR_Box) (ModuleName_19));
                MR_hl_field(0, Var_100, 1) = ((MR_Box) (Var_101));
              }
              mercury__set__delete_3_p_0((MR_Word) (&make__make_info__make__make_info__type_ctor_info_top_target_file_0), ((MR_Box) (Var_100)), Targets0_49, &Targets_50);
              make__make_info__make_info_set_command_line_targets_3_p_0(Targets_50, STATE_VARIABLE_Info_95_153, &STATE_VARIABLE_Info_102_102);
              make__module_target__build_target_12_p_0(Globals_12, CompilationTaskAndOptions_14, TargetFile_13, ModuleDepInfo_15, TouchedTargetFiles_24, TouchedFiles_25, ExtraOptions_11, Succeeded_16, STATE_VARIABLE_Info_102_102, STATE_VARIABLE_Info_55);
            }
            break;
          case (MR_Integer) 0:
            {
              MR_Word TopTargetFile_51;
              MR_String UpToDateMsg_52;
              MR_String DebugMsg_53;
              MR_Word Var_105;
              MR_Word STATE_VARIABLE_Info_106_106;
              MR_Word Var_108;
              MR_Word Var_115;
              MR_Box conv14_STATE_VARIABLE_Info_55;

              {
                Var_105 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_105, 0) = ((MR_Box) (TargetType_20));
              }
              {
                TopTargetFile_51 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, TopTargetFile_51, 0) = ((MR_Box) (ModuleName_19));
                MR_hl_field(0, TopTargetFile_51, 1) = ((MR_Box) (Var_105));
              }
              make__util__maybe_warn_up_to_date_target_msg_6_p_0(Globals_12, TopTargetFile_51, TargetFileName_21, STATE_VARIABLE_Info_95_153, &STATE_VARIABLE_Info_106_106, &UpToDateMsg_52);
              make__util__maybe_write_msg_3_p_0(UpToDateMsg_52);
              {
                Var_108 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_108, 0) = ((MR_Box) (&make__module_target_scalar_common_5[0]));
                MR_hl_field(0, Var_108, 1) = ((MR_Box) (make__module_target__make_module_target_file_main_path_10_p_0_8));
                MR_hl_field(0, Var_108, 2) = ((MR_Box) ((MR_Integer) 2));
                MR_hl_field(0, Var_108, 3) = ((MR_Box) ((MR_String) "%s: up to date\n"));
                MR_hl_field(0, Var_108, 4) = ((MR_Box) (Var_67));
              }
              make__util__debug_make_msg_3_p_0(Globals_12, Var_108, &DebugMsg_53);
              make__util__maybe_write_msg_3_p_0(DebugMsg_53);
              *Succeeded_16 = (MR_Integer) 1;
              {
                Var_115 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_115, 0) = ((MR_Box) (TargetFile_13));
                MR_hl_field(1, Var_115, 1) = ((MR_Box) (TouchedTargetFiles_24));
              }
              mercury__list__foldl_4_p_0((MR_Word) (&make__make_info__make__make_info__type_ctor_info_target_file_0), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), (MR_Word) (&make__module_target_scalar_common_13[4]), Var_115, ((MR_Box) (STATE_VARIABLE_Info_106_106)), &conv14_STATE_VARIABLE_Info_55);
              *STATE_VARIABLE_Info_55 = ((MR_Word) (conv14_STATE_VARIABLE_Info_55));
            }
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
make__module_target__find_files_maybe_touched_by_task_9_p_0(
  MR_Word Globals_10,
  MR_Word TargetFile_11,
  MR_Word Task_12,
  MR_Word * TouchedTargetFiles_13,
  MR_Word * TouchedFileNames_14,
  MR_Word STATE_VARIABLE_Info_0_28,
  MR_Word * STATE_VARIABLE_Info_29)
{
  switch (MR_tag((MR_Word) Task_12)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word ModuleTask_17 = ((MR_Unsigned) ((MR_hl_field(0, Task_12, (MR_Integer) 0))) & (MR_Integer) 7);

        make__module_target__find_files_maybe_touched_by_process_module_9_p_0(Globals_10, TargetFile_11, ModuleTask_17, TouchedTargetFiles_13, TouchedFileNames_14, STATE_VARIABLE_Info_0_28, STATE_VARIABLE_Info_29);
      }
      break;
    case (MR_Integer) 1:
      {
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *TouchedTargetFiles_13 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (TargetFile_11));
          MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        *TouchedFileNames_14 = (MR_Word) ((MR_Unsigned) 0U);
        *STATE_VARIABLE_Info_29 = STATE_VARIABLE_Info_0_28;
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word PIC_19 = ((((MR_Unsigned) ((MR_hl_field(2, Task_12, (MR_Integer) 0))) >> 2)) & (MR_Integer) 1);
        MR_Word Lang_20 = ((MR_Unsigned) ((MR_hl_field(2, Task_12, (MR_Integer) 0))) & (MR_Integer) 3);
        MR_Word ModuleName_21;
        MR_String ForeignObjectFile_24;
        MR_Word ForeignModName_53;
        MR_Word SrcExt_54;
        MR_Word ObjExt_55;
        MR_Word Var_63;
        MR_Word CompilationTarget_64;
        MR_String SrcFileName_56;

        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *TouchedTargetFiles_13 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (TargetFile_11));
          MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        ModuleName_21 = ((MR_Word) ((MR_hl_field(0, TargetFile_11, (MR_Integer) 0))));
        parse_tree__prog_foreign__foreign_language_module_name_3_p_0(ModuleName_21, Lang_20, &ForeignModName_53);
        parse_tree__prog_foreign__foreign_language_file_extension_2_p_0(Lang_20, &SrcExt_54);
        libs__globals__get_target_2_p_0(Globals_10, &CompilationTarget_64);
        switch (CompilationTarget_64) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Var_65;

              backend_libs__compile_target_code__maybe_pic_object_file_extension_3_p_0(PIC_19, &ObjExt_55, &Var_65);
            }
            break;
          case (MR_Integer) 1:
            {
              mercury__require__sorry_2_p_0((MR_String) "predicate \140make.module_target.get_object_extension\'/3", (MR_String) "object extension for csharp");
              return;
            }
            break;
          case (MR_Integer) 2:
            {
              mercury__require__sorry_2_p_0((MR_String) "predicate \140make.module_target.get_object_extension\'/3", (MR_String) "object extension for java");
              return;
            }
            break;
        }
        parse_tree__file_names__module_name_to_file_name_8_p_0(Globals_10, (MR_String) "predicate \140make.module_target.get_foreign_code_file\'/7", (MR_Integer) 0, SrcExt_54, ForeignModName_53, &SrcFileName_56);
        {
          Var_63 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_63, 0) = ((MR_Box) ((MR_Unsigned) 5U));
          MR_hl_field(3, Var_63, 1) = (MR_Box) ((MR_Unsigned) (ObjExt_55));
        }
        parse_tree__file_names__module_name_to_file_name_8_p_0(Globals_10, (MR_String) "predicate \140make.module_target.get_foreign_code_file\'/7", (MR_Integer) 0, Var_63, ForeignModName_53, &ForeignObjectFile_24);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *TouchedFileNames_14 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (ForeignObjectFile_24));
          MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        *STATE_VARIABLE_Info_29 = STATE_VARIABLE_Info_0_28;
      }
      break;
    case (MR_Integer) 3:
      {
        MR_String FactTableName_25 = ((MR_String) ((MR_hl_field(3, Task_12, (MR_Integer) 1))));
        MR_Word ObjExt_26;
        MR_String FactTableObjectFile_27;
        MR_Word Var_41;
        MR_Word PIC_44 = ((MR_Unsigned) ((MR_hl_field(3, Task_12, (MR_Integer) 0))) & (MR_Integer) 1);
        MR_Word CompilationTarget_47;

        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *TouchedTargetFiles_13 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (TargetFile_11));
          MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        libs__globals__get_target_2_p_0(Globals_10, &CompilationTarget_47);
        switch (CompilationTarget_47) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Var_48;

              backend_libs__compile_target_code__maybe_pic_object_file_extension_3_p_0(PIC_44, &ObjExt_26, &Var_48);
            }
            break;
          case (MR_Integer) 1:
            {
              mercury__require__sorry_2_p_0((MR_String) "predicate \140make.module_target.get_object_extension\'/3", (MR_String) "object extension for csharp");
              return;
            }
            break;
          case (MR_Integer) 2:
            {
              mercury__require__sorry_2_p_0((MR_String) "predicate \140make.module_target.get_object_extension\'/3", (MR_String) "object extension for java");
              return;
            }
            break;
        }
        {
          Var_41 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_41, 0) = ((MR_Box) ((MR_Unsigned) 5U));
          MR_hl_field(3, Var_41, 1) = (MR_Box) ((MR_Unsigned) (ObjExt_26));
        }
        parse_tree__file_names__fact_table_file_name_8_p_0(Globals_10, (MR_String) "predicate \140make.module_target.find_files_maybe_touched_by_task\'/9", (MR_Integer) 0, Var_41, FactTableName_25, &FactTableObjectFile_27);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *TouchedFileNames_14 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (FactTableObjectFile_27));
          MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        *STATE_VARIABLE_Info_29 = STATE_VARIABLE_Info_0_28;
      }
      break;
  }
}

static void MR_CALL 
make__module_target__find_files_maybe_touched_by_process_module_9_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv8_STATE_VARIABLE_TimestampFileNames_16;

  make__module_target__gather_target_file_timestamp_file_names_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv8_STATE_VARIABLE_TimestampFileNames_16);
  *wrapper_arg_3 = ((MR_Box) (conv8_STATE_VARIABLE_TimestampFileNames_16));
}

static MR_Box MR_CALL 
make__module_target__find_files_maybe_touched_by_process_module_9_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv7_LambdaHeadVar__2_61;

  conv7_LambdaHeadVar__2_61 = make__module_target__IntroducedFrom__func__find_files_maybe_touched_by_process_module__1093__1_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv7_LambdaHeadVar__2_61));
  return wrapper_arg_2;
}

static void MR_CALL 
make__module_target__find_files_maybe_touched_by_process_module_9_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv5_ForeignFiles_10;

  make__module_target__external_foreign_code_files_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv5_ForeignFiles_10);
  *wrapper_arg_2 = ((MR_Box) (conv5_ForeignFiles_10));
}

static MR_bool MR_CALL 
make__module_target__find_files_maybe_touched_by_process_module_9_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_Word conv4_LambdaHeadVar__2_54;

  succeeded = make__module_target__IntroducedFrom__pred__find_files_maybe_touched_by_process_module__1072__1_2_p_0(((MR_Word) (wrapper_arg_1)), &conv4_LambdaHeadVar__2_54);
  if (succeeded)
  {
    *wrapper_arg_2 = ((MR_Box) (conv4_LambdaHeadVar__2_54));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static void MR_CALL 
make__module_target__find_files_maybe_touched_by_process_module_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_HeadVar__3_3;
  MR_Word conv0_HeadVar__5_5;

  make__module_dep_file__get_module_dependencies_7_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv1_HeadVar__3_3, ((MR_Word) (wrapper_arg_3)), &conv0_HeadVar__5_5);
  *wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__3_3));
  *wrapper_arg_4 = ((MR_Box) (conv0_HeadVar__5_5));
}

static void MR_CALL 
make__module_target__find_files_maybe_touched_by_process_module_9_p_0(
  MR_Word Globals_10,
  MR_Word TargetFile_11,
  MR_Word Task_12,
  MR_Word * TouchedTargetFiles_13,
  MR_Word * TouchedFileNames_14,
  MR_Word STATE_VARIABLE_Info_0_41,
  MR_Word * STATE_VARIABLE_Info_42)
{
  MR_bool succeeded;
  MR_Word ModuleName_17 = ((MR_Word) ((MR_hl_field(0, TargetFile_11, (MR_Integer) 0))));
  MR_Word TargetType_18 = ((MR_Word) ((MR_hl_field(0, TargetFile_11, (MR_Integer) 1))));
  MR_Word MaybeModuleDepInfo_19;
  MR_Word ModuleDepInfo_20;
  MR_Word MaybeTopModule_21;
  MR_Word NestedSubModules_22;
  MR_Word MaybeNestedModuleDepInfos_24;
  MR_Word ModuleDepInfos_27;
  MR_Word CompilationTarget_28;
  MR_Word TargetModuleNames_29;
  MR_Word ForeignCodeFiles_32;
  MR_Word TimestampFileNames_40;
  MR_Word STATE_VARIABLE_Info_45_45;
  MR_Word Var_49;
  MR_Word Var_73;
  MR_Box conv3_STATE_VARIABLE_Info_42;
  MR_Box conv2_STATE_VARIABLE_IO_51_51;
  MR_Word NestedModuleDepInfos_26;
  MR_Box conv10_TimestampFileNames_40;
  MR_Box conv9_STATE_VARIABLE_IO_44;

  make__module_dep_file__get_module_dependencies_7_p_0(Globals_10, ModuleName_17, &MaybeModuleDepInfo_19, STATE_VARIABLE_Info_0_41, &STATE_VARIABLE_Info_45_45);
  if ((MaybeModuleDepInfo_19 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140make.module_target.find_files_maybe_touched_by_process_module\'/9", (MR_String) "no module dependencies");
      return;
    }
  else
    ModuleDepInfo_20 = ((MR_Word) ((MR_hl_field(1, MaybeModuleDepInfo_19, (MR_Integer) 0))));
  parse_tree__module_dep_info__module_dep_info_get_maybe_top_module_2_p_0(ModuleDepInfo_20, &MaybeTopModule_21);
  NestedSubModules_22 = parse_tree__module_baggage__get_nested_children_list_of_top_module_1_f_0(MaybeTopModule_21);
  {
    TargetModuleNames_29 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, TargetModuleNames_29, 0) = ((MR_Box) (ModuleName_17));
    MR_hl_field(1, TargetModuleNames_29, 1) = ((MR_Box) (NestedSubModules_22));
  }
  {
    Var_49 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_49, 0) = ((MR_Box) (&make__module_target_scalar_common_6[2]));
    MR_hl_field(0, Var_49, 1) = ((MR_Box) (make__module_target__find_files_maybe_touched_by_process_module_9_p_0_1));
    MR_hl_field(0, Var_49, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_49, 3) = ((MR_Box) (Globals_10));
  }
  mercury__list__map_foldl2_7_p_2((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_maybe_module_dep_info_0), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_49, NestedSubModules_22, &MaybeNestedModuleDepInfos_24, ((MR_Box) (STATE_VARIABLE_Info_45_45)), &conv3_STATE_VARIABLE_Info_42, ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_51_51);
  *STATE_VARIABLE_Info_42 = ((MR_Word) (conv3_STATE_VARIABLE_Info_42));
  succeeded = mercury__list__map_3_p_2((MR_Word) (&make__make_info__make__make_info__type_ctor_info_maybe_module_dep_info_0), (MR_Word) (&parse_tree__module_dep_info__parse_tree__module_dep_info__type_ctor_info_module_dep_info_0), (MR_Word) (&make__module_target_scalar_common_2[3]), MaybeNestedModuleDepInfos_24, &NestedModuleDepInfos_26);
  if (succeeded)
    {
      ModuleDepInfos_27 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, ModuleDepInfos_27, 0) = ((MR_Box) (ModuleDepInfo_20));
      MR_hl_field(1, ModuleDepInfos_27, 1) = ((MR_Box) (NestedModuleDepInfos_26));
    }
  else
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140make.module_target.find_files_maybe_touched_by_process_module\'/9", (MR_String) "no nested module dependencies");
      return;
    }
  libs__globals__get_target_2_p_0(Globals_10, &CompilationTarget_28);
  switch (Task_12) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 6:
      {
        MR_Word TargetPIC_30;
        MR_Word ForeignCodeFileList_31;
        MR_Word HeaderTargets0_36;
        MR_Word HeaderTargets_38;
        MR_Word TouchedTargetFiles0_39;
        MR_Word Var_57;
        MR_Word Var_62;
        MR_Box conv6_STATE_VARIABLE_IO_58_58;

        switch (MR_tag((MR_Word) TargetType_18)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            TargetPIC_30 = (MR_Integer) 1;
            break;
          case (MR_Integer) 1:
            TargetPIC_30 = (MR_Integer) 1;
            break;
          case (MR_Integer) 2:
            TargetPIC_30 = ((MR_Unsigned) ((MR_hl_field(2, TargetType_18, (MR_Integer) 0))) & (MR_Integer) 1);
            break;
          case (MR_Integer) 3:
            TargetPIC_30 = (MR_Integer) 1;
            break;
        }
        {
          Var_57 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_57, 0) = ((MR_Box) (&make__module_target_scalar_common_12[0]));
          MR_hl_field(0, Var_57, 1) = ((MR_Box) (make__module_target__find_files_maybe_touched_by_process_module_9_p_0_3));
          MR_hl_field(0, Var_57, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(0, Var_57, 3) = ((MR_Box) (Globals_10));
          MR_hl_field(0, Var_57, 4) = ((MR_Box) (TargetPIC_30));
        }
        mercury__list__map_foldl_5_p_2((MR_Word) (&parse_tree__module_dep_info__parse_tree__module_dep_info__type_ctor_info_module_dep_info_0), (MR_Word) (&make__module_target_scalar_common_1[2]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_57, ModuleDepInfos_27, &ForeignCodeFileList_31, ((MR_Box) ((MR_Integer) 0)), &conv6_STATE_VARIABLE_IO_58_58);
        Var_62 = mercury__list__condense_1_f_0((MR_Word) (&make__module_target__make__module_target__type_ctor_info_foreign_code_file_0), ForeignCodeFileList_31);
        ForeignCodeFiles_32 = mercury__list__map_2_f_0((MR_Word) (&make__module_target__make__module_target__type_ctor_info_foreign_code_file_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__module_target_scalar_common_2[4]), Var_62);
        switch (CompilationTarget_28) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word HighLevelCode_34;

              libs__globals__lookup_bool_option_3_p_0(Globals_10, (MR_Integer) 309, &HighLevelCode_34);
              switch (HighLevelCode_34) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  HeaderTargets0_36 = (MR_Word) ((MR_Unsigned) 0U);
                  break;
                case (MR_Integer) 1:
                  HeaderTargets0_36 = make__util__make_target_file_list_2_f_0(TargetModuleNames_29, (MR_Word) (MR_mkword(1, &make__module_target_scalar_common_3[4])));
                  break;
              }
            }
            break;
          case (MR_Integer) 1:
          case (MR_Integer) 2:
            HeaderTargets0_36 = (MR_Word) ((MR_Unsigned) 0U);
            break;
        }
        switch (CompilationTarget_28) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Var_66;

              Var_66 = make__util__make_target_file_list_2_f_0(TargetModuleNames_29, (MR_Word) (MR_mkword(1, &make__module_target_scalar_common_3[3])));
              HeaderTargets_38 = mercury__list__f_43_43_2_f_0((MR_Word) (&make__make_info__make__make_info__type_ctor_info_target_file_0), Var_66, HeaderTargets0_36);
            }
            break;
          case (MR_Integer) 1:
          case (MR_Integer) 2:
            HeaderTargets_38 = HeaderTargets0_36;
            break;
        }
        TouchedTargetFiles0_39 = make__util__make_target_file_list_2_f_0(TargetModuleNames_29, TargetType_18);
        *TouchedTargetFiles_13 = mercury__list__f_43_43_2_f_0((MR_Word) (&make__make_info__make__make_info__type_ctor_info_target_file_0), TouchedTargetFiles0_39, HeaderTargets_38);
      }
      break;
    case (MR_Integer) 0:
    case (MR_Integer) 5:
    case (MR_Integer) 1:
    case (MR_Integer) 3:
    case (MR_Integer) 4:
    case (MR_Integer) 7:
      {
        ForeignCodeFiles_32 = (MR_Word) ((MR_Unsigned) 0U);
        *TouchedTargetFiles_13 = make__util__make_target_file_list_2_f_0(TargetModuleNames_29, TargetType_18);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word Var_69;
        MR_Word Var_71;

        ForeignCodeFiles_32 = (MR_Word) ((MR_Unsigned) 0U);
        Var_69 = make__util__make_target_file_list_2_f_0(TargetModuleNames_29, (MR_Word) ((MR_Unsigned) 12U));
        Var_71 = make__util__make_target_file_list_2_f_0(TargetModuleNames_29, (MR_Word) ((MR_Unsigned) 16U));
        *TouchedTargetFiles_13 = mercury__list__f_43_43_2_f_0((MR_Word) (&make__make_info__make__make_info__type_ctor_info_target_file_0), Var_69, Var_71);
      }
      break;
  }
  {
    Var_73 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_73, 0) = ((MR_Box) (&make__module_target_scalar_common_12[1]));
    MR_hl_field(0, Var_73, 1) = ((MR_Box) (make__module_target__find_files_maybe_touched_by_process_module_9_p_0_5));
    MR_hl_field(0, Var_73, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_73, 3) = ((MR_Box) (Globals_10));
  }
  mercury__list__foldl2_6_p_2((MR_Word) (&make__make_info__make__make_info__type_ctor_info_target_file_0), (MR_Word) (&make__module_target_scalar_common_1[3]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_73, *TouchedTargetFiles_13, ((MR_Box) ((MR_Unsigned) 0U)), &conv10_TimestampFileNames_40, ((MR_Box) ((MR_Integer) 0)), &conv9_STATE_VARIABLE_IO_44);
  TimestampFileNames_40 = ((MR_Word) (conv10_TimestampFileNames_40));
  *TouchedFileNames_14 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ForeignCodeFiles_32, TimestampFileNames_40);
}

static void MR_CALL 
make__module_target__build_target_12_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_MakeInfo_18;

  make__module_target__cleanup_files_8_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 6)))), ((MR_Word) (wrapper_arg_1)), &conv0_STATE_VARIABLE_MakeInfo_18);
  *wrapper_arg_2 = ((MR_Box) (conv0_STATE_VARIABLE_MakeInfo_18));
}

static void MR_CALL 
make__module_target__build_target_12_p_0(
  MR_Word Globals_13,
  MR_Word CompilationTask_14,
  MR_Word TargetFile_15,
  MR_Word ModuleDepInfo_16,
  MR_Word TouchedTargetFiles_17,
  MR_Word TouchedFiles_18,
  MR_Word ExtraOptions_19,
  MR_Word * Succeeded_20,
  MR_Word STATE_VARIABLE_Info_0_54,
  MR_Word * STATE_VARIABLE_Info_55)
{
  MR_bool succeeded;
  MR_String TargetFileName_23;
  MR_String MakingMsg_24;
  MR_Word ModuleName_25;
  MR_Word Task_27;
  MR_Word TaskOptions_28;
  MR_Word ExtraAndTaskOptions_29;
  MR_Word MaybeArgFileName_33;
  MR_Word ArgFileNameRes_34;
  MR_Word ModuleTask_30;

  make__util__get_make_target_file_name_6_p_0(Globals_13, (MR_String) "predicate \140make.module_target.build_target\'/12", TargetFile_15, &TargetFileName_23);
  make__util__maybe_making_filename_msg_3_p_0(Globals_13, TargetFileName_23, &MakingMsg_24);
  make__util__maybe_write_msg_3_p_0(MakingMsg_24);
  ModuleName_25 = ((MR_Word) ((MR_hl_field(0, TargetFile_15, (MR_Integer) 0))));
  Task_27 = ((MR_Word) ((MR_hl_field(0, CompilationTask_14, (MR_Integer) 0))));
  TaskOptions_28 = ((MR_Word) ((MR_hl_field(0, CompilationTask_14, (MR_Integer) 1))));
  ExtraAndTaskOptions_29 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ExtraOptions_19, TaskOptions_28);
  succeeded = ((MR_tag((MR_Word) Task_27)) == (MR_Integer) 0);
  if (succeeded)
  {
    ModuleTask_30 = ((MR_Unsigned) ((MR_hl_field(0, Task_27, (MR_Integer) 0))) & (MR_Integer) 7);
    if (((MR_Unsigned) 240U & (((MR_Integer) 1 << ModuleTask_30))))
      succeeded = MR_TRUE;
    else
      succeeded = MR_FALSE;
    if (succeeded)
    {
      succeeded = libs__process_util__can_fork_0_p_0();
      succeeded = !(succeeded);
    }
  }
  if (succeeded)
  {
    MR_Word ArgFileNameResult_31;

    mercury__io__file__make_temp_file_3_p_0(&ArgFileNameResult_31);
    if (((MR_tag((MR_Word) ArgFileNameResult_31)) == (MR_Integer) 1))
    {
      MR_Word Error_35 = ((MR_Word) ((MR_hl_field(1, ArgFileNameResult_31, (MR_Integer) 0))));

      MaybeArgFileName_33 = (MR_Word) ((MR_Unsigned) 0U);
      {
        ArgFileNameRes_34 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, ArgFileNameRes_34, 0) = ((MR_Box) (Error_35));
      }
    }
    else
    {
      MR_String ArgFileName_32 = ((MR_String) ((MR_hl_field(0, ArgFileNameResult_31, (MR_Integer) 0))));

      {
        MaybeArgFileName_33 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, MaybeArgFileName_33, 0) = ((MR_Box) (ArgFileName_32));
      }
      ArgFileNameRes_34 = (MR_Word) ((MR_Unsigned) 0U);
    }
  }
  else
  {
    MaybeArgFileName_33 = (MR_Word) ((MR_Unsigned) 0U);
    ArgFileNameRes_34 = (MR_Word) ((MR_Unsigned) 0U);
  }
  if ((ArgFileNameRes_34 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Integer Time0_36;
    MR_Word VeryVerbose_37;
    MR_Word Cleanup_38;
    MR_Box Cookie_39;
    MR_Word DetectedGradeFlags_40;
    MR_Word OptionVariables_41;
    MR_Word OptionArgs_42;
    MR_Word MayBuild_43;
    MR_Word Succeeded0_47;
    MR_Integer Time_50;
    MR_Word ShowMakeTimes_51;
    MR_Word STATE_VARIABLE_Info_72_72;
    MR_Word STATE_VARIABLE_Info_76_76;
    MR_Box conv1_STATE_VARIABLE_Info_76_76;

    make__util__get_real_milliseconds_3_p_0(&Time0_36);
    libs__globals__lookup_bool_option_3_p_0(Globals_13, (MR_Integer) 73, &VeryVerbose_37);
    {
      Cleanup_38 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Cleanup_38, 0) = ((MR_Box) (&make__module_target_scalar_common_4[2]));
      MR_hl_field(0, Cleanup_38, 1) = ((MR_Box) (make__module_target__build_target_12_p_0_1));
      MR_hl_field(0, Cleanup_38, 2) = ((MR_Box) ((MR_Integer) 4));
      MR_hl_field(0, Cleanup_38, 3) = ((MR_Box) (Globals_13));
      MR_hl_field(0, Cleanup_38, 4) = ((MR_Box) (MaybeArgFileName_33));
      MR_hl_field(0, Cleanup_38, 5) = ((MR_Box) (TouchedTargetFiles_17));
      MR_hl_field(0, Cleanup_38, 6) = ((MR_Box) (TouchedFiles_18));
    }
    libs__process_util__setup_checking_for_interrupt_3_p_0(&Cookie_39);
    DetectedGradeFlags_40 = make__make_info__make_info_get_detected_grade_flags_1_f_0(STATE_VARIABLE_Info_0_54);
    OptionVariables_41 = make__make_info__make_info_get_options_variables_1_f_0(STATE_VARIABLE_Info_0_54);
    OptionArgs_42 = make__make_info__make_info_get_option_args_1_f_0(STATE_VARIABLE_Info_0_54);
    make__build__setup_for_build_with_module_options_9_p_0((MR_Integer) 1, ModuleName_25, DetectedGradeFlags_40, OptionVariables_41, OptionArgs_42, ExtraAndTaskOptions_29, &MayBuild_43);
    if (((MR_tag((MR_Word) MayBuild_43)) == (MR_Integer) 1))
    {
      MR_Word AllOptionArgs_44 = ((MR_Word) ((MR_hl_field(1, MayBuild_43, (MR_Integer) 0))));
      MR_Word BuildGlobals_45 = ((MR_Word) ((MR_hl_field(1, MayBuild_43, (MR_Integer) 1))));
      MR_Word RedirectResult_46;
      MR_Word STATE_VARIABLE_Info_68_68;

      make__build__prepare_to_redirect_output_6_p_0(ModuleName_25, &RedirectResult_46, STATE_VARIABLE_Info_0_54, &STATE_VARIABLE_Info_68_68);
      if ((RedirectResult_46 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        Succeeded0_47 = (MR_Integer) 0;
        STATE_VARIABLE_Info_72_72 = STATE_VARIABLE_Info_68_68;
      }
      else
      {
        MR_Word ErrorStream_48 = ((MR_Word) ((MR_hl_field(1, RedirectResult_46, (MR_Integer) 0))));
        MR_Word STATE_VARIABLE_Info_70_70;

        make__module_target__build_target_2_12_p_0(ModuleName_25, Task_27, MaybeArgFileName_33, ModuleDepInfo_16, BuildGlobals_45, AllOptionArgs_44, ErrorStream_48, &Succeeded0_47, STATE_VARIABLE_Info_68_68, &STATE_VARIABLE_Info_70_70);
        make__build__unredirect_output_7_p_0(Globals_13, ModuleName_25, ErrorStream_48, STATE_VARIABLE_Info_70_70, &STATE_VARIABLE_Info_72_72);
      }
    }
    else
    {
      MR_Word Specs_49 = ((MR_Word) ((MR_hl_field(0, MayBuild_43, (MR_Integer) 0))));
      MR_Word ErrorStream_100;

      libs__globals__get_error_output_stream_5_p_0(Globals_13, ModuleName_25, &ErrorStream_100);
      parse_tree__write_error_spec__write_error_specs_5_p_0(ErrorStream_100, Globals_13, Specs_49);
      Succeeded0_47 = (MR_Integer) 0;
      STATE_VARIABLE_Info_72_72 = STATE_VARIABLE_Info_0_54;
    }
    libs__process_util__teardown_checking_for_interrupt_9_p_0((MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), VeryVerbose_37, Cookie_39, Cleanup_38, Succeeded0_47, Succeeded_20, ((MR_Box) (STATE_VARIABLE_Info_72_72)), &conv1_STATE_VARIABLE_Info_76_76);
    STATE_VARIABLE_Info_76_76 = ((MR_Word) (conv1_STATE_VARIABLE_Info_76_76));
    make__module_target__record_made_target_given_maybe_touched_files_10_p_0(Globals_13, *Succeeded_20, TargetFile_15, TargetFileName_23, TouchedTargetFiles_17, TouchedFiles_18, STATE_VARIABLE_Info_76_76, STATE_VARIABLE_Info_55);
    make__util__get_real_milliseconds_3_p_0(&Time_50);
    libs__globals__lookup_bool_option_3_p_0(Globals_13, (MR_Integer) 691, &ShowMakeTimes_51);
    switch (ShowMakeTimes_51) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Float DiffSecs_52;
          MR_Float Var_82;
          MR_Integer Var_83 = (MR_Integer) ((MR_Unsigned) Time_50 - (MR_Unsigned) Time0_36);

          Var_82 = mercury__float__float_1_f_0(Var_83);
          DiffSecs_52 = mercury__float__f_slash_2_f_0(Var_82, (MR_Float) 1000.0000000000000);
          succeeded = (DiffSecs_52 >= ((MR_Float) 0.50000000000000000));
          if (succeeded)
          {
            MR_String Var_113;

            mercury__io__write_string_3_p_0((MR_String) "Making ");
            mercury__io__write_string_3_p_0(TargetFileName_23);
            mercury__io__write_string_3_p_0((MR_String) " took ");
            mercury__string__format__format_float_component_nowidth_prec_5_p_0((MR_Word) (&make__module_target_scalar_common_3[0]), (MR_Integer) 2, (MR_Integer) 2, DiffSecs_52, &Var_113);
            mercury__io__write_string_3_p_0(Var_113);
            mercury__io__write_string_3_p_0((MR_String) "s\n");
          }
        }
        break;
    }
  }
  else
  {
    MR_Word ArgFileError_53 = ((MR_Word) ((MR_hl_field(1, ArgFileNameRes_34, (MR_Integer) 0))));
    MR_Word Var_93;
    MR_String Var_98;

    Var_93 = mercury__io__stderr_stream_0_f_0();
    Var_98 = mercury__io__error_message_1_f_0(ArgFileError_53);
    mercury__io__write_string_4_p_0(Var_93, (MR_String) "Could not create temporary file: ");
    mercury__io__write_string_4_p_0(Var_93, Var_98);
    mercury__io__write_string_4_p_0(Var_93, (MR_String) "\n");
    *Succeeded_20 = (MR_Integer) 0;
    *STATE_VARIABLE_Info_55 = STATE_VARIABLE_Info_0_54;
  }
}

static void MR_CALL 
make__module_target__record_made_target_given_maybe_touched_files_10_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv9_STATE_VARIABLE_Timestamps_11;

  make__module_target__delete_analysis_registry_timestamps_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_String) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv9_STATE_VARIABLE_Timestamps_11);
  *wrapper_arg_4 = ((MR_Box) (conv9_STATE_VARIABLE_Timestamps_11));
}

static void MR_CALL 
make__module_target__record_made_target_given_maybe_touched_files_10_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv6_STATE_VARIABLE_Timestamps_11;

  make__module_target__delete_timestamp_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_String) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv6_STATE_VARIABLE_Timestamps_11);
  *wrapper_arg_3 = ((MR_Box) (conv6_STATE_VARIABLE_Timestamps_11));
}

static void MR_CALL 
make__module_target__record_made_target_given_maybe_touched_files_10_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  MR_Box closure = closure_arg;
  MR_String conv3_HeadVar__5_5;
  MR_Word conv2_HeadVar__7_7;

  make__util__get_file_name_9_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), &conv3_HeadVar__5_5, ((MR_Word) (wrapper_arg_3)), &conv2_HeadVar__7_7);
  *wrapper_arg_2 = ((MR_Box) (conv3_HeadVar__5_5));
  *wrapper_arg_4 = ((MR_Box) (conv2_HeadVar__7_7));
}

static void MR_CALL 
make__module_target__record_made_target_given_maybe_touched_files_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_Info_12;

  make__module_target__update_target_status_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_Info_12);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Info_12));
}

static void MR_CALL 
make__module_target__record_made_target_given_maybe_touched_files_10_p_0(
  MR_Word Globals_11,
  MR_Word Succeeded_12,
  MR_Word TargetFile_13,
  MR_String TargetFileName_14,
  MR_Word TouchedTargetFiles_15,
  MR_Word OtherTouchedFiles_16,
  MR_Word STATE_VARIABLE_Info_0_26,
  MR_Word * STATE_VARIABLE_Info_27)
{
  MR_bool succeeded;
  MR_Word TargetStatus_19;
  MR_Word TouchedTargetFileNames_21;
  MR_Word TargetFileTimestamps0_24;
  MR_Word TargetFileTimestamps_25;
  MR_Word Var_31;
  MR_Word STATE_VARIABLE_Info_32_32;
  MR_Word Var_33;
  MR_Word STATE_VARIABLE_Info_34_34;
  MR_Word STATE_VARIABLE_FileTimestamps_38_38;
  MR_Word Var_39;
  MR_Word STATE_VARIABLE_FileTimestamps_40_40;
  MR_Word STATE_VARIABLE_FileTimestamps_42_42;
  MR_Word STATE_VARIABLE_FileTimestamps_46_46;
  MR_Word STATE_VARIABLE_Info_47_47;
  MR_Box conv1_STATE_VARIABLE_Info_32_32;
  MR_Box conv5_STATE_VARIABLE_Info_34_34;
  MR_Box conv4_STATE_VARIABLE_IO_29;
  MR_Box conv7_STATE_VARIABLE_FileTimestamps_40_40;
  MR_Box conv8_STATE_VARIABLE_FileTimestamps_42_42;
  MR_Word Var_43;

  switch (Succeeded_12) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_String ErrorMsg_20;

        TargetStatus_19 = (MR_Integer) 3;
        make__util__file_error_msg_2_p_0(TargetFileName_14, &ErrorMsg_20);
        make__util__maybe_write_msg_locked_4_p_0(STATE_VARIABLE_Info_0_26, ErrorMsg_20);
      }
      break;
    case (MR_Integer) 1:
      TargetStatus_19 = (MR_Integer) 2;
      break;
  }
  {
    Var_31 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_31, 0) = ((MR_Box) (&make__module_target_scalar_common_11[0]));
    MR_hl_field(0, Var_31, 1) = ((MR_Box) (make__module_target__record_made_target_given_maybe_touched_files_10_p_0_1));
    MR_hl_field(0, Var_31, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_31, 3) = ((MR_Box) (TargetStatus_19));
  }
  mercury__list__foldl_4_p_0((MR_Word) (&make__make_info__make__make_info__type_ctor_info_target_file_0), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), Var_31, TouchedTargetFiles_15, ((MR_Box) (STATE_VARIABLE_Info_0_26)), &conv1_STATE_VARIABLE_Info_32_32);
  STATE_VARIABLE_Info_32_32 = ((MR_Word) (conv1_STATE_VARIABLE_Info_32_32));
  {
    Var_33 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_33, 0) = ((MR_Box) (&make__module_target_scalar_common_8[1]));
    MR_hl_field(0, Var_33, 1) = ((MR_Box) (make__module_target__record_made_target_given_maybe_touched_files_10_p_0_2));
    MR_hl_field(0, Var_33, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(0, Var_33, 3) = ((MR_Box) (Globals_11));
    MR_hl_field(0, Var_33, 4) = ((MR_Box) ((MR_String) "predicate \140make.module_target.record_made_target_given_maybe_touched_files\'/10"));
    MR_hl_field(0, Var_33, 5) = ((MR_Box) ((MR_Integer) 1));
  }
  mercury__list__map_foldl2_7_p_2((MR_Word) (&make__make_info__make__make_info__type_ctor_info_target_file_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_33, TouchedTargetFiles_15, &TouchedTargetFileNames_21, ((MR_Box) (STATE_VARIABLE_Info_32_32)), &conv5_STATE_VARIABLE_Info_34_34, ((MR_Box) ((MR_Integer) 0)), &conv4_STATE_VARIABLE_IO_29);
  STATE_VARIABLE_Info_34_34 = ((MR_Word) (conv5_STATE_VARIABLE_Info_34_34));
  STATE_VARIABLE_FileTimestamps_38_38 = make__make_info__make_info_get_file_timestamps_1_f_0(STATE_VARIABLE_Info_34_34);
  {
    Var_39 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_39, 0) = ((MR_Box) (&make__module_target_scalar_common_11[1]));
    MR_hl_field(0, Var_39, 1) = ((MR_Box) (make__module_target__record_made_target_given_maybe_touched_files_10_p_0_3));
    MR_hl_field(0, Var_39, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_39, 3) = ((MR_Box) (Globals_11));
  }
  mercury__list__foldl_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__module_target_scalar_common_2[1]), Var_39, TouchedTargetFileNames_21, ((MR_Box) (STATE_VARIABLE_FileTimestamps_38_38)), &conv7_STATE_VARIABLE_FileTimestamps_40_40);
  STATE_VARIABLE_FileTimestamps_40_40 = ((MR_Word) (conv7_STATE_VARIABLE_FileTimestamps_40_40));
  mercury__list__foldl_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__module_target_scalar_common_2[1]), Var_39, OtherTouchedFiles_16, ((MR_Box) (STATE_VARIABLE_FileTimestamps_40_40)), &conv8_STATE_VARIABLE_FileTimestamps_42_42);
  STATE_VARIABLE_FileTimestamps_42_42 = ((MR_Word) (conv8_STATE_VARIABLE_FileTimestamps_42_42));
  Var_43 = ((MR_Word) ((MR_hl_field(0, TargetFile_13, (MR_Integer) 1))));
  succeeded = (Var_43 == (MR_Word) ((MR_Unsigned) 28U));
  if (succeeded)
  {
    MR_Word Var_44;
    MR_Box conv10_STATE_VARIABLE_FileTimestamps_46_46;

    {
      Var_44 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_44, 0) = ((MR_Box) (&make__module_target_scalar_common_9[1]));
      MR_hl_field(0, Var_44, 1) = ((MR_Box) (make__module_target__record_made_target_given_maybe_touched_files_10_p_0_4));
      MR_hl_field(0, Var_44, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_44, 3) = ((MR_Box) (Globals_11));
    }
    mercury__map__foldl_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__module_target_scalar_common_2[0]), (MR_Word) (&make__module_target_scalar_common_2[1]), Var_44, STATE_VARIABLE_FileTimestamps_42_42, ((MR_Box) (STATE_VARIABLE_FileTimestamps_42_42)), &conv10_STATE_VARIABLE_FileTimestamps_46_46);
    STATE_VARIABLE_FileTimestamps_46_46 = ((MR_Word) (conv10_STATE_VARIABLE_FileTimestamps_46_46));
  }
  else
    STATE_VARIABLE_FileTimestamps_46_46 = STATE_VARIABLE_FileTimestamps_42_42;
  make__make_info__make_info_set_file_timestamps_3_p_0(STATE_VARIABLE_FileTimestamps_46_46, STATE_VARIABLE_Info_34_34, &STATE_VARIABLE_Info_47_47);
  TargetFileTimestamps0_24 = make__make_info__make_info_get_target_file_timestamps_1_f_0(STATE_VARIABLE_Info_47_47);
  mercury__version_hash_table__delete_3_p_0((MR_Word) (&make__make_info__make__make_info__type_ctor_info_target_file_0), (MR_Word) (&libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0), ((MR_Box) (TargetFile_13)), TargetFileTimestamps0_24, &TargetFileTimestamps_25);
  make__make_info__make_info_set_target_file_timestamps_3_p_0(TargetFileTimestamps_25, STATE_VARIABLE_Info_47_47, STATE_VARIABLE_Info_27);
}

static void MR_CALL 
make__module_target__build_target_2_12_p_0_12(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv11_Succeeded_18;

  make__module_target__build_object_code_10_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 6)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 7)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 8)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 9)))), &conv11_Succeeded_18);
  *wrapper_arg_1 = ((MR_Box) (conv11_Succeeded_18));
}

static void MR_CALL 
make__module_target__build_target_2_12_p_0_11(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv10_Succeeded_14;

  make__module_target__invoke_mmc_8_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 6)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 7)))), &conv10_Succeeded_14);
  *wrapper_arg_1 = ((MR_Box) (conv10_Succeeded_14));
}

static void MR_CALL 
make__module_target__build_target_2_12_p_0_10(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv9_Succeeded_8;

  make__module_target__call_mercury_compile_main_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), &conv9_Succeeded_8);
  *wrapper_arg_1 = ((MR_Box) (conv9_Succeeded_8));
}

static void MR_CALL 
make__module_target__build_target_2_12_p_0_9(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv8_Succeeded_14;

  make__module_target__invoke_mmc_8_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 6)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 7)))), &conv8_Succeeded_14);
  *wrapper_arg_1 = ((MR_Box) (conv8_Succeeded_14));
}

static void MR_CALL 
make__module_target__build_target_2_12_p_0_8(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv7_Succeeded_8;

  make__module_target__call_mercury_compile_main_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), &conv7_Succeeded_8);
  *wrapper_arg_1 = ((MR_Box) (conv7_Succeeded_8));
}

static void MR_CALL 
make__module_target__build_target_2_12_p_0_7(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv6_Succeeded_14;

  make__module_target__invoke_mmc_8_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 6)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 7)))), &conv6_Succeeded_14);
  *wrapper_arg_1 = ((MR_Box) (conv6_Succeeded_14));
}

static void MR_CALL 
make__module_target__build_target_2_12_p_0_6(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv5_Succeeded_8;

  make__module_target__call_mercury_compile_main_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), &conv5_Succeeded_8);
  *wrapper_arg_1 = ((MR_Box) (conv5_Succeeded_8));
}

static void MR_CALL 
make__module_target__build_target_2_12_p_0_5(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv4_Succeeded_14;

  make__module_target__invoke_mmc_8_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 6)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 7)))), &conv4_Succeeded_14);
  *wrapper_arg_1 = ((MR_Box) (conv4_Succeeded_14));
}

static void MR_CALL 
make__module_target__build_target_2_12_p_0_4(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv3_Succeeded_8;

  make__module_target__call_mercury_compile_main_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), &conv3_Succeeded_8);
  *wrapper_arg_1 = ((MR_Box) (conv3_Succeeded_8));
}

static MR_Box MR_CALL 
make__module_target__build_target_2_12_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv2_HeadVar__2_2;

  conv2_HeadVar__2_2 = libs__shell_util__quote_shell_cmd_arg_1_f_0(((MR_String) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv2_HeadVar__2_2));
  return wrapper_arg_2;
}

static void MR_CALL 
make__module_target__build_target_2_12_p_0_2(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_Succeeded_16;

  make__module_target__compile_foreign_code_file_9_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 6)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 7)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 8)))), &conv1_Succeeded_16);
  *wrapper_arg_1 = ((MR_Box) (conv1_Succeeded_16));
}

static void MR_CALL 
make__module_target__build_target_2_12_p_0_1(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_Succeeded_16;

  make__module_target__compile_foreign_code_file_9_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 6)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 7)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 8)))), &conv0_Succeeded_16);
  *wrapper_arg_1 = ((MR_Box) (conv0_Succeeded_16));
}

static void MR_CALL 
make__module_target__build_target_2_12_p_0(
  MR_Word ModuleName_13,
  MR_Word Task_14,
  MR_Word ArgFileName_15,
  MR_Word ModuleDepInfo_16,
  MR_Word Globals_17,
  MR_Word AllOptionArgs_18,
  MR_Word ErrorStream_19,
  MR_Word * Succeeded_20,
  MR_Word STATE_VARIABLE_Info_0_42,
  MR_Word * STATE_VARIABLE_Info_43)
{
  MR_bool succeeded;
  MR_Word ProgressStream_23;

  mercury__io__output_stream_3_p_0(&ProgressStream_23);
  switch (MR_tag((MR_Word) Task_14)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word ModuleTask_24 = ((MR_Unsigned) ((MR_hl_field(0, Task_14, (MR_Integer) 0))) & (MR_Integer) 7);
        MR_String ModuleArg_25;
        MR_Word Verbose_26;
        MR_Word OldOutputStream_30;
        MR_Word CompileSucceeded_32;
        MR_Word Var_33;

        ModuleArg_25 = mdbcomp__sym_name__sym_name_to_string_1_f_0(ModuleName_13);
        libs__globals__lookup_bool_option_3_p_0(Globals_17, (MR_Integer) 78, &Verbose_26);
        switch (Verbose_26) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word AllArgs_27;
              MR_Word AllArgStrs_28;
              MR_String AllArgsStr_29;
              MR_Word Var_48;

              {
                Var_48 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_48, 0) = ((MR_Box) (ModuleArg_25));
                MR_hl_field(1, Var_48, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              AllArgs_27 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), AllOptionArgs_18, Var_48);
              AllArgStrs_28 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__module_target_scalar_common_2[2]), AllArgs_27);
              AllArgsStr_29 = mercury__string__join_list_2_f_0((MR_String) " ", AllArgStrs_28);
              mercury__io__write_string_3_p_0((MR_String) "Invoking self \140mmc ");
              mercury__io__write_string_3_p_0(AllArgsStr_29);
              mercury__io__write_string_3_p_0((MR_String) "\'\n");
            }
            break;
        }
        mercury__io__set_output_stream_4_p_0(ErrorStream_19, &OldOutputStream_30);
        switch (ModuleTask_24) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 6:
            {
              MR_Word Var_58;
              MR_Word Var_59;
              MR_Word Var_61;
              MR_Word Var_63;

              {
                Var_61 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_61, 0) = ((MR_Box) (ModuleArg_25));
                MR_hl_field(1, Var_61, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                Var_58 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_58, 0) = ((MR_Box) (&make__module_target_scalar_common_9[0]));
                MR_hl_field(0, Var_58, 1) = ((MR_Box) (make__module_target__build_target_2_12_p_0_4));
                MR_hl_field(0, Var_58, 2) = ((MR_Box) ((MR_Integer) 2));
                MR_hl_field(0, Var_58, 3) = ((MR_Box) (Globals_17));
                MR_hl_field(0, Var_58, 4) = ((MR_Box) (Var_61));
              }
              Var_63 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), AllOptionArgs_18, Var_61);
              {
                Var_59 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_59, 0) = ((MR_Box) (&make__module_target_scalar_common_4[1]));
                MR_hl_field(0, Var_59, 1) = ((MR_Box) (make__module_target__build_target_2_12_p_0_5));
                MR_hl_field(0, Var_59, 2) = ((MR_Box) ((MR_Integer) 5));
                MR_hl_field(0, Var_59, 3) = ((MR_Box) (Globals_17));
                MR_hl_field(0, Var_59, 4) = ((MR_Box) (ProgressStream_23));
                MR_hl_field(0, Var_59, 5) = ((MR_Box) (ErrorStream_19));
                MR_hl_field(0, Var_59, 6) = ((MR_Box) (ArgFileName_15));
                MR_hl_field(0, Var_59, 7) = ((MR_Box) (Var_63));
              }
              libs__process_util__call_in_forked_process_with_backup_5_p_0(Var_58, Var_59, &CompileSucceeded_32);
            }
            break;
          case (MR_Integer) 0:
            {
              MR_Word Var_66;

              {
                Var_66 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_66, 0) = ((MR_Box) (ModuleArg_25));
                MR_hl_field(1, Var_66, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              make__module_target__call_mercury_compile_main_5_p_0(Globals_17, Var_66, &CompileSucceeded_32);
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word Var_126;
              MR_Word Var_127;
              MR_Word Var_128;
              MR_Word Var_130;

              {
                Var_128 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_128, 0) = ((MR_Box) (ModuleArg_25));
                MR_hl_field(1, Var_128, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                Var_126 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_126, 0) = ((MR_Box) (&make__module_target_scalar_common_9[0]));
                MR_hl_field(0, Var_126, 1) = ((MR_Box) (make__module_target__build_target_2_12_p_0_6));
                MR_hl_field(0, Var_126, 2) = ((MR_Box) ((MR_Integer) 2));
                MR_hl_field(0, Var_126, 3) = ((MR_Box) (Globals_17));
                MR_hl_field(0, Var_126, 4) = ((MR_Box) (Var_128));
              }
              Var_130 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), AllOptionArgs_18, Var_128);
              {
                Var_127 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_127, 0) = ((MR_Box) (&make__module_target_scalar_common_4[1]));
                MR_hl_field(0, Var_127, 1) = ((MR_Box) (make__module_target__build_target_2_12_p_0_7));
                MR_hl_field(0, Var_127, 2) = ((MR_Box) ((MR_Integer) 5));
                MR_hl_field(0, Var_127, 3) = ((MR_Box) (Globals_17));
                MR_hl_field(0, Var_127, 4) = ((MR_Box) (ProgressStream_23));
                MR_hl_field(0, Var_127, 5) = ((MR_Box) (ErrorStream_19));
                MR_hl_field(0, Var_127, 6) = ((MR_Box) (ArgFileName_15));
                MR_hl_field(0, Var_127, 7) = ((MR_Box) (Var_130));
              }
              libs__process_util__call_in_forked_process_with_backup_5_p_0(Var_126, Var_127, &CompileSucceeded_32);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Var_134;

              {
                Var_134 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_134, 0) = ((MR_Box) (ModuleArg_25));
                MR_hl_field(1, Var_134, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              make__module_target__call_mercury_compile_main_5_p_0(Globals_17, Var_134, &CompileSucceeded_32);
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word Var_138;

              {
                Var_138 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_138, 0) = ((MR_Box) (ModuleArg_25));
                MR_hl_field(1, Var_138, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              make__module_target__call_mercury_compile_main_5_p_0(Globals_17, Var_138, &CompileSucceeded_32);
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Var_142;

              {
                Var_142 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_142, 0) = ((MR_Box) (ModuleArg_25));
                MR_hl_field(1, Var_142, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              make__module_target__call_mercury_compile_main_5_p_0(Globals_17, Var_142, &CompileSucceeded_32);
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Var_146;
              MR_Word Var_147;
              MR_Word Var_148;
              MR_Word Var_150;

              {
                Var_148 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_148, 0) = ((MR_Box) (ModuleArg_25));
                MR_hl_field(1, Var_148, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                Var_146 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_146, 0) = ((MR_Box) (&make__module_target_scalar_common_9[0]));
                MR_hl_field(0, Var_146, 1) = ((MR_Box) (make__module_target__build_target_2_12_p_0_8));
                MR_hl_field(0, Var_146, 2) = ((MR_Box) ((MR_Integer) 2));
                MR_hl_field(0, Var_146, 3) = ((MR_Box) (Globals_17));
                MR_hl_field(0, Var_146, 4) = ((MR_Box) (Var_148));
              }
              Var_150 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), AllOptionArgs_18, Var_148);
              {
                Var_147 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_147, 0) = ((MR_Box) (&make__module_target_scalar_common_4[1]));
                MR_hl_field(0, Var_147, 1) = ((MR_Box) (make__module_target__build_target_2_12_p_0_9));
                MR_hl_field(0, Var_147, 2) = ((MR_Box) ((MR_Integer) 5));
                MR_hl_field(0, Var_147, 3) = ((MR_Box) (Globals_17));
                MR_hl_field(0, Var_147, 4) = ((MR_Box) (ProgressStream_23));
                MR_hl_field(0, Var_147, 5) = ((MR_Box) (ErrorStream_19));
                MR_hl_field(0, Var_147, 6) = ((MR_Box) (ArgFileName_15));
                MR_hl_field(0, Var_147, 7) = ((MR_Box) (Var_150));
              }
              libs__process_util__call_in_forked_process_with_backup_5_p_0(Var_146, Var_147, &CompileSucceeded_32);
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word Var_154;
              MR_Word Var_155;
              MR_Word Var_156;
              MR_Word Var_158;

              {
                Var_156 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_156, 0) = ((MR_Box) (ModuleArg_25));
                MR_hl_field(1, Var_156, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                Var_154 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_154, 0) = ((MR_Box) (&make__module_target_scalar_common_9[0]));
                MR_hl_field(0, Var_154, 1) = ((MR_Box) (make__module_target__build_target_2_12_p_0_10));
                MR_hl_field(0, Var_154, 2) = ((MR_Box) ((MR_Integer) 2));
                MR_hl_field(0, Var_154, 3) = ((MR_Box) (Globals_17));
                MR_hl_field(0, Var_154, 4) = ((MR_Box) (Var_156));
              }
              Var_158 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), AllOptionArgs_18, Var_156);
              {
                Var_155 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_155, 0) = ((MR_Box) (&make__module_target_scalar_common_4[1]));
                MR_hl_field(0, Var_155, 1) = ((MR_Box) (make__module_target__build_target_2_12_p_0_11));
                MR_hl_field(0, Var_155, 2) = ((MR_Box) ((MR_Integer) 5));
                MR_hl_field(0, Var_155, 3) = ((MR_Box) (Globals_17));
                MR_hl_field(0, Var_155, 4) = ((MR_Box) (ProgressStream_23));
                MR_hl_field(0, Var_155, 5) = ((MR_Box) (ErrorStream_19));
                MR_hl_field(0, Var_155, 6) = ((MR_Box) (ArgFileName_15));
                MR_hl_field(0, Var_155, 7) = ((MR_Box) (Var_158));
              }
              libs__process_util__call_in_forked_process_with_backup_5_p_0(Var_154, Var_155, &CompileSucceeded_32);
            }
            break;
        }
        mercury__io__set_output_stream_4_p_0(OldOutputStream_30, &Var_33);
        switch (ModuleTask_24) {
          default:
            succeeded = MR_FALSE;
            break;
          case (MR_Integer) 6:
            succeeded = MR_TRUE;
            break;
          case (MR_Integer) 0:
            succeeded = MR_TRUE;
            break;
        }
        if (succeeded)
        {
          MR_Word TouchSucceeded_34;

          parse_tree__module_cmds__touch_interface_datestamp_8_p_0(Globals_17, ProgressStream_23, ErrorStream_19, ModuleName_13, (MR_Word) (MR_mkword(3, &make__module_target_scalar_common_1[4])), &TouchSucceeded_34);
          *Succeeded_20 = libs__maybe_util__and_2_f_0(CompileSucceeded_32, TouchSucceeded_34);
        }
        else
          *Succeeded_20 = CompileSucceeded_32;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word PIC_35 = ((MR_Unsigned) ((MR_hl_field(1, Task_14, (MR_Integer) 0))) & (MR_Integer) 1);
        MR_Word CompilationTarget_36;
        MR_Word Var_73;

        libs__globals__get_target_2_p_0(Globals_17, &CompilationTarget_36);
        {
          Var_73 = (MR_Word) MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_73, 0) = ((MR_Box) (&make__module_target_scalar_common_10[0]));
          MR_hl_field(0, Var_73, 1) = ((MR_Box) (make__module_target__build_target_2_12_p_0_12));
          MR_hl_field(0, Var_73, 2) = ((MR_Box) ((MR_Integer) 7));
          MR_hl_field(0, Var_73, 3) = ((MR_Box) (Globals_17));
          MR_hl_field(0, Var_73, 4) = ((MR_Box) (ModuleName_13));
          MR_hl_field(0, Var_73, 5) = ((MR_Box) (CompilationTarget_36));
          MR_hl_field(0, Var_73, 6) = ((MR_Box) (PIC_35));
          MR_hl_field(0, Var_73, 7) = ((MR_Box) (ProgressStream_23));
          MR_hl_field(0, Var_73, 8) = ((MR_Box) (ErrorStream_19));
          MR_hl_field(0, Var_73, 9) = ((MR_Box) (ModuleDepInfo_16));
        }
        libs__process_util__call_in_forked_process_4_p_0(Var_73, Succeeded_20);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word Lang_37 = ((MR_Unsigned) ((MR_hl_field(2, Task_14, (MR_Integer) 0))) & (MR_Integer) 3);
        MR_Word ForeignCodeFile_38;
        MR_Word Var_76;
        MR_Word PIC_83 = ((((MR_Unsigned) ((MR_hl_field(2, Task_14, (MR_Integer) 0))) >> 2)) & (MR_Integer) 1);

        make__module_target__get_foreign_code_file_7_p_0(Globals_17, ModuleName_13, PIC_83, Lang_37, &ForeignCodeFile_38);
        {
          Var_76 = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_76, 0) = ((MR_Box) (&make__module_target_scalar_common_8[0]));
          MR_hl_field(0, Var_76, 1) = ((MR_Box) (make__module_target__build_target_2_12_p_0_2));
          MR_hl_field(0, Var_76, 2) = ((MR_Box) ((MR_Integer) 6));
          MR_hl_field(0, Var_76, 3) = ((MR_Box) (Globals_17));
          MR_hl_field(0, Var_76, 4) = ((MR_Box) (ProgressStream_23));
          MR_hl_field(0, Var_76, 5) = ((MR_Box) (ErrorStream_19));
          MR_hl_field(0, Var_76, 6) = ((MR_Box) (PIC_83));
          MR_hl_field(0, Var_76, 7) = ((MR_Box) (ModuleDepInfo_16));
          MR_hl_field(0, Var_76, 8) = ((MR_Box) (ForeignCodeFile_38));
        }
        libs__process_util__call_in_forked_process_4_p_0(Var_76, Succeeded_20);
      }
      break;
    case (MR_Integer) 3:
      {
        MR_String FactTableFileName_39 = ((MR_String) ((MR_hl_field(3, Task_14, (MR_Integer) 1))));
        MR_Word ObjExt_40;
        MR_Word FactTableForeignCode_41;
        MR_Word Var_79;
        MR_Word Var_81;
        MR_Word PIC_84 = ((MR_Unsigned) ((MR_hl_field(3, Task_14, (MR_Integer) 0))) & (MR_Integer) 1);
        MR_Word CompilationTarget_108;
        MR_String FactTableCFileName_114;
        MR_String FactTableObjFileName_115;

        libs__globals__get_target_2_p_0(Globals_17, &CompilationTarget_108);
        switch (CompilationTarget_108) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Var_109;

              backend_libs__compile_target_code__maybe_pic_object_file_extension_3_p_0(PIC_84, &ObjExt_40, &Var_109);
            }
            break;
          case (MR_Integer) 1:
            {
              mercury__require__sorry_2_p_0((MR_String) "predicate \140make.module_target.get_object_extension\'/3", (MR_String) "object extension for csharp");
              return;
            }
            break;
          case (MR_Integer) 2:
            {
              mercury__require__sorry_2_p_0((MR_String) "predicate \140make.module_target.get_object_extension\'/3", (MR_String) "object extension for java");
              return;
            }
            break;
        }
        {
          Var_79 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_79, 0) = ((MR_Box) ((MR_Unsigned) 5U));
          MR_hl_field(3, Var_79, 1) = (MR_Box) ((MR_Unsigned) (ObjExt_40));
        }
        parse_tree__file_names__fact_table_file_name_8_p_0(Globals_17, (MR_String) "predicate \140make.module_target.get_fact_table_foreign_code_file\'/7", (MR_Integer) 0, (MR_Word) (MR_mkword(3, &make__module_target_scalar_common_1[28])), FactTableFileName_39, &FactTableCFileName_114);
        parse_tree__file_names__fact_table_file_name_8_p_0(Globals_17, (MR_String) "predicate \140make.module_target.get_fact_table_foreign_code_file\'/7", (MR_Integer) 0, Var_79, FactTableFileName_39, &FactTableObjFileName_115);
        {
          FactTableForeignCode_41 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, FactTableForeignCode_41, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
          MR_hl_field(0, FactTableForeignCode_41, 1) = ((MR_Box) (FactTableCFileName_114));
          MR_hl_field(0, FactTableForeignCode_41, 2) = ((MR_Box) (FactTableObjFileName_115));
        }
        {
          Var_81 = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_81, 0) = ((MR_Box) (&make__module_target_scalar_common_8[0]));
          MR_hl_field(0, Var_81, 1) = ((MR_Box) (make__module_target__build_target_2_12_p_0_1));
          MR_hl_field(0, Var_81, 2) = ((MR_Box) ((MR_Integer) 6));
          MR_hl_field(0, Var_81, 3) = ((MR_Box) (Globals_17));
          MR_hl_field(0, Var_81, 4) = ((MR_Box) (ProgressStream_23));
          MR_hl_field(0, Var_81, 5) = ((MR_Box) (ErrorStream_19));
          MR_hl_field(0, Var_81, 6) = ((MR_Box) (PIC_84));
          MR_hl_field(0, Var_81, 7) = ((MR_Box) (ModuleDepInfo_16));
          MR_hl_field(0, Var_81, 8) = ((MR_Box) (FactTableForeignCode_41));
        }
        libs__process_util__call_in_forked_process_4_p_0(Var_81, Succeeded_20);
      }
      break;
  }
  *STATE_VARIABLE_Info_43 = STATE_VARIABLE_Info_0_42;
}

static void MR_CALL 
make__module_target__call_mercury_compile_main_5_p_0(
  MR_Word Globals_6,
  MR_Word Args_7,
  MR_Word * Succeeded_8)
{
  MR_bool succeeded;
  MR_Integer Status0_10;
  MR_Integer Status_11;

  mercury__io__get_exit_status_3_p_0(&Status0_10);
  mercury__io__set_exit_status_3_p_0((MR_Integer) 0);
  top_level__mercury_compile_main__main_for_make_4_p_0(Globals_6, Args_7);
  mercury__io__get_exit_status_3_p_0(&Status_11);
  succeeded = (Status_11 == (MR_Integer) 0);
  if (succeeded)
    *Succeeded_8 = (MR_Integer) 1;
  else
    *Succeeded_8 = (MR_Integer) 0;
  mercury__io__set_exit_status_3_p_0(Status0_10);
}

static void MR_CALL 
make__module_target__get_foreign_code_file_7_p_0(
  MR_Word Globals_8,
  MR_Word ModuleName_9,
  MR_Word PIC_10,
  MR_Word Lang_11,
  MR_Word * ForeignCodeFile_12)
{
  MR_Word ForeignModName_14;
  MR_Word SrcExt_15;
  MR_Word ObjExt_16;
  MR_String SrcFileName_17;
  MR_String ObjFileName_18;
  MR_Word Var_26;
  MR_Word CompilationTarget_27;

  parse_tree__prog_foreign__foreign_language_module_name_3_p_0(ModuleName_9, Lang_11, &ForeignModName_14);
  parse_tree__prog_foreign__foreign_language_file_extension_2_p_0(Lang_11, &SrcExt_15);
  libs__globals__get_target_2_p_0(Globals_8, &CompilationTarget_27);
  switch (CompilationTarget_27) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word Var_28;

        backend_libs__compile_target_code__maybe_pic_object_file_extension_3_p_0(PIC_10, &ObjExt_16, &Var_28);
      }
      break;
    case (MR_Integer) 1:
      {
        mercury__require__sorry_2_p_0((MR_String) "predicate \140make.module_target.get_object_extension\'/3", (MR_String) "object extension for csharp");
        return;
      }
      break;
    case (MR_Integer) 2:
      {
        mercury__require__sorry_2_p_0((MR_String) "predicate \140make.module_target.get_object_extension\'/3", (MR_String) "object extension for java");
        return;
      }
      break;
  }
  parse_tree__file_names__module_name_to_file_name_8_p_0(Globals_8, (MR_String) "predicate \140make.module_target.get_foreign_code_file\'/7", (MR_Integer) 0, SrcExt_15, ForeignModName_14, &SrcFileName_17);
  {
    Var_26 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_26, 0) = ((MR_Box) ((MR_Unsigned) 5U));
    MR_hl_field(3, Var_26, 1) = (MR_Box) ((MR_Unsigned) (ObjExt_16));
  }
  parse_tree__file_names__module_name_to_file_name_8_p_0(Globals_8, (MR_String) "predicate \140make.module_target.get_foreign_code_file\'/7", (MR_Integer) 0, Var_26, ForeignModName_14, &ObjFileName_18);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    *ForeignCodeFile_12 = base;
    MR_hl_field(0, base, 0) = (MR_Box) ((MR_Unsigned) (Lang_11));
    MR_hl_field(0, base, 1) = ((MR_Box) (SrcFileName_17));
    MR_hl_field(0, base, 2) = ((MR_Box) (ObjFileName_18));
  }
}

static MR_bool MR_CALL 
make__module_target__make_dependency_files_11_p_0_10(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = make__module_target__IntroducedFrom__pred__make_dependency_files__399__1_2_p_0(((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

static void MR_CALL 
make__module_target__make_dependency_files_11_p_0_9(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  MR_Box closure = closure_arg;
  MR_Word conv12_HeadVar__3_3;
  MR_Word conv11_HeadVar__5_5;

  make__util__get_file_timestamp_7_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_String) (wrapper_arg_1)), &conv12_HeadVar__3_3, ((MR_Word) (wrapper_arg_3)), &conv11_HeadVar__5_5);
  *wrapper_arg_2 = ((MR_Box) (conv12_HeadVar__3_3));
  *wrapper_arg_4 = ((MR_Box) (conv11_HeadVar__5_5));
}

static void MR_CALL 
make__module_target__make_dependency_files_11_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  MR_Box closure = closure_arg;
  MR_Word conv8_HeadVar__3_3;
  MR_Word conv7_HeadVar__5_5;

  make__util__get_timestamp_file_timestamp_7_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv8_HeadVar__3_3, ((MR_Word) (wrapper_arg_3)), &conv7_HeadVar__5_5);
  *wrapper_arg_2 = ((MR_Box) (conv8_HeadVar__3_3));
  *wrapper_arg_4 = ((MR_Box) (conv7_HeadVar__5_5));
}

static void MR_CALL 
make__module_target__make_dependency_files_11_p_0_7(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1)
{
  MR_Box closure = closure_arg;
  MR_String conv6_HeadVar__3_3;

  mercury__string__format_3_p_0(((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), &conv6_HeadVar__3_3);
  *wrapper_arg_1 = ((MR_Box) (conv6_HeadVar__3_3));
}

static void MR_CALL 
make__module_target__make_dependency_files_11_p_0_2(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1)
{
  MR_Box closure = closure_arg;
  MR_String conv4_HeadVar__3_3;

  mercury__string__format_3_p_0(((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), &conv4_HeadVar__3_3);
  *wrapper_arg_1 = ((MR_Box) (conv4_HeadVar__3_3));
}

static void MR_CALL 
make__module_target__make_dependency_files_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_HeadVar__4_4;
  MR_Word conv0_HeadVar__6_6;

  make__util__get_target_timestamp_8_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv1_HeadVar__4_4, ((MR_Word) (wrapper_arg_3)), &conv0_HeadVar__6_6);
  *wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__4_4));
  *wrapper_arg_4 = ((MR_Box) (conv0_HeadVar__6_6));
}

static void MR_CALL 
make__module_target__make_dependency_files_11_p_0_3(
  void * env_ptr_arg)
{
  struct make__module_target__make_dependency_files_11_p_0_env_0_s * env_ptr = (struct make__module_target__make_dependency_files_11_p_0_env_0_s *) (env_ptr_arg);

  MR_builtin_longjmp((env_ptr)->make__module_target__make_dependency_files_11_p_0_env_0__commit_0, 1);
}

static void MR_CALL 
make__module_target__make_dependency_files_11_p_0_5(
  void * env_ptr_arg)
{
  struct make__module_target__make_dependency_files_11_p_0_env_0_s * env_ptr = (struct make__module_target__make_dependency_files_11_p_0_env_0_s *) (env_ptr_arg);

  (env_ptr)->make__module_target__make_dependency_files_11_p_0_env_0__Var_104 = ((MR_Word) ((env_ptr)->make__module_target__make_dependency_files_11_p_0_env_0__conv5_Var_104));
  make__module_target__make_dependency_files_11_p_0_4(env_ptr);
}

static void MR_CALL 
make__module_target__make_dependency_files_11_p_0_4(
  void * env_ptr_arg)
{
  struct make__module_target__make_dependency_files_11_p_0_env_0_s * env_ptr = (struct make__module_target__make_dependency_files_11_p_0_env_0_s *) (env_ptr_arg);

  {
    MR_String ArgX1_111;

    (env_ptr)->make__module_target__make_dependency_files_11_p_0_env_0__succeeded = ((MR_tag((MR_Word) (env_ptr)->make__module_target__make_dependency_files_11_p_0_env_0__Var_104)) == (MR_Integer) 1);
    if ((env_ptr)->make__module_target__make_dependency_files_11_p_0_env_0__succeeded)
    {
      ArgX1_111 = ((MR_String) ((MR_hl_field(1, (env_ptr)->make__module_target__make_dependency_files_11_p_0_env_0__Var_104, (MR_Integer) 0))));
      make__module_target__make_dependency_files_11_p_0_3(env_ptr);
    }
  }
}

static void MR_CALL 
make__module_target__make_dependency_files_11_p_0_6(
  void * env_ptr_arg)
{
  struct make__module_target__make_dependency_files_11_p_0_env_0_s * env_ptr = (struct make__module_target__make_dependency_files_11_p_0_env_0_s *) (env_ptr_arg);

  if (MR_builtin_setjmp((env_ptr)->make__module_target__make_dependency_files_11_p_0_env_0__commit_0) == 0)
    {
      mercury__list__member_2_p_1((MR_Word) (&make__module_target_scalar_common_2[0]), &(env_ptr)->make__module_target__make_dependency_files_11_p_0_env_0__conv5_Var_104, (env_ptr)->make__module_target__make_dependency_files_11_p_0_env_0__TargetTimestamps_23, make__module_target__make_dependency_files_11_p_0_5, env_ptr);
      (env_ptr)->make__module_target__make_dependency_files_11_p_0_env_0__succeeded = MR_FALSE;
    }
  else
    (env_ptr)->make__module_target__make_dependency_files_11_p_0_env_0__succeeded = MR_TRUE;
}

static void MR_CALL 
make__module_target__make_dependency_files_11_p_0(
  MR_Word Globals_12,
  MR_Word TargetFile_13,
  MR_String TargetFileName_14,
  MR_Word DepFilesToMake_15,
  MR_Word TouchedTargetFiles_16,
  MR_Word TouchedFiles_17,
  MR_Word * DepsResult_18,
  MR_Word STATE_VARIABLE_Info_0_33,
  MR_Word * STATE_VARIABLE_Info_34)
{
  struct make__module_target__make_dependency_files_11_p_0_env_0_s env;

  {
    MR_Word KeepGoing_21;
    MR_Word MakeDepsSucceeded_22;
    MR_Word STATE_VARIABLE_Info_38_38;
    MR_Word Var_40;
    MR_Word STATE_VARIABLE_Info_41_41;
    MR_Box conv3_STATE_VARIABLE_Info_41_41;
    MR_Box conv2_STATE_VARIABLE_IO_42_42;

    KeepGoing_21 = make__make_info__make_info_get_keep_going_1_f_0(STATE_VARIABLE_Info_0_33);
    make__build__foldl2_make_module_targets_9_p_0(KeepGoing_21, (MR_Word) ((MR_Unsigned) 0U), Globals_12, DepFilesToMake_15, &MakeDepsSucceeded_22, STATE_VARIABLE_Info_0_33, &STATE_VARIABLE_Info_38_38);
    {
      Var_40 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_40, 0) = ((MR_Box) (&make__module_target_scalar_common_4[0]));
      MR_hl_field(0, Var_40, 1) = ((MR_Box) (make__module_target__make_dependency_files_11_p_0_1));
      MR_hl_field(0, Var_40, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(0, Var_40, 3) = ((MR_Box) (Globals_12));
      MR_hl_field(0, Var_40, 4) = ((MR_Box) ((MR_Integer) 1));
    }
    mercury__list__map_foldl2_7_p_2((MR_Word) (&make__make_info__make__make_info__type_ctor_info_target_file_0), (MR_Word) (&make__module_target_scalar_common_2[0]), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_40, TouchedTargetFiles_16, &(env).make__module_target__make_dependency_files_11_p_0_env_0__TargetTimestamps_23, ((MR_Box) (STATE_VARIABLE_Info_38_38)), &conv3_STATE_VARIABLE_Info_41_41, ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_42_42);
    STATE_VARIABLE_Info_41_41 = ((MR_Word) (conv3_STATE_VARIABLE_Info_41_41));
    switch (MakeDepsSucceeded_22) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_String DebugMsg_24;
          MR_Word Var_44;
          MR_Word Var_46;
          MR_Word Var_47;

          {
            Var_47 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_47, 0) = ((MR_Box) ((MR_Unsigned) 8U));
            MR_hl_field(3, Var_47, 1) = ((MR_Box) (TargetFileName_14));
          }
          {
            Var_46 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_46, 0) = ((MR_Box) (Var_47));
            MR_hl_field(1, Var_46, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_44 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_44, 0) = ((MR_Box) (&make__module_target_scalar_common_5[0]));
            MR_hl_field(0, Var_44, 1) = ((MR_Box) (make__module_target__make_dependency_files_11_p_0_2));
            MR_hl_field(0, Var_44, 2) = ((MR_Box) ((MR_Integer) 2));
            MR_hl_field(0, Var_44, 3) = ((MR_Box) ((MR_String) "%s: error msking dependencies\n"));
            MR_hl_field(0, Var_44, 4) = ((MR_Box) (Var_46));
          }
          make__util__debug_make_msg_3_p_0(Globals_12, Var_44, &DebugMsg_24);
          make__util__maybe_write_msg_3_p_0(DebugMsg_24);
          *DepsResult_18 = (MR_Integer) 2;
          *STATE_VARIABLE_Info_34 = STATE_VARIABLE_Info_41_41;
        }
        break;
      case (MR_Integer) 1:
        {
          make__module_target__make_dependency_files_11_p_0_6(&env);
          if ((env).make__module_target__make_dependency_files_11_p_0_env_0__succeeded)
          {
            MR_Word Var_51;
            MR_Word Var_53;
            MR_Word Var_54;
            MR_String DebugMsg_77;

            {
              Var_54 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_54, 0) = ((MR_Box) ((MR_Unsigned) 8U));
              MR_hl_field(3, Var_54, 1) = ((MR_Box) (TargetFileName_14));
            }
            {
              Var_53 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_53, 0) = ((MR_Box) (Var_54));
              MR_hl_field(1, Var_53, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Var_51 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_51, 0) = ((MR_Box) (&make__module_target_scalar_common_5[0]));
              MR_hl_field(0, Var_51, 1) = ((MR_Box) (make__module_target__make_dependency_files_11_p_0_7));
              MR_hl_field(0, Var_51, 2) = ((MR_Box) ((MR_Integer) 2));
              MR_hl_field(0, Var_51, 3) = ((MR_Box) ((MR_String) "%s: target file does not exist\n"));
              MR_hl_field(0, Var_51, 4) = ((MR_Box) (Var_53));
            }
            make__util__debug_make_msg_3_p_0(Globals_12, Var_51, &DebugMsg_77);
            make__util__maybe_write_msg_3_p_0(DebugMsg_77);
            *DepsResult_18 = (MR_Integer) 1;
            *STATE_VARIABLE_Info_34 = STATE_VARIABLE_Info_41_41;
          }
          else
          {
            MR_Word ForceReanalysis_28;
            MR_Word ModuleName_26 = ((MR_Word) ((MR_hl_field(0, TargetFile_13, (MR_Integer) 0))));
            MR_Word TargetType_27 = ((MR_Word) ((MR_hl_field(0, TargetFile_13, (MR_Integer) 1))));

            (env).make__module_target__make_dependency_files_11_p_0_env_0__succeeded = (TargetType_27 == (MR_Word) ((MR_Unsigned) 28U));
            if ((env).make__module_target__make_dependency_files_11_p_0_env_0__succeeded)
            {
              MR_Integer Var_116;

              Var_116 = make__make_info__make_info_get_reanalysis_passes_1_f_0(STATE_VARIABLE_Info_41_41);
              (env).make__module_target__make_dependency_files_11_p_0_env_0__succeeded = (Var_116 > (MR_Integer) 0);
              if ((env).make__module_target__make_dependency_files_11_p_0_env_0__succeeded)
              {
                MR_Word AnalysisStatus_115;

                analysis__do_read_module_overall_status_6_p_0((MR_Word) (&make__module_target_scalar_common_1[1]), ((MR_Box) ((MR_Integer) 0)), Globals_12, ModuleName_26, &AnalysisStatus_115);
                switch (AnalysisStatus_115) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                  case (MR_Integer) 1:
                    ForceReanalysis_28 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 2:
                    ForceReanalysis_28 = (MR_Integer) 0;
                    break;
                }
              }
              else
                ForceReanalysis_28 = (MR_Integer) 0;
            }
            else
              ForceReanalysis_28 = (MR_Integer) 0;
            switch (ForceReanalysis_28) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word TouchedTargetFileTimestamps_29;
                  MR_Word TouchedFileTimestamps_30;
                  MR_Word MaybeOldestTimestamp_31;
                  MR_String TargetFileNameB_32;
                  MR_Word Var_58;
                  MR_Word STATE_VARIABLE_Info_59_59;
                  MR_Word Var_61;
                  MR_Word STATE_VARIABLE_Info_62_62;
                  MR_Word Var_64;
                  MR_String Var_65;
                  MR_Word Var_67;
                  MR_Word STATE_VARIABLE_Info_70_70;
                  MR_Word Var_72;
                  MR_Box conv10_STATE_VARIABLE_Info_59_59;
                  MR_Box conv9_STATE_VARIABLE_IO_60_60;
                  MR_Box conv14_STATE_VARIABLE_Info_62_62;
                  MR_Box conv13_STATE_VARIABLE_IO_63_63;

                  {
                    Var_58 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, Var_58, 0) = ((MR_Box) (&make__module_target_scalar_common_6[0]));
                    MR_hl_field(0, Var_58, 1) = ((MR_Box) (make__module_target__make_dependency_files_11_p_0_8));
                    MR_hl_field(0, Var_58, 2) = ((MR_Box) ((MR_Integer) 1));
                    MR_hl_field(0, Var_58, 3) = ((MR_Box) (Globals_12));
                  }
                  mercury__list__map_foldl2_7_p_2((MR_Word) (&make__make_info__make__make_info__type_ctor_info_target_file_0), (MR_Word) (&make__module_target_scalar_common_2[0]), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_58, TouchedTargetFiles_16, &TouchedTargetFileTimestamps_29, ((MR_Box) (STATE_VARIABLE_Info_41_41)), &conv10_STATE_VARIABLE_Info_59_59, ((MR_Box) ((MR_Integer) 0)), &conv9_STATE_VARIABLE_IO_60_60);
                  STATE_VARIABLE_Info_59_59 = ((MR_Word) (conv10_STATE_VARIABLE_Info_59_59));
                  Var_65 = mercury__dir__this_directory_0_f_0();
                  {
                    Var_64 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_64, 0) = ((MR_Box) (Var_65));
                    MR_hl_field(1, Var_64, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  {
                    Var_61 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, Var_61, 0) = ((MR_Box) (&make__module_target_scalar_common_6[1]));
                    MR_hl_field(0, Var_61, 1) = ((MR_Box) (make__module_target__make_dependency_files_11_p_0_9));
                    MR_hl_field(0, Var_61, 2) = ((MR_Box) ((MR_Integer) 1));
                    MR_hl_field(0, Var_61, 3) = ((MR_Box) (Var_64));
                  }
                  mercury__list__map_foldl2_7_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__module_target_scalar_common_2[0]), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_61, TouchedFiles_17, &TouchedFileTimestamps_30, ((MR_Box) (STATE_VARIABLE_Info_59_59)), &conv14_STATE_VARIABLE_Info_62_62, ((MR_Box) ((MR_Integer) 0)), &conv13_STATE_VARIABLE_IO_63_63);
                  STATE_VARIABLE_Info_62_62 = ((MR_Word) (conv14_STATE_VARIABLE_Info_62_62));
                  Var_67 = mercury__list__f_43_43_2_f_0((MR_Word) (&make__module_target_scalar_common_2[0]), TouchedTargetFileTimestamps_29, TouchedFileTimestamps_30);
                  make__util__find_error_or_oldest_ok_timestamp_2_p_0(Var_67, &MaybeOldestTimestamp_31);
                  make__util__get_file_name_9_p_0(Globals_12, (MR_String) "predicate \140make.module_target.make_dependency_files\'/11", (MR_Integer) 1, TargetFile_13, &TargetFileNameB_32, STATE_VARIABLE_Info_62_62, &STATE_VARIABLE_Info_70_70);
                  {
                    Var_72 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, Var_72, 0) = ((MR_Box) (&make__module_target_scalar_common_7[0]));
                    MR_hl_field(0, Var_72, 1) = ((MR_Box) (make__module_target__make_dependency_files_11_p_0_10));
                    MR_hl_field(0, Var_72, 2) = ((MR_Box) ((MR_Integer) 2));
                    MR_hl_field(0, Var_72, 3) = ((MR_Box) (TargetFileName_14));
                    MR_hl_field(0, Var_72, 4) = ((MR_Box) (TargetFileNameB_32));
                  }
                  mercury__require__expect_3_p_0(Var_72, (MR_String) "predicate \140make.module_target.make_dependency_files\'/11", (MR_String) "TargetFileName mismatch");
                  make__dependencies__check_dependencies_10_p_0(Globals_12, TargetFileNameB_32, MaybeOldestTimestamp_31, MakeDepsSucceeded_22, DepFilesToMake_15, DepsResult_18, STATE_VARIABLE_Info_70_70, STATE_VARIABLE_Info_34);
                }
                break;
              case (MR_Integer) 1:
                {
                  *DepsResult_18 = (MR_Integer) 1;
                  *STATE_VARIABLE_Info_34 = STATE_VARIABLE_Info_41_41;
                }
                break;
            }
          }
        }
        break;
    }
  }
}

static MR_bool MR_CALL 
make__module_target____Unify____compilation_task_type_and_options_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = make__module_target____Unify____compilation_task_type_and_options_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
make__module_target____Compare____compilation_task_type_and_options_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  make__module_target____Compare____compilation_task_type_and_options_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
make__module_target____Unify____foreign_code_file_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = make__module_target____Unify____foreign_code_file_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
make__module_target____Compare____foreign_code_file_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  make__module_target____Compare____foreign_code_file_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__make__module_target__init(void)
{
}

void mercury__make__module_target__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&make__module_target__make__module_target__type_ctor_info_compilation_task_type_and_options_0);
	MR_register_type_ctor_info(&make__module_target__make__module_target__type_ctor_info_foreign_code_file_0);
}

void mercury__make__module_target__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__make__module_target__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module make.module_target.
