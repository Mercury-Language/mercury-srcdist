/*
** Automatically generated from `mercury_compile_main.m'
** by the Mercury compiler,
** version rotd-2023-07-01
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
#include "libs.maybe_util.mih"
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



struct top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_query__716__1_1_p_0_env_0_s {
  MR_String * top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_query__716__1_1_p_0_env_0__LambdaHeadVar__1_62;
  MR_Cont top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_query__716__1_1_p_0_env_0__cont;
  void * top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_query__716__1_1_p_0_env_0__cont_env_ptr;
  MR_String top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_query__716__1_1_p_0_env_0__ModuleName_27;
  MR_Word top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_query__716__1_1_p_0_env_0__DocUndoc_28;
  MR_String top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_query__716__1_1_p_0_env_0__DocStr_29;
  MR_String top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_query__716__1_1_p_0_env_0__Var_63;
  MR_String top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_query__716__1_1_p_0_env_0__Var_64;
  MR_String top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_query__716__1_1_p_0_env_0__Var_65;
  MR_String top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_query__716__1_1_p_0_env_0__Var_66;
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
top_level__mercury_compile_main__IntroducedFrom__pred__read_augment_and_process_module_ok__1445__1_2_p_0(
  MR_Word ModulesToRecompile_35,
  MR_Word LambdaHeadVar__1_49);

static MR_bool MR_CALL 
top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_args__793__1_2_p_0(
  MR_Word InvokedByMmcMake_21,
  MR_Word HeadVar__2_60);

static void MR_CALL 
top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_query__716__1_1_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_query__716__1_1_p_0(
  MR_String * LambdaHeadVar__1_62,
  MR_Cont cont,
  void * cont_env_ptr);

static void MR_CALL 
top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_query__709__1_4_p_0(
  MR_Word StdOutStream_12,
  MR_String HeadVar__2_87);

static void MR_CALL 
top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_query__702__1_4_p_0(
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
top_level__mercury_compile_main__augment_and_process_module_18_p_0(
  MR_Word ProgressStream_19,
  MR_Word ErrorStream_20,
  MR_Word Globals_21,
  MR_Word OpModeAugment_22,
  MR_Word InvokedByMmcMake_23,
  MR_String SourceFileName_24,
  MR_Word MaybeTimestamp_25,
  MR_Word SourceFileModuleName_26,
  MR_Word NestedSubModules_27,
  MR_Word FindTimestampFiles_28,
  MR_Word ParseTreeModuleSrc_29,
  MR_Word * ExtraObjFiles_30,
  MR_Word STATE_VARIABLE_Specs_0_40,
  MR_Word * STATE_VARIABLE_Specs_41,
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_0_42,
  MR_Word * STATE_VARIABLE_HaveReadModuleMaps_43);

static void MR_CALL 
top_level__mercury_compile_main__process_augmented_module_17_p_0(
  MR_Word ProgressStream_18,
  MR_Word ErrorStream_19,
  MR_Word Globals0_20,
  MR_Word OpModeAugment_21,
  MR_Word InvokedByMmcMake_22,
  MR_Word Baggage_23,
  MR_Word AugCompUnit_24,
  MR_Word FindTimestampFiles_25,
  MR_Word * ExtraObjFiles_26,
  MR_Word STATE_VARIABLE_DumpInfo_0_61,
  MR_Word * STATE_VARIABLE_DumpInfo_62,
  MR_Word STATE_VARIABLE_Specs_0_63,
  MR_Word * STATE_VARIABLE_Specs_64,
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_0_65,
  MR_Word * STATE_VARIABLE_HaveReadModuleMaps_66);

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
  MR_Word STATE_VARIABLE_HLDS_0_61,
  MR_Word * ExtraObjFiles_24,
  MR_Word STATE_VARIABLE_Specs_0_62,
  MR_Word * STATE_VARIABLE_Specs_63,
  MR_Word STATE_VARIABLE_DumpInfo_0_64,
  MR_Word * STATE_VARIABLE_DumpInfo_65);

static void MR_CALL 
top_level__mercury_compile_main__maybe_output_prof_call_graph_8_p_0(
  MR_Word ProgressStream_9,
  MR_Word ErrorStream_10,
  MR_Word Verbose_11,
  MR_Word Stats_12,
  MR_Word STATE_VARIABLE_HLDS_0_24,
  MR_Word * STATE_VARIABLE_HLDS_25);

static MR_Box MR_CALL 
top_level__mercury_compile_main__prepare_for_intermodule_analysis_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
top_level__mercury_compile_main__prepare_for_intermodule_analysis_9_p_0(
  MR_Word ProgressStream_10,
  MR_Word Globals_11,
  MR_Word Verbose_12,
  MR_Word Stats_13,
  MR_Word * Specs_14,
  MR_Word STATE_VARIABLE_HLDS_0_23,
  MR_Word * STATE_VARIABLE_HLDS_24);

static MR_Box MR_CALL 
top_level__mercury_compile_main__maybe_prepare_for_intermodule_analysis_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
top_level__mercury_compile_main__maybe_prepare_for_intermodule_analysis_9_p_0(
  MR_Word ProgressStream_10,
  MR_Word Globals_11,
  MR_Word Verbose_12,
  MR_Word Stats_13,
  MR_Word * Specs_14,
  MR_Word STATE_VARIABLE_HLDS_0_18,
  MR_Word * STATE_VARIABLE_HLDS_19);

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
top_level__mercury_compile_main__find_timestamp_files_2_7_p_0(
  MR_Word Globals_8,
  MR_Word TimestampOtherExt_9,
  MR_Word TimestampNewExt_10,
  MR_Word ModuleName_11,
  MR_Word * TimestampFiles_12);

static void MR_CALL 
top_level__mercury_compile_main__usual_find_target_files_7_p_0(
  MR_Word Globals_8,
  MR_Word TargetOtherExt_9,
  MR_Word TargetNewExt_10,
  MR_Word ModuleName_11,
  MR_Word * TargetFiles_12);

static MR_bool MR_CALL 
top_level__mercury_compile_main__main_after_setup_9_p_0_2(
  MR_Box closure_arg);

static MR_bool MR_CALL 
top_level__mercury_compile_main__main_after_setup_9_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
top_level__mercury_compile_main__main_after_setup_9_p_0(
  MR_Word ProgressStream_10,
  MR_Word ErrorStream_11,
  MR_Word Globals_12,
  MR_Word DetectedGradeFlags_13,
  MR_Word OptionVariables_14,
  MR_Word OptionArgs_15,
  MR_Word Args_16);

static void MR_CALL 
top_level__mercury_compile_main__do_process_compiler_cmd_line_args_15_p_0(
  MR_Word ProgressStream_1,
  MR_Word ErrorStream_2,
  MR_Word Globals_3,
  MR_Word OpModeArgs_4,
  MR_Word InvokedByMmcMake_5,
  MR_Word OptionArgs_6,
  MR_Word HeadVar__7_7,
  MR_Word STATE_VARIABLE_Modules_0_8,
  MR_Word * STATE_VARIABLE_Modules_9,
  MR_Word STATE_VARIABLE_ExtraObjFiles_0_10,
  MR_Word * STATE_VARIABLE_ExtraObjFiles_11,
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_0_12,
  MR_Word * STATE_VARIABLE_HaveReadModuleMaps_13);

static void MR_CALL 
top_level__mercury_compile_main__setup_and_process_compiler_cmd_line_args_19_p_0(
  MR_Word ProgressStream_1,
  MR_Word ErrorStream_2,
  MR_Word Globals_3,
  MR_Word OpModeArgs_4,
  MR_Word InvokedByMmcMake_5,
  MR_Word DetectedGradeFlags_6,
  MR_Word OptionVariables_7,
  MR_Word OptionArgs_8,
  MR_Word HeadVar__9_9,
  MR_Word STATE_VARIABLE_Modules_0_10,
  MR_Word * STATE_VARIABLE_Modules_11,
  MR_Word STATE_VARIABLE_ExtraObjFiles_0_12,
  MR_Word * STATE_VARIABLE_ExtraObjFiles_13,
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_0_14,
  MR_Word * STATE_VARIABLE_HaveReadModuleMaps_15,
  MR_Word STATE_VARIABLE_Specs_0_16,
  MR_Word * STATE_VARIABLE_Specs_17);

static void MR_CALL 
top_level__mercury_compile_main__setup_and_process_compiler_arg_17_p_0(
  MR_Word ProgressStream_18,
  MR_Word ErrorStream_19,
  MR_Word Globals_20,
  MR_Word OpModeArgs_21,
  MR_Word InvokedByMmcMake_22,
  MR_Word DetectedGradeFlags_23,
  MR_Word OptionVariables_24,
  MR_Word OptionArgs_25,
  MR_String Arg_26,
  MR_Word * ModulesToLink_27,
  MR_Word * ExtraObjFiles_28,
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_0_39,
  MR_Word * STATE_VARIABLE_HaveReadModuleMaps_40,
  MR_Word STATE_VARIABLE_Specs_0_41,
  MR_Word * STATE_VARIABLE_Specs_42);

static void MR_CALL 
top_level__mercury_compile_main__setup_and_process_compiler_stdin_args_19_p_0(
  MR_Word ProgressStream_20,
  MR_Word ErrorStream_21,
  MR_Word StdIn_22,
  MR_Word Globals_23,
  MR_Word OpModeArgs_24,
  MR_Word InvokedByMmcMake_25,
  MR_Word DetectedGradeFlags_26,
  MR_Word OptionVariables_27,
  MR_Word OptionArgs_28,
  MR_Word STATE_VARIABLE_Modules_0_43,
  MR_Word * STATE_VARIABLE_Modules_44,
  MR_Word STATE_VARIABLE_ExtraObjFiles_0_45,
  MR_Word * STATE_VARIABLE_ExtraObjFiles_46,
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_0_47,
  MR_Word * STATE_VARIABLE_HaveReadModuleMaps_48,
  MR_Word STATE_VARIABLE_Specs_0_49,
  MR_Word * STATE_VARIABLE_Specs_50);

static void MR_CALL 
top_level__mercury_compile_main__do_process_compiler_arg_13_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
top_level__mercury_compile_main__do_process_compiler_arg_13_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
top_level__mercury_compile_main__do_process_compiler_arg_13_p_0(
  MR_Word ProgressStream_14,
  MR_Word ErrorStream_15,
  MR_Word Globals0_16,
  MR_Word OpModeArgs_17,
  MR_Word InvokedByMmcMake_18,
  MR_Word OptionArgs_19,
  MR_Word FileOrModule_20,
  MR_Word * ModulesToLink_21,
  MR_Word * ExtraObjFiles_22,
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_0_40,
  MR_Word * STATE_VARIABLE_HaveReadModuleMaps_41);

static void MR_CALL 
top_level__mercury_compile_main__read_augment_and_process_module_14_p_0(
  MR_Word ProgressStream_15,
  MR_Word ErrorStream_16,
  MR_Word Globals0_17,
  MR_Word OpModeAugment_18,
  MR_Word InvokedByMmcMake_19,
  MR_Word OptionArgs_20,
  MR_Word FileOrModule_21,
  MR_Word MaybeModulesToRecompile_22,
  MR_Word * ModulesToLink_23,
  MR_Word * ExtraObjFiles_24,
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_0_38,
  MR_Word * STATE_VARIABLE_HaveReadModuleMaps_39);

static void MR_CALL 
top_level__mercury_compile_main__read_augment_and_process_module_ok_16_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
top_level__mercury_compile_main__read_augment_and_process_module_ok_16_p_0_4(
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
top_level__mercury_compile_main__read_augment_and_process_module_ok_16_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static MR_Box MR_CALL 
top_level__mercury_compile_main__read_augment_and_process_module_ok_16_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
top_level__mercury_compile_main__read_augment_and_process_module_ok_16_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
top_level__mercury_compile_main__read_augment_and_process_module_ok_16_p_0(
  MR_Word ProgressStream_17,
  MR_Word ErrorStream_18,
  MR_Word Globals_19,
  MR_Word OpModeAugment_20,
  MR_Word InvokedByMmcMake_21,
  MR_String FileName_22,
  MR_Word MaybeTimestamp_23,
  MR_Word ParseTreeSrc_24,
  MR_Word Errors_25,
  MR_Word MaybeModulesToRecompile_26,
  MR_Word * ModulesToLink_27,
  MR_Word * ExtraObjFiles_28,
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_0_45,
  MR_Word * STATE_VARIABLE_HaveReadModuleMaps_46);

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
top_level__mercury_compile_main__do_op_mode_standalone_interface_6_p_0(
  MR_Word ProgressStream_7,
  MR_Word ErrorStream_8,
  MR_Word Globals_9,
  MR_String StandaloneIntBasename_10);

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


static /* final */ const MR_Box top_level__mercury_compile_main_scalar_common_1[21][2];

static /* final */ const MR_Box top_level__mercury_compile_main_scalar_common_2[8][1];

static /* final */ const MR_Box top_level__mercury_compile_main_scalar_common_3[1][7];

static /* final */ const MR_Box top_level__mercury_compile_main_scalar_common_4[1][4];

static /* final */ const MR_Box top_level__mercury_compile_main_scalar_common_5[5][3];

static /* final */ const MR_Box top_level__mercury_compile_main_scalar_common_6[1][15];

static /* final */ const MR_Box top_level__mercury_compile_main_scalar_common_7[3][10];

static /* final */ const MR_Box top_level__mercury_compile_main_scalar_common_8[5][5];

static /* final */ const MR_Box top_level__mercury_compile_main_scalar_common_9[1][21];




static /* final */ const MR_Box top_level__mercury_compile_main_scalar_common_1[21][2] = {
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
  /* row  11 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 14U)),
    (MR_Box) ((MR_Unsigned) 5U)
  },
  /* row  12 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 2U)),
    (MR_Box) ((MR_Unsigned) 0U)
  },
  /* row  13 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 2U)),
    (MR_Box) ((MR_Unsigned) 1U)
  },
  /* row  14 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 3U)),
    (MR_Box) ((MR_Unsigned) 0U)
  },
  /* row  15 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    (MR_Box) ((MR_Unsigned) 0U)
  },
  /* row  16 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    (MR_Box) ((MR_Unsigned) 1U)
  },
  /* row  17 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    (MR_Box) ((MR_Unsigned) 2U)
  },
  /* row  18 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 14U)),
    (MR_Box) ((MR_Unsigned) 0U)
  },
  /* row  19 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 19U)),
    (MR_Box) ((MR_Unsigned) 0U)
  },
  /* row  20 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 18U)),
    (MR_Box) ((MR_Unsigned) 2U)
  },
};

static /* final */ const MR_Box top_level__mercury_compile_main_scalar_common_2[8][1] = {
  /* row   0 */
  { ((MR_Box) ((MR_Unsigned) 0U)) },
  /* row   1 */
  { (MR_Box) ((MR_Unsigned) 0U) },
  /* row   2 */
  { ((MR_Box) (((MR_Box) ((MR_String) ".ugly")))) },
  /* row   3 */
  { ((MR_Box) (((MR_Box) ((MR_String) ".dependency_graph")))) },
  /* row   4 */
  { ((MR_Box) (((MR_Box) ((MR_String) ".used")))) },
  /* row   5 */
  { ((MR_Box) (((MR_Box) ((MR_String) ".c")))) },
  /* row   6 */
  { ((MR_Box) (((MR_Box) ((MR_String) ".java")))) },
  /* row   7 */
  { ((MR_Box) (((MR_Box) ((MR_String) ".prof")))) },
};

static /* final */ const MR_Box top_level__mercury_compile_main_scalar_common_3[1][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
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
    ((MR_Box) (top_level__mercury_compile_main__read_augment_and_process_module_ok_16_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   2 */
  {
    ((MR_Box) (&top_level__mercury_compile_main_scalar_common_8[2])),
    ((MR_Box) (top_level__mercury_compile_main__read_augment_and_process_module_ok_16_p_0_5)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   3 */
  {
    ((MR_Box) (&top_level__mercury_compile_main_scalar_common_8[4])),
    ((MR_Box) (top_level__mercury_compile_main__maybe_prepare_for_intermodule_analysis_9_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   4 */
  {
    ((MR_Box) (&top_level__mercury_compile_main_scalar_common_8[4])),
    ((MR_Box) (top_level__mercury_compile_main__prepare_for_intermodule_analysis_9_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box top_level__mercury_compile_main_scalar_common_6[1][15] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 12)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&top_level__mercury_compile_main__maybe__pti_maybe_1__plain_libs__timestamp__type_ctor_info_timestamp_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_module_src_0)),
    ((MR_Box) (&libs__maybe_util__libs__maybe_util__type_ctor_info_maybe_succeeded_0)),
    ((MR_Box) (&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_maps_0)),
    ((MR_Box) (&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_maps_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box top_level__mercury_compile_main_scalar_common_7[3][10] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_module_src_0)),
    ((MR_Box) (&libs__maybe_util__libs__maybe_util__type_ctor_info_maybe_succeeded_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&parse_tree__file_names__parse_tree__file_names__type_ctor_info_other_ext_0)),
    ((MR_Box) (&parse_tree__file_names__parse_tree__file_names__type_ctor_info_newext_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&top_level__mercury_compile_main__list__pti_list_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&libs__maybe_util__libs__maybe_util__type_ctor_info_maybe_succeeded_0)),
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
    ((MR_Box) (&libs__op_mode__libs__op_mode__type_ctor_info_op_mode_invoked_by_mmc_make_0)),
    ((MR_Box) (&libs__op_mode__libs__op_mode__type_ctor_info_op_mode_invoked_by_mmc_make_0))
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

static /* final */ const MR_Box top_level__mercury_compile_main_scalar_common_9[1][21] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 18)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&libs__op_mode__libs__op_mode__type_ctor_info_op_mode_augment_0)),
    ((MR_Box) (&libs__op_mode__libs__op_mode__type_ctor_info_op_mode_invoked_by_mmc_make_0)),
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
  { (MR_PseudoTypeInfo) (&libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 top_level__mercury_compile_main__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 top_level__mercury_compile_main__list__pti_list_1__plain_builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 top_level__mercury_compile_main__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  { (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0) }
};

static const MR_FA_TypeInfo_Struct1 top_level__mercury_compile_main__list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) }
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
  { (MR_PseudoTypeInfo) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0) }
};

static const MR_PseudoTypeInfo top_level__mercury_compile_main__top_level__mercury_compile_main__field_types_file_or_module_0_0[1] = { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) };

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

static const MR_PseudoTypeInfo top_level__mercury_compile_main__top_level__mercury_compile_main__field_types_file_or_module_0_1[1] = { (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0) };

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

static const MR_DuFunctorDescPtr top_level__mercury_compile_main__top_level__mercury_compile_main__du_stag_ordered_file_or_module_0_0[1] = { &top_level__mercury_compile_main__top_level__mercury_compile_main__du_functor_desc_file_or_module_0_0 };

static const MR_DuFunctorDescPtr top_level__mercury_compile_main__top_level__mercury_compile_main__du_stag_ordered_file_or_module_0_1[1] = { &top_level__mercury_compile_main__top_level__mercury_compile_main__du_functor_desc_file_or_module_0_1 };

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
top_level__mercury_compile_main__IntroducedFrom__pred__read_augment_and_process_module_ok__1445__1_2_p_0(
  MR_Word ModulesToRecompile_35,
  MR_Word LambdaHeadVar__1_49)
{
  MR_bool succeeded;
  MR_Word Var_50 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__1_49, (MR_Integer) 0))));

  succeeded = mercury__list__member_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (Var_50)), ModulesToRecompile_35);
  return succeeded;
}

