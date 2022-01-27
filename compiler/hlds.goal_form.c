/*
** Automatically generated from `goal_form.m'
** by the Mercury compiler,
** version rotd-2015-09-18
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
#include "check_hlds.mih"
#include "hlds.mih"
#include "libs.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "transform_hlds.mih"
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
#include "hlds.status.mih"
#include "hlds.vartypes.mih"
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
#include "array.mih"
#include "assoc_list.mih"
#include "bag.mih"
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
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.exception_analysis.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 141 "hlds.goal_form.c"
static const MR_EnumFunctorDesc hlds__goal_form__hlds__goal_form__enum_functor_desc_goal_loop_or_throw_status_0_0;

#line 144 "hlds.goal_form.c"
static const MR_EnumFunctorDesc hlds__goal_form__hlds__goal_form__enum_functor_desc_goal_loop_or_throw_status_0_1;

#line 147 "hlds.goal_form.c"
static const MR_EnumFunctorDescPtr hlds__goal_form__hlds__goal_form__enum_value_ordered_goal_loop_or_throw_status_0[2];

#line 150 "hlds.goal_form.c"
static const MR_EnumFunctorDescPtr hlds__goal_form__hlds__goal_form__enum_name_ordered_goal_loop_or_throw_status_0[2];

#line 153 "hlds.goal_form.c"
static const MR_Integer hlds__goal_form__hlds__goal_form__functor_number_map_goal_loop_or_throw_status_0[2];

#line 156 "hlds.goal_form.c"
static const MR_EnumFunctorDesc hlds__goal_form__hlds__goal_form__enum_functor_desc_goal_loop_status_0_0;

#line 159 "hlds.goal_form.c"
static const MR_EnumFunctorDesc hlds__goal_form__hlds__goal_form__enum_functor_desc_goal_loop_status_0_1;

#line 162 "hlds.goal_form.c"
static const MR_EnumFunctorDescPtr hlds__goal_form__hlds__goal_form__enum_value_ordered_goal_loop_status_0[2];

#line 165 "hlds.goal_form.c"
static const MR_EnumFunctorDescPtr hlds__goal_form__hlds__goal_form__enum_name_ordered_goal_loop_status_0[2];

#line 168 "hlds.goal_form.c"
static const MR_Integer hlds__goal_form__hlds__goal_form__functor_number_map_goal_loop_status_0[2];

#line 171 "hlds.goal_form.c"
static const MR_EnumFunctorDesc hlds__goal_form__hlds__goal_form__enum_functor_desc_goal_throw_status_0_0;

#line 174 "hlds.goal_form.c"
static const MR_EnumFunctorDesc hlds__goal_form__hlds__goal_form__enum_functor_desc_goal_throw_status_0_1;

#line 177 "hlds.goal_form.c"
static const MR_EnumFunctorDescPtr hlds__goal_form__hlds__goal_form__enum_value_ordered_goal_throw_status_0[2];

#line 180 "hlds.goal_form.c"
static const MR_EnumFunctorDescPtr hlds__goal_form__hlds__goal_form__enum_name_ordered_goal_throw_status_0[2];

#line 183 "hlds.goal_form.c"
static const MR_Integer hlds__goal_form__hlds__goal_form__functor_number_map_goal_throw_status_0[2];

#line 186 "hlds.goal_form.c"
static const MR_EnumFunctorDesc hlds__goal_form__hlds__goal_form__enum_functor_desc_has_subgoals_0_0;

#line 189 "hlds.goal_form.c"
static const MR_EnumFunctorDesc hlds__goal_form__hlds__goal_form__enum_functor_desc_has_subgoals_0_1;

#line 192 "hlds.goal_form.c"
static const MR_EnumFunctorDescPtr hlds__goal_form__hlds__goal_form__enum_value_ordered_has_subgoals_0[2];

#line 195 "hlds.goal_form.c"
static const MR_EnumFunctorDescPtr hlds__goal_form__hlds__goal_form__enum_name_ordered_has_subgoals_0[2];

#line 198 "hlds.goal_form.c"
static const MR_Integer hlds__goal_form__hlds__goal_form__functor_number_map_has_subgoals_0[2];

#line 201 "hlds.goal_form.c"
static MR_bool MR_CALL 
hlds__goal_form____Unify____goal_loop_or_throw_status_0_0_10001(
#line 204 "hlds.goal_form.c"
  MR_Box hlds__goal_form__wrapper_arg_1,
#line 206 "hlds.goal_form.c"
  MR_Box hlds__goal_form__wrapper_arg_2);

#line 209 "hlds.goal_form.c"
static void MR_CALL 
hlds__goal_form____Compare____goal_loop_or_throw_status_0_0_10001(
#line 212 "hlds.goal_form.c"
  MR_Box * hlds__goal_form__wrapper_arg_1,
#line 214 "hlds.goal_form.c"
  MR_Box hlds__goal_form__wrapper_arg_2,
#line 216 "hlds.goal_form.c"
  MR_Box hlds__goal_form__wrapper_arg_3);

#line 219 "hlds.goal_form.c"
static MR_bool MR_CALL 
hlds__goal_form____Unify____goal_loop_status_0_0_10001(
#line 222 "hlds.goal_form.c"
  MR_Box hlds__goal_form__wrapper_arg_1,
#line 224 "hlds.goal_form.c"
  MR_Box hlds__goal_form__wrapper_arg_2);

#line 227 "hlds.goal_form.c"
static void MR_CALL 
hlds__goal_form____Compare____goal_loop_status_0_0_10001(
#line 230 "hlds.goal_form.c"
  MR_Box * hlds__goal_form__wrapper_arg_1,
#line 232 "hlds.goal_form.c"
  MR_Box hlds__goal_form__wrapper_arg_2,
#line 234 "hlds.goal_form.c"
  MR_Box hlds__goal_form__wrapper_arg_3);

#line 237 "hlds.goal_form.c"
static MR_bool MR_CALL 
hlds__goal_form____Unify____goal_throw_status_0_0_10001(
#line 240 "hlds.goal_form.c"
  MR_Box hlds__goal_form__wrapper_arg_1,
#line 242 "hlds.goal_form.c"
  MR_Box hlds__goal_form__wrapper_arg_2);

#line 245 "hlds.goal_form.c"
static void MR_CALL 
hlds__goal_form____Compare____goal_throw_status_0_0_10001(
#line 248 "hlds.goal_form.c"
  MR_Box * hlds__goal_form__wrapper_arg_1,
#line 250 "hlds.goal_form.c"
  MR_Box hlds__goal_form__wrapper_arg_2,
#line 252 "hlds.goal_form.c"
  MR_Box hlds__goal_form__wrapper_arg_3);

#line 255 "hlds.goal_form.c"
static MR_bool MR_CALL 
hlds__goal_form____Unify____has_subgoals_0_0_10001(
#line 258 "hlds.goal_form.c"
  MR_Box hlds__goal_form__wrapper_arg_1,
#line 260 "hlds.goal_form.c"
  MR_Box hlds__goal_form__wrapper_arg_2);

#line 263 "hlds.goal_form.c"
static void MR_CALL 
hlds__goal_form____Compare____has_subgoals_0_0_10001(
#line 266 "hlds.goal_form.c"
  MR_Box * hlds__goal_form__wrapper_arg_1,
#line 268 "hlds.goal_form.c"
  MR_Box hlds__goal_form__wrapper_arg_2,
#line 270 "hlds.goal_form.c"
  MR_Box hlds__goal_form__wrapper_arg_3);

#line 258 "goal_form.m"
static void MR_CALL 
hlds__goal_form__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_99_97_110_95_116_104_114_111_119_95_50_95_95_91_50_93_95_48_5_p_0(
#line 258 "goal_form.m"
  MR_Word hlds__goal_form__GoalExpr_6,
#line 258 "goal_form.m"
  MR_Word * hlds__goal_form__Result_8,
#line 258 "goal_form.m"
  MR_Word hlds__goal_form__STATE_VARIABLE_ModuleInfo_0_82,
#line 258 "goal_form.m"
  MR_Word * hlds__goal_form__STATE_VARIABLE_ModuleInfo_83);

#line 1164 "goal_form.m"
static MR_Word MR_CALL 
hlds__goal_form__case_list_has_foreign_1_f_0(
#line 1164 "goal_form.m"
  MR_Word hlds__goal_form__HeadVar__1_1);

#line 1154 "goal_form.m"
static MR_Word MR_CALL 
hlds__goal_form__goal_list_has_foreign_1_f_0(
#line 1154 "goal_form.m"
  MR_Word hlds__goal_form__HeadVar__1_1);

#line 1058 "goal_form.m"
static void MR_CALL 
hlds__goal_form__count_recursive_calls_cases_5_p_0(
#line 1058 "goal_form.m"
  MR_Word hlds__goal_form__HeadVar__1_1,
#line 1058 "goal_form.m"
  MR_Word hlds__goal_form__PredId_2,
#line 1058 "goal_form.m"
  MR_Integer hlds__goal_form__ProcId_3,
#line 1058 "goal_form.m"
  MR_Integer * hlds__goal_form__Min_4,
#line 1058 "goal_form.m"
  MR_Integer * hlds__goal_form__Max_5);

#line 1042 "goal_form.m"
static void MR_CALL 
hlds__goal_form__count_recursive_calls_disj_5_p_0(
#line 1042 "goal_form.m"
  MR_Word hlds__goal_form__HeadVar__1_1,
#line 1042 "goal_form.m"
  MR_Word hlds__goal_form__PredId_2,
#line 1042 "goal_form.m"
  MR_Integer hlds__goal_form__ProcId_3,
#line 1042 "goal_form.m"
  MR_Integer * hlds__goal_form__HeadVar__4_4,
#line 1042 "goal_form.m"
  MR_Integer * hlds__goal_form__HeadVar__5_5);

#line 1030 "goal_form.m"
static void MR_CALL 
hlds__goal_form__count_recursive_calls_conj_7_p_0(
#line 1030 "goal_form.m"
  MR_Word hlds__goal_form__HeadVar__1_1,
#line 1030 "goal_form.m"
  MR_Word hlds__goal_form__PredId_2,
#line 1030 "goal_form.m"
  MR_Integer hlds__goal_form__ProcId_3,
#line 1030 "goal_form.m"
  MR_Integer hlds__goal_form__HeadVar__4_4,
#line 1030 "goal_form.m"
  MR_Integer hlds__goal_form__HeadVar__5_5,
#line 1030 "goal_form.m"
  MR_Integer * hlds__goal_form__Min_6,
#line 1030 "goal_form.m"
  MR_Integer * hlds__goal_form__Max_7);

#line 932 "goal_form.m"
static MR_bool MR_CALL 
hlds__goal_form__cannot_fail_before_stack_flush_conj_1_p_0(
#line 932 "goal_form.m"
  MR_Word hlds__goal_form__HeadVar__1_1);

#line 907 "goal_form.m"
static MR_bool MR_CALL 
hlds__goal_form__cannot_stack_flush_cases_1_p_0(
#line 907 "goal_form.m"
  MR_Word hlds__goal_form__HeadVar__1_1);

#line 900 "goal_form.m"
static MR_bool MR_CALL 
hlds__goal_form__cannot_stack_flush_goals_1_p_0(
#line 900 "goal_form.m"
  MR_Word hlds__goal_form__HeadVar__1_1);

#line 886 "goal_form.m"
static MR_bool MR_CALL 
hlds__goal_form__cannot_stack_flush_2_1_p_0(
#line 886 "goal_form.m"
  MR_Word hlds__goal_form__HeadVar__1_1);

#line 871 "goal_form.m"
static void MR_CALL 
hlds__goal_form__cases_may_allocate_heap_2_p_0(
#line 871 "goal_form.m"
  MR_Word hlds__goal_form__HeadVar__1_1,
#line 871 "goal_form.m"
  MR_Word * hlds__goal_form__HeadVar__2_2);

#line 861 "goal_form.m"
static void MR_CALL 
hlds__goal_form__goal_list_may_allocate_heap_2_p_0(
#line 861 "goal_form.m"
  MR_Word hlds__goal_form__HeadVar__1_1,
#line 861 "goal_form.m"
  MR_Word * hlds__goal_form__HeadVar__2_2);

#line 765 "goal_form.m"
static void MR_CALL 
hlds__goal_form__goal_may_allocate_heap_2_2_p_0(
#line 765 "goal_form.m"
  MR_Word hlds__goal_form__GoalExpr_3,
#line 765 "goal_form.m"
  MR_Word * hlds__goal_form__May_4);

#line 742 "goal_form.m"
static MR_Word MR_CALL 
hlds__goal_form__goal_is_flat_list_1_f_0(
#line 742 "goal_form.m"
  MR_Word hlds__goal_form__HeadVar__1_1);

#line 699 "goal_form.m"
static MR_Word MR_CALL 
hlds__goal_form__goal_is_flat_expr_1_f_0(
#line 699 "goal_form.m"
  MR_Word hlds__goal_form__GoalExpr_3);

#line 685 "goal_form.m"
static MR_Word MR_CALL 
hlds__goal_form__case_list_can_throw_2_f_0(
#line 685 "goal_form.m"
  MR_Word hlds__goal_form__MaybeModuleInfo_1,
#line 685 "goal_form.m"
  MR_Word hlds__goal_form__HeadVar__2_2);

#line 675 "goal_form.m"
static MR_Word MR_CALL 
hlds__goal_form__goal_list_can_throw_2_f_0(
#line 675 "goal_form.m"
  MR_Word hlds__goal_form__MaybeModuleInfo_1,
#line 675 "goal_form.m"
  MR_Word hlds__goal_form__HeadVar__2_2);

#line 575 "goal_form.m"
static MR_Word MR_CALL 
hlds__goal_form__goal_expr_can_throw_2_f_0(
#line 575 "goal_form.m"
  MR_Word hlds__goal_form__MaybeModuleInfo_4,
#line 575 "goal_form.m"
  MR_Word hlds__goal_form__GoalExpr_5);

#line 564 "goal_form.m"
static MR_Word MR_CALL 
hlds__goal_form__goal_can_throw_func_2_f_0(
#line 564 "goal_form.m"
  MR_Word hlds__goal_form__MaybeModuleInfo_4,
#line 564 "goal_form.m"
  MR_Word hlds__goal_form__HeadVar__2_2);

#line 552 "goal_form.m"
static MR_Word MR_CALL 
hlds__goal_form__case_list_can_loop_2_f_0(
#line 552 "goal_form.m"
  MR_Word hlds__goal_form__MaybeModuleInfo_1,
#line 552 "goal_form.m"
  MR_Word hlds__goal_form__HeadVar__2_2);

#line 542 "goal_form.m"
static MR_Word MR_CALL 
hlds__goal_form__goal_list_can_loop_2_f_0(
#line 542 "goal_form.m"
  MR_Word hlds__goal_form__MaybeModuleInfo_1,
#line 542 "goal_form.m"
  MR_Word hlds__goal_form__HeadVar__2_2);

#line 428 "goal_form.m"
static MR_Word MR_CALL 
hlds__goal_form__goal_can_loop_func_2_f_0(
#line 428 "goal_form.m"
  MR_Word hlds__goal_form__MaybeModuleInfo_4,
#line 428 "goal_form.m"
  MR_Word hlds__goal_form__Goal_5);

#line 369 "goal_form.m"
static void MR_CALL 
hlds__goal_form__cases_can_throw_4_p_0(
#line 369 "goal_form.m"
  MR_Word hlds__goal_form__HeadVar__1_1,
#line 369 "goal_form.m"
  MR_Word * hlds__goal_form__HeadVar__2_2,
#line 369 "goal_form.m"
  MR_Word hlds__goal_form__STATE_VARIABLE_ModuleInfo_0_3,
#line 369 "goal_form.m"
  MR_Word * hlds__goal_form__STATE_VARIABLE_ModuleInfo_4);

#line 355 "goal_form.m"
static void MR_CALL 
hlds__goal_form__goals_can_throw_4_p_0(
#line 355 "goal_form.m"
  MR_Word hlds__goal_form__HeadVar__1_1,
#line 355 "goal_form.m"
  MR_Word * hlds__goal_form__HeadVar__2_2,
#line 355 "goal_form.m"
  MR_Word hlds__goal_form__STATE_VARIABLE_ModuleInfo_0_3,
#line 355 "goal_form.m"
  MR_Word * hlds__goal_form__STATE_VARIABLE_ModuleInfo_4);

#line 225 "goal_form.m"
static MR_bool MR_CALL 
hlds__goal_form__only_constant_goals_3_p_0(
#line 225 "goal_form.m"
  MR_Word hlds__goal_form__HeadVar__1_1,
#line 225 "goal_form.m"
  MR_Word hlds__goal_form__STATE_VARIABLE_ToAssignVars_0_2,
#line 225 "goal_form.m"
  MR_Word * hlds__goal_form__STATE_VARIABLE_ToAssignVars_3);







#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



#line 506 "hlds.goal_form.c"
static const MR_EnumFunctorDesc hlds__goal_form__hlds__goal_form__enum_functor_desc_goal_loop_or_throw_status_0_0 = {
  (MR_String) "can_loop_or_throw",
  (MR_Integer) 0
};

#line 512 "hlds.goal_form.c"
static const MR_EnumFunctorDesc hlds__goal_form__hlds__goal_form__enum_functor_desc_goal_loop_or_throw_status_0_1 = {
  (MR_String) "cannot_loop_or_throw",
  (MR_Integer) 1
};

#line 518 "hlds.goal_form.c"
static const MR_EnumFunctorDescPtr hlds__goal_form__hlds__goal_form__enum_value_ordered_goal_loop_or_throw_status_0[2] = {
  &hlds__goal_form__hlds__goal_form__enum_functor_desc_goal_loop_or_throw_status_0_0,
  &hlds__goal_form__hlds__goal_form__enum_functor_desc_goal_loop_or_throw_status_0_1
};

#line 524 "hlds.goal_form.c"
static const MR_EnumFunctorDescPtr hlds__goal_form__hlds__goal_form__enum_name_ordered_goal_loop_or_throw_status_0[2] = {
  &hlds__goal_form__hlds__goal_form__enum_functor_desc_goal_loop_or_throw_status_0_0,
  &hlds__goal_form__hlds__goal_form__enum_functor_desc_goal_loop_or_throw_status_0_1
};

#line 530 "hlds.goal_form.c"
static const MR_Integer hlds__goal_form__hlds__goal_form__functor_number_map_goal_loop_or_throw_status_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 536 "hlds.goal_form.c"
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

#line 553 "hlds.goal_form.c"
static const MR_EnumFunctorDesc hlds__goal_form__hlds__goal_form__enum_functor_desc_goal_loop_status_0_0 = {
  (MR_String) "can_loop",
  (MR_Integer) 0
};

#line 559 "hlds.goal_form.c"
static const MR_EnumFunctorDesc hlds__goal_form__hlds__goal_form__enum_functor_desc_goal_loop_status_0_1 = {
  (MR_String) "cannot_loop",
  (MR_Integer) 1
};

#line 565 "hlds.goal_form.c"
static const MR_EnumFunctorDescPtr hlds__goal_form__hlds__goal_form__enum_value_ordered_goal_loop_status_0[2] = {
  &hlds__goal_form__hlds__goal_form__enum_functor_desc_goal_loop_status_0_0,
  &hlds__goal_form__hlds__goal_form__enum_functor_desc_goal_loop_status_0_1
};

#line 571 "hlds.goal_form.c"
static const MR_EnumFunctorDescPtr hlds__goal_form__hlds__goal_form__enum_name_ordered_goal_loop_status_0[2] = {
  &hlds__goal_form__hlds__goal_form__enum_functor_desc_goal_loop_status_0_0,
  &hlds__goal_form__hlds__goal_form__enum_functor_desc_goal_loop_status_0_1
};

#line 577 "hlds.goal_form.c"
static const MR_Integer hlds__goal_form__hlds__goal_form__functor_number_map_goal_loop_status_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 583 "hlds.goal_form.c"
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

#line 600 "hlds.goal_form.c"
static const MR_EnumFunctorDesc hlds__goal_form__hlds__goal_form__enum_functor_desc_goal_throw_status_0_0 = {
  (MR_String) "can_throw",
  (MR_Integer) 0
};

#line 606 "hlds.goal_form.c"
static const MR_EnumFunctorDesc hlds__goal_form__hlds__goal_form__enum_functor_desc_goal_throw_status_0_1 = {
  (MR_String) "cannot_throw",
  (MR_Integer) 1
};

#line 612 "hlds.goal_form.c"
static const MR_EnumFunctorDescPtr hlds__goal_form__hlds__goal_form__enum_value_ordered_goal_throw_status_0[2] = {
  &hlds__goal_form__hlds__goal_form__enum_functor_desc_goal_throw_status_0_0,
  &hlds__goal_form__hlds__goal_form__enum_functor_desc_goal_throw_status_0_1
};

#line 618 "hlds.goal_form.c"
static const MR_EnumFunctorDescPtr hlds__goal_form__hlds__goal_form__enum_name_ordered_goal_throw_status_0[2] = {
  &hlds__goal_form__hlds__goal_form__enum_functor_desc_goal_throw_status_0_0,
  &hlds__goal_form__hlds__goal_form__enum_functor_desc_goal_throw_status_0_1
};

#line 624 "hlds.goal_form.c"
static const MR_Integer hlds__goal_form__hlds__goal_form__functor_number_map_goal_throw_status_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 630 "hlds.goal_form.c"
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

#line 647 "hlds.goal_form.c"
static const MR_EnumFunctorDesc hlds__goal_form__hlds__goal_form__enum_functor_desc_has_subgoals_0_0 = {
  (MR_String) "has_subgoals",
  (MR_Integer) 0
};

#line 653 "hlds.goal_form.c"
static const MR_EnumFunctorDesc hlds__goal_form__hlds__goal_form__enum_functor_desc_has_subgoals_0_1 = {
  (MR_String) "does_not_have_subgoals",
  (MR_Integer) 1
};

#line 659 "hlds.goal_form.c"
static const MR_EnumFunctorDescPtr hlds__goal_form__hlds__goal_form__enum_value_ordered_has_subgoals_0[2] = {
  &hlds__goal_form__hlds__goal_form__enum_functor_desc_has_subgoals_0_0,
  &hlds__goal_form__hlds__goal_form__enum_functor_desc_has_subgoals_0_1
};

#line 665 "hlds.goal_form.c"
static const MR_EnumFunctorDescPtr hlds__goal_form__hlds__goal_form__enum_name_ordered_has_subgoals_0[2] = {
  &hlds__goal_form__hlds__goal_form__enum_functor_desc_has_subgoals_0_1,
  &hlds__goal_form__hlds__goal_form__enum_functor_desc_has_subgoals_0_0
};

#line 671 "hlds.goal_form.c"
static const MR_Integer hlds__goal_form__hlds__goal_form__functor_number_map_has_subgoals_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 677 "hlds.goal_form.c"
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

#line 694 "hlds.goal_form.c"
static MR_bool MR_CALL 
hlds__goal_form____Unify____goal_loop_or_throw_status_0_0_10001(
#line 697 "hlds.goal_form.c"
  MR_Box hlds__goal_form__wrapper_arg_1,
#line 699 "hlds.goal_form.c"
  MR_Box hlds__goal_form__wrapper_arg_2)
#line 701 "hlds.goal_form.c"
{
#line 703 "hlds.goal_form.c"
  {
#line 705 "hlds.goal_form.c"
    MR_bool hlds__goal_form__succeeded;

#line 708 "hlds.goal_form.c"
    {
#line 710 "hlds.goal_form.c"
      hlds__goal_form__succeeded = hlds__goal_form____Unify____goal_loop_or_throw_status_0_0(((MR_Word) hlds__goal_form__wrapper_arg_1), ((MR_Word) hlds__goal_form__wrapper_arg_2));
    }
#line 713 "hlds.goal_form.c"
    return hlds__goal_form__succeeded;
#line 715 "hlds.goal_form.c"
  }
#line 717 "hlds.goal_form.c"
}

#line 720 "hlds.goal_form.c"
static void MR_CALL 
hlds__goal_form____Compare____goal_loop_or_throw_status_0_0_10001(
#line 723 "hlds.goal_form.c"
  MR_Box * hlds__goal_form__wrapper_arg_1,
#line 725 "hlds.goal_form.c"
  MR_Box hlds__goal_form__wrapper_arg_2,
#line 727 "hlds.goal_form.c"
  MR_Box hlds__goal_form__wrapper_arg_3)
#line 729 "hlds.goal_form.c"
{
#line 731 "hlds.goal_form.c"
  {
#line 733 "hlds.goal_form.c"
    MR_Word hlds__goal_form__conv0_HeadVar__1_1;

#line 736 "hlds.goal_form.c"
    {
#line 738 "hlds.goal_form.c"
      hlds__goal_form____Compare____goal_loop_or_throw_status_0_0(&hlds__goal_form__conv0_HeadVar__1_1, ((MR_Word) hlds__goal_form__wrapper_arg_2), ((MR_Word) hlds__goal_form__wrapper_arg_3));
    }
#line 741 "hlds.goal_form.c"
    *hlds__goal_form__wrapper_arg_1 = ((MR_Box) (hlds__goal_form__conv0_HeadVar__1_1));
#line 743 "hlds.goal_form.c"
  }
#line 745 "hlds.goal_form.c"
}

#line 748 "hlds.goal_form.c"
static MR_bool MR_CALL 
hlds__goal_form____Unify____goal_loop_status_0_0_10001(
#line 751 "hlds.goal_form.c"
  MR_Box hlds__goal_form__wrapper_arg_1,
#line 753 "hlds.goal_form.c"
  MR_Box hlds__goal_form__wrapper_arg_2)
#line 755 "hlds.goal_form.c"
{
#line 757 "hlds.goal_form.c"
  {
#line 759 "hlds.goal_form.c"
    MR_bool hlds__goal_form__succeeded;

#line 762 "hlds.goal_form.c"
    {
#line 764 "hlds.goal_form.c"
      hlds__goal_form__succeeded = hlds__goal_form____Unify____goal_loop_status_0_0(((MR_Word) hlds__goal_form__wrapper_arg_1), ((MR_Word) hlds__goal_form__wrapper_arg_2));
    }
#line 767 "hlds.goal_form.c"
    return hlds__goal_form__succeeded;
#line 769 "hlds.goal_form.c"
  }
#line 771 "hlds.goal_form.c"
}

#line 774 "hlds.goal_form.c"
static void MR_CALL 
hlds__goal_form____Compare____goal_loop_status_0_0_10001(
#line 777 "hlds.goal_form.c"
  MR_Box * hlds__goal_form__wrapper_arg_1,
#line 779 "hlds.goal_form.c"
  MR_Box hlds__goal_form__wrapper_arg_2,
#line 781 "hlds.goal_form.c"
  MR_Box hlds__goal_form__wrapper_arg_3)
#line 783 "hlds.goal_form.c"
{
#line 785 "hlds.goal_form.c"
  {
#line 787 "hlds.goal_form.c"
    MR_Word hlds__goal_form__conv0_HeadVar__1_1;

#line 790 "hlds.goal_form.c"
    {
#line 792 "hlds.goal_form.c"
      hlds__goal_form____Compare____goal_loop_status_0_0(&hlds__goal_form__conv0_HeadVar__1_1, ((MR_Word) hlds__goal_form__wrapper_arg_2), ((MR_Word) hlds__goal_form__wrapper_arg_3));
    }
#line 795 "hlds.goal_form.c"
    *hlds__goal_form__wrapper_arg_1 = ((MR_Box) (hlds__goal_form__conv0_HeadVar__1_1));
#line 797 "hlds.goal_form.c"
  }
#line 799 "hlds.goal_form.c"
}

#line 802 "hlds.goal_form.c"
static MR_bool MR_CALL 
hlds__goal_form____Unify____goal_throw_status_0_0_10001(
#line 805 "hlds.goal_form.c"
  MR_Box hlds__goal_form__wrapper_arg_1,
#line 807 "hlds.goal_form.c"
  MR_Box hlds__goal_form__wrapper_arg_2)
#line 809 "hlds.goal_form.c"
{
#line 811 "hlds.goal_form.c"
  {
#line 813 "hlds.goal_form.c"
    MR_bool hlds__goal_form__succeeded;

#line 816 "hlds.goal_form.c"
    {
#line 818 "hlds.goal_form.c"
      hlds__goal_form__succeeded = hlds__goal_form____Unify____goal_throw_status_0_0(((MR_Word) hlds__goal_form__wrapper_arg_1), ((MR_Word) hlds__goal_form__wrapper_arg_2));
    }
#line 821 "hlds.goal_form.c"
    return hlds__goal_form__succeeded;
#line 823 "hlds.goal_form.c"
  }
#line 825 "hlds.goal_form.c"
}

#line 828 "hlds.goal_form.c"
static void MR_CALL 
hlds__goal_form____Compare____goal_throw_status_0_0_10001(
#line 831 "hlds.goal_form.c"
  MR_Box * hlds__goal_form__wrapper_arg_1,
#line 833 "hlds.goal_form.c"
  MR_Box hlds__goal_form__wrapper_arg_2,
#line 835 "hlds.goal_form.c"
  MR_Box hlds__goal_form__wrapper_arg_3)
#line 837 "hlds.goal_form.c"
{
#line 839 "hlds.goal_form.c"
  {
#line 841 "hlds.goal_form.c"
    MR_Word hlds__goal_form__conv0_HeadVar__1_1;

#line 844 "hlds.goal_form.c"
    {
#line 846 "hlds.goal_form.c"
      hlds__goal_form____Compare____goal_throw_status_0_0(&hlds__goal_form__conv0_HeadVar__1_1, ((MR_Word) hlds__goal_form__wrapper_arg_2), ((MR_Word) hlds__goal_form__wrapper_arg_3));
    }
#line 849 "hlds.goal_form.c"
    *hlds__goal_form__wrapper_arg_1 = ((MR_Box) (hlds__goal_form__conv0_HeadVar__1_1));
#line 851 "hlds.goal_form.c"
  }
#line 853 "hlds.goal_form.c"
}

#line 856 "hlds.goal_form.c"
static MR_bool MR_CALL 
hlds__goal_form____Unify____has_subgoals_0_0_10001(
#line 859 "hlds.goal_form.c"
  MR_Box hlds__goal_form__wrapper_arg_1,
#line 861 "hlds.goal_form.c"
  MR_Box hlds__goal_form__wrapper_arg_2)
#line 863 "hlds.goal_form.c"
{
#line 865 "hlds.goal_form.c"
  {
#line 867 "hlds.goal_form.c"
    MR_bool hlds__goal_form__succeeded;

#line 870 "hlds.goal_form.c"
    {
#line 872 "hlds.goal_form.c"
      hlds__goal_form__succeeded = hlds__goal_form____Unify____has_subgoals_0_0(((MR_Word) hlds__goal_form__wrapper_arg_1), ((MR_Word) hlds__goal_form__wrapper_arg_2));
    }
#line 875 "hlds.goal_form.c"
    return hlds__goal_form__succeeded;
#line 877 "hlds.goal_form.c"
  }
#line 879 "hlds.goal_form.c"
}

#line 882 "hlds.goal_form.c"
static void MR_CALL 
hlds__goal_form____Compare____has_subgoals_0_0_10001(
#line 885 "hlds.goal_form.c"
  MR_Box * hlds__goal_form__wrapper_arg_1,
#line 887 "hlds.goal_form.c"
  MR_Box hlds__goal_form__wrapper_arg_2,
#line 889 "hlds.goal_form.c"
  MR_Box hlds__goal_form__wrapper_arg_3)
#line 891 "hlds.goal_form.c"
{
#line 893 "hlds.goal_form.c"
  {
#line 895 "hlds.goal_form.c"
    MR_Word hlds__goal_form__conv0_HeadVar__1_1;

#line 898 "hlds.goal_form.c"
    {
#line 900 "hlds.goal_form.c"
      hlds__goal_form____Compare____has_subgoals_0_0(&hlds__goal_form__conv0_HeadVar__1_1, ((MR_Word) hlds__goal_form__wrapper_arg_2), ((MR_Word) hlds__goal_form__wrapper_arg_3));
    }
#line 903 "hlds.goal_form.c"
    *hlds__goal_form__wrapper_arg_1 = ((MR_Box) (hlds__goal_form__conv0_HeadVar__1_1));
#line 905 "hlds.goal_form.c"
  }
#line 907 "hlds.goal_form.c"
}

#line 258 "goal_form.m"
static void MR_CALL 
hlds__goal_form__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_99_97_110_95_116_104_114_111_119_95_50_95_95_91_50_93_95_48_5_p_0(
#line 258 "goal_form.m"
  MR_Word hlds__goal_form__GoalExpr_6,
#line 258 "goal_form.m"
  MR_Word * hlds__goal_form__Result_8,
#line 258 "goal_form.m"
  MR_Word hlds__goal_form__STATE_VARIABLE_ModuleInfo_0_82,
#line 258 "goal_form.m"
  MR_Word * hlds__goal_form__STATE_VARIABLE_ModuleInfo_83)
#line 258 "goal_form.m"
{
#line 270 "goal_form.m"
  {
#line 270 "goal_form.m"
    MR_bool hlds__goal_form__succeeded;

#line 270 "goal_form.m"
#line 270 "goal_form.m"
    switch (MR_tag((MR_Word) hlds__goal_form__GoalExpr_6)) {
#line 270 "goal_form.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 270 "goal_form.m"
      case (MR_Integer) 0:
#line 307 "goal_form.m"
        {
#line 307 "goal_form.m"
          MR_Word hlds__goal_form__SubGoal_57 = (MR_Word) MR_body(((MR_Word) hlds__goal_form__GoalExpr_6), (MR_Integer) 0);

#line 308 "goal_form.m"
          {
#line 308 "goal_form.m"
            hlds__goal_form__goal_can_throw_4_p_0(hlds__goal_form__SubGoal_57, hlds__goal_form__Result_8, hlds__goal_form__STATE_VARIABLE_ModuleInfo_0_82, hlds__goal_form__STATE_VARIABLE_ModuleInfo_83);
#line 308 "goal_form.m"
            return;
          }
#line 307 "goal_form.m"
        }
#line 270 "goal_form.m"
        break;
#line 270 "goal_form.m"
      case (MR_Integer) 1:
#line 293 "goal_form.m"
        {
#line 293 "goal_form.m"
          MR_Word hlds__goal_form__Uni_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__GoalExpr_6, (MR_Integer) 3)));
#line 293 "goal_form.m"
          MR_Word hlds__goal_form__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__GoalExpr_6, (MR_Integer) 0)));
#line 293 "goal_form.m"
          MR_Word hlds__goal_form__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__GoalExpr_6, (MR_Integer) 1)));
#line 293 "goal_form.m"
          MR_Word hlds__goal_form__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__GoalExpr_6, (MR_Integer) 2)));
#line 293 "goal_form.m"
          MR_Word hlds__goal_form__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__GoalExpr_6, (MR_Integer) 4)));

#line 298 "goal_form.m"
#line 298 "goal_form.m"
          switch (MR_tag((MR_Word) hlds__goal_form__Uni_35)) {
#line 298 "goal_form.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 298 "goal_form.m"
            case (MR_Integer) 0:
#line 298 "goal_form.m"
            case (MR_Integer) 1:
#line 298 "goal_form.m"
            case (MR_Integer) 2:
#line 304 "goal_form.m"
              *hlds__goal_form__Result_8 = (MR_Integer) 1;
#line 298 "goal_form.m"
              break;
#line 298 "goal_form.m"
            case (MR_Integer) 3:
#line 298 "goal_form.m"
#line 298 "goal_form.m"
              switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__Uni_35, (MR_Integer) 0)))) {
#line 298 "goal_form.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 298 "goal_form.m"
                case (MR_Integer) 0:
#line 304 "goal_form.m"
                  *hlds__goal_form__Result_8 = (MR_Integer) 1;
#line 298 "goal_form.m"
                  break;
#line 298 "goal_form.m"
                case (MR_Integer) 1:
#line 297 "goal_form.m"
                  *hlds__goal_form__Result_8 = (MR_Integer) 0;
#line 298 "goal_form.m"
                  break;
#line 298 "goal_form.m"
              }
#line 298 "goal_form.m"
              break;
#line 298 "goal_form.m"
          }
#line 293 "goal_form.m"
          *hlds__goal_form__STATE_VARIABLE_ModuleInfo_83 = hlds__goal_form__STATE_VARIABLE_ModuleInfo_0_82;
#line 293 "goal_form.m"
        }
#line 270 "goal_form.m"
        break;
#line 270 "goal_form.m"
      case (MR_Integer) 2:
#line 273 "goal_form.m"
        {
#line 273 "goal_form.m"
          MR_Word hlds__goal_form__PredId_16 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__GoalExpr_6, (MR_Integer) 0)));
#line 273 "goal_form.m"
          MR_Integer hlds__goal_form__ProcId_17 = ((MR_Integer) (MR_hl_field(MR_mktag(2), hlds__goal_form__GoalExpr_6, (MR_Integer) 1)));
#line 273 "goal_form.m"
          MR_Word hlds__goal_form__Status_22;
#line 273 "goal_form.m"
          MR_Word hlds__goal_form__V_92_92;
#line 273 "goal_form.m"
          MR_Word hlds__goal_form__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__GoalExpr_6, (MR_Integer) 2)));
#line 273 "goal_form.m"
          MR_Word hlds__goal_form__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__GoalExpr_6, (MR_Integer) 3)));
#line 273 "goal_form.m"
          MR_Word hlds__goal_form__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__GoalExpr_6, (MR_Integer) 4)));
#line 273 "goal_form.m"
          MR_Word hlds__goal_form__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__GoalExpr_6, (MR_Integer) 5)));

#line 274 "goal_form.m"
          {
#line 274 "goal_form.m"
            hlds__goal_form__V_92_92 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 274 "goal_form.m"
            MR_hl_field(MR_mktag(0), hlds__goal_form__V_92_92, 0) = ((MR_Box) (hlds__goal_form__PredId_16));
#line 274 "goal_form.m"
            MR_hl_field(MR_mktag(0), hlds__goal_form__V_92_92, 1) = ((MR_Box) (hlds__goal_form__ProcId_17));
#line 274 "goal_form.m"
          }
#line 274 "goal_form.m"
          {
#line 274 "goal_form.m"
            transform_hlds__exception_analysis__lookup_exception_analysis_result_4_p_0(hlds__goal_form__V_92_92, &hlds__goal_form__Status_22, hlds__goal_form__STATE_VARIABLE_ModuleInfo_0_82, hlds__goal_form__STATE_VARIABLE_ModuleInfo_83);
          }
#line 279 "goal_form.m"
#line 279 "goal_form.m"
          switch (MR_tag((MR_Word) hlds__goal_form__Status_22)) {
#line 279 "goal_form.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 279 "goal_form.m"
            case (MR_Integer) 0:
#line 279 "goal_form.m"
#line 279 "goal_form.m"
              switch (MR_unmkbody(hlds__goal_form__Status_22)) {
#line 279 "goal_form.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 279 "goal_form.m"
                case (MR_Integer) 0:
#line 278 "goal_form.m"
                  *hlds__goal_form__Result_8 = (MR_Integer) 1;
#line 279 "goal_form.m"
                  break;
#line 279 "goal_form.m"
                case (MR_Integer) 1:
#line 283 "goal_form.m"
                  *hlds__goal_form__Result_8 = (MR_Integer) 0;
#line 279 "goal_form.m"
                  break;
#line 279 "goal_form.m"
              }
#line 279 "goal_form.m"
              break;
#line 279 "goal_form.m"
            case (MR_Integer) 1:
#line 283 "goal_form.m"
              *hlds__goal_form__Result_8 = (MR_Integer) 0;
#line 279 "goal_form.m"
              break;
#line 279 "goal_form.m"
          }
#line 273 "goal_form.m"
        }
#line 270 "goal_form.m"
        break;
#line 270 "goal_form.m"
      case (MR_Integer) 3:
#line 270 "goal_form.m"
#line 270 "goal_form.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_6, (MR_Integer) 0)))) {
#line 270 "goal_form.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 270 "goal_form.m"
          case (MR_Integer) 0:
#line 286 "goal_form.m"
            {
#line 288 "goal_form.m"
              *hlds__goal_form__Result_8 = (MR_Integer) 0;
#line 286 "goal_form.m"
              *hlds__goal_form__STATE_VARIABLE_ModuleInfo_83 = hlds__goal_form__STATE_VARIABLE_ModuleInfo_0_82;
#line 286 "goal_form.m"
            }
#line 270 "goal_form.m"
            break;
#line 270 "goal_form.m"
          case (MR_Integer) 1:
#line 324 "goal_form.m"
            {
#line 324 "goal_form.m"
              MR_Word hlds__goal_form__Attributes_61 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_6, (MR_Integer) 1)));
#line 324 "goal_form.m"
              MR_Word hlds__goal_form__ExceptionStatus_68;
#line 324 "goal_form.m"
              MR_Word hlds__goal_form__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_6, (MR_Integer) 2)));
#line 324 "goal_form.m"
              MR_Integer hlds__goal_form__V_63_63 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_6, (MR_Integer) 3)));
#line 324 "goal_form.m"
              MR_Word hlds__goal_form__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_6, (MR_Integer) 4)));
#line 324 "goal_form.m"
              MR_Word hlds__goal_form__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_6, (MR_Integer) 5)));
#line 324 "goal_form.m"
              MR_Word hlds__goal_form__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_6, (MR_Integer) 6)));
#line 324 "goal_form.m"
              MR_Word hlds__goal_form__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_6, (MR_Integer) 7)));

#line 325 "goal_form.m"
              {
#line 325 "goal_form.m"
                hlds__goal_form__ExceptionStatus_68 = parse_tree__prog_data__get_may_throw_exception_1_f_0(hlds__goal_form__Attributes_61);
              }
#line 329 "goal_form.m"
#line 329 "goal_form.m"
              switch (hlds__goal_form__ExceptionStatus_68) {
#line 329 "goal_form.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 329 "goal_form.m"
                case (MR_Integer) 1:
#line 330 "goal_form.m"
                  {
#line 330 "goal_form.m"
                    MR_Word hlds__goal_form__V_88_88;

#line 331 "goal_form.m"
                    {
#line 331 "goal_form.m"
                      hlds__goal_form__V_88_88 = parse_tree__prog_data__get_may_call_mercury_1_f_0(hlds__goal_form__Attributes_61);
                    }
#line 331 "goal_form.m"
                    hlds__goal_form__succeeded = (hlds__goal_form__V_88_88 == (MR_Integer) 1);
#line 330 "goal_form.m"
                  }
#line 329 "goal_form.m"
                  break;
#line 329 "goal_form.m"
                case (MR_Integer) 0:
#line 328 "goal_form.m"
                  hlds__goal_form__succeeded = MR_TRUE;
#line 329 "goal_form.m"
                  break;
#line 329 "goal_form.m"
              }
#line 335 "goal_form.m"
              if (hlds__goal_form__succeeded)
#line 334 "goal_form.m"
                *hlds__goal_form__Result_8 = (MR_Integer) 1;
#line 335 "goal_form.m"
              else
#line 336 "goal_form.m"
                *hlds__goal_form__Result_8 = (MR_Integer) 0;
#line 324 "goal_form.m"
              *hlds__goal_form__STATE_VARIABLE_ModuleInfo_83 = hlds__goal_form__STATE_VARIABLE_ModuleInfo_0_82;
#line 324 "goal_form.m"
            }
#line 270 "goal_form.m"
            break;
#line 270 "goal_form.m"
          case (MR_Integer) 2:
#line 270 "goal_form.m"
            {
#line 270 "goal_form.m"
              MR_Word hlds__goal_form__Goals_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_6, (MR_Integer) 2)));
#line 264 "goal_form.m"
              MR_Word hlds__goal_form__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_6, (MR_Integer) 1)));

#line 271 "goal_form.m"
              {
#line 271 "goal_form.m"
                hlds__goal_form__goals_can_throw_4_p_0(hlds__goal_form__Goals_11, hlds__goal_form__Result_8, hlds__goal_form__STATE_VARIABLE_ModuleInfo_0_82, hlds__goal_form__STATE_VARIABLE_ModuleInfo_83);
#line 271 "goal_form.m"
                return;
              }
#line 270 "goal_form.m"
            }
#line 270 "goal_form.m"
            break;
#line 270 "goal_form.m"
          case (MR_Integer) 3:
#line 270 "goal_form.m"
            {
#line 270 "goal_form.m"
              MR_Word hlds__goal_form__Goals_99 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_6, (MR_Integer) 1)));

#line 271 "goal_form.m"
              {
#line 271 "goal_form.m"
                hlds__goal_form__goals_can_throw_4_p_0(hlds__goal_form__Goals_99, hlds__goal_form__Result_8, hlds__goal_form__STATE_VARIABLE_ModuleInfo_0_82, hlds__goal_form__STATE_VARIABLE_ModuleInfo_83);
#line 271 "goal_form.m"
                return;
              }
#line 270 "goal_form.m"
            }
#line 270 "goal_form.m"
            break;
#line 270 "goal_form.m"
          case (MR_Integer) 4:
#line 290 "goal_form.m"
            {
#line 290 "goal_form.m"
              MR_Word hlds__goal_form__Cases_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_6, (MR_Integer) 3)));
#line 290 "goal_form.m"
              MR_Word hlds__goal_form__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_6, (MR_Integer) 1)));
#line 290 "goal_form.m"
              MR_Word hlds__goal_form__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_6, (MR_Integer) 2)));

#line 291 "goal_form.m"
              {
#line 291 "goal_form.m"
                hlds__goal_form__cases_can_throw_4_p_0(hlds__goal_form__Cases_31, hlds__goal_form__Result_8, hlds__goal_form__STATE_VARIABLE_ModuleInfo_0_82, hlds__goal_form__STATE_VARIABLE_ModuleInfo_83);
#line 291 "goal_form.m"
                return;
              }
#line 290 "goal_form.m"
            }
#line 270 "goal_form.m"
            break;
#line 270 "goal_form.m"
          case (MR_Integer) 5:
#line 310 "goal_form.m"
            {
#line 310 "goal_form.m"
              MR_Word hlds__goal_form__Reason_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_6, (MR_Integer) 1)));
#line 310 "goal_form.m"
              MR_Word hlds__goal_form__SubGoal_98 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_6, (MR_Integer) 2)));
#line 312 "goal_form.m"
              MR_Word hlds__goal_form__FGT_60;
#line 312 "goal_form.m"
              MR_Word hlds__goal_form__V_59_59;

#line 312 "goal_form.m"
              hlds__goal_form__succeeded = ((((MR_tag((MR_Word) hlds__goal_form__Reason_58)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__Reason_58, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 312 "goal_form.m"
              if (hlds__goal_form__succeeded)
#line 312 "goal_form.m"
                {
#line 312 "goal_form.m"
                  hlds__goal_form__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__Reason_58, (MR_Integer) 1)));
#line 312 "goal_form.m"
                  hlds__goal_form__FGT_60 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__Reason_58, (MR_Integer) 2)));
#line 314 "goal_form.m"
#line 314 "goal_form.m"
                  switch (hlds__goal_form__FGT_60) {
#line 314 "goal_form.m"
                    default:
#line 314 "goal_form.m"
                      hlds__goal_form__succeeded = MR_FALSE;
#line 314 "goal_form.m"
                      break;
#line 314 "goal_form.m"
                    case (MR_Integer) 1:
#line 313 "goal_form.m"
                      hlds__goal_form__succeeded = MR_TRUE;
#line 314 "goal_form.m"
                      break;
#line 314 "goal_form.m"
                    case (MR_Integer) 2:
#line 314 "goal_form.m"
                      hlds__goal_form__succeeded = MR_TRUE;
#line 314 "goal_form.m"
                      break;
#line 314 "goal_form.m"
                  }
#line 312 "goal_form.m"
                }
#line 320 "goal_form.m"
              if (hlds__goal_form__succeeded)
#line 319 "goal_form.m"
                {
#line 319 "goal_form.m"
                  *hlds__goal_form__Result_8 = (MR_Integer) 1;
#line 319 "goal_form.m"
                  *hlds__goal_form__STATE_VARIABLE_ModuleInfo_83 = hlds__goal_form__STATE_VARIABLE_ModuleInfo_0_82;
#line 319 "goal_form.m"
                }
#line 320 "goal_form.m"
              else
#line 321 "goal_form.m"
                {
#line 321 "goal_form.m"
                  hlds__goal_form__goal_can_throw_4_p_0(hlds__goal_form__SubGoal_98, hlds__goal_form__Result_8, hlds__goal_form__STATE_VARIABLE_ModuleInfo_0_82, hlds__goal_form__STATE_VARIABLE_ModuleInfo_83);
#line 321 "goal_form.m"
                  return;
                }
#line 310 "goal_form.m"
            }
#line 270 "goal_form.m"
            break;
#line 270 "goal_form.m"
          case (MR_Integer) 6:
#line 270 "goal_form.m"
            {
#line 270 "goal_form.m"
              MR_Word hlds__goal_form__ThenGoal_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_6, (MR_Integer) 3)));
#line 270 "goal_form.m"
              MR_Word hlds__goal_form__ElseGoal_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_6, (MR_Integer) 4)));
#line 270 "goal_form.m"
              MR_Word hlds__goal_form__V_95_95;
#line 270 "goal_form.m"
              MR_Word hlds__goal_form__Goal_104 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_6, (MR_Integer) 2)));
#line 270 "goal_form.m"
              MR_Word hlds__goal_form__Goals_105;
#line 270 "goal_form.m"
              MR_Word hlds__goal_form__Result0_108;
#line 270 "goal_form.m"
              MR_Word hlds__goal_form__STATE_VARIABLE_ModuleInfo_15_111;
#line 268 "goal_form.m"
              MR_Word hlds__goal_form__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_6, (MR_Integer) 1)));

#line 269 "goal_form.m"
              {
#line 269 "goal_form.m"
                hlds__goal_form__V_95_95 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 269 "goal_form.m"
                MR_hl_field(MR_mktag(1), hlds__goal_form__V_95_95, 0) = ((MR_Box) (hlds__goal_form__ElseGoal_15));
#line 269 "goal_form.m"
                MR_hl_field(MR_mktag(1), hlds__goal_form__V_95_95, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 269 "goal_form.m"
              }
#line 269 "goal_form.m"
              {
#line 269 "goal_form.m"
                hlds__goal_form__Goals_105 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 269 "goal_form.m"
                MR_hl_field(MR_mktag(1), hlds__goal_form__Goals_105, 0) = ((MR_Box) (hlds__goal_form__ThenGoal_14));
#line 269 "goal_form.m"
                MR_hl_field(MR_mktag(1), hlds__goal_form__Goals_105, 1) = ((MR_Box) (hlds__goal_form__V_95_95));
#line 269 "goal_form.m"
              }
#line 360 "goal_form.m"
              {
#line 360 "goal_form.m"
                hlds__goal_form__goal_can_throw_4_p_0(hlds__goal_form__Goal_104, &hlds__goal_form__Result0_108, hlds__goal_form__STATE_VARIABLE_ModuleInfo_0_82, &hlds__goal_form__STATE_VARIABLE_ModuleInfo_15_111);
              }
#line 364 "goal_form.m"
#line 364 "goal_form.m"
              switch (hlds__goal_form__Result0_108) {
#line 364 "goal_form.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 364 "goal_form.m"
                case (MR_Integer) 0:
#line 365 "goal_form.m"
                  {
#line 366 "goal_form.m"
                    *hlds__goal_form__Result_8 = (MR_Integer) 0;
#line 365 "goal_form.m"
                    *hlds__goal_form__STATE_VARIABLE_ModuleInfo_83 = hlds__goal_form__STATE_VARIABLE_ModuleInfo_15_111;
#line 365 "goal_form.m"
                  }
#line 364 "goal_form.m"
                  break;
#line 364 "goal_form.m"
                case (MR_Integer) 1:
#line 359 "goal_form.m"
                  {
#line 359 "goal_form.m"
                    MR_Word hlds__goal_form__Goal_116 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__Goals_105, (MR_Integer) 0)));
#line 359 "goal_form.m"
                    MR_Word hlds__goal_form__Goals_117 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__Goals_105, (MR_Integer) 1)));
#line 359 "goal_form.m"
                    MR_Word hlds__goal_form__Result0_120;
#line 359 "goal_form.m"
                    MR_Word hlds__goal_form__STATE_VARIABLE_ModuleInfo_15_123;

#line 360 "goal_form.m"
                    {
#line 360 "goal_form.m"
                      hlds__goal_form__goal_can_throw_4_p_0(hlds__goal_form__Goal_116, &hlds__goal_form__Result0_120, hlds__goal_form__STATE_VARIABLE_ModuleInfo_15_111, &hlds__goal_form__STATE_VARIABLE_ModuleInfo_15_123);
                    }
#line 364 "goal_form.m"
#line 364 "goal_form.m"
                    switch (hlds__goal_form__Result0_120) {
#line 364 "goal_form.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 364 "goal_form.m"
                      case (MR_Integer) 0:
#line 365 "goal_form.m"
                        {
#line 366 "goal_form.m"
                          *hlds__goal_form__Result_8 = (MR_Integer) 0;
#line 365 "goal_form.m"
                          *hlds__goal_form__STATE_VARIABLE_ModuleInfo_83 = hlds__goal_form__STATE_VARIABLE_ModuleInfo_15_123;
#line 365 "goal_form.m"
                        }
#line 364 "goal_form.m"
                        break;
#line 364 "goal_form.m"
                      case (MR_Integer) 1:
#line 359 "goal_form.m"
                        {
#line 359 "goal_form.m"
                          MR_Word hlds__goal_form__Goal_128 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__Goals_117, (MR_Integer) 0)));
#line 359 "goal_form.m"
                          MR_Word hlds__goal_form__Result0_132;
#line 359 "goal_form.m"
                          MR_Word hlds__goal_form__STATE_VARIABLE_ModuleInfo_15_135;
#line 359 "goal_form.m"
                          MR_Word hlds__goal_form__Goals_129 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__Goals_117, (MR_Integer) 1)));

#line 360 "goal_form.m"
                          {
#line 360 "goal_form.m"
                            hlds__goal_form__goal_can_throw_4_p_0(hlds__goal_form__Goal_128, &hlds__goal_form__Result0_132, hlds__goal_form__STATE_VARIABLE_ModuleInfo_15_123, &hlds__goal_form__STATE_VARIABLE_ModuleInfo_15_135);
                          }
#line 364 "goal_form.m"
#line 364 "goal_form.m"
                          switch (hlds__goal_form__Result0_132) {
#line 364 "goal_form.m"
                            default: /*NOTREACHED*/ MR_assert(0);
