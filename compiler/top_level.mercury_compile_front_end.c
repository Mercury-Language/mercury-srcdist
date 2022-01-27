/*
** Automatically generated from `mercury_compile_front_end.m'
** by the Mercury compiler,
** version rotd-2015-11-30
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




#line 185 "top_level.mercury_compile_front_end.c"
static const MR_FA_PseudoTypeInfo_Struct1 top_level__mercury_compile_front_end__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0;

#line 188 "top_level.mercury_compile_front_end.c"
static const MR_FA_TypeInfo_Struct1 top_level__mercury_compile_front_end__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0;

#line 191 "top_level.mercury_compile_front_end.c"
static const MR_VA_PseudoTypeInfo_Struct3 top_level__mercury_compile_front_end____vpti_tuple_3__plain_hlds__hlds_module__type_ctor_info_module_info_0__plain_parse_tree__maybe_error__type_ctor_info_maybe_safe_to_continue_0__plain_list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0;

#line 194 "top_level.mercury_compile_front_end.c"
static const MR_FA_PseudoTypeInfo_Struct2 top_level__mercury_compile_front_end__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_hlds__hlds_module__type_ctor_info_oisu_preds_0;

#line 197 "top_level.mercury_compile_front_end.c"
static const MR_EnumFunctorDesc top_level__mercury_compile_front_end__top_level__mercury_compile_front_end__enum_functor_desc_simplify_pass_0_0;

#line 200 "top_level.mercury_compile_front_end.c"
static const MR_EnumFunctorDesc top_level__mercury_compile_front_end__top_level__mercury_compile_front_end__enum_functor_desc_simplify_pass_0_1;

#line 203 "top_level.mercury_compile_front_end.c"
static const MR_EnumFunctorDesc top_level__mercury_compile_front_end__top_level__mercury_compile_front_end__enum_functor_desc_simplify_pass_0_2;

#line 206 "top_level.mercury_compile_front_end.c"
static const MR_EnumFunctorDesc top_level__mercury_compile_front_end__top_level__mercury_compile_front_end__enum_functor_desc_simplify_pass_0_3;

#line 209 "top_level.mercury_compile_front_end.c"
static const MR_EnumFunctorDesc top_level__mercury_compile_front_end__top_level__mercury_compile_front_end__enum_functor_desc_simplify_pass_0_4;

#line 212 "top_level.mercury_compile_front_end.c"
static const MR_EnumFunctorDesc top_level__mercury_compile_front_end__top_level__mercury_compile_front_end__enum_functor_desc_simplify_pass_0_5;

#line 215 "top_level.mercury_compile_front_end.c"
static const MR_EnumFunctorDescPtr top_level__mercury_compile_front_end__top_level__mercury_compile_front_end__enum_value_ordered_simplify_pass_0[6];

#line 218 "top_level.mercury_compile_front_end.c"
static const MR_EnumFunctorDescPtr top_level__mercury_compile_front_end__top_level__mercury_compile_front_end__enum_name_ordered_simplify_pass_0[6];

#line 221 "top_level.mercury_compile_front_end.c"
static const MR_Integer top_level__mercury_compile_front_end__top_level__mercury_compile_front_end__functor_number_map_simplify_pass_0[6];

#line 224 "top_level.mercury_compile_front_end.c"
static MR_bool MR_CALL 
top_level__mercury_compile_front_end____Unify____simplify_pass_0_0_10001(
#line 227 "top_level.mercury_compile_front_end.c"
  MR_Box top_level__mercury_compile_front_end__wrapper_arg_1,
#line 229 "top_level.mercury_compile_front_end.c"
  MR_Box top_level__mercury_compile_front_end__wrapper_arg_2);

#line 232 "top_level.mercury_compile_front_end.c"
static void MR_CALL 
top_level__mercury_compile_front_end____Compare____simplify_pass_0_0_10001(
#line 235 "top_level.mercury_compile_front_end.c"
  MR_Box * top_level__mercury_compile_front_end__wrapper_arg_1,
#line 237 "top_level.mercury_compile_front_end.c"
  MR_Box top_level__mercury_compile_front_end__wrapper_arg_2,
#line 239 "top_level.mercury_compile_front_end.c"
  MR_Box top_level__mercury_compile_front_end__wrapper_arg_3);

#line 242 "top_level.mercury_compile_front_end.c"
static void MR_CALL 
top_level__mercury_compile_front_end__maybe_benchmark_modes__ho1_6_p_0_1(
#line 245 "top_level.mercury_compile_front_end.c"
  MR_Box top_level__mercury_compile_front_end__closure_arg,
#line 247 "top_level.mercury_compile_front_end.c"
  MR_Box top_level__mercury_compile_front_end__wrapper_arg_1,
#line 249 "top_level.mercury_compile_front_end.c"
  MR_Box * top_level__mercury_compile_front_end__wrapper_arg_2,
#line 251 "top_level.mercury_compile_front_end.c"
  MR_Box top_level__mercury_compile_front_end__wrapper_arg_3,
#line 253 "top_level.mercury_compile_front_end.c"
  MR_Box * top_level__mercury_compile_front_end__wrapper_arg_4);

#line 711 "mercury_compile_front_end.m"
static void MR_CALL 
top_level__mercury_compile_front_end__maybe_benchmark_modes__ho1_6_p_0(
#line 711 "mercury_compile_front_end.m"
  MR_String top_level__mercury_compile_front_end__Stage_8,
#line 711 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_15,
#line 711 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_16);

#line 1042 "mercury_compile_front_end.m"
static void MR_CALL 
top_level__mercury_compile_front_end__maybe_proc_statistics_9_p_0(
#line 1042 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__Verbose_10,
#line 1042 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__Stats_11,
#line 1042 "mercury_compile_front_end.m"
  MR_String top_level__mercury_compile_front_end__Msg_12,
#line 1042 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_22,
#line 1042 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_23,
#line 1042 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_24,
#line 1042 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_25);

#line 1015 "mercury_compile_front_end.m"
static void MR_CALL 
top_level__mercury_compile_front_end__simplify_pred_8_p_0(
#line 1015 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__SimplifyTasks0_9,
#line 1015 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__PredId_10,
#line 1015 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_ModuleInfo_0_22,
#line 1015 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_ModuleInfo_23,
#line 1015 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_PredInfo_0_24,
#line 1015 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_PredInfo_25,
#line 1015 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_26,
#line 1015 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_27);

#line 889 "mercury_compile_front_end.m"
static void MR_CALL 
top_level__mercury_compile_front_end__process_try_goals_9_p_0(
#line 889 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__Verbose_10,
#line 889 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__Stats_11,
#line 889 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_18,
#line 889 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_19,
#line 889 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__FoundError_13,
#line 889 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_20,
#line 889 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_21);

#line 879 "mercury_compile_front_end.m"
static MR_bool MR_CALL 
top_level__mercury_compile_front_end__type_ctor_is_defined_in_this_module_2_p_0(
#line 879 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__ModuleName_3,
#line 879 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__HeadVar__2_2);

#line 853 "mercury_compile_front_end.m"
static MR_bool MR_CALL 
top_level__mercury_compile_front_end__check_oisu_pragmas_9_p_0_1(
#line 853 "mercury_compile_front_end.m"
  MR_Box top_level__mercury_compile_front_end__closure_arg,
#line 853 "mercury_compile_front_end.m"
  MR_Box top_level__mercury_compile_front_end__wrapper_arg_1);

#line 845 "mercury_compile_front_end.m"
static void MR_CALL 
top_level__mercury_compile_front_end__check_oisu_pragmas_9_p_0(
#line 845 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__Verbose_10,
#line 845 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__Stats_11,
#line 845 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_24,
#line 845 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_25,
#line 845 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__FoundError_13,
#line 845 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_26,
#line 845 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_27);

#line 811 "mercury_compile_front_end.m"
static void MR_CALL 
top_level__mercury_compile_front_end__check_stratification_9_p_0(
#line 811 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__Verbose_10,
#line 811 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__Stats_11,
#line 811 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_20,
#line 811 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_21,
#line 811 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__FoundError_13,
#line 811 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_22,
#line 811 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_23);

#line 786 "mercury_compile_front_end.m"
static void MR_CALL 
top_level__mercury_compile_front_end__check_unique_modes_9_p_0(
#line 786 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__Verbose_10,
#line 786 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__Stats_11,
#line 786 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_18,
#line 786 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_19,
#line 786 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__FoundError_13,
#line 786 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_20,
#line 786 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_21);

#line 763 "mercury_compile_front_end.m"
static void MR_CALL 
top_level__mercury_compile_front_end__check_determinism_8_p_0(
#line 763 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__Verbose_9,
#line 763 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__Stats_10,
#line 763 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_17,
#line 763 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_18,
#line 763 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_19,
#line 763 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_20);

#line 751 "mercury_compile_front_end.m"
static void MR_CALL 
top_level__mercury_compile_front_end__detect_cse_6_p_0(
#line 751 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__Verbose_7,
#line 751 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__Stats_8,
#line 751 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_11,
#line 751 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_12);

#line 739 "mercury_compile_front_end.m"
static void MR_CALL 
top_level__mercury_compile_front_end__detect_switches_6_p_0(
#line 739 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__Verbose_7,
#line 739 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__Stats_8,
#line 739 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_11,
#line 739 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_12);

#line 689 "mercury_compile_front_end.m"
static void MR_CALL 
top_level__mercury_compile_front_end__modecheck_10_p_0_1(
#line 689 "mercury_compile_front_end.m"
  MR_Box top_level__mercury_compile_front_end__closure_arg,
#line 689 "mercury_compile_front_end.m"
  MR_Box top_level__mercury_compile_front_end__wrapper_arg_1,
#line 689 "mercury_compile_front_end.m"
  MR_Box * top_level__mercury_compile_front_end__wrapper_arg_2);

#line 675 "mercury_compile_front_end.m"
static void MR_CALL 
top_level__mercury_compile_front_end__modecheck_10_p_0(
#line 675 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__Verbose_11,
#line 675 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__Stats_12,
#line 675 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_23,
#line 675 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_24,
#line 675 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__FoundModeError_14,
#line 675 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__SafeToContinue_15,
#line 675 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_25,
#line 675 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_26);

#line 657 "mercury_compile_front_end.m"
static void MR_CALL 
top_level__mercury_compile_front_end__maybe_mode_constraints_6_p_0(
#line 657 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__Verbose_7,
#line 657 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__Stats_8,
#line 657 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_13,
#line 657 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_14);

#line 634 "mercury_compile_front_end.m"
static void MR_CALL 
top_level__mercury_compile_front_end__maybe_warn_about_unused_imports_8_p_0(
#line 634 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__Verbose_9,
#line 634 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__Stats_10,
#line 634 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_17,
#line 634 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_18,
#line 634 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_19,
#line 634 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_20);

#line 601 "mercury_compile_front_end.m"
static void MR_CALL 
top_level__mercury_compile_front_end__maybe_polymorphism_9_p_0(
#line 601 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__Verbose_10,
#line 601 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__Stats_11,
#line 601 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__SafeToContinue_12,
#line 601 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_19,
#line 601 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_20,
#line 601 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_21,
#line 601 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_22);

#line 585 "mercury_compile_front_end.m"
static void MR_CALL 
top_level__mercury_compile_front_end__subst_implementation_defined_literals_8_p_0(
#line 585 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__Verbose_9,
#line 585 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__Stats_10,
#line 585 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_15,
#line 585 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_16,
#line 585 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_17,
#line 585 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_18);

#line 561 "mercury_compile_front_end.m"
static void MR_CALL 
top_level__mercury_compile_front_end__puritycheck_8_p_0(
#line 561 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__Verbose_9,
#line 561 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__Stats_10,
#line 561 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_17,
#line 561 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_18,
#line 561 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_19,
#line 561 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_20);

#line 468 "mercury_compile_front_end.m"
static void MR_CALL 
top_level__mercury_compile_front_end__frontend_pass_by_phases_9_p_0(
#line 468 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_27,
#line 468 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_28,
#line 468 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__FoundError_11,
#line 468 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_0_29,
#line 468 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_30,
#line 468 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_31,
#line 468 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_32);

#line 366 "mercury_compile_front_end.m"
static void MR_CALL 
top_level__mercury_compile_front_end__maybe_write_initial_optfile_9_p_0(
#line 366 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__MakeOptInt_10,
#line 366 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_36,
#line 366 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_37,
#line 366 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_0_38,
#line 366 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_39,
#line 366 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_40,
#line 366 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_41);

#line 175 "mercury_compile_front_end.m"
static void MR_CALL 
top_level__mercury_compile_front_end__frontend_pass_after_typeclass_check_11_p_0(
#line 175 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__FoundUndefModeError_12,
#line 175 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_FoundError_0_39,
#line 175 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_FoundError_40,
#line 175 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_41,
#line 175 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_42,
#line 175 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_0_43,
#line 175 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_44,
#line 175 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_45,
#line 175 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_46);

#line 995 "mercury_compile_front_end.m"
static void MR_CALL 
top_level__mercury_compile_front_end__maybe_simplify_10_p_0_1(
#line 995 "mercury_compile_front_end.m"
  MR_Box top_level__mercury_compile_front_end__closure_arg,
#line 995 "mercury_compile_front_end.m"
  MR_Box top_level__mercury_compile_front_end__wrapper_arg_1,
#line 995 "mercury_compile_front_end.m"
  MR_Box top_level__mercury_compile_front_end__wrapper_arg_2,
#line 995 "mercury_compile_front_end.m"
  MR_Box * top_level__mercury_compile_front_end__wrapper_arg_3,
#line 995 "mercury_compile_front_end.m"
  MR_Box top_level__mercury_compile_front_end__wrapper_arg_4,
#line 995 "mercury_compile_front_end.m"
  MR_Box * top_level__mercury_compile_front_end__wrapper_arg_5,
#line 995 "mercury_compile_front_end.m"
  MR_Box top_level__mercury_compile_front_end__wrapper_arg_6,
#line 995 "mercury_compile_front_end.m"
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



#line 736 "top_level.mercury_compile_front_end.c"
static const MR_FA_PseudoTypeInfo_Struct1 top_level__mercury_compile_front_end__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0
  }
};

#line 744 "top_level.mercury_compile_front_end.c"
static const MR_FA_TypeInfo_Struct1 top_level__mercury_compile_front_end__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0
  }
};

#line 752 "top_level.mercury_compile_front_end.c"
static const MR_VA_PseudoTypeInfo_Struct3 top_level__mercury_compile_front_end____vpti_tuple_3__plain_hlds__hlds_module__type_ctor_info_module_info_0__plain_parse_tree__maybe_error__type_ctor_info_maybe_safe_to_continue_0__plain_list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__builtin__builtin__type_ctor_info_tuple_0,
  (MR_Integer) 3,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0,
    (MR_PseudoTypeInfo) &parse_tree__maybe_error__parse_tree__maybe_error__type_ctor_info_maybe_safe_to_continue_0,
    (MR_PseudoTypeInfo) &top_level__mercury_compile_front_end__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0
  }
};

#line 763 "top_level.mercury_compile_front_end.c"
static const MR_FA_PseudoTypeInfo_Struct2 top_level__mercury_compile_front_end__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_hlds__hlds_module__type_ctor_info_oisu_preds_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0,
    (MR_PseudoTypeInfo) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_oisu_preds_0
  }
};

#line 772 "top_level.mercury_compile_front_end.c"
static const MR_EnumFunctorDesc top_level__mercury_compile_front_end__top_level__mercury_compile_front_end__enum_functor_desc_simplify_pass_0_0 = {
  (MR_String) "simplify_pass_frontend",
  (MR_Integer) 0
};

#line 778 "top_level.mercury_compile_front_end.c"
static const MR_EnumFunctorDesc top_level__mercury_compile_front_end__top_level__mercury_compile_front_end__enum_functor_desc_simplify_pass_0_1 = {
  (MR_String) "simplify_pass_post_untuple",
  (MR_Integer) 1
};

#line 784 "top_level.mercury_compile_front_end.c"
static const MR_EnumFunctorDesc top_level__mercury_compile_front_end__top_level__mercury_compile_front_end__enum_functor_desc_simplify_pass_0_2 = {
  (MR_String) "simplify_pass_pre_prof_transforms",
  (MR_Integer) 2
};

#line 790 "top_level.mercury_compile_front_end.c"
static const MR_EnumFunctorDesc top_level__mercury_compile_front_end__top_level__mercury_compile_front_end__enum_functor_desc_simplify_pass_0_3 = {
  (MR_String) "simplify_pass_pre_implicit_parallelism",
  (MR_Integer) 3
};

#line 796 "top_level.mercury_compile_front_end.c"
static const MR_EnumFunctorDesc top_level__mercury_compile_front_end__top_level__mercury_compile_front_end__enum_functor_desc_simplify_pass_0_4 = {
  (MR_String) "simplify_pass_ml_backend",
  (MR_Integer) 4
};

#line 802 "top_level.mercury_compile_front_end.c"
static const MR_EnumFunctorDesc top_level__mercury_compile_front_end__top_level__mercury_compile_front_end__enum_functor_desc_simplify_pass_0_5 = {
  (MR_String) "simplify_pass_ll_backend",
  (MR_Integer) 5
};

#line 808 "top_level.mercury_compile_front_end.c"
static const MR_EnumFunctorDescPtr top_level__mercury_compile_front_end__top_level__mercury_compile_front_end__enum_value_ordered_simplify_pass_0[6] = {
  &top_level__mercury_compile_front_end__top_level__mercury_compile_front_end__enum_functor_desc_simplify_pass_0_0,
  &top_level__mercury_compile_front_end__top_level__mercury_compile_front_end__enum_functor_desc_simplify_pass_0_1,
  &top_level__mercury_compile_front_end__top_level__mercury_compile_front_end__enum_functor_desc_simplify_pass_0_2,
  &top_level__mercury_compile_front_end__top_level__mercury_compile_front_end__enum_functor_desc_simplify_pass_0_3,
  &top_level__mercury_compile_front_end__top_level__mercury_compile_front_end__enum_functor_desc_simplify_pass_0_4,
  &top_level__mercury_compile_front_end__top_level__mercury_compile_front_end__enum_functor_desc_simplify_pass_0_5
};

#line 818 "top_level.mercury_compile_front_end.c"
static const MR_EnumFunctorDescPtr top_level__mercury_compile_front_end__top_level__mercury_compile_front_end__enum_name_ordered_simplify_pass_0[6] = {
  &top_level__mercury_compile_front_end__top_level__mercury_compile_front_end__enum_functor_desc_simplify_pass_0_0,
  &top_level__mercury_compile_front_end__top_level__mercury_compile_front_end__enum_functor_desc_simplify_pass_0_5,
  &top_level__mercury_compile_front_end__top_level__mercury_compile_front_end__enum_functor_desc_simplify_pass_0_4,
  &top_level__mercury_compile_front_end__top_level__mercury_compile_front_end__enum_functor_desc_simplify_pass_0_1,
  &top_level__mercury_compile_front_end__top_level__mercury_compile_front_end__enum_functor_desc_simplify_pass_0_3,
  &top_level__mercury_compile_front_end__top_level__mercury_compile_front_end__enum_functor_desc_simplify_pass_0_2
};

#line 828 "top_level.mercury_compile_front_end.c"
static const MR_Integer top_level__mercury_compile_front_end__top_level__mercury_compile_front_end__functor_number_map_simplify_pass_0[6] = {
  (MR_Integer) 0,
  (MR_Integer) 3,
  (MR_Integer) 5,
  (MR_Integer) 4,
  (MR_Integer) 2,
  (MR_Integer) 1
};

#line 838 "top_level.mercury_compile_front_end.c"
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

#line 855 "top_level.mercury_compile_front_end.c"
static MR_bool MR_CALL 
top_level__mercury_compile_front_end____Unify____simplify_pass_0_0_10001(
#line 858 "top_level.mercury_compile_front_end.c"
  MR_Box top_level__mercury_compile_front_end__wrapper_arg_1,
#line 860 "top_level.mercury_compile_front_end.c"
  MR_Box top_level__mercury_compile_front_end__wrapper_arg_2)
#line 862 "top_level.mercury_compile_front_end.c"
{
#line 864 "top_level.mercury_compile_front_end.c"
  {
#line 866 "top_level.mercury_compile_front_end.c"
    MR_bool top_level__mercury_compile_front_end__succeeded;

#line 869 "top_level.mercury_compile_front_end.c"
    {
#line 871 "top_level.mercury_compile_front_end.c"
      top_level__mercury_compile_front_end__succeeded = top_level__mercury_compile_front_end____Unify____simplify_pass_0_0(((MR_Word) top_level__mercury_compile_front_end__wrapper_arg_1), ((MR_Word) top_level__mercury_compile_front_end__wrapper_arg_2));
    }
#line 874 "top_level.mercury_compile_front_end.c"
    return top_level__mercury_compile_front_end__succeeded;
#line 876 "top_level.mercury_compile_front_end.c"
  }
#line 878 "top_level.mercury_compile_front_end.c"
}

#line 881 "top_level.mercury_compile_front_end.c"
static void MR_CALL 
top_level__mercury_compile_front_end____Compare____simplify_pass_0_0_10001(
#line 884 "top_level.mercury_compile_front_end.c"
  MR_Box * top_level__mercury_compile_front_end__wrapper_arg_1,
#line 886 "top_level.mercury_compile_front_end.c"
  MR_Box top_level__mercury_compile_front_end__wrapper_arg_2,
#line 888 "top_level.mercury_compile_front_end.c"
  MR_Box top_level__mercury_compile_front_end__wrapper_arg_3)
#line 890 "top_level.mercury_compile_front_end.c"
{
#line 892 "top_level.mercury_compile_front_end.c"
  {
#line 894 "top_level.mercury_compile_front_end.c"
    MR_Word top_level__mercury_compile_front_end__conv0_HeadVar__1_1;

#line 897 "top_level.mercury_compile_front_end.c"
    {
#line 899 "top_level.mercury_compile_front_end.c"
      top_level__mercury_compile_front_end____Compare____simplify_pass_0_0(&top_level__mercury_compile_front_end__conv0_HeadVar__1_1, ((MR_Word) top_level__mercury_compile_front_end__wrapper_arg_2), ((MR_Word) top_level__mercury_compile_front_end__wrapper_arg_3));
    }
#line 902 "top_level.mercury_compile_front_end.c"
    *top_level__mercury_compile_front_end__wrapper_arg_1 = ((MR_Box) (top_level__mercury_compile_front_end__conv0_HeadVar__1_1));
#line 904 "top_level.mercury_compile_front_end.c"
  }
#line 906 "top_level.mercury_compile_front_end.c"
}

#line 909 "top_level.mercury_compile_front_end.c"
static void MR_CALL 
top_level__mercury_compile_front_end__maybe_benchmark_modes__ho1_6_p_0_1(
#line 912 "top_level.mercury_compile_front_end.c"
  MR_Box top_level__mercury_compile_front_end__closure_arg,
#line 914 "top_level.mercury_compile_front_end.c"
  MR_Box top_level__mercury_compile_front_end__wrapper_arg_1,
#line 916 "top_level.mercury_compile_front_end.c"
  MR_Box * top_level__mercury_compile_front_end__wrapper_arg_2,
#line 918 "top_level.mercury_compile_front_end.c"
  MR_Box top_level__mercury_compile_front_end__wrapper_arg_3,
#line 920 "top_level.mercury_compile_front_end.c"
  MR_Box * top_level__mercury_compile_front_end__wrapper_arg_4)
#line 922 "top_level.mercury_compile_front_end.c"
{
#line 924 "top_level.mercury_compile_front_end.c"
  {
#line 926 "top_level.mercury_compile_front_end.c"
    MR_Box top_level__mercury_compile_front_end__closure = top_level__mercury_compile_front_end__closure_arg;
#line 928 "top_level.mercury_compile_front_end.c"
    MR_Word top_level__mercury_compile_front_end__conv0_HeadVar__2_2;

#line 931 "top_level.mercury_compile_front_end.c"
    {
#line 933 "top_level.mercury_compile_front_end.c"
      check_hlds__mode_constraints__mc_process_module_4_p_0(((MR_Word) top_level__mercury_compile_front_end__wrapper_arg_1), &top_level__mercury_compile_front_end__conv0_HeadVar__2_2);
    }
#line 936 "top_level.mercury_compile_front_end.c"
    *top_level__mercury_compile_front_end__wrapper_arg_2 = ((MR_Box) (top_level__mercury_compile_front_end__conv0_HeadVar__2_2));
#line 938 "top_level.mercury_compile_front_end.c"
  }
#line 940 "top_level.mercury_compile_front_end.c"
}

#line 711 "mercury_compile_front_end.m"
static void MR_CALL 
top_level__mercury_compile_front_end__maybe_benchmark_modes__ho1_6_p_0(
#line 711 "mercury_compile_front_end.m"
  MR_String top_level__mercury_compile_front_end__Stage_8,
#line 711 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_15,
#line 711 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_16)
#line 711 "mercury_compile_front_end.m"
{
#line 715 "mercury_compile_front_end.m"
  {
#line 715 "mercury_compile_front_end.m"
    MR_bool top_level__mercury_compile_front_end__succeeded;
#line 715 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__Globals_11;
#line 715 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__BenchmarkModes_12;

#line 716 "mercury_compile_front_end.m"
    {
#line 716 "mercury_compile_front_end.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_15, &top_level__mercury_compile_front_end__Globals_11);
    }
#line 717 "mercury_compile_front_end.m"
    {
#line 717 "mercury_compile_front_end.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_front_end__Globals_11, (MR_Integer) 161, &top_level__mercury_compile_front_end__BenchmarkModes_12);
    }
#line 726 "mercury_compile_front_end.m"
#line 726 "mercury_compile_front_end.m"
    switch (top_level__mercury_compile_front_end__BenchmarkModes_12) {
#line 726 "mercury_compile_front_end.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 726 "mercury_compile_front_end.m"
      case (MR_Integer) 0:
#line 728 "mercury_compile_front_end.m"
        {
#line 728 "mercury_compile_front_end.m"
          check_hlds__mode_constraints__mc_process_module_4_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_15, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_16);
        }
#line 726 "mercury_compile_front_end.m"
        break;
#line 726 "mercury_compile_front_end.m"
      case (MR_Integer) 1:
#line 719 "mercury_compile_front_end.m"
        {
#line 719 "mercury_compile_front_end.m"
          MR_Integer top_level__mercury_compile_front_end__Repeats_13;
#line 719 "mercury_compile_front_end.m"
          MR_Integer top_level__mercury_compile_front_end__Time_14;
#line 719 "mercury_compile_front_end.m"
          MR_String top_level__mercury_compile_front_end__V_40_40;
#line 719 "mercury_compile_front_end.m"
          MR_Word top_level__mercury_compile_front_end__V_46_46;
#line 719 "mercury_compile_front_end.m"
          MR_String top_level__mercury_compile_front_end__V_50_50;
#line 719 "mercury_compile_front_end.m"
          MR_String top_level__mercury_compile_front_end__V_59_59;
#line 735 "mercury_compile_front_end.m"
          MR_Box top_level__mercury_compile_front_end__conv2_STATE_VARIABLE_HLDS_16;
#line 735 "mercury_compile_front_end.m"
          MR_Box top_level__mercury_compile_front_end__conv1_STATE_VARIABLE_IO_31_31;

#line 720 "mercury_compile_front_end.m"
          {
#line 720 "mercury_compile_front_end.m"
            libs__globals__lookup_int_option_3_p_0(top_level__mercury_compile_front_end__Globals_11, (MR_Integer) 162, &top_level__mercury_compile_front_end__Repeats_13);
          }
#line 1013 "top_level.mercury_compile_front_end.c"
          top_level__mercury_compile_front_end__V_46_46 = (MR_Word) &top_level__mercury_compile_front_end_scalar_common_5[0];
#line 721 "mercury_compile_front_end.m"
          {
#line 721 "mercury_compile_front_end.m"
            mercury__string__format__format_string_component_nowidth_noprec_3_p_0(top_level__mercury_compile_front_end__V_46_46, top_level__mercury_compile_front_end__Stage_8, &top_level__mercury_compile_front_end__V_40_40);
          }
#line 721 "mercury_compile_front_end.m"
          {
#line 721 "mercury_compile_front_end.m"
            mercury__io__write_string_3_p_0(top_level__mercury_compile_front_end__V_40_40);
          }
#line 721 "mercury_compile_front_end.m"
          {
#line 721 "mercury_compile_front_end.m"
            mercury__io__write_string_3_p_0((MR_String) " ");
          }
#line 721 "mercury_compile_front_end.m"
          {
#line 721 "mercury_compile_front_end.m"
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(top_level__mercury_compile_front_end__V_46_46, top_level__mercury_compile_front_end__Repeats_13, &top_level__mercury_compile_front_end__V_50_50);
          }
#line 721 "mercury_compile_front_end.m"
          {
#line 721 "mercury_compile_front_end.m"
            mercury__io__write_string_3_p_0(top_level__mercury_compile_front_end__V_50_50);
          }
#line 721 "mercury_compile_front_end.m"
          {
#line 721 "mercury_compile_front_end.m"
            mercury__io__write_string_3_p_0((MR_String) " ");
          }
#line 735 "mercury_compile_front_end.m"
          {
#line 735 "mercury_compile_front_end.m"
            mercury__benchmarking__benchmark_det_io_7_p_0((MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, (MR_Word) &top_level__mercury_compile_front_end_scalar_common_3[2], ((MR_Box) (top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_15)), &top_level__mercury_compile_front_end__conv2_STATE_VARIABLE_HLDS_16, ((MR_Box) ((MR_Integer) 0)), &top_level__mercury_compile_front_end__conv1_STATE_VARIABLE_IO_31_31, top_level__mercury_compile_front_end__Repeats_13, &top_level__mercury_compile_front_end__Time_14);
          }
#line 735 "mercury_compile_front_end.m"
          *top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_16 = ((MR_Word) top_level__mercury_compile_front_end__conv2_STATE_VARIABLE_HLDS_16);
#line 725 "mercury_compile_front_end.m"
          {
#line 725 "mercury_compile_front_end.m"
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(top_level__mercury_compile_front_end__V_46_46, top_level__mercury_compile_front_end__Time_14, &top_level__mercury_compile_front_end__V_59_59);
          }
#line 725 "mercury_compile_front_end.m"
          {
#line 725 "mercury_compile_front_end.m"
            mercury__io__write_string_3_p_0(top_level__mercury_compile_front_end__V_59_59);
          }
#line 725 "mercury_compile_front_end.m"
          {
#line 725 "mercury_compile_front_end.m"
            mercury__io__write_string_3_p_0((MR_String) " ms\n");
          }
#line 719 "mercury_compile_front_end.m"
        }
#line 726 "mercury_compile_front_end.m"
        break;
#line 726 "mercury_compile_front_end.m"
    }
#line 715 "mercury_compile_front_end.m"
  }
#line 711 "mercury_compile_front_end.m"
}

#line 43 "mercury_compile_front_end.m"
void MR_CALL 
top_level__mercury_compile_front_end____Compare____simplify_pass_0_0(
#line 43 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__HeadVar__1_1,
#line 43 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__HeadVar__2_2,
#line 43 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__HeadVar__3_3)
#line 43 "mercury_compile_front_end.m"
{
#line 43 "mercury_compile_front_end.m"
  {
#line 43 "mercury_compile_front_end.m"
    MR_bool top_level__mercury_compile_front_end__succeeded;
#line 43 "mercury_compile_front_end.m"
    MR_Integer top_level__mercury_compile_front_end__Cast_HeadVar1_4 = (MR_Integer) top_level__mercury_compile_front_end__HeadVar__2_2;
#line 43 "mercury_compile_front_end.m"
    MR_Integer top_level__mercury_compile_front_end__Cast_HeadVar2_5 = (MR_Integer) top_level__mercury_compile_front_end__HeadVar__3_3;

#line 43 "mercury_compile_front_end.m"
    {
#line 43 "mercury_compile_front_end.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(top_level__mercury_compile_front_end__HeadVar__1_1, top_level__mercury_compile_front_end__Cast_HeadVar1_4, top_level__mercury_compile_front_end__Cast_HeadVar2_5);
    }
#line 43 "mercury_compile_front_end.m"
  }
#line 43 "mercury_compile_front_end.m"
}

#line 43 "mercury_compile_front_end.m"
MR_bool MR_CALL 
top_level__mercury_compile_front_end____Unify____simplify_pass_0_0(
#line 43 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__HeadVar__2_1,
#line 43 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__HeadVar__2_2)
#line 43 "mercury_compile_front_end.m"
{
#line 1117 "top_level.mercury_compile_front_end.c"
  {
#line 1119 "top_level.mercury_compile_front_end.c"
    MR_bool top_level__mercury_compile_front_end__succeeded = (top_level__mercury_compile_front_end__HeadVar__2_1 == top_level__mercury_compile_front_end__HeadVar__2_2);

#line 1122 "top_level.mercury_compile_front_end.c"
    return top_level__mercury_compile_front_end__succeeded;
#line 1124 "top_level.mercury_compile_front_end.c"
  }
#line 43 "mercury_compile_front_end.m"
}

#line 1042 "mercury_compile_front_end.m"
static void MR_CALL 
top_level__mercury_compile_front_end__maybe_proc_statistics_9_p_0(
#line 1042 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__Verbose_10,
#line 1042 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__Stats_11,
#line 1042 "mercury_compile_front_end.m"
  MR_String top_level__mercury_compile_front_end__Msg_12,
#line 1042 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_22,
#line 1042 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_23,
#line 1042 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_24,
#line 1042 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_25)
#line 1042 "mercury_compile_front_end.m"
{
#line 1046 "mercury_compile_front_end.m"
  {
#line 1046 "mercury_compile_front_end.m"
    MR_bool top_level__mercury_compile_front_end__succeeded;
#line 1046 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__Globals_16;
#line 1046 "mercury_compile_front_end.m"
    MR_String top_level__mercury_compile_front_end__StatsFileName_17;

#line 1047 "mercury_compile_front_end.m"
    {
#line 1047 "mercury_compile_front_end.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_22, &top_level__mercury_compile_front_end__Globals_16);
    }
#line 1048 "mercury_compile_front_end.m"
    {
#line 1048 "mercury_compile_front_end.m"
      hlds__hlds_error_util__maybe_write_out_errors_8_p_0(top_level__mercury_compile_front_end__Verbose_10, top_level__mercury_compile_front_end__Globals_16, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_22, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_23, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_24, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_25);
    }
#line 1050 "mercury_compile_front_end.m"
    {
#line 1050 "mercury_compile_front_end.m"
      libs__globals__lookup_string_option_3_p_0(top_level__mercury_compile_front_end__Globals_16, (MR_Integer) 58, &top_level__mercury_compile_front_end__StatsFileName_17);
    }
#line 1051 "mercury_compile_front_end.m"
    top_level__mercury_compile_front_end__succeeded = (strcmp(top_level__mercury_compile_front_end__StatsFileName_17, (MR_String) "") == 0);
#line 1051 "mercury_compile_front_end.m"
    if (top_level__mercury_compile_front_end__succeeded)
#line 1051 "mercury_compile_front_end.m"
      {
#line 1051 "mercury_compile_front_end.m"
      }
#line 1051 "mercury_compile_front_end.m"
    else
#line 1055 "mercury_compile_front_end.m"
      {
#line 1055 "mercury_compile_front_end.m"
        MR_Word top_level__mercury_compile_front_end__StatsFileNameResult_18;

#line 1055 "mercury_compile_front_end.m"
        {
#line 1055 "mercury_compile_front_end.m"
          mercury__io__open_append_4_p_0(top_level__mercury_compile_front_end__StatsFileName_17, &top_level__mercury_compile_front_end__StatsFileNameResult_18);
        }
#line 1063 "mercury_compile_front_end.m"
        if (((MR_tag((MR_Word) top_level__mercury_compile_front_end__StatsFileNameResult_18)) == (MR_mktag((MR_Integer) 1))))
#line 1064 "mercury_compile_front_end.m"
          {
#line 1064 "mercury_compile_front_end.m"
            MR_Word top_level__mercury_compile_front_end__StatsFileError_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), top_level__mercury_compile_front_end__StatsFileNameResult_18, (MR_Integer) 0)));
#line 1064 "mercury_compile_front_end.m"
            MR_String top_level__mercury_compile_front_end__StatsFileErrorMsg_21;

#line 1065 "mercury_compile_front_end.m"
            {
#line 1065 "mercury_compile_front_end.m"
              mercury__io__error_message_2_p_0(top_level__mercury_compile_front_end__StatsFileError_20, &top_level__mercury_compile_front_end__StatsFileErrorMsg_21);
            }
#line 1066 "mercury_compile_front_end.m"
            {
#line 1066 "mercury_compile_front_end.m"
              libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_front_end__Verbose_10, (MR_String) "% Cannot write proc statistics: ");
            }
#line 1068 "mercury_compile_front_end.m"
            {
#line 1068 "mercury_compile_front_end.m"
              libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_front_end__Verbose_10, top_level__mercury_compile_front_end__StatsFileErrorMsg_21);
            }
#line 1069 "mercury_compile_front_end.m"
            {
#line 1069 "mercury_compile_front_end.m"
              libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_front_end__Verbose_10, (MR_String) "\n");
            }
#line 1064 "mercury_compile_front_end.m"
          }
#line 1063 "mercury_compile_front_end.m"
        else
#line 1057 "mercury_compile_front_end.m"
          {
#line 1057 "mercury_compile_front_end.m"
            MR_Word top_level__mercury_compile_front_end__StatsFileStream_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_front_end__StatsFileNameResult_18, (MR_Integer) 0)));

#line 1058 "mercury_compile_front_end.m"
            {
#line 1058 "mercury_compile_front_end.m"
              libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_front_end__Verbose_10, (MR_String) "% Generating proc statistics...\n");
            }
#line 1060 "mercury_compile_front_end.m"
            {
#line 1060 "mercury_compile_front_end.m"
              hlds__hlds_statistics__write_proc_stats_for_module_5_p_0(top_level__mercury_compile_front_end__StatsFileStream_19, top_level__mercury_compile_front_end__Msg_12, *top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_23);
            }
#line 1061 "mercury_compile_front_end.m"
            {
#line 1061 "mercury_compile_front_end.m"
              libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_front_end__Verbose_10, (MR_String) "% done.\n");
            }
#line 1062 "mercury_compile_front_end.m"
            {
#line 1062 "mercury_compile_front_end.m"
              libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_front_end__Stats_11);
            }
#line 1057 "mercury_compile_front_end.m"
          }
#line 1055 "mercury_compile_front_end.m"
      }
#line 1046 "mercury_compile_front_end.m"
  }
#line 1042 "mercury_compile_front_end.m"
}

#line 1015 "mercury_compile_front_end.m"
static void MR_CALL 
top_level__mercury_compile_front_end__simplify_pred_8_p_0(
#line 1015 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__SimplifyTasks0_9,
#line 1015 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__PredId_10,
#line 1015 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_ModuleInfo_0_22,
#line 1015 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_ModuleInfo_23,
#line 1015 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_PredInfo_0_24,
#line 1015 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_PredInfo_25,
#line 1015 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_26,
#line 1015 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_27)
#line 1015 "mercury_compile_front_end.m"
{
#line 1019 "mercury_compile_front_end.m"
  {
#line 1019 "mercury_compile_front_end.m"
    MR_bool top_level__mercury_compile_front_end__succeeded;
#line 1019 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__ProcIds_15;
#line 1019 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__SimplifyTasks_16;
#line 1019 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__ErrorSpecs0_17;
#line 1019 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__ErrorSpecs_18;
#line 1019 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__Globals_19;
#line 1019 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__SpecsList_20;
#line 1019 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__Statistics_21;

#line 1021 "mercury_compile_front_end.m"
    {
#line 1021 "mercury_compile_front_end.m"
      hlds__passes_aux__write_pred_progress_message_5_p_0((MR_String) "% Simplifying ", top_level__mercury_compile_front_end__PredId_10, top_level__mercury_compile_front_end__STATE_VARIABLE_ModuleInfo_0_22);
    }
#line 1024 "mercury_compile_front_end.m"
    {
#line 1024 "mercury_compile_front_end.m"
      top_level__mercury_compile_front_end__ProcIds_15 = hlds__hlds_pred__pred_info_non_imported_procids_1_f_0(top_level__mercury_compile_front_end__STATE_VARIABLE_PredInfo_0_24);
    }
#line 1026 "mercury_compile_front_end.m"
    {
#line 1026 "mercury_compile_front_end.m"
      top_level__mercury_compile_front_end__succeeded = hlds__hlds_pred__is_unify_or_compare_pred_1_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_PredInfo_0_24);
    }
#line 1026 "mercury_compile_front_end.m"
    if (top_level__mercury_compile_front_end__succeeded)
#line 1027 "mercury_compile_front_end.m"
      {
#line 1027 "mercury_compile_front_end.m"
        MR_Word top_level__mercury_compile_front_end__V_39_39 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_front_end__SimplifyTasks0_9, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 1027 "mercury_compile_front_end.m"
        MR_Word top_level__mercury_compile_front_end__V_40_40 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_front_end__SimplifyTasks0_9, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 1027 "mercury_compile_front_end.m"
        MR_Word top_level__mercury_compile_front_end__V_41_41 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_front_end__SimplifyTasks0_9, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 1027 "mercury_compile_front_end.m"
        MR_Word top_level__mercury_compile_front_end__V_42_42 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_front_end__SimplifyTasks0_9, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 1027 "mercury_compile_front_end.m"
        MR_Word top_level__mercury_compile_front_end__V_43_43 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_front_end__SimplifyTasks0_9, (MR_Integer) 0)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 1027 "mercury_compile_front_end.m"
        MR_Word top_level__mercury_compile_front_end__V_44_44 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_front_end__SimplifyTasks0_9, (MR_Integer) 0)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 1027 "mercury_compile_front_end.m"
        MR_Word top_level__mercury_compile_front_end__V_45_45 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_front_end__SimplifyTasks0_9, (MR_Integer) 0)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 1027 "mercury_compile_front_end.m"
        MR_Word top_level__mercury_compile_front_end__V_46_46 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_front_end__SimplifyTasks0_9, (MR_Integer) 0)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
#line 1027 "mercury_compile_front_end.m"
        MR_Word top_level__mercury_compile_front_end__V_47_47 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_front_end__SimplifyTasks0_9, (MR_Integer) 0)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
#line 1027 "mercury_compile_front_end.m"
        MR_Word top_level__mercury_compile_front_end__V_48_48 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_front_end__SimplifyTasks0_9, (MR_Integer) 0)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
#line 1027 "mercury_compile_front_end.m"
        MR_Word top_level__mercury_compile_front_end__V_49_49 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_front_end__SimplifyTasks0_9, (MR_Integer) 0)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
#line 1027 "mercury_compile_front_end.m"
        MR_Word top_level__mercury_compile_front_end__V_50_50 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_front_end__SimplifyTasks0_9, (MR_Integer) 0)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
#line 1027 "mercury_compile_front_end.m"
        MR_Word top_level__mercury_compile_front_end__V_38_38 = ((((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_front_end__SimplifyTasks0_9, (MR_Integer) 0)))) & (MR_Integer) 1);

#line 1027 "mercury_compile_front_end.m"
        {
#line 1027 "mercury_compile_front_end.m"
          top_level__mercury_compile_front_end__SimplifyTasks_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1027 "mercury_compile_front_end.m"
          MR_hl_field(MR_mktag(0), top_level__mercury_compile_front_end__SimplifyTasks_16, 0) = ((MR_Box) (((MR_Integer) 0 | ((((top_level__mercury_compile_front_end__V_39_39 << (MR_Integer) 1)) | ((((top_level__mercury_compile_front_end__V_40_40 << (MR_Integer) 2)) | ((((top_level__mercury_compile_front_end__V_41_41 << (MR_Integer) 3)) | ((((top_level__mercury_compile_front_end__V_42_42 << (MR_Integer) 4)) | ((((top_level__mercury_compile_front_end__V_43_43 << (MR_Integer) 5)) | ((((top_level__mercury_compile_front_end__V_44_44 << (MR_Integer) 6)) | ((((top_level__mercury_compile_front_end__V_45_45 << (MR_Integer) 7)) | ((((top_level__mercury_compile_front_end__V_46_46 << (MR_Integer) 8)) | ((((top_level__mercury_compile_front_end__V_47_47 << (MR_Integer) 9)) | ((((top_level__mercury_compile_front_end__V_48_48 << (MR_Integer) 10)) | ((((top_level__mercury_compile_front_end__V_49_49 << (MR_Integer) 11)) | ((top_level__mercury_compile_front_end__V_50_50 << (MR_Integer) 12)))))))))))))))))))))))))));
#line 1027 "mercury_compile_front_end.m"
        }
#line 1027 "mercury_compile_front_end.m"
      }
#line 1026 "mercury_compile_front_end.m"
    else
#line 1029 "mercury_compile_front_end.m"
      top_level__mercury_compile_front_end__SimplifyTasks_16 = top_level__mercury_compile_front_end__SimplifyTasks0_9;
#line 1031 "mercury_compile_front_end.m"
    {
#line 1031 "mercury_compile_front_end.m"
      top_level__mercury_compile_front_end__ErrorSpecs0_17 = parse_tree__error_util__init_error_spec_accumulator_0_f_0();
    }
#line 1032 "mercury_compile_front_end.m"
    {
#line 1032 "mercury_compile_front_end.m"
      check_hlds__simplify__simplify_proc__simplify_pred_procs_9_p_0(top_level__mercury_compile_front_end__SimplifyTasks_16, top_level__mercury_compile_front_end__PredId_10, top_level__mercury_compile_front_end__ProcIds_15, top_level__mercury_compile_front_end__STATE_VARIABLE_ModuleInfo_0_22, top_level__mercury_compile_front_end__STATE_VARIABLE_ModuleInfo_23, top_level__mercury_compile_front_end__STATE_VARIABLE_PredInfo_0_24, top_level__mercury_compile_front_end__STATE_VARIABLE_PredInfo_25, top_level__mercury_compile_front_end__ErrorSpecs0_17, &top_level__mercury_compile_front_end__ErrorSpecs_18);
    }
#line 1034 "mercury_compile_front_end.m"
    {
#line 1034 "mercury_compile_front_end.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(*top_level__mercury_compile_front_end__STATE_VARIABLE_ModuleInfo_23, &top_level__mercury_compile_front_end__Globals_19);
    }
#line 1035 "mercury_compile_front_end.m"
    {
#line 1035 "mercury_compile_front_end.m"
      top_level__mercury_compile_front_end__SpecsList_20 = parse_tree__error_util__error_spec_accumulator_to_list_1_f_0(top_level__mercury_compile_front_end__ErrorSpecs_18);
    }
#line 1036 "mercury_compile_front_end.m"
    {
#line 1036 "mercury_compile_front_end.m"
      *top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_27 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, top_level__mercury_compile_front_end__SpecsList_20, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_26);
    }
#line 1037 "mercury_compile_front_end.m"
    {
#line 1037 "mercury_compile_front_end.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_front_end__Globals_19, (MR_Integer) 57, &top_level__mercury_compile_front_end__Statistics_21);
    }
#line 1039 "mercury_compile_front_end.m"
    {
#line 1039 "mercury_compile_front_end.m"
      libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_front_end__Statistics_21);
    }
#line 1019 "mercury_compile_front_end.m"
  }
#line 1015 "mercury_compile_front_end.m"
}

#line 889 "mercury_compile_front_end.m"
static void MR_CALL 
top_level__mercury_compile_front_end__process_try_goals_9_p_0(
#line 889 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__Verbose_10,
#line 889 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__Stats_11,
#line 889 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_18,
#line 889 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_19,
#line 889 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__FoundError_13,
#line 889 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_20,
#line 889 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_21)
#line 889 "mercury_compile_front_end.m"
{
#line 893 "mercury_compile_front_end.m"
  {
#line 893 "mercury_compile_front_end.m"
    MR_bool top_level__mercury_compile_front_end__succeeded;
#line 893 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__Globals_16;
#line 893 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__TryExpandSpecs_17;
#line 893 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_24_24;
#line 893 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_25_25;
#line 893 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_29_29;
#line 893 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_31_31;

#line 894 "mercury_compile_front_end.m"
    {
#line 894 "mercury_compile_front_end.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_18, &top_level__mercury_compile_front_end__Globals_16);
    }
#line 895 "mercury_compile_front_end.m"
    {
#line 895 "mercury_compile_front_end.m"
      hlds__hlds_error_util__maybe_write_out_errors_8_p_0(top_level__mercury_compile_front_end__Verbose_10, top_level__mercury_compile_front_end__Globals_16, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_18, &top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_24_24, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_20, &top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_25_25);
    }
#line 896 "mercury_compile_front_end.m"
    {
#line 896 "mercury_compile_front_end.m"
      libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_front_end__Verbose_10, (MR_String) "% Transforming try goals...\n");
    }
#line 897 "mercury_compile_front_end.m"
    {
#line 897 "mercury_compile_front_end.m"
      check_hlds__try_expand__expand_try_goals_in_module_4_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_24_24, &top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_29_29, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &top_level__mercury_compile_front_end__TryExpandSpecs_17);
    }
#line 898 "mercury_compile_front_end.m"
    {
#line 898 "mercury_compile_front_end.m"
      top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_31_31 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, top_level__mercury_compile_front_end__TryExpandSpecs_17, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_25_25);
    }
#line 899 "mercury_compile_front_end.m"
    {
#line 899 "mercury_compile_front_end.m"
      *top_level__mercury_compile_front_end__FoundError_13 = parse_tree__error_util__contains_errors_2_f_0(top_level__mercury_compile_front_end__Globals_16, top_level__mercury_compile_front_end__TryExpandSpecs_17);
    }
#line 900 "mercury_compile_front_end.m"
    {
#line 900 "mercury_compile_front_end.m"
      hlds__hlds_error_util__maybe_write_out_errors_8_p_0(top_level__mercury_compile_front_end__Verbose_10, top_level__mercury_compile_front_end__Globals_16, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_29_29, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_19, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_31_31, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_21);
    }
#line 904 "mercury_compile_front_end.m"
#line 904 "mercury_compile_front_end.m"
    switch (*top_level__mercury_compile_front_end__FoundError_13) {
#line 904 "mercury_compile_front_end.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 904 "mercury_compile_front_end.m"
      case (MR_Integer) 0:
#line 905 "mercury_compile_front_end.m"
        {
#line 906 "mercury_compile_front_end.m"
          {
#line 906 "mercury_compile_front_end.m"
            libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_front_end__Verbose_10, (MR_String) "% done.\n");
          }
#line 905 "mercury_compile_front_end.m"
        }
#line 904 "mercury_compile_front_end.m"
        break;
#line 904 "mercury_compile_front_end.m"
      case (MR_Integer) 1:
#line 902 "mercury_compile_front_end.m"
        {
#line 903 "mercury_compile_front_end.m"
          {
#line 903 "mercury_compile_front_end.m"
            libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_front_end__Verbose_10, (MR_String) "% Program contains error(s).\n");
          }
#line 902 "mercury_compile_front_end.m"
        }
#line 904 "mercury_compile_front_end.m"
        break;
#line 904 "mercury_compile_front_end.m"
    }
#line 908 "mercury_compile_front_end.m"
    {
#line 908 "mercury_compile_front_end.m"
      libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_front_end__Stats_11);
    }
#line 893 "mercury_compile_front_end.m"
  }
#line 889 "mercury_compile_front_end.m"
}

#line 879 "mercury_compile_front_end.m"
static MR_bool MR_CALL 
top_level__mercury_compile_front_end__type_ctor_is_defined_in_this_module_2_p_0(
#line 879 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__ModuleName_3,
#line 879 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__HeadVar__2_2)
#line 879 "mercury_compile_front_end.m"
{
#line 882 "mercury_compile_front_end.m"
  {
#line 882 "mercury_compile_front_end.m"
    MR_bool top_level__mercury_compile_front_end__succeeded;
#line 882 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__TypeCtor_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_front_end__HeadVar__2_2, (MR_Integer) 0)));
#line 882 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__TypeSymName_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_front_end__TypeCtor_4, (MR_Integer) 0)));
#line 882 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__TypeModuleName_8;
#line 882 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_front_end__HeadVar__2_2, (MR_Integer) 1)));
#line 883 "mercury_compile_front_end.m"
    MR_Integer top_level__mercury_compile_front_end___TypeArity_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_front_end__TypeCtor_4, (MR_Integer) 1)));
#line 884 "mercury_compile_front_end.m"
    MR_String top_level__mercury_compile_front_end___TypeName_9;

#line 884 "mercury_compile_front_end.m"
    top_level__mercury_compile_front_end__succeeded = ((MR_tag((MR_Word) top_level__mercury_compile_front_end__TypeSymName_6)) == (MR_mktag((MR_Integer) 1)));
#line 884 "mercury_compile_front_end.m"
    if (top_level__mercury_compile_front_end__succeeded)
#line 884 "mercury_compile_front_end.m"
      {
#line 884 "mercury_compile_front_end.m"
        top_level__mercury_compile_front_end__TypeModuleName_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), top_level__mercury_compile_front_end__TypeSymName_6, (MR_Integer) 0)));
#line 884 "mercury_compile_front_end.m"
        top_level__mercury_compile_front_end___TypeName_9 = ((MR_String) (MR_hl_field(MR_mktag(1), top_level__mercury_compile_front_end__TypeSymName_6, (MR_Integer) 1)));
#line 885 "mercury_compile_front_end.m"
        {
#line 885 "mercury_compile_front_end.m"
          top_level__mercury_compile_front_end__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(top_level__mercury_compile_front_end__ModuleName_3, top_level__mercury_compile_front_end__TypeModuleName_8);
        }
#line 884 "mercury_compile_front_end.m"
      }
#line 882 "mercury_compile_front_end.m"
    return top_level__mercury_compile_front_end__succeeded;
#line 882 "mercury_compile_front_end.m"
  }
#line 879 "mercury_compile_front_end.m"
}

#line 853 "mercury_compile_front_end.m"
static MR_bool MR_CALL 
top_level__mercury_compile_front_end__check_oisu_pragmas_9_p_0_1(
#line 853 "mercury_compile_front_end.m"
  MR_Box top_level__mercury_compile_front_end__closure_arg,
#line 853 "mercury_compile_front_end.m"
  MR_Box top_level__mercury_compile_front_end__wrapper_arg_1)
#line 853 "mercury_compile_front_end.m"
{
#line 853 "mercury_compile_front_end.m"
  {
#line 853 "mercury_compile_front_end.m"
    MR_bool top_level__mercury_compile_front_end__succeeded;
#line 853 "mercury_compile_front_end.m"
    MR_Box top_level__mercury_compile_front_end__closure = top_level__mercury_compile_front_end__closure_arg;

#line 853 "mercury_compile_front_end.m"
    {
#line 853 "mercury_compile_front_end.m"
      top_level__mercury_compile_front_end__succeeded = top_level__mercury_compile_front_end__type_ctor_is_defined_in_this_module_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_front_end__closure, (MR_Integer) 3))), ((MR_Word) top_level__mercury_compile_front_end__wrapper_arg_1));
    }
#line 853 "mercury_compile_front_end.m"
    return top_level__mercury_compile_front_end__succeeded;
#line 853 "mercury_compile_front_end.m"
  }
#line 853 "mercury_compile_front_end.m"
}

#line 845 "mercury_compile_front_end.m"
static void MR_CALL 
top_level__mercury_compile_front_end__check_oisu_pragmas_9_p_0(
#line 845 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__Verbose_10,
#line 845 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__Stats_11,
#line 845 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_24,
#line 845 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_25,
#line 845 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__FoundError_13,
#line 845 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_26,
#line 845 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_27)
#line 845 "mercury_compile_front_end.m"
{
#line 849 "mercury_compile_front_end.m"
  {
#line 849 "mercury_compile_front_end.m"
    MR_bool top_level__mercury_compile_front_end__succeeded;
#line 849 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__OISUMap_16;
#line 849 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__OISUPairs_17;
#line 849 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__ModuleName_18;
#line 849 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__ModuleOISUPairs_19;
#line 849 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__V_30_30;

#line 850 "mercury_compile_front_end.m"
    {
#line 850 "mercury_compile_front_end.m"
      hlds__hlds_module__module_info_get_oisu_map_2_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_24, &top_level__mercury_compile_front_end__OISUMap_16);
    }
#line 851 "mercury_compile_front_end.m"
    {
#line 851 "mercury_compile_front_end.m"
      mercury__map__to_assoc_list_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0, (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_oisu_preds_0, top_level__mercury_compile_front_end__OISUMap_16, &top_level__mercury_compile_front_end__OISUPairs_17);
    }
#line 852 "mercury_compile_front_end.m"
    {
#line 852 "mercury_compile_front_end.m"
      hlds__hlds_module__module_info_get_name_2_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_24, &top_level__mercury_compile_front_end__ModuleName_18);
    }
#line 853 "mercury_compile_front_end.m"
    {
#line 853 "mercury_compile_front_end.m"
      top_level__mercury_compile_front_end__V_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 853 "mercury_compile_front_end.m"
      MR_hl_field(MR_mktag(0), top_level__mercury_compile_front_end__V_30_30, 0) = ((MR_Box) (&top_level__mercury_compile_front_end_scalar_common_2[2]));
#line 853 "mercury_compile_front_end.m"
      MR_hl_field(MR_mktag(0), top_level__mercury_compile_front_end__V_30_30, 1) = ((MR_Box) (top_level__mercury_compile_front_end__check_oisu_pragmas_9_p_0_1));
#line 853 "mercury_compile_front_end.m"
      MR_hl_field(MR_mktag(0), top_level__mercury_compile_front_end__V_30_30, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 853 "mercury_compile_front_end.m"
      MR_hl_field(MR_mktag(0), top_level__mercury_compile_front_end__V_30_30, 3) = ((MR_Box) (top_level__mercury_compile_front_end__ModuleName_18));
#line 853 "mercury_compile_front_end.m"
    }
#line 853 "mercury_compile_front_end.m"
    {
#line 853 "mercury_compile_front_end.m"
      mercury__list__filter_3_p_0((MR_Word) &top_level__mercury_compile_front_end_scalar_common_3[0], top_level__mercury_compile_front_end__V_30_30, top_level__mercury_compile_front_end__OISUPairs_17, &top_level__mercury_compile_front_end__ModuleOISUPairs_19);
    }
#line 874 "mercury_compile_front_end.m"
    if ((top_level__mercury_compile_front_end__ModuleOISUPairs_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 875 "mercury_compile_front_end.m"
      {
#line 876 "mercury_compile_front_end.m"
        *top_level__mercury_compile_front_end__FoundError_13 = (MR_Integer) 0;
#line 875 "mercury_compile_front_end.m"
        *top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_25 = top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_24;
#line 875 "mercury_compile_front_end.m"
        *top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_27 = top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_26;
#line 875 "mercury_compile_front_end.m"
      }
#line 874 "mercury_compile_front_end.m"
    else
#line 856 "mercury_compile_front_end.m"
      {
#line 856 "mercury_compile_front_end.m"
        MR_Word top_level__mercury_compile_front_end__Globals_22;
#line 856 "mercury_compile_front_end.m"
        MR_Word top_level__mercury_compile_front_end__OISUSpecs_23;
#line 856 "mercury_compile_front_end.m"
        MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_31_31;
#line 856 "mercury_compile_front_end.m"
        MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_32_32;
#line 856 "mercury_compile_front_end.m"
        MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_36_36;
#line 856 "mercury_compile_front_end.m"
        MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_37_37;

#line 857 "mercury_compile_front_end.m"
        {
#line 857 "mercury_compile_front_end.m"
          hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_24, &top_level__mercury_compile_front_end__Globals_22);
        }
#line 858 "mercury_compile_front_end.m"
        {
#line 858 "mercury_compile_front_end.m"
          hlds__hlds_error_util__maybe_write_out_errors_8_p_0(top_level__mercury_compile_front_end__Verbose_10, top_level__mercury_compile_front_end__Globals_22, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_24, &top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_31_31, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_26, &top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_32_32);
        }
#line 859 "mercury_compile_front_end.m"
        {
#line 859 "mercury_compile_front_end.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_front_end__Verbose_10, (MR_String) "% Checking oisu pragmas...\n");
        }
#line 861 "mercury_compile_front_end.m"
        {
#line 861 "mercury_compile_front_end.m"
          check_hlds__oisu_check__check_oisu_pragmas_for_module_4_p_0(top_level__mercury_compile_front_end__ModuleOISUPairs_19, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_31_31, &top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_36_36, &top_level__mercury_compile_front_end__OISUSpecs_23);
        }
#line 862 "mercury_compile_front_end.m"
        {
#line 862 "mercury_compile_front_end.m"
          top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_37_37 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, top_level__mercury_compile_front_end__OISUSpecs_23, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_32_32);
        }
#line 863 "mercury_compile_front_end.m"
        {
#line 863 "mercury_compile_front_end.m"
          *top_level__mercury_compile_front_end__FoundError_13 = parse_tree__error_util__contains_errors_2_f_0(top_level__mercury_compile_front_end__Globals_22, top_level__mercury_compile_front_end__OISUSpecs_23);
        }
#line 864 "mercury_compile_front_end.m"
        {
#line 864 "mercury_compile_front_end.m"
          hlds__hlds_error_util__maybe_write_out_errors_8_p_0(top_level__mercury_compile_front_end__Verbose_10, top_level__mercury_compile_front_end__Globals_22, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_36_36, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_25, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_37_37, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_27);
        }
#line 869 "mercury_compile_front_end.m"
#line 869 "mercury_compile_front_end.m"
        switch (*top_level__mercury_compile_front_end__FoundError_13) {
#line 869 "mercury_compile_front_end.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 869 "mercury_compile_front_end.m"
          case (MR_Integer) 0:
#line 870 "mercury_compile_front_end.m"
            {
#line 871 "mercury_compile_front_end.m"
              {
#line 871 "mercury_compile_front_end.m"
                libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_front_end__Verbose_10, (MR_String) "% done.\n");
              }
#line 870 "mercury_compile_front_end.m"
            }
#line 869 "mercury_compile_front_end.m"
            break;
#line 869 "mercury_compile_front_end.m"
          case (MR_Integer) 1:
#line 866 "mercury_compile_front_end.m"
            {
#line 867 "mercury_compile_front_end.m"
              {
#line 867 "mercury_compile_front_end.m"
                libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_front_end__Verbose_10, (MR_String) "% Program contains oisu pragma error(s).\n");
              }
#line 866 "mercury_compile_front_end.m"
            }
#line 869 "mercury_compile_front_end.m"
            break;
#line 869 "mercury_compile_front_end.m"
        }
#line 873 "mercury_compile_front_end.m"
        {
#line 873 "mercury_compile_front_end.m"
          libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_front_end__Stats_11);
        }
#line 856 "mercury_compile_front_end.m"
      }
#line 849 "mercury_compile_front_end.m"
  }
#line 845 "mercury_compile_front_end.m"
}

#line 811 "mercury_compile_front_end.m"
static void MR_CALL 
top_level__mercury_compile_front_end__check_stratification_9_p_0(
#line 811 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__Verbose_10,
#line 811 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__Stats_11,
#line 811 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_20,
#line 811 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_21,
#line 811 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__FoundError_13,
#line 811 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_22,
#line 811 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_23)
#line 811 "mercury_compile_front_end.m"
{
#line 815 "mercury_compile_front_end.m"
  {
#line 815 "mercury_compile_front_end.m"
    MR_bool top_level__mercury_compile_front_end__succeeded;
#line 815 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__MustBeStratifiedPreds_16;
#line 815 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__Globals_17;
#line 815 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__Warn_18;

#line 816 "mercury_compile_front_end.m"
    {
#line 816 "mercury_compile_front_end.m"
      hlds__hlds_module__module_info_get_must_be_stratified_preds_2_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_20, &top_level__mercury_compile_front_end__MustBeStratifiedPreds_16);
    }
#line 817 "mercury_compile_front_end.m"
    {
#line 817 "mercury_compile_front_end.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_20, &top_level__mercury_compile_front_end__Globals_17);
    }
#line 818 "mercury_compile_front_end.m"
    {
#line 818 "mercury_compile_front_end.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_front_end__Globals_17, (MR_Integer) 18, &top_level__mercury_compile_front_end__Warn_18);
    }
#line 820 "mercury_compile_front_end.m"
    {
#line 820 "mercury_compile_front_end.m"
      top_level__mercury_compile_front_end__succeeded = mercury__set__is_non_empty_1_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, top_level__mercury_compile_front_end__MustBeStratifiedPreds_16);
    }
#line 821 "mercury_compile_front_end.m"
    if (!(top_level__mercury_compile_front_end__succeeded))
#line 821 "mercury_compile_front_end.m"
      top_level__mercury_compile_front_end__succeeded = (top_level__mercury_compile_front_end__Warn_18 == (MR_Integer) 1);
#line 819 "mercury_compile_front_end.m"
    if (top_level__mercury_compile_front_end__succeeded)
#line 824 "mercury_compile_front_end.m"
      {
#line 824 "mercury_compile_front_end.m"
        MR_Word top_level__mercury_compile_front_end__StratifySpecs_19;
#line 824 "mercury_compile_front_end.m"
        MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_27_27;
#line 824 "mercury_compile_front_end.m"
        MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_28_28;
#line 824 "mercury_compile_front_end.m"
        MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_32_32;
#line 824 "mercury_compile_front_end.m"
        MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_33_33;

#line 824 "mercury_compile_front_end.m"
        {
#line 824 "mercury_compile_front_end.m"
          hlds__hlds_error_util__maybe_write_out_errors_8_p_0(top_level__mercury_compile_front_end__Verbose_10, top_level__mercury_compile_front_end__Globals_17, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_20, &top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_27_27, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_22, &top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_28_28);
        }
#line 825 "mercury_compile_front_end.m"
        {
#line 825 "mercury_compile_front_end.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_front_end__Verbose_10, (MR_String) "% Checking stratification...\n");
        }
#line 826 "mercury_compile_front_end.m"
        {
#line 826 "mercury_compile_front_end.m"
          check_hlds__stratify__check_module_for_stratification_3_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_27_27, &top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_32_32, &top_level__mercury_compile_front_end__StratifySpecs_19);
        }
#line 827 "mercury_compile_front_end.m"
        {
#line 827 "mercury_compile_front_end.m"
          top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_33_33 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, top_level__mercury_compile_front_end__StratifySpecs_19, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_28_28);
        }
#line 828 "mercury_compile_front_end.m"
        {
#line 828 "mercury_compile_front_end.m"
          *top_level__mercury_compile_front_end__FoundError_13 = parse_tree__error_util__contains_errors_2_f_0(top_level__mercury_compile_front_end__Globals_17, top_level__mercury_compile_front_end__StratifySpecs_19);
        }
#line 829 "mercury_compile_front_end.m"
        {
#line 829 "mercury_compile_front_end.m"
          hlds__hlds_error_util__maybe_write_out_errors_8_p_0(top_level__mercury_compile_front_end__Verbose_10, top_level__mercury_compile_front_end__Globals_17, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_32_32, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_21, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_33_33, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_23);
        }
#line 834 "mercury_compile_front_end.m"
#line 834 "mercury_compile_front_end.m"
        switch (*top_level__mercury_compile_front_end__FoundError_13) {
#line 834 "mercury_compile_front_end.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 834 "mercury_compile_front_end.m"
          case (MR_Integer) 0:
#line 835 "mercury_compile_front_end.m"
            {
#line 836 "mercury_compile_front_end.m"
              {
#line 836 "mercury_compile_front_end.m"
                libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_front_end__Verbose_10, (MR_String) "% done.\n");
              }
#line 835 "mercury_compile_front_end.m"
            }
#line 834 "mercury_compile_front_end.m"
            break;
#line 834 "mercury_compile_front_end.m"
          case (MR_Integer) 1:
#line 831 "mercury_compile_front_end.m"
            {
#line 832 "mercury_compile_front_end.m"
              {
#line 832 "mercury_compile_front_end.m"
                libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_front_end__Verbose_10, (MR_String) "% Program contains stratification error(s).\n");
              }
#line 831 "mercury_compile_front_end.m"
            }
#line 834 "mercury_compile_front_end.m"
            break;
#line 834 "mercury_compile_front_end.m"
        }
#line 838 "mercury_compile_front_end.m"
        {
#line 838 "mercury_compile_front_end.m"
          libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_front_end__Stats_11);
        }
#line 824 "mercury_compile_front_end.m"
      }
#line 819 "mercury_compile_front_end.m"
    else
#line 840 "mercury_compile_front_end.m"
      {
#line 840 "mercury_compile_front_end.m"
        *top_level__mercury_compile_front_end__FoundError_13 = (MR_Integer) 0;
#line 840 "mercury_compile_front_end.m"
        *top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_23 = top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_22;
#line 840 "mercury_compile_front_end.m"
        *top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_21 = top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_20;
#line 840 "mercury_compile_front_end.m"
      }
#line 815 "mercury_compile_front_end.m"
  }
#line 811 "mercury_compile_front_end.m"
}

#line 786 "mercury_compile_front_end.m"
static void MR_CALL 
top_level__mercury_compile_front_end__check_unique_modes_9_p_0(
#line 786 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__Verbose_10,
#line 786 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__Stats_11,
#line 786 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_18,
#line 786 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_19,
#line 786 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__FoundError_13,
#line 786 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_20,
#line 786 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_21)
#line 786 "mercury_compile_front_end.m"
{
#line 790 "mercury_compile_front_end.m"
  {
#line 790 "mercury_compile_front_end.m"
    MR_bool top_level__mercury_compile_front_end__succeeded;
#line 790 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__Globals_16;
#line 790 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__UniqueSpecs_17;
#line 790 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_24_24;
#line 790 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_25_25;
#line 790 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_29_29;
#line 790 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_30_30;

#line 791 "mercury_compile_front_end.m"
    {
#line 791 "mercury_compile_front_end.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_18, &top_level__mercury_compile_front_end__Globals_16);
    }
#line 792 "mercury_compile_front_end.m"
    {
#line 792 "mercury_compile_front_end.m"
      hlds__hlds_error_util__maybe_write_out_errors_8_p_0(top_level__mercury_compile_front_end__Verbose_10, top_level__mercury_compile_front_end__Globals_16, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_18, &top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_24_24, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_20, &top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_25_25);
    }
#line 793 "mercury_compile_front_end.m"
    {
#line 793 "mercury_compile_front_end.m"
      libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_front_end__Verbose_10, (MR_String) "% Checking for backtracking over unique modes...\n");
    }
#line 795 "mercury_compile_front_end.m"
    {
#line 795 "mercury_compile_front_end.m"
      check_hlds__unique_modes__unique_modes_check_module_3_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_24_24, &top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_29_29, &top_level__mercury_compile_front_end__UniqueSpecs_17);
    }
#line 796 "mercury_compile_front_end.m"
    {
#line 796 "mercury_compile_front_end.m"
      top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_30_30 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, top_level__mercury_compile_front_end__UniqueSpecs_17, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_25_25);
    }
#line 797 "mercury_compile_front_end.m"
    {
#line 797 "mercury_compile_front_end.m"
      *top_level__mercury_compile_front_end__FoundError_13 = parse_tree__error_util__contains_errors_2_f_0(top_level__mercury_compile_front_end__Globals_16, top_level__mercury_compile_front_end__UniqueSpecs_17);
    }
#line 798 "mercury_compile_front_end.m"
    {
#line 798 "mercury_compile_front_end.m"
      hlds__hlds_error_util__maybe_write_out_errors_8_p_0(top_level__mercury_compile_front_end__Verbose_10, top_level__mercury_compile_front_end__Globals_16, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_29_29, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_19, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_30_30, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_21);
    }
#line 803 "mercury_compile_front_end.m"
#line 803 "mercury_compile_front_end.m"
    switch (*top_level__mercury_compile_front_end__FoundError_13) {
#line 803 "mercury_compile_front_end.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 803 "mercury_compile_front_end.m"
      case (MR_Integer) 0:
#line 804 "mercury_compile_front_end.m"
        {
#line 805 "mercury_compile_front_end.m"
          {
#line 805 "mercury_compile_front_end.m"
            libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_front_end__Verbose_10, (MR_String) "% Program is unique-mode-correct.\n");
          }
#line 804 "mercury_compile_front_end.m"
        }
#line 803 "mercury_compile_front_end.m"
        break;
#line 803 "mercury_compile_front_end.m"
      case (MR_Integer) 1:
#line 800 "mercury_compile_front_end.m"
        {
#line 801 "mercury_compile_front_end.m"
          {
#line 801 "mercury_compile_front_end.m"
            libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_front_end__Verbose_10, (MR_String) "% Program contains unique mode error(s).\n");
          }
#line 800 "mercury_compile_front_end.m"
        }
#line 803 "mercury_compile_front_end.m"
        break;
#line 803 "mercury_compile_front_end.m"
    }
#line 807 "mercury_compile_front_end.m"
    {
#line 807 "mercury_compile_front_end.m"
      libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_front_end__Stats_11);
    }
#line 790 "mercury_compile_front_end.m"
  }
#line 786 "mercury_compile_front_end.m"
}

#line 763 "mercury_compile_front_end.m"
static void MR_CALL 
top_level__mercury_compile_front_end__check_determinism_8_p_0(
#line 763 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__Verbose_9,
#line 763 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__Stats_10,
#line 763 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_17,
#line 763 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_18,
#line 763 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_19,
#line 763 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_20)
#line 763 "mercury_compile_front_end.m"
{
#line 767 "mercury_compile_front_end.m"
  {
#line 767 "mercury_compile_front_end.m"
    MR_bool top_level__mercury_compile_front_end__succeeded;
#line 767 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__DetismSpecs_14;
#line 767 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__Globals_15;
#line 767 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__FoundError_16;
#line 767 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_23_23;
#line 767 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_24_24;

#line 768 "mercury_compile_front_end.m"
    {
#line 768 "mercury_compile_front_end.m"
      check_hlds__det_analysis__determinism_pass_3_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_17, &top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_23_23, &top_level__mercury_compile_front_end__DetismSpecs_14);
    }
#line 769 "mercury_compile_front_end.m"
    {
#line 769 "mercury_compile_front_end.m"
      top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_24_24 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, top_level__mercury_compile_front_end__DetismSpecs_14, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_19);
    }
#line 770 "mercury_compile_front_end.m"
    {
#line 770 "mercury_compile_front_end.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_23_23, &top_level__mercury_compile_front_end__Globals_15);
    }
#line 771 "mercury_compile_front_end.m"
    {
#line 771 "mercury_compile_front_end.m"
      top_level__mercury_compile_front_end__FoundError_16 = parse_tree__error_util__contains_errors_2_f_0(top_level__mercury_compile_front_end__Globals_15, top_level__mercury_compile_front_end__DetismSpecs_14);
    }
#line 772 "mercury_compile_front_end.m"
    {
#line 772 "mercury_compile_front_end.m"
      hlds__hlds_error_util__maybe_write_out_errors_8_p_0(top_level__mercury_compile_front_end__Verbose_9, top_level__mercury_compile_front_end__Globals_15, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_23_23, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_18, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_24_24, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_20);
    }
#line 777 "mercury_compile_front_end.m"
#line 777 "mercury_compile_front_end.m"
    switch (top_level__mercury_compile_front_end__FoundError_16) {
#line 777 "mercury_compile_front_end.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 777 "mercury_compile_front_end.m"
      case (MR_Integer) 0:
#line 778 "mercury_compile_front_end.m"
        {
#line 779 "mercury_compile_front_end.m"
          {
#line 779 "mercury_compile_front_end.m"
            libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_front_end__Verbose_9, (MR_String) "% Program is determinism-correct.\n");
          }
#line 778 "mercury_compile_front_end.m"
        }
#line 777 "mercury_compile_front_end.m"
        break;
#line 777 "mercury_compile_front_end.m"
      case (MR_Integer) 1:
#line 774 "mercury_compile_front_end.m"
        {
#line 775 "mercury_compile_front_end.m"
          {
#line 775 "mercury_compile_front_end.m"
            libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_front_end__Verbose_9, (MR_String) "% Program contains determinism error(s).\n");
          }
#line 774 "mercury_compile_front_end.m"
        }
#line 777 "mercury_compile_front_end.m"
        break;
#line 777 "mercury_compile_front_end.m"
    }
#line 782 "mercury_compile_front_end.m"
    {
#line 782 "mercury_compile_front_end.m"
      libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_front_end__Stats_10);
    }
#line 767 "mercury_compile_front_end.m"
  }
#line 763 "mercury_compile_front_end.m"
}

#line 751 "mercury_compile_front_end.m"
static void MR_CALL 
top_level__mercury_compile_front_end__detect_cse_6_p_0(
#line 751 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__Verbose_7,
#line 751 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__Stats_8,
#line 751 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_11,
#line 751 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_12)
#line 751 "mercury_compile_front_end.m"
{
#line 754 "mercury_compile_front_end.m"
  {
#line 754 "mercury_compile_front_end.m"
    MR_bool top_level__mercury_compile_front_end__succeeded;

#line 755 "mercury_compile_front_end.m"
    {
#line 755 "mercury_compile_front_end.m"
      libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_front_end__Verbose_7, (MR_String) "% Detecting common deconstructions...\n");
    }
#line 757 "mercury_compile_front_end.m"
    {
#line 757 "mercury_compile_front_end.m"
      check_hlds__cse_detection__detect_cse_in_module_2_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_11, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_12);
    }
#line 758 "mercury_compile_front_end.m"
    {
#line 758 "mercury_compile_front_end.m"
      libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_front_end__Verbose_7, (MR_String) "% done.\n");
    }
#line 759 "mercury_compile_front_end.m"
    {
#line 759 "mercury_compile_front_end.m"
      libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_front_end__Stats_8);
    }
#line 754 "mercury_compile_front_end.m"
  }
#line 751 "mercury_compile_front_end.m"
}

#line 739 "mercury_compile_front_end.m"
static void MR_CALL 
top_level__mercury_compile_front_end__detect_switches_6_p_0(
#line 739 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__Verbose_7,
#line 739 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__Stats_8,
#line 739 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_11,
#line 739 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_12)
#line 739 "mercury_compile_front_end.m"
{
#line 742 "mercury_compile_front_end.m"
  {
#line 742 "mercury_compile_front_end.m"
    MR_bool top_level__mercury_compile_front_end__succeeded;

#line 743 "mercury_compile_front_end.m"
    {
#line 743 "mercury_compile_front_end.m"
      libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_front_end__Verbose_7, (MR_String) "% Detecting switches...\n");
    }
#line 744 "mercury_compile_front_end.m"
    {
#line 744 "mercury_compile_front_end.m"
      libs__file_util__maybe_flush_output_3_p_0(top_level__mercury_compile_front_end__Verbose_7);
    }
#line 745 "mercury_compile_front_end.m"
    {
#line 745 "mercury_compile_front_end.m"
      check_hlds__switch_detection__detect_switches_in_module_2_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_11, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_12);
    }
#line 746 "mercury_compile_front_end.m"
    {
#line 746 "mercury_compile_front_end.m"
      libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_front_end__Verbose_7, (MR_String) "% done.\n");
    }
#line 747 "mercury_compile_front_end.m"
    {
#line 747 "mercury_compile_front_end.m"
      libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_front_end__Stats_8);
    }
#line 742 "mercury_compile_front_end.m"
  }
#line 739 "mercury_compile_front_end.m"
}

#line 689 "mercury_compile_front_end.m"
static void MR_CALL 
top_level__mercury_compile_front_end__modecheck_10_p_0_1(
#line 689 "mercury_compile_front_end.m"
  MR_Box top_level__mercury_compile_front_end__closure_arg,
#line 689 "mercury_compile_front_end.m"
  MR_Box top_level__mercury_compile_front_end__wrapper_arg_1,
#line 689 "mercury_compile_front_end.m"
  MR_Box * top_level__mercury_compile_front_end__wrapper_arg_2)
#line 689 "mercury_compile_front_end.m"
{
#line 689 "mercury_compile_front_end.m"
  {
#line 689 "mercury_compile_front_end.m"
    MR_Box top_level__mercury_compile_front_end__closure = top_level__mercury_compile_front_end__closure_arg;
#line 689 "mercury_compile_front_end.m"
    MR_Tuple top_level__mercury_compile_front_end__conv0_HeadVar__2_2;

#line 689 "mercury_compile_front_end.m"
    {
#line 689 "mercury_compile_front_end.m"
      check_hlds__modes__modecheck_module_2_p_0(((MR_Word) top_level__mercury_compile_front_end__wrapper_arg_1), &top_level__mercury_compile_front_end__conv0_HeadVar__2_2);
    }
#line 689 "mercury_compile_front_end.m"
    *top_level__mercury_compile_front_end__wrapper_arg_2 = ((MR_Box) (top_level__mercury_compile_front_end__conv0_HeadVar__2_2));
#line 689 "mercury_compile_front_end.m"
  }
#line 689 "mercury_compile_front_end.m"
}

#line 675 "mercury_compile_front_end.m"
static void MR_CALL 
top_level__mercury_compile_front_end__modecheck_10_p_0(
#line 675 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__Verbose_11,
#line 675 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__Stats_12,
#line 675 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_23,
#line 675 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_24,
#line 675 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__FoundModeError_14,
#line 675 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__SafeToContinue_15,
#line 675 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_25,
#line 675 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_26)
#line 675 "mercury_compile_front_end.m"
{
#line 680 "mercury_compile_front_end.m"
  {
#line 680 "mercury_compile_front_end.m"
    MR_bool top_level__mercury_compile_front_end__succeeded;
#line 680 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__Globals_18;
#line 680 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__BenchmarkModes_19;
#line 680 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__ModeSpecs_21;
#line 680 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_29_29;
#line 680 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_30_30;
#line 680 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_38_38;
#line 680 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_46_46;

#line 681 "mercury_compile_front_end.m"
    {
#line 681 "mercury_compile_front_end.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_23, &top_level__mercury_compile_front_end__Globals_18);
    }
#line 682 "mercury_compile_front_end.m"
    {
#line 682 "mercury_compile_front_end.m"
      hlds__hlds_error_util__maybe_write_out_errors_8_p_0(top_level__mercury_compile_front_end__Verbose_11, top_level__mercury_compile_front_end__Globals_18, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_23, &top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_29_29, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_25, &top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_30_30);
    }
#line 683 "mercury_compile_front_end.m"
    {
#line 683 "mercury_compile_front_end.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_front_end__Globals_18, (MR_Integer) 161, &top_level__mercury_compile_front_end__BenchmarkModes_19);
    }
#line 694 "mercury_compile_front_end.m"
#line 694 "mercury_compile_front_end.m"
    switch (top_level__mercury_compile_front_end__BenchmarkModes_19) {
#line 694 "mercury_compile_front_end.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 694 "mercury_compile_front_end.m"
      case (MR_Integer) 0:
#line 695 "mercury_compile_front_end.m"
        {
#line 695 "mercury_compile_front_end.m"
          MR_Tuple top_level__mercury_compile_front_end__V_33_33;

#line 696 "mercury_compile_front_end.m"
          {
#line 696 "mercury_compile_front_end.m"
            check_hlds__modes__modecheck_module_2_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_29_29, &top_level__mercury_compile_front_end__V_33_33);
          }
#line 696 "mercury_compile_front_end.m"
          top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_front_end__V_33_33, (MR_Integer) 0)));
#line 696 "mercury_compile_front_end.m"
          *top_level__mercury_compile_front_end__SafeToContinue_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_front_end__V_33_33, (MR_Integer) 1)));
#line 696 "mercury_compile_front_end.m"
          top_level__mercury_compile_front_end__ModeSpecs_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_front_end__V_33_33, (MR_Integer) 2)));
#line 695 "mercury_compile_front_end.m"
        }
#line 694 "mercury_compile_front_end.m"
        break;
#line 694 "mercury_compile_front_end.m"
      case (MR_Integer) 1:
#line 685 "mercury_compile_front_end.m"
        {
#line 685 "mercury_compile_front_end.m"
          MR_Integer top_level__mercury_compile_front_end__Repeats_20;
#line 685 "mercury_compile_front_end.m"
          MR_Integer top_level__mercury_compile_front_end__Time_22;
#line 685 "mercury_compile_front_end.m"
          MR_String top_level__mercury_compile_front_end__V_66_66;
#line 685 "mercury_compile_front_end.m"
          MR_Word top_level__mercury_compile_front_end__V_72_72;
#line 685 "mercury_compile_front_end.m"
          MR_String top_level__mercury_compile_front_end__V_76_76;
#line 689 "mercury_compile_front_end.m"
          MR_Tuple top_level__mercury_compile_front_end__V_37_37;
#line 689 "mercury_compile_front_end.m"
          MR_Box top_level__mercury_compile_front_end__conv1_V_37_37;

#line 686 "mercury_compile_front_end.m"
          {
#line 686 "mercury_compile_front_end.m"
            libs__globals__lookup_int_option_3_p_0(top_level__mercury_compile_front_end__Globals_18, (MR_Integer) 162, &top_level__mercury_compile_front_end__Repeats_20);
          }
#line 689 "mercury_compile_front_end.m"
          {
#line 689 "mercury_compile_front_end.m"
            mercury__benchmarking__benchmark_det_5_p_0((MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, (MR_Word) &top_level__mercury_compile_front_end_scalar_common_2[0], (MR_Word) &top_level__mercury_compile_front_end_scalar_common_3[1], ((MR_Box) (top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_29_29)), &top_level__mercury_compile_front_end__conv1_V_37_37, top_level__mercury_compile_front_end__Repeats_20, &top_level__mercury_compile_front_end__Time_22);
          }
#line 689 "mercury_compile_front_end.m"
          top_level__mercury_compile_front_end__V_37_37 = ((MR_Tuple) top_level__mercury_compile_front_end__conv1_V_37_37);
#line 690 "mercury_compile_front_end.m"
          top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_front_end__V_37_37, (MR_Integer) 0)));
#line 690 "mercury_compile_front_end.m"
          *top_level__mercury_compile_front_end__SafeToContinue_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_front_end__V_37_37, (MR_Integer) 1)));
#line 690 "mercury_compile_front_end.m"
          top_level__mercury_compile_front_end__ModeSpecs_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_front_end__V_37_37, (MR_Integer) 2)));
#line 692 "mercury_compile_front_end.m"
          {
#line 692 "mercury_compile_front_end.m"
            mercury__io__write_string_3_p_0((MR_String) "BENCHMARK modecheck, ");
          }
#line 2383 "top_level.mercury_compile_front_end.c"
          top_level__mercury_compile_front_end__V_72_72 = (MR_Word) &top_level__mercury_compile_front_end_scalar_common_5[0];
#line 693 "mercury_compile_front_end.m"
          {
#line 693 "mercury_compile_front_end.m"
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(top_level__mercury_compile_front_end__V_72_72, top_level__mercury_compile_front_end__Repeats_20, &top_level__mercury_compile_front_end__V_66_66);
          }
#line 693 "mercury_compile_front_end.m"
          {
#line 693 "mercury_compile_front_end.m"
            mercury__io__write_string_3_p_0(top_level__mercury_compile_front_end__V_66_66);
          }
#line 692 "mercury_compile_front_end.m"
          {
#line 692 "mercury_compile_front_end.m"
            mercury__io__write_string_3_p_0((MR_String) " repeats: ");
          }
#line 693 "mercury_compile_front_end.m"
          {
#line 693 "mercury_compile_front_end.m"
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(top_level__mercury_compile_front_end__V_72_72, top_level__mercury_compile_front_end__Time_22, &top_level__mercury_compile_front_end__V_76_76);
          }
#line 693 "mercury_compile_front_end.m"
          {
#line 693 "mercury_compile_front_end.m"
            mercury__io__write_string_3_p_0(top_level__mercury_compile_front_end__V_76_76);
          }
#line 692 "mercury_compile_front_end.m"
          {
#line 692 "mercury_compile_front_end.m"
            mercury__io__write_string_3_p_0((MR_String) " ms\n");
          }
#line 685 "mercury_compile_front_end.m"
        }
#line 694 "mercury_compile_front_end.m"
        break;
#line 694 "mercury_compile_front_end.m"
    }
#line 698 "mercury_compile_front_end.m"
    {
#line 698 "mercury_compile_front_end.m"
      top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_46_46 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, top_level__mercury_compile_front_end__ModeSpecs_21, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_30_30);
    }
#line 699 "mercury_compile_front_end.m"
    {
#line 699 "mercury_compile_front_end.m"
      *top_level__mercury_compile_front_end__FoundModeError_14 = parse_tree__error_util__contains_errors_2_f_0(top_level__mercury_compile_front_end__Globals_18, top_level__mercury_compile_front_end__ModeSpecs_21);
    }
#line 704 "mercury_compile_front_end.m"
#line 704 "mercury_compile_front_end.m"
    switch (*top_level__mercury_compile_front_end__FoundModeError_14) {
#line 704 "mercury_compile_front_end.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 704 "mercury_compile_front_end.m"
      case (MR_Integer) 0:
#line 701 "mercury_compile_front_end.m"
        {
#line 702 "mercury_compile_front_end.m"
          {
#line 702 "mercury_compile_front_end.m"
            hlds__hlds_error_util__maybe_write_out_errors_8_p_0(top_level__mercury_compile_front_end__Verbose_11, top_level__mercury_compile_front_end__Globals_18, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_38_38, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_24, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_46_46, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_26);
          }
#line 703 "mercury_compile_front_end.m"
          {
#line 703 "mercury_compile_front_end.m"
            libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_front_end__Verbose_11, (MR_String) "% Program is mode-correct.\n");
          }
#line 701 "mercury_compile_front_end.m"
        }
#line 704 "mercury_compile_front_end.m"
        break;
#line 704 "mercury_compile_front_end.m"
      case (MR_Integer) 1:
#line 705 "mercury_compile_front_end.m"
        {
#line 706 "mercury_compile_front_end.m"
          {
#line 706 "mercury_compile_front_end.m"
            hlds__hlds_error_util__maybe_write_out_errors_8_p_0(top_level__mercury_compile_front_end__Verbose_11, top_level__mercury_compile_front_end__Globals_18, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_38_38, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_24, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_46_46, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_26);
          }
#line 707 "mercury_compile_front_end.m"
          {
#line 707 "mercury_compile_front_end.m"
            libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_front_end__Verbose_11, (MR_String) "% Program contains mode error(s).\n");
          }
#line 705 "mercury_compile_front_end.m"
        }
#line 704 "mercury_compile_front_end.m"
        break;
#line 704 "mercury_compile_front_end.m"
    }
#line 709 "mercury_compile_front_end.m"
    {
#line 709 "mercury_compile_front_end.m"
      libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_front_end__Stats_12);
    }
#line 680 "mercury_compile_front_end.m"
  }
#line 675 "mercury_compile_front_end.m"
}

#line 657 "mercury_compile_front_end.m"
static void MR_CALL 
top_level__mercury_compile_front_end__maybe_mode_constraints_6_p_0(
#line 657 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__Verbose_7,
#line 657 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__Stats_8,
#line 657 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_13,
#line 657 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_14)
#line 657 "mercury_compile_front_end.m"
{
#line 660 "mercury_compile_front_end.m"
  {
#line 660 "mercury_compile_front_end.m"
    MR_bool top_level__mercury_compile_front_end__succeeded;
#line 660 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__Globals_11;
#line 660 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__ModeConstraints_12;

#line 661 "mercury_compile_front_end.m"
    {
#line 661 "mercury_compile_front_end.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_13, &top_level__mercury_compile_front_end__Globals_11);
    }
#line 662 "mercury_compile_front_end.m"
    {
#line 662 "mercury_compile_front_end.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_front_end__Globals_11, (MR_Integer) 158, &top_level__mercury_compile_front_end__ModeConstraints_12);
    }
#line 671 "mercury_compile_front_end.m"
#line 671 "mercury_compile_front_end.m"
    switch (top_level__mercury_compile_front_end__ModeConstraints_12) {
#line 671 "mercury_compile_front_end.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 671 "mercury_compile_front_end.m"
      case (MR_Integer) 0:
#line 672 "mercury_compile_front_end.m"
        *top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_14 = top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_13;
#line 671 "mercury_compile_front_end.m"
        break;
#line 671 "mercury_compile_front_end.m"
      case (MR_Integer) 1:
#line 664 "mercury_compile_front_end.m"
        {
#line 665 "mercury_compile_front_end.m"
          {
#line 665 "mercury_compile_front_end.m"
            libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_front_end__Verbose_7, (MR_String) "% Dumping mode constraints...\n");
          }
#line 666 "mercury_compile_front_end.m"
          {
#line 666 "mercury_compile_front_end.m"
            libs__file_util__maybe_flush_output_3_p_0(top_level__mercury_compile_front_end__Verbose_7);
          }
#line 667 "mercury_compile_front_end.m"
          {
#line 667 "mercury_compile_front_end.m"
            top_level__mercury_compile_front_end__maybe_benchmark_modes__ho1_6_p_0((MR_String) "mode-constraints", top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_13, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_14);
          }
#line 669 "mercury_compile_front_end.m"
          {
#line 669 "mercury_compile_front_end.m"
            libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_front_end__Verbose_7, (MR_String) "% done.\n");
          }
#line 670 "mercury_compile_front_end.m"
          {
#line 670 "mercury_compile_front_end.m"
            libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_front_end__Stats_8);
          }
#line 664 "mercury_compile_front_end.m"
        }
#line 671 "mercury_compile_front_end.m"
        break;
#line 671 "mercury_compile_front_end.m"
    }
#line 660 "mercury_compile_front_end.m"
  }
#line 657 "mercury_compile_front_end.m"
}

#line 634 "mercury_compile_front_end.m"
static void MR_CALL 
top_level__mercury_compile_front_end__maybe_warn_about_unused_imports_8_p_0(
#line 634 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__Verbose_9,
#line 634 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__Stats_10,
#line 634 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_17,
#line 634 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_18,
#line 634 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_19,
#line 634 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_20)
#line 634 "mercury_compile_front_end.m"
{
#line 638 "mercury_compile_front_end.m"
  {
#line 638 "mercury_compile_front_end.m"
    MR_bool top_level__mercury_compile_front_end__succeeded;
#line 638 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__Globals_14;
#line 638 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__WarnUnusedImports_15;

#line 639 "mercury_compile_front_end.m"
    {
#line 639 "mercury_compile_front_end.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_17, &top_level__mercury_compile_front_end__Globals_14);
    }
#line 640 "mercury_compile_front_end.m"
    {
#line 640 "mercury_compile_front_end.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_front_end__Globals_14, (MR_Integer) 38, &top_level__mercury_compile_front_end__WarnUnusedImports_15);
    }
#line 651 "mercury_compile_front_end.m"
#line 651 "mercury_compile_front_end.m"
    switch (top_level__mercury_compile_front_end__WarnUnusedImports_15) {
#line 651 "mercury_compile_front_end.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 651 "mercury_compile_front_end.m"
      case (MR_Integer) 0:
#line 652 "mercury_compile_front_end.m"
        {
#line 652 "mercury_compile_front_end.m"
          *top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_18 = top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_17;
#line 652 "mercury_compile_front_end.m"
          *top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_20 = top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_19;
#line 652 "mercury_compile_front_end.m"
        }
#line 651 "mercury_compile_front_end.m"
        break;
#line 651 "mercury_compile_front_end.m"
      case (MR_Integer) 1:
#line 643 "mercury_compile_front_end.m"
        {
#line 643 "mercury_compile_front_end.m"
          MR_Word top_level__mercury_compile_front_end__UnusedImportSpecs_16;
#line 643 "mercury_compile_front_end.m"
          MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_24_24;
#line 643 "mercury_compile_front_end.m"
          MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_25_25;
#line 643 "mercury_compile_front_end.m"
          MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_29_29;

#line 644 "mercury_compile_front_end.m"
          {
#line 644 "mercury_compile_front_end.m"
            hlds__hlds_error_util__maybe_write_out_errors_8_p_0(top_level__mercury_compile_front_end__Verbose_9, top_level__mercury_compile_front_end__Globals_14, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_17, &top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_24_24, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_19, &top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_25_25);
          }
#line 645 "mercury_compile_front_end.m"
          {
#line 645 "mercury_compile_front_end.m"
            libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_front_end__Verbose_9, (MR_String) "% Checking for unused imports...");
          }
#line 646 "mercury_compile_front_end.m"
          {
#line 646 "mercury_compile_front_end.m"
            check_hlds__unused_imports__warn_about_unused_imports_2_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_24_24, &top_level__mercury_compile_front_end__UnusedImportSpecs_16);
          }
#line 647 "mercury_compile_front_end.m"
          {
#line 647 "mercury_compile_front_end.m"
            top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_29_29 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, top_level__mercury_compile_front_end__UnusedImportSpecs_16, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_25_25);
          }
#line 648 "mercury_compile_front_end.m"
          {
#line 648 "mercury_compile_front_end.m"
            hlds__hlds_error_util__maybe_write_out_errors_8_p_0(top_level__mercury_compile_front_end__Verbose_9, top_level__mercury_compile_front_end__Globals_14, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_24_24, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_18, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_29_29, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_20);
          }
#line 649 "mercury_compile_front_end.m"
          {
#line 649 "mercury_compile_front_end.m"
            libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_front_end__Verbose_9, (MR_String) " done.\n");
          }
#line 650 "mercury_compile_front_end.m"
          {
#line 650 "mercury_compile_front_end.m"
            libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_front_end__Stats_10);
          }
#line 643 "mercury_compile_front_end.m"
        }
#line 651 "mercury_compile_front_end.m"
        break;
#line 651 "mercury_compile_front_end.m"
    }
#line 638 "mercury_compile_front_end.m"
  }
#line 634 "mercury_compile_front_end.m"
}

#line 601 "mercury_compile_front_end.m"
static void MR_CALL 
top_level__mercury_compile_front_end__maybe_polymorphism_9_p_0(
#line 601 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__Verbose_10,
#line 601 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__Stats_11,
#line 601 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__SafeToContinue_12,
#line 601 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_19,
#line 601 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_20,
#line 601 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_21,
#line 601 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_22)
#line 601 "mercury_compile_front_end.m"
{
#line 605 "mercury_compile_front_end.m"
  {
#line 605 "mercury_compile_front_end.m"
    MR_bool top_level__mercury_compile_front_end__succeeded;
#line 605 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__Globals_16;
#line 605 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__VeryVerbose_17;
#line 605 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__PolySpecs_18;
#line 605 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_25_25;
#line 605 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_26_26;
#line 605 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_34_34;
#line 605 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_35_35;

#line 606 "mercury_compile_front_end.m"
    {
#line 606 "mercury_compile_front_end.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_19, &top_level__mercury_compile_front_end__Globals_16);
    }
#line 607 "mercury_compile_front_end.m"
    {
#line 607 "mercury_compile_front_end.m"
      hlds__hlds_error_util__maybe_write_out_errors_8_p_0(top_level__mercury_compile_front_end__Verbose_10, top_level__mercury_compile_front_end__Globals_16, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_19, &top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_25_25, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_21, &top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_26_26);
    }
#line 609 "mercury_compile_front_end.m"
    {
#line 609 "mercury_compile_front_end.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_front_end__Globals_16, (MR_Integer) 47, &top_level__mercury_compile_front_end__VeryVerbose_17);
    }
#line 620 "mercury_compile_front_end.m"
    {
#line 620 "mercury_compile_front_end.m"
      check_hlds__polymorphism__polymorphism_process_module_4_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_25_25, &top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_34_34, top_level__mercury_compile_front_end__SafeToContinue_12, &top_level__mercury_compile_front_end__PolySpecs_18);
    }
#line 621 "mercury_compile_front_end.m"
    {
#line 621 "mercury_compile_front_end.m"
      top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_35_35 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, top_level__mercury_compile_front_end__PolySpecs_18, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_26_26);
    }
#line 2742 "top_level.mercury_compile_front_end.c"
#line 2743 "top_level.mercury_compile_front_end.c"
    switch (top_level__mercury_compile_front_end__VeryVerbose_17) {
#line 2745 "top_level.mercury_compile_front_end.c"
      default: /*NOTREACHED*/ MR_assert(0);
