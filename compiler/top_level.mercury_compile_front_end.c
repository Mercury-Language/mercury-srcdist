/*
** Automatically generated from `mercury_compile_front_end.m'
** by the Mercury compiler,
** version rotd-2017-04-20
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


/* :- module top_level.mercury_compile_front_end. */
/* :- implementation. */

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
#include "check_hlds.check_typeclass.mih"
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
#include "check_hlds.prop_mode_constraints.mih"
#include "check_hlds.purity.mih"
#include "check_hlds.simplify.mih"
#include "check_hlds.stratify.mih"
#include "check_hlds.style_checks.mih"
#include "check_hlds.switch_detection.mih"
#include "check_hlds.try_expand.mih"
#include "check_hlds.type_constraints.mih"
#include "check_hlds.typecheck.mih"
#include "check_hlds.unify_proc.mih"
#include "check_hlds.unique_modes.mih"
#include "check_hlds.unused_imports.mih"
#include "hlds.const_struct.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
#include "hlds.hlds_error_util.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.hlds_statistics.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.make_hlds.mih"
#include "hlds.make_tags.mih"
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

static MR_bool MR_CALL 
top_level__mercury_compile_front_end____Unify____simplify_pass_0_0_10001(
  MR_Box top_level__mercury_compile_front_end__wrapper_arg_1,
  MR_Box top_level__mercury_compile_front_end__wrapper_arg_2);

static void MR_CALL 
top_level__mercury_compile_front_end____Compare____simplify_pass_0_0_10001(
  MR_Box * top_level__mercury_compile_front_end__wrapper_arg_1,
  MR_Box top_level__mercury_compile_front_end__wrapper_arg_2,
  MR_Box top_level__mercury_compile_front_end__wrapper_arg_3);

static void MR_CALL 
top_level__mercury_compile_front_end__maybe_benchmark_modes__ho1_6_p_0_1(
  MR_Box top_level__mercury_compile_front_end__closure_arg,
  MR_Box top_level__mercury_compile_front_end__wrapper_arg_1,
  MR_Box * top_level__mercury_compile_front_end__wrapper_arg_2,
  MR_Box top_level__mercury_compile_front_end__wrapper_arg_3,
  MR_Box * top_level__mercury_compile_front_end__wrapper_arg_4);

static void MR_CALL 
top_level__mercury_compile_front_end__maybe_benchmark_modes__ho1_6_p_0(
  MR_String top_level__mercury_compile_front_end__Stage_8,
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_15,
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_16);

static void MR_CALL 
top_level__mercury_compile_front_end__maybe_proc_statistics_9_p_0(
  MR_Word top_level__mercury_compile_front_end__Verbose_10,
  MR_Word top_level__mercury_compile_front_end__Stats_11,
  MR_String top_level__mercury_compile_front_end__Msg_12,
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_22,
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_23,
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_24,
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_25);

static void MR_CALL 
top_level__mercury_compile_front_end__maybe_generate_style_warnings_8_p_0(
  MR_Word top_level__mercury_compile_front_end__Verbose_9,
  MR_Word top_level__mercury_compile_front_end__Stats_10,
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_23,
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_24,
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_25,
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_26);

static void MR_CALL 
top_level__mercury_compile_front_end__simplify_pred_8_p_0(
  MR_Word top_level__mercury_compile_front_end__SimplifyTasks0_9,
  MR_Word top_level__mercury_compile_front_end__PredId_10,
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_ModuleInfo_0_22,
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_ModuleInfo_23,
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_PredInfo_0_24,
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_PredInfo_25,
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_26,
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_27);

static void MR_CALL 
top_level__mercury_compile_front_end__process_try_goals_9_p_0(
  MR_Word top_level__mercury_compile_front_end__Verbose_10,
  MR_Word top_level__mercury_compile_front_end__Stats_11,
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_18,
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_19,
  MR_Word * top_level__mercury_compile_front_end__FoundError_13,
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_20,
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_21);

static MR_bool MR_CALL 
top_level__mercury_compile_front_end__type_ctor_is_defined_in_this_module_2_p_0(
  MR_Word top_level__mercury_compile_front_end__ModuleName_3,
  MR_Word top_level__mercury_compile_front_end__HeadVar__2_2);

static MR_bool MR_CALL 
top_level__mercury_compile_front_end__check_oisu_pragmas_9_p_0_1(
  MR_Box top_level__mercury_compile_front_end__closure_arg,
  MR_Box top_level__mercury_compile_front_end__wrapper_arg_1);

static void MR_CALL 
top_level__mercury_compile_front_end__check_oisu_pragmas_9_p_0(
  MR_Word top_level__mercury_compile_front_end__Verbose_10,
  MR_Word top_level__mercury_compile_front_end__Stats_11,
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_24,
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_25,
  MR_Word * top_level__mercury_compile_front_end__FoundError_13,
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_26,
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_27);

static void MR_CALL 
top_level__mercury_compile_front_end__check_stratification_9_p_0(
  MR_Word top_level__mercury_compile_front_end__Verbose_10,
  MR_Word top_level__mercury_compile_front_end__Stats_11,
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_20,
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_21,
  MR_Word * top_level__mercury_compile_front_end__FoundError_13,
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_22,
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_23);

static void MR_CALL 
top_level__mercury_compile_front_end__check_unique_modes_9_p_0(
  MR_Word top_level__mercury_compile_front_end__Verbose_10,
  MR_Word top_level__mercury_compile_front_end__Stats_11,
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_18,
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_19,
  MR_Word * top_level__mercury_compile_front_end__FoundError_13,
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_20,
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_21);

static void MR_CALL 
top_level__mercury_compile_front_end__check_determinism_8_p_0(
  MR_Word top_level__mercury_compile_front_end__Verbose_9,
  MR_Word top_level__mercury_compile_front_end__Stats_10,
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_17,
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_18,
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_19,
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_20);

static void MR_CALL 
top_level__mercury_compile_front_end__detect_cse_6_p_0(
  MR_Word top_level__mercury_compile_front_end__Verbose_7,
  MR_Word top_level__mercury_compile_front_end__Stats_8,
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_11,
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_12);

static void MR_CALL 
top_level__mercury_compile_front_end__detect_switches_6_p_0(
  MR_Word top_level__mercury_compile_front_end__Verbose_7,
  MR_Word top_level__mercury_compile_front_end__Stats_8,
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_11,
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_12);

static void MR_CALL 
top_level__mercury_compile_front_end__modecheck_10_p_0_1(
  MR_Box top_level__mercury_compile_front_end__closure_arg,
  MR_Box top_level__mercury_compile_front_end__wrapper_arg_1,
  MR_Box * top_level__mercury_compile_front_end__wrapper_arg_2);

static void MR_CALL 
top_level__mercury_compile_front_end__modecheck_10_p_0(
  MR_Word top_level__mercury_compile_front_end__Verbose_11,
  MR_Word top_level__mercury_compile_front_end__Stats_12,
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_23,
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_24,
  MR_Word * top_level__mercury_compile_front_end__FoundModeError_14,
  MR_Word * top_level__mercury_compile_front_end__SafeToContinue_15,
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_25,
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_26);

static void MR_CALL 
top_level__mercury_compile_front_end__maybe_mode_constraints_6_p_0(
  MR_Word top_level__mercury_compile_front_end__Verbose_7,
  MR_Word top_level__mercury_compile_front_end__Stats_8,
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_13,
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_14);

static void MR_CALL 
top_level__mercury_compile_front_end__maybe_warn_about_unused_imports_8_p_0(
  MR_Word top_level__mercury_compile_front_end__Verbose_9,
  MR_Word top_level__mercury_compile_front_end__Stats_10,
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_17,
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_18,
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_19,
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_20);

static void MR_CALL 
top_level__mercury_compile_front_end__maybe_polymorphism_9_p_0(
  MR_Word top_level__mercury_compile_front_end__Verbose_10,
  MR_Word top_level__mercury_compile_front_end__Stats_11,
  MR_Word * top_level__mercury_compile_front_end__SafeToContinue_12,
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_19,
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_20,
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_21,
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_22);

static void MR_CALL 
top_level__mercury_compile_front_end__subst_implementation_defined_literals_8_p_0(
  MR_Word top_level__mercury_compile_front_end__Verbose_9,
  MR_Word top_level__mercury_compile_front_end__Stats_10,
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_15,
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_16,
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_17,
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_18);

static void MR_CALL 
top_level__mercury_compile_front_end__puritycheck_8_p_0(
  MR_Word top_level__mercury_compile_front_end__Verbose_9,
  MR_Word top_level__mercury_compile_front_end__Stats_10,
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_17,
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_18,
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_19,
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_20);

static void MR_CALL 
top_level__mercury_compile_front_end__frontend_pass_by_phases_9_p_0(
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_27,
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_28,
  MR_Word * top_level__mercury_compile_front_end__FoundError_11,
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_0_29,
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_30,
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_31,
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_32);

static void MR_CALL 
top_level__mercury_compile_front_end__maybe_write_initial_optfile_9_p_0(
  MR_Word top_level__mercury_compile_front_end__MakeOptInt_10,
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_36,
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_37,
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_0_38,
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_39,
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_40,
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_41);

static void MR_CALL 
top_level__mercury_compile_front_end__frontend_pass_after_typeclass_check_12_p_0(
  MR_Word top_level__mercury_compile_front_end__OpModeAugment_13,
  MR_Word top_level__mercury_compile_front_end__FoundUndefModeError_14,
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_FoundError_0_39,
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_FoundError_40,
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_41,
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_42,
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_0_43,
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_44,
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_45,
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_46);

static void MR_CALL 
top_level__mercury_compile_front_end__maybe_simplify_10_p_0_1(
  MR_Box top_level__mercury_compile_front_end__closure_arg,
  MR_Box top_level__mercury_compile_front_end__wrapper_arg_1,
  MR_Box top_level__mercury_compile_front_end__wrapper_arg_2,
  MR_Box * top_level__mercury_compile_front_end__wrapper_arg_3,
  MR_Box top_level__mercury_compile_front_end__wrapper_arg_4,
  MR_Box * top_level__mercury_compile_front_end__wrapper_arg_5,
  MR_Box top_level__mercury_compile_front_end__wrapper_arg_6,
  MR_Box * top_level__mercury_compile_front_end__wrapper_arg_7);


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
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&top_level__mercury_compile_front_end____vpti_tuple_3__plain_hlds__hlds_module__type_ctor_info_module_info_0__plain_parse_tree__maybe_error__type_ctor_info_maybe_safe_to_continue_0__plain_list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
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
    ((MR_Box) (&top_level__mercury_compile_front_end_scalar_common_2[1])),
    ((MR_Box) (top_level__mercury_compile_front_end__modecheck_10_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&top_level__mercury_compile_front_end_scalar_common_6[0])),
    ((MR_Box) (top_level__mercury_compile_front_end__maybe_benchmark_modes__ho1_6_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box top_level__mercury_compile_front_end_scalar_common_4[1][11] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
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
    ((MR_Box) (((MR_Integer) 0 | (((((MR_Integer) 0 << (MR_Integer) 1)) | (((((MR_Integer) 0 << (MR_Integer) 2)) | (((((MR_Integer) 0 << (MR_Integer) 3)) | (((MR_Integer) 0 << (MR_Integer) 4)))))))))))
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
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box top_level__mercury_compile_front_end_scalar_common_6[1][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
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
    (MR_PseudoTypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0
  }
};

static const MR_FA_TypeInfo_Struct1 top_level__mercury_compile_front_end__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0
  }
};

static const MR_VA_PseudoTypeInfo_Struct3 top_level__mercury_compile_front_end____vpti_tuple_3__plain_hlds__hlds_module__type_ctor_info_module_info_0__plain_parse_tree__maybe_error__type_ctor_info_maybe_safe_to_continue_0__plain_list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__builtin__builtin__type_ctor_info_tuple_0,
  (MR_Integer) 3,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0,
    (MR_PseudoTypeInfo) &parse_tree__maybe_error__parse_tree__maybe_error__type_ctor_info_maybe_safe_to_continue_0,
    (MR_PseudoTypeInfo) &top_level__mercury_compile_front_end__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 top_level__mercury_compile_front_end__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_hlds__hlds_module__type_ctor_info_oisu_preds_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0,
    (MR_PseudoTypeInfo) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_oisu_preds_0
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
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
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

static MR_bool MR_CALL 
top_level__mercury_compile_front_end____Unify____simplify_pass_0_0_10001(
  MR_Box top_level__mercury_compile_front_end__wrapper_arg_1,
  MR_Box top_level__mercury_compile_front_end__wrapper_arg_2)
{
  {
    MR_bool top_level__mercury_compile_front_end__succeeded;

    {
      top_level__mercury_compile_front_end__succeeded = top_level__mercury_compile_front_end____Unify____simplify_pass_0_0(((MR_Word) top_level__mercury_compile_front_end__wrapper_arg_1), ((MR_Word) top_level__mercury_compile_front_end__wrapper_arg_2));
    }
    return top_level__mercury_compile_front_end__succeeded;
  }
}

static void MR_CALL 
top_level__mercury_compile_front_end____Compare____simplify_pass_0_0_10001(
  MR_Box * top_level__mercury_compile_front_end__wrapper_arg_1,
  MR_Box top_level__mercury_compile_front_end__wrapper_arg_2,
  MR_Box top_level__mercury_compile_front_end__wrapper_arg_3)
{
  {
    MR_Word top_level__mercury_compile_front_end__conv0_HeadVar__1_1;

    {
      top_level__mercury_compile_front_end____Compare____simplify_pass_0_0(&top_level__mercury_compile_front_end__conv0_HeadVar__1_1, ((MR_Word) top_level__mercury_compile_front_end__wrapper_arg_2), ((MR_Word) top_level__mercury_compile_front_end__wrapper_arg_3));
    }
    *top_level__mercury_compile_front_end__wrapper_arg_1 = ((MR_Box) (top_level__mercury_compile_front_end__conv0_HeadVar__1_1));
  }
}

static void MR_CALL 
top_level__mercury_compile_front_end__maybe_benchmark_modes__ho1_6_p_0_1(
  MR_Box top_level__mercury_compile_front_end__closure_arg,
  MR_Box top_level__mercury_compile_front_end__wrapper_arg_1,
  MR_Box * top_level__mercury_compile_front_end__wrapper_arg_2,
  MR_Box top_level__mercury_compile_front_end__wrapper_arg_3,
  MR_Box * top_level__mercury_compile_front_end__wrapper_arg_4)
{
  {
    MR_Box top_level__mercury_compile_front_end__closure = top_level__mercury_compile_front_end__closure_arg;
    MR_Word top_level__mercury_compile_front_end__conv0_HeadVar__2_2;

    {
      check_hlds__mode_constraints__mc_process_module_4_p_0(((MR_Word) top_level__mercury_compile_front_end__wrapper_arg_1), &top_level__mercury_compile_front_end__conv0_HeadVar__2_2);
    }
    *top_level__mercury_compile_front_end__wrapper_arg_2 = ((MR_Box) (top_level__mercury_compile_front_end__conv0_HeadVar__2_2));
  }
}

