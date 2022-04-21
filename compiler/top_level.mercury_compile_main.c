/*
** Automatically generated from `mercury_compile_main.m'
** by the Mercury compiler,
** version rotd-2022-04-21
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
#include "time.mih"
#include "top_level.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
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



struct top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_query__684__1_1_p_0_env_0_s {
  MR_String * top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_query__684__1_1_p_0_env_0__LambdaHeadVar__1_35;
  MR_Cont top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_query__684__1_1_p_0_env_0__cont;
  void * top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_query__684__1_1_p_0_env_0__cont_env_ptr;
  MR_String top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_query__684__1_1_p_0_env_0__ModuleName_25;
  MR_Word top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_query__684__1_1_p_0_env_0__DocUndoc_26;
  MR_String top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_query__684__1_1_p_0_env_0__DocStr_27;
  MR_String top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_query__684__1_1_p_0_env_0__Var_36;
  MR_String top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_query__684__1_1_p_0_env_0__Var_37;
  MR_String top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_query__684__1_1_p_0_env_0__Var_38;
  MR_String top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_query__684__1_1_p_0_env_0__Var_39;
};

struct top_level__mercury_compile_main__do_op_mode_query_5_p_0_4_env_0_s {
  MR_Box * top_level__mercury_compile_main__do_op_mode_query_5_p_0_4_env_0__wrapper_arg_1;
  MR_Cont top_level__mercury_compile_main__do_op_mode_query_5_p_0_4_env_0__cont;
  void * top_level__mercury_compile_main__do_op_mode_query_5_p_0_4_env_0__cont_env_ptr;
  MR_String top_level__mercury_compile_main__do_op_mode_query_5_p_0_4_env_0__conv2_LambdaHeadVar__1_35;
};


static const MR_FA_PseudoTypeInfo_Struct1 top_level__mercury_compile_main__maybe__pti_maybe_1__plain_libs__timestamp__type_ctor_info_timestamp_0;

static const MR_FA_PseudoTypeInfo_Struct1 top_level__mercury_compile_main__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_FA_TypeInfo_Struct1 top_level__mercury_compile_main__list__ti_list_1builtin__type_ctor_info_string_0;

static const MR_VA_PseudoTypeInfo_Struct4 top_level__mercury_compile_main____vpti_pred_4__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_list__ti_list_1builtin__type_ctor_info_string_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0;

static const MR_FA_PseudoTypeInfo_Struct1 top_level__mercury_compile_main__list__pti_list_1__plain_builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct1 top_level__mercury_compile_main__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0;

static const MR_FA_PseudoTypeInfo_Struct1 top_level__mercury_compile_main__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0;

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
top_level__mercury_compile_main__IntroducedFrom__pred__read_augment_and_process_module__1338__1_2_p_0(
  MR_Word ModulesToRecompile_32,
  MR_Word LambdaHeadVar__1_54);

static MR_bool MR_CALL 
top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_args__721__1_2_p_0(
  MR_Word InvokedByMake_24,
  MR_Word HeadVar__2_67);

static void MR_CALL 
top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_query__684__1_1_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_query__684__1_1_p_0(
  MR_String * LambdaHeadVar__1_35,
  MR_Cont cont,
  void * cont_env_ptr);

static void MR_CALL 
top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_query__677__1_4_p_0(
  MR_Word StdOut_10,
  MR_String HeadVar__2_85);

static void MR_CALL 
top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_query__670__1_4_p_0(
  MR_Word StdOut_10,
  MR_String HeadVar__2_79);

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
top_level__mercury_compile_main__augment_and_process_module_15_p_0(
  MR_Word Globals_16,
  MR_Word OpModeAugment_17,
  MR_String SourceFileName_18,
  MR_Word MaybeTimestamp_19,
  MR_Word SourceFileModuleName_20,
  MR_Word NestedSubModules_21,
  MR_Word FindTimestampFiles_22,
  MR_Word ParseTreeModuleSrc_23,
  MR_Word * ExtraObjFiles_24,
  MR_Word STATE_VARIABLE_Specs_0_35,
  MR_Word * STATE_VARIABLE_Specs_36,
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_0_37,
  MR_Word * STATE_VARIABLE_HaveReadModuleMaps_38);

static void MR_CALL 
top_level__mercury_compile_main__process_augmented_module_14_p_0(
  MR_Word Globals0_15,
  MR_Word OpModeAugment_16,
  MR_Word Baggage_17,
  MR_Word AugCompUnit_18,
  MR_Word FindTimestampFiles_19,
  MR_Word * ExtraObjFiles_20,
  MR_Word STATE_VARIABLE_DumpInfo_0_50,
  MR_Word * STATE_VARIABLE_DumpInfo_51,
  MR_Word STATE_VARIABLE_Specs_0_52,
  MR_Word * STATE_VARIABLE_Specs_53,
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_0_54,
  MR_Word * STATE_VARIABLE_HaveReadModuleMaps_55);

static void MR_CALL 
top_level__mercury_compile_main__after_front_end_passes_13_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
top_level__mercury_compile_main__after_front_end_passes_13_p_0(
  MR_Word Globals_14,
  MR_Word OpModeCodeGen_15,
  MR_Word MaybeTopModule_16,
  MR_Word FindTimestampFiles_17,
  MR_Word MaybeTimestampMap_18,
  MR_Word STATE_VARIABLE_HLDS_0_57,
  MR_Word * ExtraObjFiles_20,
  MR_Word STATE_VARIABLE_Specs_0_58,
  MR_Word * STATE_VARIABLE_Specs_59,
  MR_Word STATE_VARIABLE_DumpInfo_0_60,
  MR_Word * STATE_VARIABLE_DumpInfo_61);

static void MR_CALL 
top_level__mercury_compile_main__maybe_output_prof_call_graph_6_p_0(
  MR_Word Verbose_7,
  MR_Word Stats_8,
  MR_Word STATE_VARIABLE_HLDS_0_20,
  MR_Word * STATE_VARIABLE_HLDS_21);

static MR_Box MR_CALL 
top_level__mercury_compile_main__prepare_for_intermodule_analysis_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
top_level__mercury_compile_main__prepare_for_intermodule_analysis_7_p_0(
  MR_Word Globals_8,
  MR_Word Verbose_9,
  MR_Word Stats_10,
  MR_Word STATE_VARIABLE_HLDS_0_19,
  MR_Word * STATE_VARIABLE_HLDS_20);

static MR_Box MR_CALL 
top_level__mercury_compile_main__maybe_prepare_for_intermodule_analysis_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
top_level__mercury_compile_main__maybe_prepare_for_intermodule_analysis_7_p_0(
  MR_Word Globals_8,
  MR_Word Verbose_9,
  MR_Word Stats_10,
  MR_Word STATE_VARIABLE_HLDS_0_14,
  MR_Word * STATE_VARIABLE_HLDS_15);

static void MR_CALL 
top_level__mercury_compile_main__maybe_write_dependency_graph_6_p_0(
  MR_Word Verbose_7,
  MR_Word Stats_8,
  MR_Word STATE_VARIABLE_HLDS_0_19,
  MR_Word * STATE_VARIABLE_HLDS_20);

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
top_level__mercury_compile_main__main_after_setup_7_p_0(
  MR_Word Globals_8,
  MR_Word DetectedGradeFlags_9,
  MR_Word OptionVariables_10,
  MR_Word OptionArgs_11,
  MR_Word Args_12);

static MR_bool MR_CALL 
top_level__mercury_compile_main__do_op_mode_args_13_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
top_level__mercury_compile_main__do_op_mode_args_13_p_0(
  MR_Word Globals_14,
  MR_Word OpModeArgs_15,
  MR_Word FileNamesFromStdin_16,
  MR_Word DetectedGradeFlags_17,
  MR_Word OptionVariables_18,
  MR_Word OptionArgs_19,
  MR_Word Args_20,
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_0_47,
  MR_Word * STATE_VARIABLE_HaveReadModuleMaps_48,
  MR_Word STATE_VARIABLE_Specs_0_49,
  MR_Word * STATE_VARIABLE_Specs_50);

static void MR_CALL 
top_level__mercury_compile_main__do_process_compiler_cmd_line_args_12_p_0(
  MR_Word Globals_1,
  MR_Word OpModeArgs_2,
  MR_Word OptionArgs_3,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_Modules_0_5,
  MR_Word * STATE_VARIABLE_Modules_6,
  MR_Word STATE_VARIABLE_ExtraObjFiles_0_7,
  MR_Word * STATE_VARIABLE_ExtraObjFiles_8,
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_0_9,
  MR_Word * STATE_VARIABLE_HaveReadModuleMaps_10);

static void MR_CALL 
top_level__mercury_compile_main__setup_and_process_compiler_cmd_line_args_16_p_0(
  MR_Word Globals_1,
  MR_Word OpModeArgs_2,
  MR_Word DetectedGradeFlags_3,
  MR_Word OptionVariables_4,
  MR_Word OptionArgs_5,
  MR_Word HeadVar__6_6,
  MR_Word STATE_VARIABLE_Modules_0_7,
  MR_Word * STATE_VARIABLE_Modules_8,
  MR_Word STATE_VARIABLE_ExtraObjFiles_0_9,
  MR_Word * STATE_VARIABLE_ExtraObjFiles_10,
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_0_11,
  MR_Word * STATE_VARIABLE_HaveReadModuleMaps_12,
  MR_Word STATE_VARIABLE_Specs_0_13,
  MR_Word * STATE_VARIABLE_Specs_14);

static void MR_CALL 
top_level__mercury_compile_main__setup_and_process_compiler_stdin_args_16_p_0(
  MR_Word Globals_17,
  MR_Word StdIn_18,
  MR_Word OpModeArgs_19,
  MR_Word DetectedGradeFlags_20,
  MR_Word OptionVariables_21,
  MR_Word OptionArgs_22,
  MR_Word STATE_VARIABLE_Modules_0_37,
  MR_Word * STATE_VARIABLE_Modules_38,
  MR_Word STATE_VARIABLE_ExtraObjFiles_0_39,
  MR_Word * STATE_VARIABLE_ExtraObjFiles_40,
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_0_41,
  MR_Word * STATE_VARIABLE_HaveReadModuleMaps_42,
  MR_Word STATE_VARIABLE_Specs_0_43,
  MR_Word * STATE_VARIABLE_Specs_44);

static void MR_CALL 
top_level__mercury_compile_main__do_process_compiler_arg_10_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
top_level__mercury_compile_main__do_process_compiler_arg_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
top_level__mercury_compile_main__do_process_compiler_arg_10_p_0(
  MR_Word Globals0_11,
  MR_Word OpModeArgs_12,
  MR_Word OptionArgs_13,
  MR_Word FileOrModule_14,
  MR_Word * ModulesToLink_15,
  MR_Word * ExtraObjFiles_16,
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_0_34,
  MR_Word * STATE_VARIABLE_HaveReadModuleMaps_35);

static void MR_CALL 
top_level__mercury_compile_main__read_augment_and_process_module_11_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static MR_Box MR_CALL 
top_level__mercury_compile_main__read_augment_and_process_module_11_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
top_level__mercury_compile_main__read_augment_and_process_module_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
top_level__mercury_compile_main__read_augment_and_process_module_11_p_0(
  MR_Word Globals0_12,
  MR_Word OpModeAugment_13,
  MR_Word OptionArgs_14,
  MR_Word FileOrModule_15,
  MR_Word MaybeModulesToRecompile_16,
  MR_Word * ModulesToLink_17,
  MR_Word * ExtraObjFiles_18,
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_0_43,
  MR_Word * STATE_VARIABLE_HaveReadModuleMaps_44);

static void MR_CALL 
top_level__mercury_compile_main__augment_and_process_all_submodules_15_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
top_level__mercury_compile_main__augment_and_process_all_submodules_15_p_0_1(
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
top_level__mercury_compile_main__augment_and_process_all_submodules_15_p_0(
  MR_Word Globals_16,
  MR_Word OpModeAugment_17,
  MR_String FileName_18,
  MR_Word MaybeTimestamp_19,
  MR_Word SourceFileModuleName_20,
  MR_Word NestedSubModules_21,
  MR_Word FindTimestampFiles_22,
  MR_Word ParseTreeModuleSrcs_23,
  MR_Word STATE_VARIABLE_Specs_0_30,
  MR_Word * ModulesToLink_25,
  MR_Word * ExtraObjFiles_26,
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_0_31,
  MR_Word * STATE_VARIABLE_HaveReadModuleMaps_32);

static void MR_CALL 
top_level__mercury_compile_main__do_process_compiler_arg_make_interface_7_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
top_level__mercury_compile_main__do_process_compiler_arg_make_interface_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
top_level__mercury_compile_main__do_process_compiler_arg_make_interface_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
top_level__mercury_compile_main__do_process_compiler_arg_make_interface_7_p_0(
  MR_Word Globals0_8,
  MR_Word InterfaceFile_9,
  MR_Word FileOrModule_10,
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_0_28,
  MR_Word * STATE_VARIABLE_HaveReadModuleMaps_29);

static void MR_CALL 
top_level__mercury_compile_main__read_module_or_file_14_p_0(
  MR_Word Globals0_15,
  MR_Word * Globals_16,
  MR_Word FileOrModuleName_17,
  MR_Word * ModuleName_18,
  MR_String * FileNameDotM_19,
  MR_Word ReturnTimestamp_20,
  MR_Word * MaybeTimestamp_21,
  MR_Word * ParseTreeSrc_22,
  MR_Word * Specs_23,
  MR_Word * Errors_24,
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_0_43,
  MR_Word * STATE_VARIABLE_HaveReadModuleMaps_44);

static void MR_CALL 
top_level__mercury_compile_main__do_op_mode_query_5_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
top_level__mercury_compile_main__do_op_mode_query_5_p_0_3(
  void * env_ptr_arg);

static void MR_CALL 
top_level__mercury_compile_main__do_op_mode_query_5_p_0_4(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Cont cont,
  void * cont_env_ptr);

static void MR_CALL 
top_level__mercury_compile_main__do_op_mode_query_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
top_level__mercury_compile_main__do_op_mode_query_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
top_level__mercury_compile_main__do_op_mode_query_5_p_0(
  MR_Word Globals_6,
  MR_Word OpModeQuery_7,
  MR_Word OptionVariables_8);

static void MR_CALL 
top_level__mercury_compile_main__process_options_plain_9_p_0(
  MR_Word CmdLineArgs_10,
  MR_Word * DetectedGradeFlags_11,
  MR_Word * Variables_12,
  MR_Word * MaybeMCFlags_13,
  MR_Word * OptionArgs_14,
  MR_Word * NonOptionArgs_15,
  MR_Word * Specs_16);

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

static /* final */ const MR_Box top_level__mercury_compile_main_scalar_common_8[1][18];

static /* final */ const MR_Box top_level__mercury_compile_main_scalar_common_9[5][5];

static /* final */ const MR_Box top_level__mercury_compile_main_scalar_common_10[1][9];




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
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row   3 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row   4 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error:"))
  },
  /* row   5 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--generate-standalone-interface"))
  },
  /* row   6 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "is not required for target language"))
  },
  /* row   7 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   8 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row   9 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &top_level__mercury_compile_main_scalar_common_1[8]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &top_level__mercury_compile_main_scalar_common_1[7])))
  },
  /* row  10 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
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
    ((MR_Box) (top_level__mercury_compile_main__do_op_mode_query_5_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   1 */
  {
    ((MR_Box) (&top_level__mercury_compile_main_scalar_common_9[0])),
    ((MR_Box) (top_level__mercury_compile_main__augment_and_process_all_submodules_15_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   2 */
  {
    ((MR_Box) (&top_level__mercury_compile_main_scalar_common_9[2])),
    ((MR_Box) (top_level__mercury_compile_main__read_augment_and_process_module_11_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   3 */
  {
    ((MR_Box) (&top_level__mercury_compile_main_scalar_common_9[4])),
    ((MR_Box) (top_level__mercury_compile_main__maybe_prepare_for_intermodule_analysis_7_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   4 */
  {
    ((MR_Box) (&top_level__mercury_compile_main_scalar_common_9[4])),
    ((MR_Box) (top_level__mercury_compile_main__prepare_for_intermodule_analysis_7_p_0_1)),
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

static /* final */ const MR_Box top_level__mercury_compile_main_scalar_common_8[1][18] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 15)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&libs__op_mode__libs__op_mode__type_ctor_info_op_mode_augment_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&top_level__mercury_compile_main__maybe__pti_maybe_1__plain_libs__timestamp__type_ctor_info_timestamp_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&top_level__mercury_compile_main__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&top_level__mercury_compile_main____vpti_pred_4__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_list__ti_list_1builtin__type_ctor_info_string_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_module_src_0)),
    ((MR_Box) (&top_level__mercury_compile_main__list__pti_list_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&top_level__mercury_compile_main__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&top_level__mercury_compile_main__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_maps_0)),
    ((MR_Box) (&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_maps_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box top_level__mercury_compile_main_scalar_common_9[5][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_module_src_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&top_level__mercury_compile_main__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_module_src_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_module_src_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
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

static /* final */ const MR_Box top_level__mercury_compile_main_scalar_common_10[1][9] = {
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



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "make.build.mh"
#include "top_level.mercury_compile_main.mh"



static const MR_FA_PseudoTypeInfo_Struct1 top_level__mercury_compile_main__maybe__pti_maybe_1__plain_libs__timestamp__type_ctor_info_timestamp_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) (&libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0)
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

static const MR_FA_PseudoTypeInfo_Struct1 top_level__mercury_compile_main__list__pti_list_1__plain_builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 top_level__mercury_compile_main__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 top_level__mercury_compile_main__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)
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
top_level__mercury_compile_main__IntroducedFrom__pred__read_augment_and_process_module__1338__1_2_p_0(
  MR_Word ModulesToRecompile_32,
  MR_Word LambdaHeadVar__1_54)
{
  MR_bool succeeded;
  MR_Word Var_55 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_54, (MR_Integer) 0))));

  succeeded = mercury__list__member_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (Var_55)), ModulesToRecompile_32);
  return succeeded;
}

static MR_bool MR_CALL 
top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_args__721__1_2_p_0(
  MR_Word InvokedByMake_24,
  MR_Word HeadVar__2_67)
{
  MR_bool succeeded = (InvokedByMake_24 == HeadVar__2_67);

  return succeeded;
}

static void MR_CALL 
top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_query__684__1_1_p_0_1(
  void * env_ptr_arg)
{
  struct top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_query__684__1_1_p_0_env_0_s * env_ptr = (struct top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_query__684__1_1_p_0_env_0_s *) (env_ptr_arg);

  switch ((env_ptr)->top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_query__684__1_1_p_0_env_0__DocUndoc_26) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      (env_ptr)->top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_query__684__1_1_p_0_env_0__DocStr_27 = (MR_String) "DOC";
      break;
    case (MR_Integer) 1:
      (env_ptr)->top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_query__684__1_1_p_0_env_0__DocStr_27 = (MR_String) "UNDOC";
      break;
  }
  (env_ptr)->top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_query__684__1_1_p_0_env_0__Var_37 = (MR_String) " ";
  (env_ptr)->top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_query__684__1_1_p_0_env_0__Var_39 = (MR_String) ".m\n";
  (env_ptr)->top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_query__684__1_1_p_0_env_0__Var_38 = mercury__string__f_43_43_2_f_0((env_ptr)->top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_query__684__1_1_p_0_env_0__ModuleName_25, (env_ptr)->top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_query__684__1_1_p_0_env_0__Var_39);
  (env_ptr)->top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_query__684__1_1_p_0_env_0__Var_36 = mercury__string__f_43_43_2_f_0((env_ptr)->top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_query__684__1_1_p_0_env_0__Var_37, (env_ptr)->top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_query__684__1_1_p_0_env_0__Var_38);
  *((env_ptr)->top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_query__684__1_1_p_0_env_0__LambdaHeadVar__1_35) = mercury__string__f_43_43_2_f_0((env_ptr)->top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_query__684__1_1_p_0_env_0__DocStr_27, (env_ptr)->top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_query__684__1_1_p_0_env_0__Var_36);
  ((env_ptr)->top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_query__684__1_1_p_0_env_0__cont)((env_ptr)->top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_query__684__1_1_p_0_env_0__cont_env_ptr);
}

static void MR_CALL 
top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_query__684__1_1_p_0(
  MR_String * LambdaHeadVar__1_35,
  MR_Cont cont,
  void * cont_env_ptr)
{
  struct top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_query__684__1_1_p_0_env_0_s env;

  (env).top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_query__684__1_1_p_0_env_0__LambdaHeadVar__1_35 = LambdaHeadVar__1_35;
  (env).top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_query__684__1_1_p_0_env_0__cont = cont;
  (env).top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_query__684__1_1_p_0_env_0__cont_env_ptr = cont_env_ptr;
  mercury__library__stdlib_module_doc_undoc_2_p_1(&(env).top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_query__684__1_1_p_0_env_0__ModuleName_25, &(env).top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_query__684__1_1_p_0_env_0__DocUndoc_26, top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_query__684__1_1_p_0_1, &env);
}

static void MR_CALL 
top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_query__677__1_4_p_0(
  MR_Word StdOut_10,
  MR_String HeadVar__2_85)
{
  mercury__io__print_line_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), StdOut_10, ((MR_Box) (HeadVar__2_85)));
}

static void MR_CALL 
top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_query__670__1_4_p_0(
  MR_Word StdOut_10,
  MR_String HeadVar__2_79)
{
  mercury__io__print_line_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), StdOut_10, ((MR_Box) (HeadVar__2_79)));
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
    MR_String Var_16 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));

    if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 0))
    {
      MR_String ArgY1_5 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));

      mercury__private_builtin__builtin_compare_string_3_p_0(HeadVar__1_1, Var_16, ArgY1_5);
    }
    else
      *HeadVar__1_1 = (MR_Integer) 1;
  }
  else
  {
    MR_Word Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

    if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 0))
      *HeadVar__1_1 = (MR_Integer) 2;
    else
    {
      MR_Word ArgY1_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));

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
    MR_String ArgX1_3 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
    MR_String ArgY1_4;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
    if (succeeded)
    {
      ArgY1_4 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      succeeded = (strcmp(ArgX1_3, ArgY1_4) == 0);
    }
  }
  else
  {
    MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_6;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
    if (succeeded)
    {
      ArgY1_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
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
top_level__mercury_compile_main__augment_and_process_module_15_p_0(
  MR_Word Globals_16,
  MR_Word OpModeAugment_17,
  MR_String SourceFileName_18,
  MR_Word MaybeTimestamp_19,
  MR_Word SourceFileModuleName_20,
  MR_Word NestedSubModules_21,
  MR_Word FindTimestampFiles_22,
  MR_Word ParseTreeModuleSrc_23,
  MR_Word * ExtraObjFiles_24,
  MR_Word STATE_VARIABLE_Specs_0_35,
  MR_Word * STATE_VARIABLE_Specs_36,
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_0_37,
  MR_Word * STATE_VARIABLE_HaveReadModuleMaps_38)
{
  MR_bool succeeded;
  MR_Word ModuleName_28;
  MR_Word MaybeTopModule_29;
  MR_Word Baggage_30;
  MR_Word AugCompUnit_31;
  MR_Word Errors_32;
  MR_Word FatalErrors_33;
  MR_Word STATE_VARIABLE_Specs_41_41;
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_42_42;
  MR_Word STATE_VARIABLE_Specs_44_44;
  MR_Word Var_45;
  MR_Word Var_46;

  parse_tree__check_module_interface__check_module_interface_for_no_exports_4_p_0(Globals_16, ParseTreeModuleSrc_23, STATE_VARIABLE_Specs_0_35, &STATE_VARIABLE_Specs_41_41);
  ModuleName_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_23, (MR_Integer) 0))));
  succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ModuleName_28, SourceFileModuleName_20);
  if (succeeded)
    {
      MaybeTopModule_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), MaybeTopModule_29, 0) = ((MR_Box) (NestedSubModules_21));
    }
  else
    MaybeTopModule_29 = (MR_Word) ((MR_Unsigned) 0U);
  parse_tree__grab_modules__grab_qual_imported_modules_augment_12_p_0(Globals_16, SourceFileName_18, SourceFileModuleName_20, MaybeTimestamp_19, MaybeTopModule_29, ParseTreeModuleSrc_23, &Baggage_30, &AugCompUnit_31, STATE_VARIABLE_HaveReadModuleMaps_0_37, &STATE_VARIABLE_HaveReadModuleMaps_42_42);
  Var_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Baggage_30, (MR_Integer) 6))));
  STATE_VARIABLE_Specs_44_44 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_45, STATE_VARIABLE_Specs_41_41);
  Errors_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Baggage_30, (MR_Integer) 7))));
  Var_46 = parse_tree__parse_error__fatal_read_module_errors_0_f_0();
  mercury__set__intersect_3_p_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_error_0), Errors_32, Var_46, &FatalErrors_33);
  succeeded = mercury__set__is_empty_1_p_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_error_0), FatalErrors_33);
  if (succeeded)
  {
    MR_Word Var_34;

    top_level__mercury_compile_main__process_augmented_module_14_p_0(Globals_16, OpModeAugment_17, Baggage_30, AugCompUnit_31, FindTimestampFiles_22, ExtraObjFiles_24, (MR_Word) ((MR_Unsigned) 0U), &Var_34, STATE_VARIABLE_Specs_44_44, STATE_VARIABLE_Specs_36, STATE_VARIABLE_HaveReadModuleMaps_42_42, STATE_VARIABLE_HaveReadModuleMaps_38);
  }
  else
  {
    *ExtraObjFiles_24 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_HaveReadModuleMaps_38 = STATE_VARIABLE_HaveReadModuleMaps_42_42;
    *STATE_VARIABLE_Specs_36 = STATE_VARIABLE_Specs_44_44;
  }
}

