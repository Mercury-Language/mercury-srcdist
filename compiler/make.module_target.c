/*
** Automatically generated from `make.module_target.m'
** by the Mercury compiler,
** version rotd-2019-04-20
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
#include "backend_libs.mih"
#include "check_hlds.mih"
#include "hlds.mih"
#include "libs.mih"
#include "make.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "top_level.mih"
#include "transform_hlds.mih"
#include "backend_libs.compile_target_code.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.proc_requests.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_mode.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_cons.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_inst_mode.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_promise.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "hlds.vartypes.mih"
#include "libs.compiler_util.mih"
#include "libs.dependency_graph.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.handle_options.mih"
#include "libs.lp_rational.mih"
#include "libs.md4.mih"
#include "libs.op_mode.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.process_util.mih"
#include "libs.rat.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "make.dependencies.mih"
#include "make.module_dep_file.mih"
#include "make.options_file.mih"
#include "make.program_target.mih"
#include "make.util.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.rtti_access.mih"
#include "mdbcomp.sym_name.mih"
#include "mdbcomp.trace_counts.mih"
#include "array.mih"
#include "assoc_list.mih"
#include "bag.mih"
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "cord.mih"
#include "deconstruct.mih"
#include "digraph.mih"
#include "dir.mih"
#include "enum.mih"
#include "float.mih"
#include "getopt_io.mih"
#include "int.mih"
#include "integer.mih"
#include "io.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "multi_map.mih"
#include "ops.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "queue.mih"
#include "random.mih"
#include "require.mih"
#include "robdd.mih"
#include "rtti_implementation.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "set_tree234.mih"
#include "solutions.mih"
#include "sparse_bitset.mih"
#include "stack.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "version_array.mih"
#include "version_hash_table.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.module_cmds.mih"
#include "parse_tree.module_imports.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.parse_error.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.set_of_var.mih"
#include "top_level.mercury_compile_main.mih"
#include "transform_hlds.mmc_analysis.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"
#include "string.format.mih"
#include "string.parse_util.mih"



struct make__module_target__make_dependency_files_10_p_0_env_0_s {
  MR_bool make__module_target__make_dependency_files_10_p_0_env_0__succeeded;
  MR_Word make__module_target__make_dependency_files_10_p_0_env_0__TargetTimestamps_21;
  jmp_buf make__module_target__make_dependency_files_10_p_0_env_0__commit_0;
  MR_Word make__module_target__make_dependency_files_10_p_0_env_0__TypeCtorInfo_105_105;
  MR_Word make__module_target__make_dependency_files_10_p_0_env_0__TypeCtorInfo_106_106;
  MR_Word make__module_target__make_dependency_files_10_p_0_env_0__Var_43;
  MR_Word make__module_target__make_dependency_files_10_p_0_env_0__Var_104;
  MR_Box make__module_target__make_dependency_files_10_p_0_env_0__conv8_Var_104;
};


static const MR_FA_PseudoTypeInfo_Struct2 make__module_target__maybe__pti_maybe_error_2__plain_libs__timestamp__type_ctor_info_timestamp_0__plain_builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct1 make__module_target__list__pti_list_1__plain_builtin__type_ctor_info_string_0;

static const MR_FA_TypeInfo_Struct2 make__module_target__maybe__ti_maybe_error_2libs__timestamp__type_ctor_info_timestamp_0builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct2 make__module_target__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_maybe__ti_maybe_error_2libs__timestamp__type_ctor_info_timestamp_0builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct1 make__module_target__list__pti_list_1__plain_make__type_ctor_info_target_file_0;

static const MR_FA_PseudoTypeInfo_Struct1 make__module_target__maybe__pti_maybe_1__plain_builtin__type_ctor_info_string_0;

static const MR_FA_TypeInfo_Struct1 make__module_target__list__ti_list_1builtin__type_ctor_info_string_0;

static const MR_VA_PseudoTypeInfo_Struct8 make__module_target____vpti_pred_8__plain_libs__globals__type_ctor_info_globals_0__plain_list__ti_list_1builtin__type_ctor_info_string_0__plain_io__type_ctor_info_output_stream_0__plain_bool__type_ctor_info_bool_0__plain_make__type_ctor_info_make_info_0__plain_make__type_ctor_info_make_info_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0;

static const MR_FA_PseudoTypeInfo_Struct1 make__module_target__maybe__pti_maybe_1__plain_parse_tree__module_imports__type_ctor_info_module_and_imports_0;

static const MR_FA_PseudoTypeInfo_Struct1 make__module_target__list__pti_list_1__plain_make__module_target__type_ctor_info_foreign_code_file_0;

static const MR_FA_TypeInfo_Struct1 make__module_target__sparse_bitset__ti_sparse_bitset_1make__dependencies__type_ctor_info_dependency_file_index_0;

static const MR_VA_PseudoTypeInfo_Struct8 make__module_target____vpti_pred_8__plain_libs__globals__type_ctor_info_globals_0__plain_make__dependencies__type_ctor_info_module_index_0__plain_bool__type_ctor_info_bool_0__plain_sparse_bitset__ti_sparse_bitset_1make__dependencies__type_ctor_info_dependency_file_index_0__plain_make__type_ctor_info_make_info_0__plain_make__type_ctor_info_make_info_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0;

static const MR_FA_PseudoTypeInfo_Struct1 make__module_target__sparse_bitset__pti_sparse_bitset_1__plain_make__dependencies__type_ctor_info_dependency_file_index_0;

static const MR_FA_TypeInfo_Struct2 make__module_target__pair__ti_pair_2make__type_ctor_info_compilation_task_type_0list__ti_list_1builtin__type_ctor_info_string_0;

static const MR_PseudoTypeInfo make__module_target__make__module_target__field_types_foreign_code_file_0_0[3];

static const MR_ConstString make__module_target__make__module_target__field_names_foreign_code_file_0_0[3];

static const MR_DuArgLocn make__module_target__make__module_target__field_locns_foreign_code_file_0_0[3];

static const MR_DuFunctorDesc make__module_target__make__module_target__du_functor_desc_foreign_code_file_0_0;

static const MR_DuFunctorDescPtr make__module_target__make__module_target__du_stag_ordered_foreign_code_file_0_0[1];

static const MR_DuPtagLayout make__module_target__make__module_target__du_ptag_ordered_foreign_code_file_0[1];

static const MR_DuFunctorDescPtr make__module_target__make__module_target__du_name_ordered_foreign_code_file_0[1];

static const MR_Integer make__module_target__make__module_target__functor_number_map_foreign_code_file_0[1];

static MR_String MR_CALL 
make__module_target__IntroducedFrom__func__touched_files_process_module__981__1_1_f_0(
  MR_Word LambdaHeadVar__1_64);

static MR_bool MR_CALL 
make__module_target__IntroducedFrom__pred__touched_files_process_module__959__1_2_p_0(
  MR_Word LambdaHeadVar__1_53,
  MR_Word * LambdaHeadVar__2_54);

static void MR_CALL 
make__module_target__IntroducedFrom__pred__delete_timestamp__814__1_3_p_0(
  MR_String TouchedFile_6);

static void MR_CALL 
make__module_target__IntroducedFrom__pred__build_target__394__1_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
make__module_target__IntroducedFrom__pred__build_target__394__1_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
make__module_target__IntroducedFrom__pred__build_target__394__1_8_p_0(
  MR_Word Globals_13,
  MR_Word TouchedTargetFiles_17,
  MR_Word TouchedFiles_18,
  MR_Word MaybeArgFileName_31,
  MR_Word LambdaHeadVar__1_59,
  MR_Word * LambdaHeadVar__2_60);

static void MR_CALL 
make__module_target__IntroducedFrom__pred__make_module_target_file_extra_options__207__1_6_p_0(
  MR_Word Globals_10,
  MR_Word TargetFile_11,
  MR_Word DepFiles0_36,
  MR_Word STATE_VARIABLE_Info_75_75);

static void MR_CALL 
make__module_target__IntroducedFrom__pred__make_module_target_file_extra_options__187__1_10_p_0(
  MR_Word HeadVar__1_77,
  MR_Word HeadVar__2_223,
  MR_Word HeadVar__3_224,
  MR_Word * HeadVar__4_225,
  MR_Word HeadVar__5_226,
  MR_Word * HeadVar__6_227,
  MR_Word HeadVar__7_228,
  MR_Word * HeadVar__8_229);

static void MR_CALL 
make__module_target____Compare____compilation_task_result_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
make__module_target____Unify____compilation_task_result_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
make__module_target__get_fact_table_foreign_code_file_7_p_0(
  MR_Word Globals_8,
  MR_String ObjExt_9,
  MR_Word ModuleName_10,
  MR_String FactTableFile_11,
  MR_Word * FactTableForeignFile_12);

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
  MR_Word STATE_VARIABLE_Info_0_9,
  MR_Word * STATE_VARIABLE_Info_10);

static void MR_CALL 
make__module_target__invoke_mmc_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_Box MR_CALL 
make__module_target__invoke_mmc_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
make__module_target__invoke_mmc_7_p_0(
  MR_Word Globals_8,
  MR_Word ErrorStream_9,
  MR_Word MaybeArgFileName_10,
  MR_Word Args_11,
  MR_Word * Succeeded_12);

static void MR_CALL 
make__module_target__compile_foreign_code_file_8_p_0(
  MR_Word Globals_9,
  MR_Word ErrorStream_10,
  MR_Word PIC_11,
  MR_Word Imports_12,
  MR_Word ForeignCodeFile_13,
  MR_Word * Succeeded_14);

static void MR_CALL 
make__module_target__build_object_code_9_p_0(
  MR_Word Globals_10,
  MR_Word ModuleName_11,
  MR_Word Target_12,
  MR_Word PIC_13,
  MR_Word ErrorStream_14,
  MR_Word _Imports_15,
  MR_Word * Succeeded_16);

static void MR_CALL 
make__module_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_111_98_106_101_99_116_95_99_111_100_101_95_95_91_54_93_95_48_9_p_0(
  MR_Word Globals_10,
  MR_Word ModuleName_11,
  MR_Word Target_12,
  MR_Word PIC_13,
  MR_Word ErrorStream_14,
  MR_Word * Succeeded_16);

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
  MR_Box wrapper_arg_1,
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
  MR_Word Imports_16,
  MR_Word Globals_17,
  MR_Word AllOptionArgs_18,
  MR_Word ErrorStream_19,
  MR_Word * Succeeded_20,
  MR_Word STATE_VARIABLE_Info_0_36,
  MR_Word * STATE_VARIABLE_Info_37);

static void MR_CALL 
make__module_target__call_mercury_compile_main_5_p_0(
  MR_Word Globals_6,
  MR_Word Args_7,
  MR_Word * Succeeded_8);

static void MR_CALL 
make__module_target__fact_table_foreign_code_file_7_p_0(
  MR_Word Globals_8,
  MR_Word ModuleName_9,
  MR_Word PIC_10,
  MR_String FactTableName_11,
  MR_Word * ForeignCodeFile_12);

static void MR_CALL 
make__module_target__get_foreign_code_file_7_p_0(
  MR_Word Globals_8,
  MR_Word ModuleName_9,
  MR_Word PIC_10,
  MR_Word Lang_11,
  MR_Word * ForeignCodeFile_12);

static void MR_CALL 
make__module_target__external_foreign_code_files_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
make__module_target__make_module_target_file_extra_options_8_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
make__module_target__make_module_target_file_extra_options_8_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
make__module_target__make_module_target_file_extra_options_8_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
make__module_target__make_module_target_file_extra_options_8_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
make__module_target__make_module_target_file_extra_options_8_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
make__module_target__make_module_target_file_extra_options_8_p_0_2(
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
make__module_target__make_module_target_file_extra_options_8_p_0_1(
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
  MR_Word tscc_proc_2_input_4_STATE_VARIABLE_Info_0_47,
  MR_Word * tscc_output_ptr_2_STATE_VARIABLE_Info_20);

static void MR_CALL 
make__module_target__touched_files_9_p_0(
  MR_Word Globals_10,
  MR_Word TargetFile_11,
  MR_Word Task_12,
  MR_Word * TouchedTargetFiles_13,
  MR_Word * TouchedFileNames_14,
  MR_Word STATE_VARIABLE_Info_0_29,
  MR_Word * STATE_VARIABLE_Info_30);

static void MR_CALL 
make__module_target__touched_files_process_module_9_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static MR_Box MR_CALL 
make__module_target__touched_files_process_module_9_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
make__module_target__touched_files_process_module_9_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static MR_bool MR_CALL 
make__module_target__touched_files_process_module_9_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
make__module_target__touched_files_process_module_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
make__module_target__touched_files_process_module_9_p_0(
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
make__module_target__build_target_12_p_0_3(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
make__module_target__build_target_12_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8);

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
  MR_Word Imports_16,
  MR_Word TouchedTargetFiles_17,
  MR_Word TouchedFiles_18,
  MR_Word ExtraOptions_19,
  MR_Word * Succeeded_20,
  MR_Word STATE_VARIABLE_Info_0_44,
  MR_Word * STATE_VARIABLE_Info_45);

static void MR_CALL 
make__module_target__record_made_target_2_9_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
make__module_target__record_made_target_2_9_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
make__module_target__record_made_target_2_9_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
make__module_target__record_made_target_2_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
make__module_target__record_made_target_2_9_p_0(
  MR_Word Globals_10,
  MR_Word Succeeded_11,
  MR_Word TargetFile_12,
  MR_Word TouchedTargetFiles_13,
  MR_Word OtherTouchedFiles_14,
  MR_Word STATE_VARIABLE_Info_0_21,
  MR_Word * STATE_VARIABLE_Info_22);

static MR_Word MR_CALL 
make__module_target__forkable_module_compilation_task_type_1_f_0(
  MR_Word HeadVar__1_1);

static MR_Box MR_CALL 
make__module_target__make_dependency_files_10_p_0_10(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static MR_Box MR_CALL 
make__module_target__make_dependency_files_10_p_0_9(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

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
  MR_Word STATE_VARIABLE_Info_0_31,
  MR_Word * STATE_VARIABLE_Info_32);

static MR_bool MR_CALL 
make__module_target____Unify____maybe__maybe_error_2_2(
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
make__module_target____Unify____compilation_task_result_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
make__module_target____Compare____compilation_task_result_0_0_10001(
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

static /* final */ const MR_Box make__module_target_scalar_common_2[13][3];

static /* final */ const MR_Box make__module_target_scalar_common_3[9][1];

static /* final */ const MR_Box make__module_target_scalar_common_4[8][10];

static /* final */ const MR_Box make__module_target_scalar_common_5[4][11];

static /* final */ const MR_Box make__module_target_scalar_common_6[2][6];

static /* final */ const MR_Box make__module_target_scalar_common_8[2][7];

static /* final */ const MR_Box make__module_target_scalar_common_9[2][8];

static /* final */ const MR_Box make__module_target_scalar_common_10[1][15];

static /* final */ const MR_Box make__module_target_scalar_common_11[2][12];

static /* final */ const MR_Box make__module_target_scalar_common_12[3][5];

static /* final */ const MR_Box make__module_target_scalar_common_13[3][9];

static /* final */ const MR_Box make__module_target_scalar_common_14[5][4];

static /* final */ const MR_Box make__module_target_scalar_common_15[1][13];


/* sealed */ struct make__module_target__vector_common_type_7_0_s {
  const MR_Word make__module_target__vector_common_type_7_0__vct_7_f_0;
};

static /* final */ const struct make__module_target__vector_common_type_7_0_s make__module_target_vector_common_7[16];