static void MR_CALL 
top_level__mercury_compile_front_end__maybe_benchmark_modes__ho1_6_p_0(
  MR_String top_level__mercury_compile_front_end__Stage_8,
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_15,
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_16)
{
  {
    MR_bool top_level__mercury_compile_front_end__succeeded;
    MR_Word top_level__mercury_compile_front_end__Globals_11;
    MR_Word top_level__mercury_compile_front_end__BenchmarkModes_12;

    {
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_15, &top_level__mercury_compile_front_end__Globals_11);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_front_end__Globals_11, (MR_Integer) 172, &top_level__mercury_compile_front_end__BenchmarkModes_12);
    }
    switch (top_level__mercury_compile_front_end__BenchmarkModes_12) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          check_hlds__mode_constraints__mc_process_module_4_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_15, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_16);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Integer top_level__mercury_compile_front_end__Repeats_13;
          MR_Integer top_level__mercury_compile_front_end__Time_14;
          MR_String top_level__mercury_compile_front_end__V_43_43;
          MR_Word top_level__mercury_compile_front_end__V_49_49;
          MR_String top_level__mercury_compile_front_end__V_52_52;
          MR_Box top_level__mercury_compile_front_end__conv2_STATE_VARIABLE_HLDS_16;
          MR_Box top_level__mercury_compile_front_end__conv1_STATE_VARIABLE_IO_31_31;

          {
            libs__globals__lookup_int_option_3_p_0(top_level__mercury_compile_front_end__Globals_11, (MR_Integer) 173, &top_level__mercury_compile_front_end__Repeats_13);
          }
          {
            mercury__io__write_string_3_p_0(top_level__mercury_compile_front_end__Stage_8);
          }
          {
            mercury__io__write_string_3_p_0((MR_String) " ");
          }
          top_level__mercury_compile_front_end__V_49_49 = (MR_Word) &top_level__mercury_compile_front_end_scalar_common_5[0];
          {
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(top_level__mercury_compile_front_end__V_49_49, top_level__mercury_compile_front_end__Repeats_13, &top_level__mercury_compile_front_end__V_43_43);
          }
          {
            mercury__io__write_string_3_p_0(top_level__mercury_compile_front_end__V_43_43);
          }
          {
            mercury__io__write_string_3_p_0((MR_String) " ");
          }
          {
            mercury__benchmarking__benchmark_det_io_7_p_0((MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, (MR_Word) &top_level__mercury_compile_front_end_scalar_common_3[2], ((MR_Box) (top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_15)), &top_level__mercury_compile_front_end__conv2_STATE_VARIABLE_HLDS_16, ((MR_Box) ((MR_Integer) 0)), &top_level__mercury_compile_front_end__conv1_STATE_VARIABLE_IO_31_31, top_level__mercury_compile_front_end__Repeats_13, &top_level__mercury_compile_front_end__Time_14);
          }
          *top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_16 = ((MR_Word) top_level__mercury_compile_front_end__conv2_STATE_VARIABLE_HLDS_16);
          {
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(top_level__mercury_compile_front_end__V_49_49, top_level__mercury_compile_front_end__Time_14, &top_level__mercury_compile_front_end__V_52_52);
          }
          {
            mercury__io__write_string_3_p_0(top_level__mercury_compile_front_end__V_52_52);
          }
          {
            mercury__io__write_string_3_p_0((MR_String) " ms\n");
          }
        }
        break;
    }
  }
}

void MR_CALL 
top_level__mercury_compile_front_end____Compare____simplify_pass_0_0(
  MR_Word * top_level__mercury_compile_front_end__HeadVar__1_1,
  MR_Word top_level__mercury_compile_front_end__HeadVar__2_2,
  MR_Word top_level__mercury_compile_front_end__HeadVar__3_3)
{
  {
    MR_bool top_level__mercury_compile_front_end__succeeded;
    MR_Integer top_level__mercury_compile_front_end__Cast_HeadVar1_4 = (MR_Integer) top_level__mercury_compile_front_end__HeadVar__2_2;
    MR_Integer top_level__mercury_compile_front_end__Cast_HeadVar2_5 = (MR_Integer) top_level__mercury_compile_front_end__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(top_level__mercury_compile_front_end__HeadVar__1_1, top_level__mercury_compile_front_end__Cast_HeadVar1_4, top_level__mercury_compile_front_end__Cast_HeadVar2_5);
    }
  }
}

MR_bool MR_CALL 
top_level__mercury_compile_front_end____Unify____simplify_pass_0_0(
  MR_Word top_level__mercury_compile_front_end__HeadVar__2_1,
  MR_Word top_level__mercury_compile_front_end__HeadVar__2_2)
{
  {
    MR_bool top_level__mercury_compile_front_end__succeeded = (top_level__mercury_compile_front_end__HeadVar__2_1 == top_level__mercury_compile_front_end__HeadVar__2_2);

    return top_level__mercury_compile_front_end__succeeded;
  }
}

static void MR_CALL 
top_level__mercury_compile_front_end__maybe_proc_statistics_9_p_0(
  MR_Word top_level__mercury_compile_front_end__Verbose_10,
  MR_Word top_level__mercury_compile_front_end__Stats_11,
  MR_String top_level__mercury_compile_front_end__Msg_12,
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_22,
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_23,
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_24,
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_25)
{
  {
    MR_bool top_level__mercury_compile_front_end__succeeded;
    MR_Word top_level__mercury_compile_front_end__Globals_16;
    MR_String top_level__mercury_compile_front_end__StatsFileName_17;

    {
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_22, &top_level__mercury_compile_front_end__Globals_16);
    }
    {
      hlds__hlds_error_util__maybe_write_out_errors_8_p_0(top_level__mercury_compile_front_end__Verbose_10, top_level__mercury_compile_front_end__Globals_16, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_22, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_23, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_24, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_25);
    }
    {
      libs__globals__lookup_string_option_3_p_0(top_level__mercury_compile_front_end__Globals_16, (MR_Integer) 68, &top_level__mercury_compile_front_end__StatsFileName_17);
    }
    top_level__mercury_compile_front_end__succeeded = (strcmp(top_level__mercury_compile_front_end__StatsFileName_17, (MR_String) "") == 0);
    if (top_level__mercury_compile_front_end__succeeded)
      {
      }
    else
      {
        MR_Word top_level__mercury_compile_front_end__StatsFileNameResult_18;

        {
          mercury__io__open_append_4_p_0(top_level__mercury_compile_front_end__StatsFileName_17, &top_level__mercury_compile_front_end__StatsFileNameResult_18);
        }
        if (((MR_tag((MR_Word) top_level__mercury_compile_front_end__StatsFileNameResult_18)) == (MR_mktag((MR_Integer) 1))))
          {
            MR_Word top_level__mercury_compile_front_end__StatsFileError_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), top_level__mercury_compile_front_end__StatsFileNameResult_18, (MR_Integer) 0)));
            MR_String top_level__mercury_compile_front_end__StatsFileErrorMsg_21;

            {
              mercury__io__error_message_2_p_0(top_level__mercury_compile_front_end__StatsFileError_20, &top_level__mercury_compile_front_end__StatsFileErrorMsg_21);
            }
            {
              libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_front_end__Verbose_10, (MR_String) "% Cannot write proc statistics: ");
            }
            {
              libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_front_end__Verbose_10, top_level__mercury_compile_front_end__StatsFileErrorMsg_21);
            }
            {
              libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_front_end__Verbose_10, (MR_String) "\n");
            }
          }
        else
          {
            MR_Word top_level__mercury_compile_front_end__StatsFileStream_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_front_end__StatsFileNameResult_18, (MR_Integer) 0)));

            {
              libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_front_end__Verbose_10, (MR_String) "% Generating proc statistics...\n");
            }
            {
              hlds__hlds_statistics__write_proc_stats_for_module_5_p_0(top_level__mercury_compile_front_end__StatsFileStream_19, top_level__mercury_compile_front_end__Msg_12, *top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_23);
            }
            {
              mercury__io__close_output_3_p_0(top_level__mercury_compile_front_end__StatsFileStream_19);
            }
            {
              libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_front_end__Verbose_10, (MR_String) "% done.\n");
            }
            {
              libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_front_end__Stats_11);
            }
          }
      }
  }
}

static void MR_CALL 
top_level__mercury_compile_front_end__maybe_generate_style_warnings_8_p_0(
  MR_Word top_level__mercury_compile_front_end__Verbose_9,
  MR_Word top_level__mercury_compile_front_end__Stats_10,
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_23,
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_24,
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_25,
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_26)
{
  {
    MR_bool top_level__mercury_compile_front_end__succeeded;
    MR_Word top_level__mercury_compile_front_end__Globals_14;
    MR_Word top_level__mercury_compile_front_end__NonContiguousDecls_15;
    MR_Word top_level__mercury_compile_front_end__InconsistentPredOrderClauses_16;
    MR_Word top_level__mercury_compile_front_end__InconsistentPredOrderForeignProcs_17;
    MR_Word top_level__mercury_compile_front_end__InconsistentPredOrder_18;
    MR_Word top_level__mercury_compile_front_end__MaybeTask_19;
    MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_30_30;

    {
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_23, &top_level__mercury_compile_front_end__Globals_14);
    }
    {
      hlds__hlds_error_util__maybe_write_out_errors_8_p_0(top_level__mercury_compile_front_end__Verbose_9, top_level__mercury_compile_front_end__Globals_14, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_23, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_24, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_25, &top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_30_30);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_front_end__Globals_14, (MR_Integer) 19, &top_level__mercury_compile_front_end__NonContiguousDecls_15);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_front_end__Globals_14, (MR_Integer) 17, &top_level__mercury_compile_front_end__InconsistentPredOrderClauses_16);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_front_end__Globals_14, (MR_Integer) 18, &top_level__mercury_compile_front_end__InconsistentPredOrderForeignProcs_17);
    }
    switch (top_level__mercury_compile_front_end__InconsistentPredOrderForeignProcs_17) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (top_level__mercury_compile_front_end__InconsistentPredOrderClauses_16) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            top_level__mercury_compile_front_end__InconsistentPredOrder_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            break;
          case (MR_Integer) 1:
            {
              top_level__mercury_compile_front_end__InconsistentPredOrder_18 = (MR_Word) MR_mkword(MR_mktag(1), &top_level__mercury_compile_front_end_scalar_common_5[1]);
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          top_level__mercury_compile_front_end__InconsistentPredOrder_18 = (MR_Word) MR_mkword(MR_mktag(1), &top_level__mercury_compile_front_end_scalar_common_5[2]);
        }
        break;
    }
    switch (top_level__mercury_compile_front_end__NonContiguousDecls_15) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        if ((top_level__mercury_compile_front_end__InconsistentPredOrder_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          top_level__mercury_compile_front_end__MaybeTask_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        else
          {
            MR_Word top_level__mercury_compile_front_end__DefnKinds_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), top_level__mercury_compile_front_end__InconsistentPredOrder_18, (MR_Integer) 0)));
            MR_Word top_level__mercury_compile_front_end__V_39_39;

            {
              top_level__mercury_compile_front_end__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), top_level__mercury_compile_front_end__V_39_39, 0) = ((MR_Box) (top_level__mercury_compile_front_end__DefnKinds_20));
            }
            {
              top_level__mercury_compile_front_end__MaybeTask_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), top_level__mercury_compile_front_end__MaybeTask_19, 0) = ((MR_Box) (top_level__mercury_compile_front_end__V_39_39));
            }
          }
        break;
      case (MR_Integer) 1:
        if ((top_level__mercury_compile_front_end__InconsistentPredOrder_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            top_level__mercury_compile_front_end__MaybeTask_19 = (MR_Word) MR_mkword(MR_mktag(1), &top_level__mercury_compile_front_end_scalar_common_5[3]);
          }
        else
          {
            MR_Word top_level__mercury_compile_front_end__V_37_37;
            MR_Word top_level__mercury_compile_front_end__DefnKinds_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), top_level__mercury_compile_front_end__InconsistentPredOrder_18, (MR_Integer) 0)));

            {
              top_level__mercury_compile_front_end__V_37_37 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), top_level__mercury_compile_front_end__V_37_37, 0) = ((MR_Box) (top_level__mercury_compile_front_end__DefnKinds_47));
            }
            {
              top_level__mercury_compile_front_end__MaybeTask_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), top_level__mercury_compile_front_end__MaybeTask_19, 0) = ((MR_Box) (top_level__mercury_compile_front_end__V_37_37));
            }
          }
        break;
    }
    if ((top_level__mercury_compile_front_end__MaybeTask_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_26 = top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_30_30;
    else
      {
        MR_Word top_level__mercury_compile_front_end__Task_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), top_level__mercury_compile_front_end__MaybeTask_19, (MR_Integer) 0)));
        MR_Word top_level__mercury_compile_front_end__StyleSpecs_22;

        {
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_front_end__Verbose_9, (MR_String) "% Generating style warnings...\n");
        }
        {
          check_hlds__style_checks__generate_style_warnings_5_p_0(*top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_24, top_level__mercury_compile_front_end__Task_21, &top_level__mercury_compile_front_end__StyleSpecs_22);
        }
        {
          *top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_26 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, top_level__mercury_compile_front_end__StyleSpecs_22, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_30_30);
        }
        {
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_front_end__Verbose_9, (MR_String) "% done.\n");
        }
        {
          libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_front_end__Stats_10);
        }
      }
  }
}

static void MR_CALL 
top_level__mercury_compile_front_end__simplify_pred_8_p_0(
  MR_Word top_level__mercury_compile_front_end__SimplifyTasks0_9,
  MR_Word top_level__mercury_compile_front_end__PredId_10,
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_ModuleInfo_0_22,
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_ModuleInfo_23,
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_PredInfo_0_24,
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_PredInfo_25,
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_26,
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_27)
{
  {
    MR_bool top_level__mercury_compile_front_end__succeeded;
    MR_Word top_level__mercury_compile_front_end__ProcIds_15;
    MR_Word top_level__mercury_compile_front_end__SimplifyTasks_16;
    MR_Word top_level__mercury_compile_front_end__ErrorSpecs0_17;
    MR_Word top_level__mercury_compile_front_end__ErrorSpecs_18;
    MR_Word top_level__mercury_compile_front_end__Globals_19;
    MR_Word top_level__mercury_compile_front_end__SpecsList_20;
    MR_Word top_level__mercury_compile_front_end__Statistics_21;

    {
      hlds__passes_aux__write_pred_progress_message_5_p_0((MR_String) "% Simplifying ", top_level__mercury_compile_front_end__PredId_10, top_level__mercury_compile_front_end__STATE_VARIABLE_ModuleInfo_0_22);
    }
    {
      top_level__mercury_compile_front_end__ProcIds_15 = hlds__hlds_pred__pred_info_non_imported_procids_1_f_0(top_level__mercury_compile_front_end__STATE_VARIABLE_PredInfo_0_24);
    }
    {
      top_level__mercury_compile_front_end__succeeded = hlds__hlds_pred__is_unify_or_compare_pred_1_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_PredInfo_0_24);
    }
    if (top_level__mercury_compile_front_end__succeeded)
      {
        MR_Word top_level__mercury_compile_front_end__V_39_39 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_front_end__SimplifyTasks0_9, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
        MR_Word top_level__mercury_compile_front_end__V_40_40 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_front_end__SimplifyTasks0_9, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
        MR_Word top_level__mercury_compile_front_end__V_41_41 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_front_end__SimplifyTasks0_9, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
        MR_Word top_level__mercury_compile_front_end__V_42_42 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_front_end__SimplifyTasks0_9, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
        MR_Word top_level__mercury_compile_front_end__V_43_43 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_front_end__SimplifyTasks0_9, (MR_Integer) 0)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
        MR_Word top_level__mercury_compile_front_end__V_44_44 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_front_end__SimplifyTasks0_9, (MR_Integer) 0)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
        MR_Word top_level__mercury_compile_front_end__V_45_45 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_front_end__SimplifyTasks0_9, (MR_Integer) 0)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
        MR_Word top_level__mercury_compile_front_end__V_46_46 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_front_end__SimplifyTasks0_9, (MR_Integer) 0)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
        MR_Word top_level__mercury_compile_front_end__V_47_47 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_front_end__SimplifyTasks0_9, (MR_Integer) 0)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
        MR_Word top_level__mercury_compile_front_end__V_48_48 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_front_end__SimplifyTasks0_9, (MR_Integer) 0)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
        MR_Word top_level__mercury_compile_front_end__V_49_49 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_front_end__SimplifyTasks0_9, (MR_Integer) 0)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
        MR_Word top_level__mercury_compile_front_end__V_50_50 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_front_end__SimplifyTasks0_9, (MR_Integer) 0)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
        MR_Word top_level__mercury_compile_front_end__V_51_51 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_front_end__SimplifyTasks0_9, (MR_Integer) 0)))) >> (MR_Integer) 13)) & (MR_Integer) 1);
        MR_Word top_level__mercury_compile_front_end__V_52_52 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_front_end__SimplifyTasks0_9, (MR_Integer) 0)))) >> (MR_Integer) 14)) & (MR_Integer) 1);
        MR_Word top_level__mercury_compile_front_end__V_38_38 = ((((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_front_end__SimplifyTasks0_9, (MR_Integer) 0)))) & (MR_Integer) 1);

        {
          top_level__mercury_compile_front_end__SimplifyTasks_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), top_level__mercury_compile_front_end__SimplifyTasks_16, 0) = ((MR_Box) (((MR_Integer) 0 | ((((top_level__mercury_compile_front_end__V_39_39 << (MR_Integer) 1)) | ((((top_level__mercury_compile_front_end__V_40_40 << (MR_Integer) 2)) | ((((top_level__mercury_compile_front_end__V_41_41 << (MR_Integer) 3)) | ((((top_level__mercury_compile_front_end__V_42_42 << (MR_Integer) 4)) | ((((top_level__mercury_compile_front_end__V_43_43 << (MR_Integer) 5)) | ((((top_level__mercury_compile_front_end__V_44_44 << (MR_Integer) 6)) | ((((top_level__mercury_compile_front_end__V_45_45 << (MR_Integer) 7)) | ((((top_level__mercury_compile_front_end__V_46_46 << (MR_Integer) 8)) | ((((top_level__mercury_compile_front_end__V_47_47 << (MR_Integer) 9)) | ((((top_level__mercury_compile_front_end__V_48_48 << (MR_Integer) 10)) | ((((top_level__mercury_compile_front_end__V_49_49 << (MR_Integer) 11)) | ((((top_level__mercury_compile_front_end__V_50_50 << (MR_Integer) 12)) | ((((top_level__mercury_compile_front_end__V_51_51 << (MR_Integer) 13)) | ((top_level__mercury_compile_front_end__V_52_52 << (MR_Integer) 14)))))))))))))))))))))))))))))));
        }
      }
    else
      top_level__mercury_compile_front_end__SimplifyTasks_16 = top_level__mercury_compile_front_end__SimplifyTasks0_9;
    {
      top_level__mercury_compile_front_end__ErrorSpecs0_17 = parse_tree__error_util__init_error_spec_accumulator_0_f_0();
    }
    {
      check_hlds__simplify__simplify_proc__simplify_pred_procs_9_p_0(top_level__mercury_compile_front_end__SimplifyTasks_16, top_level__mercury_compile_front_end__PredId_10, top_level__mercury_compile_front_end__ProcIds_15, top_level__mercury_compile_front_end__STATE_VARIABLE_ModuleInfo_0_22, top_level__mercury_compile_front_end__STATE_VARIABLE_ModuleInfo_23, top_level__mercury_compile_front_end__STATE_VARIABLE_PredInfo_0_24, top_level__mercury_compile_front_end__STATE_VARIABLE_PredInfo_25, top_level__mercury_compile_front_end__ErrorSpecs0_17, &top_level__mercury_compile_front_end__ErrorSpecs_18);
    }
    {
      hlds__hlds_module__module_info_get_globals_2_p_0(*top_level__mercury_compile_front_end__STATE_VARIABLE_ModuleInfo_23, &top_level__mercury_compile_front_end__Globals_19);
    }
    {
      top_level__mercury_compile_front_end__SpecsList_20 = parse_tree__error_util__error_spec_accumulator_to_list_1_f_0(top_level__mercury_compile_front_end__ErrorSpecs_18);
    }
    {
      *top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_27 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, top_level__mercury_compile_front_end__SpecsList_20, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_26);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_front_end__Globals_19, (MR_Integer) 67, &top_level__mercury_compile_front_end__Statistics_21);
    }
    {
      libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_front_end__Statistics_21);
    }
  }
}