#line 2747 "top_level.mercury_compile_front_end.c"
      case (MR_Integer) 0:
#line 2749 "top_level.mercury_compile_front_end.c"
        {
#line 612 "mercury_compile_front_end.m"
          {
#line 612 "mercury_compile_front_end.m"
            libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_front_end__Verbose_10, (MR_String) "% Transforming polymorphic unifications...");
          }
#line 619 "mercury_compile_front_end.m"
          {
#line 619 "mercury_compile_front_end.m"
            libs__file_util__maybe_flush_output_3_p_0(top_level__mercury_compile_front_end__Verbose_10);
          }
#line 624 "mercury_compile_front_end.m"
          {
#line 624 "mercury_compile_front_end.m"
            libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_front_end__Verbose_10, (MR_String) " done.\n");
          }
#line 2766 "top_level.mercury_compile_front_end.c"
        }
#line 2768 "top_level.mercury_compile_front_end.c"
        break;
#line 2770 "top_level.mercury_compile_front_end.c"
      case (MR_Integer) 1:
#line 2772 "top_level.mercury_compile_front_end.c"
        {
#line 616 "mercury_compile_front_end.m"
          {
#line 616 "mercury_compile_front_end.m"
            libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_front_end__Verbose_10, (MR_String) "% Transforming polymorphic unifications...\n");
          }