#line 364 "goal_form.m"
                            case (MR_Integer) 0:
#line 365 "goal_form.m"
                              {
#line 366 "goal_form.m"
                                *hlds__goal_form__Result_8 = (MR_Integer) 0;
#line 365 "goal_form.m"
                                *hlds__goal_form__STATE_VARIABLE_ModuleInfo_83 = hlds__goal_form__STATE_VARIABLE_ModuleInfo_15_135;
#line 365 "goal_form.m"
                              }
#line 364 "goal_form.m"
                              break;
#line 364 "goal_form.m"
                            case (MR_Integer) 1:
#line 358 "goal_form.m"
                              {
#line 358 "goal_form.m"
                                *hlds__goal_form__Result_8 = (MR_Integer) 1;
#line 358 "goal_form.m"
                                *hlds__goal_form__STATE_VARIABLE_ModuleInfo_83 = hlds__goal_form__STATE_VARIABLE_ModuleInfo_15_135;
#line 358 "goal_form.m"
                              }
#line 364 "goal_form.m"
                              break;
#line 364 "goal_form.m"
                          }
#line 359 "goal_form.m"
                        }
#line 364 "goal_form.m"
                        break;
#line 364 "goal_form.m"
                    }
#line 359 "goal_form.m"
                  }
#line 364 "goal_form.m"
                  break;
#line 364 "goal_form.m"
              }
#line 270 "goal_form.m"
            }
#line 270 "goal_form.m"
            break;
#line 270 "goal_form.m"
          case (MR_Integer) 7:
#line 339 "goal_form.m"
            {
#line 339 "goal_form.m"
              MR_Word hlds__goal_form__ShortHand_69 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_6, (MR_Integer) 1)));

#line 343 "goal_form.m"
#line 343 "goal_form.m"
              switch (MR_tag((MR_Word) hlds__goal_form__ShortHand_69)) {
#line 343 "goal_form.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 343 "goal_form.m"
                case (MR_Integer) 0:
#line 341 "goal_form.m"
                  {
#line 341 "goal_form.m"
                    MR_Word hlds__goal_form__GoalB_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__ShortHand_69, (MR_Integer) 1)));
#line 341 "goal_form.m"
                    MR_Word hlds__goal_form__Goal_152 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__ShortHand_69, (MR_Integer) 0)));
#line 341 "goal_form.m"
                    MR_Word hlds__goal_form__Goals_153;
#line 341 "goal_form.m"
                    MR_Word hlds__goal_form__Result0_156;
#line 341 "goal_form.m"
                    MR_Word hlds__goal_form__STATE_VARIABLE_ModuleInfo_15_159;

#line 342 "goal_form.m"
                    {
#line 342 "goal_form.m"
                      hlds__goal_form__Goals_153 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 342 "goal_form.m"
                      MR_hl_field(MR_mktag(1), hlds__goal_form__Goals_153, 0) = ((MR_Box) (hlds__goal_form__GoalB_71));
#line 342 "goal_form.m"
                      MR_hl_field(MR_mktag(1), hlds__goal_form__Goals_153, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 342 "goal_form.m"
                    }
#line 360 "goal_form.m"
                    {
#line 360 "goal_form.m"
                      hlds__goal_form__goal_can_throw_4_p_0(hlds__goal_form__Goal_152, &hlds__goal_form__Result0_156, hlds__goal_form__STATE_VARIABLE_ModuleInfo_0_82, &hlds__goal_form__STATE_VARIABLE_ModuleInfo_15_159);
                    }
#line 364 "goal_form.m"
#line 364 "goal_form.m"
                    switch (hlds__goal_form__Result0_156) {
#line 364 "goal_form.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 364 "goal_form.m"
                      case (MR_Integer) 0:
#line 365 "goal_form.m"
                        {
#line 366 "goal_form.m"
                          *hlds__goal_form__Result_8 = (MR_Integer) 0;
#line 365 "goal_form.m"
                          *hlds__goal_form__STATE_VARIABLE_ModuleInfo_83 = hlds__goal_form__STATE_VARIABLE_ModuleInfo_15_159;
#line 365 "goal_form.m"
                        }
#line 364 "goal_form.m"
                        break;
#line 364 "goal_form.m"
                      case (MR_Integer) 1:
#line 359 "goal_form.m"
                        {
#line 359 "goal_form.m"
                          MR_Word hlds__goal_form__Goal_164 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__Goals_153, (MR_Integer) 0)));
#line 359 "goal_form.m"
                          MR_Word hlds__goal_form__Result0_168;
#line 359 "goal_form.m"
                          MR_Word hlds__goal_form__STATE_VARIABLE_ModuleInfo_15_171;
#line 359 "goal_form.m"
                          MR_Word hlds__goal_form__Goals_165 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__Goals_153, (MR_Integer) 1)));

#line 360 "goal_form.m"
                          {
#line 360 "goal_form.m"
                            hlds__goal_form__goal_can_throw_4_p_0(hlds__goal_form__Goal_164, &hlds__goal_form__Result0_168, hlds__goal_form__STATE_VARIABLE_ModuleInfo_15_159, &hlds__goal_form__STATE_VARIABLE_ModuleInfo_15_171);
                          }
#line 364 "goal_form.m"
#line 364 "goal_form.m"
                          switch (hlds__goal_form__Result0_168) {
#line 364 "goal_form.m"
                            default: /*NOTREACHED*/ MR_assert(0);
#line 364 "goal_form.m"
                            case (MR_Integer) 0:
#line 365 "goal_form.m"
                              {
#line 366 "goal_form.m"
                                *hlds__goal_form__Result_8 = (MR_Integer) 0;
#line 365 "goal_form.m"
                                *hlds__goal_form__STATE_VARIABLE_ModuleInfo_83 = hlds__goal_form__STATE_VARIABLE_ModuleInfo_15_171;
#line 365 "goal_form.m"
                              }
#line 364 "goal_form.m"
                              break;
#line 364 "goal_form.m"
                            case (MR_Integer) 1:
#line 358 "goal_form.m"
                              {
#line 358 "goal_form.m"
                                *hlds__goal_form__Result_8 = (MR_Integer) 1;
#line 358 "goal_form.m"
                                *hlds__goal_form__STATE_VARIABLE_ModuleInfo_83 = hlds__goal_form__STATE_VARIABLE_ModuleInfo_15_171;
#line 358 "goal_form.m"
                              }
#line 364 "goal_form.m"
                              break;
#line 364 "goal_form.m"
                          }
#line 359 "goal_form.m"
                        }
#line 364 "goal_form.m"
                        break;
#line 364 "goal_form.m"
                    }
#line 341 "goal_form.m"
                  }
#line 343 "goal_form.m"
                  break;
#line 343 "goal_form.m"
                case (MR_Integer) 1:
#line 344 "goal_form.m"
                  {
#line 348 "goal_form.m"
                    *hlds__goal_form__Result_8 = (MR_Integer) 0;
#line 344 "goal_form.m"
                    *hlds__goal_form__STATE_VARIABLE_ModuleInfo_83 = hlds__goal_form__STATE_VARIABLE_ModuleInfo_0_82;
#line 344 "goal_form.m"
                  }
#line 343 "goal_form.m"
                  break;
#line 343 "goal_form.m"
                case (MR_Integer) 2:
#line 350 "goal_form.m"
                  {
#line 351 "goal_form.m"
                    *hlds__goal_form__Result_8 = (MR_Integer) 0;
#line 350 "goal_form.m"
                    *hlds__goal_form__STATE_VARIABLE_ModuleInfo_83 = hlds__goal_form__STATE_VARIABLE_ModuleInfo_0_82;
#line 350 "goal_form.m"
                  }
#line 343 "goal_form.m"
                  break;
#line 343 "goal_form.m"
              }
#line 339 "goal_form.m"
            }
#line 270 "goal_form.m"
            break;
#line 270 "goal_form.m"
        }
#line 270 "goal_form.m"
        break;
#line 270 "goal_form.m"
    }
#line 270 "goal_form.m"
  }
#line 258 "goal_form.m"
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
#line 1672 "hlds.goal_form.c"
  {
#line 1674 "hlds.goal_form.c"
    MR_bool hlds__goal_form__succeeded = (hlds__goal_form__HeadVar__2_1 == hlds__goal_form__HeadVar__2_2);

#line 1677 "hlds.goal_form.c"
    return hlds__goal_form__succeeded;
#line 1679 "hlds.goal_form.c"
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
#line 1725 "hlds.goal_form.c"
  {
#line 1727 "hlds.goal_form.c"
    MR_bool hlds__goal_form__succeeded = (hlds__goal_form__HeadVar__2_1 == hlds__goal_form__HeadVar__2_2);

#line 1730 "hlds.goal_form.c"
    return hlds__goal_form__succeeded;
#line 1732 "hlds.goal_form.c"
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
#line 1778 "hlds.goal_form.c"
  {
#line 1780 "hlds.goal_form.c"
    MR_bool hlds__goal_form__succeeded = (hlds__goal_form__HeadVar__2_1 == hlds__goal_form__HeadVar__2_2);

#line 1783 "hlds.goal_form.c"
    return hlds__goal_form__succeeded;
#line 1785 "hlds.goal_form.c"
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
#line 1831 "hlds.goal_form.c"
  {
#line 1833 "hlds.goal_form.c"
    MR_bool hlds__goal_form__succeeded = (hlds__goal_form__HeadVar__2_1 == hlds__goal_form__HeadVar__2_2);

#line 1836 "hlds.goal_form.c"
    return hlds__goal_form__succeeded;
#line 1838 "hlds.goal_form.c"
  }
#line 58 "goal_form.m"
}

#line 1164 "goal_form.m"
static MR_Word MR_CALL 
hlds__goal_form__case_list_has_foreign_1_f_0(
#line 1164 "goal_form.m"
  MR_Word hlds__goal_form__HeadVar__1_1)
#line 1164 "goal_form.m"
{
#line 1166 "goal_form.m"
  while (MR_TRUE)
#line 1166 "goal_form.m"
    {
#line 1166 "goal_form.m"
      /* tailcall optimized into a loop */
#line 1166 "goal_form.m"
      {
#line 1166 "goal_form.m"
        MR_bool hlds__goal_form__succeeded;
#line 1166 "goal_form.m"
        MR_Word hlds__goal_form__HeadVar__2_2;

#line 1166 "goal_form.m"
        if ((hlds__goal_form__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1166 "goal_form.m"
          hlds__goal_form__HeadVar__2_2 = (MR_Integer) 0;
#line 1166 "goal_form.m"
        else
#line 1167 "goal_form.m"
          {
#line 1167 "goal_form.m"
            MR_Word hlds__goal_form__Case_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__HeadVar__1_1, (MR_Integer) 0)));
#line 1167 "goal_form.m"
            MR_Word hlds__goal_form__Cases_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__HeadVar__1_1, (MR_Integer) 1)));
#line 1167 "goal_form.m"
            MR_Word hlds__goal_form__Goal_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Case_3, (MR_Integer) 2)));
#line 1168 "goal_form.m"
            MR_Word hlds__goal_form__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Case_3, (MR_Integer) 0)));
#line 1168 "goal_form.m"
            MR_Word hlds__goal_form__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Case_3, (MR_Integer) 1)));
#line 1169 "goal_form.m"
            MR_Word hlds__goal_form__V_9_9;

#line 1169 "goal_form.m"
            {
#line 1169 "goal_form.m"
              hlds__goal_form__V_9_9 = hlds__goal_form__goal_has_foreign_1_f_0(hlds__goal_form__Goal_8);
            }
#line 1169 "goal_form.m"
            hlds__goal_form__succeeded = (hlds__goal_form__V_9_9 == (MR_Integer) 1);
#line 1171 "goal_form.m"
            if (hlds__goal_form__succeeded)
#line 1170 "goal_form.m"
              hlds__goal_form__HeadVar__2_2 = (MR_Integer) 1;
#line 1171 "goal_form.m"
            else
#line 1172 "goal_form.m"
              {
#line 1172 "goal_form.m"
                /* direct tailcall eliminated */
#line 1172 "goal_form.m"
                {
#line 1172 "goal_form.m"
                  MR_Word hlds__goal_form__HeadVar__1__tmp_copy_1 = hlds__goal_form__Cases_4;

#line 1172 "goal_form.m"
                  hlds__goal_form__HeadVar__1_1 = hlds__goal_form__HeadVar__1__tmp_copy_1;
#line 1172 "goal_form.m"
                }
#line 1172 "goal_form.m"
                continue;
#line 1172 "goal_form.m"
              }
#line 1167 "goal_form.m"
          }
#line 1166 "goal_form.m"
        return hlds__goal_form__HeadVar__2_2;
#line 1166 "goal_form.m"
      }
#line 1166 "goal_form.m"
      break;
#line 1166 "goal_form.m"
    }
#line 1164 "goal_form.m"
}

#line 1154 "goal_form.m"
static MR_Word MR_CALL 
hlds__goal_form__goal_list_has_foreign_1_f_0(
#line 1154 "goal_form.m"
  MR_Word hlds__goal_form__HeadVar__1_1)
#line 1154 "goal_form.m"
{
#line 1156 "goal_form.m"
  while (MR_TRUE)
#line 1156 "goal_form.m"
    {
#line 1156 "goal_form.m"
      /* tailcall optimized into a loop */
#line 1156 "goal_form.m"
      {
#line 1156 "goal_form.m"
        MR_bool hlds__goal_form__succeeded;
#line 1156 "goal_form.m"
        MR_Word hlds__goal_form__HeadVar__2_2;

#line 1156 "goal_form.m"
        if ((hlds__goal_form__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1156 "goal_form.m"
          hlds__goal_form__HeadVar__2_2 = (MR_Integer) 0;
#line 1156 "goal_form.m"
        else
#line 1157 "goal_form.m"
          {
#line 1157 "goal_form.m"
            MR_Word hlds__goal_form__Goal_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__HeadVar__1_1, (MR_Integer) 0)));
#line 1157 "goal_form.m"
            MR_Word hlds__goal_form__Goals_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__HeadVar__1_1, (MR_Integer) 1)));
#line 1158 "goal_form.m"
            MR_Word hlds__goal_form__V_6_6;

#line 1158 "goal_form.m"
            {
#line 1158 "goal_form.m"
              hlds__goal_form__V_6_6 = hlds__goal_form__goal_has_foreign_1_f_0(hlds__goal_form__Goal_3);
            }
#line 1158 "goal_form.m"
            hlds__goal_form__succeeded = (hlds__goal_form__V_6_6 == (MR_Integer) 1);
#line 1160 "goal_form.m"
            if (hlds__goal_form__succeeded)
#line 1159 "goal_form.m"
              hlds__goal_form__HeadVar__2_2 = (MR_Integer) 1;
#line 1160 "goal_form.m"
            else
#line 1161 "goal_form.m"
              {
#line 1161 "goal_form.m"
                /* direct tailcall eliminated */
#line 1161 "goal_form.m"
                {
#line 1161 "goal_form.m"
                  MR_Word hlds__goal_form__HeadVar__1__tmp_copy_1 = hlds__goal_form__Goals_4;

#line 1161 "goal_form.m"
                  hlds__goal_form__HeadVar__1_1 = hlds__goal_form__HeadVar__1__tmp_copy_1;
#line 1161 "goal_form.m"
                }
#line 1161 "goal_form.m"
                continue;
#line 1161 "goal_form.m"
              }
#line 1157 "goal_form.m"
          }
#line 1156 "goal_form.m"
        return hlds__goal_form__HeadVar__2_2;
#line 1156 "goal_form.m"
      }
#line 1156 "goal_form.m"
      break;
#line 1156 "goal_form.m"
    }
#line 1154 "goal_form.m"
}

#line 1058 "goal_form.m"
static void MR_CALL 
hlds__goal_form__count_recursive_calls_cases_5_p_0(
#line 1058 "goal_form.m"
  MR_Word hlds__goal_form__HeadVar__1_1,
#line 1058 "goal_form.m"
  MR_Word hlds__goal_form__PredId_2,
#line 1058 "goal_form.m"
  MR_Integer hlds__goal_form__ProcId_3,
#line 1058 "goal_form.m"
  MR_Integer * hlds__goal_form__Min_4,
#line 1058 "goal_form.m"
  MR_Integer * hlds__goal_form__Max_5)
#line 1058 "goal_form.m"
{
#line 1061 "goal_form.m"
  {
#line 1061 "goal_form.m"
    MR_bool hlds__goal_form__succeeded;

#line 1061 "goal_form.m"
    if ((hlds__goal_form__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1061 "goal_form.m"
      {
#line 1062 "goal_form.m"
        {
#line 1062 "goal_form.m"
          mercury__require__unexpected_3_p_0((MR_String) "hlds.goal_form", (MR_String) "predicate \140hlds.goal_form.count_recursive_calls_cases\'/5", (MR_String) "[]");
#line 1062 "goal_form.m"
          return;
        }
#line 1061 "goal_form.m"
      }
#line 1061 "goal_form.m"
    else
#line 1064 "goal_form.m"
      {
#line 1064 "goal_form.m"
        MR_Word hlds__goal_form__Goal_15;
#line 1064 "goal_form.m"
        MR_Word hlds__goal_form__Cases_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__HeadVar__1_1, (MR_Integer) 1)));
#line 1064 "goal_form.m"
        MR_Word hlds__goal_form__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__HeadVar__1_1, (MR_Integer) 0)));
#line 1063 "goal_form.m"
        MR_Word hlds__goal_form__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__V_27_27, (MR_Integer) 0)));
#line 1063 "goal_form.m"
        MR_Word hlds__goal_form__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__V_27_27, (MR_Integer) 1)));

#line 1063 "goal_form.m"
        hlds__goal_form__Goal_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__V_27_27, (MR_Integer) 2)));
#line 1068 "goal_form.m"
        if ((hlds__goal_form__Cases_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1067 "goal_form.m"
          {
#line 1067 "goal_form.m"
            hlds__goal_form__count_recursive_calls_5_p_0(hlds__goal_form__Goal_15, hlds__goal_form__PredId_2, hlds__goal_form__ProcId_3, hlds__goal_form__Min_4, hlds__goal_form__Max_5);
#line 1067 "goal_form.m"
            return;
          }
#line 1068 "goal_form.m"
        else
#line 1069 "goal_form.m"
          {
#line 1069 "goal_form.m"
            MR_Integer hlds__goal_form__Min0_23;
#line 1069 "goal_form.m"
            MR_Integer hlds__goal_form__Max0_24;
#line 1069 "goal_form.m"
            MR_Integer hlds__goal_form__Min1_25;
#line 1069 "goal_form.m"
            MR_Integer hlds__goal_form__Max1_26;
#line 1069 "goal_form.m"
            MR_Word hlds__goal_form__Goal_37;
#line 1069 "goal_form.m"
            MR_Word hlds__goal_form__Cases_38;
#line 1069 "goal_form.m"
            MR_Word hlds__goal_form__V_49_49;
#line 1063 "goal_form.m"
            MR_Word hlds__goal_form__V_35_35;
#line 1063 "goal_form.m"
            MR_Word hlds__goal_form__V_36_36;

#line 1070 "goal_form.m"
            {
#line 1070 "goal_form.m"
              hlds__goal_form__count_recursive_calls_5_p_0(hlds__goal_form__Goal_15, hlds__goal_form__PredId_2, hlds__goal_form__ProcId_3, &hlds__goal_form__Min0_23, &hlds__goal_form__Max0_24);
            }
#line 1063 "goal_form.m"
            hlds__goal_form__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__Cases_16, (MR_Integer) 0)));
#line 1063 "goal_form.m"
            hlds__goal_form__Cases_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__Cases_16, (MR_Integer) 1)));
