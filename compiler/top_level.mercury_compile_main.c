/*
** Automatically generated from `mercury_compile_main.m'
** by the Mercury compiler,
** version rotd-2024-04-03
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
#include "libs.indent.mih"
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
#include "parse_tree.generate_dep_d_files.mih"
#include "parse_tree.grab_modules.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.module_baggage.mih"
#include "parse_tree.module_cmds.mih"
#include "parse_tree.module_dep_info.mih"
#include "parse_tree.module_deps_graph.mih"
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
#include "top_level.mercury_compile_front_end.mih"
#include "top_level.mercury_compile_llds_back_end.mih"
#include "top_level.mercury_compile_make_hlds.mih"
#include "top_level.mercury_compile_middle_passes.mih"
#include "top_level.mercury_compile_mlds_back_end.mih"
#include "hlds.make_hlds.qual_info.mih"



struct top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_query__770__1_1_p_0_env_0_s {
  MR_String * top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_query__770__1_1_p_0_env_0__LambdaHeadVar__1_65;
  MR_Cont top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_query__770__1_1_p_0_env_0__cont;
  void * top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_query__770__1_1_p_0_env_0__cont_env_ptr;
  MR_String top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_query__770__1_1_p_0_env_0__ModuleName_29;
  MR_Word top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_query__770__1_1_p_0_env_0__DocUndoc_30;
  MR_String top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_query__770__1_1_p_0_env_0__DocStr_31;
  MR_String top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_query__770__1_1_p_0_env_0__Var_66;
  MR_String top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_query__770__1_1_p_0_env_0__Var_67;
  MR_String top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_query__770__1_1_p_0_env_0__Var_68;
  MR_String top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_query__770__1_1_p_0_env_0__Var_69;
};

struct top_level__mercury_compile_main__real_main_2_p_0_2_env_0_s {
  MR_Box * top_level__mercury_compile_main__real_main_2_p_0_2_env_0__wrapper_arg_1;
  MR_Box * top_level__mercury_compile_main__real_main_2_p_0_2_env_0__wrapper_arg_2;
  MR_Cont top_level__mercury_compile_main__real_main_2_p_0_2_env_0__cont;
  void * top_level__mercury_compile_main__real_main_2_p_0_2_env_0__cont_env_ptr;
  MR_Word top_level__mercury_compile_main__real_main_2_p_0_2_env_0__conv1_HeadVar__1_1;
  MR_Word top_level__mercury_compile_main__real_main_2_p_0_2_env_0__conv0_HeadVar__2_2;
};

struct top_level__mercury_compile_main__do_op_mode_query_6_p_0_4_env_0_s {
  MR_Box * top_level__mercury_compile_main__do_op_mode_query_6_p_0_4_env_0__wrapper_arg_1;
  MR_Cont top_level__mercury_compile_main__do_op_mode_query_6_p_0_4_env_0__cont;
  void * top_level__mercury_compile_main__do_op_mode_query_6_p_0_4_env_0__cont_env_ptr;
  MR_String top_level__mercury_compile_main__do_op_mode_query_6_p_0_4_env_0__conv2_LambdaHeadVar__1_65;
};


static const MR_FA_PseudoTypeInfo_Struct2 top_level__mercury_compile_main__tree234__pti_tree234_2__plain_libs__options__type_ctor_info_option_0__plain_getopt__type_ctor_info_option_data_0;

static const MR_FA_PseudoTypeInfo_Struct1 top_level__mercury_compile_main__getopt__pti_maybe_option_table_1__plain_libs__options__type_ctor_info_option_0;

static const MR_FA_PseudoTypeInfo_Struct1 top_level__mercury_compile_main__cord__pti_cord_1__plain_libs__optimization_options__type_ctor_info_optimization_option_0;

static const MR_FA_PseudoTypeInfo_Struct1 top_level__mercury_compile_main__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_format_piece_0;

static const MR_FA_PseudoTypeInfo_Struct1 top_level__mercury_compile_main__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0;

static const MR_FA_TypeInfo_Struct1 top_level__mercury_compile_main__list__ti_list_1builtin__type_ctor_info_string_0;

static const MR_FA_TypeInfo_Struct2 top_level__mercury_compile_main__pair__ti_pair_2list__ti_list_1builtin__type_ctor_info_string_0parse_tree__module_baggage__type_ctor_info_burdened_module_0;

static const MR_FA_PseudoTypeInfo_Struct1 top_level__mercury_compile_main__list__pti_list_1__plain_pair__ti_pair_2list__ti_list_1builtin__type_ctor_info_string_0parse_tree__module_baggage__type_ctor_info_burdened_module_0;

static const MR_FA_PseudoTypeInfo_Struct1 top_level__mercury_compile_main__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_FA_PseudoTypeInfo_Struct1 top_level__mercury_compile_main__list__pti_list_1__plain_builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct1 top_level__mercury_compile_main__maybe__pti_maybe_1__plain_libs__timestamp__type_ctor_info_timestamp_0;

static const MR_VA_PseudoTypeInfo_Struct4 top_level__mercury_compile_main____vpti_pred_4__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_list__ti_list_1builtin__type_ctor_info_string_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0;

static const MR_PseudoTypeInfo top_level__mercury_compile_main__top_level__mercury_compile_main__field_types_file_or_module_0_0[1];

static const MR_DuFunctorDesc top_level__mercury_compile_main__top_level__mercury_compile_main__du_functor_desc_file_or_module_0_0;

static const MR_PseudoTypeInfo top_level__mercury_compile_main__top_level__mercury_compile_main__field_types_file_or_module_0_1[1];

static const MR_DuFunctorDesc top_level__mercury_compile_main__top_level__mercury_compile_main__du_functor_desc_file_or_module_0_1;

static const MR_DuFunctorDescPtr top_level__mercury_compile_main__top_level__mercury_compile_main__du_stag_ordered_file_or_module_0_0[1];

static const MR_DuFunctorDescPtr top_level__mercury_compile_main__top_level__mercury_compile_main__du_stag_ordered_file_or_module_0_1[1];

static const MR_DuPtagLayout top_level__mercury_compile_main__top_level__mercury_compile_main__du_ptag_ordered_file_or_module_0[2];

static const MR_DuFunctorDescPtr top_level__mercury_compile_main__top_level__mercury_compile_main__du_name_ordered_file_or_module_0[2];

static const MR_Integer top_level__mercury_compile_main__top_level__mercury_compile_main__functor_number_map_file_or_module_0[2];

static const MR_FA_TypeInfo_Struct1 top_level__mercury_compile_main__list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0;

static const MR_PseudoTypeInfo top_level__mercury_compile_main__top_level__mercury_compile_main__field_types_option_processing_result_0_0[1];

static const MR_ConstString top_level__mercury_compile_main__top_level__mercury_compile_main__field_names_option_processing_result_0_0[1];

static const MR_DuFunctorDesc top_level__mercury_compile_main__top_level__mercury_compile_main__du_functor_desc_option_processing_result_0_0;

static const MR_PseudoTypeInfo top_level__mercury_compile_main__top_level__mercury_compile_main__field_types_option_processing_result_0_1[6];

static const MR_ConstString top_level__mercury_compile_main__top_level__mercury_compile_main__field_names_option_processing_result_0_1[6];

static const MR_DuFunctorDesc top_level__mercury_compile_main__top_level__mercury_compile_main__du_functor_desc_option_processing_result_0_1;

static const MR_DuFunctorDescPtr top_level__mercury_compile_main__top_level__mercury_compile_main__du_stag_ordered_option_processing_result_0_0[1];

static const MR_DuFunctorDescPtr top_level__mercury_compile_main__top_level__mercury_compile_main__du_stag_ordered_option_processing_result_0_1[1];

static const MR_DuPtagLayout top_level__mercury_compile_main__top_level__mercury_compile_main__du_ptag_ordered_option_processing_result_0[2];

static const MR_DuFunctorDescPtr top_level__mercury_compile_main__top_level__mercury_compile_main__du_name_ordered_option_processing_result_0[2];

static const MR_Integer top_level__mercury_compile_main__top_level__mercury_compile_main__functor_number_map_option_processing_result_0[2];

static MR_bool MR_CALL 
top_level__mercury_compile_main__IntroducedFrom__pred__read_augment_and_process_module_ok__1703__1_2_p_0(
  MR_Word ModulesToRecompile_35,
  MR_Word LambdaHeadVar__1_51);

static MR_bool MR_CALL 
top_level__mercury_compile_main__IntroducedFrom__pred__do_process_compiler_arg_make_interface__1472__1_1_p_0(
  MR_Word LambdaHeadVar__1_50);

static MR_bool MR_CALL 
top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_args__847__1_2_p_0(
  MR_Word InvokedByMmcMake_21,
  MR_Word HeadVar__2_61);

static void MR_CALL 
top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_query__770__1_1_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_query__770__1_1_p_0(
  MR_String * LambdaHeadVar__1_65,
  MR_Cont cont,
  void * cont_env_ptr);

static void MR_CALL 
top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_query__763__1_4_p_0(
  MR_Word StdOutStream_12,
  MR_String HeadVar__2_90);

static void MR_CALL 
top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_query__754__1_4_p_0(
  MR_Word StdOutStream_12,
  MR_String HeadVar__2_84);

static void MR_CALL 
top_level__mercury_compile_main____Compare____option_processing_result_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
top_level__mercury_compile_main____Unify____option_processing_result_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

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
  MR_Word ProgressStream_16,
  MR_Word ErrorStream_17,
  MR_Word Globals_18,
  MR_Word OpModeAugment_19,
  MR_Word InvokedByMmcMake_20,
  MR_Word MaybeTimestamp_21,
  MR_Word FindTimestampFiles_22,
  MR_Word BurdenedModule_23,
  MR_Word * ExtraObjFiles_24,
  MR_Word STATE_VARIABLE_Specs_0_34,
  MR_Word * STATE_VARIABLE_Specs_35,
  MR_Word STATE_VARIABLE_HaveParseTreeMaps_0_36,
  MR_Word * STATE_VARIABLE_HaveParseTreeMaps_37);

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
  MR_Word STATE_VARIABLE_HaveParseTreeMaps_0_65,
  MR_Word * STATE_VARIABLE_HaveParseTreeMaps_66);

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
  MR_Word STATE_VARIABLE_HLDS_0_60,
  MR_Word * ExtraObjFiles_24,
  MR_Word STATE_VARIABLE_Specs_0_61,
  MR_Word * STATE_VARIABLE_Specs_62,
  MR_Word STATE_VARIABLE_DumpInfo_0_63,
  MR_Word * STATE_VARIABLE_DumpInfo_64);

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
  MR_Word BurdenedModule_3,
  MR_String * ModuleToLink_4);

static void MR_CALL 
top_level__mercury_compile_main__find_timestamp_files_2_6_p_0(
  MR_Word Globals_7,
  MR_Word TimestampExt_8,
  MR_Word ModuleName_9,
  MR_Word * TimestampFiles_10);

static void MR_CALL 
top_level__mercury_compile_main__usual_find_target_files_6_p_0(
  MR_Word Globals_7,
  MR_Word TargetExt_8,
  MR_Word ModuleName_9,
  MR_Word * TargetFiles_10);

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
top_level__mercury_compile_main__real_main_2_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
top_level__mercury_compile_main__real_main_2_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
top_level__mercury_compile_main__real_main_2_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
top_level__mercury_compile_main__real_main_2_p_0_2(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Cont cont,
  void * cont_env_ptr);

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
  MR_Word STATE_VARIABLE_HaveParseTreeMaps_0_12,
  MR_Word * STATE_VARIABLE_HaveParseTreeMaps_13);

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
  MR_Word STATE_VARIABLE_HaveParseTreeMaps_0_14,
  MR_Word * STATE_VARIABLE_HaveParseTreeMaps_15,
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
  MR_Word STATE_VARIABLE_HaveParseTreeMaps_0_40,
  MR_Word * STATE_VARIABLE_HaveParseTreeMaps_41,
  MR_Word STATE_VARIABLE_Specs_0_42,
  MR_Word * STATE_VARIABLE_Specs_43);

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
  MR_Word STATE_VARIABLE_HaveParseTreeMaps_0_47,
  MR_Word * STATE_VARIABLE_HaveParseTreeMaps_48,
  MR_Word STATE_VARIABLE_Specs_0_49,
  MR_Word * STATE_VARIABLE_Specs_50);

static void MR_CALL 
top_level__mercury_compile_main__do_process_compiler_arg_13_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

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
  MR_Word STATE_VARIABLE_HaveParseTreeMaps_0_45,
  MR_Word * STATE_VARIABLE_HaveParseTreeMaps_46);

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
top_level__mercury_compile_main__read_augment_and_process_module_ok_17_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
top_level__mercury_compile_main__read_augment_and_process_module_ok_17_p_0_3(
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
top_level__mercury_compile_main__read_augment_and_process_module_ok_17_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

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
  MR_Word * STATE_VARIABLE_Specs_45,
  MR_Word STATE_VARIABLE_HaveParseTreeMaps_0_46,
  MR_Word * STATE_VARIABLE_HaveParseTreeMaps_47);

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

static MR_bool MR_CALL 
top_level__mercury_compile_main__process_options_std_7_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static MR_bool MR_CALL 
top_level__mercury_compile_main__process_options_std_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
top_level__mercury_compile_main__process_options_std_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
top_level__mercury_compile_main__process_options_std_7_p_0(
  MR_Word ProgressStream_8,
  MR_Word ErrorStream_9,
  MR_Word DefaultOptionTable_10,
  MR_Word CmdLineArgs_11,
  MR_Word * Result_12);

static void MR_CALL 
top_level__mercury_compile_main__process_options_std_config_file_11_p_0(
  MR_Word ProgressStream_12,
  MR_Word FlagsArgsOptionTable_13,
  MR_Word EnvVarMap_14,
  MR_Word WarnUndef_15,
  MR_Word * DetectedGradeFlags_16,
  MR_Word OptionsVariables0_17,
  MR_Word * OptionsVariables_18,
  MR_Word * MaybeMCFlags_19,
  MR_Word * Specs_20);

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

static MR_bool MR_CALL 
top_level__mercury_compile_main____Unify____option_processing_result_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
top_level__mercury_compile_main____Compare____option_processing_result_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box top_level__mercury_compile_main_scalar_common_1[29][2];

static /* final */ const MR_Box top_level__mercury_compile_main_scalar_common_2[17][3];

static /* final */ const MR_Box top_level__mercury_compile_main_scalar_common_3[5][1];

static /* final */ const MR_Box top_level__mercury_compile_main_scalar_common_4[7][5];

static /* final */ const MR_Box top_level__mercury_compile_main_scalar_common_5[3][9];

static /* final */ const MR_Box top_level__mercury_compile_main_scalar_common_6[2][7];

static /* final */ const MR_Box top_level__mercury_compile_main_scalar_common_7[2][4];

static /* final */ const MR_Box top_level__mercury_compile_main_scalar_common_8[2][8];

static /* final */ const MR_Box top_level__mercury_compile_main_scalar_common_9[1][13];

static /* final */ const MR_Box top_level__mercury_compile_main_scalar_common_10[1][18];




