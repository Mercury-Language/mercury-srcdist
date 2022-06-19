/*
** Automatically generated from `make.module_target.m'
** by the Mercury compiler,
** version 22.01.2
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
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.maybe_succeeded.mih"
#include "libs.op_mode.mih"
#include "libs.optimization_options.mih"
#include "libs.options.mih"
#include "libs.process_util.mih"
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
#include "parse_tree.read_modules.mih"
#include "parse_tree.set_of_var.mih"
#include "string.format.mih"
#include "string.parse_util.mih"
#include "top_level.mercury_compile_main.mih"
#include "transform_hlds.mmc_analysis.mih"



struct make__module_target__make_dependency_files_10_p_0_env_0_s {
  MR_bool make__module_target__make_dependency_files_10_p_0_env_0__succeeded;
  MR_Word make__module_target__make_dependency_files_10_p_0_env_0__TargetTimestamps_21;
  jmp_buf make__module_target__make_dependency_files_10_p_0_env_0__commit_0;
  MR_Word make__module_target__make_dependency_files_10_p_0_env_0__TypeCtorInfo_114_114;
  MR_Word make__module_target__make_dependency_files_10_p_0_env_0__TypeCtorInfo_115_115;
  MR_Word make__module_target__make_dependency_files_10_p_0_env_0__Var_41;
  MR_Word make__module_target__make_dependency_files_10_p_0_env_0__Var_113;
  MR_Box make__module_target__make_dependency_files_10_p_0_env_0__conv8_Var_113;
};


static const MR_FA_PseudoTypeInfo_Struct2 make__module_target__maybe__pti_maybe_error_2__plain_libs__timestamp__type_ctor_info_timestamp_0__plain_builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct1 make__module_target__list__pti_list_1__plain_builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct1 make__module_target__maybe__pti_maybe_1__plain_builtin__type_ctor_info_string_0;

static const MR_FA_TypeInfo_Struct2 make__module_target__maybe__ti_maybe_error_2libs__timestamp__type_ctor_info_timestamp_0builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct2 make__module_target__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_maybe__ti_maybe_error_2libs__timestamp__type_ctor_info_timestamp_0builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct1 make__module_target__list__pti_list_1__plain_make__make_info__type_ctor_info_target_file_0;

static const MR_FA_PseudoTypeInfo_Struct1 make__module_target__list__pti_list_1__plain_make__module_target__type_ctor_info_foreign_code_file_0;

static const MR_FA_TypeInfo_Struct1 make__module_target__sparse_bitset__ti_sparse_bitset_1make__deps_set__type_ctor_info_dependency_file_index_0;

static const MR_VA_PseudoTypeInfo_Struct8 make__module_target____vpti_pred_8__plain_libs__globals__type_ctor_info_globals_0__plain_make__deps_set__type_ctor_info_module_index_0__plain_libs__maybe_succeeded__type_ctor_info_maybe_succeeded_0__plain_sparse_bitset__ti_sparse_bitset_1make__deps_set__type_ctor_info_dependency_file_index_0__plain_make__make_info__type_ctor_info_make_info_0__plain_make__make_info__type_ctor_info_make_info_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0;

static const MR_FA_PseudoTypeInfo_Struct1 make__module_target__sparse_bitset__pti_sparse_bitset_1__plain_make__deps_set__type_ctor_info_dependency_file_index_0;

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
make__module_target__IntroducedFrom__func__find_files_maybe_touched_by_process_module__1018__1_1_f_0(
  MR_Word LambdaHeadVar__1_64);

static MR_bool MR_CALL 
make__module_target__IntroducedFrom__pred__find_files_maybe_touched_by_process_module__997__1_2_p_0(
  MR_Word LambdaHeadVar__1_53,
  MR_Word * LambdaHeadVar__2_54);

static void MR_CALL 
make__module_target__IntroducedFrom__pred__delete_timestamp__852__1_3_p_0(
  MR_String TouchedFile_6);

static void MR_CALL 
make__module_target__IntroducedFrom__pred__make_module_target_file_main_path__241__1_6_p_0(
  MR_Word Globals_11,
  MR_Word TargetFile_12,
  MR_Word DepFiles0_33,
  MR_Word STATE_VARIABLE_Info_62_62);

static void MR_CALL 
make__module_target__IntroducedFrom__pred__make_module_target_file_main_path__225__1_10_p_0(
  MR_Word HeadVar__1_64,
  MR_Word HeadVar__2_186,
  MR_Word HeadVar__3_187,
  MR_Word * HeadVar__4_188,
  MR_Word HeadVar__5_189,
  MR_Word * HeadVar__6_190,
  MR_Word HeadVar__7_191,
  MR_Word * HeadVar__8_192);

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
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
make__module_target__delete_timestamp_4_p_0(
  MR_Word Globals_5,
  MR_String TouchedFile_6,
  MR_Word STATE_VARIABLE_Timestamps_0_9,
  MR_Word * STATE_VARIABLE_Timestamps_10);

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
make__module_target__make_module_target_file_main_path_9_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
make__module_target__make_module_target_file_main_path_9_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
make__module_target__make_module_target_file_main_path_9_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
make__module_target__make_module_target_file_main_path_9_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
make__module_target__make_module_target_file_main_path_9_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
make__module_target__make_module_target_file_main_path_9_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7,
  MR_Box wrapper_arg_8,
  MR_Box * wrapper_arg_9);

static void MR_CALL 
make__module_target__make_module_target_file_main_path_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
make__module_target__make_module_target_file_extra_options_8_p_0(
  MR_Word tscc_proc_2_input_1_ExtraOptions_9,
  MR_Word tscc_proc_2_input_2_Globals_10,
  MR_Word tscc_proc_2_input_3_TargetFile_11,
  MR_Word * tscc_output_ptr_1_Succeeded_12,
  MR_Word tscc_proc_2_input_4_STATE_VARIABLE_Info_0_23,
  MR_Word * tscc_output_ptr_2_STATE_VARIABLE_Info_19);

static void MR_CALL 
make__module_target__make_module_target_file_main_path_9_p_0(
  MR_Word tscc_proc_3_input_1_ExtraOptions_10,
  MR_Word tscc_proc_3_input_2_Globals_11,
  MR_Word tscc_proc_3_input_3_TargetFile_12,
  MR_Word tscc_proc_3_input_4_ModuleDepInfo_13,
  MR_Word * tscc_output_ptr_1_Succeeded_12,
  MR_Word tscc_proc_3_input_5_STATE_VARIABLE_Info_0_43,
  MR_Word * tscc_output_ptr_2_STATE_VARIABLE_Info_19);

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

static MR_Word MR_CALL 
make__module_target__target_type_to_pic_1_f_0(
  MR_Word TargetType_3);

static MR_Word MR_CALL 
make__module_target__compilation_task_1_f_0(
  MR_Word Target_3);

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
  MR_Word STATE_VARIABLE_Info_0_52,
  MR_Word * STATE_VARIABLE_Info_53);

static void MR_CALL 
make__module_target__record_made_target_given_maybe_touched_files_9_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
make__module_target__record_made_target_given_maybe_touched_files_9_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
make__module_target__record_made_target_given_maybe_touched_files_9_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
make__module_target__record_made_target_given_maybe_touched_files_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
make__module_target__record_made_target_given_maybe_touched_files_9_p_0(
  MR_Word Globals_10,
  MR_Word Succeeded_11,
  MR_Word TargetFile_12,
  MR_Word TouchedTargetFiles_13,
  MR_Word OtherTouchedFiles_14,
  MR_Word STATE_VARIABLE_Info_0_21,
  MR_Word * STATE_VARIABLE_Info_22);

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
make__module_target__get_fact_table_foreign_code_file_7_p_0(
  MR_Word Globals_8,
  MR_Word Mkdir_9,
  MR_Word ObjOtherExt_10,
  MR_String FactTableFileName_11,
  MR_Word * ForeignCodeFile_12);

static void MR_CALL 
make__module_target__call_mercury_compile_main_5_p_0(
  MR_Word Globals_6,
  MR_Word Args_7,
  MR_Word * Succeeded_8);

static MR_Word MR_CALL 
make__module_target__get_object_extension_2_f_0(
  MR_Word Globals_4,
  MR_Word PIC_5);

static void MR_CALL 
make__module_target__get_foreign_code_file_7_p_0(
  MR_Word Globals_8,
  MR_Word ModuleName_9,
  MR_Word PIC_10,
  MR_Word Lang_11,
  MR_Word * ForeignCodeFile_12);

static MR_Word MR_CALL 
make__module_target__forkable_module_compilation_task_type_1_f_0(
  MR_Word HeadVar__1_1);

static void MR_CALL 
make__module_target__make_dependency_files_10_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
make__module_target__make_dependency_files_10_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
make__module_target__make_dependency_files_10_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
make__module_target__make_dependency_files_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);

static void MR_CALL 
make__module_target__make_dependency_files_10_p_0_3(
  void * env_ptr_arg);

static void MR_CALL 
make__module_target__make_dependency_files_10_p_0_5(
  void * env_ptr_arg);

static void MR_CALL 
make__module_target__make_dependency_files_10_p_0_4(
  void * env_ptr_arg);

static void MR_CALL 
make__module_target__make_dependency_files_10_p_0_6(
  void * env_ptr_arg);

static void MR_CALL 
make__module_target__make_dependency_files_10_p_0(
  MR_Word Globals_11,
  MR_Word TargetFile_12,
  MR_Word DepFilesToMake_13,
  MR_Word TouchedTargetFiles_14,
  MR_Word TouchedFiles_15,
  MR_Word * DepsResult_16,
  MR_Word STATE_VARIABLE_Info_0_30,
  MR_Word * STATE_VARIABLE_Info_31);

static MR_bool MR_CALL 
make__module_target____Unify______maybemaybe_error_2_2(
  MR_Word TypeInfo_for_T_9,
  MR_Word TypeInfo_for_E_10,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
make__module_target__force_reanalysis_of_suboptimal_module_6_p_0(
  MR_Word Globals_7,
  MR_Word ModuleName_8,
  MR_Word * ForceReanalysis_9,
  MR_Word Info_10);

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


static /* final */ const MR_Box make__module_target_scalar_common_1[26][2];

static /* final */ const MR_Box make__module_target_scalar_common_2[8][3];

static /* final */ const MR_Box make__module_target_scalar_common_3[11][1];

static /* final */ const MR_Box make__module_target_scalar_common_4[7][10];

static /* final */ const MR_Box make__module_target_scalar_common_5[4][11];

static /* final */ const MR_Box make__module_target_scalar_common_7[1][12];

static /* final */ const MR_Box make__module_target_scalar_common_8[3][5];

static /* final */ const MR_Box make__module_target_scalar_common_9[2][8];

static /* final */ const MR_Box make__module_target_scalar_common_10[2][13];

static /* final */ const MR_Box make__module_target_scalar_common_11[2][7];

static /* final */ const MR_Box make__module_target_scalar_common_12[3][9];

static /* final */ const MR_Box make__module_target_scalar_common_14[5][4];

static /* final */ const MR_Box make__module_target_scalar_common_15[1][6];


/* sealed */ struct make__module_target__vector_common_type_6_0_s {
  const MR_Word make__module_target__vector_common_type_6_0__vct_6_f_0;
};

static /* final */ const struct make__module_target__vector_common_type_6_0_s make__module_target_vector_common_6[8];

/* sealed */ struct make__module_target__vector_common_type_13_0_s {
  const MR_Word make__module_target__vector_common_type_13_0__vct_13_f_0;
};

static /* final */ const struct make__module_target__vector_common_type_13_0_s make__module_target_vector_common_13[8];



static /* final */ const MR_Box make__module_target_scalar_common_1[26][2] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_enum__enum__arity1__make__deps_set__module_index__arity0__)),
    ((MR_Box) (&make__deps_set__make__deps_set__type_ctor_info_module_index_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1)),
    ((MR_Box) (&make__deps_set__make__deps_set__type_ctor_info_dependency_file_index_0))
  },
  /* row 2 */
  {
    ((MR_Box) (base_typeclass_info_analysis__compiler__arity1__transform_hlds__mmc_analysis__mmc__arity0__)),
    ((MR_Box) (&transform_hlds__mmc_analysis__transform_hlds__mmc_analysis__type_ctor_info_mmc_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&make__module_target__make__module_target__type_ctor_info_foreign_code_file_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 5 */
  {
    ((MR_Box) ((MR_String) "--make-analysis-registry")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 6 */
  {
    ((MR_Box) (&make__module_target_scalar_common_3[3])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &make__module_target_scalar_common_1[5])))
  },
  /* row 7 */
  {
    ((MR_Box) ((MR_String) "--compile-to-c")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 8 */
  {
    ((MR_Box) (&make__module_target_scalar_common_3[4])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &make__module_target_scalar_common_1[7])))
  },
  /* row 9 */
  {
    ((MR_Box) ((MR_String) "--csharp-only")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 10 */
  {
    ((MR_Box) (&make__module_target_scalar_common_3[4])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &make__module_target_scalar_common_1[9])))
  },
  /* row 11 */
  {
    ((MR_Box) ((MR_String) "--errorcheck-only")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 12 */
  {
    ((MR_Box) (&make__module_target_scalar_common_3[5])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &make__module_target_scalar_common_1[11])))
  },
  /* row 13 */
  {
    ((MR_Box) ((MR_String) "--make-private-interface")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 14 */
  {
    ((MR_Box) (&make__module_target_scalar_common_3[6])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &make__module_target_scalar_common_1[13])))
  },
  /* row 15 */
  {
    ((MR_Box) ((MR_String) "--make-interface")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 16 */
  {
    ((MR_Box) (&make__module_target_scalar_common_3[7])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &make__module_target_scalar_common_1[15])))
  },
  /* row 17 */
  {
    ((MR_Box) ((MR_String) "--make-short-interface")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 18 */
  {
    ((MR_Box) (&make__module_target_scalar_common_3[8])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &make__module_target_scalar_common_1[17])))
  },
  /* row 19 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &make__module_target_scalar_common_3[6]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 20 */
  {
    ((MR_Box) ((MR_String) "--java-only")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 21 */
  {
    ((MR_Box) (&make__module_target_scalar_common_3[4])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &make__module_target_scalar_common_1[20])))
  },
  /* row 22 */
  {
    ((MR_Box) ((MR_String) "--make-optimization-interface")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 23 */
  {
    ((MR_Box) (&make__module_target_scalar_common_3[9])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &make__module_target_scalar_common_1[22])))
  },
  /* row 24 */
  {
    ((MR_Box) ((MR_String) "--make-xml-doc")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 25 */
  {
    ((MR_Box) (&make__module_target_scalar_common_3[10])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &make__module_target_scalar_common_1[24])))
  },
};

static /* final */ const MR_Box make__module_target_scalar_common_2[8][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_target_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_error_2)),
    ((MR_Box) (&libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&make__module_target_scalar_common_2[1]))
  },
  /* row 3 */
  {
    ((MR_Box) (&make__module_target_scalar_common_4[0])),
    ((MR_Box) (make__module_target__make_dependency_files_10_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&make__module_target_scalar_common_8[0])),
    ((MR_Box) (make__module_target__build_target_2_12_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&make__module_target_scalar_common_8[1])),
    ((MR_Box) (make__module_target__find_files_maybe_touched_by_process_module_9_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&make__module_target_scalar_common_8[2])),
    ((MR_Box) (make__module_target__find_files_maybe_touched_by_process_module_9_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&make__module_target_scalar_common_8[0])),
    ((MR_Box) (make__module_target__invoke_mmc_8_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box make__module_target_scalar_common_3[11][1] = {
  /* row 0 */
  {
    (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1))))))))
  },
  /* row 1 */
  {
    ((MR_Box) (((MR_Box) ((MR_String) ".cs"))))
  },
  /* row 2 */
  {
    ((MR_Box) (((MR_Box) ((MR_String) ".java"))))
  },
  /* row 3 */
  {
    (MR_Box) ((MR_Unsigned) 5U)
  },
  /* row 4 */
  {
    (MR_Box) ((MR_Unsigned) 6U)
  },
  /* row 5 */
  {
    (MR_Box) ((MR_Unsigned) 0U)
  },
  /* row 6 */
  {
    (MR_Box) ((MR_Unsigned) 1U)
  },
  /* row 7 */
  {
    (MR_Box) ((MR_Unsigned) 2U)
  },
  /* row 8 */
  {
    (MR_Box) ((MR_Unsigned) 3U)
  },
  /* row 9 */
  {
    (MR_Box) ((MR_Unsigned) 4U)
  },
  /* row 10 */
  {
    (MR_Box) ((MR_Unsigned) 7U)
  },
};

static /* final */ const MR_Box make__module_target_scalar_common_4[7][10] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&make__dependencies__make__dependencies__type_ctor_info_dependency_file_0)),
    ((MR_Box) (&libs__maybe_succeeded__libs__maybe_succeeded__type_ctor_info_maybe_succeeded_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_make_info_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_make_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
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
  /* row 2 */
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
  /* row 3 */
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
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&parse_tree__file_names__parse_tree__file_names__type_ctor_info_maybe_create_dirs_0)),
    ((MR_Box) (&parse_tree__file_names__parse_tree__file_names__type_ctor_info_other_ext_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&make__module_target__make__module_target__type_ctor_info_foreign_code_file_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&libs__options__libs__options__type_ctor_info_option_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_target_file_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_make_info_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_make_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 6 */
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

static /* final */ const MR_Box make__module_target_scalar_common_5[4][11] = {
  /* row 0 */
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
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&make__module_target__maybe__pti_maybe_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&make__module_target__list__pti_list_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&libs__maybe_succeeded__libs__maybe_succeeded__type_ctor_info_maybe_succeeded_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&parse_tree__file_names__parse_tree__file_names__type_ctor_info_maybe_search_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_target_file_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_make_info_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_make_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 3 */
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
};

static /* final */ const MR_Box make__module_target_scalar_common_7[1][12] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 9)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&backend_libs__compile_target_code__backend_libs__compile_target_code__type_ctor_info_pic_0)),
    ((MR_Box) (&parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_module_dep_info_0)),
    ((MR_Box) (&make__module_target__make__module_target__type_ctor_info_foreign_code_file_0)),
    ((MR_Box) (&libs__maybe_succeeded__libs__maybe_succeeded__type_ctor_info_maybe_succeeded_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box make__module_target_scalar_common_8[3][5] = {
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
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_maybe_module_dep_info_0)),
    ((MR_Box) (&parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_module_dep_info_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&make__module_target__make__module_target__type_ctor_info_foreign_code_file_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box make__module_target_scalar_common_9[2][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&make__module_target__list__pti_list_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&libs__maybe_succeeded__libs__maybe_succeeded__type_ctor_info_maybe_succeeded_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
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
};

static /* final */ const MR_Box make__module_target_scalar_common_10[2][13] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 10)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_compilation_target_0)),
    ((MR_Box) (&backend_libs__compile_target_code__backend_libs__compile_target_code__type_ctor_info_pic_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_module_dep_info_0)),
    ((MR_Box) (&libs__maybe_succeeded__libs__maybe_succeeded__type_ctor_info_maybe_succeeded_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 10)),
    ((MR_Box) (&make__module_target____vpti_pred_8__plain_libs__globals__type_ctor_info_globals_0__plain_make__deps_set__type_ctor_info_module_index_0__plain_libs__maybe_succeeded__type_ctor_info_maybe_succeeded_0__plain_sparse_bitset__ti_sparse_bitset_1make__deps_set__type_ctor_info_dependency_file_index_0__plain_make__make_info__type_ctor_info_make_info_0__plain_make__make_info__type_ctor_info_make_info_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&make__deps_set__make__deps_set__type_ctor_info_module_index_0)),
    ((MR_Box) (&libs__maybe_succeeded__libs__maybe_succeeded__type_ctor_info_maybe_succeeded_0)),
    ((MR_Box) (&make__module_target__sparse_bitset__pti_sparse_bitset_1__plain_make__deps_set__type_ctor_info_dependency_file_index_0)),
    ((MR_Box) (&make__module_target__sparse_bitset__pti_sparse_bitset_1__plain_make__deps_set__type_ctor_info_dependency_file_index_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_make_info_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_make_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box make__module_target_scalar_common_11[2][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_dependency_status_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_target_file_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_make_info_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_make_info_0))
  },
  /* row 1 */
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

static /* final */ const MR_Box make__module_target_scalar_common_12[3][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&backend_libs__compile_target_code__backend_libs__compile_target_code__type_ctor_info_pic_0)),
    ((MR_Box) (&parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_module_dep_info_0)),
    ((MR_Box) (&make__module_target__list__pti_list_1__plain_make__module_target__type_ctor_info_foreign_code_file_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
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
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_target_file_0)),
    ((MR_Box) (&make__module_target__sparse_bitset__pti_sparse_bitset_1__plain_make__deps_set__type_ctor_info_dependency_file_index_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_make_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box make__module_target_scalar_common_14[5][4] = {
  /* row 0 */
  {
    ((MR_Box) (&make__module_target_scalar_common_11[0])),
    ((MR_Box) (make__module_target__make_module_target_file_main_path_9_p_0_1)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 1 */
  {
    ((MR_Box) (&make__module_target_scalar_common_11[0])),
    ((MR_Box) (make__module_target__make_module_target_file_main_path_9_p_0_4)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 3))
  },
  /* row 2 */
  {
    ((MR_Box) (&make__module_target_scalar_common_11[0])),
    ((MR_Box) (make__module_target__make_module_target_file_main_path_9_p_0_5)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 3))
  },
  /* row 3 */
  {
    ((MR_Box) (&make__module_target_scalar_common_11[0])),
    ((MR_Box) (make__module_target__make_module_target_file_main_path_9_p_0_6)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 3))
  },
  /* row 4 */
  {
    ((MR_Box) (&make__module_target_scalar_common_11[0])),
    ((MR_Box) (make__module_target__make_module_target_file_main_path_9_p_0_7)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 2))
  },
};

static /* final */ const MR_Box make__module_target_scalar_common_15[1][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};


static /* final */ const struct make__module_target__vector_common_type_6_0_s make__module_target_vector_common_6[8] = {
  /* row 0 */   {     (MR_Integer) 0 },
  /* row 1 */   {     (MR_Integer) 0 },
  /* row 2 */   {     (MR_Integer) 0 },
  /* row 3 */   {     (MR_Integer) 0 },
  /* row 4 */   {     (MR_Integer) 1 },
  /* row 5 */   {     (MR_Integer) 1 },
  /* row 6 */   {     (MR_Integer) 1 },
  /* row 7 */   {     (MR_Integer) 1 },
};

static /* final */ const struct make__module_target__vector_common_type_13_0_s make__module_target_vector_common_13[8] = {
  /* row 0 */   {     (MR_Integer) 1 },
  /* row 1 */   {     (MR_Integer) 1 },
  /* row 2 */   {     (MR_Integer) 1 },
  /* row 3 */   {     (MR_Integer) 0 },
  /* row 4 */   {     (MR_Integer) 1 },
  /* row 5 */   {     (MR_Integer) 1 },
  /* row 6 */   {     (MR_Integer) 1 },
  /* row 7 */   {     (MR_Integer) 0 },
};


#include "array.mh"
#include "bitmap.mh"
#include "dir.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "version_array.mh"
#include "libs.process_util.mh"
#include "make.build.mh"



static const MR_FA_PseudoTypeInfo_Struct2 make__module_target__maybe__pti_maybe_error_2__plain_libs__timestamp__type_ctor_info_timestamp_0__plain_builtin__type_ctor_info_string_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_error_2,
  {
    (MR_PseudoTypeInfo) (&libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0),
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 make__module_target__list__pti_list_1__plain_builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 make__module_target__maybe__pti_maybe_1__plain_builtin__type_ctor_info_string_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
  }
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
  {
    (MR_PseudoTypeInfo) (&make__make_info__make__make_info__type_ctor_info_target_file_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 make__module_target__list__pti_list_1__plain_make__module_target__type_ctor_info_foreign_code_file_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&make__module_target__make__module_target__type_ctor_info_foreign_code_file_0)
  }
};

static const MR_FA_TypeInfo_Struct1 make__module_target__sparse_bitset__ti_sparse_bitset_1make__deps_set__type_ctor_info_dependency_file_index_0 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  {
    (MR_TypeInfo) (&make__deps_set__make__deps_set__type_ctor_info_dependency_file_index_0)
  }
};

static const MR_VA_PseudoTypeInfo_Struct8 make__module_target____vpti_pred_8__plain_libs__globals__type_ctor_info_globals_0__plain_make__deps_set__type_ctor_info_module_index_0__plain_libs__maybe_succeeded__type_ctor_info_maybe_succeeded_0__plain_sparse_bitset__ti_sparse_bitset_1make__deps_set__type_ctor_info_dependency_file_index_0__plain_make__make_info__type_ctor_info_make_info_0__plain_make__make_info__type_ctor_info_make_info_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 8,
  {
    (MR_PseudoTypeInfo) (&libs__globals__libs__globals__type_ctor_info_globals_0),
    (MR_PseudoTypeInfo) (&make__deps_set__make__deps_set__type_ctor_info_module_index_0),
    (MR_PseudoTypeInfo) (&libs__maybe_succeeded__libs__maybe_succeeded__type_ctor_info_maybe_succeeded_0),
    (MR_PseudoTypeInfo) (&make__module_target__sparse_bitset__ti_sparse_bitset_1make__deps_set__type_ctor_info_dependency_file_index_0),
    (MR_PseudoTypeInfo) (&make__make_info__make__make_info__type_ctor_info_make_info_0),
    (MR_PseudoTypeInfo) (&make__make_info__make__make_info__type_ctor_info_make_info_0),
    (MR_PseudoTypeInfo) (&mercury__io__io__type_ctor_info_state_0),
    (MR_PseudoTypeInfo) (&mercury__io__io__type_ctor_info_state_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 make__module_target__sparse_bitset__pti_sparse_bitset_1__plain_make__deps_set__type_ctor_info_dependency_file_index_0 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  {
    (MR_PseudoTypeInfo) (&make__deps_set__make__deps_set__type_ctor_info_dependency_file_index_0)
  }
};

static const MR_FA_TypeInfo_Struct1 make__module_target__list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
  }
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

static const MR_DuFunctorDescPtr make__module_target__make__module_target__du_stag_ordered_compilation_task_type_and_options_0_0[1] = {
  &make__module_target__make__module_target__du_functor_desc_compilation_task_type_and_options_0_0
};

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

static const MR_DuFunctorDescPtr make__module_target__make__module_target__du_name_ordered_compilation_task_type_and_options_0[1] = {
  &make__module_target__make__module_target__du_functor_desc_compilation_task_type_and_options_0_0
};