static /* final */ const MR_Box make__module_target_scalar_common_1[29][2] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_enum__enum__arity1__make__dependencies__module_index__arity0__)),
    ((MR_Box) (&make__dependencies__make__dependencies__type_ctor_info_module_index_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1)),
    ((MR_Box) (&make__dependencies__make__dependencies__type_ctor_info_dependency_file_index_0))
  },
  /* row 2 */
  {
    ((MR_Box) (base_typeclass_info_analysis__compiler__arity1__transform_hlds__mmc_analysis__mmc__arity0__)),
    ((MR_Box) (&transform_hlds__mmc_analysis__transform_hlds__mmc_analysis__type_ctor_info_mmc_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_module_and_imports_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&make__module_target__make__module_target__type_ctor_info_foreign_code_file_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 6 */
  {
    ((MR_Box) ((MR_String) "--make-analysis-registry")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 7 */
  {
    ((MR_Box) (&make__module_target_scalar_common_3[0])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &make__module_target_scalar_common_1[6])))
  },
  /* row 8 */
  {
    ((MR_Box) ((MR_String) "--compile-to-c")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 9 */
  {
    ((MR_Box) (&make__module_target_scalar_common_3[1])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &make__module_target_scalar_common_1[8])))
  },
  /* row 10 */
  {
    ((MR_Box) ((MR_String) "--csharp-only")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 11 */
  {
    ((MR_Box) (&make__module_target_scalar_common_3[1])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &make__module_target_scalar_common_1[10])))
  },
  /* row 12 */
  {
    ((MR_Box) ((MR_String) "--erlang-only")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 13 */
  {
    ((MR_Box) (&make__module_target_scalar_common_3[1])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &make__module_target_scalar_common_1[12])))
  },
  /* row 14 */
  {
    ((MR_Box) ((MR_String) "--errorcheck-only")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 15 */
  {
    ((MR_Box) (&make__module_target_scalar_common_3[2])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &make__module_target_scalar_common_1[14])))
  },
  /* row 16 */
  {
    ((MR_Box) ((MR_String) "--make-private-interface")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 17 */
  {
    ((MR_Box) (&make__module_target_scalar_common_3[3])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &make__module_target_scalar_common_1[16])))
  },
  /* row 18 */
  {
    ((MR_Box) ((MR_String) "--make-interface")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 19 */
  {
    ((MR_Box) (&make__module_target_scalar_common_3[4])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &make__module_target_scalar_common_1[18])))
  },
  /* row 20 */
  {
    ((MR_Box) ((MR_String) "--make-short-interface")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 21 */
  {
    ((MR_Box) (&make__module_target_scalar_common_3[5])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &make__module_target_scalar_common_1[20])))
  },
  /* row 22 */
  {
    ((MR_Box) ((MR_String) "--java-only")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 23 */
  {
    ((MR_Box) (&make__module_target_scalar_common_3[1])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &make__module_target_scalar_common_1[22])))
  },
  /* row 24 */
  {
    ((MR_Box) ((MR_String) "--make-optimization-interface")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 25 */
  {
    ((MR_Box) (&make__module_target_scalar_common_3[6])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &make__module_target_scalar_common_1[24])))
  },
  /* row 26 */
  {
    ((MR_Box) ((MR_String) "--make-xml-doc")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 27 */
  {
    ((MR_Box) (&make__module_target_scalar_common_3[7])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &make__module_target_scalar_common_1[26])))
  },
  /* row 28 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &make__module_target_scalar_common_3[3]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box make__module_target_scalar_common_2[13][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&make__make__type_ctor_info_target_type_0))
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
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&make__make__type_ctor_info_compilation_task_type_0)),
    ((MR_Box) (&make__module_target_scalar_common_1[5]))
  },
  /* row 4 */
  {
    ((MR_Box) (&make__module_target_scalar_common_4[0])),
    ((MR_Box) (make__module_target__make_dependency_files_10_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&make__module_target_scalar_common_6[0])),
    ((MR_Box) (make__module_target__make_dependency_files_10_p_0_9)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&make__module_target_scalar_common_6[0])),
    ((MR_Box) (make__module_target__make_dependency_files_10_p_0_10)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&make__module_target_scalar_common_12[0])),
    ((MR_Box) (make__module_target__touched_files_process_module_9_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&make__module_target_scalar_common_12[1])),
    ((MR_Box) (make__module_target__touched_files_process_module_9_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 9 */
  {
    ((MR_Box) (&make__module_target_scalar_common_12[2])),
    ((MR_Box) (make__module_target__build_target_2_12_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 10 */
  {
    ((MR_Box) (&make__module_target_scalar_common_6[1])),
    ((MR_Box) (make__module_target__build_target_2_12_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 11 */
  {
    ((MR_Box) (&make__module_target_scalar_common_12[2])),
    ((MR_Box) (make__module_target__invoke_mmc_7_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 12 */
  {
    ((MR_Box) (&make__module_target_scalar_common_6[1])),
    ((MR_Box) (make__module_target__invoke_mmc_7_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box make__module_target_scalar_common_3[9][1] = {
  /* row 0 */
  {
    (MR_Box) ((MR_Unsigned) 5U)
  },
  /* row 1 */
  {
    (MR_Box) ((MR_Unsigned) 6U)
  },
  /* row 2 */
  {
    (MR_Box) ((MR_Unsigned) 0U)
  },
  /* row 3 */
  {
    (MR_Box) ((MR_Unsigned) 1U)
  },
  /* row 4 */
  {
    (MR_Box) ((MR_Unsigned) 2U)
  },
  /* row 5 */
  {
    (MR_Box) ((MR_Unsigned) 3U)
  },
  /* row 6 */
  {
    (MR_Box) ((MR_Unsigned) 4U)
  },
  /* row 7 */
  {
    (MR_Box) ((MR_Unsigned) 7U)
  },
  /* row 8 */
  {
    (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1))))))))
  },
};

static /* final */ const MR_Box make__module_target_scalar_common_4[8][10] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&make__dependencies__make__dependencies__type_ctor_info_dependency_file_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&make__make__type_ctor_info_target_file_0)),
    ((MR_Box) (&make__module_target__maybe__pti_maybe_error_2__plain_libs__timestamp__type_ctor_info_timestamp_0__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
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
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
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
    ((MR_Box) (&make__module_target__maybe__pti_maybe_1__plain_parse_tree__module_imports__type_ctor_info_module_and_imports_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
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
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&make__module_target__maybe__pti_maybe_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&make__module_target__list__pti_list_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
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
    ((MR_Box) (&make__make__type_ctor_info_target_file_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 7 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&libs__options__libs__options__type_ctor_info_option_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
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
    ((MR_Box) (&make__make__type_ctor_info_target_file_0)),
    ((MR_Box) (&make__module_target__maybe__pti_maybe_error_2__plain_libs__timestamp__type_ctor_info_timestamp_0__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&parse_tree__file_names__parse_tree__file_names__type_ctor_info_maybe_search_0)),
    ((MR_Box) (&make__make__type_ctor_info_target_file_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&make__module_target__list__pti_list_1__plain_make__type_ctor_info_target_file_0)),
    ((MR_Box) (&make__module_target__list__pti_list_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&make__module_target__maybe__pti_maybe_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&backend_libs__compile_target_code__backend_libs__compile_target_code__type_ctor_info_pic_0)),
    ((MR_Box) (&parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_module_and_imports_0)),
    ((MR_Box) (&make__module_target__make__module_target__type_ctor_info_foreign_code_file_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box make__module_target_scalar_common_6[2][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&make__module_target__maybe__pti_maybe_error_2__plain_libs__timestamp__type_ctor_info_timestamp_0__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&make__module_target__maybe__pti_maybe_error_2__plain_libs__timestamp__type_ctor_info_timestamp_0__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&make__module_target__maybe__pti_maybe_error_2__plain_libs__timestamp__type_ctor_info_timestamp_0__plain_builtin__type_ctor_info_string_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box make__module_target_scalar_common_8[2][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&make__make__type_ctor_info_dependency_status_0)),
    ((MR_Box) (&make__make__type_ctor_info_target_file_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0))
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

static /* final */ const MR_Box make__module_target_scalar_common_9[2][8] = {
  /* row 0 */
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
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&make__module_target__list__pti_list_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box make__module_target_scalar_common_10[1][15] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 12)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&make__make__type_ctor_info_compilation_task_type_0)),
    ((MR_Box) (&make__module_target__maybe__pti_maybe_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_module_and_imports_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&make__module_target__list__pti_list_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box make__module_target_scalar_common_11[2][12] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 9)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&make__module_target__list__pti_list_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&make__module_target____vpti_pred_8__plain_libs__globals__type_ctor_info_globals_0__plain_list__ti_list_1builtin__type_ctor_info_string_0__plain_io__type_ctor_info_output_stream_0__plain_bool__type_ctor_info_bool_0__plain_make__type_ctor_info_make_info_0__plain_make__type_ctor_info_make_info_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 9)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_compilation_target_0)),
    ((MR_Box) (&backend_libs__compile_target_code__backend_libs__compile_target_code__type_ctor_info_pic_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_module_and_imports_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box make__module_target_scalar_common_12[3][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&make__module_target__maybe__pti_maybe_1__plain_parse_tree__module_imports__type_ctor_info_module_and_imports_0)),
    ((MR_Box) (&parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_module_and_imports_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&make__module_target__make__module_target__type_ctor_info_foreign_code_file_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box make__module_target_scalar_common_13[3][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&backend_libs__compile_target_code__backend_libs__compile_target_code__type_ctor_info_pic_0)),
    ((MR_Box) (&parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_module_and_imports_0)),
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
    ((MR_Box) (&make__make__type_ctor_info_target_file_0)),
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
    ((MR_Box) (&make__make__type_ctor_info_target_file_0)),
    ((MR_Box) (&make__module_target__sparse_bitset__pti_sparse_bitset_1__plain_make__dependencies__type_ctor_info_dependency_file_index_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box make__module_target_scalar_common_14[5][4] = {
  /* row 0 */
  {
    ((MR_Box) (&make__module_target_scalar_common_8[0])),
    ((MR_Box) (make__module_target__make_module_target_file_extra_options_8_p_0_1)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 1 */
  {
    ((MR_Box) (&make__module_target_scalar_common_8[0])),
    ((MR_Box) (make__module_target__make_module_target_file_extra_options_8_p_0_4)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 3))
  },
  /* row 2 */
  {
    ((MR_Box) (&make__module_target_scalar_common_8[0])),
    ((MR_Box) (make__module_target__make_module_target_file_extra_options_8_p_0_5)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 3))
  },
  /* row 3 */
  {
    ((MR_Box) (&make__module_target_scalar_common_8[0])),
    ((MR_Box) (make__module_target__make_module_target_file_extra_options_8_p_0_6)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 3))
  },
  /* row 4 */
  {
    ((MR_Box) (&make__module_target_scalar_common_8[0])),
    ((MR_Box) (make__module_target__make_module_target_file_extra_options_8_p_0_7)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 2))
  },
};

static /* final */ const MR_Box make__module_target_scalar_common_15[1][13] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 10)),
    ((MR_Box) (&make__module_target____vpti_pred_8__plain_libs__globals__type_ctor_info_globals_0__plain_make__dependencies__type_ctor_info_module_index_0__plain_bool__type_ctor_info_bool_0__plain_sparse_bitset__ti_sparse_bitset_1make__dependencies__type_ctor_info_dependency_file_index_0__plain_make__type_ctor_info_make_info_0__plain_make__type_ctor_info_make_info_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&make__dependencies__make__dependencies__type_ctor_info_module_index_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&make__module_target__sparse_bitset__pti_sparse_bitset_1__plain_make__dependencies__type_ctor_info_dependency_file_index_0)),
    ((MR_Box) (&make__module_target__sparse_bitset__pti_sparse_bitset_1__plain_make__dependencies__type_ctor_info_dependency_file_index_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};


static /* final */ const struct make__module_target__vector_common_type_7_0_s make__module_target_vector_common_7[16] = {
  /* row 0 */   {     (MR_Integer) 0 },
  /* row 1 */   {     (MR_Integer) 0 },
  /* row 2 */   {     (MR_Integer) 0 },
  /* row 3 */   {     (MR_Integer) 0 },
  /* row 4 */   {     (MR_Integer) 1 },
  /* row 5 */   {     (MR_Integer) 1 },
  /* row 6 */   {     (MR_Integer) 1 },
  /* row 7 */   {     (MR_Integer) 1 },
  /* row 8 */   {     (MR_Integer) 1 },
  /* row 9 */   {     (MR_Integer) 1 },
  /* row 10 */   {     (MR_Integer) 1 },
  /* row 11 */   {     (MR_Integer) 0 },
  /* row 12 */   {     (MR_Integer) 1 },
  /* row 13 */   {     (MR_Integer) 1 },
  /* row 14 */   {     (MR_Integer) 1 },
  /* row 15 */   {     (MR_Integer) 0 },
};


#include "dir.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "version_array.mh"
#include "libs.process_util.mh"
#include "make.util.mh"
#include "mdbcomp.rtti_access.mh"



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

static const MR_FA_PseudoTypeInfo_Struct1 make__module_target__list__pti_list_1__plain_make__type_ctor_info_target_file_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&make__make__type_ctor_info_target_file_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 make__module_target__maybe__pti_maybe_1__plain_builtin__type_ctor_info_string_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
  }
};

static const MR_FA_TypeInfo_Struct1 make__module_target__list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
  }
};

static const MR_VA_PseudoTypeInfo_Struct8 make__module_target____vpti_pred_8__plain_libs__globals__type_ctor_info_globals_0__plain_list__ti_list_1builtin__type_ctor_info_string_0__plain_io__type_ctor_info_output_stream_0__plain_bool__type_ctor_info_bool_0__plain_make__type_ctor_info_make_info_0__plain_make__type_ctor_info_make_info_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 8,
  {
    (MR_PseudoTypeInfo) (&libs__globals__libs__globals__type_ctor_info_globals_0),
    (MR_PseudoTypeInfo) (&make__module_target__list__ti_list_1builtin__type_ctor_info_string_0),
    (MR_PseudoTypeInfo) (&mercury__io__io__type_ctor_info_output_stream_0),
    (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0),
    (MR_PseudoTypeInfo) (&make__make__type_ctor_info_make_info_0),
    (MR_PseudoTypeInfo) (&make__make__type_ctor_info_make_info_0),
    (MR_PseudoTypeInfo) (&mercury__io__io__type_ctor_info_state_0),
    (MR_PseudoTypeInfo) (&mercury__io__io__type_ctor_info_state_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 make__module_target__maybe__pti_maybe_1__plain_parse_tree__module_imports__type_ctor_info_module_and_imports_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_module_and_imports_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 make__module_target__list__pti_list_1__plain_make__module_target__type_ctor_info_foreign_code_file_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&make__module_target__make__module_target__type_ctor_info_foreign_code_file_0)
  }
};

static const MR_FA_TypeInfo_Struct1 make__module_target__sparse_bitset__ti_sparse_bitset_1make__dependencies__type_ctor_info_dependency_file_index_0 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  {
    (MR_TypeInfo) (&make__dependencies__make__dependencies__type_ctor_info_dependency_file_index_0)
  }
};

static const MR_VA_PseudoTypeInfo_Struct8 make__module_target____vpti_pred_8__plain_libs__globals__type_ctor_info_globals_0__plain_make__dependencies__type_ctor_info_module_index_0__plain_bool__type_ctor_info_bool_0__plain_sparse_bitset__ti_sparse_bitset_1make__dependencies__type_ctor_info_dependency_file_index_0__plain_make__type_ctor_info_make_info_0__plain_make__type_ctor_info_make_info_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 8,
  {
    (MR_PseudoTypeInfo) (&libs__globals__libs__globals__type_ctor_info_globals_0),
    (MR_PseudoTypeInfo) (&make__dependencies__make__dependencies__type_ctor_info_module_index_0),
    (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0),
    (MR_PseudoTypeInfo) (&make__module_target__sparse_bitset__ti_sparse_bitset_1make__dependencies__type_ctor_info_dependency_file_index_0),
    (MR_PseudoTypeInfo) (&make__make__type_ctor_info_make_info_0),
    (MR_PseudoTypeInfo) (&make__make__type_ctor_info_make_info_0),
    (MR_PseudoTypeInfo) (&mercury__io__io__type_ctor_info_state_0),
    (MR_PseudoTypeInfo) (&mercury__io__io__type_ctor_info_state_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 make__module_target__sparse_bitset__pti_sparse_bitset_1__plain_make__dependencies__type_ctor_info_dependency_file_index_0 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  {
    (MR_PseudoTypeInfo) (&make__dependencies__make__dependencies__type_ctor_info_dependency_file_index_0)
  }
};

static const MR_FA_TypeInfo_Struct2 make__module_target__pair__ti_pair_2make__type_ctor_info_compilation_task_type_0list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) (&make__make__type_ctor_info_compilation_task_type_0),
    (MR_TypeInfo) (&make__module_target__list__ti_list_1builtin__type_ctor_info_string_0)
  }
};

const MR_TypeCtorInfo_Struct make__module_target__make__module_target__type_ctor_info_compilation_task_result_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (make__module_target____Unify____compilation_task_result_0_0_10001)),
  ((MR_Box) (make__module_target____Compare____compilation_task_result_0_0_10001)),
  (MR_String) "make.module_target",
  (MR_String) "compilation_task_result",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&make__module_target__pair__ti_pair_2make__type_ctor_info_compilation_task_type_0list__ti_list_1builtin__type_ctor_info_string_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL
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
    INT8_C(-1)
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
  UINT8_C(17),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (make__module_target____Unify____foreign_code_file_0_0_10001)),
  ((MR_Box) (make__module_target____Compare____foreign_code_file_0_0_10001)),
  (MR_String) "make.module_target",
  (MR_String) "foreign_code_file",
  {     make__module_target__make__module_target__du_name_ordered_foreign_code_file_0 },
  {     make__module_target__make__module_target__du_ptag_ordered_foreign_code_file_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  make__module_target__make__module_target__functor_number_map_foreign_code_file_0
};

static MR_String MR_CALL 
make__module_target__IntroducedFrom__func__touched_files_process_module__981__1_1_f_0(
  MR_Word LambdaHeadVar__1_64)
{
  {
    MR_String LambdaHeadVar__2_65 = ((MR_String) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_64, (MR_Integer) 1))));

    return LambdaHeadVar__2_65;
  }
}

static MR_bool MR_CALL 
make__module_target__IntroducedFrom__pred__touched_files_process_module__959__1_2_p_0(
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
make__module_target__IntroducedFrom__pred__delete_timestamp__814__1_3_p_0(
  MR_String TouchedFile_6)
{
  {
    mercury__io__write_string_3_p_0((MR_String) "Deleting timestamp for ");
    mercury__io__write_string_3_p_0(TouchedFile_6);
    mercury__io__nl_2_p_0();
  }
}

static void MR_CALL 
make__module_target__IntroducedFrom__pred__build_target__394__1_8_p_0_2(
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
make__module_target__IntroducedFrom__pred__build_target__394__1_8_p_0_1(
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
make__module_target__IntroducedFrom__pred__build_target__394__1_8_p_0(
  MR_Word Globals_13,
  MR_Word TouchedTargetFiles_17,
  MR_Word TouchedFiles_18,
  MR_Word MaybeArgFileName_31,
  MR_Word LambdaHeadVar__1_59,
  MR_Word * LambdaHeadVar__2_60)
{
  {
    MR_Word Var_67;
    MR_Word STATE_VARIABLE_MakeInfo_68_68;
    MR_Word Var_71;
    MR_Box conv2_STATE_VARIABLE_MakeInfo_68_68;
    MR_Box conv1_STATE_VARIABLE_IO_69_69;
    MR_Box conv5_LambdaHeadVar__2_60;
    MR_Box conv4_STATE_VARIABLE_IO_73_73;

    {
      Var_67 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_67, 0) = ((MR_Box) (&make__module_target_scalar_common_4[6]));
      MR_hl_field(MR_mktag(0), Var_67, 1) = ((MR_Box) (make__module_target__IntroducedFrom__pred__build_target__394__1_8_p_0_1));
      MR_hl_field(MR_mktag(0), Var_67, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_67, 3) = ((MR_Box) (Globals_13));
      MR_hl_field(MR_mktag(0), Var_67, 4) = ((MR_Box) ((MR_Integer) 61));
    }
    mercury__list__foldl2_6_p_2((MR_Word) (&make__make__type_ctor_info_target_file_0), (MR_Word) (&make__make__type_ctor_info_make_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_67, TouchedTargetFiles_17, ((MR_Box) (LambdaHeadVar__1_59)), &conv2_STATE_VARIABLE_MakeInfo_68_68, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_69_69);
    STATE_VARIABLE_MakeInfo_68_68 = ((MR_Word) (conv2_STATE_VARIABLE_MakeInfo_68_68));
    {
      Var_71 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_71, 0) = ((MR_Box) (&make__module_target_scalar_common_4[7]));
      MR_hl_field(MR_mktag(0), Var_71, 1) = ((MR_Box) (make__module_target__IntroducedFrom__pred__build_target__394__1_8_p_0_2));
      MR_hl_field(MR_mktag(0), Var_71, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_71, 3) = ((MR_Box) (Globals_13));
      MR_hl_field(MR_mktag(0), Var_71, 4) = ((MR_Box) ((MR_Integer) 61));
    }
    mercury__list__foldl2_6_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__make__type_ctor_info_make_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_71, TouchedFiles_18, ((MR_Box) (STATE_VARIABLE_MakeInfo_68_68)), &conv5_LambdaHeadVar__2_60, ((MR_Box) ((MR_Integer) 0)), &conv4_STATE_VARIABLE_IO_73_73);
    *LambdaHeadVar__2_60 = ((MR_Word) (conv5_LambdaHeadVar__2_60));
    if (!((MaybeArgFileName_31 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_String ArgFileName2_36 = ((MR_String) ((MR_hl_field(MR_mktag(1), MaybeArgFileName_31, (MR_Integer) 0))));
      MR_Word Var_37;

      mercury__io__remove_file_4_p_0(ArgFileName2_36, &Var_37);
    }
  }
}

static void MR_CALL 
make__module_target__IntroducedFrom__pred__make_module_target_file_extra_options__207__1_6_p_0(
  MR_Word Globals_10,
  MR_Word TargetFile_11,
  MR_Word DepFiles0_36,
  MR_Word STATE_VARIABLE_Info_75_75)
{
  {
    MR_Word PlainSet_41;
    MR_Word Var_89;

    make__util__make_write_target_file_4_p_0(Globals_10, TargetFile_11);
    mercury__io__write_string_3_p_0((MR_String) ": dependencies:\n");
    make__dependencies__dependency_file_index_set_to_plain_set_3_p_0(STATE_VARIABLE_Info_75_75, DepFiles0_36, &PlainSet_41);
    Var_89 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&make__dependencies__make__dependencies__type_ctor_info_dependency_file_0), PlainSet_41);
    make__util__make_write_dependency_file_list_4_p_0(Globals_10, Var_89);
  }
}

static void MR_CALL 
make__module_target__IntroducedFrom__pred__make_module_target_file_extra_options__187__1_10_p_0(
  MR_Word HeadVar__1_77,
  MR_Word HeadVar__2_223,
  MR_Word HeadVar__3_224,
  MR_Word * HeadVar__4_225,
  MR_Word HeadVar__5_226,
  MR_Word * HeadVar__6_227,
  MR_Word HeadVar__7_228,
  MR_Word * HeadVar__8_229)
{
  {
    make__dependencies__union_deps_10_p_0((MR_Word) (&make__dependencies__make__dependencies__type_ctor_info_dependency_file_index_0), HeadVar__1_77, HeadVar__2_223, HeadVar__3_224, HeadVar__4_225, HeadVar__5_226, HeadVar__6_227, HeadVar__7_228, HeadVar__8_229);
  }
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
make__module_target____Compare____compilation_task_result_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&make__module_target_scalar_common_2[3]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

static MR_bool MR_CALL 
make__module_target____Unify____compilation_task_result_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&make__module_target_scalar_common_2[3]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

static void MR_CALL 
make__module_target__get_fact_table_foreign_code_file_7_p_0(
  MR_Word Globals_8,
  MR_String ObjExt_9,
  MR_Word ModuleName_10,
  MR_String FactTableFile_11,
  MR_Word * FactTableForeignFile_12)
{
  {
    MR_String FactTableCFile_14;
    MR_String FactTableObjFile_15;

    parse_tree__file_names__fact_table_file_name_8_p_0(Globals_8, ModuleName_10, FactTableFile_11, (MR_String) ".c", (MR_Integer) 1, &FactTableCFile_14);
    parse_tree__file_names__fact_table_file_name_8_p_0(Globals_8, ModuleName_10, FactTableFile_11, ObjExt_9, (MR_Integer) 1, &FactTableObjFile_15);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      *FactTableForeignFile_12 = base;
      MR_hl_field(MR_mktag(0), base, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (FactTableCFile_14));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (FactTableObjFile_15));
    }
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
    MR_String TimestampExt_13;

    succeeded = make__util__timestamp_extension_2_p_0(TargetType_12, &TimestampExt_13);
    if (succeeded)
    {
      MR_String TimestampFile_14;

      parse_tree__file_names__module_name_to_file_name_7_p_0(Globals_7, (MR_Integer) 1, TimestampExt_13, TargetModuleName_11, &TimestampFile_14);
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

    make__module_target__IntroducedFrom__pred__delete_timestamp__814__1_3_p_0(((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))));
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
      MR_hl_field(MR_mktag(0), Var_12, 0) = ((MR_Box) (&make__module_target_scalar_common_6[1]));
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
  MR_Word STATE_VARIABLE_Info_0_9,
  MR_Word * STATE_VARIABLE_Info_10)
{
  {
    MR_Word Dep_8;
    MR_Word Var_12;
    MR_Word Var_13;
    MR_Word Var_33;
    MR_Word Var_34;
    MR_Word Var_35;
    MR_Word Var_36;
    MR_Word Var_37;
    MR_Word Var_38;
    MR_Word Var_39;
    MR_Word Var_40;
    MR_Word Var_42;
    MR_Word Var_43;
    MR_Word Var_44;
    MR_Word Var_45;
    MR_Word Var_48;
    MR_Word Var_49;
    MR_Word Var_50;
    MR_Integer Var_51;
    MR_Word Var_52;
    MR_Unsigned packed_word_1;

    {
      Dep_8 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Dep_8, 0) = ((MR_Box) (TargetFile_6));
    }
    Var_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_9, (MR_Integer) 8))));
    Var_13 = mercury__version_hash_table__f_101_108_101_109_32_58_61_3_f_0((MR_Word) (&make__dependencies__make__dependencies__type_ctor_info_dependency_file_0), (MR_Word) (&make__make__type_ctor_info_dependency_status_0), ((MR_Box) (Dep_8)), Var_12, ((MR_Box) (TargetStatus_5)));
    Var_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_9, (MR_Integer) 0))));
    Var_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_9, (MR_Integer) 1))));
    Var_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_9, (MR_Integer) 2))));
    Var_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_9, (MR_Integer) 3))));
    Var_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_9, (MR_Integer) 4))));
    Var_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_9, (MR_Integer) 5))));
    Var_39 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_9, (MR_Integer) 6))));
    Var_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_9, (MR_Integer) 7))));
    Var_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_9, (MR_Integer) 9))));
    Var_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_9, (MR_Integer) 10))));
    Var_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_9, (MR_Integer) 11))));
    Var_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_9, (MR_Integer) 12))));
    packed_word_1 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_9, (MR_Integer) 13)));
    Var_48 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_9, (MR_Integer) 14))));
    Var_49 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_9, (MR_Integer) 15))));
    Var_50 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_9, (MR_Integer) 16))));
    Var_51 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_9, (MR_Integer) 17))));
    Var_52 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_9, (MR_Integer) 18))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (19 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Info_10 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_33));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_34));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_35));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_36));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_37));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_38));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_39));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_40));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_13));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_42));
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (Var_43));
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (Var_44));
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (Var_45));
      MR_hl_field(MR_mktag(0), base, 13) = (MR_Box) (packed_word_1);
      MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (Var_48));
      MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (Var_49));
      MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (Var_50));
      MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (Var_51));
      MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (Var_52));
    }
  }
}

