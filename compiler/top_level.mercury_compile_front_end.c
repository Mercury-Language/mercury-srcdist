/*
** Automatically generated from `mercury_compile_front_end.m'
** by the Mercury compiler,
** version rotd-2018-10-07
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
#include "check_hlds.mih"
#include "hlds.mih"
#include "libs.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "top_level.mih"
#include "transform_hlds.mih"
#include "check_hlds.abstract_mode_constraints.mih"
#include "check_hlds.build_mode_constraints.mih"
#include "check_hlds.check_for_missing_type_defns.mih"
#include "check_hlds.check_promise.mih"
#include "check_hlds.check_typeclass.mih"
#include "check_hlds.clause_to_proc.mih"
#include "check_hlds.cse_detection.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.det_analysis.mih"
#include "check_hlds.det_report.mih"
#include "check_hlds.det_util.mih"
#include "check_hlds.implementation_defined_literals.mih"
#include "check_hlds.inst_check.mih"
#include "check_hlds.inst_user.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_constraints.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.modes.mih"
#include "check_hlds.oisu_check.mih"
#include "check_hlds.polymorphism.mih"
#include "check_hlds.post_typecheck.mih"
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
#include "hlds.const_struct.mih"
#include "hlds.du_type_layout.mih"
#include "hlds.goal_mode.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
#include "hlds.hlds_error_util.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_inst_mode.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_promise.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.hlds_statistics.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.make_hlds.mih"
#include "hlds.passes_aux.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "hlds.vartypes.mih"
#include "libs.compiler_util.mih"
#include "libs.dependency_graph.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.lp_rational.mih"
#include "libs.op_mode.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.rat.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
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
#include "benchmarking.mih"
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "cord.mih"
#include "deconstruct.mih"
#include "digraph.mih"
#include "enum.mih"
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
#include "robdd.mih"
#include "rtti_implementation.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "set_tree234.mih"
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
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.equiv_type.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.module_cmds.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.set_of_var.mih"
#include "top_level.mercury_compile_middle_passes.mih"
#include "transform_hlds.dead_proc_elim.mih"
#include "transform_hlds.intermod.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "check_hlds.simplify.simplify_proc.mih"
#include "check_hlds.simplify.simplify_tasks.mih"
#include "hlds.make_hlds.qual_info.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"
#include "string.format.mih"
#include "string.parse_util.mih"




static const MR_FA_PseudoTypeInfo_Struct1 top_level__mercury_compile_front_end__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0;

static const MR_FA_TypeInfo_Struct1 top_level__mercury_compile_front_end__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0;

static const MR_VA_PseudoTypeInfo_Struct3 top_level__mercury_compile_front_end____vpti_tuple_3__plain_hlds__hlds_module__type_ctor_info_module_info_0__plain_parse_tree__maybe_error__type_ctor_info_maybe_safe_to_continue_0__plain_list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0;

static const MR_FA_PseudoTypeInfo_Struct2 top_level__mercury_compile_front_end__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_hlds__hlds_module__type_ctor_info_oisu_preds_0;

static const MR_EnumFunctorDesc top_level__mercury_compile_front_end__top_level__mercury_compile_front_end__enum_functor_desc_simplify_pass_0_0;

static const MR_EnumFunctorDesc top_level__mercury_compile_front_end__top_level__mercury_compile_front_end__enum_functor_desc_simplify_pass_0_1;

static const MR_EnumFunctorDesc top_level__mercury_compile_front_end__top_level__mercury_compile_front_end__enum_functor_desc_simplify_pass_0_2;

static const MR_EnumFunctorDesc top_level__mercury_compile_front_end__top_level__mercury_compile_front_end__enum_functor_desc_simplify_pass_0_3;

static const MR_EnumFunctorDesc top_level__mercury_compile_front_end__top_level__mercury_compile_front_end__enum_functor_desc_simplify_pass_0_4;

static const MR_EnumFunctorDesc top_level__mercury_compile_front_end__top_level__mercury_compile_front_end__enum_functor_desc_simplify_pass_0_5;

static const MR_EnumFunctorDescPtr top_level__mercury_compile_front_end__top_level__mercury_compile_front_end__enum_value_ordered_simplify_pass_0[6];

static const MR_EnumFunctorDescPtr top_level__mercury_compile_front_end__top_level__mercury_compile_front_end__enum_name_ordered_simplify_pass_0[6];

static const MR_Integer top_level__mercury_compile_front_end__top_level__mercury_compile_front_end__functor_number_map_simplify_pass_0[6];

static void MR_CALL 
top_level__mercury_compile_front_end__simplify_pred_8_p_0(
  MR_Word SimplifyTasks0_9,
  MR_Word PredId_10,
  MR_Word STATE_VARIABLE_ModuleInfo_0_22,
  MR_Word * STATE_VARIABLE_ModuleInfo_23,
  MR_Word STATE_VARIABLE_PredInfo_0_24,
  MR_Word * STATE_VARIABLE_PredInfo_25,
  MR_Word STATE_VARIABLE_Specs_0_26,
  MR_Word * STATE_VARIABLE_Specs_27);

static MR_bool MR_CALL 
top_level__mercury_compile_front_end__type_ctor_is_defined_in_this_module_2_p_0(
  MR_Word ModuleName_3,
  MR_Word HeadVar__2_2);

static void MR_CALL 
top_level__mercury_compile_front_end__decide_type_repns_pass_8_p_0(
  MR_Word Verbose_9,
  MR_Word Stats_10,
  MR_Word STATE_VARIABLE_HLDS_0_15,
  MR_Word * STATE_VARIABLE_HLDS_16,
  MR_Word STATE_VARIABLE_Specs_0_17,
  MR_Word * STATE_VARIABLE_Specs_18);

static void MR_CALL 
top_level__mercury_compile_front_end__frontend_pass_after_typeclass_check_12_p_0(
  MR_Word OpModeAugment_13,
  MR_Word FoundUndefModeError_14,
  MR_Word STATE_VARIABLE_FoundError_0_39,
  MR_Word * STATE_VARIABLE_FoundError_40,
  MR_Word STATE_VARIABLE_HLDS_0_41,
  MR_Word * STATE_VARIABLE_HLDS_42,
  MR_Word STATE_VARIABLE_DumpInfo_0_43,
  MR_Word * STATE_VARIABLE_DumpInfo_44,
  MR_Word STATE_VARIABLE_Specs_0_45,
  MR_Word * STATE_VARIABLE_Specs_46);

static void MR_CALL 
top_level__mercury_compile_front_end__subst_implementation_defined_literals_8_p_0(
  MR_Word Verbose_9,
  MR_Word Stats_10,
  MR_Word STATE_VARIABLE_HLDS_0_15,
  MR_Word * STATE_VARIABLE_HLDS_16,
  MR_Word STATE_VARIABLE_Specs_0_17,
  MR_Word * STATE_VARIABLE_Specs_18);

static void MR_CALL 
top_level__mercury_compile_front_end__check_promises_8_p_0(
  MR_Word Verbose_9,
  MR_Word Stats_10,
  MR_Word STATE_VARIABLE_HLDS_0_17,
  MR_Word * STATE_VARIABLE_HLDS_18,
  MR_Word STATE_VARIABLE_Specs_0_19,
  MR_Word * STATE_VARIABLE_Specs_20);

static void MR_CALL 
top_level__mercury_compile_front_end__puritycheck_8_p_0(
  MR_Word Verbose_9,
  MR_Word Stats_10,
  MR_Word STATE_VARIABLE_HLDS_0_17,
  MR_Word * STATE_VARIABLE_HLDS_18,
  MR_Word STATE_VARIABLE_Specs_0_19,
  MR_Word * STATE_VARIABLE_Specs_20);

static void MR_CALL 
top_level__mercury_compile_front_end__maybe_write_initial_optfile_9_p_0(
  MR_Word MakeOptInt_10,
  MR_Word STATE_VARIABLE_HLDS_0_36,
  MR_Word * STATE_VARIABLE_HLDS_37,
  MR_Word STATE_VARIABLE_DumpInfo_0_38,
  MR_Word * STATE_VARIABLE_DumpInfo_39,
  MR_Word STATE_VARIABLE_Specs_0_40,
  MR_Word * STATE_VARIABLE_Specs_41);

static void MR_CALL 
top_level__mercury_compile_front_end__frontend_pass_by_phases_9_p_0(
  MR_Word STATE_VARIABLE_HLDS_0_30,
  MR_Word * STATE_VARIABLE_HLDS_31,
  MR_Word * FoundError_11,
  MR_Word STATE_VARIABLE_DumpInfo_0_32,
  MR_Word * STATE_VARIABLE_DumpInfo_33,
  MR_Word STATE_VARIABLE_Specs_0_34,
  MR_Word * STATE_VARIABLE_Specs_35);

static void MR_CALL 
top_level__mercury_compile_front_end__maybe_proc_statistics_9_p_0(
  MR_Word Verbose_10,
  MR_Word Stats_11,
  MR_String Msg_12,
  MR_Word STATE_VARIABLE_HLDS_0_22,
  MR_Word * STATE_VARIABLE_HLDS_23,
  MR_Word STATE_VARIABLE_Specs_0_24,
  MR_Word * STATE_VARIABLE_Specs_25);

static void MR_CALL 
top_level__mercury_compile_front_end__maybe_generate_style_warnings_8_p_0(
  MR_Word Verbose_9,
  MR_Word Stats_10,
  MR_Word STATE_VARIABLE_HLDS_0_23,
  MR_Word * STATE_VARIABLE_HLDS_24,
  MR_Word STATE_VARIABLE_Specs_0_25,
  MR_Word * STATE_VARIABLE_Specs_26);

static void MR_CALL 
top_level__mercury_compile_front_end__process_try_goals_9_p_0(
  MR_Word Verbose_10,
  MR_Word Stats_11,
  MR_Word STATE_VARIABLE_HLDS_0_18,
  MR_Word * STATE_VARIABLE_HLDS_19,
  MR_Word * FoundError_13,
  MR_Word STATE_VARIABLE_Specs_0_20,
  MR_Word * STATE_VARIABLE_Specs_21);

static MR_bool MR_CALL 
top_level__mercury_compile_front_end__check_oisu_pragmas_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
top_level__mercury_compile_front_end__check_oisu_pragmas_9_p_0(
  MR_Word Verbose_10,
  MR_Word Stats_11,
  MR_Word STATE_VARIABLE_HLDS_0_24,
  MR_Word * STATE_VARIABLE_HLDS_25,
  MR_Word * FoundError_13,
  MR_Word STATE_VARIABLE_Specs_0_26,
  MR_Word * STATE_VARIABLE_Specs_27);

static void MR_CALL 
top_level__mercury_compile_front_end__check_stratification_9_p_0(
  MR_Word Verbose_10,
  MR_Word Stats_11,
  MR_Word STATE_VARIABLE_HLDS_0_20,
  MR_Word * STATE_VARIABLE_HLDS_21,
  MR_Word * FoundError_13,
  MR_Word STATE_VARIABLE_Specs_0_22,
  MR_Word * STATE_VARIABLE_Specs_23);

static void MR_CALL 
top_level__mercury_compile_front_end__check_unique_modes_9_p_0(
  MR_Word Verbose_10,
  MR_Word Stats_11,
  MR_Word STATE_VARIABLE_HLDS_0_18,
  MR_Word * STATE_VARIABLE_HLDS_19,
  MR_Word * FoundError_13,
  MR_Word STATE_VARIABLE_Specs_0_20,
  MR_Word * STATE_VARIABLE_Specs_21);

static void MR_CALL 
top_level__mercury_compile_front_end__check_determinism_8_p_0(
  MR_Word Verbose_9,
  MR_Word Stats_10,
  MR_Word STATE_VARIABLE_HLDS_0_17,
  MR_Word * STATE_VARIABLE_HLDS_18,
  MR_Word STATE_VARIABLE_Specs_0_19,
  MR_Word * STATE_VARIABLE_Specs_20);

static void MR_CALL 
top_level__mercury_compile_front_end__detect_cse_6_p_0(
  MR_Word Verbose_7,
  MR_Word Stats_8,
  MR_Word STATE_VARIABLE_HLDS_0_11,
  MR_Word * STATE_VARIABLE_HLDS_12);

static void MR_CALL 
top_level__mercury_compile_front_end__detect_switches_6_p_0(
  MR_Word Verbose_7,
  MR_Word Stats_8,
  MR_Word STATE_VARIABLE_HLDS_0_11,
  MR_Word * STATE_VARIABLE_HLDS_12);

static void MR_CALL 
top_level__mercury_compile_front_end__maybe_compute_goal_modes_8_p_0(
  MR_Word Verbose_9,
  MR_Word Stats_10,
  MR_Word STATE_VARIABLE_HLDS_0_16,
  MR_Word * STATE_VARIABLE_HLDS_17,
  MR_Word STATE_VARIABLE_Specs_0_18,
  MR_Word * STATE_VARIABLE_Specs_19);

static void MR_CALL 
top_level__mercury_compile_front_end__modecheck_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
top_level__mercury_compile_front_end__modecheck_10_p_0(
  MR_Word Verbose_11,
  MR_Word Stats_12,
  MR_Word STATE_VARIABLE_HLDS_0_23,
  MR_Word * STATE_VARIABLE_HLDS_24,
  MR_Word * FoundModeError_14,
  MR_Word * SafeToContinue_15,
  MR_Word STATE_VARIABLE_Specs_0_25,
  MR_Word * STATE_VARIABLE_Specs_26);

static void MR_CALL 
top_level__mercury_compile_front_end__maybe_mode_constraints_6_p_0(
  MR_Word Verbose_7,
  MR_Word Stats_8,
  MR_Word STATE_VARIABLE_HLDS_0_13,
  MR_Word * STATE_VARIABLE_HLDS_14);

static void MR_CALL 
top_level__mercury_compile_front_end__maybe_benchmark_modes__ho1_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
top_level__mercury_compile_front_end__maybe_benchmark_modes__ho1_6_p_0(
  MR_String Stage_8,
  MR_Word STATE_VARIABLE_HLDS_0_15,
  MR_Word * STATE_VARIABLE_HLDS_16);

static void MR_CALL 
top_level__mercury_compile_front_end__maybe_warn_about_unused_imports_8_p_0(
  MR_Word Verbose_9,
  MR_Word Stats_10,
  MR_Word STATE_VARIABLE_HLDS_0_17,
  MR_Word * STATE_VARIABLE_HLDS_18,
  MR_Word STATE_VARIABLE_Specs_0_19,
  MR_Word * STATE_VARIABLE_Specs_20);

static void MR_CALL 
top_level__mercury_compile_front_end__post_copy_polymorphism_pass_9_p_0(
  MR_Word Verbose_10,
  MR_Word Stats_11,
  MR_Word ExistsCastPredIds_12,
  MR_Word STATE_VARIABLE_HLDS_0_17,
  MR_Word * STATE_VARIABLE_HLDS_18,
  MR_Word STATE_VARIABLE_Specs_0_19,
  MR_Word * STATE_VARIABLE_Specs_20);

static void MR_CALL 
top_level__mercury_compile_front_end__clause_to_proc_8_p_0(
  MR_Word Verbose_9,
  MR_Word Stats_10,
  MR_Word STATE_VARIABLE_HLDS_0_15,
  MR_Word * STATE_VARIABLE_HLDS_16,
  MR_Word STATE_VARIABLE_Specs_0_17,
  MR_Word * STATE_VARIABLE_Specs_18);

static void MR_CALL 
top_level__mercury_compile_front_end__maybe_polymorphism_10_p_0(
  MR_Word Verbose_11,
  MR_Word Stats_12,
  MR_Word * ExistsCastPredIds_13,
  MR_Word * SafeToContinue_14,
  MR_Word STATE_VARIABLE_HLDS_0_21,
  MR_Word * STATE_VARIABLE_HLDS_22,
  MR_Word STATE_VARIABLE_Specs_0_23,
  MR_Word * STATE_VARIABLE_Specs_24);

static void MR_CALL 
top_level__mercury_compile_front_end__maybe_simplify_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);

static MR_bool MR_CALL 
top_level__mercury_compile_front_end____Unify____simplify_pass_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
top_level__mercury_compile_front_end____Compare____simplify_pass_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box top_level__mercury_compile_front_end_scalar_common_1[1][2];

static /* final */ const MR_Box top_level__mercury_compile_front_end_scalar_common_2[3][5];

static /* final */ const MR_Box top_level__mercury_compile_front_end_scalar_common_3[3][3];

static /* final */ const MR_Box top_level__mercury_compile_front_end_scalar_common_4[1][11];

static /* final */ const MR_Box top_level__mercury_compile_front_end_scalar_common_5[4][1];

static /* final */ const MR_Box top_level__mercury_compile_front_end_scalar_common_6[1][7];




static /* final */ const MR_Box top_level__mercury_compile_front_end_scalar_common_1[1][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0))
  },
};

static /* final */ const MR_Box top_level__mercury_compile_front_end_scalar_common_2[3][5] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_tuple_0)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&parse_tree__maybe_error__parse_tree__maybe_error__type_ctor_info_maybe_safe_to_continue_0)),
    ((MR_Box) (&top_level__mercury_compile_front_end_scalar_common_1[0]))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&top_level__mercury_compile_front_end____vpti_tuple_3__plain_hlds__hlds_module__type_ctor_info_module_info_0__plain_parse_tree__maybe_error__type_ctor_info_maybe_safe_to_continue_0__plain_list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&top_level__mercury_compile_front_end__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_hlds__hlds_module__type_ctor_info_oisu_preds_0))
  },
};

