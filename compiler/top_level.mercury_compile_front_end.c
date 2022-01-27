/*
** Automatically generated from `mercury_compile_front_end.m'
** by the Mercury compiler,
** version rotd-2015-02-20
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
#include "integer.mih"
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
#include "set_tree234.mih"
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
#include "mdbcomp.sym_name.mih"
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
#include "parse_tree.prog_io_error.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.set_of_var.mih"
#include "string.format.mih"
#include "string.parse_util.mih"
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




#line 187 "top_level.mercury_compile_front_end.c"
static const MR_FA_PseudoTypeInfo_Struct1 top_level__mercury_compile_front_end__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0;

#line 190 "top_level.mercury_compile_front_end.c"
static const MR_FA_TypeInfo_Struct1 top_level__mercury_compile_front_end__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0;

#line 193 "top_level.mercury_compile_front_end.c"
static const MR_VA_PseudoTypeInfo_Struct3 top_level__mercury_compile_front_end____vpti_tuple_3__plain_hlds__hlds_module__type_ctor_info_module_info_0__plain_check_hlds__modes__type_ctor_info_modes_safe_to_continue_0__plain_list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0;

#line 196 "top_level.mercury_compile_front_end.c"
static const MR_FA_PseudoTypeInfo_Struct2 top_level__mercury_compile_front_end__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_hlds__hlds_module__type_ctor_info_oisu_preds_0;

#line 199 "top_level.mercury_compile_front_end.c"
static const MR_EnumFunctorDesc top_level__mercury_compile_front_end__top_level__mercury_compile_front_end__enum_functor_desc_simplify_pass_0_0;

#line 202 "top_level.mercury_compile_front_end.c"
static const MR_EnumFunctorDesc top_level__mercury_compile_front_end__top_level__mercury_compile_front_end__enum_functor_desc_simplify_pass_0_1;

#line 205 "top_level.mercury_compile_front_end.c"
static const MR_EnumFunctorDesc top_level__mercury_compile_front_end__top_level__mercury_compile_front_end__enum_functor_desc_simplify_pass_0_2;

#line 208 "top_level.mercury_compile_front_end.c"
static const MR_EnumFunctorDesc top_level__mercury_compile_front_end__top_level__mercury_compile_front_end__enum_functor_desc_simplify_pass_0_3;

#line 211 "top_level.mercury_compile_front_end.c"
static const MR_EnumFunctorDesc top_level__mercury_compile_front_end__top_level__mercury_compile_front_end__enum_functor_desc_simplify_pass_0_4;

#line 214 "top_level.mercury_compile_front_end.c"
static const MR_EnumFunctorDesc top_level__mercury_compile_front_end__top_level__mercury_compile_front_end__enum_functor_desc_simplify_pass_0_5;

#line 217 "top_level.mercury_compile_front_end.c"
static const MR_EnumFunctorDescPtr top_level__mercury_compile_front_end__top_level__mercury_compile_front_end__enum_value_ordered_simplify_pass_0[6];

#line 220 "top_level.mercury_compile_front_end.c"
static const MR_EnumFunctorDescPtr top_level__mercury_compile_front_end__top_level__mercury_compile_front_end__enum_name_ordered_simplify_pass_0[6];

#line 223 "top_level.mercury_compile_front_end.c"
static const MR_Integer top_level__mercury_compile_front_end__top_level__mercury_compile_front_end__functor_number_map_simplify_pass_0[6];

#line 226 "top_level.mercury_compile_front_end.c"
static MR_bool MR_CALL 
top_level__mercury_compile_front_end____Unify____simplify_pass_0_0_10001(
#line 229 "top_level.mercury_compile_front_end.c"
  MR_Box top_level__mercury_compile_front_end__wrapper_arg_1,
#line 231 "top_level.mercury_compile_front_end.c"
  MR_Box top_level__mercury_compile_front_end__wrapper_arg_2);

#line 234 "top_level.mercury_compile_front_end.c"
static void MR_CALL 
top_level__mercury_compile_front_end____Compare____simplify_pass_0_0_10001(
#line 237 "top_level.mercury_compile_front_end.c"
  MR_Box * top_level__mercury_compile_front_end__wrapper_arg_1,
#line 239 "top_level.mercury_compile_front_end.c"
  MR_Box top_level__mercury_compile_front_end__wrapper_arg_2,
#line 241 "top_level.mercury_compile_front_end.c"
  MR_Box top_level__mercury_compile_front_end__wrapper_arg_3);

#line 244 "top_level.mercury_compile_front_end.c"
static void MR_CALL 
top_level__mercury_compile_front_end__maybe_benchmark_modes__ho1_6_p_0_1(
#line 247 "top_level.mercury_compile_front_end.c"
  MR_Box top_level__mercury_compile_front_end__closure_arg,
#line 249 "top_level.mercury_compile_front_end.c"
  MR_Box top_level__mercury_compile_front_end__wrapper_arg_1,
#line 251 "top_level.mercury_compile_front_end.c"
  MR_Box * top_level__mercury_compile_front_end__wrapper_arg_2,
#line 253 "top_level.mercury_compile_front_end.c"
  MR_Box top_level__mercury_compile_front_end__wrapper_arg_3,
#line 255 "top_level.mercury_compile_front_end.c"
  MR_Box * top_level__mercury_compile_front_end__wrapper_arg_4);

#line 704 "mercury_compile_front_end.m"
static void MR_CALL 
top_level__mercury_compile_front_end__maybe_benchmark_modes__ho1_6_p_0(
#line 704 "mercury_compile_front_end.m"
  MR_String top_level__mercury_compile_front_end__Stage_8,
#line 704 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_15,
#line 704 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_16);

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

#line 803 "mercury_compile_front_end.m"
static void MR_CALL 
top_level__mercury_compile_front_end__check_stratification_9_p_0(
#line 803 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__Verbose_10,
#line 803 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__Stats_11,
#line 803 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_20,
#line 803 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_21,
#line 803 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__FoundError_13,
#line 803 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_22,
#line 803 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_23);

#line 778 "mercury_compile_front_end.m"
static void MR_CALL 
top_level__mercury_compile_front_end__check_unique_modes_9_p_0(
#line 778 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__Verbose_10,
#line 778 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__Stats_11,
#line 778 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_18,
#line 778 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_19,
#line 778 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__FoundError_13,
#line 778 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_20,
#line 778 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_21);

#line 756 "mercury_compile_front_end.m"
static void MR_CALL 
top_level__mercury_compile_front_end__check_determinism_8_p_0(
#line 756 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__Verbose_9,
#line 756 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__Stats_10,
#line 756 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_17,
#line 756 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_18,
#line 756 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_19,
#line 756 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_20);

#line 744 "mercury_compile_front_end.m"
static void MR_CALL 
top_level__mercury_compile_front_end__detect_cse_6_p_0(
#line 744 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__Verbose_7,
#line 744 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__Stats_8,
#line 744 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_11,
#line 744 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_12);

#line 732 "mercury_compile_front_end.m"
static void MR_CALL 
top_level__mercury_compile_front_end__detect_switches_6_p_0(
#line 732 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__Verbose_7,
#line 732 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__Stats_8,
#line 732 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_11,
#line 732 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_12);

#line 682 "mercury_compile_front_end.m"
static void MR_CALL 
top_level__mercury_compile_front_end__modecheck_10_p_0_1(
#line 682 "mercury_compile_front_end.m"
  MR_Box top_level__mercury_compile_front_end__closure_arg,
#line 682 "mercury_compile_front_end.m"
  MR_Box top_level__mercury_compile_front_end__wrapper_arg_1,
#line 682 "mercury_compile_front_end.m"
  MR_Box * top_level__mercury_compile_front_end__wrapper_arg_2);

#line 668 "mercury_compile_front_end.m"
static void MR_CALL 
top_level__mercury_compile_front_end__modecheck_10_p_0(
#line 668 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__Verbose_11,
#line 668 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__Stats_12,
#line 668 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_23,
#line 668 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_24,
#line 668 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__FoundModeError_14,
#line 668 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__SafeToContinue_15,
#line 668 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_25,
#line 668 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_26);

#line 650 "mercury_compile_front_end.m"
static void MR_CALL 
top_level__mercury_compile_front_end__maybe_mode_constraints_6_p_0(
#line 650 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__Verbose_7,
#line 650 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__Stats_8,
#line 650 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_13,
#line 650 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_14);

#line 627 "mercury_compile_front_end.m"
static void MR_CALL 
top_level__mercury_compile_front_end__maybe_warn_about_unused_imports_8_p_0(
#line 627 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__Verbose_9,
#line 627 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__Stats_10,
#line 627 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_17,
#line 627 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_18,
#line 627 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_19,
#line 627 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_20);

#line 585 "mercury_compile_front_end.m"
static void MR_CALL 
top_level__mercury_compile_front_end__maybe_polymorphism_8_p_0(
#line 585 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__Verbose_9,
#line 585 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__Stats_10,
#line 585 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_17,
#line 585 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_18,
#line 585 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_19,
#line 585 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_20);

#line 569 "mercury_compile_front_end.m"
static void MR_CALL 
top_level__mercury_compile_front_end__subst_implementation_defined_literals_8_p_0(
#line 569 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__Verbose_9,
#line 569 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__Stats_10,
#line 569 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_15,
#line 569 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_16,
#line 569 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_17,
#line 569 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_18);

#line 545 "mercury_compile_front_end.m"
static void MR_CALL 
top_level__mercury_compile_front_end__puritycheck_8_p_0(
#line 545 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__Verbose_9,
#line 545 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__Stats_10,
#line 545 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_17,
#line 545 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_18,
#line 545 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_19,
#line 545 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_20);

#line 462 "mercury_compile_front_end.m"
static void MR_CALL 
top_level__mercury_compile_front_end__frontend_pass_by_phases_9_p_0(
#line 462 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_26,
#line 462 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_27,
#line 462 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__FoundError_11,
#line 462 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_0_28,
#line 462 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_29,
#line 462 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_30,
#line 462 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_31);

#line 361 "mercury_compile_front_end.m"
static void MR_CALL 
top_level__mercury_compile_front_end__maybe_write_optfile_9_p_0(
#line 361 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__MakeOptInt_10,
#line 361 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_36,
#line 361 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_37,
#line 361 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_0_38,
#line 361 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_39,
#line 361 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_40,
#line 361 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_41);

#line 171 "mercury_compile_front_end.m"
static void MR_CALL 
top_level__mercury_compile_front_end__frontend_pass_after_typeclass_check_11_p_0(
#line 171 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__FoundUndefModeError_12,
#line 171 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_FoundError_0_39,
#line 171 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_FoundError_40,
#line 171 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_41,
#line 171 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_42,
#line 171 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_0_43,
#line 171 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_44,
#line 171 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_45,
#line 171 "mercury_compile_front_end.m"
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

static /* final */ const MR_Box top_level__mercury_compile_front_end_scalar_common_5[1][1];

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

static /* final */ const MR_Box top_level__mercury_compile_front_end_scalar_common_5[1][1] = {
  /* row 0 */
  {
    ((MR_Box) (((MR_Integer) 0 | (((((MR_Integer) 0 << (MR_Integer) 1)) | (((((MR_Integer) 0 << (MR_Integer) 2)) | (((((MR_Integer) 0 << (MR_Integer) 3)) | (((MR_Integer) 0 << (MR_Integer) 4)))))))))))
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



#line 744 "top_level.mercury_compile_front_end.c"
static const MR_FA_PseudoTypeInfo_Struct1 top_level__mercury_compile_front_end__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0
  }
};

#line 752 "top_level.mercury_compile_front_end.c"
static const MR_FA_TypeInfo_Struct1 top_level__mercury_compile_front_end__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0
  }
};

#line 760 "top_level.mercury_compile_front_end.c"
static const MR_VA_PseudoTypeInfo_Struct3 top_level__mercury_compile_front_end____vpti_tuple_3__plain_hlds__hlds_module__type_ctor_info_module_info_0__plain_check_hlds__modes__type_ctor_info_modes_safe_to_continue_0__plain_list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__builtin__builtin__type_ctor_info_tuple_0,
  (MR_Integer) 3,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0,
    (MR_PseudoTypeInfo) &check_hlds__modes__check_hlds__modes__type_ctor_info_modes_safe_to_continue_0,
    (MR_PseudoTypeInfo) &top_level__mercury_compile_front_end__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0
  }
};

#line 771 "top_level.mercury_compile_front_end.c"
static const MR_FA_PseudoTypeInfo_Struct2 top_level__mercury_compile_front_end__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_hlds__hlds_module__type_ctor_info_oisu_preds_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0,
    (MR_PseudoTypeInfo) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_oisu_preds_0
  }
};

#line 780 "top_level.mercury_compile_front_end.c"
static const MR_EnumFunctorDesc top_level__mercury_compile_front_end__top_level__mercury_compile_front_end__enum_functor_desc_simplify_pass_0_0 = {
  (MR_String) "simplify_pass_frontend",
  (MR_Integer) 0
};

#line 786 "top_level.mercury_compile_front_end.c"
static const MR_EnumFunctorDesc top_level__mercury_compile_front_end__top_level__mercury_compile_front_end__enum_functor_desc_simplify_pass_0_1 = {
  (MR_String) "simplify_pass_post_untuple",
  (MR_Integer) 1
};

#line 792 "top_level.mercury_compile_front_end.c"
static const MR_EnumFunctorDesc top_level__mercury_compile_front_end__top_level__mercury_compile_front_end__enum_functor_desc_simplify_pass_0_2 = {
  (MR_String) "simplify_pass_pre_prof_transforms",
  (MR_Integer) 2
};

#line 798 "top_level.mercury_compile_front_end.c"
static const MR_EnumFunctorDesc top_level__mercury_compile_front_end__top_level__mercury_compile_front_end__enum_functor_desc_simplify_pass_0_3 = {
  (MR_String) "simplify_pass_pre_implicit_parallelism",
  (MR_Integer) 3
};

#line 804 "top_level.mercury_compile_front_end.c"
static const MR_EnumFunctorDesc top_level__mercury_compile_front_end__top_level__mercury_compile_front_end__enum_functor_desc_simplify_pass_0_4 = {
  (MR_String) "simplify_pass_ml_backend",
  (MR_Integer) 4
};

#line 810 "top_level.mercury_compile_front_end.c"
static const MR_EnumFunctorDesc top_level__mercury_compile_front_end__top_level__mercury_compile_front_end__enum_functor_desc_simplify_pass_0_5 = {
  (MR_String) "simplify_pass_ll_backend",
  (MR_Integer) 5
};

#line 816 "top_level.mercury_compile_front_end.c"
static const MR_EnumFunctorDescPtr top_level__mercury_compile_front_end__top_level__mercury_compile_front_end__enum_value_ordered_simplify_pass_0[6] = {
  &top_level__mercury_compile_front_end__top_level__mercury_compile_front_end__enum_functor_desc_simplify_pass_0_0,
  &top_level__mercury_compile_front_end__top_level__mercury_compile_front_end__enum_functor_desc_simplify_pass_0_1,
  &top_level__mercury_compile_front_end__top_level__mercury_compile_front_end__enum_functor_desc_simplify_pass_0_2,
  &top_level__mercury_compile_front_end__top_level__mercury_compile_front_end__enum_functor_desc_simplify_pass_0_3,
  &top_level__mercury_compile_front_end__top_level__mercury_compile_front_end__enum_functor_desc_simplify_pass_0_4,
  &top_level__mercury_compile_front_end__top_level__mercury_compile_front_end__enum_functor_desc_simplify_pass_0_5
};

#line 826 "top_level.mercury_compile_front_end.c"
static const MR_EnumFunctorDescPtr top_level__mercury_compile_front_end__top_level__mercury_compile_front_end__enum_name_ordered_simplify_pass_0[6] = {
  &top_level__mercury_compile_front_end__top_level__mercury_compile_front_end__enum_functor_desc_simplify_pass_0_0,
  &top_level__mercury_compile_front_end__top_level__mercury_compile_front_end__enum_functor_desc_simplify_pass_0_5,
  &top_level__mercury_compile_front_end__top_level__mercury_compile_front_end__enum_functor_desc_simplify_pass_0_4,
  &top_level__mercury_compile_front_end__top_level__mercury_compile_front_end__enum_functor_desc_simplify_pass_0_1,
  &top_level__mercury_compile_front_end__top_level__mercury_compile_front_end__enum_functor_desc_simplify_pass_0_3,
  &top_level__mercury_compile_front_end__top_level__mercury_compile_front_end__enum_functor_desc_simplify_pass_0_2
};

#line 836 "top_level.mercury_compile_front_end.c"
static const MR_Integer top_level__mercury_compile_front_end__top_level__mercury_compile_front_end__functor_number_map_simplify_pass_0[6] = {
  (MR_Integer) 0,
  (MR_Integer) 3,
  (MR_Integer) 5,
  (MR_Integer) 4,
  (MR_Integer) 2,
  (MR_Integer) 1
};

#line 846 "top_level.mercury_compile_front_end.c"
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

#line 867 "top_level.mercury_compile_front_end.c"
static MR_bool MR_CALL 
top_level__mercury_compile_front_end____Unify____simplify_pass_0_0_10001(
#line 870 "top_level.mercury_compile_front_end.c"
  MR_Box top_level__mercury_compile_front_end__wrapper_arg_1,
#line 872 "top_level.mercury_compile_front_end.c"
  MR_Box top_level__mercury_compile_front_end__wrapper_arg_2)
#line 874 "top_level.mercury_compile_front_end.c"
{
#line 876 "top_level.mercury_compile_front_end.c"
  {
#line 878 "top_level.mercury_compile_front_end.c"
    MR_bool top_level__mercury_compile_front_end__succeeded;

#line 881 "top_level.mercury_compile_front_end.c"
    {
#line 883 "top_level.mercury_compile_front_end.c"
      top_level__mercury_compile_front_end__succeeded = top_level__mercury_compile_front_end____Unify____simplify_pass_0_0(((MR_Word) top_level__mercury_compile_front_end__wrapper_arg_1), ((MR_Word) top_level__mercury_compile_front_end__wrapper_arg_2));
    }
#line 886 "top_level.mercury_compile_front_end.c"
    return top_level__mercury_compile_front_end__succeeded;
#line 888 "top_level.mercury_compile_front_end.c"
  }
#line 890 "top_level.mercury_compile_front_end.c"
}