static MR_bool MR_CALL 
top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_args__793__1_2_p_0(
  MR_Word InvokedByMmcMake_21,
  MR_Word HeadVar__2_60)
{
  MR_bool succeeded = (InvokedByMmcMake_21 == HeadVar__2_60);

  return succeeded;
}

static void MR_CALL 
top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_query__716__1_1_p_0_1(
  void * env_ptr_arg)
{
  struct top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_query__716__1_1_p_0_env_0_s * env_ptr = (struct top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_query__716__1_1_p_0_env_0_s *) (env_ptr_arg);

  switch ((env_ptr)->top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_query__716__1_1_p_0_env_0__DocUndoc_28) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      (env_ptr)->top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_query__716__1_1_p_0_env_0__DocStr_29 = (MR_String) "DOC";
      break;
    case (MR_Integer) 1:
      (env_ptr)->top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_query__716__1_1_p_0_env_0__DocStr_29 = (MR_String) "UNDOC";
      break;
  }
  (env_ptr)->top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_query__716__1_1_p_0_env_0__Var_64 = (MR_String) " ";
  (env_ptr)->top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_query__716__1_1_p_0_env_0__Var_66 = (MR_String) ".m\n";
  (env_ptr)->top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_query__716__1_1_p_0_env_0__Var_65 = mercury__string__f_43_43_2_f_0((env_ptr)->top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_query__716__1_1_p_0_env_0__ModuleName_27, (env_ptr)->top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_query__716__1_1_p_0_env_0__Var_66);
  (env_ptr)->top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_query__716__1_1_p_0_env_0__Var_63 = mercury__string__f_43_43_2_f_0((env_ptr)->top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_query__716__1_1_p_0_env_0__Var_64, (env_ptr)->top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_query__716__1_1_p_0_env_0__Var_65);
  *((env_ptr)->top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_query__716__1_1_p_0_env_0__LambdaHeadVar__1_62) = mercury__string__f_43_43_2_f_0((env_ptr)->top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_query__716__1_1_p_0_env_0__DocStr_29, (env_ptr)->top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_query__716__1_1_p_0_env_0__Var_63);
  ((env_ptr)->top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_query__716__1_1_p_0_env_0__cont)((env_ptr)->top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_query__716__1_1_p_0_env_0__cont_env_ptr);
}

static void MR_CALL 
top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_query__716__1_1_p_0(
  MR_String * LambdaHeadVar__1_62,
  MR_Cont cont,
  void * cont_env_ptr)
{
  struct top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_query__716__1_1_p_0_env_0_s env;

  (env).top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_query__716__1_1_p_0_env_0__LambdaHeadVar__1_62 = LambdaHeadVar__1_62;
  (env).top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_query__716__1_1_p_0_env_0__cont = cont;
  (env).top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_query__716__1_1_p_0_env_0__cont_env_ptr = cont_env_ptr;
  mercury__library__stdlib_module_doc_undoc_2_p_1(&(env).top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_query__716__1_1_p_0_env_0__ModuleName_27, &(env).top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_query__716__1_1_p_0_env_0__DocUndoc_28, top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_query__716__1_1_p_0_1, &env);
}

static void MR_CALL 
top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_query__709__1_4_p_0(
  MR_Word StdOutStream_12,
  MR_String HeadVar__2_87)
{
  mercury__io__print_line_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), StdOutStream_12, ((MR_Box) (HeadVar__2_87)));
}

static void MR_CALL 
top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_query__702__1_4_p_0(
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
top_level__mercury_compile_main__augment_and_process_module_18_p_0(
  MR_Word ProgressStream_19,
  MR_Word ErrorStream_20,
  MR_Word Globals_21,
  MR_Word OpModeAugment_22,
  MR_Word InvokedByMmcMake_23,
  MR_String SourceFileName_24,
  MR_Word MaybeTimestamp_25,
  MR_Word SourceFileModuleName_26,
  MR_Word NestedSubModules_27,
  MR_Word FindTimestampFiles_28,
  MR_Word ParseTreeModuleSrc_29,
  MR_Word * ExtraObjFiles_30,
  MR_Word STATE_VARIABLE_Specs_0_40,
  MR_Word * STATE_VARIABLE_Specs_41,
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_0_42,
  MR_Word * STATE_VARIABLE_HaveReadModuleMaps_43)
{
  MR_bool succeeded;
  MR_Word ModuleName_34;
  MR_Word MaybeTopModule_35;
  MR_Word Baggage_36;
  MR_Word AugCompUnit_37;
  MR_Word Errors_38;
  MR_Word STATE_VARIABLE_Specs_46_46;
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_47_47;
  MR_Word STATE_VARIABLE_Specs_49_49;
  MR_Word Var_50;
  MR_Word Var_51;

  parse_tree__check_module_interface__check_module_interface_for_no_exports_4_p_0(Globals_21, ParseTreeModuleSrc_29, STATE_VARIABLE_Specs_0_40, &STATE_VARIABLE_Specs_46_46);
  ModuleName_34 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_29, (MR_Integer) 0))));
  succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ModuleName_34, SourceFileModuleName_26);
  if (succeeded)
    {
      MaybeTopModule_35 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, MaybeTopModule_35, 0) = ((MR_Box) (NestedSubModules_27));
    }
  else
    MaybeTopModule_35 = (MR_Word) ((MR_Unsigned) 0U);
  parse_tree__grab_modules__grab_qual_imported_modules_augment_13_p_0(ProgressStream_19, Globals_21, SourceFileName_24, SourceFileModuleName_26, MaybeTimestamp_25, MaybeTopModule_35, ParseTreeModuleSrc_29, &Baggage_36, &AugCompUnit_37, STATE_VARIABLE_HaveReadModuleMaps_0_42, &STATE_VARIABLE_HaveReadModuleMaps_47_47);
  Errors_38 = ((MR_Word) ((MR_hl_field(0, Baggage_36, (MR_Integer) 6))));
  Var_50 = parse_tree__parse_error__get_read_module_specs_1_f_0(Errors_38);
  STATE_VARIABLE_Specs_49_49 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), Var_50, STATE_VARIABLE_Specs_46_46);
  Var_51 = ((MR_Word) ((MR_hl_field(0, Errors_38, (MR_Integer) 0))));
  succeeded = mercury__set__is_empty_1_p_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_fatal_read_module_error_0), Var_51);
  if (succeeded)
  {
    MR_Word Var_39;

    top_level__mercury_compile_main__process_augmented_module_17_p_0(ProgressStream_19, ErrorStream_20, Globals_21, OpModeAugment_22, InvokedByMmcMake_23, Baggage_36, AugCompUnit_37, FindTimestampFiles_28, ExtraObjFiles_30, (MR_Word) ((MR_Unsigned) 0U), &Var_39, STATE_VARIABLE_Specs_49_49, STATE_VARIABLE_Specs_41, STATE_VARIABLE_HaveReadModuleMaps_47_47, STATE_VARIABLE_HaveReadModuleMaps_43);
  }
  else
  {
    *ExtraObjFiles_30 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_HaveReadModuleMaps_43 = STATE_VARIABLE_HaveReadModuleMaps_47_47;
    *STATE_VARIABLE_Specs_41 = STATE_VARIABLE_Specs_49_49;
  }
}