static /* final */ const MR_Box top_level__mercury_compile_front_end_scalar_common_3[3][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_oisu_preds_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&top_level__mercury_compile_front_end_scalar_common_6[0])),
    ((MR_Box) (top_level__mercury_compile_front_end__maybe_benchmark_modes__ho1_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&top_level__mercury_compile_front_end_scalar_common_2[1])),
    ((MR_Box) (top_level__mercury_compile_front_end__modecheck_10_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box top_level__mercury_compile_front_end_scalar_common_4[1][11] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__type_ctor_info_simplify_tasks_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0)),
    ((MR_Box) (&top_level__mercury_compile_front_end__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&top_level__mercury_compile_front_end__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
};

static /* final */ const MR_Box top_level__mercury_compile_front_end_scalar_common_5[4][1] = {
  /* row 0 */
  {
    (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1))))))))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box top_level__mercury_compile_front_end_scalar_common_6[1][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_PseudoTypeInfo_Struct1 top_level__mercury_compile_front_end__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0)
  }
};

static const MR_FA_TypeInfo_Struct1 top_level__mercury_compile_front_end__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0)
  }
};

static const MR_VA_PseudoTypeInfo_Struct3 top_level__mercury_compile_front_end____vpti_tuple_3__plain_hlds__hlds_module__type_ctor_info_module_info_0__plain_parse_tree__maybe_error__type_ctor_info_maybe_safe_to_continue_0__plain_list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__builtin__builtin__type_ctor_info_tuple_0,
  (MR_Integer) 3,
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0),
    (MR_PseudoTypeInfo) (&parse_tree__maybe_error__parse_tree__maybe_error__type_ctor_info_maybe_safe_to_continue_0),
    (MR_PseudoTypeInfo) (&top_level__mercury_compile_front_end__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0)
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
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc top_level__mercury_compile_front_end__top_level__mercury_compile_front_end__enum_functor_desc_simplify_pass_0_1 = {
  (MR_String) "simplify_pass_post_untuple",
  (MR_Integer) 1
};

static const MR_EnumFunctorDesc top_level__mercury_compile_front_end__top_level__mercury_compile_front_end__enum_functor_desc_simplify_pass_0_2 = {
  (MR_String) "simplify_pass_pre_prof_transforms",
  (MR_Integer) 2
};

static const MR_EnumFunctorDesc top_level__mercury_compile_front_end__top_level__mercury_compile_front_end__enum_functor_desc_simplify_pass_0_3 = {
  (MR_String) "simplify_pass_pre_implicit_parallelism",
  (MR_Integer) 3
};

static const MR_EnumFunctorDesc top_level__mercury_compile_front_end__top_level__mercury_compile_front_end__enum_functor_desc_simplify_pass_0_4 = {
  (MR_String) "simplify_pass_ml_backend",
  (MR_Integer) 4
};

static const MR_EnumFunctorDesc top_level__mercury_compile_front_end__top_level__mercury_compile_front_end__enum_functor_desc_simplify_pass_0_5 = {
  (MR_String) "simplify_pass_ll_backend",
  (MR_Integer) 5
};

static const MR_EnumFunctorDescPtr top_level__mercury_compile_front_end__top_level__mercury_compile_front_end__enum_value_ordered_simplify_pass_0[6] = {
  &top_level__mercury_compile_front_end__top_level__mercury_compile_front_end__enum_functor_desc_simplify_pass_0_0,
  &top_level__mercury_compile_front_end__top_level__mercury_compile_front_end__enum_functor_desc_simplify_pass_0_1,
  &top_level__mercury_compile_front_end__top_level__mercury_compile_front_end__enum_functor_desc_simplify_pass_0_2,
  &top_level__mercury_compile_front_end__top_level__mercury_compile_front_end__enum_functor_desc_simplify_pass_0_3,
  &top_level__mercury_compile_front_end__top_level__mercury_compile_front_end__enum_functor_desc_simplify_pass_0_4,
  &top_level__mercury_compile_front_end__top_level__mercury_compile_front_end__enum_functor_desc_simplify_pass_0_5
};

static const MR_EnumFunctorDescPtr top_level__mercury_compile_front_end__top_level__mercury_compile_front_end__enum_name_ordered_simplify_pass_0[6] = {
  &top_level__mercury_compile_front_end__top_level__mercury_compile_front_end__enum_functor_desc_simplify_pass_0_0,
  &top_level__mercury_compile_front_end__top_level__mercury_compile_front_end__enum_functor_desc_simplify_pass_0_5,
  &top_level__mercury_compile_front_end__top_level__mercury_compile_front_end__enum_functor_desc_simplify_pass_0_4,
  &top_level__mercury_compile_front_end__top_level__mercury_compile_front_end__enum_functor_desc_simplify_pass_0_1,
  &top_level__mercury_compile_front_end__top_level__mercury_compile_front_end__enum_functor_desc_simplify_pass_0_3,
  &top_level__mercury_compile_front_end__top_level__mercury_compile_front_end__enum_functor_desc_simplify_pass_0_2
};

static const MR_Integer top_level__mercury_compile_front_end__top_level__mercury_compile_front_end__functor_number_map_simplify_pass_0[6] = {
  (MR_Integer) 0,
  (MR_Integer) 3,
  (MR_Integer) 5,
  (MR_Integer) 4,
  (MR_Integer) 2,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct top_level__mercury_compile_front_end__top_level__mercury_compile_front_end__type_ctor_info_simplify_pass_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (top_level__mercury_compile_front_end____Unify____simplify_pass_0_0_10001)),
  ((MR_Box) (top_level__mercury_compile_front_end____Compare____simplify_pass_0_0_10001)),
  (MR_String) "top_level.mercury_compile_front_end",
  (MR_String) "simplify_pass",
  {     top_level__mercury_compile_front_end__top_level__mercury_compile_front_end__enum_name_ordered_simplify_pass_0 },
  {     top_level__mercury_compile_front_end__top_level__mercury_compile_front_end__enum_value_ordered_simplify_pass_0 },
  (MR_Integer) 6,
  (MR_Integer) 4,
  top_level__mercury_compile_front_end__top_level__mercury_compile_front_end__functor_number_map_simplify_pass_0
};

void MR_CALL 
top_level__mercury_compile_front_end____Compare____simplify_pass_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Integer Cast_HeadVar1_4 = (MR_Integer) (HeadVar__2_2);
    MR_Integer Cast_HeadVar2_5 = (MR_Integer) (HeadVar__3_3);

    mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
  }
}

MR_bool MR_CALL 
top_level__mercury_compile_front_end____Unify____simplify_pass_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

static void MR_CALL 
top_level__mercury_compile_front_end__simplify_pred_8_p_0(
  MR_Word SimplifyTasks0_9,
  MR_Word PredId_10,
  MR_Word STATE_VARIABLE_ModuleInfo_0_22,
  MR_Word * STATE_VARIABLE_ModuleInfo_23,
  MR_Word STATE_VARIABLE_PredInfo_0_24,
  MR_Word * STATE_VARIABLE_PredInfo_25,
  MR_Word STATE_VARIABLE_Specs_0_26,
  MR_Word * STATE_VARIABLE_Specs_27)
{
  {
    MR_bool succeeded;
    MR_Word ProcIds_15;
    MR_Word SimplifyTasks_16;
    MR_Word ErrorSpecs0_17;
    MR_Word ErrorSpecs_18;
    MR_Word Globals_19;
    MR_Word SpecsList_20;
    MR_Word Statistics_21;

    hlds__passes_aux__write_pred_progress_message_5_p_0((MR_String) "% Simplifying ", PredId_10, STATE_VARIABLE_ModuleInfo_0_22);
    ProcIds_15 = hlds__hlds_pred__pred_info_non_imported_procids_1_f_0(STATE_VARIABLE_PredInfo_0_24);
    succeeded = hlds__hlds_pred__is_unify_index_or_compare_pred_1_p_0(STATE_VARIABLE_PredInfo_0_24);
    if (succeeded)
    {
      MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), SimplifyTasks0_9, (MR_Integer) 0)));

      {
        SimplifyTasks_16 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), SimplifyTasks_16, 0) = (MR_Box) ((((packed_word_0 & (~((MR_Unsigned) 16384U)))) | (((MR_Unsigned) ((MR_Integer) 0) << 14))));
      }
    }
    else
      SimplifyTasks_16 = SimplifyTasks0_9;
    ErrorSpecs0_17 = parse_tree__error_util__init_error_spec_accumulator_0_f_0();
    check_hlds__simplify__simplify_proc__simplify_pred_procs_9_p_0(SimplifyTasks_16, PredId_10, ProcIds_15, STATE_VARIABLE_ModuleInfo_0_22, STATE_VARIABLE_ModuleInfo_23, STATE_VARIABLE_PredInfo_0_24, STATE_VARIABLE_PredInfo_25, ErrorSpecs0_17, &ErrorSpecs_18);
    hlds__hlds_module__module_info_get_globals_2_p_0(*STATE_VARIABLE_ModuleInfo_23, &Globals_19);
    SpecsList_20 = parse_tree__error_util__error_spec_accumulator_to_list_1_f_0(ErrorSpecs_18);
    *STATE_VARIABLE_Specs_27 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), SpecsList_20, STATE_VARIABLE_Specs_0_26);
    libs__globals__lookup_bool_option_3_p_0(Globals_19, (MR_Integer) 71, &Statistics_21);
    libs__file_util__maybe_report_stats_3_p_0(Statistics_21);
  }
}

static MR_bool MR_CALL 
top_level__mercury_compile_front_end__type_ctor_is_defined_in_this_module_2_p_0(
  MR_Word ModuleName_3,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word TypeCtor_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
    MR_Word TypeSymName_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeCtor_4, (MR_Integer) 0))));
    MR_Word TypeModuleName_8;

    succeeded = ((MR_tag((MR_Word) TypeSymName_6)) == (MR_Integer) 1);
    if (succeeded)
    {
      TypeModuleName_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TypeSymName_6, (MR_Integer) 0))));
      succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ModuleName_3, TypeModuleName_8);
    }
    return succeeded;
  }
}

void MR_CALL 
top_level__mercury_compile_front_end__frontend_pass_14_p_0(
  MR_Word OpModeAugment_15,
  MR_Word QualInfo0_16,
  MR_Word FoundUndefTypeError_17,
  MR_Word FoundUndefModeError_18,
  MR_Word STATE_VARIABLE_FoundError_0_30,
  MR_Word * STATE_VARIABLE_FoundError_31,
  MR_Word STATE_VARIABLE_HLDS_0_32,
  MR_Word * STATE_VARIABLE_HLDS_33,
  MR_Word STATE_VARIABLE_DumpInfo_0_34,
  MR_Word * STATE_VARIABLE_DumpInfo_35,
  MR_Word STATE_VARIABLE_Specs_0_36,
  MR_Word * STATE_VARIABLE_Specs_37)
{
  {
    MR_Word Globals_24;
    MR_Word Verbose_25;

    hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_HLDS_0_32, &Globals_24);
    libs__globals__lookup_bool_option_3_p_0(Globals_24, (MR_Integer) 60, &Verbose_25);
    switch (FoundUndefTypeError_17) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Stats_26;
          MR_Word QualInfo_27;
          MR_Word TypeClassSpecs_28;
          MR_Word TypeClassErrors_29;
          MR_Word STATE_VARIABLE_HLDS_41_41;
          MR_Word STATE_VARIABLE_Specs_42_42;
          MR_Word STATE_VARIABLE_HLDS_45_45;
          MR_Word STATE_VARIABLE_Specs_46_46;
          MR_Word STATE_VARIABLE_DumpInfo_50_50;
          MR_Word STATE_VARIABLE_HLDS_54_54;
          MR_Word STATE_VARIABLE_Specs_56_56;
          MR_Word STATE_VARIABLE_DumpInfo_59_59;
          MR_Word STATE_VARIABLE_HLDS_61_61;

          hlds__hlds_error_util__maybe_write_out_errors_8_p_0(Verbose_25, Globals_24, STATE_VARIABLE_HLDS_0_32, &STATE_VARIABLE_HLDS_41_41, STATE_VARIABLE_Specs_0_36, &STATE_VARIABLE_Specs_42_42);
          libs__globals__lookup_bool_option_3_p_0(Globals_24, (MR_Integer) 70, &Stats_26);
          top_level__mercury_compile_front_end__decide_type_repns_pass_8_p_0(Verbose_25, Stats_26, STATE_VARIABLE_HLDS_41_41, &STATE_VARIABLE_HLDS_45_45, STATE_VARIABLE_Specs_42_42, &STATE_VARIABLE_Specs_46_46);
          hlds__passes_aux__maybe_dump_hlds_7_p_0(STATE_VARIABLE_HLDS_45_45, (MR_Integer) 3, (MR_String) "decide_type_repns", STATE_VARIABLE_DumpInfo_0_34, &STATE_VARIABLE_DumpInfo_50_50);
          libs__file_util__maybe_write_string_4_p_0(Verbose_25, (MR_String) "% Checking typeclasses...\n");
          check_hlds__check_typeclass__check_typeclasses_6_p_0(STATE_VARIABLE_HLDS_45_45, &STATE_VARIABLE_HLDS_54_54, QualInfo0_16, &QualInfo_27, (MR_Word) ((MR_Unsigned) 0U), &TypeClassSpecs_28);
          STATE_VARIABLE_Specs_56_56 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), TypeClassSpecs_28, STATE_VARIABLE_Specs_46_46);
          hlds__passes_aux__maybe_dump_hlds_7_p_0(STATE_VARIABLE_HLDS_54_54, (MR_Integer) 5, (MR_String) "typeclass", STATE_VARIABLE_DumpInfo_50_50, &STATE_VARIABLE_DumpInfo_59_59);
          hlds__make_hlds__set_module_recomp_info_3_p_0(QualInfo_27, STATE_VARIABLE_HLDS_54_54, &STATE_VARIABLE_HLDS_61_61);
          TypeClassErrors_29 = parse_tree__error_util__contains_errors_2_f_0(Globals_24, TypeClassSpecs_28);
          switch (TypeClassErrors_29) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              top_level__mercury_compile_front_end__frontend_pass_after_typeclass_check_12_p_0(OpModeAugment_15, FoundUndefModeError_18, STATE_VARIABLE_FoundError_0_30, STATE_VARIABLE_FoundError_31, STATE_VARIABLE_HLDS_61_61, STATE_VARIABLE_HLDS_33, STATE_VARIABLE_DumpInfo_59_59, STATE_VARIABLE_DumpInfo_35, STATE_VARIABLE_Specs_56_56, STATE_VARIABLE_Specs_37);
              break;
            case (MR_Integer) 1:
              {
                *STATE_VARIABLE_FoundError_31 = (MR_Integer) 1;
                *STATE_VARIABLE_HLDS_33 = STATE_VARIABLE_HLDS_61_61;
                *STATE_VARIABLE_DumpInfo_35 = STATE_VARIABLE_DumpInfo_59_59;
                *STATE_VARIABLE_Specs_37 = STATE_VARIABLE_Specs_56_56;
              }
              break;
          }
        }
        break;
      case (MR_Integer) 1:
        {
          *STATE_VARIABLE_FoundError_31 = (MR_Integer) 1;
          hlds__hlds_error_util__maybe_write_out_errors_8_p_0(Verbose_25, Globals_24, STATE_VARIABLE_HLDS_0_32, STATE_VARIABLE_HLDS_33, STATE_VARIABLE_Specs_0_36, STATE_VARIABLE_Specs_37);
          libs__file_util__maybe_write_string_4_p_0(Verbose_25, (MR_String) "% Program contains undefined type error(s).\n");
          mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
          *STATE_VARIABLE_DumpInfo_35 = STATE_VARIABLE_DumpInfo_0_34;
        }
        break;
    }
  }
}

static void MR_CALL 
top_level__mercury_compile_front_end__decide_type_repns_pass_8_p_0(
  MR_Word Verbose_9,
  MR_Word Stats_10,
  MR_Word STATE_VARIABLE_HLDS_0_15,
  MR_Word * STATE_VARIABLE_HLDS_16,
  MR_Word STATE_VARIABLE_Specs_0_17,
  MR_Word * STATE_VARIABLE_Specs_18)
{
  {
    MR_Word Globals_14;
    MR_Word STATE_VARIABLE_HLDS_21_21;
    MR_Word STATE_VARIABLE_Specs_22_22;

    hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_HLDS_0_15, &Globals_14);
    hlds__hlds_error_util__maybe_write_out_errors_8_p_0(Verbose_9, Globals_14, STATE_VARIABLE_HLDS_0_15, &STATE_VARIABLE_HLDS_21_21, STATE_VARIABLE_Specs_0_17, &STATE_VARIABLE_Specs_22_22);
    libs__file_util__maybe_write_string_4_p_0(Verbose_9, (MR_String) "% Deciding type representations...\n");
    hlds__du_type_layout__decide_type_repns_4_p_0(STATE_VARIABLE_HLDS_21_21, STATE_VARIABLE_HLDS_16, STATE_VARIABLE_Specs_22_22, STATE_VARIABLE_Specs_18);
    libs__file_util__maybe_write_string_4_p_0(Verbose_9, (MR_String) "% done.\n");
    libs__file_util__maybe_report_stats_3_p_0(Stats_10);
  }
}

