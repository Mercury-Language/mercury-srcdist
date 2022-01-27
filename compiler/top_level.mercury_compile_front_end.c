/*
** Automatically generated from `mercury_compile_front_end.m'
** by the Mercury compiler,
** version 2015-10-27
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
#include "backend_libs.mih"
#include "bytecode_backend.mih"
#include "check_hlds.mih"
#include "erl_backend.mih"
#include "hlds.mih"
#include "libs.mih"
#include "ll_backend.mih"
#include "mdbcomp.mih"
#include "ml_backend.mih"
#include "mode_robdd.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "top_level.mih"
#include "transform_hlds.mih"
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
#include "hlds.status.mih"
#include "hlds.vartypes.mih"
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
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.set_of_var.mih"
#include "top_level.mercury_compile.mih"
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




#line 190 "top_level.mercury_compile_front_end.c"
static const MR_FA_PseudoTypeInfo_Struct1 top_level__mercury_compile_front_end__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0;

#line 193 "top_level.mercury_compile_front_end.c"
static const MR_FA_TypeInfo_Struct1 top_level__mercury_compile_front_end__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0;

#line 196 "top_level.mercury_compile_front_end.c"
static const MR_VA_PseudoTypeInfo_Struct3 top_level__mercury_compile_front_end____vpti_tuple_3__plain_hlds__hlds_module__type_ctor_info_module_info_0__plain_parse_tree__maybe_error__type_ctor_info_maybe_safe_to_continue_0__plain_list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0;

#line 199 "top_level.mercury_compile_front_end.c"
static const MR_FA_PseudoTypeInfo_Struct2 top_level__mercury_compile_front_end__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_hlds__hlds_module__type_ctor_info_oisu_preds_0;

#line 202 "top_level.mercury_compile_front_end.c"
static const MR_EnumFunctorDesc top_level__mercury_compile_front_end__top_level__mercury_compile_front_end__enum_functor_desc_simplify_pass_0_0;

#line 205 "top_level.mercury_compile_front_end.c"
static const MR_EnumFunctorDesc top_level__mercury_compile_front_end__top_level__mercury_compile_front_end__enum_functor_desc_simplify_pass_0_1;

#line 208 "top_level.mercury_compile_front_end.c"
static const MR_EnumFunctorDesc top_level__mercury_compile_front_end__top_level__mercury_compile_front_end__enum_functor_desc_simplify_pass_0_2;

#line 211 "top_level.mercury_compile_front_end.c"
static const MR_EnumFunctorDesc top_level__mercury_compile_front_end__top_level__mercury_compile_front_end__enum_functor_desc_simplify_pass_0_3;

#line 214 "top_level.mercury_compile_front_end.c"
static const MR_EnumFunctorDesc top_level__mercury_compile_front_end__top_level__mercury_compile_front_end__enum_functor_desc_simplify_pass_0_4;

#line 217 "top_level.mercury_compile_front_end.c"
static const MR_EnumFunctorDesc top_level__mercury_compile_front_end__top_level__mercury_compile_front_end__enum_functor_desc_simplify_pass_0_5;

#line 220 "top_level.mercury_compile_front_end.c"
static const MR_EnumFunctorDescPtr top_level__mercury_compile_front_end__top_level__mercury_compile_front_end__enum_value_ordered_simplify_pass_0[6];

#line 223 "top_level.mercury_compile_front_end.c"
static const MR_EnumFunctorDescPtr top_level__mercury_compile_front_end__top_level__mercury_compile_front_end__enum_name_ordered_simplify_pass_0[6];

#line 226 "top_level.mercury_compile_front_end.c"
static const MR_Integer top_level__mercury_compile_front_end__top_level__mercury_compile_front_end__functor_number_map_simplify_pass_0[6];

#line 229 "top_level.mercury_compile_front_end.c"
static MR_bool MR_CALL 
top_level__mercury_compile_front_end____Unify____simplify_pass_0_0_10001(
#line 232 "top_level.mercury_compile_front_end.c"
  MR_Box top_level__mercury_compile_front_end__wrapper_arg_1,
#line 234 "top_level.mercury_compile_front_end.c"
  MR_Box top_level__mercury_compile_front_end__wrapper_arg_2);

#line 237 "top_level.mercury_compile_front_end.c"
static void MR_CALL 
top_level__mercury_compile_front_end____Compare____simplify_pass_0_0_10001(
#line 240 "top_level.mercury_compile_front_end.c"
  MR_Box * top_level__mercury_compile_front_end__wrapper_arg_1,
#line 242 "top_level.mercury_compile_front_end.c"
  MR_Box top_level__mercury_compile_front_end__wrapper_arg_2,
#line 244 "top_level.mercury_compile_front_end.c"
  MR_Box top_level__mercury_compile_front_end__wrapper_arg_3);

#line 247 "top_level.mercury_compile_front_end.c"
static void MR_CALL 
top_level__mercury_compile_front_end__maybe_benchmark_modes__ho1_6_p_0_1(
#line 250 "top_level.mercury_compile_front_end.c"
  MR_Box top_level__mercury_compile_front_end__closure_arg,
#line 252 "top_level.mercury_compile_front_end.c"
  MR_Box top_level__mercury_compile_front_end__wrapper_arg_1,
#line 254 "top_level.mercury_compile_front_end.c"
  MR_Box * top_level__mercury_compile_front_end__wrapper_arg_2,
#line 256 "top_level.mercury_compile_front_end.c"
  MR_Box top_level__mercury_compile_front_end__wrapper_arg_3,
#line 258 "top_level.mercury_compile_front_end.c"
  MR_Box * top_level__mercury_compile_front_end__wrapper_arg_4);

#line 706 "mercury_compile_front_end.m"
static void MR_CALL 
top_level__mercury_compile_front_end__maybe_benchmark_modes__ho1_6_p_0(
#line 706 "mercury_compile_front_end.m"
  MR_String top_level__mercury_compile_front_end__Stage_8,
#line 706 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_15,
#line 706 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_16);

#line 1036 "mercury_compile_front_end.m"
static void MR_CALL 
top_level__mercury_compile_front_end__maybe_proc_statistics_9_p_0(
#line 1036 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__Verbose_10,
#line 1036 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__Stats_11,
#line 1036 "mercury_compile_front_end.m"
  MR_String top_level__mercury_compile_front_end__Msg_12,
#line 1036 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_22,
#line 1036 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_23,
#line 1036 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_24,
#line 1036 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_25);

#line 1009 "mercury_compile_front_end.m"
static void MR_CALL 
top_level__mercury_compile_front_end__simplify_pred_8_p_0(
#line 1009 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__SimplifyTasks0_9,
#line 1009 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__PredId_10,
#line 1009 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_ModuleInfo_0_22,
#line 1009 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_ModuleInfo_23,
#line 1009 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_PredInfo_0_24,
#line 1009 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_PredInfo_25,
#line 1009 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_26,
#line 1009 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_27);

#line 884 "mercury_compile_front_end.m"
static void MR_CALL 
top_level__mercury_compile_front_end__process_try_goals_9_p_0(
#line 884 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__Verbose_10,
#line 884 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__Stats_11,
#line 884 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_18,
#line 884 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_19,
#line 884 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__FoundError_13,
#line 884 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_20,
#line 884 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_21);

#line 874 "mercury_compile_front_end.m"
static MR_bool MR_CALL 
top_level__mercury_compile_front_end__type_ctor_is_defined_in_this_module_2_p_0(
#line 874 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__ModuleName_3,
#line 874 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__HeadVar__2_2);

#line 848 "mercury_compile_front_end.m"
static MR_bool MR_CALL 
top_level__mercury_compile_front_end__check_oisu_pragmas_9_p_0_1(
#line 848 "mercury_compile_front_end.m"
  MR_Box top_level__mercury_compile_front_end__closure_arg,
#line 848 "mercury_compile_front_end.m"
  MR_Box top_level__mercury_compile_front_end__wrapper_arg_1);

#line 840 "mercury_compile_front_end.m"
static void MR_CALL 
top_level__mercury_compile_front_end__check_oisu_pragmas_9_p_0(
#line 840 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__Verbose_10,
#line 840 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__Stats_11,
#line 840 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_24,
#line 840 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_25,
#line 840 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__FoundError_13,
#line 840 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_26,
#line 840 "mercury_compile_front_end.m"
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

#line 758 "mercury_compile_front_end.m"
static void MR_CALL 
top_level__mercury_compile_front_end__check_determinism_8_p_0(
#line 758 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__Verbose_9,
#line 758 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__Stats_10,
#line 758 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_17,
#line 758 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_18,
#line 758 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_19,
#line 758 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_20);

#line 746 "mercury_compile_front_end.m"
static void MR_CALL 
top_level__mercury_compile_front_end__detect_cse_6_p_0(
#line 746 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__Verbose_7,
#line 746 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__Stats_8,
#line 746 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_11,
#line 746 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_12);

#line 734 "mercury_compile_front_end.m"
static void MR_CALL 
top_level__mercury_compile_front_end__detect_switches_6_p_0(
#line 734 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__Verbose_7,
#line 734 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__Stats_8,
#line 734 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_11,
#line 734 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_12);

#line 684 "mercury_compile_front_end.m"
static void MR_CALL 
top_level__mercury_compile_front_end__modecheck_10_p_0_1(
#line 684 "mercury_compile_front_end.m"
  MR_Box top_level__mercury_compile_front_end__closure_arg,
#line 684 "mercury_compile_front_end.m"
  MR_Box top_level__mercury_compile_front_end__wrapper_arg_1,
#line 684 "mercury_compile_front_end.m"
  MR_Box * top_level__mercury_compile_front_end__wrapper_arg_2);

#line 670 "mercury_compile_front_end.m"
static void MR_CALL 
top_level__mercury_compile_front_end__modecheck_10_p_0(
#line 670 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__Verbose_11,
#line 670 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__Stats_12,
#line 670 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_23,
#line 670 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_24,
#line 670 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__FoundModeError_14,
#line 670 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__SafeToContinue_15,
#line 670 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_25,
#line 670 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_26);

#line 652 "mercury_compile_front_end.m"
static void MR_CALL 
top_level__mercury_compile_front_end__maybe_mode_constraints_6_p_0(
#line 652 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__Verbose_7,
#line 652 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__Stats_8,
#line 652 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_13,
#line 652 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_14);

#line 629 "mercury_compile_front_end.m"
static void MR_CALL 
top_level__mercury_compile_front_end__maybe_warn_about_unused_imports_8_p_0(
#line 629 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__Verbose_9,
#line 629 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__Stats_10,
#line 629 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_17,
#line 629 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_18,
#line 629 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_19,
#line 629 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_20);

#line 596 "mercury_compile_front_end.m"
static void MR_CALL 
top_level__mercury_compile_front_end__maybe_polymorphism_9_p_0(
#line 596 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__Verbose_10,
#line 596 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__Stats_11,
#line 596 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__SafeToContinue_12,
#line 596 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_19,
#line 596 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_20,
#line 596 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_21,
#line 596 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_22);

#line 580 "mercury_compile_front_end.m"
static void MR_CALL 
top_level__mercury_compile_front_end__subst_implementation_defined_literals_8_p_0(
#line 580 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__Verbose_9,
#line 580 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__Stats_10,
#line 580 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_15,
#line 580 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_16,
#line 580 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_17,
#line 580 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_18);

#line 556 "mercury_compile_front_end.m"
static void MR_CALL 
top_level__mercury_compile_front_end__puritycheck_8_p_0(
#line 556 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__Verbose_9,
#line 556 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__Stats_10,
#line 556 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_17,
#line 556 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_18,
#line 556 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_19,
#line 556 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_20);

#line 463 "mercury_compile_front_end.m"
static void MR_CALL 
top_level__mercury_compile_front_end__frontend_pass_by_phases_9_p_0(
#line 463 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_27,
#line 463 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_28,
#line 463 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__FoundError_11,
#line 463 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_0_29,
#line 463 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_30,
#line 463 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_31,
#line 463 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_32);

#line 361 "mercury_compile_front_end.m"
static void MR_CALL 
top_level__mercury_compile_front_end__maybe_write_initial_optfile_9_p_0(
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

#line 989 "mercury_compile_front_end.m"
static void MR_CALL 
top_level__mercury_compile_front_end__maybe_simplify_10_p_0_1(
#line 989 "mercury_compile_front_end.m"
  MR_Box top_level__mercury_compile_front_end__closure_arg,
#line 989 "mercury_compile_front_end.m"
  MR_Box top_level__mercury_compile_front_end__wrapper_arg_1,
#line 989 "mercury_compile_front_end.m"
  MR_Box top_level__mercury_compile_front_end__wrapper_arg_2,
#line 989 "mercury_compile_front_end.m"
  MR_Box * top_level__mercury_compile_front_end__wrapper_arg_3,
#line 989 "mercury_compile_front_end.m"
  MR_Box top_level__mercury_compile_front_end__wrapper_arg_4,
#line 989 "mercury_compile_front_end.m"
  MR_Box * top_level__mercury_compile_front_end__wrapper_arg_5,
#line 989 "mercury_compile_front_end.m"
  MR_Box top_level__mercury_compile_front_end__wrapper_arg_6,
#line 989 "mercury_compile_front_end.m"
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
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



#line 741 "top_level.mercury_compile_front_end.c"
static const MR_FA_PseudoTypeInfo_Struct1 top_level__mercury_compile_front_end__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0
  }
};

#line 749 "top_level.mercury_compile_front_end.c"
static const MR_FA_TypeInfo_Struct1 top_level__mercury_compile_front_end__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0
  }
};

#line 757 "top_level.mercury_compile_front_end.c"
static const MR_VA_PseudoTypeInfo_Struct3 top_level__mercury_compile_front_end____vpti_tuple_3__plain_hlds__hlds_module__type_ctor_info_module_info_0__plain_parse_tree__maybe_error__type_ctor_info_maybe_safe_to_continue_0__plain_list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__builtin__builtin__type_ctor_info_tuple_0,
  (MR_Integer) 3,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0,
    (MR_PseudoTypeInfo) &parse_tree__maybe_error__parse_tree__maybe_error__type_ctor_info_maybe_safe_to_continue_0,
    (MR_PseudoTypeInfo) &top_level__mercury_compile_front_end__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0
  }
};

#line 768 "top_level.mercury_compile_front_end.c"
static const MR_FA_PseudoTypeInfo_Struct2 top_level__mercury_compile_front_end__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_hlds__hlds_module__type_ctor_info_oisu_preds_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0,
    (MR_PseudoTypeInfo) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_oisu_preds_0
  }
};

#line 777 "top_level.mercury_compile_front_end.c"
static const MR_EnumFunctorDesc top_level__mercury_compile_front_end__top_level__mercury_compile_front_end__enum_functor_desc_simplify_pass_0_0 = {
  (MR_String) "simplify_pass_frontend",
  (MR_Integer) 0
};

#line 783 "top_level.mercury_compile_front_end.c"
static const MR_EnumFunctorDesc top_level__mercury_compile_front_end__top_level__mercury_compile_front_end__enum_functor_desc_simplify_pass_0_1 = {
  (MR_String) "simplify_pass_post_untuple",
  (MR_Integer) 1
};

#line 789 "top_level.mercury_compile_front_end.c"
static const MR_EnumFunctorDesc top_level__mercury_compile_front_end__top_level__mercury_compile_front_end__enum_functor_desc_simplify_pass_0_2 = {
  (MR_String) "simplify_pass_pre_prof_transforms",
  (MR_Integer) 2
};

#line 795 "top_level.mercury_compile_front_end.c"
static const MR_EnumFunctorDesc top_level__mercury_compile_front_end__top_level__mercury_compile_front_end__enum_functor_desc_simplify_pass_0_3 = {
  (MR_String) "simplify_pass_pre_implicit_parallelism",
  (MR_Integer) 3
};

#line 801 "top_level.mercury_compile_front_end.c"
static const MR_EnumFunctorDesc top_level__mercury_compile_front_end__top_level__mercury_compile_front_end__enum_functor_desc_simplify_pass_0_4 = {
  (MR_String) "simplify_pass_ml_backend",
  (MR_Integer) 4
};

#line 807 "top_level.mercury_compile_front_end.c"
static const MR_EnumFunctorDesc top_level__mercury_compile_front_end__top_level__mercury_compile_front_end__enum_functor_desc_simplify_pass_0_5 = {
  (MR_String) "simplify_pass_ll_backend",
  (MR_Integer) 5
};

#line 813 "top_level.mercury_compile_front_end.c"
static const MR_EnumFunctorDescPtr top_level__mercury_compile_front_end__top_level__mercury_compile_front_end__enum_value_ordered_simplify_pass_0[6] = {
  &top_level__mercury_compile_front_end__top_level__mercury_compile_front_end__enum_functor_desc_simplify_pass_0_0,
  &top_level__mercury_compile_front_end__top_level__mercury_compile_front_end__enum_functor_desc_simplify_pass_0_1,
  &top_level__mercury_compile_front_end__top_level__mercury_compile_front_end__enum_functor_desc_simplify_pass_0_2,
  &top_level__mercury_compile_front_end__top_level__mercury_compile_front_end__enum_functor_desc_simplify_pass_0_3,
  &top_level__mercury_compile_front_end__top_level__mercury_compile_front_end__enum_functor_desc_simplify_pass_0_4,
  &top_level__mercury_compile_front_end__top_level__mercury_compile_front_end__enum_functor_desc_simplify_pass_0_5
};

#line 823 "top_level.mercury_compile_front_end.c"
static const MR_EnumFunctorDescPtr top_level__mercury_compile_front_end__top_level__mercury_compile_front_end__enum_name_ordered_simplify_pass_0[6] = {
  &top_level__mercury_compile_front_end__top_level__mercury_compile_front_end__enum_functor_desc_simplify_pass_0_0,
  &top_level__mercury_compile_front_end__top_level__mercury_compile_front_end__enum_functor_desc_simplify_pass_0_5,
  &top_level__mercury_compile_front_end__top_level__mercury_compile_front_end__enum_functor_desc_simplify_pass_0_4,
  &top_level__mercury_compile_front_end__top_level__mercury_compile_front_end__enum_functor_desc_simplify_pass_0_1,
  &top_level__mercury_compile_front_end__top_level__mercury_compile_front_end__enum_functor_desc_simplify_pass_0_3,
  &top_level__mercury_compile_front_end__top_level__mercury_compile_front_end__enum_functor_desc_simplify_pass_0_2
};

#line 833 "top_level.mercury_compile_front_end.c"
static const MR_Integer top_level__mercury_compile_front_end__top_level__mercury_compile_front_end__functor_number_map_simplify_pass_0[6] = {
  (MR_Integer) 0,
  (MR_Integer) 3,
  (MR_Integer) 5,
  (MR_Integer) 4,
  (MR_Integer) 2,
  (MR_Integer) 1
};

#line 843 "top_level.mercury_compile_front_end.c"
const MR_TypeCtorInfo_Struct top_level__mercury_compile_front_end__top_level__mercury_compile_front_end__type_ctor_info_simplify_pass_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
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

#line 860 "top_level.mercury_compile_front_end.c"
static MR_bool MR_CALL 
top_level__mercury_compile_front_end____Unify____simplify_pass_0_0_10001(
#line 863 "top_level.mercury_compile_front_end.c"
  MR_Box top_level__mercury_compile_front_end__wrapper_arg_1,
#line 865 "top_level.mercury_compile_front_end.c"
  MR_Box top_level__mercury_compile_front_end__wrapper_arg_2)
#line 867 "top_level.mercury_compile_front_end.c"
{
#line 869 "top_level.mercury_compile_front_end.c"
  {
#line 871 "top_level.mercury_compile_front_end.c"
    MR_bool top_level__mercury_compile_front_end__succeeded;

#line 874 "top_level.mercury_compile_front_end.c"
    {
#line 876 "top_level.mercury_compile_front_end.c"
      top_level__mercury_compile_front_end__succeeded = top_level__mercury_compile_front_end____Unify____simplify_pass_0_0(((MR_Word) top_level__mercury_compile_front_end__wrapper_arg_1), ((MR_Word) top_level__mercury_compile_front_end__wrapper_arg_2));
    }
#line 879 "top_level.mercury_compile_front_end.c"
    return top_level__mercury_compile_front_end__succeeded;
#line 881 "top_level.mercury_compile_front_end.c"
  }
#line 883 "top_level.mercury_compile_front_end.c"
}

#line 886 "top_level.mercury_compile_front_end.c"
static void MR_CALL 
top_level__mercury_compile_front_end____Compare____simplify_pass_0_0_10001(
#line 889 "top_level.mercury_compile_front_end.c"
  MR_Box * top_level__mercury_compile_front_end__wrapper_arg_1,
#line 891 "top_level.mercury_compile_front_end.c"
  MR_Box top_level__mercury_compile_front_end__wrapper_arg_2,
#line 893 "top_level.mercury_compile_front_end.c"
  MR_Box top_level__mercury_compile_front_end__wrapper_arg_3)
#line 895 "top_level.mercury_compile_front_end.c"
{
#line 897 "top_level.mercury_compile_front_end.c"
  {
#line 899 "top_level.mercury_compile_front_end.c"
    MR_Word top_level__mercury_compile_front_end__conv0_HeadVar__1_1;

#line 902 "top_level.mercury_compile_front_end.c"
    {
#line 904 "top_level.mercury_compile_front_end.c"
      top_level__mercury_compile_front_end____Compare____simplify_pass_0_0(&top_level__mercury_compile_front_end__conv0_HeadVar__1_1, ((MR_Word) top_level__mercury_compile_front_end__wrapper_arg_2), ((MR_Word) top_level__mercury_compile_front_end__wrapper_arg_3));
    }
#line 907 "top_level.mercury_compile_front_end.c"
    *top_level__mercury_compile_front_end__wrapper_arg_1 = ((MR_Box) (top_level__mercury_compile_front_end__conv0_HeadVar__1_1));
#line 909 "top_level.mercury_compile_front_end.c"
  }
#line 911 "top_level.mercury_compile_front_end.c"
}

#line 914 "top_level.mercury_compile_front_end.c"
static void MR_CALL 
top_level__mercury_compile_front_end__maybe_benchmark_modes__ho1_6_p_0_1(
#line 917 "top_level.mercury_compile_front_end.c"
  MR_Box top_level__mercury_compile_front_end__closure_arg,
#line 919 "top_level.mercury_compile_front_end.c"
  MR_Box top_level__mercury_compile_front_end__wrapper_arg_1,
#line 921 "top_level.mercury_compile_front_end.c"
  MR_Box * top_level__mercury_compile_front_end__wrapper_arg_2,
#line 923 "top_level.mercury_compile_front_end.c"
  MR_Box top_level__mercury_compile_front_end__wrapper_arg_3,
#line 925 "top_level.mercury_compile_front_end.c"
  MR_Box * top_level__mercury_compile_front_end__wrapper_arg_4)
#line 927 "top_level.mercury_compile_front_end.c"
{
#line 929 "top_level.mercury_compile_front_end.c"
  {
#line 931 "top_level.mercury_compile_front_end.c"
    MR_Box top_level__mercury_compile_front_end__closure = top_level__mercury_compile_front_end__closure_arg;
#line 933 "top_level.mercury_compile_front_end.c"
    MR_Word top_level__mercury_compile_front_end__conv0_HeadVar__2_2;

#line 936 "top_level.mercury_compile_front_end.c"
    {
#line 938 "top_level.mercury_compile_front_end.c"
      check_hlds__mode_constraints__mc_process_module_4_p_0(((MR_Word) top_level__mercury_compile_front_end__wrapper_arg_1), &top_level__mercury_compile_front_end__conv0_HeadVar__2_2);
    }
#line 941 "top_level.mercury_compile_front_end.c"
    *top_level__mercury_compile_front_end__wrapper_arg_2 = ((MR_Box) (top_level__mercury_compile_front_end__conv0_HeadVar__2_2));
#line 943 "top_level.mercury_compile_front_end.c"
  }
#line 945 "top_level.mercury_compile_front_end.c"
}

#line 706 "mercury_compile_front_end.m"
static void MR_CALL 
top_level__mercury_compile_front_end__maybe_benchmark_modes__ho1_6_p_0(
#line 706 "mercury_compile_front_end.m"
  MR_String top_level__mercury_compile_front_end__Stage_8,
#line 706 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_15,
#line 706 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_16)
#line 706 "mercury_compile_front_end.m"
{
#line 710 "mercury_compile_front_end.m"
  {
#line 710 "mercury_compile_front_end.m"
    MR_bool top_level__mercury_compile_front_end__succeeded;
#line 710 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__Globals_11;
#line 710 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__BenchmarkModes_12;

#line 711 "mercury_compile_front_end.m"
    {
#line 711 "mercury_compile_front_end.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_15, &top_level__mercury_compile_front_end__Globals_11);
    }
#line 712 "mercury_compile_front_end.m"
    {
#line 712 "mercury_compile_front_end.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_front_end__Globals_11, (MR_Integer) 160, &top_level__mercury_compile_front_end__BenchmarkModes_12);
    }
#line 721 "mercury_compile_front_end.m"
#line 721 "mercury_compile_front_end.m"
    switch (top_level__mercury_compile_front_end__BenchmarkModes_12) {
#line 721 "mercury_compile_front_end.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 721 "mercury_compile_front_end.m"
      case (MR_Integer) 0:
#line 723 "mercury_compile_front_end.m"
        {
#line 723 "mercury_compile_front_end.m"
          check_hlds__mode_constraints__mc_process_module_4_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_15, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_16);
#line 723 "mercury_compile_front_end.m"
          return;
        }
#line 721 "mercury_compile_front_end.m"
        break;
#line 721 "mercury_compile_front_end.m"
      case (MR_Integer) 1:
#line 714 "mercury_compile_front_end.m"
        {
#line 714 "mercury_compile_front_end.m"
          MR_Integer top_level__mercury_compile_front_end__Repeats_13;
#line 714 "mercury_compile_front_end.m"
          MR_Integer top_level__mercury_compile_front_end__Time_14;
#line 714 "mercury_compile_front_end.m"
          MR_String top_level__mercury_compile_front_end__V_40_40;
#line 714 "mercury_compile_front_end.m"
          MR_Word top_level__mercury_compile_front_end__V_46_46;
#line 714 "mercury_compile_front_end.m"
          MR_String top_level__mercury_compile_front_end__V_50_50;
#line 714 "mercury_compile_front_end.m"
          MR_String top_level__mercury_compile_front_end__V_59_59;
#line 730 "mercury_compile_front_end.m"
          MR_Box top_level__mercury_compile_front_end__conv2_STATE_VARIABLE_HLDS_16;
#line 730 "mercury_compile_front_end.m"
          MR_Box top_level__mercury_compile_front_end__conv1_STATE_VARIABLE_IO_31_31;

#line 715 "mercury_compile_front_end.m"
          {
#line 715 "mercury_compile_front_end.m"
            libs__globals__lookup_int_option_3_p_0(top_level__mercury_compile_front_end__Globals_11, (MR_Integer) 161, &top_level__mercury_compile_front_end__Repeats_13);
          }
#line 1020 "top_level.mercury_compile_front_end.c"
          top_level__mercury_compile_front_end__V_46_46 = (MR_Word) &top_level__mercury_compile_front_end_scalar_common_5[0];
#line 716 "mercury_compile_front_end.m"
          {
#line 716 "mercury_compile_front_end.m"
            mercury__string__format__format_string_component_nowidth_noprec_3_p_0(top_level__mercury_compile_front_end__V_46_46, top_level__mercury_compile_front_end__Stage_8, &top_level__mercury_compile_front_end__V_40_40);
          }
#line 716 "mercury_compile_front_end.m"
          {
#line 716 "mercury_compile_front_end.m"
            mercury__io__write_string_3_p_0(top_level__mercury_compile_front_end__V_40_40);
          }
#line 716 "mercury_compile_front_end.m"
          {
#line 716 "mercury_compile_front_end.m"
            mercury__io__write_string_3_p_0((MR_String) " ");
          }
#line 716 "mercury_compile_front_end.m"
          {
#line 716 "mercury_compile_front_end.m"
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(top_level__mercury_compile_front_end__V_46_46, top_level__mercury_compile_front_end__Repeats_13, &top_level__mercury_compile_front_end__V_50_50);
          }
#line 716 "mercury_compile_front_end.m"
          {
#line 716 "mercury_compile_front_end.m"
            mercury__io__write_string_3_p_0(top_level__mercury_compile_front_end__V_50_50);
          }
#line 716 "mercury_compile_front_end.m"
          {
#line 716 "mercury_compile_front_end.m"
            mercury__io__write_string_3_p_0((MR_String) " ");
          }
#line 730 "mercury_compile_front_end.m"
          {
#line 730 "mercury_compile_front_end.m"
            mercury__benchmarking__benchmark_det_io_7_p_0((MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, (MR_Word) &top_level__mercury_compile_front_end_scalar_common_3[2], ((MR_Box) (top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_15)), &top_level__mercury_compile_front_end__conv2_STATE_VARIABLE_HLDS_16, ((MR_Box) ((MR_Integer) 0)), &top_level__mercury_compile_front_end__conv1_STATE_VARIABLE_IO_31_31, top_level__mercury_compile_front_end__Repeats_13, &top_level__mercury_compile_front_end__Time_14);
          }
#line 730 "mercury_compile_front_end.m"
          *top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_16 = ((MR_Word) top_level__mercury_compile_front_end__conv2_STATE_VARIABLE_HLDS_16);
#line 720 "mercury_compile_front_end.m"
          {
#line 720 "mercury_compile_front_end.m"
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(top_level__mercury_compile_front_end__V_46_46, top_level__mercury_compile_front_end__Time_14, &top_level__mercury_compile_front_end__V_59_59);
          }
#line 720 "mercury_compile_front_end.m"
          {
#line 720 "mercury_compile_front_end.m"
            mercury__io__write_string_3_p_0(top_level__mercury_compile_front_end__V_59_59);
          }
#line 720 "mercury_compile_front_end.m"
          {
#line 720 "mercury_compile_front_end.m"
            mercury__io__write_string_3_p_0((MR_String) " ms\n");
#line 720 "mercury_compile_front_end.m"
            return;
          }
#line 714 "mercury_compile_front_end.m"
        }
#line 721 "mercury_compile_front_end.m"
        break;
#line 721 "mercury_compile_front_end.m"
    }
#line 710 "mercury_compile_front_end.m"
  }
#line 706 "mercury_compile_front_end.m"
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
#line 1128 "top_level.mercury_compile_front_end.c"
  {
#line 1130 "top_level.mercury_compile_front_end.c"
    MR_bool top_level__mercury_compile_front_end__succeeded = (top_level__mercury_compile_front_end__HeadVar__2_1 == top_level__mercury_compile_front_end__HeadVar__2_2);

#line 1133 "top_level.mercury_compile_front_end.c"
    return top_level__mercury_compile_front_end__succeeded;
#line 1135 "top_level.mercury_compile_front_end.c"
  }
#line 41 "mercury_compile_front_end.m"
}

#line 1036 "mercury_compile_front_end.m"
static void MR_CALL 
top_level__mercury_compile_front_end__maybe_proc_statistics_9_p_0(
#line 1036 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__Verbose_10,
#line 1036 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__Stats_11,
#line 1036 "mercury_compile_front_end.m"
  MR_String top_level__mercury_compile_front_end__Msg_12,
#line 1036 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_22,
#line 1036 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_23,
#line 1036 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_24,
#line 1036 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_25)
#line 1036 "mercury_compile_front_end.m"
{
#line 1040 "mercury_compile_front_end.m"
  {
#line 1040 "mercury_compile_front_end.m"
    MR_bool top_level__mercury_compile_front_end__succeeded;
#line 1040 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__Globals_16;
#line 1040 "mercury_compile_front_end.m"
    MR_String top_level__mercury_compile_front_end__StatsFileName_17;

#line 1041 "mercury_compile_front_end.m"
    {
#line 1041 "mercury_compile_front_end.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_22, &top_level__mercury_compile_front_end__Globals_16);
    }
#line 1042 "mercury_compile_front_end.m"
    {
#line 1042 "mercury_compile_front_end.m"
      hlds__hlds_error_util__maybe_write_out_errors_8_p_0(top_level__mercury_compile_front_end__Verbose_10, top_level__mercury_compile_front_end__Globals_16, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_22, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_23, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_24, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_25);
    }
#line 1044 "mercury_compile_front_end.m"
    {
#line 1044 "mercury_compile_front_end.m"
      libs__globals__lookup_string_option_3_p_0(top_level__mercury_compile_front_end__Globals_16, (MR_Integer) 57, &top_level__mercury_compile_front_end__StatsFileName_17);
    }
#line 1045 "mercury_compile_front_end.m"
    top_level__mercury_compile_front_end__succeeded = (strcmp(top_level__mercury_compile_front_end__StatsFileName_17, (MR_String) "") == 0);
#line 1048 "mercury_compile_front_end.m"
    if (top_level__mercury_compile_front_end__succeeded)
#line 1048 "mercury_compile_front_end.m"
      {
#line 1048 "mercury_compile_front_end.m"
      }
#line 1048 "mercury_compile_front_end.m"
    else
#line 1049 "mercury_compile_front_end.m"
      {
#line 1049 "mercury_compile_front_end.m"
        MR_Word top_level__mercury_compile_front_end__StatsFileNameResult_18;

#line 1049 "mercury_compile_front_end.m"
        {
#line 1049 "mercury_compile_front_end.m"
          mercury__io__open_append_4_p_0(top_level__mercury_compile_front_end__StatsFileName_17, &top_level__mercury_compile_front_end__StatsFileNameResult_18);
        }
#line 1057 "mercury_compile_front_end.m"
        if (((MR_tag((MR_Word) top_level__mercury_compile_front_end__StatsFileNameResult_18)) == (MR_mktag((MR_Integer) 1))))
#line 1058 "mercury_compile_front_end.m"
          {
#line 1058 "mercury_compile_front_end.m"
            MR_Word top_level__mercury_compile_front_end__StatsFileError_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), top_level__mercury_compile_front_end__StatsFileNameResult_18, (MR_Integer) 0)));
#line 1058 "mercury_compile_front_end.m"
            MR_String top_level__mercury_compile_front_end__StatsFileErrorMsg_21;

#line 1059 "mercury_compile_front_end.m"
            {
#line 1059 "mercury_compile_front_end.m"
              mercury__io__error_message_2_p_0(top_level__mercury_compile_front_end__StatsFileError_20, &top_level__mercury_compile_front_end__StatsFileErrorMsg_21);
            }
#line 1060 "mercury_compile_front_end.m"
            {
#line 1060 "mercury_compile_front_end.m"
              libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_front_end__Verbose_10, (MR_String) "% Cannot write proc statistics: ");
            }
#line 1062 "mercury_compile_front_end.m"
            {
#line 1062 "mercury_compile_front_end.m"
              libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_front_end__Verbose_10, top_level__mercury_compile_front_end__StatsFileErrorMsg_21);
            }
#line 1063 "mercury_compile_front_end.m"
            {
#line 1063 "mercury_compile_front_end.m"
              libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_front_end__Verbose_10, (MR_String) "\n");
#line 1063 "mercury_compile_front_end.m"
              return;
            }
#line 1058 "mercury_compile_front_end.m"
          }
#line 1057 "mercury_compile_front_end.m"
        else
#line 1051 "mercury_compile_front_end.m"
          {
#line 1051 "mercury_compile_front_end.m"
            MR_Word top_level__mercury_compile_front_end__StatsFileStream_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_front_end__StatsFileNameResult_18, (MR_Integer) 0)));

#line 1052 "mercury_compile_front_end.m"
            {
#line 1052 "mercury_compile_front_end.m"
              libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_front_end__Verbose_10, (MR_String) "% Generating proc statistics...\n");
            }
#line 1054 "mercury_compile_front_end.m"
            {
#line 1054 "mercury_compile_front_end.m"
              hlds__hlds_statistics__write_proc_stats_for_module_5_p_0(top_level__mercury_compile_front_end__StatsFileStream_19, top_level__mercury_compile_front_end__Msg_12, *top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_23);
            }
#line 1055 "mercury_compile_front_end.m"
            {
#line 1055 "mercury_compile_front_end.m"
              libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_front_end__Verbose_10, (MR_String) "% done.\n");
            }
#line 1056 "mercury_compile_front_end.m"
            {
#line 1056 "mercury_compile_front_end.m"
              libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_front_end__Stats_11);
#line 1056 "mercury_compile_front_end.m"
              return;
            }
#line 1051 "mercury_compile_front_end.m"
          }
#line 1049 "mercury_compile_front_end.m"
      }
#line 1040 "mercury_compile_front_end.m"
  }
#line 1036 "mercury_compile_front_end.m"
}

#line 1009 "mercury_compile_front_end.m"
static void MR_CALL 
top_level__mercury_compile_front_end__simplify_pred_8_p_0(
#line 1009 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__SimplifyTasks0_9,
#line 1009 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__PredId_10,
#line 1009 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_ModuleInfo_0_22,
#line 1009 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_ModuleInfo_23,
#line 1009 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_PredInfo_0_24,
#line 1009 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_PredInfo_25,
#line 1009 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_26,
#line 1009 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_27)
#line 1009 "mercury_compile_front_end.m"
{
#line 1013 "mercury_compile_front_end.m"
  {
#line 1013 "mercury_compile_front_end.m"
    MR_bool top_level__mercury_compile_front_end__succeeded;
#line 1013 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__ProcIds_15;
#line 1013 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__SimplifyTasks_16;
#line 1013 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__ErrorSpecs0_17;
#line 1013 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__ErrorSpecs_18;
#line 1013 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__Globals_19;
#line 1013 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__SpecsList_20;
#line 1013 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__Statistics_21;

#line 1015 "mercury_compile_front_end.m"
    {
#line 1015 "mercury_compile_front_end.m"
      hlds__passes_aux__write_pred_progress_message_5_p_0((MR_String) "% Simplifying ", top_level__mercury_compile_front_end__PredId_10, top_level__mercury_compile_front_end__STATE_VARIABLE_ModuleInfo_0_22);
    }
#line 1018 "mercury_compile_front_end.m"
    {
#line 1018 "mercury_compile_front_end.m"
      top_level__mercury_compile_front_end__ProcIds_15 = hlds__hlds_pred__pred_info_non_imported_procids_1_f_0(top_level__mercury_compile_front_end__STATE_VARIABLE_PredInfo_0_24);
    }
#line 1020 "mercury_compile_front_end.m"
    {
#line 1020 "mercury_compile_front_end.m"
      top_level__mercury_compile_front_end__succeeded = hlds__hlds_pred__is_unify_or_compare_pred_1_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_PredInfo_0_24);
    }
#line 1022 "mercury_compile_front_end.m"
    if (top_level__mercury_compile_front_end__succeeded)
#line 1021 "mercury_compile_front_end.m"
      {
#line 1021 "mercury_compile_front_end.m"
        MR_Word top_level__mercury_compile_front_end__V_39_39 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_front_end__SimplifyTasks0_9, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 1021 "mercury_compile_front_end.m"
        MR_Word top_level__mercury_compile_front_end__V_40_40 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_front_end__SimplifyTasks0_9, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 1021 "mercury_compile_front_end.m"
        MR_Word top_level__mercury_compile_front_end__V_41_41 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_front_end__SimplifyTasks0_9, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 1021 "mercury_compile_front_end.m"
        MR_Word top_level__mercury_compile_front_end__V_42_42 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_front_end__SimplifyTasks0_9, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 1021 "mercury_compile_front_end.m"
        MR_Word top_level__mercury_compile_front_end__V_43_43 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_front_end__SimplifyTasks0_9, (MR_Integer) 0)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 1021 "mercury_compile_front_end.m"
        MR_Word top_level__mercury_compile_front_end__V_44_44 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_front_end__SimplifyTasks0_9, (MR_Integer) 0)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 1021 "mercury_compile_front_end.m"
        MR_Word top_level__mercury_compile_front_end__V_45_45 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_front_end__SimplifyTasks0_9, (MR_Integer) 0)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 1021 "mercury_compile_front_end.m"
        MR_Word top_level__mercury_compile_front_end__V_46_46 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_front_end__SimplifyTasks0_9, (MR_Integer) 0)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
#line 1021 "mercury_compile_front_end.m"
        MR_Word top_level__mercury_compile_front_end__V_47_47 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_front_end__SimplifyTasks0_9, (MR_Integer) 0)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
#line 1021 "mercury_compile_front_end.m"
        MR_Word top_level__mercury_compile_front_end__V_48_48 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_front_end__SimplifyTasks0_9, (MR_Integer) 0)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
#line 1021 "mercury_compile_front_end.m"
        MR_Word top_level__mercury_compile_front_end__V_49_49 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_front_end__SimplifyTasks0_9, (MR_Integer) 0)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
#line 1021 "mercury_compile_front_end.m"
        MR_Word top_level__mercury_compile_front_end__V_50_50 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_front_end__SimplifyTasks0_9, (MR_Integer) 0)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
#line 1021 "mercury_compile_front_end.m"
        MR_Word top_level__mercury_compile_front_end__V_38_38 = ((((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_front_end__SimplifyTasks0_9, (MR_Integer) 0)))) & (MR_Integer) 1);

#line 1021 "mercury_compile_front_end.m"
        {
#line 1021 "mercury_compile_front_end.m"
          top_level__mercury_compile_front_end__SimplifyTasks_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1021 "mercury_compile_front_end.m"
          MR_hl_field(MR_mktag(0), top_level__mercury_compile_front_end__SimplifyTasks_16, 0) = ((MR_Box) (((MR_Integer) 0 | ((((top_level__mercury_compile_front_end__V_39_39 << (MR_Integer) 1)) | ((((top_level__mercury_compile_front_end__V_40_40 << (MR_Integer) 2)) | ((((top_level__mercury_compile_front_end__V_41_41 << (MR_Integer) 3)) | ((((top_level__mercury_compile_front_end__V_42_42 << (MR_Integer) 4)) | ((((top_level__mercury_compile_front_end__V_43_43 << (MR_Integer) 5)) | ((((top_level__mercury_compile_front_end__V_44_44 << (MR_Integer) 6)) | ((((top_level__mercury_compile_front_end__V_45_45 << (MR_Integer) 7)) | ((((top_level__mercury_compile_front_end__V_46_46 << (MR_Integer) 8)) | ((((top_level__mercury_compile_front_end__V_47_47 << (MR_Integer) 9)) | ((((top_level__mercury_compile_front_end__V_48_48 << (MR_Integer) 10)) | ((((top_level__mercury_compile_front_end__V_49_49 << (MR_Integer) 11)) | ((top_level__mercury_compile_front_end__V_50_50 << (MR_Integer) 12)))))))))))))))))))))))))));
#line 1021 "mercury_compile_front_end.m"
        }
#line 1021 "mercury_compile_front_end.m"
      }
#line 1022 "mercury_compile_front_end.m"
    else
#line 1023 "mercury_compile_front_end.m"
      top_level__mercury_compile_front_end__SimplifyTasks_16 = top_level__mercury_compile_front_end__SimplifyTasks0_9;
#line 1025 "mercury_compile_front_end.m"
    {
#line 1025 "mercury_compile_front_end.m"
      top_level__mercury_compile_front_end__ErrorSpecs0_17 = parse_tree__error_util__init_error_spec_accumulator_0_f_0();
    }
#line 1026 "mercury_compile_front_end.m"
    {
#line 1026 "mercury_compile_front_end.m"
      check_hlds__simplify__simplify_proc__simplify_pred_procs_9_p_0(top_level__mercury_compile_front_end__SimplifyTasks_16, top_level__mercury_compile_front_end__PredId_10, top_level__mercury_compile_front_end__ProcIds_15, top_level__mercury_compile_front_end__STATE_VARIABLE_ModuleInfo_0_22, top_level__mercury_compile_front_end__STATE_VARIABLE_ModuleInfo_23, top_level__mercury_compile_front_end__STATE_VARIABLE_PredInfo_0_24, top_level__mercury_compile_front_end__STATE_VARIABLE_PredInfo_25, top_level__mercury_compile_front_end__ErrorSpecs0_17, &top_level__mercury_compile_front_end__ErrorSpecs_18);
    }
#line 1028 "mercury_compile_front_end.m"
    {
#line 1028 "mercury_compile_front_end.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(*top_level__mercury_compile_front_end__STATE_VARIABLE_ModuleInfo_23, &top_level__mercury_compile_front_end__Globals_19);
    }
#line 1029 "mercury_compile_front_end.m"
    {
#line 1029 "mercury_compile_front_end.m"
      top_level__mercury_compile_front_end__SpecsList_20 = parse_tree__error_util__error_spec_accumulator_to_list_1_f_0(top_level__mercury_compile_front_end__ErrorSpecs_18);
    }
#line 1030 "mercury_compile_front_end.m"
    {
#line 1030 "mercury_compile_front_end.m"
      *top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_27 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, top_level__mercury_compile_front_end__SpecsList_20, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_26);
    }
#line 1031 "mercury_compile_front_end.m"
    {
#line 1031 "mercury_compile_front_end.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_front_end__Globals_19, (MR_Integer) 56, &top_level__mercury_compile_front_end__Statistics_21);
    }
#line 1033 "mercury_compile_front_end.m"
    {
#line 1033 "mercury_compile_front_end.m"
      libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_front_end__Statistics_21);
#line 1033 "mercury_compile_front_end.m"
      return;
    }
#line 1013 "mercury_compile_front_end.m"
  }
#line 1009 "mercury_compile_front_end.m"
}

#line 884 "mercury_compile_front_end.m"
static void MR_CALL 
top_level__mercury_compile_front_end__process_try_goals_9_p_0(
#line 884 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__Verbose_10,
#line 884 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__Stats_11,
#line 884 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_18,
#line 884 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_19,
#line 884 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__FoundError_13,
#line 884 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_20,
#line 884 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_21)
#line 884 "mercury_compile_front_end.m"
{
#line 888 "mercury_compile_front_end.m"
  {
#line 888 "mercury_compile_front_end.m"
    MR_bool top_level__mercury_compile_front_end__succeeded;
#line 888 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__Globals_16;
#line 888 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__TryExpandSpecs_17;
#line 888 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_24_24;
#line 888 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_25_25;
#line 888 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_29_29;
#line 888 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_31_31;

#line 889 "mercury_compile_front_end.m"
    {
#line 889 "mercury_compile_front_end.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_18, &top_level__mercury_compile_front_end__Globals_16);
    }
#line 890 "mercury_compile_front_end.m"
    {
#line 890 "mercury_compile_front_end.m"
      hlds__hlds_error_util__maybe_write_out_errors_8_p_0(top_level__mercury_compile_front_end__Verbose_10, top_level__mercury_compile_front_end__Globals_16, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_18, &top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_24_24, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_20, &top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_25_25);
    }
#line 891 "mercury_compile_front_end.m"
    {
#line 891 "mercury_compile_front_end.m"
      libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_front_end__Verbose_10, (MR_String) "% Transforming try goals...\n");
    }
#line 892 "mercury_compile_front_end.m"
    {
#line 892 "mercury_compile_front_end.m"
      check_hlds__try_expand__expand_try_goals_in_module_4_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_24_24, &top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_29_29, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &top_level__mercury_compile_front_end__TryExpandSpecs_17);
    }
#line 893 "mercury_compile_front_end.m"
    {
#line 893 "mercury_compile_front_end.m"
      top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_31_31 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, top_level__mercury_compile_front_end__TryExpandSpecs_17, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_25_25);
    }
#line 894 "mercury_compile_front_end.m"
    {
#line 894 "mercury_compile_front_end.m"
      *top_level__mercury_compile_front_end__FoundError_13 = parse_tree__error_util__contains_errors_2_f_0(top_level__mercury_compile_front_end__Globals_16, top_level__mercury_compile_front_end__TryExpandSpecs_17);
    }
#line 895 "mercury_compile_front_end.m"
    {
#line 895 "mercury_compile_front_end.m"
      hlds__hlds_error_util__maybe_write_out_errors_8_p_0(top_level__mercury_compile_front_end__Verbose_10, top_level__mercury_compile_front_end__Globals_16, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_29_29, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_19, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_31_31, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_21);
    }
#line 899 "mercury_compile_front_end.m"
#line 899 "mercury_compile_front_end.m"
    switch (*top_level__mercury_compile_front_end__FoundError_13) {
#line 899 "mercury_compile_front_end.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 899 "mercury_compile_front_end.m"
      case (MR_Integer) 0:
#line 900 "mercury_compile_front_end.m"
        {
#line 901 "mercury_compile_front_end.m"
          {
#line 901 "mercury_compile_front_end.m"
            libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_front_end__Verbose_10, (MR_String) "% done.\n");
          }
#line 900 "mercury_compile_front_end.m"
        }
#line 899 "mercury_compile_front_end.m"
        break;
#line 899 "mercury_compile_front_end.m"
      case (MR_Integer) 1:
#line 897 "mercury_compile_front_end.m"
        {
#line 898 "mercury_compile_front_end.m"
          {
#line 898 "mercury_compile_front_end.m"
            libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_front_end__Verbose_10, (MR_String) "% Program contains error(s).\n");
          }
#line 897 "mercury_compile_front_end.m"
        }
#line 899 "mercury_compile_front_end.m"
        break;
#line 899 "mercury_compile_front_end.m"
    }
#line 903 "mercury_compile_front_end.m"
    {
#line 903 "mercury_compile_front_end.m"
      libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_front_end__Stats_11);
#line 903 "mercury_compile_front_end.m"
      return;
    }
#line 888 "mercury_compile_front_end.m"
  }
#line 884 "mercury_compile_front_end.m"
}

#line 874 "mercury_compile_front_end.m"
static MR_bool MR_CALL 
top_level__mercury_compile_front_end__type_ctor_is_defined_in_this_module_2_p_0(
#line 874 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__ModuleName_3,
#line 874 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__HeadVar__2_2)
#line 874 "mercury_compile_front_end.m"
{
#line 877 "mercury_compile_front_end.m"
  {
#line 877 "mercury_compile_front_end.m"
    MR_bool top_level__mercury_compile_front_end__succeeded;
#line 877 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__TypeCtor_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_front_end__HeadVar__2_2, (MR_Integer) 0)));
#line 877 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__TypeSymName_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_front_end__TypeCtor_4, (MR_Integer) 0)));
#line 877 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__TypeModuleName_8;
#line 877 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_front_end__HeadVar__2_2, (MR_Integer) 1)));
#line 878 "mercury_compile_front_end.m"
    MR_Integer top_level__mercury_compile_front_end___TypeArity_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_front_end__TypeCtor_4, (MR_Integer) 1)));
#line 879 "mercury_compile_front_end.m"
    MR_String top_level__mercury_compile_front_end___TypeName_9;

#line 879 "mercury_compile_front_end.m"
    top_level__mercury_compile_front_end__succeeded = ((MR_tag((MR_Word) top_level__mercury_compile_front_end__TypeSymName_6)) == (MR_mktag((MR_Integer) 1)));
#line 879 "mercury_compile_front_end.m"
    if (top_level__mercury_compile_front_end__succeeded)
#line 879 "mercury_compile_front_end.m"
      {
#line 879 "mercury_compile_front_end.m"
        top_level__mercury_compile_front_end__TypeModuleName_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), top_level__mercury_compile_front_end__TypeSymName_6, (MR_Integer) 0)));
#line 879 "mercury_compile_front_end.m"
        top_level__mercury_compile_front_end___TypeName_9 = ((MR_String) (MR_hl_field(MR_mktag(1), top_level__mercury_compile_front_end__TypeSymName_6, (MR_Integer) 1)));
#line 880 "mercury_compile_front_end.m"
        {
#line 880 "mercury_compile_front_end.m"
          return top_level__mercury_compile_front_end__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(top_level__mercury_compile_front_end__ModuleName_3, top_level__mercury_compile_front_end__TypeModuleName_8);
        }
#line 879 "mercury_compile_front_end.m"
      }
#line 877 "mercury_compile_front_end.m"
    return top_level__mercury_compile_front_end__succeeded;
#line 877 "mercury_compile_front_end.m"
  }
#line 874 "mercury_compile_front_end.m"
}

#line 848 "mercury_compile_front_end.m"
static MR_bool MR_CALL 
top_level__mercury_compile_front_end__check_oisu_pragmas_9_p_0_1(
#line 848 "mercury_compile_front_end.m"
  MR_Box top_level__mercury_compile_front_end__closure_arg,
#line 848 "mercury_compile_front_end.m"
  MR_Box top_level__mercury_compile_front_end__wrapper_arg_1)
#line 848 "mercury_compile_front_end.m"
{
#line 848 "mercury_compile_front_end.m"
  {
#line 848 "mercury_compile_front_end.m"
    MR_bool top_level__mercury_compile_front_end__succeeded;
#line 848 "mercury_compile_front_end.m"
    MR_Box top_level__mercury_compile_front_end__closure = top_level__mercury_compile_front_end__closure_arg;

#line 848 "mercury_compile_front_end.m"
    {
#line 848 "mercury_compile_front_end.m"
      return top_level__mercury_compile_front_end__succeeded = top_level__mercury_compile_front_end__type_ctor_is_defined_in_this_module_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_front_end__closure, (MR_Integer) 3))), ((MR_Word) top_level__mercury_compile_front_end__wrapper_arg_1));
    }
#line 848 "mercury_compile_front_end.m"
    return top_level__mercury_compile_front_end__succeeded;
#line 848 "mercury_compile_front_end.m"
  }
#line 848 "mercury_compile_front_end.m"
}

#line 840 "mercury_compile_front_end.m"
static void MR_CALL 
top_level__mercury_compile_front_end__check_oisu_pragmas_9_p_0(
#line 840 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__Verbose_10,
#line 840 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__Stats_11,
#line 840 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_24,
#line 840 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_25,
#line 840 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__FoundError_13,
#line 840 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_26,
#line 840 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_27)
#line 840 "mercury_compile_front_end.m"
{
#line 844 "mercury_compile_front_end.m"
  {
#line 844 "mercury_compile_front_end.m"
    MR_bool top_level__mercury_compile_front_end__succeeded;
#line 844 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__OISUMap_16;
#line 844 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__OISUPairs_17;
#line 844 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__ModuleName_18;
#line 844 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__ModuleOISUPairs_19;
#line 844 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__V_30_30;

#line 845 "mercury_compile_front_end.m"
    {
#line 845 "mercury_compile_front_end.m"
      hlds__hlds_module__module_info_get_oisu_map_2_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_24, &top_level__mercury_compile_front_end__OISUMap_16);
    }
#line 846 "mercury_compile_front_end.m"
    {
#line 846 "mercury_compile_front_end.m"
      mercury__map__to_assoc_list_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0, (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_oisu_preds_0, top_level__mercury_compile_front_end__OISUMap_16, &top_level__mercury_compile_front_end__OISUPairs_17);
    }
#line 847 "mercury_compile_front_end.m"
    {
#line 847 "mercury_compile_front_end.m"
      hlds__hlds_module__module_info_get_name_2_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_24, &top_level__mercury_compile_front_end__ModuleName_18);
    }
#line 848 "mercury_compile_front_end.m"
    {
#line 848 "mercury_compile_front_end.m"
      top_level__mercury_compile_front_end__V_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 848 "mercury_compile_front_end.m"
      MR_hl_field(MR_mktag(0), top_level__mercury_compile_front_end__V_30_30, 0) = ((MR_Box) (&top_level__mercury_compile_front_end_scalar_common_2[2]));
#line 848 "mercury_compile_front_end.m"
      MR_hl_field(MR_mktag(0), top_level__mercury_compile_front_end__V_30_30, 1) = ((MR_Box) (top_level__mercury_compile_front_end__check_oisu_pragmas_9_p_0_1));
#line 848 "mercury_compile_front_end.m"
      MR_hl_field(MR_mktag(0), top_level__mercury_compile_front_end__V_30_30, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 848 "mercury_compile_front_end.m"
      MR_hl_field(MR_mktag(0), top_level__mercury_compile_front_end__V_30_30, 3) = ((MR_Box) (top_level__mercury_compile_front_end__ModuleName_18));
#line 848 "mercury_compile_front_end.m"
    }
#line 848 "mercury_compile_front_end.m"
    {
#line 848 "mercury_compile_front_end.m"
      mercury__list__filter_3_p_0((MR_Word) &top_level__mercury_compile_front_end_scalar_common_3[0], top_level__mercury_compile_front_end__V_30_30, top_level__mercury_compile_front_end__OISUPairs_17, &top_level__mercury_compile_front_end__ModuleOISUPairs_19);
    }
#line 869 "mercury_compile_front_end.m"
    if ((top_level__mercury_compile_front_end__ModuleOISUPairs_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 870 "mercury_compile_front_end.m"
      {
#line 871 "mercury_compile_front_end.m"
        *top_level__mercury_compile_front_end__FoundError_13 = (MR_Integer) 0;
#line 870 "mercury_compile_front_end.m"
        *top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_25 = top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_24;
#line 870 "mercury_compile_front_end.m"
        *top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_27 = top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_26;
#line 870 "mercury_compile_front_end.m"
      }
#line 869 "mercury_compile_front_end.m"
    else
#line 851 "mercury_compile_front_end.m"
      {
#line 851 "mercury_compile_front_end.m"
        MR_Word top_level__mercury_compile_front_end__Globals_22;
#line 851 "mercury_compile_front_end.m"
        MR_Word top_level__mercury_compile_front_end__OISUSpecs_23;
#line 851 "mercury_compile_front_end.m"
        MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_31_31;
#line 851 "mercury_compile_front_end.m"
        MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_32_32;
#line 851 "mercury_compile_front_end.m"
        MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_36_36;
#line 851 "mercury_compile_front_end.m"
        MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_37_37;

#line 852 "mercury_compile_front_end.m"
        {
#line 852 "mercury_compile_front_end.m"
          hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_24, &top_level__mercury_compile_front_end__Globals_22);
        }
#line 853 "mercury_compile_front_end.m"
        {
#line 853 "mercury_compile_front_end.m"
          hlds__hlds_error_util__maybe_write_out_errors_8_p_0(top_level__mercury_compile_front_end__Verbose_10, top_level__mercury_compile_front_end__Globals_22, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_24, &top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_31_31, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_26, &top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_32_32);
        }
#line 854 "mercury_compile_front_end.m"
        {
#line 854 "mercury_compile_front_end.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_front_end__Verbose_10, (MR_String) "% Checking oisu pragmas...\n");
        }
#line 856 "mercury_compile_front_end.m"
        {
#line 856 "mercury_compile_front_end.m"
          check_hlds__oisu_check__check_oisu_pragmas_for_module_4_p_0(top_level__mercury_compile_front_end__ModuleOISUPairs_19, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_31_31, &top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_36_36, &top_level__mercury_compile_front_end__OISUSpecs_23);
        }
#line 857 "mercury_compile_front_end.m"
        {
#line 857 "mercury_compile_front_end.m"
          top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_37_37 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, top_level__mercury_compile_front_end__OISUSpecs_23, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_32_32);
        }
#line 858 "mercury_compile_front_end.m"
        {
#line 858 "mercury_compile_front_end.m"
          *top_level__mercury_compile_front_end__FoundError_13 = parse_tree__error_util__contains_errors_2_f_0(top_level__mercury_compile_front_end__Globals_22, top_level__mercury_compile_front_end__OISUSpecs_23);
        }
#line 859 "mercury_compile_front_end.m"
        {
#line 859 "mercury_compile_front_end.m"
          hlds__hlds_error_util__maybe_write_out_errors_8_p_0(top_level__mercury_compile_front_end__Verbose_10, top_level__mercury_compile_front_end__Globals_22, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_36_36, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_25, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_37_37, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_27);
        }
#line 864 "mercury_compile_front_end.m"
#line 864 "mercury_compile_front_end.m"
        switch (*top_level__mercury_compile_front_end__FoundError_13) {
#line 864 "mercury_compile_front_end.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 864 "mercury_compile_front_end.m"
          case (MR_Integer) 0:
#line 865 "mercury_compile_front_end.m"
            {
#line 866 "mercury_compile_front_end.m"
              {
#line 866 "mercury_compile_front_end.m"
                libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_front_end__Verbose_10, (MR_String) "% done.\n");
              }
#line 865 "mercury_compile_front_end.m"
            }
#line 864 "mercury_compile_front_end.m"
            break;
#line 864 "mercury_compile_front_end.m"
          case (MR_Integer) 1:
#line 861 "mercury_compile_front_end.m"
            {
#line 862 "mercury_compile_front_end.m"
              {
#line 862 "mercury_compile_front_end.m"
                libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_front_end__Verbose_10, (MR_String) "% Program contains oisu pragma error(s).\n");
              }
#line 861 "mercury_compile_front_end.m"
            }
#line 864 "mercury_compile_front_end.m"
            break;
#line 864 "mercury_compile_front_end.m"
        }
#line 868 "mercury_compile_front_end.m"
        {
#line 868 "mercury_compile_front_end.m"
          libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_front_end__Stats_11);
#line 868 "mercury_compile_front_end.m"
          return;
        }
#line 851 "mercury_compile_front_end.m"
      }
#line 844 "mercury_compile_front_end.m"
  }
#line 840 "mercury_compile_front_end.m"
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
    MR_Word top_level__mercury_compile_front_end__MustBeStratifiedPreds_16;
#line 810 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__Globals_17;
#line 810 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__Warn_18;

#line 811 "mercury_compile_front_end.m"
    {
#line 811 "mercury_compile_front_end.m"
      hlds__hlds_module__module_info_get_must_be_stratified_preds_2_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_20, &top_level__mercury_compile_front_end__MustBeStratifiedPreds_16);
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
      top_level__mercury_compile_front_end__succeeded = mercury__set__is_non_empty_1_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, top_level__mercury_compile_front_end__MustBeStratifiedPreds_16);
    }
#line 816 "mercury_compile_front_end.m"
    if (!(top_level__mercury_compile_front_end__succeeded))
#line 816 "mercury_compile_front_end.m"
      top_level__mercury_compile_front_end__succeeded = (top_level__mercury_compile_front_end__Warn_18 == (MR_Integer) 1);
#line 834 "mercury_compile_front_end.m"
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
#line 821 "mercury_compile_front_end.m"
        {
#line 821 "mercury_compile_front_end.m"
          check_hlds__stratify__check_module_for_stratification_3_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_27_27, &top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_32_32, &top_level__mercury_compile_front_end__StratifySpecs_19);
        }
#line 822 "mercury_compile_front_end.m"
        {
#line 822 "mercury_compile_front_end.m"
          top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_33_33 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, top_level__mercury_compile_front_end__StratifySpecs_19, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_28_28);
        }
#line 823 "mercury_compile_front_end.m"
        {
#line 823 "mercury_compile_front_end.m"
          *top_level__mercury_compile_front_end__FoundError_13 = parse_tree__error_util__contains_errors_2_f_0(top_level__mercury_compile_front_end__Globals_17, top_level__mercury_compile_front_end__StratifySpecs_19);
        }
#line 824 "mercury_compile_front_end.m"
        {
#line 824 "mercury_compile_front_end.m"
          hlds__hlds_error_util__maybe_write_out_errors_8_p_0(top_level__mercury_compile_front_end__Verbose_10, top_level__mercury_compile_front_end__Globals_17, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_32_32, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_21, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_33_33, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_23);
        }
#line 829 "mercury_compile_front_end.m"
#line 829 "mercury_compile_front_end.m"
        switch (*top_level__mercury_compile_front_end__FoundError_13) {
#line 829 "mercury_compile_front_end.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 829 "mercury_compile_front_end.m"
          case (MR_Integer) 0:
#line 830 "mercury_compile_front_end.m"
            {
#line 831 "mercury_compile_front_end.m"
              {
#line 831 "mercury_compile_front_end.m"
                libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_front_end__Verbose_10, (MR_String) "% done.\n");
              }
#line 830 "mercury_compile_front_end.m"
            }
#line 829 "mercury_compile_front_end.m"
            break;
#line 829 "mercury_compile_front_end.m"
          case (MR_Integer) 1:
#line 826 "mercury_compile_front_end.m"
            {
#line 827 "mercury_compile_front_end.m"
              {
#line 827 "mercury_compile_front_end.m"
                libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_front_end__Verbose_10, (MR_String) "% Program contains stratification error(s).\n");
              }
#line 826 "mercury_compile_front_end.m"
            }
#line 829 "mercury_compile_front_end.m"
            break;
#line 829 "mercury_compile_front_end.m"
        }
#line 833 "mercury_compile_front_end.m"
        {
#line 833 "mercury_compile_front_end.m"
          libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_front_end__Stats_11);
#line 833 "mercury_compile_front_end.m"
          return;
        }
#line 819 "mercury_compile_front_end.m"
      }
#line 834 "mercury_compile_front_end.m"
    else
#line 835 "mercury_compile_front_end.m"
      {
#line 835 "mercury_compile_front_end.m"
        *top_level__mercury_compile_front_end__FoundError_13 = (MR_Integer) 0;
#line 835 "mercury_compile_front_end.m"
        *top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_23 = top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_22;
#line 835 "mercury_compile_front_end.m"
        *top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_21 = top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_20;
#line 835 "mercury_compile_front_end.m"
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
#line 798 "mercury_compile_front_end.m"
    switch (*top_level__mercury_compile_front_end__FoundError_13) {
#line 798 "mercury_compile_front_end.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 798 "mercury_compile_front_end.m"
      case (MR_Integer) 0:
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
        break;
#line 798 "mercury_compile_front_end.m"
      case (MR_Integer) 1:
#line 795 "mercury_compile_front_end.m"
        {
#line 796 "mercury_compile_front_end.m"
          {
#line 796 "mercury_compile_front_end.m"
            libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_front_end__Verbose_10, (MR_String) "% Program contains unique mode error(s).\n");
          }
#line 795 "mercury_compile_front_end.m"
        }
#line 798 "mercury_compile_front_end.m"
        break;
#line 798 "mercury_compile_front_end.m"
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

#line 758 "mercury_compile_front_end.m"
static void MR_CALL 
top_level__mercury_compile_front_end__check_determinism_8_p_0(
#line 758 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__Verbose_9,
#line 758 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__Stats_10,
#line 758 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_17,
#line 758 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_18,
#line 758 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_19,
#line 758 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_20)
#line 758 "mercury_compile_front_end.m"
{
#line 762 "mercury_compile_front_end.m"
  {
#line 762 "mercury_compile_front_end.m"
    MR_bool top_level__mercury_compile_front_end__succeeded;
#line 762 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__DetismSpecs_14;
#line 762 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__Globals_15;
#line 762 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__FoundError_16;
#line 762 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_23_23;
#line 762 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_24_24;

#line 763 "mercury_compile_front_end.m"
    {
#line 763 "mercury_compile_front_end.m"
      check_hlds__det_analysis__determinism_pass_3_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_17, &top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_23_23, &top_level__mercury_compile_front_end__DetismSpecs_14);
    }
#line 764 "mercury_compile_front_end.m"
    {
#line 764 "mercury_compile_front_end.m"
      top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_24_24 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, top_level__mercury_compile_front_end__DetismSpecs_14, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_19);
    }
#line 765 "mercury_compile_front_end.m"
    {
#line 765 "mercury_compile_front_end.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_23_23, &top_level__mercury_compile_front_end__Globals_15);
    }
#line 766 "mercury_compile_front_end.m"
    {
#line 766 "mercury_compile_front_end.m"
      top_level__mercury_compile_front_end__FoundError_16 = parse_tree__error_util__contains_errors_2_f_0(top_level__mercury_compile_front_end__Globals_15, top_level__mercury_compile_front_end__DetismSpecs_14);
    }
#line 767 "mercury_compile_front_end.m"
    {
#line 767 "mercury_compile_front_end.m"
      hlds__hlds_error_util__maybe_write_out_errors_8_p_0(top_level__mercury_compile_front_end__Verbose_9, top_level__mercury_compile_front_end__Globals_15, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_23_23, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_18, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_24_24, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_20);
    }
#line 772 "mercury_compile_front_end.m"
#line 772 "mercury_compile_front_end.m"
    switch (top_level__mercury_compile_front_end__FoundError_16) {
#line 772 "mercury_compile_front_end.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 772 "mercury_compile_front_end.m"
      case (MR_Integer) 0:
#line 773 "mercury_compile_front_end.m"
        {
#line 774 "mercury_compile_front_end.m"
          {
#line 774 "mercury_compile_front_end.m"
            libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_front_end__Verbose_9, (MR_String) "% Program is determinism-correct.\n");
          }
#line 773 "mercury_compile_front_end.m"
        }
#line 772 "mercury_compile_front_end.m"
        break;
#line 772 "mercury_compile_front_end.m"
      case (MR_Integer) 1:
#line 769 "mercury_compile_front_end.m"
        {
#line 770 "mercury_compile_front_end.m"
          {
#line 770 "mercury_compile_front_end.m"
            libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_front_end__Verbose_9, (MR_String) "% Program contains determinism error(s).\n");
          }
#line 769 "mercury_compile_front_end.m"
        }
#line 772 "mercury_compile_front_end.m"
        break;
#line 772 "mercury_compile_front_end.m"
    }
#line 777 "mercury_compile_front_end.m"
    {
#line 777 "mercury_compile_front_end.m"
      libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_front_end__Stats_10);
#line 777 "mercury_compile_front_end.m"
      return;
    }
#line 762 "mercury_compile_front_end.m"
  }
#line 758 "mercury_compile_front_end.m"
}

#line 746 "mercury_compile_front_end.m"
static void MR_CALL 
top_level__mercury_compile_front_end__detect_cse_6_p_0(
#line 746 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__Verbose_7,
#line 746 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__Stats_8,
#line 746 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_11,
#line 746 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_12)
#line 746 "mercury_compile_front_end.m"
{
#line 749 "mercury_compile_front_end.m"
  {
#line 749 "mercury_compile_front_end.m"
    MR_bool top_level__mercury_compile_front_end__succeeded;

#line 750 "mercury_compile_front_end.m"
    {
#line 750 "mercury_compile_front_end.m"
      libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_front_end__Verbose_7, (MR_String) "% Detecting common deconstructions...\n");
    }
#line 752 "mercury_compile_front_end.m"
    {
#line 752 "mercury_compile_front_end.m"
      check_hlds__cse_detection__detect_cse_in_module_2_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_11, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_12);
    }
#line 753 "mercury_compile_front_end.m"
    {
#line 753 "mercury_compile_front_end.m"
      libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_front_end__Verbose_7, (MR_String) "% done.\n");
    }
#line 754 "mercury_compile_front_end.m"
    {
#line 754 "mercury_compile_front_end.m"
      libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_front_end__Stats_8);
#line 754 "mercury_compile_front_end.m"
      return;
    }
#line 749 "mercury_compile_front_end.m"
  }
#line 746 "mercury_compile_front_end.m"
}

#line 734 "mercury_compile_front_end.m"
static void MR_CALL 
top_level__mercury_compile_front_end__detect_switches_6_p_0(
#line 734 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__Verbose_7,
#line 734 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__Stats_8,
#line 734 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_11,
#line 734 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_12)
#line 734 "mercury_compile_front_end.m"
{
#line 737 "mercury_compile_front_end.m"
  {
#line 737 "mercury_compile_front_end.m"
    MR_bool top_level__mercury_compile_front_end__succeeded;

#line 738 "mercury_compile_front_end.m"
    {
#line 738 "mercury_compile_front_end.m"
      libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_front_end__Verbose_7, (MR_String) "% Detecting switches...\n");
    }
#line 739 "mercury_compile_front_end.m"
    {
#line 739 "mercury_compile_front_end.m"
      libs__file_util__maybe_flush_output_3_p_0(top_level__mercury_compile_front_end__Verbose_7);
    }
#line 740 "mercury_compile_front_end.m"
    {
#line 740 "mercury_compile_front_end.m"
      check_hlds__switch_detection__detect_switches_in_module_2_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_11, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_12);
    }
#line 741 "mercury_compile_front_end.m"
    {
#line 741 "mercury_compile_front_end.m"
      libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_front_end__Verbose_7, (MR_String) "% done.\n");
    }
#line 742 "mercury_compile_front_end.m"
    {
#line 742 "mercury_compile_front_end.m"
      libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_front_end__Stats_8);
#line 742 "mercury_compile_front_end.m"
      return;
    }
#line 737 "mercury_compile_front_end.m"
  }
#line 734 "mercury_compile_front_end.m"
}

#line 684 "mercury_compile_front_end.m"
static void MR_CALL 
top_level__mercury_compile_front_end__modecheck_10_p_0_1(
#line 684 "mercury_compile_front_end.m"
  MR_Box top_level__mercury_compile_front_end__closure_arg,
#line 684 "mercury_compile_front_end.m"
  MR_Box top_level__mercury_compile_front_end__wrapper_arg_1,
#line 684 "mercury_compile_front_end.m"
  MR_Box * top_level__mercury_compile_front_end__wrapper_arg_2)
#line 684 "mercury_compile_front_end.m"
{
#line 684 "mercury_compile_front_end.m"
  {
#line 684 "mercury_compile_front_end.m"
    MR_Box top_level__mercury_compile_front_end__closure = top_level__mercury_compile_front_end__closure_arg;
#line 684 "mercury_compile_front_end.m"
    MR_Tuple top_level__mercury_compile_front_end__conv0_HeadVar__2_2;

#line 684 "mercury_compile_front_end.m"
    {
#line 684 "mercury_compile_front_end.m"
      check_hlds__modes__modecheck_module_2_p_0(((MR_Word) top_level__mercury_compile_front_end__wrapper_arg_1), &top_level__mercury_compile_front_end__conv0_HeadVar__2_2);
    }
#line 684 "mercury_compile_front_end.m"
    *top_level__mercury_compile_front_end__wrapper_arg_2 = ((MR_Box) (top_level__mercury_compile_front_end__conv0_HeadVar__2_2));
#line 684 "mercury_compile_front_end.m"
  }
#line 684 "mercury_compile_front_end.m"
}

#line 670 "mercury_compile_front_end.m"
static void MR_CALL 
top_level__mercury_compile_front_end__modecheck_10_p_0(
#line 670 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__Verbose_11,
#line 670 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__Stats_12,
#line 670 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_23,
#line 670 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_24,
#line 670 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__FoundModeError_14,
#line 670 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__SafeToContinue_15,
#line 670 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_25,
#line 670 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_26)
#line 670 "mercury_compile_front_end.m"
{
#line 675 "mercury_compile_front_end.m"
  {
#line 675 "mercury_compile_front_end.m"
    MR_bool top_level__mercury_compile_front_end__succeeded;
#line 675 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__Globals_18;
#line 675 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__BenchmarkModes_19;
#line 675 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__ModeSpecs_21;
#line 675 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_29_29;
#line 675 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_30_30;
#line 675 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_38_38;
#line 675 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_46_46;

#line 676 "mercury_compile_front_end.m"
    {
#line 676 "mercury_compile_front_end.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_23, &top_level__mercury_compile_front_end__Globals_18);
    }
#line 677 "mercury_compile_front_end.m"
    {
#line 677 "mercury_compile_front_end.m"
      hlds__hlds_error_util__maybe_write_out_errors_8_p_0(top_level__mercury_compile_front_end__Verbose_11, top_level__mercury_compile_front_end__Globals_18, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_23, &top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_29_29, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_25, &top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_30_30);
    }
#line 678 "mercury_compile_front_end.m"
    {
#line 678 "mercury_compile_front_end.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_front_end__Globals_18, (MR_Integer) 160, &top_level__mercury_compile_front_end__BenchmarkModes_19);
    }
#line 689 "mercury_compile_front_end.m"
#line 689 "mercury_compile_front_end.m"
    switch (top_level__mercury_compile_front_end__BenchmarkModes_19) {
#line 689 "mercury_compile_front_end.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 689 "mercury_compile_front_end.m"
      case (MR_Integer) 0:
#line 690 "mercury_compile_front_end.m"
        {
#line 690 "mercury_compile_front_end.m"
          MR_Tuple top_level__mercury_compile_front_end__V_33_33;

#line 691 "mercury_compile_front_end.m"
          {
#line 691 "mercury_compile_front_end.m"
            check_hlds__modes__modecheck_module_2_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_29_29, &top_level__mercury_compile_front_end__V_33_33);
          }
#line 691 "mercury_compile_front_end.m"
          top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_front_end__V_33_33, (MR_Integer) 0)));
#line 691 "mercury_compile_front_end.m"
          *top_level__mercury_compile_front_end__SafeToContinue_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_front_end__V_33_33, (MR_Integer) 1)));
#line 691 "mercury_compile_front_end.m"
          top_level__mercury_compile_front_end__ModeSpecs_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_front_end__V_33_33, (MR_Integer) 2)));
#line 690 "mercury_compile_front_end.m"
        }
#line 689 "mercury_compile_front_end.m"
        break;
#line 689 "mercury_compile_front_end.m"
      case (MR_Integer) 1:
#line 680 "mercury_compile_front_end.m"
        {
#line 680 "mercury_compile_front_end.m"
          MR_Integer top_level__mercury_compile_front_end__Repeats_20;
#line 680 "mercury_compile_front_end.m"
          MR_Integer top_level__mercury_compile_front_end__Time_22;
#line 680 "mercury_compile_front_end.m"
          MR_String top_level__mercury_compile_front_end__V_66_66;
#line 680 "mercury_compile_front_end.m"
          MR_Word top_level__mercury_compile_front_end__V_72_72;
#line 680 "mercury_compile_front_end.m"
          MR_String top_level__mercury_compile_front_end__V_76_76;
#line 684 "mercury_compile_front_end.m"
          MR_Tuple top_level__mercury_compile_front_end__V_37_37;
#line 684 "mercury_compile_front_end.m"
          MR_Box top_level__mercury_compile_front_end__conv1_V_37_37;

#line 681 "mercury_compile_front_end.m"
          {
#line 681 "mercury_compile_front_end.m"
            libs__globals__lookup_int_option_3_p_0(top_level__mercury_compile_front_end__Globals_18, (MR_Integer) 161, &top_level__mercury_compile_front_end__Repeats_20);
          }
#line 684 "mercury_compile_front_end.m"
          {
#line 684 "mercury_compile_front_end.m"
            mercury__benchmarking__benchmark_det_5_p_0((MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, (MR_Word) &top_level__mercury_compile_front_end_scalar_common_2[0], (MR_Word) &top_level__mercury_compile_front_end_scalar_common_3[1], ((MR_Box) (top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_29_29)), &top_level__mercury_compile_front_end__conv1_V_37_37, top_level__mercury_compile_front_end__Repeats_20, &top_level__mercury_compile_front_end__Time_22);
          }
#line 684 "mercury_compile_front_end.m"
          top_level__mercury_compile_front_end__V_37_37 = ((MR_Tuple) top_level__mercury_compile_front_end__conv1_V_37_37);
#line 685 "mercury_compile_front_end.m"
          top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_front_end__V_37_37, (MR_Integer) 0)));
#line 685 "mercury_compile_front_end.m"
          *top_level__mercury_compile_front_end__SafeToContinue_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_front_end__V_37_37, (MR_Integer) 1)));
#line 685 "mercury_compile_front_end.m"
          top_level__mercury_compile_front_end__ModeSpecs_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_front_end__V_37_37, (MR_Integer) 2)));
#line 687 "mercury_compile_front_end.m"
          {
#line 687 "mercury_compile_front_end.m"
            mercury__io__write_string_3_p_0((MR_String) "BENCHMARK modecheck, ");
          }
#line 2414 "top_level.mercury_compile_front_end.c"
          top_level__mercury_compile_front_end__V_72_72 = (MR_Word) &top_level__mercury_compile_front_end_scalar_common_5[0];
#line 688 "mercury_compile_front_end.m"
          {
#line 688 "mercury_compile_front_end.m"
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(top_level__mercury_compile_front_end__V_72_72, top_level__mercury_compile_front_end__Repeats_20, &top_level__mercury_compile_front_end__V_66_66);
          }
#line 688 "mercury_compile_front_end.m"
          {
#line 688 "mercury_compile_front_end.m"
            mercury__io__write_string_3_p_0(top_level__mercury_compile_front_end__V_66_66);
          }
#line 687 "mercury_compile_front_end.m"
          {
#line 687 "mercury_compile_front_end.m"
            mercury__io__write_string_3_p_0((MR_String) " repeats: ");
          }
#line 688 "mercury_compile_front_end.m"
          {
#line 688 "mercury_compile_front_end.m"
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(top_level__mercury_compile_front_end__V_72_72, top_level__mercury_compile_front_end__Time_22, &top_level__mercury_compile_front_end__V_76_76);
          }
#line 688 "mercury_compile_front_end.m"
          {
#line 688 "mercury_compile_front_end.m"
            mercury__io__write_string_3_p_0(top_level__mercury_compile_front_end__V_76_76);
          }
#line 687 "mercury_compile_front_end.m"
          {
#line 687 "mercury_compile_front_end.m"
            mercury__io__write_string_3_p_0((MR_String) " ms\n");
          }
#line 680 "mercury_compile_front_end.m"
        }
#line 689 "mercury_compile_front_end.m"
        break;
#line 689 "mercury_compile_front_end.m"
    }
#line 693 "mercury_compile_front_end.m"
    {
#line 693 "mercury_compile_front_end.m"
      top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_46_46 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, top_level__mercury_compile_front_end__ModeSpecs_21, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_30_30);
    }
#line 694 "mercury_compile_front_end.m"
    {
#line 694 "mercury_compile_front_end.m"
      *top_level__mercury_compile_front_end__FoundModeError_14 = parse_tree__error_util__contains_errors_2_f_0(top_level__mercury_compile_front_end__Globals_18, top_level__mercury_compile_front_end__ModeSpecs_21);
    }
#line 699 "mercury_compile_front_end.m"
#line 699 "mercury_compile_front_end.m"
    switch (*top_level__mercury_compile_front_end__FoundModeError_14) {
#line 699 "mercury_compile_front_end.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 699 "mercury_compile_front_end.m"
      case (MR_Integer) 0:
#line 696 "mercury_compile_front_end.m"
        {
#line 697 "mercury_compile_front_end.m"
          {
#line 697 "mercury_compile_front_end.m"
            hlds__hlds_error_util__maybe_write_out_errors_8_p_0(top_level__mercury_compile_front_end__Verbose_11, top_level__mercury_compile_front_end__Globals_18, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_38_38, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_24, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_46_46, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_26);
          }
#line 698 "mercury_compile_front_end.m"
          {
#line 698 "mercury_compile_front_end.m"
            libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_front_end__Verbose_11, (MR_String) "% Program is mode-correct.\n");
          }
#line 696 "mercury_compile_front_end.m"
        }
#line 699 "mercury_compile_front_end.m"
        break;
#line 699 "mercury_compile_front_end.m"
      case (MR_Integer) 1:
#line 700 "mercury_compile_front_end.m"
        {
#line 701 "mercury_compile_front_end.m"
          {
#line 701 "mercury_compile_front_end.m"
            hlds__hlds_error_util__maybe_write_out_errors_8_p_0(top_level__mercury_compile_front_end__Verbose_11, top_level__mercury_compile_front_end__Globals_18, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_38_38, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_24, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_46_46, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_26);
          }
#line 702 "mercury_compile_front_end.m"
          {
#line 702 "mercury_compile_front_end.m"
            libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_front_end__Verbose_11, (MR_String) "% Program contains mode error(s).\n");
          }
#line 700 "mercury_compile_front_end.m"
        }
#line 699 "mercury_compile_front_end.m"
        break;
#line 699 "mercury_compile_front_end.m"
    }
#line 704 "mercury_compile_front_end.m"
    {
#line 704 "mercury_compile_front_end.m"
      libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_front_end__Stats_12);
#line 704 "mercury_compile_front_end.m"
      return;
    }
#line 675 "mercury_compile_front_end.m"
  }
#line 670 "mercury_compile_front_end.m"
}

#line 652 "mercury_compile_front_end.m"
static void MR_CALL 
top_level__mercury_compile_front_end__maybe_mode_constraints_6_p_0(
#line 652 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__Verbose_7,
#line 652 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__Stats_8,
#line 652 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_13,
#line 652 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_14)
#line 652 "mercury_compile_front_end.m"
{
#line 655 "mercury_compile_front_end.m"
  {
#line 655 "mercury_compile_front_end.m"
    MR_bool top_level__mercury_compile_front_end__succeeded;
#line 655 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__Globals_11;
#line 655 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__ModeConstraints_12;

#line 656 "mercury_compile_front_end.m"
    {
#line 656 "mercury_compile_front_end.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_13, &top_level__mercury_compile_front_end__Globals_11);
    }
#line 657 "mercury_compile_front_end.m"
    {
#line 657 "mercury_compile_front_end.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_front_end__Globals_11, (MR_Integer) 157, &top_level__mercury_compile_front_end__ModeConstraints_12);
    }
#line 666 "mercury_compile_front_end.m"
#line 666 "mercury_compile_front_end.m"
    switch (top_level__mercury_compile_front_end__ModeConstraints_12) {
#line 666 "mercury_compile_front_end.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 666 "mercury_compile_front_end.m"
      case (MR_Integer) 0:
#line 667 "mercury_compile_front_end.m"
        *top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_14 = top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_13;
#line 666 "mercury_compile_front_end.m"
        break;
#line 666 "mercury_compile_front_end.m"
      case (MR_Integer) 1:
#line 659 "mercury_compile_front_end.m"
        {
#line 660 "mercury_compile_front_end.m"
          {
#line 660 "mercury_compile_front_end.m"
            libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_front_end__Verbose_7, (MR_String) "% Dumping mode constraints...\n");
          }
#line 661 "mercury_compile_front_end.m"
          {
#line 661 "mercury_compile_front_end.m"
            libs__file_util__maybe_flush_output_3_p_0(top_level__mercury_compile_front_end__Verbose_7);
          }
#line 662 "mercury_compile_front_end.m"
          {
#line 662 "mercury_compile_front_end.m"
            top_level__mercury_compile_front_end__maybe_benchmark_modes__ho1_6_p_0((MR_String) "mode-constraints", top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_13, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_14);
          }
#line 664 "mercury_compile_front_end.m"
          {
#line 664 "mercury_compile_front_end.m"
            libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_front_end__Verbose_7, (MR_String) "% done.\n");
          }
#line 665 "mercury_compile_front_end.m"
          {
#line 665 "mercury_compile_front_end.m"
            libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_front_end__Stats_8);
#line 665 "mercury_compile_front_end.m"
            return;
          }
#line 659 "mercury_compile_front_end.m"
        }
#line 666 "mercury_compile_front_end.m"
        break;
#line 666 "mercury_compile_front_end.m"
    }
#line 655 "mercury_compile_front_end.m"
  }
#line 652 "mercury_compile_front_end.m"
}

#line 629 "mercury_compile_front_end.m"
static void MR_CALL 
top_level__mercury_compile_front_end__maybe_warn_about_unused_imports_8_p_0(
#line 629 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__Verbose_9,
#line 629 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__Stats_10,
#line 629 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_17,
#line 629 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_18,
#line 629 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_19,
#line 629 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_20)
#line 629 "mercury_compile_front_end.m"
{
#line 633 "mercury_compile_front_end.m"
  {
#line 633 "mercury_compile_front_end.m"
    MR_bool top_level__mercury_compile_front_end__succeeded;
#line 633 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__Globals_14;
#line 633 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__WarnUnusedImports_15;

#line 634 "mercury_compile_front_end.m"
    {
#line 634 "mercury_compile_front_end.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_17, &top_level__mercury_compile_front_end__Globals_14);
    }
#line 635 "mercury_compile_front_end.m"
    {
#line 635 "mercury_compile_front_end.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_front_end__Globals_14, (MR_Integer) 37, &top_level__mercury_compile_front_end__WarnUnusedImports_15);
    }
#line 646 "mercury_compile_front_end.m"
#line 646 "mercury_compile_front_end.m"
    switch (top_level__mercury_compile_front_end__WarnUnusedImports_15) {
#line 646 "mercury_compile_front_end.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 646 "mercury_compile_front_end.m"
      case (MR_Integer) 0:
#line 647 "mercury_compile_front_end.m"
        {
#line 647 "mercury_compile_front_end.m"
          *top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_18 = top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_17;
#line 647 "mercury_compile_front_end.m"
          *top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_20 = top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_19;
#line 647 "mercury_compile_front_end.m"
        }
#line 646 "mercury_compile_front_end.m"
        break;
#line 646 "mercury_compile_front_end.m"
      case (MR_Integer) 1:
#line 638 "mercury_compile_front_end.m"
        {
#line 638 "mercury_compile_front_end.m"
          MR_Word top_level__mercury_compile_front_end__UnusedImportSpecs_16;
#line 638 "mercury_compile_front_end.m"
          MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_24_24;
#line 638 "mercury_compile_front_end.m"
          MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_25_25;
#line 638 "mercury_compile_front_end.m"
          MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_29_29;

#line 639 "mercury_compile_front_end.m"
          {
#line 639 "mercury_compile_front_end.m"
            hlds__hlds_error_util__maybe_write_out_errors_8_p_0(top_level__mercury_compile_front_end__Verbose_9, top_level__mercury_compile_front_end__Globals_14, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_17, &top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_24_24, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_19, &top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_25_25);
          }
#line 640 "mercury_compile_front_end.m"
          {
#line 640 "mercury_compile_front_end.m"
            libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_front_end__Verbose_9, (MR_String) "% Checking for unused imports...");
          }
#line 641 "mercury_compile_front_end.m"
          {
#line 641 "mercury_compile_front_end.m"
            check_hlds__unused_imports__warn_about_unused_imports_2_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_24_24, &top_level__mercury_compile_front_end__UnusedImportSpecs_16);
          }
#line 642 "mercury_compile_front_end.m"
          {
#line 642 "mercury_compile_front_end.m"
            top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_29_29 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, top_level__mercury_compile_front_end__UnusedImportSpecs_16, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_25_25);
          }
#line 643 "mercury_compile_front_end.m"
          {
#line 643 "mercury_compile_front_end.m"
            hlds__hlds_error_util__maybe_write_out_errors_8_p_0(top_level__mercury_compile_front_end__Verbose_9, top_level__mercury_compile_front_end__Globals_14, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_24_24, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_18, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_29_29, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_20);
          }
#line 644 "mercury_compile_front_end.m"
          {
#line 644 "mercury_compile_front_end.m"
            libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_front_end__Verbose_9, (MR_String) " done.\n");
          }
#line 645 "mercury_compile_front_end.m"
          {
#line 645 "mercury_compile_front_end.m"
            libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_front_end__Stats_10);
#line 645 "mercury_compile_front_end.m"
            return;
          }
#line 638 "mercury_compile_front_end.m"
        }
#line 646 "mercury_compile_front_end.m"
        break;
#line 646 "mercury_compile_front_end.m"
    }
#line 633 "mercury_compile_front_end.m"
  }
#line 629 "mercury_compile_front_end.m"
}

#line 596 "mercury_compile_front_end.m"
static void MR_CALL 
top_level__mercury_compile_front_end__maybe_polymorphism_9_p_0(
#line 596 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__Verbose_10,
#line 596 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__Stats_11,
#line 596 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__SafeToContinue_12,
#line 596 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_19,
#line 596 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_20,
#line 596 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_21,
#line 596 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_22)
#line 596 "mercury_compile_front_end.m"
{
#line 600 "mercury_compile_front_end.m"
  {
#line 600 "mercury_compile_front_end.m"
    MR_bool top_level__mercury_compile_front_end__succeeded;
#line 600 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__Globals_16;
#line 600 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__VeryVerbose_17;
#line 600 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__PolySpecs_18;
#line 600 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_25_25;
#line 600 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_26_26;
#line 600 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_34_34;
#line 600 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_35_35;

#line 601 "mercury_compile_front_end.m"
    {
#line 601 "mercury_compile_front_end.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_19, &top_level__mercury_compile_front_end__Globals_16);
    }
#line 602 "mercury_compile_front_end.m"
    {
#line 602 "mercury_compile_front_end.m"
      hlds__hlds_error_util__maybe_write_out_errors_8_p_0(top_level__mercury_compile_front_end__Verbose_10, top_level__mercury_compile_front_end__Globals_16, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_19, &top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_25_25, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_21, &top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_26_26);
    }
#line 604 "mercury_compile_front_end.m"
    {
#line 604 "mercury_compile_front_end.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_front_end__Globals_16, (MR_Integer) 46, &top_level__mercury_compile_front_end__VeryVerbose_17);
    }
#line 615 "mercury_compile_front_end.m"
    {
#line 615 "mercury_compile_front_end.m"
      check_hlds__polymorphism__polymorphism_process_module_4_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_25_25, &top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_34_34, top_level__mercury_compile_front_end__SafeToContinue_12, &top_level__mercury_compile_front_end__PolySpecs_18);
    }
#line 616 "mercury_compile_front_end.m"
    {
#line 616 "mercury_compile_front_end.m"
      top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_35_35 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, top_level__mercury_compile_front_end__PolySpecs_18, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_26_26);
    }
#line 2779 "top_level.mercury_compile_front_end.c"
#line 2780 "top_level.mercury_compile_front_end.c"
    switch (top_level__mercury_compile_front_end__VeryVerbose_17) {
#line 2782 "top_level.mercury_compile_front_end.c"
      default: /*NOTREACHED*/ MR_assert(0);
