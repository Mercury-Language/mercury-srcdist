/*
** Automatically generated from `mercury_compile_main.m'
** by the Mercury compiler,
** version rotd-2023-03-10
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


// :- module top_level.mercury_compile_main.
// :- implementation.

/*
INIT mercury__top_level__mercury_compile_main__init
ENDINIT
*/

#include "top_level.mercury_compile_main.mih"


#include "analysis.mih"
#include "array.mih"
#include "assoc_list.mih"
#include "backend_libs.mih"
#include "benchmarking.mih"
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "check_hlds.mih"
#include "construct.mih"
#include "cord.mih"
#include "counter.mih"
#include "deconstruct.mih"
#include "digraph.mih"
#include "edit_seq.mih"
#include "enum.mih"
#include "gc.mih"
#include "getopt.mih"
#include "hlds.mih"
#include "io.mih"
#include "library.mih"
#include "libs.mih"
#include "list.mih"
#include "ll_backend.mih"
#include "make.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "ml_backend.mih"
#include "multi_map.mih"
#include "one_or_more.mih"
#include "one_or_more_map.mih"
#include "ops.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "queue.mih"
#include "recompilation.mih"
#include "require.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "set_tree234.mih"
#include "solutions.mih"
#include "sparse_bitset.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "term_context.mih"
#include "time.mih"
#include "top_level.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "version_hash_table.mih"
#include "backend_libs.builtin_ops.mih"
#include "backend_libs.compile_target_code.mih"
#include "backend_libs.export.mih"
#include "backend_libs.rtti.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.proc_requests.mih"
#include "check_hlds.xml_documentation.mih"
#include "hlds.code_model.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_mode.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_cons.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_inst_mode.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_promise.mih"
#include "hlds.instmap.mih"
#include "hlds.make_hlds.mih"
#include "hlds.passes_aux.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "io.environment.mih"
#include "io.file.mih"
#include "libs.check_libgrades.mih"
#include "libs.compute_grade.mih"
#include "libs.dependency_graph.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.handle_options.mih"
#include "libs.maybe_succeeded.mih"
#include "libs.op_mode.mih"
#include "libs.optimization_options.mih"
#include "libs.options.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "ll_backend.global_data.mih"
#include "ll_backend.layout.mih"
#include "ll_backend.llds.mih"
#include "make.build.mih"
#include "make.dependencies.mih"
#include "make.make_info.mih"
#include "make.options_file.mih"
#include "make.top_level.mih"
#include "mdbcomp.builtin_modules.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.shared_utilities.mih"
#include "mdbcomp.sym_name.mih"
#include "ml_backend.ml_global_data.mih"
#include "ml_backend.mlds.mih"
#include "parse_tree.check_module_interface.mih"
#include "parse_tree.equiv_type.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.generate_dep_d_files.mih"
#include "parse_tree.grab_modules.mih"
#include "parse_tree.item_util.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.module_baggage.mih"
#include "parse_tree.module_cmds.mih"
#include "parse_tree.module_dep_info.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.parse_error.mih"
#include "parse_tree.parse_tree_out.mih"
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.read_modules.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.source_file_map.mih"
#include "parse_tree.split_parse_tree_src.mih"
#include "parse_tree.var_table.mih"
#include "parse_tree.vartypes.mih"
#include "parse_tree.write_error_spec.mih"
#include "parse_tree.write_module_interface_files.mih"
#include "recompilation.check.mih"
#include "recompilation.usage.mih"
#include "recompilation.used_file.mih"
#include "string.format.mih"
#include "string.parse_util.mih"
#include "top_level.mercury_compile_front_end.mih"
#include "top_level.mercury_compile_llds_back_end.mih"
#include "top_level.mercury_compile_make_hlds.mih"
#include "top_level.mercury_compile_middle_passes.mih"
#include "top_level.mercury_compile_mlds_back_end.mih"
#include "hlds.make_hlds.qual_info.mih"



struct top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_query__695__1_1_p_0_env_0_s {
  MR_String * top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_query__695__1_1_p_0_env_0__LambdaHeadVar__1_62;
  MR_Cont top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_query__695__1_1_p_0_env_0__cont;
  void * top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_query__695__1_1_p_0_env_0__cont_env_ptr;
  MR_String top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_query__695__1_1_p_0_env_0__ModuleName_27;
  MR_Word top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_query__695__1_1_p_0_env_0__DocUndoc_28;
  MR_String top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_query__695__1_1_p_0_env_0__DocStr_29;
  MR_String top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_query__695__1_1_p_0_env_0__Var_63;
  MR_String top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_query__695__1_1_p_0_env_0__Var_64;
  MR_String top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_query__695__1_1_p_0_env_0__Var_65;
  MR_String top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_query__695__1_1_p_0_env_0__Var_66;
};

struct top_level__mercury_compile_main__do_op_mode_query_6_p_0_4_env_0_s {
  MR_Box * top_level__mercury_compile_main__do_op_mode_query_6_p_0_4_env_0__wrapper_arg_1;
  MR_Cont top_level__mercury_compile_main__do_op_mode_query_6_p_0_4_env_0__cont;
  void * top_level__mercury_compile_main__do_op_mode_query_6_p_0_4_env_0__cont_env_ptr;
  MR_String top_level__mercury_compile_main__do_op_mode_query_6_p_0_4_env_0__conv2_LambdaHeadVar__1_62;
};


static const MR_FA_PseudoTypeInfo_Struct1 top_level__mercury_compile_main__maybe__pti_maybe_1__plain_libs__timestamp__type_ctor_info_timestamp_0;

static const MR_FA_PseudoTypeInfo_Struct1 top_level__mercury_compile_main__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_FA_PseudoTypeInfo_Struct1 top_level__mercury_compile_main__list__pti_list_1__plain_builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct1 top_level__mercury_compile_main__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_FA_TypeInfo_Struct1 top_level__mercury_compile_main__list__ti_list_1builtin__type_ctor_info_string_0;

static const MR_VA_PseudoTypeInfo_Struct4 top_level__mercury_compile_main____vpti_pred_4__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_list__ti_list_1builtin__type_ctor_info_string_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0;

static const MR_FA_PseudoTypeInfo_Struct1 top_level__mercury_compile_main__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0;

static const MR_PseudoTypeInfo top_level__mercury_compile_main__top_level__mercury_compile_main__field_types_file_or_module_0_0[1];

static const MR_DuFunctorDesc top_level__mercury_compile_main__top_level__mercury_compile_main__du_functor_desc_file_or_module_0_0;

static const MR_PseudoTypeInfo top_level__mercury_compile_main__top_level__mercury_compile_main__field_types_file_or_module_0_1[1];

static const MR_DuFunctorDesc top_level__mercury_compile_main__top_level__mercury_compile_main__du_functor_desc_file_or_module_0_1;

static const MR_DuFunctorDescPtr top_level__mercury_compile_main__top_level__mercury_compile_main__du_stag_ordered_file_or_module_0_0[1];

static const MR_DuFunctorDescPtr top_level__mercury_compile_main__top_level__mercury_compile_main__du_stag_ordered_file_or_module_0_1[1];

static const MR_DuPtagLayout top_level__mercury_compile_main__top_level__mercury_compile_main__du_ptag_ordered_file_or_module_0[2];

static const MR_DuFunctorDescPtr top_level__mercury_compile_main__top_level__mercury_compile_main__du_name_ordered_file_or_module_0[2];

static const MR_Integer top_level__mercury_compile_main__top_level__mercury_compile_main__functor_number_map_file_or_module_0[2];

static MR_bool MR_CALL 
top_level__mercury_compile_main__IntroducedFrom__pred__read_augment_and_process_module_ok__1416__1_2_p_0(
  MR_Word ModulesToRecompile_33,
  MR_Word LambdaHeadVar__1_47);

static MR_bool MR_CALL 
top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_args__733__1_2_p_0(
  MR_Word InvokedByMake_28,
  MR_Word HeadVar__2_59);

static void MR_CALL 
top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_query__695__1_1_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_query__695__1_1_p_0(
  MR_String * LambdaHeadVar__1_62,
  MR_Cont cont,
  void * cont_env_ptr);

static void MR_CALL 
top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_query__688__1_4_p_0(
  MR_Word StdOutStream_12,
  MR_String HeadVar__2_87);

static void MR_CALL 
top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_query__681__1_4_p_0(
  MR_Word StdOutStream_12,
  MR_String HeadVar__2_81);

static void MR_CALL 
top_level__mercury_compile_main____Compare____file_or_module_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
top_level__mercury_compile_main____Unify____file_or_module_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
top_level__mercury_compile_main__gc_init_2_p_0(void);

static void MR_CALL 
top_level__mercury_compile_main__augment_and_process_module_17_p_0(
  MR_Word ProgressStream_18,
  MR_Word ErrorStream_19,
  MR_Word Globals_20,
  MR_Word OpModeAugment_21,
  MR_String SourceFileName_22,
  MR_Word MaybeTimestamp_23,
  MR_Word SourceFileModuleName_24,
  MR_Word NestedSubModules_25,
  MR_Word FindTimestampFiles_26,
  MR_Word ParseTreeModuleSrc_27,
  MR_Word * ExtraObjFiles_28,
  MR_Word STATE_VARIABLE_Specs_0_38,
  MR_Word * STATE_VARIABLE_Specs_39,
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_0_40,
  MR_Word * STATE_VARIABLE_HaveReadModuleMaps_41);

static void MR_CALL 
top_level__mercury_compile_main__process_augmented_module_16_p_0(
  MR_Word ProgressStream_17,
  MR_Word ErrorStream_18,
  MR_Word Globals0_19,
  MR_Word OpModeAugment_20,
  MR_Word Baggage_21,
  MR_Word AugCompUnit_22,
  MR_Word FindTimestampFiles_23,
  MR_Word * ExtraObjFiles_24,
  MR_Word STATE_VARIABLE_DumpInfo_0_54,
  MR_Word * STATE_VARIABLE_DumpInfo_55,
  MR_Word STATE_VARIABLE_Specs_0_56,
  MR_Word * STATE_VARIABLE_Specs_57,
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_0_58,
  MR_Word * STATE_VARIABLE_HaveReadModuleMaps_59);

static void MR_CALL 
top_level__mercury_compile_main__after_front_end_passes_15_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
top_level__mercury_compile_main__after_front_end_passes_15_p_0(
  MR_Word ProgressStream_16,
  MR_Word ErrorStream_17,
  MR_Word Globals_18,
  MR_Word OpModeCodeGen_19,
  MR_Word MaybeTopModule_20,
  MR_Word FindTimestampFiles_21,
  MR_Word MaybeTimestampMap_22,
  MR_Word STATE_VARIABLE_HLDS_0_59,
  MR_Word * ExtraObjFiles_24,
  MR_Word STATE_VARIABLE_Specs_0_60,
  MR_Word * STATE_VARIABLE_Specs_61,
  MR_Word STATE_VARIABLE_DumpInfo_0_62,
  MR_Word * STATE_VARIABLE_DumpInfo_63);

static void MR_CALL 
top_level__mercury_compile_main__maybe_output_prof_call_graph_8_p_0(
  MR_Word ProgressStream_9,
  MR_Word ErrorStream_10,
  MR_Word Verbose_11,
  MR_Word Stats_12,
  MR_Word STATE_VARIABLE_HLDS_0_24,
  MR_Word * STATE_VARIABLE_HLDS_25);

static MR_Box MR_CALL 
top_level__mercury_compile_main__prepare_for_intermodule_analysis_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
top_level__mercury_compile_main__prepare_for_intermodule_analysis_8_p_0(
  MR_Word ProgressStream_9,
  MR_Word Globals_10,
  MR_Word Verbose_11,
  MR_Word Stats_12,
  MR_Word STATE_VARIABLE_HLDS_0_21,
  MR_Word * STATE_VARIABLE_HLDS_22);

static MR_Box MR_CALL 
top_level__mercury_compile_main__maybe_prepare_for_intermodule_analysis_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
top_level__mercury_compile_main__maybe_prepare_for_intermodule_analysis_8_p_0(
  MR_Word ProgressStream_9,
  MR_Word Globals_10,
  MR_Word Verbose_11,
  MR_Word Stats_12,
  MR_Word STATE_VARIABLE_HLDS_0_16,
  MR_Word * STATE_VARIABLE_HLDS_17);

static void MR_CALL 
top_level__mercury_compile_main__maybe_write_dependency_graph_8_p_0(
  MR_Word ProgressStream_9,
  MR_Word ErrorStream_10,
  MR_Word Verbose_11,
  MR_Word Stats_12,
  MR_Word STATE_VARIABLE_HLDS_0_23,
  MR_Word * STATE_VARIABLE_HLDS_24);

static void MR_CALL 
top_level__mercury_compile_main__disable_warning_options_2_p_0(
  MR_Word Globals0_3,
  MR_Word * Globals_4);

static void MR_CALL 
top_level__mercury_compile_main__module_to_link_2_p_0(
  MR_Word ParseTreeModuleSrc_3,
  MR_String * ModuleToLink_4);

static void MR_CALL 
top_level__mercury_compile_main__find_timestamp_files_2_6_p_0(
  MR_Word Globals_7,
  MR_Word TimestampOtherExt_8,
  MR_Word ModuleName_9,
  MR_Word * TimestampFiles_10);

static void MR_CALL 
top_level__mercury_compile_main__usual_find_target_files_6_p_0(
  MR_Word Globals_7,
  MR_Word TargetOtherExt_8,
  MR_Word ModuleName_9,
  MR_Word * TargetFiles_10);

static void MR_CALL 
top_level__mercury_compile_main__main_after_setup_9_p_0(
  MR_Word ProgressStream_10,
  MR_Word ErrorStream_11,
  MR_Word Globals_12,
  MR_Word DetectedGradeFlags_13,
  MR_Word OptionVariables_14,
  MR_Word OptionArgs_15,
  MR_Word Args_16);

static MR_bool MR_CALL 
top_level__mercury_compile_main__do_op_mode_args_15_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
top_level__mercury_compile_main__do_op_mode_args_15_p_0(
  MR_Word ProgressStream_16,
  MR_Word ErrorStream_17,
  MR_Word Globals_18,
  MR_Word OpModeArgs_19,
  MR_Word FileNamesFromStdin_20,
  MR_Word DetectedGradeFlags_21,
  MR_Word OptionVariables_22,
  MR_Word OptionArgs_23,
  MR_Word Args_24,
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_0_49,
  MR_Word * STATE_VARIABLE_HaveReadModuleMaps_50,
  MR_Word STATE_VARIABLE_Specs_0_51,
  MR_Word * STATE_VARIABLE_Specs_52);

static void MR_CALL 
top_level__mercury_compile_main__do_process_compiler_cmd_line_args_14_p_0(
  MR_Word ProgressStream_1,
  MR_Word ErrorStream_2,
  MR_Word Globals_3,
  MR_Word OpModeArgs_4,
  MR_Word OptionArgs_5,
  MR_Word HeadVar__6_6,
  MR_Word STATE_VARIABLE_Modules_0_7,
  MR_Word * STATE_VARIABLE_Modules_8,
  MR_Word STATE_VARIABLE_ExtraObjFiles_0_9,
  MR_Word * STATE_VARIABLE_ExtraObjFiles_10,
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_0_11,
  MR_Word * STATE_VARIABLE_HaveReadModuleMaps_12);

static void MR_CALL 
top_level__mercury_compile_main__setup_and_process_compiler_cmd_line_args_18_p_0(
  MR_Word ProgressStream_1,
  MR_Word ErrorStream_2,
  MR_Word Globals_3,
  MR_Word OpModeArgs_4,
  MR_Word DetectedGradeFlags_5,
  MR_Word OptionVariables_6,
  MR_Word OptionArgs_7,
  MR_Word HeadVar__8_8,
  MR_Word STATE_VARIABLE_Modules_0_9,
  MR_Word * STATE_VARIABLE_Modules_10,
  MR_Word STATE_VARIABLE_ExtraObjFiles_0_11,
  MR_Word * STATE_VARIABLE_ExtraObjFiles_12,
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_0_13,
  MR_Word * STATE_VARIABLE_HaveReadModuleMaps_14,
  MR_Word STATE_VARIABLE_Specs_0_15,
  MR_Word * STATE_VARIABLE_Specs_16);

static void MR_CALL 
top_level__mercury_compile_main__setup_and_process_compiler_arg_16_p_0(
  MR_Word ProgressStream_17,
  MR_Word ErrorStream_18,
  MR_Word Globals_19,
  MR_Word OpModeArgs_20,
  MR_Word DetectedGradeFlags_21,
  MR_Word OptionVariables_22,
  MR_Word OptionArgs_23,
  MR_String Arg_24,
  MR_Word * ModulesToLink_25,
  MR_Word * ExtraObjFiles_26,
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_0_40,
  MR_Word * STATE_VARIABLE_HaveReadModuleMaps_41,
  MR_Word STATE_VARIABLE_Specs_0_42,
  MR_Word * STATE_VARIABLE_Specs_43);

static void MR_CALL 
top_level__mercury_compile_main__setup_and_process_compiler_stdin_args_18_p_0(
  MR_Word ProgressStream_19,
  MR_Word ErrorStream_20,
  MR_Word StdIn_21,
  MR_Word Globals_22,
  MR_Word OpModeArgs_23,
  MR_Word DetectedGradeFlags_24,
  MR_Word OptionVariables_25,
  MR_Word OptionArgs_26,
  MR_Word STATE_VARIABLE_Modules_0_41,
  MR_Word * STATE_VARIABLE_Modules_42,
  MR_Word STATE_VARIABLE_ExtraObjFiles_0_43,
  MR_Word * STATE_VARIABLE_ExtraObjFiles_44,
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_0_45,
  MR_Word * STATE_VARIABLE_HaveReadModuleMaps_46,
  MR_Word STATE_VARIABLE_Specs_0_47,
  MR_Word * STATE_VARIABLE_Specs_48);

static void MR_CALL 
top_level__mercury_compile_main__do_process_compiler_arg_12_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
top_level__mercury_compile_main__do_process_compiler_arg_12_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
top_level__mercury_compile_main__do_process_compiler_arg_12_p_0(
  MR_Word ProgressStream_13,
  MR_Word ErrorStream_14,
  MR_Word Globals0_15,
  MR_Word OpModeArgs_16,
  MR_Word OptionArgs_17,
  MR_Word FileOrModule_18,
  MR_Word * ModulesToLink_19,
  MR_Word * ExtraObjFiles_20,
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_0_38,
  MR_Word * STATE_VARIABLE_HaveReadModuleMaps_39);

static void MR_CALL 
top_level__mercury_compile_main__read_augment_and_process_module_13_p_0(
  MR_Word ProgressStream_14,
  MR_Word ErrorStream_15,
  MR_Word Globals0_16,
  MR_Word OpModeAugment_17,
  MR_Word OptionArgs_18,
  MR_Word FileOrModule_19,
  MR_Word MaybeModulesToRecompile_20,
  MR_Word * ModulesToLink_21,
  MR_Word * ExtraObjFiles_22,
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_0_36,
  MR_Word * STATE_VARIABLE_HaveReadModuleMaps_37);

static void MR_CALL 
top_level__mercury_compile_main__read_augment_and_process_module_ok_15_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
top_level__mercury_compile_main__read_augment_and_process_module_ok_15_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8);

static void MR_CALL 
top_level__mercury_compile_main__read_augment_and_process_module_ok_15_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static MR_Box MR_CALL 
top_level__mercury_compile_main__read_augment_and_process_module_ok_15_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
top_level__mercury_compile_main__read_augment_and_process_module_ok_15_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
top_level__mercury_compile_main__read_augment_and_process_module_ok_15_p_0(
  MR_Word ProgressStream_16,
  MR_Word ErrorStream_17,
  MR_Word Globals_18,
  MR_Word OpModeAugment_19,
  MR_String FileName_20,
  MR_Word MaybeTimestamp_21,
  MR_Word ParseTreeSrc_22,
  MR_Word Errors_23,
  MR_Word MaybeModulesToRecompile_24,
  MR_Word * ModulesToLink_25,
  MR_Word * ExtraObjFiles_26,
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_0_43,
  MR_Word * STATE_VARIABLE_HaveReadModuleMaps_44);

static void MR_CALL 
top_level__mercury_compile_main__do_process_compiler_arg_make_interface_9_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
top_level__mercury_compile_main__do_process_compiler_arg_make_interface_9_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
top_level__mercury_compile_main__do_process_compiler_arg_make_interface_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
top_level__mercury_compile_main__do_process_compiler_arg_make_interface_9_p_0(
  MR_Word ProgressStream_10,
  MR_Word ErrorStream_11,
  MR_Word Globals0_12,
  MR_Word InterfaceFile_13,
  MR_Word FileOrModule_14,
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_0_32,
  MR_Word * STATE_VARIABLE_HaveReadModuleMaps_33);

static void MR_CALL 
top_level__mercury_compile_main__read_module_or_file_10_p_0(
  MR_Word ProgressStream_11,
  MR_Word Globals0_12,
  MR_Word * Globals_13,
  MR_Word FileOrModuleName_14,
  MR_Word ReturnTimestamp_15,
  MR_Word * HaveReadSrc_16,
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_0_37,
  MR_Word * STATE_VARIABLE_HaveReadModuleMaps_38);

static void MR_CALL 
top_level__mercury_compile_main__do_op_mode_query_6_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
top_level__mercury_compile_main__do_op_mode_query_6_p_0_3(
  void * env_ptr_arg);

static void MR_CALL 
top_level__mercury_compile_main__do_op_mode_query_6_p_0_4(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Cont cont,
  void * cont_env_ptr);

static void MR_CALL 
top_level__mercury_compile_main__do_op_mode_query_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
top_level__mercury_compile_main__do_op_mode_query_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
top_level__mercury_compile_main__do_op_mode_query_6_p_0(
  MR_Word ErrorStream_7,
  MR_Word Globals_8,
  MR_Word OpModeQuery_9,
  MR_Word OptionVariables_10);

static void MR_CALL 
top_level__mercury_compile_main__process_options_plain_10_p_0(
  MR_Word ErrorStream_11,
  MR_Word CmdLineArgs_12,
  MR_Word * DetectedGradeFlags_13,
  MR_Word * Variables_14,
  MR_Word * MaybeMCFlags_15,
  MR_Word * OptionArgs_16,
  MR_Word * NonOptionArgs_17,
  MR_Word * Specs_18);

static void MR_CALL 
top_level__mercury_compile_main__expand_at_file_arguments_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2);

static void MR_CALL 
top_level__mercury_compile_main__expand_file_into_arg_list_4_p_0(
  MR_Word S_5,
  MR_Word * Res_6);

static MR_bool MR_CALL 
top_level__mercury_compile_main____Unify____file_or_module_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
top_level__mercury_compile_main____Compare____file_or_module_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box top_level__mercury_compile_main_scalar_common_1[11][2];

static /* final */ const MR_Box top_level__mercury_compile_main_scalar_common_2[8][1];

static /* final */ const MR_Box top_level__mercury_compile_main_scalar_common_3[1][7];

static /* final */ const MR_Box top_level__mercury_compile_main_scalar_common_4[1][4];

static /* final */ const MR_Box top_level__mercury_compile_main_scalar_common_5[5][3];

static /* final */ const MR_Box top_level__mercury_compile_main_scalar_common_6[1][15];

static /* final */ const MR_Box top_level__mercury_compile_main_scalar_common_7[2][10];

static /* final */ const MR_Box top_level__mercury_compile_main_scalar_common_8[5][5];

static /* final */ const MR_Box top_level__mercury_compile_main_scalar_common_9[1][9];

static /* final */ const MR_Box top_level__mercury_compile_main_scalar_common_10[1][20];