static void MR_CALL 
top_level__mercury_compile_front_end__frontend_pass_after_typeclass_check_12_p_0(
  MR_Word OpModeAugment_13,
  MR_Word FoundUndefModeError_14,
  MR_Word STATE_VARIABLE_FoundError_0_39,
  MR_Word * STATE_VARIABLE_FoundError_40,
  MR_Word STATE_VARIABLE_HLDS_0_41,
  MR_Word * STATE_VARIABLE_HLDS_42,
  MR_Word STATE_VARIABLE_DumpInfo_0_43,
  MR_Word * STATE_VARIABLE_DumpInfo_44,
  MR_Word STATE_VARIABLE_Specs_0_45,
  MR_Word * STATE_VARIABLE_Specs_46)
{
  {
    MR_bool succeeded;
    MR_Word Globals_20;
    MR_Word Verbose_21;
    MR_Word Stats_22;
    MR_Word IntermodOpt_23;
    MR_Word IntermodAnalysis_24;
    MR_Word UseOptFiles_25;
    MR_Word TypeCheckConstraints_26;
    MR_Word WarnInstsWithNoMatchingType_27;
    MR_Word TypeCheckSpecs_28;
    MR_Word FoundSyntaxError_29;
    MR_Word ExceededTypeCheckIterationLimit_30;
    MR_Word FoundTypeError_31;
    MR_Word STATE_VARIABLE_HLDS_61_61;
    MR_Word STATE_VARIABLE_Specs_62_62;
    MR_Word STATE_VARIABLE_DumpInfo_68_68;
    MR_Word STATE_VARIABLE_HLDS_78_78;
    MR_Word STATE_VARIABLE_Specs_79_79;
    MR_Word STATE_VARIABLE_DumpInfo_85_85;
    MR_Word STATE_VARIABLE_HLDS_87_87;
    MR_Word STATE_VARIABLE_Specs_88_88;
    MR_Word STATE_VARIABLE_HLDS_95_95;
    MR_Word STATE_VARIABLE_Specs_96_96;
    MR_Word STATE_VARIABLE_HLDS_97_97;
    MR_Word STATE_VARIABLE_Specs_98_98;
    MR_Word STATE_VARIABLE_DumpInfo_107_107;

    hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_HLDS_0_41, &Globals_20);
    libs__globals__lookup_bool_option_3_p_0(Globals_20, (MR_Integer) 60, &Verbose_21);
    libs__globals__lookup_bool_option_3_p_0(Globals_20, (MR_Integer) 70, &Stats_22);
    libs__globals__lookup_bool_option_3_p_0(Globals_20, (MR_Integer) 344, &IntermodOpt_23);
    libs__globals__lookup_bool_option_3_p_0(Globals_20, (MR_Integer) 349, &IntermodAnalysis_24);
    libs__globals__lookup_bool_option_3_p_0(Globals_20, (MR_Integer) 346, &UseOptFiles_25);
    libs__globals__lookup_bool_option_3_p_0(Globals_20, (MR_Integer) 316, &TypeCheckConstraints_26);
    succeeded = (IntermodOpt_23 == (MR_Integer) 1);
    if (!(succeeded))
    {
      succeeded = (IntermodAnalysis_24 == (MR_Integer) 1);
      if (!(succeeded))
        succeeded = (UseOptFiles_25 == (MR_Integer) 1);
    }
    if (succeeded)
    {
      succeeded = (OpModeAugment_13 != (MR_Word) ((MR_Unsigned) 0U));
    }
    if (succeeded)
    {
      MR_Word STATE_VARIABLE_HLDS_55_55;
      MR_Word STATE_VARIABLE_Specs_56_56;
      MR_Word STATE_VARIABLE_HLDS_60_60;

      hlds__hlds_error_util__maybe_write_out_errors_8_p_0(Verbose_21, Globals_20, STATE_VARIABLE_HLDS_0_41, &STATE_VARIABLE_HLDS_55_55, STATE_VARIABLE_Specs_0_45, &STATE_VARIABLE_Specs_56_56);
      libs__file_util__maybe_write_string_4_p_0(Verbose_21, (MR_String) "% Eliminating dead predicates... ");
      transform_hlds__dead_proc_elim__dead_pred_elim_2_p_0(STATE_VARIABLE_HLDS_55_55, &STATE_VARIABLE_HLDS_60_60);
      hlds__hlds_error_util__maybe_write_out_errors_8_p_0(Verbose_21, Globals_20, STATE_VARIABLE_HLDS_60_60, &STATE_VARIABLE_HLDS_61_61, STATE_VARIABLE_Specs_56_56, &STATE_VARIABLE_Specs_62_62);
      libs__file_util__maybe_write_string_4_p_0(Verbose_21, (MR_String) "done.\n");
      hlds__passes_aux__maybe_dump_hlds_7_p_0(STATE_VARIABLE_HLDS_61_61, (MR_Integer) 10, (MR_String) "dead_pred_elim", STATE_VARIABLE_DumpInfo_0_43, &STATE_VARIABLE_DumpInfo_68_68);
    }
    else
    {
      STATE_VARIABLE_Specs_62_62 = STATE_VARIABLE_Specs_0_45;
      STATE_VARIABLE_DumpInfo_68_68 = STATE_VARIABLE_DumpInfo_0_43;
      STATE_VARIABLE_HLDS_61_61 = STATE_VARIABLE_HLDS_0_41;
    }
    libs__globals__lookup_bool_option_3_p_0(Globals_20, (MR_Integer) 46, &WarnInstsWithNoMatchingType_27);
    switch (WarnInstsWithNoMatchingType_27) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          STATE_VARIABLE_HLDS_78_78 = STATE_VARIABLE_HLDS_61_61;
          STATE_VARIABLE_DumpInfo_85_85 = STATE_VARIABLE_DumpInfo_68_68;
          STATE_VARIABLE_Specs_79_79 = STATE_VARIABLE_Specs_62_62;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word STATE_VARIABLE_HLDS_71_71;
          MR_Word STATE_VARIABLE_Specs_72_72;
          MR_Word STATE_VARIABLE_HLDS_76_76;
          MR_Word STATE_VARIABLE_Specs_77_77;

          hlds__hlds_error_util__maybe_write_out_errors_8_p_0(Verbose_21, Globals_20, STATE_VARIABLE_HLDS_61_61, &STATE_VARIABLE_HLDS_71_71, STATE_VARIABLE_Specs_62_62, &STATE_VARIABLE_Specs_72_72);
          libs__file_util__maybe_write_string_4_p_0(Verbose_21, (MR_String) "% Checking that insts have matching types... ");
          check_hlds__inst_check__check_insts_have_matching_types_4_p_0(STATE_VARIABLE_HLDS_71_71, &STATE_VARIABLE_HLDS_76_76, STATE_VARIABLE_Specs_72_72, &STATE_VARIABLE_Specs_77_77);
          hlds__hlds_error_util__maybe_write_out_errors_8_p_0(Verbose_21, Globals_20, STATE_VARIABLE_HLDS_76_76, &STATE_VARIABLE_HLDS_78_78, STATE_VARIABLE_Specs_77_77, &STATE_VARIABLE_Specs_79_79);
          libs__file_util__maybe_write_string_4_p_0(Verbose_21, (MR_String) "done.\n");
          hlds__passes_aux__maybe_dump_hlds_7_p_0(STATE_VARIABLE_HLDS_78_78, (MR_Integer) 12, (MR_String) "warn_insts_without_matching_type", STATE_VARIABLE_DumpInfo_68_68, &STATE_VARIABLE_DumpInfo_85_85);
        }
        break;
    }
    hlds__hlds_error_util__maybe_write_out_errors_8_p_0(Verbose_21, Globals_20, STATE_VARIABLE_HLDS_78_78, &STATE_VARIABLE_HLDS_87_87, STATE_VARIABLE_Specs_79_79, &STATE_VARIABLE_Specs_88_88);
    libs__file_util__maybe_write_string_4_p_0(Verbose_21, (MR_String) "% Type-checking...\n");
    libs__file_util__maybe_write_string_4_p_0(Verbose_21, (MR_String) "% Type-checking clauses...\n");
    switch (TypeCheckConstraints_26) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        check_hlds__typecheck__typecheck_module_5_p_0(STATE_VARIABLE_HLDS_87_87, &STATE_VARIABLE_HLDS_95_95, &TypeCheckSpecs_28, &FoundSyntaxError_29, &ExceededTypeCheckIterationLimit_30);
        break;
      case (MR_Integer) 1:
        {
          check_hlds__type_constraints__typecheck_constraints_3_p_0(STATE_VARIABLE_HLDS_87_87, &STATE_VARIABLE_HLDS_95_95, &TypeCheckSpecs_28);
          FoundSyntaxError_29 = (MR_Integer) 0;
          ExceededTypeCheckIterationLimit_30 = (MR_Integer) 0;
        }
        break;
    }
    STATE_VARIABLE_Specs_96_96 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), TypeCheckSpecs_28, STATE_VARIABLE_Specs_88_88);
    hlds__hlds_error_util__maybe_write_out_errors_8_p_0(Verbose_21, Globals_20, STATE_VARIABLE_HLDS_95_95, &STATE_VARIABLE_HLDS_97_97, STATE_VARIABLE_Specs_96_96, &STATE_VARIABLE_Specs_98_98);
    FoundTypeError_31 = parse_tree__error_util__contains_errors_2_f_0(Globals_20, TypeCheckSpecs_28);
    switch (FoundTypeError_31) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          libs__file_util__maybe_write_string_4_p_0(Verbose_21, (MR_String) "% Program is type-correct.\n");
        }
        break;
      case (MR_Integer) 1:
        {
          libs__file_util__maybe_write_string_4_p_0(Verbose_21, (MR_String) "% Program contains type error(s).\n");
        }
        break;
    }
    libs__file_util__maybe_report_stats_3_p_0(Stats_22);
    hlds__passes_aux__maybe_dump_hlds_7_p_0(STATE_VARIABLE_HLDS_97_97, (MR_Integer) 15, (MR_String) "typecheck", STATE_VARIABLE_DumpInfo_85_85, &STATE_VARIABLE_DumpInfo_107_107);
    succeeded = (FoundUndefModeError_14 == (MR_Integer) 1);
    if (succeeded)
    {
      *STATE_VARIABLE_FoundError_40 = (MR_Integer) 1;
      libs__file_util__maybe_write_string_4_p_0(Verbose_21, (MR_String) "% Program contains undefined inst or undefined mode error(s).\n");
      mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
      *STATE_VARIABLE_Specs_46 = STATE_VARIABLE_Specs_98_98;
      *STATE_VARIABLE_DumpInfo_44 = STATE_VARIABLE_DumpInfo_107_107;
      *STATE_VARIABLE_HLDS_42 = STATE_VARIABLE_HLDS_97_97;
    }
    else
    {
      succeeded = (ExceededTypeCheckIterationLimit_30 == (MR_Integer) 1);
      if (succeeded)
      {
        *STATE_VARIABLE_FoundError_40 = (MR_Integer) 1;
        mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
        *STATE_VARIABLE_Specs_46 = STATE_VARIABLE_Specs_98_98;
        *STATE_VARIABLE_DumpInfo_44 = STATE_VARIABLE_DumpInfo_107_107;
        *STATE_VARIABLE_HLDS_42 = STATE_VARIABLE_HLDS_97_97;
      }
      else
      {
        MR_Word MissingTypeDefnSpecs_32;
        MR_Word SomeMissingTypeDefns_33;
        MR_Integer NumPostTypeCheckErrors_34;
        MR_Word PostTypeCheckAlwaysSpecs_35;
        MR_Word PostTypeCheckNoTypeErrorSpecs_36;
        MR_Word STATE_VARIABLE_Specs_119_119;
        MR_Word STATE_VARIABLE_HLDS_120_120;
        MR_Word STATE_VARIABLE_HLDS_121_121;
        MR_Word STATE_VARIABLE_DumpInfo_124_124;
        MR_Word STATE_VARIABLE_Specs_126_126;
        MR_Word STATE_VARIABLE_Specs_127_127;

        check_hlds__check_for_missing_type_defns__check_for_missing_type_defns_2_p_0(STATE_VARIABLE_HLDS_97_97, &MissingTypeDefnSpecs_32);
        STATE_VARIABLE_Specs_119_119 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), STATE_VARIABLE_Specs_98_98, MissingTypeDefnSpecs_32);
        SomeMissingTypeDefns_33 = parse_tree__error_util__contains_errors_2_f_0(Globals_20, MissingTypeDefnSpecs_32);
        check_hlds__inst_user__pretest_user_inst_table_2_p_0(STATE_VARIABLE_HLDS_97_97, &STATE_VARIABLE_HLDS_120_120);
        check_hlds__post_typecheck__post_typecheck_finish_preds_5_p_0(STATE_VARIABLE_HLDS_120_120, &STATE_VARIABLE_HLDS_121_121, &NumPostTypeCheckErrors_34, &PostTypeCheckAlwaysSpecs_35, &PostTypeCheckNoTypeErrorSpecs_36);
        hlds__passes_aux__maybe_dump_hlds_7_p_0(STATE_VARIABLE_HLDS_121_121, (MR_Integer) 19, (MR_String) "post_typecheck", STATE_VARIABLE_DumpInfo_107_107, &STATE_VARIABLE_DumpInfo_124_124);
        STATE_VARIABLE_Specs_126_126 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), STATE_VARIABLE_Specs_119_119, PostTypeCheckAlwaysSpecs_35);
        switch (FoundTypeError_31) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            STATE_VARIABLE_Specs_127_127 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), STATE_VARIABLE_Specs_126_126, PostTypeCheckNoTypeErrorSpecs_36);
            break;
          case (MR_Integer) 1:
            STATE_VARIABLE_Specs_127_127 = STATE_VARIABLE_Specs_126_126;
            break;
        }
        succeeded = (FoundTypeError_31 == (MR_Integer) 1);
        if (!(succeeded))
        {
          succeeded = (FoundSyntaxError_29 == (MR_Integer) 1);
          if (!(succeeded))
          {
            succeeded = (SomeMissingTypeDefns_33 == (MR_Integer) 1);
            if (!(succeeded))
            {
              succeeded = (NumPostTypeCheckErrors_34 > (MR_Integer) 0);
            }
          }
        }
        if (succeeded)
        {
          *STATE_VARIABLE_FoundError_40 = (MR_Integer) 1;
          *STATE_VARIABLE_Specs_46 = STATE_VARIABLE_Specs_127_127;
          *STATE_VARIABLE_DumpInfo_44 = STATE_VARIABLE_DumpInfo_124_124;
          *STATE_VARIABLE_HLDS_42 = STATE_VARIABLE_HLDS_121_121;
        }
        else
        {
          MR_Word STATE_VARIABLE_HLDS_130_130;
          MR_Word STATE_VARIABLE_Specs_131_131;
          MR_Word STATE_VARIABLE_DumpInfo_135_135;
          MR_Word STATE_VARIABLE_HLDS_137_137;
          MR_Word STATE_VARIABLE_Specs_138_138;
          MR_Word STATE_VARIABLE_DumpInfo_142_142;

          top_level__mercury_compile_front_end__puritycheck_8_p_0(Verbose_21, Stats_22, STATE_VARIABLE_HLDS_121_121, &STATE_VARIABLE_HLDS_130_130, STATE_VARIABLE_Specs_127_127, &STATE_VARIABLE_Specs_131_131);
          hlds__passes_aux__maybe_dump_hlds_7_p_0(STATE_VARIABLE_HLDS_130_130, (MR_Integer) 20, (MR_String) "puritycheck", STATE_VARIABLE_DumpInfo_124_124, &STATE_VARIABLE_DumpInfo_135_135);
          top_level__mercury_compile_front_end__check_promises_8_p_0(Verbose_21, Stats_22, STATE_VARIABLE_HLDS_130_130, &STATE_VARIABLE_HLDS_137_137, STATE_VARIABLE_Specs_131_131, &STATE_VARIABLE_Specs_138_138);
          hlds__passes_aux__maybe_dump_hlds_7_p_0(STATE_VARIABLE_HLDS_137_137, (MR_Integer) 22, (MR_String) "check_promises", STATE_VARIABLE_DumpInfo_135_135, &STATE_VARIABLE_DumpInfo_142_142);
          succeeded = (OpModeAugment_13 == (MR_Word) ((MR_Unsigned) 16U));
          if (succeeded)
          {
            *STATE_VARIABLE_Specs_46 = STATE_VARIABLE_Specs_138_138;
            *STATE_VARIABLE_DumpInfo_44 = STATE_VARIABLE_DumpInfo_142_142;
            *STATE_VARIABLE_HLDS_42 = STATE_VARIABLE_HLDS_137_137;
            *STATE_VARIABLE_FoundError_40 = STATE_VARIABLE_FoundError_0_39;
          }
          else
          {
            MR_Word MakeOptInt_37;
            MR_Word STATE_VARIABLE_HLDS_144_144;
            MR_Word STATE_VARIABLE_Specs_145_145;
            MR_Word STATE_VARIABLE_DumpInfo_149_149;
            MR_Word STATE_VARIABLE_HLDS_151_151;
            MR_Word STATE_VARIABLE_DumpInfo_152_152;
            MR_Word STATE_VARIABLE_Specs_153_153;

            top_level__mercury_compile_front_end__subst_implementation_defined_literals_8_p_0(Verbose_21, Stats_22, STATE_VARIABLE_HLDS_137_137, &STATE_VARIABLE_HLDS_144_144, STATE_VARIABLE_Specs_138_138, &STATE_VARIABLE_Specs_145_145);
            hlds__passes_aux__maybe_dump_hlds_7_p_0(STATE_VARIABLE_HLDS_144_144, (MR_Integer) 25, (MR_String) "implementation_defined_literals", STATE_VARIABLE_DumpInfo_142_142, &STATE_VARIABLE_DumpInfo_149_149);
            succeeded = (OpModeAugment_13 == (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
              MakeOptInt_37 = (MR_Integer) 1;
            else
              MakeOptInt_37 = (MR_Integer) 0;
            succeeded = (STATE_VARIABLE_FoundError_0_39 == (MR_Integer) 0);
            if (succeeded)
              succeeded = (FoundUndefModeError_14 == (MR_Integer) 0);
            if (succeeded)
              top_level__mercury_compile_front_end__maybe_write_initial_optfile_9_p_0(MakeOptInt_37, STATE_VARIABLE_HLDS_144_144, &STATE_VARIABLE_HLDS_151_151, STATE_VARIABLE_DumpInfo_149_149, &STATE_VARIABLE_DumpInfo_152_152, STATE_VARIABLE_Specs_145_145, &STATE_VARIABLE_Specs_153_153);
            else
            {
              STATE_VARIABLE_Specs_153_153 = STATE_VARIABLE_Specs_145_145;
              STATE_VARIABLE_DumpInfo_152_152 = STATE_VARIABLE_DumpInfo_149_149;
              STATE_VARIABLE_HLDS_151_151 = STATE_VARIABLE_HLDS_144_144;
            }
            switch (MakeOptInt_37) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word FoundModeOrDetError_38;

                  top_level__mercury_compile_front_end__frontend_pass_by_phases_9_p_0(STATE_VARIABLE_HLDS_151_151, STATE_VARIABLE_HLDS_42, &FoundModeOrDetError_38, STATE_VARIABLE_DumpInfo_152_152, STATE_VARIABLE_DumpInfo_44, STATE_VARIABLE_Specs_153_153, STATE_VARIABLE_Specs_46);
                  *STATE_VARIABLE_FoundError_40 = mercury__bool__or_2_f_0(STATE_VARIABLE_FoundError_0_39, FoundModeOrDetError_38);
                }
                break;
              case (MR_Integer) 1:
                {
                  *STATE_VARIABLE_FoundError_40 = STATE_VARIABLE_FoundError_0_39;
                  *STATE_VARIABLE_HLDS_42 = STATE_VARIABLE_HLDS_151_151;
                  *STATE_VARIABLE_DumpInfo_44 = STATE_VARIABLE_DumpInfo_152_152;
                  *STATE_VARIABLE_Specs_46 = STATE_VARIABLE_Specs_153_153;
                }
                break;
            }
          }
        }
      }
    }
  }
}

