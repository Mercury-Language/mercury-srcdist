/*
** Automatically generated from `mercury_compile_main.m'
** by the Mercury compiler,
** version rotd-2024-12-07
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
#include "dir.mih"
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
#include "analysis.framework.mih"
#include "analysis.operations.mih"
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
#include "libs.dependency_graph.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.handle_options.mih"
#include "libs.indent.mih"
#include "libs.maybe_util.mih"
#include "libs.mmakefiles.mih"
#include "libs.op_mode.mih"
#include "libs.optimization_options.mih"
#include "libs.options.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "ll_backend.global_data.mih"
#include "ll_backend.layout.mih"
#include "ll_backend.llds.mih"
#include "make.build.mih"
#include "make.deps_cache.mih"
#include "make.deps_set.mih"
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
#include "parse_tree.comp_unit_interface.mih"
#include "parse_tree.deps_map.mih"
#include "parse_tree.equiv_type.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.find_module.mih"
#include "parse_tree.generate_mmakefile_fragments.mih"
#include "parse_tree.grab_modules.mih"
#include "parse_tree.make_module_file_names.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.module_baggage.mih"
#include "parse_tree.module_cmds.mih"
#include "parse_tree.module_dep_info.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.parse_error.mih"
#include "parse_tree.parse_tree_out.mih"
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.parse_tree_output.mih"
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
#include "parse_tree.var_table.mih"
#include "parse_tree.vartypes.mih"
#include "parse_tree.write_deps_file.mih"
#include "parse_tree.write_error_spec.mih"
#include "parse_tree.write_module_interface_files.mih"
#include "recompilation.check.mih"
#include "recompilation.item_types.mih"
#include "recompilation.record_uses.mih"
#include "recompilation.usage.mih"
#include "recompilation.used_file.mih"
#include "string.builder.mih"
#include "string.format.mih"
#include "string.parse_util.mih"
#include "top_level.mercury_compile_args.mih"
#include "top_level.mercury_compile_front_end.mih"
#include "top_level.mercury_compile_llds_back_end.mih"
#include "top_level.mercury_compile_make_hlds.mih"
#include "top_level.mercury_compile_middle_passes.mih"
#include "top_level.mercury_compile_mlds_back_end.mih"
#include "hlds.make_hlds.qual_info.mih"
#include "parse_tree.module_qual.mq_info.mih"



struct top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_query__360__1_1_p_0_env_0_s {
  MR_String * top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_query__360__1_1_p_0_env_0__LambdaHeadVar__1_63;
  MR_Cont top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_query__360__1_1_p_0_env_0__cont;
  void * top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_query__360__1_1_p_0_env_0__cont_env_ptr;
  MR_String top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_query__360__1_1_p_0_env_0__ModuleName_27;
  MR_Word top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_query__360__1_1_p_0_env_0__DocUndoc_28;
  MR_String top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_query__360__1_1_p_0_env_0__DocStr_29;
  MR_String top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_query__360__1_1_p_0_env_0__Var_64;
  MR_String top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_query__360__1_1_p_0_env_0__Var_65;
  MR_String top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_query__360__1_1_p_0_env_0__Var_66;
  MR_String top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_query__360__1_1_p_0_env_0__Var_67;
};

struct top_level__mercury_compile_main__do_op_mode_query_5_p_0_4_env_0_s {
  MR_Box * top_level__mercury_compile_main__do_op_mode_query_5_p_0_4_env_0__wrapper_arg_1;
  MR_Cont top_level__mercury_compile_main__do_op_mode_query_5_p_0_4_env_0__cont;
  void * top_level__mercury_compile_main__do_op_mode_query_5_p_0_4_env_0__cont_env_ptr;
  MR_String top_level__mercury_compile_main__do_op_mode_query_5_p_0_4_env_0__conv2_LambdaHeadVar__1_63;
};


static const MR_FA_PseudoTypeInfo_Struct1 top_level__mercury_compile_main__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_format_piece_0;

static const MR_FA_PseudoTypeInfo_Struct1 top_level__mercury_compile_main__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0;

static const MR_FA_TypeInfo_Struct1 top_level__mercury_compile_main__list__ti_list_1builtin__type_ctor_info_string_0;

static const MR_FA_TypeInfo_Struct2 top_level__mercury_compile_main__pair__ti_pair_2list__ti_list_1builtin__type_ctor_info_string_0parse_tree__module_baggage__type_ctor_info_burdened_module_0;

static const MR_FA_PseudoTypeInfo_Struct1 top_level__mercury_compile_main__list__pti_list_1__plain_pair__ti_pair_2list__ti_list_1builtin__type_ctor_info_string_0parse_tree__module_baggage__type_ctor_info_burdened_module_0;

static const MR_FA_PseudoTypeInfo_Struct1 top_level__mercury_compile_main__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_FA_PseudoTypeInfo_Struct1 top_level__mercury_compile_main__maybe__pti_maybe_1__plain_libs__timestamp__type_ctor_info_timestamp_0;

static const MR_FA_PseudoTypeInfo_Struct1 top_level__mercury_compile_main__list__pti_list_1__plain_builtin__type_ctor_info_string_0;

static MR_bool MR_CALL 
top_level__mercury_compile_main__IntroducedFrom__pred__read_augment_and_process_module_ok__1192__1_2_p_0(
  MR_Word ModulesToRecompile_35,
  MR_Word LambdaHeadVar__1_50);

static MR_bool MR_CALL 
top_level__mercury_compile_main__IntroducedFrom__pred__do_process_compiler_arg_make_interface__1031__1_1_p_0(
  MR_Word LambdaHeadVar__1_50);

static MR_bool MR_CALL 
top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_args__403__1_2_p_0(
  MR_Word InvokedByMmcMake_22,
  MR_Word HeadVar__2_56);

static void MR_CALL 
top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_query__360__1_1_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_query__360__1_1_p_0(
  MR_String * LambdaHeadVar__1_63,
  MR_Cont cont,
  void * cont_env_ptr);

static void MR_CALL 
top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_query__353__1_4_p_0(
  MR_Word StdOutStream_10,
  MR_String HeadVar__2_91);

static void MR_CALL 
top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_query__346__1_4_p_0(
  MR_Word StdOutStream_10,
  MR_String HeadVar__2_85);

static void MR_CALL 
top_level__mercury_compile_main__gc_init_2_p_0(void);

static void MR_CALL 
top_level__mercury_compile_main__augment_and_process_module_14_p_0(
  MR_Word ProgressStream_15,
  MR_Word ErrorStream_16,
  MR_Word Globals_17,
  MR_Word OpModeAugment_18,
  MR_Word InvokedByMmcMake_19,
  MR_Word MaybeTimestamp_20,
  MR_Word BurdenedModule_21,
  MR_Word * ExtraObjFiles_22,
  MR_Word STATE_VARIABLE_Specs_0_32,
  MR_Word * STATE_VARIABLE_Specs_33,
  MR_Word STATE_VARIABLE_HaveParseTreeMaps_0_34,
  MR_Word * STATE_VARIABLE_HaveParseTreeMaps_35);

static void MR_CALL 
top_level__mercury_compile_main__process_augmented_module_16_p_0(
  MR_Word ProgressStream_17,
  MR_Word ErrorStream_18,
  MR_Word Globals0_19,
  MR_Word OpModeAugment_20,
  MR_Word InvokedByMmcMake_21,
  MR_Word Baggage_22,
  MR_Word AugCompUnit_23,
  MR_Word * ExtraObjFiles_24,
  MR_Word STATE_VARIABLE_DumpInfo_0_58,
  MR_Word * STATE_VARIABLE_DumpInfo_59,
  MR_Word STATE_VARIABLE_Specs_0_60,
  MR_Word * STATE_VARIABLE_Specs_61,
  MR_Word STATE_VARIABLE_HaveParseTreeMaps_0_62,
  MR_Word * STATE_VARIABLE_HaveParseTreeMaps_63);

static void MR_CALL 
top_level__mercury_compile_main__after_front_end_passes_14_p_0(
  MR_Word ProgressStream_15,
  MR_Word ErrorStream_16,
  MR_Word Globals_17,
  MR_Word OpModeCodeGen_18,
  MR_Word MaybeTopModule_19,
  MR_Word MaybeTimestampMap_20,
  MR_Word STATE_VARIABLE_HLDS_0_57,
  MR_Word * ExtraObjFiles_22,
  MR_Word STATE_VARIABLE_Specs_0_58,
  MR_Word * STATE_VARIABLE_Specs_59,
  MR_Word STATE_VARIABLE_DumpInfo_0_60,
  MR_Word * STATE_VARIABLE_DumpInfo_61);

static void MR_CALL 
top_level__mercury_compile_main__maybe_output_prof_call_graph_6_p_0(
  MR_Word ProgressStream_7,
  MR_Word Stats_8,
  MR_Word STATE_VARIABLE_HLDS_0_19,
  MR_Word * STATE_VARIABLE_HLDS_20);

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
top_level__mercury_compile_main__maybe_write_dependency_graph_6_p_0(
  MR_Word ProgressStream_7,
  MR_Word Stats_8,
  MR_Word STATE_VARIABLE_HLDS_0_17,
  MR_Word * STATE_VARIABLE_HLDS_18);

static void MR_CALL 
top_level__mercury_compile_main__disable_warning_options_2_p_0(
  MR_Word Globals0_3,
  MR_Word * Globals_4);

static void MR_CALL 
top_level__mercury_compile_main__module_to_link_2_p_0(
  MR_Word BurdenedModule_3,
  MR_String * ModuleToLink_4);

static void MR_CALL 
top_level__mercury_compile_main__acc_not_found_files_5_p_0(
  MR_Word Spec_6,
  MR_Word STATE_VARIABLE_NotFoundFiles_0_11,
  MR_Word * STATE_VARIABLE_NotFoundFiles_12,
  MR_Word STATE_VARIABLE_OtherSpecs_0_13,
  MR_Word * STATE_VARIABLE_OtherSpecs_14);

static MR_bool MR_CALL 
top_level__mercury_compile_main__gather_local_burdened_modules_4_p_0(
  MR_Word Deps_5,
  MR_Word * BurdenedModule_6,
  MR_Word STATE_VARIABLE_Ancestors_0_15,
  MR_Word * STATE_VARIABLE_Ancestors_16);

static MR_bool MR_CALL 
top_level__mercury_compile_main__do_op_mode_15_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
top_level__mercury_compile_main__do_op_mode_15_p_0(
  MR_Word ProgressStream_16,
  MR_Word ErrorStream_17,
  MR_Word Globals_18,
  MR_Word OpMode_19,
  MR_Word StdlibGradeFlags_20,
  MR_Word EnvOptFileVariables_21,
  MR_Word EnvVarArgs_22,
  MR_Word OptionArgs_23,
  MR_Word Args_24,
  MR_Word STATE_VARIABLE_HaveParseTreeMaps_0_35,
  MR_Word * STATE_VARIABLE_HaveParseTreeMaps_36,
  MR_Word STATE_VARIABLE_Specs_0_37,
  MR_Word * STATE_VARIABLE_Specs_38);

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
  MR_Word STATE_VARIABLE_HaveParseTreeMaps_0_12,
  MR_Word * STATE_VARIABLE_HaveParseTreeMaps_13);

static void MR_CALL 
top_level__mercury_compile_main__setup_and_process_compiler_cmd_line_args_20_p_0(
  MR_Word ProgressStream_1,
  MR_Word ErrorStream_2,
  MR_Word Globals_3,
  MR_Word OpModeArgs_4,
  MR_Word InvokedByMmcMake_5,
  MR_Word StdlibGradeFlags_6,
  MR_Word EnvOptFileVariables_7,
  MR_Word EnvVarArgs_8,
  MR_Word OptionArgs_9,
  MR_Word HeadVar__10_10,
  MR_Word STATE_VARIABLE_Modules_0_11,
  MR_Word * STATE_VARIABLE_Modules_12,
  MR_Word STATE_VARIABLE_ExtraObjFiles_0_13,
  MR_Word * STATE_VARIABLE_ExtraObjFiles_14,
  MR_Word STATE_VARIABLE_HaveParseTreeMaps_0_15,
  MR_Word * STATE_VARIABLE_HaveParseTreeMaps_16,
  MR_Word STATE_VARIABLE_Specs_0_17,
  MR_Word * STATE_VARIABLE_Specs_18);

static void MR_CALL 
top_level__mercury_compile_main__setup_and_process_compiler_arg_18_p_0(
  MR_Word ProgressStream_19,
  MR_Word ErrorStream_20,
  MR_Word Globals_21,
  MR_Word OpModeArgs_22,
  MR_Word InvokedByMmcMake_23,
  MR_Word StdlibGradeFlags_24,
  MR_Word EnvOptFileVariables_25,
  MR_Word EnvVarArgs_26,
  MR_Word OptionArgs_27,
  MR_String Arg_28,
  MR_Word * ModulesToLink_29,
  MR_Word * ExtraObjFiles_30,
  MR_Word STATE_VARIABLE_HaveParseTreeMaps_0_42,
  MR_Word * STATE_VARIABLE_HaveParseTreeMaps_43,
  MR_Word STATE_VARIABLE_Specs_0_44,
  MR_Word * STATE_VARIABLE_Specs_45);

static void MR_CALL 
top_level__mercury_compile_main__setup_and_process_compiler_stdin_args_20_p_0(
  MR_Word ProgressStream_21,
  MR_Word ErrorStream_22,
  MR_Word StdIn_23,
  MR_Word Globals_24,
  MR_Word OpModeArgs_25,
  MR_Word InvokedByMmcMake_26,
  MR_Word StdlibGradeFlags_27,
  MR_Word EnvOptFileVariables_28,
  MR_Word EnvVarArgs_29,
  MR_Word OptionArgs_30,
  MR_Word STATE_VARIABLE_Modules_0_45,
  MR_Word * STATE_VARIABLE_Modules_46,
  MR_Word STATE_VARIABLE_ExtraObjFiles_0_47,
  MR_Word * STATE_VARIABLE_ExtraObjFiles_48,
  MR_Word STATE_VARIABLE_HaveParseTreeMaps_0_49,
  MR_Word * STATE_VARIABLE_HaveParseTreeMaps_50,
  MR_Word STATE_VARIABLE_Specs_0_51,
  MR_Word * STATE_VARIABLE_Specs_52);

static void MR_CALL 
top_level__mercury_compile_main__do_process_compiler_arg_13_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

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
  MR_Word STATE_VARIABLE_HaveParseTreeMaps_0_44,
  MR_Word * STATE_VARIABLE_HaveParseTreeMaps_45);

static void MR_CALL 
top_level__mercury_compile_main__read_augment_and_process_module_15_p_0(
  MR_Word ProgressStream_16,
  MR_Word ErrorStream_17,
  MR_Word Globals0_18,
  MR_Word OpModeAugment_19,
  MR_Word InvokedByMmcMake_20,
  MR_Word OptionArgs_21,
  MR_Word FileOrModule_22,
  MR_Word MaybeModulesToRecompile_23,
  MR_Word * ModulesToLink_24,
  MR_Word * ExtraObjFiles_25,
  MR_Word * Specs_26,
  MR_Word STATE_VARIABLE_HaveParseTreeMaps_0_41,
  MR_Word * STATE_VARIABLE_HaveParseTreeMaps_42);

static void MR_CALL 
top_level__mercury_compile_main__read_augment_and_process_module_ok_17_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
top_level__mercury_compile_main__read_augment_and_process_module_ok_17_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8);

static MR_bool MR_CALL 
top_level__mercury_compile_main__read_augment_and_process_module_ok_17_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
top_level__mercury_compile_main__read_augment_and_process_module_ok_17_p_0(
  MR_Word ProgressStream_18,
  MR_Word ErrorStream_19,
  MR_Word Globals_20,
  MR_Word OpModeAugment_21,
  MR_Word InvokedByMmcMake_22,
  MR_String SourceFileName_23,
  MR_Word MaybeTimestamp_24,
  MR_Word ReadModuleErrors_25,
  MR_Word ParseTreeSrc_26,
  MR_Word MaybeModulesToRecompile_27,
  MR_Word * ModulesToLink_28,
  MR_Word * ExtraObjFiles_29,
  MR_Word * STATE_VARIABLE_Specs_44,
  MR_Word STATE_VARIABLE_HaveParseTreeMaps_0_45,
  MR_Word * STATE_VARIABLE_HaveParseTreeMaps_46);

static void MR_CALL 
top_level__mercury_compile_main__do_process_compiler_arg_make_interface_9_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);

static void MR_CALL 
top_level__mercury_compile_main__do_process_compiler_arg_make_interface_9_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);

static void MR_CALL 
top_level__mercury_compile_main__do_process_compiler_arg_make_interface_9_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);

static MR_bool MR_CALL 
top_level__mercury_compile_main__do_process_compiler_arg_make_interface_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
top_level__mercury_compile_main__do_process_compiler_arg_make_interface_9_p_0(
  MR_Word ProgressStream_10,
  MR_Word Globals0_11,
  MR_Word InterfaceFile_12,
  MR_Word FileOrModule_13,
  MR_Word * SpecLists_14,
  MR_Word STATE_VARIABLE_HaveParseTreeMaps_0_40,
  MR_Word * STATE_VARIABLE_HaveParseTreeMaps_41);

static void MR_CALL 
top_level__mercury_compile_main__read_module_or_file_10_p_0(
  MR_Word ProgressStream_11,
  MR_Word Globals0_12,
  MR_Word * Globals_13,
  MR_Word FileOrModuleName_14,
  MR_Word ReturnTimestamp_15,
  MR_Word * HaveSrc_16,
  MR_Word STATE_VARIABLE_HaveParseTreeMaps_0_41,
  MR_Word * STATE_VARIABLE_HaveParseTreeMaps_42);

static void MR_CALL 
top_level__mercury_compile_main__deps_make_ints_9_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);

static void MR_CALL 
top_level__mercury_compile_main__deps_make_ints_9_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
top_level__mercury_compile_main__deps_make_ints_9_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);

static void MR_CALL 
top_level__mercury_compile_main__deps_make_ints_9_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);

static MR_bool MR_CALL 
top_level__mercury_compile_main__deps_make_ints_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
top_level__mercury_compile_main__deps_make_ints_9_p_0(
  MR_Word ProgressStream_10,
  MR_Word Globals_11,
  MR_Word DepsMap_12,
  MR_Word STATE_VARIABLE_Specs_0_36,
  MR_Word * STATE_VARIABLE_Specs_37,
  MR_Word STATE_VARIABLE_HaveParseTreeMaps_0_38,
  MR_Word * STATE_VARIABLE_HaveParseTreeMaps_39);

static void MR_CALL 
top_level__mercury_compile_main__handle_not_found_files_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
top_level__mercury_compile_main__handle_not_found_files_3_p_0(
  MR_Word Specs0_4,
  MR_Word * Specs_5,
  MR_Word * Continue_6);

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
  MR_Word ErrorStream_6,
  MR_Word Globals_7,
  MR_Word OpModeQuery_8);

static void MR_CALL 
top_level__mercury_compile_main__do_op_mode_standalone_interface_6_p_0(
  MR_Word ProgressStream_7,
  MR_Word ErrorStream_8,
  MR_Word Globals_9,
  MR_String StandaloneIntBasename_10);


static /* final */ const MR_Box top_level__mercury_compile_main_scalar_common_1[24][2];

static /* final */ const MR_Box top_level__mercury_compile_main_scalar_common_2[10][3];

static /* final */ const MR_Box top_level__mercury_compile_main_scalar_common_3[2][1];

static /* final */ const MR_Box top_level__mercury_compile_main_scalar_common_4[2][7];

static /* final */ const MR_Box top_level__mercury_compile_main_scalar_common_5[2][4];

static /* final */ const MR_Box top_level__mercury_compile_main_scalar_common_6[2][8];

static /* final */ const MR_Box top_level__mercury_compile_main_scalar_common_7[1][13];

static /* final */ const MR_Box top_level__mercury_compile_main_scalar_common_8[4][5];

static /* final */ const MR_Box top_level__mercury_compile_main_scalar_common_9[1][17];




