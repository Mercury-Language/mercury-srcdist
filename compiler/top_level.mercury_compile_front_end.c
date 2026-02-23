/*
** Automatically generated from `mercury_compile_front_end.m'
** by the Mercury compiler,
** version rotd-2026-02-22
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


// :- module top_level.mercury_compile_front_end.
// :- implementation.

/*
INIT mercury__top_level__mercury_compile_front_end__init
ENDINIT
*/

#include "top_level.mercury_compile_front_end.mih"


#include "analysis.mih"
#include "array.mih"
#include "assoc_list.mih"
#include "benchmarking.mih"
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "check_hlds.mih"
#include "construct.mih"
#include "cord.mih"
#include "deconstruct.mih"
#include "digraph.mih"
#include "edit_seq.mih"
#include "enum.mih"
#include "getopt.mih"
#include "hlds.mih"
#include "int.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
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
#include "robdd.mih"
#include "set.mih"
#include "set_ctree234.mih"
#include "set_ordlist.mih"
#include "set_tree234.mih"
#include "sparse_bitset.mih"
#include "stack.mih"
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
#include "analysis.framework.mih"
#include "analysis.operations.mih"
#include "check_hlds.abstract_mode_constraints.mih"
#include "check_hlds.build_mode_constraints.mih"
#include "check_hlds.check_for_missing_type_defns.mih"
#include "check_hlds.check_pragma_format_call.mih"
#include "check_hlds.check_promise.mih"
#include "check_hlds.check_typeclass.mih"
#include "check_hlds.clause_to_proc.mih"
#include "check_hlds.cse_detection.mih"
#include "check_hlds.det_analysis.mih"
#include "check_hlds.implementation_defined_literals.mih"
#include "check_hlds.inst_check.mih"
#include "check_hlds.inst_user.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_constraints.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.modes.mih"
#include "check_hlds.oisu_check.mih"
#include "check_hlds.old_type_constraints.mih"
#include "check_hlds.polymorphism.mih"
#include "check_hlds.polymorphism_post_copy.mih"
#include "check_hlds.post_typecheck.mih"
#include "check_hlds.pre_typecheck.mih"
#include "check_hlds.proc_requests.mih"
#include "check_hlds.prop_mode_constraints.mih"
#include "check_hlds.purity.mih"
#include "check_hlds.simplify.mih"
#include "check_hlds.stratify.mih"
#include "check_hlds.style_checks.mih"
#include "check_hlds.switch_detection.mih"
#include "check_hlds.try_expand.mih"
#include "check_hlds.type_constraints.mih"
#include "check_hlds.typecheck.mih"
#include "check_hlds.unique_modes.mih"
#include "check_hlds.unused_imports.mih"
#include "check_hlds.unused_types.mih"
#include "hlds.const_struct.mih"
#include "hlds.du_type_layout.mih"
#include "hlds.goal_mode.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_call_tree.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_cons.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_inst_mode.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_markers.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_promise.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.hlds_statistics.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.make_hlds.mih"
#include "hlds.passes_aux.mih"
#include "hlds.pred_name.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "libs.dependency_graph.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.indent.mih"
#include "libs.maybe_util.mih"
#include "libs.op_mode.mih"
#include "libs.optdb_help.mih"
#include "libs.optimization_options.mih"
#include "libs.option_categories.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.build_eqv_maps.mih"
#include "parse_tree.d_file_deps.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.find_module.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.module_cmds.mih"
#include "parse_tree.module_qual.mih"
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
#include "parse_tree.prog_parse_tree.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_db.mih"
#include "parse_tree.var_table.mih"
#include "parse_tree.vartypes.mih"
#include "parse_tree.write_error_spec.mih"
#include "recompilation.record_uses.mih"
#include "string.builder.mih"
#include "string.format.mih"
#include "string.parse_util.mih"
#include "top_level.mercury_compile_middle_passes.mih"
#include "transform_hlds.dead_proc_elim.mih"
#include "transform_hlds.intermod.mih"
#include "transform_hlds.intermod_analysis.mih"
#include "transform_hlds.intermod_info.mih"
#include "transform_hlds.intermod_mark_exported.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"
#include "check_hlds.simplify.simplify_proc.mih"
#include "check_hlds.simplify.simplify_tasks.mih"
#include "hlds.make_hlds.qual_info.mih"
#include "mdbcomp.feedback.feedback_info.mih"
#include "parse_tree.module_qual.mq_info.mih"




static const MR_FA_PseudoTypeInfo_Struct1 top_level__mercury_compile_front_end__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0;

static const MR_FA_TypeInfo_Struct1 top_level__mercury_compile_front_end__list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0;

static const MR_VA_PseudoTypeInfo_Struct3 top_level__mercury_compile_front_end____vpti_tuple_3__plain_hlds__hlds_module__type_ctor_info_module_info_0__plain_parse_tree__maybe_error__type_ctor_info_maybe_safe_to_continue_0__plain_list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0;

static const MR_FA_PseudoTypeInfo_Struct2 top_level__mercury_compile_front_end__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_hlds__hlds_module__type_ctor_info_oisu_preds_0;

static const MR_EnumFunctorDesc top_level__mercury_compile_front_end__top_level__mercury_compile_front_end__enum_functor_desc_simplify_pass_0_0;

static const MR_EnumFunctorDesc top_level__mercury_compile_front_end__top_level__mercury_compile_front_end__enum_functor_desc_simplify_pass_0_1;

static const MR_EnumFunctorDesc top_level__mercury_compile_front_end__top_level__mercury_compile_front_end__enum_functor_desc_simplify_pass_0_2;

static const MR_EnumFunctorDesc top_level__mercury_compile_front_end__top_level__mercury_compile_front_end__enum_functor_desc_simplify_pass_0_3;

static const MR_EnumFunctorDesc top_level__mercury_compile_front_end__top_level__mercury_compile_front_end__enum_functor_desc_simplify_pass_0_4;

static const MR_EnumFunctorDesc top_level__mercury_compile_front_end__top_level__mercury_compile_front_end__enum_functor_desc_simplify_pass_0_5;

static const MR_EnumFunctorDescPtr top_level__mercury_compile_front_end__top_level__mercury_compile_front_end__enum_ordinal_ordered_simplify_pass_0[6];

static const MR_EnumFunctorDescPtr top_level__mercury_compile_front_end__top_level__mercury_compile_front_end__enum_name_ordered_simplify_pass_0[6];

static const MR_Integer top_level__mercury_compile_front_end__top_level__mercury_compile_front_end__functor_number_map_simplify_pass_0[6];

static void MR_CALL 
top_level__mercury_compile_front_end__IntroducedFrom__pred__modecheck__1142__1_3_p_0(
  MR_Word ProgressStream_13,
  MR_Word LambdaHeadVar__1_43,
  MR_Tuple * LambdaHeadVar__2_44);

static MR_bool MR_CALL 
top_level__mercury_compile_front_end__IntroducedFrom__pred__maybe_simplify__1621__1_2_p_0(
  MR_Word SimplifySpecs_37,
  MR_Word HeadVar__2_88);

static void MR_CALL 
top_level__mercury_compile_front_end__simplify_pred_9_p_0(
  MR_Word ProgressStream_10,
  MR_Word SimplifyTasks0_11,
  MR_Word PredId_12,
  MR_Word STATE_VARIABLE_ModuleInfo_0_24,
  MR_Word * STATE_VARIABLE_ModuleInfo_25,
  MR_Word STATE_VARIABLE_PredInfo_0_26,
  MR_Word * STATE_VARIABLE_PredInfo_27,
  MR_Word STATE_VARIABLE_Specs_0_28,
  MR_Word * STATE_VARIABLE_Specs_29);

static MR_bool MR_CALL 
top_level__mercury_compile_front_end__type_ctor_is_defined_in_this_module_2_p_0(
  MR_Word ModuleName_3,
  MR_Word HeadVar__2_2);

static void MR_CALL 
top_level__mercury_compile_front_end__frontend_pass_after_typeclass_check_14_p_0(
  MR_Word ProgressStream_15,
  MR_Word ErrorStream_16,
  MR_Word OpModeAugment_17,
  MR_Word FoundUndefModeError_18,
  MR_Word STATE_VARIABLE_FoundError_0_37,
  MR_Word * STATE_VARIABLE_FoundError_38,
  MR_Word STATE_VARIABLE_HLDS_0_39,
  MR_Word * STATE_VARIABLE_HLDS_40,
  MR_Word STATE_VARIABLE_DumpInfo_0_41,
  MR_Word * STATE_VARIABLE_DumpInfo_42,
  MR_Word STATE_VARIABLE_Specs_0_43,
  MR_Word * STATE_VARIABLE_Specs_44);

static void MR_CALL 
top_level__mercury_compile_front_end__frontend_pass_after_typecheck_17_p_0(
  MR_Word ProgressStream_18,
  MR_Word ErrorStream_19,
  MR_Word OpModeAugment_20,
  MR_Word Verbose_21,
  MR_Word Stats_22,
  MR_Word Globals_23,
  MR_Word FoundUndefModeError_24,
  MR_Word STATE_VARIABLE_FoundError_0_36,
  MR_Word * STATE_VARIABLE_FoundError_37,
  MR_Word STATE_VARIABLE_HLDS_0_38,
  MR_Word * STATE_VARIABLE_HLDS_39,
  MR_Word STATE_VARIABLE_DumpInfo_0_40,
  MR_Word * STATE_VARIABLE_DumpInfo_41,
  MR_Word STATE_VARIABLE_Specs_0_42,
  MR_Word * STATE_VARIABLE_Specs_43);

static void MR_CALL 
top_level__mercury_compile_front_end__subst_implementation_defined_literals_10_p_0(
  MR_Word ProgressStream_11,
  MR_Word ErrorStream_12,
  MR_Word Verbose_13,
  MR_Word Stats_14,
  MR_Word STATE_VARIABLE_HLDS_0_19,
  MR_Word * STATE_VARIABLE_HLDS_20,
  MR_Word STATE_VARIABLE_Specs_0_21,
  MR_Word * STATE_VARIABLE_Specs_22);

static void MR_CALL 
top_level__mercury_compile_front_end__check_promises_10_p_0(
  MR_Word ProgressStream_11,
  MR_Word ErrorStream_12,
  MR_Word Verbose_13,
  MR_Word Stats_14,
  MR_Word STATE_VARIABLE_HLDS_0_21,
  MR_Word * STATE_VARIABLE_HLDS_22,
  MR_Word STATE_VARIABLE_Specs_0_23,
  MR_Word * STATE_VARIABLE_Specs_24);

static void MR_CALL 
top_level__mercury_compile_front_end__mark_entities_in_opt_file_as_opt_exported_7_p_0(
  MR_Word ProgressStream_8,
  MR_Word IntermodAnalysis_9,
  MR_Word Globals_10,
  MR_Word STATE_VARIABLE_HLDS_0_26,
  MR_Word * STATE_VARIABLE_HLDS_27);

static void MR_CALL 
top_level__mercury_compile_front_end__create_and_write_opt_file_12_p_0(
  MR_Word ProgressStream_13,
  MR_Word ErrorStream_14,
  MR_Word IntermodAnalysis_15,
  MR_Word Globals_16,
  MR_Word STATE_VARIABLE_HLDS_0_55,
  MR_Word * STATE_VARIABLE_HLDS_56,
  MR_Word STATE_VARIABLE_DumpInfo_0_57,
  MR_Word * STATE_VARIABLE_DumpInfo_58,
  MR_Word STATE_VARIABLE_Specs_0_59,
  MR_Word * STATE_VARIABLE_Specs_60);

static void MR_CALL 
top_level__mercury_compile_front_end__frontend_pass_by_phases_11_p_0(
  MR_Word ProgressStream_12,
  MR_Word ErrorStream_13,
  MR_Word STATE_VARIABLE_HLDS_0_33,
  MR_Word * STATE_VARIABLE_HLDS_34,
  MR_Word * FoundError_15,
  MR_Word STATE_VARIABLE_DumpInfo_0_35,
  MR_Word * STATE_VARIABLE_DumpInfo_36,
  MR_Word STATE_VARIABLE_Specs_0_37,
  MR_Word * STATE_VARIABLE_Specs_38);

static void MR_CALL 
top_level__mercury_compile_front_end__maybe_inst_statistics_9_p_0(
  MR_Word ProgressStream_10,
  MR_Word ErrorStream_11,
  MR_Word Verbose_12,
  MR_Word Stats_13,
  MR_Word HLDS_14,
  MR_Word STATE_VARIABLE_Specs_0_24,
  MR_Word * STATE_VARIABLE_Specs_25);

static void MR_CALL 
top_level__mercury_compile_front_end__maybe_proc_statistics_10_p_0(
  MR_Word ProgressStream_11,
  MR_Word ErrorStream_12,
  MR_Word Verbose_13,
  MR_Word Stats_14,
  MR_String Msg_15,
  MR_Word HLDS_16,
  MR_Word STATE_VARIABLE_Specs_0_26,
  MR_Word * STATE_VARIABLE_Specs_27);

static void MR_CALL 
top_level__mercury_compile_front_end__maybe_generate_style_warnings_9_p_0(
  MR_Word ProgressStream_10,
  MR_Word ErrorStream_11,
  MR_Word Verbose_12,
  MR_Word Stats_13,
  MR_Word HLDS_14,
  MR_Word STATE_VARIABLE_Specs_0_22,
  MR_Word * STATE_VARIABLE_Specs_23);

static void MR_CALL 
top_level__mercury_compile_front_end__check_pragma_format_call_10_p_0(
  MR_Word ProgressStream_11,
  MR_Word ErrorStream_12,
  MR_Word Verbose_13,
  MR_Word Stats_14,
  MR_Word STATE_VARIABLE_HLDS_0_21,
  MR_Word * STATE_VARIABLE_HLDS_22,
  MR_Word STATE_VARIABLE_Specs_0_23,
  MR_Word * STATE_VARIABLE_Specs_24);

static void MR_CALL 
top_level__mercury_compile_front_end__process_try_goals_11_p_0(
  MR_Word ProgressStream_12,
  MR_Word ErrorStream_13,
  MR_Word Verbose_14,
  MR_Word Stats_15,
  MR_Word STATE_VARIABLE_HLDS_0_22,
  MR_Word * STATE_VARIABLE_HLDS_23,
  MR_Word * FoundError_17,
  MR_Word STATE_VARIABLE_Specs_0_24,
  MR_Word * STATE_VARIABLE_Specs_25);

static MR_bool MR_CALL 
top_level__mercury_compile_front_end__check_oisu_pragmas_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
top_level__mercury_compile_front_end__check_oisu_pragmas_11_p_0(
  MR_Word ProgressStream_12,
  MR_Word ErrorStream_13,
  MR_Word Verbose_14,
  MR_Word Stats_15,
  MR_Word STATE_VARIABLE_HLDS_0_28,
  MR_Word * STATE_VARIABLE_HLDS_29,
  MR_Word * FoundError_17,
  MR_Word STATE_VARIABLE_Specs_0_30,
  MR_Word * STATE_VARIABLE_Specs_31);

static void MR_CALL 
top_level__mercury_compile_front_end__check_stratification_11_p_0(
  MR_Word ProgressStream_12,
  MR_Word ErrorStream_13,
  MR_Word Verbose_14,
  MR_Word Stats_15,
  MR_Word STATE_VARIABLE_HLDS_0_24,
  MR_Word * STATE_VARIABLE_HLDS_25,
  MR_Word * FoundError_17,
  MR_Word STATE_VARIABLE_Specs_0_26,
  MR_Word * STATE_VARIABLE_Specs_27);

static void MR_CALL 
top_level__mercury_compile_front_end__maybe_write_call_tree_8_p_0(
  MR_Word ProgressStream_9,
  MR_Word Verbose_10,
  MR_Word Stats_11,
  MR_Word HLDS_12,
  MR_Word STATE_VARIABLE_Specs_0_43,
  MR_Word * STATE_VARIABLE_Specs_44);

static void MR_CALL 
top_level__mercury_compile_front_end__check_unique_modes_11_p_0(
  MR_Word ProgressStream_12,
  MR_Word ErrorStream_13,
  MR_Word Verbose_14,
  MR_Word Stats_15,
  MR_Word STATE_VARIABLE_HLDS_0_22,
  MR_Word * STATE_VARIABLE_HLDS_23,
  MR_Word * FoundError_17,
  MR_Word STATE_VARIABLE_Specs_0_24,
  MR_Word * STATE_VARIABLE_Specs_25);

static void MR_CALL 
top_level__mercury_compile_front_end__check_determinism_10_p_0(
  MR_Word ProgressStream_11,
  MR_Word ErrorStream_12,
  MR_Word Verbose_13,
  MR_Word Stats_14,
  MR_Word STATE_VARIABLE_HLDS_0_21,
  MR_Word * STATE_VARIABLE_HLDS_22,
  MR_Word STATE_VARIABLE_Specs_0_23,
  MR_Word * STATE_VARIABLE_Specs_24);

static void MR_CALL 
top_level__mercury_compile_front_end__detect_cse_7_p_0(
  MR_Word ProgressStream_8,
  MR_Word Verbose_9,
  MR_Word Stats_10,
  MR_Word STATE_VARIABLE_HLDS_0_13,
  MR_Word * STATE_VARIABLE_HLDS_14);

static void MR_CALL 
top_level__mercury_compile_front_end__detect_switches_7_p_0(
  MR_Word ProgressStream_8,
  MR_Word Verbose_9,
  MR_Word Stats_10,
  MR_Word STATE_VARIABLE_HLDS_0_13,
  MR_Word * STATE_VARIABLE_HLDS_14);

static void MR_CALL 
top_level__mercury_compile_front_end__maybe_compute_goal_modes_10_p_0(
  MR_Word ProgressStream_11,
  MR_Word ErrorStream_12,
  MR_Word Verbose_13,
  MR_Word Stats_14,
  MR_Word STATE_VARIABLE_HLDS_0_20,
  MR_Word * STATE_VARIABLE_HLDS_21,
  MR_Word STATE_VARIABLE_Specs_0_22,
  MR_Word * STATE_VARIABLE_Specs_23);

static void MR_CALL 
top_level__mercury_compile_front_end__modecheck_12_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
top_level__mercury_compile_front_end__modecheck_12_p_0(
  MR_Word ProgressStream_13,
  MR_Word ErrorStream_14,
  MR_Word Verbose_15,
  MR_Word Stats_16,
  MR_Word STATE_VARIABLE_HLDS_0_31,
  MR_Word * STATE_VARIABLE_HLDS_32,
  MR_Word * FoundModeError_18,
  MR_Word * SafeToContinue_19,
  MR_Word STATE_VARIABLE_Specs_0_33,
  MR_Word * STATE_VARIABLE_Specs_34);

static void MR_CALL 
top_level__mercury_compile_front_end__maybe_mode_constraints_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
top_level__mercury_compile_front_end__maybe_mode_constraints_7_p_0(
  MR_Word ProgressStream_8,
  MR_Word Verbose_9,
  MR_Word Stats_10,
  MR_Word STATE_VARIABLE_HLDS_0_15,
  MR_Word * STATE_VARIABLE_HLDS_16);

static void MR_CALL 
top_level__mercury_compile_front_end__maybe_warn_about_unused_imports_9_p_0(
  MR_Word ProgressStream_10,
  MR_Word ErrorStream_11,
  MR_Word Verbose_12,
  MR_Word Stats_13,
  MR_Word HLDS_14,
  MR_Word STATE_VARIABLE_Specs_0_20,
  MR_Word * STATE_VARIABLE_Specs_21);

static void MR_CALL 
top_level__mercury_compile_front_end__post_copy_polymorphism_pass_11_p_0(
  MR_Word ProgressStream_12,
  MR_Word ErrorStream_13,
  MR_Word Verbose_14,
  MR_Word Stats_15,
  MR_Word ExistsCastPredIds_16,
  MR_Word STATE_VARIABLE_HLDS_0_21,
  MR_Word * STATE_VARIABLE_HLDS_22,
  MR_Word STATE_VARIABLE_Specs_0_23,
  MR_Word * STATE_VARIABLE_Specs_24);

static void MR_CALL 
top_level__mercury_compile_front_end__clause_to_proc_10_p_0(
  MR_Word ProgressStream_11,
  MR_Word ErrorStream_12,
  MR_Word Verbose_13,
  MR_Word Stats_14,
  MR_Word STATE_VARIABLE_HLDS_0_19,
  MR_Word * STATE_VARIABLE_HLDS_20,
  MR_Word STATE_VARIABLE_Specs_0_21,
  MR_Word * STATE_VARIABLE_Specs_22);

static void MR_CALL 
top_level__mercury_compile_front_end__main_polymorphism_pass_12_p_0(
  MR_Word ProgressStream_13,
  MR_Word ErrorStream_14,
  MR_Word Verbose_15,
  MR_Word Stats_16,
  MR_Word * ExistsCastPredIds_17,
  MR_Word * SafeToContinue_18,
  MR_Word STATE_VARIABLE_HLDS_0_25,
  MR_Word * STATE_VARIABLE_HLDS_26,
  MR_Word STATE_VARIABLE_Specs_0_27,
  MR_Word * STATE_VARIABLE_Specs_28);

static MR_bool MR_CALL 
top_level__mercury_compile_front_end__maybe_simplify_12_p_0_2(
  MR_Box closure_arg);

static void MR_CALL 
top_level__mercury_compile_front_end__maybe_simplify_12_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);

static void MR_CALL 
top_level__mercury_compile_front_end__need_middle_pass_for_opt_file_2_p_0(
  MR_Word Globals_3,
  MR_Word * NeedMiddlePassForOptFile_4);

static void MR_CALL 
top_level__mercury_compile_front_end__do_typecheck_16_p_0(
  MR_Word ProgressStream_17,
  MR_Word ErrorStream_18,
  MR_Word Verbose_19,
  MR_Word Stats_20,
  MR_Word Globals_21,
  MR_Word * FoundSyntaxError_22,
  MR_Word * FoundTypeError_23,
  MR_Word * DidWeExceedIterationLimit_24,
  MR_Word STATE_VARIABLE_HLDS_0_32,
  MR_Word * STATE_VARIABLE_HLDS_33,
  MR_Word STATE_VARIABLE_DumpInfo_0_34,
  MR_Word * STATE_VARIABLE_DumpInfo_35,
  MR_Word STATE_VARIABLE_Specs_0_36,
  MR_Word * STATE_VARIABLE_Specs_37);

static void MR_CALL 
top_level__mercury_compile_front_end__check_insts_for_matching_types_13_p_0(
  MR_Word ProgressStream_14,
  MR_Word ErrorStream_15,
  MR_Word Verbose_16,
  MR_Word Stats_17,
  MR_Word Globals_18,
  MR_Word STATE_VARIABLE_HLDS_0_24,
  MR_Word * STATE_VARIABLE_HLDS_25,
  MR_Word STATE_VARIABLE_DumpInfo_0_26,
  MR_Word * STATE_VARIABLE_DumpInfo_27,
  MR_Word STATE_VARIABLE_Specs_0_28,
  MR_Word * STATE_VARIABLE_Specs_29);

static MR_bool MR_CALL 
top_level__mercury_compile_front_end____Unify____simplify_pass_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
top_level__mercury_compile_front_end____Compare____simplify_pass_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box top_level__mercury_compile_front_end_scalar_common_1[3][2];

static /* final */ const MR_Box top_level__mercury_compile_front_end_scalar_common_2[2][3];