#line 619 "mercury_compile_front_end.m"
          {
#line 619 "mercury_compile_front_end.m"
            libs__file_util__maybe_flush_output_3_p_0(top_level__mercury_compile_front_end__Verbose_10);
          }
#line 627 "mercury_compile_front_end.m"
          {
#line 627 "mercury_compile_front_end.m"
            libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_front_end__Verbose_10, (MR_String) "% done.\n");
          }
#line 2789 "top_level.mercury_compile_front_end.c"
        }
#line 2791 "top_level.mercury_compile_front_end.c"
        break;
#line 2793 "top_level.mercury_compile_front_end.c"
    }
#line 629 "mercury_compile_front_end.m"
    {
#line 629 "mercury_compile_front_end.m"
      hlds__hlds_error_util__maybe_write_out_errors_8_p_0(top_level__mercury_compile_front_end__Verbose_10, top_level__mercury_compile_front_end__Globals_16, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_34_34, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_20, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_35_35, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_22);
    }
#line 630 "mercury_compile_front_end.m"
    {
#line 630 "mercury_compile_front_end.m"
      libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_front_end__Stats_11);
    }
#line 605 "mercury_compile_front_end.m"
  }
#line 601 "mercury_compile_front_end.m"
}

#line 585 "mercury_compile_front_end.m"
static void MR_CALL 
top_level__mercury_compile_front_end__subst_implementation_defined_literals_8_p_0(
#line 585 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__Verbose_9,
#line 585 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__Stats_10,
#line 585 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_15,
#line 585 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_16,
#line 585 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_17,
#line 585 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_18)
#line 585 "mercury_compile_front_end.m"
{
#line 589 "mercury_compile_front_end.m"
  {
#line 589 "mercury_compile_front_end.m"
    MR_bool top_level__mercury_compile_front_end__succeeded;
#line 589 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__Globals_14;
#line 589 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_21_21;

#line 590 "mercury_compile_front_end.m"
    {
#line 590 "mercury_compile_front_end.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_15, &top_level__mercury_compile_front_end__Globals_14);
    }
#line 591 "mercury_compile_front_end.m"
    {
#line 591 "mercury_compile_front_end.m"
      hlds__hlds_error_util__maybe_write_out_errors_8_p_0(top_level__mercury_compile_front_end__Verbose_9, top_level__mercury_compile_front_end__Globals_14, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_15, &top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_21_21, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_17, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_18);
    }
#line 592 "mercury_compile_front_end.m"
    {
#line 592 "mercury_compile_front_end.m"
      libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_front_end__Verbose_9, (MR_String) "% Substituting implementation-defined literals...\n");
    }
#line 594 "mercury_compile_front_end.m"
    {
#line 594 "mercury_compile_front_end.m"
      libs__file_util__maybe_flush_output_3_p_0(top_level__mercury_compile_front_end__Verbose_9);
    }
#line 595 "mercury_compile_front_end.m"
    {
#line 595 "mercury_compile_front_end.m"
      check_hlds__implementation_defined_literals__subst_impl_defined_literals_2_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_21_21, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_16);
    }
#line 596 "mercury_compile_front_end.m"
    {
#line 596 "mercury_compile_front_end.m"
      libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_front_end__Verbose_9, (MR_String) "% done.\n");
    }