static /* final */ const MR_Box top_level__mercury_compile_main_scalar_common_1[29][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&libs__optimization_options__libs__optimization_options__type_ctor_info_optimization_option_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&top_level__mercury_compile_main_scalar_common_2[0]))
  },
  /* row   4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0))
  },
  /* row   5 */
  {
    ((MR_Box) (&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_module_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_src_0))
  },
  /* row   6 */
  {
    ((MR_Box) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   7 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row   8 */
  {
    ((MR_Box) (MR_mkword(3, &top_level__mercury_compile_main_scalar_common_1[7]))),
    ((MR_Box) (MR_mkword(1, &top_level__mercury_compile_main_scalar_common_1[6])))
  },
  /* row   9 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row  10 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error:"))
  },
  /* row  11 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--generate-standalone-interface"))
  },
  /* row  12 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "is not required for target language"))
  },
  /* row  13 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error reading module name from standard input:"))
  },
  /* row  14 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Could not find the following files:"))
  },
  /* row  15 */
  {
    ((MR_Box) (MR_mkword(3, &top_level__mercury_compile_main_scalar_common_1[14]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  16 */
  {
    ((MR_Box) (MR_mkword(3, &top_level__mercury_compile_main_scalar_common_2[1]))),
    ((MR_Box) (MR_mkword(1, &top_level__mercury_compile_main_scalar_common_1[15])))
  },
  /* row  17 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Could not find many files, including these:"))
  },
  /* row  18 */
  {
    ((MR_Box) (MR_mkword(3, &top_level__mercury_compile_main_scalar_common_1[17]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  19 */
  {
    ((MR_Box) (MR_mkword(3, &top_level__mercury_compile_main_scalar_common_2[1]))),
    ((MR_Box) (MR_mkword(1, &top_level__mercury_compile_main_scalar_common_1[18])))
  },
  /* row  20 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "and thus could not create some interface files."))
  },
  /* row  21 */
  {
    ((MR_Box) (MR_mkword(3, &top_level__mercury_compile_main_scalar_common_1[20]))),
    ((MR_Box) (MR_mkword(1, &top_level__mercury_compile_main_scalar_common_1[6])))
  },
  /* row  22 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    (MR_Box) ((MR_Unsigned) 2U)
  },
  /* row  23 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    (MR_Box) ((MR_Unsigned) 3U)
  },
  /* row  24 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 1U)),
    (MR_Box) ((MR_Unsigned) 0U)
  },
  /* row  25 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    (MR_Box) ((MR_Unsigned) 4U)
  },
  /* row  26 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    (MR_Box) ((MR_Unsigned) 5U)
  },
  /* row  27 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    (MR_Box) ((MR_Unsigned) 6U)
  },
  /* row  28 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    (MR_Box) ((MR_Unsigned) 21U)
  },
};

static /* final */ const MR_Box top_level__mercury_compile_main_scalar_common_2[17][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&top_level__mercury_compile_main_scalar_common_1[0])),
    ((MR_Box) (&parse_tree__module_baggage__parse_tree__module_baggage__type_ctor_info_burdened_module_0))
  },
  /* row   1 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 36U)),
    ((MR_Box) ((MR_Integer) 999)),
    ((MR_Box) ((MR_String) ""))
  },
  /* row   2 */
  {
    ((MR_Box) (&top_level__mercury_compile_main_scalar_common_4[0])),
    ((MR_Box) (top_level__mercury_compile_main__process_options_std_7_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   3 */
  {
    ((MR_Box) (&top_level__mercury_compile_main_scalar_common_4[1])),
    ((MR_Box) (top_level__mercury_compile_main__process_options_std_7_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   4 */
  {
    ((MR_Box) (&top_level__mercury_compile_main_scalar_common_5[0])),
    ((MR_Box) (top_level__mercury_compile_main__process_options_std_7_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   5 */
  {
    ((MR_Box) (&top_level__mercury_compile_main_scalar_common_2[2])),
    ((MR_Box) (&top_level__mercury_compile_main_scalar_common_2[3])),
    ((MR_Box) (&top_level__mercury_compile_main_scalar_common_2[4]))
  },
  /* row   6 */
  {
    ((MR_Box) (&top_level__mercury_compile_main_scalar_common_7[0])),
    ((MR_Box) (top_level__mercury_compile_main__do_op_mode_query_6_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   7 */
  {
    ((MR_Box) (&top_level__mercury_compile_main_scalar_common_8[0])),
    ((MR_Box) (top_level__mercury_compile_main__handle_not_found_files_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   8 */
  {
    ((MR_Box) (&top_level__mercury_compile_main_scalar_common_6[1])),
    ((MR_Box) (top_level__mercury_compile_main__deps_make_ints_9_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   9 */
  {
    ((MR_Box) (&top_level__mercury_compile_main_scalar_common_8[0])),
    ((MR_Box) (top_level__mercury_compile_main__deps_make_ints_9_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  10 */
  {
    ((MR_Box) (&top_level__mercury_compile_main_scalar_common_7[1])),
    ((MR_Box) (top_level__mercury_compile_main__do_process_compiler_arg_make_interface_9_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  11 */
  {
    ((MR_Box) (&top_level__mercury_compile_main_scalar_common_4[3])),
    ((MR_Box) (top_level__mercury_compile_main__read_augment_and_process_module_ok_17_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  12 */
  {
    ((MR_Box) (&top_level__mercury_compile_main_scalar_common_4[5])),
    ((MR_Box) (top_level__mercury_compile_main__real_main_2_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  13 */
  {
    ((MR_Box) (&top_level__mercury_compile_main_scalar_common_4[0])),
    ((MR_Box) (top_level__mercury_compile_main__real_main_2_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  14 */
  {
    ((MR_Box) (&top_level__mercury_compile_main_scalar_common_4[1])),
    ((MR_Box) (top_level__mercury_compile_main__real_main_2_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  15 */
  {
    ((MR_Box) (&top_level__mercury_compile_main_scalar_common_4[6])),
    ((MR_Box) (top_level__mercury_compile_main__maybe_prepare_for_intermodule_analysis_9_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  16 */
  {
    ((MR_Box) (&top_level__mercury_compile_main_scalar_common_4[6])),
    ((MR_Box) (top_level__mercury_compile_main__prepare_for_intermodule_analysis_9_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box top_level__mercury_compile_main_scalar_common_3[5][1] = {
  /* row   0 */
  { ((MR_Box) ((MR_Unsigned) 0U)) },
  /* row   1 */
  { (MR_Box) ((MR_Unsigned) 0U) },
  /* row   2 */
  { (MR_Box) ((MR_Unsigned) 34U) },
  /* row   3 */
  { (MR_Box) ((MR_Unsigned) 22U) },
  /* row   4 */
  { (MR_Box) ((MR_Unsigned) 14U) },
};

static /* final */ const MR_Box top_level__mercury_compile_main_scalar_common_4[7][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0)),
    ((MR_Box) (&libs__options__libs__options__type_ctor_info_option_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&libs__options__libs__options__type_ctor_info_option_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&top_level__mercury_compile_main__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__module_baggage__parse_tree__module_baggage__type_ctor_info_burdened_module_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__module_baggage__parse_tree__module_baggage__type_ctor_info_burdened_module_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&libs__op_mode__libs__op_mode__type_ctor_info_op_mode_invoked_by_mmc_make_0)),
    ((MR_Box) (&libs__op_mode__libs__op_mode__type_ctor_info_op_mode_invoked_by_mmc_make_0))
  },
  /* row   5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&libs__options__libs__options__type_ctor_info_option_0)),
    ((MR_Box) (&mercury__getopt__getopt__type_ctor_info_option_data_0))
  },
  /* row   6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
};

static /* final */ const MR_Box top_level__mercury_compile_main_scalar_common_5[3][9] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&libs__options__libs__options__type_ctor_info_option_0)),
    ((MR_Box) (&mercury__getopt__getopt__type_ctor_info_special_data_0)),
    ((MR_Box) (&top_level__mercury_compile_main__tree234__pti_tree234_2__plain_libs__options__type_ctor_info_option_0__plain_getopt__type_ctor_info_option_data_0)),
    ((MR_Box) (&top_level__mercury_compile_main__getopt__pti_maybe_option_table_1__plain_libs__options__type_ctor_info_option_0)),
    ((MR_Box) (&top_level__mercury_compile_main__cord__pti_cord_1__plain_libs__optimization_options__type_ctor_info_optimization_option_0)),
    ((MR_Box) (&top_level__mercury_compile_main__cord__pti_cord_1__plain_libs__optimization_options__type_ctor_info_optimization_option_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&parse_tree__file_names__parse_tree__file_names__type_ctor_info_ext_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&top_level__mercury_compile_main__list__pti_list_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&libs__maybe_util__libs__maybe_util__type_ctor_info_maybe_succeeded_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box top_level__mercury_compile_main_scalar_common_6[2][7] = {
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

static /* final */ const MR_Box top_level__mercury_compile_main_scalar_common_7[2][4] = {
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

static /* final */ const MR_Box top_level__mercury_compile_main_scalar_common_8[2][8] = {
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

static /* final */ const MR_Box top_level__mercury_compile_main_scalar_common_9[1][13] = {
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

static /* final */ const MR_Box top_level__mercury_compile_main_scalar_common_10[1][18] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 15)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&libs__op_mode__libs__op_mode__type_ctor_info_op_mode_augment_0)),
    ((MR_Box) (&libs__op_mode__libs__op_mode__type_ctor_info_op_mode_invoked_by_mmc_make_0)),
    ((MR_Box) (&top_level__mercury_compile_main__maybe__pti_maybe_1__plain_libs__timestamp__type_ctor_info_timestamp_0)),
    ((MR_Box) (&top_level__mercury_compile_main____vpti_pred_4__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_list__ti_list_1builtin__type_ctor_info_string_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0)),
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


static const MR_FA_PseudoTypeInfo_Struct2 top_level__mercury_compile_main__tree234__pti_tree234_2__plain_libs__options__type_ctor_info_option_0__plain_getopt__type_ctor_info_option_data_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&libs__options__libs__options__type_ctor_info_option_0),
    (MR_PseudoTypeInfo) (&mercury__getopt__getopt__type_ctor_info_option_data_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 top_level__mercury_compile_main__getopt__pti_maybe_option_table_1__plain_libs__options__type_ctor_info_option_0 = {
  &mercury__getopt__getopt__type_ctor_info_maybe_option_table_1,
  { (MR_PseudoTypeInfo) (&libs__options__libs__options__type_ctor_info_option_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 top_level__mercury_compile_main__cord__pti_cord_1__plain_libs__optimization_options__type_ctor_info_optimization_option_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  { (MR_PseudoTypeInfo) (&libs__optimization_options__libs__optimization_options__type_ctor_info_optimization_option_0) }
};

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

static const MR_FA_PseudoTypeInfo_Struct1 top_level__mercury_compile_main__list__pti_list_1__plain_builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 top_level__mercury_compile_main__maybe__pti_maybe_1__plain_libs__timestamp__type_ctor_info_timestamp_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  { (MR_PseudoTypeInfo) (&libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0) }
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

static const MR_FA_TypeInfo_Struct1 top_level__mercury_compile_main__list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0) }
};

static const MR_PseudoTypeInfo top_level__mercury_compile_main__top_level__mercury_compile_main__field_types_option_processing_result_0_0[1] = { (MR_PseudoTypeInfo) (&top_level__mercury_compile_main__list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0) };

static const MR_ConstString top_level__mercury_compile_main__top_level__mercury_compile_main__field_names_option_processing_result_0_0[1] = { (MR_String) "oprf_fatal_errors" };

static const MR_DuFunctorDesc top_level__mercury_compile_main__top_level__mercury_compile_main__du_functor_desc_option_processing_result_0_0 = {
  (MR_String) "opr_failure",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  top_level__mercury_compile_main__top_level__mercury_compile_main__field_types_option_processing_result_0_0,
  top_level__mercury_compile_main__top_level__mercury_compile_main__field_names_option_processing_result_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo top_level__mercury_compile_main__top_level__mercury_compile_main__field_types_option_processing_result_0_1[6] = {
  (MR_PseudoTypeInfo) (&top_level__mercury_compile_main__list__ti_list_1builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&make__options_file__make__options_file__type_ctor_info_options_variables_0),
  (MR_PseudoTypeInfo) (&top_level__mercury_compile_main__list__ti_list_1builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&top_level__mercury_compile_main__list__ti_list_1builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&top_level__mercury_compile_main__list__ti_list_1builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&top_level__mercury_compile_main__list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0)
};

static const MR_ConstString top_level__mercury_compile_main__top_level__mercury_compile_main__field_names_option_processing_result_0_1[6] = {
  (MR_String) "oprs_detected_grade_flags",
  (MR_String) "oprs_options_variables",
  (MR_String) "oprs_mcflags",
  (MR_String) "oprs_option_args",
  (MR_String) "oprs_nonoption_args",
  (MR_String) "oprs_nonfatal_errors"
};

static const MR_DuFunctorDesc top_level__mercury_compile_main__top_level__mercury_compile_main__du_functor_desc_option_processing_result_0_1 = {
  (MR_String) "opr_success",
  INT16_C(6),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  top_level__mercury_compile_main__top_level__mercury_compile_main__field_types_option_processing_result_0_1,
  top_level__mercury_compile_main__top_level__mercury_compile_main__field_names_option_processing_result_0_1,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr top_level__mercury_compile_main__top_level__mercury_compile_main__du_stag_ordered_option_processing_result_0_0[1] = { &top_level__mercury_compile_main__top_level__mercury_compile_main__du_functor_desc_option_processing_result_0_0 };

static const MR_DuFunctorDescPtr top_level__mercury_compile_main__top_level__mercury_compile_main__du_stag_ordered_option_processing_result_0_1[1] = { &top_level__mercury_compile_main__top_level__mercury_compile_main__du_functor_desc_option_processing_result_0_1 };

static const MR_DuPtagLayout top_level__mercury_compile_main__top_level__mercury_compile_main__du_ptag_ordered_option_processing_result_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    top_level__mercury_compile_main__top_level__mercury_compile_main__du_stag_ordered_option_processing_result_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    top_level__mercury_compile_main__top_level__mercury_compile_main__du_stag_ordered_option_processing_result_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr top_level__mercury_compile_main__top_level__mercury_compile_main__du_name_ordered_option_processing_result_0[2] = {
  &top_level__mercury_compile_main__top_level__mercury_compile_main__du_functor_desc_option_processing_result_0_0,
  &top_level__mercury_compile_main__top_level__mercury_compile_main__du_functor_desc_option_processing_result_0_1
};

static const MR_Integer top_level__mercury_compile_main__top_level__mercury_compile_main__functor_number_map_option_processing_result_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct top_level__mercury_compile_main__top_level__mercury_compile_main__type_ctor_info_option_processing_result_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (top_level__mercury_compile_main____Unify____option_processing_result_0_0_10001)),
  ((MR_Box) (top_level__mercury_compile_main____Compare____option_processing_result_0_0_10001)),
  (MR_String) "top_level.mercury_compile_main",
  (MR_String) "option_processing_result",
  { top_level__mercury_compile_main__top_level__mercury_compile_main__du_name_ordered_option_processing_result_0 },
  { top_level__mercury_compile_main__top_level__mercury_compile_main__du_ptag_ordered_option_processing_result_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  top_level__mercury_compile_main__top_level__mercury_compile_main__functor_number_map_option_processing_result_0,

};

static MR_bool MR_CALL 
top_level__mercury_compile_main__IntroducedFrom__pred__read_augment_and_process_module_ok__1703__1_2_p_0(
  MR_Word ModulesToRecompile_35,
  MR_Word LambdaHeadVar__1_51)
{
  MR_bool succeeded;
  MR_Word PTMS_39 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__1_51, (MR_Integer) 1))));
  MR_Word Var_52 = ((MR_Word) ((MR_hl_field(0, PTMS_39, (MR_Integer) 0))));

  succeeded = mercury__list__member_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (Var_52)), ModulesToRecompile_35);
  return succeeded;
}

static MR_bool MR_CALL 
top_level__mercury_compile_main__IntroducedFrom__pred__do_process_compiler_arg_make_interface__1472__1_1_p_0(
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
top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_args__847__1_2_p_0(
  MR_Word InvokedByMmcMake_21,
  MR_Word HeadVar__2_61)
{
  MR_bool succeeded = (InvokedByMmcMake_21 == HeadVar__2_61);

  return succeeded;
}

static void MR_CALL 
top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_query__770__1_1_p_0_1(
  void * env_ptr_arg)
{
  struct top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_query__770__1_1_p_0_env_0_s * env_ptr = (struct top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_query__770__1_1_p_0_env_0_s *) (env_ptr_arg);

  switch ((env_ptr)->top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_query__770__1_1_p_0_env_0__DocUndoc_30) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      (env_ptr)->top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_query__770__1_1_p_0_env_0__DocStr_31 = (MR_String) "DOC";
      break;
    case (MR_Integer) 1:
      (env_ptr)->top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_query__770__1_1_p_0_env_0__DocStr_31 = (MR_String) "UNDOC";
      break;
  }
  (env_ptr)->top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_query__770__1_1_p_0_env_0__Var_67 = (MR_String) " ";
  (env_ptr)->top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_query__770__1_1_p_0_env_0__Var_69 = (MR_String) ".m\n";
  (env_ptr)->top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_query__770__1_1_p_0_env_0__Var_68 = mercury__string__f_43_43_2_f_0((env_ptr)->top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_query__770__1_1_p_0_env_0__ModuleName_29, (env_ptr)->top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_query__770__1_1_p_0_env_0__Var_69);
  (env_ptr)->top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_query__770__1_1_p_0_env_0__Var_66 = mercury__string__f_43_43_2_f_0((env_ptr)->top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_query__770__1_1_p_0_env_0__Var_67, (env_ptr)->top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_query__770__1_1_p_0_env_0__Var_68);
  *((env_ptr)->top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_query__770__1_1_p_0_env_0__LambdaHeadVar__1_65) = mercury__string__f_43_43_2_f_0((env_ptr)->top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_query__770__1_1_p_0_env_0__DocStr_31, (env_ptr)->top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_query__770__1_1_p_0_env_0__Var_66);
  ((env_ptr)->top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_query__770__1_1_p_0_env_0__cont)((env_ptr)->top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_query__770__1_1_p_0_env_0__cont_env_ptr);
}

static void MR_CALL 
top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_query__770__1_1_p_0(
  MR_String * LambdaHeadVar__1_65,
  MR_Cont cont,
  void * cont_env_ptr)
{
  struct top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_query__770__1_1_p_0_env_0_s env;

  (env).top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_query__770__1_1_p_0_env_0__LambdaHeadVar__1_65 = LambdaHeadVar__1_65;
  (env).top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_query__770__1_1_p_0_env_0__cont = cont;
  (env).top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_query__770__1_1_p_0_env_0__cont_env_ptr = cont_env_ptr;
  mercury__library__stdlib_module_doc_undoc_2_p_1(&(env).top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_query__770__1_1_p_0_env_0__ModuleName_29, &(env).top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_query__770__1_1_p_0_env_0__DocUndoc_30, top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_query__770__1_1_p_0_1, &env);
}

static void MR_CALL 
top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_query__763__1_4_p_0(
  MR_Word StdOutStream_12,
  MR_String HeadVar__2_90)
{
  mercury__io__print_line_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), StdOutStream_12, ((MR_Box) (HeadVar__2_90)));
}

static void MR_CALL 
top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_query__754__1_4_p_0(
  MR_Word StdOutStream_12,
  MR_String HeadVar__2_84)
{
  mercury__io__print_line_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), StdOutStream_12, ((MR_Box) (HeadVar__2_84)));
}

static void MR_CALL 
top_level__mercury_compile_main____Compare____option_processing_result_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_23 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_24 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_23 == CastY_24);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0))
    if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 0))
    {
      MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));

      mercury__builtin__compare_3_p_0((MR_Word) (&top_level__mercury_compile_main_scalar_common_1[2]), HeadVar__1_1, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
    }
    else
      *HeadVar__1_1 = (MR_Integer) 1;
  else
  if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 0))
    *HeadVar__1_1 = (MR_Integer) 2;
  else
  {
    MR_Word ArgX1_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgY1_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ArgX2_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgY2_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word ArgX3_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgY3_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 2))));
    MR_Word ArgX4_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 3))));
    MR_Word ArgY4_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 3))));
    MR_Word ArgX5_18 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 4))));
    MR_Word ArgY5_19 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 4))));
    MR_Word ArgX6_21 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 5))));
    MR_Word ArgY6_22 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 5))));
    MR_Word SubResult1_8;

    mercury__builtin__compare_3_p_0((MR_Word) (&top_level__mercury_compile_main_scalar_common_1[0]), &SubResult1_8, ((MR_Box) (ArgX1_6)), ((MR_Box) (ArgY1_7)));
    succeeded = (SubResult1_8 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_8;
    else
    {
      MR_Word SubResult2_11;

      make__options_file____Compare____options_variables_0_0(&SubResult2_11, ArgX2_9, ArgY2_10);
      succeeded = (SubResult2_11 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_11;
      else
      {
        MR_Word SubResult3_14;

        mercury__builtin__compare_3_p_0((MR_Word) (&top_level__mercury_compile_main_scalar_common_1[0]), &SubResult3_14, ((MR_Box) (ArgX3_12)), ((MR_Box) (ArgY3_13)));
        succeeded = (SubResult3_14 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult3_14;
        else
        {
          MR_Word SubResult4_17;

          mercury__builtin__compare_3_p_0((MR_Word) (&top_level__mercury_compile_main_scalar_common_1[0]), &SubResult4_17, ((MR_Box) (ArgX4_15)), ((MR_Box) (ArgY4_16)));
          succeeded = (SubResult4_17 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult4_17;
          else
          {
            MR_Word SubResult5_20;

            mercury__builtin__compare_3_p_0((MR_Word) (&top_level__mercury_compile_main_scalar_common_1[0]), &SubResult5_20, ((MR_Box) (ArgX5_18)), ((MR_Box) (ArgY5_19)));
            succeeded = (SubResult5_20 != (MR_Integer) 0);
            if (succeeded)
              *HeadVar__1_1 = SubResult5_20;
            else
              mercury__builtin__compare_3_p_0((MR_Word) (&top_level__mercury_compile_main_scalar_common_1[2]), HeadVar__1_1, ((MR_Box) (ArgX6_21)), ((MR_Box) (ArgY6_22)));
          }
        }
      }
    }
  }
}

static MR_bool MR_CALL 
top_level__mercury_compile_main____Unify____option_processing_result_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_17 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_18 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_17 == CastY_18);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 0))
  {
    MR_Word TypeInfo_19_19;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
    if (succeeded)
    {
      ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
      TypeInfo_19_19 = (MR_Word) (&top_level__mercury_compile_main_scalar_common_1[2]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_19_19, ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
    }
  }
  else
  {
    MR_Word TypeInfo_20_20;
    MR_Word TypeInfo_22_22;
    MR_Word TypeInfo_23_23;
    MR_Word TypeInfo_24_24;
    MR_Word TypeInfo_25_25;
    MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_6;
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_8;
    MR_Word ArgX3_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 2))));
    MR_Word ArgY3_10;
    MR_Word ArgX4_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 3))));
    MR_Word ArgY4_12;
    MR_Word ArgX5_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 4))));
    MR_Word ArgY5_14;
    MR_Word ArgX6_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 5))));
    MR_Word ArgY6_16;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
    if (succeeded)
    {
      ArgY1_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      ArgY2_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      ArgY3_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 2))));
      ArgY4_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 3))));
      ArgY5_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 4))));
      ArgY6_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 5))));
      TypeInfo_20_20 = (MR_Word) (&top_level__mercury_compile_main_scalar_common_1[0]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_20_20, ((MR_Box) (ArgX1_5)), ((MR_Box) (ArgY1_6)));
      if (succeeded)
      {
        succeeded = make__options_file____Unify____options_variables_0_0(ArgX2_7, ArgY2_8);
        if (succeeded)
        {
          TypeInfo_22_22 = (MR_Word) (&top_level__mercury_compile_main_scalar_common_1[0]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_22_22, ((MR_Box) (ArgX3_9)), ((MR_Box) (ArgY3_10)));
          if (succeeded)
          {
            TypeInfo_23_23 = (MR_Word) (&top_level__mercury_compile_main_scalar_common_1[0]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_23_23, ((MR_Box) (ArgX4_11)), ((MR_Box) (ArgY4_12)));
            if (succeeded)
            {
              TypeInfo_24_24 = (MR_Word) (&top_level__mercury_compile_main_scalar_common_1[0]);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_24_24, ((MR_Box) (ArgX5_13)), ((MR_Box) (ArgY5_14)));
              if (succeeded)
              {
                TypeInfo_25_25 = (MR_Word) (&top_level__mercury_compile_main_scalar_common_1[2]);
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_25_25, ((MR_Box) (ArgX6_15)), ((MR_Box) (ArgY6_16)));
              }
            }
          }
        }
      }
    }
  }
  return succeeded;
}

