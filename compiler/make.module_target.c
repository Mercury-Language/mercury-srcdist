/*
** Automatically generated from `make.module_target.m'
** by the Mercury compiler,
** version 2016-10-30
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


/* :- module make.module_target. */
/* :- implementation. */

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
#include "check_hlds.unify_proc.mih"
#include "hlds.const_struct.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "hlds.vartypes.mih"
#include "libs.compiler_util.mih"
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
  MR_Word make__module_target__make_dependency_files_10_p_0_env_0__TypeInfo_84_84;
  MR_Word make__module_target__make_dependency_files_10_p_0_env_0__TargetTimestamps_21;
  jmp_buf make__module_target__make_dependency_files_10_p_0_env_0__commit_0;
  MR_Word make__module_target__make_dependency_files_10_p_0_env_0__TypeCtorInfo_105_105;
  MR_Word make__module_target__make_dependency_files_10_p_0_env_0__TypeCtorInfo_106_106;
  MR_Word make__module_target__make_dependency_files_10_p_0_env_0__V_43_43;
  MR_Word make__module_target__make_dependency_files_10_p_0_env_0__V_104_104;
  MR_Box make__module_target__make_dependency_files_10_p_0_env_0__conv8_V_104_104;
};


static const MR_FA_TypeInfo_Struct1 make__module_target__sparse_bitset__ti_sparse_bitset_1make__dependencies__type_ctor_info_dependency_file_index_0;

static const MR_VA_PseudoTypeInfo_Struct8 make__module_target____vpti_pred_8__plain_libs__globals__type_ctor_info_globals_0__plain_make__dependencies__type_ctor_info_module_index_0__plain_bool__type_ctor_info_bool_0__plain_sparse_bitset__ti_sparse_bitset_1make__dependencies__type_ctor_info_dependency_file_index_0__plain_make__type_ctor_info_make_info_0__plain_make__type_ctor_info_make_info_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0;

static const MR_FA_PseudoTypeInfo_Struct1 make__module_target__sparse_bitset__pti_sparse_bitset_1__plain_make__dependencies__type_ctor_info_dependency_file_index_0;

static const MR_FA_PseudoTypeInfo_Struct2 make__module_target__maybe__pti_maybe_error_2__plain_libs__timestamp__type_ctor_info_timestamp_0__plain_builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct1 make__module_target__list__pti_list_1__plain_builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct1 make__module_target__list__pti_list_1__plain_make__type_ctor_info_target_file_0;

static const MR_FA_PseudoTypeInfo_Struct1 make__module_target__maybe__pti_maybe_1__plain_builtin__type_ctor_info_string_0;

static const MR_FA_TypeInfo_Struct1 make__module_target__list__ti_list_1builtin__type_ctor_info_string_0;

static const MR_VA_PseudoTypeInfo_Struct8 make__module_target____vpti_pred_8__plain_libs__globals__type_ctor_info_globals_0__plain_list__ti_list_1builtin__type_ctor_info_string_0__plain_io__type_ctor_info_output_stream_0__plain_bool__type_ctor_info_bool_0__plain_make__type_ctor_info_make_info_0__plain_make__type_ctor_info_make_info_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0;

static const MR_FA_TypeInfo_Struct2 make__module_target__maybe__ti_maybe_error_2libs__timestamp__type_ctor_info_timestamp_0builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct2 make__module_target__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_maybe__ti_maybe_error_2libs__timestamp__type_ctor_info_timestamp_0builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct1 make__module_target__maybe__pti_maybe_1__plain_parse_tree__module_imports__type_ctor_info_module_and_imports_0;

static const MR_FA_PseudoTypeInfo_Struct1 make__module_target__list__pti_list_1__plain_make__module_target__type_ctor_info_foreign_code_file_0;

static const MR_FA_TypeInfo_Struct2 make__module_target__pair__ti_pair_2make__type_ctor_info_compilation_task_type_0list__ti_list_1builtin__type_ctor_info_string_0;

static const MR_PseudoTypeInfo make__module_target__make__module_target__field_types_foreign_code_file_0_0[3];

static const MR_ConstString make__module_target__make__module_target__field_names_foreign_code_file_0_0[3];

static const MR_DuFunctorDesc make__module_target__make__module_target__du_functor_desc_foreign_code_file_0_0;

static const MR_DuFunctorDescPtr make__module_target__make__module_target__du_stag_ordered_foreign_code_file_0_0[1];

static const MR_DuPtagLayout make__module_target__make__module_target__du_ptag_ordered_foreign_code_file_0[1];

static const MR_DuFunctorDescPtr make__module_target__make__module_target__du_name_ordered_foreign_code_file_0[1];

static const MR_Integer make__module_target__make__module_target__functor_number_map_foreign_code_file_0[1];

static MR_bool MR_CALL 
make__module_target____Unify____compilation_task_result_0_0_10001(
  MR_Box make__module_target__wrapper_arg_1,
  MR_Box make__module_target__wrapper_arg_2);

static void MR_CALL 
make__module_target____Compare____compilation_task_result_0_0_10001(
  MR_Box * make__module_target__wrapper_arg_1,
  MR_Box make__module_target__wrapper_arg_2,
  MR_Box make__module_target__wrapper_arg_3);

static MR_bool MR_CALL 
make__module_target____Unify____foreign_code_file_0_0_10001(
  MR_Box make__module_target__wrapper_arg_1,
  MR_Box make__module_target__wrapper_arg_2);

static void MR_CALL 
make__module_target____Compare____foreign_code_file_0_0_10001(
  MR_Box * make__module_target__wrapper_arg_1,
  MR_Box make__module_target__wrapper_arg_2,
  MR_Box make__module_target__wrapper_arg_3);

static MR_Word MR_CALL 
make__module_target__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_99_111_109_112_105_108_97_116_105_111_110_95_116_97_115_107_95_95_91_49_93_95_48_2_f_0(
  MR_Word make__module_target__HeadVar__2_2);

static void MR_CALL 
make__module_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_108_101_116_101_95_97_110_97_108_121_115_105_115_95_114_101_103_105_115_116_114_121_95_116_105_109_101_115_116_97_109_112_115_95_95_91_51_93_95_48_5_p_0(
  MR_Word make__module_target__Globals_6,
  MR_String make__module_target__FileName_7,
  MR_Word make__module_target__STATE_VARIABLE_Timestamps_0_10,
  MR_Word * make__module_target__STATE_VARIABLE_Timestamps_11);

static void MR_CALL 
make__module_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_111_98_106_101_99_116_95_99_111_100_101_95_95_91_54_93_95_48_9_p_0(
  MR_Word make__module_target__Globals_10,
  MR_Word make__module_target__ModuleName_11,
  MR_Word make__module_target__Target_12,
  MR_Word make__module_target__PIC_13,
  MR_Word make__module_target__ErrorStream_14,
  MR_Word * make__module_target__Succeeded_16);

static MR_String MR_CALL 
make__module_target__IntroducedFrom__func__touched_files_process_module__944__1_1_f_0(
  MR_Word make__module_target__LambdaHeadVar__1_67);

static MR_bool MR_CALL 
make__module_target__IntroducedFrom__pred__touched_files_process_module__922__1_2_p_0(
  MR_Word make__module_target__LambdaHeadVar__1_54,
  MR_Word * make__module_target__LambdaHeadVar__2_55);

static void MR_CALL 
make__module_target__IntroducedFrom__pred__delete_timestamp__801__1_3_p_0(
  MR_String make__module_target__TouchedFile_6);

static void MR_CALL 
make__module_target__IntroducedFrom__pred__build_target__382__1_8_p_0_2(
  MR_Box make__module_target__closure_arg,
  MR_Box make__module_target__wrapper_arg_1,
  MR_Box make__module_target__wrapper_arg_2,
  MR_Box * make__module_target__wrapper_arg_3,
  MR_Box make__module_target__wrapper_arg_4,
  MR_Box * make__module_target__wrapper_arg_5);

static void MR_CALL 
make__module_target__IntroducedFrom__pred__build_target__382__1_8_p_0_1(
  MR_Box make__module_target__closure_arg,
  MR_Box make__module_target__wrapper_arg_1,
  MR_Box make__module_target__wrapper_arg_2,
  MR_Box * make__module_target__wrapper_arg_3,
  MR_Box make__module_target__wrapper_arg_4,
  MR_Box * make__module_target__wrapper_arg_5);

static void MR_CALL 
make__module_target__IntroducedFrom__pred__build_target__382__1_8_p_0(
  MR_Word make__module_target__Globals_13,
  MR_Word make__module_target__TouchedTargetFiles_17,
  MR_Word make__module_target__TouchedFiles_18,
  MR_Word make__module_target__MaybeArgFileName_31,
  MR_Word make__module_target__LambdaHeadVar__1_59,
  MR_Word * make__module_target__LambdaHeadVar__2_60);

static void MR_CALL 
make__module_target__IntroducedFrom__pred__make_module_target_file_extra_options__195__1_6_p_0(
  MR_Word make__module_target__Globals_10,
  MR_Word make__module_target__TargetFile_11,
  MR_Word make__module_target__DepFiles0_34,
  MR_Word make__module_target__STATE_VARIABLE_Info_75_75);

static void MR_CALL 
make__module_target__IntroducedFrom__pred__make_module_target_file_extra_options__175__1_10_p_0(
  MR_Word make__module_target__HeadVar__1_77,
  MR_Word make__module_target__HeadVar__2_303,
  MR_Word make__module_target__HeadVar__3_304,
  MR_Word * make__module_target__HeadVar__4_305,
  MR_Word make__module_target__HeadVar__5_306,
  MR_Word * make__module_target__HeadVar__6_307,
  MR_Word make__module_target__HeadVar__7_308,
  MR_Word * make__module_target__HeadVar__8_309);

static MR_bool MR_CALL 
make__module_target____Unify____maybe__maybe_error_2_2(
  MR_Word make__module_target__TypeInfo_for_T_9,
  MR_Word make__module_target__TypeInfo_for_E_10,
  MR_Word make__module_target__HeadVar__1_1,
  MR_Word make__module_target__HeadVar__2_2);

static void MR_CALL 
make__module_target____Compare____compilation_task_result_0_0(
  MR_Word * make__module_target__HeadVar__1_1,
  MR_Word make__module_target__HeadVar__2_2,
  MR_Word make__module_target__HeadVar__3_3);

static MR_bool MR_CALL 
make__module_target____Unify____compilation_task_result_0_0(
  MR_Word make__module_target__HeadVar__1_1,
  MR_Word make__module_target__HeadVar__2_2);

static MR_Word MR_CALL 
make__module_target__target_type_to_pic_1_f_0(
  MR_Word make__module_target__TargetType_3);

static void MR_CALL 
make__module_target__get_fact_table_foreign_code_file_7_p_0(
  MR_Word make__module_target__Globals_8,
  MR_String make__module_target__ObjExt_9,
  MR_Word make__module_target__ModuleName_10,
  MR_String make__module_target__FactTableFile_11,
  MR_Word * make__module_target__FactTableForeignFile_12);

static void MR_CALL 
make__module_target__gather_target_file_timestamp_file_names_6_p_0(
  MR_Word make__module_target__Globals_7,
  MR_Word make__module_target__TouchedTargetFile_8,
  MR_Word make__module_target__STATE_VARIABLE_TimestampFileNames_0_15,
  MR_Word * make__module_target__STATE_VARIABLE_TimestampFileNames_16);

static void MR_CALL 
make__module_target__touched_files_process_module_9_p_0_5(
  MR_Box make__module_target__closure_arg,
  MR_Box make__module_target__wrapper_arg_1,
  MR_Box make__module_target__wrapper_arg_2,
  MR_Box * make__module_target__wrapper_arg_3,
  MR_Box make__module_target__wrapper_arg_4,
  MR_Box * make__module_target__wrapper_arg_5);

static MR_Box MR_CALL 
make__module_target__touched_files_process_module_9_p_0_4(
  MR_Box make__module_target__closure_arg,
  MR_Box make__module_target__wrapper_arg_1);

static void MR_CALL 
make__module_target__touched_files_process_module_9_p_0_3(
  MR_Box make__module_target__closure_arg,
  MR_Box make__module_target__wrapper_arg_1,
  MR_Box * make__module_target__wrapper_arg_2,
  MR_Box make__module_target__wrapper_arg_3,
  MR_Box * make__module_target__wrapper_arg_4);

static MR_bool MR_CALL 
make__module_target__touched_files_process_module_9_p_0_2(
  MR_Box make__module_target__closure_arg,
  MR_Box make__module_target__wrapper_arg_1,
  MR_Box * make__module_target__wrapper_arg_2);

static void MR_CALL 
make__module_target__touched_files_process_module_9_p_0_1(
  MR_Box make__module_target__closure_arg,
  MR_Box make__module_target__wrapper_arg_1,
  MR_Box * make__module_target__wrapper_arg_2,
  MR_Box make__module_target__wrapper_arg_3,
  MR_Box * make__module_target__wrapper_arg_4,
  MR_Box make__module_target__wrapper_arg_5,
  MR_Box * make__module_target__wrapper_arg_6);

static void MR_CALL 
make__module_target__touched_files_process_module_9_p_0(
  MR_Word make__module_target__Globals_10,
  MR_Word make__module_target__TargetFile_11,
  MR_Word make__module_target__Task_12,
  MR_Word * make__module_target__TouchedTargetFiles_13,
  MR_Word * make__module_target__TouchedFileNames_14,
  MR_Word make__module_target__STATE_VARIABLE_Info_0_40,
  MR_Word * make__module_target__STATE_VARIABLE_Info_41);

static void MR_CALL 
make__module_target__touched_files_9_p_0(
  MR_Word make__module_target__Globals_10,
  MR_Word make__module_target__TargetFile_11,
  MR_Word make__module_target__Task_12,
  MR_Word * make__module_target__TouchedTargetFiles_13,
  MR_Word * make__module_target__TouchedFileNames_14,
  MR_Word make__module_target__STATE_VARIABLE_Info_0_29,
  MR_Word * make__module_target__STATE_VARIABLE_Info_30);

static void MR_CALL 
make__module_target__delete_timestamp_4_p_0_1(
  MR_Box make__module_target__closure_arg,
  MR_Box make__module_target__wrapper_arg_1,
  MR_Box * make__module_target__wrapper_arg_2);

static void MR_CALL 
make__module_target__delete_timestamp_4_p_0(
  MR_Word make__module_target__Globals_5,
  MR_String make__module_target__TouchedFile_6,
  MR_Word make__module_target__STATE_VARIABLE_Timestamps_0_9,
  MR_Word * make__module_target__STATE_VARIABLE_Timestamps_10);

static void MR_CALL 
make__module_target__delete_analysis_registry_timestamps_5_p_0(
  MR_Word make__module_target__Globals_6,
  MR_String make__module_target__FileName_7,
  MR_Word make__module_target__HeadVar__3_8,
  MR_Word make__module_target__STATE_VARIABLE_Timestamps_0_10,
  MR_Word * make__module_target__STATE_VARIABLE_Timestamps_11);

static void MR_CALL 
make__module_target__update_target_status_4_p_0(
  MR_Word make__module_target__TargetStatus_5,
  MR_Word make__module_target__TargetFile_6,
  MR_Word make__module_target__STATE_VARIABLE_Info_0_9,
  MR_Word * make__module_target__STATE_VARIABLE_Info_10);

static void MR_CALL 
make__module_target__record_made_target_2_9_p_0_4(
  MR_Box make__module_target__closure_arg,
  MR_Box make__module_target__wrapper_arg_1,
  MR_Box make__module_target__wrapper_arg_2,
  MR_Box make__module_target__wrapper_arg_3,
  MR_Box * make__module_target__wrapper_arg_4);

static void MR_CALL 
make__module_target__record_made_target_2_9_p_0_3(
  MR_Box make__module_target__closure_arg,
  MR_Box make__module_target__wrapper_arg_1,
  MR_Box make__module_target__wrapper_arg_2,
  MR_Box * make__module_target__wrapper_arg_3);

static void MR_CALL 
make__module_target__record_made_target_2_9_p_0_2(
  MR_Box make__module_target__closure_arg,
  MR_Box make__module_target__wrapper_arg_1,
  MR_Box * make__module_target__wrapper_arg_2,
  MR_Box make__module_target__wrapper_arg_3,
  MR_Box * make__module_target__wrapper_arg_4,
  MR_Box make__module_target__wrapper_arg_5,
  MR_Box * make__module_target__wrapper_arg_6);

static void MR_CALL 
make__module_target__record_made_target_2_9_p_0_1(
  MR_Box make__module_target__closure_arg,
  MR_Box make__module_target__wrapper_arg_1,
  MR_Box make__module_target__wrapper_arg_2,
  MR_Box * make__module_target__wrapper_arg_3);

static void MR_CALL 
make__module_target__record_made_target_2_9_p_0(
  MR_Word make__module_target__Globals_10,
  MR_Word make__module_target__Succeeded_11,
  MR_Word make__module_target__TargetFile_12,
  MR_Word make__module_target__TouchedTargetFiles_13,
  MR_Word make__module_target__OtherTouchedFiles_14,
  MR_Word make__module_target__STATE_VARIABLE_Info_0_21,
  MR_Word * make__module_target__STATE_VARIABLE_Info_22);

static void MR_CALL 
make__module_target__invoke_mmc_7_p_0_2(
  MR_Box make__module_target__closure_arg,
  MR_Box make__module_target__wrapper_arg_1,
  MR_Box make__module_target__wrapper_arg_2,
  MR_Box * make__module_target__wrapper_arg_3);

static MR_Box MR_CALL 
make__module_target__invoke_mmc_7_p_0_1(
  MR_Box make__module_target__closure_arg,
  MR_Box make__module_target__wrapper_arg_1);

static void MR_CALL 
make__module_target__invoke_mmc_7_p_0(
  MR_Word make__module_target__Globals_8,
  MR_Word make__module_target__ErrorStream_9,
  MR_Word make__module_target__MaybeArgFileName_10,
  MR_Word make__module_target__Args_11,
  MR_Word * make__module_target__Succeeded_12);

static void MR_CALL 
make__module_target__call_mercury_compile_main_5_p_0(
  MR_Word make__module_target__Globals_6,
  MR_Word make__module_target__Args_7,
  MR_Word * make__module_target__Succeeded_8);

static void MR_CALL 
make__module_target__fact_table_foreign_code_file_7_p_0(
  MR_Word make__module_target__Globals_8,
  MR_Word make__module_target__ModuleName_9,
  MR_Word make__module_target__PIC_10,
  MR_String make__module_target__FactTableName_11,
  MR_Word * make__module_target__ForeignCodeFile_12);

static void MR_CALL 
make__module_target__get_foreign_code_file_7_p_0(
  MR_Word make__module_target__Globals_8,
  MR_Word make__module_target__ModuleName_9,
  MR_Word make__module_target__PIC_10,
  MR_Word make__module_target__Lang_11,
  MR_Word * make__module_target__ForeignCodeFile_12);

static MR_Word MR_CALL 
make__module_target__forkable_module_compilation_task_type_1_f_0(
  MR_Word make__module_target__HeadVar__1_1);

static void MR_CALL 
make__module_target__compile_foreign_code_file_8_p_0(
  MR_Word make__module_target__Globals_9,
  MR_Word make__module_target__ErrorStream_10,
  MR_Word make__module_target__PIC_11,
  MR_Word make__module_target__Imports_12,
  MR_Word make__module_target__ForeignCodeFile_13,
  MR_Word * make__module_target__Succeeded_14);

static void MR_CALL 
make__module_target__build_object_code_9_p_0(
  MR_Word make__module_target__Globals_10,
  MR_Word make__module_target__ModuleName_11,
  MR_Word make__module_target__Target_12,
  MR_Word make__module_target__PIC_13,
  MR_Word make__module_target__ErrorStream_14,
  MR_Word make__module_target___Imports_15,
  MR_Word * make__module_target__Succeeded_16);

static void MR_CALL 
make__module_target__build_target_2_12_p_0_7(
  MR_Box make__module_target__closure_arg,
  MR_Box * make__module_target__wrapper_arg_1,
  MR_Box make__module_target__wrapper_arg_2,
  MR_Box * make__module_target__wrapper_arg_3);

static void MR_CALL 
make__module_target__build_target_2_12_p_0_6(
  MR_Box make__module_target__closure_arg,
  MR_Box * make__module_target__wrapper_arg_1,
  MR_Box make__module_target__wrapper_arg_2,
  MR_Box * make__module_target__wrapper_arg_3);

static void MR_CALL 
make__module_target__build_target_2_12_p_0_5(
  MR_Box make__module_target__closure_arg,
  MR_Box * make__module_target__wrapper_arg_1,
  MR_Box make__module_target__wrapper_arg_2,
  MR_Box * make__module_target__wrapper_arg_3);

static void MR_CALL 
make__module_target__build_target_2_12_p_0_4(
  MR_Box make__module_target__closure_arg,
  MR_Box make__module_target__wrapper_arg_1,
  MR_Box make__module_target__wrapper_arg_2,
  MR_Box * make__module_target__wrapper_arg_3);

static MR_Box MR_CALL 
make__module_target__build_target_2_12_p_0_3(
  MR_Box make__module_target__closure_arg,
  MR_Box make__module_target__wrapper_arg_1);

static void MR_CALL 
make__module_target__build_target_2_12_p_0_2(
  MR_Box make__module_target__closure_arg,
  MR_Box * make__module_target__wrapper_arg_1,
  MR_Box make__module_target__wrapper_arg_2,
  MR_Box * make__module_target__wrapper_arg_3);

static void MR_CALL 
make__module_target__build_target_2_12_p_0_1(
  MR_Box make__module_target__closure_arg,
  MR_Box * make__module_target__wrapper_arg_1,
  MR_Box make__module_target__wrapper_arg_2,
  MR_Box * make__module_target__wrapper_arg_3);

static void MR_CALL 
make__module_target__build_target_2_12_p_0(
  MR_Word make__module_target__ModuleName_13,
  MR_Word make__module_target__Task_14,
  MR_Word make__module_target__ArgFileName_15,
  MR_Word make__module_target__Imports_16,
  MR_Word make__module_target__Globals_17,
  MR_Word make__module_target__AllOptionArgs_18,
  MR_Word make__module_target__ErrorStream_19,
  MR_Word * make__module_target__Succeeded_20,
  MR_Word make__module_target__STATE_VARIABLE_Info_0_36,
  MR_Word * make__module_target__STATE_VARIABLE_Info_37);

static void MR_CALL 
make__module_target__build_target_12_p_0_3(
  MR_Box make__module_target__closure_arg,
  MR_Box * make__module_target__wrapper_arg_1,
  MR_Box make__module_target__wrapper_arg_2,
  MR_Box * make__module_target__wrapper_arg_3,
  MR_Box make__module_target__wrapper_arg_4,
  MR_Box * make__module_target__wrapper_arg_5);

static void MR_CALL 
make__module_target__build_target_12_p_0_2(
  MR_Box make__module_target__closure_arg,
  MR_Box make__module_target__wrapper_arg_1,
  MR_Box make__module_target__wrapper_arg_2,
  MR_Box make__module_target__wrapper_arg_3,
  MR_Box * make__module_target__wrapper_arg_4,
  MR_Box make__module_target__wrapper_arg_5,
  MR_Box * make__module_target__wrapper_arg_6,
  MR_Box make__module_target__wrapper_arg_7,
  MR_Box * make__module_target__wrapper_arg_8);

static void MR_CALL 
make__module_target__build_target_12_p_0_1(
  MR_Box make__module_target__closure_arg,
  MR_Box make__module_target__wrapper_arg_1,
  MR_Box * make__module_target__wrapper_arg_2,
  MR_Box make__module_target__wrapper_arg_3,
  MR_Box * make__module_target__wrapper_arg_4);

static void MR_CALL 
make__module_target__build_target_12_p_0(
  MR_Word make__module_target__Globals_13,
  MR_Word make__module_target__CompilationTask_14,
  MR_Word make__module_target__TargetFile_15,
  MR_Word make__module_target__Imports_16,
  MR_Word make__module_target__TouchedTargetFiles_17,
  MR_Word make__module_target__TouchedFiles_18,
  MR_Word make__module_target__ExtraOptions_19,
  MR_Word * make__module_target__Succeeded_20,
  MR_Word make__module_target__STATE_VARIABLE_Info_0_44,
  MR_Word * make__module_target__STATE_VARIABLE_Info_45);

static void MR_CALL 
make__module_target__force_reanalysis_of_suboptimal_module_6_p_0(
  MR_Word make__module_target__Globals_7,
  MR_Word make__module_target__ModuleName_8,
  MR_Word * make__module_target__ForceReanalysis_9,
  MR_Word make__module_target__Info_10);

static MR_Box MR_CALL 
make__module_target__make_dependency_files_10_p_0_10(
  MR_Box make__module_target__closure_arg,
  MR_Box make__module_target__wrapper_arg_1,
  MR_Box make__module_target__wrapper_arg_2);

static MR_Box MR_CALL 
make__module_target__make_dependency_files_10_p_0_9(
  MR_Box make__module_target__closure_arg,
  MR_Box make__module_target__wrapper_arg_1,
  MR_Box make__module_target__wrapper_arg_2);

static void MR_CALL 
make__module_target__make_dependency_files_10_p_0_8(
  MR_Box make__module_target__closure_arg,
  MR_Box make__module_target__wrapper_arg_1,
  MR_Box * make__module_target__wrapper_arg_2,
  MR_Box make__module_target__wrapper_arg_3,
  MR_Box * make__module_target__wrapper_arg_4,
  MR_Box make__module_target__wrapper_arg_5,
  MR_Box * make__module_target__wrapper_arg_6);

static void MR_CALL 
make__module_target__make_dependency_files_10_p_0_7(
  MR_Box make__module_target__closure_arg,
  MR_Box make__module_target__wrapper_arg_1,
  MR_Box * make__module_target__wrapper_arg_2,
  MR_Box make__module_target__wrapper_arg_3,
  MR_Box * make__module_target__wrapper_arg_4,
  MR_Box make__module_target__wrapper_arg_5,
  MR_Box * make__module_target__wrapper_arg_6);

static void MR_CALL 
make__module_target__make_dependency_files_10_p_0_2(
  MR_Box make__module_target__closure_arg,
  MR_Box make__module_target__wrapper_arg_1,
  MR_Box * make__module_target__wrapper_arg_2,
  MR_Box make__module_target__wrapper_arg_3,
  MR_Box * make__module_target__wrapper_arg_4,
  MR_Box make__module_target__wrapper_arg_5,
  MR_Box * make__module_target__wrapper_arg_6);

static void MR_CALL 
make__module_target__make_dependency_files_10_p_0_1(
  MR_Box make__module_target__closure_arg,
  MR_Box make__module_target__wrapper_arg_1,
  MR_Box make__module_target__wrapper_arg_2,
  MR_Box * make__module_target__wrapper_arg_3,
  MR_Box make__module_target__wrapper_arg_4,
  MR_Box * make__module_target__wrapper_arg_5,
  MR_Box make__module_target__wrapper_arg_6,
  MR_Box * make__module_target__wrapper_arg_7);

static void MR_CALL 
make__module_target__make_dependency_files_10_p_0_3(
  void * make__module_target__env_ptr_arg);

static void MR_CALL 
make__module_target__make_dependency_files_10_p_0_5(
  void * make__module_target__env_ptr_arg);

static void MR_CALL 
make__module_target__make_dependency_files_10_p_0_4(
  void * make__module_target__env_ptr_arg);

static void MR_CALL 
make__module_target__make_dependency_files_10_p_0_6(
  void * make__module_target__env_ptr_arg);

static void MR_CALL 
make__module_target__make_dependency_files_10_p_0(
  MR_Word make__module_target__Globals_11,
  MR_Word make__module_target__TargetFile_12,
  MR_Word make__module_target__DepFilesToMake_13,
  MR_Word make__module_target__TouchedTargetFiles_14,
  MR_Word make__module_target__TouchedFiles_15,
  MR_Word * make__module_target__DepsResult_16,
  MR_Word make__module_target__STATE_VARIABLE_Info_0_31,
  MR_Word * make__module_target__STATE_VARIABLE_Info_32);

static void MR_CALL 
make__module_target__make_module_target_file_extra_options_8_p_0_7(
  MR_Box make__module_target__closure_arg,
  MR_Box make__module_target__wrapper_arg_1,
  MR_Box make__module_target__wrapper_arg_2,
  MR_Box * make__module_target__wrapper_arg_3);

static void MR_CALL 
make__module_target__make_module_target_file_extra_options_8_p_0_6(
  MR_Box make__module_target__closure_arg,
  MR_Box make__module_target__wrapper_arg_1,
  MR_Box make__module_target__wrapper_arg_2,
  MR_Box * make__module_target__wrapper_arg_3);

static void MR_CALL 
make__module_target__make_module_target_file_extra_options_8_p_0_5(
  MR_Box make__module_target__closure_arg,
  MR_Box make__module_target__wrapper_arg_1,
  MR_Box make__module_target__wrapper_arg_2,
  MR_Box * make__module_target__wrapper_arg_3);

static void MR_CALL 
make__module_target__make_module_target_file_extra_options_8_p_0_4(
  MR_Box make__module_target__closure_arg,
  MR_Box make__module_target__wrapper_arg_1,
  MR_Box make__module_target__wrapper_arg_2,
  MR_Box * make__module_target__wrapper_arg_3);

static void MR_CALL 
make__module_target__make_module_target_file_extra_options_8_p_0_3(
  MR_Box make__module_target__closure_arg,
  MR_Box make__module_target__wrapper_arg_1,
  MR_Box * make__module_target__wrapper_arg_2);

static void MR_CALL 
make__module_target__make_module_target_file_extra_options_8_p_0_2(
  MR_Box make__module_target__closure_arg,
  MR_Box make__module_target__wrapper_arg_1,
  MR_Box make__module_target__wrapper_arg_2,
  MR_Box * make__module_target__wrapper_arg_3,
  MR_Box make__module_target__wrapper_arg_4,
  MR_Box * make__module_target__wrapper_arg_5,
  MR_Box make__module_target__wrapper_arg_6,
  MR_Box * make__module_target__wrapper_arg_7,
  MR_Box make__module_target__wrapper_arg_8,
  MR_Box * make__module_target__wrapper_arg_9);

static void MR_CALL 
make__module_target__make_module_target_file_extra_options_8_p_0_1(
  MR_Box make__module_target__closure_arg,
  MR_Box make__module_target__wrapper_arg_1,
  MR_Box make__module_target__wrapper_arg_2,
  MR_Box * make__module_target__wrapper_arg_3);

static void MR_CALL 
make__module_target__make_module_target_file_extra_options_8_p_0(
  MR_Word make__module_target__ExtraOptions_9,
  MR_Word make__module_target__Globals_10,
  MR_Word make__module_target__TargetFile_11,
  MR_Word * make__module_target__Succeeded_12,
  MR_Word make__module_target__STATE_VARIABLE_Info_0_44,
  MR_Word * make__module_target__STATE_VARIABLE_Info_45);

static void MR_CALL 
make__module_target__external_foreign_code_files_6_p_0_1(
  MR_Box make__module_target__closure_arg,
  MR_Box make__module_target__wrapper_arg_1,
  MR_Box * make__module_target__wrapper_arg_2,
  MR_Box make__module_target__wrapper_arg_3,
  MR_Box * make__module_target__wrapper_arg_4);


static /* final */ const MR_Box make__module_target_scalar_common_1[29][2];

static /* final */ const MR_Box make__module_target_scalar_common_2[13][3];

static /* final */ const MR_Box make__module_target_scalar_common_3[12][1];

static /* final */ const MR_Box make__module_target_scalar_common_5[8][10];

static /* final */ const MR_Box make__module_target_scalar_common_6[2][7];

static /* final */ const MR_Box make__module_target_scalar_common_7[5][4];

static /* final */ const MR_Box make__module_target_scalar_common_8[1][13];

static /* final */ const MR_Box make__module_target_scalar_common_9[3][9];

static /* final */ const MR_Box make__module_target_scalar_common_10[4][11];

static /* final */ const MR_Box make__module_target_scalar_common_11[2][6];

static /* final */ const MR_Box make__module_target_scalar_common_12[1][15];

static /* final */ const MR_Box make__module_target_scalar_common_13[2][12];

static /* final */ const MR_Box make__module_target_scalar_common_14[3][5];

static /* final */ const MR_Box make__module_target_scalar_common_15[2][8];


/* sealed */ struct make__module_target__vector_common_type_4_0_s {
  const MR_Word make__module_target__vector_common_type_4_0__vct_4_f_0;
};