static void MR_CALL 
make__module_target__invoke_mmc_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    mercury__io__write_string_3_p_0(((MR_String) (wrapper_arg_1)));
  }
}

static MR_Box MR_CALL 
make__module_target__invoke_mmc_7_p_0_1(
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
make__module_target__invoke_mmc_7_p_0(
  MR_Word Globals_8,
  MR_Word ErrorStream_9,
  MR_Word MaybeArgFileName_10,
  MR_Word Args_11,
  MR_Word * Succeeded_12)
{
  {
    MR_bool succeeded;
    MR_String ProgName_14;
    MR_String MercuryCompiler_16;
    MR_Word QuotedArgs_17;
    MR_String ArgFileName_18;
    MR_Word ArgFileOpenRes_19;
    MR_Word Var_25;

    mercury__io__progname_4_p_0((MR_String) "", &ProgName_14);
    succeeded = (strcmp(ProgName_14, (MR_String) "") == 0);
    if (!(succeeded))
      succeeded = mercury__builtin__semidet_fail_0_p_0();
    if (succeeded)
    {
      MR_Word MaybeMercuryCompiler_15;

      mercury__io__get_environment_var_4_p_0((MR_String) "MERCURY_COMPILER", &MaybeMercuryCompiler_15);
      if ((MaybeMercuryCompiler_15 == (MR_Word) ((MR_Unsigned) 0U)))
        MercuryCompiler_16 = (MR_String) "mmc";
      else
        MercuryCompiler_16 = ((MR_String) ((MR_hl_field(MR_mktag(1), MaybeMercuryCompiler_15, (MR_Integer) 0))));
    }
    else
      MercuryCompiler_16 = ProgName_14;
    QuotedArgs_17 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__module_target_scalar_common_2[11]), Args_11);
    if ((MaybeArgFileName_10 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140make.module_target.invoke_mmc\'/7", (MR_String) "argument file not created");
        return;
      }
    }
    else
      ArgFileName_18 = ((MR_String) ((MR_hl_field(MR_mktag(1), MaybeArgFileName_10, (MR_Integer) 0))));
    mercury__io__open_output_4_p_0(ArgFileName_18, &ArgFileOpenRes_19);
    if (((MR_tag((MR_Word) ArgFileOpenRes_19)) == (MR_Integer) 1))
    {
      MR_Word Error_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgFileOpenRes_19, (MR_Integer) 0))));
      MR_String ErrorMsg_24;

      *Succeeded_12 = (MR_Integer) 0;
      mercury__io__error_message_2_p_0(Error_23, &ErrorMsg_24);
      mercury__io__write_string_3_p_0((MR_String) "Error opening \140");
      mercury__io__write_string_3_p_0(ArgFileName_18);
      mercury__io__write_string_3_p_0((MR_String) "\' for output: ");
      mercury__io__write_string_3_p_0(ErrorMsg_24);
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
    else
    {
      MR_Word ArgFileStream_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgFileOpenRes_19, (MR_Integer) 0))));
      MR_String Command_21;
      MR_Word Var_51;
      MR_String Var_52;
      MR_Word Var_53;
      MR_Word Var_55;
      MR_String Var_56;

      mercury__io__write_string_4_p_0(ArgFileStream_20, (MR_String) "MCFLAGS = ");
      mercury__io__write_list_6_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ArgFileStream_20, QuotedArgs_17, (MR_String) " ", (MR_Word) (&make__module_target_scalar_common_2[12]));
      mercury__io__nl_3_p_0(ArgFileStream_20);
      mercury__io__close_output_3_p_0(ArgFileStream_20);
      Var_52 = libs__options__quote_arg_1_f_0(MercuryCompiler_16);
      Var_56 = libs__options__quote_arg_1_f_0(ArgFileName_18);
      {
        Var_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_55, 0) = ((MR_Box) (Var_56));
        MR_hl_field(MR_mktag(1), Var_55, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_53, 0) = ((MR_Box) ((MR_String) "--arg-file"));
        MR_hl_field(MR_mktag(1), Var_53, 1) = ((MR_Box) (Var_55));
      }
      {
        Var_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_51, 0) = ((MR_Box) (Var_52));
        MR_hl_field(MR_mktag(1), Var_51, 1) = ((MR_Box) (Var_53));
      }
      Command_21 = mercury__string__join_list_2_f_0((MR_String) " ", Var_51);
      parse_tree__module_cmds__invoke_system_command_7_p_0(Globals_8, ErrorStream_9, (MR_Integer) 0, Command_21, Succeeded_12);
    }
    mercury__io__remove_file_4_p_0(ArgFileName_18, &Var_25);
  }
}

static void MR_CALL 
make__module_target__compile_foreign_code_file_8_p_0(
  MR_Word Globals_9,
  MR_Word ErrorStream_10,
  MR_Word PIC_11,
  MR_Word Imports_12,
  MR_Word ForeignCodeFile_13,
  MR_Word * Succeeded_14)
{
  {
    MR_String Var_36 = ((MR_String) ((MR_hl_field(MR_mktag(0), ForeignCodeFile_13, (MR_Integer) 2))));
    MR_String Var_37 = ((MR_String) ((MR_hl_field(MR_mktag(0), ForeignCodeFile_13, (MR_Integer) 1))));
    MR_Word Var_38 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ForeignCodeFile_13, (MR_Integer) 0))) & (MR_Integer) 3);

    switch (Var_38) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        backend_libs__compile_target_code__do_compile_c_file_8_p_0(Globals_9, ErrorStream_10, PIC_11, Var_37, Var_36, Succeeded_14);
        break;
      case (MR_Integer) 1:
        backend_libs__compile_target_code__compile_csharp_file_8_p_0(Globals_9, ErrorStream_10, Imports_12, Var_37, Var_36, Succeeded_14);
        break;
      case (MR_Integer) 3:
        backend_libs__compile_target_code__compile_erlang_file_6_p_0(Globals_9, ErrorStream_10, Var_37, Succeeded_14);
        break;
      case (MR_Integer) 2:
        {
          MR_Word Var_31;

          {
            Var_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_31, 0) = ((MR_Box) (Var_37));
            MR_hl_field(MR_mktag(1), Var_31, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          backend_libs__compile_target_code__compile_java_files_6_p_0(Globals_9, ErrorStream_10, Var_31, Succeeded_14);
        }
        break;
    }
  }
}

static void MR_CALL 
make__module_target__build_object_code_9_p_0(
  MR_Word Globals_10,
  MR_Word ModuleName_11,
  MR_Word Target_12,
  MR_Word PIC_13,
  MR_Word ErrorStream_14,
  MR_Word _Imports_15,
  MR_Word * Succeeded_16)
{
  make__module_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_111_98_106_101_99_116_95_99_111_100_101_95_95_91_54_93_95_48_9_p_0(Globals_10, ModuleName_11, Target_12, PIC_13, ErrorStream_14, Succeeded_16);
}

static void MR_CALL 
make__module_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_111_98_106_101_99_116_95_99_111_100_101_95_95_91_54_93_95_48_9_p_0(
  MR_Word Globals_10,
  MR_Word ModuleName_11,
  MR_Word Target_12,
  MR_Word PIC_13,
  MR_Word ErrorStream_14,
  MR_Word * Succeeded_16)
{
  switch (Target_12) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      backend_libs__compile_target_code__compile_c_file_7_p_0(Globals_10, ErrorStream_14, PIC_13, ModuleName_11, Succeeded_16);
      break;
    case (MR_Integer) 1:
      {
        MR_String CsharpFile_19;
        MR_Word Var_31;

        parse_tree__file_names__module_name_to_file_name_7_p_0(Globals_10, (MR_Integer) 0, (MR_String) ".cs", ModuleName_11, &CsharpFile_19);
        {
          Var_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_31, 0) = ((MR_Box) (CsharpFile_19));
          MR_hl_field(MR_mktag(1), Var_31, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        backend_libs__compile_target_code__link_8_p_0(Globals_10, ErrorStream_14, (MR_Integer) 4, ModuleName_11, Var_31, Succeeded_16);
      }
      break;
    case (MR_Integer) 3:
      {
        MR_String ErlangFile_20;

        parse_tree__file_names__module_name_to_file_name_7_p_0(Globals_10, (MR_Integer) 0, (MR_String) ".erl", ModuleName_11, &ErlangFile_20);
        backend_libs__compile_target_code__compile_erlang_file_6_p_0(Globals_10, ErrorStream_14, ErlangFile_20, Succeeded_16);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_String JavaFile_18;
        MR_Word Var_37;

        parse_tree__file_names__module_name_to_file_name_7_p_0(Globals_10, (MR_Integer) 0, (MR_String) ".java", ModuleName_11, &JavaFile_18);
        {
          Var_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_37, 0) = ((MR_Box) (JavaFile_18));
          MR_hl_field(MR_mktag(1), Var_37, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        backend_libs__compile_target_code__compile_java_files_6_p_0(Globals_10, ErrorStream_14, Var_37, Succeeded_16);
      }
      break;
  }
}

static void MR_CALL 
make__module_target__build_target_2_12_p_0_7(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv5_Succeeded_16;

    make__module_target__build_object_code_9_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 7)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 8)))), &conv5_Succeeded_16);
    *wrapper_arg_1 = ((MR_Box) (conv5_Succeeded_16));
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
    MR_Word conv4_Succeeded_12;

    make__module_target__invoke_mmc_7_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), &conv4_Succeeded_12);
    *wrapper_arg_1 = ((MR_Box) (conv4_Succeeded_12));
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
    MR_Word conv3_Succeeded_8;

    make__module_target__call_mercury_compile_main_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), &conv3_Succeeded_8);
    *wrapper_arg_1 = ((MR_Box) (conv3_Succeeded_8));
  }
}

static void MR_CALL 
make__module_target__build_target_2_12_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    mercury__io__write_string_3_p_0(((MR_String) (wrapper_arg_1)));
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
    MR_Word conv1_Succeeded_14;

    make__module_target__compile_foreign_code_file_8_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 7)))), &conv1_Succeeded_14);
    *wrapper_arg_1 = ((MR_Box) (conv1_Succeeded_14));
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
    MR_Word conv0_Succeeded_14;

    make__module_target__compile_foreign_code_file_8_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 7)))), &conv0_Succeeded_14);
    *wrapper_arg_1 = ((MR_Box) (conv0_Succeeded_14));
  }
}

static void MR_CALL 
make__module_target__build_target_2_12_p_0(
  MR_Word ModuleName_13,
  MR_Word Task_14,
  MR_Word ArgFileName_15,
  MR_Word Imports_16,
  MR_Word Globals_17,
  MR_Word AllOptionArgs_18,
  MR_Word ErrorStream_19,
  MR_Word * Succeeded_20,
  MR_Word STATE_VARIABLE_Info_0_36,
  MR_Word * STATE_VARIABLE_Info_37)
{
  {
    MR_bool succeeded;

    switch (MR_tag((MR_Word) Task_14)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word ModuleTask_23 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Task_14, (MR_Integer) 0))) & (MR_Integer) 7);
          MR_String ModuleArg_24;
          MR_Word Verbose_25;
          MR_Word OldOutputStream_27;
          MR_Word IsForkable_28;
          MR_Word Var_29;

          ModuleArg_24 = mdbcomp__sym_name__sym_name_to_string_1_f_0(ModuleName_13);
          libs__globals__lookup_bool_option_3_p_0(Globals_17, (MR_Integer) 66, &Verbose_25);
          switch (Verbose_25) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word AllArgs_26;
                MR_Word Var_49;
                MR_Word Var_53;

                {
                  Var_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_49, 0) = ((MR_Box) (ModuleArg_24));
                  MR_hl_field(MR_mktag(1), Var_49, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                AllArgs_26 = mercury__list__append_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), AllOptionArgs_18, Var_49);
                mercury__io__write_string_3_p_0((MR_String) "Invoking self \140mmc ");
                Var_53 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__module_target_scalar_common_2[9]), AllArgs_26);
                mercury__io__write_list_5_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_53, (MR_String) " ", (MR_Word) (&make__module_target_scalar_common_2[10]));
                mercury__io__write_string_3_p_0((MR_String) "\'");
                mercury__io__nl_2_p_0();
              }
              break;
          }
          mercury__io__set_output_stream_4_p_0(ErrorStream_19, &OldOutputStream_27);
          IsForkable_28 = make__module_target__forkable_module_compilation_task_type_1_f_0(ModuleTask_23);
          switch (IsForkable_28) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word Var_62;

                {
                  Var_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_62, 0) = ((MR_Box) (ModuleArg_24));
                  MR_hl_field(MR_mktag(1), Var_62, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                make__module_target__call_mercury_compile_main_5_p_0(Globals_17, Var_62, Succeeded_20);
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word Var_65;
                MR_Word Var_66;
                MR_Word Var_68;
                MR_Word Var_70;

                {
                  Var_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_68, 0) = ((MR_Box) (ModuleArg_24));
                  MR_hl_field(MR_mktag(1), Var_68, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  Var_65 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_65, 0) = ((MR_Box) (&make__module_target_scalar_common_9[1]));
                  MR_hl_field(MR_mktag(0), Var_65, 1) = ((MR_Box) (make__module_target__build_target_2_12_p_0_5));
                  MR_hl_field(MR_mktag(0), Var_65, 2) = ((MR_Box) ((MR_Integer) 2));
                  MR_hl_field(MR_mktag(0), Var_65, 3) = ((MR_Box) (Globals_17));
                  MR_hl_field(MR_mktag(0), Var_65, 4) = ((MR_Box) (Var_68));
                }
                Var_70 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), AllOptionArgs_18, Var_68);
                {
                  Var_66 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_66, 0) = ((MR_Box) (&make__module_target_scalar_common_4[5]));
                  MR_hl_field(MR_mktag(0), Var_66, 1) = ((MR_Box) (make__module_target__build_target_2_12_p_0_6));
                  MR_hl_field(MR_mktag(0), Var_66, 2) = ((MR_Box) ((MR_Integer) 4));
                  MR_hl_field(MR_mktag(0), Var_66, 3) = ((MR_Box) (Globals_17));
                  MR_hl_field(MR_mktag(0), Var_66, 4) = ((MR_Box) (ErrorStream_19));
                  MR_hl_field(MR_mktag(0), Var_66, 5) = ((MR_Box) (ArgFileName_15));
                  MR_hl_field(MR_mktag(0), Var_66, 6) = ((MR_Box) (Var_70));
                }
                libs__process_util__call_in_forked_process_with_backup_5_p_0(Var_65, Var_66, Succeeded_20);
              }
              break;
          }
          mercury__io__set_output_stream_4_p_0(OldOutputStream_27, &Var_29);
          switch (ModuleTask_23) {
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
            parse_tree__module_cmds__touch_interface_datestamp_5_p_0(Globals_17, ModuleName_13, (MR_String) ".err_date");
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word PIC_30 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), Task_14, (MR_Integer) 0))) & (MR_Integer) 1);
          MR_Word CompilationTarget_31;
          MR_Word Var_46;

          libs__globals__get_target_2_p_0(Globals_17, &CompilationTarget_31);
          {
            Var_46 = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_46, 0) = ((MR_Box) (&make__module_target_scalar_common_11[1]));
            MR_hl_field(MR_mktag(0), Var_46, 1) = ((MR_Box) (make__module_target__build_target_2_12_p_0_7));
            MR_hl_field(MR_mktag(0), Var_46, 2) = ((MR_Box) ((MR_Integer) 6));
            MR_hl_field(MR_mktag(0), Var_46, 3) = ((MR_Box) (Globals_17));
            MR_hl_field(MR_mktag(0), Var_46, 4) = ((MR_Box) (ModuleName_13));
            MR_hl_field(MR_mktag(0), Var_46, 5) = ((MR_Box) (CompilationTarget_31));
            MR_hl_field(MR_mktag(0), Var_46, 6) = ((MR_Box) (PIC_30));
            MR_hl_field(MR_mktag(0), Var_46, 7) = ((MR_Box) (ErrorStream_19));
            MR_hl_field(MR_mktag(0), Var_46, 8) = ((MR_Box) (Imports_16));
          }
          libs__process_util__call_in_forked_process_4_p_0(Var_46, Succeeded_20);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Lang_32 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), Task_14, (MR_Integer) 0))) & (MR_Integer) 3);
          MR_Word ForeignCodeFile_33;
          MR_Word Var_44;
          MR_Word PIC_76 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(2), Task_14, (MR_Integer) 0))) >> 2)) & (MR_Integer) 1);

          make__module_target__get_foreign_code_file_7_p_0(Globals_17, ModuleName_13, PIC_76, Lang_32, &ForeignCodeFile_33);
          {
            Var_44 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_44, 0) = ((MR_Box) (&make__module_target_scalar_common_5[3]));
            MR_hl_field(MR_mktag(0), Var_44, 1) = ((MR_Box) (make__module_target__build_target_2_12_p_0_2));
            MR_hl_field(MR_mktag(0), Var_44, 2) = ((MR_Box) ((MR_Integer) 5));
            MR_hl_field(MR_mktag(0), Var_44, 3) = ((MR_Box) (Globals_17));
            MR_hl_field(MR_mktag(0), Var_44, 4) = ((MR_Box) (ErrorStream_19));
            MR_hl_field(MR_mktag(0), Var_44, 5) = ((MR_Box) (PIC_76));
            MR_hl_field(MR_mktag(0), Var_44, 6) = ((MR_Box) (Imports_16));
            MR_hl_field(MR_mktag(0), Var_44, 7) = ((MR_Box) (ForeignCodeFile_33));
          }
          libs__process_util__call_in_forked_process_4_p_0(Var_44, Succeeded_20);
        }
        break;
      case (MR_Integer) 3:
        {
          MR_String FactTableFile_34 = ((MR_String) ((MR_hl_field(MR_mktag(3), Task_14, (MR_Integer) 1))));
          MR_Word FactTableForeignCode_35;
          MR_Word Var_41;
          MR_Word PIC_77 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Task_14, (MR_Integer) 0))) & (MR_Integer) 1);

          make__module_target__fact_table_foreign_code_file_7_p_0(Globals_17, ModuleName_13, PIC_77, FactTableFile_34, &FactTableForeignCode_35);
          {
            Var_41 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_41, 0) = ((MR_Box) (&make__module_target_scalar_common_5[3]));
            MR_hl_field(MR_mktag(0), Var_41, 1) = ((MR_Box) (make__module_target__build_target_2_12_p_0_1));
            MR_hl_field(MR_mktag(0), Var_41, 2) = ((MR_Box) ((MR_Integer) 5));
            MR_hl_field(MR_mktag(0), Var_41, 3) = ((MR_Box) (Globals_17));
            MR_hl_field(MR_mktag(0), Var_41, 4) = ((MR_Box) (ErrorStream_19));
            MR_hl_field(MR_mktag(0), Var_41, 5) = ((MR_Box) (PIC_77));
            MR_hl_field(MR_mktag(0), Var_41, 6) = ((MR_Box) (Imports_16));
            MR_hl_field(MR_mktag(0), Var_41, 7) = ((MR_Box) (FactTableForeignCode_35));
          }
          libs__process_util__call_in_forked_process_4_p_0(Var_41, Succeeded_20);
        }
        break;
    }
    *STATE_VARIABLE_Info_37 = STATE_VARIABLE_Info_0_36;
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