static void MR_CALL 
top_level__mercury_compile_front_end__process_try_goals_9_p_0(
  MR_Word top_level__mercury_compile_front_end__Verbose_10,
  MR_Word top_level__mercury_compile_front_end__Stats_11,
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_18,
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_19,
  MR_Word * top_level__mercury_compile_front_end__FoundError_13,
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_20,
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_21)
{
  {
    MR_bool top_level__mercury_compile_front_end__succeeded;
    MR_Word top_level__mercury_compile_front_end__Globals_16;
    MR_Word top_level__mercury_compile_front_end__TryExpandSpecs_17;
    MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_24_24;
    MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_25_25;
    MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_29_29;
    MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_31_31;

    {
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_18, &top_level__mercury_compile_front_end__Globals_16);
    }
    {
      hlds__hlds_error_util__maybe_write_out_errors_8_p_0(top_level__mercury_compile_front_end__Verbose_10, top_level__mercury_compile_front_end__Globals_16, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_18, &top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_24_24, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_20, &top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_25_25);
    }
    {
      libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_front_end__Verbose_10, (MR_String) "% Transforming try goals...\n");
    }
    {
      check_hlds__try_expand__expand_try_goals_in_module_4_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_24_24, &top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_29_29, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &top_level__mercury_compile_front_end__TryExpandSpecs_17);
    }
    {
      top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_31_31 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, top_level__mercury_compile_front_end__TryExpandSpecs_17, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_25_25);
    }
    {
      *top_level__mercury_compile_front_end__FoundError_13 = parse_tree__error_util__contains_errors_2_f_0(top_level__mercury_compile_front_end__Globals_16, top_level__mercury_compile_front_end__TryExpandSpecs_17);
    }
    {
      hlds__hlds_error_util__maybe_write_out_errors_8_p_0(top_level__mercury_compile_front_end__Verbose_10, top_level__mercury_compile_front_end__Globals_16, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_29_29, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_19, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_31_31, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_21);
    }
    switch (*top_level__mercury_compile_front_end__FoundError_13) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          {
            libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_front_end__Verbose_10, (MR_String) "% done.\n");
          }
        }
        break;
      case (MR_Integer) 1:
        {
          {
            libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_front_end__Verbose_10, (MR_String) "% Program contains error(s).\n");
          }
        }
        break;
    }
    {
      libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_front_end__Stats_11);
    }
  }
}

static MR_bool MR_CALL 
top_level__mercury_compile_front_end__type_ctor_is_defined_in_this_module_2_p_0(
  MR_Word top_level__mercury_compile_front_end__ModuleName_3,
  MR_Word top_level__mercury_compile_front_end__HeadVar__2_2)
{
  {
    MR_bool top_level__mercury_compile_front_end__succeeded;
    MR_Word top_level__mercury_compile_front_end__TypeCtor_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_front_end__HeadVar__2_2, (MR_Integer) 0)));
    MR_Word top_level__mercury_compile_front_end__TypeSymName_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_front_end__TypeCtor_4, (MR_Integer) 0)));
    MR_Word top_level__mercury_compile_front_end__TypeModuleName_8;
    MR_Word top_level__mercury_compile_front_end__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_front_end__HeadVar__2_2, (MR_Integer) 1)));
    MR_Integer top_level__mercury_compile_front_end___TypeArity_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_front_end__TypeCtor_4, (MR_Integer) 1)));
    MR_String top_level__mercury_compile_front_end___TypeName_9;

    top_level__mercury_compile_front_end__succeeded = ((MR_tag((MR_Word) top_level__mercury_compile_front_end__TypeSymName_6)) == (MR_mktag((MR_Integer) 1)));
    if (top_level__mercury_compile_front_end__succeeded)
      {
        top_level__mercury_compile_front_end__TypeModuleName_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), top_level__mercury_compile_front_end__TypeSymName_6, (MR_Integer) 0)));
        top_level__mercury_compile_front_end___TypeName_9 = ((MR_String) (MR_hl_field(MR_mktag(1), top_level__mercury_compile_front_end__TypeSymName_6, (MR_Integer) 1)));
        {
          top_level__mercury_compile_front_end__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(top_level__mercury_compile_front_end__ModuleName_3, top_level__mercury_compile_front_end__TypeModuleName_8);
        }
      }
    return top_level__mercury_compile_front_end__succeeded;
  }
}

static MR_bool MR_CALL 
top_level__mercury_compile_front_end__check_oisu_pragmas_9_p_0_1(
  MR_Box top_level__mercury_compile_front_end__closure_arg,
  MR_Box top_level__mercury_compile_front_end__wrapper_arg_1)
{
  {
    MR_bool top_level__mercury_compile_front_end__succeeded;
    MR_Box top_level__mercury_compile_front_end__closure = top_level__mercury_compile_front_end__closure_arg;

    {
      top_level__mercury_compile_front_end__succeeded = top_level__mercury_compile_front_end__type_ctor_is_defined_in_this_module_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_front_end__closure, (MR_Integer) 3))), ((MR_Word) top_level__mercury_compile_front_end__wrapper_arg_1));
    }
    return top_level__mercury_compile_front_end__succeeded;
  }
}

static void MR_CALL 
top_level__mercury_compile_front_end__check_oisu_pragmas_9_p_0(
  MR_Word top_level__mercury_compile_front_end__Verbose_10,
  MR_Word top_level__mercury_compile_front_end__Stats_11,
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_24,
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_25,
  MR_Word * top_level__mercury_compile_front_end__FoundError_13,
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_26,
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_27)
{
  {
    MR_bool top_level__mercury_compile_front_end__succeeded;
    MR_Word top_level__mercury_compile_front_end__OISUMap_16;
    MR_Word top_level__mercury_compile_front_end__OISUPairs_17;
    MR_Word top_level__mercury_compile_front_end__ModuleName_18;
    MR_Word top_level__mercury_compile_front_end__ModuleOISUPairs_19;
    MR_Word top_level__mercury_compile_front_end__V_30_30;

    {
      hlds__hlds_module__module_info_get_oisu_map_2_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_24, &top_level__mercury_compile_front_end__OISUMap_16);
    }
    {
      mercury__map__to_assoc_list_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0, (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_oisu_preds_0, top_level__mercury_compile_front_end__OISUMap_16, &top_level__mercury_compile_front_end__OISUPairs_17);
    }
    {
      hlds__hlds_module__module_info_get_name_2_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_24, &top_level__mercury_compile_front_end__ModuleName_18);
    }
    {
      top_level__mercury_compile_front_end__V_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), top_level__mercury_compile_front_end__V_30_30, 0) = ((MR_Box) (&top_level__mercury_compile_front_end_scalar_common_2[2]));
      MR_hl_field(MR_mktag(0), top_level__mercury_compile_front_end__V_30_30, 1) = ((MR_Box) (top_level__mercury_compile_front_end__check_oisu_pragmas_9_p_0_1));
      MR_hl_field(MR_mktag(0), top_level__mercury_compile_front_end__V_30_30, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), top_level__mercury_compile_front_end__V_30_30, 3) = ((MR_Box) (top_level__mercury_compile_front_end__ModuleName_18));
    }
    {
      mercury__list__filter_3_p_0((MR_Word) &top_level__mercury_compile_front_end_scalar_common_3[0], top_level__mercury_compile_front_end__V_30_30, top_level__mercury_compile_front_end__OISUPairs_17, &top_level__mercury_compile_front_end__ModuleOISUPairs_19);
    }
    if ((top_level__mercury_compile_front_end__ModuleOISUPairs_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *top_level__mercury_compile_front_end__FoundError_13 = (MR_Integer) 0;
        *top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_25 = top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_24;
        *top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_27 = top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_26;
      }
    else
      {
        MR_Word top_level__mercury_compile_front_end__Globals_22;
        MR_Word top_level__mercury_compile_front_end__OISUSpecs_23;
        MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_31_31;
        MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_32_32;
        MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_36_36;
        MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_37_37;

        {
          hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_24, &top_level__mercury_compile_front_end__Globals_22);
        }
        {
          hlds__hlds_error_util__maybe_write_out_errors_8_p_0(top_level__mercury_compile_front_end__Verbose_10, top_level__mercury_compile_front_end__Globals_22, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_24, &top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_31_31, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_26, &top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_32_32);
        }
        {
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_front_end__Verbose_10, (MR_String) "% Checking oisu pragmas...\n");
        }
        {
          check_hlds__oisu_check__check_oisu_pragmas_for_module_4_p_0(top_level__mercury_compile_front_end__ModuleOISUPairs_19, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_31_31, &top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_36_36, &top_level__mercury_compile_front_end__OISUSpecs_23);
        }
        {
          top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_37_37 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, top_level__mercury_compile_front_end__OISUSpecs_23, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_32_32);
        }
        {
          *top_level__mercury_compile_front_end__FoundError_13 = parse_tree__error_util__contains_errors_2_f_0(top_level__mercury_compile_front_end__Globals_22, top_level__mercury_compile_front_end__OISUSpecs_23);
        }
        {
          hlds__hlds_error_util__maybe_write_out_errors_8_p_0(top_level__mercury_compile_front_end__Verbose_10, top_level__mercury_compile_front_end__Globals_22, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_36_36, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_25, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_37_37, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_27);
        }
        switch (*top_level__mercury_compile_front_end__FoundError_13) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              {
                libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_front_end__Verbose_10, (MR_String) "% done.\n");
              }
            }
            break;
          case (MR_Integer) 1:
            {
              {
                libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_front_end__Verbose_10, (MR_String) "% Program contains oisu pragma error(s).\n");
              }
            }
            break;
        }
        {
          libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_front_end__Stats_11);
        }
      }
  }
}

static void MR_CALL 
top_level__mercury_compile_front_end__check_stratification_9_p_0(
  MR_Word top_level__mercury_compile_front_end__Verbose_10,
  MR_Word top_level__mercury_compile_front_end__Stats_11,
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_20,
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_21,
  MR_Word * top_level__mercury_compile_front_end__FoundError_13,
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_22,
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_23)
{
  {
    MR_bool top_level__mercury_compile_front_end__succeeded;
    MR_Word top_level__mercury_compile_front_end__MustBeStratifiedPreds_16;
    MR_Word top_level__mercury_compile_front_end__Globals_17;
    MR_Word top_level__mercury_compile_front_end__Warn_18;

    {
      hlds__hlds_module__module_info_get_must_be_stratified_preds_2_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_20, &top_level__mercury_compile_front_end__MustBeStratifiedPreds_16);
    }
    {
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_20, &top_level__mercury_compile_front_end__Globals_17);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_front_end__Globals_17, (MR_Integer) 22, &top_level__mercury_compile_front_end__Warn_18);
    }
    {
      top_level__mercury_compile_front_end__succeeded = mercury__set__is_non_empty_1_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, top_level__mercury_compile_front_end__MustBeStratifiedPreds_16);
    }
    if (!(top_level__mercury_compile_front_end__succeeded))
      top_level__mercury_compile_front_end__succeeded = (top_level__mercury_compile_front_end__Warn_18 == (MR_Integer) 1);
    if (top_level__mercury_compile_front_end__succeeded)
      {
        MR_Word top_level__mercury_compile_front_end__StratifySpecs_19;
        MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_27_27;
        MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_28_28;
        MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_32_32;
        MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_33_33;

        {
          hlds__hlds_error_util__maybe_write_out_errors_8_p_0(top_level__mercury_compile_front_end__Verbose_10, top_level__mercury_compile_front_end__Globals_17, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_20, &top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_27_27, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_22, &top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_28_28);
        }
        {
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_front_end__Verbose_10, (MR_String) "% Checking stratification...\n");
        }
        {
          check_hlds__stratify__check_module_for_stratification_3_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_27_27, &top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_32_32, &top_level__mercury_compile_front_end__StratifySpecs_19);
        }
        {
          top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_33_33 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, top_level__mercury_compile_front_end__StratifySpecs_19, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_28_28);
        }
        {
          *top_level__mercury_compile_front_end__FoundError_13 = parse_tree__error_util__contains_errors_2_f_0(top_level__mercury_compile_front_end__Globals_17, top_level__mercury_compile_front_end__StratifySpecs_19);
        }
        {
          hlds__hlds_error_util__maybe_write_out_errors_8_p_0(top_level__mercury_compile_front_end__Verbose_10, top_level__mercury_compile_front_end__Globals_17, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_32_32, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_21, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_33_33, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_23);
        }
        switch (*top_level__mercury_compile_front_end__FoundError_13) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              {
                libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_front_end__Verbose_10, (MR_String) "% done.\n");
              }
            }
            break;
          case (MR_Integer) 1:
            {
              {
                libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_front_end__Verbose_10, (MR_String) "% Program contains stratification error(s).\n");
              }
            }
            break;
        }
        {
          libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_front_end__Stats_11);
        }
      }
    else
      {
        *top_level__mercury_compile_front_end__FoundError_13 = (MR_Integer) 0;
        *top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_23 = top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_22;
        *top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_21 = top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_20;
      }
  }
}