#line 2784 "top_level.mercury_compile_front_end.c"
      case (MR_Integer) 0:
#line 2786 "top_level.mercury_compile_front_end.c"
        {
#line 607 "mercury_compile_front_end.m"
          {
#line 607 "mercury_compile_front_end.m"
            libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_front_end__Verbose_10, (MR_String) "% Transforming polymorphic unifications...");
          }
#line 614 "mercury_compile_front_end.m"
          {
#line 614 "mercury_compile_front_end.m"
            libs__file_util__maybe_flush_output_3_p_0(top_level__mercury_compile_front_end__Verbose_10);
          }
#line 619 "mercury_compile_front_end.m"
          {
#line 619 "mercury_compile_front_end.m"
            libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_front_end__Verbose_10, (MR_String) " done.\n");
          }
#line 2803 "top_level.mercury_compile_front_end.c"
        }
#line 2805 "top_level.mercury_compile_front_end.c"
        break;
#line 2807 "top_level.mercury_compile_front_end.c"
      case (MR_Integer) 1:
#line 2809 "top_level.mercury_compile_front_end.c"
        {
#line 611 "mercury_compile_front_end.m"
          {
#line 611 "mercury_compile_front_end.m"
            libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_front_end__Verbose_10, (MR_String) "% Transforming polymorphic unifications...\n");
          }