static void MR_CALL 
make__module_target__fact_table_foreign_code_file_7_p_0(
  MR_Word Globals_8,
  MR_Word ModuleName_9,
  MR_Word PIC_10,
  MR_String FactTableName_11,
  MR_Word * ForeignCodeFile_12)
{
  {
    MR_String ObjExt_14;
    MR_String CFile_15;
    MR_String ObjFile_16;
    MR_Word CompilationTarget_28;

    libs__globals__get_target_2_p_0(Globals_8, &CompilationTarget_28);
    switch (CompilationTarget_28) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        backend_libs__compile_target_code__maybe_pic_object_file_extension_3_p_0(Globals_8, PIC_10, &ObjExt_14);
        break;
      case (MR_Integer) 1:
        {
          {
            mercury__require__sorry_2_p_0((MR_String) "function \140make.module_target.get_object_extension\'/2", (MR_String) "object extension for csharp");
            return;
          }
        }
        break;
      case (MR_Integer) 3:
        {
          {
            mercury__require__sorry_2_p_0((MR_String) "function \140make.module_target.get_object_extension\'/2", (MR_String) "mmc --make NYI and target erlang");
            return;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          {
            mercury__require__sorry_2_p_0((MR_String) "function \140make.module_target.get_object_extension\'/2", (MR_String) "object extension for java");
            return;
          }
        }
        break;
    }
    parse_tree__file_names__fact_table_file_name_8_p_0(Globals_8, ModuleName_9, FactTableName_11, (MR_String) ".c", (MR_Integer) 0, &CFile_15);
    parse_tree__file_names__fact_table_file_name_8_p_0(Globals_8, ModuleName_9, FactTableName_11, ObjExt_14, (MR_Integer) 0, &ObjFile_16);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      *ForeignCodeFile_12 = base;
      MR_hl_field(MR_mktag(0), base, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (CFile_15));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ObjFile_16));
    }
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
    MR_String SrcExt_17;
    MR_String ObjExt_18;
    MR_String SrcFileName_19;
    MR_String ObjFileName_20;
    MR_Word CompilationTarget_32;
    MR_Word ForeignModName0_14;
    MR_String SrcExt0_15;

    succeeded = parse_tree__prog_foreign__foreign_language_module_name_2_f_0(ModuleName_9, Lang_11, &ForeignModName0_14);
    if (succeeded)
      succeeded = parse_tree__prog_foreign__foreign_language_file_extension_1_f_0(Lang_11, &SrcExt0_15);
    if (succeeded)
    {
      ForeignModName_16 = ForeignModName0_14;
      SrcExt_17 = SrcExt0_15;
    }
    else
    {
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140make.module_target.get_foreign_code_file\'/7", (MR_String) "unsupported foreign language");
        return;
      }
    }
    libs__globals__get_target_2_p_0(Globals_8, &CompilationTarget_32);
    switch (CompilationTarget_32) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        backend_libs__compile_target_code__maybe_pic_object_file_extension_3_p_0(Globals_8, PIC_10, &ObjExt_18);
        break;
      case (MR_Integer) 1:
        {
          {
            mercury__require__sorry_2_p_0((MR_String) "function \140make.module_target.get_object_extension\'/2", (MR_String) "object extension for csharp");
            return;
          }
        }
        break;
      case (MR_Integer) 3:
        {
          {
            mercury__require__sorry_2_p_0((MR_String) "function \140make.module_target.get_object_extension\'/2", (MR_String) "mmc --make NYI and target erlang");
            return;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          {
            mercury__require__sorry_2_p_0((MR_String) "function \140make.module_target.get_object_extension\'/2", (MR_String) "object extension for java");
            return;
          }
        }
        break;
    }
    parse_tree__file_names__module_name_to_file_name_7_p_0(Globals_8, (MR_Integer) 0, SrcExt_17, ForeignModName_16, &SrcFileName_19);
    parse_tree__file_names__module_name_to_file_name_7_p_0(Globals_8, (MR_Integer) 0, ObjExt_18, ForeignModName_16, &ObjFileName_20);
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
    MR_Word conv0_FactTableForeignFile_12;

    make__module_target__get_fact_table_foreign_code_file_7_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_String) (wrapper_arg_1)), &conv0_FactTableForeignFile_12);
    *wrapper_arg_2 = ((MR_Box) (conv0_FactTableForeignFile_12));
  }
}

void MR_CALL 
make__module_target__external_foreign_code_files_6_p_0(
  MR_Word Globals_7,
  MR_Word PIC_8,
  MR_Word ModuleAndImports_9,
  MR_Word * ForeignFiles_10)
{
  {
    MR_String ObjExt_12;
    MR_Word CompilationTarget_13;
    MR_Word ModuleName_14;

    backend_libs__compile_target_code__maybe_pic_object_file_extension_3_p_0(Globals_7, PIC_8, &ObjExt_12);
    libs__globals__get_target_2_p_0(Globals_7, &CompilationTarget_13);
    parse_tree__module_imports__module_and_imports_get_module_name_2_p_0(ModuleAndImports_9, &ModuleName_14);
    switch (CompilationTarget_13) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word FactDeps_15;
          MR_Word Var_19;
          MR_Box conv1_STATE_VARIABLE_IO_18;

          parse_tree__module_imports__module_and_imports_get_fact_table_deps_2_p_0(ModuleAndImports_9, &FactDeps_15);
          {
            Var_19 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_19, 0) = ((MR_Box) (&make__module_target_scalar_common_4[4]));
            MR_hl_field(MR_mktag(0), Var_19, 1) = ((MR_Box) (make__module_target__external_foreign_code_files_6_p_0_1));
            MR_hl_field(MR_mktag(0), Var_19, 2) = ((MR_Box) ((MR_Integer) 3));
            MR_hl_field(MR_mktag(0), Var_19, 3) = ((MR_Box) (Globals_7));
            MR_hl_field(MR_mktag(0), Var_19, 4) = ((MR_Box) (ObjExt_12));
            MR_hl_field(MR_mktag(0), Var_19, 5) = ((MR_Box) (ModuleName_14));
          }
          mercury__list__map_foldl_5_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__module_target__make__module_target__type_ctor_info_foreign_code_file_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_19, FactDeps_15, ForeignFiles_10, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_18);
        }
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 3:
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

    make__module_target__touched_files_9_p_0(Globals_9, TargetFile_10, CompilationTask_11, &TouchedTargetFiles_15, &TouchedFiles_16, STATE_VARIABLE_Info_0_17, &STATE_VARIABLE_Info_21_21);
    make__module_target__record_made_target_2_9_p_0(Globals_9, Succeeded_12, TargetFile_10, TouchedTargetFiles_15, TouchedFiles_16, STATE_VARIABLE_Info_21_21, STATE_VARIABLE_Info_18);
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
  {
    if (((MR_tag((MR_Word) DepFile_9)) == (MR_Integer) 1))
    {
      MR_Word Status_32;

      make__dependencies__dependency_status_7_p_0(Globals_8, DepFile_9, &Status_32, STATE_VARIABLE_Info_0_13, STATE_VARIABLE_Info_14);
      *Succeeded_10 = ((&make__module_target_vector_common_7[12 + Status_32]))->make__module_target__vector_common_type_7_0__vct_7_f_0;
    }
    else
    {
      MR_Word TargetFile_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DepFile_9, (MR_Integer) 0))));

      make__module_target__make_module_target_file_extra_options_8_p_0((MR_Word) ((MR_Unsigned) 0U), Globals_8, TargetFile_33, Succeeded_10, STATE_VARIABLE_Info_0_13, STATE_VARIABLE_Info_14);
    }
  }
}

static void MR_CALL 
make__module_target__make_module_target_file_extra_options_8_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv14_STATE_VARIABLE_Info_10;

    make__module_target__update_target_status_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv14_STATE_VARIABLE_Info_10);
    *wrapper_arg_3 = ((MR_Box) (conv14_STATE_VARIABLE_Info_10));
  }
}

static void MR_CALL 
make__module_target__make_module_target_file_extra_options_8_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv12_STATE_VARIABLE_Info_10;

    make__module_target__update_target_status_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv12_STATE_VARIABLE_Info_10);
    *wrapper_arg_3 = ((MR_Box) (conv12_STATE_VARIABLE_Info_10));
  }
}

static void MR_CALL 
make__module_target__make_module_target_file_extra_options_8_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv10_STATE_VARIABLE_Info_10;

    make__module_target__update_target_status_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv10_STATE_VARIABLE_Info_10);
    *wrapper_arg_3 = ((MR_Box) (conv10_STATE_VARIABLE_Info_10));
  }
}

static void MR_CALL 
make__module_target__make_module_target_file_extra_options_8_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv8_STATE_VARIABLE_Info_10;

    make__module_target__update_target_status_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv8_STATE_VARIABLE_Info_10);
    *wrapper_arg_3 = ((MR_Box) (conv8_STATE_VARIABLE_Info_10));
  }
}

static void MR_CALL 
make__module_target__make_module_target_file_extra_options_8_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;

    make__module_target__IntroducedFrom__pred__make_module_target_file_extra_options__207__1_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))));
  }
}

static void MR_CALL 
make__module_target__make_module_target_file_extra_options_8_p_0_2(
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
    MR_Word conv4_HeadVar__4_225;
    MR_Word conv3_HeadVar__6_227;
    MR_Word conv2_HeadVar__8_229;

    make__module_target__IntroducedFrom__pred__make_module_target_file_extra_options__187__1_10_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv4_HeadVar__4_225, ((MR_Word) (wrapper_arg_4)), &conv3_HeadVar__6_227, ((MR_Word) (wrapper_arg_6)), &conv2_HeadVar__8_229);
    *wrapper_arg_3 = ((MR_Box) (conv4_HeadVar__4_225));
    *wrapper_arg_5 = ((MR_Box) (conv3_HeadVar__6_227));
    *wrapper_arg_7 = ((MR_Box) (conv2_HeadVar__8_229));
  }
}

static void MR_CALL 
make__module_target__make_module_target_file_extra_options_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_Info_10;

    make__module_target__update_target_status_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_Info_10);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Info_10));
  }
}