static void MR_CALL 
top_level__mercury_compile_main__process_augmented_module_14_p_0(
  MR_Word Globals0_15,
  MR_Word OpModeAugment_16,
  MR_Word Baggage_17,
  MR_Word AugCompUnit_18,
  MR_Word FindTimestampFiles_19,
  MR_Word * ExtraObjFiles_20,
  MR_Word STATE_VARIABLE_DumpInfo_0_50,
  MR_Word * STATE_VARIABLE_DumpInfo_51,
  MR_Word STATE_VARIABLE_Specs_0_52,
  MR_Word * STATE_VARIABLE_Specs_53,
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_0_54,
  MR_Word * STATE_VARIABLE_HaveReadModuleMaps_55)
{
  MR_bool succeeded;
  MR_Word Globals_25;
  MR_Word WriteDFile_26;
  MR_Word HLDS1_28;
  MR_Word QualInfo_29;
  MR_Word MaybeTimestampMap_30;
  MR_Word UndefTypes_31;
  MR_Word UndefModes_32;
  MR_Word PreHLDSErrors_33;
  MR_Word FrontEndErrors_34;
  MR_Word HLDS20_35;
  MR_Integer ExitStatus_36;
  MR_Word STATE_VARIABLE_DumpInfo_58_58;
  MR_Word STATE_VARIABLE_Specs_59_59;
  MR_Word STATE_VARIABLE_DumpInfo_62_62;
  MR_Word STATE_VARIABLE_Specs_63_63;
  MR_Word Var_66;

  switch (MR_tag((MR_Word) OpModeAugment_16)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(OpModeAugment_16)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            top_level__mercury_compile_main__disable_warning_options_2_p_0(Globals0_15, &Globals_25);
            WriteDFile_26 = (MR_Integer) 0;
          }
          break;
        case (MR_Integer) 1:
          {
            top_level__mercury_compile_main__disable_warning_options_2_p_0(Globals0_15, &Globals_25);
            WriteDFile_26 = (MR_Integer) 1;
          }
          break;
        case (MR_Integer) 2:
        case (MR_Integer) 3:
          {
            Globals_25 = Globals0_15;
            WriteDFile_26 = (MR_Integer) 1;
          }
          break;
        case (MR_Integer) 4:
        case (MR_Integer) 5:
          {
            Globals_25 = Globals0_15;
            WriteDFile_26 = (MR_Integer) 0;
          }
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        Globals_25 = Globals0_15;
        WriteDFile_26 = (MR_Integer) 1;
      }
      break;
  }
  top_level__mercury_compile_make_hlds__make_hlds_pass_19_p_0(Globals_25, OpModeAugment_16, WriteDFile_26, Baggage_17, AugCompUnit_18, &HLDS1_28, &QualInfo_29, &MaybeTimestampMap_30, &UndefTypes_31, &UndefModes_32, &PreHLDSErrors_33, STATE_VARIABLE_DumpInfo_0_50, &STATE_VARIABLE_DumpInfo_58_58, STATE_VARIABLE_Specs_0_52, &STATE_VARIABLE_Specs_59_59, STATE_VARIABLE_HaveReadModuleMaps_0_54, STATE_VARIABLE_HaveReadModuleMaps_55);
  top_level__mercury_compile_front_end__frontend_pass_14_p_0(OpModeAugment_16, QualInfo_29, UndefTypes_31, UndefModes_32, PreHLDSErrors_33, &FrontEndErrors_34, HLDS1_28, &HLDS20_35, STATE_VARIABLE_DumpInfo_58_58, &STATE_VARIABLE_DumpInfo_62_62, STATE_VARIABLE_Specs_59_59, &STATE_VARIABLE_Specs_63_63);
  mercury__io__get_exit_status_3_p_0(&ExitStatus_36);
  succeeded = (PreHLDSErrors_33 == (MR_Integer) 0);
  if (succeeded)
  {
    succeeded = (FrontEndErrors_34 == (MR_Integer) 0);
    if (succeeded)
    {
      Var_66 = parse_tree__error_util__contains_errors_2_f_0(Globals_25, STATE_VARIABLE_Specs_63_63);
      succeeded = (Var_66 == (MR_Integer) 0);
      if (succeeded)
        succeeded = (ExitStatus_36 == (MR_Integer) 0);
    }
  }
  if (succeeded)
  {
    MR_Word Verbose_37;
    MR_Word Stats_38;
    MR_Word HLDS21_39;

    libs__globals__lookup_bool_option_3_p_0(Globals_25, (MR_Integer) 71, &Verbose_37);
    libs__globals__lookup_bool_option_3_p_0(Globals_25, (MR_Integer) 81, &Stats_38);
    top_level__mercury_compile_main__maybe_write_dependency_graph_6_p_0(Verbose_37, Stats_38, HLDS20_35, &HLDS21_39);
    switch (MR_tag((MR_Word) OpModeAugment_16)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(OpModeAugment_16)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              *ExtraObjFiles_20 = (MR_Word) ((MR_Unsigned) 0U);
              *STATE_VARIABLE_DumpInfo_51 = STATE_VARIABLE_DumpInfo_62_62;
              *STATE_VARIABLE_Specs_53 = STATE_VARIABLE_Specs_63_63;
            }
            break;
          case (MR_Integer) 1:
            {
              top_level__mercury_compile_middle_passes__output_trans_opt_file_7_p_0(HLDS21_39, STATE_VARIABLE_Specs_63_63, STATE_VARIABLE_Specs_53, STATE_VARIABLE_DumpInfo_62_62, STATE_VARIABLE_DumpInfo_51);
              *ExtraObjFiles_20 = (MR_Word) ((MR_Unsigned) 0U);
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word HLDS22_47;

              top_level__mercury_compile_main__prepare_for_intermodule_analysis_7_p_0(Globals_25, Verbose_37, Stats_38, HLDS21_39, &HLDS22_47);
              top_level__mercury_compile_middle_passes__output_analysis_file_7_p_0(HLDS22_47, STATE_VARIABLE_Specs_63_63, STATE_VARIABLE_Specs_53, STATE_VARIABLE_DumpInfo_62_62, STATE_VARIABLE_DumpInfo_51);
              *ExtraObjFiles_20 = (MR_Word) ((MR_Unsigned) 0U);
            }
            break;
          case (MR_Integer) 3:
            {
              check_hlds__xml_documentation__xml_documentation_3_p_0(HLDS21_39);
              *ExtraObjFiles_20 = (MR_Word) ((MR_Unsigned) 0U);
              *STATE_VARIABLE_DumpInfo_51 = STATE_VARIABLE_DumpInfo_62_62;
              *STATE_VARIABLE_Specs_53 = STATE_VARIABLE_Specs_63_63;
            }
            break;
          case (MR_Integer) 4:
            {
              *ExtraObjFiles_20 = (MR_Word) ((MR_Unsigned) 0U);
              *STATE_VARIABLE_DumpInfo_51 = STATE_VARIABLE_DumpInfo_62_62;
              *STATE_VARIABLE_Specs_53 = STATE_VARIABLE_Specs_63_63;
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word UnusedArgs_40;

              libs__globals__lookup_bool_option_3_p_0(Globals_25, (MR_Integer) 14, &UnusedArgs_40);
              switch (UnusedArgs_40) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  *STATE_VARIABLE_Specs_53 = STATE_VARIABLE_Specs_63_63;
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word OptTuple_41;
                    MR_Word NoOptUnusedArgsOptTuple_42;
                    MR_Word NoOptUnusedArgsGlobals_43;
                    MR_Word HLDS21a_44;
                    MR_Integer Var_176;
                    MR_Integer Var_177;
                    MR_Integer Var_178;
                    MR_Integer Var_179;
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
                    MR_String Var_213;
                    MR_Unsigned packed_word_0;
                    MR_Unsigned packed_word_1;
                    MR_Unsigned packed_word_2;
                    MR_Word _UnusedArgsInfos_45;
                    MR_Word _HLDS22_46;

                    libs__globals__get_opt_tuple_2_p_0(Globals_25, &OptTuple_41);
                    packed_word_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), OptTuple_41, (MR_Integer) 0)));
                    packed_word_1 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), OptTuple_41, (MR_Integer) 1)));
                    packed_word_2 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), OptTuple_41, (MR_Integer) 2)));
                    Var_176 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), OptTuple_41, (MR_Integer) 3))));
                    Var_177 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), OptTuple_41, (MR_Integer) 4))));
                    Var_178 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), OptTuple_41, (MR_Integer) 5))));
                    Var_179 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), OptTuple_41, (MR_Integer) 6))));
                    Var_180 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), OptTuple_41, (MR_Integer) 7))));
                    Var_181 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), OptTuple_41, (MR_Integer) 8))));
                    Var_182 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), OptTuple_41, (MR_Integer) 9))));
                    Var_183 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), OptTuple_41, (MR_Integer) 10))));
                    Var_184 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), OptTuple_41, (MR_Integer) 11))));
                    Var_185 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), OptTuple_41, (MR_Integer) 12))));
                    Var_186 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), OptTuple_41, (MR_Integer) 13))));
                    Var_187 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), OptTuple_41, (MR_Integer) 14))));
                    Var_188 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), OptTuple_41, (MR_Integer) 15))));
                    Var_189 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), OptTuple_41, (MR_Integer) 16))));
                    Var_190 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), OptTuple_41, (MR_Integer) 17))));
                    Var_191 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), OptTuple_41, (MR_Integer) 18))));
                    Var_192 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), OptTuple_41, (MR_Integer) 19))));
                    Var_193 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), OptTuple_41, (MR_Integer) 20))));
                    Var_194 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), OptTuple_41, (MR_Integer) 21))));
                    Var_195 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), OptTuple_41, (MR_Integer) 22))));
                    Var_196 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), OptTuple_41, (MR_Integer) 23))));
                    Var_197 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), OptTuple_41, (MR_Integer) 24))));
                    Var_198 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), OptTuple_41, (MR_Integer) 25))));
                    Var_199 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), OptTuple_41, (MR_Integer) 26))));
                    Var_200 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), OptTuple_41, (MR_Integer) 27))));
                    Var_201 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), OptTuple_41, (MR_Integer) 28))));
                    Var_202 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), OptTuple_41, (MR_Integer) 29))));
                    Var_203 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), OptTuple_41, (MR_Integer) 30))));
                    Var_204 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), OptTuple_41, (MR_Integer) 31))));
                    Var_205 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), OptTuple_41, (MR_Integer) 32))));
                    Var_206 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), OptTuple_41, (MR_Integer) 33))));
                    Var_207 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), OptTuple_41, (MR_Integer) 34))));
                    Var_208 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), OptTuple_41, (MR_Integer) 35))));
                    Var_209 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), OptTuple_41, (MR_Integer) 36))));
                    Var_210 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), OptTuple_41, (MR_Integer) 37))));
                    Var_211 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), OptTuple_41, (MR_Integer) 38))));
                    Var_212 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), OptTuple_41, (MR_Integer) 39))));
                    Var_213 = ((MR_String) ((MR_hl_field(MR_mktag(0), OptTuple_41, (MR_Integer) 40))));
                    {
                      NoOptUnusedArgsOptTuple_42 = (MR_Word) MR_new_object(MR_Word, (41 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), NoOptUnusedArgsOptTuple_42, 0) = (MR_Box) ((((packed_word_0 & (~((MR_Unsigned) 64U)))) | (((MR_Unsigned) ((MR_Integer) 1) << 6))));
                      MR_hl_field(MR_mktag(0), NoOptUnusedArgsOptTuple_42, 1) = (MR_Box) (packed_word_1);
                      MR_hl_field(MR_mktag(0), NoOptUnusedArgsOptTuple_42, 2) = (MR_Box) (packed_word_2);
                      MR_hl_field(MR_mktag(0), NoOptUnusedArgsOptTuple_42, 3) = ((MR_Box) (Var_176));
                      MR_hl_field(MR_mktag(0), NoOptUnusedArgsOptTuple_42, 4) = ((MR_Box) (Var_177));
                      MR_hl_field(MR_mktag(0), NoOptUnusedArgsOptTuple_42, 5) = ((MR_Box) (Var_178));
                      MR_hl_field(MR_mktag(0), NoOptUnusedArgsOptTuple_42, 6) = ((MR_Box) (Var_179));
                      MR_hl_field(MR_mktag(0), NoOptUnusedArgsOptTuple_42, 7) = ((MR_Box) (Var_180));
                      MR_hl_field(MR_mktag(0), NoOptUnusedArgsOptTuple_42, 8) = ((MR_Box) (Var_181));
                      MR_hl_field(MR_mktag(0), NoOptUnusedArgsOptTuple_42, 9) = ((MR_Box) (Var_182));
                      MR_hl_field(MR_mktag(0), NoOptUnusedArgsOptTuple_42, 10) = ((MR_Box) (Var_183));
                      MR_hl_field(MR_mktag(0), NoOptUnusedArgsOptTuple_42, 11) = ((MR_Box) (Var_184));
                      MR_hl_field(MR_mktag(0), NoOptUnusedArgsOptTuple_42, 12) = ((MR_Box) (Var_185));
                      MR_hl_field(MR_mktag(0), NoOptUnusedArgsOptTuple_42, 13) = ((MR_Box) (Var_186));
                      MR_hl_field(MR_mktag(0), NoOptUnusedArgsOptTuple_42, 14) = ((MR_Box) (Var_187));
                      MR_hl_field(MR_mktag(0), NoOptUnusedArgsOptTuple_42, 15) = ((MR_Box) (Var_188));
                      MR_hl_field(MR_mktag(0), NoOptUnusedArgsOptTuple_42, 16) = ((MR_Box) (Var_189));
                      MR_hl_field(MR_mktag(0), NoOptUnusedArgsOptTuple_42, 17) = ((MR_Box) (Var_190));
                      MR_hl_field(MR_mktag(0), NoOptUnusedArgsOptTuple_42, 18) = ((MR_Box) (Var_191));
                      MR_hl_field(MR_mktag(0), NoOptUnusedArgsOptTuple_42, 19) = ((MR_Box) (Var_192));
                      MR_hl_field(MR_mktag(0), NoOptUnusedArgsOptTuple_42, 20) = ((MR_Box) (Var_193));
                      MR_hl_field(MR_mktag(0), NoOptUnusedArgsOptTuple_42, 21) = ((MR_Box) (Var_194));
                      MR_hl_field(MR_mktag(0), NoOptUnusedArgsOptTuple_42, 22) = ((MR_Box) (Var_195));
                      MR_hl_field(MR_mktag(0), NoOptUnusedArgsOptTuple_42, 23) = ((MR_Box) (Var_196));
                      MR_hl_field(MR_mktag(0), NoOptUnusedArgsOptTuple_42, 24) = ((MR_Box) (Var_197));
                      MR_hl_field(MR_mktag(0), NoOptUnusedArgsOptTuple_42, 25) = ((MR_Box) (Var_198));
                      MR_hl_field(MR_mktag(0), NoOptUnusedArgsOptTuple_42, 26) = ((MR_Box) (Var_199));
                      MR_hl_field(MR_mktag(0), NoOptUnusedArgsOptTuple_42, 27) = ((MR_Box) (Var_200));
                      MR_hl_field(MR_mktag(0), NoOptUnusedArgsOptTuple_42, 28) = ((MR_Box) (Var_201));
                      MR_hl_field(MR_mktag(0), NoOptUnusedArgsOptTuple_42, 29) = ((MR_Box) (Var_202));
                      MR_hl_field(MR_mktag(0), NoOptUnusedArgsOptTuple_42, 30) = ((MR_Box) (Var_203));
                      MR_hl_field(MR_mktag(0), NoOptUnusedArgsOptTuple_42, 31) = ((MR_Box) (Var_204));
                      MR_hl_field(MR_mktag(0), NoOptUnusedArgsOptTuple_42, 32) = ((MR_Box) (Var_205));
                      MR_hl_field(MR_mktag(0), NoOptUnusedArgsOptTuple_42, 33) = ((MR_Box) (Var_206));
                      MR_hl_field(MR_mktag(0), NoOptUnusedArgsOptTuple_42, 34) = ((MR_Box) (Var_207));
                      MR_hl_field(MR_mktag(0), NoOptUnusedArgsOptTuple_42, 35) = ((MR_Box) (Var_208));
                      MR_hl_field(MR_mktag(0), NoOptUnusedArgsOptTuple_42, 36) = ((MR_Box) (Var_209));
                      MR_hl_field(MR_mktag(0), NoOptUnusedArgsOptTuple_42, 37) = ((MR_Box) (Var_210));
                      MR_hl_field(MR_mktag(0), NoOptUnusedArgsOptTuple_42, 38) = ((MR_Box) (Var_211));
                      MR_hl_field(MR_mktag(0), NoOptUnusedArgsOptTuple_42, 39) = ((MR_Box) (Var_212));
                      MR_hl_field(MR_mktag(0), NoOptUnusedArgsOptTuple_42, 40) = ((MR_Box) (Var_213));
                    }
                    libs__globals__set_opt_tuple_3_p_0(NoOptUnusedArgsOptTuple_42, Globals_25, &NoOptUnusedArgsGlobals_43);
                    hlds__hlds_module__module_info_set_globals_3_p_0(NoOptUnusedArgsGlobals_43, HLDS21_39, &HLDS21a_44);
                    top_level__mercury_compile_middle_passes__maybe_unused_args_9_p_0(Verbose_37, Stats_38, &_UnusedArgsInfos_45, HLDS21a_44, &_HLDS22_46, STATE_VARIABLE_Specs_63_63, STATE_VARIABLE_Specs_53);
                  }
                  break;
              }
              *ExtraObjFiles_20 = (MR_Word) ((MR_Unsigned) 0U);
              *STATE_VARIABLE_DumpInfo_51 = STATE_VARIABLE_DumpInfo_62_62;
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word OpModeCodeGen_48 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), OpModeAugment_16, (MR_Integer) 0))) & (MR_Integer) 3);
          MR_Word MaybeTopModule_49;
          MR_Word HLDS22_88;

          top_level__mercury_compile_main__maybe_prepare_for_intermodule_analysis_7_p_0(Globals_25, Verbose_37, Stats_38, HLDS21_39, &HLDS22_88);
          MaybeTopModule_49 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Baggage_17, (MR_Integer) 3))));
          top_level__mercury_compile_main__after_front_end_passes_13_p_0(Globals_25, OpModeCodeGen_48, MaybeTopModule_49, FindTimestampFiles_19, MaybeTimestampMap_30, HLDS22_88, ExtraObjFiles_20, STATE_VARIABLE_Specs_63_63, STATE_VARIABLE_Specs_53, STATE_VARIABLE_DumpInfo_62_62, STATE_VARIABLE_DumpInfo_51);
        }
        break;
    }
  }
  else
  {
    succeeded = (ExitStatus_36 == (MR_Integer) 0);
    if (succeeded)
      mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
    *ExtraObjFiles_20 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Specs_53 = STATE_VARIABLE_Specs_63_63;
    *STATE_VARIABLE_DumpInfo_51 = STATE_VARIABLE_DumpInfo_62_62;
  }
}

static void MR_CALL 
top_level__mercury_compile_main__after_front_end_passes_13_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv3_HeadVar__5_5;

  parse_tree__module_cmds__touch_datestamp_7_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_String) (wrapper_arg_1)), &conv3_HeadVar__5_5);
  *wrapper_arg_2 = ((MR_Box) (conv3_HeadVar__5_5));
}