#line 1063 "goal_form.m"
            hlds__goal_form__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__V_49_49, (MR_Integer) 0)));
#line 1063 "goal_form.m"
            hlds__goal_form__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__V_49_49, (MR_Integer) 1)));
#line 1063 "goal_form.m"
            hlds__goal_form__Goal_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__V_49_49, (MR_Integer) 2)));
#line 1068 "goal_form.m"
            if ((hlds__goal_form__Cases_38 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1067 "goal_form.m"
              {
#line 1067 "goal_form.m"
                hlds__goal_form__count_recursive_calls_5_p_0(hlds__goal_form__Goal_37, hlds__goal_form__PredId_2, hlds__goal_form__ProcId_3, &hlds__goal_form__Min1_25, &hlds__goal_form__Max1_26);
              }
#line 1068 "goal_form.m"
            else
#line 1069 "goal_form.m"
              {
#line 1069 "goal_form.m"
                MR_Integer hlds__goal_form__Min0_45;
#line 1069 "goal_form.m"
                MR_Integer hlds__goal_form__Max0_46;
#line 1069 "goal_form.m"
                MR_Integer hlds__goal_form__Min1_47;
#line 1069 "goal_form.m"
                MR_Integer hlds__goal_form__Max1_48;

#line 1070 "goal_form.m"
                {
#line 1070 "goal_form.m"
                  hlds__goal_form__count_recursive_calls_5_p_0(hlds__goal_form__Goal_37, hlds__goal_form__PredId_2, hlds__goal_form__ProcId_3, &hlds__goal_form__Min0_45, &hlds__goal_form__Max0_46);
                }
#line 1071 "goal_form.m"
                {
#line 1071 "goal_form.m"
                  hlds__goal_form__count_recursive_calls_cases_5_p_0(hlds__goal_form__Cases_38, hlds__goal_form__PredId_2, hlds__goal_form__ProcId_3, &hlds__goal_form__Min1_47, &hlds__goal_form__Max1_48);
                }
#line 1072 "goal_form.m"
                {
#line 1072 "goal_form.m"
                  mercury__int__min_3_p_0(hlds__goal_form__Min0_45, hlds__goal_form__Min1_47, &hlds__goal_form__Min1_25);
                }
#line 1073 "goal_form.m"
                {
#line 1073 "goal_form.m"
                  mercury__int__max_3_p_0(hlds__goal_form__Max0_46, hlds__goal_form__Max1_48, &hlds__goal_form__Max1_26);
                }
#line 1069 "goal_form.m"
              }
#line 1072 "goal_form.m"
            {
#line 1072 "goal_form.m"
              mercury__int__min_3_p_0(hlds__goal_form__Min0_23, hlds__goal_form__Min1_25, hlds__goal_form__Min_4);
            }
#line 1073 "goal_form.m"
            {
#line 1073 "goal_form.m"
              mercury__int__max_3_p_0(hlds__goal_form__Max0_24, hlds__goal_form__Max1_26, hlds__goal_form__Max_5);
#line 1073 "goal_form.m"
              return;
            }
#line 1069 "goal_form.m"
          }
#line 1064 "goal_form.m"
      }
#line 1061 "goal_form.m"
  }
#line 1058 "goal_form.m"
}

#line 1042 "goal_form.m"
static void MR_CALL 
hlds__goal_form__count_recursive_calls_disj_5_p_0(
#line 1042 "goal_form.m"
  MR_Word hlds__goal_form__HeadVar__1_1,
#line 1042 "goal_form.m"
  MR_Word hlds__goal_form__PredId_2,
#line 1042 "goal_form.m"
  MR_Integer hlds__goal_form__ProcId_3,
#line 1042 "goal_form.m"
  MR_Integer * hlds__goal_form__HeadVar__4_4,
#line 1042 "goal_form.m"
  MR_Integer * hlds__goal_form__HeadVar__5_5)
#line 1042 "goal_form.m"
{
#line 1045 "goal_form.m"
  {
#line 1045 "goal_form.m"
    MR_bool hlds__goal_form__succeeded;

#line 1045 "goal_form.m"
    if ((hlds__goal_form__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1045 "goal_form.m"
      {
#line 1045 "goal_form.m"
        *hlds__goal_form__HeadVar__4_4 = (MR_Integer) 0;
#line 1045 "goal_form.m"
        *hlds__goal_form__HeadVar__5_5 = (MR_Integer) 0;
#line 1045 "goal_form.m"
      }
#line 1045 "goal_form.m"
    else
#line 1046 "goal_form.m"
      {
#line 1046 "goal_form.m"
        MR_Word hlds__goal_form__Goal_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__HeadVar__1_1, (MR_Integer) 0)));
#line 1046 "goal_form.m"
        MR_Word hlds__goal_form__Goals_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__HeadVar__1_1, (MR_Integer) 1)));

#line 1050 "goal_form.m"
        if ((hlds__goal_form__Goals_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1049 "goal_form.m"
          {
#line 1049 "goal_form.m"
            hlds__goal_form__count_recursive_calls_5_p_0(hlds__goal_form__Goal_8, hlds__goal_form__PredId_2, hlds__goal_form__ProcId_3, hlds__goal_form__HeadVar__4_4, hlds__goal_form__HeadVar__5_5);
#line 1049 "goal_form.m"
            return;
          }
#line 1050 "goal_form.m"
        else
#line 1051 "goal_form.m"
          {
#line 1051 "goal_form.m"
            MR_Integer hlds__goal_form__Min0_16;
#line 1051 "goal_form.m"
            MR_Integer hlds__goal_form__Max0_17;
#line 1051 "goal_form.m"
            MR_Integer hlds__goal_form__Min1_18;
#line 1051 "goal_form.m"
            MR_Integer hlds__goal_form__Max1_19;
#line 1051 "goal_form.m"
            MR_Word hlds__goal_form__Goal_22;
#line 1051 "goal_form.m"
            MR_Word hlds__goal_form__Goals_23;

#line 1052 "goal_form.m"
            {
#line 1052 "goal_form.m"
              hlds__goal_form__count_recursive_calls_5_p_0(hlds__goal_form__Goal_8, hlds__goal_form__PredId_2, hlds__goal_form__ProcId_3, &hlds__goal_form__Min0_16, &hlds__goal_form__Max0_17);
            }
#line 1046 "goal_form.m"
            hlds__goal_form__Goal_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__Goals_9, (MR_Integer) 0)));
#line 1046 "goal_form.m"
            hlds__goal_form__Goals_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__Goals_9, (MR_Integer) 1)));
#line 1050 "goal_form.m"
            if ((hlds__goal_form__Goals_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1049 "goal_form.m"
              {
#line 1049 "goal_form.m"
                hlds__goal_form__count_recursive_calls_5_p_0(hlds__goal_form__Goal_22, hlds__goal_form__PredId_2, hlds__goal_form__ProcId_3, &hlds__goal_form__Min1_18, &hlds__goal_form__Max1_19);
              }
#line 1050 "goal_form.m"
            else
#line 1051 "goal_form.m"
              {
#line 1051 "goal_form.m"
                MR_Integer hlds__goal_form__Min0_30;
#line 1051 "goal_form.m"
                MR_Integer hlds__goal_form__Max0_31;
#line 1051 "goal_form.m"
                MR_Integer hlds__goal_form__Min1_32;
#line 1051 "goal_form.m"
                MR_Integer hlds__goal_form__Max1_33;

#line 1052 "goal_form.m"
                {
#line 1052 "goal_form.m"
                  hlds__goal_form__count_recursive_calls_5_p_0(hlds__goal_form__Goal_22, hlds__goal_form__PredId_2, hlds__goal_form__ProcId_3, &hlds__goal_form__Min0_30, &hlds__goal_form__Max0_31);
                }
#line 1053 "goal_form.m"
                {
#line 1053 "goal_form.m"
                  hlds__goal_form__count_recursive_calls_disj_5_p_0(hlds__goal_form__Goals_23, hlds__goal_form__PredId_2, hlds__goal_form__ProcId_3, &hlds__goal_form__Min1_32, &hlds__goal_form__Max1_33);
                }
#line 1054 "goal_form.m"
                {
#line 1054 "goal_form.m"
                  mercury__int__min_3_p_0(hlds__goal_form__Min0_30, hlds__goal_form__Min1_32, &hlds__goal_form__Min1_18);
                }
#line 1055 "goal_form.m"
                {
#line 1055 "goal_form.m"
                  mercury__int__max_3_p_0(hlds__goal_form__Max0_31, hlds__goal_form__Max1_33, &hlds__goal_form__Max1_19);
                }
#line 1051 "goal_form.m"
              }
#line 1054 "goal_form.m"
            {
#line 1054 "goal_form.m"
              mercury__int__min_3_p_0(hlds__goal_form__Min0_16, hlds__goal_form__Min1_18, hlds__goal_form__HeadVar__4_4);
            }
#line 1055 "goal_form.m"
            {
#line 1055 "goal_form.m"
              mercury__int__max_3_p_0(hlds__goal_form__Max0_17, hlds__goal_form__Max1_19, hlds__goal_form__HeadVar__5_5);
#line 1055 "goal_form.m"
              return;
            }
#line 1051 "goal_form.m"
          }
#line 1046 "goal_form.m"
      }
#line 1045 "goal_form.m"
  }
#line 1042 "goal_form.m"
}

#line 1030 "goal_form.m"
static void MR_CALL 
hlds__goal_form__count_recursive_calls_conj_7_p_0(
#line 1030 "goal_form.m"
  MR_Word hlds__goal_form__HeadVar__1_1,
#line 1030 "goal_form.m"
  MR_Word hlds__goal_form__PredId_2,
#line 1030 "goal_form.m"
  MR_Integer hlds__goal_form__ProcId_3,
#line 1030 "goal_form.m"
  MR_Integer hlds__goal_form__HeadVar__4_4,
#line 1030 "goal_form.m"
  MR_Integer hlds__goal_form__HeadVar__5_5,
#line 1030 "goal_form.m"
  MR_Integer * hlds__goal_form__Min_6,
#line 1030 "goal_form.m"
  MR_Integer * hlds__goal_form__Max_7)
#line 1030 "goal_form.m"
{
#line 1033 "goal_form.m"
  while (MR_TRUE)
#line 1033 "goal_form.m"
    {
#line 1033 "goal_form.m"
      /* tailcall optimized into a loop */
#line 1033 "goal_form.m"
      {
#line 1033 "goal_form.m"
        MR_bool hlds__goal_form__succeeded;

#line 1033 "goal_form.m"
        if ((hlds__goal_form__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1033 "goal_form.m"
          {
#line 1033 "goal_form.m"
            *hlds__goal_form__Min_6 = hlds__goal_form__HeadVar__4_4;
#line 1033 "goal_form.m"
            *hlds__goal_form__Max_7 = hlds__goal_form__HeadVar__5_5;
#line 1033 "goal_form.m"
          }
#line 1033 "goal_form.m"
        else
#line 1035 "goal_form.m"
          {
#line 1035 "goal_form.m"
            MR_Word hlds__goal_form__Goal_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__HeadVar__1_1, (MR_Integer) 0)));
#line 1035 "goal_form.m"
            MR_Word hlds__goal_form__Goals_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__HeadVar__1_1, (MR_Integer) 1)));
#line 1035 "goal_form.m"
            MR_Integer hlds__goal_form__Min1_20;
#line 1035 "goal_form.m"
            MR_Integer hlds__goal_form__Max1_21;
#line 1035 "goal_form.m"
            MR_Integer hlds__goal_form__Min2_22;
#line 1035 "goal_form.m"
            MR_Integer hlds__goal_form__Max2_23;

#line 1036 "goal_form.m"
            {
#line 1036 "goal_form.m"
              hlds__goal_form__count_recursive_calls_5_p_0(hlds__goal_form__Goal_12, hlds__goal_form__PredId_2, hlds__goal_form__ProcId_3, &hlds__goal_form__Min1_20, &hlds__goal_form__Max1_21);
            }
#line 1037 "goal_form.m"
            hlds__goal_form__Min2_22 = (hlds__goal_form__HeadVar__4_4 + hlds__goal_form__Min1_20);
#line 1038 "goal_form.m"
            hlds__goal_form__Max2_23 = (hlds__goal_form__HeadVar__5_5 + hlds__goal_form__Max1_21);
#line 1039 "goal_form.m"
            /* direct tailcall eliminated */
#line 1039 "goal_form.m"
            {
#line 1039 "goal_form.m"
              MR_Word hlds__goal_form__HeadVar__1__tmp_copy_1 = hlds__goal_form__Goals_13;
#line 1039 "goal_form.m"
              MR_Integer hlds__goal_form__HeadVar__4__tmp_copy_4 = hlds__goal_form__Min2_22;
#line 1039 "goal_form.m"
              MR_Integer hlds__goal_form__HeadVar__5__tmp_copy_5 = hlds__goal_form__Max2_23;

#line 1039 "goal_form.m"
              hlds__goal_form__HeadVar__5_5 = hlds__goal_form__HeadVar__5__tmp_copy_5;
#line 1039 "goal_form.m"
              hlds__goal_form__HeadVar__4_4 = hlds__goal_form__HeadVar__4__tmp_copy_4;
#line 1039 "goal_form.m"
              hlds__goal_form__HeadVar__1_1 = hlds__goal_form__HeadVar__1__tmp_copy_1;
#line 1039 "goal_form.m"
            }
#line 1039 "goal_form.m"
            continue;
#line 1035 "goal_form.m"
          }
#line 1033 "goal_form.m"
      }
#line 1033 "goal_form.m"
      break;
#line 1033 "goal_form.m"
    }
#line 1030 "goal_form.m"
}

#line 932 "goal_form.m"
static MR_bool MR_CALL 
hlds__goal_form__cannot_fail_before_stack_flush_conj_1_p_0(
#line 932 "goal_form.m"
  MR_Word hlds__goal_form__HeadVar__1_1)
#line 932 "goal_form.m"
{
#line 934 "goal_form.m"
  while (MR_TRUE)
#line 934 "goal_form.m"
    {
#line 934 "goal_form.m"
      /* tailcall optimized into a loop */
#line 934 "goal_form.m"
      {
#line 934 "goal_form.m"
        MR_bool hlds__goal_form__succeeded;

#line 934 "goal_form.m"
        if ((hlds__goal_form__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 934 "goal_form.m"
          hlds__goal_form__succeeded = MR_TRUE;
#line 934 "goal_form.m"
        else
#line 935 "goal_form.m"
          {
#line 935 "goal_form.m"
            MR_Word hlds__goal_form__Goal_2 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__HeadVar__1_1, (MR_Integer) 0)));
#line 935 "goal_form.m"
            MR_Word hlds__goal_form__Goals_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__HeadVar__1_1, (MR_Integer) 1)));
#line 935 "goal_form.m"
            MR_Word hlds__goal_form__GoalExpr_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Goal_2, (MR_Integer) 0)));
#line 935 "goal_form.m"
            MR_Word hlds__goal_form__GoalInfo_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Goal_2, (MR_Integer) 1)));

#line 941 "goal_form.m"
            if (((MR_tag((MR_Word) hlds__goal_form__GoalExpr_4)) == (MR_mktag((MR_Integer) 2))))
#line 939 "goal_form.m"
              {
#line 939 "goal_form.m"
                MR_Word hlds__goal_form__BuiltinState_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__GoalExpr_4, (MR_Integer) 3)));
#line 939 "goal_form.m"
                MR_Word hlds__goal_form__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__GoalExpr_4, (MR_Integer) 0)));
#line 939 "goal_form.m"
                MR_Integer hlds__goal_form__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(2), hlds__goal_form__GoalExpr_4, (MR_Integer) 1)));
#line 939 "goal_form.m"
                MR_Word hlds__goal_form__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__GoalExpr_4, (MR_Integer) 2)));
#line 939 "goal_form.m"
                MR_Word hlds__goal_form__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__GoalExpr_4, (MR_Integer) 4)));
#line 939 "goal_form.m"
                MR_Word hlds__goal_form__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__GoalExpr_4, (MR_Integer) 5)));

#line 940 "goal_form.m"
                hlds__goal_form__succeeded = (hlds__goal_form__BuiltinState_9 == (MR_Integer) 0);
#line 940 "goal_form.m"
                hlds__goal_form__succeeded = !(hlds__goal_form__succeeded);
#line 939 "goal_form.m"
              }
#line 941 "goal_form.m"
            else
#line 941 "goal_form.m"
            if (((((MR_tag((MR_Word) hlds__goal_form__GoalExpr_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_4, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 942 "goal_form.m"
              hlds__goal_form__succeeded = MR_TRUE;
#line 941 "goal_form.m"
            else
#line 941 "goal_form.m"
              hlds__goal_form__succeeded = MR_FALSE;
#line 946 "goal_form.m"
            if (hlds__goal_form__succeeded)
#line 945 "goal_form.m"
              hlds__goal_form__succeeded = MR_TRUE;
#line 946 "goal_form.m"
            else
#line 951 "goal_form.m"
              {
#line 951 "goal_form.m"
                MR_Word hlds__goal_form__Detism_17;
#line 951 "goal_form.m"
                MR_Word hlds__goal_form__V_20_20;
#line 948 "goal_form.m"
                MR_Word hlds__goal_form__V_18_18;

#line 947 "goal_form.m"
                {
#line 947 "goal_form.m"
                  hlds__goal_form__Detism_17 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(hlds__goal_form__GoalInfo_5);
                }
#line 948 "goal_form.m"
                {
#line 948 "goal_form.m"
                  parse_tree__prog_data__determinism_components_3_p_0(hlds__goal_form__Detism_17, &hlds__goal_form__V_20_20, &hlds__goal_form__V_18_18);
                }
#line 948 "goal_form.m"
                hlds__goal_form__succeeded = ((MR_Integer) 1 == hlds__goal_form__V_20_20);
#line 951 "goal_form.m"
                if (hlds__goal_form__succeeded)
#line 950 "goal_form.m"
                  {
#line 950 "goal_form.m"
                    /* direct tailcall eliminated */
#line 950 "goal_form.m"
                    {
#line 950 "goal_form.m"
                      MR_Word hlds__goal_form__HeadVar__1__tmp_copy_1 = hlds__goal_form__Goals_3;

#line 950 "goal_form.m"
                      hlds__goal_form__HeadVar__1_1 = hlds__goal_form__HeadVar__1__tmp_copy_1;
#line 950 "goal_form.m"
                    }
#line 950 "goal_form.m"
                    continue;
#line 950 "goal_form.m"
                  }
#line 951 "goal_form.m"
              }
#line 935 "goal_form.m"
          }
#line 934 "goal_form.m"
        return hlds__goal_form__succeeded;
#line 934 "goal_form.m"
      }
#line 934 "goal_form.m"
      break;
#line 934 "goal_form.m"
    }
#line 932 "goal_form.m"
}

#line 907 "goal_form.m"
static MR_bool MR_CALL 
hlds__goal_form__cannot_stack_flush_cases_1_p_0(
#line 907 "goal_form.m"
  MR_Word hlds__goal_form__HeadVar__1_1)
#line 907 "goal_form.m"
{
#line 909 "goal_form.m"
  while (MR_TRUE)
#line 909 "goal_form.m"
    {
#line 909 "goal_form.m"
      /* tailcall optimized into a loop */
#line 909 "goal_form.m"
      {
#line 909 "goal_form.m"
        MR_bool hlds__goal_form__succeeded;

#line 909 "goal_form.m"
        if ((hlds__goal_form__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 909 "goal_form.m"
          hlds__goal_form__succeeded = MR_TRUE;
#line 909 "goal_form.m"
        else
#line 910 "goal_form.m"
          {
#line 910 "goal_form.m"
            MR_Word hlds__goal_form__Goal_4;
#line 910 "goal_form.m"
            MR_Word hlds__goal_form__Cases_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__HeadVar__1_1, (MR_Integer) 1)));
#line 910 "goal_form.m"
            MR_Word hlds__goal_form__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__HeadVar__1_1, (MR_Integer) 0)));
#line 910 "goal_form.m"
            MR_Word hlds__goal_form__GoalExpr_7;
#line 910 "goal_form.m"
            MR_Word hlds__goal_form__V_2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__V_6_6, (MR_Integer) 0)));
#line 910 "goal_form.m"
            MR_Word hlds__goal_form__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__V_6_6, (MR_Integer) 1)));
#line 883 "goal_form.m"
            MR_Word hlds__goal_form__V_8_8;

#line 910 "goal_form.m"
            hlds__goal_form__Goal_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__V_6_6, (MR_Integer) 2)));
#line 883 "goal_form.m"
            hlds__goal_form__GoalExpr_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Goal_4, (MR_Integer) 0)));
#line 883 "goal_form.m"
            hlds__goal_form__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Goal_4, (MR_Integer) 1)));
#line 884 "goal_form.m"
            {
#line 884 "goal_form.m"
              hlds__goal_form__succeeded = hlds__goal_form__cannot_stack_flush_2_1_p_0(hlds__goal_form__GoalExpr_7);
            }
#line 910 "goal_form.m"
            if (hlds__goal_form__succeeded)
#line 912 "goal_form.m"
              {
#line 912 "goal_form.m"
                /* direct tailcall eliminated */
#line 912 "goal_form.m"
                {
#line 912 "goal_form.m"
                  MR_Word hlds__goal_form__HeadVar__1__tmp_copy_1 = hlds__goal_form__Cases_5;

#line 912 "goal_form.m"
                  hlds__goal_form__HeadVar__1_1 = hlds__goal_form__HeadVar__1__tmp_copy_1;
#line 912 "goal_form.m"
                }
#line 912 "goal_form.m"
                continue;
#line 912 "goal_form.m"
              }
#line 910 "goal_form.m"
          }
#line 909 "goal_form.m"
        return hlds__goal_form__succeeded;
#line 909 "goal_form.m"
      }
#line 909 "goal_form.m"
      break;
#line 909 "goal_form.m"
    }
#line 907 "goal_form.m"
}

#line 900 "goal_form.m"
static MR_bool MR_CALL 
hlds__goal_form__cannot_stack_flush_goals_1_p_0(
#line 900 "goal_form.m"
  MR_Word hlds__goal_form__HeadVar__1_1)
#line 900 "goal_form.m"
{
#line 902 "goal_form.m"
  while (MR_TRUE)
#line 902 "goal_form.m"
    {
#line 902 "goal_form.m"
      /* tailcall optimized into a loop */
#line 902 "goal_form.m"
      {
#line 902 "goal_form.m"
        MR_bool hlds__goal_form__succeeded;

#line 902 "goal_form.m"
        if ((hlds__goal_form__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 902 "goal_form.m"
          hlds__goal_form__succeeded = MR_TRUE;
#line 902 "goal_form.m"
        else
#line 903 "goal_form.m"
          {
#line 903 "goal_form.m"
            MR_Word hlds__goal_form__Goal_2 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__HeadVar__1_1, (MR_Integer) 0)));
#line 903 "goal_form.m"
            MR_Word hlds__goal_form__Goals_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__HeadVar__1_1, (MR_Integer) 1)));
#line 903 "goal_form.m"
            MR_Word hlds__goal_form__GoalExpr_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Goal_2, (MR_Integer) 0)));
#line 883 "goal_form.m"
            MR_Word hlds__goal_form__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Goal_2, (MR_Integer) 1)));

#line 884 "goal_form.m"
            {
#line 884 "goal_form.m"
              hlds__goal_form__succeeded = hlds__goal_form__cannot_stack_flush_2_1_p_0(hlds__goal_form__GoalExpr_4);
            }
#line 903 "goal_form.m"
            if (hlds__goal_form__succeeded)
#line 905 "goal_form.m"
              {
#line 905 "goal_form.m"
                /* direct tailcall eliminated */
#line 905 "goal_form.m"
                {
#line 905 "goal_form.m"
                  MR_Word hlds__goal_form__HeadVar__1__tmp_copy_1 = hlds__goal_form__Goals_3;

#line 905 "goal_form.m"
                  hlds__goal_form__HeadVar__1_1 = hlds__goal_form__HeadVar__1__tmp_copy_1;
#line 905 "goal_form.m"
                }
#line 905 "goal_form.m"
                continue;
#line 905 "goal_form.m"
              }
#line 903 "goal_form.m"
          }
#line 902 "goal_form.m"
        return hlds__goal_form__succeeded;
#line 902 "goal_form.m"
      }
#line 902 "goal_form.m"
      break;
#line 902 "goal_form.m"
    }
#line 900 "goal_form.m"
}

#line 886 "goal_form.m"
static MR_bool MR_CALL 
hlds__goal_form__cannot_stack_flush_2_1_p_0(
#line 886 "goal_form.m"
  MR_Word hlds__goal_form__HeadVar__1_1)
#line 886 "goal_form.m"
{
#line 888 "goal_form.m"
  {
#line 888 "goal_form.m"
    MR_bool hlds__goal_form__succeeded;

#line 888 "goal_form.m"
#line 888 "goal_form.m"
    switch (MR_tag((MR_Word) hlds__goal_form__HeadVar__1_1)) {
#line 888 "goal_form.m"
      default:
#line 888 "goal_form.m"
        hlds__goal_form__succeeded = MR_FALSE;
#line 888 "goal_form.m"
        break;
#line 888 "goal_form.m"
      case (MR_Integer) 0:
#line 897 "goal_form.m"
        {
#line 897 "goal_form.m"
          MR_Word hlds__goal_form__Unify_24;
#line 897 "goal_form.m"
          MR_Word hlds__goal_form__V_30_30 = (MR_Word) MR_body(((MR_Word) hlds__goal_form__HeadVar__1_1), (MR_Integer) 0);
#line 897 "goal_form.m"
          MR_Word hlds__goal_form__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__V_30_30, (MR_Integer) 0)));
#line 897 "goal_form.m"
          MR_Word hlds__goal_form__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__V_30_30, (MR_Integer) 1)));
#line 897 "goal_form.m"
          MR_Word hlds__goal_form__V_21_21;
#line 897 "goal_form.m"
          MR_Word hlds__goal_form__V_22_22;
#line 897 "goal_form.m"
          MR_Word hlds__goal_form__V_23_23;
#line 897 "goal_form.m"
          MR_Word hlds__goal_form__V_25_25;
#line 898 "goal_form.m"
          MR_Word hlds__goal_form__V_27_27;
#line 898 "goal_form.m"
          MR_Word hlds__goal_form__V_28_28;
#line 898 "goal_form.m"
          MR_Word hlds__goal_form__V_29_29;

#line 897 "goal_form.m"
          hlds__goal_form__succeeded = ((MR_tag((MR_Word) hlds__goal_form__V_31_31)) == (MR_mktag((MR_Integer) 1)));
#line 897 "goal_form.m"
          if (hlds__goal_form__succeeded)
#line 897 "goal_form.m"
            {
#line 897 "goal_form.m"
              hlds__goal_form__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__V_31_31, (MR_Integer) 0)));
#line 897 "goal_form.m"
              hlds__goal_form__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__V_31_31, (MR_Integer) 1)));
#line 897 "goal_form.m"
              hlds__goal_form__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__V_31_31, (MR_Integer) 2)));
#line 897 "goal_form.m"
              hlds__goal_form__Unify_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__V_31_31, (MR_Integer) 3)));
#line 897 "goal_form.m"
              hlds__goal_form__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__V_31_31, (MR_Integer) 4)));
#line 898 "goal_form.m"
              hlds__goal_form__succeeded = ((((MR_tag((MR_Word) hlds__goal_form__Unify_24)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__Unify_24, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 898 "goal_form.m"
              if (hlds__goal_form__succeeded)
#line 898 "goal_form.m"
                {
#line 898 "goal_form.m"
                  hlds__goal_form__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__Unify_24, (MR_Integer) 1)));
#line 898 "goal_form.m"
                  hlds__goal_form__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__Unify_24, (MR_Integer) 2)));
#line 898 "goal_form.m"
                  hlds__goal_form__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__Unify_24, (MR_Integer) 3)));
#line 898 "goal_form.m"
                }
#line 898 "goal_form.m"
              hlds__goal_form__succeeded = !(hlds__goal_form__succeeded);
#line 897 "goal_form.m"
            }
#line 897 "goal_form.m"
        }
#line 888 "goal_form.m"
        break;
#line 888 "goal_form.m"
      case (MR_Integer) 1:
#line 888 "goal_form.m"
        {
#line 888 "goal_form.m"
          MR_Word hlds__goal_form__Unify_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__HeadVar__1_1, (MR_Integer) 3)));
#line 888 "goal_form.m"
          MR_Word hlds__goal_form__V_2_2 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__HeadVar__1_1, (MR_Integer) 0)));
#line 888 "goal_form.m"
          MR_Word hlds__goal_form__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__HeadVar__1_1, (MR_Integer) 1)));
#line 888 "goal_form.m"
          MR_Word hlds__goal_form__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__HeadVar__1_1, (MR_Integer) 2)));
#line 888 "goal_form.m"
          MR_Word hlds__goal_form__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__HeadVar__1_1, (MR_Integer) 4)));
#line 889 "goal_form.m"
          MR_Word hlds__goal_form__V_7_7;
#line 889 "goal_form.m"
          MR_Word hlds__goal_form__V_8_8;
#line 889 "goal_form.m"
          MR_Word hlds__goal_form__V_9_9;

#line 889 "goal_form.m"
          hlds__goal_form__succeeded = ((((MR_tag((MR_Word) hlds__goal_form__Unify_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__Unify_5, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 889 "goal_form.m"
          if (hlds__goal_form__succeeded)
#line 889 "goal_form.m"
            {
#line 889 "goal_form.m"
              hlds__goal_form__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__Unify_5, (MR_Integer) 1)));
#line 889 "goal_form.m"
              hlds__goal_form__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__Unify_5, (MR_Integer) 2)));
#line 889 "goal_form.m"
              hlds__goal_form__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__Unify_5, (MR_Integer) 3)));
#line 889 "goal_form.m"
            }
#line 889 "goal_form.m"
          hlds__goal_form__succeeded = !(hlds__goal_form__succeeded);
#line 888 "goal_form.m"
        }
#line 888 "goal_form.m"
        break;
#line 888 "goal_form.m"
      case (MR_Integer) 2:
#line 890 "goal_form.m"
        {
#line 890 "goal_form.m"
          MR_Word hlds__goal_form__BuiltinState_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__HeadVar__1_1, (MR_Integer) 3)));
#line 890 "goal_form.m"
          MR_Word hlds__goal_form__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__HeadVar__1_1, (MR_Integer) 0)));
#line 890 "goal_form.m"
          MR_Integer hlds__goal_form__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(2), hlds__goal_form__HeadVar__1_1, (MR_Integer) 1)));
#line 890 "goal_form.m"
          MR_Word hlds__goal_form__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__HeadVar__1_1, (MR_Integer) 2)));
#line 890 "goal_form.m"
          MR_Word hlds__goal_form__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__HeadVar__1_1, (MR_Integer) 4)));
#line 890 "goal_form.m"
          MR_Word hlds__goal_form__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__HeadVar__1_1, (MR_Integer) 5)));

#line 891 "goal_form.m"
          hlds__goal_form__succeeded = (hlds__goal_form__BuiltinState_13 == (MR_Integer) 0);
#line 890 "goal_form.m"
        }
#line 888 "goal_form.m"
        break;
#line 888 "goal_form.m"
      case (MR_Integer) 3:
#line 888 "goal_form.m"
#line 888 "goal_form.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__HeadVar__1_1, (MR_Integer) 0)))) {
#line 888 "goal_form.m"
          default:
#line 888 "goal_form.m"
            hlds__goal_form__succeeded = MR_FALSE;
#line 888 "goal_form.m"
            break;
#line 888 "goal_form.m"
          case (MR_Integer) 2:
#line 892 "goal_form.m"
            {
#line 892 "goal_form.m"
              MR_Word hlds__goal_form__ConjType_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__HeadVar__1_1, (MR_Integer) 1)));
#line 892 "goal_form.m"
              MR_Word hlds__goal_form__Goals_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__HeadVar__1_1, (MR_Integer) 2)));

#line 893 "goal_form.m"
              hlds__goal_form__succeeded = (hlds__goal_form__ConjType_16 == (MR_Integer) 0);
#line 892 "goal_form.m"
              if (hlds__goal_form__succeeded)
#line 894 "goal_form.m"
                {
#line 894 "goal_form.m"
                  return hlds__goal_form__succeeded = hlds__goal_form__cannot_stack_flush_goals_1_p_0(hlds__goal_form__Goals_17);
                }
#line 892 "goal_form.m"
            }
#line 888 "goal_form.m"
            break;
#line 888 "goal_form.m"
          case (MR_Integer) 4:
#line 895 "goal_form.m"
            {
#line 895 "goal_form.m"
              MR_Word hlds__goal_form__Cases_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__HeadVar__1_1, (MR_Integer) 3)));
#line 895 "goal_form.m"
              MR_Word hlds__goal_form__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__HeadVar__1_1, (MR_Integer) 1)));
#line 895 "goal_form.m"
              MR_Word hlds__goal_form__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__HeadVar__1_1, (MR_Integer) 2)));

#line 896 "goal_form.m"
              {
#line 896 "goal_form.m"
                return hlds__goal_form__succeeded = hlds__goal_form__cannot_stack_flush_cases_1_p_0(hlds__goal_form__Cases_20);
              }
#line 895 "goal_form.m"
            }
#line 888 "goal_form.m"
            break;
#line 888 "goal_form.m"
        }
#line 888 "goal_form.m"
        break;
#line 888 "goal_form.m"
    }
#line 888 "goal_form.m"
    return hlds__goal_form__succeeded;
#line 888 "goal_form.m"
  }
#line 886 "goal_form.m"
}

#line 871 "goal_form.m"
static void MR_CALL 
hlds__goal_form__cases_may_allocate_heap_2_p_0(
#line 871 "goal_form.m"
  MR_Word hlds__goal_form__HeadVar__1_1,
#line 871 "goal_form.m"
  MR_Word * hlds__goal_form__HeadVar__2_2)
#line 871 "goal_form.m"
{
#line 873 "goal_form.m"
  while (MR_TRUE)
#line 873 "goal_form.m"
    {
#line 873 "goal_form.m"
      /* tailcall optimized into a loop */
#line 873 "goal_form.m"
      {
#line 873 "goal_form.m"
        MR_bool hlds__goal_form__succeeded;

#line 873 "goal_form.m"
        if ((hlds__goal_form__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 873 "goal_form.m"
          *hlds__goal_form__HeadVar__2_2 = (MR_Integer) 0;
#line 873 "goal_form.m"
        else
#line 874 "goal_form.m"
          {
#line 874 "goal_form.m"
            MR_Word hlds__goal_form__Goal_5;
#line 874 "goal_form.m"
            MR_Word hlds__goal_form__Cases_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__HeadVar__1_1, (MR_Integer) 1)));
#line 874 "goal_form.m"
            MR_Word hlds__goal_form__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__HeadVar__1_1, (MR_Integer) 0)));
#line 874 "goal_form.m"
            MR_Word hlds__goal_form__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__V_8_8, (MR_Integer) 0)));
#line 874 "goal_form.m"
            MR_Word hlds__goal_form__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__V_8_8, (MR_Integer) 1)));
#line 875 "goal_form.m"
            MR_Word hlds__goal_form__V_10_10;
#line 875 "goal_form.m"
            MR_Word hlds__goal_form__GoalExpr_12;
#line 762 "goal_form.m"
            MR_Word hlds__goal_form___GoalInfo_13;

#line 874 "goal_form.m"
            hlds__goal_form__Goal_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__V_8_8, (MR_Integer) 2)));
#line 762 "goal_form.m"
            hlds__goal_form__GoalExpr_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Goal_5, (MR_Integer) 0)));
#line 762 "goal_form.m"
            hlds__goal_form___GoalInfo_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Goal_5, (MR_Integer) 1)));
#line 763 "goal_form.m"
            {
#line 763 "goal_form.m"
              hlds__goal_form__goal_may_allocate_heap_2_2_p_0(hlds__goal_form__GoalExpr_12, &hlds__goal_form__V_10_10);
            }
#line 875 "goal_form.m"
            hlds__goal_form__succeeded = ((MR_Integer) 1 == hlds__goal_form__V_10_10);
#line 877 "goal_form.m"
            if (hlds__goal_form__succeeded)
#line 876 "goal_form.m"
              *hlds__goal_form__HeadVar__2_2 = (MR_Integer) 1;
#line 877 "goal_form.m"
            else
#line 878 "goal_form.m"
              {
#line 878 "goal_form.m"
                /* direct tailcall eliminated */
#line 878 "goal_form.m"
                {
#line 878 "goal_form.m"
                  MR_Word hlds__goal_form__HeadVar__1__tmp_copy_1 = hlds__goal_form__Cases_6;

#line 878 "goal_form.m"
                  hlds__goal_form__HeadVar__1_1 = hlds__goal_form__HeadVar__1__tmp_copy_1;
#line 878 "goal_form.m"
                }
#line 878 "goal_form.m"
                continue;
#line 878 "goal_form.m"
              }
#line 874 "goal_form.m"
          }
#line 873 "goal_form.m"
      }
#line 873 "goal_form.m"
      break;
#line 873 "goal_form.m"
    }
#line 871 "goal_form.m"
}

