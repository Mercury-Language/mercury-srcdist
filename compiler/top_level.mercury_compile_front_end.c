/*
** Automatically generated from `mercury_compile_front_end.m'
** by the Mercury compiler,
** version rotd-2014-09-01
** configured for x86_64-apple-darwin13.3.0.
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
#include "array.mih"
#include "assoc_list.mih"
#include "backend_libs.mih"
#include "bag.mih"
#include "benchmarking.mih"
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "bytecode_backend.mih"
#include "char.mih"
#include "check_hlds.mih"
#include "construct.mih"
#include "cord.mih"
#include "deconstruct.mih"
#include "digraph.mih"
#include "enum.mih"
#include "erl_backend.mih"
#include "getopt_io.mih"
#include "hlds.mih"
#include "int.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "ll_backend.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "ml_backend.mih"
#include "mode_robdd.mih"
#include "multi_map.mih"
#include "ops.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "queue.mih"
#include "random.mih"
#include "recompilation.mih"
#include "require.mih"
#include "robdd.mih"
#include "rtti_implementation.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "sparse_bitset.mih"
#include "stack.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "top_level.mih"
#include "transform_hlds.mih"
#include "tree234.mih"
#include "tree_bitset.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "check_hlds.abstract_mode_constraints.mih"
#include "check_hlds.build_mode_constraints.mih"
#include "check_hlds.check_typeclass.mih"
#include "check_hlds.cse_detection.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.det_analysis.mih"
#include "check_hlds.det_report.mih"
#include "check_hlds.det_util.mih"
#include "check_hlds.implementation_defined_literals.mih"
#include "check_hlds.inst_check.mih"
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
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.lp_rational.mih"
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
#include "mdbcomp.trace_counts.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.equiv_type.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.module_cmds.mih"
#include "parse_tree.module_imports.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_io.mih"
#include "parse_tree.prog_io_util.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.set_of_var.mih"
#include "top_level.mercury_compile.mih"
#include "top_level.mercury_compile_middle_passes.mih"
#include "transform_hlds.dead_proc_elim.mih"
#include "transform_hlds.intermod.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "check_hlds.simplify.simplify_proc.mih"
#include "check_hlds.simplify.simplify_tasks.mih"
#include "hlds.make_hlds.qual_info.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 183 "top_level.mercury_compile_front_end.c"
static const MR_FA_PseudoTypeInfo_Struct1 top_level__mercury_compile_front_end__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0;

#line 186 "top_level.mercury_compile_front_end.c"
static const MR_FA_TypeInfo_Struct1 top_level__mercury_compile_front_end__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0;

#line 189 "top_level.mercury_compile_front_end.c"
static const MR_VA_PseudoTypeInfo_Struct3 top_level__mercury_compile_front_end____vpti_tuple_3__plain_hlds__hlds_module__type_ctor_info_module_info_0__plain_check_hlds__modes__type_ctor_info_modes_safe_to_continue_0__plain_list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0;

#line 192 "top_level.mercury_compile_front_end.c"
static const MR_FA_PseudoTypeInfo_Struct2 top_level__mercury_compile_front_end__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_hlds__hlds_module__type_ctor_info_oisu_preds_0;

#line 195 "top_level.mercury_compile_front_end.c"
static const MR_EnumFunctorDesc top_level__mercury_compile_front_end__top_level__mercury_compile_front_end__enum_functor_desc_simplify_pass_0_0;

#line 198 "top_level.mercury_compile_front_end.c"
static const MR_EnumFunctorDesc top_level__mercury_compile_front_end__top_level__mercury_compile_front_end__enum_functor_desc_simplify_pass_0_1;

#line 201 "top_level.mercury_compile_front_end.c"
static const MR_EnumFunctorDesc top_level__mercury_compile_front_end__top_level__mercury_compile_front_end__enum_functor_desc_simplify_pass_0_2;

#line 204 "top_level.mercury_compile_front_end.c"
static const MR_EnumFunctorDesc top_level__mercury_compile_front_end__top_level__mercury_compile_front_end__enum_functor_desc_simplify_pass_0_3;

#line 207 "top_level.mercury_compile_front_end.c"
static const MR_EnumFunctorDesc top_level__mercury_compile_front_end__top_level__mercury_compile_front_end__enum_functor_desc_simplify_pass_0_4;

#line 210 "top_level.mercury_compile_front_end.c"
static const MR_EnumFunctorDesc top_level__mercury_compile_front_end__top_level__mercury_compile_front_end__enum_functor_desc_simplify_pass_0_5;

#line 213 "top_level.mercury_compile_front_end.c"
static const MR_EnumFunctorDescPtr top_level__mercury_compile_front_end__top_level__mercury_compile_front_end__enum_value_ordered_simplify_pass_0[6];

#line 216 "top_level.mercury_compile_front_end.c"
static const MR_EnumFunctorDescPtr top_level__mercury_compile_front_end__top_level__mercury_compile_front_end__enum_name_ordered_simplify_pass_0[6];

#line 219 "top_level.mercury_compile_front_end.c"
static const MR_Integer top_level__mercury_compile_front_end__top_level__mercury_compile_front_end__functor_number_map_simplify_pass_0[6];

#line 222 "top_level.mercury_compile_front_end.c"
static MR_bool MR_CALL 
top_level__mercury_compile_front_end____Unify____simplify_pass_0_0_10001(
#line 225 "top_level.mercury_compile_front_end.c"
  MR_Box top_level__mercury_compile_front_end__wrapper_arg_1,
#line 227 "top_level.mercury_compile_front_end.c"
  MR_Box top_level__mercury_compile_front_end__wrapper_arg_2);

#line 230 "top_level.mercury_compile_front_end.c"
static void MR_CALL 
top_level__mercury_compile_front_end____Compare____simplify_pass_0_0_10001(
#line 233 "top_level.mercury_compile_front_end.c"
  MR_Box * top_level__mercury_compile_front_end__wrapper_arg_1,
#line 235 "top_level.mercury_compile_front_end.c"
  MR_Box top_level__mercury_compile_front_end__wrapper_arg_2,
#line 237 "top_level.mercury_compile_front_end.c"
  MR_Box top_level__mercury_compile_front_end__wrapper_arg_3);

#line 1033 "mercury_compile_front_end.m"
static void MR_CALL 
top_level__mercury_compile_front_end__maybe_proc_statistics_9_p_0(
#line 1033 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__Verbose_10,
#line 1033 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__Stats_11,
#line 1033 "mercury_compile_front_end.m"
  MR_String top_level__mercury_compile_front_end__Msg_12,
#line 1033 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_22,
#line 1033 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_23,
#line 1033 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_24,
#line 1033 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_25);

#line 1006 "mercury_compile_front_end.m"
static void MR_CALL 
top_level__mercury_compile_front_end__simplify_pred_8_p_0(
#line 1006 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__SimplifyTasks0_9,
#line 1006 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__PredId_10,
#line 1006 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_ModuleInfo_0_22,
#line 1006 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_ModuleInfo_23,
#line 1006 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_PredInfo_0_24,
#line 1006 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_PredInfo_25,
#line 1006 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_26,
#line 1006 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_27);

#line 881 "mercury_compile_front_end.m"
static void MR_CALL 
top_level__mercury_compile_front_end__process_try_goals_9_p_0(
#line 881 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__Verbose_10,
#line 881 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__Stats_11,
#line 881 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_18,
#line 881 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_19,
#line 881 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__FoundError_13,
#line 881 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_20,
#line 881 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_21);

#line 871 "mercury_compile_front_end.m"
static MR_bool MR_CALL 
top_level__mercury_compile_front_end__type_ctor_is_defined_in_this_module_2_p_0(
#line 871 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__ModuleName_3,
#line 871 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__HeadVar__2_2);

#line 845 "mercury_compile_front_end.m"
static MR_bool MR_CALL 
top_level__mercury_compile_front_end__check_oisu_pragmas_9_p_0_1(
#line 845 "mercury_compile_front_end.m"
  MR_Box top_level__mercury_compile_front_end__closure_arg,
#line 845 "mercury_compile_front_end.m"
  MR_Box top_level__mercury_compile_front_end__wrapper_arg_1);

#line 837 "mercury_compile_front_end.m"
static void MR_CALL 
top_level__mercury_compile_front_end__check_oisu_pragmas_9_p_0(
#line 837 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__Verbose_10,
#line 837 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__Stats_11,
#line 837 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_24,
#line 837 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_25,
#line 837 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__FoundError_13,
#line 837 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_26,
#line 837 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_27);

#line 802 "mercury_compile_front_end.m"
static void MR_CALL 
top_level__mercury_compile_front_end__check_stratification_9_p_0(
#line 802 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__Verbose_10,
#line 802 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__Stats_11,
#line 802 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_20,
#line 802 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_21,
#line 802 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__FoundError_13,
#line 802 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_22,
#line 802 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_23);

#line 777 "mercury_compile_front_end.m"
static void MR_CALL 
top_level__mercury_compile_front_end__check_unique_modes_9_p_0(
#line 777 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__Verbose_10,
#line 777 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__Stats_11,
#line 777 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_18,
#line 777 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_19,
#line 777 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__FoundError_13,
#line 777 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_20,
#line 777 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_21);

#line 755 "mercury_compile_front_end.m"
static void MR_CALL 
top_level__mercury_compile_front_end__check_determinism_8_p_0(
#line 755 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__Verbose_9,
#line 755 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__Stats_10,
#line 755 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_17,
#line 755 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_18,
#line 755 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_19,
#line 755 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_20);

#line 743 "mercury_compile_front_end.m"
static void MR_CALL 
top_level__mercury_compile_front_end__detect_cse_6_p_0(
#line 743 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__Verbose_7,
#line 743 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__Stats_8,
#line 743 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_11,
#line 743 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_12);

#line 731 "mercury_compile_front_end.m"
static void MR_CALL 
top_level__mercury_compile_front_end__detect_switches_6_p_0(
#line 731 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__Verbose_7,
#line 731 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__Stats_8,
#line 731 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_11,
#line 731 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_12);

#line 681 "mercury_compile_front_end.m"
static void MR_CALL 
top_level__mercury_compile_front_end__modecheck_10_p_0_1(
#line 681 "mercury_compile_front_end.m"
  MR_Box top_level__mercury_compile_front_end__closure_arg,
#line 681 "mercury_compile_front_end.m"
  MR_Box top_level__mercury_compile_front_end__wrapper_arg_1,
#line 681 "mercury_compile_front_end.m"
  MR_Box * top_level__mercury_compile_front_end__wrapper_arg_2);

#line 667 "mercury_compile_front_end.m"
static void MR_CALL 
top_level__mercury_compile_front_end__modecheck_10_p_0(
#line 667 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__Verbose_11,
#line 667 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__Stats_12,
#line 667 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_23,
#line 667 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_24,
#line 667 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__FoundModeError_14,
#line 667 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__SafeToContinue_15,
#line 667 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_25,
#line 667 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_26);

#line 436 "top_level.mercury_compile_front_end.c"
static void MR_CALL 
top_level__mercury_compile_front_end__maybe_mode_constraints_6_p_0_1(
#line 439 "top_level.mercury_compile_front_end.c"
  MR_Box top_level__mercury_compile_front_end__closure_arg,
#line 441 "top_level.mercury_compile_front_end.c"
  MR_Box top_level__mercury_compile_front_end__wrapper_arg_1,
#line 443 "top_level.mercury_compile_front_end.c"
  MR_Box * top_level__mercury_compile_front_end__wrapper_arg_2,
#line 445 "top_level.mercury_compile_front_end.c"
  MR_Box top_level__mercury_compile_front_end__wrapper_arg_3,
#line 447 "top_level.mercury_compile_front_end.c"
  MR_Box * top_level__mercury_compile_front_end__wrapper_arg_4);

#line 649 "mercury_compile_front_end.m"
static void MR_CALL 
top_level__mercury_compile_front_end__maybe_mode_constraints_6_p_0(
#line 649 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__Verbose_7,
#line 649 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__Stats_8,
#line 649 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_13,
#line 649 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_14);

#line 626 "mercury_compile_front_end.m"
static void MR_CALL 
top_level__mercury_compile_front_end__maybe_unused_imports_8_p_0(
#line 626 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__Verbose_9,
#line 626 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__Stats_10,
#line 626 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_17,
#line 626 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_18,
#line 626 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_19,
#line 626 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_20);

#line 584 "mercury_compile_front_end.m"
static void MR_CALL 
top_level__mercury_compile_front_end__maybe_polymorphism_8_p_0(
#line 584 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__Verbose_9,
#line 584 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__Stats_10,
#line 584 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_17,
#line 584 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_18,
#line 584 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_19,
#line 584 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_20);

#line 568 "mercury_compile_front_end.m"
static void MR_CALL 
top_level__mercury_compile_front_end__subst_implementation_defined_literals_8_p_0(
#line 568 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__Verbose_9,
#line 568 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__Stats_10,
#line 568 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_15,
#line 568 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_16,
#line 568 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_17,
#line 568 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_18);

#line 544 "mercury_compile_front_end.m"
static void MR_CALL 
top_level__mercury_compile_front_end__puritycheck_8_p_0(
#line 544 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__Verbose_9,
#line 544 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__Stats_10,
#line 544 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_17,
#line 544 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_18,
#line 544 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_19,
#line 544 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_20);

#line 461 "mercury_compile_front_end.m"
static void MR_CALL 
top_level__mercury_compile_front_end__frontend_pass_by_phases_9_p_0(
#line 461 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_26,
#line 461 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_27,
#line 461 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__FoundError_11,
#line 461 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_0_28,
#line 461 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_29,
#line 461 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_30,
#line 461 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_31);

#line 360 "mercury_compile_front_end.m"
static void MR_CALL 
top_level__mercury_compile_front_end__maybe_write_optfile_9_p_0(
#line 360 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__MakeOptInt_10,
#line 360 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_36,
#line 360 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_37,
#line 360 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_0_38,
#line 360 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_39,
#line 360 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_40,
#line 360 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_41);

#line 170 "mercury_compile_front_end.m"
static void MR_CALL 
top_level__mercury_compile_front_end__frontend_pass_after_typeclass_check_11_p_0(
#line 170 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__FoundUndefModeError_12,
#line 170 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_FoundError_0_39,
#line 170 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_FoundError_40,
#line 170 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_41,
#line 170 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_42,
#line 170 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_0_43,
#line 170 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_44,
#line 170 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_45,
#line 170 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_46);

#line 986 "mercury_compile_front_end.m"
static void MR_CALL 
top_level__mercury_compile_front_end__maybe_simplify_10_p_0_1(
#line 986 "mercury_compile_front_end.m"
  MR_Box top_level__mercury_compile_front_end__closure_arg,
#line 986 "mercury_compile_front_end.m"
  MR_Box top_level__mercury_compile_front_end__wrapper_arg_1,
#line 986 "mercury_compile_front_end.m"
  MR_Box top_level__mercury_compile_front_end__wrapper_arg_2,
#line 986 "mercury_compile_front_end.m"
  MR_Box * top_level__mercury_compile_front_end__wrapper_arg_3,
#line 986 "mercury_compile_front_end.m"
  MR_Box top_level__mercury_compile_front_end__wrapper_arg_4,
#line 986 "mercury_compile_front_end.m"
  MR_Box * top_level__mercury_compile_front_end__wrapper_arg_5,
#line 986 "mercury_compile_front_end.m"
  MR_Box top_level__mercury_compile_front_end__wrapper_arg_6,
#line 986 "mercury_compile_front_end.m"
  MR_Box * top_level__mercury_compile_front_end__wrapper_arg_7);


static /* final */ const MR_Box top_level__mercury_compile_front_end_scalar_common_1[1][2];

static /* final */ const MR_Box top_level__mercury_compile_front_end_scalar_common_2[3][5];

static /* final */ const MR_Box top_level__mercury_compile_front_end_scalar_common_3[3][3];

static /* final */ const MR_Box top_level__mercury_compile_front_end_scalar_common_4[1][11];

static /* final */ const MR_Box top_level__mercury_compile_front_end_scalar_common_5[1][7];




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
    ((MR_Box) (&check_hlds__modes__check_hlds__modes__type_ctor_info_modes_safe_to_continue_0)),
    ((MR_Box) (&top_level__mercury_compile_front_end_scalar_common_1[0]))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&top_level__mercury_compile_front_end____vpti_tuple_3__plain_hlds__hlds_module__type_ctor_info_module_info_0__plain_check_hlds__modes__type_ctor_info_modes_safe_to_continue_0__plain_list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0)),
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
    ((MR_Box) (&top_level__mercury_compile_front_end_scalar_common_5[0])),
    ((MR_Box) (top_level__mercury_compile_front_end__maybe_mode_constraints_6_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&top_level__mercury_compile_front_end_scalar_common_2[1])),
    ((MR_Box) (top_level__mercury_compile_front_end__modecheck_10_p_0_1)),
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

static /* final */ const MR_Box top_level__mercury_compile_front_end_scalar_common_5[1][7] = {
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
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "array.mh"
#include "array.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"



#line 721 "top_level.mercury_compile_front_end.c"
static const MR_FA_PseudoTypeInfo_Struct1 top_level__mercury_compile_front_end__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0
  }
};

#line 729 "top_level.mercury_compile_front_end.c"
static const MR_FA_TypeInfo_Struct1 top_level__mercury_compile_front_end__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0
  }
};

#line 737 "top_level.mercury_compile_front_end.c"
static const MR_VA_PseudoTypeInfo_Struct3 top_level__mercury_compile_front_end____vpti_tuple_3__plain_hlds__hlds_module__type_ctor_info_module_info_0__plain_check_hlds__modes__type_ctor_info_modes_safe_to_continue_0__plain_list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__builtin__builtin__type_ctor_info_tuple_0,
  (MR_Integer) 3,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0,
    (MR_PseudoTypeInfo) &check_hlds__modes__check_hlds__modes__type_ctor_info_modes_safe_to_continue_0,
    (MR_PseudoTypeInfo) &top_level__mercury_compile_front_end__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0
  }
};

#line 748 "top_level.mercury_compile_front_end.c"
static const MR_FA_PseudoTypeInfo_Struct2 top_level__mercury_compile_front_end__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_hlds__hlds_module__type_ctor_info_oisu_preds_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0,
    (MR_PseudoTypeInfo) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_oisu_preds_0
  }
};

#line 757 "top_level.mercury_compile_front_end.c"
static const MR_EnumFunctorDesc top_level__mercury_compile_front_end__top_level__mercury_compile_front_end__enum_functor_desc_simplify_pass_0_0 = {
  (MR_String) "simplify_pass_frontend",
  (MR_Integer) 0
};

#line 763 "top_level.mercury_compile_front_end.c"
static const MR_EnumFunctorDesc top_level__mercury_compile_front_end__top_level__mercury_compile_front_end__enum_functor_desc_simplify_pass_0_1 = {
  (MR_String) "simplify_pass_post_untuple",
  (MR_Integer) 1
};

#line 769 "top_level.mercury_compile_front_end.c"
static const MR_EnumFunctorDesc top_level__mercury_compile_front_end__top_level__mercury_compile_front_end__enum_functor_desc_simplify_pass_0_2 = {
  (MR_String) "simplify_pass_pre_prof_transforms",
  (MR_Integer) 2
};

#line 775 "top_level.mercury_compile_front_end.c"
static const MR_EnumFunctorDesc top_level__mercury_compile_front_end__top_level__mercury_compile_front_end__enum_functor_desc_simplify_pass_0_3 = {
  (MR_String) "simplify_pass_pre_implicit_parallelism",
  (MR_Integer) 3
};

#line 781 "top_level.mercury_compile_front_end.c"
static const MR_EnumFunctorDesc top_level__mercury_compile_front_end__top_level__mercury_compile_front_end__enum_functor_desc_simplify_pass_0_4 = {
  (MR_String) "simplify_pass_ml_backend",
  (MR_Integer) 4
};

#line 787 "top_level.mercury_compile_front_end.c"
static const MR_EnumFunctorDesc top_level__mercury_compile_front_end__top_level__mercury_compile_front_end__enum_functor_desc_simplify_pass_0_5 = {
  (MR_String) "simplify_pass_ll_backend",
  (MR_Integer) 5
};

#line 793 "top_level.mercury_compile_front_end.c"
static const MR_EnumFunctorDescPtr top_level__mercury_compile_front_end__top_level__mercury_compile_front_end__enum_value_ordered_simplify_pass_0[6] = {
  &top_level__mercury_compile_front_end__top_level__mercury_compile_front_end__enum_functor_desc_simplify_pass_0_0,
  &top_level__mercury_compile_front_end__top_level__mercury_compile_front_end__enum_functor_desc_simplify_pass_0_1,
  &top_level__mercury_compile_front_end__top_level__mercury_compile_front_end__enum_functor_desc_simplify_pass_0_2,
  &top_level__mercury_compile_front_end__top_level__mercury_compile_front_end__enum_functor_desc_simplify_pass_0_3,
  &top_level__mercury_compile_front_end__top_level__mercury_compile_front_end__enum_functor_desc_simplify_pass_0_4,
  &top_level__mercury_compile_front_end__top_level__mercury_compile_front_end__enum_functor_desc_simplify_pass_0_5
};

#line 803 "top_level.mercury_compile_front_end.c"
static const MR_EnumFunctorDescPtr top_level__mercury_compile_front_end__top_level__mercury_compile_front_end__enum_name_ordered_simplify_pass_0[6] = {
  &top_level__mercury_compile_front_end__top_level__mercury_compile_front_end__enum_functor_desc_simplify_pass_0_0,
  &top_level__mercury_compile_front_end__top_level__mercury_compile_front_end__enum_functor_desc_simplify_pass_0_5,
  &top_level__mercury_compile_front_end__top_level__mercury_compile_front_end__enum_functor_desc_simplify_pass_0_4,
  &top_level__mercury_compile_front_end__top_level__mercury_compile_front_end__enum_functor_desc_simplify_pass_0_1,
  &top_level__mercury_compile_front_end__top_level__mercury_compile_front_end__enum_functor_desc_simplify_pass_0_3,
  &top_level__mercury_compile_front_end__top_level__mercury_compile_front_end__enum_functor_desc_simplify_pass_0_2
};

#line 813 "top_level.mercury_compile_front_end.c"
static const MR_Integer top_level__mercury_compile_front_end__top_level__mercury_compile_front_end__functor_number_map_simplify_pass_0[6] = {
  (MR_Integer) 0,
  (MR_Integer) 3,
  (MR_Integer) 5,
  (MR_Integer) 4,
  (MR_Integer) 2,
  (MR_Integer) 1
};

#line 823 "top_level.mercury_compile_front_end.c"
const MR_TypeCtorInfo_Struct top_level__mercury_compile_front_end__top_level__mercury_compile_front_end__type_ctor_info_simplify_pass_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (top_level__mercury_compile_front_end____Unify____simplify_pass_0_0_10001)),
  ((MR_Box) (top_level__mercury_compile_front_end____Compare____simplify_pass_0_0_10001)),
  (MR_String) "top_level.mercury_compile_front_end",
  (MR_String) "simplify_pass",
  {
    top_level__mercury_compile_front_end__top_level__mercury_compile_front_end__enum_name_ordered_simplify_pass_0
  },
  {
    top_level__mercury_compile_front_end__top_level__mercury_compile_front_end__enum_value_ordered_simplify_pass_0
  },
  (MR_Integer) 6,
  (MR_Integer) 4,
  top_level__mercury_compile_front_end__top_level__mercury_compile_front_end__functor_number_map_simplify_pass_0
};

#line 844 "top_level.mercury_compile_front_end.c"
static MR_bool MR_CALL 
top_level__mercury_compile_front_end____Unify____simplify_pass_0_0_10001(
#line 847 "top_level.mercury_compile_front_end.c"
  MR_Box top_level__mercury_compile_front_end__wrapper_arg_1,
#line 849 "top_level.mercury_compile_front_end.c"
  MR_Box top_level__mercury_compile_front_end__wrapper_arg_2)
#line 851 "top_level.mercury_compile_front_end.c"
{
#line 853 "top_level.mercury_compile_front_end.c"
  {
#line 855 "top_level.mercury_compile_front_end.c"
    MR_bool top_level__mercury_compile_front_end__succeeded;

#line 858 "top_level.mercury_compile_front_end.c"
    {
#line 860 "top_level.mercury_compile_front_end.c"
      top_level__mercury_compile_front_end__succeeded = top_level__mercury_compile_front_end____Unify____simplify_pass_0_0(((MR_Word) top_level__mercury_compile_front_end__wrapper_arg_1), ((MR_Word) top_level__mercury_compile_front_end__wrapper_arg_2));
    }
#line 863 "top_level.mercury_compile_front_end.c"
    return top_level__mercury_compile_front_end__succeeded;
#line 865 "top_level.mercury_compile_front_end.c"
  }
#line 867 "top_level.mercury_compile_front_end.c"
}

#line 870 "top_level.mercury_compile_front_end.c"
static void MR_CALL 
top_level__mercury_compile_front_end____Compare____simplify_pass_0_0_10001(
#line 873 "top_level.mercury_compile_front_end.c"
  MR_Box * top_level__mercury_compile_front_end__wrapper_arg_1,
#line 875 "top_level.mercury_compile_front_end.c"
  MR_Box top_level__mercury_compile_front_end__wrapper_arg_2,
#line 877 "top_level.mercury_compile_front_end.c"
  MR_Box top_level__mercury_compile_front_end__wrapper_arg_3)