static void MR_CALL 
top_level__mercury_compile_main__after_front_end_passes_13_p_0(
  MR_Word Globals_14,
  MR_Word OpModeCodeGen_15,
  MR_Word MaybeTopModule_16,
  MR_Word FindTimestampFiles_17,
  MR_Word MaybeTimestampMap_18,
  MR_Word STATE_VARIABLE_HLDS_0_57,
  MR_Word * ExtraObjFiles_20,
  MR_Word STATE_VARIABLE_Specs_0_58,
  MR_Word * STATE_VARIABLE_Specs_59,
  MR_Word STATE_VARIABLE_DumpInfo_0_60,
  MR_Word * STATE_VARIABLE_DumpInfo_61)
{
  MR_bool succeeded;
  MR_Word Verbose_24;
  MR_Word Stats_25;
  MR_Word HighLevelCode_26;
  MR_Word Target_27;
  MR_Word ModuleName_28;
  MR_String UsageFileName_29;
  MR_Word FrontEndErrors_31;
  MR_Integer ExitStatus_32;
  MR_Word STATE_VARIABLE_HLDS_66_66;
  MR_Word STATE_VARIABLE_HLDS_68_68;
  MR_Word STATE_VARIABLE_DumpInfo_69_69;
  MR_Word STATE_VARIABLE_Specs_70_70;
  MR_Word Var_30;

  libs__globals__lookup_bool_option_3_p_0(Globals_14, (MR_Integer) 71, &Verbose_24);
  libs__globals__lookup_bool_option_3_p_0(Globals_14, (MR_Integer) 81, &Stats_25);
  top_level__mercury_compile_main__maybe_output_prof_call_graph_6_p_0(Verbose_24, Stats_25, STATE_VARIABLE_HLDS_0_57, &STATE_VARIABLE_HLDS_66_66);
  top_level__mercury_compile_middle_passes__middle_pass_8_p_0(STATE_VARIABLE_HLDS_66_66, &STATE_VARIABLE_HLDS_68_68, STATE_VARIABLE_DumpInfo_0_60, &STATE_VARIABLE_DumpInfo_69_69, STATE_VARIABLE_Specs_0_58, &STATE_VARIABLE_Specs_70_70);
  libs__globals__lookup_bool_option_3_p_0(Globals_14, (MR_Integer) 302, &HighLevelCode_26);
  libs__globals__get_target_2_p_0(Globals_14, &Target_27);
  hlds__hlds_module__module_info_get_name_2_p_0(STATE_VARIABLE_HLDS_68_68, &ModuleName_28);
  parse_tree__file_names__module_name_to_file_name_8_p_0(Globals_14, (MR_String) "predicate \140top_level.mercury_compile_main.after_front_end_passes\'/13", (MR_Integer) 1, (MR_Word) (MR_mkword(MR_mktag(1), &top_level__mercury_compile_main_scalar_common_2[4])), ModuleName_28, &UsageFileName_29);
  mercury__io__file__remove_file_4_p_0(UsageFileName_29, &Var_30);
  FrontEndErrors_31 = parse_tree__error_util__contains_errors_or_warnings_treated_as_errors_2_f_0(Globals_14, STATE_VARIABLE_Specs_70_70);
  mercury__io__get_exit_status_3_p_0(&ExitStatus_32);
  succeeded = (FrontEndErrors_31 == (MR_Integer) 0);
  if (succeeded)
    succeeded = (ExitStatus_32 == (MR_Integer) 0);
  if (succeeded)
  {
    MR_Word ProgressStream_33;
    MR_Word ErrorStream_34;
    MR_Word Succeeded_38;
    MR_Word STATE_VARIABLE_HLDS_84_84;

    hlds__passes_aux__get_progress_output_stream_4_p_0(STATE_VARIABLE_HLDS_68_68, &ProgressStream_33);
    hlds__passes_aux__get_error_output_stream_4_p_0(STATE_VARIABLE_HLDS_68_68, &ErrorStream_34);
    switch (Target_27) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word ExportDecls_42;

          backend_libs__export__get_foreign_export_decls_2_p_0(STATE_VARIABLE_HLDS_68_68, &ExportDecls_42);
          backend_libs__export__produce_header_file_5_p_0(STATE_VARIABLE_HLDS_68_68, ExportDecls_42, ModuleName_28);
          switch (HighLevelCode_26) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word GlobalData_49;
                MR_Word LLDS_50;

                top_level__mercury_compile_llds_back_end__llds_backend_pass_8_p_0(STATE_VARIABLE_HLDS_68_68, &STATE_VARIABLE_HLDS_84_84, &GlobalData_49, &LLDS_50, STATE_VARIABLE_DumpInfo_69_69, STATE_VARIABLE_DumpInfo_61);
                top_level__mercury_compile_llds_back_end__llds_output_pass_9_p_0(OpModeCodeGen_15, STATE_VARIABLE_HLDS_84_84, GlobalData_49, LLDS_50, ModuleName_28, &Succeeded_38, ExtraObjFiles_20);
                *STATE_VARIABLE_Specs_59 = STATE_VARIABLE_Specs_70_70;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word MLDS_129;
                MR_Word NewSpecs_130;
                MR_Word TargetCodeSucceeded_131;
                MR_Word Var_43;

                top_level__mercury_compile_mlds_back_end__mlds_backend_8_p_0(STATE_VARIABLE_HLDS_68_68, &Var_43, &MLDS_129, &NewSpecs_130, STATE_VARIABLE_DumpInfo_69_69, STATE_VARIABLE_DumpInfo_61);
                *STATE_VARIABLE_Specs_59 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), NewSpecs_130, STATE_VARIABLE_Specs_70_70);
                top_level__mercury_compile_mlds_back_end__mlds_to_high_level_c_5_p_0(Globals_14, MLDS_129, &TargetCodeSucceeded_131);
                switch (OpModeCodeGen_15) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 1:
                  case (MR_Integer) 2:
                    switch (TargetCodeSucceeded_131) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        Succeeded_38 = (MR_Integer) 0;
                        break;
                      case (MR_Integer) 1:
                        {
                          MR_String C_File_44;
                          MR_Word TargetType_45;
                          MR_Word PIC_46;
                          MR_Word ObjOtherExt_47;
                          MR_String O_File_48;
                          MR_Word Var_100;

                          parse_tree__file_names__module_name_to_file_name_8_p_0(Globals_14, (MR_String) "predicate \140top_level.mercury_compile_main.after_front_end_passes\'/13", (MR_Integer) 1, (MR_Word) (MR_mkword(MR_mktag(1), &top_level__mercury_compile_main_scalar_common_2[5])), ModuleName_28, &C_File_44);
                          backend_libs__compile_target_code__get_linked_target_type_2_p_0(Globals_14, &TargetType_45);
                          backend_libs__compile_target_code__get_object_code_type_3_p_0(Globals_14, TargetType_45, &PIC_46);
                          backend_libs__compile_target_code__pic_object_file_extension_3_p_0(Globals_14, PIC_46, &ObjOtherExt_47);
                          {
                            Var_100 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(1), Var_100, 0) = ((MR_Box) (ObjOtherExt_47));
                          }
                          parse_tree__file_names__module_name_to_file_name_8_p_0(Globals_14, (MR_String) "predicate \140top_level.mercury_compile_main.after_front_end_passes\'/13", (MR_Integer) 0, Var_100, ModuleName_28, &O_File_48);
                          backend_libs__compile_target_code__do_compile_c_file_9_p_0(Globals_14, ProgressStream_33, ErrorStream_34, PIC_46, C_File_44, O_File_48, &Succeeded_38);
                          parse_tree__module_cmds__maybe_set_exit_status_3_p_0(Succeeded_38);
                        }
                        break;
                    }
                    break;
                  case (MR_Integer) 0:
                    Succeeded_38 = TargetCodeSucceeded_131;
                    break;
                }
                *ExtraObjFiles_20 = (MR_Word) ((MR_Unsigned) 0U);
                STATE_VARIABLE_HLDS_84_84 = STATE_VARIABLE_HLDS_68_68;
              }
              break;
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word MLDS_36;
          MR_Word NewSpecs_37;
          MR_Word Var_35;

          top_level__mercury_compile_mlds_back_end__mlds_backend_8_p_0(STATE_VARIABLE_HLDS_68_68, &Var_35, &MLDS_36, &NewSpecs_37, STATE_VARIABLE_DumpInfo_69_69, STATE_VARIABLE_DumpInfo_61);
          *STATE_VARIABLE_Specs_59 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), NewSpecs_37, STATE_VARIABLE_Specs_70_70);
          top_level__mercury_compile_mlds_back_end__mlds_to_csharp_5_p_0(STATE_VARIABLE_HLDS_68_68, MLDS_36, &Succeeded_38);
          *ExtraObjFiles_20 = (MR_Word) ((MR_Unsigned) 0U);
          STATE_VARIABLE_HLDS_84_84 = STATE_VARIABLE_HLDS_68_68;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word TargetCodeSucceeded_40;
          MR_Word MLDS_127;
          MR_Word NewSpecs_128;
          MR_Word Var_39;

          top_level__mercury_compile_mlds_back_end__mlds_backend_8_p_0(STATE_VARIABLE_HLDS_68_68, &Var_39, &MLDS_127, &NewSpecs_128, STATE_VARIABLE_DumpInfo_69_69, STATE_VARIABLE_DumpInfo_61);
          *STATE_VARIABLE_Specs_59 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), NewSpecs_128, STATE_VARIABLE_Specs_70_70);
          top_level__mercury_compile_mlds_back_end__mlds_to_java_5_p_0(STATE_VARIABLE_HLDS_68_68, MLDS_127, &TargetCodeSucceeded_40);
          switch (OpModeCodeGen_15) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
            case (MR_Integer) 2:
              switch (TargetCodeSucceeded_40) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  Succeeded_38 = (MR_Integer) 0;
                  break;
                case (MR_Integer) 1:
                  {
                    MR_String JavaFile_41;

                    parse_tree__file_names__module_name_to_file_name_8_p_0(Globals_14, (MR_String) "predicate \140top_level.mercury_compile_main.after_front_end_passes\'/13", (MR_Integer) 1, (MR_Word) (MR_mkword(MR_mktag(1), &top_level__mercury_compile_main_scalar_common_2[6])), ModuleName_28, &JavaFile_41);
                    backend_libs__compile_target_code__compile_java_files_8_p_0(Globals_14, ProgressStream_33, ErrorStream_34, JavaFile_41, (MR_Word) ((MR_Unsigned) 0U), &Succeeded_38);
                    parse_tree__module_cmds__maybe_set_exit_status_3_p_0(Succeeded_38);
                  }
                  break;
              }
              break;
            case (MR_Integer) 0:
              Succeeded_38 = TargetCodeSucceeded_40;
              break;
          }
          *ExtraObjFiles_20 = (MR_Word) ((MR_Unsigned) 0U);
          STATE_VARIABLE_HLDS_84_84 = STATE_VARIABLE_HLDS_68_68;
        }
        break;
    }
    switch (Succeeded_38) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word MaybeRecompInfo_51;
          MR_Word TimestampFiles_55;
          MR_Word Var_123;
          MR_Word RecompInfo_52;
          MR_Word TimestampMap_53;
          void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);
          MR_Box conv2_TimestampFiles_55;
          MR_Box conv1_STATE_VARIABLE_IO_122_122;
          MR_Word _Succeededs_56;
          MR_Box conv4_STATE_VARIABLE_IO_63;

          hlds__hlds_module__module_info_get_maybe_recompilation_info_2_p_0(STATE_VARIABLE_HLDS_84_84, &MaybeRecompInfo_51);
          succeeded = (MaybeRecompInfo_51 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            RecompInfo_52 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeRecompInfo_51, (MR_Integer) 0))));
            succeeded = (MaybeTimestampMap_18 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
              TimestampMap_53 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeTimestampMap_18, (MR_Integer) 0))));
          }
          if (succeeded)
          {
            MR_Word UsedFileContents_54;

            recompilation__usage__construct_used_file_contents_5_p_0(STATE_VARIABLE_HLDS_84_84, RecompInfo_52, MaybeTopModule_16, TimestampMap_53, &UsedFileContents_54);
            recompilation__used_file__write_usage_file_4_p_0(STATE_VARIABLE_HLDS_84_84, UsedFileContents_54);
          }
          func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), FindTimestampFiles_17, (MR_Integer) 1))));
          func_0(((MR_Box) (FindTimestampFiles_17)), ((MR_Box) (ModuleName_28)), &conv2_TimestampFiles_55, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_122_122);
          TimestampFiles_55 = ((MR_Word) (conv2_TimestampFiles_55));
          {
            Var_123 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_123, 0) = ((MR_Box) (&top_level__mercury_compile_main_scalar_common_7[1]));
            MR_hl_field(MR_mktag(0), Var_123, 1) = ((MR_Box) (top_level__mercury_compile_main__after_front_end_passes_13_p_0_1));
            MR_hl_field(MR_mktag(0), Var_123, 2) = ((MR_Box) ((MR_Integer) 3));
            MR_hl_field(MR_mktag(0), Var_123, 3) = ((MR_Box) (Globals_14));
            MR_hl_field(MR_mktag(0), Var_123, 4) = ((MR_Box) (ProgressStream_33));
            MR_hl_field(MR_mktag(0), Var_123, 5) = ((MR_Box) (ErrorStream_34));
          }
          mercury__list__map_foldl_5_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&libs__maybe_succeeded__libs__maybe_succeeded__type_ctor_info_maybe_succeeded_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_123, TimestampFiles_55, &_Succeededs_56, ((MR_Box) ((MR_Integer) 0)), &conv4_STATE_VARIABLE_IO_63);
        }
        break;
    }
  }
  else
  {
    succeeded = (ExitStatus_32 == (MR_Integer) 0);
    if (succeeded)
      mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
    *ExtraObjFiles_20 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_DumpInfo_61 = STATE_VARIABLE_DumpInfo_69_69;
    *STATE_VARIABLE_Specs_59 = STATE_VARIABLE_Specs_70_70;
  }
}

static void MR_CALL 
top_level__mercury_compile_main__maybe_output_prof_call_graph_6_p_0(
  MR_Word Verbose_7,
  MR_Word Stats_8,
  MR_Word STATE_VARIABLE_HLDS_0_20,
  MR_Word * STATE_VARIABLE_HLDS_21)
{
  MR_bool succeeded;
  MR_Word Globals_11;
  MR_Word ProfileCalls_12;
  MR_Word ProfileTime_13;

  hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_HLDS_0_20, &Globals_11);
  libs__globals__lookup_bool_option_3_p_0(Globals_11, (MR_Integer) 235, &ProfileCalls_12);
  libs__globals__lookup_bool_option_3_p_0(Globals_11, (MR_Integer) 236, &ProfileTime_13);
  succeeded = (ProfileCalls_12 == (MR_Integer) 1);
  if (!(succeeded))
    succeeded = (ProfileTime_13 == (MR_Integer) 1);
  if (succeeded)
  {
    MR_Word ModuleName_14;
    MR_String ProfFileName_15;
    MR_Word Res_16;

    libs__file_util__maybe_write_string_4_p_0(Verbose_7, (MR_String) "% Outputting profiling call graph...");
    libs__file_util__maybe_flush_output_3_p_0(Verbose_7);
    hlds__hlds_module__module_info_get_name_2_p_0(STATE_VARIABLE_HLDS_0_20, &ModuleName_14);
    parse_tree__file_names__module_name_to_file_name_8_p_0(Globals_11, (MR_String) "predicate \140top_level.mercury_compile_main.maybe_output_prof_call_graph\'/6", (MR_Integer) 0, (MR_Word) (MR_mkword(MR_mktag(1), &top_level__mercury_compile_main_scalar_common_2[7])), ModuleName_14, &ProfFileName_15);
    mercury__io__open_output_4_p_0(ProfFileName_15, &Res_16);
    if (((MR_tag((MR_Word) Res_16)) == (MR_Integer) 1))
    {
      MR_Word IOError_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Res_16, (MR_Integer) 0))));
      MR_String ErrorMsg_19;
      MR_String Var_37;

      Var_37 = mercury__io__error_message_1_f_0(IOError_18);
      ErrorMsg_19 = mercury__string__f_43_43_2_f_0((MR_String) "unable to write profiling static call graph: ", Var_37);
      libs__file_util__report_error_3_p_0(ErrorMsg_19);
      *STATE_VARIABLE_HLDS_21 = STATE_VARIABLE_HLDS_0_20;
    }
    else
    {
      MR_Word FileStream_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Res_16, (MR_Integer) 0))));

      hlds__hlds_dependency_graph__write_prof_dependency_graph_5_p_0(FileStream_17, STATE_VARIABLE_HLDS_0_20, STATE_VARIABLE_HLDS_21);
      mercury__io__close_output_3_p_0(FileStream_17);
    }
    libs__file_util__maybe_write_string_4_p_0(Verbose_7, (MR_String) " done.\n");
    libs__file_util__maybe_report_stats_3_p_0(Stats_8);
  }
  else
    *STATE_VARIABLE_HLDS_21 = STATE_VARIABLE_HLDS_0_20;
}

static MR_Box MR_CALL 
top_level__mercury_compile_main__prepare_for_intermodule_analysis_7_p_0_1(
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
top_level__mercury_compile_main__prepare_for_intermodule_analysis_7_p_0(
  MR_Word Globals_8,
  MR_Word Verbose_9,
  MR_Word Stats_10,
  MR_Word STATE_VARIABLE_HLDS_0_19,
  MR_Word * STATE_VARIABLE_HLDS_20)
{
  MR_Word ModuleNames_13;
  MR_Word LocalModulesList_14;
  MR_Word SymNames_15;
  MR_Word LocalModuleNames_16;
  MR_Word AnalysisInfo0_17;
  MR_Word AnalysisInfo_18;

  libs__file_util__maybe_write_string_4_p_0(Verbose_9, (MR_String) "% Preparing for intermodule analysis...\n");
  hlds__hlds_module__module_info_get_all_deps_2_p_0(STATE_VARIABLE_HLDS_0_19, &ModuleNames_13);
  libs__globals__lookup_accumulating_option_3_p_0(Globals_8, (MR_Integer) 697, &LocalModulesList_14);
  SymNames_15 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&top_level__mercury_compile_main_scalar_common_5[4]), LocalModulesList_14);
  LocalModuleNames_16 = mercury__set__list_to_set_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), SymNames_15);
  hlds__hlds_module__module_info_get_analysis_info_2_p_0(STATE_VARIABLE_HLDS_0_19, &AnalysisInfo0_17);
  analysis__prepare_intermodule_analysis_7_p_0(Globals_8, ModuleNames_13, LocalModuleNames_16, AnalysisInfo0_17, &AnalysisInfo_18);
  hlds__hlds_module__module_info_set_analysis_info_3_p_0(AnalysisInfo_18, STATE_VARIABLE_HLDS_0_19, STATE_VARIABLE_HLDS_20);
  libs__file_util__maybe_write_string_4_p_0(Verbose_9, (MR_String) "% done.\n");
  libs__file_util__maybe_report_stats_3_p_0(Stats_10);
}

static MR_Box MR_CALL 
top_level__mercury_compile_main__maybe_prepare_for_intermodule_analysis_7_p_0_1(
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
top_level__mercury_compile_main__maybe_prepare_for_intermodule_analysis_7_p_0(
  MR_Word Globals_8,
  MR_Word Verbose_9,
  MR_Word Stats_10,
  MR_Word STATE_VARIABLE_HLDS_0_14,
  MR_Word * STATE_VARIABLE_HLDS_15)
{
  MR_Word IntermodAnalysis_13;

  libs__globals__lookup_bool_option_3_p_0(Globals_8, (MR_Integer) 497, &IntermodAnalysis_13);
  switch (IntermodAnalysis_13) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *STATE_VARIABLE_HLDS_15 = STATE_VARIABLE_HLDS_0_14;
      break;
    case (MR_Integer) 1:
      {
        MR_Word ModuleNames_19;
        MR_Word LocalModulesList_20;
        MR_Word SymNames_21;
        MR_Word LocalModuleNames_22;
        MR_Word AnalysisInfo0_23;
        MR_Word AnalysisInfo_24;

        libs__file_util__maybe_write_string_4_p_0(Verbose_9, (MR_String) "% Preparing for intermodule analysis...\n");
        hlds__hlds_module__module_info_get_all_deps_2_p_0(STATE_VARIABLE_HLDS_0_14, &ModuleNames_19);
        libs__globals__lookup_accumulating_option_3_p_0(Globals_8, (MR_Integer) 697, &LocalModulesList_20);
        SymNames_21 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&top_level__mercury_compile_main_scalar_common_5[3]), LocalModulesList_20);
        LocalModuleNames_22 = mercury__set__list_to_set_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), SymNames_21);
        hlds__hlds_module__module_info_get_analysis_info_2_p_0(STATE_VARIABLE_HLDS_0_14, &AnalysisInfo0_23);
        analysis__prepare_intermodule_analysis_7_p_0(Globals_8, ModuleNames_19, LocalModuleNames_22, AnalysisInfo0_23, &AnalysisInfo_24);
        hlds__hlds_module__module_info_set_analysis_info_3_p_0(AnalysisInfo_24, STATE_VARIABLE_HLDS_0_14, STATE_VARIABLE_HLDS_15);
        libs__file_util__maybe_write_string_4_p_0(Verbose_9, (MR_String) "% done.\n");
        libs__file_util__maybe_report_stats_3_p_0(Stats_10);
      }
      break;
  }
}

static void MR_CALL 
top_level__mercury_compile_main__maybe_write_dependency_graph_6_p_0(
  MR_Word Verbose_7,
  MR_Word Stats_8,
  MR_Word STATE_VARIABLE_HLDS_0_19,
  MR_Word * STATE_VARIABLE_HLDS_20)
{
  MR_Word Globals_11;
  MR_Word ShowDepGraph_12;

  hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_HLDS_0_19, &Globals_11);
  libs__globals__lookup_bool_option_3_p_0(Globals_11, (MR_Integer) 183, &ShowDepGraph_12);
  switch (ShowDepGraph_12) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *STATE_VARIABLE_HLDS_20 = STATE_VARIABLE_HLDS_0_19;
      break;
    case (MR_Integer) 1:
      {
        MR_Word ModuleName_13;
        MR_String FileName_14;
        MR_Word Res_15;

        libs__file_util__maybe_write_string_4_p_0(Verbose_7, (MR_String) "% Writing dependency graph...");
        hlds__hlds_module__module_info_get_name_2_p_0(STATE_VARIABLE_HLDS_0_19, &ModuleName_13);
        parse_tree__file_names__module_name_to_file_name_8_p_0(Globals_11, (MR_String) "predicate \140top_level.mercury_compile_main.maybe_write_dependency_graph\'/6", (MR_Integer) 0, (MR_Word) (MR_mkword(MR_mktag(1), &top_level__mercury_compile_main_scalar_common_2[3])), ModuleName_13, &FileName_14);
        mercury__io__open_output_4_p_0(FileName_14, &Res_15);
        if (((MR_tag((MR_Word) Res_15)) == (MR_Integer) 1))
        {
          MR_Word IOError_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Res_15, (MR_Integer) 0))));
          MR_String ErrorMsg_18;
          MR_String Var_34;

          Var_34 = mercury__io__error_message_1_f_0(IOError_17);
          ErrorMsg_18 = mercury__string__f_43_43_2_f_0((MR_String) "unable to write dependency graph: ", Var_34);
          libs__file_util__report_error_3_p_0(ErrorMsg_18);
          *STATE_VARIABLE_HLDS_20 = STATE_VARIABLE_HLDS_0_19;
        }
        else
        {
          MR_Word FileStream_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Res_15, (MR_Integer) 0))));

          hlds__hlds_dependency_graph__write_dependency_graph_5_p_0(FileStream_16, STATE_VARIABLE_HLDS_0_19, STATE_VARIABLE_HLDS_20);
          mercury__io__close_output_3_p_0(FileStream_16);
          libs__file_util__maybe_write_string_4_p_0(Verbose_7, (MR_String) " done.\n");
        }
        libs__file_util__maybe_report_stats_3_p_0(Stats_8);
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
  libs__options__set_all_options_to_4_p_0(Var_8, (MR_Word) (MR_mkword(MR_mktag(1), &top_level__mercury_compile_main_scalar_common_2[1])), OptionTable0_5, &OptionTable1_6);
  Var_11 = libs__options__non_style_warning_options_0_f_0();
  libs__options__set_all_options_to_4_p_0(Var_11, (MR_Word) (MR_mkword(MR_mktag(1), &top_level__mercury_compile_main_scalar_common_2[1])), OptionTable1_6, &OptionTable_7);
  libs__globals__set_options_3_p_0(OptionTable_7, Globals0_3, Globals_4);
}

static void MR_CALL 
top_level__mercury_compile_main__module_to_link_2_p_0(
  MR_Word ParseTreeModuleSrc_3,
  MR_String * ModuleToLink_4)
{
  MR_Word ModuleName_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_3, (MR_Integer) 0))));

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
    Var_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_17, 0) = ((MR_Box) (TimestampOtherExt_8));
  }
  parse_tree__file_names__module_name_to_file_name_8_p_0(Globals_7, (MR_String) "predicate \140top_level.mercury_compile_main.find_timestamp_files_2\'/6", (MR_Integer) 0, Var_17, ModuleName_9, &FileName_12);
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *TimestampFiles_10 = base;
    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (FileName_12));
    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
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
    Var_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_17, 0) = ((MR_Box) (TargetOtherExt_8));
  }
  parse_tree__file_names__module_name_to_file_name_8_p_0(Globals_7, (MR_String) "predicate \140top_level.mercury_compile_main.usual_find_target_files\'/6", (MR_Integer) 0, Var_17, ModuleName_9, &FileName_12);
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *TargetFiles_10 = base;
    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (FileName_12));
    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
}