static /* final */ const MR_Box top_level__mercury_compile_main_scalar_common_1[11][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_src_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0))
  },
  /* row   3 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row   4 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error:"))
  },
  /* row   5 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--generate-standalone-interface"))
  },
  /* row   6 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "is not required for target language"))
  },
  /* row   7 */
  {
    ((MR_Box) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   8 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row   9 */
  {
    ((MR_Box) (MR_mkword(3, &top_level__mercury_compile_main_scalar_common_1[8]))),
    ((MR_Box) (MR_mkword(1, &top_level__mercury_compile_main_scalar_common_1[7])))
  },
  /* row  10 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error reading module name from standard input:"))
  },
};

static /* final */ const MR_Box top_level__mercury_compile_main_scalar_common_2[8][1] = {
  /* row   0 */
  {
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   1 */
  {
    (MR_Box) ((MR_Unsigned) 0U)
  },
  /* row   2 */
  {
    ((MR_Box) (((MR_Box) ((MR_String) ".ugly"))))
  },
  /* row   3 */
  {
    ((MR_Box) (((MR_Box) ((MR_String) ".dependency_graph"))))
  },
  /* row   4 */
  {
    ((MR_Box) (((MR_Box) ((MR_String) ".used"))))
  },
  /* row   5 */
  {
    ((MR_Box) (((MR_Box) ((MR_String) ".c"))))
  },
  /* row   6 */
  {
    ((MR_Box) (((MR_Box) ((MR_String) ".java"))))
  },
  /* row   7 */
  {
    ((MR_Box) (((MR_Box) ((MR_String) ".prof"))))
  },
};

static /* final */ const MR_Box top_level__mercury_compile_main_scalar_common_3[1][7] = {
  /* row   0 */
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

static /* final */ const MR_Box top_level__mercury_compile_main_scalar_common_4[1][4] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box top_level__mercury_compile_main_scalar_common_5[5][3] = {
  /* row   0 */
  {
    ((MR_Box) (&top_level__mercury_compile_main_scalar_common_4[0])),
    ((MR_Box) (top_level__mercury_compile_main__do_op_mode_query_6_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   1 */
  {
    ((MR_Box) (&top_level__mercury_compile_main_scalar_common_8[1])),
    ((MR_Box) (top_level__mercury_compile_main__read_augment_and_process_module_ok_15_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   2 */
  {
    ((MR_Box) (&top_level__mercury_compile_main_scalar_common_8[2])),
    ((MR_Box) (top_level__mercury_compile_main__read_augment_and_process_module_ok_15_p_0_5)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   3 */
  {
    ((MR_Box) (&top_level__mercury_compile_main_scalar_common_8[4])),
    ((MR_Box) (top_level__mercury_compile_main__maybe_prepare_for_intermodule_analysis_8_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   4 */
  {
    ((MR_Box) (&top_level__mercury_compile_main_scalar_common_8[4])),
    ((MR_Box) (top_level__mercury_compile_main__prepare_for_intermodule_analysis_8_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box top_level__mercury_compile_main_scalar_common_6[1][15] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 12)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&top_level__mercury_compile_main__maybe__pti_maybe_1__plain_libs__timestamp__type_ctor_info_timestamp_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_module_src_0)),
    ((MR_Box) (&libs__maybe_succeeded__libs__maybe_succeeded__type_ctor_info_maybe_succeeded_0)),
    ((MR_Box) (&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_maps_0)),
    ((MR_Box) (&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_maps_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box top_level__mercury_compile_main_scalar_common_7[2][10] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_module_src_0)),
    ((MR_Box) (&libs__maybe_succeeded__libs__maybe_succeeded__type_ctor_info_maybe_succeeded_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&libs__maybe_succeeded__libs__maybe_succeeded__type_ctor_info_maybe_succeeded_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box top_level__mercury_compile_main_scalar_common_8[5][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&top_level__mercury_compile_main__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_module_src_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_module_src_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_module_src_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0))
  },
  /* row   4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
};

static /* final */ const MR_Box top_level__mercury_compile_main_scalar_common_9[1][9] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&parse_tree__file_names__parse_tree__file_names__type_ctor_info_other_ext_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&top_level__mercury_compile_main__list__pti_list_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box top_level__mercury_compile_main_scalar_common_10[1][20] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 17)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&libs__op_mode__libs__op_mode__type_ctor_info_op_mode_augment_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&top_level__mercury_compile_main__maybe__pti_maybe_1__plain_libs__timestamp__type_ctor_info_timestamp_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&top_level__mercury_compile_main__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&top_level__mercury_compile_main____vpti_pred_4__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_list__ti_list_1builtin__type_ctor_info_string_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_module_src_0)),
    ((MR_Box) (&top_level__mercury_compile_main__list__pti_list_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&top_level__mercury_compile_main__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0)),
    ((MR_Box) (&top_level__mercury_compile_main__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0)),
    ((MR_Box) (&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_maps_0)),
    ((MR_Box) (&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_maps_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"
#include "make.build.mh"
#include "top_level.mercury_compile_main.mh"



static const MR_FA_PseudoTypeInfo_Struct1 top_level__mercury_compile_main__maybe__pti_maybe_1__plain_libs__timestamp__type_ctor_info_timestamp_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) (&libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 top_level__mercury_compile_main__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 top_level__mercury_compile_main__list__pti_list_1__plain_builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 top_level__mercury_compile_main__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)
  }
};

static const MR_FA_TypeInfo_Struct1 top_level__mercury_compile_main__list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
  }
};

static const MR_VA_PseudoTypeInfo_Struct4 top_level__mercury_compile_main____vpti_pred_4__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_list__ti_list_1builtin__type_ctor_info_string_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 4,
  {
    (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_PseudoTypeInfo) (&top_level__mercury_compile_main__list__ti_list_1builtin__type_ctor_info_string_0),
    (MR_PseudoTypeInfo) (&mercury__io__io__type_ctor_info_state_0),
    (MR_PseudoTypeInfo) (&mercury__io__io__type_ctor_info_state_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 top_level__mercury_compile_main__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0)
  }
};

static const MR_PseudoTypeInfo top_level__mercury_compile_main__top_level__mercury_compile_main__field_types_file_or_module_0_0[1] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
};

static const MR_DuFunctorDesc top_level__mercury_compile_main__top_level__mercury_compile_main__du_functor_desc_file_or_module_0_0 = {
  (MR_String) "fm_file",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  top_level__mercury_compile_main__top_level__mercury_compile_main__field_types_file_or_module_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo top_level__mercury_compile_main__top_level__mercury_compile_main__field_types_file_or_module_0_1[1] = {
  (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)
};

static const MR_DuFunctorDesc top_level__mercury_compile_main__top_level__mercury_compile_main__du_functor_desc_file_or_module_0_1 = {
  (MR_String) "fm_module",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  top_level__mercury_compile_main__top_level__mercury_compile_main__field_types_file_or_module_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr top_level__mercury_compile_main__top_level__mercury_compile_main__du_stag_ordered_file_or_module_0_0[1] = {
  &top_level__mercury_compile_main__top_level__mercury_compile_main__du_functor_desc_file_or_module_0_0
};

static const MR_DuFunctorDescPtr top_level__mercury_compile_main__top_level__mercury_compile_main__du_stag_ordered_file_or_module_0_1[1] = {
  &top_level__mercury_compile_main__top_level__mercury_compile_main__du_functor_desc_file_or_module_0_1
};

static const MR_DuPtagLayout top_level__mercury_compile_main__top_level__mercury_compile_main__du_ptag_ordered_file_or_module_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    top_level__mercury_compile_main__top_level__mercury_compile_main__du_stag_ordered_file_or_module_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    top_level__mercury_compile_main__top_level__mercury_compile_main__du_stag_ordered_file_or_module_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr top_level__mercury_compile_main__top_level__mercury_compile_main__du_name_ordered_file_or_module_0[2] = {
  &top_level__mercury_compile_main__top_level__mercury_compile_main__du_functor_desc_file_or_module_0_0,
  &top_level__mercury_compile_main__top_level__mercury_compile_main__du_functor_desc_file_or_module_0_1
};

static const MR_Integer top_level__mercury_compile_main__top_level__mercury_compile_main__functor_number_map_file_or_module_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct top_level__mercury_compile_main__top_level__mercury_compile_main__type_ctor_info_file_or_module_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (top_level__mercury_compile_main____Unify____file_or_module_0_0_10001)),
  ((MR_Box) (top_level__mercury_compile_main____Compare____file_or_module_0_0_10001)),
  (MR_String) "top_level.mercury_compile_main",
  (MR_String) "file_or_module",
  { top_level__mercury_compile_main__top_level__mercury_compile_main__du_name_ordered_file_or_module_0 },
  { top_level__mercury_compile_main__top_level__mercury_compile_main__du_ptag_ordered_file_or_module_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  top_level__mercury_compile_main__top_level__mercury_compile_main__functor_number_map_file_or_module_0,

};

static MR_bool MR_CALL 
top_level__mercury_compile_main__IntroducedFrom__pred__read_augment_and_process_module_ok__1416__1_2_p_0(
  MR_Word ModulesToRecompile_33,
  MR_Word LambdaHeadVar__1_47)
{
  MR_bool succeeded;
  MR_Word Var_48 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__1_47, (MR_Integer) 0))));

  succeeded = mercury__list__member_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (Var_48)), ModulesToRecompile_33);
  return succeeded;
}

static MR_bool MR_CALL 
top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_args__733__1_2_p_0(
  MR_Word InvokedByMake_28,
  MR_Word HeadVar__2_59)
{
  MR_bool succeeded = (InvokedByMake_28 == HeadVar__2_59);

  return succeeded;
}

static void MR_CALL 
top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_query__695__1_1_p_0_1(
  void * env_ptr_arg)
{
  struct top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_query__695__1_1_p_0_env_0_s * env_ptr = (struct top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_query__695__1_1_p_0_env_0_s *) (env_ptr_arg);

  switch ((env_ptr)->top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_query__695__1_1_p_0_env_0__DocUndoc_28) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      (env_ptr)->top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_query__695__1_1_p_0_env_0__DocStr_29 = (MR_String) "DOC";
      break;
    case (MR_Integer) 1:
      (env_ptr)->top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_query__695__1_1_p_0_env_0__DocStr_29 = (MR_String) "UNDOC";
      break;
  }
  (env_ptr)->top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_query__695__1_1_p_0_env_0__Var_64 = (MR_String) " ";
  (env_ptr)->top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_query__695__1_1_p_0_env_0__Var_66 = (MR_String) ".m\n";
  (env_ptr)->top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_query__695__1_1_p_0_env_0__Var_65 = mercury__string__f_43_43_2_f_0((env_ptr)->top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_query__695__1_1_p_0_env_0__ModuleName_27, (env_ptr)->top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_query__695__1_1_p_0_env_0__Var_66);
  (env_ptr)->top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_query__695__1_1_p_0_env_0__Var_63 = mercury__string__f_43_43_2_f_0((env_ptr)->top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_query__695__1_1_p_0_env_0__Var_64, (env_ptr)->top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_query__695__1_1_p_0_env_0__Var_65);
  *((env_ptr)->top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_query__695__1_1_p_0_env_0__LambdaHeadVar__1_62) = mercury__string__f_43_43_2_f_0((env_ptr)->top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_query__695__1_1_p_0_env_0__DocStr_29, (env_ptr)->top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_query__695__1_1_p_0_env_0__Var_63);
  ((env_ptr)->top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_query__695__1_1_p_0_env_0__cont)((env_ptr)->top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_query__695__1_1_p_0_env_0__cont_env_ptr);
}

static void MR_CALL 
top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_query__695__1_1_p_0(
  MR_String * LambdaHeadVar__1_62,
  MR_Cont cont,
  void * cont_env_ptr)
{
  struct top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_query__695__1_1_p_0_env_0_s env;

  (env).top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_query__695__1_1_p_0_env_0__LambdaHeadVar__1_62 = LambdaHeadVar__1_62;
  (env).top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_query__695__1_1_p_0_env_0__cont = cont;
  (env).top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_query__695__1_1_p_0_env_0__cont_env_ptr = cont_env_ptr;
  mercury__library__stdlib_module_doc_undoc_2_p_1(&(env).top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_query__695__1_1_p_0_env_0__ModuleName_27, &(env).top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_query__695__1_1_p_0_env_0__DocUndoc_28, top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_query__695__1_1_p_0_1, &env);
}

static void MR_CALL 
top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_query__688__1_4_p_0(
  MR_Word StdOutStream_12,
  MR_String HeadVar__2_87)
{
  mercury__io__print_line_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), StdOutStream_12, ((MR_Box) (HeadVar__2_87)));
}

static void MR_CALL 
top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_query__681__1_4_p_0(
  MR_Word StdOutStream_12,
  MR_String HeadVar__2_81)
{
  mercury__io__print_line_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), StdOutStream_12, ((MR_Box) (HeadVar__2_81)));
}

static void MR_CALL 
top_level__mercury_compile_main____Compare____file_or_module_0_0(
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
  if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0))
  {
    MR_String Var_16 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));

    if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 0))
    {
      MR_String ArgY1_5 = ((MR_String) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));

      mercury__private_builtin__builtin_compare_string_3_p_0(HeadVar__1_1, Var_16, ArgY1_5);
    }
    else
      *HeadVar__1_1 = (MR_Integer) 1;
  }
  else
  {
    MR_Word Var_17 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));

    if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 0))
      *HeadVar__1_1 = (MR_Integer) 2;
    else
    {
      MR_Word ArgY1_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));

      mdbcomp__sym_name____Compare____sym_name_0_0(HeadVar__1_1, Var_17, ArgY1_11);
    }
  }
}

static MR_bool MR_CALL 
top_level__mercury_compile_main____Unify____file_or_module_0_0(
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
  if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 0))
  {
    MR_String ArgX1_3 = ((MR_String) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_String ArgY1_4;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
    if (succeeded)
    {
      ArgY1_4 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
      succeeded = (strcmp(ArgX1_3, ArgY1_4) == 0);
    }
  }
  else
  {
    MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_6;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
    if (succeeded)
    {
      ArgY1_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ArgX1_5, ArgY1_6);
    }
  }
  return succeeded;
}

static void MR_CALL 
top_level__mercury_compile_main__gc_init_2_p_0(void)
{
{
#define MR_PROC_LABEL top_level__mercury_compile_main__gc_init_2_p_0


		{

#ifdef MR_BOEHM_GC
    /*
    ** Explicitly force the initial heap size to be at least 4 Mb.
    **
    ** This works around a bug in the Boehm collector (for versions up
    ** to at least 6.2) where the collector would sometimes abort with
    ** the message `unexpected mark stack overflow' (e.g. in grade hlc.gc
    ** on dec-alpha-osf3.2).
    **
    ** Doing this should also improve performance slightly by avoiding
    ** frequent garbage collection during start-up.
    */
    GC_expand_hp(4 * 1024 * 1024);
#endif


		;}
#undef MR_PROC_LABEL
}
}

static void MR_CALL 
top_level__mercury_compile_main__augment_and_process_module_17_p_0(
  MR_Word ProgressStream_18,
  MR_Word ErrorStream_19,
  MR_Word Globals_20,
  MR_Word OpModeAugment_21,
  MR_String SourceFileName_22,
  MR_Word MaybeTimestamp_23,
  MR_Word SourceFileModuleName_24,
  MR_Word NestedSubModules_25,
  MR_Word FindTimestampFiles_26,
  MR_Word ParseTreeModuleSrc_27,
  MR_Word * ExtraObjFiles_28,
  MR_Word STATE_VARIABLE_Specs_0_38,
  MR_Word * STATE_VARIABLE_Specs_39,
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_0_40,
  MR_Word * STATE_VARIABLE_HaveReadModuleMaps_41)
{
  MR_bool succeeded;
  MR_Word ModuleName_32;
  MR_Word MaybeTopModule_33;
  MR_Word Baggage_34;
  MR_Word AugCompUnit_35;
  MR_Word Errors_36;
  MR_Word STATE_VARIABLE_Specs_44_44;
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_45_45;
  MR_Word STATE_VARIABLE_Specs_47_47;
  MR_Word Var_48;
  MR_Word Var_49;

  parse_tree__check_module_interface__check_module_interface_for_no_exports_4_p_0(Globals_20, ParseTreeModuleSrc_27, STATE_VARIABLE_Specs_0_38, &STATE_VARIABLE_Specs_44_44);
  ModuleName_32 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_27, (MR_Integer) 0))));
  succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ModuleName_32, SourceFileModuleName_24);
  if (succeeded)
    {
      MaybeTopModule_33 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, MaybeTopModule_33, 0) = ((MR_Box) (NestedSubModules_25));
    }
  else
    MaybeTopModule_33 = (MR_Word) ((MR_Unsigned) 0U);
  parse_tree__grab_modules__grab_qual_imported_modules_augment_13_p_0(ProgressStream_18, Globals_20, SourceFileName_22, SourceFileModuleName_24, MaybeTimestamp_23, MaybeTopModule_33, ParseTreeModuleSrc_27, &Baggage_34, &AugCompUnit_35, STATE_VARIABLE_HaveReadModuleMaps_0_40, &STATE_VARIABLE_HaveReadModuleMaps_45_45);
  Errors_36 = ((MR_Word) ((MR_hl_field(0, Baggage_34, (MR_Integer) 6))));
  Var_48 = parse_tree__parse_error__get_read_module_specs_1_f_0(Errors_36);
  STATE_VARIABLE_Specs_47_47 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), Var_48, STATE_VARIABLE_Specs_44_44);
  Var_49 = ((MR_Word) ((MR_hl_field(0, Errors_36, (MR_Integer) 0))));
  succeeded = mercury__set__is_empty_1_p_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_fatal_read_module_error_0), Var_49);
  if (succeeded)
  {
    MR_Word Var_37;

    top_level__mercury_compile_main__process_augmented_module_16_p_0(ProgressStream_18, ErrorStream_19, Globals_20, OpModeAugment_21, Baggage_34, AugCompUnit_35, FindTimestampFiles_26, ExtraObjFiles_28, (MR_Word) ((MR_Unsigned) 0U), &Var_37, STATE_VARIABLE_Specs_47_47, STATE_VARIABLE_Specs_39, STATE_VARIABLE_HaveReadModuleMaps_45_45, STATE_VARIABLE_HaveReadModuleMaps_41);
  }
  else
  {
    *ExtraObjFiles_28 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_HaveReadModuleMaps_41 = STATE_VARIABLE_HaveReadModuleMaps_45_45;
    *STATE_VARIABLE_Specs_39 = STATE_VARIABLE_Specs_47_47;
  }
}

static void MR_CALL 
top_level__mercury_compile_main__process_augmented_module_16_p_0(
  MR_Word ProgressStream_17,
  MR_Word ErrorStream_18,
  MR_Word Globals0_19,
  MR_Word OpModeAugment_20,
  MR_Word Baggage_21,
  MR_Word AugCompUnit_22,
  MR_Word FindTimestampFiles_23,
  MR_Word * ExtraObjFiles_24,
  MR_Word STATE_VARIABLE_DumpInfo_0_54,
  MR_Word * STATE_VARIABLE_DumpInfo_55,
  MR_Word STATE_VARIABLE_Specs_0_56,
  MR_Word * STATE_VARIABLE_Specs_57,
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_0_58,
  MR_Word * STATE_VARIABLE_HaveReadModuleMaps_59)
{
  MR_bool succeeded;
  MR_Word Globals_29;
  MR_Word WriteDFile_30;
  MR_Word HLDS1_32;
  MR_Word QualInfo_33;
  MR_Word MaybeTimestampMap_34;
  MR_Word UndefTypes_35;
  MR_Word UndefModes_36;
  MR_Word PreHLDSErrors_37;
  MR_Word FrontEndErrors_38;
  MR_Word HLDS20_39;
  MR_Integer ExitStatus_40;
  MR_Word STATE_VARIABLE_DumpInfo_62_62;
  MR_Word STATE_VARIABLE_Specs_63_63;
  MR_Word STATE_VARIABLE_DumpInfo_66_66;
  MR_Word STATE_VARIABLE_Specs_67_67;
  MR_Word Var_70;

  switch (MR_tag((MR_Word) OpModeAugment_20)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(OpModeAugment_20)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            top_level__mercury_compile_main__disable_warning_options_2_p_0(Globals0_19, &Globals_29);
            WriteDFile_30 = (MR_Integer) 0;
          }
          break;
        case (MR_Integer) 1:
          {
            top_level__mercury_compile_main__disable_warning_options_2_p_0(Globals0_19, &Globals_29);
            WriteDFile_30 = (MR_Integer) 1;
          }
          break;
        case (MR_Integer) 2:
        case (MR_Integer) 3:
          {
            Globals_29 = Globals0_19;
            WriteDFile_30 = (MR_Integer) 1;
          }
          break;
        case (MR_Integer) 4:
        case (MR_Integer) 5:
          {
            Globals_29 = Globals0_19;
            WriteDFile_30 = (MR_Integer) 0;
          }
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        Globals_29 = Globals0_19;
        WriteDFile_30 = (MR_Integer) 1;
      }
      break;
  }
  top_level__mercury_compile_make_hlds__make_hlds_pass_21_p_0(ProgressStream_17, ErrorStream_18, Globals_29, OpModeAugment_20, WriteDFile_30, Baggage_21, AugCompUnit_22, &HLDS1_32, &QualInfo_33, &MaybeTimestampMap_34, &UndefTypes_35, &UndefModes_36, &PreHLDSErrors_37, STATE_VARIABLE_DumpInfo_0_54, &STATE_VARIABLE_DumpInfo_62_62, STATE_VARIABLE_Specs_0_56, &STATE_VARIABLE_Specs_63_63, STATE_VARIABLE_HaveReadModuleMaps_0_58, STATE_VARIABLE_HaveReadModuleMaps_59);
  top_level__mercury_compile_front_end__frontend_pass_16_p_0(ProgressStream_17, ErrorStream_18, OpModeAugment_20, QualInfo_33, UndefTypes_35, UndefModes_36, PreHLDSErrors_37, &FrontEndErrors_38, HLDS1_32, &HLDS20_39, STATE_VARIABLE_DumpInfo_62_62, &STATE_VARIABLE_DumpInfo_66_66, STATE_VARIABLE_Specs_63_63, &STATE_VARIABLE_Specs_67_67);
  mercury__io__get_exit_status_3_p_0(&ExitStatus_40);
  succeeded = (PreHLDSErrors_37 == (MR_Integer) 0);
  if (succeeded)
  {
    succeeded = (FrontEndErrors_38 == (MR_Integer) 0);
    if (succeeded)
    {
      Var_70 = parse_tree__error_util__contains_errors_2_f_0(Globals_29, STATE_VARIABLE_Specs_67_67);
      succeeded = (Var_70 == (MR_Integer) 0);
      if (succeeded)
        succeeded = (ExitStatus_40 == (MR_Integer) 0);
    }
  }
  if (succeeded)
  {
    MR_Word Verbose_41;
    MR_Word Stats_42;
    MR_Word HLDS21_43;

    libs__globals__lookup_bool_option_3_p_0(Globals_29, (MR_Integer) 72, &Verbose_41);
    libs__globals__lookup_bool_option_3_p_0(Globals_29, (MR_Integer) 82, &Stats_42);
    top_level__mercury_compile_main__maybe_write_dependency_graph_8_p_0(ProgressStream_17, ErrorStream_18, Verbose_41, Stats_42, HLDS20_39, &HLDS21_43);
    switch (MR_tag((MR_Word) OpModeAugment_20)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(OpModeAugment_20)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              *ExtraObjFiles_24 = (MR_Word) ((MR_Unsigned) 0U);
              *STATE_VARIABLE_DumpInfo_55 = STATE_VARIABLE_DumpInfo_66_66;
              *STATE_VARIABLE_Specs_57 = STATE_VARIABLE_Specs_67_67;
            }
            break;
          case (MR_Integer) 1:
            {
              top_level__mercury_compile_middle_passes__output_trans_opt_file_9_p_0(ProgressStream_17, ErrorStream_18, HLDS21_43, STATE_VARIABLE_Specs_67_67, STATE_VARIABLE_Specs_57, STATE_VARIABLE_DumpInfo_66_66, STATE_VARIABLE_DumpInfo_55);
              *ExtraObjFiles_24 = (MR_Word) ((MR_Unsigned) 0U);
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word HLDS22_51;

              top_level__mercury_compile_main__prepare_for_intermodule_analysis_8_p_0(ProgressStream_17, Globals_29, Verbose_41, Stats_42, HLDS21_43, &HLDS22_51);
              top_level__mercury_compile_middle_passes__output_analysis_file_8_p_0(ProgressStream_17, HLDS22_51, STATE_VARIABLE_Specs_67_67, STATE_VARIABLE_Specs_57, STATE_VARIABLE_DumpInfo_66_66, STATE_VARIABLE_DumpInfo_55);
              *ExtraObjFiles_24 = (MR_Word) ((MR_Unsigned) 0U);
            }
            break;
          case (MR_Integer) 3:
            {
              check_hlds__xml_documentation__xml_documentation_3_p_0(HLDS21_43);
              *ExtraObjFiles_24 = (MR_Word) ((MR_Unsigned) 0U);
              *STATE_VARIABLE_DumpInfo_55 = STATE_VARIABLE_DumpInfo_66_66;
              *STATE_VARIABLE_Specs_57 = STATE_VARIABLE_Specs_67_67;
            }
            break;
          case (MR_Integer) 4:
            {
              *ExtraObjFiles_24 = (MR_Word) ((MR_Unsigned) 0U);
              *STATE_VARIABLE_DumpInfo_55 = STATE_VARIABLE_DumpInfo_66_66;
              *STATE_VARIABLE_Specs_57 = STATE_VARIABLE_Specs_67_67;
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word UnusedArgs_44;

              libs__globals__lookup_bool_option_3_p_0(Globals_29, (MR_Integer) 14, &UnusedArgs_44);
              switch (UnusedArgs_44) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  *STATE_VARIABLE_Specs_57 = STATE_VARIABLE_Specs_67_67;
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word OptTuple_45;
                    MR_Word NoOptUnusedArgsOptTuple_46;
                    MR_Word NoOptUnusedArgsGlobals_47;
                    MR_Word HLDS21a_48;
                    MR_Integer Var_180;
                    MR_Integer Var_181;
                    MR_Integer Var_182;
                    MR_Integer Var_183;
                    MR_Integer Var_184;
                    MR_Integer Var_185;
                    MR_Integer Var_186;
                    MR_Integer Var_187;
                    MR_Integer Var_188;
                    MR_Integer Var_189;
                    MR_Integer Var_190;
                    MR_Integer Var_191;
                    MR_Integer Var_192;
                    MR_Integer Var_193;
                    MR_Integer Var_194;
                    MR_Integer Var_195;
                    MR_Integer Var_196;
                    MR_Integer Var_197;
                    MR_Integer Var_198;
                    MR_Integer Var_199;
                    MR_Integer Var_200;
                    MR_Integer Var_201;
                    MR_Integer Var_202;
                    MR_Integer Var_203;
                    MR_Integer Var_204;
                    MR_Integer Var_205;
                    MR_Integer Var_206;
                    MR_Integer Var_207;
                    MR_Integer Var_208;
                    MR_Integer Var_209;
                    MR_Integer Var_210;
                    MR_Integer Var_211;
                    MR_Integer Var_212;
                    MR_Integer Var_213;
                    MR_Integer Var_214;
                    MR_Integer Var_215;
                    MR_Integer Var_216;
                    MR_String Var_217;
                    MR_Unsigned packed_word_0;
                    MR_Unsigned packed_word_1;
                    MR_Unsigned packed_word_2;
                    MR_Word _UnusedArgsInfos_49;
                    MR_Word _HLDS22_50;

                    libs__globals__get_opt_tuple_2_p_0(Globals_29, &OptTuple_45);
                    packed_word_0 = (MR_Unsigned) ((MR_hl_field(0, OptTuple_45, (MR_Integer) 0)));
                    packed_word_1 = (MR_Unsigned) ((MR_hl_field(0, OptTuple_45, (MR_Integer) 1)));
                    packed_word_2 = (MR_Unsigned) ((MR_hl_field(0, OptTuple_45, (MR_Integer) 2)));
                    Var_180 = ((MR_Integer) ((MR_hl_field(0, OptTuple_45, (MR_Integer) 3))));
                    Var_181 = ((MR_Integer) ((MR_hl_field(0, OptTuple_45, (MR_Integer) 4))));
                    Var_182 = ((MR_Integer) ((MR_hl_field(0, OptTuple_45, (MR_Integer) 5))));
                    Var_183 = ((MR_Integer) ((MR_hl_field(0, OptTuple_45, (MR_Integer) 6))));
                    Var_184 = ((MR_Integer) ((MR_hl_field(0, OptTuple_45, (MR_Integer) 7))));
                    Var_185 = ((MR_Integer) ((MR_hl_field(0, OptTuple_45, (MR_Integer) 8))));
                    Var_186 = ((MR_Integer) ((MR_hl_field(0, OptTuple_45, (MR_Integer) 9))));
                    Var_187 = ((MR_Integer) ((MR_hl_field(0, OptTuple_45, (MR_Integer) 10))));
                    Var_188 = ((MR_Integer) ((MR_hl_field(0, OptTuple_45, (MR_Integer) 11))));
                    Var_189 = ((MR_Integer) ((MR_hl_field(0, OptTuple_45, (MR_Integer) 12))));
                    Var_190 = ((MR_Integer) ((MR_hl_field(0, OptTuple_45, (MR_Integer) 13))));
                    Var_191 = ((MR_Integer) ((MR_hl_field(0, OptTuple_45, (MR_Integer) 14))));
                    Var_192 = ((MR_Integer) ((MR_hl_field(0, OptTuple_45, (MR_Integer) 15))));
                    Var_193 = ((MR_Integer) ((MR_hl_field(0, OptTuple_45, (MR_Integer) 16))));
                    Var_194 = ((MR_Integer) ((MR_hl_field(0, OptTuple_45, (MR_Integer) 17))));
                    Var_195 = ((MR_Integer) ((MR_hl_field(0, OptTuple_45, (MR_Integer) 18))));
                    Var_196 = ((MR_Integer) ((MR_hl_field(0, OptTuple_45, (MR_Integer) 19))));
                    Var_197 = ((MR_Integer) ((MR_hl_field(0, OptTuple_45, (MR_Integer) 20))));
                    Var_198 = ((MR_Integer) ((MR_hl_field(0, OptTuple_45, (MR_Integer) 21))));
                    Var_199 = ((MR_Integer) ((MR_hl_field(0, OptTuple_45, (MR_Integer) 22))));
                    Var_200 = ((MR_Integer) ((MR_hl_field(0, OptTuple_45, (MR_Integer) 23))));
                    Var_201 = ((MR_Integer) ((MR_hl_field(0, OptTuple_45, (MR_Integer) 24))));
                    Var_202 = ((MR_Integer) ((MR_hl_field(0, OptTuple_45, (MR_Integer) 25))));
                    Var_203 = ((MR_Integer) ((MR_hl_field(0, OptTuple_45, (MR_Integer) 26))));
                    Var_204 = ((MR_Integer) ((MR_hl_field(0, OptTuple_45, (MR_Integer) 27))));
                    Var_205 = ((MR_Integer) ((MR_hl_field(0, OptTuple_45, (MR_Integer) 28))));
                    Var_206 = ((MR_Integer) ((MR_hl_field(0, OptTuple_45, (MR_Integer) 29))));
                    Var_207 = ((MR_Integer) ((MR_hl_field(0, OptTuple_45, (MR_Integer) 30))));
                    Var_208 = ((MR_Integer) ((MR_hl_field(0, OptTuple_45, (MR_Integer) 31))));
                    Var_209 = ((MR_Integer) ((MR_hl_field(0, OptTuple_45, (MR_Integer) 32))));
                    Var_210 = ((MR_Integer) ((MR_hl_field(0, OptTuple_45, (MR_Integer) 33))));
                    Var_211 = ((MR_Integer) ((MR_hl_field(0, OptTuple_45, (MR_Integer) 34))));
                    Var_212 = ((MR_Integer) ((MR_hl_field(0, OptTuple_45, (MR_Integer) 35))));
                    Var_213 = ((MR_Integer) ((MR_hl_field(0, OptTuple_45, (MR_Integer) 36))));
                    Var_214 = ((MR_Integer) ((MR_hl_field(0, OptTuple_45, (MR_Integer) 37))));
                    Var_215 = ((MR_Integer) ((MR_hl_field(0, OptTuple_45, (MR_Integer) 38))));
                    Var_216 = ((MR_Integer) ((MR_hl_field(0, OptTuple_45, (MR_Integer) 39))));
                    Var_217 = ((MR_String) ((MR_hl_field(0, OptTuple_45, (MR_Integer) 40))));
                    {
                      NoOptUnusedArgsOptTuple_46 = (MR_Word) MR_new_object(MR_Word, (41 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(0, NoOptUnusedArgsOptTuple_46, 0) = (MR_Box) ((((packed_word_0 & (~((MR_Unsigned) 64U)))) | (((MR_Unsigned) ((MR_Integer) 1) << 6))));
                      MR_hl_field(0, NoOptUnusedArgsOptTuple_46, 1) = (MR_Box) (packed_word_1);
                      MR_hl_field(0, NoOptUnusedArgsOptTuple_46, 2) = (MR_Box) (packed_word_2);
                      MR_hl_field(0, NoOptUnusedArgsOptTuple_46, 3) = ((MR_Box) (Var_180));
                      MR_hl_field(0, NoOptUnusedArgsOptTuple_46, 4) = ((MR_Box) (Var_181));
                      MR_hl_field(0, NoOptUnusedArgsOptTuple_46, 5) = ((MR_Box) (Var_182));
                      MR_hl_field(0, NoOptUnusedArgsOptTuple_46, 6) = ((MR_Box) (Var_183));
                      MR_hl_field(0, NoOptUnusedArgsOptTuple_46, 7) = ((MR_Box) (Var_184));
                      MR_hl_field(0, NoOptUnusedArgsOptTuple_46, 8) = ((MR_Box) (Var_185));
                      MR_hl_field(0, NoOptUnusedArgsOptTuple_46, 9) = ((MR_Box) (Var_186));
                      MR_hl_field(0, NoOptUnusedArgsOptTuple_46, 10) = ((MR_Box) (Var_187));
                      MR_hl_field(0, NoOptUnusedArgsOptTuple_46, 11) = ((MR_Box) (Var_188));
                      MR_hl_field(0, NoOptUnusedArgsOptTuple_46, 12) = ((MR_Box) (Var_189));
                      MR_hl_field(0, NoOptUnusedArgsOptTuple_46, 13) = ((MR_Box) (Var_190));
                      MR_hl_field(0, NoOptUnusedArgsOptTuple_46, 14) = ((MR_Box) (Var_191));
                      MR_hl_field(0, NoOptUnusedArgsOptTuple_46, 15) = ((MR_Box) (Var_192));
                      MR_hl_field(0, NoOptUnusedArgsOptTuple_46, 16) = ((MR_Box) (Var_193));
                      MR_hl_field(0, NoOptUnusedArgsOptTuple_46, 17) = ((MR_Box) (Var_194));
                      MR_hl_field(0, NoOptUnusedArgsOptTuple_46, 18) = ((MR_Box) (Var_195));
                      MR_hl_field(0, NoOptUnusedArgsOptTuple_46, 19) = ((MR_Box) (Var_196));
                      MR_hl_field(0, NoOptUnusedArgsOptTuple_46, 20) = ((MR_Box) (Var_197));
                      MR_hl_field(0, NoOptUnusedArgsOptTuple_46, 21) = ((MR_Box) (Var_198));
                      MR_hl_field(0, NoOptUnusedArgsOptTuple_46, 22) = ((MR_Box) (Var_199));
                      MR_hl_field(0, NoOptUnusedArgsOptTuple_46, 23) = ((MR_Box) (Var_200));
                      MR_hl_field(0, NoOptUnusedArgsOptTuple_46, 24) = ((MR_Box) (Var_201));
                      MR_hl_field(0, NoOptUnusedArgsOptTuple_46, 25) = ((MR_Box) (Var_202));
                      MR_hl_field(0, NoOptUnusedArgsOptTuple_46, 26) = ((MR_Box) (Var_203));
                      MR_hl_field(0, NoOptUnusedArgsOptTuple_46, 27) = ((MR_Box) (Var_204));
                      MR_hl_field(0, NoOptUnusedArgsOptTuple_46, 28) = ((MR_Box) (Var_205));
                      MR_hl_field(0, NoOptUnusedArgsOptTuple_46, 29) = ((MR_Box) (Var_206));
                      MR_hl_field(0, NoOptUnusedArgsOptTuple_46, 30) = ((MR_Box) (Var_207));
                      MR_hl_field(0, NoOptUnusedArgsOptTuple_46, 31) = ((MR_Box) (Var_208));
                      MR_hl_field(0, NoOptUnusedArgsOptTuple_46, 32) = ((MR_Box) (Var_209));
                      MR_hl_field(0, NoOptUnusedArgsOptTuple_46, 33) = ((MR_Box) (Var_210));
                      MR_hl_field(0, NoOptUnusedArgsOptTuple_46, 34) = ((MR_Box) (Var_211));
                      MR_hl_field(0, NoOptUnusedArgsOptTuple_46, 35) = ((MR_Box) (Var_212));
                      MR_hl_field(0, NoOptUnusedArgsOptTuple_46, 36) = ((MR_Box) (Var_213));
                      MR_hl_field(0, NoOptUnusedArgsOptTuple_46, 37) = ((MR_Box) (Var_214));
                      MR_hl_field(0, NoOptUnusedArgsOptTuple_46, 38) = ((MR_Box) (Var_215));
                      MR_hl_field(0, NoOptUnusedArgsOptTuple_46, 39) = ((MR_Box) (Var_216));
                      MR_hl_field(0, NoOptUnusedArgsOptTuple_46, 40) = ((MR_Box) (Var_217));
                    }
                    libs__globals__set_opt_tuple_3_p_0(NoOptUnusedArgsOptTuple_46, Globals_29, &NoOptUnusedArgsGlobals_47);
                    hlds__hlds_module__module_info_set_globals_3_p_0(NoOptUnusedArgsGlobals_47, HLDS21_43, &HLDS21a_48);
                    top_level__mercury_compile_middle_passes__maybe_unused_args_10_p_0(ProgressStream_17, Verbose_41, Stats_42, &_UnusedArgsInfos_49, HLDS21a_48, &_HLDS22_50, STATE_VARIABLE_Specs_67_67, STATE_VARIABLE_Specs_57);
                  }
                  break;
              }
              *ExtraObjFiles_24 = (MR_Word) ((MR_Unsigned) 0U);
              *STATE_VARIABLE_DumpInfo_55 = STATE_VARIABLE_DumpInfo_66_66;
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word OpModeCodeGen_52 = ((MR_Unsigned) ((MR_hl_field(1, OpModeAugment_20, (MR_Integer) 0))) & (MR_Integer) 3);
          MR_Word MaybeTopModule_53;
          MR_Word HLDS22_92;

          top_level__mercury_compile_main__maybe_prepare_for_intermodule_analysis_8_p_0(ProgressStream_17, Globals_29, Verbose_41, Stats_42, HLDS21_43, &HLDS22_92);
          MaybeTopModule_53 = ((MR_Word) ((MR_hl_field(0, Baggage_21, (MR_Integer) 3))));
          top_level__mercury_compile_main__after_front_end_passes_15_p_0(ProgressStream_17, ErrorStream_18, Globals_29, OpModeCodeGen_52, MaybeTopModule_53, FindTimestampFiles_23, MaybeTimestampMap_34, HLDS22_92, ExtraObjFiles_24, STATE_VARIABLE_Specs_67_67, STATE_VARIABLE_Specs_57, STATE_VARIABLE_DumpInfo_66_66, STATE_VARIABLE_DumpInfo_55);
        }
        break;
    }
  }
  else
  {
    succeeded = (ExitStatus_40 == (MR_Integer) 0);
    if (succeeded)
      mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
    *ExtraObjFiles_24 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Specs_57 = STATE_VARIABLE_Specs_67_67;
    *STATE_VARIABLE_DumpInfo_55 = STATE_VARIABLE_DumpInfo_66_66;
  }
}