static /* final */ const MR_Box top_level__mercury_compile_front_end_scalar_common_3[2][4];

static /* final */ const MR_Box top_level__mercury_compile_front_end_scalar_common_4[4][5];

static /* final */ const MR_Box top_level__mercury_compile_front_end_scalar_common_5[1][1];

static /* final */ const MR_Box top_level__mercury_compile_front_end_scalar_common_6[1][12];

static /* final */ const MR_Box top_level__mercury_compile_front_end_scalar_common_7[1][8];

static /* final */ const MR_Box top_level__mercury_compile_front_end_scalar_common_8[1][6];




static /* final */ const MR_Box top_level__mercury_compile_front_end_scalar_common_1[3][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0))
  },
  /* row   1 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 7U)),
    (MR_Box) ((MR_Unsigned) 0U)
  },
  /* row   2 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 1U)),
    (MR_Box) ((MR_Unsigned) 2U)
  },
};

static /* final */ const MR_Box top_level__mercury_compile_front_end_scalar_common_2[2][3] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__string__builder__handle__arity0__string__builder__state__arity0__)),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_handle_0)),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_state_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_oisu_preds_0))
  },
};

static /* final */ const MR_Box top_level__mercury_compile_front_end_scalar_common_3[2][4] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__string__builder__handle__arity0__string__builder__state__arity0__)),
    ((MR_Box) (&top_level__mercury_compile_front_end_scalar_common_2[0])),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_handle_0)),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_state_0))
  },
  /* row   1 */
  {
    ((MR_Box) (base_typeclass_info_parse_tree__parse_tree_output__pt_output__arity2__string__builder__handle__arity0__string__builder__state__arity0__)),
    ((MR_Box) (&top_level__mercury_compile_front_end_scalar_common_4[0])),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_handle_0)),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box top_level__mercury_compile_front_end_scalar_common_4[4][5] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__string__builder__handle__arity0__string__arity0__string__builder__state__arity0__)),
    ((MR_Box) (&top_level__mercury_compile_front_end_scalar_common_3[0])),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_handle_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_state_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_tuple_0)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&parse_tree__maybe_error__parse_tree__maybe_error__type_ctor_info_maybe_safe_to_continue_0)),
    ((MR_Box) (&top_level__mercury_compile_front_end_scalar_common_1[0]))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&top_level__mercury_compile_front_end__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0)),
    ((MR_Box) (&top_level__mercury_compile_front_end__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&top_level__mercury_compile_front_end__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_hlds__hlds_module__type_ctor_info_oisu_preds_0))
  },
};

static /* final */ const MR_Box top_level__mercury_compile_front_end_scalar_common_5[1][1] = {
  /* row   0 */
  { (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1)))))))) },
};

static /* final */ const MR_Box top_level__mercury_compile_front_end_scalar_common_6[1][12] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 9)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__type_ctor_info_simplify_tasks_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0)),
    ((MR_Box) (&top_level__mercury_compile_front_end__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0)),
    ((MR_Box) (&top_level__mercury_compile_front_end__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0))
  },
};

static /* final */ const MR_Box top_level__mercury_compile_front_end_scalar_common_7[1][8] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box top_level__mercury_compile_front_end_scalar_common_8[1][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&top_level__mercury_compile_front_end____vpti_tuple_3__plain_hlds__hlds_module__type_ctor_info_module_info_0__plain_parse_tree__maybe_error__type_ctor_info_maybe_safe_to_continue_0__plain_list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_PseudoTypeInfo_Struct1 top_level__mercury_compile_front_end__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0) }
};

static const MR_FA_TypeInfo_Struct1 top_level__mercury_compile_front_end__list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0) }
};

static const MR_VA_PseudoTypeInfo_Struct3 top_level__mercury_compile_front_end____vpti_tuple_3__plain_hlds__hlds_module__type_ctor_info_module_info_0__plain_parse_tree__maybe_error__type_ctor_info_maybe_safe_to_continue_0__plain_list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0 = {
  &mercury__builtin__builtin__type_ctor_info_tuple_0,
  (MR_Integer) 3,
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0),
    (MR_PseudoTypeInfo) (&parse_tree__maybe_error__parse_tree__maybe_error__type_ctor_info_maybe_safe_to_continue_0),
    (MR_PseudoTypeInfo) (&top_level__mercury_compile_front_end__list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 top_level__mercury_compile_front_end__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_hlds__hlds_module__type_ctor_info_oisu_preds_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0),
    (MR_PseudoTypeInfo) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_oisu_preds_0)
  }
};

static const MR_EnumFunctorDesc top_level__mercury_compile_front_end__top_level__mercury_compile_front_end__enum_functor_desc_simplify_pass_0_0 = {
  (MR_String) "simplify_pass_frontend",
  INT32_C(0)
};

static const MR_EnumFunctorDesc top_level__mercury_compile_front_end__top_level__mercury_compile_front_end__enum_functor_desc_simplify_pass_0_1 = {
  (MR_String) "simplify_pass_post_untuple",
  INT32_C(1)
};

static const MR_EnumFunctorDesc top_level__mercury_compile_front_end__top_level__mercury_compile_front_end__enum_functor_desc_simplify_pass_0_2 = {
  (MR_String) "simplify_pass_pre_implicit_parallelism",
  INT32_C(2)
};

static const MR_EnumFunctorDesc top_level__mercury_compile_front_end__top_level__mercury_compile_front_end__enum_functor_desc_simplify_pass_0_3 = {
  (MR_String) "simplify_pass_pre_prof_transforms",
  INT32_C(3)
};

static const MR_EnumFunctorDesc top_level__mercury_compile_front_end__top_level__mercury_compile_front_end__enum_functor_desc_simplify_pass_0_4 = {
  (MR_String) "simplify_pass_ll_backend",
  INT32_C(4)
};

static const MR_EnumFunctorDesc top_level__mercury_compile_front_end__top_level__mercury_compile_front_end__enum_functor_desc_simplify_pass_0_5 = {
  (MR_String) "simplify_pass_ml_backend",
  INT32_C(5)
};

static const MR_EnumFunctorDescPtr top_level__mercury_compile_front_end__top_level__mercury_compile_front_end__enum_ordinal_ordered_simplify_pass_0[6] = {
  &top_level__mercury_compile_front_end__top_level__mercury_compile_front_end__enum_functor_desc_simplify_pass_0_0,
  &top_level__mercury_compile_front_end__top_level__mercury_compile_front_end__enum_functor_desc_simplify_pass_0_1,
  &top_level__mercury_compile_front_end__top_level__mercury_compile_front_end__enum_functor_desc_simplify_pass_0_2,
  &top_level__mercury_compile_front_end__top_level__mercury_compile_front_end__enum_functor_desc_simplify_pass_0_3,
  &top_level__mercury_compile_front_end__top_level__mercury_compile_front_end__enum_functor_desc_simplify_pass_0_4,
  &top_level__mercury_compile_front_end__top_level__mercury_compile_front_end__enum_functor_desc_simplify_pass_0_5
};

static const MR_EnumFunctorDescPtr top_level__mercury_compile_front_end__top_level__mercury_compile_front_end__enum_name_ordered_simplify_pass_0[6] = {
  &top_level__mercury_compile_front_end__top_level__mercury_compile_front_end__enum_functor_desc_simplify_pass_0_0,
  &top_level__mercury_compile_front_end__top_level__mercury_compile_front_end__enum_functor_desc_simplify_pass_0_4,
  &top_level__mercury_compile_front_end__top_level__mercury_compile_front_end__enum_functor_desc_simplify_pass_0_5,
  &top_level__mercury_compile_front_end__top_level__mercury_compile_front_end__enum_functor_desc_simplify_pass_0_1,
  &top_level__mercury_compile_front_end__top_level__mercury_compile_front_end__enum_functor_desc_simplify_pass_0_2,
  &top_level__mercury_compile_front_end__top_level__mercury_compile_front_end__enum_functor_desc_simplify_pass_0_3
};

static const MR_Integer top_level__mercury_compile_front_end__top_level__mercury_compile_front_end__functor_number_map_simplify_pass_0[6] = {
  (MR_Integer) 0,
  (MR_Integer) 3,
  (MR_Integer) 4,
  (MR_Integer) 5,
  (MR_Integer) 1,
  (MR_Integer) 2
};

const MR_TypeCtorInfo_Struct top_level__mercury_compile_front_end__top_level__mercury_compile_front_end__type_ctor_info_simplify_pass_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (top_level__mercury_compile_front_end____Unify____simplify_pass_0_0_10001)),
  ((MR_Box) (top_level__mercury_compile_front_end____Compare____simplify_pass_0_0_10001)),
  (MR_String) "top_level.mercury_compile_front_end",
  (MR_String) "simplify_pass",
  { top_level__mercury_compile_front_end__top_level__mercury_compile_front_end__enum_name_ordered_simplify_pass_0 },
  { top_level__mercury_compile_front_end__top_level__mercury_compile_front_end__enum_ordinal_ordered_simplify_pass_0 },
  (MR_Integer) 6,
  UINT16_C(12),
  top_level__mercury_compile_front_end__top_level__mercury_compile_front_end__functor_number_map_simplify_pass_0,

};

static void MR_CALL 
top_level__mercury_compile_front_end__IntroducedFrom__pred__modecheck__1142__1_3_p_0(
  MR_Word ProgressStream_13,
  MR_Word LambdaHeadVar__1_43,
  MR_Tuple * LambdaHeadVar__2_44)
{
  MR_Word HLDS_65;
  MR_Word STC_67;
  MR_Word S_68;

  check_hlds__modes__modecheck_module_5_p_0(ProgressStream_13, LambdaHeadVar__1_43, &HLDS_65, &STC_67, &S_68);
  {
    MR_Tuple base;
    base = (MR_Tuple) MR_new_object(MR_Tuple, (3 * sizeof(MR_Word)), NULL, NULL);
    *LambdaHeadVar__2_44 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (HLDS_65));
    MR_hl_field(0, base, 1) = ((MR_Box) (STC_67));
    MR_hl_field(0, base, 2) = ((MR_Box) (S_68));
  }
}

static MR_bool MR_CALL 
top_level__mercury_compile_front_end__IntroducedFrom__pred__maybe_simplify__1621__1_2_p_0(
  MR_Word SimplifySpecs_37,
  MR_Word HeadVar__2_88)
{
  MR_bool succeeded;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&top_level__mercury_compile_front_end_scalar_common_1[0]), ((MR_Box) (SimplifySpecs_37)), ((MR_Box) (HeadVar__2_88)));
  return succeeded;
}

void MR_CALL 
top_level__mercury_compile_front_end____Compare____simplify_pass_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
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

MR_bool MR_CALL 
top_level__mercury_compile_front_end____Unify____simplify_pass_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
top_level__mercury_compile_front_end__simplify_pred_9_p_0(
  MR_Word ProgressStream_10,
  MR_Word SimplifyTasks0_11,
  MR_Word PredId_12,
  MR_Word STATE_VARIABLE_ModuleInfo_0_24,
  MR_Word * STATE_VARIABLE_ModuleInfo_25,
  MR_Word STATE_VARIABLE_PredInfo_0_26,
  MR_Word * STATE_VARIABLE_PredInfo_27,
  MR_Word STATE_VARIABLE_Specs_0_28,
  MR_Word * STATE_VARIABLE_Specs_29)
{
  MR_bool succeeded;
  MR_Word ProcIds_17;
  MR_Word SimplifyTasks_18;
  MR_Word ErrorSpecs0_19;
  MR_Word ErrorSpecs_20;
  MR_Word Globals_21;
  MR_Word SpecsList_22;
  MR_Word Statistics_23;

  hlds__passes_aux__maybe_write_pred_progress_message_6_p_0(ProgressStream_10, STATE_VARIABLE_ModuleInfo_0_24, (MR_String) "Simplifying", PredId_12);
  ProcIds_17 = hlds__hlds_pred__pred_info_all_non_imported_procids_1_f_0(STATE_VARIABLE_PredInfo_0_26);
  succeeded = hlds__hlds_pred__is_unify_index_or_compare_pred_1_p_0(STATE_VARIABLE_PredInfo_0_26);
  if (succeeded)
  {
    MR_Word Var_41 = ((((MR_Unsigned) ((MR_hl_field(0, SimplifyTasks0_11, 0))) >> 18)) & (MR_Integer) 1);
    MR_Word Var_42 = ((((MR_Unsigned) ((MR_hl_field(0, SimplifyTasks0_11, 0))) >> 17)) & (MR_Integer) 1);
    MR_Word Var_43 = ((((MR_Unsigned) ((MR_hl_field(0, SimplifyTasks0_11, 0))) >> 16)) & (MR_Integer) 1);
    MR_Word Var_44 = ((((MR_Unsigned) ((MR_hl_field(0, SimplifyTasks0_11, 0))) >> 15)) & (MR_Integer) 1);
    MR_Word Var_45 = ((((MR_Unsigned) ((MR_hl_field(0, SimplifyTasks0_11, 0))) >> 14)) & (MR_Integer) 1);
    MR_Word Var_46 = ((((MR_Unsigned) ((MR_hl_field(0, SimplifyTasks0_11, 0))) >> 13)) & (MR_Integer) 1);
    MR_Word Var_47 = ((((MR_Unsigned) ((MR_hl_field(0, SimplifyTasks0_11, 0))) >> 12)) & (MR_Integer) 1);
    MR_Word Var_48 = ((((MR_Unsigned) ((MR_hl_field(0, SimplifyTasks0_11, 0))) >> 11)) & (MR_Integer) 1);
    MR_Word Var_49 = ((((MR_Unsigned) ((MR_hl_field(0, SimplifyTasks0_11, 0))) >> 10)) & (MR_Integer) 1);
    MR_Word Var_50 = ((((MR_Unsigned) ((MR_hl_field(0, SimplifyTasks0_11, 0))) >> 9)) & (MR_Integer) 1);
    MR_Word Var_51 = ((((MR_Unsigned) ((MR_hl_field(0, SimplifyTasks0_11, 0))) >> 8)) & (MR_Integer) 1);
    MR_Word Var_52 = ((((MR_Unsigned) ((MR_hl_field(0, SimplifyTasks0_11, 0))) >> 7)) & (MR_Integer) 1);
    MR_Word Var_53 = ((((MR_Unsigned) ((MR_hl_field(0, SimplifyTasks0_11, 0))) >> 6)) & (MR_Integer) 1);
    MR_Word Var_54 = ((((MR_Unsigned) ((MR_hl_field(0, SimplifyTasks0_11, 0))) >> 5)) & (MR_Integer) 1);
    MR_Word Var_55 = ((((MR_Unsigned) ((MR_hl_field(0, SimplifyTasks0_11, 0))) >> 4)) & (MR_Integer) 1);
    MR_Word Var_56 = ((((MR_Unsigned) ((MR_hl_field(0, SimplifyTasks0_11, 0))) >> 3)) & (MR_Integer) 1);
    MR_Word Var_57 = ((((MR_Unsigned) ((MR_hl_field(0, SimplifyTasks0_11, 0))) >> 2)) & (MR_Integer) 1);
    MR_Word Var_58 = ((((MR_Unsigned) ((MR_hl_field(0, SimplifyTasks0_11, 0))) >> 1)) & (MR_Integer) 1);
    MR_Word Var_59 = ((MR_Unsigned) ((MR_hl_field(0, SimplifyTasks0_11, 0))) & (MR_Integer) 1);

    {
      SimplifyTasks_18 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, SimplifyTasks_18, 0) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 0) << 19)) | (((((MR_Unsigned) (Var_41) << 18)) | (((((MR_Unsigned) (Var_42) << 17)) | (((((MR_Unsigned) (Var_43) << 16)) | (((((MR_Unsigned) (Var_44) << 15)) | (((((MR_Unsigned) (Var_45) << 14)) | (((((MR_Unsigned) (Var_46) << 13)) | (((((MR_Unsigned) (Var_47) << 12)) | (((((MR_Unsigned) (Var_48) << 11)) | (((((MR_Unsigned) (Var_49) << 10)) | (((((MR_Unsigned) (Var_50) << 9)) | (((((MR_Unsigned) (Var_51) << 8)) | (((((MR_Unsigned) (Var_52) << 7)) | (((((MR_Unsigned) (Var_53) << 6)) | (((((MR_Unsigned) (Var_54) << 5)) | (((((MR_Unsigned) (Var_55) << 4)) | (((((MR_Unsigned) (Var_56) << 3)) | (((((MR_Unsigned) (Var_57) << 2)) | (((((MR_Unsigned) (Var_58) << 1)) | (MR_Unsigned) (Var_59)))))))))))))))))))))))))))))))))))))));
    }
  }
  else
    SimplifyTasks_18 = SimplifyTasks0_11;
  ErrorSpecs0_19 = parse_tree__error_util__init_error_spec_accumulator_0_f_0();
  check_hlds__simplify__simplify_proc__simplify_pred_procs_10_p_0(ProgressStream_10, SimplifyTasks_18, PredId_12, ProcIds_17, STATE_VARIABLE_PredInfo_0_26, STATE_VARIABLE_PredInfo_27, STATE_VARIABLE_ModuleInfo_0_24, STATE_VARIABLE_ModuleInfo_25, ErrorSpecs0_19, &ErrorSpecs_20);
  hlds__hlds_module__module_info_get_globals_2_p_0(*STATE_VARIABLE_ModuleInfo_25, &Globals_21);
  SpecsList_22 = parse_tree__error_util__error_spec_accumulator_to_list_1_f_0(ErrorSpecs_20);
  *STATE_VARIABLE_Specs_29 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), SpecsList_22, STATE_VARIABLE_Specs_0_28);
  libs__globals__lookup_bool_option_3_p_0(Globals_21, (MR_Integer) 687, &Statistics_23);
  libs__file_util__maybe_report_stats_4_p_0(ProgressStream_10, Statistics_23);
}

static MR_bool MR_CALL 
top_level__mercury_compile_front_end__type_ctor_is_defined_in_this_module_2_p_0(
  MR_Word ModuleName_3,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word TypeCtor_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
  MR_Word TypeSymName_6 = ((MR_Word) ((MR_hl_field(0, TypeCtor_4, 0))));
  MR_Word TypeModuleName_8;

  succeeded = ((MR_tag((MR_Word) TypeSymName_6)) == (MR_Integer) 1);
  if (succeeded)
  {
    TypeModuleName_8 = ((MR_Word) ((MR_hl_field(1, TypeSymName_6, 0))));
    succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ModuleName_3, TypeModuleName_8);
  }
  return succeeded;
}

void MR_CALL 
top_level__mercury_compile_front_end__frontend_pass_16_p_0(
  MR_Word ProgressStream_17,
  MR_Word ErrorStream_18,
  MR_Word OpModeAugment_19,
  MR_Word QualInfo0_20,
  MR_Word FoundUndefTypeError_21,
  MR_Word FoundUndefModeError_22,
  MR_Word STATE_VARIABLE_FoundError_0_34,
  MR_Word * STATE_VARIABLE_FoundError_35,
  MR_Word STATE_VARIABLE_HLDS_0_36,
  MR_Word * STATE_VARIABLE_HLDS_37,
  MR_Word STATE_VARIABLE_DumpInfo_0_38,
  MR_Word * STATE_VARIABLE_DumpInfo_39,
  MR_Word STATE_VARIABLE_Specs_0_40,
  MR_Word * STATE_VARIABLE_Specs_41)
{
  MR_Word Globals_28;
  MR_Word Verbose_29;

  hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_HLDS_0_36, &Globals_28);
  libs__globals__lookup_bool_option_3_p_0(Globals_28, (MR_Integer) 131, &Verbose_29);
  switch (FoundUndefTypeError_21) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word Stats_30;
        MR_Word QualInfo_31;
        MR_Word TypeClassSpecs_32;
        MR_Word TypeClassErrors_33;
        MR_Word STATE_VARIABLE_Specs_2_52;
        MR_Word STATE_VARIABLE_HLDS_1_55;
        MR_Word STATE_VARIABLE_Specs_3_56;
        MR_Word STATE_VARIABLE_DumpInfo_1_60;
        MR_Word STATE_VARIABLE_HLDS_2_64;
        MR_Word STATE_VARIABLE_Specs_4_65;
        MR_Word STATE_VARIABLE_DumpInfo_2_68;
        MR_Word STATE_VARIABLE_HLDS_3_70;
        MR_Word Globals_72;
        MR_Word STATE_VARIABLE_Specs_1_73;

        parse_tree__write_error_spec__maybe_write_out_errors_7_p_0(ErrorStream_18, Verbose_29, Globals_28, STATE_VARIABLE_Specs_0_40, &STATE_VARIABLE_Specs_2_52);
        libs__globals__lookup_bool_option_3_p_0(Globals_28, (MR_Integer) 133, &Stats_30);
        hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_HLDS_0_36, &Globals_72);
        parse_tree__write_error_spec__maybe_write_out_errors_7_p_0(ErrorStream_18, Verbose_29, Globals_72, STATE_VARIABLE_Specs_2_52, &STATE_VARIABLE_Specs_1_73);
        libs__file_util__maybe_write_string_5_p_0(ProgressStream_17, Verbose_29, (MR_String) "% Deciding type representations...\n");
        hlds__du_type_layout__decide_type_repns_6_p_0(STATE_VARIABLE_HLDS_0_36, &STATE_VARIABLE_HLDS_1_55, STATE_VARIABLE_Specs_1_73, &STATE_VARIABLE_Specs_3_56);
        libs__file_util__maybe_write_string_5_p_0(ProgressStream_17, Verbose_29, (MR_String) "% done.\n");
        libs__file_util__maybe_report_stats_4_p_0(ProgressStream_17, Stats_30);
        hlds__passes_aux__maybe_dump_hlds_8_p_0(ProgressStream_17, STATE_VARIABLE_HLDS_1_55, (MR_Integer) 3, (MR_String) "decide_type_repns", STATE_VARIABLE_DumpInfo_0_38, &STATE_VARIABLE_DumpInfo_1_60);
        libs__file_util__maybe_write_string_5_p_0(ProgressStream_17, Verbose_29, (MR_String) "% Checking typeclasses...\n");
        check_hlds__check_typeclass__check_typeclasses_6_p_0(ProgressStream_17, STATE_VARIABLE_HLDS_1_55, &STATE_VARIABLE_HLDS_2_64, QualInfo0_20, &QualInfo_31, &TypeClassSpecs_32);
        TypeClassErrors_33 = parse_tree__error_util__contains_errors_2_f_0(Globals_28, TypeClassSpecs_32);
        STATE_VARIABLE_Specs_4_65 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), TypeClassSpecs_32, STATE_VARIABLE_Specs_3_56);
        hlds__passes_aux__maybe_dump_hlds_8_p_0(ProgressStream_17, STATE_VARIABLE_HLDS_2_64, (MR_Integer) 5, (MR_String) "typeclass", STATE_VARIABLE_DumpInfo_1_60, &STATE_VARIABLE_DumpInfo_2_68);
        hlds__make_hlds__qual_info__set_module_recompilation_info_3_p_0(QualInfo_31, STATE_VARIABLE_HLDS_2_64, &STATE_VARIABLE_HLDS_3_70);
        switch (TypeClassErrors_33) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            top_level__mercury_compile_front_end__frontend_pass_after_typeclass_check_14_p_0(ProgressStream_17, ErrorStream_18, OpModeAugment_19, FoundUndefModeError_22, STATE_VARIABLE_FoundError_0_34, STATE_VARIABLE_FoundError_35, STATE_VARIABLE_HLDS_3_70, STATE_VARIABLE_HLDS_37, STATE_VARIABLE_DumpInfo_2_68, STATE_VARIABLE_DumpInfo_39, STATE_VARIABLE_Specs_4_65, STATE_VARIABLE_Specs_41);
            break;
          case (MR_Integer) 1:
            {
              *STATE_VARIABLE_FoundError_35 = (MR_Integer) 1;
              *STATE_VARIABLE_HLDS_37 = STATE_VARIABLE_HLDS_3_70;
              *STATE_VARIABLE_DumpInfo_39 = STATE_VARIABLE_DumpInfo_2_68;
              *STATE_VARIABLE_Specs_41 = STATE_VARIABLE_Specs_4_65;
            }
            break;
        }
      }
      break;
    case (MR_Integer) 1:
      {
        *STATE_VARIABLE_FoundError_35 = (MR_Integer) 1;
        parse_tree__write_error_spec__maybe_write_out_errors_7_p_0(ErrorStream_18, Verbose_29, Globals_28, STATE_VARIABLE_Specs_0_40, STATE_VARIABLE_Specs_41);
        libs__file_util__maybe_write_string_5_p_0(ProgressStream_17, Verbose_29, (MR_String) "% Program contains undefined type error(s).\n");
        mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
        *STATE_VARIABLE_HLDS_37 = STATE_VARIABLE_HLDS_0_36;
        *STATE_VARIABLE_DumpInfo_39 = STATE_VARIABLE_DumpInfo_0_38;
      }
      break;
  }
}