void MR_CALL 
make__module_target__make_module_target_extra_options_8_p_0(
  MR_Word tscc_proc_1_input_1_ExtraOptions_9,
  MR_Word tscc_proc_1_input_2_Globals_10,
  MR_Word tscc_proc_1_input_3_Dep_11,
  MR_Word * tscc_output_ptr_1_Succeeded_12,
  MR_Word tscc_proc_1_input_4_STATE_VARIABLE_Info_0_19,
  MR_Word * tscc_output_ptr_2_STATE_VARIABLE_Info_20)
{
  {
    MR_Word tscc_proc_2_input_1_ExtraOptions_9;
    MR_Word tscc_proc_2_input_2_Globals_10;
    MR_Word tscc_proc_2_input_3_TargetFile_11;
    MR_Word tscc_proc_2_input_4_STATE_VARIABLE_Info_0_47;
    MR_Word tscc_output_1_Succeeded_12;
    MR_Word tscc_output_2_STATE_VARIABLE_Info_20;

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
    ;
    goto top_of_proc_1;
  top_of_proc_1:;
    {
      MR_Word ExtraOptions_9 = tscc_proc_1_input_1_ExtraOptions_9;
      MR_Word Globals_10 = tscc_proc_1_input_2_Globals_10;
      MR_Word Dep_11 = tscc_proc_1_input_3_Dep_11;
      MR_Word Succeeded_12;
      MR_Word STATE_VARIABLE_Info_0_19 = tscc_proc_1_input_4_STATE_VARIABLE_Info_0_19;
      MR_Word STATE_VARIABLE_Info_20;

      if (((MR_tag((MR_Word) Dep_11)) == (MR_Integer) 1))
      {
        MR_Word Status_17;

        make__dependencies__dependency_status_7_p_0(Globals_10, Dep_11, &Status_17, STATE_VARIABLE_Info_0_19, &STATE_VARIABLE_Info_20);
        Succeeded_12 = ((&make__module_target_vector_common_7[8 + Status_17]))->make__module_target__vector_common_type_7_0__vct_7_f_0;
      }
      else
      {
        MR_Word TargetFile_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Dep_11, (MR_Integer) 0))));
        MR_Word next_value_of_tscc_proc_2_input_1_ExtraOptions_9 = ExtraOptions_9;
        MR_Word next_value_of_tscc_proc_2_input_2_Globals_10 = Globals_10;
        MR_Word next_value_of_tscc_proc_2_input_3_TargetFile_11 = TargetFile_18;
        MR_Word next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_Info_0_47 = STATE_VARIABLE_Info_0_19;

        // direct tailcall eliminated
        ;
        tscc_proc_2_input_1_ExtraOptions_9 = next_value_of_tscc_proc_2_input_1_ExtraOptions_9;
        tscc_proc_2_input_2_Globals_10 = next_value_of_tscc_proc_2_input_2_Globals_10;
        tscc_proc_2_input_3_TargetFile_11 = next_value_of_tscc_proc_2_input_3_TargetFile_11;
        tscc_proc_2_input_4_STATE_VARIABLE_Info_0_47 = next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_Info_0_47;
        goto top_of_proc_2;
      }
      tscc_output_1_Succeeded_12 = Succeeded_12;
      tscc_output_2_STATE_VARIABLE_Info_20 = STATE_VARIABLE_Info_20;
      goto tscc_end;
    }
  top_of_proc_2:;
    {
      MR_Word ExtraOptions_9 = tscc_proc_2_input_1_ExtraOptions_9;
      MR_Word Globals_10 = tscc_proc_2_input_2_Globals_10;
      MR_Word TargetFile_11 = tscc_proc_2_input_3_TargetFile_11;
      MR_Word Succeeded_12;
      MR_Word STATE_VARIABLE_Info_0_47 = tscc_proc_2_input_4_STATE_VARIABLE_Info_0_47;
      MR_Word STATE_VARIABLE_Info_48;
      MR_bool succeeded;
      MR_Word Dep_15;
      MR_Word Status_16;
      MR_Word STATE_VARIABLE_Info_51_51;

      {
        Dep_15 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Dep_15, 0) = ((MR_Box) (TargetFile_11));
      }
      make__dependencies__dependency_status_7_p_0(Globals_10, Dep_15, &Status_16, STATE_VARIABLE_Info_0_47, &STATE_VARIABLE_Info_51_51);
      switch (Status_16) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140make.module_target.make_module_target_file_extra_options\'/8", (MR_String) "target being built, circular dependencies\?");
              return;
            }
          }
          break;
        case (MR_Integer) 3:
          {
            Succeeded_12 = (MR_Integer) 0;
            STATE_VARIABLE_Info_48 = STATE_VARIABLE_Info_51_51;
          }
          break;
        case (MR_Integer) 0:
          {
            MR_Word ModuleName_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TargetFile_11, (MR_Integer) 0))));
            MR_Word TargetType_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TargetFile_11, (MR_Integer) 1))));
            MR_Word MaybeModuleAndImports_19;
            MR_Word STATE_VARIABLE_Info_55_55;

            make__module_dep_file__get_module_dependencies_7_p_0(Globals_10, ModuleName_17, &MaybeModuleAndImports_19, STATE_VARIABLE_Info_51_51, &STATE_VARIABLE_Info_55_55);
            if ((MaybeModuleAndImports_19 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              MR_Word Var_114;
              MR_Word Var_115;
              MR_Word Var_137;
              MR_Word Var_138;
              MR_Word Var_139;
              MR_Word Var_140;
              MR_Word Var_141;
              MR_Word Var_142;
              MR_Word Var_143;
              MR_Word Var_144;
              MR_Word Var_146;
              MR_Word Var_147;
              MR_Word Var_148;
              MR_Word Var_149;
              MR_Word Var_152;
              MR_Word Var_153;
              MR_Word Var_154;
              MR_Integer Var_155;
              MR_Word Var_156;
              MR_Unsigned packed_word_1;

              Succeeded_12 = (MR_Integer) 0;
              Var_114 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_55_55, (MR_Integer) 8))));
              Var_115 = mercury__version_hash_table__f_101_108_101_109_32_58_61_3_f_0((MR_Word) (&make__dependencies__make__dependencies__type_ctor_info_dependency_file_0), (MR_Word) (&make__make__type_ctor_info_dependency_status_0), ((MR_Box) (Dep_15)), Var_114, ((MR_Box) ((MR_Integer) 3)));
              Var_137 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_55_55, (MR_Integer) 0))));
              Var_138 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_55_55, (MR_Integer) 1))));
              Var_139 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_55_55, (MR_Integer) 2))));
              Var_140 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_55_55, (MR_Integer) 3))));
              Var_141 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_55_55, (MR_Integer) 4))));
              Var_142 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_55_55, (MR_Integer) 5))));
              Var_143 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_55_55, (MR_Integer) 6))));
              Var_144 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_55_55, (MR_Integer) 7))));
              Var_146 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_55_55, (MR_Integer) 9))));
              Var_147 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_55_55, (MR_Integer) 10))));
              Var_148 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_55_55, (MR_Integer) 11))));
              Var_149 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_55_55, (MR_Integer) 12))));
              packed_word_1 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_55_55, (MR_Integer) 13)));
              Var_152 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_55_55, (MR_Integer) 14))));
              Var_153 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_55_55, (MR_Integer) 15))));
              Var_154 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_55_55, (MR_Integer) 16))));
              Var_155 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_55_55, (MR_Integer) 17))));
              Var_156 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_55_55, (MR_Integer) 18))));
              {
                STATE_VARIABLE_Info_48 = (MR_Word) MR_new_object(MR_Word, (19 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_48, 0) = ((MR_Box) (Var_137));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_48, 1) = ((MR_Box) (Var_138));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_48, 2) = ((MR_Box) (Var_139));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_48, 3) = ((MR_Box) (Var_140));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_48, 4) = ((MR_Box) (Var_141));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_48, 5) = ((MR_Box) (Var_142));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_48, 6) = ((MR_Box) (Var_143));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_48, 7) = ((MR_Box) (Var_144));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_48, 8) = ((MR_Box) (Var_115));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_48, 9) = ((MR_Box) (Var_146));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_48, 10) = ((MR_Box) (Var_147));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_48, 11) = ((MR_Box) (Var_148));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_48, 12) = ((MR_Box) (Var_149));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_48, 13) = (MR_Box) (packed_word_1);
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_48, 14) = ((MR_Box) (Var_152));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_48, 15) = ((MR_Box) (Var_153));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_48, 16) = ((MR_Box) (Var_154));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_48, 17) = ((MR_Box) (Var_155));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_48, 18) = ((MR_Box) (Var_156));
              }
            }
            else
            {
              MR_Word ModuleAndImports_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeModuleAndImports_19, (MR_Integer) 0))));
              MR_Word CompilationTask_21;
              MR_Word SourceFileModuleName_22;
              MR_Word Var_57;

              CompilationTask_21 = make__module_target__compilation_task_1_f_0(TargetType_18);
              parse_tree__module_imports__module_and_imports_get_source_file_module_name_2_p_0(ModuleAndImports_20, &SourceFileModuleName_22);
              Var_57 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CompilationTask_21, (MR_Integer) 0))));
              succeeded = ((MR_tag((MR_Word) Var_57)) == (MR_Integer) 0);
              if (succeeded)
              {
                succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(SourceFileModuleName_22, ModuleName_17);
                succeeded = !(succeeded);
              }
              if (succeeded)
              {
                MR_Word NestedTargetFile_25;
                MR_Word Var_58;
                MR_Word next_value_of_tscc_proc_1_input_1_ExtraOptions_9;
                MR_Word next_value_of_tscc_proc_1_input_2_Globals_10;
                MR_Word next_value_of_tscc_proc_1_input_3_Dep_11;
                MR_Word next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Info_0_19;

                {
                  NestedTargetFile_25 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), NestedTargetFile_25, 0) = ((MR_Box) (SourceFileModuleName_22));
                  MR_hl_field(MR_mktag(0), NestedTargetFile_25, 1) = ((MR_Box) (TargetType_18));
                }
                {
                  Var_58 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_58, 0) = ((MR_Box) (NestedTargetFile_25));
                }
                // direct tailcall eliminated
                ;
                next_value_of_tscc_proc_1_input_1_ExtraOptions_9 = ExtraOptions_9;
                next_value_of_tscc_proc_1_input_2_Globals_10 = Globals_10;
                next_value_of_tscc_proc_1_input_3_Dep_11 = Var_58;
                next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Info_0_19 = STATE_VARIABLE_Info_55_55;
                tscc_proc_1_input_1_ExtraOptions_9 = next_value_of_tscc_proc_1_input_1_ExtraOptions_9;
                tscc_proc_1_input_2_Globals_10 = next_value_of_tscc_proc_1_input_2_Globals_10;
                tscc_proc_1_input_3_Dep_11 = next_value_of_tscc_proc_1_input_3_Dep_11;
                tscc_proc_1_input_4_STATE_VARIABLE_Info_0_19 = next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Info_0_19;
                goto top_of_proc_1;
              }
              else
              {
                MR_Word CompilationTaskType_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CompilationTask_21, (MR_Integer) 0))));
                MR_Word TouchedTargetFiles_28;
                MR_Word TouchedFiles_29;
                MR_Word ModulesToCheck_33;
                MR_Word ModulesToCheckSet_34;
                MR_Word DepsSuccess_35;
                MR_Word DepFiles0_36;
                MR_Word DepFilesSet0_37;
                MR_Word DepFilesToMake_40;
                MR_Word KeepGoing_42;
                MR_Word STATE_VARIABLE_Info_61_61;
                MR_Word STATE_VARIABLE_Info_64_64;
                MR_Word STATE_VARIABLE_Info_71_71;
                MR_Word Var_72;
                MR_Word Var_73;
                MR_Word Var_74;
                MR_Word STATE_VARIABLE_Info_75_75;
                MR_Word Var_77;
                MR_Word Var_80;
                MR_Box conv1_STATE_VARIABLE_Info_64_64;
                MR_Word Var_68;
                MR_Box conv7_DepFiles0_36;
                MR_Box conv6_STATE_VARIABLE_Info_75_75;
                MR_Box conv5_STATE_VARIABLE_IO_76_76;
                MR_Word Var_247;

                make__module_target__touched_files_9_p_0(Globals_10, TargetFile_11, CompilationTaskType_26, &TouchedTargetFiles_28, &TouchedFiles_29, STATE_VARIABLE_Info_55_55, &STATE_VARIABLE_Info_61_61);
                mercury__list__foldl_4_p_0((MR_Word) (&make__make__type_ctor_info_target_file_0), (MR_Word) (&make__make__type_ctor_info_make_info_0), (MR_Word) (&make__module_target_scalar_common_14[0]), TouchedTargetFiles_28, ((MR_Box) (STATE_VARIABLE_Info_61_61)), &conv1_STATE_VARIABLE_Info_64_64);
                STATE_VARIABLE_Info_64_64 = ((MR_Word) (conv1_STATE_VARIABLE_Info_64_64));
                make__util__debug_file_msg_5_p_0(Globals_10, TargetFile_11, (MR_String) "checking dependencies");
                Var_68 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CompilationTask_21, (MR_Integer) 0))));
                succeeded = ((MR_tag((MR_Word) Var_68)) == (MR_Integer) 0);
                if (succeeded)
                {
                  {
                    MR_Word NestedChildren_32;
                    MR_Word Var_69;

                    parse_tree__module_imports__module_and_imports_get_nested_children_2_p_0(ModuleAndImports_20, &NestedChildren_32);
                    Var_69 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), NestedChildren_32);
                    {
                      ModulesToCheck_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), ModulesToCheck_33, 0) = ((MR_Box) (ModuleName_17));
                      MR_hl_field(MR_mktag(1), ModulesToCheck_33, 1) = ((MR_Box) (Var_69));
                    }
                  }
                }
                else
                {
                  {
                    ModulesToCheck_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), ModulesToCheck_33, 0) = ((MR_Box) (ModuleName_17));
                    MR_hl_field(MR_mktag(1), ModulesToCheck_33, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                }
                make__dependencies__module_names_to_index_set_4_p_0(ModulesToCheck_33, &ModulesToCheckSet_34, STATE_VARIABLE_Info_64_64, &STATE_VARIABLE_Info_71_71);
                Var_72 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_71_71, (MR_Integer) 13))) & (MR_Integer) 1);
                Var_77 = make__dependencies__target_dependencies_2_f_0(Globals_10, TargetType_18);
                {
                  Var_73 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_73, 0) = ((MR_Box) (&make__module_target_scalar_common_15[0]));
                  MR_hl_field(MR_mktag(0), Var_73, 1) = ((MR_Box) (make__module_target__make_module_target_file_extra_options_8_p_0_2));
                  MR_hl_field(MR_mktag(0), Var_73, 2) = ((MR_Box) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(0), Var_73, 3) = ((MR_Box) (Var_77));
                }
                Var_74 = mercury__sparse_bitset__init_0_f_0((MR_Word) (&make__dependencies__make__dependencies__type_ctor_info_dependency_file_index_0));
                make__dependencies__deps_set_foldl3_maybe_stop_at_error_11_p_0((MR_Word) (&make__module_target_scalar_common_1[1]), (MR_Word) (&make__make__type_ctor_info_make_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), (MR_Word) (&make__module_target_scalar_common_1[0]), Var_72, Var_73, Globals_10, ModulesToCheckSet_34, &DepsSuccess_35, ((MR_Box) (Var_74)), &conv7_DepFiles0_36, ((MR_Box) (STATE_VARIABLE_Info_71_71)), &conv6_STATE_VARIABLE_Info_75_75, ((MR_Box) ((MR_Integer) 0)), &conv5_STATE_VARIABLE_IO_76_76);
                DepFiles0_36 = ((MR_Word) (conv7_DepFiles0_36));
                STATE_VARIABLE_Info_75_75 = ((MR_Word) (conv6_STATE_VARIABLE_Info_75_75));
                make__dependencies__dependency_file_index_set_to_plain_set_3_p_0(STATE_VARIABLE_Info_75_75, DepFiles0_36, &DepFilesSet0_37);
                Var_247 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TargetFile_11, (MR_Integer) 1))));
                succeeded = make____Unify____module_target_type_0_0(TargetType_18, Var_247);
                if (succeeded)
                  succeeded = (TargetType_18 == (MR_Word) ((MR_Unsigned) 8U));
                if (succeeded)
                {
                  MR_Word PrivateInts_39;
                  MR_Word Var_79;

                  PrivateInts_39 = make__util__make_dependency_list_2_f_0(ModulesToCheck_33, (MR_Word) ((MR_Unsigned) 8U));
                  Var_79 = mercury__set__delete_list_2_f_0((MR_Word) (&make__dependencies__make__dependencies__type_ctor_info_dependency_file_0), DepFilesSet0_37, PrivateInts_39);
                  DepFilesToMake_40 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&make__dependencies__make__dependencies__type_ctor_info_dependency_file_0), Var_79);
                }
                else
                {
                  DepFilesToMake_40 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&make__dependencies__make__dependencies__type_ctor_info_dependency_file_0), DepFilesSet0_37);
                }
                {
                  Var_80 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_80, 0) = ((MR_Box) (&make__module_target_scalar_common_13[2]));
                  MR_hl_field(MR_mktag(0), Var_80, 1) = ((MR_Box) (make__module_target__make_module_target_file_extra_options_8_p_0_3));
                  MR_hl_field(MR_mktag(0), Var_80, 2) = ((MR_Box) ((MR_Integer) 4));
                  MR_hl_field(MR_mktag(0), Var_80, 3) = ((MR_Box) (Globals_10));
                  MR_hl_field(MR_mktag(0), Var_80, 4) = ((MR_Box) (TargetFile_11));
                  MR_hl_field(MR_mktag(0), Var_80, 5) = ((MR_Box) (DepFiles0_36));
                  MR_hl_field(MR_mktag(0), Var_80, 6) = ((MR_Box) (STATE_VARIABLE_Info_75_75));
                }
                make__util__debug_make_msg_4_p_0(Globals_10, Var_80);
                libs__globals__lookup_bool_option_3_p_0(Globals_10, (MR_Integer) 645, &KeepGoing_42);
                succeeded = (DepsSuccess_35 == (MR_Integer) 0);
                if (succeeded)
                  succeeded = (KeepGoing_42 == (MR_Integer) 0);
                if (succeeded)
                {
                  MR_Box conv9_STATE_VARIABLE_Info_48;

                  Succeeded_12 = (MR_Integer) 0;
                  mercury__list__foldl_4_p_0((MR_Word) (&make__make__type_ctor_info_target_file_0), (MR_Word) (&make__make__type_ctor_info_make_info_0), (MR_Word) (&make__module_target_scalar_common_14[1]), TouchedTargetFiles_28, ((MR_Box) (STATE_VARIABLE_Info_75_75)), &conv9_STATE_VARIABLE_Info_48);
                  STATE_VARIABLE_Info_48 = ((MR_Word) (conv9_STATE_VARIABLE_Info_48));
                }
                else
                {
                  MR_Word DepsResult0_44;
                  MR_Word STATE_VARIABLE_Info_92_255;

                  make__module_target__make_dependency_files_10_p_0(Globals_10, TargetFile_11, DepFilesToMake_40, TouchedTargetFiles_28, TouchedFiles_29, &DepsResult0_44, STATE_VARIABLE_Info_75_75, &STATE_VARIABLE_Info_92_255);
                  switch (DepsSuccess_35) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        MR_Box conv11_STATE_VARIABLE_Info_48;

                        Succeeded_12 = (MR_Integer) 0;
                        mercury__list__foldl_4_p_0((MR_Word) (&make__make__type_ctor_info_target_file_0), (MR_Word) (&make__make__type_ctor_info_make_info_0), (MR_Word) (&make__module_target_scalar_common_14[2]), TouchedTargetFiles_28, ((MR_Box) (STATE_VARIABLE_Info_92_255)), &conv11_STATE_VARIABLE_Info_48);
                        STATE_VARIABLE_Info_48 = ((MR_Word) (conv11_STATE_VARIABLE_Info_48));
                      }
                      break;
                    case (MR_Integer) 1:
                      switch (DepsResult0_44) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 2:
                          {
                            MR_Box conv13_STATE_VARIABLE_Info_48;

                            Succeeded_12 = (MR_Integer) 0;
                            mercury__list__foldl_4_p_0((MR_Word) (&make__make__type_ctor_info_target_file_0), (MR_Word) (&make__make__type_ctor_info_make_info_0), (MR_Word) (&make__module_target_scalar_common_14[3]), TouchedTargetFiles_28, ((MR_Box) (STATE_VARIABLE_Info_92_255)), &conv13_STATE_VARIABLE_Info_48);
                            STATE_VARIABLE_Info_48 = ((MR_Word) (conv13_STATE_VARIABLE_Info_48));
                          }
                          break;
                        case (MR_Integer) 1:
                          {
                            MR_Word Targets0_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_92_255, (MR_Integer) 16))));
                            MR_Word Targets_46;
                            MR_Word Var_104;
                            MR_Word Var_105;
                            MR_Word STATE_VARIABLE_Info_106_106;
                            MR_Word Var_176 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_92_255, (MR_Integer) 0))));
                            MR_Word Var_177 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_92_255, (MR_Integer) 1))));
                            MR_Word Var_178 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_92_255, (MR_Integer) 2))));
                            MR_Word Var_179 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_92_255, (MR_Integer) 3))));
                            MR_Word Var_180 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_92_255, (MR_Integer) 4))));
                            MR_Word Var_181 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_92_255, (MR_Integer) 5))));
                            MR_Word Var_182 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_92_255, (MR_Integer) 6))));
                            MR_Word Var_183 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_92_255, (MR_Integer) 7))));
                            MR_Word Var_184 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_92_255, (MR_Integer) 8))));
                            MR_Word Var_185 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_92_255, (MR_Integer) 9))));
                            MR_Word Var_186 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_92_255, (MR_Integer) 10))));
                            MR_Word Var_187 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_92_255, (MR_Integer) 11))));
                            MR_Word Var_188 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_92_255, (MR_Integer) 12))));
                            MR_Word Var_191 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_92_255, (MR_Integer) 14))));
                            MR_Word Var_192 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_92_255, (MR_Integer) 15))));
                            MR_Integer Var_193 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_92_255, (MR_Integer) 17))));
                            MR_Word Var_194 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_92_255, (MR_Integer) 18))));
                            MR_Unsigned packed_word_5 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_92_255, (MR_Integer) 13)));

                            {
                              Var_105 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                              MR_hl_field(MR_mktag(0), Var_105, 0) = ((MR_Box) (TargetType_18));
                            }
                            {
                              Var_104 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                              MR_hl_field(MR_mktag(0), Var_104, 0) = ((MR_Box) (ModuleName_17));
                              MR_hl_field(MR_mktag(0), Var_104, 1) = ((MR_Box) (Var_105));
                            }
                            mercury__set__delete_3_p_0((MR_Word) (&make__module_target_scalar_common_2[0]), ((MR_Box) (Var_104)), Targets0_45, &Targets_46);
                            {
                              STATE_VARIABLE_Info_106_106 = (MR_Word) MR_new_object(MR_Word, (19 * sizeof(MR_Word)), NULL, NULL);
                              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_106_106, 0) = ((MR_Box) (Var_176));
                              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_106_106, 1) = ((MR_Box) (Var_177));
                              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_106_106, 2) = ((MR_Box) (Var_178));
                              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_106_106, 3) = ((MR_Box) (Var_179));
                              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_106_106, 4) = ((MR_Box) (Var_180));
                              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_106_106, 5) = ((MR_Box) (Var_181));
                              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_106_106, 6) = ((MR_Box) (Var_182));
                              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_106_106, 7) = ((MR_Box) (Var_183));
                              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_106_106, 8) = ((MR_Box) (Var_184));
                              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_106_106, 9) = ((MR_Box) (Var_185));
                              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_106_106, 10) = ((MR_Box) (Var_186));
                              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_106_106, 11) = ((MR_Box) (Var_187));
                              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_106_106, 12) = ((MR_Box) (Var_188));
                              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_106_106, 13) = (MR_Box) (packed_word_5);
                              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_106_106, 14) = ((MR_Box) (Var_191));
                              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_106_106, 15) = ((MR_Box) (Var_192));
                              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_106_106, 16) = ((MR_Box) (Targets_46));
                              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_106_106, 17) = ((MR_Box) (Var_193));
                              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_106_106, 18) = ((MR_Box) (Var_194));
                            }
                            make__module_target__build_target_12_p_0(Globals_10, CompilationTask_21, TargetFile_11, ModuleAndImports_20, TouchedTargetFiles_28, TouchedFiles_29, ExtraOptions_9, &Succeeded_12, STATE_VARIABLE_Info_106_106, &STATE_VARIABLE_Info_48);
                          }
                          break;
                        case (MR_Integer) 0:
                          {
                            MR_Word Var_94;
                            MR_Word STATE_VARIABLE_Info_95_95;
                            MR_Word Var_97;
                            MR_Word Var_101;
                            MR_Box conv15_STATE_VARIABLE_Info_48;

                            {
                              Var_97 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                              MR_hl_field(MR_mktag(0), Var_97, 0) = ((MR_Box) (TargetType_18));
                            }
                            {
                              Var_94 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                              MR_hl_field(MR_mktag(0), Var_94, 0) = ((MR_Box) (ModuleName_17));
                              MR_hl_field(MR_mktag(0), Var_94, 1) = ((MR_Box) (Var_97));
                            }
                            make__util__maybe_warn_up_to_date_target_6_p_0(Globals_10, Var_94, STATE_VARIABLE_Info_92_255, &STATE_VARIABLE_Info_95_95);
                            make__util__debug_file_msg_5_p_0(Globals_10, TargetFile_11, (MR_String) "up to date");
                            Succeeded_12 = (MR_Integer) 1;
                            {
                              Var_101 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(1), Var_101, 0) = ((MR_Box) (TargetFile_11));
                              MR_hl_field(MR_mktag(1), Var_101, 1) = ((MR_Box) (TouchedTargetFiles_28));
                            }
                            mercury__list__foldl_4_p_0((MR_Word) (&make__make__type_ctor_info_target_file_0), (MR_Word) (&make__make__type_ctor_info_make_info_0), (MR_Word) (&make__module_target_scalar_common_14[4]), Var_101, ((MR_Box) (STATE_VARIABLE_Info_95_95)), &conv15_STATE_VARIABLE_Info_48);
                            STATE_VARIABLE_Info_48 = ((MR_Word) (conv15_STATE_VARIABLE_Info_48));
                          }
                          break;
                      }
                      break;
                  }
                }
              }
            }
          }
          break;
        case (MR_Integer) 2:
          {
            Succeeded_12 = (MR_Integer) 1;
            STATE_VARIABLE_Info_48 = STATE_VARIABLE_Info_51_51;
          }
          break;
      }
      tscc_output_1_Succeeded_12 = Succeeded_12;
      tscc_output_2_STATE_VARIABLE_Info_20 = STATE_VARIABLE_Info_48;
      goto tscc_end;
    }
  tscc_end:;
    *tscc_output_ptr_1_Succeeded_12 = tscc_output_1_Succeeded_12;
    *tscc_output_ptr_2_STATE_VARIABLE_Info_20 = tscc_output_2_STATE_VARIABLE_Info_20;
    return;
  }
}