static void MR_CALL 
top_level__mercury_compile_main__after_front_end_passes_15_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv3_HeadVar__5_5;

  parse_tree__module_cmds__touch_datestamp_7_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_String) (wrapper_arg_1)), &conv3_HeadVar__5_5);
  *wrapper_arg_2 = ((MR_Box) (conv3_HeadVar__5_5));
}

static void MR_CALL 
top_level__mercury_compile_main__after_front_end_passes_15_p_0(
  MR_Word ProgressStream_16,
  MR_Word ErrorStream_17,
  MR_Word Globals_18,
  MR_Word OpModeCodeGen_19,
  MR_Word MaybeTopModule_20,
  MR_Word FindTimestampFiles_21,
  MR_Word MaybeTimestampMap_22,
  MR_Word STATE_VARIABLE_HLDS_0_59,
  MR_Word * ExtraObjFiles_24,
  MR_Word STATE_VARIABLE_Specs_0_60,
  MR_Word * STATE_VARIABLE_Specs_61,
  MR_Word STATE_VARIABLE_DumpInfo_0_62,
  MR_Word * STATE_VARIABLE_DumpInfo_63)
{
  MR_bool succeeded;
  MR_Word Verbose_28;
  MR_Word Stats_29;
  MR_Word HighLevelCode_30;
  MR_Word Target_31;
  MR_Word ModuleName_32;
  MR_String UsageFileName_33;
  MR_Word FrontEndErrors_35;
  MR_Integer ExitStatus_36;
  MR_Word STATE_VARIABLE_HLDS_68_68;
  MR_Word STATE_VARIABLE_HLDS_70_70;
  MR_Word STATE_VARIABLE_DumpInfo_71_71;
  MR_Word STATE_VARIABLE_Specs_72_72;
  MR_Word Var_34;

  libs__globals__lookup_bool_option_3_p_0(Globals_18, (MR_Integer) 72, &Verbose_28);
  libs__globals__lookup_bool_option_3_p_0(Globals_18, (MR_Integer) 82, &Stats_29);
  top_level__mercury_compile_main__maybe_output_prof_call_graph_8_p_0(ProgressStream_16, ErrorStream_17, Verbose_28, Stats_29, STATE_VARIABLE_HLDS_0_59, &STATE_VARIABLE_HLDS_68_68);
  top_level__mercury_compile_middle_passes__middle_pass_10_p_0(ProgressStream_16, ErrorStream_17, STATE_VARIABLE_HLDS_68_68, &STATE_VARIABLE_HLDS_70_70, STATE_VARIABLE_DumpInfo_0_62, &STATE_VARIABLE_DumpInfo_71_71, STATE_VARIABLE_Specs_0_60, &STATE_VARIABLE_Specs_72_72);
  libs__globals__lookup_bool_option_3_p_0(Globals_18, (MR_Integer) 308, &HighLevelCode_30);
  libs__globals__get_target_2_p_0(Globals_18, &Target_31);
  hlds__hlds_module__module_info_get_name_2_p_0(STATE_VARIABLE_HLDS_70_70, &ModuleName_32);
  parse_tree__file_names__module_name_to_file_name_8_p_0(Globals_18, (MR_String) "predicate \140top_level.mercury_compile_main.after_front_end_passes\'/15", (MR_Integer) 1, (MR_Word) (MR_mkword(1, &top_level__mercury_compile_main_scalar_common_2[4])), ModuleName_32, &UsageFileName_33);
  mercury__io__file__remove_file_4_p_0(UsageFileName_33, &Var_34);
  FrontEndErrors_35 = parse_tree__error_util__contains_errors_or_warnings_treated_as_errors_2_f_0(Globals_18, STATE_VARIABLE_Specs_72_72);
  mercury__io__get_exit_status_3_p_0(&ExitStatus_36);
  succeeded = (FrontEndErrors_35 == (MR_Integer) 0);
  if (succeeded)
    succeeded = (ExitStatus_36 == (MR_Integer) 0);
  if (succeeded)
  {
    MR_Word Succeeded_40;
    MR_Word STATE_VARIABLE_HLDS_117_117;

    switch (Target_31) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word ExportDecls_44;

          backend_libs__export__get_foreign_export_decls_2_p_0(STATE_VARIABLE_HLDS_70_70, &ExportDecls_44);
          backend_libs__export__produce_header_file_5_p_0(STATE_VARIABLE_HLDS_70_70, ExportDecls_44, ModuleName_32);
          switch (HighLevelCode_30) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word GlobalData_51;
                MR_Word LLDS_52;

                top_level__mercury_compile_llds_back_end__llds_backend_pass_10_p_0(ProgressStream_16, ErrorStream_17, STATE_VARIABLE_HLDS_70_70, &STATE_VARIABLE_HLDS_117_117, &GlobalData_51, &LLDS_52, STATE_VARIABLE_DumpInfo_71_71, STATE_VARIABLE_DumpInfo_63);
                top_level__mercury_compile_llds_back_end__llds_output_pass_11_p_0(ProgressStream_16, ErrorStream_17, OpModeCodeGen_19, STATE_VARIABLE_HLDS_117_117, GlobalData_51, LLDS_52, ModuleName_32, &Succeeded_40, ExtraObjFiles_24);
                *STATE_VARIABLE_Specs_61 = STATE_VARIABLE_Specs_72_72;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word MLDS_129;
                MR_Word NewSpecs_130;
                MR_Word TargetCodeSucceeded_131;
                MR_Word Var_45;

                top_level__mercury_compile_mlds_back_end__mlds_backend_10_p_0(ProgressStream_16, ErrorStream_17, STATE_VARIABLE_HLDS_70_70, &Var_45, &MLDS_129, &NewSpecs_130, STATE_VARIABLE_DumpInfo_71_71, STATE_VARIABLE_DumpInfo_63);
                *STATE_VARIABLE_Specs_61 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), NewSpecs_130, STATE_VARIABLE_Specs_72_72);
                top_level__mercury_compile_mlds_back_end__mlds_to_high_level_c_6_p_0(ProgressStream_16, Globals_18, MLDS_129, &TargetCodeSucceeded_131);
                switch (OpModeCodeGen_19) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 1:
                  case (MR_Integer) 2:
                    switch (TargetCodeSucceeded_131) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        Succeeded_40 = (MR_Integer) 0;
                        break;
                      case (MR_Integer) 1:
                        {
                          MR_String C_File_46;
                          MR_Word TargetType_47;
                          MR_Word PIC_48;
                          MR_Word ObjOtherExt_49;
                          MR_String O_File_50;
                          MR_Word Var_113;

                          parse_tree__file_names__module_name_to_file_name_8_p_0(Globals_18, (MR_String) "predicate \140top_level.mercury_compile_main.after_front_end_passes\'/15", (MR_Integer) 1, (MR_Word) (MR_mkword(1, &top_level__mercury_compile_main_scalar_common_2[5])), ModuleName_32, &C_File_46);
                          backend_libs__compile_target_code__get_linked_target_type_2_p_0(Globals_18, &TargetType_47);
                          backend_libs__compile_target_code__get_object_code_type_3_p_0(Globals_18, TargetType_47, &PIC_48);
                          backend_libs__compile_target_code__pic_object_file_extension_3_p_0(Globals_18, PIC_48, &ObjOtherExt_49);
                          {
                            Var_113 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(1, Var_113, 0) = ((MR_Box) (ObjOtherExt_49));
                          }
                          parse_tree__file_names__module_name_to_file_name_8_p_0(Globals_18, (MR_String) "predicate \140top_level.mercury_compile_main.after_front_end_passes\'/15", (MR_Integer) 0, Var_113, ModuleName_32, &O_File_50);
                          backend_libs__compile_target_code__do_compile_c_file_9_p_0(Globals_18, ProgressStream_16, ErrorStream_17, PIC_48, C_File_46, O_File_50, &Succeeded_40);
                          parse_tree__module_cmds__maybe_set_exit_status_3_p_0(Succeeded_40);
                        }
                        break;
                    }
                    break;
                  case (MR_Integer) 0:
                    Succeeded_40 = TargetCodeSucceeded_131;
                    break;
                }
                *ExtraObjFiles_24 = (MR_Word) ((MR_Unsigned) 0U);
                STATE_VARIABLE_HLDS_117_117 = STATE_VARIABLE_HLDS_70_70;
              }
              break;
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word MLDS_38;
          MR_Word NewSpecs_39;
          MR_Word Var_37;

          top_level__mercury_compile_mlds_back_end__mlds_backend_10_p_0(ProgressStream_16, ErrorStream_17, STATE_VARIABLE_HLDS_70_70, &Var_37, &MLDS_38, &NewSpecs_39, STATE_VARIABLE_DumpInfo_71_71, STATE_VARIABLE_DumpInfo_63);
          *STATE_VARIABLE_Specs_61 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), NewSpecs_39, STATE_VARIABLE_Specs_72_72);
          top_level__mercury_compile_mlds_back_end__mlds_to_csharp_6_p_0(ProgressStream_16, STATE_VARIABLE_HLDS_70_70, MLDS_38, &Succeeded_40);
          *ExtraObjFiles_24 = (MR_Word) ((MR_Unsigned) 0U);
          STATE_VARIABLE_HLDS_117_117 = STATE_VARIABLE_HLDS_70_70;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word TargetCodeSucceeded_42;
          MR_Word MLDS_127;
          MR_Word NewSpecs_128;
          MR_Word Var_41;

          top_level__mercury_compile_mlds_back_end__mlds_backend_10_p_0(ProgressStream_16, ErrorStream_17, STATE_VARIABLE_HLDS_70_70, &Var_41, &MLDS_127, &NewSpecs_128, STATE_VARIABLE_DumpInfo_71_71, STATE_VARIABLE_DumpInfo_63);
          *STATE_VARIABLE_Specs_61 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), NewSpecs_128, STATE_VARIABLE_Specs_72_72);
          top_level__mercury_compile_mlds_back_end__mlds_to_java_6_p_0(ProgressStream_16, STATE_VARIABLE_HLDS_70_70, MLDS_127, &TargetCodeSucceeded_42);
          switch (OpModeCodeGen_19) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
            case (MR_Integer) 2:
              switch (TargetCodeSucceeded_42) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  Succeeded_40 = (MR_Integer) 0;
                  break;
                case (MR_Integer) 1:
                  {
                    MR_String JavaFile_43;

                    parse_tree__file_names__module_name_to_file_name_8_p_0(Globals_18, (MR_String) "predicate \140top_level.mercury_compile_main.after_front_end_passes\'/15", (MR_Integer) 1, (MR_Word) (MR_mkword(1, &top_level__mercury_compile_main_scalar_common_2[6])), ModuleName_32, &JavaFile_43);
                    backend_libs__compile_target_code__compile_java_files_8_p_0(Globals_18, ProgressStream_16, ErrorStream_17, JavaFile_43, (MR_Word) ((MR_Unsigned) 0U), &Succeeded_40);
                    parse_tree__module_cmds__maybe_set_exit_status_3_p_0(Succeeded_40);
                  }
                  break;
              }
              break;
            case (MR_Integer) 0:
              Succeeded_40 = TargetCodeSucceeded_42;
              break;
          }
          *ExtraObjFiles_24 = (MR_Word) ((MR_Unsigned) 0U);
          STATE_VARIABLE_HLDS_117_117 = STATE_VARIABLE_HLDS_70_70;
        }
        break;
    }
    switch (Succeeded_40) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word MaybeRecompInfo_53;
          MR_Word TimestampFiles_57;
          MR_Word Var_123;
          MR_Word RecompInfo_54;
          MR_Word TimestampMap_55;
          void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);
          MR_Box conv2_TimestampFiles_57;
          MR_Box conv1_STATE_VARIABLE_IO_122_122;
          MR_Word _Succeededs_58;
          MR_Box conv4_STATE_VARIABLE_IO_65;

          hlds__hlds_module__module_info_get_maybe_recompilation_info_2_p_0(STATE_VARIABLE_HLDS_117_117, &MaybeRecompInfo_53);
          succeeded = (MaybeRecompInfo_53 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            RecompInfo_54 = ((MR_Word) ((MR_hl_field(1, MaybeRecompInfo_53, (MR_Integer) 0))));
            succeeded = (MaybeTimestampMap_22 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
              TimestampMap_55 = ((MR_Word) ((MR_hl_field(1, MaybeTimestampMap_22, (MR_Integer) 0))));
          }
          if (succeeded)
          {
            MR_Word UsedFileContents_56;

            recompilation__usage__construct_used_file_contents_5_p_0(STATE_VARIABLE_HLDS_117_117, RecompInfo_54, MaybeTopModule_20, TimestampMap_55, &UsedFileContents_56);
            recompilation__used_file__write_usage_file_4_p_0(STATE_VARIABLE_HLDS_117_117, UsedFileContents_56);
          }
          func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(0, FindTimestampFiles_21, (MR_Integer) 1))));
          func_0(((MR_Box) (FindTimestampFiles_21)), ((MR_Box) (ModuleName_32)), &conv2_TimestampFiles_57, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_122_122);
          TimestampFiles_57 = ((MR_Word) (conv2_TimestampFiles_57));
          {
            Var_123 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_123, 0) = ((MR_Box) (&top_level__mercury_compile_main_scalar_common_7[1]));
            MR_hl_field(0, Var_123, 1) = ((MR_Box) (top_level__mercury_compile_main__after_front_end_passes_15_p_0_1));
            MR_hl_field(0, Var_123, 2) = ((MR_Box) ((MR_Integer) 3));
            MR_hl_field(0, Var_123, 3) = ((MR_Box) (Globals_18));
            MR_hl_field(0, Var_123, 4) = ((MR_Box) (ProgressStream_16));
            MR_hl_field(0, Var_123, 5) = ((MR_Box) (ErrorStream_17));
          }
          mercury__list__map_foldl_5_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&libs__maybe_succeeded__libs__maybe_succeeded__type_ctor_info_maybe_succeeded_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_123, TimestampFiles_57, &_Succeededs_58, ((MR_Box) ((MR_Integer) 0)), &conv4_STATE_VARIABLE_IO_65);
        }
        break;
    }
  }
  else
  {
    succeeded = (ExitStatus_36 == (MR_Integer) 0);
    if (succeeded)
      mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
    *ExtraObjFiles_24 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_DumpInfo_63 = STATE_VARIABLE_DumpInfo_71_71;
    *STATE_VARIABLE_Specs_61 = STATE_VARIABLE_Specs_72_72;
  }
}

static void MR_CALL 
top_level__mercury_compile_main__maybe_output_prof_call_graph_8_p_0(
  MR_Word ProgressStream_9,
  MR_Word ErrorStream_10,
  MR_Word Verbose_11,
  MR_Word Stats_12,
  MR_Word STATE_VARIABLE_HLDS_0_24,
  MR_Word * STATE_VARIABLE_HLDS_25)
{
  MR_bool succeeded;
  MR_Word Globals_15;
  MR_Word ProfileCalls_16;
  MR_Word ProfileTime_17;

  hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_HLDS_0_24, &Globals_15);
  libs__globals__lookup_bool_option_3_p_0(Globals_15, (MR_Integer) 241, &ProfileCalls_16);
  libs__globals__lookup_bool_option_3_p_0(Globals_15, (MR_Integer) 242, &ProfileTime_17);
  succeeded = (ProfileCalls_16 == (MR_Integer) 1);
  if (!(succeeded))
    succeeded = (ProfileTime_17 == (MR_Integer) 1);
  if (succeeded)
  {
    MR_Word ModuleName_18;
    MR_String ProfFileName_19;
    MR_Word Res_20;

    libs__file_util__maybe_write_string_5_p_0(ProgressStream_9, Verbose_11, (MR_String) "% Outputting profiling call graph...");
    libs__file_util__maybe_flush_output_4_p_0(ProgressStream_9, Verbose_11);
    hlds__hlds_module__module_info_get_name_2_p_0(STATE_VARIABLE_HLDS_0_24, &ModuleName_18);
    parse_tree__file_names__module_name_to_file_name_8_p_0(Globals_15, (MR_String) "predicate \140top_level.mercury_compile_main.maybe_output_prof_call_graph\'/8", (MR_Integer) 0, (MR_Word) (MR_mkword(1, &top_level__mercury_compile_main_scalar_common_2[7])), ModuleName_18, &ProfFileName_19);
    mercury__io__open_output_4_p_0(ProfFileName_19, &Res_20);
    if (((MR_tag((MR_Word) Res_20)) == (MR_Integer) 1))
    {
      MR_Word IOError_22 = ((MR_Word) ((MR_hl_field(1, Res_20, (MR_Integer) 0))));
      MR_String ErrorMsg_23;
      MR_String Var_44;

      Var_44 = mercury__io__error_message_1_f_0(IOError_22);
      ErrorMsg_23 = mercury__string__f_43_43_2_f_0((MR_String) "unable to write profiling static call graph: ", Var_44);
      libs__file_util__report_error_4_p_0(ErrorStream_10, ErrorMsg_23);
      *STATE_VARIABLE_HLDS_25 = STATE_VARIABLE_HLDS_0_24;
    }
    else
    {
      MR_Word FileStream_21 = ((MR_Word) ((MR_hl_field(0, Res_20, (MR_Integer) 0))));

      hlds__hlds_dependency_graph__write_prof_dependency_graph_5_p_0(FileStream_21, STATE_VARIABLE_HLDS_0_24, STATE_VARIABLE_HLDS_25);
      mercury__io__close_output_3_p_0(FileStream_21);
    }
    libs__file_util__maybe_write_string_5_p_0(ProgressStream_9, Verbose_11, (MR_String) " done.\n");
    libs__file_util__maybe_report_stats_4_p_0(ProgressStream_9, Stats_12);
  }
  else
    *STATE_VARIABLE_HLDS_25 = STATE_VARIABLE_HLDS_0_24;
}

static MR_Box MR_CALL 
top_level__mercury_compile_main__prepare_for_intermodule_analysis_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__2_2;

  conv0_HeadVar__2_2 = mdbcomp__sym_name__string_to_sym_name_1_f_0(((MR_String) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
  return wrapper_arg_2;
}

static void MR_CALL 
top_level__mercury_compile_main__prepare_for_intermodule_analysis_8_p_0(
  MR_Word ProgressStream_9,
  MR_Word Globals_10,
  MR_Word Verbose_11,
  MR_Word Stats_12,
  MR_Word STATE_VARIABLE_HLDS_0_21,
  MR_Word * STATE_VARIABLE_HLDS_22)
{
  MR_Word ModuleNames_15;
  MR_Word LocalModulesList_16;
  MR_Word SymNames_17;
  MR_Word LocalModuleNames_18;
  MR_Word AnalysisInfo0_19;
  MR_Word AnalysisInfo_20;

  libs__file_util__maybe_write_string_5_p_0(ProgressStream_9, Verbose_11, (MR_String) "% Preparing for intermodule analysis...\n");
  hlds__hlds_module__module_info_get_all_deps_2_p_0(STATE_VARIABLE_HLDS_0_21, &ModuleNames_15);
  libs__globals__lookup_accumulating_option_3_p_0(Globals_10, (MR_Integer) 705, &LocalModulesList_16);
  SymNames_17 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&top_level__mercury_compile_main_scalar_common_5[4]), LocalModulesList_16);
  LocalModuleNames_18 = mercury__set__list_to_set_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), SymNames_17);
  hlds__hlds_module__module_info_get_analysis_info_2_p_0(STATE_VARIABLE_HLDS_0_21, &AnalysisInfo0_19);
  analysis__prepare_intermodule_analysis_7_p_0(Globals_10, ModuleNames_15, LocalModuleNames_18, AnalysisInfo0_19, &AnalysisInfo_20);
  hlds__hlds_module__module_info_set_analysis_info_3_p_0(AnalysisInfo_20, STATE_VARIABLE_HLDS_0_21, STATE_VARIABLE_HLDS_22);
  libs__file_util__maybe_write_string_5_p_0(ProgressStream_9, Verbose_11, (MR_String) "% done.\n");
  libs__file_util__maybe_report_stats_4_p_0(ProgressStream_9, Stats_12);
}