#line 861 "goal_form.m"
static void MR_CALL 
hlds__goal_form__goal_list_may_allocate_heap_2_p_0(
#line 861 "goal_form.m"
  MR_Word hlds__goal_form__HeadVar__1_1,
#line 861 "goal_form.m"
  MR_Word * hlds__goal_form__HeadVar__2_2)
#line 861 "goal_form.m"
{
#line 863 "goal_form.m"
  while (MR_TRUE)
#line 863 "goal_form.m"
    {
#line 863 "goal_form.m"
      /* tailcall optimized into a loop */
#line 863 "goal_form.m"
      {
#line 863 "goal_form.m"
        MR_bool hlds__goal_form__succeeded;

#line 863 "goal_form.m"
        if ((hlds__goal_form__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 863 "goal_form.m"
          *hlds__goal_form__HeadVar__2_2 = (MR_Integer) 0;
#line 863 "goal_form.m"
        else
#line 864 "goal_form.m"
          {
#line 864 "goal_form.m"
            MR_Word hlds__goal_form__Goal_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__HeadVar__1_1, (MR_Integer) 0)));
#line 864 "goal_form.m"
            MR_Word hlds__goal_form__Goals_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__HeadVar__1_1, (MR_Integer) 1)));
#line 865 "goal_form.m"
            MR_Word hlds__goal_form__V_7_7;
#line 865 "goal_form.m"
            MR_Word hlds__goal_form__GoalExpr_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Goal_3, (MR_Integer) 0)));
#line 762 "goal_form.m"
            MR_Word hlds__goal_form___GoalInfo_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Goal_3, (MR_Integer) 1)));

#line 763 "goal_form.m"
            {
#line 763 "goal_form.m"
              hlds__goal_form__goal_may_allocate_heap_2_2_p_0(hlds__goal_form__GoalExpr_9, &hlds__goal_form__V_7_7);
            }
#line 865 "goal_form.m"
            hlds__goal_form__succeeded = ((MR_Integer) 1 == hlds__goal_form__V_7_7);
#line 867 "goal_form.m"
            if (hlds__goal_form__succeeded)
#line 866 "goal_form.m"
              *hlds__goal_form__HeadVar__2_2 = (MR_Integer) 1;
#line 867 "goal_form.m"
            else
#line 868 "goal_form.m"
              {
#line 868 "goal_form.m"
                /* direct tailcall eliminated */
#line 868 "goal_form.m"
                {
#line 868 "goal_form.m"
                  MR_Word hlds__goal_form__HeadVar__1__tmp_copy_1 = hlds__goal_form__Goals_4;

#line 868 "goal_form.m"
                  hlds__goal_form__HeadVar__1_1 = hlds__goal_form__HeadVar__1__tmp_copy_1;
#line 868 "goal_form.m"
                }
#line 868 "goal_form.m"
                continue;
#line 868 "goal_form.m"
              }
#line 864 "goal_form.m"
          }
#line 863 "goal_form.m"
      }
#line 863 "goal_form.m"
      break;
#line 863 "goal_form.m"
    }
#line 861 "goal_form.m"
}

#line 765 "goal_form.m"
static void MR_CALL 
hlds__goal_form__goal_may_allocate_heap_2_2_p_0(
#line 765 "goal_form.m"
  MR_Word hlds__goal_form__GoalExpr_3,
#line 765 "goal_form.m"
  MR_Word * hlds__goal_form__May_4)
#line 765 "goal_form.m"
{
#line 769 "goal_form.m"
  while (MR_TRUE)
#line 769 "goal_form.m"
    {
#line 769 "goal_form.m"
      /* tailcall optimized into a loop */
#line 769 "goal_form.m"
      {
#line 769 "goal_form.m"
        MR_bool hlds__goal_form__succeeded;

#line 769 "goal_form.m"
#line 769 "goal_form.m"
        switch (MR_tag((MR_Word) hlds__goal_form__GoalExpr_3)) {
#line 769 "goal_form.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 769 "goal_form.m"
          case (MR_Integer) 0:
#line 825 "goal_form.m"
            {
#line 825 "goal_form.m"
              MR_Word hlds__goal_form__SubGoal_46 = (MR_Word) MR_body(((MR_Word) hlds__goal_form__GoalExpr_3), (MR_Integer) 0);
#line 825 "goal_form.m"
              MR_Word hlds__goal_form__GoalExpr_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__SubGoal_46, (MR_Integer) 0)));
#line 762 "goal_form.m"
              MR_Word hlds__goal_form___GoalInfo_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__SubGoal_46, (MR_Integer) 1)));

#line 763 "goal_form.m"
              /* direct tailcall eliminated */
#line 763 "goal_form.m"
              {
#line 763 "goal_form.m"
                MR_Word hlds__goal_form__GoalExpr__tmp_copy_3 = hlds__goal_form__GoalExpr_81;

#line 763 "goal_form.m"
                hlds__goal_form__GoalExpr_3 = hlds__goal_form__GoalExpr__tmp_copy_3;
#line 763 "goal_form.m"
              }
#line 763 "goal_form.m"
              continue;
#line 825 "goal_form.m"
            }
#line 769 "goal_form.m"
            break;
#line 769 "goal_form.m"
          case (MR_Integer) 1:
#line 769 "goal_form.m"
            {
#line 769 "goal_form.m"
              MR_Word hlds__goal_form__Unification_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__GoalExpr_3, (MR_Integer) 3)));
#line 769 "goal_form.m"
              MR_Word hlds__goal_form__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__GoalExpr_3, (MR_Integer) 0)));
#line 769 "goal_form.m"
              MR_Word hlds__goal_form__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__GoalExpr_3, (MR_Integer) 1)));
#line 769 "goal_form.m"
              MR_Word hlds__goal_form__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__GoalExpr_3, (MR_Integer) 2)));
#line 769 "goal_form.m"
              MR_Word hlds__goal_form__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__GoalExpr_3, (MR_Integer) 4)));
#line 771 "goal_form.m"
              MR_Word hlds__goal_form__Args_12;
#line 771 "goal_form.m"
              MR_Word hlds__goal_form__V_10_10;
#line 771 "goal_form.m"
              MR_Word hlds__goal_form__V_11_11;
#line 771 "goal_form.m"
              MR_Word hlds__goal_form__V_13_13;
#line 771 "goal_form.m"
              MR_Word hlds__goal_form__V_14_14;
#line 771 "goal_form.m"
              MR_Word hlds__goal_form__V_15_15;
#line 771 "goal_form.m"
              MR_Word hlds__goal_form__V_16_16;
#line 772 "goal_form.m"
              MR_Word hlds__goal_form__V_17_17;
#line 772 "goal_form.m"
              MR_Word hlds__goal_form__V_18_18;

#line 771 "goal_form.m"
              hlds__goal_form__succeeded = ((MR_tag((MR_Word) hlds__goal_form__Unification_8)) == (MR_mktag((MR_Integer) 0)));
#line 771 "goal_form.m"
              if (hlds__goal_form__succeeded)
#line 771 "goal_form.m"
                {
#line 771 "goal_form.m"
                  hlds__goal_form__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Unification_8, (MR_Integer) 0)));
#line 771 "goal_form.m"
                  hlds__goal_form__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Unification_8, (MR_Integer) 1)));
#line 771 "goal_form.m"
                  hlds__goal_form__Args_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Unification_8, (MR_Integer) 2)));
#line 771 "goal_form.m"
                  hlds__goal_form__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Unification_8, (MR_Integer) 3)));
#line 771 "goal_form.m"
                  hlds__goal_form__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Unification_8, (MR_Integer) 4)));
#line 771 "goal_form.m"
                  hlds__goal_form__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Unification_8, (MR_Integer) 5)));
#line 771 "goal_form.m"
                  hlds__goal_form__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Unification_8, (MR_Integer) 6)));
#line 772 "goal_form.m"
                  hlds__goal_form__succeeded = ((MR_tag((MR_Word) hlds__goal_form__Args_12)) == (MR_mktag((MR_Integer) 1)));
#line 772 "goal_form.m"
                  if (hlds__goal_form__succeeded)
#line 772 "goal_form.m"
                    {
#line 772 "goal_form.m"
                      hlds__goal_form__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__Args_12, (MR_Integer) 0)));
#line 772 "goal_form.m"
                      hlds__goal_form__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__Args_12, (MR_Integer) 1)));
#line 772 "goal_form.m"
                    }
#line 771 "goal_form.m"
                }
#line 775 "goal_form.m"
              if (hlds__goal_form__succeeded)
#line 774 "goal_form.m"
                *hlds__goal_form__May_4 = (MR_Integer) 1;
#line 775 "goal_form.m"
              else
#line 776 "goal_form.m"
                *hlds__goal_form__May_4 = (MR_Integer) 0;
#line 769 "goal_form.m"
            }
#line 769 "goal_form.m"
            break;
#line 769 "goal_form.m"
          case (MR_Integer) 2:
#line 779 "goal_form.m"
            {
#line 779 "goal_form.m"
              MR_Word hlds__goal_form__Builtin_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__GoalExpr_3, (MR_Integer) 3)));
#line 779 "goal_form.m"
              MR_Word hlds__goal_form__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__GoalExpr_3, (MR_Integer) 0)));
#line 779 "goal_form.m"
              MR_Integer hlds__goal_form__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(2), hlds__goal_form__GoalExpr_3, (MR_Integer) 1)));
#line 779 "goal_form.m"
              MR_Word hlds__goal_form__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__GoalExpr_3, (MR_Integer) 2)));
#line 779 "goal_form.m"
              MR_Word hlds__goal_form__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__GoalExpr_3, (MR_Integer) 4)));
#line 779 "goal_form.m"
              MR_Word hlds__goal_form__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__GoalExpr_3, (MR_Integer) 5)));

#line 783 "goal_form.m"
#line 783 "goal_form.m"
              switch (hlds__goal_form__Builtin_22) {
#line 783 "goal_form.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 783 "goal_form.m"
                case (MR_Integer) 0:
#line 782 "goal_form.m"
                  *hlds__goal_form__May_4 = (MR_Integer) 0;
#line 783 "goal_form.m"
                  break;
#line 783 "goal_form.m"
                case (MR_Integer) 2:
#line 783 "goal_form.m"
                case (MR_Integer) 1:
#line 787 "goal_form.m"
                  *hlds__goal_form__May_4 = (MR_Integer) 1;
#line 783 "goal_form.m"
                  break;
#line 783 "goal_form.m"
              }
#line 779 "goal_form.m"
            }
#line 769 "goal_form.m"
            break;
#line 769 "goal_form.m"
          case (MR_Integer) 3:
#line 769 "goal_form.m"
#line 769 "goal_form.m"
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_3, (MR_Integer) 0)))) {
#line 769 "goal_form.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 769 "goal_form.m"
              case (MR_Integer) 0:
#line 791 "goal_form.m"
                *hlds__goal_form__May_4 = (MR_Integer) 1;
#line 769 "goal_form.m"
                break;
#line 769 "goal_form.m"
              case (MR_Integer) 1:
#line 799 "goal_form.m"
                *hlds__goal_form__May_4 = (MR_Integer) 1;
#line 769 "goal_form.m"
                break;
#line 769 "goal_form.m"
              case (MR_Integer) 2:
#line 801 "goal_form.m"
                {
#line 801 "goal_form.m"
                  MR_Word hlds__goal_form__ConjType_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_3, (MR_Integer) 1)));
#line 801 "goal_form.m"
                  MR_Word hlds__goal_form__Goals_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_3, (MR_Integer) 2)));

#line 805 "goal_form.m"
#line 805 "goal_form.m"
                  switch (hlds__goal_form__ConjType_37) {
#line 805 "goal_form.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 805 "goal_form.m"
                    case (MR_Integer) 1:
#line 804 "goal_form.m"
                      *hlds__goal_form__May_4 = (MR_Integer) 1;
#line 805 "goal_form.m"
                      break;
#line 805 "goal_form.m"
                    case (MR_Integer) 0:
#line 807 "goal_form.m"
                      {
#line 807 "goal_form.m"
                        hlds__goal_form__goal_list_may_allocate_heap_2_p_0(hlds__goal_form__Goals_38, hlds__goal_form__May_4);
#line 807 "goal_form.m"
                        return;
                      }
#line 805 "goal_form.m"
                      break;
#line 805 "goal_form.m"
                  }
#line 801 "goal_form.m"
                }
#line 769 "goal_form.m"
                break;
#line 769 "goal_form.m"
              case (MR_Integer) 3:
#line 810 "goal_form.m"
                {
#line 810 "goal_form.m"
                  MR_Word hlds__goal_form__Goals_66 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_3, (MR_Integer) 1)));

#line 811 "goal_form.m"
                  {
#line 811 "goal_form.m"
                    hlds__goal_form__goal_list_may_allocate_heap_2_p_0(hlds__goal_form__Goals_66, hlds__goal_form__May_4);
#line 811 "goal_form.m"
                    return;
                  }
#line 810 "goal_form.m"
                }
#line 769 "goal_form.m"
                break;
#line 769 "goal_form.m"
              case (MR_Integer) 4:
#line 813 "goal_form.m"
                {
#line 813 "goal_form.m"
                  MR_Word hlds__goal_form__Cases_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_3, (MR_Integer) 3)));
#line 813 "goal_form.m"
                  MR_Word hlds__goal_form___Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_3, (MR_Integer) 1)));
#line 813 "goal_form.m"
                  MR_Word hlds__goal_form___CanFail_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_3, (MR_Integer) 2)));

#line 814 "goal_form.m"
                  {
#line 814 "goal_form.m"
                    hlds__goal_form__cases_may_allocate_heap_2_p_0(hlds__goal_form__Cases_41, hlds__goal_form__May_4);
#line 814 "goal_form.m"
                    return;
                  }
#line 813 "goal_form.m"
                }
#line 769 "goal_form.m"
                break;
#line 769 "goal_form.m"
              case (MR_Integer) 5:
#line 828 "goal_form.m"
                {
#line 828 "goal_form.m"
                  MR_Word hlds__goal_form__Reason_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_3, (MR_Integer) 1)));
#line 828 "goal_form.m"
                  MR_Word hlds__goal_form__SubGoal_67 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_3, (MR_Integer) 2)));
#line 830 "goal_form.m"
                  MR_Word hlds__goal_form__FGT_49;
#line 830 "goal_form.m"
                  MR_Word hlds__goal_form__V_48_48;

#line 830 "goal_form.m"
                  hlds__goal_form__succeeded = ((((MR_tag((MR_Word) hlds__goal_form__Reason_47)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__Reason_47, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 830 "goal_form.m"
                  if (hlds__goal_form__succeeded)
#line 830 "goal_form.m"
                    {
#line 830 "goal_form.m"
                      hlds__goal_form__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__Reason_47, (MR_Integer) 1)));
#line 830 "goal_form.m"
                      hlds__goal_form__FGT_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__Reason_47, (MR_Integer) 2)));
#line 832 "goal_form.m"
#line 832 "goal_form.m"
                      switch (hlds__goal_form__FGT_49) {
#line 832 "goal_form.m"
                        default:
#line 832 "goal_form.m"
                          hlds__goal_form__succeeded = MR_FALSE;
#line 832 "goal_form.m"
                          break;
#line 832 "goal_form.m"
                        case (MR_Integer) 1:
#line 831 "goal_form.m"
                          hlds__goal_form__succeeded = MR_TRUE;
#line 832 "goal_form.m"
                          break;
#line 832 "goal_form.m"
                        case (MR_Integer) 2:
#line 832 "goal_form.m"
                          hlds__goal_form__succeeded = MR_TRUE;
#line 832 "goal_form.m"
                          break;
#line 832 "goal_form.m"
                      }
#line 830 "goal_form.m"
                    }
#line 841 "goal_form.m"
                  if (hlds__goal_form__succeeded)
#line 840 "goal_form.m"
                    *hlds__goal_form__May_4 = (MR_Integer) 1;
#line 841 "goal_form.m"
                  else
#line 762 "goal_form.m"
                    {
#line 762 "goal_form.m"
                      MR_Word hlds__goal_form__GoalExpr_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__SubGoal_67, (MR_Integer) 0)));
#line 762 "goal_form.m"
                      MR_Word hlds__goal_form___GoalInfo_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__SubGoal_67, (MR_Integer) 1)));

#line 763 "goal_form.m"
                      /* direct tailcall eliminated */
#line 763 "goal_form.m"
                      {
#line 763 "goal_form.m"
                        MR_Word hlds__goal_form__GoalExpr__tmp_copy_3 = hlds__goal_form__GoalExpr_84;

#line 763 "goal_form.m"
                        hlds__goal_form__GoalExpr_3 = hlds__goal_form__GoalExpr__tmp_copy_3;
#line 763 "goal_form.m"
                      }
#line 763 "goal_form.m"
                      continue;
#line 762 "goal_form.m"
                    }
#line 828 "goal_form.m"
                }
#line 769 "goal_form.m"
                break;
#line 769 "goal_form.m"
              case (MR_Integer) 6:
#line 816 "goal_form.m"
                {
#line 816 "goal_form.m"
                  MR_Word hlds__goal_form__Cond_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_3, (MR_Integer) 2)));
#line 816 "goal_form.m"
                  MR_Word hlds__goal_form__Then_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_3, (MR_Integer) 3)));
#line 816 "goal_form.m"
                  MR_Word hlds__goal_form__Else_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_3, (MR_Integer) 4)));
#line 816 "goal_form.m"
                  MR_Word hlds__goal_form___Vars_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_3, (MR_Integer) 1)));
#line 817 "goal_form.m"
                  MR_Word hlds__goal_form__V_68_68;
#line 817 "goal_form.m"
                  MR_Word hlds__goal_form__GoalExpr_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Cond_43, (MR_Integer) 0)));
#line 762 "goal_form.m"
                  MR_Word hlds__goal_form___GoalInfo_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Cond_43, (MR_Integer) 1)));

#line 763 "goal_form.m"
                  {
#line 763 "goal_form.m"
                    hlds__goal_form__goal_may_allocate_heap_2_2_p_0(hlds__goal_form__GoalExpr_72, &hlds__goal_form__V_68_68);
                  }
#line 817 "goal_form.m"
                  hlds__goal_form__succeeded = ((MR_Integer) 1 == hlds__goal_form__V_68_68);
#line 819 "goal_form.m"
                  if (hlds__goal_form__succeeded)
#line 818 "goal_form.m"
                    *hlds__goal_form__May_4 = (MR_Integer) 1;
#line 819 "goal_form.m"
                  else
#line 821 "goal_form.m"
                    {
#line 819 "goal_form.m"
                      MR_Word hlds__goal_form__V_69_69;
#line 819 "goal_form.m"
                      MR_Word hlds__goal_form__GoalExpr_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Then_44, (MR_Integer) 0)));
#line 762 "goal_form.m"
                      MR_Word hlds__goal_form___GoalInfo_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Then_44, (MR_Integer) 1)));

#line 763 "goal_form.m"
                      {
#line 763 "goal_form.m"
                        hlds__goal_form__goal_may_allocate_heap_2_2_p_0(hlds__goal_form__GoalExpr_75, &hlds__goal_form__V_69_69);
                      }
#line 819 "goal_form.m"
                      hlds__goal_form__succeeded = ((MR_Integer) 1 == hlds__goal_form__V_69_69);
#line 821 "goal_form.m"
                      if (hlds__goal_form__succeeded)
#line 820 "goal_form.m"
                        *hlds__goal_form__May_4 = (MR_Integer) 1;
#line 821 "goal_form.m"
                      else
#line 762 "goal_form.m"
                        {
#line 762 "goal_form.m"
                          MR_Word hlds__goal_form__GoalExpr_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Else_45, (MR_Integer) 0)));
#line 762 "goal_form.m"
                          MR_Word hlds__goal_form___GoalInfo_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Else_45, (MR_Integer) 1)));

#line 763 "goal_form.m"
                          /* direct tailcall eliminated */
#line 763 "goal_form.m"
                          {
#line 763 "goal_form.m"
                            MR_Word hlds__goal_form__GoalExpr__tmp_copy_3 = hlds__goal_form__GoalExpr_78;

#line 763 "goal_form.m"
                            hlds__goal_form__GoalExpr_3 = hlds__goal_form__GoalExpr__tmp_copy_3;
#line 763 "goal_form.m"
                          }
#line 763 "goal_form.m"
                          continue;
#line 762 "goal_form.m"
                        }
#line 821 "goal_form.m"
                    }
#line 816 "goal_form.m"
                }
#line 769 "goal_form.m"
                break;
#line 769 "goal_form.m"
              case (MR_Integer) 7:
#line 845 "goal_form.m"
                {
#line 845 "goal_form.m"
                  MR_Word hlds__goal_form__ShortHand_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_3, (MR_Integer) 1)));

#line 851 "goal_form.m"
#line 851 "goal_form.m"
                  switch (MR_tag((MR_Word) hlds__goal_form__ShortHand_50)) {
#line 851 "goal_form.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 851 "goal_form.m"
                    case (MR_Integer) 0:
#line 852 "goal_form.m"
                      {
#line 852 "goal_form.m"
                        MR_Word hlds__goal_form__GoalA_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__ShortHand_50, (MR_Integer) 0)));
#line 852 "goal_form.m"
                        MR_Word hlds__goal_form__GoalB_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__ShortHand_50, (MR_Integer) 1)));
#line 853 "goal_form.m"
                        MR_Word hlds__goal_form__V_70_70;
#line 853 "goal_form.m"
                        MR_Word hlds__goal_form__GoalExpr_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__GoalA_61, (MR_Integer) 0)));
#line 762 "goal_form.m"
                        MR_Word hlds__goal_form___GoalInfo_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__GoalA_61, (MR_Integer) 1)));

#line 763 "goal_form.m"
                        {
#line 763 "goal_form.m"
                          hlds__goal_form__goal_may_allocate_heap_2_2_p_0(hlds__goal_form__GoalExpr_87, &hlds__goal_form__V_70_70);
                        }
#line 853 "goal_form.m"
                        hlds__goal_form__succeeded = ((MR_Integer) 1 == hlds__goal_form__V_70_70);
#line 855 "goal_form.m"
                        if (hlds__goal_form__succeeded)
#line 854 "goal_form.m"
                          *hlds__goal_form__May_4 = (MR_Integer) 1;
#line 855 "goal_form.m"
                        else
#line 762 "goal_form.m"
                          {
#line 762 "goal_form.m"
                            MR_Word hlds__goal_form__GoalExpr_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__GoalB_62, (MR_Integer) 0)));
#line 762 "goal_form.m"
                            MR_Word hlds__goal_form___GoalInfo_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__GoalB_62, (MR_Integer) 1)));

#line 763 "goal_form.m"
                            /* direct tailcall eliminated */
#line 763 "goal_form.m"
                            {
#line 763 "goal_form.m"
                              MR_Word hlds__goal_form__GoalExpr__tmp_copy_3 = hlds__goal_form__GoalExpr_90;

#line 763 "goal_form.m"
                              hlds__goal_form__GoalExpr_3 = hlds__goal_form__GoalExpr__tmp_copy_3;
#line 763 "goal_form.m"
                            }
#line 763 "goal_form.m"
                            continue;
#line 762 "goal_form.m"
                          }
#line 852 "goal_form.m"
                      }
#line 851 "goal_form.m"
                      break;
#line 851 "goal_form.m"
                    case (MR_Integer) 1:
#line 851 "goal_form.m"
                    case (MR_Integer) 2:
#line 850 "goal_form.m"
                      *hlds__goal_form__May_4 = (MR_Integer) 1;
#line 851 "goal_form.m"
                      break;
#line 851 "goal_form.m"
                  }
#line 845 "goal_form.m"
                }
#line 769 "goal_form.m"
                break;
#line 769 "goal_form.m"
            }
#line 769 "goal_form.m"
            break;
#line 769 "goal_form.m"
        }
#line 769 "goal_form.m"
      }
#line 769 "goal_form.m"
      break;
#line 769 "goal_form.m"
    }
#line 765 "goal_form.m"
}

#line 742 "goal_form.m"
static MR_Word MR_CALL 
hlds__goal_form__goal_is_flat_list_1_f_0(
#line 742 "goal_form.m"
  MR_Word hlds__goal_form__HeadVar__1_1)
#line 742 "goal_form.m"
{
#line 744 "goal_form.m"
  while (MR_TRUE)
#line 744 "goal_form.m"
    {
#line 744 "goal_form.m"
      /* tailcall optimized into a loop */
#line 744 "goal_form.m"
      {
#line 744 "goal_form.m"
        MR_bool hlds__goal_form__succeeded;
#line 744 "goal_form.m"
        MR_Word hlds__goal_form__HeadVar__2_2;

#line 744 "goal_form.m"
        if ((hlds__goal_form__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 744 "goal_form.m"
          hlds__goal_form__HeadVar__2_2 = (MR_Integer) 1;
#line 744 "goal_form.m"
        else
#line 745 "goal_form.m"
          {
#line 745 "goal_form.m"
            MR_Word hlds__goal_form__Goal_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__HeadVar__1_1, (MR_Integer) 0)));
#line 745 "goal_form.m"
            MR_Word hlds__goal_form__Goals_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__HeadVar__1_1, (MR_Integer) 1)));
#line 746 "goal_form.m"
            MR_Word hlds__goal_form__V_6_6;
#line 746 "goal_form.m"
            MR_Word hlds__goal_form__GoalExpr_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Goal_3, (MR_Integer) 0)));
#line 697 "goal_form.m"
            MR_Word hlds__goal_form___GoalInfo_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Goal_3, (MR_Integer) 1)));

#line 697 "goal_form.m"
            {
#line 697 "goal_form.m"
              hlds__goal_form__V_6_6 = hlds__goal_form__goal_is_flat_expr_1_f_0(hlds__goal_form__GoalExpr_7);
            }
#line 746 "goal_form.m"
            hlds__goal_form__succeeded = (hlds__goal_form__V_6_6 == (MR_Integer) 1);
#line 748 "goal_form.m"
            if (hlds__goal_form__succeeded)
#line 747 "goal_form.m"
              {
#line 747 "goal_form.m"
                /* direct tailcall eliminated */
#line 747 "goal_form.m"
                {
#line 747 "goal_form.m"
                  MR_Word hlds__goal_form__HeadVar__1__tmp_copy_1 = hlds__goal_form__Goals_4;

#line 747 "goal_form.m"
                  hlds__goal_form__HeadVar__1_1 = hlds__goal_form__HeadVar__1__tmp_copy_1;
#line 747 "goal_form.m"
                }
#line 747 "goal_form.m"
                continue;
#line 747 "goal_form.m"
              }
#line 748 "goal_form.m"
            else
#line 749 "goal_form.m"
              hlds__goal_form__HeadVar__2_2 = (MR_Integer) 0;
#line 745 "goal_form.m"
          }
#line 744 "goal_form.m"
        return hlds__goal_form__HeadVar__2_2;
#line 744 "goal_form.m"
      }
#line 744 "goal_form.m"
      break;
#line 744 "goal_form.m"
    }
#line 742 "goal_form.m"
}

#line 699 "goal_form.m"
static MR_Word MR_CALL 
hlds__goal_form__goal_is_flat_expr_1_f_0(
#line 699 "goal_form.m"
  MR_Word hlds__goal_form__GoalExpr_3)
#line 699 "goal_form.m"
{
#line 707 "goal_form.m"
  while (MR_TRUE)
#line 707 "goal_form.m"
    {
#line 707 "goal_form.m"
      /* tailcall optimized into a loop */
#line 707 "goal_form.m"
      {
#line 707 "goal_form.m"
        MR_bool hlds__goal_form__succeeded;
#line 707 "goal_form.m"
        MR_Word hlds__goal_form__IsFlat_4;

#line 707 "goal_form.m"
#line 707 "goal_form.m"
        switch (MR_tag((MR_Word) hlds__goal_form__GoalExpr_3)) {
#line 707 "goal_form.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 707 "goal_form.m"
          case (MR_Integer) 0:
#line 726 "goal_form.m"
            {
#line 726 "goal_form.m"
              MR_Word hlds__goal_form__SubGoal_39 = (MR_Word) MR_body(((MR_Word) hlds__goal_form__GoalExpr_3), (MR_Integer) 0);
#line 726 "goal_form.m"
              MR_Word hlds__goal_form__GoalExpr_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__SubGoal_39, (MR_Integer) 0)));
#line 697 "goal_form.m"
              MR_Word hlds__goal_form___GoalInfo_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__SubGoal_39, (MR_Integer) 1)));

#line 697 "goal_form.m"
              /* direct tailcall eliminated */
#line 697 "goal_form.m"
              {
#line 697 "goal_form.m"
                MR_Word hlds__goal_form__GoalExpr__tmp_copy_3 = hlds__goal_form__GoalExpr_44;

#line 697 "goal_form.m"
                hlds__goal_form__GoalExpr_3 = hlds__goal_form__GoalExpr__tmp_copy_3;
#line 697 "goal_form.m"
              }
#line 697 "goal_form.m"
              continue;
#line 726 "goal_form.m"
            }
#line 707 "goal_form.m"
            break;
#line 707 "goal_form.m"
          case (MR_Integer) 1:
#line 707 "goal_form.m"
          case (MR_Integer) 2:
#line 708 "goal_form.m"
            hlds__goal_form__IsFlat_4 = (MR_Integer) 1;
#line 707 "goal_form.m"
            break;
#line 707 "goal_form.m"
          case (MR_Integer) 3:
#line 707 "goal_form.m"
#line 707 "goal_form.m"
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_3, (MR_Integer) 0)))) {
#line 707 "goal_form.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 707 "goal_form.m"
              case (MR_Integer) 0:
#line 707 "goal_form.m"
              case (MR_Integer) 1:
#line 708 "goal_form.m"
                hlds__goal_form__IsFlat_4 = (MR_Integer) 1;
#line 707 "goal_form.m"
                break;
#line 707 "goal_form.m"
              case (MR_Integer) 2:
#line 710 "goal_form.m"
                {
#line 710 "goal_form.m"
                  MR_Word hlds__goal_form__ConjType_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_3, (MR_Integer) 1)));
#line 710 "goal_form.m"
                  MR_Word hlds__goal_form__Goals_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_3, (MR_Integer) 2)));

#line 714 "goal_form.m"
#line 714 "goal_form.m"
                  switch (hlds__goal_form__ConjType_28) {
#line 714 "goal_form.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 714 "goal_form.m"
                    case (MR_Integer) 1:
#line 713 "goal_form.m"
                      hlds__goal_form__IsFlat_4 = (MR_Integer) 0;
#line 714 "goal_form.m"
                      break;
#line 714 "goal_form.m"
                    case (MR_Integer) 0:
#line 716 "goal_form.m"
                      {
#line 716 "goal_form.m"
                        return hlds__goal_form__IsFlat_4 = hlds__goal_form__goal_is_flat_list_1_f_0(hlds__goal_form__Goals_29);
                      }
#line 714 "goal_form.m"
                      break;
#line 714 "goal_form.m"
                  }
#line 710 "goal_form.m"
                }
#line 707 "goal_form.m"
                break;
#line 707 "goal_form.m"
              case (MR_Integer) 3:
#line 707 "goal_form.m"
              case (MR_Integer) 4:
#line 707 "goal_form.m"
              case (MR_Integer) 6:
#line 707 "goal_form.m"
              case (MR_Integer) 7:
#line 724 "goal_form.m"
                hlds__goal_form__IsFlat_4 = (MR_Integer) 0;
#line 707 "goal_form.m"
                break;
#line 707 "goal_form.m"
              case (MR_Integer) 5:
#line 729 "goal_form.m"
                {
#line 729 "goal_form.m"
                  MR_Word hlds__goal_form__Reason_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_3, (MR_Integer) 1)));
#line 729 "goal_form.m"
                  MR_Word hlds__goal_form__SubGoal_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_3, (MR_Integer) 2)));
#line 731 "goal_form.m"
                  MR_Word hlds__goal_form__FGT_42;
#line 731 "goal_form.m"
                  MR_Word hlds__goal_form__V_41_41;

#line 731 "goal_form.m"
                  hlds__goal_form__succeeded = ((((MR_tag((MR_Word) hlds__goal_form__Reason_40)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__Reason_40, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 731 "goal_form.m"
                  if (hlds__goal_form__succeeded)
#line 731 "goal_form.m"
                    {
#line 731 "goal_form.m"
                      hlds__goal_form__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__Reason_40, (MR_Integer) 1)));
#line 731 "goal_form.m"
                      hlds__goal_form__FGT_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__Reason_40, (MR_Integer) 2)));
#line 733 "goal_form.m"
#line 733 "goal_form.m"
                      switch (hlds__goal_form__FGT_42) {
#line 733 "goal_form.m"
                        default:
#line 733 "goal_form.m"
                          hlds__goal_form__succeeded = MR_FALSE;
#line 733 "goal_form.m"
                          break;
#line 733 "goal_form.m"
                        case (MR_Integer) 1:
#line 732 "goal_form.m"
                          hlds__goal_form__succeeded = MR_TRUE;
#line 733 "goal_form.m"
                          break;
#line 733 "goal_form.m"
                        case (MR_Integer) 2:
#line 733 "goal_form.m"
                          hlds__goal_form__succeeded = MR_TRUE;
#line 733 "goal_form.m"
                          break;
#line 733 "goal_form.m"
                      }
#line 731 "goal_form.m"
                    }
#line 737 "goal_form.m"
                  if (hlds__goal_form__succeeded)
#line 736 "goal_form.m"
                    hlds__goal_form__IsFlat_4 = (MR_Integer) 1;
#line 737 "goal_form.m"
                  else
#line 697 "goal_form.m"
                    {
#line 697 "goal_form.m"
                      MR_Word hlds__goal_form__GoalExpr_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__SubGoal_43, (MR_Integer) 0)));
#line 697 "goal_form.m"
                      MR_Word hlds__goal_form___GoalInfo_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__SubGoal_43, (MR_Integer) 1)));

#line 697 "goal_form.m"
                      /* direct tailcall eliminated */
#line 697 "goal_form.m"
                      {
#line 697 "goal_form.m"
                        MR_Word hlds__goal_form__GoalExpr__tmp_copy_3 = hlds__goal_form__GoalExpr_46;

#line 697 "goal_form.m"
                        hlds__goal_form__GoalExpr_3 = hlds__goal_form__GoalExpr__tmp_copy_3;
#line 697 "goal_form.m"
                      }
#line 697 "goal_form.m"
                      continue;
#line 697 "goal_form.m"
                    }
#line 729 "goal_form.m"
                }
#line 707 "goal_form.m"
                break;
#line 707 "goal_form.m"
            }
#line 707 "goal_form.m"
            break;
#line 707 "goal_form.m"
        }
#line 707 "goal_form.m"
        return hlds__goal_form__IsFlat_4;
#line 707 "goal_form.m"
      }
#line 707 "goal_form.m"
      break;
#line 707 "goal_form.m"
    }
#line 699 "goal_form.m"
}

#line 685 "goal_form.m"
static MR_Word MR_CALL 
hlds__goal_form__case_list_can_throw_2_f_0(
#line 685 "goal_form.m"
  MR_Word hlds__goal_form__MaybeModuleInfo_1,
#line 685 "goal_form.m"
  MR_Word hlds__goal_form__HeadVar__2_2)
#line 685 "goal_form.m"
{
#line 687 "goal_form.m"
  while (MR_TRUE)
#line 687 "goal_form.m"
    {
#line 687 "goal_form.m"
      /* tailcall optimized into a loop */
#line 687 "goal_form.m"
      {
#line 687 "goal_form.m"
        MR_bool hlds__goal_form__succeeded;
#line 687 "goal_form.m"
        MR_Word hlds__goal_form__HeadVar__3_3;

#line 687 "goal_form.m"
        if ((hlds__goal_form__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 687 "goal_form.m"
          hlds__goal_form__HeadVar__3_3 = (MR_Integer) 0;
#line 687 "goal_form.m"
        else
#line 688 "goal_form.m"
          {
#line 688 "goal_form.m"
            MR_Word hlds__goal_form__Goal_8;
#line 688 "goal_form.m"
            MR_Word hlds__goal_form__Cases_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__HeadVar__2_2, (MR_Integer) 1)));
#line 688 "goal_form.m"
            MR_Word hlds__goal_form__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__HeadVar__2_2, (MR_Integer) 0)));
#line 688 "goal_form.m"
            MR_Word hlds__goal_form__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__V_10_10, (MR_Integer) 0)));
#line 688 "goal_form.m"
            MR_Word hlds__goal_form__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__V_10_10, (MR_Integer) 1)));
#line 689 "goal_form.m"
            MR_Word hlds__goal_form__GoalExpr_14;
#line 689 "goal_form.m"
            MR_Word hlds__goal_form__GoalInfo_15;
#line 689 "goal_form.m"
            MR_Word hlds__goal_form__Determinism_16;

#line 688 "goal_form.m"
            hlds__goal_form__Goal_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__V_10_10, (MR_Integer) 2)));
#line 566 "goal_form.m"
            hlds__goal_form__GoalExpr_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Goal_8, (MR_Integer) 0)));
#line 566 "goal_form.m"
            hlds__goal_form__GoalInfo_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Goal_8, (MR_Integer) 1)));