static void MR_CALL 
top_level__mercury_compile_front_end__check_unique_modes_9_p_0(
  MR_Word top_level__mercury_compile_front_end__Verbose_10,
  MR_Word top_level__mercury_compile_front_end__Stats_11,
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_18,
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_19,
  MR_Word * top_level__mercury_compile_front_end__FoundError_13,
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_20,
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_21)
{
  {
    MR_bool top_level__mercury_compile_front_end__succeeded;
    MR_Word top_level__mercury_compile_front_end__Globals_16;
    MR_Word top_level__mercury_compile_front_end__UniqueSpecs_17;
    MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_24_24;
    MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_25_25;
    MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_29_29;
    MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_30_30;

    {
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_18, &top_level__mercury_compile_front_end__Globals_16);
    }
    {
      hlds__hlds_error_util__maybe_write_out_errors_8_p_0(top_level__mercury_compile_front_end__Verbose_10, top_level__mercury_compile_front_end__Globals_16, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_18, &top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_24_24, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_20, &top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_25_25);
    }
    {
      libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_front_end__Verbose_10, (MR_String) "% Checking for backtracking over unique modes...\n");
    }
    {
      check_hlds__unique_modes__unique_modes_check_module_3_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_24_24, &top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_29_29, &top_level__mercury_compile_front_end__UniqueSpecs_17);
    }
    {
      top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_30_30 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, top_level__mercury_compile_front_end__UniqueSpecs_17, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_25_25);
    }
    {
      *top_level__mercury_compile_front_end__FoundError_13 = parse_tree__error_util__contains_errors_2_f_0(top_level__mercury_compile_front_end__Globals_16, top_level__mercury_compile_front_end__UniqueSpecs_17);
    }
    {
      hlds__hlds_error_util__maybe_write_out_errors_8_p_0(top_level__mercury_compile_front_end__Verbose_10, top_level__mercury_compile_front_end__Globals_16, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_29_29, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_19, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_30_30, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_21);
    }
    switch (*top_level__mercury_compile_front_end__FoundError_13) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          {
            libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_front_end__Verbose_10, (MR_String) "% Program is unique-mode-correct.\n");
          }
        }
        break;
      case (MR_Integer) 1:
        {
          {
            libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_front_end__Verbose_10, (MR_String) "% Program contains unique mode error(s).\n");
          }
        }
        break;
    }
    {
      libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_front_end__Stats_11);
    }
  }
}

static void MR_CALL 
top_level__mercury_compile_front_end__check_determinism_8_p_0(
  MR_Word top_level__mercury_compile_front_end__Verbose_9,
  MR_Word top_level__mercury_compile_front_end__Stats_10,
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_17,
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_18,
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_19,
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_20)
{
  {
    MR_bool top_level__mercury_compile_front_end__succeeded;
    MR_Word top_level__mercury_compile_front_end__DetismSpecs_14;
    MR_Word top_level__mercury_compile_front_end__Globals_15;
    MR_Word top_level__mercury_compile_front_end__FoundError_16;
    MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_23_23;
    MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_24_24;

    {
      check_hlds__det_analysis__determinism_pass_3_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_17, &top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_23_23, &top_level__mercury_compile_front_end__DetismSpecs_14);
    }
    {
      top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_24_24 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, top_level__mercury_compile_front_end__DetismSpecs_14, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_19);
    }
    {
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_23_23, &top_level__mercury_compile_front_end__Globals_15);
    }
    {
      top_level__mercury_compile_front_end__FoundError_16 = parse_tree__error_util__contains_errors_2_f_0(top_level__mercury_compile_front_end__Globals_15, top_level__mercury_compile_front_end__DetismSpecs_14);
    }
    {
      hlds__hlds_error_util__maybe_write_out_errors_8_p_0(top_level__mercury_compile_front_end__Verbose_9, top_level__mercury_compile_front_end__Globals_15, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_23_23, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_18, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_24_24, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_20);
    }
    switch (top_level__mercury_compile_front_end__FoundError_16) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          {
            libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_front_end__Verbose_9, (MR_String) "% Program is determinism-correct.\n");
          }
        }
        break;
      case (MR_Integer) 1:
        {
          {
            libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_front_end__Verbose_9, (MR_String) "% Program contains determinism error(s).\n");
          }
        }
        break;
    }
    {
      libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_front_end__Stats_10);
    }
  }
}

static void MR_CALL 
top_level__mercury_compile_front_end__detect_cse_6_p_0(
  MR_Word top_level__mercury_compile_front_end__Verbose_7,
  MR_Word top_level__mercury_compile_front_end__Stats_8,
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_11,
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_12)
{
  {
    MR_bool top_level__mercury_compile_front_end__succeeded;

    {
      libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_front_end__Verbose_7, (MR_String) "% Detecting common deconstructions...\n");
    }
    {
      check_hlds__cse_detection__detect_cse_in_module_2_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_11, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_12);
    }
    {
      libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_front_end__Verbose_7, (MR_String) "% done.\n");
    }
    {
      libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_front_end__Stats_8);
    }
  }
}

static void MR_CALL 
top_level__mercury_compile_front_end__detect_switches_6_p_0(
  MR_Word top_level__mercury_compile_front_end__Verbose_7,
  MR_Word top_level__mercury_compile_front_end__Stats_8,
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_11,
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_12)
{
  {
    MR_bool top_level__mercury_compile_front_end__succeeded;

    {
      libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_front_end__Verbose_7, (MR_String) "% Detecting switches...\n");
    }
    {
      libs__file_util__maybe_flush_output_3_p_0(top_level__mercury_compile_front_end__Verbose_7);
    }
    {
      check_hlds__switch_detection__detect_switches_in_module_2_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_11, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_12);
    }
    {
      libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_front_end__Verbose_7, (MR_String) "% done.\n");
    }
    {
      libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_front_end__Stats_8);
    }
  }
}

static void MR_CALL 
top_level__mercury_compile_front_end__modecheck_10_p_0_1(
  MR_Box top_level__mercury_compile_front_end__closure_arg,
  MR_Box top_level__mercury_compile_front_end__wrapper_arg_1,
  MR_Box * top_level__mercury_compile_front_end__wrapper_arg_2)
{
  {
    MR_Box top_level__mercury_compile_front_end__closure = top_level__mercury_compile_front_end__closure_arg;
    MR_Tuple top_level__mercury_compile_front_end__conv0_HeadVar__2_2;

    {
      check_hlds__modes__modecheck_module_2_p_0(((MR_Word) top_level__mercury_compile_front_end__wrapper_arg_1), &top_level__mercury_compile_front_end__conv0_HeadVar__2_2);
    }
    *top_level__mercury_compile_front_end__wrapper_arg_2 = ((MR_Box) (top_level__mercury_compile_front_end__conv0_HeadVar__2_2));
  }
}

static void MR_CALL 
top_level__mercury_compile_front_end__modecheck_10_p_0(
  MR_Word top_level__mercury_compile_front_end__Verbose_11,
  MR_Word top_level__mercury_compile_front_end__Stats_12,
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_23,
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_24,
  MR_Word * top_level__mercury_compile_front_end__FoundModeError_14,
  MR_Word * top_level__mercury_compile_front_end__SafeToContinue_15,
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_25,
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_26)
{
  {
    MR_bool top_level__mercury_compile_front_end__succeeded;
    MR_Word top_level__mercury_compile_front_end__Globals_18;
    MR_Word top_level__mercury_compile_front_end__BenchmarkModes_19;
    MR_Word top_level__mercury_compile_front_end__ModeSpecs_21;
    MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_29_29;
    MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_30_30;
    MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_40_40;
    MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_48_48;

    {
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_23, &top_level__mercury_compile_front_end__Globals_18);
    }
    {
      hlds__hlds_error_util__maybe_write_out_errors_8_p_0(top_level__mercury_compile_front_end__Verbose_11, top_level__mercury_compile_front_end__Globals_18, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_23, &top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_29_29, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_25, &top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_30_30);
    }
    {
      libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_front_end__Verbose_11, (MR_String) "% Mode-checking clauses...\n");
    }
    {
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_front_end__Globals_18, (MR_Integer) 172, &top_level__mercury_compile_front_end__BenchmarkModes_19);
    }
    switch (top_level__mercury_compile_front_end__BenchmarkModes_19) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Tuple top_level__mercury_compile_front_end__V_35_35;

          {
            check_hlds__modes__modecheck_module_2_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_29_29, &top_level__mercury_compile_front_end__V_35_35);
          }
          top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_front_end__V_35_35, (MR_Integer) 0)));
          *top_level__mercury_compile_front_end__SafeToContinue_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_front_end__V_35_35, (MR_Integer) 1)));
          top_level__mercury_compile_front_end__ModeSpecs_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_front_end__V_35_35, (MR_Integer) 2)));
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Integer top_level__mercury_compile_front_end__Repeats_20;
          MR_Integer top_level__mercury_compile_front_end__Time_22;
          MR_String top_level__mercury_compile_front_end__V_68_68;
          MR_Word top_level__mercury_compile_front_end__V_74_74;
          MR_String top_level__mercury_compile_front_end__V_78_78;
          MR_Tuple top_level__mercury_compile_front_end__V_39_39;
          MR_Box top_level__mercury_compile_front_end__conv1_V_39_39;

          {
            libs__globals__lookup_int_option_3_p_0(top_level__mercury_compile_front_end__Globals_18, (MR_Integer) 173, &top_level__mercury_compile_front_end__Repeats_20);
          }
          {
            mercury__benchmarking__benchmark_det_5_p_0((MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, (MR_Word) &top_level__mercury_compile_front_end_scalar_common_2[0], (MR_Word) &top_level__mercury_compile_front_end_scalar_common_3[1], ((MR_Box) (top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_29_29)), &top_level__mercury_compile_front_end__conv1_V_39_39, top_level__mercury_compile_front_end__Repeats_20, &top_level__mercury_compile_front_end__Time_22);
          }
          top_level__mercury_compile_front_end__V_39_39 = ((MR_Tuple) top_level__mercury_compile_front_end__conv1_V_39_39);
          top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_front_end__V_39_39, (MR_Integer) 0)));
          *top_level__mercury_compile_front_end__SafeToContinue_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_front_end__V_39_39, (MR_Integer) 1)));
          top_level__mercury_compile_front_end__ModeSpecs_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_front_end__V_39_39, (MR_Integer) 2)));
          {
            mercury__io__write_string_3_p_0((MR_String) "BENCHMARK modecheck, ");
          }
          top_level__mercury_compile_front_end__V_74_74 = (MR_Word) &top_level__mercury_compile_front_end_scalar_common_5[0];
          {
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(top_level__mercury_compile_front_end__V_74_74, top_level__mercury_compile_front_end__Repeats_20, &top_level__mercury_compile_front_end__V_68_68);
          }
          {
            mercury__io__write_string_3_p_0(top_level__mercury_compile_front_end__V_68_68);
          }
          {
            mercury__io__write_string_3_p_0((MR_String) " repeats: ");
          }
          {
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(top_level__mercury_compile_front_end__V_74_74, top_level__mercury_compile_front_end__Time_22, &top_level__mercury_compile_front_end__V_78_78);
          }
          {
            mercury__io__write_string_3_p_0(top_level__mercury_compile_front_end__V_78_78);
          }
          {
            mercury__io__write_string_3_p_0((MR_String) " ms\n");
          }
        }
        break;
    }
    {
      top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_48_48 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, top_level__mercury_compile_front_end__ModeSpecs_21, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_30_30);
    }
    {
      *top_level__mercury_compile_front_end__FoundModeError_14 = parse_tree__error_util__contains_errors_2_f_0(top_level__mercury_compile_front_end__Globals_18, top_level__mercury_compile_front_end__ModeSpecs_21);
    }
    switch (*top_level__mercury_compile_front_end__FoundModeError_14) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          {
            hlds__hlds_error_util__maybe_write_out_errors_8_p_0(top_level__mercury_compile_front_end__Verbose_11, top_level__mercury_compile_front_end__Globals_18, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_40_40, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_24, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_48_48, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_26);
          }
          {
            libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_front_end__Verbose_11, (MR_String) "% Program is mode-correct.\n");
          }
        }
        break;
      case (MR_Integer) 1:
        {
          {
            hlds__hlds_error_util__maybe_write_out_errors_8_p_0(top_level__mercury_compile_front_end__Verbose_11, top_level__mercury_compile_front_end__Globals_18, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_40_40, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_24, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_48_48, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_26);
          }
          {
            libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_front_end__Verbose_11, (MR_String) "% Program contains mode error(s).\n");
          }
        }
        break;
    }
    {
      libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_front_end__Stats_12);
    }
  }
}

static void MR_CALL 
top_level__mercury_compile_front_end__maybe_mode_constraints_6_p_0(
  MR_Word top_level__mercury_compile_front_end__Verbose_7,
  MR_Word top_level__mercury_compile_front_end__Stats_8,
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_13,
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_14)
{
  {
    MR_bool top_level__mercury_compile_front_end__succeeded;
    MR_Word top_level__mercury_compile_front_end__Globals_11;
    MR_Word top_level__mercury_compile_front_end__ModeConstraints_12;

    {
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_13, &top_level__mercury_compile_front_end__Globals_11);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_front_end__Globals_11, (MR_Integer) 169, &top_level__mercury_compile_front_end__ModeConstraints_12);
    }
    switch (top_level__mercury_compile_front_end__ModeConstraints_12) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_14 = top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_13;
        break;
      case (MR_Integer) 1:
        {
          {
            libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_front_end__Verbose_7, (MR_String) "% Dumping mode constraints...\n");
          }
          {
            libs__file_util__maybe_flush_output_3_p_0(top_level__mercury_compile_front_end__Verbose_7);
          }
          {
            top_level__mercury_compile_front_end__maybe_benchmark_modes__ho1_6_p_0((MR_String) "mode-constraints", top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_13, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_14);
          }
          {
            libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_front_end__Verbose_7, (MR_String) "% done.\n");
          }
          {
            libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_front_end__Stats_8);
          }
        }
        break;
    }
  }
}

static void MR_CALL 
top_level__mercury_compile_front_end__maybe_warn_about_unused_imports_8_p_0(
  MR_Word top_level__mercury_compile_front_end__Verbose_9,
  MR_Word top_level__mercury_compile_front_end__Stats_10,
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_17,
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_18,
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_19,
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_20)
{
  {
    MR_bool top_level__mercury_compile_front_end__succeeded;
    MR_Word top_level__mercury_compile_front_end__Globals_14;
    MR_Word top_level__mercury_compile_front_end__WarnUnusedImports_15;

    {
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_17, &top_level__mercury_compile_front_end__Globals_14);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_front_end__Globals_14, (MR_Integer) 46, &top_level__mercury_compile_front_end__WarnUnusedImports_15);
    }
    switch (top_level__mercury_compile_front_end__WarnUnusedImports_15) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_18 = top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_17;
          *top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_20 = top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_19;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word top_level__mercury_compile_front_end__UnusedImportSpecs_16;
          MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_24_24;
          MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_25_25;
          MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_29_29;

          {
            hlds__hlds_error_util__maybe_write_out_errors_8_p_0(top_level__mercury_compile_front_end__Verbose_9, top_level__mercury_compile_front_end__Globals_14, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_17, &top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_24_24, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_19, &top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_25_25);
          }
          {
            libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_front_end__Verbose_9, (MR_String) "% Checking for unused imports...");
          }
          {
            check_hlds__unused_imports__warn_about_unused_imports_2_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_24_24, &top_level__mercury_compile_front_end__UnusedImportSpecs_16);
          }
          {
            top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_29_29 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, top_level__mercury_compile_front_end__UnusedImportSpecs_16, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_25_25);
          }
          {
            hlds__hlds_error_util__maybe_write_out_errors_8_p_0(top_level__mercury_compile_front_end__Verbose_9, top_level__mercury_compile_front_end__Globals_14, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_24_24, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_18, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_29_29, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_20);
          }
          {
            libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_front_end__Verbose_9, (MR_String) " done.\n");
          }
          {
            libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_front_end__Stats_10);
          }
        }
        break;
    }
  }
}