static MR_Box MR_CALL 
top_level__mercury_compile_main__maybe_prepare_for_intermodule_analysis_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__2_2;

  conv0_HeadVar__2_2 = mdbcomp__sym_name__string_to_sym_name_1_f_0(((MR_String) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
  return wrapper_arg_2;
}

static void MR_CALL 
top_level__mercury_compile_main__maybe_prepare_for_intermodule_analysis_8_p_0(
  MR_Word ProgressStream_9,
  MR_Word Globals_10,
  MR_Word Verbose_11,
  MR_Word Stats_12,
  MR_Word STATE_VARIABLE_HLDS_0_16,
  MR_Word * STATE_VARIABLE_HLDS_17)
{
  MR_Word IntermodAnalysis_15;

  libs__globals__lookup_bool_option_3_p_0(Globals_10, (MR_Integer) 503, &IntermodAnalysis_15);
  switch (IntermodAnalysis_15) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *STATE_VARIABLE_HLDS_17 = STATE_VARIABLE_HLDS_0_16;
      break;
    case (MR_Integer) 1:
      {
        MR_Word ModuleNames_21;
        MR_Word LocalModulesList_22;
        MR_Word SymNames_23;
        MR_Word LocalModuleNames_24;
        MR_Word AnalysisInfo0_25;
        MR_Word AnalysisInfo_26;

        libs__file_util__maybe_write_string_5_p_0(ProgressStream_9, Verbose_11, (MR_String) "% Preparing for intermodule analysis...\n");
        hlds__hlds_module__module_info_get_all_deps_2_p_0(STATE_VARIABLE_HLDS_0_16, &ModuleNames_21);
        libs__globals__lookup_accumulating_option_3_p_0(Globals_10, (MR_Integer) 705, &LocalModulesList_22);
        SymNames_23 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&top_level__mercury_compile_main_scalar_common_5[3]), LocalModulesList_22);
        LocalModuleNames_24 = mercury__set__list_to_set_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), SymNames_23);
        hlds__hlds_module__module_info_get_analysis_info_2_p_0(STATE_VARIABLE_HLDS_0_16, &AnalysisInfo0_25);
        analysis__prepare_intermodule_analysis_7_p_0(Globals_10, ModuleNames_21, LocalModuleNames_24, AnalysisInfo0_25, &AnalysisInfo_26);
        hlds__hlds_module__module_info_set_analysis_info_3_p_0(AnalysisInfo_26, STATE_VARIABLE_HLDS_0_16, STATE_VARIABLE_HLDS_17);
        libs__file_util__maybe_write_string_5_p_0(ProgressStream_9, Verbose_11, (MR_String) "% done.\n");
        libs__file_util__maybe_report_stats_4_p_0(ProgressStream_9, Stats_12);
      }
      break;
  }
}

static void MR_CALL 
top_level__mercury_compile_main__maybe_write_dependency_graph_8_p_0(
  MR_Word ProgressStream_9,
  MR_Word ErrorStream_10,
  MR_Word Verbose_11,
  MR_Word Stats_12,
  MR_Word STATE_VARIABLE_HLDS_0_23,
  MR_Word * STATE_VARIABLE_HLDS_24)
{
  MR_Word Globals_15;
  MR_Word ShowDepGraph_16;

  hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_HLDS_0_23, &Globals_15);
  libs__globals__lookup_bool_option_3_p_0(Globals_15, (MR_Integer) 188, &ShowDepGraph_16);
  switch (ShowDepGraph_16) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *STATE_VARIABLE_HLDS_24 = STATE_VARIABLE_HLDS_0_23;
      break;
    case (MR_Integer) 1:
      {
        MR_Word ModuleName_17;
        MR_String FileName_18;
        MR_Word Res_19;

        libs__file_util__maybe_write_string_5_p_0(ProgressStream_9, Verbose_11, (MR_String) "% Writing dependency graph...");
        hlds__hlds_module__module_info_get_name_2_p_0(STATE_VARIABLE_HLDS_0_23, &ModuleName_17);
        parse_tree__file_names__module_name_to_file_name_8_p_0(Globals_15, (MR_String) "predicate \140top_level.mercury_compile_main.maybe_write_dependency_graph\'/8", (MR_Integer) 0, (MR_Word) (MR_mkword(1, &top_level__mercury_compile_main_scalar_common_2[3])), ModuleName_17, &FileName_18);
        mercury__io__open_output_4_p_0(FileName_18, &Res_19);
        if (((MR_tag((MR_Word) Res_19)) == (MR_Integer) 1))
        {
          MR_Word IOError_21 = ((MR_Word) ((MR_hl_field(1, Res_19, (MR_Integer) 0))));
          MR_String ErrorMsg_22;
          MR_String Var_43;

          Var_43 = mercury__io__error_message_1_f_0(IOError_21);
          ErrorMsg_22 = mercury__string__f_43_43_2_f_0((MR_String) "unable to write dependency graph: ", Var_43);
          libs__file_util__report_error_4_p_0(ErrorStream_10, ErrorMsg_22);
          *STATE_VARIABLE_HLDS_24 = STATE_VARIABLE_HLDS_0_23;
        }
        else
        {
          MR_Word FileStream_20 = ((MR_Word) ((MR_hl_field(0, Res_19, (MR_Integer) 0))));

          hlds__hlds_dependency_graph__write_dependency_graph_5_p_0(FileStream_20, STATE_VARIABLE_HLDS_0_23, STATE_VARIABLE_HLDS_24);
          mercury__io__close_output_3_p_0(FileStream_20);
          libs__file_util__maybe_write_string_5_p_0(ProgressStream_9, Verbose_11, (MR_String) " done.\n");
        }
        libs__file_util__maybe_report_stats_4_p_0(ProgressStream_9, Stats_12);
      }
      break;
  }
}

static void MR_CALL 
top_level__mercury_compile_main__disable_warning_options_2_p_0(
  MR_Word Globals0_3,
  MR_Word * Globals_4)
{
  MR_Word OptionTable0_5;
  MR_Word OptionTable1_6;
  MR_Word OptionTable_7;
  MR_Word Var_8;
  MR_Word Var_11;

  libs__globals__get_options_2_p_0(Globals0_3, &OptionTable0_5);
  Var_8 = libs__options__style_warning_options_0_f_0();
  libs__options__set_all_options_to_4_p_0(Var_8, (MR_Word) (MR_mkword(1, &top_level__mercury_compile_main_scalar_common_2[1])), OptionTable0_5, &OptionTable1_6);
  Var_11 = libs__options__non_style_warning_options_0_f_0();
  libs__options__set_all_options_to_4_p_0(Var_11, (MR_Word) (MR_mkword(1, &top_level__mercury_compile_main_scalar_common_2[1])), OptionTable1_6, &OptionTable_7);
  libs__globals__set_options_3_p_0(OptionTable_7, Globals0_3, Globals_4);
}

static void MR_CALL 
top_level__mercury_compile_main__module_to_link_2_p_0(
  MR_Word ParseTreeModuleSrc_3,
  MR_String * ModuleToLink_4)
{
  MR_Word ModuleName_5 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_3, (MR_Integer) 0))));

  parse_tree__file_names__module_name_to_file_name_stem_2_p_0(ModuleName_5, ModuleToLink_4);
}

static void MR_CALL 
top_level__mercury_compile_main__find_timestamp_files_2_6_p_0(
  MR_Word Globals_7,
  MR_Word TimestampOtherExt_8,
  MR_Word ModuleName_9,
  MR_Word * TimestampFiles_10)
{
  MR_String FileName_12;
  MR_Word Var_17;

  {
    Var_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_17, 0) = ((MR_Box) (TimestampOtherExt_8));
  }
  parse_tree__file_names__module_name_to_file_name_8_p_0(Globals_7, (MR_String) "predicate \140top_level.mercury_compile_main.find_timestamp_files_2\'/6", (MR_Integer) 0, Var_17, ModuleName_9, &FileName_12);
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *TimestampFiles_10 = base;
    MR_hl_field(1, base, 0) = ((MR_Box) (FileName_12));
    MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
}

static void MR_CALL 
top_level__mercury_compile_main__usual_find_target_files_6_p_0(
  MR_Word Globals_7,
  MR_Word TargetOtherExt_8,
  MR_Word ModuleName_9,
  MR_Word * TargetFiles_10)
{
  MR_String FileName_12;
  MR_Word Var_17;

  {
    Var_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_17, 0) = ((MR_Box) (TargetOtherExt_8));
  }
  parse_tree__file_names__module_name_to_file_name_8_p_0(Globals_7, (MR_String) "predicate \140top_level.mercury_compile_main.usual_find_target_files\'/6", (MR_Integer) 0, Var_17, ModuleName_9, &FileName_12);
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *TargetFiles_10 = base;
    MR_hl_field(1, base, 0) = ((MR_Box) (FileName_12));
    MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
}

void MR_CALL 
top_level__mercury_compile_main__main_for_make_4_p_0(
  MR_Word Globals_5,
  MR_Word Args_6)
{
  MR_Word EnvVarMap_9;
  MR_Word Variables_10;
  MR_Word ErrorStream_14;

  mercury__io__environment__get_environment_var_map_3_p_0(&EnvVarMap_9);
  Variables_10 = make__options_file__options_variables_init_1_f_0(EnvVarMap_9);
  mercury__io__output_stream_3_p_0(&ErrorStream_14);
  top_level__mercury_compile_main__main_after_setup_9_p_0(ErrorStream_14, ErrorStream_14, Globals_5, (MR_Word) ((MR_Unsigned) 0U), Variables_10, (MR_Word) ((MR_Unsigned) 0U), Args_6);
}

void MR_CALL 
top_level__mercury_compile_main__real_main_2_p_0(void)
{
  MR_bool succeeded;
  MR_Word ErrorStream_6;
  MR_Word CmdLineArgs_8;
  MR_Word Res_10;
  MR_Word Var_7;

{
#define MR_PROC_LABEL top_level__mercury_compile_main__real_main_2_p_0


		{

#ifdef MR_BOEHM_GC
    /*
    ** Explicitly force the initial heap size to be at least 4 Mb.
    **
    ** This works around a bug in the Boehm collector (for versions up
    ** to at least 6.2) where the collector would sometimes abort with
    ** the message `unexpected mark stack overflow' (e.g. in grade hlc.gc
    ** on dec-alpha-osf3.2).
    **
    ** Doing this should also improve performance slightly by avoiding
    ** frequent garbage collection during start-up.
    */
    GC_expand_hp(4 * 1024 * 1024);
#endif


		;}
#undef MR_PROC_LABEL
}
  mercury__io__stderr_stream_3_p_0(&ErrorStream_6);
  mercury__io__set_output_stream_4_p_0(ErrorStream_6, &Var_7);
  mercury__io__command_line_arguments_3_p_0(&CmdLineArgs_8);
  mdbcomp__shared_utilities__unlimit_stack_2_p_0();
  top_level__mercury_compile_main__expand_at_file_arguments_4_p_0(CmdLineArgs_8, &Res_10);
  if (((MR_tag((MR_Word) Res_10)) == (MR_Integer) 1))
  {
    MR_Word E_12 = ((MR_Word) ((MR_hl_field(1, Res_10, (MR_Integer) 0))));
    MR_String Var_29;

    Var_29 = mercury__io__error_message_1_f_0(E_12);
    mercury__io__write_string_4_p_0(ErrorStream_6, Var_29);
    mercury__io__write_string_4_p_0(ErrorStream_6, (MR_String) "\n");
    mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
  }
  else
  {
    MR_Word ExpandedCmdLineArgs_11 = ((MR_Word) ((MR_hl_field(0, Res_10, (MR_Integer) 0))));
    MR_Word DetectedGradeFlags_40;
    MR_Word Variables_41;
    MR_Word MaybeMCFlags_42;
    MR_Word OptionArgs_43;
    MR_Word NonOptionArgs_44;
    MR_Word OptionSpecs_45;
    MR_String ArgFile_38;
    MR_Word ExtraArgs_39;
    MR_String Var_58;
    MR_Word Var_59;

    succeeded = (ExpandedCmdLineArgs_11 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      Var_58 = ((MR_String) ((MR_hl_field(1, ExpandedCmdLineArgs_11, (MR_Integer) 0))));
      Var_59 = ((MR_Word) ((MR_hl_field(1, ExpandedCmdLineArgs_11, (MR_Integer) 1))));
      succeeded = (strcmp(Var_58, (MR_String) "--arg-file") == 0);
      if (succeeded)
      {
        succeeded = (Var_59 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          ArgFile_38 = ((MR_String) ((MR_hl_field(1, Var_59, (MR_Integer) 0))));
          ExtraArgs_39 = ((MR_Word) ((MR_hl_field(1, Var_59, (MR_Integer) 1))));
        }
      }
    }
    if (succeeded)
    {
      MR_Word EnvVarMap_72;
      MR_Word MaybeArgs1_75;
      MR_Word ArgsNonUndefSpecs_76;
      MR_Word ArgsUndefSpecs_77;

      mercury__io__environment__get_environment_var_map_3_p_0(&EnvVarMap_72);
      if (!((ExtraArgs_39 == (MR_Word) ((MR_Unsigned) 0U))))
      {
        MR_String Var_81;
        MR_String Var_83;

        Var_83 = mercury__string__string_1_f_0((MR_Word) (&top_level__mercury_compile_main_scalar_common_1[0]), ((MR_Box) (ExtraArgs_39)));
        Var_81 = mercury__string__f_43_43_2_f_0((MR_String) "extra arguments with --arg-file: ", Var_83);
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140top_level.mercury_compile_main.process_options_arg_file\'/10", Var_81);
          return;
        }
      }
      make__options_file__read_args_file_6_p_0(ArgFile_38, &MaybeArgs1_75, &ArgsNonUndefSpecs_76, &ArgsUndefSpecs_77);
      OptionSpecs_45 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), ArgsNonUndefSpecs_76, ArgsUndefSpecs_77);
      if ((MaybeArgs1_75 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        OptionArgs_43 = (MR_Word) ((MR_Unsigned) 0U);
        NonOptionArgs_44 = (MR_Word) ((MR_Unsigned) 0U);
      }
      else
      {
        MR_Word Args1_78 = ((MR_Word) ((MR_hl_field(1, MaybeArgs1_75, (MR_Integer) 0))));

        libs__handle_options__separate_option_args_3_p_0(Args1_78, &OptionArgs_43, &NonOptionArgs_44);
      }
      DetectedGradeFlags_40 = (MR_Word) ((MR_Unsigned) 0U);
      Variables_41 = make__options_file__options_variables_init_1_f_0(EnvVarMap_72);
      MaybeMCFlags_42 = (MR_Word) (MR_mkword(1, &top_level__mercury_compile_main_scalar_common_2[0]));
    }
    else
      top_level__mercury_compile_main__process_options_plain_10_p_0(ErrorStream_6, ExpandedCmdLineArgs_11, &DetectedGradeFlags_40, &Variables_41, &MaybeMCFlags_42, &OptionArgs_43, &NonOptionArgs_44, &OptionSpecs_45);
    if ((MaybeMCFlags_42 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word DummyGlobals_57;
      MR_Word Var_54;
      MR_Word Var_55;
      MR_Word _Specs_56;

      libs__handle_options__handle_given_options_8_p_0(ErrorStream_6, (MR_Word) ((MR_Unsigned) 0U), &Var_54, &Var_55, &_Specs_56, &DummyGlobals_57);
      parse_tree__write_error_spec__write_error_specs_5_p_0(ErrorStream_6, DummyGlobals_57, OptionSpecs_45);
      mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
    }
    else
    {
      MR_Word MCFlags_46 = ((MR_Word) ((MR_hl_field(1, MaybeMCFlags_42, (MR_Integer) 0))));
      MR_Word AllFlags_47;
      MR_Word Specs_50;
      MR_Word ActualGlobals_51;
      MR_Word Var_61;
      MR_Word Var_48;
      MR_Word Var_49;

      Var_61 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), MCFlags_46, OptionArgs_43);
      AllFlags_47 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), DetectedGradeFlags_40, Var_61);
      libs__handle_options__handle_given_options_8_p_0(ErrorStream_6, AllFlags_47, &Var_48, &Var_49, &Specs_50, &ActualGlobals_51);
      parse_tree__write_error_spec__write_error_specs_5_p_0(ErrorStream_6, ActualGlobals_51, OptionSpecs_45);
      if ((Specs_50 == (MR_Word) ((MR_Unsigned) 0U)))
        top_level__mercury_compile_main__main_after_setup_9_p_0(ErrorStream_6, ErrorStream_6, ActualGlobals_51, DetectedGradeFlags_40, Variables_41, OptionArgs_43, NonOptionArgs_44);
      else
        libs__handle_options__usage_errors_5_p_0(ErrorStream_6, ActualGlobals_51, Specs_50);
    }
  }
  hlds__instmap__record_instmap_delta_restrict_stats_2_p_0();
  libs__globals__close_any_specific_compiler_streams_2_p_0();
}

static void MR_CALL 
top_level__mercury_compile_main__main_after_setup_9_p_0(
  MR_Word ProgressStream_10,
  MR_Word ErrorStream_11,
  MR_Word Globals_12,
  MR_Word DetectedGradeFlags_13,
  MR_Word OptionVariables_14,
  MR_Word OptionArgs_15,
  MR_Word Args_16)
{
  MR_bool succeeded;
  MR_Word Version_18;
  MR_Word Help_19;

  libs__globals__lookup_bool_option_3_p_0(Globals_12, (MR_Integer) 702, &Version_18);
  libs__globals__lookup_bool_option_3_p_0(Globals_12, (MR_Integer) 701, &Help_19);
  succeeded = (Help_19 == (MR_Integer) 1);
  if (succeeded)
  {
    MR_Word StdOutStream_20;

    mercury__io__stdout_stream_3_p_0(&StdOutStream_20);
    libs__handle_options__long_usage_3_p_0(StdOutStream_20);
  }
  else
  {
    succeeded = (Version_18 == (MR_Integer) 1);
    if (succeeded)
    {
      MR_Word StdOutStream_36;

      mercury__io__stdout_stream_3_p_0(&StdOutStream_36);
      libs__handle_options__display_compiler_version_3_p_0(StdOutStream_36);
    }
    else
    {
      MR_Word OpMode_21;
      MR_Word HaveReadModuleMaps0_22;
      MR_Word Specs_25;

      libs__globals__get_op_mode_2_p_0(Globals_12, &OpMode_21);
      HaveReadModuleMaps0_22 = parse_tree__read_modules__init_have_read_module_maps_0_f_0();
      switch (MR_tag((MR_Word) OpMode_21)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(OpMode_21)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word MakeGlobals_37;

                libs__globals__set_option_4_p_0((MR_Integer) 698, (MR_Word) (MR_mkword(1, &top_level__mercury_compile_main_scalar_common_2[1])), Globals_12, &MakeGlobals_37);
                make__top_level__make_process_compiler_args_7_p_0(MakeGlobals_37, DetectedGradeFlags_13, OptionVariables_14, OptionArgs_15, Args_16);
                Specs_25 = (MR_Word) ((MR_Unsigned) 0U);
              }
              break;
            case (MR_Integer) 1:
              {
                parse_tree__source_file_map__write_source_file_map_4_p_0(Globals_12, Args_16);
                Specs_25 = (MR_Word) ((MR_Unsigned) 0U);
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_String StandaloneIntBasename_38 = ((MR_String) ((MR_hl_field(1, OpMode_21, (MR_Integer) 0))));
            MR_Word Target_48;

            libs__globals__get_target_2_p_0(Globals_12, &Target_48);
            switch (Target_48) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                backend_libs__compile_target_code__make_standalone_interface_6_p_0(Globals_12, ProgressStream_10, ErrorStream_11, StandaloneIntBasename_38);
                break;
              case (MR_Integer) 1:
              case (MR_Integer) 2:
                {
                  MR_String ProgName_49;
                  MR_Word Pieces_50;
                  MR_Word Spec_51;
                  MR_Word Var_54;
                  MR_Word Var_55;
                  MR_Word Var_58;
                  MR_Word Var_60;
                  MR_Word Var_63;
                  MR_Word Var_66;
                  MR_Word Var_69;
                  MR_Word Var_70;
                  MR_String Var_71;

                  mercury__io__progname_base_4_p_0((MR_String) "mercury_compile", &ProgName_49);
                  {
                    Var_54 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(2, Var_54, 0) = ((MR_Box) (ProgName_49));
                  }
                  Var_71 = libs__globals__compilation_target_string_1_f_0(Target_48);
                  {
                    Var_70 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(3, Var_70, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                    MR_hl_field(3, Var_70, 1) = ((MR_Box) (Var_71));
                  }
                  {
                    Var_69 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_69, 0) = ((MR_Box) (Var_70));
                    MR_hl_field(1, Var_69, 1) = ((MR_Box) (MR_mkword(1, &top_level__mercury_compile_main_scalar_common_1[9])));
                  }
                  {
                    Var_66 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_66, 0) = ((MR_Box) (MR_mkword(3, &top_level__mercury_compile_main_scalar_common_1[6])));
                    MR_hl_field(1, Var_66, 1) = ((MR_Box) (Var_69));
                  }
                  {
                    Var_63 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_63, 0) = ((MR_Box) (MR_mkword(3, &top_level__mercury_compile_main_scalar_common_1[5])));
                    MR_hl_field(1, Var_63, 1) = ((MR_Box) (Var_66));
                  }
                  {
                    Var_60 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_60, 0) = ((MR_Box) (MR_mkword(3, &top_level__mercury_compile_main_scalar_common_1[4])));
                    MR_hl_field(1, Var_60, 1) = ((MR_Box) (Var_63));
                  }
                  {
                    Var_58 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_58, 0) = ((MR_Box) ((MR_Unsigned) 8U));
                    MR_hl_field(1, Var_58, 1) = ((MR_Box) (Var_60));
                  }
                  {
                    Var_55 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_55, 0) = ((MR_Box) (MR_mkword(3, &top_level__mercury_compile_main_scalar_common_1[3])));
                    MR_hl_field(1, Var_55, 1) = ((MR_Box) (Var_58));
                  }
                  {
                    Pieces_50 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Pieces_50, 0) = ((MR_Box) (Var_54));
                    MR_hl_field(1, Pieces_50, 1) = ((MR_Box) (Var_55));
                  }
                  {
                    Spec_51 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(2, Spec_51, 0) = ((MR_Box) ((MR_String) "predicate \140top_level.mercury_compile_main.do_op_mode_standalone_interface\'/6"));
                    MR_hl_field(2, Spec_51, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    MR_hl_field(2, Spec_51, 2) = ((MR_Box) ((MR_Unsigned) 0U));
                    MR_hl_field(2, Spec_51, 3) = ((MR_Box) (Pieces_50));
                  }
                  parse_tree__write_error_spec__write_error_spec_5_p_0(ErrorStream_11, Globals_12, Spec_51);
                }
                break;
            }
            Specs_25 = (MR_Word) ((MR_Unsigned) 0U);
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word OpModeQuery_39 = ((MR_Unsigned) ((MR_hl_field(2, OpMode_21, (MR_Integer) 0))) & (MR_Integer) 15);

            top_level__mercury_compile_main__do_op_mode_query_6_p_0(ErrorStream_11, Globals_12, OpModeQuery_39, OptionVariables_14);
            Specs_25 = (MR_Word) ((MR_Unsigned) 0U);
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word OpModeArgs_40 = ((MR_Word) ((MR_hl_field(3, OpMode_21, (MR_Integer) 0))));
            MR_Word FileNamesFromStdin_41;

            libs__globals__lookup_bool_option_3_p_0(Globals_12, (MR_Integer) 698, &FileNamesFromStdin_41);
            succeeded = (Args_16 == (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
              succeeded = (FileNamesFromStdin_41 == (MR_Integer) 0);
            if (succeeded)
            {
              MR_Word StdErr_42;

              mercury__io__stderr_stream_3_p_0(&StdErr_42);
              libs__handle_options__usage_3_p_0(StdErr_42);
              Specs_25 = (MR_Word) ((MR_Unsigned) 0U);
            }
            else
            {
              MR_Word _HaveReadModuleMaps_76;

              top_level__mercury_compile_main__do_op_mode_args_15_p_0(ProgressStream_10, ErrorStream_11, Globals_12, OpModeArgs_40, FileNamesFromStdin_41, DetectedGradeFlags_13, OptionVariables_14, OptionArgs_15, Args_16, HaveReadModuleMaps0_22, &_HaveReadModuleMaps_76, (MR_Word) ((MR_Unsigned) 0U), &Specs_25);
            }
          }
          break;
      }
      parse_tree__write_error_spec__write_error_specs_5_p_0(ErrorStream_11, Globals_12, Specs_25);
    }
  }
}

static MR_bool MR_CALL 
top_level__mercury_compile_main__do_op_mode_args_15_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_args__733__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