static void MR_CALL 
top_level__mercury_compile_front_end__frontend_pass_after_typeclass_check_14_p_0(
  MR_Word ProgressStream_15,
  MR_Word ErrorStream_16,
  MR_Word OpModeAugment_17,
  MR_Word FoundUndefModeError_18,
  MR_Word STATE_VARIABLE_FoundError_0_37,
  MR_Word * STATE_VARIABLE_FoundError_38,
  MR_Word STATE_VARIABLE_HLDS_0_39,
  MR_Word * STATE_VARIABLE_HLDS_40,
  MR_Word STATE_VARIABLE_DumpInfo_0_41,
  MR_Word * STATE_VARIABLE_DumpInfo_42,
  MR_Word STATE_VARIABLE_Specs_0_43,
  MR_Word * STATE_VARIABLE_Specs_44)
{
  MR_bool succeeded;
  MR_Word Globals_24;
  MR_Word Verbose_25;
  MR_Word Stats_26;
  MR_Word FoundSyntaxError_27;
  MR_Word FoundTypeError_28;
  MR_Word DidWeExceedIterationLimit_29;
  MR_Word STATE_VARIABLE_HLDS_1_49;
  MR_Word STATE_VARIABLE_DumpInfo_1_50;
  MR_Word STATE_VARIABLE_Specs_1_51;
  MR_Word STATE_VARIABLE_HLDS_2_53;
  MR_Word STATE_VARIABLE_DumpInfo_2_54;
  MR_Word STATE_VARIABLE_Specs_2_55;
  MR_Word STATE_VARIABLE_HLDS_3_57;
  MR_Word STATE_VARIABLE_DumpInfo_3_58;
  MR_Word STATE_VARIABLE_Specs_3_59;
  MR_Word IntermodOpt_83;
  MR_Word IntermodAnalysis_84;
  MR_Word UseOptFiles_85;

  hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_HLDS_0_39, &Globals_24);
  libs__globals__lookup_bool_option_3_p_0(Globals_24, (MR_Integer) 131, &Verbose_25);
  libs__globals__lookup_bool_option_3_p_0(Globals_24, (MR_Integer) 133, &Stats_26);
  libs__globals__lookup_bool_option_3_p_0(Globals_24, (MR_Integer) 428, &IntermodOpt_83);
  libs__globals__lookup_bool_option_3_p_0(Globals_24, (MR_Integer) 435, &IntermodAnalysis_84);
  libs__globals__lookup_bool_option_3_p_0(Globals_24, (MR_Integer) 429, &UseOptFiles_85);
  succeeded = (IntermodOpt_83 == (MR_Integer) 1);
  if (!(succeeded))
  {
    succeeded = (IntermodAnalysis_84 == (MR_Integer) 1);
    if (!(succeeded))
      succeeded = (UseOptFiles_85 == (MR_Integer) 1);
  }
  if (succeeded)
    succeeded = (OpModeAugment_17 != (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    MR_Word STATE_VARIABLE_Specs_1_89;

    parse_tree__write_error_spec__maybe_write_out_errors_7_p_0(ErrorStream_16, Verbose_25, Globals_24, STATE_VARIABLE_Specs_0_43, &STATE_VARIABLE_Specs_1_89);
    libs__file_util__maybe_write_string_5_p_0(ProgressStream_15, Verbose_25, (MR_String) "% Eliminating dead predicates... ");
    transform_hlds__dead_proc_elim__dead_pred_elim_2_p_0(STATE_VARIABLE_HLDS_0_39, &STATE_VARIABLE_HLDS_1_49);
    parse_tree__write_error_spec__maybe_write_out_errors_7_p_0(ErrorStream_16, Verbose_25, Globals_24, STATE_VARIABLE_Specs_1_89, &STATE_VARIABLE_Specs_1_51);
    libs__file_util__maybe_write_string_5_p_0(ProgressStream_15, Verbose_25, (MR_String) "done.\n");
    libs__file_util__maybe_report_stats_4_p_0(ProgressStream_15, Stats_26);
    hlds__passes_aux__maybe_dump_hlds_8_p_0(ProgressStream_15, STATE_VARIABLE_HLDS_1_49, (MR_Integer) 10, (MR_String) "dead_pred_elim", STATE_VARIABLE_DumpInfo_0_41, &STATE_VARIABLE_DumpInfo_1_50);
  }
  else
  {
    STATE_VARIABLE_Specs_1_51 = STATE_VARIABLE_Specs_0_43;
    STATE_VARIABLE_DumpInfo_1_50 = STATE_VARIABLE_DumpInfo_0_41;
    STATE_VARIABLE_HLDS_1_49 = STATE_VARIABLE_HLDS_0_39;
  }
  top_level__mercury_compile_front_end__check_insts_for_matching_types_13_p_0(ProgressStream_15, ErrorStream_16, Verbose_25, Stats_26, Globals_24, STATE_VARIABLE_HLDS_1_49, &STATE_VARIABLE_HLDS_2_53, STATE_VARIABLE_DumpInfo_1_50, &STATE_VARIABLE_DumpInfo_2_54, STATE_VARIABLE_Specs_1_51, &STATE_VARIABLE_Specs_2_55);
  top_level__mercury_compile_front_end__do_typecheck_16_p_0(ProgressStream_15, ErrorStream_16, Verbose_25, Stats_26, Globals_24, &FoundSyntaxError_27, &FoundTypeError_28, &DidWeExceedIterationLimit_29, STATE_VARIABLE_HLDS_2_53, &STATE_VARIABLE_HLDS_3_57, STATE_VARIABLE_DumpInfo_2_54, &STATE_VARIABLE_DumpInfo_3_58, STATE_VARIABLE_Specs_2_55, &STATE_VARIABLE_Specs_3_59);
  succeeded = (FoundUndefModeError_18 == (MR_Integer) 1);
  if (succeeded)
  {
    *STATE_VARIABLE_FoundError_38 = (MR_Integer) 1;
    libs__file_util__maybe_write_string_5_p_0(ProgressStream_15, Verbose_25, (MR_String) "% Program contains undefined inst or undefined mode error(s).\n");
    mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
    *STATE_VARIABLE_Specs_44 = STATE_VARIABLE_Specs_3_59;
    *STATE_VARIABLE_DumpInfo_42 = STATE_VARIABLE_DumpInfo_3_58;
    *STATE_VARIABLE_HLDS_40 = STATE_VARIABLE_HLDS_3_57;
  }
  else
  {
    succeeded = (DidWeExceedIterationLimit_29 == (MR_Integer) 1);
    if (succeeded)
    {
      *STATE_VARIABLE_FoundError_38 = (MR_Integer) 1;
      mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
      *STATE_VARIABLE_Specs_44 = STATE_VARIABLE_Specs_3_59;
      *STATE_VARIABLE_DumpInfo_42 = STATE_VARIABLE_DumpInfo_3_58;
      *STATE_VARIABLE_HLDS_40 = STATE_VARIABLE_HLDS_3_57;
    }
    else
    {
      MR_Word MissingTypeDefnSpecs_30;
      MR_Word SomeMissingTypeDefns_31;
      MR_Integer NumPostTypeCheckErrors_32;
      MR_Word PostTypeCheckAlwaysSpecs_33;
      MR_Word PostTypeCheckNoTypeErrorSpecs_34;
      MR_Integer ExitStatus_35;
      MR_Word MaybeWorstSeverity_36;
      MR_Word STATE_VARIABLE_Specs_4_69;
      MR_Word STATE_VARIABLE_HLDS_4_70;
      MR_Word STATE_VARIABLE_HLDS_5_71;
      MR_Word STATE_VARIABLE_Specs_5_74;
      MR_Word STATE_VARIABLE_DumpInfo_4_77;
      MR_Word STATE_VARIABLE_Specs_6_79;
      MR_Word STATE_VARIABLE_Specs_7_80;

      check_hlds__check_for_missing_type_defns__check_for_missing_type_defns_2_p_0(STATE_VARIABLE_HLDS_3_57, &MissingTypeDefnSpecs_30);
      STATE_VARIABLE_Specs_4_69 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), STATE_VARIABLE_Specs_3_59, MissingTypeDefnSpecs_30);
      SomeMissingTypeDefns_31 = parse_tree__error_util__contains_errors_2_f_0(Globals_24, MissingTypeDefnSpecs_30);
      check_hlds__inst_user__pretest_user_inst_table_2_p_0(STATE_VARIABLE_HLDS_3_57, &STATE_VARIABLE_HLDS_4_70);
      check_hlds__post_typecheck__post_typecheck_finish_preds_5_p_0(STATE_VARIABLE_HLDS_4_70, &STATE_VARIABLE_HLDS_5_71, &NumPostTypeCheckErrors_32, &PostTypeCheckAlwaysSpecs_33, &PostTypeCheckNoTypeErrorSpecs_34);
      mercury__io__get_exit_status_3_p_0(&ExitStatus_35);
      MaybeWorstSeverity_36 = parse_tree__error_util__worst_severity_in_specs_2_f_0(Globals_24, STATE_VARIABLE_Specs_4_69);
      succeeded = (ExitStatus_35 != (MR_Integer) 0);
      if (!(succeeded))
      {
        MR_Word Var_73;

        succeeded = (MaybeWorstSeverity_36 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          Var_73 = ((MR_Word) ((MR_hl_field(1, MaybeWorstSeverity_36, 0))));
          succeeded = (Var_73 == (MR_Integer) 0);
        }
      }
      if (succeeded)
        STATE_VARIABLE_Specs_5_74 = STATE_VARIABLE_Specs_4_69;
      else
        check_hlds__unused_types__warn_about_unused_types_3_p_0(STATE_VARIABLE_HLDS_5_71, STATE_VARIABLE_Specs_4_69, &STATE_VARIABLE_Specs_5_74);
      hlds__passes_aux__maybe_dump_hlds_8_p_0(ProgressStream_15, STATE_VARIABLE_HLDS_5_71, (MR_Integer) 19, (MR_String) "post_typecheck", STATE_VARIABLE_DumpInfo_3_58, &STATE_VARIABLE_DumpInfo_4_77);
      STATE_VARIABLE_Specs_6_79 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), STATE_VARIABLE_Specs_5_74, PostTypeCheckAlwaysSpecs_33);
      switch (FoundTypeError_28) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          STATE_VARIABLE_Specs_7_80 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), STATE_VARIABLE_Specs_6_79, PostTypeCheckNoTypeErrorSpecs_34);
          break;
        case (MR_Integer) 1:
          STATE_VARIABLE_Specs_7_80 = STATE_VARIABLE_Specs_6_79;
          break;
      }
      succeeded = (FoundTypeError_28 == (MR_Integer) 1);
      if (!(succeeded))
      {
        succeeded = (FoundSyntaxError_27 == (MR_Integer) 1);
        if (!(succeeded))
        {
          succeeded = (SomeMissingTypeDefns_31 == (MR_Integer) 1);
          if (!(succeeded))
            succeeded = (NumPostTypeCheckErrors_32 > (MR_Integer) 0);
        }
      }
      if (succeeded)
      {
        *STATE_VARIABLE_FoundError_38 = (MR_Integer) 1;
        *STATE_VARIABLE_Specs_44 = STATE_VARIABLE_Specs_7_80;
        *STATE_VARIABLE_DumpInfo_42 = STATE_VARIABLE_DumpInfo_4_77;
        *STATE_VARIABLE_HLDS_40 = STATE_VARIABLE_HLDS_5_71;
      }
      else
        top_level__mercury_compile_front_end__frontend_pass_after_typecheck_17_p_0(ProgressStream_15, ErrorStream_16, OpModeAugment_17, Verbose_25, Stats_26, Globals_24, FoundUndefModeError_18, STATE_VARIABLE_FoundError_0_37, STATE_VARIABLE_FoundError_38, STATE_VARIABLE_HLDS_5_71, STATE_VARIABLE_HLDS_40, STATE_VARIABLE_DumpInfo_4_77, STATE_VARIABLE_DumpInfo_42, STATE_VARIABLE_Specs_7_80, STATE_VARIABLE_Specs_44);
    }
  }
}

static void MR_CALL 
top_level__mercury_compile_front_end__frontend_pass_after_typecheck_17_p_0(
  MR_Word ProgressStream_18,
  MR_Word ErrorStream_19,
  MR_Word OpModeAugment_20,
  MR_Word Verbose_21,
  MR_Word Stats_22,
  MR_Word Globals_23,
  MR_Word FoundUndefModeError_24,
  MR_Word STATE_VARIABLE_FoundError_0_36,
  MR_Word * STATE_VARIABLE_FoundError_37,
  MR_Word STATE_VARIABLE_HLDS_0_38,
  MR_Word * STATE_VARIABLE_HLDS_39,
  MR_Word STATE_VARIABLE_DumpInfo_0_40,
  MR_Word * STATE_VARIABLE_DumpInfo_41,
  MR_Word STATE_VARIABLE_Specs_0_42,
  MR_Word * STATE_VARIABLE_Specs_43)
{
  MR_bool succeeded;
  MR_Word STATE_VARIABLE_HLDS_1_46;
  MR_Word STATE_VARIABLE_Specs_1_47;
  MR_Word STATE_VARIABLE_DumpInfo_1_51;
  MR_Word STATE_VARIABLE_HLDS_2_53;
  MR_Word STATE_VARIABLE_Specs_2_54;
  MR_Word STATE_VARIABLE_DumpInfo_2_58;
  MR_Word PuritySpecs_94;
  MR_Word Globals_95;
  MR_Word PurityErrors_96;
  MR_Word STATE_VARIABLE_Specs_1_100;

  libs__file_util__maybe_write_string_5_p_0(ProgressStream_18, Verbose_21, (MR_String) "% Purity-checking clauses...\n");
  check_hlds__purity__puritycheck_module_5_p_0(ProgressStream_18, STATE_VARIABLE_HLDS_0_38, &STATE_VARIABLE_HLDS_1_46, (MR_Word) ((MR_Unsigned) 0U), &PuritySpecs_94);
  STATE_VARIABLE_Specs_1_100 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), PuritySpecs_94, STATE_VARIABLE_Specs_0_42);
  hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_HLDS_1_46, &Globals_95);
  PurityErrors_96 = parse_tree__error_util__contains_errors_2_f_0(Globals_95, PuritySpecs_94);
  parse_tree__write_error_spec__maybe_write_out_errors_7_p_0(ErrorStream_19, Verbose_21, Globals_95, STATE_VARIABLE_Specs_1_100, &STATE_VARIABLE_Specs_1_47);
  switch (PurityErrors_96) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      libs__file_util__maybe_write_string_5_p_0(ProgressStream_18, Verbose_21, (MR_String) "% Program is purity-correct.\n");
      break;
    case (MR_Integer) 1:
      libs__file_util__maybe_write_string_5_p_0(ProgressStream_18, Verbose_21, (MR_String) "% Program contains purity error(s).\n");
      break;
  }
  libs__file_util__maybe_report_stats_4_p_0(ProgressStream_18, Stats_22);
  hlds__passes_aux__maybe_dump_hlds_8_p_0(ProgressStream_18, STATE_VARIABLE_HLDS_1_46, (MR_Integer) 20, (MR_String) "puritycheck", STATE_VARIABLE_DumpInfo_0_40, &STATE_VARIABLE_DumpInfo_1_51);
  top_level__mercury_compile_front_end__check_promises_10_p_0(ProgressStream_18, ErrorStream_19, Verbose_21, Stats_22, STATE_VARIABLE_HLDS_1_46, &STATE_VARIABLE_HLDS_2_53, STATE_VARIABLE_Specs_1_47, &STATE_VARIABLE_Specs_2_54);
  hlds__passes_aux__maybe_dump_hlds_8_p_0(ProgressStream_18, STATE_VARIABLE_HLDS_2_53, (MR_Integer) 22, (MR_String) "check_promises", STATE_VARIABLE_DumpInfo_1_51, &STATE_VARIABLE_DumpInfo_2_58);
  switch (MR_tag((MR_Word) OpModeAugment_20)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(OpModeAugment_20)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word MakeOptIntEnabled_81;
            MR_Word IntermodAnalysis_82;
            MR_Word STATE_VARIABLE_HLDS_3_84;
            MR_Word STATE_VARIABLE_Specs_3_85;
            MR_Word STATE_VARIABLE_DumpInfo_3_89;

            top_level__mercury_compile_front_end__subst_implementation_defined_literals_10_p_0(ProgressStream_18, ErrorStream_19, Verbose_21, Stats_22, STATE_VARIABLE_HLDS_2_53, &STATE_VARIABLE_HLDS_3_84, STATE_VARIABLE_Specs_2_54, &STATE_VARIABLE_Specs_3_85);
            hlds__passes_aux__maybe_dump_hlds_8_p_0(ProgressStream_18, STATE_VARIABLE_HLDS_3_84, (MR_Integer) 25, (MR_String) "implementation_defined_literals", STATE_VARIABLE_DumpInfo_2_58, &STATE_VARIABLE_DumpInfo_3_89);
            succeeded = (STATE_VARIABLE_FoundError_0_36 == (MR_Integer) 0);
            if (succeeded)
              succeeded = (FoundUndefModeError_24 == (MR_Integer) 0);
            if (succeeded)
              MakeOptIntEnabled_81 = (MR_Integer) 1;
            else
              MakeOptIntEnabled_81 = (MR_Integer) 0;
            libs__globals__lookup_bool_option_3_p_0(Globals_23, (MR_Integer) 435, &IntermodAnalysis_82);
            switch ((MR_Integer) 1) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word FoundModeOrDetError_74;
                  MR_Word STATE_VARIABLE_HLDS_5_75;

                  switch (MakeOptIntEnabled_81) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      STATE_VARIABLE_HLDS_5_75 = STATE_VARIABLE_HLDS_3_84;
                      break;
                    case (MR_Integer) 1:
                      top_level__mercury_compile_front_end__mark_entities_in_opt_file_as_opt_exported_7_p_0(ProgressStream_18, IntermodAnalysis_82, Globals_23, STATE_VARIABLE_HLDS_3_84, &STATE_VARIABLE_HLDS_5_75);
                      break;
                  }
                  top_level__mercury_compile_front_end__frontend_pass_by_phases_11_p_0(ProgressStream_18, ErrorStream_19, STATE_VARIABLE_HLDS_5_75, STATE_VARIABLE_HLDS_39, &FoundModeOrDetError_74, STATE_VARIABLE_DumpInfo_3_89, STATE_VARIABLE_DumpInfo_41, STATE_VARIABLE_Specs_3_85, STATE_VARIABLE_Specs_43);
                  mercury__bool__or_3_p_0(FoundModeOrDetError_74, STATE_VARIABLE_FoundError_0_36, STATE_VARIABLE_FoundError_37);
                }
                break;
              case (MR_Integer) 1:
                {
                  switch (MakeOptIntEnabled_81) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        *STATE_VARIABLE_HLDS_39 = STATE_VARIABLE_HLDS_3_84;
                        *STATE_VARIABLE_DumpInfo_41 = STATE_VARIABLE_DumpInfo_3_89;
                        *STATE_VARIABLE_Specs_43 = STATE_VARIABLE_Specs_3_85;
                      }
                      break;
                    case (MR_Integer) 1:
                      top_level__mercury_compile_front_end__create_and_write_opt_file_12_p_0(ProgressStream_18, ErrorStream_19, IntermodAnalysis_82, Globals_23, STATE_VARIABLE_HLDS_3_84, STATE_VARIABLE_HLDS_39, STATE_VARIABLE_DumpInfo_3_89, STATE_VARIABLE_DumpInfo_41, STATE_VARIABLE_Specs_3_85, STATE_VARIABLE_Specs_43);
                      break;
                  }
                  *STATE_VARIABLE_FoundError_37 = STATE_VARIABLE_FoundError_0_36;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 1:
        case (MR_Integer) 2:
        case (MR_Integer) 3:
          {
            MR_Word MakeOptIntEnabled_33;
            MR_Word IntermodAnalysis_34;
            MR_Word STATE_VARIABLE_HLDS_3_60;
            MR_Word STATE_VARIABLE_Specs_3_61;
            MR_Word STATE_VARIABLE_DumpInfo_3_65;
            MR_Word Globals_106;

            hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_HLDS_2_53, &Globals_106);
            parse_tree__write_error_spec__maybe_write_out_errors_7_p_0(ErrorStream_19, Verbose_21, Globals_106, STATE_VARIABLE_Specs_2_54, &STATE_VARIABLE_Specs_3_61);
            libs__file_util__maybe_write_string_5_p_0(ProgressStream_18, Verbose_21, (MR_String) "% Substituting implementation-defined literals...\n");
            libs__file_util__maybe_flush_output_4_p_0(ProgressStream_18, Verbose_21);
            check_hlds__implementation_defined_literals__subst_impl_defined_literals_2_p_0(STATE_VARIABLE_HLDS_2_53, &STATE_VARIABLE_HLDS_3_60);
            libs__file_util__maybe_write_string_5_p_0(ProgressStream_18, Verbose_21, (MR_String) "% done.\n");
            libs__file_util__maybe_report_stats_4_p_0(ProgressStream_18, Stats_22);
            hlds__passes_aux__maybe_dump_hlds_8_p_0(ProgressStream_18, STATE_VARIABLE_HLDS_3_60, (MR_Integer) 25, (MR_String) "implementation_defined_literals", STATE_VARIABLE_DumpInfo_2_58, &STATE_VARIABLE_DumpInfo_3_65);
            succeeded = (STATE_VARIABLE_FoundError_0_36 == (MR_Integer) 0);
            if (succeeded)
              succeeded = (FoundUndefModeError_24 == (MR_Integer) 0);
            if (succeeded)
              MakeOptIntEnabled_33 = (MR_Integer) 1;
            else
              MakeOptIntEnabled_33 = (MR_Integer) 0;
            libs__globals__lookup_bool_option_3_p_0(Globals_23, (MR_Integer) 435, &IntermodAnalysis_34);
            switch ((MR_Integer) 0) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word FoundModeOrDetError_35;
                  MR_Word STATE_VARIABLE_HLDS_5_72;

                  switch (MakeOptIntEnabled_33) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      STATE_VARIABLE_HLDS_5_72 = STATE_VARIABLE_HLDS_3_60;
                      break;
                    case (MR_Integer) 1:
                      top_level__mercury_compile_front_end__mark_entities_in_opt_file_as_opt_exported_7_p_0(ProgressStream_18, IntermodAnalysis_34, Globals_23, STATE_VARIABLE_HLDS_3_60, &STATE_VARIABLE_HLDS_5_72);
                      break;
                  }
                  top_level__mercury_compile_front_end__frontend_pass_by_phases_11_p_0(ProgressStream_18, ErrorStream_19, STATE_VARIABLE_HLDS_5_72, STATE_VARIABLE_HLDS_39, &FoundModeOrDetError_35, STATE_VARIABLE_DumpInfo_3_65, STATE_VARIABLE_DumpInfo_41, STATE_VARIABLE_Specs_3_61, STATE_VARIABLE_Specs_43);
                  mercury__bool__or_3_p_0(FoundModeOrDetError_35, STATE_VARIABLE_FoundError_0_36, STATE_VARIABLE_FoundError_37);
                }
                break;
              case (MR_Integer) 1:
                {
                  switch (MakeOptIntEnabled_33) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        *STATE_VARIABLE_HLDS_39 = STATE_VARIABLE_HLDS_3_60;
                        *STATE_VARIABLE_DumpInfo_41 = STATE_VARIABLE_DumpInfo_3_65;
                        *STATE_VARIABLE_Specs_43 = STATE_VARIABLE_Specs_3_61;
                      }
                      break;
                    case (MR_Integer) 1:
                      top_level__mercury_compile_front_end__create_and_write_opt_file_12_p_0(ProgressStream_18, ErrorStream_19, IntermodAnalysis_34, Globals_23, STATE_VARIABLE_HLDS_3_60, STATE_VARIABLE_HLDS_39, STATE_VARIABLE_DumpInfo_3_65, STATE_VARIABLE_DumpInfo_41, STATE_VARIABLE_Specs_3_61, STATE_VARIABLE_Specs_43);
                      break;
                  }
                  *STATE_VARIABLE_FoundError_37 = STATE_VARIABLE_FoundError_0_36;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 4:
          {
            *STATE_VARIABLE_FoundError_37 = STATE_VARIABLE_FoundError_0_36;
            *STATE_VARIABLE_HLDS_39 = STATE_VARIABLE_HLDS_2_53;
            *STATE_VARIABLE_DumpInfo_41 = STATE_VARIABLE_DumpInfo_2_58;
            *STATE_VARIABLE_Specs_43 = STATE_VARIABLE_Specs_2_54;
          }
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word MakeOptIntEnabled_33;
        MR_Word IntermodAnalysis_34;
        MR_Word STATE_VARIABLE_HLDS_3_60;
        MR_Word STATE_VARIABLE_Specs_3_61;
        MR_Word STATE_VARIABLE_DumpInfo_3_65;
        MR_Word Globals_106;

        hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_HLDS_2_53, &Globals_106);
        parse_tree__write_error_spec__maybe_write_out_errors_7_p_0(ErrorStream_19, Verbose_21, Globals_106, STATE_VARIABLE_Specs_2_54, &STATE_VARIABLE_Specs_3_61);
        libs__file_util__maybe_write_string_5_p_0(ProgressStream_18, Verbose_21, (MR_String) "% Substituting implementation-defined literals...\n");
        libs__file_util__maybe_flush_output_4_p_0(ProgressStream_18, Verbose_21);
        check_hlds__implementation_defined_literals__subst_impl_defined_literals_2_p_0(STATE_VARIABLE_HLDS_2_53, &STATE_VARIABLE_HLDS_3_60);
        libs__file_util__maybe_write_string_5_p_0(ProgressStream_18, Verbose_21, (MR_String) "% done.\n");
        libs__file_util__maybe_report_stats_4_p_0(ProgressStream_18, Stats_22);
        hlds__passes_aux__maybe_dump_hlds_8_p_0(ProgressStream_18, STATE_VARIABLE_HLDS_3_60, (MR_Integer) 25, (MR_String) "implementation_defined_literals", STATE_VARIABLE_DumpInfo_2_58, &STATE_VARIABLE_DumpInfo_3_65);
        succeeded = (STATE_VARIABLE_FoundError_0_36 == (MR_Integer) 0);
        if (succeeded)
          succeeded = (FoundUndefModeError_24 == (MR_Integer) 0);
        if (succeeded)
          MakeOptIntEnabled_33 = (MR_Integer) 1;
        else
          MakeOptIntEnabled_33 = (MR_Integer) 0;
        libs__globals__lookup_bool_option_3_p_0(Globals_23, (MR_Integer) 435, &IntermodAnalysis_34);
        switch ((MR_Integer) 0) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word FoundModeOrDetError_35;
              MR_Word STATE_VARIABLE_HLDS_5_72;

              switch (MakeOptIntEnabled_33) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  STATE_VARIABLE_HLDS_5_72 = STATE_VARIABLE_HLDS_3_60;
                  break;
                case (MR_Integer) 1:
                  top_level__mercury_compile_front_end__mark_entities_in_opt_file_as_opt_exported_7_p_0(ProgressStream_18, IntermodAnalysis_34, Globals_23, STATE_VARIABLE_HLDS_3_60, &STATE_VARIABLE_HLDS_5_72);
                  break;
              }
              top_level__mercury_compile_front_end__frontend_pass_by_phases_11_p_0(ProgressStream_18, ErrorStream_19, STATE_VARIABLE_HLDS_5_72, STATE_VARIABLE_HLDS_39, &FoundModeOrDetError_35, STATE_VARIABLE_DumpInfo_3_65, STATE_VARIABLE_DumpInfo_41, STATE_VARIABLE_Specs_3_61, STATE_VARIABLE_Specs_43);
              mercury__bool__or_3_p_0(FoundModeOrDetError_35, STATE_VARIABLE_FoundError_0_36, STATE_VARIABLE_FoundError_37);
            }
            break;
          case (MR_Integer) 1:
            {
              switch (MakeOptIntEnabled_33) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    *STATE_VARIABLE_HLDS_39 = STATE_VARIABLE_HLDS_3_60;
                    *STATE_VARIABLE_DumpInfo_41 = STATE_VARIABLE_DumpInfo_3_65;
                    *STATE_VARIABLE_Specs_43 = STATE_VARIABLE_Specs_3_61;
                  }
                  break;
                case (MR_Integer) 1:
                  top_level__mercury_compile_front_end__create_and_write_opt_file_12_p_0(ProgressStream_18, ErrorStream_19, IntermodAnalysis_34, Globals_23, STATE_VARIABLE_HLDS_3_60, STATE_VARIABLE_HLDS_39, STATE_VARIABLE_DumpInfo_3_65, STATE_VARIABLE_DumpInfo_41, STATE_VARIABLE_Specs_3_61, STATE_VARIABLE_Specs_43);
                  break;
              }
              *STATE_VARIABLE_FoundError_37 = STATE_VARIABLE_FoundError_0_36;
            }
            break;
        }
      }
      break;
  }
}