#line 893 "top_level.mercury_compile_front_end.c"
static void MR_CALL 
top_level__mercury_compile_front_end____Compare____simplify_pass_0_0_10001(
#line 896 "top_level.mercury_compile_front_end.c"
  MR_Box * top_level__mercury_compile_front_end__wrapper_arg_1,
#line 898 "top_level.mercury_compile_front_end.c"
  MR_Box top_level__mercury_compile_front_end__wrapper_arg_2,
#line 900 "top_level.mercury_compile_front_end.c"
  MR_Box top_level__mercury_compile_front_end__wrapper_arg_3)
#line 902 "top_level.mercury_compile_front_end.c"
{
#line 904 "top_level.mercury_compile_front_end.c"
  {
#line 906 "top_level.mercury_compile_front_end.c"
    MR_Word top_level__mercury_compile_front_end__conv0_HeadVar__1_1;

#line 909 "top_level.mercury_compile_front_end.c"
    {
#line 911 "top_level.mercury_compile_front_end.c"
      top_level__mercury_compile_front_end____Compare____simplify_pass_0_0(&top_level__mercury_compile_front_end__conv0_HeadVar__1_1, ((MR_Word) top_level__mercury_compile_front_end__wrapper_arg_2), ((MR_Word) top_level__mercury_compile_front_end__wrapper_arg_3));
    }
#line 914 "top_level.mercury_compile_front_end.c"
    *top_level__mercury_compile_front_end__wrapper_arg_1 = ((MR_Box) (top_level__mercury_compile_front_end__conv0_HeadVar__1_1));
#line 916 "top_level.mercury_compile_front_end.c"
  }
#line 918 "top_level.mercury_compile_front_end.c"
}

#line 921 "top_level.mercury_compile_front_end.c"
static void MR_CALL 
top_level__mercury_compile_front_end__maybe_benchmark_modes__ho1_6_p_0_1(
#line 924 "top_level.mercury_compile_front_end.c"
  MR_Box top_level__mercury_compile_front_end__closure_arg,
#line 926 "top_level.mercury_compile_front_end.c"
  MR_Box top_level__mercury_compile_front_end__wrapper_arg_1,
#line 928 "top_level.mercury_compile_front_end.c"
  MR_Box * top_level__mercury_compile_front_end__wrapper_arg_2,
#line 930 "top_level.mercury_compile_front_end.c"
  MR_Box top_level__mercury_compile_front_end__wrapper_arg_3,
#line 932 "top_level.mercury_compile_front_end.c"
  MR_Box * top_level__mercury_compile_front_end__wrapper_arg_4)
#line 934 "top_level.mercury_compile_front_end.c"
{
#line 936 "top_level.mercury_compile_front_end.c"
  {
#line 938 "top_level.mercury_compile_front_end.c"
    MR_Box top_level__mercury_compile_front_end__closure = top_level__mercury_compile_front_end__closure_arg;
#line 940 "top_level.mercury_compile_front_end.c"
    MR_Word top_level__mercury_compile_front_end__conv0_HeadVar__2_2;

#line 943 "top_level.mercury_compile_front_end.c"
    {
#line 945 "top_level.mercury_compile_front_end.c"
      check_hlds__mode_constraints__mc_process_module_4_p_0(((MR_Word) top_level__mercury_compile_front_end__wrapper_arg_1), &top_level__mercury_compile_front_end__conv0_HeadVar__2_2);
    }
#line 948 "top_level.mercury_compile_front_end.c"
    *top_level__mercury_compile_front_end__wrapper_arg_2 = ((MR_Box) (top_level__mercury_compile_front_end__conv0_HeadVar__2_2));
#line 950 "top_level.mercury_compile_front_end.c"
  }
#line 952 "top_level.mercury_compile_front_end.c"
}

#line 704 "mercury_compile_front_end.m"
static void MR_CALL 
top_level__mercury_compile_front_end__maybe_benchmark_modes__ho1_6_p_0(
#line 704 "mercury_compile_front_end.m"
  MR_String top_level__mercury_compile_front_end__Stage_8,
#line 704 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_15,
#line 704 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_16)
#line 704 "mercury_compile_front_end.m"
{
#line 708 "mercury_compile_front_end.m"
  {
#line 708 "mercury_compile_front_end.m"
    MR_bool top_level__mercury_compile_front_end__succeeded;
#line 708 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__Globals_11;
#line 708 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__BenchmarkModes_12;

#line 709 "mercury_compile_front_end.m"
    {
#line 709 "mercury_compile_front_end.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_15, &top_level__mercury_compile_front_end__Globals_11);
    }
#line 710 "mercury_compile_front_end.m"
    {
#line 710 "mercury_compile_front_end.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_front_end__Globals_11, (MR_Integer) 159, &top_level__mercury_compile_front_end__BenchmarkModes_12);
    }
#line 719 "mercury_compile_front_end.m"
    if ((top_level__mercury_compile_front_end__BenchmarkModes_12 == (MR_Integer) 0))
#line 721 "mercury_compile_front_end.m"
      {
#line 721 "mercury_compile_front_end.m"
        check_hlds__mode_constraints__mc_process_module_4_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_15, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_16);
#line 721 "mercury_compile_front_end.m"
        return;
      }
#line 719 "mercury_compile_front_end.m"
    else
#line 712 "mercury_compile_front_end.m"
      {
#line 712 "mercury_compile_front_end.m"
        MR_Integer top_level__mercury_compile_front_end__Repeats_13;
#line 712 "mercury_compile_front_end.m"
        MR_Integer top_level__mercury_compile_front_end__Time_14;
#line 712 "mercury_compile_front_end.m"
        MR_String top_level__mercury_compile_front_end__V_40_40;
#line 712 "mercury_compile_front_end.m"
        MR_Word top_level__mercury_compile_front_end__V_46_46;
#line 712 "mercury_compile_front_end.m"
        MR_String top_level__mercury_compile_front_end__V_50_50;
#line 712 "mercury_compile_front_end.m"
        MR_String top_level__mercury_compile_front_end__V_59_59;
#line 728 "mercury_compile_front_end.m"
        MR_Box top_level__mercury_compile_front_end__conv2_STATE_VARIABLE_HLDS_16;
#line 728 "mercury_compile_front_end.m"
        MR_Box top_level__mercury_compile_front_end__conv1_STATE_VARIABLE_IO_31_31;

#line 713 "mercury_compile_front_end.m"
        {
#line 713 "mercury_compile_front_end.m"
          libs__globals__lookup_int_option_3_p_0(top_level__mercury_compile_front_end__Globals_11, (MR_Integer) 160, &top_level__mercury_compile_front_end__Repeats_13);
        }
#line 1020 "top_level.mercury_compile_front_end.c"
        top_level__mercury_compile_front_end__V_46_46 = (MR_Word) &top_level__mercury_compile_front_end_scalar_common_5[0];
#line 714 "mercury_compile_front_end.m"
        {
#line 714 "mercury_compile_front_end.m"
          mercury__string__format__format_string_component_nowidth_noprec_3_p_0(top_level__mercury_compile_front_end__V_46_46, top_level__mercury_compile_front_end__Stage_8, &top_level__mercury_compile_front_end__V_40_40);
        }
#line 714 "mercury_compile_front_end.m"
        {
#line 714 "mercury_compile_front_end.m"
          mercury__io__write_string_3_p_0(top_level__mercury_compile_front_end__V_40_40);
        }
#line 714 "mercury_compile_front_end.m"
        {
#line 714 "mercury_compile_front_end.m"
          mercury__io__write_string_3_p_0((MR_String) " ");
        }
#line 714 "mercury_compile_front_end.m"
        {
#line 714 "mercury_compile_front_end.m"
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(top_level__mercury_compile_front_end__V_46_46, top_level__mercury_compile_front_end__Repeats_13, &top_level__mercury_compile_front_end__V_50_50);
        }
#line 714 "mercury_compile_front_end.m"
        {
#line 714 "mercury_compile_front_end.m"
          mercury__io__write_string_3_p_0(top_level__mercury_compile_front_end__V_50_50);
        }
#line 714 "mercury_compile_front_end.m"
        {
#line 714 "mercury_compile_front_end.m"
          mercury__io__write_string_3_p_0((MR_String) " ");
        }
#line 728 "mercury_compile_front_end.m"
        {
#line 728 "mercury_compile_front_end.m"
          mercury__benchmarking__benchmark_det_io_7_p_0((MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, (MR_Word) &top_level__mercury_compile_front_end_scalar_common_3[2], ((MR_Box) (top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_15)), &top_level__mercury_compile_front_end__conv2_STATE_VARIABLE_HLDS_16, ((MR_Box) ((MR_Integer) 0)), &top_level__mercury_compile_front_end__conv1_STATE_VARIABLE_IO_31_31, top_level__mercury_compile_front_end__Repeats_13, &top_level__mercury_compile_front_end__Time_14);
        }
#line 728 "mercury_compile_front_end.m"
        *top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_16 = ((MR_Word) top_level__mercury_compile_front_end__conv2_STATE_VARIABLE_HLDS_16);
#line 718 "mercury_compile_front_end.m"
        {
#line 718 "mercury_compile_front_end.m"
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(top_level__mercury_compile_front_end__V_46_46, top_level__mercury_compile_front_end__Time_14, &top_level__mercury_compile_front_end__V_59_59);
        }
#line 718 "mercury_compile_front_end.m"
        {
#line 718 "mercury_compile_front_end.m"
          mercury__io__write_string_3_p_0(top_level__mercury_compile_front_end__V_59_59);
        }
#line 718 "mercury_compile_front_end.m"
        {
#line 718 "mercury_compile_front_end.m"
          mercury__io__write_string_3_p_0((MR_String) " ms\n");
#line 718 "mercury_compile_front_end.m"
          return;
        }
#line 712 "mercury_compile_front_end.m"
      }
#line 708 "mercury_compile_front_end.m"
  }
#line 704 "mercury_compile_front_end.m"
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
#line 1124 "top_level.mercury_compile_front_end.c"
  {
#line 1126 "top_level.mercury_compile_front_end.c"
    MR_bool top_level__mercury_compile_front_end__succeeded = (top_level__mercury_compile_front_end__HeadVar__2_1 == top_level__mercury_compile_front_end__HeadVar__2_2);

#line 1129 "top_level.mercury_compile_front_end.c"
    return top_level__mercury_compile_front_end__succeeded;
#line 1131 "top_level.mercury_compile_front_end.c"
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
      libs__globals__lookup_string_option_3_p_0(top_level__mercury_compile_front_end__Globals_16, (MR_Integer) 57, &top_level__mercury_compile_front_end__StatsFileName_17);
    }
#line 1042 "mercury_compile_front_end.m"
    top_level__mercury_compile_front_end__succeeded = (strcmp(top_level__mercury_compile_front_end__StatsFileName_17, (MR_String) "") == 0);
#line 1045 "mercury_compile_front_end.m"
    if (top_level__mercury_compile_front_end__succeeded)
#line 1045 "mercury_compile_front_end.m"
      {
#line 1045 "mercury_compile_front_end.m"
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
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_front_end__Globals_19, (MR_Integer) 56, &top_level__mercury_compile_front_end__Statistics_21);
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
          return top_level__mercury_compile_front_end__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(top_level__mercury_compile_front_end__ModuleName_3, top_level__mercury_compile_front_end__TypeModuleName_8);
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
#line 867 "mercury_compile_front_end.m"
        *top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_25 = top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_24;
#line 867 "mercury_compile_front_end.m"
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

#line 803 "mercury_compile_front_end.m"
static void MR_CALL 
top_level__mercury_compile_front_end__check_stratification_9_p_0(
#line 803 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__Verbose_10,
#line 803 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__Stats_11,
#line 803 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_20,
#line 803 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_21,
#line 803 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__FoundError_13,
#line 803 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_22,
#line 803 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_23)
#line 803 "mercury_compile_front_end.m"
{
#line 807 "mercury_compile_front_end.m"
  {
#line 807 "mercury_compile_front_end.m"
    MR_bool top_level__mercury_compile_front_end__succeeded;
#line 807 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__MustBeStratifiedPreds_16;
#line 807 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__Globals_17;
#line 807 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__Warn_18;

#line 808 "mercury_compile_front_end.m"
    {
#line 808 "mercury_compile_front_end.m"
      hlds__hlds_module__module_info_get_must_be_stratified_preds_2_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_20, &top_level__mercury_compile_front_end__MustBeStratifiedPreds_16);
    }
#line 809 "mercury_compile_front_end.m"
    {
#line 809 "mercury_compile_front_end.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_20, &top_level__mercury_compile_front_end__Globals_17);
    }
#line 810 "mercury_compile_front_end.m"
    {
#line 810 "mercury_compile_front_end.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_front_end__Globals_17, (MR_Integer) 17, &top_level__mercury_compile_front_end__Warn_18);
    }
#line 812 "mercury_compile_front_end.m"
    {
#line 812 "mercury_compile_front_end.m"
      top_level__mercury_compile_front_end__succeeded = mercury__set__is_non_empty_1_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, top_level__mercury_compile_front_end__MustBeStratifiedPreds_16);
    }
#line 813 "mercury_compile_front_end.m"
    if (!(top_level__mercury_compile_front_end__succeeded))
#line 813 "mercury_compile_front_end.m"
      top_level__mercury_compile_front_end__succeeded = (top_level__mercury_compile_front_end__Warn_18 == (MR_Integer) 1);
#line 831 "mercury_compile_front_end.m"
    if (top_level__mercury_compile_front_end__succeeded)
#line 816 "mercury_compile_front_end.m"
      {
#line 816 "mercury_compile_front_end.m"
        MR_Word top_level__mercury_compile_front_end__StratifySpecs_19;
#line 816 "mercury_compile_front_end.m"
        MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_27_27;
#line 816 "mercury_compile_front_end.m"
        MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_28_28;
#line 816 "mercury_compile_front_end.m"
        MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_32_32;
#line 816 "mercury_compile_front_end.m"
        MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_33_33;

#line 816 "mercury_compile_front_end.m"
        {
#line 816 "mercury_compile_front_end.m"
          hlds__hlds_error_util__maybe_write_out_errors_8_p_0(top_level__mercury_compile_front_end__Verbose_10, top_level__mercury_compile_front_end__Globals_17, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_20, &top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_27_27, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_22, &top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_28_28);
        }
#line 817 "mercury_compile_front_end.m"
        {
#line 817 "mercury_compile_front_end.m"
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
#line 816 "mercury_compile_front_end.m"
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
#line 807 "mercury_compile_front_end.m"
  }
#line 803 "mercury_compile_front_end.m"
}

#line 778 "mercury_compile_front_end.m"
static void MR_CALL 
top_level__mercury_compile_front_end__check_unique_modes_9_p_0(
#line 778 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__Verbose_10,
#line 778 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__Stats_11,
#line 778 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_18,
#line 778 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_19,
#line 778 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__FoundError_13,
#line 778 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_20,
#line 778 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_21)
#line 778 "mercury_compile_front_end.m"
{
#line 782 "mercury_compile_front_end.m"
  {
#line 782 "mercury_compile_front_end.m"
    MR_bool top_level__mercury_compile_front_end__succeeded;
#line 782 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__Globals_16;
#line 782 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__UniqueSpecs_17;
#line 782 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_24_24;
#line 782 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_25_25;
#line 782 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_29_29;
#line 782 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_30_30;

#line 783 "mercury_compile_front_end.m"
    {
#line 783 "mercury_compile_front_end.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_18, &top_level__mercury_compile_front_end__Globals_16);
    }
#line 784 "mercury_compile_front_end.m"
    {
#line 784 "mercury_compile_front_end.m"
      hlds__hlds_error_util__maybe_write_out_errors_8_p_0(top_level__mercury_compile_front_end__Verbose_10, top_level__mercury_compile_front_end__Globals_16, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_18, &top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_24_24, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_20, &top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_25_25);
    }
#line 785 "mercury_compile_front_end.m"
    {
#line 785 "mercury_compile_front_end.m"
      libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_front_end__Verbose_10, (MR_String) "% Checking for backtracking over unique modes...\n");
    }
#line 787 "mercury_compile_front_end.m"
    {
#line 787 "mercury_compile_front_end.m"
      check_hlds__unique_modes__unique_modes_check_module_3_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_24_24, &top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_29_29, &top_level__mercury_compile_front_end__UniqueSpecs_17);
    }
#line 788 "mercury_compile_front_end.m"
    {
#line 788 "mercury_compile_front_end.m"
      top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_30_30 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, top_level__mercury_compile_front_end__UniqueSpecs_17, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_25_25);
    }
#line 789 "mercury_compile_front_end.m"
    {
#line 789 "mercury_compile_front_end.m"
      *top_level__mercury_compile_front_end__FoundError_13 = parse_tree__error_util__contains_errors_2_f_0(top_level__mercury_compile_front_end__Globals_16, top_level__mercury_compile_front_end__UniqueSpecs_17);
    }
#line 790 "mercury_compile_front_end.m"
    {
#line 790 "mercury_compile_front_end.m"
      hlds__hlds_error_util__maybe_write_out_errors_8_p_0(top_level__mercury_compile_front_end__Verbose_10, top_level__mercury_compile_front_end__Globals_16, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_29_29, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_19, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_30_30, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_21);
    }
#line 795 "mercury_compile_front_end.m"
    if ((*top_level__mercury_compile_front_end__FoundError_13 == (MR_Integer) 0))
#line 796 "mercury_compile_front_end.m"
      {
#line 797 "mercury_compile_front_end.m"
        {
#line 797 "mercury_compile_front_end.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_front_end__Verbose_10, (MR_String) "% Program is unique-mode-correct.\n");
        }
#line 796 "mercury_compile_front_end.m"
      }
#line 795 "mercury_compile_front_end.m"
    else
#line 792 "mercury_compile_front_end.m"
      {
#line 793 "mercury_compile_front_end.m"
        {
#line 793 "mercury_compile_front_end.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_front_end__Verbose_10, (MR_String) "% Program contains unique mode error(s).\n");
        }
#line 792 "mercury_compile_front_end.m"
      }
#line 799 "mercury_compile_front_end.m"
    {
#line 799 "mercury_compile_front_end.m"
      libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_front_end__Stats_11);
#line 799 "mercury_compile_front_end.m"
      return;
    }
#line 782 "mercury_compile_front_end.m"
  }
#line 778 "mercury_compile_front_end.m"
}