static void MR_CALL 
top_level__mercury_compile_front_end__subst_implementation_defined_literals_8_p_0(
  MR_Word Verbose_9,
  MR_Word Stats_10,
  MR_Word STATE_VARIABLE_HLDS_0_15,
  MR_Word * STATE_VARIABLE_HLDS_16,
  MR_Word STATE_VARIABLE_Specs_0_17,
  MR_Word * STATE_VARIABLE_Specs_18)
{
  {
    MR_Word Globals_14;
    MR_Word STATE_VARIABLE_HLDS_21_21;

    hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_HLDS_0_15, &Globals_14);
    hlds__hlds_error_util__maybe_write_out_errors_8_p_0(Verbose_9, Globals_14, STATE_VARIABLE_HLDS_0_15, &STATE_VARIABLE_HLDS_21_21, STATE_VARIABLE_Specs_0_17, STATE_VARIABLE_Specs_18);
    libs__file_util__maybe_write_string_4_p_0(Verbose_9, (MR_String) "% Substituting implementation-defined literals...\n");
    libs__file_util__maybe_flush_output_3_p_0(Verbose_9);
    check_hlds__implementation_defined_literals__subst_impl_defined_literals_2_p_0(STATE_VARIABLE_HLDS_21_21, STATE_VARIABLE_HLDS_16);
    libs__file_util__maybe_write_string_4_p_0(Verbose_9, (MR_String) "% done.\n");
    libs__file_util__maybe_report_stats_3_p_0(Stats_10);
  }
}

static void MR_CALL 
top_level__mercury_compile_front_end__check_promises_8_p_0(
  MR_Word Verbose_9,
  MR_Word Stats_10,
  MR_Word STATE_VARIABLE_HLDS_0_17,
  MR_Word * STATE_VARIABLE_HLDS_18,
  MR_Word STATE_VARIABLE_Specs_0_19,
  MR_Word * STATE_VARIABLE_Specs_20)
{
  {
    MR_Word PromiseSpecs_14;
    MR_Word Globals_15;
    MR_Word PromiseErrors_16;
    MR_Word STATE_VARIABLE_HLDS_25_25;
    MR_Word STATE_VARIABLE_Specs_27_27;

    libs__file_util__maybe_write_string_4_p_0(Verbose_9, (MR_String) "% Checking any promises...\n");
    check_hlds__check_promise__check_promises_in_module_4_p_0(STATE_VARIABLE_HLDS_0_17, &STATE_VARIABLE_HLDS_25_25, (MR_Word) ((MR_Unsigned) 0U), &PromiseSpecs_14);
    STATE_VARIABLE_Specs_27_27 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), PromiseSpecs_14, STATE_VARIABLE_Specs_0_19);
    hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_HLDS_25_25, &Globals_15);
    PromiseErrors_16 = parse_tree__error_util__contains_errors_2_f_0(Globals_15, PromiseSpecs_14);
    hlds__hlds_error_util__maybe_write_out_errors_8_p_0(Verbose_9, Globals_15, STATE_VARIABLE_HLDS_25_25, STATE_VARIABLE_HLDS_18, STATE_VARIABLE_Specs_27_27, STATE_VARIABLE_Specs_20);
    switch (PromiseErrors_16) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          libs__file_util__maybe_write_string_4_p_0(Verbose_9, (MR_String) "% All promises are correct.\n");
        }
        break;
      case (MR_Integer) 1:
        {
          libs__file_util__maybe_write_string_4_p_0(Verbose_9, (MR_String) "% Program contains error(s) in promises.\n");
        }
        break;
    }
    libs__file_util__maybe_report_stats_3_p_0(Stats_10);
  }
}

static void MR_CALL 
top_level__mercury_compile_front_end__puritycheck_8_p_0(
  MR_Word Verbose_9,
  MR_Word Stats_10,
  MR_Word STATE_VARIABLE_HLDS_0_17,
  MR_Word * STATE_VARIABLE_HLDS_18,
  MR_Word STATE_VARIABLE_Specs_0_19,
  MR_Word * STATE_VARIABLE_Specs_20)
{
  {
    MR_Word PuritySpecs_14;
    MR_Word Globals_15;
    MR_Word PurityErrors_16;
    MR_Word STATE_VARIABLE_HLDS_25_25;
    MR_Word STATE_VARIABLE_Specs_27_27;

    libs__file_util__maybe_write_string_4_p_0(Verbose_9, (MR_String) "% Purity-checking clauses...\n");
    check_hlds__purity__puritycheck_module_4_p_0(STATE_VARIABLE_HLDS_0_17, &STATE_VARIABLE_HLDS_25_25, (MR_Word) ((MR_Unsigned) 0U), &PuritySpecs_14);
    STATE_VARIABLE_Specs_27_27 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), PuritySpecs_14, STATE_VARIABLE_Specs_0_19);
    hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_HLDS_25_25, &Globals_15);
    PurityErrors_16 = parse_tree__error_util__contains_errors_2_f_0(Globals_15, PuritySpecs_14);
    hlds__hlds_error_util__maybe_write_out_errors_8_p_0(Verbose_9, Globals_15, STATE_VARIABLE_HLDS_25_25, STATE_VARIABLE_HLDS_18, STATE_VARIABLE_Specs_27_27, STATE_VARIABLE_Specs_20);
    switch (PurityErrors_16) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          libs__file_util__maybe_write_string_4_p_0(Verbose_9, (MR_String) "% Program is purity-correct.\n");
        }
        break;
      case (MR_Integer) 1:
        {
          libs__file_util__maybe_write_string_4_p_0(Verbose_9, (MR_String) "% Program contains purity error(s).\n");
        }
        break;
    }
    libs__file_util__maybe_report_stats_3_p_0(Stats_10);
  }
}