static void MR_CALL 
top_level__mercury_compile_main__process_augmented_module_17_p_0(
  MR_Word ProgressStream_18,
  MR_Word ErrorStream_19,
  MR_Word Globals0_20,
  MR_Word OpModeAugment_21,
  MR_Word InvokedByMmcMake_22,
  MR_Word Baggage_23,
  MR_Word AugCompUnit_24,
  MR_Word FindTimestampFiles_25,
  MR_Word * ExtraObjFiles_26,
  MR_Word STATE_VARIABLE_DumpInfo_0_61,
  MR_Word * STATE_VARIABLE_DumpInfo_62,
  MR_Word STATE_VARIABLE_Specs_0_63,
  MR_Word * STATE_VARIABLE_Specs_64,
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_0_65,
  MR_Word * STATE_VARIABLE_HaveReadModuleMaps_66)
{
  MR_bool succeeded;
  MR_Word Globals_31;
  MR_Word WriteDFile_32;
  MR_Word HLDS1_34;
  MR_Word QualInfo_35;
  MR_Word MaybeTimestampMap_36;
  MR_Word UndefTypes_37;
  MR_Word UndefModes_38;
  MR_Word PreHLDSErrors_39;
  MR_Word FrontEndErrors_40;
  MR_Word HLDS20_41;
  MR_Integer ExitStatus_42;
  MR_Word STATE_VARIABLE_DumpInfo_69_69;
  MR_Word STATE_VARIABLE_Specs_70_70;
  MR_Word STATE_VARIABLE_DumpInfo_73_73;
  MR_Word STATE_VARIABLE_Specs_74_74;
  MR_Word Var_77;

  switch (MR_tag((MR_Word) OpModeAugment_21)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(OpModeAugment_21)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            top_level__mercury_compile_main__disable_warning_options_2_p_0(Globals0_20, &Globals_31);
            WriteDFile_32 = (MR_Integer) 0;
          }
          break;
        case (MR_Integer) 1:
          {
            top_level__mercury_compile_main__disable_warning_options_2_p_0(Globals0_20, &Globals_31);
            WriteDFile_32 = (MR_Integer) 1;
          }
          break;
        case (MR_Integer) 2:
        case (MR_Integer) 3:
          {
            Globals_31 = Globals0_20;
            WriteDFile_32 = (MR_Integer) 1;
          }
          break;
        case (MR_Integer) 4:
        case (MR_Integer) 5:
          {
            Globals_31 = Globals0_20;
            WriteDFile_32 = (MR_Integer) 0;
          }
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        Globals_31 = Globals0_20;
        WriteDFile_32 = (MR_Integer) 1;
      }
      break;
  }
  top_level__mercury_compile_make_hlds__make_hlds_pass_22_p_0(ProgressStream_18, ErrorStream_19, Globals_31, OpModeAugment_21, InvokedByMmcMake_22, WriteDFile_32, Baggage_23, AugCompUnit_24, &HLDS1_34, &QualInfo_35, &MaybeTimestampMap_36, &UndefTypes_37, &UndefModes_38, &PreHLDSErrors_39, STATE_VARIABLE_DumpInfo_0_61, &STATE_VARIABLE_DumpInfo_69_69, STATE_VARIABLE_Specs_0_63, &STATE_VARIABLE_Specs_70_70, STATE_VARIABLE_HaveReadModuleMaps_0_65, STATE_VARIABLE_HaveReadModuleMaps_66);
  top_level__mercury_compile_front_end__frontend_pass_16_p_0(ProgressStream_18, ErrorStream_19, OpModeAugment_21, QualInfo_35, UndefTypes_37, UndefModes_38, PreHLDSErrors_39, &FrontEndErrors_40, HLDS1_34, &HLDS20_41, STATE_VARIABLE_DumpInfo_69_69, &STATE_VARIABLE_DumpInfo_73_73, STATE_VARIABLE_Specs_70_70, &STATE_VARIABLE_Specs_74_74);
  mercury__io__get_exit_status_3_p_0(&ExitStatus_42);
  succeeded = (PreHLDSErrors_39 == (MR_Integer) 0);
  if (succeeded)
  {
    succeeded = (FrontEndErrors_40 == (MR_Integer) 0);
    if (succeeded)
    {
      Var_77 = parse_tree__error_util__contains_errors_2_f_0(Globals_31, STATE_VARIABLE_Specs_74_74);
      succeeded = (Var_77 == (MR_Integer) 0);
      if (succeeded)
        succeeded = (ExitStatus_42 == (MR_Integer) 0);
    }
  }
  if (succeeded)
  {
    MR_Word Verbose_43;
    MR_Word Stats_44;
    MR_Word HLDS21_45;

    libs__globals__lookup_bool_option_3_p_0(Globals_31, (MR_Integer) 72, &Verbose_43);
    libs__globals__lookup_bool_option_3_p_0(Globals_31, (MR_Integer) 82, &Stats_44);
    top_level__mercury_compile_main__maybe_write_dependency_graph_8_p_0(ProgressStream_18, ErrorStream_19, Verbose_43, Stats_44, HLDS20_41, &HLDS21_45);
    switch (MR_tag((MR_Word) OpModeAugment_21)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(OpModeAugment_21)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              *ExtraObjFiles_26 = (MR_Word) ((MR_Unsigned) 0U);
              *STATE_VARIABLE_DumpInfo_62 = STATE_VARIABLE_DumpInfo_73_73;
              *STATE_VARIABLE_Specs_64 = STATE_VARIABLE_Specs_74_74;
            }
            break;
          case (MR_Integer) 1:
            {
              top_level__mercury_compile_middle_passes__output_trans_opt_file_9_p_0(ProgressStream_18, ErrorStream_19, HLDS21_45, STATE_VARIABLE_Specs_74_74, STATE_VARIABLE_Specs_64, STATE_VARIABLE_DumpInfo_73_73, STATE_VARIABLE_DumpInfo_62);
              *ExtraObjFiles_26 = (MR_Word) ((MR_Unsigned) 0U);
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word AnalysisSpecs_53;
              MR_Word HLDS22_54;

              top_level__mercury_compile_main__prepare_for_intermodule_analysis_9_p_0(ProgressStream_18, Globals_31, Verbose_43, Stats_44, &AnalysisSpecs_53, HLDS21_45, &HLDS22_54);
              if ((AnalysisSpecs_53 == (MR_Word) ((MR_Unsigned) 0U)))
                top_level__mercury_compile_middle_passes__output_analysis_file_8_p_0(ProgressStream_18, HLDS22_54, STATE_VARIABLE_Specs_74_74, STATE_VARIABLE_Specs_64, STATE_VARIABLE_DumpInfo_73_73, STATE_VARIABLE_DumpInfo_62);
              else
              {
                *STATE_VARIABLE_Specs_64 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), AnalysisSpecs_53, STATE_VARIABLE_Specs_74_74);
                *STATE_VARIABLE_DumpInfo_62 = STATE_VARIABLE_DumpInfo_73_73;
              }
              *ExtraObjFiles_26 = (MR_Word) ((MR_Unsigned) 0U);
            }
            break;
          case (MR_Integer) 3:
            {
              check_hlds__xml_documentation__xml_documentation_3_p_0(HLDS21_45);
              *ExtraObjFiles_26 = (MR_Word) ((MR_Unsigned) 0U);
              *STATE_VARIABLE_DumpInfo_62 = STATE_VARIABLE_DumpInfo_73_73;
              *STATE_VARIABLE_Specs_64 = STATE_VARIABLE_Specs_74_74;
            }
            break;
          case (MR_Integer) 4:
            {
              *ExtraObjFiles_26 = (MR_Word) ((MR_Unsigned) 0U);
              *STATE_VARIABLE_DumpInfo_62 = STATE_VARIABLE_DumpInfo_73_73;
              *STATE_VARIABLE_Specs_64 = STATE_VARIABLE_Specs_74_74;
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word UnusedArgs_46;

              libs__globals__lookup_bool_option_3_p_0(Globals_31, (MR_Integer) 14, &UnusedArgs_46);
              switch (UnusedArgs_46) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  *STATE_VARIABLE_Specs_64 = STATE_VARIABLE_Specs_74_74;
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word OptTuple_47;
                    MR_Word NoOptUnusedArgsOptTuple_48;
                    MR_Word NoOptUnusedArgsGlobals_49;
                    MR_Word HLDS21a_50;
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
                    MR_Integer Var_217;
                    MR_Integer Var_218;
                    MR_Integer Var_219;
                    MR_Integer Var_220;
                    MR_Integer Var_221;
                    MR_Integer Var_222;
                    MR_Integer Var_223;
                    MR_Integer Var_224;
                    MR_Integer Var_225;
                    MR_Integer Var_226;
                    MR_String Var_227;
                    MR_Unsigned packed_word_0;
                    MR_Unsigned packed_word_1;
                    MR_Unsigned packed_word_2;
                    MR_Word _UnusedArgsInfos_51;
                    MR_Word _HLDS22_52;

                    libs__globals__get_opt_tuple_2_p_0(Globals_31, &OptTuple_47);
                    packed_word_0 = (MR_Unsigned) ((MR_hl_field(0, OptTuple_47, (MR_Integer) 0)));
                    packed_word_1 = (MR_Unsigned) ((MR_hl_field(0, OptTuple_47, (MR_Integer) 1)));
                    packed_word_2 = (MR_Unsigned) ((MR_hl_field(0, OptTuple_47, (MR_Integer) 2)));
                    Var_190 = ((MR_Integer) ((MR_hl_field(0, OptTuple_47, (MR_Integer) 3))));
                    Var_191 = ((MR_Integer) ((MR_hl_field(0, OptTuple_47, (MR_Integer) 4))));
                    Var_192 = ((MR_Integer) ((MR_hl_field(0, OptTuple_47, (MR_Integer) 5))));
                    Var_193 = ((MR_Integer) ((MR_hl_field(0, OptTuple_47, (MR_Integer) 6))));
                    Var_194 = ((MR_Integer) ((MR_hl_field(0, OptTuple_47, (MR_Integer) 7))));
                    Var_195 = ((MR_Integer) ((MR_hl_field(0, OptTuple_47, (MR_Integer) 8))));
                    Var_196 = ((MR_Integer) ((MR_hl_field(0, OptTuple_47, (MR_Integer) 9))));
                    Var_197 = ((MR_Integer) ((MR_hl_field(0, OptTuple_47, (MR_Integer) 10))));
                    Var_198 = ((MR_Integer) ((MR_hl_field(0, OptTuple_47, (MR_Integer) 11))));
                    Var_199 = ((MR_Integer) ((MR_hl_field(0, OptTuple_47, (MR_Integer) 12))));
                    Var_200 = ((MR_Integer) ((MR_hl_field(0, OptTuple_47, (MR_Integer) 13))));
                    Var_201 = ((MR_Integer) ((MR_hl_field(0, OptTuple_47, (MR_Integer) 14))));
                    Var_202 = ((MR_Integer) ((MR_hl_field(0, OptTuple_47, (MR_Integer) 15))));
                    Var_203 = ((MR_Integer) ((MR_hl_field(0, OptTuple_47, (MR_Integer) 16))));
                    Var_204 = ((MR_Integer) ((MR_hl_field(0, OptTuple_47, (MR_Integer) 17))));
                    Var_205 = ((MR_Integer) ((MR_hl_field(0, OptTuple_47, (MR_Integer) 18))));
                    Var_206 = ((MR_Integer) ((MR_hl_field(0, OptTuple_47, (MR_Integer) 19))));
                    Var_207 = ((MR_Integer) ((MR_hl_field(0, OptTuple_47, (MR_Integer) 20))));
                    Var_208 = ((MR_Integer) ((MR_hl_field(0, OptTuple_47, (MR_Integer) 21))));
                    Var_209 = ((MR_Integer) ((MR_hl_field(0, OptTuple_47, (MR_Integer) 22))));
                    Var_210 = ((MR_Integer) ((MR_hl_field(0, OptTuple_47, (MR_Integer) 23))));
                    Var_211 = ((MR_Integer) ((MR_hl_field(0, OptTuple_47, (MR_Integer) 24))));
                    Var_212 = ((MR_Integer) ((MR_hl_field(0, OptTuple_47, (MR_Integer) 25))));
                    Var_213 = ((MR_Integer) ((MR_hl_field(0, OptTuple_47, (MR_Integer) 26))));
                    Var_214 = ((MR_Integer) ((MR_hl_field(0, OptTuple_47, (MR_Integer) 27))));
                    Var_215 = ((MR_Integer) ((MR_hl_field(0, OptTuple_47, (MR_Integer) 28))));
                    Var_216 = ((MR_Integer) ((MR_hl_field(0, OptTuple_47, (MR_Integer) 29))));
                    Var_217 = ((MR_Integer) ((MR_hl_field(0, OptTuple_47, (MR_Integer) 30))));
                    Var_218 = ((MR_Integer) ((MR_hl_field(0, OptTuple_47, (MR_Integer) 31))));
                    Var_219 = ((MR_Integer) ((MR_hl_field(0, OptTuple_47, (MR_Integer) 32))));
                    Var_220 = ((MR_Integer) ((MR_hl_field(0, OptTuple_47, (MR_Integer) 33))));
                    Var_221 = ((MR_Integer) ((MR_hl_field(0, OptTuple_47, (MR_Integer) 34))));
                    Var_222 = ((MR_Integer) ((MR_hl_field(0, OptTuple_47, (MR_Integer) 35))));
                    Var_223 = ((MR_Integer) ((MR_hl_field(0, OptTuple_47, (MR_Integer) 36))));
                    Var_224 = ((MR_Integer) ((MR_hl_field(0, OptTuple_47, (MR_Integer) 37))));
                    Var_225 = ((MR_Integer) ((MR_hl_field(0, OptTuple_47, (MR_Integer) 38))));
                    Var_226 = ((MR_Integer) ((MR_hl_field(0, OptTuple_47, (MR_Integer) 39))));
                    Var_227 = ((MR_String) ((MR_hl_field(0, OptTuple_47, (MR_Integer) 40))));
                    {
                      NoOptUnusedArgsOptTuple_48 = (MR_Word) MR_new_object(MR_Word, (41 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(0, NoOptUnusedArgsOptTuple_48, 0) = (MR_Box) ((((packed_word_0 & (~((MR_Unsigned) 64U)))) | (((MR_Unsigned) ((MR_Integer) 1) << 6))));
                      MR_hl_field(0, NoOptUnusedArgsOptTuple_48, 1) = (MR_Box) (packed_word_1);
                      MR_hl_field(0, NoOptUnusedArgsOptTuple_48, 2) = (MR_Box) (packed_word_2);
                      MR_hl_field(0, NoOptUnusedArgsOptTuple_48, 3) = ((MR_Box) (Var_190));
                      MR_hl_field(0, NoOptUnusedArgsOptTuple_48, 4) = ((MR_Box) (Var_191));
                      MR_hl_field(0, NoOptUnusedArgsOptTuple_48, 5) = ((MR_Box) (Var_192));
                      MR_hl_field(0, NoOptUnusedArgsOptTuple_48, 6) = ((MR_Box) (Var_193));
                      MR_hl_field(0, NoOptUnusedArgsOptTuple_48, 7) = ((MR_Box) (Var_194));
                      MR_hl_field(0, NoOptUnusedArgsOptTuple_48, 8) = ((MR_Box) (Var_195));
                      MR_hl_field(0, NoOptUnusedArgsOptTuple_48, 9) = ((MR_Box) (Var_196));
                      MR_hl_field(0, NoOptUnusedArgsOptTuple_48, 10) = ((MR_Box) (Var_197));
                      MR_hl_field(0, NoOptUnusedArgsOptTuple_48, 11) = ((MR_Box) (Var_198));
                      MR_hl_field(0, NoOptUnusedArgsOptTuple_48, 12) = ((MR_Box) (Var_199));
                      MR_hl_field(0, NoOptUnusedArgsOptTuple_48, 13) = ((MR_Box) (Var_200));
                      MR_hl_field(0, NoOptUnusedArgsOptTuple_48, 14) = ((MR_Box) (Var_201));
                      MR_hl_field(0, NoOptUnusedArgsOptTuple_48, 15) = ((MR_Box) (Var_202));
                      MR_hl_field(0, NoOptUnusedArgsOptTuple_48, 16) = ((MR_Box) (Var_203));
                      MR_hl_field(0, NoOptUnusedArgsOptTuple_48, 17) = ((MR_Box) (Var_204));
                      MR_hl_field(0, NoOptUnusedArgsOptTuple_48, 18) = ((MR_Box) (Var_205));
                      MR_hl_field(0, NoOptUnusedArgsOptTuple_48, 19) = ((MR_Box) (Var_206));
                      MR_hl_field(0, NoOptUnusedArgsOptTuple_48, 20) = ((MR_Box) (Var_207));
                      MR_hl_field(0, NoOptUnusedArgsOptTuple_48, 21) = ((MR_Box) (Var_208));
                      MR_hl_field(0, NoOptUnusedArgsOptTuple_48, 22) = ((MR_Box) (Var_209));
                      MR_hl_field(0, NoOptUnusedArgsOptTuple_48, 23) = ((MR_Box) (Var_210));
                      MR_hl_field(0, NoOptUnusedArgsOptTuple_48, 24) = ((MR_Box) (Var_211));
                      MR_hl_field(0, NoOptUnusedArgsOptTuple_48, 25) = ((MR_Box) (Var_212));
                      MR_hl_field(0, NoOptUnusedArgsOptTuple_48, 26) = ((MR_Box) (Var_213));
                      MR_hl_field(0, NoOptUnusedArgsOptTuple_48, 27) = ((MR_Box) (Var_214));
                      MR_hl_field(0, NoOptUnusedArgsOptTuple_48, 28) = ((MR_Box) (Var_215));
                      MR_hl_field(0, NoOptUnusedArgsOptTuple_48, 29) = ((MR_Box) (Var_216));
                      MR_hl_field(0, NoOptUnusedArgsOptTuple_48, 30) = ((MR_Box) (Var_217));
                      MR_hl_field(0, NoOptUnusedArgsOptTuple_48, 31) = ((MR_Box) (Var_218));
                      MR_hl_field(0, NoOptUnusedArgsOptTuple_48, 32) = ((MR_Box) (Var_219));
                      MR_hl_field(0, NoOptUnusedArgsOptTuple_48, 33) = ((MR_Box) (Var_220));
                      MR_hl_field(0, NoOptUnusedArgsOptTuple_48, 34) = ((MR_Box) (Var_221));
                      MR_hl_field(0, NoOptUnusedArgsOptTuple_48, 35) = ((MR_Box) (Var_222));
                      MR_hl_field(0, NoOptUnusedArgsOptTuple_48, 36) = ((MR_Box) (Var_223));
                      MR_hl_field(0, NoOptUnusedArgsOptTuple_48, 37) = ((MR_Box) (Var_224));
                      MR_hl_field(0, NoOptUnusedArgsOptTuple_48, 38) = ((MR_Box) (Var_225));
                      MR_hl_field(0, NoOptUnusedArgsOptTuple_48, 39) = ((MR_Box) (Var_226));
                      MR_hl_field(0, NoOptUnusedArgsOptTuple_48, 40) = ((MR_Box) (Var_227));
                    }
                    libs__globals__set_opt_tuple_3_p_0(NoOptUnusedArgsOptTuple_48, Globals_31, &NoOptUnusedArgsGlobals_49);
                    hlds__hlds_module__module_info_set_globals_3_p_0(NoOptUnusedArgsGlobals_49, HLDS21_45, &HLDS21a_50);
                    top_level__mercury_compile_middle_passes__maybe_unused_args_10_p_0(ProgressStream_18, Verbose_43, Stats_44, &_UnusedArgsInfos_51, HLDS21a_50, &_HLDS22_52, STATE_VARIABLE_Specs_74_74, STATE_VARIABLE_Specs_64);
                  }
                  break;
              }
              *ExtraObjFiles_26 = (MR_Word) ((MR_Unsigned) 0U);
              *STATE_VARIABLE_DumpInfo_62 = STATE_VARIABLE_DumpInfo_73_73;
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word OpModeCodeGen_57 = ((MR_Unsigned) ((MR_hl_field(1, OpModeAugment_21, (MR_Integer) 0))) & (MR_Integer) 3);
          MR_Word AnalysisSpecs_101;
          MR_Word HLDS22_102;

          top_level__mercury_compile_main__maybe_prepare_for_intermodule_analysis_9_p_0(ProgressStream_18, Globals_31, Verbose_43, Stats_44, &AnalysisSpecs_101, HLDS21_45, &HLDS22_102);
          if ((AnalysisSpecs_101 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            MR_Word MaybeTopModule_58 = ((MR_Word) ((MR_hl_field(0, Baggage_23, (MR_Integer) 3))));

            top_level__mercury_compile_main__after_front_end_passes_15_p_0(ProgressStream_18, ErrorStream_19, Globals_31, OpModeCodeGen_57, MaybeTopModule_58, FindTimestampFiles_25, MaybeTimestampMap_36, HLDS22_102, ExtraObjFiles_26, STATE_VARIABLE_Specs_74_74, STATE_VARIABLE_Specs_64, STATE_VARIABLE_DumpInfo_73_73, STATE_VARIABLE_DumpInfo_62);
          }
          else
          {
            *STATE_VARIABLE_Specs_64 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), AnalysisSpecs_101, STATE_VARIABLE_Specs_74_74);
            *ExtraObjFiles_26 = (MR_Word) ((MR_Unsigned) 0U);
            *STATE_VARIABLE_DumpInfo_62 = STATE_VARIABLE_DumpInfo_73_73;
          }
        }
        break;
    }
  }
  else
  {
    succeeded = (ExitStatus_42 == (MR_Integer) 0);
    if (succeeded)
      mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
    *ExtraObjFiles_26 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Specs_64 = STATE_VARIABLE_Specs_74_74;
    *STATE_VARIABLE_DumpInfo_62 = STATE_VARIABLE_DumpInfo_73_73;
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
  MR_Word STATE_VARIABLE_HLDS_0_61,
  MR_Word * ExtraObjFiles_24,
  MR_Word STATE_VARIABLE_Specs_0_62,
  MR_Word * STATE_VARIABLE_Specs_63,
  MR_Word STATE_VARIABLE_DumpInfo_0_64,
  MR_Word * STATE_VARIABLE_DumpInfo_65)
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
  MR_Word STATE_VARIABLE_HLDS_70_70;
  MR_Word STATE_VARIABLE_HLDS_72_72;
  MR_Word STATE_VARIABLE_DumpInfo_73_73;
  MR_Word STATE_VARIABLE_Specs_74_74;
  MR_Word Var_34;

  libs__globals__lookup_bool_option_3_p_0(Globals_18, (MR_Integer) 72, &Verbose_28);
  libs__globals__lookup_bool_option_3_p_0(Globals_18, (MR_Integer) 82, &Stats_29);
  top_level__mercury_compile_main__maybe_output_prof_call_graph_8_p_0(ProgressStream_16, ErrorStream_17, Verbose_28, Stats_29, STATE_VARIABLE_HLDS_0_61, &STATE_VARIABLE_HLDS_70_70);
  top_level__mercury_compile_middle_passes__middle_pass_10_p_0(ProgressStream_16, ErrorStream_17, STATE_VARIABLE_HLDS_70_70, &STATE_VARIABLE_HLDS_72_72, STATE_VARIABLE_DumpInfo_0_64, &STATE_VARIABLE_DumpInfo_73_73, STATE_VARIABLE_Specs_0_62, &STATE_VARIABLE_Specs_74_74);
  libs__globals__lookup_bool_option_3_p_0(Globals_18, (MR_Integer) 309, &HighLevelCode_30);
  libs__globals__get_target_2_p_0(Globals_18, &Target_31);
  hlds__hlds_module__module_info_get_name_2_p_0(STATE_VARIABLE_HLDS_72_72, &ModuleName_32);
  parse_tree__file_names__module_name_to_file_name_9_p_0(Globals_18, (MR_String) "predicate \140top_level.mercury_compile_main.after_front_end_passes\'/15", (MR_Integer) 1, (MR_Word) (MR_mkword(1, &top_level__mercury_compile_main_scalar_common_2[4])), (MR_Word) (MR_mkword(3, &top_level__mercury_compile_main_scalar_common_1[19])), ModuleName_32, &UsageFileName_33);
  mercury__io__file__remove_file_4_p_0(UsageFileName_33, &Var_34);
  FrontEndErrors_35 = parse_tree__error_util__contains_errors_or_warnings_treated_as_errors_2_f_0(Globals_18, STATE_VARIABLE_Specs_74_74);
  mercury__io__get_exit_status_3_p_0(&ExitStatus_36);
  succeeded = (FrontEndErrors_35 == (MR_Integer) 0);
  if (succeeded)
    succeeded = (ExitStatus_36 == (MR_Integer) 0);
  if (succeeded)
  {
    MR_Word Succeeded_40;
    MR_Word STATE_VARIABLE_HLDS_126_126;

    switch (Target_31) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word ExportDecls_44;

          backend_libs__export__get_foreign_export_decls_2_p_0(STATE_VARIABLE_HLDS_72_72, &ExportDecls_44);
          backend_libs__export__produce_header_file_5_p_0(STATE_VARIABLE_HLDS_72_72, ExportDecls_44, ModuleName_32);
          switch (HighLevelCode_30) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word GlobalData_53;
                MR_Word LLDS_54;

                top_level__mercury_compile_llds_back_end__llds_backend_pass_10_p_0(ProgressStream_16, ErrorStream_17, STATE_VARIABLE_HLDS_72_72, &STATE_VARIABLE_HLDS_126_126, &GlobalData_53, &LLDS_54, STATE_VARIABLE_DumpInfo_73_73, STATE_VARIABLE_DumpInfo_65);
                top_level__mercury_compile_llds_back_end__llds_output_pass_11_p_0(ProgressStream_16, ErrorStream_17, OpModeCodeGen_19, STATE_VARIABLE_HLDS_126_126, GlobalData_53, LLDS_54, ModuleName_32, &Succeeded_40, ExtraObjFiles_24);
                *STATE_VARIABLE_Specs_63 = STATE_VARIABLE_Specs_74_74;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word MLDS_138;
                MR_Word NewSpecs_139;
                MR_Word TargetCodeSucceeded_140;
                MR_Word Var_45;

                top_level__mercury_compile_mlds_back_end__mlds_backend_10_p_0(ProgressStream_16, ErrorStream_17, STATE_VARIABLE_HLDS_72_72, &Var_45, &MLDS_138, &NewSpecs_139, STATE_VARIABLE_DumpInfo_73_73, STATE_VARIABLE_DumpInfo_65);
                *STATE_VARIABLE_Specs_63 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), NewSpecs_139, STATE_VARIABLE_Specs_74_74);
                top_level__mercury_compile_mlds_back_end__mlds_to_high_level_c_6_p_0(ProgressStream_16, Globals_18, MLDS_138, &TargetCodeSucceeded_140);
                switch (OpModeCodeGen_19) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 1:
                  case (MR_Integer) 2:
                    switch (TargetCodeSucceeded_140) {
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
                          MR_Word ObjNewExt_50;
                          MR_String O_File_52;
                          MR_Word Var_121;
                          MR_Word Var_122;
                          MR_Word Var_51;

                          parse_tree__file_names__module_name_to_file_name_9_p_0(Globals_18, (MR_String) "predicate \140top_level.mercury_compile_main.after_front_end_passes\'/15", (MR_Integer) 1, (MR_Word) (MR_mkword(1, &top_level__mercury_compile_main_scalar_common_2[5])), (MR_Word) (MR_mkword(3, &top_level__mercury_compile_main_scalar_common_1[12])), ModuleName_32, &C_File_46);
                          backend_libs__compile_target_code__get_linked_target_type_2_p_0(Globals_18, &TargetType_47);
                          backend_libs__compile_target_code__get_object_code_type_3_p_0(Globals_18, TargetType_47, &PIC_48);
                          backend_libs__compile_target_code__maybe_pic_object_file_extension_5_p_0(Globals_18, PIC_48, &ObjOtherExt_49, &ObjNewExt_50, &Var_51);
                          {
                            Var_121 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(1, Var_121, 0) = ((MR_Box) (ObjOtherExt_49));
                          }
                          {
                            Var_122 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(3, Var_122, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                            MR_hl_field(3, Var_122, 1) = (MR_Box) ((MR_Unsigned) (ObjNewExt_50));
                          }
                          parse_tree__file_names__module_name_to_file_name_9_p_0(Globals_18, (MR_String) "predicate \140top_level.mercury_compile_main.after_front_end_passes\'/15", (MR_Integer) 0, Var_121, Var_122, ModuleName_32, &O_File_52);
                          backend_libs__compile_target_code__do_compile_c_file_9_p_0(Globals_18, ProgressStream_16, ErrorStream_17, PIC_48, C_File_46, O_File_52, &Succeeded_40);
                          parse_tree__module_cmds__maybe_set_exit_status_3_p_0(Succeeded_40);
                        }
                        break;
                    }
                    break;
                  case (MR_Integer) 0:
                    Succeeded_40 = TargetCodeSucceeded_140;
                    break;
                }
                *ExtraObjFiles_24 = (MR_Word) ((MR_Unsigned) 0U);
                STATE_VARIABLE_HLDS_126_126 = STATE_VARIABLE_HLDS_72_72;
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

          top_level__mercury_compile_mlds_back_end__mlds_backend_10_p_0(ProgressStream_16, ErrorStream_17, STATE_VARIABLE_HLDS_72_72, &Var_37, &MLDS_38, &NewSpecs_39, STATE_VARIABLE_DumpInfo_73_73, STATE_VARIABLE_DumpInfo_65);
          *STATE_VARIABLE_Specs_63 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), NewSpecs_39, STATE_VARIABLE_Specs_74_74);
          top_level__mercury_compile_mlds_back_end__mlds_to_csharp_6_p_0(ProgressStream_16, STATE_VARIABLE_HLDS_72_72, MLDS_38, &Succeeded_40);
          *ExtraObjFiles_24 = (MR_Word) ((MR_Unsigned) 0U);
          STATE_VARIABLE_HLDS_126_126 = STATE_VARIABLE_HLDS_72_72;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word TargetCodeSucceeded_42;
          MR_Word MLDS_136;
          MR_Word NewSpecs_137;
          MR_Word Var_41;

          top_level__mercury_compile_mlds_back_end__mlds_backend_10_p_0(ProgressStream_16, ErrorStream_17, STATE_VARIABLE_HLDS_72_72, &Var_41, &MLDS_136, &NewSpecs_137, STATE_VARIABLE_DumpInfo_73_73, STATE_VARIABLE_DumpInfo_65);
          *STATE_VARIABLE_Specs_63 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), NewSpecs_137, STATE_VARIABLE_Specs_74_74);
          top_level__mercury_compile_mlds_back_end__mlds_to_java_6_p_0(ProgressStream_16, STATE_VARIABLE_HLDS_72_72, MLDS_136, &TargetCodeSucceeded_42);
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

                    parse_tree__file_names__module_name_to_file_name_9_p_0(Globals_18, (MR_String) "predicate \140top_level.mercury_compile_main.after_front_end_passes\'/15", (MR_Integer) 1, (MR_Word) (MR_mkword(1, &top_level__mercury_compile_main_scalar_common_2[6])), (MR_Word) (MR_mkword(3, &top_level__mercury_compile_main_scalar_common_1[14])), ModuleName_32, &JavaFile_43);
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
          STATE_VARIABLE_HLDS_126_126 = STATE_VARIABLE_HLDS_72_72;
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
          MR_Word MaybeRecompInfo_55;
          MR_Word TimestampFiles_59;
          MR_Word Var_132;
          MR_Word RecompInfo_56;
          MR_Word TimestampMap_57;
          void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);
          MR_Box conv2_TimestampFiles_59;
          MR_Box conv1_STATE_VARIABLE_IO_131_131;
          MR_Word _Succeededs_60;
          MR_Box conv4_STATE_VARIABLE_IO_67;

          hlds__hlds_module__module_info_get_maybe_recompilation_info_2_p_0(STATE_VARIABLE_HLDS_126_126, &MaybeRecompInfo_55);
          succeeded = (MaybeRecompInfo_55 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            RecompInfo_56 = ((MR_Word) ((MR_hl_field(1, MaybeRecompInfo_55, (MR_Integer) 0))));
            succeeded = (MaybeTimestampMap_22 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
              TimestampMap_57 = ((MR_Word) ((MR_hl_field(1, MaybeTimestampMap_22, (MR_Integer) 0))));
          }
          if (succeeded)
          {
            MR_Word UsedFileContents_58;

            recompilation__usage__construct_used_file_contents_5_p_0(STATE_VARIABLE_HLDS_126_126, RecompInfo_56, MaybeTopModule_20, TimestampMap_57, &UsedFileContents_58);
            recompilation__used_file__write_usage_file_4_p_0(STATE_VARIABLE_HLDS_126_126, UsedFileContents_58);
          }
          func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(0, FindTimestampFiles_21, (MR_Integer) 1))));
          func_0(((MR_Box) (FindTimestampFiles_21)), ((MR_Box) (ModuleName_32)), &conv2_TimestampFiles_59, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_131_131);
          TimestampFiles_59 = ((MR_Word) (conv2_TimestampFiles_59));
          {
            Var_132 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_132, 0) = ((MR_Box) (&top_level__mercury_compile_main_scalar_common_7[2]));
            MR_hl_field(0, Var_132, 1) = ((MR_Box) (top_level__mercury_compile_main__after_front_end_passes_15_p_0_1));
            MR_hl_field(0, Var_132, 2) = ((MR_Box) ((MR_Integer) 3));
            MR_hl_field(0, Var_132, 3) = ((MR_Box) (Globals_18));
            MR_hl_field(0, Var_132, 4) = ((MR_Box) (ProgressStream_16));
            MR_hl_field(0, Var_132, 5) = ((MR_Box) (ErrorStream_17));
          }
          mercury__list__map_foldl_5_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&libs__maybe_util__libs__maybe_util__type_ctor_info_maybe_succeeded_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_132, TimestampFiles_59, &_Succeededs_60, ((MR_Box) ((MR_Integer) 0)), &conv4_STATE_VARIABLE_IO_67);
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
    *STATE_VARIABLE_DumpInfo_65 = STATE_VARIABLE_DumpInfo_73_73;
    *STATE_VARIABLE_Specs_63 = STATE_VARIABLE_Specs_74_74;
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
  libs__globals__lookup_bool_option_3_p_0(Globals_15, (MR_Integer) 242, &ProfileCalls_16);
  libs__globals__lookup_bool_option_3_p_0(Globals_15, (MR_Integer) 243, &ProfileTime_17);
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
    parse_tree__file_names__module_name_to_file_name_9_p_0(Globals_15, (MR_String) "predicate \140top_level.mercury_compile_main.maybe_output_prof_call_graph\'/8", (MR_Integer) 0, (MR_Word) (MR_mkword(1, &top_level__mercury_compile_main_scalar_common_2[7])), (MR_Word) (MR_mkword(3, &top_level__mercury_compile_main_scalar_common_1[20])), ModuleName_18, &ProfFileName_19);
    mercury__io__open_output_4_p_0(ProfFileName_19, &Res_20);
    if (((MR_tag((MR_Word) Res_20)) == (MR_Integer) 1))
    {
      MR_Word IOError_22 = ((MR_Word) ((MR_hl_field(1, Res_20, (MR_Integer) 0))));
      MR_String ErrorMsg_23;
      MR_String Var_46;

      Var_46 = mercury__io__error_message_1_f_0(IOError_22);
      ErrorMsg_23 = mercury__string__f_43_43_2_f_0((MR_String) "unable to write profiling static call graph: ", Var_46);
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
top_level__mercury_compile_main__prepare_for_intermodule_analysis_9_p_0_1(
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
top_level__mercury_compile_main__prepare_for_intermodule_analysis_9_p_0(
  MR_Word ProgressStream_10,
  MR_Word Globals_11,
  MR_Word Verbose_12,
  MR_Word Stats_13,
  MR_Word * Specs_14,
  MR_Word STATE_VARIABLE_HLDS_0_23,
  MR_Word * STATE_VARIABLE_HLDS_24)
{
  MR_Word ModuleNames_17;
  MR_Word LocalModulesList_18;
  MR_Word SymNames_19;
  MR_Word LocalModuleNames_20;
  MR_Word AnalysisInfo0_21;
  MR_Word AnalysisInfo_22;

  libs__file_util__maybe_write_string_5_p_0(ProgressStream_10, Verbose_12, (MR_String) "% Preparing for intermodule analysis...\n");
  hlds__hlds_module__module_info_get_all_deps_2_p_0(STATE_VARIABLE_HLDS_0_23, &ModuleNames_17);
  libs__globals__lookup_accumulating_option_3_p_0(Globals_11, (MR_Integer) 705, &LocalModulesList_18);
  SymNames_19 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&top_level__mercury_compile_main_scalar_common_5[4]), LocalModulesList_18);
  LocalModuleNames_20 = mercury__set__list_to_set_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), SymNames_19);
  hlds__hlds_module__module_info_get_analysis_info_2_p_0(STATE_VARIABLE_HLDS_0_23, &AnalysisInfo0_21);
  analysis__prepare_intermodule_analysis_8_p_0(Globals_11, ModuleNames_17, LocalModuleNames_20, Specs_14, AnalysisInfo0_21, &AnalysisInfo_22);
  hlds__hlds_module__module_info_set_analysis_info_3_p_0(AnalysisInfo_22, STATE_VARIABLE_HLDS_0_23, STATE_VARIABLE_HLDS_24);
  libs__file_util__maybe_write_string_5_p_0(ProgressStream_10, Verbose_12, (MR_String) "% done.\n");
  libs__file_util__maybe_report_stats_4_p_0(ProgressStream_10, Stats_13);
}