static /* final */ const struct make__module_target__vector_common_type_4_0_s make__module_target_vector_common_4[12];



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
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 7 */
  {
    ((MR_Box) (&make__module_target_scalar_common_3[0])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &make__module_target_scalar_common_1[6])))
  },
  /* row 8 */
  {
    ((MR_Box) ((MR_String) "--compile-to-c")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 9 */
  {
    ((MR_Box) (&make__module_target_scalar_common_3[1])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &make__module_target_scalar_common_1[8])))
  },
  /* row 10 */
  {
    ((MR_Box) ((MR_String) "--csharp-only")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 11 */
  {
    ((MR_Box) (&make__module_target_scalar_common_3[1])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &make__module_target_scalar_common_1[10])))
  },
  /* row 12 */
  {
    ((MR_Box) ((MR_String) "--erlang-only")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 13 */
  {
    ((MR_Box) (&make__module_target_scalar_common_3[1])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &make__module_target_scalar_common_1[12])))
  },
  /* row 14 */
  {
    ((MR_Box) ((MR_String) "--errorcheck-only")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 15 */
  {
    ((MR_Box) (&make__module_target_scalar_common_3[2])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &make__module_target_scalar_common_1[14])))
  },
  /* row 16 */
  {
    ((MR_Box) ((MR_String) "--make-optimization-interface")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 17 */
  {
    ((MR_Box) (&make__module_target_scalar_common_3[3])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &make__module_target_scalar_common_1[16])))
  },
  /* row 18 */
  {
    ((MR_Box) ((MR_String) "--java-only")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 19 */
  {
    ((MR_Box) (&make__module_target_scalar_common_3[1])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &make__module_target_scalar_common_1[18])))
  },
  /* row 20 */
  {
    ((MR_Box) ((MR_String) "--make-interface")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 21 */
  {
    ((MR_Box) (&make__module_target_scalar_common_3[4])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &make__module_target_scalar_common_1[20])))
  },
  /* row 22 */
  {
    ((MR_Box) ((MR_String) "--make-private-interface")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 23 */
  {
    ((MR_Box) (&make__module_target_scalar_common_3[5])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &make__module_target_scalar_common_1[22])))
  },
  /* row 24 */
  {
    ((MR_Box) ((MR_String) "--make-short-interface")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 25 */
  {
    ((MR_Box) (&make__module_target_scalar_common_3[6])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &make__module_target_scalar_common_1[24])))
  },
  /* row 26 */
  {
    ((MR_Box) ((MR_String) "--make-xml-doc")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 27 */
  {
    ((MR_Box) (&make__module_target_scalar_common_3[7])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &make__module_target_scalar_common_1[26])))
  },
  /* row 28 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &make__module_target_scalar_common_3[11]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
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
    ((MR_Box) (&make__module_target_scalar_common_5[1])),
    ((MR_Box) (make__module_target__make_dependency_files_10_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&make__module_target_scalar_common_11[0])),
    ((MR_Box) (make__module_target__make_dependency_files_10_p_0_9)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&make__module_target_scalar_common_11[0])),
    ((MR_Box) (make__module_target__make_dependency_files_10_p_0_10)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&make__module_target_scalar_common_14[0])),
    ((MR_Box) (make__module_target__build_target_2_12_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&make__module_target_scalar_common_11[1])),
    ((MR_Box) (make__module_target__build_target_2_12_p_0_4)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 9 */
  {
    ((MR_Box) (&make__module_target_scalar_common_14[0])),
    ((MR_Box) (make__module_target__invoke_mmc_7_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 10 */
  {
    ((MR_Box) (&make__module_target_scalar_common_11[1])),
    ((MR_Box) (make__module_target__invoke_mmc_7_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 11 */
  {
    ((MR_Box) (&make__module_target_scalar_common_14[1])),
    ((MR_Box) (make__module_target__touched_files_process_module_9_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 12 */
  {
    ((MR_Box) (&make__module_target_scalar_common_14[2])),
    ((MR_Box) (make__module_target__touched_files_process_module_9_p_0_4)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box make__module_target_scalar_common_3[12][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) 5))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_Integer) 6))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_Integer) 4))
  },
  /* row 4 */
  {
    ((MR_Box) ((MR_Integer) 2))
  },
  /* row 5 */
  {
    ((MR_Box) ((MR_Integer) 3))
  },
  /* row 6 */
  {
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 7 */
  {
    ((MR_Box) ((MR_Integer) 7))
  },
  /* row 8 */
  {
    ((MR_Box) (((MR_Integer) 0 | (((((MR_Integer) 0 << (MR_Integer) 1)) | (((((MR_Integer) 0 << (MR_Integer) 2)) | (((((MR_Integer) 0 << (MR_Integer) 3)) | (((MR_Integer) 0 << (MR_Integer) 4)))))))))))
  },
  /* row 9 */
  {
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 10 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 11 */
  {
    ((MR_Box) ((MR_Integer) 1))
  },
};

static /* final */ const MR_Box make__module_target_scalar_common_5[8][10] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 7)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&make__module_target__make__module_target__type_ctor_info_foreign_code_file_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 7)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&make__dependencies__make__dependencies__type_ctor_info_dependency_file_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 7)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&make__make__type_ctor_info_target_file_0)),
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
    ((MR_Box) (MR_Word) ((MR_Integer) 7)),
    ((MR_Box) (&make__module_target__list__pti_list_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&make__module_target__maybe__pti_maybe_error_2__plain_libs__timestamp__type_ctor_info_timestamp_0__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 7)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&make__module_target__maybe__pti_maybe_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&make__module_target__list__pti_list_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 7)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&make__module_target__maybe__pti_maybe_1__plain_parse_tree__module_imports__type_ctor_info_module_and_imports_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 7)),
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
    ((MR_Box) (MR_Word) ((MR_Integer) 7)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&libs__options__libs__options__type_ctor_info_option_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box make__module_target_scalar_common_6[2][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&make__make__type_ctor_info_dependency_status_0)),
    ((MR_Box) (&make__make__type_ctor_info_target_file_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&make__module_target__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_maybe__ti_maybe_error_2libs__timestamp__type_ctor_info_timestamp_0builtin__type_ctor_info_string_0)),
    ((MR_Box) (&make__module_target__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_maybe__ti_maybe_error_2libs__timestamp__type_ctor_info_timestamp_0builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box make__module_target_scalar_common_7[5][4] = {
  /* row 0 */
  {
    ((MR_Box) (&make__module_target_scalar_common_6[0])),
    ((MR_Box) (make__module_target__make_module_target_file_extra_options_8_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 1 */
  {
    ((MR_Box) (&make__module_target_scalar_common_6[0])),
    ((MR_Box) (make__module_target__make_module_target_file_extra_options_8_p_0_4)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 3))
  },
  /* row 2 */
  {
    ((MR_Box) (&make__module_target_scalar_common_6[0])),
    ((MR_Box) (make__module_target__make_module_target_file_extra_options_8_p_0_5)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 3))
  },
  /* row 3 */
  {
    ((MR_Box) (&make__module_target_scalar_common_6[0])),
    ((MR_Box) (make__module_target__make_module_target_file_extra_options_8_p_0_6)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 3))
  },
  /* row 4 */
  {
    ((MR_Box) (&make__module_target_scalar_common_6[0])),
    ((MR_Box) (make__module_target__make_module_target_file_extra_options_8_p_0_7)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 2))
  },
};

static /* final */ const MR_Box make__module_target_scalar_common_8[1][13] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 10)),
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

static /* final */ const MR_Box make__module_target_scalar_common_9[3][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&make__make__type_ctor_info_target_file_0)),
    ((MR_Box) (&make__module_target__sparse_bitset__pti_sparse_bitset_1__plain_make__dependencies__type_ctor_info_dependency_file_index_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&backend_libs__compile_target_code__backend_libs__compile_target_code__type_ctor_info_pic_0)),
    ((MR_Box) (&parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_module_and_imports_0)),
    ((MR_Box) (&make__module_target__list__pti_list_1__plain_make__module_target__type_ctor_info_foreign_code_file_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&make__make__type_ctor_info_target_file_0)),
    ((MR_Box) (&make__module_target__list__pti_list_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&make__module_target__list__pti_list_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box make__module_target_scalar_common_10[4][11] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
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
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&make__module_target__list__pti_list_1__plain_make__type_ctor_info_target_file_0)),
    ((MR_Box) (&make__module_target__list__pti_list_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&make__module_target__maybe__pti_maybe_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&backend_libs__compile_target_code__backend_libs__compile_target_code__type_ctor_info_pic_0)),
    ((MR_Box) (&parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_module_and_imports_0)),
    ((MR_Box) (&make__module_target__make__module_target__type_ctor_info_foreign_code_file_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&parse_tree__file_names__parse_tree__file_names__type_ctor_info_maybe_search_0)),
    ((MR_Box) (&make__make__type_ctor_info_target_file_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box make__module_target_scalar_common_11[2][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&make__module_target__maybe__pti_maybe_error_2__plain_libs__timestamp__type_ctor_info_timestamp_0__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&make__module_target__maybe__pti_maybe_error_2__plain_libs__timestamp__type_ctor_info_timestamp_0__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&make__module_target__maybe__pti_maybe_error_2__plain_libs__timestamp__type_ctor_info_timestamp_0__plain_builtin__type_ctor_info_string_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box make__module_target_scalar_common_12[1][15] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 12)),
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

static /* final */ const MR_Box make__module_target_scalar_common_13[2][12] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 9)),
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
    ((MR_Box) (MR_Word) ((MR_Integer) 9)),
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

static /* final */ const MR_Box make__module_target_scalar_common_14[3][5] = {
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
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&make__module_target__maybe__pti_maybe_1__plain_parse_tree__module_imports__type_ctor_info_module_and_imports_0)),
    ((MR_Box) (&parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_module_and_imports_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&make__module_target__make__module_target__type_ctor_info_foreign_code_file_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box make__module_target_scalar_common_15[2][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&make__module_target__list__pti_list_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&make__module_target__maybe__pti_maybe_error_2__plain_libs__timestamp__type_ctor_info_timestamp_0__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&make__module_target__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_maybe__ti_maybe_error_2libs__timestamp__type_ctor_info_timestamp_0builtin__type_ctor_info_string_0)),
    ((MR_Box) (&make__module_target__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_maybe__ti_maybe_error_2libs__timestamp__type_ctor_info_timestamp_0builtin__type_ctor_info_string_0))
  },
};


static /* final */ const struct make__module_target__vector_common_type_4_0_s make__module_target_vector_common_4[12] = {
  /* row 0 */   {     (MR_Integer) 1 },
  /* row 1 */   {     (MR_Integer) 1 },
  /* row 2 */   {     (MR_Integer) 1 },
  /* row 3 */   {     (MR_Integer) 0 },
  /* row 4 */   {     (MR_Integer) 0 },
  /* row 5 */   {     (MR_Integer) 0 },
  /* row 6 */   {     (MR_Integer) 0 },
  /* row 7 */   {     (MR_Integer) 0 },
  /* row 8 */   {     (MR_Integer) 1 },
  /* row 9 */   {     (MR_Integer) 1 },
  /* row 10 */   {     (MR_Integer) 1 },
  /* row 11 */   {     (MR_Integer) 1 },
};


#include "dir.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "version_array.mh"
#include "libs.process_util.mh"
#include "make.util.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_TypeInfo_Struct1 make__module_target__sparse_bitset__ti_sparse_bitset_1make__dependencies__type_ctor_info_dependency_file_index_0 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  {
    (MR_TypeInfo) &make__dependencies__make__dependencies__type_ctor_info_dependency_file_index_0
  }
};

static const MR_VA_PseudoTypeInfo_Struct8 make__module_target____vpti_pred_8__plain_libs__globals__type_ctor_info_globals_0__plain_make__dependencies__type_ctor_info_module_index_0__plain_bool__type_ctor_info_bool_0__plain_sparse_bitset__ti_sparse_bitset_1make__dependencies__type_ctor_info_dependency_file_index_0__plain_make__type_ctor_info_make_info_0__plain_make__type_ctor_info_make_info_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 8,
  {
    (MR_PseudoTypeInfo) &libs__globals__libs__globals__type_ctor_info_globals_0,
    (MR_PseudoTypeInfo) &make__dependencies__make__dependencies__type_ctor_info_module_index_0,
    (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
    (MR_PseudoTypeInfo) &make__module_target__sparse_bitset__ti_sparse_bitset_1make__dependencies__type_ctor_info_dependency_file_index_0,
    (MR_PseudoTypeInfo) &make__make__type_ctor_info_make_info_0,
    (MR_PseudoTypeInfo) &make__make__type_ctor_info_make_info_0,
    (MR_PseudoTypeInfo) &mercury__io__io__type_ctor_info_state_0,
    (MR_PseudoTypeInfo) &mercury__io__io__type_ctor_info_state_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 make__module_target__sparse_bitset__pti_sparse_bitset_1__plain_make__dependencies__type_ctor_info_dependency_file_index_0 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  {
    (MR_PseudoTypeInfo) &make__dependencies__make__dependencies__type_ctor_info_dependency_file_index_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 make__module_target__maybe__pti_maybe_error_2__plain_libs__timestamp__type_ctor_info_timestamp_0__plain_builtin__type_ctor_info_string_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_error_2,
  {
    (MR_PseudoTypeInfo) &libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0,
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 make__module_target__list__pti_list_1__plain_builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 make__module_target__list__pti_list_1__plain_make__type_ctor_info_target_file_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &make__make__type_ctor_info_target_file_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 make__module_target__maybe__pti_maybe_1__plain_builtin__type_ctor_info_string_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

static const MR_FA_TypeInfo_Struct1 make__module_target__list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

static const MR_VA_PseudoTypeInfo_Struct8 make__module_target____vpti_pred_8__plain_libs__globals__type_ctor_info_globals_0__plain_list__ti_list_1builtin__type_ctor_info_string_0__plain_io__type_ctor_info_output_stream_0__plain_bool__type_ctor_info_bool_0__plain_make__type_ctor_info_make_info_0__plain_make__type_ctor_info_make_info_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 8,
  {
    (MR_PseudoTypeInfo) &libs__globals__libs__globals__type_ctor_info_globals_0,
    (MR_PseudoTypeInfo) &make__module_target__list__ti_list_1builtin__type_ctor_info_string_0,
    (MR_PseudoTypeInfo) &mercury__io__io__type_ctor_info_output_stream_0,
    (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
    (MR_PseudoTypeInfo) &make__make__type_ctor_info_make_info_0,
    (MR_PseudoTypeInfo) &make__make__type_ctor_info_make_info_0,
    (MR_PseudoTypeInfo) &mercury__io__io__type_ctor_info_state_0,
    (MR_PseudoTypeInfo) &mercury__io__io__type_ctor_info_state_0
  }
};

static const MR_FA_TypeInfo_Struct2 make__module_target__maybe__ti_maybe_error_2libs__timestamp__type_ctor_info_timestamp_0builtin__type_ctor_info_string_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_error_2,
  {
    (MR_TypeInfo) &libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0,
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 make__module_target__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_maybe__ti_maybe_error_2libs__timestamp__type_ctor_info_timestamp_0builtin__type_ctor_info_string_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_PseudoTypeInfo) &make__module_target__maybe__ti_maybe_error_2libs__timestamp__type_ctor_info_timestamp_0builtin__type_ctor_info_string_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 make__module_target__maybe__pti_maybe_1__plain_parse_tree__module_imports__type_ctor_info_module_and_imports_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_module_and_imports_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 make__module_target__list__pti_list_1__plain_make__module_target__type_ctor_info_foreign_code_file_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &make__module_target__make__module_target__type_ctor_info_foreign_code_file_0
  }
};

static const MR_FA_TypeInfo_Struct2 make__module_target__pair__ti_pair_2make__type_ctor_info_compilation_task_type_0list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &make__make__type_ctor_info_compilation_task_type_0,
    (MR_TypeInfo) &make__module_target__list__ti_list_1builtin__type_ctor_info_string_0
  }
};

const MR_TypeCtorInfo_Struct make__module_target__make__module_target__type_ctor_info_compilation_task_result_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (make__module_target____Unify____compilation_task_result_0_0_10001)),
  ((MR_Box) (make__module_target____Compare____compilation_task_result_0_0_10001)),
  (MR_String) "make.module_target",
  (MR_String) "compilation_task_result",
  {     NULL },
  {     (MR_PseudoTypeInfo) &make__module_target__pair__ti_pair_2make__type_ctor_info_compilation_task_type_0list__ti_list_1builtin__type_ctor_info_string_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_PseudoTypeInfo make__module_target__make__module_target__field_types_foreign_code_file_0_0[3] = {
  (MR_PseudoTypeInfo) &libs__globals__libs__globals__type_ctor_info_foreign_language_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

static const MR_ConstString make__module_target__make__module_target__field_names_foreign_code_file_0_0[3] = {
  (MR_String) "foreign_language",
  (MR_String) "target_file",
  (MR_String) "object_file"
};

static const MR_DuFunctorDesc make__module_target__make__module_target__du_functor_desc_foreign_code_file_0_0 = {
  (MR_String) "foreign_code_file",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  make__module_target__make__module_target__field_types_foreign_code_file_0_0,
  make__module_target__make__module_target__field_names_foreign_code_file_0_0,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr make__module_target__make__module_target__du_stag_ordered_foreign_code_file_0_0[1] = {
  &make__module_target__make__module_target__du_functor_desc_foreign_code_file_0_0
};

static const MR_DuPtagLayout make__module_target__make__module_target__du_ptag_ordered_foreign_code_file_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    make__module_target__make__module_target__du_stag_ordered_foreign_code_file_0_0
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
  (MR_Integer) 17,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (make__module_target____Unify____foreign_code_file_0_0_10001)),
  ((MR_Box) (make__module_target____Compare____foreign_code_file_0_0_10001)),
  (MR_String) "make.module_target",
  (MR_String) "foreign_code_file",
  {     make__module_target__make__module_target__du_name_ordered_foreign_code_file_0 },
  {     make__module_target__make__module_target__du_ptag_ordered_foreign_code_file_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  make__module_target__make__module_target__functor_number_map_foreign_code_file_0
};

static MR_bool MR_CALL 
make__module_target____Unify____compilation_task_result_0_0_10001(
  MR_Box make__module_target__wrapper_arg_1,
  MR_Box make__module_target__wrapper_arg_2)
{
  {
    MR_bool make__module_target__succeeded;

    {
      make__module_target__succeeded = make__module_target____Unify____compilation_task_result_0_0(((MR_Word) make__module_target__wrapper_arg_1), ((MR_Word) make__module_target__wrapper_arg_2));
    }
    return make__module_target__succeeded;
  }
}

static void MR_CALL 
make__module_target____Compare____compilation_task_result_0_0_10001(
  MR_Box * make__module_target__wrapper_arg_1,
  MR_Box make__module_target__wrapper_arg_2,
  MR_Box make__module_target__wrapper_arg_3)
{
  {
    MR_Word make__module_target__conv0_HeadVar__1_1;

    {
      make__module_target____Compare____compilation_task_result_0_0(&make__module_target__conv0_HeadVar__1_1, ((MR_Word) make__module_target__wrapper_arg_2), ((MR_Word) make__module_target__wrapper_arg_3));
    }
    *make__module_target__wrapper_arg_1 = ((MR_Box) (make__module_target__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
make__module_target____Unify____foreign_code_file_0_0_10001(
  MR_Box make__module_target__wrapper_arg_1,
  MR_Box make__module_target__wrapper_arg_2)
{
  {
    MR_bool make__module_target__succeeded;

    {
      make__module_target__succeeded = make__module_target____Unify____foreign_code_file_0_0(((MR_Word) make__module_target__wrapper_arg_1), ((MR_Word) make__module_target__wrapper_arg_2));
    }
    return make__module_target__succeeded;
  }
}

static void MR_CALL 
make__module_target____Compare____foreign_code_file_0_0_10001(
  MR_Box * make__module_target__wrapper_arg_1,
  MR_Box make__module_target__wrapper_arg_2,
  MR_Box make__module_target__wrapper_arg_3)
{
  {
    MR_Word make__module_target__conv0_HeadVar__1_1;

    {
      make__module_target____Compare____foreign_code_file_0_0(&make__module_target__conv0_HeadVar__1_1, ((MR_Word) make__module_target__wrapper_arg_2), ((MR_Word) make__module_target__wrapper_arg_3));
    }
    *make__module_target__wrapper_arg_1 = ((MR_Box) (make__module_target__conv0_HeadVar__1_1));
  }
}

static MR_Word MR_CALL 
make__module_target__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_99_111_109_112_105_108_97_116_105_111_110_95_116_97_115_107_95_95_91_49_93_95_48_2_f_0(
  MR_Word make__module_target__HeadVar__2_2)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool make__module_target__succeeded;
        MR_Word make__module_target__HeadVar__3_3;

        switch (MR_tag((MR_Word) make__module_target__HeadVar__2_2)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_unmkbody(make__module_target__HeadVar__2_2)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  {
                    mercury__require__unexpected_3_p_0((MR_String) "make.module_target", (MR_String) "function \140make.module_target.compilation_task\'/2", (MR_String) "compilation_task");
                  }
                }
                break;
              case (MR_Integer) 1:
                make__module_target__HeadVar__3_3 = (MR_Word) &make__module_target_scalar_common_1[15];
                break;
              case (MR_Integer) 2:
                make__module_target__HeadVar__3_3 = (MR_Word) &make__module_target_scalar_common_1[23];
                break;
              case (MR_Integer) 3:
                make__module_target__HeadVar__3_3 = (MR_Word) &make__module_target_scalar_common_1[21];
                break;
              case (MR_Integer) 4:
                {
                  /* direct tailcall eliminated */
                  {
                    make__module_target__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3));
                  }
                  continue;
                }
                break;
              case (MR_Integer) 5:
                make__module_target__HeadVar__3_3 = (MR_Word) &make__module_target_scalar_common_1[25];
                break;
              case (MR_Integer) 6:
                make__module_target__HeadVar__3_3 = (MR_Word) &make__module_target_scalar_common_1[17];
                break;
              case (MR_Integer) 7:
                make__module_target__HeadVar__3_3 = (MR_Word) &make__module_target_scalar_common_1[7];
                break;
              case (MR_Integer) 8:
                {
                  {
                    mercury__require__unexpected_3_p_0((MR_String) "make.module_target", (MR_String) "function \140make.module_target.compilation_task\'/2", (MR_String) "compilation_task");
                  }
                }
                break;
              case (MR_Integer) 9:
                make__module_target__HeadVar__3_3 = (MR_Word) &make__module_target_scalar_common_1[9];
                break;
              case (MR_Integer) 10:
                make__module_target__HeadVar__3_3 = (MR_Word) &make__module_target_scalar_common_1[11];
                break;
              case (MR_Integer) 11:
                make__module_target__HeadVar__3_3 = (MR_Word) &make__module_target_scalar_common_1[19];
                break;
              case (MR_Integer) 12:
                {
                  make__module_target__HeadVar__3_3 = (MR_Word) &make__module_target_scalar_common_1[28];
                }
                break;
              case (MR_Integer) 13:
                {
                  /* direct tailcall eliminated */
                  {
                    make__module_target__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 14));
                  }
                  continue;
                }
                break;
              case (MR_Integer) 14:
                make__module_target__HeadVar__3_3 = (MR_Word) &make__module_target_scalar_common_1[13];
                break;
              case (MR_Integer) 15:
                {
                  make__module_target__HeadVar__3_3 = (MR_Word) &make__module_target_scalar_common_1[28];
                }
                break;
              case (MR_Integer) 16:
                make__module_target__HeadVar__3_3 = (MR_Word) &make__module_target_scalar_common_1[27];
                break;
            }
            break;
          case (MR_Integer) 1:
            {
              /* direct tailcall eliminated */
              {
                make__module_target__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9));
              }
              continue;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word make__module_target__PIC_90 = ((MR_Word) (MR_hl_field(MR_mktag(2), make__module_target__HeadVar__2_2, (MR_Integer) 0)));
              MR_Word make__module_target__V_91_91;

              {
                make__module_target__V_91_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), make__module_target__V_91_91, 0) = ((MR_Box) (make__module_target__PIC_90));
              }
              {
                make__module_target__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), make__module_target__HeadVar__3_3, 0) = ((MR_Box) (make__module_target__V_91_91));
                MR_hl_field(MR_mktag(0), make__module_target__HeadVar__3_3, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), make__module_target__HeadVar__2_2, (MR_Integer) 0)))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word make__module_target__PIC_94 = ((MR_Word) (MR_hl_field(MR_mktag(3), make__module_target__HeadVar__2_2, (MR_Integer) 1)));
                  MR_Word make__module_target__Lang_95 = ((MR_Word) (MR_hl_field(MR_mktag(3), make__module_target__HeadVar__2_2, (MR_Integer) 2)));
                  MR_Word make__module_target__V_96_96;

                  {
                    make__module_target__V_96_96 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(2), make__module_target__V_96_96, 0) = ((MR_Box) (make__module_target__PIC_94));
                    MR_hl_field(MR_mktag(2), make__module_target__V_96_96, 1) = ((MR_Box) (make__module_target__Lang_95));
                  }
                  {
                    make__module_target__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), make__module_target__HeadVar__3_3, 0) = ((MR_Box) (make__module_target__V_96_96));
                    MR_hl_field(MR_mktag(0), make__module_target__HeadVar__3_3, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word make__module_target__PIC_99 = ((MR_Word) (MR_hl_field(MR_mktag(3), make__module_target__HeadVar__2_2, (MR_Integer) 1)));
                  MR_String make__module_target__FactTable_100 = ((MR_String) (MR_hl_field(MR_mktag(3), make__module_target__HeadVar__2_2, (MR_Integer) 2)));
                  MR_Word make__module_target__V_101_101;

                  {
                    make__module_target__V_101_101 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), make__module_target__V_101_101, 0) = ((MR_Box) (make__module_target__PIC_99));
                    MR_hl_field(MR_mktag(3), make__module_target__V_101_101, 1) = ((MR_Box) (make__module_target__FactTable_100));
                  }
                  {
                    make__module_target__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), make__module_target__HeadVar__3_3, 0) = ((MR_Box) (make__module_target__V_101_101));
                    MR_hl_field(MR_mktag(0), make__module_target__HeadVar__3_3, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                }
                break;
            }
            break;
        }
        return make__module_target__HeadVar__3_3;
      }
      break;
    }
}

static void MR_CALL 
make__module_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_108_101_116_101_95_97_110_97_108_121_115_105_115_95_114_101_103_105_115_116_114_121_95_116_105_109_101_115_116_97_109_112_115_95_95_91_51_93_95_48_5_p_0(
  MR_Word make__module_target__Globals_6,
  MR_String make__module_target__FileName_7,
  MR_Word make__module_target__STATE_VARIABLE_Timestamps_0_10,
  MR_Word * make__module_target__STATE_VARIABLE_Timestamps_11)
{
  {
    MR_bool make__module_target__succeeded;

    {
      make__module_target__succeeded = mercury__string__suffix_2_p_0(make__module_target__FileName_7, (MR_String) ".analysis");
    }
    if (make__module_target__succeeded)
      {
        make__module_target__delete_timestamp_4_p_0(make__module_target__Globals_6, make__module_target__FileName_7, make__module_target__STATE_VARIABLE_Timestamps_0_10, make__module_target__STATE_VARIABLE_Timestamps_11);
      }
    else
      *make__module_target__STATE_VARIABLE_Timestamps_11 = make__module_target__STATE_VARIABLE_Timestamps_0_10;
  }
}

static void MR_CALL 
make__module_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_111_98_106_101_99_116_95_99_111_100_101_95_95_91_54_93_95_48_9_p_0(
  MR_Word make__module_target__Globals_10,
  MR_Word make__module_target__ModuleName_11,
  MR_Word make__module_target__Target_12,
  MR_Word make__module_target__PIC_13,
  MR_Word make__module_target__ErrorStream_14,
  MR_Word * make__module_target__Succeeded_16)
{
  {
    MR_bool make__module_target__succeeded;

    switch (make__module_target__Target_12) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          backend_libs__compile_target_code__compile_c_file_7_p_0(make__module_target__Globals_10, make__module_target__ErrorStream_14, make__module_target__PIC_13, make__module_target__ModuleName_11, make__module_target__Succeeded_16);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_String make__module_target__CsharpFile_19;
          MR_Word make__module_target__V_31_31;

          {
            parse_tree__file_names__module_name_to_file_name_7_p_0(make__module_target__Globals_10, make__module_target__ModuleName_11, (MR_String) ".cs", (MR_Integer) 0, &make__module_target__CsharpFile_19);
          }
          {
            make__module_target__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), make__module_target__V_31_31, 0) = ((MR_Box) (make__module_target__CsharpFile_19));
            MR_hl_field(MR_mktag(1), make__module_target__V_31_31, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            backend_libs__compile_target_code__link_8_p_0(make__module_target__Globals_10, make__module_target__ErrorStream_14, (MR_Integer) 4, make__module_target__ModuleName_11, make__module_target__V_31_31, make__module_target__Succeeded_16);
          }
        }
        break;
      case (MR_Integer) 3:
        {
          MR_String make__module_target__ErlangFile_20;

          {
            parse_tree__file_names__module_name_to_file_name_7_p_0(make__module_target__Globals_10, make__module_target__ModuleName_11, (MR_String) ".erl", (MR_Integer) 0, &make__module_target__ErlangFile_20);
          }
          {
            backend_libs__compile_target_code__compile_erlang_file_6_p_0(make__module_target__Globals_10, make__module_target__ErrorStream_14, make__module_target__ErlangFile_20, make__module_target__Succeeded_16);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_String make__module_target__JavaFile_18;
          MR_Word make__module_target__V_37_37;

          {
            parse_tree__file_names__module_name_to_file_name_7_p_0(make__module_target__Globals_10, make__module_target__ModuleName_11, (MR_String) ".java", (MR_Integer) 0, &make__module_target__JavaFile_18);
          }
          {
            make__module_target__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), make__module_target__V_37_37, 0) = ((MR_Box) (make__module_target__JavaFile_18));
            MR_hl_field(MR_mktag(1), make__module_target__V_37_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            backend_libs__compile_target_code__compile_java_files_6_p_0(make__module_target__Globals_10, make__module_target__ErrorStream_14, make__module_target__V_37_37, make__module_target__Succeeded_16);
          }
        }
        break;
    }
  }
}

static MR_String MR_CALL 
make__module_target__IntroducedFrom__func__touched_files_process_module__944__1_1_f_0(
  MR_Word make__module_target__LambdaHeadVar__1_67)
{
  {
    MR_bool make__module_target__succeeded;
    MR_String make__module_target__LambdaHeadVar__2_68 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_target__LambdaHeadVar__1_67, (MR_Integer) 1)));
    MR_Word make__module_target__V_109_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__LambdaHeadVar__1_67, (MR_Integer) 0)));
    MR_String make__module_target__V_110_110 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_target__LambdaHeadVar__1_67, (MR_Integer) 2)));

    return make__module_target__LambdaHeadVar__2_68;
  }
}

static MR_bool MR_CALL 
make__module_target__IntroducedFrom__pred__touched_files_process_module__922__1_2_p_0(
  MR_Word make__module_target__LambdaHeadVar__1_54,
  MR_Word * make__module_target__LambdaHeadVar__2_55)
{
  {
    MR_bool make__module_target__succeeded = ((MR_tag((MR_Word) make__module_target__LambdaHeadVar__1_54)) == (MR_mktag((MR_Integer) 1)));

    if (make__module_target__succeeded)
      *make__module_target__LambdaHeadVar__2_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_target__LambdaHeadVar__1_54, (MR_Integer) 0)));
    return make__module_target__succeeded;
  }
}

static void MR_CALL 
make__module_target__IntroducedFrom__pred__delete_timestamp__801__1_3_p_0(
  MR_String make__module_target__TouchedFile_6)
{
  {
    MR_bool make__module_target__succeeded;

    {
      mercury__io__write_string_3_p_0((MR_String) "Deleting timestamp for ");
    }
    {
      mercury__io__write_string_3_p_0(make__module_target__TouchedFile_6);
    }
    {
      mercury__io__nl_2_p_0();
    }
  }
}

static void MR_CALL 
make__module_target__IntroducedFrom__pred__build_target__382__1_8_p_0_2(
  MR_Box make__module_target__closure_arg,
  MR_Box make__module_target__wrapper_arg_1,
  MR_Box make__module_target__wrapper_arg_2,
  MR_Box * make__module_target__wrapper_arg_3,
  MR_Box make__module_target__wrapper_arg_4,
  MR_Box * make__module_target__wrapper_arg_5)
{
  {
    MR_Box make__module_target__closure = make__module_target__closure_arg;
    MR_Word make__module_target__conv3_HeadVar__5_5;

    {
      make__util__make_remove_file_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__closure, (MR_Integer) 4))), ((MR_String) make__module_target__wrapper_arg_1), ((MR_Word) make__module_target__wrapper_arg_2), &make__module_target__conv3_HeadVar__5_5);
    }
    *make__module_target__wrapper_arg_3 = ((MR_Box) (make__module_target__conv3_HeadVar__5_5));
  }
}

static void MR_CALL 
make__module_target__IntroducedFrom__pred__build_target__382__1_8_p_0_1(
  MR_Box make__module_target__closure_arg,
  MR_Box make__module_target__wrapper_arg_1,
  MR_Box make__module_target__wrapper_arg_2,
  MR_Box * make__module_target__wrapper_arg_3,
  MR_Box make__module_target__wrapper_arg_4,
  MR_Box * make__module_target__wrapper_arg_5)
{
  {
    MR_Box make__module_target__closure = make__module_target__closure_arg;
    MR_Word make__module_target__conv0_HeadVar__5_5;

    {
      make__util__make_remove_target_file_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__closure, (MR_Integer) 4))), ((MR_Word) make__module_target__wrapper_arg_1), ((MR_Word) make__module_target__wrapper_arg_2), &make__module_target__conv0_HeadVar__5_5);
    }
    *make__module_target__wrapper_arg_3 = ((MR_Box) (make__module_target__conv0_HeadVar__5_5));
  }
}

static void MR_CALL 
make__module_target__IntroducedFrom__pred__build_target__382__1_8_p_0(
  MR_Word make__module_target__Globals_13,
  MR_Word make__module_target__TouchedTargetFiles_17,
  MR_Word make__module_target__TouchedFiles_18,
  MR_Word make__module_target__MaybeArgFileName_31,
  MR_Word make__module_target__LambdaHeadVar__1_59,
  MR_Word * make__module_target__LambdaHeadVar__2_60)
{
  {
    MR_bool make__module_target__succeeded;
    MR_Word make__module_target__TypeCtorInfo_109_109;
    MR_Word make__module_target__TypeCtorInfo_110_110;
    MR_Word make__module_target__V_67_67;
    MR_Word make__module_target__STATE_VARIABLE_MakeInfo_68_68;
    MR_Word make__module_target__V_71_71;
    MR_Box make__module_target__conv2_STATE_VARIABLE_MakeInfo_68_68;
    MR_Box make__module_target__conv1_STATE_VARIABLE_IO_69_69;
    MR_Box make__module_target__conv5_LambdaHeadVar__2_60;
    MR_Box make__module_target__conv4_STATE_VARIABLE_IO_73_73;

    {
      make__module_target__V_67_67 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), make__module_target__V_67_67, 0) = ((MR_Box) (&make__module_target_scalar_common_5[6]));
      MR_hl_field(MR_mktag(0), make__module_target__V_67_67, 1) = ((MR_Box) (make__module_target__IntroducedFrom__pred__build_target__382__1_8_p_0_1));
      MR_hl_field(MR_mktag(0), make__module_target__V_67_67, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), make__module_target__V_67_67, 3) = ((MR_Box) (make__module_target__Globals_13));
      MR_hl_field(MR_mktag(0), make__module_target__V_67_67, 4) = ((MR_Box) ((MR_Integer) 53));
    }
    make__module_target__TypeCtorInfo_109_109 = (MR_Word) &make__make__type_ctor_info_make_info_0;
    make__module_target__TypeCtorInfo_110_110 = (MR_Word) &mercury__io__io__type_ctor_info_state_0;
    {
      mercury__list__foldl2_6_p_2((MR_Word) &make__make__type_ctor_info_target_file_0, make__module_target__TypeCtorInfo_109_109, make__module_target__TypeCtorInfo_110_110, make__module_target__V_67_67, make__module_target__TouchedTargetFiles_17, ((MR_Box) (make__module_target__LambdaHeadVar__1_59)), &make__module_target__conv2_STATE_VARIABLE_MakeInfo_68_68, ((MR_Box) ((MR_Integer) 0)), &make__module_target__conv1_STATE_VARIABLE_IO_69_69);
    }
    make__module_target__STATE_VARIABLE_MakeInfo_68_68 = ((MR_Word) make__module_target__conv2_STATE_VARIABLE_MakeInfo_68_68);
    {
      make__module_target__V_71_71 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), make__module_target__V_71_71, 0) = ((MR_Box) (&make__module_target_scalar_common_5[7]));
      MR_hl_field(MR_mktag(0), make__module_target__V_71_71, 1) = ((MR_Box) (make__module_target__IntroducedFrom__pred__build_target__382__1_8_p_0_2));
      MR_hl_field(MR_mktag(0), make__module_target__V_71_71, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), make__module_target__V_71_71, 3) = ((MR_Box) (make__module_target__Globals_13));
      MR_hl_field(MR_mktag(0), make__module_target__V_71_71, 4) = ((MR_Box) ((MR_Integer) 53));
    }
    {
      mercury__list__foldl2_6_p_2((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, make__module_target__TypeCtorInfo_109_109, make__module_target__TypeCtorInfo_110_110, make__module_target__V_71_71, make__module_target__TouchedFiles_18, ((MR_Box) (make__module_target__STATE_VARIABLE_MakeInfo_68_68)), &make__module_target__conv5_LambdaHeadVar__2_60, ((MR_Box) ((MR_Integer) 0)), &make__module_target__conv4_STATE_VARIABLE_IO_73_73);
    }
    *make__module_target__LambdaHeadVar__2_60 = ((MR_Word) make__module_target__conv5_LambdaHeadVar__2_60);
    if ((make__module_target__MaybeArgFileName_31 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
      }
    else
      {
        MR_String make__module_target__ArgFileName2_36 = ((MR_String) (MR_hl_field(MR_mktag(1), make__module_target__MaybeArgFileName_31, (MR_Integer) 0)));
        MR_Word make__module_target__V_37_37;

        {
          mercury__io__remove_file_4_p_0(make__module_target__ArgFileName2_36, &make__module_target__V_37_37);
        }
      }
  }
}