static void MR_CALL 
top_level__mercury_compile_front_end__maybe_write_initial_optfile_9_p_0(
  MR_Word MakeOptInt_10,
  MR_Word STATE_VARIABLE_HLDS_0_36,
  MR_Word * STATE_VARIABLE_HLDS_37,
  MR_Word STATE_VARIABLE_DumpInfo_0_38,
  MR_Word * STATE_VARIABLE_DumpInfo_39,
  MR_Word STATE_VARIABLE_Specs_0_40,
  MR_Word * STATE_VARIABLE_Specs_41)
{
  {
    MR_bool succeeded;
    MR_Word Globals_15;
    MR_Word IntermodOpt_16;
    MR_Word IntermodAnalysis_17;
    MR_Word IntermodArgs_18;
    MR_Word IntermodDirs_19;
    MR_Word UseOptFiles_20;
    MR_Word Termination_21;
    MR_Word Termination2_22;
    MR_Word SharingAnalysis_23;
    MR_Word ReuseAnalysis_24;
    MR_Word ExceptionAnalysis_25;
    MR_Word ClosureAnalysis_26;
    MR_Word TrailingAnalysis_27;
    MR_Word TablingAnalysis_28;

    hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_HLDS_0_36, &Globals_15);
    libs__globals__lookup_bool_option_3_p_0(Globals_15, (MR_Integer) 344, &IntermodOpt_16);
    libs__globals__lookup_bool_option_3_p_0(Globals_15, (MR_Integer) 349, &IntermodAnalysis_17);
    libs__globals__lookup_bool_option_3_p_0(Globals_15, (MR_Integer) 371, &IntermodArgs_18);
    libs__globals__lookup_accumulating_option_3_p_0(Globals_15, (MR_Integer) 666, &IntermodDirs_19);
    libs__globals__lookup_bool_option_3_p_0(Globals_15, (MR_Integer) 346, &UseOptFiles_20);
    libs__globals__lookup_bool_option_3_p_0(Globals_15, (MR_Integer) 435, &Termination_21);
    libs__globals__lookup_bool_option_3_p_0(Globals_15, (MR_Integer) 442, &Termination2_22);
    libs__globals__lookup_bool_option_3_p_0(Globals_15, (MR_Integer) 427, &SharingAnalysis_23);
    libs__globals__lookup_bool_option_3_p_0(Globals_15, (MR_Integer) 429, &ReuseAnalysis_24);
    libs__globals__lookup_bool_option_3_p_0(Globals_15, (MR_Integer) 450, &ExceptionAnalysis_25);
    libs__globals__lookup_bool_option_3_p_0(Globals_15, (MR_Integer) 451, &ClosureAnalysis_26);
    libs__globals__lookup_bool_option_3_p_0(Globals_15, (MR_Integer) 414, &TrailingAnalysis_27);
    libs__globals__lookup_bool_option_3_p_0(Globals_15, (MR_Integer) 417, &TablingAnalysis_28);
    switch (MakeOptInt_10) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          succeeded = (IntermodOpt_16 == (MR_Integer) 1);
          if (!(succeeded))
            succeeded = (IntermodAnalysis_17 == (MR_Integer) 1);
          if (succeeded)
            transform_hlds__intermod__maybe_opt_export_entities_2_p_0(STATE_VARIABLE_HLDS_0_36, STATE_VARIABLE_HLDS_37);
          else
            switch (UseOptFiles_20) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *STATE_VARIABLE_HLDS_37 = STATE_VARIABLE_HLDS_0_36;
                break;
              case (MR_Integer) 1:
                {
                  MR_Word MaybeDir_33;
                  MR_Word ModuleName_77;
                  MR_String OptName_78;

                  hlds__hlds_module__module_info_get_name_2_p_0(STATE_VARIABLE_HLDS_0_36, &ModuleName_77);
                  parse_tree__file_names__module_name_to_search_file_name_6_p_0(Globals_15, (MR_String) ".opt", ModuleName_77, &OptName_78);
                  libs__file_util__search_for_file_returning_dir_5_p_0(IntermodDirs_19, OptName_78, &MaybeDir_33);
                  if (((MR_tag((MR_Word) MaybeDir_33)) == (MR_Integer) 1))
                    *STATE_VARIABLE_HLDS_37 = STATE_VARIABLE_HLDS_0_36;
                  else
                    transform_hlds__intermod__maybe_opt_export_entities_2_p_0(STATE_VARIABLE_HLDS_0_36, STATE_VARIABLE_HLDS_37);
                }
                break;
            }
          *STATE_VARIABLE_DumpInfo_39 = STATE_VARIABLE_DumpInfo_0_38;
          *STATE_VARIABLE_Specs_41 = STATE_VARIABLE_Specs_0_40;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ModuleName_30;
          MR_String OptName_31;
          MR_Word STATE_VARIABLE_HLDS_61_61;

          transform_hlds__intermod__write_initial_opt_file_4_p_0(STATE_VARIABLE_HLDS_0_36, &STATE_VARIABLE_HLDS_61_61);
          succeeded = (IntermodAnalysis_17 == (MR_Integer) 0);
          if (succeeded)
          {
            succeeded = (IntermodArgs_18 == (MR_Integer) 1);
            if (!(succeeded))
            {
              succeeded = (Termination_21 == (MR_Integer) 1);
              if (!(succeeded))
              {
                succeeded = (Termination2_22 == (MR_Integer) 1);
                if (!(succeeded))
                {
                  succeeded = (ExceptionAnalysis_25 == (MR_Integer) 1);
                  if (!(succeeded))
                  {
                    succeeded = (TrailingAnalysis_27 == (MR_Integer) 1);
                    if (!(succeeded))
                    {
                      succeeded = (TablingAnalysis_28 == (MR_Integer) 1);
                      if (!(succeeded))
                      {
                        succeeded = (ClosureAnalysis_26 == (MR_Integer) 1);
                        if (!(succeeded))
                        {
                          succeeded = (SharingAnalysis_23 == (MR_Integer) 1);
                          if (!(succeeded))
                            succeeded = (ReuseAnalysis_24 == (MR_Integer) 1);
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          if (succeeded)
          {
            MR_Word FoundError_29;
            MR_Word STATE_VARIABLE_HLDS_63_63;

            top_level__mercury_compile_front_end__frontend_pass_by_phases_9_p_0(STATE_VARIABLE_HLDS_61_61, &STATE_VARIABLE_HLDS_63_63, &FoundError_29, STATE_VARIABLE_DumpInfo_0_38, STATE_VARIABLE_DumpInfo_39, STATE_VARIABLE_Specs_0_40, STATE_VARIABLE_Specs_41);
            switch (FoundError_29) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                top_level__mercury_compile_middle_passes__middle_pass_for_opt_file_4_p_0(STATE_VARIABLE_HLDS_63_63, STATE_VARIABLE_HLDS_37);
                break;
              case (MR_Integer) 1:
                {
                  mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
                  *STATE_VARIABLE_HLDS_37 = STATE_VARIABLE_HLDS_63_63;
                }
                break;
            }
          }
          else
          {
            *STATE_VARIABLE_Specs_41 = STATE_VARIABLE_Specs_0_40;
            *STATE_VARIABLE_DumpInfo_39 = STATE_VARIABLE_DumpInfo_0_38;
            *STATE_VARIABLE_HLDS_37 = STATE_VARIABLE_HLDS_61_61;
          }
          hlds__hlds_module__module_info_get_name_2_p_0(*STATE_VARIABLE_HLDS_37, &ModuleName_30);
          parse_tree__file_names__module_name_to_file_name_7_p_0(Globals_15, (MR_Integer) 0, (MR_String) ".opt", ModuleName_30, &OptName_31);
          parse_tree__module_cmds__update_interface_4_p_0(Globals_15, OptName_31);
          parse_tree__module_cmds__touch_interface_datestamp_5_p_0(Globals_15, ModuleName_30, (MR_String) ".optdate");
        }
        break;
    }
  }
}

static void MR_CALL 
top_level__mercury_compile_front_end__frontend_pass_by_phases_9_p_0(
  MR_Word STATE_VARIABLE_HLDS_0_30,
  MR_Word * STATE_VARIABLE_HLDS_31,
  MR_Word * FoundError_11,
  MR_Word STATE_VARIABLE_DumpInfo_0_32,
  MR_Word * STATE_VARIABLE_DumpInfo_33,
  MR_Word STATE_VARIABLE_Specs_0_34,
  MR_Word * STATE_VARIABLE_Specs_35)
{
  {
    MR_bool succeeded;
    MR_Word Globals_15;
    MR_Word Verbose_16;
    MR_Word Stats_17;
    MR_Word ExistsCastPredIds_18;
    MR_Word PolySafeToContinue_19;
    MR_Word STATE_VARIABLE_HLDS_40_40;
    MR_Word STATE_VARIABLE_Specs_41_41;
    MR_Word STATE_VARIABLE_DumpInfo_45_45;
    MR_Word STATE_VARIABLE_DumpInfo_142_142;

    hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_HLDS_0_30, &Globals_15);
    libs__globals__lookup_bool_option_3_p_0(Globals_15, (MR_Integer) 60, &Verbose_16);
    libs__globals__lookup_bool_option_3_p_0(Globals_15, (MR_Integer) 70, &Stats_17);
    top_level__mercury_compile_front_end__maybe_polymorphism_10_p_0(Verbose_16, Stats_17, &ExistsCastPredIds_18, &PolySafeToContinue_19, STATE_VARIABLE_HLDS_0_30, &STATE_VARIABLE_HLDS_40_40, STATE_VARIABLE_Specs_0_34, &STATE_VARIABLE_Specs_41_41);
    hlds__passes_aux__maybe_dump_hlds_7_p_0(STATE_VARIABLE_HLDS_40_40, (MR_Integer) 30, (MR_String) "polymorphism", STATE_VARIABLE_DumpInfo_0_32, &STATE_VARIABLE_DumpInfo_45_45);
    switch (PolySafeToContinue_19) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word FoundModeError_20;
          MR_Word ModesSafeToContinue_21;
          MR_Word STATE_VARIABLE_HLDS_47_47;
          MR_Word STATE_VARIABLE_Specs_48_48;
          MR_Word STATE_VARIABLE_DumpInfo_52_52;
          MR_Word STATE_VARIABLE_HLDS_54_54;
          MR_Word STATE_VARIABLE_Specs_55_55;
          MR_Word STATE_VARIABLE_DumpInfo_59_59;
          MR_Word STATE_VARIABLE_HLDS_61_61;
          MR_Word STATE_VARIABLE_Specs_62_62;
          MR_Word STATE_VARIABLE_DumpInfo_66_66;
          MR_Word STATE_VARIABLE_HLDS_68_68;
          MR_Word STATE_VARIABLE_DumpInfo_72_72;
          MR_Word STATE_VARIABLE_HLDS_74_74;
          MR_Word STATE_VARIABLE_Specs_75_75;
          MR_Word STATE_VARIABLE_DumpInfo_79_79;
          MR_Word STATE_VARIABLE_HLDS_81_81;
          MR_Word STATE_VARIABLE_Specs_82_82;
          MR_Word STATE_VARIABLE_DumpInfo_86_86;

          top_level__mercury_compile_front_end__clause_to_proc_8_p_0(Verbose_16, Stats_17, STATE_VARIABLE_HLDS_40_40, &STATE_VARIABLE_HLDS_47_47, STATE_VARIABLE_Specs_41_41, &STATE_VARIABLE_Specs_48_48);
          hlds__passes_aux__maybe_dump_hlds_7_p_0(STATE_VARIABLE_HLDS_47_47, (MR_Integer) 31, (MR_String) "clause_to_proc", STATE_VARIABLE_DumpInfo_45_45, &STATE_VARIABLE_DumpInfo_52_52);
          top_level__mercury_compile_front_end__post_copy_polymorphism_pass_9_p_0(Verbose_16, Stats_17, ExistsCastPredIds_18, STATE_VARIABLE_HLDS_47_47, &STATE_VARIABLE_HLDS_54_54, STATE_VARIABLE_Specs_48_48, &STATE_VARIABLE_Specs_55_55);
          hlds__passes_aux__maybe_dump_hlds_7_p_0(STATE_VARIABLE_HLDS_54_54, (MR_Integer) 32, (MR_String) "post_copy_polymorphism", STATE_VARIABLE_DumpInfo_52_52, &STATE_VARIABLE_DumpInfo_59_59);
          top_level__mercury_compile_front_end__maybe_warn_about_unused_imports_8_p_0(Verbose_16, Stats_17, STATE_VARIABLE_HLDS_54_54, &STATE_VARIABLE_HLDS_61_61, STATE_VARIABLE_Specs_55_55, &STATE_VARIABLE_Specs_62_62);
          hlds__passes_aux__maybe_dump_hlds_7_p_0(STATE_VARIABLE_HLDS_61_61, (MR_Integer) 33, (MR_String) "unused_imports", STATE_VARIABLE_DumpInfo_59_59, &STATE_VARIABLE_DumpInfo_66_66);
          top_level__mercury_compile_front_end__maybe_mode_constraints_6_p_0(Verbose_16, Stats_17, STATE_VARIABLE_HLDS_61_61, &STATE_VARIABLE_HLDS_68_68);
          hlds__passes_aux__maybe_dump_hlds_7_p_0(STATE_VARIABLE_HLDS_68_68, (MR_Integer) 34, (MR_String) "mode_constraints", STATE_VARIABLE_DumpInfo_66_66, &STATE_VARIABLE_DumpInfo_72_72);
          top_level__mercury_compile_front_end__modecheck_10_p_0(Verbose_16, Stats_17, STATE_VARIABLE_HLDS_68_68, &STATE_VARIABLE_HLDS_74_74, &FoundModeError_20, &ModesSafeToContinue_21, STATE_VARIABLE_Specs_62_62, &STATE_VARIABLE_Specs_75_75);
          hlds__passes_aux__maybe_dump_hlds_7_p_0(STATE_VARIABLE_HLDS_74_74, (MR_Integer) 35, (MR_String) "modecheck", STATE_VARIABLE_DumpInfo_72_72, &STATE_VARIABLE_DumpInfo_79_79);
          top_level__mercury_compile_front_end__maybe_compute_goal_modes_8_p_0(Verbose_16, Stats_17, STATE_VARIABLE_HLDS_74_74, &STATE_VARIABLE_HLDS_81_81, STATE_VARIABLE_Specs_75_75, &STATE_VARIABLE_Specs_82_82);
          hlds__passes_aux__maybe_dump_hlds_7_p_0(STATE_VARIABLE_HLDS_81_81, (MR_Integer) 36, (MR_String) "goal_modes", STATE_VARIABLE_DumpInfo_79_79, &STATE_VARIABLE_DumpInfo_86_86);
          switch (ModesSafeToContinue_21) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word FoundUniqError_22;
                MR_Word FoundStratError_23;
                MR_Word FoundOISUError_24;
                MR_Word FoundTryError_25;
                MR_Word MaybeWorstSpecsSeverity_26;
                MR_Integer NumErrors_27;
                MR_Integer ExitStatus_28;
                MR_Word STATE_VARIABLE_HLDS_88_88;
                MR_Word STATE_VARIABLE_DumpInfo_92_92;
                MR_Word STATE_VARIABLE_HLDS_94_94;
                MR_Word STATE_VARIABLE_DumpInfo_98_98;
                MR_Word STATE_VARIABLE_HLDS_100_100;
                MR_Word STATE_VARIABLE_Specs_101_101;
                MR_Word STATE_VARIABLE_DumpInfo_105_105;
                MR_Word STATE_VARIABLE_HLDS_107_107;
                MR_Word STATE_VARIABLE_Specs_108_108;
                MR_Word STATE_VARIABLE_DumpInfo_112_112;
                MR_Word STATE_VARIABLE_HLDS_114_114;
                MR_Word STATE_VARIABLE_Specs_115_115;
                MR_Word STATE_VARIABLE_DumpInfo_119_119;
                MR_Word STATE_VARIABLE_HLDS_121_121;
                MR_Word STATE_VARIABLE_Specs_122_122;
                MR_Word STATE_VARIABLE_DumpInfo_126_126;
                MR_Word STATE_VARIABLE_HLDS_128_128;
                MR_Word STATE_VARIABLE_Specs_129_129;
                MR_Word STATE_VARIABLE_DumpInfo_133_133;
                MR_Word STATE_VARIABLE_HLDS_137_137;
                MR_Word STATE_VARIABLE_Specs_138_138;
                MR_Word STATE_VARIABLE_HLDS_144_144;
                MR_Word STATE_VARIABLE_Specs_145_145;

                top_level__mercury_compile_front_end__detect_switches_6_p_0(Verbose_16, Stats_17, STATE_VARIABLE_HLDS_81_81, &STATE_VARIABLE_HLDS_88_88);
                hlds__passes_aux__maybe_dump_hlds_7_p_0(STATE_VARIABLE_HLDS_88_88, (MR_Integer) 40, (MR_String) "switch_detect", STATE_VARIABLE_DumpInfo_86_86, &STATE_VARIABLE_DumpInfo_92_92);
                top_level__mercury_compile_front_end__detect_cse_6_p_0(Verbose_16, Stats_17, STATE_VARIABLE_HLDS_88_88, &STATE_VARIABLE_HLDS_94_94);
                hlds__passes_aux__maybe_dump_hlds_7_p_0(STATE_VARIABLE_HLDS_94_94, (MR_Integer) 45, (MR_String) "cse", STATE_VARIABLE_DumpInfo_92_92, &STATE_VARIABLE_DumpInfo_98_98);
                top_level__mercury_compile_front_end__check_determinism_8_p_0(Verbose_16, Stats_17, STATE_VARIABLE_HLDS_94_94, &STATE_VARIABLE_HLDS_100_100, STATE_VARIABLE_Specs_82_82, &STATE_VARIABLE_Specs_101_101);
                hlds__passes_aux__maybe_dump_hlds_7_p_0(STATE_VARIABLE_HLDS_100_100, (MR_Integer) 50, (MR_String) "determinism", STATE_VARIABLE_DumpInfo_98_98, &STATE_VARIABLE_DumpInfo_105_105);
                top_level__mercury_compile_front_end__check_unique_modes_9_p_0(Verbose_16, Stats_17, STATE_VARIABLE_HLDS_100_100, &STATE_VARIABLE_HLDS_107_107, &FoundUniqError_22, STATE_VARIABLE_Specs_101_101, &STATE_VARIABLE_Specs_108_108);
                hlds__passes_aux__maybe_dump_hlds_7_p_0(STATE_VARIABLE_HLDS_107_107, (MR_Integer) 55, (MR_String) "unique_modes", STATE_VARIABLE_DumpInfo_105_105, &STATE_VARIABLE_DumpInfo_112_112);
                top_level__mercury_compile_front_end__check_stratification_9_p_0(Verbose_16, Stats_17, STATE_VARIABLE_HLDS_107_107, &STATE_VARIABLE_HLDS_114_114, &FoundStratError_23, STATE_VARIABLE_Specs_108_108, &STATE_VARIABLE_Specs_115_115);
                hlds__passes_aux__maybe_dump_hlds_7_p_0(STATE_VARIABLE_HLDS_114_114, (MR_Integer) 60, (MR_String) "stratification", STATE_VARIABLE_DumpInfo_112_112, &STATE_VARIABLE_DumpInfo_119_119);
                top_level__mercury_compile_front_end__check_oisu_pragmas_9_p_0(Verbose_16, Stats_17, STATE_VARIABLE_HLDS_114_114, &STATE_VARIABLE_HLDS_121_121, &FoundOISUError_24, STATE_VARIABLE_Specs_115_115, &STATE_VARIABLE_Specs_122_122);
                hlds__passes_aux__maybe_dump_hlds_7_p_0(STATE_VARIABLE_HLDS_121_121, (MR_Integer) 61, (MR_String) "oisu", STATE_VARIABLE_DumpInfo_119_119, &STATE_VARIABLE_DumpInfo_126_126);
                top_level__mercury_compile_front_end__process_try_goals_9_p_0(Verbose_16, Stats_17, STATE_VARIABLE_HLDS_121_121, &STATE_VARIABLE_HLDS_128_128, &FoundTryError_25, STATE_VARIABLE_Specs_122_122, &STATE_VARIABLE_Specs_129_129);
                hlds__passes_aux__maybe_dump_hlds_7_p_0(STATE_VARIABLE_HLDS_128_128, (MR_Integer) 62, (MR_String) "try", STATE_VARIABLE_DumpInfo_126_126, &STATE_VARIABLE_DumpInfo_133_133);
                top_level__mercury_compile_front_end__maybe_simplify_10_p_0((MR_Integer) 1, (MR_Integer) 0, Verbose_16, Stats_17, STATE_VARIABLE_HLDS_128_128, &STATE_VARIABLE_HLDS_137_137, STATE_VARIABLE_Specs_129_129, &STATE_VARIABLE_Specs_138_138);
                hlds__passes_aux__maybe_dump_hlds_7_p_0(STATE_VARIABLE_HLDS_137_137, (MR_Integer) 65, (MR_String) "frontend_simplify", STATE_VARIABLE_DumpInfo_133_133, &STATE_VARIABLE_DumpInfo_142_142);
                top_level__mercury_compile_front_end__maybe_generate_style_warnings_8_p_0(Verbose_16, Stats_17, STATE_VARIABLE_HLDS_137_137, &STATE_VARIABLE_HLDS_144_144, STATE_VARIABLE_Specs_138_138, &STATE_VARIABLE_Specs_145_145);
                top_level__mercury_compile_front_end__maybe_proc_statistics_9_p_0(Verbose_16, Stats_17, (MR_String) "AfterFrontEnd", STATE_VARIABLE_HLDS_144_144, STATE_VARIABLE_HLDS_31, STATE_VARIABLE_Specs_145_145, STATE_VARIABLE_Specs_35);
                MaybeWorstSpecsSeverity_26 = parse_tree__error_util__worst_severity_in_specs_2_f_0(Globals_15, *STATE_VARIABLE_Specs_35);
                hlds__hlds_module__module_info_get_num_errors_2_p_0(*STATE_VARIABLE_HLDS_31, &NumErrors_27);
                mercury__io__get_exit_status_3_p_0(&ExitStatus_28);
                succeeded = (FoundModeError_20 == (MR_Integer) 0);
                if (succeeded)
                {
                  succeeded = (FoundUniqError_22 == (MR_Integer) 0);
                  if (succeeded)
                  {
                    succeeded = (FoundStratError_23 == (MR_Integer) 0);
                    if (succeeded)
                    {
                      succeeded = (FoundOISUError_24 == (MR_Integer) 0);
                      if (succeeded)
                      {
                        succeeded = (FoundTryError_25 == (MR_Integer) 0);
                        if (succeeded)
                        {
                          succeeded = (NumErrors_27 == (MR_Integer) 0);
                          if (succeeded)
                          {
                            if ((MaybeWorstSpecsSeverity_26 == (MR_Word) ((MR_Unsigned) 0U)))
                              succeeded = MR_TRUE;
                            else
                            {
                              MR_Word WorstSpecsSeverity_29 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeWorstSpecsSeverity_26, (MR_Integer) 0))));
                              MR_Word Var_152;

                              Var_152 = parse_tree__error_util__worst_severity_2_f_0(WorstSpecsSeverity_29, (MR_Integer) 1);
                              succeeded = (Var_152 == (MR_Integer) 1);
                            }
                            if (succeeded)
                              succeeded = (ExitStatus_28 == (MR_Integer) 0);
                          }
                        }
                      }
                    }
                  }
                }
                if (succeeded)
                  *FoundError_11 = (MR_Integer) 0;
                else
                  *FoundError_11 = (MR_Integer) 1;
              }
              break;
            case (MR_Integer) 1:
              {
                *FoundError_11 = (MR_Integer) 1;
                *STATE_VARIABLE_HLDS_31 = STATE_VARIABLE_HLDS_81_81;
                STATE_VARIABLE_DumpInfo_142_142 = STATE_VARIABLE_DumpInfo_86_86;
                *STATE_VARIABLE_Specs_35 = STATE_VARIABLE_Specs_82_82;
              }
              break;
          }
        }
        break;
      case (MR_Integer) 1:
        {
          *FoundError_11 = (MR_Integer) 1;
          *STATE_VARIABLE_HLDS_31 = STATE_VARIABLE_HLDS_40_40;
          STATE_VARIABLE_DumpInfo_142_142 = STATE_VARIABLE_DumpInfo_45_45;
          *STATE_VARIABLE_Specs_35 = STATE_VARIABLE_Specs_41_41;
        }
        break;
    }
    hlds__passes_aux__maybe_dump_hlds_7_p_0(*STATE_VARIABLE_HLDS_31, (MR_Integer) 99, (MR_String) "front_end", STATE_VARIABLE_DumpInfo_142_142, STATE_VARIABLE_DumpInfo_33);
  }
}