static MR_Box MR_CALL 
top_level__mercury_compile_main__maybe_prepare_for_intermodule_analysis_9_p_0_1(
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
top_level__mercury_compile_main__maybe_prepare_for_intermodule_analysis_9_p_0(
  MR_Word ProgressStream_10,
  MR_Word Globals_11,
  MR_Word Verbose_12,
  MR_Word Stats_13,
  MR_Word * Specs_14,
  MR_Word STATE_VARIABLE_HLDS_0_18,
  MR_Word * STATE_VARIABLE_HLDS_19)
{
  MR_Word IntermodAnalysis_17;

  libs__globals__lookup_bool_option_3_p_0(Globals_11, (MR_Integer) 504, &IntermodAnalysis_17);
  switch (IntermodAnalysis_17) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        *Specs_14 = (MR_Word) ((MR_Unsigned) 0U);
        *STATE_VARIABLE_HLDS_19 = STATE_VARIABLE_HLDS_0_18;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word ModuleNames_23;
        MR_Word LocalModulesList_24;
        MR_Word SymNames_25;
        MR_Word LocalModuleNames_26;
        MR_Word AnalysisInfo0_27;
        MR_Word AnalysisInfo_28;

        libs__file_util__maybe_write_string_5_p_0(ProgressStream_10, Verbose_12, (MR_String) "% Preparing for intermodule analysis...\n");
        hlds__hlds_module__module_info_get_all_deps_2_p_0(STATE_VARIABLE_HLDS_0_18, &ModuleNames_23);
        libs__globals__lookup_accumulating_option_3_p_0(Globals_11, (MR_Integer) 705, &LocalModulesList_24);
        SymNames_25 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&top_level__mercury_compile_main_scalar_common_5[3]), LocalModulesList_24);
        LocalModuleNames_26 = mercury__set__list_to_set_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), SymNames_25);
        hlds__hlds_module__module_info_get_analysis_info_2_p_0(STATE_VARIABLE_HLDS_0_18, &AnalysisInfo0_27);
        analysis__prepare_intermodule_analysis_8_p_0(Globals_11, ModuleNames_23, LocalModuleNames_26, Specs_14, AnalysisInfo0_27, &AnalysisInfo_28);
        hlds__hlds_module__module_info_set_analysis_info_3_p_0(AnalysisInfo_28, STATE_VARIABLE_HLDS_0_18, STATE_VARIABLE_HLDS_19);
        libs__file_util__maybe_write_string_5_p_0(ProgressStream_10, Verbose_12, (MR_String) "% done.\n");
        libs__file_util__maybe_report_stats_4_p_0(ProgressStream_10, Stats_13);
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
        parse_tree__file_names__module_name_to_file_name_9_p_0(Globals_15, (MR_String) "predicate \140top_level.mercury_compile_main.maybe_write_dependency_graph\'/8", (MR_Integer) 0, (MR_Word) (MR_mkword(1, &top_level__mercury_compile_main_scalar_common_2[3])), (MR_Word) (MR_mkword(3, &top_level__mercury_compile_main_scalar_common_1[18])), ModuleName_17, &FileName_18);
        mercury__io__open_output_4_p_0(FileName_18, &Res_19);
        if (((MR_tag((MR_Word) Res_19)) == (MR_Integer) 1))
        {
          MR_Word IOError_21 = ((MR_Word) ((MR_hl_field(1, Res_19, (MR_Integer) 0))));
          MR_String ErrorMsg_22;
          MR_String Var_45;

          Var_45 = mercury__io__error_message_1_f_0(IOError_21);
          ErrorMsg_22 = mercury__string__f_43_43_2_f_0((MR_String) "unable to write dependency graph: ", Var_45);
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
top_level__mercury_compile_main__find_timestamp_files_2_7_p_0(
  MR_Word Globals_8,
  MR_Word TimestampOtherExt_9,
  MR_Word TimestampNewExt_10,
  MR_Word ModuleName_11,
  MR_Word * TimestampFiles_12)
{
  MR_String FileName_14;
  MR_Word Var_19;

  {
    Var_19 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_19, 0) = ((MR_Box) (TimestampOtherExt_9));
  }
  parse_tree__file_names__module_name_to_file_name_9_p_0(Globals_8, (MR_String) "predicate \140top_level.mercury_compile_main.find_timestamp_files_2\'/7", (MR_Integer) 0, Var_19, TimestampNewExt_10, ModuleName_11, &FileName_14);
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *TimestampFiles_12 = base;
    MR_hl_field(1, base, 0) = ((MR_Box) (FileName_14));
    MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
}

static void MR_CALL 
top_level__mercury_compile_main__usual_find_target_files_7_p_0(
  MR_Word Globals_8,
  MR_Word TargetOtherExt_9,
  MR_Word TargetNewExt_10,
  MR_Word ModuleName_11,
  MR_Word * TargetFiles_12)
{
  MR_String FileName_14;
  MR_Word Var_19;

  {
    Var_19 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_19, 0) = ((MR_Box) (TargetOtherExt_9));
  }
  parse_tree__file_names__module_name_to_file_name_9_p_0(Globals_8, (MR_String) "predicate \140top_level.mercury_compile_main.usual_find_target_files\'/7", (MR_Integer) 0, Var_19, TargetNewExt_10, ModuleName_11, &FileName_14);
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *TargetFiles_12 = base;
    MR_hl_field(1, base, 0) = ((MR_Box) (FileName_14));
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