static void MR_CALL 
make__module_target__make_module_target_file_extra_options_8_p_0(
  MR_Word tscc_proc_2_input_1_ExtraOptions_9,
  MR_Word tscc_proc_2_input_2_Globals_10,
  MR_Word tscc_proc_2_input_3_TargetFile_11,
  MR_Word * tscc_output_ptr_1_Succeeded_12,
  MR_Word tscc_proc_2_input_4_STATE_VARIABLE_Info_0_47,
  MR_Word * tscc_output_ptr_2_STATE_VARIABLE_Info_20)
{
  {
    MR_Word tscc_proc_1_input_1_ExtraOptions_9;
    MR_Word tscc_proc_1_input_2_Globals_10;
    MR_Word tscc_proc_1_input_3_Dep_11;
    MR_Word tscc_proc_1_input_4_STATE_VARIABLE_Info_0_19;
    MR_Word tscc_output_1_Succeeded_12;
    MR_Word tscc_output_2_STATE_VARIABLE_Info_20;

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
    ;
    goto top_of_proc_2;
  top_of_proc_1:;
    {
      MR_Word ExtraOptions_9 = tscc_proc_1_input_1_ExtraOptions_9;
      MR_Word Globals_10 = tscc_proc_1_input_2_Globals_10;
      MR_Word Dep_11 = tscc_proc_1_input_3_Dep_11;
      MR_Word Succeeded_12;
      MR_Word STATE_VARIABLE_Info_0_19 = tscc_proc_1_input_4_STATE_VARIABLE_Info_0_19;
      MR_Word STATE_VARIABLE_Info_20;

      if (((MR_tag((MR_Word) Dep_11)) == (MR_Integer) 1))
      {
        MR_Word Status_17;

        make__dependencies__dependency_status_7_p_0(Globals_10, Dep_11, &Status_17, STATE_VARIABLE_Info_0_19, &STATE_VARIABLE_Info_20);
        Succeeded_12 = ((&make__module_target_vector_common_7[8 + Status_17]))->make__module_target__vector_common_type_7_0__vct_7_f_0;
      }
      else
      {
        MR_Word TargetFile_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Dep_11, (MR_Integer) 0))));
        MR_Word next_value_of_tscc_proc_2_input_1_ExtraOptions_9 = ExtraOptions_9;
        MR_Word next_value_of_tscc_proc_2_input_2_Globals_10 = Globals_10;
        MR_Word next_value_of_tscc_proc_2_input_3_TargetFile_11 = TargetFile_18;
        MR_Word next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_Info_0_47 = STATE_VARIABLE_Info_0_19;

        // direct tailcall eliminated
        ;
        tscc_proc_2_input_1_ExtraOptions_9 = next_value_of_tscc_proc_2_input_1_ExtraOptions_9;
        tscc_proc_2_input_2_Globals_10 = next_value_of_tscc_proc_2_input_2_Globals_10;
        tscc_proc_2_input_3_TargetFile_11 = next_value_of_tscc_proc_2_input_3_TargetFile_11;
        tscc_proc_2_input_4_STATE_VARIABLE_Info_0_47 = next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_Info_0_47;
        goto top_of_proc_2;
      }
      tscc_output_1_Succeeded_12 = Succeeded_12;
      tscc_output_2_STATE_VARIABLE_Info_20 = STATE_VARIABLE_Info_20;
      goto tscc_end;
    }
  top_of_proc_2:;
    {
      MR_Word ExtraOptions_9 = tscc_proc_2_input_1_ExtraOptions_9;
      MR_Word Globals_10 = tscc_proc_2_input_2_Globals_10;
      MR_Word TargetFile_11 = tscc_proc_2_input_3_TargetFile_11;
      MR_Word Succeeded_12;
      MR_Word STATE_VARIABLE_Info_0_47 = tscc_proc_2_input_4_STATE_VARIABLE_Info_0_47;
      MR_Word STATE_VARIABLE_Info_48;
      MR_bool succeeded;
      MR_Word Dep_15;
      MR_Word Status_16;
      MR_Word STATE_VARIABLE_Info_51_51;

      {
        Dep_15 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Dep_15, 0) = ((MR_Box) (TargetFile_11));
      }
      make__dependencies__dependency_status_7_p_0(Globals_10, Dep_15, &Status_16, STATE_VARIABLE_Info_0_47, &STATE_VARIABLE_Info_51_51);
      switch (Status_16) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140make.module_target.make_module_target_file_extra_options\'/8", (MR_String) "target being built, circular dependencies\?");
              return;
            }
          }
          break;
        case (MR_Integer) 3:
          {
            Succeeded_12 = (MR_Integer) 0;
            STATE_VARIABLE_Info_48 = STATE_VARIABLE_Info_51_51;
          }
          break;
        case (MR_Integer) 0:
          {
            MR_Word ModuleName_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TargetFile_11, (MR_Integer) 0))));
            MR_Word TargetType_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TargetFile_11, (MR_Integer) 1))));
            MR_Word MaybeModuleAndImports_19;
            MR_Word STATE_VARIABLE_Info_55_55;

            make__module_dep_file__get_module_dependencies_7_p_0(Globals_10, ModuleName_17, &MaybeModuleAndImports_19, STATE_VARIABLE_Info_51_51, &STATE_VARIABLE_Info_55_55);
            if ((MaybeModuleAndImports_19 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              MR_Word Var_114;
              MR_Word Var_115;
              MR_Word Var_137;
              MR_Word Var_138;
              MR_Word Var_139;
              MR_Word Var_140;
              MR_Word Var_141;
              MR_Word Var_142;
              MR_Word Var_143;
              MR_Word Var_144;
              MR_Word Var_146;
              MR_Word Var_147;
              MR_Word Var_148;
              MR_Word Var_149;
              MR_Word Var_152;
              MR_Word Var_153;
              MR_Word Var_154;
              MR_Integer Var_155;
              MR_Word Var_156;
              MR_Unsigned packed_word_1;

              Succeeded_12 = (MR_Integer) 0;
              Var_114 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_55_55, (MR_Integer) 8))));
              Var_115 = mercury__version_hash_table__f_101_108_101_109_32_58_61_3_f_0((MR_Word) (&make__dependencies__make__dependencies__type_ctor_info_dependency_file_0), (MR_Word) (&make__make__type_ctor_info_dependency_status_0), ((MR_Box) (Dep_15)), Var_114, ((MR_Box) ((MR_Integer) 3)));
              Var_137 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_55_55, (MR_Integer) 0))));
              Var_138 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_55_55, (MR_Integer) 1))));
              Var_139 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_55_55, (MR_Integer) 2))));
              Var_140 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_55_55, (MR_Integer) 3))));
              Var_141 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_55_55, (MR_Integer) 4))));
              Var_142 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_55_55, (MR_Integer) 5))));
              Var_143 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_55_55, (MR_Integer) 6))));
              Var_144 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_55_55, (MR_Integer) 7))));
              Var_146 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_55_55, (MR_Integer) 9))));
              Var_147 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_55_55, (MR_Integer) 10))));
              Var_148 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_55_55, (MR_Integer) 11))));
              Var_149 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_55_55, (MR_Integer) 12))));
              packed_word_1 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_55_55, (MR_Integer) 13)));
              Var_152 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_55_55, (MR_Integer) 14))));
              Var_153 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_55_55, (MR_Integer) 15))));
              Var_154 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_55_55, (MR_Integer) 16))));
              Var_155 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_55_55, (MR_Integer) 17))));
              Var_156 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_55_55, (MR_Integer) 18))));
              {
                STATE_VARIABLE_Info_48 = (MR_Word) MR_new_object(MR_Word, (19 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_48, 0) = ((MR_Box) (Var_137));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_48, 1) = ((MR_Box) (Var_138));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_48, 2) = ((MR_Box) (Var_139));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_48, 3) = ((MR_Box) (Var_140));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_48, 4) = ((MR_Box) (Var_141));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_48, 5) = ((MR_Box) (Var_142));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_48, 6) = ((MR_Box) (Var_143));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_48, 7) = ((MR_Box) (Var_144));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_48, 8) = ((MR_Box) (Var_115));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_48, 9) = ((MR_Box) (Var_146));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_48, 10) = ((MR_Box) (Var_147));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_48, 11) = ((MR_Box) (Var_148));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_48, 12) = ((MR_Box) (Var_149));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_48, 13) = (MR_Box) (packed_word_1);
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_48, 14) = ((MR_Box) (Var_152));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_48, 15) = ((MR_Box) (Var_153));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_48, 16) = ((MR_Box) (Var_154));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_48, 17) = ((MR_Box) (Var_155));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_48, 18) = ((MR_Box) (Var_156));
              }
            }
            else
            {
              MR_Word ModuleAndImports_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeModuleAndImports_19, (MR_Integer) 0))));
              MR_Word CompilationTask_21;
              MR_Word SourceFileModuleName_22;
              MR_Word Var_57;

              CompilationTask_21 = make__module_target__compilation_task_1_f_0(TargetType_18);
              parse_tree__module_imports__module_and_imports_get_source_file_module_name_2_p_0(ModuleAndImports_20, &SourceFileModuleName_22);
              Var_57 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CompilationTask_21, (MR_Integer) 0))));
              succeeded = ((MR_tag((MR_Word) Var_57)) == (MR_Integer) 0);
              if (succeeded)
              {
                succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(SourceFileModuleName_22, ModuleName_17);
                succeeded = !(succeeded);
              }
              if (succeeded)
              {
                MR_Word NestedTargetFile_25;
                MR_Word Var_58;
                MR_Word next_value_of_tscc_proc_1_input_1_ExtraOptions_9;
                MR_Word next_value_of_tscc_proc_1_input_2_Globals_10;
                MR_Word next_value_of_tscc_proc_1_input_3_Dep_11;
                MR_Word next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Info_0_19;

                {
                  NestedTargetFile_25 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), NestedTargetFile_25, 0) = ((MR_Box) (SourceFileModuleName_22));
                  MR_hl_field(MR_mktag(0), NestedTargetFile_25, 1) = ((MR_Box) (TargetType_18));
                }
                {
                  Var_58 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_58, 0) = ((MR_Box) (NestedTargetFile_25));
                }
                // direct tailcall eliminated
                ;
                next_value_of_tscc_proc_1_input_1_ExtraOptions_9 = ExtraOptions_9;
                next_value_of_tscc_proc_1_input_2_Globals_10 = Globals_10;
                next_value_of_tscc_proc_1_input_3_Dep_11 = Var_58;
                next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Info_0_19 = STATE_VARIABLE_Info_55_55;
                tscc_proc_1_input_1_ExtraOptions_9 = next_value_of_tscc_proc_1_input_1_ExtraOptions_9;
                tscc_proc_1_input_2_Globals_10 = next_value_of_tscc_proc_1_input_2_Globals_10;
                tscc_proc_1_input_3_Dep_11 = next_value_of_tscc_proc_1_input_3_Dep_11;
                tscc_proc_1_input_4_STATE_VARIABLE_Info_0_19 = next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Info_0_19;
                goto top_of_proc_1;
              }
              else
              {
                MR_Word CompilationTaskType_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CompilationTask_21, (MR_Integer) 0))));
                MR_Word TouchedTargetFiles_28;
                MR_Word TouchedFiles_29;
                MR_Word ModulesToCheck_33;
                MR_Word ModulesToCheckSet_34;
                MR_Word DepsSuccess_35;
                MR_Word DepFiles0_36;
                MR_Word DepFilesSet0_37;
                MR_Word DepFilesToMake_40;
                MR_Word KeepGoing_42;
                MR_Word STATE_VARIABLE_Info_61_61;
                MR_Word STATE_VARIABLE_Info_64_64;
                MR_Word STATE_VARIABLE_Info_71_71;
                MR_Word Var_72;
                MR_Word Var_73;
                MR_Word Var_74;
                MR_Word STATE_VARIABLE_Info_75_75;
                MR_Word Var_77;
                MR_Word Var_80;
                MR_Box conv1_STATE_VARIABLE_Info_64_64;
                MR_Word Var_68;
                MR_Box conv7_DepFiles0_36;
                MR_Box conv6_STATE_VARIABLE_Info_75_75;
                MR_Box conv5_STATE_VARIABLE_IO_76_76;
                MR_Word Var_247;

                make__module_target__touched_files_9_p_0(Globals_10, TargetFile_11, CompilationTaskType_26, &TouchedTargetFiles_28, &TouchedFiles_29, STATE_VARIABLE_Info_55_55, &STATE_VARIABLE_Info_61_61);
                mercury__list__foldl_4_p_0((MR_Word) (&make__make__type_ctor_info_target_file_0), (MR_Word) (&make__make__type_ctor_info_make_info_0), (MR_Word) (&make__module_target_scalar_common_14[0]), TouchedTargetFiles_28, ((MR_Box) (STATE_VARIABLE_Info_61_61)), &conv1_STATE_VARIABLE_Info_64_64);
                STATE_VARIABLE_Info_64_64 = ((MR_Word) (conv1_STATE_VARIABLE_Info_64_64));
                make__util__debug_file_msg_5_p_0(Globals_10, TargetFile_11, (MR_String) "checking dependencies");
                Var_68 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CompilationTask_21, (MR_Integer) 0))));
                succeeded = ((MR_tag((MR_Word) Var_68)) == (MR_Integer) 0);
                if (succeeded)
                {
                  {
                    MR_Word NestedChildren_32;
                    MR_Word Var_69;

                    parse_tree__module_imports__module_and_imports_get_nested_children_2_p_0(ModuleAndImports_20, &NestedChildren_32);
                    Var_69 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), NestedChildren_32);
                    {
                      ModulesToCheck_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), ModulesToCheck_33, 0) = ((MR_Box) (ModuleName_17));
                      MR_hl_field(MR_mktag(1), ModulesToCheck_33, 1) = ((MR_Box) (Var_69));
                    }
                  }
                }
                else
                {
                  {
                    ModulesToCheck_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), ModulesToCheck_33, 0) = ((MR_Box) (ModuleName_17));
                    MR_hl_field(MR_mktag(1), ModulesToCheck_33, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                }
                make__dependencies__module_names_to_index_set_4_p_0(ModulesToCheck_33, &ModulesToCheckSet_34, STATE_VARIABLE_Info_64_64, &STATE_VARIABLE_Info_71_71);
                Var_72 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_71_71, (MR_Integer) 13))) & (MR_Integer) 1);
                Var_77 = make__dependencies__target_dependencies_2_f_0(Globals_10, TargetType_18);
                {
                  Var_73 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_73, 0) = ((MR_Box) (&make__module_target_scalar_common_15[0]));
                  MR_hl_field(MR_mktag(0), Var_73, 1) = ((MR_Box) (make__module_target__make_module_target_file_extra_options_8_p_0_2));
                  MR_hl_field(MR_mktag(0), Var_73, 2) = ((MR_Box) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(0), Var_73, 3) = ((MR_Box) (Var_77));
                }
                Var_74 = mercury__sparse_bitset__init_0_f_0((MR_Word) (&make__dependencies__make__dependencies__type_ctor_info_dependency_file_index_0));
                make__dependencies__deps_set_foldl3_maybe_stop_at_error_11_p_0((MR_Word) (&make__module_target_scalar_common_1[1]), (MR_Word) (&make__make__type_ctor_info_make_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), (MR_Word) (&make__module_target_scalar_common_1[0]), Var_72, Var_73, Globals_10, ModulesToCheckSet_34, &DepsSuccess_35, ((MR_Box) (Var_74)), &conv7_DepFiles0_36, ((MR_Box) (STATE_VARIABLE_Info_71_71)), &conv6_STATE_VARIABLE_Info_75_75, ((MR_Box) ((MR_Integer) 0)), &conv5_STATE_VARIABLE_IO_76_76);
                DepFiles0_36 = ((MR_Word) (conv7_DepFiles0_36));
                STATE_VARIABLE_Info_75_75 = ((MR_Word) (conv6_STATE_VARIABLE_Info_75_75));
                make__dependencies__dependency_file_index_set_to_plain_set_3_p_0(STATE_VARIABLE_Info_75_75, DepFiles0_36, &DepFilesSet0_37);
                Var_247 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TargetFile_11, (MR_Integer) 1))));
                succeeded = make____Unify____module_target_type_0_0(TargetType_18, Var_247);
                if (succeeded)
                  succeeded = (TargetType_18 == (MR_Word) ((MR_Unsigned) 8U));
                if (succeeded)
                {
                  MR_Word PrivateInts_39;
                  MR_Word Var_79;

                  PrivateInts_39 = make__util__make_dependency_list_2_f_0(ModulesToCheck_33, (MR_Word) ((MR_Unsigned) 8U));
                  Var_79 = mercury__set__delete_list_2_f_0((MR_Word) (&make__dependencies__make__dependencies__type_ctor_info_dependency_file_0), DepFilesSet0_37, PrivateInts_39);
                  DepFilesToMake_40 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&make__dependencies__make__dependencies__type_ctor_info_dependency_file_0), Var_79);
                }
                else
                {
                  DepFilesToMake_40 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&make__dependencies__make__dependencies__type_ctor_info_dependency_file_0), DepFilesSet0_37);
                }
                {
                  Var_80 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_80, 0) = ((MR_Box) (&make__module_target_scalar_common_13[2]));
                  MR_hl_field(MR_mktag(0), Var_80, 1) = ((MR_Box) (make__module_target__make_module_target_file_extra_options_8_p_0_3));
                  MR_hl_field(MR_mktag(0), Var_80, 2) = ((MR_Box) ((MR_Integer) 4));
                  MR_hl_field(MR_mktag(0), Var_80, 3) = ((MR_Box) (Globals_10));
                  MR_hl_field(MR_mktag(0), Var_80, 4) = ((MR_Box) (TargetFile_11));
                  MR_hl_field(MR_mktag(0), Var_80, 5) = ((MR_Box) (DepFiles0_36));
                  MR_hl_field(MR_mktag(0), Var_80, 6) = ((MR_Box) (STATE_VARIABLE_Info_75_75));
                }
                make__util__debug_make_msg_4_p_0(Globals_10, Var_80);
                libs__globals__lookup_bool_option_3_p_0(Globals_10, (MR_Integer) 645, &KeepGoing_42);
                succeeded = (DepsSuccess_35 == (MR_Integer) 0);
                if (succeeded)
                  succeeded = (KeepGoing_42 == (MR_Integer) 0);
                if (succeeded)
                {
                  MR_Box conv9_STATE_VARIABLE_Info_48;

                  Succeeded_12 = (MR_Integer) 0;
                  mercury__list__foldl_4_p_0((MR_Word) (&make__make__type_ctor_info_target_file_0), (MR_Word) (&make__make__type_ctor_info_make_info_0), (MR_Word) (&make__module_target_scalar_common_14[1]), TouchedTargetFiles_28, ((MR_Box) (STATE_VARIABLE_Info_75_75)), &conv9_STATE_VARIABLE_Info_48);
                  STATE_VARIABLE_Info_48 = ((MR_Word) (conv9_STATE_VARIABLE_Info_48));
                }
                else
                {
                  MR_Word DepsResult0_44;
                  MR_Word STATE_VARIABLE_Info_92_255;

                  make__module_target__make_dependency_files_10_p_0(Globals_10, TargetFile_11, DepFilesToMake_40, TouchedTargetFiles_28, TouchedFiles_29, &DepsResult0_44, STATE_VARIABLE_Info_75_75, &STATE_VARIABLE_Info_92_255);
                  switch (DepsSuccess_35) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        MR_Box conv11_STATE_VARIABLE_Info_48;

                        Succeeded_12 = (MR_Integer) 0;
                        mercury__list__foldl_4_p_0((MR_Word) (&make__make__type_ctor_info_target_file_0), (MR_Word) (&make__make__type_ctor_info_make_info_0), (MR_Word) (&make__module_target_scalar_common_14[2]), TouchedTargetFiles_28, ((MR_Box) (STATE_VARIABLE_Info_92_255)), &conv11_STATE_VARIABLE_Info_48);
                        STATE_VARIABLE_Info_48 = ((MR_Word) (conv11_STATE_VARIABLE_Info_48));
                      }
                      break;
                    case (MR_Integer) 1:
                      switch (DepsResult0_44) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 2:
                          {
                            MR_Box conv13_STATE_VARIABLE_Info_48;

                            Succeeded_12 = (MR_Integer) 0;
                            mercury__list__foldl_4_p_0((MR_Word) (&make__make__type_ctor_info_target_file_0), (MR_Word) (&make__make__type_ctor_info_make_info_0), (MR_Word) (&make__module_target_scalar_common_14[3]), TouchedTargetFiles_28, ((MR_Box) (STATE_VARIABLE_Info_92_255)), &conv13_STATE_VARIABLE_Info_48);
                            STATE_VARIABLE_Info_48 = ((MR_Word) (conv13_STATE_VARIABLE_Info_48));
                          }
                          break;
                        case (MR_Integer) 1:
                          {
                            MR_Word Targets0_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_92_255, (MR_Integer) 16))));
                            MR_Word Targets_46;
                            MR_Word Var_104;
                            MR_Word Var_105;
                            MR_Word STATE_VARIABLE_Info_106_106;
                            MR_Word Var_176 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_92_255, (MR_Integer) 0))));
                            MR_Word Var_177 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_92_255, (MR_Integer) 1))));
                            MR_Word Var_178 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_92_255, (MR_Integer) 2))));
                            MR_Word Var_179 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_92_255, (MR_Integer) 3))));
                            MR_Word Var_180 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_92_255, (MR_Integer) 4))));
                            MR_Word Var_181 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_92_255, (MR_Integer) 5))));
                            MR_Word Var_182 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_92_255, (MR_Integer) 6))));
                            MR_Word Var_183 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_92_255, (MR_Integer) 7))));
                            MR_Word Var_184 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_92_255, (MR_Integer) 8))));
                            MR_Word Var_185 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_92_255, (MR_Integer) 9))));
                            MR_Word Var_186 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_92_255, (MR_Integer) 10))));
                            MR_Word Var_187 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_92_255, (MR_Integer) 11))));
                            MR_Word Var_188 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_92_255, (MR_Integer) 12))));
                            MR_Word Var_191 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_92_255, (MR_Integer) 14))));
                            MR_Word Var_192 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_92_255, (MR_Integer) 15))));
                            MR_Integer Var_193 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_92_255, (MR_Integer) 17))));
                            MR_Word Var_194 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_92_255, (MR_Integer) 18))));
                            MR_Unsigned packed_word_5 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_92_255, (MR_Integer) 13)));

                            {
                              Var_105 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                              MR_hl_field(MR_mktag(0), Var_105, 0) = ((MR_Box) (TargetType_18));
                            }
                            {
                              Var_104 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                              MR_hl_field(MR_mktag(0), Var_104, 0) = ((MR_Box) (ModuleName_17));
                              MR_hl_field(MR_mktag(0), Var_104, 1) = ((MR_Box) (Var_105));
                            }
                            mercury__set__delete_3_p_0((MR_Word) (&make__module_target_scalar_common_2[0]), ((MR_Box) (Var_104)), Targets0_45, &Targets_46);
                            {
                              STATE_VARIABLE_Info_106_106 = (MR_Word) MR_new_object(MR_Word, (19 * sizeof(MR_Word)), NULL, NULL);
                              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_106_106, 0) = ((MR_Box) (Var_176));
                              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_106_106, 1) = ((MR_Box) (Var_177));
                              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_106_106, 2) = ((MR_Box) (Var_178));
                              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_106_106, 3) = ((MR_Box) (Var_179));
                              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_106_106, 4) = ((MR_Box) (Var_180));
                              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_106_106, 5) = ((MR_Box) (Var_181));
                              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_106_106, 6) = ((MR_Box) (Var_182));
                              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_106_106, 7) = ((MR_Box) (Var_183));
                              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_106_106, 8) = ((MR_Box) (Var_184));
                              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_106_106, 9) = ((MR_Box) (Var_185));
                              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_106_106, 10) = ((MR_Box) (Var_186));
                              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_106_106, 11) = ((MR_Box) (Var_187));
                              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_106_106, 12) = ((MR_Box) (Var_188));
                              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_106_106, 13) = (MR_Box) (packed_word_5);
                              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_106_106, 14) = ((MR_Box) (Var_191));
                              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_106_106, 15) = ((MR_Box) (Var_192));
                              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_106_106, 16) = ((MR_Box) (Targets_46));
                              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_106_106, 17) = ((MR_Box) (Var_193));
                              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_106_106, 18) = ((MR_Box) (Var_194));
                            }
                            make__module_target__build_target_12_p_0(Globals_10, CompilationTask_21, TargetFile_11, ModuleAndImports_20, TouchedTargetFiles_28, TouchedFiles_29, ExtraOptions_9, &Succeeded_12, STATE_VARIABLE_Info_106_106, &STATE_VARIABLE_Info_48);
                          }
                          break;
                        case (MR_Integer) 0:
                          {
                            MR_Word Var_94;
                            MR_Word STATE_VARIABLE_Info_95_95;
                            MR_Word Var_97;
                            MR_Word Var_101;
                            MR_Box conv15_STATE_VARIABLE_Info_48;

                            {
                              Var_97 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                              MR_hl_field(MR_mktag(0), Var_97, 0) = ((MR_Box) (TargetType_18));
                            }
                            {
                              Var_94 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                              MR_hl_field(MR_mktag(0), Var_94, 0) = ((MR_Box) (ModuleName_17));
                              MR_hl_field(MR_mktag(0), Var_94, 1) = ((MR_Box) (Var_97));
                            }
                            make__util__maybe_warn_up_to_date_target_6_p_0(Globals_10, Var_94, STATE_VARIABLE_Info_92_255, &STATE_VARIABLE_Info_95_95);
                            make__util__debug_file_msg_5_p_0(Globals_10, TargetFile_11, (MR_String) "up to date");
                            Succeeded_12 = (MR_Integer) 1;
                            {
                              Var_101 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(1), Var_101, 0) = ((MR_Box) (TargetFile_11));
                              MR_hl_field(MR_mktag(1), Var_101, 1) = ((MR_Box) (TouchedTargetFiles_28));
                            }
                            mercury__list__foldl_4_p_0((MR_Word) (&make__make__type_ctor_info_target_file_0), (MR_Word) (&make__make__type_ctor_info_make_info_0), (MR_Word) (&make__module_target_scalar_common_14[4]), Var_101, ((MR_Box) (STATE_VARIABLE_Info_95_95)), &conv15_STATE_VARIABLE_Info_48);
                            STATE_VARIABLE_Info_48 = ((MR_Word) (conv15_STATE_VARIABLE_Info_48));
                          }
                          break;
                      }
                      break;
                  }
                }
              }
            }
          }
          break;
        case (MR_Integer) 2:
          {
            Succeeded_12 = (MR_Integer) 1;
            STATE_VARIABLE_Info_48 = STATE_VARIABLE_Info_51_51;
          }
          break;
      }
      tscc_output_1_Succeeded_12 = Succeeded_12;
      tscc_output_2_STATE_VARIABLE_Info_20 = STATE_VARIABLE_Info_48;
      goto tscc_end;
    }
  tscc_end:;
    *tscc_output_ptr_1_Succeeded_12 = tscc_output_1_Succeeded_12;
    *tscc_output_ptr_2_STATE_VARIABLE_Info_20 = tscc_output_2_STATE_VARIABLE_Info_20;
    return;
  }
}