static void MR_CALL 
top_level__mercury_compile_front_end__subst_implementation_defined_literals_10_p_0(
  MR_Word ProgressStream_11,
  MR_Word ErrorStream_12,
  MR_Word Verbose_13,
  MR_Word Stats_14,
  MR_Word STATE_VARIABLE_HLDS_0_19,
  MR_Word * STATE_VARIABLE_HLDS_20,
  MR_Word STATE_VARIABLE_Specs_0_21,
  MR_Word * STATE_VARIABLE_Specs_22)
{
  MR_Word Globals_18;

  hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_HLDS_0_19, &Globals_18);
  parse_tree__write_error_spec__maybe_write_out_errors_7_p_0(ErrorStream_12, Verbose_13, Globals_18, STATE_VARIABLE_Specs_0_21, STATE_VARIABLE_Specs_22);
  libs__file_util__maybe_write_string_5_p_0(ProgressStream_11, Verbose_13, (MR_String) "% Substituting implementation-defined literals...\n");
  libs__file_util__maybe_flush_output_4_p_0(ProgressStream_11, Verbose_13);
  check_hlds__implementation_defined_literals__subst_impl_defined_literals_2_p_0(STATE_VARIABLE_HLDS_0_19, STATE_VARIABLE_HLDS_20);
  libs__file_util__maybe_write_string_5_p_0(ProgressStream_11, Verbose_13, (MR_String) "% done.\n");
  libs__file_util__maybe_report_stats_4_p_0(ProgressStream_11, Stats_14);
}

static void MR_CALL 
top_level__mercury_compile_front_end__check_promises_10_p_0(
  MR_Word ProgressStream_11,
  MR_Word ErrorStream_12,
  MR_Word Verbose_13,
  MR_Word Stats_14,
  MR_Word STATE_VARIABLE_HLDS_0_21,
  MR_Word * STATE_VARIABLE_HLDS_22,
  MR_Word STATE_VARIABLE_Specs_0_23,
  MR_Word * STATE_VARIABLE_Specs_24)
{
  MR_Word PromiseSpecs_18;
  MR_Word Globals_19;
  MR_Word PromiseErrors_20;
  MR_Word STATE_VARIABLE_Specs_1_31;

  libs__file_util__maybe_write_string_5_p_0(ProgressStream_11, Verbose_13, (MR_String) "% Checking any promises...\n");
  check_hlds__check_promise__check_promises_in_module_5_p_0(ProgressStream_11, STATE_VARIABLE_HLDS_0_21, STATE_VARIABLE_HLDS_22, (MR_Word) ((MR_Unsigned) 0U), &PromiseSpecs_18);
  STATE_VARIABLE_Specs_1_31 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), PromiseSpecs_18, STATE_VARIABLE_Specs_0_23);
  hlds__hlds_module__module_info_get_globals_2_p_0(*STATE_VARIABLE_HLDS_22, &Globals_19);
  PromiseErrors_20 = parse_tree__error_util__contains_errors_2_f_0(Globals_19, PromiseSpecs_18);
  parse_tree__write_error_spec__maybe_write_out_errors_7_p_0(ErrorStream_12, Verbose_13, Globals_19, STATE_VARIABLE_Specs_1_31, STATE_VARIABLE_Specs_24);
  switch (PromiseErrors_20) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      libs__file_util__maybe_write_string_5_p_0(ProgressStream_11, Verbose_13, (MR_String) "% All promises are correct.\n");
      break;
    case (MR_Integer) 1:
      libs__file_util__maybe_write_string_5_p_0(ProgressStream_11, Verbose_13, (MR_String) "% Program contains error(s) in promises.\n");
      break;
  }
  libs__file_util__maybe_report_stats_4_p_0(ProgressStream_11, Stats_14);
}

static void MR_CALL 
top_level__mercury_compile_front_end__mark_entities_in_opt_file_as_opt_exported_7_p_0(
  MR_Word ProgressStream_8,
  MR_Word IntermodAnalysis_9,
  MR_Word Globals_10,
  MR_Word STATE_VARIABLE_HLDS_0_26,
  MR_Word * STATE_VARIABLE_HLDS_27)
{
  MR_bool succeeded;
  MR_Word IntermodOpt_13;

  libs__globals__lookup_bool_option_3_p_0(Globals_10, (MR_Integer) 428, &IntermodOpt_13);
  succeeded = (IntermodOpt_13 == (MR_Integer) 1);
  if (!(succeeded))
    succeeded = (IntermodAnalysis_9 == (MR_Integer) 1);
  if (succeeded)
    transform_hlds__intermod_mark_exported__maybe_opt_export_entities_3_p_0(ProgressStream_8, STATE_VARIABLE_HLDS_0_26, STATE_VARIABLE_HLDS_27);
  else
  {
    MR_Word UseOptFiles_15;

    libs__globals__lookup_bool_option_3_p_0(Globals_10, (MR_Integer) 429, &UseOptFiles_15);
    switch (UseOptFiles_15) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *STATE_VARIABLE_HLDS_27 = STATE_VARIABLE_HLDS_0_26;
        break;
      case (MR_Integer) 1:
        {
          MR_Word ModuleName_17;
          MR_Word SearchAuthDir_19;
          MR_String OptFileName_20;
          MR_Word MaybeDir_23;
          MR_String _OptFileNameProposed_21;
          MR_Word _SearchDirs_22;

          hlds__hlds_module__module_info_get_name_2_p_0(STATE_VARIABLE_HLDS_0_26, &ModuleName_17);
          parse_tree__file_names__module_name_to_search_file_name_8_p_1(Globals_10, (MR_String) "predicate \140top_level.mercury_compile_front_end.mark_entities_in_opt_file_as_opt_exported\'/7", (MR_Word) (MR_mkword(3, &top_level__mercury_compile_front_end_scalar_common_1[1])), ModuleName_17, (MR_Word) ((MR_Unsigned) 8U), &SearchAuthDir_19, &OptFileName_20, &_OptFileNameProposed_21);
          parse_tree__find_module__search_for_file_returning_dir_6_p_0(SearchAuthDir_19, OptFileName_20, &_SearchDirs_22, &MaybeDir_23);
          if (((MR_tag((MR_Word) MaybeDir_23)) == (MR_Integer) 1))
            *STATE_VARIABLE_HLDS_27 = STATE_VARIABLE_HLDS_0_26;
          else
            transform_hlds__intermod_mark_exported__maybe_opt_export_entities_3_p_0(ProgressStream_8, STATE_VARIABLE_HLDS_0_26, STATE_VARIABLE_HLDS_27);
        }
        break;
    }
  }
}

static void MR_CALL 
top_level__mercury_compile_front_end__create_and_write_opt_file_12_p_0(
  MR_Word ProgressStream_13,
  MR_Word ErrorStream_14,
  MR_Word IntermodAnalysis_15,
  MR_Word Globals_16,
  MR_Word STATE_VARIABLE_HLDS_0_55,
  MR_Word * STATE_VARIABLE_HLDS_56,
  MR_Word STATE_VARIABLE_DumpInfo_0_57,
  MR_Word * STATE_VARIABLE_DumpInfo_58,
  MR_Word STATE_VARIABLE_Specs_0_59,
  MR_Word * STATE_VARIABLE_Specs_60)
{
  MR_bool succeeded;
  MR_Word ModuleName_21;
  MR_String OptFileName_23;
  MR_Word OptState0_25;
  MR_Word IntermodInfo_26;
  MR_Word ParseTreePlainOpt0_27;
  MR_Word OptState1_28;
  MR_Word ParseTreePlainOpt_32;
  MR_Word OptState_33;
  MR_String OptFileStr_34;
  MR_Word ReadFileResult_35;
  MR_Word WriteOpt_37;
  MR_Word STATE_VARIABLE_HLDS_1_66;
  MR_String _OptFileNameProposed_24;
  MR_Word NeedMiddlePassForOptFile_29;

  hlds__hlds_module__module_info_get_name_2_p_0(STATE_VARIABLE_HLDS_0_55, &ModuleName_21);
  parse_tree__file_names__module_name_to_file_name_create_dirs_8_p_0(Globals_16, (MR_String) "predicate \140top_level.mercury_compile_front_end.create_and_write_opt_file\'/12", (MR_Word) (MR_mkword(3, &top_level__mercury_compile_front_end_scalar_common_1[1])), ModuleName_21, &OptFileName_23, &_OptFileNameProposed_24);
  OptState0_25 = mercury__string__builder__init_0_f_0();
  transform_hlds__intermod__format_initial_opt_file_5_p_0(STATE_VARIABLE_HLDS_0_55, &IntermodInfo_26, &ParseTreePlainOpt0_27, OptState0_25, &OptState1_28);
  transform_hlds__intermod_mark_exported__maybe_opt_export_listed_entities_3_p_0(IntermodInfo_26, STATE_VARIABLE_HLDS_0_55, &STATE_VARIABLE_HLDS_1_66);
  succeeded = (IntermodAnalysis_15 == (MR_Integer) 0);
  if (succeeded)
  {
    top_level__mercury_compile_front_end__need_middle_pass_for_opt_file_2_p_0(Globals_16, &NeedMiddlePassForOptFile_29);
    succeeded = (NeedMiddlePassForOptFile_29 == (MR_Integer) 1);
  }
  if (succeeded)
  {
    MR_Word FoundFrontEndError_30;
    MR_Word STATE_VARIABLE_HLDS_2_67;
    MR_Word STATE_VARIABLE_Specs_1_69;

    top_level__mercury_compile_front_end__frontend_pass_by_phases_11_p_0(ProgressStream_13, ErrorStream_14, STATE_VARIABLE_HLDS_1_66, &STATE_VARIABLE_HLDS_2_67, &FoundFrontEndError_30, STATE_VARIABLE_DumpInfo_0_57, STATE_VARIABLE_DumpInfo_58, STATE_VARIABLE_Specs_0_59, &STATE_VARIABLE_Specs_1_69);
    switch (FoundFrontEndError_30) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word UnusedArgsInfos_31;

          top_level__mercury_compile_middle_passes__middle_pass_for_opt_file_8_p_0(ProgressStream_13, STATE_VARIABLE_HLDS_2_67, STATE_VARIABLE_HLDS_56, &UnusedArgsInfos_31, STATE_VARIABLE_Specs_1_69, STATE_VARIABLE_Specs_60);
          transform_hlds__intermod_analysis__append_analysis_pragmas_to_opt_file_6_p_0(*STATE_VARIABLE_HLDS_56, UnusedArgsInfos_31, ParseTreePlainOpt0_27, &ParseTreePlainOpt_32, OptState1_28, &OptState_33);
        }
        break;
      case (MR_Integer) 1:
        {
          ParseTreePlainOpt_32 = ParseTreePlainOpt0_27;
          OptState_33 = OptState1_28;
          mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
          *STATE_VARIABLE_HLDS_56 = STATE_VARIABLE_HLDS_2_67;
          *STATE_VARIABLE_Specs_60 = STATE_VARIABLE_Specs_1_69;
        }
        break;
    }
  }
  else
  {
    ParseTreePlainOpt_32 = ParseTreePlainOpt0_27;
    OptState_33 = OptState1_28;
    *STATE_VARIABLE_Specs_60 = STATE_VARIABLE_Specs_0_59;
    *STATE_VARIABLE_DumpInfo_58 = STATE_VARIABLE_DumpInfo_0_57;
    *STATE_VARIABLE_HLDS_56 = STATE_VARIABLE_HLDS_1_66;
  }
  OptFileStr_34 = mercury__string__builder__to_string_1_f_0(OptState_33);
  mercury__io__read_named_file_as_string_4_p_0(OptFileName_23, &ReadFileResult_35);
  if (((MR_tag((MR_Word) ReadFileResult_35)) == (MR_Integer) 1))
    WriteOpt_37 = (MR_Integer) 1;
  else
  {
    MR_String OldOptFileStr_36 = ((MR_String) ((MR_hl_field(0, ReadFileResult_35, 0))));

    succeeded = (strcmp(OldOptFileStr_36, OptFileStr_34) == 0);
    if (succeeded)
      WriteOpt_37 = (MR_Integer) 0;
    else
      WriteOpt_37 = (MR_Integer) 1;
  }
  switch (WriteOpt_37) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word _TouchSucceeded_54;

        parse_tree__module_cmds__touch_module_ext_datestamp_7_p_0(Globals_16, ProgressStream_13, ModuleName_21, (MR_Word) (MR_mkword(3, &top_level__mercury_compile_front_end_scalar_common_1[2])), &_TouchSucceeded_54);
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word OpenResult_40;
        MR_Word TouchDateFile_344;

        mercury__io__open_output_4_p_0(OptFileName_23, &OpenResult_40);
        if (((MR_tag((MR_Word) OpenResult_40)) == (MR_Integer) 1))
        {
          MR_Word Error_50 = ((MR_Word) ((MR_hl_field(1, OpenResult_40, 0))));
          MR_String ProgName_51;
          MR_String ErrorMsg_52;

          TouchDateFile_344 = (MR_Integer) 0;
          mercury__io__progname_base_4_p_0((MR_String) "mmc", &ProgName_51);
          mercury__io__error_message_2_p_0(Error_50, &ErrorMsg_52);
          mercury__io__write_string_4_p_0(ProgressStream_13, ProgName_51);
          mercury__io__write_string_4_p_0(ProgressStream_13, (MR_String) ": cannot open \140");
          mercury__io__write_string_4_p_0(ProgressStream_13, OptFileName_23);
          mercury__io__write_string_4_p_0(ProgressStream_13, (MR_String) "\' for output: ");
          mercury__io__write_string_4_p_0(ProgressStream_13, ErrorMsg_52);
          mercury__io__write_string_4_p_0(ProgressStream_13, (MR_String) "\n");
          mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
        }
        else
        {
          MR_Word OptStream_41 = ((MR_Word) ((MR_hl_field(0, OpenResult_40, 0))));
          MR_Word Experiment5_42;

          mercury__io__write_string_4_p_0(OptStream_41, OptFileStr_34);
          mercury__io__close_output_3_p_0(OptStream_41);
          TouchDateFile_344 = (MR_Integer) 1;
          libs__globals__lookup_bool_option_3_p_0(Globals_16, (MR_Integer) 676, &Experiment5_42);
          switch (Experiment5_42) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word OptXResult_43;
                MR_String Var_81;

                Var_81 = mercury__string__f_43_43_2_f_0(OptFileName_23, (MR_String) "x");
                mercury__io__open_output_4_p_0(Var_81, &OptXResult_43);
                if (!(((MR_tag((MR_Word) OptXResult_43)) == (MR_Integer) 1)))
                {
                  MR_Word OptXStream_45 = ((MR_Word) ((MR_hl_field(0, OptXResult_43, 0))));
                  MR_Word Info_46;
                  MR_Word OptXState0_47;
                  MR_Word OptXState_48;
                  MR_String OptXFileStr_49;

                  Info_46 = parse_tree__parse_tree_out_info__init_merc_out_info_3_f_0(Globals_16, (MR_Integer) 0, (MR_Integer) 0);
                  OptXState0_47 = mercury__string__builder__init_0_f_0();
                  parse_tree__parse_tree_out__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_112_97_114_115_101_95_116_114_101_101_95_112_108_97_105_110_95_111_112_116_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_5_p_0((MR_Word) (&top_level__mercury_compile_front_end_scalar_common_3[1]), Info_46, ParseTreePlainOpt_32, OptXState0_47, &OptXState_48);
                  OptXFileStr_49 = mercury__string__builder__to_string_1_f_0(OptXState_48);
                  mercury__io__write_string_4_p_0(OptXStream_45, OptXFileStr_49);
                  mercury__io__close_output_3_p_0(OptXStream_45);
                }
              }
              break;
          }
        }
        switch (TouchDateFile_344) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word _TouchSucceeded_339;

              parse_tree__module_cmds__touch_module_ext_datestamp_7_p_0(Globals_16, ProgressStream_13, ModuleName_21, (MR_Word) (MR_mkword(3, &top_level__mercury_compile_front_end_scalar_common_1[2])), &_TouchSucceeded_339);
            }
            break;
        }
      }
      break;
  }
}