#line 756 "mercury_compile_front_end.m"
static void MR_CALL 
top_level__mercury_compile_front_end__check_determinism_8_p_0(
#line 756 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__Verbose_9,
#line 756 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__Stats_10,
#line 756 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_17,
#line 756 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_18,
#line 756 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_19,
#line 756 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_20)
#line 756 "mercury_compile_front_end.m"
{
#line 760 "mercury_compile_front_end.m"
  {
#line 760 "mercury_compile_front_end.m"
    MR_bool top_level__mercury_compile_front_end__succeeded;
#line 760 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__DetismSpecs_14;
#line 760 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__Globals_15;
#line 760 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__FoundError_16;
#line 760 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_23_23;
#line 760 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_24_24;

#line 761 "mercury_compile_front_end.m"
    {
#line 761 "mercury_compile_front_end.m"
      check_hlds__det_analysis__determinism_pass_3_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_17, &top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_23_23, &top_level__mercury_compile_front_end__DetismSpecs_14);
    }
#line 762 "mercury_compile_front_end.m"
    {
#line 762 "mercury_compile_front_end.m"
      top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_24_24 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, top_level__mercury_compile_front_end__DetismSpecs_14, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_19);
    }
#line 763 "mercury_compile_front_end.m"
    {
#line 763 "mercury_compile_front_end.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_23_23, &top_level__mercury_compile_front_end__Globals_15);
    }
#line 764 "mercury_compile_front_end.m"
    {
#line 764 "mercury_compile_front_end.m"
      top_level__mercury_compile_front_end__FoundError_16 = parse_tree__error_util__contains_errors_2_f_0(top_level__mercury_compile_front_end__Globals_15, top_level__mercury_compile_front_end__DetismSpecs_14);
    }
#line 765 "mercury_compile_front_end.m"
    {
#line 765 "mercury_compile_front_end.m"
      hlds__hlds_error_util__maybe_write_out_errors_8_p_0(top_level__mercury_compile_front_end__Verbose_9, top_level__mercury_compile_front_end__Globals_15, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_23_23, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_18, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_24_24, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_20);
    }
#line 770 "mercury_compile_front_end.m"
    if ((top_level__mercury_compile_front_end__FoundError_16 == (MR_Integer) 0))
#line 771 "mercury_compile_front_end.m"
      {
#line 772 "mercury_compile_front_end.m"
        {
#line 772 "mercury_compile_front_end.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_front_end__Verbose_9, (MR_String) "% Program is determinism-correct.\n");
        }
#line 771 "mercury_compile_front_end.m"
      }
#line 770 "mercury_compile_front_end.m"
    else
#line 767 "mercury_compile_front_end.m"
      {
#line 768 "mercury_compile_front_end.m"
        {
#line 768 "mercury_compile_front_end.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_front_end__Verbose_9, (MR_String) "% Program contains determinism error(s).\n");
        }
#line 767 "mercury_compile_front_end.m"
      }
#line 774 "mercury_compile_front_end.m"
    {
#line 774 "mercury_compile_front_end.m"
      libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_front_end__Stats_10);
#line 774 "mercury_compile_front_end.m"
      return;
    }
#line 760 "mercury_compile_front_end.m"
  }
#line 756 "mercury_compile_front_end.m"
}

#line 744 "mercury_compile_front_end.m"
static void MR_CALL 
top_level__mercury_compile_front_end__detect_cse_6_p_0(
#line 744 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__Verbose_7,
#line 744 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__Stats_8,
#line 744 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_11,
#line 744 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_12)
#line 744 "mercury_compile_front_end.m"
{
#line 747 "mercury_compile_front_end.m"
  {
#line 747 "mercury_compile_front_end.m"
    MR_bool top_level__mercury_compile_front_end__succeeded;

#line 748 "mercury_compile_front_end.m"
    {
#line 748 "mercury_compile_front_end.m"
      libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_front_end__Verbose_7, (MR_String) "% Detecting common deconstructions...\n");
    }
#line 750 "mercury_compile_front_end.m"
    {
#line 750 "mercury_compile_front_end.m"
      check_hlds__cse_detection__detect_cse_in_module_2_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_11, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_12);
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
#line 744 "mercury_compile_front_end.m"
}

#line 732 "mercury_compile_front_end.m"
static void MR_CALL 
top_level__mercury_compile_front_end__detect_switches_6_p_0(
#line 732 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__Verbose_7,
#line 732 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__Stats_8,
#line 732 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_11,
#line 732 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_12)
#line 732 "mercury_compile_front_end.m"
{
#line 735 "mercury_compile_front_end.m"
  {
#line 735 "mercury_compile_front_end.m"
    MR_bool top_level__mercury_compile_front_end__succeeded;

#line 736 "mercury_compile_front_end.m"
    {
#line 736 "mercury_compile_front_end.m"
      libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_front_end__Verbose_7, (MR_String) "% Detecting switches...\n");
    }
#line 737 "mercury_compile_front_end.m"
    {
#line 737 "mercury_compile_front_end.m"
      libs__file_util__maybe_flush_output_3_p_0(top_level__mercury_compile_front_end__Verbose_7);
    }
#line 738 "mercury_compile_front_end.m"
    {
#line 738 "mercury_compile_front_end.m"
      check_hlds__switch_detection__detect_switches_in_module_2_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_11, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_12);
    }
#line 739 "mercury_compile_front_end.m"
    {
#line 739 "mercury_compile_front_end.m"
      libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_front_end__Verbose_7, (MR_String) "% done.\n");
    }
#line 740 "mercury_compile_front_end.m"
    {
#line 740 "mercury_compile_front_end.m"
      libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_front_end__Stats_8);
#line 740 "mercury_compile_front_end.m"
      return;
    }
#line 735 "mercury_compile_front_end.m"
  }
#line 732 "mercury_compile_front_end.m"
}

#line 682 "mercury_compile_front_end.m"
static void MR_CALL 
top_level__mercury_compile_front_end__modecheck_10_p_0_1(
#line 682 "mercury_compile_front_end.m"
  MR_Box top_level__mercury_compile_front_end__closure_arg,
#line 682 "mercury_compile_front_end.m"
  MR_Box top_level__mercury_compile_front_end__wrapper_arg_1,
#line 682 "mercury_compile_front_end.m"
  MR_Box * top_level__mercury_compile_front_end__wrapper_arg_2)
#line 682 "mercury_compile_front_end.m"
{
#line 682 "mercury_compile_front_end.m"
  {
#line 682 "mercury_compile_front_end.m"
    MR_Box top_level__mercury_compile_front_end__closure = top_level__mercury_compile_front_end__closure_arg;
#line 682 "mercury_compile_front_end.m"
    MR_Tuple top_level__mercury_compile_front_end__conv0_HeadVar__2_2;

#line 682 "mercury_compile_front_end.m"
    {
#line 682 "mercury_compile_front_end.m"
      check_hlds__modes__modecheck_module_2_p_0(((MR_Word) top_level__mercury_compile_front_end__wrapper_arg_1), &top_level__mercury_compile_front_end__conv0_HeadVar__2_2);
    }
#line 682 "mercury_compile_front_end.m"
    *top_level__mercury_compile_front_end__wrapper_arg_2 = ((MR_Box) (top_level__mercury_compile_front_end__conv0_HeadVar__2_2));
#line 682 "mercury_compile_front_end.m"
  }
#line 682 "mercury_compile_front_end.m"
}

#line 668 "mercury_compile_front_end.m"
static void MR_CALL 
top_level__mercury_compile_front_end__modecheck_10_p_0(
#line 668 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__Verbose_11,
#line 668 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__Stats_12,
#line 668 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_23,
#line 668 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_24,
#line 668 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__FoundModeError_14,
#line 668 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__SafeToContinue_15,
#line 668 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_25,
#line 668 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_26)
#line 668 "mercury_compile_front_end.m"
{
#line 673 "mercury_compile_front_end.m"
  {
#line 673 "mercury_compile_front_end.m"
    MR_bool top_level__mercury_compile_front_end__succeeded;
#line 673 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__Globals_18;
#line 673 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__BenchmarkModes_19;
#line 673 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__ModeSpecs_21;
#line 673 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_29_29;
#line 673 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_30_30;
#line 673 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_38_38;
#line 673 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_46_46;

#line 674 "mercury_compile_front_end.m"
    {
#line 674 "mercury_compile_front_end.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_23, &top_level__mercury_compile_front_end__Globals_18);
    }
#line 675 "mercury_compile_front_end.m"
    {
#line 675 "mercury_compile_front_end.m"
      hlds__hlds_error_util__maybe_write_out_errors_8_p_0(top_level__mercury_compile_front_end__Verbose_11, top_level__mercury_compile_front_end__Globals_18, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_23, &top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_29_29, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_25, &top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_30_30);
    }
#line 676 "mercury_compile_front_end.m"
    {
#line 676 "mercury_compile_front_end.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_front_end__Globals_18, (MR_Integer) 159, &top_level__mercury_compile_front_end__BenchmarkModes_19);
    }
#line 687 "mercury_compile_front_end.m"
    if ((top_level__mercury_compile_front_end__BenchmarkModes_19 == (MR_Integer) 0))
#line 688 "mercury_compile_front_end.m"
      {
#line 688 "mercury_compile_front_end.m"
        MR_Tuple top_level__mercury_compile_front_end__V_33_33;

#line 689 "mercury_compile_front_end.m"
        {
#line 689 "mercury_compile_front_end.m"
          check_hlds__modes__modecheck_module_2_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_29_29, &top_level__mercury_compile_front_end__V_33_33);
        }
#line 689 "mercury_compile_front_end.m"
        top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_front_end__V_33_33, (MR_Integer) 0)));
#line 689 "mercury_compile_front_end.m"
        *top_level__mercury_compile_front_end__SafeToContinue_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_front_end__V_33_33, (MR_Integer) 1)));
#line 689 "mercury_compile_front_end.m"
        top_level__mercury_compile_front_end__ModeSpecs_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_front_end__V_33_33, (MR_Integer) 2)));
#line 688 "mercury_compile_front_end.m"
      }
#line 687 "mercury_compile_front_end.m"
    else
#line 678 "mercury_compile_front_end.m"
      {
#line 678 "mercury_compile_front_end.m"
        MR_Integer top_level__mercury_compile_front_end__Repeats_20;
#line 678 "mercury_compile_front_end.m"
        MR_Integer top_level__mercury_compile_front_end__Time_22;
#line 678 "mercury_compile_front_end.m"
        MR_String top_level__mercury_compile_front_end__V_66_66;
#line 678 "mercury_compile_front_end.m"
        MR_Word top_level__mercury_compile_front_end__V_72_72;
#line 678 "mercury_compile_front_end.m"
        MR_String top_level__mercury_compile_front_end__V_76_76;
#line 682 "mercury_compile_front_end.m"
        MR_Tuple top_level__mercury_compile_front_end__V_37_37;
#line 682 "mercury_compile_front_end.m"
        MR_Box top_level__mercury_compile_front_end__conv1_V_37_37;

#line 679 "mercury_compile_front_end.m"
        {
#line 679 "mercury_compile_front_end.m"
          libs__globals__lookup_int_option_3_p_0(top_level__mercury_compile_front_end__Globals_18, (MR_Integer) 160, &top_level__mercury_compile_front_end__Repeats_20);
        }
#line 682 "mercury_compile_front_end.m"
        {
#line 682 "mercury_compile_front_end.m"
          mercury__benchmarking__benchmark_det_5_p_0((MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, (MR_Word) &top_level__mercury_compile_front_end_scalar_common_2[0], (MR_Word) &top_level__mercury_compile_front_end_scalar_common_3[1], ((MR_Box) (top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_29_29)), &top_level__mercury_compile_front_end__conv1_V_37_37, top_level__mercury_compile_front_end__Repeats_20, &top_level__mercury_compile_front_end__Time_22);
        }
#line 682 "mercury_compile_front_end.m"
        top_level__mercury_compile_front_end__V_37_37 = ((MR_Tuple) top_level__mercury_compile_front_end__conv1_V_37_37);
#line 683 "mercury_compile_front_end.m"
        top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_front_end__V_37_37, (MR_Integer) 0)));
#line 683 "mercury_compile_front_end.m"
        *top_level__mercury_compile_front_end__SafeToContinue_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_front_end__V_37_37, (MR_Integer) 1)));
#line 683 "mercury_compile_front_end.m"
        top_level__mercury_compile_front_end__ModeSpecs_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_front_end__V_37_37, (MR_Integer) 2)));
#line 685 "mercury_compile_front_end.m"
        {
#line 685 "mercury_compile_front_end.m"
          mercury__io__write_string_3_p_0((MR_String) "BENCHMARK modecheck, ");
        }
#line 2348 "top_level.mercury_compile_front_end.c"
        top_level__mercury_compile_front_end__V_72_72 = (MR_Word) &top_level__mercury_compile_front_end_scalar_common_5[0];
#line 686 "mercury_compile_front_end.m"
        {
#line 686 "mercury_compile_front_end.m"
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(top_level__mercury_compile_front_end__V_72_72, top_level__mercury_compile_front_end__Repeats_20, &top_level__mercury_compile_front_end__V_66_66);
        }
#line 686 "mercury_compile_front_end.m"
        {
#line 686 "mercury_compile_front_end.m"
          mercury__io__write_string_3_p_0(top_level__mercury_compile_front_end__V_66_66);
        }
#line 685 "mercury_compile_front_end.m"
        {
#line 685 "mercury_compile_front_end.m"
          mercury__io__write_string_3_p_0((MR_String) " repeats: ");
        }
#line 686 "mercury_compile_front_end.m"
        {
#line 686 "mercury_compile_front_end.m"
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(top_level__mercury_compile_front_end__V_72_72, top_level__mercury_compile_front_end__Time_22, &top_level__mercury_compile_front_end__V_76_76);
        }
#line 686 "mercury_compile_front_end.m"
        {
#line 686 "mercury_compile_front_end.m"
          mercury__io__write_string_3_p_0(top_level__mercury_compile_front_end__V_76_76);
        }
#line 685 "mercury_compile_front_end.m"
        {
#line 685 "mercury_compile_front_end.m"
          mercury__io__write_string_3_p_0((MR_String) " ms\n");
        }
#line 678 "mercury_compile_front_end.m"
      }
#line 691 "mercury_compile_front_end.m"
    {
#line 691 "mercury_compile_front_end.m"
      top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_46_46 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, top_level__mercury_compile_front_end__ModeSpecs_21, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_30_30);
    }
#line 692 "mercury_compile_front_end.m"
    {
#line 692 "mercury_compile_front_end.m"
      *top_level__mercury_compile_front_end__FoundModeError_14 = parse_tree__error_util__contains_errors_2_f_0(top_level__mercury_compile_front_end__Globals_18, top_level__mercury_compile_front_end__ModeSpecs_21);
    }
#line 697 "mercury_compile_front_end.m"
    if ((*top_level__mercury_compile_front_end__FoundModeError_14 == (MR_Integer) 0))
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
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_front_end__Verbose_11, (MR_String) "% Program is mode-correct.\n");
        }
#line 694 "mercury_compile_front_end.m"
      }
#line 697 "mercury_compile_front_end.m"
    else
#line 698 "mercury_compile_front_end.m"
      {
#line 699 "mercury_compile_front_end.m"
        {
#line 699 "mercury_compile_front_end.m"
          hlds__hlds_error_util__maybe_write_out_errors_8_p_0(top_level__mercury_compile_front_end__Verbose_11, top_level__mercury_compile_front_end__Globals_18, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_38_38, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_24, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_46_46, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_26);
        }
#line 700 "mercury_compile_front_end.m"
        {
#line 700 "mercury_compile_front_end.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_front_end__Verbose_11, (MR_String) "% Program contains mode error(s).\n");
        }
#line 698 "mercury_compile_front_end.m"
      }
#line 702 "mercury_compile_front_end.m"
    {
#line 702 "mercury_compile_front_end.m"
      libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_front_end__Stats_12);
#line 702 "mercury_compile_front_end.m"
      return;
    }
#line 673 "mercury_compile_front_end.m"
  }
#line 668 "mercury_compile_front_end.m"
}