#line 568 "goal_form.m"
            {
#line 568 "goal_form.m"
              hlds__goal_form__Determinism_16 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(hlds__goal_form__GoalInfo_15);
            }
#line 569 "goal_form.m"
            hlds__goal_form__succeeded = (hlds__goal_form__Determinism_16 == (MR_Integer) 6);
#line 571 "goal_form.m"
            if (hlds__goal_form__succeeded)
#line 570 "goal_form.m"
              hlds__goal_form__succeeded = MR_TRUE;
#line 571 "goal_form.m"
            else
#line 572 "goal_form.m"
              {
#line 572 "goal_form.m"
                MR_Word hlds__goal_form__V_18_18;

#line 572 "goal_form.m"
                {
#line 572 "goal_form.m"
                  hlds__goal_form__V_18_18 = hlds__goal_form__goal_expr_can_throw_2_f_0(hlds__goal_form__MaybeModuleInfo_1, hlds__goal_form__GoalExpr_14);
                }
#line 689 "goal_form.m"
                hlds__goal_form__succeeded = (hlds__goal_form__V_18_18 == (MR_Integer) 1);
#line 572 "goal_form.m"
              }
#line 688 "goal_form.m"
            if (hlds__goal_form__succeeded)
#line 690 "goal_form.m"
              hlds__goal_form__HeadVar__3_3 = (MR_Integer) 1;
#line 688 "goal_form.m"
            else
#line 692 "goal_form.m"
              {
#line 692 "goal_form.m"
                /* direct tailcall eliminated */
#line 692 "goal_form.m"
                {
#line 692 "goal_form.m"
                  MR_Word hlds__goal_form__HeadVar__2__tmp_copy_2 = hlds__goal_form__Cases_9;

#line 692 "goal_form.m"
                  hlds__goal_form__HeadVar__2_2 = hlds__goal_form__HeadVar__2__tmp_copy_2;
#line 692 "goal_form.m"
                }
#line 692 "goal_form.m"
                continue;
#line 692 "goal_form.m"
              }
#line 688 "goal_form.m"
          }
#line 687 "goal_form.m"
        return hlds__goal_form__HeadVar__3_3;
#line 687 "goal_form.m"
      }
#line 687 "goal_form.m"
      break;
#line 687 "goal_form.m"
    }
#line 685 "goal_form.m"
}

#line 675 "goal_form.m"
static MR_Word MR_CALL 
hlds__goal_form__goal_list_can_throw_2_f_0(
#line 675 "goal_form.m"
  MR_Word hlds__goal_form__MaybeModuleInfo_1,
#line 675 "goal_form.m"
  MR_Word hlds__goal_form__HeadVar__2_2)
#line 675 "goal_form.m"
{
#line 677 "goal_form.m"
  while (MR_TRUE)
#line 677 "goal_form.m"
    {
#line 677 "goal_form.m"
      /* tailcall optimized into a loop */
#line 677 "goal_form.m"
      {
#line 677 "goal_form.m"
        MR_bool hlds__goal_form__succeeded;
#line 677 "goal_form.m"
        MR_Word hlds__goal_form__HeadVar__3_3;

#line 677 "goal_form.m"
        if ((hlds__goal_form__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 677 "goal_form.m"
          hlds__goal_form__HeadVar__3_3 = (MR_Integer) 0;
#line 677 "goal_form.m"
        else
#line 678 "goal_form.m"
          {
#line 678 "goal_form.m"
            MR_Word hlds__goal_form__Goal_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__HeadVar__2_2, (MR_Integer) 0)));
#line 678 "goal_form.m"
            MR_Word hlds__goal_form__Goals_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__HeadVar__2_2, (MR_Integer) 1)));
#line 679 "goal_form.m"
            MR_Word hlds__goal_form__GoalExpr_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Goal_6, (MR_Integer) 0)));
#line 679 "goal_form.m"
            MR_Word hlds__goal_form__GoalInfo_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Goal_6, (MR_Integer) 1)));
#line 679 "goal_form.m"
            MR_Word hlds__goal_form__Determinism_13;

#line 568 "goal_form.m"
            {
#line 568 "goal_form.m"
              hlds__goal_form__Determinism_13 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(hlds__goal_form__GoalInfo_12);
            }
#line 569 "goal_form.m"
            hlds__goal_form__succeeded = (hlds__goal_form__Determinism_13 == (MR_Integer) 6);
#line 571 "goal_form.m"
            if (hlds__goal_form__succeeded)
#line 570 "goal_form.m"
              hlds__goal_form__succeeded = MR_TRUE;
#line 571 "goal_form.m"
            else
#line 572 "goal_form.m"
              {
#line 572 "goal_form.m"
                MR_Word hlds__goal_form__V_15_15;

#line 572 "goal_form.m"
                {
#line 572 "goal_form.m"
                  hlds__goal_form__V_15_15 = hlds__goal_form__goal_expr_can_throw_2_f_0(hlds__goal_form__MaybeModuleInfo_1, hlds__goal_form__GoalExpr_11);
                }
#line 679 "goal_form.m"
                hlds__goal_form__succeeded = (hlds__goal_form__V_15_15 == (MR_Integer) 1);
#line 572 "goal_form.m"
              }
#line 678 "goal_form.m"
            if (hlds__goal_form__succeeded)
#line 680 "goal_form.m"
              hlds__goal_form__HeadVar__3_3 = (MR_Integer) 1;
#line 678 "goal_form.m"
            else
#line 682 "goal_form.m"
              {
#line 682 "goal_form.m"
                /* direct tailcall eliminated */
#line 682 "goal_form.m"
                {
#line 682 "goal_form.m"
                  MR_Word hlds__goal_form__HeadVar__2__tmp_copy_2 = hlds__goal_form__Goals_7;

#line 682 "goal_form.m"
                  hlds__goal_form__HeadVar__2_2 = hlds__goal_form__HeadVar__2__tmp_copy_2;
#line 682 "goal_form.m"
                }
#line 682 "goal_form.m"
                continue;
#line 682 "goal_form.m"
              }
#line 678 "goal_form.m"
          }
#line 677 "goal_form.m"
        return hlds__goal_form__HeadVar__3_3;
#line 677 "goal_form.m"
      }
#line 677 "goal_form.m"
      break;
#line 677 "goal_form.m"
    }
#line 675 "goal_form.m"
}

#line 575 "goal_form.m"
static MR_Word MR_CALL 
hlds__goal_form__goal_expr_can_throw_2_f_0(
#line 575 "goal_form.m"
  MR_Word hlds__goal_form__MaybeModuleInfo_4,
#line 575 "goal_form.m"
  MR_Word hlds__goal_form__GoalExpr_5)
#line 575 "goal_form.m"
{
#line 579 "goal_form.m"
  {
#line 579 "goal_form.m"
    MR_bool hlds__goal_form__succeeded;
#line 579 "goal_form.m"
    MR_Word hlds__goal_form__CanThrow_6;

#line 579 "goal_form.m"
#line 579 "goal_form.m"
    switch (MR_tag((MR_Word) hlds__goal_form__GoalExpr_5)) {
#line 579 "goal_form.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 579 "goal_form.m"
      case (MR_Integer) 0:
#line 645 "goal_form.m"
        {
#line 645 "goal_form.m"
          MR_Word hlds__goal_form__SubGoal_66 = (MR_Word) MR_body(((MR_Word) hlds__goal_form__GoalExpr_5), (MR_Integer) 0);

#line 646 "goal_form.m"
          {
#line 646 "goal_form.m"
            return hlds__goal_form__CanThrow_6 = hlds__goal_form__goal_can_throw_func_2_f_0(hlds__goal_form__MaybeModuleInfo_4, hlds__goal_form__SubGoal_66);
          }
#line 645 "goal_form.m"
        }
#line 579 "goal_form.m"
        break;
#line 579 "goal_form.m"
      case (MR_Integer) 1:
#line 579 "goal_form.m"
        {
#line 579 "goal_form.m"
          MR_Word hlds__goal_form__Uni_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__GoalExpr_5, (MR_Integer) 3)));
#line 579 "goal_form.m"
          MR_Word hlds__goal_form__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__GoalExpr_5, (MR_Integer) 0)));
#line 579 "goal_form.m"
          MR_Word hlds__goal_form__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__GoalExpr_5, (MR_Integer) 1)));
#line 579 "goal_form.m"
          MR_Word hlds__goal_form__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__GoalExpr_5, (MR_Integer) 2)));
#line 579 "goal_form.m"
          MR_Word hlds__goal_form__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__GoalExpr_5, (MR_Integer) 4)));

#line 587 "goal_form.m"
#line 587 "goal_form.m"
          switch (MR_tag((MR_Word) hlds__goal_form__Uni_10)) {
#line 587 "goal_form.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 587 "goal_form.m"
            case (MR_Integer) 0:
#line 587 "goal_form.m"
            case (MR_Integer) 1:
#line 587 "goal_form.m"
            case (MR_Integer) 2:
#line 586 "goal_form.m"
              hlds__goal_form__CanThrow_6 = (MR_Integer) 0;
#line 587 "goal_form.m"
              break;
#line 587 "goal_form.m"
            case (MR_Integer) 3:
#line 587 "goal_form.m"
#line 587 "goal_form.m"
              switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__Uni_10, (MR_Integer) 0)))) {
#line 587 "goal_form.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 587 "goal_form.m"
                case (MR_Integer) 0:
#line 586 "goal_form.m"
                  hlds__goal_form__CanThrow_6 = (MR_Integer) 0;
#line 587 "goal_form.m"
                  break;
#line 587 "goal_form.m"
                case (MR_Integer) 1:
#line 591 "goal_form.m"
                  hlds__goal_form__CanThrow_6 = (MR_Integer) 1;
#line 587 "goal_form.m"
                  break;
#line 587 "goal_form.m"
              }
#line 587 "goal_form.m"
              break;
#line 587 "goal_form.m"
          }
#line 579 "goal_form.m"
        }
#line 579 "goal_form.m"
        break;
#line 579 "goal_form.m"
      case (MR_Integer) 2:
#line 594 "goal_form.m"
        {
#line 594 "goal_form.m"
          MR_Word hlds__goal_form__PredId_32 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__GoalExpr_5, (MR_Integer) 0)));
#line 594 "goal_form.m"
          MR_Integer hlds__goal_form__ProcId_33 = ((MR_Integer) (MR_hl_field(MR_mktag(2), hlds__goal_form__GoalExpr_5, (MR_Integer) 1)));
#line 594 "goal_form.m"
          MR_Word hlds__goal_form__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__GoalExpr_5, (MR_Integer) 2)));
#line 594 "goal_form.m"
          MR_Word hlds__goal_form__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__GoalExpr_5, (MR_Integer) 3)));
#line 594 "goal_form.m"
          MR_Word hlds__goal_form__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__GoalExpr_5, (MR_Integer) 4)));
#line 594 "goal_form.m"
          MR_Word hlds__goal_form__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__GoalExpr_5, (MR_Integer) 5)));
#line 596 "goal_form.m"
          MR_Word hlds__goal_form__ModuleInfo_38;
#line 596 "goal_form.m"
          MR_Word hlds__goal_form__ProcInfo_40;
#line 596 "goal_form.m"
          MR_Word hlds__goal_form__MaybeExceptionInfo_41;
#line 596 "goal_form.m"
          MR_Word hlds__goal_form__ExceptionInfo_42;
#line 596 "goal_form.m"
          MR_Word hlds__goal_form__V_89_89;
#line 597 "goal_form.m"
          MR_Word hlds__goal_form___PredInfo_39;
#line 601 "goal_form.m"
          MR_Word hlds__goal_form__V_43_43;

#line 596 "goal_form.m"
          hlds__goal_form__succeeded = ((MR_tag((MR_Word) hlds__goal_form__MaybeModuleInfo_4)) == (MR_mktag((MR_Integer) 1)));
#line 596 "goal_form.m"
          if (hlds__goal_form__succeeded)
#line 596 "goal_form.m"
            {
#line 596 "goal_form.m"
              hlds__goal_form__ModuleInfo_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__MaybeModuleInfo_4, (MR_Integer) 0)));
#line 597 "goal_form.m"
              {
#line 597 "goal_form.m"
                hlds__hlds_module__module_info_pred_proc_info_5_p_0(hlds__goal_form__ModuleInfo_38, hlds__goal_form__PredId_32, hlds__goal_form__ProcId_33, &hlds__goal_form___PredInfo_39, &hlds__goal_form__ProcInfo_40);
              }
#line 599 "goal_form.m"
              {
#line 599 "goal_form.m"
                hlds__hlds_pred__proc_info_get_exception_info_2_p_0(hlds__goal_form__ProcInfo_40, &hlds__goal_form__MaybeExceptionInfo_41);
              }
#line 600 "goal_form.m"
              hlds__goal_form__succeeded = ((MR_tag((MR_Word) hlds__goal_form__MaybeExceptionInfo_41)) == (MR_mktag((MR_Integer) 1)));
#line 600 "goal_form.m"
              if (hlds__goal_form__succeeded)
#line 600 "goal_form.m"
                {
#line 600 "goal_form.m"
                  hlds__goal_form__ExceptionInfo_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__MaybeExceptionInfo_41, (MR_Integer) 0)));
#line 601 "goal_form.m"
                  hlds__goal_form__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__ExceptionInfo_42, (MR_Integer) 0)));
#line 601 "goal_form.m"
                  hlds__goal_form__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__ExceptionInfo_42, (MR_Integer) 1)));
#line 601 "goal_form.m"
                  hlds__goal_form__succeeded = (hlds__goal_form__V_89_89 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 600 "goal_form.m"
                }
#line 596 "goal_form.m"
            }
#line 604 "goal_form.m"
          if (hlds__goal_form__succeeded)
#line 603 "goal_form.m"
            hlds__goal_form__CanThrow_6 = (MR_Integer) 0;
#line 604 "goal_form.m"
          else
#line 605 "goal_form.m"
            hlds__goal_form__CanThrow_6 = (MR_Integer) 1;
#line 594 "goal_form.m"
        }
#line 579 "goal_form.m"
        break;
#line 579 "goal_form.m"
      case (MR_Integer) 3:
#line 579 "goal_form.m"
#line 579 "goal_form.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_5, (MR_Integer) 0)))) {
#line 579 "goal_form.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 579 "goal_form.m"
          case (MR_Integer) 0:
#line 626 "goal_form.m"
            hlds__goal_form__CanThrow_6 = (MR_Integer) 1;
#line 579 "goal_form.m"
            break;
#line 579 "goal_form.m"
          case (MR_Integer) 1:
#line 608 "goal_form.m"
            {
#line 608 "goal_form.m"
              MR_Word hlds__goal_form__Attributes_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_5, (MR_Integer) 1)));
#line 608 "goal_form.m"
              MR_Word hlds__goal_form__ExceptionStatus_51;
#line 608 "goal_form.m"
              MR_Word hlds__goal_form__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_5, (MR_Integer) 2)));
#line 608 "goal_form.m"
              MR_Integer hlds__goal_form__V_46_46 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_5, (MR_Integer) 3)));
#line 608 "goal_form.m"
              MR_Word hlds__goal_form__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_5, (MR_Integer) 4)));
#line 608 "goal_form.m"
              MR_Word hlds__goal_form__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_5, (MR_Integer) 5)));
#line 608 "goal_form.m"
              MR_Word hlds__goal_form__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_5, (MR_Integer) 6)));
#line 608 "goal_form.m"
              MR_Word hlds__goal_form__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_5, (MR_Integer) 7)));

#line 609 "goal_form.m"
              {
#line 609 "goal_form.m"
                hlds__goal_form__ExceptionStatus_51 = parse_tree__prog_data__get_may_throw_exception_1_f_0(hlds__goal_form__Attributes_44);
              }
#line 613 "goal_form.m"
#line 613 "goal_form.m"
              switch (hlds__goal_form__ExceptionStatus_51) {
#line 613 "goal_form.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 613 "goal_form.m"
                case (MR_Integer) 1:
#line 614 "goal_form.m"
                  {
#line 614 "goal_form.m"
                    MR_Word hlds__goal_form__V_88_88;

#line 615 "goal_form.m"
                    {
#line 615 "goal_form.m"
                      hlds__goal_form__V_88_88 = parse_tree__prog_data__get_may_call_mercury_1_f_0(hlds__goal_form__Attributes_44);
                    }
#line 615 "goal_form.m"
                    hlds__goal_form__succeeded = (hlds__goal_form__V_88_88 == (MR_Integer) 1);
#line 614 "goal_form.m"
                  }
#line 613 "goal_form.m"
                  break;
#line 613 "goal_form.m"
                case (MR_Integer) 0:
#line 612 "goal_form.m"
                  hlds__goal_form__succeeded = MR_TRUE;
#line 613 "goal_form.m"
                  break;
#line 613 "goal_form.m"
              }
#line 619 "goal_form.m"
              if (hlds__goal_form__succeeded)
#line 618 "goal_form.m"
                hlds__goal_form__CanThrow_6 = (MR_Integer) 0;
#line 619 "goal_form.m"
              else
#line 620 "goal_form.m"
                hlds__goal_form__CanThrow_6 = (MR_Integer) 1;
#line 608 "goal_form.m"
            }
#line 579 "goal_form.m"
            break;
#line 579 "goal_form.m"
          case (MR_Integer) 2:
#line 630 "goal_form.m"
            {
#line 630 "goal_form.m"
              MR_Word hlds__goal_form__Goals_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_5, (MR_Integer) 2)));
#line 628 "goal_form.m"
              MR_Word hlds__goal_form___ConjType_57 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_5, (MR_Integer) 1)));

#line 631 "goal_form.m"
              {
#line 631 "goal_form.m"
                return hlds__goal_form__CanThrow_6 = hlds__goal_form__goal_list_can_throw_2_f_0(hlds__goal_form__MaybeModuleInfo_4, hlds__goal_form__Goals_58);
              }
#line 630 "goal_form.m"
            }
#line 579 "goal_form.m"
            break;
#line 579 "goal_form.m"
          case (MR_Integer) 3:
#line 630 "goal_form.m"
            {
#line 630 "goal_form.m"
              MR_Word hlds__goal_form__Goals_91 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_5, (MR_Integer) 1)));

#line 631 "goal_form.m"
              {
#line 631 "goal_form.m"
                return hlds__goal_form__CanThrow_6 = hlds__goal_form__goal_list_can_throw_2_f_0(hlds__goal_form__MaybeModuleInfo_4, hlds__goal_form__Goals_91);
              }
#line 630 "goal_form.m"
            }
#line 579 "goal_form.m"
            break;
#line 579 "goal_form.m"
          case (MR_Integer) 4:
#line 633 "goal_form.m"
            {
#line 633 "goal_form.m"
              MR_Word hlds__goal_form__Cases_61 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_5, (MR_Integer) 3)));
#line 633 "goal_form.m"
              MR_Word hlds__goal_form___Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_5, (MR_Integer) 1)));
#line 633 "goal_form.m"
              MR_Word hlds__goal_form___CanFail_60 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_5, (MR_Integer) 2)));

#line 634 "goal_form.m"
              {
#line 634 "goal_form.m"
                return hlds__goal_form__CanThrow_6 = hlds__goal_form__case_list_can_throw_2_f_0(hlds__goal_form__MaybeModuleInfo_4, hlds__goal_form__Cases_61);
              }
#line 633 "goal_form.m"
            }
#line 579 "goal_form.m"
            break;
#line 579 "goal_form.m"
          case (MR_Integer) 5:
#line 648 "goal_form.m"
            {
#line 648 "goal_form.m"
              MR_Word hlds__goal_form__Reason_67 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_5, (MR_Integer) 1)));
#line 648 "goal_form.m"
              MR_Word hlds__goal_form__SubGoal_90 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_5, (MR_Integer) 2)));
#line 650 "goal_form.m"
              MR_Word hlds__goal_form__FGT_69;
#line 650 "goal_form.m"
              MR_Word hlds__goal_form__V_68_68;

#line 650 "goal_form.m"
              hlds__goal_form__succeeded = ((((MR_tag((MR_Word) hlds__goal_form__Reason_67)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__Reason_67, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 650 "goal_form.m"
              if (hlds__goal_form__succeeded)
#line 650 "goal_form.m"
                {
#line 650 "goal_form.m"
                  hlds__goal_form__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__Reason_67, (MR_Integer) 1)));
#line 650 "goal_form.m"
                  hlds__goal_form__FGT_69 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__Reason_67, (MR_Integer) 2)));
#line 652 "goal_form.m"
#line 652 "goal_form.m"
                  switch (hlds__goal_form__FGT_69) {
#line 652 "goal_form.m"
                    default:
#line 652 "goal_form.m"
                      hlds__goal_form__succeeded = MR_FALSE;
#line 652 "goal_form.m"
                      break;
#line 652 "goal_form.m"
                    case (MR_Integer) 1:
#line 651 "goal_form.m"
                      hlds__goal_form__succeeded = MR_TRUE;
#line 652 "goal_form.m"
                      break;
#line 652 "goal_form.m"
                    case (MR_Integer) 2:
#line 652 "goal_form.m"
                      hlds__goal_form__succeeded = MR_TRUE;
#line 652 "goal_form.m"
                      break;
#line 652 "goal_form.m"
                  }
#line 650 "goal_form.m"
                }
#line 658 "goal_form.m"
              if (hlds__goal_form__succeeded)
#line 657 "goal_form.m"
                hlds__goal_form__CanThrow_6 = (MR_Integer) 0;
#line 658 "goal_form.m"
              else
#line 659 "goal_form.m"
                {
#line 659 "goal_form.m"
                  return hlds__goal_form__CanThrow_6 = hlds__goal_form__goal_can_throw_func_2_f_0(hlds__goal_form__MaybeModuleInfo_4, hlds__goal_form__SubGoal_90);
                }
#line 648 "goal_form.m"
            }
#line 579 "goal_form.m"
            break;
#line 579 "goal_form.m"
          case (MR_Integer) 6:
#line 636 "goal_form.m"
            {
#line 636 "goal_form.m"
              MR_Word hlds__goal_form__Cond_63 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_5, (MR_Integer) 2)));
#line 636 "goal_form.m"
              MR_Word hlds__goal_form__Then_64 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_5, (MR_Integer) 3)));
#line 636 "goal_form.m"
              MR_Word hlds__goal_form__Else_65 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_5, (MR_Integer) 4)));
#line 636 "goal_form.m"
              MR_Word hlds__goal_form__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_5, (MR_Integer) 1)));
#line 637 "goal_form.m"
              MR_Word hlds__goal_form__GoalExpr_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Cond_63, (MR_Integer) 0)));
#line 637 "goal_form.m"
              MR_Word hlds__goal_form__GoalInfo_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Cond_63, (MR_Integer) 1)));
#line 637 "goal_form.m"
              MR_Word hlds__goal_form__Determinism_96;

#line 568 "goal_form.m"
              {
#line 568 "goal_form.m"
                hlds__goal_form__Determinism_96 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(hlds__goal_form__GoalInfo_95);
              }
#line 569 "goal_form.m"
              hlds__goal_form__succeeded = (hlds__goal_form__Determinism_96 == (MR_Integer) 6);
#line 571 "goal_form.m"
              if (hlds__goal_form__succeeded)
#line 570 "goal_form.m"
                hlds__goal_form__succeeded = MR_TRUE;
#line 571 "goal_form.m"
              else
#line 572 "goal_form.m"
                {
#line 572 "goal_form.m"
                  MR_Word hlds__goal_form__V_98_98;

#line 572 "goal_form.m"
                  {
#line 572 "goal_form.m"
                    hlds__goal_form__V_98_98 = hlds__goal_form__goal_expr_can_throw_2_f_0(hlds__goal_form__MaybeModuleInfo_4, hlds__goal_form__GoalExpr_94);
                  }
#line 637 "goal_form.m"
                  hlds__goal_form__succeeded = (hlds__goal_form__V_98_98 == (MR_Integer) 1);
#line 572 "goal_form.m"
                }
#line 639 "goal_form.m"
              if (hlds__goal_form__succeeded)
#line 638 "goal_form.m"
                hlds__goal_form__CanThrow_6 = (MR_Integer) 1;
#line 639 "goal_form.m"
              else
#line 641 "goal_form.m"
                {
#line 639 "goal_form.m"
                  MR_Word hlds__goal_form__V_87_87;

#line 639 "goal_form.m"
                  {
#line 639 "goal_form.m"
                    hlds__goal_form__V_87_87 = hlds__goal_form__goal_can_throw_func_2_f_0(hlds__goal_form__MaybeModuleInfo_4, hlds__goal_form__Then_64);
                  }
#line 639 "goal_form.m"
                  hlds__goal_form__succeeded = (hlds__goal_form__V_87_87 == (MR_Integer) 1);
#line 641 "goal_form.m"
                  if (hlds__goal_form__succeeded)
#line 640 "goal_form.m"
                    hlds__goal_form__CanThrow_6 = (MR_Integer) 1;
#line 641 "goal_form.m"
                  else
#line 642 "goal_form.m"
                    {
#line 642 "goal_form.m"
                      return hlds__goal_form__CanThrow_6 = hlds__goal_form__goal_can_throw_func_2_f_0(hlds__goal_form__MaybeModuleInfo_4, hlds__goal_form__Else_65);
                    }
#line 641 "goal_form.m"
                }
#line 636 "goal_form.m"
            }
#line 579 "goal_form.m"
            break;
#line 579 "goal_form.m"
          case (MR_Integer) 7:
#line 662 "goal_form.m"
            {
#line 662 "goal_form.m"
              MR_Word hlds__goal_form__ShortHand_70 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_5, (MR_Integer) 1)));

#line 666 "goal_form.m"
#line 666 "goal_form.m"
              switch (MR_tag((MR_Word) hlds__goal_form__ShortHand_70)) {
#line 666 "goal_form.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 666 "goal_form.m"
                case (MR_Integer) 0:
#line 670 "goal_form.m"
                  {
#line 671 "goal_form.m"
                    {
#line 671 "goal_form.m"
                      mercury__require__unexpected_3_p_0((MR_String) "hlds.goal_form", (MR_String) "function \140hlds.goal_form.goal_expr_can_throw\'/2", (MR_String) "bi_implication");
                    }
#line 670 "goal_form.m"
                  }
#line 666 "goal_form.m"
                  break;
#line 666 "goal_form.m"
                case (MR_Integer) 1:
#line 665 "goal_form.m"
                  hlds__goal_form__CanThrow_6 = (MR_Integer) 1;
#line 666 "goal_form.m"
                  break;
#line 666 "goal_form.m"
                case (MR_Integer) 2:
#line 668 "goal_form.m"
                  hlds__goal_form__CanThrow_6 = (MR_Integer) 1;
#line 666 "goal_form.m"
                  break;
#line 666 "goal_form.m"
              }
#line 662 "goal_form.m"
            }
#line 579 "goal_form.m"
            break;
#line 579 "goal_form.m"
        }
#line 579 "goal_form.m"
        break;
#line 579 "goal_form.m"
    }
#line 579 "goal_form.m"
    return hlds__goal_form__CanThrow_6;
#line 579 "goal_form.m"
  }
#line 575 "goal_form.m"
}

#line 564 "goal_form.m"
static MR_Word MR_CALL 
hlds__goal_form__goal_can_throw_func_2_f_0(
#line 564 "goal_form.m"
  MR_Word hlds__goal_form__MaybeModuleInfo_4,
#line 564 "goal_form.m"
  MR_Word hlds__goal_form__HeadVar__2_2)
#line 564 "goal_form.m"
{
#line 567 "goal_form.m"
  {
#line 567 "goal_form.m"
    MR_bool hlds__goal_form__succeeded;
#line 567 "goal_form.m"
    MR_Word hlds__goal_form__CanThrow_7;
#line 567 "goal_form.m"
    MR_Word hlds__goal_form__GoalExpr_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__HeadVar__2_2, (MR_Integer) 0)));
#line 567 "goal_form.m"
    MR_Word hlds__goal_form__GoalInfo_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__HeadVar__2_2, (MR_Integer) 1)));
#line 567 "goal_form.m"
    MR_Word hlds__goal_form__Determinism_8;

#line 568 "goal_form.m"
    {
#line 568 "goal_form.m"
      hlds__goal_form__Determinism_8 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(hlds__goal_form__GoalInfo_6);
    }
#line 569 "goal_form.m"
    hlds__goal_form__succeeded = (hlds__goal_form__Determinism_8 == (MR_Integer) 6);
#line 571 "goal_form.m"
    if (hlds__goal_form__succeeded)
#line 570 "goal_form.m"
      hlds__goal_form__CanThrow_7 = (MR_Integer) 1;
#line 571 "goal_form.m"
    else
#line 572 "goal_form.m"
      {
#line 572 "goal_form.m"
        return hlds__goal_form__CanThrow_7 = hlds__goal_form__goal_expr_can_throw_2_f_0(hlds__goal_form__MaybeModuleInfo_4, hlds__goal_form__GoalExpr_5);
      }
#line 567 "goal_form.m"
    return hlds__goal_form__CanThrow_7;
#line 567 "goal_form.m"
  }
#line 564 "goal_form.m"
}

#line 552 "goal_form.m"
static MR_Word MR_CALL 
hlds__goal_form__case_list_can_loop_2_f_0(
#line 552 "goal_form.m"
  MR_Word hlds__goal_form__MaybeModuleInfo_1,
#line 552 "goal_form.m"
  MR_Word hlds__goal_form__HeadVar__2_2)
#line 552 "goal_form.m"
{
#line 554 "goal_form.m"
  while (MR_TRUE)
#line 554 "goal_form.m"
    {
#line 554 "goal_form.m"
      /* tailcall optimized into a loop */
#line 554 "goal_form.m"
      {
#line 554 "goal_form.m"
        MR_bool hlds__goal_form__succeeded;
#line 554 "goal_form.m"
        MR_Word hlds__goal_form__HeadVar__3_3;

#line 554 "goal_form.m"
        if ((hlds__goal_form__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 554 "goal_form.m"
          hlds__goal_form__HeadVar__3_3 = (MR_Integer) 0;
#line 554 "goal_form.m"
        else
#line 555 "goal_form.m"
          {
#line 555 "goal_form.m"
            MR_Word hlds__goal_form__Goal_8;
#line 555 "goal_form.m"
            MR_Word hlds__goal_form__Cases_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__HeadVar__2_2, (MR_Integer) 1)));
#line 555 "goal_form.m"
            MR_Word hlds__goal_form__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__HeadVar__2_2, (MR_Integer) 0)));
#line 555 "goal_form.m"
            MR_Word hlds__goal_form__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__V_10_10, (MR_Integer) 0)));
#line 555 "goal_form.m"
            MR_Word hlds__goal_form__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__V_10_10, (MR_Integer) 1)));
#line 556 "goal_form.m"
            MR_Word hlds__goal_form__V_11_11;

#line 555 "goal_form.m"
            hlds__goal_form__Goal_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__V_10_10, (MR_Integer) 2)));
#line 556 "goal_form.m"
            {
#line 556 "goal_form.m"
              hlds__goal_form__V_11_11 = hlds__goal_form__goal_can_loop_func_2_f_0(hlds__goal_form__MaybeModuleInfo_1, hlds__goal_form__Goal_8);
            }
#line 556 "goal_form.m"
            hlds__goal_form__succeeded = (hlds__goal_form__V_11_11 == (MR_Integer) 1);
#line 555 "goal_form.m"
            if (hlds__goal_form__succeeded)
#line 557 "goal_form.m"
              hlds__goal_form__HeadVar__3_3 = (MR_Integer) 1;
#line 555 "goal_form.m"
            else
#line 559 "goal_form.m"
              {
#line 559 "goal_form.m"
                /* direct tailcall eliminated */
#line 559 "goal_form.m"
                {
#line 559 "goal_form.m"
                  MR_Word hlds__goal_form__HeadVar__2__tmp_copy_2 = hlds__goal_form__Cases_9;

#line 559 "goal_form.m"
                  hlds__goal_form__HeadVar__2_2 = hlds__goal_form__HeadVar__2__tmp_copy_2;
#line 559 "goal_form.m"
                }
#line 559 "goal_form.m"
                continue;
#line 559 "goal_form.m"
              }
#line 555 "goal_form.m"
          }
#line 554 "goal_form.m"
        return hlds__goal_form__HeadVar__3_3;
#line 554 "goal_form.m"
      }
#line 554 "goal_form.m"
      break;
#line 554 "goal_form.m"
    }
#line 552 "goal_form.m"
}

#line 542 "goal_form.m"
static MR_Word MR_CALL 
hlds__goal_form__goal_list_can_loop_2_f_0(
#line 542 "goal_form.m"
  MR_Word hlds__goal_form__MaybeModuleInfo_1,
#line 542 "goal_form.m"
  MR_Word hlds__goal_form__HeadVar__2_2)
#line 542 "goal_form.m"
{
#line 544 "goal_form.m"
  while (MR_TRUE)
#line 544 "goal_form.m"
    {
#line 544 "goal_form.m"
      /* tailcall optimized into a loop */
#line 544 "goal_form.m"
      {
#line 544 "goal_form.m"
        MR_bool hlds__goal_form__succeeded;
#line 544 "goal_form.m"
        MR_Word hlds__goal_form__HeadVar__3_3;

#line 544 "goal_form.m"
        if ((hlds__goal_form__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 544 "goal_form.m"
          hlds__goal_form__HeadVar__3_3 = (MR_Integer) 0;
#line 544 "goal_form.m"
        else
#line 545 "goal_form.m"
          {
#line 545 "goal_form.m"
            MR_Word hlds__goal_form__Goal_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__HeadVar__2_2, (MR_Integer) 0)));
#line 545 "goal_form.m"
            MR_Word hlds__goal_form__Goals_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__HeadVar__2_2, (MR_Integer) 1)));
#line 546 "goal_form.m"
            MR_Word hlds__goal_form__V_8_8;

#line 546 "goal_form.m"
            {
#line 546 "goal_form.m"
              hlds__goal_form__V_8_8 = hlds__goal_form__goal_can_loop_func_2_f_0(hlds__goal_form__MaybeModuleInfo_1, hlds__goal_form__Goal_6);
            }
#line 546 "goal_form.m"
            hlds__goal_form__succeeded = (hlds__goal_form__V_8_8 == (MR_Integer) 1);
#line 545 "goal_form.m"
            if (hlds__goal_form__succeeded)
#line 547 "goal_form.m"
              hlds__goal_form__HeadVar__3_3 = (MR_Integer) 1;
#line 545 "goal_form.m"
            else
#line 549 "goal_form.m"
              {
#line 549 "goal_form.m"
                /* direct tailcall eliminated */
#line 549 "goal_form.m"
                {
#line 549 "goal_form.m"
                  MR_Word hlds__goal_form__HeadVar__2__tmp_copy_2 = hlds__goal_form__Goals_7;

#line 549 "goal_form.m"
                  hlds__goal_form__HeadVar__2_2 = hlds__goal_form__HeadVar__2__tmp_copy_2;
#line 549 "goal_form.m"
                }
#line 549 "goal_form.m"
                continue;
#line 549 "goal_form.m"
              }
#line 545 "goal_form.m"
          }
#line 544 "goal_form.m"
        return hlds__goal_form__HeadVar__3_3;
#line 544 "goal_form.m"
      }
#line 544 "goal_form.m"
      break;
#line 544 "goal_form.m"
    }
#line 542 "goal_form.m"
}

#line 428 "goal_form.m"
static MR_Word MR_CALL 
hlds__goal_form__goal_can_loop_func_2_f_0(
#line 428 "goal_form.m"
  MR_Word hlds__goal_form__MaybeModuleInfo_4,
#line 428 "goal_form.m"
  MR_Word hlds__goal_form__Goal_5)
#line 428 "goal_form.m"
{
#line 430 "goal_form.m"
  while (MR_TRUE)
#line 430 "goal_form.m"
    {
#line 430 "goal_form.m"
      /* tailcall optimized into a loop */
#line 430 "goal_form.m"
      {
#line 430 "goal_form.m"
        MR_bool hlds__goal_form__succeeded;
#line 430 "goal_form.m"
        MR_Word hlds__goal_form__CanLoop_6;
#line 430 "goal_form.m"
        MR_Word hlds__goal_form__GoalExpr_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Goal_5, (MR_Integer) 0)));
#line 431 "goal_form.m"
        MR_Word hlds__goal_form__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Goal_5, (MR_Integer) 1)));

#line 447 "goal_form.m"
#line 447 "goal_form.m"
        switch (MR_tag((MR_Word) hlds__goal_form__GoalExpr_7)) {
#line 447 "goal_form.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 447 "goal_form.m"
          case (MR_Integer) 0:
#line 510 "goal_form.m"
            {
#line 510 "goal_form.m"
              MR_Word hlds__goal_form__SubGoal_69 = (MR_Word) MR_body(((MR_Word) hlds__goal_form__GoalExpr_7), (MR_Integer) 0);

#line 511 "goal_form.m"
              /* direct tailcall eliminated */
#line 511 "goal_form.m"
              {
#line 511 "goal_form.m"
                MR_Word hlds__goal_form__Goal__tmp_copy_5 = hlds__goal_form__SubGoal_69;

#line 511 "goal_form.m"
                hlds__goal_form__Goal_5 = hlds__goal_form__Goal__tmp_copy_5;
#line 511 "goal_form.m"
              }
#line 511 "goal_form.m"
              continue;
#line 510 "goal_form.m"
            }
#line 447 "goal_form.m"
            break;
#line 447 "goal_form.m"
          case (MR_Integer) 1:
#line 433 "goal_form.m"
            {
#line 433 "goal_form.m"
              MR_Word hlds__goal_form__Uni_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__GoalExpr_7, (MR_Integer) 3)));