static MR_bool MR_CALL 
top_level__mercury_compile_main__main_after_setup_9_p_0_2(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_args__793__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

static MR_bool MR_CALL 
top_level__mercury_compile_main__main_after_setup_9_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_args__793__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
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
      MR_Word StdOutStream_39;

      mercury__io__stdout_stream_3_p_0(&StdOutStream_39);
      libs__handle_options__display_compiler_version_3_p_0(StdOutStream_39);
    }
    else
    {
      MR_Word Experiment4_21;
      MR_Word OpMode_22;
      MR_Word HaveReadModuleMaps0_23;
      MR_Word Specs_26;

      libs__globals__lookup_bool_option_3_p_0(Globals_12, (MR_Integer) 712, &Experiment4_21);
      switch (Experiment4_21) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
          }
          break;
        case (MR_Integer) 1:
          parse_tree__file_names__test_file_name_extensions_4_p_0(Globals_12, ErrorStream_11);
          break;
      }
      libs__globals__get_op_mode_2_p_0(Globals_12, &OpMode_22);
      HaveReadModuleMaps0_23 = parse_tree__read_modules__init_have_read_module_maps_0_f_0();
      switch (MR_tag((MR_Word) OpMode_22)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(OpMode_22)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word MakeGlobals_40;

                libs__globals__set_option_4_p_0((MR_Integer) 698, (MR_Word) (MR_mkword(1, &top_level__mercury_compile_main_scalar_common_2[1])), Globals_12, &MakeGlobals_40);
                make__top_level__make_process_compiler_args_7_p_0(MakeGlobals_40, DetectedGradeFlags_13, OptionVariables_14, OptionArgs_15, Args_16);
                Specs_26 = (MR_Word) ((MR_Unsigned) 0U);
              }
              break;
            case (MR_Integer) 1:
              {
                parse_tree__source_file_map__write_source_file_map_4_p_0(Globals_12, Args_16);
                Specs_26 = (MR_Word) ((MR_Unsigned) 0U);
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_String StandaloneIntBasename_41 = ((MR_String) ((MR_hl_field(1, OpMode_22, (MR_Integer) 0))));

            top_level__mercury_compile_main__do_op_mode_standalone_interface_6_p_0(ProgressStream_10, ErrorStream_11, Globals_12, StandaloneIntBasename_41);
            Specs_26 = (MR_Word) ((MR_Unsigned) 0U);
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word OpModeQuery_42 = ((MR_Unsigned) ((MR_hl_field(2, OpMode_22, (MR_Integer) 0))) & (MR_Integer) 15);

            top_level__mercury_compile_main__do_op_mode_query_6_p_0(ErrorStream_11, Globals_12, OpModeQuery_42, OptionVariables_14);
            Specs_26 = (MR_Word) ((MR_Unsigned) 0U);
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word OpModeArgs_43 = ((MR_Word) ((MR_hl_field(3, OpMode_22, (MR_Integer) 0))));
            MR_Word InvokedByMmcMake_44 = ((MR_Unsigned) ((MR_hl_field(3, OpMode_22, (MR_Integer) 1))) & (MR_Integer) 1);
            MR_Word FileNamesFromStdin_45;

            libs__globals__lookup_bool_option_3_p_0(Globals_12, (MR_Integer) 698, &FileNamesFromStdin_45);
            succeeded = (Args_16 == (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
              succeeded = (FileNamesFromStdin_45 == (MR_Integer) 0);
            if (succeeded)
            {
              MR_Word StdErr_46;

              mercury__io__stderr_stream_3_p_0(&StdErr_46);
              libs__handle_options__usage_3_p_0(StdErr_46);
              Specs_26 = (MR_Word) ((MR_Unsigned) 0U);
            }
            else
            {
              MR_Word ModulesToLink_56;
              MR_Word ExtraObjFiles_57;
              MR_Integer ExitStatus_58;
              MR_Word StdErr_68;
              MR_Word Statistics_69;

              switch (InvokedByMmcMake_44) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  {
                    MR_Word ModulesToLinkCord_54;
                    MR_Word ExtraObjFilesCord_55;

                    switch (FileNamesFromStdin_45) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                          MR_Word Var_81;
                          MR_Word Var_82;
                          MR_Word _HaveReadModuleMaps_99;

                          Var_81 = mercury__cord__empty_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0));
                          Var_82 = mercury__cord__empty_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0));
                          top_level__mercury_compile_main__do_process_compiler_cmd_line_args_15_p_0(ProgressStream_10, ErrorStream_11, Globals_12, OpModeArgs_43, InvokedByMmcMake_44, OptionArgs_15, Args_16, Var_81, &ModulesToLinkCord_54, Var_82, &ExtraObjFilesCord_55, HaveReadModuleMaps0_23, &_HaveReadModuleMaps_99);
                          Specs_26 = (MR_Word) ((MR_Unsigned) 0U);
                        }
                        break;
                      case (MR_Integer) 1:
                        {
                          MR_Word StdIn_53;
                          MR_Word Var_71;
                          MR_Word Var_76;
                          MR_Word Var_77;
                          MR_Word _HaveReadModuleMaps_104;

                          {
                            Var_71 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(0, Var_71, 0) = ((MR_Box) (&top_level__mercury_compile_main_scalar_common_8[3]));
                            MR_hl_field(0, Var_71, 1) = ((MR_Box) (top_level__mercury_compile_main__main_after_setup_9_p_0_1));
                            MR_hl_field(0, Var_71, 2) = ((MR_Box) ((MR_Integer) 2));
                            MR_hl_field(0, Var_71, 3) = ((MR_Box) (InvokedByMmcMake_44));
                            MR_hl_field(0, Var_71, 4) = ((MR_Box) ((MR_Integer) 0));
                          }
                          mercury__require__expect_3_p_0(Var_71, (MR_String) "predicate \140top_level.mercury_compile_main.do_op_mode_args\'/16", (MR_String) "InvokedByMmcMake != op_mode_not_invoked_by_mmc_make");
                          mercury__io__stdin_stream_3_p_0(&StdIn_53);
                          Var_76 = mercury__cord__empty_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0));
                          Var_77 = mercury__cord__empty_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0));
                          top_level__mercury_compile_main__setup_and_process_compiler_stdin_args_19_p_0(ProgressStream_10, ErrorStream_11, StdIn_53, Globals_12, OpModeArgs_43, InvokedByMmcMake_44, DetectedGradeFlags_13, OptionVariables_14, OptionArgs_15, Var_76, &ModulesToLinkCord_54, Var_77, &ExtraObjFilesCord_55, HaveReadModuleMaps0_23, &_HaveReadModuleMaps_104, (MR_Word) ((MR_Unsigned) 0U), &Specs_26);
                        }
                        break;
                    }
                    ModulesToLink_56 = mercury__cord__list_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ModulesToLinkCord_54);
                    ExtraObjFiles_57 = mercury__cord__list_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ExtraObjFilesCord_55);
                  }
                  break;
                case (MR_Integer) 0:
                  {
                    MR_Word LibgradeCheckSpecs_167;

                    libs__check_libgrades__maybe_check_libraries_are_installed_4_p_0(Globals_12, &LibgradeCheckSpecs_167);
                    if ((LibgradeCheckSpecs_167 == (MR_Word) ((MR_Unsigned) 0U)))
                    {
                      MR_Word ModulesToLinkCord_142;
                      MR_Word ExtraObjFilesCord_143;

                      switch (FileNamesFromStdin_45) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 0:
                          {
                            MR_Word Var_79;
                            MR_Word Var_80;
                            MR_Word _HaveReadModuleMaps_101;

                            Var_79 = mercury__cord__empty_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0));
                            Var_80 = mercury__cord__empty_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0));
                            top_level__mercury_compile_main__setup_and_process_compiler_cmd_line_args_19_p_0(ProgressStream_10, ErrorStream_11, Globals_12, OpModeArgs_43, InvokedByMmcMake_44, DetectedGradeFlags_13, OptionVariables_14, OptionArgs_15, Args_16, Var_79, &ModulesToLinkCord_142, Var_80, &ExtraObjFilesCord_143, HaveReadModuleMaps0_23, &_HaveReadModuleMaps_101, (MR_Word) ((MR_Unsigned) 0U), &Specs_26);
                          }
                          break;
                        case (MR_Integer) 1:
                          {
                            MR_Word StdIn_121;
                            MR_Word Var_122;
                            MR_Word Var_127;
                            MR_Word Var_128;
                            MR_Word _HaveReadModuleMaps_120;

                            {
                              Var_122 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                              MR_hl_field(0, Var_122, 0) = ((MR_Box) (&top_level__mercury_compile_main_scalar_common_8[3]));
                              MR_hl_field(0, Var_122, 1) = ((MR_Box) (top_level__mercury_compile_main__main_after_setup_9_p_0_2));
                              MR_hl_field(0, Var_122, 2) = ((MR_Box) ((MR_Integer) 2));
                              MR_hl_field(0, Var_122, 3) = ((MR_Box) (InvokedByMmcMake_44));
                              MR_hl_field(0, Var_122, 4) = ((MR_Box) ((MR_Integer) 0));
                            }
                            mercury__require__expect_3_p_0(Var_122, (MR_String) "predicate \140top_level.mercury_compile_main.do_op_mode_args\'/16", (MR_String) "InvokedByMmcMake != op_mode_not_invoked_by_mmc_make");
                            mercury__io__stdin_stream_3_p_0(&StdIn_121);
                            Var_127 = mercury__cord__empty_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0));
                            Var_128 = mercury__cord__empty_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0));
                            top_level__mercury_compile_main__setup_and_process_compiler_stdin_args_19_p_0(ProgressStream_10, ErrorStream_11, StdIn_121, Globals_12, OpModeArgs_43, InvokedByMmcMake_44, DetectedGradeFlags_13, OptionVariables_14, OptionArgs_15, Var_127, &ModulesToLinkCord_142, Var_128, &ExtraObjFilesCord_143, HaveReadModuleMaps0_23, &_HaveReadModuleMaps_120, (MR_Word) ((MR_Unsigned) 0U), &Specs_26);
                          }
                          break;
                      }
                      ModulesToLink_56 = mercury__cord__list_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ModulesToLinkCord_142);
                      ExtraObjFiles_57 = mercury__cord__list_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ExtraObjFilesCord_143);
                    }
                    else
                    {
                      Specs_26 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), LibgradeCheckSpecs_167, (MR_Word) ((MR_Unsigned) 0U));
                      ModulesToLink_56 = (MR_Word) ((MR_Unsigned) 0U);
                      ExtraObjFiles_57 = (MR_Word) ((MR_Unsigned) 0U);
                    }
                  }
                  break;
              }
              mercury__io__get_exit_status_3_p_0(&ExitStatus_58);
              succeeded = (ExitStatus_58 == (MR_Integer) 0);
              if (succeeded)
              {
                MR_String FirstModule_59;
                MR_Word Var_84;
                MR_Word Var_85;

                succeeded = ((MR_tag((MR_Word) OpModeArgs_43)) == (MR_Integer) 2);
                if (succeeded)
                {
                  Var_84 = ((MR_Word) ((MR_hl_field(2, OpModeArgs_43, (MR_Integer) 0))));
                  succeeded = ((MR_tag((MR_Word) Var_84)) == (MR_Integer) 1);
                  if (succeeded)
                  {
                    Var_85 = ((MR_Unsigned) ((MR_hl_field(1, Var_84, (MR_Integer) 0))) & (MR_Integer) 3);
                    succeeded = (Var_85 == (MR_Integer) 2);
                    if (succeeded)
                    {
                      succeeded = (ModulesToLink_56 != (MR_Word) ((MR_Unsigned) 0U));
                      if (succeeded)
                        FirstModule_59 = ((MR_String) ((MR_hl_field(1, ModulesToLink_56, (MR_Integer) 0))));
                    }
                  }
                }
                if (succeeded)
                {
                  MR_Word MainModuleName_61;
                  MR_Word Target_62;
                  MR_Word Succeeded_63;

                  parse_tree__file_names__file_name_to_module_name_2_p_0(FirstModule_59, &MainModuleName_61);
                  libs__globals__get_target_2_p_0(Globals_12, &Target_62);
                  switch (Target_62) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                    case (MR_Integer) 1:
                      switch (InvokedByMmcMake_44) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 1:
                          backend_libs__compile_target_code__link_module_list_8_p_0(ProgressStream_10, ErrorStream_11, ModulesToLink_56, ExtraObjFiles_57, Globals_12, &Succeeded_63);
                          break;
                        case (MR_Integer) 0:
                          {
                            MR_Word MayBuild_64;

                            make__build__setup_for_build_with_module_options_9_p_0((MR_Integer) 0, MainModuleName_61, DetectedGradeFlags_13, OptionVariables_14, OptionArgs_15, (MR_Word) ((MR_Unsigned) 0U), &MayBuild_64);
                            if (((MR_tag((MR_Word) MayBuild_64)) == (MR_Integer) 1))
                            {
                              MR_Word BuildGlobals_67 = ((MR_Word) ((MR_hl_field(1, MayBuild_64, (MR_Integer) 1))));

                              backend_libs__compile_target_code__link_module_list_8_p_0(ProgressStream_10, ErrorStream_11, ModulesToLink_56, ExtraObjFiles_57, BuildGlobals_67, &Succeeded_63);
                            }
                            else
                            {
                              MR_Word SetupSpecs_65 = ((MR_Word) ((MR_hl_field(0, MayBuild_64, (MR_Integer) 0))));

                              parse_tree__write_error_spec__write_error_specs_5_p_0(ErrorStream_11, Globals_12, SetupSpecs_65);
                              Succeeded_63 = (MR_Integer) 0;
                            }
                          }
                          break;
                      }
                      break;
                    case (MR_Integer) 2:
                      parse_tree__module_cmds__create_java_shell_script_5_p_0(Globals_12, MainModuleName_61, &Succeeded_63);
                      break;
                  }
                  parse_tree__module_cmds__maybe_set_exit_status_3_p_0(Succeeded_63);
                }
              }
              mercury__io__stderr_stream_3_p_0(&StdErr_68);
              parse_tree__write_error_spec__maybe_print_delayed_error_messages_4_p_0(StdErr_68, Globals_12);
              libs__globals__lookup_bool_option_3_p_0(Globals_12, (MR_Integer) 82, &Statistics_69);
              switch (Statistics_69) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                  }
                  break;
                case (MR_Integer) 1:
                  mercury__benchmarking__report_full_memory_stats_3_p_0(StdErr_68);
                  break;
              }
            }
          }
          break;
      }
      parse_tree__write_error_spec__write_error_specs_5_p_0(ErrorStream_11, Globals_12, Specs_26);
    }
  }
}

static void MR_CALL 
top_level__mercury_compile_main__do_process_compiler_cmd_line_args_15_p_0(
  MR_Word ProgressStream_1,
  MR_Word ErrorStream_2,
  MR_Word Globals_3,
  MR_Word OpModeArgs_4,
  MR_Word InvokedByMmcMake_5,
  MR_Word OptionArgs_6,
  MR_Word HeadVar__7_7,
  MR_Word STATE_VARIABLE_Modules_0_8,
  MR_Word * STATE_VARIABLE_Modules_9,
  MR_Word STATE_VARIABLE_ExtraObjFiles_0_10,
  MR_Word * STATE_VARIABLE_ExtraObjFiles_11,
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_0_12,
  MR_Word * STATE_VARIABLE_HaveReadModuleMaps_13)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__7_7 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_HaveReadModuleMaps_13 = STATE_VARIABLE_HaveReadModuleMaps_0_12;
      *STATE_VARIABLE_ExtraObjFiles_11 = STATE_VARIABLE_ExtraObjFiles_0_10;
      *STATE_VARIABLE_Modules_9 = STATE_VARIABLE_Modules_0_8;
    }
    else
    {
      MR_String Arg_40 = ((MR_String) ((MR_hl_field(1, HeadVar__7_7, (MR_Integer) 0))));
      MR_Word Args_41 = ((MR_Word) ((MR_hl_field(1, HeadVar__7_7, (MR_Integer) 1))));
      MR_Word FileOrModule_46;
      MR_Word ArgModules_47;
      MR_Word ArgExtraObjFiles_48;
      MR_Word STATE_VARIABLE_HaveReadModuleMaps_59_59;
      MR_Word STATE_VARIABLE_Modules_62_62;
      MR_Word Var_63;
      MR_Word STATE_VARIABLE_ExtraObjFiles_64_64;
      MR_Word Var_65;
      MR_String FileName_67;
      MR_Word next_value_of_HeadVar__7_7;
      MR_Word next_value_of_STATE_VARIABLE_Modules_0_8;
      MR_Word next_value_of_STATE_VARIABLE_ExtraObjFiles_0_10;
      MR_Word next_value_of_STATE_VARIABLE_HaveReadModuleMaps_0_12;

      succeeded = mercury__string__remove_suffix_3_p_0(Arg_40, (MR_String) ".m", &FileName_67);
      if (succeeded)
        {
          FileOrModule_46 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, FileOrModule_46, 0) = ((MR_Box) (FileName_67));
        }
      else
      {
        MR_Word ModuleName_68;

        parse_tree__file_names__file_name_to_module_name_2_p_0(Arg_40, &ModuleName_68);
        {
          FileOrModule_46 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, FileOrModule_46, 0) = ((MR_Box) (ModuleName_68));
        }
      }
      top_level__mercury_compile_main__do_process_compiler_arg_13_p_0(ProgressStream_1, ErrorStream_2, Globals_3, OpModeArgs_4, InvokedByMmcMake_5, OptionArgs_6, FileOrModule_46, &ArgModules_47, &ArgExtraObjFiles_48, STATE_VARIABLE_HaveReadModuleMaps_0_12, &STATE_VARIABLE_HaveReadModuleMaps_59_59);
      if (!((Args_41 == (MR_Word) ((MR_Unsigned) 0U))))
        mercury__gc__garbage_collect_2_p_0();
      Var_63 = mercury__cord__from_list_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ArgModules_47);
      STATE_VARIABLE_Modules_62_62 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), STATE_VARIABLE_Modules_0_8, Var_63);
      Var_65 = mercury__cord__from_list_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ArgExtraObjFiles_48);
      STATE_VARIABLE_ExtraObjFiles_64_64 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), STATE_VARIABLE_ExtraObjFiles_0_10, Var_65);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__7_7 = Args_41;
      next_value_of_STATE_VARIABLE_Modules_0_8 = STATE_VARIABLE_Modules_62_62;
      next_value_of_STATE_VARIABLE_ExtraObjFiles_0_10 = STATE_VARIABLE_ExtraObjFiles_64_64;
      next_value_of_STATE_VARIABLE_HaveReadModuleMaps_0_12 = STATE_VARIABLE_HaveReadModuleMaps_59_59;
      HeadVar__7_7 = next_value_of_HeadVar__7_7;
      STATE_VARIABLE_Modules_0_8 = next_value_of_STATE_VARIABLE_Modules_0_8;
      STATE_VARIABLE_ExtraObjFiles_0_10 = next_value_of_STATE_VARIABLE_ExtraObjFiles_0_10;
      STATE_VARIABLE_HaveReadModuleMaps_0_12 = next_value_of_STATE_VARIABLE_HaveReadModuleMaps_0_12;
      continue;
    }
    break;
  }
}