static void MR_CALL 
make__module_target__IntroducedFrom__pred__make_module_target_file_extra_options__195__1_6_p_0(
  MR_Word make__module_target__Globals_10,
  MR_Word make__module_target__TargetFile_11,
  MR_Word make__module_target__DepFiles0_34,
  MR_Word make__module_target__STATE_VARIABLE_Info_75_75)
{
  {
    MR_bool make__module_target__succeeded;
    MR_Word make__module_target__PlainSet_40;
    MR_Word make__module_target__V_89_89;

    {
      make__util__make_write_target_file_4_p_0(make__module_target__Globals_10, make__module_target__TargetFile_11);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) ": dependencies:\n");
    }
    {
      make__dependencies__dependency_file_index_set_to_plain_set_3_p_0(make__module_target__STATE_VARIABLE_Info_75_75, make__module_target__DepFiles0_34, &make__module_target__PlainSet_40);
    }
    {
      make__module_target__V_89_89 = mercury__set__to_sorted_list_1_f_0((MR_Word) &make__dependencies__make__dependencies__type_ctor_info_dependency_file_0, make__module_target__PlainSet_40);
    }
    {
      make__util__make_write_dependency_file_list_4_p_0(make__module_target__Globals_10, make__module_target__V_89_89);
    }
  }
}

static void MR_CALL 
make__module_target__IntroducedFrom__pred__make_module_target_file_extra_options__175__1_10_p_0(
  MR_Word make__module_target__HeadVar__1_77,
  MR_Word make__module_target__HeadVar__2_303,
  MR_Word make__module_target__HeadVar__3_304,
  MR_Word * make__module_target__HeadVar__4_305,
  MR_Word make__module_target__HeadVar__5_306,
  MR_Word * make__module_target__HeadVar__6_307,
  MR_Word make__module_target__HeadVar__7_308,
  MR_Word * make__module_target__HeadVar__8_309)
{
  {
    MR_bool make__module_target__succeeded;

    {
      make__dependencies__union_deps_10_p_0((MR_Word) &make__dependencies__make__dependencies__type_ctor_info_dependency_file_index_0, make__module_target__HeadVar__1_77, make__module_target__HeadVar__2_303, make__module_target__HeadVar__3_304, make__module_target__HeadVar__4_305, make__module_target__HeadVar__5_306, make__module_target__HeadVar__6_307, make__module_target__HeadVar__7_308, make__module_target__HeadVar__8_309);
    }
  }
}

static MR_bool MR_CALL 
make__module_target____Unify____maybe__maybe_error_2_2(
  MR_Word make__module_target__TypeInfo_for_T_9,
  MR_Word make__module_target__TypeInfo_for_E_10,
  MR_Word make__module_target__HeadVar__1_1,
  MR_Word make__module_target__HeadVar__2_2)
{
  {
    MR_bool make__module_target__succeeded = ((MR_tag((MR_Word) make__module_target__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
    MR_Box make__module_target__V_6_6;

    if (make__module_target__succeeded)
      {
        make__module_target__V_6_6 = (MR_hl_field(MR_mktag(1), make__module_target__HeadVar__2_2, (MR_Integer) 0));
        (MR_hl_field(MR_mktag(1), make__module_target__HeadVar__1_1, (MR_Integer) 0)) = make__module_target__V_6_6;
        make__module_target__succeeded = MR_TRUE;
      }
    return make__module_target__succeeded;
  }
}

void MR_CALL 
make__module_target____Compare____foreign_code_file_0_0(
  MR_Word * make__module_target__HeadVar__1_1,
  MR_Word make__module_target__HeadVar__2_2,
  MR_Word make__module_target__HeadVar__3_3)
{
  {
    MR_bool make__module_target__succeeded;
    MR_Integer make__module_target__CastX_12 = (MR_Integer) make__module_target__HeadVar__2_2;
    MR_Integer make__module_target__CastY_13 = (MR_Integer) make__module_target__HeadVar__3_3;

    make__module_target__succeeded = (make__module_target__CastX_12 == make__module_target__CastY_13);
    if (make__module_target__succeeded)
      *make__module_target__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word make__module_target__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__HeadVar__2_2, (MR_Integer) 0)));
        MR_String make__module_target__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_target__HeadVar__2_2, (MR_Integer) 1)));
        MR_String make__module_target__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_target__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word make__module_target__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__HeadVar__3_3, (MR_Integer) 0)));
        MR_String make__module_target__V_8_8 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_target__HeadVar__3_3, (MR_Integer) 1)));
        MR_String make__module_target__V_9_9 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_target__HeadVar__3_3, (MR_Integer) 2)));
        MR_Word make__module_target__V_10_10;
        MR_Integer make__module_target__V_17_17 = (MR_Integer) make__module_target__V_4_4;
        MR_Integer make__module_target__V_18_18 = (MR_Integer) make__module_target__V_7_7;

        {
          mercury__private_builtin__builtin_compare_int_3_p_0(&make__module_target__V_10_10, make__module_target__V_17_17, make__module_target__V_18_18);
        }
        make__module_target__succeeded = (make__module_target__V_10_10 == (MR_Integer) 0);
        make__module_target__succeeded = !(make__module_target__succeeded);
        if (make__module_target__succeeded)
          *make__module_target__HeadVar__1_1 = make__module_target__V_10_10;
        else
          {
            MR_Word make__module_target__V_11_11;

            {
              mercury__private_builtin__builtin_compare_string_3_p_0(&make__module_target__V_11_11, make__module_target__V_5_5, make__module_target__V_8_8);
            }
            make__module_target__succeeded = (make__module_target__V_11_11 == (MR_Integer) 0);
            make__module_target__succeeded = !(make__module_target__succeeded);
            if (make__module_target__succeeded)
              *make__module_target__HeadVar__1_1 = make__module_target__V_11_11;
            else
              {
                mercury__private_builtin__builtin_compare_string_3_p_0(make__module_target__HeadVar__1_1, make__module_target__V_6_6, make__module_target__V_9_9);
              }
          }
      }
  }
}

MR_bool MR_CALL 
make__module_target____Unify____foreign_code_file_0_0(
  MR_Word make__module_target__HeadVar__1_1,
  MR_Word make__module_target__HeadVar__2_2)
{
  {
    MR_bool make__module_target__succeeded;
    MR_Integer make__module_target__CastX_9 = (MR_Integer) make__module_target__HeadVar__1_1;
    MR_Integer make__module_target__CastY_10 = (MR_Integer) make__module_target__HeadVar__2_2;

    make__module_target__succeeded = (make__module_target__CastX_9 == make__module_target__CastY_10);
    if (make__module_target__succeeded)
      make__module_target__succeeded = MR_TRUE;
    else
      {
        MR_Word make__module_target__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__HeadVar__1_1, (MR_Integer) 0)));
        MR_String make__module_target__V_4_4 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_target__HeadVar__1_1, (MR_Integer) 1)));
        MR_String make__module_target__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_target__HeadVar__1_1, (MR_Integer) 2)));
        MR_Word make__module_target__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__HeadVar__2_2, (MR_Integer) 0)));
        MR_String make__module_target__V_7_7 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_target__HeadVar__2_2, (MR_Integer) 1)));
        MR_String make__module_target__V_8_8 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_target__HeadVar__2_2, (MR_Integer) 2)));

        make__module_target__succeeded = (make__module_target__V_3_3 == make__module_target__V_6_6);
        if (make__module_target__succeeded)
          {
            make__module_target__succeeded = (strcmp(make__module_target__V_4_4, make__module_target__V_7_7) == 0);
            if (make__module_target__succeeded)
              make__module_target__succeeded = (strcmp(make__module_target__V_5_5, make__module_target__V_8_8) == 0);
          }
      }
    return make__module_target__succeeded;
  }
}

static void MR_CALL 
make__module_target____Compare____compilation_task_result_0_0(
  MR_Word * make__module_target__HeadVar__1_1,
  MR_Word make__module_target__HeadVar__2_2,
  MR_Word make__module_target__HeadVar__3_3)
{
  {
    MR_bool make__module_target__succeeded;
    MR_Word make__module_target__Cast_HeadVar1_4 = make__module_target__HeadVar__2_2;
    MR_Word make__module_target__Cast_HeadVar2_5 = make__module_target__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &make__module_target_scalar_common_2[3], make__module_target__HeadVar__1_1, ((MR_Box) (make__module_target__Cast_HeadVar1_4)), ((MR_Box) (make__module_target__Cast_HeadVar2_5)));
    }
  }
}

static MR_bool MR_CALL 
make__module_target____Unify____compilation_task_result_0_0(
  MR_Word make__module_target__HeadVar__1_1,
  MR_Word make__module_target__HeadVar__2_2)
{
  {
    MR_bool make__module_target__succeeded;
    MR_Word make__module_target__Cast_HeadVar1_3 = make__module_target__HeadVar__1_1;
    MR_Word make__module_target__Cast_HeadVar2_4 = make__module_target__HeadVar__2_2;

    {
      make__module_target__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &make__module_target_scalar_common_2[3], ((MR_Box) (make__module_target__Cast_HeadVar1_3)), ((MR_Box) (make__module_target__Cast_HeadVar2_4)));
    }
    return make__module_target__succeeded;
  }
}

static MR_Word MR_CALL 
make__module_target__target_type_to_pic_1_f_0(
  MR_Word make__module_target__TargetType_3)
{
  {
    MR_bool make__module_target__succeeded;
    MR_Word make__module_target__Result_4;

    switch (MR_tag((MR_Word) make__module_target__TargetType_3)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        make__module_target__Result_4 = (MR_Integer) 1;
        break;
      case (MR_Integer) 1:
        make__module_target__Result_4 = (MR_Integer) 1;
        break;
      case (MR_Integer) 2:
        make__module_target__Result_4 = ((MR_Word) (MR_hl_field(MR_mktag(2), make__module_target__TargetType_3, (MR_Integer) 0)));
        break;
      case (MR_Integer) 3:
        make__module_target__Result_4 = (MR_Integer) 1;
        break;
    }
    return make__module_target__Result_4;
  }
}

static void MR_CALL 
make__module_target__get_fact_table_foreign_code_file_7_p_0(
  MR_Word make__module_target__Globals_8,
  MR_String make__module_target__ObjExt_9,
  MR_Word make__module_target__ModuleName_10,
  MR_String make__module_target__FactTableFile_11,
  MR_Word * make__module_target__FactTableForeignFile_12)
{
  {
    MR_bool make__module_target__succeeded;
    MR_String make__module_target__FactTableCFile_14;
    MR_String make__module_target__FactTableObjFile_15;

    {
      parse_tree__file_names__fact_table_file_name_8_p_0(make__module_target__Globals_8, make__module_target__ModuleName_10, make__module_target__FactTableFile_11, (MR_String) ".c", (MR_Integer) 1, &make__module_target__FactTableCFile_14);
    }
    {
      parse_tree__file_names__fact_table_file_name_8_p_0(make__module_target__Globals_8, make__module_target__ModuleName_10, make__module_target__FactTableFile_11, make__module_target__ObjExt_9, (MR_Integer) 1, &make__module_target__FactTableObjFile_15);
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      *make__module_target__FactTableForeignFile_12 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (make__module_target__FactTableCFile_14));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (make__module_target__FactTableObjFile_15));
    }
  }
}

static void MR_CALL 
make__module_target__gather_target_file_timestamp_file_names_6_p_0(
  MR_Word make__module_target__Globals_7,
  MR_Word make__module_target__TouchedTargetFile_8,
  MR_Word make__module_target__STATE_VARIABLE_TimestampFileNames_0_15,
  MR_Word * make__module_target__STATE_VARIABLE_TimestampFileNames_16)
{
  {
    MR_bool make__module_target__succeeded;
    MR_Word make__module_target__TargetModuleName_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__TouchedTargetFile_8, (MR_Integer) 0)));
    MR_Word make__module_target__TargetFileType_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__TouchedTargetFile_8, (MR_Integer) 1)));
    MR_String make__module_target__TimestampExt_13;

    {
      make__module_target__succeeded = make__util__timestamp_extension_2_p_0(make__module_target__TargetFileType_12, &make__module_target__TimestampExt_13);
    }
    if (make__module_target__succeeded)
      {
        MR_String make__module_target__TimestampFile_14;

        {
          parse_tree__file_names__module_name_to_file_name_7_p_0(make__module_target__Globals_7, make__module_target__TargetModuleName_11, make__module_target__TimestampExt_13, (MR_Integer) 1, &make__module_target__TimestampFile_14);
        }
        {
          mercury__list__cons_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) (make__module_target__TimestampFile_14)), make__module_target__STATE_VARIABLE_TimestampFileNames_0_15, make__module_target__STATE_VARIABLE_TimestampFileNames_16);
        }
      }
    else
      *make__module_target__STATE_VARIABLE_TimestampFileNames_16 = make__module_target__STATE_VARIABLE_TimestampFileNames_0_15;
  }
}

static void MR_CALL 
make__module_target__touched_files_process_module_9_p_0_5(
  MR_Box make__module_target__closure_arg,
  MR_Box make__module_target__wrapper_arg_1,
  MR_Box make__module_target__wrapper_arg_2,
  MR_Box * make__module_target__wrapper_arg_3,
  MR_Box make__module_target__wrapper_arg_4,
  MR_Box * make__module_target__wrapper_arg_5)
{
  {
    MR_Box make__module_target__closure = make__module_target__closure_arg;
    MR_Word make__module_target__conv8_STATE_VARIABLE_TimestampFileNames_16;

    {
      make__module_target__gather_target_file_timestamp_file_names_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__closure, (MR_Integer) 3))), ((MR_Word) make__module_target__wrapper_arg_1), ((MR_Word) make__module_target__wrapper_arg_2), &make__module_target__conv8_STATE_VARIABLE_TimestampFileNames_16);
    }
    *make__module_target__wrapper_arg_3 = ((MR_Box) (make__module_target__conv8_STATE_VARIABLE_TimestampFileNames_16));
  }
}

static MR_Box MR_CALL 
make__module_target__touched_files_process_module_9_p_0_4(
  MR_Box make__module_target__closure_arg,
  MR_Box make__module_target__wrapper_arg_1)
{
  {
    MR_Box make__module_target__wrapper_arg_2;
    MR_Box make__module_target__closure = make__module_target__closure_arg;
    MR_String make__module_target__conv7_LambdaHeadVar__2_68;

    {
      make__module_target__conv7_LambdaHeadVar__2_68 = make__module_target__IntroducedFrom__func__touched_files_process_module__944__1_1_f_0(((MR_Word) make__module_target__wrapper_arg_1));
    }
    make__module_target__wrapper_arg_2 = ((MR_Box) (make__module_target__conv7_LambdaHeadVar__2_68));
    return make__module_target__wrapper_arg_2;
  }
}

static void MR_CALL 
make__module_target__touched_files_process_module_9_p_0_3(
  MR_Box make__module_target__closure_arg,
  MR_Box make__module_target__wrapper_arg_1,
  MR_Box * make__module_target__wrapper_arg_2,
  MR_Box make__module_target__wrapper_arg_3,
  MR_Box * make__module_target__wrapper_arg_4)
{
  {
    MR_Box make__module_target__closure = make__module_target__closure_arg;
    MR_Word make__module_target__conv5_ForeignFiles_10;

    {
      make__module_target__external_foreign_code_files_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__closure, (MR_Integer) 4))), ((MR_Word) make__module_target__wrapper_arg_1), &make__module_target__conv5_ForeignFiles_10);
    }
    *make__module_target__wrapper_arg_2 = ((MR_Box) (make__module_target__conv5_ForeignFiles_10));
  }
}

static MR_bool MR_CALL 
make__module_target__touched_files_process_module_9_p_0_2(
  MR_Box make__module_target__closure_arg,
  MR_Box make__module_target__wrapper_arg_1,
  MR_Box * make__module_target__wrapper_arg_2)
{
  {
    MR_bool make__module_target__succeeded;
    MR_Box make__module_target__closure = make__module_target__closure_arg;
    MR_Word make__module_target__conv4_LambdaHeadVar__2_55;

    {
      make__module_target__succeeded = make__module_target__IntroducedFrom__pred__touched_files_process_module__922__1_2_p_0(((MR_Word) make__module_target__wrapper_arg_1), &make__module_target__conv4_LambdaHeadVar__2_55);
    }
    if (make__module_target__succeeded)
      {
        *make__module_target__wrapper_arg_2 = ((MR_Box) (make__module_target__conv4_LambdaHeadVar__2_55));
        make__module_target__succeeded = MR_TRUE;
      }
    return make__module_target__succeeded;
  }
}

static void MR_CALL 
make__module_target__touched_files_process_module_9_p_0_1(
  MR_Box make__module_target__closure_arg,
  MR_Box make__module_target__wrapper_arg_1,
  MR_Box * make__module_target__wrapper_arg_2,
  MR_Box make__module_target__wrapper_arg_3,
  MR_Box * make__module_target__wrapper_arg_4,
  MR_Box make__module_target__wrapper_arg_5,
  MR_Box * make__module_target__wrapper_arg_6)
{
  {
    MR_Box make__module_target__closure = make__module_target__closure_arg;
    MR_Word make__module_target__conv1_HeadVar__3_3;
    MR_Word make__module_target__conv0_HeadVar__5_5;

    {
      make__module_dep_file__get_module_dependencies_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__closure, (MR_Integer) 3))), ((MR_Word) make__module_target__wrapper_arg_1), &make__module_target__conv1_HeadVar__3_3, ((MR_Word) make__module_target__wrapper_arg_3), &make__module_target__conv0_HeadVar__5_5);
    }
    *make__module_target__wrapper_arg_2 = ((MR_Box) (make__module_target__conv1_HeadVar__3_3));
    *make__module_target__wrapper_arg_4 = ((MR_Box) (make__module_target__conv0_HeadVar__5_5));
  }
}

static void MR_CALL 
make__module_target__touched_files_process_module_9_p_0(
  MR_Word make__module_target__Globals_10,
  MR_Word make__module_target__TargetFile_11,
  MR_Word make__module_target__Task_12,
  MR_Word * make__module_target__TouchedTargetFiles_13,
  MR_Word * make__module_target__TouchedFileNames_14,
  MR_Word make__module_target__STATE_VARIABLE_Info_0_40,
  MR_Word * make__module_target__STATE_VARIABLE_Info_41)
{
  {
    MR_bool make__module_target__succeeded;
    MR_Word make__module_target__TypeCtorInfo_111_111;
    MR_Word make__module_target__TypeInfo_118_118;
    MR_Word make__module_target__TypeCtorInfo_120_120;
    MR_Word make__module_target__ModuleName_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__TargetFile_11, (MR_Integer) 0)));
    MR_Word make__module_target__FileType_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__TargetFile_11, (MR_Integer) 1)));
    MR_Word make__module_target__MaybeImports_19;
    MR_Word make__module_target__Imports_21;
    MR_Word make__module_target__NestedChildren_22;
    MR_Word make__module_target__MaybeNestedImportsList_24;
    MR_Word make__module_target__ModuleImportsList_27;
    MR_Word make__module_target__CompilationTarget_28;
    MR_Word make__module_target__TargetModuleNames_29;
    MR_Word make__module_target__ForeignCodeFiles_31;
    MR_Word make__module_target__TimestampFileNames_39;
    MR_Word make__module_target__STATE_VARIABLE_Info_44_44;
    MR_Word make__module_target__V_49_49;
    MR_Word make__module_target__V_50_50;
    MR_Word make__module_target__V_77_77;
    MR_String make__module_target__V_83_83;
    MR_Word make__module_target__V_84_84;
    MR_Word make__module_target__V_85_85;
    MR_Word make__module_target__V_86_86;
    MR_Word make__module_target__V_87_87;
    MR_Word make__module_target__V_88_88;
    MR_Word make__module_target__V_89_89;
    MR_Word make__module_target__V_90_90;
    MR_Word make__module_target__V_91_91;
    MR_Word make__module_target__V_92_92;
    MR_Word make__module_target__V_93_93;
    MR_Word make__module_target__V_94_94;
    MR_Word make__module_target__V_95_95;
    MR_Word make__module_target__V_96_96;
    MR_Word make__module_target__V_97_97;
    MR_Word make__module_target__V_98_98;
    MR_Word make__module_target__V_99_99;
    MR_Word make__module_target__V_100_100;
    MR_Word make__module_target__V_101_101;
    MR_Word make__module_target__V_102_102;
    MR_Word make__module_target__V_103_103;
    MR_Word make__module_target__V_104_104;
    MR_Word make__module_target__V_105_105;
    MR_Word make__module_target__V_106_106;
    MR_Word make__module_target__V_107_107;
    MR_String make__module_target__V_108_108;
    MR_Box make__module_target__conv3_STATE_VARIABLE_Info_41;
    MR_Box make__module_target__conv2_STATE_VARIABLE_IO_52_52;
    MR_Word make__module_target__NestedImportsList_26;
    MR_Box make__module_target__conv10_TimestampFileNames_39;
    MR_Box make__module_target__conv9_STATE_VARIABLE_IO_43;

    {
      make__module_dep_file__get_module_dependencies_7_p_0(make__module_target__Globals_10, make__module_target__ModuleName_17, &make__module_target__MaybeImports_19, make__module_target__STATE_VARIABLE_Info_0_40, &make__module_target__STATE_VARIABLE_Info_44_44);
    }
    if ((make__module_target__MaybeImports_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "make.module_target", (MR_String) "predicate \140make.module_target.touched_files_process_module\'/9", (MR_String) "no module dependencies");
          return;
        }
      }
    else
      make__module_target__Imports_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_target__MaybeImports_19, (MR_Integer) 0)));
    make__module_target__TypeCtorInfo_111_111 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
    make__module_target__V_83_83 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_target__Imports_21, (MR_Integer) 0)));
    make__module_target__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_21, (MR_Integer) 1)));
    make__module_target__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_21, (MR_Integer) 2)));
    make__module_target__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_21, (MR_Integer) 3)));
    make__module_target__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_21, (MR_Integer) 4)));
    make__module_target__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_21, (MR_Integer) 5)));
    make__module_target__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_21, (MR_Integer) 6)));
    make__module_target__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_21, (MR_Integer) 7)));
    make__module_target__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_21, (MR_Integer) 8)));
    make__module_target__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_21, (MR_Integer) 9)));
    make__module_target__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_21, (MR_Integer) 10)));
    make__module_target__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_21, (MR_Integer) 11)));
    make__module_target__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_21, (MR_Integer) 12)));
    make__module_target__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_21, (MR_Integer) 13)));
    make__module_target__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_21, (MR_Integer) 14)));
    make__module_target__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_21, (MR_Integer) 15)));
    make__module_target__V_98_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_21, (MR_Integer) 16)));
    make__module_target__V_99_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_21, (MR_Integer) 17)));
    make__module_target__V_100_100 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_21, (MR_Integer) 18)));
    make__module_target__V_101_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_21, (MR_Integer) 19)));
    make__module_target__V_102_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_21, (MR_Integer) 20)));
    make__module_target__V_103_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_21, (MR_Integer) 21)));
    make__module_target__V_104_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_21, (MR_Integer) 22)));
    make__module_target__V_105_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_21, (MR_Integer) 23)));
    make__module_target__V_106_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_21, (MR_Integer) 24)));
    make__module_target__V_107_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_21, (MR_Integer) 25)));
    make__module_target__V_108_108 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_target__Imports_21, (MR_Integer) 26)));
    {
      make__module_target__NestedChildren_22 = mercury__set__to_sorted_list_1_f_0(make__module_target__TypeCtorInfo_111_111, make__module_target__V_49_49);
    }
    {
      make__module_target__TargetModuleNames_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), make__module_target__TargetModuleNames_29, 0) = ((MR_Box) (make__module_target__ModuleName_17));
      MR_hl_field(MR_mktag(1), make__module_target__TargetModuleNames_29, 1) = ((MR_Box) (make__module_target__NestedChildren_22));
    }
    {
      make__module_target__V_50_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), make__module_target__V_50_50, 0) = ((MR_Box) (&make__module_target_scalar_common_5[5]));
      MR_hl_field(MR_mktag(0), make__module_target__V_50_50, 1) = ((MR_Box) (make__module_target__touched_files_process_module_9_p_0_1));
      MR_hl_field(MR_mktag(0), make__module_target__V_50_50, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), make__module_target__V_50_50, 3) = ((MR_Box) (make__module_target__Globals_10));
    }
    make__module_target__TypeInfo_118_118 = (MR_Word) &make__module_target_scalar_common_1[3];
    make__module_target__TypeCtorInfo_120_120 = (MR_Word) &mercury__io__io__type_ctor_info_state_0;
    {
      mercury__list__map_foldl2_7_p_2(make__module_target__TypeCtorInfo_111_111, make__module_target__TypeInfo_118_118, (MR_Word) &make__make__type_ctor_info_make_info_0, make__module_target__TypeCtorInfo_120_120, make__module_target__V_50_50, make__module_target__NestedChildren_22, &make__module_target__MaybeNestedImportsList_24, ((MR_Box) (make__module_target__STATE_VARIABLE_Info_44_44)), &make__module_target__conv3_STATE_VARIABLE_Info_41, ((MR_Box) ((MR_Integer) 0)), &make__module_target__conv2_STATE_VARIABLE_IO_52_52);
    }
    *make__module_target__STATE_VARIABLE_Info_41 = ((MR_Word) make__module_target__conv3_STATE_VARIABLE_Info_41);
    {
      make__module_target__succeeded = mercury__list__map_3_p_2(make__module_target__TypeInfo_118_118, (MR_Word) &parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_module_and_imports_0, (MR_Word) &make__module_target_scalar_common_2[11], make__module_target__MaybeNestedImportsList_24, &make__module_target__NestedImportsList_26);
    }
    if (make__module_target__succeeded)
      {
        make__module_target__ModuleImportsList_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), make__module_target__ModuleImportsList_27, 0) = ((MR_Box) (make__module_target__Imports_21));
        MR_hl_field(MR_mktag(1), make__module_target__ModuleImportsList_27, 1) = ((MR_Box) (make__module_target__NestedImportsList_26));
      }
    else
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "make.module_target", (MR_String) "predicate \140make.module_target.touched_files_process_module\'/9", (MR_String) "no nested module dependencies");
          return;
        }
      }
    {
      libs__globals__get_target_2_p_0(make__module_target__Globals_10, &make__module_target__CompilationTarget_28);
    }
    switch (make__module_target__Task_12) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 6:
        {
          MR_Word make__module_target__TypeCtorInfo_128_128;
          MR_Word make__module_target__ForeignCodeFileList_30;
          MR_Word make__module_target__HeaderTargets0_35;
          MR_Word make__module_target__HeaderTargets_37;
          MR_Word make__module_target__TouchedTargetFiles0_38;
          MR_Word make__module_target__V_63_63;
          MR_Word make__module_target__V_65_65;
          MR_Word make__module_target__V_69_69;
          MR_Box make__module_target__conv6_STATE_VARIABLE_IO_64_64;

          {
            make__module_target__V_65_65 = make__module_target__target_type_to_pic_1_f_0(make__module_target__FileType_18);
          }
          {
            make__module_target__V_63_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), make__module_target__V_63_63, 0) = ((MR_Box) (&make__module_target_scalar_common_9[1]));
            MR_hl_field(MR_mktag(0), make__module_target__V_63_63, 1) = ((MR_Box) (make__module_target__touched_files_process_module_9_p_0_3));
            MR_hl_field(MR_mktag(0), make__module_target__V_63_63, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), make__module_target__V_63_63, 3) = ((MR_Box) (make__module_target__Globals_10));
            MR_hl_field(MR_mktag(0), make__module_target__V_63_63, 4) = ((MR_Box) (make__module_target__V_65_65));
          }
          {
            mercury__list__map_foldl_5_p_2((MR_Word) &parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_module_and_imports_0, (MR_Word) &make__module_target_scalar_common_1[4], make__module_target__TypeCtorInfo_120_120, make__module_target__V_63_63, make__module_target__ModuleImportsList_27, &make__module_target__ForeignCodeFileList_30, ((MR_Box) ((MR_Integer) 0)), &make__module_target__conv6_STATE_VARIABLE_IO_64_64);
          }
          make__module_target__TypeCtorInfo_128_128 = (MR_Word) &make__module_target__make__module_target__type_ctor_info_foreign_code_file_0;
          {
            make__module_target__V_69_69 = mercury__list__condense_1_f_0(make__module_target__TypeCtorInfo_128_128, make__module_target__ForeignCodeFileList_30);
          }
          {
            make__module_target__ForeignCodeFiles_31 = mercury__list__map_2_f_0(make__module_target__TypeCtorInfo_128_128, (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &make__module_target_scalar_common_2[12], make__module_target__V_69_69);
          }
          switch (make__module_target__CompilationTarget_28) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word make__module_target__HighLevelCode_33;

                {
                  libs__globals__lookup_bool_option_3_p_0(make__module_target__Globals_10, (MR_Integer) 258, &make__module_target__HighLevelCode_33);
                }
                switch (make__module_target__HighLevelCode_33) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    make__module_target__HeaderTargets0_35 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                    break;
                  case (MR_Integer) 1:
                    {
                      {
                        make__module_target__HeaderTargets0_35 = make__util__make_target_file_list_2_f_0(make__module_target__TargetModuleNames_29, (MR_Word) MR_mkword(MR_mktag(1), &make__module_target_scalar_common_3[9]));
                      }
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 1:
            case (MR_Integer) 2:
              make__module_target__HeaderTargets0_35 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              break;
            case (MR_Integer) 3:
              {
                {
                  make__module_target__HeaderTargets0_35 = make__util__make_target_file_list_2_f_0(make__module_target__TargetModuleNames_29, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 13)));
                }
              }
              break;
          }
          switch (make__module_target__CompilationTarget_28) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word make__module_target__V_74_74;

                {
                  make__module_target__V_74_74 = make__util__make_target_file_list_2_f_0(make__module_target__TargetModuleNames_29, (MR_Word) MR_mkword(MR_mktag(1), &make__module_target_scalar_common_3[10]));
                }
                {
                  make__module_target__HeaderTargets_37 = mercury__list__f_43_43_2_f_0((MR_Word) &make__make__type_ctor_info_target_file_0, make__module_target__V_74_74, make__module_target__HeaderTargets0_35);
                }
              }
              break;
            case (MR_Integer) 1:
            case (MR_Integer) 3:
            case (MR_Integer) 2:
              make__module_target__HeaderTargets_37 = make__module_target__HeaderTargets0_35;
              break;
          }
          {
            make__module_target__TouchedTargetFiles0_38 = make__util__make_target_file_list_2_f_0(make__module_target__TargetModuleNames_29, make__module_target__FileType_18);
          }
          {
            *make__module_target__TouchedTargetFiles_13 = mercury__list__f_43_43_2_f_0((MR_Word) &make__make__type_ctor_info_target_file_0, make__module_target__TouchedTargetFiles0_38, make__module_target__HeaderTargets_37);
          }
        }
        break;
      case (MR_Integer) 0:
      case (MR_Integer) 5:
      case (MR_Integer) 4:
      case (MR_Integer) 3:
      case (MR_Integer) 1:
      case (MR_Integer) 7:
        {
          make__module_target__ForeignCodeFiles_31 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          {
            *make__module_target__TouchedTargetFiles_13 = make__util__make_target_file_list_2_f_0(make__module_target__TargetModuleNames_29, make__module_target__FileType_18);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word make__module_target__V_59_59;
          MR_Word make__module_target__V_61_61;

          make__module_target__ForeignCodeFiles_31 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          {
            make__module_target__V_59_59 = make__util__make_target_file_list_2_f_0(make__module_target__TargetModuleNames_29, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)));
          }
          {
            make__module_target__V_61_61 = make__util__make_target_file_list_2_f_0(make__module_target__TargetModuleNames_29, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)));
          }
          {
            *make__module_target__TouchedTargetFiles_13 = mercury__list__f_43_43_2_f_0((MR_Word) &make__make__type_ctor_info_target_file_0, make__module_target__V_59_59, make__module_target__V_61_61);
          }
        }
        break;
    }
    {
      make__module_target__V_77_77 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), make__module_target__V_77_77, 0) = ((MR_Box) (&make__module_target_scalar_common_9[2]));
      MR_hl_field(MR_mktag(0), make__module_target__V_77_77, 1) = ((MR_Box) (make__module_target__touched_files_process_module_9_p_0_5));
      MR_hl_field(MR_mktag(0), make__module_target__V_77_77, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), make__module_target__V_77_77, 3) = ((MR_Box) (make__module_target__Globals_10));
    }
    {
      mercury__list__foldl2_6_p_2((MR_Word) &make__make__type_ctor_info_target_file_0, (MR_Word) &make__module_target_scalar_common_1[5], make__module_target__TypeCtorInfo_120_120, make__module_target__V_77_77, *make__module_target__TouchedTargetFiles_13, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &make__module_target__conv10_TimestampFileNames_39, ((MR_Box) ((MR_Integer) 0)), &make__module_target__conv9_STATE_VARIABLE_IO_43);
    }
    make__module_target__TimestampFileNames_39 = ((MR_Word) make__module_target__conv10_TimestampFileNames_39);
    {
      *make__module_target__TouchedFileNames_14 = mercury__list__f_43_43_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, make__module_target__ForeignCodeFiles_31, make__module_target__TimestampFileNames_39);
    }
  }
}