static const MR_Integer make__module_target__make__module_target__functor_number_map_compilation_task_type_and_options_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct make__module_target__make__module_target__type_ctor_info_compilation_task_type_and_options_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (make__module_target____Unify____compilation_task_type_and_options_0_0_10001)),
  ((MR_Box) (make__module_target____Compare____compilation_task_type_and_options_0_0_10001)),
  (MR_String) "make.module_target",
  (MR_String) "compilation_task_type_and_options",
  {     make__module_target__make__module_target__du_name_ordered_compilation_task_type_and_options_0 },
  {     make__module_target__make__module_target__du_ptag_ordered_compilation_task_type_and_options_0 },
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

static const MR_DuFunctorDescPtr make__module_target__make__module_target__du_stag_ordered_foreign_code_file_0_0[1] = {
  &make__module_target__make__module_target__du_functor_desc_foreign_code_file_0_0
};

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

static const MR_DuFunctorDescPtr make__module_target__make__module_target__du_name_ordered_foreign_code_file_0[1] = {
  &make__module_target__make__module_target__du_functor_desc_foreign_code_file_0_0
};

static const MR_Integer make__module_target__make__module_target__functor_number_map_foreign_code_file_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct make__module_target__make__module_target__type_ctor_info_foreign_code_file_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (make__module_target____Unify____foreign_code_file_0_0_10001)),
  ((MR_Box) (make__module_target____Compare____foreign_code_file_0_0_10001)),
  (MR_String) "make.module_target",
  (MR_String) "foreign_code_file",
  {     make__module_target__make__module_target__du_name_ordered_foreign_code_file_0 },
  {     make__module_target__make__module_target__du_ptag_ordered_foreign_code_file_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  make__module_target__make__module_target__functor_number_map_foreign_code_file_0,

};

static MR_String MR_CALL 
make__module_target__IntroducedFrom__func__find_files_maybe_touched_by_process_module__1018__1_1_f_0(
  MR_Word LambdaHeadVar__1_64)
{
  {
    MR_String LambdaHeadVar__2_65 = ((MR_String) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_64, (MR_Integer) 1))));

    return LambdaHeadVar__2_65;
  }
}

static MR_bool MR_CALL 
make__module_target__IntroducedFrom__pred__find_files_maybe_touched_by_process_module__997__1_2_p_0(
  MR_Word LambdaHeadVar__1_53,
  MR_Word * LambdaHeadVar__2_54)
{
  {
    MR_bool succeeded = (LambdaHeadVar__1_53 != (MR_Word) ((MR_Unsigned) 0U));

    if (succeeded)
      *LambdaHeadVar__2_54 = ((MR_Word) ((MR_hl_field(MR_mktag(1), LambdaHeadVar__1_53, (MR_Integer) 0))));
    return succeeded;
  }
}

static void MR_CALL 
make__module_target__IntroducedFrom__pred__delete_timestamp__852__1_3_p_0(
  MR_String TouchedFile_6)
{
  {
    MR_Word Var_19;
    MR_Word Var_21;

    {
      Var_21 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_21, 0) = ((MR_Box) ((MR_Unsigned) 8U));
      MR_hl_field(MR_mktag(3), Var_21, 1) = ((MR_Box) (TouchedFile_6));
    }
    {
      Var_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_19, 0) = ((MR_Box) (Var_21));
      MR_hl_field(MR_mktag(1), Var_19, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    mercury__io__format_4_p_0((MR_String) "Deleting timestamp for %s\n", Var_19);
  }
}

static void MR_CALL 
make__module_target__IntroducedFrom__pred__make_module_target_file_main_path__241__1_6_p_0(
  MR_Word Globals_11,
  MR_Word TargetFile_12,
  MR_Word DepFiles0_33,
  MR_Word STATE_VARIABLE_Info_62_62)
{
  {
    MR_Word PlainSet_37;
    MR_Word Var_76;

    make__util__make_write_target_file_4_p_0(Globals_11, TargetFile_12);
    mercury__io__write_string_3_p_0((MR_String) ": dependencies:\n");
    make__deps_set__dependency_file_index_set_to_plain_set_3_p_0(STATE_VARIABLE_Info_62_62, DepFiles0_33, &PlainSet_37);
    Var_76 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&make__dependencies__make__dependencies__type_ctor_info_dependency_file_0), PlainSet_37);
    make__util__make_write_dependency_file_list_4_p_0(Globals_11, Var_76);
  }
}

static void MR_CALL 
make__module_target__IntroducedFrom__pred__make_module_target_file_main_path__225__1_10_p_0(
  MR_Word HeadVar__1_64,
  MR_Word HeadVar__2_186,
  MR_Word HeadVar__3_187,
  MR_Word * HeadVar__4_188,
  MR_Word HeadVar__5_189,
  MR_Word * HeadVar__6_190,
  MR_Word HeadVar__7_191,
  MR_Word * HeadVar__8_192)
{
  make__dependencies__union_deps_10_p_0((MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_dependency_file_index_0), HeadVar__1_64, HeadVar__2_186, HeadVar__3_187, HeadVar__4_188, HeadVar__5_189, HeadVar__6_190, HeadVar__7_191, HeadVar__8_192);
}

void MR_CALL 
make__module_target____Compare____foreign_code_file_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_12 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_13 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_12 == CastY_13);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 3);
      MR_Word ArgY1_5 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))) & (MR_Integer) 3);
      MR_String ArgX2_7 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_String ArgY2_8 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_String ArgX3_10 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_String ArgY3_11 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))));
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
}

MR_bool MR_CALL 
make__module_target____Unify____foreign_code_file_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_9 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_10 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_9 == CastY_10);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word ArgX1_3 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 3);
      MR_Word ArgY1_4 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 3);
      MR_String ArgX2_5 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_String ArgY2_6 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_String ArgX3_7 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
      MR_String ArgY3_8 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));

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
}

static void MR_CALL 
make__module_target____Compare____compilation_task_type_and_options_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_9 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_10 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_9 == CastY_10);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word SubResult1_6;

      make__make_info____Compare____compilation_task_type_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
      succeeded = (SubResult1_6 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
        mercury__builtin__compare_3_p_0((MR_Word) (&make__module_target_scalar_common_1[4]), HeadVar__1_1, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
    }
  }
}

static MR_bool MR_CALL 
make__module_target____Unify____compilation_task_type_and_options_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
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
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));

      succeeded = make__make_info____Unify____compilation_task_type_0_0(ArgX1_3, ArgY1_4);
      if (succeeded)
      {
        TypeInfo_10_10 = (MR_Word) (&make__module_target_scalar_common_1[4]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_10_10, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
make__module_target__gather_target_file_timestamp_file_names_6_p_0(
  MR_Word Globals_7,
  MR_Word TouchedTargetFile_8,
  MR_Word STATE_VARIABLE_TimestampFileNames_0_15,
  MR_Word * STATE_VARIABLE_TimestampFileNames_16)
{
  {
    MR_bool succeeded;
    MR_Word TargetModuleName_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TouchedTargetFile_8, (MR_Integer) 0))));
    MR_Word TargetType_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TouchedTargetFile_8, (MR_Integer) 1))));
    MR_Word TimestampOtherExt_13;

    succeeded = make__util__timestamp_extension_2_p_0(TargetType_12, &TimestampOtherExt_13);
    if (succeeded)
    {
      MR_String TimestampFile_14;
      MR_Word Var_21;

      {
        Var_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_21, 0) = ((MR_Box) (TimestampOtherExt_13));
      }
      parse_tree__file_names__module_name_to_file_name_8_p_0(Globals_7, (MR_String) "predicate \140make.module_target.gather_target_file_timestamp_file_names\'/6", (MR_Integer) 1, Var_21, TargetModuleName_11, &TimestampFile_14);
      mercury__list__cons_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (TimestampFile_14)), STATE_VARIABLE_TimestampFileNames_0_15, STATE_VARIABLE_TimestampFileNames_16);
    }
    else
      *STATE_VARIABLE_TimestampFileNames_16 = STATE_VARIABLE_TimestampFileNames_0_15;
  }
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
  {
    MR_bool succeeded;

    succeeded = mercury__string__suffix_2_p_0(FileName_7, (MR_String) ".analysis");
    if (succeeded)
      make__module_target__delete_timestamp_4_p_0(Globals_6, FileName_7, STATE_VARIABLE_Timestamps_0_10, STATE_VARIABLE_Timestamps_11);
    else
      *STATE_VARIABLE_Timestamps_11 = STATE_VARIABLE_Timestamps_0_10;
  }
}

static void MR_CALL 
make__module_target__delete_timestamp_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;

    make__module_target__IntroducedFrom__pred__delete_timestamp__852__1_3_p_0(((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))));
  }
}

static void MR_CALL 
make__module_target__delete_timestamp_4_p_0(
  MR_Word Globals_5,
  MR_String TouchedFile_6,
  MR_Word STATE_VARIABLE_Timestamps_0_9,
  MR_Word * STATE_VARIABLE_Timestamps_10)
{
  {
    MR_Word Var_12;

    {
      Var_12 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_12, 0) = ((MR_Box) (&make__module_target_scalar_common_15[0]));
      MR_hl_field(MR_mktag(0), Var_12, 1) = ((MR_Box) (make__module_target__delete_timestamp_4_p_0_1));
      MR_hl_field(MR_mktag(0), Var_12, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_12, 3) = ((MR_Box) (TouchedFile_6));
    }
    make__util__debug_make_msg_4_p_0(Globals_5, Var_12);
    mercury__map__delete_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__module_target_scalar_common_2[1]), ((MR_Box) (TouchedFile_6)), STATE_VARIABLE_Timestamps_0_9, STATE_VARIABLE_Timestamps_10);
  }
}

static void MR_CALL 
make__module_target__update_target_status_4_p_0(
  MR_Word TargetStatus_5,
  MR_Word TargetFile_6,
  MR_Word STATE_VARIABLE_Info_0_11,
  MR_Word * STATE_VARIABLE_Info_12)
{
  {
    MR_Word Dep_8;
    MR_Word DepStatus0_9;
    MR_Word DepStatus_10;
    MR_Word Var_34;
    MR_Word Var_35;
    MR_Word Var_36;
    MR_Word Var_37;
    MR_Word Var_38;
    MR_Word Var_39;
    MR_Word Var_40;
    MR_Word Var_41;
    MR_Word Var_43;
    MR_Word Var_44;
    MR_Word Var_45;
    MR_Word Var_46;
    MR_Word Var_49;
    MR_Word Var_50;
    MR_Word Var_51;
    MR_Integer Var_52;
    MR_Word Var_53;
    MR_Word Var_54;
    MR_Unsigned packed_word_1;

    {
      Dep_8 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Dep_8, 0) = ((MR_Box) (TargetFile_6));
    }
    DepStatus0_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_11, (MR_Integer) 8))));
    mercury__version_hash_table__set_4_p_0((MR_Word) (&make__dependencies__make__dependencies__type_ctor_info_dependency_file_0), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_dependency_status_0), ((MR_Box) (Dep_8)), ((MR_Box) (TargetStatus_5)), DepStatus0_9, &DepStatus_10);
    Var_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_11, (MR_Integer) 0))));
    Var_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_11, (MR_Integer) 1))));
    Var_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_11, (MR_Integer) 2))));
    Var_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_11, (MR_Integer) 3))));
    Var_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_11, (MR_Integer) 4))));
    Var_39 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_11, (MR_Integer) 5))));
    Var_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_11, (MR_Integer) 6))));
    Var_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_11, (MR_Integer) 7))));
    Var_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_11, (MR_Integer) 9))));
    Var_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_11, (MR_Integer) 10))));
    Var_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_11, (MR_Integer) 11))));
    Var_46 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_11, (MR_Integer) 12))));
    packed_word_1 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_11, (MR_Integer) 13)));
    Var_49 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_11, (MR_Integer) 14))));
    Var_50 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_11, (MR_Integer) 15))));
    Var_51 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_11, (MR_Integer) 16))));
    Var_52 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_11, (MR_Integer) 17))));
    Var_53 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_11, (MR_Integer) 18))));
    Var_54 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_11, (MR_Integer) 19))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (20 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Info_12 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_34));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_35));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_36));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_37));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_38));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_39));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_40));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_41));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (DepStatus_10));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_43));
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (Var_44));
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (Var_45));
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (Var_46));
      MR_hl_field(MR_mktag(0), base, 13) = (MR_Box) (packed_word_1);
      MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (Var_49));
      MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (Var_50));
      MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (Var_51));
      MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (Var_52));
      MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (Var_53));
      MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (Var_54));
    }
  }
}

static MR_Box MR_CALL 
make__module_target__invoke_mmc_8_p_0_1(
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
make__module_target__invoke_mmc_8_p_0(
  MR_Word Globals_9,
  MR_Word ProgressStream_10,
  MR_Word ErrorStream_11,
  MR_Word MaybeArgFileName_12,
  MR_Word Args_13,
  MR_Word * Succeeded_14)
{
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

      mercury__io__get_environment_var_4_p_0((MR_String) "MERCURY_COMPILER", &MaybeMercuryCompiler_17);
      if ((MaybeMercuryCompiler_17 == (MR_Word) ((MR_Unsigned) 0U)))
        MercuryCompiler_18 = (MR_String) "mmc";
      else
        MercuryCompiler_18 = ((MR_String) ((MR_hl_field(MR_mktag(1), MaybeMercuryCompiler_17, (MR_Integer) 0))));
    }
    else
      MercuryCompiler_18 = ProgName_16;
    QuotedArgs_19 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__module_target_scalar_common_2[7]), Args_13);
    if ((MaybeArgFileName_12 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140make.module_target.invoke_mmc\'/8", (MR_String) "argument file not created");
        return;
      }
    else
      ArgFileName_20 = ((MR_String) ((MR_hl_field(MR_mktag(1), MaybeArgFileName_12, (MR_Integer) 0))));
    mercury__io__open_output_4_p_0(ArgFileName_20, &ArgFileOpenRes_21);
    if (((MR_tag((MR_Word) ArgFileOpenRes_21)) == (MR_Integer) 1))
    {
      MR_Word Error_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgFileOpenRes_21, (MR_Integer) 0))));
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
      MR_Word ArgFileStream_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgFileOpenRes_21, (MR_Integer) 0))));
      MR_String Command_23;
      MR_String Var_49;
      MR_String Var_56;
      MR_String Var_59;
      MR_String Var_72;

      Var_49 = mercury__string__join_list_2_f_0((MR_String) " ", QuotedArgs_19);
      mercury__io__write_string_4_p_0(ArgFileStream_22, (MR_String) "MCFLAGS = ");
      mercury__io__write_string_4_p_0(ArgFileStream_22, Var_49);
      mercury__io__write_string_4_p_0(ArgFileStream_22, (MR_String) "\n");
      mercury__io__close_output_3_p_0(ArgFileStream_22);
      Var_56 = libs__options__quote_arg_1_f_0(MercuryCompiler_18);
      Var_59 = libs__options__quote_arg_1_f_0(ArgFileName_20);
      Var_72 = mercury__string__f_43_43_2_f_0((MR_String) " --arg-file ", Var_59);
      Command_23 = mercury__string__f_43_43_2_f_0(Var_56, Var_72);
      parse_tree__module_cmds__invoke_system_command_9_p_0(Globals_9, ProgressStream_10, ErrorStream_11, ErrorStream_11, (MR_Integer) 0, Command_23, Succeeded_14);
    }
    mercury__io__remove_file_4_p_0(ArgFileName_20, &Var_27);
  }
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
  {
    MR_String Var_33 = ((MR_String) ((MR_hl_field(MR_mktag(0), ForeignCodeFile_15, (MR_Integer) 2))));
    MR_String Var_34 = ((MR_String) ((MR_hl_field(MR_mktag(0), ForeignCodeFile_15, (MR_Integer) 1))));
    MR_Word Var_35 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ForeignCodeFile_15, (MR_Integer) 0))) & (MR_Integer) 3);

    switch (Var_35) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        backend_libs__compile_target_code__do_compile_c_file_9_p_0(Globals_10, ProgressStream_11, ErrorStream_12, PIC_13, Var_34, Var_33, Succeeded_16);
        break;
      case (MR_Integer) 1:
        backend_libs__compile_target_code__compile_csharp_file_9_p_0(Globals_10, ProgressStream_11, ErrorStream_12, ModuleDepInfo_14, Var_34, Var_33, Succeeded_16);
        break;
      case (MR_Integer) 2:
        backend_libs__compile_target_code__compile_java_files_8_p_0(Globals_10, ProgressStream_11, ErrorStream_12, Var_34, (MR_Word) ((MR_Unsigned) 0U), Succeeded_16);
        break;
    }
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
        MR_Word Var_31;

        parse_tree__file_names__module_name_to_file_name_8_p_0(Globals_11, (MR_String) "predicate \140make.module_target.build_object_code\'/10", (MR_Integer) 0, (MR_Word) (MR_mkword(MR_mktag(1), &make__module_target_scalar_common_3[1])), ModuleName_12, &CsharpFile_21);
        {
          Var_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_31, 0) = ((MR_Box) (CsharpFile_21));
          MR_hl_field(MR_mktag(1), Var_31, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        backend_libs__compile_target_code__link_9_p_0(Globals_11, ProgressStream_15, ErrorStream_16, (MR_Integer) 4, ModuleName_12, Var_31, Succeeded_18);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_String JavaFile_20;

        parse_tree__file_names__module_name_to_file_name_8_p_0(Globals_11, (MR_String) "predicate \140make.module_target.build_object_code\'/10", (MR_Integer) 0, (MR_Word) (MR_mkword(MR_mktag(1), &make__module_target_scalar_common_3[2])), ModuleName_12, &JavaFile_20);
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
  {
    MR_Box closure = closure_arg;
    MR_Word conv3_HeadVar__5_5;

    make__util__make_remove_file_7_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_String) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv3_HeadVar__5_5);
    *wrapper_arg_3 = ((MR_Box) (conv3_HeadVar__5_5));
  }
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
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__5_5;

    make__util__make_remove_target_file_7_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_HeadVar__5_5);
    *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__5_5));
  }
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
  {
    MR_Word Var_21;
    MR_Word STATE_VARIABLE_MakeInfo_22_22;
    MR_Word Var_25;
    MR_Box conv2_STATE_VARIABLE_MakeInfo_22_22;
    MR_Box conv1_STATE_VARIABLE_IO_23_23;
    MR_Box conv5_STATE_VARIABLE_MakeInfo_18;
    MR_Box conv4_STATE_VARIABLE_IO_27_27;

    {
      Var_21 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_21, 0) = ((MR_Box) (&make__module_target_scalar_common_4[5]));
      MR_hl_field(MR_mktag(0), Var_21, 1) = ((MR_Box) (make__module_target__cleanup_files_8_p_0_1));
      MR_hl_field(MR_mktag(0), Var_21, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_21, 3) = ((MR_Box) (Globals_9));
      MR_hl_field(MR_mktag(0), Var_21, 4) = ((MR_Box) ((MR_Integer) 71));
    }
    mercury__list__foldl2_6_p_2((MR_Word) (&make__make_info__make__make_info__type_ctor_info_target_file_0), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_21, TouchedTargetFiles_11, ((MR_Box) (STATE_VARIABLE_MakeInfo_0_17)), &conv2_STATE_VARIABLE_MakeInfo_22_22, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_23_23);
    STATE_VARIABLE_MakeInfo_22_22 = ((MR_Word) (conv2_STATE_VARIABLE_MakeInfo_22_22));
    {
      Var_25 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_25, 0) = ((MR_Box) (&make__module_target_scalar_common_4[6]));
      MR_hl_field(MR_mktag(0), Var_25, 1) = ((MR_Box) (make__module_target__cleanup_files_8_p_0_2));
      MR_hl_field(MR_mktag(0), Var_25, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_25, 3) = ((MR_Box) (Globals_9));
      MR_hl_field(MR_mktag(0), Var_25, 4) = ((MR_Box) ((MR_Integer) 71));
    }
    mercury__list__foldl2_6_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_25, TouchedFiles_12, ((MR_Box) (STATE_VARIABLE_MakeInfo_22_22)), &conv5_STATE_VARIABLE_MakeInfo_18, ((MR_Box) ((MR_Integer) 0)), &conv4_STATE_VARIABLE_IO_27_27);
    *STATE_VARIABLE_MakeInfo_18 = ((MR_Word) (conv5_STATE_VARIABLE_MakeInfo_18));
    if (!((MaybeArgFileName_10 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_String ArgFileName2_15 = ((MR_String) ((MR_hl_field(MR_mktag(1), MaybeArgFileName_10, (MR_Integer) 0))));
      MR_Word Var_16;

      mercury__io__remove_file_4_p_0(ArgFileName2_15, &Var_16);
    }
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
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_ForeignCodeFile_12;

    make__module_target__get_fact_table_foreign_code_file_7_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_String) (wrapper_arg_1)), &conv0_ForeignCodeFile_12);
    *wrapper_arg_2 = ((MR_Box) (conv0_ForeignCodeFile_12));
  }
}

void MR_CALL 
make__module_target__external_foreign_code_files_6_p_0(
  MR_Word Globals_7,
  MR_Word PIC_8,
  MR_Word ModuleDepInfo_9,
  MR_Word * ForeignFiles_10)
{
  {
    MR_Word ObjExt_12;
    MR_Word CompilationTarget_13;

    backend_libs__compile_target_code__pic_object_file_extension_3_p_0(Globals_7, PIC_8, &ObjExt_12);
    libs__globals__get_target_2_p_0(Globals_7, &CompilationTarget_13);
    switch (CompilationTarget_13) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word FactTableFiles_14;
          MR_Word Var_18;
          MR_Word Var_19;
          MR_Box conv1_STATE_VARIABLE_IO_17;

          parse_tree__module_imports__module_dep_info_get_fact_tables_2_p_0(ModuleDepInfo_9, &FactTableFiles_14);
          {
            Var_18 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_18, 0) = ((MR_Box) (&make__module_target_scalar_common_4[4]));
            MR_hl_field(MR_mktag(0), Var_18, 1) = ((MR_Box) (make__module_target__external_foreign_code_files_6_p_0_1));
            MR_hl_field(MR_mktag(0), Var_18, 2) = ((MR_Box) ((MR_Integer) 3));
            MR_hl_field(MR_mktag(0), Var_18, 3) = ((MR_Box) (Globals_7));
            MR_hl_field(MR_mktag(0), Var_18, 4) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), Var_18, 5) = ((MR_Box) (ObjExt_12));
          }
          Var_19 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), FactTableFiles_14);
          mercury__list__map_foldl_5_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__module_target__make__module_target__type_ctor_info_foreign_code_file_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_18, Var_19, ForeignFiles_10, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_17);
        }
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        *ForeignFiles_10 = (MR_Word) ((MR_Unsigned) 0U);
        break;
    }
  }
}

void MR_CALL 
make__module_target__record_made_target_8_p_0(
  MR_Word Globals_9,
  MR_Word TargetFile_10,
  MR_Word CompilationTask_11,
  MR_Word Succeeded_12,
  MR_Word STATE_VARIABLE_Info_0_17,
  MR_Word * STATE_VARIABLE_Info_18)
{
  {
    MR_Word TouchedTargetFiles_15;
    MR_Word TouchedFiles_16;
    MR_Word STATE_VARIABLE_Info_21_21;

    make__module_target__find_files_maybe_touched_by_task_9_p_0(Globals_9, TargetFile_10, CompilationTask_11, &TouchedTargetFiles_15, &TouchedFiles_16, STATE_VARIABLE_Info_0_17, &STATE_VARIABLE_Info_21_21);
    make__module_target__record_made_target_given_maybe_touched_files_9_p_0(Globals_9, Succeeded_12, TargetFile_10, TouchedTargetFiles_15, TouchedFiles_16, STATE_VARIABLE_Info_21_21, STATE_VARIABLE_Info_18);
  }
}

void MR_CALL 
make__module_target__make_module_target_7_p_0(
  MR_Word Globals_8,
  MR_Word DepFile_9,
  MR_Word * Succeeded_10,
  MR_Word STATE_VARIABLE_Info_0_13,
  MR_Word * STATE_VARIABLE_Info_14)
{
  if (((MR_tag((MR_Word) DepFile_9)) == (MR_Integer) 1))
  {
    MR_Word Status_31;

    make__dependencies__dependency_status_7_p_0(Globals_8, DepFile_9, &Status_31, STATE_VARIABLE_Info_0_13, STATE_VARIABLE_Info_14);
    *Succeeded_10 = ((&make__module_target_vector_common_13[4 + Status_31]))->make__module_target__vector_common_type_13_0__vct_13_f_0;
  }
  else
  {
    MR_Word TargetFile_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DepFile_9, (MR_Integer) 0))));

    make__module_target__make_module_target_file_extra_options_8_p_0((MR_Word) ((MR_Unsigned) 0U), Globals_8, TargetFile_32, Succeeded_10, STATE_VARIABLE_Info_0_13, STATE_VARIABLE_Info_14);
  }
}

static void MR_CALL 
make__module_target__make_module_target_file_main_path_9_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv14_STATE_VARIABLE_Info_12;

    make__module_target__update_target_status_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv14_STATE_VARIABLE_Info_12);
    *wrapper_arg_3 = ((MR_Box) (conv14_STATE_VARIABLE_Info_12));
  }
}

static void MR_CALL 
make__module_target__make_module_target_file_main_path_9_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv12_STATE_VARIABLE_Info_12;

    make__module_target__update_target_status_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv12_STATE_VARIABLE_Info_12);
    *wrapper_arg_3 = ((MR_Box) (conv12_STATE_VARIABLE_Info_12));
  }
}

static void MR_CALL 
make__module_target__make_module_target_file_main_path_9_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv10_STATE_VARIABLE_Info_12;

    make__module_target__update_target_status_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv10_STATE_VARIABLE_Info_12);
    *wrapper_arg_3 = ((MR_Box) (conv10_STATE_VARIABLE_Info_12));
  }
}

static void MR_CALL 
make__module_target__make_module_target_file_main_path_9_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv8_STATE_VARIABLE_Info_12;

    make__module_target__update_target_status_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv8_STATE_VARIABLE_Info_12);
    *wrapper_arg_3 = ((MR_Box) (conv8_STATE_VARIABLE_Info_12));
  }
}

static void MR_CALL 
make__module_target__make_module_target_file_main_path_9_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;

    make__module_target__IntroducedFrom__pred__make_module_target_file_main_path__241__1_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))));
  }
}

static void MR_CALL 
make__module_target__make_module_target_file_main_path_9_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7,
  MR_Box wrapper_arg_8,
  MR_Box * wrapper_arg_9)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv4_HeadVar__4_188;
    MR_Word conv3_HeadVar__6_190;
    MR_Word conv2_HeadVar__8_192;

    make__module_target__IntroducedFrom__pred__make_module_target_file_main_path__225__1_10_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv4_HeadVar__4_188, ((MR_Word) (wrapper_arg_4)), &conv3_HeadVar__6_190, ((MR_Word) (wrapper_arg_6)), &conv2_HeadVar__8_192);
    *wrapper_arg_3 = ((MR_Box) (conv4_HeadVar__4_188));
    *wrapper_arg_5 = ((MR_Box) (conv3_HeadVar__6_190));
    *wrapper_arg_7 = ((MR_Box) (conv2_HeadVar__8_192));
  }
}