void MR_CALL 
top_level__mercury_compile_main__main_for_make_4_p_0(
  MR_Word Globals_5,
  MR_Word Args_6)
{
  MR_Word EnvVarMap_9;
  MR_Word Variables_10;

  mercury__io__environment__get_environment_var_map_3_p_0(&EnvVarMap_9);
  Variables_10 = make__options_file__options_variables_init_1_f_0(EnvVarMap_9);
  top_level__mercury_compile_main__main_after_setup_7_p_0(Globals_5, (MR_Word) ((MR_Unsigned) 0U), Variables_10, (MR_Word) ((MR_Unsigned) 0U), Args_6);
}

void MR_CALL 
top_level__mercury_compile_main__real_main_2_p_0(void)
{
  MR_bool succeeded;
  MR_Word StdErr_4;
  MR_Word CmdLineArgs_6;
  MR_Word Res_8;
  MR_Word Var_5;

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
  mercury__io__stderr_stream_3_p_0(&StdErr_4);
  mercury__io__set_output_stream_4_p_0(StdErr_4, &Var_5);
  mercury__io__command_line_arguments_3_p_0(&CmdLineArgs_6);
  mdbcomp__shared_utilities__unlimit_stack_2_p_0();
  top_level__mercury_compile_main__expand_at_file_arguments_4_p_0(CmdLineArgs_6, &Res_8);
  if (((MR_tag((MR_Word) Res_8)) == (MR_Integer) 1))
  {
    MR_Word E_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Res_8, (MR_Integer) 0))));
    MR_String Var_28;

    mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
    Var_28 = mercury__io__error_message_1_f_0(E_10);
    mercury__io__write_string_3_p_0(Var_28);
    mercury__io__write_string_3_p_0((MR_String) "\n");
  }
  else
  {
    MR_Word ExpandedCmdLineArgs_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Res_8, (MR_Integer) 0))));
    MR_Word DetectedGradeFlags_39;
    MR_Word Variables_40;
    MR_Word MaybeMCFlags_41;
    MR_Word OptionArgs_42;
    MR_Word NonOptionArgs_43;
    MR_Word OptionSpecs_44;
    MR_String ArgFile_37;
    MR_Word ExtraArgs_38;
    MR_String Var_58;
    MR_Word Var_59;

    succeeded = (ExpandedCmdLineArgs_9 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      Var_58 = ((MR_String) ((MR_hl_field(MR_mktag(1), ExpandedCmdLineArgs_9, (MR_Integer) 0))));
      Var_59 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ExpandedCmdLineArgs_9, (MR_Integer) 1))));
      succeeded = (strcmp(Var_58, (MR_String) "--arg-file") == 0);
      if (succeeded)
      {
        succeeded = (Var_59 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          ArgFile_37 = ((MR_String) ((MR_hl_field(MR_mktag(1), Var_59, (MR_Integer) 0))));
          ExtraArgs_38 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_59, (MR_Integer) 1))));
        }
      }
    }
    if (succeeded)
    {
      MR_Word EnvVarMap_73;
      MR_Word MaybeArgs1_76;
      MR_Word ArgsNonUndefSpecs_77;
      MR_Word ArgsUndefSpecs_78;

      mercury__io__environment__get_environment_var_map_3_p_0(&EnvVarMap_73);
      if (!((ExtraArgs_38 == (MR_Word) ((MR_Unsigned) 0U))))
      {
        MR_String Var_82;
        MR_String Var_84;

        Var_84 = mercury__string__string_1_f_0((MR_Word) (&top_level__mercury_compile_main_scalar_common_1[0]), ((MR_Box) (ExtraArgs_38)));
        Var_82 = mercury__string__f_43_43_2_f_0((MR_String) "extra arguments with --arg-file: ", Var_84);
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140top_level.mercury_compile_main.process_options_arg_file\'/10", Var_82);
          return;
        }
      }
      make__options_file__read_args_file_6_p_0(ArgFile_37, &MaybeArgs1_76, &ArgsNonUndefSpecs_77, &ArgsUndefSpecs_78);
      OptionSpecs_44 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), ArgsNonUndefSpecs_77, ArgsUndefSpecs_78);
      if ((MaybeArgs1_76 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        OptionArgs_42 = (MR_Word) ((MR_Unsigned) 0U);
        NonOptionArgs_43 = (MR_Word) ((MR_Unsigned) 0U);
      }
      else
      {
        MR_Word Args1_79 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeArgs1_76, (MR_Integer) 0))));

        libs__handle_options__separate_option_args_3_p_0(Args1_79, &OptionArgs_42, &NonOptionArgs_43);
      }
      DetectedGradeFlags_39 = (MR_Word) ((MR_Unsigned) 0U);
      Variables_40 = make__options_file__options_variables_init_1_f_0(EnvVarMap_73);
      MaybeMCFlags_41 = (MR_Word) (MR_mkword(MR_mktag(1), &top_level__mercury_compile_main_scalar_common_2[0]));
    }
    else
      top_level__mercury_compile_main__process_options_plain_9_p_0(ExpandedCmdLineArgs_9, &DetectedGradeFlags_39, &Variables_40, &MaybeMCFlags_41, &OptionArgs_42, &NonOptionArgs_43, &OptionSpecs_44);
    if ((MaybeMCFlags_41 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word DummyGlobals_57;
      MR_Word Var_54;
      MR_Word Var_55;
      MR_Word _Specs_56;

      libs__handle_options__handle_given_options_7_p_0((MR_Word) ((MR_Unsigned) 0U), &Var_54, &Var_55, &_Specs_56, &DummyGlobals_57);
      parse_tree__error_util__write_error_specs_4_p_0(DummyGlobals_57, OptionSpecs_44);
      mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
    }
    else
    {
      MR_Word MCFlags_45 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeMCFlags_41, (MR_Integer) 0))));
      MR_Word AllFlags_46;
      MR_Word Specs_49;
      MR_Word ActualGlobals_50;
      MR_Word Var_65;
      MR_Word Var_47;
      MR_Word Var_48;

      Var_65 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), MCFlags_45, OptionArgs_42);
      AllFlags_46 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), DetectedGradeFlags_39, Var_65);
      libs__handle_options__handle_given_options_7_p_0(AllFlags_46, &Var_47, &Var_48, &Specs_49, &ActualGlobals_50);
      parse_tree__error_util__write_error_specs_4_p_0(ActualGlobals_50, OptionSpecs_44);
      if ((Specs_49 == (MR_Word) ((MR_Unsigned) 0U)))
        top_level__mercury_compile_main__main_after_setup_7_p_0(ActualGlobals_50, DetectedGradeFlags_39, Variables_40, OptionArgs_42, NonOptionArgs_43);
      else
      {
        MR_Word StdErr_53;

        mercury__io__stderr_stream_3_p_0(&StdErr_53);
        libs__handle_options__usage_errors_5_p_0(StdErr_53, ActualGlobals_50, Specs_49);
      }
    }
  }
  hlds__instmap__record_instmap_delta_restrict_stats_2_p_0();
  libs__globals__close_any_specific_compiler_streams_2_p_0();
}

static void MR_CALL 
top_level__mercury_compile_main__main_after_setup_7_p_0(
  MR_Word Globals_8,
  MR_Word DetectedGradeFlags_9,
  MR_Word OptionVariables_10,
  MR_Word OptionArgs_11,
  MR_Word Args_12)
{
  MR_bool succeeded;
  MR_Word Version_14;
  MR_Word Help_15;

  libs__globals__lookup_bool_option_3_p_0(Globals_8, (MR_Integer) 694, &Version_14);
  libs__globals__lookup_bool_option_3_p_0(Globals_8, (MR_Integer) 693, &Help_15);
  succeeded = (Help_15 == (MR_Integer) 1);
  if (succeeded)
  {
    MR_Word StdOut_16;

    mercury__io__stdout_stream_3_p_0(&StdOut_16);
    libs__handle_options__long_usage_3_p_0(StdOut_16);
  }
  else
  {
    succeeded = (Version_14 == (MR_Integer) 1);
    if (succeeded)
    {
      MR_Word StdOut_32;

      mercury__io__stdout_stream_3_p_0(&StdOut_32);
      libs__handle_options__display_compiler_version_3_p_0(StdOut_32);
    }
    else
    {
      MR_Word OpMode_17;
      MR_Word HaveReadModuleMaps0_18;
      MR_Word Specs_21;

      libs__globals__get_op_mode_2_p_0(Globals_8, &OpMode_17);
      HaveReadModuleMaps0_18 = parse_tree__read_modules__init_have_read_module_maps_0_f_0();
      switch (MR_tag((MR_Word) OpMode_17)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(OpMode_17)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word MakeGlobals_33;

                libs__globals__set_option_4_p_0((MR_Integer) 690, (MR_Word) (MR_mkword(MR_mktag(1), &top_level__mercury_compile_main_scalar_common_2[1])), Globals_8, &MakeGlobals_33);
                make__top_level__make_process_compiler_args_7_p_0(MakeGlobals_33, DetectedGradeFlags_9, OptionVariables_10, OptionArgs_11, Args_12);
                Specs_21 = (MR_Word) ((MR_Unsigned) 0U);
              }
              break;
            case (MR_Integer) 1:
              {
                parse_tree__source_file_map__write_source_file_map_4_p_0(Globals_8, Args_12);
                Specs_21 = (MR_Word) ((MR_Unsigned) 0U);
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_String StandaloneIntBasename_34 = ((MR_String) ((MR_hl_field(MR_mktag(1), OpMode_17, (MR_Integer) 0))));
            MR_Word ProgressStream_46;
            MR_Word Target_47;

            mercury__io__stderr_stream_3_p_0(&ProgressStream_46);
            libs__globals__get_target_2_p_0(Globals_8, &Target_47);
            switch (Target_47) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                backend_libs__compile_target_code__make_standalone_interface_6_p_0(Globals_8, ProgressStream_46, ProgressStream_46, StandaloneIntBasename_34);
                break;
              case (MR_Integer) 1:
              case (MR_Integer) 2:
                {
                  MR_String ProgName_48;
                  MR_Word Pieces_49;
                  MR_Word Spec_50;
                  MR_Word Var_54;
                  MR_Word Var_55;
                  MR_Word Var_58;
                  MR_Word Var_60;
                  MR_Word Var_63;
                  MR_Word Var_66;
                  MR_Word Var_69;
                  MR_Word Var_70;
                  MR_String Var_71;

                  mercury__io__progname_base_4_p_0((MR_String) "mercury_compile", &ProgName_48);
                  {
                    Var_54 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(2), Var_54, 0) = ((MR_Box) (ProgName_48));
                  }
                  Var_71 = libs__globals__compilation_target_string_1_f_0(Target_47);
                  {
                    Var_70 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), Var_70, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                    MR_hl_field(MR_mktag(3), Var_70, 1) = ((MR_Box) (Var_71));
                  }
                  {
                    Var_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_69, 0) = ((MR_Box) (Var_70));
                    MR_hl_field(MR_mktag(1), Var_69, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &top_level__mercury_compile_main_scalar_common_1[9])));
                  }
                  {
                    Var_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_66, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &top_level__mercury_compile_main_scalar_common_1[6])));
                    MR_hl_field(MR_mktag(1), Var_66, 1) = ((MR_Box) (Var_69));
                  }
                  {
                    Var_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_63, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &top_level__mercury_compile_main_scalar_common_1[5])));
                    MR_hl_field(MR_mktag(1), Var_63, 1) = ((MR_Box) (Var_66));
                  }
                  {
                    Var_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_60, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &top_level__mercury_compile_main_scalar_common_1[4])));
                    MR_hl_field(MR_mktag(1), Var_60, 1) = ((MR_Box) (Var_63));
                  }
                  {
                    Var_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_58, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                    MR_hl_field(MR_mktag(1), Var_58, 1) = ((MR_Box) (Var_60));
                  }
                  {
                    Var_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_55, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &top_level__mercury_compile_main_scalar_common_1[3])));
                    MR_hl_field(MR_mktag(1), Var_55, 1) = ((MR_Box) (Var_58));
                  }
                  {
                    Pieces_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Pieces_49, 0) = ((MR_Box) (Var_54));
                    MR_hl_field(MR_mktag(1), Pieces_49, 1) = ((MR_Box) (Var_55));
                  }
                  {
                    Spec_50 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(2), Spec_50, 0) = ((MR_Box) ((MR_String) "predicate \140top_level.mercury_compile_main.do_op_mode_standalone_interface\'/4"));
                    MR_hl_field(MR_mktag(2), Spec_50, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    MR_hl_field(MR_mktag(2), Spec_50, 2) = ((MR_Box) ((MR_Unsigned) 0U));
                    MR_hl_field(MR_mktag(2), Spec_50, 3) = ((MR_Box) (Pieces_49));
                  }
                  parse_tree__error_util__write_error_spec_5_p_0(ProgressStream_46, Globals_8, Spec_50);
                }
                break;
            }
            Specs_21 = (MR_Word) ((MR_Unsigned) 0U);
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word OpModeQuery_35 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), OpMode_17, (MR_Integer) 0))) & (MR_Integer) 15);

            top_level__mercury_compile_main__do_op_mode_query_5_p_0(Globals_8, OpModeQuery_35, OptionVariables_10);
            Specs_21 = (MR_Word) ((MR_Unsigned) 0U);
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word OpModeArgs_36 = ((MR_Word) ((MR_hl_field(MR_mktag(3), OpMode_17, (MR_Integer) 0))));
            MR_Word FileNamesFromStdin_37;

            libs__globals__lookup_bool_option_3_p_0(Globals_8, (MR_Integer) 690, &FileNamesFromStdin_37);
            succeeded = (Args_12 == (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
              succeeded = (FileNamesFromStdin_37 == (MR_Integer) 0);
            if (succeeded)
            {
              MR_Word StdErr_38;

              mercury__io__stderr_stream_3_p_0(&StdErr_38);
              libs__handle_options__usage_3_p_0(StdErr_38);
              Specs_21 = (MR_Word) ((MR_Unsigned) 0U);
            }
            else
            {
              MR_Word _HaveReadModuleMaps_76;

              top_level__mercury_compile_main__do_op_mode_args_13_p_0(Globals_8, OpModeArgs_36, FileNamesFromStdin_37, DetectedGradeFlags_9, OptionVariables_10, OptionArgs_11, Args_12, HaveReadModuleMaps0_18, &_HaveReadModuleMaps_76, (MR_Word) ((MR_Unsigned) 0U), &Specs_21);
            }
          }
          break;
      }
      parse_tree__error_util__write_error_specs_4_p_0(Globals_8, Specs_21);
    }
  }
}

static MR_bool MR_CALL 
top_level__mercury_compile_main__do_op_mode_args_13_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_args__721__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
  return succeeded;
}

static void MR_CALL 
top_level__mercury_compile_main__do_op_mode_args_13_p_0(
  MR_Word Globals_14,
  MR_Word OpModeArgs_15,
  MR_Word FileNamesFromStdin_16,
  MR_Word DetectedGradeFlags_17,
  MR_Word OptionVariables_18,
  MR_Word OptionArgs_19,
  MR_Word Args_20,
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_0_47,
  MR_Word * STATE_VARIABLE_HaveReadModuleMaps_48,
  MR_Word STATE_VARIABLE_Specs_0_49,
  MR_Word * STATE_VARIABLE_Specs_50)
{
  MR_bool succeeded;
  MR_Word InvokedByMake_24;
  MR_Word ModulesToLinkCord_26;
  MR_Word ExtraObjFilesCord_27;
  MR_Word ModulesToLink_31;
  MR_Word ExtraObjFiles_32;
  MR_Integer ExitStatus_33;
  MR_Word StdErr_45;
  MR_Word Statistics_46;
  MR_Word Limited_97;
  MR_Word ExtraErrorInfo_98;

  libs__globals__lookup_bool_option_3_p_0(Globals_14, (MR_Integer) 658, &InvokedByMake_24);
  switch (FileNamesFromStdin_16) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (InvokedByMake_24) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word LibgradeCheckSpecs_28;

            libs__check_libgrades__maybe_check_libraries_are_installed_4_p_0(Globals_14, &LibgradeCheckSpecs_28);
            if ((LibgradeCheckSpecs_28 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              MR_Word Var_59;
              MR_Word Var_60;

              Var_59 = mercury__cord__empty_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0));
              Var_60 = mercury__cord__empty_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0));
              top_level__mercury_compile_main__setup_and_process_compiler_cmd_line_args_16_p_0(Globals_14, OpModeArgs_15, DetectedGradeFlags_17, OptionVariables_18, OptionArgs_19, Args_20, Var_59, &ModulesToLinkCord_26, Var_60, &ExtraObjFilesCord_27, STATE_VARIABLE_HaveReadModuleMaps_0_47, STATE_VARIABLE_HaveReadModuleMaps_48, STATE_VARIABLE_Specs_0_49, STATE_VARIABLE_Specs_50);
            }
            else
            {
              ModulesToLinkCord_26 = mercury__cord__empty_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0));
              ExtraObjFilesCord_27 = mercury__cord__empty_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0));
              *STATE_VARIABLE_HaveReadModuleMaps_48 = STATE_VARIABLE_HaveReadModuleMaps_0_47;
              *STATE_VARIABLE_Specs_50 = STATE_VARIABLE_Specs_0_49;
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Var_54;
            MR_Word Var_55;

            Var_54 = mercury__cord__empty_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0));
            Var_55 = mercury__cord__empty_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0));
            top_level__mercury_compile_main__do_process_compiler_cmd_line_args_12_p_0(Globals_14, OpModeArgs_15, OptionArgs_19, Args_20, Var_54, &ModulesToLinkCord_26, Var_55, &ExtraObjFilesCord_27, STATE_VARIABLE_HaveReadModuleMaps_0_47, STATE_VARIABLE_HaveReadModuleMaps_48);
            *STATE_VARIABLE_Specs_50 = STATE_VARIABLE_Specs_0_49;
          }
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word StdIn_25;
        MR_Word Var_64;
        MR_Word Var_69;
        MR_Word Var_70;

        {
          Var_64 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_64, 0) = ((MR_Box) (&top_level__mercury_compile_main_scalar_common_9[3]));
          MR_hl_field(MR_mktag(0), Var_64, 1) = ((MR_Box) (top_level__mercury_compile_main__do_op_mode_args_13_p_0_1));
          MR_hl_field(MR_mktag(0), Var_64, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(0), Var_64, 3) = ((MR_Box) (InvokedByMake_24));
          MR_hl_field(MR_mktag(0), Var_64, 4) = ((MR_Box) ((MR_Integer) 0));
        }
        mercury__require__expect_3_p_0(Var_64, (MR_String) "predicate \140top_level.mercury_compile_main.do_op_mode_args\'/13", (MR_String) "InvokedByMake != no");
        mercury__io__stdin_stream_3_p_0(&StdIn_25);
        Var_69 = mercury__cord__empty_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0));
        Var_70 = mercury__cord__empty_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0));
        top_level__mercury_compile_main__setup_and_process_compiler_stdin_args_16_p_0(Globals_14, StdIn_25, OpModeArgs_15, DetectedGradeFlags_17, OptionVariables_18, OptionArgs_19, Var_69, &ModulesToLinkCord_26, Var_70, &ExtraObjFilesCord_27, STATE_VARIABLE_HaveReadModuleMaps_0_47, STATE_VARIABLE_HaveReadModuleMaps_48, STATE_VARIABLE_Specs_0_49, STATE_VARIABLE_Specs_50);
      }
      break;
  }
  ModulesToLink_31 = mercury__cord__list_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ModulesToLinkCord_26);
  ExtraObjFiles_32 = mercury__cord__list_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ExtraObjFilesCord_27);
  mercury__io__get_exit_status_3_p_0(&ExitStatus_33);
  succeeded = (ExitStatus_33 == (MR_Integer) 0);
  if (succeeded)
  {
    MR_String FirstModule_34;
    MR_Word Var_75;
    MR_Word Var_76;

    succeeded = ((MR_tag((MR_Word) OpModeArgs_15)) == (MR_Integer) 2);
    if (succeeded)
    {
      Var_75 = ((MR_Word) ((MR_hl_field(MR_mktag(2), OpModeArgs_15, (MR_Integer) 0))));
      succeeded = ((MR_tag((MR_Word) Var_75)) == (MR_Integer) 1);
      if (succeeded)
      {
        Var_76 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), Var_75, (MR_Integer) 0))) & (MR_Integer) 3);
        succeeded = (Var_76 == (MR_Integer) 2);
        if (succeeded)
        {
          succeeded = (ModulesToLink_31 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
            FirstModule_34 = ((MR_String) ((MR_hl_field(MR_mktag(1), ModulesToLink_31, (MR_Integer) 0))));
        }
      }
    }
    if (succeeded)
    {
      MR_Word MainModuleName_36;
      MR_Word Target_37;
      MR_Word Succeeded_38;

      parse_tree__file_names__file_name_to_module_name_2_p_0(FirstModule_34, &MainModuleName_36);
      libs__globals__get_target_2_p_0(Globals_14, &Target_37);
      switch (Target_37) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
        case (MR_Integer) 1:
          {
            MR_Word ProgressStream_39;
            MR_Word ErrorStream_40;

            libs__globals__get_progress_output_stream_5_p_0(Globals_14, MainModuleName_36, &ProgressStream_39);
            libs__globals__get_error_output_stream_5_p_0(Globals_14, MainModuleName_36, &ErrorStream_40);
            switch (InvokedByMake_24) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word MayBuild_41;

                  make__build__setup_for_build_with_module_options_9_p_0((MR_Integer) 0, MainModuleName_36, DetectedGradeFlags_17, OptionVariables_18, OptionArgs_19, (MR_Word) ((MR_Unsigned) 0U), &MayBuild_41);
                  if (((MR_tag((MR_Word) MayBuild_41)) == (MR_Integer) 1))
                  {
                    MR_Word BuildGlobals_44 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MayBuild_41, (MR_Integer) 1))));

                    backend_libs__compile_target_code__link_module_list_8_p_0(ProgressStream_39, ErrorStream_40, ModulesToLink_31, ExtraObjFiles_32, BuildGlobals_44, &Succeeded_38);
                  }
                  else
                  {
                    MR_Word SetupSpecs_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MayBuild_41, (MR_Integer) 0))));

                    parse_tree__error_util__write_error_specs_5_p_0(ErrorStream_40, Globals_14, SetupSpecs_42);
                    Succeeded_38 = (MR_Integer) 0;
                  }
                }
                break;
              case (MR_Integer) 1:
                backend_libs__compile_target_code__link_module_list_8_p_0(ProgressStream_39, ErrorStream_40, ModulesToLink_31, ExtraObjFiles_32, Globals_14, &Succeeded_38);
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          parse_tree__module_cmds__create_java_shell_script_5_p_0(Globals_14, MainModuleName_36, &Succeeded_38);
          break;
      }
      parse_tree__module_cmds__maybe_set_exit_status_3_p_0(Succeeded_38);
    }
  }
  mercury__io__stderr_stream_3_p_0(&StdErr_45);
  libs__globals__io_get_some_errors_were_context_limited_3_p_0(&Limited_97);
  libs__globals__io_set_some_errors_were_context_limited_3_p_0((MR_Integer) 0);
  libs__globals__io_get_extra_error_info_3_p_0(&ExtraErrorInfo_98);
  libs__globals__io_set_extra_error_info_3_p_0((MR_Integer) 0);
  switch (Limited_97) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
      }
      break;
    case (MR_Integer) 1:
      {
        MR_String Var_106;
        MR_String Var_110;

        Var_106 = mercury__string__f_43_43_2_f_0((MR_String) "Some error messages were suppressed ", (MR_String) "by \140--limit-error-contexts\' options.\n");
        mercury__io__write_string_4_p_0(StdErr_45, Var_106);
        Var_110 = mercury__string__f_43_43_2_f_0((MR_String) "You can see the suppressed messages ", (MR_String) "if you recompile without these options.\n");
        mercury__io__write_string_4_p_0(StdErr_45, Var_110);
      }
      break;
  }
  switch (ExtraErrorInfo_98) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word VerboseErrors_99;

        libs__globals__lookup_bool_option_3_p_0(Globals_14, (MR_Integer) 73, &VerboseErrors_99);
        switch (VerboseErrors_99) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            mercury__io__write_string_4_p_0(StdErr_45, (MR_String) "For more information, recompile with \140-E\'.\n");
            break;
          case (MR_Integer) 1:
            {
            }
            break;
        }
      }
      break;
  }
  libs__globals__lookup_bool_option_3_p_0(Globals_14, (MR_Integer) 81, &Statistics_46);
  switch (Statistics_46) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
      }
      break;
    case (MR_Integer) 1:
      mercury__benchmarking__report_full_memory_stats_3_p_0(StdErr_45);
      break;
  }
}