static void MR_CALL 
top_level__mercury_compile_main__setup_and_process_compiler_cmd_line_args_19_p_0(
  MR_Word ProgressStream_1,
  MR_Word ErrorStream_2,
  MR_Word Globals_3,
  MR_Word OpModeArgs_4,
  MR_Word InvokedByMmcMake_5,
  MR_Word DetectedGradeFlags_6,
  MR_Word OptionVariables_7,
  MR_Word OptionArgs_8,
  MR_Word HeadVar__9_9,
  MR_Word STATE_VARIABLE_Modules_0_10,
  MR_Word * STATE_VARIABLE_Modules_11,
  MR_Word STATE_VARIABLE_ExtraObjFiles_0_12,
  MR_Word * STATE_VARIABLE_ExtraObjFiles_13,
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_0_14,
  MR_Word * STATE_VARIABLE_HaveReadModuleMaps_15,
  MR_Word STATE_VARIABLE_Specs_0_16,
  MR_Word * STATE_VARIABLE_Specs_17)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__9_9 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Specs_17 = STATE_VARIABLE_Specs_0_16;
      *STATE_VARIABLE_HaveReadModuleMaps_15 = STATE_VARIABLE_HaveReadModuleMaps_0_14;
      *STATE_VARIABLE_ExtraObjFiles_13 = STATE_VARIABLE_ExtraObjFiles_0_12;
      *STATE_VARIABLE_Modules_11 = STATE_VARIABLE_Modules_0_10;
    }
    else
    {
      MR_String Arg_51 = ((MR_String) ((MR_hl_field(1, HeadVar__9_9, (MR_Integer) 0))));
      MR_Word Args_52 = ((MR_Word) ((MR_hl_field(1, HeadVar__9_9, (MR_Integer) 1))));
      MR_Word ArgModules_58;
      MR_Word ArgExtraObjFiles_59;
      MR_Word STATE_VARIABLE_HaveReadModuleMaps_72_72;
      MR_Word STATE_VARIABLE_Specs_73_73;
      MR_Word STATE_VARIABLE_Modules_76_76;
      MR_Word Var_77;
      MR_Word STATE_VARIABLE_ExtraObjFiles_78_78;
      MR_Word Var_79;
      MR_Word next_value_of_HeadVar__9_9;
      MR_Word next_value_of_STATE_VARIABLE_Modules_0_10;
      MR_Word next_value_of_STATE_VARIABLE_ExtraObjFiles_0_12;
      MR_Word next_value_of_STATE_VARIABLE_HaveReadModuleMaps_0_14;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_16;

      top_level__mercury_compile_main__setup_and_process_compiler_arg_17_p_0(ProgressStream_1, ErrorStream_2, Globals_3, OpModeArgs_4, InvokedByMmcMake_5, DetectedGradeFlags_6, OptionVariables_7, OptionArgs_8, Arg_51, &ArgModules_58, &ArgExtraObjFiles_59, STATE_VARIABLE_HaveReadModuleMaps_0_14, &STATE_VARIABLE_HaveReadModuleMaps_72_72, STATE_VARIABLE_Specs_0_16, &STATE_VARIABLE_Specs_73_73);
      if (!((Args_52 == (MR_Word) ((MR_Unsigned) 0U))))
        mercury__gc__garbage_collect_2_p_0();
      Var_77 = mercury__cord__from_list_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ArgModules_58);
      STATE_VARIABLE_Modules_76_76 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), STATE_VARIABLE_Modules_0_10, Var_77);
      Var_79 = mercury__cord__from_list_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ArgExtraObjFiles_59);
      STATE_VARIABLE_ExtraObjFiles_78_78 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), STATE_VARIABLE_ExtraObjFiles_0_12, Var_79);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__9_9 = Args_52;
      next_value_of_STATE_VARIABLE_Modules_0_10 = STATE_VARIABLE_Modules_76_76;
      next_value_of_STATE_VARIABLE_ExtraObjFiles_0_12 = STATE_VARIABLE_ExtraObjFiles_78_78;
      next_value_of_STATE_VARIABLE_HaveReadModuleMaps_0_14 = STATE_VARIABLE_HaveReadModuleMaps_72_72;
      next_value_of_STATE_VARIABLE_Specs_0_16 = STATE_VARIABLE_Specs_73_73;
      HeadVar__9_9 = next_value_of_HeadVar__9_9;
      STATE_VARIABLE_Modules_0_10 = next_value_of_STATE_VARIABLE_Modules_0_10;
      STATE_VARIABLE_ExtraObjFiles_0_12 = next_value_of_STATE_VARIABLE_ExtraObjFiles_0_12;
      STATE_VARIABLE_HaveReadModuleMaps_0_14 = next_value_of_STATE_VARIABLE_HaveReadModuleMaps_0_14;
      STATE_VARIABLE_Specs_0_16 = next_value_of_STATE_VARIABLE_Specs_0_16;
      continue;
    }
    break;
  }
}

static void MR_CALL 
top_level__mercury_compile_main__setup_and_process_compiler_arg_17_p_0(
  MR_Word ProgressStream_18,
  MR_Word ErrorStream_19,
  MR_Word Globals_20,
  MR_Word OpModeArgs_21,
  MR_Word InvokedByMmcMake_22,
  MR_Word DetectedGradeFlags_23,
  MR_Word OptionVariables_24,
  MR_Word OptionArgs_25,
  MR_String Arg_26,
  MR_Word * ModulesToLink_27,
  MR_Word * ExtraObjFiles_28,
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_0_39,
  MR_Word * STATE_VARIABLE_HaveReadModuleMaps_40,
  MR_Word STATE_VARIABLE_Specs_0_41,
  MR_Word * STATE_VARIABLE_Specs_42)
{
  MR_bool succeeded;
  MR_Word FileOrModule_32;
  MR_Word ModuleName_33;
  MR_Word MayBuild_35;
  MR_String FileName_47;

  succeeded = mercury__string__remove_suffix_3_p_0(Arg_26, (MR_String) ".m", &FileName_47);
  if (succeeded)
  {
    {
      FileOrModule_32 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, FileOrModule_32, 0) = ((MR_Box) (FileName_47));
    }
    parse_tree__file_names__file_name_to_module_name_2_p_0(FileName_47, &ModuleName_33);
  }
  else
  {
    parse_tree__file_names__file_name_to_module_name_2_p_0(Arg_26, &ModuleName_33);
    {
      FileOrModule_32 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, FileOrModule_32, 0) = ((MR_Box) (ModuleName_33));
    }
  }
  make__build__setup_for_build_with_module_options_9_p_0((MR_Integer) 0, ModuleName_33, DetectedGradeFlags_23, OptionVariables_24, OptionArgs_25, (MR_Word) ((MR_Unsigned) 0U), &MayBuild_35);
  if (((MR_tag((MR_Word) MayBuild_35)) == (MR_Integer) 1))
  {
    MR_Word BuildGlobals_38 = ((MR_Word) ((MR_hl_field(1, MayBuild_35, (MR_Integer) 1))));

    top_level__mercury_compile_main__do_process_compiler_arg_13_p_0(ProgressStream_18, ErrorStream_19, BuildGlobals_38, OpModeArgs_21, InvokedByMmcMake_22, OptionArgs_25, FileOrModule_32, ModulesToLink_27, ExtraObjFiles_28, STATE_VARIABLE_HaveReadModuleMaps_0_39, STATE_VARIABLE_HaveReadModuleMaps_40);
  }
  else
  {
    MR_Word SetupSpecs_36 = ((MR_Word) ((MR_hl_field(0, MayBuild_35, (MR_Integer) 0))));

    parse_tree__write_error_spec__write_error_specs_5_p_0(ErrorStream_19, Globals_20, SetupSpecs_36);
    *ModulesToLink_27 = (MR_Word) ((MR_Unsigned) 0U);
    *ExtraObjFiles_28 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_HaveReadModuleMaps_40 = STATE_VARIABLE_HaveReadModuleMaps_0_39;
  }
  *STATE_VARIABLE_Specs_42 = STATE_VARIABLE_Specs_0_41;
}

static void MR_CALL 
top_level__mercury_compile_main__setup_and_process_compiler_stdin_args_19_p_0(
  MR_Word ProgressStream_20,
  MR_Word ErrorStream_21,
  MR_Word StdIn_22,
  MR_Word Globals_23,
  MR_Word OpModeArgs_24,
  MR_Word InvokedByMmcMake_25,
  MR_Word DetectedGradeFlags_26,
  MR_Word OptionVariables_27,
  MR_Word OptionArgs_28,
  MR_Word STATE_VARIABLE_Modules_0_43,
  MR_Word * STATE_VARIABLE_Modules_44,
  MR_Word STATE_VARIABLE_ExtraObjFiles_0_45,
  MR_Word * STATE_VARIABLE_ExtraObjFiles_46,
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_0_47,
  MR_Word * STATE_VARIABLE_HaveReadModuleMaps_48,
  MR_Word STATE_VARIABLE_Specs_0_49,
  MR_Word * STATE_VARIABLE_Specs_50)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word LineResult_34;

    // setup for model_det tailcalls optimized into a loop
    ;
    succeeded = mercury__cord__is_empty_1_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), STATE_VARIABLE_Modules_0_43);
    if (!(succeeded))
      mercury__gc__garbage_collect_2_p_0();
    mercury__io__read_line_as_string_4_p_0(StdIn_22, &LineResult_34);
    switch (MR_tag((MR_Word) LineResult_34)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *STATE_VARIABLE_Modules_44 = STATE_VARIABLE_Modules_0_43;
          *STATE_VARIABLE_ExtraObjFiles_46 = STATE_VARIABLE_ExtraObjFiles_0_45;
          *STATE_VARIABLE_HaveReadModuleMaps_48 = STATE_VARIABLE_HaveReadModuleMaps_0_47;
          *STATE_VARIABLE_Specs_50 = STATE_VARIABLE_Specs_0_49;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_String Line_35 = ((MR_String) ((MR_hl_field(1, LineResult_34, (MR_Integer) 0))));
          MR_String Arg_36;
          MR_Word ArgModules_37;
          MR_Word ArgExtraObjFiles_38;
          MR_Word STATE_VARIABLE_HaveReadModuleMaps_55_55;
          MR_Word STATE_VARIABLE_Modules_58_58;
          MR_Word Var_59;
          MR_Word STATE_VARIABLE_ExtraObjFiles_60_60;
          MR_Word Var_61;
          MR_Word FileOrModule_82;
          MR_Word ModuleName_83;
          MR_Word MayBuild_85;
          MR_String FileName_91;
          MR_Word next_value_of_STATE_VARIABLE_Modules_0_43;
          MR_Word next_value_of_STATE_VARIABLE_ExtraObjFiles_0_45;
          MR_Word next_value_of_STATE_VARIABLE_HaveReadModuleMaps_0_47;

          Arg_36 = mercury__string__rstrip_1_f_0(Line_35);
          succeeded = mercury__string__remove_suffix_3_p_0(Arg_36, (MR_String) ".m", &FileName_91);
          if (succeeded)
          {
            {
              FileOrModule_82 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, FileOrModule_82, 0) = ((MR_Box) (FileName_91));
            }
            parse_tree__file_names__file_name_to_module_name_2_p_0(FileName_91, &ModuleName_83);
          }
          else
          {
            parse_tree__file_names__file_name_to_module_name_2_p_0(Arg_36, &ModuleName_83);
            {
              FileOrModule_82 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, FileOrModule_82, 0) = ((MR_Box) (ModuleName_83));
            }
          }
          make__build__setup_for_build_with_module_options_9_p_0((MR_Integer) 0, ModuleName_83, DetectedGradeFlags_26, OptionVariables_27, OptionArgs_28, (MR_Word) ((MR_Unsigned) 0U), &MayBuild_85);
          if (((MR_tag((MR_Word) MayBuild_85)) == (MR_Integer) 1))
          {
            MR_Word BuildGlobals_88 = ((MR_Word) ((MR_hl_field(1, MayBuild_85, (MR_Integer) 1))));

            top_level__mercury_compile_main__do_process_compiler_arg_13_p_0(ProgressStream_20, ErrorStream_21, BuildGlobals_88, OpModeArgs_24, InvokedByMmcMake_25, OptionArgs_28, FileOrModule_82, &ArgModules_37, &ArgExtraObjFiles_38, STATE_VARIABLE_HaveReadModuleMaps_0_47, &STATE_VARIABLE_HaveReadModuleMaps_55_55);
          }
          else
          {
            MR_Word SetupSpecs_86 = ((MR_Word) ((MR_hl_field(0, MayBuild_85, (MR_Integer) 0))));

            parse_tree__write_error_spec__write_error_specs_5_p_0(ErrorStream_21, Globals_23, SetupSpecs_86);
            ArgModules_37 = (MR_Word) ((MR_Unsigned) 0U);
            ArgExtraObjFiles_38 = (MR_Word) ((MR_Unsigned) 0U);
            STATE_VARIABLE_HaveReadModuleMaps_55_55 = STATE_VARIABLE_HaveReadModuleMaps_0_47;
          }
          Var_59 = mercury__cord__from_list_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ArgModules_37);
          STATE_VARIABLE_Modules_58_58 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), STATE_VARIABLE_Modules_0_43, Var_59);
          Var_61 = mercury__cord__from_list_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ArgExtraObjFiles_38);
          STATE_VARIABLE_ExtraObjFiles_60_60 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), STATE_VARIABLE_ExtraObjFiles_0_45, Var_61);
          // direct tailcall eliminated
          ;
          next_value_of_STATE_VARIABLE_Modules_0_43 = STATE_VARIABLE_Modules_58_58;
          next_value_of_STATE_VARIABLE_ExtraObjFiles_0_45 = STATE_VARIABLE_ExtraObjFiles_60_60;
          next_value_of_STATE_VARIABLE_HaveReadModuleMaps_0_47 = STATE_VARIABLE_HaveReadModuleMaps_55_55;
          STATE_VARIABLE_Modules_0_43 = next_value_of_STATE_VARIABLE_Modules_0_43;
          STATE_VARIABLE_ExtraObjFiles_0_45 = next_value_of_STATE_VARIABLE_ExtraObjFiles_0_45;
          STATE_VARIABLE_HaveReadModuleMaps_0_47 = next_value_of_STATE_VARIABLE_HaveReadModuleMaps_0_47;
          continue;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Error_39 = ((MR_Word) ((MR_hl_field(2, LineResult_34, (MR_Integer) 0))));
          MR_String Msg_40;
          MR_Word Pieces_41;
          MR_Word Spec_42;
          MR_Word Var_69;
          MR_Word Var_70;

          mercury__io__error_message_2_p_0(Error_39, &Msg_40);
          {
            Var_70 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_70, 0) = ((MR_Box) ((MR_Unsigned) 6U));
            MR_hl_field(3, Var_70, 1) = ((MR_Box) (Msg_40));
          }
          {
            Var_69 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_69, 0) = ((MR_Box) (Var_70));
            MR_hl_field(1, Var_69, 1) = ((MR_Box) (MR_mkword(1, &top_level__mercury_compile_main_scalar_common_1[9])));
          }
          {
            Pieces_41 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Pieces_41, 0) = ((MR_Box) (MR_mkword(3, &top_level__mercury_compile_main_scalar_common_1[10])));
            MR_hl_field(1, Pieces_41, 1) = ((MR_Box) (Var_69));
          }
          {
            Spec_42 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(2, Spec_42, 0) = ((MR_Box) ((MR_String) "predicate \140top_level.mercury_compile_main.setup_and_process_compiler_stdin_args\'/19"));
            MR_hl_field(2, Spec_42, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(2, Spec_42, 2) = ((MR_Box) ((MR_Unsigned) 12U));
            MR_hl_field(2, Spec_42, 3) = ((MR_Box) (Pieces_41));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *STATE_VARIABLE_Specs_50 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (Spec_42));
            MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_49));
          }
          *STATE_VARIABLE_Modules_44 = STATE_VARIABLE_Modules_0_43;
          *STATE_VARIABLE_ExtraObjFiles_46 = STATE_VARIABLE_ExtraObjFiles_0_45;
          *STATE_VARIABLE_HaveReadModuleMaps_48 = STATE_VARIABLE_HaveReadModuleMaps_0_47;
        }
        break;
    }
    break;
  }
}

static void MR_CALL 
top_level__mercury_compile_main__do_process_compiler_arg_13_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_TimestampFiles_12;

  top_level__mercury_compile_main__find_timestamp_files_2_7_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), &conv1_TimestampFiles_12);
  *wrapper_arg_2 = ((MR_Box) (conv1_TimestampFiles_12));
}

static void MR_CALL 
top_level__mercury_compile_main__do_process_compiler_arg_13_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_TargetFiles_12;

  top_level__mercury_compile_main__usual_find_target_files_7_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), &conv0_TargetFiles_12);
  *wrapper_arg_2 = ((MR_Box) (conv0_TargetFiles_12));
}