static void MR_CALL 
top_level__mercury_compile_front_end__maybe_polymorphism_9_p_0(
  MR_Word top_level__mercury_compile_front_end__Verbose_10,
  MR_Word top_level__mercury_compile_front_end__Stats_11,
  MR_Word * top_level__mercury_compile_front_end__SafeToContinue_12,
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_19,
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_20,
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_21,
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_22)
{
  {
    MR_bool top_level__mercury_compile_front_end__succeeded;
    MR_Word top_level__mercury_compile_front_end__Globals_16;
    MR_Word top_level__mercury_compile_front_end__VeryVerbose_17;
    MR_Word top_level__mercury_compile_front_end__PolySpecs_18;
    MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_25_25;
    MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_26_26;
    MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_34_34;
    MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_35_35;

    {
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_19, &top_level__mercury_compile_front_end__Globals_16);
    }
    {
      hlds__hlds_error_util__maybe_write_out_errors_8_p_0(top_level__mercury_compile_front_end__Verbose_10, top_level__mercury_compile_front_end__Globals_16, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_19, &top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_25_25, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_21, &top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_26_26);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_front_end__Globals_16, (MR_Integer) 57, &top_level__mercury_compile_front_end__VeryVerbose_17);
    }
    {
      check_hlds__polymorphism__polymorphism_process_module_4_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_25_25, &top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_34_34, top_level__mercury_compile_front_end__SafeToContinue_12, &top_level__mercury_compile_front_end__PolySpecs_18);
    }
    {
      top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_35_35 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, top_level__mercury_compile_front_end__PolySpecs_18, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_26_26);
    }
    switch (top_level__mercury_compile_front_end__VeryVerbose_17) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          {
            libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_front_end__Verbose_10, (MR_String) "% Transforming polymorphic unifications...");
          }
          {
            libs__file_util__maybe_flush_output_3_p_0(top_level__mercury_compile_front_end__Verbose_10);
          }
          {
            libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_front_end__Verbose_10, (MR_String) " done.\n");
          }
        }
        break;
      case (MR_Integer) 1:
        {
          {
            libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_front_end__Verbose_10, (MR_String) "% Transforming polymorphic unifications...\n");
          }
          {
            libs__file_util__maybe_flush_output_3_p_0(top_level__mercury_compile_front_end__Verbose_10);
          }
          {
            libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_front_end__Verbose_10, (MR_String) "% done.\n");
          }
        }
        break;
    }
    {
      hlds__hlds_error_util__maybe_write_out_errors_8_p_0(top_level__mercury_compile_front_end__Verbose_10, top_level__mercury_compile_front_end__Globals_16, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_34_34, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_20, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_35_35, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_22);
    }
    {
      libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_front_end__Stats_11);
    }
  }
}

static void MR_CALL 
top_level__mercury_compile_front_end__subst_implementation_defined_literals_8_p_0(
  MR_Word top_level__mercury_compile_front_end__Verbose_9,
  MR_Word top_level__mercury_compile_front_end__Stats_10,
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_15,
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_16,
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_17,
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_18)
{
  {
    MR_bool top_level__mercury_compile_front_end__succeeded;
    MR_Word top_level__mercury_compile_front_end__Globals_14;
    MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_21_21;

    {
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_15, &top_level__mercury_compile_front_end__Globals_14);
    }
    {
      hlds__hlds_error_util__maybe_write_out_errors_8_p_0(top_level__mercury_compile_front_end__Verbose_9, top_level__mercury_compile_front_end__Globals_14, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_15, &top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_21_21, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_17, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_18);
    }
    {
      libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_front_end__Verbose_9, (MR_String) "% Substituting implementation-defined literals...\n");
    }
    {
      libs__file_util__maybe_flush_output_3_p_0(top_level__mercury_compile_front_end__Verbose_9);
    }
    {
      check_hlds__implementation_defined_literals__subst_impl_defined_literals_2_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_21_21, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_16);
    }
    {
      libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_front_end__Verbose_9, (MR_String) "% done.\n");
    }
    {
      libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_front_end__Stats_10);
    }
  }
}

static void MR_CALL 
top_level__mercury_compile_front_end__puritycheck_8_p_0(
  MR_Word top_level__mercury_compile_front_end__Verbose_9,
  MR_Word top_level__mercury_compile_front_end__Stats_10,
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_17,
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_18,
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_19,
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_20)
{
  {
    MR_bool top_level__mercury_compile_front_end__succeeded;
    MR_Word top_level__mercury_compile_front_end__PuritySpecs_14;
    MR_Word top_level__mercury_compile_front_end__Globals_15;
    MR_Word top_level__mercury_compile_front_end__PurityErrors_16;
    MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_25_25;
    MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_27_27;

    {
      libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_front_end__Verbose_9, (MR_String) "% Purity-checking clauses...\n");
    }
    {
      check_hlds__purity__puritycheck_module_4_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_17, &top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_25_25, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &top_level__mercury_compile_front_end__PuritySpecs_14);
    }
    {
      top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_27_27 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, top_level__mercury_compile_front_end__PuritySpecs_14, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_19);
    }
    {
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_25_25, &top_level__mercury_compile_front_end__Globals_15);
    }
    {
      top_level__mercury_compile_front_end__PurityErrors_16 = parse_tree__error_util__contains_errors_2_f_0(top_level__mercury_compile_front_end__Globals_15, top_level__mercury_compile_front_end__PuritySpecs_14);
    }
    {
      hlds__hlds_error_util__maybe_write_out_errors_8_p_0(top_level__mercury_compile_front_end__Verbose_9, top_level__mercury_compile_front_end__Globals_15, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_25_25, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_18, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_27_27, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_20);
    }
    switch (top_level__mercury_compile_front_end__PurityErrors_16) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          {
            libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_front_end__Verbose_9, (MR_String) "% Program is purity-correct.\n");
          }
        }
        break;
      case (MR_Integer) 1:
        {
          {
            libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_front_end__Verbose_9, (MR_String) "% Program contains purity error(s).\n");
          }
        }
        break;
    }
    {
      libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_front_end__Stats_10);
    }
  }
}

static void MR_CALL 
top_level__mercury_compile_front_end__frontend_pass_by_phases_9_p_0(
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_27,
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_28,
  MR_Word * top_level__mercury_compile_front_end__FoundError_11,
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_0_29,
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_30,
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_31,
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_32)
{
  {
    MR_bool top_level__mercury_compile_front_end__succeeded;
    MR_Word top_level__mercury_compile_front_end__Globals_15;
    MR_Word top_level__mercury_compile_front_end__Verbose_16;
    MR_Word top_level__mercury_compile_front_end__Stats_17;
    MR_Word top_level__mercury_compile_front_end__PolySafeToContinue_18;
    MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_37_37;
    MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_38_38;
    MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_42_42;
    MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_118_118;

    {
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_27, &top_level__mercury_compile_front_end__Globals_15);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_front_end__Globals_15, (MR_Integer) 56, &top_level__mercury_compile_front_end__Verbose_16);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_front_end__Globals_15, (MR_Integer) 66, &top_level__mercury_compile_front_end__Stats_17);
    }
    {
      top_level__mercury_compile_front_end__maybe_polymorphism_9_p_0(top_level__mercury_compile_front_end__Verbose_16, top_level__mercury_compile_front_end__Stats_17, &top_level__mercury_compile_front_end__PolySafeToContinue_18, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_27, &top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_37_37, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_31, &top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_38_38);
    }
    {
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_37_37, (MR_Integer) 30, (MR_String) "polymorphism", top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_0_29, &top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_42_42);
    }
    switch (top_level__mercury_compile_front_end__PolySafeToContinue_18) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word top_level__mercury_compile_front_end__FoundModeError_19;
          MR_Word top_level__mercury_compile_front_end__ModesSafeToContinue_20;
          MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_44_44;
          MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_45_45;
          MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_49_49;
          MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_51_51;
          MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_55_55;
          MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_57_57;
          MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_58_58;
          MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_62_62;

          {
            top_level__mercury_compile_front_end__maybe_warn_about_unused_imports_8_p_0(top_level__mercury_compile_front_end__Verbose_16, top_level__mercury_compile_front_end__Stats_17, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_37_37, &top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_44_44, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_38_38, &top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_45_45);
          }
          {
            hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_44_44, (MR_Integer) 31, (MR_String) "unused_imports", top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_42_42, &top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_49_49);
          }
          {
            top_level__mercury_compile_front_end__maybe_mode_constraints_6_p_0(top_level__mercury_compile_front_end__Verbose_16, top_level__mercury_compile_front_end__Stats_17, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_44_44, &top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_51_51);
          }
          {
            hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_51_51, (MR_Integer) 33, (MR_String) "mode_constraints", top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_49_49, &top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_55_55);
          }
          {
            top_level__mercury_compile_front_end__modecheck_10_p_0(top_level__mercury_compile_front_end__Verbose_16, top_level__mercury_compile_front_end__Stats_17, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_51_51, &top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_57_57, &top_level__mercury_compile_front_end__FoundModeError_19, &top_level__mercury_compile_front_end__ModesSafeToContinue_20, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_45_45, &top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_58_58);
          }
          {
            hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_57_57, (MR_Integer) 35, (MR_String) "modecheck", top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_55_55, &top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_62_62);
          }
          switch (top_level__mercury_compile_front_end__ModesSafeToContinue_20) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word top_level__mercury_compile_front_end__FoundUniqError_21;
                MR_Word top_level__mercury_compile_front_end__FoundStratError_22;
                MR_Word top_level__mercury_compile_front_end__FoundOISUError_23;
                MR_Word top_level__mercury_compile_front_end__FoundTryError_24;
                MR_Integer top_level__mercury_compile_front_end__NumErrors_25;
                MR_Integer top_level__mercury_compile_front_end__ExitStatus_26;
                MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_64_64;
                MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_68_68;
                MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_70_70;
                MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_74_74;
                MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_76_76;
                MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_77_77;
                MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_81_81;
                MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_83_83;
                MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_84_84;
                MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_88_88;
                MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_90_90;
                MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_91_91;
                MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_95_95;
                MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_97_97;
                MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_98_98;
                MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_102_102;
                MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_104_104;
                MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_105_105;
                MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_109_109;
                MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_113_113;
                MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_114_114;
                MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_120_120;
                MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_121_121;

                {
                  top_level__mercury_compile_front_end__detect_switches_6_p_0(top_level__mercury_compile_front_end__Verbose_16, top_level__mercury_compile_front_end__Stats_17, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_57_57, &top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_64_64);
                }
                {
                  hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_64_64, (MR_Integer) 40, (MR_String) "switch_detect", top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_62_62, &top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_68_68);
                }
                {
                  top_level__mercury_compile_front_end__detect_cse_6_p_0(top_level__mercury_compile_front_end__Verbose_16, top_level__mercury_compile_front_end__Stats_17, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_64_64, &top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_70_70);
                }
                {
                  hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_70_70, (MR_Integer) 45, (MR_String) "cse", top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_68_68, &top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_74_74);
                }
                {
                  top_level__mercury_compile_front_end__check_determinism_8_p_0(top_level__mercury_compile_front_end__Verbose_16, top_level__mercury_compile_front_end__Stats_17, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_70_70, &top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_76_76, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_58_58, &top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_77_77);
                }
                {
                  hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_76_76, (MR_Integer) 50, (MR_String) "determinism", top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_74_74, &top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_81_81);
                }
                {
                  top_level__mercury_compile_front_end__check_unique_modes_9_p_0(top_level__mercury_compile_front_end__Verbose_16, top_level__mercury_compile_front_end__Stats_17, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_76_76, &top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_83_83, &top_level__mercury_compile_front_end__FoundUniqError_21, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_77_77, &top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_84_84);
                }
                {
                  hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_83_83, (MR_Integer) 55, (MR_String) "unique_modes", top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_81_81, &top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_88_88);
                }
                {
                  top_level__mercury_compile_front_end__check_stratification_9_p_0(top_level__mercury_compile_front_end__Verbose_16, top_level__mercury_compile_front_end__Stats_17, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_83_83, &top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_90_90, &top_level__mercury_compile_front_end__FoundStratError_22, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_84_84, &top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_91_91);
                }
                {
                  hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_90_90, (MR_Integer) 60, (MR_String) "stratification", top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_88_88, &top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_95_95);
                }
                {
                  top_level__mercury_compile_front_end__check_oisu_pragmas_9_p_0(top_level__mercury_compile_front_end__Verbose_16, top_level__mercury_compile_front_end__Stats_17, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_90_90, &top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_97_97, &top_level__mercury_compile_front_end__FoundOISUError_23, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_91_91, &top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_98_98);
                }
                {
                  hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_97_97, (MR_Integer) 61, (MR_String) "oisu", top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_95_95, &top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_102_102);
                }
                {
                  top_level__mercury_compile_front_end__process_try_goals_9_p_0(top_level__mercury_compile_front_end__Verbose_16, top_level__mercury_compile_front_end__Stats_17, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_97_97, &top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_104_104, &top_level__mercury_compile_front_end__FoundTryError_24, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_98_98, &top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_105_105);
                }
                {
                  hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_104_104, (MR_Integer) 62, (MR_String) "try", top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_102_102, &top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_109_109);
                }
                {
                  top_level__mercury_compile_front_end__maybe_simplify_10_p_0((MR_Integer) 1, (MR_Integer) 0, top_level__mercury_compile_front_end__Verbose_16, top_level__mercury_compile_front_end__Stats_17, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_104_104, &top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_113_113, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_105_105, &top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_114_114);
                }
                {
                  hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_113_113, (MR_Integer) 65, (MR_String) "frontend_simplify", top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_109_109, &top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_118_118);
                }
                {
                  top_level__mercury_compile_front_end__maybe_generate_style_warnings_8_p_0(top_level__mercury_compile_front_end__Verbose_16, top_level__mercury_compile_front_end__Stats_17, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_113_113, &top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_120_120, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_114_114, &top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_121_121);
                }
                {
                  top_level__mercury_compile_front_end__maybe_proc_statistics_9_p_0(top_level__mercury_compile_front_end__Verbose_16, top_level__mercury_compile_front_end__Stats_17, (MR_String) "AfterFrontEnd", top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_120_120, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_28, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_121_121, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_32);
                }
                {
                  hlds__hlds_module__module_info_get_num_errors_2_p_0(*top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_28, &top_level__mercury_compile_front_end__NumErrors_25);
                }
                {
                  mercury__io__get_exit_status_3_p_0(&top_level__mercury_compile_front_end__ExitStatus_26);
                }
                top_level__mercury_compile_front_end__succeeded = (top_level__mercury_compile_front_end__FoundModeError_19 == (MR_Integer) 0);
                if (top_level__mercury_compile_front_end__succeeded)
                  {
                    top_level__mercury_compile_front_end__succeeded = (top_level__mercury_compile_front_end__FoundUniqError_21 == (MR_Integer) 0);
                    if (top_level__mercury_compile_front_end__succeeded)
                      {
                        top_level__mercury_compile_front_end__succeeded = (top_level__mercury_compile_front_end__FoundStratError_22 == (MR_Integer) 0);
                        if (top_level__mercury_compile_front_end__succeeded)
                          {
                            top_level__mercury_compile_front_end__succeeded = (top_level__mercury_compile_front_end__FoundOISUError_23 == (MR_Integer) 0);
                            if (top_level__mercury_compile_front_end__succeeded)
                              {
                                top_level__mercury_compile_front_end__succeeded = (top_level__mercury_compile_front_end__FoundTryError_24 == (MR_Integer) 0);
                                if (top_level__mercury_compile_front_end__succeeded)
                                  {
                                    top_level__mercury_compile_front_end__succeeded = (top_level__mercury_compile_front_end__NumErrors_25 == (MR_Integer) 0);
                                    if (top_level__mercury_compile_front_end__succeeded)
                                      top_level__mercury_compile_front_end__succeeded = (top_level__mercury_compile_front_end__ExitStatus_26 == (MR_Integer) 0);
                                  }
                              }
                          }
                      }
                  }
                if (top_level__mercury_compile_front_end__succeeded)
                  *top_level__mercury_compile_front_end__FoundError_11 = (MR_Integer) 0;
                else
                  *top_level__mercury_compile_front_end__FoundError_11 = (MR_Integer) 1;
              }
              break;
            case (MR_Integer) 1:
              {
                *top_level__mercury_compile_front_end__FoundError_11 = (MR_Integer) 1;
                *top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_28 = top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_57_57;
                top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_118_118 = top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_62_62;
                *top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_32 = top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_58_58;
              }
              break;
          }
        }
        break;
      case (MR_Integer) 1:
        {
          *top_level__mercury_compile_front_end__FoundError_11 = (MR_Integer) 1;
          *top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_28 = top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_37_37;
          top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_118_118 = top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_42_42;
          *top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_32 = top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_38_38;
        }
        break;
    }
    {
      hlds__passes_aux__maybe_dump_hlds_7_p_0(*top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_28, (MR_Integer) 99, (MR_String) "front_end", top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_118_118, top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_30);
    }
  }
}