static void MR_CALL 
top_level__mercury_compile_main__do_process_compiler_cmd_line_args_12_p_0(
  MR_Word Globals_1,
  MR_Word OpModeArgs_2,
  MR_Word OptionArgs_3,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_Modules_0_5,
  MR_Word * STATE_VARIABLE_Modules_6,
  MR_Word STATE_VARIABLE_ExtraObjFiles_0_7,
  MR_Word * STATE_VARIABLE_ExtraObjFiles_8,
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_0_9,
  MR_Word * STATE_VARIABLE_HaveReadModuleMaps_10)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_HaveReadModuleMaps_10 = STATE_VARIABLE_HaveReadModuleMaps_0_9;
      *STATE_VARIABLE_ExtraObjFiles_8 = STATE_VARIABLE_ExtraObjFiles_0_7;
      *STATE_VARIABLE_Modules_6 = STATE_VARIABLE_Modules_0_5;
    }
    else
    {
      MR_String Arg_31 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 0))));
      MR_Word Args_32 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 1))));
      MR_Word FileOrModule_37;
      MR_Word ArgModules_38;
      MR_Word ArgExtraObjFiles_39;
      MR_Word STATE_VARIABLE_HaveReadModuleMaps_50_50;
      MR_Word STATE_VARIABLE_Modules_53_53;
      MR_Word Var_54;
      MR_Word STATE_VARIABLE_ExtraObjFiles_55_55;
      MR_Word Var_56;
      MR_String FileName_62;
      MR_Word next_value_of_HeadVar__4_4;
      MR_Word next_value_of_STATE_VARIABLE_Modules_0_5;
      MR_Word next_value_of_STATE_VARIABLE_ExtraObjFiles_0_7;
      MR_Word next_value_of_STATE_VARIABLE_HaveReadModuleMaps_0_9;

      succeeded = mercury__string__remove_suffix_3_p_0(Arg_31, (MR_String) ".m", &FileName_62);
      if (succeeded)
        {
          FileOrModule_37 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), FileOrModule_37, 0) = ((MR_Box) (FileName_62));
        }
      else
      {
        MR_Word ModuleName_63;

        parse_tree__file_names__file_name_to_module_name_2_p_0(Arg_31, &ModuleName_63);
        {
          FileOrModule_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), FileOrModule_37, 0) = ((MR_Box) (ModuleName_63));
        }
      }
      top_level__mercury_compile_main__do_process_compiler_arg_10_p_0(Globals_1, OpModeArgs_2, OptionArgs_3, FileOrModule_37, &ArgModules_38, &ArgExtraObjFiles_39, STATE_VARIABLE_HaveReadModuleMaps_0_9, &STATE_VARIABLE_HaveReadModuleMaps_50_50);
      if (!((Args_32 == (MR_Word) ((MR_Unsigned) 0U))))
        mercury__gc__garbage_collect_2_p_0();
      Var_54 = mercury__cord__from_list_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ArgModules_38);
      STATE_VARIABLE_Modules_53_53 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), STATE_VARIABLE_Modules_0_5, Var_54);
      Var_56 = mercury__cord__from_list_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ArgExtraObjFiles_39);
      STATE_VARIABLE_ExtraObjFiles_55_55 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), STATE_VARIABLE_ExtraObjFiles_0_7, Var_56);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__4_4 = Args_32;
      next_value_of_STATE_VARIABLE_Modules_0_5 = STATE_VARIABLE_Modules_53_53;
      next_value_of_STATE_VARIABLE_ExtraObjFiles_0_7 = STATE_VARIABLE_ExtraObjFiles_55_55;
      next_value_of_STATE_VARIABLE_HaveReadModuleMaps_0_9 = STATE_VARIABLE_HaveReadModuleMaps_50_50;
      HeadVar__4_4 = next_value_of_HeadVar__4_4;
      STATE_VARIABLE_Modules_0_5 = next_value_of_STATE_VARIABLE_Modules_0_5;
      STATE_VARIABLE_ExtraObjFiles_0_7 = next_value_of_STATE_VARIABLE_ExtraObjFiles_0_7;
      STATE_VARIABLE_HaveReadModuleMaps_0_9 = next_value_of_STATE_VARIABLE_HaveReadModuleMaps_0_9;
      continue;
    }
    break;
  }
}

static void MR_CALL 
top_level__mercury_compile_main__setup_and_process_compiler_cmd_line_args_16_p_0(
  MR_Word Globals_1,
  MR_Word OpModeArgs_2,
  MR_Word DetectedGradeFlags_3,
  MR_Word OptionVariables_4,
  MR_Word OptionArgs_5,
  MR_Word HeadVar__6_6,
  MR_Word STATE_VARIABLE_Modules_0_7,
  MR_Word * STATE_VARIABLE_Modules_8,
  MR_Word STATE_VARIABLE_ExtraObjFiles_0_9,
  MR_Word * STATE_VARIABLE_ExtraObjFiles_10,
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_0_11,
  MR_Word * STATE_VARIABLE_HaveReadModuleMaps_12,
  MR_Word STATE_VARIABLE_Specs_0_13,
  MR_Word * STATE_VARIABLE_Specs_14)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__6_6 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Specs_14 = STATE_VARIABLE_Specs_0_13;
      *STATE_VARIABLE_HaveReadModuleMaps_12 = STATE_VARIABLE_HaveReadModuleMaps_0_11;
      *STATE_VARIABLE_ExtraObjFiles_10 = STATE_VARIABLE_ExtraObjFiles_0_9;
      *STATE_VARIABLE_Modules_8 = STATE_VARIABLE_Modules_0_7;
    }
    else
    {
      MR_String Arg_42 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__6_6, (MR_Integer) 0))));
      MR_Word Args_43 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__6_6, (MR_Integer) 1))));
      MR_Word ArgModules_49;
      MR_Word ArgExtraObjFiles_50;
      MR_Word STATE_VARIABLE_HaveReadModuleMaps_63_63;
      MR_Word STATE_VARIABLE_Specs_64_64;
      MR_Word STATE_VARIABLE_Modules_67_67;
      MR_Word Var_68;
      MR_Word STATE_VARIABLE_ExtraObjFiles_69_69;
      MR_Word Var_70;
      MR_Word FileOrModule_77;
      MR_Word ModuleName_78;
      MR_Word MayBuild_80;
      MR_String FileName_93;
      MR_Word next_value_of_HeadVar__6_6;
      MR_Word next_value_of_STATE_VARIABLE_Modules_0_7;
      MR_Word next_value_of_STATE_VARIABLE_ExtraObjFiles_0_9;
      MR_Word next_value_of_STATE_VARIABLE_HaveReadModuleMaps_0_11;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_13;

      succeeded = mercury__string__remove_suffix_3_p_0(Arg_42, (MR_String) ".m", &FileName_93);
      if (succeeded)
      {
        {
          FileOrModule_77 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), FileOrModule_77, 0) = ((MR_Box) (FileName_93));
        }
        parse_tree__file_names__file_name_to_module_name_2_p_0(FileName_93, &ModuleName_78);
      }
      else
      {
        parse_tree__file_names__file_name_to_module_name_2_p_0(Arg_42, &ModuleName_78);
        {
          FileOrModule_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), FileOrModule_77, 0) = ((MR_Box) (ModuleName_78));
        }
      }
      make__build__setup_for_build_with_module_options_9_p_0((MR_Integer) 0, ModuleName_78, DetectedGradeFlags_3, OptionVariables_4, OptionArgs_5, (MR_Word) ((MR_Unsigned) 0U), &MayBuild_80);
      if (((MR_tag((MR_Word) MayBuild_80)) == (MR_Integer) 1))
      {
        MR_Word BuildGlobals_84 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MayBuild_80, (MR_Integer) 1))));
        MR_Word LibgradeCheckSpecs_85;

        libs__check_libgrades__maybe_check_libraries_are_installed_4_p_0(Globals_1, &LibgradeCheckSpecs_85);
        if ((LibgradeCheckSpecs_85 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          top_level__mercury_compile_main__do_process_compiler_arg_10_p_0(BuildGlobals_84, OpModeArgs_2, OptionArgs_5, FileOrModule_77, &ArgModules_49, &ArgExtraObjFiles_50, STATE_VARIABLE_HaveReadModuleMaps_0_11, &STATE_VARIABLE_HaveReadModuleMaps_63_63);
          STATE_VARIABLE_Specs_64_64 = STATE_VARIABLE_Specs_0_13;
        }
        else
        {
          STATE_VARIABLE_Specs_64_64 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), LibgradeCheckSpecs_85, STATE_VARIABLE_Specs_0_13);
          ArgModules_49 = (MR_Word) ((MR_Unsigned) 0U);
          ArgExtraObjFiles_50 = (MR_Word) ((MR_Unsigned) 0U);
          STATE_VARIABLE_HaveReadModuleMaps_63_63 = STATE_VARIABLE_HaveReadModuleMaps_0_11;
        }
      }
      else
      {
        MR_Word SetupSpecs_81 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MayBuild_80, (MR_Integer) 0))));
        MR_Word ErrorStream_82;

        libs__globals__get_error_output_stream_5_p_0(Globals_1, ModuleName_78, &ErrorStream_82);
        parse_tree__error_util__write_error_specs_5_p_0(ErrorStream_82, Globals_1, SetupSpecs_81);
        ArgModules_49 = (MR_Word) ((MR_Unsigned) 0U);
        ArgExtraObjFiles_50 = (MR_Word) ((MR_Unsigned) 0U);
        STATE_VARIABLE_HaveReadModuleMaps_63_63 = STATE_VARIABLE_HaveReadModuleMaps_0_11;
        STATE_VARIABLE_Specs_64_64 = STATE_VARIABLE_Specs_0_13;
      }
      if (!((Args_43 == (MR_Word) ((MR_Unsigned) 0U))))
        mercury__gc__garbage_collect_2_p_0();
      Var_68 = mercury__cord__from_list_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ArgModules_49);
      STATE_VARIABLE_Modules_67_67 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), STATE_VARIABLE_Modules_0_7, Var_68);
      Var_70 = mercury__cord__from_list_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ArgExtraObjFiles_50);
      STATE_VARIABLE_ExtraObjFiles_69_69 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), STATE_VARIABLE_ExtraObjFiles_0_9, Var_70);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__6_6 = Args_43;
      next_value_of_STATE_VARIABLE_Modules_0_7 = STATE_VARIABLE_Modules_67_67;
      next_value_of_STATE_VARIABLE_ExtraObjFiles_0_9 = STATE_VARIABLE_ExtraObjFiles_69_69;
      next_value_of_STATE_VARIABLE_HaveReadModuleMaps_0_11 = STATE_VARIABLE_HaveReadModuleMaps_63_63;
      next_value_of_STATE_VARIABLE_Specs_0_13 = STATE_VARIABLE_Specs_64_64;
      HeadVar__6_6 = next_value_of_HeadVar__6_6;
      STATE_VARIABLE_Modules_0_7 = next_value_of_STATE_VARIABLE_Modules_0_7;
      STATE_VARIABLE_ExtraObjFiles_0_9 = next_value_of_STATE_VARIABLE_ExtraObjFiles_0_9;
      STATE_VARIABLE_HaveReadModuleMaps_0_11 = next_value_of_STATE_VARIABLE_HaveReadModuleMaps_0_11;
      STATE_VARIABLE_Specs_0_13 = next_value_of_STATE_VARIABLE_Specs_0_13;
      continue;
    }
    break;
  }
}

static void MR_CALL 
top_level__mercury_compile_main__setup_and_process_compiler_stdin_args_16_p_0(
  MR_Word Globals_17,
  MR_Word StdIn_18,
  MR_Word OpModeArgs_19,
  MR_Word DetectedGradeFlags_20,
  MR_Word OptionVariables_21,
  MR_Word OptionArgs_22,
  MR_Word STATE_VARIABLE_Modules_0_37,
  MR_Word * STATE_VARIABLE_Modules_38,
  MR_Word STATE_VARIABLE_ExtraObjFiles_0_39,
  MR_Word * STATE_VARIABLE_ExtraObjFiles_40,
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_0_41,
  MR_Word * STATE_VARIABLE_HaveReadModuleMaps_42,
  MR_Word STATE_VARIABLE_Specs_0_43,
  MR_Word * STATE_VARIABLE_Specs_44)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word LineResult_28;

    // setup for model_det tailcalls optimized into a loop
    ;
    succeeded = mercury__cord__is_empty_1_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), STATE_VARIABLE_Modules_0_37);
    if (!(succeeded))
      mercury__gc__garbage_collect_2_p_0();
    mercury__io__read_line_as_string_4_p_0(StdIn_18, &LineResult_28);
    switch (MR_tag((MR_Word) LineResult_28)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *STATE_VARIABLE_Modules_38 = STATE_VARIABLE_Modules_0_37;
          *STATE_VARIABLE_ExtraObjFiles_40 = STATE_VARIABLE_ExtraObjFiles_0_39;
          *STATE_VARIABLE_HaveReadModuleMaps_42 = STATE_VARIABLE_HaveReadModuleMaps_0_41;
          *STATE_VARIABLE_Specs_44 = STATE_VARIABLE_Specs_0_43;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_String Line_29 = ((MR_String) ((MR_hl_field(MR_mktag(1), LineResult_28, (MR_Integer) 0))));
          MR_String Arg_30;
          MR_Word ArgModules_31;
          MR_Word ArgExtraObjFiles_32;
          MR_Word STATE_VARIABLE_HaveReadModuleMaps_63_63;
          MR_Word STATE_VARIABLE_Specs_64_64;
          MR_Word STATE_VARIABLE_Modules_66_66;
          MR_Word Var_67;
          MR_Word STATE_VARIABLE_ExtraObjFiles_68_68;
          MR_Word Var_69;
          MR_Word FileOrModule_77;
          MR_Word ModuleName_78;
          MR_Word MayBuild_80;
          MR_String FileName_93;
          MR_Word next_value_of_STATE_VARIABLE_Modules_0_37;
          MR_Word next_value_of_STATE_VARIABLE_ExtraObjFiles_0_39;
          MR_Word next_value_of_STATE_VARIABLE_HaveReadModuleMaps_0_41;
          MR_Word next_value_of_STATE_VARIABLE_Specs_0_43;

          Arg_30 = mercury__string__rstrip_1_f_0(Line_29);
          succeeded = mercury__string__remove_suffix_3_p_0(Arg_30, (MR_String) ".m", &FileName_93);
          if (succeeded)
          {
            {
              FileOrModule_77 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), FileOrModule_77, 0) = ((MR_Box) (FileName_93));
            }
            parse_tree__file_names__file_name_to_module_name_2_p_0(FileName_93, &ModuleName_78);
          }
          else
          {
            parse_tree__file_names__file_name_to_module_name_2_p_0(Arg_30, &ModuleName_78);
            {
              FileOrModule_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), FileOrModule_77, 0) = ((MR_Box) (ModuleName_78));
            }
          }
          make__build__setup_for_build_with_module_options_9_p_0((MR_Integer) 0, ModuleName_78, DetectedGradeFlags_20, OptionVariables_21, OptionArgs_22, (MR_Word) ((MR_Unsigned) 0U), &MayBuild_80);
          if (((MR_tag((MR_Word) MayBuild_80)) == (MR_Integer) 1))
          {
            MR_Word BuildGlobals_84 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MayBuild_80, (MR_Integer) 1))));
            MR_Word LibgradeCheckSpecs_85;

            libs__check_libgrades__maybe_check_libraries_are_installed_4_p_0(Globals_17, &LibgradeCheckSpecs_85);
            if ((LibgradeCheckSpecs_85 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              top_level__mercury_compile_main__do_process_compiler_arg_10_p_0(BuildGlobals_84, OpModeArgs_19, OptionArgs_22, FileOrModule_77, &ArgModules_31, &ArgExtraObjFiles_32, STATE_VARIABLE_HaveReadModuleMaps_0_41, &STATE_VARIABLE_HaveReadModuleMaps_63_63);
              STATE_VARIABLE_Specs_64_64 = STATE_VARIABLE_Specs_0_43;
            }
            else
            {
              STATE_VARIABLE_Specs_64_64 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), LibgradeCheckSpecs_85, STATE_VARIABLE_Specs_0_43);
              ArgModules_31 = (MR_Word) ((MR_Unsigned) 0U);
              ArgExtraObjFiles_32 = (MR_Word) ((MR_Unsigned) 0U);
              STATE_VARIABLE_HaveReadModuleMaps_63_63 = STATE_VARIABLE_HaveReadModuleMaps_0_41;
            }
          }
          else
          {
            MR_Word SetupSpecs_81 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MayBuild_80, (MR_Integer) 0))));
            MR_Word ErrorStream_82;

            libs__globals__get_error_output_stream_5_p_0(Globals_17, ModuleName_78, &ErrorStream_82);
            parse_tree__error_util__write_error_specs_5_p_0(ErrorStream_82, Globals_17, SetupSpecs_81);
            ArgModules_31 = (MR_Word) ((MR_Unsigned) 0U);
            ArgExtraObjFiles_32 = (MR_Word) ((MR_Unsigned) 0U);
            STATE_VARIABLE_HaveReadModuleMaps_63_63 = STATE_VARIABLE_HaveReadModuleMaps_0_41;
            STATE_VARIABLE_Specs_64_64 = STATE_VARIABLE_Specs_0_43;
          }
          Var_67 = mercury__cord__from_list_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ArgModules_31);
          STATE_VARIABLE_Modules_66_66 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), STATE_VARIABLE_Modules_0_37, Var_67);
          Var_69 = mercury__cord__from_list_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ArgExtraObjFiles_32);
          STATE_VARIABLE_ExtraObjFiles_68_68 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), STATE_VARIABLE_ExtraObjFiles_0_39, Var_69);
          // direct tailcall eliminated
          ;
          next_value_of_STATE_VARIABLE_Modules_0_37 = STATE_VARIABLE_Modules_66_66;
          next_value_of_STATE_VARIABLE_ExtraObjFiles_0_39 = STATE_VARIABLE_ExtraObjFiles_68_68;
          next_value_of_STATE_VARIABLE_HaveReadModuleMaps_0_41 = STATE_VARIABLE_HaveReadModuleMaps_63_63;
          next_value_of_STATE_VARIABLE_Specs_0_43 = STATE_VARIABLE_Specs_64_64;
          STATE_VARIABLE_Modules_0_37 = next_value_of_STATE_VARIABLE_Modules_0_37;
          STATE_VARIABLE_ExtraObjFiles_0_39 = next_value_of_STATE_VARIABLE_ExtraObjFiles_0_39;
          STATE_VARIABLE_HaveReadModuleMaps_0_41 = next_value_of_STATE_VARIABLE_HaveReadModuleMaps_0_41;
          STATE_VARIABLE_Specs_0_43 = next_value_of_STATE_VARIABLE_Specs_0_43;
          continue;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Error_33 = ((MR_Word) ((MR_hl_field(MR_mktag(2), LineResult_28, (MR_Integer) 0))));
          MR_String Msg_34;
          MR_Word Pieces_35;
          MR_Word Spec_36;
          MR_Word Var_51;
          MR_Word Var_52;

          mercury__io__error_message_2_p_0(Error_33, &Msg_34);
          {
            Var_52 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_52, 0) = ((MR_Box) ((MR_Unsigned) 5U));
            MR_hl_field(MR_mktag(3), Var_52, 1) = ((MR_Box) (Msg_34));
          }
          {
            Var_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_51, 0) = ((MR_Box) (Var_52));
            MR_hl_field(MR_mktag(1), Var_51, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &top_level__mercury_compile_main_scalar_common_1[9])));
          }
          {
            Pieces_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Pieces_35, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &top_level__mercury_compile_main_scalar_common_1[10])));
            MR_hl_field(MR_mktag(1), Pieces_35, 1) = ((MR_Box) (Var_51));
          }
          {
            Spec_36 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), Spec_36, 0) = ((MR_Box) ((MR_String) "predicate \140top_level.mercury_compile_main.setup_and_process_compiler_stdin_args\'/16"));
            MR_hl_field(MR_mktag(2), Spec_36, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(2), Spec_36, 2) = ((MR_Box) ((MR_Unsigned) 12U));
            MR_hl_field(MR_mktag(2), Spec_36, 3) = ((MR_Box) (Pieces_35));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *STATE_VARIABLE_Specs_44 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_36));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_43));
          }
          *STATE_VARIABLE_Modules_38 = STATE_VARIABLE_Modules_0_37;
          *STATE_VARIABLE_ExtraObjFiles_40 = STATE_VARIABLE_ExtraObjFiles_0_39;
          *STATE_VARIABLE_HaveReadModuleMaps_42 = STATE_VARIABLE_HaveReadModuleMaps_0_41;
        }
        break;
    }
    break;
  }
}

static void MR_CALL 
top_level__mercury_compile_main__do_process_compiler_arg_10_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_TimestampFiles_10;

  top_level__mercury_compile_main__find_timestamp_files_2_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv1_TimestampFiles_10);
  *wrapper_arg_2 = ((MR_Box) (conv1_TimestampFiles_10));
}

static void MR_CALL 
top_level__mercury_compile_main__do_process_compiler_arg_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_TargetFiles_10;

  top_level__mercury_compile_main__usual_find_target_files_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv0_TargetFiles_10);
  *wrapper_arg_2 = ((MR_Box) (conv0_TargetFiles_10));
}