static void MR_CALL 
top_level__mercury_compile_main__do_process_compiler_arg_13_p_0(
  MR_Word ProgressStream_14,
  MR_Word ErrorStream_15,
  MR_Word Globals0_16,
  MR_Word OpModeArgs_17,
  MR_Word InvokedByMmcMake_18,
  MR_Word OptionArgs_19,
  MR_Word FileOrModule_20,
  MR_Word * ModulesToLink_21,
  MR_Word * ExtraObjFiles_22,
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_0_40,
  MR_Word * STATE_VARIABLE_HaveReadModuleMaps_41)
{
  MR_bool succeeded;

  switch (MR_tag((MR_Word) OpModeArgs_17)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(OpModeArgs_17)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word DepSpecs_26;

            if (((MR_tag((MR_Word) FileOrModule_20)) == (MR_Integer) 0))
            {
              MR_String FileName_25 = ((MR_String) ((MR_hl_field(0, FileOrModule_20, (MR_Integer) 0))));

              parse_tree__generate_dep_d_files__generate_dep_file_for_file_5_p_0(Globals0_16, FileName_25, &DepSpecs_26);
            }
            else
            {
              MR_Word ModuleName_27 = ((MR_Word) ((MR_hl_field(1, FileOrModule_20, (MR_Integer) 0))));

              parse_tree__generate_dep_d_files__generate_dep_file_for_module_5_p_0(Globals0_16, ModuleName_27, &DepSpecs_26);
            }
            parse_tree__write_error_spec__write_error_specs_5_p_0(ErrorStream_15, Globals0_16, DepSpecs_26);
            *ModulesToLink_21 = (MR_Word) ((MR_Unsigned) 0U);
            *ExtraObjFiles_22 = (MR_Word) ((MR_Unsigned) 0U);
            *STATE_VARIABLE_HaveReadModuleMaps_41 = STATE_VARIABLE_HaveReadModuleMaps_0_40;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word DepSpecs_76;

            if (((MR_tag((MR_Word) FileOrModule_20)) == (MR_Integer) 0))
            {
              MR_String FileName_71 = ((MR_String) ((MR_hl_field(0, FileOrModule_20, (MR_Integer) 0))));

              parse_tree__generate_dep_d_files__generate_d_file_for_file_5_p_0(Globals0_16, FileName_71, &DepSpecs_76);
            }
            else
            {
              MR_Word ModuleName_72 = ((MR_Word) ((MR_hl_field(1, FileOrModule_20, (MR_Integer) 0))));

              parse_tree__generate_dep_d_files__generate_d_file_for_module_5_p_0(Globals0_16, ModuleName_72, &DepSpecs_76);
            }
            parse_tree__write_error_spec__write_error_specs_5_p_0(ErrorStream_15, Globals0_16, DepSpecs_76);
            *ModulesToLink_21 = (MR_Word) ((MR_Unsigned) 0U);
            *ExtraObjFiles_22 = (MR_Word) ((MR_Unsigned) 0U);
            *STATE_VARIABLE_HaveReadModuleMaps_41 = STATE_VARIABLE_HaveReadModuleMaps_0_40;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Globals_28;
            MR_Word HaveReadSrc_29;

            top_level__mercury_compile_main__read_module_or_file_10_p_0(ProgressStream_14, Globals0_16, &Globals_28, FileOrModule_20, (MR_Integer) 1, &HaveReadSrc_29, STATE_VARIABLE_HaveReadModuleMaps_0_40, STATE_VARIABLE_HaveReadModuleMaps_41);
            if (((MR_tag((MR_Word) HaveReadSrc_29)) == (MR_Integer) 1))
            {
              MR_Word Errors_31 = ((MR_Word) ((MR_hl_field(1, HaveReadSrc_29, (MR_Integer) 1))));
              MR_Word Specs_32;

              Specs_32 = parse_tree__parse_error__get_read_module_specs_1_f_0(Errors_31);
              parse_tree__write_error_spec__write_error_specs_5_p_0(ErrorStream_15, Globals_28, Specs_32);
            }
            else
            {
              MR_Word ParseTreeSrc_34 = ((MR_Word) ((MR_hl_field(0, HaveReadSrc_29, (MR_Integer) 2))));
              MR_Word Errors_83 = ((MR_Word) ((MR_hl_field(0, HaveReadSrc_29, (MR_Integer) 3))));
              MR_Word Specs_84;
              MR_Word Var_124;
              MR_Word Var_126;

              Specs_84 = parse_tree__parse_error__get_read_module_specs_1_f_0(Errors_83);
              parse_tree__write_error_spec__write_error_specs_5_p_0(ErrorStream_15, Globals_28, Specs_84);
              Var_126 = ((MR_Word) ((MR_hl_field(0, Errors_83, (MR_Integer) 0))));
              Var_124 = ((MR_Word) ((MR_hl_field(0, Errors_83, (MR_Integer) 2))));
              succeeded = mercury__set__is_non_empty_1_p_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_fatal_read_module_error_0), Var_126);
              if (!(succeeded))
              {
                MR_Word HaltSyntax_108;
                MR_Word Var_111;

                succeeded = mercury__set__is_non_empty_1_p_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_nonfatal_read_module_error_0), Var_124);
                if (succeeded)
                {
                  Var_111 = (MR_Integer) 6;
                  libs__globals__lookup_bool_option_3_p_0(Globals_28, Var_111, &HaltSyntax_108);
                  succeeded = (HaltSyntax_108 == (MR_Integer) 1);
                }
              }
              if (!(succeeded))
              {
                MR_String OutputFileName_35;
                MR_Word ModuleName_79 = ((MR_Word) ((MR_hl_field(0, ParseTreeSrc_34, (MR_Integer) 0))));
                MR_Word _Succeeded_36;

                parse_tree__file_names__module_name_to_file_name_9_p_0(Globals_28, (MR_String) "predicate \140top_level.mercury_compile_main.do_process_compiler_arg\'/13", (MR_Integer) 0, (MR_Word) (MR_mkword(1, &top_level__mercury_compile_main_scalar_common_2[2])), (MR_Word) (MR_mkword(3, &top_level__mercury_compile_main_scalar_common_1[11])), ModuleName_79, &OutputFileName_35);
                parse_tree__parse_tree_out__output_parse_tree_src_8_p_0(ProgressStream_14, ErrorStream_15, Globals_28, OutputFileName_35, ParseTreeSrc_34, &_Succeeded_36);
              }
            }
            *ModulesToLink_21 = (MR_Word) ((MR_Unsigned) 0U);
            *ExtraObjFiles_22 = (MR_Word) ((MR_Unsigned) 0U);
          }
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word InterfaceFile_37 = ((MR_Unsigned) ((MR_hl_field(1, OpModeArgs_17, (MR_Integer) 0))) & (MR_Integer) 3);

        top_level__mercury_compile_main__do_process_compiler_arg_make_interface_9_p_0(ProgressStream_14, ErrorStream_15, Globals0_16, InterfaceFile_37, FileOrModule_20, STATE_VARIABLE_HaveReadModuleMaps_0_40, STATE_VARIABLE_HaveReadModuleMaps_41);
        *ModulesToLink_21 = (MR_Word) ((MR_Unsigned) 0U);
        *ExtraObjFiles_22 = (MR_Word) ((MR_Unsigned) 0U);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word OpModeAugment_38 = ((MR_Word) ((MR_hl_field(2, OpModeArgs_17, (MR_Integer) 0))));
        MR_Word ModulesToRecompile_39;
        MR_Word STATE_VARIABLE_HaveReadModuleMaps_66_66;
        MR_Word Globals_87;
        MR_Word Smart0_90;
        MR_Word DisableSmart_91;
        MR_Word Var_68;

        libs__globals__lookup_bool_option_3_p_0(Globals0_16, (MR_Integer) 152, &Smart0_90);
        libs__globals__io_get_disable_smart_recompilation_3_p_0(&DisableSmart_91);
        switch (DisableSmart_91) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              libs__globals__set_option_4_p_0((MR_Integer) 152, (MR_Word) (MR_mkword(1, &top_level__mercury_compile_main_scalar_common_2[1])), Globals0_16, &Globals_87);
              ModulesToRecompile_39 = (MR_Word) ((MR_Unsigned) 0U);
              STATE_VARIABLE_HaveReadModuleMaps_66_66 = STATE_VARIABLE_HaveReadModuleMaps_0_40;
            }
            break;
          case (MR_Integer) 0:
            {
              Globals_87 = Globals0_16;
              switch (Smart0_90) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    ModulesToRecompile_39 = (MR_Word) ((MR_Unsigned) 0U);
                    STATE_VARIABLE_HaveReadModuleMaps_66_66 = STATE_VARIABLE_HaveReadModuleMaps_0_40;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word ModuleName_93;
                    MR_Word FindTargetFiles_95;
                    MR_Word FindTimestampFiles_96;
                    MR_Word CompilationTarget_102;
                    MR_Word TargetOtherExt_103;
                    MR_Word TargetNewExt_104;
                    MR_Word CompilationTarget_105;
                    MR_Word TimestampOtherExt_106;
                    MR_Word TimestampNewExt_107;

                    if (((MR_tag((MR_Word) FileOrModule_20)) == (MR_Integer) 0))
                    {
                      MR_String FileName_94 = ((MR_String) ((MR_hl_field(0, FileOrModule_20, (MR_Integer) 0))));

                      parse_tree__file_names__file_name_to_module_name_2_p_0(FileName_94, &ModuleName_93);
                    }
                    else
                      ModuleName_93 = ((MR_Word) ((MR_hl_field(1, FileOrModule_20, (MR_Integer) 0))));
                    libs__globals__get_target_2_p_0(Globals_87, &CompilationTarget_102);
                    switch (CompilationTarget_102) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                          TargetOtherExt_103 = (MR_Word) (((MR_Box) ((MR_String) ".c")));
                          TargetNewExt_104 = (MR_Word) (MR_mkword(3, &top_level__mercury_compile_main_scalar_common_1[12]));
                        }
                        break;
                      case (MR_Integer) 1:
                        {
                          TargetOtherExt_103 = (MR_Word) (((MR_Box) ((MR_String) ".cs")));
                          TargetNewExt_104 = (MR_Word) (MR_mkword(3, &top_level__mercury_compile_main_scalar_common_1[13]));
                        }
                        break;
                      case (MR_Integer) 2:
                        {
                          TargetOtherExt_103 = (MR_Word) (((MR_Box) ((MR_String) ".java")));
                          TargetNewExt_104 = (MR_Word) (MR_mkword(3, &top_level__mercury_compile_main_scalar_common_1[14]));
                        }
                        break;
                    }
                    {
                      FindTargetFiles_95 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(0, FindTargetFiles_95, 0) = ((MR_Box) (&top_level__mercury_compile_main_scalar_common_7[1]));
                      MR_hl_field(0, FindTargetFiles_95, 1) = ((MR_Box) (top_level__mercury_compile_main__do_process_compiler_arg_13_p_0_1));
                      MR_hl_field(0, FindTargetFiles_95, 2) = ((MR_Box) ((MR_Integer) 3));
                      MR_hl_field(0, FindTargetFiles_95, 3) = ((MR_Box) (Globals0_16));
                      MR_hl_field(0, FindTargetFiles_95, 4) = ((MR_Box) (TargetOtherExt_103));
                      MR_hl_field(0, FindTargetFiles_95, 5) = ((MR_Box) (TargetNewExt_104));
                    }
                    libs__globals__get_target_2_p_0(Globals_87, &CompilationTarget_105);
                    switch (CompilationTarget_105) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                          TimestampOtherExt_106 = (MR_Word) (((MR_Box) ((MR_String) ".c_date")));
                          TimestampNewExt_107 = (MR_Word) (MR_mkword(3, &top_level__mercury_compile_main_scalar_common_1[15]));
                        }
                        break;
                      case (MR_Integer) 1:
                        {
                          TimestampOtherExt_106 = (MR_Word) (((MR_Box) ((MR_String) ".cs_date")));
                          TimestampNewExt_107 = (MR_Word) (MR_mkword(3, &top_level__mercury_compile_main_scalar_common_1[16]));
                        }
                        break;
                      case (MR_Integer) 2:
                        {
                          TimestampOtherExt_106 = (MR_Word) (((MR_Box) ((MR_String) ".java_date")));
                          TimestampNewExt_107 = (MR_Word) (MR_mkword(3, &top_level__mercury_compile_main_scalar_common_1[17]));
                        }
                        break;
                    }
                    {
                      FindTimestampFiles_96 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(0, FindTimestampFiles_96, 0) = ((MR_Box) (&top_level__mercury_compile_main_scalar_common_7[1]));
                      MR_hl_field(0, FindTimestampFiles_96, 1) = ((MR_Box) (top_level__mercury_compile_main__do_process_compiler_arg_13_p_0_2));
                      MR_hl_field(0, FindTimestampFiles_96, 2) = ((MR_Box) ((MR_Integer) 3));
                      MR_hl_field(0, FindTimestampFiles_96, 3) = ((MR_Box) (Globals0_16));
                      MR_hl_field(0, FindTimestampFiles_96, 4) = ((MR_Box) (TimestampOtherExt_106));
                      MR_hl_field(0, FindTimestampFiles_96, 5) = ((MR_Box) (TimestampNewExt_107));
                    }
                    recompilation__check__should_recompile_9_p_0(Globals_87, ModuleName_93, FindTargetFiles_95, FindTimestampFiles_96, &ModulesToRecompile_39, STATE_VARIABLE_HaveReadModuleMaps_0_40, &STATE_VARIABLE_HaveReadModuleMaps_66_66);
                  }
                  break;
              }
            }
            break;
        }
        succeeded = (ModulesToRecompile_39 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          Var_68 = ((MR_Word) ((MR_hl_field(1, ModulesToRecompile_39, (MR_Integer) 0))));
          succeeded = (Var_68 == (MR_Word) ((MR_Unsigned) 0U));
        }
        if (succeeded)
        {
          *ModulesToLink_21 = (MR_Word) ((MR_Unsigned) 0U);
          *ExtraObjFiles_22 = (MR_Word) ((MR_Unsigned) 0U);
          *STATE_VARIABLE_HaveReadModuleMaps_41 = STATE_VARIABLE_HaveReadModuleMaps_66_66;
        }
        else
          top_level__mercury_compile_main__read_augment_and_process_module_14_p_0(ProgressStream_14, ErrorStream_15, Globals_87, OpModeAugment_38, InvokedByMmcMake_18, OptionArgs_19, FileOrModule_20, ModulesToRecompile_39, ModulesToLink_21, ExtraObjFiles_22, STATE_VARIABLE_HaveReadModuleMaps_66_66, STATE_VARIABLE_HaveReadModuleMaps_41);
      }
      break;
  }
}

static void MR_CALL 
top_level__mercury_compile_main__read_augment_and_process_module_14_p_0(
  MR_Word ProgressStream_15,
  MR_Word ErrorStream_16,
  MR_Word Globals0_17,
  MR_Word OpModeAugment_18,
  MR_Word InvokedByMmcMake_19,
  MR_Word OptionArgs_20,
  MR_Word FileOrModule_21,
  MR_Word MaybeModulesToRecompile_22,
  MR_Word * ModulesToLink_23,
  MR_Word * ExtraObjFiles_24,
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_0_38,
  MR_Word * STATE_VARIABLE_HaveReadModuleMaps_39)
{
  MR_bool succeeded;
  MR_Word Globals_30;
  MR_Word HaveReadSrc_31;
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_47_47;

  switch (MR_tag((MR_Word) OpModeAugment_18)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(OpModeAugment_18)) {
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
            MR_Word ReportCmdLineArgsDotErr_28;
            MR_Word StdErrStream_29;

            libs__globals__lookup_bool_option_3_p_0(Globals0_17, (MR_Integer) 81, &ReportCmdLineArgsDotErr_28);
            mercury__io__stderr_stream_3_p_0(&StdErrStream_29);
            switch (ReportCmdLineArgsDotErr_28) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_String Var_62;
                  MR_Word Var_64;

                  mercury__io__write_string_4_p_0(StdErrStream_29, (MR_String) "% Command line options start\n");
                  Var_64 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), OptionArgs_20, (MR_Word) ((MR_Unsigned) 0U));
                  Var_62 = mercury__string__join_list_2_f_0((MR_String) "\n% ", Var_64);
                  mercury__io__write_string_4_p_0(StdErrStream_29, (MR_String) "% ");
                  mercury__io__write_string_4_p_0(StdErrStream_29, Var_62);
                  mercury__io__write_string_4_p_0(StdErrStream_29, (MR_String) "\n");
                  mercury__io__write_string_4_p_0(StdErrStream_29, (MR_String) "% Command line options end\n");
                }
                break;
            }
          }
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word ReportCmdLineArgsDotErr_28;
        MR_Word StdErrStream_29;

        libs__globals__lookup_bool_option_3_p_0(Globals0_17, (MR_Integer) 81, &ReportCmdLineArgsDotErr_28);
        mercury__io__stderr_stream_3_p_0(&StdErrStream_29);
        switch (ReportCmdLineArgsDotErr_28) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
            }
            break;
          case (MR_Integer) 1:
            {
              MR_String Var_62;
              MR_Word Var_64;

              mercury__io__write_string_4_p_0(StdErrStream_29, (MR_String) "% Command line options start\n");
              Var_64 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), OptionArgs_20, (MR_Word) ((MR_Unsigned) 0U));
              Var_62 = mercury__string__join_list_2_f_0((MR_String) "\n% ", Var_64);
              mercury__io__write_string_4_p_0(StdErrStream_29, (MR_String) "% ");
              mercury__io__write_string_4_p_0(StdErrStream_29, Var_62);
              mercury__io__write_string_4_p_0(StdErrStream_29, (MR_String) "\n");
              mercury__io__write_string_4_p_0(StdErrStream_29, (MR_String) "% Command line options end\n");
            }
            break;
        }
      }
      break;
  }
  top_level__mercury_compile_main__read_module_or_file_10_p_0(ProgressStream_15, Globals0_17, &Globals_30, FileOrModule_21, (MR_Integer) 0, &HaveReadSrc_31, STATE_VARIABLE_HaveReadModuleMaps_0_38, &STATE_VARIABLE_HaveReadModuleMaps_47_47);
  if (((MR_tag((MR_Word) HaveReadSrc_31)) == (MR_Integer) 1))
  {
    MR_Word Errors_33 = ((MR_Word) ((MR_hl_field(1, HaveReadSrc_31, (MR_Integer) 1))));
    MR_Word Specs0_34;

    Specs0_34 = parse_tree__parse_error__get_read_module_specs_1_f_0(Errors_33);
    parse_tree__write_error_spec__write_error_specs_5_p_0(ErrorStream_16, Globals_30, Specs0_34);
    *ModulesToLink_23 = (MR_Word) ((MR_Unsigned) 0U);
    *ExtraObjFiles_24 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_HaveReadModuleMaps_39 = STATE_VARIABLE_HaveReadModuleMaps_47_47;
  }
  else
  {
    MR_String FileName_35 = ((MR_String) ((MR_hl_field(0, HaveReadSrc_31, (MR_Integer) 0))));
    MR_Word MaybeTimestamp_36 = ((MR_Word) ((MR_hl_field(0, HaveReadSrc_31, (MR_Integer) 1))));
    MR_Word ParseTreeSrc_37 = ((MR_Word) ((MR_hl_field(0, HaveReadSrc_31, (MR_Integer) 2))));
    MR_Word Errors_53 = ((MR_Word) ((MR_hl_field(0, HaveReadSrc_31, (MR_Integer) 3))));
    MR_Word Specs0_54;
    MR_Word Var_91;
    MR_Word Var_93;

    Specs0_54 = parse_tree__parse_error__get_read_module_specs_1_f_0(Errors_53);
    Var_93 = ((MR_Word) ((MR_hl_field(0, Errors_53, (MR_Integer) 0))));
    Var_91 = ((MR_Word) ((MR_hl_field(0, Errors_53, (MR_Integer) 2))));
    succeeded = mercury__set__is_non_empty_1_p_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_fatal_read_module_error_0), Var_93);
    if (!(succeeded))
    {
      MR_Word HaltSyntax_75;
      MR_Word Var_78;

      succeeded = mercury__set__is_non_empty_1_p_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_nonfatal_read_module_error_0), Var_91);
      if (succeeded)
      {
        Var_78 = (MR_Integer) 6;
        libs__globals__lookup_bool_option_3_p_0(Globals_30, Var_78, &HaltSyntax_75);
        succeeded = (HaltSyntax_75 == (MR_Integer) 1);
      }
    }
    if (succeeded)
    {
      parse_tree__write_error_spec__write_error_specs_5_p_0(ErrorStream_16, Globals_30, Specs0_54);
      *ModulesToLink_23 = (MR_Word) ((MR_Unsigned) 0U);
      *ExtraObjFiles_24 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_HaveReadModuleMaps_39 = STATE_VARIABLE_HaveReadModuleMaps_47_47;
    }
    else
      top_level__mercury_compile_main__read_augment_and_process_module_ok_16_p_0(ProgressStream_15, ErrorStream_16, Globals_30, OpModeAugment_18, InvokedByMmcMake_19, FileName_35, MaybeTimestamp_36, ParseTreeSrc_37, Errors_53, MaybeModulesToRecompile_22, ModulesToLink_23, ExtraObjFiles_24, STATE_VARIABLE_HaveReadModuleMaps_47_47, STATE_VARIABLE_HaveReadModuleMaps_39);
  }
}