#line 650 "mercury_compile_front_end.m"
static void MR_CALL 
top_level__mercury_compile_front_end__maybe_mode_constraints_6_p_0(
#line 650 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__Verbose_7,
#line 650 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__Stats_8,
#line 650 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_13,
#line 650 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_14)
#line 650 "mercury_compile_front_end.m"
{
#line 653 "mercury_compile_front_end.m"
  {
#line 653 "mercury_compile_front_end.m"
    MR_bool top_level__mercury_compile_front_end__succeeded;
#line 653 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__Globals_11;
#line 653 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__ModeConstraints_12;

#line 654 "mercury_compile_front_end.m"
    {
#line 654 "mercury_compile_front_end.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_13, &top_level__mercury_compile_front_end__Globals_11);
    }
#line 655 "mercury_compile_front_end.m"
    {
#line 655 "mercury_compile_front_end.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_front_end__Globals_11, (MR_Integer) 156, &top_level__mercury_compile_front_end__ModeConstraints_12);
    }
#line 664 "mercury_compile_front_end.m"
    if ((top_level__mercury_compile_front_end__ModeConstraints_12 == (MR_Integer) 0))
#line 665 "mercury_compile_front_end.m"
      *top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_14 = top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_13;
#line 664 "mercury_compile_front_end.m"
    else
#line 657 "mercury_compile_front_end.m"
      {
#line 658 "mercury_compile_front_end.m"
        {
#line 658 "mercury_compile_front_end.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_front_end__Verbose_7, (MR_String) "% Dumping mode constraints...\n");
        }
#line 659 "mercury_compile_front_end.m"
        {
#line 659 "mercury_compile_front_end.m"
          libs__file_util__maybe_flush_output_3_p_0(top_level__mercury_compile_front_end__Verbose_7);
        }
#line 660 "mercury_compile_front_end.m"
        {
#line 660 "mercury_compile_front_end.m"
          top_level__mercury_compile_front_end__maybe_benchmark_modes__ho1_6_p_0((MR_String) "mode-constraints", top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_13, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_14);
        }
#line 662 "mercury_compile_front_end.m"
        {
#line 662 "mercury_compile_front_end.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_front_end__Verbose_7, (MR_String) "% done.\n");
        }
#line 663 "mercury_compile_front_end.m"
        {
#line 663 "mercury_compile_front_end.m"
          libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_front_end__Stats_8);
#line 663 "mercury_compile_front_end.m"
          return;
        }
#line 657 "mercury_compile_front_end.m"
      }
#line 653 "mercury_compile_front_end.m"
  }
#line 650 "mercury_compile_front_end.m"
}

#line 627 "mercury_compile_front_end.m"
static void MR_CALL 
top_level__mercury_compile_front_end__maybe_warn_about_unused_imports_8_p_0(
#line 627 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__Verbose_9,
#line 627 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__Stats_10,
#line 627 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_17,
#line 627 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_18,
#line 627 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_19,
#line 627 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_20)
#line 627 "mercury_compile_front_end.m"
{
#line 631 "mercury_compile_front_end.m"
  {
#line 631 "mercury_compile_front_end.m"
    MR_bool top_level__mercury_compile_front_end__succeeded;
#line 631 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__Globals_14;
#line 631 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__WarnUnusedImports_15;

#line 632 "mercury_compile_front_end.m"
    {
#line 632 "mercury_compile_front_end.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_17, &top_level__mercury_compile_front_end__Globals_14);
    }
#line 633 "mercury_compile_front_end.m"
    {
#line 633 "mercury_compile_front_end.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_front_end__Globals_14, (MR_Integer) 37, &top_level__mercury_compile_front_end__WarnUnusedImports_15);
    }
#line 644 "mercury_compile_front_end.m"
    if ((top_level__mercury_compile_front_end__WarnUnusedImports_15 == (MR_Integer) 0))
#line 645 "mercury_compile_front_end.m"
      {
#line 645 "mercury_compile_front_end.m"
        *top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_18 = top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_17;
#line 645 "mercury_compile_front_end.m"
        *top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_20 = top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_19;
#line 645 "mercury_compile_front_end.m"
      }
#line 644 "mercury_compile_front_end.m"
    else
#line 636 "mercury_compile_front_end.m"
      {
#line 636 "mercury_compile_front_end.m"
        MR_Word top_level__mercury_compile_front_end__UnusedImportSpecs_16;
#line 636 "mercury_compile_front_end.m"
        MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_24_24;
#line 636 "mercury_compile_front_end.m"
        MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_25_25;
#line 636 "mercury_compile_front_end.m"
        MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_30_30;

#line 637 "mercury_compile_front_end.m"
        {
#line 637 "mercury_compile_front_end.m"
          hlds__hlds_error_util__maybe_write_out_errors_8_p_0(top_level__mercury_compile_front_end__Verbose_9, top_level__mercury_compile_front_end__Globals_14, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_17, &top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_24_24, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_19, &top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_25_25);
        }
#line 638 "mercury_compile_front_end.m"
        {
#line 638 "mercury_compile_front_end.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_front_end__Verbose_9, (MR_String) "% Checking for unused imports...");
        }
#line 639 "mercury_compile_front_end.m"
        {
#line 639 "mercury_compile_front_end.m"
          check_hlds__unused_imports__warn_about_unused_imports_4_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_24_24, &top_level__mercury_compile_front_end__UnusedImportSpecs_16);
        }
#line 640 "mercury_compile_front_end.m"
        {
#line 640 "mercury_compile_front_end.m"
          top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_30_30 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, top_level__mercury_compile_front_end__UnusedImportSpecs_16, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_25_25);
        }
#line 641 "mercury_compile_front_end.m"
        {
#line 641 "mercury_compile_front_end.m"
          hlds__hlds_error_util__maybe_write_out_errors_8_p_0(top_level__mercury_compile_front_end__Verbose_9, top_level__mercury_compile_front_end__Globals_14, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_24_24, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_18, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_30_30, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_20);
        }
#line 642 "mercury_compile_front_end.m"
        {
#line 642 "mercury_compile_front_end.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_front_end__Verbose_9, (MR_String) " done.\n");
        }
#line 643 "mercury_compile_front_end.m"
        {
#line 643 "mercury_compile_front_end.m"
          libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_front_end__Stats_10);
#line 643 "mercury_compile_front_end.m"
          return;
        }
#line 636 "mercury_compile_front_end.m"
      }
#line 631 "mercury_compile_front_end.m"
  }
#line 627 "mercury_compile_front_end.m"
}

#line 585 "mercury_compile_front_end.m"
static void MR_CALL 
top_level__mercury_compile_front_end__maybe_polymorphism_8_p_0(
#line 585 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__Verbose_9,
#line 585 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__Stats_10,
#line 585 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_17,
#line 585 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_18,
#line 585 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_19,
#line 585 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_20)
#line 585 "mercury_compile_front_end.m"
{
#line 589 "mercury_compile_front_end.m"
  {
#line 589 "mercury_compile_front_end.m"
    MR_bool top_level__mercury_compile_front_end__succeeded;
#line 589 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__Globals_14;
#line 589 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__Polymorphism_15;
#line 589 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_23_23;

#line 590 "mercury_compile_front_end.m"
    {
#line 590 "mercury_compile_front_end.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_17, &top_level__mercury_compile_front_end__Globals_14);
    }
#line 591 "mercury_compile_front_end.m"
    {
#line 591 "mercury_compile_front_end.m"
      hlds__hlds_error_util__maybe_write_out_errors_8_p_0(top_level__mercury_compile_front_end__Verbose_9, top_level__mercury_compile_front_end__Globals_14, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_17, &top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_23_23, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_19, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_20);
    }
#line 592 "mercury_compile_front_end.m"
    {
#line 592 "mercury_compile_front_end.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_front_end__Globals_14, (MR_Integer) 306, &top_level__mercury_compile_front_end__Polymorphism_15);
    }
#line 615 "mercury_compile_front_end.m"
    if ((top_level__mercury_compile_front_end__Polymorphism_15 == (MR_Integer) 0))
#line 616 "mercury_compile_front_end.m"
      {
#line 621 "mercury_compile_front_end.m"
        {
#line 621 "mercury_compile_front_end.m"
          mercury__require__unexpected_3_p_0((MR_String) "top_level.mercury_compile_front_end", (MR_String) "predicate \140top_level.mercury_compile_front_end.maybe_polymorphism\'/8", (MR_String) "sorry, \140--no-polymorphism\' is no longer supported");
#line 621 "mercury_compile_front_end.m"
          return;
        }
#line 616 "mercury_compile_front_end.m"
      }
#line 615 "mercury_compile_front_end.m"
    else
#line 594 "mercury_compile_front_end.m"
      {
#line 594 "mercury_compile_front_end.m"
        MR_Word top_level__mercury_compile_front_end__VeryVerbose_16;

#line 595 "mercury_compile_front_end.m"
        {
#line 595 "mercury_compile_front_end.m"
          libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_front_end__Globals_14, (MR_Integer) 46, &top_level__mercury_compile_front_end__VeryVerbose_16);
        }
#line 606 "mercury_compile_front_end.m"
        {
#line 606 "mercury_compile_front_end.m"
          check_hlds__polymorphism__polymorphism_process_module_2_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_23_23, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_18);
        }
#line 2686 "top_level.mercury_compile_front_end.c"
        if ((top_level__mercury_compile_front_end__VeryVerbose_16 == (MR_Integer) 0))
#line 2688 "top_level.mercury_compile_front_end.c"
          {
#line 598 "mercury_compile_front_end.m"
            {
#line 598 "mercury_compile_front_end.m"
              libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_front_end__Verbose_9, (MR_String) "% Transforming polymorphic unifications...");
            }
#line 605 "mercury_compile_front_end.m"
            {
#line 605 "mercury_compile_front_end.m"
              libs__file_util__maybe_flush_output_3_p_0(top_level__mercury_compile_front_end__Verbose_9);
            }
#line 609 "mercury_compile_front_end.m"
            {
#line 609 "mercury_compile_front_end.m"
              libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_front_end__Verbose_9, (MR_String) " done.\n");
            }
#line 2705 "top_level.mercury_compile_front_end.c"
          }
#line 2707 "top_level.mercury_compile_front_end.c"
        else
#line 2709 "top_level.mercury_compile_front_end.c"
          {
#line 602 "mercury_compile_front_end.m"
            {
#line 602 "mercury_compile_front_end.m"
              libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_front_end__Verbose_9, (MR_String) "% Transforming polymorphic unifications...\n");
            }
#line 605 "mercury_compile_front_end.m"
            {
#line 605 "mercury_compile_front_end.m"
              libs__file_util__maybe_flush_output_3_p_0(top_level__mercury_compile_front_end__Verbose_9);
            }
#line 612 "mercury_compile_front_end.m"
            {
#line 612 "mercury_compile_front_end.m"
              libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_front_end__Verbose_9, (MR_String) "% done.\n");
            }
#line 2726 "top_level.mercury_compile_front_end.c"
          }
#line 614 "mercury_compile_front_end.m"
        {
#line 614 "mercury_compile_front_end.m"
          libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_front_end__Stats_10);
#line 614 "mercury_compile_front_end.m"
          return;
        }
#line 594 "mercury_compile_front_end.m"
      }
#line 589 "mercury_compile_front_end.m"
  }
#line 585 "mercury_compile_front_end.m"
}

#line 569 "mercury_compile_front_end.m"
static void MR_CALL 
top_level__mercury_compile_front_end__subst_implementation_defined_literals_8_p_0(
#line 569 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__Verbose_9,
#line 569 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__Stats_10,
#line 569 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_15,
#line 569 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_16,
#line 569 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_17,
#line 569 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_18)
#line 569 "mercury_compile_front_end.m"
{
#line 573 "mercury_compile_front_end.m"
  {
#line 573 "mercury_compile_front_end.m"
    MR_bool top_level__mercury_compile_front_end__succeeded;
#line 573 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__Globals_14;
#line 573 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_21_21;

#line 574 "mercury_compile_front_end.m"
    {
#line 574 "mercury_compile_front_end.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_15, &top_level__mercury_compile_front_end__Globals_14);
    }
#line 575 "mercury_compile_front_end.m"
    {
#line 575 "mercury_compile_front_end.m"
      hlds__hlds_error_util__maybe_write_out_errors_8_p_0(top_level__mercury_compile_front_end__Verbose_9, top_level__mercury_compile_front_end__Globals_14, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_15, &top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_21_21, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_17, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_18);
    }
#line 576 "mercury_compile_front_end.m"
    {
#line 576 "mercury_compile_front_end.m"
      libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_front_end__Verbose_9, (MR_String) "% Substituting implementation-defined literals...\n");
    }
#line 578 "mercury_compile_front_end.m"
    {
#line 578 "mercury_compile_front_end.m"
      libs__file_util__maybe_flush_output_3_p_0(top_level__mercury_compile_front_end__Verbose_9);
    }
#line 579 "mercury_compile_front_end.m"
    {
#line 579 "mercury_compile_front_end.m"
      check_hlds__implementation_defined_literals__subst_impl_defined_literals_2_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_21_21, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_16);
    }
#line 580 "mercury_compile_front_end.m"
    {
#line 580 "mercury_compile_front_end.m"
      libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_front_end__Verbose_9, (MR_String) "% done.\n");
    }
#line 581 "mercury_compile_front_end.m"
    {
#line 581 "mercury_compile_front_end.m"
      libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_front_end__Stats_10);
#line 581 "mercury_compile_front_end.m"
      return;
    }
#line 573 "mercury_compile_front_end.m"
  }
#line 569 "mercury_compile_front_end.m"
}

#line 545 "mercury_compile_front_end.m"
static void MR_CALL 
top_level__mercury_compile_front_end__puritycheck_8_p_0(
#line 545 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__Verbose_9,
#line 545 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__Stats_10,
#line 545 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_17,
#line 545 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_18,
#line 545 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_19,
#line 545 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_20)
#line 545 "mercury_compile_front_end.m"
{
#line 548 "mercury_compile_front_end.m"
  {
#line 548 "mercury_compile_front_end.m"
    MR_bool top_level__mercury_compile_front_end__succeeded;
#line 548 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__PuritySpecs_14;
#line 548 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__Globals_15;
#line 548 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__PurityErrors_16;
#line 548 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_25_25;
#line 548 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_27_27;

#line 549 "mercury_compile_front_end.m"
    {
#line 549 "mercury_compile_front_end.m"
      libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_front_end__Verbose_9, (MR_String) "% Purity-checking clauses...\n");
    }
#line 550 "mercury_compile_front_end.m"
    {
#line 550 "mercury_compile_front_end.m"
      check_hlds__purity__puritycheck_module_4_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_17, &top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_25_25, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &top_level__mercury_compile_front_end__PuritySpecs_14);
    }
#line 551 "mercury_compile_front_end.m"
    {
#line 551 "mercury_compile_front_end.m"
      top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_27_27 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, top_level__mercury_compile_front_end__PuritySpecs_14, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_19);
    }
#line 552 "mercury_compile_front_end.m"
    {
#line 552 "mercury_compile_front_end.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_25_25, &top_level__mercury_compile_front_end__Globals_15);
    }
#line 553 "mercury_compile_front_end.m"
    {
#line 553 "mercury_compile_front_end.m"
      top_level__mercury_compile_front_end__PurityErrors_16 = parse_tree__error_util__contains_errors_2_f_0(top_level__mercury_compile_front_end__Globals_15, top_level__mercury_compile_front_end__PuritySpecs_14);
    }
#line 554 "mercury_compile_front_end.m"
    {
#line 554 "mercury_compile_front_end.m"
      hlds__hlds_error_util__maybe_write_out_errors_8_p_0(top_level__mercury_compile_front_end__Verbose_9, top_level__mercury_compile_front_end__Globals_15, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_25_25, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_18, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_27_27, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_20);
    }
#line 555 "mercury_compile_front_end.m"
    {
#line 555 "mercury_compile_front_end.m"
      libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_front_end__Stats_10);
    }
#line 560 "mercury_compile_front_end.m"
    if ((top_level__mercury_compile_front_end__PurityErrors_16 == (MR_Integer) 0))
#line 561 "mercury_compile_front_end.m"
      {
#line 562 "mercury_compile_front_end.m"
        {
#line 562 "mercury_compile_front_end.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_front_end__Verbose_9, (MR_String) "% Program is purity-correct.\n");
        }
#line 561 "mercury_compile_front_end.m"
      }
#line 560 "mercury_compile_front_end.m"
    else
#line 557 "mercury_compile_front_end.m"
      {
#line 558 "mercury_compile_front_end.m"
        {
#line 558 "mercury_compile_front_end.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_front_end__Verbose_9, (MR_String) "% Program contains purity error(s).\n");
        }
#line 557 "mercury_compile_front_end.m"
      }
#line 565 "mercury_compile_front_end.m"
    {
#line 565 "mercury_compile_front_end.m"
      libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_front_end__Stats_10);
#line 565 "mercury_compile_front_end.m"
      return;
    }
#line 548 "mercury_compile_front_end.m"
  }
#line 545 "mercury_compile_front_end.m"
}