static void MR_CALL 
make__module_target__touched_files_9_p_0(
  MR_Word make__module_target__Globals_10,
  MR_Word make__module_target__TargetFile_11,
  MR_Word make__module_target__Task_12,
  MR_Word * make__module_target__TouchedTargetFiles_13,
  MR_Word * make__module_target__TouchedFileNames_14,
  MR_Word make__module_target__STATE_VARIABLE_Info_0_29,
  MR_Word * make__module_target__STATE_VARIABLE_Info_30)
{
  {
    MR_bool make__module_target__succeeded;

    switch (MR_tag((MR_Word) make__module_target__Task_12)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word make__module_target__ModuleTask_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Task_12, (MR_Integer) 0)));

          {
            make__module_target__touched_files_process_module_9_p_0(make__module_target__Globals_10, make__module_target__TargetFile_11, make__module_target__ModuleTask_17, make__module_target__TouchedTargetFiles_13, make__module_target__TouchedFileNames_14, make__module_target__STATE_VARIABLE_Info_0_29, make__module_target__STATE_VARIABLE_Info_30);
          }
        }
        break;
      case (MR_Integer) 1:
        {
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *make__module_target__TouchedTargetFiles_13 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (make__module_target__TargetFile_11));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          *make__module_target__TouchedFileNames_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          *make__module_target__STATE_VARIABLE_Info_30 = make__module_target__STATE_VARIABLE_Info_0_29;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word make__module_target__PIC_19 = ((MR_Word) (MR_hl_field(MR_mktag(2), make__module_target__Task_12, (MR_Integer) 0)));
          MR_Word make__module_target__Lang_20 = ((MR_Word) (MR_hl_field(MR_mktag(2), make__module_target__Task_12, (MR_Integer) 1)));
          MR_Word make__module_target__ModuleName_21;
          MR_Word make__module_target__ForeignCodeFile_23;
          MR_String make__module_target__ForeignObjectFile_24;
          MR_Word make__module_target__V_22_22;
          MR_Word make__module_target__V_45_45;
          MR_String make__module_target__V_46_46;

          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *make__module_target__TouchedTargetFiles_13 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (make__module_target__TargetFile_11));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          make__module_target__ModuleName_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__TargetFile_11, (MR_Integer) 0)));
          make__module_target__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__TargetFile_11, (MR_Integer) 1)));
          {
            make__module_target__get_foreign_code_file_7_p_0(make__module_target__Globals_10, make__module_target__ModuleName_21, make__module_target__PIC_19, make__module_target__Lang_20, &make__module_target__ForeignCodeFile_23);
          }
          make__module_target__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__ForeignCodeFile_23, (MR_Integer) 0)));
          make__module_target__V_46_46 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_target__ForeignCodeFile_23, (MR_Integer) 1)));
          make__module_target__ForeignObjectFile_24 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_target__ForeignCodeFile_23, (MR_Integer) 2)));
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *make__module_target__TouchedFileNames_14 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (make__module_target__ForeignObjectFile_24));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          *make__module_target__STATE_VARIABLE_Info_30 = make__module_target__STATE_VARIABLE_Info_0_29;
        }
        break;
      case (MR_Integer) 3:
        {
          MR_String make__module_target__FactTableName_25 = ((MR_String) (MR_hl_field(MR_mktag(3), make__module_target__Task_12, (MR_Integer) 1)));
          MR_String make__module_target__ObjExt_27;
          MR_String make__module_target__FactTableObjectFile_28;
          MR_Word make__module_target__PIC_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), make__module_target__Task_12, (MR_Integer) 0)));
          MR_Word make__module_target__ModuleName_44;
          MR_Word make__module_target__CompilationTarget_50;
          MR_Word make__module_target__V_26_26;

          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *make__module_target__TouchedTargetFiles_13 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (make__module_target__TargetFile_11));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          make__module_target__ModuleName_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__TargetFile_11, (MR_Integer) 0)));
          make__module_target__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__TargetFile_11, (MR_Integer) 1)));
          {
            libs__globals__get_target_2_p_0(make__module_target__Globals_10, &make__module_target__CompilationTarget_50);
          }
          switch (make__module_target__CompilationTarget_50) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                backend_libs__compile_target_code__maybe_pic_object_file_extension_3_p_0(make__module_target__Globals_10, make__module_target__PIC_43, &make__module_target__ObjExt_27);
              }
              break;
            case (MR_Integer) 1:
              {
                {
                  mercury__require__sorry_3_p_0((MR_String) "make.module_target", (MR_String) "function \140make.module_target.get_object_extension\'/2", (MR_String) "object extension for csharp");
                  return;
                }
              }
              break;
            case (MR_Integer) 3:
              {
                {
                  mercury__require__sorry_3_p_0((MR_String) "make.module_target", (MR_String) "function \140make.module_target.get_object_extension\'/2", (MR_String) "mmc --make NYI and target erlang");
                  return;
                }
              }
              break;
            case (MR_Integer) 2:
              {
                {
                  mercury__require__sorry_3_p_0((MR_String) "make.module_target", (MR_String) "function \140make.module_target.get_object_extension\'/2", (MR_String) "object extension for java");
                  return;
                }
              }
              break;
          }
          {
            parse_tree__file_names__fact_table_file_name_8_p_0(make__module_target__Globals_10, make__module_target__ModuleName_44, make__module_target__FactTableName_25, make__module_target__ObjExt_27, (MR_Integer) 0, &make__module_target__FactTableObjectFile_28);
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *make__module_target__TouchedFileNames_14 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (make__module_target__FactTableObjectFile_28));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          *make__module_target__STATE_VARIABLE_Info_30 = make__module_target__STATE_VARIABLE_Info_0_29;
        }
        break;
    }
  }
}

static void MR_CALL 
make__module_target__delete_timestamp_4_p_0_1(
  MR_Box make__module_target__closure_arg,
  MR_Box make__module_target__wrapper_arg_1,
  MR_Box * make__module_target__wrapper_arg_2)
{
  {
    MR_Box make__module_target__closure = make__module_target__closure_arg;

    {
      make__module_target__IntroducedFrom__pred__delete_timestamp__801__1_3_p_0(((MR_String) (MR_hl_field(MR_mktag(0), make__module_target__closure, (MR_Integer) 3))));
    }
  }
}

static void MR_CALL 
make__module_target__delete_timestamp_4_p_0(
  MR_Word make__module_target__Globals_5,
  MR_String make__module_target__TouchedFile_6,
  MR_Word make__module_target__STATE_VARIABLE_Timestamps_0_9,
  MR_Word * make__module_target__STATE_VARIABLE_Timestamps_10)
{
  {
    MR_bool make__module_target__succeeded;
    MR_Word make__module_target__V_12_12;

    {
      make__module_target__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), make__module_target__V_12_12, 0) = ((MR_Box) (&make__module_target_scalar_common_11[1]));
      MR_hl_field(MR_mktag(0), make__module_target__V_12_12, 1) = ((MR_Box) (make__module_target__delete_timestamp_4_p_0_1));
      MR_hl_field(MR_mktag(0), make__module_target__V_12_12, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), make__module_target__V_12_12, 3) = ((MR_Box) (make__module_target__TouchedFile_6));
    }
    {
      make__util__debug_make_msg_4_p_0(make__module_target__Globals_5, make__module_target__V_12_12);
    }
    {
      mercury__map__delete_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &make__module_target_scalar_common_2[1], ((MR_Box) (make__module_target__TouchedFile_6)), make__module_target__STATE_VARIABLE_Timestamps_0_9, make__module_target__STATE_VARIABLE_Timestamps_10);
    }
  }
}

static void MR_CALL 
make__module_target__delete_analysis_registry_timestamps_5_p_0(
  MR_Word make__module_target__Globals_6,
  MR_String make__module_target__FileName_7,
  MR_Word make__module_target__HeadVar__3_8,
  MR_Word make__module_target__STATE_VARIABLE_Timestamps_0_10,
  MR_Word * make__module_target__STATE_VARIABLE_Timestamps_11)
{
  {
    MR_bool make__module_target__succeeded;

    {
      make__module_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_108_101_116_101_95_97_110_97_108_121_115_105_115_95_114_101_103_105_115_116_114_121_95_116_105_109_101_115_116_97_109_112_115_95_95_91_51_93_95_48_5_p_0(make__module_target__Globals_6, make__module_target__FileName_7, make__module_target__STATE_VARIABLE_Timestamps_0_10, make__module_target__STATE_VARIABLE_Timestamps_11);
    }
  }
}

static void MR_CALL 
make__module_target__update_target_status_4_p_0(
  MR_Word make__module_target__TargetStatus_5,
  MR_Word make__module_target__TargetFile_6,
  MR_Word make__module_target__STATE_VARIABLE_Info_0_9,
  MR_Word * make__module_target__STATE_VARIABLE_Info_10)
{
  {
    MR_bool make__module_target__succeeded;
    MR_Word make__module_target__Dep_8;
    MR_Word make__module_target__V_12_12;
    MR_Word make__module_target__V_13_13;
    MR_Word make__module_target__V_14_14;
    MR_Word make__module_target__V_15_15;
    MR_Word make__module_target__V_16_16;
    MR_Word make__module_target__V_17_17;
    MR_Word make__module_target__V_18_18;
    MR_Word make__module_target__V_19_19;
    MR_Word make__module_target__V_20_20;
    MR_Word make__module_target__V_21_21;
    MR_Word make__module_target__V_22_22;
    MR_Word make__module_target__V_23_23;
    MR_Word make__module_target__V_24_24;
    MR_Word make__module_target__V_25_25;
    MR_Word make__module_target__V_26_26;
    MR_Word make__module_target__V_27_27;
    MR_Word make__module_target__V_28_28;
    MR_Word make__module_target__V_29_29;
    MR_Word make__module_target__V_30_30;
    MR_Integer make__module_target__V_31_31;
    MR_Word make__module_target__V_32_32;
    MR_Word make__module_target__V_33_33;
    MR_Word make__module_target__V_34_34;
    MR_Word make__module_target__V_35_35;
    MR_Word make__module_target__V_36_36;
    MR_Word make__module_target__V_37_37;
    MR_Word make__module_target__V_38_38;
    MR_Word make__module_target__V_39_39;
    MR_Word make__module_target__V_40_40;
    MR_Word make__module_target__V_42_42;
    MR_Word make__module_target__V_43_43;
    MR_Word make__module_target__V_44_44;
    MR_Word make__module_target__V_45_45;
    MR_Word make__module_target__V_46_46;
    MR_Word make__module_target__V_47_47;
    MR_Word make__module_target__V_48_48;
    MR_Word make__module_target__V_49_49;
    MR_Word make__module_target__V_50_50;
    MR_Integer make__module_target__V_51_51;
    MR_Word make__module_target__V_52_52;
    MR_Word make__module_target__V_41_41;

    {
      make__module_target__Dep_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), make__module_target__Dep_8, 0) = ((MR_Box) (make__module_target__TargetFile_6));
    }
    make__module_target__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_0_9, (MR_Integer) 0)));
    make__module_target__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_0_9, (MR_Integer) 1)));
    make__module_target__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_0_9, (MR_Integer) 2)));
    make__module_target__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_0_9, (MR_Integer) 3)));
    make__module_target__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_0_9, (MR_Integer) 4)));
    make__module_target__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_0_9, (MR_Integer) 5)));
    make__module_target__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_0_9, (MR_Integer) 6)));
    make__module_target__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_0_9, (MR_Integer) 7)));
    make__module_target__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_0_9, (MR_Integer) 8)));
    make__module_target__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_0_9, (MR_Integer) 9)));
    make__module_target__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_0_9, (MR_Integer) 10)));
    make__module_target__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_0_9, (MR_Integer) 11)));
    make__module_target__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_0_9, (MR_Integer) 12)));
    make__module_target__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_0_9, (MR_Integer) 13)));
    make__module_target__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_0_9, (MR_Integer) 14)));
    make__module_target__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_0_9, (MR_Integer) 15)));
    make__module_target__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_0_9, (MR_Integer) 16)));
    make__module_target__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_0_9, (MR_Integer) 17)));
    make__module_target__V_31_31 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_0_9, (MR_Integer) 18)));
    make__module_target__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_0_9, (MR_Integer) 19)));
    {
      make__module_target__V_13_13 = mercury__version_hash_table__f_101_108_101_109_32_58_61_3_f_0((MR_Word) &make__dependencies__make__dependencies__type_ctor_info_dependency_file_0, (MR_Word) &make__make__type_ctor_info_dependency_status_0, ((MR_Box) (make__module_target__Dep_8)), make__module_target__V_12_12, ((MR_Box) (make__module_target__TargetStatus_5)));
    }
    make__module_target__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_0_9, (MR_Integer) 0)));
    make__module_target__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_0_9, (MR_Integer) 1)));
    make__module_target__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_0_9, (MR_Integer) 2)));
    make__module_target__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_0_9, (MR_Integer) 3)));
    make__module_target__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_0_9, (MR_Integer) 4)));
    make__module_target__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_0_9, (MR_Integer) 5)));
    make__module_target__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_0_9, (MR_Integer) 6)));
    make__module_target__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_0_9, (MR_Integer) 7)));
    make__module_target__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_0_9, (MR_Integer) 8)));
    make__module_target__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_0_9, (MR_Integer) 9)));
    make__module_target__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_0_9, (MR_Integer) 10)));
    make__module_target__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_0_9, (MR_Integer) 11)));
    make__module_target__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_0_9, (MR_Integer) 12)));
    make__module_target__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_0_9, (MR_Integer) 13)));
    make__module_target__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_0_9, (MR_Integer) 14)));
    make__module_target__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_0_9, (MR_Integer) 15)));
    make__module_target__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_0_9, (MR_Integer) 16)));
    make__module_target__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_0_9, (MR_Integer) 17)));
    make__module_target__V_51_51 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_0_9, (MR_Integer) 18)));
    make__module_target__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_0_9, (MR_Integer) 19)));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 20 * sizeof(MR_Word)), NULL, NULL);
      *make__module_target__STATE_VARIABLE_Info_10 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (make__module_target__V_33_33));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (make__module_target__V_34_34));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (make__module_target__V_35_35));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (make__module_target__V_36_36));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (make__module_target__V_37_37));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (make__module_target__V_38_38));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (make__module_target__V_39_39));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (make__module_target__V_40_40));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (make__module_target__V_13_13));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (make__module_target__V_42_42));
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (make__module_target__V_43_43));
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (make__module_target__V_44_44));
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (make__module_target__V_45_45));
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (make__module_target__V_46_46));
      MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (make__module_target__V_47_47));
      MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (make__module_target__V_48_48));
      MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (make__module_target__V_49_49));
      MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (make__module_target__V_50_50));
      MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (make__module_target__V_51_51));
      MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (make__module_target__V_52_52));
    }
  }
}

static void MR_CALL 
make__module_target__record_made_target_2_9_p_0_4(
  MR_Box make__module_target__closure_arg,
  MR_Box make__module_target__wrapper_arg_1,
  MR_Box make__module_target__wrapper_arg_2,
  MR_Box make__module_target__wrapper_arg_3,
  MR_Box * make__module_target__wrapper_arg_4)
{
  {
    MR_Box make__module_target__closure = make__module_target__closure_arg;
    MR_Word make__module_target__conv9_STATE_VARIABLE_Timestamps_11;

    {
      make__module_target__delete_analysis_registry_timestamps_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__closure, (MR_Integer) 3))), ((MR_String) make__module_target__wrapper_arg_1), ((MR_Word) make__module_target__wrapper_arg_2), ((MR_Word) make__module_target__wrapper_arg_3), &make__module_target__conv9_STATE_VARIABLE_Timestamps_11);
    }
    *make__module_target__wrapper_arg_4 = ((MR_Box) (make__module_target__conv9_STATE_VARIABLE_Timestamps_11));
  }
}

static void MR_CALL 
make__module_target__record_made_target_2_9_p_0_3(
  MR_Box make__module_target__closure_arg,
  MR_Box make__module_target__wrapper_arg_1,
  MR_Box make__module_target__wrapper_arg_2,
  MR_Box * make__module_target__wrapper_arg_3)
{
  {
    MR_Box make__module_target__closure = make__module_target__closure_arg;
    MR_Word make__module_target__conv6_STATE_VARIABLE_Timestamps_10;

    {
      make__module_target__delete_timestamp_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__closure, (MR_Integer) 3))), ((MR_String) make__module_target__wrapper_arg_1), ((MR_Word) make__module_target__wrapper_arg_2), &make__module_target__conv6_STATE_VARIABLE_Timestamps_10);
    }
    *make__module_target__wrapper_arg_3 = ((MR_Box) (make__module_target__conv6_STATE_VARIABLE_Timestamps_10));
  }
}

static void MR_CALL 
make__module_target__record_made_target_2_9_p_0_2(
  MR_Box make__module_target__closure_arg,
  MR_Box make__module_target__wrapper_arg_1,
  MR_Box * make__module_target__wrapper_arg_2,
  MR_Box make__module_target__wrapper_arg_3,
  MR_Box * make__module_target__wrapper_arg_4,
  MR_Box make__module_target__wrapper_arg_5,
  MR_Box * make__module_target__wrapper_arg_6)
{
  {
    MR_Box make__module_target__closure = make__module_target__closure_arg;
    MR_String make__module_target__conv3_HeadVar__4_4;
    MR_Word make__module_target__conv2_HeadVar__6_6;

    {
      make__util__get_file_name_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__closure, (MR_Integer) 4))), ((MR_Word) make__module_target__wrapper_arg_1), &make__module_target__conv3_HeadVar__4_4, ((MR_Word) make__module_target__wrapper_arg_3), &make__module_target__conv2_HeadVar__6_6);
    }
    *make__module_target__wrapper_arg_2 = ((MR_Box) (make__module_target__conv3_HeadVar__4_4));
    *make__module_target__wrapper_arg_4 = ((MR_Box) (make__module_target__conv2_HeadVar__6_6));
  }
}

static void MR_CALL 
make__module_target__record_made_target_2_9_p_0_1(
  MR_Box make__module_target__closure_arg,
  MR_Box make__module_target__wrapper_arg_1,
  MR_Box make__module_target__wrapper_arg_2,
  MR_Box * make__module_target__wrapper_arg_3)
{
  {
    MR_Box make__module_target__closure = make__module_target__closure_arg;
    MR_Word make__module_target__conv0_STATE_VARIABLE_Info_10;

    {
      make__module_target__update_target_status_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__closure, (MR_Integer) 3))), ((MR_Word) make__module_target__wrapper_arg_1), ((MR_Word) make__module_target__wrapper_arg_2), &make__module_target__conv0_STATE_VARIABLE_Info_10);
    }
    *make__module_target__wrapper_arg_3 = ((MR_Box) (make__module_target__conv0_STATE_VARIABLE_Info_10));
  }
}

static void MR_CALL 
make__module_target__record_made_target_2_9_p_0(
  MR_Word make__module_target__Globals_10,
  MR_Word make__module_target__Succeeded_11,
  MR_Word make__module_target__TargetFile_12,
  MR_Word make__module_target__TouchedTargetFiles_13,
  MR_Word make__module_target__OtherTouchedFiles_14,
  MR_Word make__module_target__STATE_VARIABLE_Info_0_21,
  MR_Word * make__module_target__STATE_VARIABLE_Info_22)
{
  {
    MR_bool make__module_target__succeeded;
    MR_Word make__module_target__TypeCtorInfo_84_84;
    MR_Word make__module_target__TypeCtorInfo_85_85;
    MR_Word make__module_target__TypeCtorInfo_92_92;
    MR_Word make__module_target__TypeInfo_97_97;
    MR_Word make__module_target__TargetStatus_17;
    MR_Word make__module_target__TouchedTargetFileNames_18;
    MR_Word make__module_target__V_26_26;
    MR_Word make__module_target__STATE_VARIABLE_Info_27_27;
    MR_Word make__module_target__V_28_28;
    MR_Word make__module_target__STATE_VARIABLE_Info_29_29;
    MR_Word make__module_target__STATE_VARIABLE_Timestamps_32_32;
    MR_Word make__module_target__V_33_33;
    MR_Word make__module_target__STATE_VARIABLE_Timestamps_34_34;
    MR_Word make__module_target__STATE_VARIABLE_Timestamps_36_36;
    MR_Word make__module_target__STATE_VARIABLE_Timestamps_40_40;
    MR_Box make__module_target__conv1_STATE_VARIABLE_Info_27_27;
    MR_Box make__module_target__conv5_STATE_VARIABLE_Info_29_29;
    MR_Box make__module_target__conv4_STATE_VARIABLE_IO_24;
    MR_Word make__module_target__V_42_42;
    MR_Word make__module_target__V_43_43;
    MR_Word make__module_target__V_44_44;
    MR_Word make__module_target__V_45_45;
    MR_Word make__module_target__V_46_46;
    MR_Word make__module_target__V_47_47;
    MR_Word make__module_target__V_48_48;
    MR_Word make__module_target__V_49_49;
    MR_Word make__module_target__V_50_50;
    MR_Word make__module_target__V_51_51;
    MR_Word make__module_target__V_52_52;
    MR_Word make__module_target__V_53_53;
    MR_Word make__module_target__V_54_54;
    MR_Word make__module_target__V_55_55;
    MR_Word make__module_target__V_56_56;
    MR_Word make__module_target__V_57_57;
    MR_Word make__module_target__V_58_58;
    MR_Integer make__module_target__V_59_59;
    MR_Word make__module_target__V_60_60;
    MR_Box make__module_target__conv7_STATE_VARIABLE_Timestamps_34_34;
    MR_Box make__module_target__conv8_STATE_VARIABLE_Timestamps_36_36;
    MR_Word make__module_target__V_37_37;
    MR_Word make__module_target__V_20_20;
    MR_Word make__module_target__V_61_61;
    MR_Word make__module_target__V_63_63;
    MR_Word make__module_target__V_64_64;
    MR_Word make__module_target__V_65_65;
    MR_Word make__module_target__V_66_66;
    MR_Word make__module_target__V_67_67;
    MR_Word make__module_target__V_68_68;
    MR_Word make__module_target__V_69_69;
    MR_Word make__module_target__V_70_70;
    MR_Word make__module_target__V_71_71;
    MR_Word make__module_target__V_72_72;
    MR_Word make__module_target__V_73_73;
    MR_Word make__module_target__V_74_74;
    MR_Word make__module_target__V_75_75;
    MR_Word make__module_target__V_76_76;
    MR_Word make__module_target__V_77_77;
    MR_Word make__module_target__V_78_78;
    MR_Integer make__module_target__V_79_79;
    MR_Word make__module_target__V_80_80;
    MR_Word make__module_target__V_62_62;

    switch (make__module_target__Succeeded_11) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          make__module_target__TargetStatus_17 = (MR_Integer) 3;
          {
            make__util__target_file_error_5_p_0(make__module_target__STATE_VARIABLE_Info_0_21, make__module_target__Globals_10, make__module_target__TargetFile_12);
          }
        }
        break;
      case (MR_Integer) 1:
        make__module_target__TargetStatus_17 = (MR_Integer) 2;
        break;
    }
    {
      make__module_target__V_26_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), make__module_target__V_26_26, 0) = ((MR_Box) (&make__module_target_scalar_common_6[0]));
      MR_hl_field(MR_mktag(0), make__module_target__V_26_26, 1) = ((MR_Box) (make__module_target__record_made_target_2_9_p_0_1));
      MR_hl_field(MR_mktag(0), make__module_target__V_26_26, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), make__module_target__V_26_26, 3) = ((MR_Box) (make__module_target__TargetStatus_17));
    }
    make__module_target__TypeCtorInfo_84_84 = (MR_Word) &make__make__type_ctor_info_target_file_0;
    make__module_target__TypeCtorInfo_85_85 = (MR_Word) &make__make__type_ctor_info_make_info_0;
    {
      mercury__list__foldl_4_p_0(make__module_target__TypeCtorInfo_84_84, make__module_target__TypeCtorInfo_85_85, make__module_target__V_26_26, make__module_target__TouchedTargetFiles_13, ((MR_Box) (make__module_target__STATE_VARIABLE_Info_0_21)), &make__module_target__conv1_STATE_VARIABLE_Info_27_27);
    }
    make__module_target__STATE_VARIABLE_Info_27_27 = ((MR_Word) make__module_target__conv1_STATE_VARIABLE_Info_27_27);
    {
      make__module_target__V_28_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), make__module_target__V_28_28, 0) = ((MR_Box) (&make__module_target_scalar_common_10[3]));
      MR_hl_field(MR_mktag(0), make__module_target__V_28_28, 1) = ((MR_Box) (make__module_target__record_made_target_2_9_p_0_2));
      MR_hl_field(MR_mktag(0), make__module_target__V_28_28, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), make__module_target__V_28_28, 3) = ((MR_Box) (make__module_target__Globals_10));
      MR_hl_field(MR_mktag(0), make__module_target__V_28_28, 4) = ((MR_Box) ((MR_Integer) 1));
    }
    make__module_target__TypeCtorInfo_92_92 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
    {
      mercury__list__map_foldl2_7_p_2(make__module_target__TypeCtorInfo_84_84, make__module_target__TypeCtorInfo_92_92, make__module_target__TypeCtorInfo_85_85, (MR_Word) &mercury__io__io__type_ctor_info_state_0, make__module_target__V_28_28, make__module_target__TouchedTargetFiles_13, &make__module_target__TouchedTargetFileNames_18, ((MR_Box) (make__module_target__STATE_VARIABLE_Info_27_27)), &make__module_target__conv5_STATE_VARIABLE_Info_29_29, ((MR_Box) ((MR_Integer) 0)), &make__module_target__conv4_STATE_VARIABLE_IO_24);
    }
    make__module_target__STATE_VARIABLE_Info_29_29 = ((MR_Word) make__module_target__conv5_STATE_VARIABLE_Info_29_29);
    make__module_target__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_29_29, (MR_Integer) 0)));
    make__module_target__STATE_VARIABLE_Timestamps_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_29_29, (MR_Integer) 1)));
    make__module_target__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_29_29, (MR_Integer) 2)));
    make__module_target__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_29_29, (MR_Integer) 3)));
    make__module_target__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_29_29, (MR_Integer) 4)));
    make__module_target__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_29_29, (MR_Integer) 5)));
    make__module_target__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_29_29, (MR_Integer) 6)));
    make__module_target__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_29_29, (MR_Integer) 7)));
    make__module_target__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_29_29, (MR_Integer) 8)));
    make__module_target__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_29_29, (MR_Integer) 9)));
    make__module_target__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_29_29, (MR_Integer) 10)));
    make__module_target__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_29_29, (MR_Integer) 11)));
    make__module_target__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_29_29, (MR_Integer) 12)));
    make__module_target__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_29_29, (MR_Integer) 13)));
    make__module_target__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_29_29, (MR_Integer) 14)));
    make__module_target__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_29_29, (MR_Integer) 15)));
    make__module_target__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_29_29, (MR_Integer) 16)));
    make__module_target__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_29_29, (MR_Integer) 17)));
    make__module_target__V_59_59 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_29_29, (MR_Integer) 18)));
    make__module_target__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_29_29, (MR_Integer) 19)));
    {
      make__module_target__V_33_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), make__module_target__V_33_33, 0) = ((MR_Box) (&make__module_target_scalar_common_6[1]));
      MR_hl_field(MR_mktag(0), make__module_target__V_33_33, 1) = ((MR_Box) (make__module_target__record_made_target_2_9_p_0_3));
      MR_hl_field(MR_mktag(0), make__module_target__V_33_33, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), make__module_target__V_33_33, 3) = ((MR_Box) (make__module_target__Globals_10));
    }
    make__module_target__TypeInfo_97_97 = (MR_Word) &make__module_target_scalar_common_2[2];
    {
      mercury__list__foldl_4_p_0(make__module_target__TypeCtorInfo_92_92, make__module_target__TypeInfo_97_97, make__module_target__V_33_33, make__module_target__TouchedTargetFileNames_18, ((MR_Box) (make__module_target__STATE_VARIABLE_Timestamps_32_32)), &make__module_target__conv7_STATE_VARIABLE_Timestamps_34_34);
    }
    make__module_target__STATE_VARIABLE_Timestamps_34_34 = ((MR_Word) make__module_target__conv7_STATE_VARIABLE_Timestamps_34_34);
    {
      mercury__list__foldl_4_p_0(make__module_target__TypeCtorInfo_92_92, make__module_target__TypeInfo_97_97, make__module_target__V_33_33, make__module_target__OtherTouchedFiles_14, ((MR_Box) (make__module_target__STATE_VARIABLE_Timestamps_34_34)), &make__module_target__conv8_STATE_VARIABLE_Timestamps_36_36);
    }
    make__module_target__STATE_VARIABLE_Timestamps_36_36 = ((MR_Word) make__module_target__conv8_STATE_VARIABLE_Timestamps_36_36);
    make__module_target__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__TargetFile_12, (MR_Integer) 0)));
    make__module_target__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__TargetFile_12, (MR_Integer) 1)));
    make__module_target__succeeded = (make__module_target__V_37_37 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7))));
    if (make__module_target__succeeded)
      {
        MR_Word make__module_target__V_38_38;
        MR_Box make__module_target__conv10_STATE_VARIABLE_Timestamps_40_40;

        {
          make__module_target__V_38_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), make__module_target__V_38_38, 0) = ((MR_Box) (&make__module_target_scalar_common_15[1]));
          MR_hl_field(MR_mktag(0), make__module_target__V_38_38, 1) = ((MR_Box) (make__module_target__record_made_target_2_9_p_0_4));
          MR_hl_field(MR_mktag(0), make__module_target__V_38_38, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), make__module_target__V_38_38, 3) = ((MR_Box) (make__module_target__Globals_10));
        }
        {
          mercury__map__foldl_4_p_0(make__module_target__TypeCtorInfo_92_92, (MR_Word) &make__module_target_scalar_common_2[1], make__module_target__TypeInfo_97_97, make__module_target__V_38_38, make__module_target__STATE_VARIABLE_Timestamps_36_36, ((MR_Box) (make__module_target__STATE_VARIABLE_Timestamps_36_36)), &make__module_target__conv10_STATE_VARIABLE_Timestamps_40_40);
        }
        make__module_target__STATE_VARIABLE_Timestamps_40_40 = ((MR_Word) make__module_target__conv10_STATE_VARIABLE_Timestamps_40_40);
      }
    else
      make__module_target__STATE_VARIABLE_Timestamps_40_40 = make__module_target__STATE_VARIABLE_Timestamps_36_36;
    make__module_target__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_29_29, (MR_Integer) 0)));
    make__module_target__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_29_29, (MR_Integer) 1)));
    make__module_target__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_29_29, (MR_Integer) 2)));
    make__module_target__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_29_29, (MR_Integer) 3)));
    make__module_target__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_29_29, (MR_Integer) 4)));
    make__module_target__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_29_29, (MR_Integer) 5)));
    make__module_target__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_29_29, (MR_Integer) 6)));
    make__module_target__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_29_29, (MR_Integer) 7)));
    make__module_target__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_29_29, (MR_Integer) 8)));
    make__module_target__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_29_29, (MR_Integer) 9)));
    make__module_target__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_29_29, (MR_Integer) 10)));
    make__module_target__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_29_29, (MR_Integer) 11)));
    make__module_target__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_29_29, (MR_Integer) 12)));
    make__module_target__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_29_29, (MR_Integer) 13)));
    make__module_target__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_29_29, (MR_Integer) 14)));
    make__module_target__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_29_29, (MR_Integer) 15)));
    make__module_target__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_29_29, (MR_Integer) 16)));
    make__module_target__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_29_29, (MR_Integer) 17)));
    make__module_target__V_79_79 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_29_29, (MR_Integer) 18)));
    make__module_target__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_29_29, (MR_Integer) 19)));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 20 * sizeof(MR_Word)), NULL, NULL);
      *make__module_target__STATE_VARIABLE_Info_22 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (make__module_target__V_61_61));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (make__module_target__STATE_VARIABLE_Timestamps_40_40));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (make__module_target__V_63_63));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (make__module_target__V_64_64));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (make__module_target__V_65_65));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (make__module_target__V_66_66));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (make__module_target__V_67_67));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (make__module_target__V_68_68));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (make__module_target__V_69_69));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (make__module_target__V_70_70));
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (make__module_target__V_71_71));
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (make__module_target__V_72_72));
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (make__module_target__V_73_73));
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (make__module_target__V_74_74));
      MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (make__module_target__V_75_75));
      MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (make__module_target__V_76_76));
      MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (make__module_target__V_77_77));
      MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (make__module_target__V_78_78));
      MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (make__module_target__V_79_79));
      MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (make__module_target__V_80_80));
    }
  }
}

static void MR_CALL 
make__module_target__invoke_mmc_7_p_0_2(
  MR_Box make__module_target__closure_arg,
  MR_Box make__module_target__wrapper_arg_1,
  MR_Box make__module_target__wrapper_arg_2,
  MR_Box * make__module_target__wrapper_arg_3)
{
  {
    MR_Box make__module_target__closure = make__module_target__closure_arg;

    {
      mercury__io__write_string_3_p_0(((MR_String) make__module_target__wrapper_arg_1));
    }
  }
}

static MR_Box MR_CALL 
make__module_target__invoke_mmc_7_p_0_1(
  MR_Box make__module_target__closure_arg,
  MR_Box make__module_target__wrapper_arg_1)
{
  {
    MR_Box make__module_target__wrapper_arg_2;
    MR_Box make__module_target__closure = make__module_target__closure_arg;
    MR_String make__module_target__conv0_HeadVar__2_2;

    {
      make__module_target__conv0_HeadVar__2_2 = libs__options__quote_arg_1_f_0(((MR_String) make__module_target__wrapper_arg_1));
    }
    make__module_target__wrapper_arg_2 = ((MR_Box) (make__module_target__conv0_HeadVar__2_2));
    return make__module_target__wrapper_arg_2;
  }
}