static void MR_CALL 
top_level__mercury_compile_main____Compare____file_or_module_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_8 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_9 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_8 == CastY_9);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0))
    if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 0))
    {
      MR_String ArgX1_4 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
      MR_String ArgY1_5 = ((MR_String) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));

      mercury__private_builtin__builtin_compare_string_3_p_0(HeadVar__1_1, ArgX1_4, ArgY1_5);
    }
    else
      *HeadVar__1_1 = (MR_Integer) 1;
  else
  if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 0))
    *HeadVar__1_1 = (MR_Integer) 2;
  else
  {
    MR_Word ArgX1_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgY1_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));

    mdbcomp__sym_name____Compare____sym_name_0_0(HeadVar__1_1, ArgX1_6, ArgY1_7);
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
top_level__mercury_compile_main__augment_and_process_module_15_p_0(
  MR_Word ProgressStream_16,
  MR_Word ErrorStream_17,
  MR_Word Globals_18,
  MR_Word OpModeAugment_19,
  MR_Word InvokedByMmcMake_20,
  MR_Word MaybeTimestamp_21,
  MR_Word FindTimestampFiles_22,
  MR_Word BurdenedModule_23,
  MR_Word * ExtraObjFiles_24,
  MR_Word STATE_VARIABLE_Specs_0_34,
  MR_Word * STATE_VARIABLE_Specs_35,
  MR_Word STATE_VARIABLE_HaveParseTreeMaps_0_36,
  MR_Word * STATE_VARIABLE_HaveParseTreeMaps_37)
{
  MR_bool succeeded;
  MR_Word Baggage0_28 = ((MR_Word) ((MR_hl_field(0, BurdenedModule_23, (MR_Integer) 0))));
  MR_Word ParseTreeModuleSrc_29 = ((MR_Word) ((MR_hl_field(0, BurdenedModule_23, (MR_Integer) 1))));
  MR_Word AugCompUnit_30;
  MR_Word Baggage_31;
  MR_Word Errors_32;
  MR_Word STATE_VARIABLE_Specs_40_40;
  MR_Word STATE_VARIABLE_HaveParseTreeMaps_41_41;
  MR_Word STATE_VARIABLE_Specs_43_43;
  MR_Word Var_44;
  MR_Word Var_45;

  parse_tree__check_module_interface__check_module_interface_for_no_exports_4_p_0(Globals_18, ParseTreeModuleSrc_29, STATE_VARIABLE_Specs_0_34, &STATE_VARIABLE_Specs_40_40);
  parse_tree__grab_modules__grab_qual_imported_modules_augment_11_p_0(ProgressStream_16, Globals_18, MaybeTimestamp_21, ParseTreeModuleSrc_29, &AugCompUnit_30, Baggage0_28, &Baggage_31, STATE_VARIABLE_HaveParseTreeMaps_0_36, &STATE_VARIABLE_HaveParseTreeMaps_41_41);
  Errors_32 = ((MR_Word) ((MR_hl_field(0, Baggage_31, (MR_Integer) 7))));
  Var_44 = parse_tree__parse_error__get_read_module_specs_1_f_0(Errors_32);
  STATE_VARIABLE_Specs_43_43 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), Var_44, STATE_VARIABLE_Specs_40_40);
  Var_45 = ((MR_Word) ((MR_hl_field(0, Errors_32, (MR_Integer) 0))));
  succeeded = mercury__set__is_empty_1_p_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_fatal_read_module_error_0), Var_45);
  if (succeeded)
  {
    MR_Word Var_33;

    top_level__mercury_compile_main__process_augmented_module_17_p_0(ProgressStream_16, ErrorStream_17, Globals_18, OpModeAugment_19, InvokedByMmcMake_20, Baggage_31, AugCompUnit_30, FindTimestampFiles_22, ExtraObjFiles_24, (MR_Word) ((MR_Unsigned) 0U), &Var_33, STATE_VARIABLE_Specs_43_43, STATE_VARIABLE_Specs_35, STATE_VARIABLE_HaveParseTreeMaps_41_41, STATE_VARIABLE_HaveParseTreeMaps_37);
  }
  else
  {
    *ExtraObjFiles_24 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_HaveParseTreeMaps_37 = STATE_VARIABLE_HaveParseTreeMaps_41_41;
    *STATE_VARIABLE_Specs_35 = STATE_VARIABLE_Specs_43_43;
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
  MR_Word STATE_VARIABLE_HaveParseTreeMaps_0_65,
  MR_Word * STATE_VARIABLE_HaveParseTreeMaps_66)
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
  top_level__mercury_compile_make_hlds__make_hlds_pass_22_p_0(ProgressStream_18, ErrorStream_19, Globals_31, OpModeAugment_21, InvokedByMmcMake_22, WriteDFile_32, Baggage_23, AugCompUnit_24, &HLDS1_34, &QualInfo_35, &MaybeTimestampMap_36, &UndefTypes_37, &UndefModes_38, &PreHLDSErrors_39, STATE_VARIABLE_DumpInfo_0_61, &STATE_VARIABLE_DumpInfo_69_69, STATE_VARIABLE_Specs_0_63, &STATE_VARIABLE_Specs_70_70, STATE_VARIABLE_HaveParseTreeMaps_0_65, STATE_VARIABLE_HaveParseTreeMaps_66);
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

    libs__globals__lookup_bool_option_3_p_0(Globals_31, (MR_Integer) 73, &Verbose_43);
    libs__globals__lookup_bool_option_3_p_0(Globals_31, (MR_Integer) 83, &Stats_44);
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
              top_level__mercury_compile_middle_passes__output_trans_opt_file_8_p_0(ProgressStream_18, HLDS21_45, STATE_VARIABLE_Specs_74_74, STATE_VARIABLE_Specs_64, STATE_VARIABLE_DumpInfo_73_73, STATE_VARIABLE_DumpInfo_62);
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
              check_hlds__xml_documentation__xml_documentation_4_p_0(ProgressStream_18, HLDS21_45);
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
                      MR_hl_field(0, NoOptUnusedArgsOptTuple_48, 0) = (MR_Box) ((((packed_word_0 & (~((MR_Unsigned) 32U)))) | (((MR_Unsigned) ((MR_Integer) 1) << 5))));
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
  MR_Word conv3_HeadVar__4_4;

  parse_tree__module_cmds__touch_file_datestamp_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_String) (wrapper_arg_1)), &conv3_HeadVar__4_4);
  *wrapper_arg_2 = ((MR_Box) (conv3_HeadVar__4_4));
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
  MR_Word STATE_VARIABLE_HLDS_0_60,
  MR_Word * ExtraObjFiles_24,
  MR_Word STATE_VARIABLE_Specs_0_61,
  MR_Word * STATE_VARIABLE_Specs_62,
  MR_Word STATE_VARIABLE_DumpInfo_0_63,
  MR_Word * STATE_VARIABLE_DumpInfo_64)
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
  MR_Word STATE_VARIABLE_HLDS_69_69;
  MR_Word STATE_VARIABLE_HLDS_71_71;
  MR_Word STATE_VARIABLE_DumpInfo_72_72;
  MR_Word STATE_VARIABLE_Specs_73_73;
  MR_Word Var_34;

  libs__globals__lookup_bool_option_3_p_0(Globals_18, (MR_Integer) 73, &Verbose_28);
  libs__globals__lookup_bool_option_3_p_0(Globals_18, (MR_Integer) 83, &Stats_29);
  top_level__mercury_compile_main__maybe_output_prof_call_graph_8_p_0(ProgressStream_16, ErrorStream_17, Verbose_28, Stats_29, STATE_VARIABLE_HLDS_0_60, &STATE_VARIABLE_HLDS_69_69);
  top_level__mercury_compile_middle_passes__middle_pass_10_p_0(ProgressStream_16, ErrorStream_17, STATE_VARIABLE_HLDS_69_69, &STATE_VARIABLE_HLDS_71_71, STATE_VARIABLE_DumpInfo_0_63, &STATE_VARIABLE_DumpInfo_72_72, STATE_VARIABLE_Specs_0_61, &STATE_VARIABLE_Specs_73_73);
  libs__globals__lookup_bool_option_3_p_0(Globals_18, (MR_Integer) 313, &HighLevelCode_30);
  libs__globals__get_target_2_p_0(Globals_18, &Target_31);
  hlds__hlds_module__module_info_get_name_2_p_0(STATE_VARIABLE_HLDS_71_71, &ModuleName_32);
  parse_tree__file_names__module_name_to_file_name_5_p_0(Globals_18, (MR_String) "predicate \140top_level.mercury_compile_main.after_front_end_passes\'/15", (MR_Word) (MR_mkword(3, &top_level__mercury_compile_main_scalar_common_1[28])), ModuleName_32, &UsageFileName_33);
  mercury__io__file__remove_file_4_p_0(UsageFileName_33, &Var_34);
  FrontEndErrors_35 = parse_tree__error_util__contains_errors_or_warnings_treated_as_errors_2_f_0(Globals_18, STATE_VARIABLE_Specs_73_73);
  mercury__io__get_exit_status_3_p_0(&ExitStatus_36);
  succeeded = (FrontEndErrors_35 == (MR_Integer) 0);
  if (succeeded)
    succeeded = (ExitStatus_36 == (MR_Integer) 0);
  if (succeeded)
  {
    MR_Word Succeeded_40;
    MR_Word STATE_VARIABLE_HLDS_108_108;

    switch (Target_31) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word ExportDecls_44;

          backend_libs__export__get_foreign_export_decls_2_p_0(STATE_VARIABLE_HLDS_71_71, &ExportDecls_44);
          backend_libs__export__produce_header_file_6_p_0(ProgressStream_16, STATE_VARIABLE_HLDS_71_71, ExportDecls_44, ModuleName_32);
          switch (HighLevelCode_30) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word GlobalData_52;
                MR_Word LLDS_53;

                top_level__mercury_compile_llds_back_end__llds_backend_pass_10_p_0(ProgressStream_16, ErrorStream_17, STATE_VARIABLE_HLDS_71_71, &STATE_VARIABLE_HLDS_108_108, &GlobalData_52, &LLDS_53, STATE_VARIABLE_DumpInfo_72_72, STATE_VARIABLE_DumpInfo_64);
                top_level__mercury_compile_llds_back_end__llds_output_pass_10_p_0(ProgressStream_16, OpModeCodeGen_19, STATE_VARIABLE_HLDS_108_108, GlobalData_52, LLDS_53, ModuleName_32, &Succeeded_40, ExtraObjFiles_24);
                *STATE_VARIABLE_Specs_62 = STATE_VARIABLE_Specs_73_73;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word MLDS_120;
                MR_Word NewSpecs_121;
                MR_Word TargetCodeSucceeded_122;
                MR_Word Var_45;

                top_level__mercury_compile_mlds_back_end__mlds_backend_10_p_0(ProgressStream_16, ErrorStream_17, STATE_VARIABLE_HLDS_71_71, &Var_45, &MLDS_120, &NewSpecs_121, STATE_VARIABLE_DumpInfo_72_72, STATE_VARIABLE_DumpInfo_64);
                *STATE_VARIABLE_Specs_62 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), NewSpecs_121, STATE_VARIABLE_Specs_73_73);
                top_level__mercury_compile_mlds_back_end__mlds_to_high_level_c_6_p_0(ProgressStream_16, Globals_18, MLDS_120, &TargetCodeSucceeded_122);
                switch (OpModeCodeGen_19) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 1:
                  case (MR_Integer) 2:
                    switch (TargetCodeSucceeded_122) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        Succeeded_40 = (MR_Integer) 0;
                        break;
                      case (MR_Integer) 1:
                        {
                          MR_String C_File_46;
                          MR_Word TargetType_47;
                          MR_Word PIC_48;
                          MR_Word ObjExt_49;
                          MR_String O_File_51;
                          MR_Word Var_104;
                          MR_Word Var_50;

                          parse_tree__file_names__module_name_to_file_name_5_p_0(Globals_18, (MR_String) "predicate \140top_level.mercury_compile_main.after_front_end_passes\'/15", (MR_Word) (MR_mkword(3, &top_level__mercury_compile_main_scalar_common_1[22])), ModuleName_32, &C_File_46);
                          backend_libs__compile_target_code__get_linked_target_type_2_p_0(Globals_18, &TargetType_47);
                          backend_libs__compile_target_code__get_object_code_type_3_p_0(Globals_18, TargetType_47, &PIC_48);
                          backend_libs__compile_target_code__maybe_pic_object_file_extension_3_p_0(PIC_48, &ObjExt_49, &Var_50);
                          {
                            Var_104 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(3, Var_104, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                            MR_hl_field(3, Var_104, 1) = (MR_Box) ((MR_Unsigned) (ObjExt_49));
                          }
                          parse_tree__file_names__module_name_to_file_name_create_dirs_7_p_0(Globals_18, (MR_String) "predicate \140top_level.mercury_compile_main.after_front_end_passes\'/15", Var_104, ModuleName_32, &O_File_51);
                          backend_libs__compile_target_code__do_compile_c_file_8_p_0(Globals_18, ProgressStream_16, PIC_48, C_File_46, O_File_51, &Succeeded_40);
                          parse_tree__module_cmds__maybe_set_exit_status_3_p_0(Succeeded_40);
                        }
                        break;
                    }
                    break;
                  case (MR_Integer) 0:
                    Succeeded_40 = TargetCodeSucceeded_122;
                    break;
                }
                *ExtraObjFiles_24 = (MR_Word) ((MR_Unsigned) 0U);
                STATE_VARIABLE_HLDS_108_108 = STATE_VARIABLE_HLDS_71_71;
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

          top_level__mercury_compile_mlds_back_end__mlds_backend_10_p_0(ProgressStream_16, ErrorStream_17, STATE_VARIABLE_HLDS_71_71, &Var_37, &MLDS_38, &NewSpecs_39, STATE_VARIABLE_DumpInfo_72_72, STATE_VARIABLE_DumpInfo_64);
          *STATE_VARIABLE_Specs_62 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), NewSpecs_39, STATE_VARIABLE_Specs_73_73);
          top_level__mercury_compile_mlds_back_end__mlds_to_csharp_6_p_0(ProgressStream_16, STATE_VARIABLE_HLDS_71_71, MLDS_38, &Succeeded_40);
          *ExtraObjFiles_24 = (MR_Word) ((MR_Unsigned) 0U);
          STATE_VARIABLE_HLDS_108_108 = STATE_VARIABLE_HLDS_71_71;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word TargetCodeSucceeded_42;
          MR_Word MLDS_118;
          MR_Word NewSpecs_119;
          MR_Word Var_41;

          top_level__mercury_compile_mlds_back_end__mlds_backend_10_p_0(ProgressStream_16, ErrorStream_17, STATE_VARIABLE_HLDS_71_71, &Var_41, &MLDS_118, &NewSpecs_119, STATE_VARIABLE_DumpInfo_72_72, STATE_VARIABLE_DumpInfo_64);
          *STATE_VARIABLE_Specs_62 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), NewSpecs_119, STATE_VARIABLE_Specs_73_73);
          top_level__mercury_compile_mlds_back_end__mlds_to_java_6_p_0(ProgressStream_16, STATE_VARIABLE_HLDS_71_71, MLDS_118, &TargetCodeSucceeded_42);
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

                    parse_tree__file_names__module_name_to_file_name_5_p_0(Globals_18, (MR_String) "predicate \140top_level.mercury_compile_main.after_front_end_passes\'/15", (MR_Word) (MR_mkword(3, &top_level__mercury_compile_main_scalar_common_1[24])), ModuleName_32, &JavaFile_43);
                    backend_libs__compile_target_code__compile_java_files_7_p_0(Globals_18, ProgressStream_16, JavaFile_43, (MR_Word) ((MR_Unsigned) 0U), &Succeeded_40);
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
          STATE_VARIABLE_HLDS_108_108 = STATE_VARIABLE_HLDS_71_71;
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
          MR_Word MaybeRecompInfo_54;
          MR_Word TimestampFiles_58;
          MR_Word Var_114;
          MR_Word RecompInfo_55;
          MR_Word TimestampMap_56;
          void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);
          MR_Box conv2_TimestampFiles_58;
          MR_Box conv1_STATE_VARIABLE_IO_113_113;
          MR_Word _Succeededs_59;
          MR_Box conv4_STATE_VARIABLE_IO_66;

          hlds__hlds_module__module_info_get_maybe_recompilation_info_2_p_0(STATE_VARIABLE_HLDS_108_108, &MaybeRecompInfo_54);
          succeeded = (MaybeRecompInfo_54 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            RecompInfo_55 = ((MR_Word) ((MR_hl_field(1, MaybeRecompInfo_54, (MR_Integer) 0))));
            succeeded = (MaybeTimestampMap_22 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
              TimestampMap_56 = ((MR_Word) ((MR_hl_field(1, MaybeTimestampMap_22, (MR_Integer) 0))));
          }
          if (succeeded)
          {
            MR_Word UsedFileContents_57;

            recompilation__usage__construct_used_file_contents_5_p_0(STATE_VARIABLE_HLDS_108_108, RecompInfo_55, MaybeTopModule_20, TimestampMap_56, &UsedFileContents_57);
            recompilation__used_file__write_usage_file_5_p_0(ProgressStream_16, STATE_VARIABLE_HLDS_108_108, UsedFileContents_57);
          }
          func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(0, FindTimestampFiles_21, (MR_Integer) 1))));
          func_0(((MR_Box) (FindTimestampFiles_21)), ((MR_Box) (ModuleName_32)), &conv2_TimestampFiles_58, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_113_113);
          TimestampFiles_58 = ((MR_Word) (conv2_TimestampFiles_58));
          {
            Var_114 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_114, 0) = ((MR_Box) (&top_level__mercury_compile_main_scalar_common_5[2]));
            MR_hl_field(0, Var_114, 1) = ((MR_Box) (top_level__mercury_compile_main__after_front_end_passes_15_p_0_1));
            MR_hl_field(0, Var_114, 2) = ((MR_Box) ((MR_Integer) 2));
            MR_hl_field(0, Var_114, 3) = ((MR_Box) (Globals_18));
            MR_hl_field(0, Var_114, 4) = ((MR_Box) (ProgressStream_16));
          }
          mercury__list__map_foldl_5_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&libs__maybe_util__libs__maybe_util__type_ctor_info_maybe_succeeded_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_114, TimestampFiles_58, &_Succeededs_59, ((MR_Box) ((MR_Integer) 0)), &conv4_STATE_VARIABLE_IO_66);
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
    *STATE_VARIABLE_DumpInfo_64 = STATE_VARIABLE_DumpInfo_72_72;
    *STATE_VARIABLE_Specs_62 = STATE_VARIABLE_Specs_73_73;
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
  libs__globals__lookup_bool_option_3_p_0(Globals_15, (MR_Integer) 246, &ProfileCalls_16);
  libs__globals__lookup_bool_option_3_p_0(Globals_15, (MR_Integer) 247, &ProfileTime_17);
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
    parse_tree__file_names__module_name_to_file_name_create_dirs_7_p_0(Globals_15, (MR_String) "predicate \140top_level.mercury_compile_main.maybe_output_prof_call_graph\'/8", (MR_Word) (MR_mkword(1, &top_level__mercury_compile_main_scalar_common_3[4])), ModuleName_18, &ProfFileName_19);
    mercury__io__open_output_4_p_0(ProfFileName_19, &Res_20);
    if (((MR_tag((MR_Word) Res_20)) == (MR_Integer) 1))
    {
      MR_Word IOError_22 = ((MR_Word) ((MR_hl_field(1, Res_20, (MR_Integer) 0))));
      MR_String ErrorMsg_23;
      MR_String Var_42;

      Var_42 = mercury__io__error_message_1_f_0(IOError_22);
      ErrorMsg_23 = mercury__string__f_43_43_2_f_0((MR_String) "unable to write profiling static call graph: ", Var_42);
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
  libs__globals__lookup_accumulating_option_3_p_0(Globals_11, (MR_Integer) 711, &LocalModulesList_18);
  SymNames_19 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&top_level__mercury_compile_main_scalar_common_2[16]), LocalModulesList_18);
  LocalModuleNames_20 = mercury__set__list_to_set_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), SymNames_19);
  hlds__hlds_module__module_info_get_analysis_info_2_p_0(STATE_VARIABLE_HLDS_0_23, &AnalysisInfo0_21);
  analysis__prepare_intermodule_analysis_9_p_0(ProgressStream_10, Globals_11, ModuleNames_17, LocalModuleNames_20, Specs_14, AnalysisInfo0_21, &AnalysisInfo_22);
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

  libs__globals__lookup_bool_option_3_p_0(Globals_11, (MR_Integer) 508, &IntermodAnalysis_17);
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
        libs__globals__lookup_accumulating_option_3_p_0(Globals_11, (MR_Integer) 711, &LocalModulesList_24);
        SymNames_25 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&top_level__mercury_compile_main_scalar_common_2[15]), LocalModulesList_24);
        LocalModuleNames_26 = mercury__set__list_to_set_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), SymNames_25);
        hlds__hlds_module__module_info_get_analysis_info_2_p_0(STATE_VARIABLE_HLDS_0_18, &AnalysisInfo0_27);
        analysis__prepare_intermodule_analysis_9_p_0(ProgressStream_10, Globals_11, ModuleNames_23, LocalModuleNames_26, Specs_14, AnalysisInfo0_27, &AnalysisInfo_28);
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
  libs__globals__lookup_bool_option_3_p_0(Globals_15, (MR_Integer) 191, &ShowDepGraph_16);
  switch (ShowDepGraph_16) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *STATE_VARIABLE_HLDS_24 = STATE_VARIABLE_HLDS_0_23;
      break;
    case (MR_Integer) 1:
      {
        MR_Word ModuleName_17;
        MR_String DepGraphFileName_18;
        MR_Word OpenResult_19;

        libs__file_util__maybe_write_string_5_p_0(ProgressStream_9, Verbose_11, (MR_String) "% Writing dependency graph...");
        hlds__hlds_module__module_info_get_name_2_p_0(STATE_VARIABLE_HLDS_0_23, &ModuleName_17);
        parse_tree__file_names__module_name_to_file_name_create_dirs_7_p_0(Globals_15, (MR_String) "predicate \140top_level.mercury_compile_main.maybe_write_dependency_graph\'/8", (MR_Word) (&top_level__mercury_compile_main_scalar_common_3[3]), ModuleName_17, &DepGraphFileName_18);
        mercury__io__open_output_4_p_0(DepGraphFileName_18, &OpenResult_19);
        if (((MR_tag((MR_Word) OpenResult_19)) == (MR_Integer) 1))
        {
          MR_Word IOError_21 = ((MR_Word) ((MR_hl_field(1, OpenResult_19, (MR_Integer) 0))));
          MR_String ErrorMsg_22;
          MR_String Var_41;

          Var_41 = mercury__io__error_message_1_f_0(IOError_21);
          ErrorMsg_22 = mercury__string__f_43_43_2_f_0((MR_String) "unable to write dependency graph: ", Var_41);
          libs__file_util__report_error_4_p_0(ErrorStream_10, ErrorMsg_22);
          *STATE_VARIABLE_HLDS_24 = STATE_VARIABLE_HLDS_0_23;
        }
        else
        {
          MR_Word FileStream_20 = ((MR_Word) ((MR_hl_field(0, OpenResult_19, (MR_Integer) 0))));

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
  libs__options__set_all_options_to_4_p_0(Var_8, (MR_Word) (MR_mkword(1, &top_level__mercury_compile_main_scalar_common_3[1])), OptionTable0_5, &OptionTable1_6);
  Var_11 = libs__options__non_style_warning_options_0_f_0();
  libs__options__set_all_options_to_4_p_0(Var_11, (MR_Word) (MR_mkword(1, &top_level__mercury_compile_main_scalar_common_3[1])), OptionTable1_6, &OptionTable_7);
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
top_level__mercury_compile_main__find_timestamp_files_2_6_p_0(
  MR_Word Globals_7,
  MR_Word TimestampExt_8,
  MR_Word ModuleName_9,
  MR_Word * TimestampFiles_10)
{
  MR_String FileName_12;

  parse_tree__file_names__module_name_to_file_name_create_dirs_7_p_0(Globals_7, (MR_String) "predicate \140top_level.mercury_compile_main.find_timestamp_files_2\'/6", TimestampExt_8, ModuleName_9, &FileName_12);
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
  MR_Word TargetExt_8,
  MR_Word ModuleName_9,
  MR_Word * TargetFiles_10)
{
  MR_String FileName_12;

  parse_tree__file_names__module_name_to_file_name_create_dirs_7_p_0(Globals_7, (MR_String) "predicate \140top_level.mercury_compile_main.usual_find_target_files\'/6", TargetExt_8, ModuleName_9, &FileName_12);
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *TargetFiles_10 = base;
    MR_hl_field(1, base, 0) = ((MR_Box) (FileName_12));
    MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
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
  MR_Word EnvVarMap_13;
  MR_Word OptionsVariables_14;

  mercury__io__environment__get_environment_var_map_3_p_0(&EnvVarMap_13);
  OptionsVariables_14 = make__options_file__options_variables_init_1_f_0(EnvVarMap_13);
  top_level__mercury_compile_main__main_after_setup_9_p_0(ProgressStream_7, ErrorStream_8, Globals_9, (MR_Word) ((MR_Unsigned) 0U), OptionsVariables_14, (MR_Word) ((MR_Unsigned) 0U), Args_10);
}

static MR_bool MR_CALL 
top_level__mercury_compile_main__real_main_2_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_Word conv3_HeadVar__2_2;

  succeeded = libs__options__long_option_2_p_0(((MR_String) (wrapper_arg_1)), &conv3_HeadVar__2_2);
  if (succeeded)
  {
    *wrapper_arg_2 = ((MR_Box) (conv3_HeadVar__2_2));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static MR_bool MR_CALL 
top_level__mercury_compile_main__real_main_2_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_Word conv2_HeadVar__2_2;

  succeeded = libs__options__short_option_2_p_0(((MR_Char) (MR_Word) wrapper_arg_1), &conv2_HeadVar__2_2);
  if (succeeded)
  {
    *wrapper_arg_2 = ((MR_Box) (conv2_HeadVar__2_2));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static void MR_CALL 
top_level__mercury_compile_main__real_main_2_p_0_1(
  void * env_ptr_arg)
{
  struct top_level__mercury_compile_main__real_main_2_p_0_2_env_0_s * env_ptr = (struct top_level__mercury_compile_main__real_main_2_p_0_2_env_0_s *) (env_ptr_arg);

  *((env_ptr)->top_level__mercury_compile_main__real_main_2_p_0_2_env_0__wrapper_arg_1) = ((MR_Box) ((env_ptr)->top_level__mercury_compile_main__real_main_2_p_0_2_env_0__conv1_HeadVar__1_1));
  *((env_ptr)->top_level__mercury_compile_main__real_main_2_p_0_2_env_0__wrapper_arg_2) = ((MR_Box) ((env_ptr)->top_level__mercury_compile_main__real_main_2_p_0_2_env_0__conv0_HeadVar__2_2));
  ((env_ptr)->top_level__mercury_compile_main__real_main_2_p_0_2_env_0__cont)((env_ptr)->top_level__mercury_compile_main__real_main_2_p_0_2_env_0__cont_env_ptr);
}

static void MR_CALL 
top_level__mercury_compile_main__real_main_2_p_0_2(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Cont cont,
  void * cont_env_ptr)
{
  struct top_level__mercury_compile_main__real_main_2_p_0_2_env_0_s env;

  (env).top_level__mercury_compile_main__real_main_2_p_0_2_env_0__wrapper_arg_1 = wrapper_arg_1;
  (env).top_level__mercury_compile_main__real_main_2_p_0_2_env_0__wrapper_arg_2 = wrapper_arg_2;
  (env).top_level__mercury_compile_main__real_main_2_p_0_2_env_0__cont = cont;
  (env).top_level__mercury_compile_main__real_main_2_p_0_2_env_0__cont_env_ptr = cont_env_ptr;
  {
    MR_Box closure = closure_arg;

    libs__options__option_defaults_2_p_0(&(env).top_level__mercury_compile_main__real_main_2_p_0_2_env_0__conv1_HeadVar__1_1, &(env).top_level__mercury_compile_main__real_main_2_p_0_2_env_0__conv0_HeadVar__2_2, top_level__mercury_compile_main__real_main_2_p_0_1, &env);
  }
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
    MR_Word DefaultOptionTable_38;
    MR_String ArgFile_39;
    MR_Word ExtraArgs_40;
    MR_String Var_54;
    MR_Word Var_55;

    mercury__getopt__init_option_table_2_p_0((MR_Word) (&libs__options__libs__options__type_ctor_info_option_0), (MR_Word) (&top_level__mercury_compile_main_scalar_common_2[12]), &DefaultOptionTable_38);
    succeeded = (ExpandedCmdLineArgs_11 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      Var_54 = ((MR_String) ((MR_hl_field(1, ExpandedCmdLineArgs_11, (MR_Integer) 0))));
      Var_55 = ((MR_Word) ((MR_hl_field(1, ExpandedCmdLineArgs_11, (MR_Integer) 1))));
      succeeded = (strcmp(Var_54, (MR_String) "--arg-file") == 0);
      if (succeeded)
      {
        succeeded = (Var_55 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          ArgFile_39 = ((MR_String) ((MR_hl_field(1, Var_55, (MR_Integer) 0))));
          ExtraArgs_40 = ((MR_Word) ((MR_hl_field(1, Var_55, (MR_Integer) 1))));
        }
      }
    }
    if (succeeded)
    {
      MR_Word EnvVarMap_70;
      MR_Word MaybeArgs1_71;
      MR_Word ArgsNonUndefSpecs_72;
      MR_Word ArgsUndefSpecs_73;
      MR_Word Specs_74;
      MR_Word OptionsVariables_75;

      if (!((ExtraArgs_40 == (MR_Word) ((MR_Unsigned) 0U))))
      {
        MR_String Var_57;
        MR_String Var_59;

        Var_59 = mercury__string__string_1_f_0((MR_Word) (&top_level__mercury_compile_main_scalar_common_1[0]), ((MR_Box) (ExtraArgs_40)));
        Var_57 = mercury__string__f_43_43_2_f_0((MR_String) "extra arguments with --arg-file: ", Var_59);
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140top_level.mercury_compile_main.real_main_after_expansion\'/5", Var_57);
          return;
        }
      }
      mercury__io__environment__get_environment_var_map_3_p_0(&EnvVarMap_70);
      make__options_file__read_args_file_7_p_0(ErrorStream_6, ArgFile_39, &MaybeArgs1_71, &ArgsNonUndefSpecs_72, &ArgsUndefSpecs_73);
      Specs_74 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), ArgsNonUndefSpecs_72, ArgsUndefSpecs_73);
      OptionsVariables_75 = make__options_file__options_variables_init_1_f_0(EnvVarMap_70);
      if ((MaybeArgs1_71 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word AllFlags_48;
        MR_Word Specs_51;
        MR_Word ActualGlobals_52;
        MR_Word Var_61;
        MR_Word Var_49;
        MR_Word Var_50;

        Var_61 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U));
        AllFlags_48 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) ((MR_Unsigned) 0U), Var_61);
        libs__handle_options__handle_given_options_9_p_0(ErrorStream_6, DefaultOptionTable_38, AllFlags_48, &Var_49, &Var_50, &Specs_51, &ActualGlobals_52);
        parse_tree__write_error_spec__write_error_specs_5_p_0(ErrorStream_6, ActualGlobals_52, Specs_74);
        if ((Specs_51 == (MR_Word) ((MR_Unsigned) 0U)))
          top_level__mercury_compile_main__main_after_setup_9_p_0(ErrorStream_6, ErrorStream_6, ActualGlobals_52, (MR_Word) ((MR_Unsigned) 0U), OptionsVariables_75, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U));
        else
          libs__handle_options__usage_errors_5_p_0(ErrorStream_6, ActualGlobals_52, Specs_51);
      }
      else
      {
        MR_Word Args1_76 = ((MR_Word) ((MR_hl_field(1, MaybeArgs1_71, (MR_Integer) 0))));
        MR_Word NonOptionArgs_77;
        MR_Word OptionArgs_78;
        MR_Word MaybeError_79;
        MR_Word _OptionValues_80;

        mercury__getopt__record_arguments_8_p_0((MR_Word) (&libs__options__libs__options__type_ctor_info_option_0), (MR_Word) (&top_level__mercury_compile_main_scalar_common_2[13]), (MR_Word) (&top_level__mercury_compile_main_scalar_common_2[14]), DefaultOptionTable_38, Args1_76, &NonOptionArgs_77, &OptionArgs_78, &MaybeError_79, &_OptionValues_80);
        if ((MaybeError_79 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word AllFlags_165;
          MR_Word Specs_168;
          MR_Word ActualGlobals_169;
          MR_Word Var_170;
          MR_Word Var_157;
          MR_Word Var_158;

          Var_170 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) ((MR_Unsigned) 0U), OptionArgs_78);
          AllFlags_165 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) ((MR_Unsigned) 0U), Var_170);
          libs__handle_options__handle_given_options_9_p_0(ErrorStream_6, DefaultOptionTable_38, AllFlags_165, &Var_157, &Var_158, &Specs_168, &ActualGlobals_169);
          parse_tree__write_error_spec__write_error_specs_5_p_0(ErrorStream_6, ActualGlobals_169, Specs_74);
          if ((Specs_168 == (MR_Word) ((MR_Unsigned) 0U)))
            top_level__mercury_compile_main__main_after_setup_9_p_0(ErrorStream_6, ErrorStream_6, ActualGlobals_169, (MR_Word) ((MR_Unsigned) 0U), OptionsVariables_75, OptionArgs_78, NonOptionArgs_77);
          else
            libs__handle_options__usage_errors_5_p_0(ErrorStream_6, ActualGlobals_169, Specs_168);
        }
        else
        {
          MR_Word OptionSpecs_66;
          MR_Word OptionError_81 = ((MR_Word) ((MR_hl_field(1, MaybeError_79, (MR_Integer) 0))));
          MR_String OptionErrorStr_82;
          MR_Word Spec_83;
          MR_Word Var_90;
          MR_Word Var_91;

          OptionErrorStr_82 = mercury__getopt__option_error_to_string_1_f_0((MR_Word) (&libs__options__libs__options__type_ctor_info_option_0), OptionError_81);
          {
            Var_91 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_91, 0) = ((MR_Box) ((MR_Unsigned) 6U));
            MR_hl_field(3, Var_91, 1) = ((MR_Box) (OptionErrorStr_82));
          }
          {
            Var_90 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_90, 0) = ((MR_Box) (Var_91));
            MR_hl_field(1, Var_90, 1) = ((MR_Box) (MR_mkword(1, &top_level__mercury_compile_main_scalar_common_1[8])));
          }
          {
            Spec_83 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(2, Spec_83, 0) = ((MR_Box) ((MR_String) "predicate \140top_level.mercury_compile_main.process_options_arg_file\'/6"));
            MR_hl_field(2, Spec_83, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(2, Spec_83, 2) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(2, Spec_83, 3) = ((MR_Box) (Var_90));
          }
          {
            OptionSpecs_66 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, OptionSpecs_66, 0) = ((MR_Box) (Spec_83));
            MR_hl_field(1, OptionSpecs_66, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          parse_tree__write_error_spec__write_error_specs_opt_table_5_p_0(ErrorStream_6, DefaultOptionTable_38, OptionSpecs_66);
          mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
        }
      }
    }
    else
    {
      MR_Word Result_137;

      top_level__mercury_compile_main__process_options_std_7_p_0(ErrorStream_6, ErrorStream_6, DefaultOptionTable_38, ExpandedCmdLineArgs_11, &Result_137);
      if (((MR_tag((MR_Word) Result_137)) == (MR_Integer) 0))
      {
        MR_Word OptionSpecs_101 = ((MR_Word) ((MR_hl_field(0, Result_137, (MR_Integer) 0))));

        parse_tree__write_error_spec__write_error_specs_opt_table_5_p_0(ErrorStream_6, DefaultOptionTable_38, OptionSpecs_101);
        mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
      }
      else
      {
        MR_Word DetectedGradeFlags_104 = ((MR_Word) ((MR_hl_field(1, Result_137, (MR_Integer) 0))));
        MR_Word OptionsVariables_105 = ((MR_Word) ((MR_hl_field(1, Result_137, (MR_Integer) 1))));
        MR_Word MCFlags_106 = ((MR_Word) ((MR_hl_field(1, Result_137, (MR_Integer) 2))));
        MR_Word OptionArgs_107 = ((MR_Word) ((MR_hl_field(1, Result_137, (MR_Integer) 3))));
        MR_Word NonOptionArgs_108 = ((MR_Word) ((MR_hl_field(1, Result_137, (MR_Integer) 4))));
        MR_Word OptionSpecs_109 = ((MR_Word) ((MR_hl_field(1, Result_137, (MR_Integer) 5))));
        MR_Word AllFlags_110;
        MR_Word Specs_113;
        MR_Word ActualGlobals_114;
        MR_Word Var_115;
        MR_Word Var_102;
        MR_Word Var_103;

        Var_115 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), MCFlags_106, OptionArgs_107);
        AllFlags_110 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), DetectedGradeFlags_104, Var_115);
        libs__handle_options__handle_given_options_9_p_0(ErrorStream_6, DefaultOptionTable_38, AllFlags_110, &Var_102, &Var_103, &Specs_113, &ActualGlobals_114);
        parse_tree__write_error_spec__write_error_specs_5_p_0(ErrorStream_6, ActualGlobals_114, OptionSpecs_109);
        if ((Specs_113 == (MR_Word) ((MR_Unsigned) 0U)))
          top_level__mercury_compile_main__main_after_setup_9_p_0(ErrorStream_6, ErrorStream_6, ActualGlobals_114, DetectedGradeFlags_104, OptionsVariables_105, OptionArgs_107, NonOptionArgs_108);
        else
          libs__handle_options__usage_errors_5_p_0(ErrorStream_6, ActualGlobals_114, Specs_113);
      }
    }
  }
  make__deps_cache__record_make_deps_cache_stats_2_p_0();
  parse_tree__write_deps_file__record_write_deps_file_cache_stats_2_p_0();
  hlds__instmap__record_instmap_delta_restrict_stats_2_p_0();
  libs__globals__close_any_specific_compiler_streams_2_p_0();
}