static void MR_CALL 
top_level__mercury_compile_main__do_op_mode_args_15_p_0(
  MR_Word ProgressStream_16,
  MR_Word ErrorStream_17,
  MR_Word Globals_18,
  MR_Word OpModeArgs_19,
  MR_Word FileNamesFromStdin_20,
  MR_Word DetectedGradeFlags_21,
  MR_Word OptionVariables_22,
  MR_Word OptionArgs_23,
  MR_Word Args_24,
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_0_49,
  MR_Word * STATE_VARIABLE_HaveReadModuleMaps_50,
  MR_Word STATE_VARIABLE_Specs_0_51,
  MR_Word * STATE_VARIABLE_Specs_52)
{
  MR_bool succeeded;
  MR_Word InvokedByMake_28;
  MR_Word ModulesToLinkCord_30;
  MR_Word ExtraObjFilesCord_31;
  MR_Word ModulesToLink_35;
  MR_Word ExtraObjFiles_36;
  MR_Integer ExitStatus_37;
  MR_Word StdErr_47;
  MR_Word Statistics_48;
  MR_Word Limited_98;
  MR_Word ExtraErrorInfo_99;

  libs__globals__lookup_bool_option_3_p_0(Globals_18, (MR_Integer) 666, &InvokedByMake_28);
  switch (FileNamesFromStdin_20) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (InvokedByMake_28) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word LibgradeCheckSpecs_32;

            libs__check_libgrades__maybe_check_libraries_are_installed_4_p_0(Globals_18, &LibgradeCheckSpecs_32);
            if ((LibgradeCheckSpecs_32 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              MR_Word Var_67;
              MR_Word Var_68;

              Var_67 = mercury__cord__empty_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0));
              Var_68 = mercury__cord__empty_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0));
              top_level__mercury_compile_main__setup_and_process_compiler_cmd_line_args_18_p_0(ProgressStream_16, ErrorStream_17, Globals_18, OpModeArgs_19, DetectedGradeFlags_21, OptionVariables_22, OptionArgs_23, Args_24, Var_67, &ModulesToLinkCord_30, Var_68, &ExtraObjFilesCord_31, STATE_VARIABLE_HaveReadModuleMaps_0_49, STATE_VARIABLE_HaveReadModuleMaps_50, STATE_VARIABLE_Specs_0_51, STATE_VARIABLE_Specs_52);
            }
            else
            {
              *STATE_VARIABLE_Specs_52 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), LibgradeCheckSpecs_32, STATE_VARIABLE_Specs_0_51);
              ModulesToLinkCord_30 = mercury__cord__empty_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0));
              ExtraObjFilesCord_31 = mercury__cord__empty_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0));
              *STATE_VARIABLE_HaveReadModuleMaps_50 = STATE_VARIABLE_HaveReadModuleMaps_0_49;
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Var_73;
            MR_Word Var_74;

            Var_73 = mercury__cord__empty_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0));
            Var_74 = mercury__cord__empty_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0));
            top_level__mercury_compile_main__do_process_compiler_cmd_line_args_14_p_0(ProgressStream_16, ErrorStream_17, Globals_18, OpModeArgs_19, OptionArgs_23, Args_24, Var_73, &ModulesToLinkCord_30, Var_74, &ExtraObjFilesCord_31, STATE_VARIABLE_HaveReadModuleMaps_0_49, STATE_VARIABLE_HaveReadModuleMaps_50);
            *STATE_VARIABLE_Specs_52 = STATE_VARIABLE_Specs_0_51;
          }
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word StdIn_29;
        MR_Word Var_56;
        MR_Word Var_61;
        MR_Word Var_62;

        {
          Var_56 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_56, 0) = ((MR_Box) (&top_level__mercury_compile_main_scalar_common_8[3]));
          MR_hl_field(0, Var_56, 1) = ((MR_Box) (top_level__mercury_compile_main__do_op_mode_args_15_p_0_1));
          MR_hl_field(0, Var_56, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(0, Var_56, 3) = ((MR_Box) (InvokedByMake_28));
          MR_hl_field(0, Var_56, 4) = ((MR_Box) ((MR_Integer) 0));
        }
        mercury__require__expect_3_p_0(Var_56, (MR_String) "predicate \140top_level.mercury_compile_main.do_op_mode_args\'/15", (MR_String) "InvokedByMake != no");
        mercury__io__stdin_stream_3_p_0(&StdIn_29);
        Var_61 = mercury__cord__empty_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0));
        Var_62 = mercury__cord__empty_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0));
        top_level__mercury_compile_main__setup_and_process_compiler_stdin_args_18_p_0(ProgressStream_16, ErrorStream_17, StdIn_29, Globals_18, OpModeArgs_19, DetectedGradeFlags_21, OptionVariables_22, OptionArgs_23, Var_61, &ModulesToLinkCord_30, Var_62, &ExtraObjFilesCord_31, STATE_VARIABLE_HaveReadModuleMaps_0_49, STATE_VARIABLE_HaveReadModuleMaps_50, STATE_VARIABLE_Specs_0_51, STATE_VARIABLE_Specs_52);
      }
      break;
  }
  ModulesToLink_35 = mercury__cord__list_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ModulesToLinkCord_30);
  ExtraObjFiles_36 = mercury__cord__list_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ExtraObjFilesCord_31);
  mercury__io__get_exit_status_3_p_0(&ExitStatus_37);
  succeeded = (ExitStatus_37 == (MR_Integer) 0);
  if (succeeded)
  {
    MR_String FirstModule_38;
    MR_Word Var_78;
    MR_Word Var_79;

    succeeded = ((MR_tag((MR_Word) OpModeArgs_19)) == (MR_Integer) 2);
    if (succeeded)
    {
      Var_78 = ((MR_Word) ((MR_hl_field(2, OpModeArgs_19, (MR_Integer) 0))));
      succeeded = ((MR_tag((MR_Word) Var_78)) == (MR_Integer) 1);
      if (succeeded)
      {
        Var_79 = ((MR_Unsigned) ((MR_hl_field(1, Var_78, (MR_Integer) 0))) & (MR_Integer) 3);
        succeeded = (Var_79 == (MR_Integer) 2);
        if (succeeded)
        {
          succeeded = (ModulesToLink_35 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
            FirstModule_38 = ((MR_String) ((MR_hl_field(1, ModulesToLink_35, (MR_Integer) 0))));
        }
      }
    }
    if (succeeded)
    {
      MR_Word MainModuleName_40;
      MR_Word Target_41;
      MR_Word Succeeded_42;

      parse_tree__file_names__file_name_to_module_name_2_p_0(FirstModule_38, &MainModuleName_40);
      libs__globals__get_target_2_p_0(Globals_18, &Target_41);
      switch (Target_41) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
        case (MR_Integer) 1:
          switch (InvokedByMake_28) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word MayBuild_43;

                make__build__setup_for_build_with_module_options_9_p_0((MR_Integer) 0, MainModuleName_40, DetectedGradeFlags_21, OptionVariables_22, OptionArgs_23, (MR_Word) ((MR_Unsigned) 0U), &MayBuild_43);
                if (((MR_tag((MR_Word) MayBuild_43)) == (MR_Integer) 1))
                {
                  MR_Word BuildGlobals_46 = ((MR_Word) ((MR_hl_field(1, MayBuild_43, (MR_Integer) 1))));

                  backend_libs__compile_target_code__link_module_list_8_p_0(ProgressStream_16, ErrorStream_17, ModulesToLink_35, ExtraObjFiles_36, BuildGlobals_46, &Succeeded_42);
                }
                else
                {
                  MR_Word SetupSpecs_44 = ((MR_Word) ((MR_hl_field(0, MayBuild_43, (MR_Integer) 0))));

                  parse_tree__write_error_spec__write_error_specs_5_p_0(ErrorStream_17, Globals_18, SetupSpecs_44);
                  Succeeded_42 = (MR_Integer) 0;
                }
              }
              break;
            case (MR_Integer) 1:
              backend_libs__compile_target_code__link_module_list_8_p_0(ProgressStream_16, ErrorStream_17, ModulesToLink_35, ExtraObjFiles_36, Globals_18, &Succeeded_42);
              break;
          }
          break;
        case (MR_Integer) 2:
          parse_tree__module_cmds__create_java_shell_script_5_p_0(Globals_18, MainModuleName_40, &Succeeded_42);
          break;
      }
      parse_tree__module_cmds__maybe_set_exit_status_3_p_0(Succeeded_42);
    }
  }
  mercury__io__stderr_stream_3_p_0(&StdErr_47);
  libs__globals__io_get_some_errors_were_context_limited_3_p_0(&Limited_98);
  libs__globals__io_set_some_errors_were_context_limited_3_p_0((MR_Integer) 0);
  libs__globals__io_get_extra_error_info_3_p_0(&ExtraErrorInfo_99);
  libs__globals__io_set_extra_error_info_3_p_0((MR_Integer) 0);
  switch (Limited_98) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
      }
      break;
    case (MR_Integer) 1:
      {
        MR_String Var_107;
        MR_String Var_111;

        Var_107 = mercury__string__f_43_43_2_f_0((MR_String) "Some error messages were suppressed ", (MR_String) "by \140--limit-error-contexts\' options.\n");
        mercury__io__write_string_4_p_0(StdErr_47, Var_107);
        Var_111 = mercury__string__f_43_43_2_f_0((MR_String) "You can see the suppressed messages ", (MR_String) "if you recompile without these options.\n");
        mercury__io__write_string_4_p_0(StdErr_47, Var_111);
      }
      break;
  }
  switch (ExtraErrorInfo_99) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word VerboseErrors_100;

        libs__globals__lookup_bool_option_3_p_0(Globals_18, (MR_Integer) 74, &VerboseErrors_100);
        switch (VerboseErrors_100) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            mercury__io__write_string_4_p_0(StdErr_47, (MR_String) "For more information, recompile with \140-E\'.\n");
            break;
          case (MR_Integer) 1:
            {
            }
            break;
        }
      }
      break;
  }
  libs__globals__lookup_bool_option_3_p_0(Globals_18, (MR_Integer) 82, &Statistics_48);
  switch (Statistics_48) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
      }
      break;
    case (MR_Integer) 1:
      mercury__benchmarking__report_full_memory_stats_3_p_0(StdErr_47);
      break;
  }
}

static void MR_CALL 
top_level__mercury_compile_main__do_process_compiler_cmd_line_args_14_p_0(
  MR_Word ProgressStream_1,
  MR_Word ErrorStream_2,
  MR_Word Globals_3,
  MR_Word OpModeArgs_4,
  MR_Word OptionArgs_5,
  MR_Word HeadVar__6_6,
  MR_Word STATE_VARIABLE_Modules_0_7,
  MR_Word * STATE_VARIABLE_Modules_8,
  MR_Word STATE_VARIABLE_ExtraObjFiles_0_9,
  MR_Word * STATE_VARIABLE_ExtraObjFiles_10,
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_0_11,
  MR_Word * STATE_VARIABLE_HaveReadModuleMaps_12)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__6_6 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_HaveReadModuleMaps_12 = STATE_VARIABLE_HaveReadModuleMaps_0_11;
      *STATE_VARIABLE_ExtraObjFiles_10 = STATE_VARIABLE_ExtraObjFiles_0_9;
      *STATE_VARIABLE_Modules_8 = STATE_VARIABLE_Modules_0_7;
    }
    else
    {
      MR_String Arg_37 = ((MR_String) ((MR_hl_field(1, HeadVar__6_6, (MR_Integer) 0))));
      MR_Word Args_38 = ((MR_Word) ((MR_hl_field(1, HeadVar__6_6, (MR_Integer) 1))));
      MR_Word FileOrModule_43;
      MR_Word ArgModules_44;
      MR_Word ArgExtraObjFiles_45;
      MR_Word STATE_VARIABLE_HaveReadModuleMaps_56_56;
      MR_Word STATE_VARIABLE_Modules_59_59;
      MR_Word Var_60;
      MR_Word STATE_VARIABLE_ExtraObjFiles_61_61;
      MR_Word Var_62;
      MR_String FileName_64;
      MR_Word next_value_of_HeadVar__6_6;
      MR_Word next_value_of_STATE_VARIABLE_Modules_0_7;
      MR_Word next_value_of_STATE_VARIABLE_ExtraObjFiles_0_9;
      MR_Word next_value_of_STATE_VARIABLE_HaveReadModuleMaps_0_11;

      succeeded = mercury__string__remove_suffix_3_p_0(Arg_37, (MR_String) ".m", &FileName_64);
      if (succeeded)
        {
          FileOrModule_43 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, FileOrModule_43, 0) = ((MR_Box) (FileName_64));
        }
      else
      {
        MR_Word ModuleName_65;

        parse_tree__file_names__file_name_to_module_name_2_p_0(Arg_37, &ModuleName_65);
        {
          FileOrModule_43 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, FileOrModule_43, 0) = ((MR_Box) (ModuleName_65));
        }
      }
      top_level__mercury_compile_main__do_process_compiler_arg_12_p_0(ProgressStream_1, ErrorStream_2, Globals_3, OpModeArgs_4, OptionArgs_5, FileOrModule_43, &ArgModules_44, &ArgExtraObjFiles_45, STATE_VARIABLE_HaveReadModuleMaps_0_11, &STATE_VARIABLE_HaveReadModuleMaps_56_56);
      if (!((Args_38 == (MR_Word) ((MR_Unsigned) 0U))))
        mercury__gc__garbage_collect_2_p_0();
      Var_60 = mercury__cord__from_list_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ArgModules_44);
      STATE_VARIABLE_Modules_59_59 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), STATE_VARIABLE_Modules_0_7, Var_60);
      Var_62 = mercury__cord__from_list_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ArgExtraObjFiles_45);
      STATE_VARIABLE_ExtraObjFiles_61_61 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), STATE_VARIABLE_ExtraObjFiles_0_9, Var_62);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__6_6 = Args_38;
      next_value_of_STATE_VARIABLE_Modules_0_7 = STATE_VARIABLE_Modules_59_59;
      next_value_of_STATE_VARIABLE_ExtraObjFiles_0_9 = STATE_VARIABLE_ExtraObjFiles_61_61;
      next_value_of_STATE_VARIABLE_HaveReadModuleMaps_0_11 = STATE_VARIABLE_HaveReadModuleMaps_56_56;
      HeadVar__6_6 = next_value_of_HeadVar__6_6;
      STATE_VARIABLE_Modules_0_7 = next_value_of_STATE_VARIABLE_Modules_0_7;
      STATE_VARIABLE_ExtraObjFiles_0_9 = next_value_of_STATE_VARIABLE_ExtraObjFiles_0_9;
      STATE_VARIABLE_HaveReadModuleMaps_0_11 = next_value_of_STATE_VARIABLE_HaveReadModuleMaps_0_11;
      continue;
    }
    break;
  }
}

static void MR_CALL 
top_level__mercury_compile_main__setup_and_process_compiler_cmd_line_args_18_p_0(
  MR_Word ProgressStream_1,
  MR_Word ErrorStream_2,
  MR_Word Globals_3,
  MR_Word OpModeArgs_4,
  MR_Word DetectedGradeFlags_5,
  MR_Word OptionVariables_6,
  MR_Word OptionArgs_7,
  MR_Word HeadVar__8_8,
  MR_Word STATE_VARIABLE_Modules_0_9,
  MR_Word * STATE_VARIABLE_Modules_10,
  MR_Word STATE_VARIABLE_ExtraObjFiles_0_11,
  MR_Word * STATE_VARIABLE_ExtraObjFiles_12,
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_0_13,
  MR_Word * STATE_VARIABLE_HaveReadModuleMaps_14,
  MR_Word STATE_VARIABLE_Specs_0_15,
  MR_Word * STATE_VARIABLE_Specs_16)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__8_8 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Specs_16 = STATE_VARIABLE_Specs_0_15;
      *STATE_VARIABLE_HaveReadModuleMaps_14 = STATE_VARIABLE_HaveReadModuleMaps_0_13;
      *STATE_VARIABLE_ExtraObjFiles_12 = STATE_VARIABLE_ExtraObjFiles_0_11;
      *STATE_VARIABLE_Modules_10 = STATE_VARIABLE_Modules_0_9;
    }
    else
    {
      MR_String Arg_48 = ((MR_String) ((MR_hl_field(1, HeadVar__8_8, (MR_Integer) 0))));
      MR_Word Args_49 = ((MR_Word) ((MR_hl_field(1, HeadVar__8_8, (MR_Integer) 1))));
      MR_Word ArgModules_55;
      MR_Word ArgExtraObjFiles_56;
      MR_Word STATE_VARIABLE_HaveReadModuleMaps_69_69;
      MR_Word STATE_VARIABLE_Specs_70_70;
      MR_Word STATE_VARIABLE_Modules_73_73;
      MR_Word Var_74;
      MR_Word STATE_VARIABLE_ExtraObjFiles_75_75;
      MR_Word Var_76;
      MR_Word next_value_of_HeadVar__8_8;
      MR_Word next_value_of_STATE_VARIABLE_Modules_0_9;
      MR_Word next_value_of_STATE_VARIABLE_ExtraObjFiles_0_11;
      MR_Word next_value_of_STATE_VARIABLE_HaveReadModuleMaps_0_13;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_15;

      top_level__mercury_compile_main__setup_and_process_compiler_arg_16_p_0(ProgressStream_1, ErrorStream_2, Globals_3, OpModeArgs_4, DetectedGradeFlags_5, OptionVariables_6, OptionArgs_7, Arg_48, &ArgModules_55, &ArgExtraObjFiles_56, STATE_VARIABLE_HaveReadModuleMaps_0_13, &STATE_VARIABLE_HaveReadModuleMaps_69_69, STATE_VARIABLE_Specs_0_15, &STATE_VARIABLE_Specs_70_70);
      if (!((Args_49 == (MR_Word) ((MR_Unsigned) 0U))))
        mercury__gc__garbage_collect_2_p_0();
      Var_74 = mercury__cord__from_list_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ArgModules_55);
      STATE_VARIABLE_Modules_73_73 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), STATE_VARIABLE_Modules_0_9, Var_74);
      Var_76 = mercury__cord__from_list_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ArgExtraObjFiles_56);
      STATE_VARIABLE_ExtraObjFiles_75_75 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), STATE_VARIABLE_ExtraObjFiles_0_11, Var_76);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__8_8 = Args_49;
      next_value_of_STATE_VARIABLE_Modules_0_9 = STATE_VARIABLE_Modules_73_73;
      next_value_of_STATE_VARIABLE_ExtraObjFiles_0_11 = STATE_VARIABLE_ExtraObjFiles_75_75;
      next_value_of_STATE_VARIABLE_HaveReadModuleMaps_0_13 = STATE_VARIABLE_HaveReadModuleMaps_69_69;
      next_value_of_STATE_VARIABLE_Specs_0_15 = STATE_VARIABLE_Specs_70_70;
      HeadVar__8_8 = next_value_of_HeadVar__8_8;
      STATE_VARIABLE_Modules_0_9 = next_value_of_STATE_VARIABLE_Modules_0_9;
      STATE_VARIABLE_ExtraObjFiles_0_11 = next_value_of_STATE_VARIABLE_ExtraObjFiles_0_11;
      STATE_VARIABLE_HaveReadModuleMaps_0_13 = next_value_of_STATE_VARIABLE_HaveReadModuleMaps_0_13;
      STATE_VARIABLE_Specs_0_15 = next_value_of_STATE_VARIABLE_Specs_0_15;
      continue;
    }
    break;
  }
}

static void MR_CALL 
top_level__mercury_compile_main__setup_and_process_compiler_arg_16_p_0(
  MR_Word ProgressStream_17,
  MR_Word ErrorStream_18,
  MR_Word Globals_19,
  MR_Word OpModeArgs_20,
  MR_Word DetectedGradeFlags_21,
  MR_Word OptionVariables_22,
  MR_Word OptionArgs_23,
  MR_String Arg_24,
  MR_Word * ModulesToLink_25,
  MR_Word * ExtraObjFiles_26,
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_0_40,
  MR_Word * STATE_VARIABLE_HaveReadModuleMaps_41,
  MR_Word STATE_VARIABLE_Specs_0_42,
  MR_Word * STATE_VARIABLE_Specs_43)
{
  MR_bool succeeded;
  MR_Word FileOrModule_30;
  MR_Word ModuleName_31;
  MR_Word MayBuild_33;
  MR_String FileName_51;

  succeeded = mercury__string__remove_suffix_3_p_0(Arg_24, (MR_String) ".m", &FileName_51);
  if (succeeded)
  {
    {
      FileOrModule_30 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, FileOrModule_30, 0) = ((MR_Box) (FileName_51));
    }
    parse_tree__file_names__file_name_to_module_name_2_p_0(FileName_51, &ModuleName_31);
  }
  else
  {
    parse_tree__file_names__file_name_to_module_name_2_p_0(Arg_24, &ModuleName_31);
    {
      FileOrModule_30 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, FileOrModule_30, 0) = ((MR_Box) (ModuleName_31));
    }
  }
  make__build__setup_for_build_with_module_options_9_p_0((MR_Integer) 0, ModuleName_31, DetectedGradeFlags_21, OptionVariables_22, OptionArgs_23, (MR_Word) ((MR_Unsigned) 0U), &MayBuild_33);
  if (((MR_tag((MR_Word) MayBuild_33)) == (MR_Integer) 1))
  {
    MR_Word BuildGlobals_36 = ((MR_Word) ((MR_hl_field(1, MayBuild_33, (MR_Integer) 1))));
    MR_Word LibgradeCheckSpecs_37;

    libs__check_libgrades__maybe_check_libraries_are_installed_4_p_0(Globals_19, &LibgradeCheckSpecs_37);
    if ((LibgradeCheckSpecs_37 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      top_level__mercury_compile_main__do_process_compiler_arg_12_p_0(ProgressStream_17, ErrorStream_18, BuildGlobals_36, OpModeArgs_20, OptionArgs_23, FileOrModule_30, ModulesToLink_25, ExtraObjFiles_26, STATE_VARIABLE_HaveReadModuleMaps_0_40, STATE_VARIABLE_HaveReadModuleMaps_41);
      *STATE_VARIABLE_Specs_43 = STATE_VARIABLE_Specs_0_42;
    }
    else
    {
      *STATE_VARIABLE_Specs_43 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), LibgradeCheckSpecs_37, STATE_VARIABLE_Specs_0_42);
      *ModulesToLink_25 = (MR_Word) ((MR_Unsigned) 0U);
      *ExtraObjFiles_26 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_HaveReadModuleMaps_41 = STATE_VARIABLE_HaveReadModuleMaps_0_40;
    }
  }
  else
  {
    MR_Word SetupSpecs_34 = ((MR_Word) ((MR_hl_field(0, MayBuild_33, (MR_Integer) 0))));

    parse_tree__write_error_spec__write_error_specs_5_p_0(ErrorStream_18, Globals_19, SetupSpecs_34);
    *ModulesToLink_25 = (MR_Word) ((MR_Unsigned) 0U);
    *ExtraObjFiles_26 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_HaveReadModuleMaps_41 = STATE_VARIABLE_HaveReadModuleMaps_0_40;
    *STATE_VARIABLE_Specs_43 = STATE_VARIABLE_Specs_0_42;
  }
}

static void MR_CALL 
top_level__mercury_compile_main__setup_and_process_compiler_stdin_args_18_p_0(
  MR_Word ProgressStream_19,
  MR_Word ErrorStream_20,
  MR_Word StdIn_21,
  MR_Word Globals_22,
  MR_Word OpModeArgs_23,
  MR_Word DetectedGradeFlags_24,
  MR_Word OptionVariables_25,
  MR_Word OptionArgs_26,
  MR_Word STATE_VARIABLE_Modules_0_41,
  MR_Word * STATE_VARIABLE_Modules_42,
  MR_Word STATE_VARIABLE_ExtraObjFiles_0_43,
  MR_Word * STATE_VARIABLE_ExtraObjFiles_44,
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_0_45,
  MR_Word * STATE_VARIABLE_HaveReadModuleMaps_46,
  MR_Word STATE_VARIABLE_Specs_0_47,
  MR_Word * STATE_VARIABLE_Specs_48)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word LineResult_32;

    // setup for model_det tailcalls optimized into a loop
    ;
    succeeded = mercury__cord__is_empty_1_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), STATE_VARIABLE_Modules_0_41);
    if (!(succeeded))
      mercury__gc__garbage_collect_2_p_0();
    mercury__io__read_line_as_string_4_p_0(StdIn_21, &LineResult_32);
    switch (MR_tag((MR_Word) LineResult_32)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *STATE_VARIABLE_Modules_42 = STATE_VARIABLE_Modules_0_41;
          *STATE_VARIABLE_ExtraObjFiles_44 = STATE_VARIABLE_ExtraObjFiles_0_43;
          *STATE_VARIABLE_HaveReadModuleMaps_46 = STATE_VARIABLE_HaveReadModuleMaps_0_45;
          *STATE_VARIABLE_Specs_48 = STATE_VARIABLE_Specs_0_47;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_String Line_33 = ((MR_String) ((MR_hl_field(1, LineResult_32, (MR_Integer) 0))));
          MR_String Arg_34;
          MR_Word ArgModules_35;
          MR_Word ArgExtraObjFiles_36;
          MR_Word STATE_VARIABLE_HaveReadModuleMaps_53_53;
          MR_Word STATE_VARIABLE_Specs_54_54;
          MR_Word STATE_VARIABLE_Modules_56_56;
          MR_Word Var_57;
          MR_Word STATE_VARIABLE_ExtraObjFiles_58_58;
          MR_Word Var_59;
          MR_Word FileOrModule_80;
          MR_Word ModuleName_81;
          MR_Word MayBuild_83;
          MR_String FileName_94;
          MR_Word next_value_of_STATE_VARIABLE_Modules_0_41;
          MR_Word next_value_of_STATE_VARIABLE_ExtraObjFiles_0_43;
          MR_Word next_value_of_STATE_VARIABLE_HaveReadModuleMaps_0_45;
          MR_Word next_value_of_STATE_VARIABLE_Specs_0_47;

          Arg_34 = mercury__string__rstrip_1_f_0(Line_33);
          succeeded = mercury__string__remove_suffix_3_p_0(Arg_34, (MR_String) ".m", &FileName_94);
          if (succeeded)
          {
            {
              FileOrModule_80 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, FileOrModule_80, 0) = ((MR_Box) (FileName_94));
            }
            parse_tree__file_names__file_name_to_module_name_2_p_0(FileName_94, &ModuleName_81);
          }
          else
          {
            parse_tree__file_names__file_name_to_module_name_2_p_0(Arg_34, &ModuleName_81);
            {
              FileOrModule_80 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, FileOrModule_80, 0) = ((MR_Box) (ModuleName_81));
            }
          }
          make__build__setup_for_build_with_module_options_9_p_0((MR_Integer) 0, ModuleName_81, DetectedGradeFlags_24, OptionVariables_25, OptionArgs_26, (MR_Word) ((MR_Unsigned) 0U), &MayBuild_83);
          if (((MR_tag((MR_Word) MayBuild_83)) == (MR_Integer) 1))
          {
            MR_Word BuildGlobals_86 = ((MR_Word) ((MR_hl_field(1, MayBuild_83, (MR_Integer) 1))));
            MR_Word LibgradeCheckSpecs_87;

            libs__check_libgrades__maybe_check_libraries_are_installed_4_p_0(Globals_22, &LibgradeCheckSpecs_87);
            if ((LibgradeCheckSpecs_87 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              top_level__mercury_compile_main__do_process_compiler_arg_12_p_0(ProgressStream_19, ErrorStream_20, BuildGlobals_86, OpModeArgs_23, OptionArgs_26, FileOrModule_80, &ArgModules_35, &ArgExtraObjFiles_36, STATE_VARIABLE_HaveReadModuleMaps_0_45, &STATE_VARIABLE_HaveReadModuleMaps_53_53);
              STATE_VARIABLE_Specs_54_54 = STATE_VARIABLE_Specs_0_47;
            }
            else
            {
              STATE_VARIABLE_Specs_54_54 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), LibgradeCheckSpecs_87, STATE_VARIABLE_Specs_0_47);
              ArgModules_35 = (MR_Word) ((MR_Unsigned) 0U);
              ArgExtraObjFiles_36 = (MR_Word) ((MR_Unsigned) 0U);
              STATE_VARIABLE_HaveReadModuleMaps_53_53 = STATE_VARIABLE_HaveReadModuleMaps_0_45;
            }
          }
          else
          {
            MR_Word SetupSpecs_84 = ((MR_Word) ((MR_hl_field(0, MayBuild_83, (MR_Integer) 0))));

            parse_tree__write_error_spec__write_error_specs_5_p_0(ErrorStream_20, Globals_22, SetupSpecs_84);
            ArgModules_35 = (MR_Word) ((MR_Unsigned) 0U);
            ArgExtraObjFiles_36 = (MR_Word) ((MR_Unsigned) 0U);
            STATE_VARIABLE_HaveReadModuleMaps_53_53 = STATE_VARIABLE_HaveReadModuleMaps_0_45;
            STATE_VARIABLE_Specs_54_54 = STATE_VARIABLE_Specs_0_47;
          }
          Var_57 = mercury__cord__from_list_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ArgModules_35);
          STATE_VARIABLE_Modules_56_56 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), STATE_VARIABLE_Modules_0_41, Var_57);
          Var_59 = mercury__cord__from_list_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ArgExtraObjFiles_36);
          STATE_VARIABLE_ExtraObjFiles_58_58 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), STATE_VARIABLE_ExtraObjFiles_0_43, Var_59);
          // direct tailcall eliminated
          ;
          next_value_of_STATE_VARIABLE_Modules_0_41 = STATE_VARIABLE_Modules_56_56;
          next_value_of_STATE_VARIABLE_ExtraObjFiles_0_43 = STATE_VARIABLE_ExtraObjFiles_58_58;
          next_value_of_STATE_VARIABLE_HaveReadModuleMaps_0_45 = STATE_VARIABLE_HaveReadModuleMaps_53_53;
          next_value_of_STATE_VARIABLE_Specs_0_47 = STATE_VARIABLE_Specs_54_54;
          STATE_VARIABLE_Modules_0_41 = next_value_of_STATE_VARIABLE_Modules_0_41;
          STATE_VARIABLE_ExtraObjFiles_0_43 = next_value_of_STATE_VARIABLE_ExtraObjFiles_0_43;
          STATE_VARIABLE_HaveReadModuleMaps_0_45 = next_value_of_STATE_VARIABLE_HaveReadModuleMaps_0_45;
          STATE_VARIABLE_Specs_0_47 = next_value_of_STATE_VARIABLE_Specs_0_47;
          continue;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Error_37 = ((MR_Word) ((MR_hl_field(2, LineResult_32, (MR_Integer) 0))));
          MR_String Msg_38;
          MR_Word Pieces_39;
          MR_Word Spec_40;
          MR_Word Var_67;
          MR_Word Var_68;

          mercury__io__error_message_2_p_0(Error_37, &Msg_38);
          {
            Var_68 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_68, 0) = ((MR_Box) ((MR_Unsigned) 6U));
            MR_hl_field(3, Var_68, 1) = ((MR_Box) (Msg_38));
          }
          {
            Var_67 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_67, 0) = ((MR_Box) (Var_68));
            MR_hl_field(1, Var_67, 1) = ((MR_Box) (MR_mkword(1, &top_level__mercury_compile_main_scalar_common_1[9])));
          }
          {
            Pieces_39 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Pieces_39, 0) = ((MR_Box) (MR_mkword(3, &top_level__mercury_compile_main_scalar_common_1[10])));
            MR_hl_field(1, Pieces_39, 1) = ((MR_Box) (Var_67));
          }
          {
            Spec_40 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(2, Spec_40, 0) = ((MR_Box) ((MR_String) "predicate \140top_level.mercury_compile_main.setup_and_process_compiler_stdin_args\'/18"));
            MR_hl_field(2, Spec_40, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(2, Spec_40, 2) = ((MR_Box) ((MR_Unsigned) 12U));
            MR_hl_field(2, Spec_40, 3) = ((MR_Box) (Pieces_39));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *STATE_VARIABLE_Specs_48 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (Spec_40));
            MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_47));
          }
          *STATE_VARIABLE_Modules_42 = STATE_VARIABLE_Modules_0_41;
          *STATE_VARIABLE_ExtraObjFiles_44 = STATE_VARIABLE_ExtraObjFiles_0_43;
          *STATE_VARIABLE_HaveReadModuleMaps_46 = STATE_VARIABLE_HaveReadModuleMaps_0_45;
        }
        break;
    }
    break;
  }
}