static void MR_CALL 
top_level__mercury_compile_front_end__maybe_write_initial_optfile_9_p_0(
  MR_Word top_level__mercury_compile_front_end__MakeOptInt_10,
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_36,
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_37,
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_0_38,
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_39,
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_40,
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_41)
{
  {
    MR_bool top_level__mercury_compile_front_end__succeeded;
    MR_Word top_level__mercury_compile_front_end__Globals_15;
    MR_Word top_level__mercury_compile_front_end__IntermodOpt_16;
    MR_Word top_level__mercury_compile_front_end__IntermodAnalysis_17;
    MR_Word top_level__mercury_compile_front_end__IntermodArgs_18;
    MR_Word top_level__mercury_compile_front_end__IntermodDirs_19;
    MR_Word top_level__mercury_compile_front_end__UseOptFiles_20;
    MR_Word top_level__mercury_compile_front_end__Termination_21;
    MR_Word top_level__mercury_compile_front_end__Termination2_22;
    MR_Word top_level__mercury_compile_front_end__SharingAnalysis_23;
    MR_Word top_level__mercury_compile_front_end__ReuseAnalysis_24;
    MR_Word top_level__mercury_compile_front_end__ExceptionAnalysis_25;
    MR_Word top_level__mercury_compile_front_end__ClosureAnalysis_26;
    MR_Word top_level__mercury_compile_front_end__TrailingAnalysis_27;
    MR_Word top_level__mercury_compile_front_end__TablingAnalysis_28;

    {
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_36, &top_level__mercury_compile_front_end__Globals_15);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_front_end__Globals_15, (MR_Integer) 330, &top_level__mercury_compile_front_end__IntermodOpt_16);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_front_end__Globals_15, (MR_Integer) 335, &top_level__mercury_compile_front_end__IntermodAnalysis_17);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_front_end__Globals_15, (MR_Integer) 357, &top_level__mercury_compile_front_end__IntermodArgs_18);
    }
    {
      libs__globals__lookup_accumulating_option_3_p_0(top_level__mercury_compile_front_end__Globals_15, (MR_Integer) 650, &top_level__mercury_compile_front_end__IntermodDirs_19);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_front_end__Globals_15, (MR_Integer) 332, &top_level__mercury_compile_front_end__UseOptFiles_20);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_front_end__Globals_15, (MR_Integer) 421, &top_level__mercury_compile_front_end__Termination_21);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_front_end__Globals_15, (MR_Integer) 428, &top_level__mercury_compile_front_end__Termination2_22);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_front_end__Globals_15, (MR_Integer) 413, &top_level__mercury_compile_front_end__SharingAnalysis_23);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_front_end__Globals_15, (MR_Integer) 415, &top_level__mercury_compile_front_end__ReuseAnalysis_24);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_front_end__Globals_15, (MR_Integer) 436, &top_level__mercury_compile_front_end__ExceptionAnalysis_25);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_front_end__Globals_15, (MR_Integer) 437, &top_level__mercury_compile_front_end__ClosureAnalysis_26);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_front_end__Globals_15, (MR_Integer) 400, &top_level__mercury_compile_front_end__TrailingAnalysis_27);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_front_end__Globals_15, (MR_Integer) 403, &top_level__mercury_compile_front_end__TablingAnalysis_28);
    }
    switch (top_level__mercury_compile_front_end__MakeOptInt_10) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          top_level__mercury_compile_front_end__succeeded = (top_level__mercury_compile_front_end__IntermodOpt_16 == (MR_Integer) 1);
          if (!(top_level__mercury_compile_front_end__succeeded))
            top_level__mercury_compile_front_end__succeeded = (top_level__mercury_compile_front_end__IntermodAnalysis_17 == (MR_Integer) 1);
          if (top_level__mercury_compile_front_end__succeeded)
            {
              transform_hlds__intermod__maybe_opt_export_entities_2_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_36, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_37);
            }
          else
            switch (top_level__mercury_compile_front_end__UseOptFiles_20) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_37 = top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_36;
                break;
              case (MR_Integer) 1:
                {
                  MR_Word top_level__mercury_compile_front_end__MaybeDir_33;
                  MR_Word top_level__mercury_compile_front_end__ModuleName_77;
                  MR_String top_level__mercury_compile_front_end__OptName_78;

                  {
                    hlds__hlds_module__module_info_get_name_2_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_36, &top_level__mercury_compile_front_end__ModuleName_77);
                  }
                  {
                    parse_tree__file_names__module_name_to_search_file_name_6_p_0(top_level__mercury_compile_front_end__Globals_15, top_level__mercury_compile_front_end__ModuleName_77, (MR_String) ".opt", &top_level__mercury_compile_front_end__OptName_78);
                  }
                  {
                    libs__file_util__search_for_file_returning_dir_5_p_0(top_level__mercury_compile_front_end__IntermodDirs_19, top_level__mercury_compile_front_end__OptName_78, &top_level__mercury_compile_front_end__MaybeDir_33);
                  }
                  if (((MR_tag((MR_Word) top_level__mercury_compile_front_end__MaybeDir_33)) == (MR_mktag((MR_Integer) 1))))
                    *top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_37 = top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_36;
                  else
                    {
                      transform_hlds__intermod__maybe_opt_export_entities_2_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_36, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_37);
                    }
                }
                break;
            }
          *top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_39 = top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_0_38;
          *top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_41 = top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_40;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word top_level__mercury_compile_front_end__ModuleName_30;
          MR_String top_level__mercury_compile_front_end__OptName_31;
          MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_61_61;

          {
            transform_hlds__intermod__write_initial_opt_file_4_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_36, &top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_61_61);
          }
          top_level__mercury_compile_front_end__succeeded = (top_level__mercury_compile_front_end__IntermodAnalysis_17 == (MR_Integer) 0);
          if (top_level__mercury_compile_front_end__succeeded)
            {
              top_level__mercury_compile_front_end__succeeded = (top_level__mercury_compile_front_end__IntermodArgs_18 == (MR_Integer) 1);
              if (!(top_level__mercury_compile_front_end__succeeded))
                {
                  top_level__mercury_compile_front_end__succeeded = (top_level__mercury_compile_front_end__Termination_21 == (MR_Integer) 1);
                  if (!(top_level__mercury_compile_front_end__succeeded))
                    {
                      top_level__mercury_compile_front_end__succeeded = (top_level__mercury_compile_front_end__Termination2_22 == (MR_Integer) 1);
                      if (!(top_level__mercury_compile_front_end__succeeded))
                        {
                          top_level__mercury_compile_front_end__succeeded = (top_level__mercury_compile_front_end__ExceptionAnalysis_25 == (MR_Integer) 1);
                          if (!(top_level__mercury_compile_front_end__succeeded))
                            {
                              top_level__mercury_compile_front_end__succeeded = (top_level__mercury_compile_front_end__TrailingAnalysis_27 == (MR_Integer) 1);
                              if (!(top_level__mercury_compile_front_end__succeeded))
                                {
                                  top_level__mercury_compile_front_end__succeeded = (top_level__mercury_compile_front_end__TablingAnalysis_28 == (MR_Integer) 1);
                                  if (!(top_level__mercury_compile_front_end__succeeded))
                                    {
                                      top_level__mercury_compile_front_end__succeeded = (top_level__mercury_compile_front_end__ClosureAnalysis_26 == (MR_Integer) 1);
                                      if (!(top_level__mercury_compile_front_end__succeeded))
                                        {
                                          top_level__mercury_compile_front_end__succeeded = (top_level__mercury_compile_front_end__SharingAnalysis_23 == (MR_Integer) 1);
                                          if (!(top_level__mercury_compile_front_end__succeeded))
                                            top_level__mercury_compile_front_end__succeeded = (top_level__mercury_compile_front_end__ReuseAnalysis_24 == (MR_Integer) 1);
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
          if (top_level__mercury_compile_front_end__succeeded)
            {
              MR_Word top_level__mercury_compile_front_end__FoundError_29;
              MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_63_63;

              {
                top_level__mercury_compile_front_end__frontend_pass_by_phases_9_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_61_61, &top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_63_63, &top_level__mercury_compile_front_end__FoundError_29, top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_0_38, top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_39, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_40, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_41);
              }
              switch (top_level__mercury_compile_front_end__FoundError_29) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    top_level__mercury_compile_middle_passes__middle_pass_for_opt_file_4_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_63_63, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_37);
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    {
                      mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
                    }
                    *top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_37 = top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_63_63;
                  }
                  break;
              }
            }
          else
            {
              *top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_41 = top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_40;
              *top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_39 = top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_0_38;
              *top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_37 = top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_61_61;
            }
          {
            hlds__hlds_module__module_info_get_name_2_p_0(*top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_37, &top_level__mercury_compile_front_end__ModuleName_30);
          }
          {
            parse_tree__file_names__module_name_to_file_name_7_p_0(top_level__mercury_compile_front_end__Globals_15, top_level__mercury_compile_front_end__ModuleName_30, (MR_String) ".opt", (MR_Integer) 0, &top_level__mercury_compile_front_end__OptName_31);
          }
          {
            parse_tree__module_cmds__update_interface_4_p_0(top_level__mercury_compile_front_end__Globals_15, top_level__mercury_compile_front_end__OptName_31);
          }
          {
            parse_tree__module_cmds__touch_interface_datestamp_5_p_0(top_level__mercury_compile_front_end__Globals_15, top_level__mercury_compile_front_end__ModuleName_30, (MR_String) ".optdate");
          }
        }
        break;
    }
  }
}