static void MR_CALL 
top_level__mercury_compile_front_end__frontend_pass_by_phases_11_p_0(
  MR_Word ProgressStream_12,
  MR_Word ErrorStream_13,
  MR_Word STATE_VARIABLE_HLDS_0_33,
  MR_Word * STATE_VARIABLE_HLDS_34,
  MR_Word * FoundError_15,
  MR_Word STATE_VARIABLE_DumpInfo_0_35,
  MR_Word * STATE_VARIABLE_DumpInfo_36,
  MR_Word STATE_VARIABLE_Specs_0_37,
  MR_Word * STATE_VARIABLE_Specs_38)
{
  MR_bool succeeded;
  MR_Word Globals_19;
  MR_Word Verbose_20;
  MR_Word Stats_21;
  MR_Word ExistsCastPredIds_22;
  MR_Word PolySafeToContinue_23;
  MR_Word STATE_VARIABLE_HLDS_1_43;
  MR_Word STATE_VARIABLE_Specs_1_44;
  MR_Word STATE_VARIABLE_DumpInfo_1_48;
  MR_Word STATE_VARIABLE_DumpInfo_16_154;

  hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_HLDS_0_33, &Globals_19);
  libs__globals__lookup_bool_option_3_p_0(Globals_19, (MR_Integer) 131, &Verbose_20);
  libs__globals__lookup_bool_option_3_p_0(Globals_19, (MR_Integer) 133, &Stats_21);
  top_level__mercury_compile_front_end__main_polymorphism_pass_12_p_0(ProgressStream_12, ErrorStream_13, Verbose_20, Stats_21, &ExistsCastPredIds_22, &PolySafeToContinue_23, STATE_VARIABLE_HLDS_0_33, &STATE_VARIABLE_HLDS_1_43, STATE_VARIABLE_Specs_0_37, &STATE_VARIABLE_Specs_1_44);
  hlds__passes_aux__maybe_dump_hlds_8_p_0(ProgressStream_12, STATE_VARIABLE_HLDS_1_43, (MR_Integer) 30, (MR_String) "polymorphism", STATE_VARIABLE_DumpInfo_0_35, &STATE_VARIABLE_DumpInfo_1_48);
  switch (PolySafeToContinue_23) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word FoundModeError_24;
        MR_Word ModesSafeToContinue_25;
        MR_Word STATE_VARIABLE_HLDS_2_50;
        MR_Word STATE_VARIABLE_Specs_2_51;
        MR_Word STATE_VARIABLE_DumpInfo_2_55;
        MR_Word STATE_VARIABLE_HLDS_3_57;
        MR_Word STATE_VARIABLE_Specs_3_58;
        MR_Word STATE_VARIABLE_DumpInfo_3_62;
        MR_Word STATE_VARIABLE_Specs_4_64;
        MR_Word STATE_VARIABLE_DumpInfo_4_68;
        MR_Word STATE_VARIABLE_HLDS_4_70;
        MR_Word STATE_VARIABLE_DumpInfo_5_74;
        MR_Word STATE_VARIABLE_HLDS_5_76;
        MR_Word STATE_VARIABLE_Specs_5_77;
        MR_Word STATE_VARIABLE_DumpInfo_6_81;
        MR_Word STATE_VARIABLE_HLDS_6_83;
        MR_Word STATE_VARIABLE_Specs_6_84;
        MR_Word STATE_VARIABLE_DumpInfo_7_88;

        top_level__mercury_compile_front_end__clause_to_proc_10_p_0(ProgressStream_12, ErrorStream_13, Verbose_20, Stats_21, STATE_VARIABLE_HLDS_1_43, &STATE_VARIABLE_HLDS_2_50, STATE_VARIABLE_Specs_1_44, &STATE_VARIABLE_Specs_2_51);
        hlds__passes_aux__maybe_dump_hlds_8_p_0(ProgressStream_12, STATE_VARIABLE_HLDS_2_50, (MR_Integer) 31, (MR_String) "clause_to_proc", STATE_VARIABLE_DumpInfo_1_48, &STATE_VARIABLE_DumpInfo_2_55);
        top_level__mercury_compile_front_end__post_copy_polymorphism_pass_11_p_0(ProgressStream_12, ErrorStream_13, Verbose_20, Stats_21, ExistsCastPredIds_22, STATE_VARIABLE_HLDS_2_50, &STATE_VARIABLE_HLDS_3_57, STATE_VARIABLE_Specs_2_51, &STATE_VARIABLE_Specs_3_58);
        hlds__passes_aux__maybe_dump_hlds_8_p_0(ProgressStream_12, STATE_VARIABLE_HLDS_3_57, (MR_Integer) 32, (MR_String) "post_copy_polymorphism", STATE_VARIABLE_DumpInfo_2_55, &STATE_VARIABLE_DumpInfo_3_62);
        top_level__mercury_compile_front_end__maybe_warn_about_unused_imports_9_p_0(ProgressStream_12, ErrorStream_13, Verbose_20, Stats_21, STATE_VARIABLE_HLDS_3_57, STATE_VARIABLE_Specs_3_58, &STATE_VARIABLE_Specs_4_64);
        hlds__passes_aux__maybe_dump_hlds_8_p_0(ProgressStream_12, STATE_VARIABLE_HLDS_3_57, (MR_Integer) 33, (MR_String) "unused_imports", STATE_VARIABLE_DumpInfo_3_62, &STATE_VARIABLE_DumpInfo_4_68);
        top_level__mercury_compile_front_end__maybe_mode_constraints_7_p_0(ProgressStream_12, Verbose_20, Stats_21, STATE_VARIABLE_HLDS_3_57, &STATE_VARIABLE_HLDS_4_70);
        hlds__passes_aux__maybe_dump_hlds_8_p_0(ProgressStream_12, STATE_VARIABLE_HLDS_4_70, (MR_Integer) 34, (MR_String) "mode_constraints", STATE_VARIABLE_DumpInfo_4_68, &STATE_VARIABLE_DumpInfo_5_74);
        top_level__mercury_compile_front_end__modecheck_12_p_0(ProgressStream_12, ErrorStream_13, Verbose_20, Stats_21, STATE_VARIABLE_HLDS_4_70, &STATE_VARIABLE_HLDS_5_76, &FoundModeError_24, &ModesSafeToContinue_25, STATE_VARIABLE_Specs_4_64, &STATE_VARIABLE_Specs_5_77);
        hlds__passes_aux__maybe_dump_hlds_8_p_0(ProgressStream_12, STATE_VARIABLE_HLDS_5_76, (MR_Integer) 35, (MR_String) "modecheck", STATE_VARIABLE_DumpInfo_5_74, &STATE_VARIABLE_DumpInfo_6_81);
        top_level__mercury_compile_front_end__maybe_compute_goal_modes_10_p_0(ProgressStream_12, ErrorStream_13, Verbose_20, Stats_21, STATE_VARIABLE_HLDS_5_76, &STATE_VARIABLE_HLDS_6_83, STATE_VARIABLE_Specs_5_77, &STATE_VARIABLE_Specs_6_84);
        hlds__passes_aux__maybe_dump_hlds_8_p_0(ProgressStream_12, STATE_VARIABLE_HLDS_6_83, (MR_Integer) 36, (MR_String) "goal_modes", STATE_VARIABLE_DumpInfo_6_81, &STATE_VARIABLE_DumpInfo_7_88);
        switch (ModesSafeToContinue_25) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word FoundUniqError_26;
              MR_Word FoundStratError_27;
              MR_Word FoundOISUError_28;
              MR_Word FoundTryError_29;
              MR_Word MaybeWorstSpecsSeverity_30;
              MR_Integer ExitStatus_31;
              MR_Word STATE_VARIABLE_HLDS_7_90;
              MR_Word STATE_VARIABLE_DumpInfo_8_94;
              MR_Word STATE_VARIABLE_HLDS_8_96;
              MR_Word STATE_VARIABLE_DumpInfo_9_100;
              MR_Word STATE_VARIABLE_HLDS_9_102;
              MR_Word STATE_VARIABLE_Specs_7_103;
              MR_Word STATE_VARIABLE_DumpInfo_10_107;
              MR_Word STATE_VARIABLE_HLDS_10_109;
              MR_Word STATE_VARIABLE_Specs_8_110;
              MR_Word STATE_VARIABLE_DumpInfo_11_114;
              MR_Word STATE_VARIABLE_Specs_9_116;
              MR_Word STATE_VARIABLE_HLDS_11_118;
              MR_Word STATE_VARIABLE_Specs_10_119;
              MR_Word STATE_VARIABLE_DumpInfo_12_123;
              MR_Word STATE_VARIABLE_HLDS_12_125;
              MR_Word STATE_VARIABLE_Specs_11_126;
              MR_Word STATE_VARIABLE_DumpInfo_13_130;
              MR_Word STATE_VARIABLE_HLDS_13_132;
              MR_Word STATE_VARIABLE_Specs_12_133;
              MR_Word STATE_VARIABLE_DumpInfo_14_137;
              MR_Word STATE_VARIABLE_HLDS_14_139;
              MR_Word STATE_VARIABLE_Specs_13_140;
              MR_Word STATE_VARIABLE_DumpInfo_15_144;
              MR_Word Var_146;
              MR_Word STATE_VARIABLE_Specs_14_150;
              MR_Word STATE_VARIABLE_Specs_15_156;
              MR_Word STATE_VARIABLE_Specs_16_159;

              top_level__mercury_compile_front_end__detect_switches_7_p_0(ProgressStream_12, Verbose_20, Stats_21, STATE_VARIABLE_HLDS_6_83, &STATE_VARIABLE_HLDS_7_90);
              hlds__passes_aux__maybe_dump_hlds_8_p_0(ProgressStream_12, STATE_VARIABLE_HLDS_7_90, (MR_Integer) 40, (MR_String) "switch_detect", STATE_VARIABLE_DumpInfo_7_88, &STATE_VARIABLE_DumpInfo_8_94);
              top_level__mercury_compile_front_end__detect_cse_7_p_0(ProgressStream_12, Verbose_20, Stats_21, STATE_VARIABLE_HLDS_7_90, &STATE_VARIABLE_HLDS_8_96);
              hlds__passes_aux__maybe_dump_hlds_8_p_0(ProgressStream_12, STATE_VARIABLE_HLDS_8_96, (MR_Integer) 45, (MR_String) "cse", STATE_VARIABLE_DumpInfo_8_94, &STATE_VARIABLE_DumpInfo_9_100);
              top_level__mercury_compile_front_end__check_determinism_10_p_0(ProgressStream_12, ErrorStream_13, Verbose_20, Stats_21, STATE_VARIABLE_HLDS_8_96, &STATE_VARIABLE_HLDS_9_102, STATE_VARIABLE_Specs_6_84, &STATE_VARIABLE_Specs_7_103);
              hlds__passes_aux__maybe_dump_hlds_8_p_0(ProgressStream_12, STATE_VARIABLE_HLDS_9_102, (MR_Integer) 50, (MR_String) "determinism", STATE_VARIABLE_DumpInfo_9_100, &STATE_VARIABLE_DumpInfo_10_107);
              top_level__mercury_compile_front_end__check_unique_modes_11_p_0(ProgressStream_12, ErrorStream_13, Verbose_20, Stats_21, STATE_VARIABLE_HLDS_9_102, &STATE_VARIABLE_HLDS_10_109, &FoundUniqError_26, STATE_VARIABLE_Specs_7_103, &STATE_VARIABLE_Specs_8_110);
              hlds__passes_aux__maybe_dump_hlds_8_p_0(ProgressStream_12, STATE_VARIABLE_HLDS_10_109, (MR_Integer) 55, (MR_String) "unique_modes", STATE_VARIABLE_DumpInfo_10_107, &STATE_VARIABLE_DumpInfo_11_114);
              top_level__mercury_compile_front_end__maybe_write_call_tree_8_p_0(ProgressStream_12, Verbose_20, Stats_21, STATE_VARIABLE_HLDS_10_109, STATE_VARIABLE_Specs_8_110, &STATE_VARIABLE_Specs_9_116);
              top_level__mercury_compile_front_end__check_stratification_11_p_0(ProgressStream_12, ErrorStream_13, Verbose_20, Stats_21, STATE_VARIABLE_HLDS_10_109, &STATE_VARIABLE_HLDS_11_118, &FoundStratError_27, STATE_VARIABLE_Specs_9_116, &STATE_VARIABLE_Specs_10_119);
              hlds__passes_aux__maybe_dump_hlds_8_p_0(ProgressStream_12, STATE_VARIABLE_HLDS_11_118, (MR_Integer) 60, (MR_String) "stratification", STATE_VARIABLE_DumpInfo_11_114, &STATE_VARIABLE_DumpInfo_12_123);
              top_level__mercury_compile_front_end__check_oisu_pragmas_11_p_0(ProgressStream_12, ErrorStream_13, Verbose_20, Stats_21, STATE_VARIABLE_HLDS_11_118, &STATE_VARIABLE_HLDS_12_125, &FoundOISUError_28, STATE_VARIABLE_Specs_10_119, &STATE_VARIABLE_Specs_11_126);
              hlds__passes_aux__maybe_dump_hlds_8_p_0(ProgressStream_12, STATE_VARIABLE_HLDS_12_125, (MR_Integer) 61, (MR_String) "oisu", STATE_VARIABLE_DumpInfo_12_123, &STATE_VARIABLE_DumpInfo_13_130);
              top_level__mercury_compile_front_end__process_try_goals_11_p_0(ProgressStream_12, ErrorStream_13, Verbose_20, Stats_21, STATE_VARIABLE_HLDS_12_125, &STATE_VARIABLE_HLDS_13_132, &FoundTryError_29, STATE_VARIABLE_Specs_11_126, &STATE_VARIABLE_Specs_12_133);
              hlds__passes_aux__maybe_dump_hlds_8_p_0(ProgressStream_12, STATE_VARIABLE_HLDS_13_132, (MR_Integer) 62, (MR_String) "try", STATE_VARIABLE_DumpInfo_13_130, &STATE_VARIABLE_DumpInfo_14_137);
              top_level__mercury_compile_front_end__check_pragma_format_call_10_p_0(ProgressStream_12, ErrorStream_13, Verbose_20, Stats_21, STATE_VARIABLE_HLDS_13_132, &STATE_VARIABLE_HLDS_14_139, STATE_VARIABLE_Specs_12_133, &STATE_VARIABLE_Specs_13_140);
              hlds__passes_aux__maybe_dump_hlds_8_p_0(ProgressStream_12, STATE_VARIABLE_HLDS_14_139, (MR_Integer) 63, (MR_String) "format_call", STATE_VARIABLE_DumpInfo_14_137, &STATE_VARIABLE_DumpInfo_15_144);
              {
                Var_146 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_146, 0) = ((MR_Box) (ErrorStream_13));
              }
              top_level__mercury_compile_front_end__maybe_simplify_12_p_0(ProgressStream_12, Var_146, (MR_Integer) 1, (MR_Integer) 0, Verbose_20, Stats_21, STATE_VARIABLE_HLDS_14_139, STATE_VARIABLE_HLDS_34, STATE_VARIABLE_Specs_13_140, &STATE_VARIABLE_Specs_14_150);
              hlds__passes_aux__maybe_dump_hlds_8_p_0(ProgressStream_12, *STATE_VARIABLE_HLDS_34, (MR_Integer) 65, (MR_String) "frontend_simplify", STATE_VARIABLE_DumpInfo_15_144, &STATE_VARIABLE_DumpInfo_16_154);
              top_level__mercury_compile_front_end__maybe_generate_style_warnings_9_p_0(ProgressStream_12, ErrorStream_13, Verbose_20, Stats_21, *STATE_VARIABLE_HLDS_34, STATE_VARIABLE_Specs_14_150, &STATE_VARIABLE_Specs_15_156);
              top_level__mercury_compile_front_end__maybe_proc_statistics_10_p_0(ProgressStream_12, ErrorStream_13, Verbose_20, Stats_21, (MR_String) "AfterFrontEnd", *STATE_VARIABLE_HLDS_34, STATE_VARIABLE_Specs_15_156, &STATE_VARIABLE_Specs_16_159);
              top_level__mercury_compile_front_end__maybe_inst_statistics_9_p_0(ProgressStream_12, ErrorStream_13, Verbose_20, Stats_21, *STATE_VARIABLE_HLDS_34, STATE_VARIABLE_Specs_16_159, STATE_VARIABLE_Specs_38);
              MaybeWorstSpecsSeverity_30 = parse_tree__error_util__worst_severity_in_specs_2_f_0(Globals_19, *STATE_VARIABLE_Specs_38);
              mercury__io__get_exit_status_3_p_0(&ExitStatus_31);
              succeeded = (FoundModeError_24 == (MR_Integer) 0);
              if (succeeded)
              {
                succeeded = (FoundUniqError_26 == (MR_Integer) 0);
                if (succeeded)
                {
                  succeeded = (FoundStratError_27 == (MR_Integer) 0);
                  if (succeeded)
                  {
                    succeeded = (FoundOISUError_28 == (MR_Integer) 0);
                    if (succeeded)
                    {
                      succeeded = (FoundTryError_29 == (MR_Integer) 0);
                      if (succeeded)
                      {
                        if ((MaybeWorstSpecsSeverity_30 == (MR_Word) ((MR_Unsigned) 0U)))
                          succeeded = MR_TRUE;
                        else
                        {
                          MR_Word WorstSpecsSeverity_32 = ((MR_Word) ((MR_hl_field(1, MaybeWorstSpecsSeverity_30, 0))));
                          MR_Word Var_164;

                          Var_164 = parse_tree__error_util__worst_severity_2_f_0(WorstSpecsSeverity_32, (MR_Integer) 1);
                          succeeded = (Var_164 == (MR_Integer) 1);
                        }
                        if (succeeded)
                          succeeded = (ExitStatus_31 == (MR_Integer) 0);
                      }
                    }
                  }
                }
              }
              if (succeeded)
                *FoundError_15 = (MR_Integer) 0;
              else
                *FoundError_15 = (MR_Integer) 1;
            }
            break;
          case (MR_Integer) 1:
            {
              *FoundError_15 = (MR_Integer) 1;
              *STATE_VARIABLE_HLDS_34 = STATE_VARIABLE_HLDS_6_83;
              STATE_VARIABLE_DumpInfo_16_154 = STATE_VARIABLE_DumpInfo_7_88;
              *STATE_VARIABLE_Specs_38 = STATE_VARIABLE_Specs_6_84;
            }
            break;
        }
      }
      break;
    case (MR_Integer) 1:
      {
        *FoundError_15 = (MR_Integer) 1;
        *STATE_VARIABLE_HLDS_34 = STATE_VARIABLE_HLDS_1_43;
        STATE_VARIABLE_DumpInfo_16_154 = STATE_VARIABLE_DumpInfo_1_48;
        *STATE_VARIABLE_Specs_38 = STATE_VARIABLE_Specs_1_44;
      }
      break;
  }
  hlds__passes_aux__maybe_dump_hlds_8_p_0(ProgressStream_12, *STATE_VARIABLE_HLDS_34, (MR_Integer) 99, (MR_String) "front_end", STATE_VARIABLE_DumpInfo_16_154, STATE_VARIABLE_DumpInfo_36);
}

static void MR_CALL 
top_level__mercury_compile_front_end__maybe_inst_statistics_9_p_0(
  MR_Word ProgressStream_10,
  MR_Word ErrorStream_11,
  MR_Word Verbose_12,
  MR_Word Stats_13,
  MR_Word HLDS_14,
  MR_Word STATE_VARIABLE_Specs_0_24,
  MR_Word * STATE_VARIABLE_Specs_25)
{
  MR_bool succeeded;
  MR_Word Globals_17;
  MR_String StatsFileName_18;

  hlds__hlds_module__module_info_get_globals_2_p_0(HLDS_14, &Globals_17);
  parse_tree__write_error_spec__maybe_write_out_errors_7_p_0(ErrorStream_11, Verbose_12, Globals_17, STATE_VARIABLE_Specs_0_24, STATE_VARIABLE_Specs_25);
  libs__globals__lookup_string_option_3_p_0(Globals_17, (MR_Integer) 695, &StatsFileName_18);
  succeeded = (strcmp(StatsFileName_18, (MR_String) "") == 0);
  if (!(succeeded))
  {
    MR_Word StatsFileNameResult_19;

    mercury__io__open_append_4_p_0(StatsFileName_18, &StatsFileNameResult_19);
    if (((MR_tag((MR_Word) StatsFileNameResult_19)) == (MR_Integer) 1))
    {
      MR_Word StatsFileError_21 = ((MR_Word) ((MR_hl_field(1, StatsFileNameResult_19, 0))));
      MR_String StatsFileErrorStr_22;
      MR_String StatsFileErrorMsg_23;
      MR_String Var_44;

      mercury__io__error_message_2_p_0(StatsFileError_21, &StatsFileErrorStr_22);
      Var_44 = mercury__string__f_43_43_2_f_0(StatsFileErrorStr_22, (MR_String) "\n");
      StatsFileErrorMsg_23 = mercury__string__f_43_43_2_f_0((MR_String) "% Cannot write inst statistics: ", Var_44);
      libs__file_util__maybe_write_string_5_p_0(ProgressStream_10, Verbose_12, StatsFileErrorMsg_23);
    }
    else
    {
      MR_Word StatsFileStream_20 = ((MR_Word) ((MR_hl_field(0, StatsFileNameResult_19, 0))));

      libs__file_util__maybe_write_string_5_p_0(ProgressStream_10, Verbose_12, (MR_String) "% Generating inst statistics...\n");
      hlds__hlds_statistics__write_inst_stats_for_module_4_p_0(StatsFileStream_20, HLDS_14);
      mercury__io__close_output_3_p_0(StatsFileStream_20);
      libs__file_util__maybe_write_string_5_p_0(ProgressStream_10, Verbose_12, (MR_String) "% done.\n");
      libs__file_util__maybe_report_stats_4_p_0(ProgressStream_10, Stats_13);
    }
  }
}

static void MR_CALL 
top_level__mercury_compile_front_end__maybe_proc_statistics_10_p_0(
  MR_Word ProgressStream_11,
  MR_Word ErrorStream_12,
  MR_Word Verbose_13,
  MR_Word Stats_14,
  MR_String Msg_15,
  MR_Word HLDS_16,
  MR_Word STATE_VARIABLE_Specs_0_26,
  MR_Word * STATE_VARIABLE_Specs_27)
{
  MR_bool succeeded;
  MR_Word Globals_19;
  MR_String StatsFileName_20;

  hlds__hlds_module__module_info_get_globals_2_p_0(HLDS_16, &Globals_19);
  parse_tree__write_error_spec__maybe_write_out_errors_7_p_0(ErrorStream_12, Verbose_13, Globals_19, STATE_VARIABLE_Specs_0_26, STATE_VARIABLE_Specs_27);
  libs__globals__lookup_string_option_3_p_0(Globals_19, (MR_Integer) 694, &StatsFileName_20);
  succeeded = (strcmp(StatsFileName_20, (MR_String) "") == 0);
  if (!(succeeded))
  {
    MR_Word StatsFileNameResult_21;

    mercury__io__open_append_4_p_0(StatsFileName_20, &StatsFileNameResult_21);
    if (((MR_tag((MR_Word) StatsFileNameResult_21)) == (MR_Integer) 1))
    {
      MR_Word StatsFileError_23 = ((MR_Word) ((MR_hl_field(1, StatsFileNameResult_21, 0))));
      MR_String StatsFileErrorStr_24;
      MR_String StatsFileErrorMsg_25;
      MR_String Var_46;

      mercury__io__error_message_2_p_0(StatsFileError_23, &StatsFileErrorStr_24);
      Var_46 = mercury__string__f_43_43_2_f_0(StatsFileErrorStr_24, (MR_String) "\n");
      StatsFileErrorMsg_25 = mercury__string__f_43_43_2_f_0((MR_String) "% Cannot write proc statistics: ", Var_46);
      libs__file_util__maybe_write_string_5_p_0(ProgressStream_11, Verbose_13, StatsFileErrorMsg_25);
    }
    else
    {
      MR_Word StatsFileStream_22 = ((MR_Word) ((MR_hl_field(0, StatsFileNameResult_21, 0))));

      libs__file_util__maybe_write_string_5_p_0(ProgressStream_11, Verbose_13, (MR_String) "% Generating proc statistics...\n");
      hlds__hlds_statistics__write_proc_stats_for_module_5_p_0(StatsFileStream_22, Msg_15, HLDS_16);
      mercury__io__close_output_3_p_0(StatsFileStream_22);
      libs__file_util__maybe_write_string_5_p_0(ProgressStream_11, Verbose_13, (MR_String) "% done.\n");
      libs__file_util__maybe_report_stats_4_p_0(ProgressStream_11, Stats_14);
    }
  }
}