static void MR_CALL 
make__module_target__make_module_target_file_main_path_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_Info_12;

    make__module_target__update_target_status_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_Info_12);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Info_12));
  }
}

void MR_CALL 
make__module_target__make_module_target_extra_options_8_p_0(
  MR_Word tscc_proc_1_input_1_ExtraOptions_9,
  MR_Word tscc_proc_1_input_2_Globals_10,
  MR_Word tscc_proc_1_input_3_Dep_11,
  MR_Word * tscc_output_ptr_1_Succeeded_12,
  MR_Word tscc_proc_1_input_4_STATE_VARIABLE_Info_0_18,
  MR_Word * tscc_output_ptr_2_STATE_VARIABLE_Info_19)
{
  {
    MR_Word tscc_proc_2_input_1_ExtraOptions_9;
    MR_Word tscc_proc_2_input_2_Globals_10;
    MR_Word tscc_proc_2_input_3_TargetFile_11;
    MR_Word tscc_proc_2_input_4_STATE_VARIABLE_Info_0_23;
    MR_Word tscc_proc_3_input_1_ExtraOptions_10;
    MR_Word tscc_proc_3_input_2_Globals_11;
    MR_Word tscc_proc_3_input_3_TargetFile_12;
    MR_Word tscc_proc_3_input_4_ModuleDepInfo_13;
    MR_Word tscc_proc_3_input_5_STATE_VARIABLE_Info_0_43;
    MR_Word tscc_output_1_Succeeded_12;
    MR_Word tscc_output_2_STATE_VARIABLE_Info_19;

    // The code for TSCC PROC 1: pred make.module_target.make_module_target_extra_options/8-0.
    ;
    // Setup for mutual tailcalls optimized into a loop.
    ;
    // The mutually recursive procedures are:
    ;
    ;
    // proc 1 in TSCC: pred make.module_target.make_module_target_extra_options/8-0
    ;
    // proc 2 in TSCC: pred make.module_target.make_module_target_file_extra_options/8-0
    ;
    // proc 3 in TSCC: pred make.module_target.make_module_target_file_main_path/9-0
    ;
    ;
    goto top_of_proc_1;
  top_of_proc_1:;
    {
      MR_Word ExtraOptions_9 = tscc_proc_1_input_1_ExtraOptions_9;
      MR_Word Globals_10 = tscc_proc_1_input_2_Globals_10;
      MR_Word Dep_11 = tscc_proc_1_input_3_Dep_11;
      MR_Word Succeeded_12;
      MR_Word STATE_VARIABLE_Info_0_18 = tscc_proc_1_input_4_STATE_VARIABLE_Info_0_18;
      MR_Word STATE_VARIABLE_Info_19;

      if (((MR_tag((MR_Word) Dep_11)) == (MR_Integer) 1))
      {
        MR_Word Status_16;

        make__dependencies__dependency_status_7_p_0(Globals_10, Dep_11, &Status_16, STATE_VARIABLE_Info_0_18, &STATE_VARIABLE_Info_19);
        Succeeded_12 = ((&make__module_target_vector_common_13[0 + Status_16]))->make__module_target__vector_common_type_13_0__vct_13_f_0;
      }
      else
      {
        MR_Word TargetFile_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Dep_11, (MR_Integer) 0))));
        MR_Word next_value_of_tscc_proc_2_input_1_ExtraOptions_9 = ExtraOptions_9;
        MR_Word next_value_of_tscc_proc_2_input_2_Globals_10 = Globals_10;
        MR_Word next_value_of_tscc_proc_2_input_3_TargetFile_11 = TargetFile_17;
        MR_Word next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_Info_0_23 = STATE_VARIABLE_Info_0_18;

        // direct tailcall eliminated
        ;
        tscc_proc_2_input_1_ExtraOptions_9 = next_value_of_tscc_proc_2_input_1_ExtraOptions_9;
        tscc_proc_2_input_2_Globals_10 = next_value_of_tscc_proc_2_input_2_Globals_10;
        tscc_proc_2_input_3_TargetFile_11 = next_value_of_tscc_proc_2_input_3_TargetFile_11;
        tscc_proc_2_input_4_STATE_VARIABLE_Info_0_23 = next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_Info_0_23;
        goto top_of_proc_2;
      }
      tscc_output_1_Succeeded_12 = Succeeded_12;
      tscc_output_2_STATE_VARIABLE_Info_19 = STATE_VARIABLE_Info_19;
      goto tscc_end;
    }
  top_of_proc_2:;
    {
      MR_Word ExtraOptions_9 = tscc_proc_2_input_1_ExtraOptions_9;
      MR_Word Globals_10 = tscc_proc_2_input_2_Globals_10;
      MR_Word TargetFile_11 = tscc_proc_2_input_3_TargetFile_11;
      MR_Word Succeeded_12;
      MR_Word STATE_VARIABLE_Info_0_23 = tscc_proc_2_input_4_STATE_VARIABLE_Info_0_23;
      MR_Word STATE_VARIABLE_Info_24;
      MR_Word Dep_15;
      MR_Word Status_16;
      MR_Word STATE_VARIABLE_Info_27_27;

      {
        Dep_15 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Dep_15, 0) = ((MR_Box) (TargetFile_11));
      }
      make__dependencies__dependency_status_7_p_0(Globals_10, Dep_15, &Status_16, STATE_VARIABLE_Info_0_23, &STATE_VARIABLE_Info_27_27);
      switch (Status_16) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140make.module_target.make_module_target_file_extra_options\'/8", (MR_String) "target being built, circular dependencies\?");
            return;
          }
          break;
        case (MR_Integer) 3:
          {
            Succeeded_12 = (MR_Integer) 0;
            STATE_VARIABLE_Info_24 = STATE_VARIABLE_Info_27_27;
          }
          break;
        case (MR_Integer) 0:
          {
            MR_Word ModuleName_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TargetFile_11, (MR_Integer) 0))));
            MR_Word MaybeModuleDepInfo_19;
            MR_Word STATE_VARIABLE_Info_31_31;

            make__module_dep_file__get_module_dependencies_7_p_0(Globals_10, ModuleName_17, &MaybeModuleDepInfo_19, STATE_VARIABLE_Info_27_27, &STATE_VARIABLE_Info_31_31);
            if ((MaybeModuleDepInfo_19 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              MR_Word DepStatus0_20;
              MR_Word DepStatus_21;
              MR_Word Var_57;
              MR_Word Var_58;
              MR_Word Var_59;
              MR_Word Var_60;
              MR_Word Var_61;
              MR_Word Var_62;
              MR_Word Var_63;
              MR_Word Var_64;
              MR_Word Var_66;
              MR_Word Var_67;
              MR_Word Var_68;
              MR_Word Var_69;
              MR_Word Var_72;
              MR_Word Var_73;
              MR_Word Var_74;
              MR_Integer Var_75;
              MR_Word Var_76;
              MR_Word Var_77;
              MR_Unsigned packed_word_1;

              Succeeded_12 = (MR_Integer) 0;
              DepStatus0_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_31_31, (MR_Integer) 8))));
              mercury__version_hash_table__set_4_p_0((MR_Word) (&make__dependencies__make__dependencies__type_ctor_info_dependency_file_0), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_dependency_status_0), ((MR_Box) (Dep_15)), ((MR_Box) ((MR_Integer) 3)), DepStatus0_20, &DepStatus_21);
              Var_57 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_31_31, (MR_Integer) 0))));
              Var_58 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_31_31, (MR_Integer) 1))));
              Var_59 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_31_31, (MR_Integer) 2))));
              Var_60 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_31_31, (MR_Integer) 3))));
              Var_61 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_31_31, (MR_Integer) 4))));
              Var_62 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_31_31, (MR_Integer) 5))));
              Var_63 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_31_31, (MR_Integer) 6))));
              Var_64 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_31_31, (MR_Integer) 7))));
              Var_66 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_31_31, (MR_Integer) 9))));
              Var_67 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_31_31, (MR_Integer) 10))));
              Var_68 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_31_31, (MR_Integer) 11))));
              Var_69 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_31_31, (MR_Integer) 12))));
              packed_word_1 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_31_31, (MR_Integer) 13)));
              Var_72 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_31_31, (MR_Integer) 14))));
              Var_73 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_31_31, (MR_Integer) 15))));
              Var_74 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_31_31, (MR_Integer) 16))));
              Var_75 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_31_31, (MR_Integer) 17))));
              Var_76 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_31_31, (MR_Integer) 18))));
              Var_77 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_31_31, (MR_Integer) 19))));
              {
                STATE_VARIABLE_Info_24 = (MR_Word) MR_new_object(MR_Word, (20 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_24, 0) = ((MR_Box) (Var_57));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_24, 1) = ((MR_Box) (Var_58));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_24, 2) = ((MR_Box) (Var_59));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_24, 3) = ((MR_Box) (Var_60));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_24, 4) = ((MR_Box) (Var_61));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_24, 5) = ((MR_Box) (Var_62));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_24, 6) = ((MR_Box) (Var_63));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_24, 7) = ((MR_Box) (Var_64));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_24, 8) = ((MR_Box) (DepStatus_21));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_24, 9) = ((MR_Box) (Var_66));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_24, 10) = ((MR_Box) (Var_67));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_24, 11) = ((MR_Box) (Var_68));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_24, 12) = ((MR_Box) (Var_69));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_24, 13) = (MR_Box) (packed_word_1);
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_24, 14) = ((MR_Box) (Var_72));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_24, 15) = ((MR_Box) (Var_73));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_24, 16) = ((MR_Box) (Var_74));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_24, 17) = ((MR_Box) (Var_75));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_24, 18) = ((MR_Box) (Var_76));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_24, 19) = ((MR_Box) (Var_77));
              }
            }
            else
            {
              MR_Word ModuleDepInfo_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeModuleDepInfo_19, (MR_Integer) 0))));
              MR_Word next_value_of_tscc_proc_3_input_1_ExtraOptions_10 = ExtraOptions_9;
              MR_Word next_value_of_tscc_proc_3_input_2_Globals_11 = Globals_10;
              MR_Word next_value_of_tscc_proc_3_input_3_TargetFile_12 = TargetFile_11;
              MR_Word next_value_of_tscc_proc_3_input_4_ModuleDepInfo_13 = ModuleDepInfo_22;
              MR_Word next_value_of_tscc_proc_3_input_5_STATE_VARIABLE_Info_0_43 = STATE_VARIABLE_Info_31_31;

              // direct tailcall eliminated
              ;
              tscc_proc_3_input_1_ExtraOptions_10 = next_value_of_tscc_proc_3_input_1_ExtraOptions_10;
              tscc_proc_3_input_2_Globals_11 = next_value_of_tscc_proc_3_input_2_Globals_11;
              tscc_proc_3_input_3_TargetFile_12 = next_value_of_tscc_proc_3_input_3_TargetFile_12;
              tscc_proc_3_input_4_ModuleDepInfo_13 = next_value_of_tscc_proc_3_input_4_ModuleDepInfo_13;
              tscc_proc_3_input_5_STATE_VARIABLE_Info_0_43 = next_value_of_tscc_proc_3_input_5_STATE_VARIABLE_Info_0_43;
              goto top_of_proc_3;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            Succeeded_12 = (MR_Integer) 1;
            STATE_VARIABLE_Info_24 = STATE_VARIABLE_Info_27_27;
          }
          break;
      }
      tscc_output_1_Succeeded_12 = Succeeded_12;
      tscc_output_2_STATE_VARIABLE_Info_19 = STATE_VARIABLE_Info_24;
      goto tscc_end;
    }
  top_of_proc_3:;
    {
      MR_Word ExtraOptions_10 = tscc_proc_3_input_1_ExtraOptions_10;
      MR_Word Globals_11 = tscc_proc_3_input_2_Globals_11;
      MR_Word TargetFile_12 = tscc_proc_3_input_3_TargetFile_12;
      MR_Word ModuleDepInfo_13 = tscc_proc_3_input_4_ModuleDepInfo_13;
      MR_Word Succeeded_14;
      MR_Word STATE_VARIABLE_Info_0_43 = tscc_proc_3_input_5_STATE_VARIABLE_Info_0_43;
      MR_Word STATE_VARIABLE_Info_44;
      MR_bool succeeded;
      MR_Word ModuleName_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TargetFile_12, (MR_Integer) 0))));
      MR_Word TargetType_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TargetFile_12, (MR_Integer) 1))));
      MR_Word CompilationTask_19;
      MR_Word SourceFileModuleName_20;
      MR_Word CompilationTaskType_21;

      CompilationTask_19 = make__module_target__compilation_task_1_f_0(TargetType_18);
      parse_tree__module_imports__module_dep_info_get_source_file_module_name_2_p_0(ModuleDepInfo_13, &SourceFileModuleName_20);
      CompilationTaskType_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CompilationTask_19, (MR_Integer) 0))));
      succeeded = ((MR_tag((MR_Word) CompilationTaskType_21)) == (MR_Integer) 0);
      if (succeeded)
      {
        succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(SourceFileModuleName_20, ModuleName_17);
        succeeded = !(succeeded);
      }
      if (succeeded)
      {
        MR_Word NestedTargetFile_24;
        MR_Word Var_47;
        MR_Word next_value_of_tscc_proc_1_input_1_ExtraOptions_9;
        MR_Word next_value_of_tscc_proc_1_input_2_Globals_10;
        MR_Word next_value_of_tscc_proc_1_input_3_Dep_11;
        MR_Word next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Info_0_18;

        {
          NestedTargetFile_24 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), NestedTargetFile_24, 0) = ((MR_Box) (SourceFileModuleName_20));
          MR_hl_field(MR_mktag(0), NestedTargetFile_24, 1) = ((MR_Box) (TargetType_18));
        }
        {
          Var_47 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_47, 0) = ((MR_Box) (NestedTargetFile_24));
        }
        // direct tailcall eliminated
        ;
        next_value_of_tscc_proc_1_input_1_ExtraOptions_9 = ExtraOptions_10;
        next_value_of_tscc_proc_1_input_2_Globals_10 = Globals_11;
        next_value_of_tscc_proc_1_input_3_Dep_11 = Var_47;
        next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Info_0_18 = STATE_VARIABLE_Info_0_43;
        tscc_proc_1_input_1_ExtraOptions_9 = next_value_of_tscc_proc_1_input_1_ExtraOptions_9;
        tscc_proc_1_input_2_Globals_10 = next_value_of_tscc_proc_1_input_2_Globals_10;
        tscc_proc_1_input_3_Dep_11 = next_value_of_tscc_proc_1_input_3_Dep_11;
        tscc_proc_1_input_4_STATE_VARIABLE_Info_0_18 = next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Info_0_18;
        goto top_of_proc_1;
      }
      else
      {
        MR_Word TouchedTargetFiles_25;
        MR_Word TouchedFiles_26;
        MR_Word ModulesToCheck_30;
        MR_Word ModulesToCheckSet_31;
        MR_Word DepsSucceeded_32;
        MR_Word DepFiles0_33;
        MR_Word DepFilesSet0_34;
        MR_Word DepFilesToMake_36;
        MR_Word KeepGoing_38;
        MR_Word STATE_VARIABLE_Info_50_50;
        MR_Word STATE_VARIABLE_Info_53_53;
        MR_Word STATE_VARIABLE_Info_58_58;
        MR_Word Var_59;
        MR_Word Var_60;
        MR_Word Var_61;
        MR_Word STATE_VARIABLE_Info_62_62;
        MR_Word Var_64;
        MR_Word Var_67;
        MR_Box conv1_STATE_VARIABLE_Info_53_53;
        MR_Box conv7_DepFiles0_33;
        MR_Box conv6_STATE_VARIABLE_Info_62_62;
        MR_Box conv5_STATE_VARIABLE_IO_63_63;

        make__module_target__find_files_maybe_touched_by_task_9_p_0(Globals_11, TargetFile_12, CompilationTaskType_21, &TouchedTargetFiles_25, &TouchedFiles_26, STATE_VARIABLE_Info_0_43, &STATE_VARIABLE_Info_50_50);
        mercury__list__foldl_4_p_0((MR_Word) (&make__make_info__make__make_info__type_ctor_info_target_file_0), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), (MR_Word) (&make__module_target_scalar_common_14[0]), TouchedTargetFiles_25, ((MR_Box) (STATE_VARIABLE_Info_50_50)), &conv1_STATE_VARIABLE_Info_53_53);
        STATE_VARIABLE_Info_53_53 = ((MR_Word) (conv1_STATE_VARIABLE_Info_53_53));
        make__util__debug_file_msg_5_p_0(Globals_11, TargetFile_12, (MR_String) "checking dependencies");
        succeeded = ((MR_tag((MR_Word) CompilationTaskType_21)) == (MR_Integer) 0);
        if (succeeded)
        {
          MR_Word MaybeTopModule_28;
          MR_Word NestedSubModules_29;

          parse_tree__module_imports__module_dep_info_get_maybe_top_module_2_p_0(ModuleDepInfo_13, &MaybeTopModule_28);
          NestedSubModules_29 = parse_tree__module_imports__get_nested_children_list_of_top_module_1_f_0(MaybeTopModule_28);
          {
            ModulesToCheck_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ModulesToCheck_30, 0) = ((MR_Box) (ModuleName_17));
            MR_hl_field(MR_mktag(1), ModulesToCheck_30, 1) = ((MR_Box) (NestedSubModules_29));
          }
        }
        else
          {
            ModulesToCheck_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ModulesToCheck_30, 0) = ((MR_Box) (ModuleName_17));
            MR_hl_field(MR_mktag(1), ModulesToCheck_30, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
        make__deps_set__module_names_to_index_set_4_p_0(ModulesToCheck_30, &ModulesToCheckSet_31, STATE_VARIABLE_Info_53_53, &STATE_VARIABLE_Info_58_58);
        Var_59 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_58_58, (MR_Integer) 13))) & (MR_Integer) 1);
        Var_64 = make__dependencies__target_dependencies_2_f_0(Globals_11, TargetType_18);
        {
          Var_60 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_60, 0) = ((MR_Box) (&make__module_target_scalar_common_10[1]));
          MR_hl_field(MR_mktag(0), Var_60, 1) = ((MR_Box) (make__module_target__make_module_target_file_main_path_9_p_0_2));
          MR_hl_field(MR_mktag(0), Var_60, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), Var_60, 3) = ((MR_Box) (Var_64));
        }
        Var_61 = mercury__sparse_bitset__init_0_f_0((MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_dependency_file_index_0));
        make__dependencies__deps_set_foldl3_maybe_stop_at_error_11_p_0((MR_Word) (&make__module_target_scalar_common_1[1]), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), (MR_Word) (&make__module_target_scalar_common_1[0]), Var_59, Var_60, Globals_11, ModulesToCheckSet_31, &DepsSucceeded_32, ((MR_Box) (Var_61)), &conv7_DepFiles0_33, ((MR_Box) (STATE_VARIABLE_Info_58_58)), &conv6_STATE_VARIABLE_Info_62_62, ((MR_Box) ((MR_Integer) 0)), &conv5_STATE_VARIABLE_IO_63_63);
        DepFiles0_33 = ((MR_Word) (conv7_DepFiles0_33));
        STATE_VARIABLE_Info_62_62 = ((MR_Word) (conv6_STATE_VARIABLE_Info_62_62));
        make__deps_set__dependency_file_index_set_to_plain_set_3_p_0(STATE_VARIABLE_Info_62_62, DepFiles0_33, &DepFilesSet0_34);
        succeeded = (TargetType_18 == (MR_Word) ((MR_Unsigned) 8U));
        if (succeeded)
        {
          MR_Word PrivateInts_35;
          MR_Word Var_66;

          PrivateInts_35 = make__util__make_dependency_list_2_f_0(ModulesToCheck_30, (MR_Word) ((MR_Unsigned) 8U));
          Var_66 = mercury__set__delete_list_2_f_0((MR_Word) (&make__dependencies__make__dependencies__type_ctor_info_dependency_file_0), DepFilesSet0_34, PrivateInts_35);
          DepFilesToMake_36 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&make__dependencies__make__dependencies__type_ctor_info_dependency_file_0), Var_66);
        }
        else
          DepFilesToMake_36 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&make__dependencies__make__dependencies__type_ctor_info_dependency_file_0), DepFilesSet0_34);
        {
          Var_67 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_67, 0) = ((MR_Box) (&make__module_target_scalar_common_12[2]));
          MR_hl_field(MR_mktag(0), Var_67, 1) = ((MR_Box) (make__module_target__make_module_target_file_main_path_9_p_0_3));
          MR_hl_field(MR_mktag(0), Var_67, 2) = ((MR_Box) ((MR_Integer) 4));
          MR_hl_field(MR_mktag(0), Var_67, 3) = ((MR_Box) (Globals_11));
          MR_hl_field(MR_mktag(0), Var_67, 4) = ((MR_Box) (TargetFile_12));
          MR_hl_field(MR_mktag(0), Var_67, 5) = ((MR_Box) (DepFiles0_33));
          MR_hl_field(MR_mktag(0), Var_67, 6) = ((MR_Box) (STATE_VARIABLE_Info_62_62));
        }
        make__util__debug_make_msg_4_p_0(Globals_11, Var_67);
        KeepGoing_38 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_62_62, (MR_Integer) 13))) & (MR_Integer) 1);
        succeeded = (DepsSucceeded_32 == (MR_Integer) 0);
        if (succeeded)
          succeeded = (KeepGoing_38 == (MR_Integer) 0);
        if (succeeded)
        {
          MR_Box conv9_STATE_VARIABLE_Info_44;

          Succeeded_14 = (MR_Integer) 0;
          mercury__list__foldl_4_p_0((MR_Word) (&make__make_info__make__make_info__type_ctor_info_target_file_0), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), (MR_Word) (&make__module_target_scalar_common_14[1]), TouchedTargetFiles_25, ((MR_Box) (STATE_VARIABLE_Info_62_62)), &conv9_STATE_VARIABLE_Info_44);
          STATE_VARIABLE_Info_44 = ((MR_Word) (conv9_STATE_VARIABLE_Info_44));
        }
        else
        {
          MR_Word DepsResult0_40;
          MR_Word STATE_VARIABLE_Info_78_216;

          make__module_target__make_dependency_files_10_p_0(Globals_11, TargetFile_12, DepFilesToMake_36, TouchedTargetFiles_25, TouchedFiles_26, &DepsResult0_40, STATE_VARIABLE_Info_62_62, &STATE_VARIABLE_Info_78_216);
          switch (DepsSucceeded_32) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Box conv11_STATE_VARIABLE_Info_44;

                Succeeded_14 = (MR_Integer) 0;
                mercury__list__foldl_4_p_0((MR_Word) (&make__make_info__make__make_info__type_ctor_info_target_file_0), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), (MR_Word) (&make__module_target_scalar_common_14[2]), TouchedTargetFiles_25, ((MR_Box) (STATE_VARIABLE_Info_78_216)), &conv11_STATE_VARIABLE_Info_44);
                STATE_VARIABLE_Info_44 = ((MR_Word) (conv11_STATE_VARIABLE_Info_44));
              }
              break;
            case (MR_Integer) 1:
              switch (DepsResult0_40) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 2:
                  {
                    MR_Box conv13_STATE_VARIABLE_Info_44;

                    Succeeded_14 = (MR_Integer) 0;
                    mercury__list__foldl_4_p_0((MR_Word) (&make__make_info__make__make_info__type_ctor_info_target_file_0), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), (MR_Word) (&make__module_target_scalar_common_14[3]), TouchedTargetFiles_25, ((MR_Box) (STATE_VARIABLE_Info_78_216)), &conv13_STATE_VARIABLE_Info_44);
                    STATE_VARIABLE_Info_44 = ((MR_Word) (conv13_STATE_VARIABLE_Info_44));
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word Targets0_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_78_216, (MR_Integer) 16))));
                    MR_Word Targets_42;
                    MR_Word Var_90;
                    MR_Word Var_91;
                    MR_Word STATE_VARIABLE_Info_92_92;
                    MR_Word Var_140 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_78_216, (MR_Integer) 0))));
                    MR_Word Var_141 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_78_216, (MR_Integer) 1))));
                    MR_Word Var_142 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_78_216, (MR_Integer) 2))));
                    MR_Word Var_143 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_78_216, (MR_Integer) 3))));
                    MR_Word Var_144 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_78_216, (MR_Integer) 4))));
                    MR_Word Var_145 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_78_216, (MR_Integer) 5))));
                    MR_Word Var_146 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_78_216, (MR_Integer) 6))));
                    MR_Word Var_147 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_78_216, (MR_Integer) 7))));
                    MR_Word Var_148 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_78_216, (MR_Integer) 8))));
                    MR_Word Var_149 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_78_216, (MR_Integer) 9))));
                    MR_Word Var_150 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_78_216, (MR_Integer) 10))));
                    MR_Word Var_151 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_78_216, (MR_Integer) 11))));
                    MR_Word Var_152 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_78_216, (MR_Integer) 12))));
                    MR_Word Var_155 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_78_216, (MR_Integer) 14))));
                    MR_Word Var_156 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_78_216, (MR_Integer) 15))));
                    MR_Integer Var_157 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_78_216, (MR_Integer) 17))));
                    MR_Word Var_158 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_78_216, (MR_Integer) 18))));
                    MR_Word Var_159 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_78_216, (MR_Integer) 19))));
                    MR_Unsigned packed_word_6 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_78_216, (MR_Integer) 13)));

                    {
                      Var_91 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), Var_91, 0) = ((MR_Box) (TargetType_18));
                    }
                    {
                      Var_90 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), Var_90, 0) = ((MR_Box) (ModuleName_17));
                      MR_hl_field(MR_mktag(0), Var_90, 1) = ((MR_Box) (Var_91));
                    }
                    mercury__set__delete_3_p_0((MR_Word) (&make__module_target_scalar_common_2[0]), ((MR_Box) (Var_90)), Targets0_41, &Targets_42);
                    {
                      STATE_VARIABLE_Info_92_92 = (MR_Word) MR_new_object(MR_Word, (20 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_92_92, 0) = ((MR_Box) (Var_140));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_92_92, 1) = ((MR_Box) (Var_141));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_92_92, 2) = ((MR_Box) (Var_142));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_92_92, 3) = ((MR_Box) (Var_143));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_92_92, 4) = ((MR_Box) (Var_144));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_92_92, 5) = ((MR_Box) (Var_145));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_92_92, 6) = ((MR_Box) (Var_146));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_92_92, 7) = ((MR_Box) (Var_147));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_92_92, 8) = ((MR_Box) (Var_148));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_92_92, 9) = ((MR_Box) (Var_149));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_92_92, 10) = ((MR_Box) (Var_150));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_92_92, 11) = ((MR_Box) (Var_151));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_92_92, 12) = ((MR_Box) (Var_152));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_92_92, 13) = (MR_Box) (packed_word_6);
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_92_92, 14) = ((MR_Box) (Var_155));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_92_92, 15) = ((MR_Box) (Var_156));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_92_92, 16) = ((MR_Box) (Targets_42));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_92_92, 17) = ((MR_Box) (Var_157));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_92_92, 18) = ((MR_Box) (Var_158));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_92_92, 19) = ((MR_Box) (Var_159));
                    }
                    make__module_target__build_target_12_p_0(Globals_11, CompilationTask_19, TargetFile_12, ModuleDepInfo_13, TouchedTargetFiles_25, TouchedFiles_26, ExtraOptions_10, &Succeeded_14, STATE_VARIABLE_Info_92_92, &STATE_VARIABLE_Info_44);
                  }
                  break;
                case (MR_Integer) 0:
                  {
                    MR_Word Var_80;
                    MR_Word STATE_VARIABLE_Info_81_81;
                    MR_Word Var_83;
                    MR_Word Var_87;
                    MR_Box conv15_STATE_VARIABLE_Info_44;

                    {
                      Var_83 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), Var_83, 0) = ((MR_Box) (TargetType_18));
                    }
                    {
                      Var_80 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), Var_80, 0) = ((MR_Box) (ModuleName_17));
                      MR_hl_field(MR_mktag(0), Var_80, 1) = ((MR_Box) (Var_83));
                    }
                    make__util__maybe_warn_up_to_date_target_6_p_0(Globals_11, Var_80, STATE_VARIABLE_Info_78_216, &STATE_VARIABLE_Info_81_81);
                    make__util__debug_file_msg_5_p_0(Globals_11, TargetFile_12, (MR_String) "up to date");
                    Succeeded_14 = (MR_Integer) 1;
                    {
                      Var_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_87, 0) = ((MR_Box) (TargetFile_12));
                      MR_hl_field(MR_mktag(1), Var_87, 1) = ((MR_Box) (TouchedTargetFiles_25));
                    }
                    mercury__list__foldl_4_p_0((MR_Word) (&make__make_info__make__make_info__type_ctor_info_target_file_0), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), (MR_Word) (&make__module_target_scalar_common_14[4]), Var_87, ((MR_Box) (STATE_VARIABLE_Info_81_81)), &conv15_STATE_VARIABLE_Info_44);
                    STATE_VARIABLE_Info_44 = ((MR_Word) (conv15_STATE_VARIABLE_Info_44));
                  }
                  break;
              }
              break;
          }
        }
      }
      tscc_output_1_Succeeded_12 = Succeeded_14;
      tscc_output_2_STATE_VARIABLE_Info_19 = STATE_VARIABLE_Info_44;
      goto tscc_end;
    }
  tscc_end:;
    *tscc_output_ptr_1_Succeeded_12 = tscc_output_1_Succeeded_12;
    *tscc_output_ptr_2_STATE_VARIABLE_Info_19 = tscc_output_2_STATE_VARIABLE_Info_19;
    return;
  }
}