static /* final */ const MR_Box top_level__mercury_compile_main_scalar_common_1[24][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&top_level__mercury_compile_main_scalar_common_2[0]))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0))
  },
  /* row   4 */
  {
    ((MR_Box) (&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_module_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_src_0))
  },
  /* row   5 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row   6 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error:"))
  },
  /* row   7 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--generate-standalone-interface"))
  },
  /* row   8 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "is not required for target language"))
  },
  /* row   9 */
  {
    ((MR_Box) ((MR_Unsigned) 12U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  10 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row  11 */
  {
    ((MR_Box) (MR_mkword(3, &top_level__mercury_compile_main_scalar_common_1[10]))),
    ((MR_Box) (MR_mkword(1, &top_level__mercury_compile_main_scalar_common_1[9])))
  },
  /* row  12 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error reading module name from standard input:"))
  },
  /* row  13 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Could not find the following files:"))
  },
  /* row  14 */
  {
    ((MR_Box) (MR_mkword(3, &top_level__mercury_compile_main_scalar_common_1[13]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  15 */
  {
    ((MR_Box) (MR_mkword(3, &top_level__mercury_compile_main_scalar_common_2[1]))),
    ((MR_Box) (MR_mkword(1, &top_level__mercury_compile_main_scalar_common_1[14])))
  },
  /* row  16 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Could not find many files, including these:"))
  },
  /* row  17 */
  {
    ((MR_Box) (MR_mkword(3, &top_level__mercury_compile_main_scalar_common_1[16]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  18 */
  {
    ((MR_Box) (MR_mkword(3, &top_level__mercury_compile_main_scalar_common_2[1]))),
    ((MR_Box) (MR_mkword(1, &top_level__mercury_compile_main_scalar_common_1[17])))
  },
  /* row  19 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "and thus could not create some interface files."))
  },
  /* row  20 */
  {
    ((MR_Box) (MR_mkword(3, &top_level__mercury_compile_main_scalar_common_1[19]))),
    ((MR_Box) (MR_mkword(1, &top_level__mercury_compile_main_scalar_common_1[9])))
  },
  /* row  21 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 1U)),
    (MR_Box) ((MR_Unsigned) 13U)
  },
  /* row  22 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 1U)),
    (MR_Box) ((MR_Unsigned) 4U)
  },
  /* row  23 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    (MR_Box) ((MR_Unsigned) 0U)
  },
};

static /* final */ const MR_Box top_level__mercury_compile_main_scalar_common_2[10][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&top_level__mercury_compile_main_scalar_common_1[1])),
    ((MR_Box) (&parse_tree__module_baggage__parse_tree__module_baggage__type_ctor_info_burdened_module_0))
  },
  /* row   1 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 39U)),
    ((MR_Box) ((MR_Integer) 999)),
    ((MR_Box) ((MR_String) ""))
  },
  /* row   2 */
  {
    ((MR_Box) (&top_level__mercury_compile_main_scalar_common_5[0])),
    ((MR_Box) (top_level__mercury_compile_main__do_op_mode_query_5_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   3 */
  {
    ((MR_Box) (&top_level__mercury_compile_main_scalar_common_6[0])),
    ((MR_Box) (top_level__mercury_compile_main__handle_not_found_files_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   4 */
  {
    ((MR_Box) (&top_level__mercury_compile_main_scalar_common_4[1])),
    ((MR_Box) (top_level__mercury_compile_main__deps_make_ints_9_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   5 */
  {
    ((MR_Box) (&top_level__mercury_compile_main_scalar_common_6[0])),
    ((MR_Box) (top_level__mercury_compile_main__deps_make_ints_9_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   6 */
  {
    ((MR_Box) (&top_level__mercury_compile_main_scalar_common_5[1])),
    ((MR_Box) (top_level__mercury_compile_main__do_process_compiler_arg_make_interface_9_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   7 */
  {
    ((MR_Box) (&top_level__mercury_compile_main_scalar_common_8[1])),
    ((MR_Box) (top_level__mercury_compile_main__read_augment_and_process_module_ok_17_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   8 */
  {
    ((MR_Box) (&top_level__mercury_compile_main_scalar_common_8[3])),
    ((MR_Box) (top_level__mercury_compile_main__maybe_prepare_for_intermodule_analysis_9_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   9 */
  {
    ((MR_Box) (&top_level__mercury_compile_main_scalar_common_8[3])),
    ((MR_Box) (top_level__mercury_compile_main__prepare_for_intermodule_analysis_9_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box top_level__mercury_compile_main_scalar_common_3[2][1] = {
  /* row   0 */
  { (MR_Box) ((MR_Unsigned) 0U) },
  /* row   1 */
  { (MR_Box) ((MR_Unsigned) 11U) },
};

static /* final */ const MR_Box top_level__mercury_compile_main_scalar_common_4[2][7] = {
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
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_deps_0)),
    ((MR_Box) (&parse_tree__module_baggage__parse_tree__module_baggage__type_ctor_info_burdened_module_0)),
    ((MR_Box) (&top_level__mercury_compile_main__list__pti_list_1__plain_pair__ti_pair_2list__ti_list_1builtin__type_ctor_info_string_0parse_tree__module_baggage__type_ctor_info_burdened_module_0)),
    ((MR_Box) (&top_level__mercury_compile_main__list__pti_list_1__plain_pair__ti_pair_2list__ti_list_1builtin__type_ctor_info_string_0parse_tree__module_baggage__type_ctor_info_burdened_module_0))
  },
};

static /* final */ const MR_Box top_level__mercury_compile_main_scalar_common_5[2][4] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&parse_tree__module_baggage__parse_tree__module_baggage__type_ctor_info_burdened_module_0))
  },
};

static /* final */ const MR_Box top_level__mercury_compile_main_scalar_common_6[2][8] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0)),
    ((MR_Box) (&top_level__mercury_compile_main__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_format_piece_0)),
    ((MR_Box) (&top_level__mercury_compile_main__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_format_piece_0)),
    ((MR_Box) (&top_level__mercury_compile_main__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0)),
    ((MR_Box) (&top_level__mercury_compile_main__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&top_level__mercury_compile_main__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box top_level__mercury_compile_main_scalar_common_7[1][13] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 10)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__type_ctor_info_maybe_add_to_hptm_0)),
    ((MR_Box) (&parse_tree__module_baggage__parse_tree__module_baggage__type_ctor_info_burdened_module_0)),
    ((MR_Box) (&libs__maybe_util__libs__maybe_util__type_ctor_info_maybe_succeeded_0)),
    ((MR_Box) (&top_level__mercury_compile_main__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0)),
    ((MR_Box) (&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_parse_tree_maps_0)),
    ((MR_Box) (&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_parse_tree_maps_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box top_level__mercury_compile_main_scalar_common_8[4][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&top_level__mercury_compile_main__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__module_baggage__parse_tree__module_baggage__type_ctor_info_burdened_module_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__module_baggage__parse_tree__module_baggage__type_ctor_info_burdened_module_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&libs__op_mode__libs__op_mode__type_ctor_info_op_mode_invoked_by_mmc_make_0)),
    ((MR_Box) (&libs__op_mode__libs__op_mode__type_ctor_info_op_mode_invoked_by_mmc_make_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
};

static /* final */ const MR_Box top_level__mercury_compile_main_scalar_common_9[1][17] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 14)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&libs__op_mode__libs__op_mode__type_ctor_info_op_mode_augment_0)),
    ((MR_Box) (&libs__op_mode__libs__op_mode__type_ctor_info_op_mode_invoked_by_mmc_make_0)),
    ((MR_Box) (&top_level__mercury_compile_main__maybe__pti_maybe_1__plain_libs__timestamp__type_ctor_info_timestamp_0)),
    ((MR_Box) (&parse_tree__module_baggage__parse_tree__module_baggage__type_ctor_info_burdened_module_0)),
    ((MR_Box) (&top_level__mercury_compile_main__list__pti_list_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&top_level__mercury_compile_main__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0)),
    ((MR_Box) (&top_level__mercury_compile_main__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0)),
    ((MR_Box) (&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_parse_tree_maps_0)),
    ((MR_Box) (&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_parse_tree_maps_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "dir.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"
#include "make.build.mh"
#include "top_level.mercury_compile_main.mh"


static const MR_FA_PseudoTypeInfo_Struct1 top_level__mercury_compile_main__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_format_piece_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 top_level__mercury_compile_main__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0) }
};

static const MR_FA_TypeInfo_Struct1 top_level__mercury_compile_main__list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) }
};

static const MR_FA_TypeInfo_Struct2 top_level__mercury_compile_main__pair__ti_pair_2list__ti_list_1builtin__type_ctor_info_string_0parse_tree__module_baggage__type_ctor_info_burdened_module_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) (&top_level__mercury_compile_main__list__ti_list_1builtin__type_ctor_info_string_0),
    (MR_TypeInfo) (&parse_tree__module_baggage__parse_tree__module_baggage__type_ctor_info_burdened_module_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 top_level__mercury_compile_main__list__pti_list_1__plain_pair__ti_pair_2list__ti_list_1builtin__type_ctor_info_string_0parse_tree__module_baggage__type_ctor_info_burdened_module_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&top_level__mercury_compile_main__pair__ti_pair_2list__ti_list_1builtin__type_ctor_info_string_0parse_tree__module_baggage__type_ctor_info_burdened_module_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 top_level__mercury_compile_main__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 top_level__mercury_compile_main__maybe__pti_maybe_1__plain_libs__timestamp__type_ctor_info_timestamp_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  { (MR_PseudoTypeInfo) (&libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 top_level__mercury_compile_main__list__pti_list_1__plain_builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) }
};

static MR_bool MR_CALL 
top_level__mercury_compile_main__IntroducedFrom__pred__read_augment_and_process_module_ok__1192__1_2_p_0(
  MR_Word ModulesToRecompile_35,
  MR_Word LambdaHeadVar__1_50)
{
  MR_bool succeeded;
  MR_Word PTMS_39 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__1_50, (MR_Integer) 1))));
  MR_Word Var_51 = ((MR_Word) ((MR_hl_field(0, PTMS_39, (MR_Integer) 0))));

  succeeded = mercury__list__member_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (Var_51)), ModulesToRecompile_35);
  return succeeded;
}

static MR_bool MR_CALL 
top_level__mercury_compile_main__IntroducedFrom__pred__do_process_compiler_arg_make_interface__1031__1_1_p_0(
  MR_Word LambdaHeadVar__1_50)
{
  MR_bool succeeded;
  MR_Word PTMS_35 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__1_50, (MR_Integer) 1))));
  MR_Word IncludeMap_36 = ((MR_Word) ((MR_hl_field(0, PTMS_35, (MR_Integer) 2))));

  succeeded = mercury__map__is_empty_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_include_module_info_0), IncludeMap_36);
  succeeded = !(succeeded);
  return succeeded;
}

static MR_bool MR_CALL 
top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_args__403__1_2_p_0(
  MR_Word InvokedByMmcMake_22,
  MR_Word HeadVar__2_56)
{
  MR_bool succeeded = (InvokedByMmcMake_22 == HeadVar__2_56);

  return succeeded;
}

static void MR_CALL 
top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_query__360__1_1_p_0_1(
  void * env_ptr_arg)
{
  struct top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_query__360__1_1_p_0_env_0_s * env_ptr = (struct top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_query__360__1_1_p_0_env_0_s *) (env_ptr_arg);

  switch ((env_ptr)->top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_query__360__1_1_p_0_env_0__DocUndoc_28) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      (env_ptr)->top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_query__360__1_1_p_0_env_0__DocStr_29 = (MR_String) "DOC";
      break;
    case (MR_Integer) 1:
      (env_ptr)->top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_query__360__1_1_p_0_env_0__DocStr_29 = (MR_String) "UNDOC";
      break;
  }
  (env_ptr)->top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_query__360__1_1_p_0_env_0__Var_65 = (MR_String) " ";
  (env_ptr)->top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_query__360__1_1_p_0_env_0__Var_67 = (MR_String) ".m\n";
  (env_ptr)->top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_query__360__1_1_p_0_env_0__Var_66 = mercury__string__f_43_43_2_f_0((env_ptr)->top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_query__360__1_1_p_0_env_0__ModuleName_27, (env_ptr)->top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_query__360__1_1_p_0_env_0__Var_67);
  (env_ptr)->top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_query__360__1_1_p_0_env_0__Var_64 = mercury__string__f_43_43_2_f_0((env_ptr)->top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_query__360__1_1_p_0_env_0__Var_65, (env_ptr)->top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_query__360__1_1_p_0_env_0__Var_66);
  *((env_ptr)->top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_query__360__1_1_p_0_env_0__LambdaHeadVar__1_63) = mercury__string__f_43_43_2_f_0((env_ptr)->top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_query__360__1_1_p_0_env_0__DocStr_29, (env_ptr)->top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_query__360__1_1_p_0_env_0__Var_64);
  ((env_ptr)->top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_query__360__1_1_p_0_env_0__cont)((env_ptr)->top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_query__360__1_1_p_0_env_0__cont_env_ptr);
}

static void MR_CALL 
top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_query__360__1_1_p_0(
  MR_String * LambdaHeadVar__1_63,
  MR_Cont cont,
  void * cont_env_ptr)
{
  struct top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_query__360__1_1_p_0_env_0_s env;

  (env).top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_query__360__1_1_p_0_env_0__LambdaHeadVar__1_63 = LambdaHeadVar__1_63;
  (env).top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_query__360__1_1_p_0_env_0__cont = cont;
  (env).top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_query__360__1_1_p_0_env_0__cont_env_ptr = cont_env_ptr;
  mercury__library__stdlib_module_doc_undoc_2_p_1(&(env).top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_query__360__1_1_p_0_env_0__ModuleName_27, &(env).top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_query__360__1_1_p_0_env_0__DocUndoc_28, top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_query__360__1_1_p_0_1, &env);
}

static void MR_CALL 
top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_query__353__1_4_p_0(
  MR_Word StdOutStream_10,
  MR_String HeadVar__2_91)
{
  mercury__io__print_line_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), StdOutStream_10, ((MR_Box) (HeadVar__2_91)));
}

static void MR_CALL 
top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_query__346__1_4_p_0(
  MR_Word StdOutStream_10,
  MR_String HeadVar__2_85)
{
  mercury__io__print_line_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), StdOutStream_10, ((MR_Box) (HeadVar__2_85)));
}

static void MR_CALL 
top_level__mercury_compile_main__gc_init_2_p_0(void)
{
{
#define MR_PROC_LABEL top_level__mercury_compile_main__gc_init_2_p_0


		{

#ifdef MR_BOEHM_GC
    // Explicitly force the initial heap size to be at least 4 Mb.
    //
    // This works around a bug in the Boehm collector (for versions up
    // to at least 6.2) where the collector would sometimes abort with
    // the message `unexpected mark stack overflow' (e.g. in grade hlc.gc
    // on dec-alpha-osf3.2).
    //
    // Doing this should also improve performance slightly by avoiding
    // frequent garbage collection during start-up.
    GC_expand_hp(4 * 1024 * 1024);
#endif


		;}
#undef MR_PROC_LABEL
}
}

static void MR_CALL 
top_level__mercury_compile_main__augment_and_process_module_14_p_0(
  MR_Word ProgressStream_15,
  MR_Word ErrorStream_16,
  MR_Word Globals_17,
  MR_Word OpModeAugment_18,
  MR_Word InvokedByMmcMake_19,
  MR_Word MaybeTimestamp_20,
  MR_Word BurdenedModule_21,
  MR_Word * ExtraObjFiles_22,
  MR_Word STATE_VARIABLE_Specs_0_32,
  MR_Word * STATE_VARIABLE_Specs_33,
  MR_Word STATE_VARIABLE_HaveParseTreeMaps_0_34,
  MR_Word * STATE_VARIABLE_HaveParseTreeMaps_35)
{
  MR_bool succeeded;
  MR_Word Baggage0_26 = ((MR_Word) ((MR_hl_field(0, BurdenedModule_21, (MR_Integer) 0))));
  MR_Word ParseTreeModuleSrc_27 = ((MR_Word) ((MR_hl_field(0, BurdenedModule_21, (MR_Integer) 1))));
  MR_Word AugCompUnit_28;
  MR_Word Baggage_29;
  MR_Word Errors_30;
  MR_Word STATE_VARIABLE_Specs_38_38;
  MR_Word STATE_VARIABLE_HaveParseTreeMaps_39_39;
  MR_Word STATE_VARIABLE_Specs_41_41;
  MR_Word Var_42;
  MR_Word Var_43;

  parse_tree__check_module_interface__check_module_interface_for_no_exports_4_p_0(Globals_17, ParseTreeModuleSrc_27, STATE_VARIABLE_Specs_0_32, &STATE_VARIABLE_Specs_38_38);
  parse_tree__grab_modules__grab_qual_imported_modules_augment_11_p_0(ProgressStream_15, Globals_17, MaybeTimestamp_20, ParseTreeModuleSrc_27, &AugCompUnit_28, Baggage0_26, &Baggage_29, STATE_VARIABLE_HaveParseTreeMaps_0_34, &STATE_VARIABLE_HaveParseTreeMaps_39_39);
  Errors_30 = ((MR_Word) ((MR_hl_field(0, Baggage_29, (MR_Integer) 7))));
  Var_42 = parse_tree__parse_error__get_read_module_specs_1_f_0(Errors_30);
  STATE_VARIABLE_Specs_41_41 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), Var_42, STATE_VARIABLE_Specs_38_38);
  Var_43 = ((MR_Word) ((MR_hl_field(0, Errors_30, (MR_Integer) 0))));
  succeeded = mercury__set__is_empty_1_p_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_fatal_read_module_error_0), Var_43);
  if (succeeded)
  {
    MR_Word Var_31;

    top_level__mercury_compile_main__process_augmented_module_16_p_0(ProgressStream_15, ErrorStream_16, Globals_17, OpModeAugment_18, InvokedByMmcMake_19, Baggage_29, AugCompUnit_28, ExtraObjFiles_22, (MR_Word) ((MR_Unsigned) 0U), &Var_31, STATE_VARIABLE_Specs_41_41, STATE_VARIABLE_Specs_33, STATE_VARIABLE_HaveParseTreeMaps_39_39, STATE_VARIABLE_HaveParseTreeMaps_35);
  }
  else
  {
    *ExtraObjFiles_22 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_HaveParseTreeMaps_35 = STATE_VARIABLE_HaveParseTreeMaps_39_39;
    *STATE_VARIABLE_Specs_33 = STATE_VARIABLE_Specs_41_41;
  }
}

static void MR_CALL 
top_level__mercury_compile_main__process_augmented_module_16_p_0(
  MR_Word ProgressStream_17,
  MR_Word ErrorStream_18,
  MR_Word Globals0_19,
  MR_Word OpModeAugment_20,
  MR_Word InvokedByMmcMake_21,
  MR_Word Baggage_22,
  MR_Word AugCompUnit_23,
  MR_Word * ExtraObjFiles_24,
  MR_Word STATE_VARIABLE_DumpInfo_0_58,
  MR_Word * STATE_VARIABLE_DumpInfo_59,
  MR_Word STATE_VARIABLE_Specs_0_60,
  MR_Word * STATE_VARIABLE_Specs_61,
  MR_Word STATE_VARIABLE_HaveParseTreeMaps_0_62,
  MR_Word * STATE_VARIABLE_HaveParseTreeMaps_63)
{
  MR_bool succeeded;
  MR_Word Globals_30;
  MR_Word HLDS1_31;
  MR_Word QualInfo_32;
  MR_Word MaybeTimestampMap_33;
  MR_Word UndefTypes_34;
  MR_Word UndefModes_35;
  MR_Word PreHLDSErrors_36;
  MR_Word FrontEndErrors_37;
  MR_Word HLDS20_38;
  MR_Integer ExitStatus_39;
  MR_Word STATE_VARIABLE_DumpInfo_66_66;
  MR_Word STATE_VARIABLE_Specs_67_67;
  MR_Word STATE_VARIABLE_DumpInfo_70_70;
  MR_Word STATE_VARIABLE_Specs_71_71;
  MR_Word Var_74;

  switch (MR_tag((MR_Word) OpModeAugment_20)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(OpModeAugment_20)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
        case (MR_Integer) 1:
          top_level__mercury_compile_main__disable_warning_options_2_p_0(Globals0_19, &Globals_30);
          break;
        case (MR_Integer) 2:
        case (MR_Integer) 3:
        case (MR_Integer) 4:
        case (MR_Integer) 5:
          Globals_30 = Globals0_19;
          break;
      }
      break;
    case (MR_Integer) 1:
      Globals_30 = Globals0_19;
      break;
  }
  top_level__mercury_compile_make_hlds__make_hlds_pass_21_p_0(ProgressStream_17, ErrorStream_18, Globals_30, OpModeAugment_20, InvokedByMmcMake_21, Baggage_22, AugCompUnit_23, &HLDS1_31, &QualInfo_32, &MaybeTimestampMap_33, &UndefTypes_34, &UndefModes_35, &PreHLDSErrors_36, STATE_VARIABLE_DumpInfo_0_58, &STATE_VARIABLE_DumpInfo_66_66, STATE_VARIABLE_Specs_0_60, &STATE_VARIABLE_Specs_67_67, STATE_VARIABLE_HaveParseTreeMaps_0_62, STATE_VARIABLE_HaveParseTreeMaps_63);
  top_level__mercury_compile_front_end__frontend_pass_16_p_0(ProgressStream_17, ErrorStream_18, OpModeAugment_20, QualInfo_32, UndefTypes_34, UndefModes_35, PreHLDSErrors_36, &FrontEndErrors_37, HLDS1_31, &HLDS20_38, STATE_VARIABLE_DumpInfo_66_66, &STATE_VARIABLE_DumpInfo_70_70, STATE_VARIABLE_Specs_67_67, &STATE_VARIABLE_Specs_71_71);
  mercury__io__get_exit_status_3_p_0(&ExitStatus_39);
  succeeded = (PreHLDSErrors_36 == (MR_Integer) 0);
  if (succeeded)
  {
    succeeded = (FrontEndErrors_37 == (MR_Integer) 0);
    if (succeeded)
    {
      Var_74 = parse_tree__error_util__contains_errors_2_f_0(Globals_30, STATE_VARIABLE_Specs_71_71);
      succeeded = (Var_74 == (MR_Integer) 0);
      if (succeeded)
        succeeded = (ExitStatus_39 == (MR_Integer) 0);
    }
  }
  if (succeeded)
  {
    MR_Word Verbose_40;
    MR_Word Stats_41;
    MR_Word HLDS21_42;

    libs__globals__lookup_bool_option_3_p_0(Globals_30, (MR_Integer) 76, &Verbose_40);
    libs__globals__lookup_bool_option_3_p_0(Globals_30, (MR_Integer) 86, &Stats_41);
    top_level__mercury_compile_main__maybe_write_dependency_graph_6_p_0(ProgressStream_17, Stats_41, HLDS20_38, &HLDS21_42);
    switch (MR_tag((MR_Word) OpModeAugment_20)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(OpModeAugment_20)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              *ExtraObjFiles_24 = (MR_Word) ((MR_Unsigned) 0U);
              *STATE_VARIABLE_DumpInfo_59 = STATE_VARIABLE_DumpInfo_70_70;
              *STATE_VARIABLE_Specs_61 = STATE_VARIABLE_Specs_71_71;
            }
            break;
          case (MR_Integer) 1:
            {
              top_level__mercury_compile_middle_passes__output_trans_opt_file_8_p_0(ProgressStream_17, HLDS21_42, STATE_VARIABLE_Specs_71_71, STATE_VARIABLE_Specs_61, STATE_VARIABLE_DumpInfo_70_70, STATE_VARIABLE_DumpInfo_59);
              *ExtraObjFiles_24 = (MR_Word) ((MR_Unsigned) 0U);
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word AnalysisSpecs_50;
              MR_Word HLDS22_51;

              top_level__mercury_compile_main__prepare_for_intermodule_analysis_9_p_0(ProgressStream_17, Globals_30, Verbose_40, Stats_41, &AnalysisSpecs_50, HLDS21_42, &HLDS22_51);
              if ((AnalysisSpecs_50 == (MR_Word) ((MR_Unsigned) 0U)))
                top_level__mercury_compile_middle_passes__output_analysis_file_8_p_0(ProgressStream_17, HLDS22_51, STATE_VARIABLE_Specs_71_71, STATE_VARIABLE_Specs_61, STATE_VARIABLE_DumpInfo_70_70, STATE_VARIABLE_DumpInfo_59);
              else
              {
                *STATE_VARIABLE_Specs_61 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), AnalysisSpecs_50, STATE_VARIABLE_Specs_71_71);
                *STATE_VARIABLE_DumpInfo_59 = STATE_VARIABLE_DumpInfo_70_70;
              }
              *ExtraObjFiles_24 = (MR_Word) ((MR_Unsigned) 0U);
            }
            break;
          case (MR_Integer) 3:
            {
              check_hlds__xml_documentation__xml_documentation_4_p_0(ProgressStream_17, HLDS21_42);
              *ExtraObjFiles_24 = (MR_Word) ((MR_Unsigned) 0U);
              *STATE_VARIABLE_DumpInfo_59 = STATE_VARIABLE_DumpInfo_70_70;
              *STATE_VARIABLE_Specs_61 = STATE_VARIABLE_Specs_71_71;
            }
            break;
          case (MR_Integer) 4:
            {
              *ExtraObjFiles_24 = (MR_Word) ((MR_Unsigned) 0U);
              *STATE_VARIABLE_DumpInfo_59 = STATE_VARIABLE_DumpInfo_70_70;
              *STATE_VARIABLE_Specs_61 = STATE_VARIABLE_Specs_71_71;
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word UnusedArgs_43;

              libs__globals__lookup_bool_option_3_p_0(Globals_30, (MR_Integer) 14, &UnusedArgs_43);
              switch (UnusedArgs_43) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  *STATE_VARIABLE_Specs_61 = STATE_VARIABLE_Specs_71_71;
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word OptTuple_44;
                    MR_Word NoOptUnusedArgsOptTuple_45;
                    MR_Word NoOptUnusedArgsGlobals_46;
                    MR_Word HLDS21a_47;
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
                    MR_Integer Var_217;
                    MR_Integer Var_218;
                    MR_Integer Var_219;
                    MR_Integer Var_220;
                    MR_Integer Var_221;
                    MR_Integer Var_222;
                    MR_Integer Var_223;
                    MR_String Var_224;
                    MR_Unsigned packed_word_0;
                    MR_Unsigned packed_word_1;
                    MR_Unsigned packed_word_2;
                    MR_Word _UnusedArgsInfos_48;
                    MR_Word _HLDS22_49;

                    libs__globals__get_opt_tuple_2_p_0(Globals_30, &OptTuple_44);
                    packed_word_0 = (MR_Unsigned) ((MR_hl_field(0, OptTuple_44, (MR_Integer) 0)));
                    packed_word_1 = (MR_Unsigned) ((MR_hl_field(0, OptTuple_44, (MR_Integer) 1)));
                    packed_word_2 = (MR_Unsigned) ((MR_hl_field(0, OptTuple_44, (MR_Integer) 2)));
                    Var_187 = ((MR_Integer) ((MR_hl_field(0, OptTuple_44, (MR_Integer) 3))));
                    Var_188 = ((MR_Integer) ((MR_hl_field(0, OptTuple_44, (MR_Integer) 4))));
                    Var_189 = ((MR_Integer) ((MR_hl_field(0, OptTuple_44, (MR_Integer) 5))));
                    Var_190 = ((MR_Integer) ((MR_hl_field(0, OptTuple_44, (MR_Integer) 6))));
                    Var_191 = ((MR_Integer) ((MR_hl_field(0, OptTuple_44, (MR_Integer) 7))));
                    Var_192 = ((MR_Integer) ((MR_hl_field(0, OptTuple_44, (MR_Integer) 8))));
                    Var_193 = ((MR_Integer) ((MR_hl_field(0, OptTuple_44, (MR_Integer) 9))));
                    Var_194 = ((MR_Integer) ((MR_hl_field(0, OptTuple_44, (MR_Integer) 10))));
                    Var_195 = ((MR_Integer) ((MR_hl_field(0, OptTuple_44, (MR_Integer) 11))));
                    Var_196 = ((MR_Integer) ((MR_hl_field(0, OptTuple_44, (MR_Integer) 12))));
                    Var_197 = ((MR_Integer) ((MR_hl_field(0, OptTuple_44, (MR_Integer) 13))));
                    Var_198 = ((MR_Integer) ((MR_hl_field(0, OptTuple_44, (MR_Integer) 14))));
                    Var_199 = ((MR_Integer) ((MR_hl_field(0, OptTuple_44, (MR_Integer) 15))));
                    Var_200 = ((MR_Integer) ((MR_hl_field(0, OptTuple_44, (MR_Integer) 16))));
                    Var_201 = ((MR_Integer) ((MR_hl_field(0, OptTuple_44, (MR_Integer) 17))));
                    Var_202 = ((MR_Integer) ((MR_hl_field(0, OptTuple_44, (MR_Integer) 18))));
                    Var_203 = ((MR_Integer) ((MR_hl_field(0, OptTuple_44, (MR_Integer) 19))));
                    Var_204 = ((MR_Integer) ((MR_hl_field(0, OptTuple_44, (MR_Integer) 20))));
                    Var_205 = ((MR_Integer) ((MR_hl_field(0, OptTuple_44, (MR_Integer) 21))));
                    Var_206 = ((MR_Integer) ((MR_hl_field(0, OptTuple_44, (MR_Integer) 22))));
                    Var_207 = ((MR_Integer) ((MR_hl_field(0, OptTuple_44, (MR_Integer) 23))));
                    Var_208 = ((MR_Integer) ((MR_hl_field(0, OptTuple_44, (MR_Integer) 24))));
                    Var_209 = ((MR_Integer) ((MR_hl_field(0, OptTuple_44, (MR_Integer) 25))));
                    Var_210 = ((MR_Integer) ((MR_hl_field(0, OptTuple_44, (MR_Integer) 26))));
                    Var_211 = ((MR_Integer) ((MR_hl_field(0, OptTuple_44, (MR_Integer) 27))));
                    Var_212 = ((MR_Integer) ((MR_hl_field(0, OptTuple_44, (MR_Integer) 28))));
                    Var_213 = ((MR_Integer) ((MR_hl_field(0, OptTuple_44, (MR_Integer) 29))));
                    Var_214 = ((MR_Integer) ((MR_hl_field(0, OptTuple_44, (MR_Integer) 30))));
                    Var_215 = ((MR_Integer) ((MR_hl_field(0, OptTuple_44, (MR_Integer) 31))));
                    Var_216 = ((MR_Integer) ((MR_hl_field(0, OptTuple_44, (MR_Integer) 32))));
                    Var_217 = ((MR_Integer) ((MR_hl_field(0, OptTuple_44, (MR_Integer) 33))));
                    Var_218 = ((MR_Integer) ((MR_hl_field(0, OptTuple_44, (MR_Integer) 34))));
                    Var_219 = ((MR_Integer) ((MR_hl_field(0, OptTuple_44, (MR_Integer) 35))));
                    Var_220 = ((MR_Integer) ((MR_hl_field(0, OptTuple_44, (MR_Integer) 36))));
                    Var_221 = ((MR_Integer) ((MR_hl_field(0, OptTuple_44, (MR_Integer) 37))));
                    Var_222 = ((MR_Integer) ((MR_hl_field(0, OptTuple_44, (MR_Integer) 38))));
                    Var_223 = ((MR_Integer) ((MR_hl_field(0, OptTuple_44, (MR_Integer) 39))));
                    Var_224 = ((MR_String) ((MR_hl_field(0, OptTuple_44, (MR_Integer) 40))));
                    {
                      NoOptUnusedArgsOptTuple_45 = (MR_Word) MR_new_object(MR_Word, (41 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(0, NoOptUnusedArgsOptTuple_45, 0) = (MR_Box) ((((packed_word_0 & (~((MR_Unsigned) 32U)))) | (((MR_Unsigned) ((MR_Integer) 1) << 5))));
                      MR_hl_field(0, NoOptUnusedArgsOptTuple_45, 1) = (MR_Box) (packed_word_1);
                      MR_hl_field(0, NoOptUnusedArgsOptTuple_45, 2) = (MR_Box) (packed_word_2);
                      MR_hl_field(0, NoOptUnusedArgsOptTuple_45, 3) = ((MR_Box) (Var_187));
                      MR_hl_field(0, NoOptUnusedArgsOptTuple_45, 4) = ((MR_Box) (Var_188));
                      MR_hl_field(0, NoOptUnusedArgsOptTuple_45, 5) = ((MR_Box) (Var_189));
                      MR_hl_field(0, NoOptUnusedArgsOptTuple_45, 6) = ((MR_Box) (Var_190));
                      MR_hl_field(0, NoOptUnusedArgsOptTuple_45, 7) = ((MR_Box) (Var_191));
                      MR_hl_field(0, NoOptUnusedArgsOptTuple_45, 8) = ((MR_Box) (Var_192));
                      MR_hl_field(0, NoOptUnusedArgsOptTuple_45, 9) = ((MR_Box) (Var_193));
                      MR_hl_field(0, NoOptUnusedArgsOptTuple_45, 10) = ((MR_Box) (Var_194));
                      MR_hl_field(0, NoOptUnusedArgsOptTuple_45, 11) = ((MR_Box) (Var_195));
                      MR_hl_field(0, NoOptUnusedArgsOptTuple_45, 12) = ((MR_Box) (Var_196));
                      MR_hl_field(0, NoOptUnusedArgsOptTuple_45, 13) = ((MR_Box) (Var_197));
                      MR_hl_field(0, NoOptUnusedArgsOptTuple_45, 14) = ((MR_Box) (Var_198));
                      MR_hl_field(0, NoOptUnusedArgsOptTuple_45, 15) = ((MR_Box) (Var_199));
                      MR_hl_field(0, NoOptUnusedArgsOptTuple_45, 16) = ((MR_Box) (Var_200));
                      MR_hl_field(0, NoOptUnusedArgsOptTuple_45, 17) = ((MR_Box) (Var_201));
                      MR_hl_field(0, NoOptUnusedArgsOptTuple_45, 18) = ((MR_Box) (Var_202));
                      MR_hl_field(0, NoOptUnusedArgsOptTuple_45, 19) = ((MR_Box) (Var_203));
                      MR_hl_field(0, NoOptUnusedArgsOptTuple_45, 20) = ((MR_Box) (Var_204));
                      MR_hl_field(0, NoOptUnusedArgsOptTuple_45, 21) = ((MR_Box) (Var_205));
                      MR_hl_field(0, NoOptUnusedArgsOptTuple_45, 22) = ((MR_Box) (Var_206));
                      MR_hl_field(0, NoOptUnusedArgsOptTuple_45, 23) = ((MR_Box) (Var_207));
                      MR_hl_field(0, NoOptUnusedArgsOptTuple_45, 24) = ((MR_Box) (Var_208));
                      MR_hl_field(0, NoOptUnusedArgsOptTuple_45, 25) = ((MR_Box) (Var_209));
                      MR_hl_field(0, NoOptUnusedArgsOptTuple_45, 26) = ((MR_Box) (Var_210));
                      MR_hl_field(0, NoOptUnusedArgsOptTuple_45, 27) = ((MR_Box) (Var_211));
                      MR_hl_field(0, NoOptUnusedArgsOptTuple_45, 28) = ((MR_Box) (Var_212));
                      MR_hl_field(0, NoOptUnusedArgsOptTuple_45, 29) = ((MR_Box) (Var_213));
                      MR_hl_field(0, NoOptUnusedArgsOptTuple_45, 30) = ((MR_Box) (Var_214));
                      MR_hl_field(0, NoOptUnusedArgsOptTuple_45, 31) = ((MR_Box) (Var_215));
                      MR_hl_field(0, NoOptUnusedArgsOptTuple_45, 32) = ((MR_Box) (Var_216));
                      MR_hl_field(0, NoOptUnusedArgsOptTuple_45, 33) = ((MR_Box) (Var_217));
                      MR_hl_field(0, NoOptUnusedArgsOptTuple_45, 34) = ((MR_Box) (Var_218));
                      MR_hl_field(0, NoOptUnusedArgsOptTuple_45, 35) = ((MR_Box) (Var_219));
                      MR_hl_field(0, NoOptUnusedArgsOptTuple_45, 36) = ((MR_Box) (Var_220));
                      MR_hl_field(0, NoOptUnusedArgsOptTuple_45, 37) = ((MR_Box) (Var_221));
                      MR_hl_field(0, NoOptUnusedArgsOptTuple_45, 38) = ((MR_Box) (Var_222));
                      MR_hl_field(0, NoOptUnusedArgsOptTuple_45, 39) = ((MR_Box) (Var_223));
                      MR_hl_field(0, NoOptUnusedArgsOptTuple_45, 40) = ((MR_Box) (Var_224));
                    }
                    libs__globals__set_opt_tuple_3_p_0(NoOptUnusedArgsOptTuple_45, Globals_30, &NoOptUnusedArgsGlobals_46);
                    hlds__hlds_module__module_info_set_globals_3_p_0(NoOptUnusedArgsGlobals_46, HLDS21_42, &HLDS21a_47);
                    top_level__mercury_compile_middle_passes__maybe_unused_args_10_p_0(ProgressStream_17, Verbose_40, Stats_41, &_UnusedArgsInfos_48, HLDS21a_47, &_HLDS22_49, STATE_VARIABLE_Specs_71_71, STATE_VARIABLE_Specs_61);
                  }
                  break;
              }
              *ExtraObjFiles_24 = (MR_Word) ((MR_Unsigned) 0U);
              *STATE_VARIABLE_DumpInfo_59 = STATE_VARIABLE_DumpInfo_70_70;
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word OpModeCodeGen_54 = ((MR_Unsigned) ((MR_hl_field(1, OpModeAugment_20, (MR_Integer) 0))) & (MR_Integer) 3);
          MR_Word AnalysisSpecs_98;
          MR_Word HLDS22_99;

          top_level__mercury_compile_main__maybe_prepare_for_intermodule_analysis_9_p_0(ProgressStream_17, Globals_30, Verbose_40, Stats_41, &AnalysisSpecs_98, HLDS21_42, &HLDS22_99);
          if ((AnalysisSpecs_98 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            MR_Word MaybeTopModule_55 = ((MR_Word) ((MR_hl_field(0, Baggage_22, (MR_Integer) 3))));

            top_level__mercury_compile_main__after_front_end_passes_14_p_0(ProgressStream_17, ErrorStream_18, Globals_30, OpModeCodeGen_54, MaybeTopModule_55, MaybeTimestampMap_33, HLDS22_99, ExtraObjFiles_24, STATE_VARIABLE_Specs_71_71, STATE_VARIABLE_Specs_61, STATE_VARIABLE_DumpInfo_70_70, STATE_VARIABLE_DumpInfo_59);
          }
          else
          {
            *STATE_VARIABLE_Specs_61 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), AnalysisSpecs_98, STATE_VARIABLE_Specs_71_71);
            *ExtraObjFiles_24 = (MR_Word) ((MR_Unsigned) 0U);
            *STATE_VARIABLE_DumpInfo_59 = STATE_VARIABLE_DumpInfo_70_70;
          }
        }
        break;
    }
  }
  else
  {
    succeeded = (ExitStatus_39 == (MR_Integer) 0);
    if (succeeded)
      mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
    *ExtraObjFiles_24 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Specs_61 = STATE_VARIABLE_Specs_71_71;
    *STATE_VARIABLE_DumpInfo_59 = STATE_VARIABLE_DumpInfo_70_70;
  }
}

