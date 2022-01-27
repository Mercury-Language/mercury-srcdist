/*
** Automatically generated from `mercury_compile_front_end.m'
** by the Mercury compiler,
** version rotd-14.01.1-2014-05-28, configured for x86_64-apple-darwin13.1.0.
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
#include "check_hlds.common.mih"
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
#include "hlds.make_hlds.qual_info.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 181 "top_level.mercury_compile_front_end.c"
static const MR_FA_PseudoTypeInfo_Struct1 top_level__mercury_compile_front_end__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0;

#line 184 "top_level.mercury_compile_front_end.c"
static const MR_FA_TypeInfo_Struct1 top_level__mercury_compile_front_end__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0;

#line 187 "top_level.mercury_compile_front_end.c"
static const MR_VA_PseudoTypeInfo_Struct3 top_level__mercury_compile_front_end____vpti_tuple_3__plain_hlds__hlds_module__type_ctor_info_module_info_0__plain_check_hlds__modes__type_ctor_info_modes_safe_to_continue_0__plain_list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0;

#line 190 "top_level.mercury_compile_front_end.c"
static const MR_FA_PseudoTypeInfo_Struct2 top_level__mercury_compile_front_end__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_hlds__hlds_module__type_ctor_info_oisu_preds_0;

#line 193 "top_level.mercury_compile_front_end.c"
static const MR_EnumFunctorDesc top_level__mercury_compile_front_end__top_level__mercury_compile_front_end__enum_functor_desc_simplify_pass_0_0;

#line 196 "top_level.mercury_compile_front_end.c"
static const MR_EnumFunctorDesc top_level__mercury_compile_front_end__top_level__mercury_compile_front_end__enum_functor_desc_simplify_pass_0_1;

#line 199 "top_level.mercury_compile_front_end.c"
static const MR_EnumFunctorDesc top_level__mercury_compile_front_end__top_level__mercury_compile_front_end__enum_functor_desc_simplify_pass_0_2;

#line 202 "top_level.mercury_compile_front_end.c"
static const MR_EnumFunctorDesc top_level__mercury_compile_front_end__top_level__mercury_compile_front_end__enum_functor_desc_simplify_pass_0_3;

#line 205 "top_level.mercury_compile_front_end.c"
static const MR_EnumFunctorDesc top_level__mercury_compile_front_end__top_level__mercury_compile_front_end__enum_functor_desc_simplify_pass_0_4;

#line 208 "top_level.mercury_compile_front_end.c"
static const MR_EnumFunctorDesc top_level__mercury_compile_front_end__top_level__mercury_compile_front_end__enum_functor_desc_simplify_pass_0_5;

#line 211 "top_level.mercury_compile_front_end.c"
static const MR_EnumFunctorDescPtr top_level__mercury_compile_front_end__top_level__mercury_compile_front_end__enum_value_ordered_simplify_pass_0[6];

#line 214 "top_level.mercury_compile_front_end.c"
static const MR_EnumFunctorDescPtr top_level__mercury_compile_front_end__top_level__mercury_compile_front_end__enum_name_ordered_simplify_pass_0[6];

#line 217 "top_level.mercury_compile_front_end.c"
static const MR_Integer top_level__mercury_compile_front_end__top_level__mercury_compile_front_end__functor_number_map_simplify_pass_0[6];

#line 220 "top_level.mercury_compile_front_end.c"
static MR_bool MR_CALL 
top_level__mercury_compile_front_end____Unify____simplify_pass_0_0_10001(
#line 223 "top_level.mercury_compile_front_end.c"
  MR_Box top_level__mercury_compile_front_end__wrapper_arg_1,
#line 225 "top_level.mercury_compile_front_end.c"
  MR_Box top_level__mercury_compile_front_end__wrapper_arg_2);

#line 228 "top_level.mercury_compile_front_end.c"
static void MR_CALL 
top_level__mercury_compile_front_end____Compare____simplify_pass_0_0_10001(
#line 231 "top_level.mercury_compile_front_end.c"
  MR_Box * top_level__mercury_compile_front_end__wrapper_arg_1,
#line 233 "top_level.mercury_compile_front_end.c"
  MR_Box top_level__mercury_compile_front_end__wrapper_arg_2,
#line 235 "top_level.mercury_compile_front_end.c"
  MR_Box top_level__mercury_compile_front_end__wrapper_arg_3);

#line 1010 "mercury_compile_front_end.m"
static void MR_CALL 
top_level__mercury_compile_front_end__maybe_proc_statistics_9_p_0(
#line 1010 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__Verbose_10,
#line 1010 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__Stats_11,
#line 1010 "mercury_compile_front_end.m"
  MR_String top_level__mercury_compile_front_end__Msg_12,
#line 1010 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_22,
#line 1010 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_23,
#line 1010 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_24,
#line 1010 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_25);

#line 885 "mercury_compile_front_end.m"
static void MR_CALL 
top_level__mercury_compile_front_end__process_try_goals_9_p_0(
#line 885 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__Verbose_10,
#line 885 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__Stats_11,
#line 885 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_18,
#line 885 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_19,
#line 885 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__FoundError_13,
#line 885 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_20,
#line 885 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_21);

#line 875 "mercury_compile_front_end.m"
static MR_bool MR_CALL 
top_level__mercury_compile_front_end__type_ctor_is_defined_in_this_module_2_p_0(
#line 875 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__ModuleName_3,
#line 875 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__HeadVar__2_2);

#line 849 "mercury_compile_front_end.m"
static MR_bool MR_CALL 
top_level__mercury_compile_front_end__check_oisu_pragmas_9_p_0_1(
#line 849 "mercury_compile_front_end.m"
  MR_Box top_level__mercury_compile_front_end__closure_arg,
#line 849 "mercury_compile_front_end.m"
  MR_Box top_level__mercury_compile_front_end__wrapper_arg_1);

#line 841 "mercury_compile_front_end.m"
static void MR_CALL 
top_level__mercury_compile_front_end__check_oisu_pragmas_9_p_0(
#line 841 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__Verbose_10,
#line 841 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__Stats_11,
#line 841 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_24,
#line 841 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_25,
#line 841 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__FoundError_13,
#line 841 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_26,
#line 841 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_27);

#line 806 "mercury_compile_front_end.m"
static void MR_CALL 
top_level__mercury_compile_front_end__check_stratification_9_p_0(
#line 806 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__Verbose_10,
#line 806 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__Stats_11,
#line 806 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_20,
#line 806 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_21,
#line 806 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__FoundError_13,
#line 806 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_22,
#line 806 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_23);

#line 781 "mercury_compile_front_end.m"
static void MR_CALL 
top_level__mercury_compile_front_end__check_unique_modes_9_p_0(
#line 781 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__Verbose_10,
#line 781 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__Stats_11,
#line 781 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_18,
#line 781 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_19,
#line 781 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__FoundError_13,
#line 781 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_20,
#line 781 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_21);

#line 759 "mercury_compile_front_end.m"
static void MR_CALL 
top_level__mercury_compile_front_end__check_determinism_8_p_0(
#line 759 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__Verbose_9,
#line 759 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__Stats_10,
#line 759 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_17,
#line 759 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_18,
#line 759 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_19,
#line 759 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_20);

#line 740 "mercury_compile_front_end.m"
static void MR_CALL 
top_level__mercury_compile_front_end__detect_cse_6_p_0(
#line 740 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__Verbose_7,
#line 740 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__Stats_8,
#line 740 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_13,
#line 740 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_14);

#line 728 "mercury_compile_front_end.m"
static void MR_CALL 
top_level__mercury_compile_front_end__detect_switches_6_p_0(
#line 728 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__Verbose_7,
#line 728 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__Stats_8,
#line 728 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_11,
#line 728 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_12);

#line 678 "mercury_compile_front_end.m"
static void MR_CALL 
top_level__mercury_compile_front_end__modecheck_10_p_0_1(
#line 678 "mercury_compile_front_end.m"
  MR_Box top_level__mercury_compile_front_end__closure_arg,
#line 678 "mercury_compile_front_end.m"
  MR_Box top_level__mercury_compile_front_end__wrapper_arg_1,
#line 678 "mercury_compile_front_end.m"
  MR_Box * top_level__mercury_compile_front_end__wrapper_arg_2);

#line 664 "mercury_compile_front_end.m"
static void MR_CALL 
top_level__mercury_compile_front_end__modecheck_10_p_0(
#line 664 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__Verbose_11,
#line 664 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__Stats_12,
#line 664 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_23,
#line 664 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_24,
#line 664 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__FoundModeError_14,
#line 664 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__SafeToContinue_15,
#line 664 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_25,
#line 664 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_26);

#line 414 "top_level.mercury_compile_front_end.c"
static void MR_CALL 
top_level__mercury_compile_front_end__maybe_mode_constraints_6_p_0_1(
#line 417 "top_level.mercury_compile_front_end.c"
  MR_Box top_level__mercury_compile_front_end__closure_arg,
#line 419 "top_level.mercury_compile_front_end.c"
  MR_Box top_level__mercury_compile_front_end__wrapper_arg_1,
#line 421 "top_level.mercury_compile_front_end.c"
  MR_Box * top_level__mercury_compile_front_end__wrapper_arg_2,
#line 423 "top_level.mercury_compile_front_end.c"
  MR_Box top_level__mercury_compile_front_end__wrapper_arg_3,
#line 425 "top_level.mercury_compile_front_end.c"
  MR_Box * top_level__mercury_compile_front_end__wrapper_arg_4);

#line 646 "mercury_compile_front_end.m"
static void MR_CALL 
top_level__mercury_compile_front_end__maybe_mode_constraints_6_p_0(
#line 646 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__Verbose_7,
#line 646 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__Stats_8,
#line 646 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_13,
#line 646 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_14);

#line 623 "mercury_compile_front_end.m"
static void MR_CALL 
top_level__mercury_compile_front_end__maybe_unused_imports_8_p_0(
#line 623 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__Verbose_9,
#line 623 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__Stats_10,
#line 623 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_17,
#line 623 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_18,
#line 623 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_19,
#line 623 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_20);

#line 581 "mercury_compile_front_end.m"
static void MR_CALL 
top_level__mercury_compile_front_end__maybe_polymorphism_8_p_0(
#line 581 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__Verbose_9,
#line 581 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__Stats_10,
#line 581 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_17,
#line 581 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_18,
#line 581 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_19,
#line 581 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_20);

#line 565 "mercury_compile_front_end.m"
static void MR_CALL 
top_level__mercury_compile_front_end__subst_implementation_defined_literals_8_p_0(
#line 565 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__Verbose_9,
#line 565 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__Stats_10,
#line 565 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_15,
#line 565 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_16,
#line 565 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_17,
#line 565 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_18);

#line 541 "mercury_compile_front_end.m"
static void MR_CALL 
top_level__mercury_compile_front_end__puritycheck_8_p_0(
#line 541 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__Verbose_9,
#line 541 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__Stats_10,
#line 541 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_17,
#line 541 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_18,
#line 541 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_19,
#line 541 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_20);

#line 458 "mercury_compile_front_end.m"
static void MR_CALL 
top_level__mercury_compile_front_end__frontend_pass_by_phases_9_p_0(
#line 458 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_26,
#line 458 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_27,
#line 458 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__FoundError_11,
#line 458 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_0_28,
#line 458 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_29,
#line 458 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_30,
#line 458 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_31);

#line 357 "mercury_compile_front_end.m"
static void MR_CALL 
top_level__mercury_compile_front_end__maybe_write_optfile_9_p_0(
#line 357 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__MakeOptInt_10,
#line 357 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_36,
#line 357 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_37,
#line 357 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_0_38,
#line 357 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_39,
#line 357 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_40,
#line 357 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_41);

#line 167 "mercury_compile_front_end.m"
static void MR_CALL 
top_level__mercury_compile_front_end__frontend_pass_after_typeclass_check_11_p_0(
#line 167 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__FoundUndefModeError_12,
#line 167 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_FoundError_0_39,
#line 167 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_FoundError_40,
#line 167 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_41,
#line 167 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_42,
#line 167 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_0_43,
#line 167 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_44,
#line 167 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_45,
#line 167 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_46);

#line 990 "mercury_compile_front_end.m"
static void MR_CALL 
top_level__mercury_compile_front_end__maybe_simplify_10_p_0_1(
#line 990 "mercury_compile_front_end.m"
  MR_Box top_level__mercury_compile_front_end__closure_arg,
#line 990 "mercury_compile_front_end.m"
  MR_Box top_level__mercury_compile_front_end__wrapper_arg_1,
#line 990 "mercury_compile_front_end.m"
  MR_Box top_level__mercury_compile_front_end__wrapper_arg_2,
#line 990 "mercury_compile_front_end.m"
  MR_Box * top_level__mercury_compile_front_end__wrapper_arg_3,
#line 990 "mercury_compile_front_end.m"
  MR_Box top_level__mercury_compile_front_end__wrapper_arg_4,
#line 990 "mercury_compile_front_end.m"
  MR_Box * top_level__mercury_compile_front_end__wrapper_arg_5,
#line 990 "mercury_compile_front_end.m"
  MR_Box top_level__mercury_compile_front_end__wrapper_arg_6,
#line 990 "mercury_compile_front_end.m"
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
    ((MR_Box) (&check_hlds__simplify__check_hlds__simplify__type_ctor_info_simplifications_0)),
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



#line 699 "top_level.mercury_compile_front_end.c"
static const MR_FA_PseudoTypeInfo_Struct1 top_level__mercury_compile_front_end__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0
  }
};

#line 707 "top_level.mercury_compile_front_end.c"
static const MR_FA_TypeInfo_Struct1 top_level__mercury_compile_front_end__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0
  }
};

#line 715 "top_level.mercury_compile_front_end.c"
static const MR_VA_PseudoTypeInfo_Struct3 top_level__mercury_compile_front_end____vpti_tuple_3__plain_hlds__hlds_module__type_ctor_info_module_info_0__plain_check_hlds__modes__type_ctor_info_modes_safe_to_continue_0__plain_list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__builtin__builtin__type_ctor_info_tuple_0,
  (MR_Integer) 3,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0,
    (MR_PseudoTypeInfo) &check_hlds__modes__check_hlds__modes__type_ctor_info_modes_safe_to_continue_0,
    (MR_PseudoTypeInfo) &top_level__mercury_compile_front_end__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0
  }
};

#line 726 "top_level.mercury_compile_front_end.c"
static const MR_FA_PseudoTypeInfo_Struct2 top_level__mercury_compile_front_end__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_hlds__hlds_module__type_ctor_info_oisu_preds_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0,
    (MR_PseudoTypeInfo) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_oisu_preds_0
  }
};

#line 735 "top_level.mercury_compile_front_end.c"
static const MR_EnumFunctorDesc top_level__mercury_compile_front_end__top_level__mercury_compile_front_end__enum_functor_desc_simplify_pass_0_0 = {
  (MR_String) "simplify_pass_frontend",
  (MR_Integer) 0
};

#line 741 "top_level.mercury_compile_front_end.c"
static const MR_EnumFunctorDesc top_level__mercury_compile_front_end__top_level__mercury_compile_front_end__enum_functor_desc_simplify_pass_0_1 = {
  (MR_String) "simplify_pass_post_untuple",
  (MR_Integer) 1
};

#line 747 "top_level.mercury_compile_front_end.c"
static const MR_EnumFunctorDesc top_level__mercury_compile_front_end__top_level__mercury_compile_front_end__enum_functor_desc_simplify_pass_0_2 = {
  (MR_String) "simplify_pass_pre_prof_transforms",
  (MR_Integer) 2
};

#line 753 "top_level.mercury_compile_front_end.c"
static const MR_EnumFunctorDesc top_level__mercury_compile_front_end__top_level__mercury_compile_front_end__enum_functor_desc_simplify_pass_0_3 = {
  (MR_String) "simplify_pass_pre_implicit_parallelism",
  (MR_Integer) 3
};

#line 759 "top_level.mercury_compile_front_end.c"
static const MR_EnumFunctorDesc top_level__mercury_compile_front_end__top_level__mercury_compile_front_end__enum_functor_desc_simplify_pass_0_4 = {
  (MR_String) "simplify_pass_ml_backend",
  (MR_Integer) 4
};

#line 765 "top_level.mercury_compile_front_end.c"
static const MR_EnumFunctorDesc top_level__mercury_compile_front_end__top_level__mercury_compile_front_end__enum_functor_desc_simplify_pass_0_5 = {
  (MR_String) "simplify_pass_ll_backend",
  (MR_Integer) 5
};

#line 771 "top_level.mercury_compile_front_end.c"
static const MR_EnumFunctorDescPtr top_level__mercury_compile_front_end__top_level__mercury_compile_front_end__enum_value_ordered_simplify_pass_0[6] = {
  &top_level__mercury_compile_front_end__top_level__mercury_compile_front_end__enum_functor_desc_simplify_pass_0_0,
  &top_level__mercury_compile_front_end__top_level__mercury_compile_front_end__enum_functor_desc_simplify_pass_0_1,
  &top_level__mercury_compile_front_end__top_level__mercury_compile_front_end__enum_functor_desc_simplify_pass_0_2,
  &top_level__mercury_compile_front_end__top_level__mercury_compile_front_end__enum_functor_desc_simplify_pass_0_3,
  &top_level__mercury_compile_front_end__top_level__mercury_compile_front_end__enum_functor_desc_simplify_pass_0_4,
  &top_level__mercury_compile_front_end__top_level__mercury_compile_front_end__enum_functor_desc_simplify_pass_0_5
};

#line 781 "top_level.mercury_compile_front_end.c"
static const MR_EnumFunctorDescPtr top_level__mercury_compile_front_end__top_level__mercury_compile_front_end__enum_name_ordered_simplify_pass_0[6] = {
  &top_level__mercury_compile_front_end__top_level__mercury_compile_front_end__enum_functor_desc_simplify_pass_0_0,
  &top_level__mercury_compile_front_end__top_level__mercury_compile_front_end__enum_functor_desc_simplify_pass_0_5,
  &top_level__mercury_compile_front_end__top_level__mercury_compile_front_end__enum_functor_desc_simplify_pass_0_4,
  &top_level__mercury_compile_front_end__top_level__mercury_compile_front_end__enum_functor_desc_simplify_pass_0_1,
  &top_level__mercury_compile_front_end__top_level__mercury_compile_front_end__enum_functor_desc_simplify_pass_0_3,
  &top_level__mercury_compile_front_end__top_level__mercury_compile_front_end__enum_functor_desc_simplify_pass_0_2
};

#line 791 "top_level.mercury_compile_front_end.c"
static const MR_Integer top_level__mercury_compile_front_end__top_level__mercury_compile_front_end__functor_number_map_simplify_pass_0[6] = {
  (MR_Integer) 0,
  (MR_Integer) 3,
  (MR_Integer) 5,
  (MR_Integer) 4,
  (MR_Integer) 2,
  (MR_Integer) 1
};

#line 801 "top_level.mercury_compile_front_end.c"
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

#line 822 "top_level.mercury_compile_front_end.c"
static MR_bool MR_CALL 
top_level__mercury_compile_front_end____Unify____simplify_pass_0_0_10001(
#line 825 "top_level.mercury_compile_front_end.c"
  MR_Box top_level__mercury_compile_front_end__wrapper_arg_1,
#line 827 "top_level.mercury_compile_front_end.c"
  MR_Box top_level__mercury_compile_front_end__wrapper_arg_2)
#line 829 "top_level.mercury_compile_front_end.c"
{
#line 831 "top_level.mercury_compile_front_end.c"
  {
#line 833 "top_level.mercury_compile_front_end.c"
    MR_bool top_level__mercury_compile_front_end__succeeded;

#line 836 "top_level.mercury_compile_front_end.c"
    {
#line 838 "top_level.mercury_compile_front_end.c"
      top_level__mercury_compile_front_end__succeeded = top_level__mercury_compile_front_end____Unify____simplify_pass_0_0(((MR_Word) top_level__mercury_compile_front_end__wrapper_arg_1), ((MR_Word) top_level__mercury_compile_front_end__wrapper_arg_2));
    }
#line 841 "top_level.mercury_compile_front_end.c"
    return top_level__mercury_compile_front_end__succeeded;
#line 843 "top_level.mercury_compile_front_end.c"
  }
#line 845 "top_level.mercury_compile_front_end.c"
}

#line 848 "top_level.mercury_compile_front_end.c"
static void MR_CALL 
top_level__mercury_compile_front_end____Compare____simplify_pass_0_0_10001(
#line 851 "top_level.mercury_compile_front_end.c"
  MR_Box * top_level__mercury_compile_front_end__wrapper_arg_1,
#line 853 "top_level.mercury_compile_front_end.c"
  MR_Box top_level__mercury_compile_front_end__wrapper_arg_2,
#line 855 "top_level.mercury_compile_front_end.c"
  MR_Box top_level__mercury_compile_front_end__wrapper_arg_3)
#line 857 "top_level.mercury_compile_front_end.c"
{
#line 859 "top_level.mercury_compile_front_end.c"
  {
#line 861 "top_level.mercury_compile_front_end.c"
    MR_Word top_level__mercury_compile_front_end__conv0_HeadVar__1_1;

#line 864 "top_level.mercury_compile_front_end.c"
    {
#line 866 "top_level.mercury_compile_front_end.c"
      top_level__mercury_compile_front_end____Compare____simplify_pass_0_0(&top_level__mercury_compile_front_end__conv0_HeadVar__1_1, ((MR_Word) top_level__mercury_compile_front_end__wrapper_arg_2), ((MR_Word) top_level__mercury_compile_front_end__wrapper_arg_3));
    }
#line 869 "top_level.mercury_compile_front_end.c"
    *top_level__mercury_compile_front_end__wrapper_arg_1 = ((MR_Box) (top_level__mercury_compile_front_end__conv0_HeadVar__1_1));
#line 871 "top_level.mercury_compile_front_end.c"
  }
#line 873 "top_level.mercury_compile_front_end.c"
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
#line 917 "top_level.mercury_compile_front_end.c"
  {
#line 919 "top_level.mercury_compile_front_end.c"
    MR_bool top_level__mercury_compile_front_end__succeeded = (top_level__mercury_compile_front_end__HeadVar__2_1 == top_level__mercury_compile_front_end__HeadVar__2_2);

#line 922 "top_level.mercury_compile_front_end.c"
    return top_level__mercury_compile_front_end__succeeded;
#line 924 "top_level.mercury_compile_front_end.c"
  }
#line 41 "mercury_compile_front_end.m"
}

#line 1010 "mercury_compile_front_end.m"
static void MR_CALL 
top_level__mercury_compile_front_end__maybe_proc_statistics_9_p_0(
#line 1010 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__Verbose_10,
#line 1010 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__Stats_11,
#line 1010 "mercury_compile_front_end.m"
  MR_String top_level__mercury_compile_front_end__Msg_12,
#line 1010 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_22,
#line 1010 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_23,
#line 1010 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_24,
#line 1010 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_25)
#line 1010 "mercury_compile_front_end.m"
{
#line 1014 "mercury_compile_front_end.m"
  {
#line 1014 "mercury_compile_front_end.m"
    MR_bool top_level__mercury_compile_front_end__succeeded;
#line 1014 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__Globals_16;
#line 1014 "mercury_compile_front_end.m"
    MR_String top_level__mercury_compile_front_end__StatsFileName_17;

#line 1015 "mercury_compile_front_end.m"
    {
#line 1015 "mercury_compile_front_end.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_22, &top_level__mercury_compile_front_end__Globals_16);
    }
#line 1016 "mercury_compile_front_end.m"
    {
#line 1016 "mercury_compile_front_end.m"
      hlds__hlds_error_util__maybe_write_out_errors_8_p_0(top_level__mercury_compile_front_end__Verbose_10, top_level__mercury_compile_front_end__Globals_16, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_22, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_23, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_24, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_25);
    }
#line 1018 "mercury_compile_front_end.m"
    {
#line 1018 "mercury_compile_front_end.m"
      libs__globals__lookup_string_option_3_p_0(top_level__mercury_compile_front_end__Globals_16, (MR_Integer) 56, &top_level__mercury_compile_front_end__StatsFileName_17);
    }
#line 1019 "mercury_compile_front_end.m"
    top_level__mercury_compile_front_end__succeeded = (strcmp(top_level__mercury_compile_front_end__StatsFileName_17, (MR_String) "") == 0);
#line 1022 "mercury_compile_front_end.m"
    if (top_level__mercury_compile_front_end__succeeded)
#line 1019 "mercury_compile_front_end.m"
      {
#line 1019 "mercury_compile_front_end.m"
      }
#line 1022 "mercury_compile_front_end.m"
    else
#line 1023 "mercury_compile_front_end.m"
      {
#line 1023 "mercury_compile_front_end.m"
        MR_Word top_level__mercury_compile_front_end__StatsFileNameResult_18;

#line 1023 "mercury_compile_front_end.m"
        {
#line 1023 "mercury_compile_front_end.m"
          mercury__io__open_append_4_p_0(top_level__mercury_compile_front_end__StatsFileName_17, &top_level__mercury_compile_front_end__StatsFileNameResult_18);
        }
#line 1031 "mercury_compile_front_end.m"
        if (((MR_tag((MR_Word) top_level__mercury_compile_front_end__StatsFileNameResult_18)) == (MR_mktag((MR_Integer) 1))))
#line 1032 "mercury_compile_front_end.m"
          {
#line 1032 "mercury_compile_front_end.m"
            MR_Word top_level__mercury_compile_front_end__StatsFileError_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), top_level__mercury_compile_front_end__StatsFileNameResult_18, (MR_Integer) 0)));
#line 1032 "mercury_compile_front_end.m"
            MR_String top_level__mercury_compile_front_end__StatsFileErrorMsg_21;

#line 1033 "mercury_compile_front_end.m"
            {
#line 1033 "mercury_compile_front_end.m"
              mercury__io__error_message_2_p_0(top_level__mercury_compile_front_end__StatsFileError_20, &top_level__mercury_compile_front_end__StatsFileErrorMsg_21);
            }
#line 1034 "mercury_compile_front_end.m"
            {
#line 1034 "mercury_compile_front_end.m"
              libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_front_end__Verbose_10, (MR_String) "% Cannot write proc statistics: ");
            }
#line 1036 "mercury_compile_front_end.m"
            {
#line 1036 "mercury_compile_front_end.m"
              libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_front_end__Verbose_10, top_level__mercury_compile_front_end__StatsFileErrorMsg_21);
            }
#line 1037 "mercury_compile_front_end.m"
            {
#line 1037 "mercury_compile_front_end.m"
              libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_front_end__Verbose_10, (MR_String) "\n");
#line 1037 "mercury_compile_front_end.m"
              return;
            }
#line 1032 "mercury_compile_front_end.m"
          }
#line 1031 "mercury_compile_front_end.m"
        else
#line 1025 "mercury_compile_front_end.m"
          {
#line 1025 "mercury_compile_front_end.m"
            MR_Word top_level__mercury_compile_front_end__StatsFileStream_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_front_end__StatsFileNameResult_18, (MR_Integer) 0)));

#line 1026 "mercury_compile_front_end.m"
            {
#line 1026 "mercury_compile_front_end.m"
              libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_front_end__Verbose_10, (MR_String) "% Generating proc statistics...\n");
            }
#line 1028 "mercury_compile_front_end.m"
            {
#line 1028 "mercury_compile_front_end.m"
              hlds__hlds_statistics__write_proc_stats_for_module_5_p_0(top_level__mercury_compile_front_end__StatsFileStream_19, top_level__mercury_compile_front_end__Msg_12, *top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_23);
            }
#line 1029 "mercury_compile_front_end.m"
            {
#line 1029 "mercury_compile_front_end.m"
              libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_front_end__Verbose_10, (MR_String) "% done.\n");
            }
#line 1030 "mercury_compile_front_end.m"
            {
#line 1030 "mercury_compile_front_end.m"
              libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_front_end__Stats_11);
#line 1030 "mercury_compile_front_end.m"
              return;
            }
#line 1025 "mercury_compile_front_end.m"
          }
#line 1023 "mercury_compile_front_end.m"
      }
#line 1014 "mercury_compile_front_end.m"
  }
#line 1010 "mercury_compile_front_end.m"
}

#line 885 "mercury_compile_front_end.m"
static void MR_CALL 
top_level__mercury_compile_front_end__process_try_goals_9_p_0(
#line 885 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__Verbose_10,
#line 885 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__Stats_11,
#line 885 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_18,
#line 885 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_19,
#line 885 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__FoundError_13,
#line 885 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_20,
#line 885 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_21)
#line 885 "mercury_compile_front_end.m"
{
#line 889 "mercury_compile_front_end.m"
  {
#line 889 "mercury_compile_front_end.m"
    MR_bool top_level__mercury_compile_front_end__succeeded;
#line 889 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__Globals_16;
#line 889 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__TryExpandSpecs_17;
#line 889 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_24_24;
#line 889 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_25_25;
#line 889 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_29_29;
#line 889 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_31_31;

#line 890 "mercury_compile_front_end.m"
    {
#line 890 "mercury_compile_front_end.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_18, &top_level__mercury_compile_front_end__Globals_16);
    }
#line 891 "mercury_compile_front_end.m"
    {
#line 891 "mercury_compile_front_end.m"
      hlds__hlds_error_util__maybe_write_out_errors_8_p_0(top_level__mercury_compile_front_end__Verbose_10, top_level__mercury_compile_front_end__Globals_16, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_18, &top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_24_24, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_20, &top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_25_25);
    }
#line 892 "mercury_compile_front_end.m"
    {
#line 892 "mercury_compile_front_end.m"
      libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_front_end__Verbose_10, (MR_String) "% Transforming try goals...\n");
    }
#line 893 "mercury_compile_front_end.m"
    {
#line 893 "mercury_compile_front_end.m"
      check_hlds__try_expand__expand_try_goals_in_module_4_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_24_24, &top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_29_29, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &top_level__mercury_compile_front_end__TryExpandSpecs_17);
    }
#line 894 "mercury_compile_front_end.m"
    {
#line 894 "mercury_compile_front_end.m"
      top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_31_31 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, top_level__mercury_compile_front_end__TryExpandSpecs_17, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_25_25);
    }
#line 895 "mercury_compile_front_end.m"
    {
#line 895 "mercury_compile_front_end.m"
      *top_level__mercury_compile_front_end__FoundError_13 = parse_tree__error_util__contains_errors_2_f_0(top_level__mercury_compile_front_end__Globals_16, top_level__mercury_compile_front_end__TryExpandSpecs_17);
    }
#line 896 "mercury_compile_front_end.m"
    {
#line 896 "mercury_compile_front_end.m"
      hlds__hlds_error_util__maybe_write_out_errors_8_p_0(top_level__mercury_compile_front_end__Verbose_10, top_level__mercury_compile_front_end__Globals_16, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_29_29, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_19, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_31_31, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_21);
    }
#line 900 "mercury_compile_front_end.m"
    if ((*top_level__mercury_compile_front_end__FoundError_13 == (MR_Integer) 0))
#line 901 "mercury_compile_front_end.m"
      {
#line 902 "mercury_compile_front_end.m"
        {
#line 902 "mercury_compile_front_end.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_front_end__Verbose_10, (MR_String) "% done.\n");
        }
#line 901 "mercury_compile_front_end.m"
      }
#line 900 "mercury_compile_front_end.m"
    else
#line 898 "mercury_compile_front_end.m"
      {
#line 899 "mercury_compile_front_end.m"
        {
#line 899 "mercury_compile_front_end.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_front_end__Verbose_10, (MR_String) "% Program contains error(s).\n");
        }
#line 898 "mercury_compile_front_end.m"
      }
#line 904 "mercury_compile_front_end.m"
    {
#line 904 "mercury_compile_front_end.m"
      libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_front_end__Stats_11);
#line 904 "mercury_compile_front_end.m"
      return;
    }
#line 889 "mercury_compile_front_end.m"
  }
#line 885 "mercury_compile_front_end.m"
}

#line 875 "mercury_compile_front_end.m"
static MR_bool MR_CALL 
top_level__mercury_compile_front_end__type_ctor_is_defined_in_this_module_2_p_0(
#line 875 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__ModuleName_3,
#line 875 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__HeadVar__2_2)
#line 875 "mercury_compile_front_end.m"
{
#line 878 "mercury_compile_front_end.m"
  {
#line 878 "mercury_compile_front_end.m"
    MR_bool top_level__mercury_compile_front_end__succeeded;
#line 878 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__TypeCtor_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_front_end__HeadVar__2_2, (MR_Integer) 0)));
#line 878 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__TypeSymName_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_front_end__TypeCtor_4, (MR_Integer) 0)));
#line 878 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__TypeModuleName_8;
#line 878 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_front_end__HeadVar__2_2, (MR_Integer) 1)));
#line 879 "mercury_compile_front_end.m"
    MR_Integer top_level__mercury_compile_front_end___TypeArity_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_front_end__TypeCtor_4, (MR_Integer) 1)));
#line 880 "mercury_compile_front_end.m"
    MR_String top_level__mercury_compile_front_end___TypeName_9;

#line 880 "mercury_compile_front_end.m"
    top_level__mercury_compile_front_end__succeeded = ((MR_tag((MR_Word) top_level__mercury_compile_front_end__TypeSymName_6)) == (MR_mktag((MR_Integer) 1)));
#line 880 "mercury_compile_front_end.m"
    if (top_level__mercury_compile_front_end__succeeded)
#line 880 "mercury_compile_front_end.m"
      {
#line 880 "mercury_compile_front_end.m"
        top_level__mercury_compile_front_end__TypeModuleName_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), top_level__mercury_compile_front_end__TypeSymName_6, (MR_Integer) 0)));
#line 880 "mercury_compile_front_end.m"
        top_level__mercury_compile_front_end___TypeName_9 = ((MR_String) (MR_hl_field(MR_mktag(1), top_level__mercury_compile_front_end__TypeSymName_6, (MR_Integer) 1)));
#line 881 "mercury_compile_front_end.m"
        {
#line 881 "mercury_compile_front_end.m"
          return top_level__mercury_compile_front_end__succeeded = mdbcomp__prim_data____Unify____sym_name_0_0(top_level__mercury_compile_front_end__ModuleName_3, top_level__mercury_compile_front_end__TypeModuleName_8);
        }
#line 880 "mercury_compile_front_end.m"
      }
#line 878 "mercury_compile_front_end.m"
    return top_level__mercury_compile_front_end__succeeded;
#line 878 "mercury_compile_front_end.m"
  }
#line 875 "mercury_compile_front_end.m"
}

#line 849 "mercury_compile_front_end.m"
static MR_bool MR_CALL 
top_level__mercury_compile_front_end__check_oisu_pragmas_9_p_0_1(
#line 849 "mercury_compile_front_end.m"
  MR_Box top_level__mercury_compile_front_end__closure_arg,
#line 849 "mercury_compile_front_end.m"
  MR_Box top_level__mercury_compile_front_end__wrapper_arg_1)
#line 849 "mercury_compile_front_end.m"
{
#line 849 "mercury_compile_front_end.m"
  {
#line 849 "mercury_compile_front_end.m"
    MR_bool top_level__mercury_compile_front_end__succeeded;
#line 849 "mercury_compile_front_end.m"
    MR_Box top_level__mercury_compile_front_end__closure = top_level__mercury_compile_front_end__closure_arg;

#line 849 "mercury_compile_front_end.m"
    {
#line 849 "mercury_compile_front_end.m"
      return top_level__mercury_compile_front_end__succeeded = top_level__mercury_compile_front_end__type_ctor_is_defined_in_this_module_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_front_end__closure, (MR_Integer) 3))), ((MR_Word) top_level__mercury_compile_front_end__wrapper_arg_1));
    }
#line 849 "mercury_compile_front_end.m"
    return top_level__mercury_compile_front_end__succeeded;
#line 849 "mercury_compile_front_end.m"
  }
#line 849 "mercury_compile_front_end.m"
}

#line 841 "mercury_compile_front_end.m"
static void MR_CALL 
top_level__mercury_compile_front_end__check_oisu_pragmas_9_p_0(
#line 841 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__Verbose_10,
#line 841 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__Stats_11,
#line 841 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_24,
#line 841 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_25,
#line 841 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__FoundError_13,
#line 841 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_26,
#line 841 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_27)
#line 841 "mercury_compile_front_end.m"
{
#line 845 "mercury_compile_front_end.m"
  {
#line 845 "mercury_compile_front_end.m"
    MR_bool top_level__mercury_compile_front_end__succeeded;
#line 845 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__OISUMap_16;
#line 845 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__OISUPairs_17;
#line 845 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__ModuleName_18;
#line 845 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__ModuleOISUPairs_19;
#line 845 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__V_30_30;

#line 846 "mercury_compile_front_end.m"
    {
#line 846 "mercury_compile_front_end.m"
      hlds__hlds_module__module_info_get_oisu_map_2_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_24, &top_level__mercury_compile_front_end__OISUMap_16);
    }
#line 847 "mercury_compile_front_end.m"
    {
#line 847 "mercury_compile_front_end.m"
      mercury__map__to_assoc_list_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0, (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_oisu_preds_0, top_level__mercury_compile_front_end__OISUMap_16, &top_level__mercury_compile_front_end__OISUPairs_17);
    }
#line 848 "mercury_compile_front_end.m"
    {
#line 848 "mercury_compile_front_end.m"
      hlds__hlds_module__module_info_get_name_2_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_24, &top_level__mercury_compile_front_end__ModuleName_18);
    }
#line 849 "mercury_compile_front_end.m"
    {
#line 849 "mercury_compile_front_end.m"
      top_level__mercury_compile_front_end__V_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 849 "mercury_compile_front_end.m"
      MR_hl_field(MR_mktag(0), top_level__mercury_compile_front_end__V_30_30, 0) = ((MR_Box) (&top_level__mercury_compile_front_end_scalar_common_2[2]));
#line 849 "mercury_compile_front_end.m"
      MR_hl_field(MR_mktag(0), top_level__mercury_compile_front_end__V_30_30, 1) = ((MR_Box) (top_level__mercury_compile_front_end__check_oisu_pragmas_9_p_0_1));
#line 849 "mercury_compile_front_end.m"
      MR_hl_field(MR_mktag(0), top_level__mercury_compile_front_end__V_30_30, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 849 "mercury_compile_front_end.m"
      MR_hl_field(MR_mktag(0), top_level__mercury_compile_front_end__V_30_30, 3) = ((MR_Box) (top_level__mercury_compile_front_end__ModuleName_18));
#line 849 "mercury_compile_front_end.m"
    }
#line 849 "mercury_compile_front_end.m"
    {
#line 849 "mercury_compile_front_end.m"
      mercury__list__filter_3_p_0((MR_Word) &top_level__mercury_compile_front_end_scalar_common_3[0], top_level__mercury_compile_front_end__V_30_30, top_level__mercury_compile_front_end__OISUPairs_17, &top_level__mercury_compile_front_end__ModuleOISUPairs_19);
    }
#line 870 "mercury_compile_front_end.m"
    if ((top_level__mercury_compile_front_end__ModuleOISUPairs_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 871 "mercury_compile_front_end.m"
      {
#line 872 "mercury_compile_front_end.m"
        *top_level__mercury_compile_front_end__FoundError_13 = (MR_Integer) 0;
#line 872 "mercury_compile_front_end.m"
        *top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_25 = top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_24;
#line 872 "mercury_compile_front_end.m"
        *top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_27 = top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_26;
#line 871 "mercury_compile_front_end.m"
      }
#line 870 "mercury_compile_front_end.m"
    else
#line 852 "mercury_compile_front_end.m"
      {
#line 852 "mercury_compile_front_end.m"
        MR_Word top_level__mercury_compile_front_end__Globals_22;
#line 852 "mercury_compile_front_end.m"
        MR_Word top_level__mercury_compile_front_end__OISUSpecs_23;
#line 852 "mercury_compile_front_end.m"
        MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_31_31;
#line 852 "mercury_compile_front_end.m"
        MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_32_32;
#line 852 "mercury_compile_front_end.m"
        MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_36_36;
#line 852 "mercury_compile_front_end.m"
        MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_37_37;

#line 853 "mercury_compile_front_end.m"
        {
#line 853 "mercury_compile_front_end.m"
          hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_24, &top_level__mercury_compile_front_end__Globals_22);
        }
#line 854 "mercury_compile_front_end.m"
        {
#line 854 "mercury_compile_front_end.m"
          hlds__hlds_error_util__maybe_write_out_errors_8_p_0(top_level__mercury_compile_front_end__Verbose_10, top_level__mercury_compile_front_end__Globals_22, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_24, &top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_31_31, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_26, &top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_32_32);
        }
#line 855 "mercury_compile_front_end.m"
        {
#line 855 "mercury_compile_front_end.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_front_end__Verbose_10, (MR_String) "% Checking oisu pragmas...\n");
        }
#line 857 "mercury_compile_front_end.m"
        {
#line 857 "mercury_compile_front_end.m"
          check_hlds__oisu_check__check_oisu_pragmas_for_module_4_p_0(top_level__mercury_compile_front_end__ModuleOISUPairs_19, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_31_31, &top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_36_36, &top_level__mercury_compile_front_end__OISUSpecs_23);
        }
#line 858 "mercury_compile_front_end.m"
        {
#line 858 "mercury_compile_front_end.m"
          top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_37_37 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, top_level__mercury_compile_front_end__OISUSpecs_23, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_32_32);
        }
#line 859 "mercury_compile_front_end.m"
        {
#line 859 "mercury_compile_front_end.m"
          *top_level__mercury_compile_front_end__FoundError_13 = parse_tree__error_util__contains_errors_2_f_0(top_level__mercury_compile_front_end__Globals_22, top_level__mercury_compile_front_end__OISUSpecs_23);
        }
#line 860 "mercury_compile_front_end.m"
        {
#line 860 "mercury_compile_front_end.m"
          hlds__hlds_error_util__maybe_write_out_errors_8_p_0(top_level__mercury_compile_front_end__Verbose_10, top_level__mercury_compile_front_end__Globals_22, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_36_36, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_25, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_37_37, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_27);
        }
#line 865 "mercury_compile_front_end.m"
        if ((*top_level__mercury_compile_front_end__FoundError_13 == (MR_Integer) 0))
#line 866 "mercury_compile_front_end.m"
          {
#line 867 "mercury_compile_front_end.m"
            {
#line 867 "mercury_compile_front_end.m"
              libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_front_end__Verbose_10, (MR_String) "% done.\n");
            }
#line 866 "mercury_compile_front_end.m"
          }
#line 865 "mercury_compile_front_end.m"
        else
#line 862 "mercury_compile_front_end.m"
          {
#line 863 "mercury_compile_front_end.m"
            {
#line 863 "mercury_compile_front_end.m"
              libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_front_end__Verbose_10, (MR_String) "% Program contains oisu pragma error(s).\n");
            }
#line 862 "mercury_compile_front_end.m"
          }
#line 869 "mercury_compile_front_end.m"
        {
#line 869 "mercury_compile_front_end.m"
          libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_front_end__Stats_11);
#line 869 "mercury_compile_front_end.m"
          return;
        }
#line 852 "mercury_compile_front_end.m"
      }
#line 845 "mercury_compile_front_end.m"
  }
#line 841 "mercury_compile_front_end.m"
}

#line 806 "mercury_compile_front_end.m"
static void MR_CALL 
top_level__mercury_compile_front_end__check_stratification_9_p_0(
#line 806 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__Verbose_10,
#line 806 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__Stats_11,
#line 806 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_20,
#line 806 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_21,
#line 806 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__FoundError_13,
#line 806 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_22,
#line 806 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_23)
#line 806 "mercury_compile_front_end.m"
{
#line 810 "mercury_compile_front_end.m"
  {
#line 810 "mercury_compile_front_end.m"
    MR_bool top_level__mercury_compile_front_end__succeeded;
#line 810 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__StratifiedPreds_16;
#line 810 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__Globals_17;
#line 810 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__Warn_18;

#line 811 "mercury_compile_front_end.m"
    {
#line 811 "mercury_compile_front_end.m"
      hlds__hlds_module__module_info_get_stratified_preds_2_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_20, &top_level__mercury_compile_front_end__StratifiedPreds_16);
    }
#line 812 "mercury_compile_front_end.m"
    {
#line 812 "mercury_compile_front_end.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_20, &top_level__mercury_compile_front_end__Globals_17);
    }
#line 813 "mercury_compile_front_end.m"
    {
#line 813 "mercury_compile_front_end.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_front_end__Globals_17, (MR_Integer) 17, &top_level__mercury_compile_front_end__Warn_18);
    }
#line 815 "mercury_compile_front_end.m"
    {
#line 815 "mercury_compile_front_end.m"
      top_level__mercury_compile_front_end__succeeded = mercury__set__empty_1_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, top_level__mercury_compile_front_end__StratifiedPreds_16);
    }
#line 815 "mercury_compile_front_end.m"
    top_level__mercury_compile_front_end__succeeded = !(top_level__mercury_compile_front_end__succeeded);
#line 816 "mercury_compile_front_end.m"
    if (!(top_level__mercury_compile_front_end__succeeded))
#line 816 "mercury_compile_front_end.m"
      top_level__mercury_compile_front_end__succeeded = (top_level__mercury_compile_front_end__Warn_18 == (MR_Integer) 1);
#line 835 "mercury_compile_front_end.m"
    if (top_level__mercury_compile_front_end__succeeded)
#line 819 "mercury_compile_front_end.m"
      {
#line 819 "mercury_compile_front_end.m"
        MR_Word top_level__mercury_compile_front_end__StratifySpecs_19;
#line 819 "mercury_compile_front_end.m"
        MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_27_27;
#line 819 "mercury_compile_front_end.m"
        MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_28_28;
#line 819 "mercury_compile_front_end.m"
        MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_32_32;
#line 819 "mercury_compile_front_end.m"
        MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_33_33;

#line 819 "mercury_compile_front_end.m"
        {
#line 819 "mercury_compile_front_end.m"
          hlds__hlds_error_util__maybe_write_out_errors_8_p_0(top_level__mercury_compile_front_end__Verbose_10, top_level__mercury_compile_front_end__Globals_17, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_20, &top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_27_27, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_22, &top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_28_28);
        }
#line 820 "mercury_compile_front_end.m"
        {
#line 820 "mercury_compile_front_end.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_front_end__Verbose_10, (MR_String) "% Checking stratification...\n");
        }
#line 822 "mercury_compile_front_end.m"
        {
#line 822 "mercury_compile_front_end.m"
          check_hlds__stratify__check_module_for_stratification_3_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_27_27, &top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_32_32, &top_level__mercury_compile_front_end__StratifySpecs_19);
        }
#line 823 "mercury_compile_front_end.m"
        {
#line 823 "mercury_compile_front_end.m"
          top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_33_33 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, top_level__mercury_compile_front_end__StratifySpecs_19, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_28_28);
        }
#line 824 "mercury_compile_front_end.m"
        {
#line 824 "mercury_compile_front_end.m"
          *top_level__mercury_compile_front_end__FoundError_13 = parse_tree__error_util__contains_errors_2_f_0(top_level__mercury_compile_front_end__Globals_17, top_level__mercury_compile_front_end__StratifySpecs_19);
        }
#line 825 "mercury_compile_front_end.m"
        {
#line 825 "mercury_compile_front_end.m"
          hlds__hlds_error_util__maybe_write_out_errors_8_p_0(top_level__mercury_compile_front_end__Verbose_10, top_level__mercury_compile_front_end__Globals_17, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_32_32, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_21, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_33_33, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_23);
        }
#line 830 "mercury_compile_front_end.m"
        if ((*top_level__mercury_compile_front_end__FoundError_13 == (MR_Integer) 0))
#line 831 "mercury_compile_front_end.m"
          {
#line 832 "mercury_compile_front_end.m"
            {
#line 832 "mercury_compile_front_end.m"
              libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_front_end__Verbose_10, (MR_String) "% done.\n");
            }
#line 831 "mercury_compile_front_end.m"
          }
#line 830 "mercury_compile_front_end.m"
        else
#line 827 "mercury_compile_front_end.m"
          {
#line 828 "mercury_compile_front_end.m"
            {
#line 828 "mercury_compile_front_end.m"
              libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_front_end__Verbose_10, (MR_String) "% Program contains stratification error(s).\n");
            }
#line 827 "mercury_compile_front_end.m"
          }
#line 834 "mercury_compile_front_end.m"
        {
#line 834 "mercury_compile_front_end.m"
          libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_front_end__Stats_11);
#line 834 "mercury_compile_front_end.m"
          return;
        }
#line 819 "mercury_compile_front_end.m"
      }
#line 835 "mercury_compile_front_end.m"
    else
#line 836 "mercury_compile_front_end.m"
      {
#line 836 "mercury_compile_front_end.m"
        *top_level__mercury_compile_front_end__FoundError_13 = (MR_Integer) 0;
#line 836 "mercury_compile_front_end.m"
        *top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_23 = top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_22;
#line 836 "mercury_compile_front_end.m"
        *top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_21 = top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_20;
#line 836 "mercury_compile_front_end.m"
      }
#line 810 "mercury_compile_front_end.m"
  }
#line 806 "mercury_compile_front_end.m"
}

#line 781 "mercury_compile_front_end.m"
static void MR_CALL 
top_level__mercury_compile_front_end__check_unique_modes_9_p_0(
#line 781 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__Verbose_10,
#line 781 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__Stats_11,
#line 781 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_18,
#line 781 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_19,
#line 781 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__FoundError_13,
#line 781 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_20,
#line 781 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_21)
#line 781 "mercury_compile_front_end.m"
{
#line 785 "mercury_compile_front_end.m"
  {
#line 785 "mercury_compile_front_end.m"
    MR_bool top_level__mercury_compile_front_end__succeeded;
#line 785 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__Globals_16;
#line 785 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__UniqueSpecs_17;
#line 785 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_24_24;
#line 785 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_25_25;
#line 785 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_29_29;
#line 785 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_30_30;

#line 786 "mercury_compile_front_end.m"
    {
#line 786 "mercury_compile_front_end.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_18, &top_level__mercury_compile_front_end__Globals_16);
    }
#line 787 "mercury_compile_front_end.m"
    {
#line 787 "mercury_compile_front_end.m"
      hlds__hlds_error_util__maybe_write_out_errors_8_p_0(top_level__mercury_compile_front_end__Verbose_10, top_level__mercury_compile_front_end__Globals_16, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_18, &top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_24_24, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_20, &top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_25_25);
    }
#line 788 "mercury_compile_front_end.m"
    {
#line 788 "mercury_compile_front_end.m"
      libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_front_end__Verbose_10, (MR_String) "% Checking for backtracking over unique modes...\n");
    }
#line 790 "mercury_compile_front_end.m"
    {
#line 790 "mercury_compile_front_end.m"
      check_hlds__unique_modes__unique_modes_check_module_3_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_24_24, &top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_29_29, &top_level__mercury_compile_front_end__UniqueSpecs_17);
    }
#line 791 "mercury_compile_front_end.m"
    {
#line 791 "mercury_compile_front_end.m"
      top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_30_30 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, top_level__mercury_compile_front_end__UniqueSpecs_17, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_25_25);
    }
#line 792 "mercury_compile_front_end.m"
    {
#line 792 "mercury_compile_front_end.m"
      *top_level__mercury_compile_front_end__FoundError_13 = parse_tree__error_util__contains_errors_2_f_0(top_level__mercury_compile_front_end__Globals_16, top_level__mercury_compile_front_end__UniqueSpecs_17);
    }
#line 793 "mercury_compile_front_end.m"
    {
#line 793 "mercury_compile_front_end.m"
      hlds__hlds_error_util__maybe_write_out_errors_8_p_0(top_level__mercury_compile_front_end__Verbose_10, top_level__mercury_compile_front_end__Globals_16, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_29_29, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_19, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_30_30, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_21);
    }
#line 798 "mercury_compile_front_end.m"
    if ((*top_level__mercury_compile_front_end__FoundError_13 == (MR_Integer) 0))
#line 799 "mercury_compile_front_end.m"
      {
#line 800 "mercury_compile_front_end.m"
        {
#line 800 "mercury_compile_front_end.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_front_end__Verbose_10, (MR_String) "% Program is unique-mode-correct.\n");
        }
#line 799 "mercury_compile_front_end.m"
      }
#line 798 "mercury_compile_front_end.m"
    else
#line 795 "mercury_compile_front_end.m"
      {
#line 796 "mercury_compile_front_end.m"
        {
#line 796 "mercury_compile_front_end.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_front_end__Verbose_10, (MR_String) "% Program contains unique mode error(s).\n");
        }
#line 795 "mercury_compile_front_end.m"
      }
#line 802 "mercury_compile_front_end.m"
    {
#line 802 "mercury_compile_front_end.m"
      libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_front_end__Stats_11);
#line 802 "mercury_compile_front_end.m"
      return;
    }
#line 785 "mercury_compile_front_end.m"
  }
#line 781 "mercury_compile_front_end.m"
}

#line 759 "mercury_compile_front_end.m"
static void MR_CALL 
top_level__mercury_compile_front_end__check_determinism_8_p_0(
#line 759 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__Verbose_9,
#line 759 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__Stats_10,
#line 759 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_17,
#line 759 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_18,
#line 759 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_19,
#line 759 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_20)
#line 759 "mercury_compile_front_end.m"
{
#line 763 "mercury_compile_front_end.m"
  {
#line 763 "mercury_compile_front_end.m"
    MR_bool top_level__mercury_compile_front_end__succeeded;
#line 763 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__DetismSpecs_14;
#line 763 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__Globals_15;
#line 763 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__FoundError_16;
#line 763 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_23_23;
#line 763 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_24_24;

#line 764 "mercury_compile_front_end.m"
    {
#line 764 "mercury_compile_front_end.m"
      check_hlds__det_analysis__determinism_pass_3_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_17, &top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_23_23, &top_level__mercury_compile_front_end__DetismSpecs_14);
    }
#line 765 "mercury_compile_front_end.m"
    {
#line 765 "mercury_compile_front_end.m"
      top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_24_24 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, top_level__mercury_compile_front_end__DetismSpecs_14, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_19);
    }
#line 766 "mercury_compile_front_end.m"
    {
#line 766 "mercury_compile_front_end.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_23_23, &top_level__mercury_compile_front_end__Globals_15);
    }
#line 767 "mercury_compile_front_end.m"
    {
#line 767 "mercury_compile_front_end.m"
      top_level__mercury_compile_front_end__FoundError_16 = parse_tree__error_util__contains_errors_2_f_0(top_level__mercury_compile_front_end__Globals_15, top_level__mercury_compile_front_end__DetismSpecs_14);
    }
#line 768 "mercury_compile_front_end.m"
    {
#line 768 "mercury_compile_front_end.m"
      hlds__hlds_error_util__maybe_write_out_errors_8_p_0(top_level__mercury_compile_front_end__Verbose_9, top_level__mercury_compile_front_end__Globals_15, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_23_23, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_18, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_24_24, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_20);
    }
#line 773 "mercury_compile_front_end.m"
    if ((top_level__mercury_compile_front_end__FoundError_16 == (MR_Integer) 0))
#line 774 "mercury_compile_front_end.m"
      {
#line 775 "mercury_compile_front_end.m"
        {
#line 775 "mercury_compile_front_end.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_front_end__Verbose_9, (MR_String) "% Program is determinism-correct.\n");
        }
#line 774 "mercury_compile_front_end.m"
      }
#line 773 "mercury_compile_front_end.m"
    else
#line 770 "mercury_compile_front_end.m"
      {
#line 771 "mercury_compile_front_end.m"
        {
#line 771 "mercury_compile_front_end.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_front_end__Verbose_9, (MR_String) "% Program contains determinism error(s).\n");
        }
#line 770 "mercury_compile_front_end.m"
      }
#line 777 "mercury_compile_front_end.m"
    {
#line 777 "mercury_compile_front_end.m"
      libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_front_end__Stats_10);
#line 777 "mercury_compile_front_end.m"
      return;
    }
#line 763 "mercury_compile_front_end.m"
  }
#line 759 "mercury_compile_front_end.m"
}

#line 740 "mercury_compile_front_end.m"
static void MR_CALL 
top_level__mercury_compile_front_end__detect_cse_6_p_0(
#line 740 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__Verbose_7,
#line 740 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__Stats_8,
#line 740 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_13,
#line 740 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_14)
#line 740 "mercury_compile_front_end.m"
{
#line 743 "mercury_compile_front_end.m"
  {
#line 743 "mercury_compile_front_end.m"
    MR_bool top_level__mercury_compile_front_end__succeeded;
#line 743 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__Globals_11;
#line 743 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__CommonGoal_12;

#line 744 "mercury_compile_front_end.m"
    {
#line 744 "mercury_compile_front_end.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_13, &top_level__mercury_compile_front_end__Globals_11);
    }
#line 745 "mercury_compile_front_end.m"
    {
#line 745 "mercury_compile_front_end.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_front_end__Globals_11, (MR_Integer) 347, &top_level__mercury_compile_front_end__CommonGoal_12);
    }
#line 753 "mercury_compile_front_end.m"
    if ((top_level__mercury_compile_front_end__CommonGoal_12 == (MR_Integer) 0))
#line 754 "mercury_compile_front_end.m"
      *top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_14 = top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_13;
#line 753 "mercury_compile_front_end.m"
    else
#line 747 "mercury_compile_front_end.m"
      {
#line 748 "mercury_compile_front_end.m"
        {
#line 748 "mercury_compile_front_end.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_front_end__Verbose_7, (MR_String) "% Detecting common deconstructions...\n");
        }
#line 750 "mercury_compile_front_end.m"
        {
#line 750 "mercury_compile_front_end.m"
          check_hlds__cse_detection__detect_cse_in_module_2_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_13, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_14);
        }
#line 751 "mercury_compile_front_end.m"
        {
#line 751 "mercury_compile_front_end.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_front_end__Verbose_7, (MR_String) "% done.\n");
        }
#line 752 "mercury_compile_front_end.m"
        {
#line 752 "mercury_compile_front_end.m"
          libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_front_end__Stats_8);
#line 752 "mercury_compile_front_end.m"
          return;
        }
#line 747 "mercury_compile_front_end.m"
      }
#line 743 "mercury_compile_front_end.m"
  }
#line 740 "mercury_compile_front_end.m"
}

#line 728 "mercury_compile_front_end.m"
static void MR_CALL 
top_level__mercury_compile_front_end__detect_switches_6_p_0(
#line 728 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__Verbose_7,
#line 728 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__Stats_8,
#line 728 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_11,
#line 728 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_12)
#line 728 "mercury_compile_front_end.m"
{
#line 731 "mercury_compile_front_end.m"
  {
#line 731 "mercury_compile_front_end.m"
    MR_bool top_level__mercury_compile_front_end__succeeded;

#line 732 "mercury_compile_front_end.m"
    {
#line 732 "mercury_compile_front_end.m"
      libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_front_end__Verbose_7, (MR_String) "% Detecting switches...\n");
    }
#line 733 "mercury_compile_front_end.m"
    {
#line 733 "mercury_compile_front_end.m"
      libs__file_util__maybe_flush_output_3_p_0(top_level__mercury_compile_front_end__Verbose_7);
    }
#line 734 "mercury_compile_front_end.m"
    {
#line 734 "mercury_compile_front_end.m"
      check_hlds__switch_detection__detect_switches_in_module_2_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_11, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_12);
    }
#line 735 "mercury_compile_front_end.m"
    {
#line 735 "mercury_compile_front_end.m"
      libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_front_end__Verbose_7, (MR_String) "% done.\n");
    }
#line 736 "mercury_compile_front_end.m"
    {
#line 736 "mercury_compile_front_end.m"
      libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_front_end__Stats_8);
#line 736 "mercury_compile_front_end.m"
      return;
    }
#line 731 "mercury_compile_front_end.m"
  }
#line 728 "mercury_compile_front_end.m"
}

#line 678 "mercury_compile_front_end.m"
static void MR_CALL 
top_level__mercury_compile_front_end__modecheck_10_p_0_1(
#line 678 "mercury_compile_front_end.m"
  MR_Box top_level__mercury_compile_front_end__closure_arg,
#line 678 "mercury_compile_front_end.m"
  MR_Box top_level__mercury_compile_front_end__wrapper_arg_1,
#line 678 "mercury_compile_front_end.m"
  MR_Box * top_level__mercury_compile_front_end__wrapper_arg_2)
#line 678 "mercury_compile_front_end.m"
{
#line 678 "mercury_compile_front_end.m"
  {
#line 678 "mercury_compile_front_end.m"
    MR_Box top_level__mercury_compile_front_end__closure = top_level__mercury_compile_front_end__closure_arg;
#line 678 "mercury_compile_front_end.m"
    MR_Tuple top_level__mercury_compile_front_end__conv0_HeadVar__2_2;

#line 678 "mercury_compile_front_end.m"
    {
#line 678 "mercury_compile_front_end.m"
      check_hlds__modes__modecheck_module_2_p_0(((MR_Word) top_level__mercury_compile_front_end__wrapper_arg_1), &top_level__mercury_compile_front_end__conv0_HeadVar__2_2);
    }
#line 678 "mercury_compile_front_end.m"
    *top_level__mercury_compile_front_end__wrapper_arg_2 = ((MR_Box) (top_level__mercury_compile_front_end__conv0_HeadVar__2_2));
#line 678 "mercury_compile_front_end.m"
  }
#line 678 "mercury_compile_front_end.m"
}

#line 664 "mercury_compile_front_end.m"
static void MR_CALL 
top_level__mercury_compile_front_end__modecheck_10_p_0(
#line 664 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__Verbose_11,
#line 664 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__Stats_12,
#line 664 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_23,
#line 664 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_24,
#line 664 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__FoundModeError_14,
#line 664 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__SafeToContinue_15,
#line 664 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_25,
#line 664 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_26)
#line 664 "mercury_compile_front_end.m"
{
#line 669 "mercury_compile_front_end.m"
  {
#line 669 "mercury_compile_front_end.m"
    MR_bool top_level__mercury_compile_front_end__succeeded;
#line 669 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__Globals_18;
#line 669 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__BenchmarkModes_19;
#line 669 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__ModeSpecs_21;
#line 669 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_29_29;
#line 669 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_30_30;
#line 669 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_38_38;
#line 669 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_46_46;

#line 670 "mercury_compile_front_end.m"
    {
#line 670 "mercury_compile_front_end.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_23, &top_level__mercury_compile_front_end__Globals_18);
    }
#line 671 "mercury_compile_front_end.m"
    {
#line 671 "mercury_compile_front_end.m"
      hlds__hlds_error_util__maybe_write_out_errors_8_p_0(top_level__mercury_compile_front_end__Verbose_11, top_level__mercury_compile_front_end__Globals_18, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_23, &top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_29_29, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_25, &top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_30_30);
    }
#line 672 "mercury_compile_front_end.m"
    {
#line 672 "mercury_compile_front_end.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_front_end__Globals_18, (MR_Integer) 153, &top_level__mercury_compile_front_end__BenchmarkModes_19);
    }
#line 683 "mercury_compile_front_end.m"
    if ((top_level__mercury_compile_front_end__BenchmarkModes_19 == (MR_Integer) 0))
#line 684 "mercury_compile_front_end.m"
      {
#line 684 "mercury_compile_front_end.m"
        MR_Tuple top_level__mercury_compile_front_end__V_33_33;

#line 685 "mercury_compile_front_end.m"
        {
#line 685 "mercury_compile_front_end.m"
          check_hlds__modes__modecheck_module_2_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_29_29, &top_level__mercury_compile_front_end__V_33_33);
        }
#line 685 "mercury_compile_front_end.m"
        top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_front_end__V_33_33, (MR_Integer) 0)));
#line 685 "mercury_compile_front_end.m"
        *top_level__mercury_compile_front_end__SafeToContinue_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_front_end__V_33_33, (MR_Integer) 1)));
#line 685 "mercury_compile_front_end.m"
        top_level__mercury_compile_front_end__ModeSpecs_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_front_end__V_33_33, (MR_Integer) 2)));
#line 684 "mercury_compile_front_end.m"
      }
#line 683 "mercury_compile_front_end.m"
    else
#line 674 "mercury_compile_front_end.m"
      {
#line 674 "mercury_compile_front_end.m"
        MR_Integer top_level__mercury_compile_front_end__Repeats_20;
#line 674 "mercury_compile_front_end.m"
        MR_Integer top_level__mercury_compile_front_end__Time_22;
#line 674 "mercury_compile_front_end.m"
        MR_String top_level__mercury_compile_front_end__V_64_64;
#line 674 "mercury_compile_front_end.m"
        MR_String top_level__mercury_compile_front_end__V_65_65;
#line 674 "mercury_compile_front_end.m"
        MR_String top_level__mercury_compile_front_end__V_67_67;
#line 674 "mercury_compile_front_end.m"
        MR_String top_level__mercury_compile_front_end__V_68_68;
#line 674 "mercury_compile_front_end.m"
        MR_String top_level__mercury_compile_front_end__V_69_69;
#line 674 "mercury_compile_front_end.m"
        MR_String top_level__mercury_compile_front_end__V_71_71;
#line 678 "mercury_compile_front_end.m"
        MR_Tuple top_level__mercury_compile_front_end__V_37_37;
#line 678 "mercury_compile_front_end.m"
        MR_Box top_level__mercury_compile_front_end__conv1_V_37_37;

#line 675 "mercury_compile_front_end.m"
        {
#line 675 "mercury_compile_front_end.m"
          libs__globals__lookup_int_option_3_p_0(top_level__mercury_compile_front_end__Globals_18, (MR_Integer) 154, &top_level__mercury_compile_front_end__Repeats_20);
        }
#line 678 "mercury_compile_front_end.m"
        {
#line 678 "mercury_compile_front_end.m"
          mercury__benchmarking__benchmark_det_5_p_0((MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, (MR_Word) &top_level__mercury_compile_front_end_scalar_common_2[0], (MR_Word) &top_level__mercury_compile_front_end_scalar_common_3[2], ((MR_Box) (top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_29_29)), &top_level__mercury_compile_front_end__conv1_V_37_37, top_level__mercury_compile_front_end__Repeats_20, &top_level__mercury_compile_front_end__Time_22);
        }
#line 678 "mercury_compile_front_end.m"
        top_level__mercury_compile_front_end__V_37_37 = ((MR_Tuple) top_level__mercury_compile_front_end__conv1_V_37_37);
#line 678 "mercury_compile_front_end.m"
        top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_front_end__V_37_37, (MR_Integer) 0)));
#line 678 "mercury_compile_front_end.m"
        *top_level__mercury_compile_front_end__SafeToContinue_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_front_end__V_37_37, (MR_Integer) 1)));
#line 678 "mercury_compile_front_end.m"
        top_level__mercury_compile_front_end__ModeSpecs_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_front_end__V_37_37, (MR_Integer) 2)));
#line 2026 "top_level.mercury_compile_front_end.c"
        {
#line 2028 "top_level.mercury_compile_front_end.c"
          top_level__mercury_compile_front_end__V_64_64 = mercury__string__int_to_string_1_f_0(top_level__mercury_compile_front_end__Time_22);
        }
#line 2031 "top_level.mercury_compile_front_end.c"
        {
#line 2033 "top_level.mercury_compile_front_end.c"
          top_level__mercury_compile_front_end__V_65_65 = mercury__string__f_43_43_2_f_0(top_level__mercury_compile_front_end__V_64_64, (MR_String) " ms\n");
        }
#line 2036 "top_level.mercury_compile_front_end.c"
        {
#line 2038 "top_level.mercury_compile_front_end.c"
          top_level__mercury_compile_front_end__V_67_67 = mercury__string__f_43_43_2_f_0((MR_String) " repeats: ", top_level__mercury_compile_front_end__V_65_65);
        }
#line 2041 "top_level.mercury_compile_front_end.c"
        {
#line 2043 "top_level.mercury_compile_front_end.c"
          top_level__mercury_compile_front_end__V_68_68 = mercury__string__int_to_string_1_f_0(top_level__mercury_compile_front_end__Repeats_20);
        }
#line 2046 "top_level.mercury_compile_front_end.c"
        {
#line 2048 "top_level.mercury_compile_front_end.c"
          top_level__mercury_compile_front_end__V_69_69 = mercury__string__f_43_43_2_f_0(top_level__mercury_compile_front_end__V_68_68, top_level__mercury_compile_front_end__V_67_67);
        }
#line 2051 "top_level.mercury_compile_front_end.c"
        {
#line 2053 "top_level.mercury_compile_front_end.c"
          top_level__mercury_compile_front_end__V_71_71 = mercury__string__f_43_43_2_f_0((MR_String) "BENCHMARK modecheck, ", top_level__mercury_compile_front_end__V_69_69);
        }
#line 2056 "top_level.mercury_compile_front_end.c"
        {
#line 2058 "top_level.mercury_compile_front_end.c"
          mercury__io__write_string_3_p_0(top_level__mercury_compile_front_end__V_71_71);
        }
#line 674 "mercury_compile_front_end.m"
      }
#line 687 "mercury_compile_front_end.m"
    {
#line 687 "mercury_compile_front_end.m"
      top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_46_46 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, top_level__mercury_compile_front_end__ModeSpecs_21, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_30_30);
    }
#line 688 "mercury_compile_front_end.m"
    {
#line 688 "mercury_compile_front_end.m"
      *top_level__mercury_compile_front_end__FoundModeError_14 = parse_tree__error_util__contains_errors_2_f_0(top_level__mercury_compile_front_end__Globals_18, top_level__mercury_compile_front_end__ModeSpecs_21);
    }
#line 693 "mercury_compile_front_end.m"
    if ((*top_level__mercury_compile_front_end__FoundModeError_14 == (MR_Integer) 0))
#line 690 "mercury_compile_front_end.m"
      {
#line 691 "mercury_compile_front_end.m"
        {
#line 691 "mercury_compile_front_end.m"
          hlds__hlds_error_util__maybe_write_out_errors_8_p_0(top_level__mercury_compile_front_end__Verbose_11, top_level__mercury_compile_front_end__Globals_18, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_38_38, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_24, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_46_46, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_26);
        }
#line 692 "mercury_compile_front_end.m"
        {
#line 692 "mercury_compile_front_end.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_front_end__Verbose_11, (MR_String) "% Program is mode-correct.\n");
        }
#line 690 "mercury_compile_front_end.m"
      }
#line 693 "mercury_compile_front_end.m"
    else
#line 694 "mercury_compile_front_end.m"
      {
#line 695 "mercury_compile_front_end.m"
        {
#line 695 "mercury_compile_front_end.m"
          hlds__hlds_error_util__maybe_write_out_errors_8_p_0(top_level__mercury_compile_front_end__Verbose_11, top_level__mercury_compile_front_end__Globals_18, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_38_38, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_24, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_46_46, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_26);
        }
#line 696 "mercury_compile_front_end.m"
        {
#line 696 "mercury_compile_front_end.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_front_end__Verbose_11, (MR_String) "% Program contains mode error(s).\n");
        }
#line 694 "mercury_compile_front_end.m"
      }
#line 698 "mercury_compile_front_end.m"
    {
#line 698 "mercury_compile_front_end.m"
      libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_front_end__Stats_12);
#line 698 "mercury_compile_front_end.m"
      return;
    }
#line 669 "mercury_compile_front_end.m"
  }
#line 664 "mercury_compile_front_end.m"
}

#line 2117 "top_level.mercury_compile_front_end.c"
static void MR_CALL 
top_level__mercury_compile_front_end__maybe_mode_constraints_6_p_0_1(
#line 2120 "top_level.mercury_compile_front_end.c"
  MR_Box top_level__mercury_compile_front_end__closure_arg,
#line 2122 "top_level.mercury_compile_front_end.c"
  MR_Box top_level__mercury_compile_front_end__wrapper_arg_1,
#line 2124 "top_level.mercury_compile_front_end.c"
  MR_Box * top_level__mercury_compile_front_end__wrapper_arg_2,
#line 2126 "top_level.mercury_compile_front_end.c"
  MR_Box top_level__mercury_compile_front_end__wrapper_arg_3,
#line 2128 "top_level.mercury_compile_front_end.c"
  MR_Box * top_level__mercury_compile_front_end__wrapper_arg_4)
#line 2130 "top_level.mercury_compile_front_end.c"
{
#line 2132 "top_level.mercury_compile_front_end.c"
  {
#line 2134 "top_level.mercury_compile_front_end.c"
    MR_Box top_level__mercury_compile_front_end__closure = top_level__mercury_compile_front_end__closure_arg;
#line 2136 "top_level.mercury_compile_front_end.c"
    MR_Word top_level__mercury_compile_front_end__conv0_HeadVar__2_2;

#line 2139 "top_level.mercury_compile_front_end.c"
    {
#line 2141 "top_level.mercury_compile_front_end.c"
      check_hlds__mode_constraints__mc_process_module_4_p_0(((MR_Word) top_level__mercury_compile_front_end__wrapper_arg_1), &top_level__mercury_compile_front_end__conv0_HeadVar__2_2);
    }
#line 2144 "top_level.mercury_compile_front_end.c"
    *top_level__mercury_compile_front_end__wrapper_arg_2 = ((MR_Box) (top_level__mercury_compile_front_end__conv0_HeadVar__2_2));
#line 2146 "top_level.mercury_compile_front_end.c"
  }
#line 2148 "top_level.mercury_compile_front_end.c"
}

#line 646 "mercury_compile_front_end.m"
static void MR_CALL 
top_level__mercury_compile_front_end__maybe_mode_constraints_6_p_0(
#line 646 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__Verbose_7,
#line 646 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__Stats_8,
#line 646 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_13,
#line 646 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_14)
#line 646 "mercury_compile_front_end.m"
{
#line 649 "mercury_compile_front_end.m"
  {
#line 649 "mercury_compile_front_end.m"
    MR_bool top_level__mercury_compile_front_end__succeeded;
#line 649 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__Globals_11;
#line 649 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__ModeConstraints_12;

#line 650 "mercury_compile_front_end.m"
    {
#line 650 "mercury_compile_front_end.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_13, &top_level__mercury_compile_front_end__Globals_11);
    }
#line 651 "mercury_compile_front_end.m"
    {
#line 651 "mercury_compile_front_end.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_front_end__Globals_11, (MR_Integer) 150, &top_level__mercury_compile_front_end__ModeConstraints_12);
    }
#line 660 "mercury_compile_front_end.m"
    if ((top_level__mercury_compile_front_end__ModeConstraints_12 == (MR_Integer) 0))
#line 661 "mercury_compile_front_end.m"
      *top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_14 = top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_13;
#line 660 "mercury_compile_front_end.m"
    else
#line 653 "mercury_compile_front_end.m"
      {
#line 653 "mercury_compile_front_end.m"
        MR_Word top_level__mercury_compile_front_end__Globals_41;
#line 653 "mercury_compile_front_end.m"
        MR_Word top_level__mercury_compile_front_end__BenchmarkModes_42;

#line 654 "mercury_compile_front_end.m"
        {
#line 654 "mercury_compile_front_end.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_front_end__Verbose_7, (MR_String) "% Dumping mode constraints...\n");
        }
#line 655 "mercury_compile_front_end.m"
        {
#line 655 "mercury_compile_front_end.m"
          libs__file_util__maybe_flush_output_3_p_0(top_level__mercury_compile_front_end__Verbose_7);
        }
#line 705 "mercury_compile_front_end.m"
        {
#line 705 "mercury_compile_front_end.m"
          hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_13, &top_level__mercury_compile_front_end__Globals_41);
        }
#line 706 "mercury_compile_front_end.m"
        {
#line 706 "mercury_compile_front_end.m"
          libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_front_end__Globals_41, (MR_Integer) 153, &top_level__mercury_compile_front_end__BenchmarkModes_42);
        }
#line 715 "mercury_compile_front_end.m"
        if ((top_level__mercury_compile_front_end__BenchmarkModes_42 == (MR_Integer) 0))
#line 717 "mercury_compile_front_end.m"
          {
#line 717 "mercury_compile_front_end.m"
            check_hlds__mode_constraints__mc_process_module_4_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_13, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_14);
          }
#line 715 "mercury_compile_front_end.m"
        else
#line 708 "mercury_compile_front_end.m"
          {
#line 708 "mercury_compile_front_end.m"
            MR_Integer top_level__mercury_compile_front_end__Repeats_43;
#line 708 "mercury_compile_front_end.m"
            MR_Integer top_level__mercury_compile_front_end__Time_44;
#line 708 "mercury_compile_front_end.m"
            MR_String top_level__mercury_compile_front_end__V_66_66;
#line 708 "mercury_compile_front_end.m"
            MR_String top_level__mercury_compile_front_end__V_67_67;
#line 708 "mercury_compile_front_end.m"
            MR_String top_level__mercury_compile_front_end__V_69_69;
#line 708 "mercury_compile_front_end.m"
            MR_String top_level__mercury_compile_front_end__V_70_70;
#line 708 "mercury_compile_front_end.m"
            MR_String top_level__mercury_compile_front_end__V_72_72;
#line 708 "mercury_compile_front_end.m"
            MR_String top_level__mercury_compile_front_end__V_73_73;
#line 724 "mercury_compile_front_end.m"
            MR_Box top_level__mercury_compile_front_end__conv2_STATE_VARIABLE_HLDS_14;
#line 724 "mercury_compile_front_end.m"
            MR_Box top_level__mercury_compile_front_end__conv1_STATE_VARIABLE_IO_31_57;

#line 709 "mercury_compile_front_end.m"
            {
#line 709 "mercury_compile_front_end.m"
              libs__globals__lookup_int_option_3_p_0(top_level__mercury_compile_front_end__Globals_41, (MR_Integer) 154, &top_level__mercury_compile_front_end__Repeats_43);
            }
#line 2253 "top_level.mercury_compile_front_end.c"
            {
#line 2255 "top_level.mercury_compile_front_end.c"
              top_level__mercury_compile_front_end__V_66_66 = mercury__string__int_to_string_1_f_0(top_level__mercury_compile_front_end__Repeats_43);
            }
#line 2258 "top_level.mercury_compile_front_end.c"
            {
#line 2260 "top_level.mercury_compile_front_end.c"
              top_level__mercury_compile_front_end__V_67_67 = mercury__string__f_43_43_2_f_0(top_level__mercury_compile_front_end__V_66_66, (MR_String) " ");
            }
#line 2263 "top_level.mercury_compile_front_end.c"
            {
#line 2265 "top_level.mercury_compile_front_end.c"
              top_level__mercury_compile_front_end__V_69_69 = mercury__string__f_43_43_2_f_0((MR_String) " ", top_level__mercury_compile_front_end__V_67_67);
            }
#line 2268 "top_level.mercury_compile_front_end.c"
            {
#line 2270 "top_level.mercury_compile_front_end.c"
              top_level__mercury_compile_front_end__V_70_70 = mercury__string__f_43_43_2_f_0((MR_String) "mode-constraints", top_level__mercury_compile_front_end__V_69_69);
            }
#line 2273 "top_level.mercury_compile_front_end.c"
            {
#line 2275 "top_level.mercury_compile_front_end.c"
              mercury__io__write_string_3_p_0(top_level__mercury_compile_front_end__V_70_70);
            }
#line 724 "mercury_compile_front_end.m"
            {
#line 724 "mercury_compile_front_end.m"
              mercury__benchmarking__benchmark_det_io_7_p_0((MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, (MR_Word) &top_level__mercury_compile_front_end_scalar_common_3[1], ((MR_Box) (top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_13)), &top_level__mercury_compile_front_end__conv2_STATE_VARIABLE_HLDS_14, ((MR_Box) ((MR_Integer) 0)), &top_level__mercury_compile_front_end__conv1_STATE_VARIABLE_IO_31_57, top_level__mercury_compile_front_end__Repeats_43, &top_level__mercury_compile_front_end__Time_44);
            }
#line 724 "mercury_compile_front_end.m"
            *top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_14 = ((MR_Word) top_level__mercury_compile_front_end__conv2_STATE_VARIABLE_HLDS_14);
#line 2285 "top_level.mercury_compile_front_end.c"
            {
#line 2287 "top_level.mercury_compile_front_end.c"
              top_level__mercury_compile_front_end__V_72_72 = mercury__string__int_to_string_1_f_0(top_level__mercury_compile_front_end__Time_44);
            }
#line 2290 "top_level.mercury_compile_front_end.c"
            {
#line 2292 "top_level.mercury_compile_front_end.c"
              top_level__mercury_compile_front_end__V_73_73 = mercury__string__f_43_43_2_f_0(top_level__mercury_compile_front_end__V_72_72, (MR_String) " ms\n");
            }
#line 2295 "top_level.mercury_compile_front_end.c"
            {
#line 2297 "top_level.mercury_compile_front_end.c"
              mercury__io__write_string_3_p_0(top_level__mercury_compile_front_end__V_73_73);
            }
#line 708 "mercury_compile_front_end.m"
          }
#line 658 "mercury_compile_front_end.m"
        {
#line 658 "mercury_compile_front_end.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_front_end__Verbose_7, (MR_String) "% done.\n");
        }
#line 659 "mercury_compile_front_end.m"
        {
#line 659 "mercury_compile_front_end.m"
          libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_front_end__Stats_8);
#line 659 "mercury_compile_front_end.m"
          return;
        }
#line 653 "mercury_compile_front_end.m"
      }
#line 649 "mercury_compile_front_end.m"
  }
#line 646 "mercury_compile_front_end.m"
}

#line 623 "mercury_compile_front_end.m"
static void MR_CALL 
top_level__mercury_compile_front_end__maybe_unused_imports_8_p_0(
#line 623 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__Verbose_9,
#line 623 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__Stats_10,
#line 623 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_17,
#line 623 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_18,
#line 623 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_19,
#line 623 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_20)
#line 623 "mercury_compile_front_end.m"
{
#line 627 "mercury_compile_front_end.m"
  {
#line 627 "mercury_compile_front_end.m"
    MR_bool top_level__mercury_compile_front_end__succeeded;
#line 627 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__Globals_14;
#line 627 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__WarnUnusedImports_15;

#line 628 "mercury_compile_front_end.m"
    {
#line 628 "mercury_compile_front_end.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_17, &top_level__mercury_compile_front_end__Globals_14);
    }
#line 629 "mercury_compile_front_end.m"
    {
#line 629 "mercury_compile_front_end.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_front_end__Globals_14, (MR_Integer) 36, &top_level__mercury_compile_front_end__WarnUnusedImports_15);
    }
#line 640 "mercury_compile_front_end.m"
    if ((top_level__mercury_compile_front_end__WarnUnusedImports_15 == (MR_Integer) 0))
#line 641 "mercury_compile_front_end.m"
      {
#line 641 "mercury_compile_front_end.m"
        *top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_18 = top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_17;
#line 641 "mercury_compile_front_end.m"
        *top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_20 = top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_19;
#line 641 "mercury_compile_front_end.m"
      }
#line 640 "mercury_compile_front_end.m"
    else
#line 632 "mercury_compile_front_end.m"
      {
#line 632 "mercury_compile_front_end.m"
        MR_Word top_level__mercury_compile_front_end__UnusedImportSpecs_16;
#line 632 "mercury_compile_front_end.m"
        MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_24_24;
#line 632 "mercury_compile_front_end.m"
        MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_25_25;
#line 632 "mercury_compile_front_end.m"
        MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_30_30;

#line 633 "mercury_compile_front_end.m"
        {
#line 633 "mercury_compile_front_end.m"
          hlds__hlds_error_util__maybe_write_out_errors_8_p_0(top_level__mercury_compile_front_end__Verbose_9, top_level__mercury_compile_front_end__Globals_14, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_17, &top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_24_24, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_19, &top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_25_25);
        }
#line 634 "mercury_compile_front_end.m"
        {
#line 634 "mercury_compile_front_end.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_front_end__Verbose_9, (MR_String) "% Checking for unused imports...");
        }
#line 635 "mercury_compile_front_end.m"
        {
#line 635 "mercury_compile_front_end.m"
          check_hlds__unused_imports__unused_imports_4_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_24_24, &top_level__mercury_compile_front_end__UnusedImportSpecs_16);
        }
#line 636 "mercury_compile_front_end.m"
        {
#line 636 "mercury_compile_front_end.m"
          top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_30_30 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, top_level__mercury_compile_front_end__UnusedImportSpecs_16, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_25_25);
        }
#line 637 "mercury_compile_front_end.m"
        {
#line 637 "mercury_compile_front_end.m"
          hlds__hlds_error_util__maybe_write_out_errors_8_p_0(top_level__mercury_compile_front_end__Verbose_9, top_level__mercury_compile_front_end__Globals_14, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_24_24, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_18, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_30_30, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_20);
        }
#line 638 "mercury_compile_front_end.m"
        {
#line 638 "mercury_compile_front_end.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_front_end__Verbose_9, (MR_String) " done.\n");
        }
#line 639 "mercury_compile_front_end.m"
        {
#line 639 "mercury_compile_front_end.m"
          libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_front_end__Stats_10);
#line 639 "mercury_compile_front_end.m"
          return;
        }
#line 632 "mercury_compile_front_end.m"
      }
#line 627 "mercury_compile_front_end.m"
  }
#line 623 "mercury_compile_front_end.m"
}

#line 581 "mercury_compile_front_end.m"
static void MR_CALL 
top_level__mercury_compile_front_end__maybe_polymorphism_8_p_0(
#line 581 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__Verbose_9,
#line 581 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__Stats_10,
#line 581 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_17,
#line 581 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_18,
#line 581 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_19,
#line 581 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_20)
#line 581 "mercury_compile_front_end.m"
{
#line 585 "mercury_compile_front_end.m"
  {
#line 585 "mercury_compile_front_end.m"
    MR_bool top_level__mercury_compile_front_end__succeeded;
#line 585 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__Globals_14;
#line 585 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__Polymorphism_15;
#line 585 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_23_23;

#line 586 "mercury_compile_front_end.m"
    {
#line 586 "mercury_compile_front_end.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_17, &top_level__mercury_compile_front_end__Globals_14);
    }
#line 587 "mercury_compile_front_end.m"
    {
#line 587 "mercury_compile_front_end.m"
      hlds__hlds_error_util__maybe_write_out_errors_8_p_0(top_level__mercury_compile_front_end__Verbose_9, top_level__mercury_compile_front_end__Globals_14, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_17, &top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_23_23, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_19, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_20);
    }
#line 588 "mercury_compile_front_end.m"
    {
#line 588 "mercury_compile_front_end.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_front_end__Globals_14, (MR_Integer) 303, &top_level__mercury_compile_front_end__Polymorphism_15);
    }
#line 611 "mercury_compile_front_end.m"
    if ((top_level__mercury_compile_front_end__Polymorphism_15 == (MR_Integer) 0))
#line 612 "mercury_compile_front_end.m"
      {
#line 617 "mercury_compile_front_end.m"
        {
#line 617 "mercury_compile_front_end.m"
          mercury__require__unexpected_3_p_0((MR_String) "top_level.mercury_compile_front_end", (MR_String) "predicate \140top_level.mercury_compile_front_end.maybe_polymorphism\'/8", (MR_String) "sorry, \140--no-polymorphism\' is no longer supported");
#line 617 "mercury_compile_front_end.m"
          return;
        }
#line 612 "mercury_compile_front_end.m"
      }
#line 611 "mercury_compile_front_end.m"
    else
#line 590 "mercury_compile_front_end.m"
      {
#line 590 "mercury_compile_front_end.m"
        MR_Word top_level__mercury_compile_front_end__VeryVerbose_16;

#line 591 "mercury_compile_front_end.m"
        {
#line 591 "mercury_compile_front_end.m"
          libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_front_end__Globals_14, (MR_Integer) 45, &top_level__mercury_compile_front_end__VeryVerbose_16);
        }
#line 602 "mercury_compile_front_end.m"
        {
#line 602 "mercury_compile_front_end.m"
          check_hlds__polymorphism__polymorphism_process_module_2_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_23_23, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_18);
        }
#line 2497 "top_level.mercury_compile_front_end.c"
        if ((top_level__mercury_compile_front_end__VeryVerbose_16 == (MR_Integer) 0))
#line 2499 "top_level.mercury_compile_front_end.c"
          {
#line 594 "mercury_compile_front_end.m"
            {
#line 594 "mercury_compile_front_end.m"
              libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_front_end__Verbose_9, (MR_String) "% Transforming polymorphic unifications...");
            }
#line 601 "mercury_compile_front_end.m"
            {
#line 601 "mercury_compile_front_end.m"
              libs__file_util__maybe_flush_output_3_p_0(top_level__mercury_compile_front_end__Verbose_9);
            }
#line 605 "mercury_compile_front_end.m"
            {
#line 605 "mercury_compile_front_end.m"
              libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_front_end__Verbose_9, (MR_String) " done.\n");
            }
#line 2516 "top_level.mercury_compile_front_end.c"
          }
#line 2518 "top_level.mercury_compile_front_end.c"
        else
#line 2520 "top_level.mercury_compile_front_end.c"
          {
#line 598 "mercury_compile_front_end.m"
            {
#line 598 "mercury_compile_front_end.m"
              libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_front_end__Verbose_9, (MR_String) "% Transforming polymorphic unifications...\n");
            }
#line 601 "mercury_compile_front_end.m"
            {
#line 601 "mercury_compile_front_end.m"
              libs__file_util__maybe_flush_output_3_p_0(top_level__mercury_compile_front_end__Verbose_9);
            }
#line 608 "mercury_compile_front_end.m"
            {
#line 608 "mercury_compile_front_end.m"
              libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_front_end__Verbose_9, (MR_String) "% done.\n");
            }
#line 2537 "top_level.mercury_compile_front_end.c"
          }
#line 610 "mercury_compile_front_end.m"
        {
#line 610 "mercury_compile_front_end.m"
          libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_front_end__Stats_10);
#line 610 "mercury_compile_front_end.m"
          return;
        }
#line 590 "mercury_compile_front_end.m"
      }
#line 585 "mercury_compile_front_end.m"
  }
#line 581 "mercury_compile_front_end.m"
}

#line 565 "mercury_compile_front_end.m"
static void MR_CALL 
top_level__mercury_compile_front_end__subst_implementation_defined_literals_8_p_0(
#line 565 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__Verbose_9,
#line 565 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__Stats_10,
#line 565 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_15,
#line 565 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_16,
#line 565 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_17,
#line 565 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_18)
#line 565 "mercury_compile_front_end.m"
{
#line 569 "mercury_compile_front_end.m"
  {
#line 569 "mercury_compile_front_end.m"
    MR_bool top_level__mercury_compile_front_end__succeeded;
#line 569 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__Globals_14;
#line 569 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_21_21;

#line 570 "mercury_compile_front_end.m"
    {
#line 570 "mercury_compile_front_end.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_15, &top_level__mercury_compile_front_end__Globals_14);
    }
#line 571 "mercury_compile_front_end.m"
    {
#line 571 "mercury_compile_front_end.m"
      hlds__hlds_error_util__maybe_write_out_errors_8_p_0(top_level__mercury_compile_front_end__Verbose_9, top_level__mercury_compile_front_end__Globals_14, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_15, &top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_21_21, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_17, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_18);
    }
#line 572 "mercury_compile_front_end.m"
    {
#line 572 "mercury_compile_front_end.m"
      libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_front_end__Verbose_9, (MR_String) "% Substituting implementation-defined literals...\n");
    }
#line 574 "mercury_compile_front_end.m"
    {
#line 574 "mercury_compile_front_end.m"
      libs__file_util__maybe_flush_output_3_p_0(top_level__mercury_compile_front_end__Verbose_9);
    }
#line 575 "mercury_compile_front_end.m"
    {
#line 575 "mercury_compile_front_end.m"
      check_hlds__implementation_defined_literals__subst_impl_defined_literals_2_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_21_21, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_16);
    }
#line 576 "mercury_compile_front_end.m"
    {
#line 576 "mercury_compile_front_end.m"
      libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_front_end__Verbose_9, (MR_String) "% done.\n");
    }
#line 577 "mercury_compile_front_end.m"
    {
#line 577 "mercury_compile_front_end.m"
      libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_front_end__Stats_10);
#line 577 "mercury_compile_front_end.m"
      return;
    }
#line 569 "mercury_compile_front_end.m"
  }
#line 565 "mercury_compile_front_end.m"
}

#line 541 "mercury_compile_front_end.m"
static void MR_CALL 
top_level__mercury_compile_front_end__puritycheck_8_p_0(
#line 541 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__Verbose_9,
#line 541 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__Stats_10,
#line 541 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_17,
#line 541 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_18,
#line 541 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_19,
#line 541 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_20)
#line 541 "mercury_compile_front_end.m"
{
#line 544 "mercury_compile_front_end.m"
  {
#line 544 "mercury_compile_front_end.m"
    MR_bool top_level__mercury_compile_front_end__succeeded;
#line 544 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__PuritySpecs_14;
#line 544 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__Globals_15;
#line 544 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__PurityErrors_16;
#line 544 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_25_25;
#line 544 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_27_27;

#line 545 "mercury_compile_front_end.m"
    {
#line 545 "mercury_compile_front_end.m"
      libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_front_end__Verbose_9, (MR_String) "% Purity-checking clauses...\n");
    }
#line 546 "mercury_compile_front_end.m"
    {
#line 546 "mercury_compile_front_end.m"
      check_hlds__purity__puritycheck_module_4_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_17, &top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_25_25, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &top_level__mercury_compile_front_end__PuritySpecs_14);
    }
#line 547 "mercury_compile_front_end.m"
    {
#line 547 "mercury_compile_front_end.m"
      top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_27_27 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, top_level__mercury_compile_front_end__PuritySpecs_14, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_19);
    }
#line 548 "mercury_compile_front_end.m"
    {
#line 548 "mercury_compile_front_end.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_25_25, &top_level__mercury_compile_front_end__Globals_15);
    }
#line 549 "mercury_compile_front_end.m"
    {
#line 549 "mercury_compile_front_end.m"
      top_level__mercury_compile_front_end__PurityErrors_16 = parse_tree__error_util__contains_errors_2_f_0(top_level__mercury_compile_front_end__Globals_15, top_level__mercury_compile_front_end__PuritySpecs_14);
    }
#line 550 "mercury_compile_front_end.m"
    {
#line 550 "mercury_compile_front_end.m"
      hlds__hlds_error_util__maybe_write_out_errors_8_p_0(top_level__mercury_compile_front_end__Verbose_9, top_level__mercury_compile_front_end__Globals_15, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_25_25, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_18, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_27_27, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_20);
    }
#line 551 "mercury_compile_front_end.m"
    {
#line 551 "mercury_compile_front_end.m"
      libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_front_end__Stats_10);
    }
#line 556 "mercury_compile_front_end.m"
    if ((top_level__mercury_compile_front_end__PurityErrors_16 == (MR_Integer) 0))
#line 557 "mercury_compile_front_end.m"
      {
#line 558 "mercury_compile_front_end.m"
        {
#line 558 "mercury_compile_front_end.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_front_end__Verbose_9, (MR_String) "% Program is purity-correct.\n");
        }
#line 557 "mercury_compile_front_end.m"
      }
#line 556 "mercury_compile_front_end.m"
    else
#line 553 "mercury_compile_front_end.m"
      {
#line 554 "mercury_compile_front_end.m"
        {
#line 554 "mercury_compile_front_end.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_front_end__Verbose_9, (MR_String) "% Program contains purity error(s).\n");
        }
#line 553 "mercury_compile_front_end.m"
      }
#line 561 "mercury_compile_front_end.m"
    {
#line 561 "mercury_compile_front_end.m"
      libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_front_end__Stats_10);
#line 561 "mercury_compile_front_end.m"
      return;
    }
#line 544 "mercury_compile_front_end.m"
  }
#line 541 "mercury_compile_front_end.m"
}

#line 458 "mercury_compile_front_end.m"
static void MR_CALL 
top_level__mercury_compile_front_end__frontend_pass_by_phases_9_p_0(
#line 458 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_26,
#line 458 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_27,
#line 458 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__FoundError_11,
#line 458 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_0_28,
#line 458 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_29,
#line 458 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_30,
#line 458 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_31)
#line 458 "mercury_compile_front_end.m"
{
#line 462 "mercury_compile_front_end.m"
  {
#line 462 "mercury_compile_front_end.m"
    MR_bool top_level__mercury_compile_front_end__succeeded;
#line 462 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__Globals_15;
#line 462 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__Verbose_16;
#line 462 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__Stats_17;
#line 462 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__FoundModeError_18;
#line 462 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__SafeToContinue_19;
#line 462 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_36_36;
#line 462 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_37_37;
#line 462 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_41_41;
#line 462 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_43_43;
#line 462 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_44_44;
#line 462 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_48_48;
#line 462 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_50_50;
#line 462 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_54_54;
#line 462 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_56_56;
#line 462 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_57_57;
#line 462 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_61_61;
#line 462 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_117_117;

#line 463 "mercury_compile_front_end.m"
    {
#line 463 "mercury_compile_front_end.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_26, &top_level__mercury_compile_front_end__Globals_15);
    }
#line 464 "mercury_compile_front_end.m"
    {
#line 464 "mercury_compile_front_end.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_front_end__Globals_15, (MR_Integer) 44, &top_level__mercury_compile_front_end__Verbose_16);
    }
#line 465 "mercury_compile_front_end.m"
    {
#line 465 "mercury_compile_front_end.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_front_end__Globals_15, (MR_Integer) 54, &top_level__mercury_compile_front_end__Stats_17);
    }
#line 467 "mercury_compile_front_end.m"
    {
#line 467 "mercury_compile_front_end.m"
      top_level__mercury_compile_front_end__maybe_polymorphism_8_p_0(top_level__mercury_compile_front_end__Verbose_16, top_level__mercury_compile_front_end__Stats_17, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_26, &top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_36_36, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_30, &top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_37_37);
    }
#line 468 "mercury_compile_front_end.m"
    {
#line 468 "mercury_compile_front_end.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_36_36, (MR_Integer) 30, (MR_String) "polymorphism", top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_0_28, &top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_41_41);
    }
#line 470 "mercury_compile_front_end.m"
    {
#line 470 "mercury_compile_front_end.m"
      top_level__mercury_compile_front_end__maybe_unused_imports_8_p_0(top_level__mercury_compile_front_end__Verbose_16, top_level__mercury_compile_front_end__Stats_17, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_36_36, &top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_43_43, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_37_37, &top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_44_44);
    }
#line 471 "mercury_compile_front_end.m"
    {
#line 471 "mercury_compile_front_end.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_43_43, (MR_Integer) 31, (MR_String) "unused_imports", top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_41_41, &top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_48_48);
    }
#line 474 "mercury_compile_front_end.m"
    {
#line 474 "mercury_compile_front_end.m"
      top_level__mercury_compile_front_end__maybe_mode_constraints_6_p_0(top_level__mercury_compile_front_end__Verbose_16, top_level__mercury_compile_front_end__Stats_17, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_43_43, &top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_50_50);
    }
#line 475 "mercury_compile_front_end.m"
    {
#line 475 "mercury_compile_front_end.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_50_50, (MR_Integer) 33, (MR_String) "mode_constraints", top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_48_48, &top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_54_54);
    }
#line 477 "mercury_compile_front_end.m"
    {
#line 477 "mercury_compile_front_end.m"
      top_level__mercury_compile_front_end__modecheck_10_p_0(top_level__mercury_compile_front_end__Verbose_16, top_level__mercury_compile_front_end__Stats_17, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_50_50, &top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_56_56, &top_level__mercury_compile_front_end__FoundModeError_18, &top_level__mercury_compile_front_end__SafeToContinue_19, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_44_44, &top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_57_57);
    }
#line 479 "mercury_compile_front_end.m"
    {
#line 479 "mercury_compile_front_end.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_56_56, (MR_Integer) 35, (MR_String) "modecheck", top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_54_54, &top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_61_61);
    }
#line 484 "mercury_compile_front_end.m"
    if ((top_level__mercury_compile_front_end__SafeToContinue_19 == (MR_Integer) 0))
#line 485 "mercury_compile_front_end.m"
      {
#line 485 "mercury_compile_front_end.m"
        MR_Word top_level__mercury_compile_front_end__FoundUniqError_20;
#line 485 "mercury_compile_front_end.m"
        MR_Word top_level__mercury_compile_front_end__FoundStratError_21;
#line 485 "mercury_compile_front_end.m"
        MR_Word top_level__mercury_compile_front_end__FoundOISUError_22;
#line 485 "mercury_compile_front_end.m"
        MR_Word top_level__mercury_compile_front_end__FoundTryError_23;
#line 485 "mercury_compile_front_end.m"
        MR_Integer top_level__mercury_compile_front_end__NumErrors_24;
#line 485 "mercury_compile_front_end.m"
        MR_Integer top_level__mercury_compile_front_end__ExitStatus_25;
#line 485 "mercury_compile_front_end.m"
        MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_63_63;
#line 485 "mercury_compile_front_end.m"
        MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_67_67;
#line 485 "mercury_compile_front_end.m"
        MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_69_69;
#line 485 "mercury_compile_front_end.m"
        MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_73_73;
#line 485 "mercury_compile_front_end.m"
        MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_75_75;
#line 485 "mercury_compile_front_end.m"
        MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_76_76;
#line 485 "mercury_compile_front_end.m"
        MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_80_80;
#line 485 "mercury_compile_front_end.m"
        MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_82_82;
#line 485 "mercury_compile_front_end.m"
        MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_83_83;
#line 485 "mercury_compile_front_end.m"
        MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_87_87;
#line 485 "mercury_compile_front_end.m"
        MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_89_89;
#line 485 "mercury_compile_front_end.m"
        MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_90_90;
#line 485 "mercury_compile_front_end.m"
        MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_94_94;
#line 485 "mercury_compile_front_end.m"
        MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_96_96;
#line 485 "mercury_compile_front_end.m"
        MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_97_97;
#line 485 "mercury_compile_front_end.m"
        MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_101_101;
#line 485 "mercury_compile_front_end.m"
        MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_103_103;
#line 485 "mercury_compile_front_end.m"
        MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_104_104;
#line 485 "mercury_compile_front_end.m"
        MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_108_108;
#line 485 "mercury_compile_front_end.m"
        MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_112_112;
#line 485 "mercury_compile_front_end.m"
        MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_113_113;

#line 486 "mercury_compile_front_end.m"
        {
#line 486 "mercury_compile_front_end.m"
          top_level__mercury_compile_front_end__detect_switches_6_p_0(top_level__mercury_compile_front_end__Verbose_16, top_level__mercury_compile_front_end__Stats_17, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_56_56, &top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_63_63);
        }
#line 487 "mercury_compile_front_end.m"
        {
#line 487 "mercury_compile_front_end.m"
          hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_63_63, (MR_Integer) 40, (MR_String) "switch_detect", top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_61_61, &top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_67_67);
        }
#line 489 "mercury_compile_front_end.m"
        {
#line 489 "mercury_compile_front_end.m"
          top_level__mercury_compile_front_end__detect_cse_6_p_0(top_level__mercury_compile_front_end__Verbose_16, top_level__mercury_compile_front_end__Stats_17, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_63_63, &top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_69_69);
        }
#line 490 "mercury_compile_front_end.m"
        {
#line 490 "mercury_compile_front_end.m"
          hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_69_69, (MR_Integer) 45, (MR_String) "cse", top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_67_67, &top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_73_73);
        }
#line 492 "mercury_compile_front_end.m"
        {
#line 492 "mercury_compile_front_end.m"
          top_level__mercury_compile_front_end__check_determinism_8_p_0(top_level__mercury_compile_front_end__Verbose_16, top_level__mercury_compile_front_end__Stats_17, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_69_69, &top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_75_75, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_57_57, &top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_76_76);
        }
#line 493 "mercury_compile_front_end.m"
        {
#line 493 "mercury_compile_front_end.m"
          hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_75_75, (MR_Integer) 50, (MR_String) "determinism", top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_73_73, &top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_80_80);
        }
#line 495 "mercury_compile_front_end.m"
        {
#line 495 "mercury_compile_front_end.m"
          top_level__mercury_compile_front_end__check_unique_modes_9_p_0(top_level__mercury_compile_front_end__Verbose_16, top_level__mercury_compile_front_end__Stats_17, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_75_75, &top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_82_82, &top_level__mercury_compile_front_end__FoundUniqError_20, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_76_76, &top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_83_83);
        }
#line 496 "mercury_compile_front_end.m"
        {
#line 496 "mercury_compile_front_end.m"
          hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_82_82, (MR_Integer) 55, (MR_String) "unique_modes", top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_80_80, &top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_87_87);
        }
#line 498 "mercury_compile_front_end.m"
        {
#line 498 "mercury_compile_front_end.m"
          top_level__mercury_compile_front_end__check_stratification_9_p_0(top_level__mercury_compile_front_end__Verbose_16, top_level__mercury_compile_front_end__Stats_17, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_82_82, &top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_89_89, &top_level__mercury_compile_front_end__FoundStratError_21, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_83_83, &top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_90_90);
        }
#line 500 "mercury_compile_front_end.m"
        {
#line 500 "mercury_compile_front_end.m"
          hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_89_89, (MR_Integer) 60, (MR_String) "stratification", top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_87_87, &top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_94_94);
        }
#line 502 "mercury_compile_front_end.m"
        {
#line 502 "mercury_compile_front_end.m"
          top_level__mercury_compile_front_end__check_oisu_pragmas_9_p_0(top_level__mercury_compile_front_end__Verbose_16, top_level__mercury_compile_front_end__Stats_17, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_89_89, &top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_96_96, &top_level__mercury_compile_front_end__FoundOISUError_22, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_90_90, &top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_97_97);
        }
#line 504 "mercury_compile_front_end.m"
        {
#line 504 "mercury_compile_front_end.m"
          hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_96_96, (MR_Integer) 60, (MR_String) "stratification", top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_94_94, &top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_101_101);
        }
#line 506 "mercury_compile_front_end.m"
        {
#line 506 "mercury_compile_front_end.m"
          top_level__mercury_compile_front_end__process_try_goals_9_p_0(top_level__mercury_compile_front_end__Verbose_16, top_level__mercury_compile_front_end__Stats_17, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_96_96, &top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_103_103, &top_level__mercury_compile_front_end__FoundTryError_23, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_97_97, &top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_104_104);
        }
#line 507 "mercury_compile_front_end.m"
        {
#line 507 "mercury_compile_front_end.m"
          hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_103_103, (MR_Integer) 62, (MR_String) "try", top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_101_101, &top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_108_108);
        }
#line 509 "mercury_compile_front_end.m"
        {
#line 509 "mercury_compile_front_end.m"
          top_level__mercury_compile_front_end__maybe_simplify_10_p_0((MR_Integer) 1, (MR_Integer) 0, top_level__mercury_compile_front_end__Verbose_16, top_level__mercury_compile_front_end__Stats_17, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_103_103, &top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_112_112, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_104_104, &top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_113_113);
        }
#line 511 "mercury_compile_front_end.m"
        {
#line 511 "mercury_compile_front_end.m"
          hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_112_112, (MR_Integer) 65, (MR_String) "frontend_simplify", top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_108_108, &top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_117_117);
        }
#line 513 "mercury_compile_front_end.m"
        {
#line 513 "mercury_compile_front_end.m"
          top_level__mercury_compile_front_end__maybe_proc_statistics_9_p_0(top_level__mercury_compile_front_end__Verbose_16, top_level__mercury_compile_front_end__Stats_17, (MR_String) "AfterFrontEnd", top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_112_112, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_27, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_113_113, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_31);
        }
#line 517 "mercury_compile_front_end.m"
        {
#line 517 "mercury_compile_front_end.m"
          hlds__hlds_module__module_info_get_num_errors_2_p_0(*top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_27, &top_level__mercury_compile_front_end__NumErrors_24);
        }
#line 518 "mercury_compile_front_end.m"
        {
#line 518 "mercury_compile_front_end.m"
          mercury__io__get_exit_status_3_p_0(&top_level__mercury_compile_front_end__ExitStatus_25);
        }
#line 520 "mercury_compile_front_end.m"
        top_level__mercury_compile_front_end__succeeded = (top_level__mercury_compile_front_end__FoundModeError_18 == (MR_Integer) 0);
#line 520 "mercury_compile_front_end.m"
        if (top_level__mercury_compile_front_end__succeeded)
#line 520 "mercury_compile_front_end.m"
          {
#line 521 "mercury_compile_front_end.m"
            top_level__mercury_compile_front_end__succeeded = (top_level__mercury_compile_front_end__FoundUniqError_20 == (MR_Integer) 0);
#line 520 "mercury_compile_front_end.m"
            if (top_level__mercury_compile_front_end__succeeded)
#line 520 "mercury_compile_front_end.m"
              {
#line 522 "mercury_compile_front_end.m"
                top_level__mercury_compile_front_end__succeeded = (top_level__mercury_compile_front_end__FoundStratError_21 == (MR_Integer) 0);
#line 520 "mercury_compile_front_end.m"
                if (top_level__mercury_compile_front_end__succeeded)
#line 520 "mercury_compile_front_end.m"
                  {
#line 523 "mercury_compile_front_end.m"
                    top_level__mercury_compile_front_end__succeeded = (top_level__mercury_compile_front_end__FoundOISUError_22 == (MR_Integer) 0);
#line 520 "mercury_compile_front_end.m"
                    if (top_level__mercury_compile_front_end__succeeded)
#line 520 "mercury_compile_front_end.m"
                      {
#line 524 "mercury_compile_front_end.m"
                        top_level__mercury_compile_front_end__succeeded = (top_level__mercury_compile_front_end__FoundTryError_23 == (MR_Integer) 0);
#line 520 "mercury_compile_front_end.m"
                        if (top_level__mercury_compile_front_end__succeeded)
#line 520 "mercury_compile_front_end.m"
                          {
#line 525 "mercury_compile_front_end.m"
                            top_level__mercury_compile_front_end__succeeded = (top_level__mercury_compile_front_end__NumErrors_24 == (MR_Integer) 0);
#line 520 "mercury_compile_front_end.m"
                            if (top_level__mercury_compile_front_end__succeeded)
#line 529 "mercury_compile_front_end.m"
                              top_level__mercury_compile_front_end__succeeded = (top_level__mercury_compile_front_end__ExitStatus_25 == (MR_Integer) 0);
#line 520 "mercury_compile_front_end.m"
                          }
#line 520 "mercury_compile_front_end.m"
                      }
#line 520 "mercury_compile_front_end.m"
                  }
#line 520 "mercury_compile_front_end.m"
              }
#line 520 "mercury_compile_front_end.m"
          }
#line 532 "mercury_compile_front_end.m"
        if (top_level__mercury_compile_front_end__succeeded)
#line 531 "mercury_compile_front_end.m"
          *top_level__mercury_compile_front_end__FoundError_11 = (MR_Integer) 0;
#line 532 "mercury_compile_front_end.m"
        else
#line 533 "mercury_compile_front_end.m"
          *top_level__mercury_compile_front_end__FoundError_11 = (MR_Integer) 1;
#line 485 "mercury_compile_front_end.m"
      }
#line 484 "mercury_compile_front_end.m"
    else
#line 482 "mercury_compile_front_end.m"
      {
#line 483 "mercury_compile_front_end.m"
        *top_level__mercury_compile_front_end__FoundError_11 = (MR_Integer) 1;
#line 483 "mercury_compile_front_end.m"
        *top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_27 = top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_56_56;
#line 483 "mercury_compile_front_end.m"
        top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_117_117 = top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_61_61;
#line 483 "mercury_compile_front_end.m"
        *top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_31 = top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_57_57;
#line 482 "mercury_compile_front_end.m"
      }
#line 536 "mercury_compile_front_end.m"
    {
#line 536 "mercury_compile_front_end.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(*top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_27, (MR_Integer) 99, (MR_String) "front_end", top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_117_117, top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_29);
#line 536 "mercury_compile_front_end.m"
      return;
    }
#line 462 "mercury_compile_front_end.m"
  }
#line 458 "mercury_compile_front_end.m"
}

#line 357 "mercury_compile_front_end.m"
static void MR_CALL 
top_level__mercury_compile_front_end__maybe_write_optfile_9_p_0(
#line 357 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__MakeOptInt_10,
#line 357 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_36,
#line 357 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_37,
#line 357 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_0_38,
#line 357 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_39,
#line 357 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_40,
#line 357 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_41)
#line 357 "mercury_compile_front_end.m"
{
#line 361 "mercury_compile_front_end.m"
  {
#line 361 "mercury_compile_front_end.m"
    MR_bool top_level__mercury_compile_front_end__succeeded;
#line 361 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__Globals_15;
#line 361 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__IntermodOpt_16;
#line 361 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__IntermodAnalysis_17;
#line 361 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__IntermodArgs_18;
#line 361 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__IntermodDirs_19;
#line 361 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__UseOptFiles_20;
#line 361 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__Termination_21;
#line 361 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__Termination2_22;
#line 361 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__SharingAnalysis_23;
#line 361 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__ReuseAnalysis_24;
#line 361 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__ExceptionAnalysis_25;
#line 361 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__ClosureAnalysis_26;
#line 361 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__TrailingAnalysis_27;
#line 361 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__TablingAnalysis_28;

#line 362 "mercury_compile_front_end.m"
    {
#line 362 "mercury_compile_front_end.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_36, &top_level__mercury_compile_front_end__Globals_15);
    }
#line 363 "mercury_compile_front_end.m"
    {
#line 363 "mercury_compile_front_end.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_front_end__Globals_15, (MR_Integer) 325, &top_level__mercury_compile_front_end__IntermodOpt_16);
    }
#line 364 "mercury_compile_front_end.m"
    {
#line 364 "mercury_compile_front_end.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_front_end__Globals_15, (MR_Integer) 330, &top_level__mercury_compile_front_end__IntermodAnalysis_17);
    }
#line 366 "mercury_compile_front_end.m"
    {
#line 366 "mercury_compile_front_end.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_front_end__Globals_15, (MR_Integer) 351, &top_level__mercury_compile_front_end__IntermodArgs_18);
    }
#line 367 "mercury_compile_front_end.m"
    {
#line 367 "mercury_compile_front_end.m"
      libs__globals__lookup_accumulating_option_3_p_0(top_level__mercury_compile_front_end__Globals_15, (MR_Integer) 646, &top_level__mercury_compile_front_end__IntermodDirs_19);
    }
#line 369 "mercury_compile_front_end.m"
    {
#line 369 "mercury_compile_front_end.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_front_end__Globals_15, (MR_Integer) 327, &top_level__mercury_compile_front_end__UseOptFiles_20);
    }
#line 370 "mercury_compile_front_end.m"
    {
#line 370 "mercury_compile_front_end.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_front_end__Globals_15, (MR_Integer) 414, &top_level__mercury_compile_front_end__Termination_21);
    }
#line 371 "mercury_compile_front_end.m"
    {
#line 371 "mercury_compile_front_end.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_front_end__Globals_15, (MR_Integer) 421, &top_level__mercury_compile_front_end__Termination2_22);
    }
#line 372 "mercury_compile_front_end.m"
    {
#line 372 "mercury_compile_front_end.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_front_end__Globals_15, (MR_Integer) 406, &top_level__mercury_compile_front_end__SharingAnalysis_23);
    }
#line 374 "mercury_compile_front_end.m"
    {
#line 374 "mercury_compile_front_end.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_front_end__Globals_15, (MR_Integer) 408, &top_level__mercury_compile_front_end__ReuseAnalysis_24);
    }
#line 376 "mercury_compile_front_end.m"
    {
#line 376 "mercury_compile_front_end.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_front_end__Globals_15, (MR_Integer) 429, &top_level__mercury_compile_front_end__ExceptionAnalysis_25);
    }
#line 378 "mercury_compile_front_end.m"
    {
#line 378 "mercury_compile_front_end.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_front_end__Globals_15, (MR_Integer) 430, &top_level__mercury_compile_front_end__ClosureAnalysis_26);
    }
#line 380 "mercury_compile_front_end.m"
    {
#line 380 "mercury_compile_front_end.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_front_end__Globals_15, (MR_Integer) 393, &top_level__mercury_compile_front_end__TrailingAnalysis_27);
    }
#line 382 "mercury_compile_front_end.m"
    {
#line 382 "mercury_compile_front_end.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_front_end__Globals_15, (MR_Integer) 396, &top_level__mercury_compile_front_end__TablingAnalysis_28);
    }
#line 424 "mercury_compile_front_end.m"
    if ((top_level__mercury_compile_front_end__MakeOptInt_10 == (MR_Integer) 0))
#line 425 "mercury_compile_front_end.m"
      {
#line 428 "mercury_compile_front_end.m"
        top_level__mercury_compile_front_end__succeeded = (top_level__mercury_compile_front_end__IntermodOpt_16 == (MR_Integer) 1);
#line 3199 "top_level.mercury_compile_front_end.c"
        if (top_level__mercury_compile_front_end__succeeded)
#line 450 "mercury_compile_front_end.m"
          {
#line 450 "mercury_compile_front_end.m"
            transform_hlds__intermod__adjust_pred_import_status_2_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_36, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_37);
          }
#line 3206 "top_level.mercury_compile_front_end.c"
        else
#line 3208 "top_level.mercury_compile_front_end.c"
          {
#line 430 "mercury_compile_front_end.m"
            top_level__mercury_compile_front_end__succeeded = (top_level__mercury_compile_front_end__IntermodAnalysis_17 == (MR_Integer) 1);
#line 3212 "top_level.mercury_compile_front_end.c"
            if (top_level__mercury_compile_front_end__succeeded)
#line 450 "mercury_compile_front_end.m"
              {
#line 450 "mercury_compile_front_end.m"
                transform_hlds__intermod__adjust_pred_import_status_2_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_36, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_37);
              }
#line 3219 "top_level.mercury_compile_front_end.c"
            else
#line 3221 "top_level.mercury_compile_front_end.c"
              {
#line 432 "mercury_compile_front_end.m"
                top_level__mercury_compile_front_end__succeeded = (top_level__mercury_compile_front_end__UseOptFiles_20 == (MR_Integer) 1);
#line 3225 "top_level.mercury_compile_front_end.c"
                if (top_level__mercury_compile_front_end__succeeded)
#line 3227 "top_level.mercury_compile_front_end.c"
                  {
#line 3229 "top_level.mercury_compile_front_end.c"
                    MR_Word top_level__mercury_compile_front_end__Found_33;
#line 3231 "top_level.mercury_compile_front_end.c"
                    MR_Word top_level__mercury_compile_front_end__ModuleName_78;
#line 3233 "top_level.mercury_compile_front_end.c"
                    MR_String top_level__mercury_compile_front_end__OptName_79;

#line 433 "mercury_compile_front_end.m"
                    {
#line 433 "mercury_compile_front_end.m"
                      hlds__hlds_module__module_info_get_name_2_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_36, &top_level__mercury_compile_front_end__ModuleName_78);
                    }
#line 434 "mercury_compile_front_end.m"
                    {
#line 434 "mercury_compile_front_end.m"
                      parse_tree__file_names__module_name_to_search_file_name_6_p_0(top_level__mercury_compile_front_end__Globals_15, top_level__mercury_compile_front_end__ModuleName_78, (MR_String) ".opt", &top_level__mercury_compile_front_end__OptName_79);
                    }
#line 436 "mercury_compile_front_end.m"
                    {
#line 436 "mercury_compile_front_end.m"
                      libs__file_util__search_for_file_returning_dir_6_p_0((MR_Integer) 1, top_level__mercury_compile_front_end__IntermodDirs_19, top_level__mercury_compile_front_end__OptName_79, &top_level__mercury_compile_front_end__Found_33);
                    }
#line 3251 "top_level.mercury_compile_front_end.c"
                    if (((MR_tag((MR_Word) top_level__mercury_compile_front_end__Found_33)) == (MR_mktag((MR_Integer) 1))))
#line 452 "mercury_compile_front_end.m"
                      *top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_37 = top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_36;
#line 3255 "top_level.mercury_compile_front_end.c"
                    else
#line 450 "mercury_compile_front_end.m"
                      {
#line 450 "mercury_compile_front_end.m"
                        transform_hlds__intermod__adjust_pred_import_status_2_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_36, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_37);
                      }
#line 3262 "top_level.mercury_compile_front_end.c"
                  }
#line 3264 "top_level.mercury_compile_front_end.c"
                else
#line 452 "mercury_compile_front_end.m"
                  *top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_37 = top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_36;
#line 3268 "top_level.mercury_compile_front_end.c"
              }
#line 3270 "top_level.mercury_compile_front_end.c"
          }
#line 452 "mercury_compile_front_end.m"
        *top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_39 = top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_0_38;
#line 452 "mercury_compile_front_end.m"
        *top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_41 = top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_40;
#line 425 "mercury_compile_front_end.m"
      }
#line 424 "mercury_compile_front_end.m"
    else
#line 384 "mercury_compile_front_end.m"
      {
#line 384 "mercury_compile_front_end.m"
        MR_Word top_level__mercury_compile_front_end__ModuleName_30;
#line 384 "mercury_compile_front_end.m"
        MR_String top_level__mercury_compile_front_end__OptName_31;
#line 384 "mercury_compile_front_end.m"
        MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_62_62;

#line 385 "mercury_compile_front_end.m"
        {
#line 385 "mercury_compile_front_end.m"
          transform_hlds__intermod__write_opt_file_4_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_36, &top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_62_62);
        }
#line 395 "mercury_compile_front_end.m"
        top_level__mercury_compile_front_end__succeeded = (top_level__mercury_compile_front_end__IntermodAnalysis_17 == (MR_Integer) 0);
#line 395 "mercury_compile_front_end.m"
        if (top_level__mercury_compile_front_end__succeeded)
#line 395 "mercury_compile_front_end.m"
          {
#line 396 "mercury_compile_front_end.m"
            top_level__mercury_compile_front_end__succeeded = (top_level__mercury_compile_front_end__IntermodArgs_18 == (MR_Integer) 1);
#line 397 "mercury_compile_front_end.m"
            if (!(top_level__mercury_compile_front_end__succeeded))
#line 397 "mercury_compile_front_end.m"
              {
#line 397 "mercury_compile_front_end.m"
                top_level__mercury_compile_front_end__succeeded = (top_level__mercury_compile_front_end__Termination_21 == (MR_Integer) 1);
#line 397 "mercury_compile_front_end.m"
                if (!(top_level__mercury_compile_front_end__succeeded))
#line 397 "mercury_compile_front_end.m"
                  {
#line 398 "mercury_compile_front_end.m"
                    top_level__mercury_compile_front_end__succeeded = (top_level__mercury_compile_front_end__Termination2_22 == (MR_Integer) 1);
#line 397 "mercury_compile_front_end.m"
                    if (!(top_level__mercury_compile_front_end__succeeded))
#line 397 "mercury_compile_front_end.m"
                      {
#line 399 "mercury_compile_front_end.m"
                        top_level__mercury_compile_front_end__succeeded = (top_level__mercury_compile_front_end__ExceptionAnalysis_25 == (MR_Integer) 1);
#line 397 "mercury_compile_front_end.m"
                        if (!(top_level__mercury_compile_front_end__succeeded))
#line 397 "mercury_compile_front_end.m"
                          {
#line 400 "mercury_compile_front_end.m"
                            top_level__mercury_compile_front_end__succeeded = (top_level__mercury_compile_front_end__TrailingAnalysis_27 == (MR_Integer) 1);
#line 397 "mercury_compile_front_end.m"
                            if (!(top_level__mercury_compile_front_end__succeeded))
#line 397 "mercury_compile_front_end.m"
                              {
#line 401 "mercury_compile_front_end.m"
                                top_level__mercury_compile_front_end__succeeded = (top_level__mercury_compile_front_end__TablingAnalysis_28 == (MR_Integer) 1);
#line 397 "mercury_compile_front_end.m"
                                if (!(top_level__mercury_compile_front_end__succeeded))
#line 397 "mercury_compile_front_end.m"
                                  {
#line 402 "mercury_compile_front_end.m"
                                    top_level__mercury_compile_front_end__succeeded = (top_level__mercury_compile_front_end__ClosureAnalysis_26 == (MR_Integer) 1);
#line 397 "mercury_compile_front_end.m"
                                    if (!(top_level__mercury_compile_front_end__succeeded))
#line 397 "mercury_compile_front_end.m"
                                      {
#line 403 "mercury_compile_front_end.m"
                                        top_level__mercury_compile_front_end__succeeded = (top_level__mercury_compile_front_end__SharingAnalysis_23 == (MR_Integer) 1);
#line 397 "mercury_compile_front_end.m"
                                        if (!(top_level__mercury_compile_front_end__succeeded))
#line 404 "mercury_compile_front_end.m"
                                          top_level__mercury_compile_front_end__succeeded = (top_level__mercury_compile_front_end__ReuseAnalysis_24 == (MR_Integer) 1);
#line 397 "mercury_compile_front_end.m"
                                      }
#line 397 "mercury_compile_front_end.m"
                                  }
#line 397 "mercury_compile_front_end.m"
                              }
#line 397 "mercury_compile_front_end.m"
                          }
#line 397 "mercury_compile_front_end.m"
                      }
#line 397 "mercury_compile_front_end.m"
                  }
#line 397 "mercury_compile_front_end.m"
              }
#line 395 "mercury_compile_front_end.m"
          }
#line 416 "mercury_compile_front_end.m"
        if (top_level__mercury_compile_front_end__succeeded)
#line 408 "mercury_compile_front_end.m"
          {
#line 408 "mercury_compile_front_end.m"
            MR_Word top_level__mercury_compile_front_end__FoundModeError_29;
#line 408 "mercury_compile_front_end.m"
            MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_64_64;

#line 407 "mercury_compile_front_end.m"
            {
#line 407 "mercury_compile_front_end.m"
              top_level__mercury_compile_front_end__frontend_pass_by_phases_9_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_62_62, &top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_64_64, &top_level__mercury_compile_front_end__FoundModeError_29, top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_0_38, top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_39, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_40, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_41);
            }
#line 412 "mercury_compile_front_end.m"
            if ((top_level__mercury_compile_front_end__FoundModeError_29 == (MR_Integer) 0))
#line 411 "mercury_compile_front_end.m"
              {
#line 411 "mercury_compile_front_end.m"
                top_level__mercury_compile_middle_passes__middle_pass_for_opt_file_4_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_64_64, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_37);
              }
#line 412 "mercury_compile_front_end.m"
            else
#line 413 "mercury_compile_front_end.m"
              {
#line 414 "mercury_compile_front_end.m"
                {
#line 414 "mercury_compile_front_end.m"
                  mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
                }
#line 414 "mercury_compile_front_end.m"
                *top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_37 = top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_64_64;
#line 413 "mercury_compile_front_end.m"
              }
#line 408 "mercury_compile_front_end.m"
          }
#line 416 "mercury_compile_front_end.m"
        else
#line 417 "mercury_compile_front_end.m"
          {
#line 417 "mercury_compile_front_end.m"
            *top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_41 = top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_40;
#line 417 "mercury_compile_front_end.m"
            *top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_39 = top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_0_38;
#line 417 "mercury_compile_front_end.m"
            *top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_37 = top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_62_62;
#line 417 "mercury_compile_front_end.m"
          }
#line 419 "mercury_compile_front_end.m"
        {
#line 419 "mercury_compile_front_end.m"
          hlds__hlds_module__module_info_get_name_2_p_0(*top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_37, &top_level__mercury_compile_front_end__ModuleName_30);
        }
#line 420 "mercury_compile_front_end.m"
        {
#line 420 "mercury_compile_front_end.m"
          parse_tree__file_names__module_name_to_file_name_7_p_0(top_level__mercury_compile_front_end__Globals_15, top_level__mercury_compile_front_end__ModuleName_30, (MR_String) ".opt", (MR_Integer) 0, &top_level__mercury_compile_front_end__OptName_31);
        }
#line 422 "mercury_compile_front_end.m"
        {
#line 422 "mercury_compile_front_end.m"
          parse_tree__module_cmds__update_interface_4_p_0(top_level__mercury_compile_front_end__Globals_15, top_level__mercury_compile_front_end__OptName_31);
        }
#line 423 "mercury_compile_front_end.m"
        {
#line 423 "mercury_compile_front_end.m"
          parse_tree__module_cmds__touch_interface_datestamp_5_p_0(top_level__mercury_compile_front_end__Globals_15, top_level__mercury_compile_front_end__ModuleName_30, (MR_String) ".optdate");
#line 423 "mercury_compile_front_end.m"
          return;
        }
#line 384 "mercury_compile_front_end.m"
      }
#line 361 "mercury_compile_front_end.m"
  }
#line 357 "mercury_compile_front_end.m"
}

#line 167 "mercury_compile_front_end.m"
static void MR_CALL 
top_level__mercury_compile_front_end__frontend_pass_after_typeclass_check_11_p_0(
#line 167 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__FoundUndefModeError_12,
#line 167 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_FoundError_0_39,
#line 167 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_FoundError_40,
#line 167 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_41,
#line 167 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_42,
#line 167 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_0_43,
#line 167 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_44,
#line 167 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_45,
#line 167 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_46)
#line 167 "mercury_compile_front_end.m"
{
#line 172 "mercury_compile_front_end.m"
  {
#line 172 "mercury_compile_front_end.m"
    MR_bool top_level__mercury_compile_front_end__succeeded;
#line 172 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__TypeCtorInfo_154_154;
#line 172 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__Globals_18;
#line 172 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__Verbose_19;
#line 172 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__Stats_20;
#line 172 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__IntermodOpt_21;
#line 172 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__IntermodAnalysis_22;
#line 172 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__UseOptFiles_23;
#line 172 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__MakeOptInt_24;
#line 172 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__TypeCheckConstraints_25;
#line 172 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__WarnInstsWithNoMatchingType_26;
#line 172 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__TypeCheckSpecs_27;
#line 172 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__ExceededTypeCheckIterationLimit_28;
#line 172 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__FoundTypeError_29;
#line 172 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_62_62;
#line 172 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_63_63;
#line 172 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_69_69;
#line 172 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_78_78;
#line 172 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_79_79;
#line 172 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_85_85;
#line 172 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_87_87;
#line 172 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_88_88;
#line 172 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_95_95;
#line 172 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_96_96;
#line 172 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_97_97;
#line 172 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_98_98;
#line 172 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_107_107;

#line 173 "mercury_compile_front_end.m"
    {
#line 173 "mercury_compile_front_end.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_41, &top_level__mercury_compile_front_end__Globals_18);
    }
#line 174 "mercury_compile_front_end.m"
    {
#line 174 "mercury_compile_front_end.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_front_end__Globals_18, (MR_Integer) 44, &top_level__mercury_compile_front_end__Verbose_19);
    }
#line 175 "mercury_compile_front_end.m"
    {
#line 175 "mercury_compile_front_end.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_front_end__Globals_18, (MR_Integer) 54, &top_level__mercury_compile_front_end__Stats_20);
    }
#line 176 "mercury_compile_front_end.m"
    {
#line 176 "mercury_compile_front_end.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_front_end__Globals_18, (MR_Integer) 325, &top_level__mercury_compile_front_end__IntermodOpt_21);
    }
#line 177 "mercury_compile_front_end.m"
    {
#line 177 "mercury_compile_front_end.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_front_end__Globals_18, (MR_Integer) 330, &top_level__mercury_compile_front_end__IntermodAnalysis_22);
    }
#line 179 "mercury_compile_front_end.m"
    {
#line 179 "mercury_compile_front_end.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_front_end__Globals_18, (MR_Integer) 327, &top_level__mercury_compile_front_end__UseOptFiles_23);
    }
#line 180 "mercury_compile_front_end.m"
    {
#line 180 "mercury_compile_front_end.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_front_end__Globals_18, (MR_Integer) 85, &top_level__mercury_compile_front_end__MakeOptInt_24);
    }
#line 182 "mercury_compile_front_end.m"
    {
#line 182 "mercury_compile_front_end.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_front_end__Globals_18, (MR_Integer) 297, &top_level__mercury_compile_front_end__TypeCheckConstraints_25);
    }
#line 185 "mercury_compile_front_end.m"
    top_level__mercury_compile_front_end__succeeded = (top_level__mercury_compile_front_end__IntermodOpt_21 == (MR_Integer) 1);
#line 186 "mercury_compile_front_end.m"
    if (!(top_level__mercury_compile_front_end__succeeded))
#line 186 "mercury_compile_front_end.m"
      {
#line 186 "mercury_compile_front_end.m"
        top_level__mercury_compile_front_end__succeeded = (top_level__mercury_compile_front_end__IntermodAnalysis_22 == (MR_Integer) 1);
#line 186 "mercury_compile_front_end.m"
        if (!(top_level__mercury_compile_front_end__succeeded))
#line 187 "mercury_compile_front_end.m"
          top_level__mercury_compile_front_end__succeeded = (top_level__mercury_compile_front_end__UseOptFiles_23 == (MR_Integer) 1);
#line 186 "mercury_compile_front_end.m"
      }
#line 188 "mercury_compile_front_end.m"
    if (top_level__mercury_compile_front_end__succeeded)
#line 189 "mercury_compile_front_end.m"
      top_level__mercury_compile_front_end__succeeded = (top_level__mercury_compile_front_end__MakeOptInt_24 == (MR_Integer) 0);
#line 201 "mercury_compile_front_end.m"
    if (top_level__mercury_compile_front_end__succeeded)
#line 195 "mercury_compile_front_end.m"
      {
#line 195 "mercury_compile_front_end.m"
        MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_56_56;
#line 195 "mercury_compile_front_end.m"
        MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_57_57;
#line 195 "mercury_compile_front_end.m"
        MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_61_61;

#line 195 "mercury_compile_front_end.m"
        {
#line 195 "mercury_compile_front_end.m"
          hlds__hlds_error_util__maybe_write_out_errors_8_p_0(top_level__mercury_compile_front_end__Verbose_19, top_level__mercury_compile_front_end__Globals_18, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_41, &top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_56_56, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_45, &top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_57_57);
        }
#line 196 "mercury_compile_front_end.m"
        {
#line 196 "mercury_compile_front_end.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_front_end__Verbose_19, (MR_String) "% Eliminating dead predicates... ");
        }
#line 197 "mercury_compile_front_end.m"
        {
#line 197 "mercury_compile_front_end.m"
          transform_hlds__dead_proc_elim__dead_pred_elim_2_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_56_56, &top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_61_61);
        }
#line 198 "mercury_compile_front_end.m"
        {
#line 198 "mercury_compile_front_end.m"
          hlds__hlds_error_util__maybe_write_out_errors_8_p_0(top_level__mercury_compile_front_end__Verbose_19, top_level__mercury_compile_front_end__Globals_18, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_61_61, &top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_62_62, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_57_57, &top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_63_63);
        }
#line 199 "mercury_compile_front_end.m"
        {
#line 199 "mercury_compile_front_end.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_front_end__Verbose_19, (MR_String) "done.\n");
        }
#line 200 "mercury_compile_front_end.m"
        {
#line 200 "mercury_compile_front_end.m"
          hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_62_62, (MR_Integer) 10, (MR_String) "dead_pred_elim", top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_0_43, &top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_69_69);
        }
#line 195 "mercury_compile_front_end.m"
      }
#line 201 "mercury_compile_front_end.m"
    else
#line 202 "mercury_compile_front_end.m"
      {
#line 202 "mercury_compile_front_end.m"
        top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_63_63 = top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_45;
#line 202 "mercury_compile_front_end.m"
        top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_69_69 = top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_0_43;
#line 202 "mercury_compile_front_end.m"
        top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_62_62 = top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_41;
#line 202 "mercury_compile_front_end.m"
      }
#line 205 "mercury_compile_front_end.m"
    {
#line 205 "mercury_compile_front_end.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_front_end__Globals_18, (MR_Integer) 35, &top_level__mercury_compile_front_end__WarnInstsWithNoMatchingType_26);
    }
#line 217 "mercury_compile_front_end.m"
    if ((top_level__mercury_compile_front_end__WarnInstsWithNoMatchingType_26 == (MR_Integer) 0))
#line 218 "mercury_compile_front_end.m"
      {
#line 218 "mercury_compile_front_end.m"
        top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_78_78 = top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_62_62;
#line 218 "mercury_compile_front_end.m"
        top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_85_85 = top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_69_69;
#line 218 "mercury_compile_front_end.m"
        top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_79_79 = top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_63_63;
#line 218 "mercury_compile_front_end.m"
      }
#line 217 "mercury_compile_front_end.m"
    else
#line 208 "mercury_compile_front_end.m"
      {
#line 208 "mercury_compile_front_end.m"
        MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_72_72;
#line 208 "mercury_compile_front_end.m"
        MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_73_73;
#line 208 "mercury_compile_front_end.m"
        MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_77_77;

#line 209 "mercury_compile_front_end.m"
        {
#line 209 "mercury_compile_front_end.m"
          hlds__hlds_error_util__maybe_write_out_errors_8_p_0(top_level__mercury_compile_front_end__Verbose_19, top_level__mercury_compile_front_end__Globals_18, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_62_62, &top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_72_72, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_63_63, &top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_73_73);
        }
#line 210 "mercury_compile_front_end.m"
        {
#line 210 "mercury_compile_front_end.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_front_end__Verbose_19, (MR_String) "% Checking that insts have matching types... ");
        }
#line 212 "mercury_compile_front_end.m"
        {
#line 212 "mercury_compile_front_end.m"
          check_hlds__inst_check__check_insts_have_matching_types_3_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_72_72, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_73_73, &top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_77_77);
        }
#line 213 "mercury_compile_front_end.m"
        {
#line 213 "mercury_compile_front_end.m"
          hlds__hlds_error_util__maybe_write_out_errors_8_p_0(top_level__mercury_compile_front_end__Verbose_19, top_level__mercury_compile_front_end__Globals_18, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_72_72, &top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_78_78, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_77_77, &top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_79_79);
        }
#line 214 "mercury_compile_front_end.m"
        {
#line 214 "mercury_compile_front_end.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_front_end__Verbose_19, (MR_String) "done.\n");
        }
#line 215 "mercury_compile_front_end.m"
        {
#line 215 "mercury_compile_front_end.m"
          hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_78_78, (MR_Integer) 12, (MR_String) "warn_insts_without_matching_type", top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_69_69, &top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_85_85);
        }
#line 208 "mercury_compile_front_end.m"
      }
#line 222 "mercury_compile_front_end.m"
    {
#line 222 "mercury_compile_front_end.m"
      hlds__hlds_error_util__maybe_write_out_errors_8_p_0(top_level__mercury_compile_front_end__Verbose_19, top_level__mercury_compile_front_end__Globals_18, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_78_78, &top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_87_87, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_79_79, &top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_88_88);
    }
#line 223 "mercury_compile_front_end.m"
    {
#line 223 "mercury_compile_front_end.m"
      libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_front_end__Verbose_19, (MR_String) "% Type-checking...\n");
    }
#line 224 "mercury_compile_front_end.m"
    {
#line 224 "mercury_compile_front_end.m"
      libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_front_end__Verbose_19, (MR_String) "% Type-checking clauses...\n");
    }
#line 229 "mercury_compile_front_end.m"
    if ((top_level__mercury_compile_front_end__TypeCheckConstraints_25 == (MR_Integer) 0))
#line 231 "mercury_compile_front_end.m"
      {
#line 231 "mercury_compile_front_end.m"
        check_hlds__typecheck__typecheck_module_4_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_87_87, &top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_95_95, &top_level__mercury_compile_front_end__TypeCheckSpecs_27, &top_level__mercury_compile_front_end__ExceededTypeCheckIterationLimit_28);
      }
#line 229 "mercury_compile_front_end.m"
    else
#line 226 "mercury_compile_front_end.m"
      {
#line 227 "mercury_compile_front_end.m"
        {
#line 227 "mercury_compile_front_end.m"
          check_hlds__type_constraints__typecheck_constraints_3_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_87_87, &top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_95_95, &top_level__mercury_compile_front_end__TypeCheckSpecs_27);
        }
#line 228 "mercury_compile_front_end.m"
        top_level__mercury_compile_front_end__ExceededTypeCheckIterationLimit_28 = (MR_Integer) 0;
#line 226 "mercury_compile_front_end.m"
      }
#line 3729 "top_level.mercury_compile_front_end.c"
    top_level__mercury_compile_front_end__TypeCtorInfo_154_154 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0;
#line 234 "mercury_compile_front_end.m"
    {
#line 234 "mercury_compile_front_end.m"
      top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_96_96 = mercury__list__f_43_43_2_f_0(top_level__mercury_compile_front_end__TypeCtorInfo_154_154, top_level__mercury_compile_front_end__TypeCheckSpecs_27, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_88_88);
    }
#line 235 "mercury_compile_front_end.m"
    {
#line 235 "mercury_compile_front_end.m"
      hlds__hlds_error_util__maybe_write_out_errors_8_p_0(top_level__mercury_compile_front_end__Verbose_19, top_level__mercury_compile_front_end__Globals_18, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_95_95, &top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_97_97, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_96_96, &top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_98_98);
    }
#line 236 "mercury_compile_front_end.m"
    {
#line 236 "mercury_compile_front_end.m"
      top_level__mercury_compile_front_end__FoundTypeError_29 = parse_tree__error_util__contains_errors_2_f_0(top_level__mercury_compile_front_end__Globals_18, top_level__mercury_compile_front_end__TypeCheckSpecs_27);
    }
#line 241 "mercury_compile_front_end.m"
    if ((top_level__mercury_compile_front_end__FoundTypeError_29 == (MR_Integer) 0))
#line 242 "mercury_compile_front_end.m"
      {
#line 243 "mercury_compile_front_end.m"
        {
#line 243 "mercury_compile_front_end.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_front_end__Verbose_19, (MR_String) "% Program is type-correct.\n");
        }
#line 242 "mercury_compile_front_end.m"
      }
#line 241 "mercury_compile_front_end.m"
    else
#line 238 "mercury_compile_front_end.m"
      {
#line 239 "mercury_compile_front_end.m"
        {
#line 239 "mercury_compile_front_end.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_front_end__Verbose_19, (MR_String) "% Program contains type error(s).\n");
        }
#line 238 "mercury_compile_front_end.m"
      }
#line 246 "mercury_compile_front_end.m"
    {
#line 246 "mercury_compile_front_end.m"
      libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_front_end__Stats_20);
    }
#line 247 "mercury_compile_front_end.m"
    {
#line 247 "mercury_compile_front_end.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_97_97, (MR_Integer) 15, (MR_String) "typecheck", top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_85_85, &top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_107_107);
    }
#line 257 "mercury_compile_front_end.m"
    top_level__mercury_compile_front_end__succeeded = (top_level__mercury_compile_front_end__FoundUndefModeError_12 == (MR_Integer) 1);
#line 263 "mercury_compile_front_end.m"
    if (top_level__mercury_compile_front_end__succeeded)
#line 258 "mercury_compile_front_end.m"
      {
#line 258 "mercury_compile_front_end.m"
        *top_level__mercury_compile_front_end__STATE_VARIABLE_FoundError_40 = (MR_Integer) 1;
#line 259 "mercury_compile_front_end.m"
        {
#line 259 "mercury_compile_front_end.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_front_end__Verbose_19, (MR_String) "% Program contains undefined inst or undefined mode error(s).\n");
        }
#line 262 "mercury_compile_front_end.m"
        {
#line 262 "mercury_compile_front_end.m"
          mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
        }
#line 262 "mercury_compile_front_end.m"
        *top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_46 = top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_98_98;
#line 262 "mercury_compile_front_end.m"
        *top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_44 = top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_107_107;
#line 262 "mercury_compile_front_end.m"
        *top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_42 = top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_97_97;
#line 258 "mercury_compile_front_end.m"
      }
#line 263 "mercury_compile_front_end.m"
    else
#line 269 "mercury_compile_front_end.m"
      {
#line 263 "mercury_compile_front_end.m"
        top_level__mercury_compile_front_end__succeeded = (top_level__mercury_compile_front_end__ExceededTypeCheckIterationLimit_28 == (MR_Integer) 1);
#line 269 "mercury_compile_front_end.m"
        if (top_level__mercury_compile_front_end__succeeded)
#line 267 "mercury_compile_front_end.m"
          {
#line 267 "mercury_compile_front_end.m"
            *top_level__mercury_compile_front_end__STATE_VARIABLE_FoundError_40 = (MR_Integer) 1;
#line 268 "mercury_compile_front_end.m"
            {
#line 268 "mercury_compile_front_end.m"
              mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
            }
#line 268 "mercury_compile_front_end.m"
            *top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_46 = top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_98_98;
#line 268 "mercury_compile_front_end.m"
            *top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_44 = top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_107_107;
#line 268 "mercury_compile_front_end.m"
            *top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_42 = top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_97_97;
#line 267 "mercury_compile_front_end.m"
          }
#line 269 "mercury_compile_front_end.m"
        else
#line 270 "mercury_compile_front_end.m"
          {
#line 270 "mercury_compile_front_end.m"
            MR_Word top_level__mercury_compile_front_end__MissingTypeDefnSpecs_30;
#line 270 "mercury_compile_front_end.m"
            MR_Word top_level__mercury_compile_front_end__SomeMissingTypeDefns_31;
#line 270 "mercury_compile_front_end.m"
            MR_Integer top_level__mercury_compile_front_end__NumPostTypeCheckErrors_32;
#line 270 "mercury_compile_front_end.m"
            MR_Word top_level__mercury_compile_front_end__PostTypeCheckAlwaysSpecs_33;
#line 270 "mercury_compile_front_end.m"
            MR_Word top_level__mercury_compile_front_end__PostTypeCheckNoTypeErrorSpecs_34;
#line 270 "mercury_compile_front_end.m"
            MR_Word top_level__mercury_compile_front_end__PostTypeCheckErrors_36;
#line 270 "mercury_compile_front_end.m"
            MR_Word top_level__mercury_compile_front_end__TypecheckOnly_37;
#line 270 "mercury_compile_front_end.m"
            MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_119_119;
#line 270 "mercury_compile_front_end.m"
            MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_120_120;
#line 270 "mercury_compile_front_end.m"
            MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_122_122;
#line 270 "mercury_compile_front_end.m"
            MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_126_126;

#line 270 "mercury_compile_front_end.m"
            {
#line 270 "mercury_compile_front_end.m"
              check_hlds__post_typecheck__check_for_missing_type_defns_2_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_97_97, &top_level__mercury_compile_front_end__MissingTypeDefnSpecs_30);
            }
#line 271 "mercury_compile_front_end.m"
            {
#line 271 "mercury_compile_front_end.m"
              top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_119_119 = mercury__list__f_43_43_2_f_0(top_level__mercury_compile_front_end__TypeCtorInfo_154_154, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_98_98, top_level__mercury_compile_front_end__MissingTypeDefnSpecs_30);
            }
#line 272 "mercury_compile_front_end.m"
            {
#line 272 "mercury_compile_front_end.m"
              top_level__mercury_compile_front_end__SomeMissingTypeDefns_31 = parse_tree__error_util__contains_errors_2_f_0(top_level__mercury_compile_front_end__Globals_18, top_level__mercury_compile_front_end__MissingTypeDefnSpecs_30);
            }
#line 274 "mercury_compile_front_end.m"
            {
#line 274 "mercury_compile_front_end.m"
              check_hlds__post_typecheck__post_typecheck_finish_preds_5_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_97_97, &top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_120_120, &top_level__mercury_compile_front_end__NumPostTypeCheckErrors_32, &top_level__mercury_compile_front_end__PostTypeCheckAlwaysSpecs_33, &top_level__mercury_compile_front_end__PostTypeCheckNoTypeErrorSpecs_34);
            }
#line 286 "mercury_compile_front_end.m"
            if ((top_level__mercury_compile_front_end__FoundTypeError_29 == (MR_Integer) 0))
#line 282 "mercury_compile_front_end.m"
              {
#line 282 "mercury_compile_front_end.m"
                MR_Word top_level__mercury_compile_front_end__PostTypeCheckSpecs_35;

#line 283 "mercury_compile_front_end.m"
                {
#line 283 "mercury_compile_front_end.m"
                  top_level__mercury_compile_front_end__PostTypeCheckSpecs_35 = mercury__list__f_43_43_2_f_0(top_level__mercury_compile_front_end__TypeCtorInfo_154_154, top_level__mercury_compile_front_end__PostTypeCheckAlwaysSpecs_33, top_level__mercury_compile_front_end__PostTypeCheckNoTypeErrorSpecs_34);
                }
#line 285 "mercury_compile_front_end.m"
                {
#line 285 "mercury_compile_front_end.m"
                  top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_122_122 = mercury__list__f_43_43_2_f_0(top_level__mercury_compile_front_end__TypeCtorInfo_154_154, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_119_119, top_level__mercury_compile_front_end__PostTypeCheckSpecs_35);
                }
#line 282 "mercury_compile_front_end.m"
              }
#line 286 "mercury_compile_front_end.m"
            else
#line 288 "mercury_compile_front_end.m"
              {
#line 288 "mercury_compile_front_end.m"
                top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_122_122 = mercury__list__f_43_43_2_f_0(top_level__mercury_compile_front_end__TypeCtorInfo_154_154, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_119_119, top_level__mercury_compile_front_end__PostTypeCheckAlwaysSpecs_33);
              }
#line 291 "mercury_compile_front_end.m"
            top_level__mercury_compile_front_end__succeeded = (top_level__mercury_compile_front_end__SomeMissingTypeDefns_31 == (MR_Integer) 1);
#line 292 "mercury_compile_front_end.m"
            if (!(top_level__mercury_compile_front_end__succeeded))
#line 292 "mercury_compile_front_end.m"
              {
#line 292 "mercury_compile_front_end.m"
                top_level__mercury_compile_front_end__succeeded = (top_level__mercury_compile_front_end__NumPostTypeCheckErrors_32 > (MR_Integer) 0);
#line 292 "mercury_compile_front_end.m"
              }
#line 296 "mercury_compile_front_end.m"
            if (top_level__mercury_compile_front_end__succeeded)
#line 295 "mercury_compile_front_end.m"
              top_level__mercury_compile_front_end__PostTypeCheckErrors_36 = (MR_Integer) 1;
#line 296 "mercury_compile_front_end.m"
            else
#line 297 "mercury_compile_front_end.m"
              top_level__mercury_compile_front_end__PostTypeCheckErrors_36 = (MR_Integer) 0;
#line 299 "mercury_compile_front_end.m"
            {
#line 299 "mercury_compile_front_end.m"
              hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_120_120, (MR_Integer) 19, (MR_String) "post_typecheck", top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_107_107, &top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_126_126);
            }
#line 302 "mercury_compile_front_end.m"
            {
#line 302 "mercury_compile_front_end.m"
              libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_front_end__Globals_18, (MR_Integer) 95, &top_level__mercury_compile_front_end__TypecheckOnly_37);
            }
#line 306 "mercury_compile_front_end.m"
            if ((top_level__mercury_compile_front_end__TypecheckOnly_37 == (MR_Integer) 0))
#line 319 "mercury_compile_front_end.m"
              {
#line 309 "mercury_compile_front_end.m"
                top_level__mercury_compile_front_end__succeeded = (top_level__mercury_compile_front_end__FoundTypeError_29 == (MR_Integer) 1);
#line 310 "mercury_compile_front_end.m"
                if (!(top_level__mercury_compile_front_end__succeeded))
#line 310 "mercury_compile_front_end.m"
                  top_level__mercury_compile_front_end__succeeded = (top_level__mercury_compile_front_end__PostTypeCheckErrors_36 == (MR_Integer) 1);
#line 319 "mercury_compile_front_end.m"
                if (top_level__mercury_compile_front_end__succeeded)
#line 318 "mercury_compile_front_end.m"
                  {
#line 318 "mercury_compile_front_end.m"
                    *top_level__mercury_compile_front_end__STATE_VARIABLE_FoundError_40 = (MR_Integer) 1;
#line 318 "mercury_compile_front_end.m"
                    *top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_46 = top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_122_122;
#line 318 "mercury_compile_front_end.m"
                    *top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_44 = top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_126_126;
#line 318 "mercury_compile_front_end.m"
                    *top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_42 = top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_120_120;
#line 318 "mercury_compile_front_end.m"
                  }
#line 319 "mercury_compile_front_end.m"
                else
#line 320 "mercury_compile_front_end.m"
                  {
#line 320 "mercury_compile_front_end.m"
                    MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_130_130;
#line 320 "mercury_compile_front_end.m"
                    MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_131_131;
#line 320 "mercury_compile_front_end.m"
                    MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_135_135;
#line 320 "mercury_compile_front_end.m"
                    MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_137_137;
#line 320 "mercury_compile_front_end.m"
                    MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_138_138;
#line 320 "mercury_compile_front_end.m"
                    MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_142_142;
#line 320 "mercury_compile_front_end.m"
                    MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_144_144;
#line 320 "mercury_compile_front_end.m"
                    MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_145_145;
#line 320 "mercury_compile_front_end.m"
                    MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_146_146;

#line 320 "mercury_compile_front_end.m"
                    {
#line 320 "mercury_compile_front_end.m"
                      top_level__mercury_compile_front_end__puritycheck_8_p_0(top_level__mercury_compile_front_end__Verbose_19, top_level__mercury_compile_front_end__Stats_20, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_120_120, &top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_130_130, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_122_122, &top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_131_131);
                    }
#line 321 "mercury_compile_front_end.m"
                    {
#line 321 "mercury_compile_front_end.m"
                      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_130_130, (MR_Integer) 20, (MR_String) "puritycheck", top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_126_126, &top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_135_135);
                    }
#line 325 "mercury_compile_front_end.m"
                    {
#line 325 "mercury_compile_front_end.m"
                      top_level__mercury_compile_front_end__subst_implementation_defined_literals_8_p_0(top_level__mercury_compile_front_end__Verbose_19, top_level__mercury_compile_front_end__Stats_20, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_130_130, &top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_137_137, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_131_131, &top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_138_138);
                    }
#line 327 "mercury_compile_front_end.m"
                    {
#line 327 "mercury_compile_front_end.m"
                      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_137_137, (MR_Integer) 25, (MR_String) "implementation_defined_literals", top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_135_135, &top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_142_142);
                    }
#line 332 "mercury_compile_front_end.m"
                    top_level__mercury_compile_front_end__succeeded = (top_level__mercury_compile_front_end__STATE_VARIABLE_FoundError_0_39 == (MR_Integer) 0);
#line 332 "mercury_compile_front_end.m"
                    if (top_level__mercury_compile_front_end__succeeded)
#line 333 "mercury_compile_front_end.m"
                      top_level__mercury_compile_front_end__succeeded = (top_level__mercury_compile_front_end__FoundUndefModeError_12 == (MR_Integer) 0);
#line 337 "mercury_compile_front_end.m"
                    if (top_level__mercury_compile_front_end__succeeded)
#line 335 "mercury_compile_front_end.m"
                      {
#line 335 "mercury_compile_front_end.m"
                        top_level__mercury_compile_front_end__maybe_write_optfile_9_p_0(top_level__mercury_compile_front_end__MakeOptInt_24, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_137_137, &top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_144_144, top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_142_142, &top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_145_145, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_138_138, &top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_146_146);
                      }
#line 337 "mercury_compile_front_end.m"
                    else
#line 338 "mercury_compile_front_end.m"
                      {
#line 338 "mercury_compile_front_end.m"
                        top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_146_146 = top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_138_138;
#line 338 "mercury_compile_front_end.m"
                        top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_145_145 = top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_142_142;
#line 338 "mercury_compile_front_end.m"
                        top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_144_144 = top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_137_137;
#line 338 "mercury_compile_front_end.m"
                      }
#line 343 "mercury_compile_front_end.m"
                    if ((top_level__mercury_compile_front_end__MakeOptInt_24 == (MR_Integer) 0))
#line 344 "mercury_compile_front_end.m"
                      {
#line 344 "mercury_compile_front_end.m"
                        MR_Word top_level__mercury_compile_front_end__FoundModeOrDetError_38;

#line 347 "mercury_compile_front_end.m"
                        {
#line 347 "mercury_compile_front_end.m"
                          top_level__mercury_compile_front_end__frontend_pass_by_phases_9_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_144_144, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_42, &top_level__mercury_compile_front_end__FoundModeOrDetError_38, top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_145_145, top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_44, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_146_146, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_46);
                        }
#line 349 "mercury_compile_front_end.m"
                        {
#line 349 "mercury_compile_front_end.m"
                          *top_level__mercury_compile_front_end__STATE_VARIABLE_FoundError_40 = mercury__bool__or_2_f_0(top_level__mercury_compile_front_end__STATE_VARIABLE_FoundError_0_39, top_level__mercury_compile_front_end__FoundModeOrDetError_38);
                        }
#line 344 "mercury_compile_front_end.m"
                      }
#line 343 "mercury_compile_front_end.m"
                    else
#line 342 "mercury_compile_front_end.m"
                      {
#line 342 "mercury_compile_front_end.m"
                        *top_level__mercury_compile_front_end__STATE_VARIABLE_FoundError_40 = top_level__mercury_compile_front_end__STATE_VARIABLE_FoundError_0_39;
#line 342 "mercury_compile_front_end.m"
                        *top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_42 = top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_144_144;
#line 342 "mercury_compile_front_end.m"
                        *top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_44 = top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_145_145;
#line 342 "mercury_compile_front_end.m"
                        *top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_46 = top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_146_146;
#line 342 "mercury_compile_front_end.m"
                      }
#line 320 "mercury_compile_front_end.m"
                  }
#line 319 "mercury_compile_front_end.m"
              }
#line 306 "mercury_compile_front_end.m"
            else
#line 304 "mercury_compile_front_end.m"
              {
#line 305 "mercury_compile_front_end.m"
                {
#line 305 "mercury_compile_front_end.m"
                  *top_level__mercury_compile_front_end__STATE_VARIABLE_FoundError_40 = mercury__bool__or_2_f_0(top_level__mercury_compile_front_end__STATE_VARIABLE_FoundError_0_39, top_level__mercury_compile_front_end__PostTypeCheckErrors_36);
                }
#line 305 "mercury_compile_front_end.m"
                *top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_42 = top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_120_120;
#line 305 "mercury_compile_front_end.m"
                *top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_44 = top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_126_126;
#line 305 "mercury_compile_front_end.m"
                *top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_46 = top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_122_122;
#line 304 "mercury_compile_front_end.m"
              }
#line 270 "mercury_compile_front_end.m"
          }
#line 269 "mercury_compile_front_end.m"
      }
#line 172 "mercury_compile_front_end.m"
  }
#line 167 "mercury_compile_front_end.m"
}

#line 990 "mercury_compile_front_end.m"
static void MR_CALL 
top_level__mercury_compile_front_end__maybe_simplify_10_p_0_1(
#line 990 "mercury_compile_front_end.m"
  MR_Box top_level__mercury_compile_front_end__closure_arg,
#line 990 "mercury_compile_front_end.m"
  MR_Box top_level__mercury_compile_front_end__wrapper_arg_1,
#line 990 "mercury_compile_front_end.m"
  MR_Box top_level__mercury_compile_front_end__wrapper_arg_2,
#line 990 "mercury_compile_front_end.m"
  MR_Box * top_level__mercury_compile_front_end__wrapper_arg_3,
#line 990 "mercury_compile_front_end.m"
  MR_Box top_level__mercury_compile_front_end__wrapper_arg_4,
#line 990 "mercury_compile_front_end.m"
  MR_Box * top_level__mercury_compile_front_end__wrapper_arg_5,
#line 990 "mercury_compile_front_end.m"
  MR_Box top_level__mercury_compile_front_end__wrapper_arg_6,
#line 990 "mercury_compile_front_end.m"
  MR_Box * top_level__mercury_compile_front_end__wrapper_arg_7)
#line 990 "mercury_compile_front_end.m"
{
#line 990 "mercury_compile_front_end.m"
  {
#line 990 "mercury_compile_front_end.m"
    MR_Box top_level__mercury_compile_front_end__closure = top_level__mercury_compile_front_end__closure_arg;
#line 990 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__conv2_HeadVar__4_4;
#line 990 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__conv1_HeadVar__6_6;
#line 990 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__conv0_HeadVar__8_8;

#line 990 "mercury_compile_front_end.m"
    {
#line 990 "mercury_compile_front_end.m"
      check_hlds__simplify__simplify_pred_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_front_end__closure, (MR_Integer) 3))), ((MR_Word) top_level__mercury_compile_front_end__wrapper_arg_1), ((MR_Word) top_level__mercury_compile_front_end__wrapper_arg_2), &top_level__mercury_compile_front_end__conv2_HeadVar__4_4, ((MR_Word) top_level__mercury_compile_front_end__wrapper_arg_4), &top_level__mercury_compile_front_end__conv1_HeadVar__6_6, ((MR_Word) top_level__mercury_compile_front_end__wrapper_arg_6), &top_level__mercury_compile_front_end__conv0_HeadVar__8_8);
    }
#line 990 "mercury_compile_front_end.m"
    *top_level__mercury_compile_front_end__wrapper_arg_3 = ((MR_Box) (top_level__mercury_compile_front_end__conv2_HeadVar__4_4));
#line 990 "mercury_compile_front_end.m"
    *top_level__mercury_compile_front_end__wrapper_arg_5 = ((MR_Box) (top_level__mercury_compile_front_end__conv1_HeadVar__6_6));
#line 990 "mercury_compile_front_end.m"
    *top_level__mercury_compile_front_end__wrapper_arg_7 = ((MR_Box) (top_level__mercury_compile_front_end__conv0_HeadVar__8_8));
#line 990 "mercury_compile_front_end.m"
  }
#line 990 "mercury_compile_front_end.m"
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
#line 908 "mercury_compile_front_end.m"
  {
#line 908 "mercury_compile_front_end.m"
    MR_bool top_level__mercury_compile_front_end__succeeded;
#line 908 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__Globals_18;
#line 908 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__SimpList_19;
#line 908 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__Simplifications0_20;
#line 908 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_SimpList_37_37;

#line 909 "mercury_compile_front_end.m"
    {
#line 909 "mercury_compile_front_end.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_31, &top_level__mercury_compile_front_end__Globals_18);
    }
#line 911 "mercury_compile_front_end.m"
    {
#line 911 "mercury_compile_front_end.m"
      check_hlds__simplify__find_simplifications_3_p_0(top_level__mercury_compile_front_end__Warn_11, top_level__mercury_compile_front_end__Globals_18, &top_level__mercury_compile_front_end__Simplifications0_20);
    }
#line 912 "mercury_compile_front_end.m"
    {
#line 912 "mercury_compile_front_end.m"
      top_level__mercury_compile_front_end__STATE_VARIABLE_SimpList_37_37 = check_hlds__simplify__simplifications_to_list_1_f_0(top_level__mercury_compile_front_end__Simplifications0_20);
    }
#line 916 "mercury_compile_front_end.m"
    if ((top_level__mercury_compile_front_end__SimplifyPass_12 == (MR_Integer) 0))
#line 914 "mercury_compile_front_end.m"
      {
#line 915 "mercury_compile_front_end.m"
        {
#line 915 "mercury_compile_front_end.m"
          mercury__list__cons_3_p_0((MR_Word) &check_hlds__simplify__check_hlds__simplify__type_ctor_info_simplification_0, ((MR_Box) ((MR_Integer) 5)), top_level__mercury_compile_front_end__STATE_VARIABLE_SimpList_37_37, &top_level__mercury_compile_front_end__SimpList_19);
        }
#line 914 "mercury_compile_front_end.m"
      }
#line 916 "mercury_compile_front_end.m"
    else
#line 916 "mercury_compile_front_end.m"
      if ((top_level__mercury_compile_front_end__SimplifyPass_12 == (MR_Integer) 5))
#line 954 "mercury_compile_front_end.m"
        {
#line 954 "mercury_compile_front_end.m"
          MR_Word top_level__mercury_compile_front_end__TypeCtorInfo_89_89;
#line 954 "mercury_compile_front_end.m"
          MR_Word top_level__mercury_compile_front_end__ConstProp_23;
#line 954 "mercury_compile_front_end.m"
          MR_Word top_level__mercury_compile_front_end__DeepProf_24;
#line 954 "mercury_compile_front_end.m"
          MR_Word top_level__mercury_compile_front_end__TSWProf_25;
#line 954 "mercury_compile_front_end.m"
          MR_Word top_level__mercury_compile_front_end__TSCProf_26;
#line 954 "mercury_compile_front_end.m"
          MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_SimpList_43_43;
#line 954 "mercury_compile_front_end.m"
          MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_SimpList_47_47;

#line 960 "mercury_compile_front_end.m"
          {
#line 960 "mercury_compile_front_end.m"
            libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_front_end__Globals_18, (MR_Integer) 366, &top_level__mercury_compile_front_end__ConstProp_23);
          }
#line 962 "mercury_compile_front_end.m"
          {
#line 962 "mercury_compile_front_end.m"
            libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_front_end__Globals_18, (MR_Integer) 191, &top_level__mercury_compile_front_end__DeepProf_24);
          }
#line 963 "mercury_compile_front_end.m"
          {
#line 963 "mercury_compile_front_end.m"
            libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_front_end__Globals_18, (MR_Integer) 208, &top_level__mercury_compile_front_end__TSWProf_25);
          }
#line 965 "mercury_compile_front_end.m"
          {
#line 965 "mercury_compile_front_end.m"
            libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_front_end__Globals_18, (MR_Integer) 209, &top_level__mercury_compile_front_end__TSCProf_26);
          }
#line 968 "mercury_compile_front_end.m"
          top_level__mercury_compile_front_end__succeeded = (top_level__mercury_compile_front_end__ConstProp_23 == (MR_Integer) 1);
#line 968 "mercury_compile_front_end.m"
          if (top_level__mercury_compile_front_end__succeeded)
#line 968 "mercury_compile_front_end.m"
            {
#line 969 "mercury_compile_front_end.m"
              top_level__mercury_compile_front_end__succeeded = (top_level__mercury_compile_front_end__DeepProf_24 == (MR_Integer) 0);
#line 968 "mercury_compile_front_end.m"
              if (top_level__mercury_compile_front_end__succeeded)
#line 968 "mercury_compile_front_end.m"
                {
#line 970 "mercury_compile_front_end.m"
                  top_level__mercury_compile_front_end__succeeded = (top_level__mercury_compile_front_end__TSWProf_25 == (MR_Integer) 0);
#line 968 "mercury_compile_front_end.m"
                  if (top_level__mercury_compile_front_end__succeeded)
#line 971 "mercury_compile_front_end.m"
                    top_level__mercury_compile_front_end__succeeded = (top_level__mercury_compile_front_end__TSCProf_26 == (MR_Integer) 0);
#line 968 "mercury_compile_front_end.m"
                }
#line 968 "mercury_compile_front_end.m"
            }
#line 974 "mercury_compile_front_end.m"
          if (top_level__mercury_compile_front_end__succeeded)
#line 973 "mercury_compile_front_end.m"
            {
#line 973 "mercury_compile_front_end.m"
              {
#line 973 "mercury_compile_front_end.m"
                mercury__list__cons_3_p_0((MR_Word) &check_hlds__simplify__check_hlds__simplify__type_ctor_info_simplification_0, ((MR_Box) ((MR_Integer) 9)), top_level__mercury_compile_front_end__STATE_VARIABLE_SimpList_37_37, &top_level__mercury_compile_front_end__STATE_VARIABLE_SimpList_43_43);
              }
#line 973 "mercury_compile_front_end.m"
            }
#line 974 "mercury_compile_front_end.m"
          else
#line 975 "mercury_compile_front_end.m"
            {
#line 975 "mercury_compile_front_end.m"
              {
#line 975 "mercury_compile_front_end.m"
                top_level__mercury_compile_front_end__STATE_VARIABLE_SimpList_43_43 = mercury__list__delete_all_2_f_0((MR_Word) &check_hlds__simplify__check_hlds__simplify__type_ctor_info_simplification_0, top_level__mercury_compile_front_end__STATE_VARIABLE_SimpList_37_37, ((MR_Box) ((MR_Integer) 9)));
              }
#line 975 "mercury_compile_front_end.m"
            }
#line 4278 "top_level.mercury_compile_front_end.c"
          top_level__mercury_compile_front_end__TypeCtorInfo_89_89 = (MR_Word) &check_hlds__simplify__check_hlds__simplify__type_ctor_info_simplification_0;
#line 977 "mercury_compile_front_end.m"
          {
#line 977 "mercury_compile_front_end.m"
            mercury__list__cons_3_p_0(top_level__mercury_compile_front_end__TypeCtorInfo_89_89, ((MR_Box) ((MR_Integer) 4)), top_level__mercury_compile_front_end__STATE_VARIABLE_SimpList_43_43, &top_level__mercury_compile_front_end__STATE_VARIABLE_SimpList_47_47);
          }
#line 978 "mercury_compile_front_end.m"
          {
#line 978 "mercury_compile_front_end.m"
            mercury__list__cons_3_p_0(top_level__mercury_compile_front_end__TypeCtorInfo_89_89, ((MR_Box) ((MR_Integer) 7)), top_level__mercury_compile_front_end__STATE_VARIABLE_SimpList_47_47, &top_level__mercury_compile_front_end__SimpList_19);
          }
#line 954 "mercury_compile_front_end.m"
        }
#line 916 "mercury_compile_front_end.m"
      else
#line 916 "mercury_compile_front_end.m"
        if ((top_level__mercury_compile_front_end__SimplifyPass_12 == (MR_Integer) 4))
#line 951 "mercury_compile_front_end.m"
          {
#line 952 "mercury_compile_front_end.m"
            {
#line 952 "mercury_compile_front_end.m"
              mercury__list__cons_3_p_0((MR_Word) &check_hlds__simplify__check_hlds__simplify__type_ctor_info_simplification_0, ((MR_Box) ((MR_Integer) 4)), top_level__mercury_compile_front_end__STATE_VARIABLE_SimpList_37_37, &top_level__mercury_compile_front_end__SimpList_19);
            }
#line 951 "mercury_compile_front_end.m"
          }
#line 916 "mercury_compile_front_end.m"
        else
#line 916 "mercury_compile_front_end.m"
          if ((top_level__mercury_compile_front_end__SimplifyPass_12 == (MR_Integer) 1))
#line 917 "mercury_compile_front_end.m"
            {
#line 918 "mercury_compile_front_end.m"
              {
#line 918 "mercury_compile_front_end.m"
                mercury__list__cons_3_p_0((MR_Word) &check_hlds__simplify__check_hlds__simplify__type_ctor_info_simplification_0, ((MR_Box) ((MR_Integer) 4)), top_level__mercury_compile_front_end__STATE_VARIABLE_SimpList_37_37, &top_level__mercury_compile_front_end__SimpList_19);
              }
#line 917 "mercury_compile_front_end.m"
            }
#line 916 "mercury_compile_front_end.m"
          else
#line 916 "mercury_compile_front_end.m"
            if ((top_level__mercury_compile_front_end__SimplifyPass_12 == (MR_Integer) 3))
#line 936 "mercury_compile_front_end.m"
              {
#line 936 "mercury_compile_front_end.m"
                MR_Word top_level__mercury_compile_front_end__SimplifyPrePar_22;

#line 941 "mercury_compile_front_end.m"
                {
#line 941 "mercury_compile_front_end.m"
                  libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_front_end__Globals_18, (MR_Integer) 194, &top_level__mercury_compile_front_end__SimplifyPrePar_22);
                }
#line 946 "mercury_compile_front_end.m"
                if ((top_level__mercury_compile_front_end__SimplifyPrePar_22 == (MR_Integer) 0))
#line 948 "mercury_compile_front_end.m"
                  top_level__mercury_compile_front_end__SimpList_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 946 "mercury_compile_front_end.m"
                else
#line 944 "mercury_compile_front_end.m"
                  {
#line 945 "mercury_compile_front_end.m"
                    {
#line 945 "mercury_compile_front_end.m"
                      mercury__list__cons_3_p_0((MR_Word) &check_hlds__simplify__check_hlds__simplify__type_ctor_info_simplification_0, ((MR_Box) ((MR_Integer) 4)), top_level__mercury_compile_front_end__STATE_VARIABLE_SimpList_37_37, &top_level__mercury_compile_front_end__SimpList_19);
                    }
#line 944 "mercury_compile_front_end.m"
                  }
#line 936 "mercury_compile_front_end.m"
              }
#line 916 "mercury_compile_front_end.m"
            else
#line 920 "mercury_compile_front_end.m"
              {
#line 920 "mercury_compile_front_end.m"
                MR_Word top_level__mercury_compile_front_end__Simplify215_21;

#line 926 "mercury_compile_front_end.m"
                {
#line 926 "mercury_compile_front_end.m"
                  libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_front_end__Globals_18, (MR_Integer) 193, &top_level__mercury_compile_front_end__Simplify215_21);
                }
#line 931 "mercury_compile_front_end.m"
                if ((top_level__mercury_compile_front_end__Simplify215_21 == (MR_Integer) 0))
#line 933 "mercury_compile_front_end.m"
                  top_level__mercury_compile_front_end__SimpList_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 931 "mercury_compile_front_end.m"
                else
#line 929 "mercury_compile_front_end.m"
                  {
#line 930 "mercury_compile_front_end.m"
                    {
#line 930 "mercury_compile_front_end.m"
                      mercury__list__cons_3_p_0((MR_Word) &check_hlds__simplify__check_hlds__simplify__type_ctor_info_simplification_0, ((MR_Box) ((MR_Integer) 4)), top_level__mercury_compile_front_end__STATE_VARIABLE_SimpList_37_37, &top_level__mercury_compile_front_end__SimpList_19);
                    }
#line 929 "mercury_compile_front_end.m"
                  }
#line 920 "mercury_compile_front_end.m"
              }
#line 1006 "mercury_compile_front_end.m"
    if ((top_level__mercury_compile_front_end__SimpList_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1007 "mercury_compile_front_end.m"
      {
#line 1007 "mercury_compile_front_end.m"
        *top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_32 = top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_31;
#line 1007 "mercury_compile_front_end.m"
        *top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_34 = top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_33;
#line 1007 "mercury_compile_front_end.m"
      }
#line 1006 "mercury_compile_front_end.m"
    else
#line 983 "mercury_compile_front_end.m"
      {
#line 983 "mercury_compile_front_end.m"
        MR_Word top_level__mercury_compile_front_end__Simplifications_29;
#line 983 "mercury_compile_front_end.m"
        MR_Word top_level__mercury_compile_front_end__SimplifySpecs_30;
#line 983 "mercury_compile_front_end.m"
        MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_64_64;
#line 983 "mercury_compile_front_end.m"
        MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_65_65;
#line 983 "mercury_compile_front_end.m"
        MR_Word top_level__mercury_compile_front_end__V_70_70;
#line 983 "mercury_compile_front_end.m"
        MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_71_71;
#line 983 "mercury_compile_front_end.m"
        MR_Word top_level__mercury_compile_front_end__V_74_74;

#line 985 "mercury_compile_front_end.m"
        {
#line 985 "mercury_compile_front_end.m"
          hlds__hlds_error_util__maybe_write_out_errors_8_p_0(top_level__mercury_compile_front_end__Verbose_13, top_level__mercury_compile_front_end__Globals_18, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_31, &top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_64_64, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_33, &top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_65_65);
        }
#line 986 "mercury_compile_front_end.m"
        {
#line 986 "mercury_compile_front_end.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_front_end__Verbose_13, (MR_String) "% Simplifying goals...\n");
        }
#line 987 "mercury_compile_front_end.m"
        {
#line 987 "mercury_compile_front_end.m"
          libs__file_util__maybe_flush_output_3_p_0(top_level__mercury_compile_front_end__Verbose_13);
        }
#line 988 "mercury_compile_front_end.m"
        {
#line 988 "mercury_compile_front_end.m"
          top_level__mercury_compile_front_end__Simplifications_29 = check_hlds__simplify__list_to_simplifications_1_f_0(top_level__mercury_compile_front_end__SimpList_19);
        }
#line 990 "mercury_compile_front_end.m"
        {
#line 990 "mercury_compile_front_end.m"
          top_level__mercury_compile_front_end__V_74_74 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 990 "mercury_compile_front_end.m"
          MR_hl_field(MR_mktag(0), top_level__mercury_compile_front_end__V_74_74, 0) = ((MR_Box) (&top_level__mercury_compile_front_end_scalar_common_4[0]));
#line 990 "mercury_compile_front_end.m"
          MR_hl_field(MR_mktag(0), top_level__mercury_compile_front_end__V_74_74, 1) = ((MR_Box) (top_level__mercury_compile_front_end__maybe_simplify_10_p_0_1));
#line 990 "mercury_compile_front_end.m"
          MR_hl_field(MR_mktag(0), top_level__mercury_compile_front_end__V_74_74, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 990 "mercury_compile_front_end.m"
          MR_hl_field(MR_mktag(0), top_level__mercury_compile_front_end__V_74_74, 3) = ((MR_Box) (top_level__mercury_compile_front_end__Simplifications_29));
#line 990 "mercury_compile_front_end.m"
        }
#line 989 "mercury_compile_front_end.m"
        top_level__mercury_compile_front_end__V_70_70 = (MR_Word) top_level__mercury_compile_front_end__V_74_74;
#line 989 "mercury_compile_front_end.m"
        {
#line 989 "mercury_compile_front_end.m"
          hlds__passes_aux__process_all_nonimported_preds_errors_7_p_0(top_level__mercury_compile_front_end__V_70_70, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_64_64, &top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_71_71, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &top_level__mercury_compile_front_end__SimplifySpecs_30);
        }
#line 996 "mercury_compile_front_end.m"
        if ((top_level__mercury_compile_front_end__SimplifyPass_12 == (MR_Integer) 0))
#line 993 "mercury_compile_front_end.m"
          {
#line 993 "mercury_compile_front_end.m"
            MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_75_75;

#line 994 "mercury_compile_front_end.m"
            {
#line 994 "mercury_compile_front_end.m"
              top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_75_75 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, top_level__mercury_compile_front_end__SimplifySpecs_30, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_65_65);
            }
#line 995 "mercury_compile_front_end.m"
            {
#line 995 "mercury_compile_front_end.m"
              hlds__hlds_error_util__maybe_write_out_errors_8_p_0(top_level__mercury_compile_front_end__Verbose_13, top_level__mercury_compile_front_end__Globals_18, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_71_71, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_32, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_75_75, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_34);
            }
#line 993 "mercury_compile_front_end.m"
          }
#line 996 "mercury_compile_front_end.m"
        else
#line 996 "mercury_compile_front_end.m"
          if ((top_level__mercury_compile_front_end__SimplifyPass_12 == (MR_Integer) 5))
#line 997 "mercury_compile_front_end.m"
            {
#line 997 "mercury_compile_front_end.m"
              *top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_32 = top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_71_71;
#line 997 "mercury_compile_front_end.m"
              *top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_34 = top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_65_65;
#line 997 "mercury_compile_front_end.m"
            }
#line 996 "mercury_compile_front_end.m"
          else
#line 996 "mercury_compile_front_end.m"
            if ((top_level__mercury_compile_front_end__SimplifyPass_12 == (MR_Integer) 4))
#line 998 "mercury_compile_front_end.m"
              {
#line 998 "mercury_compile_front_end.m"
                *top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_32 = top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_71_71;
#line 998 "mercury_compile_front_end.m"
                *top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_34 = top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_65_65;
#line 998 "mercury_compile_front_end.m"
              }
#line 996 "mercury_compile_front_end.m"
            else
#line 996 "mercury_compile_front_end.m"
              if ((top_level__mercury_compile_front_end__SimplifyPass_12 == (MR_Integer) 1))
#line 999 "mercury_compile_front_end.m"
                {
#line 999 "mercury_compile_front_end.m"
                  *top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_32 = top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_71_71;
#line 999 "mercury_compile_front_end.m"
                  *top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_34 = top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_65_65;
#line 999 "mercury_compile_front_end.m"
                }
#line 996 "mercury_compile_front_end.m"
              else
#line 996 "mercury_compile_front_end.m"
                if ((top_level__mercury_compile_front_end__SimplifyPass_12 == (MR_Integer) 3))
#line 1001 "mercury_compile_front_end.m"
                  {
#line 1001 "mercury_compile_front_end.m"
                    *top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_32 = top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_71_71;
#line 1001 "mercury_compile_front_end.m"
                    *top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_34 = top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_65_65;
#line 1001 "mercury_compile_front_end.m"
                  }
#line 996 "mercury_compile_front_end.m"
                else
#line 1000 "mercury_compile_front_end.m"
                  {
#line 1000 "mercury_compile_front_end.m"
                    *top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_32 = top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_71_71;
#line 1000 "mercury_compile_front_end.m"
                    *top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_34 = top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_65_65;
#line 1000 "mercury_compile_front_end.m"
                  }
#line 1004 "mercury_compile_front_end.m"
        {
#line 1004 "mercury_compile_front_end.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_front_end__Verbose_13, (MR_String) "% done.\n");
        }
#line 1005 "mercury_compile_front_end.m"
        {
#line 1005 "mercury_compile_front_end.m"
          libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_front_end__Stats_14);
#line 1005 "mercury_compile_front_end.m"
          return;
        }
#line 983 "mercury_compile_front_end.m"
      }
#line 908 "mercury_compile_front_end.m"
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
#line 123 "mercury_compile_front_end.m"
  {
#line 123 "mercury_compile_front_end.m"
    MR_bool top_level__mercury_compile_front_end__succeeded;
#line 123 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__Globals_22;
#line 123 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__Verbose_23;

#line 126 "mercury_compile_front_end.m"
    {
#line 126 "mercury_compile_front_end.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_31, &top_level__mercury_compile_front_end__Globals_22);
    }
#line 127 "mercury_compile_front_end.m"
    {
#line 127 "mercury_compile_front_end.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_front_end__Globals_22, (MR_Integer) 44, &top_level__mercury_compile_front_end__Verbose_23);
    }
#line 137 "mercury_compile_front_end.m"
    if ((top_level__mercury_compile_front_end__FoundUndefTypeError_15 == (MR_Integer) 0))
#line 138 "mercury_compile_front_end.m"
      {
#line 138 "mercury_compile_front_end.m"
        MR_Word top_level__mercury_compile_front_end__TypeCtorInfo_76_76;
#line 138 "mercury_compile_front_end.m"
        MR_Word top_level__mercury_compile_front_end__PostTypeSpecs_24;
#line 138 "mercury_compile_front_end.m"
        MR_Word top_level__mercury_compile_front_end__PostTypeErrors_25;
#line 138 "mercury_compile_front_end.m"
        MR_Word top_level__mercury_compile_front_end__QualInfo_26;
#line 138 "mercury_compile_front_end.m"
        MR_Word top_level__mercury_compile_front_end__TypeClassSpecs_27;
#line 138 "mercury_compile_front_end.m"
        MR_Word top_level__mercury_compile_front_end__TypeClassErrors_28;
#line 138 "mercury_compile_front_end.m"
        MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_40_40;
#line 138 "mercury_compile_front_end.m"
        MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_41_41;
#line 138 "mercury_compile_front_end.m"
        MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_45_45;
#line 138 "mercury_compile_front_end.m"
        MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_FoundError_46_46;
#line 138 "mercury_compile_front_end.m"
        MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_49_49;
#line 138 "mercury_compile_front_end.m"
        MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_53_53;
#line 138 "mercury_compile_front_end.m"
        MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_55_55;
#line 138 "mercury_compile_front_end.m"
        MR_Word top_level__mercury_compile_front_end__V_56_56;
#line 138 "mercury_compile_front_end.m"
        MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_59_59;
#line 138 "mercury_compile_front_end.m"
        MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_61_61;

#line 139 "mercury_compile_front_end.m"
        {
#line 139 "mercury_compile_front_end.m"
          hlds__hlds_error_util__maybe_write_out_errors_8_p_0(top_level__mercury_compile_front_end__Verbose_23, top_level__mercury_compile_front_end__Globals_22, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_31, &top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_40_40, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_35, &top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_41_41);
        }
#line 141 "mercury_compile_front_end.m"
        {
#line 141 "mercury_compile_front_end.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_front_end__Verbose_23, (MR_String) "% Post-processing type definitions...\n");
        }
#line 143 "mercury_compile_front_end.m"
        {
#line 143 "mercury_compile_front_end.m"
          hlds__make_tags__post_process_type_defns_3_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_40_40, &top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_45_45, &top_level__mercury_compile_front_end__PostTypeSpecs_24);
        }
#line 144 "mercury_compile_front_end.m"
        {
#line 144 "mercury_compile_front_end.m"
          top_level__mercury_compile_front_end__PostTypeErrors_25 = parse_tree__error_util__contains_errors_2_f_0(top_level__mercury_compile_front_end__Globals_22, top_level__mercury_compile_front_end__PostTypeSpecs_24);
        }
#line 145 "mercury_compile_front_end.m"
        {
#line 145 "mercury_compile_front_end.m"
          mercury__bool__or_3_p_0(top_level__mercury_compile_front_end__PostTypeErrors_25, top_level__mercury_compile_front_end__STATE_VARIABLE_FoundError_0_29, &top_level__mercury_compile_front_end__STATE_VARIABLE_FoundError_46_46);
        }
#line 146 "mercury_compile_front_end.m"
        {
#line 146 "mercury_compile_front_end.m"
          hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_45_45, (MR_Integer) 3, (MR_String) "typedefn", top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_0_33, &top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_49_49);
        }
#line 148 "mercury_compile_front_end.m"
        {
#line 148 "mercury_compile_front_end.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_front_end__Verbose_23, (MR_String) "% Checking typeclasses...\n");
        }
#line 149 "mercury_compile_front_end.m"
        {
#line 149 "mercury_compile_front_end.m"
          check_hlds__check_typeclass__check_typeclasses_6_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_45_45, &top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_53_53, top_level__mercury_compile_front_end__QualInfo0_14, &top_level__mercury_compile_front_end__QualInfo_26, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &top_level__mercury_compile_front_end__TypeClassSpecs_27);
        }
#line 4667 "top_level.mercury_compile_front_end.c"
        top_level__mercury_compile_front_end__TypeCtorInfo_76_76 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0;
#line 150 "mercury_compile_front_end.m"
        {
#line 150 "mercury_compile_front_end.m"
          top_level__mercury_compile_front_end__V_56_56 = mercury__list__f_43_43_2_f_0(top_level__mercury_compile_front_end__TypeCtorInfo_76_76, top_level__mercury_compile_front_end__TypeClassSpecs_27, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_41_41);
        }
#line 150 "mercury_compile_front_end.m"
        {
#line 150 "mercury_compile_front_end.m"
          top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_55_55 = mercury__list__f_43_43_2_f_0(top_level__mercury_compile_front_end__TypeCtorInfo_76_76, top_level__mercury_compile_front_end__PostTypeSpecs_24, top_level__mercury_compile_front_end__V_56_56);
        }
#line 151 "mercury_compile_front_end.m"
        {
#line 151 "mercury_compile_front_end.m"
          hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_53_53, (MR_Integer) 5, (MR_String) "typeclass", top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_49_49, &top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_59_59);
        }
#line 152 "mercury_compile_front_end.m"
        {
#line 152 "mercury_compile_front_end.m"
          hlds__make_hlds__set_module_recomp_info_3_p_0(top_level__mercury_compile_front_end__QualInfo_26, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_53_53, &top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_61_61);
        }
#line 154 "mercury_compile_front_end.m"
        {
#line 154 "mercury_compile_front_end.m"
          top_level__mercury_compile_front_end__TypeClassErrors_28 = parse_tree__error_util__contains_errors_2_f_0(top_level__mercury_compile_front_end__Globals_22, top_level__mercury_compile_front_end__TypeClassSpecs_27);
        }
#line 160 "mercury_compile_front_end.m"
        if ((top_level__mercury_compile_front_end__TypeClassErrors_28 == (MR_Integer) 0))
#line 162 "mercury_compile_front_end.m"
          {
#line 162 "mercury_compile_front_end.m"
            top_level__mercury_compile_front_end__frontend_pass_after_typeclass_check_11_p_0(top_level__mercury_compile_front_end__FoundUndefModeError_16, top_level__mercury_compile_front_end__STATE_VARIABLE_FoundError_46_46, top_level__mercury_compile_front_end__STATE_VARIABLE_FoundError_30, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_61_61, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_32, top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_59_59, top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_34, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_55_55, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_36);
#line 162 "mercury_compile_front_end.m"
            return;
          }
#line 160 "mercury_compile_front_end.m"
        else
#line 156 "mercury_compile_front_end.m"
          {
#line 159 "mercury_compile_front_end.m"
            *top_level__mercury_compile_front_end__STATE_VARIABLE_FoundError_30 = (MR_Integer) 1;
#line 159 "mercury_compile_front_end.m"
            *top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_32 = top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_61_61;
#line 159 "mercury_compile_front_end.m"
            *top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_34 = top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_59_59;
#line 159 "mercury_compile_front_end.m"
            *top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_36 = top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_55_55;
#line 156 "mercury_compile_front_end.m"
          }
#line 138 "mercury_compile_front_end.m"
      }
#line 137 "mercury_compile_front_end.m"
    else
#line 129 "mercury_compile_front_end.m"
      {
#line 132 "mercury_compile_front_end.m"
        *top_level__mercury_compile_front_end__STATE_VARIABLE_FoundError_30 = (MR_Integer) 1;
#line 133 "mercury_compile_front_end.m"
        {
#line 133 "mercury_compile_front_end.m"
          hlds__hlds_error_util__maybe_write_out_errors_8_p_0(top_level__mercury_compile_front_end__Verbose_23, top_level__mercury_compile_front_end__Globals_22, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_31, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_32, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_35, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_36);
        }
#line 134 "mercury_compile_front_end.m"
        {
#line 134 "mercury_compile_front_end.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_front_end__Verbose_23, (MR_String) "% Program contains undefined type error(s).\n");
        }
#line 136 "mercury_compile_front_end.m"
        {
#line 136 "mercury_compile_front_end.m"
          mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
        }
#line 136 "mercury_compile_front_end.m"
        *top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_34 = top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_0_33;
#line 129 "mercury_compile_front_end.m"
      }
#line 123 "mercury_compile_front_end.m"
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