static void MR_CALL 
make__module_target__make_module_target_file_extra_options_8_p_0(
  MR_Word tscc_proc_2_input_1_ExtraOptions_9,
  MR_Word tscc_proc_2_input_2_Globals_10,
  MR_Word tscc_proc_2_input_3_TargetFile_11,
  MR_Word * tscc_output_ptr_1_Succeeded_12,
  MR_Word tscc_proc_2_input_4_STATE_VARIABLE_Info_0_23,
  MR_Word * tscc_output_ptr_2_STATE_VARIABLE_Info_19)
{
  {
    MR_Word tscc_proc_1_input_1_ExtraOptions_9;
    MR_Word tscc_proc_1_input_2_Globals_10;
    MR_Word tscc_proc_1_input_3_Dep_11;
    MR_Word tscc_proc_1_input_4_STATE_VARIABLE_Info_0_18;
    MR_Word tscc_proc_3_input_1_ExtraOptions_10;
    MR_Word tscc_proc_3_input_2_Globals_11;
    MR_Word tscc_proc_3_input_3_TargetFile_12;
    MR_Word tscc_proc_3_input_4_ModuleDepInfo_13;
    MR_Word tscc_proc_3_input_5_STATE_VARIABLE_Info_0_43;
    MR_Word tscc_output_1_Succeeded_12;
    MR_Word tscc_output_2_STATE_VARIABLE_Info_19;

    // The code for TSCC PROC 2: pred make.module_target.make_module_target_file_extra_options/8-0.
    ;
    // Setup for mutual tailcalls optimized into a loop.
    ;
    // The mutually recursive procedures are:
    ;
    ;
    // proc 1 in TSCC: pred make.module_target.make_module_target_extra_options/8-0
    ;
    // proc 2 in TSCC: pred make.module_target.make_module_target_file_extra_options/8-0
    ;
    // proc 3 in TSCC: pred make.module_target.make_module_target_file_main_path/9-0
    ;
    ;
    goto top_of_proc_2;
  top_of_proc_1:;
    {
      MR_Word ExtraOptions_9 = tscc_proc_1_input_1_ExtraOptions_9;
      MR_Word Globals_10 = tscc_proc_1_input_2_Globals_10;
      MR_Word Dep_11 = tscc_proc_1_input_3_Dep_11;
      MR_Word Succeeded_12;
      MR_Word STATE_VARIABLE_Info_0_18 = tscc_proc_1_input_4_STATE_VARIABLE_Info_0_18;
      MR_Word STATE_VARIABLE_Info_19;

      if (((MR_tag((MR_Word) Dep_11)) == (MR_Integer) 1))
      {
        MR_Word Status_16;

        make__dependencies__dependency_status_7_p_0(Globals_10, Dep_11, &Status_16, STATE_VARIABLE_Info_0_18, &STATE_VARIABLE_Info_19);
        Succeeded_12 = ((&make__module_target_vector_common_13[0 + Status_16]))->make__module_target__vector_common_type_13_0__vct_13_f_0;
      }
      else
      {
        MR_Word TargetFile_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Dep_11, (MR_Integer) 0))));
        MR_Word next_value_of_tscc_proc_2_input_1_ExtraOptions_9 = ExtraOptions_9;
        MR_Word next_value_of_tscc_proc_2_input_2_Globals_10 = Globals_10;
        MR_Word next_value_of_tscc_proc_2_input_3_TargetFile_11 = TargetFile_17;
        MR_Word next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_Info_0_23 = STATE_VARIABLE_Info_0_18;

        // direct tailcall eliminated
        ;
        tscc_proc_2_input_1_ExtraOptions_9 = next_value_of_tscc_proc_2_input_1_ExtraOptions_9;
        tscc_proc_2_input_2_Globals_10 = next_value_of_tscc_proc_2_input_2_Globals_10;
        tscc_proc_2_input_3_TargetFile_11 = next_value_of_tscc_proc_2_input_3_TargetFile_11;
        tscc_proc_2_input_4_STATE_VARIABLE_Info_0_23 = next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_Info_0_23;
        goto top_of_proc_2;
      }
      tscc_output_1_Succeeded_12 = Succeeded_12;
      tscc_output_2_STATE_VARIABLE_Info_19 = STATE_VARIABLE_Info_19;
      goto tscc_end;
    }
  top_of_proc_2:;
    {
      MR_Word ExtraOptions_9 = tscc_proc_2_input_1_ExtraOptions_9;
      MR_Word Globals_10 = tscc_proc_2_input_2_Globals_10;
      MR_Word TargetFile_11 = tscc_proc_2_input_3_TargetFile_11;
      MR_Word Succeeded_12;
      MR_Word STATE_VARIABLE_Info_0_23 = tscc_proc_2_input_4_STATE_VARIABLE_Info_0_23;
      MR_Word STATE_VARIABLE_Info_24;
      MR_Word Dep_15;
      MR_Word Status_16;
      MR_Word STATE_VARIABLE_Info_27_27;

      {
        Dep_15 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Dep_15, 0) = ((MR_Box) (TargetFile_11));
      }
      make__dependencies__dependency_status_7_p_0(Globals_10, Dep_15, &Status_16, STATE_VARIABLE_Info_0_23, &STATE_VARIABLE_Info_27_27);
      switch (Status_16) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140make.module_target.make_module_target_file_extra_options\'/8", (MR_String) "target being built, circular dependencies\?");
            return;
          }
          break;
        case (MR_Integer) 3:
          {
            Succeeded_12 = (MR_Integer) 0;
            STATE_VARIABLE_Info_24 = STATE_VARIABLE_Info_27_27;
          }
          break;
        case (MR_Integer) 0:
          {
            MR_Word ModuleName_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TargetFile_11, (MR_Integer) 0))));
            MR_Word MaybeModuleDepInfo_19;
            MR_Word STATE_VARIABLE_Info_31_31;

            make__module_dep_file__get_module_dependencies_7_p_0(Globals_10, ModuleName_17, &MaybeModuleDepInfo_19, STATE_VARIABLE_Info_27_27, &STATE_VARIABLE_Info_31_31);
            if ((MaybeModuleDepInfo_19 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              MR_Word DepStatus0_20;
              MR_Word DepStatus_21;
              MR_Word Var_57;
              MR_Word Var_58;
              MR_Word Var_59;
              MR_Word Var_60;
              MR_Word Var_61;
              MR_Word Var_62;
              MR_Word Var_63;
              MR_Word Var_64;
              MR_Word Var_66;
              MR_Word Var_67;
              MR_Word Var_68;
              MR_Word Var_69;
              MR_Word Var_72;
              MR_Word Var_73;
              MR_Word Var_74;
              MR_Integer Var_75;
              MR_Word Var_76;
              MR_Word Var_77;
              MR_Unsigned packed_word_1;

              Succeeded_12 = (MR_Integer) 0;
              DepStatus0_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_31_31, (MR_Integer) 8))));
              mercury__version_hash_table__set_4_p_0((MR_Word) (&make__dependencies__make__dependencies__type_ctor_info_dependency_file_0), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_dependency_status_0), ((MR_Box) (Dep_15)), ((MR_Box) ((MR_Integer) 3)), DepStatus0_20, &DepStatus_21);
              Var_57 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_31_31, (MR_Integer) 0))));
              Var_58 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_31_31, (MR_Integer) 1))));
              Var_59 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_31_31, (MR_Integer) 2))));
              Var_60 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_31_31, (MR_Integer) 3))));
              Var_61 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_31_31, (MR_Integer) 4))));
              Var_62 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_31_31, (MR_Integer) 5))));
              Var_63 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_31_31, (MR_Integer) 6))));
              Var_64 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_31_31, (MR_Integer) 7))));
              Var_66 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_31_31, (MR_Integer) 9))));
              Var_67 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_31_31, (MR_Integer) 10))));
              Var_68 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_31_31, (MR_Integer) 11))));
              Var_69 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_31_31, (MR_Integer) 12))));
              packed_word_1 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_31_31, (MR_Integer) 13)));
              Var_72 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_31_31, (MR_Integer) 14))));
              Var_73 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_31_31, (MR_Integer) 15))));
              Var_74 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_31_31, (MR_Integer) 16))));
              Var_75 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_31_31, (MR_Integer) 17))));
              Var_76 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_31_31, (MR_Integer) 18))));
              Var_77 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_31_31, (MR_Integer) 19))));
              {
                STATE_VARIABLE_Info_24 = (MR_Word) MR_new_object(MR_Word, (20 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_24, 0) = ((MR_Box) (Var_57));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_24, 1) = ((MR_Box) (Var_58));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_24, 2) = ((MR_Box) (Var_59));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_24, 3) = ((MR_Box) (Var_60));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_24, 4) = ((MR_Box) (Var_61));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_24, 5) = ((MR_Box) (Var_62));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_24, 6) = ((MR_Box) (Var_63));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_24, 7) = ((MR_Box) (Var_64));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_24, 8) = ((MR_Box) (DepStatus_21));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_24, 9) = ((MR_Box) (Var_66));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_24, 10) = ((MR_Box) (Var_67));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_24, 11) = ((MR_Box) (Var_68));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_24, 12) = ((MR_Box) (Var_69));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_24, 13) = (MR_Box) (packed_word_1);
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_24, 14) = ((MR_Box) (Var_72));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_24, 15) = ((MR_Box) (Var_73));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_24, 16) = ((MR_Box) (Var_74));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_24, 17) = ((MR_Box) (Var_75));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_24, 18) = ((MR_Box) (Var_76));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_24, 19) = ((MR_Box) (Var_77));
              }
            }
            else
            {
              MR_Word ModuleDepInfo_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeModuleDepInfo_19, (MR_Integer) 0))));
              MR_Word next_value_of_tscc_proc_3_input_1_ExtraOptions_10 = ExtraOptions_9;
              MR_Word next_value_of_tscc_proc_3_input_2_Globals_11 = Globals_10;
              MR_Word next_value_of_tscc_proc_3_input_3_TargetFile_12 = TargetFile_11;
              MR_Word next_value_of_tscc_proc_3_input_4_ModuleDepInfo_13 = ModuleDepInfo_22;
              MR_Word next_value_of_tscc_proc_3_input_5_STATE_VARIABLE_Info_0_43 = STATE_VARIABLE_Info_31_31;

              // direct tailcall eliminated
              ;
              tscc_proc_3_input_1_ExtraOptions_10 = next_value_of_tscc_proc_3_input_1_ExtraOptions_10;
              tscc_proc_3_input_2_Globals_11 = next_value_of_tscc_proc_3_input_2_Globals_11;
              tscc_proc_3_input_3_TargetFile_12 = next_value_of_tscc_proc_3_input_3_TargetFile_12;
              tscc_proc_3_input_4_ModuleDepInfo_13 = next_value_of_tscc_proc_3_input_4_ModuleDepInfo_13;
              tscc_proc_3_input_5_STATE_VARIABLE_Info_0_43 = next_value_of_tscc_proc_3_input_5_STATE_VARIABLE_Info_0_43;
              goto top_of_proc_3;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            Succeeded_12 = (MR_Integer) 1;
            STATE_VARIABLE_Info_24 = STATE_VARIABLE_Info_27_27;
          }
          break;
      }
      tscc_output_1_Succeeded_12 = Succeeded_12;
      tscc_output_2_STATE_VARIABLE_Info_19 = STATE_VARIABLE_Info_24;
      goto tscc_end;
    }
  top_of_proc_3:;
    {
      MR_Word ExtraOptions_10 = tscc_proc_3_input_1_ExtraOptions_10;
      MR_Word Globals_11 = tscc_proc_3_input_2_Globals_11;
      MR_Word TargetFile_12 = tscc_proc_3_input_3_TargetFile_12;
      MR_Word ModuleDepInfo_13 = tscc_proc_3_input_4_ModuleDepInfo_13;
      MR_Word Succeeded_14;
      MR_Word STATE_VARIABLE_Info_0_43 = tscc_proc_3_input_5_STATE_VARIABLE_Info_0_43;
      MR_Word STATE_VARIABLE_Info_44;
      MR_bool succeeded;
      MR_Word ModuleName_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TargetFile_12, (MR_Integer) 0))));
      MR_Word TargetType_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TargetFile_12, (MR_Integer) 1))));
      MR_Word CompilationTask_19;
      MR_Word SourceFileModuleName_20;
      MR_Word CompilationTaskType_21;

      CompilationTask_19 = make__module_target__compilation_task_1_f_0(TargetType_18);
      parse_tree__module_imports__module_dep_info_get_source_file_module_name_2_p_0(ModuleDepInfo_13, &SourceFileModuleName_20);
      CompilationTaskType_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CompilationTask_19, (MR_Integer) 0))));
      succeeded = ((MR_tag((MR_Word) CompilationTaskType_21)) == (MR_Integer) 0);
      if (succeeded)
      {
        succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(SourceFileModuleName_20, ModuleName_17);
        succeeded = !(succeeded);
      }
      if (succeeded)
      {
        MR_Word NestedTargetFile_24;
        MR_Word Var_47;
        MR_Word next_value_of_tscc_proc_1_input_1_ExtraOptions_9;
        MR_Word next_value_of_tscc_proc_1_input_2_Globals_10;
        MR_Word next_value_of_tscc_proc_1_input_3_Dep_11;
        MR_Word next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Info_0_18;

        {
          NestedTargetFile_24 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), NestedTargetFile_24, 0) = ((MR_Box) (SourceFileModuleName_20));
          MR_hl_field(MR_mktag(0), NestedTargetFile_24, 1) = ((MR_Box) (TargetType_18));
        }
        {
          Var_47 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_47, 0) = ((MR_Box) (NestedTargetFile_24));
        }
        // direct tailcall eliminated
        ;
        next_value_of_tscc_proc_1_input_1_ExtraOptions_9 = ExtraOptions_10;
        next_value_of_tscc_proc_1_input_2_Globals_10 = Globals_11;
        next_value_of_tscc_proc_1_input_3_Dep_11 = Var_47;
        next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Info_0_18 = STATE_VARIABLE_Info_0_43;
        tscc_proc_1_input_1_ExtraOptions_9 = next_value_of_tscc_proc_1_input_1_ExtraOptions_9;
        tscc_proc_1_input_2_Globals_10 = next_value_of_tscc_proc_1_input_2_Globals_10;
        tscc_proc_1_input_3_Dep_11 = next_value_of_tscc_proc_1_input_3_Dep_11;
        tscc_proc_1_input_4_STATE_VARIABLE_Info_0_18 = next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Info_0_18;
        goto top_of_proc_1;
      }
      else
      {
        MR_Word TouchedTargetFiles_25;
        MR_Word TouchedFiles_26;
        MR_Word ModulesToCheck_30;
        MR_Word ModulesToCheckSet_31;
        MR_Word DepsSucceeded_32;
        MR_Word DepFiles0_33;
        MR_Word DepFilesSet0_34;
        MR_Word DepFilesToMake_36;
        MR_Word KeepGoing_38;
        MR_Word STATE_VARIABLE_Info_50_50;
        MR_Word STATE_VARIABLE_Info_53_53;
        MR_Word STATE_VARIABLE_Info_58_58;
        MR_Word Var_59;
        MR_Word Var_60;
        MR_Word Var_61;
        MR_Word STATE_VARIABLE_Info_62_62;
        MR_Word Var_64;
        MR_Word Var_67;
        MR_Box conv1_STATE_VARIABLE_Info_53_53;
        MR_Box conv7_DepFiles0_33;
        MR_Box conv6_STATE_VARIABLE_Info_62_62;
        MR_Box conv5_STATE_VARIABLE_IO_63_63;

        make__module_target__find_files_maybe_touched_by_task_9_p_0(Globals_11, TargetFile_12, CompilationTaskType_21, &TouchedTargetFiles_25, &TouchedFiles_26, STATE_VARIABLE_Info_0_43, &STATE_VARIABLE_Info_50_50);
        mercury__list__foldl_4_p_0((MR_Word) (&make__make_info__make__make_info__type_ctor_info_target_file_0), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), (MR_Word) (&make__module_target_scalar_common_14[0]), TouchedTargetFiles_25, ((MR_Box) (STATE_VARIABLE_Info_50_50)), &conv1_STATE_VARIABLE_Info_53_53);
        STATE_VARIABLE_Info_53_53 = ((MR_Word) (conv1_STATE_VARIABLE_Info_53_53));
        make__util__debug_file_msg_5_p_0(Globals_11, TargetFile_12, (MR_String) "checking dependencies");
        succeeded = ((MR_tag((MR_Word) CompilationTaskType_21)) == (MR_Integer) 0);
        if (succeeded)
        {
          MR_Word MaybeTopModule_28;
          MR_Word NestedSubModules_29;

          parse_tree__module_imports__module_dep_info_get_maybe_top_module_2_p_0(ModuleDepInfo_13, &MaybeTopModule_28);
          NestedSubModules_29 = parse_tree__module_imports__get_nested_children_list_of_top_module_1_f_0(MaybeTopModule_28);
          {
            ModulesToCheck_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ModulesToCheck_30, 0) = ((MR_Box) (ModuleName_17));
            MR_hl_field(MR_mktag(1), ModulesToCheck_30, 1) = ((MR_Box) (NestedSubModules_29));
          }
        }
        else
          {
            ModulesToCheck_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ModulesToCheck_30, 0) = ((MR_Box) (ModuleName_17));
            MR_hl_field(MR_mktag(1), ModulesToCheck_30, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
        make__deps_set__module_names_to_index_set_4_p_0(ModulesToCheck_30, &ModulesToCheckSet_31, STATE_VARIABLE_Info_53_53, &STATE_VARIABLE_Info_58_58);
        Var_59 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_58_58, (MR_Integer) 13))) & (MR_Integer) 1);
        Var_64 = make__dependencies__target_dependencies_2_f_0(Globals_11, TargetType_18);
        {
          Var_60 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_60, 0) = ((MR_Box) (&make__module_target_scalar_common_10[1]));
          MR_hl_field(MR_mktag(0), Var_60, 1) = ((MR_Box) (make__module_target__make_module_target_file_main_path_9_p_0_2));
          MR_hl_field(MR_mktag(0), Var_60, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), Var_60, 3) = ((MR_Box) (Var_64));
        }
        Var_61 = mercury__sparse_bitset__init_0_f_0((MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_dependency_file_index_0));
        make__dependencies__deps_set_foldl3_maybe_stop_at_error_11_p_0((MR_Word) (&make__module_target_scalar_common_1[1]), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), (MR_Word) (&make__module_target_scalar_common_1[0]), Var_59, Var_60, Globals_11, ModulesToCheckSet_31, &DepsSucceeded_32, ((MR_Box) (Var_61)), &conv7_DepFiles0_33, ((MR_Box) (STATE_VARIABLE_Info_58_58)), &conv6_STATE_VARIABLE_Info_62_62, ((MR_Box) ((MR_Integer) 0)), &conv5_STATE_VARIABLE_IO_63_63);
        DepFiles0_33 = ((MR_Word) (conv7_DepFiles0_33));
        STATE_VARIABLE_Info_62_62 = ((MR_Word) (conv6_STATE_VARIABLE_Info_62_62));
        make__deps_set__dependency_file_index_set_to_plain_set_3_p_0(STATE_VARIABLE_Info_62_62, DepFiles0_33, &DepFilesSet0_34);
        succeeded = (TargetType_18 == (MR_Word) ((MR_Unsigned) 8U));
        if (succeeded)
        {
          MR_Word PrivateInts_35;
          MR_Word Var_66;

          PrivateInts_35 = make__util__make_dependency_list_2_f_0(ModulesToCheck_30, (MR_Word) ((MR_Unsigned) 8U));
          Var_66 = mercury__set__delete_list_2_f_0((MR_Word) (&make__dependencies__make__dependencies__type_ctor_info_dependency_file_0), DepFilesSet0_34, PrivateInts_35);
          DepFilesToMake_36 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&make__dependencies__make__dependencies__type_ctor_info_dependency_file_0), Var_66);
        }
        else
          DepFilesToMake_36 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&make__dependencies__make__dependencies__type_ctor_info_dependency_file_0), DepFilesSet0_34);
        {
          Var_67 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_67, 0) = ((MR_Box) (&make__module_target_scalar_common_12[2]));
          MR_hl_field(MR_mktag(0), Var_67, 1) = ((MR_Box) (make__module_target__make_module_target_file_main_path_9_p_0_3));
          MR_hl_field(MR_mktag(0), Var_67, 2) = ((MR_Box) ((MR_Integer) 4));
          MR_hl_field(MR_mktag(0), Var_67, 3) = ((MR_Box) (Globals_11));
          MR_hl_field(MR_mktag(0), Var_67, 4) = ((MR_Box) (TargetFile_12));
          MR_hl_field(MR_mktag(0), Var_67, 5) = ((MR_Box) (DepFiles0_33));
          MR_hl_field(MR_mktag(0), Var_67, 6) = ((MR_Box) (STATE_VARIABLE_Info_62_62));
        }
        make__util__debug_make_msg_4_p_0(Globals_11, Var_67);
        KeepGoing_38 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_62_62, (MR_Integer) 13))) & (MR_Integer) 1);
        succeeded = (DepsSucceeded_32 == (MR_Integer) 0);
        if (succeeded)
          succeeded = (KeepGoing_38 == (MR_Integer) 0);
        if (succeeded)
        {
          MR_Box conv9_STATE_VARIABLE_Info_44;

          Succeeded_14 = (MR_Integer) 0;
          mercury__list__foldl_4_p_0((MR_Word) (&make__make_info__make__make_info__type_ctor_info_target_file_0), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), (MR_Word) (&make__module_target_scalar_common_14[1]), TouchedTargetFiles_25, ((MR_Box) (STATE_VARIABLE_Info_62_62)), &conv9_STATE_VARIABLE_Info_44);
          STATE_VARIABLE_Info_44 = ((MR_Word) (conv9_STATE_VARIABLE_Info_44));
        }
        else
        {
          MR_Word DepsResult0_40;
          MR_Word STATE_VARIABLE_Info_78_216;

          make__module_target__make_dependency_files_10_p_0(Globals_11, TargetFile_12, DepFilesToMake_36, TouchedTargetFiles_25, TouchedFiles_26, &DepsResult0_40, STATE_VARIABLE_Info_62_62, &STATE_VARIABLE_Info_78_216);
          switch (DepsSucceeded_32) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Box conv11_STATE_VARIABLE_Info_44;

                Succeeded_14 = (MR_Integer) 0;
                mercury__list__foldl_4_p_0((MR_Word) (&make__make_info__make__make_info__type_ctor_info_target_file_0), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), (MR_Word) (&make__module_target_scalar_common_14[2]), TouchedTargetFiles_25, ((MR_Box) (STATE_VARIABLE_Info_78_216)), &conv11_STATE_VARIABLE_Info_44);
                STATE_VARIABLE_Info_44 = ((MR_Word) (conv11_STATE_VARIABLE_Info_44));
              }
              break;
            case (MR_Integer) 1:
              switch (DepsResult0_40) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 2:
                  {
                    MR_Box conv13_STATE_VARIABLE_Info_44;

                    Succeeded_14 = (MR_Integer) 0;
                    mercury__list__foldl_4_p_0((MR_Word) (&make__make_info__make__make_info__type_ctor_info_target_file_0), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), (MR_Word) (&make__module_target_scalar_common_14[3]), TouchedTargetFiles_25, ((MR_Box) (STATE_VARIABLE_Info_78_216)), &conv13_STATE_VARIABLE_Info_44);
                    STATE_VARIABLE_Info_44 = ((MR_Word) (conv13_STATE_VARIABLE_Info_44));
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word Targets0_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_78_216, (MR_Integer) 16))));
                    MR_Word Targets_42;
                    MR_Word Var_90;
                    MR_Word Var_91;
                    MR_Word STATE_VARIABLE_Info_92_92;
                    MR_Word Var_140 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_78_216, (MR_Integer) 0))));
                    MR_Word Var_141 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_78_216, (MR_Integer) 1))));
                    MR_Word Var_142 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_78_216, (MR_Integer) 2))));
                    MR_Word Var_143 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_78_216, (MR_Integer) 3))));
                    MR_Word Var_144 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_78_216, (MR_Integer) 4))));
                    MR_Word Var_145 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_78_216, (MR_Integer) 5))));
                    MR_Word Var_146 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_78_216, (MR_Integer) 6))));
                    MR_Word Var_147 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_78_216, (MR_Integer) 7))));
                    MR_Word Var_148 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_78_216, (MR_Integer) 8))));
                    MR_Word Var_149 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_78_216, (MR_Integer) 9))));
                    MR_Word Var_150 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_78_216, (MR_Integer) 10))));
                    MR_Word Var_151 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_78_216, (MR_Integer) 11))));
                    MR_Word Var_152 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_78_216, (MR_Integer) 12))));
                    MR_Word Var_155 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_78_216, (MR_Integer) 14))));
                    MR_Word Var_156 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_78_216, (MR_Integer) 15))));
                    MR_Integer Var_157 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_78_216, (MR_Integer) 17))));
                    MR_Word Var_158 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_78_216, (MR_Integer) 18))));
                    MR_Word Var_159 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_78_216, (MR_Integer) 19))));
                    MR_Unsigned packed_word_6 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_78_216, (MR_Integer) 13)));

                    {
                      Var_91 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), Var_91, 0) = ((MR_Box) (TargetType_18));
                    }
                    {
                      Var_90 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), Var_90, 0) = ((MR_Box) (ModuleName_17));
                      MR_hl_field(MR_mktag(0), Var_90, 1) = ((MR_Box) (Var_91));
                    }
                    mercury__set__delete_3_p_0((MR_Word) (&make__module_target_scalar_common_2[0]), ((MR_Box) (Var_90)), Targets0_41, &Targets_42);
                    {
                      STATE_VARIABLE_Info_92_92 = (MR_Word) MR_new_object(MR_Word, (20 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_92_92, 0) = ((MR_Box) (Var_140));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_92_92, 1) = ((MR_Box) (Var_141));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_92_92, 2) = ((MR_Box) (Var_142));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_92_92, 3) = ((MR_Box) (Var_143));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_92_92, 4) = ((MR_Box) (Var_144));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_92_92, 5) = ((MR_Box) (Var_145));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_92_92, 6) = ((MR_Box) (Var_146));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_92_92, 7) = ((MR_Box) (Var_147));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_92_92, 8) = ((MR_Box) (Var_148));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_92_92, 9) = ((MR_Box) (Var_149));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_92_92, 10) = ((MR_Box) (Var_150));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_92_92, 11) = ((MR_Box) (Var_151));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_92_92, 12) = ((MR_Box) (Var_152));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_92_92, 13) = (MR_Box) (packed_word_6);
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_92_92, 14) = ((MR_Box) (Var_155));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_92_92, 15) = ((MR_Box) (Var_156));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_92_92, 16) = ((MR_Box) (Targets_42));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_92_92, 17) = ((MR_Box) (Var_157));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_92_92, 18) = ((MR_Box) (Var_158));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_92_92, 19) = ((MR_Box) (Var_159));
                    }
                    make__module_target__build_target_12_p_0(Globals_11, CompilationTask_19, TargetFile_12, ModuleDepInfo_13, TouchedTargetFiles_25, TouchedFiles_26, ExtraOptions_10, &Succeeded_14, STATE_VARIABLE_Info_92_92, &STATE_VARIABLE_Info_44);
                  }
                  break;
                case (MR_Integer) 0:
                  {
                    MR_Word Var_80;
                    MR_Word STATE_VARIABLE_Info_81_81;
                    MR_Word Var_83;
                    MR_Word Var_87;
                    MR_Box conv15_STATE_VARIABLE_Info_44;

                    {
                      Var_83 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), Var_83, 0) = ((MR_Box) (TargetType_18));
                    }
                    {
                      Var_80 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), Var_80, 0) = ((MR_Box) (ModuleName_17));
                      MR_hl_field(MR_mktag(0), Var_80, 1) = ((MR_Box) (Var_83));
                    }
                    make__util__maybe_warn_up_to_date_target_6_p_0(Globals_11, Var_80, STATE_VARIABLE_Info_78_216, &STATE_VARIABLE_Info_81_81);
                    make__util__debug_file_msg_5_p_0(Globals_11, TargetFile_12, (MR_String) "up to date");
                    Succeeded_14 = (MR_Integer) 1;
                    {
                      Var_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_87, 0) = ((MR_Box) (TargetFile_12));
                      MR_hl_field(MR_mktag(1), Var_87, 1) = ((MR_Box) (TouchedTargetFiles_25));
                    }
                    mercury__list__foldl_4_p_0((MR_Word) (&make__make_info__make__make_info__type_ctor_info_target_file_0), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), (MR_Word) (&make__module_target_scalar_common_14[4]), Var_87, ((MR_Box) (STATE_VARIABLE_Info_81_81)), &conv15_STATE_VARIABLE_Info_44);
                    STATE_VARIABLE_Info_44 = ((MR_Word) (conv15_STATE_VARIABLE_Info_44));
                  }
                  break;
              }
              break;
          }
        }
      }
      tscc_output_1_Succeeded_12 = Succeeded_14;
      tscc_output_2_STATE_VARIABLE_Info_19 = STATE_VARIABLE_Info_44;
      goto tscc_end;
    }
  tscc_end:;
    *tscc_output_ptr_1_Succeeded_12 = tscc_output_1_Succeeded_12;
    *tscc_output_ptr_2_STATE_VARIABLE_Info_19 = tscc_output_2_STATE_VARIABLE_Info_19;
    return;
  }
}