#line 879 "top_level.mercury_compile_front_end.c"
{
#line 881 "top_level.mercury_compile_front_end.c"
  {
#line 883 "top_level.mercury_compile_front_end.c"
    MR_Word top_level__mercury_compile_front_end__conv0_HeadVar__1_1;

#line 886 "top_level.mercury_compile_front_end.c"
    {
#line 888 "top_level.mercury_compile_front_end.c"
      top_level__mercury_compile_front_end____Compare____simplify_pass_0_0(&top_level__mercury_compile_front_end__conv0_HeadVar__1_1, ((MR_Word) top_level__mercury_compile_front_end__wrapper_arg_2), ((MR_Word) top_level__mercury_compile_front_end__wrapper_arg_3));
    }
#line 891 "top_level.mercury_compile_front_end.c"
    *top_level__mercury_compile_front_end__wrapper_arg_1 = ((MR_Box) (top_level__mercury_compile_front_end__conv0_HeadVar__1_1));
#line 893 "top_level.mercury_compile_front_end.c"
  }
#line 895 "top_level.mercury_compile_front_end.c"
}

#line 41 "mercury_compile_front_end.m"
void MR_CALL 
top_level__mercury_compile_front_end____Compare____simplify_pass_0_0(
#line 41 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__HeadVar__1_1,
#line 41 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__HeadVar__2_2,
#line 41 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__HeadVar__3_3)
#line 41 "mercury_compile_front_end.m"
{
#line 41 "mercury_compile_front_end.m"
  {
#line 41 "mercury_compile_front_end.m"
    MR_bool top_level__mercury_compile_front_end__succeeded;
#line 41 "mercury_compile_front_end.m"
    MR_Integer top_level__mercury_compile_front_end__Cast_HeadVar1_4 = (MR_Integer) top_level__mercury_compile_front_end__HeadVar__2_2;
#line 41 "mercury_compile_front_end.m"
    MR_Integer top_level__mercury_compile_front_end__Cast_HeadVar2_5 = (MR_Integer) top_level__mercury_compile_front_end__HeadVar__3_3;

#line 41 "mercury_compile_front_end.m"
    {
#line 41 "mercury_compile_front_end.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(top_level__mercury_compile_front_end__HeadVar__1_1, top_level__mercury_compile_front_end__Cast_HeadVar1_4, top_level__mercury_compile_front_end__Cast_HeadVar2_5);
#line 41 "mercury_compile_front_end.m"
      return;
    }
#line 41 "mercury_compile_front_end.m"
  }
#line 41 "mercury_compile_front_end.m"
}

#line 41 "mercury_compile_front_end.m"
MR_bool MR_CALL 
top_level__mercury_compile_front_end____Unify____simplify_pass_0_0(
#line 41 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__HeadVar__2_1,
#line 41 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__HeadVar__2_2)
#line 41 "mercury_compile_front_end.m"
{
#line 939 "top_level.mercury_compile_front_end.c"
  {
#line 941 "top_level.mercury_compile_front_end.c"
    MR_bool top_level__mercury_compile_front_end__succeeded = (top_level__mercury_compile_front_end__HeadVar__2_1 == top_level__mercury_compile_front_end__HeadVar__2_2);

#line 944 "top_level.mercury_compile_front_end.c"
    return top_level__mercury_compile_front_end__succeeded;
#line 946 "top_level.mercury_compile_front_end.c"
  }
#line 41 "mercury_compile_front_end.m"
}

#line 1033 "mercury_compile_front_end.m"
static void MR_CALL 
top_level__mercury_compile_front_end__maybe_proc_statistics_9_p_0(
#line 1033 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__Verbose_10,
#line 1033 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__Stats_11,
#line 1033 "mercury_compile_front_end.m"
  MR_String top_level__mercury_compile_front_end__Msg_12,
#line 1033 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_22,
#line 1033 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_23,
#line 1033 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_24,
#line 1033 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_25)
#line 1033 "mercury_compile_front_end.m"
{
#line 1037 "mercury_compile_front_end.m"
  {
#line 1037 "mercury_compile_front_end.m"
    MR_bool top_level__mercury_compile_front_end__succeeded;
#line 1037 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__Globals_16;
#line 1037 "mercury_compile_front_end.m"
    MR_String top_level__mercury_compile_front_end__StatsFileName_17;

#line 1038 "mercury_compile_front_end.m"
    {
#line 1038 "mercury_compile_front_end.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_22, &top_level__mercury_compile_front_end__Globals_16);
    }
#line 1039 "mercury_compile_front_end.m"
    {
#line 1039 "mercury_compile_front_end.m"
      hlds__hlds_error_util__maybe_write_out_errors_8_p_0(top_level__mercury_compile_front_end__Verbose_10, top_level__mercury_compile_front_end__Globals_16, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_22, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_23, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_24, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_25);
    }
#line 1041 "mercury_compile_front_end.m"
    {
#line 1041 "mercury_compile_front_end.m"
      libs__globals__lookup_string_option_3_p_0(top_level__mercury_compile_front_end__Globals_16, (MR_Integer) 56, &top_level__mercury_compile_front_end__StatsFileName_17);
    }
#line 1042 "mercury_compile_front_end.m"
    top_level__mercury_compile_front_end__succeeded = (strcmp(top_level__mercury_compile_front_end__StatsFileName_17, (MR_String) "") == 0);
#line 1045 "mercury_compile_front_end.m"
    if (top_level__mercury_compile_front_end__succeeded)
#line 1042 "mercury_compile_front_end.m"
      {
#line 1042 "mercury_compile_front_end.m"
      }
#line 1045 "mercury_compile_front_end.m"
    else
#line 1046 "mercury_compile_front_end.m"
      {
#line 1046 "mercury_compile_front_end.m"
        MR_Word top_level__mercury_compile_front_end__StatsFileNameResult_18;

#line 1046 "mercury_compile_front_end.m"
        {
#line 1046 "mercury_compile_front_end.m"
          mercury__io__open_append_4_p_0(top_level__mercury_compile_front_end__StatsFileName_17, &top_level__mercury_compile_front_end__StatsFileNameResult_18);
        }
#line 1054 "mercury_compile_front_end.m"
        if (((MR_tag((MR_Word) top_level__mercury_compile_front_end__StatsFileNameResult_18)) == (MR_mktag((MR_Integer) 1))))
#line 1055 "mercury_compile_front_end.m"
          {
#line 1055 "mercury_compile_front_end.m"
            MR_Word top_level__mercury_compile_front_end__StatsFileError_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), top_level__mercury_compile_front_end__StatsFileNameResult_18, (MR_Integer) 0)));
#line 1055 "mercury_compile_front_end.m"
            MR_String top_level__mercury_compile_front_end__StatsFileErrorMsg_21;

#line 1056 "mercury_compile_front_end.m"
            {
#line 1056 "mercury_compile_front_end.m"
              mercury__io__error_message_2_p_0(top_level__mercury_compile_front_end__StatsFileError_20, &top_level__mercury_compile_front_end__StatsFileErrorMsg_21);
            }
#line 1057 "mercury_compile_front_end.m"
            {
#line 1057 "mercury_compile_front_end.m"
              libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_front_end__Verbose_10, (MR_String) "% Cannot write proc statistics: ");
            }
#line 1059 "mercury_compile_front_end.m"
            {
#line 1059 "mercury_compile_front_end.m"
              libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_front_end__Verbose_10, top_level__mercury_compile_front_end__StatsFileErrorMsg_21);
            }
#line 1060 "mercury_compile_front_end.m"
            {
#line 1060 "mercury_compile_front_end.m"
              libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_front_end__Verbose_10, (MR_String) "\n");
#line 1060 "mercury_compile_front_end.m"
              return;
            }
#line 1055 "mercury_compile_front_end.m"
          }
#line 1054 "mercury_compile_front_end.m"
        else
#line 1048 "mercury_compile_front_end.m"
          {
#line 1048 "mercury_compile_front_end.m"
            MR_Word top_level__mercury_compile_front_end__StatsFileStream_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_front_end__StatsFileNameResult_18, (MR_Integer) 0)));

#line 1049 "mercury_compile_front_end.m"
            {
#line 1049 "mercury_compile_front_end.m"
              libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_front_end__Verbose_10, (MR_String) "% Generating proc statistics...\n");
            }
#line 1051 "mercury_compile_front_end.m"
            {
#line 1051 "mercury_compile_front_end.m"
              hlds__hlds_statistics__write_proc_stats_for_module_5_p_0(top_level__mercury_compile_front_end__StatsFileStream_19, top_level__mercury_compile_front_end__Msg_12, *top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_23);
            }
#line 1052 "mercury_compile_front_end.m"
            {
#line 1052 "mercury_compile_front_end.m"
              libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_front_end__Verbose_10, (MR_String) "% done.\n");
            }
#line 1053 "mercury_compile_front_end.m"
            {
#line 1053 "mercury_compile_front_end.m"
              libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_front_end__Stats_11);
#line 1053 "mercury_compile_front_end.m"
              return;
            }
#line 1048 "mercury_compile_front_end.m"
          }
#line 1046 "mercury_compile_front_end.m"
      }
#line 1037 "mercury_compile_front_end.m"
  }
#line 1033 "mercury_compile_front_end.m"
}

#line 1006 "mercury_compile_front_end.m"
static void MR_CALL 
top_level__mercury_compile_front_end__simplify_pred_8_p_0(
#line 1006 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__SimplifyTasks0_9,
#line 1006 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__PredId_10,
#line 1006 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_ModuleInfo_0_22,
#line 1006 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_ModuleInfo_23,
#line 1006 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_PredInfo_0_24,
#line 1006 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_PredInfo_25,
#line 1006 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_26,
#line 1006 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_27)
#line 1006 "mercury_compile_front_end.m"
{
#line 1010 "mercury_compile_front_end.m"
  {
#line 1010 "mercury_compile_front_end.m"
    MR_bool top_level__mercury_compile_front_end__succeeded;
#line 1010 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__ProcIds_15;
#line 1010 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__SimplifyTasks_16;
#line 1010 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__ErrorSpecs0_17;
#line 1010 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__ErrorSpecs_18;
#line 1010 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__Globals_19;
#line 1010 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__SpecsList_20;
#line 1010 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__Statistics_21;

#line 1012 "mercury_compile_front_end.m"
    {
#line 1012 "mercury_compile_front_end.m"
      hlds__passes_aux__write_pred_progress_message_5_p_0((MR_String) "% Simplifying ", top_level__mercury_compile_front_end__PredId_10, top_level__mercury_compile_front_end__STATE_VARIABLE_ModuleInfo_0_22);
    }
#line 1015 "mercury_compile_front_end.m"
    {
#line 1015 "mercury_compile_front_end.m"
      top_level__mercury_compile_front_end__ProcIds_15 = hlds__hlds_pred__pred_info_non_imported_procids_1_f_0(top_level__mercury_compile_front_end__STATE_VARIABLE_PredInfo_0_24);
    }
#line 1017 "mercury_compile_front_end.m"
    {
#line 1017 "mercury_compile_front_end.m"
      top_level__mercury_compile_front_end__succeeded = hlds__hlds_pred__is_unify_or_compare_pred_1_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_PredInfo_0_24);
    }
#line 1019 "mercury_compile_front_end.m"
    if (top_level__mercury_compile_front_end__succeeded)
#line 1018 "mercury_compile_front_end.m"
      {
#line 1018 "mercury_compile_front_end.m"
        MR_Word top_level__mercury_compile_front_end__V_39_39 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_front_end__SimplifyTasks0_9, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 1018 "mercury_compile_front_end.m"
        MR_Word top_level__mercury_compile_front_end__V_40_40 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_front_end__SimplifyTasks0_9, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 1018 "mercury_compile_front_end.m"
        MR_Word top_level__mercury_compile_front_end__V_41_41 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_front_end__SimplifyTasks0_9, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 1018 "mercury_compile_front_end.m"
        MR_Word top_level__mercury_compile_front_end__V_42_42 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_front_end__SimplifyTasks0_9, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 1018 "mercury_compile_front_end.m"
        MR_Word top_level__mercury_compile_front_end__V_43_43 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_front_end__SimplifyTasks0_9, (MR_Integer) 0)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 1018 "mercury_compile_front_end.m"
        MR_Word top_level__mercury_compile_front_end__V_44_44 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_front_end__SimplifyTasks0_9, (MR_Integer) 0)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 1018 "mercury_compile_front_end.m"
        MR_Word top_level__mercury_compile_front_end__V_45_45 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_front_end__SimplifyTasks0_9, (MR_Integer) 0)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 1018 "mercury_compile_front_end.m"
        MR_Word top_level__mercury_compile_front_end__V_46_46 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_front_end__SimplifyTasks0_9, (MR_Integer) 0)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
#line 1018 "mercury_compile_front_end.m"
        MR_Word top_level__mercury_compile_front_end__V_47_47 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_front_end__SimplifyTasks0_9, (MR_Integer) 0)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
#line 1018 "mercury_compile_front_end.m"
        MR_Word top_level__mercury_compile_front_end__V_48_48 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_front_end__SimplifyTasks0_9, (MR_Integer) 0)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
#line 1018 "mercury_compile_front_end.m"
        MR_Word top_level__mercury_compile_front_end__V_49_49 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_front_end__SimplifyTasks0_9, (MR_Integer) 0)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
#line 1018 "mercury_compile_front_end.m"
        MR_Word top_level__mercury_compile_front_end__V_50_50 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_front_end__SimplifyTasks0_9, (MR_Integer) 0)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
#line 1018 "mercury_compile_front_end.m"
        MR_Word top_level__mercury_compile_front_end__V_38_38 = ((((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_front_end__SimplifyTasks0_9, (MR_Integer) 0)))) & (MR_Integer) 1);

#line 1018 "mercury_compile_front_end.m"
        {
#line 1018 "mercury_compile_front_end.m"
          top_level__mercury_compile_front_end__SimplifyTasks_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1018 "mercury_compile_front_end.m"
          MR_hl_field(MR_mktag(0), top_level__mercury_compile_front_end__SimplifyTasks_16, 0) = ((MR_Box) (((MR_Integer) 0 | ((((top_level__mercury_compile_front_end__V_39_39 << (MR_Integer) 1)) | ((((top_level__mercury_compile_front_end__V_40_40 << (MR_Integer) 2)) | ((((top_level__mercury_compile_front_end__V_41_41 << (MR_Integer) 3)) | ((((top_level__mercury_compile_front_end__V_42_42 << (MR_Integer) 4)) | ((((top_level__mercury_compile_front_end__V_43_43 << (MR_Integer) 5)) | ((((top_level__mercury_compile_front_end__V_44_44 << (MR_Integer) 6)) | ((((top_level__mercury_compile_front_end__V_45_45 << (MR_Integer) 7)) | ((((top_level__mercury_compile_front_end__V_46_46 << (MR_Integer) 8)) | ((((top_level__mercury_compile_front_end__V_47_47 << (MR_Integer) 9)) | ((((top_level__mercury_compile_front_end__V_48_48 << (MR_Integer) 10)) | ((((top_level__mercury_compile_front_end__V_49_49 << (MR_Integer) 11)) | ((top_level__mercury_compile_front_end__V_50_50 << (MR_Integer) 12)))))))))))))))))))))))))));
#line 1018 "mercury_compile_front_end.m"
        }
#line 1018 "mercury_compile_front_end.m"
      }
#line 1019 "mercury_compile_front_end.m"
    else
#line 1020 "mercury_compile_front_end.m"
      top_level__mercury_compile_front_end__SimplifyTasks_16 = top_level__mercury_compile_front_end__SimplifyTasks0_9;
#line 1022 "mercury_compile_front_end.m"
    {
#line 1022 "mercury_compile_front_end.m"
      top_level__mercury_compile_front_end__ErrorSpecs0_17 = parse_tree__error_util__init_error_spec_accumulator_0_f_0();
    }
#line 1023 "mercury_compile_front_end.m"
    {
#line 1023 "mercury_compile_front_end.m"
      check_hlds__simplify__simplify_proc__simplify_pred_procs_9_p_0(top_level__mercury_compile_front_end__SimplifyTasks_16, top_level__mercury_compile_front_end__PredId_10, top_level__mercury_compile_front_end__ProcIds_15, top_level__mercury_compile_front_end__STATE_VARIABLE_ModuleInfo_0_22, top_level__mercury_compile_front_end__STATE_VARIABLE_ModuleInfo_23, top_level__mercury_compile_front_end__STATE_VARIABLE_PredInfo_0_24, top_level__mercury_compile_front_end__STATE_VARIABLE_PredInfo_25, top_level__mercury_compile_front_end__ErrorSpecs0_17, &top_level__mercury_compile_front_end__ErrorSpecs_18);
    }
#line 1025 "mercury_compile_front_end.m"
    {
#line 1025 "mercury_compile_front_end.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(*top_level__mercury_compile_front_end__STATE_VARIABLE_ModuleInfo_23, &top_level__mercury_compile_front_end__Globals_19);
    }
#line 1026 "mercury_compile_front_end.m"
    {
#line 1026 "mercury_compile_front_end.m"
      top_level__mercury_compile_front_end__SpecsList_20 = parse_tree__error_util__error_spec_accumulator_to_list_1_f_0(top_level__mercury_compile_front_end__ErrorSpecs_18);
    }
#line 1027 "mercury_compile_front_end.m"
    {
#line 1027 "mercury_compile_front_end.m"
      *top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_27 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, top_level__mercury_compile_front_end__SpecsList_20, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_26);
    }
#line 1028 "mercury_compile_front_end.m"
    {
#line 1028 "mercury_compile_front_end.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_front_end__Globals_19, (MR_Integer) 55, &top_level__mercury_compile_front_end__Statistics_21);
    }
#line 1030 "mercury_compile_front_end.m"
    {
#line 1030 "mercury_compile_front_end.m"
      libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_front_end__Statistics_21);
#line 1030 "mercury_compile_front_end.m"
      return;
    }
#line 1010 "mercury_compile_front_end.m"
  }
#line 1006 "mercury_compile_front_end.m"
}

#line 881 "mercury_compile_front_end.m"
static void MR_CALL 
top_level__mercury_compile_front_end__process_try_goals_9_p_0(
#line 881 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__Verbose_10,
#line 881 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__Stats_11,
#line 881 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_18,
#line 881 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_19,
#line 881 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__FoundError_13,
#line 881 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_20,
#line 881 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_21)
#line 881 "mercury_compile_front_end.m"
{
#line 885 "mercury_compile_front_end.m"
  {
#line 885 "mercury_compile_front_end.m"
    MR_bool top_level__mercury_compile_front_end__succeeded;
#line 885 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__Globals_16;
#line 885 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__TryExpandSpecs_17;
#line 885 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_24_24;
#line 885 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_25_25;
#line 885 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_29_29;
#line 885 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_31_31;

#line 886 "mercury_compile_front_end.m"
    {
#line 886 "mercury_compile_front_end.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_18, &top_level__mercury_compile_front_end__Globals_16);
    }
#line 887 "mercury_compile_front_end.m"
    {
#line 887 "mercury_compile_front_end.m"
      hlds__hlds_error_util__maybe_write_out_errors_8_p_0(top_level__mercury_compile_front_end__Verbose_10, top_level__mercury_compile_front_end__Globals_16, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_18, &top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_24_24, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_20, &top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_25_25);
    }
#line 888 "mercury_compile_front_end.m"
    {
#line 888 "mercury_compile_front_end.m"
      libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_front_end__Verbose_10, (MR_String) "% Transforming try goals...\n");
    }
#line 889 "mercury_compile_front_end.m"
    {
#line 889 "mercury_compile_front_end.m"
      check_hlds__try_expand__expand_try_goals_in_module_4_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_24_24, &top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_29_29, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &top_level__mercury_compile_front_end__TryExpandSpecs_17);
    }
#line 890 "mercury_compile_front_end.m"
    {
#line 890 "mercury_compile_front_end.m"
      top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_31_31 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, top_level__mercury_compile_front_end__TryExpandSpecs_17, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_25_25);
    }
#line 891 "mercury_compile_front_end.m"
    {
#line 891 "mercury_compile_front_end.m"
      *top_level__mercury_compile_front_end__FoundError_13 = parse_tree__error_util__contains_errors_2_f_0(top_level__mercury_compile_front_end__Globals_16, top_level__mercury_compile_front_end__TryExpandSpecs_17);
    }
#line 892 "mercury_compile_front_end.m"
    {
#line 892 "mercury_compile_front_end.m"
      hlds__hlds_error_util__maybe_write_out_errors_8_p_0(top_level__mercury_compile_front_end__Verbose_10, top_level__mercury_compile_front_end__Globals_16, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_29_29, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_19, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_31_31, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_21);
    }
#line 896 "mercury_compile_front_end.m"
    if ((*top_level__mercury_compile_front_end__FoundError_13 == (MR_Integer) 0))
#line 897 "mercury_compile_front_end.m"
      {
#line 898 "mercury_compile_front_end.m"
        {
#line 898 "mercury_compile_front_end.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_front_end__Verbose_10, (MR_String) "% done.\n");
        }
#line 897 "mercury_compile_front_end.m"
      }
#line 896 "mercury_compile_front_end.m"
    else
#line 894 "mercury_compile_front_end.m"
      {
#line 895 "mercury_compile_front_end.m"
        {
#line 895 "mercury_compile_front_end.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_front_end__Verbose_10, (MR_String) "% Program contains error(s).\n");
        }
#line 894 "mercury_compile_front_end.m"
      }
#line 900 "mercury_compile_front_end.m"
    {
#line 900 "mercury_compile_front_end.m"
      libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_front_end__Stats_11);
#line 900 "mercury_compile_front_end.m"
      return;
    }
#line 885 "mercury_compile_front_end.m"
  }
#line 881 "mercury_compile_front_end.m"
}

#line 871 "mercury_compile_front_end.m"
static MR_bool MR_CALL 
top_level__mercury_compile_front_end__type_ctor_is_defined_in_this_module_2_p_0(
#line 871 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__ModuleName_3,
#line 871 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__HeadVar__2_2)
#line 871 "mercury_compile_front_end.m"
{
#line 874 "mercury_compile_front_end.m"
  {
#line 874 "mercury_compile_front_end.m"
    MR_bool top_level__mercury_compile_front_end__succeeded;
#line 874 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__TypeCtor_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_front_end__HeadVar__2_2, (MR_Integer) 0)));
#line 874 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__TypeSymName_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_front_end__TypeCtor_4, (MR_Integer) 0)));
#line 874 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__TypeModuleName_8;
#line 874 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_front_end__HeadVar__2_2, (MR_Integer) 1)));
#line 875 "mercury_compile_front_end.m"
    MR_Integer top_level__mercury_compile_front_end___TypeArity_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_front_end__TypeCtor_4, (MR_Integer) 1)));
#line 876 "mercury_compile_front_end.m"
    MR_String top_level__mercury_compile_front_end___TypeName_9;

#line 876 "mercury_compile_front_end.m"
    top_level__mercury_compile_front_end__succeeded = ((MR_tag((MR_Word) top_level__mercury_compile_front_end__TypeSymName_6)) == (MR_mktag((MR_Integer) 1)));
#line 876 "mercury_compile_front_end.m"
    if (top_level__mercury_compile_front_end__succeeded)
#line 876 "mercury_compile_front_end.m"
      {
#line 876 "mercury_compile_front_end.m"
        top_level__mercury_compile_front_end__TypeModuleName_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), top_level__mercury_compile_front_end__TypeSymName_6, (MR_Integer) 0)));
#line 876 "mercury_compile_front_end.m"
        top_level__mercury_compile_front_end___TypeName_9 = ((MR_String) (MR_hl_field(MR_mktag(1), top_level__mercury_compile_front_end__TypeSymName_6, (MR_Integer) 1)));
#line 877 "mercury_compile_front_end.m"
        {
#line 877 "mercury_compile_front_end.m"
          return top_level__mercury_compile_front_end__succeeded = mdbcomp__prim_data____Unify____sym_name_0_0(top_level__mercury_compile_front_end__ModuleName_3, top_level__mercury_compile_front_end__TypeModuleName_8);
        }
#line 876 "mercury_compile_front_end.m"
      }
#line 874 "mercury_compile_front_end.m"
    return top_level__mercury_compile_front_end__succeeded;
#line 874 "mercury_compile_front_end.m"
  }
#line 871 "mercury_compile_front_end.m"
}

#line 845 "mercury_compile_front_end.m"
static MR_bool MR_CALL 
top_level__mercury_compile_front_end__check_oisu_pragmas_9_p_0_1(
#line 845 "mercury_compile_front_end.m"
  MR_Box top_level__mercury_compile_front_end__closure_arg,
#line 845 "mercury_compile_front_end.m"
  MR_Box top_level__mercury_compile_front_end__wrapper_arg_1)
#line 845 "mercury_compile_front_end.m"
{
#line 845 "mercury_compile_front_end.m"
  {
#line 845 "mercury_compile_front_end.m"
    MR_bool top_level__mercury_compile_front_end__succeeded;
#line 845 "mercury_compile_front_end.m"
    MR_Box top_level__mercury_compile_front_end__closure = top_level__mercury_compile_front_end__closure_arg;

#line 845 "mercury_compile_front_end.m"
    {
#line 845 "mercury_compile_front_end.m"
      return top_level__mercury_compile_front_end__succeeded = top_level__mercury_compile_front_end__type_ctor_is_defined_in_this_module_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_front_end__closure, (MR_Integer) 3))), ((MR_Word) top_level__mercury_compile_front_end__wrapper_arg_1));
    }
#line 845 "mercury_compile_front_end.m"
    return top_level__mercury_compile_front_end__succeeded;
#line 845 "mercury_compile_front_end.m"
  }
#line 845 "mercury_compile_front_end.m"
}