static void MR_CALL 
make__module_target__invoke_mmc_7_p_0(
  MR_Word make__module_target__Globals_8,
  MR_Word make__module_target__ErrorStream_9,
  MR_Word make__module_target__MaybeArgFileName_10,
  MR_Word make__module_target__Args_11,
  MR_Word * make__module_target__Succeeded_12)
{
  {
    MR_bool make__module_target__succeeded;
    MR_Word make__module_target__TypeCtorInfo_61_61;
    MR_String make__module_target__ProgName_14;
    MR_String make__module_target__MercuryCompiler_16;
    MR_Word make__module_target__QuotedArgs_17;
    MR_String make__module_target__ArgFileName_18;
    MR_Word make__module_target__ArgFileOpenRes_19;
    MR_Word make__module_target__V_25_25;

    {
      mercury__io__progname_4_p_0((MR_String) "", &make__module_target__ProgName_14);
    }
    make__module_target__succeeded = (strcmp(make__module_target__ProgName_14, (MR_String) "") == 0);
    if (!(make__module_target__succeeded))
      {
        make__module_target__succeeded = mercury__builtin__semidet_fail_0_p_0();
      }
    if (make__module_target__succeeded)
      {
        MR_Word make__module_target__MaybeMercuryCompiler_15;

        {
          mercury__io__get_environment_var_4_p_0((MR_String) "MERCURY_COMPILER", &make__module_target__MaybeMercuryCompiler_15);
        }
        if ((make__module_target__MaybeMercuryCompiler_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          make__module_target__MercuryCompiler_16 = (MR_String) "mmc";
        else
          make__module_target__MercuryCompiler_16 = ((MR_String) (MR_hl_field(MR_mktag(1), make__module_target__MaybeMercuryCompiler_15, (MR_Integer) 0)));
      }
    else
      make__module_target__MercuryCompiler_16 = make__module_target__ProgName_14;
    make__module_target__TypeCtorInfo_61_61 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
    {
      make__module_target__QuotedArgs_17 = mercury__list__map_2_f_0(make__module_target__TypeCtorInfo_61_61, make__module_target__TypeCtorInfo_61_61, (MR_Word) &make__module_target_scalar_common_2[9], make__module_target__Args_11);
    }
    if ((make__module_target__MaybeArgFileName_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "make.module_target", (MR_String) "predicate \140make.module_target.invoke_mmc\'/7", (MR_String) "argument file not created");
          return;
        }
      }
    else
      make__module_target__ArgFileName_18 = ((MR_String) (MR_hl_field(MR_mktag(1), make__module_target__MaybeArgFileName_10, (MR_Integer) 0)));
    {
      mercury__io__open_output_4_p_0(make__module_target__ArgFileName_18, &make__module_target__ArgFileOpenRes_19);
    }
    if (((MR_tag((MR_Word) make__module_target__ArgFileOpenRes_19)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Word make__module_target__Error_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_target__ArgFileOpenRes_19, (MR_Integer) 0)));
        MR_String make__module_target__ErrorMsg_24;

        *make__module_target__Succeeded_12 = (MR_Integer) 0;
        {
          mercury__io__error_message_2_p_0(make__module_target__Error_23, &make__module_target__ErrorMsg_24);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) "Error opening \140");
        }
        {
          mercury__io__write_string_3_p_0(make__module_target__ArgFileName_18);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) "\' for output: ");
        }
        {
          mercury__io__write_string_3_p_0(make__module_target__ErrorMsg_24);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) "\n");
        }
      }
    else
      {
        MR_Word make__module_target__ArgFileStream_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__ArgFileOpenRes_19, (MR_Integer) 0)));
        MR_String make__module_target__Command_21;
        MR_Word make__module_target__V_52_52;
        MR_String make__module_target__V_53_53;
        MR_Word make__module_target__V_54_54;
        MR_Word make__module_target__V_56_56;
        MR_String make__module_target__V_57_57;

        {
          mercury__io__write_string_4_p_0(make__module_target__ArgFileStream_20, (MR_String) "MCFLAGS = ");
        }
        {
          mercury__io__write_list_6_p_0(make__module_target__TypeCtorInfo_61_61, make__module_target__ArgFileStream_20, make__module_target__QuotedArgs_17, (MR_String) " ", (MR_Word) &make__module_target_scalar_common_2[10]);
        }
        {
          mercury__io__nl_3_p_0(make__module_target__ArgFileStream_20);
        }
        {
          mercury__io__close_output_3_p_0(make__module_target__ArgFileStream_20);
        }
        {
          make__module_target__V_53_53 = libs__options__quote_arg_1_f_0(make__module_target__MercuryCompiler_16);
        }
        {
          make__module_target__V_57_57 = libs__options__quote_arg_1_f_0(make__module_target__ArgFileName_18);
        }
        {
          make__module_target__V_56_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), make__module_target__V_56_56, 0) = ((MR_Box) (make__module_target__V_57_57));
          MR_hl_field(MR_mktag(1), make__module_target__V_56_56, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          make__module_target__V_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), make__module_target__V_54_54, 0) = ((MR_Box) ((MR_String) "--arg-file"));
          MR_hl_field(MR_mktag(1), make__module_target__V_54_54, 1) = ((MR_Box) (make__module_target__V_56_56));
        }
        {
          make__module_target__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), make__module_target__V_52_52, 0) = ((MR_Box) (make__module_target__V_53_53));
          MR_hl_field(MR_mktag(1), make__module_target__V_52_52, 1) = ((MR_Box) (make__module_target__V_54_54));
        }
        {
          make__module_target__Command_21 = mercury__string__join_list_2_f_0((MR_String) " ", make__module_target__V_52_52);
        }
        {
          parse_tree__module_cmds__invoke_system_command_7_p_0(make__module_target__Globals_8, make__module_target__ErrorStream_9, (MR_Integer) 0, make__module_target__Command_21, make__module_target__Succeeded_12);
        }
      }
    {
      mercury__io__remove_file_4_p_0(make__module_target__ArgFileName_18, &make__module_target__V_25_25);
    }
  }
}

static void MR_CALL 
make__module_target__call_mercury_compile_main_5_p_0(
  MR_Word make__module_target__Globals_6,
  MR_Word make__module_target__Args_7,
  MR_Word * make__module_target__Succeeded_8)
{
  {
    MR_bool make__module_target__succeeded;
    MR_Integer make__module_target__Status0_10;
    MR_Integer make__module_target__Status_11;

    {
      mercury__io__get_exit_status_3_p_0(&make__module_target__Status0_10);
    }
    {
      mercury__io__set_exit_status_3_p_0((MR_Integer) 0);
    }
    {
      top_level__mercury_compile_main__main_for_make_4_p_0(make__module_target__Globals_6, make__module_target__Args_7);
    }
    {
      mercury__io__get_exit_status_3_p_0(&make__module_target__Status_11);
    }
    make__module_target__succeeded = (make__module_target__Status_11 == (MR_Integer) 0);
    if (make__module_target__succeeded)
      *make__module_target__Succeeded_8 = (MR_Integer) 1;
    else
      *make__module_target__Succeeded_8 = (MR_Integer) 0;
    {
      mercury__io__set_exit_status_3_p_0(make__module_target__Status0_10);
    }
  }
}

static void MR_CALL 
make__module_target__fact_table_foreign_code_file_7_p_0(
  MR_Word make__module_target__Globals_8,
  MR_Word make__module_target__ModuleName_9,
  MR_Word make__module_target__PIC_10,
  MR_String make__module_target__FactTableName_11,
  MR_Word * make__module_target__ForeignCodeFile_12)
{
  {
    MR_bool make__module_target__succeeded;
    MR_String make__module_target__ObjExt_14;
    MR_String make__module_target__CFile_15;
    MR_String make__module_target__ObjFile_16;
    MR_Word make__module_target__CompilationTarget_28;

    {
      libs__globals__get_target_2_p_0(make__module_target__Globals_8, &make__module_target__CompilationTarget_28);
    }
    switch (make__module_target__CompilationTarget_28) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          backend_libs__compile_target_code__maybe_pic_object_file_extension_3_p_0(make__module_target__Globals_8, make__module_target__PIC_10, &make__module_target__ObjExt_14);
        }
        break;
      case (MR_Integer) 1:
        {
          {
            mercury__require__sorry_3_p_0((MR_String) "make.module_target", (MR_String) "function \140make.module_target.get_object_extension\'/2", (MR_String) "object extension for csharp");
            return;
          }
        }
        break;
      case (MR_Integer) 3:
        {
          {
            mercury__require__sorry_3_p_0((MR_String) "make.module_target", (MR_String) "function \140make.module_target.get_object_extension\'/2", (MR_String) "mmc --make NYI and target erlang");
            return;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          {
            mercury__require__sorry_3_p_0((MR_String) "make.module_target", (MR_String) "function \140make.module_target.get_object_extension\'/2", (MR_String) "object extension for java");
            return;
          }
        }
        break;
    }
    {
      parse_tree__file_names__fact_table_file_name_8_p_0(make__module_target__Globals_8, make__module_target__ModuleName_9, make__module_target__FactTableName_11, (MR_String) ".c", (MR_Integer) 0, &make__module_target__CFile_15);
    }
    {
      parse_tree__file_names__fact_table_file_name_8_p_0(make__module_target__Globals_8, make__module_target__ModuleName_9, make__module_target__FactTableName_11, make__module_target__ObjExt_14, (MR_Integer) 0, &make__module_target__ObjFile_16);
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      *make__module_target__ForeignCodeFile_12 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (make__module_target__CFile_15));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (make__module_target__ObjFile_16));
    }
  }
}

static void MR_CALL 
make__module_target__get_foreign_code_file_7_p_0(
  MR_Word make__module_target__Globals_8,
  MR_Word make__module_target__ModuleName_9,
  MR_Word make__module_target__PIC_10,
  MR_Word make__module_target__Lang_11,
  MR_Word * make__module_target__ForeignCodeFile_12)
{
  {
    MR_bool make__module_target__succeeded;
    MR_Word make__module_target__ForeignModName_16;
    MR_String make__module_target__SrcExt_17;
    MR_String make__module_target__ObjExt_18;
    MR_String make__module_target__SrcFileName_19;
    MR_String make__module_target__ObjFileName_20;
    MR_Word make__module_target__CompilationTarget_33;
    MR_Word make__module_target__ForeignModName0_14;
    MR_String make__module_target__SrcExt0_15;

    {
      make__module_target__succeeded = parse_tree__prog_foreign__foreign_language_module_name_2_f_0(make__module_target__ModuleName_9, make__module_target__Lang_11, &make__module_target__ForeignModName0_14);
    }
    if (make__module_target__succeeded)
      {
        make__module_target__succeeded = parse_tree__prog_foreign__foreign_language_file_extension_1_f_0(make__module_target__Lang_11, &make__module_target__SrcExt0_15);
      }
    if (make__module_target__succeeded)
      {
        make__module_target__ForeignModName_16 = make__module_target__ForeignModName0_14;
        make__module_target__SrcExt_17 = make__module_target__SrcExt0_15;
      }
    else
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "make.module_target", (MR_String) "predicate \140make.module_target.get_foreign_code_file\'/7", (MR_String) "unsupported foreign language");
          return;
        }
      }
    {
      libs__globals__get_target_2_p_0(make__module_target__Globals_8, &make__module_target__CompilationTarget_33);
    }
    switch (make__module_target__CompilationTarget_33) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          backend_libs__compile_target_code__maybe_pic_object_file_extension_3_p_0(make__module_target__Globals_8, make__module_target__PIC_10, &make__module_target__ObjExt_18);
        }
        break;
      case (MR_Integer) 1:
        {
          {
            mercury__require__sorry_3_p_0((MR_String) "make.module_target", (MR_String) "function \140make.module_target.get_object_extension\'/2", (MR_String) "object extension for csharp");
            return;
          }
        }
        break;
      case (MR_Integer) 3:
        {
          {
            mercury__require__sorry_3_p_0((MR_String) "make.module_target", (MR_String) "function \140make.module_target.get_object_extension\'/2", (MR_String) "mmc --make NYI and target erlang");
            return;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          {
            mercury__require__sorry_3_p_0((MR_String) "make.module_target", (MR_String) "function \140make.module_target.get_object_extension\'/2", (MR_String) "object extension for java");
            return;
          }
        }
        break;
    }
    {
      parse_tree__file_names__module_name_to_file_name_7_p_0(make__module_target__Globals_8, make__module_target__ForeignModName_16, make__module_target__SrcExt_17, (MR_Integer) 0, &make__module_target__SrcFileName_19);
    }
    {
      parse_tree__file_names__module_name_to_file_name_7_p_0(make__module_target__Globals_8, make__module_target__ForeignModName_16, make__module_target__ObjExt_18, (MR_Integer) 0, &make__module_target__ObjFileName_20);
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      *make__module_target__ForeignCodeFile_12 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (make__module_target__Lang_11));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (make__module_target__SrcFileName_19));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (make__module_target__ObjFileName_20));
    }
  }
}

static MR_Word MR_CALL 
make__module_target__forkable_module_compilation_task_type_1_f_0(
  MR_Word make__module_target__HeadVar__1_1)
{
  {
    MR_bool make__module_target__succeeded;
    MR_Word make__module_target__HeadVar__2_2 = ((&make__module_target_vector_common_4[4 + make__module_target__HeadVar__1_1]))->make__module_target__vector_common_type_4_0__vct_4_f_0;

    return make__module_target__HeadVar__2_2;
  }
}

static void MR_CALL 
make__module_target__compile_foreign_code_file_8_p_0(
  MR_Word make__module_target__Globals_9,
  MR_Word make__module_target__ErrorStream_10,
  MR_Word make__module_target__PIC_11,
  MR_Word make__module_target__Imports_12,
  MR_Word make__module_target__ForeignCodeFile_13,
  MR_Word * make__module_target__Succeeded_14)
{
  {
    MR_bool make__module_target__succeeded;
    MR_String make__module_target__V_36_36 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_target__ForeignCodeFile_13, (MR_Integer) 2)));
    MR_String make__module_target__V_37_37 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_target__ForeignCodeFile_13, (MR_Integer) 1)));
    MR_Word make__module_target__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__ForeignCodeFile_13, (MR_Integer) 0)));

    switch (make__module_target__V_38_38) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          backend_libs__compile_target_code__do_compile_c_file_8_p_0(make__module_target__Globals_9, make__module_target__ErrorStream_10, make__module_target__PIC_11, make__module_target__V_37_37, make__module_target__V_36_36, make__module_target__Succeeded_14);
        }
        break;
      case (MR_Integer) 1:
        {
          backend_libs__compile_target_code__compile_csharp_file_8_p_0(make__module_target__Globals_9, make__module_target__ErrorStream_10, make__module_target__Imports_12, make__module_target__V_37_37, make__module_target__V_36_36, make__module_target__Succeeded_14);
        }
        break;
      case (MR_Integer) 3:
        {
          backend_libs__compile_target_code__compile_erlang_file_6_p_0(make__module_target__Globals_9, make__module_target__ErrorStream_10, make__module_target__V_37_37, make__module_target__Succeeded_14);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word make__module_target__V_31_31;

          {
            make__module_target__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), make__module_target__V_31_31, 0) = ((MR_Box) (make__module_target__V_37_37));
            MR_hl_field(MR_mktag(1), make__module_target__V_31_31, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            backend_libs__compile_target_code__compile_java_files_6_p_0(make__module_target__Globals_9, make__module_target__ErrorStream_10, make__module_target__V_31_31, make__module_target__Succeeded_14);
          }
        }
        break;
    }
  }
}

static void MR_CALL 
make__module_target__build_object_code_9_p_0(
  MR_Word make__module_target__Globals_10,
  MR_Word make__module_target__ModuleName_11,
  MR_Word make__module_target__Target_12,
  MR_Word make__module_target__PIC_13,
  MR_Word make__module_target__ErrorStream_14,
  MR_Word make__module_target___Imports_15,
  MR_Word * make__module_target__Succeeded_16)
{
  {
    MR_bool make__module_target__succeeded;

    {
      make__module_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_111_98_106_101_99_116_95_99_111_100_101_95_95_91_54_93_95_48_9_p_0(make__module_target__Globals_10, make__module_target__ModuleName_11, make__module_target__Target_12, make__module_target__PIC_13, make__module_target__ErrorStream_14, make__module_target__Succeeded_16);
    }
  }
}

static void MR_CALL 
make__module_target__build_target_2_12_p_0_7(
  MR_Box make__module_target__closure_arg,
  MR_Box * make__module_target__wrapper_arg_1,
  MR_Box make__module_target__wrapper_arg_2,
  MR_Box * make__module_target__wrapper_arg_3)
{
  {
    MR_Box make__module_target__closure = make__module_target__closure_arg;
    MR_Word make__module_target__conv5_Succeeded_16;

    {
      make__module_target__build_object_code_9_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__closure, (MR_Integer) 7))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__closure, (MR_Integer) 8))), &make__module_target__conv5_Succeeded_16);
    }
    *make__module_target__wrapper_arg_1 = ((MR_Box) (make__module_target__conv5_Succeeded_16));
  }
}

static void MR_CALL 
make__module_target__build_target_2_12_p_0_6(
  MR_Box make__module_target__closure_arg,
  MR_Box * make__module_target__wrapper_arg_1,
  MR_Box make__module_target__wrapper_arg_2,
  MR_Box * make__module_target__wrapper_arg_3)
{
  {
    MR_Box make__module_target__closure = make__module_target__closure_arg;
    MR_Word make__module_target__conv4_Succeeded_12;

    {
      make__module_target__invoke_mmc_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__closure, (MR_Integer) 6))), &make__module_target__conv4_Succeeded_12);
    }
    *make__module_target__wrapper_arg_1 = ((MR_Box) (make__module_target__conv4_Succeeded_12));
  }
}

static void MR_CALL 
make__module_target__build_target_2_12_p_0_5(
  MR_Box make__module_target__closure_arg,
  MR_Box * make__module_target__wrapper_arg_1,
  MR_Box make__module_target__wrapper_arg_2,
  MR_Box * make__module_target__wrapper_arg_3)
{
  {
    MR_Box make__module_target__closure = make__module_target__closure_arg;
    MR_Word make__module_target__conv3_Succeeded_8;

    {
      make__module_target__call_mercury_compile_main_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__closure, (MR_Integer) 4))), &make__module_target__conv3_Succeeded_8);
    }
    *make__module_target__wrapper_arg_1 = ((MR_Box) (make__module_target__conv3_Succeeded_8));
  }
}

static void MR_CALL 
make__module_target__build_target_2_12_p_0_4(
  MR_Box make__module_target__closure_arg,
  MR_Box make__module_target__wrapper_arg_1,
  MR_Box make__module_target__wrapper_arg_2,
  MR_Box * make__module_target__wrapper_arg_3)
{
  {
    MR_Box make__module_target__closure = make__module_target__closure_arg;

    {
      mercury__io__write_string_3_p_0(((MR_String) make__module_target__wrapper_arg_1));
    }
  }
}

static MR_Box MR_CALL 
make__module_target__build_target_2_12_p_0_3(
  MR_Box make__module_target__closure_arg,
  MR_Box make__module_target__wrapper_arg_1)
{
  {
    MR_Box make__module_target__wrapper_arg_2;
    MR_Box make__module_target__closure = make__module_target__closure_arg;
    MR_String make__module_target__conv2_HeadVar__2_2;

    {
      make__module_target__conv2_HeadVar__2_2 = libs__options__quote_arg_1_f_0(((MR_String) make__module_target__wrapper_arg_1));
    }
    make__module_target__wrapper_arg_2 = ((MR_Box) (make__module_target__conv2_HeadVar__2_2));
    return make__module_target__wrapper_arg_2;
  }
}

static void MR_CALL 
make__module_target__build_target_2_12_p_0_2(
  MR_Box make__module_target__closure_arg,
  MR_Box * make__module_target__wrapper_arg_1,
  MR_Box make__module_target__wrapper_arg_2,
  MR_Box * make__module_target__wrapper_arg_3)
{
  {
    MR_Box make__module_target__closure = make__module_target__closure_arg;
    MR_Word make__module_target__conv1_Succeeded_14;

    {
      make__module_target__compile_foreign_code_file_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__closure, (MR_Integer) 7))), &make__module_target__conv1_Succeeded_14);
    }
    *make__module_target__wrapper_arg_1 = ((MR_Box) (make__module_target__conv1_Succeeded_14));
  }
}

static void MR_CALL 
make__module_target__build_target_2_12_p_0_1(
  MR_Box make__module_target__closure_arg,
  MR_Box * make__module_target__wrapper_arg_1,
  MR_Box make__module_target__wrapper_arg_2,
  MR_Box * make__module_target__wrapper_arg_3)
{
  {
    MR_Box make__module_target__closure = make__module_target__closure_arg;
    MR_Word make__module_target__conv0_Succeeded_14;

    {
      make__module_target__compile_foreign_code_file_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__closure, (MR_Integer) 7))), &make__module_target__conv0_Succeeded_14);
    }
    *make__module_target__wrapper_arg_1 = ((MR_Box) (make__module_target__conv0_Succeeded_14));
  }
}

static void MR_CALL 
make__module_target__build_target_2_12_p_0(
  MR_Word make__module_target__ModuleName_13,
  MR_Word make__module_target__Task_14,
  MR_Word make__module_target__ArgFileName_15,
  MR_Word make__module_target__Imports_16,
  MR_Word make__module_target__Globals_17,
  MR_Word make__module_target__AllOptionArgs_18,
  MR_Word make__module_target__ErrorStream_19,
  MR_Word * make__module_target__Succeeded_20,
  MR_Word make__module_target__STATE_VARIABLE_Info_0_36,
  MR_Word * make__module_target__STATE_VARIABLE_Info_37)
{
  {
    MR_bool make__module_target__succeeded;

    switch (MR_tag((MR_Word) make__module_target__Task_14)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word make__module_target__ModuleTask_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Task_14, (MR_Integer) 0)));
          MR_String make__module_target__ModuleArg_24;
          MR_Word make__module_target__Verbose_25;
          MR_Word make__module_target__OldOutputStream_27;
          MR_Word make__module_target__IsForkable_28;
          MR_Word make__module_target__V_29_29;

          {
            make__module_target__ModuleArg_24 = mdbcomp__sym_name__sym_name_to_string_1_f_0(make__module_target__ModuleName_13);
          }
          {
            libs__globals__lookup_bool_option_3_p_0(make__module_target__Globals_17, (MR_Integer) 58, &make__module_target__Verbose_25);
          }
          switch (make__module_target__Verbose_25) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word make__module_target__TypeCtorInfo_78_78 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
                MR_Word make__module_target__AllArgs_26;
                MR_Word make__module_target__V_49_49;
                MR_Word make__module_target__V_53_53;

                {
                  make__module_target__V_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), make__module_target__V_49_49, 0) = ((MR_Box) (make__module_target__ModuleArg_24));
                  MR_hl_field(MR_mktag(1), make__module_target__V_49_49, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
                {
                  make__module_target__AllArgs_26 = mercury__list__append_2_f_0(make__module_target__TypeCtorInfo_78_78, make__module_target__AllOptionArgs_18, make__module_target__V_49_49);
                }
                {
                  mercury__io__write_string_3_p_0((MR_String) "Invoking self \140mmc ");
                }
                {
                  make__module_target__V_53_53 = mercury__list__map_2_f_0(make__module_target__TypeCtorInfo_78_78, make__module_target__TypeCtorInfo_78_78, (MR_Word) &make__module_target_scalar_common_2[7], make__module_target__AllArgs_26);
                }
                {
                  mercury__io__write_list_5_p_0(make__module_target__TypeCtorInfo_78_78, make__module_target__V_53_53, (MR_String) " ", (MR_Word) &make__module_target_scalar_common_2[8]);
                }
                {
                  mercury__io__write_string_3_p_0((MR_String) "\'");
                }
                {
                  mercury__io__nl_2_p_0();
                }
              }
              break;
          }
          {
            mercury__io__set_output_stream_4_p_0(make__module_target__ErrorStream_19, &make__module_target__OldOutputStream_27);
          }
          {
            make__module_target__IsForkable_28 = make__module_target__forkable_module_compilation_task_type_1_f_0(make__module_target__ModuleTask_23);
          }
          switch (make__module_target__IsForkable_28) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word make__module_target__V_62_62;

                {
                  make__module_target__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), make__module_target__V_62_62, 0) = ((MR_Box) (make__module_target__ModuleArg_24));
                  MR_hl_field(MR_mktag(1), make__module_target__V_62_62, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
                {
                  make__module_target__call_mercury_compile_main_5_p_0(make__module_target__Globals_17, make__module_target__V_62_62, make__module_target__Succeeded_20);
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word make__module_target__V_65_65;
                MR_Word make__module_target__V_66_66;
                MR_Word make__module_target__V_68_68;
                MR_Word make__module_target__V_70_70;

                {
                  make__module_target__V_68_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), make__module_target__V_68_68, 0) = ((MR_Box) (make__module_target__ModuleArg_24));
                  MR_hl_field(MR_mktag(1), make__module_target__V_68_68, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
                {
                  make__module_target__V_65_65 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), make__module_target__V_65_65, 0) = ((MR_Box) (&make__module_target_scalar_common_15[0]));
                  MR_hl_field(MR_mktag(0), make__module_target__V_65_65, 1) = ((MR_Box) (make__module_target__build_target_2_12_p_0_5));
                  MR_hl_field(MR_mktag(0), make__module_target__V_65_65, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                  MR_hl_field(MR_mktag(0), make__module_target__V_65_65, 3) = ((MR_Box) (make__module_target__Globals_17));
                  MR_hl_field(MR_mktag(0), make__module_target__V_65_65, 4) = ((MR_Box) (make__module_target__V_68_68));
                }
                {
                  make__module_target__V_70_70 = mercury__list__f_43_43_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, make__module_target__AllOptionArgs_18, make__module_target__V_68_68);
                }
                {
                  make__module_target__V_66_66 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), make__module_target__V_66_66, 0) = ((MR_Box) (&make__module_target_scalar_common_5[4]));
                  MR_hl_field(MR_mktag(0), make__module_target__V_66_66, 1) = ((MR_Box) (make__module_target__build_target_2_12_p_0_6));
                  MR_hl_field(MR_mktag(0), make__module_target__V_66_66, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                  MR_hl_field(MR_mktag(0), make__module_target__V_66_66, 3) = ((MR_Box) (make__module_target__Globals_17));
                  MR_hl_field(MR_mktag(0), make__module_target__V_66_66, 4) = ((MR_Box) (make__module_target__ErrorStream_19));
                  MR_hl_field(MR_mktag(0), make__module_target__V_66_66, 5) = ((MR_Box) (make__module_target__ArgFileName_15));
                  MR_hl_field(MR_mktag(0), make__module_target__V_66_66, 6) = ((MR_Box) (make__module_target__V_70_70));
                }
                {
                  libs__process_util__call_in_forked_process_with_backup_5_p_0(make__module_target__V_65_65, make__module_target__V_66_66, make__module_target__Succeeded_20);
                }
              }
              break;
          }
          {
            mercury__io__set_output_stream_4_p_0(make__module_target__OldOutputStream_27, &make__module_target__V_29_29);
          }
          switch (make__module_target__ModuleTask_23) {
            default:
              make__module_target__succeeded = MR_FALSE;
              break;
            case (MR_Integer) 6:
              make__module_target__succeeded = MR_TRUE;
              break;
            case (MR_Integer) 0:
              make__module_target__succeeded = MR_TRUE;
              break;
          }
          if (make__module_target__succeeded)
            {
              {
                parse_tree__module_cmds__touch_interface_datestamp_5_p_0(make__module_target__Globals_17, make__module_target__ModuleName_13, (MR_String) ".err_date");
              }
            }
          else
            {
            }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word make__module_target__PIC_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_target__Task_14, (MR_Integer) 0)));
          MR_Word make__module_target__CompilationTarget_31;
          MR_Word make__module_target__V_46_46;

          {
            libs__globals__get_target_2_p_0(make__module_target__Globals_17, &make__module_target__CompilationTarget_31);
          }
          {
            make__module_target__V_46_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), make__module_target__V_46_46, 0) = ((MR_Box) (&make__module_target_scalar_common_13[1]));
            MR_hl_field(MR_mktag(0), make__module_target__V_46_46, 1) = ((MR_Box) (make__module_target__build_target_2_12_p_0_7));
            MR_hl_field(MR_mktag(0), make__module_target__V_46_46, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
            MR_hl_field(MR_mktag(0), make__module_target__V_46_46, 3) = ((MR_Box) (make__module_target__Globals_17));
            MR_hl_field(MR_mktag(0), make__module_target__V_46_46, 4) = ((MR_Box) (make__module_target__ModuleName_13));
            MR_hl_field(MR_mktag(0), make__module_target__V_46_46, 5) = ((MR_Box) (make__module_target__CompilationTarget_31));
            MR_hl_field(MR_mktag(0), make__module_target__V_46_46, 6) = ((MR_Box) (make__module_target__PIC_30));
            MR_hl_field(MR_mktag(0), make__module_target__V_46_46, 7) = ((MR_Box) (make__module_target__ErrorStream_19));
            MR_hl_field(MR_mktag(0), make__module_target__V_46_46, 8) = ((MR_Box) (make__module_target__Imports_16));
          }
          {
            libs__process_util__call_in_forked_process_4_p_0(make__module_target__V_46_46, make__module_target__Succeeded_20);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word make__module_target__Lang_32 = ((MR_Word) (MR_hl_field(MR_mktag(2), make__module_target__Task_14, (MR_Integer) 1)));
          MR_Word make__module_target__ForeignCodeFile_33;
          MR_Word make__module_target__V_44_44;
          MR_Word make__module_target__PIC_76 = ((MR_Word) (MR_hl_field(MR_mktag(2), make__module_target__Task_14, (MR_Integer) 0)));

          {
            make__module_target__get_foreign_code_file_7_p_0(make__module_target__Globals_17, make__module_target__ModuleName_13, make__module_target__PIC_76, make__module_target__Lang_32, &make__module_target__ForeignCodeFile_33);
          }
          {
            make__module_target__V_44_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), make__module_target__V_44_44, 0) = ((MR_Box) (&make__module_target_scalar_common_10[2]));
            MR_hl_field(MR_mktag(0), make__module_target__V_44_44, 1) = ((MR_Box) (make__module_target__build_target_2_12_p_0_2));
            MR_hl_field(MR_mktag(0), make__module_target__V_44_44, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
            MR_hl_field(MR_mktag(0), make__module_target__V_44_44, 3) = ((MR_Box) (make__module_target__Globals_17));
            MR_hl_field(MR_mktag(0), make__module_target__V_44_44, 4) = ((MR_Box) (make__module_target__ErrorStream_19));
            MR_hl_field(MR_mktag(0), make__module_target__V_44_44, 5) = ((MR_Box) (make__module_target__PIC_76));
            MR_hl_field(MR_mktag(0), make__module_target__V_44_44, 6) = ((MR_Box) (make__module_target__Imports_16));
            MR_hl_field(MR_mktag(0), make__module_target__V_44_44, 7) = ((MR_Box) (make__module_target__ForeignCodeFile_33));
          }
          {
            libs__process_util__call_in_forked_process_4_p_0(make__module_target__V_44_44, make__module_target__Succeeded_20);
          }
        }
        break;
      case (MR_Integer) 3:
        {
          MR_String make__module_target__FactTableFile_34 = ((MR_String) (MR_hl_field(MR_mktag(3), make__module_target__Task_14, (MR_Integer) 1)));
          MR_Word make__module_target__FactTableForeignCode_35;
          MR_Word make__module_target__V_41_41;
          MR_Word make__module_target__PIC_77 = ((MR_Word) (MR_hl_field(MR_mktag(3), make__module_target__Task_14, (MR_Integer) 0)));

          {
            make__module_target__fact_table_foreign_code_file_7_p_0(make__module_target__Globals_17, make__module_target__ModuleName_13, make__module_target__PIC_77, make__module_target__FactTableFile_34, &make__module_target__FactTableForeignCode_35);
          }
          {
            make__module_target__V_41_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), make__module_target__V_41_41, 0) = ((MR_Box) (&make__module_target_scalar_common_10[2]));
            MR_hl_field(MR_mktag(0), make__module_target__V_41_41, 1) = ((MR_Box) (make__module_target__build_target_2_12_p_0_1));
            MR_hl_field(MR_mktag(0), make__module_target__V_41_41, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
            MR_hl_field(MR_mktag(0), make__module_target__V_41_41, 3) = ((MR_Box) (make__module_target__Globals_17));
            MR_hl_field(MR_mktag(0), make__module_target__V_41_41, 4) = ((MR_Box) (make__module_target__ErrorStream_19));
            MR_hl_field(MR_mktag(0), make__module_target__V_41_41, 5) = ((MR_Box) (make__module_target__PIC_77));
            MR_hl_field(MR_mktag(0), make__module_target__V_41_41, 6) = ((MR_Box) (make__module_target__Imports_16));
            MR_hl_field(MR_mktag(0), make__module_target__V_41_41, 7) = ((MR_Box) (make__module_target__FactTableForeignCode_35));
          }
          {
            libs__process_util__call_in_forked_process_4_p_0(make__module_target__V_41_41, make__module_target__Succeeded_20);
          }
        }
        break;
    }
    *make__module_target__STATE_VARIABLE_Info_37 = make__module_target__STATE_VARIABLE_Info_0_36;
  }
}

static void MR_CALL 
make__module_target__build_target_12_p_0_3(
  MR_Box make__module_target__closure_arg,
  MR_Box * make__module_target__wrapper_arg_1,
  MR_Box make__module_target__wrapper_arg_2,
  MR_Box * make__module_target__wrapper_arg_3,
  MR_Box make__module_target__wrapper_arg_4,
  MR_Box * make__module_target__wrapper_arg_5)
{
  {
    MR_Box make__module_target__closure = make__module_target__closure_arg;
    MR_Word make__module_target__conv4_HeadVar__5_5;
    MR_Word make__module_target__conv3_HeadVar__7_7;

    {
      make__util__build_with_module_options_and_output_redirect_9_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__closure, (MR_Integer) 6))), &make__module_target__conv4_HeadVar__5_5, ((MR_Word) make__module_target__wrapper_arg_2), &make__module_target__conv3_HeadVar__7_7);
    }
    *make__module_target__wrapper_arg_1 = ((MR_Box) (make__module_target__conv4_HeadVar__5_5));
    *make__module_target__wrapper_arg_3 = ((MR_Box) (make__module_target__conv3_HeadVar__7_7));
  }
}

static void MR_CALL 
make__module_target__build_target_12_p_0_2(
  MR_Box make__module_target__closure_arg,
  MR_Box make__module_target__wrapper_arg_1,
  MR_Box make__module_target__wrapper_arg_2,
  MR_Box make__module_target__wrapper_arg_3,
  MR_Box * make__module_target__wrapper_arg_4,
  MR_Box make__module_target__wrapper_arg_5,
  MR_Box * make__module_target__wrapper_arg_6,
  MR_Box make__module_target__wrapper_arg_7,
  MR_Box * make__module_target__wrapper_arg_8)
{
  {
    MR_Box make__module_target__closure = make__module_target__closure_arg;
    MR_Word make__module_target__conv2_Succeeded_20;
    MR_Word make__module_target__conv1_STATE_VARIABLE_Info_37;

    {
      make__module_target__build_target_2_12_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__closure, (MR_Integer) 6))), ((MR_Word) make__module_target__wrapper_arg_1), ((MR_Word) make__module_target__wrapper_arg_2), ((MR_Word) make__module_target__wrapper_arg_3), &make__module_target__conv2_Succeeded_20, ((MR_Word) make__module_target__wrapper_arg_5), &make__module_target__conv1_STATE_VARIABLE_Info_37);
    }
    *make__module_target__wrapper_arg_4 = ((MR_Box) (make__module_target__conv2_Succeeded_20));
    *make__module_target__wrapper_arg_6 = ((MR_Box) (make__module_target__conv1_STATE_VARIABLE_Info_37));
  }
}