static void MR_CALL 
make__module_target__make_module_target_file_main_path_9_p_0(
  MR_Word tscc_proc_3_input_1_ExtraOptions_10,
  MR_Word tscc_proc_3_input_2_Globals_11,
  MR_Word tscc_proc_3_input_3_TargetFile_12,
  MR_Word tscc_proc_3_input_4_ModuleDepInfo_13,
  MR_Word * tscc_output_ptr_1_Succeeded_12,
  MR_Word tscc_proc_3_input_5_STATE_VARIABLE_Info_0_43,
  MR_Word * tscc_output_ptr_2_STATE_VARIABLE_Info_19)
{
  {
    MR_Word tscc_proc_1_input_1_ExtraOptions_9;
    MR_Word tscc_proc_1_input_2_Globals_10;
    MR_Word tscc_proc_1_input_3_Dep_11;
    MR_Word tscc_proc_1_input_4_STATE_VARIABLE_Info_0_18;
    MR_Word tscc_proc_2_input_1_ExtraOptions_9;
    MR_Word tscc_proc_2_input_2_Globals_10;
    MR_Word tscc_proc_2_input_3_TargetFile_11;
    MR_Word tscc_proc_2_input_4_STATE_VARIABLE_Info_0_23;
    MR_Word tscc_output_1_Succeeded_12;
    MR_Word tscc_output_2_STATE_VARIABLE_Info_19;

    // The code for TSCC PROC 3: pred make.module_target.make_module_target_file_main_path/9-0.
    ;
    // Setup for mutual tailcalls optimized into a loop.
    ;
    // The mutually recursive procedures are:
    ;
    ;
    // proc 1 in TSCC: pred make.module_target.make_module_target_extra_options/8-0
    ;
    // proc 2 in TSCC: pred make.module_target.make_module_target_file_extra_options/8-0
    ;
    // proc 3 in TSCC: pred make.module_target.make_module_target_file_main_path/9-0
    ;
    ;
    goto top_of_proc_3;
  top_of_proc_1:;
    {
      MR_Word ExtraOptions_9 = tscc_proc_1_input_1_ExtraOptions_9;
      MR_Word Globals_10 = tscc_proc_1_input_2_Globals_10;
      MR_Word Dep_11 = tscc_proc_1_input_3_Dep_11;
      MR_Word Succeeded_12;
      MR_Word STATE_VARIABLE_Info_0_18 = tscc_proc_1_input_4_STATE_VARIABLE_Info_0_18;
      MR_Word STATE_VARIABLE_Info_19;

      if (((MR_tag((MR_Word) Dep_11)) == (MR_Integer) 1))
      {
        MR_Word Status_16;

        make__dependencies__dependency_status_7_p_0(Globals_10, Dep_11, &Status_16, STATE_VARIABLE_Info_0_18, &STATE_VARIABLE_Info_19);
        Succeeded_12 = ((&make__module_target_vector_common_13[0 + Status_16]))->make__module_target__vector_common_type_13_0__vct_13_f_0;
      }
      else
      {
        MR_Word TargetFile_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Dep_11, (MR_Integer) 0))));
        MR_Word next_value_of_tscc_proc_2_input_1_ExtraOptions_9 = ExtraOptions_9;
        MR_Word next_value_of_tscc_proc_2_input_2_Globals_10 = Globals_10;
        MR_Word next_value_of_tscc_proc_2_input_3_TargetFile_11 = TargetFile_17;
        MR_Word next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_Info_0_23 = STATE_VARIABLE_Info_0_18;

        // direct tailcall eliminated
        ;
        tscc_proc_2_input_1_ExtraOptions_9 = next_value_of_tscc_proc_2_input_1_ExtraOptions_9;
        tscc_proc_2_input_2_Globals_10 = next_value_of_tscc_proc_2_input_2_Globals_10;
        tscc_proc_2_input_3_TargetFile_11 = next_value_of_tscc_proc_2_input_3_TargetFile_11;
        tscc_proc_2_input_4_STATE_VARIABLE_Info_0_23 = next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_Info_0_23;
        goto top_of_proc_2;
      }
      tscc_output_1_Succeeded_12 = Succeeded_12;
      tscc_output_2_STATE_VARIABLE_Info_19 = STATE_VARIABLE_Info_19;
      goto tscc_end;
    }
  top_of_proc_2:;
    {
      MR_Word ExtraOptions_9 = tscc_proc_2_input_1_ExtraOptions_9;
      MR_Word Globals_10 = tscc_proc_2_input_2_Globals_10;
      MR_Word TargetFile_11 = tscc_proc_2_input_3_TargetFile_11;
      MR_Word Succeeded_12;
      MR_Word STATE_VARIABLE_Info_0_23 = tscc_proc_2_input_4_STATE_VARIABLE_Info_0_23;
      MR_Word STATE_VARIABLE_Info_24;
      MR_Word Dep_15;
      MR_Word Status_16;
      MR_Word STATE_VARIABLE_Info_27_27;

      {
        Dep_15 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Dep_15, 0) = ((MR_Box) (TargetFile_11));
      }
      make__dependencies__dependency_status_7_p_0(Globals_10, Dep_15, &Status_16, STATE_VARIABLE_Info_0_23, &STATE_VARIABLE_Info_27_27);
      switch (Status_16) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140make.module_target.make_module_target_file_extra_options\'/8", (MR_String) "target being built, circular dependencies\?");
            return;
          }
          break;
        case (MR_Integer) 3:
          {
            Succeeded_12 = (MR_Integer) 0;
            STATE_VARIABLE_Info_24 = STATE_VARIABLE_Info_27_27;
          }
          break;
        case (MR_Integer) 0:
          {
            MR_Word ModuleName_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TargetFile_11, (MR_Integer) 0))));
            MR_Word MaybeModuleDepInfo_19;
            MR_Word STATE_VARIABLE_Info_31_31;

            make__module_dep_file__get_module_dependencies_7_p_0(Globals_10, ModuleName_17, &MaybeModuleDepInfo_19, STATE_VARIABLE_Info_27_27, &STATE_VARIABLE_Info_31_31);
            if ((MaybeModuleDepInfo_19 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              MR_Word DepStatus0_20;
              MR_Word DepStatus_21;
              MR_Word Var_57;
              MR_Word Var_58;
              MR_Word Var_59;
              MR_Word Var_60;
              MR_Word Var_61;
              MR_Word Var_62;
              MR_Word Var_63;
              MR_Word Var_64;
              MR_Word Var_66;
              MR_Word Var_67;
              MR_Word Var_68;
              MR_Word Var_69;
              MR_Word Var_72;
              MR_Word Var_73;
              MR_Word Var_74;
              MR_Integer Var_75;
              MR_Word Var_76;
              MR_Word Var_77;
              MR_Unsigned packed_word_1;

              Succeeded_12 = (MR_Integer) 0;
              DepStatus0_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_31_31, (MR_Integer) 8))));
              mercury__version_hash_table__set_4_p_0((MR_Word) (&make__dependencies__make__dependencies__type_ctor_info_dependency_file_0), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_dependency_status_0), ((MR_Box) (Dep_15)), ((MR_Box) ((MR_Integer) 3)), DepStatus0_20, &DepStatus_21);
              Var_57 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_31_31, (MR_Integer) 0))));
              Var_58 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_31_31, (MR_Integer) 1))));
              Var_59 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_31_31, (MR_Integer) 2))));
              Var_60 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_31_31, (MR_Integer) 3))));
              Var_61 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_31_31, (MR_Integer) 4))));
              Var_62 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_31_31, (MR_Integer) 5))));
              Var_63 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_31_31, (MR_Integer) 6))));
              Var_64 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_31_31, (MR_Integer) 7))));
              Var_66 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_31_31, (MR_Integer) 9))));
              Var_67 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_31_31, (MR_Integer) 10))));
              Var_68 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_31_31, (MR_Integer) 11))));
              Var_69 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_31_31, (MR_Integer) 12))));
              packed_word_1 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_31_31, (MR_Integer) 13)));
              Var_72 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_31_31, (MR_Integer) 14))));
              Var_73 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_31_31, (MR_Integer) 15))));
              Var_74 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_31_31, (MR_Integer) 16))));
              Var_75 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_31_31, (MR_Integer) 17))));
              Var_76 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_31_31, (MR_Integer) 18))));
              Var_77 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_31_31, (MR_Integer) 19))));
              {
                STATE_VARIABLE_Info_24 = (MR_Word) MR_new_object(MR_Word, (20 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_24, 0) = ((MR_Box) (Var_57));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_24, 1) = ((MR_Box) (Var_58));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_24, 2) = ((MR_Box) (Var_59));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_24, 3) = ((MR_Box) (Var_60));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_24, 4) = ((MR_Box) (Var_61));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_24, 5) = ((MR_Box) (Var_62));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_24, 6) = ((MR_Box) (Var_63));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_24, 7) = ((MR_Box) (Var_64));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_24, 8) = ((MR_Box) (DepStatus_21));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_24, 9) = ((MR_Box) (Var_66));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_24, 10) = ((MR_Box) (Var_67));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_24, 11) = ((MR_Box) (Var_68));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_24, 12) = ((MR_Box) (Var_69));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_24, 13) = (MR_Box) (packed_word_1);
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_24, 14) = ((MR_Box) (Var_72));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_24, 15) = ((MR_Box) (Var_73));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_24, 16) = ((MR_Box) (Var_74));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_24, 17) = ((MR_Box) (Var_75));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_24, 18) = ((MR_Box) (Var_76));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_24, 19) = ((MR_Box) (Var_77));
              }
            }
            else
            {
              MR_Word ModuleDepInfo_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeModuleDepInfo_19, (MR_Integer) 0))));
              MR_Word next_value_of_tscc_proc_3_input_1_ExtraOptions_10 = ExtraOptions_9;
              MR_Word next_value_of_tscc_proc_3_input_2_Globals_11 = Globals_10;
              MR_Word next_value_of_tscc_proc_3_input_3_TargetFile_12 = TargetFile_11;
              MR_Word next_value_of_tscc_proc_3_input_4_ModuleDepInfo_13 = ModuleDepInfo_22;
              MR_Word next_value_of_tscc_proc_3_input_5_STATE_VARIABLE_Info_0_43 = STATE_VARIABLE_Info_31_31;

              // direct tailcall eliminated
              ;
              tscc_proc_3_input_1_ExtraOptions_10 = next_value_of_tscc_proc_3_input_1_ExtraOptions_10;
              tscc_proc_3_input_2_Globals_11 = next_value_of_tscc_proc_3_input_2_Globals_11;
              tscc_proc_3_input_3_TargetFile_12 = next_value_of_tscc_proc_3_input_3_TargetFile_12;
              tscc_proc_3_input_4_ModuleDepInfo_13 = next_value_of_tscc_proc_3_input_4_ModuleDepInfo_13;
              tscc_proc_3_input_5_STATE_VARIABLE_Info_0_43 = next_value_of_tscc_proc_3_input_5_STATE_VARIABLE_Info_0_43;
              goto top_of_proc_3;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            Succeeded_12 = (MR_Integer) 1;
            STATE_VARIABLE_Info_24 = STATE_VARIABLE_Info_27_27;
          }
          break;
      }
      tscc_output_1_Succeeded_12 = Succeeded_12;
      tscc_output_2_STATE_VARIABLE_Info_19 = STATE_VARIABLE_Info_24;
      goto tscc_end;
    }
  top_of_proc_3:;
    {
      MR_Word ExtraOptions_10 = tscc_proc_3_input_1_ExtraOptions_10;
      MR_Word Globals_11 = tscc_proc_3_input_2_Globals_11;
      MR_Word TargetFile_12 = tscc_proc_3_input_3_TargetFile_12;
      MR_Word ModuleDepInfo_13 = tscc_proc_3_input_4_ModuleDepInfo_13;
      MR_Word Succeeded_14;
      MR_Word STATE_VARIABLE_Info_0_43 = tscc_proc_3_input_5_STATE_VARIABLE_Info_0_43;
      MR_Word STATE_VARIABLE_Info_44;
      MR_bool succeeded;
      MR_Word ModuleName_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TargetFile_12, (MR_Integer) 0))));
      MR_Word TargetType_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TargetFile_12, (MR_Integer) 1))));
      MR_Word CompilationTask_19;
      MR_Word SourceFileModuleName_20;
      MR_Word CompilationTaskType_21;

      CompilationTask_19 = make__module_target__compilation_task_1_f_0(TargetType_18);
      parse_tree__module_imports__module_dep_info_get_source_file_module_name_2_p_0(ModuleDepInfo_13, &SourceFileModuleName_20);
      CompilationTaskType_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CompilationTask_19, (MR_Integer) 0))));
      succeeded = ((MR_tag((MR_Word) CompilationTaskType_21)) == (MR_Integer) 0);
      if (succeeded)
      {
        succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(SourceFileModuleName_20, ModuleName_17);
        succeeded = !(succeeded);
      }
      if (succeeded)
      {
        MR_Word NestedTargetFile_24;
        MR_Word Var_47;
        MR_Word next_value_of_tscc_proc_1_input_1_ExtraOptions_9;
        MR_Word next_value_of_tscc_proc_1_input_2_Globals_10;
        MR_Word next_value_of_tscc_proc_1_input_3_Dep_11;
        MR_Word next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Info_0_18;

        {
          NestedTargetFile_24 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), NestedTargetFile_24, 0) = ((MR_Box) (SourceFileModuleName_20));
          MR_hl_field(MR_mktag(0), NestedTargetFile_24, 1) = ((MR_Box) (TargetType_18));
        }
        {
          Var_47 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_47, 0) = ((MR_Box) (NestedTargetFile_24));
        }
        // direct tailcall eliminated
        ;
        next_value_of_tscc_proc_1_input_1_ExtraOptions_9 = ExtraOptions_10;
        next_value_of_tscc_proc_1_input_2_Globals_10 = Globals_11;
        next_value_of_tscc_proc_1_input_3_Dep_11 = Var_47;
        next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Info_0_18 = STATE_VARIABLE_Info_0_43;
        tscc_proc_1_input_1_ExtraOptions_9 = next_value_of_tscc_proc_1_input_1_ExtraOptions_9;
        tscc_proc_1_input_2_Globals_10 = next_value_of_tscc_proc_1_input_2_Globals_10;
        tscc_proc_1_input_3_Dep_11 = next_value_of_tscc_proc_1_input_3_Dep_11;
        tscc_proc_1_input_4_STATE_VARIABLE_Info_0_18 = next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Info_0_18;
        goto top_of_proc_1;
      }
      else
      {
        MR_Word TouchedTargetFiles_25;
        MR_Word TouchedFiles_26;
        MR_Word ModulesToCheck_30;
        MR_Word ModulesToCheckSet_31;
        MR_Word DepsSucceeded_32;
        MR_Word DepFiles0_33;
        MR_Word DepFilesSet0_34;
        MR_Word DepFilesToMake_36;
        MR_Word KeepGoing_38;
        MR_Word STATE_VARIABLE_Info_50_50;
        MR_Word STATE_VARIABLE_Info_53_53;
        MR_Word STATE_VARIABLE_Info_58_58;
        MR_Word Var_59;
        MR_Word Var_60;
        MR_Word Var_61;
        MR_Word STATE_VARIABLE_Info_62_62;
        MR_Word Var_64;
        MR_Word Var_67;
        MR_Box conv1_STATE_VARIABLE_Info_53_53;
        MR_Box conv7_DepFiles0_33;
        MR_Box conv6_STATE_VARIABLE_Info_62_62;
        MR_Box conv5_STATE_VARIABLE_IO_63_63;

        make__module_target__find_files_maybe_touched_by_task_9_p_0(Globals_11, TargetFile_12, CompilationTaskType_21, &TouchedTargetFiles_25, &TouchedFiles_26, STATE_VARIABLE_Info_0_43, &STATE_VARIABLE_Info_50_50);
        mercury__list__foldl_4_p_0((MR_Word) (&make__make_info__make__make_info__type_ctor_info_target_file_0), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), (MR_Word) (&make__module_target_scalar_common_14[0]), TouchedTargetFiles_25, ((MR_Box) (STATE_VARIABLE_Info_50_50)), &conv1_STATE_VARIABLE_Info_53_53);
        STATE_VARIABLE_Info_53_53 = ((MR_Word) (conv1_STATE_VARIABLE_Info_53_53));
        make__util__debug_file_msg_5_p_0(Globals_11, TargetFile_12, (MR_String) "checking dependencies");
        succeeded = ((MR_tag((MR_Word) CompilationTaskType_21)) == (MR_Integer) 0);
        if (succeeded)
        {
          MR_Word MaybeTopModule_28;
          MR_Word NestedSubModules_29;

          parse_tree__module_imports__module_dep_info_get_maybe_top_module_2_p_0(ModuleDepInfo_13, &MaybeTopModule_28);
          NestedSubModules_29 = parse_tree__module_imports__get_nested_children_list_of_top_module_1_f_0(MaybeTopModule_28);
          {
            ModulesToCheck_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ModulesToCheck_30, 0) = ((MR_Box) (ModuleName_17));
            MR_hl_field(MR_mktag(1), ModulesToCheck_30, 1) = ((MR_Box) (NestedSubModules_29));
          }
        }
        else
          {
            ModulesToCheck_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ModulesToCheck_30, 0) = ((MR_Box) (ModuleName_17));
            MR_hl_field(MR_mktag(1), ModulesToCheck_30, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
        make__deps_set__module_names_to_index_set_4_p_0(ModulesToCheck_30, &ModulesToCheckSet_31, STATE_VARIABLE_Info_53_53, &STATE_VARIABLE_Info_58_58);
        Var_59 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_58_58, (MR_Integer) 13))) & (MR_Integer) 1);
        Var_64 = make__dependencies__target_dependencies_2_f_0(Globals_11, TargetType_18);
        {
          Var_60 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_60, 0) = ((MR_Box) (&make__module_target_scalar_common_10[1]));
          MR_hl_field(MR_mktag(0), Var_60, 1) = ((MR_Box) (make__module_target__make_module_target_file_main_path_9_p_0_2));
          MR_hl_field(MR_mktag(0), Var_60, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), Var_60, 3) = ((MR_Box) (Var_64));
        }
        Var_61 = mercury__sparse_bitset__init_0_f_0((MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_dependency_file_index_0));
        make__dependencies__deps_set_foldl3_maybe_stop_at_error_11_p_0((MR_Word) (&make__module_target_scalar_common_1[1]), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), (MR_Word) (&make__module_target_scalar_common_1[0]), Var_59, Var_60, Globals_11, ModulesToCheckSet_31, &DepsSucceeded_32, ((MR_Box) (Var_61)), &conv7_DepFiles0_33, ((MR_Box) (STATE_VARIABLE_Info_58_58)), &conv6_STATE_VARIABLE_Info_62_62, ((MR_Box) ((MR_Integer) 0)), &conv5_STATE_VARIABLE_IO_63_63);
        DepFiles0_33 = ((MR_Word) (conv7_DepFiles0_33));
        STATE_VARIABLE_Info_62_62 = ((MR_Word) (conv6_STATE_VARIABLE_Info_62_62));
        make__deps_set__dependency_file_index_set_to_plain_set_3_p_0(STATE_VARIABLE_Info_62_62, DepFiles0_33, &DepFilesSet0_34);
        succeeded = (TargetType_18 == (MR_Word) ((MR_Unsigned) 8U));
        if (succeeded)
        {
          MR_Word PrivateInts_35;
          MR_Word Var_66;

          PrivateInts_35 = make__util__make_dependency_list_2_f_0(ModulesToCheck_30, (MR_Word) ((MR_Unsigned) 8U));
          Var_66 = mercury__set__delete_list_2_f_0((MR_Word) (&make__dependencies__make__dependencies__type_ctor_info_dependency_file_0), DepFilesSet0_34, PrivateInts_35);
          DepFilesToMake_36 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&make__dependencies__make__dependencies__type_ctor_info_dependency_file_0), Var_66);
        }
        else
          DepFilesToMake_36 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&make__dependencies__make__dependencies__type_ctor_info_dependency_file_0), DepFilesSet0_34);
        {
          Var_67 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_67, 0) = ((MR_Box) (&make__module_target_scalar_common_12[2]));
          MR_hl_field(MR_mktag(0), Var_67, 1) = ((MR_Box) (make__module_target__make_module_target_file_main_path_9_p_0_3));
          MR_hl_field(MR_mktag(0), Var_67, 2) = ((MR_Box) ((MR_Integer) 4));
          MR_hl_field(MR_mktag(0), Var_67, 3) = ((MR_Box) (Globals_11));
          MR_hl_field(MR_mktag(0), Var_67, 4) = ((MR_Box) (TargetFile_12));
          MR_hl_field(MR_mktag(0), Var_67, 5) = ((MR_Box) (DepFiles0_33));
          MR_hl_field(MR_mktag(0), Var_67, 6) = ((MR_Box) (STATE_VARIABLE_Info_62_62));
        }
        make__util__debug_make_msg_4_p_0(Globals_11, Var_67);
        KeepGoing_38 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_62_62, (MR_Integer) 13))) & (MR_Integer) 1);
        succeeded = (DepsSucceeded_32 == (MR_Integer) 0);
        if (succeeded)
          succeeded = (KeepGoing_38 == (MR_Integer) 0);
        if (succeeded)
        {
          MR_Box conv9_STATE_VARIABLE_Info_44;

          Succeeded_14 = (MR_Integer) 0;
          mercury__list__foldl_4_p_0((MR_Word) (&make__make_info__make__make_info__type_ctor_info_target_file_0), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), (MR_Word) (&make__module_target_scalar_common_14[1]), TouchedTargetFiles_25, ((MR_Box) (STATE_VARIABLE_Info_62_62)), &conv9_STATE_VARIABLE_Info_44);
          STATE_VARIABLE_Info_44 = ((MR_Word) (conv9_STATE_VARIABLE_Info_44));
        }
        else
        {
          MR_Word DepsResult0_40;
          MR_Word STATE_VARIABLE_Info_78_216;

          make__module_target__make_dependency_files_10_p_0(Globals_11, TargetFile_12, DepFilesToMake_36, TouchedTargetFiles_25, TouchedFiles_26, &DepsResult0_40, STATE_VARIABLE_Info_62_62, &STATE_VARIABLE_Info_78_216);
          switch (DepsSucceeded_32) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Box conv11_STATE_VARIABLE_Info_44;

                Succeeded_14 = (MR_Integer) 0;
                mercury__list__foldl_4_p_0((MR_Word) (&make__make_info__make__make_info__type_ctor_info_target_file_0), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), (MR_Word) (&make__module_target_scalar_common_14[2]), TouchedTargetFiles_25, ((MR_Box) (STATE_VARIABLE_Info_78_216)), &conv11_STATE_VARIABLE_Info_44);
                STATE_VARIABLE_Info_44 = ((MR_Word) (conv11_STATE_VARIABLE_Info_44));
              }
              break;
            case (MR_Integer) 1:
              switch (DepsResult0_40) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 2:
                  {
                    MR_Box conv13_STATE_VARIABLE_Info_44;

                    Succeeded_14 = (MR_Integer) 0;
                    mercury__list__foldl_4_p_0((MR_Word) (&make__make_info__make__make_info__type_ctor_info_target_file_0), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), (MR_Word) (&make__module_target_scalar_common_14[3]), TouchedTargetFiles_25, ((MR_Box) (STATE_VARIABLE_Info_78_216)), &conv13_STATE_VARIABLE_Info_44);
                    STATE_VARIABLE_Info_44 = ((MR_Word) (conv13_STATE_VARIABLE_Info_44));
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word Targets0_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_78_216, (MR_Integer) 16))));
                    MR_Word Targets_42;
                    MR_Word Var_90;
                    MR_Word Var_91;
                    MR_Word STATE_VARIABLE_Info_92_92;
                    MR_Word Var_140 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_78_216, (MR_Integer) 0))));
                    MR_Word Var_141 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_78_216, (MR_Integer) 1))));
                    MR_Word Var_142 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_78_216, (MR_Integer) 2))));
                    MR_Word Var_143 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_78_216, (MR_Integer) 3))));
                    MR_Word Var_144 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_78_216, (MR_Integer) 4))));
                    MR_Word Var_145 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_78_216, (MR_Integer) 5))));
                    MR_Word Var_146 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_78_216, (MR_Integer) 6))));
                    MR_Word Var_147 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_78_216, (MR_Integer) 7))));
                    MR_Word Var_148 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_78_216, (MR_Integer) 8))));
                    MR_Word Var_149 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_78_216, (MR_Integer) 9))));
                    MR_Word Var_150 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_78_216, (MR_Integer) 10))));
                    MR_Word Var_151 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_78_216, (MR_Integer) 11))));
                    MR_Word Var_152 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_78_216, (MR_Integer) 12))));
                    MR_Word Var_155 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_78_216, (MR_Integer) 14))));
                    MR_Word Var_156 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_78_216, (MR_Integer) 15))));
                    MR_Integer Var_157 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_78_216, (MR_Integer) 17))));
                    MR_Word Var_158 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_78_216, (MR_Integer) 18))));
                    MR_Word Var_159 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_78_216, (MR_Integer) 19))));
                    MR_Unsigned packed_word_6 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_78_216, (MR_Integer) 13)));

                    {
                      Var_91 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), Var_91, 0) = ((MR_Box) (TargetType_18));
                    }
                    {
                      Var_90 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), Var_90, 0) = ((MR_Box) (ModuleName_17));
                      MR_hl_field(MR_mktag(0), Var_90, 1) = ((MR_Box) (Var_91));
                    }
                    mercury__set__delete_3_p_0((MR_Word) (&make__module_target_scalar_common_2[0]), ((MR_Box) (Var_90)), Targets0_41, &Targets_42);
                    {
                      STATE_VARIABLE_Info_92_92 = (MR_Word) MR_new_object(MR_Word, (20 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_92_92, 0) = ((MR_Box) (Var_140));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_92_92, 1) = ((MR_Box) (Var_141));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_92_92, 2) = ((MR_Box) (Var_142));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_92_92, 3) = ((MR_Box) (Var_143));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_92_92, 4) = ((MR_Box) (Var_144));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_92_92, 5) = ((MR_Box) (Var_145));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_92_92, 6) = ((MR_Box) (Var_146));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_92_92, 7) = ((MR_Box) (Var_147));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_92_92, 8) = ((MR_Box) (Var_148));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_92_92, 9) = ((MR_Box) (Var_149));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_92_92, 10) = ((MR_Box) (Var_150));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_92_92, 11) = ((MR_Box) (Var_151));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_92_92, 12) = ((MR_Box) (Var_152));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_92_92, 13) = (MR_Box) (packed_word_6);
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_92_92, 14) = ((MR_Box) (Var_155));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_92_92, 15) = ((MR_Box) (Var_156));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_92_92, 16) = ((MR_Box) (Targets_42));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_92_92, 17) = ((MR_Box) (Var_157));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_92_92, 18) = ((MR_Box) (Var_158));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_92_92, 19) = ((MR_Box) (Var_159));
                    }
                    make__module_target__build_target_12_p_0(Globals_11, CompilationTask_19, TargetFile_12, ModuleDepInfo_13, TouchedTargetFiles_25, TouchedFiles_26, ExtraOptions_10, &Succeeded_14, STATE_VARIABLE_Info_92_92, &STATE_VARIABLE_Info_44);
                  }
                  break;
                case (MR_Integer) 0:
                  {
                    MR_Word Var_80;
                    MR_Word STATE_VARIABLE_Info_81_81;
                    MR_Word Var_83;
                    MR_Word Var_87;
                    MR_Box conv15_STATE_VARIABLE_Info_44;

                    {
                      Var_83 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), Var_83, 0) = ((MR_Box) (TargetType_18));
                    }
                    {
                      Var_80 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), Var_80, 0) = ((MR_Box) (ModuleName_17));
                      MR_hl_field(MR_mktag(0), Var_80, 1) = ((MR_Box) (Var_83));
                    }
                    make__util__maybe_warn_up_to_date_target_6_p_0(Globals_11, Var_80, STATE_VARIABLE_Info_78_216, &STATE_VARIABLE_Info_81_81);
                    make__util__debug_file_msg_5_p_0(Globals_11, TargetFile_12, (MR_String) "up to date");
                    Succeeded_14 = (MR_Integer) 1;
                    {
                      Var_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_87, 0) = ((MR_Box) (TargetFile_12));
                      MR_hl_field(MR_mktag(1), Var_87, 1) = ((MR_Box) (TouchedTargetFiles_25));
                    }
                    mercury__list__foldl_4_p_0((MR_Word) (&make__make_info__make__make_info__type_ctor_info_target_file_0), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), (MR_Word) (&make__module_target_scalar_common_14[4]), Var_87, ((MR_Box) (STATE_VARIABLE_Info_81_81)), &conv15_STATE_VARIABLE_Info_44);
                    STATE_VARIABLE_Info_44 = ((MR_Word) (conv15_STATE_VARIABLE_Info_44));
                  }
                  break;
              }
              break;
          }
        }
      }
      tscc_output_1_Succeeded_12 = Succeeded_14;
      tscc_output_2_STATE_VARIABLE_Info_19 = STATE_VARIABLE_Info_44;
      goto tscc_end;
    }
  tscc_end:;
    *tscc_output_ptr_1_Succeeded_12 = tscc_output_1_Succeeded_12;
    *tscc_output_ptr_2_STATE_VARIABLE_Info_19 = tscc_output_2_STATE_VARIABLE_Info_19;
    return;
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
  {
    MR_bool succeeded;

    switch (MR_tag((MR_Word) Task_12)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word ModuleTask_17 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Task_12, (MR_Integer) 0))) & (MR_Integer) 7);

          make__module_target__find_files_maybe_touched_by_process_module_9_p_0(Globals_10, TargetFile_11, ModuleTask_17, TouchedTargetFiles_13, TouchedFileNames_14, STATE_VARIABLE_Info_0_28, STATE_VARIABLE_Info_29);
        }
        break;
      case (MR_Integer) 1:
        {
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *TouchedTargetFiles_13 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (TargetFile_11));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          *TouchedFileNames_14 = (MR_Word) ((MR_Unsigned) 0U);
          *STATE_VARIABLE_Info_29 = STATE_VARIABLE_Info_0_28;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word PIC_19 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(2), Task_12, (MR_Integer) 0))) >> 2)) & (MR_Integer) 1);
          MR_Word Lang_20 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), Task_12, (MR_Integer) 0))) & (MR_Integer) 3);
          MR_Word ModuleName_21;
          MR_String ForeignObjectFile_24;
          MR_Word ForeignModName_64;
          MR_Word SrcExt_65;
          MR_Word ObjOtherExt_66;
          MR_Word Var_73;
          MR_Word Var_77;
          MR_Word CompilationTarget_82;
          MR_Word ForeignModName0_62;
          MR_Word SrcExt0_63;
          MR_String SrcFileName_67;

          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *TouchedTargetFiles_13 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (TargetFile_11));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          ModuleName_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TargetFile_11, (MR_Integer) 0))));
          succeeded = parse_tree__prog_foreign__foreign_language_module_name_2_f_1(ModuleName_21, Lang_20, &ForeignModName0_62);
          if (succeeded)
            succeeded = parse_tree__prog_foreign__foreign_language_file_extension_1_f_0(Lang_20, &SrcExt0_63);
          if (succeeded)
          {
            ForeignModName_64 = ForeignModName0_62;
            SrcExt_65 = SrcExt0_63;
          }
          else
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140make.module_target.get_foreign_code_file\'/7", (MR_String) "unsupported foreign language");
              return;
            }
          libs__globals__get_target_2_p_0(Globals_10, &CompilationTarget_82);
          switch (CompilationTarget_82) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              backend_libs__compile_target_code__pic_object_file_extension_3_p_0(Globals_10, PIC_19, &ObjOtherExt_66);
              break;
            case (MR_Integer) 1:
              {
                mercury__require__sorry_2_p_0((MR_String) "function \140make.module_target.get_object_extension\'/2", (MR_String) "object extension for csharp");
                return;
              }
              break;
            case (MR_Integer) 2:
              {
                mercury__require__sorry_2_p_0((MR_String) "function \140make.module_target.get_object_extension\'/2", (MR_String) "object extension for java");
                return;
              }
              break;
          }
          {
            Var_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_73, 0) = ((MR_Box) (SrcExt_65));
          }
          parse_tree__file_names__module_name_to_file_name_8_p_0(Globals_10, (MR_String) "predicate \140make.module_target.get_foreign_code_file\'/7", (MR_Integer) 0, Var_73, ForeignModName_64, &SrcFileName_67);
          {
            Var_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_77, 0) = ((MR_Box) (ObjOtherExt_66));
          }
          parse_tree__file_names__module_name_to_file_name_8_p_0(Globals_10, (MR_String) "predicate \140make.module_target.get_foreign_code_file\'/7", (MR_Integer) 0, Var_77, ForeignModName_64, &ForeignObjectFile_24);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *TouchedFileNames_14 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ForeignObjectFile_24));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          *STATE_VARIABLE_Info_29 = STATE_VARIABLE_Info_0_28;
        }
        break;
      case (MR_Integer) 3:
        {
          MR_String FactTableName_25 = ((MR_String) ((MR_hl_field(MR_mktag(3), Task_12, (MR_Integer) 1))));
          MR_Word ObjOtherExt_26;
          MR_String FactTableObjectFile_27;
          MR_Word PIC_43 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Task_12, (MR_Integer) 0))) & (MR_Integer) 1);
          MR_Word CompilationTarget_49;

          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *TouchedTargetFiles_13 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (TargetFile_11));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          libs__globals__get_target_2_p_0(Globals_10, &CompilationTarget_49);
          switch (CompilationTarget_49) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              backend_libs__compile_target_code__pic_object_file_extension_3_p_0(Globals_10, PIC_43, &ObjOtherExt_26);
              break;
            case (MR_Integer) 1:
              {
                mercury__require__sorry_2_p_0((MR_String) "function \140make.module_target.get_object_extension\'/2", (MR_String) "object extension for csharp");
                return;
              }
              break;
            case (MR_Integer) 2:
              {
                mercury__require__sorry_2_p_0((MR_String) "function \140make.module_target.get_object_extension\'/2", (MR_String) "object extension for java");
                return;
              }
              break;
          }
          parse_tree__file_names__fact_table_file_name_8_p_0(Globals_10, (MR_String) "predicate \140make.module_target.find_files_maybe_touched_by_task\'/9", (MR_Integer) 0, ObjOtherExt_26, FactTableName_25, &FactTableObjectFile_27);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *TouchedFileNames_14 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (FactTableObjectFile_27));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          *STATE_VARIABLE_Info_29 = STATE_VARIABLE_Info_0_28;
        }
        break;
    }
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
  {
    MR_Box closure = closure_arg;
    MR_Word conv8_STATE_VARIABLE_TimestampFileNames_16;

    make__module_target__gather_target_file_timestamp_file_names_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv8_STATE_VARIABLE_TimestampFileNames_16);
    *wrapper_arg_3 = ((MR_Box) (conv8_STATE_VARIABLE_TimestampFileNames_16));
  }
}