static void MR_CALL 
top_level__mercury_compile_front_end__maybe_generate_style_warnings_9_p_0(
  MR_Word ProgressStream_10,
  MR_Word ErrorStream_11,
  MR_Word Verbose_12,
  MR_Word Stats_13,
  MR_Word HLDS_14,
  MR_Word STATE_VARIABLE_Specs_0_22,
  MR_Word * STATE_VARIABLE_Specs_23)
{
  MR_Word Globals_17;
  MR_Word DoWeWantStyleWarnings_18;
  MR_Word OptSpecs_19;
  MR_Word STATE_VARIABLE_Specs_1_26;
  MR_Word STATE_VARIABLE_Specs_2_28;

  hlds__hlds_module__module_info_get_globals_2_p_0(HLDS_14, &Globals_17);
  parse_tree__write_error_spec__maybe_write_out_errors_7_p_0(ErrorStream_11, Verbose_12, Globals_17, STATE_VARIABLE_Specs_0_22, &STATE_VARIABLE_Specs_1_26);
  check_hlds__style_checks__do_we_want_style_warnings_3_p_0(HLDS_14, &DoWeWantStyleWarnings_18, &OptSpecs_19);
  STATE_VARIABLE_Specs_2_28 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), OptSpecs_19, STATE_VARIABLE_Specs_1_26);
  if ((DoWeWantStyleWarnings_18 == (MR_Word) ((MR_Unsigned) 0U)))
    *STATE_VARIABLE_Specs_23 = STATE_VARIABLE_Specs_2_28;
  else
  {
    MR_Word WarningsWeWant_20 = ((MR_Word) ((MR_hl_field(1, DoWeWantStyleWarnings_18, 0))));
    MR_Word StyleSpecs_21;

    libs__file_util__maybe_write_string_5_p_0(ProgressStream_10, Verbose_12, (MR_String) "% Generating style warnings...\n");
    check_hlds__style_checks__generate_any_style_warnings_3_p_0(HLDS_14, WarningsWeWant_20, &StyleSpecs_21);
    *STATE_VARIABLE_Specs_23 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), StyleSpecs_21, STATE_VARIABLE_Specs_2_28);
    libs__file_util__maybe_write_string_5_p_0(ProgressStream_10, Verbose_12, (MR_String) "% done.\n");
    libs__file_util__maybe_report_stats_4_p_0(ProgressStream_10, Stats_13);
  }
}

static void MR_CALL 
top_level__mercury_compile_front_end__check_pragma_format_call_10_p_0(
  MR_Word ProgressStream_11,
  MR_Word ErrorStream_12,
  MR_Word Verbose_13,
  MR_Word Stats_14,
  MR_Word STATE_VARIABLE_HLDS_0_21,
  MR_Word * STATE_VARIABLE_HLDS_22,
  MR_Word STATE_VARIABLE_Specs_0_23,
  MR_Word * STATE_VARIABLE_Specs_24)
{
  MR_bool succeeded;
  MR_Word FormatCallPredIds_18;

  hlds__hlds_module__module_info_get_format_call_pragma_preds_2_p_0(STATE_VARIABLE_HLDS_0_21, &FormatCallPredIds_18);
  succeeded = mercury__set__is_empty_1_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), FormatCallPredIds_18);
  if (succeeded)
  {
    *STATE_VARIABLE_Specs_24 = STATE_VARIABLE_Specs_0_23;
    *STATE_VARIABLE_HLDS_22 = STATE_VARIABLE_HLDS_0_21;
  }
  else
  {
    MR_Word Globals_19;
    MR_Word CheckSpecs_20;
    MR_Word STATE_VARIABLE_Specs_1_27;
    MR_Word STATE_VARIABLE_Specs_2_33;

    hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_HLDS_0_21, &Globals_19);
    parse_tree__write_error_spec__maybe_write_out_errors_7_p_0(ErrorStream_12, Verbose_13, Globals_19, STATE_VARIABLE_Specs_0_23, &STATE_VARIABLE_Specs_1_27);
    libs__file_util__maybe_write_string_5_p_0(ProgressStream_11, Verbose_13, (MR_String) "% Checking format_call pragmas...\n");
    check_hlds__check_pragma_format_call__check_pragma_format_call_preds_5_p_0(FormatCallPredIds_18, STATE_VARIABLE_HLDS_0_21, STATE_VARIABLE_HLDS_22, (MR_Word) ((MR_Unsigned) 0U), &CheckSpecs_20);
    STATE_VARIABLE_Specs_2_33 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), CheckSpecs_20, STATE_VARIABLE_Specs_1_27);
    parse_tree__write_error_spec__maybe_write_out_errors_7_p_0(ErrorStream_12, Verbose_13, Globals_19, STATE_VARIABLE_Specs_2_33, STATE_VARIABLE_Specs_24);
    libs__file_util__maybe_write_string_5_p_0(ProgressStream_11, Verbose_13, (MR_String) "% done.\n");
    libs__file_util__maybe_report_stats_4_p_0(ProgressStream_11, Stats_14);
  }
}

static void MR_CALL 
top_level__mercury_compile_front_end__process_try_goals_11_p_0(
  MR_Word ProgressStream_12,
  MR_Word ErrorStream_13,
  MR_Word Verbose_14,
  MR_Word Stats_15,
  MR_Word STATE_VARIABLE_HLDS_0_22,
  MR_Word * STATE_VARIABLE_HLDS_23,
  MR_Word * FoundError_17,
  MR_Word STATE_VARIABLE_Specs_0_24,
  MR_Word * STATE_VARIABLE_Specs_25)
{
  MR_Word Globals_20;
  MR_Word TryExpandSpecs_21;
  MR_Word STATE_VARIABLE_Specs_1_28;
  MR_Word STATE_VARIABLE_Specs_2_34;

  hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_HLDS_0_22, &Globals_20);
  parse_tree__write_error_spec__maybe_write_out_errors_7_p_0(ErrorStream_13, Verbose_14, Globals_20, STATE_VARIABLE_Specs_0_24, &STATE_VARIABLE_Specs_1_28);
  libs__file_util__maybe_write_string_5_p_0(ProgressStream_12, Verbose_14, (MR_String) "% Transforming try goals...\n");
  check_hlds__try_expand__expand_try_goals_in_module_5_p_0(ProgressStream_12, STATE_VARIABLE_HLDS_0_22, STATE_VARIABLE_HLDS_23, (MR_Word) ((MR_Unsigned) 0U), &TryExpandSpecs_21);
  STATE_VARIABLE_Specs_2_34 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), TryExpandSpecs_21, STATE_VARIABLE_Specs_1_28);
  *FoundError_17 = parse_tree__error_util__contains_errors_2_f_0(Globals_20, TryExpandSpecs_21);
  parse_tree__write_error_spec__maybe_write_out_errors_7_p_0(ErrorStream_13, Verbose_14, Globals_20, STATE_VARIABLE_Specs_2_34, STATE_VARIABLE_Specs_25);
  switch (*FoundError_17) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      libs__file_util__maybe_write_string_5_p_0(ProgressStream_12, Verbose_14, (MR_String) "% done.\n");
      break;
    case (MR_Integer) 1:
      libs__file_util__maybe_write_string_5_p_0(ProgressStream_12, Verbose_14, (MR_String) "% Program contains error(s).\n");
      break;
  }
  libs__file_util__maybe_report_stats_4_p_0(ProgressStream_12, Stats_15);
}

static MR_bool MR_CALL 
top_level__mercury_compile_front_end__check_oisu_pragmas_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = top_level__mercury_compile_front_end__type_ctor_is_defined_in_this_module_2_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static void MR_CALL 
top_level__mercury_compile_front_end__check_oisu_pragmas_11_p_0(
  MR_Word ProgressStream_12,
  MR_Word ErrorStream_13,
  MR_Word Verbose_14,
  MR_Word Stats_15,
  MR_Word STATE_VARIABLE_HLDS_0_28,
  MR_Word * STATE_VARIABLE_HLDS_29,
  MR_Word * FoundError_17,
  MR_Word STATE_VARIABLE_Specs_0_30,
  MR_Word * STATE_VARIABLE_Specs_31)
{
  MR_bool succeeded;
  MR_Word OISUMap_20;
  MR_Word OISUPairs_21;
  MR_Word ModuleName_22;
  MR_Word ModuleOISUPairs_23;
  MR_Word Var_34;

  hlds__hlds_module__module_info_get_oisu_map_2_p_0(STATE_VARIABLE_HLDS_0_28, &OISUMap_20);
  mercury__map__to_assoc_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_oisu_preds_0), OISUMap_20, &OISUPairs_21);
  hlds__hlds_module__module_info_get_name_2_p_0(STATE_VARIABLE_HLDS_0_28, &ModuleName_22);
  {
    Var_34 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_34, 0) = ((MR_Box) (&top_level__mercury_compile_front_end_scalar_common_4[3]));
    MR_hl_field(0, Var_34, 1) = ((MR_Box) (top_level__mercury_compile_front_end__check_oisu_pragmas_11_p_0_1));
    MR_hl_field(0, Var_34, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_34, 3) = ((MR_Box) (ModuleName_22));
  }
  mercury__list__filter_3_p_0((MR_Word) (&top_level__mercury_compile_front_end_scalar_common_2[1]), Var_34, OISUPairs_21, &ModuleOISUPairs_23);
  if ((ModuleOISUPairs_23 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *FoundError_17 = (MR_Integer) 0;
    *STATE_VARIABLE_HLDS_29 = STATE_VARIABLE_HLDS_0_28;
    *STATE_VARIABLE_Specs_31 = STATE_VARIABLE_Specs_0_30;
  }
  else
  {
    MR_Word Globals_26;
    MR_Word OISUSpecs_27;
    MR_Word STATE_VARIABLE_Specs_1_35;
    MR_Word STATE_VARIABLE_Specs_2_40;

    hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_HLDS_0_28, &Globals_26);
    parse_tree__write_error_spec__maybe_write_out_errors_7_p_0(ErrorStream_13, Verbose_14, Globals_26, STATE_VARIABLE_Specs_0_30, &STATE_VARIABLE_Specs_1_35);
    libs__file_util__maybe_write_string_5_p_0(ProgressStream_12, Verbose_14, (MR_String) "% Checking oisu pragmas...\n");
    check_hlds__oisu_check__check_oisu_pragmas_for_module_4_p_0(ModuleOISUPairs_23, STATE_VARIABLE_HLDS_0_28, STATE_VARIABLE_HLDS_29, &OISUSpecs_27);
    STATE_VARIABLE_Specs_2_40 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), OISUSpecs_27, STATE_VARIABLE_Specs_1_35);
    *FoundError_17 = parse_tree__error_util__contains_errors_2_f_0(Globals_26, OISUSpecs_27);
    parse_tree__write_error_spec__maybe_write_out_errors_7_p_0(ErrorStream_13, Verbose_14, Globals_26, STATE_VARIABLE_Specs_2_40, STATE_VARIABLE_Specs_31);
    switch (*FoundError_17) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        libs__file_util__maybe_write_string_5_p_0(ProgressStream_12, Verbose_14, (MR_String) "% done.\n");
        break;
      case (MR_Integer) 1:
        libs__file_util__maybe_write_string_5_p_0(ProgressStream_12, Verbose_14, (MR_String) "% Program contains oisu pragma error(s).\n");
        break;
    }
    libs__file_util__maybe_report_stats_4_p_0(ProgressStream_12, Stats_15);
  }
}

static void MR_CALL 
top_level__mercury_compile_front_end__check_stratification_11_p_0(
  MR_Word ProgressStream_12,
  MR_Word ErrorStream_13,
  MR_Word Verbose_14,
  MR_Word Stats_15,
  MR_Word STATE_VARIABLE_HLDS_0_24,
  MR_Word * STATE_VARIABLE_HLDS_25,
  MR_Word * FoundError_17,
  MR_Word STATE_VARIABLE_Specs_0_26,
  MR_Word * STATE_VARIABLE_Specs_27)
{
  MR_bool succeeded;
  MR_Word MustBeStratifiedPreds_20;
  MR_Word Globals_21;
  MR_Word Warn_22;

  hlds__hlds_module__module_info_get_must_be_stratified_preds_2_p_0(STATE_VARIABLE_HLDS_0_24, &MustBeStratifiedPreds_20);
  hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_HLDS_0_24, &Globals_21);
  libs__globals__lookup_bool_option_3_p_0(Globals_21, (MR_Integer) 178, &Warn_22);
  succeeded = mercury__set__is_non_empty_1_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), MustBeStratifiedPreds_20);
  if (!(succeeded))
    succeeded = (Warn_22 == (MR_Integer) 1);
  if (succeeded)
  {
    MR_Word StratifySpecs_23;
    MR_Word STATE_VARIABLE_Specs_1_31;
    MR_Word STATE_VARIABLE_Specs_2_36;

    parse_tree__write_error_spec__maybe_write_out_errors_7_p_0(ErrorStream_13, Verbose_14, Globals_21, STATE_VARIABLE_Specs_0_26, &STATE_VARIABLE_Specs_1_31);
    libs__file_util__maybe_write_string_5_p_0(ProgressStream_12, Verbose_14, (MR_String) "% Checking stratification...\n");
    check_hlds__stratify__check_module_for_stratification_3_p_0(STATE_VARIABLE_HLDS_0_24, STATE_VARIABLE_HLDS_25, &StratifySpecs_23);
    STATE_VARIABLE_Specs_2_36 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), StratifySpecs_23, STATE_VARIABLE_Specs_1_31);
    *FoundError_17 = parse_tree__error_util__contains_errors_2_f_0(Globals_21, StratifySpecs_23);
    parse_tree__write_error_spec__maybe_write_out_errors_7_p_0(ErrorStream_13, Verbose_14, Globals_21, STATE_VARIABLE_Specs_2_36, STATE_VARIABLE_Specs_27);
    switch (*FoundError_17) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        libs__file_util__maybe_write_string_5_p_0(ProgressStream_12, Verbose_14, (MR_String) "% done.\n");
        break;
      case (MR_Integer) 1:
        libs__file_util__maybe_write_string_5_p_0(ProgressStream_12, Verbose_14, (MR_String) "% Program contains stratification error(s).\n");
        break;
    }
    libs__file_util__maybe_report_stats_4_p_0(ProgressStream_12, Stats_15);
  }
  else
  {
    *FoundError_17 = (MR_Integer) 0;
    *STATE_VARIABLE_Specs_27 = STATE_VARIABLE_Specs_0_26;
    *STATE_VARIABLE_HLDS_25 = STATE_VARIABLE_HLDS_0_24;
  }
}

static void MR_CALL 
top_level__mercury_compile_front_end__maybe_write_call_tree_8_p_0(
  MR_Word ProgressStream_9,
  MR_Word Verbose_10,
  MR_Word Stats_11,
  MR_Word HLDS_12,
  MR_Word STATE_VARIABLE_Specs_0_43,
  MR_Word * STATE_VARIABLE_Specs_44)
{
  MR_bool succeeded;
  MR_Word Globals_15;
  MR_Word ShowCallTree_16;
  MR_Word ShowMovability_17;

  hlds__hlds_module__module_info_get_globals_2_p_0(HLDS_12, &Globals_15);
  libs__globals__lookup_bool_option_3_p_0(Globals_15, (MR_Integer) 265, &ShowCallTree_16);
  libs__globals__lookup_accumulating_option_3_p_0(Globals_15, (MR_Integer) 261, &ShowMovability_17);
  succeeded = (ShowCallTree_16 == (MR_Integer) 1);
  if (!(succeeded))
    succeeded = (ShowMovability_17 != (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    MR_Word CallTreeInfo_20;

    hlds__hlds_call_tree__compute_local_call_tree_2_p_0(HLDS_12, &CallTreeInfo_20);
    switch (ShowCallTree_16) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        {
          MR_String TreeFileStr_21;
          MR_String FullFileStr_22;
          MR_String OrderFileStr_23;
          MR_Word ModuleName_24;
          MR_String TreeFileName_25;
          MR_String FullFileName_26;
          MR_String OrderFileName_27;
          MR_Word TreeResult_28;
          MR_Word FullResult_31;
          MR_Word OrderResult_34;

          libs__file_util__maybe_write_string_5_p_0(ProgressStream_9, Verbose_10, (MR_String) "% Writing call_tree...");
          hlds__hlds_call_tree__construct_local_call_tree_file_contents_5_p_0(HLDS_12, CallTreeInfo_20, &TreeFileStr_21, &FullFileStr_22, &OrderFileStr_23);
          hlds__hlds_module__module_info_get_name_2_p_0(HLDS_12, &ModuleName_24);
          parse_tree__file_names__module_name_to_cur_dir_file_name_3_p_0((MR_Integer) 6, ModuleName_24, &TreeFileName_25);
          parse_tree__file_names__module_name_to_cur_dir_file_name_3_p_0((MR_Integer) 7, ModuleName_24, &FullFileName_26);
          parse_tree__file_names__module_name_to_cur_dir_file_name_3_p_0((MR_Integer) 8, ModuleName_24, &OrderFileName_27);
          mercury__io__open_output_4_p_0(TreeFileName_25, &TreeResult_28);
          if (((MR_tag((MR_Word) TreeResult_28)) == (MR_Integer) 1))
          {
            MR_Word TreeIOError_30 = ((MR_Word) ((MR_hl_field(1, TreeResult_28, 0))));

            libs__file_util__report_cannot_open_file_for_output_6_p_0(ProgressStream_9, Globals_15, TreeFileName_25, TreeIOError_30);
          }
          else
          {
            MR_Word TreeFileStream_29 = ((MR_Word) ((MR_hl_field(0, TreeResult_28, 0))));

            mercury__io__write_string_4_p_0(TreeFileStream_29, TreeFileStr_21);
            mercury__io__close_output_3_p_0(TreeFileStream_29);
          }
          mercury__io__open_output_4_p_0(FullFileName_26, &FullResult_31);
          if (((MR_tag((MR_Word) FullResult_31)) == (MR_Integer) 1))
          {
            MR_Word FullIOError_33 = ((MR_Word) ((MR_hl_field(1, FullResult_31, 0))));

            libs__file_util__report_cannot_open_file_for_output_6_p_0(ProgressStream_9, Globals_15, FullFileName_26, FullIOError_33);
          }
          else
          {
            MR_Word FullFileStream_32 = ((MR_Word) ((MR_hl_field(0, FullResult_31, 0))));

            mercury__io__write_string_4_p_0(FullFileStream_32, FullFileStr_22);
            mercury__io__close_output_3_p_0(FullFileStream_32);
          }
          mercury__io__open_output_4_p_0(OrderFileName_27, &OrderResult_34);
          if (((MR_tag((MR_Word) OrderResult_34)) == (MR_Integer) 1))
          {
            MR_Word OrderIOError_36 = ((MR_Word) ((MR_hl_field(1, OrderResult_34, 0))));

            libs__file_util__report_cannot_open_file_for_output_6_p_0(ProgressStream_9, Globals_15, OrderFileName_27, OrderIOError_36);
          }
          else
          {
            MR_Word OrderFileStream_35 = ((MR_Word) ((MR_hl_field(0, OrderResult_34, 0))));

            mercury__io__write_string_4_p_0(OrderFileStream_35, OrderFileStr_23);
            mercury__io__close_output_3_p_0(OrderFileStream_35);
          }
          succeeded = ((MR_tag((MR_Word) TreeResult_28)) == (MR_Integer) 0);
          if (succeeded)
          {
            succeeded = ((MR_tag((MR_Word) FullResult_31)) == (MR_Integer) 0);
            if (succeeded)
              succeeded = ((MR_tag((MR_Word) OrderResult_34)) == (MR_Integer) 0);
          }
          if (succeeded)
            libs__file_util__maybe_write_string_5_p_0(ProgressStream_9, Verbose_10, (MR_String) " done.\n");
        }
        break;
    }
    if ((ShowMovability_17 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Specs_44 = STATE_VARIABLE_Specs_0_43;
    else
    {
      MR_Word MovabilitySpecs_42;

      hlds__hlds_call_tree__generate_movability_report_4_p_0(HLDS_12, CallTreeInfo_20, ShowMovability_17, &MovabilitySpecs_42);
      *STATE_VARIABLE_Specs_44 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), MovabilitySpecs_42, STATE_VARIABLE_Specs_0_43);
    }
    libs__file_util__maybe_report_stats_4_p_0(ProgressStream_9, Stats_11);
  }
  else
    *STATE_VARIABLE_Specs_44 = STATE_VARIABLE_Specs_0_43;
}

static void MR_CALL 
top_level__mercury_compile_front_end__check_unique_modes_11_p_0(
  MR_Word ProgressStream_12,
  MR_Word ErrorStream_13,
  MR_Word Verbose_14,
  MR_Word Stats_15,
  MR_Word STATE_VARIABLE_HLDS_0_22,
  MR_Word * STATE_VARIABLE_HLDS_23,
  MR_Word * FoundError_17,
  MR_Word STATE_VARIABLE_Specs_0_24,
  MR_Word * STATE_VARIABLE_Specs_25)
{
  MR_Word Globals_20;
  MR_Word UniqueSpecs_21;
  MR_Word STATE_VARIABLE_Specs_1_28;
  MR_Word STATE_VARIABLE_Specs_2_33;

  hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_HLDS_0_22, &Globals_20);
  parse_tree__write_error_spec__maybe_write_out_errors_7_p_0(ErrorStream_13, Verbose_14, Globals_20, STATE_VARIABLE_Specs_0_24, &STATE_VARIABLE_Specs_1_28);
  libs__file_util__maybe_write_string_5_p_0(ProgressStream_12, Verbose_14, (MR_String) "% Checking for backtracking over unique modes...\n");
  check_hlds__unique_modes__unique_modes_check_module_4_p_0(ProgressStream_12, STATE_VARIABLE_HLDS_0_22, STATE_VARIABLE_HLDS_23, &UniqueSpecs_21);
  STATE_VARIABLE_Specs_2_33 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), UniqueSpecs_21, STATE_VARIABLE_Specs_1_28);
  *FoundError_17 = parse_tree__error_util__contains_errors_2_f_0(Globals_20, UniqueSpecs_21);
  parse_tree__write_error_spec__maybe_write_out_errors_7_p_0(ErrorStream_13, Verbose_14, Globals_20, STATE_VARIABLE_Specs_2_33, STATE_VARIABLE_Specs_25);
  switch (*FoundError_17) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      libs__file_util__maybe_write_string_5_p_0(ProgressStream_12, Verbose_14, (MR_String) "% Program is unique-mode-correct.\n");
      break;
    case (MR_Integer) 1:
      libs__file_util__maybe_write_string_5_p_0(ProgressStream_12, Verbose_14, (MR_String) "% Program contains unique mode error(s).\n");
      break;
  }
  libs__file_util__maybe_report_stats_4_p_0(ProgressStream_12, Stats_15);
}