static void MR_CALL 
top_level__mercury_compile_front_end__maybe_proc_statistics_9_p_0(
  MR_Word Verbose_10,
  MR_Word Stats_11,
  MR_String Msg_12,
  MR_Word STATE_VARIABLE_HLDS_0_22,
  MR_Word * STATE_VARIABLE_HLDS_23,
  MR_Word STATE_VARIABLE_Specs_0_24,
  MR_Word * STATE_VARIABLE_Specs_25)
{
  {
    MR_bool succeeded;
    MR_Word Globals_16;
    MR_String StatsFileName_17;

    hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_HLDS_0_22, &Globals_16);
    hlds__hlds_error_util__maybe_write_out_errors_8_p_0(Verbose_10, Globals_16, STATE_VARIABLE_HLDS_0_22, STATE_VARIABLE_HLDS_23, STATE_VARIABLE_Specs_0_24, STATE_VARIABLE_Specs_25);
    libs__globals__lookup_string_option_3_p_0(Globals_16, (MR_Integer) 72, &StatsFileName_17);
    succeeded = (strcmp(StatsFileName_17, (MR_String) "") == 0);
    if (!(succeeded))
    {
      MR_Word StatsFileNameResult_18;

      mercury__io__open_append_4_p_0(StatsFileName_17, &StatsFileNameResult_18);
      if (((MR_tag((MR_Word) StatsFileNameResult_18)) == (MR_Integer) 1))
      {
        MR_Word StatsFileError_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), StatsFileNameResult_18, (MR_Integer) 0))));
        MR_String StatsFileErrorMsg_21;

        mercury__io__error_message_2_p_0(StatsFileError_20, &StatsFileErrorMsg_21);
        libs__file_util__maybe_write_string_4_p_0(Verbose_10, (MR_String) "% Cannot write proc statistics: ");
        libs__file_util__maybe_write_string_4_p_0(Verbose_10, StatsFileErrorMsg_21);
        libs__file_util__maybe_write_string_4_p_0(Verbose_10, (MR_String) "\n");
      }
      else
      {
        MR_Word StatsFileStream_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), StatsFileNameResult_18, (MR_Integer) 0))));

        libs__file_util__maybe_write_string_4_p_0(Verbose_10, (MR_String) "% Generating proc statistics...\n");
        hlds__hlds_statistics__write_proc_stats_for_module_5_p_0(StatsFileStream_19, Msg_12, *STATE_VARIABLE_HLDS_23);
        mercury__io__close_output_3_p_0(StatsFileStream_19);
        libs__file_util__maybe_write_string_4_p_0(Verbose_10, (MR_String) "% done.\n");
        libs__file_util__maybe_report_stats_3_p_0(Stats_11);
      }
    }
  }
}

static void MR_CALL 
top_level__mercury_compile_front_end__maybe_generate_style_warnings_8_p_0(
  MR_Word Verbose_9,
  MR_Word Stats_10,
  MR_Word STATE_VARIABLE_HLDS_0_23,
  MR_Word * STATE_VARIABLE_HLDS_24,
  MR_Word STATE_VARIABLE_Specs_0_25,
  MR_Word * STATE_VARIABLE_Specs_26)
{
  {
    MR_Word Globals_14;
    MR_Word NonContiguousDecls_15;
    MR_Word InconsistentPredOrderClauses_16;
    MR_Word InconsistentPredOrderForeignProcs_17;
    MR_Word InconsistentPredOrder_18;
    MR_Word MaybeTask_19;
    MR_Word STATE_VARIABLE_Specs_30_30;

    hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_HLDS_0_23, &Globals_14);
    hlds__hlds_error_util__maybe_write_out_errors_8_p_0(Verbose_9, Globals_14, STATE_VARIABLE_HLDS_0_23, STATE_VARIABLE_HLDS_24, STATE_VARIABLE_Specs_0_25, &STATE_VARIABLE_Specs_30_30);
    libs__globals__lookup_bool_option_3_p_0(Globals_14, (MR_Integer) 19, &NonContiguousDecls_15);
    libs__globals__lookup_bool_option_3_p_0(Globals_14, (MR_Integer) 17, &InconsistentPredOrderClauses_16);
    libs__globals__lookup_bool_option_3_p_0(Globals_14, (MR_Integer) 18, &InconsistentPredOrderForeignProcs_17);
    switch (InconsistentPredOrderForeignProcs_17) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (InconsistentPredOrderClauses_16) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            InconsistentPredOrder_18 = (MR_Word) ((MR_Unsigned) 0U);
            break;
          case (MR_Integer) 1:
            InconsistentPredOrder_18 = (MR_Word) (MR_mkword(MR_mktag(1), &top_level__mercury_compile_front_end_scalar_common_5[1]));
            break;
        }
        break;
      case (MR_Integer) 1:
        InconsistentPredOrder_18 = (MR_Word) (MR_mkword(MR_mktag(1), &top_level__mercury_compile_front_end_scalar_common_5[2]));
        break;
    }
    switch (NonContiguousDecls_15) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        if ((InconsistentPredOrder_18 == (MR_Word) ((MR_Unsigned) 0U)))
          MaybeTask_19 = (MR_Word) ((MR_Unsigned) 0U);
        else
        {
          MR_Word DefnKinds_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), InconsistentPredOrder_18, (MR_Integer) 0))));
          MR_Word Var_39;

          {
            Var_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_39, 0) = (MR_Box) ((MR_Unsigned) (DefnKinds_20));
          }
          {
            MaybeTask_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), MaybeTask_19, 0) = ((MR_Box) (Var_39));
          }
        }
        break;
      case (MR_Integer) 1:
        if ((InconsistentPredOrder_18 == (MR_Word) ((MR_Unsigned) 0U)))
          MaybeTask_19 = (MR_Word) (MR_mkword(MR_mktag(1), &top_level__mercury_compile_front_end_scalar_common_5[3]));
        else
        {
          MR_Word Var_37;
          MR_Word DefnKinds_47 = ((MR_Word) ((MR_hl_field(MR_mktag(1), InconsistentPredOrder_18, (MR_Integer) 0))));

          {
            Var_37 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), Var_37, 0) = (MR_Box) ((MR_Unsigned) (DefnKinds_47));
          }
          {
            MaybeTask_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), MaybeTask_19, 0) = ((MR_Box) (Var_37));
          }
        }
        break;
    }
    if ((MaybeTask_19 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Specs_26 = STATE_VARIABLE_Specs_30_30;
    else
    {
      MR_Word Task_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeTask_19, (MR_Integer) 0))));
      MR_Word StyleSpecs_22;

      libs__file_util__maybe_write_string_4_p_0(Verbose_9, (MR_String) "% Generating style warnings...\n");
      check_hlds__style_checks__generate_style_warnings_5_p_0(*STATE_VARIABLE_HLDS_24, Task_21, &StyleSpecs_22);
      *STATE_VARIABLE_Specs_26 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), StyleSpecs_22, STATE_VARIABLE_Specs_30_30);
      libs__file_util__maybe_write_string_4_p_0(Verbose_9, (MR_String) "% done.\n");
      libs__file_util__maybe_report_stats_3_p_0(Stats_10);
    }
  }
}

static void MR_CALL 
top_level__mercury_compile_front_end__process_try_goals_9_p_0(
  MR_Word Verbose_10,
  MR_Word Stats_11,
  MR_Word STATE_VARIABLE_HLDS_0_18,
  MR_Word * STATE_VARIABLE_HLDS_19,
  MR_Word * FoundError_13,
  MR_Word STATE_VARIABLE_Specs_0_20,
  MR_Word * STATE_VARIABLE_Specs_21)
{
  {
    MR_Word Globals_16;
    MR_Word TryExpandSpecs_17;
    MR_Word STATE_VARIABLE_HLDS_24_24;
    MR_Word STATE_VARIABLE_Specs_25_25;
    MR_Word STATE_VARIABLE_HLDS_29_29;
    MR_Word STATE_VARIABLE_Specs_31_31;

    hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_HLDS_0_18, &Globals_16);
    hlds__hlds_error_util__maybe_write_out_errors_8_p_0(Verbose_10, Globals_16, STATE_VARIABLE_HLDS_0_18, &STATE_VARIABLE_HLDS_24_24, STATE_VARIABLE_Specs_0_20, &STATE_VARIABLE_Specs_25_25);
    libs__file_util__maybe_write_string_4_p_0(Verbose_10, (MR_String) "% Transforming try goals...\n");
    check_hlds__try_expand__expand_try_goals_in_module_4_p_0(STATE_VARIABLE_HLDS_24_24, &STATE_VARIABLE_HLDS_29_29, (MR_Word) ((MR_Unsigned) 0U), &TryExpandSpecs_17);
    STATE_VARIABLE_Specs_31_31 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), TryExpandSpecs_17, STATE_VARIABLE_Specs_25_25);
    *FoundError_13 = parse_tree__error_util__contains_errors_2_f_0(Globals_16, TryExpandSpecs_17);
    hlds__hlds_error_util__maybe_write_out_errors_8_p_0(Verbose_10, Globals_16, STATE_VARIABLE_HLDS_29_29, STATE_VARIABLE_HLDS_19, STATE_VARIABLE_Specs_31_31, STATE_VARIABLE_Specs_21);
    switch (*FoundError_13) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          libs__file_util__maybe_write_string_4_p_0(Verbose_10, (MR_String) "% done.\n");
        }
        break;
      case (MR_Integer) 1:
        {
          libs__file_util__maybe_write_string_4_p_0(Verbose_10, (MR_String) "% Program contains error(s).\n");
        }
        break;
    }
    libs__file_util__maybe_report_stats_3_p_0(Stats_11);
  }
}

static MR_bool MR_CALL 
top_level__mercury_compile_front_end__check_oisu_pragmas_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = top_level__mercury_compile_front_end__type_ctor_is_defined_in_this_module_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
    return succeeded;
  }
}

static void MR_CALL 
top_level__mercury_compile_front_end__check_oisu_pragmas_9_p_0(
  MR_Word Verbose_10,
  MR_Word Stats_11,
  MR_Word STATE_VARIABLE_HLDS_0_24,
  MR_Word * STATE_VARIABLE_HLDS_25,
  MR_Word * FoundError_13,
  MR_Word STATE_VARIABLE_Specs_0_26,
  MR_Word * STATE_VARIABLE_Specs_27)
{
  {
    MR_bool succeeded;
    MR_Word OISUMap_16;
    MR_Word OISUPairs_17;
    MR_Word ModuleName_18;
    MR_Word ModuleOISUPairs_19;
    MR_Word Var_30;

    hlds__hlds_module__module_info_get_oisu_map_2_p_0(STATE_VARIABLE_HLDS_0_24, &OISUMap_16);
    mercury__map__to_assoc_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_oisu_preds_0), OISUMap_16, &OISUPairs_17);
    hlds__hlds_module__module_info_get_name_2_p_0(STATE_VARIABLE_HLDS_0_24, &ModuleName_18);
    {
      Var_30 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_30, 0) = ((MR_Box) (&top_level__mercury_compile_front_end_scalar_common_2[2]));
      MR_hl_field(MR_mktag(0), Var_30, 1) = ((MR_Box) (top_level__mercury_compile_front_end__check_oisu_pragmas_9_p_0_1));
      MR_hl_field(MR_mktag(0), Var_30, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_30, 3) = ((MR_Box) (ModuleName_18));
    }
    mercury__list__filter_3_p_0((MR_Word) (&top_level__mercury_compile_front_end_scalar_common_3[0]), Var_30, OISUPairs_17, &ModuleOISUPairs_19);
    if ((ModuleOISUPairs_19 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *FoundError_13 = (MR_Integer) 0;
      *STATE_VARIABLE_HLDS_25 = STATE_VARIABLE_HLDS_0_24;
      *STATE_VARIABLE_Specs_27 = STATE_VARIABLE_Specs_0_26;
    }
    else
    {
      MR_Word Globals_22;
      MR_Word OISUSpecs_23;
      MR_Word STATE_VARIABLE_HLDS_31_31;
      MR_Word STATE_VARIABLE_Specs_32_32;
      MR_Word STATE_VARIABLE_HLDS_36_36;
      MR_Word STATE_VARIABLE_Specs_37_37;

      hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_HLDS_0_24, &Globals_22);
      hlds__hlds_error_util__maybe_write_out_errors_8_p_0(Verbose_10, Globals_22, STATE_VARIABLE_HLDS_0_24, &STATE_VARIABLE_HLDS_31_31, STATE_VARIABLE_Specs_0_26, &STATE_VARIABLE_Specs_32_32);
      libs__file_util__maybe_write_string_4_p_0(Verbose_10, (MR_String) "% Checking oisu pragmas...\n");
      check_hlds__oisu_check__check_oisu_pragmas_for_module_4_p_0(ModuleOISUPairs_19, STATE_VARIABLE_HLDS_31_31, &STATE_VARIABLE_HLDS_36_36, &OISUSpecs_23);
      STATE_VARIABLE_Specs_37_37 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), OISUSpecs_23, STATE_VARIABLE_Specs_32_32);
      *FoundError_13 = parse_tree__error_util__contains_errors_2_f_0(Globals_22, OISUSpecs_23);
      hlds__hlds_error_util__maybe_write_out_errors_8_p_0(Verbose_10, Globals_22, STATE_VARIABLE_HLDS_36_36, STATE_VARIABLE_HLDS_25, STATE_VARIABLE_Specs_37_37, STATE_VARIABLE_Specs_27);
      switch (*FoundError_13) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            libs__file_util__maybe_write_string_4_p_0(Verbose_10, (MR_String) "% done.\n");
          }
          break;
        case (MR_Integer) 1:
          {
            libs__file_util__maybe_write_string_4_p_0(Verbose_10, (MR_String) "% Program contains oisu pragma error(s).\n");
          }
          break;
      }
      libs__file_util__maybe_report_stats_3_p_0(Stats_11);
    }
  }
}

static void MR_CALL 
top_level__mercury_compile_front_end__check_stratification_9_p_0(
  MR_Word Verbose_10,
  MR_Word Stats_11,
  MR_Word STATE_VARIABLE_HLDS_0_20,
  MR_Word * STATE_VARIABLE_HLDS_21,
  MR_Word * FoundError_13,
  MR_Word STATE_VARIABLE_Specs_0_22,
  MR_Word * STATE_VARIABLE_Specs_23)
{
  {
    MR_bool succeeded;
    MR_Word MustBeStratifiedPreds_16;
    MR_Word Globals_17;
    MR_Word Warn_18;

    hlds__hlds_module__module_info_get_must_be_stratified_preds_2_p_0(STATE_VARIABLE_HLDS_0_20, &MustBeStratifiedPreds_16);
    hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_HLDS_0_20, &Globals_17);
    libs__globals__lookup_bool_option_3_p_0(Globals_17, (MR_Integer) 22, &Warn_18);
    succeeded = mercury__set__is_non_empty_1_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), MustBeStratifiedPreds_16);
    if (!(succeeded))
      succeeded = (Warn_18 == (MR_Integer) 1);
    if (succeeded)
    {
      MR_Word StratifySpecs_19;
      MR_Word STATE_VARIABLE_HLDS_27_27;
      MR_Word STATE_VARIABLE_Specs_28_28;
      MR_Word STATE_VARIABLE_HLDS_32_32;
      MR_Word STATE_VARIABLE_Specs_33_33;

      hlds__hlds_error_util__maybe_write_out_errors_8_p_0(Verbose_10, Globals_17, STATE_VARIABLE_HLDS_0_20, &STATE_VARIABLE_HLDS_27_27, STATE_VARIABLE_Specs_0_22, &STATE_VARIABLE_Specs_28_28);
      libs__file_util__maybe_write_string_4_p_0(Verbose_10, (MR_String) "% Checking stratification...\n");
      check_hlds__stratify__check_module_for_stratification_3_p_0(STATE_VARIABLE_HLDS_27_27, &STATE_VARIABLE_HLDS_32_32, &StratifySpecs_19);
      STATE_VARIABLE_Specs_33_33 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), StratifySpecs_19, STATE_VARIABLE_Specs_28_28);
      *FoundError_13 = parse_tree__error_util__contains_errors_2_f_0(Globals_17, StratifySpecs_19);
      hlds__hlds_error_util__maybe_write_out_errors_8_p_0(Verbose_10, Globals_17, STATE_VARIABLE_HLDS_32_32, STATE_VARIABLE_HLDS_21, STATE_VARIABLE_Specs_33_33, STATE_VARIABLE_Specs_23);
      switch (*FoundError_13) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            libs__file_util__maybe_write_string_4_p_0(Verbose_10, (MR_String) "% done.\n");
          }
          break;
        case (MR_Integer) 1:
          {
            libs__file_util__maybe_write_string_4_p_0(Verbose_10, (MR_String) "% Program contains stratification error(s).\n");
          }
          break;
      }
      libs__file_util__maybe_report_stats_3_p_0(Stats_11);
    }
    else
    {
      *FoundError_13 = (MR_Integer) 0;
      *STATE_VARIABLE_Specs_23 = STATE_VARIABLE_Specs_0_22;
      *STATE_VARIABLE_HLDS_21 = STATE_VARIABLE_HLDS_0_20;
    }
  }
}