#line 462 "mercury_compile_front_end.m"
static void MR_CALL 
top_level__mercury_compile_front_end__frontend_pass_by_phases_9_p_0(
#line 462 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_26,
#line 462 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_27,
#line 462 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__FoundError_11,
#line 462 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_0_28,
#line 462 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_29,
#line 462 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_30,
#line 462 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_31)
#line 462 "mercury_compile_front_end.m"
{
#line 466 "mercury_compile_front_end.m"
  {
#line 466 "mercury_compile_front_end.m"
    MR_bool top_level__mercury_compile_front_end__succeeded;
#line 466 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__Globals_15;
#line 466 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__Verbose_16;
#line 466 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__Stats_17;
#line 466 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__FoundModeError_18;
#line 466 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__SafeToContinue_19;
#line 466 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_36_36;
#line 466 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_37_37;
#line 466 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_41_41;
#line 466 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_43_43;
#line 466 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_44_44;
#line 466 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_48_48;
#line 466 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_50_50;
#line 466 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_54_54;
#line 466 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_56_56;
#line 466 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_57_57;
#line 466 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_61_61;
#line 466 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_117_117;

#line 467 "mercury_compile_front_end.m"
    {
#line 467 "mercury_compile_front_end.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_26, &top_level__mercury_compile_front_end__Globals_15);
    }
#line 468 "mercury_compile_front_end.m"
    {
#line 468 "mercury_compile_front_end.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_front_end__Globals_15, (MR_Integer) 45, &top_level__mercury_compile_front_end__Verbose_16);
    }
#line 469 "mercury_compile_front_end.m"
    {
#line 469 "mercury_compile_front_end.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_front_end__Globals_15, (MR_Integer) 55, &top_level__mercury_compile_front_end__Stats_17);
    }
#line 471 "mercury_compile_front_end.m"
    {
#line 471 "mercury_compile_front_end.m"
      top_level__mercury_compile_front_end__maybe_polymorphism_8_p_0(top_level__mercury_compile_front_end__Verbose_16, top_level__mercury_compile_front_end__Stats_17, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_26, &top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_36_36, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_30, &top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_37_37);
    }
#line 472 "mercury_compile_front_end.m"
    {
#line 472 "mercury_compile_front_end.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_36_36, (MR_Integer) 30, (MR_String) "polymorphism", top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_0_28, &top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_41_41);
    }
#line 474 "mercury_compile_front_end.m"
    {
#line 474 "mercury_compile_front_end.m"
      top_level__mercury_compile_front_end__maybe_warn_about_unused_imports_8_p_0(top_level__mercury_compile_front_end__Verbose_16, top_level__mercury_compile_front_end__Stats_17, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_36_36, &top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_43_43, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_37_37, &top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_44_44);
    }
#line 475 "mercury_compile_front_end.m"
    {
#line 475 "mercury_compile_front_end.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_43_43, (MR_Integer) 31, (MR_String) "unused_imports", top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_41_41, &top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_48_48);
    }
#line 478 "mercury_compile_front_end.m"
    {
#line 478 "mercury_compile_front_end.m"
      top_level__mercury_compile_front_end__maybe_mode_constraints_6_p_0(top_level__mercury_compile_front_end__Verbose_16, top_level__mercury_compile_front_end__Stats_17, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_43_43, &top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_50_50);
    }
#line 479 "mercury_compile_front_end.m"
    {
#line 479 "mercury_compile_front_end.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_50_50, (MR_Integer) 33, (MR_String) "mode_constraints", top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_48_48, &top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_54_54);
    }
#line 481 "mercury_compile_front_end.m"
    {
#line 481 "mercury_compile_front_end.m"
      top_level__mercury_compile_front_end__modecheck_10_p_0(top_level__mercury_compile_front_end__Verbose_16, top_level__mercury_compile_front_end__Stats_17, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_50_50, &top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_56_56, &top_level__mercury_compile_front_end__FoundModeError_18, &top_level__mercury_compile_front_end__SafeToContinue_19, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_44_44, &top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_57_57);
    }
#line 483 "mercury_compile_front_end.m"
    {
#line 483 "mercury_compile_front_end.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_56_56, (MR_Integer) 35, (MR_String) "modecheck", top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_54_54, &top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_61_61);
    }
#line 488 "mercury_compile_front_end.m"
    if ((top_level__mercury_compile_front_end__SafeToContinue_19 == (MR_Integer) 0))
#line 489 "mercury_compile_front_end.m"
      {
#line 489 "mercury_compile_front_end.m"
        MR_Word top_level__mercury_compile_front_end__FoundUniqError_20;
#line 489 "mercury_compile_front_end.m"
        MR_Word top_level__mercury_compile_front_end__FoundStratError_21;
#line 489 "mercury_compile_front_end.m"
        MR_Word top_level__mercury_compile_front_end__FoundOISUError_22;
#line 489 "mercury_compile_front_end.m"
        MR_Word top_level__mercury_compile_front_end__FoundTryError_23;
#line 489 "mercury_compile_front_end.m"
        MR_Integer top_level__mercury_compile_front_end__NumErrors_24;
#line 489 "mercury_compile_front_end.m"
        MR_Integer top_level__mercury_compile_front_end__ExitStatus_25;
#line 489 "mercury_compile_front_end.m"
        MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_63_63;
#line 489 "mercury_compile_front_end.m"
        MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_67_67;
#line 489 "mercury_compile_front_end.m"
        MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_69_69;
#line 489 "mercury_compile_front_end.m"
        MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_73_73;
#line 489 "mercury_compile_front_end.m"
        MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_75_75;
#line 489 "mercury_compile_front_end.m"
        MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_76_76;
#line 489 "mercury_compile_front_end.m"
        MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_80_80;
#line 489 "mercury_compile_front_end.m"
        MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_82_82;
#line 489 "mercury_compile_front_end.m"
        MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_83_83;
#line 489 "mercury_compile_front_end.m"
        MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_87_87;
#line 489 "mercury_compile_front_end.m"
        MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_89_89;
#line 489 "mercury_compile_front_end.m"
        MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_90_90;
#line 489 "mercury_compile_front_end.m"
        MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_94_94;
#line 489 "mercury_compile_front_end.m"
        MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_96_96;
#line 489 "mercury_compile_front_end.m"
        MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_97_97;
#line 489 "mercury_compile_front_end.m"
        MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_101_101;
#line 489 "mercury_compile_front_end.m"
        MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_103_103;
#line 489 "mercury_compile_front_end.m"
        MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_104_104;
#line 489 "mercury_compile_front_end.m"
        MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_108_108;
#line 489 "mercury_compile_front_end.m"
        MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_112_112;
#line 489 "mercury_compile_front_end.m"
        MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_113_113;

#line 490 "mercury_compile_front_end.m"
        {
#line 490 "mercury_compile_front_end.m"
          top_level__mercury_compile_front_end__detect_switches_6_p_0(top_level__mercury_compile_front_end__Verbose_16, top_level__mercury_compile_front_end__Stats_17, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_56_56, &top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_63_63);
        }
#line 491 "mercury_compile_front_end.m"
        {
#line 491 "mercury_compile_front_end.m"
          hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_63_63, (MR_Integer) 40, (MR_String) "switch_detect", top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_61_61, &top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_67_67);
        }
#line 493 "mercury_compile_front_end.m"
        {
#line 493 "mercury_compile_front_end.m"
          top_level__mercury_compile_front_end__detect_cse_6_p_0(top_level__mercury_compile_front_end__Verbose_16, top_level__mercury_compile_front_end__Stats_17, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_63_63, &top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_69_69);
        }
#line 494 "mercury_compile_front_end.m"
        {
#line 494 "mercury_compile_front_end.m"
          hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_69_69, (MR_Integer) 45, (MR_String) "cse", top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_67_67, &top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_73_73);
        }
#line 496 "mercury_compile_front_end.m"
        {
#line 496 "mercury_compile_front_end.m"
          top_level__mercury_compile_front_end__check_determinism_8_p_0(top_level__mercury_compile_front_end__Verbose_16, top_level__mercury_compile_front_end__Stats_17, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_69_69, &top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_75_75, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_57_57, &top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_76_76);
        }
#line 497 "mercury_compile_front_end.m"
        {
#line 497 "mercury_compile_front_end.m"
          hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_75_75, (MR_Integer) 50, (MR_String) "determinism", top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_73_73, &top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_80_80);
        }
#line 499 "mercury_compile_front_end.m"
        {
#line 499 "mercury_compile_front_end.m"
          top_level__mercury_compile_front_end__check_unique_modes_9_p_0(top_level__mercury_compile_front_end__Verbose_16, top_level__mercury_compile_front_end__Stats_17, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_75_75, &top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_82_82, &top_level__mercury_compile_front_end__FoundUniqError_20, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_76_76, &top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_83_83);
        }
#line 500 "mercury_compile_front_end.m"
        {
#line 500 "mercury_compile_front_end.m"
          hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_82_82, (MR_Integer) 55, (MR_String) "unique_modes", top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_80_80, &top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_87_87);
        }
#line 502 "mercury_compile_front_end.m"
        {
#line 502 "mercury_compile_front_end.m"
          top_level__mercury_compile_front_end__check_stratification_9_p_0(top_level__mercury_compile_front_end__Verbose_16, top_level__mercury_compile_front_end__Stats_17, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_82_82, &top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_89_89, &top_level__mercury_compile_front_end__FoundStratError_21, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_83_83, &top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_90_90);
        }
#line 504 "mercury_compile_front_end.m"
        {
#line 504 "mercury_compile_front_end.m"
          hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_89_89, (MR_Integer) 60, (MR_String) "stratification", top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_87_87, &top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_94_94);
        }
#line 506 "mercury_compile_front_end.m"
        {
#line 506 "mercury_compile_front_end.m"
          top_level__mercury_compile_front_end__check_oisu_pragmas_9_p_0(top_level__mercury_compile_front_end__Verbose_16, top_level__mercury_compile_front_end__Stats_17, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_89_89, &top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_96_96, &top_level__mercury_compile_front_end__FoundOISUError_22, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_90_90, &top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_97_97);
        }
#line 508 "mercury_compile_front_end.m"
        {
#line 508 "mercury_compile_front_end.m"
          hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_96_96, (MR_Integer) 61, (MR_String) "oisu", top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_94_94, &top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_101_101);
        }
#line 510 "mercury_compile_front_end.m"
        {
#line 510 "mercury_compile_front_end.m"
          top_level__mercury_compile_front_end__process_try_goals_9_p_0(top_level__mercury_compile_front_end__Verbose_16, top_level__mercury_compile_front_end__Stats_17, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_96_96, &top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_103_103, &top_level__mercury_compile_front_end__FoundTryError_23, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_97_97, &top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_104_104);
        }
#line 511 "mercury_compile_front_end.m"
        {
#line 511 "mercury_compile_front_end.m"
          hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_103_103, (MR_Integer) 62, (MR_String) "try", top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_101_101, &top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_108_108);
        }
#line 513 "mercury_compile_front_end.m"
        {
#line 513 "mercury_compile_front_end.m"
          top_level__mercury_compile_front_end__maybe_simplify_10_p_0((MR_Integer) 1, (MR_Integer) 0, top_level__mercury_compile_front_end__Verbose_16, top_level__mercury_compile_front_end__Stats_17, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_103_103, &top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_112_112, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_104_104, &top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_113_113);
        }
#line 515 "mercury_compile_front_end.m"
        {
#line 515 "mercury_compile_front_end.m"
          hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_112_112, (MR_Integer) 65, (MR_String) "frontend_simplify", top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_108_108, &top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_117_117);
        }
#line 517 "mercury_compile_front_end.m"
        {
#line 517 "mercury_compile_front_end.m"
          top_level__mercury_compile_front_end__maybe_proc_statistics_9_p_0(top_level__mercury_compile_front_end__Verbose_16, top_level__mercury_compile_front_end__Stats_17, (MR_String) "AfterFrontEnd", top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_112_112, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_27, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_113_113, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_31);
        }
#line 521 "mercury_compile_front_end.m"
        {
#line 521 "mercury_compile_front_end.m"
          hlds__hlds_module__module_info_get_num_errors_2_p_0(*top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_27, &top_level__mercury_compile_front_end__NumErrors_24);
        }
#line 522 "mercury_compile_front_end.m"
        {
#line 522 "mercury_compile_front_end.m"
          mercury__io__get_exit_status_3_p_0(&top_level__mercury_compile_front_end__ExitStatus_25);
        }
#line 524 "mercury_compile_front_end.m"
        top_level__mercury_compile_front_end__succeeded = (top_level__mercury_compile_front_end__FoundModeError_18 == (MR_Integer) 0);
#line 524 "mercury_compile_front_end.m"
        if (top_level__mercury_compile_front_end__succeeded)
#line 524 "mercury_compile_front_end.m"
          {
#line 525 "mercury_compile_front_end.m"
            top_level__mercury_compile_front_end__succeeded = (top_level__mercury_compile_front_end__FoundUniqError_20 == (MR_Integer) 0);
#line 524 "mercury_compile_front_end.m"
            if (top_level__mercury_compile_front_end__succeeded)
#line 524 "mercury_compile_front_end.m"
              {
#line 526 "mercury_compile_front_end.m"
                top_level__mercury_compile_front_end__succeeded = (top_level__mercury_compile_front_end__FoundStratError_21 == (MR_Integer) 0);
#line 524 "mercury_compile_front_end.m"
                if (top_level__mercury_compile_front_end__succeeded)
#line 524 "mercury_compile_front_end.m"
                  {
#line 527 "mercury_compile_front_end.m"
                    top_level__mercury_compile_front_end__succeeded = (top_level__mercury_compile_front_end__FoundOISUError_22 == (MR_Integer) 0);
#line 524 "mercury_compile_front_end.m"
                    if (top_level__mercury_compile_front_end__succeeded)
#line 524 "mercury_compile_front_end.m"
                      {
#line 528 "mercury_compile_front_end.m"
                        top_level__mercury_compile_front_end__succeeded = (top_level__mercury_compile_front_end__FoundTryError_23 == (MR_Integer) 0);
#line 524 "mercury_compile_front_end.m"
                        if (top_level__mercury_compile_front_end__succeeded)
#line 524 "mercury_compile_front_end.m"
                          {
#line 529 "mercury_compile_front_end.m"
                            top_level__mercury_compile_front_end__succeeded = (top_level__mercury_compile_front_end__NumErrors_24 == (MR_Integer) 0);
#line 524 "mercury_compile_front_end.m"
                            if (top_level__mercury_compile_front_end__succeeded)
#line 533 "mercury_compile_front_end.m"
                              top_level__mercury_compile_front_end__succeeded = (top_level__mercury_compile_front_end__ExitStatus_25 == (MR_Integer) 0);
#line 524 "mercury_compile_front_end.m"
                          }
#line 524 "mercury_compile_front_end.m"
                      }
#line 524 "mercury_compile_front_end.m"
                  }
#line 524 "mercury_compile_front_end.m"
              }
#line 524 "mercury_compile_front_end.m"
          }
#line 536 "mercury_compile_front_end.m"
        if (top_level__mercury_compile_front_end__succeeded)
#line 535 "mercury_compile_front_end.m"
          *top_level__mercury_compile_front_end__FoundError_11 = (MR_Integer) 0;
#line 536 "mercury_compile_front_end.m"
        else
#line 537 "mercury_compile_front_end.m"
          *top_level__mercury_compile_front_end__FoundError_11 = (MR_Integer) 1;
#line 489 "mercury_compile_front_end.m"
      }
#line 488 "mercury_compile_front_end.m"
    else
#line 486 "mercury_compile_front_end.m"
      {
#line 487 "mercury_compile_front_end.m"
        *top_level__mercury_compile_front_end__FoundError_11 = (MR_Integer) 1;
#line 486 "mercury_compile_front_end.m"
        *top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_27 = top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_56_56;
#line 486 "mercury_compile_front_end.m"
        top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_117_117 = top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_61_61;
#line 486 "mercury_compile_front_end.m"
        *top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_31 = top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_57_57;
#line 486 "mercury_compile_front_end.m"
      }
#line 540 "mercury_compile_front_end.m"
    {
#line 540 "mercury_compile_front_end.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(*top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_27, (MR_Integer) 99, (MR_String) "front_end", top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_117_117, top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_29);
#line 540 "mercury_compile_front_end.m"
      return;
    }
#line 466 "mercury_compile_front_end.m"
  }
#line 462 "mercury_compile_front_end.m"
}