#line 614 "mercury_compile_front_end.m"
          {
#line 614 "mercury_compile_front_end.m"
            libs__file_util__maybe_flush_output_3_p_0(top_level__mercury_compile_front_end__Verbose_10);
          }
#line 622 "mercury_compile_front_end.m"
          {
#line 622 "mercury_compile_front_end.m"
            libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_front_end__Verbose_10, (MR_String) "% done.\n");
          }
#line 2826 "top_level.mercury_compile_front_end.c"
        }
#line 2828 "top_level.mercury_compile_front_end.c"
        break;
#line 2830 "top_level.mercury_compile_front_end.c"
    }
#line 624 "mercury_compile_front_end.m"
    {
#line 624 "mercury_compile_front_end.m"
      hlds__hlds_error_util__maybe_write_out_errors_8_p_0(top_level__mercury_compile_front_end__Verbose_10, top_level__mercury_compile_front_end__Globals_16, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_34_34, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_20, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_35_35, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_22);
    }
#line 625 "mercury_compile_front_end.m"
    {
#line 625 "mercury_compile_front_end.m"
      libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_front_end__Stats_11);
#line 625 "mercury_compile_front_end.m"
      return;
    }
#line 600 "mercury_compile_front_end.m"
  }
#line 596 "mercury_compile_front_end.m"
}