static void MR_CALL 
top_level__mercury_compile_main__after_front_end_passes_14_p_0(
  MR_Word ProgressStream_15,
  MR_Word ErrorStream_16,
  MR_Word Globals_17,
  MR_Word OpModeCodeGen_18,
  MR_Word MaybeTopModule_19,
  MR_Word MaybeTimestampMap_20,
  MR_Word STATE_VARIABLE_HLDS_0_57,
  MR_Word * ExtraObjFiles_22,
  MR_Word STATE_VARIABLE_Specs_0_58,
  MR_Word * STATE_VARIABLE_Specs_59,
  MR_Word STATE_VARIABLE_DumpInfo_0_60,
  MR_Word * STATE_VARIABLE_DumpInfo_61)
{
  MR_bool succeeded;
  MR_Word Stats_26;
  MR_Word HighLevelCode_27;
  MR_Word Target_28;
  MR_Word ModuleName_29;
  MR_String UsageFileName_30;
  MR_Word FrontEndErrors_33;
  MR_Integer ExitStatus_34;
  MR_Word STATE_VARIABLE_HLDS_65_65;
  MR_Word STATE_VARIABLE_HLDS_67_67;
  MR_Word STATE_VARIABLE_DumpInfo_68_68;
  MR_Word STATE_VARIABLE_Specs_69_69;
  MR_String _UsageFileNameProposed_31;
  MR_Word Var_32;

  libs__globals__lookup_bool_option_3_p_0(Globals_17, (MR_Integer) 86, &Stats_26);
  top_level__mercury_compile_main__maybe_output_prof_call_graph_6_p_0(ProgressStream_15, Stats_26, STATE_VARIABLE_HLDS_0_57, &STATE_VARIABLE_HLDS_65_65);
  top_level__mercury_compile_middle_passes__middle_pass_10_p_0(ProgressStream_15, ErrorStream_16, STATE_VARIABLE_HLDS_65_65, &STATE_VARIABLE_HLDS_67_67, STATE_VARIABLE_DumpInfo_0_60, &STATE_VARIABLE_DumpInfo_68_68, STATE_VARIABLE_Specs_0_58, &STATE_VARIABLE_Specs_69_69);
  libs__globals__lookup_bool_option_3_p_0(Globals_17, (MR_Integer) 330, &HighLevelCode_27);
  libs__globals__get_target_2_p_0(Globals_17, &Target_28);
  hlds__hlds_module__module_info_get_name_2_p_0(STATE_VARIABLE_HLDS_67_67, &ModuleName_29);
  parse_tree__file_names__module_name_to_file_name_6_p_0(Globals_17, (MR_String) "predicate \140top_level.mercury_compile_main.after_front_end_passes\'/14", (MR_Word) (MR_mkword(3, &top_level__mercury_compile_main_scalar_common_1[21])), ModuleName_29, &UsageFileName_30, &_UsageFileNameProposed_31);
  mercury__io__file__remove_file_4_p_0(UsageFileName_30, &Var_32);
  FrontEndErrors_33 = parse_tree__error_util__contains_errors_or_warnings_treated_as_errors_2_f_0(Globals_17, STATE_VARIABLE_Specs_69_69);
  mercury__io__get_exit_status_3_p_0(&ExitStatus_34);
  succeeded = (FrontEndErrors_33 == (MR_Integer) 0);
  if (succeeded)
    succeeded = (ExitStatus_34 == (MR_Integer) 0);
  if (succeeded)
  {
    MR_Word Succeeded_36;
    MR_Word STATE_VARIABLE_HLDS_104_104;

    switch (Target_28) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word ExportDecls_40;

          backend_libs__export__get_foreign_export_decls_2_p_0(STATE_VARIABLE_HLDS_67_67, &ExportDecls_40);
          backend_libs__export__produce_header_file_6_p_0(ProgressStream_15, STATE_VARIABLE_HLDS_67_67, ExportDecls_40, ModuleName_29);
          switch (HighLevelCode_27) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word GlobalData_49;
                MR_Word LLDS_50;

                top_level__mercury_compile_llds_back_end__llds_backend_pass_10_p_0(ProgressStream_15, ErrorStream_16, STATE_VARIABLE_HLDS_67_67, &STATE_VARIABLE_HLDS_104_104, &GlobalData_49, &LLDS_50, STATE_VARIABLE_DumpInfo_68_68, STATE_VARIABLE_DumpInfo_61);
                top_level__mercury_compile_llds_back_end__llds_output_pass_10_p_0(ProgressStream_15, OpModeCodeGen_18, STATE_VARIABLE_HLDS_104_104, GlobalData_49, LLDS_50, ModuleName_29, &Succeeded_36, ExtraObjFiles_22);
                *STATE_VARIABLE_Specs_59 = STATE_VARIABLE_Specs_69_69;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word MLDS_114;
                MR_Word TargetCodeSucceeded_115;

                top_level__mercury_compile_mlds_back_end__mlds_backend_9_p_0(ProgressStream_15, STATE_VARIABLE_HLDS_67_67, &MLDS_114, STATE_VARIABLE_Specs_69_69, STATE_VARIABLE_Specs_59, STATE_VARIABLE_DumpInfo_68_68, STATE_VARIABLE_DumpInfo_61);
                top_level__mercury_compile_mlds_back_end__mlds_to_high_level_c_6_p_0(ProgressStream_15, Globals_17, MLDS_114, &TargetCodeSucceeded_115);
                switch (OpModeCodeGen_18) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 1:
                  case (MR_Integer) 2:
                    switch (TargetCodeSucceeded_115) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        Succeeded_36 = (MR_Integer) 0;
                        break;
                      case (MR_Integer) 1:
                        {
                          MR_String C_File_41;
                          MR_Word TargetType_43;
                          MR_Word PIC_44;
                          MR_Word ObjExt_45;
                          MR_String O_File_47;
                          MR_Word Var_100;
                          MR_String _C_FileProposed_42;
                          MR_Word Var_46;
                          MR_String _O_FileProposed_48;

                          parse_tree__file_names__module_name_to_file_name_6_p_0(Globals_17, (MR_String) "predicate \140top_level.mercury_compile_main.after_front_end_passes\'/14", (MR_Word) (MR_mkword(3, &top_level__mercury_compile_main_scalar_common_1[22])), ModuleName_29, &C_File_41, &_C_FileProposed_42);
                          backend_libs__compile_target_code__get_linked_target_type_2_p_0(Globals_17, &TargetType_43);
                          backend_libs__compile_target_code__get_object_code_type_3_p_0(Globals_17, TargetType_43, &PIC_44);
                          backend_libs__compile_target_code__maybe_pic_object_file_extension_3_p_0(PIC_44, &ObjExt_45, &Var_46);
                          {
                            Var_100 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(3, Var_100, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                            MR_hl_field(3, Var_100, 1) = (MR_Box) ((MR_Unsigned) (ObjExt_45));
                          }
                          parse_tree__file_names__module_name_to_file_name_create_dirs_8_p_0(Globals_17, (MR_String) "predicate \140top_level.mercury_compile_main.after_front_end_passes\'/14", Var_100, ModuleName_29, &O_File_47, &_O_FileProposed_48);
                          backend_libs__compile_target_code__do_compile_c_file_8_p_0(Globals_17, ProgressStream_15, PIC_44, C_File_41, O_File_47, &Succeeded_36);
                          parse_tree__module_cmds__maybe_set_exit_status_3_p_0(Succeeded_36);
                        }
                        break;
                    }
                    break;
                  case (MR_Integer) 0:
                    Succeeded_36 = TargetCodeSucceeded_115;
                    break;
                }
                *ExtraObjFiles_22 = (MR_Word) ((MR_Unsigned) 0U);
                STATE_VARIABLE_HLDS_104_104 = STATE_VARIABLE_HLDS_67_67;
              }
              break;
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word MLDS_35;

          top_level__mercury_compile_mlds_back_end__mlds_backend_9_p_0(ProgressStream_15, STATE_VARIABLE_HLDS_67_67, &MLDS_35, STATE_VARIABLE_Specs_69_69, STATE_VARIABLE_Specs_59, STATE_VARIABLE_DumpInfo_68_68, STATE_VARIABLE_DumpInfo_61);
          top_level__mercury_compile_mlds_back_end__mlds_to_csharp_6_p_0(ProgressStream_15, STATE_VARIABLE_HLDS_67_67, MLDS_35, &Succeeded_36);
          *ExtraObjFiles_22 = (MR_Word) ((MR_Unsigned) 0U);
          STATE_VARIABLE_HLDS_104_104 = STATE_VARIABLE_HLDS_67_67;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word TargetCodeSucceeded_37;
          MR_Word MLDS_113;

          top_level__mercury_compile_mlds_back_end__mlds_backend_9_p_0(ProgressStream_15, STATE_VARIABLE_HLDS_67_67, &MLDS_113, STATE_VARIABLE_Specs_69_69, STATE_VARIABLE_Specs_59, STATE_VARIABLE_DumpInfo_68_68, STATE_VARIABLE_DumpInfo_61);
          top_level__mercury_compile_mlds_back_end__mlds_to_java_6_p_0(ProgressStream_15, STATE_VARIABLE_HLDS_67_67, MLDS_113, &TargetCodeSucceeded_37);
          switch (OpModeCodeGen_18) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
            case (MR_Integer) 2:
              switch (TargetCodeSucceeded_37) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  Succeeded_36 = (MR_Integer) 0;
                  break;
                case (MR_Integer) 1:
                  {
                    MR_String JavaFile_38;
                    MR_String _JavaFileProposed_39;

                    parse_tree__file_names__module_name_to_file_name_6_p_0(Globals_17, (MR_String) "predicate \140top_level.mercury_compile_main.after_front_end_passes\'/14", (MR_Word) (MR_mkword(3, &top_level__mercury_compile_main_scalar_common_1[23])), ModuleName_29, &JavaFile_38, &_JavaFileProposed_39);
                    backend_libs__compile_target_code__compile_java_files_7_p_0(Globals_17, ProgressStream_15, JavaFile_38, (MR_Word) ((MR_Unsigned) 0U), &Succeeded_36);
                    parse_tree__module_cmds__maybe_set_exit_status_3_p_0(Succeeded_36);
                  }
                  break;
              }
              break;
            case (MR_Integer) 0:
              Succeeded_36 = TargetCodeSucceeded_37;
              break;
          }
          *ExtraObjFiles_22 = (MR_Word) ((MR_Unsigned) 0U);
          STATE_VARIABLE_HLDS_104_104 = STATE_VARIABLE_HLDS_67_67;
        }
        break;
    }
    switch (Succeeded_36) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word MaybeRecompInfo_51;
          MR_String TimestampFile_55;
          MR_Word RecompInfo_52;
          MR_Word TimestampMap_53;
          MR_Word _Succeededs_56;

          hlds__hlds_module__module_info_get_maybe_recompilation_info_2_p_0(STATE_VARIABLE_HLDS_104_104, &MaybeRecompInfo_51);
          succeeded = (MaybeRecompInfo_51 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            RecompInfo_52 = ((MR_Word) ((MR_hl_field(1, MaybeRecompInfo_51, (MR_Integer) 0))));
            succeeded = (MaybeTimestampMap_20 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
              TimestampMap_53 = ((MR_Word) ((MR_hl_field(1, MaybeTimestampMap_20, (MR_Integer) 0))));
          }
          if (succeeded)
          {
            MR_Word UsedFileContents_54;

            recompilation__usage__construct_used_file_contents_5_p_0(STATE_VARIABLE_HLDS_104_104, RecompInfo_52, MaybeTopModule_19, TimestampMap_53, &UsedFileContents_54);
            recompilation__used_file__write_usage_file_5_p_0(ProgressStream_15, STATE_VARIABLE_HLDS_104_104, UsedFileContents_54);
          }
          parse_tree__file_names__module_name_to_target_timestamp_file_name_create_dirs_5_p_0(Globals_17, ModuleName_29, &TimestampFile_55);
          parse_tree__module_cmds__touch_file_datestamp_6_p_0(Globals_17, ProgressStream_15, TimestampFile_55, &_Succeededs_56);
        }
        break;
    }
  }
  else
  {
    succeeded = (ExitStatus_34 == (MR_Integer) 0);
    if (succeeded)
      mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
    *ExtraObjFiles_22 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_DumpInfo_61 = STATE_VARIABLE_DumpInfo_68_68;
    *STATE_VARIABLE_Specs_59 = STATE_VARIABLE_Specs_69_69;
  }
}

static void MR_CALL 
top_level__mercury_compile_main__maybe_output_prof_call_graph_6_p_0(
  MR_Word ProgressStream_7,
  MR_Word Stats_8,
  MR_Word STATE_VARIABLE_HLDS_0_19,
  MR_Word * STATE_VARIABLE_HLDS_20)
{
  MR_bool succeeded;
  MR_Word Globals_11;
  MR_Word ProfileCalls_12;
  MR_Word ProfileTime_13;

  hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_HLDS_0_19, &Globals_11);
  libs__globals__lookup_bool_option_3_p_0(Globals_11, (MR_Integer) 263, &ProfileCalls_12);
  libs__globals__lookup_bool_option_3_p_0(Globals_11, (MR_Integer) 264, &ProfileTime_13);
  succeeded = (ProfileCalls_12 == (MR_Integer) 1);
  if (!(succeeded))
    succeeded = (ProfileTime_13 == (MR_Integer) 1);
  if (succeeded)
  {
    MR_Word ModuleName_14;
    MR_String ProfFileName_15;
    MR_String DepGraphStr_17;
    MR_String _ProfFileNameProposed_16;
    MR_Word _Succeeded_18;

    hlds__hlds_module__module_info_get_name_2_p_0(STATE_VARIABLE_HLDS_0_19, &ModuleName_14);
    parse_tree__file_names__module_name_to_file_name_create_dirs_8_p_0(Globals_11, (MR_String) "predicate \140top_level.mercury_compile_main.maybe_output_prof_call_graph\'/6", (MR_Word) (MR_mkword(1, &top_level__mercury_compile_main_scalar_common_3[1])), ModuleName_14, &ProfFileName_15, &_ProfFileNameProposed_16);
    hlds__hlds_dependency_graph__prof_dependency_graph_to_string_3_p_0(&DepGraphStr_17, STATE_VARIABLE_HLDS_0_19, STATE_VARIABLE_HLDS_20);
    libs__file_util__write_string_to_file_8_p_0(ProgressStream_7, Globals_11, (MR_String) "Writing profiling call graph", ProfFileName_15, DepGraphStr_17, &_Succeeded_18);
    libs__file_util__maybe_report_stats_4_p_0(ProgressStream_7, Stats_8);
  }
  else
    *STATE_VARIABLE_HLDS_20 = STATE_VARIABLE_HLDS_0_19;
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
  libs__globals__lookup_accumulating_option_3_p_0(Globals_11, (MR_Integer) 742, &LocalModulesList_18);
  SymNames_19 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&top_level__mercury_compile_main_scalar_common_2[9]), LocalModulesList_18);
  LocalModuleNames_20 = mercury__set__list_to_set_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), SymNames_19);
  hlds__hlds_module__module_info_get_analysis_info_2_p_0(STATE_VARIABLE_HLDS_0_23, &AnalysisInfo0_21);
  analysis__operations__prepare_intermodule_analysis_9_p_0(ProgressStream_10, Globals_11, ModuleNames_17, LocalModuleNames_20, Specs_14, AnalysisInfo0_21, &AnalysisInfo_22);
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

  libs__globals__lookup_bool_option_3_p_0(Globals_11, (MR_Integer) 525, &IntermodAnalysis_17);
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
        libs__globals__lookup_accumulating_option_3_p_0(Globals_11, (MR_Integer) 742, &LocalModulesList_24);
        SymNames_25 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&top_level__mercury_compile_main_scalar_common_2[8]), LocalModulesList_24);
        LocalModuleNames_26 = mercury__set__list_to_set_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), SymNames_25);
        hlds__hlds_module__module_info_get_analysis_info_2_p_0(STATE_VARIABLE_HLDS_0_18, &AnalysisInfo0_27);
        analysis__operations__prepare_intermodule_analysis_9_p_0(ProgressStream_10, Globals_11, ModuleNames_23, LocalModuleNames_26, Specs_14, AnalysisInfo0_27, &AnalysisInfo_28);
        hlds__hlds_module__module_info_set_analysis_info_3_p_0(AnalysisInfo_28, STATE_VARIABLE_HLDS_0_18, STATE_VARIABLE_HLDS_19);
        libs__file_util__maybe_write_string_5_p_0(ProgressStream_10, Verbose_12, (MR_String) "% done.\n");
        libs__file_util__maybe_report_stats_4_p_0(ProgressStream_10, Stats_13);
      }
      break;
  }
}