static void MR_CALL 
make__module_target__touched_files_9_p_0(
  MR_Word Globals_10,
  MR_Word TargetFile_11,
  MR_Word Task_12,
  MR_Word * TouchedTargetFiles_13,
  MR_Word * TouchedFileNames_14,
  MR_Word STATE_VARIABLE_Info_0_29,
  MR_Word * STATE_VARIABLE_Info_30)
{
  {
    MR_bool succeeded;

    switch (MR_tag((MR_Word) Task_12)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word ModuleTask_17 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Task_12, (MR_Integer) 0))) & (MR_Integer) 7);

          make__module_target__touched_files_process_module_9_p_0(Globals_10, TargetFile_11, ModuleTask_17, TouchedTargetFiles_13, TouchedFileNames_14, STATE_VARIABLE_Info_0_29, STATE_VARIABLE_Info_30);
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
          *STATE_VARIABLE_Info_30 = STATE_VARIABLE_Info_0_29;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word PIC_19 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(2), Task_12, (MR_Integer) 0))) >> 2)) & (MR_Integer) 1);
          MR_Word Lang_20 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), Task_12, (MR_Integer) 0))) & (MR_Integer) 3);
          MR_Word ModuleName_21;
          MR_String ForeignObjectFile_24;
          MR_Word ForeignModName_67;
          MR_String SrcExt_68;
          MR_String ObjExt_69;
          MR_Word CompilationTarget_81;
          MR_Word ForeignModName0_65;
          MR_String SrcExt0_66;
          MR_String SrcFileName_70;

          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *TouchedTargetFiles_13 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (TargetFile_11));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          ModuleName_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TargetFile_11, (MR_Integer) 0))));
          succeeded = parse_tree__prog_foreign__foreign_language_module_name_2_f_0(ModuleName_21, Lang_20, &ForeignModName0_65);
          if (succeeded)
            succeeded = parse_tree__prog_foreign__foreign_language_file_extension_1_f_0(Lang_20, &SrcExt0_66);
          if (succeeded)
          {
            ForeignModName_67 = ForeignModName0_65;
            SrcExt_68 = SrcExt0_66;
          }
          else
          {
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140make.module_target.get_foreign_code_file\'/7", (MR_String) "unsupported foreign language");
              return;
            }
          }
          libs__globals__get_target_2_p_0(Globals_10, &CompilationTarget_81);
          switch (CompilationTarget_81) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              backend_libs__compile_target_code__maybe_pic_object_file_extension_3_p_0(Globals_10, PIC_19, &ObjExt_69);
              break;
            case (MR_Integer) 1:
              {
                {
                  mercury__require__sorry_2_p_0((MR_String) "function \140make.module_target.get_object_extension\'/2", (MR_String) "object extension for csharp");
                  return;
                }
              }
              break;
            case (MR_Integer) 3:
              {
                {
                  mercury__require__sorry_2_p_0((MR_String) "function \140make.module_target.get_object_extension\'/2", (MR_String) "mmc --make NYI and target erlang");
                  return;
                }
              }
              break;
            case (MR_Integer) 2:
              {
                {
                  mercury__require__sorry_2_p_0((MR_String) "function \140make.module_target.get_object_extension\'/2", (MR_String) "object extension for java");
                  return;
                }
              }
              break;
          }
          parse_tree__file_names__module_name_to_file_name_7_p_0(Globals_10, (MR_Integer) 0, SrcExt_68, ForeignModName_67, &SrcFileName_70);
          parse_tree__file_names__module_name_to_file_name_7_p_0(Globals_10, (MR_Integer) 0, ObjExt_69, ForeignModName_67, &ForeignObjectFile_24);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *TouchedFileNames_14 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ForeignObjectFile_24));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          *STATE_VARIABLE_Info_30 = STATE_VARIABLE_Info_0_29;
        }
        break;
      case (MR_Integer) 3:
        {
          MR_String FactTableName_25 = ((MR_String) ((MR_hl_field(MR_mktag(3), Task_12, (MR_Integer) 1))));
          MR_String ObjExt_27;
          MR_String FactTableObjectFile_28;
          MR_Word PIC_43 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Task_12, (MR_Integer) 0))) & (MR_Integer) 1);
          MR_Word ModuleName_44;
          MR_Word CompilationTarget_50;

          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *TouchedTargetFiles_13 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (TargetFile_11));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          ModuleName_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TargetFile_11, (MR_Integer) 0))));
          libs__globals__get_target_2_p_0(Globals_10, &CompilationTarget_50);
          switch (CompilationTarget_50) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              backend_libs__compile_target_code__maybe_pic_object_file_extension_3_p_0(Globals_10, PIC_43, &ObjExt_27);
              break;
            case (MR_Integer) 1:
              {
                {
                  mercury__require__sorry_2_p_0((MR_String) "function \140make.module_target.get_object_extension\'/2", (MR_String) "object extension for csharp");
                  return;
                }
              }
              break;
            case (MR_Integer) 3:
              {
                {
                  mercury__require__sorry_2_p_0((MR_String) "function \140make.module_target.get_object_extension\'/2", (MR_String) "mmc --make NYI and target erlang");
                  return;
                }
              }
              break;
            case (MR_Integer) 2:
              {
                {
                  mercury__require__sorry_2_p_0((MR_String) "function \140make.module_target.get_object_extension\'/2", (MR_String) "object extension for java");
                  return;
                }
              }
              break;
          }
          parse_tree__file_names__fact_table_file_name_8_p_0(Globals_10, ModuleName_44, FactTableName_25, ObjExt_27, (MR_Integer) 0, &FactTableObjectFile_28);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *TouchedFileNames_14 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (FactTableObjectFile_28));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          *STATE_VARIABLE_Info_30 = STATE_VARIABLE_Info_0_29;
        }
        break;
    }
  }
}

static void MR_CALL 
make__module_target__touched_files_process_module_9_p_0_5(
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
make__module_target__touched_files_process_module_9_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_String conv7_LambdaHeadVar__2_65;

    conv7_LambdaHeadVar__2_65 = make__module_target__IntroducedFrom__func__touched_files_process_module__981__1_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv7_LambdaHeadVar__2_65));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
make__module_target__touched_files_process_module_9_p_0_3(
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
make__module_target__touched_files_process_module_9_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;
    MR_Word conv4_LambdaHeadVar__2_54;

    succeeded = make__module_target__IntroducedFrom__pred__touched_files_process_module__959__1_2_p_0(((MR_Word) (wrapper_arg_1)), &conv4_LambdaHeadVar__2_54);
    if (succeeded)
    {
      *wrapper_arg_2 = ((MR_Box) (conv4_LambdaHeadVar__2_54));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static void MR_CALL 
make__module_target__touched_files_process_module_9_p_0_1(
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
make__module_target__touched_files_process_module_9_p_0(
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
    MR_Word MaybeModuleAndImports_19;
    MR_Word ModuleAndImports_20;
    MR_Word NestedChildrenSet_21;
    MR_Word NestedChildren_22;
    MR_Word MaybeNestedImportsList_24;
    MR_Word ModuleImportsList_27;
    MR_Word CompilationTarget_28;
    MR_Word TargetModuleNames_29;
    MR_Word ForeignCodeFiles_32;
    MR_Word TimestampFileNames_40;
    MR_Word STATE_VARIABLE_Info_45_45;
    MR_Word Var_49;
    MR_Word Var_74;
    MR_Box conv3_STATE_VARIABLE_Info_42;
    MR_Box conv2_STATE_VARIABLE_IO_51_51;
    MR_Word NestedImportsList_26;
    MR_Box conv10_TimestampFileNames_40;
    MR_Box conv9_STATE_VARIABLE_IO_44;

    make__module_dep_file__get_module_dependencies_7_p_0(Globals_10, ModuleName_17, &MaybeModuleAndImports_19, STATE_VARIABLE_Info_0_41, &STATE_VARIABLE_Info_45_45);
    if ((MaybeModuleAndImports_19 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140make.module_target.touched_files_process_module\'/9", (MR_String) "no module dependencies");
        return;
      }
    }
    else
      ModuleAndImports_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeModuleAndImports_19, (MR_Integer) 0))));
    parse_tree__module_imports__module_and_imports_get_nested_children_2_p_0(ModuleAndImports_20, &NestedChildrenSet_21);
    mercury__set__to_sorted_list_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), NestedChildrenSet_21, &NestedChildren_22);
    {
      TargetModuleNames_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), TargetModuleNames_29, 0) = ((MR_Box) (ModuleName_17));
      MR_hl_field(MR_mktag(1), TargetModuleNames_29, 1) = ((MR_Box) (NestedChildren_22));
    }
    {
      Var_49 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_49, 0) = ((MR_Box) (&make__module_target_scalar_common_4[3]));
      MR_hl_field(MR_mktag(0), Var_49, 1) = ((MR_Box) (make__module_target__touched_files_process_module_9_p_0_1));
      MR_hl_field(MR_mktag(0), Var_49, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_49, 3) = ((MR_Box) (Globals_10));
    }
    mercury__list__map_foldl2_7_p_2((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&make__module_target_scalar_common_1[3]), (MR_Word) (&make__make__type_ctor_info_make_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_49, NestedChildren_22, &MaybeNestedImportsList_24, ((MR_Box) (STATE_VARIABLE_Info_45_45)), &conv3_STATE_VARIABLE_Info_42, ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_51_51);
    *STATE_VARIABLE_Info_42 = ((MR_Word) (conv3_STATE_VARIABLE_Info_42));
    succeeded = mercury__list__map_3_p_2((MR_Word) (&make__module_target_scalar_common_1[3]), (MR_Word) (&parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_module_and_imports_0), (MR_Word) (&make__module_target_scalar_common_2[7]), MaybeNestedImportsList_24, &NestedImportsList_26);
    if (succeeded)
      {
        ModuleImportsList_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), ModuleImportsList_27, 0) = ((MR_Box) (ModuleAndImports_20));
        MR_hl_field(MR_mktag(1), ModuleImportsList_27, 1) = ((MR_Box) (NestedImportsList_26));
      }
    else
    {
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140make.module_target.touched_files_process_module\'/9", (MR_String) "no nested module dependencies");
        return;
      }
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
            MR_hl_field(MR_mktag(0), Var_61, 0) = ((MR_Box) (&make__module_target_scalar_common_13[0]));
            MR_hl_field(MR_mktag(0), Var_61, 1) = ((MR_Box) (make__module_target__touched_files_process_module_9_p_0_3));
            MR_hl_field(MR_mktag(0), Var_61, 2) = ((MR_Box) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), Var_61, 3) = ((MR_Box) (Globals_10));
            MR_hl_field(MR_mktag(0), Var_61, 4) = ((MR_Box) (TargetPIC_30));
          }
          mercury__list__map_foldl_5_p_2((MR_Word) (&parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_module_and_imports_0), (MR_Word) (&make__module_target_scalar_common_1[4]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_61, ModuleImportsList_27, &ForeignCodeFileList_31, ((MR_Box) ((MR_Integer) 0)), &conv6_STATE_VARIABLE_IO_62_62);
          Var_66 = mercury__list__condense_1_f_0((MR_Word) (&make__module_target__make__module_target__type_ctor_info_foreign_code_file_0), ForeignCodeFileList_31);
          ForeignCodeFiles_32 = mercury__list__map_2_f_0((MR_Word) (&make__module_target__make__module_target__type_ctor_info_foreign_code_file_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__module_target_scalar_common_2[8]), Var_66);
          switch (CompilationTarget_28) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word HighLevelCode_34;

                libs__globals__lookup_bool_option_3_p_0(Globals_10, (MR_Integer) 280, &HighLevelCode_34);
                switch (HighLevelCode_34) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    HeaderTargets0_36 = (MR_Word) ((MR_Unsigned) 0U);
                    break;
                  case (MR_Integer) 1:
                    {
                      HeaderTargets0_36 = make__util__make_target_file_list_2_f_0(TargetModuleNames_29, (MR_Word) (MR_mkword(MR_mktag(1), &make__module_target_scalar_common_3[3])));
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 1:
            case (MR_Integer) 2:
              HeaderTargets0_36 = (MR_Word) ((MR_Unsigned) 0U);
              break;
            case (MR_Integer) 3:
              {
                HeaderTargets0_36 = make__util__make_target_file_list_2_f_0(TargetModuleNames_29, (MR_Word) ((MR_Unsigned) 52U));
              }
              break;
          }
          switch (CompilationTarget_28) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word Var_71;

                Var_71 = make__util__make_target_file_list_2_f_0(TargetModuleNames_29, (MR_Word) (MR_mkword(MR_mktag(1), &make__module_target_scalar_common_3[2])));
                HeaderTargets_38 = mercury__list__f_43_43_2_f_0((MR_Word) (&make__make__type_ctor_info_target_file_0), Var_71, HeaderTargets0_36);
              }
              break;
            case (MR_Integer) 1:
            case (MR_Integer) 3:
            case (MR_Integer) 2:
              HeaderTargets_38 = HeaderTargets0_36;
              break;
          }
          TouchedTargetFiles0_39 = make__util__make_target_file_list_2_f_0(TargetModuleNames_29, TargetType_18);
          *TouchedTargetFiles_13 = mercury__list__f_43_43_2_f_0((MR_Word) (&make__make__type_ctor_info_target_file_0), TouchedTargetFiles0_39, HeaderTargets_38);
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
          *TouchedTargetFiles_13 = mercury__list__f_43_43_2_f_0((MR_Word) (&make__make__type_ctor_info_target_file_0), Var_57, Var_59);
        }
        break;
    }
    {
      Var_74 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_74, 0) = ((MR_Box) (&make__module_target_scalar_common_13[1]));
      MR_hl_field(MR_mktag(0), Var_74, 1) = ((MR_Box) (make__module_target__touched_files_process_module_9_p_0_5));
      MR_hl_field(MR_mktag(0), Var_74, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_74, 3) = ((MR_Box) (Globals_10));
    }
    mercury__list__foldl2_6_p_2((MR_Word) (&make__make__type_ctor_info_target_file_0), (MR_Word) (&make__module_target_scalar_common_1[5]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_74, *TouchedTargetFiles_13, ((MR_Box) ((MR_Unsigned) 0U)), &conv10_TimestampFileNames_40, ((MR_Box) ((MR_Integer) 0)), &conv9_STATE_VARIABLE_IO_44);
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
            {
              mercury__require__unexpected_2_p_0((MR_String) "function \140make.module_target.compilation_task\'/1", (MR_String) "compilation_task");
            }
            break;
          case (MR_Integer) 1:
            Result_4 = (MR_Word) (&make__module_target_scalar_common_1[15]);
            break;
          case (MR_Integer) 2:
            Result_4 = (MR_Word) (&make__module_target_scalar_common_1[17]);
            break;
          case (MR_Integer) 3:
          case (MR_Integer) 4:
            Result_4 = (MR_Word) (&make__module_target_scalar_common_1[19]);
            break;
          case (MR_Integer) 5:
            Result_4 = (MR_Word) (&make__module_target_scalar_common_1[21]);
            break;
          case (MR_Integer) 6:
            Result_4 = (MR_Word) (&make__module_target_scalar_common_1[25]);
            break;
          case (MR_Integer) 7:
            Result_4 = (MR_Word) (&make__module_target_scalar_common_1[7]);
            break;
          case (MR_Integer) 9:
            Result_4 = (MR_Word) (&make__module_target_scalar_common_1[9]);
            break;
          case (MR_Integer) 10:
            Result_4 = (MR_Word) (&make__module_target_scalar_common_1[11]);
            break;
          case (MR_Integer) 11:
            Result_4 = (MR_Word) (&make__module_target_scalar_common_1[23]);
            break;
          case (MR_Integer) 12:
            Result_4 = (MR_Word) (&make__module_target_scalar_common_1[28]);
            break;
          case (MR_Integer) 13:
          case (MR_Integer) 14:
            Result_4 = (MR_Word) (&make__module_target_scalar_common_1[13]);
            break;
          case (MR_Integer) 15:
            Result_4 = (MR_Word) (&make__module_target_scalar_common_1[28]);
            break;
          case (MR_Integer) 16:
            Result_4 = (MR_Word) (&make__module_target_scalar_common_1[27]);
            break;
        }
        break;
      case (MR_Integer) 1:
        Result_4 = (MR_Word) (&make__module_target_scalar_common_1[9]);
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
              MR_Word PIC_79 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Target_3, (MR_Integer) 1))) & (MR_Integer) 1);

              {
                Var_14 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_14, 0) = (MR_Box) ((MR_Unsigned) (PIC_79));
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
make__module_target__build_target_12_p_0_3(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv4_HeadVar__5_5;
    MR_Word conv3_HeadVar__7_7;

    make__util__build_with_module_options_and_output_redirect_9_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), &conv4_HeadVar__5_5, ((MR_Word) (wrapper_arg_2)), &conv3_HeadVar__7_7);
    *wrapper_arg_1 = ((MR_Box) (conv4_HeadVar__5_5));
    *wrapper_arg_3 = ((MR_Box) (conv3_HeadVar__7_7));
  }
}

static void MR_CALL 
make__module_target__build_target_12_p_0_2(
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
    MR_Word conv2_Succeeded_20;
    MR_Word conv1_STATE_VARIABLE_Info_37;

    make__module_target__build_target_2_12_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv2_Succeeded_20, ((MR_Word) (wrapper_arg_5)), &conv1_STATE_VARIABLE_Info_37);
    *wrapper_arg_4 = ((MR_Box) (conv2_Succeeded_20));
    *wrapper_arg_6 = ((MR_Box) (conv1_STATE_VARIABLE_Info_37));
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
    MR_Word conv0_LambdaHeadVar__2_60;

    make__module_target__IntroducedFrom__pred__build_target__394__1_8_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) (wrapper_arg_1)), &conv0_LambdaHeadVar__2_60);
    *wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_60));
  }
}

static void MR_CALL 
make__module_target__build_target_12_p_0(
  MR_Word Globals_13,
  MR_Word CompilationTask_14,
  MR_Word TargetFile_15,
  MR_Word Imports_16,
  MR_Word TouchedTargetFiles_17,
  MR_Word TouchedFiles_18,
  MR_Word ExtraOptions_19,
  MR_Word * Succeeded_20,
  MR_Word STATE_VARIABLE_Info_0_44,
  MR_Word * STATE_VARIABLE_Info_45)
{
  {
    MR_bool succeeded;
    MR_Word ModuleName_23;
    MR_Word Task_25;
    MR_Word TaskOptions_26;
    MR_Word MaybeArgFileName_31;
    MR_Word ArgFileNameSuccess_32;
    MR_Word ModuleTask_27;
    MR_Word Var_49;
    MR_Word Var_50;

    make__util__maybe_make_target_message_4_p_0(Globals_13, TargetFile_15);
    ModuleName_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TargetFile_15, (MR_Integer) 0))));
    Task_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CompilationTask_14, (MR_Integer) 0))));
    TaskOptions_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CompilationTask_14, (MR_Integer) 1))));
    Var_49 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CompilationTask_14, (MR_Integer) 0))));
    succeeded = ((MR_tag((MR_Word) Var_49)) == (MR_Integer) 0);
    if (succeeded)
    {
      ModuleTask_27 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_49, (MR_Integer) 0))) & (MR_Integer) 7);
      Var_50 = make__module_target__forkable_module_compilation_task_type_1_f_0(ModuleTask_27);
      succeeded = (Var_50 == (MR_Integer) 1);
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
          ArgFileNameSuccess_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ArgFileNameSuccess_32, 0) = ((MR_Box) (Error_33));
        }
      }
      else
      {
        MR_String ArgFileName_30 = ((MR_String) ((MR_hl_field(MR_mktag(0), ArgFileNameResult_29, (MR_Integer) 0))));

        {
          MaybeArgFileName_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), MaybeArgFileName_31, 0) = ((MR_Box) (ArgFileName_30));
        }
        ArgFileNameSuccess_32 = (MR_Word) ((MR_Unsigned) 0U);
      }
    }
    else
    {
      MaybeArgFileName_31 = (MR_Word) ((MR_Unsigned) 0U);
      ArgFileNameSuccess_32 = (MR_Word) ((MR_Unsigned) 0U);
    }
    if ((ArgFileNameSuccess_32 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Cleanup_34;
      MR_Integer Time0_38;
      MR_Word VeryVerbose_39;
      MR_Integer Time_40;
      MR_Word ShowMakeTimes_41;
      MR_Word Var_78;
      MR_Word STATE_VARIABLE_Info_79_79;
      MR_Word Var_81;
      MR_Word Var_82;
      MR_Box conv5_STATE_VARIABLE_Info_79_79;

      {
        Cleanup_34 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Cleanup_34, 0) = ((MR_Box) (&make__module_target_scalar_common_5[2]));
        MR_hl_field(MR_mktag(0), Cleanup_34, 1) = ((MR_Box) (make__module_target__build_target_12_p_0_1));
        MR_hl_field(MR_mktag(0), Cleanup_34, 2) = ((MR_Box) ((MR_Integer) 4));
        MR_hl_field(MR_mktag(0), Cleanup_34, 3) = ((MR_Box) (Globals_13));
        MR_hl_field(MR_mktag(0), Cleanup_34, 4) = ((MR_Box) (TouchedTargetFiles_17));
        MR_hl_field(MR_mktag(0), Cleanup_34, 5) = ((MR_Box) (TouchedFiles_18));
        MR_hl_field(MR_mktag(0), Cleanup_34, 6) = ((MR_Box) (MaybeArgFileName_31));
      }
      make__util__get_real_milliseconds_3_p_0(&Time0_38);
      libs__globals__lookup_bool_option_3_p_0(Globals_13, (MR_Integer) 61, &VeryVerbose_39);
      Var_81 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ExtraOptions_19, TaskOptions_26);
      {
        Var_82 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_82, 0) = ((MR_Box) (&make__module_target_scalar_common_10[0]));
        MR_hl_field(MR_mktag(0), Var_82, 1) = ((MR_Box) (make__module_target__build_target_12_p_0_2));
        MR_hl_field(MR_mktag(0), Var_82, 2) = ((MR_Box) ((MR_Integer) 4));
        MR_hl_field(MR_mktag(0), Var_82, 3) = ((MR_Box) (ModuleName_23));
        MR_hl_field(MR_mktag(0), Var_82, 4) = ((MR_Box) (Task_25));
        MR_hl_field(MR_mktag(0), Var_82, 5) = ((MR_Box) (MaybeArgFileName_31));
        MR_hl_field(MR_mktag(0), Var_82, 6) = ((MR_Box) (Imports_16));
      }
      {
        Var_78 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_78, 0) = ((MR_Box) (&make__module_target_scalar_common_11[0]));
        MR_hl_field(MR_mktag(0), Var_78, 1) = ((MR_Box) (make__module_target__build_target_12_p_0_3));
        MR_hl_field(MR_mktag(0), Var_78, 2) = ((MR_Box) ((MR_Integer) 4));
        MR_hl_field(MR_mktag(0), Var_78, 3) = ((MR_Box) (Globals_13));
        MR_hl_field(MR_mktag(0), Var_78, 4) = ((MR_Box) (ModuleName_23));
        MR_hl_field(MR_mktag(0), Var_78, 5) = ((MR_Box) (Var_81));
        MR_hl_field(MR_mktag(0), Var_78, 6) = ((MR_Box) (Var_82));
      }
      libs__process_util__build_with_check_for_interrupt_8_p_0((MR_Word) (&make__make__type_ctor_info_make_info_0), VeryVerbose_39, Var_78, Cleanup_34, Succeeded_20, ((MR_Box) (STATE_VARIABLE_Info_0_44)), &conv5_STATE_VARIABLE_Info_79_79);
      STATE_VARIABLE_Info_79_79 = ((MR_Word) (conv5_STATE_VARIABLE_Info_79_79));
      make__module_target__record_made_target_2_9_p_0(Globals_13, *Succeeded_20, TargetFile_15, TouchedTargetFiles_17, TouchedFiles_18, STATE_VARIABLE_Info_79_79, STATE_VARIABLE_Info_45);
      make__util__get_real_milliseconds_3_p_0(&Time_40);
      libs__globals__lookup_bool_option_3_p_0(Globals_13, (MR_Integer) 673, &ShowMakeTimes_41);
      switch (ShowMakeTimes_41) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Float DiffSecs_42;
            MR_Float Var_87;
            MR_Integer Var_88 = (MR_Integer) ((MR_Unsigned) Time_40 - (MR_Unsigned) Time0_38);

            Var_87 = mercury__float__float_1_f_0(Var_88);
            DiffSecs_42 = mercury__float__f_slash_2_f_0(Var_87, (MR_Float) 1000.0000000000000);
            succeeded = (DiffSecs_42 >= ((MR_Float) 0.40000000000000002));
            if (succeeded)
            {
              MR_String Var_135;

              mercury__io__write_string_3_p_0((MR_String) "Making ");
              make__util__make_write_target_file_4_p_0(Globals_13, TargetFile_15);
              mercury__io__write_string_3_p_0((MR_String) " took ");
              mercury__string__format__format_float_component_nowidth_prec_5_p_0((MR_Word) (&make__module_target_scalar_common_3[8]), (MR_Integer) 2, (MR_Integer) 2, DiffSecs_42, &Var_135);
              mercury__io__write_string_3_p_0(Var_135);
              mercury__io__write_string_3_p_0((MR_String) "s\n");
            }
          }
          break;
      }
    }
    else
    {
      MR_Word ArgFileError_43 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgFileNameSuccess_32, (MR_Integer) 0))));
      MR_Word Var_52;
      MR_String Var_57;

      Var_52 = mercury__io__stderr_stream_0_f_0();
      Var_57 = mercury__io__error_message_1_f_0(ArgFileError_43);
      mercury__io__write_string_4_p_0(Var_52, (MR_String) "Could not create temporary file: ");
      mercury__io__write_string_4_p_0(Var_52, Var_57);
      mercury__io__write_string_4_p_0(Var_52, (MR_String) "\n");
      *Succeeded_20 = (MR_Integer) 0;
      *STATE_VARIABLE_Info_45 = STATE_VARIABLE_Info_0_44;
    }
  }
}