static void MR_CALL 
top_level__mercury_compile_front_end__check_determinism_10_p_0(
  MR_Word ProgressStream_11,
  MR_Word ErrorStream_12,
  MR_Word Verbose_13,
  MR_Word Stats_14,
  MR_Word STATE_VARIABLE_HLDS_0_21,
  MR_Word * STATE_VARIABLE_HLDS_22,
  MR_Word STATE_VARIABLE_Specs_0_23,
  MR_Word * STATE_VARIABLE_Specs_24)
{
  MR_Word DetismSpecs_18;
  MR_Word Globals_19;
  MR_Word FoundError_20;
  MR_Word STATE_VARIABLE_Specs_1_28;

  check_hlds__det_analysis__determinism_pass_4_p_0(ProgressStream_11, &DetismSpecs_18, STATE_VARIABLE_HLDS_0_21, STATE_VARIABLE_HLDS_22);
  STATE_VARIABLE_Specs_1_28 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), DetismSpecs_18, STATE_VARIABLE_Specs_0_23);
  hlds__hlds_module__module_info_get_globals_2_p_0(*STATE_VARIABLE_HLDS_22, &Globals_19);
  FoundError_20 = parse_tree__error_util__contains_errors_2_f_0(Globals_19, DetismSpecs_18);
  parse_tree__write_error_spec__maybe_write_out_errors_7_p_0(ErrorStream_12, Verbose_13, Globals_19, STATE_VARIABLE_Specs_1_28, STATE_VARIABLE_Specs_24);
  switch (FoundError_20) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      libs__file_util__maybe_write_string_5_p_0(ProgressStream_11, Verbose_13, (MR_String) "% Program is determinism-correct.\n");
      break;
    case (MR_Integer) 1:
      libs__file_util__maybe_write_string_5_p_0(ProgressStream_11, Verbose_13, (MR_String) "% Program contains determinism error(s).\n");
      break;
  }
  libs__file_util__maybe_report_stats_4_p_0(ProgressStream_11, Stats_14);
}

static void MR_CALL 
top_level__mercury_compile_front_end__detect_cse_7_p_0(
  MR_Word ProgressStream_8,
  MR_Word Verbose_9,
  MR_Word Stats_10,
  MR_Word STATE_VARIABLE_HLDS_0_13,
  MR_Word * STATE_VARIABLE_HLDS_14)
{
  libs__file_util__maybe_write_string_5_p_0(ProgressStream_8, Verbose_9, (MR_String) "% Detecting common deconstructions...\n");
  check_hlds__cse_detection__detect_cse_in_module_3_p_0(ProgressStream_8, STATE_VARIABLE_HLDS_0_13, STATE_VARIABLE_HLDS_14);
  libs__file_util__maybe_write_string_5_p_0(ProgressStream_8, Verbose_9, (MR_String) "% done.\n");
  libs__file_util__maybe_report_stats_4_p_0(ProgressStream_8, Stats_10);
}

static void MR_CALL 
top_level__mercury_compile_front_end__detect_switches_7_p_0(
  MR_Word ProgressStream_8,
  MR_Word Verbose_9,
  MR_Word Stats_10,
  MR_Word STATE_VARIABLE_HLDS_0_13,
  MR_Word * STATE_VARIABLE_HLDS_14)
{
  libs__file_util__maybe_write_string_5_p_0(ProgressStream_8, Verbose_9, (MR_String) "% Detecting switches...\n");
  libs__file_util__maybe_flush_output_4_p_0(ProgressStream_8, Verbose_9);
  check_hlds__switch_detection__detect_switches_in_module_3_p_0(ProgressStream_8, STATE_VARIABLE_HLDS_0_13, STATE_VARIABLE_HLDS_14);
  libs__file_util__maybe_write_string_5_p_0(ProgressStream_8, Verbose_9, (MR_String) "% done.\n");
  libs__file_util__maybe_report_stats_4_p_0(ProgressStream_8, Stats_10);
}

static void MR_CALL 
top_level__mercury_compile_front_end__maybe_compute_goal_modes_10_p_0(
  MR_Word ProgressStream_11,
  MR_Word ErrorStream_12,
  MR_Word Verbose_13,
  MR_Word Stats_14,
  MR_Word STATE_VARIABLE_HLDS_0_20,
  MR_Word * STATE_VARIABLE_HLDS_21,
  MR_Word STATE_VARIABLE_Specs_0_22,
  MR_Word * STATE_VARIABLE_Specs_23)
{
  MR_Word Globals_18;
  MR_Word ComputeGoalModes_19;

  hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_HLDS_0_20, &Globals_18);
  libs__globals__lookup_bool_option_3_p_0(Globals_18, (MR_Integer) 653, &ComputeGoalModes_19);
  switch (ComputeGoalModes_19) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        *STATE_VARIABLE_HLDS_21 = STATE_VARIABLE_HLDS_0_20;
        *STATE_VARIABLE_Specs_23 = STATE_VARIABLE_Specs_0_22;
      }
      break;
    case (MR_Integer) 1:
      {
        parse_tree__write_error_spec__maybe_write_out_errors_7_p_0(ErrorStream_12, Verbose_13, Globals_18, STATE_VARIABLE_Specs_0_22, STATE_VARIABLE_Specs_23);
        libs__file_util__maybe_write_string_5_p_0(ProgressStream_11, Verbose_13, (MR_String) "% Computing goal modes... ");
        hlds__goal_mode__compute_goal_modes_in_module_2_p_0(STATE_VARIABLE_HLDS_0_20, STATE_VARIABLE_HLDS_21);
        libs__file_util__maybe_write_string_5_p_0(ProgressStream_11, Verbose_13, (MR_String) "% done.\n");
        libs__file_util__maybe_report_stats_4_p_0(ProgressStream_11, Stats_14);
      }
      break;
  }
}

static void MR_CALL 
top_level__mercury_compile_front_end__modecheck_12_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Tuple conv0_LambdaHeadVar__2_44;

  top_level__mercury_compile_front_end__IntroducedFrom__pred__modecheck__1142__1_3_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_LambdaHeadVar__2_44);
  *wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_44));
}

static void MR_CALL 
top_level__mercury_compile_front_end__modecheck_12_p_0(
  MR_Word ProgressStream_13,
  MR_Word ErrorStream_14,
  MR_Word Verbose_15,
  MR_Word Stats_16,
  MR_Word STATE_VARIABLE_HLDS_0_31,
  MR_Word * STATE_VARIABLE_HLDS_32,
  MR_Word * FoundModeError_18,
  MR_Word * SafeToContinue_19,
  MR_Word STATE_VARIABLE_Specs_0_33,
  MR_Word * STATE_VARIABLE_Specs_34)
{
  MR_Word Globals_22;
  MR_Word BenchmarkModes_23;
  MR_Word ModeSpecs_25;
  MR_Word STATE_VARIABLE_Specs_1_37;
  MR_Word STATE_VARIABLE_Specs_2_55;

  hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_HLDS_0_31, &Globals_22);
  parse_tree__write_error_spec__maybe_write_out_errors_7_p_0(ErrorStream_14, Verbose_15, Globals_22, STATE_VARIABLE_Specs_0_33, &STATE_VARIABLE_Specs_1_37);
  libs__file_util__maybe_write_string_5_p_0(ProgressStream_13, Verbose_15, (MR_String) "% Mode-checking clauses...\n");
  libs__globals__lookup_bool_option_3_p_0(Globals_22, (MR_Integer) 688, &BenchmarkModes_23);
  switch (BenchmarkModes_23) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      check_hlds__modes__modecheck_module_5_p_0(ProgressStream_13, STATE_VARIABLE_HLDS_0_31, STATE_VARIABLE_HLDS_32, SafeToContinue_19, &ModeSpecs_25);
      break;
    case (MR_Integer) 1:
      {
        MR_Integer Repeats_24;
        MR_Integer Time_26;
        MR_String Var_75;
        MR_String Var_85;
        MR_Word ModecheckModuleBench_27;
        MR_Tuple Var_45;
        MR_Box conv1_Var_45;

        libs__globals__lookup_int_option_3_p_0(Globals_22, (MR_Integer) 689, &Repeats_24);
        {
          ModecheckModuleBench_27 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, ModecheckModuleBench_27, 0) = ((MR_Box) (&top_level__mercury_compile_front_end_scalar_common_8[0]));
          MR_hl_field(0, ModecheckModuleBench_27, 1) = ((MR_Box) (top_level__mercury_compile_front_end__modecheck_12_p_0_1));
          MR_hl_field(0, ModecheckModuleBench_27, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(0, ModecheckModuleBench_27, 3) = ((MR_Box) (ProgressStream_13));
        }
        mercury__benchmarking__benchmark_det_5_p_0((MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&top_level__mercury_compile_front_end_scalar_common_4[1]), ModecheckModuleBench_27, ((MR_Box) (STATE_VARIABLE_HLDS_0_31)), &conv1_Var_45, Repeats_24, &Time_26);
        Var_45 = ((MR_Tuple) (conv1_Var_45));
        *STATE_VARIABLE_HLDS_32 = ((MR_Word) ((MR_hl_field(0, Var_45, 0))));
        *SafeToContinue_19 = ((MR_Word) ((MR_hl_field(0, Var_45, 1))));
        ModeSpecs_25 = ((MR_Word) ((MR_hl_field(0, Var_45, 2))));
        mercury__io__write_string_4_p_0(ProgressStream_13, (MR_String) "BENCHMARK modecheck, ");
        mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&top_level__mercury_compile_front_end_scalar_common_5[0]), Repeats_24, &Var_75);
        mercury__io__write_string_4_p_0(ProgressStream_13, Var_75);
        mercury__io__write_string_4_p_0(ProgressStream_13, (MR_String) " repeats: ");
        mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&top_level__mercury_compile_front_end_scalar_common_5[0]), Time_26, &Var_85);
        mercury__io__write_string_4_p_0(ProgressStream_13, Var_85);
        mercury__io__write_string_4_p_0(ProgressStream_13, (MR_String) " ms\n");
      }
      break;
  }
  STATE_VARIABLE_Specs_2_55 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), ModeSpecs_25, STATE_VARIABLE_Specs_1_37);
  *FoundModeError_18 = parse_tree__error_util__contains_errors_2_f_0(Globals_22, ModeSpecs_25);
  switch (*FoundModeError_18) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        parse_tree__write_error_spec__maybe_write_out_errors_7_p_0(ErrorStream_14, Verbose_15, Globals_22, STATE_VARIABLE_Specs_2_55, STATE_VARIABLE_Specs_34);
        libs__file_util__maybe_write_string_5_p_0(ProgressStream_13, Verbose_15, (MR_String) "% Program is mode-correct.\n");
      }
      break;
    case (MR_Integer) 1:
      {
        parse_tree__write_error_spec__maybe_write_out_errors_7_p_0(ErrorStream_14, Verbose_15, Globals_22, STATE_VARIABLE_Specs_2_55, STATE_VARIABLE_Specs_34);
        libs__file_util__maybe_write_string_5_p_0(ProgressStream_13, Verbose_15, (MR_String) "% Program contains mode error(s).\n");
      }
      break;
  }
  libs__file_util__maybe_report_stats_4_p_0(ProgressStream_13, Stats_16);
}

static void MR_CALL 
top_level__mercury_compile_front_end__maybe_mode_constraints_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__3_3;

  check_hlds__mode_constraints__mc_process_module_5_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__3_3);
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__3_3));
}

static void MR_CALL 
top_level__mercury_compile_front_end__maybe_mode_constraints_7_p_0(
  MR_Word ProgressStream_8,
  MR_Word Verbose_9,
  MR_Word Stats_10,
  MR_Word STATE_VARIABLE_HLDS_0_15,
  MR_Word * STATE_VARIABLE_HLDS_16)
{
  MR_Word Globals_13;
  MR_Word ModeConstraints_14;

  hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_HLDS_0_15, &Globals_13);
  libs__globals__lookup_bool_option_3_p_0(Globals_13, (MR_Integer) 650, &ModeConstraints_14);
  switch (ModeConstraints_14) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *STATE_VARIABLE_HLDS_16 = STATE_VARIABLE_HLDS_0_15;
      break;
    case (MR_Integer) 1:
      {
        MR_Word Var_23;
        MR_Word Globals_29;
        MR_Word BenchmarkModes_30;

        libs__file_util__maybe_write_string_5_p_0(ProgressStream_8, Verbose_9, (MR_String) "% Dumping mode constraints...\n");
        libs__file_util__maybe_flush_output_4_p_0(ProgressStream_8, Verbose_9);
        {
          Var_23 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_23, 0) = ((MR_Box) (&top_level__mercury_compile_front_end_scalar_common_7[0]));
          MR_hl_field(0, Var_23, 1) = ((MR_Box) (top_level__mercury_compile_front_end__maybe_mode_constraints_7_p_0_1));
          MR_hl_field(0, Var_23, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(0, Var_23, 3) = ((MR_Box) (ProgressStream_8));
        }
        hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_HLDS_0_15, &Globals_29);
        libs__globals__lookup_bool_option_3_p_0(Globals_29, (MR_Integer) 688, &BenchmarkModes_30);
        switch (BenchmarkModes_30) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            check_hlds__mode_constraints__mc_process_module_5_p_0(ProgressStream_8, STATE_VARIABLE_HLDS_0_15, STATE_VARIABLE_HLDS_16);
            break;
          case (MR_Integer) 1:
            {
              MR_Integer Repeats_31;
              MR_Integer Time_32;
              MR_String Var_53;
              MR_String Var_62;
              MR_Box conv2_STATE_VARIABLE_HLDS_16;
              MR_Box conv1_STATE_VARIABLE_IO_2_43;

              libs__globals__lookup_int_option_3_p_0(Globals_29, (MR_Integer) 689, &Repeats_31);
              mercury__io__write_string_4_p_0(ProgressStream_8, (MR_String) "mode-constraints");
              mercury__io__write_string_4_p_0(ProgressStream_8, (MR_String) " ");
              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&top_level__mercury_compile_front_end_scalar_common_5[0]), Repeats_31, &Var_53);
              mercury__io__write_string_4_p_0(ProgressStream_8, Var_53);
              mercury__io__write_string_4_p_0(ProgressStream_8, (MR_String) " ");
              mercury__benchmarking__benchmark_det_io_7_p_0((MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_23, ((MR_Box) (STATE_VARIABLE_HLDS_0_15)), &conv2_STATE_VARIABLE_HLDS_16, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_2_43, Repeats_31, &Time_32);
              *STATE_VARIABLE_HLDS_16 = ((MR_Word) (conv2_STATE_VARIABLE_HLDS_16));
              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&top_level__mercury_compile_front_end_scalar_common_5[0]), Time_32, &Var_62);
              mercury__io__write_string_4_p_0(ProgressStream_8, Var_62);
              mercury__io__write_string_4_p_0(ProgressStream_8, (MR_String) " ms\n");
            }
            break;
        }
        libs__file_util__maybe_write_string_5_p_0(ProgressStream_8, Verbose_9, (MR_String) "% done.\n");
        libs__file_util__maybe_report_stats_4_p_0(ProgressStream_8, Stats_10);
      }
      break;
  }
}

static void MR_CALL 
top_level__mercury_compile_front_end__maybe_warn_about_unused_imports_9_p_0(
  MR_Word ProgressStream_10,
  MR_Word ErrorStream_11,
  MR_Word Verbose_12,
  MR_Word Stats_13,
  MR_Word HLDS_14,
  MR_Word STATE_VARIABLE_Specs_0_20,
  MR_Word * STATE_VARIABLE_Specs_21)
{
  MR_Word Globals_17;
  MR_Word WarnUnusedImports_18;

  hlds__hlds_module__module_info_get_globals_2_p_0(HLDS_14, &Globals_17);
  libs__globals__lookup_bool_option_3_p_0(Globals_17, (MR_Integer) 163, &WarnUnusedImports_18);
  switch (WarnUnusedImports_18) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *STATE_VARIABLE_Specs_21 = STATE_VARIABLE_Specs_0_20;
      break;
    case (MR_Integer) 1:
      {
        MR_Word UnusedImportSpecs_19;
        MR_Word STATE_VARIABLE_Specs_1_25;
        MR_Word STATE_VARIABLE_Specs_2_29;

        parse_tree__write_error_spec__maybe_write_out_errors_7_p_0(ErrorStream_11, Verbose_12, Globals_17, STATE_VARIABLE_Specs_0_20, &STATE_VARIABLE_Specs_1_25);
        libs__file_util__maybe_write_string_5_p_0(ProgressStream_10, Verbose_12, (MR_String) "% Checking for unused imports...");
        check_hlds__unused_imports__warn_about_unused_imports_3_p_0(ProgressStream_10, HLDS_14, &UnusedImportSpecs_19);
        STATE_VARIABLE_Specs_2_29 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), UnusedImportSpecs_19, STATE_VARIABLE_Specs_1_25);
        parse_tree__write_error_spec__maybe_write_out_errors_7_p_0(ErrorStream_11, Verbose_12, Globals_17, STATE_VARIABLE_Specs_2_29, STATE_VARIABLE_Specs_21);
        libs__file_util__maybe_write_string_5_p_0(ProgressStream_10, Verbose_12, (MR_String) " done.\n");
        libs__file_util__maybe_report_stats_4_p_0(ProgressStream_10, Stats_13);
      }
      break;
  }
}

static void MR_CALL 
top_level__mercury_compile_front_end__post_copy_polymorphism_pass_11_p_0(
  MR_Word ProgressStream_12,
  MR_Word ErrorStream_13,
  MR_Word Verbose_14,
  MR_Word Stats_15,
  MR_Word ExistsCastPredIds_16,
  MR_Word STATE_VARIABLE_HLDS_0_21,
  MR_Word * STATE_VARIABLE_HLDS_22,
  MR_Word STATE_VARIABLE_Specs_0_23,
  MR_Word * STATE_VARIABLE_Specs_24)
{
  MR_Word Globals_20;

  hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_HLDS_0_21, &Globals_20);
  parse_tree__write_error_spec__maybe_write_out_errors_7_p_0(ErrorStream_13, Verbose_14, Globals_20, STATE_VARIABLE_Specs_0_23, STATE_VARIABLE_Specs_24);
  libs__file_util__maybe_write_string_5_p_0(ProgressStream_12, Verbose_14, (MR_String) "% Post copy polymorphism...");
  check_hlds__polymorphism_post_copy__post_copy_polymorphism_3_p_0(ExistsCastPredIds_16, STATE_VARIABLE_HLDS_0_21, STATE_VARIABLE_HLDS_22);
  libs__file_util__maybe_write_string_5_p_0(ProgressStream_12, Verbose_14, (MR_String) " done.\n");
  libs__file_util__maybe_report_stats_4_p_0(ProgressStream_12, Stats_15);
}

static void MR_CALL 
top_level__mercury_compile_front_end__clause_to_proc_10_p_0(
  MR_Word ProgressStream_11,
  MR_Word ErrorStream_12,
  MR_Word Verbose_13,
  MR_Word Stats_14,
  MR_Word STATE_VARIABLE_HLDS_0_19,
  MR_Word * STATE_VARIABLE_HLDS_20,
  MR_Word STATE_VARIABLE_Specs_0_21,
  MR_Word * STATE_VARIABLE_Specs_22)
{
  MR_Word Globals_18;

  hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_HLDS_0_19, &Globals_18);
  parse_tree__write_error_spec__maybe_write_out_errors_7_p_0(ErrorStream_12, Verbose_13, Globals_18, STATE_VARIABLE_Specs_0_21, STATE_VARIABLE_Specs_22);
  libs__file_util__maybe_write_string_5_p_0(ProgressStream_11, Verbose_13, (MR_String) "% Copying clauses to procedures...");
  check_hlds__clause_to_proc__copy_clauses_to_proc_for_all_valid_procs_2_p_0(STATE_VARIABLE_HLDS_0_19, STATE_VARIABLE_HLDS_20);
  libs__file_util__maybe_write_string_5_p_0(ProgressStream_11, Verbose_13, (MR_String) " done.\n");
  libs__file_util__maybe_report_stats_4_p_0(ProgressStream_11, Stats_14);
}

static void MR_CALL 
top_level__mercury_compile_front_end__main_polymorphism_pass_12_p_0(
  MR_Word ProgressStream_13,
  MR_Word ErrorStream_14,
  MR_Word Verbose_15,
  MR_Word Stats_16,
  MR_Word * ExistsCastPredIds_17,
  MR_Word * SafeToContinue_18,
  MR_Word STATE_VARIABLE_HLDS_0_25,
  MR_Word * STATE_VARIABLE_HLDS_26,
  MR_Word STATE_VARIABLE_Specs_0_27,
  MR_Word * STATE_VARIABLE_Specs_28)
{
  MR_Word Globals_22;
  MR_Word VeryVerbose_23;
  MR_Word PolySpecs_24;
  MR_Word STATE_VARIABLE_Specs_1_31;
  MR_Word STATE_VARIABLE_Specs_2_40;

  hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_HLDS_0_25, &Globals_22);
  parse_tree__write_error_spec__maybe_write_out_errors_7_p_0(ErrorStream_14, Verbose_15, Globals_22, STATE_VARIABLE_Specs_0_27, &STATE_VARIABLE_Specs_1_31);
  libs__globals__lookup_bool_option_3_p_0(Globals_22, (MR_Integer) 132, &VeryVerbose_23);
  check_hlds__polymorphism__polymorphism_process_module_6_p_0(ProgressStream_13, STATE_VARIABLE_HLDS_0_25, STATE_VARIABLE_HLDS_26, ExistsCastPredIds_17, SafeToContinue_18, &PolySpecs_24);
  STATE_VARIABLE_Specs_2_40 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), PolySpecs_24, STATE_VARIABLE_Specs_1_31);
  switch (VeryVerbose_23) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        libs__file_util__maybe_write_string_5_p_0(ProgressStream_13, Verbose_15, (MR_String) "% Transforming polymorphic unifications...");
        libs__file_util__maybe_flush_output_4_p_0(ProgressStream_13, Verbose_15);
        libs__file_util__maybe_write_string_5_p_0(ProgressStream_13, Verbose_15, (MR_String) " done.\n");
      }
      break;
    case (MR_Integer) 1:
      {
        libs__file_util__maybe_write_string_5_p_0(ProgressStream_13, Verbose_15, (MR_String) "% Transforming polymorphic unifications...\n");
        libs__file_util__maybe_flush_output_4_p_0(ProgressStream_13, Verbose_15);
        libs__file_util__maybe_write_string_5_p_0(ProgressStream_13, Verbose_15, (MR_String) "% done.\n");
      }
      break;
  }
  parse_tree__write_error_spec__maybe_write_out_errors_7_p_0(ErrorStream_14, Verbose_15, Globals_22, STATE_VARIABLE_Specs_2_40, STATE_VARIABLE_Specs_28);
  libs__file_util__maybe_report_stats_4_p_0(ProgressStream_13, Stats_16);
}

static MR_bool MR_CALL 
top_level__mercury_compile_front_end__maybe_simplify_12_p_0_2(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = top_level__mercury_compile_front_end__IntroducedFrom__pred__maybe_simplify__1621__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))));
  return succeeded;
}