static void MR_CALL 
top_level__mercury_compile_main__do_process_compiler_arg_10_p_0(
  MR_Word Globals0_11,
  MR_Word OpModeArgs_12,
  MR_Word OptionArgs_13,
  MR_Word FileOrModule_14,
  MR_Word * ModulesToLink_15,
  MR_Word * ExtraObjFiles_16,
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_0_34,
  MR_Word * STATE_VARIABLE_HaveReadModuleMaps_35)
{
  MR_bool succeeded;

  switch (MR_tag((MR_Word) OpModeArgs_12)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(OpModeArgs_12)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            if (((MR_tag((MR_Word) FileOrModule_14)) == (MR_Integer) 0))
            {
              MR_String FileName_19 = ((MR_String) ((MR_hl_field(MR_mktag(0), FileOrModule_14, (MR_Integer) 0))));

              parse_tree__generate_dep_d_files__generate_dep_file_for_file_4_p_0(Globals0_11, FileName_19);
            }
            else
            {
              MR_Word ModuleName_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), FileOrModule_14, (MR_Integer) 0))));

              parse_tree__generate_dep_d_files__generate_dep_file_for_module_4_p_0(Globals0_11, ModuleName_20);
            }
            *ModulesToLink_15 = (MR_Word) ((MR_Unsigned) 0U);
            *ExtraObjFiles_16 = (MR_Word) ((MR_Unsigned) 0U);
            *STATE_VARIABLE_HaveReadModuleMaps_35 = STATE_VARIABLE_HaveReadModuleMaps_0_34;
          }
          break;
        case (MR_Integer) 1:
          {
            if (((MR_tag((MR_Word) FileOrModule_14)) == (MR_Integer) 0))
            {
              MR_String FileName_62 = ((MR_String) ((MR_hl_field(MR_mktag(0), FileOrModule_14, (MR_Integer) 0))));

              parse_tree__generate_dep_d_files__generate_d_file_for_file_4_p_0(Globals0_11, FileName_62);
            }
            else
            {
              MR_Word ModuleName_63 = ((MR_Word) ((MR_hl_field(MR_mktag(1), FileOrModule_14, (MR_Integer) 0))));

              parse_tree__generate_dep_d_files__generate_d_file_for_module_4_p_0(Globals0_11, ModuleName_63);
            }
            *ModulesToLink_15 = (MR_Word) ((MR_Unsigned) 0U);
            *ExtraObjFiles_16 = (MR_Word) ((MR_Unsigned) 0U);
            *STATE_VARIABLE_HaveReadModuleMaps_35 = STATE_VARIABLE_HaveReadModuleMaps_0_34;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Globals_21;
            MR_Word ParseTreeSrc_24;
            MR_Word Specs_25;
            MR_Word Errors_26;
            MR_Word ModuleName_68;
            MR_String Var_22;
            MR_Word Var_23;

            top_level__mercury_compile_main__read_module_or_file_14_p_0(Globals0_11, &Globals_21, FileOrModule_14, &ModuleName_68, &Var_22, (MR_Integer) 1, &Var_23, &ParseTreeSrc_24, &Specs_25, &Errors_26, STATE_VARIABLE_HaveReadModuleMaps_0_34, STATE_VARIABLE_HaveReadModuleMaps_35);
            parse_tree__error_util__write_error_specs_4_p_0(Globals_21, Specs_25);
            succeeded = mercury__set__is_non_empty_1_p_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_error_0), Errors_26);
            if (succeeded)
            {
              {
                MR_Word HaltSyntax_92;

                libs__globals__lookup_bool_option_3_p_0(Globals_21, (MR_Integer) 6, &HaltSyntax_92);
                succeeded = (HaltSyntax_92 == (MR_Integer) 1);
              }
              if (!(succeeded))
              {
                MR_Word FatalErrors_93;
                MR_Word Var_94;

                Var_94 = parse_tree__parse_error__fatal_read_module_errors_0_f_0();
                mercury__set__intersect_3_p_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_error_0), Errors_26, Var_94, &FatalErrors_93);
                succeeded = mercury__set__is_non_empty_1_p_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_error_0), FatalErrors_93);
              }
            }
            if (!(succeeded))
            {
              MR_String OutputFileName_27;
              MR_Word ProgressStream_28;
              MR_Word ErrorStream_29;
              MR_Word _Succeeded_30;

              parse_tree__file_names__module_name_to_file_name_8_p_0(Globals_21, (MR_String) "predicate \140top_level.mercury_compile_main.do_process_compiler_arg\'/10", (MR_Integer) 0, (MR_Word) (MR_mkword(MR_mktag(1), &top_level__mercury_compile_main_scalar_common_2[2])), ModuleName_68, &OutputFileName_27);
              libs__globals__get_progress_output_stream_5_p_0(Globals_21, ModuleName_68, &ProgressStream_28);
              libs__globals__get_error_output_stream_5_p_0(Globals_21, ModuleName_68, &ErrorStream_29);
              parse_tree__parse_tree_out__output_parse_tree_src_8_p_0(ProgressStream_28, ErrorStream_29, Globals_21, OutputFileName_27, ParseTreeSrc_24, &_Succeeded_30);
            }
            *ModulesToLink_15 = (MR_Word) ((MR_Unsigned) 0U);
            *ExtraObjFiles_16 = (MR_Word) ((MR_Unsigned) 0U);
          }
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word InterfaceFile_31 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), OpModeArgs_12, (MR_Integer) 0))) & (MR_Integer) 3);

        top_level__mercury_compile_main__do_process_compiler_arg_make_interface_7_p_0(Globals0_11, InterfaceFile_31, FileOrModule_14, STATE_VARIABLE_HaveReadModuleMaps_0_34, STATE_VARIABLE_HaveReadModuleMaps_35);
        *ModulesToLink_15 = (MR_Word) ((MR_Unsigned) 0U);
        *ExtraObjFiles_16 = (MR_Word) ((MR_Unsigned) 0U);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word OpModeAugment_32 = ((MR_Word) ((MR_hl_field(MR_mktag(2), OpModeArgs_12, (MR_Integer) 0))));
        MR_Word ModulesToRecompile_33;
        MR_Word STATE_VARIABLE_HaveReadModuleMaps_38_38;
        MR_Word Globals_69;
        MR_Word Smart0_70;
        MR_Word DisableSmart_71;
        MR_Word Var_40;

        libs__globals__lookup_bool_option_3_p_0(Globals0_11, (MR_Integer) 149, &Smart0_70);
        libs__globals__io_get_disable_smart_recompilation_3_p_0(&DisableSmart_71);
        switch (DisableSmart_71) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              libs__globals__set_option_4_p_0((MR_Integer) 149, (MR_Word) (MR_mkword(MR_mktag(1), &top_level__mercury_compile_main_scalar_common_2[1])), Globals0_11, &Globals_69);
              ModulesToRecompile_33 = (MR_Word) ((MR_Unsigned) 0U);
              STATE_VARIABLE_HaveReadModuleMaps_38_38 = STATE_VARIABLE_HaveReadModuleMaps_0_34;
            }
            break;
          case (MR_Integer) 0:
            {
              Globals_69 = Globals0_11;
              switch (Smart0_70) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    ModulesToRecompile_33 = (MR_Word) ((MR_Unsigned) 0U);
                    STATE_VARIABLE_HaveReadModuleMaps_38_38 = STATE_VARIABLE_HaveReadModuleMaps_0_34;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word ModuleName_73;
                    MR_Word FindTargetFiles_75;
                    MR_Word FindTimestampFiles_76;
                    MR_Word CompilationTarget_82;
                    MR_Word TargetOtherExt_83;
                    MR_Word CompilationTarget_87;
                    MR_Word TimestampOtherExt_88;

                    if (((MR_tag((MR_Word) FileOrModule_14)) == (MR_Integer) 0))
                    {
                      MR_String FileName_74 = ((MR_String) ((MR_hl_field(MR_mktag(0), FileOrModule_14, (MR_Integer) 0))));

                      parse_tree__file_names__file_name_to_module_name_2_p_0(FileName_74, &ModuleName_73);
                    }
                    else
                      ModuleName_73 = ((MR_Word) ((MR_hl_field(MR_mktag(1), FileOrModule_14, (MR_Integer) 0))));
                    libs__globals__get_target_2_p_0(Globals_69, &CompilationTarget_82);
                    switch (CompilationTarget_82) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        TargetOtherExt_83 = (MR_Word) (((MR_Box) ((MR_String) ".c")));
                        break;
                      case (MR_Integer) 1:
                        TargetOtherExt_83 = (MR_Word) (((MR_Box) ((MR_String) ".cs")));
                        break;
                      case (MR_Integer) 2:
                        TargetOtherExt_83 = (MR_Word) (((MR_Box) ((MR_String) ".java")));
                        break;
                    }
                    {
                      FindTargetFiles_75 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), FindTargetFiles_75, 0) = ((MR_Box) (&top_level__mercury_compile_main_scalar_common_10[0]));
                      MR_hl_field(MR_mktag(0), FindTargetFiles_75, 1) = ((MR_Box) (top_level__mercury_compile_main__do_process_compiler_arg_10_p_0_1));
                      MR_hl_field(MR_mktag(0), FindTargetFiles_75, 2) = ((MR_Box) ((MR_Integer) 2));
                      MR_hl_field(MR_mktag(0), FindTargetFiles_75, 3) = ((MR_Box) (Globals0_11));
                      MR_hl_field(MR_mktag(0), FindTargetFiles_75, 4) = ((MR_Box) (TargetOtherExt_83));
                    }
                    libs__globals__get_target_2_p_0(Globals_69, &CompilationTarget_87);
                    switch (CompilationTarget_87) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        TimestampOtherExt_88 = (MR_Word) (((MR_Box) ((MR_String) ".c_date")));
                        break;
                      case (MR_Integer) 1:
                        TimestampOtherExt_88 = (MR_Word) (((MR_Box) ((MR_String) ".cs_date")));
                        break;
                      case (MR_Integer) 2:
                        TimestampOtherExt_88 = (MR_Word) (((MR_Box) ((MR_String) ".java_date")));
                        break;
                    }
                    {
                      FindTimestampFiles_76 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), FindTimestampFiles_76, 0) = ((MR_Box) (&top_level__mercury_compile_main_scalar_common_10[0]));
                      MR_hl_field(MR_mktag(0), FindTimestampFiles_76, 1) = ((MR_Box) (top_level__mercury_compile_main__do_process_compiler_arg_10_p_0_2));
                      MR_hl_field(MR_mktag(0), FindTimestampFiles_76, 2) = ((MR_Box) ((MR_Integer) 2));
                      MR_hl_field(MR_mktag(0), FindTimestampFiles_76, 3) = ((MR_Box) (Globals0_11));
                      MR_hl_field(MR_mktag(0), FindTimestampFiles_76, 4) = ((MR_Box) (TimestampOtherExt_88));
                    }
                    recompilation__check__should_recompile_9_p_0(Globals_69, ModuleName_73, FindTargetFiles_75, FindTimestampFiles_76, &ModulesToRecompile_33, STATE_VARIABLE_HaveReadModuleMaps_0_34, &STATE_VARIABLE_HaveReadModuleMaps_38_38);
                  }
                  break;
              }
            }
            break;
        }
        succeeded = (ModulesToRecompile_33 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          Var_40 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ModulesToRecompile_33, (MR_Integer) 0))));
          succeeded = (Var_40 == (MR_Word) ((MR_Unsigned) 0U));
        }
        if (succeeded)
        {
          *ModulesToLink_15 = (MR_Word) ((MR_Unsigned) 0U);
          *ExtraObjFiles_16 = (MR_Word) ((MR_Unsigned) 0U);
          *STATE_VARIABLE_HaveReadModuleMaps_35 = STATE_VARIABLE_HaveReadModuleMaps_38_38;
        }
        else
          top_level__mercury_compile_main__read_augment_and_process_module_11_p_0(Globals_69, OpModeAugment_32, OptionArgs_13, FileOrModule_14, ModulesToRecompile_33, ModulesToLink_15, ExtraObjFiles_16, STATE_VARIABLE_HaveReadModuleMaps_38_38, STATE_VARIABLE_HaveReadModuleMaps_35);
      }
      break;
  }
}

static void MR_CALL 
top_level__mercury_compile_main__read_augment_and_process_module_11_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_TimestampFiles_10;

  top_level__mercury_compile_main__find_timestamp_files_2_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv1_TimestampFiles_10);
  *wrapper_arg_2 = ((MR_Box) (conv1_TimestampFiles_10));
}

static MR_Box MR_CALL 
top_level__mercury_compile_main__read_augment_and_process_module_11_p_0_2(
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
top_level__mercury_compile_main__read_augment_and_process_module_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = top_level__mercury_compile_main__IntroducedFrom__pred__read_augment_and_process_module__1338__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static void MR_CALL 
top_level__mercury_compile_main__read_augment_and_process_module_11_p_0(
  MR_Word Globals0_12,
  MR_Word OpModeAugment_13,
  MR_Word OptionArgs_14,
  MR_Word FileOrModule_15,
  MR_Word MaybeModulesToRecompile_16,
  MR_Word * ModulesToLink_17,
  MR_Word * ExtraObjFiles_18,
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_0_43,
  MR_Word * STATE_VARIABLE_HaveReadModuleMaps_44)
{
  MR_bool succeeded;
  MR_Word Globals_23;
  MR_Word ModuleName_24;
  MR_String FileName_25;
  MR_Word MaybeTimestamp_26;
  MR_Word ParseTreeSrc_27;
  MR_Word Specs0_28;
  MR_Word Errors_29;
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_51_51;

  switch (MR_tag((MR_Word) OpModeAugment_13)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(OpModeAugment_13)) {
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
            MR_Word ReportCmdLineArgsDotErr_22;

            libs__globals__lookup_bool_option_3_p_0(Globals0_12, (MR_Integer) 80, &ReportCmdLineArgsDotErr_22);
            switch (ReportCmdLineArgsDotErr_22) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_String Var_117;
                  MR_Word Var_119;

                  mercury__io__write_string_3_p_0((MR_String) "% Command line options start\n");
                  Var_119 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), OptionArgs_14, (MR_Word) ((MR_Unsigned) 0U));
                  Var_117 = mercury__string__join_list_2_f_0((MR_String) "\n% ", Var_119);
                  mercury__io__write_string_3_p_0((MR_String) "% ");
                  mercury__io__write_string_3_p_0(Var_117);
                  mercury__io__write_string_3_p_0((MR_String) "\n");
                  mercury__io__write_string_3_p_0((MR_String) "% Command line options end\n");
                }
                break;
            }
          }
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word ReportCmdLineArgsDotErr_22;

        libs__globals__lookup_bool_option_3_p_0(Globals0_12, (MR_Integer) 80, &ReportCmdLineArgsDotErr_22);
        switch (ReportCmdLineArgsDotErr_22) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
            }
            break;
          case (MR_Integer) 1:
            {
              MR_String Var_117;
              MR_Word Var_119;

              mercury__io__write_string_3_p_0((MR_String) "% Command line options start\n");
              Var_119 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), OptionArgs_14, (MR_Word) ((MR_Unsigned) 0U));
              Var_117 = mercury__string__join_list_2_f_0((MR_String) "\n% ", Var_119);
              mercury__io__write_string_3_p_0((MR_String) "% ");
              mercury__io__write_string_3_p_0(Var_117);
              mercury__io__write_string_3_p_0((MR_String) "\n");
              mercury__io__write_string_3_p_0((MR_String) "% Command line options end\n");
            }
            break;
        }
      }
      break;
  }
  top_level__mercury_compile_main__read_module_or_file_14_p_0(Globals0_12, &Globals_23, FileOrModule_15, &ModuleName_24, &FileName_25, (MR_Integer) 0, &MaybeTimestamp_26, &ParseTreeSrc_27, &Specs0_28, &Errors_29, STATE_VARIABLE_HaveReadModuleMaps_0_43, &STATE_VARIABLE_HaveReadModuleMaps_51_51);
  succeeded = mercury__set__is_non_empty_1_p_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_error_0), Errors_29);
  if (succeeded)
  {
    {
      MR_Word HaltSyntax_130;

      libs__globals__lookup_bool_option_3_p_0(Globals_23, (MR_Integer) 6, &HaltSyntax_130);
      succeeded = (HaltSyntax_130 == (MR_Integer) 1);
    }
    if (!(succeeded))
    {
      MR_Word FatalErrors_131;
      MR_Word Var_132;

      Var_132 = parse_tree__parse_error__fatal_read_module_errors_0_f_0();
      mercury__set__intersect_3_p_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_error_0), Errors_29, Var_132, &FatalErrors_131);
      succeeded = mercury__set__is_non_empty_1_p_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_error_0), FatalErrors_131);
    }
  }
  if (succeeded)
  {
    parse_tree__error_util__write_error_specs_4_p_0(Globals_23, Specs0_28);
    *ModulesToLink_17 = (MR_Word) ((MR_Unsigned) 0U);
    *ExtraObjFiles_18 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_HaveReadModuleMaps_44 = STATE_VARIABLE_HaveReadModuleMaps_51_51;
  }
  else
  {
    MR_Word ParseTreeModuleSrcs0_30;
    MR_Word Specs1_31;
    MR_Word ParseTreeModuleSrcsToRecompile_35;
    MR_Word ParseTreeModuleNames_36;
    MR_Word NestedModuleNames_37;
    MR_Word FindTimestampFiles_38;
    MR_Word TraceProf_39;
    MR_Word GlobalsToUse_42;
    MR_Word Var_56;
    MR_Word CompilationTarget_135;
    MR_Word TimestampOtherExt_136;
    MR_Word Var_108;

    parse_tree__split_parse_tree_src__split_into_compilation_units_perform_checks_5_p_0(Globals_23, ParseTreeSrc_27, &ParseTreeModuleSrcs0_30, Specs0_28, &Specs1_31);
    if ((MaybeModulesToRecompile_16 == (MR_Word) ((MR_Unsigned) 0U)))
      ParseTreeModuleSrcsToRecompile_35 = ParseTreeModuleSrcs0_30;
    else
    {
      MR_Word ModulesToRecompile_32 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeModulesToRecompile_16, (MR_Integer) 0))));
      MR_Word ToRecompile_33;

      {
        ToRecompile_33 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), ToRecompile_33, 0) = ((MR_Box) (&top_level__mercury_compile_main_scalar_common_9[1]));
        MR_hl_field(MR_mktag(0), ToRecompile_33, 1) = ((MR_Box) (top_level__mercury_compile_main__read_augment_and_process_module_11_p_0_1));
        MR_hl_field(MR_mktag(0), ToRecompile_33, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), ToRecompile_33, 3) = ((MR_Box) (ModulesToRecompile_32));
      }
      mercury__list__filter_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_module_src_0), ToRecompile_33, ParseTreeModuleSrcs0_30, &ParseTreeModuleSrcsToRecompile_35);
    }
    Var_56 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_module_src_0), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&top_level__mercury_compile_main_scalar_common_5[2]), ParseTreeModuleSrcs0_30);
    ParseTreeModuleNames_36 = mercury__set__list_to_set_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_56);
    mercury__set__delete_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (ModuleName_24)), ParseTreeModuleNames_36, &NestedModuleNames_37);
    libs__globals__get_target_2_p_0(Globals_23, &CompilationTarget_135);
    switch (CompilationTarget_135) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        TimestampOtherExt_136 = (MR_Word) (((MR_Box) ((MR_String) ".c_date")));
        break;
      case (MR_Integer) 1:
        TimestampOtherExt_136 = (MR_Word) (((MR_Box) ((MR_String) ".cs_date")));
        break;
      case (MR_Integer) 2:
        TimestampOtherExt_136 = (MR_Word) (((MR_Box) ((MR_String) ".java_date")));
        break;
    }
    {
      FindTimestampFiles_38 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), FindTimestampFiles_38, 0) = ((MR_Box) (&top_level__mercury_compile_main_scalar_common_10[0]));
      MR_hl_field(MR_mktag(0), FindTimestampFiles_38, 1) = ((MR_Box) (top_level__mercury_compile_main__read_augment_and_process_module_11_p_0_3));
      MR_hl_field(MR_mktag(0), FindTimestampFiles_38, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), FindTimestampFiles_38, 3) = ((MR_Box) (Globals_23));
      MR_hl_field(MR_mktag(0), FindTimestampFiles_38, 4) = ((MR_Box) (TimestampOtherExt_136));
    }
    libs__globals__lookup_bool_option_3_p_0(Globals_23, (MR_Integer) 154, &TraceProf_39);
    succeeded = mdbcomp__builtin_modules__non_traced_mercury_builtin_module_1_p_0(ModuleName_24);
    if (succeeded)
    {
      Var_108 = mdbcomp__builtin_modules__mercury_profiling_builtin_module_0_f_0();
      succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ModuleName_24, Var_108);
      if (succeeded)
        succeeded = (TraceProf_39 == (MR_Integer) 1);
      succeeded = !(succeeded);
    }
    if (succeeded)
    {
      MR_Word GlobalsNoTrace0_40;

      libs__globals__set_option_4_p_0((MR_Integer) 312, (MR_Word) (MR_mkword(MR_mktag(1), &top_level__mercury_compile_main_scalar_common_2[1])), Globals_23, &GlobalsNoTrace0_40);
      libs__globals__set_trace_level_none_2_p_0(GlobalsNoTrace0_40, &GlobalsToUse_42);
    }
    else
      GlobalsToUse_42 = Globals_23;
    top_level__mercury_compile_main__augment_and_process_all_submodules_15_p_0(GlobalsToUse_42, OpModeAugment_13, FileName_25, MaybeTimestamp_26, ModuleName_24, NestedModuleNames_37, FindTimestampFiles_38, ParseTreeModuleSrcsToRecompile_35, Specs1_31, ModulesToLink_17, ExtraObjFiles_18, STATE_VARIABLE_HaveReadModuleMaps_51_51, STATE_VARIABLE_HaveReadModuleMaps_44);
  }
}

static void MR_CALL 
top_level__mercury_compile_main__augment_and_process_all_submodules_15_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_String conv6_ModuleToLink_4;

  top_level__mercury_compile_main__module_to_link_2_p_0(((MR_Word) (wrapper_arg_1)), &conv6_ModuleToLink_4);
  *wrapper_arg_2 = ((MR_Box) (conv6_ModuleToLink_4));
}

static void MR_CALL 
top_level__mercury_compile_main__augment_and_process_all_submodules_15_p_0_1(
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
  MR_Word conv2_ExtraObjFiles_24;
  MR_Word conv1_STATE_VARIABLE_Specs_36;
  MR_Word conv0_STATE_VARIABLE_HaveReadModuleMaps_38;

  top_level__mercury_compile_main__augment_and_process_module_15_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 7)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 8)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 9)))), ((MR_Word) (wrapper_arg_1)), &conv2_ExtraObjFiles_24, ((MR_Word) (wrapper_arg_3)), &conv1_STATE_VARIABLE_Specs_36, ((MR_Word) (wrapper_arg_5)), &conv0_STATE_VARIABLE_HaveReadModuleMaps_38);
  *wrapper_arg_2 = ((MR_Box) (conv2_ExtraObjFiles_24));
  *wrapper_arg_4 = ((MR_Box) (conv1_STATE_VARIABLE_Specs_36));
  *wrapper_arg_6 = ((MR_Box) (conv0_STATE_VARIABLE_HaveReadModuleMaps_38));
}