#line 580 "mercury_compile_front_end.m"
static void MR_CALL 
top_level__mercury_compile_front_end__subst_implementation_defined_literals_8_p_0(
#line 580 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__Verbose_9,
#line 580 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__Stats_10,
#line 580 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_15,
#line 580 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_16,
#line 580 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_17,
#line 580 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_18)
#line 580 "mercury_compile_front_end.m"
{
#line 584 "mercury_compile_front_end.m"
  {
#line 584 "mercury_compile_front_end.m"
    MR_bool top_level__mercury_compile_front_end__succeeded;
#line 584 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__Globals_14;
#line 584 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_21_21;

#line 585 "mercury_compile_front_end.m"
    {
#line 585 "mercury_compile_front_end.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_15, &top_level__mercury_compile_front_end__Globals_14);
    }
#line 586 "mercury_compile_front_end.m"
    {
#line 586 "mercury_compile_front_end.m"
      hlds__hlds_error_util__maybe_write_out_errors_8_p_0(top_level__mercury_compile_front_end__Verbose_9, top_level__mercury_compile_front_end__Globals_14, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_15, &top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_21_21, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_17, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_18);
    }
#line 587 "mercury_compile_front_end.m"
    {
#line 587 "mercury_compile_front_end.m"
      libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_front_end__Verbose_9, (MR_String) "% Substituting implementation-defined literals...\n");
    }
#line 589 "mercury_compile_front_end.m"
    {
#line 589 "mercury_compile_front_end.m"
      libs__file_util__maybe_flush_output_3_p_0(top_level__mercury_compile_front_end__Verbose_9);
    }
#line 590 "mercury_compile_front_end.m"
    {
#line 590 "mercury_compile_front_end.m"
      check_hlds__implementation_defined_literals__subst_impl_defined_literals_2_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_21_21, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_16);
    }
#line 591 "mercury_compile_front_end.m"
    {
#line 591 "mercury_compile_front_end.m"
      libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_front_end__Verbose_9, (MR_String) "% done.\n");
    }