static MR_bool MR_CALL 
top_level__mercury_compile_main__main_after_setup_9_p_0_2(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_args__847__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

static MR_bool MR_CALL 
top_level__mercury_compile_main__main_after_setup_9_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_args__847__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
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

  libs__globals__lookup_bool_option_3_p_0(Globals_12, (MR_Integer) 708, &Version_18);
  libs__globals__lookup_bool_option_3_p_0(Globals_12, (MR_Integer) 707, &Help_19);
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
      MR_Word HaveParseTreeMaps0_22;
      MR_Word Specs_25;

      libs__globals__get_op_mode_2_p_0(Globals_12, &OpMode_21);
      HaveParseTreeMaps0_22 = parse_tree__read_modules__init_have_parse_tree_maps_0_f_0();
      switch (MR_tag((MR_Word) OpMode_21)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(OpMode_21)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word MakeGlobals_37;

                libs__globals__set_option_4_p_0((MR_Integer) 704, (MR_Word) (MR_mkword(1, &top_level__mercury_compile_main_scalar_common_3[1])), Globals_12, &MakeGlobals_37);
                make__top_level__make_process_compiler_args_8_p_0(ProgressStream_10, MakeGlobals_37, DetectedGradeFlags_13, OptionVariables_14, OptionArgs_15, Args_16);
                Specs_25 = (MR_Word) ((MR_Unsigned) 0U);
              }
              break;
            case (MR_Integer) 1:
              {
                parse_tree__source_file_map__write_source_file_map_5_p_0(ProgressStream_10, Globals_12, Args_16);
                Specs_25 = (MR_Word) ((MR_Unsigned) 0U);
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_String StandaloneIntBasename_38 = ((MR_String) ((MR_hl_field(1, OpMode_21, (MR_Integer) 0))));

            top_level__mercury_compile_main__do_op_mode_standalone_interface_6_p_0(ProgressStream_10, ErrorStream_11, Globals_12, StandaloneIntBasename_38);
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
            MR_Word InvokedByMmcMake_41 = ((MR_Unsigned) ((MR_hl_field(3, OpMode_21, (MR_Integer) 1))) & (MR_Integer) 1);
            MR_Word FileNamesFromStdin_42;

            libs__globals__lookup_bool_option_3_p_0(Globals_12, (MR_Integer) 704, &FileNamesFromStdin_42);
            succeeded = (Args_16 == (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
              succeeded = (FileNamesFromStdin_42 == (MR_Integer) 0);
            if (succeeded)
            {
              MR_Word StdErr_43;

              mercury__io__stderr_stream_3_p_0(&StdErr_43);
              libs__handle_options__short_usage_3_p_0(StdErr_43);
              Specs_25 = (MR_Word) ((MR_Unsigned) 0U);
            }
            else
            {
              MR_Word ModulesToLink_53;
              MR_Word ExtraObjFiles_54;
              MR_Integer ExitStatus_55;
              MR_Word StdErr_66;
              MR_Word Statistics_67;

              switch (InvokedByMmcMake_41) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  {
                    MR_Word ModulesToLinkCord_51;
                    MR_Word ExtraObjFilesCord_52;

                    switch (FileNamesFromStdin_42) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                          MR_Word Var_79;
                          MR_Word Var_80;
                          MR_Word _HaveParseTreeMaps_97;

                          Var_79 = mercury__cord__empty_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0));
                          Var_80 = mercury__cord__empty_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0));
                          top_level__mercury_compile_main__do_process_compiler_cmd_line_args_15_p_0(ProgressStream_10, ErrorStream_11, Globals_12, OpModeArgs_40, InvokedByMmcMake_41, OptionArgs_15, Args_16, Var_79, &ModulesToLinkCord_51, Var_80, &ExtraObjFilesCord_52, HaveParseTreeMaps0_22, &_HaveParseTreeMaps_97);
                          Specs_25 = (MR_Word) ((MR_Unsigned) 0U);
                        }
                        break;
                      case (MR_Integer) 1:
                        {
                          MR_Word StdIn_50;
                          MR_Word Var_69;
                          MR_Word Var_74;
                          MR_Word Var_75;
                          MR_Word _HaveParseTreeMaps_102;

                          {
                            Var_69 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(0, Var_69, 0) = ((MR_Box) (&top_level__mercury_compile_main_scalar_common_4[4]));
                            MR_hl_field(0, Var_69, 1) = ((MR_Box) (top_level__mercury_compile_main__main_after_setup_9_p_0_1));
                            MR_hl_field(0, Var_69, 2) = ((MR_Box) ((MR_Integer) 2));
                            MR_hl_field(0, Var_69, 3) = ((MR_Box) (InvokedByMmcMake_41));
                            MR_hl_field(0, Var_69, 4) = ((MR_Box) ((MR_Integer) 0));
                          }
                          mercury__require__expect_3_p_0(Var_69, (MR_String) "predicate \140top_level.mercury_compile_main.do_op_mode_args\'/16", (MR_String) "InvokedByMmcMake != op_mode_not_invoked_by_mmc_make");
                          mercury__io__stdin_stream_3_p_0(&StdIn_50);
                          Var_74 = mercury__cord__empty_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0));
                          Var_75 = mercury__cord__empty_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0));
                          top_level__mercury_compile_main__setup_and_process_compiler_stdin_args_19_p_0(ProgressStream_10, ErrorStream_11, StdIn_50, Globals_12, OpModeArgs_40, InvokedByMmcMake_41, DetectedGradeFlags_13, OptionVariables_14, OptionArgs_15, Var_74, &ModulesToLinkCord_51, Var_75, &ExtraObjFilesCord_52, HaveParseTreeMaps0_22, &_HaveParseTreeMaps_102, (MR_Word) ((MR_Unsigned) 0U), &Specs_25);
                        }
                        break;
                    }
                    ModulesToLink_53 = mercury__cord__list_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ModulesToLinkCord_51);
                    ExtraObjFiles_54 = mercury__cord__list_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ExtraObjFilesCord_52);
                  }
                  break;
                case (MR_Integer) 0:
                  {
                    MR_Word LibgradeCheckSpecs_165;

                    libs__check_libgrades__maybe_check_libraries_are_installed_4_p_0(Globals_12, &LibgradeCheckSpecs_165);
                    if ((LibgradeCheckSpecs_165 == (MR_Word) ((MR_Unsigned) 0U)))
                    {
                      MR_Word ModulesToLinkCord_140;
                      MR_Word ExtraObjFilesCord_141;

                      switch (FileNamesFromStdin_42) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 0:
                          {
                            MR_Word Var_77;
                            MR_Word Var_78;
                            MR_Word _HaveParseTreeMaps_99;

                            Var_77 = mercury__cord__empty_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0));
                            Var_78 = mercury__cord__empty_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0));
                            top_level__mercury_compile_main__setup_and_process_compiler_cmd_line_args_19_p_0(ProgressStream_10, ErrorStream_11, Globals_12, OpModeArgs_40, InvokedByMmcMake_41, DetectedGradeFlags_13, OptionVariables_14, OptionArgs_15, Args_16, Var_77, &ModulesToLinkCord_140, Var_78, &ExtraObjFilesCord_141, HaveParseTreeMaps0_22, &_HaveParseTreeMaps_99, (MR_Word) ((MR_Unsigned) 0U), &Specs_25);
                          }
                          break;
                        case (MR_Integer) 1:
                          {
                            MR_Word StdIn_119;
                            MR_Word Var_120;
                            MR_Word Var_125;
                            MR_Word Var_126;
                            MR_Word _HaveParseTreeMaps_118;

                            {
                              Var_120 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                              MR_hl_field(0, Var_120, 0) = ((MR_Box) (&top_level__mercury_compile_main_scalar_common_4[4]));
                              MR_hl_field(0, Var_120, 1) = ((MR_Box) (top_level__mercury_compile_main__main_after_setup_9_p_0_2));
                              MR_hl_field(0, Var_120, 2) = ((MR_Box) ((MR_Integer) 2));
                              MR_hl_field(0, Var_120, 3) = ((MR_Box) (InvokedByMmcMake_41));
                              MR_hl_field(0, Var_120, 4) = ((MR_Box) ((MR_Integer) 0));
                            }
                            mercury__require__expect_3_p_0(Var_120, (MR_String) "predicate \140top_level.mercury_compile_main.do_op_mode_args\'/16", (MR_String) "InvokedByMmcMake != op_mode_not_invoked_by_mmc_make");
                            mercury__io__stdin_stream_3_p_0(&StdIn_119);
                            Var_125 = mercury__cord__empty_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0));
                            Var_126 = mercury__cord__empty_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0));
                            top_level__mercury_compile_main__setup_and_process_compiler_stdin_args_19_p_0(ProgressStream_10, ErrorStream_11, StdIn_119, Globals_12, OpModeArgs_40, InvokedByMmcMake_41, DetectedGradeFlags_13, OptionVariables_14, OptionArgs_15, Var_125, &ModulesToLinkCord_140, Var_126, &ExtraObjFilesCord_141, HaveParseTreeMaps0_22, &_HaveParseTreeMaps_118, (MR_Word) ((MR_Unsigned) 0U), &Specs_25);
                          }
                          break;
                      }
                      ModulesToLink_53 = mercury__cord__list_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ModulesToLinkCord_140);
                      ExtraObjFiles_54 = mercury__cord__list_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ExtraObjFilesCord_141);
                    }
                    else
                    {
                      Specs_25 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), LibgradeCheckSpecs_165, (MR_Word) ((MR_Unsigned) 0U));
                      ModulesToLink_53 = (MR_Word) ((MR_Unsigned) 0U);
                      ExtraObjFiles_54 = (MR_Word) ((MR_Unsigned) 0U);
                    }
                  }
                  break;
              }
              mercury__io__get_exit_status_3_p_0(&ExitStatus_55);
              succeeded = (ExitStatus_55 == (MR_Integer) 0);
              if (succeeded)
              {
                MR_String FirstModule_56;
                MR_Word Var_82;
                MR_Word Var_83;

                succeeded = ((MR_tag((MR_Word) OpModeArgs_40)) == (MR_Integer) 3);
                if (succeeded)
                {
                  Var_82 = ((MR_Word) ((MR_hl_field(3, OpModeArgs_40, (MR_Integer) 0))));
                  succeeded = ((MR_tag((MR_Word) Var_82)) == (MR_Integer) 1);
                  if (succeeded)
                  {
                    Var_83 = ((MR_Unsigned) ((MR_hl_field(1, Var_82, (MR_Integer) 0))) & (MR_Integer) 3);
                    succeeded = (Var_83 == (MR_Integer) 2);
                    if (succeeded)
                    {
                      succeeded = (ModulesToLink_53 != (MR_Word) ((MR_Unsigned) 0U));
                      if (succeeded)
                        FirstModule_56 = ((MR_String) ((MR_hl_field(1, ModulesToLink_53, (MR_Integer) 0))));
                    }
                  }
                }
                if (succeeded)
                {
                  MR_Word MainModuleName_58;
                  MR_Word Target_59;
                  MR_Word Succeeded_60;

                  parse_tree__file_names__file_name_to_module_name_2_p_0(FirstModule_56, &MainModuleName_58);
                  libs__globals__get_target_2_p_0(Globals_12, &Target_59);
                  switch (Target_59) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                    case (MR_Integer) 1:
                      switch (InvokedByMmcMake_41) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 1:
                          backend_libs__compile_target_code__link_module_list_7_p_0(ProgressStream_10, ModulesToLink_53, ExtraObjFiles_54, Globals_12, &Succeeded_60);
                          break;
                        case (MR_Integer) 0:
                          {
                            MR_Word DefaultOptionTable_61;
                            MR_Word MayBuild_62;

                            libs__globals__get_default_options_2_p_0(Globals_12, &DefaultOptionTable_61);
                            make__build__setup_for_build_with_module_options_11_p_0(ProgressStream_10, DefaultOptionTable_61, (MR_Integer) 0, MainModuleName_58, DetectedGradeFlags_13, OptionVariables_14, OptionArgs_15, (MR_Word) ((MR_Unsigned) 0U), &MayBuild_62);
                            if (((MR_tag((MR_Word) MayBuild_62)) == (MR_Integer) 1))
                            {
                              MR_Word BuildGlobals_65 = ((MR_Word) ((MR_hl_field(1, MayBuild_62, (MR_Integer) 1))));

                              backend_libs__compile_target_code__link_module_list_7_p_0(ProgressStream_10, ModulesToLink_53, ExtraObjFiles_54, BuildGlobals_65, &Succeeded_60);
                            }
                            else
                            {
                              MR_Word SetupSpecs_63 = ((MR_Word) ((MR_hl_field(0, MayBuild_62, (MR_Integer) 0))));

                              parse_tree__write_error_spec__write_error_specs_5_p_0(ErrorStream_11, Globals_12, SetupSpecs_63);
                              Succeeded_60 = (MR_Integer) 0;
                            }
                          }
                          break;
                      }
                      break;
                    case (MR_Integer) 2:
                      parse_tree__module_cmds__create_java_shell_script_6_p_0(ProgressStream_10, Globals_12, MainModuleName_58, &Succeeded_60);
                      break;
                  }
                  parse_tree__module_cmds__maybe_set_exit_status_3_p_0(Succeeded_60);
                }
              }
              mercury__io__stderr_stream_3_p_0(&StdErr_66);
              parse_tree__write_error_spec__maybe_print_delayed_error_messages_4_p_0(StdErr_66, Globals_12);
              libs__globals__lookup_bool_option_3_p_0(Globals_12, (MR_Integer) 83, &Statistics_67);
              switch (Statistics_67) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    succeeded = mercury__benchmarking__full_memory_stats_are_available_0_p_0();
                    if (succeeded)
                      mercury__benchmarking__report_full_memory_stats_3_p_0(StdErr_66);
                  }
                  break;
              }
            }
          }
          break;
      }
      parse_tree__write_error_spec__write_error_specs_5_p_0(ErrorStream_11, Globals_12, Specs_25);
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
  MR_Word STATE_VARIABLE_HaveParseTreeMaps_0_14,
  MR_Word * STATE_VARIABLE_HaveParseTreeMaps_15,
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
      *STATE_VARIABLE_HaveParseTreeMaps_15 = STATE_VARIABLE_HaveParseTreeMaps_0_14;
      *STATE_VARIABLE_ExtraObjFiles_13 = STATE_VARIABLE_ExtraObjFiles_0_12;
      *STATE_VARIABLE_Modules_11 = STATE_VARIABLE_Modules_0_10;
    }
    else
    {
      MR_String Arg_51 = ((MR_String) ((MR_hl_field(1, HeadVar__9_9, (MR_Integer) 0))));
      MR_Word Args_52 = ((MR_Word) ((MR_hl_field(1, HeadVar__9_9, (MR_Integer) 1))));
      MR_Word ArgModules_58;
      MR_Word ArgExtraObjFiles_59;
      MR_Word STATE_VARIABLE_HaveParseTreeMaps_72_72;
      MR_Word STATE_VARIABLE_Specs_73_73;
      MR_Word STATE_VARIABLE_Modules_76_76;
      MR_Word Var_77;
      MR_Word STATE_VARIABLE_ExtraObjFiles_78_78;
      MR_Word Var_79;
      MR_Word next_value_of_HeadVar__9_9;
      MR_Word next_value_of_STATE_VARIABLE_Modules_0_10;
      MR_Word next_value_of_STATE_VARIABLE_ExtraObjFiles_0_12;
      MR_Word next_value_of_STATE_VARIABLE_HaveParseTreeMaps_0_14;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_16;

      top_level__mercury_compile_main__setup_and_process_compiler_arg_17_p_0(ProgressStream_1, ErrorStream_2, Globals_3, OpModeArgs_4, InvokedByMmcMake_5, DetectedGradeFlags_6, OptionVariables_7, OptionArgs_8, Arg_51, &ArgModules_58, &ArgExtraObjFiles_59, STATE_VARIABLE_HaveParseTreeMaps_0_14, &STATE_VARIABLE_HaveParseTreeMaps_72_72, STATE_VARIABLE_Specs_0_16, &STATE_VARIABLE_Specs_73_73);
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
      next_value_of_STATE_VARIABLE_HaveParseTreeMaps_0_14 = STATE_VARIABLE_HaveParseTreeMaps_72_72;
      next_value_of_STATE_VARIABLE_Specs_0_16 = STATE_VARIABLE_Specs_73_73;
      HeadVar__9_9 = next_value_of_HeadVar__9_9;
      STATE_VARIABLE_Modules_0_10 = next_value_of_STATE_VARIABLE_Modules_0_10;
      STATE_VARIABLE_ExtraObjFiles_0_12 = next_value_of_STATE_VARIABLE_ExtraObjFiles_0_12;
      STATE_VARIABLE_HaveParseTreeMaps_0_14 = next_value_of_STATE_VARIABLE_HaveParseTreeMaps_0_14;
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
  MR_Word STATE_VARIABLE_HaveParseTreeMaps_0_40,
  MR_Word * STATE_VARIABLE_HaveParseTreeMaps_41,
  MR_Word STATE_VARIABLE_Specs_0_42,
  MR_Word * STATE_VARIABLE_Specs_43)
{
  MR_bool succeeded;
  MR_Word DefaultOptionTable_32;
  MR_Word FileOrModule_33;
  MR_Word ModuleName_34;
  MR_Word MayBuild_36;
  MR_String FileName_48;

  libs__globals__get_default_options_2_p_0(Globals_20, &DefaultOptionTable_32);
  succeeded = mercury__string__remove_suffix_3_p_0(Arg_26, (MR_String) ".m", &FileName_48);
  if (succeeded)
  {
    {
      FileOrModule_33 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, FileOrModule_33, 0) = ((MR_Box) (FileName_48));
    }
    parse_tree__file_names__file_name_to_module_name_2_p_0(FileName_48, &ModuleName_34);
  }
  else
  {
    parse_tree__file_names__file_name_to_module_name_2_p_0(Arg_26, &ModuleName_34);
    {
      FileOrModule_33 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, FileOrModule_33, 0) = ((MR_Box) (ModuleName_34));
    }
  }
  make__build__setup_for_build_with_module_options_11_p_0(ProgressStream_18, DefaultOptionTable_32, (MR_Integer) 0, ModuleName_34, DetectedGradeFlags_23, OptionVariables_24, OptionArgs_25, (MR_Word) ((MR_Unsigned) 0U), &MayBuild_36);
  if (((MR_tag((MR_Word) MayBuild_36)) == (MR_Integer) 1))
  {
    MR_Word BuildGlobals_39 = ((MR_Word) ((MR_hl_field(1, MayBuild_36, (MR_Integer) 1))));

    top_level__mercury_compile_main__do_process_compiler_arg_13_p_0(ProgressStream_18, ErrorStream_19, BuildGlobals_39, OpModeArgs_21, InvokedByMmcMake_22, OptionArgs_25, FileOrModule_33, ModulesToLink_27, ExtraObjFiles_28, STATE_VARIABLE_HaveParseTreeMaps_0_40, STATE_VARIABLE_HaveParseTreeMaps_41);
  }
  else
  {
    MR_Word SetupSpecs_37 = ((MR_Word) ((MR_hl_field(0, MayBuild_36, (MR_Integer) 0))));

    parse_tree__write_error_spec__write_error_specs_5_p_0(ErrorStream_19, Globals_20, SetupSpecs_37);
    *ModulesToLink_27 = (MR_Word) ((MR_Unsigned) 0U);
    *ExtraObjFiles_28 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_HaveParseTreeMaps_41 = STATE_VARIABLE_HaveParseTreeMaps_0_40;
  }
  *STATE_VARIABLE_Specs_43 = STATE_VARIABLE_Specs_0_42;
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
  MR_Word STATE_VARIABLE_HaveParseTreeMaps_0_47,
  MR_Word * STATE_VARIABLE_HaveParseTreeMaps_48,
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
          *STATE_VARIABLE_HaveParseTreeMaps_48 = STATE_VARIABLE_HaveParseTreeMaps_0_47;
          *STATE_VARIABLE_Specs_50 = STATE_VARIABLE_Specs_0_49;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_String Line_35 = ((MR_String) ((MR_hl_field(1, LineResult_34, (MR_Integer) 0))));
          MR_String Arg_36;
          MR_Word ArgModules_37;
          MR_Word ArgExtraObjFiles_38;
          MR_Word STATE_VARIABLE_HaveParseTreeMaps_55_55;
          MR_Word STATE_VARIABLE_Modules_58_58;
          MR_Word Var_59;
          MR_Word STATE_VARIABLE_ExtraObjFiles_60_60;
          MR_Word Var_61;
          MR_Word DefaultOptionTable_82;
          MR_Word FileOrModule_83;
          MR_Word ModuleName_84;
          MR_Word MayBuild_86;
          MR_String FileName_92;
          MR_Word next_value_of_STATE_VARIABLE_Modules_0_43;
          MR_Word next_value_of_STATE_VARIABLE_ExtraObjFiles_0_45;
          MR_Word next_value_of_STATE_VARIABLE_HaveParseTreeMaps_0_47;

          Arg_36 = mercury__string__rstrip_1_f_0(Line_35);
          libs__globals__get_default_options_2_p_0(Globals_23, &DefaultOptionTable_82);
          succeeded = mercury__string__remove_suffix_3_p_0(Arg_36, (MR_String) ".m", &FileName_92);
          if (succeeded)
          {
            {
              FileOrModule_83 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, FileOrModule_83, 0) = ((MR_Box) (FileName_92));
            }
            parse_tree__file_names__file_name_to_module_name_2_p_0(FileName_92, &ModuleName_84);
          }
          else
          {
            parse_tree__file_names__file_name_to_module_name_2_p_0(Arg_36, &ModuleName_84);
            {
              FileOrModule_83 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, FileOrModule_83, 0) = ((MR_Box) (ModuleName_84));
            }
          }
          make__build__setup_for_build_with_module_options_11_p_0(ProgressStream_20, DefaultOptionTable_82, (MR_Integer) 0, ModuleName_84, DetectedGradeFlags_26, OptionVariables_27, OptionArgs_28, (MR_Word) ((MR_Unsigned) 0U), &MayBuild_86);
          if (((MR_tag((MR_Word) MayBuild_86)) == (MR_Integer) 1))
          {
            MR_Word BuildGlobals_89 = ((MR_Word) ((MR_hl_field(1, MayBuild_86, (MR_Integer) 1))));

            top_level__mercury_compile_main__do_process_compiler_arg_13_p_0(ProgressStream_20, ErrorStream_21, BuildGlobals_89, OpModeArgs_24, InvokedByMmcMake_25, OptionArgs_28, FileOrModule_83, &ArgModules_37, &ArgExtraObjFiles_38, STATE_VARIABLE_HaveParseTreeMaps_0_47, &STATE_VARIABLE_HaveParseTreeMaps_55_55);
          }
          else
          {
            MR_Word SetupSpecs_87 = ((MR_Word) ((MR_hl_field(0, MayBuild_86, (MR_Integer) 0))));

            parse_tree__write_error_spec__write_error_specs_5_p_0(ErrorStream_21, Globals_23, SetupSpecs_87);
            ArgModules_37 = (MR_Word) ((MR_Unsigned) 0U);
            ArgExtraObjFiles_38 = (MR_Word) ((MR_Unsigned) 0U);
            STATE_VARIABLE_HaveParseTreeMaps_55_55 = STATE_VARIABLE_HaveParseTreeMaps_0_47;
          }
          Var_59 = mercury__cord__from_list_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ArgModules_37);
          STATE_VARIABLE_Modules_58_58 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), STATE_VARIABLE_Modules_0_43, Var_59);
          Var_61 = mercury__cord__from_list_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ArgExtraObjFiles_38);
          STATE_VARIABLE_ExtraObjFiles_60_60 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), STATE_VARIABLE_ExtraObjFiles_0_45, Var_61);
          // direct tailcall eliminated
          ;
          next_value_of_STATE_VARIABLE_Modules_0_43 = STATE_VARIABLE_Modules_58_58;
          next_value_of_STATE_VARIABLE_ExtraObjFiles_0_45 = STATE_VARIABLE_ExtraObjFiles_60_60;
          next_value_of_STATE_VARIABLE_HaveParseTreeMaps_0_47 = STATE_VARIABLE_HaveParseTreeMaps_55_55;
          STATE_VARIABLE_Modules_0_43 = next_value_of_STATE_VARIABLE_Modules_0_43;
          STATE_VARIABLE_ExtraObjFiles_0_45 = next_value_of_STATE_VARIABLE_ExtraObjFiles_0_45;
          STATE_VARIABLE_HaveParseTreeMaps_0_47 = next_value_of_STATE_VARIABLE_HaveParseTreeMaps_0_47;
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
            MR_hl_field(1, Var_69, 1) = ((MR_Box) (MR_mkword(1, &top_level__mercury_compile_main_scalar_common_1[8])));
          }
          {
            Pieces_41 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Pieces_41, 0) = ((MR_Box) (MR_mkword(3, &top_level__mercury_compile_main_scalar_common_1[13])));
            MR_hl_field(1, Pieces_41, 1) = ((MR_Box) (Var_69));
          }
          {
            Spec_42 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(2, Spec_42, 0) = ((MR_Box) ((MR_String) "predicate \140top_level.mercury_compile_main.setup_and_process_compiler_stdin_args\'/19"));
            MR_hl_field(2, Spec_42, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(2, Spec_42, 2) = ((MR_Box) ((MR_Unsigned) 16U));
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
          *STATE_VARIABLE_HaveParseTreeMaps_48 = STATE_VARIABLE_HaveParseTreeMaps_0_47;
        }
        break;
    }
    break;
  }
}