#line 837 "mercury_compile_front_end.m"
static void MR_CALL 
top_level__mercury_compile_front_end__check_oisu_pragmas_9_p_0(
#line 837 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__Verbose_10,
#line 837 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__Stats_11,
#line 837 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_24,
#line 837 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_25,
#line 837 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__FoundError_13,
#line 837 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_26,
#line 837 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_27)
#line 837 "mercury_compile_front_end.m"
{
#line 841 "mercury_compile_front_end.m"
  {
#line 841 "mercury_compile_front_end.m"
    MR_bool top_level__mercury_compile_front_end__succeeded;
#line 841 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__OISUMap_16;
#line 841 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__OISUPairs_17;
#line 841 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__ModuleName_18;
#line 841 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__ModuleOISUPairs_19;
#line 841 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__V_30_30;

#line 842 "mercury_compile_front_end.m"
    {
#line 842 "mercury_compile_front_end.m"
      hlds__hlds_module__module_info_get_oisu_map_2_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_24, &top_level__mercury_compile_front_end__OISUMap_16);
    }
#line 843 "mercury_compile_front_end.m"
    {
#line 843 "mercury_compile_front_end.m"
      mercury__map__to_assoc_list_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0, (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_oisu_preds_0, top_level__mercury_compile_front_end__OISUMap_16, &top_level__mercury_compile_front_end__OISUPairs_17);
    }
#line 844 "mercury_compile_front_end.m"
    {
#line 844 "mercury_compile_front_end.m"
      hlds__hlds_module__module_info_get_name_2_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_24, &top_level__mercury_compile_front_end__ModuleName_18);
    }
#line 845 "mercury_compile_front_end.m"
    {
#line 845 "mercury_compile_front_end.m"
      top_level__mercury_compile_front_end__V_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 845 "mercury_compile_front_end.m"
      MR_hl_field(MR_mktag(0), top_level__mercury_compile_front_end__V_30_30, 0) = ((MR_Box) (&top_level__mercury_compile_front_end_scalar_common_2[2]));
#line 845 "mercury_compile_front_end.m"
      MR_hl_field(MR_mktag(0), top_level__mercury_compile_front_end__V_30_30, 1) = ((MR_Box) (top_level__mercury_compile_front_end__check_oisu_pragmas_9_p_0_1));
#line 845 "mercury_compile_front_end.m"
      MR_hl_field(MR_mktag(0), top_level__mercury_compile_front_end__V_30_30, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 845 "mercury_compile_front_end.m"
      MR_hl_field(MR_mktag(0), top_level__mercury_compile_front_end__V_30_30, 3) = ((MR_Box) (top_level__mercury_compile_front_end__ModuleName_18));
#line 845 "mercury_compile_front_end.m"
    }
#line 845 "mercury_compile_front_end.m"
    {
#line 845 "mercury_compile_front_end.m"
      mercury__list__filter_3_p_0((MR_Word) &top_level__mercury_compile_front_end_scalar_common_3[0], top_level__mercury_compile_front_end__V_30_30, top_level__mercury_compile_front_end__OISUPairs_17, &top_level__mercury_compile_front_end__ModuleOISUPairs_19);
    }
#line 866 "mercury_compile_front_end.m"
    if ((top_level__mercury_compile_front_end__ModuleOISUPairs_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 867 "mercury_compile_front_end.m"
      {
#line 868 "mercury_compile_front_end.m"
        *top_level__mercury_compile_front_end__FoundError_13 = (MR_Integer) 0;
#line 868 "mercury_compile_front_end.m"
        *top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_25 = top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_24;
#line 868 "mercury_compile_front_end.m"
        *top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_27 = top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_26;
#line 867 "mercury_compile_front_end.m"
      }
#line 866 "mercury_compile_front_end.m"
    else
#line 848 "mercury_compile_front_end.m"
      {
#line 848 "mercury_compile_front_end.m"
        MR_Word top_level__mercury_compile_front_end__Globals_22;
#line 848 "mercury_compile_front_end.m"
        MR_Word top_level__mercury_compile_front_end__OISUSpecs_23;
#line 848 "mercury_compile_front_end.m"
        MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_31_31;
#line 848 "mercury_compile_front_end.m"
        MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_32_32;
#line 848 "mercury_compile_front_end.m"
        MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_36_36;
#line 848 "mercury_compile_front_end.m"
        MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_37_37;

#line 849 "mercury_compile_front_end.m"
        {
#line 849 "mercury_compile_front_end.m"
          hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_24, &top_level__mercury_compile_front_end__Globals_22);
        }
#line 850 "mercury_compile_front_end.m"
        {
#line 850 "mercury_compile_front_end.m"
          hlds__hlds_error_util__maybe_write_out_errors_8_p_0(top_level__mercury_compile_front_end__Verbose_10, top_level__mercury_compile_front_end__Globals_22, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_24, &top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_31_31, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_26, &top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_32_32);
        }
#line 851 "mercury_compile_front_end.m"
        {
#line 851 "mercury_compile_front_end.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_front_end__Verbose_10, (MR_String) "% Checking oisu pragmas...\n");
        }
#line 853 "mercury_compile_front_end.m"
        {
#line 853 "mercury_compile_front_end.m"
          check_hlds__oisu_check__check_oisu_pragmas_for_module_4_p_0(top_level__mercury_compile_front_end__ModuleOISUPairs_19, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_31_31, &top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_36_36, &top_level__mercury_compile_front_end__OISUSpecs_23);
        }
#line 854 "mercury_compile_front_end.m"
        {
#line 854 "mercury_compile_front_end.m"
          top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_37_37 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, top_level__mercury_compile_front_end__OISUSpecs_23, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_32_32);
        }
#line 855 "mercury_compile_front_end.m"
        {
#line 855 "mercury_compile_front_end.m"
          *top_level__mercury_compile_front_end__FoundError_13 = parse_tree__error_util__contains_errors_2_f_0(top_level__mercury_compile_front_end__Globals_22, top_level__mercury_compile_front_end__OISUSpecs_23);
        }
#line 856 "mercury_compile_front_end.m"
        {
#line 856 "mercury_compile_front_end.m"
          hlds__hlds_error_util__maybe_write_out_errors_8_p_0(top_level__mercury_compile_front_end__Verbose_10, top_level__mercury_compile_front_end__Globals_22, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_36_36, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_25, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_37_37, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_27);
        }
#line 861 "mercury_compile_front_end.m"
        if ((*top_level__mercury_compile_front_end__FoundError_13 == (MR_Integer) 0))
#line 862 "mercury_compile_front_end.m"
          {
#line 863 "mercury_compile_front_end.m"
            {
#line 863 "mercury_compile_front_end.m"
              libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_front_end__Verbose_10, (MR_String) "% done.\n");
            }
#line 862 "mercury_compile_front_end.m"
          }
#line 861 "mercury_compile_front_end.m"
        else
#line 858 "mercury_compile_front_end.m"
          {
#line 859 "mercury_compile_front_end.m"
            {
#line 859 "mercury_compile_front_end.m"
              libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_front_end__Verbose_10, (MR_String) "% Program contains oisu pragma error(s).\n");
            }
#line 858 "mercury_compile_front_end.m"
          }
#line 865 "mercury_compile_front_end.m"
        {
#line 865 "mercury_compile_front_end.m"
          libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_front_end__Stats_11);
#line 865 "mercury_compile_front_end.m"
          return;
        }
#line 848 "mercury_compile_front_end.m"
      }
#line 841 "mercury_compile_front_end.m"
  }
#line 837 "mercury_compile_front_end.m"
}

#line 802 "mercury_compile_front_end.m"
static void MR_CALL 
top_level__mercury_compile_front_end__check_stratification_9_p_0(
#line 802 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__Verbose_10,
#line 802 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__Stats_11,
#line 802 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_20,
#line 802 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_21,
#line 802 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__FoundError_13,
#line 802 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_22,
#line 802 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_23)
#line 802 "mercury_compile_front_end.m"
{
#line 806 "mercury_compile_front_end.m"
  {
#line 806 "mercury_compile_front_end.m"
    MR_bool top_level__mercury_compile_front_end__succeeded;
#line 806 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__StratifiedPreds_16;
#line 806 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__Globals_17;
#line 806 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__Warn_18;

#line 807 "mercury_compile_front_end.m"
    {
#line 807 "mercury_compile_front_end.m"
      hlds__hlds_module__module_info_get_stratified_preds_2_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_20, &top_level__mercury_compile_front_end__StratifiedPreds_16);
    }
#line 808 "mercury_compile_front_end.m"
    {
#line 808 "mercury_compile_front_end.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_20, &top_level__mercury_compile_front_end__Globals_17);
    }
#line 809 "mercury_compile_front_end.m"
    {
#line 809 "mercury_compile_front_end.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_front_end__Globals_17, (MR_Integer) 17, &top_level__mercury_compile_front_end__Warn_18);
    }
#line 811 "mercury_compile_front_end.m"
    {
#line 811 "mercury_compile_front_end.m"
      top_level__mercury_compile_front_end__succeeded = mercury__set__empty_1_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, top_level__mercury_compile_front_end__StratifiedPreds_16);
    }
#line 811 "mercury_compile_front_end.m"
    top_level__mercury_compile_front_end__succeeded = !(top_level__mercury_compile_front_end__succeeded);
#line 812 "mercury_compile_front_end.m"
    if (!(top_level__mercury_compile_front_end__succeeded))
#line 812 "mercury_compile_front_end.m"
      top_level__mercury_compile_front_end__succeeded = (top_level__mercury_compile_front_end__Warn_18 == (MR_Integer) 1);
#line 831 "mercury_compile_front_end.m"
    if (top_level__mercury_compile_front_end__succeeded)
#line 815 "mercury_compile_front_end.m"
      {
#line 815 "mercury_compile_front_end.m"
        MR_Word top_level__mercury_compile_front_end__StratifySpecs_19;
#line 815 "mercury_compile_front_end.m"
        MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_27_27;
#line 815 "mercury_compile_front_end.m"
        MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_28_28;
#line 815 "mercury_compile_front_end.m"
        MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_32_32;
#line 815 "mercury_compile_front_end.m"
        MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_33_33;

#line 815 "mercury_compile_front_end.m"
        {
#line 815 "mercury_compile_front_end.m"
          hlds__hlds_error_util__maybe_write_out_errors_8_p_0(top_level__mercury_compile_front_end__Verbose_10, top_level__mercury_compile_front_end__Globals_17, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_20, &top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_27_27, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_22, &top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_28_28);
        }
#line 816 "mercury_compile_front_end.m"
        {
#line 816 "mercury_compile_front_end.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_front_end__Verbose_10, (MR_String) "% Checking stratification...\n");
        }
#line 818 "mercury_compile_front_end.m"
        {
#line 818 "mercury_compile_front_end.m"
          check_hlds__stratify__check_module_for_stratification_3_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_27_27, &top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_32_32, &top_level__mercury_compile_front_end__StratifySpecs_19);
        }
#line 819 "mercury_compile_front_end.m"
        {
#line 819 "mercury_compile_front_end.m"
          top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_33_33 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, top_level__mercury_compile_front_end__StratifySpecs_19, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_28_28);
        }
#line 820 "mercury_compile_front_end.m"
        {
#line 820 "mercury_compile_front_end.m"
          *top_level__mercury_compile_front_end__FoundError_13 = parse_tree__error_util__contains_errors_2_f_0(top_level__mercury_compile_front_end__Globals_17, top_level__mercury_compile_front_end__StratifySpecs_19);
        }
#line 821 "mercury_compile_front_end.m"
        {
#line 821 "mercury_compile_front_end.m"
          hlds__hlds_error_util__maybe_write_out_errors_8_p_0(top_level__mercury_compile_front_end__Verbose_10, top_level__mercury_compile_front_end__Globals_17, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_32_32, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_21, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_33_33, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_23);
        }
#line 826 "mercury_compile_front_end.m"
        if ((*top_level__mercury_compile_front_end__FoundError_13 == (MR_Integer) 0))
#line 827 "mercury_compile_front_end.m"
          {
#line 828 "mercury_compile_front_end.m"
            {
#line 828 "mercury_compile_front_end.m"
              libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_front_end__Verbose_10, (MR_String) "% done.\n");
            }
#line 827 "mercury_compile_front_end.m"
          }
#line 826 "mercury_compile_front_end.m"
        else
#line 823 "mercury_compile_front_end.m"
          {
#line 824 "mercury_compile_front_end.m"
            {
#line 824 "mercury_compile_front_end.m"
              libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_front_end__Verbose_10, (MR_String) "% Program contains stratification error(s).\n");
            }
#line 823 "mercury_compile_front_end.m"
          }
#line 830 "mercury_compile_front_end.m"
        {
#line 830 "mercury_compile_front_end.m"
          libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_front_end__Stats_11);
#line 830 "mercury_compile_front_end.m"
          return;
        }
#line 815 "mercury_compile_front_end.m"
      }
#line 831 "mercury_compile_front_end.m"
    else
#line 832 "mercury_compile_front_end.m"
      {
#line 832 "mercury_compile_front_end.m"
        *top_level__mercury_compile_front_end__FoundError_13 = (MR_Integer) 0;
#line 832 "mercury_compile_front_end.m"
        *top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_23 = top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_22;
#line 832 "mercury_compile_front_end.m"
        *top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_21 = top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_20;
#line 832 "mercury_compile_front_end.m"
      }
#line 806 "mercury_compile_front_end.m"
  }
#line 802 "mercury_compile_front_end.m"
}

#line 777 "mercury_compile_front_end.m"
static void MR_CALL 
top_level__mercury_compile_front_end__check_unique_modes_9_p_0(
#line 777 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__Verbose_10,
#line 777 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__Stats_11,
#line 777 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_18,
#line 777 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_19,
#line 777 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__FoundError_13,
#line 777 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_20,
#line 777 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_21)
#line 777 "mercury_compile_front_end.m"
{
#line 781 "mercury_compile_front_end.m"
  {
#line 781 "mercury_compile_front_end.m"
    MR_bool top_level__mercury_compile_front_end__succeeded;
#line 781 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__Globals_16;
#line 781 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__UniqueSpecs_17;
#line 781 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_24_24;
#line 781 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_25_25;
#line 781 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_29_29;
#line 781 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_30_30;

#line 782 "mercury_compile_front_end.m"
    {
#line 782 "mercury_compile_front_end.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_18, &top_level__mercury_compile_front_end__Globals_16);
    }
#line 783 "mercury_compile_front_end.m"
    {
#line 783 "mercury_compile_front_end.m"
      hlds__hlds_error_util__maybe_write_out_errors_8_p_0(top_level__mercury_compile_front_end__Verbose_10, top_level__mercury_compile_front_end__Globals_16, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_18, &top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_24_24, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_20, &top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_25_25);
    }
#line 784 "mercury_compile_front_end.m"
    {
#line 784 "mercury_compile_front_end.m"
      libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_front_end__Verbose_10, (MR_String) "% Checking for backtracking over unique modes...\n");
    }
#line 786 "mercury_compile_front_end.m"
    {
#line 786 "mercury_compile_front_end.m"
      check_hlds__unique_modes__unique_modes_check_module_3_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_24_24, &top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_29_29, &top_level__mercury_compile_front_end__UniqueSpecs_17);
    }
#line 787 "mercury_compile_front_end.m"
    {
#line 787 "mercury_compile_front_end.m"
      top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_30_30 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, top_level__mercury_compile_front_end__UniqueSpecs_17, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_25_25);
    }
#line 788 "mercury_compile_front_end.m"
    {
#line 788 "mercury_compile_front_end.m"
      *top_level__mercury_compile_front_end__FoundError_13 = parse_tree__error_util__contains_errors_2_f_0(top_level__mercury_compile_front_end__Globals_16, top_level__mercury_compile_front_end__UniqueSpecs_17);
    }
#line 789 "mercury_compile_front_end.m"
    {
#line 789 "mercury_compile_front_end.m"
      hlds__hlds_error_util__maybe_write_out_errors_8_p_0(top_level__mercury_compile_front_end__Verbose_10, top_level__mercury_compile_front_end__Globals_16, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_29_29, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_19, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_30_30, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_21);
    }
#line 794 "mercury_compile_front_end.m"
    if ((*top_level__mercury_compile_front_end__FoundError_13 == (MR_Integer) 0))
#line 795 "mercury_compile_front_end.m"
      {
#line 796 "mercury_compile_front_end.m"
        {
#line 796 "mercury_compile_front_end.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_front_end__Verbose_10, (MR_String) "% Program is unique-mode-correct.\n");
        }
#line 795 "mercury_compile_front_end.m"
      }
#line 794 "mercury_compile_front_end.m"
    else
#line 791 "mercury_compile_front_end.m"
      {
#line 792 "mercury_compile_front_end.m"
        {
#line 792 "mercury_compile_front_end.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_front_end__Verbose_10, (MR_String) "% Program contains unique mode error(s).\n");
        }
#line 791 "mercury_compile_front_end.m"
      }
#line 798 "mercury_compile_front_end.m"
    {
#line 798 "mercury_compile_front_end.m"
      libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_front_end__Stats_11);
#line 798 "mercury_compile_front_end.m"
      return;
    }
#line 781 "mercury_compile_front_end.m"
  }
#line 777 "mercury_compile_front_end.m"
}

#line 755 "mercury_compile_front_end.m"
static void MR_CALL 
top_level__mercury_compile_front_end__check_determinism_8_p_0(
#line 755 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__Verbose_9,
#line 755 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__Stats_10,
#line 755 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_17,
#line 755 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_18,
#line 755 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_19,
#line 755 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_20)
#line 755 "mercury_compile_front_end.m"
{
#line 759 "mercury_compile_front_end.m"
  {
#line 759 "mercury_compile_front_end.m"
    MR_bool top_level__mercury_compile_front_end__succeeded;
#line 759 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__DetismSpecs_14;
#line 759 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__Globals_15;
#line 759 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__FoundError_16;
#line 759 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_23_23;
#line 759 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_24_24;

#line 760 "mercury_compile_front_end.m"
    {
#line 760 "mercury_compile_front_end.m"
      check_hlds__det_analysis__determinism_pass_3_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_17, &top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_23_23, &top_level__mercury_compile_front_end__DetismSpecs_14);
    }
#line 761 "mercury_compile_front_end.m"
    {
#line 761 "mercury_compile_front_end.m"
      top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_24_24 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, top_level__mercury_compile_front_end__DetismSpecs_14, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_19);
    }
#line 762 "mercury_compile_front_end.m"
    {
#line 762 "mercury_compile_front_end.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_23_23, &top_level__mercury_compile_front_end__Globals_15);
    }
#line 763 "mercury_compile_front_end.m"
    {
#line 763 "mercury_compile_front_end.m"
      top_level__mercury_compile_front_end__FoundError_16 = parse_tree__error_util__contains_errors_2_f_0(top_level__mercury_compile_front_end__Globals_15, top_level__mercury_compile_front_end__DetismSpecs_14);
    }
#line 764 "mercury_compile_front_end.m"
    {
#line 764 "mercury_compile_front_end.m"
      hlds__hlds_error_util__maybe_write_out_errors_8_p_0(top_level__mercury_compile_front_end__Verbose_9, top_level__mercury_compile_front_end__Globals_15, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_23_23, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_18, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_24_24, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_20);
    }
#line 769 "mercury_compile_front_end.m"
    if ((top_level__mercury_compile_front_end__FoundError_16 == (MR_Integer) 0))
#line 770 "mercury_compile_front_end.m"
      {
#line 771 "mercury_compile_front_end.m"
        {
#line 771 "mercury_compile_front_end.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_front_end__Verbose_9, (MR_String) "% Program is determinism-correct.\n");
        }
#line 770 "mercury_compile_front_end.m"
      }
#line 769 "mercury_compile_front_end.m"
    else
#line 766 "mercury_compile_front_end.m"
      {
#line 767 "mercury_compile_front_end.m"
        {
#line 767 "mercury_compile_front_end.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_front_end__Verbose_9, (MR_String) "% Program contains determinism error(s).\n");
        }
#line 766 "mercury_compile_front_end.m"
      }
#line 773 "mercury_compile_front_end.m"
    {
#line 773 "mercury_compile_front_end.m"
      libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_front_end__Stats_10);
#line 773 "mercury_compile_front_end.m"
      return;
    }
#line 759 "mercury_compile_front_end.m"
  }
#line 755 "mercury_compile_front_end.m"
}

#line 743 "mercury_compile_front_end.m"
static void MR_CALL 
top_level__mercury_compile_front_end__detect_cse_6_p_0(
#line 743 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__Verbose_7,
#line 743 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__Stats_8,
#line 743 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_11,
#line 743 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_12)
#line 743 "mercury_compile_front_end.m"
{
#line 746 "mercury_compile_front_end.m"
  {
#line 746 "mercury_compile_front_end.m"
    MR_bool top_level__mercury_compile_front_end__succeeded;

#line 747 "mercury_compile_front_end.m"
    {
#line 747 "mercury_compile_front_end.m"
      libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_front_end__Verbose_7, (MR_String) "% Detecting common deconstructions...\n");
    }
#line 749 "mercury_compile_front_end.m"
    {
#line 749 "mercury_compile_front_end.m"
      check_hlds__cse_detection__detect_cse_in_module_2_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_11, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_12);
    }
#line 750 "mercury_compile_front_end.m"
    {
#line 750 "mercury_compile_front_end.m"
      libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_front_end__Verbose_7, (MR_String) "% done.\n");
    }
#line 751 "mercury_compile_front_end.m"
    {
#line 751 "mercury_compile_front_end.m"
      libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_front_end__Stats_8);
#line 751 "mercury_compile_front_end.m"
      return;
    }
#line 746 "mercury_compile_front_end.m"
  }
#line 743 "mercury_compile_front_end.m"
}

#line 731 "mercury_compile_front_end.m"
static void MR_CALL 
top_level__mercury_compile_front_end__detect_switches_6_p_0(
#line 731 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__Verbose_7,
#line 731 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__Stats_8,
#line 731 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_11,
#line 731 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_12)
#line 731 "mercury_compile_front_end.m"
{
#line 734 "mercury_compile_front_end.m"
  {
#line 734 "mercury_compile_front_end.m"
    MR_bool top_level__mercury_compile_front_end__succeeded;

#line 735 "mercury_compile_front_end.m"
    {
#line 735 "mercury_compile_front_end.m"
      libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_front_end__Verbose_7, (MR_String) "% Detecting switches...\n");
    }
#line 736 "mercury_compile_front_end.m"
    {
#line 736 "mercury_compile_front_end.m"
      libs__file_util__maybe_flush_output_3_p_0(top_level__mercury_compile_front_end__Verbose_7);
    }
#line 737 "mercury_compile_front_end.m"
    {
#line 737 "mercury_compile_front_end.m"
      check_hlds__switch_detection__detect_switches_in_module_2_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_11, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_12);
    }
#line 738 "mercury_compile_front_end.m"
    {
#line 738 "mercury_compile_front_end.m"
      libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_front_end__Verbose_7, (MR_String) "% done.\n");
    }
#line 739 "mercury_compile_front_end.m"
    {
#line 739 "mercury_compile_front_end.m"
      libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_front_end__Stats_8);
#line 739 "mercury_compile_front_end.m"
      return;
    }
#line 734 "mercury_compile_front_end.m"
  }
#line 731 "mercury_compile_front_end.m"
}

#line 681 "mercury_compile_front_end.m"
static void MR_CALL 
top_level__mercury_compile_front_end__modecheck_10_p_0_1(
#line 681 "mercury_compile_front_end.m"
  MR_Box top_level__mercury_compile_front_end__closure_arg,
#line 681 "mercury_compile_front_end.m"
  MR_Box top_level__mercury_compile_front_end__wrapper_arg_1,
#line 681 "mercury_compile_front_end.m"
  MR_Box * top_level__mercury_compile_front_end__wrapper_arg_2)
#line 681 "mercury_compile_front_end.m"
{
#line 681 "mercury_compile_front_end.m"
  {
#line 681 "mercury_compile_front_end.m"
    MR_Box top_level__mercury_compile_front_end__closure = top_level__mercury_compile_front_end__closure_arg;
#line 681 "mercury_compile_front_end.m"
    MR_Tuple top_level__mercury_compile_front_end__conv0_HeadVar__2_2;

#line 681 "mercury_compile_front_end.m"
    {
#line 681 "mercury_compile_front_end.m"
      check_hlds__modes__modecheck_module_2_p_0(((MR_Word) top_level__mercury_compile_front_end__wrapper_arg_1), &top_level__mercury_compile_front_end__conv0_HeadVar__2_2);
    }
#line 681 "mercury_compile_front_end.m"
    *top_level__mercury_compile_front_end__wrapper_arg_2 = ((MR_Box) (top_level__mercury_compile_front_end__conv0_HeadVar__2_2));
#line 681 "mercury_compile_front_end.m"
  }
#line 681 "mercury_compile_front_end.m"
}

#line 667 "mercury_compile_front_end.m"
static void MR_CALL 
top_level__mercury_compile_front_end__modecheck_10_p_0(
#line 667 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__Verbose_11,
#line 667 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__Stats_12,
#line 667 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_23,
#line 667 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_24,
#line 667 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__FoundModeError_14,
#line 667 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__SafeToContinue_15,
#line 667 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_25,
#line 667 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_26)
#line 667 "mercury_compile_front_end.m"
{
#line 672 "mercury_compile_front_end.m"
  {
#line 672 "mercury_compile_front_end.m"
    MR_bool top_level__mercury_compile_front_end__succeeded;
#line 672 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__Globals_18;
#line 672 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__BenchmarkModes_19;
#line 672 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__ModeSpecs_21;
#line 672 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_29_29;
#line 672 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_30_30;
#line 672 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_38_38;
#line 672 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_46_46;

#line 673 "mercury_compile_front_end.m"
    {
#line 673 "mercury_compile_front_end.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_23, &top_level__mercury_compile_front_end__Globals_18);
    }
#line 674 "mercury_compile_front_end.m"
    {
#line 674 "mercury_compile_front_end.m"
      hlds__hlds_error_util__maybe_write_out_errors_8_p_0(top_level__mercury_compile_front_end__Verbose_11, top_level__mercury_compile_front_end__Globals_18, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_23, &top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_29_29, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_25, &top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_30_30);
    }
#line 675 "mercury_compile_front_end.m"
    {
#line 675 "mercury_compile_front_end.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_front_end__Globals_18, (MR_Integer) 153, &top_level__mercury_compile_front_end__BenchmarkModes_19);
    }
#line 686 "mercury_compile_front_end.m"
    if ((top_level__mercury_compile_front_end__BenchmarkModes_19 == (MR_Integer) 0))
#line 687 "mercury_compile_front_end.m"
      {
#line 687 "mercury_compile_front_end.m"
        MR_Tuple top_level__mercury_compile_front_end__V_33_33;

#line 688 "mercury_compile_front_end.m"
        {
#line 688 "mercury_compile_front_end.m"
          check_hlds__modes__modecheck_module_2_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_29_29, &top_level__mercury_compile_front_end__V_33_33);
        }
#line 688 "mercury_compile_front_end.m"
        top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_front_end__V_33_33, (MR_Integer) 0)));