static void MR_CALL 
top_level__mercury_compile_main__maybe_write_dependency_graph_6_p_0(
  MR_Word ProgressStream_7,
  MR_Word Stats_8,
  MR_Word STATE_VARIABLE_HLDS_0_17,
  MR_Word * STATE_VARIABLE_HLDS_18)
{
  MR_Word Globals_11;
  MR_Word ShowDepGraph_12;

  hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_HLDS_0_17, &Globals_11);
  libs__globals__lookup_bool_option_3_p_0(Globals_11, (MR_Integer) 208, &ShowDepGraph_12);
  switch (ShowDepGraph_12) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *STATE_VARIABLE_HLDS_18 = STATE_VARIABLE_HLDS_0_17;
      break;
    case (MR_Integer) 1:
      {
        MR_String DepGraphStr_13;
        MR_Word ModuleName_14;
        MR_String DepGraphFileName_15;
        MR_Word _Succeeded_16;

        hlds__hlds_dependency_graph__dependency_graph_to_string_3_p_0(&DepGraphStr_13, STATE_VARIABLE_HLDS_0_17, STATE_VARIABLE_HLDS_18);
        hlds__hlds_module__module_info_get_name_2_p_0(*STATE_VARIABLE_HLDS_18, &ModuleName_14);
        parse_tree__file_names__module_name_to_cur_dir_file_name_3_p_0((MR_Integer) 3, ModuleName_14, &DepGraphFileName_15);
        libs__file_util__write_string_to_file_8_p_0(ProgressStream_7, Globals_11, (MR_String) "Writing dependency graph", DepGraphFileName_15, DepGraphStr_13, &_Succeeded_16);
        libs__file_util__maybe_report_stats_4_p_0(ProgressStream_7, Stats_8);
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
  libs__options__set_all_options_to_4_p_0(Var_8, (MR_Word) (MR_mkword(1, &top_level__mercury_compile_main_scalar_common_3[0])), OptionTable0_5, &OptionTable1_6);
  Var_11 = libs__options__non_style_warning_options_0_f_0();
  libs__options__set_all_options_to_4_p_0(Var_11, (MR_Word) (MR_mkword(1, &top_level__mercury_compile_main_scalar_common_3[0])), OptionTable1_6, &OptionTable_7);
  libs__globals__set_options_3_p_0(OptionTable_7, Globals0_3, Globals_4);
}

static void MR_CALL 
top_level__mercury_compile_main__module_to_link_2_p_0(
  MR_Word BurdenedModule_3,
  MR_String * ModuleToLink_4)
{
  MR_Word ParseTreeModuleSrc_6 = ((MR_Word) ((MR_hl_field(0, BurdenedModule_3, (MR_Integer) 1))));
  MR_Word ModuleName_7 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_6, (MR_Integer) 0))));

  parse_tree__file_names__module_name_to_file_name_stem_2_p_0(ModuleName_7, ModuleToLink_4);
}

static void MR_CALL 
top_level__mercury_compile_main__acc_not_found_files_5_p_0(
  MR_Word Spec_6,
  MR_Word STATE_VARIABLE_NotFoundFiles_0_11,
  MR_Word * STATE_VARIABLE_NotFoundFiles_12,
  MR_Word STATE_VARIABLE_OtherSpecs_0_13,
  MR_Word * STATE_VARIABLE_OtherSpecs_14)
{
  MR_bool succeeded;
  MR_Word Phase_9;
  MR_String FileName_10;

  parse_tree__error_spec__extract_spec_phase_2_p_0(Spec_6, &Phase_9);
  succeeded = ((MR_tag((MR_Word) Phase_9)) == (MR_Integer) 1);
  if (succeeded)
  {
    FileName_10 = ((MR_String) ((MR_hl_field(1, Phase_9, (MR_Integer) 0))));
    {
      MR_Word Var_16;

      {
        Var_16 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(2, Var_16, 0) = ((MR_Box) (FileName_10));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_NotFoundFiles_12 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Var_16));
        MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_NotFoundFiles_0_11));
      }
      *STATE_VARIABLE_OtherSpecs_14 = STATE_VARIABLE_OtherSpecs_0_13;
    }
  }
  else
  {
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_OtherSpecs_14 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Spec_6));
      MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_OtherSpecs_0_13));
    }
    *STATE_VARIABLE_NotFoundFiles_12 = STATE_VARIABLE_NotFoundFiles_0_11;
  }
}

static MR_bool MR_CALL 
top_level__mercury_compile_main__gather_local_burdened_modules_4_p_0(
  MR_Word Deps_5,
  MR_Word * BurdenedModule_6,
  MR_Word STATE_VARIABLE_Ancestors_0_15,
  MR_Word * STATE_VARIABLE_Ancestors_16)
{
  MR_bool succeeded;
  MR_Word MaybeDummy_9 = ((MR_Unsigned) ((MR_hl_field(0, Deps_5, (MR_Integer) 0))) & (MR_Integer) 1);
  MR_Word ParseTreeModuleSrc_11;
  MR_Word IncludeMap_12;
  MR_Word TypeCtorInfo_89_89;
  MR_Word TypeCtorInfo_90_90;

  *BurdenedModule_6 = ((MR_Word) ((MR_hl_field(0, Deps_5, (MR_Integer) 1))));
  succeeded = (MaybeDummy_9 == (MR_Integer) 0);
  if (succeeded)
  {
    ParseTreeModuleSrc_11 = ((MR_Word) ((MR_hl_field(0, *BurdenedModule_6, (MR_Integer) 1))));
    IncludeMap_12 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_11, (MR_Integer) 2))));
    TypeCtorInfo_89_89 = (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0);
    TypeCtorInfo_90_90 = (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_include_module_info_0);
    succeeded = mercury__map__is_empty_1_p_0(TypeCtorInfo_89_89, TypeCtorInfo_90_90, IncludeMap_12);
    if (succeeded)
      *STATE_VARIABLE_Ancestors_16 = STATE_VARIABLE_Ancestors_0_15;
    else
    {
      MR_Word ModuleName_13 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_11, (MR_Integer) 0))));
      MR_Word ModuleNameComponents_14;
      MR_Word Var_18;

      ModuleNameComponents_14 = mdbcomp__sym_name__sym_name_to_list_1_f_0(ModuleName_13);
      {
        Var_18 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_18, 0) = ((MR_Box) (ModuleNameComponents_14));
        MR_hl_field(0, Var_18, 1) = ((MR_Box) (*BurdenedModule_6));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_Ancestors_16 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Var_18));
        MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Ancestors_0_15));
      }
    }
    succeeded = MR_TRUE;
  }
  return succeeded;
}

void MR_CALL 
top_level__mercury_compile_main__main_for_make_6_p_0(
  MR_Word ProgressStream_7,
  MR_Word ErrorStream_8,
  MR_Word Globals_9,
  MR_Word Args_10)
{
  MR_bool succeeded;
  MR_Word EnvVarMap_13;
  MR_Word EnvOptFileVariables_14;
  MR_Word EnvVarArgs_15;
  MR_Word Version_21;
  MR_Word Help_22;

  mercury__io__environment__get_environment_var_map_3_p_0(&EnvVarMap_13);
  EnvOptFileVariables_14 = make__options_file__env_optfile_variables_init_1_f_0(EnvVarMap_13);
  top_level__mercury_compile_args__get_args_representing_env_vars_3_p_0(&EnvVarArgs_15);
  libs__globals__lookup_bool_option_3_p_0(Globals_9, (MR_Integer) 739, &Version_21);
  libs__globals__lookup_bool_option_3_p_0(Globals_9, (MR_Integer) 738, &Help_22);
  succeeded = (Help_22 == (MR_Integer) 1);
  if (succeeded)
  {
    MR_Word StdOutStream_23;

    mercury__io__stdout_stream_3_p_0(&StdOutStream_23);
    libs__handle_options__long_usage_3_p_0(StdOutStream_23);
  }
  else
  {
    succeeded = (Version_21 == (MR_Integer) 1);
    if (succeeded)
    {
      MR_Word StdOutStream_34;

      mercury__io__stdout_stream_3_p_0(&StdOutStream_34);
      libs__handle_options__display_compiler_version_3_p_0(StdOutStream_34);
    }
    else
    {
      MR_Word OpMode_24;
      MR_Word HaveParseTreeMaps0_25;
      MR_Word Specs_28;
      MR_Word _HaveParseTreeMaps_27;

      libs__globals__get_op_mode_2_p_0(Globals_9, &OpMode_24);
      HaveParseTreeMaps0_25 = parse_tree__read_modules__init_have_parse_tree_maps_0_f_0();
      top_level__mercury_compile_main__do_op_mode_15_p_0(ProgressStream_7, ErrorStream_8, Globals_9, OpMode_24, (MR_Word) ((MR_Unsigned) 0U), EnvOptFileVariables_14, EnvVarArgs_15, (MR_Word) ((MR_Unsigned) 0U), Args_10, HaveParseTreeMaps0_25, &_HaveParseTreeMaps_27, (MR_Word) ((MR_Unsigned) 0U), &Specs_28);
      parse_tree__write_error_spec__write_error_specs_5_p_0(ErrorStream_8, Globals_9, Specs_28);
    }
  }
}

void MR_CALL 
top_level__mercury_compile_main__real_main_2_p_0(void)
{
  MR_bool succeeded;
  MR_Word ErrorStream_6;
  MR_Word CmdLineArgs_8;
  MR_Word ArgResult_9;
  MR_Word Var_7;

{
#define MR_PROC_LABEL top_level__mercury_compile_main__real_main_2_p_0


		{

#ifdef MR_BOEHM_GC
    // Explicitly force the initial heap size to be at least 4 Mb.
    //
    // This works around a bug in the Boehm collector (for versions up
    // to at least 6.2) where the collector would sometimes abort with
    // the message `unexpected mark stack overflow' (e.g. in grade hlc.gc
    // on dec-alpha-osf3.2).
    //
    // Doing this should also improve performance slightly by avoiding
    // frequent garbage collection during start-up.
    GC_expand_hp(4 * 1024 * 1024);
#endif


		;}
#undef MR_PROC_LABEL
}
  mercury__io__stderr_stream_3_p_0(&ErrorStream_6);
  mercury__io__set_output_stream_4_p_0(ErrorStream_6, &Var_7);
  mdbcomp__shared_utilities__unlimit_stack_2_p_0();
  mercury__io__command_line_arguments_3_p_0(&CmdLineArgs_8);
  top_level__mercury_compile_args__setup_all_args_6_p_0(ErrorStream_6, ErrorStream_6, CmdLineArgs_8, &ArgResult_9);
  if (!((ArgResult_9 == (MR_Word) ((MR_Unsigned) 0U))))
  {
    MR_Word Globals_10 = ((MR_Word) ((MR_hl_field(1, ArgResult_9, (MR_Integer) 0))));
    MR_Word StdlibGradeFlags_11 = ((MR_Word) ((MR_hl_field(1, ArgResult_9, (MR_Integer) 1))));
    MR_Word EnvOptFileVariables_12 = ((MR_Word) ((MR_hl_field(1, ArgResult_9, (MR_Integer) 2))));
    MR_Word EnvVarArgs_13 = ((MR_Word) ((MR_hl_field(1, ArgResult_9, (MR_Integer) 3))));
    MR_Word OptionArgs_14 = ((MR_Word) ((MR_hl_field(1, ArgResult_9, (MR_Integer) 4))));
    MR_Word NonOptionArgs_15 = ((MR_Word) ((MR_hl_field(1, ArgResult_9, (MR_Integer) 5))));
    MR_Word Version_31;
    MR_Word Help_32;

    libs__globals__lookup_bool_option_3_p_0(Globals_10, (MR_Integer) 739, &Version_31);
    libs__globals__lookup_bool_option_3_p_0(Globals_10, (MR_Integer) 738, &Help_32);
    succeeded = (Help_32 == (MR_Integer) 1);
    if (succeeded)
    {
      MR_Word StdOutStream_33;

      mercury__io__stdout_stream_3_p_0(&StdOutStream_33);
      libs__handle_options__long_usage_3_p_0(StdOutStream_33);
    }
    else
    {
      succeeded = (Version_31 == (MR_Integer) 1);
      if (succeeded)
      {
        MR_Word StdOutStream_44;

        mercury__io__stdout_stream_3_p_0(&StdOutStream_44);
        libs__handle_options__display_compiler_version_3_p_0(StdOutStream_44);
      }
      else
      {
        MR_Word OpMode_34;
        MR_Word HaveParseTreeMaps0_35;
        MR_Word Specs_38;
        MR_Word _HaveParseTreeMaps_37;

        libs__globals__get_op_mode_2_p_0(Globals_10, &OpMode_34);
        HaveParseTreeMaps0_35 = parse_tree__read_modules__init_have_parse_tree_maps_0_f_0();
        top_level__mercury_compile_main__do_op_mode_15_p_0(ErrorStream_6, ErrorStream_6, Globals_10, OpMode_34, StdlibGradeFlags_11, EnvOptFileVariables_12, EnvVarArgs_13, OptionArgs_14, NonOptionArgs_15, HaveParseTreeMaps0_35, &_HaveParseTreeMaps_37, (MR_Word) ((MR_Unsigned) 0U), &Specs_38);
        parse_tree__write_error_spec__write_error_specs_5_p_0(ErrorStream_6, Globals_10, Specs_38);
      }
    }
  }
  make__deps_cache__record_make_deps_cache_stats_2_p_0();
  parse_tree__make_module_file_names__record_write_deps_file_cache_stats_2_p_0();
  hlds__instmap__record_instmap_delta_restrict_stats_2_p_0();
  libs__globals__close_any_specific_compiler_streams_2_p_0();
}

static MR_bool MR_CALL 
top_level__mercury_compile_main__do_op_mode_15_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_args__403__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

static void MR_CALL 
top_level__mercury_compile_main__do_op_mode_15_p_0(
  MR_Word ProgressStream_16,
  MR_Word ErrorStream_17,
  MR_Word Globals_18,
  MR_Word OpMode_19,
  MR_Word StdlibGradeFlags_20,
  MR_Word EnvOptFileVariables_21,
  MR_Word EnvVarArgs_22,
  MR_Word OptionArgs_23,
  MR_Word Args_24,
  MR_Word STATE_VARIABLE_HaveParseTreeMaps_0_35,
  MR_Word * STATE_VARIABLE_HaveParseTreeMaps_36,
  MR_Word STATE_VARIABLE_Specs_0_37,
  MR_Word * STATE_VARIABLE_Specs_38)
{
  MR_bool succeeded;

  switch (MR_tag((MR_Word) OpMode_19)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(OpMode_19)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word MakeGlobals_28;

            libs__globals__set_option_4_p_0((MR_Integer) 735, (MR_Word) (MR_mkword(1, &top_level__mercury_compile_main_scalar_common_3[0])), Globals_18, &MakeGlobals_28);
            make__top_level__make_process_compiler_args_9_p_0(ProgressStream_16, MakeGlobals_28, StdlibGradeFlags_20, EnvOptFileVariables_21, EnvVarArgs_22, OptionArgs_23, Args_24);
            *STATE_VARIABLE_HaveParseTreeMaps_36 = STATE_VARIABLE_HaveParseTreeMaps_0_35;
            *STATE_VARIABLE_Specs_38 = STATE_VARIABLE_Specs_0_37;
          }
          break;
        case (MR_Integer) 1:
          {
            parse_tree__source_file_map__write_source_file_map_5_p_0(ProgressStream_16, Globals_18, Args_24);
            *STATE_VARIABLE_HaveParseTreeMaps_36 = STATE_VARIABLE_HaveParseTreeMaps_0_35;
            *STATE_VARIABLE_Specs_38 = STATE_VARIABLE_Specs_0_37;
          }
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_String StandaloneIntBasename_29 = ((MR_String) ((MR_hl_field(1, OpMode_19, (MR_Integer) 0))));

        top_level__mercury_compile_main__do_op_mode_standalone_interface_6_p_0(ProgressStream_16, ErrorStream_17, Globals_18, StandaloneIntBasename_29);
        *STATE_VARIABLE_HaveParseTreeMaps_36 = STATE_VARIABLE_HaveParseTreeMaps_0_35;
        *STATE_VARIABLE_Specs_38 = STATE_VARIABLE_Specs_0_37;
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word OpModeQuery_30 = ((MR_Unsigned) ((MR_hl_field(2, OpMode_19, (MR_Integer) 0))) & (MR_Integer) 15);

        top_level__mercury_compile_main__do_op_mode_query_5_p_0(ErrorStream_17, Globals_18, OpModeQuery_30);
        *STATE_VARIABLE_HaveParseTreeMaps_36 = STATE_VARIABLE_HaveParseTreeMaps_0_35;
        *STATE_VARIABLE_Specs_38 = STATE_VARIABLE_Specs_0_37;
      }
      break;
    case (MR_Integer) 3:
      {
        MR_Word OpModeArgs_31 = ((MR_Word) ((MR_hl_field(3, OpMode_19, (MR_Integer) 0))));
        MR_Word InvokedByMmcMake_32 = ((MR_Unsigned) ((MR_hl_field(3, OpMode_19, (MR_Integer) 1))) & (MR_Integer) 1);
        MR_Word FileNamesFromStdin_33;

        libs__globals__lookup_bool_option_3_p_0(Globals_18, (MR_Integer) 735, &FileNamesFromStdin_33);
        succeeded = (Args_24 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
          succeeded = (FileNamesFromStdin_33 == (MR_Integer) 0);
        if (succeeded)
        {
          MR_Word StdErr_34;

          mercury__io__stderr_stream_3_p_0(&StdErr_34);
          libs__handle_options__short_usage_3_p_0(StdErr_34);
          *STATE_VARIABLE_Specs_38 = STATE_VARIABLE_Specs_0_37;
          *STATE_VARIABLE_HaveParseTreeMaps_36 = STATE_VARIABLE_HaveParseTreeMaps_0_35;
        }
        else
        {
          MR_Word LibgradeCheckSpecs_50;
          MR_Word StdErr_51;
          MR_Word Statistics_60;

          libs__check_libgrades__maybe_check_libraries_are_installed_4_p_0(Globals_18, &LibgradeCheckSpecs_50);
          mercury__io__stderr_stream_3_p_0(&StdErr_51);
          if ((LibgradeCheckSpecs_50 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            MR_Word ModulesToLinkCord_53;
            MR_Word ExtraObjFilesCord_54;
            MR_Integer ExitStatus_55;

            switch (FileNamesFromStdin_33) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (InvokedByMmcMake_32) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 1:
                    {
                      MR_Word Var_73;
                      MR_Word Var_74;

                      Var_73 = mercury__cord__empty_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0));
                      Var_74 = mercury__cord__empty_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0));
                      top_level__mercury_compile_main__do_process_compiler_cmd_line_args_15_p_0(ProgressStream_16, ErrorStream_17, Globals_18, OpModeArgs_31, InvokedByMmcMake_32, OptionArgs_23, Args_24, Var_73, &ModulesToLinkCord_53, Var_74, &ExtraObjFilesCord_54, STATE_VARIABLE_HaveParseTreeMaps_0_35, STATE_VARIABLE_HaveParseTreeMaps_36);
                      *STATE_VARIABLE_Specs_38 = STATE_VARIABLE_Specs_0_37;
                    }
                    break;
                  case (MR_Integer) 0:
                    {
                      MR_Word Var_71;
                      MR_Word Var_72;

                      Var_71 = mercury__cord__empty_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0));
                      Var_72 = mercury__cord__empty_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0));
                      top_level__mercury_compile_main__setup_and_process_compiler_cmd_line_args_20_p_0(ProgressStream_16, ErrorStream_17, Globals_18, OpModeArgs_31, InvokedByMmcMake_32, StdlibGradeFlags_20, EnvOptFileVariables_21, EnvVarArgs_22, OptionArgs_23, Args_24, Var_71, &ModulesToLinkCord_53, Var_72, &ExtraObjFilesCord_54, STATE_VARIABLE_HaveParseTreeMaps_0_35, STATE_VARIABLE_HaveParseTreeMaps_36, STATE_VARIABLE_Specs_0_37, STATE_VARIABLE_Specs_38);
                    }
                    break;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word StdIn_52;
                  MR_Word Var_63;
                  MR_Word Var_68;
                  MR_Word Var_69;

                  {
                    Var_63 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, Var_63, 0) = ((MR_Box) (&top_level__mercury_compile_main_scalar_common_8[2]));
                    MR_hl_field(0, Var_63, 1) = ((MR_Box) (top_level__mercury_compile_main__do_op_mode_15_p_0_1));
                    MR_hl_field(0, Var_63, 2) = ((MR_Box) ((MR_Integer) 2));
                    MR_hl_field(0, Var_63, 3) = ((MR_Box) (InvokedByMmcMake_32));
                    MR_hl_field(0, Var_63, 4) = ((MR_Box) ((MR_Integer) 0));
                  }
                  mercury__require__expect_3_p_0(Var_63, (MR_String) "predicate \140top_level.mercury_compile_main.do_op_mode_args\'/17", (MR_String) "InvokedByMmcMake != op_mode_not_invoked_by_mmc_make");
                  mercury__io__stdin_stream_3_p_0(&StdIn_52);
                  Var_68 = mercury__cord__empty_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0));
                  Var_69 = mercury__cord__empty_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0));
                  top_level__mercury_compile_main__setup_and_process_compiler_stdin_args_20_p_0(ProgressStream_16, ErrorStream_17, StdIn_52, Globals_18, OpModeArgs_31, InvokedByMmcMake_32, StdlibGradeFlags_20, EnvOptFileVariables_21, EnvVarArgs_22, OptionArgs_23, Var_68, &ModulesToLinkCord_53, Var_69, &ExtraObjFilesCord_54, STATE_VARIABLE_HaveParseTreeMaps_0_35, STATE_VARIABLE_HaveParseTreeMaps_36, STATE_VARIABLE_Specs_0_37, STATE_VARIABLE_Specs_38);
                }
                break;
            }
            parse_tree__write_error_spec__write_error_specs_5_p_0(ErrorStream_17, Globals_18, *STATE_VARIABLE_Specs_38);
            parse_tree__write_error_spec__maybe_print_delayed_error_messages_4_p_0(ErrorStream_17, Globals_18);
            mercury__io__get_exit_status_3_p_0(&ExitStatus_55);
            succeeded = (ExitStatus_55 == (MR_Integer) 0);
            if (succeeded)
            {
              MR_Word ModulesToLink_56;
              MR_Word ExtraObjFiles_57;
              MR_String FirstModule_58;
              MR_Word Var_78;
              MR_Word Var_79;

              ModulesToLink_56 = mercury__cord__list_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ModulesToLinkCord_53);
              ExtraObjFiles_57 = mercury__cord__list_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ExtraObjFilesCord_54);
              succeeded = ((MR_tag((MR_Word) OpModeArgs_31)) == (MR_Integer) 3);
              if (succeeded)
              {
                Var_78 = ((MR_Word) ((MR_hl_field(3, OpModeArgs_31, (MR_Integer) 0))));
                succeeded = ((MR_tag((MR_Word) Var_78)) == (MR_Integer) 1);
                if (succeeded)
                {
                  Var_79 = ((MR_Unsigned) ((MR_hl_field(1, Var_78, (MR_Integer) 0))) & (MR_Integer) 3);
                  succeeded = (Var_79 == (MR_Integer) 2);
                  if (succeeded)
                  {
                    succeeded = (ModulesToLink_56 != (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                      FirstModule_58 = ((MR_String) ((MR_hl_field(1, ModulesToLink_56, (MR_Integer) 0))));
                  }
                }
              }
              if (succeeded)
              {
                MR_Word MainModuleName_88;
                MR_Word Target_89;
                MR_Word Succeeded_90;

                parse_tree__file_names__file_name_to_module_name_2_p_0(FirstModule_58, &MainModuleName_88);
                libs__globals__get_target_2_p_0(Globals_18, &Target_89);
                switch (Target_89) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                  case (MR_Integer) 1:
                    {
                      MR_Word Specs_91;

                      switch (InvokedByMmcMake_32) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 1:
                          backend_libs__compile_target_code__link_module_list_8_p_0(ProgressStream_16, ModulesToLink_56, ExtraObjFiles_57, Globals_18, &Specs_91, &Succeeded_90);
                          break;
                        case (MR_Integer) 0:
                          {
                            MR_Word DefaultOptionTable_92;
                            MR_Word MayBuild_93;

                            libs__globals__get_default_options_2_p_0(Globals_18, &DefaultOptionTable_92);
                            make__build__setup_for_build_with_module_options_12_p_0(ProgressStream_16, DefaultOptionTable_92, (MR_Integer) 0, MainModuleName_88, StdlibGradeFlags_20, EnvOptFileVariables_21, EnvVarArgs_22, OptionArgs_23, (MR_Word) ((MR_Unsigned) 0U), &MayBuild_93);
                            if (((MR_tag((MR_Word) MayBuild_93)) == (MR_Integer) 1))
                            {
                              MR_Word BuildGlobals_95 = ((MR_Word) ((MR_hl_field(1, MayBuild_93, (MR_Integer) 1))));

                              backend_libs__compile_target_code__link_module_list_8_p_0(ProgressStream_16, ModulesToLink_56, ExtraObjFiles_57, BuildGlobals_95, &Specs_91, &Succeeded_90);
                            }
                            else
                            {
                              Specs_91 = ((MR_Word) ((MR_hl_field(0, MayBuild_93, (MR_Integer) 0))));
                              Succeeded_90 = (MR_Integer) 0;
                            }
                          }
                          break;
                      }
                      parse_tree__write_error_spec__write_error_specs_5_p_0(ErrorStream_17, Globals_18, Specs_91);
                    }
                    break;
                  case (MR_Integer) 2:
                    parse_tree__module_cmds__create_java_shell_script_6_p_0(ProgressStream_16, Globals_18, MainModuleName_88, &Succeeded_90);
                    break;
                }
                parse_tree__module_cmds__maybe_set_exit_status_3_p_0(Succeeded_90);
              }
            }
          }
          else
          {
            parse_tree__write_error_spec__write_error_specs_5_p_0(ErrorStream_17, Globals_18, STATE_VARIABLE_Specs_0_37);
            parse_tree__write_error_spec__maybe_print_delayed_error_messages_4_p_0(ErrorStream_17, Globals_18);
            parse_tree__write_error_spec__write_error_specs_5_p_0(StdErr_51, Globals_18, LibgradeCheckSpecs_50);
            *STATE_VARIABLE_HaveParseTreeMaps_36 = STATE_VARIABLE_HaveParseTreeMaps_0_35;
            *STATE_VARIABLE_Specs_38 = STATE_VARIABLE_Specs_0_37;
          }
          libs__globals__lookup_bool_option_3_p_0(Globals_18, (MR_Integer) 86, &Statistics_60);
          switch (Statistics_60) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
              }
              break;
            case (MR_Integer) 1:
              {
                succeeded = mercury__benchmarking__full_memory_stats_are_available_0_p_0();
                if (succeeded)
                  mercury__benchmarking__report_full_memory_stats_3_p_0(StdErr_51);
              }
              break;
          }
        }
      }
      break;
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
  MR_Word STATE_VARIABLE_HaveParseTreeMaps_0_12,
  MR_Word * STATE_VARIABLE_HaveParseTreeMaps_13)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__7_7 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_HaveParseTreeMaps_13 = STATE_VARIABLE_HaveParseTreeMaps_0_12;
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
      MR_Word STATE_VARIABLE_HaveParseTreeMaps_59_59;
      MR_Word STATE_VARIABLE_Modules_62_62;
      MR_Word Var_63;
      MR_Word STATE_VARIABLE_ExtraObjFiles_64_64;
      MR_Word Var_65;
      MR_String FileName_67;
      MR_Word next_value_of_HeadVar__7_7;
      MR_Word next_value_of_STATE_VARIABLE_Modules_0_8;
      MR_Word next_value_of_STATE_VARIABLE_ExtraObjFiles_0_10;
      MR_Word next_value_of_STATE_VARIABLE_HaveParseTreeMaps_0_12;

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
      top_level__mercury_compile_main__do_process_compiler_arg_13_p_0(ProgressStream_1, ErrorStream_2, Globals_3, OpModeArgs_4, InvokedByMmcMake_5, OptionArgs_6, FileOrModule_46, &ArgModules_47, &ArgExtraObjFiles_48, STATE_VARIABLE_HaveParseTreeMaps_0_12, &STATE_VARIABLE_HaveParseTreeMaps_59_59);
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
      next_value_of_STATE_VARIABLE_HaveParseTreeMaps_0_12 = STATE_VARIABLE_HaveParseTreeMaps_59_59;
      HeadVar__7_7 = next_value_of_HeadVar__7_7;
      STATE_VARIABLE_Modules_0_8 = next_value_of_STATE_VARIABLE_Modules_0_8;
      STATE_VARIABLE_ExtraObjFiles_0_10 = next_value_of_STATE_VARIABLE_ExtraObjFiles_0_10;
      STATE_VARIABLE_HaveParseTreeMaps_0_12 = next_value_of_STATE_VARIABLE_HaveParseTreeMaps_0_12;
      continue;
    }
    break;
  }
}