static MR_Box MR_CALL 
make__module_target__find_files_maybe_touched_by_process_module_9_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_String conv7_LambdaHeadVar__2_65;

    conv7_LambdaHeadVar__2_65 = make__module_target__IntroducedFrom__func__find_files_maybe_touched_by_process_module__1018__1_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv7_LambdaHeadVar__2_65));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
make__module_target__find_files_maybe_touched_by_process_module_9_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv5_ForeignFiles_10;

    make__module_target__external_foreign_code_files_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv5_ForeignFiles_10);
    *wrapper_arg_2 = ((MR_Box) (conv5_ForeignFiles_10));
  }
}

static MR_bool MR_CALL 
make__module_target__find_files_maybe_touched_by_process_module_9_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;
    MR_Word conv4_LambdaHeadVar__2_54;

    succeeded = make__module_target__IntroducedFrom__pred__find_files_maybe_touched_by_process_module__997__1_2_p_0(((MR_Word) (wrapper_arg_1)), &conv4_LambdaHeadVar__2_54);
    if (succeeded)
    {
      *wrapper_arg_2 = ((MR_Box) (conv4_LambdaHeadVar__2_54));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
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
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_HeadVar__3_3;
    MR_Word conv0_HeadVar__5_5;

    make__module_dep_file__get_module_dependencies_7_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv1_HeadVar__3_3, ((MR_Word) (wrapper_arg_3)), &conv0_HeadVar__5_5);
    *wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__3_3));
    *wrapper_arg_4 = ((MR_Box) (conv0_HeadVar__5_5));
  }
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
  {
    MR_bool succeeded;
    MR_Word ModuleName_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TargetFile_11, (MR_Integer) 0))));
    MR_Word TargetType_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TargetFile_11, (MR_Integer) 1))));
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
      ModuleDepInfo_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeModuleDepInfo_19, (MR_Integer) 0))));
    parse_tree__module_imports__module_dep_info_get_maybe_top_module_2_p_0(ModuleDepInfo_20, &MaybeTopModule_21);
    NestedSubModules_22 = parse_tree__module_imports__get_nested_children_list_of_top_module_1_f_0(MaybeTopModule_21);
    {
      TargetModuleNames_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), TargetModuleNames_29, 0) = ((MR_Box) (ModuleName_17));
      MR_hl_field(MR_mktag(1), TargetModuleNames_29, 1) = ((MR_Box) (NestedSubModules_22));
    }
    {
      Var_49 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_49, 0) = ((MR_Box) (&make__module_target_scalar_common_4[3]));
      MR_hl_field(MR_mktag(0), Var_49, 1) = ((MR_Box) (make__module_target__find_files_maybe_touched_by_process_module_9_p_0_1));
      MR_hl_field(MR_mktag(0), Var_49, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_49, 3) = ((MR_Box) (Globals_10));
    }
    mercury__list__map_foldl2_7_p_2((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_maybe_module_dep_info_0), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_49, NestedSubModules_22, &MaybeNestedModuleDepInfos_24, ((MR_Box) (STATE_VARIABLE_Info_45_45)), &conv3_STATE_VARIABLE_Info_42, ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_51_51);
    *STATE_VARIABLE_Info_42 = ((MR_Word) (conv3_STATE_VARIABLE_Info_42));
    succeeded = mercury__list__map_3_p_2((MR_Word) (&make__make_info__make__make_info__type_ctor_info_maybe_module_dep_info_0), (MR_Word) (&parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_module_dep_info_0), (MR_Word) (&make__module_target_scalar_common_2[5]), MaybeNestedModuleDepInfos_24, &NestedModuleDepInfos_26);
    if (succeeded)
      {
        ModuleDepInfos_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), ModuleDepInfos_27, 0) = ((MR_Box) (ModuleDepInfo_20));
        MR_hl_field(MR_mktag(1), ModuleDepInfos_27, 1) = ((MR_Box) (NestedModuleDepInfos_26));
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
          MR_Word Var_61;
          MR_Word Var_66;
          MR_Box conv6_STATE_VARIABLE_IO_62_62;

          TargetPIC_30 = make__module_target__target_type_to_pic_1_f_0(TargetType_18);
          {
            Var_61 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_61, 0) = ((MR_Box) (&make__module_target_scalar_common_12[0]));
            MR_hl_field(MR_mktag(0), Var_61, 1) = ((MR_Box) (make__module_target__find_files_maybe_touched_by_process_module_9_p_0_3));
            MR_hl_field(MR_mktag(0), Var_61, 2) = ((MR_Box) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), Var_61, 3) = ((MR_Box) (Globals_10));
            MR_hl_field(MR_mktag(0), Var_61, 4) = ((MR_Box) (TargetPIC_30));
          }
          mercury__list__map_foldl_5_p_2((MR_Word) (&parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_module_dep_info_0), (MR_Word) (&make__module_target_scalar_common_1[3]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_61, ModuleDepInfos_27, &ForeignCodeFileList_31, ((MR_Box) ((MR_Integer) 0)), &conv6_STATE_VARIABLE_IO_62_62);
          Var_66 = mercury__list__condense_1_f_0((MR_Word) (&make__module_target__make__module_target__type_ctor_info_foreign_code_file_0), ForeignCodeFileList_31);
          ForeignCodeFiles_32 = mercury__list__map_2_f_0((MR_Word) (&make__module_target__make__module_target__type_ctor_info_foreign_code_file_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__module_target_scalar_common_2[6]), Var_66);
          switch (CompilationTarget_28) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word HighLevelCode_34;

                libs__globals__lookup_bool_option_3_p_0(Globals_10, (MR_Integer) 302, &HighLevelCode_34);
                switch (HighLevelCode_34) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    HeaderTargets0_36 = (MR_Word) ((MR_Unsigned) 0U);
                    break;
                  case (MR_Integer) 1:
                    HeaderTargets0_36 = make__util__make_target_file_list_2_f_0(TargetModuleNames_29, (MR_Word) (MR_mkword(MR_mktag(1), &make__module_target_scalar_common_3[6])));
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
                MR_Word Var_70;

                Var_70 = make__util__make_target_file_list_2_f_0(TargetModuleNames_29, (MR_Word) (MR_mkword(MR_mktag(1), &make__module_target_scalar_common_3[5])));
                HeaderTargets_38 = mercury__list__f_43_43_2_f_0((MR_Word) (&make__make_info__make__make_info__type_ctor_info_target_file_0), Var_70, HeaderTargets0_36);
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
          MR_Word Var_57;
          MR_Word Var_59;

          ForeignCodeFiles_32 = (MR_Word) ((MR_Unsigned) 0U);
          Var_57 = make__util__make_target_file_list_2_f_0(TargetModuleNames_29, (MR_Word) ((MR_Unsigned) 12U));
          Var_59 = make__util__make_target_file_list_2_f_0(TargetModuleNames_29, (MR_Word) ((MR_Unsigned) 16U));
          *TouchedTargetFiles_13 = mercury__list__f_43_43_2_f_0((MR_Word) (&make__make_info__make__make_info__type_ctor_info_target_file_0), Var_57, Var_59);
        }
        break;
    }
    {
      Var_73 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_73, 0) = ((MR_Box) (&make__module_target_scalar_common_12[1]));
      MR_hl_field(MR_mktag(0), Var_73, 1) = ((MR_Box) (make__module_target__find_files_maybe_touched_by_process_module_9_p_0_5));
      MR_hl_field(MR_mktag(0), Var_73, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_73, 3) = ((MR_Box) (Globals_10));
    }
    mercury__list__foldl2_6_p_2((MR_Word) (&make__make_info__make__make_info__type_ctor_info_target_file_0), (MR_Word) (&make__module_target_scalar_common_1[4]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_73, *TouchedTargetFiles_13, ((MR_Box) ((MR_Unsigned) 0U)), &conv10_TimestampFileNames_40, ((MR_Box) ((MR_Integer) 0)), &conv9_STATE_VARIABLE_IO_44);
    TimestampFileNames_40 = ((MR_Word) (conv10_TimestampFileNames_40));
    *TouchedFileNames_14 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ForeignCodeFiles_32, TimestampFileNames_40);
  }
}

static MR_Word MR_CALL 
make__module_target__target_type_to_pic_1_f_0(
  MR_Word TargetType_3)
{
  {
    MR_Word Result_4;

    switch (MR_tag((MR_Word) TargetType_3)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        Result_4 = (MR_Integer) 1;
        break;
      case (MR_Integer) 1:
        Result_4 = (MR_Integer) 1;
        break;
      case (MR_Integer) 2:
        Result_4 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), TargetType_3, (MR_Integer) 0))) & (MR_Integer) 1);
        break;
      case (MR_Integer) 3:
        Result_4 = (MR_Integer) 1;
        break;
    }
    return Result_4;
  }
}

static MR_Word MR_CALL 
make__module_target__compilation_task_1_f_0(
  MR_Word Target_3)
{
  {
    MR_Word Result_4;

    switch (MR_tag((MR_Word) Target_3)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(Target_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 8:
            mercury__require__unexpected_2_p_0((MR_String) "function \140make.module_target.compilation_task\'/1", (MR_String) "compilation_task");
            break;
          case (MR_Integer) 1:
            Result_4 = (MR_Word) (&make__module_target_scalar_common_1[12]);
            break;
          case (MR_Integer) 2:
            Result_4 = (MR_Word) (&make__module_target_scalar_common_1[14]);
            break;
          case (MR_Integer) 3:
          case (MR_Integer) 4:
            Result_4 = (MR_Word) (&make__module_target_scalar_common_1[16]);
            break;
          case (MR_Integer) 5:
            Result_4 = (MR_Word) (&make__module_target_scalar_common_1[18]);
            break;
          case (MR_Integer) 6:
            Result_4 = (MR_Word) (&make__module_target_scalar_common_1[23]);
            break;
          case (MR_Integer) 7:
            Result_4 = (MR_Word) (&make__module_target_scalar_common_1[6]);
            break;
          case (MR_Integer) 9:
            Result_4 = (MR_Word) (&make__module_target_scalar_common_1[8]);
            break;
          case (MR_Integer) 10:
            Result_4 = (MR_Word) (&make__module_target_scalar_common_1[10]);
            break;
          case (MR_Integer) 11:
            Result_4 = (MR_Word) (&make__module_target_scalar_common_1[21]);
            break;
          case (MR_Integer) 12:
            Result_4 = (MR_Word) (&make__module_target_scalar_common_1[19]);
            break;
          case (MR_Integer) 13:
            Result_4 = (MR_Word) (&make__module_target_scalar_common_1[25]);
            break;
        }
        break;
      case (MR_Integer) 1:
        Result_4 = (MR_Word) (&make__module_target_scalar_common_1[8]);
        break;
      case (MR_Integer) 2:
        {
          MR_Word PIC_6 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), Target_3, (MR_Integer) 0))) & (MR_Integer) 1);
          MR_Word Var_18;

          {
            Var_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_18, 0) = (MR_Box) ((MR_Unsigned) (PIC_6));
          }
          {
            Result_4 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Result_4, 0) = ((MR_Box) (Var_18));
            MR_hl_field(MR_mktag(0), Result_4, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Target_3, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Var_16;
              MR_Unsigned packed_word_1 = (MR_Unsigned) ((MR_hl_field(MR_mktag(3), Target_3, (MR_Integer) 1)));

              {
                Var_16 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), Var_16, 0) = (MR_Box) (packed_word_1);
              }
              {
                Result_4 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Result_4, 0) = ((MR_Box) (Var_16));
                MR_hl_field(MR_mktag(0), Result_4, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_String FactTable_8 = ((MR_String) ((MR_hl_field(MR_mktag(3), Target_3, (MR_Integer) 2))));
              MR_Word Var_14;
              MR_Word PIC_71 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Target_3, (MR_Integer) 1))) & (MR_Integer) 1);

              {
                Var_14 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_14, 0) = (MR_Box) ((MR_Unsigned) (PIC_71));
                MR_hl_field(MR_mktag(3), Var_14, 1) = ((MR_Box) (FactTable_8));
              }
              {
                Result_4 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Result_4, 0) = ((MR_Box) (Var_14));
                MR_hl_field(MR_mktag(0), Result_4, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
            }
            break;
        }
        break;
    }
    return Result_4;
  }
}