static void MR_CALL 
make__module_target__record_made_target_2_9_p_0_4(
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
make__module_target__record_made_target_2_9_p_0_3(
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
make__module_target__record_made_target_2_9_p_0_2(
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
make__module_target__record_made_target_2_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_Info_10;

    make__module_target__update_target_status_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_Info_10);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Info_10));
  }
}

static void MR_CALL 
make__module_target__record_made_target_2_9_p_0(
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
    MR_Word Var_61;
    MR_Word Var_63;
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
    MR_Word Var_76;
    MR_Word Var_77;
    MR_Word Var_78;
    MR_Integer Var_79;
    MR_Word Var_80;
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
      MR_hl_field(MR_mktag(0), Var_26, 0) = ((MR_Box) (&make__module_target_scalar_common_8[0]));
      MR_hl_field(MR_mktag(0), Var_26, 1) = ((MR_Box) (make__module_target__record_made_target_2_9_p_0_1));
      MR_hl_field(MR_mktag(0), Var_26, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_26, 3) = ((MR_Box) (TargetStatus_17));
    }
    mercury__list__foldl_4_p_0((MR_Word) (&make__make__type_ctor_info_target_file_0), (MR_Word) (&make__make__type_ctor_info_make_info_0), Var_26, TouchedTargetFiles_13, ((MR_Box) (STATE_VARIABLE_Info_0_21)), &conv1_STATE_VARIABLE_Info_27_27);
    STATE_VARIABLE_Info_27_27 = ((MR_Word) (conv1_STATE_VARIABLE_Info_27_27));
    {
      Var_28 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_28, 0) = ((MR_Box) (&make__module_target_scalar_common_5[1]));
      MR_hl_field(MR_mktag(0), Var_28, 1) = ((MR_Box) (make__module_target__record_made_target_2_9_p_0_2));
      MR_hl_field(MR_mktag(0), Var_28, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_28, 3) = ((MR_Box) (Globals_10));
      MR_hl_field(MR_mktag(0), Var_28, 4) = ((MR_Box) ((MR_Integer) 1));
    }
    mercury__list__map_foldl2_7_p_2((MR_Word) (&make__make__type_ctor_info_target_file_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__make__type_ctor_info_make_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_28, TouchedTargetFiles_13, &TouchedTargetFileNames_18, ((MR_Box) (STATE_VARIABLE_Info_27_27)), &conv5_STATE_VARIABLE_Info_29_29, ((MR_Box) ((MR_Integer) 0)), &conv4_STATE_VARIABLE_IO_24);
    STATE_VARIABLE_Info_29_29 = ((MR_Word) (conv5_STATE_VARIABLE_Info_29_29));
    STATE_VARIABLE_Timestamps_32_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_29_29, (MR_Integer) 1))));
    {
      Var_33 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_33, 0) = ((MR_Box) (&make__module_target_scalar_common_8[1]));
      MR_hl_field(MR_mktag(0), Var_33, 1) = ((MR_Box) (make__module_target__record_made_target_2_9_p_0_3));
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
        MR_hl_field(MR_mktag(0), Var_38, 0) = ((MR_Box) (&make__module_target_scalar_common_9[0]));
        MR_hl_field(MR_mktag(0), Var_38, 1) = ((MR_Box) (make__module_target__record_made_target_2_9_p_0_4));
        MR_hl_field(MR_mktag(0), Var_38, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_38, 3) = ((MR_Box) (Globals_10));
      }
      mercury__map__foldl_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__module_target_scalar_common_2[1]), (MR_Word) (&make__module_target_scalar_common_2[2]), Var_38, STATE_VARIABLE_Timestamps_36_36, ((MR_Box) (STATE_VARIABLE_Timestamps_36_36)), &conv10_STATE_VARIABLE_Timestamps_40_40);
      STATE_VARIABLE_Timestamps_40_40 = ((MR_Word) (conv10_STATE_VARIABLE_Timestamps_40_40));
    }
    else
      STATE_VARIABLE_Timestamps_40_40 = STATE_VARIABLE_Timestamps_36_36;
    Var_61 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_29_29, (MR_Integer) 0))));
    Var_63 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_29_29, (MR_Integer) 2))));
    Var_64 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_29_29, (MR_Integer) 3))));
    Var_65 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_29_29, (MR_Integer) 4))));
    Var_66 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_29_29, (MR_Integer) 5))));
    Var_67 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_29_29, (MR_Integer) 6))));
    Var_68 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_29_29, (MR_Integer) 7))));
    Var_69 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_29_29, (MR_Integer) 8))));
    Var_70 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_29_29, (MR_Integer) 9))));
    Var_71 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_29_29, (MR_Integer) 10))));
    Var_72 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_29_29, (MR_Integer) 11))));
    Var_73 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_29_29, (MR_Integer) 12))));
    packed_word_1 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_29_29, (MR_Integer) 13)));
    Var_76 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_29_29, (MR_Integer) 14))));
    Var_77 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_29_29, (MR_Integer) 15))));
    Var_78 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_29_29, (MR_Integer) 16))));
    Var_79 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_29_29, (MR_Integer) 17))));
    Var_80 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_29_29, (MR_Integer) 18))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (19 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Info_22 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_61));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (STATE_VARIABLE_Timestamps_40_40));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_63));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_64));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_65));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_66));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_67));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_68));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_69));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_70));
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (Var_71));
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (Var_72));
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (Var_73));
      MR_hl_field(MR_mktag(0), base, 13) = (MR_Box) (packed_word_1);
      MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (Var_76));
      MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (Var_77));
      MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (Var_78));
      MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (Var_79));
      MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (Var_80));
    }
  }
}

static MR_Word MR_CALL 
make__module_target__forkable_module_compilation_task_type_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_Word HeadVar__2_2 = ((&make__module_target_vector_common_7[0 + HeadVar__1_1]))->make__module_target__vector_common_type_7_0__vct_7_f_0;

    return HeadVar__2_2;
  }
}

static MR_Box MR_CALL 
make__module_target__make_dependency_files_10_p_0_10(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_Box wrapper_arg_3;
    MR_Box closure = closure_arg;
    MR_Word conv19_HeadVar__3_3;

    conv19_HeadVar__3_3 = make__util__find_oldest_timestamp_2_f_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    wrapper_arg_3 = ((MR_Box) (conv19_HeadVar__3_3));
    return wrapper_arg_3;
  }
}

static MR_Box MR_CALL 
make__module_target__make_dependency_files_10_p_0_9(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_Box wrapper_arg_3;
    MR_Box closure = closure_arg;
    MR_Word conv17_HeadVar__3_3;

    conv17_HeadVar__3_3 = make__util__find_oldest_timestamp_2_f_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    wrapper_arg_3 = ((MR_Box) (conv17_HeadVar__3_3));
    return wrapper_arg_3;
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

    (env_ptr)->make__module_target__make_dependency_files_10_p_0_env_0__Var_104 = ((MR_Word) ((env_ptr)->make__module_target__make_dependency_files_10_p_0_env_0__conv8_Var_104));
    make__module_target__make_dependency_files_10_p_0_4(env_ptr);
  }
}

static void MR_CALL 
make__module_target__make_dependency_files_10_p_0_4(
  void * env_ptr_arg)
{
  {
    struct make__module_target__make_dependency_files_10_p_0_env_0_s * env_ptr = (struct make__module_target__make_dependency_files_10_p_0_env_0_s *) (env_ptr_arg);

    (env_ptr)->make__module_target__make_dependency_files_10_p_0_env_0__TypeCtorInfo_105_105 = (MR_Word) (&libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0);
    (env_ptr)->make__module_target__make_dependency_files_10_p_0_env_0__TypeCtorInfo_106_106 = (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0);
    (env_ptr)->make__module_target__make_dependency_files_10_p_0_env_0__succeeded = make__module_target____Unify____maybe__maybe_error_2_2((env_ptr)->make__module_target__make_dependency_files_10_p_0_env_0__TypeCtorInfo_105_105, (env_ptr)->make__module_target__make_dependency_files_10_p_0_env_0__TypeCtorInfo_106_106, (env_ptr)->make__module_target__make_dependency_files_10_p_0_env_0__Var_43, (env_ptr)->make__module_target__make_dependency_files_10_p_0_env_0__Var_104);
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
            (env_ptr)->make__module_target__make_dependency_files_10_p_0_env_0__Var_43 = base;
            MR_hl_field(MR_mktag(1), base, 0) = NULL;
          }
          mercury__list__member_2_p_1((MR_Word) (&make__module_target_scalar_common_2[1]), &(env_ptr)->make__module_target__make_dependency_files_10_p_0_env_0__conv8_Var_104, (env_ptr)->make__module_target__make_dependency_files_10_p_0_env_0__TargetTimestamps_21, make__module_target__make_dependency_files_10_p_0_5, env_ptr);
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
  MR_Word STATE_VARIABLE_Info_0_31,
  MR_Word * STATE_VARIABLE_Info_32)
{
  {
    struct make__module_target__make_dependency_files_10_p_0_env_0_s env;

    {
      MR_Word KeepGoing_19;
      MR_Word MakeDepsSuccess_20;
      MR_Word STATE_VARIABLE_Info_37_37;
      MR_Word Var_39;
      MR_Word STATE_VARIABLE_Info_40_40;
      MR_Box conv3_STATE_VARIABLE_Info_37_37;
      MR_Box conv2_STATE_VARIABLE_IO_38_38;
      MR_Box conv7_STATE_VARIABLE_Info_40_40;
      MR_Box conv6_STATE_VARIABLE_IO_41_41;

      libs__globals__lookup_bool_option_3_p_0(Globals_11, (MR_Integer) 645, &KeepGoing_19);
      make__util__foldl2_maybe_stop_at_error_9_p_0((MR_Word) (&make__dependencies__make__dependencies__type_ctor_info_dependency_file_0), (MR_Word) (&make__make__type_ctor_info_make_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), KeepGoing_19, (MR_Word) (&make__module_target_scalar_common_2[4]), Globals_11, DepFilesToMake_13, &MakeDepsSuccess_20, ((MR_Box) (STATE_VARIABLE_Info_0_31)), &conv3_STATE_VARIABLE_Info_37_37, ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_38_38);
      STATE_VARIABLE_Info_37_37 = ((MR_Word) (conv3_STATE_VARIABLE_Info_37_37));
      {
        Var_39 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_39, 0) = ((MR_Box) (&make__module_target_scalar_common_5[0]));
        MR_hl_field(MR_mktag(0), Var_39, 1) = ((MR_Box) (make__module_target__make_dependency_files_10_p_0_2));
        MR_hl_field(MR_mktag(0), Var_39, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), Var_39, 3) = ((MR_Box) (Globals_11));
        MR_hl_field(MR_mktag(0), Var_39, 4) = ((MR_Box) ((MR_Integer) 1));
      }
      mercury__list__map_foldl2_7_p_2((MR_Word) (&make__make__type_ctor_info_target_file_0), (MR_Word) (&make__module_target_scalar_common_2[1]), (MR_Word) (&make__make__type_ctor_info_make_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_39, TouchedTargetFiles_14, &(env).make__module_target__make_dependency_files_10_p_0_env_0__TargetTimestamps_21, ((MR_Box) (STATE_VARIABLE_Info_37_37)), &conv7_STATE_VARIABLE_Info_40_40, ((MR_Box) ((MR_Integer) 0)), &conv6_STATE_VARIABLE_IO_41_41);
      STATE_VARIABLE_Info_40_40 = ((MR_Word) (conv7_STATE_VARIABLE_Info_40_40));
      switch (MakeDepsSuccess_20) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            make__util__debug_file_msg_5_p_0(Globals_11, TargetFile_12, (MR_String) "error making dependencies");
            *DepsResult_16 = (MR_Integer) 2;
            *STATE_VARIABLE_Info_32 = STATE_VARIABLE_Info_40_40;
          }
          break;
        case (MR_Integer) 1:
          {
            make__module_target__make_dependency_files_10_p_0_6(&env);
            if ((env).make__module_target__make_dependency_files_10_p_0_env_0__succeeded)
            {
              make__util__debug_file_msg_5_p_0(Globals_11, TargetFile_12, (MR_String) "target file does not exist");
              *DepsResult_16 = (MR_Integer) 1;
              *STATE_VARIABLE_Info_32 = STATE_VARIABLE_Info_40_40;
            }
            else
            {
              MR_Word ForceReanalysis_25;
              MR_Word ModuleName_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TargetFile_12, (MR_Integer) 0))));
              MR_Word TargetType_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TargetFile_12, (MR_Integer) 1))));

              (env).make__module_target__make_dependency_files_10_p_0_env_0__succeeded = (TargetType_24 == (MR_Word) ((MR_Unsigned) 28U));
              if ((env).make__module_target__make_dependency_files_10_p_0_env_0__succeeded)
                make__module_target__force_reanalysis_of_suboptimal_module_6_p_0(Globals_11, ModuleName_23, &ForceReanalysis_25, STATE_VARIABLE_Info_40_40);
              else
                ForceReanalysis_25 = (MR_Integer) 0;
              switch (ForceReanalysis_25) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word TouchedTargetFileTimestamps_26;
                    MR_Word TouchedFileTimestamps_27;
                    MR_Word MaybeOldestTimestamp0_28;
                    MR_Word MaybeOldestTimestamp_29;
                    MR_String TargetFileName_30;
                    MR_Word Var_47;
                    MR_Word STATE_VARIABLE_Info_48_48;
                    MR_Word Var_50;
                    MR_Word STATE_VARIABLE_Info_51_51;
                    MR_Word Var_53;
                    MR_String Var_54;
                    MR_Word Var_57;
                    MR_Word Var_58;
                    MR_Word STATE_VARIABLE_Info_61_61;
                    MR_Box conv12_STATE_VARIABLE_Info_48_48;
                    MR_Box conv11_STATE_VARIABLE_IO_49_49;
                    MR_Box conv16_STATE_VARIABLE_Info_51_51;
                    MR_Box conv15_STATE_VARIABLE_IO_52_52;
                    MR_Box conv18_MaybeOldestTimestamp0_28;
                    MR_Box conv20_MaybeOldestTimestamp_29;

                    {
                      Var_47 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), Var_47, 0) = ((MR_Box) (&make__module_target_scalar_common_4[1]));
                      MR_hl_field(MR_mktag(0), Var_47, 1) = ((MR_Box) (make__module_target__make_dependency_files_10_p_0_7));
                      MR_hl_field(MR_mktag(0), Var_47, 2) = ((MR_Box) ((MR_Integer) 1));
                      MR_hl_field(MR_mktag(0), Var_47, 3) = ((MR_Box) (Globals_11));
                    }
                    mercury__list__map_foldl2_7_p_2((MR_Word) (&make__make__type_ctor_info_target_file_0), (MR_Word) (&make__module_target_scalar_common_2[1]), (MR_Word) (&make__make__type_ctor_info_make_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_47, TouchedTargetFiles_14, &TouchedTargetFileTimestamps_26, ((MR_Box) (STATE_VARIABLE_Info_40_40)), &conv12_STATE_VARIABLE_Info_48_48, ((MR_Box) ((MR_Integer) 0)), &conv11_STATE_VARIABLE_IO_49_49);
                    STATE_VARIABLE_Info_48_48 = ((MR_Word) (conv12_STATE_VARIABLE_Info_48_48));
                    Var_54 = mercury__dir__this_directory_0_f_0();
                    {
                      Var_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_53, 0) = ((MR_Box) (Var_54));
                      MR_hl_field(MR_mktag(1), Var_53, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    }
                    {
                      Var_50 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), Var_50, 0) = ((MR_Box) (&make__module_target_scalar_common_4[2]));
                      MR_hl_field(MR_mktag(0), Var_50, 1) = ((MR_Box) (make__module_target__make_dependency_files_10_p_0_8));
                      MR_hl_field(MR_mktag(0), Var_50, 2) = ((MR_Box) ((MR_Integer) 1));
                      MR_hl_field(MR_mktag(0), Var_50, 3) = ((MR_Box) (Var_53));
                    }
                    mercury__list__map_foldl2_7_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__module_target_scalar_common_2[1]), (MR_Word) (&make__make__type_ctor_info_make_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_50, TouchedFiles_15, &TouchedFileTimestamps_27, ((MR_Box) (STATE_VARIABLE_Info_48_48)), &conv16_STATE_VARIABLE_Info_51_51, ((MR_Box) ((MR_Integer) 0)), &conv15_STATE_VARIABLE_IO_52_52);
                    STATE_VARIABLE_Info_51_51 = ((MR_Word) (conv16_STATE_VARIABLE_Info_51_51));
                    Var_58 = libs__timestamp__newest_timestamp_0_f_0();
                    {
                      Var_57 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), Var_57, 0) = ((MR_Box) (Var_58));
                    }
                    conv18_MaybeOldestTimestamp0_28 = mercury__list__foldl_3_f_0((MR_Word) (&make__module_target_scalar_common_2[1]), (MR_Word) (&make__module_target_scalar_common_2[1]), (MR_Word) (&make__module_target_scalar_common_2[5]), TouchedTargetFileTimestamps_26, ((MR_Box) (Var_57)));
                    MaybeOldestTimestamp0_28 = ((MR_Word) (conv18_MaybeOldestTimestamp0_28));
                    conv20_MaybeOldestTimestamp_29 = mercury__list__foldl_3_f_0((MR_Word) (&make__module_target_scalar_common_2[1]), (MR_Word) (&make__module_target_scalar_common_2[1]), (MR_Word) (&make__module_target_scalar_common_2[6]), TouchedFileTimestamps_27, ((MR_Box) (MaybeOldestTimestamp0_28)));
                    MaybeOldestTimestamp_29 = ((MR_Word) (conv20_MaybeOldestTimestamp_29));
                    make__util__get_file_name_8_p_0(Globals_11, (MR_Integer) 1, TargetFile_12, &TargetFileName_30, STATE_VARIABLE_Info_51_51, &STATE_VARIABLE_Info_61_61);
                    make__dependencies__check_dependencies_10_p_0(Globals_11, TargetFileName_30, MaybeOldestTimestamp_29, MakeDepsSuccess_20, DepFilesToMake_13, DepsResult_16, STATE_VARIABLE_Info_61_61, STATE_VARIABLE_Info_32);
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    *DepsResult_16 = (MR_Integer) 1;
                    *STATE_VARIABLE_Info_32 = STATE_VARIABLE_Info_40_40;
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
make__module_target____Unify____maybe__maybe_error_2_2(
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
make__module_target____Unify____compilation_task_result_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = make__module_target____Unify____compilation_task_result_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
make__module_target____Compare____compilation_task_result_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    make__module_target____Compare____compilation_task_result_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
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

	MR_register_type_ctor_info(&make__module_target__make__module_target__type_ctor_info_compilation_task_result_0);
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