#line 597 "mercury_compile_front_end.m"
    {
#line 597 "mercury_compile_front_end.m"
      libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_front_end__Stats_10);
    }
#line 589 "mercury_compile_front_end.m"
  }
#line 585 "mercury_compile_front_end.m"
}

#line 561 "mercury_compile_front_end.m"
static void MR_CALL 
top_level__mercury_compile_front_end__puritycheck_8_p_0(
#line 561 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__Verbose_9,
#line 561 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__Stats_10,
#line 561 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_17,
#line 561 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_18,
#line 561 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_19,
#line 561 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_20)
#line 561 "mercury_compile_front_end.m"
{
#line 564 "mercury_compile_front_end.m"
  {
#line 564 "mercury_compile_front_end.m"
    MR_bool top_level__mercury_compile_front_end__succeeded;
#line 564 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__PuritySpecs_14;
#line 564 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__Globals_15;
#line 564 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__PurityErrors_16;
#line 564 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_25_25;
#line 564 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_27_27;

#line 565 "mercury_compile_front_end.m"
    {
#line 565 "mercury_compile_front_end.m"
      libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_front_end__Verbose_9, (MR_String) "% Purity-checking clauses...\n");
    }
#line 566 "mercury_compile_front_end.m"
    {
#line 566 "mercury_compile_front_end.m"
      check_hlds__purity__puritycheck_module_4_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_17, &top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_25_25, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &top_level__mercury_compile_front_end__PuritySpecs_14);
    }
#line 567 "mercury_compile_front_end.m"
    {
#line 567 "mercury_compile_front_end.m"
      top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_27_27 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, top_level__mercury_compile_front_end__PuritySpecs_14, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_19);
    }