static void MR_CALL 
make__module_target__build_target_12_p_0_1(
  MR_Box make__module_target__closure_arg,
  MR_Box make__module_target__wrapper_arg_1,
  MR_Box * make__module_target__wrapper_arg_2,
  MR_Box make__module_target__wrapper_arg_3,
  MR_Box * make__module_target__wrapper_arg_4)
{
  {
    MR_Box make__module_target__closure = make__module_target__closure_arg;
    MR_Word make__module_target__conv0_LambdaHeadVar__2_60;

    {
      make__module_target__IntroducedFrom__pred__build_target__382__1_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__closure, (MR_Integer) 6))), ((MR_Word) make__module_target__wrapper_arg_1), &make__module_target__conv0_LambdaHeadVar__2_60);
    }
    *make__module_target__wrapper_arg_2 = ((MR_Box) (make__module_target__conv0_LambdaHeadVar__2_60));
  }
}

static void MR_CALL 
make__module_target__build_target_12_p_0(
  MR_Word make__module_target__Globals_13,
  MR_Word make__module_target__CompilationTask_14,
  MR_Word make__module_target__TargetFile_15,
  MR_Word make__module_target__Imports_16,
  MR_Word make__module_target__TouchedTargetFiles_17,
  MR_Word make__module_target__TouchedFiles_18,
  MR_Word make__module_target__ExtraOptions_19,
  MR_Word * make__module_target__Succeeded_20,
  MR_Word make__module_target__STATE_VARIABLE_Info_0_44,
  MR_Word * make__module_target__STATE_VARIABLE_Info_45)
{
  {
    MR_bool make__module_target__succeeded;
    MR_Word make__module_target__ModuleName_23;
    MR_Word make__module_target__Task_25;
    MR_Word make__module_target__TaskOptions_26;
    MR_Word make__module_target__MaybeArgFileName_31;
    MR_Word make__module_target__ArgFileNameSuccess_32;
    MR_Word make__module_target___FileType_24;
    MR_Word make__module_target__ModuleTask_27;
    MR_Word make__module_target__V_49_49;
    MR_Word make__module_target__V_50_50;
    MR_Word make__module_target__V_28_28;

    {
      make__util__maybe_make_target_message_4_p_0(make__module_target__Globals_13, make__module_target__TargetFile_15);
    }
    make__module_target__ModuleName_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__TargetFile_15, (MR_Integer) 0)));
    make__module_target___FileType_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__TargetFile_15, (MR_Integer) 1)));
    make__module_target__Task_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__CompilationTask_14, (MR_Integer) 0)));
    make__module_target__TaskOptions_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__CompilationTask_14, (MR_Integer) 1)));
    make__module_target__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__CompilationTask_14, (MR_Integer) 0)));
    make__module_target__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__CompilationTask_14, (MR_Integer) 1)));
    make__module_target__succeeded = ((MR_tag((MR_Word) make__module_target__V_49_49)) == (MR_mktag((MR_Integer) 0)));
    if (make__module_target__succeeded)
      {
        make__module_target__ModuleTask_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__V_49_49, (MR_Integer) 0)));
        {
          make__module_target__V_50_50 = make__module_target__forkable_module_compilation_task_type_1_f_0(make__module_target__ModuleTask_27);
        }
        make__module_target__succeeded = (make__module_target__V_50_50 == (MR_Integer) 1);
        if (make__module_target__succeeded)
          {
            {
              make__module_target__succeeded = libs__process_util__can_fork_0_p_0();
            }
            make__module_target__succeeded = !(make__module_target__succeeded);
          }
      }
    if (make__module_target__succeeded)
      {
        MR_Word make__module_target__ArgFileNameResult_29;

        {
          mercury__io__make_temp_file_3_p_0(&make__module_target__ArgFileNameResult_29);
        }
        if (((MR_tag((MR_Word) make__module_target__ArgFileNameResult_29)) == (MR_mktag((MR_Integer) 1))))
          {
            MR_Word make__module_target__Error_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_target__ArgFileNameResult_29, (MR_Integer) 0)));

            make__module_target__MaybeArgFileName_31 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            {
              make__module_target__ArgFileNameSuccess_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), make__module_target__ArgFileNameSuccess_32, 0) = ((MR_Box) (make__module_target__Error_33));
            }
          }
        else
          {
            MR_String make__module_target__ArgFileName_30 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_target__ArgFileNameResult_29, (MR_Integer) 0)));

            {
              make__module_target__MaybeArgFileName_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), make__module_target__MaybeArgFileName_31, 0) = ((MR_Box) (make__module_target__ArgFileName_30));
            }
            make__module_target__ArgFileNameSuccess_32 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          }
      }
    else
      {
        make__module_target__MaybeArgFileName_31 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        make__module_target__ArgFileNameSuccess_32 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      }
    if ((make__module_target__ArgFileNameSuccess_32 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Word make__module_target__Cleanup_34;
        MR_Integer make__module_target__Time0_38;
        MR_Word make__module_target__VeryVerbose_39;
        MR_Integer make__module_target__Time_40;
        MR_Word make__module_target__ShowMakeTimes_41;
        MR_Word make__module_target__V_78_78;
        MR_Word make__module_target__STATE_VARIABLE_Info_79_79;
        MR_Word make__module_target__V_81_81;
        MR_Word make__module_target__V_82_82;
        MR_Box make__module_target__conv5_STATE_VARIABLE_Info_79_79;

        {
          make__module_target__Cleanup_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), make__module_target__Cleanup_34, 0) = ((MR_Box) (&make__module_target_scalar_common_10[1]));
          MR_hl_field(MR_mktag(0), make__module_target__Cleanup_34, 1) = ((MR_Box) (make__module_target__build_target_12_p_0_1));
          MR_hl_field(MR_mktag(0), make__module_target__Cleanup_34, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
          MR_hl_field(MR_mktag(0), make__module_target__Cleanup_34, 3) = ((MR_Box) (make__module_target__Globals_13));
          MR_hl_field(MR_mktag(0), make__module_target__Cleanup_34, 4) = ((MR_Box) (make__module_target__TouchedTargetFiles_17));
          MR_hl_field(MR_mktag(0), make__module_target__Cleanup_34, 5) = ((MR_Box) (make__module_target__TouchedFiles_18));
          MR_hl_field(MR_mktag(0), make__module_target__Cleanup_34, 6) = ((MR_Box) (make__module_target__MaybeArgFileName_31));
        }
        {
          make__util__get_real_milliseconds_3_p_0(&make__module_target__Time0_38);
        }
        {
          libs__globals__lookup_bool_option_3_p_0(make__module_target__Globals_13, (MR_Integer) 53, &make__module_target__VeryVerbose_39);
        }
        {
          make__module_target__V_81_81 = mercury__list__f_43_43_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, make__module_target__ExtraOptions_19, make__module_target__TaskOptions_26);
        }
        {
          make__module_target__V_82_82 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), make__module_target__V_82_82, 0) = ((MR_Box) (&make__module_target_scalar_common_12[0]));
          MR_hl_field(MR_mktag(0), make__module_target__V_82_82, 1) = ((MR_Box) (make__module_target__build_target_12_p_0_2));
          MR_hl_field(MR_mktag(0), make__module_target__V_82_82, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
          MR_hl_field(MR_mktag(0), make__module_target__V_82_82, 3) = ((MR_Box) (make__module_target__ModuleName_23));
          MR_hl_field(MR_mktag(0), make__module_target__V_82_82, 4) = ((MR_Box) (make__module_target__Task_25));
          MR_hl_field(MR_mktag(0), make__module_target__V_82_82, 5) = ((MR_Box) (make__module_target__MaybeArgFileName_31));
          MR_hl_field(MR_mktag(0), make__module_target__V_82_82, 6) = ((MR_Box) (make__module_target__Imports_16));
        }
        {
          make__module_target__V_78_78 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), make__module_target__V_78_78, 0) = ((MR_Box) (&make__module_target_scalar_common_13[0]));
          MR_hl_field(MR_mktag(0), make__module_target__V_78_78, 1) = ((MR_Box) (make__module_target__build_target_12_p_0_3));
          MR_hl_field(MR_mktag(0), make__module_target__V_78_78, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
          MR_hl_field(MR_mktag(0), make__module_target__V_78_78, 3) = ((MR_Box) (make__module_target__Globals_13));
          MR_hl_field(MR_mktag(0), make__module_target__V_78_78, 4) = ((MR_Box) (make__module_target__ModuleName_23));
          MR_hl_field(MR_mktag(0), make__module_target__V_78_78, 5) = ((MR_Box) (make__module_target__V_81_81));
          MR_hl_field(MR_mktag(0), make__module_target__V_78_78, 6) = ((MR_Box) (make__module_target__V_82_82));
        }
        {
          libs__process_util__build_with_check_for_interrupt_8_p_0((MR_Word) &make__make__type_ctor_info_make_info_0, make__module_target__VeryVerbose_39, make__module_target__V_78_78, make__module_target__Cleanup_34, make__module_target__Succeeded_20, ((MR_Box) (make__module_target__STATE_VARIABLE_Info_0_44)), &make__module_target__conv5_STATE_VARIABLE_Info_79_79);
        }
        make__module_target__STATE_VARIABLE_Info_79_79 = ((MR_Word) make__module_target__conv5_STATE_VARIABLE_Info_79_79);
        {
          make__module_target__record_made_target_2_9_p_0(make__module_target__Globals_13, *make__module_target__Succeeded_20, make__module_target__TargetFile_15, make__module_target__TouchedTargetFiles_17, make__module_target__TouchedFiles_18, make__module_target__STATE_VARIABLE_Info_79_79, make__module_target__STATE_VARIABLE_Info_45);
        }
        {
          make__util__get_real_milliseconds_3_p_0(&make__module_target__Time_40);
        }
        {
          libs__globals__lookup_bool_option_3_p_0(make__module_target__Globals_13, (MR_Integer) 647, &make__module_target__ShowMakeTimes_41);
        }
        switch (make__module_target__ShowMakeTimes_41) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Float make__module_target__DiffSecs_42;
              MR_Float make__module_target__V_87_87;
              MR_Integer make__module_target__V_88_88 = (make__module_target__Time_40 - make__module_target__Time0_38);

              {
                make__module_target__V_87_87 = mercury__float__float_1_f_0(make__module_target__V_88_88);
              }
              {
                make__module_target__DiffSecs_42 = mercury__float__f_slash_2_f_0(make__module_target__V_87_87, (MR_Float) 1000.0000000000000);
              }
              make__module_target__succeeded = (make__module_target__DiffSecs_42 >= ((MR_Float) 0.40000000000000002));
              if (make__module_target__succeeded)
                {
                  MR_String make__module_target__V_135_135;

                  {
                    mercury__io__write_string_3_p_0((MR_String) "Making ");
                  }
                  {
                    make__util__make_write_target_file_4_p_0(make__module_target__Globals_13, make__module_target__TargetFile_15);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) " took ");
                  }
                  {
                    mercury__string__format__format_float_component_nowidth_prec_5_p_0((MR_Word) &make__module_target_scalar_common_3[8], (MR_Integer) 2, (MR_Integer) 2, make__module_target__DiffSecs_42, &make__module_target__V_135_135);
                  }
                  {
                    mercury__io__write_string_3_p_0(make__module_target__V_135_135);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) "s\n");
                  }
                }
              else
                {
                }
            }
            break;
        }
      }
    else
      {
        MR_Word make__module_target__ArgFileError_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_target__ArgFileNameSuccess_32, (MR_Integer) 0)));
        MR_Word make__module_target__V_52_52;
        MR_String make__module_target__V_57_57;

        {
          make__module_target__V_52_52 = mercury__io__stderr_stream_0_f_0();
        }
        {
          make__module_target__V_57_57 = mercury__io__error_message_1_f_0(make__module_target__ArgFileError_43);
        }
        {
          mercury__io__write_string_4_p_0(make__module_target__V_52_52, (MR_String) "Could not create temporary file: ");
        }
        {
          mercury__io__write_string_4_p_0(make__module_target__V_52_52, make__module_target__V_57_57);
        }
        {
          mercury__io__write_string_4_p_0(make__module_target__V_52_52, (MR_String) "\n");
        }
        *make__module_target__Succeeded_20 = (MR_Integer) 0;
        *make__module_target__STATE_VARIABLE_Info_45 = make__module_target__STATE_VARIABLE_Info_0_44;
      }
  }
}

static void MR_CALL 
make__module_target__force_reanalysis_of_suboptimal_module_6_p_0(
  MR_Word make__module_target__Globals_7,
  MR_Word make__module_target__ModuleName_8,
  MR_Word * make__module_target__ForceReanalysis_9,
  MR_Word make__module_target__Info_10)
{
  {
    MR_bool make__module_target__succeeded;
    MR_Integer make__module_target__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__module_target__Info_10, (MR_Integer) 18)));
    MR_Word make__module_target__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Info_10, (MR_Integer) 0)));
    MR_Word make__module_target__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Info_10, (MR_Integer) 1)));
    MR_Word make__module_target__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Info_10, (MR_Integer) 2)));
    MR_Word make__module_target__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Info_10, (MR_Integer) 3)));
    MR_Word make__module_target__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Info_10, (MR_Integer) 4)));
    MR_Word make__module_target__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Info_10, (MR_Integer) 5)));
    MR_Word make__module_target__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Info_10, (MR_Integer) 6)));
    MR_Word make__module_target__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Info_10, (MR_Integer) 7)));
    MR_Word make__module_target__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Info_10, (MR_Integer) 8)));
    MR_Word make__module_target__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Info_10, (MR_Integer) 9)));
    MR_Word make__module_target__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Info_10, (MR_Integer) 10)));
    MR_Word make__module_target__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Info_10, (MR_Integer) 11)));
    MR_Word make__module_target__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Info_10, (MR_Integer) 12)));
    MR_Word make__module_target__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Info_10, (MR_Integer) 13)));
    MR_Word make__module_target__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Info_10, (MR_Integer) 14)));
    MR_Word make__module_target__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Info_10, (MR_Integer) 15)));
    MR_Word make__module_target__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Info_10, (MR_Integer) 16)));
    MR_Word make__module_target__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Info_10, (MR_Integer) 17)));
    MR_Word make__module_target__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Info_10, (MR_Integer) 19)));

    make__module_target__succeeded = (make__module_target__V_15_15 > (MR_Integer) 0);
    if (make__module_target__succeeded)
      {
        MR_Word make__module_target__AnalysisStatus_12;

        mercury__private_builtin__dummy_var = (MR_Integer) 0;
        {
          analysis__do_read_module_overall_status_6_p_0((MR_Word) &make__module_target_scalar_common_1[2], ((MR_Box) ((MR_Integer) 0)), make__module_target__Globals_7, make__module_target__ModuleName_8, &make__module_target__AnalysisStatus_12);
        }
        switch (make__module_target__AnalysisStatus_12) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
            *make__module_target__ForceReanalysis_9 = (MR_Integer) 1;
            break;
          case (MR_Integer) 2:
            *make__module_target__ForceReanalysis_9 = (MR_Integer) 0;
            break;
        }
      }
    else
      *make__module_target__ForceReanalysis_9 = (MR_Integer) 0;
  }
}

static MR_Box MR_CALL 
make__module_target__make_dependency_files_10_p_0_10(
  MR_Box make__module_target__closure_arg,
  MR_Box make__module_target__wrapper_arg_1,
  MR_Box make__module_target__wrapper_arg_2)
{
  {
    MR_Box make__module_target__wrapper_arg_3;
    MR_Box make__module_target__closure = make__module_target__closure_arg;
    MR_Word make__module_target__conv19_HeadVar__3_3;

    {
      make__module_target__conv19_HeadVar__3_3 = make__util__find_oldest_timestamp_2_f_0(((MR_Word) make__module_target__wrapper_arg_1), ((MR_Word) make__module_target__wrapper_arg_2));
    }
    make__module_target__wrapper_arg_3 = ((MR_Box) (make__module_target__conv19_HeadVar__3_3));
    return make__module_target__wrapper_arg_3;
  }
}

static MR_Box MR_CALL 
make__module_target__make_dependency_files_10_p_0_9(
  MR_Box make__module_target__closure_arg,
  MR_Box make__module_target__wrapper_arg_1,
  MR_Box make__module_target__wrapper_arg_2)
{
  {
    MR_Box make__module_target__wrapper_arg_3;
    MR_Box make__module_target__closure = make__module_target__closure_arg;
    MR_Word make__module_target__conv17_HeadVar__3_3;

    {
      make__module_target__conv17_HeadVar__3_3 = make__util__find_oldest_timestamp_2_f_0(((MR_Word) make__module_target__wrapper_arg_1), ((MR_Word) make__module_target__wrapper_arg_2));
    }
    make__module_target__wrapper_arg_3 = ((MR_Box) (make__module_target__conv17_HeadVar__3_3));
    return make__module_target__wrapper_arg_3;
  }
}

static void MR_CALL 
make__module_target__make_dependency_files_10_p_0_8(
  MR_Box make__module_target__closure_arg,
  MR_Box make__module_target__wrapper_arg_1,
  MR_Box * make__module_target__wrapper_arg_2,
  MR_Box make__module_target__wrapper_arg_3,
  MR_Box * make__module_target__wrapper_arg_4,
  MR_Box make__module_target__wrapper_arg_5,
  MR_Box * make__module_target__wrapper_arg_6)
{
  {
    MR_Box make__module_target__closure = make__module_target__closure_arg;
    MR_Word make__module_target__conv14_HeadVar__3_3;
    MR_Word make__module_target__conv13_HeadVar__5_5;

    {
      make__util__get_file_timestamp_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__closure, (MR_Integer) 3))), ((MR_String) make__module_target__wrapper_arg_1), &make__module_target__conv14_HeadVar__3_3, ((MR_Word) make__module_target__wrapper_arg_3), &make__module_target__conv13_HeadVar__5_5);
    }
    *make__module_target__wrapper_arg_2 = ((MR_Box) (make__module_target__conv14_HeadVar__3_3));
    *make__module_target__wrapper_arg_4 = ((MR_Box) (make__module_target__conv13_HeadVar__5_5));
  }
}

static void MR_CALL 
make__module_target__make_dependency_files_10_p_0_7(
  MR_Box make__module_target__closure_arg,
  MR_Box make__module_target__wrapper_arg_1,
  MR_Box * make__module_target__wrapper_arg_2,
  MR_Box make__module_target__wrapper_arg_3,
  MR_Box * make__module_target__wrapper_arg_4,
  MR_Box make__module_target__wrapper_arg_5,
  MR_Box * make__module_target__wrapper_arg_6)
{
  {
    MR_Box make__module_target__closure = make__module_target__closure_arg;
    MR_Word make__module_target__conv10_HeadVar__3_3;
    MR_Word make__module_target__conv9_HeadVar__5_5;

    {
      make__util__get_timestamp_file_timestamp_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__closure, (MR_Integer) 3))), ((MR_Word) make__module_target__wrapper_arg_1), &make__module_target__conv10_HeadVar__3_3, ((MR_Word) make__module_target__wrapper_arg_3), &make__module_target__conv9_HeadVar__5_5);
    }
    *make__module_target__wrapper_arg_2 = ((MR_Box) (make__module_target__conv10_HeadVar__3_3));
    *make__module_target__wrapper_arg_4 = ((MR_Box) (make__module_target__conv9_HeadVar__5_5));
  }
}

static void MR_CALL 
make__module_target__make_dependency_files_10_p_0_2(
  MR_Box make__module_target__closure_arg,
  MR_Box make__module_target__wrapper_arg_1,
  MR_Box * make__module_target__wrapper_arg_2,
  MR_Box make__module_target__wrapper_arg_3,
  MR_Box * make__module_target__wrapper_arg_4,
  MR_Box make__module_target__wrapper_arg_5,
  MR_Box * make__module_target__wrapper_arg_6)
{
  {
    MR_Box make__module_target__closure = make__module_target__closure_arg;
    MR_Word make__module_target__conv5_HeadVar__4_4;
    MR_Word make__module_target__conv4_HeadVar__6_6;

    {
      make__util__get_target_timestamp_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__closure, (MR_Integer) 4))), ((MR_Word) make__module_target__wrapper_arg_1), &make__module_target__conv5_HeadVar__4_4, ((MR_Word) make__module_target__wrapper_arg_3), &make__module_target__conv4_HeadVar__6_6);
    }
    *make__module_target__wrapper_arg_2 = ((MR_Box) (make__module_target__conv5_HeadVar__4_4));
    *make__module_target__wrapper_arg_4 = ((MR_Box) (make__module_target__conv4_HeadVar__6_6));
  }
}

static void MR_CALL 
make__module_target__make_dependency_files_10_p_0_1(
  MR_Box make__module_target__closure_arg,
  MR_Box make__module_target__wrapper_arg_1,
  MR_Box make__module_target__wrapper_arg_2,
  MR_Box * make__module_target__wrapper_arg_3,
  MR_Box make__module_target__wrapper_arg_4,
  MR_Box * make__module_target__wrapper_arg_5,
  MR_Box make__module_target__wrapper_arg_6,
  MR_Box * make__module_target__wrapper_arg_7)
{
  {
    MR_Box make__module_target__closure = make__module_target__closure_arg;
    MR_Word make__module_target__conv1_Succeeded_10;
    MR_Word make__module_target__conv0_STATE_VARIABLE_Info_14;

    {
      make__module_target__make_module_target_7_p_0(((MR_Word) make__module_target__wrapper_arg_1), ((MR_Word) make__module_target__wrapper_arg_2), &make__module_target__conv1_Succeeded_10, ((MR_Word) make__module_target__wrapper_arg_4), &make__module_target__conv0_STATE_VARIABLE_Info_14);
    }
    *make__module_target__wrapper_arg_3 = ((MR_Box) (make__module_target__conv1_Succeeded_10));
    *make__module_target__wrapper_arg_5 = ((MR_Box) (make__module_target__conv0_STATE_VARIABLE_Info_14));
  }
}

static void MR_CALL 
make__module_target__make_dependency_files_10_p_0_3(
  void * make__module_target__env_ptr_arg)
{
  {
    struct make__module_target__make_dependency_files_10_p_0_env_0_s * make__module_target__env_ptr = (struct make__module_target__make_dependency_files_10_p_0_env_0_s *) make__module_target__env_ptr_arg;

    MR_builtin_longjmp((make__module_target__env_ptr)->make__module_target__make_dependency_files_10_p_0_env_0__commit_0, 1);
  }
}

static void MR_CALL 
make__module_target__make_dependency_files_10_p_0_5(
  void * make__module_target__env_ptr_arg)
{
  {
    struct make__module_target__make_dependency_files_10_p_0_env_0_s * make__module_target__env_ptr = (struct make__module_target__make_dependency_files_10_p_0_env_0_s *) make__module_target__env_ptr_arg;

    (make__module_target__env_ptr)->make__module_target__make_dependency_files_10_p_0_env_0__V_104_104 = ((MR_Word) (make__module_target__env_ptr)->make__module_target__make_dependency_files_10_p_0_env_0__conv8_V_104_104);
    {
      make__module_target__make_dependency_files_10_p_0_4(make__module_target__env_ptr);
    }
  }
}

static void MR_CALL 
make__module_target__make_dependency_files_10_p_0_4(
  void * make__module_target__env_ptr_arg)
{
  {
    struct make__module_target__make_dependency_files_10_p_0_env_0_s * make__module_target__env_ptr = (struct make__module_target__make_dependency_files_10_p_0_env_0_s *) make__module_target__env_ptr_arg;

    (make__module_target__env_ptr)->make__module_target__make_dependency_files_10_p_0_env_0__TypeCtorInfo_105_105 = (MR_Word) &libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0;
    (make__module_target__env_ptr)->make__module_target__make_dependency_files_10_p_0_env_0__TypeCtorInfo_106_106 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
    {
      (make__module_target__env_ptr)->make__module_target__make_dependency_files_10_p_0_env_0__succeeded = make__module_target____Unify____maybe__maybe_error_2_2((make__module_target__env_ptr)->make__module_target__make_dependency_files_10_p_0_env_0__TypeCtorInfo_105_105, (make__module_target__env_ptr)->make__module_target__make_dependency_files_10_p_0_env_0__TypeCtorInfo_106_106, (make__module_target__env_ptr)->make__module_target__make_dependency_files_10_p_0_env_0__V_43_43, (make__module_target__env_ptr)->make__module_target__make_dependency_files_10_p_0_env_0__V_104_104);
    }
    if ((make__module_target__env_ptr)->make__module_target__make_dependency_files_10_p_0_env_0__succeeded)
      {
        make__module_target__make_dependency_files_10_p_0_3(make__module_target__env_ptr);
      }
  }
}

static void MR_CALL 
make__module_target__make_dependency_files_10_p_0_6(
  void * make__module_target__env_ptr_arg)
{
  {
    struct make__module_target__make_dependency_files_10_p_0_env_0_s * make__module_target__env_ptr = (struct make__module_target__make_dependency_files_10_p_0_env_0_s *) make__module_target__env_ptr_arg;

    if (MR_builtin_setjmp((make__module_target__env_ptr)->make__module_target__make_dependency_files_10_p_0_env_0__commit_0) == 0)
      {
        {
          MR_String make__module_target__V_22_22;

          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            (make__module_target__env_ptr)->make__module_target__make_dependency_files_10_p_0_env_0__V_43_43 = base;
            MR_hl_field(MR_mktag(1), base, 0) = NULL;
          }
          {
            mercury__list__member_2_p_1((make__module_target__env_ptr)->make__module_target__make_dependency_files_10_p_0_env_0__TypeInfo_84_84, &(make__module_target__env_ptr)->make__module_target__make_dependency_files_10_p_0_env_0__conv8_V_104_104, (make__module_target__env_ptr)->make__module_target__make_dependency_files_10_p_0_env_0__TargetTimestamps_21, make__module_target__make_dependency_files_10_p_0_5, make__module_target__env_ptr);
          }
        }
        (make__module_target__env_ptr)->make__module_target__make_dependency_files_10_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (make__module_target__env_ptr)->make__module_target__make_dependency_files_10_p_0_env_0__succeeded = MR_TRUE;
  }
}

static void MR_CALL 
make__module_target__make_dependency_files_10_p_0(
  MR_Word make__module_target__Globals_11,
  MR_Word make__module_target__TargetFile_12,
  MR_Word make__module_target__DepFilesToMake_13,
  MR_Word make__module_target__TouchedTargetFiles_14,
  MR_Word make__module_target__TouchedFiles_15,
  MR_Word * make__module_target__DepsResult_16,
  MR_Word make__module_target__STATE_VARIABLE_Info_0_31,
  MR_Word * make__module_target__STATE_VARIABLE_Info_32)
{
  {
    struct make__module_target__make_dependency_files_10_p_0_env_0_s make__module_target__env;

    {
      MR_Word make__module_target__TypeCtorInfo_75_75;
      MR_Word make__module_target__TypeCtorInfo_76_76;
      MR_Word make__module_target__TypeCtorInfo_83_83;
      MR_Word make__module_target__KeepGoing_19;
      MR_Word make__module_target__MakeDepsSuccess_20;
      MR_Word make__module_target__STATE_VARIABLE_Info_37_37;
      MR_Word make__module_target__V_39_39;
      MR_Word make__module_target__STATE_VARIABLE_Info_40_40;
      MR_Box make__module_target__conv3_STATE_VARIABLE_Info_37_37;
      MR_Box make__module_target__conv2_STATE_VARIABLE_IO_38_38;
      MR_Box make__module_target__conv7_STATE_VARIABLE_Info_40_40;
      MR_Box make__module_target__conv6_STATE_VARIABLE_IO_41_41;

      {
        libs__globals__lookup_bool_option_3_p_0(make__module_target__Globals_11, (MR_Integer) 619, &make__module_target__KeepGoing_19);
      }
      make__module_target__TypeCtorInfo_75_75 = (MR_Word) &make__make__type_ctor_info_make_info_0;
      make__module_target__TypeCtorInfo_76_76 = (MR_Word) &mercury__io__io__type_ctor_info_state_0;
      {
        make__util__foldl2_maybe_stop_at_error_9_p_0((MR_Word) &make__dependencies__make__dependencies__type_ctor_info_dependency_file_0, make__module_target__TypeCtorInfo_75_75, make__module_target__TypeCtorInfo_76_76, make__module_target__KeepGoing_19, (MR_Word) &make__module_target_scalar_common_2[4], make__module_target__Globals_11, make__module_target__DepFilesToMake_13, &make__module_target__MakeDepsSuccess_20, ((MR_Box) (make__module_target__STATE_VARIABLE_Info_0_31)), &make__module_target__conv3_STATE_VARIABLE_Info_37_37, ((MR_Box) ((MR_Integer) 0)), &make__module_target__conv2_STATE_VARIABLE_IO_38_38);
      }
      make__module_target__STATE_VARIABLE_Info_37_37 = ((MR_Word) make__module_target__conv3_STATE_VARIABLE_Info_37_37);
      {
        make__module_target__V_39_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), make__module_target__V_39_39, 0) = ((MR_Box) (&make__module_target_scalar_common_10[0]));
        MR_hl_field(MR_mktag(0), make__module_target__V_39_39, 1) = ((MR_Box) (make__module_target__make_dependency_files_10_p_0_2));
        MR_hl_field(MR_mktag(0), make__module_target__V_39_39, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), make__module_target__V_39_39, 3) = ((MR_Box) (make__module_target__Globals_11));
        MR_hl_field(MR_mktag(0), make__module_target__V_39_39, 4) = ((MR_Box) ((MR_Integer) 1));
      }
      make__module_target__TypeCtorInfo_83_83 = (MR_Word) &make__make__type_ctor_info_target_file_0;
      (make__module_target__env).make__module_target__make_dependency_files_10_p_0_env_0__TypeInfo_84_84 = (MR_Word) &make__module_target_scalar_common_2[1];
      {
        mercury__list__map_foldl2_7_p_2(make__module_target__TypeCtorInfo_83_83, (make__module_target__env).make__module_target__make_dependency_files_10_p_0_env_0__TypeInfo_84_84, make__module_target__TypeCtorInfo_75_75, make__module_target__TypeCtorInfo_76_76, make__module_target__V_39_39, make__module_target__TouchedTargetFiles_14, &(make__module_target__env).make__module_target__make_dependency_files_10_p_0_env_0__TargetTimestamps_21, ((MR_Box) (make__module_target__STATE_VARIABLE_Info_37_37)), &make__module_target__conv7_STATE_VARIABLE_Info_40_40, ((MR_Box) ((MR_Integer) 0)), &make__module_target__conv6_STATE_VARIABLE_IO_41_41);
      }
      make__module_target__STATE_VARIABLE_Info_40_40 = ((MR_Word) make__module_target__conv7_STATE_VARIABLE_Info_40_40);
      switch (make__module_target__MakeDepsSuccess_20) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            {
              make__util__debug_file_msg_5_p_0(make__module_target__Globals_11, make__module_target__TargetFile_12, (MR_String) "error making dependencies");
            }
            *make__module_target__DepsResult_16 = (MR_Integer) 2;
            *make__module_target__STATE_VARIABLE_Info_32 = make__module_target__STATE_VARIABLE_Info_40_40;
          }
          break;
        case (MR_Integer) 1:
          {
            {
              make__module_target__make_dependency_files_10_p_0_6(&make__module_target__env);
            }
            if ((make__module_target__env).make__module_target__make_dependency_files_10_p_0_env_0__succeeded)
              {
                {
                  make__util__debug_file_msg_5_p_0(make__module_target__Globals_11, make__module_target__TargetFile_12, (MR_String) "target file does not exist");
                }
                *make__module_target__DepsResult_16 = (MR_Integer) 1;
                *make__module_target__STATE_VARIABLE_Info_32 = make__module_target__STATE_VARIABLE_Info_40_40;
              }
            else
              {
                MR_Word make__module_target__ForceReanalysis_25;
                MR_Word make__module_target__ModuleName_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__TargetFile_12, (MR_Integer) 0)));
                MR_Word make__module_target__FileType_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__TargetFile_12, (MR_Integer) 1)));

                (make__module_target__env).make__module_target__make_dependency_files_10_p_0_env_0__succeeded = (make__module_target__FileType_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7))));
                if ((make__module_target__env).make__module_target__make_dependency_files_10_p_0_env_0__succeeded)
                  {
                    make__module_target__force_reanalysis_of_suboptimal_module_6_p_0(make__module_target__Globals_11, make__module_target__ModuleName_23, &make__module_target__ForceReanalysis_25, make__module_target__STATE_VARIABLE_Info_40_40);
                  }
                else
                  make__module_target__ForceReanalysis_25 = (MR_Integer) 0;
                switch (make__module_target__ForceReanalysis_25) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      MR_Word make__module_target__TouchedTargetFileTimestamps_26;
                      MR_Word make__module_target__TouchedFileTimestamps_27;
                      MR_Word make__module_target__MaybeOldestTimestamp0_28;
                      MR_Word make__module_target__MaybeOldestTimestamp_29;
                      MR_String make__module_target__TargetFileName_30;
                      MR_Word make__module_target__V_47_47;
                      MR_Word make__module_target__STATE_VARIABLE_Info_48_48;
                      MR_Word make__module_target__V_50_50;
                      MR_Word make__module_target__STATE_VARIABLE_Info_51_51;
                      MR_Word make__module_target__V_53_53;
                      MR_String make__module_target__V_54_54;
                      MR_Word make__module_target__V_57_57;
                      MR_Word make__module_target__V_58_58;
                      MR_Word make__module_target__STATE_VARIABLE_Info_61_61;
                      MR_Box make__module_target__conv12_STATE_VARIABLE_Info_48_48;
                      MR_Box make__module_target__conv11_STATE_VARIABLE_IO_49_49;
                      MR_Box make__module_target__conv16_STATE_VARIABLE_Info_51_51;
                      MR_Box make__module_target__conv15_STATE_VARIABLE_IO_52_52;
                      MR_Box make__module_target__conv18_MaybeOldestTimestamp0_28;
                      MR_Box make__module_target__conv20_MaybeOldestTimestamp_29;

                      {
                        make__module_target__V_47_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), make__module_target__V_47_47, 0) = ((MR_Box) (&make__module_target_scalar_common_5[2]));
                        MR_hl_field(MR_mktag(0), make__module_target__V_47_47, 1) = ((MR_Box) (make__module_target__make_dependency_files_10_p_0_7));
                        MR_hl_field(MR_mktag(0), make__module_target__V_47_47, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                        MR_hl_field(MR_mktag(0), make__module_target__V_47_47, 3) = ((MR_Box) (make__module_target__Globals_11));
                      }
                      {
                        mercury__list__map_foldl2_7_p_2(make__module_target__TypeCtorInfo_83_83, (make__module_target__env).make__module_target__make_dependency_files_10_p_0_env_0__TypeInfo_84_84, make__module_target__TypeCtorInfo_75_75, make__module_target__TypeCtorInfo_76_76, make__module_target__V_47_47, make__module_target__TouchedTargetFiles_14, &make__module_target__TouchedTargetFileTimestamps_26, ((MR_Box) (make__module_target__STATE_VARIABLE_Info_40_40)), &make__module_target__conv12_STATE_VARIABLE_Info_48_48, ((MR_Box) ((MR_Integer) 0)), &make__module_target__conv11_STATE_VARIABLE_IO_49_49);
                      }
                      make__module_target__STATE_VARIABLE_Info_48_48 = ((MR_Word) make__module_target__conv12_STATE_VARIABLE_Info_48_48);
                      {
                        make__module_target__V_54_54 = mercury__dir__this_directory_0_f_0();
                      }
                      {
                        make__module_target__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), make__module_target__V_53_53, 0) = ((MR_Box) (make__module_target__V_54_54));
                        MR_hl_field(MR_mktag(1), make__module_target__V_53_53, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      }
                      {
                        make__module_target__V_50_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), make__module_target__V_50_50, 0) = ((MR_Box) (&make__module_target_scalar_common_5[3]));
                        MR_hl_field(MR_mktag(0), make__module_target__V_50_50, 1) = ((MR_Box) (make__module_target__make_dependency_files_10_p_0_8));
                        MR_hl_field(MR_mktag(0), make__module_target__V_50_50, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                        MR_hl_field(MR_mktag(0), make__module_target__V_50_50, 3) = ((MR_Box) (make__module_target__V_53_53));
                      }
                      {
                        mercury__list__map_foldl2_7_p_2((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (make__module_target__env).make__module_target__make_dependency_files_10_p_0_env_0__TypeInfo_84_84, make__module_target__TypeCtorInfo_75_75, make__module_target__TypeCtorInfo_76_76, make__module_target__V_50_50, make__module_target__TouchedFiles_15, &make__module_target__TouchedFileTimestamps_27, ((MR_Box) (make__module_target__STATE_VARIABLE_Info_48_48)), &make__module_target__conv16_STATE_VARIABLE_Info_51_51, ((MR_Box) ((MR_Integer) 0)), &make__module_target__conv15_STATE_VARIABLE_IO_52_52);
                      }
                      make__module_target__STATE_VARIABLE_Info_51_51 = ((MR_Word) make__module_target__conv16_STATE_VARIABLE_Info_51_51);
                      {
                        make__module_target__V_58_58 = libs__timestamp__newest_timestamp_0_f_0();
                      }
                      {
                        make__module_target__V_57_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), make__module_target__V_57_57, 0) = ((MR_Box) (make__module_target__V_58_58));
                      }
                      {
                        make__module_target__conv18_MaybeOldestTimestamp0_28 = mercury__list__foldl_3_f_0((make__module_target__env).make__module_target__make_dependency_files_10_p_0_env_0__TypeInfo_84_84, (make__module_target__env).make__module_target__make_dependency_files_10_p_0_env_0__TypeInfo_84_84, (MR_Word) &make__module_target_scalar_common_2[5], make__module_target__TouchedTargetFileTimestamps_26, ((MR_Box) (make__module_target__V_57_57)));
                      }
                      make__module_target__MaybeOldestTimestamp0_28 = ((MR_Word) make__module_target__conv18_MaybeOldestTimestamp0_28);
                      {
                        make__module_target__conv20_MaybeOldestTimestamp_29 = mercury__list__foldl_3_f_0((make__module_target__env).make__module_target__make_dependency_files_10_p_0_env_0__TypeInfo_84_84, (make__module_target__env).make__module_target__make_dependency_files_10_p_0_env_0__TypeInfo_84_84, (MR_Word) &make__module_target_scalar_common_2[6], make__module_target__TouchedFileTimestamps_27, ((MR_Box) (make__module_target__MaybeOldestTimestamp0_28)));
                      }
                      make__module_target__MaybeOldestTimestamp_29 = ((MR_Word) make__module_target__conv20_MaybeOldestTimestamp_29);
                      {
                        make__util__get_file_name_8_p_0(make__module_target__Globals_11, (MR_Integer) 1, make__module_target__TargetFile_12, &make__module_target__TargetFileName_30, make__module_target__STATE_VARIABLE_Info_51_51, &make__module_target__STATE_VARIABLE_Info_61_61);
                      }
                      {
                        make__dependencies__check_dependencies_10_p_0(make__module_target__Globals_11, make__module_target__TargetFileName_30, make__module_target__MaybeOldestTimestamp_29, make__module_target__MakeDepsSuccess_20, make__module_target__DepFilesToMake_13, make__module_target__DepsResult_16, make__module_target__STATE_VARIABLE_Info_61_61, make__module_target__STATE_VARIABLE_Info_32);
                      }
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      *make__module_target__DepsResult_16 = (MR_Integer) 1;
                      *make__module_target__STATE_VARIABLE_Info_32 = make__module_target__STATE_VARIABLE_Info_40_40;
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