#line 433 "goal_form.m"
              MR_Word hlds__goal_form__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__GoalExpr_7, (MR_Integer) 0)));
#line 433 "goal_form.m"
              MR_Word hlds__goal_form__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__GoalExpr_7, (MR_Integer) 1)));
#line 433 "goal_form.m"
              MR_Word hlds__goal_form__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__GoalExpr_7, (MR_Integer) 2)));
#line 433 "goal_form.m"
              MR_Word hlds__goal_form__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__GoalExpr_7, (MR_Integer) 4)));

#line 441 "goal_form.m"
#line 441 "goal_form.m"
              switch (MR_tag((MR_Word) hlds__goal_form__Uni_12)) {
#line 441 "goal_form.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 441 "goal_form.m"
                case (MR_Integer) 0:
#line 441 "goal_form.m"
                case (MR_Integer) 1:
#line 441 "goal_form.m"
                case (MR_Integer) 2:
#line 439 "goal_form.m"
                  hlds__goal_form__CanLoop_6 = (MR_Integer) 0;
#line 441 "goal_form.m"
                  break;
#line 441 "goal_form.m"
                case (MR_Integer) 3:
#line 441 "goal_form.m"
#line 441 "goal_form.m"
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__Uni_12, (MR_Integer) 0)))) {
#line 441 "goal_form.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 441 "goal_form.m"
                    case (MR_Integer) 0:
#line 439 "goal_form.m"
                      hlds__goal_form__CanLoop_6 = (MR_Integer) 0;
#line 441 "goal_form.m"
                      break;
#line 441 "goal_form.m"
                    case (MR_Integer) 1:
#line 445 "goal_form.m"
                      hlds__goal_form__CanLoop_6 = (MR_Integer) 1;
#line 441 "goal_form.m"
                      break;
#line 441 "goal_form.m"
                  }
#line 441 "goal_form.m"
                  break;
#line 441 "goal_form.m"
              }
#line 433 "goal_form.m"
            }
#line 447 "goal_form.m"
            break;
#line 447 "goal_form.m"
          case (MR_Integer) 2:
#line 448 "goal_form.m"
            {
#line 448 "goal_form.m"
              MR_Word hlds__goal_form__PredId_34 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__GoalExpr_7, (MR_Integer) 0)));
#line 448 "goal_form.m"
              MR_Integer hlds__goal_form__ProcId_35 = ((MR_Integer) (MR_hl_field(MR_mktag(2), hlds__goal_form__GoalExpr_7, (MR_Integer) 1)));
#line 448 "goal_form.m"
              MR_Word hlds__goal_form__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__GoalExpr_7, (MR_Integer) 2)));
#line 448 "goal_form.m"
              MR_Word hlds__goal_form__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__GoalExpr_7, (MR_Integer) 3)));
#line 448 "goal_form.m"
              MR_Word hlds__goal_form__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__GoalExpr_7, (MR_Integer) 4)));
#line 448 "goal_form.m"
              MR_Word hlds__goal_form__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__GoalExpr_7, (MR_Integer) 5)));
#line 450 "goal_form.m"
              MR_Word hlds__goal_form__ModuleInfo_40;
#line 450 "goal_form.m"
              MR_Word hlds__goal_form__ProcInfo_42;
#line 451 "goal_form.m"
              MR_Word hlds__goal_form__V_41_41;

#line 450 "goal_form.m"
              hlds__goal_form__succeeded = ((MR_tag((MR_Word) hlds__goal_form__MaybeModuleInfo_4)) == (MR_mktag((MR_Integer) 1)));
#line 450 "goal_form.m"
              if (hlds__goal_form__succeeded)
#line 450 "goal_form.m"
                {
#line 450 "goal_form.m"
                  hlds__goal_form__ModuleInfo_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__MaybeModuleInfo_4, (MR_Integer) 0)));
#line 451 "goal_form.m"
                  {
#line 451 "goal_form.m"
                    hlds__hlds_module__module_info_pred_proc_info_5_p_0(hlds__goal_form__ModuleInfo_40, hlds__goal_form__PredId_34, hlds__goal_form__ProcId_35, &hlds__goal_form__V_41_41, &hlds__goal_form__ProcInfo_42);
                  }
#line 454 "goal_form.m"
                  {
#line 454 "goal_form.m"
                    MR_Word hlds__goal_form__MaybeTermInfo_43;
#line 454 "goal_form.m"
                    MR_Word hlds__goal_form__V_97_97;

#line 454 "goal_form.m"
                    {
#line 454 "goal_form.m"
                      hlds__hlds_pred__proc_info_get_maybe_termination_info_2_p_0(hlds__goal_form__ProcInfo_42, &hlds__goal_form__MaybeTermInfo_43);
                    }
#line 455 "goal_form.m"
                    hlds__goal_form__succeeded = ((MR_tag((MR_Word) hlds__goal_form__MaybeTermInfo_43)) == (MR_mktag((MR_Integer) 1)));
#line 455 "goal_form.m"
                    if (hlds__goal_form__succeeded)
#line 455 "goal_form.m"
                      {
#line 455 "goal_form.m"
                        hlds__goal_form__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__MaybeTermInfo_43, (MR_Integer) 0)));
#line 455 "goal_form.m"
                        hlds__goal_form__succeeded = ((MR_tag((MR_Word) hlds__goal_form__V_97_97)) == (MR_mktag((MR_Integer) 0)));
#line 455 "goal_form.m"
                      }
#line 454 "goal_form.m"
                  }
#line 456 "goal_form.m"
                  if (!(hlds__goal_form__succeeded))
#line 457 "goal_form.m"
                    {
#line 457 "goal_form.m"
                      MR_Word hlds__goal_form__Term2Info_45;
#line 457 "goal_form.m"
                      MR_Word hlds__goal_form__V_95_95;
#line 457 "goal_form.m"
                      MR_Word hlds__goal_form__V_96_96;
#line 458 "goal_form.m"
                      MR_Word hlds__goal_form__V_46_46;

#line 457 "goal_form.m"
                      {
#line 457 "goal_form.m"
                        hlds__hlds_pred__proc_info_get_termination2_info_2_p_0(hlds__goal_form__ProcInfo_42, &hlds__goal_form__Term2Info_45);
                      }
#line 458 "goal_form.m"
                      {
#line 458 "goal_form.m"
                        hlds__goal_form__V_95_95 = transform_hlds__term_constr_main_types__term_status_1_f_0(hlds__goal_form__Term2Info_45);
                      }
#line 458 "goal_form.m"
                      hlds__goal_form__succeeded = ((MR_tag((MR_Word) hlds__goal_form__V_95_95)) == (MR_mktag((MR_Integer) 1)));
#line 458 "goal_form.m"
                      if (hlds__goal_form__succeeded)
#line 458 "goal_form.m"
                        {
#line 458 "goal_form.m"
                          hlds__goal_form__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__V_95_95, (MR_Integer) 0)));
#line 458 "goal_form.m"
                          hlds__goal_form__succeeded = ((MR_tag((MR_Word) hlds__goal_form__V_96_96)) == (MR_mktag((MR_Integer) 0)));
#line 458 "goal_form.m"
                          if (hlds__goal_form__succeeded)
#line 458 "goal_form.m"
                            hlds__goal_form__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__V_96_96, (MR_Integer) 0)));
#line 458 "goal_form.m"
                        }
#line 457 "goal_form.m"
                    }
#line 450 "goal_form.m"
                }
#line 462 "goal_form.m"
              if (hlds__goal_form__succeeded)
#line 461 "goal_form.m"
                hlds__goal_form__CanLoop_6 = (MR_Integer) 0;
#line 462 "goal_form.m"
              else
#line 463 "goal_form.m"
                hlds__goal_form__CanLoop_6 = (MR_Integer) 1;
#line 448 "goal_form.m"
            }
#line 447 "goal_form.m"
            break;
#line 447 "goal_form.m"
          case (MR_Integer) 3:
#line 447 "goal_form.m"
#line 447 "goal_form.m"
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_7, (MR_Integer) 0)))) {
#line 447 "goal_form.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 447 "goal_form.m"
              case (MR_Integer) 0:
#line 469 "goal_form.m"
                hlds__goal_form__CanLoop_6 = (MR_Integer) 1;
#line 447 "goal_form.m"
                break;
#line 447 "goal_form.m"
              case (MR_Integer) 1:
#line 471 "goal_form.m"
                {
#line 471 "goal_form.m"
                  MR_Word hlds__goal_form__Attributes_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_7, (MR_Integer) 1)));
#line 471 "goal_form.m"
                  MR_Word hlds__goal_form__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_7, (MR_Integer) 2)));
#line 471 "goal_form.m"
                  MR_Integer hlds__goal_form__V_54_54 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_7, (MR_Integer) 3)));
#line 471 "goal_form.m"
                  MR_Word hlds__goal_form__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_7, (MR_Integer) 4)));
#line 471 "goal_form.m"
                  MR_Word hlds__goal_form__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_7, (MR_Integer) 5)));
#line 471 "goal_form.m"
                  MR_Word hlds__goal_form__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_7, (MR_Integer) 6)));
#line 471 "goal_form.m"
                  MR_Word hlds__goal_form__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_7, (MR_Integer) 7)));
#line 473 "goal_form.m"
                  MR_Word hlds__goal_form__Terminates_59;

#line 473 "goal_form.m"
                  {
#line 473 "goal_form.m"
                    hlds__goal_form__Terminates_59 = parse_tree__prog_data__get_terminates_1_f_0(hlds__goal_form__Attributes_52);
                  }
#line 476 "goal_form.m"
#line 476 "goal_form.m"
                  switch (hlds__goal_form__Terminates_59) {
#line 476 "goal_form.m"
                    default:
#line 476 "goal_form.m"
                      hlds__goal_form__succeeded = MR_FALSE;
#line 476 "goal_form.m"
                      break;
#line 476 "goal_form.m"
                    case (MR_Integer) 2:
#line 477 "goal_form.m"
                      {
#line 477 "goal_form.m"
                        MR_Word hlds__goal_form__V_94_94;

#line 478 "goal_form.m"
                        {
#line 478 "goal_form.m"
                          hlds__goal_form__V_94_94 = parse_tree__prog_data__get_may_call_mercury_1_f_0(hlds__goal_form__Attributes_52);
                        }
#line 478 "goal_form.m"
                        hlds__goal_form__succeeded = (hlds__goal_form__V_94_94 == (MR_Integer) 1);
#line 477 "goal_form.m"
                      }
#line 476 "goal_form.m"
                      break;
#line 476 "goal_form.m"
                    case (MR_Integer) 0:
#line 475 "goal_form.m"
                      hlds__goal_form__succeeded = MR_TRUE;
#line 476 "goal_form.m"
                      break;
#line 476 "goal_form.m"
                  }
#line 482 "goal_form.m"
                  if (hlds__goal_form__succeeded)
#line 481 "goal_form.m"
                    hlds__goal_form__CanLoop_6 = (MR_Integer) 0;
#line 482 "goal_form.m"
                  else
#line 483 "goal_form.m"
                    hlds__goal_form__CanLoop_6 = (MR_Integer) 1;
#line 471 "goal_form.m"
                }
#line 447 "goal_form.m"
                break;
#line 447 "goal_form.m"
              case (MR_Integer) 2:
#line 447 "goal_form.m"
                {
#line 447 "goal_form.m"
                  MR_Word hlds__goal_form__V_103_103 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_7, (MR_Integer) 2)));
#line 447 "goal_form.m"
                  MR_Word hlds__goal_form__V_104_104 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_7, (MR_Integer) 1)));

#line 447 "goal_form.m"
#line 447 "goal_form.m"
                  switch (hlds__goal_form__V_104_104) {
#line 447 "goal_form.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 447 "goal_form.m"
                    case (MR_Integer) 1:
#line 493 "goal_form.m"
                      hlds__goal_form__CanLoop_6 = (MR_Integer) 1;
#line 447 "goal_form.m"
                      break;
#line 447 "goal_form.m"
                    case (MR_Integer) 0:
#line 487 "goal_form.m"
                      {
#line 487 "goal_form.m"
                        return hlds__goal_form__CanLoop_6 = hlds__goal_form__goal_list_can_loop_2_f_0(hlds__goal_form__MaybeModuleInfo_4, hlds__goal_form__V_103_103);
                      }
#line 447 "goal_form.m"
                      break;
#line 447 "goal_form.m"
                  }
#line 447 "goal_form.m"
                }
#line 447 "goal_form.m"
                break;
#line 447 "goal_form.m"
              case (MR_Integer) 3:
#line 495 "goal_form.m"
                {
#line 495 "goal_form.m"
                  MR_Word hlds__goal_form__Goals_98 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_7, (MR_Integer) 1)));

#line 496 "goal_form.m"
                  {
#line 496 "goal_form.m"
                    return hlds__goal_form__CanLoop_6 = hlds__goal_form__goal_list_can_loop_2_f_0(hlds__goal_form__MaybeModuleInfo_4, hlds__goal_form__Goals_98);
                  }
#line 495 "goal_form.m"
                }
#line 447 "goal_form.m"
                break;
#line 447 "goal_form.m"
              case (MR_Integer) 4:
#line 498 "goal_form.m"
                {
#line 498 "goal_form.m"
                  MR_Word hlds__goal_form__Cases_64 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_7, (MR_Integer) 3)));
#line 498 "goal_form.m"
                  MR_Word hlds__goal_form___Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_7, (MR_Integer) 1)));
#line 498 "goal_form.m"
                  MR_Word hlds__goal_form___CanFail_63 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_7, (MR_Integer) 2)));

#line 499 "goal_form.m"
                  {
#line 499 "goal_form.m"
                    return hlds__goal_form__CanLoop_6 = hlds__goal_form__case_list_can_loop_2_f_0(hlds__goal_form__MaybeModuleInfo_4, hlds__goal_form__Cases_64);
                  }
#line 498 "goal_form.m"
                }
#line 447 "goal_form.m"
                break;
#line 447 "goal_form.m"
              case (MR_Integer) 5:
#line 513 "goal_form.m"
                {
#line 513 "goal_form.m"
                  MR_Word hlds__goal_form__Reason_70 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_7, (MR_Integer) 1)));
#line 513 "goal_form.m"
                  MR_Word hlds__goal_form__SubGoal_99 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_7, (MR_Integer) 2)));
#line 515 "goal_form.m"
                  MR_Word hlds__goal_form__FGT_72;
#line 515 "goal_form.m"
                  MR_Word hlds__goal_form__V_71_71;

#line 515 "goal_form.m"
                  hlds__goal_form__succeeded = ((((MR_tag((MR_Word) hlds__goal_form__Reason_70)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__Reason_70, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 515 "goal_form.m"
                  if (hlds__goal_form__succeeded)
#line 515 "goal_form.m"
                    {
#line 515 "goal_form.m"
                      hlds__goal_form__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__Reason_70, (MR_Integer) 1)));
#line 515 "goal_form.m"
                      hlds__goal_form__FGT_72 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__Reason_70, (MR_Integer) 2)));
#line 517 "goal_form.m"
#line 517 "goal_form.m"
                      switch (hlds__goal_form__FGT_72) {
#line 517 "goal_form.m"
                        default:
#line 517 "goal_form.m"
                          hlds__goal_form__succeeded = MR_FALSE;
#line 517 "goal_form.m"
                          break;
#line 517 "goal_form.m"
                        case (MR_Integer) 1:
#line 516 "goal_form.m"
                          hlds__goal_form__succeeded = MR_TRUE;
#line 517 "goal_form.m"
                          break;
#line 517 "goal_form.m"
                        case (MR_Integer) 2:
#line 517 "goal_form.m"
                          hlds__goal_form__succeeded = MR_TRUE;
#line 517 "goal_form.m"
                          break;
#line 517 "goal_form.m"
                      }
#line 515 "goal_form.m"
                    }
#line 523 "goal_form.m"
                  if (hlds__goal_form__succeeded)
#line 522 "goal_form.m"
                    hlds__goal_form__CanLoop_6 = (MR_Integer) 0;
#line 523 "goal_form.m"
                  else
#line 524 "goal_form.m"
                    {
#line 524 "goal_form.m"
                      /* direct tailcall eliminated */
#line 524 "goal_form.m"
                      {
#line 524 "goal_form.m"
                        MR_Word hlds__goal_form__Goal__tmp_copy_5 = hlds__goal_form__SubGoal_99;

#line 524 "goal_form.m"
                        hlds__goal_form__Goal_5 = hlds__goal_form__Goal__tmp_copy_5;
#line 524 "goal_form.m"
                      }
#line 524 "goal_form.m"
                      continue;
#line 524 "goal_form.m"
                    }
#line 513 "goal_form.m"
                }
#line 447 "goal_form.m"
                break;
#line 447 "goal_form.m"
              case (MR_Integer) 6:
#line 501 "goal_form.m"
                {
#line 501 "goal_form.m"
                  MR_Word hlds__goal_form__Cond_66 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_7, (MR_Integer) 2)));
#line 501 "goal_form.m"
                  MR_Word hlds__goal_form__Then_67 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_7, (MR_Integer) 3)));
#line 501 "goal_form.m"
                  MR_Word hlds__goal_form__Else_68 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_7, (MR_Integer) 4)));
#line 501 "goal_form.m"
                  MR_Word hlds__goal_form___Vars_65 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_7, (MR_Integer) 1)));
#line 502 "goal_form.m"
                  MR_Word hlds__goal_form__V_90_90;

#line 502 "goal_form.m"
                  {
#line 502 "goal_form.m"
                    hlds__goal_form__V_90_90 = hlds__goal_form__goal_can_loop_func_2_f_0(hlds__goal_form__MaybeModuleInfo_4, hlds__goal_form__Cond_66);
                  }
#line 502 "goal_form.m"
                  hlds__goal_form__succeeded = (hlds__goal_form__V_90_90 == (MR_Integer) 1);
#line 504 "goal_form.m"
                  if (hlds__goal_form__succeeded)
#line 503 "goal_form.m"
                    hlds__goal_form__CanLoop_6 = (MR_Integer) 1;
#line 504 "goal_form.m"
                  else
#line 506 "goal_form.m"
                    {
#line 504 "goal_form.m"
                      MR_Word hlds__goal_form__V_91_91;

#line 504 "goal_form.m"
                      {
#line 504 "goal_form.m"
                        hlds__goal_form__V_91_91 = hlds__goal_form__goal_can_loop_func_2_f_0(hlds__goal_form__MaybeModuleInfo_4, hlds__goal_form__Then_67);
                      }
#line 504 "goal_form.m"
                      hlds__goal_form__succeeded = (hlds__goal_form__V_91_91 == (MR_Integer) 1);
#line 506 "goal_form.m"
                      if (hlds__goal_form__succeeded)
#line 505 "goal_form.m"
                        hlds__goal_form__CanLoop_6 = (MR_Integer) 1;
#line 506 "goal_form.m"
                      else
#line 507 "goal_form.m"
                        {
#line 507 "goal_form.m"
                          /* direct tailcall eliminated */
#line 507 "goal_form.m"
                          {
#line 507 "goal_form.m"
                            MR_Word hlds__goal_form__Goal__tmp_copy_5 = hlds__goal_form__Else_68;

#line 507 "goal_form.m"
                            hlds__goal_form__Goal_5 = hlds__goal_form__Goal__tmp_copy_5;
#line 507 "goal_form.m"
                          }
#line 507 "goal_form.m"
                          continue;
#line 507 "goal_form.m"
                        }
#line 506 "goal_form.m"
                    }
#line 501 "goal_form.m"
                }
#line 447 "goal_form.m"
                break;
#line 447 "goal_form.m"
              case (MR_Integer) 7:
#line 527 "goal_form.m"
                {
#line 527 "goal_form.m"
                  MR_Word hlds__goal_form__ShortHand_73 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_7, (MR_Integer) 1)));

#line 533 "goal_form.m"
#line 533 "goal_form.m"
                  switch (MR_tag((MR_Word) hlds__goal_form__ShortHand_73)) {
#line 533 "goal_form.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 533 "goal_form.m"
                    case (MR_Integer) 0:
#line 537 "goal_form.m"
                      {
#line 538 "goal_form.m"
                        {
#line 538 "goal_form.m"
                          mercury__require__unexpected_3_p_0((MR_String) "hlds.goal_form", (MR_String) "function \140hlds.goal_form.goal_can_loop_func\'/2", (MR_String) "bi_implication");
                        }
#line 537 "goal_form.m"
                      }
#line 533 "goal_form.m"
                      break;
#line 533 "goal_form.m"
                    case (MR_Integer) 1:
#line 529 "goal_form.m"
                      {
#line 529 "goal_form.m"
                        MR_Word hlds__goal_form__MainGoal_78 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__ShortHand_73, (MR_Integer) 4)));
#line 529 "goal_form.m"
                        MR_Word hlds__goal_form__OrElseGoals_79 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__ShortHand_73, (MR_Integer) 5)));
#line 529 "goal_form.m"
                        MR_Word hlds__goal_form__MainGoalCanLoop_81;
#line 529 "goal_form.m"
                        MR_Word hlds__goal_form__OrElseCanLoop_82;
#line 529 "goal_form.m"
                        MR_Word hlds__goal_form__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__ShortHand_73, (MR_Integer) 0)));
#line 529 "goal_form.m"
                        MR_Word hlds__goal_form__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__ShortHand_73, (MR_Integer) 1)));
#line 529 "goal_form.m"
                        MR_Word hlds__goal_form__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__ShortHand_73, (MR_Integer) 2)));
#line 529 "goal_form.m"
                        MR_Word hlds__goal_form__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__ShortHand_73, (MR_Integer) 3)));
#line 529 "goal_form.m"
                        MR_Word hlds__goal_form__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__ShortHand_73, (MR_Integer) 6)));

#line 530 "goal_form.m"
                        {
#line 530 "goal_form.m"
                          hlds__goal_form__MainGoalCanLoop_81 = hlds__goal_form__goal_can_loop_func_2_f_0(hlds__goal_form__MaybeModuleInfo_4, hlds__goal_form__MainGoal_78);
                        }
#line 531 "goal_form.m"
                        {
#line 531 "goal_form.m"
                          hlds__goal_form__OrElseCanLoop_82 = hlds__goal_form__goal_list_can_loop_2_f_0(hlds__goal_form__MaybeModuleInfo_4, hlds__goal_form__OrElseGoals_79);
                        }
#line 532 "goal_form.m"
                        {
#line 532 "goal_form.m"
                          return hlds__goal_form__CanLoop_6 = mercury__bool__or_2_f_0(hlds__goal_form__MainGoalCanLoop_81, hlds__goal_form__OrElseCanLoop_82);
                        }
#line 529 "goal_form.m"
                      }
#line 533 "goal_form.m"
                      break;
#line 533 "goal_form.m"
                    case (MR_Integer) 2:
#line 534 "goal_form.m"
                      {
#line 534 "goal_form.m"
                        MR_Word hlds__goal_form__SubGoal_100 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__ShortHand_73, (MR_Integer) 2)));
#line 534 "goal_form.m"
                        MR_Word hlds__goal_form__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__ShortHand_73, (MR_Integer) 0)));
#line 534 "goal_form.m"
                        MR_Word hlds__goal_form__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__ShortHand_73, (MR_Integer) 1)));

#line 535 "goal_form.m"
                        /* direct tailcall eliminated */
#line 535 "goal_form.m"
                        {
#line 535 "goal_form.m"
                          MR_Word hlds__goal_form__Goal__tmp_copy_5 = hlds__goal_form__SubGoal_100;

#line 535 "goal_form.m"
                          hlds__goal_form__Goal_5 = hlds__goal_form__Goal__tmp_copy_5;
#line 535 "goal_form.m"
                        }
#line 535 "goal_form.m"
                        continue;
#line 534 "goal_form.m"
                      }
#line 533 "goal_form.m"
                      break;
#line 533 "goal_form.m"
                  }
#line 527 "goal_form.m"
                }
#line 447 "goal_form.m"
                break;
#line 447 "goal_form.m"
            }
#line 447 "goal_form.m"
            break;
#line 447 "goal_form.m"
        }
#line 430 "goal_form.m"
        return hlds__goal_form__CanLoop_6;
#line 430 "goal_form.m"
      }
#line 430 "goal_form.m"
      break;
#line 430 "goal_form.m"
    }
#line 428 "goal_form.m"
}

#line 369 "goal_form.m"
static void MR_CALL 
hlds__goal_form__cases_can_throw_4_p_0(
#line 369 "goal_form.m"
  MR_Word hlds__goal_form__HeadVar__1_1,
#line 369 "goal_form.m"
  MR_Word * hlds__goal_form__HeadVar__2_2,
#line 369 "goal_form.m"
  MR_Word hlds__goal_form__STATE_VARIABLE_ModuleInfo_0_3,
#line 369 "goal_form.m"
  MR_Word * hlds__goal_form__STATE_VARIABLE_ModuleInfo_4)
#line 369 "goal_form.m"
{
#line 372 "goal_form.m"
  while (MR_TRUE)
#line 372 "goal_form.m"
    {
#line 372 "goal_form.m"
      /* tailcall optimized into a loop */
#line 372 "goal_form.m"
      {
#line 372 "goal_form.m"
        MR_bool hlds__goal_form__succeeded;

#line 372 "goal_form.m"
        if ((hlds__goal_form__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 372 "goal_form.m"
          {
#line 372 "goal_form.m"
            *hlds__goal_form__HeadVar__2_2 = (MR_Integer) 1;
#line 372 "goal_form.m"
            *hlds__goal_form__STATE_VARIABLE_ModuleInfo_4 = hlds__goal_form__STATE_VARIABLE_ModuleInfo_0_3;
#line 372 "goal_form.m"
          }
#line 372 "goal_form.m"
        else
#line 373 "goal_form.m"
          {
#line 373 "goal_form.m"
            MR_Word hlds__goal_form__Case_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__HeadVar__1_1, (MR_Integer) 0)));
#line 373 "goal_form.m"
            MR_Word hlds__goal_form__Cases_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__HeadVar__1_1, (MR_Integer) 1)));
#line 373 "goal_form.m"
            MR_Word hlds__goal_form__Goal_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Case_8, (MR_Integer) 2)));
#line 373 "goal_form.m"
            MR_Word hlds__goal_form__Result0_15;
#line 373 "goal_form.m"
            MR_Word hlds__goal_form__STATE_VARIABLE_ModuleInfo_18_18;
#line 374 "goal_form.m"
            MR_Word hlds__goal_form__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Case_8, (MR_Integer) 0)));
#line 374 "goal_form.m"
            MR_Word hlds__goal_form__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Case_8, (MR_Integer) 1)));

#line 375 "goal_form.m"
            {
#line 375 "goal_form.m"
              hlds__goal_form__goal_can_throw_4_p_0(hlds__goal_form__Goal_14, &hlds__goal_form__Result0_15, hlds__goal_form__STATE_VARIABLE_ModuleInfo_0_3, &hlds__goal_form__STATE_VARIABLE_ModuleInfo_18_18);
            }
#line 379 "goal_form.m"
#line 379 "goal_form.m"
            switch (hlds__goal_form__Result0_15) {
#line 379 "goal_form.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 379 "goal_form.m"
              case (MR_Integer) 0:
#line 380 "goal_form.m"
                {
#line 381 "goal_form.m"
                  *hlds__goal_form__HeadVar__2_2 = (MR_Integer) 0;
#line 380 "goal_form.m"
                  *hlds__goal_form__STATE_VARIABLE_ModuleInfo_4 = hlds__goal_form__STATE_VARIABLE_ModuleInfo_18_18;
#line 380 "goal_form.m"
                }
#line 379 "goal_form.m"
                break;
#line 379 "goal_form.m"
              case (MR_Integer) 1:
#line 378 "goal_form.m"
                {
#line 378 "goal_form.m"
                  /* direct tailcall eliminated */
#line 378 "goal_form.m"
                  {
#line 378 "goal_form.m"
                    MR_Word hlds__goal_form__HeadVar__1__tmp_copy_1 = hlds__goal_form__Cases_9;
#line 378 "goal_form.m"
                    MR_Word hlds__goal_form__STATE_VARIABLE_ModuleInfo_0__tmp_copy_3 = hlds__goal_form__STATE_VARIABLE_ModuleInfo_18_18;

#line 378 "goal_form.m"
                    hlds__goal_form__STATE_VARIABLE_ModuleInfo_0_3 = hlds__goal_form__STATE_VARIABLE_ModuleInfo_0__tmp_copy_3;
#line 378 "goal_form.m"
                    hlds__goal_form__HeadVar__1_1 = hlds__goal_form__HeadVar__1__tmp_copy_1;
#line 378 "goal_form.m"
                  }
#line 378 "goal_form.m"
                  continue;
#line 378 "goal_form.m"
                }
#line 379 "goal_form.m"
                break;
#line 379 "goal_form.m"
            }
#line 373 "goal_form.m"
          }
#line 372 "goal_form.m"
      }
#line 372 "goal_form.m"
      break;
#line 372 "goal_form.m"
    }
#line 369 "goal_form.m"
}

#line 355 "goal_form.m"
static void MR_CALL 
hlds__goal_form__goals_can_throw_4_p_0(
#line 355 "goal_form.m"
  MR_Word hlds__goal_form__HeadVar__1_1,
#line 355 "goal_form.m"
  MR_Word * hlds__goal_form__HeadVar__2_2,
#line 355 "goal_form.m"
  MR_Word hlds__goal_form__STATE_VARIABLE_ModuleInfo_0_3,
#line 355 "goal_form.m"
  MR_Word * hlds__goal_form__STATE_VARIABLE_ModuleInfo_4)
#line 355 "goal_form.m"
{
#line 358 "goal_form.m"
  while (MR_TRUE)
#line 358 "goal_form.m"
    {
#line 358 "goal_form.m"
      /* tailcall optimized into a loop */
#line 358 "goal_form.m"
      {
#line 358 "goal_form.m"
        MR_bool hlds__goal_form__succeeded;

#line 358 "goal_form.m"
        if ((hlds__goal_form__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 358 "goal_form.m"
          {
#line 358 "goal_form.m"
            *hlds__goal_form__HeadVar__2_2 = (MR_Integer) 1;
#line 358 "goal_form.m"
            *hlds__goal_form__STATE_VARIABLE_ModuleInfo_4 = hlds__goal_form__STATE_VARIABLE_ModuleInfo_0_3;
#line 358 "goal_form.m"
          }
#line 358 "goal_form.m"
        else
#line 359 "goal_form.m"
          {
#line 359 "goal_form.m"
            MR_Word hlds__goal_form__Goal_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__HeadVar__1_1, (MR_Integer) 0)));
#line 359 "goal_form.m"
            MR_Word hlds__goal_form__Goals_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__HeadVar__1_1, (MR_Integer) 1)));
#line 359 "goal_form.m"
            MR_Word hlds__goal_form__Result0_12;
#line 359 "goal_form.m"
            MR_Word hlds__goal_form__STATE_VARIABLE_ModuleInfo_15_15;

#line 360 "goal_form.m"
            {
#line 360 "goal_form.m"
              hlds__goal_form__goal_can_throw_4_p_0(hlds__goal_form__Goal_8, &hlds__goal_form__Result0_12, hlds__goal_form__STATE_VARIABLE_ModuleInfo_0_3, &hlds__goal_form__STATE_VARIABLE_ModuleInfo_15_15);
            }
#line 364 "goal_form.m"
#line 364 "goal_form.m"
            switch (hlds__goal_form__Result0_12) {
#line 364 "goal_form.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 364 "goal_form.m"
              case (MR_Integer) 0:
#line 365 "goal_form.m"
                {
#line 366 "goal_form.m"
                  *hlds__goal_form__HeadVar__2_2 = (MR_Integer) 0;
#line 365 "goal_form.m"
                  *hlds__goal_form__STATE_VARIABLE_ModuleInfo_4 = hlds__goal_form__STATE_VARIABLE_ModuleInfo_15_15;
#line 365 "goal_form.m"
                }
#line 364 "goal_form.m"
                break;
#line 364 "goal_form.m"
              case (MR_Integer) 1:
#line 363 "goal_form.m"
                {
#line 363 "goal_form.m"
                  /* direct tailcall eliminated */
#line 363 "goal_form.m"
                  {
#line 363 "goal_form.m"
                    MR_Word hlds__goal_form__HeadVar__1__tmp_copy_1 = hlds__goal_form__Goals_9;
#line 363 "goal_form.m"
                    MR_Word hlds__goal_form__STATE_VARIABLE_ModuleInfo_0__tmp_copy_3 = hlds__goal_form__STATE_VARIABLE_ModuleInfo_15_15;

#line 363 "goal_form.m"
                    hlds__goal_form__STATE_VARIABLE_ModuleInfo_0_3 = hlds__goal_form__STATE_VARIABLE_ModuleInfo_0__tmp_copy_3;
#line 363 "goal_form.m"
                    hlds__goal_form__HeadVar__1_1 = hlds__goal_form__HeadVar__1__tmp_copy_1;
#line 363 "goal_form.m"
                  }
#line 363 "goal_form.m"
                  continue;
#line 363 "goal_form.m"
                }
#line 364 "goal_form.m"
                break;
#line 364 "goal_form.m"
            }
#line 359 "goal_form.m"
          }
#line 358 "goal_form.m"
      }
#line 358 "goal_form.m"
      break;
#line 358 "goal_form.m"
    }
#line 355 "goal_form.m"
}

#line 225 "goal_form.m"
static MR_bool MR_CALL 
hlds__goal_form__only_constant_goals_3_p_0(
#line 225 "goal_form.m"
  MR_Word hlds__goal_form__HeadVar__1_1,
#line 225 "goal_form.m"
  MR_Word hlds__goal_form__STATE_VARIABLE_ToAssignVars_0_2,
#line 225 "goal_form.m"
  MR_Word * hlds__goal_form__STATE_VARIABLE_ToAssignVars_3)
#line 225 "goal_form.m"
{
#line 228 "goal_form.m"
  while (MR_TRUE)
#line 228 "goal_form.m"
    {
#line 228 "goal_form.m"
      /* tailcall optimized into a loop */
#line 228 "goal_form.m"
      {
#line 228 "goal_form.m"
        MR_bool hlds__goal_form__succeeded;

#line 228 "goal_form.m"
        if ((hlds__goal_form__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 228 "goal_form.m"
          {
#line 228 "goal_form.m"
            *hlds__goal_form__STATE_VARIABLE_ToAssignVars_3 = hlds__goal_form__STATE_VARIABLE_ToAssignVars_0_2;
#line 228 "goal_form.m"
            hlds__goal_form__succeeded = MR_TRUE;
#line 228 "goal_form.m"
          }
#line 228 "goal_form.m"
        else
#line 229 "goal_form.m"
          {
#line 229 "goal_form.m"
            MR_Word hlds__goal_form__TypeCtorInfo_31_31;
#line 229 "goal_form.m"
            MR_Word hlds__goal_form__Goal_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__HeadVar__1_1, (MR_Integer) 0)));
#line 229 "goal_form.m"
            MR_Word hlds__goal_form__Goals_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__HeadVar__1_1, (MR_Integer) 1)));
#line 229 "goal_form.m"
            MR_Word hlds__goal_form__GoalExpr_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Goal_7, (MR_Integer) 0)));
#line 229 "goal_form.m"
            MR_Word hlds__goal_form__Var_17;
#line 229 "goal_form.m"
            MR_Word hlds__goal_form__STATE_VARIABLE_ToAssignVars_29_29;
#line 230 "goal_form.m"
            MR_Word hlds__goal_form__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Goal_7, (MR_Integer) 1)));

#line 237 "goal_form.m"
            if (((MR_tag((MR_Word) hlds__goal_form__GoalExpr_10)) == (MR_mktag((MR_Integer) 1))))
#line 235 "goal_form.m"
              {
#line 235 "goal_form.m"
                MR_Word hlds__goal_form__Unification_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__GoalExpr_10, (MR_Integer) 3)));
#line 235 "goal_form.m"
                MR_Word hlds__goal_form__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__GoalExpr_10, (MR_Integer) 0)));
#line 235 "goal_form.m"
                MR_Word hlds__goal_form__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__GoalExpr_10, (MR_Integer) 1)));
#line 235 "goal_form.m"
                MR_Word hlds__goal_form__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__GoalExpr_10, (MR_Integer) 2)));
#line 235 "goal_form.m"
                MR_Word hlds__goal_form__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__GoalExpr_10, (MR_Integer) 4)));
#line 236 "goal_form.m"
                MR_Word hlds__goal_form__V_18_18;
#line 236 "goal_form.m"
                MR_Word hlds__goal_form__V_19_19;
#line 236 "goal_form.m"
                MR_Word hlds__goal_form__V_20_20;