static void MR_CALL 
top_level__mercury_compile_front_end__frontend_pass_after_typeclass_check_12_p_0(
  MR_Word top_level__mercury_compile_front_end__OpModeAugment_13,
  MR_Word top_level__mercury_compile_front_end__FoundUndefModeError_14,
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_FoundError_0_39,
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_FoundError_40,
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_41,
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_42,
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_0_43,
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_44,
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_45,
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_46)
{
  {
    MR_bool top_level__mercury_compile_front_end__succeeded;
    MR_Word top_level__mercury_compile_front_end__TypeCtorInfo_153_153;
    MR_Word top_level__mercury_compile_front_end__Globals_20;
    MR_Word top_level__mercury_compile_front_end__Verbose_21;
    MR_Word top_level__mercury_compile_front_end__Stats_22;
    MR_Word top_level__mercury_compile_front_end__IntermodOpt_23;
    MR_Word top_level__mercury_compile_front_end__IntermodAnalysis_24;
    MR_Word top_level__mercury_compile_front_end__UseOptFiles_25;
    MR_Word top_level__mercury_compile_front_end__TypeCheckConstraints_26;
    MR_Word top_level__mercury_compile_front_end__WarnInstsWithNoMatchingType_27;
    MR_Word top_level__mercury_compile_front_end__TypeCheckSpecs_28;
    MR_Word top_level__mercury_compile_front_end__FoundSyntaxError_29;
    MR_Word top_level__mercury_compile_front_end__ExceededTypeCheckIterationLimit_30;
    MR_Word top_level__mercury_compile_front_end__FoundTypeError_31;
    MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_61_61;
    MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_62_62;
    MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_68_68;
    MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_78_78;
    MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_79_79;
    MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_85_85;
    MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_87_87;
    MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_88_88;
    MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_95_95;
    MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_96_96;
    MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_97_97;
    MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_98_98;
    MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_107_107;

    {
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_41, &top_level__mercury_compile_front_end__Globals_20);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_front_end__Globals_20, (MR_Integer) 56, &top_level__mercury_compile_front_end__Verbose_21);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_front_end__Globals_20, (MR_Integer) 66, &top_level__mercury_compile_front_end__Stats_22);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_front_end__Globals_20, (MR_Integer) 330, &top_level__mercury_compile_front_end__IntermodOpt_23);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_front_end__Globals_20, (MR_Integer) 335, &top_level__mercury_compile_front_end__IntermodAnalysis_24);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_front_end__Globals_20, (MR_Integer) 332, &top_level__mercury_compile_front_end__UseOptFiles_25);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_front_end__Globals_20, (MR_Integer) 303, &top_level__mercury_compile_front_end__TypeCheckConstraints_26);
    }
    top_level__mercury_compile_front_end__succeeded = (top_level__mercury_compile_front_end__IntermodOpt_23 == (MR_Integer) 1);
    if (!(top_level__mercury_compile_front_end__succeeded))
      {
        top_level__mercury_compile_front_end__succeeded = (top_level__mercury_compile_front_end__IntermodAnalysis_24 == (MR_Integer) 1);
        if (!(top_level__mercury_compile_front_end__succeeded))
          top_level__mercury_compile_front_end__succeeded = (top_level__mercury_compile_front_end__UseOptFiles_25 == (MR_Integer) 1);
      }
    if (top_level__mercury_compile_front_end__succeeded)
      {
        top_level__mercury_compile_front_end__succeeded = (top_level__mercury_compile_front_end__OpModeAugment_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        top_level__mercury_compile_front_end__succeeded = !(top_level__mercury_compile_front_end__succeeded);
      }
    if (top_level__mercury_compile_front_end__succeeded)
      {
        MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_55_55;
        MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_56_56;
        MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_60_60;

        {
          hlds__hlds_error_util__maybe_write_out_errors_8_p_0(top_level__mercury_compile_front_end__Verbose_21, top_level__mercury_compile_front_end__Globals_20, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_41, &top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_55_55, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_45, &top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_56_56);
        }
        {
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_front_end__Verbose_21, (MR_String) "% Eliminating dead predicates... ");
        }
        {
          transform_hlds__dead_proc_elim__dead_pred_elim_2_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_55_55, &top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_60_60);
        }
        {
          hlds__hlds_error_util__maybe_write_out_errors_8_p_0(top_level__mercury_compile_front_end__Verbose_21, top_level__mercury_compile_front_end__Globals_20, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_60_60, &top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_61_61, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_56_56, &top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_62_62);
        }
        {
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_front_end__Verbose_21, (MR_String) "done.\n");
        }
        {
          hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_61_61, (MR_Integer) 10, (MR_String) "dead_pred_elim", top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_0_43, &top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_68_68);
        }
      }
    else
      {
        top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_62_62 = top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_45;
        top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_68_68 = top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_0_43;
        top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_61_61 = top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_41;
      }
    {
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_front_end__Globals_20, (MR_Integer) 45, &top_level__mercury_compile_front_end__WarnInstsWithNoMatchingType_27);
    }
    switch (top_level__mercury_compile_front_end__WarnInstsWithNoMatchingType_27) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_78_78 = top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_61_61;
          top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_85_85 = top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_68_68;
          top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_79_79 = top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_62_62;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_71_71;
          MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_72_72;
          MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_76_76;
          MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_77_77;

          {
            hlds__hlds_error_util__maybe_write_out_errors_8_p_0(top_level__mercury_compile_front_end__Verbose_21, top_level__mercury_compile_front_end__Globals_20, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_61_61, &top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_71_71, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_62_62, &top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_72_72);
          }
          {
            libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_front_end__Verbose_21, (MR_String) "% Checking that insts have matching types... ");
          }
          {
            check_hlds__inst_check__check_insts_have_matching_types_4_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_71_71, &top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_76_76, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_72_72, &top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_77_77);
          }
          {
            hlds__hlds_error_util__maybe_write_out_errors_8_p_0(top_level__mercury_compile_front_end__Verbose_21, top_level__mercury_compile_front_end__Globals_20, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_76_76, &top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_78_78, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_77_77, &top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_79_79);
          }
          {
            libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_front_end__Verbose_21, (MR_String) "done.\n");
          }
          {
            hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_78_78, (MR_Integer) 12, (MR_String) "warn_insts_without_matching_type", top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_68_68, &top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_85_85);
          }
        }
        break;
    }
    {
      hlds__hlds_error_util__maybe_write_out_errors_8_p_0(top_level__mercury_compile_front_end__Verbose_21, top_level__mercury_compile_front_end__Globals_20, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_78_78, &top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_87_87, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_79_79, &top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_88_88);
    }
    {
      libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_front_end__Verbose_21, (MR_String) "% Type-checking...\n");
    }
    {
      libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_front_end__Verbose_21, (MR_String) "% Type-checking clauses...\n");
    }
    switch (top_level__mercury_compile_front_end__TypeCheckConstraints_26) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          check_hlds__typecheck__typecheck_module_5_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_87_87, &top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_95_95, &top_level__mercury_compile_front_end__TypeCheckSpecs_28, &top_level__mercury_compile_front_end__FoundSyntaxError_29, &top_level__mercury_compile_front_end__ExceededTypeCheckIterationLimit_30);
        }
        break;
      case (MR_Integer) 1:
        {
          {
            check_hlds__type_constraints__typecheck_constraints_3_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_87_87, &top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_95_95, &top_level__mercury_compile_front_end__TypeCheckSpecs_28);
          }
          top_level__mercury_compile_front_end__FoundSyntaxError_29 = (MR_Integer) 0;
          top_level__mercury_compile_front_end__ExceededTypeCheckIterationLimit_30 = (MR_Integer) 0;
        }
        break;
    }
    top_level__mercury_compile_front_end__TypeCtorInfo_153_153 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0;
    {
      top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_96_96 = mercury__list__f_43_43_2_f_0(top_level__mercury_compile_front_end__TypeCtorInfo_153_153, top_level__mercury_compile_front_end__TypeCheckSpecs_28, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_88_88);
    }
    {
      hlds__hlds_error_util__maybe_write_out_errors_8_p_0(top_level__mercury_compile_front_end__Verbose_21, top_level__mercury_compile_front_end__Globals_20, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_95_95, &top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_97_97, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_96_96, &top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_98_98);
    }
    {
      top_level__mercury_compile_front_end__FoundTypeError_31 = parse_tree__error_util__contains_errors_2_f_0(top_level__mercury_compile_front_end__Globals_20, top_level__mercury_compile_front_end__TypeCheckSpecs_28);
    }
    switch (top_level__mercury_compile_front_end__FoundTypeError_31) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          {
            libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_front_end__Verbose_21, (MR_String) "% Program is type-correct.\n");
          }
        }
        break;
      case (MR_Integer) 1:
        {
          {
            libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_front_end__Verbose_21, (MR_String) "% Program contains type error(s).\n");
          }
        }
        break;
    }
    {
      libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_front_end__Stats_22);
    }
    {
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_97_97, (MR_Integer) 15, (MR_String) "typecheck", top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_85_85, &top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_107_107);
    }
    top_level__mercury_compile_front_end__succeeded = (top_level__mercury_compile_front_end__FoundUndefModeError_14 == (MR_Integer) 1);
    if (top_level__mercury_compile_front_end__succeeded)
      {
        *top_level__mercury_compile_front_end__STATE_VARIABLE_FoundError_40 = (MR_Integer) 1;
        {
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_front_end__Verbose_21, (MR_String) "% Program contains undefined inst or undefined mode error(s).\n");
        }
        {
          mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
        }
        *top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_46 = top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_98_98;
        *top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_44 = top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_107_107;
        *top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_42 = top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_97_97;
      }
    else
      {
        top_level__mercury_compile_front_end__succeeded = (top_level__mercury_compile_front_end__ExceededTypeCheckIterationLimit_30 == (MR_Integer) 1);
        if (top_level__mercury_compile_front_end__succeeded)
          {
            *top_level__mercury_compile_front_end__STATE_VARIABLE_FoundError_40 = (MR_Integer) 1;
            {
              mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
            }
            *top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_46 = top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_98_98;
            *top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_44 = top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_107_107;
            *top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_42 = top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_97_97;
          }
        else
          {
            MR_Word top_level__mercury_compile_front_end__MissingTypeDefnSpecs_32;
            MR_Word top_level__mercury_compile_front_end__SomeMissingTypeDefns_33;
            MR_Integer top_level__mercury_compile_front_end__NumPostTypeCheckErrors_34;
            MR_Word top_level__mercury_compile_front_end__PostTypeCheckAlwaysSpecs_35;
            MR_Word top_level__mercury_compile_front_end__PostTypeCheckNoTypeErrorSpecs_36;
            MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_119_119;
            MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_120_120;
            MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_121_121;
            MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_124_124;
            MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_126_126;
            MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_127_127;

            {
              check_hlds__check_for_missing_type_defns__check_for_missing_type_defns_2_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_97_97, &top_level__mercury_compile_front_end__MissingTypeDefnSpecs_32);
            }
            {
              top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_119_119 = mercury__list__f_43_43_2_f_0(top_level__mercury_compile_front_end__TypeCtorInfo_153_153, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_98_98, top_level__mercury_compile_front_end__MissingTypeDefnSpecs_32);
            }
            {
              top_level__mercury_compile_front_end__SomeMissingTypeDefns_33 = parse_tree__error_util__contains_errors_2_f_0(top_level__mercury_compile_front_end__Globals_20, top_level__mercury_compile_front_end__MissingTypeDefnSpecs_32);
            }
            {
              check_hlds__inst_user__pretest_user_inst_table_2_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_97_97, &top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_120_120);
            }
            {
              check_hlds__post_typecheck__post_typecheck_finish_preds_5_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_120_120, &top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_121_121, &top_level__mercury_compile_front_end__NumPostTypeCheckErrors_34, &top_level__mercury_compile_front_end__PostTypeCheckAlwaysSpecs_35, &top_level__mercury_compile_front_end__PostTypeCheckNoTypeErrorSpecs_36);
            }
            {
              hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_121_121, (MR_Integer) 19, (MR_String) "post_typecheck", top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_107_107, &top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_124_124);
            }
            {
              top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_126_126 = mercury__list__f_43_43_2_f_0(top_level__mercury_compile_front_end__TypeCtorInfo_153_153, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_119_119, top_level__mercury_compile_front_end__PostTypeCheckAlwaysSpecs_35);
            }
            switch (top_level__mercury_compile_front_end__FoundTypeError_31) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_127_127 = mercury__list__f_43_43_2_f_0(top_level__mercury_compile_front_end__TypeCtorInfo_153_153, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_126_126, top_level__mercury_compile_front_end__PostTypeCheckNoTypeErrorSpecs_36);
                }
                break;
              case (MR_Integer) 1:
                top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_127_127 = top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_126_126;
                break;
            }
            top_level__mercury_compile_front_end__succeeded = (top_level__mercury_compile_front_end__FoundTypeError_31 == (MR_Integer) 1);
            if (!(top_level__mercury_compile_front_end__succeeded))
              {
                top_level__mercury_compile_front_end__succeeded = (top_level__mercury_compile_front_end__FoundSyntaxError_29 == (MR_Integer) 1);
                if (!(top_level__mercury_compile_front_end__succeeded))
                  {
                    top_level__mercury_compile_front_end__succeeded = (top_level__mercury_compile_front_end__SomeMissingTypeDefns_33 == (MR_Integer) 1);
                    if (!(top_level__mercury_compile_front_end__succeeded))
                      {
                        top_level__mercury_compile_front_end__succeeded = (top_level__mercury_compile_front_end__NumPostTypeCheckErrors_34 > (MR_Integer) 0);
                      }
                  }
              }
            if (top_level__mercury_compile_front_end__succeeded)
              {
                *top_level__mercury_compile_front_end__STATE_VARIABLE_FoundError_40 = (MR_Integer) 1;
                *top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_46 = top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_127_127;
                *top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_44 = top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_124_124;
                *top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_42 = top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_121_121;
              }
            else
              {
                MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_130_130;
                MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_131_131;
                MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_135_135;

                {
                  top_level__mercury_compile_front_end__puritycheck_8_p_0(top_level__mercury_compile_front_end__Verbose_21, top_level__mercury_compile_front_end__Stats_22, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_121_121, &top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_130_130, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_127_127, &top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_131_131);
                }
                {
                  hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_130_130, (MR_Integer) 20, (MR_String) "puritycheck", top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_124_124, &top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_135_135);
                }
                top_level__mercury_compile_front_end__succeeded = (top_level__mercury_compile_front_end__OpModeAugment_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
                if (top_level__mercury_compile_front_end__succeeded)
                  {
                    *top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_46 = top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_131_131;
                    *top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_44 = top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_135_135;
                    *top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_42 = top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_130_130;
                    *top_level__mercury_compile_front_end__STATE_VARIABLE_FoundError_40 = top_level__mercury_compile_front_end__STATE_VARIABLE_FoundError_0_39;
                  }
                else
                  {
                    MR_Word top_level__mercury_compile_front_end__MakeOptInt_37;
                    MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_137_137;
                    MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_138_138;
                    MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_142_142;
                    MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_144_144;
                    MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_145_145;
                    MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_146_146;

                    {
                      top_level__mercury_compile_front_end__subst_implementation_defined_literals_8_p_0(top_level__mercury_compile_front_end__Verbose_21, top_level__mercury_compile_front_end__Stats_22, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_130_130, &top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_137_137, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_131_131, &top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_138_138);
                    }
                    {
                      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_137_137, (MR_Integer) 25, (MR_String) "implementation_defined_literals", top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_135_135, &top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_142_142);
                    }
                    top_level__mercury_compile_front_end__succeeded = (top_level__mercury_compile_front_end__OpModeAugment_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    if (top_level__mercury_compile_front_end__succeeded)
                      top_level__mercury_compile_front_end__MakeOptInt_37 = (MR_Integer) 1;
                    else
                      top_level__mercury_compile_front_end__MakeOptInt_37 = (MR_Integer) 0;
                    top_level__mercury_compile_front_end__succeeded = (top_level__mercury_compile_front_end__STATE_VARIABLE_FoundError_0_39 == (MR_Integer) 0);
                    if (top_level__mercury_compile_front_end__succeeded)
                      top_level__mercury_compile_front_end__succeeded = (top_level__mercury_compile_front_end__FoundUndefModeError_14 == (MR_Integer) 0);
                    if (top_level__mercury_compile_front_end__succeeded)
                      {
                        top_level__mercury_compile_front_end__maybe_write_initial_optfile_9_p_0(top_level__mercury_compile_front_end__MakeOptInt_37, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_137_137, &top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_144_144, top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_142_142, &top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_145_145, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_138_138, &top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_146_146);
                      }
                    else
                      {
                        top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_146_146 = top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_138_138;
                        top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_145_145 = top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_142_142;
                        top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_144_144 = top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_137_137;
                      }
                    switch (top_level__mercury_compile_front_end__MakeOptInt_37) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                          MR_Word top_level__mercury_compile_front_end__FoundModeOrDetError_38;

                          {
                            top_level__mercury_compile_front_end__frontend_pass_by_phases_9_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_144_144, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_42, &top_level__mercury_compile_front_end__FoundModeOrDetError_38, top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_145_145, top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_44, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_146_146, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_46);
                          }
                          {
                            *top_level__mercury_compile_front_end__STATE_VARIABLE_FoundError_40 = mercury__bool__or_2_f_0(top_level__mercury_compile_front_end__STATE_VARIABLE_FoundError_0_39, top_level__mercury_compile_front_end__FoundModeOrDetError_38);
                          }
                        }
                        break;
                      case (MR_Integer) 1:
                        {
                          *top_level__mercury_compile_front_end__STATE_VARIABLE_FoundError_40 = top_level__mercury_compile_front_end__STATE_VARIABLE_FoundError_0_39;
                          *top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_42 = top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_144_144;
                          *top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_44 = top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_145_145;
                          *top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_46 = top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_146_146;
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
top_level__mercury_compile_front_end__maybe_simplify_10_p_0_1(
  MR_Box top_level__mercury_compile_front_end__closure_arg,
  MR_Box top_level__mercury_compile_front_end__wrapper_arg_1,
  MR_Box top_level__mercury_compile_front_end__wrapper_arg_2,
  MR_Box * top_level__mercury_compile_front_end__wrapper_arg_3,
  MR_Box top_level__mercury_compile_front_end__wrapper_arg_4,
  MR_Box * top_level__mercury_compile_front_end__wrapper_arg_5,
  MR_Box top_level__mercury_compile_front_end__wrapper_arg_6,
  MR_Box * top_level__mercury_compile_front_end__wrapper_arg_7)
{
  {
    MR_Box top_level__mercury_compile_front_end__closure = top_level__mercury_compile_front_end__closure_arg;
    MR_Word top_level__mercury_compile_front_end__conv2_STATE_VARIABLE_ModuleInfo_23;
    MR_Word top_level__mercury_compile_front_end__conv1_STATE_VARIABLE_PredInfo_25;
    MR_Word top_level__mercury_compile_front_end__conv0_STATE_VARIABLE_Specs_27;

    {
      top_level__mercury_compile_front_end__simplify_pred_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_front_end__closure, (MR_Integer) 3))), ((MR_Word) top_level__mercury_compile_front_end__wrapper_arg_1), ((MR_Word) top_level__mercury_compile_front_end__wrapper_arg_2), &top_level__mercury_compile_front_end__conv2_STATE_VARIABLE_ModuleInfo_23, ((MR_Word) top_level__mercury_compile_front_end__wrapper_arg_4), &top_level__mercury_compile_front_end__conv1_STATE_VARIABLE_PredInfo_25, ((MR_Word) top_level__mercury_compile_front_end__wrapper_arg_6), &top_level__mercury_compile_front_end__conv0_STATE_VARIABLE_Specs_27);
    }
    *top_level__mercury_compile_front_end__wrapper_arg_3 = ((MR_Box) (top_level__mercury_compile_front_end__conv2_STATE_VARIABLE_ModuleInfo_23));
    *top_level__mercury_compile_front_end__wrapper_arg_5 = ((MR_Box) (top_level__mercury_compile_front_end__conv1_STATE_VARIABLE_PredInfo_25));
    *top_level__mercury_compile_front_end__wrapper_arg_7 = ((MR_Box) (top_level__mercury_compile_front_end__conv0_STATE_VARIABLE_Specs_27));
  }
}