static void MR_CALL 
top_level__mercury_compile_main__do_process_compiler_arg_12_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_TimestampFiles_10;

  top_level__mercury_compile_main__find_timestamp_files_2_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv1_TimestampFiles_10);
  *wrapper_arg_2 = ((MR_Box) (conv1_TimestampFiles_10));
}

static void MR_CALL 
top_level__mercury_compile_main__do_process_compiler_arg_12_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_TargetFiles_10;

  top_level__mercury_compile_main__usual_find_target_files_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv0_TargetFiles_10);
  *wrapper_arg_2 = ((MR_Box) (conv0_TargetFiles_10));
}

static void MR_CALL 
top_level__mercury_compile_main__do_process_compiler_arg_12_p_0(
  MR_Word ProgressStream_13,
  MR_Word ErrorStream_14,
  MR_Word Globals0_15,
  MR_Word OpModeArgs_16,
  MR_Word OptionArgs_17,
  MR_Word FileOrModule_18,
  MR_Word * ModulesToLink_19,
  MR_Word * ExtraObjFiles_20,
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_0_38,
  MR_Word * STATE_VARIABLE_HaveReadModuleMaps_39)
{
  MR_bool succeeded;

  switch (MR_tag((MR_Word) OpModeArgs_16)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(OpModeArgs_16)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word DepSpecs_24;

            if (((MR_tag((MR_Word) FileOrModule_18)) == (MR_Integer) 0))
            {
              MR_String FileName_23 = ((MR_String) ((MR_hl_field(0, FileOrModule_18, (MR_Integer) 0))));

              parse_tree__generate_dep_d_files__generate_dep_file_for_file_5_p_0(Globals0_15, FileName_23, &DepSpecs_24);
            }
            else
            {
              MR_Word ModuleName_25 = ((MR_Word) ((MR_hl_field(1, FileOrModule_18, (MR_Integer) 0))));

              parse_tree__generate_dep_d_files__generate_dep_file_for_module_5_p_0(Globals0_15, ModuleName_25, &DepSpecs_24);
            }
            parse_tree__write_error_spec__write_error_specs_5_p_0(ErrorStream_14, Globals0_15, DepSpecs_24);
            *ModulesToLink_19 = (MR_Word) ((MR_Unsigned) 0U);
            *ExtraObjFiles_20 = (MR_Word) ((MR_Unsigned) 0U);
            *STATE_VARIABLE_HaveReadModuleMaps_39 = STATE_VARIABLE_HaveReadModuleMaps_0_38;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word DepSpecs_72;

            if (((MR_tag((MR_Word) FileOrModule_18)) == (MR_Integer) 0))
            {
              MR_String FileName_67 = ((MR_String) ((MR_hl_field(0, FileOrModule_18, (MR_Integer) 0))));

              parse_tree__generate_dep_d_files__generate_d_file_for_file_5_p_0(Globals0_15, FileName_67, &DepSpecs_72);
            }
            else
            {
              MR_Word ModuleName_68 = ((MR_Word) ((MR_hl_field(1, FileOrModule_18, (MR_Integer) 0))));

              parse_tree__generate_dep_d_files__generate_d_file_for_module_5_p_0(Globals0_15, ModuleName_68, &DepSpecs_72);
            }
            parse_tree__write_error_spec__write_error_specs_5_p_0(ErrorStream_14, Globals0_15, DepSpecs_72);
            *ModulesToLink_19 = (MR_Word) ((MR_Unsigned) 0U);
            *ExtraObjFiles_20 = (MR_Word) ((MR_Unsigned) 0U);
            *STATE_VARIABLE_HaveReadModuleMaps_39 = STATE_VARIABLE_HaveReadModuleMaps_0_38;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Globals_26;
            MR_Word HaveReadSrc_27;

            top_level__mercury_compile_main__read_module_or_file_10_p_0(ProgressStream_13, Globals0_15, &Globals_26, FileOrModule_18, (MR_Integer) 1, &HaveReadSrc_27, STATE_VARIABLE_HaveReadModuleMaps_0_38, STATE_VARIABLE_HaveReadModuleMaps_39);
            if (((MR_tag((MR_Word) HaveReadSrc_27)) == (MR_Integer) 1))
            {
              MR_Word Errors_29 = ((MR_Word) ((MR_hl_field(1, HaveReadSrc_27, (MR_Integer) 1))));
              MR_Word Specs_30;

              Specs_30 = parse_tree__parse_error__get_read_module_specs_1_f_0(Errors_29);
              parse_tree__write_error_spec__write_error_specs_5_p_0(ErrorStream_14, Globals_26, Specs_30);
            }
            else
            {
              MR_Word ParseTreeSrc_32 = ((MR_Word) ((MR_hl_field(0, HaveReadSrc_27, (MR_Integer) 2))));
              MR_Word Errors_79 = ((MR_Word) ((MR_hl_field(0, HaveReadSrc_27, (MR_Integer) 3))));
              MR_Word Specs_80;
              MR_Word Var_124;
              MR_Word Var_126;

              Specs_80 = parse_tree__parse_error__get_read_module_specs_1_f_0(Errors_79);
              parse_tree__write_error_spec__write_error_specs_5_p_0(ErrorStream_14, Globals_26, Specs_80);
              Var_126 = ((MR_Word) ((MR_hl_field(0, Errors_79, (MR_Integer) 0))));
              Var_124 = ((MR_Word) ((MR_hl_field(0, Errors_79, (MR_Integer) 2))));
              succeeded = mercury__set__is_non_empty_1_p_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_fatal_read_module_error_0), Var_126);
              if (!(succeeded))
              {
                MR_Word HaltSyntax_108;
                MR_Word Var_111;

                succeeded = mercury__set__is_non_empty_1_p_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_nonfatal_read_module_error_0), Var_124);
                if (succeeded)
                {
                  Var_111 = (MR_Integer) 6;
                  libs__globals__lookup_bool_option_3_p_0(Globals_26, Var_111, &HaltSyntax_108);
                  succeeded = (HaltSyntax_108 == (MR_Integer) 1);
                }
              }
              if (!(succeeded))
              {
                MR_String OutputFileName_33;
                MR_Word ModuleName_75 = ((MR_Word) ((MR_hl_field(0, ParseTreeSrc_32, (MR_Integer) 0))));
                MR_Word _Succeeded_34;

                parse_tree__file_names__module_name_to_file_name_8_p_0(Globals_26, (MR_String) "predicate \140top_level.mercury_compile_main.do_process_compiler_arg\'/12", (MR_Integer) 0, (MR_Word) (MR_mkword(1, &top_level__mercury_compile_main_scalar_common_2[2])), ModuleName_75, &OutputFileName_33);
                parse_tree__parse_tree_out__output_parse_tree_src_8_p_0(ProgressStream_13, ErrorStream_14, Globals_26, OutputFileName_33, ParseTreeSrc_32, &_Succeeded_34);
              }
            }
            *ModulesToLink_19 = (MR_Word) ((MR_Unsigned) 0U);
            *ExtraObjFiles_20 = (MR_Word) ((MR_Unsigned) 0U);
          }
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word InterfaceFile_35 = ((MR_Unsigned) ((MR_hl_field(1, OpModeArgs_16, (MR_Integer) 0))) & (MR_Integer) 3);

        top_level__mercury_compile_main__do_process_compiler_arg_make_interface_9_p_0(ProgressStream_13, ErrorStream_14, Globals0_15, InterfaceFile_35, FileOrModule_18, STATE_VARIABLE_HaveReadModuleMaps_0_38, STATE_VARIABLE_HaveReadModuleMaps_39);
        *ModulesToLink_19 = (MR_Word) ((MR_Unsigned) 0U);
        *ExtraObjFiles_20 = (MR_Word) ((MR_Unsigned) 0U);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word OpModeAugment_36 = ((MR_Word) ((MR_hl_field(2, OpModeArgs_16, (MR_Integer) 0))));
        MR_Word ModulesToRecompile_37;
        MR_Word STATE_VARIABLE_HaveReadModuleMaps_62_62;
        MR_Word Globals_83;
        MR_Word Smart0_86;
        MR_Word DisableSmart_87;
        MR_Word Var_64;

        libs__globals__lookup_bool_option_3_p_0(Globals0_15, (MR_Integer) 152, &Smart0_86);
        libs__globals__io_get_disable_smart_recompilation_3_p_0(&DisableSmart_87);
        switch (DisableSmart_87) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              libs__globals__set_option_4_p_0((MR_Integer) 152, (MR_Word) (MR_mkword(1, &top_level__mercury_compile_main_scalar_common_2[1])), Globals0_15, &Globals_83);
              ModulesToRecompile_37 = (MR_Word) ((MR_Unsigned) 0U);
              STATE_VARIABLE_HaveReadModuleMaps_62_62 = STATE_VARIABLE_HaveReadModuleMaps_0_38;
            }
            break;
          case (MR_Integer) 0:
            {
              Globals_83 = Globals0_15;
              switch (Smart0_86) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    ModulesToRecompile_37 = (MR_Word) ((MR_Unsigned) 0U);
                    STATE_VARIABLE_HaveReadModuleMaps_62_62 = STATE_VARIABLE_HaveReadModuleMaps_0_38;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word ModuleName_89;
                    MR_Word FindTargetFiles_91;
                    MR_Word FindTimestampFiles_92;
                    MR_Word CompilationTarget_98;
                    MR_Word TargetOtherExt_99;
                    MR_Word CompilationTarget_103;
                    MR_Word TimestampOtherExt_104;

                    if (((MR_tag((MR_Word) FileOrModule_18)) == (MR_Integer) 0))
                    {
                      MR_String FileName_90 = ((MR_String) ((MR_hl_field(0, FileOrModule_18, (MR_Integer) 0))));

                      parse_tree__file_names__file_name_to_module_name_2_p_0(FileName_90, &ModuleName_89);
                    }
                    else
                      ModuleName_89 = ((MR_Word) ((MR_hl_field(1, FileOrModule_18, (MR_Integer) 0))));
                    libs__globals__get_target_2_p_0(Globals_83, &CompilationTarget_98);
                    switch (CompilationTarget_98) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        TargetOtherExt_99 = (MR_Word) (((MR_Box) ((MR_String) ".c")));
                        break;
                      case (MR_Integer) 1:
                        TargetOtherExt_99 = (MR_Word) (((MR_Box) ((MR_String) ".cs")));
                        break;
                      case (MR_Integer) 2:
                        TargetOtherExt_99 = (MR_Word) (((MR_Box) ((MR_String) ".java")));
                        break;
                    }
                    {
                      FindTargetFiles_91 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(0, FindTargetFiles_91, 0) = ((MR_Box) (&top_level__mercury_compile_main_scalar_common_9[0]));
                      MR_hl_field(0, FindTargetFiles_91, 1) = ((MR_Box) (top_level__mercury_compile_main__do_process_compiler_arg_12_p_0_1));
                      MR_hl_field(0, FindTargetFiles_91, 2) = ((MR_Box) ((MR_Integer) 2));
                      MR_hl_field(0, FindTargetFiles_91, 3) = ((MR_Box) (Globals0_15));
                      MR_hl_field(0, FindTargetFiles_91, 4) = ((MR_Box) (TargetOtherExt_99));
                    }
                    libs__globals__get_target_2_p_0(Globals_83, &CompilationTarget_103);
                    switch (CompilationTarget_103) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        TimestampOtherExt_104 = (MR_Word) (((MR_Box) ((MR_String) ".c_date")));
                        break;
                      case (MR_Integer) 1:
                        TimestampOtherExt_104 = (MR_Word) (((MR_Box) ((MR_String) ".cs_date")));
                        break;
                      case (MR_Integer) 2:
                        TimestampOtherExt_104 = (MR_Word) (((MR_Box) ((MR_String) ".java_date")));
                        break;
                    }
                    {
                      FindTimestampFiles_92 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(0, FindTimestampFiles_92, 0) = ((MR_Box) (&top_level__mercury_compile_main_scalar_common_9[0]));
                      MR_hl_field(0, FindTimestampFiles_92, 1) = ((MR_Box) (top_level__mercury_compile_main__do_process_compiler_arg_12_p_0_2));
                      MR_hl_field(0, FindTimestampFiles_92, 2) = ((MR_Box) ((MR_Integer) 2));
                      MR_hl_field(0, FindTimestampFiles_92, 3) = ((MR_Box) (Globals0_15));
                      MR_hl_field(0, FindTimestampFiles_92, 4) = ((MR_Box) (TimestampOtherExt_104));
                    }
                    recompilation__check__should_recompile_9_p_0(Globals_83, ModuleName_89, FindTargetFiles_91, FindTimestampFiles_92, &ModulesToRecompile_37, STATE_VARIABLE_HaveReadModuleMaps_0_38, &STATE_VARIABLE_HaveReadModuleMaps_62_62);
                  }
                  break;
              }
            }
            break;
        }
        succeeded = (ModulesToRecompile_37 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          Var_64 = ((MR_Word) ((MR_hl_field(1, ModulesToRecompile_37, (MR_Integer) 0))));
          succeeded = (Var_64 == (MR_Word) ((MR_Unsigned) 0U));
        }
        if (succeeded)
        {
          *ModulesToLink_19 = (MR_Word) ((MR_Unsigned) 0U);
          *ExtraObjFiles_20 = (MR_Word) ((MR_Unsigned) 0U);
          *STATE_VARIABLE_HaveReadModuleMaps_39 = STATE_VARIABLE_HaveReadModuleMaps_62_62;
        }
        else
          top_level__mercury_compile_main__read_augment_and_process_module_13_p_0(ProgressStream_13, ErrorStream_14, Globals_83, OpModeAugment_36, OptionArgs_17, FileOrModule_18, ModulesToRecompile_37, ModulesToLink_19, ExtraObjFiles_20, STATE_VARIABLE_HaveReadModuleMaps_62_62, STATE_VARIABLE_HaveReadModuleMaps_39);
      }
      break;
  }
}

static void MR_CALL 
top_level__mercury_compile_main__read_augment_and_process_module_13_p_0(
  MR_Word ProgressStream_14,
  MR_Word ErrorStream_15,
  MR_Word Globals0_16,
  MR_Word OpModeAugment_17,
  MR_Word OptionArgs_18,
  MR_Word FileOrModule_19,
  MR_Word MaybeModulesToRecompile_20,
  MR_Word * ModulesToLink_21,
  MR_Word * ExtraObjFiles_22,
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_0_36,
  MR_Word * STATE_VARIABLE_HaveReadModuleMaps_37)
{
  MR_bool succeeded;
  MR_Word Globals_28;
  MR_Word HaveReadSrc_29;
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_45_45;

  switch (MR_tag((MR_Word) OpModeAugment_17)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(OpModeAugment_17)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
          }
          break;
        case (MR_Integer) 1:
          {
          }
          break;
        case (MR_Integer) 2:
          {
          }
          break;
        case (MR_Integer) 3:
          {
          }
          break;
        case (MR_Integer) 4:
        case (MR_Integer) 5:
          {
            MR_Word ReportCmdLineArgsDotErr_26;
            MR_Word StdErrStream_27;

            libs__globals__lookup_bool_option_3_p_0(Globals0_16, (MR_Integer) 81, &ReportCmdLineArgsDotErr_26);
            mercury__io__stderr_stream_3_p_0(&StdErrStream_27);
            switch (ReportCmdLineArgsDotErr_26) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_String Var_60;
                  MR_Word Var_62;

                  mercury__io__write_string_4_p_0(StdErrStream_27, (MR_String) "% Command line options start\n");
                  Var_62 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), OptionArgs_18, (MR_Word) ((MR_Unsigned) 0U));
                  Var_60 = mercury__string__join_list_2_f_0((MR_String) "\n% ", Var_62);
                  mercury__io__write_string_4_p_0(StdErrStream_27, (MR_String) "% ");
                  mercury__io__write_string_4_p_0(StdErrStream_27, Var_60);
                  mercury__io__write_string_4_p_0(StdErrStream_27, (MR_String) "\n");
                  mercury__io__write_string_4_p_0(StdErrStream_27, (MR_String) "% Command line options end\n");
                }
                break;
            }
          }
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word ReportCmdLineArgsDotErr_26;
        MR_Word StdErrStream_27;

        libs__globals__lookup_bool_option_3_p_0(Globals0_16, (MR_Integer) 81, &ReportCmdLineArgsDotErr_26);
        mercury__io__stderr_stream_3_p_0(&StdErrStream_27);
        switch (ReportCmdLineArgsDotErr_26) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
            }
            break;
          case (MR_Integer) 1:
            {
              MR_String Var_60;
              MR_Word Var_62;

              mercury__io__write_string_4_p_0(StdErrStream_27, (MR_String) "% Command line options start\n");
              Var_62 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), OptionArgs_18, (MR_Word) ((MR_Unsigned) 0U));
              Var_60 = mercury__string__join_list_2_f_0((MR_String) "\n% ", Var_62);
              mercury__io__write_string_4_p_0(StdErrStream_27, (MR_String) "% ");
              mercury__io__write_string_4_p_0(StdErrStream_27, Var_60);
              mercury__io__write_string_4_p_0(StdErrStream_27, (MR_String) "\n");
              mercury__io__write_string_4_p_0(StdErrStream_27, (MR_String) "% Command line options end\n");
            }
            break;
        }
      }
      break;
  }
  top_level__mercury_compile_main__read_module_or_file_10_p_0(ProgressStream_14, Globals0_16, &Globals_28, FileOrModule_19, (MR_Integer) 0, &HaveReadSrc_29, STATE_VARIABLE_HaveReadModuleMaps_0_36, &STATE_VARIABLE_HaveReadModuleMaps_45_45);
  if (((MR_tag((MR_Word) HaveReadSrc_29)) == (MR_Integer) 1))
  {
    MR_Word Errors_31 = ((MR_Word) ((MR_hl_field(1, HaveReadSrc_29, (MR_Integer) 1))));
    MR_Word Specs0_32;

    Specs0_32 = parse_tree__parse_error__get_read_module_specs_1_f_0(Errors_31);
    parse_tree__write_error_spec__write_error_specs_5_p_0(ErrorStream_15, Globals_28, Specs0_32);
    *ModulesToLink_21 = (MR_Word) ((MR_Unsigned) 0U);
    *ExtraObjFiles_22 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_HaveReadModuleMaps_37 = STATE_VARIABLE_HaveReadModuleMaps_45_45;
  }
  else
  {
    MR_String FileName_33 = ((MR_String) ((MR_hl_field(0, HaveReadSrc_29, (MR_Integer) 0))));
    MR_Word MaybeTimestamp_34 = ((MR_Word) ((MR_hl_field(0, HaveReadSrc_29, (MR_Integer) 1))));
    MR_Word ParseTreeSrc_35 = ((MR_Word) ((MR_hl_field(0, HaveReadSrc_29, (MR_Integer) 2))));
    MR_Word Errors_51 = ((MR_Word) ((MR_hl_field(0, HaveReadSrc_29, (MR_Integer) 3))));
    MR_Word Specs0_52;
    MR_Word Var_89;
    MR_Word Var_91;

    Specs0_52 = parse_tree__parse_error__get_read_module_specs_1_f_0(Errors_51);
    Var_91 = ((MR_Word) ((MR_hl_field(0, Errors_51, (MR_Integer) 0))));
    Var_89 = ((MR_Word) ((MR_hl_field(0, Errors_51, (MR_Integer) 2))));
    succeeded = mercury__set__is_non_empty_1_p_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_fatal_read_module_error_0), Var_91);
    if (!(succeeded))
    {
      MR_Word HaltSyntax_73;
      MR_Word Var_76;

      succeeded = mercury__set__is_non_empty_1_p_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_nonfatal_read_module_error_0), Var_89);
      if (succeeded)
      {
        Var_76 = (MR_Integer) 6;
        libs__globals__lookup_bool_option_3_p_0(Globals_28, Var_76, &HaltSyntax_73);
        succeeded = (HaltSyntax_73 == (MR_Integer) 1);
      }
    }
    if (succeeded)
    {
      parse_tree__write_error_spec__write_error_specs_5_p_0(ErrorStream_15, Globals_28, Specs0_52);
      *ModulesToLink_21 = (MR_Word) ((MR_Unsigned) 0U);
      *ExtraObjFiles_22 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_HaveReadModuleMaps_37 = STATE_VARIABLE_HaveReadModuleMaps_45_45;
    }
    else
      top_level__mercury_compile_main__read_augment_and_process_module_ok_15_p_0(ProgressStream_14, ErrorStream_15, Globals_28, OpModeAugment_17, FileName_33, MaybeTimestamp_34, ParseTreeSrc_35, Errors_51, MaybeModulesToRecompile_20, ModulesToLink_21, ExtraObjFiles_22, STATE_VARIABLE_HaveReadModuleMaps_45_45, STATE_VARIABLE_HaveReadModuleMaps_37);
  }
}

static void MR_CALL 
top_level__mercury_compile_main__read_augment_and_process_module_ok_15_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_String conv8_ModuleToLink_4;

  top_level__mercury_compile_main__module_to_link_2_p_0(((MR_Word) (wrapper_arg_1)), &conv8_ModuleToLink_4);
  *wrapper_arg_2 = ((MR_Box) (conv8_ModuleToLink_4));
}

static void MR_CALL 
top_level__mercury_compile_main__read_augment_and_process_module_ok_15_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8)
{
  MR_Box closure = closure_arg;
  MR_Word conv4_ExtraObjFiles_28;
  MR_Word conv3_STATE_VARIABLE_Specs_39;
  MR_Word conv2_STATE_VARIABLE_HaveReadModuleMaps_41;

  top_level__mercury_compile_main__augment_and_process_module_17_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 6)))), ((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 7)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 8)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 9)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 10)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 11)))), ((MR_Word) (wrapper_arg_1)), &conv4_ExtraObjFiles_28, ((MR_Word) (wrapper_arg_3)), &conv3_STATE_VARIABLE_Specs_39, ((MR_Word) (wrapper_arg_5)), &conv2_STATE_VARIABLE_HaveReadModuleMaps_41);
  *wrapper_arg_2 = ((MR_Box) (conv4_ExtraObjFiles_28));
  *wrapper_arg_4 = ((MR_Box) (conv3_STATE_VARIABLE_Specs_39));
  *wrapper_arg_6 = ((MR_Box) (conv2_STATE_VARIABLE_HaveReadModuleMaps_41));
}

static void MR_CALL 
top_level__mercury_compile_main__read_augment_and_process_module_ok_15_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_TimestampFiles_10;

  top_level__mercury_compile_main__find_timestamp_files_2_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv1_TimestampFiles_10);
  *wrapper_arg_2 = ((MR_Box) (conv1_TimestampFiles_10));
}

static MR_Box MR_CALL 
top_level__mercury_compile_main__read_augment_and_process_module_ok_15_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__2_2;

  conv0_HeadVar__2_2 = parse_tree__item_util__parse_tree_module_src_project_name_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
  return wrapper_arg_2;
}

static MR_bool MR_CALL 
top_level__mercury_compile_main__read_augment_and_process_module_ok_15_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = top_level__mercury_compile_main__IntroducedFrom__pred__read_augment_and_process_module_ok__1416__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static void MR_CALL 
top_level__mercury_compile_main__read_augment_and_process_module_ok_15_p_0(
  MR_Word ProgressStream_16,
  MR_Word ErrorStream_17,
  MR_Word Globals_18,
  MR_Word OpModeAugment_19,
  MR_String FileName_20,
  MR_Word MaybeTimestamp_21,
  MR_Word ParseTreeSrc_22,
  MR_Word Errors_23,
  MR_Word MaybeModulesToRecompile_24,
  MR_Word * ModulesToLink_25,
  MR_Word * ExtraObjFiles_26,
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_0_43,
  MR_Word * STATE_VARIABLE_HaveReadModuleMaps_44)
{
  MR_bool succeeded;
  MR_Word Specs0_29;
  MR_Word ModuleName_30;
  MR_Word ParseTreeModuleSrcs0_31;
  MR_Word Specs1_32;
  MR_Word ParseTreeModuleSrcsToRecompile_36;
  MR_Word ParseTreeModuleNames_37;
  MR_Word NestedModuleNames_38;
  MR_Word FindTimestampFiles_39;
  MR_Word TraceProf_40;
  MR_Word GlobalsToUse_42;
  MR_Word Var_49;
  MR_Word CompilationTarget_105;
  MR_Word TimestampOtherExt_106;
  MR_Word ExtraObjFileLists_110;
  MR_Word Var_111;
  MR_Word STATE_VARIABLE_Specs_40_112;
  MR_Word Var_103;
  MR_Box conv7_STATE_VARIABLE_Specs_40_112;
  MR_Box conv6_STATE_VARIABLE_HaveReadModuleMaps_44;
  MR_Box conv5_STATE_VARIABLE_IO_42_113;

  Specs0_29 = parse_tree__parse_error__get_read_module_specs_1_f_0(Errors_23);
  ModuleName_30 = ((MR_Word) ((MR_hl_field(0, ParseTreeSrc_22, (MR_Integer) 0))));
  parse_tree__split_parse_tree_src__split_into_compilation_units_perform_checks_5_p_0(Globals_18, ParseTreeSrc_22, &ParseTreeModuleSrcs0_31, Specs0_29, &Specs1_32);
  if ((MaybeModulesToRecompile_24 == (MR_Word) ((MR_Unsigned) 0U)))
    ParseTreeModuleSrcsToRecompile_36 = ParseTreeModuleSrcs0_31;
  else
  {
    MR_Word ModulesToRecompile_33 = ((MR_Word) ((MR_hl_field(1, MaybeModulesToRecompile_24, (MR_Integer) 0))));
    MR_Word ToRecompile_34;

    {
      ToRecompile_34 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, ToRecompile_34, 0) = ((MR_Box) (&top_level__mercury_compile_main_scalar_common_8[0]));
      MR_hl_field(0, ToRecompile_34, 1) = ((MR_Box) (top_level__mercury_compile_main__read_augment_and_process_module_ok_15_p_0_1));
      MR_hl_field(0, ToRecompile_34, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, ToRecompile_34, 3) = ((MR_Box) (ModulesToRecompile_33));
    }
    mercury__list__filter_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_module_src_0), ToRecompile_34, ParseTreeModuleSrcs0_31, &ParseTreeModuleSrcsToRecompile_36);
  }
  Var_49 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_module_src_0), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&top_level__mercury_compile_main_scalar_common_5[1]), ParseTreeModuleSrcs0_31);
  ParseTreeModuleNames_37 = mercury__set__list_to_set_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_49);
  mercury__set__delete_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (ModuleName_30)), ParseTreeModuleNames_37, &NestedModuleNames_38);
  libs__globals__get_target_2_p_0(Globals_18, &CompilationTarget_105);
  switch (CompilationTarget_105) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      TimestampOtherExt_106 = (MR_Word) (((MR_Box) ((MR_String) ".c_date")));
      break;
    case (MR_Integer) 1:
      TimestampOtherExt_106 = (MR_Word) (((MR_Box) ((MR_String) ".cs_date")));
      break;
    case (MR_Integer) 2:
      TimestampOtherExt_106 = (MR_Word) (((MR_Box) ((MR_String) ".java_date")));
      break;
  }
  {
    FindTimestampFiles_39 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, FindTimestampFiles_39, 0) = ((MR_Box) (&top_level__mercury_compile_main_scalar_common_9[0]));
    MR_hl_field(0, FindTimestampFiles_39, 1) = ((MR_Box) (top_level__mercury_compile_main__read_augment_and_process_module_ok_15_p_0_3));
    MR_hl_field(0, FindTimestampFiles_39, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, FindTimestampFiles_39, 3) = ((MR_Box) (Globals_18));
    MR_hl_field(0, FindTimestampFiles_39, 4) = ((MR_Box) (TimestampOtherExt_106));
  }
  libs__globals__lookup_bool_option_3_p_0(Globals_18, (MR_Integer) 157, &TraceProf_40);
  succeeded = mdbcomp__builtin_modules__non_traced_mercury_builtin_module_1_p_0(ModuleName_30);
  if (succeeded)
  {
    Var_103 = mdbcomp__builtin_modules__mercury_profiling_builtin_module_0_f_0();
    succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ModuleName_30, Var_103);
    if (succeeded)
      succeeded = (TraceProf_40 == (MR_Integer) 1);
    succeeded = !(succeeded);
  }
  if (succeeded)
  {
    MR_Word Globals1_41;

    libs__globals__set_option_4_p_0((MR_Integer) 319, (MR_Word) (MR_mkword(1, &top_level__mercury_compile_main_scalar_common_2[1])), Globals_18, &Globals1_41);
    libs__globals__set_trace_level_none_2_p_0(Globals1_41, &GlobalsToUse_42);
  }
  else
    GlobalsToUse_42 = Globals_18;
  {
    Var_111 = (MR_Word) MR_new_object(MR_Word, (12 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_111, 0) = ((MR_Box) (&top_level__mercury_compile_main_scalar_common_10[0]));
    MR_hl_field(0, Var_111, 1) = ((MR_Box) (top_level__mercury_compile_main__read_augment_and_process_module_ok_15_p_0_4));
    MR_hl_field(0, Var_111, 2) = ((MR_Box) ((MR_Integer) 9));
    MR_hl_field(0, Var_111, 3) = ((MR_Box) (ProgressStream_16));
    MR_hl_field(0, Var_111, 4) = ((MR_Box) (ErrorStream_17));
    MR_hl_field(0, Var_111, 5) = ((MR_Box) (GlobalsToUse_42));
    MR_hl_field(0, Var_111, 6) = ((MR_Box) (OpModeAugment_19));
    MR_hl_field(0, Var_111, 7) = ((MR_Box) (FileName_20));
    MR_hl_field(0, Var_111, 8) = ((MR_Box) (MaybeTimestamp_21));
    MR_hl_field(0, Var_111, 9) = ((MR_Box) (ModuleName_30));
    MR_hl_field(0, Var_111, 10) = ((MR_Box) (NestedModuleNames_38));
    MR_hl_field(0, Var_111, 11) = ((MR_Box) (FindTimestampFiles_39));
  }
  mercury__list__map_foldl3_9_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_module_src_0), (MR_Word) (&top_level__mercury_compile_main_scalar_common_1[0]), (MR_Word) (&top_level__mercury_compile_main_scalar_common_1[2]), (MR_Word) (&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_maps_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_111, ParseTreeModuleSrcsToRecompile_36, &ExtraObjFileLists_110, ((MR_Box) (Specs1_32)), &conv7_STATE_VARIABLE_Specs_40_112, ((MR_Box) (STATE_VARIABLE_HaveReadModuleMaps_0_43)), &conv6_STATE_VARIABLE_HaveReadModuleMaps_44, ((MR_Box) ((MR_Integer) 0)), &conv5_STATE_VARIABLE_IO_42_113);
  STATE_VARIABLE_Specs_40_112 = ((MR_Word) (conv7_STATE_VARIABLE_Specs_40_112));
  *STATE_VARIABLE_HaveReadModuleMaps_44 = ((MR_Word) (conv6_STATE_VARIABLE_HaveReadModuleMaps_44));
  parse_tree__write_error_spec__write_error_specs_5_p_0(ErrorStream_17, GlobalsToUse_42, STATE_VARIABLE_Specs_40_112);
  mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_module_src_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&top_level__mercury_compile_main_scalar_common_5[2]), ParseTreeModuleSrcsToRecompile_36, ModulesToLink_25);
  mercury__list__condense_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ExtraObjFileLists_110, ExtraObjFiles_26);
}