#line 592 "mercury_compile_front_end.m"
    {
#line 592 "mercury_compile_front_end.m"
      libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_front_end__Stats_10);
#line 592 "mercury_compile_front_end.m"
      return;
    }
#line 584 "mercury_compile_front_end.m"
  }
#line 580 "mercury_compile_front_end.m"
}

#line 556 "mercury_compile_front_end.m"
static void MR_CALL 
top_level__mercury_compile_front_end__puritycheck_8_p_0(
#line 556 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__Verbose_9,
#line 556 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__Stats_10,
#line 556 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_17,
#line 556 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_18,
#line 556 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_19,
#line 556 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_20)
#line 556 "mercury_compile_front_end.m"
{
#line 559 "mercury_compile_front_end.m"
  {
#line 559 "mercury_compile_front_end.m"
    MR_bool top_level__mercury_compile_front_end__succeeded;
#line 559 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__PuritySpecs_14;
#line 559 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__Globals_15;
#line 559 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__PurityErrors_16;
#line 559 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_25_25;
#line 559 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_27_27;

#line 560 "mercury_compile_front_end.m"
    {
#line 560 "mercury_compile_front_end.m"
      libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_front_end__Verbose_9, (MR_String) "% Purity-checking clauses...\n");
    }
#line 561 "mercury_compile_front_end.m"
    {
#line 561 "mercury_compile_front_end.m"
      check_hlds__purity__puritycheck_module_4_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_17, &top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_25_25, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &top_level__mercury_compile_front_end__PuritySpecs_14);
    }
#line 562 "mercury_compile_front_end.m"
    {
#line 562 "mercury_compile_front_end.m"
      top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_27_27 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, top_level__mercury_compile_front_end__PuritySpecs_14, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_19);
    }
#line 563 "mercury_compile_front_end.m"
    {
#line 563 "mercury_compile_front_end.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_25_25, &top_level__mercury_compile_front_end__Globals_15);
    }
#line 564 "mercury_compile_front_end.m"
    {
#line 564 "mercury_compile_front_end.m"
      top_level__mercury_compile_front_end__PurityErrors_16 = parse_tree__error_util__contains_errors_2_f_0(top_level__mercury_compile_front_end__Globals_15, top_level__mercury_compile_front_end__PuritySpecs_14);
    }
#line 565 "mercury_compile_front_end.m"
    {
#line 565 "mercury_compile_front_end.m"
      hlds__hlds_error_util__maybe_write_out_errors_8_p_0(top_level__mercury_compile_front_end__Verbose_9, top_level__mercury_compile_front_end__Globals_15, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_25_25, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_18, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_27_27, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_20);
    }
#line 566 "mercury_compile_front_end.m"
    {
#line 566 "mercury_compile_front_end.m"
      libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_front_end__Stats_10);
    }
#line 571 "mercury_compile_front_end.m"
#line 571 "mercury_compile_front_end.m"
    switch (top_level__mercury_compile_front_end__PurityErrors_16) {
#line 571 "mercury_compile_front_end.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 571 "mercury_compile_front_end.m"
      case (MR_Integer) 0:
#line 572 "mercury_compile_front_end.m"
        {
#line 573 "mercury_compile_front_end.m"
          {
#line 573 "mercury_compile_front_end.m"
            libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_front_end__Verbose_9, (MR_String) "% Program is purity-correct.\n");
          }
#line 572 "mercury_compile_front_end.m"
        }
#line 571 "mercury_compile_front_end.m"
        break;
#line 571 "mercury_compile_front_end.m"
      case (MR_Integer) 1:
#line 568 "mercury_compile_front_end.m"
        {
#line 569 "mercury_compile_front_end.m"
          {
#line 569 "mercury_compile_front_end.m"
            libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_front_end__Verbose_9, (MR_String) "% Program contains purity error(s).\n");
          }
#line 568 "mercury_compile_front_end.m"
        }
#line 571 "mercury_compile_front_end.m"
        break;
#line 571 "mercury_compile_front_end.m"
    }
#line 576 "mercury_compile_front_end.m"
    {
#line 576 "mercury_compile_front_end.m"
      libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_front_end__Stats_10);
#line 576 "mercury_compile_front_end.m"
      return;
    }
#line 559 "mercury_compile_front_end.m"
  }
#line 556 "mercury_compile_front_end.m"
}

#line 463 "mercury_compile_front_end.m"
static void MR_CALL 
top_level__mercury_compile_front_end__frontend_pass_by_phases_9_p_0(
#line 463 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_27,
#line 463 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_28,
#line 463 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__FoundError_11,
#line 463 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_0_29,
#line 463 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_30,
#line 463 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_31,
#line 463 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_32)
#line 463 "mercury_compile_front_end.m"
{
#line 467 "mercury_compile_front_end.m"
  {
#line 467 "mercury_compile_front_end.m"
    MR_bool top_level__mercury_compile_front_end__succeeded;
#line 467 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__Globals_15;
#line 467 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__Verbose_16;
#line 467 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__Stats_17;
#line 467 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__PolySafeToContinue_18;
#line 467 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_37_37;
#line 467 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_38_38;
#line 467 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_42_42;
#line 467 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_118_118;

#line 468 "mercury_compile_front_end.m"
    {
#line 468 "mercury_compile_front_end.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_27, &top_level__mercury_compile_front_end__Globals_15);
    }
#line 469 "mercury_compile_front_end.m"
    {
#line 469 "mercury_compile_front_end.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_front_end__Globals_15, (MR_Integer) 45, &top_level__mercury_compile_front_end__Verbose_16);
    }
#line 470 "mercury_compile_front_end.m"
    {
#line 470 "mercury_compile_front_end.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_front_end__Globals_15, (MR_Integer) 55, &top_level__mercury_compile_front_end__Stats_17);
    }
#line 472 "mercury_compile_front_end.m"
    {
#line 472 "mercury_compile_front_end.m"
      top_level__mercury_compile_front_end__maybe_polymorphism_9_p_0(top_level__mercury_compile_front_end__Verbose_16, top_level__mercury_compile_front_end__Stats_17, &top_level__mercury_compile_front_end__PolySafeToContinue_18, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_27, &top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_37_37, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_31, &top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_38_38);
    }
#line 473 "mercury_compile_front_end.m"
    {
#line 473 "mercury_compile_front_end.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_37_37, (MR_Integer) 30, (MR_String) "polymorphism", top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_0_29, &top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_42_42);
    }
#line 478 "mercury_compile_front_end.m"
#line 478 "mercury_compile_front_end.m"
    switch (top_level__mercury_compile_front_end__PolySafeToContinue_18) {
#line 478 "mercury_compile_front_end.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 478 "mercury_compile_front_end.m"
      case (MR_Integer) 0:
#line 479 "mercury_compile_front_end.m"
        {
#line 479 "mercury_compile_front_end.m"
          MR_Word top_level__mercury_compile_front_end__FoundModeError_19;
#line 479 "mercury_compile_front_end.m"
          MR_Word top_level__mercury_compile_front_end__ModesSafeToContinue_20;
#line 479 "mercury_compile_front_end.m"
          MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_44_44;
#line 479 "mercury_compile_front_end.m"
          MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_45_45;
#line 479 "mercury_compile_front_end.m"
          MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_49_49;
#line 479 "mercury_compile_front_end.m"
          MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_51_51;
#line 479 "mercury_compile_front_end.m"
          MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_55_55;
#line 479 "mercury_compile_front_end.m"
          MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_57_57;
#line 479 "mercury_compile_front_end.m"
          MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_58_58;
#line 479 "mercury_compile_front_end.m"
          MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_62_62;

#line 481 "mercury_compile_front_end.m"
          {
#line 481 "mercury_compile_front_end.m"
            top_level__mercury_compile_front_end__maybe_warn_about_unused_imports_8_p_0(top_level__mercury_compile_front_end__Verbose_16, top_level__mercury_compile_front_end__Stats_17, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_37_37, &top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_44_44, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_38_38, &top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_45_45);
          }
#line 482 "mercury_compile_front_end.m"
          {
#line 482 "mercury_compile_front_end.m"
            hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_44_44, (MR_Integer) 31, (MR_String) "unused_imports", top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_42_42, &top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_49_49);
          }
#line 485 "mercury_compile_front_end.m"
          {
#line 485 "mercury_compile_front_end.m"
            top_level__mercury_compile_front_end__maybe_mode_constraints_6_p_0(top_level__mercury_compile_front_end__Verbose_16, top_level__mercury_compile_front_end__Stats_17, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_44_44, &top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_51_51);
          }
#line 486 "mercury_compile_front_end.m"
          {
#line 486 "mercury_compile_front_end.m"
            hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_51_51, (MR_Integer) 33, (MR_String) "mode_constraints", top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_49_49, &top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_55_55);
          }
#line 488 "mercury_compile_front_end.m"
          {
#line 488 "mercury_compile_front_end.m"
            top_level__mercury_compile_front_end__modecheck_10_p_0(top_level__mercury_compile_front_end__Verbose_16, top_level__mercury_compile_front_end__Stats_17, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_51_51, &top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_57_57, &top_level__mercury_compile_front_end__FoundModeError_19, &top_level__mercury_compile_front_end__ModesSafeToContinue_20, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_45_45, &top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_58_58);
          }
#line 490 "mercury_compile_front_end.m"
          {
#line 490 "mercury_compile_front_end.m"
            hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_57_57, (MR_Integer) 35, (MR_String) "modecheck", top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_55_55, &top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_62_62);
          }
#line 495 "mercury_compile_front_end.m"
#line 495 "mercury_compile_front_end.m"
          switch (top_level__mercury_compile_front_end__ModesSafeToContinue_20) {
#line 495 "mercury_compile_front_end.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 495 "mercury_compile_front_end.m"
            case (MR_Integer) 0:
#line 496 "mercury_compile_front_end.m"
              {
#line 496 "mercury_compile_front_end.m"
                MR_Word top_level__mercury_compile_front_end__FoundUniqError_21;
#line 496 "mercury_compile_front_end.m"
                MR_Word top_level__mercury_compile_front_end__FoundStratError_22;
#line 496 "mercury_compile_front_end.m"
                MR_Word top_level__mercury_compile_front_end__FoundOISUError_23;
#line 496 "mercury_compile_front_end.m"
                MR_Word top_level__mercury_compile_front_end__FoundTryError_24;
#line 496 "mercury_compile_front_end.m"
                MR_Integer top_level__mercury_compile_front_end__NumErrors_25;
#line 496 "mercury_compile_front_end.m"
                MR_Integer top_level__mercury_compile_front_end__ExitStatus_26;
#line 496 "mercury_compile_front_end.m"
                MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_64_64;
#line 496 "mercury_compile_front_end.m"
                MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_68_68;
#line 496 "mercury_compile_front_end.m"
                MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_70_70;
#line 496 "mercury_compile_front_end.m"
                MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_74_74;
#line 496 "mercury_compile_front_end.m"
                MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_76_76;
#line 496 "mercury_compile_front_end.m"
                MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_77_77;
#line 496 "mercury_compile_front_end.m"
                MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_81_81;
#line 496 "mercury_compile_front_end.m"
                MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_83_83;
#line 496 "mercury_compile_front_end.m"
                MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_84_84;
#line 496 "mercury_compile_front_end.m"
                MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_88_88;
#line 496 "mercury_compile_front_end.m"
                MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_90_90;
#line 496 "mercury_compile_front_end.m"
                MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_91_91;
#line 496 "mercury_compile_front_end.m"
                MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_95_95;
#line 496 "mercury_compile_front_end.m"
                MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_97_97;
#line 496 "mercury_compile_front_end.m"
                MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_98_98;
#line 496 "mercury_compile_front_end.m"
                MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_102_102;
#line 496 "mercury_compile_front_end.m"
                MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_104_104;
#line 496 "mercury_compile_front_end.m"
                MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_105_105;
#line 496 "mercury_compile_front_end.m"
                MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_109_109;
#line 496 "mercury_compile_front_end.m"
                MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_113_113;
#line 496 "mercury_compile_front_end.m"
                MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_114_114;

#line 498 "mercury_compile_front_end.m"
                {
#line 498 "mercury_compile_front_end.m"
                  top_level__mercury_compile_front_end__detect_switches_6_p_0(top_level__mercury_compile_front_end__Verbose_16, top_level__mercury_compile_front_end__Stats_17, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_57_57, &top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_64_64);
                }
#line 499 "mercury_compile_front_end.m"
                {
#line 499 "mercury_compile_front_end.m"
                  hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_64_64, (MR_Integer) 40, (MR_String) "switch_detect", top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_62_62, &top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_68_68);
                }
#line 501 "mercury_compile_front_end.m"
                {
#line 501 "mercury_compile_front_end.m"
                  top_level__mercury_compile_front_end__detect_cse_6_p_0(top_level__mercury_compile_front_end__Verbose_16, top_level__mercury_compile_front_end__Stats_17, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_64_64, &top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_70_70);
                }
#line 502 "mercury_compile_front_end.m"
                {
#line 502 "mercury_compile_front_end.m"
                  hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_70_70, (MR_Integer) 45, (MR_String) "cse", top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_68_68, &top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_74_74);
                }
#line 504 "mercury_compile_front_end.m"
                {
#line 504 "mercury_compile_front_end.m"
                  top_level__mercury_compile_front_end__check_determinism_8_p_0(top_level__mercury_compile_front_end__Verbose_16, top_level__mercury_compile_front_end__Stats_17, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_70_70, &top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_76_76, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_58_58, &top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_77_77);
                }
#line 505 "mercury_compile_front_end.m"
                {
#line 505 "mercury_compile_front_end.m"
                  hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_76_76, (MR_Integer) 50, (MR_String) "determinism", top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_74_74, &top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_81_81);
                }
#line 507 "mercury_compile_front_end.m"
                {
#line 507 "mercury_compile_front_end.m"
                  top_level__mercury_compile_front_end__check_unique_modes_9_p_0(top_level__mercury_compile_front_end__Verbose_16, top_level__mercury_compile_front_end__Stats_17, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_76_76, &top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_83_83, &top_level__mercury_compile_front_end__FoundUniqError_21, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_77_77, &top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_84_84);
                }
#line 509 "mercury_compile_front_end.m"
                {
#line 509 "mercury_compile_front_end.m"
                  hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_83_83, (MR_Integer) 55, (MR_String) "unique_modes", top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_81_81, &top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_88_88);
                }