#line 688 "mercury_compile_front_end.m"
        *top_level__mercury_compile_front_end__SafeToContinue_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_front_end__V_33_33, (MR_Integer) 1)));
#line 688 "mercury_compile_front_end.m"
        top_level__mercury_compile_front_end__ModeSpecs_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_front_end__V_33_33, (MR_Integer) 2)));
#line 687 "mercury_compile_front_end.m"
      }
#line 686 "mercury_compile_front_end.m"
    else
#line 677 "mercury_compile_front_end.m"
      {
#line 677 "mercury_compile_front_end.m"
        MR_Integer top_level__mercury_compile_front_end__Repeats_20;
#line 677 "mercury_compile_front_end.m"
        MR_Integer top_level__mercury_compile_front_end__Time_22;
#line 677 "mercury_compile_front_end.m"
        MR_String top_level__mercury_compile_front_end__V_64_64;
#line 677 "mercury_compile_front_end.m"
        MR_String top_level__mercury_compile_front_end__V_65_65;
#line 677 "mercury_compile_front_end.m"
        MR_String top_level__mercury_compile_front_end__V_67_67;
#line 677 "mercury_compile_front_end.m"
        MR_String top_level__mercury_compile_front_end__V_68_68;
#line 677 "mercury_compile_front_end.m"
        MR_String top_level__mercury_compile_front_end__V_69_69;
#line 677 "mercury_compile_front_end.m"
        MR_String top_level__mercury_compile_front_end__V_71_71;
#line 681 "mercury_compile_front_end.m"
        MR_Tuple top_level__mercury_compile_front_end__V_37_37;
#line 681 "mercury_compile_front_end.m"
        MR_Box top_level__mercury_compile_front_end__conv1_V_37_37;

#line 678 "mercury_compile_front_end.m"
        {
#line 678 "mercury_compile_front_end.m"
          libs__globals__lookup_int_option_3_p_0(top_level__mercury_compile_front_end__Globals_18, (MR_Integer) 154, &top_level__mercury_compile_front_end__Repeats_20);
        }
#line 681 "mercury_compile_front_end.m"
        {
#line 681 "mercury_compile_front_end.m"
          mercury__benchmarking__benchmark_det_5_p_0((MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, (MR_Word) &top_level__mercury_compile_front_end_scalar_common_2[0], (MR_Word) &top_level__mercury_compile_front_end_scalar_common_3[2], ((MR_Box) (top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_29_29)), &top_level__mercury_compile_front_end__conv1_V_37_37, top_level__mercury_compile_front_end__Repeats_20, &top_level__mercury_compile_front_end__Time_22);
        }
#line 681 "mercury_compile_front_end.m"
        top_level__mercury_compile_front_end__V_37_37 = ((MR_Tuple) top_level__mercury_compile_front_end__conv1_V_37_37);
#line 682 "mercury_compile_front_end.m"
        top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_front_end__V_37_37, (MR_Integer) 0)));
#line 682 "mercury_compile_front_end.m"
        *top_level__mercury_compile_front_end__SafeToContinue_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_front_end__V_37_37, (MR_Integer) 1)));
#line 682 "mercury_compile_front_end.m"
        top_level__mercury_compile_front_end__ModeSpecs_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_front_end__V_37_37, (MR_Integer) 2)));
#line 2166 "top_level.mercury_compile_front_end.c"
        {
#line 2168 "top_level.mercury_compile_front_end.c"
          top_level__mercury_compile_front_end__V_64_64 = mercury__string__int_to_string_1_f_0(top_level__mercury_compile_front_end__Time_22);
        }
#line 2171 "top_level.mercury_compile_front_end.c"
        {
#line 2173 "top_level.mercury_compile_front_end.c"
          top_level__mercury_compile_front_end__V_65_65 = mercury__string__f_43_43_2_f_0(top_level__mercury_compile_front_end__V_64_64, (MR_String) " ms\n");
        }
#line 2176 "top_level.mercury_compile_front_end.c"
        {
#line 2178 "top_level.mercury_compile_front_end.c"
          top_level__mercury_compile_front_end__V_67_67 = mercury__string__f_43_43_2_f_0((MR_String) " repeats: ", top_level__mercury_compile_front_end__V_65_65);
        }
#line 2181 "top_level.mercury_compile_front_end.c"
        {
#line 2183 "top_level.mercury_compile_front_end.c"
          top_level__mercury_compile_front_end__V_68_68 = mercury__string__int_to_string_1_f_0(top_level__mercury_compile_front_end__Repeats_20);
        }
#line 2186 "top_level.mercury_compile_front_end.c"
        {
#line 2188 "top_level.mercury_compile_front_end.c"
          top_level__mercury_compile_front_end__V_69_69 = mercury__string__f_43_43_2_f_0(top_level__mercury_compile_front_end__V_68_68, top_level__mercury_compile_front_end__V_67_67);
        }
#line 2191 "top_level.mercury_compile_front_end.c"
        {
#line 2193 "top_level.mercury_compile_front_end.c"
          top_level__mercury_compile_front_end__V_71_71 = mercury__string__f_43_43_2_f_0((MR_String) "BENCHMARK modecheck, ", top_level__mercury_compile_front_end__V_69_69);
        }
#line 2196 "top_level.mercury_compile_front_end.c"
        {
#line 2198 "top_level.mercury_compile_front_end.c"
          mercury__io__write_string_3_p_0(top_level__mercury_compile_front_end__V_71_71);
        }
#line 677 "mercury_compile_front_end.m"
      }
#line 690 "mercury_compile_front_end.m"
    {
#line 690 "mercury_compile_front_end.m"
      top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_46_46 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, top_level__mercury_compile_front_end__ModeSpecs_21, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_30_30);
    }
#line 691 "mercury_compile_front_end.m"
    {
#line 691 "mercury_compile_front_end.m"
      *top_level__mercury_compile_front_end__FoundModeError_14 = parse_tree__error_util__contains_errors_2_f_0(top_level__mercury_compile_front_end__Globals_18, top_level__mercury_compile_front_end__ModeSpecs_21);
    }
#line 696 "mercury_compile_front_end.m"
    if ((*top_level__mercury_compile_front_end__FoundModeError_14 == (MR_Integer) 0))
#line 693 "mercury_compile_front_end.m"
      {
#line 694 "mercury_compile_front_end.m"
        {
#line 694 "mercury_compile_front_end.m"
          hlds__hlds_error_util__maybe_write_out_errors_8_p_0(top_level__mercury_compile_front_end__Verbose_11, top_level__mercury_compile_front_end__Globals_18, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_38_38, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_24, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_46_46, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_26);
        }
#line 695 "mercury_compile_front_end.m"
        {
#line 695 "mercury_compile_front_end.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_front_end__Verbose_11, (MR_String) "% Program is mode-correct.\n");
        }
#line 693 "mercury_compile_front_end.m"
      }
#line 696 "mercury_compile_front_end.m"
    else
#line 697 "mercury_compile_front_end.m"
      {
#line 698 "mercury_compile_front_end.m"
        {
#line 698 "mercury_compile_front_end.m"
          hlds__hlds_error_util__maybe_write_out_errors_8_p_0(top_level__mercury_compile_front_end__Verbose_11, top_level__mercury_compile_front_end__Globals_18, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_38_38, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_24, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_46_46, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_26);
        }
#line 699 "mercury_compile_front_end.m"
        {
#line 699 "mercury_compile_front_end.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_front_end__Verbose_11, (MR_String) "% Program contains mode error(s).\n");
        }
#line 697 "mercury_compile_front_end.m"
      }
#line 701 "mercury_compile_front_end.m"
    {
#line 701 "mercury_compile_front_end.m"
      libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_front_end__Stats_12);
#line 701 "mercury_compile_front_end.m"
      return;
    }
#line 672 "mercury_compile_front_end.m"
  }
#line 667 "mercury_compile_front_end.m"
}

#line 2257 "top_level.mercury_compile_front_end.c"
static void MR_CALL 
top_level__mercury_compile_front_end__maybe_mode_constraints_6_p_0_1(
#line 2260 "top_level.mercury_compile_front_end.c"
  MR_Box top_level__mercury_compile_front_end__closure_arg,
#line 2262 "top_level.mercury_compile_front_end.c"
  MR_Box top_level__mercury_compile_front_end__wrapper_arg_1,
#line 2264 "top_level.mercury_compile_front_end.c"
  MR_Box * top_level__mercury_compile_front_end__wrapper_arg_2,
#line 2266 "top_level.mercury_compile_front_end.c"
  MR_Box top_level__mercury_compile_front_end__wrapper_arg_3,
#line 2268 "top_level.mercury_compile_front_end.c"
  MR_Box * top_level__mercury_compile_front_end__wrapper_arg_4)
#line 2270 "top_level.mercury_compile_front_end.c"
{
#line 2272 "top_level.mercury_compile_front_end.c"
  {
#line 2274 "top_level.mercury_compile_front_end.c"
    MR_Box top_level__mercury_compile_front_end__closure = top_level__mercury_compile_front_end__closure_arg;
#line 2276 "top_level.mercury_compile_front_end.c"
    MR_Word top_level__mercury_compile_front_end__conv0_HeadVar__2_2;

#line 2279 "top_level.mercury_compile_front_end.c"
    {
#line 2281 "top_level.mercury_compile_front_end.c"
      check_hlds__mode_constraints__mc_process_module_4_p_0(((MR_Word) top_level__mercury_compile_front_end__wrapper_arg_1), &top_level__mercury_compile_front_end__conv0_HeadVar__2_2);
    }
#line 2284 "top_level.mercury_compile_front_end.c"
    *top_level__mercury_compile_front_end__wrapper_arg_2 = ((MR_Box) (top_level__mercury_compile_front_end__conv0_HeadVar__2_2));
#line 2286 "top_level.mercury_compile_front_end.c"
  }
#line 2288 "top_level.mercury_compile_front_end.c"
}

#line 649 "mercury_compile_front_end.m"
static void MR_CALL 
top_level__mercury_compile_front_end__maybe_mode_constraints_6_p_0(
#line 649 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__Verbose_7,
#line 649 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__Stats_8,
#line 649 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_13,
#line 649 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_14)
#line 649 "mercury_compile_front_end.m"
{
#line 652 "mercury_compile_front_end.m"
  {
#line 652 "mercury_compile_front_end.m"
    MR_bool top_level__mercury_compile_front_end__succeeded;
#line 652 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__Globals_11;
#line 652 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__ModeConstraints_12;

#line 653 "mercury_compile_front_end.m"
    {
#line 653 "mercury_compile_front_end.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_13, &top_level__mercury_compile_front_end__Globals_11);
    }
#line 654 "mercury_compile_front_end.m"
    {
#line 654 "mercury_compile_front_end.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_front_end__Globals_11, (MR_Integer) 150, &top_level__mercury_compile_front_end__ModeConstraints_12);
    }
#line 663 "mercury_compile_front_end.m"
    if ((top_level__mercury_compile_front_end__ModeConstraints_12 == (MR_Integer) 0))
#line 664 "mercury_compile_front_end.m"
      *top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_14 = top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_13;
#line 663 "mercury_compile_front_end.m"
    else
#line 656 "mercury_compile_front_end.m"
      {
#line 656 "mercury_compile_front_end.m"
        MR_Word top_level__mercury_compile_front_end__Globals_41;
#line 656 "mercury_compile_front_end.m"
        MR_Word top_level__mercury_compile_front_end__BenchmarkModes_42;

#line 657 "mercury_compile_front_end.m"
        {
#line 657 "mercury_compile_front_end.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_front_end__Verbose_7, (MR_String) "% Dumping mode constraints...\n");
        }
#line 658 "mercury_compile_front_end.m"
        {
#line 658 "mercury_compile_front_end.m"
          libs__file_util__maybe_flush_output_3_p_0(top_level__mercury_compile_front_end__Verbose_7);
        }
#line 708 "mercury_compile_front_end.m"
        {
#line 708 "mercury_compile_front_end.m"
          hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_13, &top_level__mercury_compile_front_end__Globals_41);
        }
#line 709 "mercury_compile_front_end.m"
        {
#line 709 "mercury_compile_front_end.m"
          libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_front_end__Globals_41, (MR_Integer) 153, &top_level__mercury_compile_front_end__BenchmarkModes_42);
        }
#line 718 "mercury_compile_front_end.m"
        if ((top_level__mercury_compile_front_end__BenchmarkModes_42 == (MR_Integer) 0))
#line 720 "mercury_compile_front_end.m"
          {
#line 720 "mercury_compile_front_end.m"
            check_hlds__mode_constraints__mc_process_module_4_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_13, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_14);
          }
#line 718 "mercury_compile_front_end.m"
        else
#line 711 "mercury_compile_front_end.m"
          {
#line 711 "mercury_compile_front_end.m"
            MR_Integer top_level__mercury_compile_front_end__Repeats_43;
#line 711 "mercury_compile_front_end.m"
            MR_Integer top_level__mercury_compile_front_end__Time_44;
#line 711 "mercury_compile_front_end.m"
            MR_String top_level__mercury_compile_front_end__V_66_66;
#line 711 "mercury_compile_front_end.m"
            MR_String top_level__mercury_compile_front_end__V_67_67;
#line 711 "mercury_compile_front_end.m"
            MR_String top_level__mercury_compile_front_end__V_69_69;
#line 711 "mercury_compile_front_end.m"
            MR_String top_level__mercury_compile_front_end__V_70_70;
#line 711 "mercury_compile_front_end.m"
            MR_String top_level__mercury_compile_front_end__V_72_72;
#line 711 "mercury_compile_front_end.m"
            MR_String top_level__mercury_compile_front_end__V_73_73;
#line 727 "mercury_compile_front_end.m"
            MR_Box top_level__mercury_compile_front_end__conv2_STATE_VARIABLE_HLDS_14;
#line 727 "mercury_compile_front_end.m"
            MR_Box top_level__mercury_compile_front_end__conv1_STATE_VARIABLE_IO_31_57;

#line 712 "mercury_compile_front_end.m"
            {
#line 712 "mercury_compile_front_end.m"
              libs__globals__lookup_int_option_3_p_0(top_level__mercury_compile_front_end__Globals_41, (MR_Integer) 154, &top_level__mercury_compile_front_end__Repeats_43);
            }
#line 2393 "top_level.mercury_compile_front_end.c"
            {
#line 2395 "top_level.mercury_compile_front_end.c"
              top_level__mercury_compile_front_end__V_66_66 = mercury__string__int_to_string_1_f_0(top_level__mercury_compile_front_end__Repeats_43);
            }
#line 2398 "top_level.mercury_compile_front_end.c"
            {
#line 2400 "top_level.mercury_compile_front_end.c"
              top_level__mercury_compile_front_end__V_67_67 = mercury__string__f_43_43_2_f_0(top_level__mercury_compile_front_end__V_66_66, (MR_String) " ");
            }
#line 2403 "top_level.mercury_compile_front_end.c"
            {
#line 2405 "top_level.mercury_compile_front_end.c"
              top_level__mercury_compile_front_end__V_69_69 = mercury__string__f_43_43_2_f_0((MR_String) " ", top_level__mercury_compile_front_end__V_67_67);
            }
#line 2408 "top_level.mercury_compile_front_end.c"
            {
#line 2410 "top_level.mercury_compile_front_end.c"
              top_level__mercury_compile_front_end__V_70_70 = mercury__string__f_43_43_2_f_0((MR_String) "mode-constraints", top_level__mercury_compile_front_end__V_69_69);
            }
#line 2413 "top_level.mercury_compile_front_end.c"
            {
#line 2415 "top_level.mercury_compile_front_end.c"
              mercury__io__write_string_3_p_0(top_level__mercury_compile_front_end__V_70_70);
            }
#line 727 "mercury_compile_front_end.m"
            {
#line 727 "mercury_compile_front_end.m"
              mercury__benchmarking__benchmark_det_io_7_p_0((MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, (MR_Word) &top_level__mercury_compile_front_end_scalar_common_3[1], ((MR_Box) (top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_13)), &top_level__mercury_compile_front_end__conv2_STATE_VARIABLE_HLDS_14, ((MR_Box) ((MR_Integer) 0)), &top_level__mercury_compile_front_end__conv1_STATE_VARIABLE_IO_31_57, top_level__mercury_compile_front_end__Repeats_43, &top_level__mercury_compile_front_end__Time_44);
            }
#line 727 "mercury_compile_front_end.m"
            *top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_14 = ((MR_Word) top_level__mercury_compile_front_end__conv2_STATE_VARIABLE_HLDS_14);
#line 2425 "top_level.mercury_compile_front_end.c"
            {
#line 2427 "top_level.mercury_compile_front_end.c"
              top_level__mercury_compile_front_end__V_72_72 = mercury__string__int_to_string_1_f_0(top_level__mercury_compile_front_end__Time_44);
            }
#line 2430 "top_level.mercury_compile_front_end.c"
            {
#line 2432 "top_level.mercury_compile_front_end.c"
              top_level__mercury_compile_front_end__V_73_73 = mercury__string__f_43_43_2_f_0(top_level__mercury_compile_front_end__V_72_72, (MR_String) " ms\n");
            }
#line 2435 "top_level.mercury_compile_front_end.c"
            {
#line 2437 "top_level.mercury_compile_front_end.c"
              mercury__io__write_string_3_p_0(top_level__mercury_compile_front_end__V_73_73);
            }
#line 711 "mercury_compile_front_end.m"
          }
#line 661 "mercury_compile_front_end.m"
        {
#line 661 "mercury_compile_front_end.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_front_end__Verbose_7, (MR_String) "% done.\n");
        }
#line 662 "mercury_compile_front_end.m"
        {
#line 662 "mercury_compile_front_end.m"
          libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_front_end__Stats_8);
#line 662 "mercury_compile_front_end.m"
          return;
        }
#line 656 "mercury_compile_front_end.m"
      }
#line 652 "mercury_compile_front_end.m"
  }
#line 649 "mercury_compile_front_end.m"
}

#line 626 "mercury_compile_front_end.m"
static void MR_CALL 
top_level__mercury_compile_front_end__maybe_unused_imports_8_p_0(
#line 626 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__Verbose_9,
#line 626 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__Stats_10,
#line 626 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_17,
#line 626 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_18,
#line 626 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_19,
#line 626 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_20)
#line 626 "mercury_compile_front_end.m"
{
#line 630 "mercury_compile_front_end.m"
  {
#line 630 "mercury_compile_front_end.m"
    MR_bool top_level__mercury_compile_front_end__succeeded;
#line 630 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__Globals_14;
#line 630 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__WarnUnusedImports_15;

#line 631 "mercury_compile_front_end.m"
    {
#line 631 "mercury_compile_front_end.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_17, &top_level__mercury_compile_front_end__Globals_14);
    }
#line 632 "mercury_compile_front_end.m"
    {
#line 632 "mercury_compile_front_end.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_front_end__Globals_14, (MR_Integer) 36, &top_level__mercury_compile_front_end__WarnUnusedImports_15);
    }
#line 643 "mercury_compile_front_end.m"
    if ((top_level__mercury_compile_front_end__WarnUnusedImports_15 == (MR_Integer) 0))
#line 644 "mercury_compile_front_end.m"
      {
#line 644 "mercury_compile_front_end.m"
        *top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_18 = top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_17;
#line 644 "mercury_compile_front_end.m"
        *top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_20 = top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_19;
#line 644 "mercury_compile_front_end.m"
      }
#line 643 "mercury_compile_front_end.m"
    else
#line 635 "mercury_compile_front_end.m"
      {
#line 635 "mercury_compile_front_end.m"
        MR_Word top_level__mercury_compile_front_end__UnusedImportSpecs_16;
#line 635 "mercury_compile_front_end.m"
        MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_24_24;
#line 635 "mercury_compile_front_end.m"
        MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_25_25;
#line 635 "mercury_compile_front_end.m"
        MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_30_30;

#line 636 "mercury_compile_front_end.m"
        {
#line 636 "mercury_compile_front_end.m"
          hlds__hlds_error_util__maybe_write_out_errors_8_p_0(top_level__mercury_compile_front_end__Verbose_9, top_level__mercury_compile_front_end__Globals_14, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_17, &top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_24_24, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_19, &top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_25_25);
        }
#line 637 "mercury_compile_front_end.m"
        {
#line 637 "mercury_compile_front_end.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_front_end__Verbose_9, (MR_String) "% Checking for unused imports...");
        }
#line 638 "mercury_compile_front_end.m"
        {
#line 638 "mercury_compile_front_end.m"
          check_hlds__unused_imports__unused_imports_4_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_24_24, &top_level__mercury_compile_front_end__UnusedImportSpecs_16);
        }
#line 639 "mercury_compile_front_end.m"
        {
#line 639 "mercury_compile_front_end.m"
          top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_30_30 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, top_level__mercury_compile_front_end__UnusedImportSpecs_16, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_25_25);
        }
#line 640 "mercury_compile_front_end.m"
        {
#line 640 "mercury_compile_front_end.m"
          hlds__hlds_error_util__maybe_write_out_errors_8_p_0(top_level__mercury_compile_front_end__Verbose_9, top_level__mercury_compile_front_end__Globals_14, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_24_24, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_18, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_30_30, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_20);
        }
#line 641 "mercury_compile_front_end.m"
        {
#line 641 "mercury_compile_front_end.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_front_end__Verbose_9, (MR_String) " done.\n");
        }
#line 642 "mercury_compile_front_end.m"
        {
#line 642 "mercury_compile_front_end.m"
          libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_front_end__Stats_10);
#line 642 "mercury_compile_front_end.m"
          return;
        }
#line 635 "mercury_compile_front_end.m"
      }
#line 630 "mercury_compile_front_end.m"
  }
#line 626 "mercury_compile_front_end.m"
}

#line 584 "mercury_compile_front_end.m"
static void MR_CALL 
top_level__mercury_compile_front_end__maybe_polymorphism_8_p_0(
#line 584 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__Verbose_9,
#line 584 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__Stats_10,
#line 584 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_17,
#line 584 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_18,
#line 584 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_19,
#line 584 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_20)
#line 584 "mercury_compile_front_end.m"
{
#line 588 "mercury_compile_front_end.m"
  {
#line 588 "mercury_compile_front_end.m"
    MR_bool top_level__mercury_compile_front_end__succeeded;
#line 588 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__Globals_14;
#line 588 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__Polymorphism_15;
#line 588 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_23_23;

#line 589 "mercury_compile_front_end.m"
    {
#line 589 "mercury_compile_front_end.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_17, &top_level__mercury_compile_front_end__Globals_14);
    }
#line 590 "mercury_compile_front_end.m"
    {
#line 590 "mercury_compile_front_end.m"
      hlds__hlds_error_util__maybe_write_out_errors_8_p_0(top_level__mercury_compile_front_end__Verbose_9, top_level__mercury_compile_front_end__Globals_14, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_17, &top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_23_23, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_19, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_20);
    }
#line 591 "mercury_compile_front_end.m"
    {
#line 591 "mercury_compile_front_end.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_front_end__Globals_14, (MR_Integer) 301, &top_level__mercury_compile_front_end__Polymorphism_15);
    }
#line 614 "mercury_compile_front_end.m"
    if ((top_level__mercury_compile_front_end__Polymorphism_15 == (MR_Integer) 0))
#line 615 "mercury_compile_front_end.m"
      {
#line 620 "mercury_compile_front_end.m"
        {
#line 620 "mercury_compile_front_end.m"
          mercury__require__unexpected_3_p_0((MR_String) "top_level.mercury_compile_front_end", (MR_String) "predicate \140top_level.mercury_compile_front_end.maybe_polymorphism\'/8", (MR_String) "sorry, \140--no-polymorphism\' is no longer supported");
#line 620 "mercury_compile_front_end.m"
          return;
        }
#line 615 "mercury_compile_front_end.m"
      }
#line 614 "mercury_compile_front_end.m"
    else
#line 593 "mercury_compile_front_end.m"
      {
#line 593 "mercury_compile_front_end.m"
        MR_Word top_level__mercury_compile_front_end__VeryVerbose_16;

#line 594 "mercury_compile_front_end.m"
        {
#line 594 "mercury_compile_front_end.m"
          libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_front_end__Globals_14, (MR_Integer) 45, &top_level__mercury_compile_front_end__VeryVerbose_16);
        }
#line 605 "mercury_compile_front_end.m"
        {
#line 605 "mercury_compile_front_end.m"
          check_hlds__polymorphism__polymorphism_process_module_2_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_23_23, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_18);
        }
#line 2637 "top_level.mercury_compile_front_end.c"
        if ((top_level__mercury_compile_front_end__VeryVerbose_16 == (MR_Integer) 0))
#line 2639 "top_level.mercury_compile_front_end.c"
          {
#line 597 "mercury_compile_front_end.m"
            {
#line 597 "mercury_compile_front_end.m"
              libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_front_end__Verbose_9, (MR_String) "% Transforming polymorphic unifications...");
            }
#line 604 "mercury_compile_front_end.m"
            {
#line 604 "mercury_compile_front_end.m"
              libs__file_util__maybe_flush_output_3_p_0(top_level__mercury_compile_front_end__Verbose_9);
            }
#line 608 "mercury_compile_front_end.m"
            {
#line 608 "mercury_compile_front_end.m"
              libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_front_end__Verbose_9, (MR_String) " done.\n");
            }
#line 2656 "top_level.mercury_compile_front_end.c"
          }