static void MR_CALL 
top_level__mercury_compile_main__read_augment_and_process_module_ok_16_p_0_5(
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
top_level__mercury_compile_main__read_augment_and_process_module_ok_16_p_0_4(
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
  MR_Word conv4_ExtraObjFiles_30;
  MR_Word conv3_STATE_VARIABLE_Specs_41;
  MR_Word conv2_STATE_VARIABLE_HaveReadModuleMaps_43;

  top_level__mercury_compile_main__augment_and_process_module_18_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 6)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 7)))), ((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 8)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 9)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 10)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 11)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 12)))), ((MR_Word) (wrapper_arg_1)), &conv4_ExtraObjFiles_30, ((MR_Word) (wrapper_arg_3)), &conv3_STATE_VARIABLE_Specs_41, ((MR_Word) (wrapper_arg_5)), &conv2_STATE_VARIABLE_HaveReadModuleMaps_43);
  *wrapper_arg_2 = ((MR_Box) (conv4_ExtraObjFiles_30));
  *wrapper_arg_4 = ((MR_Box) (conv3_STATE_VARIABLE_Specs_41));
  *wrapper_arg_6 = ((MR_Box) (conv2_STATE_VARIABLE_HaveReadModuleMaps_43));
}

static void MR_CALL 
top_level__mercury_compile_main__read_augment_and_process_module_ok_16_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_TimestampFiles_12;

  top_level__mercury_compile_main__find_timestamp_files_2_7_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), &conv1_TimestampFiles_12);
  *wrapper_arg_2 = ((MR_Box) (conv1_TimestampFiles_12));
}

static MR_Box MR_CALL 
top_level__mercury_compile_main__read_augment_and_process_module_ok_16_p_0_2(
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
top_level__mercury_compile_main__read_augment_and_process_module_ok_16_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = top_level__mercury_compile_main__IntroducedFrom__pred__read_augment_and_process_module_ok__1445__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static void MR_CALL 
top_level__mercury_compile_main__read_augment_and_process_module_ok_16_p_0(
  MR_Word ProgressStream_17,
  MR_Word ErrorStream_18,
  MR_Word Globals_19,
  MR_Word OpModeAugment_20,
  MR_Word InvokedByMmcMake_21,
  MR_String FileName_22,
  MR_Word MaybeTimestamp_23,
  MR_Word ParseTreeSrc_24,
  MR_Word Errors_25,
  MR_Word MaybeModulesToRecompile_26,
  MR_Word * ModulesToLink_27,
  MR_Word * ExtraObjFiles_28,
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_0_45,
  MR_Word * STATE_VARIABLE_HaveReadModuleMaps_46)
{
  MR_bool succeeded;
  MR_Word Specs0_31;
  MR_Word ModuleName_32;
  MR_Word ParseTreeModuleSrcs0_33;
  MR_Word Specs1_34;
  MR_Word ParseTreeModuleSrcsToRecompile_38;
  MR_Word ParseTreeModuleNames_39;
  MR_Word NestedModuleNames_40;
  MR_Word FindTimestampFiles_41;
  MR_Word TraceProf_42;
  MR_Word GlobalsToUse_44;
  MR_Word Var_51;
  MR_Word CompilationTarget_107;
  MR_Word TimestampOtherExt_108;
  MR_Word TimestampNewExt_109;
  MR_Word ExtraObjFileLists_110;
  MR_Word Var_111;
  MR_Word STATE_VARIABLE_Specs_42_112;
  MR_Word Var_105;
  MR_Box conv7_STATE_VARIABLE_Specs_42_112;
  MR_Box conv6_STATE_VARIABLE_HaveReadModuleMaps_46;
  MR_Box conv5_STATE_VARIABLE_IO_44_113;

  Specs0_31 = parse_tree__parse_error__get_read_module_specs_1_f_0(Errors_25);
  ModuleName_32 = ((MR_Word) ((MR_hl_field(0, ParseTreeSrc_24, (MR_Integer) 0))));
  parse_tree__split_parse_tree_src__split_into_compilation_units_perform_checks_5_p_0(Globals_19, ParseTreeSrc_24, &ParseTreeModuleSrcs0_33, Specs0_31, &Specs1_34);
  if ((MaybeModulesToRecompile_26 == (MR_Word) ((MR_Unsigned) 0U)))
    ParseTreeModuleSrcsToRecompile_38 = ParseTreeModuleSrcs0_33;
  else
  {
    MR_Word ModulesToRecompile_35 = ((MR_Word) ((MR_hl_field(1, MaybeModulesToRecompile_26, (MR_Integer) 0))));
    MR_Word ToRecompile_36;

    {
      ToRecompile_36 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, ToRecompile_36, 0) = ((MR_Box) (&top_level__mercury_compile_main_scalar_common_8[0]));
      MR_hl_field(0, ToRecompile_36, 1) = ((MR_Box) (top_level__mercury_compile_main__read_augment_and_process_module_ok_16_p_0_1));
      MR_hl_field(0, ToRecompile_36, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, ToRecompile_36, 3) = ((MR_Box) (ModulesToRecompile_35));
    }
    mercury__list__filter_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_module_src_0), ToRecompile_36, ParseTreeModuleSrcs0_33, &ParseTreeModuleSrcsToRecompile_38);
  }
  Var_51 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_module_src_0), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&top_level__mercury_compile_main_scalar_common_5[1]), ParseTreeModuleSrcs0_33);
  ParseTreeModuleNames_39 = mercury__set__list_to_set_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_51);
  mercury__set__delete_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (ModuleName_32)), ParseTreeModuleNames_39, &NestedModuleNames_40);
  libs__globals__get_target_2_p_0(Globals_19, &CompilationTarget_107);
  switch (CompilationTarget_107) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        TimestampOtherExt_108 = (MR_Word) (((MR_Box) ((MR_String) ".c_date")));
        TimestampNewExt_109 = (MR_Word) (MR_mkword(3, &top_level__mercury_compile_main_scalar_common_1[15]));
      }
      break;
    case (MR_Integer) 1:
      {
        TimestampOtherExt_108 = (MR_Word) (((MR_Box) ((MR_String) ".cs_date")));
        TimestampNewExt_109 = (MR_Word) (MR_mkword(3, &top_level__mercury_compile_main_scalar_common_1[16]));
      }
      break;
    case (MR_Integer) 2:
      {
        TimestampOtherExt_108 = (MR_Word) (((MR_Box) ((MR_String) ".java_date")));
        TimestampNewExt_109 = (MR_Word) (MR_mkword(3, &top_level__mercury_compile_main_scalar_common_1[17]));
      }
      break;
  }
  {
    FindTimestampFiles_41 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, FindTimestampFiles_41, 0) = ((MR_Box) (&top_level__mercury_compile_main_scalar_common_7[1]));
    MR_hl_field(0, FindTimestampFiles_41, 1) = ((MR_Box) (top_level__mercury_compile_main__read_augment_and_process_module_ok_16_p_0_3));
    MR_hl_field(0, FindTimestampFiles_41, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(0, FindTimestampFiles_41, 3) = ((MR_Box) (Globals_19));
    MR_hl_field(0, FindTimestampFiles_41, 4) = ((MR_Box) (TimestampOtherExt_108));
    MR_hl_field(0, FindTimestampFiles_41, 5) = ((MR_Box) (TimestampNewExt_109));
  }
  libs__globals__lookup_bool_option_3_p_0(Globals_19, (MR_Integer) 157, &TraceProf_42);
  succeeded = mdbcomp__builtin_modules__non_traced_mercury_builtin_module_1_p_0(ModuleName_32);
  if (succeeded)
  {
    Var_105 = mdbcomp__builtin_modules__mercury_profiling_builtin_module_0_f_0();
    succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ModuleName_32, Var_105);
    if (succeeded)
      succeeded = (TraceProf_42 == (MR_Integer) 1);
    succeeded = !(succeeded);
  }
  if (succeeded)
  {
    MR_Word Globals1_43;

    libs__globals__set_option_4_p_0((MR_Integer) 320, (MR_Word) (MR_mkword(1, &top_level__mercury_compile_main_scalar_common_2[1])), Globals_19, &Globals1_43);
    libs__globals__set_trace_level_none_2_p_0(Globals1_43, &GlobalsToUse_44);
  }
  else
    GlobalsToUse_44 = Globals_19;
  {
    Var_111 = (MR_Word) MR_new_object(MR_Word, (13 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_111, 0) = ((MR_Box) (&top_level__mercury_compile_main_scalar_common_9[0]));
    MR_hl_field(0, Var_111, 1) = ((MR_Box) (top_level__mercury_compile_main__read_augment_and_process_module_ok_16_p_0_4));
    MR_hl_field(0, Var_111, 2) = ((MR_Box) ((MR_Integer) 10));
    MR_hl_field(0, Var_111, 3) = ((MR_Box) (ProgressStream_17));
    MR_hl_field(0, Var_111, 4) = ((MR_Box) (ErrorStream_18));
    MR_hl_field(0, Var_111, 5) = ((MR_Box) (GlobalsToUse_44));
    MR_hl_field(0, Var_111, 6) = ((MR_Box) (OpModeAugment_20));
    MR_hl_field(0, Var_111, 7) = ((MR_Box) (InvokedByMmcMake_21));
    MR_hl_field(0, Var_111, 8) = ((MR_Box) (FileName_22));
    MR_hl_field(0, Var_111, 9) = ((MR_Box) (MaybeTimestamp_23));
    MR_hl_field(0, Var_111, 10) = ((MR_Box) (ModuleName_32));
    MR_hl_field(0, Var_111, 11) = ((MR_Box) (NestedModuleNames_40));
    MR_hl_field(0, Var_111, 12) = ((MR_Box) (FindTimestampFiles_41));
  }
  mercury__list__map_foldl3_9_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_module_src_0), (MR_Word) (&top_level__mercury_compile_main_scalar_common_1[0]), (MR_Word) (&top_level__mercury_compile_main_scalar_common_1[2]), (MR_Word) (&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_maps_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_111, ParseTreeModuleSrcsToRecompile_38, &ExtraObjFileLists_110, ((MR_Box) (Specs1_34)), &conv7_STATE_VARIABLE_Specs_42_112, ((MR_Box) (STATE_VARIABLE_HaveReadModuleMaps_0_45)), &conv6_STATE_VARIABLE_HaveReadModuleMaps_46, ((MR_Box) ((MR_Integer) 0)), &conv5_STATE_VARIABLE_IO_44_113);
  STATE_VARIABLE_Specs_42_112 = ((MR_Word) (conv7_STATE_VARIABLE_Specs_42_112));
  *STATE_VARIABLE_HaveReadModuleMaps_46 = ((MR_Word) (conv6_STATE_VARIABLE_HaveReadModuleMaps_46));
  parse_tree__write_error_spec__write_error_specs_5_p_0(ErrorStream_18, GlobalsToUse_44, STATE_VARIABLE_Specs_42_112);
  mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_module_src_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&top_level__mercury_compile_main_scalar_common_5[2]), ParseTreeModuleSrcsToRecompile_38, ModulesToLink_27);
  mercury__list__condense_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ExtraObjFileLists_110, ExtraObjFiles_28);
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

      parse_tree__split_parse_tree_src__split_into_compilation_units_perform_checks_5_p_0(Globals_19, ParseTreeSrc_26, &ParseTreeModuleSrcs_28, ReadSpecs_58, &ReadSplitSpecs_29);
      parse_tree__error_util__filter_interface_generation_specs_3_p_0(Globals_19, ReadSplitSpecs_29, &Specs_30);
      parse_tree__write_error_spec__write_error_specs_5_p_0(ErrorStream_11, Globals_19, Specs_30);
      parse_tree__write_error_spec__maybe_print_delayed_error_messages_4_p_0(ErrorStream_11, Globals_19);
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
            mercury__list__map_foldl2_7_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_module_src_0), (MR_Word) (&libs__maybe_util__libs__maybe_util__type_ctor_info_maybe_succeeded_0), (MR_Word) (&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_maps_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_44, ParseTreeModuleSrcs_28, &_Succeededs_31, ((MR_Box) (STATE_VARIABLE_HaveReadModuleMaps_38_38)), &conv3_STATE_VARIABLE_HaveReadModuleMaps_33, ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_35);
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
            mercury__list__map_foldl2_7_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_module_src_0), (MR_Word) (&libs__maybe_util__libs__maybe_util__type_ctor_info_maybe_succeeded_0), (MR_Word) (&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_maps_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_47, ParseTreeModuleSrcs_28, &_Succeededs_53, ((MR_Box) (STATE_VARIABLE_HaveReadModuleMaps_38_38)), &conv7_STATE_VARIABLE_HaveReadModuleMaps_33, ((MR_Box) ((MR_Integer) 0)), &conv6_STATE_VARIABLE_IO_35);
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
            mercury__list__map_foldl_5_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_module_src_0), (MR_Word) (&libs__maybe_util__libs__maybe_util__type_ctor_info_maybe_succeeded_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_50, ParseTreeModuleSrcs_28, &_Succeededs_55, ((MR_Box) ((MR_Integer) 0)), &conv9_STATE_VARIABLE_IO_35);
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

    top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_query__716__1_1_p_0(&(env).top_level__mercury_compile_main__do_op_mode_query_6_p_0_4_env_0__conv2_LambdaHeadVar__1_62, top_level__mercury_compile_main__do_op_mode_query_6_p_0_3, &env);
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

  top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_query__709__1_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_String) (wrapper_arg_1)));
}

static void MR_CALL 
top_level__mercury_compile_main__do_op_mode_query_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_query__702__1_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_String) (wrapper_arg_1)));
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

        libs__globals__lookup_string_option_3_p_0(Globals_8, (MR_Integer) 561, &CC_Type_14);
        mercury__io__print_line_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), StdOutStream_12, ((MR_Box) (CC_Type_14)));
      }
      break;
    case (MR_Integer) 3:
      backend_libs__compile_target_code__output_c_include_directory_flags_4_p_0(Globals_8, StdOutStream_12);
      break;
    case (MR_Integer) 0:
      {
        MR_String CC_13;

        libs__globals__lookup_string_option_3_p_0(Globals_8, (MR_Integer) 537, &CC_13);
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

        libs__globals__lookup_string_option_3_p_0(Globals_8, (MR_Integer) 562, &CSC_Type_16);
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
top_level__mercury_compile_main__do_op_mode_standalone_interface_6_p_0(
  MR_Word ProgressStream_7,
  MR_Word ErrorStream_8,
  MR_Word Globals_9,
  MR_String StandaloneIntBasename_10)
{
  MR_Word Target_12;

  libs__globals__get_target_2_p_0(Globals_9, &Target_12);
  switch (Target_12) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      backend_libs__compile_target_code__make_standalone_interface_6_p_0(Globals_9, ProgressStream_7, ErrorStream_8, StandaloneIntBasename_10);
      break;
    case (MR_Integer) 1:
    case (MR_Integer) 2:
      {
        MR_String ProgName_13;
        MR_Word Pieces_14;
        MR_Word Spec_15;
        MR_Word Var_20;
        MR_Word Var_21;
        MR_Word Var_24;
        MR_Word Var_26;
        MR_Word Var_29;
        MR_Word Var_32;
        MR_Word Var_35;
        MR_Word Var_36;
        MR_String Var_37;

        mercury__io__progname_base_4_p_0((MR_String) "mercury_compile", &ProgName_13);
        {
          Var_20 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(2, Var_20, 0) = ((MR_Box) (ProgName_13));
        }
        Var_37 = libs__globals__compilation_target_string_1_f_0(Target_12);
        {
          Var_36 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_36, 0) = ((MR_Box) ((MR_Unsigned) 6U));
          MR_hl_field(3, Var_36, 1) = ((MR_Box) (Var_37));
        }
        {
          Var_35 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_35, 0) = ((MR_Box) (Var_36));
          MR_hl_field(1, Var_35, 1) = ((MR_Box) (MR_mkword(1, &top_level__mercury_compile_main_scalar_common_1[9])));
        }
        {
          Var_32 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_32, 0) = ((MR_Box) (MR_mkword(3, &top_level__mercury_compile_main_scalar_common_1[6])));
          MR_hl_field(1, Var_32, 1) = ((MR_Box) (Var_35));
        }
        {
          Var_29 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_29, 0) = ((MR_Box) (MR_mkword(3, &top_level__mercury_compile_main_scalar_common_1[5])));
          MR_hl_field(1, Var_29, 1) = ((MR_Box) (Var_32));
        }
        {
          Var_26 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_26, 0) = ((MR_Box) (MR_mkword(3, &top_level__mercury_compile_main_scalar_common_1[4])));
          MR_hl_field(1, Var_26, 1) = ((MR_Box) (Var_29));
        }
        {
          Var_24 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_24, 0) = ((MR_Box) ((MR_Unsigned) 8U));
          MR_hl_field(1, Var_24, 1) = ((MR_Box) (Var_26));
        }
        {
          Var_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_21, 0) = ((MR_Box) (MR_mkword(3, &top_level__mercury_compile_main_scalar_common_1[3])));
          MR_hl_field(1, Var_21, 1) = ((MR_Box) (Var_24));
        }
        {
          Pieces_14 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Pieces_14, 0) = ((MR_Box) (Var_20));
          MR_hl_field(1, Pieces_14, 1) = ((MR_Box) (Var_21));
        }
        {
          Spec_15 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(2, Spec_15, 0) = ((MR_Box) ((MR_String) "predicate \140top_level.mercury_compile_main.do_op_mode_standalone_interface\'/6"));
          MR_hl_field(2, Spec_15, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(2, Spec_15, 2) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(2, Spec_15, 3) = ((MR_Box) (Pieces_14));
        }
        parse_tree__write_error_spec__write_error_spec_5_p_0(ErrorStream_8, Globals_9, Spec_15);
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

        libs__globals__lookup_string_option_3_p_0(ArgsGlobals_21, (MR_Integer) 207, &DumpOptionsFile_82);
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