static void MR_CALL 
make__module_target__build_target_12_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_MakeInfo_18;

    make__module_target__cleanup_files_8_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) (wrapper_arg_1)), &conv0_STATE_VARIABLE_MakeInfo_18);
    *wrapper_arg_2 = ((MR_Box) (conv0_STATE_VARIABLE_MakeInfo_18));
  }
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
  MR_Word STATE_VARIABLE_Info_0_52,
  MR_Word * STATE_VARIABLE_Info_53)
{
  {
    MR_bool succeeded;
    MR_Word ModuleName_23;
    MR_Word Task_25;
    MR_Word TaskOptions_26;
    MR_Word ExtraAndTaskOptions_27;
    MR_Word MaybeArgFileName_31;
    MR_Word ArgFileNameRes_32;
    MR_Word ModuleTask_28;
    MR_Word Var_57;

    make__util__maybe_make_target_message_4_p_0(Globals_13, TargetFile_15);
    ModuleName_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TargetFile_15, (MR_Integer) 0))));
    Task_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CompilationTask_14, (MR_Integer) 0))));
    TaskOptions_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CompilationTask_14, (MR_Integer) 1))));
    ExtraAndTaskOptions_27 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ExtraOptions_19, TaskOptions_26);
    succeeded = ((MR_tag((MR_Word) Task_25)) == (MR_Integer) 0);
    if (succeeded)
    {
      ModuleTask_28 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Task_25, (MR_Integer) 0))) & (MR_Integer) 7);
      Var_57 = make__module_target__forkable_module_compilation_task_type_1_f_0(ModuleTask_28);
      succeeded = (Var_57 == (MR_Integer) 1);
      if (succeeded)
      {
        succeeded = libs__process_util__can_fork_0_p_0();
        succeeded = !(succeeded);
      }
    }
    if (succeeded)
    {
      MR_Word ArgFileNameResult_29;

      mercury__io__make_temp_file_3_p_0(&ArgFileNameResult_29);
      if (((MR_tag((MR_Word) ArgFileNameResult_29)) == (MR_Integer) 1))
      {
        MR_Word Error_33 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgFileNameResult_29, (MR_Integer) 0))));

        MaybeArgFileName_31 = (MR_Word) ((MR_Unsigned) 0U);
        {
          ArgFileNameRes_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ArgFileNameRes_32, 0) = ((MR_Box) (Error_33));
        }
      }
      else
      {
        MR_String ArgFileName_30 = ((MR_String) ((MR_hl_field(MR_mktag(0), ArgFileNameResult_29, (MR_Integer) 0))));

        {
          MaybeArgFileName_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), MaybeArgFileName_31, 0) = ((MR_Box) (ArgFileName_30));
        }
        ArgFileNameRes_32 = (MR_Word) ((MR_Unsigned) 0U);
      }
    }
    else
    {
      MaybeArgFileName_31 = (MR_Word) ((MR_Unsigned) 0U);
      ArgFileNameRes_32 = (MR_Word) ((MR_Unsigned) 0U);
    }
    if ((ArgFileNameRes_32 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Integer Time0_34;
      MR_Word VeryVerbose_35;
      MR_Word Cleanup_36;
      MR_Box Cookie_37;
      MR_Word DetectedGradeFlags_38;
      MR_Word OptionVariables_39;
      MR_Word OptionArgs_40;
      MR_Word MayBuild_41;
      MR_Word Succeeded0_45;
      MR_Integer Time_48;
      MR_Word ShowMakeTimes_49;
      MR_Word STATE_VARIABLE_Info_77_77;
      MR_Word STATE_VARIABLE_Info_79_79;
      MR_Box conv1_STATE_VARIABLE_Info_79_79;

      make__util__get_real_milliseconds_3_p_0(&Time0_34);
      libs__globals__lookup_bool_option_3_p_0(Globals_13, (MR_Integer) 71, &VeryVerbose_35);
      {
        Cleanup_36 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Cleanup_36, 0) = ((MR_Box) (&make__module_target_scalar_common_5[3]));
        MR_hl_field(MR_mktag(0), Cleanup_36, 1) = ((MR_Box) (make__module_target__build_target_12_p_0_1));
        MR_hl_field(MR_mktag(0), Cleanup_36, 2) = ((MR_Box) ((MR_Integer) 4));
        MR_hl_field(MR_mktag(0), Cleanup_36, 3) = ((MR_Box) (Globals_13));
        MR_hl_field(MR_mktag(0), Cleanup_36, 4) = ((MR_Box) (MaybeArgFileName_31));
        MR_hl_field(MR_mktag(0), Cleanup_36, 5) = ((MR_Box) (TouchedTargetFiles_17));
        MR_hl_field(MR_mktag(0), Cleanup_36, 6) = ((MR_Box) (TouchedFiles_18));
      }
      libs__process_util__setup_checking_for_interrupt_3_p_0(&Cookie_37);
      DetectedGradeFlags_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_52, (MR_Integer) 3))));
      OptionArgs_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_52, (MR_Integer) 4))));
      OptionVariables_39 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_52, (MR_Integer) 5))));
      make__build__setup_for_build_with_module_options_9_p_0((MR_Integer) 1, ModuleName_23, DetectedGradeFlags_38, OptionVariables_39, OptionArgs_40, ExtraAndTaskOptions_27, &MayBuild_41);
      if (((MR_tag((MR_Word) MayBuild_41)) == (MR_Integer) 1))
      {
        MR_Word AllOptionArgs_42 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MayBuild_41, (MR_Integer) 0))));
        MR_Word BuildGlobals_43 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MayBuild_41, (MR_Integer) 1))));
        MR_Word RedirectResult_44;
        MR_Word STATE_VARIABLE_Info_73_73;

        make__build__prepare_to_redirect_output_6_p_0(ModuleName_23, &RedirectResult_44, STATE_VARIABLE_Info_0_52, &STATE_VARIABLE_Info_73_73);
        if ((RedirectResult_44 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          Succeeded0_45 = (MR_Integer) 0;
          STATE_VARIABLE_Info_77_77 = STATE_VARIABLE_Info_73_73;
        }
        else
        {
          MR_Word ErrorStream_46 = ((MR_Word) ((MR_hl_field(MR_mktag(1), RedirectResult_44, (MR_Integer) 0))));
          MR_Word STATE_VARIABLE_Info_75_75;

          make__module_target__build_target_2_12_p_0(ModuleName_23, Task_25, MaybeArgFileName_31, ModuleDepInfo_16, BuildGlobals_43, AllOptionArgs_42, ErrorStream_46, &Succeeded0_45, STATE_VARIABLE_Info_73_73, &STATE_VARIABLE_Info_75_75);
          make__build__unredirect_output_7_p_0(Globals_13, ModuleName_23, ErrorStream_46, STATE_VARIABLE_Info_75_75, &STATE_VARIABLE_Info_77_77);
        }
      }
      else
      {
        MR_Word Specs_47 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MayBuild_41, (MR_Integer) 0))));
        MR_Word ErrorStream_97;

        libs__globals__get_error_output_stream_5_p_0(Globals_13, ModuleName_23, &ErrorStream_97);
        parse_tree__error_util__write_error_specs_5_p_0(ErrorStream_97, Globals_13, Specs_47);
        Succeeded0_45 = (MR_Integer) 0;
        STATE_VARIABLE_Info_77_77 = STATE_VARIABLE_Info_0_52;
      }
      libs__process_util__teardown_checking_for_interrupt_9_p_0((MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), VeryVerbose_35, Cookie_37, Cleanup_36, Succeeded0_45, Succeeded_20, ((MR_Box) (STATE_VARIABLE_Info_77_77)), &conv1_STATE_VARIABLE_Info_79_79);
      STATE_VARIABLE_Info_79_79 = ((MR_Word) (conv1_STATE_VARIABLE_Info_79_79));
      make__module_target__record_made_target_given_maybe_touched_files_9_p_0(Globals_13, *Succeeded_20, TargetFile_15, TouchedTargetFiles_17, TouchedFiles_18, STATE_VARIABLE_Info_79_79, STATE_VARIABLE_Info_53);
      make__util__get_real_milliseconds_3_p_0(&Time_48);
      libs__globals__lookup_bool_option_3_p_0(Globals_13, (MR_Integer) 683, &ShowMakeTimes_49);
      switch (ShowMakeTimes_49) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Float DiffSecs_50;
            MR_Float Var_85;
            MR_Integer Var_86 = (MR_Integer) ((MR_Unsigned) Time_48 - (MR_Unsigned) Time0_34);

            Var_85 = mercury__float__float_1_f_0(Var_86);
            DiffSecs_50 = mercury__float__f_slash_2_f_0(Var_85, (MR_Float) 1000.0000000000000);
            succeeded = (DiffSecs_50 >= ((MR_Float) 0.50000000000000000));
            if (succeeded)
            {
              MR_String Var_167;

              mercury__io__write_string_3_p_0((MR_String) "Making ");
              make__util__make_write_target_file_4_p_0(Globals_13, TargetFile_15);
              mercury__io__write_string_3_p_0((MR_String) " took ");
              mercury__string__format__format_float_component_nowidth_prec_5_p_0((MR_Word) (&make__module_target_scalar_common_3[0]), (MR_Integer) 2, (MR_Integer) 2, DiffSecs_50, &Var_167);
              mercury__io__write_string_3_p_0(Var_167);
              mercury__io__write_string_3_p_0((MR_String) "s\n");
            }
          }
          break;
      }
    }
    else
    {
      MR_Word ArgFileError_51 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgFileNameRes_32, (MR_Integer) 0))));
      MR_Word Var_59;
      MR_String Var_64;

      Var_59 = mercury__io__stderr_stream_0_f_0();
      Var_64 = mercury__io__error_message_1_f_0(ArgFileError_51);
      mercury__io__write_string_4_p_0(Var_59, (MR_String) "Could not create temporary file: ");
      mercury__io__write_string_4_p_0(Var_59, Var_64);
      mercury__io__write_string_4_p_0(Var_59, (MR_String) "\n");
      *Succeeded_20 = (MR_Integer) 0;
      *STATE_VARIABLE_Info_53 = STATE_VARIABLE_Info_0_52;
    }
  }
}

static void MR_CALL 
make__module_target__record_made_target_given_maybe_touched_files_9_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv9_STATE_VARIABLE_Timestamps_11;

    make__module_target__delete_analysis_registry_timestamps_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv9_STATE_VARIABLE_Timestamps_11);
    *wrapper_arg_4 = ((MR_Box) (conv9_STATE_VARIABLE_Timestamps_11));
  }
}

static void MR_CALL 
make__module_target__record_made_target_given_maybe_touched_files_9_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv6_STATE_VARIABLE_Timestamps_10;

    make__module_target__delete_timestamp_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv6_STATE_VARIABLE_Timestamps_10);
    *wrapper_arg_3 = ((MR_Box) (conv6_STATE_VARIABLE_Timestamps_10));
  }
}

static void MR_CALL 
make__module_target__record_made_target_given_maybe_touched_files_9_p_0_2(
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
    MR_String conv3_HeadVar__4_4;
    MR_Word conv2_HeadVar__6_6;

    make__util__get_file_name_8_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv3_HeadVar__4_4, ((MR_Word) (wrapper_arg_3)), &conv2_HeadVar__6_6);
    *wrapper_arg_2 = ((MR_Box) (conv3_HeadVar__4_4));
    *wrapper_arg_4 = ((MR_Box) (conv2_HeadVar__6_6));
  }
}

static void MR_CALL 
make__module_target__record_made_target_given_maybe_touched_files_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_Info_12;

    make__module_target__update_target_status_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_Info_12);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Info_12));
  }
}

static void MR_CALL 
make__module_target__record_made_target_given_maybe_touched_files_9_p_0(
  MR_Word Globals_10,
  MR_Word Succeeded_11,
  MR_Word TargetFile_12,
  MR_Word TouchedTargetFiles_13,
  MR_Word OtherTouchedFiles_14,
  MR_Word STATE_VARIABLE_Info_0_21,
  MR_Word * STATE_VARIABLE_Info_22)
{
  {
    MR_bool succeeded;
    MR_Word TargetStatus_17;
    MR_Word TouchedTargetFileNames_18;
    MR_Word Var_26;
    MR_Word STATE_VARIABLE_Info_27_27;
    MR_Word Var_28;
    MR_Word STATE_VARIABLE_Info_29_29;
    MR_Word STATE_VARIABLE_Timestamps_32_32;
    MR_Word Var_33;
    MR_Word STATE_VARIABLE_Timestamps_34_34;
    MR_Word STATE_VARIABLE_Timestamps_36_36;
    MR_Word STATE_VARIABLE_Timestamps_40_40;
    MR_Box conv1_STATE_VARIABLE_Info_27_27;
    MR_Box conv5_STATE_VARIABLE_Info_29_29;
    MR_Box conv4_STATE_VARIABLE_IO_24;
    MR_Box conv7_STATE_VARIABLE_Timestamps_34_34;
    MR_Box conv8_STATE_VARIABLE_Timestamps_36_36;
    MR_Word Var_37;
    MR_Word Var_62;
    MR_Word Var_64;
    MR_Word Var_65;
    MR_Word Var_66;
    MR_Word Var_67;
    MR_Word Var_68;
    MR_Word Var_69;
    MR_Word Var_70;
    MR_Word Var_71;
    MR_Word Var_72;
    MR_Word Var_73;
    MR_Word Var_74;
    MR_Word Var_77;
    MR_Word Var_78;
    MR_Word Var_79;
    MR_Integer Var_80;
    MR_Word Var_81;
    MR_Word Var_82;
    MR_Unsigned packed_word_1;

    switch (Succeeded_11) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          TargetStatus_17 = (MR_Integer) 3;
          make__util__target_file_error_5_p_0(STATE_VARIABLE_Info_0_21, Globals_10, TargetFile_12);
        }
        break;
      case (MR_Integer) 1:
        TargetStatus_17 = (MR_Integer) 2;
        break;
    }
    {
      Var_26 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_26, 0) = ((MR_Box) (&make__module_target_scalar_common_11[0]));
      MR_hl_field(MR_mktag(0), Var_26, 1) = ((MR_Box) (make__module_target__record_made_target_given_maybe_touched_files_9_p_0_1));
      MR_hl_field(MR_mktag(0), Var_26, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_26, 3) = ((MR_Box) (TargetStatus_17));
    }
    mercury__list__foldl_4_p_0((MR_Word) (&make__make_info__make__make_info__type_ctor_info_target_file_0), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), Var_26, TouchedTargetFiles_13, ((MR_Box) (STATE_VARIABLE_Info_0_21)), &conv1_STATE_VARIABLE_Info_27_27);
    STATE_VARIABLE_Info_27_27 = ((MR_Word) (conv1_STATE_VARIABLE_Info_27_27));
    {
      Var_28 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_28, 0) = ((MR_Box) (&make__module_target_scalar_common_5[2]));
      MR_hl_field(MR_mktag(0), Var_28, 1) = ((MR_Box) (make__module_target__record_made_target_given_maybe_touched_files_9_p_0_2));
      MR_hl_field(MR_mktag(0), Var_28, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_28, 3) = ((MR_Box) (Globals_10));
      MR_hl_field(MR_mktag(0), Var_28, 4) = ((MR_Box) ((MR_Integer) 1));
    }
    mercury__list__map_foldl2_7_p_2((MR_Word) (&make__make_info__make__make_info__type_ctor_info_target_file_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_28, TouchedTargetFiles_13, &TouchedTargetFileNames_18, ((MR_Box) (STATE_VARIABLE_Info_27_27)), &conv5_STATE_VARIABLE_Info_29_29, ((MR_Box) ((MR_Integer) 0)), &conv4_STATE_VARIABLE_IO_24);
    STATE_VARIABLE_Info_29_29 = ((MR_Word) (conv5_STATE_VARIABLE_Info_29_29));
    STATE_VARIABLE_Timestamps_32_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_29_29, (MR_Integer) 1))));
    {
      Var_33 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_33, 0) = ((MR_Box) (&make__module_target_scalar_common_11[1]));
      MR_hl_field(MR_mktag(0), Var_33, 1) = ((MR_Box) (make__module_target__record_made_target_given_maybe_touched_files_9_p_0_3));
      MR_hl_field(MR_mktag(0), Var_33, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_33, 3) = ((MR_Box) (Globals_10));
    }
    mercury__list__foldl_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__module_target_scalar_common_2[2]), Var_33, TouchedTargetFileNames_18, ((MR_Box) (STATE_VARIABLE_Timestamps_32_32)), &conv7_STATE_VARIABLE_Timestamps_34_34);
    STATE_VARIABLE_Timestamps_34_34 = ((MR_Word) (conv7_STATE_VARIABLE_Timestamps_34_34));
    mercury__list__foldl_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__module_target_scalar_common_2[2]), Var_33, OtherTouchedFiles_14, ((MR_Box) (STATE_VARIABLE_Timestamps_34_34)), &conv8_STATE_VARIABLE_Timestamps_36_36);
    STATE_VARIABLE_Timestamps_36_36 = ((MR_Word) (conv8_STATE_VARIABLE_Timestamps_36_36));
    Var_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TargetFile_12, (MR_Integer) 1))));
    succeeded = (Var_37 == (MR_Word) ((MR_Unsigned) 28U));
    if (succeeded)
    {
      MR_Word Var_38;
      MR_Box conv10_STATE_VARIABLE_Timestamps_40_40;

      {
        Var_38 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_38, 0) = ((MR_Box) (&make__module_target_scalar_common_9[1]));
        MR_hl_field(MR_mktag(0), Var_38, 1) = ((MR_Box) (make__module_target__record_made_target_given_maybe_touched_files_9_p_0_4));
        MR_hl_field(MR_mktag(0), Var_38, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_38, 3) = ((MR_Box) (Globals_10));
      }
      mercury__map__foldl_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__module_target_scalar_common_2[1]), (MR_Word) (&make__module_target_scalar_common_2[2]), Var_38, STATE_VARIABLE_Timestamps_36_36, ((MR_Box) (STATE_VARIABLE_Timestamps_36_36)), &conv10_STATE_VARIABLE_Timestamps_40_40);
      STATE_VARIABLE_Timestamps_40_40 = ((MR_Word) (conv10_STATE_VARIABLE_Timestamps_40_40));
    }
    else
      STATE_VARIABLE_Timestamps_40_40 = STATE_VARIABLE_Timestamps_36_36;
    Var_62 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_29_29, (MR_Integer) 0))));
    Var_64 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_29_29, (MR_Integer) 2))));
    Var_65 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_29_29, (MR_Integer) 3))));
    Var_66 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_29_29, (MR_Integer) 4))));
    Var_67 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_29_29, (MR_Integer) 5))));
    Var_68 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_29_29, (MR_Integer) 6))));
    Var_69 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_29_29, (MR_Integer) 7))));
    Var_70 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_29_29, (MR_Integer) 8))));
    Var_71 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_29_29, (MR_Integer) 9))));
    Var_72 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_29_29, (MR_Integer) 10))));
    Var_73 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_29_29, (MR_Integer) 11))));
    Var_74 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_29_29, (MR_Integer) 12))));
    packed_word_1 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_29_29, (MR_Integer) 13)));
    Var_77 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_29_29, (MR_Integer) 14))));
    Var_78 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_29_29, (MR_Integer) 15))));
    Var_79 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_29_29, (MR_Integer) 16))));
    Var_80 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_29_29, (MR_Integer) 17))));
    Var_81 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_29_29, (MR_Integer) 18))));
    Var_82 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_29_29, (MR_Integer) 19))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (20 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Info_22 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_62));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (STATE_VARIABLE_Timestamps_40_40));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_64));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_65));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_66));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_67));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_68));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_69));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_70));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_71));
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (Var_72));
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (Var_73));
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (Var_74));
      MR_hl_field(MR_mktag(0), base, 13) = (MR_Box) (packed_word_1);
      MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (Var_77));
      MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (Var_78));
      MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (Var_79));
      MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (Var_80));
      MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (Var_81));
      MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (Var_82));
    }
  }
}

static void MR_CALL 
make__module_target__build_target_2_12_p_0_6(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv5_Succeeded_18;

    make__module_target__build_object_code_10_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 7)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 8)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 9)))), &conv5_Succeeded_18);
    *wrapper_arg_1 = ((MR_Box) (conv5_Succeeded_18));
  }
}

static void MR_CALL 
make__module_target__build_target_2_12_p_0_5(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv4_Succeeded_14;

    make__module_target__invoke_mmc_8_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 7)))), &conv4_Succeeded_14);
    *wrapper_arg_1 = ((MR_Box) (conv4_Succeeded_14));
  }
}

static void MR_CALL 
make__module_target__build_target_2_12_p_0_4(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv3_Succeeded_8;

    make__module_target__call_mercury_compile_main_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), &conv3_Succeeded_8);
    *wrapper_arg_1 = ((MR_Box) (conv3_Succeeded_8));
  }
}

static MR_Box MR_CALL 
make__module_target__build_target_2_12_p_0_3(
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
make__module_target__build_target_2_12_p_0_2(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_Succeeded_16;

    make__module_target__compile_foreign_code_file_9_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 7)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 8)))), &conv1_Succeeded_16);
    *wrapper_arg_1 = ((MR_Box) (conv1_Succeeded_16));
  }
}

static void MR_CALL 
make__module_target__build_target_2_12_p_0_1(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_Succeeded_16;

    make__module_target__compile_foreign_code_file_9_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 7)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 8)))), &conv0_Succeeded_16);
    *wrapper_arg_1 = ((MR_Box) (conv0_Succeeded_16));
  }
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
  {
    MR_bool succeeded;
    MR_Word ProgressStream_23;

    mercury__io__output_stream_3_p_0(&ProgressStream_23);
    switch (MR_tag((MR_Word) Task_14)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word ModuleTask_24 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Task_14, (MR_Integer) 0))) & (MR_Integer) 7);
          MR_String ModuleArg_25;
          MR_Word Verbose_26;
          MR_Word OldOutputStream_30;
          MR_Word IsForkable_31;
          MR_Word CompileSucceeded_32;
          MR_Word Var_33;

          ModuleArg_25 = mdbcomp__sym_name__sym_name_to_string_1_f_0(ModuleName_13);
          libs__globals__lookup_bool_option_3_p_0(Globals_17, (MR_Integer) 76, &Verbose_26);
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
                MR_Word Var_57;

                {
                  Var_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_57, 0) = ((MR_Box) (ModuleArg_25));
                  MR_hl_field(MR_mktag(1), Var_57, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                AllArgs_27 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), AllOptionArgs_18, Var_57);
                AllArgStrs_28 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__module_target_scalar_common_2[4]), AllArgs_27);
                AllArgsStr_29 = mercury__string__join_list_2_f_0((MR_String) " ", AllArgStrs_28);
                mercury__io__write_string_3_p_0((MR_String) "Invoking self \140mmc ");
                mercury__io__write_string_3_p_0(AllArgsStr_29);
                mercury__io__write_string_3_p_0((MR_String) "\'\n");
              }
              break;
          }
          mercury__io__set_output_stream_4_p_0(ErrorStream_19, &OldOutputStream_30);
          IsForkable_31 = make__module_target__forkable_module_compilation_task_type_1_f_0(ModuleTask_24);
          switch (IsForkable_31) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word Var_67;

                {
                  Var_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_67, 0) = ((MR_Box) (ModuleArg_25));
                  MR_hl_field(MR_mktag(1), Var_67, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                make__module_target__call_mercury_compile_main_5_p_0(Globals_17, Var_67, &CompileSucceeded_32);
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word Var_70;
                MR_Word Var_71;
                MR_Word Var_73;
                MR_Word Var_75;

                {
                  Var_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_73, 0) = ((MR_Box) (ModuleArg_25));
                  MR_hl_field(MR_mktag(1), Var_73, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  Var_70 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_70, 0) = ((MR_Box) (&make__module_target_scalar_common_9[0]));
                  MR_hl_field(MR_mktag(0), Var_70, 1) = ((MR_Box) (make__module_target__build_target_2_12_p_0_4));
                  MR_hl_field(MR_mktag(0), Var_70, 2) = ((MR_Box) ((MR_Integer) 2));
                  MR_hl_field(MR_mktag(0), Var_70, 3) = ((MR_Box) (Globals_17));
                  MR_hl_field(MR_mktag(0), Var_70, 4) = ((MR_Box) (Var_73));
                }
                Var_75 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), AllOptionArgs_18, Var_73);
                {
                  Var_71 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_71, 0) = ((MR_Box) (&make__module_target_scalar_common_5[1]));
                  MR_hl_field(MR_mktag(0), Var_71, 1) = ((MR_Box) (make__module_target__build_target_2_12_p_0_5));
                  MR_hl_field(MR_mktag(0), Var_71, 2) = ((MR_Box) ((MR_Integer) 5));
                  MR_hl_field(MR_mktag(0), Var_71, 3) = ((MR_Box) (Globals_17));
                  MR_hl_field(MR_mktag(0), Var_71, 4) = ((MR_Box) (ProgressStream_23));
                  MR_hl_field(MR_mktag(0), Var_71, 5) = ((MR_Box) (ErrorStream_19));
                  MR_hl_field(MR_mktag(0), Var_71, 6) = ((MR_Box) (ArgFileName_15));
                  MR_hl_field(MR_mktag(0), Var_71, 7) = ((MR_Box) (Var_75));
                }
                libs__process_util__call_in_forked_process_with_backup_5_p_0(Var_70, Var_71, &CompileSucceeded_32);
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

            parse_tree__module_cmds__touch_interface_datestamp_8_p_0(Globals_17, ProgressStream_23, ErrorStream_19, ModuleName_13, (MR_Word) (((MR_Box) ((MR_String) ".err_date"))), &TouchSucceeded_34);
            *Succeeded_20 = libs__maybe_succeeded__and_2_f_0(CompileSucceeded_32, TouchSucceeded_34);
          }
          else
            *Succeeded_20 = CompileSucceeded_32;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word PIC_35 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), Task_14, (MR_Integer) 0))) & (MR_Integer) 1);
          MR_Word CompilationTarget_36;
          MR_Word Var_54;

          libs__globals__get_target_2_p_0(Globals_17, &CompilationTarget_36);
          {
            Var_54 = (MR_Word) MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_54, 0) = ((MR_Box) (&make__module_target_scalar_common_10[0]));
            MR_hl_field(MR_mktag(0), Var_54, 1) = ((MR_Box) (make__module_target__build_target_2_12_p_0_6));
            MR_hl_field(MR_mktag(0), Var_54, 2) = ((MR_Box) ((MR_Integer) 7));
            MR_hl_field(MR_mktag(0), Var_54, 3) = ((MR_Box) (Globals_17));
            MR_hl_field(MR_mktag(0), Var_54, 4) = ((MR_Box) (ModuleName_13));
            MR_hl_field(MR_mktag(0), Var_54, 5) = ((MR_Box) (CompilationTarget_36));
            MR_hl_field(MR_mktag(0), Var_54, 6) = ((MR_Box) (PIC_35));
            MR_hl_field(MR_mktag(0), Var_54, 7) = ((MR_Box) (ProgressStream_23));
            MR_hl_field(MR_mktag(0), Var_54, 8) = ((MR_Box) (ErrorStream_19));
            MR_hl_field(MR_mktag(0), Var_54, 9) = ((MR_Box) (ModuleDepInfo_16));
          }
          libs__process_util__call_in_forked_process_4_p_0(Var_54, Succeeded_20);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Lang_37 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), Task_14, (MR_Integer) 0))) & (MR_Integer) 3);
          MR_Word ForeignCodeFile_38;
          MR_Word Var_52;
          MR_Word PIC_82 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(2), Task_14, (MR_Integer) 0))) >> 2)) & (MR_Integer) 1);

          make__module_target__get_foreign_code_file_7_p_0(Globals_17, ModuleName_13, PIC_82, Lang_37, &ForeignCodeFile_38);
          {
            Var_52 = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_52, 0) = ((MR_Box) (&make__module_target_scalar_common_7[0]));
            MR_hl_field(MR_mktag(0), Var_52, 1) = ((MR_Box) (make__module_target__build_target_2_12_p_0_2));
            MR_hl_field(MR_mktag(0), Var_52, 2) = ((MR_Box) ((MR_Integer) 6));
            MR_hl_field(MR_mktag(0), Var_52, 3) = ((MR_Box) (Globals_17));
            MR_hl_field(MR_mktag(0), Var_52, 4) = ((MR_Box) (ProgressStream_23));
            MR_hl_field(MR_mktag(0), Var_52, 5) = ((MR_Box) (ErrorStream_19));
            MR_hl_field(MR_mktag(0), Var_52, 6) = ((MR_Box) (PIC_82));
            MR_hl_field(MR_mktag(0), Var_52, 7) = ((MR_Box) (ModuleDepInfo_16));
            MR_hl_field(MR_mktag(0), Var_52, 8) = ((MR_Box) (ForeignCodeFile_38));
          }
          libs__process_util__call_in_forked_process_4_p_0(Var_52, Succeeded_20);
        }
        break;
      case (MR_Integer) 3:
        {
          MR_String FactTableFileName_39 = ((MR_String) ((MR_hl_field(MR_mktag(3), Task_14, (MR_Integer) 1))));
          MR_Word ObjExt_40;
          MR_Word FactTableForeignCode_41;
          MR_Word Var_49;
          MR_Word PIC_83 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Task_14, (MR_Integer) 0))) & (MR_Integer) 1);

          ObjExt_40 = make__module_target__get_object_extension_2_f_0(Globals_17, PIC_83);
          make__module_target__get_fact_table_foreign_code_file_7_p_0(Globals_17, (MR_Integer) 0, ObjExt_40, FactTableFileName_39, &FactTableForeignCode_41);
          {
            Var_49 = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_49, 0) = ((MR_Box) (&make__module_target_scalar_common_7[0]));
            MR_hl_field(MR_mktag(0), Var_49, 1) = ((MR_Box) (make__module_target__build_target_2_12_p_0_1));
            MR_hl_field(MR_mktag(0), Var_49, 2) = ((MR_Box) ((MR_Integer) 6));
            MR_hl_field(MR_mktag(0), Var_49, 3) = ((MR_Box) (Globals_17));
            MR_hl_field(MR_mktag(0), Var_49, 4) = ((MR_Box) (ProgressStream_23));
            MR_hl_field(MR_mktag(0), Var_49, 5) = ((MR_Box) (ErrorStream_19));
            MR_hl_field(MR_mktag(0), Var_49, 6) = ((MR_Box) (PIC_83));
            MR_hl_field(MR_mktag(0), Var_49, 7) = ((MR_Box) (ModuleDepInfo_16));
            MR_hl_field(MR_mktag(0), Var_49, 8) = ((MR_Box) (FactTableForeignCode_41));
          }
          libs__process_util__call_in_forked_process_4_p_0(Var_49, Succeeded_20);
        }
        break;
    }
    *STATE_VARIABLE_Info_43 = STATE_VARIABLE_Info_0_42;
  }
}