static void MR_CALL 
top_level__mercury_compile_main__setup_and_process_compiler_cmd_line_args_20_p_0(
  MR_Word ProgressStream_1,
  MR_Word ErrorStream_2,
  MR_Word Globals_3,
  MR_Word OpModeArgs_4,
  MR_Word InvokedByMmcMake_5,
  MR_Word StdlibGradeFlags_6,
  MR_Word EnvOptFileVariables_7,
  MR_Word EnvVarArgs_8,
  MR_Word OptionArgs_9,
  MR_Word HeadVar__10_10,
  MR_Word STATE_VARIABLE_Modules_0_11,
  MR_Word * STATE_VARIABLE_Modules_12,
  MR_Word STATE_VARIABLE_ExtraObjFiles_0_13,
  MR_Word * STATE_VARIABLE_ExtraObjFiles_14,
  MR_Word STATE_VARIABLE_HaveParseTreeMaps_0_15,
  MR_Word * STATE_VARIABLE_HaveParseTreeMaps_16,
  MR_Word STATE_VARIABLE_Specs_0_17,
  MR_Word * STATE_VARIABLE_Specs_18)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__10_10 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Specs_18 = STATE_VARIABLE_Specs_0_17;
      *STATE_VARIABLE_HaveParseTreeMaps_16 = STATE_VARIABLE_HaveParseTreeMaps_0_15;
      *STATE_VARIABLE_ExtraObjFiles_14 = STATE_VARIABLE_ExtraObjFiles_0_13;
      *STATE_VARIABLE_Modules_12 = STATE_VARIABLE_Modules_0_11;
    }
    else
    {
      MR_String Arg_54 = ((MR_String) ((MR_hl_field(1, HeadVar__10_10, (MR_Integer) 0))));
      MR_Word Args_55 = ((MR_Word) ((MR_hl_field(1, HeadVar__10_10, (MR_Integer) 1))));
      MR_Word ArgModules_61;
      MR_Word ArgExtraObjFiles_62;
      MR_Word STATE_VARIABLE_HaveParseTreeMaps_75_75;
      MR_Word STATE_VARIABLE_Specs_76_76;
      MR_Word STATE_VARIABLE_Modules_79_79;
      MR_Word Var_80;
      MR_Word STATE_VARIABLE_ExtraObjFiles_81_81;
      MR_Word Var_82;
      MR_Word next_value_of_HeadVar__10_10;
      MR_Word next_value_of_STATE_VARIABLE_Modules_0_11;
      MR_Word next_value_of_STATE_VARIABLE_ExtraObjFiles_0_13;
      MR_Word next_value_of_STATE_VARIABLE_HaveParseTreeMaps_0_15;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_17;

      top_level__mercury_compile_main__setup_and_process_compiler_arg_18_p_0(ProgressStream_1, ErrorStream_2, Globals_3, OpModeArgs_4, InvokedByMmcMake_5, StdlibGradeFlags_6, EnvOptFileVariables_7, EnvVarArgs_8, OptionArgs_9, Arg_54, &ArgModules_61, &ArgExtraObjFiles_62, STATE_VARIABLE_HaveParseTreeMaps_0_15, &STATE_VARIABLE_HaveParseTreeMaps_75_75, STATE_VARIABLE_Specs_0_17, &STATE_VARIABLE_Specs_76_76);
      if (!((Args_55 == (MR_Word) ((MR_Unsigned) 0U))))
        mercury__gc__garbage_collect_2_p_0();
      Var_80 = mercury__cord__from_list_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ArgModules_61);
      STATE_VARIABLE_Modules_79_79 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), STATE_VARIABLE_Modules_0_11, Var_80);
      Var_82 = mercury__cord__from_list_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ArgExtraObjFiles_62);
      STATE_VARIABLE_ExtraObjFiles_81_81 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), STATE_VARIABLE_ExtraObjFiles_0_13, Var_82);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__10_10 = Args_55;
      next_value_of_STATE_VARIABLE_Modules_0_11 = STATE_VARIABLE_Modules_79_79;
      next_value_of_STATE_VARIABLE_ExtraObjFiles_0_13 = STATE_VARIABLE_ExtraObjFiles_81_81;
      next_value_of_STATE_VARIABLE_HaveParseTreeMaps_0_15 = STATE_VARIABLE_HaveParseTreeMaps_75_75;
      next_value_of_STATE_VARIABLE_Specs_0_17 = STATE_VARIABLE_Specs_76_76;
      HeadVar__10_10 = next_value_of_HeadVar__10_10;
      STATE_VARIABLE_Modules_0_11 = next_value_of_STATE_VARIABLE_Modules_0_11;
      STATE_VARIABLE_ExtraObjFiles_0_13 = next_value_of_STATE_VARIABLE_ExtraObjFiles_0_13;
      STATE_VARIABLE_HaveParseTreeMaps_0_15 = next_value_of_STATE_VARIABLE_HaveParseTreeMaps_0_15;
      STATE_VARIABLE_Specs_0_17 = next_value_of_STATE_VARIABLE_Specs_0_17;
      continue;
    }
    break;
  }
}

static void MR_CALL 
top_level__mercury_compile_main__setup_and_process_compiler_arg_18_p_0(
  MR_Word ProgressStream_19,
  MR_Word ErrorStream_20,
  MR_Word Globals_21,
  MR_Word OpModeArgs_22,
  MR_Word InvokedByMmcMake_23,
  MR_Word StdlibGradeFlags_24,
  MR_Word EnvOptFileVariables_25,
  MR_Word EnvVarArgs_26,
  MR_Word OptionArgs_27,
  MR_String Arg_28,
  MR_Word * ModulesToLink_29,
  MR_Word * ExtraObjFiles_30,
  MR_Word STATE_VARIABLE_HaveParseTreeMaps_0_42,
  MR_Word * STATE_VARIABLE_HaveParseTreeMaps_43,
  MR_Word STATE_VARIABLE_Specs_0_44,
  MR_Word * STATE_VARIABLE_Specs_45)
{
  MR_bool succeeded;
  MR_Word DefaultOptionTable_34;
  MR_Word FileOrModule_35;
  MR_Word ModuleName_36;
  MR_Word MayBuild_38;
  MR_String FileName_50;

  libs__globals__get_default_options_2_p_0(Globals_21, &DefaultOptionTable_34);
  succeeded = mercury__string__remove_suffix_3_p_0(Arg_28, (MR_String) ".m", &FileName_50);
  if (succeeded)
  {
    {
      FileOrModule_35 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, FileOrModule_35, 0) = ((MR_Box) (FileName_50));
    }
    parse_tree__file_names__file_name_to_module_name_2_p_0(FileName_50, &ModuleName_36);
  }
  else
  {
    parse_tree__file_names__file_name_to_module_name_2_p_0(Arg_28, &ModuleName_36);
    {
      FileOrModule_35 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, FileOrModule_35, 0) = ((MR_Box) (ModuleName_36));
    }
  }
  make__build__setup_for_build_with_module_options_12_p_0(ProgressStream_19, DefaultOptionTable_34, (MR_Integer) 0, ModuleName_36, StdlibGradeFlags_24, EnvOptFileVariables_25, EnvVarArgs_26, OptionArgs_27, (MR_Word) ((MR_Unsigned) 0U), &MayBuild_38);
  if (((MR_tag((MR_Word) MayBuild_38)) == (MR_Integer) 1))
  {
    MR_Word BuildGlobals_41 = ((MR_Word) ((MR_hl_field(1, MayBuild_38, (MR_Integer) 1))));

    top_level__mercury_compile_main__do_process_compiler_arg_13_p_0(ProgressStream_19, ErrorStream_20, BuildGlobals_41, OpModeArgs_22, InvokedByMmcMake_23, OptionArgs_27, FileOrModule_35, ModulesToLink_29, ExtraObjFiles_30, STATE_VARIABLE_HaveParseTreeMaps_0_42, STATE_VARIABLE_HaveParseTreeMaps_43);
  }
  else
  {
    MR_Word SetupSpecs_39 = ((MR_Word) ((MR_hl_field(0, MayBuild_38, (MR_Integer) 0))));

    parse_tree__write_error_spec__write_error_specs_5_p_0(ErrorStream_20, Globals_21, SetupSpecs_39);
    *ModulesToLink_29 = (MR_Word) ((MR_Unsigned) 0U);
    *ExtraObjFiles_30 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_HaveParseTreeMaps_43 = STATE_VARIABLE_HaveParseTreeMaps_0_42;
  }
  *STATE_VARIABLE_Specs_45 = STATE_VARIABLE_Specs_0_44;
}

static void MR_CALL 
top_level__mercury_compile_main__setup_and_process_compiler_stdin_args_20_p_0(
  MR_Word ProgressStream_21,
  MR_Word ErrorStream_22,
  MR_Word StdIn_23,
  MR_Word Globals_24,
  MR_Word OpModeArgs_25,
  MR_Word InvokedByMmcMake_26,
  MR_Word StdlibGradeFlags_27,
  MR_Word EnvOptFileVariables_28,
  MR_Word EnvVarArgs_29,
  MR_Word OptionArgs_30,
  MR_Word STATE_VARIABLE_Modules_0_45,
  MR_Word * STATE_VARIABLE_Modules_46,
  MR_Word STATE_VARIABLE_ExtraObjFiles_0_47,
  MR_Word * STATE_VARIABLE_ExtraObjFiles_48,
  MR_Word STATE_VARIABLE_HaveParseTreeMaps_0_49,
  MR_Word * STATE_VARIABLE_HaveParseTreeMaps_50,
  MR_Word STATE_VARIABLE_Specs_0_51,
  MR_Word * STATE_VARIABLE_Specs_52)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word LineResult_36;

    // setup for model_det tailcalls optimized into a loop
    ;
    succeeded = mercury__cord__is_empty_1_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), STATE_VARIABLE_Modules_0_45);
    if (!(succeeded))
      mercury__gc__garbage_collect_2_p_0();
    mercury__io__read_line_as_string_4_p_0(StdIn_23, &LineResult_36);
    switch (MR_tag((MR_Word) LineResult_36)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *STATE_VARIABLE_Modules_46 = STATE_VARIABLE_Modules_0_45;
          *STATE_VARIABLE_ExtraObjFiles_48 = STATE_VARIABLE_ExtraObjFiles_0_47;
          *STATE_VARIABLE_HaveParseTreeMaps_50 = STATE_VARIABLE_HaveParseTreeMaps_0_49;
          *STATE_VARIABLE_Specs_52 = STATE_VARIABLE_Specs_0_51;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_String Line_37 = ((MR_String) ((MR_hl_field(1, LineResult_36, (MR_Integer) 0))));
          MR_String Arg_38;
          MR_Word ArgModules_39;
          MR_Word ArgExtraObjFiles_40;
          MR_Word STATE_VARIABLE_HaveParseTreeMaps_57_57;
          MR_Word STATE_VARIABLE_Modules_60_60;
          MR_Word Var_61;
          MR_Word STATE_VARIABLE_ExtraObjFiles_62_62;
          MR_Word Var_63;
          MR_Word DefaultOptionTable_84;
          MR_Word FileOrModule_85;
          MR_Word ModuleName_86;
          MR_Word MayBuild_88;
          MR_String FileName_94;
          MR_Word next_value_of_STATE_VARIABLE_Modules_0_45;
          MR_Word next_value_of_STATE_VARIABLE_ExtraObjFiles_0_47;
          MR_Word next_value_of_STATE_VARIABLE_HaveParseTreeMaps_0_49;

          Arg_38 = mercury__string__rstrip_1_f_0(Line_37);
          libs__globals__get_default_options_2_p_0(Globals_24, &DefaultOptionTable_84);
          succeeded = mercury__string__remove_suffix_3_p_0(Arg_38, (MR_String) ".m", &FileName_94);
          if (succeeded)
          {
            {
              FileOrModule_85 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, FileOrModule_85, 0) = ((MR_Box) (FileName_94));
            }
            parse_tree__file_names__file_name_to_module_name_2_p_0(FileName_94, &ModuleName_86);
          }
          else
          {
            parse_tree__file_names__file_name_to_module_name_2_p_0(Arg_38, &ModuleName_86);
            {
              FileOrModule_85 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, FileOrModule_85, 0) = ((MR_Box) (ModuleName_86));
            }
          }
          make__build__setup_for_build_with_module_options_12_p_0(ProgressStream_21, DefaultOptionTable_84, (MR_Integer) 0, ModuleName_86, StdlibGradeFlags_27, EnvOptFileVariables_28, EnvVarArgs_29, OptionArgs_30, (MR_Word) ((MR_Unsigned) 0U), &MayBuild_88);
          if (((MR_tag((MR_Word) MayBuild_88)) == (MR_Integer) 1))
          {
            MR_Word BuildGlobals_91 = ((MR_Word) ((MR_hl_field(1, MayBuild_88, (MR_Integer) 1))));

            top_level__mercury_compile_main__do_process_compiler_arg_13_p_0(ProgressStream_21, ErrorStream_22, BuildGlobals_91, OpModeArgs_25, InvokedByMmcMake_26, OptionArgs_30, FileOrModule_85, &ArgModules_39, &ArgExtraObjFiles_40, STATE_VARIABLE_HaveParseTreeMaps_0_49, &STATE_VARIABLE_HaveParseTreeMaps_57_57);
          }
          else
          {
            MR_Word SetupSpecs_89 = ((MR_Word) ((MR_hl_field(0, MayBuild_88, (MR_Integer) 0))));

            parse_tree__write_error_spec__write_error_specs_5_p_0(ErrorStream_22, Globals_24, SetupSpecs_89);
            ArgModules_39 = (MR_Word) ((MR_Unsigned) 0U);
            ArgExtraObjFiles_40 = (MR_Word) ((MR_Unsigned) 0U);
            STATE_VARIABLE_HaveParseTreeMaps_57_57 = STATE_VARIABLE_HaveParseTreeMaps_0_49;
          }
          Var_61 = mercury__cord__from_list_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ArgModules_39);
          STATE_VARIABLE_Modules_60_60 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), STATE_VARIABLE_Modules_0_45, Var_61);
          Var_63 = mercury__cord__from_list_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ArgExtraObjFiles_40);
          STATE_VARIABLE_ExtraObjFiles_62_62 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), STATE_VARIABLE_ExtraObjFiles_0_47, Var_63);
          // direct tailcall eliminated
          ;
          next_value_of_STATE_VARIABLE_Modules_0_45 = STATE_VARIABLE_Modules_60_60;
          next_value_of_STATE_VARIABLE_ExtraObjFiles_0_47 = STATE_VARIABLE_ExtraObjFiles_62_62;
          next_value_of_STATE_VARIABLE_HaveParseTreeMaps_0_49 = STATE_VARIABLE_HaveParseTreeMaps_57_57;
          STATE_VARIABLE_Modules_0_45 = next_value_of_STATE_VARIABLE_Modules_0_45;
          STATE_VARIABLE_ExtraObjFiles_0_47 = next_value_of_STATE_VARIABLE_ExtraObjFiles_0_47;
          STATE_VARIABLE_HaveParseTreeMaps_0_49 = next_value_of_STATE_VARIABLE_HaveParseTreeMaps_0_49;
          continue;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Error_41 = ((MR_Word) ((MR_hl_field(2, LineResult_36, (MR_Integer) 0))));
          MR_String Msg_42;
          MR_Word Pieces_43;
          MR_Word Spec_44;
          MR_Word Var_71;
          MR_Word Var_72;

          mercury__io__error_message_2_p_0(Error_41, &Msg_42);
          {
            Var_72 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_72, 0) = ((MR_Box) ((MR_Unsigned) 6U));
            MR_hl_field(3, Var_72, 1) = ((MR_Box) (Msg_42));
          }
          {
            Var_71 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_71, 0) = ((MR_Box) (Var_72));
            MR_hl_field(1, Var_71, 1) = ((MR_Box) (MR_mkword(1, &top_level__mercury_compile_main_scalar_common_1[11])));
          }
          {
            Pieces_43 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Pieces_43, 0) = ((MR_Box) (MR_mkword(3, &top_level__mercury_compile_main_scalar_common_1[12])));
            MR_hl_field(1, Pieces_43, 1) = ((MR_Box) (Var_71));
          }
          {
            Spec_44 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Spec_44, 0) = ((MR_Box) ((MR_String) "predicate \140top_level.mercury_compile_main.setup_and_process_compiler_stdin_args\'/20"));
            MR_hl_field(1, Spec_44, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(1, Spec_44, 2) = ((MR_Box) ((MR_Unsigned) 16U));
            MR_hl_field(1, Spec_44, 3) = ((MR_Box) (Pieces_43));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *STATE_VARIABLE_Specs_52 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (Spec_44));
            MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_51));
          }
          *STATE_VARIABLE_Modules_46 = STATE_VARIABLE_Modules_0_45;
          *STATE_VARIABLE_ExtraObjFiles_48 = STATE_VARIABLE_ExtraObjFiles_0_47;
          *STATE_VARIABLE_HaveParseTreeMaps_50 = STATE_VARIABLE_HaveParseTreeMaps_0_49;
        }
        break;
    }
    break;
  }
}