static void MR_CALL 
make__module_target__make_module_target_file_extra_options_8_p_0_7(
  MR_Box make__module_target__closure_arg,
  MR_Box make__module_target__wrapper_arg_1,
  MR_Box make__module_target__wrapper_arg_2,
  MR_Box * make__module_target__wrapper_arg_3)
{
  {
    MR_Box make__module_target__closure = make__module_target__closure_arg;
    MR_Word make__module_target__conv14_STATE_VARIABLE_Info_10;

    {
      make__module_target__update_target_status_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__closure, (MR_Integer) 3))), ((MR_Word) make__module_target__wrapper_arg_1), ((MR_Word) make__module_target__wrapper_arg_2), &make__module_target__conv14_STATE_VARIABLE_Info_10);
    }
    *make__module_target__wrapper_arg_3 = ((MR_Box) (make__module_target__conv14_STATE_VARIABLE_Info_10));
  }
}

static void MR_CALL 
make__module_target__make_module_target_file_extra_options_8_p_0_6(
  MR_Box make__module_target__closure_arg,
  MR_Box make__module_target__wrapper_arg_1,
  MR_Box make__module_target__wrapper_arg_2,
  MR_Box * make__module_target__wrapper_arg_3)
{
  {
    MR_Box make__module_target__closure = make__module_target__closure_arg;
    MR_Word make__module_target__conv12_STATE_VARIABLE_Info_10;

    {
      make__module_target__update_target_status_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__closure, (MR_Integer) 3))), ((MR_Word) make__module_target__wrapper_arg_1), ((MR_Word) make__module_target__wrapper_arg_2), &make__module_target__conv12_STATE_VARIABLE_Info_10);
    }
    *make__module_target__wrapper_arg_3 = ((MR_Box) (make__module_target__conv12_STATE_VARIABLE_Info_10));
  }
}

static void MR_CALL 
make__module_target__make_module_target_file_extra_options_8_p_0_5(
  MR_Box make__module_target__closure_arg,
  MR_Box make__module_target__wrapper_arg_1,
  MR_Box make__module_target__wrapper_arg_2,
  MR_Box * make__module_target__wrapper_arg_3)
{
  {
    MR_Box make__module_target__closure = make__module_target__closure_arg;
    MR_Word make__module_target__conv10_STATE_VARIABLE_Info_10;

    {
      make__module_target__update_target_status_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__closure, (MR_Integer) 3))), ((MR_Word) make__module_target__wrapper_arg_1), ((MR_Word) make__module_target__wrapper_arg_2), &make__module_target__conv10_STATE_VARIABLE_Info_10);
    }
    *make__module_target__wrapper_arg_3 = ((MR_Box) (make__module_target__conv10_STATE_VARIABLE_Info_10));
  }
}

static void MR_CALL 
make__module_target__make_module_target_file_extra_options_8_p_0_4(
  MR_Box make__module_target__closure_arg,
  MR_Box make__module_target__wrapper_arg_1,
  MR_Box make__module_target__wrapper_arg_2,
  MR_Box * make__module_target__wrapper_arg_3)
{
  {
    MR_Box make__module_target__closure = make__module_target__closure_arg;
    MR_Word make__module_target__conv8_STATE_VARIABLE_Info_10;

    {
      make__module_target__update_target_status_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__closure, (MR_Integer) 3))), ((MR_Word) make__module_target__wrapper_arg_1), ((MR_Word) make__module_target__wrapper_arg_2), &make__module_target__conv8_STATE_VARIABLE_Info_10);
    }
    *make__module_target__wrapper_arg_3 = ((MR_Box) (make__module_target__conv8_STATE_VARIABLE_Info_10));
  }
}

static void MR_CALL 
make__module_target__make_module_target_file_extra_options_8_p_0_3(
  MR_Box make__module_target__closure_arg,
  MR_Box make__module_target__wrapper_arg_1,
  MR_Box * make__module_target__wrapper_arg_2)
{
  {
    MR_Box make__module_target__closure = make__module_target__closure_arg;

    {
      make__module_target__IntroducedFrom__pred__make_module_target_file_extra_options__195__1_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__closure, (MR_Integer) 6))));
    }
  }
}

static void MR_CALL 
make__module_target__make_module_target_file_extra_options_8_p_0_2(
  MR_Box make__module_target__closure_arg,
  MR_Box make__module_target__wrapper_arg_1,
  MR_Box make__module_target__wrapper_arg_2,
  MR_Box * make__module_target__wrapper_arg_3,
  MR_Box make__module_target__wrapper_arg_4,
  MR_Box * make__module_target__wrapper_arg_5,
  MR_Box make__module_target__wrapper_arg_6,
  MR_Box * make__module_target__wrapper_arg_7,
  MR_Box make__module_target__wrapper_arg_8,
  MR_Box * make__module_target__wrapper_arg_9)
{
  {
    MR_Box make__module_target__closure = make__module_target__closure_arg;
    MR_Word make__module_target__conv4_HeadVar__4_305;
    MR_Word make__module_target__conv3_HeadVar__6_307;
    MR_Word make__module_target__conv2_HeadVar__8_309;

    {
      make__module_target__IntroducedFrom__pred__make_module_target_file_extra_options__175__1_10_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__closure, (MR_Integer) 3))), ((MR_Word) make__module_target__wrapper_arg_1), ((MR_Word) make__module_target__wrapper_arg_2), &make__module_target__conv4_HeadVar__4_305, ((MR_Word) make__module_target__wrapper_arg_4), &make__module_target__conv3_HeadVar__6_307, ((MR_Word) make__module_target__wrapper_arg_6), &make__module_target__conv2_HeadVar__8_309);
    }
    *make__module_target__wrapper_arg_3 = ((MR_Box) (make__module_target__conv4_HeadVar__4_305));
    *make__module_target__wrapper_arg_5 = ((MR_Box) (make__module_target__conv3_HeadVar__6_307));
    *make__module_target__wrapper_arg_7 = ((MR_Box) (make__module_target__conv2_HeadVar__8_309));
  }
}

static void MR_CALL 
make__module_target__make_module_target_file_extra_options_8_p_0_1(
  MR_Box make__module_target__closure_arg,
  MR_Box make__module_target__wrapper_arg_1,
  MR_Box make__module_target__wrapper_arg_2,
  MR_Box * make__module_target__wrapper_arg_3)
{
  {
    MR_Box make__module_target__closure = make__module_target__closure_arg;
    MR_Word make__module_target__conv0_STATE_VARIABLE_Info_10;

    {
      make__module_target__update_target_status_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__closure, (MR_Integer) 3))), ((MR_Word) make__module_target__wrapper_arg_1), ((MR_Word) make__module_target__wrapper_arg_2), &make__module_target__conv0_STATE_VARIABLE_Info_10);
    }
    *make__module_target__wrapper_arg_3 = ((MR_Box) (make__module_target__conv0_STATE_VARIABLE_Info_10));
  }
}

static void MR_CALL 
make__module_target__make_module_target_file_extra_options_8_p_0(
  MR_Word make__module_target__ExtraOptions_9,
  MR_Word make__module_target__Globals_10,
  MR_Word make__module_target__TargetFile_11,
  MR_Word * make__module_target__Succeeded_12,
  MR_Word make__module_target__STATE_VARIABLE_Info_0_44,
  MR_Word * make__module_target__STATE_VARIABLE_Info_45)
{
  {
    MR_bool make__module_target__succeeded;
    MR_Word make__module_target__Dep_15;
    MR_Word make__module_target__Status_16;
    MR_Word make__module_target__STATE_VARIABLE_Info_48_48;

    {
      make__module_target__Dep_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), make__module_target__Dep_15, 0) = ((MR_Box) (make__module_target__TargetFile_11));
    }
    {
      make__dependencies__dependency_status_7_p_0(make__module_target__Globals_10, make__module_target__Dep_15, &make__module_target__Status_16, make__module_target__STATE_VARIABLE_Info_0_44, &make__module_target__STATE_VARIABLE_Info_48_48);
    }
    switch (make__module_target__Status_16) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          {
            mercury__require__unexpected_3_p_0((MR_String) "make.module_target", (MR_String) "predicate \140make.module_target.make_module_target_file_extra_options\'/8", (MR_String) "target being built, circular dependencies\?");
            return;
          }
        }
        break;
      case (MR_Integer) 3:
        {
          *make__module_target__Succeeded_12 = (MR_Integer) 0;
          *make__module_target__STATE_VARIABLE_Info_45 = make__module_target__STATE_VARIABLE_Info_48_48;
        }
        break;
      case (MR_Integer) 0:
        {
          MR_Word make__module_target__ModuleName_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__TargetFile_11, (MR_Integer) 0)));
          MR_Word make__module_target__FileType_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__TargetFile_11, (MR_Integer) 1)));
          MR_Word make__module_target__MaybeImports_19;
          MR_Word make__module_target__STATE_VARIABLE_Info_53_53;

          {
            make__module_dep_file__get_module_dependencies_7_p_0(make__module_target__Globals_10, make__module_target__ModuleName_17, &make__module_target__MaybeImports_19, make__module_target__STATE_VARIABLE_Info_48_48, &make__module_target__STATE_VARIABLE_Info_53_53);
          }
          if ((make__module_target__MaybeImports_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            {
              MR_Word make__module_target__V_116_116;
              MR_Word make__module_target__V_117_117;
              MR_Word make__module_target__V_120_120;
              MR_Word make__module_target__V_121_121;
              MR_Word make__module_target__V_122_122;
              MR_Word make__module_target__V_123_123;
              MR_Word make__module_target__V_124_124;
              MR_Word make__module_target__V_125_125;
              MR_Word make__module_target__V_126_126;
              MR_Word make__module_target__V_127_127;
              MR_Word make__module_target__V_128_128;
              MR_Word make__module_target__V_129_129;
              MR_Word make__module_target__V_130_130;
              MR_Word make__module_target__V_131_131;
              MR_Word make__module_target__V_132_132;
              MR_Word make__module_target__V_133_133;
              MR_Word make__module_target__V_134_134;
              MR_Word make__module_target__V_135_135;
              MR_Word make__module_target__V_136_136;
              MR_Integer make__module_target__V_137_137;
              MR_Word make__module_target__V_138_138;
              MR_Word make__module_target__V_139_139;
              MR_Word make__module_target__V_140_140;
              MR_Word make__module_target__V_141_141;
              MR_Word make__module_target__V_142_142;
              MR_Word make__module_target__V_143_143;
              MR_Word make__module_target__V_144_144;
              MR_Word make__module_target__V_145_145;
              MR_Word make__module_target__V_146_146;
              MR_Word make__module_target__V_148_148;
              MR_Word make__module_target__V_149_149;
              MR_Word make__module_target__V_150_150;
              MR_Word make__module_target__V_151_151;
              MR_Word make__module_target__V_152_152;
              MR_Word make__module_target__V_153_153;
              MR_Word make__module_target__V_154_154;
              MR_Word make__module_target__V_155_155;
              MR_Word make__module_target__V_156_156;
              MR_Integer make__module_target__V_157_157;
              MR_Word make__module_target__V_158_158;
              MR_Word make__module_target__V_147_147;

              *make__module_target__Succeeded_12 = (MR_Integer) 0;
              make__module_target__V_120_120 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_53_53, (MR_Integer) 0)));
              make__module_target__V_121_121 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_53_53, (MR_Integer) 1)));
              make__module_target__V_122_122 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_53_53, (MR_Integer) 2)));
              make__module_target__V_123_123 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_53_53, (MR_Integer) 3)));
              make__module_target__V_124_124 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_53_53, (MR_Integer) 4)));
              make__module_target__V_125_125 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_53_53, (MR_Integer) 5)));
              make__module_target__V_126_126 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_53_53, (MR_Integer) 6)));
              make__module_target__V_127_127 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_53_53, (MR_Integer) 7)));
              make__module_target__V_116_116 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_53_53, (MR_Integer) 8)));
              make__module_target__V_128_128 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_53_53, (MR_Integer) 9)));
              make__module_target__V_129_129 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_53_53, (MR_Integer) 10)));
              make__module_target__V_130_130 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_53_53, (MR_Integer) 11)));
              make__module_target__V_131_131 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_53_53, (MR_Integer) 12)));
              make__module_target__V_132_132 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_53_53, (MR_Integer) 13)));
              make__module_target__V_133_133 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_53_53, (MR_Integer) 14)));
              make__module_target__V_134_134 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_53_53, (MR_Integer) 15)));
              make__module_target__V_135_135 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_53_53, (MR_Integer) 16)));
              make__module_target__V_136_136 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_53_53, (MR_Integer) 17)));
              make__module_target__V_137_137 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_53_53, (MR_Integer) 18)));
              make__module_target__V_138_138 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_53_53, (MR_Integer) 19)));
              {
                make__module_target__V_117_117 = mercury__version_hash_table__f_101_108_101_109_32_58_61_3_f_0((MR_Word) &make__dependencies__make__dependencies__type_ctor_info_dependency_file_0, (MR_Word) &make__make__type_ctor_info_dependency_status_0, ((MR_Box) (make__module_target__Dep_15)), make__module_target__V_116_116, ((MR_Box) ((MR_Integer) 3)));
              }
              make__module_target__V_139_139 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_53_53, (MR_Integer) 0)));
              make__module_target__V_140_140 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_53_53, (MR_Integer) 1)));
              make__module_target__V_141_141 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_53_53, (MR_Integer) 2)));
              make__module_target__V_142_142 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_53_53, (MR_Integer) 3)));
              make__module_target__V_143_143 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_53_53, (MR_Integer) 4)));
              make__module_target__V_144_144 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_53_53, (MR_Integer) 5)));
              make__module_target__V_145_145 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_53_53, (MR_Integer) 6)));
              make__module_target__V_146_146 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_53_53, (MR_Integer) 7)));
              make__module_target__V_147_147 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_53_53, (MR_Integer) 8)));
              make__module_target__V_148_148 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_53_53, (MR_Integer) 9)));
              make__module_target__V_149_149 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_53_53, (MR_Integer) 10)));
              make__module_target__V_150_150 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_53_53, (MR_Integer) 11)));
              make__module_target__V_151_151 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_53_53, (MR_Integer) 12)));
              make__module_target__V_152_152 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_53_53, (MR_Integer) 13)));
              make__module_target__V_153_153 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_53_53, (MR_Integer) 14)));
              make__module_target__V_154_154 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_53_53, (MR_Integer) 15)));
              make__module_target__V_155_155 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_53_53, (MR_Integer) 16)));
              make__module_target__V_156_156 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_53_53, (MR_Integer) 17)));
              make__module_target__V_157_157 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_53_53, (MR_Integer) 18)));
              make__module_target__V_158_158 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_53_53, (MR_Integer) 19)));
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 20 * sizeof(MR_Word)), NULL, NULL);
                *make__module_target__STATE_VARIABLE_Info_45 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (make__module_target__V_139_139));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (make__module_target__V_140_140));
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (make__module_target__V_141_141));
                MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (make__module_target__V_142_142));
                MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (make__module_target__V_143_143));
                MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (make__module_target__V_144_144));
                MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (make__module_target__V_145_145));
                MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (make__module_target__V_146_146));
                MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (make__module_target__V_117_117));
                MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (make__module_target__V_148_148));
                MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (make__module_target__V_149_149));
                MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (make__module_target__V_150_150));
                MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (make__module_target__V_151_151));
                MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (make__module_target__V_152_152));
                MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (make__module_target__V_153_153));
                MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (make__module_target__V_154_154));
                MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (make__module_target__V_155_155));
                MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (make__module_target__V_156_156));
                MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (make__module_target__V_157_157));
                MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (make__module_target__V_158_158));
              }
            }
          else
            {
              MR_Word make__module_target__Imports_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_target__MaybeImports_19, (MR_Integer) 0)));
              MR_Word make__module_target__CompilationTask_21;
              MR_Word make__module_target__V_55_55;
              MR_Word make__module_target__V_23_23;
              MR_Word make__module_target__V_22_22;
              MR_Word make__module_target__V_327_327;
              MR_String make__module_target__V_159_159;
              MR_Word make__module_target__V_160_160;
              MR_Word make__module_target__V_161_161;
              MR_Word make__module_target__V_162_162;
              MR_Word make__module_target__V_163_163;
              MR_Word make__module_target__V_164_164;
              MR_Word make__module_target__V_165_165;
              MR_Word make__module_target__V_166_166;
              MR_Word make__module_target__V_167_167;
              MR_Word make__module_target__V_168_168;
              MR_Word make__module_target__V_169_169;
              MR_Word make__module_target__V_170_170;
              MR_Word make__module_target__V_171_171;
              MR_Word make__module_target__V_172_172;
              MR_Word make__module_target__V_173_173;
              MR_Word make__module_target__V_174_174;
              MR_Word make__module_target__V_175_175;
              MR_Word make__module_target__V_176_176;
              MR_Word make__module_target__V_177_177;
              MR_Word make__module_target__V_178_178;
              MR_Word make__module_target__V_179_179;
              MR_Word make__module_target__V_180_180;
              MR_Word make__module_target__V_181_181;
              MR_Word make__module_target__V_182_182;
              MR_Word make__module_target__V_183_183;
              MR_String make__module_target__V_184_184;

              {
                make__module_target__CompilationTask_21 = make__module_target__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_99_111_109_112_105_108_97_116_105_111_110_95_116_97_115_107_95_95_91_49_93_95_48_2_f_0(make__module_target__FileType_18);
              }
              make__module_target__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__CompilationTask_21, (MR_Integer) 0)));
              make__module_target__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__CompilationTask_21, (MR_Integer) 1)));
              make__module_target__succeeded = ((MR_tag((MR_Word) make__module_target__V_55_55)) == (MR_mktag((MR_Integer) 0)));
              if (make__module_target__succeeded)
                {
                  make__module_target__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__V_55_55, (MR_Integer) 0)));
                  make__module_target__V_159_159 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_target__Imports_20, (MR_Integer) 0)));
                  make__module_target__V_327_327 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_20, (MR_Integer) 1)));
                  make__module_target__V_160_160 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_20, (MR_Integer) 2)));
                  make__module_target__V_161_161 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_20, (MR_Integer) 3)));
                  make__module_target__V_162_162 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_20, (MR_Integer) 4)));
                  make__module_target__V_163_163 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_20, (MR_Integer) 5)));
                  make__module_target__V_164_164 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_20, (MR_Integer) 6)));
                  make__module_target__V_165_165 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_20, (MR_Integer) 7)));
                  make__module_target__V_166_166 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_20, (MR_Integer) 8)));
                  make__module_target__V_167_167 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_20, (MR_Integer) 9)));
                  make__module_target__V_168_168 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_20, (MR_Integer) 10)));
                  make__module_target__V_169_169 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_20, (MR_Integer) 11)));
                  make__module_target__V_170_170 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_20, (MR_Integer) 12)));
                  make__module_target__V_171_171 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_20, (MR_Integer) 13)));
                  make__module_target__V_172_172 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_20, (MR_Integer) 14)));
                  make__module_target__V_173_173 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_20, (MR_Integer) 15)));
                  make__module_target__V_174_174 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_20, (MR_Integer) 16)));
                  make__module_target__V_175_175 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_20, (MR_Integer) 17)));
                  make__module_target__V_176_176 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_20, (MR_Integer) 18)));
                  make__module_target__V_177_177 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_20, (MR_Integer) 19)));
                  make__module_target__V_178_178 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_20, (MR_Integer) 20)));
                  make__module_target__V_179_179 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_20, (MR_Integer) 21)));
                  make__module_target__V_180_180 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_20, (MR_Integer) 22)));
                  make__module_target__V_181_181 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_20, (MR_Integer) 23)));
                  make__module_target__V_182_182 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_20, (MR_Integer) 24)));
                  make__module_target__V_183_183 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_20, (MR_Integer) 25)));
                  make__module_target__V_184_184 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_target__Imports_20, (MR_Integer) 26)));
                  {
                    make__module_target__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(make__module_target__ModuleName_17, make__module_target__V_327_327);
                  }
                  make__module_target__succeeded = !(make__module_target__succeeded);
                }
              if (make__module_target__succeeded)
                {
                  MR_Word make__module_target__NestedTargetFile_24;
                  MR_Word make__module_target__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_20, (MR_Integer) 1)));
                  MR_Word make__module_target__V_57_57;
                  MR_String make__module_target__V_185_185 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_target__Imports_20, (MR_Integer) 0)));
                  MR_Word make__module_target__V_186_186 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_20, (MR_Integer) 2)));
                  MR_Word make__module_target__V_187_187 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_20, (MR_Integer) 3)));
                  MR_Word make__module_target__V_188_188 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_20, (MR_Integer) 4)));
                  MR_Word make__module_target__V_189_189 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_20, (MR_Integer) 5)));
                  MR_Word make__module_target__V_190_190 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_20, (MR_Integer) 6)));
                  MR_Word make__module_target__V_191_191 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_20, (MR_Integer) 7)));
                  MR_Word make__module_target__V_192_192 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_20, (MR_Integer) 8)));
                  MR_Word make__module_target__V_193_193 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_20, (MR_Integer) 9)));
                  MR_Word make__module_target__V_194_194 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_20, (MR_Integer) 10)));
                  MR_Word make__module_target__V_195_195 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_20, (MR_Integer) 11)));
                  MR_Word make__module_target__V_196_196 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_20, (MR_Integer) 12)));
                  MR_Word make__module_target__V_197_197 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_20, (MR_Integer) 13)));
                  MR_Word make__module_target__V_198_198 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_20, (MR_Integer) 14)));
                  MR_Word make__module_target__V_199_199 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_20, (MR_Integer) 15)));
                  MR_Word make__module_target__V_200_200 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_20, (MR_Integer) 16)));
                  MR_Word make__module_target__V_201_201 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_20, (MR_Integer) 17)));
                  MR_Word make__module_target__V_202_202 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_20, (MR_Integer) 18)));
                  MR_Word make__module_target__V_203_203 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_20, (MR_Integer) 19)));
                  MR_Word make__module_target__V_204_204 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_20, (MR_Integer) 20)));
                  MR_Word make__module_target__V_205_205 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_20, (MR_Integer) 21)));
                  MR_Word make__module_target__V_206_206 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_20, (MR_Integer) 22)));
                  MR_Word make__module_target__V_207_207 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_20, (MR_Integer) 23)));
                  MR_Word make__module_target__V_208_208 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_20, (MR_Integer) 24)));
                  MR_Word make__module_target__V_209_209 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_20, (MR_Integer) 25)));
                  MR_String make__module_target__V_210_210 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_target__Imports_20, (MR_Integer) 26)));

                  {
                    make__module_target__NestedTargetFile_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), make__module_target__NestedTargetFile_24, 0) = ((MR_Box) (make__module_target__V_56_56));
                    MR_hl_field(MR_mktag(0), make__module_target__NestedTargetFile_24, 1) = ((MR_Box) (make__module_target__FileType_18));
                  }
                  {
                    make__module_target__V_57_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), make__module_target__V_57_57, 0) = ((MR_Box) (make__module_target__NestedTargetFile_24));
                  }
                  {
                    make__module_target__make_module_target_extra_options_8_p_0(make__module_target__ExtraOptions_9, make__module_target__Globals_10, make__module_target__V_57_57, make__module_target__Succeeded_12, make__module_target__STATE_VARIABLE_Info_53_53, make__module_target__STATE_VARIABLE_Info_45);
                  }
                }
              else
                {
                  MR_Word make__module_target__TypeCtorInfo_300_300;
                  MR_Word make__module_target__TypeCtorInfo_301_301;
                  MR_Word make__module_target__CompilationTaskType_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__CompilationTask_21, (MR_Integer) 0)));
                  MR_Word make__module_target__TouchedTargetFiles_27;
                  MR_Word make__module_target__TouchedFiles_28;
                  MR_Word make__module_target__ModulesToCheck_31;
                  MR_Word make__module_target__ModulesToCheckSet_32;
                  MR_Word make__module_target__DepsSuccess_33;
                  MR_Word make__module_target__DepFiles0_34;
                  MR_Word make__module_target__DepFilesSet0_35;
                  MR_Word make__module_target__DepFilesToMake_39;
                  MR_Word make__module_target__KeepGoing_41;
                  MR_Word make__module_target__STATE_VARIABLE_Info_60_60;
                  MR_Word make__module_target__STATE_VARIABLE_Info_63_63;
                  MR_Word make__module_target__STATE_VARIABLE_Info_71_71;
                  MR_Word make__module_target__V_72_72;
                  MR_Word make__module_target__V_73_73;
                  MR_Word make__module_target__V_74_74;
                  MR_Word make__module_target__STATE_VARIABLE_Info_75_75;
                  MR_Word make__module_target__V_77_77;
                  MR_Word make__module_target__V_80_80;
                  MR_Word make__module_target__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__CompilationTask_21, (MR_Integer) 1)));
                  MR_Box make__module_target__conv1_STATE_VARIABLE_Info_63_63;
                  MR_Word make__module_target__V_67_67;
                  MR_Word make__module_target__V_30_30;
                  MR_Word make__module_target__V_29_29;
                  MR_Word make__module_target__V_237_237;
                  MR_Word make__module_target__V_238_238;
                  MR_Word make__module_target__V_239_239;
                  MR_Word make__module_target__V_240_240;
                  MR_Word make__module_target__V_241_241;
                  MR_Word make__module_target__V_242_242;
                  MR_Word make__module_target__V_243_243;
                  MR_Word make__module_target__V_244_244;
                  MR_Word make__module_target__V_245_245;
                  MR_Word make__module_target__V_246_246;
                  MR_Word make__module_target__V_247_247;
                  MR_Word make__module_target__V_248_248;
                  MR_Word make__module_target__V_249_249;
                  MR_Word make__module_target__V_250_250;
                  MR_Word make__module_target__V_251_251;
                  MR_Word make__module_target__V_252_252;
                  MR_Word make__module_target__V_253_253;
                  MR_Integer make__module_target__V_254_254;
                  MR_Word make__module_target__V_255_255;
                  MR_Box make__module_target__conv7_DepFiles0_34;
                  MR_Box make__module_target__conv6_STATE_VARIABLE_Info_75_75;
                  MR_Box make__module_target__conv5_STATE_VARIABLE_IO_76_76;
                  MR_Word make__module_target__TargetType_37;
                  MR_Word make__module_target__V_36_36;

                  {
                    make__module_target__touched_files_9_p_0(make__module_target__Globals_10, make__module_target__TargetFile_11, make__module_target__CompilationTaskType_25, &make__module_target__TouchedTargetFiles_27, &make__module_target__TouchedFiles_28, make__module_target__STATE_VARIABLE_Info_53_53, &make__module_target__STATE_VARIABLE_Info_60_60);
                  }
                  make__module_target__TypeCtorInfo_300_300 = (MR_Word) &make__make__type_ctor_info_target_file_0;
                  make__module_target__TypeCtorInfo_301_301 = (MR_Word) &make__make__type_ctor_info_make_info_0;
                  {
                    mercury__list__foldl_4_p_0(make__module_target__TypeCtorInfo_300_300, make__module_target__TypeCtorInfo_301_301, (MR_Word) &make__module_target_scalar_common_7[0], make__module_target__TouchedTargetFiles_27, ((MR_Box) (make__module_target__STATE_VARIABLE_Info_60_60)), &make__module_target__conv1_STATE_VARIABLE_Info_63_63);
                  }
                  make__module_target__STATE_VARIABLE_Info_63_63 = ((MR_Word) make__module_target__conv1_STATE_VARIABLE_Info_63_63);
                  {
                    make__util__debug_file_msg_5_p_0(make__module_target__Globals_10, make__module_target__TargetFile_11, (MR_String) "checking dependencies");
                  }
                  make__module_target__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__CompilationTask_21, (MR_Integer) 0)));
                  make__module_target__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__CompilationTask_21, (MR_Integer) 1)));
                  make__module_target__succeeded = ((MR_tag((MR_Word) make__module_target__V_67_67)) == (MR_mktag((MR_Integer) 0)));
                  if (make__module_target__succeeded)
                    {
                      make__module_target__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__V_67_67, (MR_Integer) 0)));
                      {
                        MR_Word make__module_target__V_68_68;
                        MR_Word make__module_target__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_20, (MR_Integer) 10)));
                        MR_String make__module_target__V_211_211 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_target__Imports_20, (MR_Integer) 0)));
                        MR_Word make__module_target__V_212_212 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_20, (MR_Integer) 1)));
                        MR_Word make__module_target__V_213_213 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_20, (MR_Integer) 2)));
                        MR_Word make__module_target__V_214_214 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_20, (MR_Integer) 3)));
                        MR_Word make__module_target__V_215_215 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_20, (MR_Integer) 4)));
                        MR_Word make__module_target__V_216_216 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_20, (MR_Integer) 5)));
                        MR_Word make__module_target__V_217_217 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_20, (MR_Integer) 6)));
                        MR_Word make__module_target__V_218_218 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_20, (MR_Integer) 7)));
                        MR_Word make__module_target__V_219_219 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_20, (MR_Integer) 8)));
                        MR_Word make__module_target__V_220_220 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_20, (MR_Integer) 9)));
                        MR_Word make__module_target__V_221_221 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_20, (MR_Integer) 11)));
                        MR_Word make__module_target__V_222_222 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_20, (MR_Integer) 12)));
                        MR_Word make__module_target__V_223_223 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_20, (MR_Integer) 13)));
                        MR_Word make__module_target__V_224_224 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_20, (MR_Integer) 14)));
                        MR_Word make__module_target__V_225_225 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_20, (MR_Integer) 15)));
                        MR_Word make__module_target__V_226_226 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_20, (MR_Integer) 16)));
                        MR_Word make__module_target__V_227_227 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_20, (MR_Integer) 17)));
                        MR_Word make__module_target__V_228_228 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_20, (MR_Integer) 18)));
                        MR_Word make__module_target__V_229_229 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_20, (MR_Integer) 19)));
                        MR_Word make__module_target__V_230_230 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_20, (MR_Integer) 20)));
                        MR_Word make__module_target__V_231_231 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_20, (MR_Integer) 21)));
                        MR_Word make__module_target__V_232_232 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_20, (MR_Integer) 22)));
                        MR_Word make__module_target__V_233_233 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_20, (MR_Integer) 23)));
                        MR_Word make__module_target__V_234_234 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_20, (MR_Integer) 24)));
                        MR_Word make__module_target__V_235_235 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_20, (MR_Integer) 25)));
                        MR_String make__module_target__V_236_236 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_target__Imports_20, (MR_Integer) 26)));

                        {
                          make__module_target__V_68_68 = mercury__set__to_sorted_list_1_f_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, make__module_target__V_69_69);
                        }
                        {
                          make__module_target__ModulesToCheck_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), make__module_target__ModulesToCheck_31, 0) = ((MR_Box) (make__module_target__ModuleName_17));
                          MR_hl_field(MR_mktag(1), make__module_target__ModulesToCheck_31, 1) = ((MR_Box) (make__module_target__V_68_68));
                        }
                      }
                    }
                  else
                    {
                      {
                        make__module_target__ModulesToCheck_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), make__module_target__ModulesToCheck_31, 0) = ((MR_Box) (make__module_target__ModuleName_17));
                        MR_hl_field(MR_mktag(1), make__module_target__ModulesToCheck_31, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      }
                    }
                  {
                    make__dependencies__module_names_to_index_set_4_p_0(make__module_target__ModulesToCheck_31, &make__module_target__ModulesToCheckSet_32, make__module_target__STATE_VARIABLE_Info_63_63, &make__module_target__STATE_VARIABLE_Info_71_71);
                  }
                  make__module_target__V_237_237 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_71_71, (MR_Integer) 0)));
                  make__module_target__V_238_238 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_71_71, (MR_Integer) 1)));
                  make__module_target__V_239_239 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_71_71, (MR_Integer) 2)));
                  make__module_target__V_240_240 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_71_71, (MR_Integer) 3)));
                  make__module_target__V_241_241 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_71_71, (MR_Integer) 4)));
                  make__module_target__V_242_242 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_71_71, (MR_Integer) 5)));
                  make__module_target__V_243_243 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_71_71, (MR_Integer) 6)));
                  make__module_target__V_244_244 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_71_71, (MR_Integer) 7)));
                  make__module_target__V_245_245 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_71_71, (MR_Integer) 8)));
                  make__module_target__V_246_246 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_71_71, (MR_Integer) 9)));
                  make__module_target__V_247_247 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_71_71, (MR_Integer) 10)));
                  make__module_target__V_248_248 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_71_71, (MR_Integer) 11)));
                  make__module_target__V_249_249 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_71_71, (MR_Integer) 12)));
                  make__module_target__V_250_250 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_71_71, (MR_Integer) 13)));
                  make__module_target__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_71_71, (MR_Integer) 14)));
                  make__module_target__V_251_251 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_71_71, (MR_Integer) 15)));
                  make__module_target__V_252_252 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_71_71, (MR_Integer) 16)));
                  make__module_target__V_253_253 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_71_71, (MR_Integer) 17)));
                  make__module_target__V_254_254 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_71_71, (MR_Integer) 18)));
                  make__module_target__V_255_255 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_71_71, (MR_Integer) 19)));
                  {
                    make__module_target__V_77_77 = make__dependencies__target_dependencies_2_f_0(make__module_target__Globals_10, make__module_target__FileType_18);
                  }
                  {
                    make__module_target__V_73_73 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), make__module_target__V_73_73, 0) = ((MR_Box) (&make__module_target_scalar_common_8[0]));
                    MR_hl_field(MR_mktag(0), make__module_target__V_73_73, 1) = ((MR_Box) (make__module_target__make_module_target_file_extra_options_8_p_0_2));
                    MR_hl_field(MR_mktag(0), make__module_target__V_73_73, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                    MR_hl_field(MR_mktag(0), make__module_target__V_73_73, 3) = ((MR_Box) (make__module_target__V_77_77));
                  }
                  {
                    make__module_target__V_74_74 = mercury__sparse_bitset__init_0_f_0((MR_Word) &make__dependencies__make__dependencies__type_ctor_info_dependency_file_index_0);
                  }
                  {
                    make__dependencies__deps_set_foldl3_maybe_stop_at_error_11_p_0((MR_Word) &make__module_target_scalar_common_1[1], make__module_target__TypeCtorInfo_301_301, (MR_Word) &mercury__io__io__type_ctor_info_state_0, (MR_Word) &make__module_target_scalar_common_1[0], make__module_target__V_72_72, make__module_target__V_73_73, make__module_target__Globals_10, make__module_target__ModulesToCheckSet_32, &make__module_target__DepsSuccess_33, ((MR_Box) (make__module_target__V_74_74)), &make__module_target__conv7_DepFiles0_34, ((MR_Box) (make__module_target__STATE_VARIABLE_Info_71_71)), &make__module_target__conv6_STATE_VARIABLE_Info_75_75, ((MR_Box) ((MR_Integer) 0)), &make__module_target__conv5_STATE_VARIABLE_IO_76_76);
                  }
                  make__module_target__DepFiles0_34 = ((MR_Word) make__module_target__conv7_DepFiles0_34);
                  make__module_target__STATE_VARIABLE_Info_75_75 = ((MR_Word) make__module_target__conv6_STATE_VARIABLE_Info_75_75);
                  {
                    make__dependencies__dependency_file_index_set_to_plain_set_3_p_0(make__module_target__STATE_VARIABLE_Info_75_75, make__module_target__DepFiles0_34, &make__module_target__DepFilesSet0_35);
                  }
                  make__module_target__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__TargetFile_11, (MR_Integer) 0)));
                  make__module_target__TargetType_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__TargetFile_11, (MR_Integer) 1)));
                  make__module_target__succeeded = (make__module_target__TargetType_37 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
                  if (make__module_target__succeeded)
                    {
                      MR_Word make__module_target__TypeCtorInfo_317_317;
                      MR_Word make__module_target__PrivateInts_38;
                      MR_Word make__module_target__V_79_79;

                      {
                        make__module_target__PrivateInts_38 = make__util__make_dependency_list_2_f_0(make__module_target__ModulesToCheck_31, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)));
                      }
                      make__module_target__TypeCtorInfo_317_317 = (MR_Word) &make__dependencies__make__dependencies__type_ctor_info_dependency_file_0;
                      {
                        make__module_target__V_79_79 = mercury__set__delete_list_2_f_0(make__module_target__TypeCtorInfo_317_317, make__module_target__DepFilesSet0_35, make__module_target__PrivateInts_38);
                      }
                      {
                        make__module_target__DepFilesToMake_39 = mercury__set__to_sorted_list_1_f_0(make__module_target__TypeCtorInfo_317_317, make__module_target__V_79_79);
                      }
                    }
                  else
                    {
                      {
                        make__module_target__DepFilesToMake_39 = mercury__set__to_sorted_list_1_f_0((MR_Word) &make__dependencies__make__dependencies__type_ctor_info_dependency_file_0, make__module_target__DepFilesSet0_35);
                      }
                    }
                  {
                    make__module_target__V_80_80 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), make__module_target__V_80_80, 0) = ((MR_Box) (&make__module_target_scalar_common_9[0]));
                    MR_hl_field(MR_mktag(0), make__module_target__V_80_80, 1) = ((MR_Box) (make__module_target__make_module_target_file_extra_options_8_p_0_3));
                    MR_hl_field(MR_mktag(0), make__module_target__V_80_80, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                    MR_hl_field(MR_mktag(0), make__module_target__V_80_80, 3) = ((MR_Box) (make__module_target__Globals_10));
                    MR_hl_field(MR_mktag(0), make__module_target__V_80_80, 4) = ((MR_Box) (make__module_target__TargetFile_11));
                    MR_hl_field(MR_mktag(0), make__module_target__V_80_80, 5) = ((MR_Box) (make__module_target__DepFiles0_34));
                    MR_hl_field(MR_mktag(0), make__module_target__V_80_80, 6) = ((MR_Box) (make__module_target__STATE_VARIABLE_Info_75_75));
                  }
                  {
                    make__util__debug_make_msg_4_p_0(make__module_target__Globals_10, make__module_target__V_80_80);
                  }
                  {
                    libs__globals__lookup_bool_option_3_p_0(make__module_target__Globals_10, (MR_Integer) 619, &make__module_target__KeepGoing_41);
                  }
                  make__module_target__succeeded = (make__module_target__DepsSuccess_33 == (MR_Integer) 0);
                  if (make__module_target__succeeded)
                    make__module_target__succeeded = (make__module_target__KeepGoing_41 == (MR_Integer) 0);
                  if (make__module_target__succeeded)
                    {
                      MR_Box make__module_target__conv9_STATE_VARIABLE_Info_45;

                      *make__module_target__Succeeded_12 = (MR_Integer) 0;
                      {
                        mercury__list__foldl_4_p_0(make__module_target__TypeCtorInfo_300_300, make__module_target__TypeCtorInfo_301_301, (MR_Word) &make__module_target_scalar_common_7[1], make__module_target__TouchedTargetFiles_27, ((MR_Box) (make__module_target__STATE_VARIABLE_Info_75_75)), &make__module_target__conv9_STATE_VARIABLE_Info_45);
                      }
                      *make__module_target__STATE_VARIABLE_Info_45 = ((MR_Word) make__module_target__conv9_STATE_VARIABLE_Info_45);
                    }
                  else
                    {
                      MR_Word make__module_target__DepsResult0_43;
                      MR_Word make__module_target__STATE_VARIABLE_Info_92_334;

                      {
                        make__module_target__make_dependency_files_10_p_0(make__module_target__Globals_10, make__module_target__TargetFile_11, make__module_target__DepFilesToMake_39, make__module_target__TouchedTargetFiles_27, make__module_target__TouchedFiles_28, &make__module_target__DepsResult0_43, make__module_target__STATE_VARIABLE_Info_75_75, &make__module_target__STATE_VARIABLE_Info_92_334);
                      }
                      switch (make__module_target__DepsSuccess_33) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 0:
                          {
                            MR_Box make__module_target__conv11_STATE_VARIABLE_Info_45;

                            *make__module_target__Succeeded_12 = (MR_Integer) 0;
                            {
                              mercury__list__foldl_4_p_0(make__module_target__TypeCtorInfo_300_300, make__module_target__TypeCtorInfo_301_301, (MR_Word) &make__module_target_scalar_common_7[2], make__module_target__TouchedTargetFiles_27, ((MR_Box) (make__module_target__STATE_VARIABLE_Info_92_334)), &make__module_target__conv11_STATE_VARIABLE_Info_45);
                            }
                            *make__module_target__STATE_VARIABLE_Info_45 = ((MR_Word) make__module_target__conv11_STATE_VARIABLE_Info_45);
                          }
                          break;
                        case (MR_Integer) 1:
                          switch (make__module_target__DepsResult0_43) {
                            default: /*NOTREACHED*/ MR_assert(0);
                            case (MR_Integer) 2:
                              {
                                MR_Box make__module_target__conv13_STATE_VARIABLE_Info_45;

                                *make__module_target__Succeeded_12 = (MR_Integer) 0;
                                {
                                  mercury__list__foldl_4_p_0(make__module_target__TypeCtorInfo_300_300, make__module_target__TypeCtorInfo_301_301, (MR_Word) &make__module_target_scalar_common_7[3], make__module_target__TouchedTargetFiles_27, ((MR_Box) (make__module_target__STATE_VARIABLE_Info_92_334)), &make__module_target__conv13_STATE_VARIABLE_Info_45);
                                }
                                *make__module_target__STATE_VARIABLE_Info_45 = ((MR_Word) make__module_target__conv13_STATE_VARIABLE_Info_45);
                              }
                              break;
                            case (MR_Integer) 1:
                              {
                                MR_Word make__module_target__STATE_VARIABLE_Info_104_104;
                                MR_Word make__module_target__V_105_105;
                                MR_Word make__module_target__V_106_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_92_334, (MR_Integer) 17)));
                                MR_Word make__module_target__V_107_107;
                                MR_Word make__module_target__V_108_108;
                                MR_Word make__module_target__V_256_256 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_92_334, (MR_Integer) 0)));
                                MR_Word make__module_target__V_257_257 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_92_334, (MR_Integer) 1)));
                                MR_Word make__module_target__V_258_258 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_92_334, (MR_Integer) 2)));
                                MR_Word make__module_target__V_259_259 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_92_334, (MR_Integer) 3)));
                                MR_Word make__module_target__V_260_260 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_92_334, (MR_Integer) 4)));
                                MR_Word make__module_target__V_261_261 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_92_334, (MR_Integer) 5)));
                                MR_Word make__module_target__V_262_262 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_92_334, (MR_Integer) 6)));
                                MR_Word make__module_target__V_263_263 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_92_334, (MR_Integer) 7)));
                                MR_Word make__module_target__V_264_264 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_92_334, (MR_Integer) 8)));
                                MR_Word make__module_target__V_265_265 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_92_334, (MR_Integer) 9)));
                                MR_Word make__module_target__V_266_266 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_92_334, (MR_Integer) 10)));
                                MR_Word make__module_target__V_267_267 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_92_334, (MR_Integer) 11)));
                                MR_Word make__module_target__V_268_268 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_92_334, (MR_Integer) 12)));
                                MR_Word make__module_target__V_269_269 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_92_334, (MR_Integer) 13)));
                                MR_Word make__module_target__V_270_270 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_92_334, (MR_Integer) 14)));
                                MR_Word make__module_target__V_271_271 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_92_334, (MR_Integer) 15)));
                                MR_Word make__module_target__V_272_272 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_92_334, (MR_Integer) 16)));
                                MR_Integer make__module_target__V_273_273 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_92_334, (MR_Integer) 18)));
                                MR_Word make__module_target__V_274_274 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_92_334, (MR_Integer) 19)));

                                {
                                  make__module_target__V_108_108 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                  MR_hl_field(MR_mktag(0), make__module_target__V_108_108, 0) = ((MR_Box) (make__module_target__FileType_18));
                                }
                                {
                                  make__module_target__V_107_107 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                                  MR_hl_field(MR_mktag(0), make__module_target__V_107_107, 0) = ((MR_Box) (make__module_target__ModuleName_17));
                                  MR_hl_field(MR_mktag(0), make__module_target__V_107_107, 1) = ((MR_Box) (make__module_target__V_108_108));
                                }
                                {
                                  make__module_target__V_105_105 = mercury__set__delete_2_f_0((MR_Word) &make__module_target_scalar_common_2[0], make__module_target__V_106_106, ((MR_Box) (make__module_target__V_107_107)));
                                }
                                {
                                  make__module_target__STATE_VARIABLE_Info_104_104 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 20 * sizeof(MR_Word)), NULL, NULL);
                                  MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_104_104, 0) = ((MR_Box) (make__module_target__V_256_256));
                                  MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_104_104, 1) = ((MR_Box) (make__module_target__V_257_257));
                                  MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_104_104, 2) = ((MR_Box) (make__module_target__V_258_258));
                                  MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_104_104, 3) = ((MR_Box) (make__module_target__V_259_259));
                                  MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_104_104, 4) = ((MR_Box) (make__module_target__V_260_260));
                                  MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_104_104, 5) = ((MR_Box) (make__module_target__V_261_261));
                                  MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_104_104, 6) = ((MR_Box) (make__module_target__V_262_262));
                                  MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_104_104, 7) = ((MR_Box) (make__module_target__V_263_263));
                                  MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_104_104, 8) = ((MR_Box) (make__module_target__V_264_264));
                                  MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_104_104, 9) = ((MR_Box) (make__module_target__V_265_265));
                                  MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_104_104, 10) = ((MR_Box) (make__module_target__V_266_266));
                                  MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_104_104, 11) = ((MR_Box) (make__module_target__V_267_267));
                                  MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_104_104, 12) = ((MR_Box) (make__module_target__V_268_268));
                                  MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_104_104, 13) = ((MR_Box) (make__module_target__V_269_269));
                                  MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_104_104, 14) = ((MR_Box) (make__module_target__V_270_270));
                                  MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_104_104, 15) = ((MR_Box) (make__module_target__V_271_271));
                                  MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_104_104, 16) = ((MR_Box) (make__module_target__V_272_272));
                                  MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_104_104, 17) = ((MR_Box) (make__module_target__V_105_105));
                                  MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_104_104, 18) = ((MR_Box) (make__module_target__V_273_273));
                                  MR_hl_field(MR_mktag(0), make__module_target__STATE_VARIABLE_Info_104_104, 19) = ((MR_Box) (make__module_target__V_274_274));
                                }
                                {
                                  make__module_target__build_target_12_p_0(make__module_target__Globals_10, make__module_target__CompilationTask_21, make__module_target__TargetFile_11, make__module_target__Imports_20, make__module_target__TouchedTargetFiles_27, make__module_target__TouchedFiles_28, make__module_target__ExtraOptions_9, make__module_target__Succeeded_12, make__module_target__STATE_VARIABLE_Info_104_104, make__module_target__STATE_VARIABLE_Info_45);
                                }
                              }
                              break;
                            case (MR_Integer) 0:
                              {
                                MR_Word make__module_target__V_94_94;
                                MR_Word make__module_target__STATE_VARIABLE_Info_95_95;
                                MR_Word make__module_target__V_97_97;
                                MR_Word make__module_target__V_101_101;
                                MR_Box make__module_target__conv15_STATE_VARIABLE_Info_45;

                                {
                                  make__module_target__V_97_97 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                  MR_hl_field(MR_mktag(0), make__module_target__V_97_97, 0) = ((MR_Box) (make__module_target__FileType_18));
                                }
                                {
                                  make__module_target__V_94_94 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                                  MR_hl_field(MR_mktag(0), make__module_target__V_94_94, 0) = ((MR_Box) (make__module_target__ModuleName_17));
                                  MR_hl_field(MR_mktag(0), make__module_target__V_94_94, 1) = ((MR_Box) (make__module_target__V_97_97));
                                }
                                {
                                  make__util__maybe_warn_up_to_date_target_6_p_0(make__module_target__Globals_10, make__module_target__V_94_94, make__module_target__STATE_VARIABLE_Info_92_334, &make__module_target__STATE_VARIABLE_Info_95_95);
                                }
                                {
                                  make__util__debug_file_msg_5_p_0(make__module_target__Globals_10, make__module_target__TargetFile_11, (MR_String) "up to date");
                                }
                                *make__module_target__Succeeded_12 = (MR_Integer) 1;
                                {
                                  make__module_target__V_101_101 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                  MR_hl_field(MR_mktag(1), make__module_target__V_101_101, 0) = ((MR_Box) (make__module_target__TargetFile_11));
                                  MR_hl_field(MR_mktag(1), make__module_target__V_101_101, 1) = ((MR_Box) (make__module_target__TouchedTargetFiles_27));
                                }
                                {
                                  mercury__list__foldl_4_p_0(make__module_target__TypeCtorInfo_300_300, make__module_target__TypeCtorInfo_301_301, (MR_Word) &make__module_target_scalar_common_7[4], make__module_target__V_101_101, ((MR_Box) (make__module_target__STATE_VARIABLE_Info_95_95)), &make__module_target__conv15_STATE_VARIABLE_Info_45);
                                }
                                *make__module_target__STATE_VARIABLE_Info_45 = ((MR_Word) make__module_target__conv15_STATE_VARIABLE_Info_45);
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
          *make__module_target__Succeeded_12 = (MR_Integer) 1;
          *make__module_target__STATE_VARIABLE_Info_45 = make__module_target__STATE_VARIABLE_Info_48_48;
        }
        break;
    }
  }
}