#line 2658 "top_level.mercury_compile_front_end.c"
        else
#line 2660 "top_level.mercury_compile_front_end.c"
          {
#line 601 "mercury_compile_front_end.m"
            {
#line 601 "mercury_compile_front_end.m"
              libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_front_end__Verbose_9, (MR_String) "% Transforming polymorphic unifications...\n");
            }
#line 604 "mercury_compile_front_end.m"
            {
#line 604 "mercury_compile_front_end.m"
              libs__file_util__maybe_flush_output_3_p_0(top_level__mercury_compile_front_end__Verbose_9);
            }
#line 611 "mercury_compile_front_end.m"
            {
#line 611 "mercury_compile_front_end.m"
              libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_front_end__Verbose_9, (MR_String) "% done.\n");
            }
#line 2677 "top_level.mercury_compile_front_end.c"
          }
#line 613 "mercury_compile_front_end.m"
        {
#line 613 "mercury_compile_front_end.m"
          libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_front_end__Stats_10);
#line 613 "mercury_compile_front_end.m"
          return;
        }
#line 593 "mercury_compile_front_end.m"
      }
#line 588 "mercury_compile_front_end.m"
  }
#line 584 "mercury_compile_front_end.m"
}

#line 568 "mercury_compile_front_end.m"
static void MR_CALL 
top_level__mercury_compile_front_end__subst_implementation_defined_literals_8_p_0(
#line 568 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__Verbose_9,
#line 568 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__Stats_10,
#line 568 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_15,
#line 568 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_16,
#line 568 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_17,
#line 568 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_18)
#line 568 "mercury_compile_front_end.m"
{
#line 572 "mercury_compile_front_end.m"
  {
#line 572 "mercury_compile_front_end.m"
    MR_bool top_level__mercury_compile_front_end__succeeded;
#line 572 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__Globals_14;
#line 572 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_21_21;

#line 573 "mercury_compile_front_end.m"
    {
#line 573 "mercury_compile_front_end.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_15, &top_level__mercury_compile_front_end__Globals_14);
    }
#line 574 "mercury_compile_front_end.m"
    {
#line 574 "mercury_compile_front_end.m"
      hlds__hlds_error_util__maybe_write_out_errors_8_p_0(top_level__mercury_compile_front_end__Verbose_9, top_level__mercury_compile_front_end__Globals_14, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_15, &top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_21_21, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_17, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_18);
    }
#line 575 "mercury_compile_front_end.m"
    {
#line 575 "mercury_compile_front_end.m"
      libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_front_end__Verbose_9, (MR_String) "% Substituting implementation-defined literals...\n");
    }
#line 577 "mercury_compile_front_end.m"
    {
#line 577 "mercury_compile_front_end.m"
      libs__file_util__maybe_flush_output_3_p_0(top_level__mercury_compile_front_end__Verbose_9);
    }
#line 578 "mercury_compile_front_end.m"
    {
#line 578 "mercury_compile_front_end.m"
      check_hlds__implementation_defined_literals__subst_impl_defined_literals_2_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_21_21, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_16);
    }
#line 579 "mercury_compile_front_end.m"
    {
#line 579 "mercury_compile_front_end.m"
      libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_front_end__Verbose_9, (MR_String) "% done.\n");
    }
#line 580 "mercury_compile_front_end.m"
    {
#line 580 "mercury_compile_front_end.m"
      libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_front_end__Stats_10);
#line 580 "mercury_compile_front_end.m"
      return;
    }
#line 572 "mercury_compile_front_end.m"
  }
#line 568 "mercury_compile_front_end.m"
}

#line 544 "mercury_compile_front_end.m"
static void MR_CALL 
top_level__mercury_compile_front_end__puritycheck_8_p_0(
#line 544 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__Verbose_9,
#line 544 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__Stats_10,
#line 544 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_17,
#line 544 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_18,
#line 544 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_19,
#line 544 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_20)
#line 544 "mercury_compile_front_end.m"
{
#line 547 "mercury_compile_front_end.m"
  {
#line 547 "mercury_compile_front_end.m"
    MR_bool top_level__mercury_compile_front_end__succeeded;
#line 547 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__PuritySpecs_14;
#line 547 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__Globals_15;
#line 547 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__PurityErrors_16;
#line 547 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_25_25;
#line 547 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_27_27;

#line 548 "mercury_compile_front_end.m"
    {
#line 548 "mercury_compile_front_end.m"
      libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_front_end__Verbose_9, (MR_String) "% Purity-checking clauses...\n");
    }
#line 549 "mercury_compile_front_end.m"
    {
#line 549 "mercury_compile_front_end.m"
      check_hlds__purity__puritycheck_module_4_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_17, &top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_25_25, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &top_level__mercury_compile_front_end__PuritySpecs_14);
    }
#line 550 "mercury_compile_front_end.m"
    {
#line 550 "mercury_compile_front_end.m"
      top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_27_27 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, top_level__mercury_compile_front_end__PuritySpecs_14, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_19);
    }
#line 551 "mercury_compile_front_end.m"
    {
#line 551 "mercury_compile_front_end.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_25_25, &top_level__mercury_compile_front_end__Globals_15);
    }
#line 552 "mercury_compile_front_end.m"
    {
#line 552 "mercury_compile_front_end.m"
      top_level__mercury_compile_front_end__PurityErrors_16 = parse_tree__error_util__contains_errors_2_f_0(top_level__mercury_compile_front_end__Globals_15, top_level__mercury_compile_front_end__PuritySpecs_14);
    }
#line 553 "mercury_compile_front_end.m"
    {
#line 553 "mercury_compile_front_end.m"
      hlds__hlds_error_util__maybe_write_out_errors_8_p_0(top_level__mercury_compile_front_end__Verbose_9, top_level__mercury_compile_front_end__Globals_15, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_25_25, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_18, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_27_27, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_20);
    }
#line 554 "mercury_compile_front_end.m"
    {
#line 554 "mercury_compile_front_end.m"
      libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_front_end__Stats_10);
    }
#line 559 "mercury_compile_front_end.m"
    if ((top_level__mercury_compile_front_end__PurityErrors_16 == (MR_Integer) 0))
#line 560 "mercury_compile_front_end.m"
      {
#line 561 "mercury_compile_front_end.m"
        {
#line 561 "mercury_compile_front_end.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_front_end__Verbose_9, (MR_String) "% Program is purity-correct.\n");
        }
#line 560 "mercury_compile_front_end.m"
      }
#line 559 "mercury_compile_front_end.m"
    else
#line 556 "mercury_compile_front_end.m"
      {
#line 557 "mercury_compile_front_end.m"
        {
#line 557 "mercury_compile_front_end.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_front_end__Verbose_9, (MR_String) "% Program contains purity error(s).\n");
        }
#line 556 "mercury_compile_front_end.m"
      }
#line 564 "mercury_compile_front_end.m"
    {
#line 564 "mercury_compile_front_end.m"
      libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_front_end__Stats_10);
#line 564 "mercury_compile_front_end.m"
      return;
    }
#line 547 "mercury_compile_front_end.m"
  }
#line 544 "mercury_compile_front_end.m"
}

#line 461 "mercury_compile_front_end.m"
static void MR_CALL 
top_level__mercury_compile_front_end__frontend_pass_by_phases_9_p_0(
#line 461 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_26,
#line 461 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_27,
#line 461 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__FoundError_11,
#line 461 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_0_28,
#line 461 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_29,
#line 461 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_30,
#line 461 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_31)
#line 461 "mercury_compile_front_end.m"
{
#line 465 "mercury_compile_front_end.m"
  {
#line 465 "mercury_compile_front_end.m"
    MR_bool top_level__mercury_compile_front_end__succeeded;
#line 465 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__Globals_15;
#line 465 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__Verbose_16;
#line 465 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__Stats_17;
#line 465 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__FoundModeError_18;
#line 465 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__SafeToContinue_19;
#line 465 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_36_36;
#line 465 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_37_37;
#line 465 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_41_41;
#line 465 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_43_43;
#line 465 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_44_44;
#line 465 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_48_48;
#line 465 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_50_50;
#line 465 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_54_54;
#line 465 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_56_56;
#line 465 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_57_57;
#line 465 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_61_61;
#line 465 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_117_117;

#line 466 "mercury_compile_front_end.m"
    {
#line 466 "mercury_compile_front_end.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_26, &top_level__mercury_compile_front_end__Globals_15);
    }
#line 467 "mercury_compile_front_end.m"
    {
#line 467 "mercury_compile_front_end.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_front_end__Globals_15, (MR_Integer) 44, &top_level__mercury_compile_front_end__Verbose_16);
    }
#line 468 "mercury_compile_front_end.m"
    {
#line 468 "mercury_compile_front_end.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_front_end__Globals_15, (MR_Integer) 54, &top_level__mercury_compile_front_end__Stats_17);
    }
#line 470 "mercury_compile_front_end.m"
    {
#line 470 "mercury_compile_front_end.m"
      top_level__mercury_compile_front_end__maybe_polymorphism_8_p_0(top_level__mercury_compile_front_end__Verbose_16, top_level__mercury_compile_front_end__Stats_17, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_26, &top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_36_36, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_30, &top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_37_37);
    }
#line 471 "mercury_compile_front_end.m"
    {
#line 471 "mercury_compile_front_end.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_36_36, (MR_Integer) 30, (MR_String) "polymorphism", top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_0_28, &top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_41_41);
    }
#line 473 "mercury_compile_front_end.m"
    {
#line 473 "mercury_compile_front_end.m"
      top_level__mercury_compile_front_end__maybe_unused_imports_8_p_0(top_level__mercury_compile_front_end__Verbose_16, top_level__mercury_compile_front_end__Stats_17, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_36_36, &top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_43_43, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_37_37, &top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_44_44);
    }
#line 474 "mercury_compile_front_end.m"
    {
#line 474 "mercury_compile_front_end.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_43_43, (MR_Integer) 31, (MR_String) "unused_imports", top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_41_41, &top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_48_48);
    }
#line 477 "mercury_compile_front_end.m"
    {
#line 477 "mercury_compile_front_end.m"
      top_level__mercury_compile_front_end__maybe_mode_constraints_6_p_0(top_level__mercury_compile_front_end__Verbose_16, top_level__mercury_compile_front_end__Stats_17, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_43_43, &top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_50_50);
    }
#line 478 "mercury_compile_front_end.m"
    {
#line 478 "mercury_compile_front_end.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_50_50, (MR_Integer) 33, (MR_String) "mode_constraints", top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_48_48, &top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_54_54);
    }
#line 480 "mercury_compile_front_end.m"
    {
#line 480 "mercury_compile_front_end.m"
      top_level__mercury_compile_front_end__modecheck_10_p_0(top_level__mercury_compile_front_end__Verbose_16, top_level__mercury_compile_front_end__Stats_17, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_50_50, &top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_56_56, &top_level__mercury_compile_front_end__FoundModeError_18, &top_level__mercury_compile_front_end__SafeToContinue_19, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_44_44, &top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_57_57);
    }
#line 482 "mercury_compile_front_end.m"
    {
#line 482 "mercury_compile_front_end.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_56_56, (MR_Integer) 35, (MR_String) "modecheck", top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_54_54, &top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_61_61);
    }
#line 487 "mercury_compile_front_end.m"
    if ((top_level__mercury_compile_front_end__SafeToContinue_19 == (MR_Integer) 0))
#line 488 "mercury_compile_front_end.m"
      {
#line 488 "mercury_compile_front_end.m"
        MR_Word top_level__mercury_compile_front_end__FoundUniqError_20;
#line 488 "mercury_compile_front_end.m"
        MR_Word top_level__mercury_compile_front_end__FoundStratError_21;
#line 488 "mercury_compile_front_end.m"
        MR_Word top_level__mercury_compile_front_end__FoundOISUError_22;
#line 488 "mercury_compile_front_end.m"
        MR_Word top_level__mercury_compile_front_end__FoundTryError_23;
#line 488 "mercury_compile_front_end.m"
        MR_Integer top_level__mercury_compile_front_end__NumErrors_24;
#line 488 "mercury_compile_front_end.m"
        MR_Integer top_level__mercury_compile_front_end__ExitStatus_25;
#line 488 "mercury_compile_front_end.m"
        MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_63_63;
#line 488 "mercury_compile_front_end.m"
        MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_67_67;
#line 488 "mercury_compile_front_end.m"
        MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_69_69;
#line 488 "mercury_compile_front_end.m"
        MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_73_73;
#line 488 "mercury_compile_front_end.m"
        MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_75_75;
#line 488 "mercury_compile_front_end.m"
        MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_76_76;
#line 488 "mercury_compile_front_end.m"
        MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_80_80;
#line 488 "mercury_compile_front_end.m"
        MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_82_82;
#line 488 "mercury_compile_front_end.m"
        MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_83_83;
#line 488 "mercury_compile_front_end.m"
        MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_87_87;
#line 488 "mercury_compile_front_end.m"
        MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_89_89;
#line 488 "mercury_compile_front_end.m"
        MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_90_90;
#line 488 "mercury_compile_front_end.m"
        MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_94_94;
#line 488 "mercury_compile_front_end.m"
        MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_96_96;
#line 488 "mercury_compile_front_end.m"
        MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_97_97;
#line 488 "mercury_compile_front_end.m"
        MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_101_101;
#line 488 "mercury_compile_front_end.m"
        MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_103_103;
#line 488 "mercury_compile_front_end.m"
        MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_104_104;
#line 488 "mercury_compile_front_end.m"
        MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_108_108;
#line 488 "mercury_compile_front_end.m"
        MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_112_112;
#line 488 "mercury_compile_front_end.m"
        MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_113_113;

#line 489 "mercury_compile_front_end.m"
        {
#line 489 "mercury_compile_front_end.m"
          top_level__mercury_compile_front_end__detect_switches_6_p_0(top_level__mercury_compile_front_end__Verbose_16, top_level__mercury_compile_front_end__Stats_17, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_56_56, &top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_63_63);
        }
#line 490 "mercury_compile_front_end.m"
        {
#line 490 "mercury_compile_front_end.m"
          hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_63_63, (MR_Integer) 40, (MR_String) "switch_detect", top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_61_61, &top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_67_67);
        }
#line 492 "mercury_compile_front_end.m"
        {
#line 492 "mercury_compile_front_end.m"
          top_level__mercury_compile_front_end__detect_cse_6_p_0(top_level__mercury_compile_front_end__Verbose_16, top_level__mercury_compile_front_end__Stats_17, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_63_63, &top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_69_69);
        }
#line 493 "mercury_compile_front_end.m"
        {
#line 493 "mercury_compile_front_end.m"
          hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_69_69, (MR_Integer) 45, (MR_String) "cse", top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_67_67, &top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_73_73);
        }
#line 495 "mercury_compile_front_end.m"
        {
#line 495 "mercury_compile_front_end.m"
          top_level__mercury_compile_front_end__check_determinism_8_p_0(top_level__mercury_compile_front_end__Verbose_16, top_level__mercury_compile_front_end__Stats_17, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_69_69, &top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_75_75, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_57_57, &top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_76_76);
        }
#line 496 "mercury_compile_front_end.m"
        {
#line 496 "mercury_compile_front_end.m"
          hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_75_75, (MR_Integer) 50, (MR_String) "determinism", top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_73_73, &top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_80_80);
        }
#line 498 "mercury_compile_front_end.m"
        {
#line 498 "mercury_compile_front_end.m"
          top_level__mercury_compile_front_end__check_unique_modes_9_p_0(top_level__mercury_compile_front_end__Verbose_16, top_level__mercury_compile_front_end__Stats_17, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_75_75, &top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_82_82, &top_level__mercury_compile_front_end__FoundUniqError_20, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_76_76, &top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_83_83);
        }
#line 499 "mercury_compile_front_end.m"
        {
#line 499 "mercury_compile_front_end.m"
          hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_82_82, (MR_Integer) 55, (MR_String) "unique_modes", top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_80_80, &top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_87_87);
        }
#line 501 "mercury_compile_front_end.m"
        {
#line 501 "mercury_compile_front_end.m"
          top_level__mercury_compile_front_end__check_stratification_9_p_0(top_level__mercury_compile_front_end__Verbose_16, top_level__mercury_compile_front_end__Stats_17, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_82_82, &top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_89_89, &top_level__mercury_compile_front_end__FoundStratError_21, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_83_83, &top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_90_90);
        }
#line 503 "mercury_compile_front_end.m"
        {
#line 503 "mercury_compile_front_end.m"
          hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_89_89, (MR_Integer) 60, (MR_String) "stratification", top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_87_87, &top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_94_94);
        }
#line 505 "mercury_compile_front_end.m"
        {
#line 505 "mercury_compile_front_end.m"
          top_level__mercury_compile_front_end__check_oisu_pragmas_9_p_0(top_level__mercury_compile_front_end__Verbose_16, top_level__mercury_compile_front_end__Stats_17, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_89_89, &top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_96_96, &top_level__mercury_compile_front_end__FoundOISUError_22, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_90_90, &top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_97_97);
        }
#line 507 "mercury_compile_front_end.m"
        {
#line 507 "mercury_compile_front_end.m"
          hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_96_96, (MR_Integer) 60, (MR_String) "stratification", top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_94_94, &top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_101_101);
        }
#line 509 "mercury_compile_front_end.m"
        {
#line 509 "mercury_compile_front_end.m"
          top_level__mercury_compile_front_end__process_try_goals_9_p_0(top_level__mercury_compile_front_end__Verbose_16, top_level__mercury_compile_front_end__Stats_17, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_96_96, &top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_103_103, &top_level__mercury_compile_front_end__FoundTryError_23, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_97_97, &top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_104_104);
        }
#line 510 "mercury_compile_front_end.m"
        {
#line 510 "mercury_compile_front_end.m"
          hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_103_103, (MR_Integer) 62, (MR_String) "try", top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_101_101, &top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_108_108);
        }
#line 512 "mercury_compile_front_end.m"
        {
#line 512 "mercury_compile_front_end.m"
          top_level__mercury_compile_front_end__maybe_simplify_10_p_0((MR_Integer) 1, (MR_Integer) 0, top_level__mercury_compile_front_end__Verbose_16, top_level__mercury_compile_front_end__Stats_17, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_103_103, &top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_112_112, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_104_104, &top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_113_113);
        }
#line 514 "mercury_compile_front_end.m"
        {
#line 514 "mercury_compile_front_end.m"
          hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_112_112, (MR_Integer) 65, (MR_String) "frontend_simplify", top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_108_108, &top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_117_117);
        }
#line 516 "mercury_compile_front_end.m"
        {
#line 516 "mercury_compile_front_end.m"
          top_level__mercury_compile_front_end__maybe_proc_statistics_9_p_0(top_level__mercury_compile_front_end__Verbose_16, top_level__mercury_compile_front_end__Stats_17, (MR_String) "AfterFrontEnd", top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_112_112, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_27, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_113_113, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_31);
        }
#line 520 "mercury_compile_front_end.m"
        {
#line 520 "mercury_compile_front_end.m"
          hlds__hlds_module__module_info_get_num_errors_2_p_0(*top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_27, &top_level__mercury_compile_front_end__NumErrors_24);
        }
#line 521 "mercury_compile_front_end.m"
        {
#line 521 "mercury_compile_front_end.m"
          mercury__io__get_exit_status_3_p_0(&top_level__mercury_compile_front_end__ExitStatus_25);
        }
#line 523 "mercury_compile_front_end.m"
        top_level__mercury_compile_front_end__succeeded = (top_level__mercury_compile_front_end__FoundModeError_18 == (MR_Integer) 0);
#line 523 "mercury_compile_front_end.m"
        if (top_level__mercury_compile_front_end__succeeded)
#line 523 "mercury_compile_front_end.m"
          {
#line 524 "mercury_compile_front_end.m"
            top_level__mercury_compile_front_end__succeeded = (top_level__mercury_compile_front_end__FoundUniqError_20 == (MR_Integer) 0);
#line 523 "mercury_compile_front_end.m"
            if (top_level__mercury_compile_front_end__succeeded)
#line 523 "mercury_compile_front_end.m"
              {
#line 525 "mercury_compile_front_end.m"
                top_level__mercury_compile_front_end__succeeded = (top_level__mercury_compile_front_end__FoundStratError_21 == (MR_Integer) 0);
#line 523 "mercury_compile_front_end.m"
                if (top_level__mercury_compile_front_end__succeeded)
#line 523 "mercury_compile_front_end.m"
                  {
#line 526 "mercury_compile_front_end.m"
                    top_level__mercury_compile_front_end__succeeded = (top_level__mercury_compile_front_end__FoundOISUError_22 == (MR_Integer) 0);
#line 523 "mercury_compile_front_end.m"
                    if (top_level__mercury_compile_front_end__succeeded)
#line 523 "mercury_compile_front_end.m"
                      {
#line 527 "mercury_compile_front_end.m"
                        top_level__mercury_compile_front_end__succeeded = (top_level__mercury_compile_front_end__FoundTryError_23 == (MR_Integer) 0);
#line 523 "mercury_compile_front_end.m"
                        if (top_level__mercury_compile_front_end__succeeded)
#line 523 "mercury_compile_front_end.m"
                          {
#line 528 "mercury_compile_front_end.m"
                            top_level__mercury_compile_front_end__succeeded = (top_level__mercury_compile_front_end__NumErrors_24 == (MR_Integer) 0);
#line 523 "mercury_compile_front_end.m"
                            if (top_level__mercury_compile_front_end__succeeded)
#line 532 "mercury_compile_front_end.m"
                              top_level__mercury_compile_front_end__succeeded = (top_level__mercury_compile_front_end__ExitStatus_25 == (MR_Integer) 0);
#line 523 "mercury_compile_front_end.m"
                          }
#line 523 "mercury_compile_front_end.m"
                      }
#line 523 "mercury_compile_front_end.m"
                  }
#line 523 "mercury_compile_front_end.m"
              }
#line 523 "mercury_compile_front_end.m"
          }
#line 535 "mercury_compile_front_end.m"
        if (top_level__mercury_compile_front_end__succeeded)
#line 534 "mercury_compile_front_end.m"
          *top_level__mercury_compile_front_end__FoundError_11 = (MR_Integer) 0;
#line 535 "mercury_compile_front_end.m"
        else
#line 536 "mercury_compile_front_end.m"
          *top_level__mercury_compile_front_end__FoundError_11 = (MR_Integer) 1;
#line 488 "mercury_compile_front_end.m"
      }
#line 487 "mercury_compile_front_end.m"
    else
#line 485 "mercury_compile_front_end.m"
      {
#line 486 "mercury_compile_front_end.m"
        *top_level__mercury_compile_front_end__FoundError_11 = (MR_Integer) 1;
#line 486 "mercury_compile_front_end.m"
        *top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_27 = top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_56_56;
#line 486 "mercury_compile_front_end.m"
        top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_117_117 = top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_61_61;
#line 486 "mercury_compile_front_end.m"
        *top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_31 = top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_57_57;
#line 485 "mercury_compile_front_end.m"
      }
#line 539 "mercury_compile_front_end.m"
    {
#line 539 "mercury_compile_front_end.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(*top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_27, (MR_Integer) 99, (MR_String) "front_end", top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_117_117, top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_29);
#line 539 "mercury_compile_front_end.m"
      return;
    }
#line 465 "mercury_compile_front_end.m"
  }
#line 461 "mercury_compile_front_end.m"
}

