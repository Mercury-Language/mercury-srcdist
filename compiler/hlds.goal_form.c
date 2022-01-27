/*
** Automatically generated from `goal_form.m'
** by the Mercury compiler,
** version rotd-2015-06-22
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


/* :- module hlds.goal_form. */
/* :- implementation. */

/*
INIT mercury__hlds__goal_form__init
ENDINIT
*/

#include "hlds.goal_form.mih"


#include "analysis.mih"
#include "array.mih"
#include "assoc_list.mih"
#include "bag.mih"
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
#include "enum.mih"
#include "getopt_io.mih"
#include "hlds.mih"
#include "int.mih"
#include "integer.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
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
#include "transform_hlds.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.unify_proc.mih"
#include "hlds.code_model.mih"
#include "hlds.const_struct.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
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
#include "parse_tree.error_util.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.exception_analysis.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 137 "hlds.goal_form.c"
static const MR_EnumFunctorDesc hlds__goal_form__hlds__goal_form__enum_functor_desc_goal_loop_or_throw_status_0_0;

#line 140 "hlds.goal_form.c"
static const MR_EnumFunctorDesc hlds__goal_form__hlds__goal_form__enum_functor_desc_goal_loop_or_throw_status_0_1;

#line 143 "hlds.goal_form.c"
static const MR_EnumFunctorDescPtr hlds__goal_form__hlds__goal_form__enum_value_ordered_goal_loop_or_throw_status_0[2];

#line 146 "hlds.goal_form.c"
static const MR_EnumFunctorDescPtr hlds__goal_form__hlds__goal_form__enum_name_ordered_goal_loop_or_throw_status_0[2];

#line 149 "hlds.goal_form.c"
static const MR_Integer hlds__goal_form__hlds__goal_form__functor_number_map_goal_loop_or_throw_status_0[2];

#line 152 "hlds.goal_form.c"
static const MR_EnumFunctorDesc hlds__goal_form__hlds__goal_form__enum_functor_desc_goal_loop_status_0_0;

#line 155 "hlds.goal_form.c"
static const MR_EnumFunctorDesc hlds__goal_form__hlds__goal_form__enum_functor_desc_goal_loop_status_0_1;

#line 158 "hlds.goal_form.c"
static const MR_EnumFunctorDescPtr hlds__goal_form__hlds__goal_form__enum_value_ordered_goal_loop_status_0[2];

#line 161 "hlds.goal_form.c"
static const MR_EnumFunctorDescPtr hlds__goal_form__hlds__goal_form__enum_name_ordered_goal_loop_status_0[2];

#line 164 "hlds.goal_form.c"
static const MR_Integer hlds__goal_form__hlds__goal_form__functor_number_map_goal_loop_status_0[2];

#line 167 "hlds.goal_form.c"
static const MR_EnumFunctorDesc hlds__goal_form__hlds__goal_form__enum_functor_desc_goal_throw_status_0_0;

#line 170 "hlds.goal_form.c"
static const MR_EnumFunctorDesc hlds__goal_form__hlds__goal_form__enum_functor_desc_goal_throw_status_0_1;

#line 173 "hlds.goal_form.c"
static const MR_EnumFunctorDescPtr hlds__goal_form__hlds__goal_form__enum_value_ordered_goal_throw_status_0[2];

#line 176 "hlds.goal_form.c"
static const MR_EnumFunctorDescPtr hlds__goal_form__hlds__goal_form__enum_name_ordered_goal_throw_status_0[2];

#line 179 "hlds.goal_form.c"
static const MR_Integer hlds__goal_form__hlds__goal_form__functor_number_map_goal_throw_status_0[2];

#line 182 "hlds.goal_form.c"
static const MR_EnumFunctorDesc hlds__goal_form__hlds__goal_form__enum_functor_desc_has_subgoals_0_0;

#line 185 "hlds.goal_form.c"
static const MR_EnumFunctorDesc hlds__goal_form__hlds__goal_form__enum_functor_desc_has_subgoals_0_1;

#line 188 "hlds.goal_form.c"
static const MR_EnumFunctorDescPtr hlds__goal_form__hlds__goal_form__enum_value_ordered_has_subgoals_0[2];

#line 191 "hlds.goal_form.c"
static const MR_EnumFunctorDescPtr hlds__goal_form__hlds__goal_form__enum_name_ordered_has_subgoals_0[2];

#line 194 "hlds.goal_form.c"
static const MR_Integer hlds__goal_form__hlds__goal_form__functor_number_map_has_subgoals_0[2];

#line 197 "hlds.goal_form.c"
static MR_bool MR_CALL 
hlds__goal_form____Unify____goal_loop_or_throw_status_0_0_10001(
#line 200 "hlds.goal_form.c"
  MR_Box hlds__goal_form__wrapper_arg_1,
#line 202 "hlds.goal_form.c"
  MR_Box hlds__goal_form__wrapper_arg_2);

#line 205 "hlds.goal_form.c"
static void MR_CALL 
hlds__goal_form____Compare____goal_loop_or_throw_status_0_0_10001(
#line 208 "hlds.goal_form.c"
  MR_Box * hlds__goal_form__wrapper_arg_1,
#line 210 "hlds.goal_form.c"
  MR_Box hlds__goal_form__wrapper_arg_2,
#line 212 "hlds.goal_form.c"
  MR_Box hlds__goal_form__wrapper_arg_3);

#line 215 "hlds.goal_form.c"
static MR_bool MR_CALL 
hlds__goal_form____Unify____goal_loop_status_0_0_10001(
#line 218 "hlds.goal_form.c"
  MR_Box hlds__goal_form__wrapper_arg_1,
#line 220 "hlds.goal_form.c"
  MR_Box hlds__goal_form__wrapper_arg_2);

#line 223 "hlds.goal_form.c"
static void MR_CALL 
hlds__goal_form____Compare____goal_loop_status_0_0_10001(
#line 226 "hlds.goal_form.c"
  MR_Box * hlds__goal_form__wrapper_arg_1,
#line 228 "hlds.goal_form.c"
  MR_Box hlds__goal_form__wrapper_arg_2,
#line 230 "hlds.goal_form.c"
  MR_Box hlds__goal_form__wrapper_arg_3);

#line 233 "hlds.goal_form.c"
static MR_bool MR_CALL 
hlds__goal_form____Unify____goal_throw_status_0_0_10001(
#line 236 "hlds.goal_form.c"
  MR_Box hlds__goal_form__wrapper_arg_1,
#line 238 "hlds.goal_form.c"
  MR_Box hlds__goal_form__wrapper_arg_2);

#line 241 "hlds.goal_form.c"
static void MR_CALL 
hlds__goal_form____Compare____goal_throw_status_0_0_10001(
#line 244 "hlds.goal_form.c"
  MR_Box * hlds__goal_form__wrapper_arg_1,
#line 246 "hlds.goal_form.c"
  MR_Box hlds__goal_form__wrapper_arg_2,
#line 248 "hlds.goal_form.c"
  MR_Box hlds__goal_form__wrapper_arg_3);

#line 251 "hlds.goal_form.c"
static MR_bool MR_CALL 
hlds__goal_form____Unify____has_subgoals_0_0_10001(
#line 254 "hlds.goal_form.c"
  MR_Box hlds__goal_form__wrapper_arg_1,
#line 256 "hlds.goal_form.c"
  MR_Box hlds__goal_form__wrapper_arg_2);

#line 259 "hlds.goal_form.c"
static void MR_CALL 
hlds__goal_form____Compare____has_subgoals_0_0_10001(
#line 262 "hlds.goal_form.c"
  MR_Box * hlds__goal_form__wrapper_arg_1,
#line 264 "hlds.goal_form.c"
  MR_Box hlds__goal_form__wrapper_arg_2,
#line 266 "hlds.goal_form.c"
  MR_Box hlds__goal_form__wrapper_arg_3);

#line 261 "goal_form.m"
static void MR_CALL 
hlds__goal_form__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_99_97_110_95_116_104_114_111_119_95_50_95_95_91_50_93_95_48_5_p_0(
#line 261 "goal_form.m"
  MR_Word hlds__goal_form__GoalExpr_6,
#line 261 "goal_form.m"
  MR_Word * hlds__goal_form__Result_8,
#line 261 "goal_form.m"
  MR_Word hlds__goal_form__STATE_VARIABLE_ModuleInfo_0_82,
#line 261 "goal_form.m"
  MR_Word * hlds__goal_form__STATE_VARIABLE_ModuleInfo_83);

#line 1165 "goal_form.m"
static MR_Word MR_CALL 
hlds__goal_form__case_list_has_foreign_1_f_0(
#line 1165 "goal_form.m"
  MR_Word hlds__goal_form__HeadVar__1_1);

#line 1155 "goal_form.m"
static MR_Word MR_CALL 
hlds__goal_form__goal_list_has_foreign_1_f_0(
#line 1155 "goal_form.m"
  MR_Word hlds__goal_form__HeadVar__1_1);

#line 1059 "goal_form.m"
static void MR_CALL 
hlds__goal_form__count_recursive_calls_cases_5_p_0(
#line 1059 "goal_form.m"
  MR_Word hlds__goal_form__HeadVar__1_1,
#line 1059 "goal_form.m"
  MR_Word hlds__goal_form__PredId_2,
#line 1059 "goal_form.m"
  MR_Integer hlds__goal_form__ProcId_3,
#line 1059 "goal_form.m"
  MR_Integer * hlds__goal_form__Min_4,
#line 1059 "goal_form.m"
  MR_Integer * hlds__goal_form__Max_5);

#line 1043 "goal_form.m"
static void MR_CALL 
hlds__goal_form__count_recursive_calls_disj_5_p_0(
#line 1043 "goal_form.m"
  MR_Word hlds__goal_form__HeadVar__1_1,
#line 1043 "goal_form.m"
  MR_Word hlds__goal_form__PredId_2,
#line 1043 "goal_form.m"
  MR_Integer hlds__goal_form__ProcId_3,
#line 1043 "goal_form.m"
  MR_Integer * hlds__goal_form__HeadVar__4_4,
#line 1043 "goal_form.m"
  MR_Integer * hlds__goal_form__HeadVar__5_5);

#line 1031 "goal_form.m"
static void MR_CALL 
hlds__goal_form__count_recursive_calls_conj_7_p_0(
#line 1031 "goal_form.m"
  MR_Word hlds__goal_form__HeadVar__1_1,
#line 1031 "goal_form.m"
  MR_Word hlds__goal_form__PredId_2,
#line 1031 "goal_form.m"
  MR_Integer hlds__goal_form__ProcId_3,
#line 1031 "goal_form.m"
  MR_Integer hlds__goal_form__HeadVar__4_4,
#line 1031 "goal_form.m"
  MR_Integer hlds__goal_form__HeadVar__5_5,
#line 1031 "goal_form.m"
  MR_Integer * hlds__goal_form__Min_6,
#line 1031 "goal_form.m"
  MR_Integer * hlds__goal_form__Max_7);

#line 933 "goal_form.m"
static MR_bool MR_CALL 
hlds__goal_form__cannot_fail_before_stack_flush_conj_1_p_0(
#line 933 "goal_form.m"
  MR_Word hlds__goal_form__HeadVar__1_1);

#line 908 "goal_form.m"
static MR_bool MR_CALL 
hlds__goal_form__cannot_stack_flush_cases_1_p_0(
#line 908 "goal_form.m"
  MR_Word hlds__goal_form__HeadVar__1_1);

#line 901 "goal_form.m"
static MR_bool MR_CALL 
hlds__goal_form__cannot_stack_flush_goals_1_p_0(
#line 901 "goal_form.m"
  MR_Word hlds__goal_form__HeadVar__1_1);

#line 887 "goal_form.m"
static MR_bool MR_CALL 
hlds__goal_form__cannot_stack_flush_2_1_p_0(
#line 887 "goal_form.m"
  MR_Word hlds__goal_form__HeadVar__1_1);

#line 872 "goal_form.m"
static void MR_CALL 
hlds__goal_form__cases_may_allocate_heap_2_p_0(
#line 872 "goal_form.m"
  MR_Word hlds__goal_form__HeadVar__1_1,
#line 872 "goal_form.m"
  MR_Word * hlds__goal_form__HeadVar__2_2);

#line 862 "goal_form.m"
static void MR_CALL 
hlds__goal_form__goal_list_may_allocate_heap_2_p_0(
#line 862 "goal_form.m"
  MR_Word hlds__goal_form__HeadVar__1_1,
#line 862 "goal_form.m"
  MR_Word * hlds__goal_form__HeadVar__2_2);

#line 766 "goal_form.m"
static void MR_CALL 
hlds__goal_form__goal_may_allocate_heap_2_2_p_0(
#line 766 "goal_form.m"
  MR_Word hlds__goal_form__GoalExpr_3,
#line 766 "goal_form.m"
  MR_Word * hlds__goal_form__May_4);

#line 743 "goal_form.m"
static MR_Word MR_CALL 
hlds__goal_form__goal_is_flat_list_1_f_0(
#line 743 "goal_form.m"
  MR_Word hlds__goal_form__HeadVar__1_1);

#line 700 "goal_form.m"
static MR_Word MR_CALL 
hlds__goal_form__goal_is_flat_expr_1_f_0(
#line 700 "goal_form.m"
  MR_Word hlds__goal_form__GoalExpr_3);

#line 686 "goal_form.m"
static MR_Word MR_CALL 
hlds__goal_form__case_list_can_throw_2_f_0(
#line 686 "goal_form.m"
  MR_Word hlds__goal_form__MaybeModuleInfo_1,
#line 686 "goal_form.m"
  MR_Word hlds__goal_form__HeadVar__2_2);

#line 676 "goal_form.m"
static MR_Word MR_CALL 
hlds__goal_form__goal_list_can_throw_2_f_0(
#line 676 "goal_form.m"
  MR_Word hlds__goal_form__MaybeModuleInfo_1,
#line 676 "goal_form.m"
  MR_Word hlds__goal_form__HeadVar__2_2);

#line 578 "goal_form.m"
static MR_Word MR_CALL 
hlds__goal_form__goal_expr_can_throw_2_f_0(
#line 578 "goal_form.m"
  MR_Word hlds__goal_form__MaybeModuleInfo_4,
#line 578 "goal_form.m"
  MR_Word hlds__goal_form__GoalExpr_5);

#line 567 "goal_form.m"
static MR_Word MR_CALL 
hlds__goal_form__goal_can_throw_func_2_f_0(
#line 567 "goal_form.m"
  MR_Word hlds__goal_form__MaybeModuleInfo_4,
#line 567 "goal_form.m"
  MR_Word hlds__goal_form__HeadVar__2_2);

#line 555 "goal_form.m"
static MR_Word MR_CALL 
hlds__goal_form__case_list_can_loop_2_f_0(
#line 555 "goal_form.m"
  MR_Word hlds__goal_form__MaybeModuleInfo_1,
#line 555 "goal_form.m"
  MR_Word hlds__goal_form__HeadVar__2_2);

#line 545 "goal_form.m"
static MR_Word MR_CALL 
hlds__goal_form__goal_list_can_loop_2_f_0(
#line 545 "goal_form.m"
  MR_Word hlds__goal_form__MaybeModuleInfo_1,
#line 545 "goal_form.m"
  MR_Word hlds__goal_form__HeadVar__2_2);

#line 431 "goal_form.m"
static MR_Word MR_CALL 
hlds__goal_form__goal_can_loop_func_2_f_0(
#line 431 "goal_form.m"
  MR_Word hlds__goal_form__MaybeModuleInfo_4,
#line 431 "goal_form.m"
  MR_Word hlds__goal_form__Goal_5);

#line 372 "goal_form.m"
static void MR_CALL 
hlds__goal_form__cases_can_throw_4_p_0(
#line 372 "goal_form.m"
  MR_Word hlds__goal_form__HeadVar__1_1,
#line 372 "goal_form.m"
  MR_Word * hlds__goal_form__HeadVar__2_2,
#line 372 "goal_form.m"
  MR_Word hlds__goal_form__STATE_VARIABLE_ModuleInfo_0_3,
#line 372 "goal_form.m"
  MR_Word * hlds__goal_form__STATE_VARIABLE_ModuleInfo_4);

#line 358 "goal_form.m"
static void MR_CALL 
hlds__goal_form__goals_can_throw_4_p_0(
#line 358 "goal_form.m"
  MR_Word hlds__goal_form__HeadVar__1_1,
#line 358 "goal_form.m"
  MR_Word * hlds__goal_form__HeadVar__2_2,
#line 358 "goal_form.m"
  MR_Word hlds__goal_form__STATE_VARIABLE_ModuleInfo_0_3,
#line 358 "goal_form.m"
  MR_Word * hlds__goal_form__STATE_VARIABLE_ModuleInfo_4);

#line 228 "goal_form.m"
static MR_bool MR_CALL 
hlds__goal_form__only_constant_goals_3_p_0(
#line 228 "goal_form.m"
  MR_Word hlds__goal_form__HeadVar__1_1,
#line 228 "goal_form.m"
  MR_Word hlds__goal_form__STATE_VARIABLE_ToAssignVars_0_2,
#line 228 "goal_form.m"
  MR_Word * hlds__goal_form__STATE_VARIABLE_ToAssignVars_3);







#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "array.mh"
#include "array.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"



#line 510 "hlds.goal_form.c"
static const MR_EnumFunctorDesc hlds__goal_form__hlds__goal_form__enum_functor_desc_goal_loop_or_throw_status_0_0 = {
  (MR_String) "can_loop_or_throw",
  (MR_Integer) 0
};

#line 516 "hlds.goal_form.c"
static const MR_EnumFunctorDesc hlds__goal_form__hlds__goal_form__enum_functor_desc_goal_loop_or_throw_status_0_1 = {
  (MR_String) "cannot_loop_or_throw",
  (MR_Integer) 1
};

#line 522 "hlds.goal_form.c"
static const MR_EnumFunctorDescPtr hlds__goal_form__hlds__goal_form__enum_value_ordered_goal_loop_or_throw_status_0[2] = {
  &hlds__goal_form__hlds__goal_form__enum_functor_desc_goal_loop_or_throw_status_0_0,
  &hlds__goal_form__hlds__goal_form__enum_functor_desc_goal_loop_or_throw_status_0_1
};

#line 528 "hlds.goal_form.c"
static const MR_EnumFunctorDescPtr hlds__goal_form__hlds__goal_form__enum_name_ordered_goal_loop_or_throw_status_0[2] = {
  &hlds__goal_form__hlds__goal_form__enum_functor_desc_goal_loop_or_throw_status_0_0,
  &hlds__goal_form__hlds__goal_form__enum_functor_desc_goal_loop_or_throw_status_0_1
};

#line 534 "hlds.goal_form.c"
static const MR_Integer hlds__goal_form__hlds__goal_form__functor_number_map_goal_loop_or_throw_status_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 540 "hlds.goal_form.c"
const MR_TypeCtorInfo_Struct hlds__goal_form__hlds__goal_form__type_ctor_info_goal_loop_or_throw_status_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (hlds__goal_form____Unify____goal_loop_or_throw_status_0_0_10001)),
  ((MR_Box) (hlds__goal_form____Compare____goal_loop_or_throw_status_0_0_10001)),
  (MR_String) "hlds.goal_form",
  (MR_String) "goal_loop_or_throw_status",
  {     hlds__goal_form__hlds__goal_form__enum_name_ordered_goal_loop_or_throw_status_0 },
  {     hlds__goal_form__hlds__goal_form__enum_value_ordered_goal_loop_or_throw_status_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  hlds__goal_form__hlds__goal_form__functor_number_map_goal_loop_or_throw_status_0
};

#line 557 "hlds.goal_form.c"
static const MR_EnumFunctorDesc hlds__goal_form__hlds__goal_form__enum_functor_desc_goal_loop_status_0_0 = {
  (MR_String) "can_loop",
  (MR_Integer) 0
};

#line 563 "hlds.goal_form.c"
static const MR_EnumFunctorDesc hlds__goal_form__hlds__goal_form__enum_functor_desc_goal_loop_status_0_1 = {
  (MR_String) "cannot_loop",
  (MR_Integer) 1
};

#line 569 "hlds.goal_form.c"
static const MR_EnumFunctorDescPtr hlds__goal_form__hlds__goal_form__enum_value_ordered_goal_loop_status_0[2] = {
  &hlds__goal_form__hlds__goal_form__enum_functor_desc_goal_loop_status_0_0,
  &hlds__goal_form__hlds__goal_form__enum_functor_desc_goal_loop_status_0_1
};

#line 575 "hlds.goal_form.c"
static const MR_EnumFunctorDescPtr hlds__goal_form__hlds__goal_form__enum_name_ordered_goal_loop_status_0[2] = {
  &hlds__goal_form__hlds__goal_form__enum_functor_desc_goal_loop_status_0_0,
  &hlds__goal_form__hlds__goal_form__enum_functor_desc_goal_loop_status_0_1
};

#line 581 "hlds.goal_form.c"
static const MR_Integer hlds__goal_form__hlds__goal_form__functor_number_map_goal_loop_status_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 587 "hlds.goal_form.c"
const MR_TypeCtorInfo_Struct hlds__goal_form__hlds__goal_form__type_ctor_info_goal_loop_status_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (hlds__goal_form____Unify____goal_loop_status_0_0_10001)),
  ((MR_Box) (hlds__goal_form____Compare____goal_loop_status_0_0_10001)),
  (MR_String) "hlds.goal_form",
  (MR_String) "goal_loop_status",
  {     hlds__goal_form__hlds__goal_form__enum_name_ordered_goal_loop_status_0 },
  {     hlds__goal_form__hlds__goal_form__enum_value_ordered_goal_loop_status_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  hlds__goal_form__hlds__goal_form__functor_number_map_goal_loop_status_0
};

#line 604 "hlds.goal_form.c"
static const MR_EnumFunctorDesc hlds__goal_form__hlds__goal_form__enum_functor_desc_goal_throw_status_0_0 = {
  (MR_String) "can_throw",
  (MR_Integer) 0
};

#line 610 "hlds.goal_form.c"
static const MR_EnumFunctorDesc hlds__goal_form__hlds__goal_form__enum_functor_desc_goal_throw_status_0_1 = {
  (MR_String) "cannot_throw",
  (MR_Integer) 1
};

#line 616 "hlds.goal_form.c"
static const MR_EnumFunctorDescPtr hlds__goal_form__hlds__goal_form__enum_value_ordered_goal_throw_status_0[2] = {
  &hlds__goal_form__hlds__goal_form__enum_functor_desc_goal_throw_status_0_0,
  &hlds__goal_form__hlds__goal_form__enum_functor_desc_goal_throw_status_0_1
};

#line 622 "hlds.goal_form.c"
static const MR_EnumFunctorDescPtr hlds__goal_form__hlds__goal_form__enum_name_ordered_goal_throw_status_0[2] = {
  &hlds__goal_form__hlds__goal_form__enum_functor_desc_goal_throw_status_0_0,
  &hlds__goal_form__hlds__goal_form__enum_functor_desc_goal_throw_status_0_1
};

#line 628 "hlds.goal_form.c"
static const MR_Integer hlds__goal_form__hlds__goal_form__functor_number_map_goal_throw_status_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 634 "hlds.goal_form.c"
const MR_TypeCtorInfo_Struct hlds__goal_form__hlds__goal_form__type_ctor_info_goal_throw_status_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (hlds__goal_form____Unify____goal_throw_status_0_0_10001)),
  ((MR_Box) (hlds__goal_form____Compare____goal_throw_status_0_0_10001)),
  (MR_String) "hlds.goal_form",
  (MR_String) "goal_throw_status",
  {     hlds__goal_form__hlds__goal_form__enum_name_ordered_goal_throw_status_0 },
  {     hlds__goal_form__hlds__goal_form__enum_value_ordered_goal_throw_status_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  hlds__goal_form__hlds__goal_form__functor_number_map_goal_throw_status_0
};

#line 651 "hlds.goal_form.c"
static const MR_EnumFunctorDesc hlds__goal_form__hlds__goal_form__enum_functor_desc_has_subgoals_0_0 = {
  (MR_String) "has_subgoals",
  (MR_Integer) 0
};

#line 657 "hlds.goal_form.c"
static const MR_EnumFunctorDesc hlds__goal_form__hlds__goal_form__enum_functor_desc_has_subgoals_0_1 = {
  (MR_String) "does_not_have_subgoals",
  (MR_Integer) 1
};

#line 663 "hlds.goal_form.c"
static const MR_EnumFunctorDescPtr hlds__goal_form__hlds__goal_form__enum_value_ordered_has_subgoals_0[2] = {
  &hlds__goal_form__hlds__goal_form__enum_functor_desc_has_subgoals_0_0,
  &hlds__goal_form__hlds__goal_form__enum_functor_desc_has_subgoals_0_1
};

#line 669 "hlds.goal_form.c"
static const MR_EnumFunctorDescPtr hlds__goal_form__hlds__goal_form__enum_name_ordered_has_subgoals_0[2] = {
  &hlds__goal_form__hlds__goal_form__enum_functor_desc_has_subgoals_0_1,
  &hlds__goal_form__hlds__goal_form__enum_functor_desc_has_subgoals_0_0
};

#line 675 "hlds.goal_form.c"
static const MR_Integer hlds__goal_form__hlds__goal_form__functor_number_map_has_subgoals_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 681 "hlds.goal_form.c"
const MR_TypeCtorInfo_Struct hlds__goal_form__hlds__goal_form__type_ctor_info_has_subgoals_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (hlds__goal_form____Unify____has_subgoals_0_0_10001)),
  ((MR_Box) (hlds__goal_form____Compare____has_subgoals_0_0_10001)),
  (MR_String) "hlds.goal_form",
  (MR_String) "has_subgoals",
  {     hlds__goal_form__hlds__goal_form__enum_name_ordered_has_subgoals_0 },
  {     hlds__goal_form__hlds__goal_form__enum_value_ordered_has_subgoals_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  hlds__goal_form__hlds__goal_form__functor_number_map_has_subgoals_0
};

#line 698 "hlds.goal_form.c"
static MR_bool MR_CALL 
hlds__goal_form____Unify____goal_loop_or_throw_status_0_0_10001(
#line 701 "hlds.goal_form.c"
  MR_Box hlds__goal_form__wrapper_arg_1,
#line 703 "hlds.goal_form.c"
  MR_Box hlds__goal_form__wrapper_arg_2)
#line 705 "hlds.goal_form.c"
{
#line 707 "hlds.goal_form.c"
  {
#line 709 "hlds.goal_form.c"
    MR_bool hlds__goal_form__succeeded;

#line 712 "hlds.goal_form.c"
    {
#line 714 "hlds.goal_form.c"
      hlds__goal_form__succeeded = hlds__goal_form____Unify____goal_loop_or_throw_status_0_0(((MR_Word) hlds__goal_form__wrapper_arg_1), ((MR_Word) hlds__goal_form__wrapper_arg_2));
    }
#line 717 "hlds.goal_form.c"
    return hlds__goal_form__succeeded;
#line 719 "hlds.goal_form.c"
  }
#line 721 "hlds.goal_form.c"
}

#line 724 "hlds.goal_form.c"
static void MR_CALL 
hlds__goal_form____Compare____goal_loop_or_throw_status_0_0_10001(
#line 727 "hlds.goal_form.c"
  MR_Box * hlds__goal_form__wrapper_arg_1,
#line 729 "hlds.goal_form.c"
  MR_Box hlds__goal_form__wrapper_arg_2,
#line 731 "hlds.goal_form.c"
  MR_Box hlds__goal_form__wrapper_arg_3)
#line 733 "hlds.goal_form.c"
{
#line 735 "hlds.goal_form.c"
  {
#line 737 "hlds.goal_form.c"
    MR_Word hlds__goal_form__conv0_HeadVar__1_1;

#line 740 "hlds.goal_form.c"
    {
#line 742 "hlds.goal_form.c"
      hlds__goal_form____Compare____goal_loop_or_throw_status_0_0(&hlds__goal_form__conv0_HeadVar__1_1, ((MR_Word) hlds__goal_form__wrapper_arg_2), ((MR_Word) hlds__goal_form__wrapper_arg_3));
    }
#line 745 "hlds.goal_form.c"
    *hlds__goal_form__wrapper_arg_1 = ((MR_Box) (hlds__goal_form__conv0_HeadVar__1_1));
#line 747 "hlds.goal_form.c"
  }
#line 749 "hlds.goal_form.c"
}

#line 752 "hlds.goal_form.c"
static MR_bool MR_CALL 
hlds__goal_form____Unify____goal_loop_status_0_0_10001(
#line 755 "hlds.goal_form.c"
  MR_Box hlds__goal_form__wrapper_arg_1,
#line 757 "hlds.goal_form.c"
  MR_Box hlds__goal_form__wrapper_arg_2)
#line 759 "hlds.goal_form.c"
{
#line 761 "hlds.goal_form.c"
  {
#line 763 "hlds.goal_form.c"
    MR_bool hlds__goal_form__succeeded;

#line 766 "hlds.goal_form.c"
    {
#line 768 "hlds.goal_form.c"
      hlds__goal_form__succeeded = hlds__goal_form____Unify____goal_loop_status_0_0(((MR_Word) hlds__goal_form__wrapper_arg_1), ((MR_Word) hlds__goal_form__wrapper_arg_2));
    }
#line 771 "hlds.goal_form.c"
    return hlds__goal_form__succeeded;
#line 773 "hlds.goal_form.c"
  }
#line 775 "hlds.goal_form.c"
}

#line 778 "hlds.goal_form.c"
static void MR_CALL 
hlds__goal_form____Compare____goal_loop_status_0_0_10001(
#line 781 "hlds.goal_form.c"
  MR_Box * hlds__goal_form__wrapper_arg_1,
#line 783 "hlds.goal_form.c"
  MR_Box hlds__goal_form__wrapper_arg_2,
#line 785 "hlds.goal_form.c"
  MR_Box hlds__goal_form__wrapper_arg_3)
#line 787 "hlds.goal_form.c"
{
#line 789 "hlds.goal_form.c"
  {
#line 791 "hlds.goal_form.c"
    MR_Word hlds__goal_form__conv0_HeadVar__1_1;

#line 794 "hlds.goal_form.c"
    {
#line 796 "hlds.goal_form.c"
      hlds__goal_form____Compare____goal_loop_status_0_0(&hlds__goal_form__conv0_HeadVar__1_1, ((MR_Word) hlds__goal_form__wrapper_arg_2), ((MR_Word) hlds__goal_form__wrapper_arg_3));
    }
#line 799 "hlds.goal_form.c"
    *hlds__goal_form__wrapper_arg_1 = ((MR_Box) (hlds__goal_form__conv0_HeadVar__1_1));
#line 801 "hlds.goal_form.c"
  }
#line 803 "hlds.goal_form.c"
}

#line 806 "hlds.goal_form.c"
static MR_bool MR_CALL 
hlds__goal_form____Unify____goal_throw_status_0_0_10001(
#line 809 "hlds.goal_form.c"
  MR_Box hlds__goal_form__wrapper_arg_1,
#line 811 "hlds.goal_form.c"
  MR_Box hlds__goal_form__wrapper_arg_2)
#line 813 "hlds.goal_form.c"
{
#line 815 "hlds.goal_form.c"
  {
#line 817 "hlds.goal_form.c"
    MR_bool hlds__goal_form__succeeded;

#line 820 "hlds.goal_form.c"
    {
#line 822 "hlds.goal_form.c"
      hlds__goal_form__succeeded = hlds__goal_form____Unify____goal_throw_status_0_0(((MR_Word) hlds__goal_form__wrapper_arg_1), ((MR_Word) hlds__goal_form__wrapper_arg_2));
    }
#line 825 "hlds.goal_form.c"
    return hlds__goal_form__succeeded;
#line 827 "hlds.goal_form.c"
  }
#line 829 "hlds.goal_form.c"
}

#line 832 "hlds.goal_form.c"
static void MR_CALL 
hlds__goal_form____Compare____goal_throw_status_0_0_10001(
#line 835 "hlds.goal_form.c"
  MR_Box * hlds__goal_form__wrapper_arg_1,
#line 837 "hlds.goal_form.c"
  MR_Box hlds__goal_form__wrapper_arg_2,
#line 839 "hlds.goal_form.c"
  MR_Box hlds__goal_form__wrapper_arg_3)
#line 841 "hlds.goal_form.c"
{
#line 843 "hlds.goal_form.c"
  {
#line 845 "hlds.goal_form.c"
    MR_Word hlds__goal_form__conv0_HeadVar__1_1;

#line 848 "hlds.goal_form.c"
    {
#line 850 "hlds.goal_form.c"
      hlds__goal_form____Compare____goal_throw_status_0_0(&hlds__goal_form__conv0_HeadVar__1_1, ((MR_Word) hlds__goal_form__wrapper_arg_2), ((MR_Word) hlds__goal_form__wrapper_arg_3));
    }
#line 853 "hlds.goal_form.c"
    *hlds__goal_form__wrapper_arg_1 = ((MR_Box) (hlds__goal_form__conv0_HeadVar__1_1));
#line 855 "hlds.goal_form.c"
  }
#line 857 "hlds.goal_form.c"
}

#line 860 "hlds.goal_form.c"
static MR_bool MR_CALL 
hlds__goal_form____Unify____has_subgoals_0_0_10001(
#line 863 "hlds.goal_form.c"
  MR_Box hlds__goal_form__wrapper_arg_1,
#line 865 "hlds.goal_form.c"
  MR_Box hlds__goal_form__wrapper_arg_2)
#line 867 "hlds.goal_form.c"
{
#line 869 "hlds.goal_form.c"
  {
#line 871 "hlds.goal_form.c"
    MR_bool hlds__goal_form__succeeded;

#line 874 "hlds.goal_form.c"
    {
#line 876 "hlds.goal_form.c"
      hlds__goal_form__succeeded = hlds__goal_form____Unify____has_subgoals_0_0(((MR_Word) hlds__goal_form__wrapper_arg_1), ((MR_Word) hlds__goal_form__wrapper_arg_2));
    }
#line 879 "hlds.goal_form.c"
    return hlds__goal_form__succeeded;
#line 881 "hlds.goal_form.c"
  }
#line 883 "hlds.goal_form.c"
}

#line 886 "hlds.goal_form.c"
static void MR_CALL 
hlds__goal_form____Compare____has_subgoals_0_0_10001(
#line 889 "hlds.goal_form.c"
  MR_Box * hlds__goal_form__wrapper_arg_1,
#line 891 "hlds.goal_form.c"
  MR_Box hlds__goal_form__wrapper_arg_2,
#line 893 "hlds.goal_form.c"
  MR_Box hlds__goal_form__wrapper_arg_3)
#line 895 "hlds.goal_form.c"
{
#line 897 "hlds.goal_form.c"
  {
#line 899 "hlds.goal_form.c"
    MR_Word hlds__goal_form__conv0_HeadVar__1_1;

#line 902 "hlds.goal_form.c"
    {
#line 904 "hlds.goal_form.c"
      hlds__goal_form____Compare____has_subgoals_0_0(&hlds__goal_form__conv0_HeadVar__1_1, ((MR_Word) hlds__goal_form__wrapper_arg_2), ((MR_Word) hlds__goal_form__wrapper_arg_3));
    }
#line 907 "hlds.goal_form.c"
    *hlds__goal_form__wrapper_arg_1 = ((MR_Box) (hlds__goal_form__conv0_HeadVar__1_1));
#line 909 "hlds.goal_form.c"
  }
#line 911 "hlds.goal_form.c"
}

#line 261 "goal_form.m"
static void MR_CALL 
hlds__goal_form__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_99_97_110_95_116_104_114_111_119_95_50_95_95_91_50_93_95_48_5_p_0(
#line 261 "goal_form.m"
  MR_Word hlds__goal_form__GoalExpr_6,
#line 261 "goal_form.m"
  MR_Word * hlds__goal_form__Result_8,
#line 261 "goal_form.m"
  MR_Word hlds__goal_form__STATE_VARIABLE_ModuleInfo_0_82,
#line 261 "goal_form.m"
  MR_Word * hlds__goal_form__STATE_VARIABLE_ModuleInfo_83)
#line 261 "goal_form.m"
{
#line 273 "goal_form.m"
  {
#line 273 "goal_form.m"
    MR_bool hlds__goal_form__succeeded;

#line 273 "goal_form.m"
#line 273 "goal_form.m"
    switch (MR_tag((MR_Word) hlds__goal_form__GoalExpr_6)) {
#line 273 "goal_form.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 273 "goal_form.m"
      case (MR_Integer) 0:
#line 310 "goal_form.m"
        {
#line 310 "goal_form.m"
          MR_Word hlds__goal_form__SubGoal_57 = (MR_Word) MR_body(((MR_Word) hlds__goal_form__GoalExpr_6), (MR_Integer) 0);

#line 311 "goal_form.m"
          {
#line 311 "goal_form.m"
            hlds__goal_form__goal_can_throw_4_p_0(hlds__goal_form__SubGoal_57, hlds__goal_form__Result_8, hlds__goal_form__STATE_VARIABLE_ModuleInfo_0_82, hlds__goal_form__STATE_VARIABLE_ModuleInfo_83);
#line 311 "goal_form.m"
            return;
          }
#line 310 "goal_form.m"
        }
#line 273 "goal_form.m"
        break;
#line 273 "goal_form.m"
      case (MR_Integer) 1:
#line 296 "goal_form.m"
        {
#line 296 "goal_form.m"
          MR_Word hlds__goal_form__Uni_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__GoalExpr_6, (MR_Integer) 3)));
#line 296 "goal_form.m"
          MR_Word hlds__goal_form__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__GoalExpr_6, (MR_Integer) 0)));
#line 296 "goal_form.m"
          MR_Word hlds__goal_form__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__GoalExpr_6, (MR_Integer) 1)));
#line 296 "goal_form.m"
          MR_Word hlds__goal_form__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__GoalExpr_6, (MR_Integer) 2)));
#line 296 "goal_form.m"
          MR_Word hlds__goal_form__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__GoalExpr_6, (MR_Integer) 4)));

#line 301 "goal_form.m"
#line 301 "goal_form.m"
          switch (MR_tag((MR_Word) hlds__goal_form__Uni_35)) {
#line 301 "goal_form.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 301 "goal_form.m"
            case (MR_Integer) 0:
#line 301 "goal_form.m"
            case (MR_Integer) 1:
#line 301 "goal_form.m"
            case (MR_Integer) 2:
#line 307 "goal_form.m"
              *hlds__goal_form__Result_8 = (MR_Integer) 1;
#line 301 "goal_form.m"
              break;
#line 301 "goal_form.m"
            case (MR_Integer) 3:
#line 301 "goal_form.m"
#line 301 "goal_form.m"
              switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__Uni_35, (MR_Integer) 0)))) {
#line 301 "goal_form.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 301 "goal_form.m"
                case (MR_Integer) 0:
#line 307 "goal_form.m"
                  *hlds__goal_form__Result_8 = (MR_Integer) 1;
#line 301 "goal_form.m"
                  break;
#line 301 "goal_form.m"
                case (MR_Integer) 1:
#line 300 "goal_form.m"
                  *hlds__goal_form__Result_8 = (MR_Integer) 0;
#line 301 "goal_form.m"
                  break;
#line 301 "goal_form.m"
              }
#line 301 "goal_form.m"
              break;
#line 301 "goal_form.m"
          }
#line 296 "goal_form.m"
          *hlds__goal_form__STATE_VARIABLE_ModuleInfo_83 = hlds__goal_form__STATE_VARIABLE_ModuleInfo_0_82;
#line 296 "goal_form.m"
        }
#line 273 "goal_form.m"
        break;
#line 273 "goal_form.m"
      case (MR_Integer) 2:
#line 276 "goal_form.m"
        {
#line 276 "goal_form.m"
          MR_Word hlds__goal_form__PredId_16 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__GoalExpr_6, (MR_Integer) 0)));
#line 276 "goal_form.m"
          MR_Integer hlds__goal_form__ProcId_17 = ((MR_Integer) (MR_hl_field(MR_mktag(2), hlds__goal_form__GoalExpr_6, (MR_Integer) 1)));
#line 276 "goal_form.m"
          MR_Word hlds__goal_form__Status_22;
#line 276 "goal_form.m"
          MR_Word hlds__goal_form__V_92_92;
#line 276 "goal_form.m"
          MR_Word hlds__goal_form__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__GoalExpr_6, (MR_Integer) 2)));
#line 276 "goal_form.m"
          MR_Word hlds__goal_form__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__GoalExpr_6, (MR_Integer) 3)));
#line 276 "goal_form.m"
          MR_Word hlds__goal_form__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__GoalExpr_6, (MR_Integer) 4)));
#line 276 "goal_form.m"
          MR_Word hlds__goal_form__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__GoalExpr_6, (MR_Integer) 5)));

#line 277 "goal_form.m"
          {
#line 277 "goal_form.m"
            hlds__goal_form__V_92_92 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 277 "goal_form.m"
            MR_hl_field(MR_mktag(0), hlds__goal_form__V_92_92, 0) = ((MR_Box) (hlds__goal_form__PredId_16));
#line 277 "goal_form.m"
            MR_hl_field(MR_mktag(0), hlds__goal_form__V_92_92, 1) = ((MR_Box) (hlds__goal_form__ProcId_17));
#line 277 "goal_form.m"
          }
#line 277 "goal_form.m"
          {
#line 277 "goal_form.m"
            transform_hlds__exception_analysis__lookup_exception_analysis_result_4_p_0(hlds__goal_form__V_92_92, &hlds__goal_form__Status_22, hlds__goal_form__STATE_VARIABLE_ModuleInfo_0_82, hlds__goal_form__STATE_VARIABLE_ModuleInfo_83);
          }
#line 282 "goal_form.m"
#line 282 "goal_form.m"
          switch (MR_tag((MR_Word) hlds__goal_form__Status_22)) {
#line 282 "goal_form.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 282 "goal_form.m"
            case (MR_Integer) 0:
#line 282 "goal_form.m"
#line 282 "goal_form.m"
              switch (MR_unmkbody(hlds__goal_form__Status_22)) {
#line 282 "goal_form.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 282 "goal_form.m"
                case (MR_Integer) 0:
#line 281 "goal_form.m"
                  *hlds__goal_form__Result_8 = (MR_Integer) 1;
#line 282 "goal_form.m"
                  break;
#line 282 "goal_form.m"
                case (MR_Integer) 1:
#line 286 "goal_form.m"
                  *hlds__goal_form__Result_8 = (MR_Integer) 0;
#line 282 "goal_form.m"
                  break;
#line 282 "goal_form.m"
              }
#line 282 "goal_form.m"
              break;
#line 282 "goal_form.m"
            case (MR_Integer) 1:
#line 286 "goal_form.m"
              *hlds__goal_form__Result_8 = (MR_Integer) 0;
#line 282 "goal_form.m"
              break;
#line 282 "goal_form.m"
          }
#line 276 "goal_form.m"
        }
#line 273 "goal_form.m"
        break;
#line 273 "goal_form.m"
      case (MR_Integer) 3:
#line 273 "goal_form.m"
#line 273 "goal_form.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_6, (MR_Integer) 0)))) {
#line 273 "goal_form.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 273 "goal_form.m"
          case (MR_Integer) 0:
#line 289 "goal_form.m"
            {
#line 291 "goal_form.m"
              *hlds__goal_form__Result_8 = (MR_Integer) 0;
#line 289 "goal_form.m"
              *hlds__goal_form__STATE_VARIABLE_ModuleInfo_83 = hlds__goal_form__STATE_VARIABLE_ModuleInfo_0_82;
#line 289 "goal_form.m"
            }
#line 273 "goal_form.m"
            break;
#line 273 "goal_form.m"
          case (MR_Integer) 1:
#line 327 "goal_form.m"
            {
#line 327 "goal_form.m"
              MR_Word hlds__goal_form__Attributes_61 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_6, (MR_Integer) 1)));
#line 327 "goal_form.m"
              MR_Word hlds__goal_form__ExceptionStatus_68;
#line 327 "goal_form.m"
              MR_Word hlds__goal_form__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_6, (MR_Integer) 2)));
#line 327 "goal_form.m"
              MR_Integer hlds__goal_form__V_63_63 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_6, (MR_Integer) 3)));
#line 327 "goal_form.m"
              MR_Word hlds__goal_form__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_6, (MR_Integer) 4)));
#line 327 "goal_form.m"
              MR_Word hlds__goal_form__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_6, (MR_Integer) 5)));
#line 327 "goal_form.m"
              MR_Word hlds__goal_form__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_6, (MR_Integer) 6)));
#line 327 "goal_form.m"
              MR_Word hlds__goal_form__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_6, (MR_Integer) 7)));

#line 328 "goal_form.m"
              {
#line 328 "goal_form.m"
                hlds__goal_form__ExceptionStatus_68 = parse_tree__prog_data__get_may_throw_exception_1_f_0(hlds__goal_form__Attributes_61);
              }
#line 332 "goal_form.m"
#line 332 "goal_form.m"
              switch (hlds__goal_form__ExceptionStatus_68) {
#line 332 "goal_form.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 332 "goal_form.m"
                case (MR_Integer) 1:
#line 333 "goal_form.m"
                  {
#line 333 "goal_form.m"
                    MR_Word hlds__goal_form__V_88_88;

#line 334 "goal_form.m"
                    {
#line 334 "goal_form.m"
                      hlds__goal_form__V_88_88 = parse_tree__prog_data__get_may_call_mercury_1_f_0(hlds__goal_form__Attributes_61);
                    }
#line 334 "goal_form.m"
                    hlds__goal_form__succeeded = (hlds__goal_form__V_88_88 == (MR_Integer) 1);
#line 333 "goal_form.m"
                  }
#line 332 "goal_form.m"
                  break;
#line 332 "goal_form.m"
                case (MR_Integer) 0:
#line 331 "goal_form.m"
                  hlds__goal_form__succeeded = MR_TRUE;
#line 332 "goal_form.m"
                  break;
#line 332 "goal_form.m"
              }
#line 338 "goal_form.m"
              if (hlds__goal_form__succeeded)
#line 337 "goal_form.m"
                *hlds__goal_form__Result_8 = (MR_Integer) 1;
#line 338 "goal_form.m"
              else
#line 339 "goal_form.m"
                *hlds__goal_form__Result_8 = (MR_Integer) 0;
#line 327 "goal_form.m"
              *hlds__goal_form__STATE_VARIABLE_ModuleInfo_83 = hlds__goal_form__STATE_VARIABLE_ModuleInfo_0_82;
#line 327 "goal_form.m"
            }
#line 273 "goal_form.m"
            break;
#line 273 "goal_form.m"
          case (MR_Integer) 2:
#line 273 "goal_form.m"
            {
#line 273 "goal_form.m"
              MR_Word hlds__goal_form__Goals_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_6, (MR_Integer) 2)));
#line 267 "goal_form.m"
              MR_Word hlds__goal_form__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_6, (MR_Integer) 1)));

#line 274 "goal_form.m"
              {
#line 274 "goal_form.m"
                hlds__goal_form__goals_can_throw_4_p_0(hlds__goal_form__Goals_11, hlds__goal_form__Result_8, hlds__goal_form__STATE_VARIABLE_ModuleInfo_0_82, hlds__goal_form__STATE_VARIABLE_ModuleInfo_83);
#line 274 "goal_form.m"
                return;
              }
#line 273 "goal_form.m"
            }
#line 273 "goal_form.m"
            break;
#line 273 "goal_form.m"
          case (MR_Integer) 3:
#line 273 "goal_form.m"
            {
#line 273 "goal_form.m"
              MR_Word hlds__goal_form__Goals_99 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_6, (MR_Integer) 1)));

#line 274 "goal_form.m"
              {
#line 274 "goal_form.m"
                hlds__goal_form__goals_can_throw_4_p_0(hlds__goal_form__Goals_99, hlds__goal_form__Result_8, hlds__goal_form__STATE_VARIABLE_ModuleInfo_0_82, hlds__goal_form__STATE_VARIABLE_ModuleInfo_83);
#line 274 "goal_form.m"
                return;
              }
#line 273 "goal_form.m"
            }
#line 273 "goal_form.m"
            break;
#line 273 "goal_form.m"
          case (MR_Integer) 4:
#line 293 "goal_form.m"
            {
#line 293 "goal_form.m"
              MR_Word hlds__goal_form__Cases_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_6, (MR_Integer) 3)));
#line 293 "goal_form.m"
              MR_Word hlds__goal_form__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_6, (MR_Integer) 1)));
#line 293 "goal_form.m"
              MR_Word hlds__goal_form__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_6, (MR_Integer) 2)));

#line 294 "goal_form.m"
              {
#line 294 "goal_form.m"
                hlds__goal_form__cases_can_throw_4_p_0(hlds__goal_form__Cases_31, hlds__goal_form__Result_8, hlds__goal_form__STATE_VARIABLE_ModuleInfo_0_82, hlds__goal_form__STATE_VARIABLE_ModuleInfo_83);
#line 294 "goal_form.m"
                return;
              }
#line 293 "goal_form.m"
            }
#line 273 "goal_form.m"
            break;
#line 273 "goal_form.m"
          case (MR_Integer) 5:
#line 313 "goal_form.m"
            {
#line 313 "goal_form.m"
              MR_Word hlds__goal_form__Reason_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_6, (MR_Integer) 1)));
#line 313 "goal_form.m"
              MR_Word hlds__goal_form__SubGoal_98 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_6, (MR_Integer) 2)));
#line 315 "goal_form.m"
              MR_Word hlds__goal_form__FGT_60;
#line 315 "goal_form.m"
              MR_Word hlds__goal_form__V_59_59;

#line 315 "goal_form.m"
              hlds__goal_form__succeeded = ((((MR_tag((MR_Word) hlds__goal_form__Reason_58)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__Reason_58, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 315 "goal_form.m"
              if (hlds__goal_form__succeeded)
#line 315 "goal_form.m"
                {
#line 315 "goal_form.m"
                  hlds__goal_form__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__Reason_58, (MR_Integer) 1)));
#line 315 "goal_form.m"
                  hlds__goal_form__FGT_60 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__Reason_58, (MR_Integer) 2)));
#line 317 "goal_form.m"
#line 317 "goal_form.m"
                  switch (hlds__goal_form__FGT_60) {
#line 317 "goal_form.m"
                    default:
#line 317 "goal_form.m"
                      hlds__goal_form__succeeded = MR_FALSE;
#line 317 "goal_form.m"
                      break;
#line 317 "goal_form.m"
                    case (MR_Integer) 1:
#line 316 "goal_form.m"
                      hlds__goal_form__succeeded = MR_TRUE;
#line 317 "goal_form.m"
                      break;
#line 317 "goal_form.m"
                    case (MR_Integer) 2:
#line 317 "goal_form.m"
                      hlds__goal_form__succeeded = MR_TRUE;
#line 317 "goal_form.m"
                      break;
#line 317 "goal_form.m"
                  }
#line 315 "goal_form.m"
                }
#line 323 "goal_form.m"
              if (hlds__goal_form__succeeded)
#line 322 "goal_form.m"
                {
#line 322 "goal_form.m"
                  *hlds__goal_form__Result_8 = (MR_Integer) 1;
#line 322 "goal_form.m"
                  *hlds__goal_form__STATE_VARIABLE_ModuleInfo_83 = hlds__goal_form__STATE_VARIABLE_ModuleInfo_0_82;
#line 322 "goal_form.m"
                }
#line 323 "goal_form.m"
              else
#line 324 "goal_form.m"
                {
#line 324 "goal_form.m"
                  hlds__goal_form__goal_can_throw_4_p_0(hlds__goal_form__SubGoal_98, hlds__goal_form__Result_8, hlds__goal_form__STATE_VARIABLE_ModuleInfo_0_82, hlds__goal_form__STATE_VARIABLE_ModuleInfo_83);
#line 324 "goal_form.m"
                  return;
                }
#line 313 "goal_form.m"
            }
#line 273 "goal_form.m"
            break;
#line 273 "goal_form.m"
          case (MR_Integer) 6:
#line 273 "goal_form.m"
            {
#line 273 "goal_form.m"
              MR_Word hlds__goal_form__ThenGoal_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_6, (MR_Integer) 3)));
#line 273 "goal_form.m"
              MR_Word hlds__goal_form__ElseGoal_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_6, (MR_Integer) 4)));
#line 273 "goal_form.m"
              MR_Word hlds__goal_form__V_95_95;
#line 273 "goal_form.m"
              MR_Word hlds__goal_form__Goal_104 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_6, (MR_Integer) 2)));
#line 273 "goal_form.m"
              MR_Word hlds__goal_form__Goals_105;
#line 273 "goal_form.m"
              MR_Word hlds__goal_form__Result0_108;
#line 273 "goal_form.m"
              MR_Word hlds__goal_form__STATE_VARIABLE_ModuleInfo_15_111;
#line 271 "goal_form.m"
              MR_Word hlds__goal_form__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_6, (MR_Integer) 1)));

#line 272 "goal_form.m"
              {
#line 272 "goal_form.m"
                hlds__goal_form__V_95_95 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 272 "goal_form.m"
                MR_hl_field(MR_mktag(1), hlds__goal_form__V_95_95, 0) = ((MR_Box) (hlds__goal_form__ElseGoal_15));
#line 272 "goal_form.m"
                MR_hl_field(MR_mktag(1), hlds__goal_form__V_95_95, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 272 "goal_form.m"
              }
#line 272 "goal_form.m"
              {
#line 272 "goal_form.m"
                hlds__goal_form__Goals_105 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 272 "goal_form.m"
                MR_hl_field(MR_mktag(1), hlds__goal_form__Goals_105, 0) = ((MR_Box) (hlds__goal_form__ThenGoal_14));
#line 272 "goal_form.m"
                MR_hl_field(MR_mktag(1), hlds__goal_form__Goals_105, 1) = ((MR_Box) (hlds__goal_form__V_95_95));
#line 272 "goal_form.m"
              }
#line 363 "goal_form.m"
              {
#line 363 "goal_form.m"
                hlds__goal_form__goal_can_throw_4_p_0(hlds__goal_form__Goal_104, &hlds__goal_form__Result0_108, hlds__goal_form__STATE_VARIABLE_ModuleInfo_0_82, &hlds__goal_form__STATE_VARIABLE_ModuleInfo_15_111);
              }
#line 367 "goal_form.m"
#line 367 "goal_form.m"
              switch (hlds__goal_form__Result0_108) {
#line 367 "goal_form.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 367 "goal_form.m"
                case (MR_Integer) 0:
#line 368 "goal_form.m"
                  {
#line 369 "goal_form.m"
                    *hlds__goal_form__Result_8 = (MR_Integer) 0;
#line 368 "goal_form.m"
                    *hlds__goal_form__STATE_VARIABLE_ModuleInfo_83 = hlds__goal_form__STATE_VARIABLE_ModuleInfo_15_111;
#line 368 "goal_form.m"
                  }
#line 367 "goal_form.m"
                  break;
#line 367 "goal_form.m"
                case (MR_Integer) 1:
#line 362 "goal_form.m"
                  {
#line 362 "goal_form.m"
                    MR_Word hlds__goal_form__Goal_116 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__Goals_105, (MR_Integer) 0)));
#line 362 "goal_form.m"
                    MR_Word hlds__goal_form__Goals_117 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__Goals_105, (MR_Integer) 1)));
#line 362 "goal_form.m"
                    MR_Word hlds__goal_form__Result0_120;
#line 362 "goal_form.m"
                    MR_Word hlds__goal_form__STATE_VARIABLE_ModuleInfo_15_123;

#line 363 "goal_form.m"
                    {
#line 363 "goal_form.m"
                      hlds__goal_form__goal_can_throw_4_p_0(hlds__goal_form__Goal_116, &hlds__goal_form__Result0_120, hlds__goal_form__STATE_VARIABLE_ModuleInfo_15_111, &hlds__goal_form__STATE_VARIABLE_ModuleInfo_15_123);
                    }
#line 367 "goal_form.m"
#line 367 "goal_form.m"
                    switch (hlds__goal_form__Result0_120) {
#line 367 "goal_form.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 367 "goal_form.m"
                      case (MR_Integer) 0:
#line 368 "goal_form.m"
                        {
#line 369 "goal_form.m"
                          *hlds__goal_form__Result_8 = (MR_Integer) 0;
#line 368 "goal_form.m"
                          *hlds__goal_form__STATE_VARIABLE_ModuleInfo_83 = hlds__goal_form__STATE_VARIABLE_ModuleInfo_15_123;
#line 368 "goal_form.m"
                        }
#line 367 "goal_form.m"
                        break;
#line 367 "goal_form.m"
                      case (MR_Integer) 1:
#line 362 "goal_form.m"
                        {
#line 362 "goal_form.m"
                          MR_Word hlds__goal_form__Goal_128 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__Goals_117, (MR_Integer) 0)));
#line 362 "goal_form.m"
                          MR_Word hlds__goal_form__Result0_132;
#line 362 "goal_form.m"
                          MR_Word hlds__goal_form__STATE_VARIABLE_ModuleInfo_15_135;
#line 362 "goal_form.m"
                          MR_Word hlds__goal_form__Goals_129 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__Goals_117, (MR_Integer) 1)));

#line 363 "goal_form.m"
                          {
#line 363 "goal_form.m"
                            hlds__goal_form__goal_can_throw_4_p_0(hlds__goal_form__Goal_128, &hlds__goal_form__Result0_132, hlds__goal_form__STATE_VARIABLE_ModuleInfo_15_123, &hlds__goal_form__STATE_VARIABLE_ModuleInfo_15_135);
                          }
#line 367 "goal_form.m"
#line 367 "goal_form.m"
                          switch (hlds__goal_form__Result0_132) {
#line 367 "goal_form.m"
                            default: /*NOTREACHED*/ MR_assert(0);
#line 367 "goal_form.m"
                            case (MR_Integer) 0:
#line 368 "goal_form.m"
                              {
#line 369 "goal_form.m"
                                *hlds__goal_form__Result_8 = (MR_Integer) 0;
#line 368 "goal_form.m"
                                *hlds__goal_form__STATE_VARIABLE_ModuleInfo_83 = hlds__goal_form__STATE_VARIABLE_ModuleInfo_15_135;
#line 368 "goal_form.m"
                              }
#line 367 "goal_form.m"
                              break;
#line 367 "goal_form.m"
                            case (MR_Integer) 1:
#line 361 "goal_form.m"
                              {
#line 361 "goal_form.m"
                                *hlds__goal_form__Result_8 = (MR_Integer) 1;
#line 361 "goal_form.m"
                                *hlds__goal_form__STATE_VARIABLE_ModuleInfo_83 = hlds__goal_form__STATE_VARIABLE_ModuleInfo_15_135;
#line 361 "goal_form.m"
                              }
#line 367 "goal_form.m"
                              break;
#line 367 "goal_form.m"
                          }
#line 362 "goal_form.m"
                        }
#line 367 "goal_form.m"
                        break;
#line 367 "goal_form.m"
                    }
#line 362 "goal_form.m"
                  }
#line 367 "goal_form.m"
                  break;
#line 367 "goal_form.m"
              }
#line 273 "goal_form.m"
            }
#line 273 "goal_form.m"
            break;
#line 273 "goal_form.m"
          case (MR_Integer) 7:
#line 342 "goal_form.m"
            {
#line 342 "goal_form.m"
              MR_Word hlds__goal_form__ShortHand_69 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_6, (MR_Integer) 1)));

#line 346 "goal_form.m"
#line 346 "goal_form.m"
              switch (MR_tag((MR_Word) hlds__goal_form__ShortHand_69)) {
#line 346 "goal_form.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 346 "goal_form.m"
                case (MR_Integer) 0:
#line 344 "goal_form.m"
                  {
#line 344 "goal_form.m"
                    MR_Word hlds__goal_form__GoalB_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__ShortHand_69, (MR_Integer) 1)));
#line 344 "goal_form.m"
                    MR_Word hlds__goal_form__Goal_152 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__ShortHand_69, (MR_Integer) 0)));
#line 344 "goal_form.m"
                    MR_Word hlds__goal_form__Goals_153;
#line 344 "goal_form.m"
                    MR_Word hlds__goal_form__Result0_156;
#line 344 "goal_form.m"
                    MR_Word hlds__goal_form__STATE_VARIABLE_ModuleInfo_15_159;

#line 345 "goal_form.m"
                    {
#line 345 "goal_form.m"
                      hlds__goal_form__Goals_153 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 345 "goal_form.m"
                      MR_hl_field(MR_mktag(1), hlds__goal_form__Goals_153, 0) = ((MR_Box) (hlds__goal_form__GoalB_71));
#line 345 "goal_form.m"
                      MR_hl_field(MR_mktag(1), hlds__goal_form__Goals_153, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 345 "goal_form.m"
                    }
#line 363 "goal_form.m"
                    {
#line 363 "goal_form.m"
                      hlds__goal_form__goal_can_throw_4_p_0(hlds__goal_form__Goal_152, &hlds__goal_form__Result0_156, hlds__goal_form__STATE_VARIABLE_ModuleInfo_0_82, &hlds__goal_form__STATE_VARIABLE_ModuleInfo_15_159);
                    }
#line 367 "goal_form.m"
#line 367 "goal_form.m"
                    switch (hlds__goal_form__Result0_156) {
#line 367 "goal_form.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 367 "goal_form.m"
                      case (MR_Integer) 0:
#line 368 "goal_form.m"
                        {
#line 369 "goal_form.m"
                          *hlds__goal_form__Result_8 = (MR_Integer) 0;
#line 368 "goal_form.m"
                          *hlds__goal_form__STATE_VARIABLE_ModuleInfo_83 = hlds__goal_form__STATE_VARIABLE_ModuleInfo_15_159;
#line 368 "goal_form.m"
                        }
#line 367 "goal_form.m"
                        break;
#line 367 "goal_form.m"
                      case (MR_Integer) 1:
#line 362 "goal_form.m"
                        {
#line 362 "goal_form.m"
                          MR_Word hlds__goal_form__Goal_164 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__Goals_153, (MR_Integer) 0)));
#line 362 "goal_form.m"
                          MR_Word hlds__goal_form__Result0_168;
#line 362 "goal_form.m"
                          MR_Word hlds__goal_form__STATE_VARIABLE_ModuleInfo_15_171;
#line 362 "goal_form.m"
                          MR_Word hlds__goal_form__Goals_165 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__Goals_153, (MR_Integer) 1)));

#line 363 "goal_form.m"
                          {
#line 363 "goal_form.m"
                            hlds__goal_form__goal_can_throw_4_p_0(hlds__goal_form__Goal_164, &hlds__goal_form__Result0_168, hlds__goal_form__STATE_VARIABLE_ModuleInfo_15_159, &hlds__goal_form__STATE_VARIABLE_ModuleInfo_15_171);
                          }
#line 367 "goal_form.m"
#line 367 "goal_form.m"
                          switch (hlds__goal_form__Result0_168) {
#line 367 "goal_form.m"
                            default: /*NOTREACHED*/ MR_assert(0);
#line 367 "goal_form.m"
                            case (MR_Integer) 0:
#line 368 "goal_form.m"
                              {
#line 369 "goal_form.m"
                                *hlds__goal_form__Result_8 = (MR_Integer) 0;
#line 368 "goal_form.m"
                                *hlds__goal_form__STATE_VARIABLE_ModuleInfo_83 = hlds__goal_form__STATE_VARIABLE_ModuleInfo_15_171;
#line 368 "goal_form.m"
                              }
#line 367 "goal_form.m"
                              break;
#line 367 "goal_form.m"
                            case (MR_Integer) 1:
#line 361 "goal_form.m"
                              {
#line 361 "goal_form.m"
                                *hlds__goal_form__Result_8 = (MR_Integer) 1;
#line 361 "goal_form.m"
                                *hlds__goal_form__STATE_VARIABLE_ModuleInfo_83 = hlds__goal_form__STATE_VARIABLE_ModuleInfo_15_171;
#line 361 "goal_form.m"
                              }
#line 367 "goal_form.m"
                              break;
#line 367 "goal_form.m"
                          }
#line 362 "goal_form.m"
                        }
#line 367 "goal_form.m"
                        break;
#line 367 "goal_form.m"
                    }
#line 344 "goal_form.m"
                  }
#line 346 "goal_form.m"
                  break;
#line 346 "goal_form.m"
                case (MR_Integer) 1:
#line 347 "goal_form.m"
                  {
#line 351 "goal_form.m"
                    *hlds__goal_form__Result_8 = (MR_Integer) 0;
#line 347 "goal_form.m"
                    *hlds__goal_form__STATE_VARIABLE_ModuleInfo_83 = hlds__goal_form__STATE_VARIABLE_ModuleInfo_0_82;
#line 347 "goal_form.m"
                  }
#line 346 "goal_form.m"
                  break;
#line 346 "goal_form.m"
                case (MR_Integer) 2:
#line 353 "goal_form.m"
                  {
#line 354 "goal_form.m"
                    *hlds__goal_form__Result_8 = (MR_Integer) 0;
#line 353 "goal_form.m"
                    *hlds__goal_form__STATE_VARIABLE_ModuleInfo_83 = hlds__goal_form__STATE_VARIABLE_ModuleInfo_0_82;
#line 353 "goal_form.m"
                  }
#line 346 "goal_form.m"
                  break;
#line 346 "goal_form.m"
              }
#line 342 "goal_form.m"
            }
#line 273 "goal_form.m"
            break;
#line 273 "goal_form.m"
        }
#line 273 "goal_form.m"
        break;
#line 273 "goal_form.m"
    }
#line 273 "goal_form.m"
  }
#line 261 "goal_form.m"
}

#line 185 "goal_form.m"
void MR_CALL 
hlds__goal_form____Compare____has_subgoals_0_0(
#line 185 "goal_form.m"
  MR_Word * hlds__goal_form__HeadVar__1_1,
#line 185 "goal_form.m"
  MR_Word hlds__goal_form__HeadVar__2_2,
#line 185 "goal_form.m"
  MR_Word hlds__goal_form__HeadVar__3_3)
#line 185 "goal_form.m"
{
#line 185 "goal_form.m"
  {
#line 185 "goal_form.m"
    MR_bool hlds__goal_form__succeeded;
#line 185 "goal_form.m"
    MR_Integer hlds__goal_form__Cast_HeadVar1_4 = (MR_Integer) hlds__goal_form__HeadVar__2_2;
#line 185 "goal_form.m"
    MR_Integer hlds__goal_form__Cast_HeadVar2_5 = (MR_Integer) hlds__goal_form__HeadVar__3_3;

#line 185 "goal_form.m"
    {
#line 185 "goal_form.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(hlds__goal_form__HeadVar__1_1, hlds__goal_form__Cast_HeadVar1_4, hlds__goal_form__Cast_HeadVar2_5);
#line 185 "goal_form.m"
      return;
    }
#line 185 "goal_form.m"
  }
#line 185 "goal_form.m"
}

#line 185 "goal_form.m"
MR_bool MR_CALL 
hlds__goal_form____Unify____has_subgoals_0_0(
#line 185 "goal_form.m"
  MR_Word hlds__goal_form__HeadVar__2_1,
#line 185 "goal_form.m"
  MR_Word hlds__goal_form__HeadVar__2_2)
#line 185 "goal_form.m"
{
#line 1676 "hlds.goal_form.c"
  {
#line 1678 "hlds.goal_form.c"
    MR_bool hlds__goal_form__succeeded = (hlds__goal_form__HeadVar__2_1 == hlds__goal_form__HeadVar__2_2);

#line 1681 "hlds.goal_form.c"
    return hlds__goal_form__succeeded;
#line 1683 "hlds.goal_form.c"
  }
#line 185 "goal_form.m"
}

#line 52 "goal_form.m"
void MR_CALL 
hlds__goal_form____Compare____goal_throw_status_0_0(
#line 52 "goal_form.m"
  MR_Word * hlds__goal_form__HeadVar__1_1,
#line 52 "goal_form.m"
  MR_Word hlds__goal_form__HeadVar__2_2,
#line 52 "goal_form.m"
  MR_Word hlds__goal_form__HeadVar__3_3)
#line 52 "goal_form.m"
{
#line 52 "goal_form.m"
  {
#line 52 "goal_form.m"
    MR_bool hlds__goal_form__succeeded;
#line 52 "goal_form.m"
    MR_Integer hlds__goal_form__Cast_HeadVar1_4 = (MR_Integer) hlds__goal_form__HeadVar__2_2;
#line 52 "goal_form.m"
    MR_Integer hlds__goal_form__Cast_HeadVar2_5 = (MR_Integer) hlds__goal_form__HeadVar__3_3;

#line 52 "goal_form.m"
    {
#line 52 "goal_form.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(hlds__goal_form__HeadVar__1_1, hlds__goal_form__Cast_HeadVar1_4, hlds__goal_form__Cast_HeadVar2_5);
#line 52 "goal_form.m"
      return;
    }
#line 52 "goal_form.m"
  }
#line 52 "goal_form.m"
}

#line 52 "goal_form.m"
MR_bool MR_CALL 
hlds__goal_form____Unify____goal_throw_status_0_0(
#line 52 "goal_form.m"
  MR_Word hlds__goal_form__HeadVar__2_1,
#line 52 "goal_form.m"
  MR_Word hlds__goal_form__HeadVar__2_2)
#line 52 "goal_form.m"
{
#line 1729 "hlds.goal_form.c"
  {
#line 1731 "hlds.goal_form.c"
    MR_bool hlds__goal_form__succeeded = (hlds__goal_form__HeadVar__2_1 == hlds__goal_form__HeadVar__2_2);

#line 1734 "hlds.goal_form.c"
    return hlds__goal_form__succeeded;
#line 1736 "hlds.goal_form.c"
  }
#line 52 "goal_form.m"
}

#line 46 "goal_form.m"
void MR_CALL 
hlds__goal_form____Compare____goal_loop_status_0_0(
#line 46 "goal_form.m"
  MR_Word * hlds__goal_form__HeadVar__1_1,
#line 46 "goal_form.m"
  MR_Word hlds__goal_form__HeadVar__2_2,
#line 46 "goal_form.m"
  MR_Word hlds__goal_form__HeadVar__3_3)
#line 46 "goal_form.m"
{
#line 46 "goal_form.m"
  {
#line 46 "goal_form.m"
    MR_bool hlds__goal_form__succeeded;
#line 46 "goal_form.m"
    MR_Integer hlds__goal_form__Cast_HeadVar1_4 = (MR_Integer) hlds__goal_form__HeadVar__2_2;
#line 46 "goal_form.m"
    MR_Integer hlds__goal_form__Cast_HeadVar2_5 = (MR_Integer) hlds__goal_form__HeadVar__3_3;

#line 46 "goal_form.m"
    {
#line 46 "goal_form.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(hlds__goal_form__HeadVar__1_1, hlds__goal_form__Cast_HeadVar1_4, hlds__goal_form__Cast_HeadVar2_5);
#line 46 "goal_form.m"
      return;
    }
#line 46 "goal_form.m"
  }
#line 46 "goal_form.m"
}

#line 46 "goal_form.m"
MR_bool MR_CALL 
hlds__goal_form____Unify____goal_loop_status_0_0(
#line 46 "goal_form.m"
  MR_Word hlds__goal_form__HeadVar__2_1,
#line 46 "goal_form.m"
  MR_Word hlds__goal_form__HeadVar__2_2)
#line 46 "goal_form.m"
{
#line 1782 "hlds.goal_form.c"
  {
#line 1784 "hlds.goal_form.c"
    MR_bool hlds__goal_form__succeeded = (hlds__goal_form__HeadVar__2_1 == hlds__goal_form__HeadVar__2_2);

#line 1787 "hlds.goal_form.c"
    return hlds__goal_form__succeeded;
#line 1789 "hlds.goal_form.c"
  }
#line 46 "goal_form.m"
}

#line 58 "goal_form.m"
void MR_CALL 
hlds__goal_form____Compare____goal_loop_or_throw_status_0_0(
#line 58 "goal_form.m"
  MR_Word * hlds__goal_form__HeadVar__1_1,
#line 58 "goal_form.m"
  MR_Word hlds__goal_form__HeadVar__2_2,
#line 58 "goal_form.m"
  MR_Word hlds__goal_form__HeadVar__3_3)
#line 58 "goal_form.m"
{
#line 58 "goal_form.m"
  {
#line 58 "goal_form.m"
    MR_bool hlds__goal_form__succeeded;
#line 58 "goal_form.m"
    MR_Integer hlds__goal_form__Cast_HeadVar1_4 = (MR_Integer) hlds__goal_form__HeadVar__2_2;
#line 58 "goal_form.m"
    MR_Integer hlds__goal_form__Cast_HeadVar2_5 = (MR_Integer) hlds__goal_form__HeadVar__3_3;

#line 58 "goal_form.m"
    {
#line 58 "goal_form.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(hlds__goal_form__HeadVar__1_1, hlds__goal_form__Cast_HeadVar1_4, hlds__goal_form__Cast_HeadVar2_5);
#line 58 "goal_form.m"
      return;
    }
#line 58 "goal_form.m"
  }
#line 58 "goal_form.m"
}

#line 58 "goal_form.m"
MR_bool MR_CALL 
hlds__goal_form____Unify____goal_loop_or_throw_status_0_0(
#line 58 "goal_form.m"
  MR_Word hlds__goal_form__HeadVar__2_1,
#line 58 "goal_form.m"
  MR_Word hlds__goal_form__HeadVar__2_2)
#line 58 "goal_form.m"
{
#line 1835 "hlds.goal_form.c"
  {
#line 1837 "hlds.goal_form.c"
    MR_bool hlds__goal_form__succeeded = (hlds__goal_form__HeadVar__2_1 == hlds__goal_form__HeadVar__2_2);

#line 1840 "hlds.goal_form.c"
    return hlds__goal_form__succeeded;
#line 1842 "hlds.goal_form.c"
  }
#line 58 "goal_form.m"
}

#line 1165 "goal_form.m"
static MR_Word MR_CALL 
hlds__goal_form__case_list_has_foreign_1_f_0(
#line 1165 "goal_form.m"
  MR_Word hlds__goal_form__HeadVar__1_1)
#line 1165 "goal_form.m"
{
#line 1167 "goal_form.m"
  while (MR_TRUE)
#line 1167 "goal_form.m"
    {
#line 1167 "goal_form.m"
      /* tailcall optimized into a loop */
#line 1167 "goal_form.m"
      {
#line 1167 "goal_form.m"
        MR_bool hlds__goal_form__succeeded;
#line 1167 "goal_form.m"
        MR_Word hlds__goal_form__HeadVar__2_2;

#line 1167 "goal_form.m"
        if ((hlds__goal_form__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1167 "goal_form.m"
          hlds__goal_form__HeadVar__2_2 = (MR_Integer) 0;
#line 1167 "goal_form.m"
        else
#line 1168 "goal_form.m"
          {
#line 1168 "goal_form.m"
            MR_Word hlds__goal_form__Case_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__HeadVar__1_1, (MR_Integer) 0)));
#line 1168 "goal_form.m"
            MR_Word hlds__goal_form__Cases_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__HeadVar__1_1, (MR_Integer) 1)));
#line 1168 "goal_form.m"
            MR_Word hlds__goal_form__Goal_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Case_3, (MR_Integer) 2)));
#line 1169 "goal_form.m"
            MR_Word hlds__goal_form__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Case_3, (MR_Integer) 0)));
#line 1169 "goal_form.m"
            MR_Word hlds__goal_form__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Case_3, (MR_Integer) 1)));
#line 1170 "goal_form.m"
            MR_Word hlds__goal_form__V_9_9;

#line 1170 "goal_form.m"
            {
#line 1170 "goal_form.m"
              hlds__goal_form__V_9_9 = hlds__goal_form__goal_has_foreign_1_f_0(hlds__goal_form__Goal_8);
            }
#line 1170 "goal_form.m"
            hlds__goal_form__succeeded = (hlds__goal_form__V_9_9 == (MR_Integer) 1);
#line 1172 "goal_form.m"
            if (hlds__goal_form__succeeded)
#line 1171 "goal_form.m"
              hlds__goal_form__HeadVar__2_2 = (MR_Integer) 1;
#line 1172 "goal_form.m"
            else
#line 1173 "goal_form.m"
              {
#line 1173 "goal_form.m"
                /* direct tailcall eliminated */
#line 1173 "goal_form.m"
                {
#line 1173 "goal_form.m"
                  MR_Word hlds__goal_form__HeadVar__1__tmp_copy_1 = hlds__goal_form__Cases_4;

#line 1173 "goal_form.m"
                  hlds__goal_form__HeadVar__1_1 = hlds__goal_form__HeadVar__1__tmp_copy_1;
#line 1173 "goal_form.m"
                }
#line 1173 "goal_form.m"
                continue;
#line 1173 "goal_form.m"
              }
#line 1168 "goal_form.m"
          }
#line 1167 "goal_form.m"
        return hlds__goal_form__HeadVar__2_2;
#line 1167 "goal_form.m"
      }
#line 1167 "goal_form.m"
      break;
#line 1167 "goal_form.m"
    }
#line 1165 "goal_form.m"
}

#line 1155 "goal_form.m"
static MR_Word MR_CALL 
hlds__goal_form__goal_list_has_foreign_1_f_0(
#line 1155 "goal_form.m"
  MR_Word hlds__goal_form__HeadVar__1_1)
#line 1155 "goal_form.m"
{
#line 1157 "goal_form.m"
  while (MR_TRUE)
#line 1157 "goal_form.m"
    {
#line 1157 "goal_form.m"
      /* tailcall optimized into a loop */
#line 1157 "goal_form.m"
      {
#line 1157 "goal_form.m"
        MR_bool hlds__goal_form__succeeded;
#line 1157 "goal_form.m"
        MR_Word hlds__goal_form__HeadVar__2_2;

#line 1157 "goal_form.m"
        if ((hlds__goal_form__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1157 "goal_form.m"
          hlds__goal_form__HeadVar__2_2 = (MR_Integer) 0;
#line 1157 "goal_form.m"
        else
#line 1158 "goal_form.m"
          {
#line 1158 "goal_form.m"
            MR_Word hlds__goal_form__Goal_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__HeadVar__1_1, (MR_Integer) 0)));
#line 1158 "goal_form.m"
            MR_Word hlds__goal_form__Goals_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__HeadVar__1_1, (MR_Integer) 1)));
#line 1159 "goal_form.m"
            MR_Word hlds__goal_form__V_6_6;

#line 1159 "goal_form.m"
            {
#line 1159 "goal_form.m"
              hlds__goal_form__V_6_6 = hlds__goal_form__goal_has_foreign_1_f_0(hlds__goal_form__Goal_3);
            }
#line 1159 "goal_form.m"
            hlds__goal_form__succeeded = (hlds__goal_form__V_6_6 == (MR_Integer) 1);
#line 1161 "goal_form.m"
            if (hlds__goal_form__succeeded)
#line 1160 "goal_form.m"
              hlds__goal_form__HeadVar__2_2 = (MR_Integer) 1;
#line 1161 "goal_form.m"
            else
#line 1162 "goal_form.m"
              {
#line 1162 "goal_form.m"
                /* direct tailcall eliminated */
#line 1162 "goal_form.m"
                {
#line 1162 "goal_form.m"
                  MR_Word hlds__goal_form__HeadVar__1__tmp_copy_1 = hlds__goal_form__Goals_4;

#line 1162 "goal_form.m"
                  hlds__goal_form__HeadVar__1_1 = hlds__goal_form__HeadVar__1__tmp_copy_1;
#line 1162 "goal_form.m"
                }
#line 1162 "goal_form.m"
                continue;
#line 1162 "goal_form.m"
              }
#line 1158 "goal_form.m"
          }
#line 1157 "goal_form.m"
        return hlds__goal_form__HeadVar__2_2;
#line 1157 "goal_form.m"
      }
#line 1157 "goal_form.m"
      break;
#line 1157 "goal_form.m"
    }
#line 1155 "goal_form.m"
}

#line 1059 "goal_form.m"
static void MR_CALL 
hlds__goal_form__count_recursive_calls_cases_5_p_0(
#line 1059 "goal_form.m"
  MR_Word hlds__goal_form__HeadVar__1_1,
#line 1059 "goal_form.m"
  MR_Word hlds__goal_form__PredId_2,
#line 1059 "goal_form.m"
  MR_Integer hlds__goal_form__ProcId_3,
#line 1059 "goal_form.m"
  MR_Integer * hlds__goal_form__Min_4,
#line 1059 "goal_form.m"
  MR_Integer * hlds__goal_form__Max_5)
#line 1059 "goal_form.m"
{
#line 1062 "goal_form.m"
  {
#line 1062 "goal_form.m"
    MR_bool hlds__goal_form__succeeded;

#line 1062 "goal_form.m"
    if ((hlds__goal_form__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1062 "goal_form.m"
      {
#line 1063 "goal_form.m"
        {
#line 1063 "goal_form.m"
          mercury__require__unexpected_3_p_0((MR_String) "hlds.goal_form", (MR_String) "predicate \140hlds.goal_form.count_recursive_calls_cases\'/5", (MR_String) "[]");
#line 1063 "goal_form.m"
          return;
        }
#line 1062 "goal_form.m"
      }
#line 1062 "goal_form.m"
    else
#line 1065 "goal_form.m"
      {
#line 1065 "goal_form.m"
        MR_Word hlds__goal_form__Goal_15;
#line 1065 "goal_form.m"
        MR_Word hlds__goal_form__Cases_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__HeadVar__1_1, (MR_Integer) 1)));
#line 1065 "goal_form.m"
        MR_Word hlds__goal_form__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__HeadVar__1_1, (MR_Integer) 0)));
#line 1064 "goal_form.m"
        MR_Word hlds__goal_form__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__V_27_27, (MR_Integer) 0)));
#line 1064 "goal_form.m"
        MR_Word hlds__goal_form__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__V_27_27, (MR_Integer) 1)));

#line 1064 "goal_form.m"
        hlds__goal_form__Goal_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__V_27_27, (MR_Integer) 2)));
#line 1069 "goal_form.m"
        if ((hlds__goal_form__Cases_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1068 "goal_form.m"
          {
#line 1068 "goal_form.m"
            hlds__goal_form__count_recursive_calls_5_p_0(hlds__goal_form__Goal_15, hlds__goal_form__PredId_2, hlds__goal_form__ProcId_3, hlds__goal_form__Min_4, hlds__goal_form__Max_5);
#line 1068 "goal_form.m"
            return;
          }
#line 1069 "goal_form.m"
        else
#line 1070 "goal_form.m"
          {
#line 1070 "goal_form.m"
            MR_Integer hlds__goal_form__Min0_23;
#line 1070 "goal_form.m"
            MR_Integer hlds__goal_form__Max0_24;
#line 1070 "goal_form.m"
            MR_Integer hlds__goal_form__Min1_25;
#line 1070 "goal_form.m"
            MR_Integer hlds__goal_form__Max1_26;
#line 1070 "goal_form.m"
            MR_Word hlds__goal_form__Goal_37;
#line 1070 "goal_form.m"
            MR_Word hlds__goal_form__Cases_38;
#line 1070 "goal_form.m"
            MR_Word hlds__goal_form__V_49_49;
#line 1064 "goal_form.m"
            MR_Word hlds__goal_form__V_35_35;
#line 1064 "goal_form.m"
            MR_Word hlds__goal_form__V_36_36;

#line 1071 "goal_form.m"
            {
#line 1071 "goal_form.m"
              hlds__goal_form__count_recursive_calls_5_p_0(hlds__goal_form__Goal_15, hlds__goal_form__PredId_2, hlds__goal_form__ProcId_3, &hlds__goal_form__Min0_23, &hlds__goal_form__Max0_24);
            }
#line 1064 "goal_form.m"
            hlds__goal_form__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__Cases_16, (MR_Integer) 0)));
#line 1064 "goal_form.m"
            hlds__goal_form__Cases_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__Cases_16, (MR_Integer) 1)));
#line 1064 "goal_form.m"
            hlds__goal_form__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__V_49_49, (MR_Integer) 0)));
#line 1064 "goal_form.m"
            hlds__goal_form__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__V_49_49, (MR_Integer) 1)));
#line 1064 "goal_form.m"
            hlds__goal_form__Goal_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__V_49_49, (MR_Integer) 2)));
#line 1069 "goal_form.m"
            if ((hlds__goal_form__Cases_38 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1068 "goal_form.m"
              {
#line 1068 "goal_form.m"
                hlds__goal_form__count_recursive_calls_5_p_0(hlds__goal_form__Goal_37, hlds__goal_form__PredId_2, hlds__goal_form__ProcId_3, &hlds__goal_form__Min1_25, &hlds__goal_form__Max1_26);
              }
#line 1069 "goal_form.m"
            else
#line 1070 "goal_form.m"
              {
#line 1070 "goal_form.m"
                MR_Integer hlds__goal_form__Min0_45;
#line 1070 "goal_form.m"
                MR_Integer hlds__goal_form__Max0_46;
#line 1070 "goal_form.m"
                MR_Integer hlds__goal_form__Min1_47;
#line 1070 "goal_form.m"
                MR_Integer hlds__goal_form__Max1_48;

#line 1071 "goal_form.m"
                {
#line 1071 "goal_form.m"
                  hlds__goal_form__count_recursive_calls_5_p_0(hlds__goal_form__Goal_37, hlds__goal_form__PredId_2, hlds__goal_form__ProcId_3, &hlds__goal_form__Min0_45, &hlds__goal_form__Max0_46);
                }
#line 1072 "goal_form.m"
                {
#line 1072 "goal_form.m"
                  hlds__goal_form__count_recursive_calls_cases_5_p_0(hlds__goal_form__Cases_38, hlds__goal_form__PredId_2, hlds__goal_form__ProcId_3, &hlds__goal_form__Min1_47, &hlds__goal_form__Max1_48);
                }
#line 1073 "goal_form.m"
                {
#line 1073 "goal_form.m"
                  mercury__int__min_3_p_0(hlds__goal_form__Min0_45, hlds__goal_form__Min1_47, &hlds__goal_form__Min1_25);
                }
#line 1074 "goal_form.m"
                {
#line 1074 "goal_form.m"
                  mercury__int__max_3_p_0(hlds__goal_form__Max0_46, hlds__goal_form__Max1_48, &hlds__goal_form__Max1_26);
                }
#line 1070 "goal_form.m"
              }
#line 1073 "goal_form.m"
            {
#line 1073 "goal_form.m"
              mercury__int__min_3_p_0(hlds__goal_form__Min0_23, hlds__goal_form__Min1_25, hlds__goal_form__Min_4);
            }
#line 1074 "goal_form.m"
            {
#line 1074 "goal_form.m"
              mercury__int__max_3_p_0(hlds__goal_form__Max0_24, hlds__goal_form__Max1_26, hlds__goal_form__Max_5);
#line 1074 "goal_form.m"
              return;
            }
#line 1070 "goal_form.m"
          }
#line 1065 "goal_form.m"
      }
#line 1062 "goal_form.m"
  }
#line 1059 "goal_form.m"
}

#line 1043 "goal_form.m"
static void MR_CALL 
hlds__goal_form__count_recursive_calls_disj_5_p_0(
#line 1043 "goal_form.m"
  MR_Word hlds__goal_form__HeadVar__1_1,
#line 1043 "goal_form.m"
  MR_Word hlds__goal_form__PredId_2,
#line 1043 "goal_form.m"
  MR_Integer hlds__goal_form__ProcId_3,
#line 1043 "goal_form.m"
  MR_Integer * hlds__goal_form__HeadVar__4_4,
#line 1043 "goal_form.m"
  MR_Integer * hlds__goal_form__HeadVar__5_5)
#line 1043 "goal_form.m"
{
#line 1046 "goal_form.m"
  {
#line 1046 "goal_form.m"
    MR_bool hlds__goal_form__succeeded;

#line 1046 "goal_form.m"
    if ((hlds__goal_form__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1046 "goal_form.m"
      {
#line 1046 "goal_form.m"
        *hlds__goal_form__HeadVar__4_4 = (MR_Integer) 0;
#line 1046 "goal_form.m"
        *hlds__goal_form__HeadVar__5_5 = (MR_Integer) 0;
#line 1046 "goal_form.m"
      }
#line 1046 "goal_form.m"
    else
#line 1047 "goal_form.m"
      {
#line 1047 "goal_form.m"
        MR_Word hlds__goal_form__Goal_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__HeadVar__1_1, (MR_Integer) 0)));
#line 1047 "goal_form.m"
        MR_Word hlds__goal_form__Goals_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__HeadVar__1_1, (MR_Integer) 1)));

#line 1051 "goal_form.m"
        if ((hlds__goal_form__Goals_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1050 "goal_form.m"
          {
#line 1050 "goal_form.m"
            hlds__goal_form__count_recursive_calls_5_p_0(hlds__goal_form__Goal_8, hlds__goal_form__PredId_2, hlds__goal_form__ProcId_3, hlds__goal_form__HeadVar__4_4, hlds__goal_form__HeadVar__5_5);
#line 1050 "goal_form.m"
            return;
          }
#line 1051 "goal_form.m"
        else
#line 1052 "goal_form.m"
          {
#line 1052 "goal_form.m"
            MR_Integer hlds__goal_form__Min0_16;
#line 1052 "goal_form.m"
            MR_Integer hlds__goal_form__Max0_17;
#line 1052 "goal_form.m"
            MR_Integer hlds__goal_form__Min1_18;
#line 1052 "goal_form.m"
            MR_Integer hlds__goal_form__Max1_19;
#line 1052 "goal_form.m"
            MR_Word hlds__goal_form__Goal_22;
#line 1052 "goal_form.m"
            MR_Word hlds__goal_form__Goals_23;

#line 1053 "goal_form.m"
            {
#line 1053 "goal_form.m"
              hlds__goal_form__count_recursive_calls_5_p_0(hlds__goal_form__Goal_8, hlds__goal_form__PredId_2, hlds__goal_form__ProcId_3, &hlds__goal_form__Min0_16, &hlds__goal_form__Max0_17);
            }
#line 1047 "goal_form.m"
            hlds__goal_form__Goal_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__Goals_9, (MR_Integer) 0)));
#line 1047 "goal_form.m"
            hlds__goal_form__Goals_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__Goals_9, (MR_Integer) 1)));
#line 1051 "goal_form.m"
            if ((hlds__goal_form__Goals_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1050 "goal_form.m"
              {
#line 1050 "goal_form.m"
                hlds__goal_form__count_recursive_calls_5_p_0(hlds__goal_form__Goal_22, hlds__goal_form__PredId_2, hlds__goal_form__ProcId_3, &hlds__goal_form__Min1_18, &hlds__goal_form__Max1_19);
              }
#line 1051 "goal_form.m"
            else
#line 1052 "goal_form.m"
              {
#line 1052 "goal_form.m"
                MR_Integer hlds__goal_form__Min0_30;
#line 1052 "goal_form.m"
                MR_Integer hlds__goal_form__Max0_31;
#line 1052 "goal_form.m"
                MR_Integer hlds__goal_form__Min1_32;
#line 1052 "goal_form.m"
                MR_Integer hlds__goal_form__Max1_33;

#line 1053 "goal_form.m"
                {
#line 1053 "goal_form.m"
                  hlds__goal_form__count_recursive_calls_5_p_0(hlds__goal_form__Goal_22, hlds__goal_form__PredId_2, hlds__goal_form__ProcId_3, &hlds__goal_form__Min0_30, &hlds__goal_form__Max0_31);
                }
#line 1054 "goal_form.m"
                {
#line 1054 "goal_form.m"
                  hlds__goal_form__count_recursive_calls_disj_5_p_0(hlds__goal_form__Goals_23, hlds__goal_form__PredId_2, hlds__goal_form__ProcId_3, &hlds__goal_form__Min1_32, &hlds__goal_form__Max1_33);
                }
#line 1055 "goal_form.m"
                {
#line 1055 "goal_form.m"
                  mercury__int__min_3_p_0(hlds__goal_form__Min0_30, hlds__goal_form__Min1_32, &hlds__goal_form__Min1_18);
                }
#line 1056 "goal_form.m"
                {
#line 1056 "goal_form.m"
                  mercury__int__max_3_p_0(hlds__goal_form__Max0_31, hlds__goal_form__Max1_33, &hlds__goal_form__Max1_19);
                }
#line 1052 "goal_form.m"
              }
#line 1055 "goal_form.m"
            {
#line 1055 "goal_form.m"
              mercury__int__min_3_p_0(hlds__goal_form__Min0_16, hlds__goal_form__Min1_18, hlds__goal_form__HeadVar__4_4);
            }
#line 1056 "goal_form.m"
            {
#line 1056 "goal_form.m"
              mercury__int__max_3_p_0(hlds__goal_form__Max0_17, hlds__goal_form__Max1_19, hlds__goal_form__HeadVar__5_5);
#line 1056 "goal_form.m"
              return;
            }
#line 1052 "goal_form.m"
          }
#line 1047 "goal_form.m"
      }
#line 1046 "goal_form.m"
  }
#line 1043 "goal_form.m"
}

#line 1031 "goal_form.m"
static void MR_CALL 
hlds__goal_form__count_recursive_calls_conj_7_p_0(
#line 1031 "goal_form.m"
  MR_Word hlds__goal_form__HeadVar__1_1,
#line 1031 "goal_form.m"
  MR_Word hlds__goal_form__PredId_2,
#line 1031 "goal_form.m"
  MR_Integer hlds__goal_form__ProcId_3,
#line 1031 "goal_form.m"
  MR_Integer hlds__goal_form__HeadVar__4_4,
#line 1031 "goal_form.m"
  MR_Integer hlds__goal_form__HeadVar__5_5,
#line 1031 "goal_form.m"
  MR_Integer * hlds__goal_form__Min_6,
#line 1031 "goal_form.m"
  MR_Integer * hlds__goal_form__Max_7)
#line 1031 "goal_form.m"
{
#line 1034 "goal_form.m"
  while (MR_TRUE)
#line 1034 "goal_form.m"
    {
#line 1034 "goal_form.m"
      /* tailcall optimized into a loop */
#line 1034 "goal_form.m"
      {
#line 1034 "goal_form.m"
        MR_bool hlds__goal_form__succeeded;

#line 1034 "goal_form.m"
        if ((hlds__goal_form__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1034 "goal_form.m"
          {
#line 1034 "goal_form.m"
            *hlds__goal_form__Min_6 = hlds__goal_form__HeadVar__4_4;
#line 1034 "goal_form.m"
            *hlds__goal_form__Max_7 = hlds__goal_form__HeadVar__5_5;
#line 1034 "goal_form.m"
          }
#line 1034 "goal_form.m"
        else
#line 1036 "goal_form.m"
          {
#line 1036 "goal_form.m"
            MR_Word hlds__goal_form__Goal_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__HeadVar__1_1, (MR_Integer) 0)));
#line 1036 "goal_form.m"
            MR_Word hlds__goal_form__Goals_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__HeadVar__1_1, (MR_Integer) 1)));
#line 1036 "goal_form.m"
            MR_Integer hlds__goal_form__Min1_20;
#line 1036 "goal_form.m"
            MR_Integer hlds__goal_form__Max1_21;
#line 1036 "goal_form.m"
            MR_Integer hlds__goal_form__Min2_22;
#line 1036 "goal_form.m"
            MR_Integer hlds__goal_form__Max2_23;

#line 1037 "goal_form.m"
            {
#line 1037 "goal_form.m"
              hlds__goal_form__count_recursive_calls_5_p_0(hlds__goal_form__Goal_12, hlds__goal_form__PredId_2, hlds__goal_form__ProcId_3, &hlds__goal_form__Min1_20, &hlds__goal_form__Max1_21);
            }
#line 1038 "goal_form.m"
            hlds__goal_form__Min2_22 = (hlds__goal_form__HeadVar__4_4 + hlds__goal_form__Min1_20);
#line 1039 "goal_form.m"
            hlds__goal_form__Max2_23 = (hlds__goal_form__HeadVar__5_5 + hlds__goal_form__Max1_21);
#line 1040 "goal_form.m"
            /* direct tailcall eliminated */
#line 1040 "goal_form.m"
            {
#line 1040 "goal_form.m"
              MR_Word hlds__goal_form__HeadVar__1__tmp_copy_1 = hlds__goal_form__Goals_13;
#line 1040 "goal_form.m"
              MR_Integer hlds__goal_form__HeadVar__4__tmp_copy_4 = hlds__goal_form__Min2_22;
#line 1040 "goal_form.m"
              MR_Integer hlds__goal_form__HeadVar__5__tmp_copy_5 = hlds__goal_form__Max2_23;

#line 1040 "goal_form.m"
              hlds__goal_form__HeadVar__5_5 = hlds__goal_form__HeadVar__5__tmp_copy_5;
#line 1040 "goal_form.m"
              hlds__goal_form__HeadVar__4_4 = hlds__goal_form__HeadVar__4__tmp_copy_4;
#line 1040 "goal_form.m"
              hlds__goal_form__HeadVar__1_1 = hlds__goal_form__HeadVar__1__tmp_copy_1;
#line 1040 "goal_form.m"
            }
#line 1040 "goal_form.m"
            continue;
#line 1036 "goal_form.m"
          }
#line 1034 "goal_form.m"
      }
#line 1034 "goal_form.m"
      break;
#line 1034 "goal_form.m"
    }
#line 1031 "goal_form.m"
}

#line 933 "goal_form.m"
static MR_bool MR_CALL 
hlds__goal_form__cannot_fail_before_stack_flush_conj_1_p_0(
#line 933 "goal_form.m"
  MR_Word hlds__goal_form__HeadVar__1_1)
#line 933 "goal_form.m"
{
#line 935 "goal_form.m"
  while (MR_TRUE)
#line 935 "goal_form.m"
    {
#line 935 "goal_form.m"
      /* tailcall optimized into a loop */
#line 935 "goal_form.m"
      {
#line 935 "goal_form.m"
        MR_bool hlds__goal_form__succeeded;

#line 935 "goal_form.m"
        if ((hlds__goal_form__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 935 "goal_form.m"
          hlds__goal_form__succeeded = MR_TRUE;
#line 935 "goal_form.m"
        else
#line 936 "goal_form.m"
          {
#line 936 "goal_form.m"
            MR_Word hlds__goal_form__Goal_2 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__HeadVar__1_1, (MR_Integer) 0)));
#line 936 "goal_form.m"
            MR_Word hlds__goal_form__Goals_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__HeadVar__1_1, (MR_Integer) 1)));
#line 936 "goal_form.m"
            MR_Word hlds__goal_form__GoalExpr_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Goal_2, (MR_Integer) 0)));
#line 936 "goal_form.m"
            MR_Word hlds__goal_form__GoalInfo_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Goal_2, (MR_Integer) 1)));

#line 942 "goal_form.m"
            if (((MR_tag((MR_Word) hlds__goal_form__GoalExpr_4)) == (MR_mktag((MR_Integer) 2))))
#line 940 "goal_form.m"
              {
#line 940 "goal_form.m"
                MR_Word hlds__goal_form__BuiltinState_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__GoalExpr_4, (MR_Integer) 3)));
#line 940 "goal_form.m"
                MR_Word hlds__goal_form__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__GoalExpr_4, (MR_Integer) 0)));
#line 940 "goal_form.m"
                MR_Integer hlds__goal_form__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(2), hlds__goal_form__GoalExpr_4, (MR_Integer) 1)));
#line 940 "goal_form.m"
                MR_Word hlds__goal_form__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__GoalExpr_4, (MR_Integer) 2)));
#line 940 "goal_form.m"
                MR_Word hlds__goal_form__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__GoalExpr_4, (MR_Integer) 4)));
#line 940 "goal_form.m"
                MR_Word hlds__goal_form__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__GoalExpr_4, (MR_Integer) 5)));

#line 941 "goal_form.m"
                hlds__goal_form__succeeded = (hlds__goal_form__BuiltinState_9 == (MR_Integer) 0);
#line 941 "goal_form.m"
                hlds__goal_form__succeeded = !(hlds__goal_form__succeeded);
#line 940 "goal_form.m"
              }
#line 942 "goal_form.m"
            else
#line 942 "goal_form.m"
            if (((((MR_tag((MR_Word) hlds__goal_form__GoalExpr_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_4, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 943 "goal_form.m"
              hlds__goal_form__succeeded = MR_TRUE;
#line 942 "goal_form.m"
            else
#line 942 "goal_form.m"
              hlds__goal_form__succeeded = MR_FALSE;
#line 947 "goal_form.m"
            if (hlds__goal_form__succeeded)
#line 946 "goal_form.m"
              hlds__goal_form__succeeded = MR_TRUE;
#line 947 "goal_form.m"
            else
#line 952 "goal_form.m"
              {
#line 952 "goal_form.m"
                MR_Word hlds__goal_form__Detism_17;
#line 952 "goal_form.m"
                MR_Word hlds__goal_form__V_20_20;
#line 949 "goal_form.m"
                MR_Word hlds__goal_form__V_18_18;

#line 948 "goal_form.m"
                {
#line 948 "goal_form.m"
                  hlds__goal_form__Detism_17 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(hlds__goal_form__GoalInfo_5);
                }
#line 949 "goal_form.m"
                {
#line 949 "goal_form.m"
                  parse_tree__prog_data__determinism_components_3_p_0(hlds__goal_form__Detism_17, &hlds__goal_form__V_20_20, &hlds__goal_form__V_18_18);
                }
#line 949 "goal_form.m"
                hlds__goal_form__succeeded = ((MR_Integer) 1 == hlds__goal_form__V_20_20);
#line 952 "goal_form.m"
                if (hlds__goal_form__succeeded)
#line 951 "goal_form.m"
                  {
#line 951 "goal_form.m"
                    /* direct tailcall eliminated */
#line 951 "goal_form.m"
                    {
#line 951 "goal_form.m"
                      MR_Word hlds__goal_form__HeadVar__1__tmp_copy_1 = hlds__goal_form__Goals_3;

#line 951 "goal_form.m"
                      hlds__goal_form__HeadVar__1_1 = hlds__goal_form__HeadVar__1__tmp_copy_1;
#line 951 "goal_form.m"
                    }
#line 951 "goal_form.m"
                    continue;
#line 951 "goal_form.m"
                  }
#line 952 "goal_form.m"
              }
#line 936 "goal_form.m"
          }
#line 935 "goal_form.m"
        return hlds__goal_form__succeeded;
#line 935 "goal_form.m"
      }
#line 935 "goal_form.m"
      break;
#line 935 "goal_form.m"
    }
#line 933 "goal_form.m"
}

#line 908 "goal_form.m"
static MR_bool MR_CALL 
hlds__goal_form__cannot_stack_flush_cases_1_p_0(
#line 908 "goal_form.m"
  MR_Word hlds__goal_form__HeadVar__1_1)
#line 908 "goal_form.m"
{
#line 910 "goal_form.m"
  while (MR_TRUE)
#line 910 "goal_form.m"
    {
#line 910 "goal_form.m"
      /* tailcall optimized into a loop */
#line 910 "goal_form.m"
      {
#line 910 "goal_form.m"
        MR_bool hlds__goal_form__succeeded;

#line 910 "goal_form.m"
        if ((hlds__goal_form__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 910 "goal_form.m"
          hlds__goal_form__succeeded = MR_TRUE;
#line 910 "goal_form.m"
        else
#line 911 "goal_form.m"
          {
#line 911 "goal_form.m"
            MR_Word hlds__goal_form__Goal_4;
#line 911 "goal_form.m"
            MR_Word hlds__goal_form__Cases_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__HeadVar__1_1, (MR_Integer) 1)));
#line 911 "goal_form.m"
            MR_Word hlds__goal_form__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__HeadVar__1_1, (MR_Integer) 0)));
#line 911 "goal_form.m"
            MR_Word hlds__goal_form__GoalExpr_7;
#line 911 "goal_form.m"
            MR_Word hlds__goal_form__V_2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__V_6_6, (MR_Integer) 0)));
#line 911 "goal_form.m"
            MR_Word hlds__goal_form__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__V_6_6, (MR_Integer) 1)));
#line 884 "goal_form.m"
            MR_Word hlds__goal_form__V_8_8;

#line 911 "goal_form.m"
            hlds__goal_form__Goal_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__V_6_6, (MR_Integer) 2)));
#line 884 "goal_form.m"
            hlds__goal_form__GoalExpr_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Goal_4, (MR_Integer) 0)));
#line 884 "goal_form.m"
            hlds__goal_form__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Goal_4, (MR_Integer) 1)));
#line 885 "goal_form.m"
            {
#line 885 "goal_form.m"
              hlds__goal_form__succeeded = hlds__goal_form__cannot_stack_flush_2_1_p_0(hlds__goal_form__GoalExpr_7);
            }
#line 911 "goal_form.m"
            if (hlds__goal_form__succeeded)
#line 913 "goal_form.m"
              {
#line 913 "goal_form.m"
                /* direct tailcall eliminated */
#line 913 "goal_form.m"
                {
#line 913 "goal_form.m"
                  MR_Word hlds__goal_form__HeadVar__1__tmp_copy_1 = hlds__goal_form__Cases_5;

#line 913 "goal_form.m"
                  hlds__goal_form__HeadVar__1_1 = hlds__goal_form__HeadVar__1__tmp_copy_1;
#line 913 "goal_form.m"
                }
#line 913 "goal_form.m"
                continue;
#line 913 "goal_form.m"
              }
#line 911 "goal_form.m"
          }
#line 910 "goal_form.m"
        return hlds__goal_form__succeeded;
#line 910 "goal_form.m"
      }
#line 910 "goal_form.m"
      break;
#line 910 "goal_form.m"
    }
#line 908 "goal_form.m"
}

#line 901 "goal_form.m"
static MR_bool MR_CALL 
hlds__goal_form__cannot_stack_flush_goals_1_p_0(
#line 901 "goal_form.m"
  MR_Word hlds__goal_form__HeadVar__1_1)
#line 901 "goal_form.m"
{
#line 903 "goal_form.m"
  while (MR_TRUE)
#line 903 "goal_form.m"
    {
#line 903 "goal_form.m"
      /* tailcall optimized into a loop */
#line 903 "goal_form.m"
      {
#line 903 "goal_form.m"
        MR_bool hlds__goal_form__succeeded;

#line 903 "goal_form.m"
        if ((hlds__goal_form__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 903 "goal_form.m"
          hlds__goal_form__succeeded = MR_TRUE;
#line 903 "goal_form.m"
        else
#line 904 "goal_form.m"
          {
#line 904 "goal_form.m"
            MR_Word hlds__goal_form__Goal_2 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__HeadVar__1_1, (MR_Integer) 0)));
#line 904 "goal_form.m"
            MR_Word hlds__goal_form__Goals_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__HeadVar__1_1, (MR_Integer) 1)));
#line 904 "goal_form.m"
            MR_Word hlds__goal_form__GoalExpr_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Goal_2, (MR_Integer) 0)));
#line 884 "goal_form.m"
            MR_Word hlds__goal_form__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Goal_2, (MR_Integer) 1)));

#line 885 "goal_form.m"
            {
#line 885 "goal_form.m"
              hlds__goal_form__succeeded = hlds__goal_form__cannot_stack_flush_2_1_p_0(hlds__goal_form__GoalExpr_4);
            }
#line 904 "goal_form.m"
            if (hlds__goal_form__succeeded)
#line 906 "goal_form.m"
              {
#line 906 "goal_form.m"
                /* direct tailcall eliminated */
#line 906 "goal_form.m"
                {
#line 906 "goal_form.m"
                  MR_Word hlds__goal_form__HeadVar__1__tmp_copy_1 = hlds__goal_form__Goals_3;

#line 906 "goal_form.m"
                  hlds__goal_form__HeadVar__1_1 = hlds__goal_form__HeadVar__1__tmp_copy_1;
#line 906 "goal_form.m"
                }
#line 906 "goal_form.m"
                continue;
#line 906 "goal_form.m"
              }
#line 904 "goal_form.m"
          }
#line 903 "goal_form.m"
        return hlds__goal_form__succeeded;
#line 903 "goal_form.m"
      }
#line 903 "goal_form.m"
      break;
#line 903 "goal_form.m"
    }
#line 901 "goal_form.m"
}

#line 887 "goal_form.m"
static MR_bool MR_CALL 
hlds__goal_form__cannot_stack_flush_2_1_p_0(
#line 887 "goal_form.m"
  MR_Word hlds__goal_form__HeadVar__1_1)
#line 887 "goal_form.m"
{
#line 889 "goal_form.m"
  {
#line 889 "goal_form.m"
    MR_bool hlds__goal_form__succeeded;

#line 889 "goal_form.m"
#line 889 "goal_form.m"
    switch (MR_tag((MR_Word) hlds__goal_form__HeadVar__1_1)) {
#line 889 "goal_form.m"
      default:
#line 889 "goal_form.m"
        hlds__goal_form__succeeded = MR_FALSE;
#line 889 "goal_form.m"
        break;
#line 889 "goal_form.m"
      case (MR_Integer) 0:
#line 898 "goal_form.m"
        {
#line 898 "goal_form.m"
          MR_Word hlds__goal_form__Unify_24;
#line 898 "goal_form.m"
          MR_Word hlds__goal_form__V_30_30 = (MR_Word) MR_body(((MR_Word) hlds__goal_form__HeadVar__1_1), (MR_Integer) 0);
#line 898 "goal_form.m"
          MR_Word hlds__goal_form__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__V_30_30, (MR_Integer) 0)));
#line 898 "goal_form.m"
          MR_Word hlds__goal_form__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__V_30_30, (MR_Integer) 1)));
#line 898 "goal_form.m"
          MR_Word hlds__goal_form__V_21_21;
#line 898 "goal_form.m"
          MR_Word hlds__goal_form__V_22_22;
#line 898 "goal_form.m"
          MR_Word hlds__goal_form__V_23_23;
#line 898 "goal_form.m"
          MR_Word hlds__goal_form__V_25_25;
#line 899 "goal_form.m"
          MR_Word hlds__goal_form__V_27_27;
#line 899 "goal_form.m"
          MR_Word hlds__goal_form__V_28_28;
#line 899 "goal_form.m"
          MR_Word hlds__goal_form__V_29_29;

#line 898 "goal_form.m"
          hlds__goal_form__succeeded = ((MR_tag((MR_Word) hlds__goal_form__V_31_31)) == (MR_mktag((MR_Integer) 1)));
#line 898 "goal_form.m"
          if (hlds__goal_form__succeeded)
#line 898 "goal_form.m"
            {
#line 898 "goal_form.m"
              hlds__goal_form__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__V_31_31, (MR_Integer) 0)));
#line 898 "goal_form.m"
              hlds__goal_form__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__V_31_31, (MR_Integer) 1)));
#line 898 "goal_form.m"
              hlds__goal_form__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__V_31_31, (MR_Integer) 2)));
#line 898 "goal_form.m"
              hlds__goal_form__Unify_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__V_31_31, (MR_Integer) 3)));
#line 898 "goal_form.m"
              hlds__goal_form__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__V_31_31, (MR_Integer) 4)));
#line 899 "goal_form.m"
              hlds__goal_form__succeeded = ((((MR_tag((MR_Word) hlds__goal_form__Unify_24)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__Unify_24, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 899 "goal_form.m"
              if (hlds__goal_form__succeeded)
#line 899 "goal_form.m"
                {
#line 899 "goal_form.m"
                  hlds__goal_form__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__Unify_24, (MR_Integer) 1)));
#line 899 "goal_form.m"
                  hlds__goal_form__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__Unify_24, (MR_Integer) 2)));
#line 899 "goal_form.m"
                  hlds__goal_form__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__Unify_24, (MR_Integer) 3)));
#line 899 "goal_form.m"
                }
#line 899 "goal_form.m"
              hlds__goal_form__succeeded = !(hlds__goal_form__succeeded);
#line 898 "goal_form.m"
            }
#line 898 "goal_form.m"
        }
#line 889 "goal_form.m"
        break;
#line 889 "goal_form.m"
      case (MR_Integer) 1:
#line 889 "goal_form.m"
        {
#line 889 "goal_form.m"
          MR_Word hlds__goal_form__Unify_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__HeadVar__1_1, (MR_Integer) 3)));
#line 889 "goal_form.m"
          MR_Word hlds__goal_form__V_2_2 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__HeadVar__1_1, (MR_Integer) 0)));
#line 889 "goal_form.m"
          MR_Word hlds__goal_form__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__HeadVar__1_1, (MR_Integer) 1)));
#line 889 "goal_form.m"
          MR_Word hlds__goal_form__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__HeadVar__1_1, (MR_Integer) 2)));
#line 889 "goal_form.m"
          MR_Word hlds__goal_form__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__HeadVar__1_1, (MR_Integer) 4)));
#line 890 "goal_form.m"
          MR_Word hlds__goal_form__V_7_7;
#line 890 "goal_form.m"
          MR_Word hlds__goal_form__V_8_8;
#line 890 "goal_form.m"
          MR_Word hlds__goal_form__V_9_9;

#line 890 "goal_form.m"
          hlds__goal_form__succeeded = ((((MR_tag((MR_Word) hlds__goal_form__Unify_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__Unify_5, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 890 "goal_form.m"
          if (hlds__goal_form__succeeded)
#line 890 "goal_form.m"
            {
#line 890 "goal_form.m"
              hlds__goal_form__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__Unify_5, (MR_Integer) 1)));
#line 890 "goal_form.m"
              hlds__goal_form__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__Unify_5, (MR_Integer) 2)));
#line 890 "goal_form.m"
              hlds__goal_form__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__Unify_5, (MR_Integer) 3)));
#line 890 "goal_form.m"
            }
#line 890 "goal_form.m"
          hlds__goal_form__succeeded = !(hlds__goal_form__succeeded);
#line 889 "goal_form.m"
        }
#line 889 "goal_form.m"
        break;
#line 889 "goal_form.m"
      case (MR_Integer) 2:
#line 891 "goal_form.m"
        {
#line 891 "goal_form.m"
          MR_Word hlds__goal_form__BuiltinState_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__HeadVar__1_1, (MR_Integer) 3)));
#line 891 "goal_form.m"
          MR_Word hlds__goal_form__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__HeadVar__1_1, (MR_Integer) 0)));
#line 891 "goal_form.m"
          MR_Integer hlds__goal_form__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(2), hlds__goal_form__HeadVar__1_1, (MR_Integer) 1)));
#line 891 "goal_form.m"
          MR_Word hlds__goal_form__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__HeadVar__1_1, (MR_Integer) 2)));
#line 891 "goal_form.m"
          MR_Word hlds__goal_form__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__HeadVar__1_1, (MR_Integer) 4)));
#line 891 "goal_form.m"
          MR_Word hlds__goal_form__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__HeadVar__1_1, (MR_Integer) 5)));

#line 892 "goal_form.m"
          hlds__goal_form__succeeded = (hlds__goal_form__BuiltinState_13 == (MR_Integer) 0);
#line 891 "goal_form.m"
        }
#line 889 "goal_form.m"
        break;
#line 889 "goal_form.m"
      case (MR_Integer) 3:
#line 889 "goal_form.m"
#line 889 "goal_form.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__HeadVar__1_1, (MR_Integer) 0)))) {
#line 889 "goal_form.m"
          default:
#line 889 "goal_form.m"
            hlds__goal_form__succeeded = MR_FALSE;
#line 889 "goal_form.m"
            break;
#line 889 "goal_form.m"
          case (MR_Integer) 2:
#line 893 "goal_form.m"
            {
#line 893 "goal_form.m"
              MR_Word hlds__goal_form__ConjType_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__HeadVar__1_1, (MR_Integer) 1)));
#line 893 "goal_form.m"
              MR_Word hlds__goal_form__Goals_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__HeadVar__1_1, (MR_Integer) 2)));

#line 894 "goal_form.m"
              hlds__goal_form__succeeded = (hlds__goal_form__ConjType_16 == (MR_Integer) 0);
#line 893 "goal_form.m"
              if (hlds__goal_form__succeeded)
#line 895 "goal_form.m"
                {
#line 895 "goal_form.m"
                  return hlds__goal_form__succeeded = hlds__goal_form__cannot_stack_flush_goals_1_p_0(hlds__goal_form__Goals_17);
                }
#line 893 "goal_form.m"
            }
#line 889 "goal_form.m"
            break;
#line 889 "goal_form.m"
          case (MR_Integer) 4:
#line 896 "goal_form.m"
            {
#line 896 "goal_form.m"
              MR_Word hlds__goal_form__Cases_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__HeadVar__1_1, (MR_Integer) 3)));
#line 896 "goal_form.m"
              MR_Word hlds__goal_form__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__HeadVar__1_1, (MR_Integer) 1)));
#line 896 "goal_form.m"
              MR_Word hlds__goal_form__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__HeadVar__1_1, (MR_Integer) 2)));

#line 897 "goal_form.m"
              {
#line 897 "goal_form.m"
                return hlds__goal_form__succeeded = hlds__goal_form__cannot_stack_flush_cases_1_p_0(hlds__goal_form__Cases_20);
              }
#line 896 "goal_form.m"
            }
#line 889 "goal_form.m"
            break;
#line 889 "goal_form.m"
        }
#line 889 "goal_form.m"
        break;
#line 889 "goal_form.m"
    }
#line 889 "goal_form.m"
    return hlds__goal_form__succeeded;
#line 889 "goal_form.m"
  }
#line 887 "goal_form.m"
}

#line 872 "goal_form.m"
static void MR_CALL 
hlds__goal_form__cases_may_allocate_heap_2_p_0(
#line 872 "goal_form.m"
  MR_Word hlds__goal_form__HeadVar__1_1,
#line 872 "goal_form.m"
  MR_Word * hlds__goal_form__HeadVar__2_2)
#line 872 "goal_form.m"
{
#line 874 "goal_form.m"
  while (MR_TRUE)
#line 874 "goal_form.m"
    {
#line 874 "goal_form.m"
      /* tailcall optimized into a loop */
#line 874 "goal_form.m"
      {
#line 874 "goal_form.m"
        MR_bool hlds__goal_form__succeeded;

#line 874 "goal_form.m"
        if ((hlds__goal_form__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 874 "goal_form.m"
          *hlds__goal_form__HeadVar__2_2 = (MR_Integer) 0;
#line 874 "goal_form.m"
        else
#line 875 "goal_form.m"
          {
#line 875 "goal_form.m"
            MR_Word hlds__goal_form__Goal_5;
#line 875 "goal_form.m"
            MR_Word hlds__goal_form__Cases_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__HeadVar__1_1, (MR_Integer) 1)));
#line 875 "goal_form.m"
            MR_Word hlds__goal_form__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__HeadVar__1_1, (MR_Integer) 0)));
#line 875 "goal_form.m"
            MR_Word hlds__goal_form__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__V_8_8, (MR_Integer) 0)));
#line 875 "goal_form.m"
            MR_Word hlds__goal_form__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__V_8_8, (MR_Integer) 1)));
#line 876 "goal_form.m"
            MR_Word hlds__goal_form__V_10_10;
#line 876 "goal_form.m"
            MR_Word hlds__goal_form__GoalExpr_12;
#line 763 "goal_form.m"
            MR_Word hlds__goal_form___GoalInfo_13;

#line 875 "goal_form.m"
            hlds__goal_form__Goal_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__V_8_8, (MR_Integer) 2)));
#line 763 "goal_form.m"
            hlds__goal_form__GoalExpr_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Goal_5, (MR_Integer) 0)));
#line 763 "goal_form.m"
            hlds__goal_form___GoalInfo_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Goal_5, (MR_Integer) 1)));
#line 764 "goal_form.m"
            {
#line 764 "goal_form.m"
              hlds__goal_form__goal_may_allocate_heap_2_2_p_0(hlds__goal_form__GoalExpr_12, &hlds__goal_form__V_10_10);
            }
#line 876 "goal_form.m"
            hlds__goal_form__succeeded = ((MR_Integer) 1 == hlds__goal_form__V_10_10);
#line 878 "goal_form.m"
            if (hlds__goal_form__succeeded)
#line 877 "goal_form.m"
              *hlds__goal_form__HeadVar__2_2 = (MR_Integer) 1;
#line 878 "goal_form.m"
            else
#line 879 "goal_form.m"
              {
#line 879 "goal_form.m"
                /* direct tailcall eliminated */
#line 879 "goal_form.m"
                {
#line 879 "goal_form.m"
                  MR_Word hlds__goal_form__HeadVar__1__tmp_copy_1 = hlds__goal_form__Cases_6;

#line 879 "goal_form.m"
                  hlds__goal_form__HeadVar__1_1 = hlds__goal_form__HeadVar__1__tmp_copy_1;
#line 879 "goal_form.m"
                }
#line 879 "goal_form.m"
                continue;
#line 879 "goal_form.m"
              }
#line 875 "goal_form.m"
          }
#line 874 "goal_form.m"
      }
#line 874 "goal_form.m"
      break;
#line 874 "goal_form.m"
    }
#line 872 "goal_form.m"
}

#line 862 "goal_form.m"
static void MR_CALL 
hlds__goal_form__goal_list_may_allocate_heap_2_p_0(
#line 862 "goal_form.m"
  MR_Word hlds__goal_form__HeadVar__1_1,
#line 862 "goal_form.m"
  MR_Word * hlds__goal_form__HeadVar__2_2)
#line 862 "goal_form.m"
{
#line 864 "goal_form.m"
  while (MR_TRUE)
#line 864 "goal_form.m"
    {
#line 864 "goal_form.m"
      /* tailcall optimized into a loop */
#line 864 "goal_form.m"
      {
#line 864 "goal_form.m"
        MR_bool hlds__goal_form__succeeded;

#line 864 "goal_form.m"
        if ((hlds__goal_form__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 864 "goal_form.m"
          *hlds__goal_form__HeadVar__2_2 = (MR_Integer) 0;
#line 864 "goal_form.m"
        else
#line 865 "goal_form.m"
          {
#line 865 "goal_form.m"
            MR_Word hlds__goal_form__Goal_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__HeadVar__1_1, (MR_Integer) 0)));
#line 865 "goal_form.m"
            MR_Word hlds__goal_form__Goals_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__HeadVar__1_1, (MR_Integer) 1)));
#line 866 "goal_form.m"
            MR_Word hlds__goal_form__V_7_7;
#line 866 "goal_form.m"
            MR_Word hlds__goal_form__GoalExpr_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Goal_3, (MR_Integer) 0)));
#line 763 "goal_form.m"
            MR_Word hlds__goal_form___GoalInfo_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Goal_3, (MR_Integer) 1)));

#line 764 "goal_form.m"
            {
#line 764 "goal_form.m"
              hlds__goal_form__goal_may_allocate_heap_2_2_p_0(hlds__goal_form__GoalExpr_9, &hlds__goal_form__V_7_7);
            }
#line 866 "goal_form.m"
            hlds__goal_form__succeeded = ((MR_Integer) 1 == hlds__goal_form__V_7_7);
#line 868 "goal_form.m"
            if (hlds__goal_form__succeeded)
#line 867 "goal_form.m"
              *hlds__goal_form__HeadVar__2_2 = (MR_Integer) 1;
#line 868 "goal_form.m"
            else
#line 869 "goal_form.m"
              {
#line 869 "goal_form.m"
                /* direct tailcall eliminated */
#line 869 "goal_form.m"
                {
#line 869 "goal_form.m"
                  MR_Word hlds__goal_form__HeadVar__1__tmp_copy_1 = hlds__goal_form__Goals_4;

#line 869 "goal_form.m"
                  hlds__goal_form__HeadVar__1_1 = hlds__goal_form__HeadVar__1__tmp_copy_1;
#line 869 "goal_form.m"
                }
#line 869 "goal_form.m"
                continue;
#line 869 "goal_form.m"
              }
#line 865 "goal_form.m"
          }
#line 864 "goal_form.m"
      }
#line 864 "goal_form.m"
      break;
#line 864 "goal_form.m"
    }
#line 862 "goal_form.m"
}

#line 766 "goal_form.m"
static void MR_CALL 
hlds__goal_form__goal_may_allocate_heap_2_2_p_0(
#line 766 "goal_form.m"
  MR_Word hlds__goal_form__GoalExpr_3,
#line 766 "goal_form.m"
  MR_Word * hlds__goal_form__May_4)
#line 766 "goal_form.m"
{
#line 770 "goal_form.m"
  while (MR_TRUE)
#line 770 "goal_form.m"
    {
#line 770 "goal_form.m"
      /* tailcall optimized into a loop */
#line 770 "goal_form.m"
      {
#line 770 "goal_form.m"
        MR_bool hlds__goal_form__succeeded;

#line 770 "goal_form.m"
#line 770 "goal_form.m"
        switch (MR_tag((MR_Word) hlds__goal_form__GoalExpr_3)) {
#line 770 "goal_form.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 770 "goal_form.m"
          case (MR_Integer) 0:
#line 826 "goal_form.m"
            {
#line 826 "goal_form.m"
              MR_Word hlds__goal_form__SubGoal_46 = (MR_Word) MR_body(((MR_Word) hlds__goal_form__GoalExpr_3), (MR_Integer) 0);
#line 826 "goal_form.m"
              MR_Word hlds__goal_form__GoalExpr_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__SubGoal_46, (MR_Integer) 0)));
#line 763 "goal_form.m"
              MR_Word hlds__goal_form___GoalInfo_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__SubGoal_46, (MR_Integer) 1)));

#line 764 "goal_form.m"
              /* direct tailcall eliminated */
#line 764 "goal_form.m"
              {
#line 764 "goal_form.m"
                MR_Word hlds__goal_form__GoalExpr__tmp_copy_3 = hlds__goal_form__GoalExpr_81;

#line 764 "goal_form.m"
                hlds__goal_form__GoalExpr_3 = hlds__goal_form__GoalExpr__tmp_copy_3;
#line 764 "goal_form.m"
              }
#line 764 "goal_form.m"
              continue;
#line 826 "goal_form.m"
            }
#line 770 "goal_form.m"
            break;
#line 770 "goal_form.m"
          case (MR_Integer) 1:
#line 770 "goal_form.m"
            {
#line 770 "goal_form.m"
              MR_Word hlds__goal_form__Unification_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__GoalExpr_3, (MR_Integer) 3)));
#line 770 "goal_form.m"
              MR_Word hlds__goal_form__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__GoalExpr_3, (MR_Integer) 0)));
#line 770 "goal_form.m"
              MR_Word hlds__goal_form__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__GoalExpr_3, (MR_Integer) 1)));
#line 770 "goal_form.m"
              MR_Word hlds__goal_form__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__GoalExpr_3, (MR_Integer) 2)));
#line 770 "goal_form.m"
              MR_Word hlds__goal_form__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__GoalExpr_3, (MR_Integer) 4)));
#line 772 "goal_form.m"
              MR_Word hlds__goal_form__Args_12;
#line 772 "goal_form.m"
              MR_Word hlds__goal_form__V_10_10;
#line 772 "goal_form.m"
              MR_Word hlds__goal_form__V_11_11;
#line 772 "goal_form.m"
              MR_Word hlds__goal_form__V_13_13;
#line 772 "goal_form.m"
              MR_Word hlds__goal_form__V_14_14;
#line 772 "goal_form.m"
              MR_Word hlds__goal_form__V_15_15;
#line 772 "goal_form.m"
              MR_Word hlds__goal_form__V_16_16;
#line 773 "goal_form.m"
              MR_Word hlds__goal_form__V_17_17;
#line 773 "goal_form.m"
              MR_Word hlds__goal_form__V_18_18;

#line 772 "goal_form.m"
              hlds__goal_form__succeeded = ((MR_tag((MR_Word) hlds__goal_form__Unification_8)) == (MR_mktag((MR_Integer) 0)));
#line 772 "goal_form.m"
              if (hlds__goal_form__succeeded)
#line 772 "goal_form.m"
                {
#line 772 "goal_form.m"
                  hlds__goal_form__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Unification_8, (MR_Integer) 0)));
#line 772 "goal_form.m"
                  hlds__goal_form__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Unification_8, (MR_Integer) 1)));
#line 772 "goal_form.m"
                  hlds__goal_form__Args_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Unification_8, (MR_Integer) 2)));
#line 772 "goal_form.m"
                  hlds__goal_form__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Unification_8, (MR_Integer) 3)));
#line 772 "goal_form.m"
                  hlds__goal_form__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Unification_8, (MR_Integer) 4)));
#line 772 "goal_form.m"
                  hlds__goal_form__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Unification_8, (MR_Integer) 5)));
#line 772 "goal_form.m"
                  hlds__goal_form__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Unification_8, (MR_Integer) 6)));
#line 773 "goal_form.m"
                  hlds__goal_form__succeeded = ((MR_tag((MR_Word) hlds__goal_form__Args_12)) == (MR_mktag((MR_Integer) 1)));
#line 773 "goal_form.m"
                  if (hlds__goal_form__succeeded)
#line 773 "goal_form.m"
                    {
#line 773 "goal_form.m"
                      hlds__goal_form__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__Args_12, (MR_Integer) 0)));
#line 773 "goal_form.m"
                      hlds__goal_form__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__Args_12, (MR_Integer) 1)));
#line 773 "goal_form.m"
                    }
#line 772 "goal_form.m"
                }
#line 776 "goal_form.m"
              if (hlds__goal_form__succeeded)
#line 775 "goal_form.m"
                *hlds__goal_form__May_4 = (MR_Integer) 1;
#line 776 "goal_form.m"
              else
#line 777 "goal_form.m"
                *hlds__goal_form__May_4 = (MR_Integer) 0;
#line 770 "goal_form.m"
            }
#line 770 "goal_form.m"
            break;
#line 770 "goal_form.m"
          case (MR_Integer) 2:
#line 780 "goal_form.m"
            {
#line 780 "goal_form.m"
              MR_Word hlds__goal_form__Builtin_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__GoalExpr_3, (MR_Integer) 3)));
#line 780 "goal_form.m"
              MR_Word hlds__goal_form__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__GoalExpr_3, (MR_Integer) 0)));
#line 780 "goal_form.m"
              MR_Integer hlds__goal_form__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(2), hlds__goal_form__GoalExpr_3, (MR_Integer) 1)));
#line 780 "goal_form.m"
              MR_Word hlds__goal_form__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__GoalExpr_3, (MR_Integer) 2)));
#line 780 "goal_form.m"
              MR_Word hlds__goal_form__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__GoalExpr_3, (MR_Integer) 4)));
#line 780 "goal_form.m"
              MR_Word hlds__goal_form__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__GoalExpr_3, (MR_Integer) 5)));

#line 784 "goal_form.m"
#line 784 "goal_form.m"
              switch (hlds__goal_form__Builtin_22) {
#line 784 "goal_form.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 784 "goal_form.m"
                case (MR_Integer) 0:
#line 783 "goal_form.m"
                  *hlds__goal_form__May_4 = (MR_Integer) 0;
#line 784 "goal_form.m"
                  break;
#line 784 "goal_form.m"
                case (MR_Integer) 2:
#line 784 "goal_form.m"
                case (MR_Integer) 1:
#line 788 "goal_form.m"
                  *hlds__goal_form__May_4 = (MR_Integer) 1;
#line 784 "goal_form.m"
                  break;
#line 784 "goal_form.m"
              }
#line 780 "goal_form.m"
            }
#line 770 "goal_form.m"
            break;
#line 770 "goal_form.m"
          case (MR_Integer) 3:
#line 770 "goal_form.m"
#line 770 "goal_form.m"
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_3, (MR_Integer) 0)))) {
#line 770 "goal_form.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 770 "goal_form.m"
              case (MR_Integer) 0:
#line 792 "goal_form.m"
                *hlds__goal_form__May_4 = (MR_Integer) 1;
#line 770 "goal_form.m"
                break;
#line 770 "goal_form.m"
              case (MR_Integer) 1:
#line 800 "goal_form.m"
                *hlds__goal_form__May_4 = (MR_Integer) 1;
#line 770 "goal_form.m"
                break;
#line 770 "goal_form.m"
              case (MR_Integer) 2:
#line 802 "goal_form.m"
                {
#line 802 "goal_form.m"
                  MR_Word hlds__goal_form__ConjType_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_3, (MR_Integer) 1)));
#line 802 "goal_form.m"
                  MR_Word hlds__goal_form__Goals_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_3, (MR_Integer) 2)));

#line 806 "goal_form.m"
#line 806 "goal_form.m"
                  switch (hlds__goal_form__ConjType_37) {
#line 806 "goal_form.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 806 "goal_form.m"
                    case (MR_Integer) 1:
#line 805 "goal_form.m"
                      *hlds__goal_form__May_4 = (MR_Integer) 1;
#line 806 "goal_form.m"
                      break;
#line 806 "goal_form.m"
                    case (MR_Integer) 0:
#line 808 "goal_form.m"
                      {
#line 808 "goal_form.m"
                        hlds__goal_form__goal_list_may_allocate_heap_2_p_0(hlds__goal_form__Goals_38, hlds__goal_form__May_4);
#line 808 "goal_form.m"
                        return;
                      }
#line 806 "goal_form.m"
                      break;
#line 806 "goal_form.m"
                  }
#line 802 "goal_form.m"
                }
#line 770 "goal_form.m"
                break;
#line 770 "goal_form.m"
              case (MR_Integer) 3:
#line 811 "goal_form.m"
                {
#line 811 "goal_form.m"
                  MR_Word hlds__goal_form__Goals_66 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_3, (MR_Integer) 1)));

#line 812 "goal_form.m"
                  {
#line 812 "goal_form.m"
                    hlds__goal_form__goal_list_may_allocate_heap_2_p_0(hlds__goal_form__Goals_66, hlds__goal_form__May_4);
#line 812 "goal_form.m"
                    return;
                  }
#line 811 "goal_form.m"
                }
#line 770 "goal_form.m"
                break;
#line 770 "goal_form.m"
              case (MR_Integer) 4:
#line 814 "goal_form.m"
                {
#line 814 "goal_form.m"
                  MR_Word hlds__goal_form__Cases_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_3, (MR_Integer) 3)));
#line 814 "goal_form.m"
                  MR_Word hlds__goal_form___Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_3, (MR_Integer) 1)));
#line 814 "goal_form.m"
                  MR_Word hlds__goal_form___CanFail_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_3, (MR_Integer) 2)));

#line 815 "goal_form.m"
                  {
#line 815 "goal_form.m"
                    hlds__goal_form__cases_may_allocate_heap_2_p_0(hlds__goal_form__Cases_41, hlds__goal_form__May_4);
#line 815 "goal_form.m"
                    return;
                  }
#line 814 "goal_form.m"
                }
#line 770 "goal_form.m"
                break;
#line 770 "goal_form.m"
              case (MR_Integer) 5:
#line 829 "goal_form.m"
                {
#line 829 "goal_form.m"
                  MR_Word hlds__goal_form__Reason_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_3, (MR_Integer) 1)));
#line 829 "goal_form.m"
                  MR_Word hlds__goal_form__SubGoal_67 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_3, (MR_Integer) 2)));
#line 831 "goal_form.m"
                  MR_Word hlds__goal_form__FGT_49;
#line 831 "goal_form.m"
                  MR_Word hlds__goal_form__V_48_48;

#line 831 "goal_form.m"
                  hlds__goal_form__succeeded = ((((MR_tag((MR_Word) hlds__goal_form__Reason_47)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__Reason_47, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 831 "goal_form.m"
                  if (hlds__goal_form__succeeded)
#line 831 "goal_form.m"
                    {
#line 831 "goal_form.m"
                      hlds__goal_form__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__Reason_47, (MR_Integer) 1)));
#line 831 "goal_form.m"
                      hlds__goal_form__FGT_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__Reason_47, (MR_Integer) 2)));
#line 833 "goal_form.m"
#line 833 "goal_form.m"
                      switch (hlds__goal_form__FGT_49) {
#line 833 "goal_form.m"
                        default:
#line 833 "goal_form.m"
                          hlds__goal_form__succeeded = MR_FALSE;
#line 833 "goal_form.m"
                          break;
#line 833 "goal_form.m"
                        case (MR_Integer) 1:
#line 832 "goal_form.m"
                          hlds__goal_form__succeeded = MR_TRUE;
#line 833 "goal_form.m"
                          break;
#line 833 "goal_form.m"
                        case (MR_Integer) 2:
#line 833 "goal_form.m"
                          hlds__goal_form__succeeded = MR_TRUE;
#line 833 "goal_form.m"
                          break;
#line 833 "goal_form.m"
                      }
#line 831 "goal_form.m"
                    }
#line 842 "goal_form.m"
                  if (hlds__goal_form__succeeded)
#line 841 "goal_form.m"
                    *hlds__goal_form__May_4 = (MR_Integer) 1;
#line 842 "goal_form.m"
                  else
#line 763 "goal_form.m"
                    {
#line 763 "goal_form.m"
                      MR_Word hlds__goal_form__GoalExpr_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__SubGoal_67, (MR_Integer) 0)));
#line 763 "goal_form.m"
                      MR_Word hlds__goal_form___GoalInfo_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__SubGoal_67, (MR_Integer) 1)));

#line 764 "goal_form.m"
                      /* direct tailcall eliminated */
#line 764 "goal_form.m"
                      {
#line 764 "goal_form.m"
                        MR_Word hlds__goal_form__GoalExpr__tmp_copy_3 = hlds__goal_form__GoalExpr_84;

#line 764 "goal_form.m"
                        hlds__goal_form__GoalExpr_3 = hlds__goal_form__GoalExpr__tmp_copy_3;
#line 764 "goal_form.m"
                      }
#line 764 "goal_form.m"
                      continue;
#line 763 "goal_form.m"
                    }
#line 829 "goal_form.m"
                }
#line 770 "goal_form.m"
                break;
#line 770 "goal_form.m"
              case (MR_Integer) 6:
#line 817 "goal_form.m"
                {
#line 817 "goal_form.m"
                  MR_Word hlds__goal_form__Cond_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_3, (MR_Integer) 2)));
#line 817 "goal_form.m"
                  MR_Word hlds__goal_form__Then_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_3, (MR_Integer) 3)));
#line 817 "goal_form.m"
                  MR_Word hlds__goal_form__Else_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_3, (MR_Integer) 4)));
#line 817 "goal_form.m"
                  MR_Word hlds__goal_form___Vars_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_3, (MR_Integer) 1)));
#line 818 "goal_form.m"
                  MR_Word hlds__goal_form__V_68_68;
#line 818 "goal_form.m"
                  MR_Word hlds__goal_form__GoalExpr_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Cond_43, (MR_Integer) 0)));
#line 763 "goal_form.m"
                  MR_Word hlds__goal_form___GoalInfo_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Cond_43, (MR_Integer) 1)));

#line 764 "goal_form.m"
                  {
#line 764 "goal_form.m"
                    hlds__goal_form__goal_may_allocate_heap_2_2_p_0(hlds__goal_form__GoalExpr_72, &hlds__goal_form__V_68_68);
                  }
#line 818 "goal_form.m"
                  hlds__goal_form__succeeded = ((MR_Integer) 1 == hlds__goal_form__V_68_68);
#line 820 "goal_form.m"
                  if (hlds__goal_form__succeeded)
#line 819 "goal_form.m"
                    *hlds__goal_form__May_4 = (MR_Integer) 1;
#line 820 "goal_form.m"
                  else
#line 822 "goal_form.m"
                    {
#line 820 "goal_form.m"
                      MR_Word hlds__goal_form__V_69_69;
#line 820 "goal_form.m"
                      MR_Word hlds__goal_form__GoalExpr_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Then_44, (MR_Integer) 0)));
#line 763 "goal_form.m"
                      MR_Word hlds__goal_form___GoalInfo_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Then_44, (MR_Integer) 1)));

#line 764 "goal_form.m"
                      {
#line 764 "goal_form.m"
                        hlds__goal_form__goal_may_allocate_heap_2_2_p_0(hlds__goal_form__GoalExpr_75, &hlds__goal_form__V_69_69);
                      }
#line 820 "goal_form.m"
                      hlds__goal_form__succeeded = ((MR_Integer) 1 == hlds__goal_form__V_69_69);
#line 822 "goal_form.m"
                      if (hlds__goal_form__succeeded)
#line 821 "goal_form.m"
                        *hlds__goal_form__May_4 = (MR_Integer) 1;
#line 822 "goal_form.m"
                      else
#line 763 "goal_form.m"
                        {
#line 763 "goal_form.m"
                          MR_Word hlds__goal_form__GoalExpr_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Else_45, (MR_Integer) 0)));
#line 763 "goal_form.m"
                          MR_Word hlds__goal_form___GoalInfo_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Else_45, (MR_Integer) 1)));

#line 764 "goal_form.m"
                          /* direct tailcall eliminated */
#line 764 "goal_form.m"
                          {
#line 764 "goal_form.m"
                            MR_Word hlds__goal_form__GoalExpr__tmp_copy_3 = hlds__goal_form__GoalExpr_78;

#line 764 "goal_form.m"
                            hlds__goal_form__GoalExpr_3 = hlds__goal_form__GoalExpr__tmp_copy_3;
#line 764 "goal_form.m"
                          }
#line 764 "goal_form.m"
                          continue;
#line 763 "goal_form.m"
                        }
#line 822 "goal_form.m"
                    }
#line 817 "goal_form.m"
                }
#line 770 "goal_form.m"
                break;
#line 770 "goal_form.m"
              case (MR_Integer) 7:
#line 846 "goal_form.m"
                {
#line 846 "goal_form.m"
                  MR_Word hlds__goal_form__ShortHand_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_3, (MR_Integer) 1)));

#line 852 "goal_form.m"
#line 852 "goal_form.m"
                  switch (MR_tag((MR_Word) hlds__goal_form__ShortHand_50)) {
#line 852 "goal_form.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 852 "goal_form.m"
                    case (MR_Integer) 0:
#line 853 "goal_form.m"
                      {
#line 853 "goal_form.m"
                        MR_Word hlds__goal_form__GoalA_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__ShortHand_50, (MR_Integer) 0)));
#line 853 "goal_form.m"
                        MR_Word hlds__goal_form__GoalB_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__ShortHand_50, (MR_Integer) 1)));
#line 854 "goal_form.m"
                        MR_Word hlds__goal_form__V_70_70;
#line 854 "goal_form.m"
                        MR_Word hlds__goal_form__GoalExpr_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__GoalA_61, (MR_Integer) 0)));
#line 763 "goal_form.m"
                        MR_Word hlds__goal_form___GoalInfo_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__GoalA_61, (MR_Integer) 1)));

#line 764 "goal_form.m"
                        {
#line 764 "goal_form.m"
                          hlds__goal_form__goal_may_allocate_heap_2_2_p_0(hlds__goal_form__GoalExpr_87, &hlds__goal_form__V_70_70);
                        }
#line 854 "goal_form.m"
                        hlds__goal_form__succeeded = ((MR_Integer) 1 == hlds__goal_form__V_70_70);
#line 856 "goal_form.m"
                        if (hlds__goal_form__succeeded)
#line 855 "goal_form.m"
                          *hlds__goal_form__May_4 = (MR_Integer) 1;
#line 856 "goal_form.m"
                        else
#line 763 "goal_form.m"
                          {
#line 763 "goal_form.m"
                            MR_Word hlds__goal_form__GoalExpr_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__GoalB_62, (MR_Integer) 0)));
#line 763 "goal_form.m"
                            MR_Word hlds__goal_form___GoalInfo_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__GoalB_62, (MR_Integer) 1)));

#line 764 "goal_form.m"
                            /* direct tailcall eliminated */
#line 764 "goal_form.m"
                            {
#line 764 "goal_form.m"
                              MR_Word hlds__goal_form__GoalExpr__tmp_copy_3 = hlds__goal_form__GoalExpr_90;

#line 764 "goal_form.m"
                              hlds__goal_form__GoalExpr_3 = hlds__goal_form__GoalExpr__tmp_copy_3;
#line 764 "goal_form.m"
                            }
#line 764 "goal_form.m"
                            continue;
#line 763 "goal_form.m"
                          }
#line 853 "goal_form.m"
                      }
#line 852 "goal_form.m"
                      break;
#line 852 "goal_form.m"
                    case (MR_Integer) 1:
#line 852 "goal_form.m"
                    case (MR_Integer) 2:
#line 851 "goal_form.m"
                      *hlds__goal_form__May_4 = (MR_Integer) 1;
#line 852 "goal_form.m"
                      break;
#line 852 "goal_form.m"
                  }
#line 846 "goal_form.m"
                }
#line 770 "goal_form.m"
                break;
#line 770 "goal_form.m"
            }
#line 770 "goal_form.m"
            break;
#line 770 "goal_form.m"
        }
#line 770 "goal_form.m"
      }
#line 770 "goal_form.m"
      break;
#line 770 "goal_form.m"
    }
#line 766 "goal_form.m"
}

#line 743 "goal_form.m"
static MR_Word MR_CALL 
hlds__goal_form__goal_is_flat_list_1_f_0(
#line 743 "goal_form.m"
  MR_Word hlds__goal_form__HeadVar__1_1)
#line 743 "goal_form.m"
{
#line 745 "goal_form.m"
  while (MR_TRUE)
#line 745 "goal_form.m"
    {
#line 745 "goal_form.m"
      /* tailcall optimized into a loop */
#line 745 "goal_form.m"
      {
#line 745 "goal_form.m"
        MR_bool hlds__goal_form__succeeded;
#line 745 "goal_form.m"
        MR_Word hlds__goal_form__HeadVar__2_2;

#line 745 "goal_form.m"
        if ((hlds__goal_form__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 745 "goal_form.m"
          hlds__goal_form__HeadVar__2_2 = (MR_Integer) 1;
#line 745 "goal_form.m"
        else
#line 746 "goal_form.m"
          {
#line 746 "goal_form.m"
            MR_Word hlds__goal_form__Goal_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__HeadVar__1_1, (MR_Integer) 0)));
#line 746 "goal_form.m"
            MR_Word hlds__goal_form__Goals_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__HeadVar__1_1, (MR_Integer) 1)));
#line 747 "goal_form.m"
            MR_Word hlds__goal_form__V_6_6;
#line 747 "goal_form.m"
            MR_Word hlds__goal_form__GoalExpr_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Goal_3, (MR_Integer) 0)));
#line 698 "goal_form.m"
            MR_Word hlds__goal_form___GoalInfo_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Goal_3, (MR_Integer) 1)));

#line 698 "goal_form.m"
            {
#line 698 "goal_form.m"
              hlds__goal_form__V_6_6 = hlds__goal_form__goal_is_flat_expr_1_f_0(hlds__goal_form__GoalExpr_7);
            }
#line 747 "goal_form.m"
            hlds__goal_form__succeeded = (hlds__goal_form__V_6_6 == (MR_Integer) 1);
#line 749 "goal_form.m"
            if (hlds__goal_form__succeeded)
#line 748 "goal_form.m"
              {
#line 748 "goal_form.m"
                /* direct tailcall eliminated */
#line 748 "goal_form.m"
                {
#line 748 "goal_form.m"
                  MR_Word hlds__goal_form__HeadVar__1__tmp_copy_1 = hlds__goal_form__Goals_4;

#line 748 "goal_form.m"
                  hlds__goal_form__HeadVar__1_1 = hlds__goal_form__HeadVar__1__tmp_copy_1;
#line 748 "goal_form.m"
                }
#line 748 "goal_form.m"
                continue;
#line 748 "goal_form.m"
              }
#line 749 "goal_form.m"
            else
#line 750 "goal_form.m"
              hlds__goal_form__HeadVar__2_2 = (MR_Integer) 0;
#line 746 "goal_form.m"
          }
#line 745 "goal_form.m"
        return hlds__goal_form__HeadVar__2_2;
#line 745 "goal_form.m"
      }
#line 745 "goal_form.m"
      break;
#line 745 "goal_form.m"
    }
#line 743 "goal_form.m"
}

#line 700 "goal_form.m"
static MR_Word MR_CALL 
hlds__goal_form__goal_is_flat_expr_1_f_0(
#line 700 "goal_form.m"
  MR_Word hlds__goal_form__GoalExpr_3)
#line 700 "goal_form.m"
{
#line 708 "goal_form.m"
  while (MR_TRUE)
#line 708 "goal_form.m"
    {
#line 708 "goal_form.m"
      /* tailcall optimized into a loop */
#line 708 "goal_form.m"
      {
#line 708 "goal_form.m"
        MR_bool hlds__goal_form__succeeded;
#line 708 "goal_form.m"
        MR_Word hlds__goal_form__IsFlat_4;

#line 708 "goal_form.m"
#line 708 "goal_form.m"
        switch (MR_tag((MR_Word) hlds__goal_form__GoalExpr_3)) {
#line 708 "goal_form.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 708 "goal_form.m"
          case (MR_Integer) 0:
#line 727 "goal_form.m"
            {
#line 727 "goal_form.m"
              MR_Word hlds__goal_form__SubGoal_39 = (MR_Word) MR_body(((MR_Word) hlds__goal_form__GoalExpr_3), (MR_Integer) 0);
#line 727 "goal_form.m"
              MR_Word hlds__goal_form__GoalExpr_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__SubGoal_39, (MR_Integer) 0)));
#line 698 "goal_form.m"
              MR_Word hlds__goal_form___GoalInfo_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__SubGoal_39, (MR_Integer) 1)));

#line 698 "goal_form.m"
              /* direct tailcall eliminated */
#line 698 "goal_form.m"
              {
#line 698 "goal_form.m"
                MR_Word hlds__goal_form__GoalExpr__tmp_copy_3 = hlds__goal_form__GoalExpr_44;

#line 698 "goal_form.m"
                hlds__goal_form__GoalExpr_3 = hlds__goal_form__GoalExpr__tmp_copy_3;
#line 698 "goal_form.m"
              }
#line 698 "goal_form.m"
              continue;
#line 727 "goal_form.m"
            }
#line 708 "goal_form.m"
            break;
#line 708 "goal_form.m"
          case (MR_Integer) 1:
#line 708 "goal_form.m"
          case (MR_Integer) 2:
#line 709 "goal_form.m"
            hlds__goal_form__IsFlat_4 = (MR_Integer) 1;
#line 708 "goal_form.m"
            break;
#line 708 "goal_form.m"
          case (MR_Integer) 3:
#line 708 "goal_form.m"
#line 708 "goal_form.m"
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_3, (MR_Integer) 0)))) {
#line 708 "goal_form.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 708 "goal_form.m"
              case (MR_Integer) 0:
#line 708 "goal_form.m"
              case (MR_Integer) 1:
#line 709 "goal_form.m"
                hlds__goal_form__IsFlat_4 = (MR_Integer) 1;
#line 708 "goal_form.m"
                break;
#line 708 "goal_form.m"
              case (MR_Integer) 2:
#line 711 "goal_form.m"
                {
#line 711 "goal_form.m"
                  MR_Word hlds__goal_form__ConjType_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_3, (MR_Integer) 1)));
#line 711 "goal_form.m"
                  MR_Word hlds__goal_form__Goals_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_3, (MR_Integer) 2)));

#line 715 "goal_form.m"
#line 715 "goal_form.m"
                  switch (hlds__goal_form__ConjType_28) {
#line 715 "goal_form.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 715 "goal_form.m"
                    case (MR_Integer) 1:
#line 714 "goal_form.m"
                      hlds__goal_form__IsFlat_4 = (MR_Integer) 0;
#line 715 "goal_form.m"
                      break;
#line 715 "goal_form.m"
                    case (MR_Integer) 0:
#line 717 "goal_form.m"
                      {
#line 717 "goal_form.m"
                        return hlds__goal_form__IsFlat_4 = hlds__goal_form__goal_is_flat_list_1_f_0(hlds__goal_form__Goals_29);
                      }
#line 715 "goal_form.m"
                      break;
#line 715 "goal_form.m"
                  }
#line 711 "goal_form.m"
                }
#line 708 "goal_form.m"
                break;
#line 708 "goal_form.m"
              case (MR_Integer) 3:
#line 708 "goal_form.m"
              case (MR_Integer) 4:
#line 708 "goal_form.m"
              case (MR_Integer) 6:
#line 708 "goal_form.m"
              case (MR_Integer) 7:
#line 725 "goal_form.m"
                hlds__goal_form__IsFlat_4 = (MR_Integer) 0;
#line 708 "goal_form.m"
                break;
#line 708 "goal_form.m"
              case (MR_Integer) 5:
#line 730 "goal_form.m"
                {
#line 730 "goal_form.m"
                  MR_Word hlds__goal_form__Reason_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_3, (MR_Integer) 1)));
#line 730 "goal_form.m"
                  MR_Word hlds__goal_form__SubGoal_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_3, (MR_Integer) 2)));
#line 732 "goal_form.m"
                  MR_Word hlds__goal_form__FGT_42;
#line 732 "goal_form.m"
                  MR_Word hlds__goal_form__V_41_41;

#line 732 "goal_form.m"
                  hlds__goal_form__succeeded = ((((MR_tag((MR_Word) hlds__goal_form__Reason_40)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__Reason_40, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 732 "goal_form.m"
                  if (hlds__goal_form__succeeded)
#line 732 "goal_form.m"
                    {
#line 732 "goal_form.m"
                      hlds__goal_form__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__Reason_40, (MR_Integer) 1)));
#line 732 "goal_form.m"
                      hlds__goal_form__FGT_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__Reason_40, (MR_Integer) 2)));
#line 734 "goal_form.m"
#line 734 "goal_form.m"
                      switch (hlds__goal_form__FGT_42) {
#line 734 "goal_form.m"
                        default:
#line 734 "goal_form.m"
                          hlds__goal_form__succeeded = MR_FALSE;
#line 734 "goal_form.m"
                          break;
#line 734 "goal_form.m"
                        case (MR_Integer) 1:
#line 733 "goal_form.m"
                          hlds__goal_form__succeeded = MR_TRUE;
#line 734 "goal_form.m"
                          break;
#line 734 "goal_form.m"
                        case (MR_Integer) 2:
#line 734 "goal_form.m"
                          hlds__goal_form__succeeded = MR_TRUE;
#line 734 "goal_form.m"
                          break;
#line 734 "goal_form.m"
                      }
#line 732 "goal_form.m"
                    }
#line 738 "goal_form.m"
                  if (hlds__goal_form__succeeded)
#line 737 "goal_form.m"
                    hlds__goal_form__IsFlat_4 = (MR_Integer) 1;
#line 738 "goal_form.m"
                  else
#line 698 "goal_form.m"
                    {
#line 698 "goal_form.m"
                      MR_Word hlds__goal_form__GoalExpr_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__SubGoal_43, (MR_Integer) 0)));
#line 698 "goal_form.m"
                      MR_Word hlds__goal_form___GoalInfo_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__SubGoal_43, (MR_Integer) 1)));

#line 698 "goal_form.m"
                      /* direct tailcall eliminated */
#line 698 "goal_form.m"
                      {
#line 698 "goal_form.m"
                        MR_Word hlds__goal_form__GoalExpr__tmp_copy_3 = hlds__goal_form__GoalExpr_46;

#line 698 "goal_form.m"
                        hlds__goal_form__GoalExpr_3 = hlds__goal_form__GoalExpr__tmp_copy_3;
#line 698 "goal_form.m"
                      }
#line 698 "goal_form.m"
                      continue;
#line 698 "goal_form.m"
                    }
#line 730 "goal_form.m"
                }
#line 708 "goal_form.m"
                break;
#line 708 "goal_form.m"
            }
#line 708 "goal_form.m"
            break;
#line 708 "goal_form.m"
        }
#line 708 "goal_form.m"
        return hlds__goal_form__IsFlat_4;
#line 708 "goal_form.m"
      }
#line 708 "goal_form.m"
      break;
#line 708 "goal_form.m"
    }
#line 700 "goal_form.m"
}

#line 686 "goal_form.m"
static MR_Word MR_CALL 
hlds__goal_form__case_list_can_throw_2_f_0(
#line 686 "goal_form.m"
  MR_Word hlds__goal_form__MaybeModuleInfo_1,
#line 686 "goal_form.m"
  MR_Word hlds__goal_form__HeadVar__2_2)
#line 686 "goal_form.m"
{
#line 688 "goal_form.m"
  while (MR_TRUE)
#line 688 "goal_form.m"
    {
#line 688 "goal_form.m"
      /* tailcall optimized into a loop */
#line 688 "goal_form.m"
      {
#line 688 "goal_form.m"
        MR_bool hlds__goal_form__succeeded;
#line 688 "goal_form.m"
        MR_Word hlds__goal_form__HeadVar__3_3;

#line 688 "goal_form.m"
        if ((hlds__goal_form__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 688 "goal_form.m"
          hlds__goal_form__HeadVar__3_3 = (MR_Integer) 0;
#line 688 "goal_form.m"
        else
#line 689 "goal_form.m"
          {
#line 689 "goal_form.m"
            MR_Word hlds__goal_form__Goal_8;
#line 689 "goal_form.m"
            MR_Word hlds__goal_form__Cases_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__HeadVar__2_2, (MR_Integer) 1)));
#line 689 "goal_form.m"
            MR_Word hlds__goal_form__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__HeadVar__2_2, (MR_Integer) 0)));
#line 689 "goal_form.m"
            MR_Word hlds__goal_form__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__V_10_10, (MR_Integer) 0)));
#line 689 "goal_form.m"
            MR_Word hlds__goal_form__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__V_10_10, (MR_Integer) 1)));
#line 690 "goal_form.m"
            MR_Word hlds__goal_form__GoalExpr_14;
#line 690 "goal_form.m"
            MR_Word hlds__goal_form__GoalInfo_15;
#line 690 "goal_form.m"
            MR_Word hlds__goal_form__Determinism_16;

#line 689 "goal_form.m"
            hlds__goal_form__Goal_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__V_10_10, (MR_Integer) 2)));
#line 569 "goal_form.m"
            hlds__goal_form__GoalExpr_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Goal_8, (MR_Integer) 0)));
#line 569 "goal_form.m"
            hlds__goal_form__GoalInfo_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Goal_8, (MR_Integer) 1)));
#line 571 "goal_form.m"
            {
#line 571 "goal_form.m"
              hlds__goal_form__Determinism_16 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(hlds__goal_form__GoalInfo_15);
            }
#line 572 "goal_form.m"
            hlds__goal_form__succeeded = (hlds__goal_form__Determinism_16 == (MR_Integer) 6);
#line 574 "goal_form.m"
            if (hlds__goal_form__succeeded)
#line 573 "goal_form.m"
              hlds__goal_form__succeeded = MR_TRUE;
#line 574 "goal_form.m"
            else
#line 575 "goal_form.m"
              {
#line 575 "goal_form.m"
                MR_Word hlds__goal_form__V_18_18;

#line 575 "goal_form.m"
                {
#line 575 "goal_form.m"
                  hlds__goal_form__V_18_18 = hlds__goal_form__goal_expr_can_throw_2_f_0(hlds__goal_form__MaybeModuleInfo_1, hlds__goal_form__GoalExpr_14);
                }
#line 690 "goal_form.m"
                hlds__goal_form__succeeded = (hlds__goal_form__V_18_18 == (MR_Integer) 1);
#line 575 "goal_form.m"
              }
#line 689 "goal_form.m"
            if (hlds__goal_form__succeeded)
#line 691 "goal_form.m"
              hlds__goal_form__HeadVar__3_3 = (MR_Integer) 1;
#line 689 "goal_form.m"
            else
#line 693 "goal_form.m"
              {
#line 693 "goal_form.m"
                /* direct tailcall eliminated */
#line 693 "goal_form.m"
                {
#line 693 "goal_form.m"
                  MR_Word hlds__goal_form__HeadVar__2__tmp_copy_2 = hlds__goal_form__Cases_9;

#line 693 "goal_form.m"
                  hlds__goal_form__HeadVar__2_2 = hlds__goal_form__HeadVar__2__tmp_copy_2;
#line 693 "goal_form.m"
                }
#line 693 "goal_form.m"
                continue;
#line 693 "goal_form.m"
              }
#line 689 "goal_form.m"
          }
#line 688 "goal_form.m"
        return hlds__goal_form__HeadVar__3_3;
#line 688 "goal_form.m"
      }
#line 688 "goal_form.m"
      break;
#line 688 "goal_form.m"
    }
#line 686 "goal_form.m"
}

#line 676 "goal_form.m"
static MR_Word MR_CALL 
hlds__goal_form__goal_list_can_throw_2_f_0(
#line 676 "goal_form.m"
  MR_Word hlds__goal_form__MaybeModuleInfo_1,
#line 676 "goal_form.m"
  MR_Word hlds__goal_form__HeadVar__2_2)
#line 676 "goal_form.m"
{
#line 678 "goal_form.m"
  while (MR_TRUE)
#line 678 "goal_form.m"
    {
#line 678 "goal_form.m"
      /* tailcall optimized into a loop */
#line 678 "goal_form.m"
      {
#line 678 "goal_form.m"
        MR_bool hlds__goal_form__succeeded;
#line 678 "goal_form.m"
        MR_Word hlds__goal_form__HeadVar__3_3;

#line 678 "goal_form.m"
        if ((hlds__goal_form__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 678 "goal_form.m"
          hlds__goal_form__HeadVar__3_3 = (MR_Integer) 0;
#line 678 "goal_form.m"
        else
#line 679 "goal_form.m"
          {
#line 679 "goal_form.m"
            MR_Word hlds__goal_form__Goal_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__HeadVar__2_2, (MR_Integer) 0)));
#line 679 "goal_form.m"
            MR_Word hlds__goal_form__Goals_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__HeadVar__2_2, (MR_Integer) 1)));
#line 680 "goal_form.m"
            MR_Word hlds__goal_form__GoalExpr_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Goal_6, (MR_Integer) 0)));
#line 680 "goal_form.m"
            MR_Word hlds__goal_form__GoalInfo_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Goal_6, (MR_Integer) 1)));
#line 680 "goal_form.m"
            MR_Word hlds__goal_form__Determinism_13;

#line 571 "goal_form.m"
            {
#line 571 "goal_form.m"
              hlds__goal_form__Determinism_13 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(hlds__goal_form__GoalInfo_12);
            }
#line 572 "goal_form.m"
            hlds__goal_form__succeeded = (hlds__goal_form__Determinism_13 == (MR_Integer) 6);
#line 574 "goal_form.m"
            if (hlds__goal_form__succeeded)
#line 573 "goal_form.m"
              hlds__goal_form__succeeded = MR_TRUE;
#line 574 "goal_form.m"
            else
#line 575 "goal_form.m"
              {
#line 575 "goal_form.m"
                MR_Word hlds__goal_form__V_15_15;

#line 575 "goal_form.m"
                {
#line 575 "goal_form.m"
                  hlds__goal_form__V_15_15 = hlds__goal_form__goal_expr_can_throw_2_f_0(hlds__goal_form__MaybeModuleInfo_1, hlds__goal_form__GoalExpr_11);
                }
#line 680 "goal_form.m"
                hlds__goal_form__succeeded = (hlds__goal_form__V_15_15 == (MR_Integer) 1);
#line 575 "goal_form.m"
              }
#line 679 "goal_form.m"
            if (hlds__goal_form__succeeded)
#line 681 "goal_form.m"
              hlds__goal_form__HeadVar__3_3 = (MR_Integer) 1;
#line 679 "goal_form.m"
            else
#line 683 "goal_form.m"
              {
#line 683 "goal_form.m"
                /* direct tailcall eliminated */
#line 683 "goal_form.m"
                {
#line 683 "goal_form.m"
                  MR_Word hlds__goal_form__HeadVar__2__tmp_copy_2 = hlds__goal_form__Goals_7;

#line 683 "goal_form.m"
                  hlds__goal_form__HeadVar__2_2 = hlds__goal_form__HeadVar__2__tmp_copy_2;
#line 683 "goal_form.m"
                }
#line 683 "goal_form.m"
                continue;
#line 683 "goal_form.m"
              }
#line 679 "goal_form.m"
          }
#line 678 "goal_form.m"
        return hlds__goal_form__HeadVar__3_3;
#line 678 "goal_form.m"
      }
#line 678 "goal_form.m"
      break;
#line 678 "goal_form.m"
    }
#line 676 "goal_form.m"
}

#line 578 "goal_form.m"
static MR_Word MR_CALL 
hlds__goal_form__goal_expr_can_throw_2_f_0(
#line 578 "goal_form.m"
  MR_Word hlds__goal_form__MaybeModuleInfo_4,
#line 578 "goal_form.m"
  MR_Word hlds__goal_form__GoalExpr_5)
#line 578 "goal_form.m"
{
#line 582 "goal_form.m"
  {
#line 582 "goal_form.m"
    MR_bool hlds__goal_form__succeeded;
#line 582 "goal_form.m"
    MR_Word hlds__goal_form__CanThrow_6;

#line 582 "goal_form.m"
#line 582 "goal_form.m"
    switch (MR_tag((MR_Word) hlds__goal_form__GoalExpr_5)) {
#line 582 "goal_form.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 582 "goal_form.m"
      case (MR_Integer) 0:
#line 646 "goal_form.m"
        {
#line 646 "goal_form.m"
          MR_Word hlds__goal_form__SubGoal_64 = (MR_Word) MR_body(((MR_Word) hlds__goal_form__GoalExpr_5), (MR_Integer) 0);

#line 647 "goal_form.m"
          {
#line 647 "goal_form.m"
            return hlds__goal_form__CanThrow_6 = hlds__goal_form__goal_can_throw_func_2_f_0(hlds__goal_form__MaybeModuleInfo_4, hlds__goal_form__SubGoal_64);
          }
#line 646 "goal_form.m"
        }
#line 582 "goal_form.m"
        break;
#line 582 "goal_form.m"
      case (MR_Integer) 1:
#line 582 "goal_form.m"
        {
#line 582 "goal_form.m"
          MR_Word hlds__goal_form__Uni_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__GoalExpr_5, (MR_Integer) 3)));
#line 582 "goal_form.m"
          MR_Word hlds__goal_form__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__GoalExpr_5, (MR_Integer) 0)));
#line 582 "goal_form.m"
          MR_Word hlds__goal_form__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__GoalExpr_5, (MR_Integer) 1)));
#line 582 "goal_form.m"
          MR_Word hlds__goal_form__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__GoalExpr_5, (MR_Integer) 2)));
#line 582 "goal_form.m"
          MR_Word hlds__goal_form__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__GoalExpr_5, (MR_Integer) 4)));

#line 590 "goal_form.m"
#line 590 "goal_form.m"
          switch (MR_tag((MR_Word) hlds__goal_form__Uni_10)) {
#line 590 "goal_form.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 590 "goal_form.m"
            case (MR_Integer) 0:
#line 590 "goal_form.m"
            case (MR_Integer) 1:
#line 590 "goal_form.m"
            case (MR_Integer) 2:
#line 589 "goal_form.m"
              hlds__goal_form__CanThrow_6 = (MR_Integer) 0;
#line 590 "goal_form.m"
              break;
#line 590 "goal_form.m"
            case (MR_Integer) 3:
#line 590 "goal_form.m"
#line 590 "goal_form.m"
              switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__Uni_10, (MR_Integer) 0)))) {
#line 590 "goal_form.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 590 "goal_form.m"
                case (MR_Integer) 0:
#line 589 "goal_form.m"
                  hlds__goal_form__CanThrow_6 = (MR_Integer) 0;
#line 590 "goal_form.m"
                  break;
#line 590 "goal_form.m"
                case (MR_Integer) 1:
#line 594 "goal_form.m"
                  hlds__goal_form__CanThrow_6 = (MR_Integer) 1;
#line 590 "goal_form.m"
                  break;
#line 590 "goal_form.m"
              }
#line 590 "goal_form.m"
              break;
#line 590 "goal_form.m"
          }
#line 582 "goal_form.m"
        }
#line 582 "goal_form.m"
        break;
#line 582 "goal_form.m"
      case (MR_Integer) 2:
#line 597 "goal_form.m"
        {
#line 597 "goal_form.m"
          MR_Word hlds__goal_form__PredId_32 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__GoalExpr_5, (MR_Integer) 0)));
#line 597 "goal_form.m"
          MR_Integer hlds__goal_form__ProcId_33 = ((MR_Integer) (MR_hl_field(MR_mktag(2), hlds__goal_form__GoalExpr_5, (MR_Integer) 1)));
#line 597 "goal_form.m"
          MR_Word hlds__goal_form__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__GoalExpr_5, (MR_Integer) 2)));
#line 597 "goal_form.m"
          MR_Word hlds__goal_form__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__GoalExpr_5, (MR_Integer) 3)));
#line 597 "goal_form.m"
          MR_Word hlds__goal_form__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__GoalExpr_5, (MR_Integer) 4)));
#line 597 "goal_form.m"
          MR_Word hlds__goal_form__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__GoalExpr_5, (MR_Integer) 5)));
#line 599 "goal_form.m"
          MR_Word hlds__goal_form__TypeCtorInfo_90_90;
#line 599 "goal_form.m"
          MR_Word hlds__goal_form__TypeCtorInfo_91_91;
#line 599 "goal_form.m"
          MR_Word hlds__goal_form__ModuleInfo_38;
#line 599 "goal_form.m"
          MR_Word hlds__goal_form__ExceptionInfo_39;
#line 599 "goal_form.m"
          MR_Word hlds__goal_form__ProcExceptionInfo_40;
#line 599 "goal_form.m"
          MR_Word hlds__goal_form__V_87_87;
#line 599 "goal_form.m"
          MR_Word hlds__goal_form__V_88_88;
#line 601 "goal_form.m"
          MR_Box hlds__goal_form__conv0_ProcExceptionInfo_40;
#line 602 "goal_form.m"
          MR_Word hlds__goal_form__V_41_41;

#line 599 "goal_form.m"
          hlds__goal_form__succeeded = ((MR_tag((MR_Word) hlds__goal_form__MaybeModuleInfo_4)) == (MR_mktag((MR_Integer) 1)));
#line 599 "goal_form.m"
          if (hlds__goal_form__succeeded)
#line 599 "goal_form.m"
            {
#line 599 "goal_form.m"
              hlds__goal_form__ModuleInfo_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__MaybeModuleInfo_4, (MR_Integer) 0)));
#line 600 "goal_form.m"
              {
#line 600 "goal_form.m"
                hlds__hlds_module__module_info_get_exception_info_2_p_0(hlds__goal_form__ModuleInfo_38, &hlds__goal_form__ExceptionInfo_39);
              }
#line 4270 "hlds.goal_form.c"
              hlds__goal_form__TypeCtorInfo_90_90 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
#line 4272 "hlds.goal_form.c"
              hlds__goal_form__TypeCtorInfo_91_91 = (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_proc_exception_info_0;
#line 601 "goal_form.m"
              {
#line 601 "goal_form.m"
                hlds__goal_form__V_87_87 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 601 "goal_form.m"
                MR_hl_field(MR_mktag(0), hlds__goal_form__V_87_87, 0) = ((MR_Box) (hlds__goal_form__PredId_32));
#line 601 "goal_form.m"
                MR_hl_field(MR_mktag(0), hlds__goal_form__V_87_87, 1) = ((MR_Box) (hlds__goal_form__ProcId_33));
#line 601 "goal_form.m"
              }
#line 601 "goal_form.m"
              {
#line 601 "goal_form.m"
                hlds__goal_form__succeeded = mercury__map__search_3_p_0(hlds__goal_form__TypeCtorInfo_90_90, hlds__goal_form__TypeCtorInfo_91_91, hlds__goal_form__ExceptionInfo_39, ((MR_Box) (hlds__goal_form__V_87_87)), &hlds__goal_form__conv0_ProcExceptionInfo_40);
              }
#line 601 "goal_form.m"
              if (hlds__goal_form__succeeded)
#line 601 "goal_form.m"
                {
#line 601 "goal_form.m"
                  hlds__goal_form__ProcExceptionInfo_40 = ((MR_Word) hlds__goal_form__conv0_ProcExceptionInfo_40);
#line 601 "goal_form.m"
                  hlds__goal_form__succeeded = MR_TRUE;
#line 601 "goal_form.m"
                }
#line 599 "goal_form.m"
              if (hlds__goal_form__succeeded)
#line 599 "goal_form.m"
                {
#line 602 "goal_form.m"
                  hlds__goal_form__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__ProcExceptionInfo_40, (MR_Integer) 0)));
#line 602 "goal_form.m"
                  hlds__goal_form__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__ProcExceptionInfo_40, (MR_Integer) 1)));
#line 602 "goal_form.m"
                  hlds__goal_form__succeeded = (hlds__goal_form__V_88_88 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 599 "goal_form.m"
                }
#line 599 "goal_form.m"
            }
#line 605 "goal_form.m"
          if (hlds__goal_form__succeeded)
#line 604 "goal_form.m"
            hlds__goal_form__CanThrow_6 = (MR_Integer) 0;
#line 605 "goal_form.m"
          else
#line 606 "goal_form.m"
            hlds__goal_form__CanThrow_6 = (MR_Integer) 1;
#line 597 "goal_form.m"
        }
#line 582 "goal_form.m"
        break;
#line 582 "goal_form.m"
      case (MR_Integer) 3:
#line 582 "goal_form.m"
#line 582 "goal_form.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_5, (MR_Integer) 0)))) {
#line 582 "goal_form.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 582 "goal_form.m"
          case (MR_Integer) 0:
#line 627 "goal_form.m"
            hlds__goal_form__CanThrow_6 = (MR_Integer) 1;
#line 582 "goal_form.m"
            break;
#line 582 "goal_form.m"
          case (MR_Integer) 1:
#line 609 "goal_form.m"
            {
#line 609 "goal_form.m"
              MR_Word hlds__goal_form__Attributes_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_5, (MR_Integer) 1)));
#line 609 "goal_form.m"
              MR_Word hlds__goal_form__ExceptionStatus_49;
#line 609 "goal_form.m"
              MR_Word hlds__goal_form__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_5, (MR_Integer) 2)));
#line 609 "goal_form.m"
              MR_Integer hlds__goal_form__V_44_44 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_5, (MR_Integer) 3)));
#line 609 "goal_form.m"
              MR_Word hlds__goal_form__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_5, (MR_Integer) 4)));
#line 609 "goal_form.m"
              MR_Word hlds__goal_form__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_5, (MR_Integer) 5)));
#line 609 "goal_form.m"
              MR_Word hlds__goal_form__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_5, (MR_Integer) 6)));
#line 609 "goal_form.m"
              MR_Word hlds__goal_form__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_5, (MR_Integer) 7)));

#line 610 "goal_form.m"
              {
#line 610 "goal_form.m"
                hlds__goal_form__ExceptionStatus_49 = parse_tree__prog_data__get_may_throw_exception_1_f_0(hlds__goal_form__Attributes_42);
              }
#line 614 "goal_form.m"
#line 614 "goal_form.m"
              switch (hlds__goal_form__ExceptionStatus_49) {
#line 614 "goal_form.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 614 "goal_form.m"
                case (MR_Integer) 1:
#line 615 "goal_form.m"
                  {
#line 615 "goal_form.m"
                    MR_Word hlds__goal_form__V_86_86;

#line 616 "goal_form.m"
                    {
#line 616 "goal_form.m"
                      hlds__goal_form__V_86_86 = parse_tree__prog_data__get_may_call_mercury_1_f_0(hlds__goal_form__Attributes_42);
                    }
#line 616 "goal_form.m"
                    hlds__goal_form__succeeded = (hlds__goal_form__V_86_86 == (MR_Integer) 1);
#line 615 "goal_form.m"
                  }
#line 614 "goal_form.m"
                  break;
#line 614 "goal_form.m"
                case (MR_Integer) 0:
#line 613 "goal_form.m"
                  hlds__goal_form__succeeded = MR_TRUE;
#line 614 "goal_form.m"
                  break;
#line 614 "goal_form.m"
              }
#line 620 "goal_form.m"
              if (hlds__goal_form__succeeded)
#line 619 "goal_form.m"
                hlds__goal_form__CanThrow_6 = (MR_Integer) 0;
#line 620 "goal_form.m"
              else
#line 621 "goal_form.m"
                hlds__goal_form__CanThrow_6 = (MR_Integer) 1;
#line 609 "goal_form.m"
            }
#line 582 "goal_form.m"
            break;
#line 582 "goal_form.m"
          case (MR_Integer) 2:
#line 631 "goal_form.m"
            {
#line 631 "goal_form.m"
              MR_Word hlds__goal_form__Goals_56 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_5, (MR_Integer) 2)));
#line 629 "goal_form.m"
              MR_Word hlds__goal_form___ConjType_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_5, (MR_Integer) 1)));

#line 632 "goal_form.m"
              {
#line 632 "goal_form.m"
                return hlds__goal_form__CanThrow_6 = hlds__goal_form__goal_list_can_throw_2_f_0(hlds__goal_form__MaybeModuleInfo_4, hlds__goal_form__Goals_56);
              }
#line 631 "goal_form.m"
            }
#line 582 "goal_form.m"
            break;
#line 582 "goal_form.m"
          case (MR_Integer) 3:
#line 631 "goal_form.m"
            {
#line 631 "goal_form.m"
              MR_Word hlds__goal_form__Goals_92 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_5, (MR_Integer) 1)));

#line 632 "goal_form.m"
              {
#line 632 "goal_form.m"
                return hlds__goal_form__CanThrow_6 = hlds__goal_form__goal_list_can_throw_2_f_0(hlds__goal_form__MaybeModuleInfo_4, hlds__goal_form__Goals_92);
              }
#line 631 "goal_form.m"
            }
#line 582 "goal_form.m"
            break;
#line 582 "goal_form.m"
          case (MR_Integer) 4:
#line 634 "goal_form.m"
            {
#line 634 "goal_form.m"
              MR_Word hlds__goal_form__Cases_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_5, (MR_Integer) 3)));
#line 634 "goal_form.m"
              MR_Word hlds__goal_form___Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_5, (MR_Integer) 1)));
#line 634 "goal_form.m"
              MR_Word hlds__goal_form___CanFail_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_5, (MR_Integer) 2)));

#line 635 "goal_form.m"
              {
#line 635 "goal_form.m"
                return hlds__goal_form__CanThrow_6 = hlds__goal_form__case_list_can_throw_2_f_0(hlds__goal_form__MaybeModuleInfo_4, hlds__goal_form__Cases_59);
              }
#line 634 "goal_form.m"
            }
#line 582 "goal_form.m"
            break;
#line 582 "goal_form.m"
          case (MR_Integer) 5:
#line 649 "goal_form.m"
            {
#line 649 "goal_form.m"
              MR_Word hlds__goal_form__Reason_65 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_5, (MR_Integer) 1)));
#line 649 "goal_form.m"
              MR_Word hlds__goal_form__SubGoal_89 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_5, (MR_Integer) 2)));
#line 651 "goal_form.m"
              MR_Word hlds__goal_form__FGT_67;
#line 651 "goal_form.m"
              MR_Word hlds__goal_form__V_66_66;

#line 651 "goal_form.m"
              hlds__goal_form__succeeded = ((((MR_tag((MR_Word) hlds__goal_form__Reason_65)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__Reason_65, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 651 "goal_form.m"
              if (hlds__goal_form__succeeded)
#line 651 "goal_form.m"
                {
#line 651 "goal_form.m"
                  hlds__goal_form__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__Reason_65, (MR_Integer) 1)));
#line 651 "goal_form.m"
                  hlds__goal_form__FGT_67 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__Reason_65, (MR_Integer) 2)));
#line 653 "goal_form.m"
#line 653 "goal_form.m"
                  switch (hlds__goal_form__FGT_67) {
#line 653 "goal_form.m"
                    default:
#line 653 "goal_form.m"
                      hlds__goal_form__succeeded = MR_FALSE;
#line 653 "goal_form.m"
                      break;
#line 653 "goal_form.m"
                    case (MR_Integer) 1:
#line 652 "goal_form.m"
                      hlds__goal_form__succeeded = MR_TRUE;
#line 653 "goal_form.m"
                      break;
#line 653 "goal_form.m"
                    case (MR_Integer) 2:
#line 653 "goal_form.m"
                      hlds__goal_form__succeeded = MR_TRUE;
#line 653 "goal_form.m"
                      break;
#line 653 "goal_form.m"
                  }
#line 651 "goal_form.m"
                }
#line 659 "goal_form.m"
              if (hlds__goal_form__succeeded)
#line 658 "goal_form.m"
                hlds__goal_form__CanThrow_6 = (MR_Integer) 0;
#line 659 "goal_form.m"
              else
#line 660 "goal_form.m"
                {
#line 660 "goal_form.m"
                  return hlds__goal_form__CanThrow_6 = hlds__goal_form__goal_can_throw_func_2_f_0(hlds__goal_form__MaybeModuleInfo_4, hlds__goal_form__SubGoal_89);
                }
#line 649 "goal_form.m"
            }
#line 582 "goal_form.m"
            break;
#line 582 "goal_form.m"
          case (MR_Integer) 6:
#line 637 "goal_form.m"
            {
#line 637 "goal_form.m"
              MR_Word hlds__goal_form__Cond_61 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_5, (MR_Integer) 2)));
#line 637 "goal_form.m"
              MR_Word hlds__goal_form__Then_62 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_5, (MR_Integer) 3)));
#line 637 "goal_form.m"
              MR_Word hlds__goal_form__Else_63 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_5, (MR_Integer) 4)));
#line 637 "goal_form.m"
              MR_Word hlds__goal_form__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_5, (MR_Integer) 1)));
#line 638 "goal_form.m"
              MR_Word hlds__goal_form__GoalExpr_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Cond_61, (MR_Integer) 0)));
#line 638 "goal_form.m"
              MR_Word hlds__goal_form__GoalInfo_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Cond_61, (MR_Integer) 1)));
#line 638 "goal_form.m"
              MR_Word hlds__goal_form__Determinism_97;

#line 571 "goal_form.m"
              {
#line 571 "goal_form.m"
                hlds__goal_form__Determinism_97 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(hlds__goal_form__GoalInfo_96);
              }
#line 572 "goal_form.m"
              hlds__goal_form__succeeded = (hlds__goal_form__Determinism_97 == (MR_Integer) 6);
#line 574 "goal_form.m"
              if (hlds__goal_form__succeeded)
#line 573 "goal_form.m"
                hlds__goal_form__succeeded = MR_TRUE;
#line 574 "goal_form.m"
              else
#line 575 "goal_form.m"
                {
#line 575 "goal_form.m"
                  MR_Word hlds__goal_form__V_99_99;

#line 575 "goal_form.m"
                  {
#line 575 "goal_form.m"
                    hlds__goal_form__V_99_99 = hlds__goal_form__goal_expr_can_throw_2_f_0(hlds__goal_form__MaybeModuleInfo_4, hlds__goal_form__GoalExpr_95);
                  }
#line 638 "goal_form.m"
                  hlds__goal_form__succeeded = (hlds__goal_form__V_99_99 == (MR_Integer) 1);
#line 575 "goal_form.m"
                }
#line 640 "goal_form.m"
              if (hlds__goal_form__succeeded)
#line 639 "goal_form.m"
                hlds__goal_form__CanThrow_6 = (MR_Integer) 1;
#line 640 "goal_form.m"
              else
#line 642 "goal_form.m"
                {
#line 640 "goal_form.m"
                  MR_Word hlds__goal_form__V_85_85;

#line 640 "goal_form.m"
                  {
#line 640 "goal_form.m"
                    hlds__goal_form__V_85_85 = hlds__goal_form__goal_can_throw_func_2_f_0(hlds__goal_form__MaybeModuleInfo_4, hlds__goal_form__Then_62);
                  }
#line 640 "goal_form.m"
                  hlds__goal_form__succeeded = (hlds__goal_form__V_85_85 == (MR_Integer) 1);
#line 642 "goal_form.m"
                  if (hlds__goal_form__succeeded)
#line 641 "goal_form.m"
                    hlds__goal_form__CanThrow_6 = (MR_Integer) 1;
#line 642 "goal_form.m"
                  else
#line 643 "goal_form.m"
                    {
#line 643 "goal_form.m"
                      return hlds__goal_form__CanThrow_6 = hlds__goal_form__goal_can_throw_func_2_f_0(hlds__goal_form__MaybeModuleInfo_4, hlds__goal_form__Else_63);
                    }
#line 642 "goal_form.m"
                }
#line 637 "goal_form.m"
            }
#line 582 "goal_form.m"
            break;
#line 582 "goal_form.m"
          case (MR_Integer) 7:
#line 663 "goal_form.m"
            {
#line 663 "goal_form.m"
              MR_Word hlds__goal_form__ShortHand_68 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_5, (MR_Integer) 1)));

#line 667 "goal_form.m"
#line 667 "goal_form.m"
              switch (MR_tag((MR_Word) hlds__goal_form__ShortHand_68)) {
#line 667 "goal_form.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 667 "goal_form.m"
                case (MR_Integer) 0:
#line 671 "goal_form.m"
                  {
#line 672 "goal_form.m"
                    {
#line 672 "goal_form.m"
                      mercury__require__unexpected_3_p_0((MR_String) "hlds.goal_form", (MR_String) "function \140hlds.goal_form.goal_expr_can_throw\'/2", (MR_String) "bi_implication");
                    }
#line 671 "goal_form.m"
                  }
#line 667 "goal_form.m"
                  break;
#line 667 "goal_form.m"
                case (MR_Integer) 1:
#line 666 "goal_form.m"
                  hlds__goal_form__CanThrow_6 = (MR_Integer) 1;
#line 667 "goal_form.m"
                  break;
#line 667 "goal_form.m"
                case (MR_Integer) 2:
#line 669 "goal_form.m"
                  hlds__goal_form__CanThrow_6 = (MR_Integer) 1;
#line 667 "goal_form.m"
                  break;
#line 667 "goal_form.m"
              }
#line 663 "goal_form.m"
            }
#line 582 "goal_form.m"
            break;
#line 582 "goal_form.m"
        }
#line 582 "goal_form.m"
        break;
#line 582 "goal_form.m"
    }
#line 582 "goal_form.m"
    return hlds__goal_form__CanThrow_6;
#line 582 "goal_form.m"
  }
#line 578 "goal_form.m"
}

#line 567 "goal_form.m"
static MR_Word MR_CALL 
hlds__goal_form__goal_can_throw_func_2_f_0(
#line 567 "goal_form.m"
  MR_Word hlds__goal_form__MaybeModuleInfo_4,
#line 567 "goal_form.m"
  MR_Word hlds__goal_form__HeadVar__2_2)
#line 567 "goal_form.m"
{
#line 570 "goal_form.m"
  {
#line 570 "goal_form.m"
    MR_bool hlds__goal_form__succeeded;
#line 570 "goal_form.m"
    MR_Word hlds__goal_form__CanThrow_7;
#line 570 "goal_form.m"
    MR_Word hlds__goal_form__GoalExpr_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__HeadVar__2_2, (MR_Integer) 0)));
#line 570 "goal_form.m"
    MR_Word hlds__goal_form__GoalInfo_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__HeadVar__2_2, (MR_Integer) 1)));
#line 570 "goal_form.m"
    MR_Word hlds__goal_form__Determinism_8;

#line 571 "goal_form.m"
    {
#line 571 "goal_form.m"
      hlds__goal_form__Determinism_8 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(hlds__goal_form__GoalInfo_6);
    }
#line 572 "goal_form.m"
    hlds__goal_form__succeeded = (hlds__goal_form__Determinism_8 == (MR_Integer) 6);
#line 574 "goal_form.m"
    if (hlds__goal_form__succeeded)
#line 573 "goal_form.m"
      hlds__goal_form__CanThrow_7 = (MR_Integer) 1;
#line 574 "goal_form.m"
    else
#line 575 "goal_form.m"
      {
#line 575 "goal_form.m"
        return hlds__goal_form__CanThrow_7 = hlds__goal_form__goal_expr_can_throw_2_f_0(hlds__goal_form__MaybeModuleInfo_4, hlds__goal_form__GoalExpr_5);
      }
#line 570 "goal_form.m"
    return hlds__goal_form__CanThrow_7;
#line 570 "goal_form.m"
  }
#line 567 "goal_form.m"
}

#line 555 "goal_form.m"
static MR_Word MR_CALL 
hlds__goal_form__case_list_can_loop_2_f_0(
#line 555 "goal_form.m"
  MR_Word hlds__goal_form__MaybeModuleInfo_1,
#line 555 "goal_form.m"
  MR_Word hlds__goal_form__HeadVar__2_2)
#line 555 "goal_form.m"
{
#line 557 "goal_form.m"
  while (MR_TRUE)
#line 557 "goal_form.m"
    {
#line 557 "goal_form.m"
      /* tailcall optimized into a loop */
#line 557 "goal_form.m"
      {
#line 557 "goal_form.m"
        MR_bool hlds__goal_form__succeeded;
#line 557 "goal_form.m"
        MR_Word hlds__goal_form__HeadVar__3_3;

#line 557 "goal_form.m"
        if ((hlds__goal_form__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 557 "goal_form.m"
          hlds__goal_form__HeadVar__3_3 = (MR_Integer) 0;
#line 557 "goal_form.m"
        else
#line 558 "goal_form.m"
          {
#line 558 "goal_form.m"
            MR_Word hlds__goal_form__Goal_8;
#line 558 "goal_form.m"
            MR_Word hlds__goal_form__Cases_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__HeadVar__2_2, (MR_Integer) 1)));
#line 558 "goal_form.m"
            MR_Word hlds__goal_form__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__HeadVar__2_2, (MR_Integer) 0)));
#line 558 "goal_form.m"
            MR_Word hlds__goal_form__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__V_10_10, (MR_Integer) 0)));
#line 558 "goal_form.m"
            MR_Word hlds__goal_form__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__V_10_10, (MR_Integer) 1)));
#line 559 "goal_form.m"
            MR_Word hlds__goal_form__V_11_11;

#line 558 "goal_form.m"
            hlds__goal_form__Goal_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__V_10_10, (MR_Integer) 2)));
#line 559 "goal_form.m"
            {
#line 559 "goal_form.m"
              hlds__goal_form__V_11_11 = hlds__goal_form__goal_can_loop_func_2_f_0(hlds__goal_form__MaybeModuleInfo_1, hlds__goal_form__Goal_8);
            }
#line 559 "goal_form.m"
            hlds__goal_form__succeeded = (hlds__goal_form__V_11_11 == (MR_Integer) 1);
#line 558 "goal_form.m"
            if (hlds__goal_form__succeeded)
#line 560 "goal_form.m"
              hlds__goal_form__HeadVar__3_3 = (MR_Integer) 1;
#line 558 "goal_form.m"
            else
#line 562 "goal_form.m"
              {
#line 562 "goal_form.m"
                /* direct tailcall eliminated */
#line 562 "goal_form.m"
                {
#line 562 "goal_form.m"
                  MR_Word hlds__goal_form__HeadVar__2__tmp_copy_2 = hlds__goal_form__Cases_9;

#line 562 "goal_form.m"
                  hlds__goal_form__HeadVar__2_2 = hlds__goal_form__HeadVar__2__tmp_copy_2;
#line 562 "goal_form.m"
                }
#line 562 "goal_form.m"
                continue;
#line 562 "goal_form.m"
              }
#line 558 "goal_form.m"
          }
#line 557 "goal_form.m"
        return hlds__goal_form__HeadVar__3_3;
#line 557 "goal_form.m"
      }
#line 557 "goal_form.m"
      break;
#line 557 "goal_form.m"
    }
#line 555 "goal_form.m"
}

#line 545 "goal_form.m"
static MR_Word MR_CALL 
hlds__goal_form__goal_list_can_loop_2_f_0(
#line 545 "goal_form.m"
  MR_Word hlds__goal_form__MaybeModuleInfo_1,
#line 545 "goal_form.m"
  MR_Word hlds__goal_form__HeadVar__2_2)
#line 545 "goal_form.m"
{
#line 547 "goal_form.m"
  while (MR_TRUE)
#line 547 "goal_form.m"
    {
#line 547 "goal_form.m"
      /* tailcall optimized into a loop */
#line 547 "goal_form.m"
      {
#line 547 "goal_form.m"
        MR_bool hlds__goal_form__succeeded;
#line 547 "goal_form.m"
        MR_Word hlds__goal_form__HeadVar__3_3;

#line 547 "goal_form.m"
        if ((hlds__goal_form__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 547 "goal_form.m"
          hlds__goal_form__HeadVar__3_3 = (MR_Integer) 0;
#line 547 "goal_form.m"
        else
#line 548 "goal_form.m"
          {
#line 548 "goal_form.m"
            MR_Word hlds__goal_form__Goal_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__HeadVar__2_2, (MR_Integer) 0)));
#line 548 "goal_form.m"
            MR_Word hlds__goal_form__Goals_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__HeadVar__2_2, (MR_Integer) 1)));
#line 549 "goal_form.m"
            MR_Word hlds__goal_form__V_8_8;

#line 549 "goal_form.m"
            {
#line 549 "goal_form.m"
              hlds__goal_form__V_8_8 = hlds__goal_form__goal_can_loop_func_2_f_0(hlds__goal_form__MaybeModuleInfo_1, hlds__goal_form__Goal_6);
            }
#line 549 "goal_form.m"
            hlds__goal_form__succeeded = (hlds__goal_form__V_8_8 == (MR_Integer) 1);
#line 548 "goal_form.m"
            if (hlds__goal_form__succeeded)
#line 550 "goal_form.m"
              hlds__goal_form__HeadVar__3_3 = (MR_Integer) 1;
#line 548 "goal_form.m"
            else
#line 552 "goal_form.m"
              {
#line 552 "goal_form.m"
                /* direct tailcall eliminated */
#line 552 "goal_form.m"
                {
#line 552 "goal_form.m"
                  MR_Word hlds__goal_form__HeadVar__2__tmp_copy_2 = hlds__goal_form__Goals_7;

#line 552 "goal_form.m"
                  hlds__goal_form__HeadVar__2_2 = hlds__goal_form__HeadVar__2__tmp_copy_2;
#line 552 "goal_form.m"
                }
#line 552 "goal_form.m"
                continue;
#line 552 "goal_form.m"
              }
#line 548 "goal_form.m"
          }
#line 547 "goal_form.m"
        return hlds__goal_form__HeadVar__3_3;
#line 547 "goal_form.m"
      }
#line 547 "goal_form.m"
      break;
#line 547 "goal_form.m"
    }
#line 545 "goal_form.m"
}

#line 431 "goal_form.m"
static MR_Word MR_CALL 
hlds__goal_form__goal_can_loop_func_2_f_0(
#line 431 "goal_form.m"
  MR_Word hlds__goal_form__MaybeModuleInfo_4,
#line 431 "goal_form.m"
  MR_Word hlds__goal_form__Goal_5)
#line 431 "goal_form.m"
{
#line 433 "goal_form.m"
  while (MR_TRUE)
#line 433 "goal_form.m"
    {
#line 433 "goal_form.m"
      /* tailcall optimized into a loop */
#line 433 "goal_form.m"
      {
#line 433 "goal_form.m"
        MR_bool hlds__goal_form__succeeded;
#line 433 "goal_form.m"
        MR_Word hlds__goal_form__CanLoop_6;
#line 433 "goal_form.m"
        MR_Word hlds__goal_form__GoalExpr_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Goal_5, (MR_Integer) 0)));
#line 434 "goal_form.m"
        MR_Word hlds__goal_form__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Goal_5, (MR_Integer) 1)));

#line 450 "goal_form.m"
#line 450 "goal_form.m"
        switch (MR_tag((MR_Word) hlds__goal_form__GoalExpr_7)) {
#line 450 "goal_form.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 450 "goal_form.m"
          case (MR_Integer) 0:
#line 513 "goal_form.m"
            {
#line 513 "goal_form.m"
              MR_Word hlds__goal_form__SubGoal_69 = (MR_Word) MR_body(((MR_Word) hlds__goal_form__GoalExpr_7), (MR_Integer) 0);

#line 514 "goal_form.m"
              /* direct tailcall eliminated */
#line 514 "goal_form.m"
              {
#line 514 "goal_form.m"
                MR_Word hlds__goal_form__Goal__tmp_copy_5 = hlds__goal_form__SubGoal_69;

#line 514 "goal_form.m"
                hlds__goal_form__Goal_5 = hlds__goal_form__Goal__tmp_copy_5;
#line 514 "goal_form.m"
              }
#line 514 "goal_form.m"
              continue;
#line 513 "goal_form.m"
            }
#line 450 "goal_form.m"
            break;
#line 450 "goal_form.m"
          case (MR_Integer) 1:
#line 436 "goal_form.m"
            {
#line 436 "goal_form.m"
              MR_Word hlds__goal_form__Uni_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__GoalExpr_7, (MR_Integer) 3)));
#line 436 "goal_form.m"
              MR_Word hlds__goal_form__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__GoalExpr_7, (MR_Integer) 0)));
#line 436 "goal_form.m"
              MR_Word hlds__goal_form__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__GoalExpr_7, (MR_Integer) 1)));
#line 436 "goal_form.m"
              MR_Word hlds__goal_form__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__GoalExpr_7, (MR_Integer) 2)));
#line 436 "goal_form.m"
              MR_Word hlds__goal_form__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__GoalExpr_7, (MR_Integer) 4)));

#line 444 "goal_form.m"
#line 444 "goal_form.m"
              switch (MR_tag((MR_Word) hlds__goal_form__Uni_12)) {
#line 444 "goal_form.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 444 "goal_form.m"
                case (MR_Integer) 0:
#line 444 "goal_form.m"
                case (MR_Integer) 1:
#line 444 "goal_form.m"
                case (MR_Integer) 2:
#line 442 "goal_form.m"
                  hlds__goal_form__CanLoop_6 = (MR_Integer) 0;
#line 444 "goal_form.m"
                  break;
#line 444 "goal_form.m"
                case (MR_Integer) 3:
#line 444 "goal_form.m"
#line 444 "goal_form.m"
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__Uni_12, (MR_Integer) 0)))) {
#line 444 "goal_form.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 444 "goal_form.m"
                    case (MR_Integer) 0:
#line 442 "goal_form.m"
                      hlds__goal_form__CanLoop_6 = (MR_Integer) 0;
#line 444 "goal_form.m"
                      break;
#line 444 "goal_form.m"
                    case (MR_Integer) 1:
#line 448 "goal_form.m"
                      hlds__goal_form__CanLoop_6 = (MR_Integer) 1;
#line 444 "goal_form.m"
                      break;
#line 444 "goal_form.m"
                  }
#line 444 "goal_form.m"
                  break;
#line 444 "goal_form.m"
              }
#line 436 "goal_form.m"
            }
#line 450 "goal_form.m"
            break;
#line 450 "goal_form.m"
          case (MR_Integer) 2:
#line 451 "goal_form.m"
            {
#line 451 "goal_form.m"
              MR_Word hlds__goal_form__PredId_34 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__GoalExpr_7, (MR_Integer) 0)));
#line 451 "goal_form.m"
              MR_Integer hlds__goal_form__ProcId_35 = ((MR_Integer) (MR_hl_field(MR_mktag(2), hlds__goal_form__GoalExpr_7, (MR_Integer) 1)));
#line 451 "goal_form.m"
              MR_Word hlds__goal_form__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__GoalExpr_7, (MR_Integer) 2)));
#line 451 "goal_form.m"
              MR_Word hlds__goal_form__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__GoalExpr_7, (MR_Integer) 3)));
#line 451 "goal_form.m"
              MR_Word hlds__goal_form__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__GoalExpr_7, (MR_Integer) 4)));
#line 451 "goal_form.m"
              MR_Word hlds__goal_form__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__GoalExpr_7, (MR_Integer) 5)));
#line 453 "goal_form.m"
              MR_Word hlds__goal_form__ModuleInfo_40;
#line 453 "goal_form.m"
              MR_Word hlds__goal_form__ProcInfo_42;
#line 454 "goal_form.m"
              MR_Word hlds__goal_form__V_41_41;

#line 453 "goal_form.m"
              hlds__goal_form__succeeded = ((MR_tag((MR_Word) hlds__goal_form__MaybeModuleInfo_4)) == (MR_mktag((MR_Integer) 1)));
#line 453 "goal_form.m"
              if (hlds__goal_form__succeeded)
#line 453 "goal_form.m"
                {
#line 453 "goal_form.m"
                  hlds__goal_form__ModuleInfo_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__MaybeModuleInfo_4, (MR_Integer) 0)));
#line 454 "goal_form.m"
                  {
#line 454 "goal_form.m"
                    hlds__hlds_module__module_info_pred_proc_info_5_p_0(hlds__goal_form__ModuleInfo_40, hlds__goal_form__PredId_34, hlds__goal_form__ProcId_35, &hlds__goal_form__V_41_41, &hlds__goal_form__ProcInfo_42);
                  }
#line 457 "goal_form.m"
                  {
#line 457 "goal_form.m"
                    MR_Word hlds__goal_form__MaybeTermInfo_43;
#line 457 "goal_form.m"
                    MR_Word hlds__goal_form__V_97_97;

#line 457 "goal_form.m"
                    {
#line 457 "goal_form.m"
                      hlds__hlds_pred__proc_info_get_maybe_termination_info_2_p_0(hlds__goal_form__ProcInfo_42, &hlds__goal_form__MaybeTermInfo_43);
                    }
#line 458 "goal_form.m"
                    hlds__goal_form__succeeded = ((MR_tag((MR_Word) hlds__goal_form__MaybeTermInfo_43)) == (MR_mktag((MR_Integer) 1)));
#line 458 "goal_form.m"
                    if (hlds__goal_form__succeeded)
#line 458 "goal_form.m"
                      {
#line 458 "goal_form.m"
                        hlds__goal_form__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__MaybeTermInfo_43, (MR_Integer) 0)));
#line 458 "goal_form.m"
                        hlds__goal_form__succeeded = ((MR_tag((MR_Word) hlds__goal_form__V_97_97)) == (MR_mktag((MR_Integer) 0)));
#line 458 "goal_form.m"
                      }
#line 457 "goal_form.m"
                  }
#line 459 "goal_form.m"
                  if (!(hlds__goal_form__succeeded))
#line 460 "goal_form.m"
                    {
#line 460 "goal_form.m"
                      MR_Word hlds__goal_form__Term2Info_45;
#line 460 "goal_form.m"
                      MR_Word hlds__goal_form__V_95_95;
#line 460 "goal_form.m"
                      MR_Word hlds__goal_form__V_96_96;
#line 461 "goal_form.m"
                      MR_Word hlds__goal_form__V_46_46;

#line 460 "goal_form.m"
                      {
#line 460 "goal_form.m"
                        hlds__hlds_pred__proc_info_get_termination2_info_2_p_0(hlds__goal_form__ProcInfo_42, &hlds__goal_form__Term2Info_45);
                      }
#line 461 "goal_form.m"
                      {
#line 461 "goal_form.m"
                        hlds__goal_form__V_95_95 = transform_hlds__term_constr_main__term_status_1_f_0(hlds__goal_form__Term2Info_45);
                      }
#line 461 "goal_form.m"
                      hlds__goal_form__succeeded = ((MR_tag((MR_Word) hlds__goal_form__V_95_95)) == (MR_mktag((MR_Integer) 1)));
#line 461 "goal_form.m"
                      if (hlds__goal_form__succeeded)
#line 461 "goal_form.m"
                        {
#line 461 "goal_form.m"
                          hlds__goal_form__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__V_95_95, (MR_Integer) 0)));
#line 461 "goal_form.m"
                          hlds__goal_form__succeeded = ((MR_tag((MR_Word) hlds__goal_form__V_96_96)) == (MR_mktag((MR_Integer) 0)));
#line 461 "goal_form.m"
                          if (hlds__goal_form__succeeded)
#line 461 "goal_form.m"
                            hlds__goal_form__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__V_96_96, (MR_Integer) 0)));
#line 461 "goal_form.m"
                        }
#line 460 "goal_form.m"
                    }
#line 453 "goal_form.m"
                }
#line 465 "goal_form.m"
              if (hlds__goal_form__succeeded)
#line 464 "goal_form.m"
                hlds__goal_form__CanLoop_6 = (MR_Integer) 0;
#line 465 "goal_form.m"
              else
#line 466 "goal_form.m"
                hlds__goal_form__CanLoop_6 = (MR_Integer) 1;
#line 451 "goal_form.m"
            }
#line 450 "goal_form.m"
            break;
#line 450 "goal_form.m"
          case (MR_Integer) 3:
#line 450 "goal_form.m"
#line 450 "goal_form.m"
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_7, (MR_Integer) 0)))) {
#line 450 "goal_form.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 450 "goal_form.m"
              case (MR_Integer) 0:
#line 472 "goal_form.m"
                hlds__goal_form__CanLoop_6 = (MR_Integer) 1;
#line 450 "goal_form.m"
                break;
#line 450 "goal_form.m"
              case (MR_Integer) 1:
#line 474 "goal_form.m"
                {
#line 474 "goal_form.m"
                  MR_Word hlds__goal_form__Attributes_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_7, (MR_Integer) 1)));
#line 474 "goal_form.m"
                  MR_Word hlds__goal_form__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_7, (MR_Integer) 2)));
#line 474 "goal_form.m"
                  MR_Integer hlds__goal_form__V_54_54 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_7, (MR_Integer) 3)));
#line 474 "goal_form.m"
                  MR_Word hlds__goal_form__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_7, (MR_Integer) 4)));
#line 474 "goal_form.m"
                  MR_Word hlds__goal_form__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_7, (MR_Integer) 5)));
#line 474 "goal_form.m"
                  MR_Word hlds__goal_form__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_7, (MR_Integer) 6)));
#line 474 "goal_form.m"
                  MR_Word hlds__goal_form__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_7, (MR_Integer) 7)));
#line 476 "goal_form.m"
                  MR_Word hlds__goal_form__Terminates_59;

#line 476 "goal_form.m"
                  {
#line 476 "goal_form.m"
                    hlds__goal_form__Terminates_59 = parse_tree__prog_data__get_terminates_1_f_0(hlds__goal_form__Attributes_52);
                  }
#line 479 "goal_form.m"
#line 479 "goal_form.m"
                  switch (hlds__goal_form__Terminates_59) {
#line 479 "goal_form.m"
                    default:
#line 479 "goal_form.m"
                      hlds__goal_form__succeeded = MR_FALSE;
#line 479 "goal_form.m"
                      break;
#line 479 "goal_form.m"
                    case (MR_Integer) 2:
#line 480 "goal_form.m"
                      {
#line 480 "goal_form.m"
                        MR_Word hlds__goal_form__V_94_94;

#line 481 "goal_form.m"
                        {
#line 481 "goal_form.m"
                          hlds__goal_form__V_94_94 = parse_tree__prog_data__get_may_call_mercury_1_f_0(hlds__goal_form__Attributes_52);
                        }
#line 481 "goal_form.m"
                        hlds__goal_form__succeeded = (hlds__goal_form__V_94_94 == (MR_Integer) 1);
#line 480 "goal_form.m"
                      }
#line 479 "goal_form.m"
                      break;
#line 479 "goal_form.m"
                    case (MR_Integer) 0:
#line 478 "goal_form.m"
                      hlds__goal_form__succeeded = MR_TRUE;
#line 479 "goal_form.m"
                      break;
#line 479 "goal_form.m"
                  }
#line 485 "goal_form.m"
                  if (hlds__goal_form__succeeded)
#line 484 "goal_form.m"
                    hlds__goal_form__CanLoop_6 = (MR_Integer) 0;
#line 485 "goal_form.m"
                  else
#line 486 "goal_form.m"
                    hlds__goal_form__CanLoop_6 = (MR_Integer) 1;
#line 474 "goal_form.m"
                }
#line 450 "goal_form.m"
                break;
#line 450 "goal_form.m"
              case (MR_Integer) 2:
#line 450 "goal_form.m"
                {
#line 450 "goal_form.m"
                  MR_Word hlds__goal_form__V_103_103 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_7, (MR_Integer) 2)));
#line 450 "goal_form.m"
                  MR_Word hlds__goal_form__V_104_104 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_7, (MR_Integer) 1)));

#line 450 "goal_form.m"
#line 450 "goal_form.m"
                  switch (hlds__goal_form__V_104_104) {
#line 450 "goal_form.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 450 "goal_form.m"
                    case (MR_Integer) 1:
#line 496 "goal_form.m"
                      hlds__goal_form__CanLoop_6 = (MR_Integer) 1;
#line 450 "goal_form.m"
                      break;
#line 450 "goal_form.m"
                    case (MR_Integer) 0:
#line 490 "goal_form.m"
                      {
#line 490 "goal_form.m"
                        return hlds__goal_form__CanLoop_6 = hlds__goal_form__goal_list_can_loop_2_f_0(hlds__goal_form__MaybeModuleInfo_4, hlds__goal_form__V_103_103);
                      }
#line 450 "goal_form.m"
                      break;
#line 450 "goal_form.m"
                  }
#line 450 "goal_form.m"
                }
#line 450 "goal_form.m"
                break;
#line 450 "goal_form.m"
              case (MR_Integer) 3:
#line 498 "goal_form.m"
                {
#line 498 "goal_form.m"
                  MR_Word hlds__goal_form__Goals_98 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_7, (MR_Integer) 1)));

#line 499 "goal_form.m"
                  {
#line 499 "goal_form.m"
                    return hlds__goal_form__CanLoop_6 = hlds__goal_form__goal_list_can_loop_2_f_0(hlds__goal_form__MaybeModuleInfo_4, hlds__goal_form__Goals_98);
                  }
#line 498 "goal_form.m"
                }
#line 450 "goal_form.m"
                break;
#line 450 "goal_form.m"
              case (MR_Integer) 4:
#line 501 "goal_form.m"
                {
#line 501 "goal_form.m"
                  MR_Word hlds__goal_form__Cases_64 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_7, (MR_Integer) 3)));
#line 501 "goal_form.m"
                  MR_Word hlds__goal_form___Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_7, (MR_Integer) 1)));
#line 501 "goal_form.m"
                  MR_Word hlds__goal_form___CanFail_63 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_7, (MR_Integer) 2)));

#line 502 "goal_form.m"
                  {
#line 502 "goal_form.m"
                    return hlds__goal_form__CanLoop_6 = hlds__goal_form__case_list_can_loop_2_f_0(hlds__goal_form__MaybeModuleInfo_4, hlds__goal_form__Cases_64);
                  }
#line 501 "goal_form.m"
                }
#line 450 "goal_form.m"
                break;
#line 450 "goal_form.m"
              case (MR_Integer) 5:
#line 516 "goal_form.m"
                {
#line 516 "goal_form.m"
                  MR_Word hlds__goal_form__Reason_70 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_7, (MR_Integer) 1)));
#line 516 "goal_form.m"
                  MR_Word hlds__goal_form__SubGoal_99 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_7, (MR_Integer) 2)));
#line 518 "goal_form.m"
                  MR_Word hlds__goal_form__FGT_72;
#line 518 "goal_form.m"
                  MR_Word hlds__goal_form__V_71_71;

#line 518 "goal_form.m"
                  hlds__goal_form__succeeded = ((((MR_tag((MR_Word) hlds__goal_form__Reason_70)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__Reason_70, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 518 "goal_form.m"
                  if (hlds__goal_form__succeeded)
#line 518 "goal_form.m"
                    {
#line 518 "goal_form.m"
                      hlds__goal_form__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__Reason_70, (MR_Integer) 1)));
#line 518 "goal_form.m"
                      hlds__goal_form__FGT_72 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__Reason_70, (MR_Integer) 2)));
#line 520 "goal_form.m"
#line 520 "goal_form.m"
                      switch (hlds__goal_form__FGT_72) {
#line 520 "goal_form.m"
                        default:
#line 520 "goal_form.m"
                          hlds__goal_form__succeeded = MR_FALSE;
#line 520 "goal_form.m"
                          break;
#line 520 "goal_form.m"
                        case (MR_Integer) 1:
#line 519 "goal_form.m"
                          hlds__goal_form__succeeded = MR_TRUE;
#line 520 "goal_form.m"
                          break;
#line 520 "goal_form.m"
                        case (MR_Integer) 2:
#line 520 "goal_form.m"
                          hlds__goal_form__succeeded = MR_TRUE;
#line 520 "goal_form.m"
                          break;
#line 520 "goal_form.m"
                      }
#line 518 "goal_form.m"
                    }
#line 526 "goal_form.m"
                  if (hlds__goal_form__succeeded)
#line 525 "goal_form.m"
                    hlds__goal_form__CanLoop_6 = (MR_Integer) 0;
#line 526 "goal_form.m"
                  else
#line 527 "goal_form.m"
                    {
#line 527 "goal_form.m"
                      /* direct tailcall eliminated */
#line 527 "goal_form.m"
                      {
#line 527 "goal_form.m"
                        MR_Word hlds__goal_form__Goal__tmp_copy_5 = hlds__goal_form__SubGoal_99;

#line 527 "goal_form.m"
                        hlds__goal_form__Goal_5 = hlds__goal_form__Goal__tmp_copy_5;
#line 527 "goal_form.m"
                      }
#line 527 "goal_form.m"
                      continue;
#line 527 "goal_form.m"
                    }
#line 516 "goal_form.m"
                }
#line 450 "goal_form.m"
                break;
#line 450 "goal_form.m"
              case (MR_Integer) 6:
#line 504 "goal_form.m"
                {
#line 504 "goal_form.m"
                  MR_Word hlds__goal_form__Cond_66 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_7, (MR_Integer) 2)));
#line 504 "goal_form.m"
                  MR_Word hlds__goal_form__Then_67 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_7, (MR_Integer) 3)));
#line 504 "goal_form.m"
                  MR_Word hlds__goal_form__Else_68 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_7, (MR_Integer) 4)));
#line 504 "goal_form.m"
                  MR_Word hlds__goal_form___Vars_65 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_7, (MR_Integer) 1)));
#line 505 "goal_form.m"
                  MR_Word hlds__goal_form__V_90_90;

#line 505 "goal_form.m"
                  {
#line 505 "goal_form.m"
                    hlds__goal_form__V_90_90 = hlds__goal_form__goal_can_loop_func_2_f_0(hlds__goal_form__MaybeModuleInfo_4, hlds__goal_form__Cond_66);
                  }
#line 505 "goal_form.m"
                  hlds__goal_form__succeeded = (hlds__goal_form__V_90_90 == (MR_Integer) 1);
#line 507 "goal_form.m"
                  if (hlds__goal_form__succeeded)
#line 506 "goal_form.m"
                    hlds__goal_form__CanLoop_6 = (MR_Integer) 1;
#line 507 "goal_form.m"
                  else
#line 509 "goal_form.m"
                    {
#line 507 "goal_form.m"
                      MR_Word hlds__goal_form__V_91_91;

#line 507 "goal_form.m"
                      {
#line 507 "goal_form.m"
                        hlds__goal_form__V_91_91 = hlds__goal_form__goal_can_loop_func_2_f_0(hlds__goal_form__MaybeModuleInfo_4, hlds__goal_form__Then_67);
                      }
#line 507 "goal_form.m"
                      hlds__goal_form__succeeded = (hlds__goal_form__V_91_91 == (MR_Integer) 1);
#line 509 "goal_form.m"
                      if (hlds__goal_form__succeeded)
#line 508 "goal_form.m"
                        hlds__goal_form__CanLoop_6 = (MR_Integer) 1;
#line 509 "goal_form.m"
                      else
#line 510 "goal_form.m"
                        {
#line 510 "goal_form.m"
                          /* direct tailcall eliminated */
#line 510 "goal_form.m"
                          {
#line 510 "goal_form.m"
                            MR_Word hlds__goal_form__Goal__tmp_copy_5 = hlds__goal_form__Else_68;

#line 510 "goal_form.m"
                            hlds__goal_form__Goal_5 = hlds__goal_form__Goal__tmp_copy_5;
#line 510 "goal_form.m"
                          }
#line 510 "goal_form.m"
                          continue;
#line 510 "goal_form.m"
                        }
#line 509 "goal_form.m"
                    }
#line 504 "goal_form.m"
                }
#line 450 "goal_form.m"
                break;
#line 450 "goal_form.m"
              case (MR_Integer) 7:
#line 530 "goal_form.m"
                {
#line 530 "goal_form.m"
                  MR_Word hlds__goal_form__ShortHand_73 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_7, (MR_Integer) 1)));

#line 536 "goal_form.m"
#line 536 "goal_form.m"
                  switch (MR_tag((MR_Word) hlds__goal_form__ShortHand_73)) {
#line 536 "goal_form.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 536 "goal_form.m"
                    case (MR_Integer) 0:
#line 540 "goal_form.m"
                      {
#line 541 "goal_form.m"
                        {
#line 541 "goal_form.m"
                          mercury__require__unexpected_3_p_0((MR_String) "hlds.goal_form", (MR_String) "function \140hlds.goal_form.goal_can_loop_func\'/2", (MR_String) "bi_implication");
                        }
#line 540 "goal_form.m"
                      }
#line 536 "goal_form.m"
                      break;
#line 536 "goal_form.m"
                    case (MR_Integer) 1:
#line 532 "goal_form.m"
                      {
#line 532 "goal_form.m"
                        MR_Word hlds__goal_form__MainGoal_78 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__ShortHand_73, (MR_Integer) 4)));
#line 532 "goal_form.m"
                        MR_Word hlds__goal_form__OrElseGoals_79 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__ShortHand_73, (MR_Integer) 5)));
#line 532 "goal_form.m"
                        MR_Word hlds__goal_form__MainGoalCanLoop_81;
#line 532 "goal_form.m"
                        MR_Word hlds__goal_form__OrElseCanLoop_82;
#line 532 "goal_form.m"
                        MR_Word hlds__goal_form__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__ShortHand_73, (MR_Integer) 0)));
#line 532 "goal_form.m"
                        MR_Word hlds__goal_form__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__ShortHand_73, (MR_Integer) 1)));
#line 532 "goal_form.m"
                        MR_Word hlds__goal_form__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__ShortHand_73, (MR_Integer) 2)));
#line 532 "goal_form.m"
                        MR_Word hlds__goal_form__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__ShortHand_73, (MR_Integer) 3)));
#line 532 "goal_form.m"
                        MR_Word hlds__goal_form__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__ShortHand_73, (MR_Integer) 6)));

#line 533 "goal_form.m"
                        {
#line 533 "goal_form.m"
                          hlds__goal_form__MainGoalCanLoop_81 = hlds__goal_form__goal_can_loop_func_2_f_0(hlds__goal_form__MaybeModuleInfo_4, hlds__goal_form__MainGoal_78);
                        }
#line 534 "goal_form.m"
                        {
#line 534 "goal_form.m"
                          hlds__goal_form__OrElseCanLoop_82 = hlds__goal_form__goal_list_can_loop_2_f_0(hlds__goal_form__MaybeModuleInfo_4, hlds__goal_form__OrElseGoals_79);
                        }
#line 535 "goal_form.m"
                        {
#line 535 "goal_form.m"
                          return hlds__goal_form__CanLoop_6 = mercury__bool__or_2_f_0(hlds__goal_form__MainGoalCanLoop_81, hlds__goal_form__OrElseCanLoop_82);
                        }
#line 532 "goal_form.m"
                      }
#line 536 "goal_form.m"
                      break;
#line 536 "goal_form.m"
                    case (MR_Integer) 2:
#line 537 "goal_form.m"
                      {
#line 537 "goal_form.m"
                        MR_Word hlds__goal_form__SubGoal_100 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__ShortHand_73, (MR_Integer) 2)));
#line 537 "goal_form.m"
                        MR_Word hlds__goal_form__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__ShortHand_73, (MR_Integer) 0)));
#line 537 "goal_form.m"
                        MR_Word hlds__goal_form__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__ShortHand_73, (MR_Integer) 1)));

#line 538 "goal_form.m"
                        /* direct tailcall eliminated */
#line 538 "goal_form.m"
                        {
#line 538 "goal_form.m"
                          MR_Word hlds__goal_form__Goal__tmp_copy_5 = hlds__goal_form__SubGoal_100;

#line 538 "goal_form.m"
                          hlds__goal_form__Goal_5 = hlds__goal_form__Goal__tmp_copy_5;
#line 538 "goal_form.m"
                        }
#line 538 "goal_form.m"
                        continue;
#line 537 "goal_form.m"
                      }
#line 536 "goal_form.m"
                      break;
#line 536 "goal_form.m"
                  }
#line 530 "goal_form.m"
                }
#line 450 "goal_form.m"
                break;
#line 450 "goal_form.m"
            }
#line 450 "goal_form.m"
            break;
#line 450 "goal_form.m"
        }
#line 433 "goal_form.m"
        return hlds__goal_form__CanLoop_6;
#line 433 "goal_form.m"
      }
#line 433 "goal_form.m"
      break;
#line 433 "goal_form.m"
    }
#line 431 "goal_form.m"
}

#line 372 "goal_form.m"
static void MR_CALL 
hlds__goal_form__cases_can_throw_4_p_0(
#line 372 "goal_form.m"
  MR_Word hlds__goal_form__HeadVar__1_1,
#line 372 "goal_form.m"
  MR_Word * hlds__goal_form__HeadVar__2_2,
#line 372 "goal_form.m"
  MR_Word hlds__goal_form__STATE_VARIABLE_ModuleInfo_0_3,
#line 372 "goal_form.m"
  MR_Word * hlds__goal_form__STATE_VARIABLE_ModuleInfo_4)
#line 372 "goal_form.m"
{
#line 375 "goal_form.m"
  while (MR_TRUE)
#line 375 "goal_form.m"
    {
#line 375 "goal_form.m"
      /* tailcall optimized into a loop */
#line 375 "goal_form.m"
      {
#line 375 "goal_form.m"
        MR_bool hlds__goal_form__succeeded;

#line 375 "goal_form.m"
        if ((hlds__goal_form__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 375 "goal_form.m"
          {
#line 375 "goal_form.m"
            *hlds__goal_form__HeadVar__2_2 = (MR_Integer) 1;
#line 375 "goal_form.m"
            *hlds__goal_form__STATE_VARIABLE_ModuleInfo_4 = hlds__goal_form__STATE_VARIABLE_ModuleInfo_0_3;
#line 375 "goal_form.m"
          }
#line 375 "goal_form.m"
        else
#line 376 "goal_form.m"
          {
#line 376 "goal_form.m"
            MR_Word hlds__goal_form__Case_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__HeadVar__1_1, (MR_Integer) 0)));
#line 376 "goal_form.m"
            MR_Word hlds__goal_form__Cases_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__HeadVar__1_1, (MR_Integer) 1)));
#line 376 "goal_form.m"
            MR_Word hlds__goal_form__Goal_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Case_8, (MR_Integer) 2)));
#line 376 "goal_form.m"
            MR_Word hlds__goal_form__Result0_15;
#line 376 "goal_form.m"
            MR_Word hlds__goal_form__STATE_VARIABLE_ModuleInfo_18_18;
#line 377 "goal_form.m"
            MR_Word hlds__goal_form__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Case_8, (MR_Integer) 0)));
#line 377 "goal_form.m"
            MR_Word hlds__goal_form__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Case_8, (MR_Integer) 1)));

#line 378 "goal_form.m"
            {
#line 378 "goal_form.m"
              hlds__goal_form__goal_can_throw_4_p_0(hlds__goal_form__Goal_14, &hlds__goal_form__Result0_15, hlds__goal_form__STATE_VARIABLE_ModuleInfo_0_3, &hlds__goal_form__STATE_VARIABLE_ModuleInfo_18_18);
            }
#line 382 "goal_form.m"
#line 382 "goal_form.m"
            switch (hlds__goal_form__Result0_15) {
#line 382 "goal_form.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 382 "goal_form.m"
              case (MR_Integer) 0:
#line 383 "goal_form.m"
                {
#line 384 "goal_form.m"
                  *hlds__goal_form__HeadVar__2_2 = (MR_Integer) 0;
#line 383 "goal_form.m"
                  *hlds__goal_form__STATE_VARIABLE_ModuleInfo_4 = hlds__goal_form__STATE_VARIABLE_ModuleInfo_18_18;
#line 383 "goal_form.m"
                }
#line 382 "goal_form.m"
                break;
#line 382 "goal_form.m"
              case (MR_Integer) 1:
#line 381 "goal_form.m"
                {
#line 381 "goal_form.m"
                  /* direct tailcall eliminated */
#line 381 "goal_form.m"
                  {
#line 381 "goal_form.m"
                    MR_Word hlds__goal_form__HeadVar__1__tmp_copy_1 = hlds__goal_form__Cases_9;
#line 381 "goal_form.m"
                    MR_Word hlds__goal_form__STATE_VARIABLE_ModuleInfo_0__tmp_copy_3 = hlds__goal_form__STATE_VARIABLE_ModuleInfo_18_18;

#line 381 "goal_form.m"
                    hlds__goal_form__STATE_VARIABLE_ModuleInfo_0_3 = hlds__goal_form__STATE_VARIABLE_ModuleInfo_0__tmp_copy_3;
#line 381 "goal_form.m"
                    hlds__goal_form__HeadVar__1_1 = hlds__goal_form__HeadVar__1__tmp_copy_1;
#line 381 "goal_form.m"
                  }
#line 381 "goal_form.m"
                  continue;
#line 381 "goal_form.m"
                }
#line 382 "goal_form.m"
                break;
#line 382 "goal_form.m"
            }
#line 376 "goal_form.m"
          }
#line 375 "goal_form.m"
      }
#line 375 "goal_form.m"
      break;
#line 375 "goal_form.m"
    }
#line 372 "goal_form.m"
}

#line 358 "goal_form.m"
static void MR_CALL 
hlds__goal_form__goals_can_throw_4_p_0(
#line 358 "goal_form.m"
  MR_Word hlds__goal_form__HeadVar__1_1,
#line 358 "goal_form.m"
  MR_Word * hlds__goal_form__HeadVar__2_2,
#line 358 "goal_form.m"
  MR_Word hlds__goal_form__STATE_VARIABLE_ModuleInfo_0_3,
#line 358 "goal_form.m"
  MR_Word * hlds__goal_form__STATE_VARIABLE_ModuleInfo_4)
#line 358 "goal_form.m"
{
#line 361 "goal_form.m"
  while (MR_TRUE)
#line 361 "goal_form.m"
    {
#line 361 "goal_form.m"
      /* tailcall optimized into a loop */
#line 361 "goal_form.m"
      {
#line 361 "goal_form.m"
        MR_bool hlds__goal_form__succeeded;

#line 361 "goal_form.m"
        if ((hlds__goal_form__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 361 "goal_form.m"
          {
#line 361 "goal_form.m"
            *hlds__goal_form__HeadVar__2_2 = (MR_Integer) 1;
#line 361 "goal_form.m"
            *hlds__goal_form__STATE_VARIABLE_ModuleInfo_4 = hlds__goal_form__STATE_VARIABLE_ModuleInfo_0_3;
#line 361 "goal_form.m"
          }
#line 361 "goal_form.m"
        else
#line 362 "goal_form.m"
          {
#line 362 "goal_form.m"
            MR_Word hlds__goal_form__Goal_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__HeadVar__1_1, (MR_Integer) 0)));
#line 362 "goal_form.m"
            MR_Word hlds__goal_form__Goals_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__HeadVar__1_1, (MR_Integer) 1)));
#line 362 "goal_form.m"
            MR_Word hlds__goal_form__Result0_12;
#line 362 "goal_form.m"
            MR_Word hlds__goal_form__STATE_VARIABLE_ModuleInfo_15_15;

#line 363 "goal_form.m"
            {
#line 363 "goal_form.m"
              hlds__goal_form__goal_can_throw_4_p_0(hlds__goal_form__Goal_8, &hlds__goal_form__Result0_12, hlds__goal_form__STATE_VARIABLE_ModuleInfo_0_3, &hlds__goal_form__STATE_VARIABLE_ModuleInfo_15_15);
            }
#line 367 "goal_form.m"
#line 367 "goal_form.m"
            switch (hlds__goal_form__Result0_12) {
#line 367 "goal_form.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 367 "goal_form.m"
              case (MR_Integer) 0:
#line 368 "goal_form.m"
                {
#line 369 "goal_form.m"
                  *hlds__goal_form__HeadVar__2_2 = (MR_Integer) 0;
#line 368 "goal_form.m"
                  *hlds__goal_form__STATE_VARIABLE_ModuleInfo_4 = hlds__goal_form__STATE_VARIABLE_ModuleInfo_15_15;
#line 368 "goal_form.m"
                }
#line 367 "goal_form.m"
                break;
#line 367 "goal_form.m"
              case (MR_Integer) 1:
#line 366 "goal_form.m"
                {
#line 366 "goal_form.m"
                  /* direct tailcall eliminated */
#line 366 "goal_form.m"
                  {
#line 366 "goal_form.m"
                    MR_Word hlds__goal_form__HeadVar__1__tmp_copy_1 = hlds__goal_form__Goals_9;
#line 366 "goal_form.m"
                    MR_Word hlds__goal_form__STATE_VARIABLE_ModuleInfo_0__tmp_copy_3 = hlds__goal_form__STATE_VARIABLE_ModuleInfo_15_15;

#line 366 "goal_form.m"
                    hlds__goal_form__STATE_VARIABLE_ModuleInfo_0_3 = hlds__goal_form__STATE_VARIABLE_ModuleInfo_0__tmp_copy_3;
#line 366 "goal_form.m"
                    hlds__goal_form__HeadVar__1_1 = hlds__goal_form__HeadVar__1__tmp_copy_1;
#line 366 "goal_form.m"
                  }
#line 366 "goal_form.m"
                  continue;
#line 366 "goal_form.m"
                }
#line 367 "goal_form.m"
                break;
#line 367 "goal_form.m"
            }
#line 362 "goal_form.m"
          }
#line 361 "goal_form.m"
      }
#line 361 "goal_form.m"
      break;
#line 361 "goal_form.m"
    }
#line 358 "goal_form.m"
}

#line 228 "goal_form.m"
static MR_bool MR_CALL 
hlds__goal_form__only_constant_goals_3_p_0(
#line 228 "goal_form.m"
  MR_Word hlds__goal_form__HeadVar__1_1,
#line 228 "goal_form.m"
  MR_Word hlds__goal_form__STATE_VARIABLE_ToAssignVars_0_2,
#line 228 "goal_form.m"
  MR_Word * hlds__goal_form__STATE_VARIABLE_ToAssignVars_3)
#line 228 "goal_form.m"
{
#line 231 "goal_form.m"
  while (MR_TRUE)
#line 231 "goal_form.m"
    {
#line 231 "goal_form.m"
      /* tailcall optimized into a loop */
#line 231 "goal_form.m"
      {
#line 231 "goal_form.m"
        MR_bool hlds__goal_form__succeeded;

#line 231 "goal_form.m"
        if ((hlds__goal_form__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 231 "goal_form.m"
          {
#line 231 "goal_form.m"
            *hlds__goal_form__STATE_VARIABLE_ToAssignVars_3 = hlds__goal_form__STATE_VARIABLE_ToAssignVars_0_2;
#line 231 "goal_form.m"
            hlds__goal_form__succeeded = MR_TRUE;
#line 231 "goal_form.m"
          }
#line 231 "goal_form.m"
        else
#line 232 "goal_form.m"
          {
#line 232 "goal_form.m"
            MR_Word hlds__goal_form__TypeCtorInfo_31_31;
#line 232 "goal_form.m"
            MR_Word hlds__goal_form__Goal_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__HeadVar__1_1, (MR_Integer) 0)));
#line 232 "goal_form.m"
            MR_Word hlds__goal_form__Goals_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__HeadVar__1_1, (MR_Integer) 1)));
#line 232 "goal_form.m"
            MR_Word hlds__goal_form__GoalExpr_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Goal_7, (MR_Integer) 0)));
#line 232 "goal_form.m"
            MR_Word hlds__goal_form__Var_17;
#line 232 "goal_form.m"
            MR_Word hlds__goal_form__STATE_VARIABLE_ToAssignVars_29_29;
#line 233 "goal_form.m"
            MR_Word hlds__goal_form__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Goal_7, (MR_Integer) 1)));

#line 240 "goal_form.m"
            if (((MR_tag((MR_Word) hlds__goal_form__GoalExpr_10)) == (MR_mktag((MR_Integer) 1))))
#line 238 "goal_form.m"
              {
#line 238 "goal_form.m"
                MR_Word hlds__goal_form__Unification_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__GoalExpr_10, (MR_Integer) 3)));
#line 238 "goal_form.m"
                MR_Word hlds__goal_form__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__GoalExpr_10, (MR_Integer) 0)));
#line 238 "goal_form.m"
                MR_Word hlds__goal_form__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__GoalExpr_10, (MR_Integer) 1)));
#line 238 "goal_form.m"
                MR_Word hlds__goal_form__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__GoalExpr_10, (MR_Integer) 2)));
#line 238 "goal_form.m"
                MR_Word hlds__goal_form__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__GoalExpr_10, (MR_Integer) 4)));
#line 239 "goal_form.m"
                MR_Word hlds__goal_form__V_18_18;
#line 239 "goal_form.m"
                MR_Word hlds__goal_form__V_19_19;
#line 239 "goal_form.m"
                MR_Word hlds__goal_form__V_20_20;
#line 239 "goal_form.m"
                MR_Word hlds__goal_form__V_21_21;
#line 239 "goal_form.m"
                MR_Word hlds__goal_form__V_22_22;
#line 239 "goal_form.m"
                MR_Word hlds__goal_form__V_23_23;

#line 239 "goal_form.m"
                hlds__goal_form__succeeded = ((MR_tag((MR_Word) hlds__goal_form__Unification_15)) == (MR_mktag((MR_Integer) 0)));
#line 239 "goal_form.m"
                if (hlds__goal_form__succeeded)
#line 239 "goal_form.m"
                  {
#line 239 "goal_form.m"
                    hlds__goal_form__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Unification_15, (MR_Integer) 0)));
#line 239 "goal_form.m"
                    hlds__goal_form__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Unification_15, (MR_Integer) 1)));
#line 239 "goal_form.m"
                    hlds__goal_form__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Unification_15, (MR_Integer) 2)));
#line 239 "goal_form.m"
                    hlds__goal_form__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Unification_15, (MR_Integer) 3)));
#line 239 "goal_form.m"
                    hlds__goal_form__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Unification_15, (MR_Integer) 4)));
#line 239 "goal_form.m"
                    hlds__goal_form__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Unification_15, (MR_Integer) 5)));
#line 239 "goal_form.m"
                    hlds__goal_form__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Unification_15, (MR_Integer) 6)));
#line 239 "goal_form.m"
                  }
#line 238 "goal_form.m"
              }
#line 240 "goal_form.m"
            else
#line 240 "goal_form.m"
            if (((((MR_tag((MR_Word) hlds__goal_form__GoalExpr_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_10, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 241 "goal_form.m"
              {
#line 241 "goal_form.m"
                MR_Word hlds__goal_form__Reason_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_10, (MR_Integer) 1)));
#line 241 "goal_form.m"
                MR_Word hlds__goal_form__V_28_28;
#line 241 "goal_form.m"
                MR_Word hlds__goal_form__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_10, (MR_Integer) 2)));

#line 242 "goal_form.m"
                hlds__goal_form__succeeded = ((((MR_tag((MR_Word) hlds__goal_form__Reason_24)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__Reason_24, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 242 "goal_form.m"
                if (hlds__goal_form__succeeded)
#line 242 "goal_form.m"
                  {
#line 242 "goal_form.m"
                    hlds__goal_form__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__Reason_24, (MR_Integer) 1)));
#line 242 "goal_form.m"
                    hlds__goal_form__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__Reason_24, (MR_Integer) 2)));
#line 242 "goal_form.m"
                    hlds__goal_form__succeeded = (hlds__goal_form__V_28_28 == (MR_Integer) 1);
#line 242 "goal_form.m"
                  }
#line 241 "goal_form.m"
              }
#line 240 "goal_form.m"
            else
#line 240 "goal_form.m"
              hlds__goal_form__succeeded = MR_FALSE;
#line 232 "goal_form.m"
            if (hlds__goal_form__succeeded)
#line 232 "goal_form.m"
              {
#line 5885 "hlds.goal_form.c"
                hlds__goal_form__TypeCtorInfo_31_31 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 244 "goal_form.m"
                {
#line 244 "goal_form.m"
                  parse_tree__set_of_var__delete_3_p_0(hlds__goal_form__TypeCtorInfo_31_31, hlds__goal_form__Var_17, hlds__goal_form__STATE_VARIABLE_ToAssignVars_0_2, &hlds__goal_form__STATE_VARIABLE_ToAssignVars_29_29);
                }
#line 245 "goal_form.m"
                /* direct tailcall eliminated */
#line 245 "goal_form.m"
                {
#line 245 "goal_form.m"
                  MR_Word hlds__goal_form__HeadVar__1__tmp_copy_1 = hlds__goal_form__Goals_8;
#line 245 "goal_form.m"
                  MR_Word hlds__goal_form__STATE_VARIABLE_ToAssignVars_0__tmp_copy_2 = hlds__goal_form__STATE_VARIABLE_ToAssignVars_29_29;

#line 245 "goal_form.m"
                  hlds__goal_form__STATE_VARIABLE_ToAssignVars_0_2 = hlds__goal_form__STATE_VARIABLE_ToAssignVars_0__tmp_copy_2;
#line 245 "goal_form.m"
                  hlds__goal_form__HeadVar__1_1 = hlds__goal_form__HeadVar__1__tmp_copy_1;
#line 245 "goal_form.m"
                }
#line 245 "goal_form.m"
                continue;
#line 232 "goal_form.m"
              }
#line 232 "goal_form.m"
          }
#line 231 "goal_form.m"
        return hlds__goal_form__succeeded;
#line 231 "goal_form.m"
      }
#line 231 "goal_form.m"
      break;
#line 231 "goal_form.m"
    }
#line 228 "goal_form.m"
}

#line 194 "goal_form.m"
MR_Word MR_CALL 
hlds__goal_form__goal_expr_has_subgoals_1_f_0(
#line 194 "goal_form.m"
  MR_Word hlds__goal_form__GoalExpr_3)
#line 194 "goal_form.m"
{
#line 1184 "goal_form.m"
  {
#line 1184 "goal_form.m"
    MR_bool hlds__goal_form__succeeded;
#line 1184 "goal_form.m"
    MR_Word hlds__goal_form__HasSubGoals_4;

#line 1184 "goal_form.m"
#line 1184 "goal_form.m"
    switch (MR_tag((MR_Word) hlds__goal_form__GoalExpr_3)) {
#line 1184 "goal_form.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1184 "goal_form.m"
      case (MR_Integer) 0:
#line 1203 "goal_form.m"
        hlds__goal_form__HasSubGoals_4 = (MR_Integer) 0;
#line 1184 "goal_form.m"
        break;
#line 1184 "goal_form.m"
      case (MR_Integer) 1:
#line 1184 "goal_form.m"
      case (MR_Integer) 2:
#line 1185 "goal_form.m"
        hlds__goal_form__HasSubGoals_4 = (MR_Integer) 1;
#line 1184 "goal_form.m"
        break;
#line 1184 "goal_form.m"
      case (MR_Integer) 3:
#line 1184 "goal_form.m"
#line 1184 "goal_form.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_3, (MR_Integer) 0)))) {
#line 1184 "goal_form.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1184 "goal_form.m"
          case (MR_Integer) 0:
#line 1184 "goal_form.m"
          case (MR_Integer) 1:
#line 1185 "goal_form.m"
            hlds__goal_form__HasSubGoals_4 = (MR_Integer) 1;
#line 1184 "goal_form.m"
            break;
#line 1184 "goal_form.m"
          case (MR_Integer) 2:
#line 1189 "goal_form.m"
            {
#line 1189 "goal_form.m"
              MR_Word hlds__goal_form__SubGoals_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_3, (MR_Integer) 2)));
#line 1187 "goal_form.m"
              MR_Word hlds__goal_form__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_3, (MR_Integer) 1)));

#line 1193 "goal_form.m"
              if ((hlds__goal_form__SubGoals_29 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1192 "goal_form.m"
                hlds__goal_form__HasSubGoals_4 = (MR_Integer) 1;
#line 1193 "goal_form.m"
              else
#line 1195 "goal_form.m"
                hlds__goal_form__HasSubGoals_4 = (MR_Integer) 0;
#line 1189 "goal_form.m"
            }
#line 1184 "goal_form.m"
            break;
#line 1184 "goal_form.m"
          case (MR_Integer) 3:
#line 1189 "goal_form.m"
            {
#line 1189 "goal_form.m"
              MR_Word hlds__goal_form__SubGoals_61 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_3, (MR_Integer) 1)));

#line 1193 "goal_form.m"
              if ((hlds__goal_form__SubGoals_61 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1192 "goal_form.m"
                hlds__goal_form__HasSubGoals_4 = (MR_Integer) 1;
#line 1193 "goal_form.m"
              else
#line 1195 "goal_form.m"
                hlds__goal_form__HasSubGoals_4 = (MR_Integer) 0;
#line 1189 "goal_form.m"
            }
#line 1184 "goal_form.m"
            break;
#line 1184 "goal_form.m"
          case (MR_Integer) 4:
#line 1184 "goal_form.m"
          case (MR_Integer) 5:
#line 1184 "goal_form.m"
          case (MR_Integer) 6:
#line 1203 "goal_form.m"
            hlds__goal_form__HasSubGoals_4 = (MR_Integer) 0;
#line 1184 "goal_form.m"
            break;
#line 1184 "goal_form.m"
          case (MR_Integer) 7:
#line 1210 "goal_form.m"
            hlds__goal_form__HasSubGoals_4 = (MR_Integer) 0;
#line 1184 "goal_form.m"
            break;
#line 1184 "goal_form.m"
        }
#line 1184 "goal_form.m"
        break;
#line 1184 "goal_form.m"
    }
#line 1184 "goal_form.m"
    return hlds__goal_form__HasSubGoals_4;
#line 1184 "goal_form.m"
  }
#line 194 "goal_form.m"
}

#line 183 "goal_form.m"
MR_Word MR_CALL 
hlds__goal_form__goal_has_foreign_1_f_0(
#line 183 "goal_form.m"
  MR_Word hlds__goal_form__Goal_3)
#line 183 "goal_form.m"
{
#line 1093 "goal_form.m"
  while (MR_TRUE)
#line 1093 "goal_form.m"
    {
#line 1093 "goal_form.m"
      /* tailcall optimized into a loop */
#line 1093 "goal_form.m"
      {
#line 1093 "goal_form.m"
        MR_bool hlds__goal_form__succeeded;
#line 1093 "goal_form.m"
        MR_Word hlds__goal_form__HasForeign_4;
#line 1093 "goal_form.m"
        MR_Word hlds__goal_form__GoalExpr_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Goal_3, (MR_Integer) 0)));
#line 1094 "goal_form.m"
        MR_Word hlds__goal_form__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Goal_3, (MR_Integer) 1)));

#line 1101 "goal_form.m"
#line 1101 "goal_form.m"
        switch (MR_tag((MR_Word) hlds__goal_form__GoalExpr_5)) {
#line 1101 "goal_form.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1101 "goal_form.m"
          case (MR_Integer) 0:
#line 1111 "goal_form.m"
            {
#line 1111 "goal_form.m"
              MR_Word hlds__goal_form__SubGoal_28 = (MR_Word) MR_body(((MR_Word) hlds__goal_form__GoalExpr_5), (MR_Integer) 0);

#line 1112 "goal_form.m"
              /* direct tailcall eliminated */
#line 1112 "goal_form.m"
              {
#line 1112 "goal_form.m"
                MR_Word hlds__goal_form__Goal__tmp_copy_3 = hlds__goal_form__SubGoal_28;

#line 1112 "goal_form.m"
                hlds__goal_form__Goal_3 = hlds__goal_form__Goal__tmp_copy_3;
#line 1112 "goal_form.m"
              }
#line 1112 "goal_form.m"
              continue;
#line 1111 "goal_form.m"
            }
#line 1101 "goal_form.m"
            break;
#line 1101 "goal_form.m"
          case (MR_Integer) 1:
#line 1101 "goal_form.m"
          case (MR_Integer) 2:
#line 1100 "goal_form.m"
            hlds__goal_form__HasForeign_4 = (MR_Integer) 0;
#line 1101 "goal_form.m"
            break;
#line 1101 "goal_form.m"
          case (MR_Integer) 3:
#line 1101 "goal_form.m"
#line 1101 "goal_form.m"
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_5, (MR_Integer) 0)))) {
#line 1101 "goal_form.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1101 "goal_form.m"
              case (MR_Integer) 0:
#line 1100 "goal_form.m"
                hlds__goal_form__HasForeign_4 = (MR_Integer) 0;
#line 1101 "goal_form.m"
                break;
#line 1101 "goal_form.m"
              case (MR_Integer) 1:
#line 1139 "goal_form.m"
                hlds__goal_form__HasForeign_4 = (MR_Integer) 1;
#line 1101 "goal_form.m"
                break;
#line 1101 "goal_form.m"
              case (MR_Integer) 2:
#line 1102 "goal_form.m"
                {
#line 1102 "goal_form.m"
                  MR_Word hlds__goal_form__Goals_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_5, (MR_Integer) 2)));
#line 1102 "goal_form.m"
                  MR_Word hlds__goal_form__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_5, (MR_Integer) 1)));

#line 1103 "goal_form.m"
                  {
#line 1103 "goal_form.m"
                    return hlds__goal_form__HasForeign_4 = hlds__goal_form__goal_list_has_foreign_1_f_0(hlds__goal_form__Goals_24);
                  }
#line 1102 "goal_form.m"
                }
#line 1101 "goal_form.m"
                break;
#line 1101 "goal_form.m"
              case (MR_Integer) 3:
#line 1105 "goal_form.m"
                {
#line 1105 "goal_form.m"
                  MR_Word hlds__goal_form__Goals_60 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_5, (MR_Integer) 1)));

#line 1106 "goal_form.m"
                  {
#line 1106 "goal_form.m"
                    return hlds__goal_form__HasForeign_4 = hlds__goal_form__goal_list_has_foreign_1_f_0(hlds__goal_form__Goals_60);
                  }
#line 1105 "goal_form.m"
                }
#line 1101 "goal_form.m"
                break;
#line 1101 "goal_form.m"
              case (MR_Integer) 4:
#line 1108 "goal_form.m"
                {
#line 1108 "goal_form.m"
                  MR_Word hlds__goal_form__Cases_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_5, (MR_Integer) 3)));
#line 1108 "goal_form.m"
                  MR_Word hlds__goal_form__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_5, (MR_Integer) 1)));
#line 1108 "goal_form.m"
                  MR_Word hlds__goal_form__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_5, (MR_Integer) 2)));

#line 1109 "goal_form.m"
                  {
#line 1109 "goal_form.m"
                    return hlds__goal_form__HasForeign_4 = hlds__goal_form__case_list_has_foreign_1_f_0(hlds__goal_form__Cases_27);
                  }
#line 1108 "goal_form.m"
                }
#line 1101 "goal_form.m"
                break;
#line 1101 "goal_form.m"
              case (MR_Integer) 5:
#line 1114 "goal_form.m"
                {
#line 1114 "goal_form.m"
                  MR_Word hlds__goal_form__Reason_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_5, (MR_Integer) 1)));
#line 1114 "goal_form.m"
                  MR_Word hlds__goal_form__SubGoal_61 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_5, (MR_Integer) 2)));
#line 1116 "goal_form.m"
                  MR_Word hlds__goal_form__FGT_31;
#line 1116 "goal_form.m"
                  MR_Word hlds__goal_form__V_30_30;

#line 1116 "goal_form.m"
                  hlds__goal_form__succeeded = ((((MR_tag((MR_Word) hlds__goal_form__Reason_29)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__Reason_29, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 1116 "goal_form.m"
                  if (hlds__goal_form__succeeded)
#line 1116 "goal_form.m"
                    {
#line 1116 "goal_form.m"
                      hlds__goal_form__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__Reason_29, (MR_Integer) 1)));
#line 1116 "goal_form.m"
                      hlds__goal_form__FGT_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__Reason_29, (MR_Integer) 2)));
#line 1118 "goal_form.m"
#line 1118 "goal_form.m"
                      switch (hlds__goal_form__FGT_31) {
#line 1118 "goal_form.m"
                        default:
#line 1118 "goal_form.m"
                          hlds__goal_form__succeeded = MR_FALSE;
#line 1118 "goal_form.m"
                          break;
#line 1118 "goal_form.m"
                        case (MR_Integer) 1:
#line 1117 "goal_form.m"
                          hlds__goal_form__succeeded = MR_TRUE;
#line 1118 "goal_form.m"
                          break;
#line 1118 "goal_form.m"
                        case (MR_Integer) 2:
#line 1118 "goal_form.m"
                          hlds__goal_form__succeeded = MR_TRUE;
#line 1118 "goal_form.m"
                          break;
#line 1118 "goal_form.m"
                      }
#line 1116 "goal_form.m"
                    }
#line 1122 "goal_form.m"
                  if (hlds__goal_form__succeeded)
#line 1121 "goal_form.m"
                    hlds__goal_form__HasForeign_4 = (MR_Integer) 0;
#line 1122 "goal_form.m"
                  else
#line 1123 "goal_form.m"
                    {
#line 1123 "goal_form.m"
                      /* direct tailcall eliminated */
#line 1123 "goal_form.m"
                      {
#line 1123 "goal_form.m"
                        MR_Word hlds__goal_form__Goal__tmp_copy_3 = hlds__goal_form__SubGoal_61;

#line 1123 "goal_form.m"
                        hlds__goal_form__Goal_3 = hlds__goal_form__Goal__tmp_copy_3;
#line 1123 "goal_form.m"
                      }
#line 1123 "goal_form.m"
                      continue;
#line 1123 "goal_form.m"
                    }
#line 1114 "goal_form.m"
                }
#line 1101 "goal_form.m"
                break;
#line 1101 "goal_form.m"
              case (MR_Integer) 6:
#line 1126 "goal_form.m"
                {
#line 1126 "goal_form.m"
                  MR_Word hlds__goal_form__Cond_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_5, (MR_Integer) 2)));
#line 1126 "goal_form.m"
                  MR_Word hlds__goal_form__Then_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_5, (MR_Integer) 3)));
#line 1126 "goal_form.m"
                  MR_Word hlds__goal_form__Else_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_5, (MR_Integer) 4)));
#line 1126 "goal_form.m"
                  MR_Word hlds__goal_form__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_5, (MR_Integer) 1)));

#line 1128 "goal_form.m"
                  {
#line 1128 "goal_form.m"
                    MR_Word hlds__goal_form__V_59_59;

#line 1128 "goal_form.m"
                    {
#line 1128 "goal_form.m"
                      hlds__goal_form__V_59_59 = hlds__goal_form__goal_has_foreign_1_f_0(hlds__goal_form__Cond_33);
                    }
#line 1128 "goal_form.m"
                    hlds__goal_form__succeeded = (hlds__goal_form__V_59_59 == (MR_Integer) 1);
#line 1128 "goal_form.m"
                  }
#line 1129 "goal_form.m"
                  if (!(hlds__goal_form__succeeded))
#line 1129 "goal_form.m"
                    {
#line 1129 "goal_form.m"
                      {
#line 1129 "goal_form.m"
                        MR_Word hlds__goal_form__V_58_58;

#line 1129 "goal_form.m"
                        {
#line 1129 "goal_form.m"
                          hlds__goal_form__V_58_58 = hlds__goal_form__goal_has_foreign_1_f_0(hlds__goal_form__Then_34);
                        }
#line 1129 "goal_form.m"
                        hlds__goal_form__succeeded = (hlds__goal_form__V_58_58 == (MR_Integer) 1);
#line 1129 "goal_form.m"
                      }
#line 1129 "goal_form.m"
                      if (!(hlds__goal_form__succeeded))
#line 1130 "goal_form.m"
                        {
#line 1130 "goal_form.m"
                          MR_Word hlds__goal_form__V_57_57;

#line 1130 "goal_form.m"
                          {
#line 1130 "goal_form.m"
                            hlds__goal_form__V_57_57 = hlds__goal_form__goal_has_foreign_1_f_0(hlds__goal_form__Else_35);
                          }
#line 1130 "goal_form.m"
                          hlds__goal_form__succeeded = (hlds__goal_form__V_57_57 == (MR_Integer) 1);
#line 1130 "goal_form.m"
                        }
#line 1129 "goal_form.m"
                    }
#line 1134 "goal_form.m"
                  if (hlds__goal_form__succeeded)
#line 1133 "goal_form.m"
                    hlds__goal_form__HasForeign_4 = (MR_Integer) 1;
#line 1134 "goal_form.m"
                  else
#line 1135 "goal_form.m"
                    hlds__goal_form__HasForeign_4 = (MR_Integer) 0;
#line 1126 "goal_form.m"
                }
#line 1101 "goal_form.m"
                break;
#line 1101 "goal_form.m"
              case (MR_Integer) 7:
#line 1141 "goal_form.m"
                {
#line 1141 "goal_form.m"
                  MR_Word hlds__goal_form__ShortHand_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_5, (MR_Integer) 1)));

#line 1145 "goal_form.m"
#line 1145 "goal_form.m"
                  switch (MR_tag((MR_Word) hlds__goal_form__ShortHand_43)) {
#line 1145 "goal_form.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 1145 "goal_form.m"
                    case (MR_Integer) 0:
#line 1149 "goal_form.m"
                      {
#line 1149 "goal_form.m"
                        MR_Word hlds__goal_form__GoalA_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__ShortHand_43, (MR_Integer) 0)));
#line 1149 "goal_form.m"
                        MR_Word hlds__goal_form__GoalB_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__ShortHand_43, (MR_Integer) 1)));
#line 1149 "goal_form.m"
                        MR_Word hlds__goal_form__V_55_55;
#line 1149 "goal_form.m"
                        MR_Word hlds__goal_form__V_56_56;

#line 1150 "goal_form.m"
                        {
#line 1150 "goal_form.m"
                          hlds__goal_form__V_55_55 = hlds__goal_form__goal_has_foreign_1_f_0(hlds__goal_form__GoalA_53);
                        }
#line 1151 "goal_form.m"
                        {
#line 1151 "goal_form.m"
                          hlds__goal_form__V_56_56 = hlds__goal_form__goal_has_foreign_1_f_0(hlds__goal_form__GoalB_54);
                        }
#line 1150 "goal_form.m"
                        {
#line 1150 "goal_form.m"
                          return hlds__goal_form__HasForeign_4 = mercury__bool__or_2_f_0(hlds__goal_form__V_55_55, hlds__goal_form__V_56_56);
                        }
#line 1149 "goal_form.m"
                      }
#line 1145 "goal_form.m"
                      break;
#line 1145 "goal_form.m"
                    case (MR_Integer) 1:
#line 1144 "goal_form.m"
                      hlds__goal_form__HasForeign_4 = (MR_Integer) 1;
#line 1145 "goal_form.m"
                      break;
#line 1145 "goal_form.m"
                    case (MR_Integer) 2:
#line 1146 "goal_form.m"
                      {
#line 1146 "goal_form.m"
                        MR_Word hlds__goal_form__SubGoal_62 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__ShortHand_43, (MR_Integer) 2)));
#line 1146 "goal_form.m"
                        MR_Word hlds__goal_form__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__ShortHand_43, (MR_Integer) 0)));
#line 1146 "goal_form.m"
                        MR_Word hlds__goal_form__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__ShortHand_43, (MR_Integer) 1)));

#line 1147 "goal_form.m"
                        /* direct tailcall eliminated */
#line 1147 "goal_form.m"
                        {
#line 1147 "goal_form.m"
                          MR_Word hlds__goal_form__Goal__tmp_copy_3 = hlds__goal_form__SubGoal_62;

#line 1147 "goal_form.m"
                          hlds__goal_form__Goal_3 = hlds__goal_form__Goal__tmp_copy_3;
#line 1147 "goal_form.m"
                        }
#line 1147 "goal_form.m"
                        continue;
#line 1146 "goal_form.m"
                      }
#line 1145 "goal_form.m"
                      break;
#line 1145 "goal_form.m"
                  }
#line 1141 "goal_form.m"
                }
#line 1101 "goal_form.m"
                break;
#line 1101 "goal_form.m"
            }
#line 1101 "goal_form.m"
            break;
#line 1101 "goal_form.m"
        }
#line 1093 "goal_form.m"
        return hlds__goal_form__HasForeign_4;
#line 1093 "goal_form.m"
      }
#line 1093 "goal_form.m"
      break;
#line 1093 "goal_form.m"
    }
#line 183 "goal_form.m"
}

#line 176 "goal_form.m"
MR_Word MR_CALL 
hlds__goal_form__goal_may_modify_trail_1_f_0(
#line 176 "goal_form.m"
  MR_Word hlds__goal_form__GoalInfo_3)
#line 176 "goal_form.m"
{
#line 1089 "goal_form.m"
  {
#line 1089 "goal_form.m"
    MR_bool hlds__goal_form__succeeded;
#line 1089 "goal_form.m"
    MR_Word hlds__goal_form__HeadVar__2_2;
#line 1089 "goal_form.m"
    MR_Word hlds__goal_form__V_4_4;

#line 1083 "goal_form.m"
    {
#line 1083 "goal_form.m"
      hlds__goal_form__succeeded = hlds__hlds_goal__goal_info_has_feature_2_p_0(hlds__goal_form__GoalInfo_3, (MR_Integer) 15);
    }
#line 1082 "goal_form.m"
    if (hlds__goal_form__succeeded)
#line 1084 "goal_form.m"
      hlds__goal_form__V_4_4 = (MR_Integer) 1;
#line 1082 "goal_form.m"
    else
#line 1086 "goal_form.m"
      hlds__goal_form__V_4_4 = (MR_Integer) 0;
#line 1089 "goal_form.m"
    {
#line 1089 "goal_form.m"
      return hlds__goal_form__HeadVar__2_2 = mercury__bool__not_1_f_0(hlds__goal_form__V_4_4);
    }
#line 1089 "goal_form.m"
    return hlds__goal_form__HeadVar__2_2;
#line 1089 "goal_form.m"
  }
#line 176 "goal_form.m"
}

#line 172 "goal_form.m"
MR_Word MR_CALL 
hlds__goal_form__goal_cannot_modify_trail_1_f_0(
#line 172 "goal_form.m"
  MR_Word hlds__goal_form__GoalInfo_3)
#line 172 "goal_form.m"
{
#line 1082 "goal_form.m"
  {
#line 1082 "goal_form.m"
    MR_bool hlds__goal_form__succeeded;
#line 1082 "goal_form.m"
    MR_Word hlds__goal_form__HeadVar__2_2;

#line 1083 "goal_form.m"
    {
#line 1083 "goal_form.m"
      hlds__goal_form__succeeded = hlds__hlds_goal__goal_info_has_feature_2_p_0(hlds__goal_form__GoalInfo_3, (MR_Integer) 15);
    }
#line 1082 "goal_form.m"
    if (hlds__goal_form__succeeded)
#line 1084 "goal_form.m"
      hlds__goal_form__HeadVar__2_2 = (MR_Integer) 1;
#line 1082 "goal_form.m"
    else
#line 1086 "goal_form.m"
      hlds__goal_form__HeadVar__2_2 = (MR_Integer) 0;
#line 1082 "goal_form.m"
    return hlds__goal_form__HeadVar__2_2;
#line 1082 "goal_form.m"
  }
#line 172 "goal_form.m"
}

#line 165 "goal_form.m"
void MR_CALL 
hlds__goal_form__count_recursive_calls_5_p_0(
#line 165 "goal_form.m"
  MR_Word hlds__goal_form__Goal_6,
#line 165 "goal_form.m"
  MR_Word hlds__goal_form__PredId_7,
#line 165 "goal_form.m"
  MR_Integer hlds__goal_form__ProcId_8,
#line 165 "goal_form.m"
  MR_Integer * hlds__goal_form__Min_9,
#line 165 "goal_form.m"
  MR_Integer * hlds__goal_form__Max_10)
#line 165 "goal_form.m"
{
#line 958 "goal_form.m"
  while (MR_TRUE)
#line 958 "goal_form.m"
    {
#line 958 "goal_form.m"
      /* tailcall optimized into a loop */
#line 958 "goal_form.m"
      {
#line 958 "goal_form.m"
        MR_bool hlds__goal_form__succeeded;
#line 958 "goal_form.m"
        MR_Word hlds__goal_form__GoalExpr_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Goal_6, (MR_Integer) 0)));
#line 959 "goal_form.m"
        MR_Word hlds__goal_form__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Goal_6, (MR_Integer) 1)));

#line 967 "goal_form.m"
#line 967 "goal_form.m"
        switch (MR_tag((MR_Word) hlds__goal_form__GoalExpr_11)) {
#line 967 "goal_form.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 967 "goal_form.m"
          case (MR_Integer) 0:
#line 998 "goal_form.m"
            {
#line 998 "goal_form.m"
              MR_Word hlds__goal_form__SubGoal_54 = (MR_Word) MR_body(((MR_Word) hlds__goal_form__GoalExpr_11), (MR_Integer) 0);

#line 999 "goal_form.m"
              /* direct tailcall eliminated */
#line 999 "goal_form.m"
              {
#line 999 "goal_form.m"
                MR_Word hlds__goal_form__Goal__tmp_copy_6 = hlds__goal_form__SubGoal_54;

#line 999 "goal_form.m"
                hlds__goal_form__Goal_6 = hlds__goal_form__Goal__tmp_copy_6;
#line 999 "goal_form.m"
              }
#line 999 "goal_form.m"
              continue;
#line 998 "goal_form.m"
            }
#line 967 "goal_form.m"
            break;
#line 967 "goal_form.m"
          case (MR_Integer) 1:
#line 964 "goal_form.m"
            {
#line 965 "goal_form.m"
              *hlds__goal_form__Min_9 = (MR_Integer) 0;
#line 966 "goal_form.m"
              *hlds__goal_form__Max_10 = (MR_Integer) 0;
#line 964 "goal_form.m"
            }
#line 967 "goal_form.m"
            break;
#line 967 "goal_form.m"
          case (MR_Integer) 2:
#line 968 "goal_form.m"
            {
#line 968 "goal_form.m"
              MR_Word hlds__goal_form__CallPredId_30 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__GoalExpr_11, (MR_Integer) 0)));
#line 968 "goal_form.m"
              MR_Integer hlds__goal_form__CallProcId_31 = ((MR_Integer) (MR_hl_field(MR_mktag(2), hlds__goal_form__GoalExpr_11, (MR_Integer) 1)));
#line 968 "goal_form.m"
              MR_Word hlds__goal_form__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__GoalExpr_11, (MR_Integer) 2)));
#line 968 "goal_form.m"
              MR_Word hlds__goal_form__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__GoalExpr_11, (MR_Integer) 3)));
#line 968 "goal_form.m"
              MR_Word hlds__goal_form__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__GoalExpr_11, (MR_Integer) 4)));
#line 968 "goal_form.m"
              MR_Word hlds__goal_form__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__GoalExpr_11, (MR_Integer) 5)));

#line 970 "goal_form.m"
              {
#line 970 "goal_form.m"
                hlds__goal_form__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(hlds__goal_form__PredId_7, hlds__goal_form__CallPredId_30);
              }
#line 970 "goal_form.m"
              if (hlds__goal_form__succeeded)
#line 971 "goal_form.m"
                hlds__goal_form__succeeded = (hlds__goal_form__ProcId_8 == hlds__goal_form__CallProcId_31);
#line 974 "goal_form.m"
              if (hlds__goal_form__succeeded)
#line 973 "goal_form.m"
                *hlds__goal_form__Min_9 = (MR_Integer) 1;
#line 974 "goal_form.m"
              else
#line 975 "goal_form.m"
                *hlds__goal_form__Min_9 = (MR_Integer) 0;
#line 978 "goal_form.m"
              *hlds__goal_form__Max_10 = *hlds__goal_form__Min_9;
#line 968 "goal_form.m"
            }
#line 967 "goal_form.m"
            break;
#line 967 "goal_form.m"
          case (MR_Integer) 3:
#line 967 "goal_form.m"
#line 967 "goal_form.m"
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_11, (MR_Integer) 0)))) {
#line 967 "goal_form.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 967 "goal_form.m"
              case (MR_Integer) 0:
#line 967 "goal_form.m"
              case (MR_Integer) 1:
#line 964 "goal_form.m"
                {
#line 965 "goal_form.m"
                  *hlds__goal_form__Min_9 = (MR_Integer) 0;
#line 966 "goal_form.m"
                  *hlds__goal_form__Max_10 = (MR_Integer) 0;
#line 964 "goal_form.m"
                }
#line 967 "goal_form.m"
                break;
#line 967 "goal_form.m"
              case (MR_Integer) 2:
#line 980 "goal_form.m"
                {
#line 980 "goal_form.m"
                  MR_Word hlds__goal_form__Goals_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_11, (MR_Integer) 2)));
#line 980 "goal_form.m"
                  MR_Word hlds__goal_form__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_11, (MR_Integer) 1)));

#line 981 "goal_form.m"
                  {
#line 981 "goal_form.m"
                    hlds__goal_form__count_recursive_calls_conj_7_p_0(hlds__goal_form__Goals_38, hlds__goal_form__PredId_7, hlds__goal_form__ProcId_8, (MR_Integer) 0, (MR_Integer) 0, hlds__goal_form__Min_9, hlds__goal_form__Max_10);
#line 981 "goal_form.m"
                    return;
                  }
#line 980 "goal_form.m"
                }
#line 967 "goal_form.m"
                break;
#line 967 "goal_form.m"
              case (MR_Integer) 3:
#line 983 "goal_form.m"
                {
#line 983 "goal_form.m"
                  MR_Word hlds__goal_form__Goals_76 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_11, (MR_Integer) 1)));

#line 984 "goal_form.m"
                  {
#line 984 "goal_form.m"
                    hlds__goal_form__count_recursive_calls_disj_5_p_0(hlds__goal_form__Goals_76, hlds__goal_form__PredId_7, hlds__goal_form__ProcId_8, hlds__goal_form__Min_9, hlds__goal_form__Max_10);
#line 984 "goal_form.m"
                    return;
                  }
#line 983 "goal_form.m"
                }
#line 967 "goal_form.m"
                break;
#line 967 "goal_form.m"
              case (MR_Integer) 4:
#line 986 "goal_form.m"
                {
#line 986 "goal_form.m"
                  MR_Word hlds__goal_form__Cases_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_11, (MR_Integer) 3)));
#line 986 "goal_form.m"
                  MR_Word hlds__goal_form__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_11, (MR_Integer) 1)));
#line 986 "goal_form.m"
                  MR_Word hlds__goal_form__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_11, (MR_Integer) 2)));

#line 987 "goal_form.m"
                  {
#line 987 "goal_form.m"
                    hlds__goal_form__count_recursive_calls_cases_5_p_0(hlds__goal_form__Cases_41, hlds__goal_form__PredId_7, hlds__goal_form__ProcId_8, hlds__goal_form__Min_9, hlds__goal_form__Max_10);
#line 987 "goal_form.m"
                    return;
                  }
#line 986 "goal_form.m"
                }
#line 967 "goal_form.m"
                break;
#line 967 "goal_form.m"
              case (MR_Integer) 5:
#line 1001 "goal_form.m"
                {
#line 1001 "goal_form.m"
                  MR_Word hlds__goal_form__Reason_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_11, (MR_Integer) 1)));
#line 1001 "goal_form.m"
                  MR_Word hlds__goal_form__SubGoal_77 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_11, (MR_Integer) 2)));
#line 1003 "goal_form.m"
                  MR_Word hlds__goal_form__FGT_57;
#line 1003 "goal_form.m"
                  MR_Word hlds__goal_form__V_56_56;

#line 1003 "goal_form.m"
                  hlds__goal_form__succeeded = ((((MR_tag((MR_Word) hlds__goal_form__Reason_55)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__Reason_55, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 1003 "goal_form.m"
                  if (hlds__goal_form__succeeded)
#line 1003 "goal_form.m"
                    {
#line 1003 "goal_form.m"
                      hlds__goal_form__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__Reason_55, (MR_Integer) 1)));
#line 1003 "goal_form.m"
                      hlds__goal_form__FGT_57 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__Reason_55, (MR_Integer) 2)));
#line 1005 "goal_form.m"
#line 1005 "goal_form.m"
                      switch (hlds__goal_form__FGT_57) {
#line 1005 "goal_form.m"
                        default:
#line 1005 "goal_form.m"
                          hlds__goal_form__succeeded = MR_FALSE;
#line 1005 "goal_form.m"
                          break;
#line 1005 "goal_form.m"
                        case (MR_Integer) 1:
#line 1004 "goal_form.m"
                          hlds__goal_form__succeeded = MR_TRUE;
#line 1005 "goal_form.m"
                          break;
#line 1005 "goal_form.m"
                        case (MR_Integer) 2:
#line 1005 "goal_form.m"
                          hlds__goal_form__succeeded = MR_TRUE;
#line 1005 "goal_form.m"
                          break;
#line 1005 "goal_form.m"
                      }
#line 1003 "goal_form.m"
                    }
#line 1012 "goal_form.m"
                  if (hlds__goal_form__succeeded)
#line 1010 "goal_form.m"
                    {
#line 1010 "goal_form.m"
                      *hlds__goal_form__Min_9 = (MR_Integer) 0;
#line 1011 "goal_form.m"
                      *hlds__goal_form__Max_10 = (MR_Integer) 0;
#line 1010 "goal_form.m"
                    }
#line 1012 "goal_form.m"
                  else
#line 1013 "goal_form.m"
                    {
#line 1013 "goal_form.m"
                      /* direct tailcall eliminated */
#line 1013 "goal_form.m"
                      {
#line 1013 "goal_form.m"
                        MR_Word hlds__goal_form__Goal__tmp_copy_6 = hlds__goal_form__SubGoal_77;

#line 1013 "goal_form.m"
                        hlds__goal_form__Goal_6 = hlds__goal_form__Goal__tmp_copy_6;
#line 1013 "goal_form.m"
                      }
#line 1013 "goal_form.m"
                      continue;
#line 1013 "goal_form.m"
                    }
#line 1001 "goal_form.m"
                }
#line 967 "goal_form.m"
                break;
#line 967 "goal_form.m"
              case (MR_Integer) 6:
#line 989 "goal_form.m"
                {
#line 989 "goal_form.m"
                  MR_Word hlds__goal_form__Cond_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_11, (MR_Integer) 2)));
#line 989 "goal_form.m"
                  MR_Word hlds__goal_form__Then_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_11, (MR_Integer) 3)));
#line 989 "goal_form.m"
                  MR_Word hlds__goal_form__Else_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_11, (MR_Integer) 4)));
#line 989 "goal_form.m"
                  MR_Integer hlds__goal_form__CMin_46;
#line 989 "goal_form.m"
                  MR_Integer hlds__goal_form__CMax_47;
#line 989 "goal_form.m"
                  MR_Integer hlds__goal_form__TMin_48;
#line 989 "goal_form.m"
                  MR_Integer hlds__goal_form__TMax_49;
#line 989 "goal_form.m"
                  MR_Integer hlds__goal_form__EMin_50;
#line 989 "goal_form.m"
                  MR_Integer hlds__goal_form__EMax_51;
#line 989 "goal_form.m"
                  MR_Integer hlds__goal_form__CTMin_52;
#line 989 "goal_form.m"
                  MR_Integer hlds__goal_form__CTMax_53;
#line 989 "goal_form.m"
                  MR_Word hlds__goal_form__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_11, (MR_Integer) 1)));

#line 990 "goal_form.m"
                  {
#line 990 "goal_form.m"
                    hlds__goal_form__count_recursive_calls_5_p_0(hlds__goal_form__Cond_43, hlds__goal_form__PredId_7, hlds__goal_form__ProcId_8, &hlds__goal_form__CMin_46, &hlds__goal_form__CMax_47);
                  }
#line 991 "goal_form.m"
                  {
#line 991 "goal_form.m"
                    hlds__goal_form__count_recursive_calls_5_p_0(hlds__goal_form__Then_44, hlds__goal_form__PredId_7, hlds__goal_form__ProcId_8, &hlds__goal_form__TMin_48, &hlds__goal_form__TMax_49);
                  }
#line 992 "goal_form.m"
                  {
#line 992 "goal_form.m"
                    hlds__goal_form__count_recursive_calls_5_p_0(hlds__goal_form__Else_45, hlds__goal_form__PredId_7, hlds__goal_form__ProcId_8, &hlds__goal_form__EMin_50, &hlds__goal_form__EMax_51);
                  }
#line 993 "goal_form.m"
                  hlds__goal_form__CTMin_52 = (hlds__goal_form__CMin_46 + hlds__goal_form__TMin_48);
#line 994 "goal_form.m"
                  hlds__goal_form__CTMax_53 = (hlds__goal_form__CMax_47 + hlds__goal_form__TMax_49);
#line 995 "goal_form.m"
                  {
#line 995 "goal_form.m"
                    mercury__int__min_3_p_0(hlds__goal_form__CTMin_52, hlds__goal_form__EMin_50, hlds__goal_form__Min_9);
                  }
#line 996 "goal_form.m"
                  {
#line 996 "goal_form.m"
                    mercury__int__max_3_p_0(hlds__goal_form__CTMax_53, hlds__goal_form__EMax_51, hlds__goal_form__Max_10);
#line 996 "goal_form.m"
                    return;
                  }
#line 989 "goal_form.m"
                }
#line 967 "goal_form.m"
                break;
#line 967 "goal_form.m"
              case (MR_Integer) 7:
#line 1016 "goal_form.m"
                {
#line 1016 "goal_form.m"
                  MR_Word hlds__goal_form__ShortHand_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_11, (MR_Integer) 1)));

#line 1021 "goal_form.m"
#line 1021 "goal_form.m"
                  switch (MR_tag((MR_Word) hlds__goal_form__ShortHand_58)) {
#line 1021 "goal_form.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 1021 "goal_form.m"
                    case (MR_Integer) 0:
#line 1025 "goal_form.m"
                      {
#line 1027 "goal_form.m"
                        {
#line 1027 "goal_form.m"
                          mercury__require__unexpected_3_p_0((MR_String) "hlds.goal_form", (MR_String) "predicate \140hlds.goal_form.count_recursive_calls\'/5", (MR_String) "bi_implication");
#line 1027 "goal_form.m"
                          return;
                        }
#line 1025 "goal_form.m"
                      }
#line 1021 "goal_form.m"
                      break;
#line 1021 "goal_form.m"
                    case (MR_Integer) 1:
#line 1018 "goal_form.m"
                      {
#line 1018 "goal_form.m"
                        MR_Word hlds__goal_form__Goal_85 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__ShortHand_58, (MR_Integer) 4)));
#line 1018 "goal_form.m"
                        MR_Word hlds__goal_form__Goals_86 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__ShortHand_58, (MR_Integer) 5)));
#line 1018 "goal_form.m"
                        MR_Word hlds__goal_form__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__ShortHand_58, (MR_Integer) 0)));
#line 1018 "goal_form.m"
                        MR_Word hlds__goal_form__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__ShortHand_58, (MR_Integer) 1)));
#line 1018 "goal_form.m"
                        MR_Word hlds__goal_form__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__ShortHand_58, (MR_Integer) 2)));
#line 1018 "goal_form.m"
                        MR_Word hlds__goal_form__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__ShortHand_58, (MR_Integer) 3)));
#line 1018 "goal_form.m"
                        MR_Word hlds__goal_form__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__ShortHand_58, (MR_Integer) 6)));

#line 1051 "goal_form.m"
                        if ((hlds__goal_form__Goals_86 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1050 "goal_form.m"
                          {
#line 1050 "goal_form.m"
                            /* direct tailcall eliminated */
#line 1050 "goal_form.m"
                            {
#line 1050 "goal_form.m"
                              MR_Word hlds__goal_form__Goal__tmp_copy_6 = hlds__goal_form__Goal_85;

#line 1050 "goal_form.m"
                              hlds__goal_form__Goal_6 = hlds__goal_form__Goal__tmp_copy_6;
#line 1050 "goal_form.m"
                            }
#line 1050 "goal_form.m"
                            continue;
#line 1050 "goal_form.m"
                          }
#line 1051 "goal_form.m"
                        else
#line 1052 "goal_form.m"
                          {
#line 1052 "goal_form.m"
                            MR_Integer hlds__goal_form__Min0_93;
#line 1052 "goal_form.m"
                            MR_Integer hlds__goal_form__Max0_94;
#line 1052 "goal_form.m"
                            MR_Integer hlds__goal_form__Min1_95;
#line 1052 "goal_form.m"
                            MR_Integer hlds__goal_form__Max1_96;

#line 1053 "goal_form.m"
                            {
#line 1053 "goal_form.m"
                              hlds__goal_form__count_recursive_calls_5_p_0(hlds__goal_form__Goal_85, hlds__goal_form__PredId_7, hlds__goal_form__ProcId_8, &hlds__goal_form__Min0_93, &hlds__goal_form__Max0_94);
                            }
#line 1054 "goal_form.m"
                            {
#line 1054 "goal_form.m"
                              hlds__goal_form__count_recursive_calls_disj_5_p_0(hlds__goal_form__Goals_86, hlds__goal_form__PredId_7, hlds__goal_form__ProcId_8, &hlds__goal_form__Min1_95, &hlds__goal_form__Max1_96);
                            }
#line 1055 "goal_form.m"
                            {
#line 1055 "goal_form.m"
                              mercury__int__min_3_p_0(hlds__goal_form__Min0_93, hlds__goal_form__Min1_95, hlds__goal_form__Min_9);
                            }
#line 1056 "goal_form.m"
                            {
#line 1056 "goal_form.m"
                              mercury__int__max_3_p_0(hlds__goal_form__Max0_94, hlds__goal_form__Max1_96, hlds__goal_form__Max_10);
#line 1056 "goal_form.m"
                              return;
                            }
#line 1052 "goal_form.m"
                          }
#line 1018 "goal_form.m"
                      }
#line 1021 "goal_form.m"
                      break;
#line 1021 "goal_form.m"
                    case (MR_Integer) 2:
#line 1022 "goal_form.m"
                      {
#line 1022 "goal_form.m"
                        MR_Word hlds__goal_form__SubGoal_78 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__ShortHand_58, (MR_Integer) 2)));
#line 1022 "goal_form.m"
                        MR_Word hlds__goal_form__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__ShortHand_58, (MR_Integer) 0)));
#line 1022 "goal_form.m"
                        MR_Word hlds__goal_form__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__ShortHand_58, (MR_Integer) 1)));

#line 1023 "goal_form.m"
                        /* direct tailcall eliminated */
#line 1023 "goal_form.m"
                        {
#line 1023 "goal_form.m"
                          MR_Word hlds__goal_form__Goal__tmp_copy_6 = hlds__goal_form__SubGoal_78;

#line 1023 "goal_form.m"
                          hlds__goal_form__Goal_6 = hlds__goal_form__Goal__tmp_copy_6;
#line 1023 "goal_form.m"
                        }
#line 1023 "goal_form.m"
                        continue;
#line 1022 "goal_form.m"
                      }
#line 1021 "goal_form.m"
                      break;
#line 1021 "goal_form.m"
                  }
#line 1016 "goal_form.m"
                }
#line 967 "goal_form.m"
                break;
#line 967 "goal_form.m"
            }
#line 967 "goal_form.m"
            break;
#line 967 "goal_form.m"
        }
#line 958 "goal_form.m"
      }
#line 958 "goal_form.m"
      break;
#line 958 "goal_form.m"
    }
#line 165 "goal_form.m"
}

#line 158 "goal_form.m"
MR_bool MR_CALL 
hlds__goal_form__cannot_fail_before_stack_flush_1_p_0(
#line 158 "goal_form.m"
  MR_Word hlds__goal_form__HeadVar__1_1)
#line 158 "goal_form.m"
{
#line 917 "goal_form.m"
  {
#line 917 "goal_form.m"
    MR_bool hlds__goal_form__succeeded;
#line 917 "goal_form.m"
    MR_Word hlds__goal_form__GoalExpr_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__HeadVar__1_1, (MR_Integer) 0)));
#line 917 "goal_form.m"
    MR_Word hlds__goal_form__GoalInfo_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__HeadVar__1_1, (MR_Integer) 1)));
#line 917 "goal_form.m"
    MR_Word hlds__goal_form__Detism_4;
#line 917 "goal_form.m"
    MR_Word hlds__goal_form__CanFail_5;
#line 919 "goal_form.m"
    MR_Word hlds__goal_form__V_6_6;

#line 918 "goal_form.m"
    {
#line 918 "goal_form.m"
      hlds__goal_form__Detism_4 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(hlds__goal_form__GoalInfo_3);
    }
#line 919 "goal_form.m"
    {
#line 919 "goal_form.m"
      parse_tree__prog_data__determinism_components_3_p_0(hlds__goal_form__Detism_4, &hlds__goal_form__CanFail_5, &hlds__goal_form__V_6_6);
    }
#line 922 "goal_form.m"
#line 922 "goal_form.m"
    switch (hlds__goal_form__CanFail_5) {
#line 922 "goal_form.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 922 "goal_form.m"
      case (MR_Integer) 0:
#line 929 "goal_form.m"
        {
#line 929 "goal_form.m"
          MR_Word hlds__goal_form__ConjType_7;
#line 929 "goal_form.m"
          MR_Word hlds__goal_form__Goals_8;

#line 929 "goal_form.m"
          hlds__goal_form__succeeded = ((((MR_tag((MR_Word) hlds__goal_form__GoalExpr_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_2, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 929 "goal_form.m"
          if (hlds__goal_form__succeeded)
#line 929 "goal_form.m"
            {
#line 929 "goal_form.m"
              hlds__goal_form__ConjType_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_2, (MR_Integer) 1)));
#line 929 "goal_form.m"
              hlds__goal_form__Goals_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_2, (MR_Integer) 2)));
#line 930 "goal_form.m"
              hlds__goal_form__succeeded = (hlds__goal_form__ConjType_7 == (MR_Integer) 0);
#line 929 "goal_form.m"
              if (hlds__goal_form__succeeded)
#line 931 "goal_form.m"
                {
#line 931 "goal_form.m"
                  return hlds__goal_form__succeeded = hlds__goal_form__cannot_fail_before_stack_flush_conj_1_p_0(hlds__goal_form__Goals_8);
                }
#line 929 "goal_form.m"
            }
#line 929 "goal_form.m"
        }
#line 922 "goal_form.m"
        break;
#line 922 "goal_form.m"
      case (MR_Integer) 1:
#line 921 "goal_form.m"
        hlds__goal_form__succeeded = MR_TRUE;
#line 922 "goal_form.m"
        break;
#line 922 "goal_form.m"
    }
#line 917 "goal_form.m"
    return hlds__goal_form__succeeded;
#line 917 "goal_form.m"
  }
#line 158 "goal_form.m"
}

#line 151 "goal_form.m"
MR_bool MR_CALL 
hlds__goal_form__cannot_stack_flush_1_p_0(
#line 151 "goal_form.m"
  MR_Word hlds__goal_form__HeadVar__1_1)
#line 151 "goal_form.m"
{
#line 884 "goal_form.m"
  {
#line 884 "goal_form.m"
    MR_bool hlds__goal_form__succeeded;
#line 884 "goal_form.m"
    MR_Word hlds__goal_form__GoalExpr_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__HeadVar__1_1, (MR_Integer) 0)));
#line 884 "goal_form.m"
    MR_Word hlds__goal_form__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__HeadVar__1_1, (MR_Integer) 1)));

#line 885 "goal_form.m"
    {
#line 885 "goal_form.m"
      return hlds__goal_form__succeeded = hlds__goal_form__cannot_stack_flush_2_1_p_0(hlds__goal_form__GoalExpr_2);
    }
#line 884 "goal_form.m"
    return hlds__goal_form__succeeded;
#line 884 "goal_form.m"
  }
#line 151 "goal_form.m"
}

#line 142 "goal_form.m"
MR_bool MR_CALL 
hlds__goal_form__goal_list_may_allocate_heap_1_p_0(
#line 142 "goal_form.m"
  MR_Word hlds__goal_form__Goals_2)
#line 142 "goal_form.m"
{
#line 758 "goal_form.m"
  {
#line 758 "goal_form.m"
    MR_bool hlds__goal_form__succeeded;
#line 758 "goal_form.m"
    MR_Word hlds__goal_form__V_4_4;

#line 759 "goal_form.m"
    {
#line 759 "goal_form.m"
      hlds__goal_form__goal_list_may_allocate_heap_2_p_0(hlds__goal_form__Goals_2, &hlds__goal_form__V_4_4);
    }
#line 759 "goal_form.m"
    hlds__goal_form__succeeded = ((MR_Integer) 1 == hlds__goal_form__V_4_4);
#line 758 "goal_form.m"
    return hlds__goal_form__succeeded;
#line 758 "goal_form.m"
  }
#line 142 "goal_form.m"
}

#line 141 "goal_form.m"
MR_bool MR_CALL 
hlds__goal_form__goal_may_allocate_heap_1_p_0(
#line 141 "goal_form.m"
  MR_Word hlds__goal_form__Goal_2)
#line 141 "goal_form.m"
{
#line 755 "goal_form.m"
  {
#line 755 "goal_form.m"
    MR_bool hlds__goal_form__succeeded;
#line 755 "goal_form.m"
    MR_Word hlds__goal_form__V_4_4;
#line 755 "goal_form.m"
    MR_Word hlds__goal_form__GoalExpr_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Goal_2, (MR_Integer) 0)));
#line 763 "goal_form.m"
    MR_Word hlds__goal_form___GoalInfo_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Goal_2, (MR_Integer) 1)));

#line 764 "goal_form.m"
    {
#line 764 "goal_form.m"
      hlds__goal_form__goal_may_allocate_heap_2_2_p_0(hlds__goal_form__GoalExpr_6, &hlds__goal_form__V_4_4);
    }
#line 756 "goal_form.m"
    hlds__goal_form__succeeded = ((MR_Integer) 1 == hlds__goal_form__V_4_4);
#line 755 "goal_form.m"
    return hlds__goal_form__succeeded;
#line 755 "goal_form.m"
  }
#line 141 "goal_form.m"
}

#line 132 "goal_form.m"
MR_Word MR_CALL 
hlds__goal_form__goal_is_flat_1_f_0(
#line 132 "goal_form.m"
  MR_Word hlds__goal_form__HeadVar__1_1)
#line 132 "goal_form.m"
{
#line 698 "goal_form.m"
  {
#line 698 "goal_form.m"
    MR_bool hlds__goal_form__succeeded;
#line 698 "goal_form.m"
    MR_Word hlds__goal_form__HeadVar__2_2;
#line 698 "goal_form.m"
    MR_Word hlds__goal_form__GoalExpr_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__HeadVar__1_1, (MR_Integer) 0)));
#line 698 "goal_form.m"
    MR_Word hlds__goal_form___GoalInfo_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__HeadVar__1_1, (MR_Integer) 1)));

#line 698 "goal_form.m"
    {
#line 698 "goal_form.m"
      return hlds__goal_form__HeadVar__2_2 = hlds__goal_form__goal_is_flat_expr_1_f_0(hlds__goal_form__GoalExpr_3);
    }
#line 698 "goal_form.m"
    return hlds__goal_form__HeadVar__2_2;
#line 698 "goal_form.m"
  }
#line 132 "goal_form.m"
}

#line 127 "goal_form.m"
MR_bool MR_CALL 
hlds__goal_form__goal_can_loop_or_throw_1_p_0(
#line 127 "goal_form.m"
  MR_Word hlds__goal_form__Goal_2)
#line 127 "goal_form.m"
{
#line 429 "goal_form.m"
  {
#line 429 "goal_form.m"
    MR_bool hlds__goal_form__succeeded;

#line 429 "goal_form.m"
    {
#line 429 "goal_form.m"
      hlds__goal_form__succeeded = hlds__goal_form__goal_cannot_loop_or_throw_1_p_0(hlds__goal_form__Goal_2);
    }
#line 429 "goal_form.m"
    hlds__goal_form__succeeded = !(hlds__goal_form__succeeded);
#line 429 "goal_form.m"
    return hlds__goal_form__succeeded;
#line 429 "goal_form.m"
  }
#line 127 "goal_form.m"
}

#line 123 "goal_form.m"
MR_bool MR_CALL 
hlds__goal_form__goal_cannot_loop_or_throw_1_p_0(
#line 123 "goal_form.m"
  MR_Word hlds__goal_form__Goal_2)
#line 123 "goal_form.m"
{
#line 424 "goal_form.m"
  {
#line 424 "goal_form.m"
    MR_bool hlds__goal_form__succeeded;
#line 424 "goal_form.m"
    MR_Word hlds__goal_form__V_3_3;
#line 424 "goal_form.m"
    MR_Word hlds__goal_form__V_6_6;
#line 424 "goal_form.m"
    MR_Word hlds__goal_form__GoalExpr_9;
#line 424 "goal_form.m"
    MR_Word hlds__goal_form__GoalInfo_10;
#line 424 "goal_form.m"
    MR_Word hlds__goal_form__Determinism_11;

#line 425 "goal_form.m"
    {
#line 425 "goal_form.m"
      hlds__goal_form__V_3_3 = hlds__goal_form__goal_can_loop_func_2_f_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__goal_form__Goal_2);
    }
#line 425 "goal_form.m"
    hlds__goal_form__succeeded = (hlds__goal_form__V_3_3 == (MR_Integer) 0);
#line 424 "goal_form.m"
    if (hlds__goal_form__succeeded)
#line 424 "goal_form.m"
      {
#line 426 "goal_form.m"
        hlds__goal_form__V_6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 569 "goal_form.m"
        hlds__goal_form__GoalExpr_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Goal_2, (MR_Integer) 0)));
#line 569 "goal_form.m"
        hlds__goal_form__GoalInfo_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Goal_2, (MR_Integer) 1)));
#line 571 "goal_form.m"
        {
#line 571 "goal_form.m"
          hlds__goal_form__Determinism_11 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(hlds__goal_form__GoalInfo_10);
        }
#line 572 "goal_form.m"
        hlds__goal_form__succeeded = (hlds__goal_form__Determinism_11 == (MR_Integer) 6);
#line 574 "goal_form.m"
        if (hlds__goal_form__succeeded)
#line 573 "goal_form.m"
          hlds__goal_form__succeeded = MR_FALSE;
#line 574 "goal_form.m"
        else
#line 575 "goal_form.m"
          {
#line 575 "goal_form.m"
            MR_Word hlds__goal_form__V_13_13;

#line 575 "goal_form.m"
            {
#line 575 "goal_form.m"
              hlds__goal_form__V_13_13 = hlds__goal_form__goal_expr_can_throw_2_f_0(hlds__goal_form__V_6_6, hlds__goal_form__GoalExpr_9);
            }
#line 426 "goal_form.m"
            hlds__goal_form__succeeded = (hlds__goal_form__V_13_13 == (MR_Integer) 0);
#line 575 "goal_form.m"
          }
#line 424 "goal_form.m"
      }
#line 424 "goal_form.m"
    return hlds__goal_form__succeeded;
#line 424 "goal_form.m"
  }
#line 123 "goal_form.m"
}

#line 116 "goal_form.m"
MR_bool MR_CALL 
hlds__goal_form__goal_can_loop_or_throw_2_p_0(
#line 116 "goal_form.m"
  MR_Word hlds__goal_form__ModuleInfo_3,
#line 116 "goal_form.m"
  MR_Word hlds__goal_form__Goal_4)
#line 116 "goal_form.m"
{
#line 422 "goal_form.m"
  {
#line 422 "goal_form.m"
    MR_bool hlds__goal_form__succeeded;

#line 422 "goal_form.m"
    {
#line 422 "goal_form.m"
      hlds__goal_form__succeeded = hlds__goal_form__goal_cannot_loop_or_throw_2_p_0(hlds__goal_form__ModuleInfo_3, hlds__goal_form__Goal_4);
    }
#line 422 "goal_form.m"
    hlds__goal_form__succeeded = !(hlds__goal_form__succeeded);
#line 422 "goal_form.m"
    return hlds__goal_form__succeeded;
#line 422 "goal_form.m"
  }
#line 116 "goal_form.m"
}

#line 112 "goal_form.m"
MR_bool MR_CALL 
hlds__goal_form__goal_cannot_loop_or_throw_2_p_0(
#line 112 "goal_form.m"
  MR_Word hlds__goal_form__ModuleInfo_3,
#line 112 "goal_form.m"
  MR_Word hlds__goal_form__Goal_4)
#line 112 "goal_form.m"
{
#line 417 "goal_form.m"
  {
#line 417 "goal_form.m"
    MR_bool hlds__goal_form__succeeded;
#line 417 "goal_form.m"
    MR_Word hlds__goal_form__V_5_5;
#line 417 "goal_form.m"
    MR_Word hlds__goal_form__V_6_6;
#line 417 "goal_form.m"
    MR_Word hlds__goal_form__GoalExpr_11;
#line 417 "goal_form.m"
    MR_Word hlds__goal_form__GoalInfo_12;
#line 417 "goal_form.m"
    MR_Word hlds__goal_form__Determinism_13;

#line 418 "goal_form.m"
    {
#line 418 "goal_form.m"
      hlds__goal_form__V_6_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 418 "goal_form.m"
      MR_hl_field(MR_mktag(1), hlds__goal_form__V_6_6, 0) = ((MR_Box) (hlds__goal_form__ModuleInfo_3));
#line 418 "goal_form.m"
    }
#line 418 "goal_form.m"
    {
#line 418 "goal_form.m"
      hlds__goal_form__V_5_5 = hlds__goal_form__goal_can_loop_func_2_f_0(hlds__goal_form__V_6_6, hlds__goal_form__Goal_4);
    }
#line 418 "goal_form.m"
    hlds__goal_form__succeeded = (hlds__goal_form__V_5_5 == (MR_Integer) 0);
#line 417 "goal_form.m"
    if (hlds__goal_form__succeeded)
#line 417 "goal_form.m"
      {
#line 569 "goal_form.m"
        hlds__goal_form__GoalExpr_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Goal_4, (MR_Integer) 0)));
#line 569 "goal_form.m"
        hlds__goal_form__GoalInfo_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Goal_4, (MR_Integer) 1)));
#line 571 "goal_form.m"
        {
#line 571 "goal_form.m"
          hlds__goal_form__Determinism_13 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(hlds__goal_form__GoalInfo_12);
        }
#line 572 "goal_form.m"
        hlds__goal_form__succeeded = (hlds__goal_form__Determinism_13 == (MR_Integer) 6);
#line 574 "goal_form.m"
        if (hlds__goal_form__succeeded)
#line 573 "goal_form.m"
          hlds__goal_form__succeeded = MR_FALSE;
#line 574 "goal_form.m"
        else
#line 575 "goal_form.m"
          {
#line 575 "goal_form.m"
            MR_Word hlds__goal_form__V_15_15;

#line 575 "goal_form.m"
            {
#line 575 "goal_form.m"
              hlds__goal_form__V_15_15 = hlds__goal_form__goal_expr_can_throw_2_f_0(hlds__goal_form__V_6_6, hlds__goal_form__GoalExpr_11);
            }
#line 419 "goal_form.m"
            hlds__goal_form__succeeded = (hlds__goal_form__V_15_15 == (MR_Integer) 0);
#line 575 "goal_form.m"
          }
#line 417 "goal_form.m"
      }
#line 417 "goal_form.m"
    return hlds__goal_form__succeeded;
#line 417 "goal_form.m"
  }
#line 112 "goal_form.m"
}

#line 108 "goal_form.m"
MR_bool MR_CALL 
hlds__goal_form__goal_can_throw_2_p_0(
#line 108 "goal_form.m"
  MR_Word hlds__goal_form__ModuleInfo_3,
#line 108 "goal_form.m"
  MR_Word hlds__goal_form__Goal_4)
#line 108 "goal_form.m"
{
#line 414 "goal_form.m"
  {
#line 414 "goal_form.m"
    MR_bool hlds__goal_form__succeeded;
#line 414 "goal_form.m"
    MR_Word hlds__goal_form__V_6_6;
#line 414 "goal_form.m"
    MR_Word hlds__goal_form__GoalExpr_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Goal_4, (MR_Integer) 0)));
#line 414 "goal_form.m"
    MR_Word hlds__goal_form__GoalInfo_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Goal_4, (MR_Integer) 1)));
#line 414 "goal_form.m"
    MR_Word hlds__goal_form__Determinism_11;

#line 415 "goal_form.m"
    {
#line 415 "goal_form.m"
      hlds__goal_form__V_6_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 415 "goal_form.m"
      MR_hl_field(MR_mktag(1), hlds__goal_form__V_6_6, 0) = ((MR_Box) (hlds__goal_form__ModuleInfo_3));
#line 415 "goal_form.m"
    }
#line 571 "goal_form.m"
    {
#line 571 "goal_form.m"
      hlds__goal_form__Determinism_11 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(hlds__goal_form__GoalInfo_10);
    }
#line 572 "goal_form.m"
    hlds__goal_form__succeeded = (hlds__goal_form__Determinism_11 == (MR_Integer) 6);
#line 574 "goal_form.m"
    if (hlds__goal_form__succeeded)
#line 573 "goal_form.m"
      hlds__goal_form__succeeded = MR_TRUE;
#line 574 "goal_form.m"
    else
#line 575 "goal_form.m"
      {
#line 575 "goal_form.m"
        MR_Word hlds__goal_form__V_13_13;

#line 575 "goal_form.m"
        {
#line 575 "goal_form.m"
          hlds__goal_form__V_13_13 = hlds__goal_form__goal_expr_can_throw_2_f_0(hlds__goal_form__V_6_6, hlds__goal_form__GoalExpr_9);
        }
#line 415 "goal_form.m"
        hlds__goal_form__succeeded = (hlds__goal_form__V_13_13 == (MR_Integer) 1);
#line 575 "goal_form.m"
      }
#line 414 "goal_form.m"
    return hlds__goal_form__succeeded;
#line 414 "goal_form.m"
  }
#line 108 "goal_form.m"
}

#line 104 "goal_form.m"
MR_bool MR_CALL 
hlds__goal_form__goal_cannot_throw_2_p_0(
#line 104 "goal_form.m"
  MR_Word hlds__goal_form__ModuleInfo_3,
#line 104 "goal_form.m"
  MR_Word hlds__goal_form__Goal_4)
#line 104 "goal_form.m"
{
#line 411 "goal_form.m"
  {
#line 411 "goal_form.m"
    MR_bool hlds__goal_form__succeeded;
#line 411 "goal_form.m"
    MR_Word hlds__goal_form__V_6_6;
#line 411 "goal_form.m"
    MR_Word hlds__goal_form__GoalExpr_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Goal_4, (MR_Integer) 0)));
#line 411 "goal_form.m"
    MR_Word hlds__goal_form__GoalInfo_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Goal_4, (MR_Integer) 1)));
#line 411 "goal_form.m"
    MR_Word hlds__goal_form__Determinism_11;

#line 412 "goal_form.m"
    {
#line 412 "goal_form.m"
      hlds__goal_form__V_6_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 412 "goal_form.m"
      MR_hl_field(MR_mktag(1), hlds__goal_form__V_6_6, 0) = ((MR_Box) (hlds__goal_form__ModuleInfo_3));
#line 412 "goal_form.m"
    }
#line 571 "goal_form.m"
    {
#line 571 "goal_form.m"
      hlds__goal_form__Determinism_11 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(hlds__goal_form__GoalInfo_10);
    }
#line 572 "goal_form.m"
    hlds__goal_form__succeeded = (hlds__goal_form__Determinism_11 == (MR_Integer) 6);
#line 574 "goal_form.m"
    if (hlds__goal_form__succeeded)
#line 573 "goal_form.m"
      hlds__goal_form__succeeded = MR_FALSE;
#line 574 "goal_form.m"
    else
#line 575 "goal_form.m"
      {
#line 575 "goal_form.m"
        MR_Word hlds__goal_form__V_13_13;

#line 575 "goal_form.m"
        {
#line 575 "goal_form.m"
          hlds__goal_form__V_13_13 = hlds__goal_form__goal_expr_can_throw_2_f_0(hlds__goal_form__V_6_6, hlds__goal_form__GoalExpr_9);
        }
#line 412 "goal_form.m"
        hlds__goal_form__succeeded = (hlds__goal_form__V_13_13 == (MR_Integer) 0);
#line 575 "goal_form.m"
      }
#line 411 "goal_form.m"
    return hlds__goal_form__succeeded;
#line 411 "goal_form.m"
  }
#line 104 "goal_form.m"
}

#line 100 "goal_form.m"
MR_bool MR_CALL 
hlds__goal_form__goal_can_loop_2_p_0(
#line 100 "goal_form.m"
  MR_Word hlds__goal_form__ModuleInfo_3,
#line 100 "goal_form.m"
  MR_Word hlds__goal_form__Goal_4)
#line 100 "goal_form.m"
{
#line 408 "goal_form.m"
  {
#line 408 "goal_form.m"
    MR_bool hlds__goal_form__succeeded;
#line 408 "goal_form.m"
    MR_Word hlds__goal_form__V_5_5;
#line 408 "goal_form.m"
    MR_Word hlds__goal_form__V_6_6;

#line 409 "goal_form.m"
    {
#line 409 "goal_form.m"
      hlds__goal_form__V_6_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 409 "goal_form.m"
      MR_hl_field(MR_mktag(1), hlds__goal_form__V_6_6, 0) = ((MR_Box) (hlds__goal_form__ModuleInfo_3));
#line 409 "goal_form.m"
    }
#line 409 "goal_form.m"
    {
#line 409 "goal_form.m"
      hlds__goal_form__V_5_5 = hlds__goal_form__goal_can_loop_func_2_f_0(hlds__goal_form__V_6_6, hlds__goal_form__Goal_4);
    }
#line 409 "goal_form.m"
    hlds__goal_form__succeeded = (hlds__goal_form__V_5_5 == (MR_Integer) 1);
#line 408 "goal_form.m"
    return hlds__goal_form__succeeded;
#line 408 "goal_form.m"
  }
#line 100 "goal_form.m"
}

#line 96 "goal_form.m"
MR_bool MR_CALL 
hlds__goal_form__goal_cannot_loop_2_p_0(
#line 96 "goal_form.m"
  MR_Word hlds__goal_form__ModuleInfo_3,
#line 96 "goal_form.m"
  MR_Word hlds__goal_form__Goal_4)
#line 96 "goal_form.m"
{
#line 405 "goal_form.m"
  {
#line 405 "goal_form.m"
    MR_bool hlds__goal_form__succeeded;
#line 405 "goal_form.m"
    MR_Word hlds__goal_form__V_5_5;
#line 405 "goal_form.m"
    MR_Word hlds__goal_form__V_6_6;

#line 406 "goal_form.m"
    {
#line 406 "goal_form.m"
      hlds__goal_form__V_6_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 406 "goal_form.m"
      MR_hl_field(MR_mktag(1), hlds__goal_form__V_6_6, 0) = ((MR_Box) (hlds__goal_form__ModuleInfo_3));
#line 406 "goal_form.m"
    }
#line 406 "goal_form.m"
    {
#line 406 "goal_form.m"
      hlds__goal_form__V_5_5 = hlds__goal_form__goal_can_loop_func_2_f_0(hlds__goal_form__V_6_6, hlds__goal_form__Goal_4);
    }
#line 406 "goal_form.m"
    hlds__goal_form__succeeded = (hlds__goal_form__V_5_5 == (MR_Integer) 0);
#line 405 "goal_form.m"
    return hlds__goal_form__succeeded;
#line 405 "goal_form.m"
  }
#line 96 "goal_form.m"
}

#line 84 "goal_form.m"
void MR_CALL 
hlds__goal_form__goal_can_loop_or_throw_4_p_0(
#line 84 "goal_form.m"
  MR_Word hlds__goal_form__Goal_5,
#line 84 "goal_form.m"
  MR_Word * hlds__goal_form__Result_6,
#line 84 "goal_form.m"
  MR_Word hlds__goal_form__STATE_VARIABLE_ModuleInfo_0_9,
#line 84 "goal_form.m"
  MR_Word * hlds__goal_form__STATE_VARIABLE_ModuleInfo_10)
#line 84 "goal_form.m"
{
#line 399 "goal_form.m"
  {
#line 399 "goal_form.m"
    MR_bool hlds__goal_form__succeeded;
#line 405 "goal_form.m"
    MR_Word hlds__goal_form__V_14_14;
#line 405 "goal_form.m"
    MR_Word hlds__goal_form__V_15_15;

#line 406 "goal_form.m"
    {
#line 406 "goal_form.m"
      hlds__goal_form__V_15_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 406 "goal_form.m"
      MR_hl_field(MR_mktag(1), hlds__goal_form__V_15_15, 0) = ((MR_Box) (hlds__goal_form__STATE_VARIABLE_ModuleInfo_0_9));
#line 406 "goal_form.m"
    }
#line 406 "goal_form.m"
    {
#line 406 "goal_form.m"
      hlds__goal_form__V_14_14 = hlds__goal_form__goal_can_loop_func_2_f_0(hlds__goal_form__V_15_15, hlds__goal_form__Goal_5);
    }
#line 406 "goal_form.m"
    hlds__goal_form__succeeded = (hlds__goal_form__V_14_14 == (MR_Integer) 0);
#line 399 "goal_form.m"
    if (hlds__goal_form__succeeded)
#line 391 "goal_form.m"
      {
#line 391 "goal_form.m"
        MR_Word hlds__goal_form__ThrowResult_8;

#line 391 "goal_form.m"
        {
#line 391 "goal_form.m"
          hlds__goal_form__goal_can_throw_4_p_0(hlds__goal_form__Goal_5, &hlds__goal_form__ThrowResult_8, hlds__goal_form__STATE_VARIABLE_ModuleInfo_0_9, hlds__goal_form__STATE_VARIABLE_ModuleInfo_10);
        }
#line 395 "goal_form.m"
#line 395 "goal_form.m"
        switch (hlds__goal_form__ThrowResult_8) {
#line 395 "goal_form.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 395 "goal_form.m"
          case (MR_Integer) 0:
#line 394 "goal_form.m"
            *hlds__goal_form__Result_6 = (MR_Integer) 0;
#line 395 "goal_form.m"
            break;
#line 395 "goal_form.m"
          case (MR_Integer) 1:
#line 397 "goal_form.m"
            *hlds__goal_form__Result_6 = (MR_Integer) 1;
#line 395 "goal_form.m"
            break;
#line 395 "goal_form.m"
        }
#line 391 "goal_form.m"
      }
#line 399 "goal_form.m"
    else
#line 400 "goal_form.m"
      {
#line 400 "goal_form.m"
        *hlds__goal_form__Result_6 = (MR_Integer) 0;
#line 400 "goal_form.m"
        *hlds__goal_form__STATE_VARIABLE_ModuleInfo_10 = hlds__goal_form__STATE_VARIABLE_ModuleInfo_0_9;
#line 400 "goal_form.m"
      }
#line 399 "goal_form.m"
  }
#line 84 "goal_form.m"
}

#line 78 "goal_form.m"
void MR_CALL 
hlds__goal_form__goal_can_throw_4_p_0(
#line 78 "goal_form.m"
  MR_Word hlds__goal_form__HeadVar__1_1,
#line 78 "goal_form.m"
  MR_Word * hlds__goal_form__Result_7,
#line 78 "goal_form.m"
  MR_Word hlds__goal_form__STATE_VARIABLE_ModuleInfo_0_10,
#line 78 "goal_form.m"
  MR_Word * hlds__goal_form__STATE_VARIABLE_ModuleInfo_11)
#line 78 "goal_form.m"
{
#line 253 "goal_form.m"
  {
#line 253 "goal_form.m"
    MR_bool hlds__goal_form__succeeded;
#line 253 "goal_form.m"
    MR_Word hlds__goal_form__GoalExpr_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__HeadVar__1_1, (MR_Integer) 0)));
#line 253 "goal_form.m"
    MR_Word hlds__goal_form__GoalInfo_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__HeadVar__1_1, (MR_Integer) 1)));
#line 253 "goal_form.m"
    MR_Word hlds__goal_form__Determinism_9;

#line 254 "goal_form.m"
    {
#line 254 "goal_form.m"
      hlds__goal_form__Determinism_9 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(hlds__goal_form__GoalInfo_6);
    }
#line 255 "goal_form.m"
    hlds__goal_form__succeeded = (hlds__goal_form__Determinism_9 == (MR_Integer) 6);
#line 255 "goal_form.m"
    hlds__goal_form__succeeded = !(hlds__goal_form__succeeded);
#line 257 "goal_form.m"
    if (hlds__goal_form__succeeded)
#line 256 "goal_form.m"
      {
#line 256 "goal_form.m"
        hlds__goal_form__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_99_97_110_95_116_104_114_111_119_95_50_95_95_91_50_93_95_48_5_p_0(hlds__goal_form__GoalExpr_5, hlds__goal_form__Result_7, hlds__goal_form__STATE_VARIABLE_ModuleInfo_0_10, hlds__goal_form__STATE_VARIABLE_ModuleInfo_11);
#line 256 "goal_form.m"
        return;
      }
#line 257 "goal_form.m"
    else
#line 258 "goal_form.m"
      {
#line 258 "goal_form.m"
        *hlds__goal_form__Result_7 = (MR_Integer) 0;
#line 258 "goal_form.m"
        *hlds__goal_form__STATE_VARIABLE_ModuleInfo_11 = hlds__goal_form__STATE_VARIABLE_ModuleInfo_0_10;
#line 258 "goal_form.m"
      }
#line 253 "goal_form.m"
  }
#line 78 "goal_form.m"
}

#line 39 "goal_form.m"
MR_bool MR_CALL 
hlds__goal_form__all_disjuncts_are_conj_of_unify_2_p_0(
#line 39 "goal_form.m"
  MR_Word hlds__goal_form__HeadVar__1_1,
#line 39 "goal_form.m"
  MR_Word hlds__goal_form__HeadVar__2_2)
#line 39 "goal_form.m"
{
#line 223 "goal_form.m"
  while (MR_TRUE)
#line 223 "goal_form.m"
    {
#line 223 "goal_form.m"
      /* tailcall optimized into a loop */
#line 223 "goal_form.m"
      {
#line 223 "goal_form.m"
        MR_bool hlds__goal_form__succeeded;

#line 223 "goal_form.m"
        if ((hlds__goal_form__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 223 "goal_form.m"
          hlds__goal_form__succeeded = MR_TRUE;
#line 223 "goal_form.m"
        else
#line 224 "goal_form.m"
          {
#line 224 "goal_form.m"
            MR_Word hlds__goal_form__TypeCtorInfo_10_14;
#line 224 "goal_form.m"
            MR_Word hlds__goal_form__Disjunct_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__HeadVar__2_2, (MR_Integer) 0)));
#line 224 "goal_form.m"
            MR_Word hlds__goal_form__Disjuncts_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__HeadVar__2_2, (MR_Integer) 1)));
#line 224 "goal_form.m"
            MR_Word hlds__goal_form__GoalInfo_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Disjunct_5, (MR_Integer) 1)));
#line 224 "goal_form.m"
            MR_Word hlds__goal_form__CodeModel_11;
#line 224 "goal_form.m"
            MR_Word hlds__goal_form__Conj_12;
#line 224 "goal_form.m"
            MR_Word hlds__goal_form__ToAssignVars_13;
#line 216 "goal_form.m"
            MR_Word hlds__goal_form___GoalExpr_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Disjunct_5, (MR_Integer) 0)));

#line 217 "goal_form.m"
            {
#line 217 "goal_form.m"
              hlds__goal_form__CodeModel_11 = hlds__code_model__goal_info_get_code_model_1_f_0(hlds__goal_form__GoalInfo_10);
            }
#line 218 "goal_form.m"
            hlds__goal_form__succeeded = (hlds__goal_form__CodeModel_11 == (MR_Integer) 0);
#line 224 "goal_form.m"
            if (hlds__goal_form__succeeded)
#line 224 "goal_form.m"
              {
#line 219 "goal_form.m"
                {
#line 219 "goal_form.m"
                  hlds__hlds_goal__goal_to_conj_list_2_p_0(hlds__goal_form__Disjunct_5, &hlds__goal_form__Conj_12);
                }
#line 220 "goal_form.m"
                {
#line 220 "goal_form.m"
                  hlds__goal_form__succeeded = hlds__goal_form__only_constant_goals_3_p_0(hlds__goal_form__Conj_12, hlds__goal_form__HeadVar__1_1, &hlds__goal_form__ToAssignVars_13);
                }
#line 224 "goal_form.m"
                if (hlds__goal_form__succeeded)
#line 224 "goal_form.m"
                  {
#line 7829 "hlds.goal_form.c"
                    hlds__goal_form__TypeCtorInfo_10_14 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 221 "goal_form.m"
                    {
#line 221 "goal_form.m"
                      hlds__goal_form__succeeded = parse_tree__set_of_var__is_empty_1_p_0(hlds__goal_form__TypeCtorInfo_10_14, hlds__goal_form__ToAssignVars_13);
                    }
#line 224 "goal_form.m"
                    if (hlds__goal_form__succeeded)
#line 226 "goal_form.m"
                      {
#line 226 "goal_form.m"
                        /* direct tailcall eliminated */
#line 226 "goal_form.m"
                        {
#line 226 "goal_form.m"
                          MR_Word hlds__goal_form__HeadVar__2__tmp_copy_2 = hlds__goal_form__Disjuncts_6;

#line 226 "goal_form.m"
                          hlds__goal_form__HeadVar__2_2 = hlds__goal_form__HeadVar__2__tmp_copy_2;
#line 226 "goal_form.m"
                        }
#line 226 "goal_form.m"
                        continue;
#line 226 "goal_form.m"
                      }
#line 224 "goal_form.m"
                  }
#line 224 "goal_form.m"
              }
#line 224 "goal_form.m"
          }
#line 223 "goal_form.m"
        return hlds__goal_form__succeeded;
#line 223 "goal_form.m"
      }
#line 223 "goal_form.m"
      break;
#line 223 "goal_form.m"
    }
#line 39 "goal_form.m"
}

#line 35 "goal_form.m"
MR_bool MR_CALL 
hlds__goal_form__goal_is_conj_of_unify_2_p_0(
#line 35 "goal_form.m"
  MR_Word hlds__goal_form__ToAssignVars0_3,
#line 35 "goal_form.m"
  MR_Word hlds__goal_form__Goal_4)
#line 35 "goal_form.m"
{
#line 215 "goal_form.m"
  {
#line 215 "goal_form.m"
    MR_bool hlds__goal_form__succeeded;
#line 215 "goal_form.m"
    MR_Word hlds__goal_form__TypeCtorInfo_10_10;
#line 215 "goal_form.m"
    MR_Word hlds__goal_form__GoalInfo_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Goal_4, (MR_Integer) 1)));
#line 215 "goal_form.m"
    MR_Word hlds__goal_form__CodeModel_7;
#line 215 "goal_form.m"
    MR_Word hlds__goal_form__Conj_8;
#line 215 "goal_form.m"
    MR_Word hlds__goal_form__ToAssignVars_9;
#line 216 "goal_form.m"
    MR_Word hlds__goal_form___GoalExpr_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Goal_4, (MR_Integer) 0)));

#line 217 "goal_form.m"
    {
#line 217 "goal_form.m"
      hlds__goal_form__CodeModel_7 = hlds__code_model__goal_info_get_code_model_1_f_0(hlds__goal_form__GoalInfo_6);
    }
#line 218 "goal_form.m"
    hlds__goal_form__succeeded = (hlds__goal_form__CodeModel_7 == (MR_Integer) 0);
#line 215 "goal_form.m"
    if (hlds__goal_form__succeeded)
#line 215 "goal_form.m"
      {
#line 219 "goal_form.m"
        {
#line 219 "goal_form.m"
          hlds__hlds_goal__goal_to_conj_list_2_p_0(hlds__goal_form__Goal_4, &hlds__goal_form__Conj_8);
        }
#line 220 "goal_form.m"
        {
#line 220 "goal_form.m"
          hlds__goal_form__succeeded = hlds__goal_form__only_constant_goals_3_p_0(hlds__goal_form__Conj_8, hlds__goal_form__ToAssignVars0_3, &hlds__goal_form__ToAssignVars_9);
        }
#line 215 "goal_form.m"
        if (hlds__goal_form__succeeded)
#line 215 "goal_form.m"
          {
#line 7923 "hlds.goal_form.c"
            hlds__goal_form__TypeCtorInfo_10_10 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 221 "goal_form.m"
            {
#line 221 "goal_form.m"
              return hlds__goal_form__succeeded = parse_tree__set_of_var__is_empty_1_p_0(hlds__goal_form__TypeCtorInfo_10_10, hlds__goal_form__ToAssignVars_9);
            }
#line 215 "goal_form.m"
          }
#line 215 "goal_form.m"
      }
#line 215 "goal_form.m"
    return hlds__goal_form__succeeded;
#line 215 "goal_form.m"
  }
#line 35 "goal_form.m"
}

void mercury__hlds__goal_form__init(void)
{
}

void mercury__hlds__goal_form__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&hlds__goal_form__hlds__goal_form__type_ctor_info_goal_loop_or_throw_status_0);
	MR_register_type_ctor_info(&hlds__goal_form__hlds__goal_form__type_ctor_info_goal_loop_status_0);
	MR_register_type_ctor_info(&hlds__goal_form__hlds__goal_form__type_ctor_info_goal_throw_status_0);
	MR_register_type_ctor_info(&hlds__goal_form__hlds__goal_form__type_ctor_info_has_subgoals_0);
}

void mercury__hlds__goal_form__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module hlds.goal_form. */