static void MR_CALL 
top_level__mercury_compile_front_end__check_unique_modes_9_p_0(
  MR_Word Verbose_10,
  MR_Word Stats_11,
  MR_Word STATE_VARIABLE_HLDS_0_18,
  MR_Word * STATE_VARIABLE_HLDS_19,
  MR_Word * FoundError_13,
  MR_Word STATE_VARIABLE_Specs_0_20,
  MR_Word * STATE_VARIABLE_Specs_21)
{
  {
    MR_Word Globals_16;
    MR_Word UniqueSpecs_17;
    MR_Word STATE_VARIABLE_HLDS_24_24;
    MR_Word STATE_VARIABLE_Specs_25_25;
    MR_Word STATE_VARIABLE_HLDS_29_29;
    MR_Word STATE_VARIABLE_Specs_30_30;

    hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_HLDS_0_18, &Globals_16);
    hlds__hlds_error_util__maybe_write_out_errors_8_p_0(Verbose_10, Globals_16, STATE_VARIABLE_HLDS_0_18, &STATE_VARIABLE_HLDS_24_24, STATE_VARIABLE_Specs_0_20, &STATE_VARIABLE_Specs_25_25);
    libs__file_util__maybe_write_string_4_p_0(Verbose_10, (MR_String) "% Checking for backtracking over unique modes...\n");
    check_hlds__unique_modes__unique_modes_check_module_3_p_0(STATE_VARIABLE_HLDS_24_24, &STATE_VARIABLE_HLDS_29_29, &UniqueSpecs_17);
    STATE_VARIABLE_Specs_30_30 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), UniqueSpecs_17, STATE_VARIABLE_Specs_25_25);
    *FoundError_13 = parse_tree__error_util__contains_errors_2_f_0(Globals_16, UniqueSpecs_17);
    hlds__hlds_error_util__maybe_write_out_errors_8_p_0(Verbose_10, Globals_16, STATE_VARIABLE_HLDS_29_29, STATE_VARIABLE_HLDS_19, STATE_VARIABLE_Specs_30_30, STATE_VARIABLE_Specs_21);
    switch (*FoundError_13) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          libs__file_util__maybe_write_string_4_p_0(Verbose_10, (MR_String) "% Program is unique-mode-correct.\n");
        }
        break;
      case (MR_Integer) 1:
        {
          libs__file_util__maybe_write_string_4_p_0(Verbose_10, (MR_String) "% Program contains unique mode error(s).\n");
        }
        break;
    }
    libs__file_util__maybe_report_stats_3_p_0(Stats_11);
  }
}

static void MR_CALL 
top_level__mercury_compile_front_end__check_determinism_8_p_0(
  MR_Word Verbose_9,
  MR_Word Stats_10,
  MR_Word STATE_VARIABLE_HLDS_0_17,
  MR_Word * STATE_VARIABLE_HLDS_18,
  MR_Word STATE_VARIABLE_Specs_0_19,
  MR_Word * STATE_VARIABLE_Specs_20)
{
  {
    MR_Word DetismSpecs_14;
    MR_Word Globals_15;
    MR_Word FoundError_16;
    MR_Word STATE_VARIABLE_HLDS_23_23;
    MR_Word STATE_VARIABLE_Specs_24_24;

    check_hlds__det_analysis__determinism_pass_3_p_0(STATE_VARIABLE_HLDS_0_17, &STATE_VARIABLE_HLDS_23_23, &DetismSpecs_14);
    STATE_VARIABLE_Specs_24_24 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), DetismSpecs_14, STATE_VARIABLE_Specs_0_19);
    hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_HLDS_23_23, &Globals_15);
    FoundError_16 = parse_tree__error_util__contains_errors_2_f_0(Globals_15, DetismSpecs_14);
    hlds__hlds_error_util__maybe_write_out_errors_8_p_0(Verbose_9, Globals_15, STATE_VARIABLE_HLDS_23_23, STATE_VARIABLE_HLDS_18, STATE_VARIABLE_Specs_24_24, STATE_VARIABLE_Specs_20);
    switch (FoundError_16) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          libs__file_util__maybe_write_string_4_p_0(Verbose_9, (MR_String) "% Program is determinism-correct.\n");
        }
        break;
      case (MR_Integer) 1:
        {
          libs__file_util__maybe_write_string_4_p_0(Verbose_9, (MR_String) "% Program contains determinism error(s).\n");
        }
        break;
    }
    libs__file_util__maybe_report_stats_3_p_0(Stats_10);
  }
}

static void MR_CALL 
top_level__mercury_compile_front_end__detect_cse_6_p_0(
  MR_Word Verbose_7,
  MR_Word Stats_8,
  MR_Word STATE_VARIABLE_HLDS_0_11,
  MR_Word * STATE_VARIABLE_HLDS_12)
{
  {
    libs__file_util__maybe_write_string_4_p_0(Verbose_7, (MR_String) "% Detecting common deconstructions...\n");
    check_hlds__cse_detection__detect_cse_in_module_2_p_0(STATE_VARIABLE_HLDS_0_11, STATE_VARIABLE_HLDS_12);
    libs__file_util__maybe_write_string_4_p_0(Verbose_7, (MR_String) "% done.\n");
    libs__file_util__maybe_report_stats_3_p_0(Stats_8);
  }
}

static void MR_CALL 
top_level__mercury_compile_front_end__detect_switches_6_p_0(
  MR_Word Verbose_7,
  MR_Word Stats_8,
  MR_Word STATE_VARIABLE_HLDS_0_11,
  MR_Word * STATE_VARIABLE_HLDS_12)
{
  {
    libs__file_util__maybe_write_string_4_p_0(Verbose_7, (MR_String) "% Detecting switches...\n");
    libs__file_util__maybe_flush_output_3_p_0(Verbose_7);
    check_hlds__switch_detection__detect_switches_in_module_2_p_0(STATE_VARIABLE_HLDS_0_11, STATE_VARIABLE_HLDS_12);
    libs__file_util__maybe_write_string_4_p_0(Verbose_7, (MR_String) "% done.\n");
    libs__file_util__maybe_report_stats_3_p_0(Stats_8);
  }
}

static void MR_CALL 
top_level__mercury_compile_front_end__maybe_compute_goal_modes_8_p_0(
  MR_Word Verbose_9,
  MR_Word Stats_10,
  MR_Word STATE_VARIABLE_HLDS_0_16,
  MR_Word * STATE_VARIABLE_HLDS_17,
  MR_Word STATE_VARIABLE_Specs_0_18,
  MR_Word * STATE_VARIABLE_Specs_19)
{
  {
    MR_Word Globals_14;
    MR_Word ComputeGoalModes_15;

    hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_HLDS_0_16, &Globals_14);
    libs__globals__lookup_bool_option_3_p_0(Globals_14, (MR_Integer) 180, &ComputeGoalModes_15);
    switch (ComputeGoalModes_15) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *STATE_VARIABLE_HLDS_17 = STATE_VARIABLE_HLDS_0_16;
          *STATE_VARIABLE_Specs_19 = STATE_VARIABLE_Specs_0_18;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word STATE_VARIABLE_HLDS_23_23;

          hlds__hlds_error_util__maybe_write_out_errors_8_p_0(Verbose_9, Globals_14, STATE_VARIABLE_HLDS_0_16, &STATE_VARIABLE_HLDS_23_23, STATE_VARIABLE_Specs_0_18, STATE_VARIABLE_Specs_19);
          libs__file_util__maybe_write_string_4_p_0(Verbose_9, (MR_String) "% Computing goal modes... ");
          hlds__goal_mode__compute_goal_modes_in_module_2_p_0(STATE_VARIABLE_HLDS_23_23, STATE_VARIABLE_HLDS_17);
          libs__file_util__maybe_write_string_4_p_0(Verbose_9, (MR_String) "% done.\n");
          libs__file_util__maybe_report_stats_3_p_0(Stats_10);
        }
        break;
    }
  }
}

static void MR_CALL 
top_level__mercury_compile_front_end__modecheck_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Tuple conv0_HeadVar__2_2;

    check_hlds__modes__modecheck_module_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__2_2);
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
  }
}

static void MR_CALL 
top_level__mercury_compile_front_end__modecheck_10_p_0(
  MR_Word Verbose_11,
  MR_Word Stats_12,
  MR_Word STATE_VARIABLE_HLDS_0_23,
  MR_Word * STATE_VARIABLE_HLDS_24,
  MR_Word * FoundModeError_14,
  MR_Word * SafeToContinue_15,
  MR_Word STATE_VARIABLE_Specs_0_25,
  MR_Word * STATE_VARIABLE_Specs_26)
{
  {
    MR_Word Globals_18;
    MR_Word BenchmarkModes_19;
    MR_Word ModeSpecs_21;
    MR_Word STATE_VARIABLE_HLDS_29_29;
    MR_Word STATE_VARIABLE_Specs_30_30;
    MR_Word STATE_VARIABLE_HLDS_40_40;
    MR_Word STATE_VARIABLE_Specs_48_48;

    hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_HLDS_0_23, &Globals_18);
    hlds__hlds_error_util__maybe_write_out_errors_8_p_0(Verbose_11, Globals_18, STATE_VARIABLE_HLDS_0_23, &STATE_VARIABLE_HLDS_29_29, STATE_VARIABLE_Specs_0_25, &STATE_VARIABLE_Specs_30_30);
    libs__file_util__maybe_write_string_4_p_0(Verbose_11, (MR_String) "% Mode-checking clauses...\n");
    libs__globals__lookup_bool_option_3_p_0(Globals_18, (MR_Integer) 181, &BenchmarkModes_19);
    switch (BenchmarkModes_19) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Tuple Var_35;

          check_hlds__modes__modecheck_module_2_p_0(STATE_VARIABLE_HLDS_29_29, &Var_35);
          STATE_VARIABLE_HLDS_40_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_35, (MR_Integer) 0))));
          *SafeToContinue_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_35, (MR_Integer) 1))));
          ModeSpecs_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_35, (MR_Integer) 2))));
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Integer Repeats_20;
          MR_Integer Time_22;
          MR_String Var_68;
          MR_String Var_78;
          MR_Tuple Var_39;
          MR_Box conv1_Var_39;

          libs__globals__lookup_int_option_3_p_0(Globals_18, (MR_Integer) 182, &Repeats_20);
          mercury__benchmarking__benchmark_det_5_p_0((MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&top_level__mercury_compile_front_end_scalar_common_2[0]), (MR_Word) (&top_level__mercury_compile_front_end_scalar_common_3[2]), ((MR_Box) (STATE_VARIABLE_HLDS_29_29)), &conv1_Var_39, Repeats_20, &Time_22);
          Var_39 = ((MR_Tuple) (conv1_Var_39));
          STATE_VARIABLE_HLDS_40_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_39, (MR_Integer) 0))));
          *SafeToContinue_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_39, (MR_Integer) 1))));
          ModeSpecs_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_39, (MR_Integer) 2))));
          mercury__io__write_string_3_p_0((MR_String) "BENCHMARK modecheck, ");
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&top_level__mercury_compile_front_end_scalar_common_5[0]), Repeats_20, &Var_68);
          mercury__io__write_string_3_p_0(Var_68);
          mercury__io__write_string_3_p_0((MR_String) " repeats: ");
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&top_level__mercury_compile_front_end_scalar_common_5[0]), Time_22, &Var_78);
          mercury__io__write_string_3_p_0(Var_78);
          mercury__io__write_string_3_p_0((MR_String) " ms\n");
        }
        break;
    }
    STATE_VARIABLE_Specs_48_48 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), ModeSpecs_21, STATE_VARIABLE_Specs_30_30);
    *FoundModeError_14 = parse_tree__error_util__contains_errors_2_f_0(Globals_18, ModeSpecs_21);
    switch (*FoundModeError_14) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          hlds__hlds_error_util__maybe_write_out_errors_8_p_0(Verbose_11, Globals_18, STATE_VARIABLE_HLDS_40_40, STATE_VARIABLE_HLDS_24, STATE_VARIABLE_Specs_48_48, STATE_VARIABLE_Specs_26);
          libs__file_util__maybe_write_string_4_p_0(Verbose_11, (MR_String) "% Program is mode-correct.\n");
        }
        break;
      case (MR_Integer) 1:
        {
          hlds__hlds_error_util__maybe_write_out_errors_8_p_0(Verbose_11, Globals_18, STATE_VARIABLE_HLDS_40_40, STATE_VARIABLE_HLDS_24, STATE_VARIABLE_Specs_48_48, STATE_VARIABLE_Specs_26);
          libs__file_util__maybe_write_string_4_p_0(Verbose_11, (MR_String) "% Program contains mode error(s).\n");
        }
        break;
    }
    libs__file_util__maybe_report_stats_3_p_0(Stats_12);
  }
}

static void MR_CALL 
top_level__mercury_compile_front_end__maybe_mode_constraints_6_p_0(
  MR_Word Verbose_7,
  MR_Word Stats_8,
  MR_Word STATE_VARIABLE_HLDS_0_13,
  MR_Word * STATE_VARIABLE_HLDS_14)
{
  {
    MR_Word Globals_11;
    MR_Word ModeConstraints_12;

    hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_HLDS_0_13, &Globals_11);
    libs__globals__lookup_bool_option_3_p_0(Globals_11, (MR_Integer) 177, &ModeConstraints_12);
    switch (ModeConstraints_12) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *STATE_VARIABLE_HLDS_14 = STATE_VARIABLE_HLDS_0_13;
        break;
      case (MR_Integer) 1:
        {
          libs__file_util__maybe_write_string_4_p_0(Verbose_7, (MR_String) "% Dumping mode constraints...\n");
          libs__file_util__maybe_flush_output_3_p_0(Verbose_7);
          top_level__mercury_compile_front_end__maybe_benchmark_modes__ho1_6_p_0((MR_String) "mode-constraints", STATE_VARIABLE_HLDS_0_13, STATE_VARIABLE_HLDS_14);
          libs__file_util__maybe_write_string_4_p_0(Verbose_7, (MR_String) "% done.\n");
          libs__file_util__maybe_report_stats_3_p_0(Stats_8);
        }
        break;
    }
  }
}

static void MR_CALL 
top_level__mercury_compile_front_end__maybe_benchmark_modes__ho1_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__2_2;

    check_hlds__mode_constraints__mc_process_module_4_p_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__2_2);
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
  }
}

static void MR_CALL 
top_level__mercury_compile_front_end__maybe_benchmark_modes__ho1_6_p_0(
  MR_String Stage_8,
  MR_Word STATE_VARIABLE_HLDS_0_15,
  MR_Word * STATE_VARIABLE_HLDS_16)
{
  {
    MR_Word Globals_11;
    MR_Word BenchmarkModes_12;

    hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_HLDS_0_15, &Globals_11);
    libs__globals__lookup_bool_option_3_p_0(Globals_11, (MR_Integer) 181, &BenchmarkModes_12);
    switch (BenchmarkModes_12) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        check_hlds__mode_constraints__mc_process_module_4_p_0(STATE_VARIABLE_HLDS_0_15, STATE_VARIABLE_HLDS_16);
        break;
      case (MR_Integer) 1:
        {
          MR_Integer Repeats_13;
          MR_Integer Time_14;
          MR_String Var_43;
          MR_String Var_52;
          MR_Box conv2_STATE_VARIABLE_HLDS_16;
          MR_Box conv1_STATE_VARIABLE_IO_31_31;

          libs__globals__lookup_int_option_3_p_0(Globals_11, (MR_Integer) 182, &Repeats_13);
          mercury__io__write_string_3_p_0(Stage_8);
          mercury__io__write_string_3_p_0((MR_String) " ");
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&top_level__mercury_compile_front_end_scalar_common_5[0]), Repeats_13, &Var_43);
          mercury__io__write_string_3_p_0(Var_43);
          mercury__io__write_string_3_p_0((MR_String) " ");
          mercury__benchmarking__benchmark_det_io_7_p_0((MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), (MR_Word) (&top_level__mercury_compile_front_end_scalar_common_3[1]), ((MR_Box) (STATE_VARIABLE_HLDS_0_15)), &conv2_STATE_VARIABLE_HLDS_16, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_31_31, Repeats_13, &Time_14);
          *STATE_VARIABLE_HLDS_16 = ((MR_Word) (conv2_STATE_VARIABLE_HLDS_16));
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&top_level__mercury_compile_front_end_scalar_common_5[0]), Time_14, &Var_52);
          mercury__io__write_string_3_p_0(Var_52);
          mercury__io__write_string_3_p_0((MR_String) " ms\n");
        }
        break;
    }
  }
}

static void MR_CALL 
top_level__mercury_compile_front_end__maybe_warn_about_unused_imports_8_p_0(
  MR_Word Verbose_9,
  MR_Word Stats_10,
  MR_Word STATE_VARIABLE_HLDS_0_17,
  MR_Word * STATE_VARIABLE_HLDS_18,
  MR_Word STATE_VARIABLE_Specs_0_19,
  MR_Word * STATE_VARIABLE_Specs_20)
{
  {
    MR_Word Globals_14;
    MR_Word WarnUnusedImports_15;

    hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_HLDS_0_17, &Globals_14);
    libs__globals__lookup_bool_option_3_p_0(Globals_14, (MR_Integer) 48, &WarnUnusedImports_15);
    switch (WarnUnusedImports_15) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *STATE_VARIABLE_HLDS_18 = STATE_VARIABLE_HLDS_0_17;
          *STATE_VARIABLE_Specs_20 = STATE_VARIABLE_Specs_0_19;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word UnusedImportSpecs_16;
          MR_Word STATE_VARIABLE_HLDS_24_24;
          MR_Word STATE_VARIABLE_Specs_25_25;
          MR_Word STATE_VARIABLE_Specs_29_29;

          hlds__hlds_error_util__maybe_write_out_errors_8_p_0(Verbose_9, Globals_14, STATE_VARIABLE_HLDS_0_17, &STATE_VARIABLE_HLDS_24_24, STATE_VARIABLE_Specs_0_19, &STATE_VARIABLE_Specs_25_25);
          libs__file_util__maybe_write_string_4_p_0(Verbose_9, (MR_String) "% Checking for unused imports...");
          check_hlds__unused_imports__warn_about_unused_imports_2_p_0(STATE_VARIABLE_HLDS_24_24, &UnusedImportSpecs_16);
          STATE_VARIABLE_Specs_29_29 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), UnusedImportSpecs_16, STATE_VARIABLE_Specs_25_25);
          hlds__hlds_error_util__maybe_write_out_errors_8_p_0(Verbose_9, Globals_14, STATE_VARIABLE_HLDS_24_24, STATE_VARIABLE_HLDS_18, STATE_VARIABLE_Specs_29_29, STATE_VARIABLE_Specs_20);
          libs__file_util__maybe_write_string_4_p_0(Verbose_9, (MR_String) " done.\n");
          libs__file_util__maybe_report_stats_3_p_0(Stats_10);
        }
        break;
    }
  }
}