#line 360 "mercury_compile_front_end.m"
static void MR_CALL 
top_level__mercury_compile_front_end__maybe_write_optfile_9_p_0(
#line 360 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__MakeOptInt_10,
#line 360 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_36,
#line 360 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_37,
#line 360 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_0_38,
#line 360 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_39,
#line 360 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_40,
#line 360 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_41)
#line 360 "mercury_compile_front_end.m"
{
#line 364 "mercury_compile_front_end.m"
  {
#line 364 "mercury_compile_front_end.m"
    MR_bool top_level__mercury_compile_front_end__succeeded;
#line 364 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__Globals_15;
#line 364 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__IntermodOpt_16;
#line 364 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__IntermodAnalysis_17;
#line 364 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__IntermodArgs_18;
#line 364 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__IntermodDirs_19;
#line 364 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__UseOptFiles_20;
#line 364 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__Termination_21;
#line 364 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__Termination2_22;
#line 364 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__SharingAnalysis_23;
#line 364 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__ReuseAnalysis_24;
#line 364 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__ExceptionAnalysis_25;
#line 364 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__ClosureAnalysis_26;
#line 364 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__TrailingAnalysis_27;
#line 364 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__TablingAnalysis_28;

#line 365 "mercury_compile_front_end.m"
    {
#line 365 "mercury_compile_front_end.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_36, &top_level__mercury_compile_front_end__Globals_15);
    }
#line 366 "mercury_compile_front_end.m"
    {
#line 366 "mercury_compile_front_end.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_front_end__Globals_15, (MR_Integer) 323, &top_level__mercury_compile_front_end__IntermodOpt_16);
    }
#line 367 "mercury_compile_front_end.m"
    {
#line 367 "mercury_compile_front_end.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_front_end__Globals_15, (MR_Integer) 328, &top_level__mercury_compile_front_end__IntermodAnalysis_17);
    }
#line 369 "mercury_compile_front_end.m"
    {
#line 369 "mercury_compile_front_end.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_front_end__Globals_15, (MR_Integer) 348, &top_level__mercury_compile_front_end__IntermodArgs_18);
    }
#line 370 "mercury_compile_front_end.m"
    {
#line 370 "mercury_compile_front_end.m"
      libs__globals__lookup_accumulating_option_3_p_0(top_level__mercury_compile_front_end__Globals_15, (MR_Integer) 643, &top_level__mercury_compile_front_end__IntermodDirs_19);
    }
#line 372 "mercury_compile_front_end.m"
    {
#line 372 "mercury_compile_front_end.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_front_end__Globals_15, (MR_Integer) 325, &top_level__mercury_compile_front_end__UseOptFiles_20);
    }
#line 373 "mercury_compile_front_end.m"
    {
#line 373 "mercury_compile_front_end.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_front_end__Globals_15, (MR_Integer) 411, &top_level__mercury_compile_front_end__Termination_21);
    }
#line 374 "mercury_compile_front_end.m"
    {
#line 374 "mercury_compile_front_end.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_front_end__Globals_15, (MR_Integer) 418, &top_level__mercury_compile_front_end__Termination2_22);
    }
#line 375 "mercury_compile_front_end.m"
    {
#line 375 "mercury_compile_front_end.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_front_end__Globals_15, (MR_Integer) 403, &top_level__mercury_compile_front_end__SharingAnalysis_23);
    }
#line 377 "mercury_compile_front_end.m"
    {
#line 377 "mercury_compile_front_end.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_front_end__Globals_15, (MR_Integer) 405, &top_level__mercury_compile_front_end__ReuseAnalysis_24);
    }
#line 379 "mercury_compile_front_end.m"
    {
#line 379 "mercury_compile_front_end.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_front_end__Globals_15, (MR_Integer) 426, &top_level__mercury_compile_front_end__ExceptionAnalysis_25);
    }
#line 381 "mercury_compile_front_end.m"
    {
#line 381 "mercury_compile_front_end.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_front_end__Globals_15, (MR_Integer) 427, &top_level__mercury_compile_front_end__ClosureAnalysis_26);
    }
#line 383 "mercury_compile_front_end.m"
    {
#line 383 "mercury_compile_front_end.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_front_end__Globals_15, (MR_Integer) 390, &top_level__mercury_compile_front_end__TrailingAnalysis_27);
    }
#line 385 "mercury_compile_front_end.m"
    {
#line 385 "mercury_compile_front_end.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_front_end__Globals_15, (MR_Integer) 393, &top_level__mercury_compile_front_end__TablingAnalysis_28);
    }
#line 427 "mercury_compile_front_end.m"
    if ((top_level__mercury_compile_front_end__MakeOptInt_10 == (MR_Integer) 0))
#line 428 "mercury_compile_front_end.m"
      {
#line 431 "mercury_compile_front_end.m"
        top_level__mercury_compile_front_end__succeeded = (top_level__mercury_compile_front_end__IntermodOpt_16 == (MR_Integer) 1);
#line 3339 "top_level.mercury_compile_front_end.c"
        if (top_level__mercury_compile_front_end__succeeded)
#line 453 "mercury_compile_front_end.m"
          {
#line 453 "mercury_compile_front_end.m"
            transform_hlds__intermod__adjust_pred_import_status_2_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_36, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_37);
          }
#line 3346 "top_level.mercury_compile_front_end.c"
        else
#line 3348 "top_level.mercury_compile_front_end.c"
          {
#line 433 "mercury_compile_front_end.m"
            top_level__mercury_compile_front_end__succeeded = (top_level__mercury_compile_front_end__IntermodAnalysis_17 == (MR_Integer) 1);
#line 3352 "top_level.mercury_compile_front_end.c"
            if (top_level__mercury_compile_front_end__succeeded)
#line 453 "mercury_compile_front_end.m"
              {
#line 453 "mercury_compile_front_end.m"
                transform_hlds__intermod__adjust_pred_import_status_2_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_36, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_37);
              }
#line 3359 "top_level.mercury_compile_front_end.c"
            else
#line 3361 "top_level.mercury_compile_front_end.c"
              {
#line 435 "mercury_compile_front_end.m"
                top_level__mercury_compile_front_end__succeeded = (top_level__mercury_compile_front_end__UseOptFiles_20 == (MR_Integer) 1);
#line 3365 "top_level.mercury_compile_front_end.c"
                if (top_level__mercury_compile_front_end__succeeded)
#line 3367 "top_level.mercury_compile_front_end.c"
                  {
#line 3369 "top_level.mercury_compile_front_end.c"
                    MR_Word top_level__mercury_compile_front_end__Found_33;
#line 3371 "top_level.mercury_compile_front_end.c"
                    MR_Word top_level__mercury_compile_front_end__ModuleName_78;
#line 3373 "top_level.mercury_compile_front_end.c"
                    MR_String top_level__mercury_compile_front_end__OptName_79;

#line 436 "mercury_compile_front_end.m"
                    {
#line 436 "mercury_compile_front_end.m"
                      hlds__hlds_module__module_info_get_name_2_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_36, &top_level__mercury_compile_front_end__ModuleName_78);
                    }
#line 437 "mercury_compile_front_end.m"
                    {
#line 437 "mercury_compile_front_end.m"
                      parse_tree__file_names__module_name_to_search_file_name_6_p_0(top_level__mercury_compile_front_end__Globals_15, top_level__mercury_compile_front_end__ModuleName_78, (MR_String) ".opt", &top_level__mercury_compile_front_end__OptName_79);
                    }
#line 439 "mercury_compile_front_end.m"
                    {
#line 439 "mercury_compile_front_end.m"
                      libs__file_util__search_for_file_returning_dir_6_p_0((MR_Integer) 1, top_level__mercury_compile_front_end__IntermodDirs_19, top_level__mercury_compile_front_end__OptName_79, &top_level__mercury_compile_front_end__Found_33);
                    }
#line 3391 "top_level.mercury_compile_front_end.c"
                    if (((MR_tag((MR_Word) top_level__mercury_compile_front_end__Found_33)) == (MR_mktag((MR_Integer) 1))))
#line 455 "mercury_compile_front_end.m"
                      *top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_37 = top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_36;
#line 3395 "top_level.mercury_compile_front_end.c"
                    else
#line 453 "mercury_compile_front_end.m"
                      {
#line 453 "mercury_compile_front_end.m"
                        transform_hlds__intermod__adjust_pred_import_status_2_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_36, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_37);
                      }
#line 3402 "top_level.mercury_compile_front_end.c"
                  }
#line 3404 "top_level.mercury_compile_front_end.c"
                else
#line 455 "mercury_compile_front_end.m"
                  *top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_37 = top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_36;
#line 3408 "top_level.mercury_compile_front_end.c"
              }
#line 3410 "top_level.mercury_compile_front_end.c"
          }
#line 455 "mercury_compile_front_end.m"
        *top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_39 = top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_0_38;
#line 455 "mercury_compile_front_end.m"
        *top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_41 = top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_40;
#line 428 "mercury_compile_front_end.m"
      }
#line 427 "mercury_compile_front_end.m"
    else
#line 387 "mercury_compile_front_end.m"
      {
#line 387 "mercury_compile_front_end.m"
        MR_Word top_level__mercury_compile_front_end__ModuleName_30;
#line 387 "mercury_compile_front_end.m"
        MR_String top_level__mercury_compile_front_end__OptName_31;
#line 387 "mercury_compile_front_end.m"
        MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_62_62;

#line 388 "mercury_compile_front_end.m"
        {
#line 388 "mercury_compile_front_end.m"
          transform_hlds__intermod__write_opt_file_4_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_36, &top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_62_62);
        }
#line 398 "mercury_compile_front_end.m"
        top_level__mercury_compile_front_end__succeeded = (top_level__mercury_compile_front_end__IntermodAnalysis_17 == (MR_Integer) 0);
#line 398 "mercury_compile_front_end.m"
        if (top_level__mercury_compile_front_end__succeeded)
#line 398 "mercury_compile_front_end.m"
          {
#line 399 "mercury_compile_front_end.m"
            top_level__mercury_compile_front_end__succeeded = (top_level__mercury_compile_front_end__IntermodArgs_18 == (MR_Integer) 1);
#line 400 "mercury_compile_front_end.m"
            if (!(top_level__mercury_compile_front_end__succeeded))
#line 400 "mercury_compile_front_end.m"
              {
#line 400 "mercury_compile_front_end.m"
                top_level__mercury_compile_front_end__succeeded = (top_level__mercury_compile_front_end__Termination_21 == (MR_Integer) 1);
#line 400 "mercury_compile_front_end.m"
                if (!(top_level__mercury_compile_front_end__succeeded))
#line 400 "mercury_compile_front_end.m"
                  {
#line 401 "mercury_compile_front_end.m"
                    top_level__mercury_compile_front_end__succeeded = (top_level__mercury_compile_front_end__Termination2_22 == (MR_Integer) 1);
#line 400 "mercury_compile_front_end.m"
                    if (!(top_level__mercury_compile_front_end__succeeded))
#line 400 "mercury_compile_front_end.m"
                      {
#line 402 "mercury_compile_front_end.m"
                        top_level__mercury_compile_front_end__succeeded = (top_level__mercury_compile_front_end__ExceptionAnalysis_25 == (MR_Integer) 1);
#line 400 "mercury_compile_front_end.m"
                        if (!(top_level__mercury_compile_front_end__succeeded))
#line 400 "mercury_compile_front_end.m"
                          {
#line 403 "mercury_compile_front_end.m"
                            top_level__mercury_compile_front_end__succeeded = (top_level__mercury_compile_front_end__TrailingAnalysis_27 == (MR_Integer) 1);
#line 400 "mercury_compile_front_end.m"
                            if (!(top_level__mercury_compile_front_end__succeeded))
#line 400 "mercury_compile_front_end.m"
                              {
#line 404 "mercury_compile_front_end.m"
                                top_level__mercury_compile_front_end__succeeded = (top_level__mercury_compile_front_end__TablingAnalysis_28 == (MR_Integer) 1);
#line 400 "mercury_compile_front_end.m"
                                if (!(top_level__mercury_compile_front_end__succeeded))
#line 400 "mercury_compile_front_end.m"
                                  {
#line 405 "mercury_compile_front_end.m"
                                    top_level__mercury_compile_front_end__succeeded = (top_level__mercury_compile_front_end__ClosureAnalysis_26 == (MR_Integer) 1);
#line 400 "mercury_compile_front_end.m"
                                    if (!(top_level__mercury_compile_front_end__succeeded))
#line 400 "mercury_compile_front_end.m"
                                      {
#line 406 "mercury_compile_front_end.m"
                                        top_level__mercury_compile_front_end__succeeded = (top_level__mercury_compile_front_end__SharingAnalysis_23 == (MR_Integer) 1);
#line 400 "mercury_compile_front_end.m"
                                        if (!(top_level__mercury_compile_front_end__succeeded))
#line 407 "mercury_compile_front_end.m"
                                          top_level__mercury_compile_front_end__succeeded = (top_level__mercury_compile_front_end__ReuseAnalysis_24 == (MR_Integer) 1);
#line 400 "mercury_compile_front_end.m"
                                      }
#line 400 "mercury_compile_front_end.m"
                                  }
#line 400 "mercury_compile_front_end.m"
                              }
#line 400 "mercury_compile_front_end.m"
                          }
#line 400 "mercury_compile_front_end.m"
                      }
#line 400 "mercury_compile_front_end.m"
                  }
#line 400 "mercury_compile_front_end.m"
              }
#line 398 "mercury_compile_front_end.m"
          }
#line 419 "mercury_compile_front_end.m"
        if (top_level__mercury_compile_front_end__succeeded)
#line 411 "mercury_compile_front_end.m"
          {
#line 411 "mercury_compile_front_end.m"
            MR_Word top_level__mercury_compile_front_end__FoundModeError_29;
#line 411 "mercury_compile_front_end.m"
            MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_64_64;

#line 410 "mercury_compile_front_end.m"
            {
#line 410 "mercury_compile_front_end.m"
              top_level__mercury_compile_front_end__frontend_pass_by_phases_9_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_62_62, &top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_64_64, &top_level__mercury_compile_front_end__FoundModeError_29, top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_0_38, top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_39, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_40, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_41);
            }
#line 415 "mercury_compile_front_end.m"
            if ((top_level__mercury_compile_front_end__FoundModeError_29 == (MR_Integer) 0))
#line 414 "mercury_compile_front_end.m"
              {
#line 414 "mercury_compile_front_end.m"
                top_level__mercury_compile_middle_passes__middle_pass_for_opt_file_4_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_64_64, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_37);
              }
#line 415 "mercury_compile_front_end.m"
            else
#line 416 "mercury_compile_front_end.m"
              {
#line 417 "mercury_compile_front_end.m"
                {
#line 417 "mercury_compile_front_end.m"
                  mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
                }
#line 417 "mercury_compile_front_end.m"
                *top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_37 = top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_64_64;
#line 416 "mercury_compile_front_end.m"
              }
#line 411 "mercury_compile_front_end.m"
          }
#line 419 "mercury_compile_front_end.m"
        else
#line 420 "mercury_compile_front_end.m"
          {
#line 420 "mercury_compile_front_end.m"
            *top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_41 = top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_40;
#line 420 "mercury_compile_front_end.m"
            *top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_39 = top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_0_38;
#line 420 "mercury_compile_front_end.m"
            *top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_37 = top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_62_62;
#line 420 "mercury_compile_front_end.m"
          }
#line 422 "mercury_compile_front_end.m"
        {
#line 422 "mercury_compile_front_end.m"
          hlds__hlds_module__module_info_get_name_2_p_0(*top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_37, &top_level__mercury_compile_front_end__ModuleName_30);
        }
#line 423 "mercury_compile_front_end.m"
        {
#line 423 "mercury_compile_front_end.m"
          parse_tree__file_names__module_name_to_file_name_7_p_0(top_level__mercury_compile_front_end__Globals_15, top_level__mercury_compile_front_end__ModuleName_30, (MR_String) ".opt", (MR_Integer) 0, &top_level__mercury_compile_front_end__OptName_31);
        }
#line 425 "mercury_compile_front_end.m"
        {
#line 425 "mercury_compile_front_end.m"
          parse_tree__module_cmds__update_interface_4_p_0(top_level__mercury_compile_front_end__Globals_15, top_level__mercury_compile_front_end__OptName_31);
        }
#line 426 "mercury_compile_front_end.m"
        {
#line 426 "mercury_compile_front_end.m"
          parse_tree__module_cmds__touch_interface_datestamp_5_p_0(top_level__mercury_compile_front_end__Globals_15, top_level__mercury_compile_front_end__ModuleName_30, (MR_String) ".optdate");
#line 426 "mercury_compile_front_end.m"
          return;
        }
#line 387 "mercury_compile_front_end.m"
      }
#line 364 "mercury_compile_front_end.m"
  }
#line 360 "mercury_compile_front_end.m"
}

#line 170 "mercury_compile_front_end.m"
static void MR_CALL 
top_level__mercury_compile_front_end__frontend_pass_after_typeclass_check_11_p_0(
#line 170 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__FoundUndefModeError_12,
#line 170 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_FoundError_0_39,
#line 170 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_FoundError_40,
#line 170 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_41,
#line 170 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_42,
#line 170 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_0_43,
#line 170 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_44,
#line 170 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_45,
#line 170 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_46)
#line 170 "mercury_compile_front_end.m"
{
#line 175 "mercury_compile_front_end.m"
  {
#line 175 "mercury_compile_front_end.m"
    MR_bool top_level__mercury_compile_front_end__succeeded;
#line 175 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__TypeCtorInfo_154_154;
#line 175 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__Globals_18;
#line 175 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__Verbose_19;
#line 175 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__Stats_20;
#line 175 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__IntermodOpt_21;
#line 175 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__IntermodAnalysis_22;
#line 175 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__UseOptFiles_23;
#line 175 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__MakeOptInt_24;
#line 175 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__TypeCheckConstraints_25;
#line 175 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__WarnInstsWithNoMatchingType_26;
#line 175 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__TypeCheckSpecs_27;
#line 175 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__ExceededTypeCheckIterationLimit_28;
#line 175 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__FoundTypeError_29;
#line 175 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_62_62;
#line 175 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_63_63;
#line 175 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_69_69;
#line 175 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_78_78;
#line 175 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_79_79;
#line 175 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_85_85;
#line 175 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_87_87;
#line 175 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_88_88;
#line 175 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_95_95;
#line 175 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_96_96;
#line 175 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_97_97;
#line 175 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_98_98;
#line 175 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_107_107;

#line 176 "mercury_compile_front_end.m"
    {
#line 176 "mercury_compile_front_end.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_41, &top_level__mercury_compile_front_end__Globals_18);
    }
#line 177 "mercury_compile_front_end.m"
    {
#line 177 "mercury_compile_front_end.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_front_end__Globals_18, (MR_Integer) 44, &top_level__mercury_compile_front_end__Verbose_19);
    }
#line 178 "mercury_compile_front_end.m"
    {
#line 178 "mercury_compile_front_end.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_front_end__Globals_18, (MR_Integer) 54, &top_level__mercury_compile_front_end__Stats_20);
    }
#line 179 "mercury_compile_front_end.m"
    {
#line 179 "mercury_compile_front_end.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_front_end__Globals_18, (MR_Integer) 323, &top_level__mercury_compile_front_end__IntermodOpt_21);
    }
#line 180 "mercury_compile_front_end.m"
    {
#line 180 "mercury_compile_front_end.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_front_end__Globals_18, (MR_Integer) 328, &top_level__mercury_compile_front_end__IntermodAnalysis_22);
    }
#line 182 "mercury_compile_front_end.m"
    {
#line 182 "mercury_compile_front_end.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_front_end__Globals_18, (MR_Integer) 325, &top_level__mercury_compile_front_end__UseOptFiles_23);
    }
#line 183 "mercury_compile_front_end.m"
    {
#line 183 "mercury_compile_front_end.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_front_end__Globals_18, (MR_Integer) 85, &top_level__mercury_compile_front_end__MakeOptInt_24);
    }
#line 185 "mercury_compile_front_end.m"
    {
#line 185 "mercury_compile_front_end.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_front_end__Globals_18, (MR_Integer) 295, &top_level__mercury_compile_front_end__TypeCheckConstraints_25);
    }
#line 188 "mercury_compile_front_end.m"
    top_level__mercury_compile_front_end__succeeded = (top_level__mercury_compile_front_end__IntermodOpt_21 == (MR_Integer) 1);
#line 189 "mercury_compile_front_end.m"
    if (!(top_level__mercury_compile_front_end__succeeded))
#line 189 "mercury_compile_front_end.m"
      {
#line 189 "mercury_compile_front_end.m"
        top_level__mercury_compile_front_end__succeeded = (top_level__mercury_compile_front_end__IntermodAnalysis_22 == (MR_Integer) 1);
#line 189 "mercury_compile_front_end.m"
        if (!(top_level__mercury_compile_front_end__succeeded))
#line 190 "mercury_compile_front_end.m"
          top_level__mercury_compile_front_end__succeeded = (top_level__mercury_compile_front_end__UseOptFiles_23 == (MR_Integer) 1);
#line 189 "mercury_compile_front_end.m"
      }
#line 191 "mercury_compile_front_end.m"
    if (top_level__mercury_compile_front_end__succeeded)
#line 192 "mercury_compile_front_end.m"
      top_level__mercury_compile_front_end__succeeded = (top_level__mercury_compile_front_end__MakeOptInt_24 == (MR_Integer) 0);
#line 204 "mercury_compile_front_end.m"
    if (top_level__mercury_compile_front_end__succeeded)
#line 198 "mercury_compile_front_end.m"
      {
#line 198 "mercury_compile_front_end.m"
        MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_56_56;
#line 198 "mercury_compile_front_end.m"
        MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_57_57;
#line 198 "mercury_compile_front_end.m"
        MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_61_61;

#line 198 "mercury_compile_front_end.m"
        {
#line 198 "mercury_compile_front_end.m"
          hlds__hlds_error_util__maybe_write_out_errors_8_p_0(top_level__mercury_compile_front_end__Verbose_19, top_level__mercury_compile_front_end__Globals_18, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_41, &top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_56_56, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_45, &top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_57_57);
        }
#line 199 "mercury_compile_front_end.m"
        {
#line 199 "mercury_compile_front_end.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_front_end__Verbose_19, (MR_String) "% Eliminating dead predicates... ");
        }
#line 200 "mercury_compile_front_end.m"
        {
#line 200 "mercury_compile_front_end.m"
          transform_hlds__dead_proc_elim__dead_pred_elim_2_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_56_56, &top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_61_61);
        }
#line 201 "mercury_compile_front_end.m"
        {
#line 201 "mercury_compile_front_end.m"
          hlds__hlds_error_util__maybe_write_out_errors_8_p_0(top_level__mercury_compile_front_end__Verbose_19, top_level__mercury_compile_front_end__Globals_18, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_61_61, &top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_62_62, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_57_57, &top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_63_63);
        }
#line 202 "mercury_compile_front_end.m"
        {
#line 202 "mercury_compile_front_end.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_front_end__Verbose_19, (MR_String) "done.\n");
        }
#line 203 "mercury_compile_front_end.m"
        {
#line 203 "mercury_compile_front_end.m"
          hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_62_62, (MR_Integer) 10, (MR_String) "dead_pred_elim", top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_0_43, &top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_69_69);
        }
#line 198 "mercury_compile_front_end.m"
      }
#line 204 "mercury_compile_front_end.m"
    else
#line 205 "mercury_compile_front_end.m"
      {
#line 205 "mercury_compile_front_end.m"
        top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_63_63 = top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_45;
#line 205 "mercury_compile_front_end.m"
        top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_69_69 = top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_0_43;
#line 205 "mercury_compile_front_end.m"
        top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_62_62 = top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_41;
#line 205 "mercury_compile_front_end.m"
      }
#line 208 "mercury_compile_front_end.m"
    {
#line 208 "mercury_compile_front_end.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_front_end__Globals_18, (MR_Integer) 35, &top_level__mercury_compile_front_end__WarnInstsWithNoMatchingType_26);
    }
#line 220 "mercury_compile_front_end.m"
    if ((top_level__mercury_compile_front_end__WarnInstsWithNoMatchingType_26 == (MR_Integer) 0))
#line 221 "mercury_compile_front_end.m"
      {
#line 221 "mercury_compile_front_end.m"
        top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_78_78 = top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_62_62;
#line 221 "mercury_compile_front_end.m"
        top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_85_85 = top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_69_69;
#line 221 "mercury_compile_front_end.m"
        top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_79_79 = top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_63_63;
#line 221 "mercury_compile_front_end.m"
      }
#line 220 "mercury_compile_front_end.m"
    else
#line 211 "mercury_compile_front_end.m"
      {
#line 211 "mercury_compile_front_end.m"
        MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_72_72;
#line 211 "mercury_compile_front_end.m"
        MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_73_73;
#line 211 "mercury_compile_front_end.m"
        MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_77_77;

#line 212 "mercury_compile_front_end.m"
        {
#line 212 "mercury_compile_front_end.m"
          hlds__hlds_error_util__maybe_write_out_errors_8_p_0(top_level__mercury_compile_front_end__Verbose_19, top_level__mercury_compile_front_end__Globals_18, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_62_62, &top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_72_72, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_63_63, &top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_73_73);
        }
#line 213 "mercury_compile_front_end.m"
        {
#line 213 "mercury_compile_front_end.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_front_end__Verbose_19, (MR_String) "% Checking that insts have matching types... ");
        }
#line 215 "mercury_compile_front_end.m"
        {
#line 215 "mercury_compile_front_end.m"
          check_hlds__inst_check__check_insts_have_matching_types_3_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_72_72, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_73_73, &top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_77_77);
        }
#line 216 "mercury_compile_front_end.m"
        {
#line 216 "mercury_compile_front_end.m"
          hlds__hlds_error_util__maybe_write_out_errors_8_p_0(top_level__mercury_compile_front_end__Verbose_19, top_level__mercury_compile_front_end__Globals_18, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_72_72, &top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_78_78, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_77_77, &top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_79_79);
        }
#line 217 "mercury_compile_front_end.m"
        {
#line 217 "mercury_compile_front_end.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_front_end__Verbose_19, (MR_String) "done.\n");
        }
#line 218 "mercury_compile_front_end.m"
        {
#line 218 "mercury_compile_front_end.m"
          hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_78_78, (MR_Integer) 12, (MR_String) "warn_insts_without_matching_type", top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_69_69, &top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_85_85);
        }
#line 211 "mercury_compile_front_end.m"
      }
#line 225 "mercury_compile_front_end.m"
    {
#line 225 "mercury_compile_front_end.m"
      hlds__hlds_error_util__maybe_write_out_errors_8_p_0(top_level__mercury_compile_front_end__Verbose_19, top_level__mercury_compile_front_end__Globals_18, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_78_78, &top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_87_87, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_79_79, &top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_88_88);
    }
#line 226 "mercury_compile_front_end.m"
    {
#line 226 "mercury_compile_front_end.m"
      libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_front_end__Verbose_19, (MR_String) "% Type-checking...\n");
    }
#line 227 "mercury_compile_front_end.m"
    {
#line 227 "mercury_compile_front_end.m"
      libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_front_end__Verbose_19, (MR_String) "% Type-checking clauses...\n");
    }
#line 232 "mercury_compile_front_end.m"
    if ((top_level__mercury_compile_front_end__TypeCheckConstraints_25 == (MR_Integer) 0))
#line 234 "mercury_compile_front_end.m"
      {
#line 234 "mercury_compile_front_end.m"
        check_hlds__typecheck__typecheck_module_4_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_87_87, &top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_95_95, &top_level__mercury_compile_front_end__TypeCheckSpecs_27, &top_level__mercury_compile_front_end__ExceededTypeCheckIterationLimit_28);
      }
#line 232 "mercury_compile_front_end.m"
    else
#line 229 "mercury_compile_front_end.m"
      {
#line 230 "mercury_compile_front_end.m"
        {
#line 230 "mercury_compile_front_end.m"
          check_hlds__type_constraints__typecheck_constraints_3_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_87_87, &top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_95_95, &top_level__mercury_compile_front_end__TypeCheckSpecs_27);
        }