#line 568 "mercury_compile_front_end.m"
    {
#line 568 "mercury_compile_front_end.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_25_25, &top_level__mercury_compile_front_end__Globals_15);
    }
#line 569 "mercury_compile_front_end.m"
    {
#line 569 "mercury_compile_front_end.m"
      top_level__mercury_compile_front_end__PurityErrors_16 = parse_tree__error_util__contains_errors_2_f_0(top_level__mercury_compile_front_end__Globals_15, top_level__mercury_compile_front_end__PuritySpecs_14);
    }
#line 570 "mercury_compile_front_end.m"
    {
#line 570 "mercury_compile_front_end.m"
      hlds__hlds_error_util__maybe_write_out_errors_8_p_0(top_level__mercury_compile_front_end__Verbose_9, top_level__mercury_compile_front_end__Globals_15, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_25_25, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_18, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_27_27, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_20);
    }
#line 571 "mercury_compile_front_end.m"
    {
#line 571 "mercury_compile_front_end.m"
      libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_front_end__Stats_10);
    }
#line 576 "mercury_compile_front_end.m"
#line 576 "mercury_compile_front_end.m"
    switch (top_level__mercury_compile_front_end__PurityErrors_16) {
#line 576 "mercury_compile_front_end.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 576 "mercury_compile_front_end.m"
      case (MR_Integer) 0:
#line 577 "mercury_compile_front_end.m"
        {
#line 578 "mercury_compile_front_end.m"
          {
#line 578 "mercury_compile_front_end.m"
            libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_front_end__Verbose_9, (MR_String) "% Program is purity-correct.\n");
          }
#line 577 "mercury_compile_front_end.m"
        }
#line 576 "mercury_compile_front_end.m"
        break;
#line 576 "mercury_compile_front_end.m"
      case (MR_Integer) 1:
#line 573 "mercury_compile_front_end.m"
        {
#line 574 "mercury_compile_front_end.m"
          {
#line 574 "mercury_compile_front_end.m"
            libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_front_end__Verbose_9, (MR_String) "% Program contains purity error(s).\n");
          }
#line 573 "mercury_compile_front_end.m"
        }
#line 576 "mercury_compile_front_end.m"
        break;
#line 576 "mercury_compile_front_end.m"
    }
#line 581 "mercury_compile_front_end.m"
    {
#line 581 "mercury_compile_front_end.m"
      libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_front_end__Stats_10);
    }
#line 564 "mercury_compile_front_end.m"
  }
#line 561 "mercury_compile_front_end.m"
}

#line 468 "mercury_compile_front_end.m"
static void MR_CALL 
top_level__mercury_compile_front_end__frontend_pass_by_phases_9_p_0(
#line 468 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_27,
#line 468 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_28,
#line 468 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__FoundError_11,
#line 468 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_0_29,
#line 468 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_30,
#line 468 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_31,
#line 468 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_32)
#line 468 "mercury_compile_front_end.m"
{
#line 472 "mercury_compile_front_end.m"
  {
#line 472 "mercury_compile_front_end.m"
    MR_bool top_level__mercury_compile_front_end__succeeded;
#line 472 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__Globals_15;
#line 472 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__Verbose_16;
#line 472 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__Stats_17;
#line 472 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__PolySafeToContinue_18;
#line 472 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_37_37;
#line 472 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_38_38;
#line 472 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_42_42;
#line 472 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_118_118;

#line 473 "mercury_compile_front_end.m"
    {
#line 473 "mercury_compile_front_end.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_27, &top_level__mercury_compile_front_end__Globals_15);
    }
#line 474 "mercury_compile_front_end.m"
    {
#line 474 "mercury_compile_front_end.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_front_end__Globals_15, (MR_Integer) 46, &top_level__mercury_compile_front_end__Verbose_16);
    }
#line 475 "mercury_compile_front_end.m"
    {
#line 475 "mercury_compile_front_end.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_front_end__Globals_15, (MR_Integer) 56, &top_level__mercury_compile_front_end__Stats_17);
    }
#line 477 "mercury_compile_front_end.m"
    {
#line 477 "mercury_compile_front_end.m"
      top_level__mercury_compile_front_end__maybe_polymorphism_9_p_0(top_level__mercury_compile_front_end__Verbose_16, top_level__mercury_compile_front_end__Stats_17, &top_level__mercury_compile_front_end__PolySafeToContinue_18, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_27, &top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_37_37, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_31, &top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_38_38);
    }
#line 478 "mercury_compile_front_end.m"
    {
#line 478 "mercury_compile_front_end.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_37_37, (MR_Integer) 30, (MR_String) "polymorphism", top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_0_29, &top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_42_42);
    }
#line 483 "mercury_compile_front_end.m"
#line 483 "mercury_compile_front_end.m"
    switch (top_level__mercury_compile_front_end__PolySafeToContinue_18) {
#line 483 "mercury_compile_front_end.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 483 "mercury_compile_front_end.m"
      case (MR_Integer) 0:
#line 484 "mercury_compile_front_end.m"
        {
#line 484 "mercury_compile_front_end.m"
          MR_Word top_level__mercury_compile_front_end__FoundModeError_19;
#line 484 "mercury_compile_front_end.m"
          MR_Word top_level__mercury_compile_front_end__ModesSafeToContinue_20;
#line 484 "mercury_compile_front_end.m"
          MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_44_44;
#line 484 "mercury_compile_front_end.m"
          MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_45_45;
#line 484 "mercury_compile_front_end.m"
          MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_49_49;
#line 484 "mercury_compile_front_end.m"
          MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_51_51;
#line 484 "mercury_compile_front_end.m"
          MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_55_55;
#line 484 "mercury_compile_front_end.m"
          MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_57_57;
#line 484 "mercury_compile_front_end.m"
          MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_58_58;
#line 484 "mercury_compile_front_end.m"
          MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_62_62;

#line 486 "mercury_compile_front_end.m"
          {
#line 486 "mercury_compile_front_end.m"
            top_level__mercury_compile_front_end__maybe_warn_about_unused_imports_8_p_0(top_level__mercury_compile_front_end__Verbose_16, top_level__mercury_compile_front_end__Stats_17, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_37_37, &top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_44_44, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_38_38, &top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_45_45);
          }
#line 487 "mercury_compile_front_end.m"
          {
#line 487 "mercury_compile_front_end.m"
            hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_44_44, (MR_Integer) 31, (MR_String) "unused_imports", top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_42_42, &top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_49_49);
          }
#line 490 "mercury_compile_front_end.m"
          {
#line 490 "mercury_compile_front_end.m"
            top_level__mercury_compile_front_end__maybe_mode_constraints_6_p_0(top_level__mercury_compile_front_end__Verbose_16, top_level__mercury_compile_front_end__Stats_17, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_44_44, &top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_51_51);
          }
#line 491 "mercury_compile_front_end.m"
          {
#line 491 "mercury_compile_front_end.m"
            hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_51_51, (MR_Integer) 33, (MR_String) "mode_constraints", top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_49_49, &top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_55_55);
          }
#line 493 "mercury_compile_front_end.m"
          {
#line 493 "mercury_compile_front_end.m"
            top_level__mercury_compile_front_end__modecheck_10_p_0(top_level__mercury_compile_front_end__Verbose_16, top_level__mercury_compile_front_end__Stats_17, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_51_51, &top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_57_57, &top_level__mercury_compile_front_end__FoundModeError_19, &top_level__mercury_compile_front_end__ModesSafeToContinue_20, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_45_45, &top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_58_58);
          }
#line 495 "mercury_compile_front_end.m"
          {
#line 495 "mercury_compile_front_end.m"
            hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_57_57, (MR_Integer) 35, (MR_String) "modecheck", top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_55_55, &top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_62_62);
          }
#line 500 "mercury_compile_front_end.m"
#line 500 "mercury_compile_front_end.m"
          switch (top_level__mercury_compile_front_end__ModesSafeToContinue_20) {
#line 500 "mercury_compile_front_end.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 500 "mercury_compile_front_end.m"
            case (MR_Integer) 0:
#line 501 "mercury_compile_front_end.m"
              {
#line 501 "mercury_compile_front_end.m"
                MR_Word top_level__mercury_compile_front_end__FoundUniqError_21;
#line 501 "mercury_compile_front_end.m"
                MR_Word top_level__mercury_compile_front_end__FoundStratError_22;
#line 501 "mercury_compile_front_end.m"
                MR_Word top_level__mercury_compile_front_end__FoundOISUError_23;
#line 501 "mercury_compile_front_end.m"
                MR_Word top_level__mercury_compile_front_end__FoundTryError_24;
#line 501 "mercury_compile_front_end.m"
                MR_Integer top_level__mercury_compile_front_end__NumErrors_25;
#line 501 "mercury_compile_front_end.m"
                MR_Integer top_level__mercury_compile_front_end__ExitStatus_26;
#line 501 "mercury_compile_front_end.m"
                MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_64_64;
#line 501 "mercury_compile_front_end.m"
                MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_68_68;
#line 501 "mercury_compile_front_end.m"
                MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_70_70;
#line 501 "mercury_compile_front_end.m"
                MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_74_74;
#line 501 "mercury_compile_front_end.m"
                MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_76_76;
#line 501 "mercury_compile_front_end.m"
                MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_77_77;
#line 501 "mercury_compile_front_end.m"
                MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_81_81;
#line 501 "mercury_compile_front_end.m"
                MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_83_83;
#line 501 "mercury_compile_front_end.m"
                MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_84_84;
#line 501 "mercury_compile_front_end.m"
                MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_88_88;
#line 501 "mercury_compile_front_end.m"
                MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_90_90;
#line 501 "mercury_compile_front_end.m"
                MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_91_91;
#line 501 "mercury_compile_front_end.m"
                MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_95_95;
#line 501 "mercury_compile_front_end.m"
                MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_97_97;
#line 501 "mercury_compile_front_end.m"
                MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_98_98;
#line 501 "mercury_compile_front_end.m"
                MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_102_102;
#line 501 "mercury_compile_front_end.m"
                MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_104_104;
#line 501 "mercury_compile_front_end.m"
                MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_105_105;
#line 501 "mercury_compile_front_end.m"
                MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_109_109;
#line 501 "mercury_compile_front_end.m"
                MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_113_113;
#line 501 "mercury_compile_front_end.m"
                MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_114_114;

#line 503 "mercury_compile_front_end.m"
                {
#line 503 "mercury_compile_front_end.m"
                  top_level__mercury_compile_front_end__detect_switches_6_p_0(top_level__mercury_compile_front_end__Verbose_16, top_level__mercury_compile_front_end__Stats_17, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_57_57, &top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_64_64);
                }
#line 504 "mercury_compile_front_end.m"
                {
#line 504 "mercury_compile_front_end.m"
                  hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_64_64, (MR_Integer) 40, (MR_String) "switch_detect", top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_62_62, &top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_68_68);
                }
#line 506 "mercury_compile_front_end.m"
                {
#line 506 "mercury_compile_front_end.m"
                  top_level__mercury_compile_front_end__detect_cse_6_p_0(top_level__mercury_compile_front_end__Verbose_16, top_level__mercury_compile_front_end__Stats_17, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_64_64, &top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_70_70);
                }
#line 507 "mercury_compile_front_end.m"
                {
#line 507 "mercury_compile_front_end.m"
                  hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_70_70, (MR_Integer) 45, (MR_String) "cse", top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_68_68, &top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_74_74);
                }
#line 509 "mercury_compile_front_end.m"
                {
#line 509 "mercury_compile_front_end.m"
                  top_level__mercury_compile_front_end__check_determinism_8_p_0(top_level__mercury_compile_front_end__Verbose_16, top_level__mercury_compile_front_end__Stats_17, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_70_70, &top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_76_76, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_58_58, &top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_77_77);
                }
#line 510 "mercury_compile_front_end.m"
                {
#line 510 "mercury_compile_front_end.m"
                  hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_76_76, (MR_Integer) 50, (MR_String) "determinism", top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_74_74, &top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_81_81);
                }
#line 512 "mercury_compile_front_end.m"
                {
#line 512 "mercury_compile_front_end.m"
                  top_level__mercury_compile_front_end__check_unique_modes_9_p_0(top_level__mercury_compile_front_end__Verbose_16, top_level__mercury_compile_front_end__Stats_17, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_76_76, &top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_83_83, &top_level__mercury_compile_front_end__FoundUniqError_21, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_77_77, &top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_84_84);
                }
#line 514 "mercury_compile_front_end.m"
                {
#line 514 "mercury_compile_front_end.m"
                  hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_83_83, (MR_Integer) 55, (MR_String) "unique_modes", top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_81_81, &top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_88_88);
                }
#line 516 "mercury_compile_front_end.m"
                {
#line 516 "mercury_compile_front_end.m"
                  top_level__mercury_compile_front_end__check_stratification_9_p_0(top_level__mercury_compile_front_end__Verbose_16, top_level__mercury_compile_front_end__Stats_17, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_83_83, &top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_90_90, &top_level__mercury_compile_front_end__FoundStratError_22, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_84_84, &top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_91_91);
                }
#line 518 "mercury_compile_front_end.m"
                {
#line 518 "mercury_compile_front_end.m"
                  hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_90_90, (MR_Integer) 60, (MR_String) "stratification", top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_88_88, &top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_95_95);
                }
#line 520 "mercury_compile_front_end.m"
                {
#line 520 "mercury_compile_front_end.m"
                  top_level__mercury_compile_front_end__check_oisu_pragmas_9_p_0(top_level__mercury_compile_front_end__Verbose_16, top_level__mercury_compile_front_end__Stats_17, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_90_90, &top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_97_97, &top_level__mercury_compile_front_end__FoundOISUError_23, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_91_91, &top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_98_98);
                }
#line 522 "mercury_compile_front_end.m"
                {
#line 522 "mercury_compile_front_end.m"
                  hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_97_97, (MR_Integer) 61, (MR_String) "oisu", top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_95_95, &top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_102_102);
                }
#line 524 "mercury_compile_front_end.m"
                {
#line 524 "mercury_compile_front_end.m"
                  top_level__mercury_compile_front_end__process_try_goals_9_p_0(top_level__mercury_compile_front_end__Verbose_16, top_level__mercury_compile_front_end__Stats_17, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_97_97, &top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_104_104, &top_level__mercury_compile_front_end__FoundTryError_24, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_98_98, &top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_105_105);
                }
#line 526 "mercury_compile_front_end.m"
                {
#line 526 "mercury_compile_front_end.m"
                  hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_104_104, (MR_Integer) 62, (MR_String) "try", top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_102_102, &top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_109_109);
                }
#line 528 "mercury_compile_front_end.m"
                {
#line 528 "mercury_compile_front_end.m"
                  top_level__mercury_compile_front_end__maybe_simplify_10_p_0((MR_Integer) 1, (MR_Integer) 0, top_level__mercury_compile_front_end__Verbose_16, top_level__mercury_compile_front_end__Stats_17, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_104_104, &top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_113_113, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_105_105, &top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_114_114);
                }
#line 530 "mercury_compile_front_end.m"
                {
#line 530 "mercury_compile_front_end.m"
                  hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_113_113, (MR_Integer) 65, (MR_String) "frontend_simplify", top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_109_109, &top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_118_118);
                }
#line 532 "mercury_compile_front_end.m"
                {
#line 532 "mercury_compile_front_end.m"
                  top_level__mercury_compile_front_end__maybe_proc_statistics_9_p_0(top_level__mercury_compile_front_end__Verbose_16, top_level__mercury_compile_front_end__Stats_17, (MR_String) "AfterFrontEnd", top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_113_113, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_28, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_114_114, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_32);
                }
#line 536 "mercury_compile_front_end.m"
                {
#line 536 "mercury_compile_front_end.m"
                  hlds__hlds_module__module_info_get_num_errors_2_p_0(*top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_28, &top_level__mercury_compile_front_end__NumErrors_25);
                }
#line 537 "mercury_compile_front_end.m"
                {
#line 537 "mercury_compile_front_end.m"
                  mercury__io__get_exit_status_3_p_0(&top_level__mercury_compile_front_end__ExitStatus_26);
                }
#line 539 "mercury_compile_front_end.m"
                top_level__mercury_compile_front_end__succeeded = (top_level__mercury_compile_front_end__FoundModeError_19 == (MR_Integer) 0);
#line 539 "mercury_compile_front_end.m"
                if (top_level__mercury_compile_front_end__succeeded)
#line 539 "mercury_compile_front_end.m"
                  {
#line 540 "mercury_compile_front_end.m"
                    top_level__mercury_compile_front_end__succeeded = (top_level__mercury_compile_front_end__FoundUniqError_21 == (MR_Integer) 0);
#line 539 "mercury_compile_front_end.m"
                    if (top_level__mercury_compile_front_end__succeeded)
#line 539 "mercury_compile_front_end.m"
                      {
#line 541 "mercury_compile_front_end.m"
                        top_level__mercury_compile_front_end__succeeded = (top_level__mercury_compile_front_end__FoundStratError_22 == (MR_Integer) 0);
#line 539 "mercury_compile_front_end.m"
                        if (top_level__mercury_compile_front_end__succeeded)
#line 539 "mercury_compile_front_end.m"
                          {
#line 542 "mercury_compile_front_end.m"
                            top_level__mercury_compile_front_end__succeeded = (top_level__mercury_compile_front_end__FoundOISUError_23 == (MR_Integer) 0);
#line 539 "mercury_compile_front_end.m"
                            if (top_level__mercury_compile_front_end__succeeded)
#line 539 "mercury_compile_front_end.m"
                              {
#line 543 "mercury_compile_front_end.m"
                                top_level__mercury_compile_front_end__succeeded = (top_level__mercury_compile_front_end__FoundTryError_24 == (MR_Integer) 0);
#line 539 "mercury_compile_front_end.m"
                                if (top_level__mercury_compile_front_end__succeeded)
#line 539 "mercury_compile_front_end.m"
                                  {
#line 544 "mercury_compile_front_end.m"
                                    top_level__mercury_compile_front_end__succeeded = (top_level__mercury_compile_front_end__NumErrors_25 == (MR_Integer) 0);
#line 539 "mercury_compile_front_end.m"
                                    if (top_level__mercury_compile_front_end__succeeded)
#line 548 "mercury_compile_front_end.m"
                                      top_level__mercury_compile_front_end__succeeded = (top_level__mercury_compile_front_end__ExitStatus_26 == (MR_Integer) 0);
#line 539 "mercury_compile_front_end.m"
                                  }
#line 539 "mercury_compile_front_end.m"
                              }
#line 539 "mercury_compile_front_end.m"
                          }
#line 539 "mercury_compile_front_end.m"
                      }
#line 539 "mercury_compile_front_end.m"
                  }
#line 538 "mercury_compile_front_end.m"
                if (top_level__mercury_compile_front_end__succeeded)
#line 550 "mercury_compile_front_end.m"
                  *top_level__mercury_compile_front_end__FoundError_11 = (MR_Integer) 0;
#line 538 "mercury_compile_front_end.m"
                else
#line 552 "mercury_compile_front_end.m"
                  *top_level__mercury_compile_front_end__FoundError_11 = (MR_Integer) 1;
#line 501 "mercury_compile_front_end.m"
              }
#line 500 "mercury_compile_front_end.m"
              break;
#line 500 "mercury_compile_front_end.m"
            case (MR_Integer) 1:
#line 498 "mercury_compile_front_end.m"
              {
#line 499 "mercury_compile_front_end.m"
                *top_level__mercury_compile_front_end__FoundError_11 = (MR_Integer) 1;
#line 498 "mercury_compile_front_end.m"
                *top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_28 = top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_57_57;
#line 498 "mercury_compile_front_end.m"
                top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_118_118 = top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_62_62;
#line 498 "mercury_compile_front_end.m"
                *top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_32 = top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_58_58;
#line 498 "mercury_compile_front_end.m"
              }
#line 500 "mercury_compile_front_end.m"
              break;
#line 500 "mercury_compile_front_end.m"
          }
#line 484 "mercury_compile_front_end.m"
        }
#line 483 "mercury_compile_front_end.m"
        break;
#line 483 "mercury_compile_front_end.m"
      case (MR_Integer) 1:
#line 481 "mercury_compile_front_end.m"
        {
#line 482 "mercury_compile_front_end.m"
          *top_level__mercury_compile_front_end__FoundError_11 = (MR_Integer) 1;
#line 481 "mercury_compile_front_end.m"
          *top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_28 = top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_37_37;
#line 481 "mercury_compile_front_end.m"
          top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_118_118 = top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_42_42;
#line 481 "mercury_compile_front_end.m"
          *top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_32 = top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_38_38;
#line 481 "mercury_compile_front_end.m"
        }
#line 483 "mercury_compile_front_end.m"
        break;
#line 483 "mercury_compile_front_end.m"
    }
#line 556 "mercury_compile_front_end.m"
    {
#line 556 "mercury_compile_front_end.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(*top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_28, (MR_Integer) 99, (MR_String) "front_end", top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_118_118, top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_30);
    }
#line 472 "mercury_compile_front_end.m"
  }
#line 468 "mercury_compile_front_end.m"
}

#line 366 "mercury_compile_front_end.m"
static void MR_CALL 
top_level__mercury_compile_front_end__maybe_write_initial_optfile_9_p_0(
#line 366 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__MakeOptInt_10,
#line 366 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_36,
#line 366 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_37,
#line 366 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_0_38,
#line 366 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_39,
#line 366 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_40,
#line 366 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_41)
#line 366 "mercury_compile_front_end.m"
{
#line 370 "mercury_compile_front_end.m"
  {
#line 370 "mercury_compile_front_end.m"
    MR_bool top_level__mercury_compile_front_end__succeeded;
#line 370 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__Globals_15;
#line 370 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__IntermodOpt_16;
#line 370 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__IntermodAnalysis_17;
#line 370 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__IntermodArgs_18;
#line 370 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__IntermodDirs_19;
#line 370 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__UseOptFiles_20;
#line 370 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__Termination_21;
#line 370 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__Termination2_22;
#line 370 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__SharingAnalysis_23;
#line 370 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__ReuseAnalysis_24;
#line 370 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__ExceptionAnalysis_25;
#line 370 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__ClosureAnalysis_26;
#line 370 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__TrailingAnalysis_27;
#line 370 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__TablingAnalysis_28;

#line 371 "mercury_compile_front_end.m"
    {
#line 371 "mercury_compile_front_end.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_36, &top_level__mercury_compile_front_end__Globals_15);
    }
#line 372 "mercury_compile_front_end.m"
    {
#line 372 "mercury_compile_front_end.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_front_end__Globals_15, (MR_Integer) 321, &top_level__mercury_compile_front_end__IntermodOpt_16);
    }
#line 373 "mercury_compile_front_end.m"
    {
#line 373 "mercury_compile_front_end.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_front_end__Globals_15, (MR_Integer) 326, &top_level__mercury_compile_front_end__IntermodAnalysis_17);
    }
#line 375 "mercury_compile_front_end.m"
    {
#line 375 "mercury_compile_front_end.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_front_end__Globals_15, (MR_Integer) 346, &top_level__mercury_compile_front_end__IntermodArgs_18);
    }
#line 376 "mercury_compile_front_end.m"
    {
#line 376 "mercury_compile_front_end.m"
      libs__globals__lookup_accumulating_option_3_p_0(top_level__mercury_compile_front_end__Globals_15, (MR_Integer) 636, &top_level__mercury_compile_front_end__IntermodDirs_19);
    }
#line 378 "mercury_compile_front_end.m"
    {
#line 378 "mercury_compile_front_end.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_front_end__Globals_15, (MR_Integer) 323, &top_level__mercury_compile_front_end__UseOptFiles_20);
    }
#line 379 "mercury_compile_front_end.m"
    {
#line 379 "mercury_compile_front_end.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_front_end__Globals_15, (MR_Integer) 409, &top_level__mercury_compile_front_end__Termination_21);
    }
#line 380 "mercury_compile_front_end.m"
    {
#line 380 "mercury_compile_front_end.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_front_end__Globals_15, (MR_Integer) 416, &top_level__mercury_compile_front_end__Termination2_22);
    }
#line 381 "mercury_compile_front_end.m"
    {
#line 381 "mercury_compile_front_end.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_front_end__Globals_15, (MR_Integer) 401, &top_level__mercury_compile_front_end__SharingAnalysis_23);
    }
#line 383 "mercury_compile_front_end.m"
    {
#line 383 "mercury_compile_front_end.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_front_end__Globals_15, (MR_Integer) 403, &top_level__mercury_compile_front_end__ReuseAnalysis_24);
    }
#line 385 "mercury_compile_front_end.m"
    {
#line 385 "mercury_compile_front_end.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_front_end__Globals_15, (MR_Integer) 424, &top_level__mercury_compile_front_end__ExceptionAnalysis_25);
    }
#line 387 "mercury_compile_front_end.m"
    {
#line 387 "mercury_compile_front_end.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_front_end__Globals_15, (MR_Integer) 425, &top_level__mercury_compile_front_end__ClosureAnalysis_26);
    }
#line 389 "mercury_compile_front_end.m"
    {
#line 389 "mercury_compile_front_end.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_front_end__Globals_15, (MR_Integer) 388, &top_level__mercury_compile_front_end__TrailingAnalysis_27);
    }
#line 391 "mercury_compile_front_end.m"
    {
#line 391 "mercury_compile_front_end.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_front_end__Globals_15, (MR_Integer) 391, &top_level__mercury_compile_front_end__TablingAnalysis_28);
    }
#line 434 "mercury_compile_front_end.m"
#line 434 "mercury_compile_front_end.m"
    switch (top_level__mercury_compile_front_end__MakeOptInt_10) {
#line 434 "mercury_compile_front_end.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 434 "mercury_compile_front_end.m"
      case (MR_Integer) 0:
#line 435 "mercury_compile_front_end.m"
        {
#line 438 "mercury_compile_front_end.m"
          top_level__mercury_compile_front_end__succeeded = (top_level__mercury_compile_front_end__IntermodOpt_16 == (MR_Integer) 1);
#line 3511 "top_level.mercury_compile_front_end.c"
          if (top_level__mercury_compile_front_end__succeeded)
#line 460 "mercury_compile_front_end.m"
            {
#line 460 "mercury_compile_front_end.m"
              transform_hlds__intermod__adjust_pred_status_for_opt_export_2_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_36, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_37);
            }
#line 3518 "top_level.mercury_compile_front_end.c"
          else
#line 3520 "top_level.mercury_compile_front_end.c"
            {
#line 440 "mercury_compile_front_end.m"
              top_level__mercury_compile_front_end__succeeded = (top_level__mercury_compile_front_end__IntermodAnalysis_17 == (MR_Integer) 1);
#line 3524 "top_level.mercury_compile_front_end.c"
              if (top_level__mercury_compile_front_end__succeeded)
#line 460 "mercury_compile_front_end.m"
                {
#line 460 "mercury_compile_front_end.m"
                  transform_hlds__intermod__adjust_pred_status_for_opt_export_2_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_36, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_37);
                }
#line 3531 "top_level.mercury_compile_front_end.c"
              else
#line 3533 "top_level.mercury_compile_front_end.c"
                {
#line 442 "mercury_compile_front_end.m"
                  top_level__mercury_compile_front_end__succeeded = (top_level__mercury_compile_front_end__UseOptFiles_20 == (MR_Integer) 1);
#line 3537 "top_level.mercury_compile_front_end.c"
                  if (top_level__mercury_compile_front_end__succeeded)
#line 3539 "top_level.mercury_compile_front_end.c"
                    {
#line 3541 "top_level.mercury_compile_front_end.c"
                      MR_Word top_level__mercury_compile_front_end__Found_33;
#line 3543 "top_level.mercury_compile_front_end.c"
                      MR_Word top_level__mercury_compile_front_end__ModuleName_78;
#line 3545 "top_level.mercury_compile_front_end.c"
                      MR_String top_level__mercury_compile_front_end__OptName_79;

#line 443 "mercury_compile_front_end.m"
                      {
#line 443 "mercury_compile_front_end.m"
                        hlds__hlds_module__module_info_get_name_2_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_36, &top_level__mercury_compile_front_end__ModuleName_78);
                      }
#line 444 "mercury_compile_front_end.m"
                      {
#line 444 "mercury_compile_front_end.m"
                        parse_tree__file_names__module_name_to_search_file_name_6_p_0(top_level__mercury_compile_front_end__Globals_15, top_level__mercury_compile_front_end__ModuleName_78, (MR_String) ".opt", &top_level__mercury_compile_front_end__OptName_79);
                      }
#line 446 "mercury_compile_front_end.m"
                      {
#line 446 "mercury_compile_front_end.m"
                        libs__file_util__search_for_file_returning_dir_6_p_0((MR_Integer) 1, top_level__mercury_compile_front_end__IntermodDirs_19, top_level__mercury_compile_front_end__OptName_79, &top_level__mercury_compile_front_end__Found_33);
                      }
#line 3563 "top_level.mercury_compile_front_end.c"
                      if (((MR_tag((MR_Word) top_level__mercury_compile_front_end__Found_33)) == (MR_mktag((MR_Integer) 1))))
#line 462 "mercury_compile_front_end.m"
                        *top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_37 = top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_36;
#line 3567 "top_level.mercury_compile_front_end.c"
                      else
#line 460 "mercury_compile_front_end.m"
                        {
#line 460 "mercury_compile_front_end.m"
                          transform_hlds__intermod__adjust_pred_status_for_opt_export_2_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_36, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_37);
                        }
#line 3574 "top_level.mercury_compile_front_end.c"
                    }
#line 3576 "top_level.mercury_compile_front_end.c"
                  else
#line 462 "mercury_compile_front_end.m"
                    *top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_37 = top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_36;
#line 3580 "top_level.mercury_compile_front_end.c"
                }
#line 3582 "top_level.mercury_compile_front_end.c"
            }
#line 435 "mercury_compile_front_end.m"
          *top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_39 = top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_0_38;
#line 435 "mercury_compile_front_end.m"
          *top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_41 = top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_40;
#line 435 "mercury_compile_front_end.m"
        }