#line 511 "mercury_compile_front_end.m"
                {
#line 511 "mercury_compile_front_end.m"
                  top_level__mercury_compile_front_end__check_stratification_9_p_0(top_level__mercury_compile_front_end__Verbose_16, top_level__mercury_compile_front_end__Stats_17, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_83_83, &top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_90_90, &top_level__mercury_compile_front_end__FoundStratError_22, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_84_84, &top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_91_91);
                }
#line 513 "mercury_compile_front_end.m"
                {
#line 513 "mercury_compile_front_end.m"
                  hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_90_90, (MR_Integer) 60, (MR_String) "stratification", top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_88_88, &top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_95_95);
                }
#line 515 "mercury_compile_front_end.m"
                {
#line 515 "mercury_compile_front_end.m"
                  top_level__mercury_compile_front_end__check_oisu_pragmas_9_p_0(top_level__mercury_compile_front_end__Verbose_16, top_level__mercury_compile_front_end__Stats_17, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_90_90, &top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_97_97, &top_level__mercury_compile_front_end__FoundOISUError_23, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_91_91, &top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_98_98);
                }
#line 517 "mercury_compile_front_end.m"
                {
#line 517 "mercury_compile_front_end.m"
                  hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_97_97, (MR_Integer) 61, (MR_String) "oisu", top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_95_95, &top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_102_102);
                }
#line 519 "mercury_compile_front_end.m"
                {
#line 519 "mercury_compile_front_end.m"
                  top_level__mercury_compile_front_end__process_try_goals_9_p_0(top_level__mercury_compile_front_end__Verbose_16, top_level__mercury_compile_front_end__Stats_17, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_97_97, &top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_104_104, &top_level__mercury_compile_front_end__FoundTryError_24, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_98_98, &top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_105_105);
                }
#line 521 "mercury_compile_front_end.m"
                {
#line 521 "mercury_compile_front_end.m"
                  hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_104_104, (MR_Integer) 62, (MR_String) "try", top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_102_102, &top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_109_109);
                }
#line 523 "mercury_compile_front_end.m"
                {
#line 523 "mercury_compile_front_end.m"
                  top_level__mercury_compile_front_end__maybe_simplify_10_p_0((MR_Integer) 1, (MR_Integer) 0, top_level__mercury_compile_front_end__Verbose_16, top_level__mercury_compile_front_end__Stats_17, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_104_104, &top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_113_113, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_105_105, &top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_114_114);
                }
#line 525 "mercury_compile_front_end.m"
                {
#line 525 "mercury_compile_front_end.m"
                  hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_113_113, (MR_Integer) 65, (MR_String) "frontend_simplify", top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_109_109, &top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_118_118);
                }
#line 527 "mercury_compile_front_end.m"
                {
#line 527 "mercury_compile_front_end.m"
                  top_level__mercury_compile_front_end__maybe_proc_statistics_9_p_0(top_level__mercury_compile_front_end__Verbose_16, top_level__mercury_compile_front_end__Stats_17, (MR_String) "AfterFrontEnd", top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_113_113, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_28, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_114_114, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_32);
                }
#line 531 "mercury_compile_front_end.m"
                {
#line 531 "mercury_compile_front_end.m"
                  hlds__hlds_module__module_info_get_num_errors_2_p_0(*top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_28, &top_level__mercury_compile_front_end__NumErrors_25);
                }
#line 532 "mercury_compile_front_end.m"
                {
#line 532 "mercury_compile_front_end.m"
                  mercury__io__get_exit_status_3_p_0(&top_level__mercury_compile_front_end__ExitStatus_26);
                }
#line 534 "mercury_compile_front_end.m"
                top_level__mercury_compile_front_end__succeeded = (top_level__mercury_compile_front_end__FoundModeError_19 == (MR_Integer) 0);
#line 534 "mercury_compile_front_end.m"
                if (top_level__mercury_compile_front_end__succeeded)
#line 534 "mercury_compile_front_end.m"
                  {
#line 535 "mercury_compile_front_end.m"
                    top_level__mercury_compile_front_end__succeeded = (top_level__mercury_compile_front_end__FoundUniqError_21 == (MR_Integer) 0);
#line 534 "mercury_compile_front_end.m"
                    if (top_level__mercury_compile_front_end__succeeded)
#line 534 "mercury_compile_front_end.m"
                      {
#line 536 "mercury_compile_front_end.m"
                        top_level__mercury_compile_front_end__succeeded = (top_level__mercury_compile_front_end__FoundStratError_22 == (MR_Integer) 0);
#line 534 "mercury_compile_front_end.m"
                        if (top_level__mercury_compile_front_end__succeeded)
#line 534 "mercury_compile_front_end.m"
                          {
#line 537 "mercury_compile_front_end.m"
                            top_level__mercury_compile_front_end__succeeded = (top_level__mercury_compile_front_end__FoundOISUError_23 == (MR_Integer) 0);
#line 534 "mercury_compile_front_end.m"
                            if (top_level__mercury_compile_front_end__succeeded)
#line 534 "mercury_compile_front_end.m"
                              {
#line 538 "mercury_compile_front_end.m"
                                top_level__mercury_compile_front_end__succeeded = (top_level__mercury_compile_front_end__FoundTryError_24 == (MR_Integer) 0);
#line 534 "mercury_compile_front_end.m"
                                if (top_level__mercury_compile_front_end__succeeded)
#line 534 "mercury_compile_front_end.m"
                                  {
#line 539 "mercury_compile_front_end.m"
                                    top_level__mercury_compile_front_end__succeeded = (top_level__mercury_compile_front_end__NumErrors_25 == (MR_Integer) 0);
#line 534 "mercury_compile_front_end.m"
                                    if (top_level__mercury_compile_front_end__succeeded)
#line 543 "mercury_compile_front_end.m"
                                      top_level__mercury_compile_front_end__succeeded = (top_level__mercury_compile_front_end__ExitStatus_26 == (MR_Integer) 0);
#line 534 "mercury_compile_front_end.m"
                                  }
#line 534 "mercury_compile_front_end.m"
                              }
#line 534 "mercury_compile_front_end.m"
                          }
#line 534 "mercury_compile_front_end.m"
                      }
#line 534 "mercury_compile_front_end.m"
                  }
#line 546 "mercury_compile_front_end.m"
                if (top_level__mercury_compile_front_end__succeeded)
#line 545 "mercury_compile_front_end.m"
                  *top_level__mercury_compile_front_end__FoundError_11 = (MR_Integer) 0;
#line 546 "mercury_compile_front_end.m"
                else
#line 547 "mercury_compile_front_end.m"
                  *top_level__mercury_compile_front_end__FoundError_11 = (MR_Integer) 1;
#line 496 "mercury_compile_front_end.m"
              }
#line 495 "mercury_compile_front_end.m"
              break;
#line 495 "mercury_compile_front_end.m"
            case (MR_Integer) 1:
#line 493 "mercury_compile_front_end.m"
              {
#line 494 "mercury_compile_front_end.m"
                *top_level__mercury_compile_front_end__FoundError_11 = (MR_Integer) 1;
#line 493 "mercury_compile_front_end.m"
                *top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_28 = top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_57_57;
#line 493 "mercury_compile_front_end.m"
                top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_118_118 = top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_62_62;
#line 493 "mercury_compile_front_end.m"
                *top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_32 = top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_58_58;
#line 493 "mercury_compile_front_end.m"
              }
#line 495 "mercury_compile_front_end.m"
              break;
#line 495 "mercury_compile_front_end.m"
          }
#line 479 "mercury_compile_front_end.m"
        }
#line 478 "mercury_compile_front_end.m"
        break;
#line 478 "mercury_compile_front_end.m"
      case (MR_Integer) 1:
#line 476 "mercury_compile_front_end.m"
        {
#line 477 "mercury_compile_front_end.m"
          *top_level__mercury_compile_front_end__FoundError_11 = (MR_Integer) 1;
#line 476 "mercury_compile_front_end.m"
          *top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_28 = top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_37_37;
#line 476 "mercury_compile_front_end.m"
          top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_118_118 = top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_42_42;
#line 476 "mercury_compile_front_end.m"
          *top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_32 = top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_38_38;
#line 476 "mercury_compile_front_end.m"
        }
#line 478 "mercury_compile_front_end.m"
        break;
#line 478 "mercury_compile_front_end.m"
    }
#line 551 "mercury_compile_front_end.m"
    {
#line 551 "mercury_compile_front_end.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(*top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_28, (MR_Integer) 99, (MR_String) "front_end", top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_118_118, top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_30);
#line 551 "mercury_compile_front_end.m"
      return;
    }
#line 467 "mercury_compile_front_end.m"
  }
#line 463 "mercury_compile_front_end.m"
}

#line 361 "mercury_compile_front_end.m"
static void MR_CALL 
top_level__mercury_compile_front_end__maybe_write_initial_optfile_9_p_0(
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
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_front_end__Globals_15, (MR_Integer) 320, &top_level__mercury_compile_front_end__IntermodOpt_16);
    }
#line 368 "mercury_compile_front_end.m"
    {
#line 368 "mercury_compile_front_end.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_front_end__Globals_15, (MR_Integer) 325, &top_level__mercury_compile_front_end__IntermodAnalysis_17);
    }
#line 370 "mercury_compile_front_end.m"
    {
#line 370 "mercury_compile_front_end.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_front_end__Globals_15, (MR_Integer) 345, &top_level__mercury_compile_front_end__IntermodArgs_18);
    }
#line 371 "mercury_compile_front_end.m"
    {
#line 371 "mercury_compile_front_end.m"
      libs__globals__lookup_accumulating_option_3_p_0(top_level__mercury_compile_front_end__Globals_15, (MR_Integer) 635, &top_level__mercury_compile_front_end__IntermodDirs_19);
    }
#line 373 "mercury_compile_front_end.m"
    {
#line 373 "mercury_compile_front_end.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_front_end__Globals_15, (MR_Integer) 322, &top_level__mercury_compile_front_end__UseOptFiles_20);
    }
#line 374 "mercury_compile_front_end.m"
    {
#line 374 "mercury_compile_front_end.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_front_end__Globals_15, (MR_Integer) 408, &top_level__mercury_compile_front_end__Termination_21);
    }
#line 375 "mercury_compile_front_end.m"
    {
#line 375 "mercury_compile_front_end.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_front_end__Globals_15, (MR_Integer) 415, &top_level__mercury_compile_front_end__Termination2_22);
    }
#line 376 "mercury_compile_front_end.m"
    {
#line 376 "mercury_compile_front_end.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_front_end__Globals_15, (MR_Integer) 400, &top_level__mercury_compile_front_end__SharingAnalysis_23);
    }
#line 378 "mercury_compile_front_end.m"
    {
#line 378 "mercury_compile_front_end.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_front_end__Globals_15, (MR_Integer) 402, &top_level__mercury_compile_front_end__ReuseAnalysis_24);
    }
#line 380 "mercury_compile_front_end.m"
    {
#line 380 "mercury_compile_front_end.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_front_end__Globals_15, (MR_Integer) 423, &top_level__mercury_compile_front_end__ExceptionAnalysis_25);
    }
#line 382 "mercury_compile_front_end.m"
    {
#line 382 "mercury_compile_front_end.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_front_end__Globals_15, (MR_Integer) 424, &top_level__mercury_compile_front_end__ClosureAnalysis_26);
    }
#line 384 "mercury_compile_front_end.m"
    {
#line 384 "mercury_compile_front_end.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_front_end__Globals_15, (MR_Integer) 387, &top_level__mercury_compile_front_end__TrailingAnalysis_27);
    }
#line 386 "mercury_compile_front_end.m"
    {
#line 386 "mercury_compile_front_end.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_front_end__Globals_15, (MR_Integer) 390, &top_level__mercury_compile_front_end__TablingAnalysis_28);
    }
#line 429 "mercury_compile_front_end.m"
#line 429 "mercury_compile_front_end.m"
    switch (top_level__mercury_compile_front_end__MakeOptInt_10) {
#line 429 "mercury_compile_front_end.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 429 "mercury_compile_front_end.m"
      case (MR_Integer) 0:
#line 430 "mercury_compile_front_end.m"
        {
#line 433 "mercury_compile_front_end.m"
          top_level__mercury_compile_front_end__succeeded = (top_level__mercury_compile_front_end__IntermodOpt_16 == (MR_Integer) 1);
#line 3556 "top_level.mercury_compile_front_end.c"
          if (top_level__mercury_compile_front_end__succeeded)
#line 455 "mercury_compile_front_end.m"
            {
#line 455 "mercury_compile_front_end.m"
              transform_hlds__intermod__adjust_pred_status_for_opt_export_2_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_36, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_37);
            }
#line 3563 "top_level.mercury_compile_front_end.c"
          else
#line 3565 "top_level.mercury_compile_front_end.c"
            {
#line 435 "mercury_compile_front_end.m"
              top_level__mercury_compile_front_end__succeeded = (top_level__mercury_compile_front_end__IntermodAnalysis_17 == (MR_Integer) 1);
#line 3569 "top_level.mercury_compile_front_end.c"
              if (top_level__mercury_compile_front_end__succeeded)
#line 455 "mercury_compile_front_end.m"
                {
#line 455 "mercury_compile_front_end.m"
                  transform_hlds__intermod__adjust_pred_status_for_opt_export_2_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_36, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_37);
                }
#line 3576 "top_level.mercury_compile_front_end.c"
              else
#line 3578 "top_level.mercury_compile_front_end.c"
                {
#line 437 "mercury_compile_front_end.m"
                  top_level__mercury_compile_front_end__succeeded = (top_level__mercury_compile_front_end__UseOptFiles_20 == (MR_Integer) 1);
#line 3582 "top_level.mercury_compile_front_end.c"
                  if (top_level__mercury_compile_front_end__succeeded)
#line 3584 "top_level.mercury_compile_front_end.c"
                    {
#line 3586 "top_level.mercury_compile_front_end.c"
                      MR_Word top_level__mercury_compile_front_end__Found_33;
#line 3588 "top_level.mercury_compile_front_end.c"
                      MR_Word top_level__mercury_compile_front_end__ModuleName_78;
#line 3590 "top_level.mercury_compile_front_end.c"
                      MR_String top_level__mercury_compile_front_end__OptName_79;

#line 438 "mercury_compile_front_end.m"
                      {
#line 438 "mercury_compile_front_end.m"
                        hlds__hlds_module__module_info_get_name_2_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_36, &top_level__mercury_compile_front_end__ModuleName_78);
                      }
#line 439 "mercury_compile_front_end.m"
                      {
#line 439 "mercury_compile_front_end.m"
                        parse_tree__file_names__module_name_to_search_file_name_6_p_0(top_level__mercury_compile_front_end__Globals_15, top_level__mercury_compile_front_end__ModuleName_78, (MR_String) ".opt", &top_level__mercury_compile_front_end__OptName_79);
                      }
#line 441 "mercury_compile_front_end.m"
                      {
#line 441 "mercury_compile_front_end.m"
                        libs__file_util__search_for_file_returning_dir_6_p_0((MR_Integer) 1, top_level__mercury_compile_front_end__IntermodDirs_19, top_level__mercury_compile_front_end__OptName_79, &top_level__mercury_compile_front_end__Found_33);
                      }
#line 3608 "top_level.mercury_compile_front_end.c"
                      if (((MR_tag((MR_Word) top_level__mercury_compile_front_end__Found_33)) == (MR_mktag((MR_Integer) 1))))
#line 457 "mercury_compile_front_end.m"
                        *top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_37 = top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_36;
#line 3612 "top_level.mercury_compile_front_end.c"
                      else
#line 455 "mercury_compile_front_end.m"
                        {
#line 455 "mercury_compile_front_end.m"
                          transform_hlds__intermod__adjust_pred_status_for_opt_export_2_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_36, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_37);
                        }
#line 3619 "top_level.mercury_compile_front_end.c"
                    }
#line 3621 "top_level.mercury_compile_front_end.c"
                  else
#line 457 "mercury_compile_front_end.m"
                    *top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_37 = top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_36;
#line 3625 "top_level.mercury_compile_front_end.c"
                }
#line 3627 "top_level.mercury_compile_front_end.c"
            }
#line 430 "mercury_compile_front_end.m"
          *top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_39 = top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_0_38;
#line 430 "mercury_compile_front_end.m"
          *top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_41 = top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_40;
#line 430 "mercury_compile_front_end.m"
        }
#line 429 "mercury_compile_front_end.m"
        break;
#line 429 "mercury_compile_front_end.m"
      case (MR_Integer) 1:
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
            transform_hlds__intermod__write_initial_opt_file_4_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_36, &top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_62_62);
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
#line 421 "mercury_compile_front_end.m"
          if (top_level__mercury_compile_front_end__succeeded)
#line 413 "mercury_compile_front_end.m"
            {
#line 413 "mercury_compile_front_end.m"
              MR_Word top_level__mercury_compile_front_end__FoundModeError_29;
#line 413 "mercury_compile_front_end.m"
              MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_64_64;

#line 412 "mercury_compile_front_end.m"
              {
#line 412 "mercury_compile_front_end.m"
                top_level__mercury_compile_front_end__frontend_pass_by_phases_9_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_62_62, &top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_64_64, &top_level__mercury_compile_front_end__FoundModeError_29, top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_0_38, top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_39, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_40, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_41);
              }
#line 417 "mercury_compile_front_end.m"
#line 417 "mercury_compile_front_end.m"
              switch (top_level__mercury_compile_front_end__FoundModeError_29) {
#line 417 "mercury_compile_front_end.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 417 "mercury_compile_front_end.m"
                case (MR_Integer) 0:
#line 416 "mercury_compile_front_end.m"
                  {
#line 416 "mercury_compile_front_end.m"
                    top_level__mercury_compile_middle_passes__middle_pass_for_opt_file_4_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_64_64, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_37);
                  }
#line 417 "mercury_compile_front_end.m"
                  break;
#line 417 "mercury_compile_front_end.m"
                case (MR_Integer) 1:
#line 418 "mercury_compile_front_end.m"
                  {
#line 419 "mercury_compile_front_end.m"
                    {
#line 419 "mercury_compile_front_end.m"
                      mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
                    }
#line 418 "mercury_compile_front_end.m"
                    *top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_37 = top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_64_64;
#line 418 "mercury_compile_front_end.m"
                  }
#line 417 "mercury_compile_front_end.m"
                  break;
#line 417 "mercury_compile_front_end.m"
              }
#line 413 "mercury_compile_front_end.m"
            }
#line 421 "mercury_compile_front_end.m"
          else
#line 422 "mercury_compile_front_end.m"
            {
#line 422 "mercury_compile_front_end.m"
              *top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_41 = top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_40;
#line 422 "mercury_compile_front_end.m"
              *top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_39 = top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_0_38;
#line 422 "mercury_compile_front_end.m"
              *top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_37 = top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_62_62;
#line 422 "mercury_compile_front_end.m"
            }
#line 424 "mercury_compile_front_end.m"
          {
#line 424 "mercury_compile_front_end.m"
            hlds__hlds_module__module_info_get_name_2_p_0(*top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_37, &top_level__mercury_compile_front_end__ModuleName_30);
          }
#line 425 "mercury_compile_front_end.m"
          {
#line 425 "mercury_compile_front_end.m"
            parse_tree__file_names__module_name_to_file_name_7_p_0(top_level__mercury_compile_front_end__Globals_15, top_level__mercury_compile_front_end__ModuleName_30, (MR_String) ".opt", (MR_Integer) 0, &top_level__mercury_compile_front_end__OptName_31);
          }
#line 427 "mercury_compile_front_end.m"
          {
#line 427 "mercury_compile_front_end.m"
            parse_tree__module_cmds__update_interface_4_p_0(top_level__mercury_compile_front_end__Globals_15, top_level__mercury_compile_front_end__OptName_31);
          }
#line 428 "mercury_compile_front_end.m"
          {
#line 428 "mercury_compile_front_end.m"
            parse_tree__module_cmds__touch_interface_datestamp_5_p_0(top_level__mercury_compile_front_end__Globals_15, top_level__mercury_compile_front_end__ModuleName_30, (MR_String) ".optdate");
#line 428 "mercury_compile_front_end.m"
            return;
          }
#line 388 "mercury_compile_front_end.m"
        }
#line 429 "mercury_compile_front_end.m"
        break;
#line 429 "mercury_compile_front_end.m"
    }
#line 365 "mercury_compile_front_end.m"
  }
#line 361 "mercury_compile_front_end.m"
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
    MR_Word top_level__mercury_compile_front_end__TypeCtorInfo_156_156;
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
    MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_79_79;
#line 175 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_80_80;
#line 175 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_86_86;
#line 175 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_88_88;
#line 175 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_89_89;
#line 175 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_96_96;
#line 175 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_97_97;
#line 175 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_98_98;
#line 175 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_99_99;
#line 175 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_108_108;

#line 176 "mercury_compile_front_end.m"
    {
#line 176 "mercury_compile_front_end.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_41, &top_level__mercury_compile_front_end__Globals_18);
    }
#line 177 "mercury_compile_front_end.m"
    {
#line 177 "mercury_compile_front_end.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_front_end__Globals_18, (MR_Integer) 45, &top_level__mercury_compile_front_end__Verbose_19);
    }
#line 178 "mercury_compile_front_end.m"
    {
#line 178 "mercury_compile_front_end.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_front_end__Globals_18, (MR_Integer) 55, &top_level__mercury_compile_front_end__Stats_20);
    }
#line 179 "mercury_compile_front_end.m"
    {
#line 179 "mercury_compile_front_end.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_front_end__Globals_18, (MR_Integer) 320, &top_level__mercury_compile_front_end__IntermodOpt_21);
    }
#line 180 "mercury_compile_front_end.m"
    {
#line 180 "mercury_compile_front_end.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_front_end__Globals_18, (MR_Integer) 325, &top_level__mercury_compile_front_end__IntermodAnalysis_22);
    }
#line 182 "mercury_compile_front_end.m"
    {
#line 182 "mercury_compile_front_end.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_front_end__Globals_18, (MR_Integer) 322, &top_level__mercury_compile_front_end__UseOptFiles_23);
    }
#line 183 "mercury_compile_front_end.m"
    {
#line 183 "mercury_compile_front_end.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_front_end__Globals_18, (MR_Integer) 86, &top_level__mercury_compile_front_end__MakeOptInt_24);
    }