static void MR_CALL 
top_level__mercury_compile_main__do_process_compiler_arg_13_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  parse_tree__write_error_spec__write_error_specs_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
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
  MR_Word conv1_TimestampFiles_10;

  top_level__mercury_compile_main__find_timestamp_files_2_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv1_TimestampFiles_10);
  *wrapper_arg_2 = ((MR_Box) (conv1_TimestampFiles_10));
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
  MR_Word conv0_TargetFiles_10;

  top_level__mercury_compile_main__usual_find_target_files_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv0_TargetFiles_10);
  *wrapper_arg_2 = ((MR_Box) (conv0_TargetFiles_10));
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
  MR_Word STATE_VARIABLE_HaveParseTreeMaps_0_45,
  MR_Word * STATE_VARIABLE_HaveParseTreeMaps_46)
{
  MR_bool succeeded;
  MR_Word SpecsList_31;
  MR_Word Var_75;
  MR_Box conv2_STATE_VARIABLE_IO_76_76;

  switch (MR_tag((MR_Word) OpModeArgs_17)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(OpModeArgs_17)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word DepSpecs_85;

            if (((MR_tag((MR_Word) FileOrModule_20)) == (MR_Integer) 0))
            {
              MR_String FileName_78 = ((MR_String) ((MR_hl_field(0, FileOrModule_20, (MR_Integer) 0))));
              MR_Word _DepsMap_32;

              parse_tree__generate_dep_d_files__generate_d_file_for_file_7_p_0(ProgressStream_14, Globals0_16, FileName_78, &_DepsMap_32, &DepSpecs_85);
            }
            else
            {
              MR_Word ModuleName_80 = ((MR_Word) ((MR_hl_field(1, FileOrModule_20, (MR_Integer) 0))));
              MR_Word _DepsMap_79;

              parse_tree__generate_dep_d_files__generate_d_file_for_module_7_p_0(ProgressStream_14, Globals0_16, ModuleName_80, &_DepsMap_79, &DepSpecs_85);
            }
            {
              SpecsList_31 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, SpecsList_31, 0) = ((MR_Box) (DepSpecs_85));
              MR_hl_field(1, SpecsList_31, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            *ModulesToLink_21 = (MR_Word) ((MR_Unsigned) 0U);
            *ExtraObjFiles_22 = (MR_Word) ((MR_Unsigned) 0U);
            *STATE_VARIABLE_HaveParseTreeMaps_46 = STATE_VARIABLE_HaveParseTreeMaps_0_45;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Globals_33;
            MR_Word HaveReadSrc_34;
            MR_Word Errors_36;
            MR_Word Specs_94;

            top_level__mercury_compile_main__read_module_or_file_10_p_0(ProgressStream_14, Globals0_16, &Globals_33, FileOrModule_20, (MR_Integer) 1, &HaveReadSrc_34, STATE_VARIABLE_HaveParseTreeMaps_0_45, STATE_VARIABLE_HaveParseTreeMaps_46);
            if (((MR_tag((MR_Word) HaveReadSrc_34)) == (MR_Integer) 0))
            {
              MR_Word ParseTreeSrc_37 = ((MR_Word) ((MR_hl_field(0, HaveReadSrc_34, (MR_Integer) 1))));
              MR_Word Source_38 = ((MR_Word) ((MR_hl_field(0, HaveReadSrc_34, (MR_Integer) 2))));
              MR_Word _MaybeTimestamp_39;
              MR_Word Var_138;
              MR_Word Var_140;

              parse_tree__read_modules__have_parse_tree_source_get_maybe_timestamp_errors_3_p_0(Source_38, &_MaybeTimestamp_39, &Errors_36);
              Var_140 = ((MR_Word) ((MR_hl_field(0, Errors_36, (MR_Integer) 0))));
              Var_138 = ((MR_Word) ((MR_hl_field(0, Errors_36, (MR_Integer) 2))));
              succeeded = mercury__set__is_non_empty_1_p_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_fatal_read_module_error_0), Var_140);
              if (!(succeeded))
              {
                MR_Word HaltSyntax_122;
                MR_Word Var_125;

                succeeded = mercury__set__is_non_empty_1_p_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_nonfatal_read_module_error_0), Var_138);
                if (succeeded)
                {
                  Var_125 = (MR_Integer) 6;
                  libs__globals__lookup_bool_option_3_p_0(Globals_33, Var_125, &HaltSyntax_122);
                  succeeded = (HaltSyntax_122 == (MR_Integer) 1);
                }
              }
              if (!(succeeded))
              {
                MR_String UglyFileName_40;
                MR_Word ModuleName_88 = ((MR_Word) ((MR_hl_field(0, ParseTreeSrc_37, (MR_Integer) 0))));
                MR_Word _Succeeded_41;

                parse_tree__file_names__module_name_to_file_name_create_dirs_7_p_0(Globals_33, (MR_String) "predicate \140top_level.mercury_compile_main.do_process_compiler_arg\'/13", (MR_Word) (&top_level__mercury_compile_main_scalar_common_3[2]), ModuleName_88, &UglyFileName_40);
                parse_tree__parse_tree_out__output_parse_tree_src_7_p_0(ProgressStream_14, Globals_33, UglyFileName_40, ParseTreeSrc_37, &_Succeeded_41);
              }
            }
            else
              Errors_36 = ((MR_Word) ((MR_hl_field(1, HaveReadSrc_34, (MR_Integer) 1))));
            Specs_94 = parse_tree__parse_error__get_read_module_specs_1_f_0(Errors_36);
            {
              SpecsList_31 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, SpecsList_31, 0) = ((MR_Box) (Specs_94));
              MR_hl_field(1, SpecsList_31, 1) = ((MR_Box) ((MR_Unsigned) 0U));
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
        MR_Word DepsMap_27;
        MR_Word DepSpecs_28;
        MR_Word Specs_30;
        MR_Word Var_51;

        if (((MR_tag((MR_Word) FileOrModule_20)) == (MR_Integer) 0))
        {
          MR_String FileName_26 = ((MR_String) ((MR_hl_field(0, FileOrModule_20, (MR_Integer) 0))));

          parse_tree__generate_dep_d_files__generate_dep_file_for_file_7_p_0(ProgressStream_14, Globals0_16, FileName_26, &DepsMap_27, &DepSpecs_28);
        }
        else
        {
          MR_Word ModuleName_29 = ((MR_Word) ((MR_hl_field(1, FileOrModule_20, (MR_Integer) 0))));

          parse_tree__generate_dep_d_files__generate_dep_file_for_module_7_p_0(ProgressStream_14, Globals0_16, ModuleName_29, &DepsMap_27, &DepSpecs_28);
        }
        succeeded = (MaybeMakeInts_25 == (MR_Integer) 1);
        if (succeeded)
        {
          Var_51 = parse_tree__error_util__contains_errors_2_f_0(Globals0_16, DepSpecs_28);
          succeeded = (Var_51 == (MR_Integer) 0);
        }
        if (succeeded)
          top_level__mercury_compile_main__deps_make_ints_9_p_0(ProgressStream_14, Globals0_16, DepsMap_27, DepSpecs_28, &Specs_30, STATE_VARIABLE_HaveParseTreeMaps_0_45, STATE_VARIABLE_HaveParseTreeMaps_46);
        else
        {
          Specs_30 = DepSpecs_28;
          *STATE_VARIABLE_HaveParseTreeMaps_46 = STATE_VARIABLE_HaveParseTreeMaps_0_45;
        }
        {
          SpecsList_31 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, SpecsList_31, 0) = ((MR_Box) (Specs_30));
          MR_hl_field(1, SpecsList_31, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        *ModulesToLink_21 = (MR_Word) ((MR_Unsigned) 0U);
        *ExtraObjFiles_22 = (MR_Word) ((MR_Unsigned) 0U);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word InterfaceFile_42 = ((MR_Unsigned) ((MR_hl_field(2, OpModeArgs_17, (MR_Integer) 0))) & (MR_Integer) 3);

        top_level__mercury_compile_main__do_process_compiler_arg_make_interface_9_p_0(ProgressStream_14, Globals0_16, InterfaceFile_42, FileOrModule_20, &SpecsList_31, STATE_VARIABLE_HaveParseTreeMaps_0_45, STATE_VARIABLE_HaveParseTreeMaps_46);
        *ModulesToLink_21 = (MR_Word) ((MR_Unsigned) 0U);
        *ExtraObjFiles_22 = (MR_Word) ((MR_Unsigned) 0U);
      }
      break;
    case (MR_Integer) 3:
      {
        MR_Word OpModeAugment_43 = ((MR_Word) ((MR_hl_field(3, OpModeArgs_17, (MR_Integer) 0))));
        MR_Word ModulesToRecompile_44;
        MR_Word STATE_VARIABLE_HaveParseTreeMaps_69_69;
        MR_Word Globals_98;
        MR_Word Smart0_106;
        MR_Word DisableSmart_107;
        MR_Word Var_71;

        libs__globals__lookup_bool_option_3_p_0(Globals0_16, (MR_Integer) 155, &Smart0_106);
        libs__globals__io_get_disable_smart_recompilation_3_p_0(&DisableSmart_107);
        switch (DisableSmart_107) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              libs__globals__set_option_4_p_0((MR_Integer) 155, (MR_Word) (MR_mkword(1, &top_level__mercury_compile_main_scalar_common_3[1])), Globals0_16, &Globals_98);
              ModulesToRecompile_44 = (MR_Word) ((MR_Unsigned) 0U);
              STATE_VARIABLE_HaveParseTreeMaps_69_69 = STATE_VARIABLE_HaveParseTreeMaps_0_45;
            }
            break;
          case (MR_Integer) 0:
            {
              Globals_98 = Globals0_16;
              switch (Smart0_106) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    ModulesToRecompile_44 = (MR_Word) ((MR_Unsigned) 0U);
                    STATE_VARIABLE_HaveParseTreeMaps_69_69 = STATE_VARIABLE_HaveParseTreeMaps_0_45;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word ModuleName_109;
                    MR_Word FindTargetFiles_111;
                    MR_Word FindTimestampFiles_112;
                    MR_Word CompilationTarget_118;
                    MR_Word TargetExt_119;
                    MR_Word CompilationTarget_120;
                    MR_Word TimestampExt_121;

                    if (((MR_tag((MR_Word) FileOrModule_20)) == (MR_Integer) 0))
                    {
                      MR_String FileName_110 = ((MR_String) ((MR_hl_field(0, FileOrModule_20, (MR_Integer) 0))));

                      parse_tree__file_names__file_name_to_module_name_2_p_0(FileName_110, &ModuleName_109);
                    }
                    else
                      ModuleName_109 = ((MR_Word) ((MR_hl_field(1, FileOrModule_20, (MR_Integer) 0))));
                    libs__globals__get_target_2_p_0(Globals_98, &CompilationTarget_118);
                    switch (CompilationTarget_118) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        TargetExt_119 = (MR_Word) (MR_mkword(3, &top_level__mercury_compile_main_scalar_common_1[22]));
                        break;
                      case (MR_Integer) 1:
                        TargetExt_119 = (MR_Word) (MR_mkword(3, &top_level__mercury_compile_main_scalar_common_1[23]));
                        break;
                      case (MR_Integer) 2:
                        TargetExt_119 = (MR_Word) (MR_mkword(3, &top_level__mercury_compile_main_scalar_common_1[24]));
                        break;
                    }
                    {
                      FindTargetFiles_111 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(0, FindTargetFiles_111, 0) = ((MR_Box) (&top_level__mercury_compile_main_scalar_common_5[1]));
                      MR_hl_field(0, FindTargetFiles_111, 1) = ((MR_Box) (top_level__mercury_compile_main__do_process_compiler_arg_13_p_0_1));
                      MR_hl_field(0, FindTargetFiles_111, 2) = ((MR_Box) ((MR_Integer) 2));
                      MR_hl_field(0, FindTargetFiles_111, 3) = ((MR_Box) (Globals0_16));
                      MR_hl_field(0, FindTargetFiles_111, 4) = ((MR_Box) (TargetExt_119));
                    }
                    libs__globals__get_target_2_p_0(Globals_98, &CompilationTarget_120);
                    switch (CompilationTarget_120) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        TimestampExt_121 = (MR_Word) (MR_mkword(3, &top_level__mercury_compile_main_scalar_common_1[25]));
                        break;
                      case (MR_Integer) 1:
                        TimestampExt_121 = (MR_Word) (MR_mkword(3, &top_level__mercury_compile_main_scalar_common_1[26]));
                        break;
                      case (MR_Integer) 2:
                        TimestampExt_121 = (MR_Word) (MR_mkword(3, &top_level__mercury_compile_main_scalar_common_1[27]));
                        break;
                    }
                    {
                      FindTimestampFiles_112 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(0, FindTimestampFiles_112, 0) = ((MR_Box) (&top_level__mercury_compile_main_scalar_common_5[1]));
                      MR_hl_field(0, FindTimestampFiles_112, 1) = ((MR_Box) (top_level__mercury_compile_main__do_process_compiler_arg_13_p_0_2));
                      MR_hl_field(0, FindTimestampFiles_112, 2) = ((MR_Box) ((MR_Integer) 2));
                      MR_hl_field(0, FindTimestampFiles_112, 3) = ((MR_Box) (Globals0_16));
                      MR_hl_field(0, FindTimestampFiles_112, 4) = ((MR_Box) (TimestampExt_121));
                    }
                    recompilation__check__should_recompile_10_p_0(ProgressStream_14, Globals_98, ModuleName_109, FindTargetFiles_111, FindTimestampFiles_112, &ModulesToRecompile_44, STATE_VARIABLE_HaveParseTreeMaps_0_45, &STATE_VARIABLE_HaveParseTreeMaps_69_69);
                  }
                  break;
              }
            }
            break;
        }
        succeeded = (ModulesToRecompile_44 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          Var_71 = ((MR_Word) ((MR_hl_field(1, ModulesToRecompile_44, (MR_Integer) 0))));
          succeeded = (Var_71 == (MR_Word) ((MR_Unsigned) 0U));
        }
        if (succeeded)
        {
          SpecsList_31 = (MR_Word) ((MR_Unsigned) 0U);
          *ModulesToLink_21 = (MR_Word) ((MR_Unsigned) 0U);
          *ExtraObjFiles_22 = (MR_Word) ((MR_Unsigned) 0U);
          *STATE_VARIABLE_HaveParseTreeMaps_46 = STATE_VARIABLE_HaveParseTreeMaps_69_69;
        }
        else
        {
          MR_Word Specs_95;

          top_level__mercury_compile_main__read_augment_and_process_module_15_p_0(ProgressStream_14, ErrorStream_15, Globals_98, OpModeAugment_43, InvokedByMmcMake_18, OptionArgs_19, FileOrModule_20, ModulesToRecompile_44, ModulesToLink_21, ExtraObjFiles_22, &Specs_95, STATE_VARIABLE_HaveParseTreeMaps_69_69, STATE_VARIABLE_HaveParseTreeMaps_46);
          {
            SpecsList_31 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, SpecsList_31, 0) = ((MR_Box) (Specs_95));
            MR_hl_field(1, SpecsList_31, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
        }
      }
      break;
  }
  {
    Var_75 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_75, 0) = ((MR_Box) (&top_level__mercury_compile_main_scalar_common_8[1]));
    MR_hl_field(0, Var_75, 1) = ((MR_Box) (top_level__mercury_compile_main__do_process_compiler_arg_13_p_0_3));
    MR_hl_field(0, Var_75, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_75, 3) = ((MR_Box) (ErrorStream_15));
    MR_hl_field(0, Var_75, 4) = ((MR_Box) (Globals0_16));
  }
  mercury__list__foldl_4_p_2((MR_Word) (&top_level__mercury_compile_main_scalar_common_1[2]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_75, SpecsList_31, ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_76_76);
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

            libs__globals__lookup_bool_option_3_p_0(Globals0_18, (MR_Integer) 82, &ReportCmdLineArgsDotErr_30);
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

        libs__globals__lookup_bool_option_3_p_0(Globals0_18, (MR_Integer) 82, &ReportCmdLineArgsDotErr_30);
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
  top_level__mercury_compile_main__read_module_or_file_10_p_0(ProgressStream_16, Globals0_18, &Globals_32, FileOrModule_22, (MR_Integer) 0, &HaveReadSrc_33, STATE_VARIABLE_HaveParseTreeMaps_0_41, &STATE_VARIABLE_HaveParseTreeMaps_50_50);
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
top_level__mercury_compile_main__read_augment_and_process_module_ok_17_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_String conv7_ModuleToLink_4;

  top_level__mercury_compile_main__module_to_link_2_p_0(((MR_Word) (wrapper_arg_1)), &conv7_ModuleToLink_4);
  *wrapper_arg_2 = ((MR_Box) (conv7_ModuleToLink_4));
}