#line 434 "mercury_compile_front_end.m"
        break;
#line 434 "mercury_compile_front_end.m"
      case (MR_Integer) 1:
#line 393 "mercury_compile_front_end.m"
        {
#line 393 "mercury_compile_front_end.m"
          MR_Word top_level__mercury_compile_front_end__ModuleName_30;
#line 393 "mercury_compile_front_end.m"
          MR_String top_level__mercury_compile_front_end__OptName_31;
#line 393 "mercury_compile_front_end.m"
          MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_62_62;

#line 394 "mercury_compile_front_end.m"
          {
#line 394 "mercury_compile_front_end.m"
            transform_hlds__intermod__write_initial_opt_file_4_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_36, &top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_62_62);
          }
#line 404 "mercury_compile_front_end.m"
          top_level__mercury_compile_front_end__succeeded = (top_level__mercury_compile_front_end__IntermodAnalysis_17 == (MR_Integer) 0);
#line 404 "mercury_compile_front_end.m"
          if (top_level__mercury_compile_front_end__succeeded)
#line 404 "mercury_compile_front_end.m"
            {
#line 405 "mercury_compile_front_end.m"
              top_level__mercury_compile_front_end__succeeded = (top_level__mercury_compile_front_end__IntermodArgs_18 == (MR_Integer) 1);
#line 406 "mercury_compile_front_end.m"
              if (!(top_level__mercury_compile_front_end__succeeded))
#line 406 "mercury_compile_front_end.m"
                {
#line 406 "mercury_compile_front_end.m"
                  top_level__mercury_compile_front_end__succeeded = (top_level__mercury_compile_front_end__Termination_21 == (MR_Integer) 1);
#line 406 "mercury_compile_front_end.m"
                  if (!(top_level__mercury_compile_front_end__succeeded))
#line 406 "mercury_compile_front_end.m"
                    {
#line 407 "mercury_compile_front_end.m"
                      top_level__mercury_compile_front_end__succeeded = (top_level__mercury_compile_front_end__Termination2_22 == (MR_Integer) 1);
#line 406 "mercury_compile_front_end.m"
                      if (!(top_level__mercury_compile_front_end__succeeded))
#line 406 "mercury_compile_front_end.m"
                        {
#line 408 "mercury_compile_front_end.m"
                          top_level__mercury_compile_front_end__succeeded = (top_level__mercury_compile_front_end__ExceptionAnalysis_25 == (MR_Integer) 1);
#line 406 "mercury_compile_front_end.m"
                          if (!(top_level__mercury_compile_front_end__succeeded))
#line 406 "mercury_compile_front_end.m"
                            {
#line 409 "mercury_compile_front_end.m"
                              top_level__mercury_compile_front_end__succeeded = (top_level__mercury_compile_front_end__TrailingAnalysis_27 == (MR_Integer) 1);
#line 406 "mercury_compile_front_end.m"
                              if (!(top_level__mercury_compile_front_end__succeeded))
#line 406 "mercury_compile_front_end.m"
                                {
#line 410 "mercury_compile_front_end.m"
                                  top_level__mercury_compile_front_end__succeeded = (top_level__mercury_compile_front_end__TablingAnalysis_28 == (MR_Integer) 1);
#line 406 "mercury_compile_front_end.m"
                                  if (!(top_level__mercury_compile_front_end__succeeded))
#line 406 "mercury_compile_front_end.m"
                                    {
#line 411 "mercury_compile_front_end.m"
                                      top_level__mercury_compile_front_end__succeeded = (top_level__mercury_compile_front_end__ClosureAnalysis_26 == (MR_Integer) 1);
#line 406 "mercury_compile_front_end.m"
                                      if (!(top_level__mercury_compile_front_end__succeeded))
#line 406 "mercury_compile_front_end.m"
                                        {
#line 412 "mercury_compile_front_end.m"
                                          top_level__mercury_compile_front_end__succeeded = (top_level__mercury_compile_front_end__SharingAnalysis_23 == (MR_Integer) 1);
#line 406 "mercury_compile_front_end.m"
                                          if (!(top_level__mercury_compile_front_end__succeeded))
#line 413 "mercury_compile_front_end.m"
                                            top_level__mercury_compile_front_end__succeeded = (top_level__mercury_compile_front_end__ReuseAnalysis_24 == (MR_Integer) 1);
#line 406 "mercury_compile_front_end.m"
                                        }
#line 406 "mercury_compile_front_end.m"
                                    }
#line 406 "mercury_compile_front_end.m"
                                }
#line 406 "mercury_compile_front_end.m"
                            }
#line 406 "mercury_compile_front_end.m"
                        }
#line 406 "mercury_compile_front_end.m"
                    }
#line 406 "mercury_compile_front_end.m"
                }
#line 404 "mercury_compile_front_end.m"
            }
#line 403 "mercury_compile_front_end.m"
          if (top_level__mercury_compile_front_end__succeeded)
#line 418 "mercury_compile_front_end.m"
            {
#line 418 "mercury_compile_front_end.m"
              MR_Word top_level__mercury_compile_front_end__FoundModeError_29;
#line 418 "mercury_compile_front_end.m"
              MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_64_64;

#line 417 "mercury_compile_front_end.m"
              {
#line 417 "mercury_compile_front_end.m"
                top_level__mercury_compile_front_end__frontend_pass_by_phases_9_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_62_62, &top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_64_64, &top_level__mercury_compile_front_end__FoundModeError_29, top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_0_38, top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_39, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_40, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_41);
              }
#line 422 "mercury_compile_front_end.m"
#line 422 "mercury_compile_front_end.m"
              switch (top_level__mercury_compile_front_end__FoundModeError_29) {
#line 422 "mercury_compile_front_end.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 422 "mercury_compile_front_end.m"
                case (MR_Integer) 0:
#line 421 "mercury_compile_front_end.m"
                  {
#line 421 "mercury_compile_front_end.m"
                    top_level__mercury_compile_middle_passes__middle_pass_for_opt_file_4_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_64_64, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_37);
                  }
#line 422 "mercury_compile_front_end.m"
                  break;
#line 422 "mercury_compile_front_end.m"
                case (MR_Integer) 1:
#line 423 "mercury_compile_front_end.m"
                  {
#line 424 "mercury_compile_front_end.m"
                    {
#line 424 "mercury_compile_front_end.m"
                      mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
                    }
#line 423 "mercury_compile_front_end.m"
                    *top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_37 = top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_64_64;
#line 423 "mercury_compile_front_end.m"
                  }
#line 422 "mercury_compile_front_end.m"
                  break;
#line 422 "mercury_compile_front_end.m"
              }
#line 418 "mercury_compile_front_end.m"
            }
#line 403 "mercury_compile_front_end.m"
          else
#line 427 "mercury_compile_front_end.m"
            {
#line 427 "mercury_compile_front_end.m"
              *top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_41 = top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_40;
#line 427 "mercury_compile_front_end.m"
              *top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_39 = top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_0_38;
#line 427 "mercury_compile_front_end.m"
              *top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_37 = top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_62_62;
#line 427 "mercury_compile_front_end.m"
            }
#line 429 "mercury_compile_front_end.m"
          {
#line 429 "mercury_compile_front_end.m"
            hlds__hlds_module__module_info_get_name_2_p_0(*top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_37, &top_level__mercury_compile_front_end__ModuleName_30);
          }
#line 430 "mercury_compile_front_end.m"
          {
#line 430 "mercury_compile_front_end.m"
            parse_tree__file_names__module_name_to_file_name_7_p_0(top_level__mercury_compile_front_end__Globals_15, top_level__mercury_compile_front_end__ModuleName_30, (MR_String) ".opt", (MR_Integer) 0, &top_level__mercury_compile_front_end__OptName_31);
          }
#line 432 "mercury_compile_front_end.m"
          {
#line 432 "mercury_compile_front_end.m"
            parse_tree__module_cmds__update_interface_4_p_0(top_level__mercury_compile_front_end__Globals_15, top_level__mercury_compile_front_end__OptName_31);
          }
#line 433 "mercury_compile_front_end.m"
          {
#line 433 "mercury_compile_front_end.m"
            parse_tree__module_cmds__touch_interface_datestamp_5_p_0(top_level__mercury_compile_front_end__Globals_15, top_level__mercury_compile_front_end__ModuleName_30, (MR_String) ".optdate");
          }
#line 393 "mercury_compile_front_end.m"
        }
#line 434 "mercury_compile_front_end.m"
        break;
#line 434 "mercury_compile_front_end.m"
    }
#line 370 "mercury_compile_front_end.m"
  }
#line 366 "mercury_compile_front_end.m"
}

#line 175 "mercury_compile_front_end.m"
static void MR_CALL 
top_level__mercury_compile_front_end__frontend_pass_after_typeclass_check_11_p_0(
#line 175 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__FoundUndefModeError_12,
#line 175 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_FoundError_0_39,
#line 175 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_FoundError_40,
#line 175 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_41,
#line 175 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_42,
#line 175 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_0_43,
#line 175 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_44,
#line 175 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_45,
#line 175 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_46)
#line 175 "mercury_compile_front_end.m"
{
#line 180 "mercury_compile_front_end.m"
  {
#line 180 "mercury_compile_front_end.m"
    MR_bool top_level__mercury_compile_front_end__succeeded;
#line 180 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__TypeCtorInfo_156_156;
#line 180 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__Globals_18;
#line 180 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__Verbose_19;
#line 180 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__Stats_20;
#line 180 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__IntermodOpt_21;
#line 180 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__IntermodAnalysis_22;
#line 180 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__UseOptFiles_23;
#line 180 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__MakeOptInt_24;
#line 180 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__TypeCheckConstraints_25;
#line 180 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__WarnInstsWithNoMatchingType_26;
#line 180 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__TypeCheckSpecs_27;
#line 180 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__ExceededTypeCheckIterationLimit_28;
#line 180 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__FoundTypeError_29;
#line 180 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_62_62;
#line 180 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_63_63;
#line 180 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_69_69;
#line 180 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_79_79;
#line 180 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_80_80;
#line 180 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_86_86;
#line 180 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_88_88;
#line 180 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_89_89;
#line 180 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_96_96;
#line 180 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_97_97;
#line 180 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_98_98;
#line 180 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_99_99;
#line 180 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_108_108;

#line 181 "mercury_compile_front_end.m"
    {
#line 181 "mercury_compile_front_end.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_41, &top_level__mercury_compile_front_end__Globals_18);
    }
#line 182 "mercury_compile_front_end.m"
    {
#line 182 "mercury_compile_front_end.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_front_end__Globals_18, (MR_Integer) 46, &top_level__mercury_compile_front_end__Verbose_19);
    }
#line 183 "mercury_compile_front_end.m"
    {
#line 183 "mercury_compile_front_end.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_front_end__Globals_18, (MR_Integer) 56, &top_level__mercury_compile_front_end__Stats_20);
    }
#line 184 "mercury_compile_front_end.m"
    {
#line 184 "mercury_compile_front_end.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_front_end__Globals_18, (MR_Integer) 321, &top_level__mercury_compile_front_end__IntermodOpt_21);
    }
#line 185 "mercury_compile_front_end.m"
    {
#line 185 "mercury_compile_front_end.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_front_end__Globals_18, (MR_Integer) 326, &top_level__mercury_compile_front_end__IntermodAnalysis_22);
    }
#line 187 "mercury_compile_front_end.m"
    {
#line 187 "mercury_compile_front_end.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_front_end__Globals_18, (MR_Integer) 323, &top_level__mercury_compile_front_end__UseOptFiles_23);
    }
#line 188 "mercury_compile_front_end.m"
    {
#line 188 "mercury_compile_front_end.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_front_end__Globals_18, (MR_Integer) 87, &top_level__mercury_compile_front_end__MakeOptInt_24);
    }
#line 190 "mercury_compile_front_end.m"
    {
#line 190 "mercury_compile_front_end.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_front_end__Globals_18, (MR_Integer) 294, &top_level__mercury_compile_front_end__TypeCheckConstraints_25);
    }
#line 193 "mercury_compile_front_end.m"
    top_level__mercury_compile_front_end__succeeded = (top_level__mercury_compile_front_end__IntermodOpt_21 == (MR_Integer) 1);
#line 194 "mercury_compile_front_end.m"
    if (!(top_level__mercury_compile_front_end__succeeded))
#line 194 "mercury_compile_front_end.m"
      {
#line 194 "mercury_compile_front_end.m"
        top_level__mercury_compile_front_end__succeeded = (top_level__mercury_compile_front_end__IntermodAnalysis_22 == (MR_Integer) 1);
#line 194 "mercury_compile_front_end.m"
        if (!(top_level__mercury_compile_front_end__succeeded))
#line 195 "mercury_compile_front_end.m"
          top_level__mercury_compile_front_end__succeeded = (top_level__mercury_compile_front_end__UseOptFiles_23 == (MR_Integer) 1);
#line 194 "mercury_compile_front_end.m"
      }
#line 196 "mercury_compile_front_end.m"
    if (top_level__mercury_compile_front_end__succeeded)
#line 197 "mercury_compile_front_end.m"
      top_level__mercury_compile_front_end__succeeded = (top_level__mercury_compile_front_end__MakeOptInt_24 == (MR_Integer) 0);
#line 192 "mercury_compile_front_end.m"
    if (top_level__mercury_compile_front_end__succeeded)
#line 203 "mercury_compile_front_end.m"
      {
#line 203 "mercury_compile_front_end.m"
        MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_56_56;
#line 203 "mercury_compile_front_end.m"
        MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_57_57;
#line 203 "mercury_compile_front_end.m"
        MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_61_61;

#line 203 "mercury_compile_front_end.m"
        {
#line 203 "mercury_compile_front_end.m"
          hlds__hlds_error_util__maybe_write_out_errors_8_p_0(top_level__mercury_compile_front_end__Verbose_19, top_level__mercury_compile_front_end__Globals_18, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_41, &top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_56_56, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_45, &top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_57_57);
        }
#line 204 "mercury_compile_front_end.m"
        {
#line 204 "mercury_compile_front_end.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_front_end__Verbose_19, (MR_String) "% Eliminating dead predicates... ");
        }
#line 205 "mercury_compile_front_end.m"
        {
#line 205 "mercury_compile_front_end.m"
          transform_hlds__dead_proc_elim__dead_pred_elim_2_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_56_56, &top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_61_61);
        }
#line 206 "mercury_compile_front_end.m"
        {
#line 206 "mercury_compile_front_end.m"
          hlds__hlds_error_util__maybe_write_out_errors_8_p_0(top_level__mercury_compile_front_end__Verbose_19, top_level__mercury_compile_front_end__Globals_18, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_61_61, &top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_62_62, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_57_57, &top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_63_63);
        }
#line 207 "mercury_compile_front_end.m"
        {
#line 207 "mercury_compile_front_end.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_front_end__Verbose_19, (MR_String) "done.\n");
        }
#line 208 "mercury_compile_front_end.m"
        {
#line 208 "mercury_compile_front_end.m"
          hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_62_62, (MR_Integer) 10, (MR_String) "dead_pred_elim", top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_0_43, &top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_69_69);
        }
#line 203 "mercury_compile_front_end.m"
      }
#line 192 "mercury_compile_front_end.m"
    else
#line 210 "mercury_compile_front_end.m"
      {
#line 210 "mercury_compile_front_end.m"
        top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_63_63 = top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_45;
#line 210 "mercury_compile_front_end.m"
        top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_69_69 = top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_0_43;
#line 210 "mercury_compile_front_end.m"
        top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_62_62 = top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_41;
#line 210 "mercury_compile_front_end.m"
      }
#line 213 "mercury_compile_front_end.m"
    {
#line 213 "mercury_compile_front_end.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_front_end__Globals_18, (MR_Integer) 37, &top_level__mercury_compile_front_end__WarnInstsWithNoMatchingType_26);
    }
#line 225 "mercury_compile_front_end.m"
#line 225 "mercury_compile_front_end.m"
    switch (top_level__mercury_compile_front_end__WarnInstsWithNoMatchingType_26) {
#line 225 "mercury_compile_front_end.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 225 "mercury_compile_front_end.m"
      case (MR_Integer) 0:
#line 226 "mercury_compile_front_end.m"
        {
#line 226 "mercury_compile_front_end.m"
          top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_79_79 = top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_62_62;
#line 226 "mercury_compile_front_end.m"
          top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_86_86 = top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_69_69;
#line 226 "mercury_compile_front_end.m"
          top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_80_80 = top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_63_63;
#line 226 "mercury_compile_front_end.m"
        }
#line 225 "mercury_compile_front_end.m"
        break;
#line 225 "mercury_compile_front_end.m"
      case (MR_Integer) 1:
#line 216 "mercury_compile_front_end.m"
        {
#line 216 "mercury_compile_front_end.m"
          MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_72_72;
#line 216 "mercury_compile_front_end.m"
          MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_73_73;
#line 216 "mercury_compile_front_end.m"
          MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_77_77;
#line 216 "mercury_compile_front_end.m"
          MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_78_78;

#line 217 "mercury_compile_front_end.m"
          {
#line 217 "mercury_compile_front_end.m"
            hlds__hlds_error_util__maybe_write_out_errors_8_p_0(top_level__mercury_compile_front_end__Verbose_19, top_level__mercury_compile_front_end__Globals_18, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_62_62, &top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_72_72, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_63_63, &top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_73_73);
          }
#line 218 "mercury_compile_front_end.m"
          {
#line 218 "mercury_compile_front_end.m"
            libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_front_end__Verbose_19, (MR_String) "% Checking that insts have matching types... ");
          }
#line 220 "mercury_compile_front_end.m"
          {
#line 220 "mercury_compile_front_end.m"
            check_hlds__inst_check__check_insts_have_matching_types_4_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_72_72, &top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_77_77, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_73_73, &top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_78_78);
          }
#line 221 "mercury_compile_front_end.m"
          {
#line 221 "mercury_compile_front_end.m"
            hlds__hlds_error_util__maybe_write_out_errors_8_p_0(top_level__mercury_compile_front_end__Verbose_19, top_level__mercury_compile_front_end__Globals_18, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_77_77, &top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_79_79, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_78_78, &top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_80_80);
          }
#line 222 "mercury_compile_front_end.m"
          {
#line 222 "mercury_compile_front_end.m"
            libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_front_end__Verbose_19, (MR_String) "done.\n");
          }
#line 223 "mercury_compile_front_end.m"
          {
#line 223 "mercury_compile_front_end.m"
            hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_79_79, (MR_Integer) 12, (MR_String) "warn_insts_without_matching_type", top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_69_69, &top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_86_86);
          }
#line 216 "mercury_compile_front_end.m"
        }
#line 225 "mercury_compile_front_end.m"
        break;
#line 225 "mercury_compile_front_end.m"
    }
#line 230 "mercury_compile_front_end.m"
    {
#line 230 "mercury_compile_front_end.m"
      hlds__hlds_error_util__maybe_write_out_errors_8_p_0(top_level__mercury_compile_front_end__Verbose_19, top_level__mercury_compile_front_end__Globals_18, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_79_79, &top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_88_88, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_80_80, &top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_89_89);
    }
#line 231 "mercury_compile_front_end.m"
    {
#line 231 "mercury_compile_front_end.m"
      libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_front_end__Verbose_19, (MR_String) "% Type-checking...\n");
    }
#line 232 "mercury_compile_front_end.m"
    {
#line 232 "mercury_compile_front_end.m"
      libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_front_end__Verbose_19, (MR_String) "% Type-checking clauses...\n");
    }
#line 237 "mercury_compile_front_end.m"
#line 237 "mercury_compile_front_end.m"
    switch (top_level__mercury_compile_front_end__TypeCheckConstraints_25) {
#line 237 "mercury_compile_front_end.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 237 "mercury_compile_front_end.m"
      case (MR_Integer) 0:
#line 239 "mercury_compile_front_end.m"
        {
#line 239 "mercury_compile_front_end.m"
          check_hlds__typecheck__typecheck_module_4_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_88_88, &top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_96_96, &top_level__mercury_compile_front_end__TypeCheckSpecs_27, &top_level__mercury_compile_front_end__ExceededTypeCheckIterationLimit_28);
        }
#line 237 "mercury_compile_front_end.m"
        break;
#line 237 "mercury_compile_front_end.m"
      case (MR_Integer) 1:
#line 234 "mercury_compile_front_end.m"
        {
#line 235 "mercury_compile_front_end.m"
          {
#line 235 "mercury_compile_front_end.m"
            check_hlds__type_constraints__typecheck_constraints_3_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_88_88, &top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_96_96, &top_level__mercury_compile_front_end__TypeCheckSpecs_27);
          }
#line 236 "mercury_compile_front_end.m"
          top_level__mercury_compile_front_end__ExceededTypeCheckIterationLimit_28 = (MR_Integer) 0;
#line 234 "mercury_compile_front_end.m"
        }
#line 237 "mercury_compile_front_end.m"
        break;
#line 237 "mercury_compile_front_end.m"
    }
#line 4080 "top_level.mercury_compile_front_end.c"
    top_level__mercury_compile_front_end__TypeCtorInfo_156_156 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0;
#line 242 "mercury_compile_front_end.m"
    {
#line 242 "mercury_compile_front_end.m"
      top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_97_97 = mercury__list__f_43_43_2_f_0(top_level__mercury_compile_front_end__TypeCtorInfo_156_156, top_level__mercury_compile_front_end__TypeCheckSpecs_27, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_89_89);
    }
#line 243 "mercury_compile_front_end.m"
    {
#line 243 "mercury_compile_front_end.m"
      hlds__hlds_error_util__maybe_write_out_errors_8_p_0(top_level__mercury_compile_front_end__Verbose_19, top_level__mercury_compile_front_end__Globals_18, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_96_96, &top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_98_98, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_97_97, &top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_99_99);
    }
#line 244 "mercury_compile_front_end.m"
    {
#line 244 "mercury_compile_front_end.m"
      top_level__mercury_compile_front_end__FoundTypeError_29 = parse_tree__error_util__contains_errors_2_f_0(top_level__mercury_compile_front_end__Globals_18, top_level__mercury_compile_front_end__TypeCheckSpecs_27);
    }
#line 249 "mercury_compile_front_end.m"
#line 249 "mercury_compile_front_end.m"
    switch (top_level__mercury_compile_front_end__FoundTypeError_29) {
#line 249 "mercury_compile_front_end.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 249 "mercury_compile_front_end.m"
      case (MR_Integer) 0:
#line 250 "mercury_compile_front_end.m"
        {
#line 251 "mercury_compile_front_end.m"
          {
#line 251 "mercury_compile_front_end.m"
            libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_front_end__Verbose_19, (MR_String) "% Program is type-correct.\n");
          }
#line 250 "mercury_compile_front_end.m"
        }
#line 249 "mercury_compile_front_end.m"
        break;
#line 249 "mercury_compile_front_end.m"
      case (MR_Integer) 1:
#line 246 "mercury_compile_front_end.m"
        {
#line 247 "mercury_compile_front_end.m"
          {
#line 247 "mercury_compile_front_end.m"
            libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_front_end__Verbose_19, (MR_String) "% Program contains type error(s).\n");
          }
#line 246 "mercury_compile_front_end.m"
        }
#line 249 "mercury_compile_front_end.m"
        break;
#line 249 "mercury_compile_front_end.m"
    }
#line 254 "mercury_compile_front_end.m"
    {
#line 254 "mercury_compile_front_end.m"
      libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_front_end__Stats_20);
    }
#line 255 "mercury_compile_front_end.m"
    {
#line 255 "mercury_compile_front_end.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_98_98, (MR_Integer) 15, (MR_String) "typecheck", top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_86_86, &top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_108_108);
    }
#line 265 "mercury_compile_front_end.m"
    top_level__mercury_compile_front_end__succeeded = (top_level__mercury_compile_front_end__FoundUndefModeError_12 == (MR_Integer) 1);
#line 265 "mercury_compile_front_end.m"
    if (top_level__mercury_compile_front_end__succeeded)
#line 266 "mercury_compile_front_end.m"
      {
#line 266 "mercury_compile_front_end.m"
        *top_level__mercury_compile_front_end__STATE_VARIABLE_FoundError_40 = (MR_Integer) 1;
#line 267 "mercury_compile_front_end.m"
        {
#line 267 "mercury_compile_front_end.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_front_end__Verbose_19, (MR_String) "% Program contains undefined inst or undefined mode error(s).\n");
        }
#line 270 "mercury_compile_front_end.m"
        {
#line 270 "mercury_compile_front_end.m"
          mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
        }
#line 266 "mercury_compile_front_end.m"
        *top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_46 = top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_99_99;
#line 266 "mercury_compile_front_end.m"
        *top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_44 = top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_108_108;
#line 266 "mercury_compile_front_end.m"
        *top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_42 = top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_98_98;
#line 266 "mercury_compile_front_end.m"
      }
#line 265 "mercury_compile_front_end.m"
    else
#line 271 "mercury_compile_front_end.m"
      {
#line 271 "mercury_compile_front_end.m"
        top_level__mercury_compile_front_end__succeeded = (top_level__mercury_compile_front_end__ExceededTypeCheckIterationLimit_28 == (MR_Integer) 1);
#line 271 "mercury_compile_front_end.m"
        if (top_level__mercury_compile_front_end__succeeded)
#line 275 "mercury_compile_front_end.m"
          {
#line 275 "mercury_compile_front_end.m"
            *top_level__mercury_compile_front_end__STATE_VARIABLE_FoundError_40 = (MR_Integer) 1;
#line 276 "mercury_compile_front_end.m"
            {
#line 276 "mercury_compile_front_end.m"
              mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
            }
#line 275 "mercury_compile_front_end.m"
            *top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_46 = top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_99_99;
#line 275 "mercury_compile_front_end.m"
            *top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_44 = top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_108_108;
#line 275 "mercury_compile_front_end.m"
            *top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_42 = top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_98_98;
#line 275 "mercury_compile_front_end.m"
          }
#line 271 "mercury_compile_front_end.m"
        else
#line 278 "mercury_compile_front_end.m"
          {
#line 278 "mercury_compile_front_end.m"
            MR_Word top_level__mercury_compile_front_end__MissingTypeDefnSpecs_30;
#line 278 "mercury_compile_front_end.m"
            MR_Word top_level__mercury_compile_front_end__SomeMissingTypeDefns_31;
#line 278 "mercury_compile_front_end.m"
            MR_Integer top_level__mercury_compile_front_end__NumPostTypeCheckErrors_32;
#line 278 "mercury_compile_front_end.m"
            MR_Word top_level__mercury_compile_front_end__PostTypeCheckAlwaysSpecs_33;
#line 278 "mercury_compile_front_end.m"
            MR_Word top_level__mercury_compile_front_end__PostTypeCheckNoTypeErrorSpecs_34;
#line 278 "mercury_compile_front_end.m"
            MR_Word top_level__mercury_compile_front_end__PostTypeCheckErrors_36;
#line 278 "mercury_compile_front_end.m"
            MR_Word top_level__mercury_compile_front_end__TypecheckOnly_37;
#line 278 "mercury_compile_front_end.m"
            MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_120_120;
#line 278 "mercury_compile_front_end.m"
            MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_121_121;
#line 278 "mercury_compile_front_end.m"
            MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_122_122;
#line 278 "mercury_compile_front_end.m"
            MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_124_124;
#line 278 "mercury_compile_front_end.m"
            MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_128_128;

#line 278 "mercury_compile_front_end.m"
            {
#line 278 "mercury_compile_front_end.m"
              check_hlds__post_typecheck__check_for_missing_type_defns_2_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_98_98, &top_level__mercury_compile_front_end__MissingTypeDefnSpecs_30);
            }
#line 279 "mercury_compile_front_end.m"
            {
#line 279 "mercury_compile_front_end.m"
              top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_120_120 = mercury__list__f_43_43_2_f_0(top_level__mercury_compile_front_end__TypeCtorInfo_156_156, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_99_99, top_level__mercury_compile_front_end__MissingTypeDefnSpecs_30);
            }
#line 280 "mercury_compile_front_end.m"
            {
#line 280 "mercury_compile_front_end.m"
              top_level__mercury_compile_front_end__SomeMissingTypeDefns_31 = parse_tree__error_util__contains_errors_2_f_0(top_level__mercury_compile_front_end__Globals_18, top_level__mercury_compile_front_end__MissingTypeDefnSpecs_30);
            }
#line 282 "mercury_compile_front_end.m"
            {
#line 282 "mercury_compile_front_end.m"
              check_hlds__inst_user__pretest_user_inst_table_2_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_98_98, &top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_121_121);
            }
#line 283 "mercury_compile_front_end.m"
            {
#line 283 "mercury_compile_front_end.m"
              check_hlds__post_typecheck__post_typecheck_finish_preds_5_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_121_121, &top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_122_122, &top_level__mercury_compile_front_end__NumPostTypeCheckErrors_32, &top_level__mercury_compile_front_end__PostTypeCheckAlwaysSpecs_33, &top_level__mercury_compile_front_end__PostTypeCheckNoTypeErrorSpecs_34);
            }
#line 295 "mercury_compile_front_end.m"
#line 295 "mercury_compile_front_end.m"
            switch (top_level__mercury_compile_front_end__FoundTypeError_29) {
#line 295 "mercury_compile_front_end.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 295 "mercury_compile_front_end.m"
              case (MR_Integer) 0:
#line 291 "mercury_compile_front_end.m"
                {
#line 291 "mercury_compile_front_end.m"
                  MR_Word top_level__mercury_compile_front_end__PostTypeCheckSpecs_35;

#line 292 "mercury_compile_front_end.m"
                  {
#line 292 "mercury_compile_front_end.m"
                    top_level__mercury_compile_front_end__PostTypeCheckSpecs_35 = mercury__list__f_43_43_2_f_0(top_level__mercury_compile_front_end__TypeCtorInfo_156_156, top_level__mercury_compile_front_end__PostTypeCheckAlwaysSpecs_33, top_level__mercury_compile_front_end__PostTypeCheckNoTypeErrorSpecs_34);
                  }
#line 294 "mercury_compile_front_end.m"
                  {
#line 294 "mercury_compile_front_end.m"
                    top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_124_124 = mercury__list__f_43_43_2_f_0(top_level__mercury_compile_front_end__TypeCtorInfo_156_156, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_120_120, top_level__mercury_compile_front_end__PostTypeCheckSpecs_35);
                  }
#line 291 "mercury_compile_front_end.m"
                }
#line 295 "mercury_compile_front_end.m"
                break;
#line 295 "mercury_compile_front_end.m"
              case (MR_Integer) 1:
#line 297 "mercury_compile_front_end.m"
                {
#line 297 "mercury_compile_front_end.m"
                  top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_124_124 = mercury__list__f_43_43_2_f_0(top_level__mercury_compile_front_end__TypeCtorInfo_156_156, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_120_120, top_level__mercury_compile_front_end__PostTypeCheckAlwaysSpecs_33);
                }
#line 295 "mercury_compile_front_end.m"
                break;
#line 295 "mercury_compile_front_end.m"
            }
#line 300 "mercury_compile_front_end.m"
            top_level__mercury_compile_front_end__succeeded = (top_level__mercury_compile_front_end__SomeMissingTypeDefns_31 == (MR_Integer) 1);
#line 301 "mercury_compile_front_end.m"
            if (!(top_level__mercury_compile_front_end__succeeded))
#line 301 "mercury_compile_front_end.m"
              {
#line 301 "mercury_compile_front_end.m"
                top_level__mercury_compile_front_end__succeeded = (top_level__mercury_compile_front_end__NumPostTypeCheckErrors_32 > (MR_Integer) 0);
#line 301 "mercury_compile_front_end.m"
              }
#line 299 "mercury_compile_front_end.m"
            if (top_level__mercury_compile_front_end__succeeded)
#line 304 "mercury_compile_front_end.m"
              top_level__mercury_compile_front_end__PostTypeCheckErrors_36 = (MR_Integer) 1;
#line 299 "mercury_compile_front_end.m"
            else
#line 306 "mercury_compile_front_end.m"
              top_level__mercury_compile_front_end__PostTypeCheckErrors_36 = (MR_Integer) 0;
#line 308 "mercury_compile_front_end.m"
            {
#line 308 "mercury_compile_front_end.m"
              hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_122_122, (MR_Integer) 19, (MR_String) "post_typecheck", top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_108_108, &top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_128_128);
            }
#line 311 "mercury_compile_front_end.m"
            {
#line 311 "mercury_compile_front_end.m"
              libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_front_end__Globals_18, (MR_Integer) 97, &top_level__mercury_compile_front_end__TypecheckOnly_37);
            }
#line 315 "mercury_compile_front_end.m"
#line 315 "mercury_compile_front_end.m"
            switch (top_level__mercury_compile_front_end__TypecheckOnly_37) {
#line 315 "mercury_compile_front_end.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 315 "mercury_compile_front_end.m"
              case (MR_Integer) 0:
#line 317 "mercury_compile_front_end.m"
                {
#line 318 "mercury_compile_front_end.m"
                  top_level__mercury_compile_front_end__succeeded = (top_level__mercury_compile_front_end__FoundTypeError_29 == (MR_Integer) 1);
#line 319 "mercury_compile_front_end.m"
                  if (!(top_level__mercury_compile_front_end__succeeded))
#line 319 "mercury_compile_front_end.m"
                    top_level__mercury_compile_front_end__succeeded = (top_level__mercury_compile_front_end__PostTypeCheckErrors_36 == (MR_Integer) 1);
#line 317 "mercury_compile_front_end.m"
                  if (top_level__mercury_compile_front_end__succeeded)
#line 327 "mercury_compile_front_end.m"
                    {
#line 327 "mercury_compile_front_end.m"
                      *top_level__mercury_compile_front_end__STATE_VARIABLE_FoundError_40 = (MR_Integer) 1;
#line 327 "mercury_compile_front_end.m"
                      *top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_46 = top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_124_124;
#line 327 "mercury_compile_front_end.m"
                      *top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_44 = top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_128_128;
#line 327 "mercury_compile_front_end.m"
                      *top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_42 = top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_122_122;
#line 327 "mercury_compile_front_end.m"
                    }
#line 317 "mercury_compile_front_end.m"
                  else
#line 329 "mercury_compile_front_end.m"
                    {
#line 329 "mercury_compile_front_end.m"
                      MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_132_132;
#line 329 "mercury_compile_front_end.m"
                      MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_133_133;
#line 329 "mercury_compile_front_end.m"
                      MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_137_137;
#line 329 "mercury_compile_front_end.m"
                      MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_139_139;
#line 329 "mercury_compile_front_end.m"
                      MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_140_140;
#line 329 "mercury_compile_front_end.m"
                      MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_144_144;
#line 329 "mercury_compile_front_end.m"
                      MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_146_146;
#line 329 "mercury_compile_front_end.m"
                      MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_147_147;
#line 329 "mercury_compile_front_end.m"
                      MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_148_148;

#line 329 "mercury_compile_front_end.m"
                      {
#line 329 "mercury_compile_front_end.m"
                        top_level__mercury_compile_front_end__puritycheck_8_p_0(top_level__mercury_compile_front_end__Verbose_19, top_level__mercury_compile_front_end__Stats_20, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_122_122, &top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_132_132, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_124_124, &top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_133_133);
                      }
#line 330 "mercury_compile_front_end.m"
                      {
#line 330 "mercury_compile_front_end.m"
                        hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_132_132, (MR_Integer) 20, (MR_String) "puritycheck", top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_128_128, &top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_137_137);
                      }
#line 334 "mercury_compile_front_end.m"
                      {
#line 334 "mercury_compile_front_end.m"
                        top_level__mercury_compile_front_end__subst_implementation_defined_literals_8_p_0(top_level__mercury_compile_front_end__Verbose_19, top_level__mercury_compile_front_end__Stats_20, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_132_132, &top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_139_139, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_133_133, &top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_140_140);
                      }
#line 336 "mercury_compile_front_end.m"
                      {
#line 336 "mercury_compile_front_end.m"
                        hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_139_139, (MR_Integer) 25, (MR_String) "implementation_defined_literals", top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_137_137, &top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_144_144);
                      }
#line 341 "mercury_compile_front_end.m"
                      top_level__mercury_compile_front_end__succeeded = (top_level__mercury_compile_front_end__STATE_VARIABLE_FoundError_0_39 == (MR_Integer) 0);
#line 341 "mercury_compile_front_end.m"
                      if (top_level__mercury_compile_front_end__succeeded)
#line 342 "mercury_compile_front_end.m"
                        top_level__mercury_compile_front_end__succeeded = (top_level__mercury_compile_front_end__FoundUndefModeError_12 == (MR_Integer) 0);
#line 340 "mercury_compile_front_end.m"
                      if (top_level__mercury_compile_front_end__succeeded)
#line 344 "mercury_compile_front_end.m"
                        {
#line 344 "mercury_compile_front_end.m"
                          top_level__mercury_compile_front_end__maybe_write_initial_optfile_9_p_0(top_level__mercury_compile_front_end__MakeOptInt_24, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_139_139, &top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_146_146, top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_144_144, &top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_147_147, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_140_140, &top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_148_148);
                        }
#line 340 "mercury_compile_front_end.m"
                      else
#line 347 "mercury_compile_front_end.m"
                        {
#line 347 "mercury_compile_front_end.m"
                          top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_148_148 = top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_140_140;
#line 347 "mercury_compile_front_end.m"
                          top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_147_147 = top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_144_144;
#line 347 "mercury_compile_front_end.m"
                          top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_146_146 = top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_139_139;
#line 347 "mercury_compile_front_end.m"
                        }
#line 352 "mercury_compile_front_end.m"
#line 352 "mercury_compile_front_end.m"
                      switch (top_level__mercury_compile_front_end__MakeOptInt_24) {
#line 352 "mercury_compile_front_end.m"
                        default: /*NOTREACHED*/ MR_assert(0);
#line 352 "mercury_compile_front_end.m"
                        case (MR_Integer) 0:
#line 353 "mercury_compile_front_end.m"
                          {
#line 353 "mercury_compile_front_end.m"
                            MR_Word top_level__mercury_compile_front_end__FoundModeOrDetError_38;

#line 356 "mercury_compile_front_end.m"
                            {
#line 356 "mercury_compile_front_end.m"
                              top_level__mercury_compile_front_end__frontend_pass_by_phases_9_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_146_146, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_42, &top_level__mercury_compile_front_end__FoundModeOrDetError_38, top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_147_147, top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_44, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_148_148, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_46);
                            }
#line 358 "mercury_compile_front_end.m"
                            {
#line 358 "mercury_compile_front_end.m"
                              *top_level__mercury_compile_front_end__STATE_VARIABLE_FoundError_40 = mercury__bool__or_2_f_0(top_level__mercury_compile_front_end__STATE_VARIABLE_FoundError_0_39, top_level__mercury_compile_front_end__FoundModeOrDetError_38);
                            }
#line 353 "mercury_compile_front_end.m"
                          }
#line 352 "mercury_compile_front_end.m"
                          break;
#line 352 "mercury_compile_front_end.m"
                        case (MR_Integer) 1:
#line 351 "mercury_compile_front_end.m"
                          {
#line 351 "mercury_compile_front_end.m"
                            *top_level__mercury_compile_front_end__STATE_VARIABLE_FoundError_40 = top_level__mercury_compile_front_end__STATE_VARIABLE_FoundError_0_39;
#line 351 "mercury_compile_front_end.m"
                            *top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_42 = top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_146_146;
#line 351 "mercury_compile_front_end.m"
                            *top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_44 = top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_147_147;
#line 351 "mercury_compile_front_end.m"
                            *top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_46 = top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_148_148;
#line 351 "mercury_compile_front_end.m"
                          }
#line 352 "mercury_compile_front_end.m"
                          break;
#line 352 "mercury_compile_front_end.m"
                      }
#line 329 "mercury_compile_front_end.m"
                    }
#line 317 "mercury_compile_front_end.m"
                }
#line 315 "mercury_compile_front_end.m"
                break;
#line 315 "mercury_compile_front_end.m"
              case (MR_Integer) 1:
#line 313 "mercury_compile_front_end.m"
                {
#line 314 "mercury_compile_front_end.m"
                  {
#line 314 "mercury_compile_front_end.m"
                    *top_level__mercury_compile_front_end__STATE_VARIABLE_FoundError_40 = mercury__bool__or_2_f_0(top_level__mercury_compile_front_end__STATE_VARIABLE_FoundError_0_39, top_level__mercury_compile_front_end__PostTypeCheckErrors_36);
                  }
#line 313 "mercury_compile_front_end.m"
                  *top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_42 = top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_122_122;
#line 313 "mercury_compile_front_end.m"
                  *top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_44 = top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_128_128;
#line 313 "mercury_compile_front_end.m"
                  *top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_46 = top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_124_124;
#line 313 "mercury_compile_front_end.m"
                }
#line 315 "mercury_compile_front_end.m"
                break;
#line 315 "mercury_compile_front_end.m"
            }
#line 278 "mercury_compile_front_end.m"
          }
#line 271 "mercury_compile_front_end.m"
      }
#line 180 "mercury_compile_front_end.m"
  }
#line 175 "mercury_compile_front_end.m"
}

#line 995 "mercury_compile_front_end.m"
static void MR_CALL 
top_level__mercury_compile_front_end__maybe_simplify_10_p_0_1(
#line 995 "mercury_compile_front_end.m"
  MR_Box top_level__mercury_compile_front_end__closure_arg,
#line 995 "mercury_compile_front_end.m"
  MR_Box top_level__mercury_compile_front_end__wrapper_arg_1,
#line 995 "mercury_compile_front_end.m"
  MR_Box top_level__mercury_compile_front_end__wrapper_arg_2,
#line 995 "mercury_compile_front_end.m"
  MR_Box * top_level__mercury_compile_front_end__wrapper_arg_3,
#line 995 "mercury_compile_front_end.m"
  MR_Box top_level__mercury_compile_front_end__wrapper_arg_4,
#line 995 "mercury_compile_front_end.m"
  MR_Box * top_level__mercury_compile_front_end__wrapper_arg_5,
#line 995 "mercury_compile_front_end.m"
  MR_Box top_level__mercury_compile_front_end__wrapper_arg_6,
#line 995 "mercury_compile_front_end.m"
  MR_Box * top_level__mercury_compile_front_end__wrapper_arg_7)
#line 995 "mercury_compile_front_end.m"
{
#line 995 "mercury_compile_front_end.m"
  {
#line 995 "mercury_compile_front_end.m"
    MR_Box top_level__mercury_compile_front_end__closure = top_level__mercury_compile_front_end__closure_arg;
#line 995 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__conv2_STATE_VARIABLE_ModuleInfo_23;
#line 995 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__conv1_STATE_VARIABLE_PredInfo_25;
#line 995 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__conv0_STATE_VARIABLE_Specs_27;

#line 995 "mercury_compile_front_end.m"
    {
#line 995 "mercury_compile_front_end.m"
      top_level__mercury_compile_front_end__simplify_pred_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_front_end__closure, (MR_Integer) 3))), ((MR_Word) top_level__mercury_compile_front_end__wrapper_arg_1), ((MR_Word) top_level__mercury_compile_front_end__wrapper_arg_2), &top_level__mercury_compile_front_end__conv2_STATE_VARIABLE_ModuleInfo_23, ((MR_Word) top_level__mercury_compile_front_end__wrapper_arg_4), &top_level__mercury_compile_front_end__conv1_STATE_VARIABLE_PredInfo_25, ((MR_Word) top_level__mercury_compile_front_end__wrapper_arg_6), &top_level__mercury_compile_front_end__conv0_STATE_VARIABLE_Specs_27);
    }
#line 995 "mercury_compile_front_end.m"
    *top_level__mercury_compile_front_end__wrapper_arg_3 = ((MR_Box) (top_level__mercury_compile_front_end__conv2_STATE_VARIABLE_ModuleInfo_23));
#line 995 "mercury_compile_front_end.m"
    *top_level__mercury_compile_front_end__wrapper_arg_5 = ((MR_Box) (top_level__mercury_compile_front_end__conv1_STATE_VARIABLE_PredInfo_25));
#line 995 "mercury_compile_front_end.m"
    *top_level__mercury_compile_front_end__wrapper_arg_7 = ((MR_Box) (top_level__mercury_compile_front_end__conv0_STATE_VARIABLE_Specs_27));
#line 995 "mercury_compile_front_end.m"
  }
#line 995 "mercury_compile_front_end.m"
}

#line 68 "mercury_compile_front_end.m"
void MR_CALL 
top_level__mercury_compile_front_end__maybe_simplify_10_p_0(
#line 68 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__Warn_11,
#line 68 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__SimplifyPass_12,
#line 68 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__Verbose_13,
#line 68 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__Stats_14,
#line 68 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_31,
#line 68 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_32,
#line 68 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_33,
#line 68 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_34)
#line 68 "mercury_compile_front_end.m"
{
#line 912 "mercury_compile_front_end.m"
  {
#line 912 "mercury_compile_front_end.m"
    MR_bool top_level__mercury_compile_front_end__succeeded;
#line 912 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__Globals_18;
#line 912 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__SimpList_19;
#line 912 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__SimplifyTasks0_20;
#line 912 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_SimpList_37_37;

#line 913 "mercury_compile_front_end.m"
    {
#line 913 "mercury_compile_front_end.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_31, &top_level__mercury_compile_front_end__Globals_18);
    }
#line 915 "mercury_compile_front_end.m"
    {
#line 915 "mercury_compile_front_end.m"
      check_hlds__simplify__simplify_tasks__find_simplify_tasks_3_p_0(top_level__mercury_compile_front_end__Warn_11, top_level__mercury_compile_front_end__Globals_18, &top_level__mercury_compile_front_end__SimplifyTasks0_20);
    }
#line 916 "mercury_compile_front_end.m"
    {
#line 916 "mercury_compile_front_end.m"
      top_level__mercury_compile_front_end__STATE_VARIABLE_SimpList_37_37 = check_hlds__simplify__simplify_tasks__simplify_tasks_to_list_1_f_0(top_level__mercury_compile_front_end__SimplifyTasks0_20);
    }
#line 920 "mercury_compile_front_end.m"
#line 920 "mercury_compile_front_end.m"
    switch (top_level__mercury_compile_front_end__SimplifyPass_12) {
#line 920 "mercury_compile_front_end.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 920 "mercury_compile_front_end.m"
      case (MR_Integer) 0:
#line 918 "mercury_compile_front_end.m"
        {
#line 919 "mercury_compile_front_end.m"
          {
#line 919 "mercury_compile_front_end.m"
            mercury__list__cons_3_p_0((MR_Word) &check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__type_ctor_info_simplify_task_0, ((MR_Box) ((MR_Integer) 5)), top_level__mercury_compile_front_end__STATE_VARIABLE_SimpList_37_37, &top_level__mercury_compile_front_end__SimpList_19);
          }
#line 918 "mercury_compile_front_end.m"
        }
#line 920 "mercury_compile_front_end.m"
        break;
#line 920 "mercury_compile_front_end.m"
      case (MR_Integer) 5:
#line 958 "mercury_compile_front_end.m"
        {
#line 958 "mercury_compile_front_end.m"
          MR_Word top_level__mercury_compile_front_end__TypeCtorInfo_89_89;
#line 958 "mercury_compile_front_end.m"
          MR_Word top_level__mercury_compile_front_end__ConstProp_23;
#line 958 "mercury_compile_front_end.m"
          MR_Word top_level__mercury_compile_front_end__DeepProf_24;
#line 958 "mercury_compile_front_end.m"
          MR_Word top_level__mercury_compile_front_end__TSWProf_25;
#line 958 "mercury_compile_front_end.m"
          MR_Word top_level__mercury_compile_front_end__TSCProf_26;
#line 958 "mercury_compile_front_end.m"
          MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_SimpList_43_43;
#line 958 "mercury_compile_front_end.m"
          MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_SimpList_47_47;

#line 964 "mercury_compile_front_end.m"
          {
#line 964 "mercury_compile_front_end.m"
            libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_front_end__Globals_18, (MR_Integer) 361, &top_level__mercury_compile_front_end__ConstProp_23);
          }
#line 966 "mercury_compile_front_end.m"
          {
#line 966 "mercury_compile_front_end.m"
            libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_front_end__Globals_18, (MR_Integer) 193, &top_level__mercury_compile_front_end__DeepProf_24);
          }
#line 967 "mercury_compile_front_end.m"
          {
#line 967 "mercury_compile_front_end.m"
            libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_front_end__Globals_18, (MR_Integer) 210, &top_level__mercury_compile_front_end__TSWProf_25);
          }
#line 969 "mercury_compile_front_end.m"
          {
#line 969 "mercury_compile_front_end.m"
            libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_front_end__Globals_18, (MR_Integer) 211, &top_level__mercury_compile_front_end__TSCProf_26);
          }
#line 972 "mercury_compile_front_end.m"
          top_level__mercury_compile_front_end__succeeded = (top_level__mercury_compile_front_end__ConstProp_23 == (MR_Integer) 1);
#line 972 "mercury_compile_front_end.m"
          if (top_level__mercury_compile_front_end__succeeded)
#line 972 "mercury_compile_front_end.m"
            {
#line 973 "mercury_compile_front_end.m"
              top_level__mercury_compile_front_end__succeeded = (top_level__mercury_compile_front_end__DeepProf_24 == (MR_Integer) 0);
#line 972 "mercury_compile_front_end.m"
              if (top_level__mercury_compile_front_end__succeeded)
#line 972 "mercury_compile_front_end.m"
                {
#line 974 "mercury_compile_front_end.m"
                  top_level__mercury_compile_front_end__succeeded = (top_level__mercury_compile_front_end__TSWProf_25 == (MR_Integer) 0);
#line 972 "mercury_compile_front_end.m"
                  if (top_level__mercury_compile_front_end__succeeded)
#line 975 "mercury_compile_front_end.m"
                    top_level__mercury_compile_front_end__succeeded = (top_level__mercury_compile_front_end__TSCProf_26 == (MR_Integer) 0);
#line 972 "mercury_compile_front_end.m"
                }
#line 972 "mercury_compile_front_end.m"
            }
#line 971 "mercury_compile_front_end.m"
          if (top_level__mercury_compile_front_end__succeeded)
#line 977 "mercury_compile_front_end.m"
            {
#line 977 "mercury_compile_front_end.m"
              {
#line 977 "mercury_compile_front_end.m"
                mercury__list__cons_3_p_0((MR_Word) &check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__type_ctor_info_simplify_task_0, ((MR_Box) ((MR_Integer) 9)), top_level__mercury_compile_front_end__STATE_VARIABLE_SimpList_37_37, &top_level__mercury_compile_front_end__STATE_VARIABLE_SimpList_43_43);
              }
#line 977 "mercury_compile_front_end.m"
            }
#line 971 "mercury_compile_front_end.m"
          else
#line 979 "mercury_compile_front_end.m"
            {
#line 980 "mercury_compile_front_end.m"
              {
#line 980 "mercury_compile_front_end.m"
                top_level__mercury_compile_front_end__STATE_VARIABLE_SimpList_43_43 = mercury__list__delete_all_2_f_0((MR_Word) &check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__type_ctor_info_simplify_task_0, top_level__mercury_compile_front_end__STATE_VARIABLE_SimpList_37_37, ((MR_Box) ((MR_Integer) 9)));
              }
#line 979 "mercury_compile_front_end.m"
            }
#line 4685 "top_level.mercury_compile_front_end.c"
          top_level__mercury_compile_front_end__TypeCtorInfo_89_89 = (MR_Word) &check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__type_ctor_info_simplify_task_0;
#line 982 "mercury_compile_front_end.m"
          {
#line 982 "mercury_compile_front_end.m"
            mercury__list__cons_3_p_0(top_level__mercury_compile_front_end__TypeCtorInfo_89_89, ((MR_Box) ((MR_Integer) 4)), top_level__mercury_compile_front_end__STATE_VARIABLE_SimpList_43_43, &top_level__mercury_compile_front_end__STATE_VARIABLE_SimpList_47_47);
          }
#line 983 "mercury_compile_front_end.m"
          {
#line 983 "mercury_compile_front_end.m"
            mercury__list__cons_3_p_0(top_level__mercury_compile_front_end__TypeCtorInfo_89_89, ((MR_Box) ((MR_Integer) 7)), top_level__mercury_compile_front_end__STATE_VARIABLE_SimpList_47_47, &top_level__mercury_compile_front_end__SimpList_19);
          }
#line 958 "mercury_compile_front_end.m"
        }