static void MR_CALL 
make__module_target__external_foreign_code_files_6_p_0_1(
  MR_Box make__module_target__closure_arg,
  MR_Box make__module_target__wrapper_arg_1,
  MR_Box * make__module_target__wrapper_arg_2,
  MR_Box make__module_target__wrapper_arg_3,
  MR_Box * make__module_target__wrapper_arg_4)
{
  {
    MR_Box make__module_target__closure = make__module_target__closure_arg;
    MR_Word make__module_target__conv0_FactTableForeignFile_12;

    {
      make__module_target__get_fact_table_foreign_code_file_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__closure, (MR_Integer) 3))), ((MR_String) (MR_hl_field(MR_mktag(0), make__module_target__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__closure, (MR_Integer) 5))), ((MR_String) make__module_target__wrapper_arg_1), &make__module_target__conv0_FactTableForeignFile_12);
    }
    *make__module_target__wrapper_arg_2 = ((MR_Box) (make__module_target__conv0_FactTableForeignFile_12));
  }
}

void MR_CALL 
make__module_target__external_foreign_code_files_6_p_0(
  MR_Word make__module_target__Globals_7,
  MR_Word make__module_target__PIC_8,
  MR_Word make__module_target__Imports_9,
  MR_Word * make__module_target__ForeignFiles_10)
{
  {
    MR_bool make__module_target__succeeded;
    MR_String make__module_target__ObjExt_12;
    MR_Word make__module_target__CompilationTarget_13;
    MR_Word make__module_target__ModuleName_14;
    MR_Word make__module_target__ForeignFiles0_15;
    MR_Word make__module_target__V_32_32;
    MR_String make__module_target__V_22_22;
    MR_Word make__module_target__V_23_23;
    MR_Word make__module_target__V_24_24;
    MR_Word make__module_target__V_25_25;
    MR_Word make__module_target__V_26_26;
    MR_Word make__module_target__V_27_27;
    MR_Word make__module_target__V_28_28;
    MR_Word make__module_target__V_29_29;
    MR_Word make__module_target__V_30_30;
    MR_Word make__module_target__V_31_31;
    MR_Word make__module_target__V_33_33;
    MR_Word make__module_target__V_34_34;
    MR_Word make__module_target__V_35_35;
    MR_Word make__module_target__V_36_36;
    MR_Word make__module_target__V_37_37;
    MR_Word make__module_target__V_38_38;
    MR_Word make__module_target__V_39_39;
    MR_Word make__module_target__V_40_40;
    MR_Word make__module_target__V_41_41;
    MR_Word make__module_target__V_42_42;
    MR_Word make__module_target__V_43_43;
    MR_Word make__module_target__V_44_44;
    MR_Word make__module_target__V_45_45;
    MR_Word make__module_target__V_46_46;
    MR_String make__module_target__V_47_47;

    {
      backend_libs__compile_target_code__maybe_pic_object_file_extension_3_p_0(make__module_target__Globals_7, make__module_target__PIC_8, &make__module_target__ObjExt_12);
    }
    {
      libs__globals__get_target_2_p_0(make__module_target__Globals_7, &make__module_target__CompilationTarget_13);
    }
    make__module_target__V_22_22 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_target__Imports_9, (MR_Integer) 0)));
    make__module_target__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_9, (MR_Integer) 1)));
    make__module_target__ModuleName_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_9, (MR_Integer) 2)));
    make__module_target__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_9, (MR_Integer) 3)));
    make__module_target__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_9, (MR_Integer) 4)));
    make__module_target__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_9, (MR_Integer) 5)));
    make__module_target__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_9, (MR_Integer) 6)));
    make__module_target__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_9, (MR_Integer) 7)));
    make__module_target__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_9, (MR_Integer) 8)));
    make__module_target__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_9, (MR_Integer) 9)));
    make__module_target__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_9, (MR_Integer) 10)));
    make__module_target__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_9, (MR_Integer) 11)));
    make__module_target__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_9, (MR_Integer) 12)));
    make__module_target__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_9, (MR_Integer) 13)));
    make__module_target__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_9, (MR_Integer) 14)));
    make__module_target__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_9, (MR_Integer) 15)));
    make__module_target__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_9, (MR_Integer) 16)));
    make__module_target__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_9, (MR_Integer) 17)));
    make__module_target__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_9, (MR_Integer) 18)));
    make__module_target__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_9, (MR_Integer) 19)));
    make__module_target__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_9, (MR_Integer) 20)));
    make__module_target__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_9, (MR_Integer) 21)));
    make__module_target__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_9, (MR_Integer) 22)));
    make__module_target__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_9, (MR_Integer) 23)));
    make__module_target__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_9, (MR_Integer) 24)));
    make__module_target__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Imports_9, (MR_Integer) 25)));
    make__module_target__V_47_47 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_target__Imports_9, (MR_Integer) 26)));
    make__module_target__ForeignFiles0_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    switch (make__module_target__CompilationTarget_13) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word make__module_target__TypeCtorInfo_79_79;
          MR_Word make__module_target__FactTableForeignFiles_16;
          MR_Word make__module_target__V_19_19;
          MR_Box make__module_target__conv1_STATE_VARIABLE_IO_18;

          {
            make__module_target__V_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), make__module_target__V_19_19, 0) = ((MR_Box) (&make__module_target_scalar_common_5[0]));
            MR_hl_field(MR_mktag(0), make__module_target__V_19_19, 1) = ((MR_Box) (make__module_target__external_foreign_code_files_6_p_0_1));
            MR_hl_field(MR_mktag(0), make__module_target__V_19_19, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
            MR_hl_field(MR_mktag(0), make__module_target__V_19_19, 3) = ((MR_Box) (make__module_target__Globals_7));
            MR_hl_field(MR_mktag(0), make__module_target__V_19_19, 4) = ((MR_Box) (make__module_target__ObjExt_12));
            MR_hl_field(MR_mktag(0), make__module_target__V_19_19, 5) = ((MR_Box) (make__module_target__ModuleName_14));
          }
          make__module_target__TypeCtorInfo_79_79 = (MR_Word) &make__module_target__make__module_target__type_ctor_info_foreign_code_file_0;
          {
            mercury__list__map_foldl_5_p_2((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, make__module_target__TypeCtorInfo_79_79, (MR_Word) &mercury__io__io__type_ctor_info_state_0, make__module_target__V_19_19, make__module_target__V_32_32, &make__module_target__FactTableForeignFiles_16, ((MR_Box) ((MR_Integer) 0)), &make__module_target__conv1_STATE_VARIABLE_IO_18);
          }
          {
            *make__module_target__ForeignFiles_10 = mercury__list__f_43_43_2_f_0(make__module_target__TypeCtorInfo_79_79, make__module_target__ForeignFiles0_15, make__module_target__FactTableForeignFiles_16);
          }
        }
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 3:
      case (MR_Integer) 2:
        *make__module_target__ForeignFiles_10 = make__module_target__ForeignFiles0_15;
        break;
    }
  }
}

void MR_CALL 
make__module_target__record_made_target_8_p_0(
  MR_Word make__module_target__Globals_9,
  MR_Word make__module_target__TargetFile_10,
  MR_Word make__module_target__CompilationTask_11,
  MR_Word make__module_target__Succeeded_12,
  MR_Word make__module_target__STATE_VARIABLE_Info_0_17,
  MR_Word * make__module_target__STATE_VARIABLE_Info_18)
{
  {
    MR_bool make__module_target__succeeded;
    MR_Word make__module_target__TouchedTargetFiles_15;
    MR_Word make__module_target__TouchedFiles_16;
    MR_Word make__module_target__STATE_VARIABLE_Info_21_21;

    switch (MR_tag((MR_Word) make__module_target__CompilationTask_11)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word make__module_target__ModuleTask_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__CompilationTask_11, (MR_Integer) 0)));

          {
            make__module_target__touched_files_process_module_9_p_0(make__module_target__Globals_9, make__module_target__TargetFile_10, make__module_target__ModuleTask_36, &make__module_target__TouchedTargetFiles_15, &make__module_target__TouchedFiles_16, make__module_target__STATE_VARIABLE_Info_0_17, &make__module_target__STATE_VARIABLE_Info_21_21);
          }
        }
        break;
      case (MR_Integer) 1:
        {
          {
            make__module_target__TouchedTargetFiles_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), make__module_target__TouchedTargetFiles_15, 0) = ((MR_Box) (make__module_target__TargetFile_10));
            MR_hl_field(MR_mktag(1), make__module_target__TouchedTargetFiles_15, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          make__module_target__TouchedFiles_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          make__module_target__STATE_VARIABLE_Info_21_21 = make__module_target__STATE_VARIABLE_Info_0_17;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word make__module_target__PIC_38 = ((MR_Word) (MR_hl_field(MR_mktag(2), make__module_target__CompilationTask_11, (MR_Integer) 0)));
          MR_Word make__module_target__Lang_39 = ((MR_Word) (MR_hl_field(MR_mktag(2), make__module_target__CompilationTask_11, (MR_Integer) 1)));
          MR_Word make__module_target__ModuleName_40;
          MR_Word make__module_target__ForeignCodeFile_42;
          MR_String make__module_target__ForeignObjectFile_43;
          MR_Word make__module_target__V_41_41;
          MR_Word make__module_target__V_60_60;
          MR_String make__module_target__V_61_61;

          {
            make__module_target__TouchedTargetFiles_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), make__module_target__TouchedTargetFiles_15, 0) = ((MR_Box) (make__module_target__TargetFile_10));
            MR_hl_field(MR_mktag(1), make__module_target__TouchedTargetFiles_15, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          make__module_target__ModuleName_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__TargetFile_10, (MR_Integer) 0)));
          make__module_target__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__TargetFile_10, (MR_Integer) 1)));
          {
            make__module_target__get_foreign_code_file_7_p_0(make__module_target__Globals_9, make__module_target__ModuleName_40, make__module_target__PIC_38, make__module_target__Lang_39, &make__module_target__ForeignCodeFile_42);
          }
          make__module_target__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__ForeignCodeFile_42, (MR_Integer) 0)));
          make__module_target__V_61_61 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_target__ForeignCodeFile_42, (MR_Integer) 1)));
          make__module_target__ForeignObjectFile_43 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_target__ForeignCodeFile_42, (MR_Integer) 2)));
          {
            make__module_target__TouchedFiles_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), make__module_target__TouchedFiles_16, 0) = ((MR_Box) (make__module_target__ForeignObjectFile_43));
            MR_hl_field(MR_mktag(1), make__module_target__TouchedFiles_16, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          make__module_target__STATE_VARIABLE_Info_21_21 = make__module_target__STATE_VARIABLE_Info_0_17;
        }
        break;
      case (MR_Integer) 3:
        {
          MR_String make__module_target__FactTableName_44 = ((MR_String) (MR_hl_field(MR_mktag(3), make__module_target__CompilationTask_11, (MR_Integer) 1)));
          MR_String make__module_target__ObjExt_46;
          MR_String make__module_target__FactTableObjectFile_47;
          MR_Word make__module_target__PIC_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), make__module_target__CompilationTask_11, (MR_Integer) 0)));
          MR_Word make__module_target__ModuleName_59;
          MR_Word make__module_target__CompilationTarget_65;
          MR_Word make__module_target__V_45_45;

          {
            make__module_target__TouchedTargetFiles_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), make__module_target__TouchedTargetFiles_15, 0) = ((MR_Box) (make__module_target__TargetFile_10));
            MR_hl_field(MR_mktag(1), make__module_target__TouchedTargetFiles_15, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          make__module_target__ModuleName_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__TargetFile_10, (MR_Integer) 0)));
          make__module_target__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__TargetFile_10, (MR_Integer) 1)));
          {
            libs__globals__get_target_2_p_0(make__module_target__Globals_9, &make__module_target__CompilationTarget_65);
          }
          switch (make__module_target__CompilationTarget_65) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                backend_libs__compile_target_code__maybe_pic_object_file_extension_3_p_0(make__module_target__Globals_9, make__module_target__PIC_58, &make__module_target__ObjExt_46);
              }
              break;
            case (MR_Integer) 1:
              {
                {
                  mercury__require__sorry_3_p_0((MR_String) "make.module_target", (MR_String) "function \140make.module_target.get_object_extension\'/2", (MR_String) "object extension for csharp");
                  return;
                }
              }
              break;
            case (MR_Integer) 3:
              {
                {
                  mercury__require__sorry_3_p_0((MR_String) "make.module_target", (MR_String) "function \140make.module_target.get_object_extension\'/2", (MR_String) "mmc --make NYI and target erlang");
                  return;
                }
              }
              break;
            case (MR_Integer) 2:
              {
                {
                  mercury__require__sorry_3_p_0((MR_String) "make.module_target", (MR_String) "function \140make.module_target.get_object_extension\'/2", (MR_String) "object extension for java");
                  return;
                }
              }
              break;
          }
          {
            parse_tree__file_names__fact_table_file_name_8_p_0(make__module_target__Globals_9, make__module_target__ModuleName_59, make__module_target__FactTableName_44, make__module_target__ObjExt_46, (MR_Integer) 0, &make__module_target__FactTableObjectFile_47);
          }
          {
            make__module_target__TouchedFiles_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), make__module_target__TouchedFiles_16, 0) = ((MR_Box) (make__module_target__FactTableObjectFile_47));
            MR_hl_field(MR_mktag(1), make__module_target__TouchedFiles_16, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          make__module_target__STATE_VARIABLE_Info_21_21 = make__module_target__STATE_VARIABLE_Info_0_17;
        }
        break;
    }
    {
      make__module_target__record_made_target_2_9_p_0(make__module_target__Globals_9, make__module_target__Succeeded_12, make__module_target__TargetFile_10, make__module_target__TouchedTargetFiles_15, make__module_target__TouchedFiles_16, make__module_target__STATE_VARIABLE_Info_21_21, make__module_target__STATE_VARIABLE_Info_18);
    }
  }
}

void MR_CALL 
make__module_target__make_module_target_extra_options_8_p_0(
  MR_Word make__module_target__ExtraOptions_9,
  MR_Word make__module_target__Globals_10,
  MR_Word make__module_target__Dep_11,
  MR_Word * make__module_target__Succeeded_12,
  MR_Word make__module_target__STATE_VARIABLE_Info_0_19,
  MR_Word * make__module_target__STATE_VARIABLE_Info_20)
{
  {
    MR_bool make__module_target__succeeded;

    if (((MR_tag((MR_Word) make__module_target__Dep_11)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Word make__module_target__Status_17;

        {
          make__dependencies__dependency_status_7_p_0(make__module_target__Globals_10, make__module_target__Dep_11, &make__module_target__Status_17, make__module_target__STATE_VARIABLE_Info_0_19, make__module_target__STATE_VARIABLE_Info_20);
        }
        *make__module_target__Succeeded_12 = ((&make__module_target_vector_common_4[0 + make__module_target__Status_17]))->make__module_target__vector_common_type_4_0__vct_4_f_0;
      }
    else
      {
        MR_Word make__module_target__TargetFile_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_target__Dep_11, (MR_Integer) 0)));

        {
          make__module_target__make_module_target_file_extra_options_8_p_0(make__module_target__ExtraOptions_9, make__module_target__Globals_10, make__module_target__TargetFile_18, make__module_target__Succeeded_12, make__module_target__STATE_VARIABLE_Info_0_19, make__module_target__STATE_VARIABLE_Info_20);
        }
      }
  }
}

void MR_CALL 
make__module_target__make_module_target_7_p_0(
  MR_Word make__module_target__Globals_8,
  MR_Word make__module_target__DepFile_9,
  MR_Word * make__module_target__Succeeded_10,
  MR_Word make__module_target__STATE_VARIABLE_Info_0_13,
  MR_Word * make__module_target__STATE_VARIABLE_Info_14)
{
  {
    MR_bool make__module_target__succeeded;

    {
      make__module_target__make_module_target_extra_options_8_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), make__module_target__Globals_8, make__module_target__DepFile_9, make__module_target__Succeeded_10, make__module_target__STATE_VARIABLE_Info_0_13, make__module_target__STATE_VARIABLE_Info_14);
    }
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

/* :- end_module make.module_target. */