#line 236 "goal_form.m"
                MR_Word hlds__goal_form__V_21_21;
#line 236 "goal_form.m"
                MR_Word hlds__goal_form__V_22_22;
#line 236 "goal_form.m"
                MR_Word hlds__goal_form__V_23_23;

#line 236 "goal_form.m"
                hlds__goal_form__succeeded = ((MR_tag((MR_Word) hlds__goal_form__Unification_15)) == (MR_mktag((MR_Integer) 0)));
#line 236 "goal_form.m"
                if (hlds__goal_form__succeeded)
#line 236 "goal_form.m"
                  {
#line 236 "goal_form.m"
                    hlds__goal_form__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Unification_15, (MR_Integer) 0)));
#line 236 "goal_form.m"
                    hlds__goal_form__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Unification_15, (MR_Integer) 1)));
#line 236 "goal_form.m"
                    hlds__goal_form__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Unification_15, (MR_Integer) 2)));
#line 236 "goal_form.m"
                    hlds__goal_form__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Unification_15, (MR_Integer) 3)));
#line 236 "goal_form.m"
                    hlds__goal_form__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Unification_15, (MR_Integer) 4)));
#line 236 "goal_form.m"
                    hlds__goal_form__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Unification_15, (MR_Integer) 5)));
#line 236 "goal_form.m"
                    hlds__goal_form__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Unification_15, (MR_Integer) 6)));
#line 236 "goal_form.m"
                  }
#line 235 "goal_form.m"
              }
#line 237 "goal_form.m"
            else
#line 237 "goal_form.m"
            if (((((MR_tag((MR_Word) hlds__goal_form__GoalExpr_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_10, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 238 "goal_form.m"
              {
#line 238 "goal_form.m"
                MR_Word hlds__goal_form__Reason_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_10, (MR_Integer) 1)));
#line 238 "goal_form.m"
                MR_Word hlds__goal_form__V_28_28;
#line 238 "goal_form.m"
                MR_Word hlds__goal_form__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_10, (MR_Integer) 2)));

#line 239 "goal_form.m"
                hlds__goal_form__succeeded = ((((MR_tag((MR_Word) hlds__goal_form__Reason_24)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__Reason_24, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 239 "goal_form.m"
                if (hlds__goal_form__succeeded)
#line 239 "goal_form.m"
                  {
#line 239 "goal_form.m"
                    hlds__goal_form__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__Reason_24, (MR_Integer) 1)));
#line 239 "goal_form.m"
                    hlds__goal_form__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__Reason_24, (MR_Integer) 2)));
#line 239 "goal_form.m"
                    hlds__goal_form__succeeded = (hlds__goal_form__V_28_28 == (MR_Integer) 1);
#line 239 "goal_form.m"
                  }
#line 238 "goal_form.m"
              }
#line 237 "goal_form.m"
            else
#line 237 "goal_form.m"
              hlds__goal_form__succeeded = MR_FALSE;
#line 229 "goal_form.m"
            if (hlds__goal_form__succeeded)
#line 229 "goal_form.m"
              {
#line 5857 "hlds.goal_form.c"
                hlds__goal_form__TypeCtorInfo_31_31 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 241 "goal_form.m"
                {
#line 241 "goal_form.m"
                  parse_tree__set_of_var__delete_3_p_0(hlds__goal_form__TypeCtorInfo_31_31, hlds__goal_form__Var_17, hlds__goal_form__STATE_VARIABLE_ToAssignVars_0_2, &hlds__goal_form__STATE_VARIABLE_ToAssignVars_29_29);
                }
#line 242 "goal_form.m"
                /* direct tailcall eliminated */
#line 242 "goal_form.m"
                {
#line 242 "goal_form.m"
                  MR_Word hlds__goal_form__HeadVar__1__tmp_copy_1 = hlds__goal_form__Goals_8;
#line 242 "goal_form.m"
                  MR_Word hlds__goal_form__STATE_VARIABLE_ToAssignVars_0__tmp_copy_2 = hlds__goal_form__STATE_VARIABLE_ToAssignVars_29_29;

#line 242 "goal_form.m"
                  hlds__goal_form__STATE_VARIABLE_ToAssignVars_0_2 = hlds__goal_form__STATE_VARIABLE_ToAssignVars_0__tmp_copy_2;
#line 242 "goal_form.m"
                  hlds__goal_form__HeadVar__1_1 = hlds__goal_form__HeadVar__1__tmp_copy_1;
#line 242 "goal_form.m"
                }
#line 242 "goal_form.m"
                continue;
#line 229 "goal_form.m"
              }
#line 229 "goal_form.m"
          }
#line 228 "goal_form.m"
        return hlds__goal_form__succeeded;
#line 228 "goal_form.m"
      }
#line 228 "goal_form.m"
      break;
#line 228 "goal_form.m"
    }
#line 225 "goal_form.m"
}

#line 194 "goal_form.m"
MR_Word MR_CALL 
hlds__goal_form__goal_expr_has_subgoals_1_f_0(
#line 194 "goal_form.m"
  MR_Word hlds__goal_form__GoalExpr_3)
#line 194 "goal_form.m"
{
#line 1183 "goal_form.m"
  {
#line 1183 "goal_form.m"
    MR_bool hlds__goal_form__succeeded;
#line 1183 "goal_form.m"
    MR_Word hlds__goal_form__HasSubGoals_4;

#line 1183 "goal_form.m"
#line 1183 "goal_form.m"
    switch (MR_tag((MR_Word) hlds__goal_form__GoalExpr_3)) {
#line 1183 "goal_form.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1183 "goal_form.m"
      case (MR_Integer) 0:
#line 1202 "goal_form.m"
        hlds__goal_form__HasSubGoals_4 = (MR_Integer) 0;
#line 1183 "goal_form.m"
        break;
#line 1183 "goal_form.m"
      case (MR_Integer) 1:
#line 1183 "goal_form.m"
      case (MR_Integer) 2:
#line 1184 "goal_form.m"
        hlds__goal_form__HasSubGoals_4 = (MR_Integer) 1;
#line 1183 "goal_form.m"
        break;
#line 1183 "goal_form.m"
      case (MR_Integer) 3:
#line 1183 "goal_form.m"
#line 1183 "goal_form.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_3, (MR_Integer) 0)))) {
#line 1183 "goal_form.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1183 "goal_form.m"
          case (MR_Integer) 0:
#line 1183 "goal_form.m"
          case (MR_Integer) 1:
#line 1184 "goal_form.m"
            hlds__goal_form__HasSubGoals_4 = (MR_Integer) 1;
#line 1183 "goal_form.m"
            break;
#line 1183 "goal_form.m"
          case (MR_Integer) 2:
#line 1188 "goal_form.m"
            {
#line 1188 "goal_form.m"
              MR_Word hlds__goal_form__SubGoals_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_3, (MR_Integer) 2)));
#line 1186 "goal_form.m"
              MR_Word hlds__goal_form__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_3, (MR_Integer) 1)));

#line 1192 "goal_form.m"
              if ((hlds__goal_form__SubGoals_29 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1191 "goal_form.m"
                hlds__goal_form__HasSubGoals_4 = (MR_Integer) 1;
#line 1192 "goal_form.m"
              else
#line 1194 "goal_form.m"
                hlds__goal_form__HasSubGoals_4 = (MR_Integer) 0;
#line 1188 "goal_form.m"
            }
#line 1183 "goal_form.m"
            break;
#line 1183 "goal_form.m"
          case (MR_Integer) 3:
#line 1188 "goal_form.m"
            {
#line 1188 "goal_form.m"
              MR_Word hlds__goal_form__SubGoals_61 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_3, (MR_Integer) 1)));

#line 1192 "goal_form.m"
              if ((hlds__goal_form__SubGoals_61 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1191 "goal_form.m"
                hlds__goal_form__HasSubGoals_4 = (MR_Integer) 1;
#line 1192 "goal_form.m"
              else
#line 1194 "goal_form.m"
                hlds__goal_form__HasSubGoals_4 = (MR_Integer) 0;
#line 1188 "goal_form.m"
            }
#line 1183 "goal_form.m"
            break;
#line 1183 "goal_form.m"
          case (MR_Integer) 4:
#line 1183 "goal_form.m"
          case (MR_Integer) 5:
#line 1183 "goal_form.m"
          case (MR_Integer) 6:
#line 1202 "goal_form.m"
            hlds__goal_form__HasSubGoals_4 = (MR_Integer) 0;
#line 1183 "goal_form.m"
            break;
#line 1183 "goal_form.m"
          case (MR_Integer) 7:
#line 1209 "goal_form.m"
            hlds__goal_form__HasSubGoals_4 = (MR_Integer) 0;
#line 1183 "goal_form.m"
            break;
#line 1183 "goal_form.m"
        }
#line 1183 "goal_form.m"
        break;
#line 1183 "goal_form.m"
    }
#line 1183 "goal_form.m"
    return hlds__goal_form__HasSubGoals_4;
#line 1183 "goal_form.m"
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
#line 1092 "goal_form.m"
  while (MR_TRUE)
#line 1092 "goal_form.m"
    {
#line 1092 "goal_form.m"
      /* tailcall optimized into a loop */
#line 1092 "goal_form.m"
      {
#line 1092 "goal_form.m"
        MR_bool hlds__goal_form__succeeded;
#line 1092 "goal_form.m"
        MR_Word hlds__goal_form__HasForeign_4;
#line 1092 "goal_form.m"
        MR_Word hlds__goal_form__GoalExpr_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Goal_3, (MR_Integer) 0)));
#line 1093 "goal_form.m"
        MR_Word hlds__goal_form__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Goal_3, (MR_Integer) 1)));

#line 1100 "goal_form.m"
#line 1100 "goal_form.m"
        switch (MR_tag((MR_Word) hlds__goal_form__GoalExpr_5)) {
#line 1100 "goal_form.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1100 "goal_form.m"
          case (MR_Integer) 0:
#line 1110 "goal_form.m"
            {
#line 1110 "goal_form.m"
              MR_Word hlds__goal_form__SubGoal_28 = (MR_Word) MR_body(((MR_Word) hlds__goal_form__GoalExpr_5), (MR_Integer) 0);

#line 1111 "goal_form.m"
              /* direct tailcall eliminated */
#line 1111 "goal_form.m"
              {
#line 1111 "goal_form.m"
                MR_Word hlds__goal_form__Goal__tmp_copy_3 = hlds__goal_form__SubGoal_28;

#line 1111 "goal_form.m"
                hlds__goal_form__Goal_3 = hlds__goal_form__Goal__tmp_copy_3;
#line 1111 "goal_form.m"
              }
#line 1111 "goal_form.m"
              continue;
#line 1110 "goal_form.m"
            }
#line 1100 "goal_form.m"
            break;
#line 1100 "goal_form.m"
          case (MR_Integer) 1:
#line 1100 "goal_form.m"
          case (MR_Integer) 2:
#line 1099 "goal_form.m"
            hlds__goal_form__HasForeign_4 = (MR_Integer) 0;
#line 1100 "goal_form.m"
            break;
#line 1100 "goal_form.m"
          case (MR_Integer) 3:
#line 1100 "goal_form.m"
#line 1100 "goal_form.m"
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_5, (MR_Integer) 0)))) {
#line 1100 "goal_form.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1100 "goal_form.m"
              case (MR_Integer) 0:
#line 1099 "goal_form.m"
                hlds__goal_form__HasForeign_4 = (MR_Integer) 0;
#line 1100 "goal_form.m"
                break;
#line 1100 "goal_form.m"
              case (MR_Integer) 1:
#line 1138 "goal_form.m"
                hlds__goal_form__HasForeign_4 = (MR_Integer) 1;
#line 1100 "goal_form.m"
                break;
#line 1100 "goal_form.m"
              case (MR_Integer) 2:
#line 1101 "goal_form.m"
                {
#line 1101 "goal_form.m"
                  MR_Word hlds__goal_form__Goals_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_5, (MR_Integer) 2)));
#line 1101 "goal_form.m"
                  MR_Word hlds__goal_form__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_5, (MR_Integer) 1)));

#line 1102 "goal_form.m"
                  {
#line 1102 "goal_form.m"
                    return hlds__goal_form__HasForeign_4 = hlds__goal_form__goal_list_has_foreign_1_f_0(hlds__goal_form__Goals_24);
                  }
#line 1101 "goal_form.m"
                }
#line 1100 "goal_form.m"
                break;
#line 1100 "goal_form.m"
              case (MR_Integer) 3:
#line 1104 "goal_form.m"
                {
#line 1104 "goal_form.m"
                  MR_Word hlds__goal_form__Goals_60 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_5, (MR_Integer) 1)));

#line 1105 "goal_form.m"
                  {
#line 1105 "goal_form.m"
                    return hlds__goal_form__HasForeign_4 = hlds__goal_form__goal_list_has_foreign_1_f_0(hlds__goal_form__Goals_60);
                  }
#line 1104 "goal_form.m"
                }
#line 1100 "goal_form.m"
                break;
#line 1100 "goal_form.m"
              case (MR_Integer) 4:
#line 1107 "goal_form.m"
                {
#line 1107 "goal_form.m"
                  MR_Word hlds__goal_form__Cases_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_5, (MR_Integer) 3)));
#line 1107 "goal_form.m"
                  MR_Word hlds__goal_form__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_5, (MR_Integer) 1)));
#line 1107 "goal_form.m"
                  MR_Word hlds__goal_form__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_5, (MR_Integer) 2)));

#line 1108 "goal_form.m"
                  {
#line 1108 "goal_form.m"
                    return hlds__goal_form__HasForeign_4 = hlds__goal_form__case_list_has_foreign_1_f_0(hlds__goal_form__Cases_27);
                  }
#line 1107 "goal_form.m"
                }
#line 1100 "goal_form.m"
                break;
#line 1100 "goal_form.m"
              case (MR_Integer) 5:
#line 1113 "goal_form.m"
                {
#line 1113 "goal_form.m"
                  MR_Word hlds__goal_form__Reason_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_5, (MR_Integer) 1)));
#line 1113 "goal_form.m"
                  MR_Word hlds__goal_form__SubGoal_61 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_5, (MR_Integer) 2)));
#line 1115 "goal_form.m"
                  MR_Word hlds__goal_form__FGT_31;
#line 1115 "goal_form.m"
                  MR_Word hlds__goal_form__V_30_30;

#line 1115 "goal_form.m"
                  hlds__goal_form__succeeded = ((((MR_tag((MR_Word) hlds__goal_form__Reason_29)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__Reason_29, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 1115 "goal_form.m"
                  if (hlds__goal_form__succeeded)
#line 1115 "goal_form.m"
                    {
#line 1115 "goal_form.m"
                      hlds__goal_form__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__Reason_29, (MR_Integer) 1)));
#line 1115 "goal_form.m"
                      hlds__goal_form__FGT_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__Reason_29, (MR_Integer) 2)));
#line 1117 "goal_form.m"
#line 1117 "goal_form.m"
                      switch (hlds__goal_form__FGT_31) {
#line 1117 "goal_form.m"
                        default:
#line 1117 "goal_form.m"
                          hlds__goal_form__succeeded = MR_FALSE;
#line 1117 "goal_form.m"
                          break;
#line 1117 "goal_form.m"
                        case (MR_Integer) 1:
#line 1116 "goal_form.m"
                          hlds__goal_form__succeeded = MR_TRUE;
#line 1117 "goal_form.m"
                          break;
#line 1117 "goal_form.m"
                        case (MR_Integer) 2:
#line 1117 "goal_form.m"
                          hlds__goal_form__succeeded = MR_TRUE;
#line 1117 "goal_form.m"
                          break;
#line 1117 "goal_form.m"
                      }
#line 1115 "goal_form.m"
                    }
#line 1121 "goal_form.m"
                  if (hlds__goal_form__succeeded)
#line 1120 "goal_form.m"
                    hlds__goal_form__HasForeign_4 = (MR_Integer) 0;
#line 1121 "goal_form.m"
                  else
#line 1122 "goal_form.m"
                    {
#line 1122 "goal_form.m"
                      /* direct tailcall eliminated */
#line 1122 "goal_form.m"
                      {
#line 1122 "goal_form.m"
                        MR_Word hlds__goal_form__Goal__tmp_copy_3 = hlds__goal_form__SubGoal_61;

#line 1122 "goal_form.m"
                        hlds__goal_form__Goal_3 = hlds__goal_form__Goal__tmp_copy_3;
#line 1122 "goal_form.m"
                      }
#line 1122 "goal_form.m"
                      continue;
#line 1122 "goal_form.m"
                    }
#line 1113 "goal_form.m"
                }
#line 1100 "goal_form.m"
                break;
#line 1100 "goal_form.m"
              case (MR_Integer) 6:
#line 1125 "goal_form.m"
                {
#line 1125 "goal_form.m"
                  MR_Word hlds__goal_form__Cond_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_5, (MR_Integer) 2)));
#line 1125 "goal_form.m"
                  MR_Word hlds__goal_form__Then_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_5, (MR_Integer) 3)));
#line 1125 "goal_form.m"
                  MR_Word hlds__goal_form__Else_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_5, (MR_Integer) 4)));
#line 1125 "goal_form.m"
                  MR_Word hlds__goal_form__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_5, (MR_Integer) 1)));

#line 1127 "goal_form.m"
                  {
#line 1127 "goal_form.m"
                    MR_Word hlds__goal_form__V_59_59;

#line 1127 "goal_form.m"
                    {
#line 1127 "goal_form.m"
                      hlds__goal_form__V_59_59 = hlds__goal_form__goal_has_foreign_1_f_0(hlds__goal_form__Cond_33);
                    }
#line 1127 "goal_form.m"
                    hlds__goal_form__succeeded = (hlds__goal_form__V_59_59 == (MR_Integer) 1);
#line 1127 "goal_form.m"
                  }
#line 1128 "goal_form.m"
                  if (!(hlds__goal_form__succeeded))
#line 1128 "goal_form.m"
                    {
#line 1128 "goal_form.m"
                      {
#line 1128 "goal_form.m"
                        MR_Word hlds__goal_form__V_58_58;

#line 1128 "goal_form.m"
                        {
#line 1128 "goal_form.m"
                          hlds__goal_form__V_58_58 = hlds__goal_form__goal_has_foreign_1_f_0(hlds__goal_form__Then_34);
                        }
#line 1128 "goal_form.m"
                        hlds__goal_form__succeeded = (hlds__goal_form__V_58_58 == (MR_Integer) 1);
#line 1128 "goal_form.m"
                      }
#line 1128 "goal_form.m"
                      if (!(hlds__goal_form__succeeded))
#line 1129 "goal_form.m"
                        {
#line 1129 "goal_form.m"
                          MR_Word hlds__goal_form__V_57_57;

#line 1129 "goal_form.m"
                          {
#line 1129 "goal_form.m"
                            hlds__goal_form__V_57_57 = hlds__goal_form__goal_has_foreign_1_f_0(hlds__goal_form__Else_35);
                          }
#line 1129 "goal_form.m"
                          hlds__goal_form__succeeded = (hlds__goal_form__V_57_57 == (MR_Integer) 1);
#line 1129 "goal_form.m"
                        }
#line 1128 "goal_form.m"
                    }
#line 1133 "goal_form.m"
                  if (hlds__goal_form__succeeded)
#line 1132 "goal_form.m"
                    hlds__goal_form__HasForeign_4 = (MR_Integer) 1;
#line 1133 "goal_form.m"
                  else
#line 1134 "goal_form.m"
                    hlds__goal_form__HasForeign_4 = (MR_Integer) 0;
#line 1125 "goal_form.m"
                }
#line 1100 "goal_form.m"
                break;
#line 1100 "goal_form.m"
              case (MR_Integer) 7:
#line 1140 "goal_form.m"
                {
#line 1140 "goal_form.m"
                  MR_Word hlds__goal_form__ShortHand_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_5, (MR_Integer) 1)));

#line 1144 "goal_form.m"
#line 1144 "goal_form.m"
                  switch (MR_tag((MR_Word) hlds__goal_form__ShortHand_43)) {
#line 1144 "goal_form.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 1144 "goal_form.m"
                    case (MR_Integer) 0:
#line 1148 "goal_form.m"
                      {
#line 1148 "goal_form.m"
                        MR_Word hlds__goal_form__GoalA_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__ShortHand_43, (MR_Integer) 0)));
#line 1148 "goal_form.m"
                        MR_Word hlds__goal_form__GoalB_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__ShortHand_43, (MR_Integer) 1)));
#line 1148 "goal_form.m"
                        MR_Word hlds__goal_form__V_55_55;
#line 1148 "goal_form.m"
                        MR_Word hlds__goal_form__V_56_56;

#line 1149 "goal_form.m"
                        {
#line 1149 "goal_form.m"
                          hlds__goal_form__V_55_55 = hlds__goal_form__goal_has_foreign_1_f_0(hlds__goal_form__GoalA_53);
                        }
#line 1150 "goal_form.m"
                        {
#line 1150 "goal_form.m"
                          hlds__goal_form__V_56_56 = hlds__goal_form__goal_has_foreign_1_f_0(hlds__goal_form__GoalB_54);
                        }
#line 1149 "goal_form.m"
                        {
#line 1149 "goal_form.m"
                          return hlds__goal_form__HasForeign_4 = mercury__bool__or_2_f_0(hlds__goal_form__V_55_55, hlds__goal_form__V_56_56);
                        }
#line 1148 "goal_form.m"
                      }
#line 1144 "goal_form.m"
                      break;
#line 1144 "goal_form.m"
                    case (MR_Integer) 1:
#line 1143 "goal_form.m"
                      hlds__goal_form__HasForeign_4 = (MR_Integer) 1;
#line 1144 "goal_form.m"
                      break;
#line 1144 "goal_form.m"
                    case (MR_Integer) 2:
#line 1145 "goal_form.m"
                      {
#line 1145 "goal_form.m"
                        MR_Word hlds__goal_form__SubGoal_62 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__ShortHand_43, (MR_Integer) 2)));
#line 1145 "goal_form.m"
                        MR_Word hlds__goal_form__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__ShortHand_43, (MR_Integer) 0)));
#line 1145 "goal_form.m"
                        MR_Word hlds__goal_form__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__ShortHand_43, (MR_Integer) 1)));

#line 1146 "goal_form.m"
                        /* direct tailcall eliminated */
#line 1146 "goal_form.m"
                        {
#line 1146 "goal_form.m"
                          MR_Word hlds__goal_form__Goal__tmp_copy_3 = hlds__goal_form__SubGoal_62;

#line 1146 "goal_form.m"
                          hlds__goal_form__Goal_3 = hlds__goal_form__Goal__tmp_copy_3;
#line 1146 "goal_form.m"
                        }
#line 1146 "goal_form.m"
                        continue;
#line 1145 "goal_form.m"
                      }
#line 1144 "goal_form.m"
                      break;
#line 1144 "goal_form.m"
                  }
#line 1140 "goal_form.m"
                }
#line 1100 "goal_form.m"
                break;
#line 1100 "goal_form.m"
            }
#line 1100 "goal_form.m"
            break;
#line 1100 "goal_form.m"
        }
#line 1092 "goal_form.m"
        return hlds__goal_form__HasForeign_4;
#line 1092 "goal_form.m"
      }
#line 1092 "goal_form.m"
      break;
#line 1092 "goal_form.m"
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
#line 1088 "goal_form.m"
  {
#line 1088 "goal_form.m"
    MR_bool hlds__goal_form__succeeded;
#line 1088 "goal_form.m"
    MR_Word hlds__goal_form__HeadVar__2_2;
#line 1088 "goal_form.m"
    MR_Word hlds__goal_form__V_4_4;

#line 1082 "goal_form.m"
    {
#line 1082 "goal_form.m"
      hlds__goal_form__succeeded = hlds__hlds_goal__goal_info_has_feature_2_p_0(hlds__goal_form__GoalInfo_3, (MR_Integer) 15);
    }
#line 1081 "goal_form.m"
    if (hlds__goal_form__succeeded)
#line 1083 "goal_form.m"
      hlds__goal_form__V_4_4 = (MR_Integer) 1;
#line 1081 "goal_form.m"
    else
#line 1085 "goal_form.m"
      hlds__goal_form__V_4_4 = (MR_Integer) 0;
#line 1088 "goal_form.m"
    {
#line 1088 "goal_form.m"
      return hlds__goal_form__HeadVar__2_2 = mercury__bool__not_1_f_0(hlds__goal_form__V_4_4);
    }
#line 1088 "goal_form.m"
    return hlds__goal_form__HeadVar__2_2;
#line 1088 "goal_form.m"
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
#line 1081 "goal_form.m"
  {
#line 1081 "goal_form.m"
    MR_bool hlds__goal_form__succeeded;
#line 1081 "goal_form.m"
    MR_Word hlds__goal_form__HeadVar__2_2;

#line 1082 "goal_form.m"
    {
#line 1082 "goal_form.m"
      hlds__goal_form__succeeded = hlds__hlds_goal__goal_info_has_feature_2_p_0(hlds__goal_form__GoalInfo_3, (MR_Integer) 15);
    }
#line 1081 "goal_form.m"
    if (hlds__goal_form__succeeded)
#line 1083 "goal_form.m"
      hlds__goal_form__HeadVar__2_2 = (MR_Integer) 1;
#line 1081 "goal_form.m"
    else
#line 1085 "goal_form.m"
      hlds__goal_form__HeadVar__2_2 = (MR_Integer) 0;
#line 1081 "goal_form.m"
    return hlds__goal_form__HeadVar__2_2;
#line 1081 "goal_form.m"
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
#line 957 "goal_form.m"
  while (MR_TRUE)
#line 957 "goal_form.m"
    {
#line 957 "goal_form.m"
      /* tailcall optimized into a loop */
#line 957 "goal_form.m"
      {
#line 957 "goal_form.m"
        MR_bool hlds__goal_form__succeeded;
#line 957 "goal_form.m"
        MR_Word hlds__goal_form__GoalExpr_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Goal_6, (MR_Integer) 0)));
#line 958 "goal_form.m"
        MR_Word hlds__goal_form__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Goal_6, (MR_Integer) 1)));

#line 966 "goal_form.m"
#line 966 "goal_form.m"
        switch (MR_tag((MR_Word) hlds__goal_form__GoalExpr_11)) {
#line 966 "goal_form.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 966 "goal_form.m"
          case (MR_Integer) 0:
#line 997 "goal_form.m"
            {
#line 997 "goal_form.m"
              MR_Word hlds__goal_form__SubGoal_54 = (MR_Word) MR_body(((MR_Word) hlds__goal_form__GoalExpr_11), (MR_Integer) 0);

#line 998 "goal_form.m"
              /* direct tailcall eliminated */
#line 998 "goal_form.m"
              {
#line 998 "goal_form.m"
                MR_Word hlds__goal_form__Goal__tmp_copy_6 = hlds__goal_form__SubGoal_54;

#line 998 "goal_form.m"
                hlds__goal_form__Goal_6 = hlds__goal_form__Goal__tmp_copy_6;
#line 998 "goal_form.m"
              }
#line 998 "goal_form.m"
              continue;
#line 997 "goal_form.m"
            }
#line 966 "goal_form.m"
            break;
#line 966 "goal_form.m"
          case (MR_Integer) 1:
#line 963 "goal_form.m"
            {
#line 964 "goal_form.m"
              *hlds__goal_form__Min_9 = (MR_Integer) 0;
#line 965 "goal_form.m"
              *hlds__goal_form__Max_10 = (MR_Integer) 0;
#line 963 "goal_form.m"
            }
#line 966 "goal_form.m"
            break;
#line 966 "goal_form.m"
          case (MR_Integer) 2:
#line 967 "goal_form.m"
            {
#line 967 "goal_form.m"
              MR_Word hlds__goal_form__CallPredId_30 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__GoalExpr_11, (MR_Integer) 0)));
#line 967 "goal_form.m"
              MR_Integer hlds__goal_form__CallProcId_31 = ((MR_Integer) (MR_hl_field(MR_mktag(2), hlds__goal_form__GoalExpr_11, (MR_Integer) 1)));
#line 967 "goal_form.m"
              MR_Word hlds__goal_form__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__GoalExpr_11, (MR_Integer) 2)));
#line 967 "goal_form.m"
              MR_Word hlds__goal_form__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__GoalExpr_11, (MR_Integer) 3)));
#line 967 "goal_form.m"
              MR_Word hlds__goal_form__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__GoalExpr_11, (MR_Integer) 4)));
#line 967 "goal_form.m"
              MR_Word hlds__goal_form__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__GoalExpr_11, (MR_Integer) 5)));

#line 969 "goal_form.m"
              {
#line 969 "goal_form.m"
                hlds__goal_form__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(hlds__goal_form__PredId_7, hlds__goal_form__CallPredId_30);
              }
#line 969 "goal_form.m"
              if (hlds__goal_form__succeeded)
#line 970 "goal_form.m"
                hlds__goal_form__succeeded = (hlds__goal_form__ProcId_8 == hlds__goal_form__CallProcId_31);
#line 973 "goal_form.m"
              if (hlds__goal_form__succeeded)
#line 972 "goal_form.m"
                *hlds__goal_form__Min_9 = (MR_Integer) 1;
#line 973 "goal_form.m"
              else
#line 974 "goal_form.m"
                *hlds__goal_form__Min_9 = (MR_Integer) 0;
#line 977 "goal_form.m"
              *hlds__goal_form__Max_10 = *hlds__goal_form__Min_9;
#line 967 "goal_form.m"
            }
#line 966 "goal_form.m"
            break;
#line 966 "goal_form.m"
          case (MR_Integer) 3:
#line 966 "goal_form.m"
#line 966 "goal_form.m"
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_11, (MR_Integer) 0)))) {
#line 966 "goal_form.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 966 "goal_form.m"
              case (MR_Integer) 0:
#line 966 "goal_form.m"
              case (MR_Integer) 1:
#line 963 "goal_form.m"
                {
#line 964 "goal_form.m"
                  *hlds__goal_form__Min_9 = (MR_Integer) 0;
#line 965 "goal_form.m"
                  *hlds__goal_form__Max_10 = (MR_Integer) 0;
#line 963 "goal_form.m"
                }
#line 966 "goal_form.m"
                break;
#line 966 "goal_form.m"
              case (MR_Integer) 2:
#line 979 "goal_form.m"
                {
#line 979 "goal_form.m"
                  MR_Word hlds__goal_form__Goals_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_11, (MR_Integer) 2)));
#line 979 "goal_form.m"
                  MR_Word hlds__goal_form__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_11, (MR_Integer) 1)));

#line 980 "goal_form.m"
                  {
#line 980 "goal_form.m"
                    hlds__goal_form__count_recursive_calls_conj_7_p_0(hlds__goal_form__Goals_38, hlds__goal_form__PredId_7, hlds__goal_form__ProcId_8, (MR_Integer) 0, (MR_Integer) 0, hlds__goal_form__Min_9, hlds__goal_form__Max_10);
#line 980 "goal_form.m"
                    return;
                  }
#line 979 "goal_form.m"
                }
#line 966 "goal_form.m"
                break;
#line 966 "goal_form.m"
              case (MR_Integer) 3:
#line 982 "goal_form.m"
                {
#line 982 "goal_form.m"
                  MR_Word hlds__goal_form__Goals_76 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_11, (MR_Integer) 1)));

#line 983 "goal_form.m"
                  {
#line 983 "goal_form.m"
                    hlds__goal_form__count_recursive_calls_disj_5_p_0(hlds__goal_form__Goals_76, hlds__goal_form__PredId_7, hlds__goal_form__ProcId_8, hlds__goal_form__Min_9, hlds__goal_form__Max_10);
#line 983 "goal_form.m"
                    return;
                  }
#line 982 "goal_form.m"
                }
#line 966 "goal_form.m"
                break;
#line 966 "goal_form.m"
              case (MR_Integer) 4:
#line 985 "goal_form.m"
                {
#line 985 "goal_form.m"
                  MR_Word hlds__goal_form__Cases_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_11, (MR_Integer) 3)));
#line 985 "goal_form.m"
                  MR_Word hlds__goal_form__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_11, (MR_Integer) 1)));
#line 985 "goal_form.m"
                  MR_Word hlds__goal_form__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_11, (MR_Integer) 2)));

#line 986 "goal_form.m"
                  {
#line 986 "goal_form.m"
                    hlds__goal_form__count_recursive_calls_cases_5_p_0(hlds__goal_form__Cases_41, hlds__goal_form__PredId_7, hlds__goal_form__ProcId_8, hlds__goal_form__Min_9, hlds__goal_form__Max_10);
#line 986 "goal_form.m"
                    return;
                  }
#line 985 "goal_form.m"
                }
#line 966 "goal_form.m"
                break;
#line 966 "goal_form.m"
              case (MR_Integer) 5:
#line 1000 "goal_form.m"
                {
#line 1000 "goal_form.m"
                  MR_Word hlds__goal_form__Reason_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_11, (MR_Integer) 1)));
#line 1000 "goal_form.m"
                  MR_Word hlds__goal_form__SubGoal_77 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_11, (MR_Integer) 2)));
#line 1002 "goal_form.m"
                  MR_Word hlds__goal_form__FGT_57;
#line 1002 "goal_form.m"
                  MR_Word hlds__goal_form__V_56_56;

#line 1002 "goal_form.m"
                  hlds__goal_form__succeeded = ((((MR_tag((MR_Word) hlds__goal_form__Reason_55)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__Reason_55, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 1002 "goal_form.m"
                  if (hlds__goal_form__succeeded)
#line 1002 "goal_form.m"
                    {
#line 1002 "goal_form.m"
                      hlds__goal_form__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__Reason_55, (MR_Integer) 1)));
#line 1002 "goal_form.m"
                      hlds__goal_form__FGT_57 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__Reason_55, (MR_Integer) 2)));
#line 1004 "goal_form.m"
#line 1004 "goal_form.m"
                      switch (hlds__goal_form__FGT_57) {
#line 1004 "goal_form.m"
                        default:
#line 1004 "goal_form.m"
                          hlds__goal_form__succeeded = MR_FALSE;
#line 1004 "goal_form.m"
                          break;
#line 1004 "goal_form.m"
                        case (MR_Integer) 1:
#line 1003 "goal_form.m"
                          hlds__goal_form__succeeded = MR_TRUE;
#line 1004 "goal_form.m"
                          break;
#line 1004 "goal_form.m"
                        case (MR_Integer) 2:
#line 1004 "goal_form.m"
                          hlds__goal_form__succeeded = MR_TRUE;
#line 1004 "goal_form.m"
                          break;
#line 1004 "goal_form.m"
                      }
#line 1002 "goal_form.m"
                    }
#line 1011 "goal_form.m"
                  if (hlds__goal_form__succeeded)
#line 1009 "goal_form.m"
                    {
#line 1009 "goal_form.m"
                      *hlds__goal_form__Min_9 = (MR_Integer) 0;
#line 1010 "goal_form.m"
                      *hlds__goal_form__Max_10 = (MR_Integer) 0;
#line 1009 "goal_form.m"
                    }
#line 1011 "goal_form.m"
                  else
#line 1012 "goal_form.m"
                    {
#line 1012 "goal_form.m"
                      /* direct tailcall eliminated */
#line 1012 "goal_form.m"
                      {
#line 1012 "goal_form.m"
                        MR_Word hlds__goal_form__Goal__tmp_copy_6 = hlds__goal_form__SubGoal_77;

#line 1012 "goal_form.m"
                        hlds__goal_form__Goal_6 = hlds__goal_form__Goal__tmp_copy_6;
#line 1012 "goal_form.m"
                      }
#line 1012 "goal_form.m"
                      continue;
#line 1012 "goal_form.m"
                    }
#line 1000 "goal_form.m"
                }
#line 966 "goal_form.m"
                break;
#line 966 "goal_form.m"
              case (MR_Integer) 6:
#line 988 "goal_form.m"
                {
#line 988 "goal_form.m"
                  MR_Word hlds__goal_form__Cond_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_11, (MR_Integer) 2)));
#line 988 "goal_form.m"
                  MR_Word hlds__goal_form__Then_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_11, (MR_Integer) 3)));
#line 988 "goal_form.m"
                  MR_Word hlds__goal_form__Else_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_11, (MR_Integer) 4)));
#line 988 "goal_form.m"
                  MR_Integer hlds__goal_form__CMin_46;
#line 988 "goal_form.m"
                  MR_Integer hlds__goal_form__CMax_47;
#line 988 "goal_form.m"
                  MR_Integer hlds__goal_form__TMin_48;
#line 988 "goal_form.m"
                  MR_Integer hlds__goal_form__TMax_49;
#line 988 "goal_form.m"
                  MR_Integer hlds__goal_form__EMin_50;
#line 988 "goal_form.m"
                  MR_Integer hlds__goal_form__EMax_51;
#line 988 "goal_form.m"
                  MR_Integer hlds__goal_form__CTMin_52;
#line 988 "goal_form.m"
                  MR_Integer hlds__goal_form__CTMax_53;
#line 988 "goal_form.m"
                  MR_Word hlds__goal_form__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_11, (MR_Integer) 1)));