#line 920 "mercury_compile_front_end.m"
        break;
#line 920 "mercury_compile_front_end.m"
      case (MR_Integer) 4:
#line 955 "mercury_compile_front_end.m"
        {
#line 956 "mercury_compile_front_end.m"
          {
#line 956 "mercury_compile_front_end.m"
            mercury__list__cons_3_p_0((MR_Word) &check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__type_ctor_info_simplify_task_0, ((MR_Box) ((MR_Integer) 4)), top_level__mercury_compile_front_end__STATE_VARIABLE_SimpList_37_37, &top_level__mercury_compile_front_end__SimpList_19);
          }
#line 955 "mercury_compile_front_end.m"
        }
#line 920 "mercury_compile_front_end.m"
        break;
#line 920 "mercury_compile_front_end.m"
      case (MR_Integer) 1:
#line 921 "mercury_compile_front_end.m"
        {
#line 922 "mercury_compile_front_end.m"
          {
#line 922 "mercury_compile_front_end.m"
            mercury__list__cons_3_p_0((MR_Word) &check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__type_ctor_info_simplify_task_0, ((MR_Box) ((MR_Integer) 4)), top_level__mercury_compile_front_end__STATE_VARIABLE_SimpList_37_37, &top_level__mercury_compile_front_end__SimpList_19);
          }
#line 921 "mercury_compile_front_end.m"
        }
#line 920 "mercury_compile_front_end.m"
        break;
#line 920 "mercury_compile_front_end.m"
      case (MR_Integer) 3:
#line 940 "mercury_compile_front_end.m"
        {
#line 940 "mercury_compile_front_end.m"
          MR_Word top_level__mercury_compile_front_end__PreParSimplify_22;

#line 945 "mercury_compile_front_end.m"
          {
#line 945 "mercury_compile_front_end.m"
            libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_front_end__Globals_18, (MR_Integer) 196, &top_level__mercury_compile_front_end__PreParSimplify_22);
          }
#line 950 "mercury_compile_front_end.m"
#line 950 "mercury_compile_front_end.m"
          switch (top_level__mercury_compile_front_end__PreParSimplify_22) {
#line 950 "mercury_compile_front_end.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 950 "mercury_compile_front_end.m"
            case (MR_Integer) 0:
#line 952 "mercury_compile_front_end.m"
              top_level__mercury_compile_front_end__SimpList_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 950 "mercury_compile_front_end.m"
              break;
#line 950 "mercury_compile_front_end.m"
            case (MR_Integer) 1:
#line 948 "mercury_compile_front_end.m"
              {
#line 949 "mercury_compile_front_end.m"
                {
#line 949 "mercury_compile_front_end.m"
                  mercury__list__cons_3_p_0((MR_Word) &check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__type_ctor_info_simplify_task_0, ((MR_Box) ((MR_Integer) 4)), top_level__mercury_compile_front_end__STATE_VARIABLE_SimpList_37_37, &top_level__mercury_compile_front_end__SimpList_19);
                }
#line 948 "mercury_compile_front_end.m"
              }
#line 950 "mercury_compile_front_end.m"
              break;
#line 950 "mercury_compile_front_end.m"
          }
#line 940 "mercury_compile_front_end.m"
        }
#line 920 "mercury_compile_front_end.m"
        break;
#line 920 "mercury_compile_front_end.m"
      case (MR_Integer) 2:
#line 924 "mercury_compile_front_end.m"
        {
#line 924 "mercury_compile_front_end.m"
          MR_Word top_level__mercury_compile_front_end__PreProfSimplify_21;

#line 930 "mercury_compile_front_end.m"
          {
#line 930 "mercury_compile_front_end.m"
            libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_front_end__Globals_18, (MR_Integer) 195, &top_level__mercury_compile_front_end__PreProfSimplify_21);
          }
#line 935 "mercury_compile_front_end.m"
#line 935 "mercury_compile_front_end.m"
          switch (top_level__mercury_compile_front_end__PreProfSimplify_21) {
#line 935 "mercury_compile_front_end.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 935 "mercury_compile_front_end.m"
            case (MR_Integer) 0:
#line 937 "mercury_compile_front_end.m"
              top_level__mercury_compile_front_end__SimpList_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 935 "mercury_compile_front_end.m"
              break;
#line 935 "mercury_compile_front_end.m"
            case (MR_Integer) 1:
#line 933 "mercury_compile_front_end.m"
              {
#line 934 "mercury_compile_front_end.m"
                {
#line 934 "mercury_compile_front_end.m"
                  mercury__list__cons_3_p_0((MR_Word) &check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__type_ctor_info_simplify_task_0, ((MR_Box) ((MR_Integer) 4)), top_level__mercury_compile_front_end__STATE_VARIABLE_SimpList_37_37, &top_level__mercury_compile_front_end__SimpList_19);
                }
#line 933 "mercury_compile_front_end.m"
              }
#line 935 "mercury_compile_front_end.m"
              break;
#line 935 "mercury_compile_front_end.m"
          }
#line 924 "mercury_compile_front_end.m"
        }
#line 920 "mercury_compile_front_end.m"
        break;
#line 920 "mercury_compile_front_end.m"
    }
#line 1011 "mercury_compile_front_end.m"
    if ((top_level__mercury_compile_front_end__SimpList_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1012 "mercury_compile_front_end.m"
      {
#line 1012 "mercury_compile_front_end.m"
        *top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_32 = top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_31;
#line 1012 "mercury_compile_front_end.m"
        *top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_34 = top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_33;
#line 1012 "mercury_compile_front_end.m"
      }
#line 1011 "mercury_compile_front_end.m"
    else
#line 988 "mercury_compile_front_end.m"
      {
#line 988 "mercury_compile_front_end.m"
        MR_Word top_level__mercury_compile_front_end__SimplifyTasks_29;
#line 988 "mercury_compile_front_end.m"
        MR_Word top_level__mercury_compile_front_end__SimplifySpecs_30;
#line 988 "mercury_compile_front_end.m"
        MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_64_64;
#line 988 "mercury_compile_front_end.m"
        MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_65_65;
#line 988 "mercury_compile_front_end.m"
        MR_Word top_level__mercury_compile_front_end__V_70_70;
#line 988 "mercury_compile_front_end.m"
        MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_71_71;
#line 988 "mercury_compile_front_end.m"
        MR_Word top_level__mercury_compile_front_end__V_74_74;

#line 990 "mercury_compile_front_end.m"
        {
#line 990 "mercury_compile_front_end.m"
          hlds__hlds_error_util__maybe_write_out_errors_8_p_0(top_level__mercury_compile_front_end__Verbose_13, top_level__mercury_compile_front_end__Globals_18, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_31, &top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_64_64, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_33, &top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_65_65);
        }
#line 991 "mercury_compile_front_end.m"
        {
#line 991 "mercury_compile_front_end.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_front_end__Verbose_13, (MR_String) "% Simplifying goals...\n");
        }
#line 992 "mercury_compile_front_end.m"
        {
#line 992 "mercury_compile_front_end.m"
          libs__file_util__maybe_flush_output_3_p_0(top_level__mercury_compile_front_end__Verbose_13);
        }
#line 993 "mercury_compile_front_end.m"
        {
#line 993 "mercury_compile_front_end.m"
          top_level__mercury_compile_front_end__SimplifyTasks_29 = check_hlds__simplify__simplify_tasks__list_to_simplify_tasks_1_f_0(top_level__mercury_compile_front_end__SimpList_19);
        }
#line 995 "mercury_compile_front_end.m"
        {
#line 995 "mercury_compile_front_end.m"
          top_level__mercury_compile_front_end__V_74_74 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 995 "mercury_compile_front_end.m"
          MR_hl_field(MR_mktag(0), top_level__mercury_compile_front_end__V_74_74, 0) = ((MR_Box) (&top_level__mercury_compile_front_end_scalar_common_4[0]));
#line 995 "mercury_compile_front_end.m"
          MR_hl_field(MR_mktag(0), top_level__mercury_compile_front_end__V_74_74, 1) = ((MR_Box) (top_level__mercury_compile_front_end__maybe_simplify_10_p_0_1));
#line 995 "mercury_compile_front_end.m"
          MR_hl_field(MR_mktag(0), top_level__mercury_compile_front_end__V_74_74, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 995 "mercury_compile_front_end.m"
          MR_hl_field(MR_mktag(0), top_level__mercury_compile_front_end__V_74_74, 3) = ((MR_Box) (top_level__mercury_compile_front_end__SimplifyTasks_29));
#line 995 "mercury_compile_front_end.m"
        }
#line 995 "mercury_compile_front_end.m"
        top_level__mercury_compile_front_end__V_70_70 = (MR_Word) top_level__mercury_compile_front_end__V_74_74;
#line 994 "mercury_compile_front_end.m"
        {
#line 994 "mercury_compile_front_end.m"
          hlds__passes_aux__process_all_nonimported_preds_errors_7_p_0(top_level__mercury_compile_front_end__V_70_70, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_64_64, &top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_71_71, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &top_level__mercury_compile_front_end__SimplifySpecs_30);
        }
#line 1001 "mercury_compile_front_end.m"
#line 1001 "mercury_compile_front_end.m"
        switch (top_level__mercury_compile_front_end__SimplifyPass_12) {
#line 1001 "mercury_compile_front_end.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1001 "mercury_compile_front_end.m"
          case (MR_Integer) 0:
#line 998 "mercury_compile_front_end.m"
            {
#line 998 "mercury_compile_front_end.m"
              MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_75_75;

#line 999 "mercury_compile_front_end.m"
              {
#line 999 "mercury_compile_front_end.m"
                top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_75_75 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, top_level__mercury_compile_front_end__SimplifySpecs_30, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_65_65);
              }
#line 1000 "mercury_compile_front_end.m"
              {
#line 1000 "mercury_compile_front_end.m"
                hlds__hlds_error_util__maybe_write_out_errors_8_p_0(top_level__mercury_compile_front_end__Verbose_13, top_level__mercury_compile_front_end__Globals_18, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_71_71, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_32, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_75_75, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_34);
              }
#line 998 "mercury_compile_front_end.m"
            }
#line 1001 "mercury_compile_front_end.m"
            break;
#line 1001 "mercury_compile_front_end.m"
          case (MR_Integer) 5:
#line 1002 "mercury_compile_front_end.m"
            {
#line 1002 "mercury_compile_front_end.m"
              *top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_32 = top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_71_71;
#line 1002 "mercury_compile_front_end.m"
              *top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_34 = top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_65_65;
#line 1002 "mercury_compile_front_end.m"
            }
#line 1001 "mercury_compile_front_end.m"
            break;
#line 1001 "mercury_compile_front_end.m"
          case (MR_Integer) 4:
#line 1003 "mercury_compile_front_end.m"
            {
#line 1003 "mercury_compile_front_end.m"
              *top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_32 = top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_71_71;
#line 1003 "mercury_compile_front_end.m"
              *top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_34 = top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_65_65;
#line 1003 "mercury_compile_front_end.m"
            }
#line 1001 "mercury_compile_front_end.m"
            break;
#line 1001 "mercury_compile_front_end.m"
          case (MR_Integer) 1:
#line 1004 "mercury_compile_front_end.m"
            {
#line 1004 "mercury_compile_front_end.m"
              *top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_32 = top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_71_71;
#line 1004 "mercury_compile_front_end.m"
              *top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_34 = top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_65_65;
#line 1004 "mercury_compile_front_end.m"
            }
#line 1001 "mercury_compile_front_end.m"
            break;
#line 1001 "mercury_compile_front_end.m"
          case (MR_Integer) 3:
#line 1006 "mercury_compile_front_end.m"
            {
#line 1006 "mercury_compile_front_end.m"
              *top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_32 = top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_71_71;
#line 1006 "mercury_compile_front_end.m"
              *top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_34 = top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_65_65;
#line 1006 "mercury_compile_front_end.m"
            }
#line 1001 "mercury_compile_front_end.m"
            break;
#line 1001 "mercury_compile_front_end.m"
          case (MR_Integer) 2:
#line 1005 "mercury_compile_front_end.m"
            {
#line 1005 "mercury_compile_front_end.m"
              *top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_32 = top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_71_71;
#line 1005 "mercury_compile_front_end.m"
              *top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_34 = top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_65_65;
#line 1005 "mercury_compile_front_end.m"
            }
#line 1001 "mercury_compile_front_end.m"
            break;
#line 1001 "mercury_compile_front_end.m"
        }
#line 1009 "mercury_compile_front_end.m"
        {
#line 1009 "mercury_compile_front_end.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_front_end__Verbose_13, (MR_String) "% done.\n");
        }
#line 1010 "mercury_compile_front_end.m"
        {
#line 1010 "mercury_compile_front_end.m"
          libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_front_end__Stats_14);
        }
#line 988 "mercury_compile_front_end.m"
      }
#line 912 "mercury_compile_front_end.m"
  }
#line 68 "mercury_compile_front_end.m"
}

#line 34 "mercury_compile_front_end.m"
void MR_CALL 
top_level__mercury_compile_front_end__frontend_pass_13_p_0(
#line 34 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__QualInfo0_14,
#line 34 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__FoundUndefTypeError_15,
#line 34 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__FoundUndefModeError_16,
#line 34 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_FoundError_0_29,
#line 34 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_FoundError_30,
#line 34 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_31,
#line 34 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_32,
#line 34 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_0_33,
#line 34 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_34,
#line 34 "mercury_compile_front_end.m"
  MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_35,
#line 34 "mercury_compile_front_end.m"
  MR_Word * top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_36)
#line 34 "mercury_compile_front_end.m"
{
#line 131 "mercury_compile_front_end.m"
  {
#line 131 "mercury_compile_front_end.m"
    MR_bool top_level__mercury_compile_front_end__succeeded;
#line 131 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__Globals_22;
#line 131 "mercury_compile_front_end.m"
    MR_Word top_level__mercury_compile_front_end__Verbose_23;

#line 134 "mercury_compile_front_end.m"
    {
#line 134 "mercury_compile_front_end.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_31, &top_level__mercury_compile_front_end__Globals_22);
    }
#line 135 "mercury_compile_front_end.m"
    {
#line 135 "mercury_compile_front_end.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_front_end__Globals_22, (MR_Integer) 46, &top_level__mercury_compile_front_end__Verbose_23);
    }
#line 145 "mercury_compile_front_end.m"
#line 145 "mercury_compile_front_end.m"
    switch (top_level__mercury_compile_front_end__FoundUndefTypeError_15) {
#line 145 "mercury_compile_front_end.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 145 "mercury_compile_front_end.m"
      case (MR_Integer) 0:
#line 146 "mercury_compile_front_end.m"
        {
#line 146 "mercury_compile_front_end.m"
          MR_Word top_level__mercury_compile_front_end__TypeCtorInfo_76_76;
#line 146 "mercury_compile_front_end.m"
          MR_Word top_level__mercury_compile_front_end__PostTypeSpecs_24;
#line 146 "mercury_compile_front_end.m"
          MR_Word top_level__mercury_compile_front_end__PostTypeErrors_25;
#line 146 "mercury_compile_front_end.m"
          MR_Word top_level__mercury_compile_front_end__QualInfo_26;
#line 146 "mercury_compile_front_end.m"
          MR_Word top_level__mercury_compile_front_end__TypeClassSpecs_27;
#line 146 "mercury_compile_front_end.m"
          MR_Word top_level__mercury_compile_front_end__TypeClassErrors_28;
#line 146 "mercury_compile_front_end.m"
          MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_40_40;
#line 146 "mercury_compile_front_end.m"
          MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_41_41;
#line 146 "mercury_compile_front_end.m"
          MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_45_45;
#line 146 "mercury_compile_front_end.m"
          MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_FoundError_46_46;
#line 146 "mercury_compile_front_end.m"
          MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_49_49;
#line 146 "mercury_compile_front_end.m"
          MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_53_53;
#line 146 "mercury_compile_front_end.m"
          MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_55_55;
#line 146 "mercury_compile_front_end.m"
          MR_Word top_level__mercury_compile_front_end__V_56_56;
#line 146 "mercury_compile_front_end.m"
          MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_59_59;
#line 146 "mercury_compile_front_end.m"
          MR_Word top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_61_61;

#line 147 "mercury_compile_front_end.m"
          {
#line 147 "mercury_compile_front_end.m"
            hlds__hlds_error_util__maybe_write_out_errors_8_p_0(top_level__mercury_compile_front_end__Verbose_23, top_level__mercury_compile_front_end__Globals_22, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_31, &top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_40_40, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_35, &top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_41_41);
          }
#line 149 "mercury_compile_front_end.m"
          {
#line 149 "mercury_compile_front_end.m"
            libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_front_end__Verbose_23, (MR_String) "% Post-processing type definitions...\n");
          }
#line 151 "mercury_compile_front_end.m"
          {
#line 151 "mercury_compile_front_end.m"
            hlds__make_tags__post_process_type_defns_3_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_40_40, &top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_45_45, &top_level__mercury_compile_front_end__PostTypeSpecs_24);
          }
#line 152 "mercury_compile_front_end.m"
          {
#line 152 "mercury_compile_front_end.m"
            top_level__mercury_compile_front_end__PostTypeErrors_25 = parse_tree__error_util__contains_errors_2_f_0(top_level__mercury_compile_front_end__Globals_22, top_level__mercury_compile_front_end__PostTypeSpecs_24);
          }
#line 153 "mercury_compile_front_end.m"
          {
#line 153 "mercury_compile_front_end.m"
            mercury__bool__or_3_p_0(top_level__mercury_compile_front_end__PostTypeErrors_25, top_level__mercury_compile_front_end__STATE_VARIABLE_FoundError_0_29, &top_level__mercury_compile_front_end__STATE_VARIABLE_FoundError_46_46);
          }
#line 154 "mercury_compile_front_end.m"
          {
#line 154 "mercury_compile_front_end.m"
            hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_45_45, (MR_Integer) 3, (MR_String) "typedefn", top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_0_33, &top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_49_49);
          }
#line 156 "mercury_compile_front_end.m"
          {
#line 156 "mercury_compile_front_end.m"
            libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_front_end__Verbose_23, (MR_String) "% Checking typeclasses...\n");
          }
#line 157 "mercury_compile_front_end.m"
          {
#line 157 "mercury_compile_front_end.m"
            check_hlds__check_typeclass__check_typeclasses_6_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_45_45, &top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_53_53, top_level__mercury_compile_front_end__QualInfo0_14, &top_level__mercury_compile_front_end__QualInfo_26, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &top_level__mercury_compile_front_end__TypeClassSpecs_27);
          }
#line 5116 "top_level.mercury_compile_front_end.c"
          top_level__mercury_compile_front_end__TypeCtorInfo_76_76 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0;
#line 158 "mercury_compile_front_end.m"
          {
#line 158 "mercury_compile_front_end.m"
            top_level__mercury_compile_front_end__V_56_56 = mercury__list__f_43_43_2_f_0(top_level__mercury_compile_front_end__TypeCtorInfo_76_76, top_level__mercury_compile_front_end__TypeClassSpecs_27, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_41_41);
          }
#line 158 "mercury_compile_front_end.m"
          {
#line 158 "mercury_compile_front_end.m"
            top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_55_55 = mercury__list__f_43_43_2_f_0(top_level__mercury_compile_front_end__TypeCtorInfo_76_76, top_level__mercury_compile_front_end__PostTypeSpecs_24, top_level__mercury_compile_front_end__V_56_56);
          }
#line 159 "mercury_compile_front_end.m"
          {
#line 159 "mercury_compile_front_end.m"
            hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_53_53, (MR_Integer) 5, (MR_String) "typeclass", top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_49_49, &top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_59_59);
          }
#line 160 "mercury_compile_front_end.m"
          {
#line 160 "mercury_compile_front_end.m"
            hlds__make_hlds__set_module_recomp_info_3_p_0(top_level__mercury_compile_front_end__QualInfo_26, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_53_53, &top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_61_61);
          }
#line 162 "mercury_compile_front_end.m"
          {
#line 162 "mercury_compile_front_end.m"
            top_level__mercury_compile_front_end__TypeClassErrors_28 = parse_tree__error_util__contains_errors_2_f_0(top_level__mercury_compile_front_end__Globals_22, top_level__mercury_compile_front_end__TypeClassSpecs_27);
          }
#line 168 "mercury_compile_front_end.m"
#line 168 "mercury_compile_front_end.m"
          switch (top_level__mercury_compile_front_end__TypeClassErrors_28) {
#line 168 "mercury_compile_front_end.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 168 "mercury_compile_front_end.m"
            case (MR_Integer) 0:
#line 170 "mercury_compile_front_end.m"
              {
#line 170 "mercury_compile_front_end.m"
                top_level__mercury_compile_front_end__frontend_pass_after_typeclass_check_11_p_0(top_level__mercury_compile_front_end__FoundUndefModeError_16, top_level__mercury_compile_front_end__STATE_VARIABLE_FoundError_46_46, top_level__mercury_compile_front_end__STATE_VARIABLE_FoundError_30, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_61_61, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_32, top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_59_59, top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_34, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_55_55, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_36);
              }
#line 168 "mercury_compile_front_end.m"
              break;
#line 168 "mercury_compile_front_end.m"
            case (MR_Integer) 1:
#line 164 "mercury_compile_front_end.m"
              {
#line 167 "mercury_compile_front_end.m"
                *top_level__mercury_compile_front_end__STATE_VARIABLE_FoundError_30 = (MR_Integer) 1;
#line 164 "mercury_compile_front_end.m"
                *top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_32 = top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_61_61;
#line 164 "mercury_compile_front_end.m"
                *top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_34 = top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_59_59;
#line 164 "mercury_compile_front_end.m"
                *top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_36 = top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_55_55;
#line 164 "mercury_compile_front_end.m"
              }
#line 168 "mercury_compile_front_end.m"
              break;
#line 168 "mercury_compile_front_end.m"
          }
#line 146 "mercury_compile_front_end.m"
        }
#line 145 "mercury_compile_front_end.m"
        break;
#line 145 "mercury_compile_front_end.m"
      case (MR_Integer) 1:
#line 137 "mercury_compile_front_end.m"
        {
#line 140 "mercury_compile_front_end.m"
          *top_level__mercury_compile_front_end__STATE_VARIABLE_FoundError_30 = (MR_Integer) 1;
#line 141 "mercury_compile_front_end.m"
          {
#line 141 "mercury_compile_front_end.m"
            hlds__hlds_error_util__maybe_write_out_errors_8_p_0(top_level__mercury_compile_front_end__Verbose_23, top_level__mercury_compile_front_end__Globals_22, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_0_31, top_level__mercury_compile_front_end__STATE_VARIABLE_HLDS_32, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_0_35, top_level__mercury_compile_front_end__STATE_VARIABLE_Specs_36);
          }
#line 142 "mercury_compile_front_end.m"
          {
#line 142 "mercury_compile_front_end.m"
            libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_front_end__Verbose_23, (MR_String) "% Program contains undefined type error(s).\n");
          }
#line 144 "mercury_compile_front_end.m"
          {
#line 144 "mercury_compile_front_end.m"
            mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
          }
#line 137 "mercury_compile_front_end.m"
          *top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_34 = top_level__mercury_compile_front_end__STATE_VARIABLE_DumpInfo_0_33;
#line 137 "mercury_compile_front_end.m"
        }
#line 145 "mercury_compile_front_end.m"
        break;
#line 145 "mercury_compile_front_end.m"
    }
#line 131 "mercury_compile_front_end.m"
  }
#line 34 "mercury_compile_front_end.m"
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