static void MR_CALL 
top_level__mercury_compile_main__do_process_compiler_arg_make_interface_9_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv8_HeadVar__5_5;

  parse_tree__write_module_interface_files__write_short_interface_file_int3_7_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), &conv8_HeadVar__5_5);
  *wrapper_arg_2 = ((MR_Box) (conv8_HeadVar__5_5));
}

static void MR_CALL 
top_level__mercury_compile_main__do_process_compiler_arg_make_interface_9_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  MR_Box closure = closure_arg;
  MR_Word conv5_HeadVar__8_8;
  MR_Word conv4_HeadVar__10_10;

  parse_tree__write_module_interface_files__write_interface_file_int1_int2_12_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 6)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 7)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 8)))), ((MR_Word) (wrapper_arg_1)), &conv5_HeadVar__8_8, ((MR_Word) (wrapper_arg_3)), &conv4_HeadVar__10_10);
  *wrapper_arg_2 = ((MR_Box) (conv5_HeadVar__8_8));
  *wrapper_arg_4 = ((MR_Box) (conv4_HeadVar__10_10));
}

static void MR_CALL 
top_level__mercury_compile_main__do_process_compiler_arg_make_interface_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_HeadVar__8_8;
  MR_Word conv0_HeadVar__10_10;

  parse_tree__write_module_interface_files__write_private_interface_file_int0_12_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 6)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 7)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 8)))), ((MR_Word) (wrapper_arg_1)), &conv1_HeadVar__8_8, ((MR_Word) (wrapper_arg_3)), &conv0_HeadVar__10_10);
  *wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__8_8));
  *wrapper_arg_4 = ((MR_Box) (conv0_HeadVar__10_10));
}

static void MR_CALL 
top_level__mercury_compile_main__do_process_compiler_arg_make_interface_9_p_0(
  MR_Word ProgressStream_10,
  MR_Word ErrorStream_11,
  MR_Word Globals0_12,
  MR_Word InterfaceFile_13,
  MR_Word FileOrModule_14,
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_0_32,
  MR_Word * STATE_VARIABLE_HaveReadModuleMaps_33)
{
  MR_bool succeeded;
  MR_Word ReturnTimestamp_17;
  MR_Word Globals_19;
  MR_Word HaveReadSrc_20;
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_38_38;

  switch (InterfaceFile_13) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word GenerateVersionNumbers_18;

        libs__globals__lookup_bool_option_3_p_0(Globals0_12, (MR_Integer) 153, &GenerateVersionNumbers_18);
        switch (GenerateVersionNumbers_18) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            ReturnTimestamp_17 = (MR_Integer) 1;
            break;
          case (MR_Integer) 1:
            ReturnTimestamp_17 = (MR_Integer) 0;
            break;
        }
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word GenerateVersionNumbers_52;

        libs__globals__lookup_bool_option_3_p_0(Globals0_12, (MR_Integer) 153, &GenerateVersionNumbers_52);
        switch (GenerateVersionNumbers_52) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            ReturnTimestamp_17 = (MR_Integer) 1;
            break;
          case (MR_Integer) 1:
            ReturnTimestamp_17 = (MR_Integer) 0;
            break;
        }
      }
      break;
    case (MR_Integer) 2:
      ReturnTimestamp_17 = (MR_Integer) 1;
      break;
  }
  top_level__mercury_compile_main__read_module_or_file_10_p_0(ProgressStream_10, Globals0_12, &Globals_19, FileOrModule_14, ReturnTimestamp_17, &HaveReadSrc_20, STATE_VARIABLE_HaveReadModuleMaps_0_32, &STATE_VARIABLE_HaveReadModuleMaps_38_38);
  if (((MR_tag((MR_Word) HaveReadSrc_20)) == (MR_Integer) 1))
  {
    MR_Word ReadErrors_22 = ((MR_Word) ((MR_hl_field(1, HaveReadSrc_20, (MR_Integer) 1))));
    MR_Word ReadSpecs_23;

    ReadSpecs_23 = parse_tree__parse_error__get_read_module_specs_1_f_0(ReadErrors_22);
    parse_tree__write_error_spec__write_error_specs_5_p_0(ErrorStream_11, Globals_19, ReadSpecs_23);
    *STATE_VARIABLE_HaveReadModuleMaps_33 = STATE_VARIABLE_HaveReadModuleMaps_38_38;
  }
  else
  {
    MR_String FileName_24 = ((MR_String) ((MR_hl_field(0, HaveReadSrc_20, (MR_Integer) 0))));
    MR_Word MaybeTimestamp_25 = ((MR_Word) ((MR_hl_field(0, HaveReadSrc_20, (MR_Integer) 1))));
    MR_Word ParseTreeSrc_26 = ((MR_Word) ((MR_hl_field(0, HaveReadSrc_20, (MR_Integer) 2))));
    MR_Word ReadErrors_57 = ((MR_Word) ((MR_hl_field(0, HaveReadSrc_20, (MR_Integer) 3))));
    MR_Word ReadSpecs_58;
    MR_Word Var_104;
    MR_Word Var_106;

    ReadSpecs_58 = parse_tree__parse_error__get_read_module_specs_1_f_0(ReadErrors_57);
    Var_106 = ((MR_Word) ((MR_hl_field(0, ReadErrors_57, (MR_Integer) 0))));
    Var_104 = ((MR_Word) ((MR_hl_field(0, ReadErrors_57, (MR_Integer) 2))));
    succeeded = mercury__set__is_non_empty_1_p_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_fatal_read_module_error_0), Var_106);
    if (!(succeeded))
    {
      MR_Word HaltSyntax_88;
      MR_Word Var_91;

      succeeded = mercury__set__is_non_empty_1_p_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_nonfatal_read_module_error_0), Var_104);
      if (succeeded)
      {
        Var_91 = (MR_Integer) 6;
        libs__globals__lookup_bool_option_3_p_0(Globals_19, Var_91, &HaltSyntax_88);
        succeeded = (HaltSyntax_88 == (MR_Integer) 1);
      }
    }
    if (succeeded)
    {
      parse_tree__write_error_spec__write_error_specs_5_p_0(ErrorStream_11, Globals_19, ReadSpecs_58);
      *STATE_VARIABLE_HaveReadModuleMaps_33 = STATE_VARIABLE_HaveReadModuleMaps_38_38;
    }
    else
    {
      MR_Word ModuleName_27 = ((MR_Word) ((MR_hl_field(0, ParseTreeSrc_26, (MR_Integer) 0))));
      MR_Word ParseTreeModuleSrcs_28;
      MR_Word ReadSplitSpecs_29;
      MR_Word Specs_30;
      MR_Word Limited_107;
      MR_Word ExtraErrorInfo_108;

      parse_tree__split_parse_tree_src__split_into_compilation_units_perform_checks_5_p_0(Globals_19, ParseTreeSrc_26, &ParseTreeModuleSrcs_28, ReadSpecs_58, &ReadSplitSpecs_29);
      parse_tree__error_util__filter_interface_generation_specs_3_p_0(Globals_19, ReadSplitSpecs_29, &Specs_30);
      parse_tree__write_error_spec__write_error_specs_5_p_0(ErrorStream_11, Globals_19, Specs_30);
      libs__globals__io_get_some_errors_were_context_limited_3_p_0(&Limited_107);
      libs__globals__io_set_some_errors_were_context_limited_3_p_0((MR_Integer) 0);
      libs__globals__io_get_extra_error_info_3_p_0(&ExtraErrorInfo_108);
      libs__globals__io_set_extra_error_info_3_p_0((MR_Integer) 0);
      switch (Limited_107) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
          }
          break;
        case (MR_Integer) 1:
          {
            MR_String Var_116;
            MR_String Var_120;

            Var_116 = mercury__string__f_43_43_2_f_0((MR_String) "Some error messages were suppressed ", (MR_String) "by \140--limit-error-contexts\' options.\n");
            mercury__io__write_string_4_p_0(ErrorStream_11, Var_116);
            Var_120 = mercury__string__f_43_43_2_f_0((MR_String) "You can see the suppressed messages ", (MR_String) "if you recompile without these options.\n");
            mercury__io__write_string_4_p_0(ErrorStream_11, Var_120);
          }
          break;
      }
      switch (ExtraErrorInfo_108) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word VerboseErrors_109;

            libs__globals__lookup_bool_option_3_p_0(Globals_19, (MR_Integer) 74, &VerboseErrors_109);
            switch (VerboseErrors_109) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                mercury__io__write_string_4_p_0(ErrorStream_11, (MR_String) "For more information, recompile with \140-E\'.\n");
                break;
              case (MR_Integer) 1:
                {
                }
                break;
            }
          }
          break;
      }
      switch (InterfaceFile_13) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Var_44;
            MR_Word _Succeededs_31;
            MR_Box conv3_STATE_VARIABLE_HaveReadModuleMaps_33;
            MR_Box conv2_STATE_VARIABLE_IO_35;

            {
              Var_44 = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_44, 0) = ((MR_Box) (&top_level__mercury_compile_main_scalar_common_6[0]));
              MR_hl_field(0, Var_44, 1) = ((MR_Box) (top_level__mercury_compile_main__do_process_compiler_arg_make_interface_9_p_0_1));
              MR_hl_field(0, Var_44, 2) = ((MR_Box) ((MR_Integer) 6));
              MR_hl_field(0, Var_44, 3) = ((MR_Box) (ProgressStream_10));
              MR_hl_field(0, Var_44, 4) = ((MR_Box) (ErrorStream_11));
              MR_hl_field(0, Var_44, 5) = ((MR_Box) (Globals0_12));
              MR_hl_field(0, Var_44, 6) = ((MR_Box) (FileName_24));
              MR_hl_field(0, Var_44, 7) = ((MR_Box) (ModuleName_27));
              MR_hl_field(0, Var_44, 8) = ((MR_Box) (MaybeTimestamp_25));
            }
            mercury__list__map_foldl2_7_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_module_src_0), (MR_Word) (&libs__maybe_succeeded__libs__maybe_succeeded__type_ctor_info_maybe_succeeded_0), (MR_Word) (&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_maps_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_44, ParseTreeModuleSrcs_28, &_Succeededs_31, ((MR_Box) (STATE_VARIABLE_HaveReadModuleMaps_38_38)), &conv3_STATE_VARIABLE_HaveReadModuleMaps_33, ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_35);
            *STATE_VARIABLE_HaveReadModuleMaps_33 = ((MR_Word) (conv3_STATE_VARIABLE_HaveReadModuleMaps_33));
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Var_47;
            MR_Word _Succeededs_53;
            MR_Box conv7_STATE_VARIABLE_HaveReadModuleMaps_33;
            MR_Box conv6_STATE_VARIABLE_IO_35;

            {
              Var_47 = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_47, 0) = ((MR_Box) (&top_level__mercury_compile_main_scalar_common_6[0]));
              MR_hl_field(0, Var_47, 1) = ((MR_Box) (top_level__mercury_compile_main__do_process_compiler_arg_make_interface_9_p_0_2));
              MR_hl_field(0, Var_47, 2) = ((MR_Box) ((MR_Integer) 6));
              MR_hl_field(0, Var_47, 3) = ((MR_Box) (ProgressStream_10));
              MR_hl_field(0, Var_47, 4) = ((MR_Box) (ErrorStream_11));
              MR_hl_field(0, Var_47, 5) = ((MR_Box) (Globals0_12));
              MR_hl_field(0, Var_47, 6) = ((MR_Box) (FileName_24));
              MR_hl_field(0, Var_47, 7) = ((MR_Box) (ModuleName_27));
              MR_hl_field(0, Var_47, 8) = ((MR_Box) (MaybeTimestamp_25));
            }
            mercury__list__map_foldl2_7_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_module_src_0), (MR_Word) (&libs__maybe_succeeded__libs__maybe_succeeded__type_ctor_info_maybe_succeeded_0), (MR_Word) (&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_maps_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_47, ParseTreeModuleSrcs_28, &_Succeededs_53, ((MR_Box) (STATE_VARIABLE_HaveReadModuleMaps_38_38)), &conv7_STATE_VARIABLE_HaveReadModuleMaps_33, ((MR_Box) ((MR_Integer) 0)), &conv6_STATE_VARIABLE_IO_35);
            *STATE_VARIABLE_HaveReadModuleMaps_33 = ((MR_Word) (conv7_STATE_VARIABLE_HaveReadModuleMaps_33));
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Var_50;
            MR_Word _Succeededs_55;
            MR_Box conv9_STATE_VARIABLE_IO_35;

            {
              Var_50 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_50, 0) = ((MR_Box) (&top_level__mercury_compile_main_scalar_common_7[0]));
              MR_hl_field(0, Var_50, 1) = ((MR_Box) (top_level__mercury_compile_main__do_process_compiler_arg_make_interface_9_p_0_3));
              MR_hl_field(0, Var_50, 2) = ((MR_Box) ((MR_Integer) 3));
              MR_hl_field(0, Var_50, 3) = ((MR_Box) (ProgressStream_10));
              MR_hl_field(0, Var_50, 4) = ((MR_Box) (ErrorStream_11));
              MR_hl_field(0, Var_50, 5) = ((MR_Box) (Globals0_12));
            }
            mercury__list__map_foldl_5_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_module_src_0), (MR_Word) (&libs__maybe_succeeded__libs__maybe_succeeded__type_ctor_info_maybe_succeeded_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_50, ParseTreeModuleSrcs_28, &_Succeededs_55, ((MR_Box) ((MR_Integer) 0)), &conv9_STATE_VARIABLE_IO_35);
            *STATE_VARIABLE_HaveReadModuleMaps_33 = STATE_VARIABLE_HaveReadModuleMaps_38_38;
          }
          break;
      }
    }
  }
}

static void MR_CALL 
top_level__mercury_compile_main__read_module_or_file_10_p_0(
  MR_Word ProgressStream_11,
  MR_Word Globals0_12,
  MR_Word * Globals_13,
  MR_Word FileOrModuleName_14,
  MR_Word ReturnTimestamp_15,
  MR_Word * HaveReadSrc_16,
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_0_37,
  MR_Word * STATE_VARIABLE_HaveReadModuleMaps_38)
{
  MR_bool succeeded;
  MR_Word Stats_36;

  if (((MR_tag((MR_Word) FileOrModuleName_14)) == (MR_Integer) 0))
  {
    MR_String FileName_33 = ((MR_String) ((MR_hl_field(0, FileOrModuleName_14, (MR_Integer) 0))));
    MR_String FileNameDotM_34;
    MR_Word DefaultModuleName_35;
    MR_Word Verbose_98;
    MR_String ParsingMsg_99;
    MR_String Var_156;
    MR_Word HaveReadSrc1_94;
    MR_Word Var_67;
    MR_Word HaveReadSrc0_79;
    MR_String FN_80;
    MR_Word MaybeTimestamp0_81;
    MR_Word PT_82;
    MR_Word E_83;
    MR_Word MaybeTimestamp_84;
    MR_Box conv0_HaveReadSrc0_79;

    FileNameDotM_34 = mercury__string__f_43_43_2_f_0(FileName_33, (MR_String) ".m");
    libs__globals__lookup_bool_option_3_p_0(Globals0_12, (MR_Integer) 72, &Verbose_98);
    Var_156 = mercury__string__f_43_43_2_f_0(FileNameDotM_34, (MR_String) "\' and imported interfaces...\n");
    ParsingMsg_99 = mercury__string__f_43_43_2_f_0((MR_String) "% Parsing file \140", Var_156);
    libs__file_util__maybe_write_string_5_p_0(ProgressStream_11, Verbose_98, ParsingMsg_99);
    parse_tree__file_names__file_name_to_module_name_2_p_0(FileName_33, &DefaultModuleName_35);
    Var_67 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_HaveReadModuleMaps_0_37, (MR_Integer) 0))));
    succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&top_level__mercury_compile_main_scalar_common_1[1]), Var_67, ((MR_Box) (DefaultModuleName_35)), &conv0_HaveReadSrc0_79);
    if (succeeded)
    {
      HaveReadSrc0_79 = ((MR_Word) (conv0_HaveReadSrc0_79));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      succeeded = ((MR_tag((MR_Word) HaveReadSrc0_79)) == (MR_Integer) 0);
      if (succeeded)
      {
        FN_80 = ((MR_String) ((MR_hl_field(0, HaveReadSrc0_79, (MR_Integer) 0))));
        MaybeTimestamp0_81 = ((MR_Word) ((MR_hl_field(0, HaveReadSrc0_79, (MR_Integer) 1))));
        PT_82 = ((MR_Word) ((MR_hl_field(0, HaveReadSrc0_79, (MR_Integer) 2))));
        E_83 = ((MR_Word) ((MR_hl_field(0, HaveReadSrc0_79, (MR_Integer) 3))));
        parse_tree__read_modules__return_timestamp_if_needed_3_p_0(ReturnTimestamp_15, MaybeTimestamp0_81, &MaybeTimestamp_84);
        {
          HaveReadSrc1_94 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, HaveReadSrc1_94, 0) = ((MR_Box) (FN_80));
          MR_hl_field(0, HaveReadSrc1_94, 1) = ((MR_Box) (MaybeTimestamp_84));
          MR_hl_field(0, HaveReadSrc1_94, 2) = ((MR_Box) (PT_82));
          MR_hl_field(0, HaveReadSrc1_94, 3) = ((MR_Box) (E_83));
        }
        succeeded = MR_TRUE;
      }
    }
    if (succeeded)
    {
      MR_Word HaveReadModuleMapSrc0_85;
      MR_Word HaveReadModuleMapSrc_86;
      MR_Word Var_137;
      MR_Word Var_138;
      MR_Word Var_139;
      MR_Word Var_140;
      MR_Word Var_141;
      MR_Word Var_142;
      MR_Word Var_143;

      *Globals_13 = Globals0_12;
      *HaveReadSrc_16 = HaveReadSrc1_94;
      HaveReadModuleMapSrc0_85 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_HaveReadModuleMaps_0_37, (MR_Integer) 0))));
      mercury__map__delete_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&top_level__mercury_compile_main_scalar_common_1[1]), ((MR_Box) (DefaultModuleName_35)), HaveReadModuleMapSrc0_85, &HaveReadModuleMapSrc_86);
      Var_137 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_HaveReadModuleMaps_0_37, (MR_Integer) 1))));
      Var_138 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_HaveReadModuleMaps_0_37, (MR_Integer) 2))));
      Var_139 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_HaveReadModuleMaps_0_37, (MR_Integer) 3))));
      Var_140 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_HaveReadModuleMaps_0_37, (MR_Integer) 4))));
      Var_141 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_HaveReadModuleMaps_0_37, (MR_Integer) 5))));
      Var_142 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_HaveReadModuleMaps_0_37, (MR_Integer) 6))));
      Var_143 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_HaveReadModuleMaps_0_37, (MR_Integer) 7))));
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
        *STATE_VARIABLE_HaveReadModuleMaps_38 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (HaveReadModuleMapSrc_86));
        MR_hl_field(0, base, 1) = ((MR_Box) (Var_137));
        MR_hl_field(0, base, 2) = ((MR_Box) (Var_138));
        MR_hl_field(0, base, 3) = ((MR_Box) (Var_139));
        MR_hl_field(0, base, 4) = ((MR_Box) (Var_140));
        MR_hl_field(0, base, 5) = ((MR_Box) (Var_141));
        MR_hl_field(0, base, 6) = ((MR_Box) (Var_142));
        MR_hl_field(0, base, 7) = ((MR_Box) (Var_143));
      }
    }
    else
    {
      MR_Word Var_71;
      MR_Word DisableSmart_87;

      {
        Var_71 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_71, 0) = (MR_Box) ((MR_Unsigned) (ReturnTimestamp_15));
      }
      parse_tree__read_modules__read_module_src_from_file_9_p_0(Globals0_12, FileName_33, FileNameDotM_34, (MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 1, Var_71, HaveReadSrc_16);
      libs__globals__io_get_disable_smart_recompilation_3_p_0(&DisableSmart_87);
      switch (DisableSmart_87) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          libs__globals__set_option_4_p_0((MR_Integer) 152, (MR_Word) (MR_mkword(1, &top_level__mercury_compile_main_scalar_common_2[1])), Globals0_12, Globals_13);
          break;
        case (MR_Integer) 0:
          *Globals_13 = Globals0_12;
          break;
      }
      *STATE_VARIABLE_HaveReadModuleMaps_38 = STATE_VARIABLE_HaveReadModuleMaps_0_37;
    }
  }
  else
  {
    MR_Word ModuleName_19 = ((MR_Word) ((MR_hl_field(1, FileOrModuleName_14, (MR_Integer) 0))));
    MR_Word Verbose_20;
    MR_String ModuleNameStr_21;
    MR_String ParsingMsg_22;
    MR_String Var_153;
    MR_Word HaveReadSrc1_29;
    MR_Word HaveReadSrc0_23;
    MR_String FN_24;
    MR_Word MaybeTimestamp0_25;
    MR_Word PT_26;
    MR_Word E_27;
    MR_Word MaybeTimestamp_28;
    MR_Word Var_47;
    MR_Box conv1_HaveReadSrc0_23;

    libs__globals__lookup_bool_option_3_p_0(Globals0_12, (MR_Integer) 72, &Verbose_20);
    ModuleNameStr_21 = mdbcomp__sym_name__sym_name_to_string_1_f_0(ModuleName_19);
    Var_153 = mercury__string__f_43_43_2_f_0(ModuleNameStr_21, (MR_String) "\' and imported interfaces...\n");
    ParsingMsg_22 = mercury__string__f_43_43_2_f_0((MR_String) "% Parsing file \140", Var_153);
    libs__file_util__maybe_write_string_5_p_0(ProgressStream_11, Verbose_20, ParsingMsg_22);
    Var_47 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_HaveReadModuleMaps_0_37, (MR_Integer) 0))));
    succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&top_level__mercury_compile_main_scalar_common_1[1]), Var_47, ((MR_Box) (ModuleName_19)), &conv1_HaveReadSrc0_23);
    if (succeeded)
    {
      HaveReadSrc0_23 = ((MR_Word) (conv1_HaveReadSrc0_23));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      succeeded = ((MR_tag((MR_Word) HaveReadSrc0_23)) == (MR_Integer) 0);
      if (succeeded)
      {
        FN_24 = ((MR_String) ((MR_hl_field(0, HaveReadSrc0_23, (MR_Integer) 0))));
        MaybeTimestamp0_25 = ((MR_Word) ((MR_hl_field(0, HaveReadSrc0_23, (MR_Integer) 1))));
        PT_26 = ((MR_Word) ((MR_hl_field(0, HaveReadSrc0_23, (MR_Integer) 2))));
        E_27 = ((MR_Word) ((MR_hl_field(0, HaveReadSrc0_23, (MR_Integer) 3))));
        parse_tree__read_modules__return_timestamp_if_needed_3_p_0(ReturnTimestamp_15, MaybeTimestamp0_25, &MaybeTimestamp_28);
        {
          HaveReadSrc1_29 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, HaveReadSrc1_29, 0) = ((MR_Box) (FN_24));
          MR_hl_field(0, HaveReadSrc1_29, 1) = ((MR_Box) (MaybeTimestamp_28));
          MR_hl_field(0, HaveReadSrc1_29, 2) = ((MR_Box) (PT_26));
          MR_hl_field(0, HaveReadSrc1_29, 3) = ((MR_Box) (E_27));
        }
        succeeded = MR_TRUE;
      }
    }
    if (succeeded)
    {
      MR_Word HaveReadModuleMapSrc0_30;
      MR_Word HaveReadModuleMapSrc_31;
      MR_Word Var_115;
      MR_Word Var_116;
      MR_Word Var_117;
      MR_Word Var_118;
      MR_Word Var_119;
      MR_Word Var_120;
      MR_Word Var_121;

      *Globals_13 = Globals0_12;
      *HaveReadSrc_16 = HaveReadSrc1_29;
      HaveReadModuleMapSrc0_30 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_HaveReadModuleMaps_0_37, (MR_Integer) 0))));
      mercury__map__delete_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&top_level__mercury_compile_main_scalar_common_1[1]), ((MR_Box) (ModuleName_19)), HaveReadModuleMapSrc0_30, &HaveReadModuleMapSrc_31);
      Var_115 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_HaveReadModuleMaps_0_37, (MR_Integer) 1))));
      Var_116 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_HaveReadModuleMaps_0_37, (MR_Integer) 2))));
      Var_117 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_HaveReadModuleMaps_0_37, (MR_Integer) 3))));
      Var_118 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_HaveReadModuleMaps_0_37, (MR_Integer) 4))));
      Var_119 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_HaveReadModuleMaps_0_37, (MR_Integer) 5))));
      Var_120 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_HaveReadModuleMaps_0_37, (MR_Integer) 6))));
      Var_121 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_HaveReadModuleMaps_0_37, (MR_Integer) 7))));
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
        *STATE_VARIABLE_HaveReadModuleMaps_38 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (HaveReadModuleMapSrc_31));
        MR_hl_field(0, base, 1) = ((MR_Box) (Var_115));
        MR_hl_field(0, base, 2) = ((MR_Box) (Var_116));
        MR_hl_field(0, base, 3) = ((MR_Box) (Var_117));
        MR_hl_field(0, base, 4) = ((MR_Box) (Var_118));
        MR_hl_field(0, base, 5) = ((MR_Box) (Var_119));
        MR_hl_field(0, base, 6) = ((MR_Box) (Var_120));
        MR_hl_field(0, base, 7) = ((MR_Box) (Var_121));
      }
    }
    else
    {
      MR_Word DisableSmart_32;
      MR_Word Var_50;
      MR_Word Var_54;

      {
        Var_50 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_50, 0) = ((MR_Box) (ModuleName_19));
      }
      {
        Var_54 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_54, 0) = (MR_Box) ((MR_Unsigned) (ReturnTimestamp_15));
      }
      parse_tree__read_modules__read_module_src_11_p_0((MR_Word) ((MR_Unsigned) 0U), Globals0_12, Var_50, (MR_Integer) 1, (MR_Integer) 1, ModuleName_19, (MR_Word) ((MR_Unsigned) 0U), Var_54, HaveReadSrc_16);
      libs__globals__io_get_disable_smart_recompilation_3_p_0(&DisableSmart_32);
      switch (DisableSmart_32) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          libs__globals__set_option_4_p_0((MR_Integer) 152, (MR_Word) (MR_mkword(1, &top_level__mercury_compile_main_scalar_common_2[1])), Globals0_12, Globals_13);
          break;
        case (MR_Integer) 0:
          *Globals_13 = Globals0_12;
          break;
      }
      *STATE_VARIABLE_HaveReadModuleMaps_38 = STATE_VARIABLE_HaveReadModuleMaps_0_37;
    }
  }
  libs__globals__lookup_bool_option_3_p_0(*Globals_13, (MR_Integer) 83, &Stats_36);
  libs__file_util__maybe_report_stats_4_p_0(ProgressStream_11, Stats_36);
}