#line 361 "mercury_compile_front_end.m"
static void MR_CALL 
top_level__mercury_compile_front_end__maybe_write_optfile_9_p_0(
#line 361 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__MakeOptInt_10,
#line 361 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_36,
#line 361 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_37,
#line 361 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_0_38,
#line 361 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_39,
#line 361 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_40,
#line 361 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_41)
#line 361 "mercury_compile_front_end.m"
{
#line 365 "mercury_compile_front_end.m"
  {
#line 365 "mercury_compile_front_end.m"
    MR_bool top_level__mercury_compile_front_end__succeeded;
#line 365 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__Globals_15;
#line 365 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__IntermodOpt_16;
#line 365 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__IntermodAnalysis_17;
#line 365 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__IntermodArgs_18;
#line 365 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__IntermodDirs_19;
#line 365 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__UseOptFiles_20;
#line 365 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__Termination_21;
#line 365 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__Termination2_22;
#line 365 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__SharingAnalysis_23;
#line 365 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__ReuseAnalysis_24;
#line 365 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__ExceptionAnalysis_25;
#line 365 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__ClosureAnalysis_26;
#line 365 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__TrailingAnalysis_27;
#line 365 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__TablingAnalysis_28;

#line 366 "mercury_compile_front_end.m"
    {
#line 366 "mercury_compile_front_end.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_36, &top_level__mercury_compile_front_end__Globals_15);
    }
#line 367 "mercury_compile_front_end.m"
    {
#line 367 "mercury_compile_front_end.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_front_end__Globals_15, (MR_Integer) 328, &top_level__mercury_compile_front_end__IntermodOpt_16);
    }
#line 368 "mercury_compile_front_end.m"
    {
#line 368 "mercury_compile_front_end.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_front_end__Globals_15, (MR_Integer) 333, &top_level__mercury_compile_front_end__IntermodAnalysis_17);
    }
#line 370 "mercury_compile_front_end.m"
    {
#line 370 "mercury_compile_front_end.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_front_end__Globals_15, (MR_Integer) 353, &top_level__mercury_compile_front_end__IntermodArgs_18);
    }
#line 371 "mercury_compile_front_end.m"
    {
#line 371 "mercury_compile_front_end.m"
      libs__globals__lookup_accumulating_option_3_p_0(top_level__mercury_compile_front_end__Globals_15, (MR_Integer) 648, &top_level__mercury_compile_front_end__IntermodDirs_19);
    }
#line 373 "mercury_compile_front_end.m"
    {
#line 373 "mercury_compile_front_end.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_front_end__Globals_15, (MR_Integer) 330, &top_level__mercury_compile_front_end__UseOptFiles_20);
    }
#line 374 "mercury_compile_front_end.m"
    {
#line 374 "mercury_compile_front_end.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_front_end__Globals_15, (MR_Integer) 416, &top_level__mercury_compile_front_end__Termination_21);
    }
#line 375 "mercury_compile_front_end.m"
    {
#line 375 "mercury_compile_front_end.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_front_end__Globals_15, (MR_Integer) 423, &top_level__mercury_compile_front_end__Termination2_22);
    }
#line 376 "mercury_compile_front_end.m"
    {
#line 376 "mercury_compile_front_end.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_front_end__Globals_15, (MR_Integer) 408, &top_level__mercury_compile_front_end__SharingAnalysis_23);
    }
#line 378 "mercury_compile_front_end.m"
    {
#line 378 "mercury_compile_front_end.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_front_end__Globals_15, (MR_Integer) 410, &top_level__mercury_compile_front_end__ReuseAnalysis_24);
    }
#line 380 "mercury_compile_front_end.m"
    {
#line 380 "mercury_compile_front_end.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_front_end__Globals_15, (MR_Integer) 431, &top_level__mercury_compile_front_end__ExceptionAnalysis_25);
    }
#line 382 "mercury_compile_front_end.m"
    {
#line 382 "mercury_compile_front_end.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_front_end__Globals_15, (MR_Integer) 432, &top_level__mercury_compile_front_end__ClosureAnalysis_26);
    }
#line 384 "mercury_compile_front_end.m"
    {
#line 384 "mercury_compile_front_end.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_front_end__Globals_15, (MR_Integer) 395, &top_level__mercury_compile_front_end__TrailingAnalysis_27);
    }
#line 386 "mercury_compile_front_end.m"
    {
#line 386 "mercury_compile_front_end.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_front_end__Globals_15, (MR_Integer) 398, &top_level__mercury_compile_front_end__TablingAnalysis_28);
    }
#line 428 "mercury_compile_front_end.m"
    if ((top_level__mercury_compile_front_end__MakeOptInt_10 == (MR_Integer) 0))
#line 429 "mercury_compile_front_end.m"
      {
#line 432 "mercury_compile_front_end.m"
        top_level__mercury_compile_front_end__succeeded = (top_level__mercury_compile_front_end__IntermodOpt_16 == (MR_Integer) 1);
#line 3388 "top_level.mercury_compile_front_end.c"
        if (top_level__mercury_compile_front_end__succeeded)
#line 454 "mercury_compile_front_end.m"
          {
#line 454 "mercury_compile_front_end.m"
            transform_hlds__intermod__adjust_pred_import_status_2_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_36, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_37);
          }
#line 3395 "top_level.mercury_compile_front_end.c"
        else
#line 3397 "top_level.mercury_compile_front_end.c"
          {
#line 434 "mercury_compile_front_end.m"
            top_level__mercury_compile_front_end__succeeded = (top_level__mercury_compile_front_end__IntermodAnalysis_17 == (MR_Integer) 1);
#line 3401 "top_level.mercury_compile_front_end.c"
            if (top_level__mercury_compile_front_end__succeeded)
#line 454 "mercury_compile_front_end.m"
              {
#line 454 "mercury_compile_front_end.m"
                transform_hlds__intermod__adjust_pred_import_status_2_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_36, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_37);
              }
#line 3408 "top_level.mercury_compile_front_end.c"
            else
#line 3410 "top_level.mercury_compile_front_end.c"
              {
#line 436 "mercury_compile_front_end.m"
                top_level__mercury_compile_front_end__succeeded = (top_level__mercury_compile_front_end__UseOptFiles_20 == (MR_Integer) 1);
#line 3414 "top_level.mercury_compile_front_end.c"
                if (top_level__mercury_compile_front_end__succeeded)
#line 3416 "top_level.mercury_compile_front_end.c"
                  {
#line 3418 "top_level.mercury_compile_front_end.c"
                    MR_Word top_level__mercury_compile_front_end__Found_33;
#line 3420 "top_level.mercury_compile_front_end.c"
                    MR_Word top_level__mercury_compile_front_end__ModuleName_78;
#line 3422 "top_level.mercury_compile_front_end.c"
                    MR_String top_level__mercury_compile_front_end__OptName_79;

#line 437 "mercury_compile_front_end.m"
                    {
#line 437 "mercury_compile_front_end.m"
                      hlds__hlds_module__module_info_get_name_2_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_36, &top_level__mercury_compile_front_end__ModuleName_78);
                    }
#line 438 "mercury_compile_front_end.m"
                    {
#line 438 "mercury_compile_front_end.m"
                      parse_tree__file_names__module_name_to_search_file_name_6_p_0(top_level__mercury_compile_front_end__Globals_15, top_level__mercury_compile_front_end__ModuleName_78, (MR_String) ".opt", &top_level__mercury_compile_front_end__OptName_79);
                    }
#line 440 "mercury_compile_front_end.m"
                    {
#line 440 "mercury_compile_front_end.m"
                      libs__file_util__search_for_file_returning_dir_6_p_0((MR_Integer) 1, top_level__mercury_compile_front_end__IntermodDirs_19, top_level__mercury_compile_front_end__OptName_79, &top_level__mercury_compile_front_end__Found_33);
                    }
#line 3440 "top_level.mercury_compile_front_end.c"
                    if (((MR_tag((MR_Word) top_level__mercury_compile_front_end__Found_33)) == (MR_mktag((MR_Integer) 1))))
#line 456 "mercury_compile_front_end.m"
                      *top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_37 = top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_36;
#line 3444 "top_level.mercury_compile_front_end.c"
                    else
#line 454 "mercury_compile_front_end.m"
                      {
#line 454 "mercury_compile_front_end.m"
                        transform_hlds__intermod__adjust_pred_import_status_2_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_36, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_37);
                      }
#line 3451 "top_level.mercury_compile_front_end.c"
                  }
#line 3453 "top_level.mercury_compile_front_end.c"
                else
#line 456 "mercury_compile_front_end.m"
                  *top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_37 = top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_36;
#line 3457 "top_level.mercury_compile_front_end.c"
              }
#line 3459 "top_level.mercury_compile_front_end.c"
          }
#line 429 "mercury_compile_front_end.m"
        *top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_39 = top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_0_38;
#line 429 "mercury_compile_front_end.m"
        *top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_41 = top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_40;
#line 429 "mercury_compile_front_end.m"
      }
#line 428 "mercury_compile_front_end.m"
    else
#line 388 "mercury_compile_front_end.m"
      {
#line 388 "mercury_compile_front_end.m"
        MR_Word top_level__mercury_compile_front_end__ModuleName_30;
#line 388 "mercury_compile_front_end.m"
        MR_String top_level__mercury_compile_front_end__OptName_31;
#line 388 "mercury_compile_front_end.m"
        MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_62_62;

#line 389 "mercury_compile_front_end.m"
        {
#line 389 "mercury_compile_front_end.m"
          transform_hlds__intermod__write_opt_file_4_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_36, &top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_62_62);
        }
#line 399 "mercury_compile_front_end.m"
        top_level__mercury_compile_front_end__succeeded = (top_level__mercury_compile_front_end__IntermodAnalysis_17 == (MR_Integer) 0);
#line 399 "mercury_compile_front_end.m"
        if (top_level__mercury_compile_front_end__succeeded)
#line 399 "mercury_compile_front_end.m"
          {
#line 400 "mercury_compile_front_end.m"
            top_level__mercury_compile_front_end__succeeded = (top_level__mercury_compile_front_end__IntermodArgs_18 == (MR_Integer) 1);
#line 401 "mercury_compile_front_end.m"
            if (!(top_level__mercury_compile_front_end__succeeded))
#line 401 "mercury_compile_front_end.m"
              {
#line 401 "mercury_compile_front_end.m"
                top_level__mercury_compile_front_end__succeeded = (top_level__mercury_compile_front_end__Termination_21 == (MR_Integer) 1);
#line 401 "mercury_compile_front_end.m"
                if (!(top_level__mercury_compile_front_end__succeeded))
#line 401 "mercury_compile_front_end.m"
                  {
#line 402 "mercury_compile_front_end.m"
                    top_level__mercury_compile_front_end__succeeded = (top_level__mercury_compile_front_end__Termination2_22 == (MR_Integer) 1);
#line 401 "mercury_compile_front_end.m"
                    if (!(top_level__mercury_compile_front_end__succeeded))
#line 401 "mercury_compile_front_end.m"
                      {
#line 403 "mercury_compile_front_end.m"
                        top_level__mercury_compile_front_end__succeeded = (top_level__mercury_compile_front_end__ExceptionAnalysis_25 == (MR_Integer) 1);
#line 401 "mercury_compile_front_end.m"
                        if (!(top_level__mercury_compile_front_end__succeeded))
#line 401 "mercury_compile_front_end.m"
                          {
#line 404 "mercury_compile_front_end.m"
                            top_level__mercury_compile_front_end__succeeded = (top_level__mercury_compile_front_end__TrailingAnalysis_27 == (MR_Integer) 1);
#line 401 "mercury_compile_front_end.m"
                            if (!(top_level__mercury_compile_front_end__succeeded))
#line 401 "mercury_compile_front_end.m"
                              {
#line 405 "mercury_compile_front_end.m"
                                top_level__mercury_compile_front_end__succeeded = (top_level__mercury_compile_front_end__TablingAnalysis_28 == (MR_Integer) 1);
#line 401 "mercury_compile_front_end.m"
                                if (!(top_level__mercury_compile_front_end__succeeded))
#line 401 "mercury_compile_front_end.m"
                                  {
#line 406 "mercury_compile_front_end.m"
                                    top_level__mercury_compile_front_end__succeeded = (top_level__mercury_compile_front_end__ClosureAnalysis_26 == (MR_Integer) 1);
#line 401 "mercury_compile_front_end.m"
                                    if (!(top_level__mercury_compile_front_end__succeeded))
#line 401 "mercury_compile_front_end.m"
                                      {
#line 407 "mercury_compile_front_end.m"
                                        top_level__mercury_compile_front_end__succeeded = (top_level__mercury_compile_front_end__SharingAnalysis_23 == (MR_Integer) 1);
#line 401 "mercury_compile_front_end.m"
                                        if (!(top_level__mercury_compile_front_end__succeeded))
#line 408 "mercury_compile_front_end.m"
                                          top_level__mercury_compile_front_end__succeeded = (top_level__mercury_compile_front_end__ReuseAnalysis_24 == (MR_Integer) 1);
#line 401 "mercury_compile_front_end.m"
                                      }
#line 401 "mercury_compile_front_end.m"
                                  }
#line 401 "mercury_compile_front_end.m"
                              }
#line 401 "mercury_compile_front_end.m"
                          }
#line 401 "mercury_compile_front_end.m"
                      }
#line 401 "mercury_compile_front_end.m"
                  }
#line 401 "mercury_compile_front_end.m"
              }
#line 399 "mercury_compile_front_end.m"
          }
#line 420 "mercury_compile_front_end.m"
        if (top_level__mercury_compile_front_end__succeeded)
#line 412 "mercury_compile_front_end.m"
          {
#line 412 "mercury_compile_front_end.m"
            MR_Word top_level__mercury_compile_front_end__FoundModeError_29;
#line 412 "mercury_compile_front_end.m"
            MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_64_64;

#line 411 "mercury_compile_front_end.m"
            {
#line 411 "mercury_compile_front_end.m"
              top_level__mercury_compile_front_end__frontend_pass_by_phases_9_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_62_62, &top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_64_64, &top_level__mercury_compile_front_end__FoundModeError_29, top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_0_38, top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_39, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_40, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_41);
            }
#line 416 "mercury_compile_front_end.m"
            if ((top_level__mercury_compile_front_end__FoundModeError_29 == (MR_Integer) 0))
#line 415 "mercury_compile_front_end.m"
              {
#line 415 "mercury_compile_front_end.m"
                top_level__mercury_compile_middle_passes__middle_pass_for_opt_file_4_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_64_64, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_37);
              }
#line 416 "mercury_compile_front_end.m"
            else
#line 417 "mercury_compile_front_end.m"
              {
#line 418 "mercury_compile_front_end.m"
                {
#line 418 "mercury_compile_front_end.m"
                  mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
                }
#line 417 "mercury_compile_front_end.m"
                *top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_37 = top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_64_64;
#line 417 "mercury_compile_front_end.m"
              }
#line 412 "mercury_compile_front_end.m"
          }
#line 420 "mercury_compile_front_end.m"
        else
#line 421 "mercury_compile_front_end.m"
          {
#line 421 "mercury_compile_front_end.m"
            *top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_41 = top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_40;
#line 421 "mercury_compile_front_end.m"
            *top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_39 = top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_0_38;
#line 421 "mercury_compile_front_end.m"
            *top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_37 = top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_62_62;
#line 421 "mercury_compile_front_end.m"
          }
#line 423 "mercury_compile_front_end.m"
        {
#line 423 "mercury_compile_front_end.m"
          hlds__hlds_module__module_info_get_name_2_p_0(*top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_37, &top_level__mercury_compile_front_end__ModuleName_30);
        }
#line 424 "mercury_compile_front_end.m"
        {
#line 424 "mercury_compile_front_end.m"
          parse_tree__file_names__module_name_to_file_name_7_p_0(top_level__mercury_compile_front_end__Globals_15, top_level__mercury_compile_front_end__ModuleName_30, (MR_String) ".opt", (MR_Integer) 0, &top_level__mercury_compile_front_end__OptName_31);
        }
#line 426 "mercury_compile_front_end.m"
        {
#line 426 "mercury_compile_front_end.m"
          parse_tree__module_cmds__update_interface_4_p_0(top_level__mercury_compile_front_end__Globals_15, top_level__mercury_compile_front_end__OptName_31);
        }
#line 427 "mercury_compile_front_end.m"
        {
#line 427 "mercury_compile_front_end.m"
          parse_tree__module_cmds__touch_interface_datestamp_5_p_0(top_level__mercury_compile_front_end__Globals_15, top_level__mercury_compile_front_end__ModuleName_30, (MR_String) ".optdate");
#line 427 "mercury_compile_front_end.m"
          return;
        }
#line 388 "mercury_compile_front_end.m"
      }
#line 365 "mercury_compile_front_end.m"
  }
#line 361 "mercury_compile_front_end.m"
}