#line 989 "goal_form.m"
                  {
#line 989 "goal_form.m"
                    hlds__goal_form__count_recursive_calls_5_p_0(hlds__goal_form__Cond_43, hlds__goal_form__PredId_7, hlds__goal_form__ProcId_8, &hlds__goal_form__CMin_46, &hlds__goal_form__CMax_47);
                  }
#line 990 "goal_form.m"
                  {
#line 990 "goal_form.m"
                    hlds__goal_form__count_recursive_calls_5_p_0(hlds__goal_form__Then_44, hlds__goal_form__PredId_7, hlds__goal_form__ProcId_8, &hlds__goal_form__TMin_48, &hlds__goal_form__TMax_49);
                  }
#line 991 "goal_form.m"
                  {
#line 991 "goal_form.m"
                    hlds__goal_form__count_recursive_calls_5_p_0(hlds__goal_form__Else_45, hlds__goal_form__PredId_7, hlds__goal_form__ProcId_8, &hlds__goal_form__EMin_50, &hlds__goal_form__EMax_51);
                  }
#line 992 "goal_form.m"
                  hlds__goal_form__CTMin_52 = (hlds__goal_form__CMin_46 + hlds__goal_form__TMin_48);
#line 993 "goal_form.m"
                  hlds__goal_form__CTMax_53 = (hlds__goal_form__CMax_47 + hlds__goal_form__TMax_49);
#line 994 "goal_form.m"
                  {
#line 994 "goal_form.m"
                    mercury__int__min_3_p_0(hlds__goal_form__CTMin_52, hlds__goal_form__EMin_50, hlds__goal_form__Min_9);
                  }
#line 995 "goal_form.m"
                  {
#line 995 "goal_form.m"
                    mercury__int__max_3_p_0(hlds__goal_form__CTMax_53, hlds__goal_form__EMax_51, hlds__goal_form__Max_10);
#line 995 "goal_form.m"
                    return;
                  }
#line 988 "goal_form.m"
                }
#line 966 "goal_form.m"
                break;
#line 966 "goal_form.m"
              case (MR_Integer) 7:
#line 1015 "goal_form.m"
                {
#line 1015 "goal_form.m"
                  MR_Word hlds__goal_form__ShortHand_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_11, (MR_Integer) 1)));

#line 1020 "goal_form.m"
#line 1020 "goal_form.m"
                  switch (MR_tag((MR_Word) hlds__goal_form__ShortHand_58)) {
#line 1020 "goal_form.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 1020 "goal_form.m"
                    case (MR_Integer) 0:
#line 1024 "goal_form.m"
                      {
#line 1026 "goal_form.m"
                        {
#line 1026 "goal_form.m"
                          mercury__require__unexpected_3_p_0((MR_String) "hlds.goal_form", (MR_String) "predicate \140hlds.goal_form.count_recursive_calls\'/5", (MR_String) "bi_implication");
#line 1026 "goal_form.m"
                          return;
                        }
#line 1024 "goal_form.m"
                      }
#line 1020 "goal_form.m"
                      break;
#line 1020 "goal_form.m"
                    case (MR_Integer) 1:
#line 1017 "goal_form.m"
                      {
#line 1017 "goal_form.m"
                        MR_Word hlds__goal_form__Goal_84 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__ShortHand_58, (MR_Integer) 4)));
#line 1017 "goal_form.m"
                        MR_Word hlds__goal_form__Goals_85 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__ShortHand_58, (MR_Integer) 5)));
#line 1017 "goal_form.m"
                        MR_Word hlds__goal_form__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__ShortHand_58, (MR_Integer) 0)));
#line 1017 "goal_form.m"
                        MR_Word hlds__goal_form__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__ShortHand_58, (MR_Integer) 1)));
#line 1017 "goal_form.m"
                        MR_Word hlds__goal_form__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__ShortHand_58, (MR_Integer) 2)));
#line 1017 "goal_form.m"
                        MR_Word hlds__goal_form__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__ShortHand_58, (MR_Integer) 3)));
#line 1017 "goal_form.m"
                        MR_Word hlds__goal_form__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__ShortHand_58, (MR_Integer) 6)));

#line 1050 "goal_form.m"
                        if ((hlds__goal_form__Goals_85 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1049 "goal_form.m"
                          {
#line 1049 "goal_form.m"
                            /* direct tailcall eliminated */
#line 1049 "goal_form.m"
                            {
#line 1049 "goal_form.m"
                              MR_Word hlds__goal_form__Goal__tmp_copy_6 = hlds__goal_form__Goal_84;

#line 1049 "goal_form.m"
                              hlds__goal_form__Goal_6 = hlds__goal_form__Goal__tmp_copy_6;
#line 1049 "goal_form.m"
                            }
#line 1049 "goal_form.m"
                            continue;
#line 1049 "goal_form.m"
                          }
#line 1050 "goal_form.m"
                        else
#line 1051 "goal_form.m"
                          {
#line 1051 "goal_form.m"
                            MR_Integer hlds__goal_form__Min0_92;
#line 1051 "goal_form.m"
                            MR_Integer hlds__goal_form__Max0_93;
#line 1051 "goal_form.m"
                            MR_Integer hlds__goal_form__Min1_94;
#line 1051 "goal_form.m"
                            MR_Integer hlds__goal_form__Max1_95;

#line 1052 "goal_form.m"
                            {
#line 1052 "goal_form.m"
                              hlds__goal_form__count_recursive_calls_5_p_0(hlds__goal_form__Goal_84, hlds__goal_form__PredId_7, hlds__goal_form__ProcId_8, &hlds__goal_form__Min0_92, &hlds__goal_form__Max0_93);
                            }
#line 1053 "goal_form.m"
                            {
#line 1053 "goal_form.m"
                              hlds__goal_form__count_recursive_calls_disj_5_p_0(hlds__goal_form__Goals_85, hlds__goal_form__PredId_7, hlds__goal_form__ProcId_8, &hlds__goal_form__Min1_94, &hlds__goal_form__Max1_95);
                            }
#line 1054 "goal_form.m"
                            {
#line 1054 "goal_form.m"
                              mercury__int__min_3_p_0(hlds__goal_form__Min0_92, hlds__goal_form__Min1_94, hlds__goal_form__Min_9);
                            }
#line 1055 "goal_form.m"
                            {
#line 1055 "goal_form.m"
                              mercury__int__max_3_p_0(hlds__goal_form__Max0_93, hlds__goal_form__Max1_95, hlds__goal_form__Max_10);
#line 1055 "goal_form.m"
                              return;
                            }
#line 1051 "goal_form.m"
                          }
#line 1017 "goal_form.m"
                      }
#line 1020 "goal_form.m"
                      break;
#line 1020 "goal_form.m"
                    case (MR_Integer) 2:
#line 1021 "goal_form.m"
                      {
#line 1021 "goal_form.m"
                        MR_Word hlds__goal_form__SubGoal_78 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__ShortHand_58, (MR_Integer) 2)));
#line 1021 "goal_form.m"
                        MR_Word hlds__goal_form__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__ShortHand_58, (MR_Integer) 0)));
#line 1021 "goal_form.m"
                        MR_Word hlds__goal_form__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__ShortHand_58, (MR_Integer) 1)));

#line 1022 "goal_form.m"
                        /* direct tailcall eliminated */
#line 1022 "goal_form.m"
                        {
#line 1022 "goal_form.m"
                          MR_Word hlds__goal_form__Goal__tmp_copy_6 = hlds__goal_form__SubGoal_78;

#line 1022 "goal_form.m"
                          hlds__goal_form__Goal_6 = hlds__goal_form__Goal__tmp_copy_6;
#line 1022 "goal_form.m"
                        }
#line 1022 "goal_form.m"
                        continue;
#line 1021 "goal_form.m"
                      }
#line 1020 "goal_form.m"
                      break;
#line 1020 "goal_form.m"
                  }
#line 1015 "goal_form.m"
                }
#line 966 "goal_form.m"
                break;
#line 966 "goal_form.m"
            }
#line 966 "goal_form.m"
            break;
#line 966 "goal_form.m"
        }
#line 957 "goal_form.m"
      }
#line 957 "goal_form.m"
      break;
#line 957 "goal_form.m"
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
#line 916 "goal_form.m"
  {
#line 916 "goal_form.m"
    MR_bool hlds__goal_form__succeeded;
#line 916 "goal_form.m"
    MR_Word hlds__goal_form__GoalExpr_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__HeadVar__1_1, (MR_Integer) 0)));
#line 916 "goal_form.m"
    MR_Word hlds__goal_form__GoalInfo_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__HeadVar__1_1, (MR_Integer) 1)));
#line 916 "goal_form.m"
    MR_Word hlds__goal_form__Detism_4;
#line 916 "goal_form.m"
    MR_Word hlds__goal_form__CanFail_5;
#line 918 "goal_form.m"
    MR_Word hlds__goal_form__V_6_6;

#line 917 "goal_form.m"
    {
#line 917 "goal_form.m"
      hlds__goal_form__Detism_4 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(hlds__goal_form__GoalInfo_3);
    }
#line 918 "goal_form.m"
    {
#line 918 "goal_form.m"
      parse_tree__prog_data__determinism_components_3_p_0(hlds__goal_form__Detism_4, &hlds__goal_form__CanFail_5, &hlds__goal_form__V_6_6);
    }
#line 921 "goal_form.m"
#line 921 "goal_form.m"
    switch (hlds__goal_form__CanFail_5) {
#line 921 "goal_form.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 921 "goal_form.m"
      case (MR_Integer) 0:
#line 928 "goal_form.m"
        {
#line 928 "goal_form.m"
          MR_Word hlds__goal_form__ConjType_7;
#line 928 "goal_form.m"
          MR_Word hlds__goal_form__Goals_8;

#line 928 "goal_form.m"
          hlds__goal_form__succeeded = ((((MR_tag((MR_Word) hlds__goal_form__GoalExpr_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_2, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 928 "goal_form.m"
          if (hlds__goal_form__succeeded)
#line 928 "goal_form.m"
            {
#line 928 "goal_form.m"
              hlds__goal_form__ConjType_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_2, (MR_Integer) 1)));
#line 928 "goal_form.m"
              hlds__goal_form__Goals_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_2, (MR_Integer) 2)));
#line 929 "goal_form.m"
              hlds__goal_form__succeeded = (hlds__goal_form__ConjType_7 == (MR_Integer) 0);
#line 928 "goal_form.m"
              if (hlds__goal_form__succeeded)
#line 930 "goal_form.m"
                {
#line 930 "goal_form.m"
                  return hlds__goal_form__succeeded = hlds__goal_form__cannot_fail_before_stack_flush_conj_1_p_0(hlds__goal_form__Goals_8);
                }
#line 928 "goal_form.m"
            }
#line 928 "goal_form.m"
        }
#line 921 "goal_form.m"
        break;
#line 921 "goal_form.m"
      case (MR_Integer) 1:
#line 920 "goal_form.m"
        hlds__goal_form__succeeded = MR_TRUE;
#line 921 "goal_form.m"
        break;
#line 921 "goal_form.m"
    }
#line 916 "goal_form.m"
    return hlds__goal_form__succeeded;
#line 916 "goal_form.m"
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
#line 883 "goal_form.m"
  {
#line 883 "goal_form.m"
    MR_bool hlds__goal_form__succeeded;
#line 883 "goal_form.m"
    MR_Word hlds__goal_form__GoalExpr_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__HeadVar__1_1, (MR_Integer) 0)));
#line 883 "goal_form.m"
    MR_Word hlds__goal_form__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__HeadVar__1_1, (MR_Integer) 1)));

#line 884 "goal_form.m"
    {
#line 884 "goal_form.m"
      return hlds__goal_form__succeeded = hlds__goal_form__cannot_stack_flush_2_1_p_0(hlds__goal_form__GoalExpr_2);
    }
#line 883 "goal_form.m"
    return hlds__goal_form__succeeded;
#line 883 "goal_form.m"
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
#line 757 "goal_form.m"
  {
#line 757 "goal_form.m"
    MR_bool hlds__goal_form__succeeded;
#line 757 "goal_form.m"
    MR_Word hlds__goal_form__V_4_4;

#line 758 "goal_form.m"
    {
#line 758 "goal_form.m"
      hlds__goal_form__goal_list_may_allocate_heap_2_p_0(hlds__goal_form__Goals_2, &hlds__goal_form__V_4_4);
    }
#line 758 "goal_form.m"
    hlds__goal_form__succeeded = ((MR_Integer) 1 == hlds__goal_form__V_4_4);
#line 757 "goal_form.m"
    return hlds__goal_form__succeeded;
#line 757 "goal_form.m"
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
#line 754 "goal_form.m"
  {
#line 754 "goal_form.m"
    MR_bool hlds__goal_form__succeeded;
#line 754 "goal_form.m"
    MR_Word hlds__goal_form__V_4_4;
#line 754 "goal_form.m"
    MR_Word hlds__goal_form__GoalExpr_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Goal_2, (MR_Integer) 0)));
#line 762 "goal_form.m"
    MR_Word hlds__goal_form___GoalInfo_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Goal_2, (MR_Integer) 1)));

#line 763 "goal_form.m"
    {
#line 763 "goal_form.m"
      hlds__goal_form__goal_may_allocate_heap_2_2_p_0(hlds__goal_form__GoalExpr_6, &hlds__goal_form__V_4_4);
    }
#line 755 "goal_form.m"
    hlds__goal_form__succeeded = ((MR_Integer) 1 == hlds__goal_form__V_4_4);
#line 754 "goal_form.m"
    return hlds__goal_form__succeeded;
#line 754 "goal_form.m"
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
#line 697 "goal_form.m"
  {
#line 697 "goal_form.m"
    MR_bool hlds__goal_form__succeeded;
#line 697 "goal_form.m"
    MR_Word hlds__goal_form__HeadVar__2_2;
#line 697 "goal_form.m"
    MR_Word hlds__goal_form__GoalExpr_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__HeadVar__1_1, (MR_Integer) 0)));
#line 697 "goal_form.m"
    MR_Word hlds__goal_form___GoalInfo_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__HeadVar__1_1, (MR_Integer) 1)));

#line 697 "goal_form.m"
    {
#line 697 "goal_form.m"
      return hlds__goal_form__HeadVar__2_2 = hlds__goal_form__goal_is_flat_expr_1_f_0(hlds__goal_form__GoalExpr_3);
    }
#line 697 "goal_form.m"
    return hlds__goal_form__HeadVar__2_2;
#line 697 "goal_form.m"
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
#line 426 "goal_form.m"
  {
#line 426 "goal_form.m"
    MR_bool hlds__goal_form__succeeded;

#line 426 "goal_form.m"
    {
#line 426 "goal_form.m"
      hlds__goal_form__succeeded = hlds__goal_form__goal_cannot_loop_or_throw_1_p_0(hlds__goal_form__Goal_2);
    }
#line 426 "goal_form.m"
    hlds__goal_form__succeeded = !(hlds__goal_form__succeeded);
#line 426 "goal_form.m"
    return hlds__goal_form__succeeded;
#line 426 "goal_form.m"
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
#line 421 "goal_form.m"
  {
#line 421 "goal_form.m"
    MR_bool hlds__goal_form__succeeded;
#line 421 "goal_form.m"
    MR_Word hlds__goal_form__V_3_3;
#line 421 "goal_form.m"
    MR_Word hlds__goal_form__V_6_6;
#line 421 "goal_form.m"
    MR_Word hlds__goal_form__GoalExpr_9;
#line 421 "goal_form.m"
    MR_Word hlds__goal_form__GoalInfo_10;
#line 421 "goal_form.m"
    MR_Word hlds__goal_form__Determinism_11;

#line 422 "goal_form.m"
    {
#line 422 "goal_form.m"
      hlds__goal_form__V_3_3 = hlds__goal_form__goal_can_loop_func_2_f_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__goal_form__Goal_2);
    }
#line 422 "goal_form.m"
    hlds__goal_form__succeeded = (hlds__goal_form__V_3_3 == (MR_Integer) 0);
#line 421 "goal_form.m"
    if (hlds__goal_form__succeeded)
#line 421 "goal_form.m"
      {
#line 423 "goal_form.m"
        hlds__goal_form__V_6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 566 "goal_form.m"
        hlds__goal_form__GoalExpr_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Goal_2, (MR_Integer) 0)));
#line 566 "goal_form.m"
        hlds__goal_form__GoalInfo_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Goal_2, (MR_Integer) 1)));
#line 568 "goal_form.m"
        {
#line 568 "goal_form.m"
          hlds__goal_form__Determinism_11 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(hlds__goal_form__GoalInfo_10);
        }
#line 569 "goal_form.m"
        hlds__goal_form__succeeded = (hlds__goal_form__Determinism_11 == (MR_Integer) 6);
#line 571 "goal_form.m"
        if (hlds__goal_form__succeeded)
#line 570 "goal_form.m"
          hlds__goal_form__succeeded = MR_FALSE;
#line 571 "goal_form.m"
        else
#line 572 "goal_form.m"
          {
#line 572 "goal_form.m"
            MR_Word hlds__goal_form__V_13_13;

#line 572 "goal_form.m"
            {
#line 572 "goal_form.m"
              hlds__goal_form__V_13_13 = hlds__goal_form__goal_expr_can_throw_2_f_0(hlds__goal_form__V_6_6, hlds__goal_form__GoalExpr_9);
            }
#line 423 "goal_form.m"
            hlds__goal_form__succeeded = (hlds__goal_form__V_13_13 == (MR_Integer) 0);
#line 572 "goal_form.m"
          }
#line 421 "goal_form.m"
      }
#line 421 "goal_form.m"
    return hlds__goal_form__succeeded;
#line 421 "goal_form.m"
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
#line 419 "goal_form.m"
  {
#line 419 "goal_form.m"
    MR_bool hlds__goal_form__succeeded;

#line 419 "goal_form.m"
    {
#line 419 "goal_form.m"
      hlds__goal_form__succeeded = hlds__goal_form__goal_cannot_loop_or_throw_2_p_0(hlds__goal_form__ModuleInfo_3, hlds__goal_form__Goal_4);
    }
#line 419 "goal_form.m"
    hlds__goal_form__succeeded = !(hlds__goal_form__succeeded);
#line 419 "goal_form.m"
    return hlds__goal_form__succeeded;
#line 419 "goal_form.m"
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
#line 414 "goal_form.m"
  {
#line 414 "goal_form.m"
    MR_bool hlds__goal_form__succeeded;
#line 414 "goal_form.m"
    MR_Word hlds__goal_form__V_5_5;
#line 414 "goal_form.m"
    MR_Word hlds__goal_form__V_6_6;
#line 414 "goal_form.m"
    MR_Word hlds__goal_form__GoalExpr_11;
#line 414 "goal_form.m"
    MR_Word hlds__goal_form__GoalInfo_12;
#line 414 "goal_form.m"
    MR_Word hlds__goal_form__Determinism_13;

#line 415 "goal_form.m"
    {
#line 415 "goal_form.m"
      hlds__goal_form__V_6_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 415 "goal_form.m"
      MR_hl_field(MR_mktag(1), hlds__goal_form__V_6_6, 0) = ((MR_Box) (hlds__goal_form__ModuleInfo_3));
#line 415 "goal_form.m"
    }
#line 415 "goal_form.m"
    {
#line 415 "goal_form.m"
      hlds__goal_form__V_5_5 = hlds__goal_form__goal_can_loop_func_2_f_0(hlds__goal_form__V_6_6, hlds__goal_form__Goal_4);
    }
#line 415 "goal_form.m"
    hlds__goal_form__succeeded = (hlds__goal_form__V_5_5 == (MR_Integer) 0);
#line 414 "goal_form.m"
    if (hlds__goal_form__succeeded)
#line 414 "goal_form.m"
      {
#line 566 "goal_form.m"
        hlds__goal_form__GoalExpr_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Goal_4, (MR_Integer) 0)));
#line 566 "goal_form.m"
        hlds__goal_form__GoalInfo_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Goal_4, (MR_Integer) 1)));
#line 568 "goal_form.m"
        {
#line 568 "goal_form.m"
          hlds__goal_form__Determinism_13 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(hlds__goal_form__GoalInfo_12);
        }
#line 569 "goal_form.m"
        hlds__goal_form__succeeded = (hlds__goal_form__Determinism_13 == (MR_Integer) 6);
#line 571 "goal_form.m"
        if (hlds__goal_form__succeeded)
#line 570 "goal_form.m"
          hlds__goal_form__succeeded = MR_FALSE;
#line 571 "goal_form.m"
        else
#line 572 "goal_form.m"
          {
#line 572 "goal_form.m"
            MR_Word hlds__goal_form__V_15_15;

#line 572 "goal_form.m"
            {
#line 572 "goal_form.m"
              hlds__goal_form__V_15_15 = hlds__goal_form__goal_expr_can_throw_2_f_0(hlds__goal_form__V_6_6, hlds__goal_form__GoalExpr_11);
            }
#line 416 "goal_form.m"
            hlds__goal_form__succeeded = (hlds__goal_form__V_15_15 == (MR_Integer) 0);
#line 572 "goal_form.m"
          }
#line 414 "goal_form.m"
      }
#line 414 "goal_form.m"
    return hlds__goal_form__succeeded;
#line 414 "goal_form.m"
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
#line 568 "goal_form.m"
    {
#line 568 "goal_form.m"
      hlds__goal_form__Determinism_11 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(hlds__goal_form__GoalInfo_10);
    }
#line 569 "goal_form.m"
    hlds__goal_form__succeeded = (hlds__goal_form__Determinism_11 == (MR_Integer) 6);
#line 571 "goal_form.m"
    if (hlds__goal_form__succeeded)
#line 570 "goal_form.m"
      hlds__goal_form__succeeded = MR_TRUE;
#line 571 "goal_form.m"
    else
#line 572 "goal_form.m"
      {
#line 572 "goal_form.m"
        MR_Word hlds__goal_form__V_13_13;

#line 572 "goal_form.m"
        {
#line 572 "goal_form.m"
          hlds__goal_form__V_13_13 = hlds__goal_form__goal_expr_can_throw_2_f_0(hlds__goal_form__V_6_6, hlds__goal_form__GoalExpr_9);
        }
#line 412 "goal_form.m"
        hlds__goal_form__succeeded = (hlds__goal_form__V_13_13 == (MR_Integer) 1);
#line 572 "goal_form.m"
      }
#line 411 "goal_form.m"
    return hlds__goal_form__succeeded;
#line 411 "goal_form.m"
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
#line 408 "goal_form.m"
  {
#line 408 "goal_form.m"
    MR_bool hlds__goal_form__succeeded;
#line 408 "goal_form.m"
    MR_Word hlds__goal_form__V_6_6;
#line 408 "goal_form.m"
    MR_Word hlds__goal_form__GoalExpr_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Goal_4, (MR_Integer) 0)));
#line 408 "goal_form.m"
    MR_Word hlds__goal_form__GoalInfo_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Goal_4, (MR_Integer) 1)));
#line 408 "goal_form.m"
    MR_Word hlds__goal_form__Determinism_11;

#line 409 "goal_form.m"
    {
#line 409 "goal_form.m"
      hlds__goal_form__V_6_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 409 "goal_form.m"
      MR_hl_field(MR_mktag(1), hlds__goal_form__V_6_6, 0) = ((MR_Box) (hlds__goal_form__ModuleInfo_3));
#line 409 "goal_form.m"
    }
#line 568 "goal_form.m"
    {
#line 568 "goal_form.m"
      hlds__goal_form__Determinism_11 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(hlds__goal_form__GoalInfo_10);
    }
#line 569 "goal_form.m"
    hlds__goal_form__succeeded = (hlds__goal_form__Determinism_11 == (MR_Integer) 6);
#line 571 "goal_form.m"
    if (hlds__goal_form__succeeded)
#line 570 "goal_form.m"
      hlds__goal_form__succeeded = MR_FALSE;
#line 571 "goal_form.m"
    else
#line 572 "goal_form.m"
      {
#line 572 "goal_form.m"
        MR_Word hlds__goal_form__V_13_13;

#line 572 "goal_form.m"
        {
#line 572 "goal_form.m"
          hlds__goal_form__V_13_13 = hlds__goal_form__goal_expr_can_throw_2_f_0(hlds__goal_form__V_6_6, hlds__goal_form__GoalExpr_9);
        }
#line 409 "goal_form.m"
        hlds__goal_form__succeeded = (hlds__goal_form__V_13_13 == (MR_Integer) 0);
#line 572 "goal_form.m"
      }
#line 408 "goal_form.m"
    return hlds__goal_form__succeeded;
#line 408 "goal_form.m"
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
    hlds__goal_form__succeeded = (hlds__goal_form__V_5_5 == (MR_Integer) 1);
#line 405 "goal_form.m"
    return hlds__goal_form__succeeded;
#line 405 "goal_form.m"
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
#line 402 "goal_form.m"
  {
#line 402 "goal_form.m"
    MR_bool hlds__goal_form__succeeded;
#line 402 "goal_form.m"
    MR_Word hlds__goal_form__V_5_5;
#line 402 "goal_form.m"
    MR_Word hlds__goal_form__V_6_6;

#line 403 "goal_form.m"
    {
#line 403 "goal_form.m"
      hlds__goal_form__V_6_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 403 "goal_form.m"
      MR_hl_field(MR_mktag(1), hlds__goal_form__V_6_6, 0) = ((MR_Box) (hlds__goal_form__ModuleInfo_3));
#line 403 "goal_form.m"
    }
#line 403 "goal_form.m"
    {
#line 403 "goal_form.m"
      hlds__goal_form__V_5_5 = hlds__goal_form__goal_can_loop_func_2_f_0(hlds__goal_form__V_6_6, hlds__goal_form__Goal_4);
    }
#line 403 "goal_form.m"
    hlds__goal_form__succeeded = (hlds__goal_form__V_5_5 == (MR_Integer) 0);
#line 402 "goal_form.m"
    return hlds__goal_form__succeeded;
#line 402 "goal_form.m"
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
#line 396 "goal_form.m"
  {
#line 396 "goal_form.m"
    MR_bool hlds__goal_form__succeeded;
#line 402 "goal_form.m"
    MR_Word hlds__goal_form__V_14_14;
#line 402 "goal_form.m"
    MR_Word hlds__goal_form__V_15_15;

#line 403 "goal_form.m"
    {
#line 403 "goal_form.m"
      hlds__goal_form__V_15_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 403 "goal_form.m"
      MR_hl_field(MR_mktag(1), hlds__goal_form__V_15_15, 0) = ((MR_Box) (hlds__goal_form__STATE_VARIABLE_ModuleInfo_0_9));
#line 403 "goal_form.m"
    }
#line 403 "goal_form.m"
    {
#line 403 "goal_form.m"
      hlds__goal_form__V_14_14 = hlds__goal_form__goal_can_loop_func_2_f_0(hlds__goal_form__V_15_15, hlds__goal_form__Goal_5);
    }
#line 403 "goal_form.m"
    hlds__goal_form__succeeded = (hlds__goal_form__V_14_14 == (MR_Integer) 0);
#line 396 "goal_form.m"
    if (hlds__goal_form__succeeded)
#line 388 "goal_form.m"
      {
#line 388 "goal_form.m"
        MR_Word hlds__goal_form__ThrowResult_8;

#line 388 "goal_form.m"
        {
#line 388 "goal_form.m"
          hlds__goal_form__goal_can_throw_4_p_0(hlds__goal_form__Goal_5, &hlds__goal_form__ThrowResult_8, hlds__goal_form__STATE_VARIABLE_ModuleInfo_0_9, hlds__goal_form__STATE_VARIABLE_ModuleInfo_10);
        }
#line 392 "goal_form.m"
#line 392 "goal_form.m"
        switch (hlds__goal_form__ThrowResult_8) {
#line 392 "goal_form.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 392 "goal_form.m"
          case (MR_Integer) 0:
#line 391 "goal_form.m"
            *hlds__goal_form__Result_6 = (MR_Integer) 0;
#line 392 "goal_form.m"
            break;
#line 392 "goal_form.m"
          case (MR_Integer) 1:
#line 394 "goal_form.m"
            *hlds__goal_form__Result_6 = (MR_Integer) 1;
#line 392 "goal_form.m"
            break;
#line 392 "goal_form.m"
        }
#line 388 "goal_form.m"
      }
#line 396 "goal_form.m"
    else
#line 397 "goal_form.m"
      {
#line 397 "goal_form.m"
        *hlds__goal_form__Result_6 = (MR_Integer) 0;
#line 397 "goal_form.m"
        *hlds__goal_form__STATE_VARIABLE_ModuleInfo_10 = hlds__goal_form__STATE_VARIABLE_ModuleInfo_0_9;
#line 397 "goal_form.m"
      }
#line 396 "goal_form.m"
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
#line 250 "goal_form.m"
  {
#line 250 "goal_form.m"
    MR_bool hlds__goal_form__succeeded;
#line 250 "goal_form.m"
    MR_Word hlds__goal_form__GoalExpr_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__HeadVar__1_1, (MR_Integer) 0)));
#line 250 "goal_form.m"
    MR_Word hlds__goal_form__GoalInfo_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__HeadVar__1_1, (MR_Integer) 1)));
#line 250 "goal_form.m"
    MR_Word hlds__goal_form__Determinism_9;

#line 251 "goal_form.m"
    {
#line 251 "goal_form.m"
      hlds__goal_form__Determinism_9 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(hlds__goal_form__GoalInfo_6);
    }
#line 252 "goal_form.m"
    hlds__goal_form__succeeded = (hlds__goal_form__Determinism_9 == (MR_Integer) 6);
#line 252 "goal_form.m"
    hlds__goal_form__succeeded = !(hlds__goal_form__succeeded);
#line 254 "goal_form.m"
    if (hlds__goal_form__succeeded)
#line 253 "goal_form.m"
      {
#line 253 "goal_form.m"
        hlds__goal_form__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_99_97_110_95_116_104_114_111_119_95_50_95_95_91_50_93_95_48_5_p_0(hlds__goal_form__GoalExpr_5, hlds__goal_form__Result_7, hlds__goal_form__STATE_VARIABLE_ModuleInfo_0_10, hlds__goal_form__STATE_VARIABLE_ModuleInfo_11);
#line 253 "goal_form.m"
        return;
      }
#line 254 "goal_form.m"
    else
#line 255 "goal_form.m"
      {
#line 255 "goal_form.m"
        *hlds__goal_form__Result_7 = (MR_Integer) 0;
#line 255 "goal_form.m"
        *hlds__goal_form__STATE_VARIABLE_ModuleInfo_11 = hlds__goal_form__STATE_VARIABLE_ModuleInfo_0_10;
#line 255 "goal_form.m"
      }
#line 250 "goal_form.m"
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
#line 220 "goal_form.m"
  while (MR_TRUE)
#line 220 "goal_form.m"
    {
#line 220 "goal_form.m"
      /* tailcall optimized into a loop */
#line 220 "goal_form.m"
      {
#line 220 "goal_form.m"
        MR_bool hlds__goal_form__succeeded;

#line 220 "goal_form.m"
        if ((hlds__goal_form__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 220 "goal_form.m"
          hlds__goal_form__succeeded = MR_TRUE;
#line 220 "goal_form.m"
        else
#line 221 "goal_form.m"
          {
#line 221 "goal_form.m"
            MR_Word hlds__goal_form__TypeCtorInfo_10_14;
#line 221 "goal_form.m"
            MR_Word hlds__goal_form__Disjunct_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__HeadVar__2_2, (MR_Integer) 0)));
#line 221 "goal_form.m"
            MR_Word hlds__goal_form__Disjuncts_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__HeadVar__2_2, (MR_Integer) 1)));
#line 221 "goal_form.m"
            MR_Word hlds__goal_form__GoalInfo_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Disjunct_5, (MR_Integer) 1)));
#line 221 "goal_form.m"
            MR_Word hlds__goal_form__CodeModel_11;
#line 221 "goal_form.m"
            MR_Word hlds__goal_form__Conj_12;
#line 221 "goal_form.m"
            MR_Word hlds__goal_form__ToAssignVars_13;
#line 213 "goal_form.m"
            MR_Word hlds__goal_form___GoalExpr_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Disjunct_5, (MR_Integer) 0)));

#line 214 "goal_form.m"
            {
#line 214 "goal_form.m"
              hlds__goal_form__CodeModel_11 = hlds__code_model__goal_info_get_code_model_1_f_0(hlds__goal_form__GoalInfo_10);
            }
#line 215 "goal_form.m"
            hlds__goal_form__succeeded = (hlds__goal_form__CodeModel_11 == (MR_Integer) 0);
#line 221 "goal_form.m"
            if (hlds__goal_form__succeeded)
#line 221 "goal_form.m"
              {
#line 216 "goal_form.m"
                {
#line 216 "goal_form.m"
                  hlds__hlds_goal__goal_to_conj_list_2_p_0(hlds__goal_form__Disjunct_5, &hlds__goal_form__Conj_12);
                }
#line 217 "goal_form.m"
                {
#line 217 "goal_form.m"
                  hlds__goal_form__succeeded = hlds__goal_form__only_constant_goals_3_p_0(hlds__goal_form__Conj_12, hlds__goal_form__HeadVar__1_1, &hlds__goal_form__ToAssignVars_13);
                }
#line 221 "goal_form.m"
                if (hlds__goal_form__succeeded)
#line 221 "goal_form.m"
                  {
#line 7801 "hlds.goal_form.c"
                    hlds__goal_form__TypeCtorInfo_10_14 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 218 "goal_form.m"
                    {
#line 218 "goal_form.m"
                      hlds__goal_form__succeeded = parse_tree__set_of_var__is_empty_1_p_0(hlds__goal_form__TypeCtorInfo_10_14, hlds__goal_form__ToAssignVars_13);
                    }
#line 221 "goal_form.m"
                    if (hlds__goal_form__succeeded)
#line 223 "goal_form.m"
                      {
#line 223 "goal_form.m"
                        /* direct tailcall eliminated */
#line 223 "goal_form.m"
                        {
#line 223 "goal_form.m"
                          MR_Word hlds__goal_form__HeadVar__2__tmp_copy_2 = hlds__goal_form__Disjuncts_6;

#line 223 "goal_form.m"
                          hlds__goal_form__HeadVar__2_2 = hlds__goal_form__HeadVar__2__tmp_copy_2;
#line 223 "goal_form.m"
                        }
#line 223 "goal_form.m"
                        continue;
#line 223 "goal_form.m"
                      }
#line 221 "goal_form.m"
                  }
#line 221 "goal_form.m"
              }
#line 221 "goal_form.m"
          }
#line 220 "goal_form.m"
        return hlds__goal_form__succeeded;
#line 220 "goal_form.m"
      }
#line 220 "goal_form.m"
      break;
#line 220 "goal_form.m"
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
#line 212 "goal_form.m"
  {
#line 212 "goal_form.m"
    MR_bool hlds__goal_form__succeeded;
#line 212 "goal_form.m"
    MR_Word hlds__goal_form__TypeCtorInfo_10_10;
#line 212 "goal_form.m"
    MR_Word hlds__goal_form__GoalInfo_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Goal_4, (MR_Integer) 1)));
#line 212 "goal_form.m"
    MR_Word hlds__goal_form__CodeModel_7;
#line 212 "goal_form.m"
    MR_Word hlds__goal_form__Conj_8;
#line 212 "goal_form.m"
    MR_Word hlds__goal_form__ToAssignVars_9;
#line 213 "goal_form.m"
    MR_Word hlds__goal_form___GoalExpr_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Goal_4, (MR_Integer) 0)));

#line 214 "goal_form.m"
    {
#line 214 "goal_form.m"
      hlds__goal_form__CodeModel_7 = hlds__code_model__goal_info_get_code_model_1_f_0(hlds__goal_form__GoalInfo_6);
    }
#line 215 "goal_form.m"
    hlds__goal_form__succeeded = (hlds__goal_form__CodeModel_7 == (MR_Integer) 0);
#line 212 "goal_form.m"
    if (hlds__goal_form__succeeded)
#line 212 "goal_form.m"
      {
#line 216 "goal_form.m"
        {
#line 216 "goal_form.m"
          hlds__hlds_goal__goal_to_conj_list_2_p_0(hlds__goal_form__Goal_4, &hlds__goal_form__Conj_8);
        }
#line 217 "goal_form.m"
        {
#line 217 "goal_form.m"
          hlds__goal_form__succeeded = hlds__goal_form__only_constant_goals_3_p_0(hlds__goal_form__Conj_8, hlds__goal_form__ToAssignVars0_3, &hlds__goal_form__ToAssignVars_9);
        }
#line 212 "goal_form.m"
        if (hlds__goal_form__succeeded)
#line 212 "goal_form.m"
          {
#line 7895 "hlds.goal_form.c"
            hlds__goal_form__TypeCtorInfo_10_10 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 218 "goal_form.m"
            {
#line 218 "goal_form.m"
              return hlds__goal_form__succeeded = parse_tree__set_of_var__is_empty_1_p_0(hlds__goal_form__TypeCtorInfo_10_10, hlds__goal_form__ToAssignVars_9);
            }
#line 212 "goal_form.m"
          }
#line 212 "goal_form.m"
      }
#line 212 "goal_form.m"
    return hlds__goal_form__succeeded;
#line 212 "goal_form.m"
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