void MR_CALL 
top_level__mercury_compile_front_end__maybe_simplify_10_p_0(
  MR_Word top_level__mercury_compile_front_end__Warn_11,
  MR_Word top_level__mercury_compile_front_end__SimplifyPass_12,
  MR_Word top_level__mercury_compile_front_end__Verbose_13,
  MR_Word top_level__mercury_compile_front_end__Stats_14,
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_31,
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_32,
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_33,
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_34)
{
  {
    MR_bool top_level__mercury_compile_front_end__succeeded;
    MR_Word top_level__mercury_compile_front_end__Globals_18;
    MR_Word top_level__mercury_compile_front_end__SimpList_19;
    MR_Word top_level__mercury_compile_front_end__SimplifyTasks0_20;
    MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_SimpList_37_37;

    {
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_31, &top_level__mercury_compile_front_end__Globals_18);
    }
    {
      check_hlds__simplify__simplify_tasks__find_simplify_tasks_3_p_0(top_level__mercury_compile_front_end__Warn_11, top_level__mercury_compile_front_end__Globals_18, &top_level__mercury_compile_front_end__SimplifyTasks0_20);
    }
    {
      top_level__mercury_compile_front_end__STATE_VARIABLE_SimpList_37_37 = check_hlds__simplify__simplify_tasks__simplify_tasks_to_list_1_f_0(top_level__mercury_compile_front_end__SimplifyTasks0_20);
    }
    switch (top_level__mercury_compile_front_end__SimplifyPass_12) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          {
            mercury__list__cons_3_p_0((MR_Word) &check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__type_ctor_info_simplify_task_0, ((MR_Box) ((MR_Integer) 6)), top_level__mercury_compile_front_end__STATE_VARIABLE_SimpList_37_37, &top_level__mercury_compile_front_end__SimpList_19);
          }
        }
        break;
      case (MR_Integer) 5:
        {
          MR_Word top_level__mercury_compile_front_end__TypeCtorInfo_89_89;
          MR_Word top_level__mercury_compile_front_end__ConstProp_23;
          MR_Word top_level__mercury_compile_front_end__DeepProf_24;
          MR_Word top_level__mercury_compile_front_end__TSWProf_25;
          MR_Word top_level__mercury_compile_front_end__TSCProf_26;
          MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_SimpList_43_43;
          MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_SimpList_47_47;

          {
            libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_front_end__Globals_18, (MR_Integer) 372, &top_level__mercury_compile_front_end__ConstProp_23);
          }
          {
            libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_front_end__Globals_18, (MR_Integer) 204, &top_level__mercury_compile_front_end__DeepProf_24);
          }
          {
            libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_front_end__Globals_18, (MR_Integer) 221, &top_level__mercury_compile_front_end__TSWProf_25);
          }
          {
            libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_front_end__Globals_18, (MR_Integer) 222, &top_level__mercury_compile_front_end__TSCProf_26);
          }
          top_level__mercury_compile_front_end__succeeded = (top_level__mercury_compile_front_end__ConstProp_23 == (MR_Integer) 1);
          if (top_level__mercury_compile_front_end__succeeded)
            {
              top_level__mercury_compile_front_end__succeeded = (top_level__mercury_compile_front_end__DeepProf_24 == (MR_Integer) 0);
              if (top_level__mercury_compile_front_end__succeeded)
                {
                  top_level__mercury_compile_front_end__succeeded = (top_level__mercury_compile_front_end__TSWProf_25 == (MR_Integer) 0);
                  if (top_level__mercury_compile_front_end__succeeded)
                    top_level__mercury_compile_front_end__succeeded = (top_level__mercury_compile_front_end__TSCProf_26 == (MR_Integer) 0);
                }
            }
          if (top_level__mercury_compile_front_end__succeeded)
            {
              {
                mercury__list__cons_3_p_0((MR_Word) &check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__type_ctor_info_simplify_task_0, ((MR_Box) ((MR_Integer) 11)), top_level__mercury_compile_front_end__STATE_VARIABLE_SimpList_37_37, &top_level__mercury_compile_front_end__STATE_VARIABLE_SimpList_43_43);
              }
            }
          else
            {
              {
                top_level__mercury_compile_front_end__STATE_VARIABLE_SimpList_43_43 = mercury__list__delete_all_2_f_0((MR_Word) &check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__type_ctor_info_simplify_task_0, top_level__mercury_compile_front_end__STATE_VARIABLE_SimpList_37_37, ((MR_Box) ((MR_Integer) 11)));
              }
            }
          top_level__mercury_compile_front_end__TypeCtorInfo_89_89 = (MR_Word) &check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__type_ctor_info_simplify_task_0;
          {
            mercury__list__cons_3_p_0(top_level__mercury_compile_front_end__TypeCtorInfo_89_89, ((MR_Box) ((MR_Integer) 5)), top_level__mercury_compile_front_end__STATE_VARIABLE_SimpList_43_43, &top_level__mercury_compile_front_end__STATE_VARIABLE_SimpList_47_47);
          }
          {
            mercury__list__cons_3_p_0(top_level__mercury_compile_front_end__TypeCtorInfo_89_89, ((MR_Box) ((MR_Integer) 9)), top_level__mercury_compile_front_end__STATE_VARIABLE_SimpList_47_47, &top_level__mercury_compile_front_end__SimpList_19);
          }
        }
        break;
      case (MR_Integer) 4:
        {
          {
            mercury__list__cons_3_p_0((MR_Word) &check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__type_ctor_info_simplify_task_0, ((MR_Box) ((MR_Integer) 5)), top_level__mercury_compile_front_end__STATE_VARIABLE_SimpList_37_37, &top_level__mercury_compile_front_end__SimpList_19);
          }
        }
        break;
      case (MR_Integer) 1:
        {
          {
            mercury__list__cons_3_p_0((MR_Word) &check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__type_ctor_info_simplify_task_0, ((MR_Box) ((MR_Integer) 5)), top_level__mercury_compile_front_end__STATE_VARIABLE_SimpList_37_37, &top_level__mercury_compile_front_end__SimpList_19);
          }
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word top_level__mercury_compile_front_end__PreParSimplify_22;

          {
            libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_front_end__Globals_18, (MR_Integer) 207, &top_level__mercury_compile_front_end__PreParSimplify_22);
          }
          switch (top_level__mercury_compile_front_end__PreParSimplify_22) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              top_level__mercury_compile_front_end__SimpList_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              break;
            case (MR_Integer) 1:
              {
                {
                  mercury__list__cons_3_p_0((MR_Word) &check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__type_ctor_info_simplify_task_0, ((MR_Box) ((MR_Integer) 5)), top_level__mercury_compile_front_end__STATE_VARIABLE_SimpList_37_37, &top_level__mercury_compile_front_end__SimpList_19);
                }
              }
              break;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word top_level__mercury_compile_front_end__PreProfSimplify_21;

          {
            libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_front_end__Globals_18, (MR_Integer) 206, &top_level__mercury_compile_front_end__PreProfSimplify_21);
          }
          switch (top_level__mercury_compile_front_end__PreProfSimplify_21) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              top_level__mercury_compile_front_end__SimpList_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              break;
            case (MR_Integer) 1:
              {
                {
                  mercury__list__cons_3_p_0((MR_Word) &check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__type_ctor_info_simplify_task_0, ((MR_Box) ((MR_Integer) 5)), top_level__mercury_compile_front_end__STATE_VARIABLE_SimpList_37_37, &top_level__mercury_compile_front_end__SimpList_19);
                }
              }
              break;
          }
        }
        break;
    }
    if ((top_level__mercury_compile_front_end__SimpList_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_32 = top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_31;
        *top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_34 = top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_33;
      }
    else
      {
        MR_Word top_level__mercury_compile_front_end__SimplifyTasks_29;
        MR_Word top_level__mercury_compile_front_end__SimplifySpecs_30;
        MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_64_64;
        MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_65_65;
        MR_Word top_level__mercury_compile_front_end__V_70_70;
        MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_71_71;
        MR_Word top_level__mercury_compile_front_end__V_74_74;

        {
          hlds__hlds_error_util__maybe_write_out_errors_8_p_0(top_level__mercury_compile_front_end__Verbose_13, top_level__mercury_compile_front_end__Globals_18, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_31, &top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_64_64, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_33, &top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_65_65);
        }
        {
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_front_end__Verbose_13, (MR_String) "% Simplifying goals...\n");
        }
        {
          libs__file_util__maybe_flush_output_3_p_0(top_level__mercury_compile_front_end__Verbose_13);
        }
        {
          top_level__mercury_compile_front_end__SimplifyTasks_29 = check_hlds__simplify__simplify_tasks__list_to_simplify_tasks_1_f_0(top_level__mercury_compile_front_end__SimpList_19);
        }
        {
          top_level__mercury_compile_front_end__V_74_74 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), top_level__mercury_compile_front_end__V_74_74, 0) = ((MR_Box) (&top_level__mercury_compile_front_end_scalar_common_4[0]));
          MR_hl_field(MR_mktag(0), top_level__mercury_compile_front_end__V_74_74, 1) = ((MR_Box) (top_level__mercury_compile_front_end__maybe_simplify_10_p_0_1));
          MR_hl_field(MR_mktag(0), top_level__mercury_compile_front_end__V_74_74, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), top_level__mercury_compile_front_end__V_74_74, 3) = ((MR_Box) (top_level__mercury_compile_front_end__SimplifyTasks_29));
        }
        top_level__mercury_compile_front_end__V_70_70 = (MR_Word) top_level__mercury_compile_front_end__V_74_74;
        {
          hlds__passes_aux__process_all_nonimported_preds_errors_7_p_0(top_level__mercury_compile_front_end__V_70_70, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_64_64, &top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_71_71, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &top_level__mercury_compile_front_end__SimplifySpecs_30);
        }
        switch (top_level__mercury_compile_front_end__SimplifyPass_12) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_75_75;

              {
                top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_75_75 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, top_level__mercury_compile_front_end__SimplifySpecs_30, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_65_65);
              }
              {
                hlds__hlds_error_util__maybe_write_out_errors_8_p_0(top_level__mercury_compile_front_end__Verbose_13, top_level__mercury_compile_front_end__Globals_18, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_71_71, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_32, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_75_75, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_34);
              }
            }
            break;
          case (MR_Integer) 5:
            {
              *top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_32 = top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_71_71;
              *top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_34 = top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_65_65;
            }
            break;
          case (MR_Integer) 4:
            {
              *top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_32 = top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_71_71;
              *top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_34 = top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_65_65;
            }
            break;
          case (MR_Integer) 1:
            {
              *top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_32 = top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_71_71;
              *top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_34 = top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_65_65;
            }
            break;
          case (MR_Integer) 3:
            {
              *top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_32 = top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_71_71;
              *top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_34 = top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_65_65;
            }
            break;
          case (MR_Integer) 2:
            {
              *top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_32 = top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_71_71;
              *top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_34 = top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_65_65;
            }
            break;
        }
        {
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_front_end__Verbose_13, (MR_String) "% done.\n");
        }
        {
          libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_front_end__Stats_14);
        }
      }
  }
}

void MR_CALL 
top_level__mercury_compile_front_end__frontend_pass_14_p_0(
  MR_Word top_level__mercury_compile_front_end__OpModeAugment_15,
  MR_Word top_level__mercury_compile_front_end__QualInfo0_16,
  MR_Word top_level__mercury_compile_front_end__FoundUndefTypeError_17,
  MR_Word top_level__mercury_compile_front_end__FoundUndefModeError_18,
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_FoundError_0_31,
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_FoundError_32,
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_33,
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_34,
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_0_35,
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_36,
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_37,
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_38)
{
  {
    MR_bool top_level__mercury_compile_front_end__succeeded;
    MR_Word top_level__mercury_compile_front_end__Globals_24;
    MR_Word top_level__mercury_compile_front_end__Verbose_25;

    {
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_33, &top_level__mercury_compile_front_end__Globals_24);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_front_end__Globals_24, (MR_Integer) 56, &top_level__mercury_compile_front_end__Verbose_25);
    }
    switch (top_level__mercury_compile_front_end__FoundUndefTypeError_17) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word top_level__mercury_compile_front_end__TypeCtorInfo_78_78;
          MR_Word top_level__mercury_compile_front_end__PostTypeSpecs_26;
          MR_Word top_level__mercury_compile_front_end__PostTypeErrors_27;
          MR_Word top_level__mercury_compile_front_end__QualInfo_28;
          MR_Word top_level__mercury_compile_front_end__TypeClassSpecs_29;
          MR_Word top_level__mercury_compile_front_end__TypeClassErrors_30;
          MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_42_42;
          MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_43_43;
          MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_47_47;
          MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_FoundError_48_48;
          MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_51_51;
          MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_55_55;
          MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_57_57;
          MR_Word top_level__mercury_compile_front_end__V_58_58;
          MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_61_61;
          MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_63_63;

          {
            hlds__hlds_error_util__maybe_write_out_errors_8_p_0(top_level__mercury_compile_front_end__Verbose_25, top_level__mercury_compile_front_end__Globals_24, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_33, &top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_42_42, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_37, &top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_43_43);
          }
          {
            libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_front_end__Verbose_25, (MR_String) "% Post-processing type definitions...\n");
          }
          {
            hlds__make_tags__post_process_type_defns_3_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_42_42, &top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_47_47, &top_level__mercury_compile_front_end__PostTypeSpecs_26);
          }
          {
            top_level__mercury_compile_front_end__PostTypeErrors_27 = parse_tree__error_util__contains_errors_2_f_0(top_level__mercury_compile_front_end__Globals_24, top_level__mercury_compile_front_end__PostTypeSpecs_26);
          }
          {
            mercury__bool__or_3_p_0(top_level__mercury_compile_front_end__PostTypeErrors_27, top_level__mercury_compile_front_end__STATE_VARIABLE_FoundError_0_31, &top_level__mercury_compile_front_end__STATE_VARIABLE_FoundError_48_48);
          }
          {
            hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_47_47, (MR_Integer) 3, (MR_String) "typedefn", top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_0_35, &top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_51_51);
          }
          {
            libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_front_end__Verbose_25, (MR_String) "% Checking typeclasses...\n");
          }
          {
            check_hlds__check_typeclass__check_typeclasses_6_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_47_47, &top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_55_55, top_level__mercury_compile_front_end__QualInfo0_16, &top_level__mercury_compile_front_end__QualInfo_28, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &top_level__mercury_compile_front_end__TypeClassSpecs_29);
          }
          top_level__mercury_compile_front_end__TypeCtorInfo_78_78 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0;
          {
            top_level__mercury_compile_front_end__V_58_58 = mercury__list__f_43_43_2_f_0(top_level__mercury_compile_front_end__TypeCtorInfo_78_78, top_level__mercury_compile_front_end__TypeClassSpecs_29, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_43_43);
          }
          {
            top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_57_57 = mercury__list__f_43_43_2_f_0(top_level__mercury_compile_front_end__TypeCtorInfo_78_78, top_level__mercury_compile_front_end__PostTypeSpecs_26, top_level__mercury_compile_front_end__V_58_58);
          }
          {
            hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_55_55, (MR_Integer) 5, (MR_String) "typeclass", top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_51_51, &top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_61_61);
          }
          {
            hlds__make_hlds__set_module_recomp_info_3_p_0(top_level__mercury_compile_front_end__QualInfo_28, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_55_55, &top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_63_63);
          }
          {
            top_level__mercury_compile_front_end__TypeClassErrors_30 = parse_tree__error_util__contains_errors_2_f_0(top_level__mercury_compile_front_end__Globals_24, top_level__mercury_compile_front_end__TypeClassSpecs_29);
          }
          switch (top_level__mercury_compile_front_end__TypeClassErrors_30) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                top_level__mercury_compile_front_end__frontend_pass_after_typeclass_check_12_p_0(top_level__mercury_compile_front_end__OpModeAugment_15, top_level__mercury_compile_front_end__FoundUndefModeError_18, top_level__mercury_compile_front_end__STATE_VARIABLE_FoundError_48_48, top_level__mercury_compile_front_end__STATE_VARIABLE_FoundError_32, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_63_63, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_34, top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_61_61, top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_36, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_57_57, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_38);
              }
              break;
            case (MR_Integer) 1:
              {
                *top_level__mercury_compile_front_end__STATE_VARIABLE_FoundError_32 = (MR_Integer) 1;
                *top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_34 = top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_63_63;
                *top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_36 = top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_61_61;
                *top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_38 = top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_57_57;
              }
              break;
          }
        }
        break;
      case (MR_Integer) 1:
        {
          *top_level__mercury_compile_front_end__STATE_VARIABLE_FoundError_32 = (MR_Integer) 1;
          {
            hlds__hlds_error_util__maybe_write_out_errors_8_p_0(top_level__mercury_compile_front_end__Verbose_25, top_level__mercury_compile_front_end__Globals_24, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_33, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_34, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_37, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_38);
          }
          {
            libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_front_end__Verbose_25, (MR_String) "% Program contains undefined type error(s).\n");
          }
          {
            mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
          }
          *top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_36 = top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_0_35;
        }
        break;
    }
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

/* :- end_module top_level.mercury_compile_front_end. */