static void MR_CALL 
top_level__mercury_compile_main__do_process_compiler_arg_13_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  parse_tree__write_error_spec__write_error_specs_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
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
  MR_Word STATE_VARIABLE_HaveParseTreeMaps_0_44,
  MR_Word * STATE_VARIABLE_HaveParseTreeMaps_45)
{
  MR_bool succeeded;
  MR_Word SpecsList_29;
  MR_Word Var_69;
  MR_Box conv0_STATE_VARIABLE_IO_70_70;

  switch (MR_tag((MR_Word) OpModeArgs_17)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(OpModeArgs_17)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word DepSpecs_72;
            MR_Word _DepsMap_30;

            parse_tree__write_deps_file__generate_and_write_d_file_gendep_7_p_0(ProgressStream_14, Globals0_16, FileOrModule_20, &_DepsMap_30, &DepSpecs_72);
            {
              SpecsList_29 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, SpecsList_29, 0) = ((MR_Box) (DepSpecs_72));
              MR_hl_field(1, SpecsList_29, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            *ModulesToLink_21 = (MR_Word) ((MR_Unsigned) 0U);
            *ExtraObjFiles_22 = (MR_Word) ((MR_Unsigned) 0U);
            *STATE_VARIABLE_HaveParseTreeMaps_45 = STATE_VARIABLE_HaveParseTreeMaps_0_44;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Globals_31;
            MR_Word HaveReadSrc_32;
            MR_Word Errors_34;
            MR_Word Specs_75;

            top_level__mercury_compile_main__read_module_or_file_10_p_0(ProgressStream_14, Globals0_16, &Globals_31, FileOrModule_20, (MR_Integer) 0, &HaveReadSrc_32, STATE_VARIABLE_HaveParseTreeMaps_0_44, STATE_VARIABLE_HaveParseTreeMaps_45);
            if (((MR_tag((MR_Word) HaveReadSrc_32)) == (MR_Integer) 0))
            {
              MR_Word ParseTreeSrc_35 = ((MR_Word) ((MR_hl_field(0, HaveReadSrc_32, (MR_Integer) 1))));
              MR_Word Source_36 = ((MR_Word) ((MR_hl_field(0, HaveReadSrc_32, (MR_Integer) 2))));
              MR_Word _MaybeTimestamp_37;
              MR_Word Var_113;
              MR_Word Var_115;

              parse_tree__read_modules__have_parse_tree_source_get_maybe_timestamp_errors_3_p_0(Source_36, &_MaybeTimestamp_37, &Errors_34);
              Var_115 = ((MR_Word) ((MR_hl_field(0, Errors_34, (MR_Integer) 0))));
              Var_113 = ((MR_Word) ((MR_hl_field(0, Errors_34, (MR_Integer) 2))));
              succeeded = mercury__set__is_non_empty_1_p_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_fatal_read_module_error_0), Var_115);
              if (!(succeeded))
              {
                MR_Word HaltSyntax_97;
                MR_Word Var_100;

                succeeded = mercury__set__is_non_empty_1_p_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_nonfatal_read_module_error_0), Var_113);
                if (succeeded)
                {
                  Var_100 = (MR_Integer) 6;
                  libs__globals__lookup_bool_option_3_p_0(Globals_31, Var_100, &HaltSyntax_97);
                  succeeded = (HaltSyntax_97 == (MR_Integer) 1);
                }
              }
              if (!(succeeded))
              {
                MR_Word ModuleName_38 = ((MR_Word) ((MR_hl_field(0, ParseTreeSrc_35, (MR_Integer) 0))));
                MR_String UglyFileName_39;
                MR_Word _Succeeded_40;

                parse_tree__file_names__module_name_to_cur_dir_file_name_3_p_0((MR_Integer) 14, ModuleName_38, &UglyFileName_39);
                parse_tree__parse_tree_out__output_parse_tree_src_7_p_0(ProgressStream_14, Globals_31, UglyFileName_39, ParseTreeSrc_35, &_Succeeded_40);
              }
            }
            else
              Errors_34 = ((MR_Word) ((MR_hl_field(1, HaveReadSrc_32, (MR_Integer) 1))));
            Specs_75 = parse_tree__parse_error__get_read_module_specs_1_f_0(Errors_34);
            {
              SpecsList_29 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, SpecsList_29, 0) = ((MR_Box) (Specs_75));
              MR_hl_field(1, SpecsList_29, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            *ModulesToLink_21 = (MR_Word) ((MR_Unsigned) 0U);
            *ExtraObjFiles_22 = (MR_Word) ((MR_Unsigned) 0U);
          }
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word MaybeMakeInts_25 = ((MR_Unsigned) ((MR_hl_field(1, OpModeArgs_17, (MR_Integer) 0))) & (MR_Integer) 1);
        MR_Word DepsMap_26;
        MR_Word DepSpecs_27;
        MR_Word Specs_28;
        MR_Word Var_49;

        parse_tree__write_deps_file__generate_and_write_dep_file_gendep_7_p_0(ProgressStream_14, Globals0_16, FileOrModule_20, &DepsMap_26, &DepSpecs_27);
        succeeded = (MaybeMakeInts_25 == (MR_Integer) 1);
        if (succeeded)
        {
          Var_49 = parse_tree__error_util__contains_errors_2_f_0(Globals0_16, DepSpecs_27);
          succeeded = (Var_49 == (MR_Integer) 0);
        }
        if (succeeded)
          top_level__mercury_compile_main__deps_make_ints_9_p_0(ProgressStream_14, Globals0_16, DepsMap_26, DepSpecs_27, &Specs_28, STATE_VARIABLE_HaveParseTreeMaps_0_44, STATE_VARIABLE_HaveParseTreeMaps_45);
        else
        {
          Specs_28 = DepSpecs_27;
          *STATE_VARIABLE_HaveParseTreeMaps_45 = STATE_VARIABLE_HaveParseTreeMaps_0_44;
        }
        {
          SpecsList_29 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, SpecsList_29, 0) = ((MR_Box) (Specs_28));
          MR_hl_field(1, SpecsList_29, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        *ModulesToLink_21 = (MR_Word) ((MR_Unsigned) 0U);
        *ExtraObjFiles_22 = (MR_Word) ((MR_Unsigned) 0U);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word InterfaceFile_41 = ((MR_Unsigned) ((MR_hl_field(2, OpModeArgs_17, (MR_Integer) 0))) & (MR_Integer) 3);

        top_level__mercury_compile_main__do_process_compiler_arg_make_interface_9_p_0(ProgressStream_14, Globals0_16, InterfaceFile_41, FileOrModule_20, &SpecsList_29, STATE_VARIABLE_HaveParseTreeMaps_0_44, STATE_VARIABLE_HaveParseTreeMaps_45);
        *ModulesToLink_21 = (MR_Word) ((MR_Unsigned) 0U);
        *ExtraObjFiles_22 = (MR_Word) ((MR_Unsigned) 0U);
      }
      break;
    case (MR_Integer) 3:
      {
        MR_Word OpModeAugment_42 = ((MR_Word) ((MR_hl_field(3, OpModeArgs_17, (MR_Integer) 0))));
        MR_Word ModulesToRecompile_43;
        MR_Word STATE_VARIABLE_HaveParseTreeMaps_63_63;
        MR_Word Globals_79;
        MR_Word Smart0_87;
        MR_Word DisableSmart_88;
        MR_Word Var_65;

        libs__globals__lookup_bool_option_3_p_0(Globals0_16, (MR_Integer) 173, &Smart0_87);
        libs__globals__io_get_disable_smart_recompilation_3_p_0(&DisableSmart_88);
        switch (DisableSmart_88) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              libs__globals__set_option_4_p_0((MR_Integer) 173, (MR_Word) (MR_mkword(1, &top_level__mercury_compile_main_scalar_common_3[0])), Globals0_16, &Globals_79);
              ModulesToRecompile_43 = (MR_Word) ((MR_Unsigned) 0U);
              STATE_VARIABLE_HaveParseTreeMaps_63_63 = STATE_VARIABLE_HaveParseTreeMaps_0_44;
            }
            break;
          case (MR_Integer) 0:
            {
              Globals_79 = Globals0_16;
              switch (Smart0_87) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    ModulesToRecompile_43 = (MR_Word) ((MR_Unsigned) 0U);
                    STATE_VARIABLE_HaveParseTreeMaps_63_63 = STATE_VARIABLE_HaveParseTreeMaps_0_44;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word ModuleName_90;

                    if (((MR_tag((MR_Word) FileOrModule_20)) == (MR_Integer) 0))
                    {
                      MR_String FileName_91 = ((MR_String) ((MR_hl_field(0, FileOrModule_20, (MR_Integer) 0))));

                      parse_tree__file_names__file_name_to_module_name_2_p_0(FileName_91, &ModuleName_90);
                    }
                    else
                      ModuleName_90 = ((MR_Word) ((MR_hl_field(1, FileOrModule_20, (MR_Integer) 0))));
                    recompilation__check__should_recompile_8_p_0(ProgressStream_14, Globals_79, ModuleName_90, &ModulesToRecompile_43, STATE_VARIABLE_HaveParseTreeMaps_0_44, &STATE_VARIABLE_HaveParseTreeMaps_63_63);
                  }
                  break;
              }
            }
            break;
        }
        succeeded = (ModulesToRecompile_43 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          Var_65 = ((MR_Word) ((MR_hl_field(1, ModulesToRecompile_43, (MR_Integer) 0))));
          succeeded = (Var_65 == (MR_Word) ((MR_Unsigned) 0U));
        }
        if (succeeded)
        {
          SpecsList_29 = (MR_Word) ((MR_Unsigned) 0U);
          *ModulesToLink_21 = (MR_Word) ((MR_Unsigned) 0U);
          *ExtraObjFiles_22 = (MR_Word) ((MR_Unsigned) 0U);
          *STATE_VARIABLE_HaveParseTreeMaps_45 = STATE_VARIABLE_HaveParseTreeMaps_63_63;
        }
        else
        {
          MR_Word Specs_76;

          top_level__mercury_compile_main__read_augment_and_process_module_15_p_0(ProgressStream_14, ErrorStream_15, Globals_79, OpModeAugment_42, InvokedByMmcMake_18, OptionArgs_19, FileOrModule_20, ModulesToRecompile_43, ModulesToLink_21, ExtraObjFiles_22, &Specs_76, STATE_VARIABLE_HaveParseTreeMaps_63_63, STATE_VARIABLE_HaveParseTreeMaps_45);
          {
            SpecsList_29 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, SpecsList_29, 0) = ((MR_Box) (Specs_76));
            MR_hl_field(1, SpecsList_29, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
        }
      }
      break;
  }
  {
    Var_69 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_69, 0) = ((MR_Box) (&top_level__mercury_compile_main_scalar_common_6[1]));
    MR_hl_field(0, Var_69, 1) = ((MR_Box) (top_level__mercury_compile_main__do_process_compiler_arg_13_p_0_1));
    MR_hl_field(0, Var_69, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_69, 3) = ((MR_Box) (ErrorStream_15));
    MR_hl_field(0, Var_69, 4) = ((MR_Box) (Globals0_16));
  }
  mercury__list__foldl_4_p_2((MR_Word) (&top_level__mercury_compile_main_scalar_common_1[0]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_69, SpecsList_29, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_70_70);
  parse_tree__write_error_spec__maybe_print_delayed_error_messages_4_p_0(ErrorStream_15, Globals0_16);
}

static void MR_CALL 
top_level__mercury_compile_main__read_augment_and_process_module_15_p_0(
  MR_Word ProgressStream_16,
  MR_Word ErrorStream_17,
  MR_Word Globals0_18,
  MR_Word OpModeAugment_19,
  MR_Word InvokedByMmcMake_20,
  MR_Word OptionArgs_21,
  MR_Word FileOrModule_22,
  MR_Word MaybeModulesToRecompile_23,
  MR_Word * ModulesToLink_24,
  MR_Word * ExtraObjFiles_25,
  MR_Word * Specs_26,
  MR_Word STATE_VARIABLE_HaveParseTreeMaps_0_41,
  MR_Word * STATE_VARIABLE_HaveParseTreeMaps_42)
{
  MR_bool succeeded;
  MR_Word Globals_32;
  MR_Word HaveReadSrc_33;
  MR_Word STATE_VARIABLE_HaveParseTreeMaps_50_50;

  switch (MR_tag((MR_Word) OpModeAugment_19)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(OpModeAugment_19)) {
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
            MR_Word ReportCmdLineArgsDotErr_30;
            MR_Word StdErrStream_31;

            libs__globals__lookup_bool_option_3_p_0(Globals0_18, (MR_Integer) 85, &ReportCmdLineArgsDotErr_30);
            mercury__io__stderr_stream_3_p_0(&StdErrStream_31);
            switch (ReportCmdLineArgsDotErr_30) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_String Var_59;
                  MR_Word Var_61;

                  mercury__io__write_string_4_p_0(StdErrStream_31, (MR_String) "% Command line options start\n");
                  Var_61 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), OptionArgs_21, (MR_Word) ((MR_Unsigned) 0U));
                  Var_59 = mercury__string__join_list_2_f_0((MR_String) "\n% ", Var_61);
                  mercury__io__write_string_4_p_0(StdErrStream_31, (MR_String) "% ");
                  mercury__io__write_string_4_p_0(StdErrStream_31, Var_59);
                  mercury__io__write_string_4_p_0(StdErrStream_31, (MR_String) "\n");
                  mercury__io__write_string_4_p_0(StdErrStream_31, (MR_String) "% Command line options end\n");
                }
                break;
            }
          }
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word ReportCmdLineArgsDotErr_30;
        MR_Word StdErrStream_31;

        libs__globals__lookup_bool_option_3_p_0(Globals0_18, (MR_Integer) 85, &ReportCmdLineArgsDotErr_30);
        mercury__io__stderr_stream_3_p_0(&StdErrStream_31);
        switch (ReportCmdLineArgsDotErr_30) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
            }
            break;
          case (MR_Integer) 1:
            {
              MR_String Var_59;
              MR_Word Var_61;

              mercury__io__write_string_4_p_0(StdErrStream_31, (MR_String) "% Command line options start\n");
              Var_61 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), OptionArgs_21, (MR_Word) ((MR_Unsigned) 0U));
              Var_59 = mercury__string__join_list_2_f_0((MR_String) "\n% ", Var_61);
              mercury__io__write_string_4_p_0(StdErrStream_31, (MR_String) "% ");
              mercury__io__write_string_4_p_0(StdErrStream_31, Var_59);
              mercury__io__write_string_4_p_0(StdErrStream_31, (MR_String) "\n");
              mercury__io__write_string_4_p_0(StdErrStream_31, (MR_String) "% Command line options end\n");
            }
            break;
        }
      }
      break;
  }
  top_level__mercury_compile_main__read_module_or_file_10_p_0(ProgressStream_16, Globals0_18, &Globals_32, FileOrModule_22, (MR_Integer) 1, &HaveReadSrc_33, STATE_VARIABLE_HaveParseTreeMaps_0_41, &STATE_VARIABLE_HaveParseTreeMaps_50_50);
  if (((MR_tag((MR_Word) HaveReadSrc_33)) == (MR_Integer) 0))
  {
    MR_String SourceFileName_36 = ((MR_String) ((MR_hl_field(0, HaveReadSrc_33, (MR_Integer) 0))));
    MR_Word ParseTreeSrc_37 = ((MR_Word) ((MR_hl_field(0, HaveReadSrc_33, (MR_Integer) 1))));
    MR_Word Source_38 = ((MR_Word) ((MR_hl_field(0, HaveReadSrc_33, (MR_Integer) 2))));
    MR_Word MaybeTimestamp_39;
    MR_Word ReadModuleErrors_40;
    MR_Word Var_88;
    MR_Word Var_90;

    parse_tree__read_modules__have_parse_tree_source_get_maybe_timestamp_errors_3_p_0(Source_38, &MaybeTimestamp_39, &ReadModuleErrors_40);
    Var_90 = ((MR_Word) ((MR_hl_field(0, ReadModuleErrors_40, (MR_Integer) 0))));
    Var_88 = ((MR_Word) ((MR_hl_field(0, ReadModuleErrors_40, (MR_Integer) 2))));
    succeeded = mercury__set__is_non_empty_1_p_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_fatal_read_module_error_0), Var_90);
    if (!(succeeded))
    {
      MR_Word HaltSyntax_72;
      MR_Word Var_75;

      succeeded = mercury__set__is_non_empty_1_p_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_nonfatal_read_module_error_0), Var_88);
      if (succeeded)
      {
        Var_75 = (MR_Integer) 6;
        libs__globals__lookup_bool_option_3_p_0(Globals_32, Var_75, &HaltSyntax_72);
        succeeded = (HaltSyntax_72 == (MR_Integer) 1);
      }
    }
    if (succeeded)
    {
      *Specs_26 = parse_tree__parse_error__get_read_module_specs_1_f_0(ReadModuleErrors_40);
      *ModulesToLink_24 = (MR_Word) ((MR_Unsigned) 0U);
      *ExtraObjFiles_25 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_HaveParseTreeMaps_42 = STATE_VARIABLE_HaveParseTreeMaps_50_50;
    }
    else
      top_level__mercury_compile_main__read_augment_and_process_module_ok_17_p_0(ProgressStream_16, ErrorStream_17, Globals_32, OpModeAugment_19, InvokedByMmcMake_20, SourceFileName_36, MaybeTimestamp_39, ReadModuleErrors_40, ParseTreeSrc_37, MaybeModulesToRecompile_23, ModulesToLink_24, ExtraObjFiles_25, Specs_26, STATE_VARIABLE_HaveParseTreeMaps_50_50, STATE_VARIABLE_HaveParseTreeMaps_42);
  }
  else
  {
    MR_Word Errors_35 = ((MR_Word) ((MR_hl_field(1, HaveReadSrc_33, (MR_Integer) 1))));

    *Specs_26 = parse_tree__parse_error__get_read_module_specs_1_f_0(Errors_35);
    *ModulesToLink_24 = (MR_Word) ((MR_Unsigned) 0U);
    *ExtraObjFiles_25 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_HaveParseTreeMaps_42 = STATE_VARIABLE_HaveParseTreeMaps_50_50;
  }
}

static void MR_CALL 
top_level__mercury_compile_main__read_augment_and_process_module_ok_17_p_0_3(
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
top_level__mercury_compile_main__read_augment_and_process_module_ok_17_p_0_2(
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
  MR_Word conv2_ExtraObjFiles_22;
  MR_Word conv1_STATE_VARIABLE_Specs_33;
  MR_Word conv0_STATE_VARIABLE_HaveParseTreeMaps_35;

  top_level__mercury_compile_main__augment_and_process_module_14_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 6)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 7)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 8)))), ((MR_Word) (wrapper_arg_1)), &conv2_ExtraObjFiles_22, ((MR_Word) (wrapper_arg_3)), &conv1_STATE_VARIABLE_Specs_33, ((MR_Word) (wrapper_arg_5)), &conv0_STATE_VARIABLE_HaveParseTreeMaps_35);
  *wrapper_arg_2 = ((MR_Box) (conv2_ExtraObjFiles_22));
  *wrapper_arg_4 = ((MR_Box) (conv1_STATE_VARIABLE_Specs_33));
  *wrapper_arg_6 = ((MR_Box) (conv0_STATE_VARIABLE_HaveParseTreeMaps_35));
}

static MR_bool MR_CALL 
top_level__mercury_compile_main__read_augment_and_process_module_ok_17_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = top_level__mercury_compile_main__IntroducedFrom__pred__read_augment_and_process_module_ok__1192__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static void MR_CALL 
top_level__mercury_compile_main__read_augment_and_process_module_ok_17_p_0(
  MR_Word ProgressStream_18,
  MR_Word ErrorStream_19,
  MR_Word Globals_20,
  MR_Word OpModeAugment_21,
  MR_Word InvokedByMmcMake_22,
  MR_String SourceFileName_23,
  MR_Word MaybeTimestamp_24,
  MR_Word ReadModuleErrors_25,
  MR_Word ParseTreeSrc_26,
  MR_Word MaybeModulesToRecompile_27,
  MR_Word * ModulesToLink_28,
  MR_Word * ExtraObjFiles_29,
  MR_Word * STATE_VARIABLE_Specs_44,
  MR_Word STATE_VARIABLE_HaveParseTreeMaps_0_45,
  MR_Word * STATE_VARIABLE_HaveParseTreeMaps_46)
{
  MR_bool succeeded;
  MR_Word ModuleName_33 = ((MR_Word) ((MR_hl_field(0, ParseTreeSrc_26, (MR_Integer) 0))));
  MR_Word BurdenedModules0_34;
  MR_Word BurdenedModulesToRecompile_40;
  MR_Word TraceProf_41;
  MR_Word GlobalsToUse_43;
  MR_Word STATE_VARIABLE_Specs_49_49;
  MR_Word ExtraObjFileLists_101;
  MR_Word Var_102;
  MR_Word Var_99;
  MR_Box conv5_STATE_VARIABLE_Specs_44;
  MR_Box conv4_STATE_VARIABLE_HaveParseTreeMaps_46;
  MR_Box conv3_STATE_VARIABLE_IO_48;

  parse_tree__module_baggage__parse_tree_src_to_burdened_module_list_7_p_0(Globals_20, SourceFileName_23, ReadModuleErrors_25, MaybeTimestamp_24, ParseTreeSrc_26, &STATE_VARIABLE_Specs_49_49, &BurdenedModules0_34);
  if ((MaybeModulesToRecompile_27 == (MR_Word) ((MR_Unsigned) 0U)))
    BurdenedModulesToRecompile_40 = BurdenedModules0_34;
  else
  {
    MR_Word ModulesToRecompile_35 = ((MR_Word) ((MR_hl_field(1, MaybeModulesToRecompile_27, (MR_Integer) 0))));
    MR_Word ToRecompile_36;

    {
      ToRecompile_36 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, ToRecompile_36, 0) = ((MR_Box) (&top_level__mercury_compile_main_scalar_common_8[0]));
      MR_hl_field(0, ToRecompile_36, 1) = ((MR_Box) (top_level__mercury_compile_main__read_augment_and_process_module_ok_17_p_0_1));
      MR_hl_field(0, ToRecompile_36, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, ToRecompile_36, 3) = ((MR_Box) (ModulesToRecompile_35));
    }
    mercury__list__filter_3_p_0((MR_Word) (&parse_tree__module_baggage__parse_tree__module_baggage__type_ctor_info_burdened_module_0), ToRecompile_36, BurdenedModules0_34, &BurdenedModulesToRecompile_40);
  }
  libs__globals__lookup_bool_option_3_p_0(Globals_20, (MR_Integer) 178, &TraceProf_41);
  succeeded = mdbcomp__builtin_modules__non_traced_mercury_builtin_module_1_p_0(ModuleName_33);
  if (succeeded)
  {
    Var_99 = mdbcomp__builtin_modules__mercury_profiling_builtin_module_0_f_0();
    succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ModuleName_33, Var_99);
    if (succeeded)
      succeeded = (TraceProf_41 == (MR_Integer) 1);
    succeeded = !(succeeded);
  }
  if (succeeded)
  {
    MR_Word Globals1_42;

    libs__globals__set_option_4_p_0((MR_Integer) 340, (MR_Word) (MR_mkword(1, &top_level__mercury_compile_main_scalar_common_3[0])), Globals_20, &Globals1_42);
    libs__globals__set_trace_level_none_2_p_0(Globals1_42, &GlobalsToUse_43);
  }
  else
    GlobalsToUse_43 = Globals_20;
  {
    Var_102 = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_102, 0) = ((MR_Box) (&top_level__mercury_compile_main_scalar_common_9[0]));
    MR_hl_field(0, Var_102, 1) = ((MR_Box) (top_level__mercury_compile_main__read_augment_and_process_module_ok_17_p_0_2));
    MR_hl_field(0, Var_102, 2) = ((MR_Box) ((MR_Integer) 6));
    MR_hl_field(0, Var_102, 3) = ((MR_Box) (ProgressStream_18));
    MR_hl_field(0, Var_102, 4) = ((MR_Box) (ErrorStream_19));
    MR_hl_field(0, Var_102, 5) = ((MR_Box) (GlobalsToUse_43));
    MR_hl_field(0, Var_102, 6) = ((MR_Box) (OpModeAugment_21));
    MR_hl_field(0, Var_102, 7) = ((MR_Box) (InvokedByMmcMake_22));
    MR_hl_field(0, Var_102, 8) = ((MR_Box) (MaybeTimestamp_24));
  }
  mercury__list__map_foldl3_9_p_0((MR_Word) (&parse_tree__module_baggage__parse_tree__module_baggage__type_ctor_info_burdened_module_0), (MR_Word) (&top_level__mercury_compile_main_scalar_common_1[1]), (MR_Word) (&top_level__mercury_compile_main_scalar_common_1[0]), (MR_Word) (&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_parse_tree_maps_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_102, BurdenedModulesToRecompile_40, &ExtraObjFileLists_101, ((MR_Box) (STATE_VARIABLE_Specs_49_49)), &conv5_STATE_VARIABLE_Specs_44, ((MR_Box) (STATE_VARIABLE_HaveParseTreeMaps_0_45)), &conv4_STATE_VARIABLE_HaveParseTreeMaps_46, ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_IO_48);
  *STATE_VARIABLE_Specs_44 = ((MR_Word) (conv5_STATE_VARIABLE_Specs_44));
  *STATE_VARIABLE_HaveParseTreeMaps_46 = ((MR_Word) (conv4_STATE_VARIABLE_HaveParseTreeMaps_46));
  mercury__list__map_3_p_0((MR_Word) (&parse_tree__module_baggage__parse_tree__module_baggage__type_ctor_info_burdened_module_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&top_level__mercury_compile_main_scalar_common_2[7]), BurdenedModulesToRecompile_40, ModulesToLink_28);
  mercury__list__condense_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ExtraObjFileLists_101, ExtraObjFiles_29);
}

static void MR_CALL 
top_level__mercury_compile_main__do_process_compiler_arg_make_interface_9_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7)
{
  MR_Box closure = closure_arg;
  MR_Word conv12_HeadVar__5_5;
  MR_Word conv11_HeadVar__6_6;
  MR_Word conv10_HeadVar__8_8;

  parse_tree__write_module_interface_files__generate_and_write_interface_file_int3_10_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), &conv12_HeadVar__5_5, &conv11_HeadVar__6_6, ((MR_Word) (wrapper_arg_4)), &conv10_HeadVar__8_8);
  *wrapper_arg_2 = ((MR_Box) (conv12_HeadVar__5_5));
  *wrapper_arg_3 = ((MR_Box) (conv11_HeadVar__6_6));
  *wrapper_arg_5 = ((MR_Box) (conv10_HeadVar__8_8));
}

static void MR_CALL 
top_level__mercury_compile_main__do_process_compiler_arg_make_interface_9_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7)
{
  MR_Box closure = closure_arg;
  MR_Word conv7_HeadVar__5_5;
  MR_Word conv6_HeadVar__6_6;
  MR_Word conv5_HeadVar__8_8;

  parse_tree__write_module_interface_files__generate_and_write_interface_file_int1_int2_10_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), &conv7_HeadVar__5_5, &conv6_HeadVar__6_6, ((MR_Word) (wrapper_arg_4)), &conv5_HeadVar__8_8);
  *wrapper_arg_2 = ((MR_Box) (conv7_HeadVar__5_5));
  *wrapper_arg_3 = ((MR_Box) (conv6_HeadVar__6_6));
  *wrapper_arg_5 = ((MR_Box) (conv5_HeadVar__8_8));
}

static void MR_CALL 
top_level__mercury_compile_main__do_process_compiler_arg_make_interface_9_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_HeadVar__5_5;
  MR_Word conv1_HeadVar__6_6;
  MR_Word conv0_HeadVar__8_8;

  parse_tree__write_module_interface_files__generate_and_write_interface_file_int0_10_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), &conv2_HeadVar__5_5, &conv1_HeadVar__6_6, ((MR_Word) (wrapper_arg_4)), &conv0_HeadVar__8_8);
  *wrapper_arg_2 = ((MR_Box) (conv2_HeadVar__5_5));
  *wrapper_arg_3 = ((MR_Box) (conv1_HeadVar__6_6));
  *wrapper_arg_5 = ((MR_Box) (conv0_HeadVar__8_8));
}