static void MR_CALL 
top_level__mercury_compile_main__augment_and_process_all_submodules_15_p_0(
  MR_Word Globals_16,
  MR_Word OpModeAugment_17,
  MR_String FileName_18,
  MR_Word MaybeTimestamp_19,
  MR_Word SourceFileModuleName_20,
  MR_Word NestedSubModules_21,
  MR_Word FindTimestampFiles_22,
  MR_Word ParseTreeModuleSrcs_23,
  MR_Word STATE_VARIABLE_Specs_0_30,
  MR_Word * ModulesToLink_25,
  MR_Word * ExtraObjFiles_26,
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_0_31,
  MR_Word * STATE_VARIABLE_HaveReadModuleMaps_32)
{
  MR_Word ExtraObjFileLists_29;
  MR_Word Var_35;
  MR_Word STATE_VARIABLE_Specs_36_36;
  MR_Box conv5_STATE_VARIABLE_Specs_36_36;
  MR_Box conv4_STATE_VARIABLE_HaveReadModuleMaps_32;
  MR_Box conv3_STATE_VARIABLE_IO_38_38;

  {
    Var_35 = (MR_Word) MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_35, 0) = ((MR_Box) (&top_level__mercury_compile_main_scalar_common_8[0]));
    MR_hl_field(MR_mktag(0), Var_35, 1) = ((MR_Box) (top_level__mercury_compile_main__augment_and_process_all_submodules_15_p_0_1));
    MR_hl_field(MR_mktag(0), Var_35, 2) = ((MR_Box) ((MR_Integer) 7));
    MR_hl_field(MR_mktag(0), Var_35, 3) = ((MR_Box) (Globals_16));
    MR_hl_field(MR_mktag(0), Var_35, 4) = ((MR_Box) (OpModeAugment_17));
    MR_hl_field(MR_mktag(0), Var_35, 5) = ((MR_Box) (FileName_18));
    MR_hl_field(MR_mktag(0), Var_35, 6) = ((MR_Box) (MaybeTimestamp_19));
    MR_hl_field(MR_mktag(0), Var_35, 7) = ((MR_Box) (SourceFileModuleName_20));
    MR_hl_field(MR_mktag(0), Var_35, 8) = ((MR_Box) (NestedSubModules_21));
    MR_hl_field(MR_mktag(0), Var_35, 9) = ((MR_Box) (FindTimestampFiles_22));
  }
  mercury__list__map_foldl3_9_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_module_src_0), (MR_Word) (&top_level__mercury_compile_main_scalar_common_1[0]), (MR_Word) (&top_level__mercury_compile_main_scalar_common_1[2]), (MR_Word) (&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_maps_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_35, ParseTreeModuleSrcs_23, &ExtraObjFileLists_29, ((MR_Box) (STATE_VARIABLE_Specs_0_30)), &conv5_STATE_VARIABLE_Specs_36_36, ((MR_Box) (STATE_VARIABLE_HaveReadModuleMaps_0_31)), &conv4_STATE_VARIABLE_HaveReadModuleMaps_32, ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_IO_38_38);
  STATE_VARIABLE_Specs_36_36 = ((MR_Word) (conv5_STATE_VARIABLE_Specs_36_36));
  *STATE_VARIABLE_HaveReadModuleMaps_32 = ((MR_Word) (conv4_STATE_VARIABLE_HaveReadModuleMaps_32));
  parse_tree__error_util__write_error_specs_4_p_0(Globals_16, STATE_VARIABLE_Specs_36_36);
  mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_module_src_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&top_level__mercury_compile_main_scalar_common_5[1]), ParseTreeModuleSrcs_23, ModulesToLink_25);
  mercury__list__condense_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ExtraObjFileLists_29, ExtraObjFiles_26);
}

static void MR_CALL 
top_level__mercury_compile_main__do_process_compiler_arg_make_interface_7_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv8_HeadVar__5_5;

  parse_tree__write_module_interface_files__write_short_interface_file_int3_7_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), &conv8_HeadVar__5_5);
  *wrapper_arg_2 = ((MR_Box) (conv8_HeadVar__5_5));
}

static void MR_CALL 
top_level__mercury_compile_main__do_process_compiler_arg_make_interface_7_p_0_2(
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

  parse_tree__write_module_interface_files__write_interface_file_int1_int2_12_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 7)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 8)))), ((MR_Word) (wrapper_arg_1)), &conv5_HeadVar__8_8, ((MR_Word) (wrapper_arg_3)), &conv4_HeadVar__10_10);
  *wrapper_arg_2 = ((MR_Box) (conv5_HeadVar__8_8));
  *wrapper_arg_4 = ((MR_Box) (conv4_HeadVar__10_10));
}

static void MR_CALL 
top_level__mercury_compile_main__do_process_compiler_arg_make_interface_7_p_0_1(
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

  parse_tree__write_module_interface_files__write_private_interface_file_int0_12_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 7)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 8)))), ((MR_Word) (wrapper_arg_1)), &conv1_HeadVar__8_8, ((MR_Word) (wrapper_arg_3)), &conv0_HeadVar__10_10);
  *wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__8_8));
  *wrapper_arg_4 = ((MR_Box) (conv0_HeadVar__10_10));
}

static void MR_CALL 
top_level__mercury_compile_main__do_process_compiler_arg_make_interface_7_p_0(
  MR_Word Globals0_8,
  MR_Word InterfaceFile_9,
  MR_Word FileOrModule_10,
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_0_28,
  MR_Word * STATE_VARIABLE_HaveReadModuleMaps_29)
{
  MR_bool succeeded;
  MR_Word ReturnTimestamp_13;
  MR_Word Globals_15;
  MR_Word ModuleName_16;
  MR_String FileName_17;
  MR_Word MaybeTimestamp_18;
  MR_Word ParseTreeSrc_19;
  MR_Word ReadSpecs_20;
  MR_Word ReadErrors_21;
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_34_34;

  switch (InterfaceFile_9) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word GenerateVersionNumbers_14;

        libs__globals__lookup_bool_option_3_p_0(Globals0_8, (MR_Integer) 150, &GenerateVersionNumbers_14);
        switch (GenerateVersionNumbers_14) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            ReturnTimestamp_13 = (MR_Integer) 1;
            break;
          case (MR_Integer) 1:
            ReturnTimestamp_13 = (MR_Integer) 0;
            break;
        }
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word GenerateVersionNumbers_50;

        libs__globals__lookup_bool_option_3_p_0(Globals0_8, (MR_Integer) 150, &GenerateVersionNumbers_50);
        switch (GenerateVersionNumbers_50) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            ReturnTimestamp_13 = (MR_Integer) 1;
            break;
          case (MR_Integer) 1:
            ReturnTimestamp_13 = (MR_Integer) 0;
            break;
        }
      }
      break;
    case (MR_Integer) 2:
      ReturnTimestamp_13 = (MR_Integer) 1;
      break;
  }
  top_level__mercury_compile_main__read_module_or_file_14_p_0(Globals0_8, &Globals_15, FileOrModule_10, &ModuleName_16, &FileName_17, ReturnTimestamp_13, &MaybeTimestamp_18, &ParseTreeSrc_19, &ReadSpecs_20, &ReadErrors_21, STATE_VARIABLE_HaveReadModuleMaps_0_28, &STATE_VARIABLE_HaveReadModuleMaps_34_34);
  succeeded = mercury__set__is_non_empty_1_p_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_error_0), ReadErrors_21);
  if (succeeded)
  {
    {
      MR_Word HaltSyntax_82;

      libs__globals__lookup_bool_option_3_p_0(Globals_15, (MR_Integer) 6, &HaltSyntax_82);
      succeeded = (HaltSyntax_82 == (MR_Integer) 1);
    }
    if (!(succeeded))
    {
      MR_Word FatalErrors_83;
      MR_Word Var_84;

      Var_84 = parse_tree__parse_error__fatal_read_module_errors_0_f_0();
      mercury__set__intersect_3_p_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_error_0), ReadErrors_21, Var_84, &FatalErrors_83);
      succeeded = mercury__set__is_non_empty_1_p_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_error_0), FatalErrors_83);
    }
  }
  if (succeeded)
  {
    parse_tree__error_util__write_error_specs_4_p_0(Globals_15, ReadSpecs_20);
    *STATE_VARIABLE_HaveReadModuleMaps_29 = STATE_VARIABLE_HaveReadModuleMaps_34_34;
  }
  else
  {
    MR_Word ParseTreeModuleSrcs_22;
    MR_Word ReadSplitSpecs_23;
    MR_Word Specs_24;
    MR_Word ProgressStream_25;
    MR_Word ErrorStream_26;
    MR_Word Limited_87;
    MR_Word ExtraErrorInfo_88;

    parse_tree__split_parse_tree_src__split_into_compilation_units_perform_checks_5_p_0(Globals_15, ParseTreeSrc_19, &ParseTreeModuleSrcs_22, ReadSpecs_20, &ReadSplitSpecs_23);
    parse_tree__error_util__filter_interface_generation_specs_5_p_0(Globals_15, ReadSplitSpecs_23, &Specs_24);
    libs__globals__get_progress_output_stream_5_p_0(Globals_15, ModuleName_16, &ProgressStream_25);
    libs__globals__get_error_output_stream_5_p_0(Globals_15, ModuleName_16, &ErrorStream_26);
    parse_tree__error_util__write_error_specs_5_p_0(ErrorStream_26, Globals_15, Specs_24);
    libs__globals__io_get_some_errors_were_context_limited_3_p_0(&Limited_87);
    libs__globals__io_set_some_errors_were_context_limited_3_p_0((MR_Integer) 0);
    libs__globals__io_get_extra_error_info_3_p_0(&ExtraErrorInfo_88);
    libs__globals__io_set_extra_error_info_3_p_0((MR_Integer) 0);
    switch (Limited_87) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        {
          MR_String Var_96;
          MR_String Var_100;

          Var_96 = mercury__string__f_43_43_2_f_0((MR_String) "Some error messages were suppressed ", (MR_String) "by \140--limit-error-contexts\' options.\n");
          mercury__io__write_string_4_p_0(ErrorStream_26, Var_96);
          Var_100 = mercury__string__f_43_43_2_f_0((MR_String) "You can see the suppressed messages ", (MR_String) "if you recompile without these options.\n");
          mercury__io__write_string_4_p_0(ErrorStream_26, Var_100);
        }
        break;
    }
    switch (ExtraErrorInfo_88) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word VerboseErrors_89;

          libs__globals__lookup_bool_option_3_p_0(Globals_15, (MR_Integer) 73, &VerboseErrors_89);
          switch (VerboseErrors_89) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              mercury__io__write_string_4_p_0(ErrorStream_26, (MR_String) "For more information, recompile with \140-E\'.\n");
              break;
            case (MR_Integer) 1:
              {
              }
              break;
          }
        }
        break;
    }
    switch (InterfaceFile_9) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Var_47;
          MR_Word _Succeededs_27;
          MR_Box conv3_STATE_VARIABLE_HaveReadModuleMaps_29;
          MR_Box conv2_STATE_VARIABLE_IO_31;

          {
            Var_47 = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_47, 0) = ((MR_Box) (&top_level__mercury_compile_main_scalar_common_6[0]));
            MR_hl_field(MR_mktag(0), Var_47, 1) = ((MR_Box) (top_level__mercury_compile_main__do_process_compiler_arg_make_interface_7_p_0_1));
            MR_hl_field(MR_mktag(0), Var_47, 2) = ((MR_Box) ((MR_Integer) 6));
            MR_hl_field(MR_mktag(0), Var_47, 3) = ((MR_Box) (ProgressStream_25));
            MR_hl_field(MR_mktag(0), Var_47, 4) = ((MR_Box) (ErrorStream_26));
            MR_hl_field(MR_mktag(0), Var_47, 5) = ((MR_Box) (Globals0_8));
            MR_hl_field(MR_mktag(0), Var_47, 6) = ((MR_Box) (FileName_17));
            MR_hl_field(MR_mktag(0), Var_47, 7) = ((MR_Box) (ModuleName_16));
            MR_hl_field(MR_mktag(0), Var_47, 8) = ((MR_Box) (MaybeTimestamp_18));
          }
          mercury__list__map_foldl2_7_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_module_src_0), (MR_Word) (&libs__maybe_succeeded__libs__maybe_succeeded__type_ctor_info_maybe_succeeded_0), (MR_Word) (&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_maps_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_47, ParseTreeModuleSrcs_22, &_Succeededs_27, ((MR_Box) (STATE_VARIABLE_HaveReadModuleMaps_34_34)), &conv3_STATE_VARIABLE_HaveReadModuleMaps_29, ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_31);
          *STATE_VARIABLE_HaveReadModuleMaps_29 = ((MR_Word) (conv3_STATE_VARIABLE_HaveReadModuleMaps_29));
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Var_44;
          MR_Word _Succeededs_51;
          MR_Box conv7_STATE_VARIABLE_HaveReadModuleMaps_29;
          MR_Box conv6_STATE_VARIABLE_IO_31;

          {
            Var_44 = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_44, 0) = ((MR_Box) (&top_level__mercury_compile_main_scalar_common_6[0]));
            MR_hl_field(MR_mktag(0), Var_44, 1) = ((MR_Box) (top_level__mercury_compile_main__do_process_compiler_arg_make_interface_7_p_0_2));
            MR_hl_field(MR_mktag(0), Var_44, 2) = ((MR_Box) ((MR_Integer) 6));
            MR_hl_field(MR_mktag(0), Var_44, 3) = ((MR_Box) (ProgressStream_25));
            MR_hl_field(MR_mktag(0), Var_44, 4) = ((MR_Box) (ErrorStream_26));
            MR_hl_field(MR_mktag(0), Var_44, 5) = ((MR_Box) (Globals0_8));
            MR_hl_field(MR_mktag(0), Var_44, 6) = ((MR_Box) (FileName_17));
            MR_hl_field(MR_mktag(0), Var_44, 7) = ((MR_Box) (ModuleName_16));
            MR_hl_field(MR_mktag(0), Var_44, 8) = ((MR_Box) (MaybeTimestamp_18));
          }
          mercury__list__map_foldl2_7_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_module_src_0), (MR_Word) (&libs__maybe_succeeded__libs__maybe_succeeded__type_ctor_info_maybe_succeeded_0), (MR_Word) (&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_maps_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_44, ParseTreeModuleSrcs_22, &_Succeededs_51, ((MR_Box) (STATE_VARIABLE_HaveReadModuleMaps_34_34)), &conv7_STATE_VARIABLE_HaveReadModuleMaps_29, ((MR_Box) ((MR_Integer) 0)), &conv6_STATE_VARIABLE_IO_31);
          *STATE_VARIABLE_HaveReadModuleMaps_29 = ((MR_Word) (conv7_STATE_VARIABLE_HaveReadModuleMaps_29));
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Var_42;
          MR_Word _Succeededs_53;
          MR_Box conv9_STATE_VARIABLE_IO_31;

          {
            Var_42 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_42, 0) = ((MR_Box) (&top_level__mercury_compile_main_scalar_common_7[0]));
            MR_hl_field(MR_mktag(0), Var_42, 1) = ((MR_Box) (top_level__mercury_compile_main__do_process_compiler_arg_make_interface_7_p_0_3));
            MR_hl_field(MR_mktag(0), Var_42, 2) = ((MR_Box) ((MR_Integer) 3));
            MR_hl_field(MR_mktag(0), Var_42, 3) = ((MR_Box) (ProgressStream_25));
            MR_hl_field(MR_mktag(0), Var_42, 4) = ((MR_Box) (ErrorStream_26));
            MR_hl_field(MR_mktag(0), Var_42, 5) = ((MR_Box) (Globals0_8));
          }
          mercury__list__map_foldl_5_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_module_src_0), (MR_Word) (&libs__maybe_succeeded__libs__maybe_succeeded__type_ctor_info_maybe_succeeded_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_42, ParseTreeModuleSrcs_22, &_Succeededs_53, ((MR_Box) ((MR_Integer) 0)), &conv9_STATE_VARIABLE_IO_31);
          *STATE_VARIABLE_HaveReadModuleMaps_29 = STATE_VARIABLE_HaveReadModuleMaps_34_34;
        }
        break;
    }
  }
}

static void MR_CALL 
top_level__mercury_compile_main__read_module_or_file_14_p_0(
  MR_Word Globals0_15,
  MR_Word * Globals_16,
  MR_Word FileOrModuleName_17,
  MR_Word * ModuleName_18,
  MR_String * FileNameDotM_19,
  MR_Word ReturnTimestamp_20,
  MR_Word * MaybeTimestamp_21,
  MR_Word * ParseTreeSrc_22,
  MR_Word * Specs_23,
  MR_Word * Errors_24,
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_0_43,
  MR_Word * STATE_VARIABLE_HaveReadModuleMaps_44)
{
  MR_bool succeeded;

  if (((MR_tag((MR_Word) FileOrModuleName_17)) == (MR_Integer) 0))
  {
    MR_String FileName_38 = ((MR_String) ((MR_hl_field(MR_mktag(0), FileOrModuleName_17, (MR_Integer) 0))));
    MR_Word DefaultModuleName_39;
    MR_Word Verbose_96;
    MR_Word Stats_104;
    MR_Word MaybeTimestampPrime_89;
    MR_Word ParseTreeSrcPrime_90;
    MR_Word SpecsPrime_91;
    MR_Word ErrorsPrime_92;
    MR_Word Var_54;
    MR_String Var_40;

    *FileNameDotM_19 = mercury__string__f_43_43_2_f_0(FileName_38, (MR_String) ".m");
    libs__globals__lookup_bool_option_3_p_0(Globals0_15, (MR_Integer) 71, &Verbose_96);
    libs__file_util__maybe_write_string_4_p_0(Verbose_96, (MR_String) "% Parsing file \140");
    libs__file_util__maybe_write_string_4_p_0(Verbose_96, *FileNameDotM_19);
    libs__file_util__maybe_write_string_4_p_0(Verbose_96, (MR_String) "\' and imported interfaces...\n");
    parse_tree__file_names__file_name_to_module_name_2_p_0(FileName_38, &DefaultModuleName_39);
    Var_54 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_HaveReadModuleMaps_0_43, (MR_Integer) 0))));
    succeeded = parse_tree__read_modules__find_read_module_src_8_p_0(Var_54, DefaultModuleName_39, ReturnTimestamp_20, &Var_40, &MaybeTimestampPrime_89, &ParseTreeSrcPrime_90, &SpecsPrime_91, &ErrorsPrime_92);
    if (succeeded)
    {
      MR_Word HaveReadModuleMapSrc0_86;
      MR_Word HaveReadModuleMapSrc_87;
      MR_Word Var_142;
      MR_Word Var_143;
      MR_Word Var_144;
      MR_Word Var_145;
      MR_Word Var_146;
      MR_Word Var_147;
      MR_Word Var_148;

      *Globals_16 = Globals0_15;
      HaveReadModuleMapSrc0_86 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_HaveReadModuleMaps_0_43, (MR_Integer) 0))));
      *ModuleName_18 = DefaultModuleName_39;
      mercury__map__delete_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&top_level__mercury_compile_main_scalar_common_1[1]), ((MR_Box) (*ModuleName_18)), HaveReadModuleMapSrc0_86, &HaveReadModuleMapSrc_87);
      Var_142 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_HaveReadModuleMaps_0_43, (MR_Integer) 1))));
      Var_143 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_HaveReadModuleMaps_0_43, (MR_Integer) 2))));
      Var_144 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_HaveReadModuleMaps_0_43, (MR_Integer) 3))));
      Var_145 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_HaveReadModuleMaps_0_43, (MR_Integer) 4))));
      Var_146 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_HaveReadModuleMaps_0_43, (MR_Integer) 5))));
      Var_147 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_HaveReadModuleMaps_0_43, (MR_Integer) 6))));
      Var_148 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_HaveReadModuleMaps_0_43, (MR_Integer) 7))));
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
        *STATE_VARIABLE_HaveReadModuleMaps_44 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (HaveReadModuleMapSrc_87));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_142));
        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_143));
        MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_144));
        MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_145));
        MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_146));
        MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_147));
        MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_148));
      }
      *MaybeTimestamp_21 = MaybeTimestampPrime_89;
      *ParseTreeSrc_22 = ParseTreeSrcPrime_90;
      *Specs_23 = SpecsPrime_91;
      *Errors_24 = ErrorsPrime_92;
    }
    else
    {
      MR_Word Var_58;
      MR_Word DisableSmart_88;

      {
        Var_58 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_58, 0) = (MR_Box) ((MR_Unsigned) (ReturnTimestamp_20));
      }
      parse_tree__read_modules__read_module_src_from_file_12_p_0(Globals0_15, FileName_38, *FileNameDotM_19, (MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 1, Var_58, MaybeTimestamp_21, ParseTreeSrc_22, Specs_23, Errors_24);
      *ModuleName_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), *ParseTreeSrc_22, (MR_Integer) 0))));
      libs__globals__io_get_disable_smart_recompilation_3_p_0(&DisableSmart_88);
      switch (DisableSmart_88) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          libs__globals__set_option_4_p_0((MR_Integer) 149, (MR_Word) (MR_mkword(MR_mktag(1), &top_level__mercury_compile_main_scalar_common_2[1])), Globals0_15, Globals_16);
          break;
        case (MR_Integer) 0:
          *Globals_16 = Globals0_15;
          break;
      }
      *STATE_VARIABLE_HaveReadModuleMaps_44 = STATE_VARIABLE_HaveReadModuleMaps_0_43;
    }
    libs__globals__lookup_bool_option_3_p_0(*Globals_16, (MR_Integer) 82, &Stats_104);
    libs__file_util__maybe_report_stats_3_p_0(Stats_104);
  }
  else
  {
    MR_Word Verbose_27;
    MR_String ModuleNameString_28;
    MR_Word Stats_37;
    MR_String FileNameDotMPrime_29;
    MR_Word MaybeTimestampPrime_30;
    MR_Word ParseTreeSrcPrime_31;
    MR_Word SpecsPrime_32;
    MR_Word ErrorsPrime_33;
    MR_Word Var_72;

    *ModuleName_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), FileOrModuleName_17, (MR_Integer) 0))));
    libs__globals__lookup_bool_option_3_p_0(Globals0_15, (MR_Integer) 71, &Verbose_27);
    libs__file_util__maybe_write_string_4_p_0(Verbose_27, (MR_String) "% Parsing module \140");
    ModuleNameString_28 = mdbcomp__sym_name__sym_name_to_string_1_f_0(*ModuleName_18);
    libs__file_util__maybe_write_string_4_p_0(Verbose_27, ModuleNameString_28);
    libs__file_util__maybe_write_string_4_p_0(Verbose_27, (MR_String) "\' and imported interfaces...\n");
    Var_72 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_HaveReadModuleMaps_0_43, (MR_Integer) 0))));
    succeeded = parse_tree__read_modules__find_read_module_src_8_p_0(Var_72, *ModuleName_18, ReturnTimestamp_20, &FileNameDotMPrime_29, &MaybeTimestampPrime_30, &ParseTreeSrcPrime_31, &SpecsPrime_32, &ErrorsPrime_33);
    if (succeeded)
    {
      MR_Word HaveReadModuleMapSrc0_34;
      MR_Word HaveReadModuleMapSrc_35;
      MR_Word Var_120;
      MR_Word Var_121;
      MR_Word Var_122;
      MR_Word Var_123;
      MR_Word Var_124;
      MR_Word Var_125;
      MR_Word Var_126;

      *Globals_16 = Globals0_15;
      HaveReadModuleMapSrc0_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_HaveReadModuleMaps_0_43, (MR_Integer) 0))));
      mercury__map__delete_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&top_level__mercury_compile_main_scalar_common_1[1]), ((MR_Box) (*ModuleName_18)), HaveReadModuleMapSrc0_34, &HaveReadModuleMapSrc_35);
      Var_120 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_HaveReadModuleMaps_0_43, (MR_Integer) 1))));
      Var_121 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_HaveReadModuleMaps_0_43, (MR_Integer) 2))));
      Var_122 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_HaveReadModuleMaps_0_43, (MR_Integer) 3))));
      Var_123 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_HaveReadModuleMaps_0_43, (MR_Integer) 4))));
      Var_124 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_HaveReadModuleMaps_0_43, (MR_Integer) 5))));
      Var_125 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_HaveReadModuleMaps_0_43, (MR_Integer) 6))));
      Var_126 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_HaveReadModuleMaps_0_43, (MR_Integer) 7))));
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
        *STATE_VARIABLE_HaveReadModuleMaps_44 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (HaveReadModuleMapSrc_35));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_120));
        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_121));
        MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_122));
        MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_123));
        MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_124));
        MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_125));
        MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_126));
      }
      *FileNameDotM_19 = FileNameDotMPrime_29;
      *MaybeTimestamp_21 = MaybeTimestampPrime_30;
      *ParseTreeSrc_22 = ParseTreeSrcPrime_31;
      *Specs_23 = SpecsPrime_32;
      *Errors_24 = ErrorsPrime_33;
    }
    else
    {
      MR_Word DisableSmart_36;
      MR_Word Var_74;
      MR_Word Var_78;

      {
        Var_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_74, 0) = ((MR_Box) (*ModuleName_18));
      }
      {
        Var_78 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_78, 0) = (MR_Box) ((MR_Unsigned) (ReturnTimestamp_20));
      }
      parse_tree__read_modules__read_module_src_14_p_0(Globals0_15, Var_74, (MR_Integer) 1, (MR_Integer) 1, *ModuleName_18, (MR_Word) ((MR_Unsigned) 0U), FileNameDotM_19, Var_78, MaybeTimestamp_21, ParseTreeSrc_22, Specs_23, Errors_24);
      libs__globals__io_get_disable_smart_recompilation_3_p_0(&DisableSmart_36);
      switch (DisableSmart_36) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          libs__globals__set_option_4_p_0((MR_Integer) 149, (MR_Word) (MR_mkword(MR_mktag(1), &top_level__mercury_compile_main_scalar_common_2[1])), Globals0_15, Globals_16);
          break;
        case (MR_Integer) 0:
          *Globals_16 = Globals0_15;
          break;
      }
      *STATE_VARIABLE_HaveReadModuleMaps_44 = STATE_VARIABLE_HaveReadModuleMaps_0_43;
    }
    libs__globals__lookup_bool_option_3_p_0(*Globals_16, (MR_Integer) 81, &Stats_37);
    libs__file_util__maybe_report_stats_3_p_0(Stats_37);
  }
}