#line 231 "mercury_compile_front_end.m"
        top_level__mercury_compile_front_end__ExceededTypeCheckIterationLimit_28 = (MR_Integer) 0;
#line 229 "mercury_compile_front_end.m"
      }
#line 3869 "top_level.mercury_compile_front_end.c"
    top_level__mercury_compile_front_end__TypeCtorInfo_154_154 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0;
#line 237 "mercury_compile_front_end.m"
    {
#line 237 "mercury_compile_front_end.m"
      top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_96_96 = mercury__list__f_43_43_2_f_0(top_level__mercury_compile_front_end__TypeCtorInfo_154_154, top_level__mercury_compile_front_end__TypeCheckSpecs_27, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_88_88);
    }
#line 238 "mercury_compile_front_end.m"
    {
#line 238 "mercury_compile_front_end.m"
      hlds__hlds_error_util__maybe_write_out_errors_8_p_0(top_level__mercury_compile_front_end__Verbose_19, top_level__mercury_compile_front_end__Globals_18, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_95_95, &top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_97_97, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_96_96, &top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_98_98);
    }
#line 239 "mercury_compile_front_end.m"
    {
#line 239 "mercury_compile_front_end.m"
      top_level__mercury_compile_front_end__FoundTypeError_29 = parse_tree__error_util__contains_errors_2_f_0(top_level__mercury_compile_front_end__Globals_18, top_level__mercury_compile_front_end__TypeCheckSpecs_27);
    }
#line 244 "mercury_compile_front_end.m"
    if ((top_level__mercury_compile_front_end__FoundTypeError_29 == (MR_Integer) 0))
#line 245 "mercury_compile_front_end.m"
      {
#line 246 "mercury_compile_front_end.m"
        {
#line 246 "mercury_compile_front_end.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_front_end__Verbose_19, (MR_String) "% Program is type-correct.\n");
        }
#line 245 "mercury_compile_front_end.m"
      }
#line 244 "mercury_compile_front_end.m"
    else
#line 241 "mercury_compile_front_end.m"
      {
#line 242 "mercury_compile_front_end.m"
        {
#line 242 "mercury_compile_front_end.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_front_end__Verbose_19, (MR_String) "% Program contains type error(s).\n");
        }
#line 241 "mercury_compile_front_end.m"
      }
#line 249 "mercury_compile_front_end.m"
    {
#line 249 "mercury_compile_front_end.m"
      libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_front_end__Stats_20);
    }
#line 250 "mercury_compile_front_end.m"
    {
#line 250 "mercury_compile_front_end.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_97_97, (MR_Integer) 15, (MR_String) "typecheck", top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_85_85, &top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_107_107);
    }
#line 260 "mercury_compile_front_end.m"
    top_level__mercury_compile_front_end__succeeded = (top_level__mercury_compile_front_end__FoundUndefModeError_12 == (MR_Integer) 1);
#line 266 "mercury_compile_front_end.m"
    if (top_level__mercury_compile_front_end__succeeded)
#line 261 "mercury_compile_front_end.m"
      {
#line 261 "mercury_compile_front_end.m"
        *top_level__mercury_compile_front_end__STATE_VARIABLE_FoundError_40 = (MR_Integer) 1;
#line 262 "mercury_compile_front_end.m"
        {
#line 262 "mercury_compile_front_end.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_front_end__Verbose_19, (MR_String) "% Program contains undefined inst or undefined mode error(s).\n");
        }
#line 265 "mercury_compile_front_end.m"
        {
#line 265 "mercury_compile_front_end.m"
          mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
        }
#line 265 "mercury_compile_front_end.m"
        *top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_46 = top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_98_98;
#line 265 "mercury_compile_front_end.m"
        *top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_44 = top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_107_107;
#line 265 "mercury_compile_front_end.m"
        *top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_42 = top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_97_97;
#line 261 "mercury_compile_front_end.m"
      }
#line 266 "mercury_compile_front_end.m"
    else
#line 272 "mercury_compile_front_end.m"
      {
#line 266 "mercury_compile_front_end.m"
        top_level__mercury_compile_front_end__succeeded = (top_level__mercury_compile_front_end__ExceededTypeCheckIterationLimit_28 == (MR_Integer) 1);
#line 272 "mercury_compile_front_end.m"
        if (top_level__mercury_compile_front_end__succeeded)
#line 270 "mercury_compile_front_end.m"
          {
#line 270 "mercury_compile_front_end.m"
            *top_level__mercury_compile_front_end__STATE_VARIABLE_FoundError_40 = (MR_Integer) 1;
#line 271 "mercury_compile_front_end.m"
            {
#line 271 "mercury_compile_front_end.m"
              mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
            }
#line 271 "mercury_compile_front_end.m"
            *top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_46 = top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_98_98;
#line 271 "mercury_compile_front_end.m"
            *top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_44 = top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_107_107;
#line 271 "mercury_compile_front_end.m"
            *top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_42 = top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_97_97;
#line 270 "mercury_compile_front_end.m"
          }
#line 272 "mercury_compile_front_end.m"
        else
#line 273 "mercury_compile_front_end.m"
          {
#line 273 "mercury_compile_front_end.m"
            MR_Word top_level__mercury_compile_front_end__MissingTypeDefnSpecs_30;
#line 273 "mercury_compile_front_end.m"
            MR_Word top_level__mercury_compile_front_end__SomeMissingTypeDefns_31;
#line 273 "mercury_compile_front_end.m"
            MR_Integer top_level__mercury_compile_front_end__NumPostTypeCheckErrors_32;
#line 273 "mercury_compile_front_end.m"
            MR_Word top_level__mercury_compile_front_end__PostTypeCheckAlwaysSpecs_33;
#line 273 "mercury_compile_front_end.m"
            MR_Word top_level__mercury_compile_front_end__PostTypeCheckNoTypeErrorSpecs_34;
#line 273 "mercury_compile_front_end.m"
            MR_Word top_level__mercury_compile_front_end__PostTypeCheckErrors_36;
#line 273 "mercury_compile_front_end.m"
            MR_Word top_level__mercury_compile_front_end__TypecheckOnly_37;
#line 273 "mercury_compile_front_end.m"
            MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_119_119;
#line 273 "mercury_compile_front_end.m"
            MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_120_120;
#line 273 "mercury_compile_front_end.m"
            MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_122_122;
#line 273 "mercury_compile_front_end.m"
            MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_126_126;

#line 273 "mercury_compile_front_end.m"
            {
#line 273 "mercury_compile_front_end.m"
              check_hlds__post_typecheck__check_for_missing_type_defns_2_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_97_97, &top_level__mercury_compile_front_end__MissingTypeDefnSpecs_30);
            }
#line 274 "mercury_compile_front_end.m"
            {
#line 274 "mercury_compile_front_end.m"
              top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_119_119 = mercury__list__f_43_43_2_f_0(top_level__mercury_compile_front_end__TypeCtorInfo_154_154, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_98_98, top_level__mercury_compile_front_end__MissingTypeDefnSpecs_30);
            }
#line 275 "mercury_compile_front_end.m"
            {
#line 275 "mercury_compile_front_end.m"
              top_level__mercury_compile_front_end__SomeMissingTypeDefns_31 = parse_tree__error_util__contains_errors_2_f_0(top_level__mercury_compile_front_end__Globals_18, top_level__mercury_compile_front_end__MissingTypeDefnSpecs_30);
            }
#line 277 "mercury_compile_front_end.m"
            {
#line 277 "mercury_compile_front_end.m"
              check_hlds__post_typecheck__post_typecheck_finish_preds_5_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_97_97, &top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_120_120, &top_level__mercury_compile_front_end__NumPostTypeCheckErrors_32, &top_level__mercury_compile_front_end__PostTypeCheckAlwaysSpecs_33, &top_level__mercury_compile_front_end__PostTypeCheckNoTypeErrorSpecs_34);
            }
#line 289 "mercury_compile_front_end.m"
            if ((top_level__mercury_compile_front_end__FoundTypeError_29 == (MR_Integer) 0))
#line 285 "mercury_compile_front_end.m"
              {
#line 285 "mercury_compile_front_end.m"
                MR_Word top_level__mercury_compile_front_end__PostTypeCheckSpecs_35;

#line 286 "mercury_compile_front_end.m"
                {
#line 286 "mercury_compile_front_end.m"
                  top_level__mercury_compile_front_end__PostTypeCheckSpecs_35 = mercury__list__f_43_43_2_f_0(top_level__mercury_compile_front_end__TypeCtorInfo_154_154, top_level__mercury_compile_front_end__PostTypeCheckAlwaysSpecs_33, top_level__mercury_compile_front_end__PostTypeCheckNoTypeErrorSpecs_34);
                }
#line 288 "mercury_compile_front_end.m"
                {
#line 288 "mercury_compile_front_end.m"
                  top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_122_122 = mercury__list__f_43_43_2_f_0(top_level__mercury_compile_front_end__TypeCtorInfo_154_154, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_119_119, top_level__mercury_compile_front_end__PostTypeCheckSpecs_35);
                }
#line 285 "mercury_compile_front_end.m"
              }
#line 289 "mercury_compile_front_end.m"
            else
#line 291 "mercury_compile_front_end.m"
              {
#line 291 "mercury_compile_front_end.m"
                top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_122_122 = mercury__list__f_43_43_2_f_0(top_level__mercury_compile_front_end__TypeCtorInfo_154_154, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_119_119, top_level__mercury_compile_front_end__PostTypeCheckAlwaysSpecs_33);
              }
#line 294 "mercury_compile_front_end.m"
            top_level__mercury_compile_front_end__succeeded = (top_level__mercury_compile_front_end__SomeMissingTypeDefns_31 == (MR_Integer) 1);
#line 295 "mercury_compile_front_end.m"
            if (!(top_level__mercury_compile_front_end__succeeded))
#line 295 "mercury_compile_front_end.m"
              {
#line 295 "mercury_compile_front_end.m"
                top_level__mercury_compile_front_end__succeeded = (top_level__mercury_compile_front_end__NumPostTypeCheckErrors_32 > (MR_Integer) 0);
#line 295 "mercury_compile_front_end.m"
              }
#line 299 "mercury_compile_front_end.m"
            if (top_level__mercury_compile_front_end__succeeded)
#line 298 "mercury_compile_front_end.m"
              top_level__mercury_compile_front_end__PostTypeCheckErrors_36 = (MR_Integer) 1;
#line 299 "mercury_compile_front_end.m"
            else
#line 300 "mercury_compile_front_end.m"
              top_level__mercury_compile_front_end__PostTypeCheckErrors_36 = (MR_Integer) 0;
#line 302 "mercury_compile_front_end.m"
            {
#line 302 "mercury_compile_front_end.m"
              hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_120_120, (MR_Integer) 19, (MR_String) "post_typecheck", top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_107_107, &top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_126_126);
            }
#line 305 "mercury_compile_front_end.m"
            {
#line 305 "mercury_compile_front_end.m"
              libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_front_end__Globals_18, (MR_Integer) 95, &top_level__mercury_compile_front_end__TypecheckOnly_37);
            }
#line 309 "mercury_compile_front_end.m"
            if ((top_level__mercury_compile_front_end__TypecheckOnly_37 == (MR_Integer) 0))
#line 322 "mercury_compile_front_end.m"
              {
#line 312 "mercury_compile_front_end.m"
                top_level__mercury_compile_front_end__succeeded = (top_level__mercury_compile_front_end__FoundTypeError_29 == (MR_Integer) 1);
#line 313 "mercury_compile_front_end.m"
                if (!(top_level__mercury_compile_front_end__succeeded))
#line 313 "mercury_compile_front_end.m"
                  top_level__mercury_compile_front_end__succeeded = (top_level__mercury_compile_front_end__PostTypeCheckErrors_36 == (MR_Integer) 1);
#line 322 "mercury_compile_front_end.m"
                if (top_level__mercury_compile_front_end__succeeded)
#line 321 "mercury_compile_front_end.m"
                  {
#line 321 "mercury_compile_front_end.m"
                    *top_level__mercury_compile_front_end__STATE_VARIABLE_FoundError_40 = (MR_Integer) 1;
#line 321 "mercury_compile_front_end.m"
                    *top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_46 = top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_122_122;
#line 321 "mercury_compile_front_end.m"
                    *top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_44 = top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_126_126;
#line 321 "mercury_compile_front_end.m"
                    *top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_42 = top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_120_120;
#line 321 "mercury_compile_front_end.m"
                  }
#line 322 "mercury_compile_front_end.m"
                else
#line 323 "mercury_compile_front_end.m"
                  {
#line 323 "mercury_compile_front_end.m"
                    MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_130_130;
#line 323 "mercury_compile_front_end.m"
                    MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_131_131;
#line 323 "mercury_compile_front_end.m"
                    MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_135_135;
#line 323 "mercury_compile_front_end.m"
                    MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_137_137;
#line 323 "mercury_compile_front_end.m"
                    MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_138_138;
#line 323 "mercury_compile_front_end.m"
                    MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_142_142;
#line 323 "mercury_compile_front_end.m"
                    MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_144_144;
#line 323 "mercury_compile_front_end.m"
                    MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_145_145;
#line 323 "mercury_compile_front_end.m"
                    MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_146_146;

#line 323 "mercury_compile_front_end.m"
                    {
#line 323 "mercury_compile_front_end.m"
                      top_level__mercury_compile_front_end__puritycheck_8_p_0(top_level__mercury_compile_front_end__Verbose_19, top_level__mercury_compile_front_end__Stats_20, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_120_120, &top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_130_130, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_122_122, &top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_131_131);
                    }
#line 324 "mercury_compile_front_end.m"
                    {
#line 324 "mercury_compile_front_end.m"
                      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_130_130, (MR_Integer) 20, (MR_String) "puritycheck", top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_126_126, &top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_135_135);
                    }
#line 328 "mercury_compile_front_end.m"
                    {
#line 328 "mercury_compile_front_end.m"
                      top_level__mercury_compile_front_end__subst_implementation_defined_literals_8_p_0(top_level__mercury_compile_front_end__Verbose_19, top_level__mercury_compile_front_end__Stats_20, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_130_130, &top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_137_137, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_131_131, &top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_138_138);
                    }
#line 330 "mercury_compile_front_end.m"
                    {
#line 330 "mercury_compile_front_end.m"
                      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_137_137, (MR_Integer) 25, (MR_String) "implementation_defined_literals", top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_135_135, &top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_142_142);
                    }
#line 335 "mercury_compile_front_end.m"
                    top_level__mercury_compile_front_end__succeeded = (top_level__mercury_compile_front_end__STATE_VARIABLE_FoundError_0_39 == (MR_Integer) 0);
#line 335 "mercury_compile_front_end.m"
                    if (top_level__mercury_compile_front_end__succeeded)
#line 336 "mercury_compile_front_end.m"
                      top_level__mercury_compile_front_end__succeeded = (top_level__mercury_compile_front_end__FoundUndefModeError_12 == (MR_Integer) 0);
#line 340 "mercury_compile_front_end.m"
                    if (top_level__mercury_compile_front_end__succeeded)
#line 338 "mercury_compile_front_end.m"
                      {
#line 338 "mercury_compile_front_end.m"
                        top_level__mercury_compile_front_end__maybe_write_optfile_9_p_0(top_level__mercury_compile_front_end__MakeOptInt_24, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_137_137, &top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_144_144, top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_142_142, &top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_145_145, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_138_138, &top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_146_146);
                      }
#line 340 "mercury_compile_front_end.m"
                    else
#line 341 "mercury_compile_front_end.m"
                      {
#line 341 "mercury_compile_front_end.m"
                        top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_146_146 = top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_138_138;
#line 341 "mercury_compile_front_end.m"
                        top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_145_145 = top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_142_142;
#line 341 "mercury_compile_front_end.m"
                        top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_144_144 = top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_137_137;
#line 341 "mercury_compile_front_end.m"
                      }
#line 346 "mercury_compile_front_end.m"
                    if ((top_level__mercury_compile_front_end__MakeOptInt_24 == (MR_Integer) 0))
#line 347 "mercury_compile_front_end.m"
                      {
#line 347 "mercury_compile_front_end.m"
                        MR_Word top_level__mercury_compile_front_end__FoundModeOrDetError_38;

#line 350 "mercury_compile_front_end.m"
                        {
#line 350 "mercury_compile_front_end.m"
                          top_level__mercury_compile_front_end__frontend_pass_by_phases_9_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_144_144, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_42, &top_level__mercury_compile_front_end__FoundModeOrDetError_38, top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_145_145, top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_44, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_146_146, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_46);
                        }
#line 352 "mercury_compile_front_end.m"
                        {
#line 352 "mercury_compile_front_end.m"
                          *top_level__mercury_compile_front_end__STATE_VARIABLE_FoundError_40 = mercury__bool__or_2_f_0(top_level__mercury_compile_front_end__STATE_VARIABLE_FoundError_0_39, top_level__mercury_compile_front_end__FoundModeOrDetError_38);
                        }
#line 347 "mercury_compile_front_end.m"
                      }
#line 346 "mercury_compile_front_end.m"
                    else
#line 345 "mercury_compile_front_end.m"
                      {
#line 345 "mercury_compile_front_end.m"
                        *top_level__mercury_compile_front_end__STATE_VARIABLE_FoundError_40 = top_level__mercury_compile_front_end__STATE_VARIABLE_FoundError_0_39;
#line 345 "mercury_compile_front_end.m"
                        *top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_42 = top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_144_144;
#line 345 "mercury_compile_front_end.m"
                        *top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_44 = top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_145_145;
#line 345 "mercury_compile_front_end.m"
                        *top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_46 = top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_146_146;
#line 345 "mercury_compile_front_end.m"
                      }
#line 323 "mercury_compile_front_end.m"
                  }
#line 322 "mercury_compile_front_end.m"
              }
#line 309 "mercury_compile_front_end.m"
            else
#line 307 "mercury_compile_front_end.m"
              {
#line 308 "mercury_compile_front_end.m"
                {
#line 308 "mercury_compile_front_end.m"
                  *top_level__mercury_compile_front_end__STATE_VARIABLE_FoundError_40 = mercury__bool__or_2_f_0(top_level__mercury_compile_front_end__STATE_VARIABLE_FoundError_0_39, top_level__mercury_compile_front_end__PostTypeCheckErrors_36);
                }
#line 308 "mercury_compile_front_end.m"
                *top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_42 = top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_120_120;
#line 308 "mercury_compile_front_end.m"
                *top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_44 = top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_126_126;
#line 308 "mercury_compile_front_end.m"
                *top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_46 = top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_122_122;
#line 307 "mercury_compile_front_end.m"
              }
#line 273 "mercury_compile_front_end.m"
          }
#line 272 "mercury_compile_front_end.m"
      }
#line 175 "mercury_compile_front_end.m"
  }
#line 170 "mercury_compile_front_end.m"
}

#line 986 "mercury_compile_front_end.m"
static void MR_CALL 
top_level__mercury_compile_front_end__maybe_simplify_10_p_0_1(
#line 986 "mercury_compile_front_end.m"
  MR_Box top_level__mercury_compile_front_end__closure_arg,
#line 986 "mercury_compile_front_end.m"
  MR_Box top_level__mercury_compile_front_end__wrapper_arg_1,
#line 986 "mercury_compile_front_end.m"
  MR_Box top_level__mercury_compile_front_end__wrapper_arg_2,
#line 986 "mercury_compile_front_end.m"
  MR_Box * top_level__mercury_compile_front_end__wrapper_arg_3,
#line 986 "mercury_compile_front_end.m"
  MR_Box top_level__mercury_compile_front_end__wrapper_arg_4,
#line 986 "mercury_compile_front_end.m"
  MR_Box * top_level__mercury_compile_front_end__wrapper_arg_5,
#line 986 "mercury_compile_front_end.m"
  MR_Box top_level__mercury_compile_front_end__wrapper_arg_6,
#line 986 "mercury_compile_front_end.m"
  MR_Box * top_level__mercury_compile_front_end__wrapper_arg_7)
#line 986 "mercury_compile_front_end.m"
{
#line 986 "mercury_compile_front_end.m"
  {
#line 986 "mercury_compile_front_end.m"
    MR_Box top_level__mercury_compile_front_end__closure = top_level__mercury_compile_front_end__closure_arg;
#line 986 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__conv2_STATE_VARIABLE_ModuleInfo_23;
#line 986 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__conv1_STATE_VARIABLE_PredInfo_25;
#line 986 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__conv0_STATE_VARIABLE_Specs_27;

#line 986 "mercury_compile_front_end.m"
    {
#line 986 "mercury_compile_front_end.m"
      top_level__mercury_compile_front_end__simplify_pred_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_front_end__closure, (MR_Integer) 3))), ((MR_Word) top_level__mercury_compile_front_end__wrapper_arg_1), ((MR_Word) top_level__mercury_compile_front_end__wrapper_arg_2), &top_level__mercury_compile_front_end__conv2_STATE_VARIABLE_ModuleInfo_23, ((MR_Word) top_level__mercury_compile_front_end__wrapper_arg_4), &top_level__mercury_compile_front_end__conv1_STATE_VARIABLE_PredInfo_25, ((MR_Word) top_level__mercury_compile_front_end__wrapper_arg_6), &top_level__mercury_compile_front_end__conv0_STATE_VARIABLE_Specs_27);
    }
#line 986 "mercury_compile_front_end.m"
    *top_level__mercury_compile_front_end__wrapper_arg_3 = ((MR_Box) (top_level__mercury_compile_front_end__conv2_STATE_VARIABLE_ModuleInfo_23));
#line 986 "mercury_compile_front_end.m"
    *top_level__mercury_compile_front_end__wrapper_arg_5 = ((MR_Box) (top_level__mercury_compile_front_end__conv1_STATE_VARIABLE_PredInfo_25));
#line 986 "mercury_compile_front_end.m"
    *top_level__mercury_compile_front_end__wrapper_arg_7 = ((MR_Box) (top_level__mercury_compile_front_end__conv0_STATE_VARIABLE_Specs_27));
#line 986 "mercury_compile_front_end.m"
  }
#line 986 "mercury_compile_front_end.m"
}

#line 66 "mercury_compile_front_end.m"
void MR_CALL 
top_level__mercury_compile_front_end__maybe_simplify_10_p_0(
#line 66 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__Warn_11,
#line 66 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__SimplifyPass_12,
#line 66 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__Verbose_13,
#line 66 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__Stats_14,
#line 66 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_31,
#line 66 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_32,
#line 66 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_33,
#line 66 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_34)
#line 66 "mercury_compile_front_end.m"
{
#line 904 "mercury_compile_front_end.m"
  {
#line 904 "mercury_compile_front_end.m"
    MR_bool top_level__mercury_compile_front_end__succeeded;
#line 904 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__Globals_18;
#line 904 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__SimpList_19;
#line 904 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__SimplifyTasks0_20;
#line 904 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_SimpList_37_37;

#line 905 "mercury_compile_front_end.m"
    {
#line 905 "mercury_compile_front_end.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_31, &top_level__mercury_compile_front_end__Globals_18);
    }
#line 907 "mercury_compile_front_end.m"
    {
#line 907 "mercury_compile_front_end.m"
      check_hlds__simplify__simplify_tasks__find_simplify_tasks_3_p_0(top_level__mercury_compile_front_end__Warn_11, top_level__mercury_compile_front_end__Globals_18, &top_level__mercury_compile_front_end__SimplifyTasks0_20);
    }
#line 908 "mercury_compile_front_end.m"
    {
#line 908 "mercury_compile_front_end.m"
      top_level__mercury_compile_front_end__STATE_VARIABLE_SimpList_37_37 = check_hlds__simplify__simplify_tasks__simplify_tasks_to_list_1_f_0(top_level__mercury_compile_front_end__SimplifyTasks0_20);
    }
#line 912 "mercury_compile_front_end.m"
    if ((top_level__mercury_compile_front_end__SimplifyPass_12 == (MR_Integer) 0))
#line 910 "mercury_compile_front_end.m"
      {
#line 911 "mercury_compile_front_end.m"
        {
#line 911 "mercury_compile_front_end.m"
          mercury__list__cons_3_p_0((MR_Word) &check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__type_ctor_info_simplify_task_0, ((MR_Box) ((MR_Integer) 5)), top_level__mercury_compile_front_end__STATE_VARIABLE_SimpList_37_37, &top_level__mercury_compile_front_end__SimpList_19);
        }
#line 910 "mercury_compile_front_end.m"
      }
#line 912 "mercury_compile_front_end.m"
    else
#line 912 "mercury_compile_front_end.m"
      if ((top_level__mercury_compile_front_end__SimplifyPass_12 == (MR_Integer) 5))
#line 950 "mercury_compile_front_end.m"
        {
#line 950 "mercury_compile_front_end.m"
          MR_Word top_level__mercury_compile_front_end__TypeCtorInfo_89_89;
#line 950 "mercury_compile_front_end.m"
          MR_Word top_level__mercury_compile_front_end__ConstProp_23;
#line 950 "mercury_compile_front_end.m"
          MR_Word top_level__mercury_compile_front_end__DeepProf_24;
#line 950 "mercury_compile_front_end.m"
          MR_Word top_level__mercury_compile_front_end__TSWProf_25;
#line 950 "mercury_compile_front_end.m"
          MR_Word top_level__mercury_compile_front_end__TSCProf_26;
#line 950 "mercury_compile_front_end.m"
          MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_SimpList_43_43;
#line 950 "mercury_compile_front_end.m"
          MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_SimpList_47_47;

#line 956 "mercury_compile_front_end.m"
          {
#line 956 "mercury_compile_front_end.m"
            libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_front_end__Globals_18, (MR_Integer) 363, &top_level__mercury_compile_front_end__ConstProp_23);
          }
#line 958 "mercury_compile_front_end.m"
          {
#line 958 "mercury_compile_front_end.m"
            libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_front_end__Globals_18, (MR_Integer) 189, &top_level__mercury_compile_front_end__DeepProf_24);
          }
#line 959 "mercury_compile_front_end.m"
          {
#line 959 "mercury_compile_front_end.m"
            libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_front_end__Globals_18, (MR_Integer) 206, &top_level__mercury_compile_front_end__TSWProf_25);
          }
#line 961 "mercury_compile_front_end.m"
          {
#line 961 "mercury_compile_front_end.m"
            libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_front_end__Globals_18, (MR_Integer) 207, &top_level__mercury_compile_front_end__TSCProf_26);
          }