static MR_bool MR_CALL 
top_level__mercury_compile_main__do_process_compiler_arg_make_interface_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = top_level__mercury_compile_main__IntroducedFrom__pred__do_process_compiler_arg_make_interface__1031__1_1_p_0(((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static void MR_CALL 
top_level__mercury_compile_main__do_process_compiler_arg_make_interface_9_p_0(
  MR_Word ProgressStream_10,
  MR_Word Globals0_11,
  MR_Word InterfaceFile_12,
  MR_Word FileOrModule_13,
  MR_Word * SpecLists_14,
  MR_Word STATE_VARIABLE_HaveParseTreeMaps_0_40,
  MR_Word * STATE_VARIABLE_HaveParseTreeMaps_41)
{
  MR_bool succeeded;
  MR_Word ReturnTimestamp_17;
  MR_Word Globals_19;
  MR_Word HaveReadSrc_20;
  MR_Word STATE_VARIABLE_HaveParseTreeMaps_46_46;

  switch (InterfaceFile_12) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word GenerateVersionNumbers_18;

        libs__globals__lookup_bool_option_3_p_0(Globals0_11, (MR_Integer) 174, &GenerateVersionNumbers_18);
        switch (GenerateVersionNumbers_18) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            ReturnTimestamp_17 = (MR_Integer) 0;
            break;
          case (MR_Integer) 1:
            ReturnTimestamp_17 = (MR_Integer) 1;
            break;
        }
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word GenerateVersionNumbers_63;

        libs__globals__lookup_bool_option_3_p_0(Globals0_11, (MR_Integer) 174, &GenerateVersionNumbers_63);
        switch (GenerateVersionNumbers_63) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            ReturnTimestamp_17 = (MR_Integer) 0;
            break;
          case (MR_Integer) 1:
            ReturnTimestamp_17 = (MR_Integer) 1;
            break;
        }
      }
      break;
    case (MR_Integer) 2:
      ReturnTimestamp_17 = (MR_Integer) 0;
      break;
  }
  top_level__mercury_compile_main__read_module_or_file_10_p_0(ProgressStream_10, Globals0_11, &Globals_19, FileOrModule_13, ReturnTimestamp_17, &HaveReadSrc_20, STATE_VARIABLE_HaveParseTreeMaps_0_40, &STATE_VARIABLE_HaveParseTreeMaps_46_46);
  if (((MR_tag((MR_Word) HaveReadSrc_20)) == (MR_Integer) 0))
  {
    MR_String FileName_24 = ((MR_String) ((MR_hl_field(0, HaveReadSrc_20, (MR_Integer) 0))));
    MR_Word ParseTreeSrc_25 = ((MR_Word) ((MR_hl_field(0, HaveReadSrc_20, (MR_Integer) 1))));
    MR_Word Source_26 = ((MR_Word) ((MR_hl_field(0, HaveReadSrc_20, (MR_Integer) 2))));
    MR_Word MaybeTimestamp_27;
    MR_Word ReadErrors_69;
    MR_Word ReadSpecs_70;
    MR_Word Var_160;
    MR_Word Var_162;

    parse_tree__read_modules__have_parse_tree_source_get_maybe_timestamp_errors_3_p_0(Source_26, &MaybeTimestamp_27, &ReadErrors_69);
    ReadSpecs_70 = parse_tree__parse_error__get_read_module_specs_1_f_0(ReadErrors_69);
    Var_162 = ((MR_Word) ((MR_hl_field(0, ReadErrors_69, (MR_Integer) 0))));
    Var_160 = ((MR_Word) ((MR_hl_field(0, ReadErrors_69, (MR_Integer) 2))));
    succeeded = mercury__set__is_non_empty_1_p_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_fatal_read_module_error_0), Var_162);
    if (!(succeeded))
    {
      MR_Word HaltSyntax_144;
      MR_Word Var_147;

      succeeded = mercury__set__is_non_empty_1_p_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_nonfatal_read_module_error_0), Var_160);
      if (succeeded)
      {
        Var_147 = (MR_Integer) 6;
        libs__globals__lookup_bool_option_3_p_0(Globals_19, Var_147, &HaltSyntax_144);
        succeeded = (HaltSyntax_144 == (MR_Integer) 1);
      }
    }
    if (succeeded)
    {
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *SpecLists_14 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (ReadSpecs_70));
        MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      *STATE_VARIABLE_HaveParseTreeMaps_41 = STATE_VARIABLE_HaveParseTreeMaps_46_46;
    }
    else
    {
      MR_Word BurdenedModules_29;
      MR_Word ReadSplitSpecs0_30;
      MR_Word ReadSplitSpecs_31;
      MR_Word WriteSpecsList_39;

      parse_tree__module_baggage__parse_tree_src_to_burdened_module_list_7_p_0(Globals_19, FileName_24, ReadErrors_69, MaybeTimestamp_27, ParseTreeSrc_25, &ReadSplitSpecs0_30, &BurdenedModules_29);
      parse_tree__error_util__filter_interface_generation_specs_3_p_0(Globals_19, ReadSplitSpecs0_30, &ReadSplitSpecs_31);
      switch (InterfaceFile_12) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word AncestorBurdenedModules_37;
            MR_Word Var_51;
            MR_Word _Succeededs_38;
            MR_Box conv4_STATE_VARIABLE_HaveParseTreeMaps_41;
            MR_Box conv3_STATE_VARIABLE_IO_43;

            mercury__list__filter_3_p_0((MR_Word) (&parse_tree__module_baggage__parse_tree__module_baggage__type_ctor_info_burdened_module_0), (MR_Word) (&top_level__mercury_compile_main_scalar_common_2[6]), BurdenedModules_29, &AncestorBurdenedModules_37);
            {
              Var_51 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_51, 0) = ((MR_Box) (&top_level__mercury_compile_main_scalar_common_7[0]));
              MR_hl_field(0, Var_51, 1) = ((MR_Box) (top_level__mercury_compile_main__do_process_compiler_arg_make_interface_9_p_0_2));
              MR_hl_field(0, Var_51, 2) = ((MR_Box) ((MR_Integer) 3));
              MR_hl_field(0, Var_51, 3) = ((MR_Box) (ProgressStream_10));
              MR_hl_field(0, Var_51, 4) = ((MR_Box) (Globals0_11));
              MR_hl_field(0, Var_51, 5) = ((MR_Box) ((MR_Integer) 0));
            }
            mercury__list__map2_foldl2_8_p_0((MR_Word) (&parse_tree__module_baggage__parse_tree__module_baggage__type_ctor_info_burdened_module_0), (MR_Word) (&libs__maybe_util__libs__maybe_util__type_ctor_info_maybe_succeeded_0), (MR_Word) (&top_level__mercury_compile_main_scalar_common_1[0]), (MR_Word) (&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_parse_tree_maps_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_51, AncestorBurdenedModules_37, &_Succeededs_38, &WriteSpecsList_39, ((MR_Box) (STATE_VARIABLE_HaveParseTreeMaps_46_46)), &conv4_STATE_VARIABLE_HaveParseTreeMaps_41, ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_IO_43);
            *STATE_VARIABLE_HaveParseTreeMaps_41 = ((MR_Word) (conv4_STATE_VARIABLE_HaveParseTreeMaps_41));
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Var_55;
            MR_Word _Succeededs_65;
            MR_Box conv9_STATE_VARIABLE_HaveParseTreeMaps_41;
            MR_Box conv8_STATE_VARIABLE_IO_43;

            {
              Var_55 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_55, 0) = ((MR_Box) (&top_level__mercury_compile_main_scalar_common_7[0]));
              MR_hl_field(0, Var_55, 1) = ((MR_Box) (top_level__mercury_compile_main__do_process_compiler_arg_make_interface_9_p_0_3));
              MR_hl_field(0, Var_55, 2) = ((MR_Box) ((MR_Integer) 3));
              MR_hl_field(0, Var_55, 3) = ((MR_Box) (ProgressStream_10));
              MR_hl_field(0, Var_55, 4) = ((MR_Box) (Globals0_11));
              MR_hl_field(0, Var_55, 5) = ((MR_Box) ((MR_Integer) 0));
            }
            mercury__list__map2_foldl2_8_p_0((MR_Word) (&parse_tree__module_baggage__parse_tree__module_baggage__type_ctor_info_burdened_module_0), (MR_Word) (&libs__maybe_util__libs__maybe_util__type_ctor_info_maybe_succeeded_0), (MR_Word) (&top_level__mercury_compile_main_scalar_common_1[0]), (MR_Word) (&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_parse_tree_maps_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_55, BurdenedModules_29, &_Succeededs_65, &WriteSpecsList_39, ((MR_Box) (STATE_VARIABLE_HaveParseTreeMaps_46_46)), &conv9_STATE_VARIABLE_HaveParseTreeMaps_41, ((MR_Box) ((MR_Integer) 0)), &conv8_STATE_VARIABLE_IO_43);
            *STATE_VARIABLE_HaveParseTreeMaps_41 = ((MR_Word) (conv9_STATE_VARIABLE_HaveParseTreeMaps_41));
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Var_59;
            MR_Word _Succeededs_67;
            MR_Box conv14_STATE_VARIABLE_HaveParseTreeMaps_41;
            MR_Box conv13_STATE_VARIABLE_IO_43;

            {
              Var_59 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_59, 0) = ((MR_Box) (&top_level__mercury_compile_main_scalar_common_7[0]));
              MR_hl_field(0, Var_59, 1) = ((MR_Box) (top_level__mercury_compile_main__do_process_compiler_arg_make_interface_9_p_0_4));
              MR_hl_field(0, Var_59, 2) = ((MR_Box) ((MR_Integer) 3));
              MR_hl_field(0, Var_59, 3) = ((MR_Box) (ProgressStream_10));
              MR_hl_field(0, Var_59, 4) = ((MR_Box) (Globals0_11));
              MR_hl_field(0, Var_59, 5) = ((MR_Box) ((MR_Integer) 0));
            }
            mercury__list__map2_foldl2_8_p_0((MR_Word) (&parse_tree__module_baggage__parse_tree__module_baggage__type_ctor_info_burdened_module_0), (MR_Word) (&libs__maybe_util__libs__maybe_util__type_ctor_info_maybe_succeeded_0), (MR_Word) (&top_level__mercury_compile_main_scalar_common_1[0]), (MR_Word) (&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_parse_tree_maps_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_59, BurdenedModules_29, &_Succeededs_67, &WriteSpecsList_39, ((MR_Box) (STATE_VARIABLE_HaveParseTreeMaps_46_46)), &conv14_STATE_VARIABLE_HaveParseTreeMaps_41, ((MR_Box) ((MR_Integer) 0)), &conv13_STATE_VARIABLE_IO_43);
            *STATE_VARIABLE_HaveParseTreeMaps_41 = ((MR_Word) (conv14_STATE_VARIABLE_HaveParseTreeMaps_41));
          }
          break;
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *SpecLists_14 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (ReadSplitSpecs_31));
        MR_hl_field(1, base, 1) = ((MR_Box) (WriteSpecsList_39));
      }
    }
  }
  else
  {
    MR_Word ReadErrors_22 = ((MR_Word) ((MR_hl_field(1, HaveReadSrc_20, (MR_Integer) 1))));
    MR_Word ReadSpecs_23;

    ReadSpecs_23 = parse_tree__parse_error__get_read_module_specs_1_f_0(ReadErrors_22);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *SpecLists_14 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (ReadSpecs_23));
      MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    *STATE_VARIABLE_HaveParseTreeMaps_41 = STATE_VARIABLE_HaveParseTreeMaps_46_46;
  }
}

static void MR_CALL 
top_level__mercury_compile_main__read_module_or_file_10_p_0(
  MR_Word ProgressStream_11,
  MR_Word Globals0_12,
  MR_Word * Globals_13,
  MR_Word FileOrModuleName_14,
  MR_Word ReturnTimestamp_15,
  MR_Word * HaveSrc_16,
  MR_Word STATE_VARIABLE_HaveParseTreeMaps_0_41,
  MR_Word * STATE_VARIABLE_HaveParseTreeMaps_42)
{
  MR_bool succeeded;
  MR_Word Verbose_19;
  MR_Word ModuleName_20;
  MR_String ParsingMsg_22;
  MR_Word Stats_40;
  MR_Word HaveSrc1_32;
  MR_Word HaveSrc0_24;
  MR_String FN_25;
  MR_Word PT_26;
  MR_Word Source0_27;
  MR_Word MaybeTimestamp0_28;
  MR_Word E_29;
  MR_Word MaybeTimestamp_30;
  MR_Word Source_31;
  MR_Word Var_55;
  MR_Box conv0_HaveSrc0_24;

  libs__globals__lookup_bool_option_3_p_0(Globals0_12, (MR_Integer) 76, &Verbose_19);
  if (((MR_tag((MR_Word) FileOrModuleName_14)) == (MR_Integer) 0))
  {
    MR_String FileName0_23 = ((MR_String) ((MR_hl_field(0, FileOrModuleName_14, (MR_Integer) 0))));
    MR_String Var_103;

    Var_103 = mercury__string__f_43_43_2_f_0(FileName0_23, (MR_String) "\'.m and imported interfaces...\n");
    ParsingMsg_22 = mercury__string__f_43_43_2_f_0((MR_String) "% Parsing file \140", Var_103);
    parse_tree__file_names__file_name_to_module_name_2_p_0(FileName0_23, &ModuleName_20);
  }
  else
  {
    MR_String ModuleNameStr_21;
    MR_String Var_100;

    ModuleName_20 = ((MR_Word) ((MR_hl_field(1, FileOrModuleName_14, (MR_Integer) 0))));
    ModuleNameStr_21 = mdbcomp__sym_name__sym_name_to_string_1_f_0(ModuleName_20);
    Var_100 = mercury__string__f_43_43_2_f_0(ModuleNameStr_21, (MR_String) "\'.m and imported interfaces...\n");
    ParsingMsg_22 = mercury__string__f_43_43_2_f_0((MR_String) "% Parsing file \140", Var_100);
  }
  libs__file_util__maybe_write_string_5_p_0(ProgressStream_11, Verbose_19, ParsingMsg_22);
  Var_55 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_HaveParseTreeMaps_0_41, (MR_Integer) 0))));
  succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&top_level__mercury_compile_main_scalar_common_1[4]), Var_55, ((MR_Box) (ModuleName_20)), &conv0_HaveSrc0_24);
  if (succeeded)
  {
    HaveSrc0_24 = ((MR_Word) (conv0_HaveSrc0_24));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    succeeded = ((MR_tag((MR_Word) HaveSrc0_24)) == (MR_Integer) 0);
    if (succeeded)
    {
      FN_25 = ((MR_String) ((MR_hl_field(0, HaveSrc0_24, (MR_Integer) 0))));
      PT_26 = ((MR_Word) ((MR_hl_field(0, HaveSrc0_24, (MR_Integer) 1))));
      Source0_27 = ((MR_Word) ((MR_hl_field(0, HaveSrc0_24, (MR_Integer) 2))));
      succeeded = (Source0_27 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        MaybeTimestamp0_28 = ((MR_Word) ((MR_hl_field(1, Source0_27, (MR_Integer) 0))));
        E_29 = ((MR_Word) ((MR_hl_field(1, Source0_27, (MR_Integer) 1))));
        parse_tree__read_modules__return_timestamp_if_needed_3_p_0(ReturnTimestamp_15, MaybeTimestamp0_28, &MaybeTimestamp_30);
        {
          Source_31 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Source_31, 0) = ((MR_Box) (MaybeTimestamp_30));
          MR_hl_field(1, Source_31, 1) = ((MR_Box) (E_29));
        }
        {
          HaveSrc1_32 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, HaveSrc1_32, 0) = ((MR_Box) (FN_25));
          MR_hl_field(0, HaveSrc1_32, 1) = ((MR_Box) (PT_26));
          MR_hl_field(0, HaveSrc1_32, 2) = ((MR_Box) (Source_31));
        }
        succeeded = MR_TRUE;
      }
    }
  }
  if (succeeded)
  {
    MR_Word HaveReadModuleMapSrc0_33;
    MR_Word HaveReadModuleMapSrc_34;
    MR_Word Var_88;
    MR_Word Var_89;
    MR_Word Var_90;
    MR_Word Var_91;
    MR_Word Var_92;
    MR_Word Var_93;
    MR_Word Var_94;

    *Globals_13 = Globals0_12;
    *HaveSrc_16 = HaveSrc1_32;
    HaveReadModuleMapSrc0_33 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_HaveParseTreeMaps_0_41, (MR_Integer) 0))));
    mercury__map__delete_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&top_level__mercury_compile_main_scalar_common_1[4]), ((MR_Box) (ModuleName_20)), HaveReadModuleMapSrc0_33, &HaveReadModuleMapSrc_34);
    Var_88 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_HaveParseTreeMaps_0_41, (MR_Integer) 1))));
    Var_89 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_HaveParseTreeMaps_0_41, (MR_Integer) 2))));
    Var_90 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_HaveParseTreeMaps_0_41, (MR_Integer) 3))));
    Var_91 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_HaveParseTreeMaps_0_41, (MR_Integer) 4))));
    Var_92 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_HaveParseTreeMaps_0_41, (MR_Integer) 5))));
    Var_93 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_HaveParseTreeMaps_0_41, (MR_Integer) 6))));
    Var_94 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_HaveParseTreeMaps_0_41, (MR_Integer) 7))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_HaveParseTreeMaps_42 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (HaveReadModuleMapSrc_34));
      MR_hl_field(0, base, 1) = ((MR_Box) (Var_88));
      MR_hl_field(0, base, 2) = ((MR_Box) (Var_89));
      MR_hl_field(0, base, 3) = ((MR_Box) (Var_90));
      MR_hl_field(0, base, 4) = ((MR_Box) (Var_91));
      MR_hl_field(0, base, 5) = ((MR_Box) (Var_92));
      MR_hl_field(0, base, 6) = ((MR_Box) (Var_93));
      MR_hl_field(0, base, 7) = ((MR_Box) (Var_94));
    }
  }
  else
  {
    MR_Word HaveReadSrc_36;
    MR_Word DisableSmart_39;

    if (((MR_tag((MR_Word) FileOrModuleName_14)) == (MR_Integer) 0))
    {
      MR_String FileName_37 = ((MR_String) ((MR_hl_field(0, FileOrModuleName_14, (MR_Integer) 0))));
      MR_String FileNameDotM_38;
      MR_Word Var_66;

      FileNameDotM_38 = mercury__string__f_43_43_2_f_0(FileName_37, (MR_String) ".m");
      {
        Var_66 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_66, 0) = (MR_Box) ((MR_Unsigned) (ReturnTimestamp_15));
      }
      parse_tree__read_modules__read_module_src_from_file_10_p_0(ProgressStream_11, Globals0_12, FileName_37, FileNameDotM_38, (MR_Integer) 0, (MR_Integer) 0, Var_66, &HaveReadSrc_36);
    }
    else
    {
      MR_Word Var_61;

      {
        Var_61 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_61, 0) = (MR_Box) ((MR_Unsigned) (ReturnTimestamp_15));
      }
      parse_tree__read_modules__read_module_src_11_p_0(ProgressStream_11, Globals0_12, (MR_Integer) 1, (MR_Integer) 1, (MR_Integer) 0, ModuleName_20, (MR_Word) ((MR_Unsigned) 0U), Var_61, &HaveReadSrc_36);
    }
    *HaveSrc_16 = (MR_Word) (HaveReadSrc_36);
    libs__globals__io_get_disable_smart_recompilation_3_p_0(&DisableSmart_39);
    switch (DisableSmart_39) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        libs__globals__set_option_4_p_0((MR_Integer) 173, (MR_Word) (MR_mkword(1, &top_level__mercury_compile_main_scalar_common_3[0])), Globals0_12, Globals_13);
        break;
      case (MR_Integer) 0:
        *Globals_13 = Globals0_12;
        break;
    }
    *STATE_VARIABLE_HaveParseTreeMaps_42 = STATE_VARIABLE_HaveParseTreeMaps_0_41;
  }
  libs__globals__lookup_bool_option_3_p_0(*Globals_13, (MR_Integer) 87, &Stats_40);
  libs__file_util__maybe_report_stats_4_p_0(ProgressStream_11, Stats_40);
}

static void MR_CALL 
top_level__mercury_compile_main__deps_make_ints_9_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7)
{
  MR_Box closure = closure_arg;
  MR_Word conv19_HeadVar__5_5;
  MR_Word conv18_HeadVar__6_6;
  MR_Word conv17_HeadVar__8_8;

  parse_tree__write_module_interface_files__generate_and_write_interface_file_int1_int2_10_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), &conv19_HeadVar__5_5, &conv18_HeadVar__6_6, ((MR_Word) (wrapper_arg_4)), &conv17_HeadVar__8_8);
  *wrapper_arg_2 = ((MR_Box) (conv19_HeadVar__5_5));
  *wrapper_arg_3 = ((MR_Box) (conv18_HeadVar__6_6));
  *wrapper_arg_5 = ((MR_Box) (conv17_HeadVar__8_8));
}

static void MR_CALL 
top_level__mercury_compile_main__deps_make_ints_9_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv14_STATE_VARIABLE_NotFoundFiles_12;
  MR_Word conv13_STATE_VARIABLE_OtherSpecs_14;

  top_level__mercury_compile_main__acc_not_found_files_5_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv14_STATE_VARIABLE_NotFoundFiles_12, ((MR_Word) (wrapper_arg_4)), &conv13_STATE_VARIABLE_OtherSpecs_14);
  *wrapper_arg_3 = ((MR_Box) (conv14_STATE_VARIABLE_NotFoundFiles_12));
  *wrapper_arg_5 = ((MR_Box) (conv13_STATE_VARIABLE_OtherSpecs_14));
}

static void MR_CALL 
top_level__mercury_compile_main__deps_make_ints_9_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7)
{
  MR_Box closure = closure_arg;
  MR_Word conv10_HeadVar__5_5;
  MR_Word conv9_HeadVar__6_6;
  MR_Word conv8_HeadVar__8_8;

  parse_tree__write_module_interface_files__generate_and_write_interface_file_int0_10_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), &conv10_HeadVar__5_5, &conv9_HeadVar__6_6, ((MR_Word) (wrapper_arg_4)), &conv8_HeadVar__8_8);
  *wrapper_arg_2 = ((MR_Box) (conv10_HeadVar__5_5));
  *wrapper_arg_3 = ((MR_Box) (conv9_HeadVar__6_6));
  *wrapper_arg_5 = ((MR_Box) (conv8_HeadVar__8_8));
}

static void MR_CALL 
top_level__mercury_compile_main__deps_make_ints_9_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7)
{
  MR_Box closure = closure_arg;
  MR_Word conv5_HeadVar__5_5;
  MR_Word conv4_HeadVar__6_6;
  MR_Word conv3_HeadVar__8_8;

  parse_tree__write_module_interface_files__generate_and_write_interface_file_int3_10_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), &conv5_HeadVar__5_5, &conv4_HeadVar__6_6, ((MR_Word) (wrapper_arg_4)), &conv3_HeadVar__8_8);
  *wrapper_arg_2 = ((MR_Box) (conv5_HeadVar__5_5));
  *wrapper_arg_3 = ((MR_Box) (conv4_HeadVar__6_6));
  *wrapper_arg_5 = ((MR_Box) (conv3_HeadVar__8_8));
}

static MR_bool MR_CALL 
top_level__mercury_compile_main__deps_make_ints_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_Word conv1_BurdenedModule_6;
  MR_Word conv0_STATE_VARIABLE_Ancestors_16;

  succeeded = top_level__mercury_compile_main__gather_local_burdened_modules_4_p_0(((MR_Word) (wrapper_arg_1)), &conv1_BurdenedModule_6, ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_Ancestors_16);
  if (succeeded)
  {
    *wrapper_arg_2 = ((MR_Box) (conv1_BurdenedModule_6));
    *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_Ancestors_16));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static void MR_CALL 