static void MR_CALL 
top_level__mercury_compile_main__do_op_mode_query_5_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  mercury__io__write_string_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) (wrapper_arg_1)));
}

static void MR_CALL 
top_level__mercury_compile_main__do_op_mode_query_5_p_0_3(
  void * env_ptr_arg)
{
  struct top_level__mercury_compile_main__do_op_mode_query_5_p_0_4_env_0_s * env_ptr = (struct top_level__mercury_compile_main__do_op_mode_query_5_p_0_4_env_0_s *) (env_ptr_arg);

  *((env_ptr)->top_level__mercury_compile_main__do_op_mode_query_5_p_0_4_env_0__wrapper_arg_1) = ((MR_Box) ((env_ptr)->top_level__mercury_compile_main__do_op_mode_query_5_p_0_4_env_0__conv2_LambdaHeadVar__1_35));
  ((env_ptr)->top_level__mercury_compile_main__do_op_mode_query_5_p_0_4_env_0__cont)((env_ptr)->top_level__mercury_compile_main__do_op_mode_query_5_p_0_4_env_0__cont_env_ptr);
}

static void MR_CALL 
top_level__mercury_compile_main__do_op_mode_query_5_p_0_4(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Cont cont,
  void * cont_env_ptr)
{
  struct top_level__mercury_compile_main__do_op_mode_query_5_p_0_4_env_0_s env;

  (env).top_level__mercury_compile_main__do_op_mode_query_5_p_0_4_env_0__wrapper_arg_1 = wrapper_arg_1;
  (env).top_level__mercury_compile_main__do_op_mode_query_5_p_0_4_env_0__cont = cont;
  (env).top_level__mercury_compile_main__do_op_mode_query_5_p_0_4_env_0__cont_env_ptr = cont_env_ptr;
  {
    MR_Box closure = closure_arg;

    top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_query__684__1_1_p_0(&(env).top_level__mercury_compile_main__do_op_mode_query_5_p_0_4_env_0__conv2_LambdaHeadVar__1_35, top_level__mercury_compile_main__do_op_mode_query_5_p_0_3, &env);
  }
}

static void MR_CALL 
top_level__mercury_compile_main__do_op_mode_query_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_query__677__1_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) (wrapper_arg_1)));
}

static void MR_CALL 
top_level__mercury_compile_main__do_op_mode_query_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_query__670__1_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) (wrapper_arg_1)));
}

static void MR_CALL 
top_level__mercury_compile_main__do_op_mode_query_5_p_0(
  MR_Word Globals_6,
  MR_Word OpModeQuery_7,
  MR_Word OptionVariables_8)
{
  MR_Word StdOut_10;

  mercury__io__stdout_stream_3_p_0(&StdOut_10);
  switch (OpModeQuery_7) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        MR_String CC_Type_12;

        libs__globals__lookup_string_option_3_p_0(Globals_6, (MR_Integer) 554, &CC_Type_12);
        mercury__io__print_line_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), StdOut_10, ((MR_Box) (CC_Type_12)));
      }
      break;
    case (MR_Integer) 3:
      backend_libs__compile_target_code__output_c_include_directory_flags_4_p_0(Globals_6, StdOut_10);
      break;
    case (MR_Integer) 0:
      {
        MR_String CC_11;

        libs__globals__lookup_string_option_3_p_0(Globals_6, (MR_Integer) 530, &CC_11);
        mercury__io__print_line_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), StdOut_10, ((MR_Box) (CC_11)));
      }
      break;
    case (MR_Integer) 2:
      {
        backend_libs__compile_target_code__output_c_compiler_flags_4_p_0(Globals_6, StdOut_10);
        mercury__io__nl_3_p_0(StdOut_10);
      }
      break;
    case (MR_Integer) 5:
      {
        MR_String CSC_13;

        libs__globals__lookup_string_option_3_p_0(Globals_6, (MR_Integer) 562, &CSC_13);
        mercury__io__print_line_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), StdOut_10, ((MR_Box) (CSC_13)));
      }
      break;
    case (MR_Integer) 6:
      {
        MR_String CSC_Type_14;

        libs__globals__lookup_string_option_3_p_0(Globals_6, (MR_Integer) 555, &CSC_Type_14);
        mercury__io__print_line_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), StdOut_10, ((MR_Box) (CSC_Type_14)));
      }
      break;
    case (MR_Integer) 4:
      backend_libs__compile_target_code__output_c_grade_defines_4_p_0(Globals_6, StdOut_10);
      break;
    case (MR_Integer) 11:
      {
        MR_String Grade_17;

        libs__compute_grade__grade_directory_component_2_p_0(Globals_6, &Grade_17);
        mercury__io__print_line_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), StdOut_10, ((MR_Box) (Grade_17)));
      }
      break;
    case (MR_Integer) 7:
      {
        MR_String ClassName_15;

        parse_tree__file_names__get_class_dir_name_2_p_0(Globals_6, &ClassName_15);
        mercury__io__print_line_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), StdOut_10, ((MR_Box) (ClassName_15)));
      }
      break;
    case (MR_Integer) 12:
      {
        MR_Word LibGrades_18;
        MR_Word Var_48;
        MR_Box conv0_STATE_VARIABLE_IO_31;

        libs__globals__lookup_accumulating_option_3_p_0(Globals_6, (MR_Integer) 668, &LibGrades_18);
        {
          Var_48 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_48, 0) = ((MR_Box) (&top_level__mercury_compile_main_scalar_common_3[0]));
          MR_hl_field(MR_mktag(0), Var_48, 1) = ((MR_Box) (top_level__mercury_compile_main__do_op_mode_query_5_p_0_1));
          MR_hl_field(MR_mktag(0), Var_48, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), Var_48, 3) = ((MR_Box) (StdOut_10));
        }
        mercury__list__foldl_4_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_48, LibGrades_18, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_31);
      }
      break;
    case (MR_Integer) 10:
      backend_libs__compile_target_code__output_library_link_flags_4_p_0(Globals_6, StdOut_10);
      break;
    case (MR_Integer) 8:
      {
        MR_String LinkCommand_16;

        libs__globals__lookup_string_option_3_p_0(Globals_6, (MR_Integer) 605, &LinkCommand_16);
        mercury__io__print_line_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), StdOut_10, ((MR_Box) (LinkCommand_16)));
      }
      break;
    case (MR_Integer) 9:
      {
        MR_String LinkCommand_69;

        libs__globals__lookup_string_option_3_p_0(Globals_6, (MR_Integer) 606, &LinkCommand_69);
        mercury__io__print_line_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), StdOut_10, ((MR_Box) (LinkCommand_69)));
      }
      break;
    case (MR_Integer) 13:
      {
        MR_Word MaybeMerStdLibDir_19;

        libs__check_libgrades__find_mercury_stdlib_5_p_0(Globals_6, OptionVariables_8, &MaybeMerStdLibDir_19);
        if (((MR_tag((MR_Word) MaybeMerStdLibDir_19)) == (MR_Integer) 0))
        {
          MR_Word Specs_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeMerStdLibDir_19, (MR_Integer) 0))));

          parse_tree__error_util__write_error_specs_5_p_0(StdOut_10, Globals_6, Specs_22);
        }
        else
        {
          MR_String MerStdLibDir_20 = ((MR_String) ((MR_hl_field(MR_mktag(1), MaybeMerStdLibDir_19, (MR_Integer) 0))));
          MR_Word StdlibGrades_21;
          MR_Word Var_45;
          MR_Box conv1_STATE_VARIABLE_IO_31;

          libs__check_libgrades__do_detect_libgrades_4_p_0(MerStdLibDir_20, &StdlibGrades_21);
          {
            Var_45 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_45, 0) = ((MR_Box) (&top_level__mercury_compile_main_scalar_common_3[0]));
            MR_hl_field(MR_mktag(0), Var_45, 1) = ((MR_Box) (top_level__mercury_compile_main__do_op_mode_query_5_p_0_2));
            MR_hl_field(MR_mktag(0), Var_45, 2) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), Var_45, 3) = ((MR_Box) (StdOut_10));
          }
          mercury__set__fold_4_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_45, StdlibGrades_21, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_31);
        }
      }
      break;
    case (MR_Integer) 14:
      {
        MR_Word StdlibLines_28;
        MR_Word Var_40;
        MR_Box conv3_STATE_VARIABLE_IO_31;

        mercury__solutions__solutions_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&top_level__mercury_compile_main_scalar_common_5[0]), &StdlibLines_28);
        {
          Var_40 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_40, 0) = ((MR_Box) (&top_level__mercury_compile_main_scalar_common_3[0]));
          MR_hl_field(MR_mktag(0), Var_40, 1) = ((MR_Box) (top_level__mercury_compile_main__do_op_mode_query_5_p_0_5));
          MR_hl_field(MR_mktag(0), Var_40, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), Var_40, 3) = ((MR_Box) (StdOut_10));
        }
        mercury__list__foldl_4_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_40, StdlibLines_28, ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_IO_31);
      }
      break;
    case (MR_Integer) 15:
      {
        MR_String TargetArch_29;

        libs__globals__lookup_string_option_3_p_0(Globals_6, (MR_Integer) 695, &TargetArch_29);
        mercury__io__print_line_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), StdOut_10, ((MR_Box) (TargetArch_29)));
      }
      break;
  }
}

static void MR_CALL 
top_level__mercury_compile_main__process_options_plain_9_p_0(
  MR_Word CmdLineArgs_10,
  MR_Word * DetectedGradeFlags_11,
  MR_Word * Variables_12,
  MR_Word * MaybeMCFlags_13,
  MR_Word * OptionArgs_14,
  MR_Word * NonOptionArgs_15,
  MR_Word * Specs_16)
{
  MR_bool succeeded;
  MR_Word ArgsGlobals_19;
  MR_Word OptionSearchDirectories_20;
  MR_Word OptionsFiles_21;
  MR_Word Variables0_22;
  MR_Word OptFileNonUndefSpecs_23;
  MR_Word OptFileUndefSpecs_24;
  MR_Word WarnUndef_25;
  MR_Word OptFileSpecs_26;
  MR_Word OptFileErrors_27;
  MR_Word EnvVarMap_28;
  MR_Word _Errors0_18;

  libs__handle_options__handle_given_options_7_p_0(CmdLineArgs_10, OptionArgs_14, NonOptionArgs_15, &_Errors0_18, &ArgsGlobals_19);
  libs__globals__lookup_accumulating_option_3_p_0(ArgsGlobals_19, (MR_Integer) 675, &OptionSearchDirectories_20);
  libs__globals__lookup_accumulating_option_3_p_0(ArgsGlobals_19, (MR_Integer) 673, &OptionsFiles_21);
  make__options_file__read_options_files_named_in_options_file_option_7_p_0(OptionSearchDirectories_20, OptionsFiles_21, &Variables0_22, &OptFileNonUndefSpecs_23, &OptFileUndefSpecs_24);
  libs__globals__lookup_bool_option_3_p_0(ArgsGlobals_19, (MR_Integer) 33, &WarnUndef_25);
  switch (WarnUndef_25) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      OptFileSpecs_26 = OptFileNonUndefSpecs_23;
      break;
    case (MR_Integer) 1:
      OptFileSpecs_26 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), OptFileNonUndefSpecs_23, OptFileUndefSpecs_24);
      break;
  }
  OptFileErrors_27 = parse_tree__error_util__contains_errors_2_f_0(ArgsGlobals_19, OptFileSpecs_26);
  mercury__io__environment__get_environment_var_map_3_p_0(&EnvVarMap_28);
  switch (OptFileErrors_27) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word OptFileOkSpecs_29;
        MR_Word MaybeMCFlags0_41;
        MR_String DumpOptionsFile_81;

        libs__globals__lookup_string_option_3_p_0(ArgsGlobals_19, (MR_Integer) 200, &DumpOptionsFile_81);
        succeeded = (strcmp(DumpOptionsFile_81, (MR_String) "") == 0);
        if (!(succeeded))
        {
          MR_Word StdErrStream_82;

          mercury__io__stderr_stream_3_p_0(&StdErrStream_82);
          make__options_file__dump_options_file_5_p_0(StdErrStream_82, DumpOptionsFile_81, Variables0_22);
        }
        make__options_file__lookup_mmc_options_2_p_0(Variables0_22, &MaybeMCFlags0_41);
        if (((MR_tag((MR_Word) MaybeMCFlags0_41)) == (MR_Integer) 0))
        {
          OptFileOkSpecs_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeMCFlags0_41, (MR_Integer) 0))));
          *DetectedGradeFlags_11 = (MR_Word) ((MR_Unsigned) 0U);
          *Variables_12 = make__options_file__options_variables_init_1_f_0(EnvVarMap_28);
          *MaybeMCFlags_13 = (MR_Word) ((MR_Unsigned) 0U);
        }
        else
        {
          MR_Word MCFlags0_42 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeMCFlags0_41, (MR_Integer) 0))));
          MR_Word FlagsSpecs_45;
          MR_Word FlagsArgsGlobals_46;
          MR_Word Var_68;
          MR_Word Var_43;
          MR_Word Var_44;

          Var_68 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), MCFlags0_42, CmdLineArgs_10);
          libs__handle_options__handle_given_options_7_p_0(Var_68, &Var_43, &Var_44, &FlagsSpecs_45, &FlagsArgsGlobals_46);
          if ((FlagsSpecs_45 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            MR_Word MaybeConfigFile_49;

            libs__globals__lookup_maybe_string_option_3_p_0(FlagsArgsGlobals_46, (MR_Integer) 674, &MaybeConfigFile_49);
            if ((MaybeConfigFile_49 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              MR_Word Errors_61;
              MR_Word MaybeMCFlags1_75;

              *DetectedGradeFlags_11 = (MR_Word) ((MR_Unsigned) 0U);
              *Variables_12 = make__options_file__options_variables_init_1_f_0(EnvVarMap_28);
              make__options_file__lookup_mmc_options_2_p_0(*Variables_12, &MaybeMCFlags1_75);
              OptFileOkSpecs_29 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&top_level__mercury_compile_main_scalar_common_1[0]), MaybeMCFlags1_75);
              Errors_61 = parse_tree__error_util__contains_errors_2_f_0(FlagsArgsGlobals_46, OptFileOkSpecs_29);
              switch (Errors_61) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word MCFlags1_74;
                    MR_Box conv0_MCFlags1_74;

                    parse_tree__maybe_error__det_project_ok1_2_p_0((MR_Word) (&top_level__mercury_compile_main_scalar_common_1[0]), MaybeMCFlags1_75, &conv0_MCFlags1_74);
                    MCFlags1_74 = ((MR_Word) (conv0_MCFlags1_74));
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      *MaybeMCFlags_13 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MCFlags1_74));
                    }
                  }
                  break;
                case (MR_Integer) 1:
                  *MaybeMCFlags_13 = (MR_Word) ((MR_Unsigned) 0U);
                  break;
              }
            }
            else
            {
              MR_String ConfigFile_50 = ((MR_String) ((MR_hl_field(MR_mktag(1), MaybeConfigFile_49, (MR_Integer) 0))));
              MR_Word ConfigNonUndefSpecs_51;
              MR_Word ConfigUndefSpecs_52;
              MR_Word ConfigSpecs_53;
              MR_Word ConfigErrors_54;

              make__options_file__read_named_options_file_7_p_0(ConfigFile_50, Variables0_22, Variables_12, &ConfigNonUndefSpecs_51, &ConfigUndefSpecs_52);
              switch (WarnUndef_25) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  ConfigSpecs_53 = ConfigNonUndefSpecs_51;
                  break;
                case (MR_Integer) 1:
                  ConfigSpecs_53 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), ConfigNonUndefSpecs_51, ConfigUndefSpecs_52);
                  break;
              }
              ConfigErrors_54 = parse_tree__error_util__contains_errors_2_f_0(FlagsArgsGlobals_46, ConfigSpecs_53);
              switch (ConfigErrors_54) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word MaybeMCFlags1_55;
                    MR_Word Specs0_56;
                    MR_Word Errors0_57;
                    MR_Word MaybeConfigMerStdLibDir_60;
                    MR_Word Var_72;
                    MR_Word Var_73;
                    MR_Word _MaybeStdLibGrades_59;

                    make__options_file__lookup_mmc_options_2_p_0(*Variables_12, &MaybeMCFlags1_55);
                    Var_72 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&top_level__mercury_compile_main_scalar_common_1[0]), MaybeMCFlags1_55);
                    Specs0_56 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), ConfigSpecs_53, Var_72);
                    Errors0_57 = parse_tree__error_util__contains_errors_2_f_0(FlagsArgsGlobals_46, Specs0_56);
                    switch (Errors0_57) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                          MR_Word MCFlags1_58;
                          MR_Box conv1_MCFlags1_58;

                          parse_tree__maybe_error__det_project_ok1_2_p_0((MR_Word) (&top_level__mercury_compile_main_scalar_common_1[0]), MaybeMCFlags1_55, &conv1_MCFlags1_58);
                          MCFlags1_58 = ((MR_Word) (conv1_MCFlags1_58));
                          {
                            MR_Word base;
                            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                            *MaybeMCFlags_13 = base;
                            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MCFlags1_58));
                          }
                        }
                        break;
                      case (MR_Integer) 1:
                        *MaybeMCFlags_13 = (MR_Word) ((MR_Unsigned) 0U);
                        break;
                    }
                    libs__check_libgrades__maybe_detect_stdlib_grades_6_p_0(FlagsArgsGlobals_46, *Variables_12, &_MaybeStdLibGrades_59, DetectedGradeFlags_11);
                    make__options_file__lookup_mercury_stdlib_dir_2_p_0(*Variables_12, &MaybeConfigMerStdLibDir_60);
                    Var_73 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&top_level__mercury_compile_main_scalar_common_1[0]), MaybeConfigMerStdLibDir_60);
                    OptFileOkSpecs_29 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Specs0_56, Var_73);
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    *DetectedGradeFlags_11 = (MR_Word) ((MR_Unsigned) 0U);
                    *MaybeMCFlags_13 = (MR_Word) ((MR_Unsigned) 0U);
                    OptFileOkSpecs_29 = ConfigSpecs_53;
                  }
                  break;
              }
            }
          }
          else
          {
            *DetectedGradeFlags_11 = (MR_Word) ((MR_Unsigned) 0U);
            *Variables_12 = make__options_file__options_variables_init_1_f_0(EnvVarMap_28);
            *MaybeMCFlags_13 = (MR_Word) ((MR_Unsigned) 0U);
            OptFileOkSpecs_29 = FlagsSpecs_45;
          }
        }
        *Specs_16 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), OptFileSpecs_26, OptFileOkSpecs_29);
      }
      break;
    case (MR_Integer) 1:
      {
        *DetectedGradeFlags_11 = (MR_Word) ((MR_Unsigned) 0U);
        *Variables_12 = make__options_file__options_variables_init_1_f_0(EnvVarMap_28);
        *MaybeMCFlags_13 = (MR_Word) ((MR_Unsigned) 0U);
        *Specs_16 = OptFileSpecs_26;
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
      MR_String Arg_9 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Args_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_String File_13;

      succeeded = mercury__string__remove_prefix_3_p_0((MR_String) "\100", Arg_9, &File_13);
      if (succeeded)
      {
        MR_Word OpenRes_14;

        mercury__io__open_input_4_p_0(File_13, &OpenRes_14);
        if (((MR_tag((MR_Word) OpenRes_14)) == (MR_Integer) 1))
        {
          MR_String Msg_20;
          MR_String Var_28;
          MR_Word Var_30;

          Var_28 = mercury__string__f_43_43_2_f_0(File_13, (MR_String) "\'");
          Msg_20 = mercury__string__f_43_43_2_f_0((MR_String) "mercury_compile: cannot open \'", Var_28);
          Var_30 = mercury__io__make_io_error_1_f_0(Msg_20);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *HeadVar__2_2 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_30));
          }
        }
        else
        {
          MR_Word S_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OpenRes_14, (MR_Integer) 0))));
          MR_Word ReadRes_16;

          top_level__mercury_compile_main__expand_file_into_arg_list_4_p_0(S_15, &ReadRes_16);
          if (((MR_tag((MR_Word) ReadRes_16)) == (MR_Integer) 1))
          {
            MR_Word E_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ReadRes_16, (MR_Integer) 0))));
            MR_Word Var_32;
            MR_String Var_41;
            MR_String Var_43;
            MR_String Var_44;
            MR_String Var_46;

            Var_46 = mercury__io__error_message_1_f_0(E_18);
            Var_44 = mercury__string__f_43_43_2_f_0((MR_String) "\' the following error occurred: ", Var_46);
            Var_43 = mercury__string__f_43_43_2_f_0(File_13, Var_44);
            Var_41 = mercury__string__f_43_43_2_f_0((MR_String) "While attempting to process \'", Var_43);
            Var_32 = mercury__io__make_io_error_1_f_0(Var_41);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *HeadVar__2_2 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_32));
            }
          }
          else
          {
            MR_Word FileArgs_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ReadRes_16, (MR_Integer) 0))));
            MR_Word Var_33;
            MR_Word next_value_of_HeadVar__1_1;

            Var_33 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), FileArgs_17, Args_10);
            // direct tailcall eliminated
            ;
            next_value_of_HeadVar__1_1 = Var_33;
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
          MR_Word ExpandedArgs_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Result0_21, (MR_Integer) 0))));
          MR_Word Var_36;

          {
            Var_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_36, 0) = ((MR_Box) (Arg_9));
            MR_hl_field(MR_mktag(1), Var_36, 1) = ((MR_Box) (ExpandedArgs_22));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            *HeadVar__2_2 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_36));
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
        MR_String Line_9 = ((MR_String) ((MR_hl_field(MR_mktag(1), LineRes_8, (MR_Integer) 0))));
        MR_Word Res0_10;

        top_level__mercury_compile_main__expand_file_into_arg_list_4_p_0(S_5, &Res0_10);
        if (((MR_tag((MR_Word) Res0_10)) == (MR_Integer) 1))
          *Res_6 = Res0_10;
        else
        {
          MR_Word Lines_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Res0_10, (MR_Integer) 0))));
          MR_String StrippedLine_12;

          StrippedLine_12 = mercury__string__strip_1_f_0(Line_9);
          succeeded = (strcmp(StrippedLine_12, (MR_String) "") == 0);
          if (succeeded)
            *Res_6 = Res0_10;
          else
          {
            MR_Word Var_20;

            {
              Var_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_20, 0) = ((MR_Box) (StrippedLine_12));
              MR_hl_field(MR_mktag(1), Var_20, 1) = ((MR_Box) (Lines_11));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              *Res_6 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_20));
            }
          }
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word E_14 = ((MR_Word) ((MR_hl_field(MR_mktag(2), LineRes_8, (MR_Integer) 0))));

        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *Res_6 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (E_14));
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