static void MR_CALL 
top_level__mercury_compile_front_end__maybe_simplify_12_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_STATE_VARIABLE_ModuleInfo_25;
  MR_Word conv1_STATE_VARIABLE_PredInfo_27;
  MR_Word conv0_STATE_VARIABLE_Specs_29;

  top_level__mercury_compile_front_end__simplify_pred_9_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_ModuleInfo_25, ((MR_Word) (wrapper_arg_4)), &conv1_STATE_VARIABLE_PredInfo_27, ((MR_Word) (wrapper_arg_6)), &conv0_STATE_VARIABLE_Specs_29);
  *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_ModuleInfo_25));
  *wrapper_arg_5 = ((MR_Box) (conv1_STATE_VARIABLE_PredInfo_27));
  *wrapper_arg_7 = ((MR_Box) (conv0_STATE_VARIABLE_Specs_29));
}

void MR_CALL 
top_level__mercury_compile_front_end__maybe_simplify_12_p_0(
  MR_Word ProgressStream_13,
  MR_Word MaybeErrorStream_14,
  MR_Word Warn_15,
  MR_Word SimplifyPass_16,
  MR_Word Verbose_17,
  MR_Word Stats_18,
  MR_Word STATE_VARIABLE_HLDS_0_39,
  MR_Word * STATE_VARIABLE_HLDS_40,
  MR_Word STATE_VARIABLE_Specs_0_41,
  MR_Word * STATE_VARIABLE_Specs_42)
{
  MR_bool succeeded;
  MR_Word Globals_22;
  MR_Word SimpList_23;
  MR_Word WarnGen_24;
  MR_Word SimplifyTasks0_25;
  MR_Word STATE_VARIABLE_SimpList_1_45;

  hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_HLDS_0_39, &Globals_22);
  switch (Warn_15) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      WarnGen_24 = (MR_Integer) 0;
      break;
    case (MR_Integer) 1:
      WarnGen_24 = (MR_Integer) 1;
      break;
  }
  check_hlds__simplify__simplify_tasks__find_simplify_tasks_3_p_0(Globals_22, WarnGen_24, &SimplifyTasks0_25);
  STATE_VARIABLE_SimpList_1_45 = check_hlds__simplify__simplify_tasks__simplify_tasks_to_list_1_f_0(SimplifyTasks0_25);
  switch (SimplifyPass_16) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word STATE_VARIABLE_SimpList_2_47;

        mercury__list__cons_3_p_0((MR_Word) (&check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__type_ctor_info_simplify_task_0), ((MR_Box) ((MR_Integer) 6)), STATE_VARIABLE_SimpList_1_45, &STATE_VARIABLE_SimpList_2_47);
        mercury__list__cons_3_p_0((MR_Word) (&check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__type_ctor_info_simplify_task_0), ((MR_Box) ((MR_Integer) 14)), STATE_VARIABLE_SimpList_2_47, &SimpList_23);
      }
      break;
    case (MR_Integer) 4:
      {
        MR_Word OptTuple_28;
        MR_Word ConstProp_29;
        MR_Word DeepProf_30;
        MR_Word TSWProf_31;
        MR_Word TSCProf_32;
        MR_Word STATE_VARIABLE_SimpList_10_66;
        MR_Word STATE_VARIABLE_SimpList_12_70;

        libs__globals__get_opt_tuple_2_p_0(Globals_22, &OptTuple_28);
        ConstProp_29 = ((((MR_Unsigned) ((MR_hl_field(0, OptTuple_28, 0))) >> 21)) & (MR_Integer) 1);
        libs__globals__lookup_bool_option_3_p_0(Globals_22, (MR_Integer) 67, &DeepProf_30);
        libs__globals__lookup_bool_option_3_p_0(Globals_22, (MR_Integer) 83, &TSWProf_31);
        libs__globals__lookup_bool_option_3_p_0(Globals_22, (MR_Integer) 84, &TSCProf_32);
        succeeded = (ConstProp_29 == (MR_Integer) 0);
        if (succeeded)
        {
          succeeded = (DeepProf_30 == (MR_Integer) 0);
          if (succeeded)
          {
            succeeded = (TSWProf_31 == (MR_Integer) 0);
            if (succeeded)
              succeeded = (TSCProf_32 == (MR_Integer) 0);
          }
        }
        if (succeeded)
          mercury__list__cons_3_p_0((MR_Word) (&check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__type_ctor_info_simplify_task_0), ((MR_Box) ((MR_Integer) 11)), STATE_VARIABLE_SimpList_1_45, &STATE_VARIABLE_SimpList_10_66);
        else
          mercury__list__delete_all_3_p_1((MR_Word) (&check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__type_ctor_info_simplify_task_0), STATE_VARIABLE_SimpList_1_45, ((MR_Box) ((MR_Integer) 11)), &STATE_VARIABLE_SimpList_10_66);
        mercury__list__cons_3_p_0((MR_Word) (&check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__type_ctor_info_simplify_task_0), ((MR_Box) ((MR_Integer) 5)), STATE_VARIABLE_SimpList_10_66, &STATE_VARIABLE_SimpList_12_70);
        mercury__list__cons_3_p_0((MR_Word) (&check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__type_ctor_info_simplify_task_0), ((MR_Box) ((MR_Integer) 9)), STATE_VARIABLE_SimpList_12_70, &SimpList_23);
      }
      break;
    case (MR_Integer) 5:
      mercury__list__cons_3_p_0((MR_Word) (&check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__type_ctor_info_simplify_task_0), ((MR_Box) ((MR_Integer) 5)), STATE_VARIABLE_SimpList_1_45, &SimpList_23);
      break;
    case (MR_Integer) 1:
      mercury__list__cons_3_p_0((MR_Word) (&check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__type_ctor_info_simplify_task_0), ((MR_Box) ((MR_Integer) 5)), STATE_VARIABLE_SimpList_1_45, &SimpList_23);
      break;
    case (MR_Integer) 2:
      {
        MR_Word PreParSimplify_27;

        libs__globals__lookup_bool_option_3_p_0(Globals_22, (MR_Integer) 748, &PreParSimplify_27);
        switch (PreParSimplify_27) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            SimpList_23 = (MR_Word) ((MR_Unsigned) 0U);
            break;
          case (MR_Integer) 1:
            mercury__list__cons_3_p_0((MR_Word) (&check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__type_ctor_info_simplify_task_0), ((MR_Box) ((MR_Integer) 5)), STATE_VARIABLE_SimpList_1_45, &SimpList_23);
            break;
        }
      }
      break;
    case (MR_Integer) 3:
      {
        MR_Word PreProfSimplify_26;

        libs__globals__lookup_bool_option_3_p_0(Globals_22, (MR_Integer) 655, &PreProfSimplify_26);
        switch (PreProfSimplify_26) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            SimpList_23 = (MR_Word) ((MR_Unsigned) 0U);
            break;
          case (MR_Integer) 1:
            mercury__list__cons_3_p_0((MR_Word) (&check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__type_ctor_info_simplify_task_0), ((MR_Box) ((MR_Integer) 5)), STATE_VARIABLE_SimpList_1_45, &SimpList_23);
            break;
        }
      }
      break;
  }
  if ((SimpList_23 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *STATE_VARIABLE_HLDS_40 = STATE_VARIABLE_HLDS_0_39;
    *STATE_VARIABLE_Specs_42 = STATE_VARIABLE_Specs_0_41;
  }
  else
  {
    MR_Word SimplifyTasks_36;
    MR_Word SimplifySpecs_37;
    MR_Word STATE_VARIABLE_Specs_1_73;
    MR_Word Var_78;
    MR_Word Var_81;

    if ((MaybeErrorStream_14 == (MR_Word) ((MR_Unsigned) 0U)))
      STATE_VARIABLE_Specs_1_73 = STATE_VARIABLE_Specs_0_41;
    else
    {
      MR_Word ErrorStreamA_35 = ((MR_Word) ((MR_hl_field(1, MaybeErrorStream_14, 0))));

      parse_tree__write_error_spec__maybe_write_out_errors_7_p_0(ErrorStreamA_35, Verbose_17, Globals_22, STATE_VARIABLE_Specs_0_41, &STATE_VARIABLE_Specs_1_73);
    }
    libs__file_util__maybe_write_string_5_p_0(ProgressStream_13, Verbose_17, (MR_String) "% Simplifying goals...\n");
    libs__file_util__maybe_flush_output_4_p_0(ProgressStream_13, Verbose_17);
    SimplifyTasks_36 = check_hlds__simplify__simplify_tasks__list_to_simplify_tasks_2_f_0(Globals_22, SimpList_23);
    {
      Var_81 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_81, 0) = ((MR_Box) (&top_level__mercury_compile_front_end_scalar_common_6[0]));
      MR_hl_field(0, Var_81, 1) = ((MR_Box) (top_level__mercury_compile_front_end__maybe_simplify_12_p_0_1));
      MR_hl_field(0, Var_81, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(0, Var_81, 3) = ((MR_Box) (ProgressStream_13));
      MR_hl_field(0, Var_81, 4) = ((MR_Box) (SimplifyTasks_36));
    }
    Var_78 = (MR_Word) (Var_81);
    hlds__passes_aux__process_valid_nonimported_preds_errors_5_p_0(Var_78, STATE_VARIABLE_HLDS_0_39, STATE_VARIABLE_HLDS_40, (MR_Word) ((MR_Unsigned) 0U), &SimplifySpecs_37);
    switch (SimplifyPass_16) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        if ((MaybeErrorStream_14 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word Var_85;

          {
            Var_85 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_85, 0) = ((MR_Box) (&top_level__mercury_compile_front_end_scalar_common_4[2]));
            MR_hl_field(0, Var_85, 1) = ((MR_Box) (top_level__mercury_compile_front_end__maybe_simplify_12_p_0_2));
            MR_hl_field(0, Var_85, 2) = ((MR_Box) ((MR_Integer) 2));
            MR_hl_field(0, Var_85, 3) = ((MR_Box) (SimplifySpecs_37));
            MR_hl_field(0, Var_85, 4) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          mercury__require__expect_3_p_0(Var_85, (MR_String) "predicate \140top_level.mercury_compile_front_end.maybe_simplify\'/12", (MR_String) "SimplifySpecs != []");
          *STATE_VARIABLE_Specs_42 = STATE_VARIABLE_Specs_1_73;
        }
        else
        {
          MR_Word ErrorStreamB_38 = ((MR_Word) ((MR_hl_field(1, MaybeErrorStream_14, 0))));
          MR_Word STATE_VARIABLE_Specs_2_82;

          STATE_VARIABLE_Specs_2_82 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), SimplifySpecs_37, STATE_VARIABLE_Specs_1_73);
          parse_tree__write_error_spec__maybe_write_out_errors_7_p_0(ErrorStreamB_38, Verbose_17, Globals_22, STATE_VARIABLE_Specs_2_82, STATE_VARIABLE_Specs_42);
        }
        break;
      case (MR_Integer) 4:
        *STATE_VARIABLE_Specs_42 = STATE_VARIABLE_Specs_1_73;
        break;
      case (MR_Integer) 5:
        *STATE_VARIABLE_Specs_42 = STATE_VARIABLE_Specs_1_73;
        break;
      case (MR_Integer) 1:
        *STATE_VARIABLE_Specs_42 = STATE_VARIABLE_Specs_1_73;
        break;
      case (MR_Integer) 2:
        *STATE_VARIABLE_Specs_42 = STATE_VARIABLE_Specs_1_73;
        break;
      case (MR_Integer) 3:
        *STATE_VARIABLE_Specs_42 = STATE_VARIABLE_Specs_1_73;
        break;
    }
    libs__file_util__maybe_write_string_5_p_0(ProgressStream_13, Verbose_17, (MR_String) "% done.\n");
    libs__file_util__maybe_report_stats_4_p_0(ProgressStream_13, Stats_18);
  }
}

static void MR_CALL 
top_level__mercury_compile_front_end__need_middle_pass_for_opt_file_2_p_0(
  MR_Word Globals_3,
  MR_Word * NeedMiddlePassForOptFile_4)
{
  MR_bool succeeded;
  MR_Word OptTuple_5;
  MR_Word IntermodArgs_6;
  MR_Word Termination_7;
  MR_Word Termination2_8;
  MR_Word SharingAnalysis_9;
  MR_Word ReuseAnalysis_10;
  MR_Word ExceptionAnalysis_11;
  MR_Word ClosureAnalysis_12;
  MR_Word TrailingAnalysis_13;
  MR_Word TablingAnalysis_14;

  libs__globals__get_opt_tuple_2_p_0(Globals_3, &OptTuple_5);
  IntermodArgs_6 = ((((MR_Unsigned) ((MR_hl_field(0, OptTuple_5, 0))) >> 5)) & (MR_Integer) 1);
  libs__globals__lookup_bool_option_3_p_0(Globals_3, (MR_Integer) 439, &Termination_7);
  libs__globals__lookup_bool_option_3_p_0(Globals_3, (MR_Integer) 446, &Termination2_8);
  libs__globals__lookup_bool_option_3_p_0(Globals_3, (MR_Integer) 364, &SharingAnalysis_9);
  libs__globals__lookup_bool_option_3_p_0(Globals_3, (MR_Integer) 366, &ReuseAnalysis_10);
  libs__globals__lookup_bool_option_3_p_0(Globals_3, (MR_Integer) 454, &ExceptionAnalysis_11);
  libs__globals__lookup_bool_option_3_p_0(Globals_3, (MR_Integer) 455, &ClosureAnalysis_12);
  libs__globals__lookup_bool_option_3_p_0(Globals_3, (MR_Integer) 456, &TrailingAnalysis_13);
  libs__globals__lookup_bool_option_3_p_0(Globals_3, (MR_Integer) 457, &TablingAnalysis_14);
  succeeded = (IntermodArgs_6 == (MR_Integer) 0);
  if (!(succeeded))
  {
    succeeded = (Termination_7 == (MR_Integer) 1);
    if (!(succeeded))
    {
      succeeded = (Termination2_8 == (MR_Integer) 1);
      if (!(succeeded))
      {
        succeeded = (ExceptionAnalysis_11 == (MR_Integer) 1);
        if (!(succeeded))
        {
          succeeded = (TrailingAnalysis_13 == (MR_Integer) 1);
          if (!(succeeded))
          {
            succeeded = (TablingAnalysis_14 == (MR_Integer) 1);
            if (!(succeeded))
            {
              succeeded = (ClosureAnalysis_12 == (MR_Integer) 1);
              if (!(succeeded))
              {
                succeeded = (SharingAnalysis_9 == (MR_Integer) 1);
                if (!(succeeded))
                  succeeded = (ReuseAnalysis_10 == (MR_Integer) 1);
              }
            }
          }
        }
      }
    }
  }
  if (succeeded)
    *NeedMiddlePassForOptFile_4 = (MR_Integer) 1;
  else
    *NeedMiddlePassForOptFile_4 = (MR_Integer) 0;
}

static void MR_CALL 
top_level__mercury_compile_front_end__do_typecheck_16_p_0(
  MR_Word ProgressStream_17,
  MR_Word ErrorStream_18,
  MR_Word Verbose_19,
  MR_Word Stats_20,
  MR_Word Globals_21,
  MR_Word * FoundSyntaxError_22,
  MR_Word * FoundTypeError_23,
  MR_Word * DidWeExceedIterationLimit_24,
  MR_Word STATE_VARIABLE_HLDS_0_32,
  MR_Word * STATE_VARIABLE_HLDS_33,
  MR_Word STATE_VARIABLE_DumpInfo_0_34,
  MR_Word * STATE_VARIABLE_DumpInfo_35,
  MR_Word STATE_VARIABLE_Specs_0_36,
  MR_Word * STATE_VARIABLE_Specs_37)
{
  MR_bool succeeded;
  MR_Word TypeCheckUsingConstraints_29;
  MR_Word TypeCheckSpecs_31;
  MR_Word STATE_VARIABLE_Specs_1_40;
  MR_Word STATE_VARIABLE_Specs_2_51;
  MR_Word STATE_VARIABLE_DumpInfo_1_54;
  MR_Word STATE_VARIABLE_Specs_3_57;

  parse_tree__write_error_spec__maybe_write_out_errors_7_p_0(ErrorStream_18, Verbose_19, Globals_21, STATE_VARIABLE_Specs_0_36, &STATE_VARIABLE_Specs_1_40);
  libs__file_util__maybe_write_string_5_p_0(ProgressStream_17, Verbose_19, (MR_String) "% Type-checking...\n");
  libs__file_util__maybe_write_string_5_p_0(ProgressStream_17, Verbose_19, (MR_String) "% Type-checking clauses...\n");
  libs__globals__lookup_bool_option_3_p_0(Globals_21, (MR_Integer) 659, &TypeCheckUsingConstraints_29);
  switch (TypeCheckUsingConstraints_29) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word STATE_VARIABLE_HLDS_3_50;

        check_hlds__pre_typecheck__prepare_for_typecheck_module_4_p_0(STATE_VARIABLE_HLDS_0_32, &STATE_VARIABLE_HLDS_3_50, STATE_VARIABLE_Specs_1_40, &STATE_VARIABLE_Specs_2_51);
        hlds__passes_aux__maybe_dump_hlds_8_p_0(ProgressStream_17, STATE_VARIABLE_HLDS_3_50, (MR_Integer) 14, (MR_String) "pre_typecheck", STATE_VARIABLE_DumpInfo_0_34, &STATE_VARIABLE_DumpInfo_1_54);
        check_hlds__typecheck__typecheck_module_6_p_0(ProgressStream_17, STATE_VARIABLE_HLDS_3_50, STATE_VARIABLE_HLDS_33, &TypeCheckSpecs_31, FoundSyntaxError_22, DidWeExceedIterationLimit_24);
      }
      break;
    case (MR_Integer) 1:
      {
        MR_String Experiment_30;

        libs__globals__lookup_string_option_3_p_0(Globals_21, (MR_Integer) 671, &Experiment_30);
        succeeded = (strcmp(Experiment_30, (MR_String) "old_type_constraints") == 0);
        if (succeeded)
          check_hlds__old_type_constraints__old_typecheck_constraints_3_p_0(STATE_VARIABLE_HLDS_0_32, STATE_VARIABLE_HLDS_33, &TypeCheckSpecs_31);
        else
          check_hlds__type_constraints__typecheck_constraints_3_p_0(STATE_VARIABLE_HLDS_0_32, STATE_VARIABLE_HLDS_33, &TypeCheckSpecs_31);
        *FoundSyntaxError_22 = (MR_Integer) 0;
        *DidWeExceedIterationLimit_24 = (MR_Integer) 0;
        STATE_VARIABLE_DumpInfo_1_54 = STATE_VARIABLE_DumpInfo_0_34;
        STATE_VARIABLE_Specs_2_51 = STATE_VARIABLE_Specs_1_40;
      }
      break;
  }
  STATE_VARIABLE_Specs_3_57 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), TypeCheckSpecs_31, STATE_VARIABLE_Specs_2_51);
  parse_tree__write_error_spec__maybe_write_out_errors_7_p_0(ErrorStream_18, Verbose_19, Globals_21, STATE_VARIABLE_Specs_3_57, STATE_VARIABLE_Specs_37);
  *FoundTypeError_23 = parse_tree__error_util__contains_errors_2_f_0(Globals_21, TypeCheckSpecs_31);
  switch (*FoundTypeError_23) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      libs__file_util__maybe_write_string_5_p_0(ProgressStream_17, Verbose_19, (MR_String) "% Program is type-correct.\n");
      break;
    case (MR_Integer) 1:
      libs__file_util__maybe_write_string_5_p_0(ProgressStream_17, Verbose_19, (MR_String) "% Program contains type error(s).\n");
      break;
  }
  libs__file_util__maybe_report_stats_4_p_0(ProgressStream_17, Stats_20);
  hlds__passes_aux__maybe_dump_hlds_8_p_0(ProgressStream_17, *STATE_VARIABLE_HLDS_33, (MR_Integer) 15, (MR_String) "typecheck", STATE_VARIABLE_DumpInfo_1_54, STATE_VARIABLE_DumpInfo_35);
}

static void MR_CALL 
top_level__mercury_compile_front_end__check_insts_for_matching_types_13_p_0(
  MR_Word ProgressStream_14,
  MR_Word ErrorStream_15,
  MR_Word Verbose_16,
  MR_Word Stats_17,
  MR_Word Globals_18,
  MR_Word STATE_VARIABLE_HLDS_0_24,
  MR_Word * STATE_VARIABLE_HLDS_25,
  MR_Word STATE_VARIABLE_DumpInfo_0_26,
  MR_Word * STATE_VARIABLE_DumpInfo_27,
  MR_Word STATE_VARIABLE_Specs_0_28,
  MR_Word * STATE_VARIABLE_Specs_29)
{
  MR_Word WarnInstsWithNoMatchingType_23;
  MR_Word STATE_VARIABLE_Specs_1_32;
  MR_Word STATE_VARIABLE_Specs_2_38;

  parse_tree__write_error_spec__maybe_write_out_errors_7_p_0(ErrorStream_15, Verbose_16, Globals_18, STATE_VARIABLE_Specs_0_28, &STATE_VARIABLE_Specs_1_32);
  libs__file_util__maybe_write_string_5_p_0(ProgressStream_14, Verbose_16, (MR_String) "% Checking that insts have matching types... ");
  libs__globals__lookup_bool_option_3_p_0(Globals_18, (MR_Integer) 201, &WarnInstsWithNoMatchingType_23);
  check_hlds__inst_check__check_insts_have_matching_types_5_p_0(WarnInstsWithNoMatchingType_23, STATE_VARIABLE_HLDS_0_24, STATE_VARIABLE_HLDS_25, STATE_VARIABLE_Specs_1_32, &STATE_VARIABLE_Specs_2_38);
  parse_tree__write_error_spec__maybe_write_out_errors_7_p_0(ErrorStream_15, Verbose_16, Globals_18, STATE_VARIABLE_Specs_2_38, STATE_VARIABLE_Specs_29);
  libs__file_util__maybe_write_string_5_p_0(ProgressStream_14, Verbose_16, (MR_String) "done.\n");
  libs__file_util__maybe_report_stats_4_p_0(ProgressStream_14, Stats_17);
  hlds__passes_aux__maybe_dump_hlds_8_p_0(ProgressStream_14, *STATE_VARIABLE_HLDS_25, (MR_Integer) 12, (MR_String) "warn_insts_without_matching_type", STATE_VARIABLE_DumpInfo_0_26, STATE_VARIABLE_DumpInfo_27);
}

static MR_bool MR_CALL 
top_level__mercury_compile_front_end____Unify____simplify_pass_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = top_level__mercury_compile_front_end____Unify____simplify_pass_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
top_level__mercury_compile_front_end____Compare____simplify_pass_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  top_level__mercury_compile_front_end____Compare____simplify_pass_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__top_level__mercury_compile_front_end__init(void)
{
}

void mercury__top_level__mercury_compile_front_end__init_type_tables(void)
{
  static MR_bool initialised = MR_FALSE;
  if (initialised) return;
  initialised = MR_TRUE;

  MR_register_type_ctor_info(&top_level__mercury_compile_front_end__top_level__mercury_compile_front_end__type_ctor_info_simplify_pass_0);
}

void mercury__top_level__mercury_compile_front_end__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__top_level__mercury_compile_front_end__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module top_level.mercury_compile_front_end.