top_level__mercury_compile_main__deps_make_ints_9_p_0(
  MR_Word ProgressStream_10,
  MR_Word Globals_11,
  MR_Word DepsMap_12,
  MR_Word STATE_VARIABLE_Specs_0_36,
  MR_Word * STATE_VARIABLE_Specs_37,
  MR_Word STATE_VARIABLE_HaveParseTreeMaps_0_38,
  MR_Word * STATE_VARIABLE_HaveParseTreeMaps_39)
{
  MR_bool succeeded;
  MR_Word DepsList_16;
  MR_Word BurdenedModules_17;
  MR_Word Ancestors_18;
  MR_Word SpecsList3_20;
  MR_Word Specs3_21;
  MR_Word Errors3_22;
  MR_Word Var_44;
  MR_Word STATE_VARIABLE_HaveParseTreeMaps_45_45;
  MR_Word STATE_VARIABLE_Specs_48_48;
  MR_Box conv2_Ancestors_18;
  MR_Word _Succeededs3_19;
  MR_Box conv7_STATE_VARIABLE_HaveParseTreeMaps_45_45;
  MR_Box conv6_STATE_VARIABLE_IO_46_46;

  mercury__map__values_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_deps_0), DepsMap_12, &DepsList_16);
  mercury__list__filter_map_foldl_5_p_0((MR_Word) (&parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_deps_0), (MR_Word) (&parse_tree__module_baggage__parse_tree__module_baggage__type_ctor_info_burdened_module_0), (MR_Word) (&top_level__mercury_compile_main_scalar_common_1[2]), (MR_Word) (&top_level__mercury_compile_main_scalar_common_2[4]), DepsList_16, &BurdenedModules_17, ((MR_Box) ((MR_Unsigned) 0U)), &conv2_Ancestors_18);
  Ancestors_18 = ((MR_Word) (conv2_Ancestors_18));
  {
    Var_44 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_44, 0) = ((MR_Box) (&top_level__mercury_compile_main_scalar_common_7[0]));
    MR_hl_field(0, Var_44, 1) = ((MR_Box) (top_level__mercury_compile_main__deps_make_ints_9_p_0_2));
    MR_hl_field(0, Var_44, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(0, Var_44, 3) = ((MR_Box) (ProgressStream_10));
    MR_hl_field(0, Var_44, 4) = ((MR_Box) (Globals_11));
    MR_hl_field(0, Var_44, 5) = ((MR_Box) ((MR_Integer) 1));
  }
  mercury__list__map2_foldl2_8_p_0((MR_Word) (&parse_tree__module_baggage__parse_tree__module_baggage__type_ctor_info_burdened_module_0), (MR_Word) (&libs__maybe_util__libs__maybe_util__type_ctor_info_maybe_succeeded_0), (MR_Word) (&top_level__mercury_compile_main_scalar_common_1[0]), (MR_Word) (&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_parse_tree_maps_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_44, BurdenedModules_17, &_Succeededs3_19, &SpecsList3_20, ((MR_Box) (STATE_VARIABLE_HaveParseTreeMaps_0_38)), &conv7_STATE_VARIABLE_HaveParseTreeMaps_45_45, ((MR_Box) ((MR_Integer) 0)), &conv6_STATE_VARIABLE_IO_46_46);
  STATE_VARIABLE_HaveParseTreeMaps_45_45 = ((MR_Word) (conv7_STATE_VARIABLE_HaveParseTreeMaps_45_45));
  mercury__list__condense_2_p_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), SpecsList3_20, &Specs3_21);
  STATE_VARIABLE_Specs_48_48 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), Specs3_21, STATE_VARIABLE_Specs_0_36);
  Errors3_22 = parse_tree__error_util__contains_errors_2_f_0(Globals_11, Specs3_21);
  switch (Errors3_22) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word SortedAncestors_23;
        MR_Word AncestorBurdenedModules_24;
        MR_Word RawSpecsList0_26;
        MR_Word RawSpecs0_27;
        MR_Word Specs0_28;
        MR_Word Continue0_29;
        MR_Word Errors0_30;
        MR_Word Var_49;
        MR_Word STATE_VARIABLE_HaveParseTreeMaps_50_50;
        MR_Word STATE_VARIABLE_Specs_53_53;
        MR_Word NotFoundFiles_80;
        MR_Word OtherSpecs_81;
        MR_Word _Succeededs0_25;
        MR_Box conv12_STATE_VARIABLE_HaveParseTreeMaps_50_50;
        MR_Box conv11_STATE_VARIABLE_IO_51_51;
        MR_Box conv16_NotFoundFiles_80;
        MR_Box conv15_OtherSpecs_81;

        mercury__list__sort_2_p_0((MR_Word) (&top_level__mercury_compile_main_scalar_common_2[0]), Ancestors_18, &SortedAncestors_23);
        mercury__assoc_list__values_2_p_0((MR_Word) (&top_level__mercury_compile_main_scalar_common_1[1]), (MR_Word) (&parse_tree__module_baggage__parse_tree__module_baggage__type_ctor_info_burdened_module_0), SortedAncestors_23, &AncestorBurdenedModules_24);
        {
          Var_49 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_49, 0) = ((MR_Box) (&top_level__mercury_compile_main_scalar_common_7[0]));
          MR_hl_field(0, Var_49, 1) = ((MR_Box) (top_level__mercury_compile_main__deps_make_ints_9_p_0_3));
          MR_hl_field(0, Var_49, 2) = ((MR_Box) ((MR_Integer) 3));
          MR_hl_field(0, Var_49, 3) = ((MR_Box) (ProgressStream_10));
          MR_hl_field(0, Var_49, 4) = ((MR_Box) (Globals_11));
          MR_hl_field(0, Var_49, 5) = ((MR_Box) ((MR_Integer) 1));
        }
        mercury__list__map2_foldl2_8_p_0((MR_Word) (&parse_tree__module_baggage__parse_tree__module_baggage__type_ctor_info_burdened_module_0), (MR_Word) (&libs__maybe_util__libs__maybe_util__type_ctor_info_maybe_succeeded_0), (MR_Word) (&top_level__mercury_compile_main_scalar_common_1[0]), (MR_Word) (&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_parse_tree_maps_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_49, AncestorBurdenedModules_24, &_Succeededs0_25, &RawSpecsList0_26, ((MR_Box) (STATE_VARIABLE_HaveParseTreeMaps_45_45)), &conv12_STATE_VARIABLE_HaveParseTreeMaps_50_50, ((MR_Box) ((MR_Integer) 0)), &conv11_STATE_VARIABLE_IO_51_51);
        STATE_VARIABLE_HaveParseTreeMaps_50_50 = ((MR_Word) (conv12_STATE_VARIABLE_HaveParseTreeMaps_50_50));
        mercury__list__condense_2_p_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), RawSpecsList0_26, &RawSpecs0_27);
        mercury__list__foldl2_6_p_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), (MR_Word) (&top_level__mercury_compile_main_scalar_common_1[3]), (MR_Word) (&top_level__mercury_compile_main_scalar_common_1[0]), (MR_Word) (&top_level__mercury_compile_main_scalar_common_2[5]), RawSpecs0_27, ((MR_Box) ((MR_Unsigned) 0U)), &conv16_NotFoundFiles_80, ((MR_Box) ((MR_Unsigned) 0U)), &conv15_OtherSpecs_81);
        NotFoundFiles_80 = ((MR_Word) (conv16_NotFoundFiles_80));
        OtherSpecs_81 = ((MR_Word) (conv15_OtherSpecs_81));
        if ((NotFoundFiles_80 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          Specs0_28 = OtherSpecs_81;
          Continue0_29 = (MR_Integer) 1;
        }
        else
        {
          MR_Word SortedNotFoundFiles_82;
          MR_Word FilesToShow_83;
          MR_Word FilesNotToShow_84;
          MR_Word NotFoundPieces_85;
          MR_Word Pieces_86;
          MR_Word Spec_87;

          mercury__list__sort_2_p_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), NotFoundFiles_80, &SortedNotFoundFiles_82);
          mercury__list__split_upto_4_p_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Integer) 10, SortedNotFoundFiles_82, &FilesToShow_83, &FilesNotToShow_84);
          if ((FilesNotToShow_84 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            MR_Word Var_93;

            Var_93 = parse_tree__error_spec__indented_list_1_f_0(FilesToShow_83);
            NotFoundPieces_85 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &top_level__mercury_compile_main_scalar_common_1[15])), Var_93);
          }
          else
          {
            MR_Word Var_95;

            Var_95 = parse_tree__error_spec__indented_list_1_f_0(FilesToShow_83);
            NotFoundPieces_85 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &top_level__mercury_compile_main_scalar_common_1[18])), Var_95);
          }
          Pieces_86 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), NotFoundPieces_85, (MR_Word) (MR_mkword(1, &top_level__mercury_compile_main_scalar_common_1[20])));
          {
            Spec_87 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Spec_87, 0) = ((MR_Box) ((MR_String) "predicate \140top_level.mercury_compile_main.handle_not_found_files\'/3"));
            MR_hl_field(1, Spec_87, 1) = ((MR_Box) ((MR_Unsigned) 8U));
            MR_hl_field(1, Spec_87, 2) = ((MR_Box) ((MR_Unsigned) 16U));
            MR_hl_field(1, Spec_87, 3) = ((MR_Box) (Pieces_86));
          }
          {
            Specs0_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Specs0_28, 0) = ((MR_Box) (Spec_87));
            MR_hl_field(1, Specs0_28, 1) = ((MR_Box) (OtherSpecs_81));
          }
          Continue0_29 = (MR_Integer) 0;
        }
        STATE_VARIABLE_Specs_53_53 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), Specs0_28, STATE_VARIABLE_Specs_48_48);
        Errors0_30 = parse_tree__error_util__contains_errors_2_f_0(Globals_11, Specs0_28);
        succeeded = (Errors0_30 == (MR_Integer) 0);
        if (succeeded)
          succeeded = (Continue0_29 == (MR_Integer) 1);
        if (succeeded)
        {
          MR_Word RawSpecsList12_32;
          MR_Word RawSpecs12_33;
          MR_Word Specs12_34;
          MR_Word Var_54;
          MR_Word _Succeededs12_31;
          MR_Box conv21_STATE_VARIABLE_HaveParseTreeMaps_39;
          MR_Box conv20_STATE_VARIABLE_IO_41;
          MR_Word _Continue12_35;

          {
            Var_54 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_54, 0) = ((MR_Box) (&top_level__mercury_compile_main_scalar_common_7[0]));
            MR_hl_field(0, Var_54, 1) = ((MR_Box) (top_level__mercury_compile_main__deps_make_ints_9_p_0_5));
            MR_hl_field(0, Var_54, 2) = ((MR_Box) ((MR_Integer) 3));
            MR_hl_field(0, Var_54, 3) = ((MR_Box) (ProgressStream_10));
            MR_hl_field(0, Var_54, 4) = ((MR_Box) (Globals_11));
            MR_hl_field(0, Var_54, 5) = ((MR_Box) ((MR_Integer) 1));
          }
          mercury__list__map2_foldl2_8_p_0((MR_Word) (&parse_tree__module_baggage__parse_tree__module_baggage__type_ctor_info_burdened_module_0), (MR_Word) (&libs__maybe_util__libs__maybe_util__type_ctor_info_maybe_succeeded_0), (MR_Word) (&top_level__mercury_compile_main_scalar_common_1[0]), (MR_Word) (&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_parse_tree_maps_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_54, BurdenedModules_17, &_Succeededs12_31, &RawSpecsList12_32, ((MR_Box) (STATE_VARIABLE_HaveParseTreeMaps_50_50)), &conv21_STATE_VARIABLE_HaveParseTreeMaps_39, ((MR_Box) ((MR_Integer) 0)), &conv20_STATE_VARIABLE_IO_41);
          *STATE_VARIABLE_HaveParseTreeMaps_39 = ((MR_Word) (conv21_STATE_VARIABLE_HaveParseTreeMaps_39));
          mercury__list__condense_2_p_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), RawSpecsList12_32, &RawSpecs12_33);
          top_level__mercury_compile_main__handle_not_found_files_3_p_0(RawSpecs12_33, &Specs12_34, &_Continue12_35);
          *STATE_VARIABLE_Specs_37 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), Specs12_34, STATE_VARIABLE_Specs_53_53);
        }
        else
        {
          *STATE_VARIABLE_HaveParseTreeMaps_39 = STATE_VARIABLE_HaveParseTreeMaps_50_50;
          *STATE_VARIABLE_Specs_37 = STATE_VARIABLE_Specs_53_53;
        }
      }
      break;
    case (MR_Integer) 1:
      {
        *STATE_VARIABLE_Specs_37 = STATE_VARIABLE_Specs_48_48;
        *STATE_VARIABLE_HaveParseTreeMaps_39 = STATE_VARIABLE_HaveParseTreeMaps_45_45;
      }
      break;
  }
}

static void MR_CALL 
top_level__mercury_compile_main__handle_not_found_files_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_STATE_VARIABLE_NotFoundFiles_12;
  MR_Word conv0_STATE_VARIABLE_OtherSpecs_14;

  top_level__mercury_compile_main__acc_not_found_files_5_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_NotFoundFiles_12, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_OtherSpecs_14);
  *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_NotFoundFiles_12));
  *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_OtherSpecs_14));
}

static void MR_CALL 
top_level__mercury_compile_main__handle_not_found_files_3_p_0(
  MR_Word Specs0_4,
  MR_Word * Specs_5,
  MR_Word * Continue_6)
{
  MR_Word NotFoundFiles_7;
  MR_Word OtherSpecs_8;
  MR_Box conv3_NotFoundFiles_7;
  MR_Box conv2_OtherSpecs_8;

  mercury__list__foldl2_6_p_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), (MR_Word) (&top_level__mercury_compile_main_scalar_common_1[3]), (MR_Word) (&top_level__mercury_compile_main_scalar_common_1[0]), (MR_Word) (&top_level__mercury_compile_main_scalar_common_2[3]), Specs0_4, ((MR_Box) ((MR_Unsigned) 0U)), &conv3_NotFoundFiles_7, ((MR_Box) ((MR_Unsigned) 0U)), &conv2_OtherSpecs_8);
  NotFoundFiles_7 = ((MR_Word) (conv3_NotFoundFiles_7));
  OtherSpecs_8 = ((MR_Word) (conv2_OtherSpecs_8));
  if ((NotFoundFiles_7 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *Specs_5 = OtherSpecs_8;
    *Continue_6 = (MR_Integer) 1;
  }
  else
  {
    MR_Word SortedNotFoundFiles_11;
    MR_Word FilesToShow_12;
    MR_Word FilesNotToShow_13;
    MR_Word NotFoundPieces_14;
    MR_Word Pieces_17;
    MR_Word Spec_18;

    mercury__list__sort_2_p_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), NotFoundFiles_7, &SortedNotFoundFiles_11);
    mercury__list__split_upto_4_p_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Integer) 10, SortedNotFoundFiles_11, &FilesToShow_12, &FilesNotToShow_13);
    if ((FilesNotToShow_13 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Var_31;

      Var_31 = parse_tree__error_spec__indented_list_1_f_0(FilesToShow_12);
      NotFoundPieces_14 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &top_level__mercury_compile_main_scalar_common_1[15])), Var_31);
    }
    else
    {
      MR_Word Var_40;

      Var_40 = parse_tree__error_spec__indented_list_1_f_0(FilesToShow_12);
      NotFoundPieces_14 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &top_level__mercury_compile_main_scalar_common_1[18])), Var_40);
    }
    Pieces_17 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), NotFoundPieces_14, (MR_Word) (MR_mkword(1, &top_level__mercury_compile_main_scalar_common_1[20])));
    {
      Spec_18 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Spec_18, 0) = ((MR_Box) ((MR_String) "predicate \140top_level.mercury_compile_main.handle_not_found_files\'/3"));
      MR_hl_field(1, Spec_18, 1) = ((MR_Box) ((MR_Unsigned) 8U));
      MR_hl_field(1, Spec_18, 2) = ((MR_Box) ((MR_Unsigned) 16U));
      MR_hl_field(1, Spec_18, 3) = ((MR_Box) (Pieces_17));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *Specs_5 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Spec_18));
      MR_hl_field(1, base, 1) = ((MR_Box) (OtherSpecs_8));
    }
    *Continue_6 = (MR_Integer) 0;
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

  mercury__io__write_string_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_String) (wrapper_arg_1)));
}

static void MR_CALL 
top_level__mercury_compile_main__do_op_mode_query_5_p_0_3(
  void * env_ptr_arg)
{
  struct top_level__mercury_compile_main__do_op_mode_query_5_p_0_4_env_0_s * env_ptr = (struct top_level__mercury_compile_main__do_op_mode_query_5_p_0_4_env_0_s *) (env_ptr_arg);

  *((env_ptr)->top_level__mercury_compile_main__do_op_mode_query_5_p_0_4_env_0__wrapper_arg_1) = ((MR_Box) ((env_ptr)->top_level__mercury_compile_main__do_op_mode_query_5_p_0_4_env_0__conv2_LambdaHeadVar__1_63));
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

    top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_query__360__1_1_p_0(&(env).top_level__mercury_compile_main__do_op_mode_query_5_p_0_4_env_0__conv2_LambdaHeadVar__1_63, top_level__mercury_compile_main__do_op_mode_query_5_p_0_3, &env);
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

  top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_query__353__1_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_String) (wrapper_arg_1)));
}

static void MR_CALL 
top_level__mercury_compile_main__do_op_mode_query_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_query__346__1_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_String) (wrapper_arg_1)));
}

static void MR_CALL 
top_level__mercury_compile_main__do_op_mode_query_5_p_0(
  MR_Word ErrorStream_6,
  MR_Word Globals_7,
  MR_Word OpModeQuery_8)
{
  MR_Word StdOutStream_10;

  mercury__io__stdout_stream_3_p_0(&StdOutStream_10);
  switch (OpModeQuery_8) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        MR_String CC_Type_12;

        libs__globals__lookup_string_option_3_p_0(Globals_7, (MR_Integer) 582, &CC_Type_12);
        mercury__io__print_line_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), StdOutStream_10, ((MR_Box) (CC_Type_12)));
      }
      break;
    case (MR_Integer) 3:
      backend_libs__compile_target_code__output_c_include_directory_flags_4_p_0(Globals_7, StdOutStream_10);
      break;
    case (MR_Integer) 0:
      {
        MR_String CC_11;

        libs__globals__lookup_string_option_3_p_0(Globals_7, (MR_Integer) 558, &CC_11);
        mercury__io__print_line_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), StdOutStream_10, ((MR_Box) (CC_11)));
      }
      break;
    case (MR_Integer) 2:
      {
        backend_libs__compile_target_code__output_c_compiler_flags_4_p_0(Globals_7, StdOutStream_10);
        mercury__io__nl_3_p_0(StdOutStream_10);
      }
      break;
    case (MR_Integer) 5:
      {
        MR_String CSC_13;

        libs__globals__lookup_string_option_3_p_0(Globals_7, (MR_Integer) 591, &CSC_13);
        mercury__io__print_line_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), StdOutStream_10, ((MR_Box) (CSC_13)));
      }
      break;
    case (MR_Integer) 6:
      {
        MR_String CSC_Type_14;

        libs__globals__lookup_string_option_3_p_0(Globals_7, (MR_Integer) 583, &CSC_Type_14);
        mercury__io__print_line_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), StdOutStream_10, ((MR_Box) (CSC_Type_14)));
      }
      break;
    case (MR_Integer) 4:
      backend_libs__compile_target_code__output_c_grade_defines_4_p_0(Globals_7, StdOutStream_10);
      break;
    case (MR_Integer) 11:
      {
        MR_String Grade_20;

        libs__globals__get_grade_dir_2_p_0(Globals_7, &Grade_20);
        mercury__io__print_line_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), StdOutStream_10, ((MR_Box) (Grade_20)));
      }
      break;
    case (MR_Integer) 7:
      {
        MR_Word ClassDirNames_15;
        MR_String ClassDirName_17;
        MR_Word _ClassDirNamesProposed_16;

        parse_tree__file_names__get_java_dir_path_4_p_0(Globals_7, (MR_Integer) 1, &ClassDirNames_15, &_ClassDirNamesProposed_16);
        ClassDirName_17 = mercury__dir__relative_path_name_from_components_1_f_0(ClassDirNames_15);
        mercury__io__print_line_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), StdOutStream_10, ((MR_Box) (ClassDirName_17)));
      }
      break;
    case (MR_Integer) 12:
      {
        MR_Word LibGrades_21;
        MR_Word Var_57;
        MR_Box conv0_STATE_VARIABLE_IO_33;

        libs__globals__lookup_accumulating_option_3_p_0(Globals_7, (MR_Integer) 698, &LibGrades_21);
        {
          Var_57 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_57, 0) = ((MR_Box) (&top_level__mercury_compile_main_scalar_common_4[0]));
          MR_hl_field(0, Var_57, 1) = ((MR_Box) (top_level__mercury_compile_main__do_op_mode_query_5_p_0_1));
          MR_hl_field(0, Var_57, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(0, Var_57, 3) = ((MR_Box) (StdOutStream_10));
        }
        mercury__list__foldl_4_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_57, LibGrades_21, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_33);
      }
      break;
    case (MR_Integer) 10:
      {
        MR_Word Specs_19;

        backend_libs__compile_target_code__output_library_link_flags_5_p_0(Globals_7, StdOutStream_10, &Specs_19);
        parse_tree__write_error_spec__write_error_specs_5_p_0(ErrorStream_6, Globals_7, Specs_19);
      }
      break;
    case (MR_Integer) 8:
      {
        MR_String LinkCommand_18;

        libs__globals__lookup_string_option_3_p_0(Globals_7, (MR_Integer) 634, &LinkCommand_18);
        mercury__io__print_line_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), StdOutStream_10, ((MR_Box) (LinkCommand_18)));
      }
      break;
    case (MR_Integer) 9:
      {
        MR_String LinkCommand_72;

        libs__globals__lookup_string_option_3_p_0(Globals_7, (MR_Integer) 635, &LinkCommand_72);
        mercury__io__print_line_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), StdOutStream_10, ((MR_Box) (LinkCommand_72)));
      }
      break;
    case (MR_Integer) 13:
      {
        MR_Word OptionTable_22;
        MR_Word MaybeStdlibGrades_23;

        libs__globals__get_options_2_p_0(Globals_7, &OptionTable_22);
        libs__check_libgrades__detect_stdlib_grades_4_p_0(OptionTable_22, &MaybeStdlibGrades_23);
        if (((MR_tag((MR_Word) MaybeStdlibGrades_23)) == (MR_Integer) 0))
        {
          MR_Word Specs_73 = ((MR_Word) ((MR_hl_field(0, MaybeStdlibGrades_23, (MR_Integer) 0))));

          parse_tree__write_error_spec__write_error_specs_5_p_0(ErrorStream_6, Globals_7, Specs_73);
        }
        else
        {
          MR_Word StdlibGrades_24 = ((MR_Word) ((MR_hl_field(1, MaybeStdlibGrades_23, (MR_Integer) 0))));
          MR_Word Var_60;
          MR_Box conv1_STATE_VARIABLE_IO_33;

          {
            Var_60 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_60, 0) = ((MR_Box) (&top_level__mercury_compile_main_scalar_common_4[0]));
            MR_hl_field(0, Var_60, 1) = ((MR_Box) (top_level__mercury_compile_main__do_op_mode_query_5_p_0_2));
            MR_hl_field(0, Var_60, 2) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(0, Var_60, 3) = ((MR_Box) (StdOutStream_10));
          }
          mercury__set__fold_4_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_60, StdlibGrades_24, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_33);
        }
      }
      break;
    case (MR_Integer) 14:
      {
        MR_Word StdlibLines_30;
        MR_Word Var_68;
        MR_Box conv3_STATE_VARIABLE_IO_33;

        mercury__solutions__solutions_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&top_level__mercury_compile_main_scalar_common_2[2]), &StdlibLines_30);
        {
          Var_68 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_68, 0) = ((MR_Box) (&top_level__mercury_compile_main_scalar_common_4[0]));
          MR_hl_field(0, Var_68, 1) = ((MR_Box) (top_level__mercury_compile_main__do_op_mode_query_5_p_0_5));
          MR_hl_field(0, Var_68, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(0, Var_68, 3) = ((MR_Box) (StdOutStream_10));
        }
        mercury__list__foldl_4_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_68, StdlibLines_30, ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_IO_33);
      }
      break;
    case (MR_Integer) 15:
      {
        MR_String TargetArch_31;

        libs__globals__lookup_string_option_3_p_0(Globals_7, (MR_Integer) 740, &TargetArch_31);
        mercury__io__print_line_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), StdOutStream_10, ((MR_Box) (TargetArch_31)));
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
      backend_libs__compile_target_code__make_standalone_interface_5_p_0(Globals_9, ProgressStream_7, StandaloneIntBasename_10);
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
          MR_hl_field(1, Var_35, 1) = ((MR_Box) (MR_mkword(1, &top_level__mercury_compile_main_scalar_common_1[11])));
        }
        {
          Var_32 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_32, 0) = ((MR_Box) (MR_mkword(3, &top_level__mercury_compile_main_scalar_common_1[8])));
          MR_hl_field(1, Var_32, 1) = ((MR_Box) (Var_35));
        }
        {
          Var_29 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_29, 0) = ((MR_Box) (MR_mkword(3, &top_level__mercury_compile_main_scalar_common_1[7])));
          MR_hl_field(1, Var_29, 1) = ((MR_Box) (Var_32));
        }
        {
          Var_26 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_26, 0) = ((MR_Box) (MR_mkword(3, &top_level__mercury_compile_main_scalar_common_1[6])));
          MR_hl_field(1, Var_26, 1) = ((MR_Box) (Var_29));
        }
        {
          Var_24 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_24, 0) = ((MR_Box) ((MR_Unsigned) 12U));
          MR_hl_field(1, Var_24, 1) = ((MR_Box) (Var_26));
        }
        {
          Var_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_21, 0) = ((MR_Box) (MR_mkword(3, &top_level__mercury_compile_main_scalar_common_1[5])));
          MR_hl_field(1, Var_21, 1) = ((MR_Box) (Var_24));
        }
        {
          Pieces_14 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Pieces_14, 0) = ((MR_Box) (Var_20));
          MR_hl_field(1, Pieces_14, 1) = ((MR_Box) (Var_21));
        }
        {
          Spec_15 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Spec_15, 0) = ((MR_Box) ((MR_String) "predicate \140top_level.mercury_compile_main.do_op_mode_standalone_interface\'/6"));
          MR_hl_field(1, Spec_15, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(1, Spec_15, 2) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(1, Spec_15, 3) = ((MR_Box) (Pieces_14));
        }
        parse_tree__write_error_spec__write_error_spec_5_p_0(ErrorStream_8, Globals_9, Spec_15);
      }
      break;
  }
}

void mercury__top_level__mercury_compile_main__init(void)
{
}

void mercury__top_level__mercury_compile_main__init_type_tables(void)
{
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