#line 171 "mercury_compile_front_end.m"
static void MR_CALL 
top_level__mercury_compile_front_end__frontend_pass_after_typeclass_check_11_p_0(
#line 171 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__FoundUndefModeError_12,
#line 171 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_FoundError_0_39,
#line 171 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_FoundError_40,
#line 171 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_41,
#line 171 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_42,
#line 171 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_0_43,
#line 171 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_44,
#line 171 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_45,
#line 171 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_46)
#line 171 "mercury_compile_front_end.m"
{
#line 176 "mercury_compile_front_end.m"
  {
#line 176 "mercury_compile_front_end.m"
    MR_bool top_level__mercury_compile_front_end__succeeded;
#line 176 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__TypeCtorInfo_154_154;
#line 176 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__Globals_18;
#line 176 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__Verbose_19;
#line 176 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__Stats_20;
#line 176 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__IntermodOpt_21;
#line 176 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__IntermodAnalysis_22;
#line 176 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__UseOptFiles_23;
#line 176 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__MakeOptInt_24;
#line 176 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__TypeCheckConstraints_25;
#line 176 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__WarnInstsWithNoMatchingType_26;
#line 176 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__TypeCheckSpecs_27;
#line 176 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__ExceededTypeCheckIterationLimit_28;
#line 176 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__FoundTypeError_29;
#line 176 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_62_62;
#line 176 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_63_63;
#line 176 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_69_69;
#line 176 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_78_78;
#line 176 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_79_79;
#line 176 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_85_85;
#line 176 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_87_87;
#line 176 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_88_88;
#line 176 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_95_95;
#line 176 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_96_96;
#line 176 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_97_97;
#line 176 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_98_98;
#line 176 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_107_107;

#line 177 "mercury_compile_front_end.m"
    {
#line 177 "mercury_compile_front_end.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_41, &top_level__mercury_compile_front_end__Globals_18);
    }
#line 178 "mercury_compile_front_end.m"
    {
#line 178 "mercury_compile_front_end.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_front_end__Globals_18, (MR_Integer) 45, &top_level__mercury_compile_front_end__Verbose_19);
    }
#line 179 "mercury_compile_front_end.m"
    {
#line 179 "mercury_compile_front_end.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_front_end__Globals_18, (MR_Integer) 55, &top_level__mercury_compile_front_end__Stats_20);
    }
#line 180 "mercury_compile_front_end.m"
    {
#line 180 "mercury_compile_front_end.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_front_end__Globals_18, (MR_Integer) 328, &top_level__mercury_compile_front_end__IntermodOpt_21);
    }
#line 181 "mercury_compile_front_end.m"
    {
#line 181 "mercury_compile_front_end.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_front_end__Globals_18, (MR_Integer) 333, &top_level__mercury_compile_front_end__IntermodAnalysis_22);
    }
#line 183 "mercury_compile_front_end.m"
    {
#line 183 "mercury_compile_front_end.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_front_end__Globals_18, (MR_Integer) 330, &top_level__mercury_compile_front_end__UseOptFiles_23);
    }
#line 184 "mercury_compile_front_end.m"
    {
#line 184 "mercury_compile_front_end.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_front_end__Globals_18, (MR_Integer) 87, &top_level__mercury_compile_front_end__MakeOptInt_24);
    }
#line 186 "mercury_compile_front_end.m"
    {
#line 186 "mercury_compile_front_end.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_front_end__Globals_18, (MR_Integer) 300, &top_level__mercury_compile_front_end__TypeCheckConstraints_25);
    }
#line 189 "mercury_compile_front_end.m"
    top_level__mercury_compile_front_end__succeeded = (top_level__mercury_compile_front_end__IntermodOpt_21 == (MR_Integer) 1);
#line 190 "mercury_compile_front_end.m"
    if (!(top_level__mercury_compile_front_end__succeeded))
#line 190 "mercury_compile_front_end.m"
      {
#line 190 "mercury_compile_front_end.m"
        top_level__mercury_compile_front_end__succeeded = (top_level__mercury_compile_front_end__IntermodAnalysis_22 == (MR_Integer) 1);
#line 190 "mercury_compile_front_end.m"
        if (!(top_level__mercury_compile_front_end__succeeded))
#line 191 "mercury_compile_front_end.m"
          top_level__mercury_compile_front_end__succeeded = (top_level__mercury_compile_front_end__UseOptFiles_23 == (MR_Integer) 1);
#line 190 "mercury_compile_front_end.m"
      }
#line 192 "mercury_compile_front_end.m"
    if (top_level__mercury_compile_front_end__succeeded)
#line 193 "mercury_compile_front_end.m"
      top_level__mercury_compile_front_end__succeeded = (top_level__mercury_compile_front_end__MakeOptInt_24 == (MR_Integer) 0);
#line 205 "mercury_compile_front_end.m"
    if (top_level__mercury_compile_front_end__succeeded)
#line 199 "mercury_compile_front_end.m"
      {
#line 199 "mercury_compile_front_end.m"
        MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_56_56;
#line 199 "mercury_compile_front_end.m"
        MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_57_57;
#line 199 "mercury_compile_front_end.m"
        MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_61_61;

#line 199 "mercury_compile_front_end.m"
        {
#line 199 "mercury_compile_front_end.m"
          hlds__hlds_error_util__maybe_write_out_errors_8_p_0(top_level__mercury_compile_front_end__Verbose_19, top_level__mercury_compile_front_end__Globals_18, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_41, &top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_56_56, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_45, &top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_57_57);
        }
#line 200 "mercury_compile_front_end.m"
        {
#line 200 "mercury_compile_front_end.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_front_end__Verbose_19, (MR_String) "% Eliminating dead predicates... ");
        }
#line 201 "mercury_compile_front_end.m"
        {
#line 201 "mercury_compile_front_end.m"
          transform_hlds__dead_proc_elim__dead_pred_elim_2_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_56_56, &top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_61_61);
        }
#line 202 "mercury_compile_front_end.m"
        {
#line 202 "mercury_compile_front_end.m"
          hlds__hlds_error_util__maybe_write_out_errors_8_p_0(top_level__mercury_compile_front_end__Verbose_19, top_level__mercury_compile_front_end__Globals_18, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_61_61, &top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_62_62, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_57_57, &top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_63_63);
        }
#line 203 "mercury_compile_front_end.m"
        {
#line 203 "mercury_compile_front_end.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_front_end__Verbose_19, (MR_String) "done.\n");
        }
#line 204 "mercury_compile_front_end.m"
        {
#line 204 "mercury_compile_front_end.m"
          hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_62_62, (MR_Integer) 10, (MR_String) "dead_pred_elim", top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_0_43, &top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_69_69);
        }
#line 199 "mercury_compile_front_end.m"
      }
#line 205 "mercury_compile_front_end.m"
    else
#line 206 "mercury_compile_front_end.m"
      {
#line 206 "mercury_compile_front_end.m"
        top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_63_63 = top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_45;
#line 206 "mercury_compile_front_end.m"
        top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_69_69 = top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_0_43;
#line 206 "mercury_compile_front_end.m"
        top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_62_62 = top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_41;
#line 206 "mercury_compile_front_end.m"
      }
#line 209 "mercury_compile_front_end.m"
    {
#line 209 "mercury_compile_front_end.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_front_end__Globals_18, (MR_Integer) 36, &top_level__mercury_compile_front_end__WarnInstsWithNoMatchingType_26);
    }
#line 221 "mercury_compile_front_end.m"
    if ((top_level__mercury_compile_front_end__WarnInstsWithNoMatchingType_26 == (MR_Integer) 0))
#line 222 "mercury_compile_front_end.m"
      {
#line 222 "mercury_compile_front_end.m"
        top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_78_78 = top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_62_62;
#line 222 "mercury_compile_front_end.m"
        top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_85_85 = top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_69_69;
#line 222 "mercury_compile_front_end.m"
        top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_79_79 = top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_63_63;
#line 222 "mercury_compile_front_end.m"
      }
#line 221 "mercury_compile_front_end.m"
    else
#line 212 "mercury_compile_front_end.m"
      {
#line 212 "mercury_compile_front_end.m"
        MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_72_72;
#line 212 "mercury_compile_front_end.m"
        MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_73_73;
#line 212 "mercury_compile_front_end.m"
        MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_77_77;

#line 213 "mercury_compile_front_end.m"
        {
#line 213 "mercury_compile_front_end.m"
          hlds__hlds_error_util__maybe_write_out_errors_8_p_0(top_level__mercury_compile_front_end__Verbose_19, top_level__mercury_compile_front_end__Globals_18, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_62_62, &top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_72_72, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_63_63, &top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_73_73);
        }
#line 214 "mercury_compile_front_end.m"
        {
#line 214 "mercury_compile_front_end.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_front_end__Verbose_19, (MR_String) "% Checking that insts have matching types... ");
        }
#line 216 "mercury_compile_front_end.m"
        {
#line 216 "mercury_compile_front_end.m"
          check_hlds__inst_check__check_insts_have_matching_types_3_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_72_72, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_73_73, &top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_77_77);
        }
#line 217 "mercury_compile_front_end.m"
        {
#line 217 "mercury_compile_front_end.m"
          hlds__hlds_error_util__maybe_write_out_errors_8_p_0(top_level__mercury_compile_front_end__Verbose_19, top_level__mercury_compile_front_end__Globals_18, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_72_72, &top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_78_78, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_77_77, &top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_79_79);
        }
#line 218 "mercury_compile_front_end.m"
        {
#line 218 "mercury_compile_front_end.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_front_end__Verbose_19, (MR_String) "done.\n");
        }
#line 219 "mercury_compile_front_end.m"
        {
#line 219 "mercury_compile_front_end.m"
          hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_78_78, (MR_Integer) 12, (MR_String) "warn_insts_without_matching_type", top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_69_69, &top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_85_85);
        }
#line 212 "mercury_compile_front_end.m"
      }
#line 226 "mercury_compile_front_end.m"
    {
#line 226 "mercury_compile_front_end.m"
      hlds__hlds_error_util__maybe_write_out_errors_8_p_0(top_level__mercury_compile_front_end__Verbose_19, top_level__mercury_compile_front_end__Globals_18, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_78_78, &top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_87_87, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_79_79, &top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_88_88);
    }
#line 227 "mercury_compile_front_end.m"
    {
#line 227 "mercury_compile_front_end.m"
      libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_front_end__Verbose_19, (MR_String) "% Type-checking...\n");
    }
#line 228 "mercury_compile_front_end.m"
    {
#line 228 "mercury_compile_front_end.m"
      libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_front_end__Verbose_19, (MR_String) "% Type-checking clauses...\n");
    }
#line 233 "mercury_compile_front_end.m"
    if ((top_level__mercury_compile_front_end__TypeCheckConstraints_25 == (MR_Integer) 0))
#line 235 "mercury_compile_front_end.m"
      {
#line 235 "mercury_compile_front_end.m"
        check_hlds__typecheck__typecheck_module_4_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_87_87, &top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_95_95, &top_level__mercury_compile_front_end__TypeCheckSpecs_27, &top_level__mercury_compile_front_end__ExceededTypeCheckIterationLimit_28);
      }
#line 233 "mercury_compile_front_end.m"
    else
#line 230 "mercury_compile_front_end.m"
      {
#line 231 "mercury_compile_front_end.m"
        {
#line 231 "mercury_compile_front_end.m"
          check_hlds__type_constraints__typecheck_constraints_3_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_87_87, &top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_95_95, &top_level__mercury_compile_front_end__TypeCheckSpecs_27);
        }
#line 232 "mercury_compile_front_end.m"
        top_level__mercury_compile_front_end__ExceededTypeCheckIterationLimit_28 = (MR_Integer) 0;
#line 230 "mercury_compile_front_end.m"
      }
#line 3918 "top_level.mercury_compile_front_end.c"
    top_level__mercury_compile_front_end__TypeCtorInfo_154_154 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0;
#line 238 "mercury_compile_front_end.m"
    {
#line 238 "mercury_compile_front_end.m"
      top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_96_96 = mercury__list__f_43_43_2_f_0(top_level__mercury_compile_front_end__TypeCtorInfo_154_154, top_level__mercury_compile_front_end__TypeCheckSpecs_27, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_88_88);
    }
#line 239 "mercury_compile_front_end.m"
    {
#line 239 "mercury_compile_front_end.m"
      hlds__hlds_error_util__maybe_write_out_errors_8_p_0(top_level__mercury_compile_front_end__Verbose_19, top_level__mercury_compile_front_end__Globals_18, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_95_95, &top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_97_97, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_96_96, &top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_98_98);
    }
#line 240 "mercury_compile_front_end.m"
    {
#line 240 "mercury_compile_front_end.m"
      top_level__mercury_compile_front_end__FoundTypeError_29 = parse_tree__error_util__contains_errors_2_f_0(top_level__mercury_compile_front_end__Globals_18, top_level__mercury_compile_front_end__TypeCheckSpecs_27);
    }
#line 245 "mercury_compile_front_end.m"
    if ((top_level__mercury_compile_front_end__FoundTypeError_29 == (MR_Integer) 0))
#line 246 "mercury_compile_front_end.m"
      {
#line 247 "mercury_compile_front_end.m"
        {
#line 247 "mercury_compile_front_end.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_front_end__Verbose_19, (MR_String) "% Program is type-correct.\n");
        }
#line 246 "mercury_compile_front_end.m"
      }
#line 245 "mercury_compile_front_end.m"
    else
#line 242 "mercury_compile_front_end.m"
      {
#line 243 "mercury_compile_front_end.m"
        {
#line 243 "mercury_compile_front_end.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_front_end__Verbose_19, (MR_String) "% Program contains type error(s).\n");
        }
#line 242 "mercury_compile_front_end.m"
      }
#line 250 "mercury_compile_front_end.m"
    {
#line 250 "mercury_compile_front_end.m"
      libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_front_end__Stats_20);
    }
#line 251 "mercury_compile_front_end.m"
    {
#line 251 "mercury_compile_front_end.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_97_97, (MR_Integer) 15, (MR_String) "typecheck", top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_85_85, &top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_107_107);
    }
#line 261 "mercury_compile_front_end.m"
    top_level__mercury_compile_front_end__succeeded = (top_level__mercury_compile_front_end__FoundUndefModeError_12 == (MR_Integer) 1);
#line 267 "mercury_compile_front_end.m"
    if (top_level__mercury_compile_front_end__succeeded)
#line 262 "mercury_compile_front_end.m"
      {
#line 262 "mercury_compile_front_end.m"
        *top_level__mercury_compile_front_end__STATE_VARIABLE_FoundError_40 = (MR_Integer) 1;
#line 263 "mercury_compile_front_end.m"
        {
#line 263 "mercury_compile_front_end.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_front_end__Verbose_19, (MR_String) "% Program contains undefined inst or undefined mode error(s).\n");
        }
#line 266 "mercury_compile_front_end.m"
        {
#line 266 "mercury_compile_front_end.m"
          mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
        }
#line 262 "mercury_compile_front_end.m"
        *top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_46 = top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_98_98;
#line 262 "mercury_compile_front_end.m"
        *top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_44 = top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_107_107;
#line 262 "mercury_compile_front_end.m"
        *top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_42 = top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_97_97;
#line 262 "mercury_compile_front_end.m"
      }
#line 267 "mercury_compile_front_end.m"
    else
#line 273 "mercury_compile_front_end.m"
      {
#line 267 "mercury_compile_front_end.m"
        top_level__mercury_compile_front_end__succeeded = (top_level__mercury_compile_front_end__ExceededTypeCheckIterationLimit_28 == (MR_Integer) 1);
#line 273 "mercury_compile_front_end.m"
        if (top_level__mercury_compile_front_end__succeeded)
#line 271 "mercury_compile_front_end.m"
          {
#line 271 "mercury_compile_front_end.m"
            *top_level__mercury_compile_front_end__STATE_VARIABLE_FoundError_40 = (MR_Integer) 1;
#line 272 "mercury_compile_front_end.m"
            {
#line 272 "mercury_compile_front_end.m"
              mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
            }
#line 271 "mercury_compile_front_end.m"
            *top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_46 = top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_98_98;
#line 271 "mercury_compile_front_end.m"
            *top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_44 = top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_107_107;
#line 271 "mercury_compile_front_end.m"
            *top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_42 = top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_97_97;
#line 271 "mercury_compile_front_end.m"
          }
#line 273 "mercury_compile_front_end.m"
        else
#line 274 "mercury_compile_front_end.m"
          {
#line 274 "mercury_compile_front_end.m"
            MR_Word top_level__mercury_compile_front_end__MissingTypeDefnSpecs_30;
#line 274 "mercury_compile_front_end.m"
            MR_Word top_level__mercury_compile_front_end__SomeMissingTypeDefns_31;
#line 274 "mercury_compile_front_end.m"
            MR_Integer top_level__mercury_compile_front_end__NumPostTypeCheckErrors_32;
#line 274 "mercury_compile_front_end.m"
            MR_Word top_level__mercury_compile_front_end__PostTypeCheckAlwaysSpecs_33;
#line 274 "mercury_compile_front_end.m"
            MR_Word top_level__mercury_compile_front_end__PostTypeCheckNoTypeErrorSpecs_34;
#line 274 "mercury_compile_front_end.m"
            MR_Word top_level__mercury_compile_front_end__PostTypeCheckErrors_36;
#line 274 "mercury_compile_front_end.m"
            MR_Word top_level__mercury_compile_front_end__TypecheckOnly_37;
#line 274 "mercury_compile_front_end.m"
            MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_119_119;
#line 274 "mercury_compile_front_end.m"
            MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_120_120;
#line 274 "mercury_compile_front_end.m"
            MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_122_122;
#line 274 "mercury_compile_front_end.m"
            MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_126_126;

#line 274 "mercury_compile_front_end.m"
            {
#line 274 "mercury_compile_front_end.m"
              check_hlds__post_typecheck__check_for_missing_type_defns_2_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_97_97, &top_level__mercury_compile_front_end__MissingTypeDefnSpecs_30);
            }
#line 275 "mercury_compile_front_end.m"
            {
#line 275 "mercury_compile_front_end.m"
              top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_119_119 = mercury__list__f_43_43_2_f_0(top_level__mercury_compile_front_end__TypeCtorInfo_154_154, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_98_98, top_level__mercury_compile_front_end__MissingTypeDefnSpecs_30);
            }
#line 276 "mercury_compile_front_end.m"
            {
#line 276 "mercury_compile_front_end.m"
              top_level__mercury_compile_front_end__SomeMissingTypeDefns_31 = parse_tree__error_util__contains_errors_2_f_0(top_level__mercury_compile_front_end__Globals_18, top_level__mercury_compile_front_end__MissingTypeDefnSpecs_30);
            }
#line 278 "mercury_compile_front_end.m"
            {
#line 278 "mercury_compile_front_end.m"
              check_hlds__post_typecheck__post_typecheck_finish_preds_5_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_97_97, &top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_120_120, &top_level__mercury_compile_front_end__NumPostTypeCheckErrors_32, &top_level__mercury_compile_front_end__PostTypeCheckAlwaysSpecs_33, &top_level__mercury_compile_front_end__PostTypeCheckNoTypeErrorSpecs_34);
            }
#line 290 "mercury_compile_front_end.m"
            if ((top_level__mercury_compile_front_end__FoundTypeError_29 == (MR_Integer) 0))
#line 286 "mercury_compile_front_end.m"
              {
#line 286 "mercury_compile_front_end.m"
                MR_Word top_level__mercury_compile_front_end__PostTypeCheckSpecs_35;

#line 287 "mercury_compile_front_end.m"
                {
#line 287 "mercury_compile_front_end.m"
                  top_level__mercury_compile_front_end__PostTypeCheckSpecs_35 = mercury__list__f_43_43_2_f_0(top_level__mercury_compile_front_end__TypeCtorInfo_154_154, top_level__mercury_compile_front_end__PostTypeCheckAlwaysSpecs_33, top_level__mercury_compile_front_end__PostTypeCheckNoTypeErrorSpecs_34);
                }
#line 289 "mercury_compile_front_end.m"
                {
#line 289 "mercury_compile_front_end.m"
                  top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_122_122 = mercury__list__f_43_43_2_f_0(top_level__mercury_compile_front_end__TypeCtorInfo_154_154, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_119_119, top_level__mercury_compile_front_end__PostTypeCheckSpecs_35);
                }
#line 286 "mercury_compile_front_end.m"
              }
#line 290 "mercury_compile_front_end.m"
            else
#line 292 "mercury_compile_front_end.m"
              {
#line 292 "mercury_compile_front_end.m"
                top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_122_122 = mercury__list__f_43_43_2_f_0(top_level__mercury_compile_front_end__TypeCtorInfo_154_154, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_119_119, top_level__mercury_compile_front_end__PostTypeCheckAlwaysSpecs_33);
              }
#line 295 "mercury_compile_front_end.m"
            top_level__mercury_compile_front_end__succeeded = (top_level__mercury_compile_front_end__SomeMissingTypeDefns_31 == (MR_Integer) 1);
#line 296 "mercury_compile_front_end.m"
            if (!(top_level__mercury_compile_front_end__succeeded))
#line 296 "mercury_compile_front_end.m"
              {
#line 296 "mercury_compile_front_end.m"
                top_level__mercury_compile_front_end__succeeded = (top_level__mercury_compile_front_end__NumPostTypeCheckErrors_32 > (MR_Integer) 0);
#line 296 "mercury_compile_front_end.m"
              }
#line 300 "mercury_compile_front_end.m"
            if (top_level__mercury_compile_front_end__succeeded)
#line 299 "mercury_compile_front_end.m"
              top_level__mercury_compile_front_end__PostTypeCheckErrors_36 = (MR_Integer) 1;
#line 300 "mercury_compile_front_end.m"
            else
#line 301 "mercury_compile_front_end.m"
              top_level__mercury_compile_front_end__PostTypeCheckErrors_36 = (MR_Integer) 0;
#line 303 "mercury_compile_front_end.m"
            {
#line 303 "mercury_compile_front_end.m"
              hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_120_120, (MR_Integer) 19, (MR_String) "post_typecheck", top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_107_107, &top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_126_126);
            }
#line 306 "mercury_compile_front_end.m"
            {
#line 306 "mercury_compile_front_end.m"
              libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_front_end__Globals_18, (MR_Integer) 97, &top_level__mercury_compile_front_end__TypecheckOnly_37);
            }
#line 310 "mercury_compile_front_end.m"
            if ((top_level__mercury_compile_front_end__TypecheckOnly_37 == (MR_Integer) 0))