#line 185 "mercury_compile_front_end.m"
    {
#line 185 "mercury_compile_front_end.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_front_end__Globals_18, (MR_Integer) 293, &top_level__mercury_compile_front_end__TypeCheckConstraints_25);
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
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_front_end__Globals_18, (MR_Integer) 36, &top_level__mercury_compile_front_end__WarnInstsWithNoMatchingType_26);
    }
#line 220 "mercury_compile_front_end.m"
#line 220 "mercury_compile_front_end.m"
    switch (top_level__mercury_compile_front_end__WarnInstsWithNoMatchingType_26) {
#line 220 "mercury_compile_front_end.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 220 "mercury_compile_front_end.m"
      case (MR_Integer) 0:
#line 221 "mercury_compile_front_end.m"
        {
#line 221 "mercury_compile_front_end.m"
          top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_79_79 = top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_62_62;
#line 221 "mercury_compile_front_end.m"
          top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_86_86 = top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_69_69;
#line 221 "mercury_compile_front_end.m"
          top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_80_80 = top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_63_63;
#line 221 "mercury_compile_front_end.m"
        }
#line 220 "mercury_compile_front_end.m"
        break;
#line 220 "mercury_compile_front_end.m"
      case (MR_Integer) 1:
#line 211 "mercury_compile_front_end.m"
        {
#line 211 "mercury_compile_front_end.m"
          MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_72_72;
#line 211 "mercury_compile_front_end.m"
          MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_73_73;
#line 211 "mercury_compile_front_end.m"
          MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_77_77;
#line 211 "mercury_compile_front_end.m"
          MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_78_78;

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
            check_hlds__inst_check__check_insts_have_matching_types_4_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_72_72, &top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_77_77, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_73_73, &top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_78_78);
          }
#line 216 "mercury_compile_front_end.m"
          {
#line 216 "mercury_compile_front_end.m"
            hlds__hlds_error_util__maybe_write_out_errors_8_p_0(top_level__mercury_compile_front_end__Verbose_19, top_level__mercury_compile_front_end__Globals_18, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_77_77, &top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_79_79, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_78_78, &top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_80_80);
          }
#line 217 "mercury_compile_front_end.m"
          {
#line 217 "mercury_compile_front_end.m"
            libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_front_end__Verbose_19, (MR_String) "done.\n");
          }
#line 218 "mercury_compile_front_end.m"
          {
#line 218 "mercury_compile_front_end.m"
            hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_79_79, (MR_Integer) 12, (MR_String) "warn_insts_without_matching_type", top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_69_69, &top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_86_86);
          }
#line 211 "mercury_compile_front_end.m"
        }
#line 220 "mercury_compile_front_end.m"
        break;
#line 220 "mercury_compile_front_end.m"
    }
#line 225 "mercury_compile_front_end.m"
    {
#line 225 "mercury_compile_front_end.m"
      hlds__hlds_error_util__maybe_write_out_errors_8_p_0(top_level__mercury_compile_front_end__Verbose_19, top_level__mercury_compile_front_end__Globals_18, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_79_79, &top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_88_88, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_80_80, &top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_89_89);
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
#line 232 "mercury_compile_front_end.m"
    switch (top_level__mercury_compile_front_end__TypeCheckConstraints_25) {
#line 232 "mercury_compile_front_end.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 232 "mercury_compile_front_end.m"
      case (MR_Integer) 0:
#line 234 "mercury_compile_front_end.m"
        {
#line 234 "mercury_compile_front_end.m"
          check_hlds__typecheck__typecheck_module_4_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_88_88, &top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_96_96, &top_level__mercury_compile_front_end__TypeCheckSpecs_27, &top_level__mercury_compile_front_end__ExceededTypeCheckIterationLimit_28);
        }
#line 232 "mercury_compile_front_end.m"
        break;
#line 232 "mercury_compile_front_end.m"
      case (MR_Integer) 1:
#line 229 "mercury_compile_front_end.m"
        {
#line 230 "mercury_compile_front_end.m"
          {
#line 230 "mercury_compile_front_end.m"
            check_hlds__type_constraints__typecheck_constraints_3_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_88_88, &top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_96_96, &top_level__mercury_compile_front_end__TypeCheckSpecs_27);
          }
#line 231 "mercury_compile_front_end.m"
          top_level__mercury_compile_front_end__ExceededTypeCheckIterationLimit_28 = (MR_Integer) 0;
#line 229 "mercury_compile_front_end.m"
        }
#line 232 "mercury_compile_front_end.m"
        break;
#line 232 "mercury_compile_front_end.m"
    }
#line 4127 "top_level.mercury_compile_front_end.c"
    top_level__mercury_compile_front_end__TypeCtorInfo_156_156 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0;
#line 237 "mercury_compile_front_end.m"
    {
#line 237 "mercury_compile_front_end.m"
      top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_97_97 = mercury__list__f_43_43_2_f_0(top_level__mercury_compile_front_end__TypeCtorInfo_156_156, top_level__mercury_compile_front_end__TypeCheckSpecs_27, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_89_89);
    }
#line 238 "mercury_compile_front_end.m"
    {
#line 238 "mercury_compile_front_end.m"
      hlds__hlds_error_util__maybe_write_out_errors_8_p_0(top_level__mercury_compile_front_end__Verbose_19, top_level__mercury_compile_front_end__Globals_18, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_96_96, &top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_98_98, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_97_97, &top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_99_99);
    }
#line 239 "mercury_compile_front_end.m"
    {
#line 239 "mercury_compile_front_end.m"
      top_level__mercury_compile_front_end__FoundTypeError_29 = parse_tree__error_util__contains_errors_2_f_0(top_level__mercury_compile_front_end__Globals_18, top_level__mercury_compile_front_end__TypeCheckSpecs_27);
    }
#line 244 "mercury_compile_front_end.m"
#line 244 "mercury_compile_front_end.m"
    switch (top_level__mercury_compile_front_end__FoundTypeError_29) {
#line 244 "mercury_compile_front_end.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 244 "mercury_compile_front_end.m"
      case (MR_Integer) 0:
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
        break;
#line 244 "mercury_compile_front_end.m"
      case (MR_Integer) 1:
#line 241 "mercury_compile_front_end.m"
        {
#line 242 "mercury_compile_front_end.m"
          {
#line 242 "mercury_compile_front_end.m"
            libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_front_end__Verbose_19, (MR_String) "% Program contains type error(s).\n");
          }
#line 241 "mercury_compile_front_end.m"
        }
#line 244 "mercury_compile_front_end.m"
        break;
#line 244 "mercury_compile_front_end.m"
    }
#line 249 "mercury_compile_front_end.m"
    {
#line 249 "mercury_compile_front_end.m"
      libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_front_end__Stats_20);
    }
#line 250 "mercury_compile_front_end.m"
    {
#line 250 "mercury_compile_front_end.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_98_98, (MR_Integer) 15, (MR_String) "typecheck", top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_86_86, &top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_108_108);
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
#line 261 "mercury_compile_front_end.m"
        *top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_46 = top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_99_99;
#line 261 "mercury_compile_front_end.m"
        *top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_44 = top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_108_108;
#line 261 "mercury_compile_front_end.m"
        *top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_42 = top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_98_98;
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
#line 270 "mercury_compile_front_end.m"
            *top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_46 = top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_99_99;
#line 270 "mercury_compile_front_end.m"
            *top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_44 = top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_108_108;
#line 270 "mercury_compile_front_end.m"
            *top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_42 = top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_98_98;
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
            MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_120_120;
#line 273 "mercury_compile_front_end.m"
            MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_121_121;
#line 273 "mercury_compile_front_end.m"
            MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_122_122;
#line 273 "mercury_compile_front_end.m"
            MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_124_124;
#line 273 "mercury_compile_front_end.m"
            MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_128_128;

#line 273 "mercury_compile_front_end.m"
            {
#line 273 "mercury_compile_front_end.m"
              check_hlds__post_typecheck__check_for_missing_type_defns_2_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_98_98, &top_level__mercury_compile_front_end__MissingTypeDefnSpecs_30);
            }
#line 274 "mercury_compile_front_end.m"
            {
#line 274 "mercury_compile_front_end.m"
              top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_120_120 = mercury__list__f_43_43_2_f_0(top_level__mercury_compile_front_end__TypeCtorInfo_156_156, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_99_99, top_level__mercury_compile_front_end__MissingTypeDefnSpecs_30);
            }
#line 275 "mercury_compile_front_end.m"
            {
#line 275 "mercury_compile_front_end.m"
              top_level__mercury_compile_front_end__SomeMissingTypeDefns_31 = parse_tree__error_util__contains_errors_2_f_0(top_level__mercury_compile_front_end__Globals_18, top_level__mercury_compile_front_end__MissingTypeDefnSpecs_30);
            }
#line 277 "mercury_compile_front_end.m"
            {
#line 277 "mercury_compile_front_end.m"
              check_hlds__inst_user__pretest_user_inst_table_2_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_98_98, &top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_121_121);
            }
#line 278 "mercury_compile_front_end.m"
            {
#line 278 "mercury_compile_front_end.m"
              check_hlds__post_typecheck__post_typecheck_finish_preds_5_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_121_121, &top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_122_122, &top_level__mercury_compile_front_end__NumPostTypeCheckErrors_32, &top_level__mercury_compile_front_end__PostTypeCheckAlwaysSpecs_33, &top_level__mercury_compile_front_end__PostTypeCheckNoTypeErrorSpecs_34);
            }
#line 290 "mercury_compile_front_end.m"
#line 290 "mercury_compile_front_end.m"
            switch (top_level__mercury_compile_front_end__FoundTypeError_29) {
#line 290 "mercury_compile_front_end.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 290 "mercury_compile_front_end.m"
              case (MR_Integer) 0:
#line 286 "mercury_compile_front_end.m"
                {
#line 286 "mercury_compile_front_end.m"
                  MR_Word top_level__mercury_compile_front_end__PostTypeCheckSpecs_35;

#line 287 "mercury_compile_front_end.m"
                  {
#line 287 "mercury_compile_front_end.m"
                    top_level__mercury_compile_front_end__PostTypeCheckSpecs_35 = mercury__list__f_43_43_2_f_0(top_level__mercury_compile_front_end__TypeCtorInfo_156_156, top_level__mercury_compile_front_end__PostTypeCheckAlwaysSpecs_33, top_level__mercury_compile_front_end__PostTypeCheckNoTypeErrorSpecs_34);
                  }
#line 289 "mercury_compile_front_end.m"
                  {
#line 289 "mercury_compile_front_end.m"
                    top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_124_124 = mercury__list__f_43_43_2_f_0(top_level__mercury_compile_front_end__TypeCtorInfo_156_156, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_120_120, top_level__mercury_compile_front_end__PostTypeCheckSpecs_35);
                  }
#line 286 "mercury_compile_front_end.m"
                }
#line 290 "mercury_compile_front_end.m"
                break;
#line 290 "mercury_compile_front_end.m"
              case (MR_Integer) 1:
#line 292 "mercury_compile_front_end.m"
                {
#line 292 "mercury_compile_front_end.m"
                  top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_124_124 = mercury__list__f_43_43_2_f_0(top_level__mercury_compile_front_end__TypeCtorInfo_156_156, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_120_120, top_level__mercury_compile_front_end__PostTypeCheckAlwaysSpecs_33);
                }
#line 290 "mercury_compile_front_end.m"
                break;
#line 290 "mercury_compile_front_end.m"
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
              hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_122_122, (MR_Integer) 19, (MR_String) "post_typecheck", top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_108_108, &top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_128_128);
            }
#line 306 "mercury_compile_front_end.m"
            {
#line 306 "mercury_compile_front_end.m"
              libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_front_end__Globals_18, (MR_Integer) 96, &top_level__mercury_compile_front_end__TypecheckOnly_37);
            }
#line 310 "mercury_compile_front_end.m"
#line 310 "mercury_compile_front_end.m"
            switch (top_level__mercury_compile_front_end__TypecheckOnly_37) {
#line 310 "mercury_compile_front_end.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 310 "mercury_compile_front_end.m"
              case (MR_Integer) 0:
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
                      *top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_46 = top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_124_124;
#line 322 "mercury_compile_front_end.m"
                      *top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_44 = top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_128_128;
#line 322 "mercury_compile_front_end.m"
                      *top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_42 = top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_122_122;
#line 322 "mercury_compile_front_end.m"
                    }
#line 323 "mercury_compile_front_end.m"
                  else
#line 324 "mercury_compile_front_end.m"
                    {
#line 324 "mercury_compile_front_end.m"
                      MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_132_132;
#line 324 "mercury_compile_front_end.m"
                      MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_133_133;
#line 324 "mercury_compile_front_end.m"
                      MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_137_137;
#line 324 "mercury_compile_front_end.m"
                      MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_139_139;
#line 324 "mercury_compile_front_end.m"
                      MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_140_140;
#line 324 "mercury_compile_front_end.m"
                      MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_144_144;
#line 324 "mercury_compile_front_end.m"
                      MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_146_146;
#line 324 "mercury_compile_front_end.m"
                      MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_147_147;
#line 324 "mercury_compile_front_end.m"
                      MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_148_148;

#line 324 "mercury_compile_front_end.m"
                      {
#line 324 "mercury_compile_front_end.m"
                        top_level__mercury_compile_front_end__puritycheck_8_p_0(top_level__mercury_compile_front_end__Verbose_19, top_level__mercury_compile_front_end__Stats_20, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_122_122, &top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_132_132, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_124_124, &top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_133_133);
                      }
#line 325 "mercury_compile_front_end.m"
                      {
#line 325 "mercury_compile_front_end.m"
                        hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_132_132, (MR_Integer) 20, (MR_String) "puritycheck", top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_128_128, &top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_137_137);
                      }
#line 329 "mercury_compile_front_end.m"
                      {
#line 329 "mercury_compile_front_end.m"
                        top_level__mercury_compile_front_end__subst_implementation_defined_literals_8_p_0(top_level__mercury_compile_front_end__Verbose_19, top_level__mercury_compile_front_end__Stats_20, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_132_132, &top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_139_139, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_133_133, &top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_140_140);
                      }
#line 331 "mercury_compile_front_end.m"
                      {
#line 331 "mercury_compile_front_end.m"
                        hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_139_139, (MR_Integer) 25, (MR_String) "implementation_defined_literals", top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_137_137, &top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_144_144);
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
                          top_level__mercury_compile_front_end__maybe_write_initial_optfile_9_p_0(top_level__mercury_compile_front_end__MakeOptInt_24, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_139_139, &top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_146_146, top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_144_144, &top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_147_147, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_140_140, &top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_148_148);
                        }
#line 341 "mercury_compile_front_end.m"
                      else
#line 342 "mercury_compile_front_end.m"
                        {
#line 342 "mercury_compile_front_end.m"
                          top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_148_148 = top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_140_140;
#line 342 "mercury_compile_front_end.m"
                          top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_147_147 = top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_144_144;
#line 342 "mercury_compile_front_end.m"
                          top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_146_146 = top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_139_139;
#line 342 "mercury_compile_front_end.m"
                        }
#line 347 "mercury_compile_front_end.m"
#line 347 "mercury_compile_front_end.m"
                      switch (top_level__mercury_compile_front_end__MakeOptInt_24) {
#line 347 "mercury_compile_front_end.m"
                        default: /*NOTREACHED*/ MR_assert(0);
#line 347 "mercury_compile_front_end.m"
                        case (MR_Integer) 0:
#line 348 "mercury_compile_front_end.m"
                          {
#line 348 "mercury_compile_front_end.m"
                            MR_Word top_level__mercury_compile_front_end__FoundModeOrDetError_38;

#line 351 "mercury_compile_front_end.m"
                            {
#line 351 "mercury_compile_front_end.m"
                              top_level__mercury_compile_front_end__frontend_pass_by_phases_9_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_146_146, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_42, &top_level__mercury_compile_front_end__FoundModeOrDetError_38, top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_147_147, top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_44, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_148_148, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_46);
                            }
#line 353 "mercury_compile_front_end.m"
                            {
#line 353 "mercury_compile_front_end.m"
                              *top_level__mercury_compile_front_end__STATE_VARIABLE_FoundError_40 = mercury__bool__or_2_f_0(top_level__mercury_compile_front_end__STATE_VARIABLE_FoundError_0_39, top_level__mercury_compile_front_end__FoundModeOrDetError_38);
                            }
#line 348 "mercury_compile_front_end.m"
                          }
#line 347 "mercury_compile_front_end.m"
                          break;
#line 347 "mercury_compile_front_end.m"
                        case (MR_Integer) 1:
#line 346 "mercury_compile_front_end.m"
                          {
#line 346 "mercury_compile_front_end.m"
                            *top_level__mercury_compile_front_end__STATE_VARIABLE_FoundError_40 = top_level__mercury_compile_front_end__STATE_VARIABLE_FoundError_0_39;
#line 346 "mercury_compile_front_end.m"
                            *top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_42 = top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_146_146;
#line 346 "mercury_compile_front_end.m"
                            *top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_44 = top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_147_147;
#line 346 "mercury_compile_front_end.m"
                            *top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_46 = top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_148_148;
#line 346 "mercury_compile_front_end.m"
                          }
#line 347 "mercury_compile_front_end.m"
                          break;
#line 347 "mercury_compile_front_end.m"
                      }
#line 324 "mercury_compile_front_end.m"
                    }
#line 323 "mercury_compile_front_end.m"
                }
#line 310 "mercury_compile_front_end.m"
                break;
#line 310 "mercury_compile_front_end.m"
              case (MR_Integer) 1:
#line 308 "mercury_compile_front_end.m"
                {
#line 309 "mercury_compile_front_end.m"
                  {
#line 309 "mercury_compile_front_end.m"
                    *top_level__mercury_compile_front_end__STATE_VARIABLE_FoundError_40 = mercury__bool__or_2_f_0(top_level__mercury_compile_front_end__STATE_VARIABLE_FoundError_0_39, top_level__mercury_compile_front_end__PostTypeCheckErrors_36);
                  }
#line 308 "mercury_compile_front_end.m"
                  *top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_42 = top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_122_122;
#line 308 "mercury_compile_front_end.m"
                  *top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_44 = top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_128_128;
#line 308 "mercury_compile_front_end.m"
                  *top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_46 = top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_124_124;
#line 308 "mercury_compile_front_end.m"
                }
#line 310 "mercury_compile_front_end.m"
                break;
#line 310 "mercury_compile_front_end.m"
            }
#line 273 "mercury_compile_front_end.m"
          }
#line 272 "mercury_compile_front_end.m"
      }
#line 175 "mercury_compile_front_end.m"
  }
#line 170 "mercury_compile_front_end.m"
}

#line 989 "mercury_compile_front_end.m"
static void MR_CALL 
top_level__mercury_compile_front_end__maybe_simplify_10_p_0_1(
#line 989 "mercury_compile_front_end.m"
  MR_Box top_level__mercury_compile_front_end__closure_arg,
#line 989 "mercury_compile_front_end.m"
  MR_Box top_level__mercury_compile_front_end__wrapper_arg_1,
#line 989 "mercury_compile_front_end.m"
  MR_Box top_level__mercury_compile_front_end__wrapper_arg_2,
#line 989 "mercury_compile_front_end.m"
  MR_Box * top_level__mercury_compile_front_end__wrapper_arg_3,
#line 989 "mercury_compile_front_end.m"
  MR_Box top_level__mercury_compile_front_end__wrapper_arg_4,
#line 989 "mercury_compile_front_end.m"
  MR_Box * top_level__mercury_compile_front_end__wrapper_arg_5,
#line 989 "mercury_compile_front_end.m"
  MR_Box top_level__mercury_compile_front_end__wrapper_arg_6,
#line 989 "mercury_compile_front_end.m"
  MR_Box * top_level__mercury_compile_front_end__wrapper_arg_7)
#line 989 "mercury_compile_front_end.m"
{
#line 989 "mercury_compile_front_end.m"
  {
#line 989 "mercury_compile_front_end.m"
    MR_Box top_level__mercury_compile_front_end__closure = top_level__mercury_compile_front_end__closure_arg;
#line 989 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__conv2_STATE_VARIABLE_ModuleInfo_23;
#line 989 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__conv1_STATE_VARIABLE_PredInfo_25;
#line 989 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__conv0_STATE_VARIABLE_Specs_27;

#line 989 "mercury_compile_front_end.m"
    {
#line 989 "mercury_compile_front_end.m"
      top_level__mercury_compile_front_end__simplify_pred_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_front_end__closure, (MR_Integer) 3))), ((MR_Word) top_level__mercury_compile_front_end__wrapper_arg_1), ((MR_Word) top_level__mercury_compile_front_end__wrapper_arg_2), &top_level__mercury_compile_front_end__conv2_STATE_VARIABLE_ModuleInfo_23, ((MR_Word) top_level__mercury_compile_front_end__wrapper_arg_4), &top_level__mercury_compile_front_end__conv1_STATE_VARIABLE_PredInfo_25, ((MR_Word) top_level__mercury_compile_front_end__wrapper_arg_6), &top_level__mercury_compile_front_end__conv0_STATE_VARIABLE_Specs_27);
    }
#line 989 "mercury_compile_front_end.m"
    *top_level__mercury_compile_front_end__wrapper_arg_3 = ((MR_Box) (top_level__mercury_compile_front_end__conv2_STATE_VARIABLE_ModuleInfo_23));
#line 989 "mercury_compile_front_end.m"
    *top_level__mercury_compile_front_end__wrapper_arg_5 = ((MR_Box) (top_level__mercury_compile_front_end__conv1_STATE_VARIABLE_PredInfo_25));
#line 989 "mercury_compile_front_end.m"
    *top_level__mercury_compile_front_end__wrapper_arg_7 = ((MR_Box) (top_level__mercury_compile_front_end__conv0_STATE_VARIABLE_Specs_27));
#line 989 "mercury_compile_front_end.m"
  }