static void MR_CALL 
top_level__mercury_compile_main__do_op_mode_query_6_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  mercury__io__write_string_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_String) (wrapper_arg_1)));
}

static void MR_CALL 
top_level__mercury_compile_main__do_op_mode_query_6_p_0_3(
  void * env_ptr_arg)
{
  struct top_level__mercury_compile_main__do_op_mode_query_6_p_0_4_env_0_s * env_ptr = (struct top_level__mercury_compile_main__do_op_mode_query_6_p_0_4_env_0_s *) (env_ptr_arg);

  *((env_ptr)->top_level__mercury_compile_main__do_op_mode_query_6_p_0_4_env_0__wrapper_arg_1) = ((MR_Box) ((env_ptr)->top_level__mercury_compile_main__do_op_mode_query_6_p_0_4_env_0__conv2_LambdaHeadVar__1_62));
  ((env_ptr)->top_level__mercury_compile_main__do_op_mode_query_6_p_0_4_env_0__cont)((env_ptr)->top_level__mercury_compile_main__do_op_mode_query_6_p_0_4_env_0__cont_env_ptr);
}

static void MR_CALL 
top_level__mercury_compile_main__do_op_mode_query_6_p_0_4(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Cont cont,
  void * cont_env_ptr)
{
  struct top_level__mercury_compile_main__do_op_mode_query_6_p_0_4_env_0_s env;

  (env).top_level__mercury_compile_main__do_op_mode_query_6_p_0_4_env_0__wrapper_arg_1 = wrapper_arg_1;
  (env).top_level__mercury_compile_main__do_op_mode_query_6_p_0_4_env_0__cont = cont;
  (env).top_level__mercury_compile_main__do_op_mode_query_6_p_0_4_env_0__cont_env_ptr = cont_env_ptr;
  {
    MR_Box closure = closure_arg;

    top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_query__695__1_1_p_0(&(env).top_level__mercury_compile_main__do_op_mode_query_6_p_0_4_env_0__conv2_LambdaHeadVar__1_62, top_level__mercury_compile_main__do_op_mode_query_6_p_0_3, &env);
  }
}

static void MR_CALL 
top_level__mercury_compile_main__do_op_mode_query_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_query__688__1_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_String) (wrapper_arg_1)));
}

static void MR_CALL 
top_level__mercury_compile_main__do_op_mode_query_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_query__681__1_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_String) (wrapper_arg_1)));
}

static void MR_CALL 
top_level__mercury_compile_main__do_op_mode_query_6_p_0(
  MR_Word ErrorStream_7,
  MR_Word Globals_8,
  MR_Word OpModeQuery_9,
  MR_Word OptionVariables_10)
{
  MR_Word StdOutStream_12;

  mercury__io__stdout_stream_3_p_0(&StdOutStream_12);
  switch (OpModeQuery_9) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        MR_String CC_Type_14;

        libs__globals__lookup_string_option_3_p_0(Globals_8, (MR_Integer) 560, &CC_Type_14);
        mercury__io__print_line_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), StdOutStream_12, ((MR_Box) (CC_Type_14)));
      }
      break;
    case (MR_Integer) 3:
      backend_libs__compile_target_code__output_c_include_directory_flags_4_p_0(Globals_8, StdOutStream_12);
      break;
    case (MR_Integer) 0:
      {
        MR_String CC_13;

        libs__globals__lookup_string_option_3_p_0(Globals_8, (MR_Integer) 536, &CC_13);
        mercury__io__print_line_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), StdOutStream_12, ((MR_Box) (CC_13)));
      }
      break;
    case (MR_Integer) 2:
      {
        backend_libs__compile_target_code__output_c_compiler_flags_4_p_0(Globals_8, StdOutStream_12);
        mercury__io__nl_3_p_0(StdOutStream_12);
      }
      break;
    case (MR_Integer) 5:
      {
        MR_String CSC_15;

        libs__globals__lookup_string_option_3_p_0(Globals_8, (MR_Integer) 570, &CSC_15);
        mercury__io__print_line_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), StdOutStream_12, ((MR_Box) (CSC_15)));
      }
      break;
    case (MR_Integer) 6:
      {
        MR_String CSC_Type_16;

        libs__globals__lookup_string_option_3_p_0(Globals_8, (MR_Integer) 561, &CSC_Type_16);
        mercury__io__print_line_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), StdOutStream_12, ((MR_Box) (CSC_Type_16)));
      }
      break;
    case (MR_Integer) 4:
      backend_libs__compile_target_code__output_c_grade_defines_4_p_0(Globals_8, StdOutStream_12);
      break;
    case (MR_Integer) 11:
      {
        MR_String Grade_19;

        libs__compute_grade__grade_directory_component_2_p_0(Globals_8, &Grade_19);
        mercury__io__print_line_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), StdOutStream_12, ((MR_Box) (Grade_19)));
      }
      break;
    case (MR_Integer) 7:
      {
        MR_String ClassName_17;

        parse_tree__file_names__get_class_dir_name_2_p_0(Globals_8, &ClassName_17);
        mercury__io__print_line_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), StdOutStream_12, ((MR_Box) (ClassName_17)));
      }
      break;
    case (MR_Integer) 12:
      {
        MR_Word LibGrades_20;
        MR_Word Var_55;
        MR_Box conv0_STATE_VARIABLE_IO_33;

        libs__globals__lookup_accumulating_option_3_p_0(Globals_8, (MR_Integer) 676, &LibGrades_20);
        {
          Var_55 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_55, 0) = ((MR_Box) (&top_level__mercury_compile_main_scalar_common_3[0]));
          MR_hl_field(0, Var_55, 1) = ((MR_Box) (top_level__mercury_compile_main__do_op_mode_query_6_p_0_1));
          MR_hl_field(0, Var_55, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(0, Var_55, 3) = ((MR_Box) (StdOutStream_12));
        }
        mercury__list__foldl_4_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_55, LibGrades_20, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_33);
      }
      break;
    case (MR_Integer) 10:
      backend_libs__compile_target_code__output_library_link_flags_4_p_0(Globals_8, StdOutStream_12);
      break;
    case (MR_Integer) 8:
      {
        MR_String LinkCommand_18;

        libs__globals__lookup_string_option_3_p_0(Globals_8, (MR_Integer) 613, &LinkCommand_18);
        mercury__io__print_line_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), StdOutStream_12, ((MR_Box) (LinkCommand_18)));
      }
      break;
    case (MR_Integer) 9:
      {
        MR_String LinkCommand_71;

        libs__globals__lookup_string_option_3_p_0(Globals_8, (MR_Integer) 614, &LinkCommand_71);
        mercury__io__print_line_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), StdOutStream_12, ((MR_Box) (LinkCommand_71)));
      }
      break;
    case (MR_Integer) 13:
      {
        MR_Word MaybeMerStdLibDir_21;

        libs__check_libgrades__find_mercury_stdlib_5_p_0(Globals_8, OptionVariables_10, &MaybeMerStdLibDir_21);
        if (((MR_tag((MR_Word) MaybeMerStdLibDir_21)) == (MR_Integer) 0))
        {
          MR_Word Specs_24 = ((MR_Word) ((MR_hl_field(0, MaybeMerStdLibDir_21, (MR_Integer) 0))));

          parse_tree__write_error_spec__write_error_specs_5_p_0(ErrorStream_7, Globals_8, Specs_24);
        }
        else
        {
          MR_String MerStdLibDir_22 = ((MR_String) ((MR_hl_field(1, MaybeMerStdLibDir_21, (MR_Integer) 0))));
          MR_Word StdlibGrades_23;
          MR_Word Var_59;
          MR_Box conv1_STATE_VARIABLE_IO_33;

          libs__check_libgrades__do_detect_libgrades_4_p_0(MerStdLibDir_22, &StdlibGrades_23);
          {
            Var_59 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_59, 0) = ((MR_Box) (&top_level__mercury_compile_main_scalar_common_3[0]));
            MR_hl_field(0, Var_59, 1) = ((MR_Box) (top_level__mercury_compile_main__do_op_mode_query_6_p_0_2));
            MR_hl_field(0, Var_59, 2) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(0, Var_59, 3) = ((MR_Box) (StdOutStream_12));
          }
          mercury__set__fold_4_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_59, StdlibGrades_23, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_33);
        }
      }
      break;
    case (MR_Integer) 14:
      {
        MR_Word StdlibLines_30;
        MR_Word Var_67;
        MR_Box conv3_STATE_VARIABLE_IO_33;

        mercury__solutions__solutions_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&top_level__mercury_compile_main_scalar_common_5[0]), &StdlibLines_30);
        {
          Var_67 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_67, 0) = ((MR_Box) (&top_level__mercury_compile_main_scalar_common_3[0]));
          MR_hl_field(0, Var_67, 1) = ((MR_Box) (top_level__mercury_compile_main__do_op_mode_query_6_p_0_5));
          MR_hl_field(0, Var_67, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(0, Var_67, 3) = ((MR_Box) (StdOutStream_12));
        }
        mercury__list__foldl_4_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_67, StdlibLines_30, ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_IO_33);
      }
      break;
    case (MR_Integer) 15:
      {
        MR_String TargetArch_31;

        libs__globals__lookup_string_option_3_p_0(Globals_8, (MR_Integer) 703, &TargetArch_31);
        mercury__io__print_line_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), StdOutStream_12, ((MR_Box) (TargetArch_31)));
      }
      break;
  }
}

static void MR_CALL 
top_level__mercury_compile_main__process_options_plain_10_p_0(
  MR_Word ErrorStream_11,
  MR_Word CmdLineArgs_12,
  MR_Word * DetectedGradeFlags_13,
  MR_Word * Variables_14,
  MR_Word * MaybeMCFlags_15,
  MR_Word * OptionArgs_16,
  MR_Word * NonOptionArgs_17,
  MR_Word * Specs_18)
{
  MR_bool succeeded;
  MR_Word ArgsGlobals_21;
  MR_Word OptionSearchDirectories_22;
  MR_Word OptionsFiles_23;
  MR_Word Variables0_24;
  MR_Word OptFileNonUndefSpecs_25;
  MR_Word OptFileUndefSpecs_26;
  MR_Word WarnUndef_27;
  MR_Word OptFileSpecs_28;
  MR_Word OptFileErrors_29;
  MR_Word EnvVarMap_30;
  MR_Word _Errors0_20;

  libs__handle_options__handle_given_options_8_p_0(ErrorStream_11, CmdLineArgs_12, OptionArgs_16, NonOptionArgs_17, &_Errors0_20, &ArgsGlobals_21);
  libs__globals__lookup_accumulating_option_3_p_0(ArgsGlobals_21, (MR_Integer) 683, &OptionSearchDirectories_22);
  libs__globals__lookup_accumulating_option_3_p_0(ArgsGlobals_21, (MR_Integer) 681, &OptionsFiles_23);
  make__options_file__read_options_files_named_in_options_file_option_7_p_0(OptionSearchDirectories_22, OptionsFiles_23, &Variables0_24, &OptFileNonUndefSpecs_25, &OptFileUndefSpecs_26);
  libs__globals__lookup_bool_option_3_p_0(ArgsGlobals_21, (MR_Integer) 33, &WarnUndef_27);
  switch (WarnUndef_27) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      OptFileSpecs_28 = OptFileNonUndefSpecs_25;
      break;
    case (MR_Integer) 1:
      OptFileSpecs_28 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), OptFileNonUndefSpecs_25, OptFileUndefSpecs_26);
      break;
  }
  OptFileErrors_29 = parse_tree__error_util__contains_errors_2_f_0(ArgsGlobals_21, OptFileSpecs_28);
  mercury__io__environment__get_environment_var_map_3_p_0(&EnvVarMap_30);
  switch (OptFileErrors_29) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word OptFileOkSpecs_31;
        MR_Word MaybeMCFlags0_42;
        MR_String DumpOptionsFile_82;

        libs__globals__lookup_string_option_3_p_0(ArgsGlobals_21, (MR_Integer) 206, &DumpOptionsFile_82);
        succeeded = (strcmp(DumpOptionsFile_82, (MR_String) "") == 0);
        if (!(succeeded))
          make__options_file__dump_options_file_5_p_0(ErrorStream_11, DumpOptionsFile_82, Variables0_24);
        make__options_file__lookup_mmc_options_2_p_0(Variables0_24, &MaybeMCFlags0_42);
        if (((MR_tag((MR_Word) MaybeMCFlags0_42)) == (MR_Integer) 0))
        {
          OptFileOkSpecs_31 = ((MR_Word) ((MR_hl_field(0, MaybeMCFlags0_42, (MR_Integer) 0))));
          *DetectedGradeFlags_13 = (MR_Word) ((MR_Unsigned) 0U);
          *Variables_14 = make__options_file__options_variables_init_1_f_0(EnvVarMap_30);
          *MaybeMCFlags_15 = (MR_Word) ((MR_Unsigned) 0U);
        }
        else
        {
          MR_Word MCFlags0_43 = ((MR_Word) ((MR_hl_field(1, MaybeMCFlags0_42, (MR_Integer) 0))));
          MR_Word FlagsSpecs_46;
          MR_Word FlagsArgsGlobals_47;
          MR_Word Var_69;
          MR_Word Var_44;
          MR_Word Var_45;

          Var_69 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), MCFlags0_43, CmdLineArgs_12);
          libs__handle_options__handle_given_options_8_p_0(ErrorStream_11, Var_69, &Var_44, &Var_45, &FlagsSpecs_46, &FlagsArgsGlobals_47);
          if ((FlagsSpecs_46 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            MR_Word MaybeConfigFile_50;

            libs__globals__lookup_maybe_string_option_3_p_0(FlagsArgsGlobals_47, (MR_Integer) 682, &MaybeConfigFile_50);
            if ((MaybeConfigFile_50 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              MR_Word Errors_62;
              MR_Word MaybeMCFlags1_76;

              *DetectedGradeFlags_13 = (MR_Word) ((MR_Unsigned) 0U);
              *Variables_14 = make__options_file__options_variables_init_1_f_0(EnvVarMap_30);
              make__options_file__lookup_mmc_options_2_p_0(*Variables_14, &MaybeMCFlags1_76);
              OptFileOkSpecs_31 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&top_level__mercury_compile_main_scalar_common_1[0]), MaybeMCFlags1_76);
              Errors_62 = parse_tree__error_util__contains_errors_2_f_0(FlagsArgsGlobals_47, OptFileOkSpecs_31);
              switch (Errors_62) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word MCFlags1_75;
                    MR_Box conv0_MCFlags1_75;

                    parse_tree__maybe_error__det_project_ok1_2_p_0((MR_Word) (&top_level__mercury_compile_main_scalar_common_1[0]), MaybeMCFlags1_76, &conv0_MCFlags1_75);
                    MCFlags1_75 = ((MR_Word) (conv0_MCFlags1_75));
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      *MaybeMCFlags_15 = base;
                      MR_hl_field(1, base, 0) = ((MR_Box) (MCFlags1_75));
                    }
                  }
                  break;
                case (MR_Integer) 1:
                  *MaybeMCFlags_15 = (MR_Word) ((MR_Unsigned) 0U);
                  break;
              }
            }
            else
            {
              MR_String ConfigFile_51 = ((MR_String) ((MR_hl_field(1, MaybeConfigFile_50, (MR_Integer) 0))));
              MR_Word ConfigNonUndefSpecs_52;
              MR_Word ConfigUndefSpecs_53;
              MR_Word ConfigSpecs_54;
              MR_Word ConfigErrors_55;

              make__options_file__read_named_options_file_7_p_0(ConfigFile_51, Variables0_24, Variables_14, &ConfigNonUndefSpecs_52, &ConfigUndefSpecs_53);
              switch (WarnUndef_27) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  ConfigSpecs_54 = ConfigNonUndefSpecs_52;
                  break;
                case (MR_Integer) 1:
                  ConfigSpecs_54 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), ConfigNonUndefSpecs_52, ConfigUndefSpecs_53);
                  break;
              }
              ConfigErrors_55 = parse_tree__error_util__contains_errors_2_f_0(FlagsArgsGlobals_47, ConfigSpecs_54);
              switch (ConfigErrors_55) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word MaybeMCFlags1_56;
                    MR_Word Specs0_57;
                    MR_Word Errors0_58;
                    MR_Word MaybeConfigMerStdLibDir_61;
                    MR_Word Var_73;
                    MR_Word Var_74;
                    MR_Word _MaybeStdLibGrades_60;

                    make__options_file__lookup_mmc_options_2_p_0(*Variables_14, &MaybeMCFlags1_56);
                    Var_73 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&top_level__mercury_compile_main_scalar_common_1[0]), MaybeMCFlags1_56);
                    Specs0_57 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), ConfigSpecs_54, Var_73);
                    Errors0_58 = parse_tree__error_util__contains_errors_2_f_0(FlagsArgsGlobals_47, Specs0_57);
                    switch (Errors0_58) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                          MR_Word MCFlags1_59;
                          MR_Box conv1_MCFlags1_59;

                          parse_tree__maybe_error__det_project_ok1_2_p_0((MR_Word) (&top_level__mercury_compile_main_scalar_common_1[0]), MaybeMCFlags1_56, &conv1_MCFlags1_59);
                          MCFlags1_59 = ((MR_Word) (conv1_MCFlags1_59));
                          {
                            MR_Word base;
                            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                            *MaybeMCFlags_15 = base;
                            MR_hl_field(1, base, 0) = ((MR_Box) (MCFlags1_59));
                          }
                        }
                        break;
                      case (MR_Integer) 1:
                        *MaybeMCFlags_15 = (MR_Word) ((MR_Unsigned) 0U);
                        break;
                    }
                    libs__check_libgrades__maybe_detect_stdlib_grades_6_p_0(FlagsArgsGlobals_47, *Variables_14, &_MaybeStdLibGrades_60, DetectedGradeFlags_13);
                    make__options_file__lookup_mercury_stdlib_dir_2_p_0(*Variables_14, &MaybeConfigMerStdLibDir_61);
                    Var_74 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&top_level__mercury_compile_main_scalar_common_1[0]), MaybeConfigMerStdLibDir_61);
                    OptFileOkSpecs_31 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), Specs0_57, Var_74);
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    *DetectedGradeFlags_13 = (MR_Word) ((MR_Unsigned) 0U);
                    *MaybeMCFlags_15 = (MR_Word) ((MR_Unsigned) 0U);
                    OptFileOkSpecs_31 = ConfigSpecs_54;
                  }
                  break;
              }
            }
          }
          else
          {
            *DetectedGradeFlags_13 = (MR_Word) ((MR_Unsigned) 0U);
            *Variables_14 = make__options_file__options_variables_init_1_f_0(EnvVarMap_30);
            *MaybeMCFlags_15 = (MR_Word) ((MR_Unsigned) 0U);
            OptFileOkSpecs_31 = FlagsSpecs_46;
          }
        }
        *Specs_18 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), OptFileSpecs_28, OptFileOkSpecs_31);
      }
      break;
    case (MR_Integer) 1:
      {
        *DetectedGradeFlags_13 = (MR_Word) ((MR_Unsigned) 0U);
        *Variables_14 = make__options_file__options_variables_init_1_f_0(EnvVarMap_30);
        *MaybeMCFlags_15 = (MR_Word) ((MR_Unsigned) 0U);
        *Specs_18 = OptFileSpecs_28;
      }
      break;
  }
}

static void MR_CALL 
top_level__mercury_compile_main__expand_at_file_arguments_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__2_2 = (MR_Word) (&top_level__mercury_compile_main_scalar_common_2[0]);
    else
    {
      MR_String Arg_9 = ((MR_String) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Args_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_String File_13;

      succeeded = mercury__string__remove_prefix_3_p_0((MR_String) "\100", Arg_9, &File_13);
      if (succeeded)
      {
        MR_Word OpenRes_14;

        mercury__io__open_input_4_p_0(File_13, &OpenRes_14);
        if (((MR_tag((MR_Word) OpenRes_14)) == (MR_Integer) 1))
        {
          MR_String Msg_20;
          MR_String Var_32;
          MR_Word Var_34;

          Var_32 = mercury__string__f_43_43_2_f_0(File_13, (MR_String) "\'");
          Msg_20 = mercury__string__f_43_43_2_f_0((MR_String) "mercury_compile: cannot open \'", Var_32);
          Var_34 = mercury__io__make_io_error_1_f_0(Msg_20);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *HeadVar__2_2 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (Var_34));
          }
        }
        else
        {
          MR_Word S_15 = ((MR_Word) ((MR_hl_field(0, OpenRes_14, (MR_Integer) 0))));
          MR_Word ReadRes_16;

          top_level__mercury_compile_main__expand_file_into_arg_list_4_p_0(S_15, &ReadRes_16);
          if (((MR_tag((MR_Word) ReadRes_16)) == (MR_Integer) 1))
          {
            MR_Word E_18 = ((MR_Word) ((MR_hl_field(1, ReadRes_16, (MR_Integer) 0))));
            MR_Word Var_30;
            MR_String Var_39;
            MR_String Var_41;
            MR_String Var_42;
            MR_String Var_44;

            Var_44 = mercury__io__error_message_1_f_0(E_18);
            Var_42 = mercury__string__f_43_43_2_f_0((MR_String) "\' the following error occurred: ", Var_44);
            Var_41 = mercury__string__f_43_43_2_f_0(File_13, Var_42);
            Var_39 = mercury__string__f_43_43_2_f_0((MR_String) "While attempting to process \'", Var_41);
            Var_30 = mercury__io__make_io_error_1_f_0(Var_39);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *HeadVar__2_2 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (Var_30));
            }
          }
          else
          {
            MR_Word FileArgs_17 = ((MR_Word) ((MR_hl_field(0, ReadRes_16, (MR_Integer) 0))));
            MR_Word Var_28;
            MR_Word next_value_of_HeadVar__1_1;

            Var_28 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), FileArgs_17, Args_10);
            // direct tailcall eliminated
            ;
            next_value_of_HeadVar__1_1 = Var_28;
            HeadVar__1_1 = next_value_of_HeadVar__1_1;
            continue;
          }
        }
      }
      else
      {
        MR_Word Result0_21;

        top_level__mercury_compile_main__expand_at_file_arguments_4_p_0(Args_10, &Result0_21);
        if (((MR_tag((MR_Word) Result0_21)) == (MR_Integer) 1))
          *HeadVar__2_2 = Result0_21;
        else
        {
          MR_Word ExpandedArgs_22 = ((MR_Word) ((MR_hl_field(0, Result0_21, (MR_Integer) 0))));
          MR_Word Var_36;

          {
            Var_36 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_36, 0) = ((MR_Box) (Arg_9));
            MR_hl_field(1, Var_36, 1) = ((MR_Box) (ExpandedArgs_22));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            *HeadVar__2_2 = base;
            MR_hl_field(0, base, 0) = ((MR_Box) (Var_36));
          }
        }
      }
    }
    break;
  }
}

static void MR_CALL 
top_level__mercury_compile_main__expand_file_into_arg_list_4_p_0(
  MR_Word S_5,
  MR_Word * Res_6)
{
  MR_bool succeeded;
  MR_Word LineRes_8;

  mercury__io__read_line_as_string_4_p_0(S_5, &LineRes_8);
  switch (MR_tag((MR_Word) LineRes_8)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *Res_6 = (MR_Word) (&top_level__mercury_compile_main_scalar_common_2[0]);
      break;
    case (MR_Integer) 1:
      {
        MR_String Line_9 = ((MR_String) ((MR_hl_field(1, LineRes_8, (MR_Integer) 0))));
        MR_Word Res0_10;

        top_level__mercury_compile_main__expand_file_into_arg_list_4_p_0(S_5, &Res0_10);
        if (((MR_tag((MR_Word) Res0_10)) == (MR_Integer) 1))
          *Res_6 = Res0_10;
        else
        {
          MR_Word Lines_11 = ((MR_Word) ((MR_hl_field(0, Res0_10, (MR_Integer) 0))));
          MR_String StrippedLine_12;

          StrippedLine_12 = mercury__string__strip_1_f_0(Line_9);
          succeeded = (strcmp(StrippedLine_12, (MR_String) "") == 0);
          if (succeeded)
            *Res_6 = Res0_10;
          else
          {
            MR_Word Var_19;

            {
              Var_19 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_19, 0) = ((MR_Box) (StrippedLine_12));
              MR_hl_field(1, Var_19, 1) = ((MR_Box) (Lines_11));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              *Res_6 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (Var_19));
            }
          }
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word E_14 = ((MR_Word) ((MR_hl_field(2, LineRes_8, (MR_Integer) 0))));

        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *Res_6 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (E_14));
        }
      }
      break;
  }
}

static MR_bool MR_CALL 
top_level__mercury_compile_main____Unify____file_or_module_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = top_level__mercury_compile_main____Unify____file_or_module_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
top_level__mercury_compile_main____Compare____file_or_module_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  top_level__mercury_compile_main____Compare____file_or_module_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__top_level__mercury_compile_main__init(void)
{
}

void mercury__top_level__mercury_compile_main__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&top_level__mercury_compile_main__top_level__mercury_compile_main__type_ctor_info_file_or_module_0);
}

void mercury__top_level__mercury_compile_main__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__top_level__mercury_compile_main__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module top_level.mercury_compile_main.