static void MR_CALL 
make__module_target__get_fact_table_foreign_code_file_7_p_0(
  MR_Word Globals_8,
  MR_Word Mkdir_9,
  MR_Word ObjOtherExt_10,
  MR_String FactTableFileName_11,
  MR_Word * ForeignCodeFile_12)
{
  {
    MR_String FactTableCFileName_14;
    MR_String FactTableObjFileName_15;

    parse_tree__file_names__fact_table_file_name_8_p_0(Globals_8, (MR_String) "predicate \140make.module_target.get_fact_table_foreign_code_file\'/7", Mkdir_9, (MR_Word) (((MR_Box) ((MR_String) ".c"))), FactTableFileName_11, &FactTableCFileName_14);
    parse_tree__file_names__fact_table_file_name_8_p_0(Globals_8, (MR_String) "predicate \140make.module_target.get_fact_table_foreign_code_file\'/7", Mkdir_9, ObjOtherExt_10, FactTableFileName_11, &FactTableObjFileName_15);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      *ForeignCodeFile_12 = base;
      MR_hl_field(MR_mktag(0), base, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (FactTableCFileName_14));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (FactTableObjFileName_15));
    }
  }
}

static void MR_CALL 
make__module_target__call_mercury_compile_main_5_p_0(
  MR_Word Globals_6,
  MR_Word Args_7,
  MR_Word * Succeeded_8)
{
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
}

static MR_Word MR_CALL 
make__module_target__get_object_extension_2_f_0(
  MR_Word Globals_4,
  MR_Word PIC_5)
{
  {
    MR_Word OtherExt_6;
    MR_Word CompilationTarget_7;

    libs__globals__get_target_2_p_0(Globals_4, &CompilationTarget_7);
    switch (CompilationTarget_7) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        backend_libs__compile_target_code__pic_object_file_extension_3_p_0(Globals_4, PIC_5, &OtherExt_6);
        break;
      case (MR_Integer) 1:
        mercury__require__sorry_2_p_0((MR_String) "function \140make.module_target.get_object_extension\'/2", (MR_String) "object extension for csharp");
        break;
      case (MR_Integer) 2:
        mercury__require__sorry_2_p_0((MR_String) "function \140make.module_target.get_object_extension\'/2", (MR_String) "object extension for java");
        break;
    }
    return OtherExt_6;
  }
}

static void MR_CALL 
make__module_target__get_foreign_code_file_7_p_0(
  MR_Word Globals_8,
  MR_Word ModuleName_9,
  MR_Word PIC_10,
  MR_Word Lang_11,
  MR_Word * ForeignCodeFile_12)
{
  {
    MR_bool succeeded;
    MR_Word ForeignModName_16;
    MR_Word SrcExt_17;
    MR_Word ObjOtherExt_18;
    MR_String SrcFileName_19;
    MR_String ObjFileName_20;
    MR_Word Var_27;
    MR_Word Var_31;
    MR_Word CompilationTarget_36;
    MR_Word ForeignModName0_14;
    MR_Word SrcExt0_15;

    succeeded = parse_tree__prog_foreign__foreign_language_module_name_2_f_1(ModuleName_9, Lang_11, &ForeignModName0_14);
    if (succeeded)
      succeeded = parse_tree__prog_foreign__foreign_language_file_extension_1_f_0(Lang_11, &SrcExt0_15);
    if (succeeded)
    {
      ForeignModName_16 = ForeignModName0_14;
      SrcExt_17 = SrcExt0_15;
    }
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140make.module_target.get_foreign_code_file\'/7", (MR_String) "unsupported foreign language");
        return;
      }
    libs__globals__get_target_2_p_0(Globals_8, &CompilationTarget_36);
    switch (CompilationTarget_36) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        backend_libs__compile_target_code__pic_object_file_extension_3_p_0(Globals_8, PIC_10, &ObjOtherExt_18);
        break;
      case (MR_Integer) 1:
        {
          mercury__require__sorry_2_p_0((MR_String) "function \140make.module_target.get_object_extension\'/2", (MR_String) "object extension for csharp");
          return;
        }
        break;
      case (MR_Integer) 2:
        {
          mercury__require__sorry_2_p_0((MR_String) "function \140make.module_target.get_object_extension\'/2", (MR_String) "object extension for java");
          return;
        }
        break;
    }
    {
      Var_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_27, 0) = ((MR_Box) (SrcExt_17));
    }
    parse_tree__file_names__module_name_to_file_name_8_p_0(Globals_8, (MR_String) "predicate \140make.module_target.get_foreign_code_file\'/7", (MR_Integer) 0, Var_27, ForeignModName_16, &SrcFileName_19);
    {
      Var_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_31, 0) = ((MR_Box) (ObjOtherExt_18));
    }
    parse_tree__file_names__module_name_to_file_name_8_p_0(Globals_8, (MR_String) "predicate \140make.module_target.get_foreign_code_file\'/7", (MR_Integer) 0, Var_31, ForeignModName_16, &ObjFileName_20);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      *ForeignCodeFile_12 = base;
      MR_hl_field(MR_mktag(0), base, 0) = (MR_Box) ((MR_Unsigned) (Lang_11));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (SrcFileName_19));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ObjFileName_20));
    }
  }
}

static MR_Word MR_CALL 
make__module_target__forkable_module_compilation_task_type_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_Word HeadVar__2_2 = ((&make__module_target_vector_common_6[0 + HeadVar__1_1]))->make__module_target__vector_common_type_6_0__vct_6_f_0;

    return HeadVar__2_2;
  }
}

static void MR_CALL 
make__module_target__make_dependency_files_10_p_0_8(
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
    MR_Word conv14_HeadVar__3_3;
    MR_Word conv13_HeadVar__5_5;

    make__util__get_file_timestamp_7_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) (wrapper_arg_1)), &conv14_HeadVar__3_3, ((MR_Word) (wrapper_arg_3)), &conv13_HeadVar__5_5);
    *wrapper_arg_2 = ((MR_Box) (conv14_HeadVar__3_3));
    *wrapper_arg_4 = ((MR_Box) (conv13_HeadVar__5_5));
  }
}

static void MR_CALL 
make__module_target__make_dependency_files_10_p_0_7(
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
    MR_Word conv10_HeadVar__3_3;
    MR_Word conv9_HeadVar__5_5;

    make__util__get_timestamp_file_timestamp_7_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv10_HeadVar__3_3, ((MR_Word) (wrapper_arg_3)), &conv9_HeadVar__5_5);
    *wrapper_arg_2 = ((MR_Box) (conv10_HeadVar__3_3));
    *wrapper_arg_4 = ((MR_Box) (conv9_HeadVar__5_5));
  }
}

static void MR_CALL 
make__module_target__make_dependency_files_10_p_0_2(
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
    MR_Word conv5_HeadVar__4_4;
    MR_Word conv4_HeadVar__6_6;

    make__util__get_target_timestamp_8_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv5_HeadVar__4_4, ((MR_Word) (wrapper_arg_3)), &conv4_HeadVar__6_6);
    *wrapper_arg_2 = ((MR_Box) (conv5_HeadVar__4_4));
    *wrapper_arg_4 = ((MR_Box) (conv4_HeadVar__6_6));
  }
}

static void MR_CALL 
make__module_target__make_dependency_files_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_Succeeded_10;
    MR_Word conv0_STATE_VARIABLE_Info_14;

    make__module_target__make_module_target_7_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_Succeeded_10, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_Info_14);
    *wrapper_arg_3 = ((MR_Box) (conv1_Succeeded_10));
    *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_Info_14));
  }
}

static void MR_CALL 
make__module_target__make_dependency_files_10_p_0_3(
  void * env_ptr_arg)
{
  {
    struct make__module_target__make_dependency_files_10_p_0_env_0_s * env_ptr = (struct make__module_target__make_dependency_files_10_p_0_env_0_s *) (env_ptr_arg);

    MR_builtin_longjmp((env_ptr)->make__module_target__make_dependency_files_10_p_0_env_0__commit_0, 1);
  }
}

static void MR_CALL 
make__module_target__make_dependency_files_10_p_0_5(
  void * env_ptr_arg)
{
  {
    struct make__module_target__make_dependency_files_10_p_0_env_0_s * env_ptr = (struct make__module_target__make_dependency_files_10_p_0_env_0_s *) (env_ptr_arg);

    (env_ptr)->make__module_target__make_dependency_files_10_p_0_env_0__Var_113 = ((MR_Word) ((env_ptr)->make__module_target__make_dependency_files_10_p_0_env_0__conv8_Var_113));
    make__module_target__make_dependency_files_10_p_0_4(env_ptr);
  }
}

static void MR_CALL 
make__module_target__make_dependency_files_10_p_0_4(
  void * env_ptr_arg)
{
  {
    struct make__module_target__make_dependency_files_10_p_0_env_0_s * env_ptr = (struct make__module_target__make_dependency_files_10_p_0_env_0_s *) (env_ptr_arg);

    (env_ptr)->make__module_target__make_dependency_files_10_p_0_env_0__TypeCtorInfo_114_114 = (MR_Word) (&libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0);
    (env_ptr)->make__module_target__make_dependency_files_10_p_0_env_0__TypeCtorInfo_115_115 = (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0);
    (env_ptr)->make__module_target__make_dependency_files_10_p_0_env_0__succeeded = make__module_target____Unify______maybemaybe_error_2_2((env_ptr)->make__module_target__make_dependency_files_10_p_0_env_0__TypeCtorInfo_114_114, (env_ptr)->make__module_target__make_dependency_files_10_p_0_env_0__TypeCtorInfo_115_115, (env_ptr)->make__module_target__make_dependency_files_10_p_0_env_0__Var_41, (env_ptr)->make__module_target__make_dependency_files_10_p_0_env_0__Var_113);
    if ((env_ptr)->make__module_target__make_dependency_files_10_p_0_env_0__succeeded)
      make__module_target__make_dependency_files_10_p_0_3(env_ptr);
  }
}

static void MR_CALL 
make__module_target__make_dependency_files_10_p_0_6(
  void * env_ptr_arg)
{
  {
    struct make__module_target__make_dependency_files_10_p_0_env_0_s * env_ptr = (struct make__module_target__make_dependency_files_10_p_0_env_0_s *) (env_ptr_arg);

    if (MR_builtin_setjmp((env_ptr)->make__module_target__make_dependency_files_10_p_0_env_0__commit_0) == 0)
      {
        {
          MR_String Var_22;

          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            (env_ptr)->make__module_target__make_dependency_files_10_p_0_env_0__Var_41 = base;
            MR_hl_field(MR_mktag(1), base, 0) = NULL;
          }
          mercury__list__member_2_p_1((MR_Word) (&make__module_target_scalar_common_2[1]), &(env_ptr)->make__module_target__make_dependency_files_10_p_0_env_0__conv8_Var_113, (env_ptr)->make__module_target__make_dependency_files_10_p_0_env_0__TargetTimestamps_21, make__module_target__make_dependency_files_10_p_0_5, env_ptr);
        }
        (env_ptr)->make__module_target__make_dependency_files_10_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (env_ptr)->make__module_target__make_dependency_files_10_p_0_env_0__succeeded = MR_TRUE;
  }
}

static void MR_CALL 
make__module_target__make_dependency_files_10_p_0(
  MR_Word Globals_11,
  MR_Word TargetFile_12,
  MR_Word DepFilesToMake_13,
  MR_Word TouchedTargetFiles_14,
  MR_Word TouchedFiles_15,
  MR_Word * DepsResult_16,
  MR_Word STATE_VARIABLE_Info_0_30,
  MR_Word * STATE_VARIABLE_Info_31)
{
  {
    struct make__module_target__make_dependency_files_10_p_0_env_0_s env;

    {
      MR_Word KeepGoing_19 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_30, (MR_Integer) 13))) & (MR_Integer) 1);
      MR_Word MakeDepsSucceeded_20;
      MR_Word STATE_VARIABLE_Info_35_35;
      MR_Word Var_37;
      MR_Word STATE_VARIABLE_Info_38_38;
      MR_Word Var_62 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_30, (MR_Integer) 0))));
      MR_Word Var_63 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_30, (MR_Integer) 1))));
      MR_Word Var_64 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_30, (MR_Integer) 2))));
      MR_Word Var_65 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_30, (MR_Integer) 3))));
      MR_Word Var_66 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_30, (MR_Integer) 4))));
      MR_Word Var_67 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_30, (MR_Integer) 5))));
      MR_Word Var_68 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_30, (MR_Integer) 6))));
      MR_Word Var_69 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_30, (MR_Integer) 7))));
      MR_Word Var_70 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_30, (MR_Integer) 8))));
      MR_Word Var_71 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_30, (MR_Integer) 9))));
      MR_Word Var_72 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_30, (MR_Integer) 10))));
      MR_Word Var_73 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_30, (MR_Integer) 11))));
      MR_Word Var_74 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_30, (MR_Integer) 12))));
      MR_Word Var_75 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_30, (MR_Integer) 13))) >> 1)) & (MR_Integer) 1);
      MR_Word Var_76 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_30, (MR_Integer) 14))));
      MR_Word Var_77 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_30, (MR_Integer) 15))));
      MR_Word Var_78 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_30, (MR_Integer) 16))));
      MR_Integer Var_79 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_30, (MR_Integer) 17))));
      MR_Word Var_80 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_30, (MR_Integer) 18))));
      MR_Word Var_81 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_30, (MR_Integer) 19))));
      MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_30, (MR_Integer) 13)));
      MR_Box conv3_STATE_VARIABLE_Info_35_35;
      MR_Box conv2_STATE_VARIABLE_IO_36_36;
      MR_Box conv7_STATE_VARIABLE_Info_38_38;
      MR_Box conv6_STATE_VARIABLE_IO_39_39;

      make__build__foldl2_maybe_stop_at_error_9_p_0((MR_Word) (&make__dependencies__make__dependencies__type_ctor_info_dependency_file_0), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), KeepGoing_19, (MR_Word) (&make__module_target_scalar_common_2[3]), Globals_11, DepFilesToMake_13, &MakeDepsSucceeded_20, ((MR_Box) (STATE_VARIABLE_Info_0_30)), &conv3_STATE_VARIABLE_Info_35_35, ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_36_36);
      STATE_VARIABLE_Info_35_35 = ((MR_Word) (conv3_STATE_VARIABLE_Info_35_35));
      {
        Var_37 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_37, 0) = ((MR_Box) (&make__module_target_scalar_common_5[0]));
        MR_hl_field(MR_mktag(0), Var_37, 1) = ((MR_Box) (make__module_target__make_dependency_files_10_p_0_2));
        MR_hl_field(MR_mktag(0), Var_37, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), Var_37, 3) = ((MR_Box) (Globals_11));
        MR_hl_field(MR_mktag(0), Var_37, 4) = ((MR_Box) ((MR_Integer) 1));
      }
      mercury__list__map_foldl2_7_p_2((MR_Word) (&make__make_info__make__make_info__type_ctor_info_target_file_0), (MR_Word) (&make__module_target_scalar_common_2[1]), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_37, TouchedTargetFiles_14, &(env).make__module_target__make_dependency_files_10_p_0_env_0__TargetTimestamps_21, ((MR_Box) (STATE_VARIABLE_Info_35_35)), &conv7_STATE_VARIABLE_Info_38_38, ((MR_Box) ((MR_Integer) 0)), &conv6_STATE_VARIABLE_IO_39_39);
      STATE_VARIABLE_Info_38_38 = ((MR_Word) (conv7_STATE_VARIABLE_Info_38_38));
      switch (MakeDepsSucceeded_20) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            make__util__debug_file_msg_5_p_0(Globals_11, TargetFile_12, (MR_String) "error making dependencies");
            *DepsResult_16 = (MR_Integer) 2;
            *STATE_VARIABLE_Info_31 = STATE_VARIABLE_Info_38_38;
          }
          break;
        case (MR_Integer) 1:
          {
            make__module_target__make_dependency_files_10_p_0_6(&env);
            if ((env).make__module_target__make_dependency_files_10_p_0_env_0__succeeded)
            {
              make__util__debug_file_msg_5_p_0(Globals_11, TargetFile_12, (MR_String) "target file does not exist");
              *DepsResult_16 = (MR_Integer) 1;
              *STATE_VARIABLE_Info_31 = STATE_VARIABLE_Info_38_38;
            }
            else
            {
              MR_Word ForceReanalysis_25;
              MR_Word ModuleName_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TargetFile_12, (MR_Integer) 0))));
              MR_Word TargetType_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TargetFile_12, (MR_Integer) 1))));

              (env).make__module_target__make_dependency_files_10_p_0_env_0__succeeded = (TargetType_24 == (MR_Word) ((MR_Unsigned) 28U));
              if ((env).make__module_target__make_dependency_files_10_p_0_env_0__succeeded)
                make__module_target__force_reanalysis_of_suboptimal_module_6_p_0(Globals_11, ModuleName_23, &ForceReanalysis_25, STATE_VARIABLE_Info_38_38);
              else
                ForceReanalysis_25 = (MR_Integer) 0;
              switch (ForceReanalysis_25) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word TouchedTargetFileTimestamps_26;
                    MR_Word TouchedFileTimestamps_27;
                    MR_Word MaybeOldestTimestamp_28;
                    MR_String TargetFileName_29;
                    MR_Word Var_45;
                    MR_Word STATE_VARIABLE_Info_46_46;
                    MR_Word Var_48;
                    MR_Word STATE_VARIABLE_Info_49_49;
                    MR_Word Var_51;
                    MR_String Var_52;
                    MR_Word Var_54;
                    MR_Word STATE_VARIABLE_Info_56_56;
                    MR_Box conv12_STATE_VARIABLE_Info_46_46;
                    MR_Box conv11_STATE_VARIABLE_IO_47_47;
                    MR_Box conv16_STATE_VARIABLE_Info_49_49;
                    MR_Box conv15_STATE_VARIABLE_IO_50_50;

                    {
                      Var_45 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), Var_45, 0) = ((MR_Box) (&make__module_target_scalar_common_4[1]));
                      MR_hl_field(MR_mktag(0), Var_45, 1) = ((MR_Box) (make__module_target__make_dependency_files_10_p_0_7));
                      MR_hl_field(MR_mktag(0), Var_45, 2) = ((MR_Box) ((MR_Integer) 1));
                      MR_hl_field(MR_mktag(0), Var_45, 3) = ((MR_Box) (Globals_11));
                    }
                    mercury__list__map_foldl2_7_p_2((MR_Word) (&make__make_info__make__make_info__type_ctor_info_target_file_0), (MR_Word) (&make__module_target_scalar_common_2[1]), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_45, TouchedTargetFiles_14, &TouchedTargetFileTimestamps_26, ((MR_Box) (STATE_VARIABLE_Info_38_38)), &conv12_STATE_VARIABLE_Info_46_46, ((MR_Box) ((MR_Integer) 0)), &conv11_STATE_VARIABLE_IO_47_47);
                    STATE_VARIABLE_Info_46_46 = ((MR_Word) (conv12_STATE_VARIABLE_Info_46_46));
                    Var_52 = mercury__dir__this_directory_0_f_0();
                    {
                      Var_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_51, 0) = ((MR_Box) (Var_52));
                      MR_hl_field(MR_mktag(1), Var_51, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    }
                    {
                      Var_48 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), Var_48, 0) = ((MR_Box) (&make__module_target_scalar_common_4[2]));
                      MR_hl_field(MR_mktag(0), Var_48, 1) = ((MR_Box) (make__module_target__make_dependency_files_10_p_0_8));
                      MR_hl_field(MR_mktag(0), Var_48, 2) = ((MR_Box) ((MR_Integer) 1));
                      MR_hl_field(MR_mktag(0), Var_48, 3) = ((MR_Box) (Var_51));
                    }
                    mercury__list__map_foldl2_7_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__module_target_scalar_common_2[1]), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_48, TouchedFiles_15, &TouchedFileTimestamps_27, ((MR_Box) (STATE_VARIABLE_Info_46_46)), &conv16_STATE_VARIABLE_Info_49_49, ((MR_Box) ((MR_Integer) 0)), &conv15_STATE_VARIABLE_IO_50_50);
                    STATE_VARIABLE_Info_49_49 = ((MR_Word) (conv16_STATE_VARIABLE_Info_49_49));
                    Var_54 = mercury__list__f_43_43_2_f_0((MR_Word) (&make__module_target_scalar_common_2[1]), TouchedTargetFileTimestamps_26, TouchedFileTimestamps_27);
                    make__util__find_error_or_oldest_ok_timestamp_2_p_0(Var_54, &MaybeOldestTimestamp_28);
                    make__util__get_file_name_8_p_0(Globals_11, (MR_Integer) 1, TargetFile_12, &TargetFileName_29, STATE_VARIABLE_Info_49_49, &STATE_VARIABLE_Info_56_56);
                    make__dependencies__check_dependencies_10_p_0(Globals_11, TargetFileName_29, MaybeOldestTimestamp_28, MakeDepsSucceeded_20, DepFilesToMake_13, DepsResult_16, STATE_VARIABLE_Info_56_56, STATE_VARIABLE_Info_31);
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    *DepsResult_16 = (MR_Integer) 1;
                    *STATE_VARIABLE_Info_31 = STATE_VARIABLE_Info_38_38;
                  }
                  break;
              }
            }
          }
          break;
      }
    }
  }
}

static MR_bool MR_CALL 
make__module_target____Unify______maybemaybe_error_2_2(
  MR_Word TypeInfo_for_T_9,
  MR_Word TypeInfo_for_E_10,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
    MR_Box ArgX1_5;

    if (succeeded)
    {
      ArgX1_5 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
      (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)) = ArgX1_5;
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static void MR_CALL 
make__module_target__force_reanalysis_of_suboptimal_module_6_p_0(
  MR_Word Globals_7,
  MR_Word ModuleName_8,
  MR_Word * ForceReanalysis_9,
  MR_Word Info_10)
{
  {
    MR_bool succeeded;
    MR_Integer Var_15 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Info_10, (MR_Integer) 17))));

    succeeded = (Var_15 > (MR_Integer) 0);
    if (succeeded)
    {
      MR_Word AnalysisStatus_12;

      analysis__do_read_module_overall_status_6_p_0((MR_Word) (&make__module_target_scalar_common_1[2]), ((MR_Box) ((MR_Integer) 0)), Globals_7, ModuleName_8, &AnalysisStatus_12);
      switch (AnalysisStatus_12) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
        case (MR_Integer) 1:
          *ForceReanalysis_9 = (MR_Integer) 1;
          break;
        case (MR_Integer) 2:
          *ForceReanalysis_9 = (MR_Integer) 0;
          break;
      }
    }
    else
      *ForceReanalysis_9 = (MR_Integer) 0;
  }
}

static MR_bool MR_CALL 
make__module_target____Unify____compilation_task_type_and_options_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = make__module_target____Unify____compilation_task_type_and_options_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
make__module_target____Compare____compilation_task_type_and_options_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    make__module_target____Compare____compilation_task_type_and_options_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
make__module_target____Unify____foreign_code_file_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = make__module_target____Unify____foreign_code_file_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
make__module_target____Compare____foreign_code_file_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    make__module_target____Compare____foreign_code_file_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
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