static void MR_CALL 
top_level__mercury_compile_front_end__post_copy_polymorphism_pass_9_p_0(
  MR_Word Verbose_10,
  MR_Word Stats_11,
  MR_Word ExistsCastPredIds_12,
  MR_Word STATE_VARIABLE_HLDS_0_17,
  MR_Word * STATE_VARIABLE_HLDS_18,
  MR_Word STATE_VARIABLE_Specs_0_19,
  MR_Word * STATE_VARIABLE_Specs_20)
{
  {
    MR_Word Globals_16;
    MR_Word STATE_VARIABLE_HLDS_23_23;

    hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_HLDS_0_17, &Globals_16);
    hlds__hlds_error_util__maybe_write_out_errors_8_p_0(Verbose_10, Globals_16, STATE_VARIABLE_HLDS_0_17, &STATE_VARIABLE_HLDS_23_23, STATE_VARIABLE_Specs_0_19, STATE_VARIABLE_Specs_20);
    libs__file_util__maybe_write_string_4_p_0(Verbose_10, (MR_String) "% Post copy polymorphism...");
    check_hlds__polymorphism__post_copy_polymorphism_3_p_0(ExistsCastPredIds_12, STATE_VARIABLE_HLDS_23_23, STATE_VARIABLE_HLDS_18);
    libs__file_util__maybe_write_string_4_p_0(Verbose_10, (MR_String) " done.\n");
    libs__file_util__maybe_report_stats_3_p_0(Stats_11);
  }
}

static void MR_CALL 
top_level__mercury_compile_front_end__clause_to_proc_8_p_0(
  MR_Word Verbose_9,
  MR_Word Stats_10,
  MR_Word STATE_VARIABLE_HLDS_0_15,
  MR_Word * STATE_VARIABLE_HLDS_16,
  MR_Word STATE_VARIABLE_Specs_0_17,
  MR_Word * STATE_VARIABLE_Specs_18)
{
  {
    MR_Word Globals_14;
    MR_Word STATE_VARIABLE_HLDS_21_21;

    hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_HLDS_0_15, &Globals_14);
    hlds__hlds_error_util__maybe_write_out_errors_8_p_0(Verbose_9, Globals_14, STATE_VARIABLE_HLDS_0_15, &STATE_VARIABLE_HLDS_21_21, STATE_VARIABLE_Specs_0_17, STATE_VARIABLE_Specs_18);
    libs__file_util__maybe_write_string_4_p_0(Verbose_9, (MR_String) "% Copying clauses to procedures...");
    check_hlds__clause_to_proc__copy_clauses_to_proc_for_all_valid_procs_2_p_0(STATE_VARIABLE_HLDS_21_21, STATE_VARIABLE_HLDS_16);
    libs__file_util__maybe_write_string_4_p_0(Verbose_9, (MR_String) " done.\n");
    libs__file_util__maybe_report_stats_3_p_0(Stats_10);
  }
}

static void MR_CALL 
top_level__mercury_compile_front_end__maybe_polymorphism_10_p_0(
  MR_Word Verbose_11,
  MR_Word Stats_12,
  MR_Word * ExistsCastPredIds_13,
  MR_Word * SafeToContinue_14,
  MR_Word STATE_VARIABLE_HLDS_0_21,
  MR_Word * STATE_VARIABLE_HLDS_22,
  MR_Word STATE_VARIABLE_Specs_0_23,
  MR_Word * STATE_VARIABLE_Specs_24)
{
  {
    MR_Word Globals_18;
    MR_Word VeryVerbose_19;
    MR_Word PolySpecs_20;
    MR_Word STATE_VARIABLE_HLDS_27_27;
    MR_Word STATE_VARIABLE_Specs_28_28;
    MR_Word STATE_VARIABLE_HLDS_36_36;
    MR_Word STATE_VARIABLE_Specs_37_37;

    hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_HLDS_0_21, &Globals_18);
    hlds__hlds_error_util__maybe_write_out_errors_8_p_0(Verbose_11, Globals_18, STATE_VARIABLE_HLDS_0_21, &STATE_VARIABLE_HLDS_27_27, STATE_VARIABLE_Specs_0_23, &STATE_VARIABLE_Specs_28_28);
    libs__globals__lookup_bool_option_3_p_0(Globals_18, (MR_Integer) 61, &VeryVerbose_19);
    check_hlds__polymorphism__polymorphism_process_module_5_p_0(STATE_VARIABLE_HLDS_27_27, &STATE_VARIABLE_HLDS_36_36, ExistsCastPredIds_13, SafeToContinue_14, &PolySpecs_20);
    STATE_VARIABLE_Specs_37_37 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), PolySpecs_20, STATE_VARIABLE_Specs_28_28);
    switch (VeryVerbose_19) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          libs__file_util__maybe_write_string_4_p_0(Verbose_11, (MR_String) "% Transforming polymorphic unifications...");
          libs__file_util__maybe_flush_output_3_p_0(Verbose_11);
          libs__file_util__maybe_write_string_4_p_0(Verbose_11, (MR_String) " done.\n");
        }
        break;
      case (MR_Integer) 1:
        {
          libs__file_util__maybe_write_string_4_p_0(Verbose_11, (MR_String) "% Transforming polymorphic unifications...\n");
          libs__file_util__maybe_flush_output_3_p_0(Verbose_11);
          libs__file_util__maybe_write_string_4_p_0(Verbose_11, (MR_String) "% done.\n");
        }
        break;
    }
    hlds__hlds_error_util__maybe_write_out_errors_8_p_0(Verbose_11, Globals_18, STATE_VARIABLE_HLDS_36_36, STATE_VARIABLE_HLDS_22, STATE_VARIABLE_Specs_37_37, STATE_VARIABLE_Specs_24);
    libs__file_util__maybe_report_stats_3_p_0(Stats_12);
  }
}

static void MR_CALL 
top_level__mercury_compile_front_end__maybe_simplify_10_p_0_1(
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
    MR_Word conv2_STATE_VARIABLE_ModuleInfo_23;
    MR_Word conv1_STATE_VARIABLE_PredInfo_25;
    MR_Word conv0_STATE_VARIABLE_Specs_27;

    top_level__mercury_compile_front_end__simplify_pred_8_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_ModuleInfo_23, ((MR_Word) (wrapper_arg_4)), &conv1_STATE_VARIABLE_PredInfo_25, ((MR_Word) (wrapper_arg_6)), &conv0_STATE_VARIABLE_Specs_27);
    *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_ModuleInfo_23));
    *wrapper_arg_5 = ((MR_Box) (conv1_STATE_VARIABLE_PredInfo_25));
    *wrapper_arg_7 = ((MR_Box) (conv0_STATE_VARIABLE_Specs_27));
  }
}

void MR_CALL 
top_level__mercury_compile_front_end__maybe_simplify_10_p_0(
  MR_Word Warn_11,
  MR_Word SimplifyPass_12,
  MR_Word Verbose_13,
  MR_Word Stats_14,
  MR_Word STATE_VARIABLE_HLDS_0_31,
  MR_Word * STATE_VARIABLE_HLDS_32,
  MR_Word STATE_VARIABLE_Specs_0_33,
  MR_Word * STATE_VARIABLE_Specs_34)
{
  {
    MR_bool succeeded;
    MR_Word Globals_18;
    MR_Word SimpList_19;
    MR_Word SimplifyTasks0_20;
    MR_Word STATE_VARIABLE_SimpList_37_37;

    hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_HLDS_0_31, &Globals_18);
    check_hlds__simplify__simplify_tasks__find_simplify_tasks_3_p_0(Warn_11, Globals_18, &SimplifyTasks0_20);
    STATE_VARIABLE_SimpList_37_37 = check_hlds__simplify__simplify_tasks__simplify_tasks_to_list_1_f_0(SimplifyTasks0_20);
    switch (SimplifyPass_12) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          mercury__list__cons_3_p_0((MR_Word) (&check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__type_ctor_info_simplify_task_0), ((MR_Box) ((MR_Integer) 6)), STATE_VARIABLE_SimpList_37_37, &SimpList_19);
        }
        break;
      case (MR_Integer) 5:
        {
          MR_Word ConstProp_23;
          MR_Word DeepProf_24;
          MR_Word TSWProf_25;
          MR_Word TSCProf_26;
          MR_Word STATE_VARIABLE_SimpList_43_43;
          MR_Word STATE_VARIABLE_SimpList_47_47;

          libs__globals__lookup_bool_option_3_p_0(Globals_18, (MR_Integer) 386, &ConstProp_23);
          libs__globals__lookup_bool_option_3_p_0(Globals_18, (MR_Integer) 213, &DeepProf_24);
          libs__globals__lookup_bool_option_3_p_0(Globals_18, (MR_Integer) 230, &TSWProf_25);
          libs__globals__lookup_bool_option_3_p_0(Globals_18, (MR_Integer) 231, &TSCProf_26);
          succeeded = (ConstProp_23 == (MR_Integer) 1);
          if (succeeded)
          {
            succeeded = (DeepProf_24 == (MR_Integer) 0);
            if (succeeded)
            {
              succeeded = (TSWProf_25 == (MR_Integer) 0);
              if (succeeded)
                succeeded = (TSCProf_26 == (MR_Integer) 0);
            }
          }
          if (succeeded)
          {
            mercury__list__cons_3_p_0((MR_Word) (&check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__type_ctor_info_simplify_task_0), ((MR_Box) ((MR_Integer) 11)), STATE_VARIABLE_SimpList_37_37, &STATE_VARIABLE_SimpList_43_43);
          }
          else
          {
            STATE_VARIABLE_SimpList_43_43 = mercury__list__delete_all_2_f_0((MR_Word) (&check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__type_ctor_info_simplify_task_0), STATE_VARIABLE_SimpList_37_37, ((MR_Box) ((MR_Integer) 11)));
          }
          mercury__list__cons_3_p_0((MR_Word) (&check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__type_ctor_info_simplify_task_0), ((MR_Box) ((MR_Integer) 5)), STATE_VARIABLE_SimpList_43_43, &STATE_VARIABLE_SimpList_47_47);
          mercury__list__cons_3_p_0((MR_Word) (&check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__type_ctor_info_simplify_task_0), ((MR_Box) ((MR_Integer) 9)), STATE_VARIABLE_SimpList_47_47, &SimpList_19);
        }
        break;
      case (MR_Integer) 4:
        {
          mercury__list__cons_3_p_0((MR_Word) (&check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__type_ctor_info_simplify_task_0), ((MR_Box) ((MR_Integer) 5)), STATE_VARIABLE_SimpList_37_37, &SimpList_19);
        }
        break;
      case (MR_Integer) 1:
        {
          mercury__list__cons_3_p_0((MR_Word) (&check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__type_ctor_info_simplify_task_0), ((MR_Box) ((MR_Integer) 5)), STATE_VARIABLE_SimpList_37_37, &SimpList_19);
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word PreParSimplify_22;

          libs__globals__lookup_bool_option_3_p_0(Globals_18, (MR_Integer) 216, &PreParSimplify_22);
          switch (PreParSimplify_22) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              SimpList_19 = (MR_Word) ((MR_Unsigned) 0U);
              break;
            case (MR_Integer) 1:
              {
                mercury__list__cons_3_p_0((MR_Word) (&check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__type_ctor_info_simplify_task_0), ((MR_Box) ((MR_Integer) 5)), STATE_VARIABLE_SimpList_37_37, &SimpList_19);
              }
              break;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word PreProfSimplify_21;

          libs__globals__lookup_bool_option_3_p_0(Globals_18, (MR_Integer) 215, &PreProfSimplify_21);
          switch (PreProfSimplify_21) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              SimpList_19 = (MR_Word) ((MR_Unsigned) 0U);
              break;
            case (MR_Integer) 1:
              {
                mercury__list__cons_3_p_0((MR_Word) (&check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__type_ctor_info_simplify_task_0), ((MR_Box) ((MR_Integer) 5)), STATE_VARIABLE_SimpList_37_37, &SimpList_19);
              }
              break;
          }
        }
        break;
    }
    if ((SimpList_19 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_HLDS_32 = STATE_VARIABLE_HLDS_0_31;
      *STATE_VARIABLE_Specs_34 = STATE_VARIABLE_Specs_0_33;
    }
    else
    {
      MR_Word SimplifyTasks_29;
      MR_Word SimplifySpecs_30;
      MR_Word STATE_VARIABLE_HLDS_64_64;
      MR_Word STATE_VARIABLE_Specs_65_65;
      MR_Word Var_70;
      MR_Word STATE_VARIABLE_HLDS_71_71;
      MR_Word Var_74;

      hlds__hlds_error_util__maybe_write_out_errors_8_p_0(Verbose_13, Globals_18, STATE_VARIABLE_HLDS_0_31, &STATE_VARIABLE_HLDS_64_64, STATE_VARIABLE_Specs_0_33, &STATE_VARIABLE_Specs_65_65);
      libs__file_util__maybe_write_string_4_p_0(Verbose_13, (MR_String) "% Simplifying goals...\n");
      libs__file_util__maybe_flush_output_3_p_0(Verbose_13);
      SimplifyTasks_29 = check_hlds__simplify__simplify_tasks__list_to_simplify_tasks_1_f_0(SimpList_19);
      {
        Var_74 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_74, 0) = ((MR_Box) (&top_level__mercury_compile_front_end_scalar_common_4[0]));
        MR_hl_field(MR_mktag(0), Var_74, 1) = ((MR_Box) (top_level__mercury_compile_front_end__maybe_simplify_10_p_0_1));
        MR_hl_field(MR_mktag(0), Var_74, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_74, 3) = ((MR_Box) (SimplifyTasks_29));
      }
      Var_70 = (MR_Word) (Var_74);
      hlds__passes_aux__process_all_nonimported_preds_errors_7_p_0(Var_70, STATE_VARIABLE_HLDS_64_64, &STATE_VARIABLE_HLDS_71_71, (MR_Word) ((MR_Unsigned) 0U), &SimplifySpecs_30);
      switch (SimplifyPass_12) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word STATE_VARIABLE_Specs_75_75;

            STATE_VARIABLE_Specs_75_75 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), SimplifySpecs_30, STATE_VARIABLE_Specs_65_65);
            hlds__hlds_error_util__maybe_write_out_errors_8_p_0(Verbose_13, Globals_18, STATE_VARIABLE_HLDS_71_71, STATE_VARIABLE_HLDS_32, STATE_VARIABLE_Specs_75_75, STATE_VARIABLE_Specs_34);
          }
          break;
        case (MR_Integer) 5:
          {
            *STATE_VARIABLE_HLDS_32 = STATE_VARIABLE_HLDS_71_71;
            *STATE_VARIABLE_Specs_34 = STATE_VARIABLE_Specs_65_65;
          }
          break;
        case (MR_Integer) 4:
          {
            *STATE_VARIABLE_HLDS_32 = STATE_VARIABLE_HLDS_71_71;
            *STATE_VARIABLE_Specs_34 = STATE_VARIABLE_Specs_65_65;
          }
          break;
        case (MR_Integer) 1:
          {
            *STATE_VARIABLE_HLDS_32 = STATE_VARIABLE_HLDS_71_71;
            *STATE_VARIABLE_Specs_34 = STATE_VARIABLE_Specs_65_65;
          }
          break;
        case (MR_Integer) 3:
          {
            *STATE_VARIABLE_HLDS_32 = STATE_VARIABLE_HLDS_71_71;
            *STATE_VARIABLE_Specs_34 = STATE_VARIABLE_Specs_65_65;
          }
          break;
        case (MR_Integer) 2:
          {
            *STATE_VARIABLE_HLDS_32 = STATE_VARIABLE_HLDS_71_71;
            *STATE_VARIABLE_Specs_34 = STATE_VARIABLE_Specs_65_65;
          }
          break;
      }
      libs__file_util__maybe_write_string_4_p_0(Verbose_13, (MR_String) "% done.\n");
      libs__file_util__maybe_report_stats_3_p_0(Stats_14);
    }
  }
}

static MR_bool MR_CALL 
top_level__mercury_compile_front_end____Unify____simplify_pass_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = top_level__mercury_compile_front_end____Unify____simplify_pass_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
top_level__mercury_compile_front_end____Compare____simplify_pass_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    top_level__mercury_compile_front_end____Compare____simplify_pass_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
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