static void MR_CALL 
top_level__mercury_compile_main__read_augment_and_process_module_ok_17_p_0_3(
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
  MR_Word conv3_ExtraObjFiles_24;
  MR_Word conv2_STATE_VARIABLE_Specs_35;
  MR_Word conv1_STATE_VARIABLE_HaveParseTreeMaps_37;

  top_level__mercury_compile_main__augment_and_process_module_15_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 6)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 7)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 8)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 9)))), ((MR_Word) (wrapper_arg_1)), &conv3_ExtraObjFiles_24, ((MR_Word) (wrapper_arg_3)), &conv2_STATE_VARIABLE_Specs_35, ((MR_Word) (wrapper_arg_5)), &conv1_STATE_VARIABLE_HaveParseTreeMaps_37);
  *wrapper_arg_2 = ((MR_Box) (conv3_ExtraObjFiles_24));
  *wrapper_arg_4 = ((MR_Box) (conv2_STATE_VARIABLE_Specs_35));
  *wrapper_arg_6 = ((MR_Box) (conv1_STATE_VARIABLE_HaveParseTreeMaps_37));
}

static void MR_CALL 
top_level__mercury_compile_main__read_augment_and_process_module_ok_17_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_TimestampFiles_10;

  top_level__mercury_compile_main__find_timestamp_files_2_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv0_TimestampFiles_10);
  *wrapper_arg_2 = ((MR_Box) (conv0_TimestampFiles_10));
}