#line 989 "mercury_compile_front_end.m"
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
#line 907 "mercury_compile_front_end.m"
  {
#line 907 "mercury_compile_front_end.m"
    MR_bool top_level__mercury_compile_front_end__succeeded;
#line 907 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__Globals_18;
#line 907 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__SimpList_19;
#line 907 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__SimplifyTasks0_20;
#line 907 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_SimpList_37_37;

#line 908 "mercury_compile_front_end.m"
    {
#line 908 "mercury_compile_front_end.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_31, &top_level__mercury_compile_front_end__Globals_18);
    }
#line 910 "mercury_compile_front_end.m"
    {
#line 910 "mercury_compile_front_end.m"
      check_hlds__simplify__simplify_tasks__find_simplify_tasks_3_p_0(top_level__mercury_compile_front_end__Warn_11, top_level__mercury_compile_front_end__Globals_18, &top_level__mercury_compile_front_end__SimplifyTasks0_20);
    }
#line 911 "mercury_compile_front_end.m"
    {
#line 911 "mercury_compile_front_end.m"
      top_level__mercury_compile_front_end__STATE_VARIABLE_SimpList_37_37 = check_hlds__simplify__simplify_tasks__simplify_tasks_to_list_1_f_0(top_level__mercury_compile_front_end__SimplifyTasks0_20);
    }
#line 915 "mercury_compile_front_end.m"
#line 915 "mercury_compile_front_end.m"
    switch (top_level__mercury_compile_front_end__SimplifyPass_12) {
#line 915 "mercury_compile_front_end.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 915 "mercury_compile_front_end.m"
      case (MR_Integer) 0:
#line 913 "mercury_compile_front_end.m"
        {
#line 914 "mercury_compile_front_end.m"
          {
#line 914 "mercury_compile_front_end.m"
            mercury__list__cons_3_p_0((MR_Word) &check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__type_ctor_info_simplify_task_0, ((MR_Box) ((MR_Integer) 5)), top_level__mercury_compile_front_end__STATE_VARIABLE_SimpList_37_37, &top_level__mercury_compile_front_end__SimpList_19);
          }
#line 913 "mercury_compile_front_end.m"
        }
#line 915 "mercury_compile_front_end.m"
        break;
#line 915 "mercury_compile_front_end.m"
      case (MR_Integer) 5:
#line 953 "mercury_compile_front_end.m"
        {
#line 953 "mercury_compile_front_end.m"
          MR_Word top_level__mercury_compile_front_end__TypeCtorInfo_89_89;
#line 953 "mercury_compile_front_end.m"
          MR_Word top_level__mercury_compile_front_end__ConstProp_23;
#line 953 "mercury_compile_front_end.m"
          MR_Word top_level__mercury_compile_front_end__DeepProf_24;
#line 953 "mercury_compile_front_end.m"
          MR_Word top_level__mercury_compile_front_end__TSWProf_25;
#line 953 "mercury_compile_front_end.m"
          MR_Word top_level__mercury_compile_front_end__TSCProf_26;
#line 953 "mercury_compile_front_end.m"
          MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_SimpList_43_43;
#line 953 "mercury_compile_front_end.m"
          MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_SimpList_47_47;

#line 959 "mercury_compile_front_end.m"
          {
#line 959 "mercury_compile_front_end.m"
            libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_front_end__Globals_18, (MR_Integer) 360, &top_level__mercury_compile_front_end__ConstProp_23);
          }
#line 961 "mercury_compile_front_end.m"
          {
#line 961 "mercury_compile_front_end.m"
            libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_front_end__Globals_18, (MR_Integer) 192, &top_level__mercury_compile_front_end__DeepProf_24);
          }
#line 962 "mercury_compile_front_end.m"
          {
#line 962 "mercury_compile_front_end.m"
            libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_front_end__Globals_18, (MR_Integer) 209, &top_level__mercury_compile_front_end__TSWProf_25);
          }
#line 964 "mercury_compile_front_end.m"
          {
#line 964 "mercury_compile_front_end.m"
            libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_front_end__Globals_18, (MR_Integer) 210, &top_level__mercury_compile_front_end__TSCProf_26);
          }
#line 967 "mercury_compile_front_end.m"
          top_level__mercury_compile_front_end__succeeded = (top_level__mercury_compile_front_end__ConstProp_23 == (MR_Integer) 1);
#line 967 "mercury_compile_front_end.m"
          if (top_level__mercury_compile_front_end__succeeded)
#line 967 "mercury_compile_front_end.m"
            {
#line 968 "mercury_compile_front_end.m"
              top_level__mercury_compile_front_end__succeeded = (top_level__mercury_compile_front_end__DeepProf_24 == (MR_Integer) 0);
#line 967 "mercury_compile_front_end.m"
              if (top_level__mercury_compile_front_end__succeeded)
#line 967 "mercury_compile_front_end.m"
                {
#line 969 "mercury_compile_front_end.m"
                  top_level__mercury_compile_front_end__succeeded = (top_level__mercury_compile_front_end__TSWProf_25 == (MR_Integer) 0);
#line 967 "mercury_compile_front_end.m"
                  if (top_level__mercury_compile_front_end__succeeded)
#line 970 "mercury_compile_front_end.m"
                    top_level__mercury_compile_front_end__succeeded = (top_level__mercury_compile_front_end__TSCProf_26 == (MR_Integer) 0);
#line 967 "mercury_compile_front_end.m"
                }
#line 967 "mercury_compile_front_end.m"
            }
#line 973 "mercury_compile_front_end.m"
          if (top_level__mercury_compile_front_end__succeeded)
#line 972 "mercury_compile_front_end.m"
            {
#line 972 "mercury_compile_front_end.m"
              {
#line 972 "mercury_compile_front_end.m"
                mercury__list__cons_3_p_0((MR_Word) &check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__type_ctor_info_simplify_task_0, ((MR_Box) ((MR_Integer) 9)), top_level__mercury_compile_front_end__STATE_VARIABLE_SimpList_37_37, &top_level__mercury_compile_front_end__STATE_VARIABLE_SimpList_43_43);
              }
#line 972 "mercury_compile_front_end.m"
            }
#line 973 "mercury_compile_front_end.m"
          else
#line 974 "mercury_compile_front_end.m"
            {
#line 974 "mercury_compile_front_end.m"
              {
#line 974 "mercury_compile_front_end.m"
                top_level__mercury_compile_front_end__STATE_VARIABLE_SimpList_43_43 = mercury__list__delete_all_2_f_0((MR_Word) &check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__type_ctor_info_simplify_task_0, top_level__mercury_compile_front_end__STATE_VARIABLE_SimpList_37_37, ((MR_Box) ((MR_Integer) 9)));
              }
#line 974 "mercury_compile_front_end.m"
            }
#line 4732 "top_level.mercury_compile_front_end.c"
          top_level__mercury_compile_front_end__TypeCtorInfo_89_89 = (MR_Word) &check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__type_ctor_info_simplify_task_0;
#line 976 "mercury_compile_front_end.m"
          {
#line 976 "mercury_compile_front_end.m"
            mercury__list__cons_3_p_0(top_level__mercury_compile_front_end__TypeCtorInfo_89_89, ((MR_Box) ((MR_Integer) 4)), top_level__mercury_compile_front_end__STATE_VARIABLE_SimpList_43_43, &top_level__mercury_compile_front_end__STATE_VARIABLE_SimpList_47_47);
          }
#line 977 "mercury_compile_front_end.m"
          {
#line 977 "mercury_compile_front_end.m"
            mercury__list__cons_3_p_0(top_level__mercury_compile_front_end__TypeCtorInfo_89_89, ((MR_Box) ((MR_Integer) 7)), top_level__mercury_compile_front_end__STATE_VARIABLE_SimpList_47_47, &top_level__mercury_compile_front_end__SimpList_19);
          }
#line 953 "mercury_compile_front_end.m"
        }
#line 915 "mercury_compile_front_end.m"
        break;
#line 915 "mercury_compile_front_end.m"
      case (MR_Integer) 4:
#line 950 "mercury_compile_front_end.m"
        {
#line 951 "mercury_compile_front_end.m"
          {
#line 951 "mercury_compile_front_end.m"
            mercury__list__cons_3_p_0((MR_Word) &check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__type_ctor_info_simplify_task_0, ((MR_Box) ((MR_Integer) 4)), top_level__mercury_compile_front_end__STATE_VARIABLE_SimpList_37_37, &top_level__mercury_compile_front_end__SimpList_19);
          }
#line 950 "mercury_compile_front_end.m"
        }
#line 915 "mercury_compile_front_end.m"
        break;
#line 915 "mercury_compile_front_end.m"
      case (MR_Integer) 1:
#line 916 "mercury_compile_front_end.m"
        {
#line 917 "mercury_compile_front_end.m"
          {
#line 917 "mercury_compile_front_end.m"
            mercury__list__cons_3_p_0((MR_Word) &check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__type_ctor_info_simplify_task_0, ((MR_Box) ((MR_Integer) 4)), top_level__mercury_compile_front_end__STATE_VARIABLE_SimpList_37_37, &top_level__mercury_compile_front_end__SimpList_19);
          }
#line 916 "mercury_compile_front_end.m"
        }
#line 915 "mercury_compile_front_end.m"
        break;
#line 915 "mercury_compile_front_end.m"
      case (MR_Integer) 3:
#line 935 "mercury_compile_front_end.m"
        {
#line 935 "mercury_compile_front_end.m"
          MR_Word top_level__mercury_compile_front_end__PreParSimplify_22;

#line 940 "mercury_compile_front_end.m"
          {
#line 940 "mercury_compile_front_end.m"
            libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_front_end__Globals_18, (MR_Integer) 195, &top_level__mercury_compile_front_end__PreParSimplify_22);
          }
#line 945 "mercury_compile_front_end.m"
#line 945 "mercury_compile_front_end.m"
          switch (top_level__mercury_compile_front_end__PreParSimplify_22) {
#line 945 "mercury_compile_front_end.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 945 "mercury_compile_front_end.m"
            case (MR_Integer) 0:
#line 947 "mercury_compile_front_end.m"
              top_level__mercury_compile_front_end__SimpList_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 945 "mercury_compile_front_end.m"
              break;
#line 945 "mercury_compile_front_end.m"
            case (MR_Integer) 1:
#line 943 "mercury_compile_front_end.m"
              {
#line 944 "mercury_compile_front_end.m"
                {
#line 944 "mercury_compile_front_end.m"
                  mercury__list__cons_3_p_0((MR_Word) &check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__type_ctor_info_simplify_task_0, ((MR_Box) ((MR_Integer) 4)), top_level__mercury_compile_front_end__STATE_VARIABLE_SimpList_37_37, &top_level__mercury_compile_front_end__SimpList_19);
                }
#line 943 "mercury_compile_front_end.m"
              }
#line 945 "mercury_compile_front_end.m"
              break;
#line 945 "mercury_compile_front_end.m"
          }
#line 935 "mercury_compile_front_end.m"
        }
#line 915 "mercury_compile_front_end.m"
        break;
#line 915 "mercury_compile_front_end.m"
      case (MR_Integer) 2:
#line 919 "mercury_compile_front_end.m"
        {
#line 919 "mercury_compile_front_end.m"
          MR_Word top_level__mercury_compile_front_end__PreProfSimplify_21;

#line 925 "mercury_compile_front_end.m"
          {
#line 925 "mercury_compile_front_end.m"
            libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_front_end__Globals_18, (MR_Integer) 194, &top_level__mercury_compile_front_end__PreProfSimplify_21);
          }
#line 930 "mercury_compile_front_end.m"
#line 930 "mercury_compile_front_end.m"
          switch (top_level__mercury_compile_front_end__PreProfSimplify_21) {
#line 930 "mercury_compile_front_end.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 930 "mercury_compile_front_end.m"
            case (MR_Integer) 0:
#line 932 "mercury_compile_front_end.m"
              top_level__mercury_compile_front_end__SimpList_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 930 "mercury_compile_front_end.m"
              break;
#line 930 "mercury_compile_front_end.m"
            case (MR_Integer) 1:
#line 928 "mercury_compile_front_end.m"
              {
#line 929 "mercury_compile_front_end.m"
                {
#line 929 "mercury_compile_front_end.m"
                  mercury__list__cons_3_p_0((MR_Word) &check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__type_ctor_info_simplify_task_0, ((MR_Box) ((MR_Integer) 4)), top_level__mercury_compile_front_end__STATE_VARIABLE_SimpList_37_37, &top_level__mercury_compile_front_end__SimpList_19);
                }
#line 928 "mercury_compile_front_end.m"
              }
#line 930 "mercury_compile_front_end.m"
              break;
#line 930 "mercury_compile_front_end.m"
          }
#line 919 "mercury_compile_front_end.m"
        }
#line 915 "mercury_compile_front_end.m"
        break;
#line 915 "mercury_compile_front_end.m"
    }
#line 1005 "mercury_compile_front_end.m"
    if ((top_level__mercury_compile_front_end__SimpList_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1006 "mercury_compile_front_end.m"
      {
#line 1006 "mercury_compile_front_end.m"
        *top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_32 = top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_31;
#line 1006 "mercury_compile_front_end.m"
        *top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_34 = top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_33;
#line 1006 "mercury_compile_front_end.m"
      }
#line 1005 "mercury_compile_front_end.m"
    else
#line 982 "mercury_compile_front_end.m"
      {
#line 982 "mercury_compile_front_end.m"
        MR_Word top_level__mercury_compile_front_end__SimplifyTasks_29;
#line 982 "mercury_compile_front_end.m"
        MR_Word top_level__mercury_compile_front_end__SimplifySpecs_30;
#line 982 "mercury_compile_front_end.m"
        MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_64_64;
#line 982 "mercury_compile_front_end.m"
        MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_65_65;
#line 982 "mercury_compile_front_end.m"
        MR_Word top_level__mercury_compile_front_end__V_70_70;
#line 982 "mercury_compile_front_end.m"
        MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_71_71;
#line 982 "mercury_compile_front_end.m"
        MR_Word top_level__mercury_compile_front_end__V_74_74;

#line 984 "mercury_compile_front_end.m"
        {
#line 984 "mercury_compile_front_end.m"
          hlds__hlds_error_util__maybe_write_out_errors_8_p_0(top_level__mercury_compile_front_end__Verbose_13, top_level__mercury_compile_front_end__Globals_18, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_31, &top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_64_64, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_33, &top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_65_65);
        }
#line 985 "mercury_compile_front_end.m"
        {
#line 985 "mercury_compile_front_end.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_front_end__Verbose_13, (MR_String) "% Simplifying goals...\n");
        }
#line 986 "mercury_compile_front_end.m"
        {
#line 986 "mercury_compile_front_end.m"
          libs__file_util__maybe_flush_output_3_p_0(top_level__mercury_compile_front_end__Verbose_13);
        }
#line 987 "mercury_compile_front_end.m"
        {
#line 987 "mercury_compile_front_end.m"
          top_level__mercury_compile_front_end__SimplifyTasks_29 = check_hlds__simplify__simplify_tasks__list_to_simplify_tasks_1_f_0(top_level__mercury_compile_front_end__SimpList_19);
        }
#line 989 "mercury_compile_front_end.m"
        {
#line 989 "mercury_compile_front_end.m"
          top_level__mercury_compile_front_end__V_74_74 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 989 "mercury_compile_front_end.m"
          MR_hl_field(MR_mktag(0), top_level__mercury_compile_front_end__V_74_74, 0) = ((MR_Box) (&top_level__mercury_compile_front_end_scalar_common_4[0]));
#line 989 "mercury_compile_front_end.m"
          MR_hl_field(MR_mktag(0), top_level__mercury_compile_front_end__V_74_74, 1) = ((MR_Box) (top_level__mercury_compile_front_end__maybe_simplify_10_p_0_1));
#line 989 "mercury_compile_front_end.m"
          MR_hl_field(MR_mktag(0), top_level__mercury_compile_front_end__V_74_74, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 989 "mercury_compile_front_end.m"
          MR_hl_field(MR_mktag(0), top_level__mercury_compile_front_end__V_74_74, 3) = ((MR_Box) (top_level__mercury_compile_front_end__SimplifyTasks_29));
#line 989 "mercury_compile_front_end.m"
        }
#line 989 "mercury_compile_front_end.m"
        top_level__mercury_compile_front_end__V_70_70 = (MR_Word) top_level__mercury_compile_front_end__V_74_74;
#line 988 "mercury_compile_front_end.m"
        {
#line 988 "mercury_compile_front_end.m"
          hlds__passes_aux__process_all_nonimported_preds_errors_7_p_0(top_level__mercury_compile_front_end__V_70_70, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_64_64, &top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_71_71, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &top_level__mercury_compile_front_end__SimplifySpecs_30);
        }
#line 995 "mercury_compile_front_end.m"
#line 995 "mercury_compile_front_end.m"
        switch (top_level__mercury_compile_front_end__SimplifyPass_12) {
#line 995 "mercury_compile_front_end.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 995 "mercury_compile_front_end.m"
          case (MR_Integer) 0:
#line 992 "mercury_compile_front_end.m"
            {
#line 992 "mercury_compile_front_end.m"
              MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_75_75;

#line 993 "mercury_compile_front_end.m"
              {
#line 993 "mercury_compile_front_end.m"
                top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_75_75 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, top_level__mercury_compile_front_end__SimplifySpecs_30, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_65_65);
              }
#line 994 "mercury_compile_front_end.m"
              {
#line 994 "mercury_compile_front_end.m"
                hlds__hlds_error_util__maybe_write_out_errors_8_p_0(top_level__mercury_compile_front_end__Verbose_13, top_level__mercury_compile_front_end__Globals_18, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_71_71, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_32, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_75_75, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_34);
              }
#line 992 "mercury_compile_front_end.m"
            }
#line 995 "mercury_compile_front_end.m"
            break;
#line 995 "mercury_compile_front_end.m"
          case (MR_Integer) 5:
#line 996 "mercury_compile_front_end.m"
            {
#line 996 "mercury_compile_front_end.m"
              *top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_32 = top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_71_71;
#line 996 "mercury_compile_front_end.m"
              *top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_34 = top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_65_65;
#line 996 "mercury_compile_front_end.m"
            }
#line 995 "mercury_compile_front_end.m"
            break;
#line 995 "mercury_compile_front_end.m"
          case (MR_Integer) 4:
#line 997 "mercury_compile_front_end.m"
            {
#line 997 "mercury_compile_front_end.m"
              *top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_32 = top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_71_71;
#line 997 "mercury_compile_front_end.m"
              *top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_34 = top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_65_65;
#line 997 "mercury_compile_front_end.m"
            }
#line 995 "mercury_compile_front_end.m"
            break;
#line 995 "mercury_compile_front_end.m"
          case (MR_Integer) 1:
#line 998 "mercury_compile_front_end.m"
            {
#line 998 "mercury_compile_front_end.m"
              *top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_32 = top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_71_71;
#line 998 "mercury_compile_front_end.m"
              *top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_34 = top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_65_65;
#line 998 "mercury_compile_front_end.m"
            }
#line 995 "mercury_compile_front_end.m"
            break;
#line 995 "mercury_compile_front_end.m"
          case (MR_Integer) 3:
#line 1000 "mercury_compile_front_end.m"
            {
#line 1000 "mercury_compile_front_end.m"
              *top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_32 = top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_71_71;
#line 1000 "mercury_compile_front_end.m"
              *top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_34 = top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_65_65;
#line 1000 "mercury_compile_front_end.m"
            }
#line 995 "mercury_compile_front_end.m"
            break;
#line 995 "mercury_compile_front_end.m"
          case (MR_Integer) 2:
#line 999 "mercury_compile_front_end.m"
            {
#line 999 "mercury_compile_front_end.m"
              *top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_32 = top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_71_71;
#line 999 "mercury_compile_front_end.m"
              *top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_34 = top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_65_65;
#line 999 "mercury_compile_front_end.m"
            }
#line 995 "mercury_compile_front_end.m"
            break;
#line 995 "mercury_compile_front_end.m"
        }
#line 1003 "mercury_compile_front_end.m"
        {
#line 1003 "mercury_compile_front_end.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_front_end__Verbose_13, (MR_String) "% done.\n");
        }
#line 1004 "mercury_compile_front_end.m"
        {
#line 1004 "mercury_compile_front_end.m"
          libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_front_end__Stats_14);
#line 1004 "mercury_compile_front_end.m"
          return;
        }
#line 982 "mercury_compile_front_end.m"
      }
#line 907 "mercury_compile_front_end.m"
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
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_front_end__Globals_22, (MR_Integer) 45, &top_level__mercury_compile_front_end__Verbose_23);
    }
#line 140 "mercury_compile_front_end.m"
#line 140 "mercury_compile_front_end.m"
    switch (top_level__mercury_compile_front_end__FoundUndefTypeError_15) {
#line 140 "mercury_compile_front_end.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 140 "mercury_compile_front_end.m"
      case (MR_Integer) 0:
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
#line 5165 "top_level.mercury_compile_front_end.c"
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
#line 163 "mercury_compile_front_end.m"
          switch (top_level__mercury_compile_front_end__TypeClassErrors_28) {
#line 163 "mercury_compile_front_end.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 163 "mercury_compile_front_end.m"
            case (MR_Integer) 0:
#line 165 "mercury_compile_front_end.m"
              {
#line 165 "mercury_compile_front_end.m"
                top_level__mercury_compile_front_end__frontend_pass_after_typeclass_check_11_p_0(top_level__mercury_compile_front_end__FoundUndefModeError_16, top_level__mercury_compile_front_end__STATE_VARIABLE_FoundError_46_46, top_level__mercury_compile_front_end__STATE_VARIABLE_FoundError_30, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_61_61, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_32, top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_59_59, top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_34, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_55_55, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_36);
#line 165 "mercury_compile_front_end.m"
                return;
              }
#line 163 "mercury_compile_front_end.m"
              break;
#line 163 "mercury_compile_front_end.m"
            case (MR_Integer) 1:
#line 159 "mercury_compile_front_end.m"
              {
#line 162 "mercury_compile_front_end.m"
                *top_level__mercury_compile_front_end__STATE_VARIABLE_FoundError_30 = (MR_Integer) 1;
#line 159 "mercury_compile_front_end.m"
                *top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_32 = top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_61_61;
#line 159 "mercury_compile_front_end.m"
                *top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_34 = top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_59_59;
#line 159 "mercury_compile_front_end.m"
                *top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_36 = top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_55_55;
#line 159 "mercury_compile_front_end.m"
              }
#line 163 "mercury_compile_front_end.m"
              break;
#line 163 "mercury_compile_front_end.m"
          }
#line 141 "mercury_compile_front_end.m"
        }
#line 140 "mercury_compile_front_end.m"
        break;
#line 140 "mercury_compile_front_end.m"
      case (MR_Integer) 1:
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
#line 132 "mercury_compile_front_end.m"
          *top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_34 = top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_0_33;
#line 132 "mercury_compile_front_end.m"
        }
#line 140 "mercury_compile_front_end.m"
        break;
#line 140 "mercury_compile_front_end.m"
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