#line 323 "mercury_compile_front_end.m"
              {
#line 313 "mercury_compile_front_end.m"
                top_level__mercury_compile_front_end__succeeded = (top_level__mercury_compile_front_end__FoundTypeError_29 == (MR_Integer) 1);
#line 314 "mercury_compile_front_end.m"
                if (!(top_level__mercury_compile_front_end__succeeded))
#line 314 "mercury_compile_front_end.m"
                  top_level__mercury_compile_front_end__succeeded = (top_level__mercury_compile_front_end__PostTypeCheckErrors_36 == (MR_Integer) 1);
#line 323 "mercury_compile_front_end.m"
                if (top_level__mercury_compile_front_end__succeeded)
#line 322 "mercury_compile_front_end.m"
                  {
#line 322 "mercury_compile_front_end.m"
                    *top_level__mercury_compile_front_end__STATE_VARIABLE_FoundError_40 = (MR_Integer) 1;
#line 322 "mercury_compile_front_end.m"
                    *top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_46 = top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_122_122;
#line 322 "mercury_compile_front_end.m"
                    *top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_44 = top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_126_126;
#line 322 "mercury_compile_front_end.m"
                    *top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_42 = top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_120_120;
#line 322 "mercury_compile_front_end.m"
                  }
#line 323 "mercury_compile_front_end.m"
                else
#line 324 "mercury_compile_front_end.m"
                  {
#line 324 "mercury_compile_front_end.m"
                    MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_130_130;
#line 324 "mercury_compile_front_end.m"
                    MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_131_131;
#line 324 "mercury_compile_front_end.m"
                    MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_135_135;
#line 324 "mercury_compile_front_end.m"
                    MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_137_137;
#line 324 "mercury_compile_front_end.m"
                    MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_138_138;
#line 324 "mercury_compile_front_end.m"
                    MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_142_142;
#line 324 "mercury_compile_front_end.m"
                    MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_144_144;
#line 324 "mercury_compile_front_end.m"
                    MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_145_145;
#line 324 "mercury_compile_front_end.m"
                    MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_146_146;

#line 324 "mercury_compile_front_end.m"
                    {
#line 324 "mercury_compile_front_end.m"
                      top_level__mercury_compile_front_end__puritycheck_8_p_0(top_level__mercury_compile_front_end__Verbose_19, top_level__mercury_compile_front_end__Stats_20, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_120_120, &top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_130_130, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_122_122, &top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_131_131);
                    }
#line 325 "mercury_compile_front_end.m"
                    {
#line 325 "mercury_compile_front_end.m"
                      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_130_130, (MR_Integer) 20, (MR_String) "puritycheck", top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_126_126, &top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_135_135);
                    }
#line 329 "mercury_compile_front_end.m"
                    {
#line 329 "mercury_compile_front_end.m"
                      top_level__mercury_compile_front_end__subst_implementation_defined_literals_8_p_0(top_level__mercury_compile_front_end__Verbose_19, top_level__mercury_compile_front_end__Stats_20, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_130_130, &top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_137_137, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_131_131, &top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_138_138);
                    }
#line 331 "mercury_compile_front_end.m"
                    {
#line 331 "mercury_compile_front_end.m"
                      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_137_137, (MR_Integer) 25, (MR_String) "implementation_defined_literals", top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_135_135, &top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_142_142);
                    }
#line 336 "mercury_compile_front_end.m"
                    top_level__mercury_compile_front_end__succeeded = (top_level__mercury_compile_front_end__STATE_VARIABLE_FoundError_0_39 == (MR_Integer) 0);
#line 336 "mercury_compile_front_end.m"
                    if (top_level__mercury_compile_front_end__succeeded)
#line 337 "mercury_compile_front_end.m"
                      top_level__mercury_compile_front_end__succeeded = (top_level__mercury_compile_front_end__FoundUndefModeError_12 == (MR_Integer) 0);
#line 341 "mercury_compile_front_end.m"
                    if (top_level__mercury_compile_front_end__succeeded)
#line 339 "mercury_compile_front_end.m"
                      {
#line 339 "mercury_compile_front_end.m"
                        top_level__mercury_compile_front_end__maybe_write_optfile_9_p_0(top_level__mercury_compile_front_end__MakeOptInt_24, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_137_137, &top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_144_144, top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_142_142, &top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_145_145, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_138_138, &top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_146_146);
                      }
#line 341 "mercury_compile_front_end.m"
                    else
#line 342 "mercury_compile_front_end.m"
                      {
#line 342 "mercury_compile_front_end.m"
                        top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_146_146 = top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_138_138;
#line 342 "mercury_compile_front_end.m"
                        top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_145_145 = top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_142_142;
#line 342 "mercury_compile_front_end.m"
                        top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_144_144 = top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_137_137;
#line 342 "mercury_compile_front_end.m"
                      }
#line 347 "mercury_compile_front_end.m"
                    if ((top_level__mercury_compile_front_end__MakeOptInt_24 == (MR_Integer) 0))
#line 348 "mercury_compile_front_end.m"
                      {
#line 348 "mercury_compile_front_end.m"
                        MR_Word top_level__mercury_compile_front_end__FoundModeOrDetError_38;

#line 351 "mercury_compile_front_end.m"
                        {
#line 351 "mercury_compile_front_end.m"
                          top_level__mercury_compile_front_end__frontend_pass_by_phases_9_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_144_144, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_42, &top_level__mercury_compile_front_end__FoundModeOrDetError_38, top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_145_145, top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_44, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_146_146, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_46);
                        }
#line 353 "mercury_compile_front_end.m"
                        {
#line 353 "mercury_compile_front_end.m"
                          *top_level__mercury_compile_front_end__STATE_VARIABLE_FoundError_40 = mercury__bool__or_2_f_0(top_level__mercury_compile_front_end__STATE_VARIABLE_FoundError_0_39, top_level__mercury_compile_front_end__FoundModeOrDetError_38);
                        }
#line 348 "mercury_compile_front_end.m"
                      }
#line 347 "mercury_compile_front_end.m"
                    else
#line 346 "mercury_compile_front_end.m"
                      {
#line 346 "mercury_compile_front_end.m"
                        *top_level__mercury_compile_front_end__STATE_VARIABLE_FoundError_40 = top_level__mercury_compile_front_end__STATE_VARIABLE_FoundError_0_39;
#line 346 "mercury_compile_front_end.m"
                        *top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_42 = top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_144_144;
#line 346 "mercury_compile_front_end.m"
                        *top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_44 = top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_145_145;
#line 346 "mercury_compile_front_end.m"
                        *top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_46 = top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_146_146;
#line 346 "mercury_compile_front_end.m"
                      }
#line 324 "mercury_compile_front_end.m"
                  }
#line 323 "mercury_compile_front_end.m"
              }
#line 310 "mercury_compile_front_end.m"
            else
#line 308 "mercury_compile_front_end.m"
              {
#line 309 "mercury_compile_front_end.m"
                {
#line 309 "mercury_compile_front_end.m"
                  *top_level__mercury_compile_front_end__STATE_VARIABLE_FoundError_40 = mercury__bool__or_2_f_0(top_level__mercury_compile_front_end__STATE_VARIABLE_FoundError_0_39, top_level__mercury_compile_front_end__PostTypeCheckErrors_36);
                }
#line 308 "mercury_compile_front_end.m"
                *top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_42 = top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_120_120;
#line 308 "mercury_compile_front_end.m"
                *top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_44 = top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_126_126;
#line 308 "mercury_compile_front_end.m"
                *top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_46 = top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_122_122;
#line 308 "mercury_compile_front_end.m"
              }
#line 274 "mercury_compile_front_end.m"
          }
#line 273 "mercury_compile_front_end.m"
      }
#line 176 "mercury_compile_front_end.m"
  }
#line 171 "mercury_compile_front_end.m"
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
            libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_front_end__Globals_18, (MR_Integer) 368, &top_level__mercury_compile_front_end__ConstProp_23);
          }
#line 958 "mercury_compile_front_end.m"
          {
#line 958 "mercury_compile_front_end.m"
            libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_front_end__Globals_18, (MR_Integer) 195, &top_level__mercury_compile_front_end__DeepProf_24);
          }
#line 959 "mercury_compile_front_end.m"
          {
#line 959 "mercury_compile_front_end.m"
            libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_front_end__Globals_18, (MR_Integer) 212, &top_level__mercury_compile_front_end__TSWProf_25);
          }
#line 961 "mercury_compile_front_end.m"
          {
#line 961 "mercury_compile_front_end.m"
            libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_front_end__Globals_18, (MR_Integer) 213, &top_level__mercury_compile_front_end__TSCProf_26);
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
#line 4467 "top_level.mercury_compile_front_end.c"
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
                  libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_front_end__Globals_18, (MR_Integer) 198, &top_level__mercury_compile_front_end__PreParSimplify_22);
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
                  libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_front_end__Globals_18, (MR_Integer) 197, &top_level__mercury_compile_front_end__PreProfSimplify_21);
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
#line 127 "mercury_compile_front_end.m"
  {
#line 127 "mercury_compile_front_end.m"
    MR_bool top_level__mercury_compile_front_end__succeeded;
#line 127 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__Globals_22;
#line 127 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__Verbose_23;

#line 130 "mercury_compile_front_end.m"
    {
#line 130 "mercury_compile_front_end.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_31, &top_level__mercury_compile_front_end__Globals_22);
    }
#line 131 "mercury_compile_front_end.m"
    {
#line 131 "mercury_compile_front_end.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_front_end__Globals_22, (MR_Integer) 45, &top_level__mercury_compile_front_end__Verbose_23);
    }
#line 141 "mercury_compile_front_end.m"
    if ((top_level__mercury_compile_front_end__FoundUndefTypeError_15 == (MR_Integer) 0))
#line 142 "mercury_compile_front_end.m"
      {
#line 142 "mercury_compile_front_end.m"
        MR_Word top_level__mercury_compile_front_end__TypeCtorInfo_76_76;
#line 142 "mercury_compile_front_end.m"
        MR_Word top_level__mercury_compile_front_end__PostTypeSpecs_24;
#line 142 "mercury_compile_front_end.m"
        MR_Word top_level__mercury_compile_front_end__PostTypeErrors_25;
#line 142 "mercury_compile_front_end.m"
        MR_Word top_level__mercury_compile_front_end__QualInfo_26;
#line 142 "mercury_compile_front_end.m"
        MR_Word top_level__mercury_compile_front_end__TypeClassSpecs_27;
#line 142 "mercury_compile_front_end.m"
        MR_Word top_level__mercury_compile_front_end__TypeClassErrors_28;
#line 142 "mercury_compile_front_end.m"
        MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_40_40;
#line 142 "mercury_compile_front_end.m"
        MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_41_41;
#line 142 "mercury_compile_front_end.m"
        MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_45_45;
#line 142 "mercury_compile_front_end.m"
        MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_FoundError_46_46;
#line 142 "mercury_compile_front_end.m"
        MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_49_49;
#line 142 "mercury_compile_front_end.m"
        MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_53_53;
#line 142 "mercury_compile_front_end.m"
        MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_55_55;
#line 142 "mercury_compile_front_end.m"
        MR_Word top_level__mercury_compile_front_end__V_56_56;
#line 142 "mercury_compile_front_end.m"
        MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_59_59;
#line 142 "mercury_compile_front_end.m"
        MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_61_61;

#line 143 "mercury_compile_front_end.m"
        {
#line 143 "mercury_compile_front_end.m"
          hlds__hlds_error_util__maybe_write_out_errors_8_p_0(top_level__mercury_compile_front_end__Verbose_23, top_level__mercury_compile_front_end__Globals_22, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_31, &top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_40_40, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_35, &top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_41_41);
        }
#line 145 "mercury_compile_front_end.m"
        {
#line 145 "mercury_compile_front_end.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_front_end__Verbose_23, (MR_String) "% Post-processing type definitions...\n");
        }
#line 147 "mercury_compile_front_end.m"
        {
#line 147 "mercury_compile_front_end.m"
          hlds__make_tags__post_process_type_defns_3_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_40_40, &top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_45_45, &top_level__mercury_compile_front_end__PostTypeSpecs_24);
        }
#line 148 "mercury_compile_front_end.m"
        {
#line 148 "mercury_compile_front_end.m"
          top_level__mercury_compile_front_end__PostTypeErrors_25 = parse_tree__error_util__contains_errors_2_f_0(top_level__mercury_compile_front_end__Globals_22, top_level__mercury_compile_front_end__PostTypeSpecs_24);
        }
#line 149 "mercury_compile_front_end.m"
        {
#line 149 "mercury_compile_front_end.m"
          mercury__bool__or_3_p_0(top_level__mercury_compile_front_end__PostTypeErrors_25, top_level__mercury_compile_front_end__STATE_VARIABLE_FoundError_0_29, &top_level__mercury_compile_front_end__STATE_VARIABLE_FoundError_46_46);
        }
#line 150 "mercury_compile_front_end.m"
        {
#line 150 "mercury_compile_front_end.m"
          hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_45_45, (MR_Integer) 3, (MR_String) "typedefn", top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_0_33, &top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_49_49);
        }
#line 152 "mercury_compile_front_end.m"
        {
#line 152 "mercury_compile_front_end.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_front_end__Verbose_23, (MR_String) "% Checking typeclasses...\n");
        }
#line 153 "mercury_compile_front_end.m"
        {
#line 153 "mercury_compile_front_end.m"
          check_hlds__check_typeclass__check_typeclasses_6_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_45_45, &top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_53_53, top_level__mercury_compile_front_end__QualInfo0_14, &top_level__mercury_compile_front_end__QualInfo_26, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &top_level__mercury_compile_front_end__TypeClassSpecs_27);
        }
#line 4856 "top_level.mercury_compile_front_end.c"
        top_level__mercury_compile_front_end__TypeCtorInfo_76_76 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0;
#line 154 "mercury_compile_front_end.m"
        {
#line 154 "mercury_compile_front_end.m"
          top_level__mercury_compile_front_end__V_56_56 = mercury__list__f_43_43_2_f_0(top_level__mercury_compile_front_end__TypeCtorInfo_76_76, top_level__mercury_compile_front_end__TypeClassSpecs_27, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_41_41);
        }
#line 154 "mercury_compile_front_end.m"
        {
#line 154 "mercury_compile_front_end.m"
          top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_55_55 = mercury__list__f_43_43_2_f_0(top_level__mercury_compile_front_end__TypeCtorInfo_76_76, top_level__mercury_compile_front_end__PostTypeSpecs_24, top_level__mercury_compile_front_end__V_56_56);
        }
#line 155 "mercury_compile_front_end.m"
        {
#line 155 "mercury_compile_front_end.m"
          hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_53_53, (MR_Integer) 5, (MR_String) "typeclass", top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_49_49, &top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_59_59);
        }
#line 156 "mercury_compile_front_end.m"
        {
#line 156 "mercury_compile_front_end.m"
          hlds__make_hlds__set_module_recomp_info_3_p_0(top_level__mercury_compile_front_end__QualInfo_26, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_53_53, &top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_61_61);
        }
#line 158 "mercury_compile_front_end.m"
        {
#line 158 "mercury_compile_front_end.m"
          top_level__mercury_compile_front_end__TypeClassErrors_28 = parse_tree__error_util__contains_errors_2_f_0(top_level__mercury_compile_front_end__Globals_22, top_level__mercury_compile_front_end__TypeClassSpecs_27);
        }
#line 164 "mercury_compile_front_end.m"
        if ((top_level__mercury_compile_front_end__TypeClassErrors_28 == (MR_Integer) 0))
#line 166 "mercury_compile_front_end.m"
          {
#line 166 "mercury_compile_front_end.m"
            top_level__mercury_compile_front_end__frontend_pass_after_typeclass_check_11_p_0(top_level__mercury_compile_front_end__FoundUndefModeError_16, top_level__mercury_compile_front_end__STATE_VARIABLE_FoundError_46_46, top_level__mercury_compile_front_end__STATE_VARIABLE_FoundError_30, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_61_61, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_32, top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_59_59, top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_34, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_55_55, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_36);
#line 166 "mercury_compile_front_end.m"
            return;
          }
#line 164 "mercury_compile_front_end.m"
        else
#line 160 "mercury_compile_front_end.m"
          {
#line 163 "mercury_compile_front_end.m"
            *top_level__mercury_compile_front_end__STATE_VARIABLE_FoundError_30 = (MR_Integer) 1;
#line 160 "mercury_compile_front_end.m"
            *top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_32 = top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_61_61;
#line 160 "mercury_compile_front_end.m"
            *top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_34 = top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_59_59;
#line 160 "mercury_compile_front_end.m"
            *top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_36 = top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_55_55;
#line 160 "mercury_compile_front_end.m"
          }
#line 142 "mercury_compile_front_end.m"
      }
#line 141 "mercury_compile_front_end.m"
    else
#line 133 "mercury_compile_front_end.m"
      {
#line 136 "mercury_compile_front_end.m"
        *top_level__mercury_compile_front_end__STATE_VARIABLE_FoundError_30 = (MR_Integer) 1;
#line 137 "mercury_compile_front_end.m"
        {
#line 137 "mercury_compile_front_end.m"
          hlds__hlds_error_util__maybe_write_out_errors_8_p_0(top_level__mercury_compile_front_end__Verbose_23, top_level__mercury_compile_front_end__Globals_22, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_31, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_32, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_35, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_36);
        }
#line 138 "mercury_compile_front_end.m"
        {
#line 138 "mercury_compile_front_end.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_front_end__Verbose_23, (MR_String) "% Program contains undefined type error(s).\n");
        }
#line 140 "mercury_compile_front_end.m"
        {
#line 140 "mercury_compile_front_end.m"
          mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
        }
#line 133 "mercury_compile_front_end.m"
        *top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_34 = top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_0_33;
#line 133 "mercury_compile_front_end.m"
      }
#line 127 "mercury_compile_front_end.m"
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