static MR_bool MR_CALL 
top_level__mercury_compile_main__read_augment_and_process_module_ok_17_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = top_level__mercury_compile_main__IntroducedFrom__pred__read_augment_and_process_module_ok__1703__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
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
  MR_Word * STATE_VARIABLE_Specs_45,
  MR_Word STATE_VARIABLE_HaveParseTreeMaps_0_46,
  MR_Word * STATE_VARIABLE_HaveParseTreeMaps_47)
{
  MR_bool succeeded;
  MR_Word ModuleName_33 = ((MR_Word) ((MR_hl_field(0, ParseTreeSrc_26, (MR_Integer) 0))));
  MR_Word BurdenedModules0_34;
  MR_Word BurdenedModulesToRecompile_40;
  MR_Word FindTimestampFiles_41;
  MR_Word TraceProf_42;
  MR_Word GlobalsToUse_44;
  MR_Word STATE_VARIABLE_Specs_50_50;
  MR_Word CompilationTarget_102;
  MR_Word TimestampExt_103;
  MR_Word ExtraObjFileLists_104;
  MR_Word Var_105;
  MR_Word Var_100;
  MR_Box conv6_STATE_VARIABLE_Specs_45;
  MR_Box conv5_STATE_VARIABLE_HaveParseTreeMaps_47;
  MR_Box conv4_STATE_VARIABLE_IO_49;

  parse_tree__module_baggage__parse_tree_src_to_burdened_module_list_7_p_0(Globals_20, SourceFileName_23, ReadModuleErrors_25, MaybeTimestamp_24, ParseTreeSrc_26, &STATE_VARIABLE_Specs_50_50, &BurdenedModules0_34);
  if ((MaybeModulesToRecompile_27 == (MR_Word) ((MR_Unsigned) 0U)))
    BurdenedModulesToRecompile_40 = BurdenedModules0_34;
  else
  {
    MR_Word ModulesToRecompile_35 = ((MR_Word) ((MR_hl_field(1, MaybeModulesToRecompile_27, (MR_Integer) 0))));
    MR_Word ToRecompile_36;

    {
      ToRecompile_36 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, ToRecompile_36, 0) = ((MR_Box) (&top_level__mercury_compile_main_scalar_common_4[2]));
      MR_hl_field(0, ToRecompile_36, 1) = ((MR_Box) (top_level__mercury_compile_main__read_augment_and_process_module_ok_17_p_0_1));
      MR_hl_field(0, ToRecompile_36, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, ToRecompile_36, 3) = ((MR_Box) (ModulesToRecompile_35));
    }
    mercury__list__filter_3_p_0((MR_Word) (&parse_tree__module_baggage__parse_tree__module_baggage__type_ctor_info_burdened_module_0), ToRecompile_36, BurdenedModules0_34, &BurdenedModulesToRecompile_40);
  }
  libs__globals__get_target_2_p_0(Globals_20, &CompilationTarget_102);
  switch (CompilationTarget_102) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      TimestampExt_103 = (MR_Word) (MR_mkword(3, &top_level__mercury_compile_main_scalar_common_1[25]));
      break;
    case (MR_Integer) 1:
      TimestampExt_103 = (MR_Word) (MR_mkword(3, &top_level__mercury_compile_main_scalar_common_1[26]));
      break;
    case (MR_Integer) 2:
      TimestampExt_103 = (MR_Word) (MR_mkword(3, &top_level__mercury_compile_main_scalar_common_1[27]));
      break;
  }
  {
    FindTimestampFiles_41 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, FindTimestampFiles_41, 0) = ((MR_Box) (&top_level__mercury_compile_main_scalar_common_5[1]));
    MR_hl_field(0, FindTimestampFiles_41, 1) = ((MR_Box) (top_level__mercury_compile_main__read_augment_and_process_module_ok_17_p_0_2));
    MR_hl_field(0, FindTimestampFiles_41, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, FindTimestampFiles_41, 3) = ((MR_Box) (Globals_20));
    MR_hl_field(0, FindTimestampFiles_41, 4) = ((MR_Box) (TimestampExt_103));
  }
  libs__globals__lookup_bool_option_3_p_0(Globals_20, (MR_Integer) 160, &TraceProf_42);
  succeeded = mdbcomp__builtin_modules__non_traced_mercury_builtin_module_1_p_0(ModuleName_33);
  if (succeeded)
  {
    Var_100 = mdbcomp__builtin_modules__mercury_profiling_builtin_module_0_f_0();
    succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ModuleName_33, Var_100);
    if (succeeded)
      succeeded = (TraceProf_42 == (MR_Integer) 1);
    succeeded = !(succeeded);
  }
  if (succeeded)
  {
    MR_Word Globals1_43;

    libs__globals__set_option_4_p_0((MR_Integer) 323, (MR_Word) (MR_mkword(1, &top_level__mercury_compile_main_scalar_common_3[1])), Globals_20, &Globals1_43);
    libs__globals__set_trace_level_none_2_p_0(Globals1_43, &GlobalsToUse_44);
  }
  else
    GlobalsToUse_44 = Globals_20;
  {
    Var_105 = (MR_Word) MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_105, 0) = ((MR_Box) (&top_level__mercury_compile_main_scalar_common_10[0]));
    MR_hl_field(0, Var_105, 1) = ((MR_Box) (top_level__mercury_compile_main__read_augment_and_process_module_ok_17_p_0_3));
    MR_hl_field(0, Var_105, 2) = ((MR_Box) ((MR_Integer) 7));
    MR_hl_field(0, Var_105, 3) = ((MR_Box) (ProgressStream_18));
    MR_hl_field(0, Var_105, 4) = ((MR_Box) (ErrorStream_19));
    MR_hl_field(0, Var_105, 5) = ((MR_Box) (GlobalsToUse_44));
    MR_hl_field(0, Var_105, 6) = ((MR_Box) (OpModeAugment_21));
    MR_hl_field(0, Var_105, 7) = ((MR_Box) (InvokedByMmcMake_22));
    MR_hl_field(0, Var_105, 8) = ((MR_Box) (MaybeTimestamp_24));
    MR_hl_field(0, Var_105, 9) = ((MR_Box) (FindTimestampFiles_41));
  }
  mercury__list__map_foldl3_9_p_0((MR_Word) (&parse_tree__module_baggage__parse_tree__module_baggage__type_ctor_info_burdened_module_0), (MR_Word) (&top_level__mercury_compile_main_scalar_common_1[0]), (MR_Word) (&top_level__mercury_compile_main_scalar_common_1[2]), (MR_Word) (&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_parse_tree_maps_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_105, BurdenedModulesToRecompile_40, &ExtraObjFileLists_104, ((MR_Box) (STATE_VARIABLE_Specs_50_50)), &conv6_STATE_VARIABLE_Specs_45, ((MR_Box) (STATE_VARIABLE_HaveParseTreeMaps_0_46)), &conv5_STATE_VARIABLE_HaveParseTreeMaps_47, ((MR_Box) ((MR_Integer) 0)), &conv4_STATE_VARIABLE_IO_49);
  *STATE_VARIABLE_Specs_45 = ((MR_Word) (conv6_STATE_VARIABLE_Specs_45));
  *STATE_VARIABLE_HaveParseTreeMaps_47 = ((MR_Word) (conv5_STATE_VARIABLE_HaveParseTreeMaps_47));
  mercury__list__map_3_p_0((MR_Word) (&parse_tree__module_baggage__parse_tree__module_baggage__type_ctor_info_burdened_module_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&top_level__mercury_compile_main_scalar_common_2[11]), BurdenedModulesToRecompile_40, ModulesToLink_28);
  mercury__list__condense_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ExtraObjFileLists_104, ExtraObjFiles_29);
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

  succeeded = top_level__mercury_compile_main__IntroducedFrom__pred__do_process_compiler_arg_make_interface__1472__1_1_p_0(((MR_Word) (wrapper_arg_1)));
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

        libs__globals__lookup_bool_option_3_p_0(Globals0_11, (MR_Integer) 156, &GenerateVersionNumbers_18);
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
        MR_Word GenerateVersionNumbers_63;

        libs__globals__lookup_bool_option_3_p_0(Globals0_11, (MR_Integer) 156, &GenerateVersionNumbers_63);
        switch (GenerateVersionNumbers_63) {
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

            mercury__list__filter_3_p_0((MR_Word) (&parse_tree__module_baggage__parse_tree__module_baggage__type_ctor_info_burdened_module_0), (MR_Word) (&top_level__mercury_compile_main_scalar_common_2[10]), BurdenedModules_29, &AncestorBurdenedModules_37);
            {
              Var_51 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_51, 0) = ((MR_Box) (&top_level__mercury_compile_main_scalar_common_9[0]));
              MR_hl_field(0, Var_51, 1) = ((MR_Box) (top_level__mercury_compile_main__do_process_compiler_arg_make_interface_9_p_0_2));
              MR_hl_field(0, Var_51, 2) = ((MR_Box) ((MR_Integer) 3));
              MR_hl_field(0, Var_51, 3) = ((MR_Box) (ProgressStream_10));
              MR_hl_field(0, Var_51, 4) = ((MR_Box) (Globals0_11));
              MR_hl_field(0, Var_51, 5) = ((MR_Box) ((MR_Integer) 0));
            }
            mercury__list__map2_foldl2_8_p_0((MR_Word) (&parse_tree__module_baggage__parse_tree__module_baggage__type_ctor_info_burdened_module_0), (MR_Word) (&libs__maybe_util__libs__maybe_util__type_ctor_info_maybe_succeeded_0), (MR_Word) (&top_level__mercury_compile_main_scalar_common_1[2]), (MR_Word) (&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_parse_tree_maps_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_51, AncestorBurdenedModules_37, &_Succeededs_38, &WriteSpecsList_39, ((MR_Box) (STATE_VARIABLE_HaveParseTreeMaps_46_46)), &conv4_STATE_VARIABLE_HaveParseTreeMaps_41, ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_IO_43);
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
              MR_hl_field(0, Var_55, 0) = ((MR_Box) (&top_level__mercury_compile_main_scalar_common_9[0]));
              MR_hl_field(0, Var_55, 1) = ((MR_Box) (top_level__mercury_compile_main__do_process_compiler_arg_make_interface_9_p_0_3));
              MR_hl_field(0, Var_55, 2) = ((MR_Box) ((MR_Integer) 3));
              MR_hl_field(0, Var_55, 3) = ((MR_Box) (ProgressStream_10));
              MR_hl_field(0, Var_55, 4) = ((MR_Box) (Globals0_11));
              MR_hl_field(0, Var_55, 5) = ((MR_Box) ((MR_Integer) 0));
            }
            mercury__list__map2_foldl2_8_p_0((MR_Word) (&parse_tree__module_baggage__parse_tree__module_baggage__type_ctor_info_burdened_module_0), (MR_Word) (&libs__maybe_util__libs__maybe_util__type_ctor_info_maybe_succeeded_0), (MR_Word) (&top_level__mercury_compile_main_scalar_common_1[2]), (MR_Word) (&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_parse_tree_maps_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_55, BurdenedModules_29, &_Succeededs_65, &WriteSpecsList_39, ((MR_Box) (STATE_VARIABLE_HaveParseTreeMaps_46_46)), &conv9_STATE_VARIABLE_HaveParseTreeMaps_41, ((MR_Box) ((MR_Integer) 0)), &conv8_STATE_VARIABLE_IO_43);
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
              MR_hl_field(0, Var_59, 0) = ((MR_Box) (&top_level__mercury_compile_main_scalar_common_9[0]));
              MR_hl_field(0, Var_59, 1) = ((MR_Box) (top_level__mercury_compile_main__do_process_compiler_arg_make_interface_9_p_0_4));
              MR_hl_field(0, Var_59, 2) = ((MR_Box) ((MR_Integer) 3));
              MR_hl_field(0, Var_59, 3) = ((MR_Box) (ProgressStream_10));
              MR_hl_field(0, Var_59, 4) = ((MR_Box) (Globals0_11));
              MR_hl_field(0, Var_59, 5) = ((MR_Box) ((MR_Integer) 0));
            }
            mercury__list__map2_foldl2_8_p_0((MR_Word) (&parse_tree__module_baggage__parse_tree__module_baggage__type_ctor_info_burdened_module_0), (MR_Word) (&libs__maybe_util__libs__maybe_util__type_ctor_info_maybe_succeeded_0), (MR_Word) (&top_level__mercury_compile_main_scalar_common_1[2]), (MR_Word) (&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_parse_tree_maps_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_59, BurdenedModules_29, &_Succeededs_67, &WriteSpecsList_39, ((MR_Box) (STATE_VARIABLE_HaveParseTreeMaps_46_46)), &conv14_STATE_VARIABLE_HaveParseTreeMaps_41, ((MR_Box) ((MR_Integer) 0)), &conv13_STATE_VARIABLE_IO_43);
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

  libs__globals__lookup_bool_option_3_p_0(Globals0_12, (MR_Integer) 73, &Verbose_19);
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
  succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&top_level__mercury_compile_main_scalar_common_1[5]), Var_55, ((MR_Box) (ModuleName_20)), &conv0_HaveSrc0_24);
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
    mercury__map__delete_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&top_level__mercury_compile_main_scalar_common_1[5]), ((MR_Box) (ModuleName_20)), HaveReadModuleMapSrc0_33, &HaveReadModuleMapSrc_34);
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
        libs__globals__set_option_4_p_0((MR_Integer) 155, (MR_Word) (MR_mkword(1, &top_level__mercury_compile_main_scalar_common_3[1])), Globals0_12, Globals_13);
        break;
      case (MR_Integer) 0:
        *Globals_13 = Globals0_12;
        break;
    }
    *STATE_VARIABLE_HaveParseTreeMaps_42 = STATE_VARIABLE_HaveParseTreeMaps_0_41;
  }
  libs__globals__lookup_bool_option_3_p_0(*Globals_13, (MR_Integer) 84, &Stats_40);
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
  mercury__list__filter_map_foldl_5_p_0((MR_Word) (&parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_deps_0), (MR_Word) (&parse_tree__module_baggage__parse_tree__module_baggage__type_ctor_info_burdened_module_0), (MR_Word) (&top_level__mercury_compile_main_scalar_common_1[3]), (MR_Word) (&top_level__mercury_compile_main_scalar_common_2[8]), DepsList_16, &BurdenedModules_17, ((MR_Box) ((MR_Unsigned) 0U)), &conv2_Ancestors_18);
  Ancestors_18 = ((MR_Word) (conv2_Ancestors_18));
  {
    Var_44 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_44, 0) = ((MR_Box) (&top_level__mercury_compile_main_scalar_common_9[0]));
    MR_hl_field(0, Var_44, 1) = ((MR_Box) (top_level__mercury_compile_main__deps_make_ints_9_p_0_2));
    MR_hl_field(0, Var_44, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(0, Var_44, 3) = ((MR_Box) (ProgressStream_10));
    MR_hl_field(0, Var_44, 4) = ((MR_Box) (Globals_11));
    MR_hl_field(0, Var_44, 5) = ((MR_Box) ((MR_Integer) 1));
  }
  mercury__list__map2_foldl2_8_p_0((MR_Word) (&parse_tree__module_baggage__parse_tree__module_baggage__type_ctor_info_burdened_module_0), (MR_Word) (&libs__maybe_util__libs__maybe_util__type_ctor_info_maybe_succeeded_0), (MR_Word) (&top_level__mercury_compile_main_scalar_common_1[2]), (MR_Word) (&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_parse_tree_maps_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_44, BurdenedModules_17, &_Succeededs3_19, &SpecsList3_20, ((MR_Box) (STATE_VARIABLE_HaveParseTreeMaps_0_38)), &conv7_STATE_VARIABLE_HaveParseTreeMaps_45_45, ((MR_Box) ((MR_Integer) 0)), &conv6_STATE_VARIABLE_IO_46_46);
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
        mercury__assoc_list__values_2_p_0((MR_Word) (&top_level__mercury_compile_main_scalar_common_1[0]), (MR_Word) (&parse_tree__module_baggage__parse_tree__module_baggage__type_ctor_info_burdened_module_0), SortedAncestors_23, &AncestorBurdenedModules_24);
        {
          Var_49 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_49, 0) = ((MR_Box) (&top_level__mercury_compile_main_scalar_common_9[0]));
          MR_hl_field(0, Var_49, 1) = ((MR_Box) (top_level__mercury_compile_main__deps_make_ints_9_p_0_3));
          MR_hl_field(0, Var_49, 2) = ((MR_Box) ((MR_Integer) 3));
          MR_hl_field(0, Var_49, 3) = ((MR_Box) (ProgressStream_10));
          MR_hl_field(0, Var_49, 4) = ((MR_Box) (Globals_11));
          MR_hl_field(0, Var_49, 5) = ((MR_Box) ((MR_Integer) 1));
        }
        mercury__list__map2_foldl2_8_p_0((MR_Word) (&parse_tree__module_baggage__parse_tree__module_baggage__type_ctor_info_burdened_module_0), (MR_Word) (&libs__maybe_util__libs__maybe_util__type_ctor_info_maybe_succeeded_0), (MR_Word) (&top_level__mercury_compile_main_scalar_common_1[2]), (MR_Word) (&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_parse_tree_maps_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_49, AncestorBurdenedModules_24, &_Succeededs0_25, &RawSpecsList0_26, ((MR_Box) (STATE_VARIABLE_HaveParseTreeMaps_45_45)), &conv12_STATE_VARIABLE_HaveParseTreeMaps_50_50, ((MR_Box) ((MR_Integer) 0)), &conv11_STATE_VARIABLE_IO_51_51);
        STATE_VARIABLE_HaveParseTreeMaps_50_50 = ((MR_Word) (conv12_STATE_VARIABLE_HaveParseTreeMaps_50_50));
        mercury__list__condense_2_p_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), RawSpecsList0_26, &RawSpecs0_27);
        mercury__list__foldl2_6_p_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), (MR_Word) (&top_level__mercury_compile_main_scalar_common_1[4]), (MR_Word) (&top_level__mercury_compile_main_scalar_common_1[2]), (MR_Word) (&top_level__mercury_compile_main_scalar_common_2[9]), RawSpecs0_27, ((MR_Box) ((MR_Unsigned) 0U)), &conv16_NotFoundFiles_80, ((MR_Box) ((MR_Unsigned) 0U)), &conv15_OtherSpecs_81);
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
            NotFoundPieces_85 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &top_level__mercury_compile_main_scalar_common_1[16])), Var_93);
          }
          else
          {
            MR_Word Var_95;

            Var_95 = parse_tree__error_spec__indented_list_1_f_0(FilesToShow_83);
            NotFoundPieces_85 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &top_level__mercury_compile_main_scalar_common_1[19])), Var_95);
          }
          Pieces_86 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), NotFoundPieces_85, (MR_Word) (MR_mkword(1, &top_level__mercury_compile_main_scalar_common_1[21])));
          {
            Spec_87 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(2, Spec_87, 0) = ((MR_Box) ((MR_String) "predicate \140top_level.mercury_compile_main.handle_not_found_files\'/3"));
            MR_hl_field(2, Spec_87, 1) = ((MR_Box) ((MR_Unsigned) 8U));
            MR_hl_field(2, Spec_87, 2) = ((MR_Box) ((MR_Unsigned) 16U));
            MR_hl_field(2, Spec_87, 3) = ((MR_Box) (Pieces_86));
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
            MR_hl_field(0, Var_54, 0) = ((MR_Box) (&top_level__mercury_compile_main_scalar_common_9[0]));
            MR_hl_field(0, Var_54, 1) = ((MR_Box) (top_level__mercury_compile_main__deps_make_ints_9_p_0_5));
            MR_hl_field(0, Var_54, 2) = ((MR_Box) ((MR_Integer) 3));
            MR_hl_field(0, Var_54, 3) = ((MR_Box) (ProgressStream_10));
            MR_hl_field(0, Var_54, 4) = ((MR_Box) (Globals_11));
            MR_hl_field(0, Var_54, 5) = ((MR_Box) ((MR_Integer) 1));
          }
          mercury__list__map2_foldl2_8_p_0((MR_Word) (&parse_tree__module_baggage__parse_tree__module_baggage__type_ctor_info_burdened_module_0), (MR_Word) (&libs__maybe_util__libs__maybe_util__type_ctor_info_maybe_succeeded_0), (MR_Word) (&top_level__mercury_compile_main_scalar_common_1[2]), (MR_Word) (&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_parse_tree_maps_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_54, BurdenedModules_17, &_Succeededs12_31, &RawSpecsList12_32, ((MR_Box) (STATE_VARIABLE_HaveParseTreeMaps_50_50)), &conv21_STATE_VARIABLE_HaveParseTreeMaps_39, ((MR_Box) ((MR_Integer) 0)), &conv20_STATE_VARIABLE_IO_41);
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

  mercury__list__foldl2_6_p_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), (MR_Word) (&top_level__mercury_compile_main_scalar_common_1[4]), (MR_Word) (&top_level__mercury_compile_main_scalar_common_1[2]), (MR_Word) (&top_level__mercury_compile_main_scalar_common_2[7]), Specs0_4, ((MR_Box) ((MR_Unsigned) 0U)), &conv3_NotFoundFiles_7, ((MR_Box) ((MR_Unsigned) 0U)), &conv2_OtherSpecs_8);
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
      NotFoundPieces_14 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &top_level__mercury_compile_main_scalar_common_1[16])), Var_31);
    }
    else
    {
      MR_Word Var_40;

      Var_40 = parse_tree__error_spec__indented_list_1_f_0(FilesToShow_12);
      NotFoundPieces_14 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &top_level__mercury_compile_main_scalar_common_1[19])), Var_40);
    }
    Pieces_17 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), NotFoundPieces_14, (MR_Word) (MR_mkword(1, &top_level__mercury_compile_main_scalar_common_1[21])));
    {
      Spec_18 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(2, Spec_18, 0) = ((MR_Box) ((MR_String) "predicate \140top_level.mercury_compile_main.handle_not_found_files\'/3"));
      MR_hl_field(2, Spec_18, 1) = ((MR_Box) ((MR_Unsigned) 8U));
      MR_hl_field(2, Spec_18, 2) = ((MR_Box) ((MR_Unsigned) 16U));
      MR_hl_field(2, Spec_18, 3) = ((MR_Box) (Pieces_17));
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

  *((env_ptr)->top_level__mercury_compile_main__do_op_mode_query_6_p_0_4_env_0__wrapper_arg_1) = ((MR_Box) ((env_ptr)->top_level__mercury_compile_main__do_op_mode_query_6_p_0_4_env_0__conv2_LambdaHeadVar__1_65));
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

    top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_query__770__1_1_p_0(&(env).top_level__mercury_compile_main__do_op_mode_query_6_p_0_4_env_0__conv2_LambdaHeadVar__1_65, top_level__mercury_compile_main__do_op_mode_query_6_p_0_3, &env);
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

  top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_query__763__1_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_String) (wrapper_arg_1)));
}