#line 964 "mercury_compile_front_end.m"
          top_level__mercury_compile_front_end__succeeded = (top_level__mercury_compile_front_end__ConstProp_23 == (MR_Integer) 1);
#line 964 "mercury_compile_front_end.m"
          if (top_level__mercury_compile_front_end__succeeded)
#line 964 "mercury_compile_front_end.m"
            {
#line 965 "mercury_compile_front_end.m"
              top_level__mercury_compile_front_end__succeeded = (top_level__mercury_compile_front_end__DeepProf_24 == (MR_Integer) 0);
#line 964 "mercury_compile_front_end.m"
              if (top_level__mercury_compile_front_end__succeeded)
#line 964 "mercury_compile_front_end.m"
                {
#line 966 "mercury_compile_front_end.m"
                  top_level__mercury_compile_front_end__succeeded = (top_level__mercury_compile_front_end__TSWProf_25 == (MR_Integer) 0);
#line 964 "mercury_compile_front_end.m"
                  if (top_level__mercury_compile_front_end__succeeded)
#line 967 "mercury_compile_front_end.m"
                    top_level__mercury_compile_front_end__succeeded = (top_level__mercury_compile_front_end__TSCProf_26 == (MR_Integer) 0);
#line 964 "mercury_compile_front_end.m"
                }
#line 964 "mercury_compile_front_end.m"
            }
#line 970 "mercury_compile_front_end.m"
          if (top_level__mercury_compile_front_end__succeeded)
#line 969 "mercury_compile_front_end.m"
            {
#line 969 "mercury_compile_front_end.m"
              {
#line 969 "mercury_compile_front_end.m"
                mercury__list__cons_3_p_0((MR_Word) &check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__type_ctor_info_simplify_task_0, ((MR_Box) ((MR_Integer) 9)), top_level__mercury_compile_front_end__STATE_VARIABLE_SimpList_37_37, &top_level__mercury_compile_front_end__STATE_VARIABLE_SimpList_43_43);
              }
#line 969 "mercury_compile_front_end.m"
            }
#line 970 "mercury_compile_front_end.m"
          else
#line 971 "mercury_compile_front_end.m"
            {
#line 971 "mercury_compile_front_end.m"
              {
#line 971 "mercury_compile_front_end.m"
                top_level__mercury_compile_front_end__STATE_VARIABLE_SimpList_43_43 = mercury__list__delete_all_2_f_0((MR_Word) &check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__type_ctor_info_simplify_task_0, top_level__mercury_compile_front_end__STATE_VARIABLE_SimpList_37_37, ((MR_Box) ((MR_Integer) 9)));
              }
#line 971 "mercury_compile_front_end.m"
            }
#line 4418 "top_level.mercury_compile_front_end.c"
          top_level__mercury_compile_front_end__TypeCtorInfo_89_89 = (MR_Word) &check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__type_ctor_info_simplify_task_0;
#line 973 "mercury_compile_front_end.m"
          {
#line 973 "mercury_compile_front_end.m"
            mercury__list__cons_3_p_0(top_level__mercury_compile_front_end__TypeCtorInfo_89_89, ((MR_Box) ((MR_Integer) 4)), top_level__mercury_compile_front_end__STATE_VARIABLE_SimpList_43_43, &top_level__mercury_compile_front_end__STATE_VARIABLE_SimpList_47_47);
          }
#line 974 "mercury_compile_front_end.m"
          {
#line 974 "mercury_compile_front_end.m"
            mercury__list__cons_3_p_0(top_level__mercury_compile_front_end__TypeCtorInfo_89_89, ((MR_Box) ((MR_Integer) 7)), top_level__mercury_compile_front_end__STATE_VARIABLE_SimpList_47_47, &top_level__mercury_compile_front_end__SimpList_19);
          }
#line 950 "mercury_compile_front_end.m"
        }
#line 912 "mercury_compile_front_end.m"
      else
#line 912 "mercury_compile_front_end.m"
        if ((top_level__mercury_compile_front_end__SimplifyPass_12 == (MR_Integer) 4))
#line 947 "mercury_compile_front_end.m"
          {
#line 948 "mercury_compile_front_end.m"
            {
#line 948 "mercury_compile_front_end.m"
              mercury__list__cons_3_p_0((MR_Word) &check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__type_ctor_info_simplify_task_0, ((MR_Box) ((MR_Integer) 4)), top_level__mercury_compile_front_end__STATE_VARIABLE_SimpList_37_37, &top_level__mercury_compile_front_end__SimpList_19);
            }
#line 947 "mercury_compile_front_end.m"
          }
#line 912 "mercury_compile_front_end.m"
        else
#line 912 "mercury_compile_front_end.m"
          if ((top_level__mercury_compile_front_end__SimplifyPass_12 == (MR_Integer) 1))
#line 913 "mercury_compile_front_end.m"
            {
#line 914 "mercury_compile_front_end.m"
              {
#line 914 "mercury_compile_front_end.m"
                mercury__list__cons_3_p_0((MR_Word) &check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__type_ctor_info_simplify_task_0, ((MR_Box) ((MR_Integer) 4)), top_level__mercury_compile_front_end__STATE_VARIABLE_SimpList_37_37, &top_level__mercury_compile_front_end__SimpList_19);
              }
#line 913 "mercury_compile_front_end.m"
            }
#line 912 "mercury_compile_front_end.m"
          else
#line 912 "mercury_compile_front_end.m"
            if ((top_level__mercury_compile_front_end__SimplifyPass_12 == (MR_Integer) 3))
#line 932 "mercury_compile_front_end.m"
              {
#line 932 "mercury_compile_front_end.m"
                MR_Word top_level__mercury_compile_front_end__PreParSimplify_22;

#line 937 "mercury_compile_front_end.m"
                {
#line 937 "mercury_compile_front_end.m"
                  libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_front_end__Globals_18, (MR_Integer) 192, &top_level__mercury_compile_front_end__PreParSimplify_22);
                }
#line 942 "mercury_compile_front_end.m"
                if ((top_level__mercury_compile_front_end__PreParSimplify_22 == (MR_Integer) 0))
#line 944 "mercury_compile_front_end.m"
                  top_level__mercury_compile_front_end__SimpList_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 942 "mercury_compile_front_end.m"
                else
#line 940 "mercury_compile_front_end.m"
                  {
#line 941 "mercury_compile_front_end.m"
                    {
#line 941 "mercury_compile_front_end.m"
                      mercury__list__cons_3_p_0((MR_Word) &check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__type_ctor_info_simplify_task_0, ((MR_Box) ((MR_Integer) 4)), top_level__mercury_compile_front_end__STATE_VARIABLE_SimpList_37_37, &top_level__mercury_compile_front_end__SimpList_19);
                    }
#line 940 "mercury_compile_front_end.m"
                  }
#line 932 "mercury_compile_front_end.m"
              }
#line 912 "mercury_compile_front_end.m"
            else
#line 916 "mercury_compile_front_end.m"
              {
#line 916 "mercury_compile_front_end.m"
                MR_Word top_level__mercury_compile_front_end__PreProfSimplify_21;

#line 922 "mercury_compile_front_end.m"
                {
#line 922 "mercury_compile_front_end.m"
                  libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_front_end__Globals_18, (MR_Integer) 191, &top_level__mercury_compile_front_end__PreProfSimplify_21);
                }
#line 927 "mercury_compile_front_end.m"
                if ((top_level__mercury_compile_front_end__PreProfSimplify_21 == (MR_Integer) 0))
#line 929 "mercury_compile_front_end.m"
                  top_level__mercury_compile_front_end__SimpList_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 927 "mercury_compile_front_end.m"
                else
#line 925 "mercury_compile_front_end.m"
                  {
#line 926 "mercury_compile_front_end.m"
                    {
#line 926 "mercury_compile_front_end.m"
                      mercury__list__cons_3_p_0((MR_Word) &check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__type_ctor_info_simplify_task_0, ((MR_Box) ((MR_Integer) 4)), top_level__mercury_compile_front_end__STATE_VARIABLE_SimpList_37_37, &top_level__mercury_compile_front_end__SimpList_19);
                    }
#line 925 "mercury_compile_front_end.m"
                  }
#line 916 "mercury_compile_front_end.m"
              }
#line 1002 "mercury_compile_front_end.m"
    if ((top_level__mercury_compile_front_end__SimpList_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1003 "mercury_compile_front_end.m"
      {
#line 1003 "mercury_compile_front_end.m"
        *top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_32 = top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_31;
#line 1003 "mercury_compile_front_end.m"
        *top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_34 = top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_33;
#line 1003 "mercury_compile_front_end.m"
      }
#line 1002 "mercury_compile_front_end.m"
    else
#line 979 "mercury_compile_front_end.m"
      {
#line 979 "mercury_compile_front_end.m"
        MR_Word top_level__mercury_compile_front_end__SimplifyTasks_29;
#line 979 "mercury_compile_front_end.m"
        MR_Word top_level__mercury_compile_front_end__SimplifySpecs_30;
#line 979 "mercury_compile_front_end.m"
        MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_64_64;
#line 979 "mercury_compile_front_end.m"
        MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_65_65;
#line 979 "mercury_compile_front_end.m"
        MR_Word top_level__mercury_compile_front_end__V_70_70;
#line 979 "mercury_compile_front_end.m"
        MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_71_71;
#line 979 "mercury_compile_front_end.m"
        MR_Word top_level__mercury_compile_front_end__V_74_74;

#line 981 "mercury_compile_front_end.m"
        {
#line 981 "mercury_compile_front_end.m"
          hlds__hlds_error_util__maybe_write_out_errors_8_p_0(top_level__mercury_compile_front_end__Verbose_13, top_level__mercury_compile_front_end__Globals_18, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_31, &top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_64_64, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_33, &top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_65_65);
        }
#line 982 "mercury_compile_front_end.m"
        {
#line 982 "mercury_compile_front_end.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_front_end__Verbose_13, (MR_String) "% Simplifying goals...\n");
        }
#line 983 "mercury_compile_front_end.m"
        {
#line 983 "mercury_compile_front_end.m"
          libs__file_util__maybe_flush_output_3_p_0(top_level__mercury_compile_front_end__Verbose_13);
        }
#line 984 "mercury_compile_front_end.m"
        {
#line 984 "mercury_compile_front_end.m"
          top_level__mercury_compile_front_end__SimplifyTasks_29 = check_hlds__simplify__simplify_tasks__list_to_simplify_tasks_1_f_0(top_level__mercury_compile_front_end__SimpList_19);
        }
#line 986 "mercury_compile_front_end.m"
        {
#line 986 "mercury_compile_front_end.m"
          top_level__mercury_compile_front_end__V_74_74 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 986 "mercury_compile_front_end.m"
          MR_hl_field(MR_mktag(0), top_level__mercury_compile_front_end__V_74_74, 0) = ((MR_Box) (&top_level__mercury_compile_front_end_scalar_common_4[0]));
#line 986 "mercury_compile_front_end.m"
          MR_hl_field(MR_mktag(0), top_level__mercury_compile_front_end__V_74_74, 1) = ((MR_Box) (top_level__mercury_compile_front_end__maybe_simplify_10_p_0_1));
#line 986 "mercury_compile_front_end.m"
          MR_hl_field(MR_mktag(0), top_level__mercury_compile_front_end__V_74_74, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 986 "mercury_compile_front_end.m"
          MR_hl_field(MR_mktag(0), top_level__mercury_compile_front_end__V_74_74, 3) = ((MR_Box) (top_level__mercury_compile_front_end__SimplifyTasks_29));
#line 986 "mercury_compile_front_end.m"
        }
#line 986 "mercury_compile_front_end.m"
        top_level__mercury_compile_front_end__V_70_70 = (MR_Word) top_level__mercury_compile_front_end__V_74_74;
#line 985 "mercury_compile_front_end.m"
        {
#line 985 "mercury_compile_front_end.m"
          hlds__passes_aux__process_all_nonimported_preds_errors_7_p_0(top_level__mercury_compile_front_end__V_70_70, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_64_64, &top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_71_71, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &top_level__mercury_compile_front_end__SimplifySpecs_30);
        }
#line 992 "mercury_compile_front_end.m"
        if ((top_level__mercury_compile_front_end__SimplifyPass_12 == (MR_Integer) 0))
#line 989 "mercury_compile_front_end.m"
          {
#line 989 "mercury_compile_front_end.m"
            MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_75_75;

#line 990 "mercury_compile_front_end.m"
            {
#line 990 "mercury_compile_front_end.m"
              top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_75_75 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, top_level__mercury_compile_front_end__SimplifySpecs_30, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_65_65);
            }
#line 991 "mercury_compile_front_end.m"
            {
#line 991 "mercury_compile_front_end.m"
              hlds__hlds_error_util__maybe_write_out_errors_8_p_0(top_level__mercury_compile_front_end__Verbose_13, top_level__mercury_compile_front_end__Globals_18, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_71_71, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_32, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_75_75, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_34);
            }
#line 989 "mercury_compile_front_end.m"
          }
#line 992 "mercury_compile_front_end.m"
        else
#line 992 "mercury_compile_front_end.m"
          if ((top_level__mercury_compile_front_end__SimplifyPass_12 == (MR_Integer) 5))
#line 993 "mercury_compile_front_end.m"
            {
#line 993 "mercury_compile_front_end.m"
              *top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_32 = top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_71_71;
#line 993 "mercury_compile_front_end.m"
              *top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_34 = top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_65_65;
#line 993 "mercury_compile_front_end.m"
            }
#line 992 "mercury_compile_front_end.m"
          else
#line 992 "mercury_compile_front_end.m"
            if ((top_level__mercury_compile_front_end__SimplifyPass_12 == (MR_Integer) 4))
#line 994 "mercury_compile_front_end.m"
              {
#line 994 "mercury_compile_front_end.m"
                *top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_32 = top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_71_71;
#line 994 "mercury_compile_front_end.m"
                *top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_34 = top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_65_65;
#line 994 "mercury_compile_front_end.m"
              }
#line 992 "mercury_compile_front_end.m"
            else
#line 992 "mercury_compile_front_end.m"
              if ((top_level__mercury_compile_front_end__SimplifyPass_12 == (MR_Integer) 1))
#line 995 "mercury_compile_front_end.m"
                {
#line 995 "mercury_compile_front_end.m"
                  *top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_32 = top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_71_71;
#line 995 "mercury_compile_front_end.m"
                  *top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_34 = top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_65_65;
#line 995 "mercury_compile_front_end.m"
                }
#line 992 "mercury_compile_front_end.m"
              else
#line 992 "mercury_compile_front_end.m"
                if ((top_level__mercury_compile_front_end__SimplifyPass_12 == (MR_Integer) 3))
#line 997 "mercury_compile_front_end.m"
                  {
#line 997 "mercury_compile_front_end.m"
                    *top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_32 = top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_71_71;
#line 997 "mercury_compile_front_end.m"
                    *top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_34 = top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_65_65;
#line 997 "mercury_compile_front_end.m"
                  }
#line 992 "mercury_compile_front_end.m"
                else
#line 996 "mercury_compile_front_end.m"
                  {
#line 996 "mercury_compile_front_end.m"
                    *top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_32 = top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_71_71;
#line 996 "mercury_compile_front_end.m"
                    *top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_34 = top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_65_65;
#line 996 "mercury_compile_front_end.m"
                  }
#line 1000 "mercury_compile_front_end.m"
        {
#line 1000 "mercury_compile_front_end.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_front_end__Verbose_13, (MR_String) "% done.\n");
        }
#line 1001 "mercury_compile_front_end.m"
        {
#line 1001 "mercury_compile_front_end.m"
          libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_front_end__Stats_14);
#line 1001 "mercury_compile_front_end.m"
          return;
        }
#line 979 "mercury_compile_front_end.m"
      }
#line 904 "mercury_compile_front_end.m"
  }
#line 66 "mercury_compile_front_end.m"
}

#line 32 "mercury_compile_front_end.m"
void MR_CALL 
top_level__mercury_compile_front_end__frontend_pass_13_p_0(
#line 32 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__QualInfo0_14,
#line 32 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__FoundUndefTypeError_15,
#line 32 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__FoundUndefModeError_16,
#line 32 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_FoundError_0_29,
#line 32 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_FoundError_30,
#line 32 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_31,
#line 32 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_32,
#line 32 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_0_33,
#line 32 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_34,
#line 32 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_35,
#line 32 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_36)
#line 32 "mercury_compile_front_end.m"
{
#line 126 "mercury_compile_front_end.m"
  {
#line 126 "mercury_compile_front_end.m"
    MR_bool top_level__mercury_compile_front_end__succeeded;
#line 126 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__Globals_22;
#line 126 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__Verbose_23;

#line 129 "mercury_compile_front_end.m"
    {
#line 129 "mercury_compile_front_end.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_31, &top_level__mercury_compile_front_end__Globals_22);
    }
#line 130 "mercury_compile_front_end.m"
    {
#line 130 "mercury_compile_front_end.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_front_end__Globals_22, (MR_Integer) 44, &top_level__mercury_compile_front_end__Verbose_23);
    }
#line 140 "mercury_compile_front_end.m"
    if ((top_level__mercury_compile_front_end__FoundUndefTypeError_15 == (MR_Integer) 0))
#line 141 "mercury_compile_front_end.m"
      {
#line 141 "mercury_compile_front_end.m"
        MR_Word top_level__mercury_compile_front_end__TypeCtorInfo_76_76;
#line 141 "mercury_compile_front_end.m"
        MR_Word top_level__mercury_compile_front_end__PostTypeSpecs_24;
#line 141 "mercury_compile_front_end.m"
        MR_Word top_level__mercury_compile_front_end__PostTypeErrors_25;
#line 141 "mercury_compile_front_end.m"
        MR_Word top_level__mercury_compile_front_end__QualInfo_26;
#line 141 "mercury_compile_front_end.m"
        MR_Word top_level__mercury_compile_front_end__TypeClassSpecs_27;
#line 141 "mercury_compile_front_end.m"
        MR_Word top_level__mercury_compile_front_end__TypeClassErrors_28;
#line 141 "mercury_compile_front_end.m"
        MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_40_40;
#line 141 "mercury_compile_front_end.m"
        MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_41_41;
#line 141 "mercury_compile_front_end.m"
        MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_45_45;
#line 141 "mercury_compile_front_end.m"
        MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_FoundError_46_46;
#line 141 "mercury_compile_front_end.m"
        MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_49_49;
#line 141 "mercury_compile_front_end.m"
        MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_53_53;
#line 141 "mercury_compile_front_end.m"
        MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_55_55;
#line 141 "mercury_compile_front_end.m"
        MR_Word top_level__mercury_compile_front_end__V_56_56;
#line 141 "mercury_compile_front_end.m"
        MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_59_59;
#line 141 "mercury_compile_front_end.m"
        MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_61_61;

#line 142 "mercury_compile_front_end.m"
        {
#line 142 "mercury_compile_front_end.m"
          hlds__hlds_error_util__maybe_write_out_errors_8_p_0(top_level__mercury_compile_front_end__Verbose_23, top_level__mercury_compile_front_end__Globals_22, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_31, &top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_40_40, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_35, &top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_41_41);
        }
#line 144 "mercury_compile_front_end.m"
        {
#line 144 "mercury_compile_front_end.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_front_end__Verbose_23, (MR_String) "% Post-processing type definitions...\n");
        }
#line 146 "mercury_compile_front_end.m"
        {
#line 146 "mercury_compile_front_end.m"
          hlds__make_tags__post_process_type_defns_3_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_40_40, &top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_45_45, &top_level__mercury_compile_front_end__PostTypeSpecs_24);
        }
#line 147 "mercury_compile_front_end.m"
        {
#line 147 "mercury_compile_front_end.m"
          top_level__mercury_compile_front_end__PostTypeErrors_25 = parse_tree__error_util__contains_errors_2_f_0(top_level__mercury_compile_front_end__Globals_22, top_level__mercury_compile_front_end__PostTypeSpecs_24);
        }
#line 148 "mercury_compile_front_end.m"
        {
#line 148 "mercury_compile_front_end.m"
          mercury__bool__or_3_p_0(top_level__mercury_compile_front_end__PostTypeErrors_25, top_level__mercury_compile_front_end__STATE_VARIABLE_FoundError_0_29, &top_level__mercury_compile_front_end__STATE_VARIABLE_FoundError_46_46);
        }
#line 149 "mercury_compile_front_end.m"
        {
#line 149 "mercury_compile_front_end.m"
          hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_45_45, (MR_Integer) 3, (MR_String) "typedefn", top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_0_33, &top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_49_49);
        }
#line 151 "mercury_compile_front_end.m"
        {
#line 151 "mercury_compile_front_end.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_front_end__Verbose_23, (MR_String) "% Checking typeclasses...\n");
        }
#line 152 "mercury_compile_front_end.m"
        {
#line 152 "mercury_compile_front_end.m"
          check_hlds__check_typeclass__check_typeclasses_6_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_45_45, &top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_53_53, top_level__mercury_compile_front_end__QualInfo0_14, &top_level__mercury_compile_front_end__QualInfo_26, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &top_level__mercury_compile_front_end__TypeClassSpecs_27);
        }
#line 4807 "top_level.mercury_compile_front_end.c"
        top_level__mercury_compile_front_end__TypeCtorInfo_76_76 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0;
#line 153 "mercury_compile_front_end.m"
        {
#line 153 "mercury_compile_front_end.m"
          top_level__mercury_compile_front_end__V_56_56 = mercury__list__f_43_43_2_f_0(top_level__mercury_compile_front_end__TypeCtorInfo_76_76, top_level__mercury_compile_front_end__TypeClassSpecs_27, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_41_41);
        }
#line 153 "mercury_compile_front_end.m"
        {
#line 153 "mercury_compile_front_end.m"
          top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_55_55 = mercury__list__f_43_43_2_f_0(top_level__mercury_compile_front_end__TypeCtorInfo_76_76, top_level__mercury_compile_front_end__PostTypeSpecs_24, top_level__mercury_compile_front_end__V_56_56);
        }
#line 154 "mercury_compile_front_end.m"
        {
#line 154 "mercury_compile_front_end.m"
          hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_53_53, (MR_Integer) 5, (MR_String) "typeclass", top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_49_49, &top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_59_59);
        }
#line 155 "mercury_compile_front_end.m"
        {
#line 155 "mercury_compile_front_end.m"
          hlds__make_hlds__set_module_recomp_info_3_p_0(top_level__mercury_compile_front_end__QualInfo_26, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_53_53, &top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_61_61);
        }
#line 157 "mercury_compile_front_end.m"
        {
#line 157 "mercury_compile_front_end.m"
          top_level__mercury_compile_front_end__TypeClassErrors_28 = parse_tree__error_util__contains_errors_2_f_0(top_level__mercury_compile_front_end__Globals_22, top_level__mercury_compile_front_end__TypeClassSpecs_27);
        }
#line 163 "mercury_compile_front_end.m"
        if ((top_level__mercury_compile_front_end__TypeClassErrors_28 == (MR_Integer) 0))
#line 165 "mercury_compile_front_end.m"
          {
#line 165 "mercury_compile_front_end.m"
            top_level__mercury_compile_front_end__frontend_pass_after_typeclass_check_11_p_0(top_level__mercury_compile_front_end__FoundUndefModeError_16, top_level__mercury_compile_front_end__STATE_VARIABLE_FoundError_46_46, top_level__mercury_compile_front_end__STATE_VARIABLE_FoundError_30, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_61_61, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_32, top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_59_59, top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_34, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_55_55, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_36);
#line 165 "mercury_compile_front_end.m"
            return;
          }
#line 163 "mercury_compile_front_end.m"
        else
#line 159 "mercury_compile_front_end.m"
          {
#line 162 "mercury_compile_front_end.m"
            *top_level__mercury_compile_front_end__STATE_VARIABLE_FoundError_30 = (MR_Integer) 1;
#line 162 "mercury_compile_front_end.m"
            *top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_32 = top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_61_61;
#line 162 "mercury_compile_front_end.m"
            *top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_34 = top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_59_59;
#line 162 "mercury_compile_front_end.m"
            *top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_36 = top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_55_55;
#line 159 "mercury_compile_front_end.m"
          }
#line 141 "mercury_compile_front_end.m"
      }
#line 140 "mercury_compile_front_end.m"
    else
#line 132 "mercury_compile_front_end.m"
      {
#line 135 "mercury_compile_front_end.m"
        *top_level__mercury_compile_front_end__STATE_VARIABLE_FoundError_30 = (MR_Integer) 1;
#line 136 "mercury_compile_front_end.m"
        {
#line 136 "mercury_compile_front_end.m"
          hlds__hlds_error_util__maybe_write_out_errors_8_p_0(top_level__mercury_compile_front_end__Verbose_23, top_level__mercury_compile_front_end__Globals_22, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_31, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_32, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_35, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_36);
        }
#line 137 "mercury_compile_front_end.m"
        {
#line 137 "mercury_compile_front_end.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_front_end__Verbose_23, (MR_String) "% Program contains undefined type error(s).\n");
        }
#line 139 "mercury_compile_front_end.m"
        {
#line 139 "mercury_compile_front_end.m"
          mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
        }
#line 139 "mercury_compile_front_end.m"
        *top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_34 = top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_0_33;
#line 132 "mercury_compile_front_end.m"
      }
#line 126 "mercury_compile_front_end.m"
  }
#line 32 "mercury_compile_front_end.m"
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

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module top_level.mercury_compile_front_end. */