static void MR_CALL 
top_level__mercury_compile_main__do_op_mode_query_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  top_level__mercury_compile_main__IntroducedFrom__pred__do_op_mode_query__754__1_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_String) (wrapper_arg_1)));
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

        libs__globals__lookup_string_option_3_p_0(Globals_8, (MR_Integer) 565, &CC_Type_14);
        mercury__io__print_line_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), StdOutStream_12, ((MR_Box) (CC_Type_14)));
      }
      break;
    case (MR_Integer) 3:
      backend_libs__compile_target_code__output_c_include_directory_flags_4_p_0(Globals_8, StdOutStream_12);
      break;
    case (MR_Integer) 0:
      {
        MR_String CC_13;

        libs__globals__lookup_string_option_3_p_0(Globals_8, (MR_Integer) 541, &CC_13);
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

        libs__globals__lookup_string_option_3_p_0(Globals_8, (MR_Integer) 574, &CSC_15);
        mercury__io__print_line_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), StdOutStream_12, ((MR_Box) (CSC_15)));
      }
      break;
    case (MR_Integer) 6:
      {
        MR_String CSC_Type_16;

        libs__globals__lookup_string_option_3_p_0(Globals_8, (MR_Integer) 566, &CSC_Type_16);
        mercury__io__print_line_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), StdOutStream_12, ((MR_Box) (CSC_Type_16)));
      }
      break;
    case (MR_Integer) 4:
      backend_libs__compile_target_code__output_c_grade_defines_4_p_0(Globals_8, StdOutStream_12);
      break;
    case (MR_Integer) 11:
      {
        MR_String Grade_20;

        libs__compute_grade__grade_directory_component_2_p_0(Globals_8, &Grade_20);
        mercury__io__print_line_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), StdOutStream_12, ((MR_Box) (Grade_20)));
      }
      break;
    case (MR_Integer) 7:
      {
        MR_Word ClassDirNames_17;
        MR_String ClassDirName_18;

        parse_tree__file_names__get_java_dir_path_3_p_0(Globals_8, (MR_Integer) 1, &ClassDirNames_17);
        ClassDirName_18 = mercury__dir__relative_path_name_from_components_1_f_0(ClassDirNames_17);
        mercury__io__print_line_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), StdOutStream_12, ((MR_Box) (ClassDirName_18)));
      }
      break;
    case (MR_Integer) 12:
      {
        MR_Word LibGrades_21;
        MR_Word Var_58;
        MR_Box conv0_STATE_VARIABLE_IO_35;

        libs__globals__lookup_accumulating_option_3_p_0(Globals_8, (MR_Integer) 681, &LibGrades_21);
        {
          Var_58 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_58, 0) = ((MR_Box) (&top_level__mercury_compile_main_scalar_common_6[0]));
          MR_hl_field(0, Var_58, 1) = ((MR_Box) (top_level__mercury_compile_main__do_op_mode_query_6_p_0_1));
          MR_hl_field(0, Var_58, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(0, Var_58, 3) = ((MR_Box) (StdOutStream_12));
        }
        mercury__list__foldl_4_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_58, LibGrades_21, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_35);
      }
      break;
    case (MR_Integer) 10:
      backend_libs__compile_target_code__output_library_link_flags_4_p_0(Globals_8, StdOutStream_12);
      break;
    case (MR_Integer) 8:
      {
        MR_String LinkCommand_19;

        libs__globals__lookup_string_option_3_p_0(Globals_8, (MR_Integer) 617, &LinkCommand_19);
        mercury__io__print_line_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), StdOutStream_12, ((MR_Box) (LinkCommand_19)));
      }
      break;
    case (MR_Integer) 9:
      {
        MR_String LinkCommand_74;

        libs__globals__lookup_string_option_3_p_0(Globals_8, (MR_Integer) 618, &LinkCommand_74);
        mercury__io__print_line_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), StdOutStream_12, ((MR_Box) (LinkCommand_74)));
      }
      break;
    case (MR_Integer) 13:
      {
        MR_Word OptionTable_22;
        MR_Word MaybeMerStdLibDir_23;

        libs__globals__get_options_2_p_0(Globals_8, &OptionTable_22);
        libs__check_libgrades__find_mercury_stdlib_5_p_0(OptionTable_22, OptionVariables_10, &MaybeMerStdLibDir_23);
        if (((MR_tag((MR_Word) MaybeMerStdLibDir_23)) == (MR_Integer) 0))
        {
          MR_Word Specs_26 = ((MR_Word) ((MR_hl_field(0, MaybeMerStdLibDir_23, (MR_Integer) 0))));

          parse_tree__write_error_spec__write_error_specs_5_p_0(ErrorStream_7, Globals_8, Specs_26);
        }
        else
        {
          MR_String MerStdLibDir_24 = ((MR_String) ((MR_hl_field(1, MaybeMerStdLibDir_23, (MR_Integer) 0))));
          MR_Word StdlibGrades_25;
          MR_Word Var_62;
          MR_Box conv1_STATE_VARIABLE_IO_35;

          libs__check_libgrades__do_detect_libgrades_4_p_0(MerStdLibDir_24, &StdlibGrades_25);
          {
            Var_62 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_62, 0) = ((MR_Box) (&top_level__mercury_compile_main_scalar_common_6[0]));
            MR_hl_field(0, Var_62, 1) = ((MR_Box) (top_level__mercury_compile_main__do_op_mode_query_6_p_0_2));
            MR_hl_field(0, Var_62, 2) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(0, Var_62, 3) = ((MR_Box) (StdOutStream_12));
          }
          mercury__set__fold_4_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_62, StdlibGrades_25, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_35);
        }
      }
      break;
    case (MR_Integer) 14:
      {
        MR_Word StdlibLines_32;
        MR_Word Var_70;
        MR_Box conv3_STATE_VARIABLE_IO_35;

        mercury__solutions__solutions_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&top_level__mercury_compile_main_scalar_common_2[6]), &StdlibLines_32);
        {
          Var_70 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_70, 0) = ((MR_Box) (&top_level__mercury_compile_main_scalar_common_6[0]));
          MR_hl_field(0, Var_70, 1) = ((MR_Box) (top_level__mercury_compile_main__do_op_mode_query_6_p_0_5));
          MR_hl_field(0, Var_70, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(0, Var_70, 3) = ((MR_Box) (StdOutStream_12));
        }
        mercury__list__foldl_4_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_70, StdlibLines_32, ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_IO_35);
      }
      break;
    case (MR_Integer) 15:
      {
        MR_String TargetArch_33;

        libs__globals__lookup_string_option_3_p_0(Globals_8, (MR_Integer) 709, &TargetArch_33);
        mercury__io__print_line_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), StdOutStream_12, ((MR_Box) (TargetArch_33)));
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
          MR_hl_field(1, Var_35, 1) = ((MR_Box) (MR_mkword(1, &top_level__mercury_compile_main_scalar_common_1[8])));
        }
        {
          Var_32 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_32, 0) = ((MR_Box) (MR_mkword(3, &top_level__mercury_compile_main_scalar_common_1[12])));
          MR_hl_field(1, Var_32, 1) = ((MR_Box) (Var_35));
        }
        {
          Var_29 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_29, 0) = ((MR_Box) (MR_mkword(3, &top_level__mercury_compile_main_scalar_common_1[11])));
          MR_hl_field(1, Var_29, 1) = ((MR_Box) (Var_32));
        }
        {
          Var_26 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_26, 0) = ((MR_Box) (MR_mkword(3, &top_level__mercury_compile_main_scalar_common_1[10])));
          MR_hl_field(1, Var_26, 1) = ((MR_Box) (Var_29));
        }
        {
          Var_24 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_24, 0) = ((MR_Box) ((MR_Unsigned) 8U));
          MR_hl_field(1, Var_24, 1) = ((MR_Box) (Var_26));
        }
        {
          Var_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_21, 0) = ((MR_Box) (MR_mkword(3, &top_level__mercury_compile_main_scalar_common_1[9])));
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

static MR_bool MR_CALL 
top_level__mercury_compile_main__process_options_std_7_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_Word conv3_HeadVar__4_4;
  MR_Word conv2_HeadVar__6_6;

  succeeded = libs__options__special_handler_6_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv3_HeadVar__4_4, ((MR_Word) (wrapper_arg_5)), &conv2_HeadVar__6_6);
  if (succeeded)
  {
    *wrapper_arg_4 = ((MR_Box) (conv3_HeadVar__4_4));
    *wrapper_arg_6 = ((MR_Box) (conv2_HeadVar__6_6));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static MR_bool MR_CALL 
top_level__mercury_compile_main__process_options_std_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_Word conv1_HeadVar__2_2;

  succeeded = libs__options__long_option_2_p_0(((MR_String) (wrapper_arg_1)), &conv1_HeadVar__2_2);
  if (succeeded)
  {
    *wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_2));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static MR_bool MR_CALL 
top_level__mercury_compile_main__process_options_std_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__2_2;

  succeeded = libs__options__short_option_2_p_0(((MR_Char) (MR_Word) wrapper_arg_1), &conv0_HeadVar__2_2);
  if (succeeded)
  {
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static void MR_CALL 
top_level__mercury_compile_main__process_options_std_7_p_0(
  MR_Word ProgressStream_8,
  MR_Word ErrorStream_9,
  MR_Word DefaultOptionTable_10,
  MR_Word CmdLineArgs_11,
  MR_Word * Result_12)
{
  MR_bool succeeded;
  MR_Word OptionArgs_15;
  MR_Word NonOptionArgs_16;
  MR_Word MaybeError_17;
  MR_Word ArgsOptionTable_19;
  MR_Word Var_54;
  MR_Word _OptionsSet_18;
  MR_Box conv4__UserData_20;

  Var_54 = mercury__cord__init_0_f_0((MR_Word) (&libs__optimization_options__libs__optimization_options__type_ctor_info_optimization_option_0));
  mercury__getopt__process_options_userdata_io_12_p_0((MR_Word) (&libs__options__libs__options__type_ctor_info_option_0), (MR_Word) (&top_level__mercury_compile_main_scalar_common_1[1]), (MR_Word) (&top_level__mercury_compile_main_scalar_common_2[5]), CmdLineArgs_11, &OptionArgs_15, &NonOptionArgs_16, &MaybeError_17, &_OptionsSet_18, DefaultOptionTable_10, &ArgsOptionTable_19, ((MR_Box) (Var_54)), &conv4__UserData_20);
  if ((MaybeError_17 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word OptionSearchDirectories_24;
    MR_Word OptionsFiles_25;
    MR_Word OptionsVariables0_26;
    MR_Word OptFileNonUndefSpecs_27;
    MR_Word OptFileUndefSpecs_28;
    MR_Word WarnUndef_29;
    MR_Word OptFileSpecs_30;
    MR_Word EnvVarMap_31;

    mercury__getopt__lookup_accumulating_option_3_p_0((MR_Word) (&libs__options__libs__options__type_ctor_info_option_0), ArgsOptionTable_19, ((MR_Box) ((MR_Integer) 688)), &OptionSearchDirectories_24);
    mercury__getopt__lookup_accumulating_option_3_p_0((MR_Word) (&libs__options__libs__options__type_ctor_info_option_0), ArgsOptionTable_19, ((MR_Box) ((MR_Integer) 686)), &OptionsFiles_25);
    make__options_file__read_options_files_named_in_options_file_option_8_p_0(ProgressStream_8, OptionSearchDirectories_24, OptionsFiles_25, &OptionsVariables0_26, &OptFileNonUndefSpecs_27, &OptFileUndefSpecs_28);
    mercury__getopt__lookup_bool_option_3_p_0((MR_Word) (&libs__options__libs__options__type_ctor_info_option_0), ArgsOptionTable_19, ((MR_Box) ((MR_Integer) 33)), &WarnUndef_29);
    switch (WarnUndef_29) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        OptFileSpecs_30 = OptFileNonUndefSpecs_27;
        break;
      case (MR_Integer) 1:
        OptFileSpecs_30 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), OptFileNonUndefSpecs_27, OptFileUndefSpecs_28);
        break;
    }
    mercury__io__environment__get_environment_var_map_3_p_0(&EnvVarMap_31);
    if ((OptFileSpecs_30 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word MaybeMCFlags0_32;
      MR_String DumpOptionsFile_101;

      mercury__getopt__lookup_string_option_3_p_0((MR_Word) (&libs__options__libs__options__type_ctor_info_option_0), ArgsOptionTable_19, ((MR_Box) ((MR_Integer) 211)), &DumpOptionsFile_101);
      succeeded = (strcmp(DumpOptionsFile_101, (MR_String) "") == 0);
      if (!(succeeded))
        make__options_file__dump_options_file_5_p_0(ErrorStream_9, DumpOptionsFile_101, OptionsVariables0_26);
      make__options_file__lookup_mmc_options_2_p_0(OptionsVariables0_26, &MaybeMCFlags0_32);
      if (((MR_tag((MR_Word) MaybeMCFlags0_32)) == (MR_Integer) 0))
      {
        MR_Word Specs_33 = ((MR_Word) ((MR_hl_field(0, MaybeMCFlags0_32, (MR_Integer) 0))));

        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *Result_12 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Specs_33));
        }
      }
      else
      {
        MR_Word MCFlags0_34 = ((MR_Word) ((MR_hl_field(1, MaybeMCFlags0_32, (MR_Integer) 0))));
        MR_Word FlagsArgsOptionTable_40;
        MR_Word DetectedGradeFlags_42;
        MR_Word OptionsVariables_43;
        MR_Word MaybeMCFlags_44;
        MR_Word OptFileOkSpecs_45;
        MR_Word Var_80;
        MR_Word Var_81;
        MR_Word Specs_84;
        MR_Word _OptionArgsMC_36;
        MR_Word _NonOptionArgsMC_37;
        MR_Word _MaybeErrorMC_38;
        MR_Word _OptionsSetMC_39;
        MR_Box conv5__UserDataMC_41;

        Var_80 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), MCFlags0_34, CmdLineArgs_11);
        Var_81 = mercury__cord__init_0_f_0((MR_Word) (&libs__optimization_options__libs__optimization_options__type_ctor_info_optimization_option_0));
        mercury__getopt__process_options_userdata_io_12_p_0((MR_Word) (&libs__options__libs__options__type_ctor_info_option_0), (MR_Word) (&top_level__mercury_compile_main_scalar_common_1[1]), (MR_Word) (&top_level__mercury_compile_main_scalar_common_2[5]), Var_80, &_OptionArgsMC_36, &_NonOptionArgsMC_37, &_MaybeErrorMC_38, &_OptionsSetMC_39, DefaultOptionTable_10, &FlagsArgsOptionTable_40, ((MR_Box) (Var_81)), &conv5__UserDataMC_41);
        top_level__mercury_compile_main__process_options_std_config_file_11_p_0(ProgressStream_8, FlagsArgsOptionTable_40, EnvVarMap_31, WarnUndef_29, &DetectedGradeFlags_42, OptionsVariables0_26, &OptionsVariables_43, &MaybeMCFlags_44, &OptFileOkSpecs_45);
        Specs_84 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), OptFileSpecs_30, OptFileOkSpecs_45);
        if ((MaybeMCFlags_44 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            *Result_12 = base;
            MR_hl_field(0, base, 0) = ((MR_Box) (Specs_84));
          }
        else
        {
          MR_Word MCFlags_46 = ((MR_Word) ((MR_hl_field(1, MaybeMCFlags_44, (MR_Integer) 0))));

          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
            *Result_12 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (DetectedGradeFlags_42));
            MR_hl_field(1, base, 1) = ((MR_Box) (OptionsVariables_43));
            MR_hl_field(1, base, 2) = ((MR_Box) (MCFlags_46));
            MR_hl_field(1, base, 3) = ((MR_Box) (OptionArgs_15));
            MR_hl_field(1, base, 4) = ((MR_Box) (NonOptionArgs_16));
            MR_hl_field(1, base, 5) = ((MR_Box) (Specs_84));
          }
        }
      }
    }
    else
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *Result_12 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (OptFileSpecs_30));
      }
  }
  else
  {
    MR_Word OptionError_21 = ((MR_Word) ((MR_hl_field(1, MaybeError_17, (MR_Integer) 0))));
    MR_String OptionErrorStr_22;
    MR_Word Spec_23;
    MR_Word Var_59;
    MR_Word Var_60;
    MR_Word Var_67;

    OptionErrorStr_22 = mercury__getopt__option_error_to_string_1_f_0((MR_Word) (&libs__options__libs__options__type_ctor_info_option_0), OptionError_21);
    {
      Var_60 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_60, 0) = ((MR_Box) ((MR_Unsigned) 6U));
      MR_hl_field(3, Var_60, 1) = ((MR_Box) (OptionErrorStr_22));
    }
    {
      Var_59 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_59, 0) = ((MR_Box) (Var_60));
      MR_hl_field(1, Var_59, 1) = ((MR_Box) (MR_mkword(1, &top_level__mercury_compile_main_scalar_common_1[8])));
    }
    {
      Spec_23 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(2, Spec_23, 0) = ((MR_Box) ((MR_String) "predicate \140top_level.mercury_compile_main.process_options_std\'/7"));
      MR_hl_field(2, Spec_23, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(2, Spec_23, 2) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(2, Spec_23, 3) = ((MR_Box) (Var_59));
    }
    {
      Var_67 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_67, 0) = ((MR_Box) (Spec_23));
      MR_hl_field(1, Var_67, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *Result_12 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_67));
    }
  }
}

static void MR_CALL 
top_level__mercury_compile_main__process_options_std_config_file_11_p_0(
  MR_Word ProgressStream_12,
  MR_Word FlagsArgsOptionTable_13,
  MR_Word EnvVarMap_14,
  MR_Word WarnUndef_15,
  MR_Word * DetectedGradeFlags_16,
  MR_Word OptionsVariables0_17,
  MR_Word * OptionsVariables_18,
  MR_Word * MaybeMCFlags_19,
  MR_Word * Specs_20)
{
  MR_bool succeeded;
  MR_Word MaybeConfigFile0_22;
  MR_Word MaybeConfigFile_25;
  MR_String Var_41;

  mercury__getopt__lookup_maybe_string_option_3_p_0((MR_Word) (&libs__options__libs__options__type_ctor_info_option_0), FlagsArgsOptionTable_13, ((MR_Box) ((MR_Integer) 687)), &MaybeConfigFile0_22);
  succeeded = (MaybeConfigFile0_22 != (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    Var_41 = ((MR_String) ((MR_hl_field(1, MaybeConfigFile0_22, (MR_Integer) 0))));
    succeeded = (strcmp(Var_41, (MR_String) "") == 0);
  }
  if (succeeded)
  {
    MR_Word MaybeConfDir_23;

    mercury__getopt__lookup_maybe_string_option_3_p_0((MR_Word) (&libs__options__libs__options__type_ctor_info_option_0), FlagsArgsOptionTable_13, ((MR_Box) ((MR_Integer) 675)), &MaybeConfDir_23);
    if ((MaybeConfDir_23 == (MR_Word) ((MR_Unsigned) 0U)))
      MaybeConfigFile_25 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_String ConfDir_24 = ((MR_String) ((MR_hl_field(1, MaybeConfDir_23, (MR_Integer) 0))));
      MR_String Var_43;
      MR_String Var_44;

      Var_44 = mercury__dir__f_slash_2_f_0(ConfDir_24, (MR_String) "conf");
      Var_43 = mercury__dir__f_slash_2_f_0(Var_44, (MR_String) "Mercury.config");
      {
        MaybeConfigFile_25 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, MaybeConfigFile_25, 0) = ((MR_Box) (Var_43));
      }
    }
  }
  else
    MaybeConfigFile_25 = MaybeConfigFile0_22;
  if ((MaybeConfigFile_25 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word MaybeMCFlags1_54;

    *DetectedGradeFlags_16 = (MR_Word) ((MR_Unsigned) 0U);
    *OptionsVariables_18 = make__options_file__options_variables_init_1_f_0(EnvVarMap_14);
    make__options_file__lookup_mmc_options_2_p_0(*OptionsVariables_18, &MaybeMCFlags1_54);
    if (((MR_tag((MR_Word) MaybeMCFlags1_54)) == (MR_Integer) 0))
    {
      *Specs_20 = ((MR_Word) ((MR_hl_field(0, MaybeMCFlags1_54, (MR_Integer) 0))));
      *MaybeMCFlags_19 = (MR_Word) ((MR_Unsigned) 0U);
    }
    else
    {
      MR_Word MCFlags1_50 = ((MR_Word) ((MR_hl_field(1, MaybeMCFlags1_54, (MR_Integer) 0))));

      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *MaybeMCFlags_19 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (MCFlags1_50));
      }
      *Specs_20 = (MR_Word) ((MR_Unsigned) 0U);
    }
  }
  else
  {
    MR_String ConfigFile_26 = ((MR_String) ((MR_hl_field(1, MaybeConfigFile_25, (MR_Integer) 0))));
    MR_Word ConfigNonUndefSpecs_27;
    MR_Word ConfigUndefSpecs_28;
    MR_Word ConfigSpecs_29;

    make__options_file__read_named_options_file_8_p_0(ProgressStream_12, ConfigFile_26, OptionsVariables0_17, OptionsVariables_18, &ConfigNonUndefSpecs_27, &ConfigUndefSpecs_28);
    switch (WarnUndef_15) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        ConfigSpecs_29 = ConfigNonUndefSpecs_27;
        break;
      case (MR_Integer) 1:
        ConfigSpecs_29 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), ConfigNonUndefSpecs_27, ConfigUndefSpecs_28);
        break;
    }
    if ((ConfigNonUndefSpecs_27 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word MaybeMCFlags1_30;
      MR_Word Specs0_32;
      MR_Word MaybeConfigMerStdLibDir_35;
      MR_Word Var_49;
      MR_Word _MaybeStdLibGrades_34;

      make__options_file__lookup_mmc_options_2_p_0(*OptionsVariables_18, &MaybeMCFlags1_30);
      if (((MR_tag((MR_Word) MaybeMCFlags1_30)) == (MR_Integer) 0))
      {
        MR_Word MCFlagsSpecs_33 = ((MR_Word) ((MR_hl_field(0, MaybeMCFlags1_30, (MR_Integer) 0))));

        *MaybeMCFlags_19 = (MR_Word) ((MR_Unsigned) 0U);
        Specs0_32 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), ConfigSpecs_29, MCFlagsSpecs_33);
      }
      else
      {
        MR_Word MCFlags1_31 = ((MR_Word) ((MR_hl_field(1, MaybeMCFlags1_30, (MR_Integer) 0))));

        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *MaybeMCFlags_19 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (MCFlags1_31));
        }
        Specs0_32 = ConfigSpecs_29;
      }
      libs__check_libgrades__maybe_detect_stdlib_grades_6_p_0(FlagsArgsOptionTable_13, *OptionsVariables_18, &_MaybeStdLibGrades_34, DetectedGradeFlags_16);
      make__options_file__lookup_mercury_stdlib_dir_2_p_0(*OptionsVariables_18, &MaybeConfigMerStdLibDir_35);
      Var_49 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&top_level__mercury_compile_main_scalar_common_1[0]), MaybeConfigMerStdLibDir_35);
      *Specs_20 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), Specs0_32, Var_49);
    }
    else
    {
      *DetectedGradeFlags_16 = (MR_Word) ((MR_Unsigned) 0U);
      *MaybeMCFlags_19 = (MR_Word) ((MR_Unsigned) 0U);
      *Specs_20 = ConfigSpecs_29;
    }
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
      *HeadVar__2_2 = (MR_Word) (&top_level__mercury_compile_main_scalar_common_3[0]);
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
      *Res_6 = (MR_Word) (&top_level__mercury_compile_main_scalar_common_3[0]);
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

static MR_bool MR_CALL 
top_level__mercury_compile_main____Unify____option_processing_result_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = top_level__mercury_compile_main____Unify____option_processing_result_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
top_level__mercury_compile_main____Compare____option_processing_result_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  top_level__mercury_compile_main____Compare____option_processing_result_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
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
	MR_register_type_ctor_info(&top_level__mercury_compile_main__top_level__mercury_compile_main__type_ctor_info_option_processing_result_0);
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
