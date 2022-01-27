/*
** Automatically generated from `goal_form.m'
** by the Mercury compiler,
** version rotd-2014-12-12
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
#include "deconstruct.mih"
#include "digraph.mih"
#include "enum.mih"
#include "getopt_io.mih"
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
#include "transform_hlds.mih"
#include "tree234.mih"
#include "tree_bitset.mih"
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




#line 135 "hlds.goal_form.c"
static const MR_EnumFunctorDesc hlds__goal_form__hlds__goal_form__enum_functor_desc_goal_loop_or_throw_status_0_0;

#line 138 "hlds.goal_form.c"
static const MR_EnumFunctorDesc hlds__goal_form__hlds__goal_form__enum_functor_desc_goal_loop_or_throw_status_0_1;

#line 141 "hlds.goal_form.c"
static const MR_EnumFunctorDescPtr hlds__goal_form__hlds__goal_form__enum_value_ordered_goal_loop_or_throw_status_0[2];

#line 144 "hlds.goal_form.c"
static const MR_EnumFunctorDescPtr hlds__goal_form__hlds__goal_form__enum_name_ordered_goal_loop_or_throw_status_0[2];

#line 147 "hlds.goal_form.c"
static const MR_Integer hlds__goal_form__hlds__goal_form__functor_number_map_goal_loop_or_throw_status_0[2];

#line 150 "hlds.goal_form.c"
static const MR_EnumFunctorDesc hlds__goal_form__hlds__goal_form__enum_functor_desc_goal_loop_status_0_0;

#line 153 "hlds.goal_form.c"
static const MR_EnumFunctorDesc hlds__goal_form__hlds__goal_form__enum_functor_desc_goal_loop_status_0_1;

#line 156 "hlds.goal_form.c"
static const MR_EnumFunctorDescPtr hlds__goal_form__hlds__goal_form__enum_value_ordered_goal_loop_status_0[2];

#line 159 "hlds.goal_form.c"
static const MR_EnumFunctorDescPtr hlds__goal_form__hlds__goal_form__enum_name_ordered_goal_loop_status_0[2];

#line 162 "hlds.goal_form.c"
static const MR_Integer hlds__goal_form__hlds__goal_form__functor_number_map_goal_loop_status_0[2];

#line 165 "hlds.goal_form.c"
static const MR_EnumFunctorDesc hlds__goal_form__hlds__goal_form__enum_functor_desc_goal_throw_status_0_0;

#line 168 "hlds.goal_form.c"
static const MR_EnumFunctorDesc hlds__goal_form__hlds__goal_form__enum_functor_desc_goal_throw_status_0_1;

#line 171 "hlds.goal_form.c"
static const MR_EnumFunctorDescPtr hlds__goal_form__hlds__goal_form__enum_value_ordered_goal_throw_status_0[2];

#line 174 "hlds.goal_form.c"
static const MR_EnumFunctorDescPtr hlds__goal_form__hlds__goal_form__enum_name_ordered_goal_throw_status_0[2];

#line 177 "hlds.goal_form.c"
static const MR_Integer hlds__goal_form__hlds__goal_form__functor_number_map_goal_throw_status_0[2];

#line 180 "hlds.goal_form.c"
static const MR_EnumFunctorDesc hlds__goal_form__hlds__goal_form__enum_functor_desc_has_subgoals_0_0;

#line 183 "hlds.goal_form.c"
static const MR_EnumFunctorDesc hlds__goal_form__hlds__goal_form__enum_functor_desc_has_subgoals_0_1;

#line 186 "hlds.goal_form.c"
static const MR_EnumFunctorDescPtr hlds__goal_form__hlds__goal_form__enum_value_ordered_has_subgoals_0[2];

#line 189 "hlds.goal_form.c"
static const MR_EnumFunctorDescPtr hlds__goal_form__hlds__goal_form__enum_name_ordered_has_subgoals_0[2];

#line 192 "hlds.goal_form.c"
static const MR_Integer hlds__goal_form__hlds__goal_form__functor_number_map_has_subgoals_0[2];

#line 195 "hlds.goal_form.c"
static MR_bool MR_CALL 
hlds__goal_form____Unify____goal_loop_or_throw_status_0_0_10001(
#line 198 "hlds.goal_form.c"
  MR_Box hlds__goal_form__wrapper_arg_1,
#line 200 "hlds.goal_form.c"
  MR_Box hlds__goal_form__wrapper_arg_2);

#line 203 "hlds.goal_form.c"
static void MR_CALL 
hlds__goal_form____Compare____goal_loop_or_throw_status_0_0_10001(
#line 206 "hlds.goal_form.c"
  MR_Box * hlds__goal_form__wrapper_arg_1,
#line 208 "hlds.goal_form.c"
  MR_Box hlds__goal_form__wrapper_arg_2,
#line 210 "hlds.goal_form.c"
  MR_Box hlds__goal_form__wrapper_arg_3);

#line 213 "hlds.goal_form.c"
static MR_bool MR_CALL 
hlds__goal_form____Unify____goal_loop_status_0_0_10001(
#line 216 "hlds.goal_form.c"
  MR_Box hlds__goal_form__wrapper_arg_1,
#line 218 "hlds.goal_form.c"
  MR_Box hlds__goal_form__wrapper_arg_2);

#line 221 "hlds.goal_form.c"
static void MR_CALL 
hlds__goal_form____Compare____goal_loop_status_0_0_10001(
#line 224 "hlds.goal_form.c"
  MR_Box * hlds__goal_form__wrapper_arg_1,
#line 226 "hlds.goal_form.c"
  MR_Box hlds__goal_form__wrapper_arg_2,
#line 228 "hlds.goal_form.c"
  MR_Box hlds__goal_form__wrapper_arg_3);

#line 231 "hlds.goal_form.c"
static MR_bool MR_CALL 
hlds__goal_form____Unify____goal_throw_status_0_0_10001(
#line 234 "hlds.goal_form.c"
  MR_Box hlds__goal_form__wrapper_arg_1,
#line 236 "hlds.goal_form.c"
  MR_Box hlds__goal_form__wrapper_arg_2);

#line 239 "hlds.goal_form.c"
static void MR_CALL 
hlds__goal_form____Compare____goal_throw_status_0_0_10001(
#line 242 "hlds.goal_form.c"
  MR_Box * hlds__goal_form__wrapper_arg_1,
#line 244 "hlds.goal_form.c"
  MR_Box hlds__goal_form__wrapper_arg_2,
#line 246 "hlds.goal_form.c"
  MR_Box hlds__goal_form__wrapper_arg_3);

#line 249 "hlds.goal_form.c"
static MR_bool MR_CALL 
hlds__goal_form____Unify____has_subgoals_0_0_10001(
#line 252 "hlds.goal_form.c"
  MR_Box hlds__goal_form__wrapper_arg_1,
#line 254 "hlds.goal_form.c"
  MR_Box hlds__goal_form__wrapper_arg_2);

#line 257 "hlds.goal_form.c"
static void MR_CALL 
hlds__goal_form____Compare____has_subgoals_0_0_10001(
#line 260 "hlds.goal_form.c"
  MR_Box * hlds__goal_form__wrapper_arg_1,
#line 262 "hlds.goal_form.c"
  MR_Box hlds__goal_form__wrapper_arg_2,
#line 264 "hlds.goal_form.c"
  MR_Box hlds__goal_form__wrapper_arg_3);

#line 264 "goal_form.m"
static void MR_CALL 
hlds__goal_form__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_99_97_110_95_116_104_114_111_119_95_50_95_95_91_50_93_95_48_5_p_0(
#line 264 "goal_form.m"
  MR_Word hlds__goal_form__GoalExpr_6,
#line 264 "goal_form.m"
  MR_Word * hlds__goal_form__Result_8,
#line 264 "goal_form.m"
  MR_Word hlds__goal_form__STATE_VARIABLE_ModuleInfo_0_82,
#line 264 "goal_form.m"
  MR_Word * hlds__goal_form__STATE_VARIABLE_ModuleInfo_83);

#line 1168 "goal_form.m"
static MR_Word MR_CALL 
hlds__goal_form__case_list_has_foreign_1_f_0(
#line 1168 "goal_form.m"
  MR_Word hlds__goal_form__HeadVar__1_1);

#line 1158 "goal_form.m"
static MR_Word MR_CALL 
hlds__goal_form__goal_list_has_foreign_1_f_0(
#line 1158 "goal_form.m"
  MR_Word hlds__goal_form__HeadVar__1_1);

#line 1062 "goal_form.m"
static void MR_CALL 
hlds__goal_form__count_recursive_calls_cases_5_p_0(
#line 1062 "goal_form.m"
  MR_Word hlds__goal_form__HeadVar__1_1,
#line 1062 "goal_form.m"
  MR_Word hlds__goal_form__PredId_2,
#line 1062 "goal_form.m"
  MR_Integer hlds__goal_form__ProcId_3,
#line 1062 "goal_form.m"
  MR_Integer * hlds__goal_form__Min_4,
#line 1062 "goal_form.m"
  MR_Integer * hlds__goal_form__Max_5);

#line 1046 "goal_form.m"
static void MR_CALL 
hlds__goal_form__count_recursive_calls_disj_5_p_0(
#line 1046 "goal_form.m"
  MR_Word hlds__goal_form__HeadVar__1_1,
#line 1046 "goal_form.m"
  MR_Word hlds__goal_form__PredId_2,
#line 1046 "goal_form.m"
  MR_Integer hlds__goal_form__ProcId_3,
#line 1046 "goal_form.m"
  MR_Integer * hlds__goal_form__HeadVar__4_4,
#line 1046 "goal_form.m"
  MR_Integer * hlds__goal_form__HeadVar__5_5);

#line 1034 "goal_form.m"
static void MR_CALL 
hlds__goal_form__count_recursive_calls_conj_7_p_0(
#line 1034 "goal_form.m"
  MR_Word hlds__goal_form__HeadVar__1_1,
#line 1034 "goal_form.m"
  MR_Word hlds__goal_form__PredId_2,
#line 1034 "goal_form.m"
  MR_Integer hlds__goal_form__ProcId_3,
#line 1034 "goal_form.m"
  MR_Integer hlds__goal_form__HeadVar__4_4,
#line 1034 "goal_form.m"
  MR_Integer hlds__goal_form__HeadVar__5_5,
#line 1034 "goal_form.m"
  MR_Integer * hlds__goal_form__Min_6,
#line 1034 "goal_form.m"
  MR_Integer * hlds__goal_form__Max_7);

#line 936 "goal_form.m"
static MR_bool MR_CALL 
hlds__goal_form__cannot_fail_before_stack_flush_conj_1_p_0(
#line 936 "goal_form.m"
  MR_Word hlds__goal_form__HeadVar__1_1);

#line 911 "goal_form.m"
static MR_bool MR_CALL 
hlds__goal_form__cannot_stack_flush_cases_1_p_0(
#line 911 "goal_form.m"
  MR_Word hlds__goal_form__HeadVar__1_1);

#line 904 "goal_form.m"
static MR_bool MR_CALL 
hlds__goal_form__cannot_stack_flush_goals_1_p_0(
#line 904 "goal_form.m"
  MR_Word hlds__goal_form__HeadVar__1_1);

#line 890 "goal_form.m"
static MR_bool MR_CALL 
hlds__goal_form__cannot_stack_flush_2_1_p_0(
#line 890 "goal_form.m"
  MR_Word hlds__goal_form__HeadVar__1_1);

#line 875 "goal_form.m"
static void MR_CALL 
hlds__goal_form__cases_may_allocate_heap_2_p_0(
#line 875 "goal_form.m"
  MR_Word hlds__goal_form__HeadVar__1_1,
#line 875 "goal_form.m"
  MR_Word * hlds__goal_form__HeadVar__2_2);

#line 865 "goal_form.m"
static void MR_CALL 
hlds__goal_form__goal_list_may_allocate_heap_2_p_0(
#line 865 "goal_form.m"
  MR_Word hlds__goal_form__HeadVar__1_1,
#line 865 "goal_form.m"
  MR_Word * hlds__goal_form__HeadVar__2_2);

#line 769 "goal_form.m"
static void MR_CALL 
hlds__goal_form__goal_may_allocate_heap_2_2_p_0(
#line 769 "goal_form.m"
  MR_Word hlds__goal_form__GoalExpr_3,
#line 769 "goal_form.m"
  MR_Word * hlds__goal_form__May_4);

#line 746 "goal_form.m"
static MR_Word MR_CALL 
hlds__goal_form__goal_is_flat_list_1_f_0(
#line 746 "goal_form.m"
  MR_Word hlds__goal_form__HeadVar__1_1);

#line 703 "goal_form.m"
static MR_Word MR_CALL 
hlds__goal_form__goal_is_flat_expr_1_f_0(
#line 703 "goal_form.m"
  MR_Word hlds__goal_form__GoalExpr_3);

#line 689 "goal_form.m"
static MR_Word MR_CALL 
hlds__goal_form__case_list_can_throw_2_f_0(
#line 689 "goal_form.m"
  MR_Word hlds__goal_form__MaybeModuleInfo_1,
#line 689 "goal_form.m"
  MR_Word hlds__goal_form__HeadVar__2_2);

#line 679 "goal_form.m"
static MR_Word MR_CALL 
hlds__goal_form__goal_list_can_throw_2_f_0(
#line 679 "goal_form.m"
  MR_Word hlds__goal_form__MaybeModuleInfo_1,
#line 679 "goal_form.m"
  MR_Word hlds__goal_form__HeadVar__2_2);

#line 581 "goal_form.m"
static MR_Word MR_CALL 
hlds__goal_form__goal_expr_can_throw_2_f_0(
#line 581 "goal_form.m"
  MR_Word hlds__goal_form__MaybeModuleInfo_4,
#line 581 "goal_form.m"
  MR_Word hlds__goal_form__GoalExpr_5);

#line 570 "goal_form.m"
static MR_Word MR_CALL 
hlds__goal_form__goal_can_throw_func_2_f_0(
#line 570 "goal_form.m"
  MR_Word hlds__goal_form__MaybeModuleInfo_4,
#line 570 "goal_form.m"
  MR_Word hlds__goal_form__HeadVar__2_2);

#line 558 "goal_form.m"
static MR_Word MR_CALL 
hlds__goal_form__case_list_can_loop_2_f_0(
#line 558 "goal_form.m"
  MR_Word hlds__goal_form__MaybeModuleInfo_1,
#line 558 "goal_form.m"
  MR_Word hlds__goal_form__HeadVar__2_2);

#line 548 "goal_form.m"
static MR_Word MR_CALL 
hlds__goal_form__goal_list_can_loop_2_f_0(
#line 548 "goal_form.m"
  MR_Word hlds__goal_form__MaybeModuleInfo_1,
#line 548 "goal_form.m"
  MR_Word hlds__goal_form__HeadVar__2_2);

#line 434 "goal_form.m"
static MR_Word MR_CALL 
hlds__goal_form__goal_can_loop_func_2_f_0(
#line 434 "goal_form.m"
  MR_Word hlds__goal_form__MaybeModuleInfo_4,
#line 434 "goal_form.m"
  MR_Word hlds__goal_form__Goal_5);

#line 375 "goal_form.m"
static void MR_CALL 
hlds__goal_form__cases_can_throw_4_p_0(
#line 375 "goal_form.m"
  MR_Word hlds__goal_form__HeadVar__1_1,
#line 375 "goal_form.m"
  MR_Word * hlds__goal_form__HeadVar__2_2,
#line 375 "goal_form.m"
  MR_Word hlds__goal_form__STATE_VARIABLE_ModuleInfo_0_3,
#line 375 "goal_form.m"
  MR_Word * hlds__goal_form__STATE_VARIABLE_ModuleInfo_4);

#line 361 "goal_form.m"
static void MR_CALL 
hlds__goal_form__goals_can_throw_4_p_0(
#line 361 "goal_form.m"
  MR_Word hlds__goal_form__HeadVar__1_1,
#line 361 "goal_form.m"
  MR_Word * hlds__goal_form__HeadVar__2_2,
#line 361 "goal_form.m"
  MR_Word hlds__goal_form__STATE_VARIABLE_ModuleInfo_0_3,
#line 361 "goal_form.m"
  MR_Word * hlds__goal_form__STATE_VARIABLE_ModuleInfo_4);

#line 231 "goal_form.m"
static MR_bool MR_CALL 
hlds__goal_form__only_constant_goals_3_p_0(
#line 231 "goal_form.m"
  MR_Word hlds__goal_form__HeadVar__1_1,
#line 231 "goal_form.m"
  MR_Word hlds__goal_form__STATE_VARIABLE_ToAssignVars_0_2,
#line 231 "goal_form.m"
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



#line 508 "hlds.goal_form.c"
static const MR_EnumFunctorDesc hlds__goal_form__hlds__goal_form__enum_functor_desc_goal_loop_or_throw_status_0_0 = {
  (MR_String) "can_loop_or_throw",
  (MR_Integer) 0
};

#line 514 "hlds.goal_form.c"
static const MR_EnumFunctorDesc hlds__goal_form__hlds__goal_form__enum_functor_desc_goal_loop_or_throw_status_0_1 = {
  (MR_String) "cannot_loop_or_throw",
  (MR_Integer) 1
};

#line 520 "hlds.goal_form.c"
static const MR_EnumFunctorDescPtr hlds__goal_form__hlds__goal_form__enum_value_ordered_goal_loop_or_throw_status_0[2] = {
  &hlds__goal_form__hlds__goal_form__enum_functor_desc_goal_loop_or_throw_status_0_0,
  &hlds__goal_form__hlds__goal_form__enum_functor_desc_goal_loop_or_throw_status_0_1
};

#line 526 "hlds.goal_form.c"
static const MR_EnumFunctorDescPtr hlds__goal_form__hlds__goal_form__enum_name_ordered_goal_loop_or_throw_status_0[2] = {
  &hlds__goal_form__hlds__goal_form__enum_functor_desc_goal_loop_or_throw_status_0_0,
  &hlds__goal_form__hlds__goal_form__enum_functor_desc_goal_loop_or_throw_status_0_1
};

#line 532 "hlds.goal_form.c"
static const MR_Integer hlds__goal_form__hlds__goal_form__functor_number_map_goal_loop_or_throw_status_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 538 "hlds.goal_form.c"
const MR_TypeCtorInfo_Struct hlds__goal_form__hlds__goal_form__type_ctor_info_goal_loop_or_throw_status_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (hlds__goal_form____Unify____goal_loop_or_throw_status_0_0_10001)),
  ((MR_Box) (hlds__goal_form____Compare____goal_loop_or_throw_status_0_0_10001)),
  (MR_String) "hlds.goal_form",
  (MR_String) "goal_loop_or_throw_status",
  {
    hlds__goal_form__hlds__goal_form__enum_name_ordered_goal_loop_or_throw_status_0
  },
  {
    hlds__goal_form__hlds__goal_form__enum_value_ordered_goal_loop_or_throw_status_0
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  hlds__goal_form__hlds__goal_form__functor_number_map_goal_loop_or_throw_status_0
};

#line 559 "hlds.goal_form.c"
static const MR_EnumFunctorDesc hlds__goal_form__hlds__goal_form__enum_functor_desc_goal_loop_status_0_0 = {
  (MR_String) "can_loop",
  (MR_Integer) 0
};

#line 565 "hlds.goal_form.c"
static const MR_EnumFunctorDesc hlds__goal_form__hlds__goal_form__enum_functor_desc_goal_loop_status_0_1 = {
  (MR_String) "cannot_loop",
  (MR_Integer) 1
};

#line 571 "hlds.goal_form.c"
static const MR_EnumFunctorDescPtr hlds__goal_form__hlds__goal_form__enum_value_ordered_goal_loop_status_0[2] = {
  &hlds__goal_form__hlds__goal_form__enum_functor_desc_goal_loop_status_0_0,
  &hlds__goal_form__hlds__goal_form__enum_functor_desc_goal_loop_status_0_1
};

#line 577 "hlds.goal_form.c"
static const MR_EnumFunctorDescPtr hlds__goal_form__hlds__goal_form__enum_name_ordered_goal_loop_status_0[2] = {
  &hlds__goal_form__hlds__goal_form__enum_functor_desc_goal_loop_status_0_0,
  &hlds__goal_form__hlds__goal_form__enum_functor_desc_goal_loop_status_0_1
};

#line 583 "hlds.goal_form.c"
static const MR_Integer hlds__goal_form__hlds__goal_form__functor_number_map_goal_loop_status_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 589 "hlds.goal_form.c"
const MR_TypeCtorInfo_Struct hlds__goal_form__hlds__goal_form__type_ctor_info_goal_loop_status_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (hlds__goal_form____Unify____goal_loop_status_0_0_10001)),
  ((MR_Box) (hlds__goal_form____Compare____goal_loop_status_0_0_10001)),
  (MR_String) "hlds.goal_form",
  (MR_String) "goal_loop_status",
  {
    hlds__goal_form__hlds__goal_form__enum_name_ordered_goal_loop_status_0
  },
  {
    hlds__goal_form__hlds__goal_form__enum_value_ordered_goal_loop_status_0
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  hlds__goal_form__hlds__goal_form__functor_number_map_goal_loop_status_0
};

#line 610 "hlds.goal_form.c"
static const MR_EnumFunctorDesc hlds__goal_form__hlds__goal_form__enum_functor_desc_goal_throw_status_0_0 = {
  (MR_String) "can_throw",
  (MR_Integer) 0
};

#line 616 "hlds.goal_form.c"
static const MR_EnumFunctorDesc hlds__goal_form__hlds__goal_form__enum_functor_desc_goal_throw_status_0_1 = {
  (MR_String) "cannot_throw",
  (MR_Integer) 1
};

#line 622 "hlds.goal_form.c"
static const MR_EnumFunctorDescPtr hlds__goal_form__hlds__goal_form__enum_value_ordered_goal_throw_status_0[2] = {
  &hlds__goal_form__hlds__goal_form__enum_functor_desc_goal_throw_status_0_0,
  &hlds__goal_form__hlds__goal_form__enum_functor_desc_goal_throw_status_0_1
};

#line 628 "hlds.goal_form.c"
static const MR_EnumFunctorDescPtr hlds__goal_form__hlds__goal_form__enum_name_ordered_goal_throw_status_0[2] = {
  &hlds__goal_form__hlds__goal_form__enum_functor_desc_goal_throw_status_0_0,
  &hlds__goal_form__hlds__goal_form__enum_functor_desc_goal_throw_status_0_1
};

#line 634 "hlds.goal_form.c"
static const MR_Integer hlds__goal_form__hlds__goal_form__functor_number_map_goal_throw_status_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 640 "hlds.goal_form.c"
const MR_TypeCtorInfo_Struct hlds__goal_form__hlds__goal_form__type_ctor_info_goal_throw_status_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (hlds__goal_form____Unify____goal_throw_status_0_0_10001)),
  ((MR_Box) (hlds__goal_form____Compare____goal_throw_status_0_0_10001)),
  (MR_String) "hlds.goal_form",
  (MR_String) "goal_throw_status",
  {
    hlds__goal_form__hlds__goal_form__enum_name_ordered_goal_throw_status_0
  },
  {
    hlds__goal_form__hlds__goal_form__enum_value_ordered_goal_throw_status_0
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  hlds__goal_form__hlds__goal_form__functor_number_map_goal_throw_status_0
};

#line 661 "hlds.goal_form.c"
static const MR_EnumFunctorDesc hlds__goal_form__hlds__goal_form__enum_functor_desc_has_subgoals_0_0 = {
  (MR_String) "has_subgoals",
  (MR_Integer) 0
};

#line 667 "hlds.goal_form.c"
static const MR_EnumFunctorDesc hlds__goal_form__hlds__goal_form__enum_functor_desc_has_subgoals_0_1 = {
  (MR_String) "does_not_have_subgoals",
  (MR_Integer) 1
};

#line 673 "hlds.goal_form.c"
static const MR_EnumFunctorDescPtr hlds__goal_form__hlds__goal_form__enum_value_ordered_has_subgoals_0[2] = {
  &hlds__goal_form__hlds__goal_form__enum_functor_desc_has_subgoals_0_0,
  &hlds__goal_form__hlds__goal_form__enum_functor_desc_has_subgoals_0_1
};

#line 679 "hlds.goal_form.c"
static const MR_EnumFunctorDescPtr hlds__goal_form__hlds__goal_form__enum_name_ordered_has_subgoals_0[2] = {
  &hlds__goal_form__hlds__goal_form__enum_functor_desc_has_subgoals_0_1,
  &hlds__goal_form__hlds__goal_form__enum_functor_desc_has_subgoals_0_0
};

#line 685 "hlds.goal_form.c"
static const MR_Integer hlds__goal_form__hlds__goal_form__functor_number_map_has_subgoals_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 691 "hlds.goal_form.c"
const MR_TypeCtorInfo_Struct hlds__goal_form__hlds__goal_form__type_ctor_info_has_subgoals_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (hlds__goal_form____Unify____has_subgoals_0_0_10001)),
  ((MR_Box) (hlds__goal_form____Compare____has_subgoals_0_0_10001)),
  (MR_String) "hlds.goal_form",
  (MR_String) "has_subgoals",
  {
    hlds__goal_form__hlds__goal_form__enum_name_ordered_has_subgoals_0
  },
  {
    hlds__goal_form__hlds__goal_form__enum_value_ordered_has_subgoals_0
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  hlds__goal_form__hlds__goal_form__functor_number_map_has_subgoals_0
};

#line 712 "hlds.goal_form.c"
static MR_bool MR_CALL 
hlds__goal_form____Unify____goal_loop_or_throw_status_0_0_10001(
#line 715 "hlds.goal_form.c"
  MR_Box hlds__goal_form__wrapper_arg_1,
#line 717 "hlds.goal_form.c"
  MR_Box hlds__goal_form__wrapper_arg_2)
#line 719 "hlds.goal_form.c"
{
#line 721 "hlds.goal_form.c"
  {
#line 723 "hlds.goal_form.c"
    MR_bool hlds__goal_form__succeeded;

#line 726 "hlds.goal_form.c"
    {
#line 728 "hlds.goal_form.c"
      hlds__goal_form__succeeded = hlds__goal_form____Unify____goal_loop_or_throw_status_0_0(((MR_Word) hlds__goal_form__wrapper_arg_1), ((MR_Word) hlds__goal_form__wrapper_arg_2));
    }
#line 731 "hlds.goal_form.c"
    return hlds__goal_form__succeeded;
#line 733 "hlds.goal_form.c"
  }
#line 735 "hlds.goal_form.c"
}

#line 738 "hlds.goal_form.c"
static void MR_CALL 
hlds__goal_form____Compare____goal_loop_or_throw_status_0_0_10001(
#line 741 "hlds.goal_form.c"
  MR_Box * hlds__goal_form__wrapper_arg_1,
#line 743 "hlds.goal_form.c"
  MR_Box hlds__goal_form__wrapper_arg_2,
#line 745 "hlds.goal_form.c"
  MR_Box hlds__goal_form__wrapper_arg_3)
#line 747 "hlds.goal_form.c"
{
#line 749 "hlds.goal_form.c"
  {
#line 751 "hlds.goal_form.c"
    MR_Word hlds__goal_form__conv0_HeadVar__1_1;

#line 754 "hlds.goal_form.c"
    {
#line 756 "hlds.goal_form.c"
      hlds__goal_form____Compare____goal_loop_or_throw_status_0_0(&hlds__goal_form__conv0_HeadVar__1_1, ((MR_Word) hlds__goal_form__wrapper_arg_2), ((MR_Word) hlds__goal_form__wrapper_arg_3));
    }
#line 759 "hlds.goal_form.c"
    *hlds__goal_form__wrapper_arg_1 = ((MR_Box) (hlds__goal_form__conv0_HeadVar__1_1));
#line 761 "hlds.goal_form.c"
  }
#line 763 "hlds.goal_form.c"
}

#line 766 "hlds.goal_form.c"
static MR_bool MR_CALL 
hlds__goal_form____Unify____goal_loop_status_0_0_10001(
#line 769 "hlds.goal_form.c"
  MR_Box hlds__goal_form__wrapper_arg_1,
#line 771 "hlds.goal_form.c"
  MR_Box hlds__goal_form__wrapper_arg_2)
#line 773 "hlds.goal_form.c"
{
#line 775 "hlds.goal_form.c"
  {
#line 777 "hlds.goal_form.c"
    MR_bool hlds__goal_form__succeeded;

#line 780 "hlds.goal_form.c"
    {
#line 782 "hlds.goal_form.c"
      hlds__goal_form__succeeded = hlds__goal_form____Unify____goal_loop_status_0_0(((MR_Word) hlds__goal_form__wrapper_arg_1), ((MR_Word) hlds__goal_form__wrapper_arg_2));
    }
#line 785 "hlds.goal_form.c"
    return hlds__goal_form__succeeded;
#line 787 "hlds.goal_form.c"
  }
#line 789 "hlds.goal_form.c"
}

#line 792 "hlds.goal_form.c"
static void MR_CALL 
hlds__goal_form____Compare____goal_loop_status_0_0_10001(
#line 795 "hlds.goal_form.c"
  MR_Box * hlds__goal_form__wrapper_arg_1,
#line 797 "hlds.goal_form.c"
  MR_Box hlds__goal_form__wrapper_arg_2,
#line 799 "hlds.goal_form.c"
  MR_Box hlds__goal_form__wrapper_arg_3)
#line 801 "hlds.goal_form.c"
{
#line 803 "hlds.goal_form.c"
  {
#line 805 "hlds.goal_form.c"
    MR_Word hlds__goal_form__conv0_HeadVar__1_1;

#line 808 "hlds.goal_form.c"
    {
#line 810 "hlds.goal_form.c"
      hlds__goal_form____Compare____goal_loop_status_0_0(&hlds__goal_form__conv0_HeadVar__1_1, ((MR_Word) hlds__goal_form__wrapper_arg_2), ((MR_Word) hlds__goal_form__wrapper_arg_3));
    }
#line 813 "hlds.goal_form.c"
    *hlds__goal_form__wrapper_arg_1 = ((MR_Box) (hlds__goal_form__conv0_HeadVar__1_1));
#line 815 "hlds.goal_form.c"
  }
#line 817 "hlds.goal_form.c"
}

#line 820 "hlds.goal_form.c"
static MR_bool MR_CALL 
hlds__goal_form____Unify____goal_throw_status_0_0_10001(
#line 823 "hlds.goal_form.c"
  MR_Box hlds__goal_form__wrapper_arg_1,
#line 825 "hlds.goal_form.c"
  MR_Box hlds__goal_form__wrapper_arg_2)
#line 827 "hlds.goal_form.c"
{
#line 829 "hlds.goal_form.c"
  {
#line 831 "hlds.goal_form.c"
    MR_bool hlds__goal_form__succeeded;

#line 834 "hlds.goal_form.c"
    {
#line 836 "hlds.goal_form.c"
      hlds__goal_form__succeeded = hlds__goal_form____Unify____goal_throw_status_0_0(((MR_Word) hlds__goal_form__wrapper_arg_1), ((MR_Word) hlds__goal_form__wrapper_arg_2));
    }
#line 839 "hlds.goal_form.c"
    return hlds__goal_form__succeeded;
#line 841 "hlds.goal_form.c"
  }
#line 843 "hlds.goal_form.c"
}

#line 846 "hlds.goal_form.c"
static void MR_CALL 
hlds__goal_form____Compare____goal_throw_status_0_0_10001(
#line 849 "hlds.goal_form.c"
  MR_Box * hlds__goal_form__wrapper_arg_1,
#line 851 "hlds.goal_form.c"
  MR_Box hlds__goal_form__wrapper_arg_2,
#line 853 "hlds.goal_form.c"
  MR_Box hlds__goal_form__wrapper_arg_3)
#line 855 "hlds.goal_form.c"
{
#line 857 "hlds.goal_form.c"
  {
#line 859 "hlds.goal_form.c"
    MR_Word hlds__goal_form__conv0_HeadVar__1_1;

#line 862 "hlds.goal_form.c"
    {
#line 864 "hlds.goal_form.c"
      hlds__goal_form____Compare____goal_throw_status_0_0(&hlds__goal_form__conv0_HeadVar__1_1, ((MR_Word) hlds__goal_form__wrapper_arg_2), ((MR_Word) hlds__goal_form__wrapper_arg_3));
    }
#line 867 "hlds.goal_form.c"
    *hlds__goal_form__wrapper_arg_1 = ((MR_Box) (hlds__goal_form__conv0_HeadVar__1_1));
#line 869 "hlds.goal_form.c"
  }
#line 871 "hlds.goal_form.c"
}

#line 874 "hlds.goal_form.c"
static MR_bool MR_CALL 
hlds__goal_form____Unify____has_subgoals_0_0_10001(
#line 877 "hlds.goal_form.c"
  MR_Box hlds__goal_form__wrapper_arg_1,
#line 879 "hlds.goal_form.c"
  MR_Box hlds__goal_form__wrapper_arg_2)
#line 881 "hlds.goal_form.c"
{
#line 883 "hlds.goal_form.c"
  {
#line 885 "hlds.goal_form.c"
    MR_bool hlds__goal_form__succeeded;

#line 888 "hlds.goal_form.c"
    {
#line 890 "hlds.goal_form.c"
      hlds__goal_form__succeeded = hlds__goal_form____Unify____has_subgoals_0_0(((MR_Word) hlds__goal_form__wrapper_arg_1), ((MR_Word) hlds__goal_form__wrapper_arg_2));
    }
#line 893 "hlds.goal_form.c"
    return hlds__goal_form__succeeded;
#line 895 "hlds.goal_form.c"
  }
#line 897 "hlds.goal_form.c"
}

#line 900 "hlds.goal_form.c"
static void MR_CALL 
hlds__goal_form____Compare____has_subgoals_0_0_10001(
#line 903 "hlds.goal_form.c"
  MR_Box * hlds__goal_form__wrapper_arg_1,
#line 905 "hlds.goal_form.c"
  MR_Box hlds__goal_form__wrapper_arg_2,
#line 907 "hlds.goal_form.c"
  MR_Box hlds__goal_form__wrapper_arg_3)
#line 909 "hlds.goal_form.c"
{
#line 911 "hlds.goal_form.c"
  {
#line 913 "hlds.goal_form.c"
    MR_Word hlds__goal_form__conv0_HeadVar__1_1;

#line 916 "hlds.goal_form.c"
    {
#line 918 "hlds.goal_form.c"
      hlds__goal_form____Compare____has_subgoals_0_0(&hlds__goal_form__conv0_HeadVar__1_1, ((MR_Word) hlds__goal_form__wrapper_arg_2), ((MR_Word) hlds__goal_form__wrapper_arg_3));
    }
#line 921 "hlds.goal_form.c"
    *hlds__goal_form__wrapper_arg_1 = ((MR_Box) (hlds__goal_form__conv0_HeadVar__1_1));
#line 923 "hlds.goal_form.c"
  }
#line 925 "hlds.goal_form.c"
}

#line 264 "goal_form.m"
static void MR_CALL 
hlds__goal_form__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_99_97_110_95_116_104_114_111_119_95_50_95_95_91_50_93_95_48_5_p_0(
#line 264 "goal_form.m"
  MR_Word hlds__goal_form__GoalExpr_6,
#line 264 "goal_form.m"
  MR_Word * hlds__goal_form__Result_8,
#line 264 "goal_form.m"
  MR_Word hlds__goal_form__STATE_VARIABLE_ModuleInfo_0_82,
#line 264 "goal_form.m"
  MR_Word * hlds__goal_form__STATE_VARIABLE_ModuleInfo_83)
#line 264 "goal_form.m"
{
#line 276 "goal_form.m"
  {
#line 276 "goal_form.m"
    MR_bool hlds__goal_form__succeeded;

#line 276 "goal_form.m"
    if (((MR_tag((MR_Word) hlds__goal_form__GoalExpr_6)) == (MR_mktag((MR_Integer) 0))))
#line 313 "goal_form.m"
      {
#line 313 "goal_form.m"
        MR_Word hlds__goal_form__SubGoal_57 = (MR_Word) MR_body(((MR_Word) hlds__goal_form__GoalExpr_6), (MR_Integer) 0);

#line 314 "goal_form.m"
        {
#line 314 "goal_form.m"
          hlds__goal_form__goal_can_throw_4_p_0(hlds__goal_form__SubGoal_57, hlds__goal_form__Result_8, hlds__goal_form__STATE_VARIABLE_ModuleInfo_0_82, hlds__goal_form__STATE_VARIABLE_ModuleInfo_83);
#line 314 "goal_form.m"
          return;
        }
#line 313 "goal_form.m"
      }
#line 276 "goal_form.m"
    else
#line 276 "goal_form.m"
      if (((MR_tag((MR_Word) hlds__goal_form__GoalExpr_6)) == (MR_mktag((MR_Integer) 2))))
#line 279 "goal_form.m"
        {
#line 279 "goal_form.m"
          MR_Word hlds__goal_form__PredId_16 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__GoalExpr_6, (MR_Integer) 0)));
#line 279 "goal_form.m"
          MR_Integer hlds__goal_form__ProcId_17 = ((MR_Integer) (MR_hl_field(MR_mktag(2), hlds__goal_form__GoalExpr_6, (MR_Integer) 1)));
#line 279 "goal_form.m"
          MR_Word hlds__goal_form__Status_22;
#line 279 "goal_form.m"
          MR_Word hlds__goal_form__V_92_92;
#line 279 "goal_form.m"
          MR_Word hlds__goal_form__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__GoalExpr_6, (MR_Integer) 2)));
#line 279 "goal_form.m"
          MR_Word hlds__goal_form__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__GoalExpr_6, (MR_Integer) 3)));
#line 279 "goal_form.m"
          MR_Word hlds__goal_form__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__GoalExpr_6, (MR_Integer) 4)));
#line 279 "goal_form.m"
          MR_Word hlds__goal_form__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__GoalExpr_6, (MR_Integer) 5)));

#line 280 "goal_form.m"
          {
#line 280 "goal_form.m"
            hlds__goal_form__V_92_92 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 280 "goal_form.m"
            MR_hl_field(MR_mktag(0), hlds__goal_form__V_92_92, 0) = ((MR_Box) (hlds__goal_form__PredId_16));
#line 280 "goal_form.m"
            MR_hl_field(MR_mktag(0), hlds__goal_form__V_92_92, 1) = ((MR_Box) (hlds__goal_form__ProcId_17));
#line 280 "goal_form.m"
          }
#line 280 "goal_form.m"
          {
#line 280 "goal_form.m"
            transform_hlds__exception_analysis__lookup_exception_analysis_result_4_p_0(hlds__goal_form__V_92_92, &hlds__goal_form__Status_22, hlds__goal_form__STATE_VARIABLE_ModuleInfo_0_82, hlds__goal_form__STATE_VARIABLE_ModuleInfo_83);
          }
#line 285 "goal_form.m"
          if ((hlds__goal_form__Status_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 284 "goal_form.m"
            *hlds__goal_form__Result_8 = (MR_Integer) 1;
#line 285 "goal_form.m"
          else
#line 289 "goal_form.m"
            *hlds__goal_form__Result_8 = (MR_Integer) 0;
#line 279 "goal_form.m"
        }
#line 276 "goal_form.m"
      else
#line 276 "goal_form.m"
        if (((MR_tag((MR_Word) hlds__goal_form__GoalExpr_6)) == (MR_mktag((MR_Integer) 1))))
#line 299 "goal_form.m"
          {
#line 299 "goal_form.m"
            MR_Word hlds__goal_form__Uni_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__GoalExpr_6, (MR_Integer) 3)));
#line 299 "goal_form.m"
            MR_Word hlds__goal_form__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__GoalExpr_6, (MR_Integer) 0)));
#line 299 "goal_form.m"
            MR_Word hlds__goal_form__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__GoalExpr_6, (MR_Integer) 1)));
#line 299 "goal_form.m"
            MR_Word hlds__goal_form__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__GoalExpr_6, (MR_Integer) 2)));
#line 299 "goal_form.m"
            MR_Word hlds__goal_form__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__GoalExpr_6, (MR_Integer) 4)));

#line 304 "goal_form.m"
            if (((((MR_tag((MR_Word) hlds__goal_form__Uni_35)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__Uni_35, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 303 "goal_form.m"
              *hlds__goal_form__Result_8 = (MR_Integer) 0;
#line 304 "goal_form.m"
            else
#line 310 "goal_form.m"
              *hlds__goal_form__Result_8 = (MR_Integer) 1;
#line 310 "goal_form.m"
            *hlds__goal_form__STATE_VARIABLE_ModuleInfo_83 = hlds__goal_form__STATE_VARIABLE_ModuleInfo_0_82;
#line 299 "goal_form.m"
          }
#line 276 "goal_form.m"
        else
#line 276 "goal_form.m"
          if (((((MR_tag((MR_Word) hlds__goal_form__GoalExpr_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_6, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 330 "goal_form.m"
            {
#line 330 "goal_form.m"
              MR_Word hlds__goal_form__Attributes_61 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_6, (MR_Integer) 1)));
#line 330 "goal_form.m"
              MR_Word hlds__goal_form__ExceptionStatus_68;
#line 330 "goal_form.m"
              MR_Word hlds__goal_form__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_6, (MR_Integer) 2)));
#line 330 "goal_form.m"
              MR_Integer hlds__goal_form__V_63_63 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_6, (MR_Integer) 3)));
#line 330 "goal_form.m"
              MR_Word hlds__goal_form__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_6, (MR_Integer) 4)));
#line 330 "goal_form.m"
              MR_Word hlds__goal_form__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_6, (MR_Integer) 5)));
#line 330 "goal_form.m"
              MR_Word hlds__goal_form__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_6, (MR_Integer) 6)));
#line 330 "goal_form.m"
              MR_Word hlds__goal_form__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_6, (MR_Integer) 7)));

#line 331 "goal_form.m"
              {
#line 331 "goal_form.m"
                hlds__goal_form__ExceptionStatus_68 = parse_tree__prog_data__get_may_throw_exception_1_f_0(hlds__goal_form__Attributes_61);
              }
#line 335 "goal_form.m"
              if ((hlds__goal_form__ExceptionStatus_68 == (MR_Integer) 1))
#line 336 "goal_form.m"
                {
#line 336 "goal_form.m"
                  MR_Word hlds__goal_form__V_88_88;

#line 337 "goal_form.m"
                  {
#line 337 "goal_form.m"
                    hlds__goal_form__V_88_88 = parse_tree__prog_data__get_may_call_mercury_1_f_0(hlds__goal_form__Attributes_61);
                  }
#line 337 "goal_form.m"
                  hlds__goal_form__succeeded = (hlds__goal_form__V_88_88 == (MR_Integer) 1);
#line 336 "goal_form.m"
                }
#line 335 "goal_form.m"
              else
#line 334 "goal_form.m"
                hlds__goal_form__succeeded = MR_TRUE;
#line 341 "goal_form.m"
              if (hlds__goal_form__succeeded)
#line 340 "goal_form.m"
                *hlds__goal_form__Result_8 = (MR_Integer) 1;
#line 341 "goal_form.m"
              else
#line 342 "goal_form.m"
                *hlds__goal_form__Result_8 = (MR_Integer) 0;
#line 342 "goal_form.m"
              *hlds__goal_form__STATE_VARIABLE_ModuleInfo_83 = hlds__goal_form__STATE_VARIABLE_ModuleInfo_0_82;
#line 330 "goal_form.m"
            }
#line 276 "goal_form.m"
          else
#line 276 "goal_form.m"
            if (((((MR_tag((MR_Word) hlds__goal_form__GoalExpr_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_6, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 276 "goal_form.m"
              {
#line 276 "goal_form.m"
                MR_Word hlds__goal_form__Goals_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_6, (MR_Integer) 2)));
#line 270 "goal_form.m"
                MR_Word hlds__goal_form__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_6, (MR_Integer) 1)));

#line 277 "goal_form.m"
                {
#line 277 "goal_form.m"
                  hlds__goal_form__goals_can_throw_4_p_0(hlds__goal_form__Goals_11, hlds__goal_form__Result_8, hlds__goal_form__STATE_VARIABLE_ModuleInfo_0_82, hlds__goal_form__STATE_VARIABLE_ModuleInfo_83);
#line 277 "goal_form.m"
                  return;
                }
#line 276 "goal_form.m"
              }
#line 276 "goal_form.m"
            else
#line 276 "goal_form.m"
              if (((((MR_tag((MR_Word) hlds__goal_form__GoalExpr_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_6, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 276 "goal_form.m"
                {
#line 276 "goal_form.m"
                  MR_Word hlds__goal_form__Goals_99 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_6, (MR_Integer) 1)));

#line 277 "goal_form.m"
                  {
#line 277 "goal_form.m"
                    hlds__goal_form__goals_can_throw_4_p_0(hlds__goal_form__Goals_99, hlds__goal_form__Result_8, hlds__goal_form__STATE_VARIABLE_ModuleInfo_0_82, hlds__goal_form__STATE_VARIABLE_ModuleInfo_83);
#line 277 "goal_form.m"
                    return;
                  }
#line 276 "goal_form.m"
                }
#line 276 "goal_form.m"
              else
#line 276 "goal_form.m"
                if (((((MR_tag((MR_Word) hlds__goal_form__GoalExpr_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_6, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 292 "goal_form.m"
                  {
#line 294 "goal_form.m"
                    *hlds__goal_form__Result_8 = (MR_Integer) 0;
#line 294 "goal_form.m"
                    *hlds__goal_form__STATE_VARIABLE_ModuleInfo_83 = hlds__goal_form__STATE_VARIABLE_ModuleInfo_0_82;
#line 292 "goal_form.m"
                  }
#line 276 "goal_form.m"
                else
#line 276 "goal_form.m"
                  if (((((MR_tag((MR_Word) hlds__goal_form__GoalExpr_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_6, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 276 "goal_form.m"
                    {
#line 276 "goal_form.m"
                      MR_Word hlds__goal_form__ThenGoal_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_6, (MR_Integer) 3)));
#line 276 "goal_form.m"
                      MR_Word hlds__goal_form__ElseGoal_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_6, (MR_Integer) 4)));
#line 276 "goal_form.m"
                      MR_Word hlds__goal_form__V_95_95;
#line 276 "goal_form.m"
                      MR_Word hlds__goal_form__Goal_104 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_6, (MR_Integer) 2)));
#line 276 "goal_form.m"
                      MR_Word hlds__goal_form__Goals_105;
#line 276 "goal_form.m"
                      MR_Word hlds__goal_form__Result0_108;
#line 276 "goal_form.m"
                      MR_Word hlds__goal_form__STATE_VARIABLE_ModuleInfo_15_111;
#line 274 "goal_form.m"
                      MR_Word hlds__goal_form__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_6, (MR_Integer) 1)));

#line 275 "goal_form.m"
                      {
#line 275 "goal_form.m"
                        hlds__goal_form__V_95_95 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 275 "goal_form.m"
                        MR_hl_field(MR_mktag(1), hlds__goal_form__V_95_95, 0) = ((MR_Box) (hlds__goal_form__ElseGoal_15));
#line 275 "goal_form.m"
                        MR_hl_field(MR_mktag(1), hlds__goal_form__V_95_95, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 275 "goal_form.m"
                      }
#line 275 "goal_form.m"
                      {
#line 275 "goal_form.m"
                        hlds__goal_form__Goals_105 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 275 "goal_form.m"
                        MR_hl_field(MR_mktag(1), hlds__goal_form__Goals_105, 0) = ((MR_Box) (hlds__goal_form__ThenGoal_14));
#line 275 "goal_form.m"
                        MR_hl_field(MR_mktag(1), hlds__goal_form__Goals_105, 1) = ((MR_Box) (hlds__goal_form__V_95_95));
#line 275 "goal_form.m"
                      }
#line 366 "goal_form.m"
                      {
#line 366 "goal_form.m"
                        hlds__goal_form__goal_can_throw_4_p_0(hlds__goal_form__Goal_104, &hlds__goal_form__Result0_108, hlds__goal_form__STATE_VARIABLE_ModuleInfo_0_82, &hlds__goal_form__STATE_VARIABLE_ModuleInfo_15_111);
                      }
#line 370 "goal_form.m"
                      if ((hlds__goal_form__Result0_108 == (MR_Integer) 0))
#line 371 "goal_form.m"
                        {
#line 372 "goal_form.m"
                          *hlds__goal_form__Result_8 = (MR_Integer) 0;
#line 372 "goal_form.m"
                          *hlds__goal_form__STATE_VARIABLE_ModuleInfo_83 = hlds__goal_form__STATE_VARIABLE_ModuleInfo_15_111;
#line 371 "goal_form.m"
                        }
#line 370 "goal_form.m"
                      else
#line 365 "goal_form.m"
                        {
#line 365 "goal_form.m"
                          MR_Word hlds__goal_form__Goal_116 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__Goals_105, (MR_Integer) 0)));
#line 365 "goal_form.m"
                          MR_Word hlds__goal_form__Goals_117 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__Goals_105, (MR_Integer) 1)));
#line 365 "goal_form.m"
                          MR_Word hlds__goal_form__Result0_120;
#line 365 "goal_form.m"
                          MR_Word hlds__goal_form__STATE_VARIABLE_ModuleInfo_15_123;

#line 366 "goal_form.m"
                          {
#line 366 "goal_form.m"
                            hlds__goal_form__goal_can_throw_4_p_0(hlds__goal_form__Goal_116, &hlds__goal_form__Result0_120, hlds__goal_form__STATE_VARIABLE_ModuleInfo_15_111, &hlds__goal_form__STATE_VARIABLE_ModuleInfo_15_123);
                          }
#line 370 "goal_form.m"
                          if ((hlds__goal_form__Result0_120 == (MR_Integer) 0))
#line 371 "goal_form.m"
                            {
#line 372 "goal_form.m"
                              *hlds__goal_form__Result_8 = (MR_Integer) 0;
#line 372 "goal_form.m"
                              *hlds__goal_form__STATE_VARIABLE_ModuleInfo_83 = hlds__goal_form__STATE_VARIABLE_ModuleInfo_15_123;
#line 371 "goal_form.m"
                            }
#line 370 "goal_form.m"
                          else
#line 365 "goal_form.m"
                            {
#line 365 "goal_form.m"
                              MR_Word hlds__goal_form__Goal_128 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__Goals_117, (MR_Integer) 0)));
#line 365 "goal_form.m"
                              MR_Word hlds__goal_form__Result0_132;
#line 365 "goal_form.m"
                              MR_Word hlds__goal_form__STATE_VARIABLE_ModuleInfo_15_135;
#line 365 "goal_form.m"
                              MR_Word hlds__goal_form__Goals_129 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__Goals_117, (MR_Integer) 1)));

#line 366 "goal_form.m"
                              {
#line 366 "goal_form.m"
                                hlds__goal_form__goal_can_throw_4_p_0(hlds__goal_form__Goal_128, &hlds__goal_form__Result0_132, hlds__goal_form__STATE_VARIABLE_ModuleInfo_15_123, &hlds__goal_form__STATE_VARIABLE_ModuleInfo_15_135);
                              }
#line 370 "goal_form.m"
                              if ((hlds__goal_form__Result0_132 == (MR_Integer) 0))
#line 371 "goal_form.m"
                                {
#line 372 "goal_form.m"
                                  *hlds__goal_form__Result_8 = (MR_Integer) 0;
#line 372 "goal_form.m"
                                  *hlds__goal_form__STATE_VARIABLE_ModuleInfo_83 = hlds__goal_form__STATE_VARIABLE_ModuleInfo_15_135;
#line 371 "goal_form.m"
                                }
#line 370 "goal_form.m"
                              else
#line 364 "goal_form.m"
                                {
#line 364 "goal_form.m"
                                  *hlds__goal_form__Result_8 = (MR_Integer) 1;
#line 364 "goal_form.m"
                                  *hlds__goal_form__STATE_VARIABLE_ModuleInfo_83 = hlds__goal_form__STATE_VARIABLE_ModuleInfo_15_135;
#line 364 "goal_form.m"
                                }
#line 365 "goal_form.m"
                            }
#line 365 "goal_form.m"
                        }
#line 276 "goal_form.m"
                    }
#line 276 "goal_form.m"
                  else
#line 276 "goal_form.m"
                    if (((((MR_tag((MR_Word) hlds__goal_form__GoalExpr_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_6, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 316 "goal_form.m"
                      {
#line 316 "goal_form.m"
                        MR_Word hlds__goal_form__Reason_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_6, (MR_Integer) 1)));
#line 316 "goal_form.m"
                        MR_Word hlds__goal_form__SubGoal_98 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_6, (MR_Integer) 2)));
#line 318 "goal_form.m"
                        MR_Word hlds__goal_form__FGT_60;
#line 318 "goal_form.m"
                        MR_Word hlds__goal_form__V_59_59;

#line 318 "goal_form.m"
                        hlds__goal_form__succeeded = ((((MR_tag((MR_Word) hlds__goal_form__Reason_58)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__Reason_58, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 318 "goal_form.m"
                        if (hlds__goal_form__succeeded)
#line 318 "goal_form.m"
                          {
#line 318 "goal_form.m"
                            hlds__goal_form__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__Reason_58, (MR_Integer) 1)));
#line 318 "goal_form.m"
                            hlds__goal_form__FGT_60 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__Reason_58, (MR_Integer) 2)));
#line 320 "goal_form.m"
                            if ((hlds__goal_form__FGT_60 == (MR_Integer) 1))
#line 319 "goal_form.m"
                              hlds__goal_form__succeeded = MR_TRUE;
#line 320 "goal_form.m"
                            else
#line 320 "goal_form.m"
                              if ((hlds__goal_form__FGT_60 == (MR_Integer) 2))
#line 320 "goal_form.m"
                                hlds__goal_form__succeeded = MR_TRUE;
#line 320 "goal_form.m"
                              else
#line 320 "goal_form.m"
                                hlds__goal_form__succeeded = MR_FALSE;
#line 318 "goal_form.m"
                          }
#line 326 "goal_form.m"
                        if (hlds__goal_form__succeeded)
#line 325 "goal_form.m"
                          {
#line 325 "goal_form.m"
                            *hlds__goal_form__Result_8 = (MR_Integer) 1;
#line 325 "goal_form.m"
                            *hlds__goal_form__STATE_VARIABLE_ModuleInfo_83 = hlds__goal_form__STATE_VARIABLE_ModuleInfo_0_82;
#line 325 "goal_form.m"
                          }
#line 326 "goal_form.m"
                        else
#line 327 "goal_form.m"
                          {
#line 327 "goal_form.m"
                            hlds__goal_form__goal_can_throw_4_p_0(hlds__goal_form__SubGoal_98, hlds__goal_form__Result_8, hlds__goal_form__STATE_VARIABLE_ModuleInfo_0_82, hlds__goal_form__STATE_VARIABLE_ModuleInfo_83);
#line 327 "goal_form.m"
                            return;
                          }
#line 316 "goal_form.m"
                      }
#line 276 "goal_form.m"
                    else
#line 276 "goal_form.m"
                      if (((((MR_tag((MR_Word) hlds__goal_form__GoalExpr_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_6, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 345 "goal_form.m"
                        {
#line 345 "goal_form.m"
                          MR_Word hlds__goal_form__ShortHand_69 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_6, (MR_Integer) 1)));

#line 349 "goal_form.m"
                          if (((MR_tag((MR_Word) hlds__goal_form__ShortHand_69)) == (MR_mktag((MR_Integer) 1))))
#line 350 "goal_form.m"
                            {
#line 354 "goal_form.m"
                              *hlds__goal_form__Result_8 = (MR_Integer) 0;
#line 354 "goal_form.m"
                              *hlds__goal_form__STATE_VARIABLE_ModuleInfo_83 = hlds__goal_form__STATE_VARIABLE_ModuleInfo_0_82;
#line 350 "goal_form.m"
                            }
#line 349 "goal_form.m"
                          else
#line 349 "goal_form.m"
                            if (((MR_tag((MR_Word) hlds__goal_form__ShortHand_69)) == (MR_mktag((MR_Integer) 0))))
#line 347 "goal_form.m"
                              {
#line 347 "goal_form.m"
                                MR_Word hlds__goal_form__GoalB_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__ShortHand_69, (MR_Integer) 1)));
#line 347 "goal_form.m"
                                MR_Word hlds__goal_form__Goal_152 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__ShortHand_69, (MR_Integer) 0)));
#line 347 "goal_form.m"
                                MR_Word hlds__goal_form__Goals_153;
#line 347 "goal_form.m"
                                MR_Word hlds__goal_form__Result0_156;
#line 347 "goal_form.m"
                                MR_Word hlds__goal_form__STATE_VARIABLE_ModuleInfo_15_159;

#line 348 "goal_form.m"
                                {
#line 348 "goal_form.m"
                                  hlds__goal_form__Goals_153 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 348 "goal_form.m"
                                  MR_hl_field(MR_mktag(1), hlds__goal_form__Goals_153, 0) = ((MR_Box) (hlds__goal_form__GoalB_71));
#line 348 "goal_form.m"
                                  MR_hl_field(MR_mktag(1), hlds__goal_form__Goals_153, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 348 "goal_form.m"
                                }
#line 366 "goal_form.m"
                                {
#line 366 "goal_form.m"
                                  hlds__goal_form__goal_can_throw_4_p_0(hlds__goal_form__Goal_152, &hlds__goal_form__Result0_156, hlds__goal_form__STATE_VARIABLE_ModuleInfo_0_82, &hlds__goal_form__STATE_VARIABLE_ModuleInfo_15_159);
                                }
#line 370 "goal_form.m"
                                if ((hlds__goal_form__Result0_156 == (MR_Integer) 0))
#line 371 "goal_form.m"
                                  {
#line 372 "goal_form.m"
                                    *hlds__goal_form__Result_8 = (MR_Integer) 0;
#line 372 "goal_form.m"
                                    *hlds__goal_form__STATE_VARIABLE_ModuleInfo_83 = hlds__goal_form__STATE_VARIABLE_ModuleInfo_15_159;
#line 371 "goal_form.m"
                                  }
#line 370 "goal_form.m"
                                else
#line 365 "goal_form.m"
                                  {
#line 365 "goal_form.m"
                                    MR_Word hlds__goal_form__Goal_164 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__Goals_153, (MR_Integer) 0)));
#line 365 "goal_form.m"
                                    MR_Word hlds__goal_form__Result0_168;
#line 365 "goal_form.m"
                                    MR_Word hlds__goal_form__STATE_VARIABLE_ModuleInfo_15_171;
#line 365 "goal_form.m"
                                    MR_Word hlds__goal_form__Goals_165 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__Goals_153, (MR_Integer) 1)));

#line 366 "goal_form.m"
                                    {
#line 366 "goal_form.m"
                                      hlds__goal_form__goal_can_throw_4_p_0(hlds__goal_form__Goal_164, &hlds__goal_form__Result0_168, hlds__goal_form__STATE_VARIABLE_ModuleInfo_15_159, &hlds__goal_form__STATE_VARIABLE_ModuleInfo_15_171);
                                    }
#line 370 "goal_form.m"
                                    if ((hlds__goal_form__Result0_168 == (MR_Integer) 0))
#line 371 "goal_form.m"
                                      {
#line 372 "goal_form.m"
                                        *hlds__goal_form__Result_8 = (MR_Integer) 0;
#line 372 "goal_form.m"
                                        *hlds__goal_form__STATE_VARIABLE_ModuleInfo_83 = hlds__goal_form__STATE_VARIABLE_ModuleInfo_15_171;
#line 371 "goal_form.m"
                                      }
#line 370 "goal_form.m"
                                    else
#line 364 "goal_form.m"
                                      {
#line 364 "goal_form.m"
                                        *hlds__goal_form__Result_8 = (MR_Integer) 1;
#line 364 "goal_form.m"
                                        *hlds__goal_form__STATE_VARIABLE_ModuleInfo_83 = hlds__goal_form__STATE_VARIABLE_ModuleInfo_15_171;
#line 364 "goal_form.m"
                                      }
#line 365 "goal_form.m"
                                  }
#line 347 "goal_form.m"
                              }
#line 349 "goal_form.m"
                            else
#line 356 "goal_form.m"
                              {
#line 357 "goal_form.m"
                                *hlds__goal_form__Result_8 = (MR_Integer) 0;
#line 357 "goal_form.m"
                                *hlds__goal_form__STATE_VARIABLE_ModuleInfo_83 = hlds__goal_form__STATE_VARIABLE_ModuleInfo_0_82;
#line 356 "goal_form.m"
                              }
#line 345 "goal_form.m"
                        }
#line 276 "goal_form.m"
                      else
#line 296 "goal_form.m"
                        {
#line 296 "goal_form.m"
                          MR_Word hlds__goal_form__Cases_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_6, (MR_Integer) 3)));
#line 296 "goal_form.m"
                          MR_Word hlds__goal_form__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_6, (MR_Integer) 1)));
#line 296 "goal_form.m"
                          MR_Word hlds__goal_form__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_6, (MR_Integer) 2)));

#line 297 "goal_form.m"
                          {
#line 297 "goal_form.m"
                            hlds__goal_form__cases_can_throw_4_p_0(hlds__goal_form__Cases_31, hlds__goal_form__Result_8, hlds__goal_form__STATE_VARIABLE_ModuleInfo_0_82, hlds__goal_form__STATE_VARIABLE_ModuleInfo_83);
#line 297 "goal_form.m"
                            return;
                          }
#line 296 "goal_form.m"
                        }
#line 276 "goal_form.m"
  }
#line 264 "goal_form.m"
}

#line 188 "goal_form.m"
void MR_CALL 
hlds__goal_form____Compare____has_subgoals_0_0(
#line 188 "goal_form.m"
  MR_Word * hlds__goal_form__HeadVar__1_1,
#line 188 "goal_form.m"
  MR_Word hlds__goal_form__HeadVar__2_2,
#line 188 "goal_form.m"
  MR_Word hlds__goal_form__HeadVar__3_3)
#line 188 "goal_form.m"
{
#line 188 "goal_form.m"
  {
#line 188 "goal_form.m"
    MR_bool hlds__goal_form__succeeded;
#line 188 "goal_form.m"
    MR_Integer hlds__goal_form__Cast_HeadVar1_4 = (MR_Integer) hlds__goal_form__HeadVar__2_2;
#line 188 "goal_form.m"
    MR_Integer hlds__goal_form__Cast_HeadVar2_5 = (MR_Integer) hlds__goal_form__HeadVar__3_3;

#line 188 "goal_form.m"
    {
#line 188 "goal_form.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(hlds__goal_form__HeadVar__1_1, hlds__goal_form__Cast_HeadVar1_4, hlds__goal_form__Cast_HeadVar2_5);
#line 188 "goal_form.m"
      return;
    }
#line 188 "goal_form.m"
  }
#line 188 "goal_form.m"
}

#line 188 "goal_form.m"
MR_bool MR_CALL 
hlds__goal_form____Unify____has_subgoals_0_0(
#line 188 "goal_form.m"
  MR_Word hlds__goal_form__HeadVar__2_1,
#line 188 "goal_form.m"
  MR_Word hlds__goal_form__HeadVar__2_2)
#line 188 "goal_form.m"
{
#line 1522 "hlds.goal_form.c"
  {
#line 1524 "hlds.goal_form.c"
    MR_bool hlds__goal_form__succeeded = (hlds__goal_form__HeadVar__2_1 == hlds__goal_form__HeadVar__2_2);

#line 1527 "hlds.goal_form.c"
    return hlds__goal_form__succeeded;
#line 1529 "hlds.goal_form.c"
  }
#line 188 "goal_form.m"
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
#line 1575 "hlds.goal_form.c"
  {
#line 1577 "hlds.goal_form.c"
    MR_bool hlds__goal_form__succeeded = (hlds__goal_form__HeadVar__2_1 == hlds__goal_form__HeadVar__2_2);

#line 1580 "hlds.goal_form.c"
    return hlds__goal_form__succeeded;
#line 1582 "hlds.goal_form.c"
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
#line 1628 "hlds.goal_form.c"
  {
#line 1630 "hlds.goal_form.c"
    MR_bool hlds__goal_form__succeeded = (hlds__goal_form__HeadVar__2_1 == hlds__goal_form__HeadVar__2_2);

#line 1633 "hlds.goal_form.c"
    return hlds__goal_form__succeeded;
#line 1635 "hlds.goal_form.c"
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
#line 1681 "hlds.goal_form.c"
  {
#line 1683 "hlds.goal_form.c"
    MR_bool hlds__goal_form__succeeded = (hlds__goal_form__HeadVar__2_1 == hlds__goal_form__HeadVar__2_2);

#line 1686 "hlds.goal_form.c"
    return hlds__goal_form__succeeded;
#line 1688 "hlds.goal_form.c"
  }
#line 58 "goal_form.m"
}

#line 1168 "goal_form.m"
static MR_Word MR_CALL 
hlds__goal_form__case_list_has_foreign_1_f_0(
#line 1168 "goal_form.m"
  MR_Word hlds__goal_form__HeadVar__1_1)
#line 1168 "goal_form.m"
{
#line 1170 "goal_form.m"
  while (MR_TRUE)
#line 1170 "goal_form.m"
    {
#line 1170 "goal_form.m"
      /* tailcall optimized into a loop */
#line 1170 "goal_form.m"
      {
#line 1170 "goal_form.m"
        MR_bool hlds__goal_form__succeeded;
#line 1170 "goal_form.m"
        MR_Word hlds__goal_form__HeadVar__2_2;

#line 1170 "goal_form.m"
        if ((hlds__goal_form__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1170 "goal_form.m"
          hlds__goal_form__HeadVar__2_2 = (MR_Integer) 0;
#line 1170 "goal_form.m"
        else
#line 1171 "goal_form.m"
          {
#line 1171 "goal_form.m"
            MR_Word hlds__goal_form__Case_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__HeadVar__1_1, (MR_Integer) 0)));
#line 1171 "goal_form.m"
            MR_Word hlds__goal_form__Cases_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__HeadVar__1_1, (MR_Integer) 1)));
#line 1171 "goal_form.m"
            MR_Word hlds__goal_form__Goal_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Case_3, (MR_Integer) 2)));
#line 1172 "goal_form.m"
            MR_Word hlds__goal_form__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Case_3, (MR_Integer) 0)));
#line 1172 "goal_form.m"
            MR_Word hlds__goal_form__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Case_3, (MR_Integer) 1)));
#line 1173 "goal_form.m"
            MR_Word hlds__goal_form__V_9_9;

#line 1173 "goal_form.m"
            {
#line 1173 "goal_form.m"
              hlds__goal_form__V_9_9 = hlds__goal_form__goal_has_foreign_1_f_0(hlds__goal_form__Goal_8);
            }
#line 1173 "goal_form.m"
            hlds__goal_form__succeeded = (hlds__goal_form__V_9_9 == (MR_Integer) 1);
#line 1175 "goal_form.m"
            if (hlds__goal_form__succeeded)
#line 1174 "goal_form.m"
              hlds__goal_form__HeadVar__2_2 = (MR_Integer) 1;
#line 1175 "goal_form.m"
            else
#line 1176 "goal_form.m"
              {
#line 1176 "goal_form.m"
                /* direct tailcall eliminated */
#line 1176 "goal_form.m"
                {
#line 1176 "goal_form.m"
                  MR_Word hlds__goal_form__HeadVar__1__tmp_copy_1 = hlds__goal_form__Cases_4;

#line 1176 "goal_form.m"
                  hlds__goal_form__HeadVar__1_1 = hlds__goal_form__HeadVar__1__tmp_copy_1;
#line 1176 "goal_form.m"
                }
#line 1176 "goal_form.m"
                continue;
#line 1176 "goal_form.m"
              }
#line 1171 "goal_form.m"
          }
#line 1170 "goal_form.m"
        return hlds__goal_form__HeadVar__2_2;
#line 1170 "goal_form.m"
      }
#line 1170 "goal_form.m"
      break;
#line 1170 "goal_form.m"
    }
#line 1168 "goal_form.m"
}

#line 1158 "goal_form.m"
static MR_Word MR_CALL 
hlds__goal_form__goal_list_has_foreign_1_f_0(
#line 1158 "goal_form.m"
  MR_Word hlds__goal_form__HeadVar__1_1)
#line 1158 "goal_form.m"
{
#line 1160 "goal_form.m"
  while (MR_TRUE)
#line 1160 "goal_form.m"
    {
#line 1160 "goal_form.m"
      /* tailcall optimized into a loop */
#line 1160 "goal_form.m"
      {
#line 1160 "goal_form.m"
        MR_bool hlds__goal_form__succeeded;
#line 1160 "goal_form.m"
        MR_Word hlds__goal_form__HeadVar__2_2;

#line 1160 "goal_form.m"
        if ((hlds__goal_form__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1160 "goal_form.m"
          hlds__goal_form__HeadVar__2_2 = (MR_Integer) 0;
#line 1160 "goal_form.m"
        else
#line 1161 "goal_form.m"
          {
#line 1161 "goal_form.m"
            MR_Word hlds__goal_form__Goal_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__HeadVar__1_1, (MR_Integer) 0)));
#line 1161 "goal_form.m"
            MR_Word hlds__goal_form__Goals_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__HeadVar__1_1, (MR_Integer) 1)));
#line 1162 "goal_form.m"
            MR_Word hlds__goal_form__V_6_6;

#line 1162 "goal_form.m"
            {
#line 1162 "goal_form.m"
              hlds__goal_form__V_6_6 = hlds__goal_form__goal_has_foreign_1_f_0(hlds__goal_form__Goal_3);
            }
#line 1162 "goal_form.m"
            hlds__goal_form__succeeded = (hlds__goal_form__V_6_6 == (MR_Integer) 1);
#line 1164 "goal_form.m"
            if (hlds__goal_form__succeeded)
#line 1163 "goal_form.m"
              hlds__goal_form__HeadVar__2_2 = (MR_Integer) 1;
#line 1164 "goal_form.m"
            else
#line 1165 "goal_form.m"
              {
#line 1165 "goal_form.m"
                /* direct tailcall eliminated */
#line 1165 "goal_form.m"
                {
#line 1165 "goal_form.m"
                  MR_Word hlds__goal_form__HeadVar__1__tmp_copy_1 = hlds__goal_form__Goals_4;

#line 1165 "goal_form.m"
                  hlds__goal_form__HeadVar__1_1 = hlds__goal_form__HeadVar__1__tmp_copy_1;
#line 1165 "goal_form.m"
                }
#line 1165 "goal_form.m"
                continue;
#line 1165 "goal_form.m"
              }
#line 1161 "goal_form.m"
          }
#line 1160 "goal_form.m"
        return hlds__goal_form__HeadVar__2_2;
#line 1160 "goal_form.m"
      }
#line 1160 "goal_form.m"
      break;
#line 1160 "goal_form.m"
    }
#line 1158 "goal_form.m"
}

#line 1062 "goal_form.m"
static void MR_CALL 
hlds__goal_form__count_recursive_calls_cases_5_p_0(
#line 1062 "goal_form.m"
  MR_Word hlds__goal_form__HeadVar__1_1,
#line 1062 "goal_form.m"
  MR_Word hlds__goal_form__PredId_2,
#line 1062 "goal_form.m"
  MR_Integer hlds__goal_form__ProcId_3,
#line 1062 "goal_form.m"
  MR_Integer * hlds__goal_form__Min_4,
#line 1062 "goal_form.m"
  MR_Integer * hlds__goal_form__Max_5)
#line 1062 "goal_form.m"
{
#line 1065 "goal_form.m"
  {
#line 1065 "goal_form.m"
    MR_bool hlds__goal_form__succeeded;

#line 1065 "goal_form.m"
    if ((hlds__goal_form__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1065 "goal_form.m"
      {
#line 1066 "goal_form.m"
        {
#line 1066 "goal_form.m"
          mercury__require__unexpected_3_p_0((MR_String) "hlds.goal_form", (MR_String) "predicate \140hlds.goal_form.count_recursive_calls_cases\'/5", (MR_String) "[]");
#line 1066 "goal_form.m"
          return;
        }
#line 1065 "goal_form.m"
      }
#line 1065 "goal_form.m"
    else
#line 1068 "goal_form.m"
      {
#line 1068 "goal_form.m"
        MR_Word hlds__goal_form__Goal_15;
#line 1068 "goal_form.m"
        MR_Word hlds__goal_form__Cases_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__HeadVar__1_1, (MR_Integer) 1)));
#line 1068 "goal_form.m"
        MR_Word hlds__goal_form__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__HeadVar__1_1, (MR_Integer) 0)));
#line 1067 "goal_form.m"
        MR_Word hlds__goal_form__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__V_27_27, (MR_Integer) 0)));
#line 1067 "goal_form.m"
        MR_Word hlds__goal_form__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__V_27_27, (MR_Integer) 1)));

#line 1067 "goal_form.m"
        hlds__goal_form__Goal_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__V_27_27, (MR_Integer) 2)));
#line 1072 "goal_form.m"
        if ((hlds__goal_form__Cases_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1071 "goal_form.m"
          {
#line 1071 "goal_form.m"
            hlds__goal_form__count_recursive_calls_5_p_0(hlds__goal_form__Goal_15, hlds__goal_form__PredId_2, hlds__goal_form__ProcId_3, hlds__goal_form__Min_4, hlds__goal_form__Max_5);
#line 1071 "goal_form.m"
            return;
          }
#line 1072 "goal_form.m"
        else
#line 1073 "goal_form.m"
          {
#line 1073 "goal_form.m"
            MR_Integer hlds__goal_form__Min0_23;
#line 1073 "goal_form.m"
            MR_Integer hlds__goal_form__Max0_24;
#line 1073 "goal_form.m"
            MR_Integer hlds__goal_form__Min1_25;
#line 1073 "goal_form.m"
            MR_Integer hlds__goal_form__Max1_26;
#line 1073 "goal_form.m"
            MR_Word hlds__goal_form__Goal_37;
#line 1073 "goal_form.m"
            MR_Word hlds__goal_form__Cases_38;
#line 1073 "goal_form.m"
            MR_Word hlds__goal_form__V_49_49;
#line 1067 "goal_form.m"
            MR_Word hlds__goal_form__V_35_35;
#line 1067 "goal_form.m"
            MR_Word hlds__goal_form__V_36_36;

#line 1074 "goal_form.m"
            {
#line 1074 "goal_form.m"
              hlds__goal_form__count_recursive_calls_5_p_0(hlds__goal_form__Goal_15, hlds__goal_form__PredId_2, hlds__goal_form__ProcId_3, &hlds__goal_form__Min0_23, &hlds__goal_form__Max0_24);
            }
#line 1067 "goal_form.m"
            hlds__goal_form__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__Cases_16, (MR_Integer) 0)));
#line 1067 "goal_form.m"
            hlds__goal_form__Cases_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__Cases_16, (MR_Integer) 1)));
#line 1067 "goal_form.m"
            hlds__goal_form__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__V_49_49, (MR_Integer) 0)));
#line 1067 "goal_form.m"
            hlds__goal_form__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__V_49_49, (MR_Integer) 1)));
#line 1067 "goal_form.m"
            hlds__goal_form__Goal_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__V_49_49, (MR_Integer) 2)));
#line 1072 "goal_form.m"
            if ((hlds__goal_form__Cases_38 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1071 "goal_form.m"
              {
#line 1071 "goal_form.m"
                hlds__goal_form__count_recursive_calls_5_p_0(hlds__goal_form__Goal_37, hlds__goal_form__PredId_2, hlds__goal_form__ProcId_3, &hlds__goal_form__Min1_25, &hlds__goal_form__Max1_26);
              }
#line 1072 "goal_form.m"
            else
#line 1073 "goal_form.m"
              {
#line 1073 "goal_form.m"
                MR_Integer hlds__goal_form__Min0_45;
#line 1073 "goal_form.m"
                MR_Integer hlds__goal_form__Max0_46;
#line 1073 "goal_form.m"
                MR_Integer hlds__goal_form__Min1_47;
#line 1073 "goal_form.m"
                MR_Integer hlds__goal_form__Max1_48;

#line 1074 "goal_form.m"
                {
#line 1074 "goal_form.m"
                  hlds__goal_form__count_recursive_calls_5_p_0(hlds__goal_form__Goal_37, hlds__goal_form__PredId_2, hlds__goal_form__ProcId_3, &hlds__goal_form__Min0_45, &hlds__goal_form__Max0_46);
                }
#line 1075 "goal_form.m"
                {
#line 1075 "goal_form.m"
                  hlds__goal_form__count_recursive_calls_cases_5_p_0(hlds__goal_form__Cases_38, hlds__goal_form__PredId_2, hlds__goal_form__ProcId_3, &hlds__goal_form__Min1_47, &hlds__goal_form__Max1_48);
                }
#line 1076 "goal_form.m"
                {
#line 1076 "goal_form.m"
                  mercury__int__min_3_p_0(hlds__goal_form__Min0_45, hlds__goal_form__Min1_47, &hlds__goal_form__Min1_25);
                }
#line 1077 "goal_form.m"
                {
#line 1077 "goal_form.m"
                  mercury__int__max_3_p_0(hlds__goal_form__Max0_46, hlds__goal_form__Max1_48, &hlds__goal_form__Max1_26);
                }
#line 1073 "goal_form.m"
              }
#line 1076 "goal_form.m"
            {
#line 1076 "goal_form.m"
              mercury__int__min_3_p_0(hlds__goal_form__Min0_23, hlds__goal_form__Min1_25, hlds__goal_form__Min_4);
            }
#line 1077 "goal_form.m"
            {
#line 1077 "goal_form.m"
              mercury__int__max_3_p_0(hlds__goal_form__Max0_24, hlds__goal_form__Max1_26, hlds__goal_form__Max_5);
#line 1077 "goal_form.m"
              return;
            }
#line 1073 "goal_form.m"
          }
#line 1068 "goal_form.m"
      }
#line 1065 "goal_form.m"
  }
#line 1062 "goal_form.m"
}

#line 1046 "goal_form.m"
static void MR_CALL 
hlds__goal_form__count_recursive_calls_disj_5_p_0(
#line 1046 "goal_form.m"
  MR_Word hlds__goal_form__HeadVar__1_1,
#line 1046 "goal_form.m"
  MR_Word hlds__goal_form__PredId_2,
#line 1046 "goal_form.m"
  MR_Integer hlds__goal_form__ProcId_3,
#line 1046 "goal_form.m"
  MR_Integer * hlds__goal_form__HeadVar__4_4,
#line 1046 "goal_form.m"
  MR_Integer * hlds__goal_form__HeadVar__5_5)
#line 1046 "goal_form.m"
{
#line 1049 "goal_form.m"
  {
#line 1049 "goal_form.m"
    MR_bool hlds__goal_form__succeeded;

#line 1049 "goal_form.m"
    if ((hlds__goal_form__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1049 "goal_form.m"
      {
#line 1049 "goal_form.m"
        *hlds__goal_form__HeadVar__4_4 = (MR_Integer) 0;
#line 1049 "goal_form.m"
        *hlds__goal_form__HeadVar__5_5 = (MR_Integer) 0;
#line 1049 "goal_form.m"
      }
#line 1049 "goal_form.m"
    else
#line 1050 "goal_form.m"
      {
#line 1050 "goal_form.m"
        MR_Word hlds__goal_form__Goal_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__HeadVar__1_1, (MR_Integer) 0)));
#line 1050 "goal_form.m"
        MR_Word hlds__goal_form__Goals_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__HeadVar__1_1, (MR_Integer) 1)));

#line 1054 "goal_form.m"
        if ((hlds__goal_form__Goals_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1053 "goal_form.m"
          {
#line 1053 "goal_form.m"
            hlds__goal_form__count_recursive_calls_5_p_0(hlds__goal_form__Goal_8, hlds__goal_form__PredId_2, hlds__goal_form__ProcId_3, hlds__goal_form__HeadVar__4_4, hlds__goal_form__HeadVar__5_5);
#line 1053 "goal_form.m"
            return;
          }
#line 1054 "goal_form.m"
        else
#line 1055 "goal_form.m"
          {
#line 1055 "goal_form.m"
            MR_Integer hlds__goal_form__Min0_16;
#line 1055 "goal_form.m"
            MR_Integer hlds__goal_form__Max0_17;
#line 1055 "goal_form.m"
            MR_Integer hlds__goal_form__Min1_18;
#line 1055 "goal_form.m"
            MR_Integer hlds__goal_form__Max1_19;
#line 1055 "goal_form.m"
            MR_Word hlds__goal_form__Goal_22;
#line 1055 "goal_form.m"
            MR_Word hlds__goal_form__Goals_23;

#line 1056 "goal_form.m"
            {
#line 1056 "goal_form.m"
              hlds__goal_form__count_recursive_calls_5_p_0(hlds__goal_form__Goal_8, hlds__goal_form__PredId_2, hlds__goal_form__ProcId_3, &hlds__goal_form__Min0_16, &hlds__goal_form__Max0_17);
            }
#line 1050 "goal_form.m"
            hlds__goal_form__Goal_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__Goals_9, (MR_Integer) 0)));
#line 1050 "goal_form.m"
            hlds__goal_form__Goals_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__Goals_9, (MR_Integer) 1)));
#line 1054 "goal_form.m"
            if ((hlds__goal_form__Goals_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1053 "goal_form.m"
              {
#line 1053 "goal_form.m"
                hlds__goal_form__count_recursive_calls_5_p_0(hlds__goal_form__Goal_22, hlds__goal_form__PredId_2, hlds__goal_form__ProcId_3, &hlds__goal_form__Min1_18, &hlds__goal_form__Max1_19);
              }
#line 1054 "goal_form.m"
            else
#line 1055 "goal_form.m"
              {
#line 1055 "goal_form.m"
                MR_Integer hlds__goal_form__Min0_30;
#line 1055 "goal_form.m"
                MR_Integer hlds__goal_form__Max0_31;
#line 1055 "goal_form.m"
                MR_Integer hlds__goal_form__Min1_32;
#line 1055 "goal_form.m"
                MR_Integer hlds__goal_form__Max1_33;

#line 1056 "goal_form.m"
                {
#line 1056 "goal_form.m"
                  hlds__goal_form__count_recursive_calls_5_p_0(hlds__goal_form__Goal_22, hlds__goal_form__PredId_2, hlds__goal_form__ProcId_3, &hlds__goal_form__Min0_30, &hlds__goal_form__Max0_31);
                }
#line 1057 "goal_form.m"
                {
#line 1057 "goal_form.m"
                  hlds__goal_form__count_recursive_calls_disj_5_p_0(hlds__goal_form__Goals_23, hlds__goal_form__PredId_2, hlds__goal_form__ProcId_3, &hlds__goal_form__Min1_32, &hlds__goal_form__Max1_33);
                }
#line 1058 "goal_form.m"
                {
#line 1058 "goal_form.m"
                  mercury__int__min_3_p_0(hlds__goal_form__Min0_30, hlds__goal_form__Min1_32, &hlds__goal_form__Min1_18);
                }
#line 1059 "goal_form.m"
                {
#line 1059 "goal_form.m"
                  mercury__int__max_3_p_0(hlds__goal_form__Max0_31, hlds__goal_form__Max1_33, &hlds__goal_form__Max1_19);
                }
#line 1055 "goal_form.m"
              }
#line 1058 "goal_form.m"
            {
#line 1058 "goal_form.m"
              mercury__int__min_3_p_0(hlds__goal_form__Min0_16, hlds__goal_form__Min1_18, hlds__goal_form__HeadVar__4_4);
            }
#line 1059 "goal_form.m"
            {
#line 1059 "goal_form.m"
              mercury__int__max_3_p_0(hlds__goal_form__Max0_17, hlds__goal_form__Max1_19, hlds__goal_form__HeadVar__5_5);
#line 1059 "goal_form.m"
              return;
            }
#line 1055 "goal_form.m"
          }
#line 1050 "goal_form.m"
      }
#line 1049 "goal_form.m"
  }
#line 1046 "goal_form.m"
}

#line 1034 "goal_form.m"
static void MR_CALL 
hlds__goal_form__count_recursive_calls_conj_7_p_0(
#line 1034 "goal_form.m"
  MR_Word hlds__goal_form__HeadVar__1_1,
#line 1034 "goal_form.m"
  MR_Word hlds__goal_form__PredId_2,
#line 1034 "goal_form.m"
  MR_Integer hlds__goal_form__ProcId_3,
#line 1034 "goal_form.m"
  MR_Integer hlds__goal_form__HeadVar__4_4,
#line 1034 "goal_form.m"
  MR_Integer hlds__goal_form__HeadVar__5_5,
#line 1034 "goal_form.m"
  MR_Integer * hlds__goal_form__Min_6,
#line 1034 "goal_form.m"
  MR_Integer * hlds__goal_form__Max_7)
#line 1034 "goal_form.m"
{
#line 1037 "goal_form.m"
  while (MR_TRUE)
#line 1037 "goal_form.m"
    {
#line 1037 "goal_form.m"
      /* tailcall optimized into a loop */
#line 1037 "goal_form.m"
      {
#line 1037 "goal_form.m"
        MR_bool hlds__goal_form__succeeded;

#line 1037 "goal_form.m"
        if ((hlds__goal_form__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1037 "goal_form.m"
          {
#line 1037 "goal_form.m"
            *hlds__goal_form__Min_6 = hlds__goal_form__HeadVar__4_4;
#line 1037 "goal_form.m"
            *hlds__goal_form__Max_7 = hlds__goal_form__HeadVar__5_5;
#line 1037 "goal_form.m"
          }
#line 1037 "goal_form.m"
        else
#line 1039 "goal_form.m"
          {
#line 1039 "goal_form.m"
            MR_Word hlds__goal_form__Goal_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__HeadVar__1_1, (MR_Integer) 0)));
#line 1039 "goal_form.m"
            MR_Word hlds__goal_form__Goals_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__HeadVar__1_1, (MR_Integer) 1)));
#line 1039 "goal_form.m"
            MR_Integer hlds__goal_form__Min1_20;
#line 1039 "goal_form.m"
            MR_Integer hlds__goal_form__Max1_21;
#line 1039 "goal_form.m"
            MR_Integer hlds__goal_form__Min2_22;
#line 1039 "goal_form.m"
            MR_Integer hlds__goal_form__Max2_23;

#line 1040 "goal_form.m"
            {
#line 1040 "goal_form.m"
              hlds__goal_form__count_recursive_calls_5_p_0(hlds__goal_form__Goal_12, hlds__goal_form__PredId_2, hlds__goal_form__ProcId_3, &hlds__goal_form__Min1_20, &hlds__goal_form__Max1_21);
            }
#line 1041 "goal_form.m"
            hlds__goal_form__Min2_22 = (hlds__goal_form__HeadVar__4_4 + hlds__goal_form__Min1_20);
#line 1042 "goal_form.m"
            hlds__goal_form__Max2_23 = (hlds__goal_form__HeadVar__5_5 + hlds__goal_form__Max1_21);
#line 1043 "goal_form.m"
            /* direct tailcall eliminated */
#line 1043 "goal_form.m"
            {
#line 1043 "goal_form.m"
              MR_Word hlds__goal_form__HeadVar__1__tmp_copy_1 = hlds__goal_form__Goals_13;
#line 1043 "goal_form.m"
              MR_Integer hlds__goal_form__HeadVar__4__tmp_copy_4 = hlds__goal_form__Min2_22;
#line 1043 "goal_form.m"
              MR_Integer hlds__goal_form__HeadVar__5__tmp_copy_5 = hlds__goal_form__Max2_23;

#line 1043 "goal_form.m"
              hlds__goal_form__HeadVar__5_5 = hlds__goal_form__HeadVar__5__tmp_copy_5;
#line 1043 "goal_form.m"
              hlds__goal_form__HeadVar__4_4 = hlds__goal_form__HeadVar__4__tmp_copy_4;
#line 1043 "goal_form.m"
              hlds__goal_form__HeadVar__1_1 = hlds__goal_form__HeadVar__1__tmp_copy_1;
#line 1043 "goal_form.m"
            }
#line 1043 "goal_form.m"
            continue;
#line 1039 "goal_form.m"
          }
#line 1037 "goal_form.m"
      }
#line 1037 "goal_form.m"
      break;
#line 1037 "goal_form.m"
    }
#line 1034 "goal_form.m"
}

#line 936 "goal_form.m"
static MR_bool MR_CALL 
hlds__goal_form__cannot_fail_before_stack_flush_conj_1_p_0(
#line 936 "goal_form.m"
  MR_Word hlds__goal_form__HeadVar__1_1)
#line 936 "goal_form.m"
{
#line 938 "goal_form.m"
  while (MR_TRUE)
#line 938 "goal_form.m"
    {
#line 938 "goal_form.m"
      /* tailcall optimized into a loop */
#line 938 "goal_form.m"
      {
#line 938 "goal_form.m"
        MR_bool hlds__goal_form__succeeded;

#line 938 "goal_form.m"
        if ((hlds__goal_form__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 938 "goal_form.m"
          hlds__goal_form__succeeded = MR_TRUE;
#line 938 "goal_form.m"
        else
#line 939 "goal_form.m"
          {
#line 939 "goal_form.m"
            MR_Word hlds__goal_form__Goal_2 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__HeadVar__1_1, (MR_Integer) 0)));
#line 939 "goal_form.m"
            MR_Word hlds__goal_form__Goals_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__HeadVar__1_1, (MR_Integer) 1)));
#line 939 "goal_form.m"
            MR_Word hlds__goal_form__GoalExpr_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Goal_2, (MR_Integer) 0)));
#line 939 "goal_form.m"
            MR_Word hlds__goal_form__GoalInfo_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Goal_2, (MR_Integer) 1)));

#line 945 "goal_form.m"
            if (((MR_tag((MR_Word) hlds__goal_form__GoalExpr_4)) == (MR_mktag((MR_Integer) 2))))
#line 943 "goal_form.m"
              {
#line 943 "goal_form.m"
                MR_Word hlds__goal_form__BuiltinState_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__GoalExpr_4, (MR_Integer) 3)));
#line 943 "goal_form.m"
                MR_Word hlds__goal_form__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__GoalExpr_4, (MR_Integer) 0)));
#line 943 "goal_form.m"
                MR_Integer hlds__goal_form__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(2), hlds__goal_form__GoalExpr_4, (MR_Integer) 1)));
#line 943 "goal_form.m"
                MR_Word hlds__goal_form__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__GoalExpr_4, (MR_Integer) 2)));
#line 943 "goal_form.m"
                MR_Word hlds__goal_form__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__GoalExpr_4, (MR_Integer) 4)));
#line 943 "goal_form.m"
                MR_Word hlds__goal_form__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__GoalExpr_4, (MR_Integer) 5)));

#line 944 "goal_form.m"
                hlds__goal_form__succeeded = (hlds__goal_form__BuiltinState_9 == (MR_Integer) 0);
#line 944 "goal_form.m"
                hlds__goal_form__succeeded = !(hlds__goal_form__succeeded);
#line 943 "goal_form.m"
              }
#line 945 "goal_form.m"
            else
#line 945 "goal_form.m"
              if (((((MR_tag((MR_Word) hlds__goal_form__GoalExpr_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_4, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 946 "goal_form.m"
                hlds__goal_form__succeeded = MR_TRUE;
#line 945 "goal_form.m"
              else
#line 945 "goal_form.m"
                hlds__goal_form__succeeded = MR_FALSE;
#line 950 "goal_form.m"
            if (hlds__goal_form__succeeded)
#line 949 "goal_form.m"
              hlds__goal_form__succeeded = MR_TRUE;
#line 950 "goal_form.m"
            else
#line 955 "goal_form.m"
              {
#line 955 "goal_form.m"
                MR_Word hlds__goal_form__Detism_17;
#line 955 "goal_form.m"
                MR_Word hlds__goal_form__V_20_20;
#line 952 "goal_form.m"
                MR_Word hlds__goal_form__V_18_18;

#line 951 "goal_form.m"
                {
#line 951 "goal_form.m"
                  hlds__goal_form__Detism_17 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(hlds__goal_form__GoalInfo_5);
                }
#line 952 "goal_form.m"
                {
#line 952 "goal_form.m"
                  parse_tree__prog_data__determinism_components_3_p_0(hlds__goal_form__Detism_17, &hlds__goal_form__V_20_20, &hlds__goal_form__V_18_18);
                }
#line 952 "goal_form.m"
                hlds__goal_form__succeeded = ((MR_Integer) 1 == hlds__goal_form__V_20_20);
#line 955 "goal_form.m"
                if (hlds__goal_form__succeeded)
#line 954 "goal_form.m"
                  {
#line 954 "goal_form.m"
                    /* direct tailcall eliminated */
#line 954 "goal_form.m"
                    {
#line 954 "goal_form.m"
                      MR_Word hlds__goal_form__HeadVar__1__tmp_copy_1 = hlds__goal_form__Goals_3;

#line 954 "goal_form.m"
                      hlds__goal_form__HeadVar__1_1 = hlds__goal_form__HeadVar__1__tmp_copy_1;
#line 954 "goal_form.m"
                    }
#line 954 "goal_form.m"
                    continue;
#line 954 "goal_form.m"
                  }
#line 955 "goal_form.m"
              }
#line 939 "goal_form.m"
          }
#line 938 "goal_form.m"
        return hlds__goal_form__succeeded;
#line 938 "goal_form.m"
      }
#line 938 "goal_form.m"
      break;
#line 938 "goal_form.m"
    }
#line 936 "goal_form.m"
}

#line 911 "goal_form.m"
static MR_bool MR_CALL 
hlds__goal_form__cannot_stack_flush_cases_1_p_0(
#line 911 "goal_form.m"
  MR_Word hlds__goal_form__HeadVar__1_1)
#line 911 "goal_form.m"
{
#line 913 "goal_form.m"
  while (MR_TRUE)
#line 913 "goal_form.m"
    {
#line 913 "goal_form.m"
      /* tailcall optimized into a loop */
#line 913 "goal_form.m"
      {
#line 913 "goal_form.m"
        MR_bool hlds__goal_form__succeeded;

#line 913 "goal_form.m"
        if ((hlds__goal_form__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 913 "goal_form.m"
          hlds__goal_form__succeeded = MR_TRUE;
#line 913 "goal_form.m"
        else
#line 914 "goal_form.m"
          {
#line 914 "goal_form.m"
            MR_Word hlds__goal_form__Goal_4;
#line 914 "goal_form.m"
            MR_Word hlds__goal_form__Cases_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__HeadVar__1_1, (MR_Integer) 1)));
#line 914 "goal_form.m"
            MR_Word hlds__goal_form__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__HeadVar__1_1, (MR_Integer) 0)));
#line 914 "goal_form.m"
            MR_Word hlds__goal_form__GoalExpr_7;
#line 914 "goal_form.m"
            MR_Word hlds__goal_form__V_2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__V_6_6, (MR_Integer) 0)));
#line 914 "goal_form.m"
            MR_Word hlds__goal_form__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__V_6_6, (MR_Integer) 1)));
#line 887 "goal_form.m"
            MR_Word hlds__goal_form__V_8_8;

#line 914 "goal_form.m"
            hlds__goal_form__Goal_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__V_6_6, (MR_Integer) 2)));
#line 887 "goal_form.m"
            hlds__goal_form__GoalExpr_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Goal_4, (MR_Integer) 0)));
#line 887 "goal_form.m"
            hlds__goal_form__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Goal_4, (MR_Integer) 1)));
#line 888 "goal_form.m"
            {
#line 888 "goal_form.m"
              hlds__goal_form__succeeded = hlds__goal_form__cannot_stack_flush_2_1_p_0(hlds__goal_form__GoalExpr_7);
            }
#line 914 "goal_form.m"
            if (hlds__goal_form__succeeded)
#line 916 "goal_form.m"
              {
#line 916 "goal_form.m"
                /* direct tailcall eliminated */
#line 916 "goal_form.m"
                {
#line 916 "goal_form.m"
                  MR_Word hlds__goal_form__HeadVar__1__tmp_copy_1 = hlds__goal_form__Cases_5;

#line 916 "goal_form.m"
                  hlds__goal_form__HeadVar__1_1 = hlds__goal_form__HeadVar__1__tmp_copy_1;
#line 916 "goal_form.m"
                }
#line 916 "goal_form.m"
                continue;
#line 916 "goal_form.m"
              }
#line 914 "goal_form.m"
          }
#line 913 "goal_form.m"
        return hlds__goal_form__succeeded;
#line 913 "goal_form.m"
      }
#line 913 "goal_form.m"
      break;
#line 913 "goal_form.m"
    }
#line 911 "goal_form.m"
}

#line 904 "goal_form.m"
static MR_bool MR_CALL 
hlds__goal_form__cannot_stack_flush_goals_1_p_0(
#line 904 "goal_form.m"
  MR_Word hlds__goal_form__HeadVar__1_1)
#line 904 "goal_form.m"
{
#line 906 "goal_form.m"
  while (MR_TRUE)
#line 906 "goal_form.m"
    {
#line 906 "goal_form.m"
      /* tailcall optimized into a loop */
#line 906 "goal_form.m"
      {
#line 906 "goal_form.m"
        MR_bool hlds__goal_form__succeeded;

#line 906 "goal_form.m"
        if ((hlds__goal_form__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 906 "goal_form.m"
          hlds__goal_form__succeeded = MR_TRUE;
#line 906 "goal_form.m"
        else
#line 907 "goal_form.m"
          {
#line 907 "goal_form.m"
            MR_Word hlds__goal_form__Goal_2 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__HeadVar__1_1, (MR_Integer) 0)));
#line 907 "goal_form.m"
            MR_Word hlds__goal_form__Goals_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__HeadVar__1_1, (MR_Integer) 1)));
#line 907 "goal_form.m"
            MR_Word hlds__goal_form__GoalExpr_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Goal_2, (MR_Integer) 0)));
#line 887 "goal_form.m"
            MR_Word hlds__goal_form__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Goal_2, (MR_Integer) 1)));

#line 888 "goal_form.m"
            {
#line 888 "goal_form.m"
              hlds__goal_form__succeeded = hlds__goal_form__cannot_stack_flush_2_1_p_0(hlds__goal_form__GoalExpr_4);
            }
#line 907 "goal_form.m"
            if (hlds__goal_form__succeeded)
#line 909 "goal_form.m"
              {
#line 909 "goal_form.m"
                /* direct tailcall eliminated */
#line 909 "goal_form.m"
                {
#line 909 "goal_form.m"
                  MR_Word hlds__goal_form__HeadVar__1__tmp_copy_1 = hlds__goal_form__Goals_3;

#line 909 "goal_form.m"
                  hlds__goal_form__HeadVar__1_1 = hlds__goal_form__HeadVar__1__tmp_copy_1;
#line 909 "goal_form.m"
                }
#line 909 "goal_form.m"
                continue;
#line 909 "goal_form.m"
              }
#line 907 "goal_form.m"
          }
#line 906 "goal_form.m"
        return hlds__goal_form__succeeded;
#line 906 "goal_form.m"
      }
#line 906 "goal_form.m"
      break;
#line 906 "goal_form.m"
    }
#line 904 "goal_form.m"
}

#line 890 "goal_form.m"
static MR_bool MR_CALL 
hlds__goal_form__cannot_stack_flush_2_1_p_0(
#line 890 "goal_form.m"
  MR_Word hlds__goal_form__HeadVar__1_1)
#line 890 "goal_form.m"
{
#line 892 "goal_form.m"
  {
#line 892 "goal_form.m"
    MR_bool hlds__goal_form__succeeded;

#line 892 "goal_form.m"
    if (((MR_tag((MR_Word) hlds__goal_form__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 901 "goal_form.m"
      {
#line 901 "goal_form.m"
        MR_Word hlds__goal_form__Unify_24;
#line 901 "goal_form.m"
        MR_Word hlds__goal_form__V_30_30 = (MR_Word) MR_body(((MR_Word) hlds__goal_form__HeadVar__1_1), (MR_Integer) 0);
#line 901 "goal_form.m"
        MR_Word hlds__goal_form__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__V_30_30, (MR_Integer) 0)));
#line 901 "goal_form.m"
        MR_Word hlds__goal_form__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__V_30_30, (MR_Integer) 1)));
#line 901 "goal_form.m"
        MR_Word hlds__goal_form__V_21_21;
#line 901 "goal_form.m"
        MR_Word hlds__goal_form__V_22_22;
#line 901 "goal_form.m"
        MR_Word hlds__goal_form__V_23_23;
#line 901 "goal_form.m"
        MR_Word hlds__goal_form__V_25_25;
#line 902 "goal_form.m"
        MR_Word hlds__goal_form__V_27_27;
#line 902 "goal_form.m"
        MR_Word hlds__goal_form__V_28_28;
#line 902 "goal_form.m"
        MR_Word hlds__goal_form__V_29_29;

#line 901 "goal_form.m"
        hlds__goal_form__succeeded = ((MR_tag((MR_Word) hlds__goal_form__V_31_31)) == (MR_mktag((MR_Integer) 1)));
#line 901 "goal_form.m"
        if (hlds__goal_form__succeeded)
#line 901 "goal_form.m"
          {
#line 901 "goal_form.m"
            hlds__goal_form__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__V_31_31, (MR_Integer) 0)));
#line 901 "goal_form.m"
            hlds__goal_form__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__V_31_31, (MR_Integer) 1)));
#line 901 "goal_form.m"
            hlds__goal_form__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__V_31_31, (MR_Integer) 2)));
#line 901 "goal_form.m"
            hlds__goal_form__Unify_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__V_31_31, (MR_Integer) 3)));
#line 901 "goal_form.m"
            hlds__goal_form__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__V_31_31, (MR_Integer) 4)));
#line 902 "goal_form.m"
            hlds__goal_form__succeeded = ((((MR_tag((MR_Word) hlds__goal_form__Unify_24)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__Unify_24, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 902 "goal_form.m"
            if (hlds__goal_form__succeeded)
#line 902 "goal_form.m"
              {
#line 902 "goal_form.m"
                hlds__goal_form__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__Unify_24, (MR_Integer) 1)));
#line 902 "goal_form.m"
                hlds__goal_form__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__Unify_24, (MR_Integer) 2)));
#line 902 "goal_form.m"
                hlds__goal_form__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__Unify_24, (MR_Integer) 3)));
#line 902 "goal_form.m"
              }
#line 902 "goal_form.m"
            hlds__goal_form__succeeded = !(hlds__goal_form__succeeded);
#line 901 "goal_form.m"
          }
#line 901 "goal_form.m"
      }
#line 892 "goal_form.m"
    else
#line 892 "goal_form.m"
      if (((MR_tag((MR_Word) hlds__goal_form__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 894 "goal_form.m"
        {
#line 894 "goal_form.m"
          MR_Word hlds__goal_form__BuiltinState_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__HeadVar__1_1, (MR_Integer) 3)));
#line 894 "goal_form.m"
          MR_Word hlds__goal_form__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__HeadVar__1_1, (MR_Integer) 0)));
#line 894 "goal_form.m"
          MR_Integer hlds__goal_form__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(2), hlds__goal_form__HeadVar__1_1, (MR_Integer) 1)));
#line 894 "goal_form.m"
          MR_Word hlds__goal_form__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__HeadVar__1_1, (MR_Integer) 2)));
#line 894 "goal_form.m"
          MR_Word hlds__goal_form__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__HeadVar__1_1, (MR_Integer) 4)));
#line 894 "goal_form.m"
          MR_Word hlds__goal_form__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__HeadVar__1_1, (MR_Integer) 5)));

#line 895 "goal_form.m"
          hlds__goal_form__succeeded = (hlds__goal_form__BuiltinState_13 == (MR_Integer) 0);
#line 894 "goal_form.m"
        }
#line 892 "goal_form.m"
      else
#line 892 "goal_form.m"
        if (((MR_tag((MR_Word) hlds__goal_form__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 892 "goal_form.m"
          {
#line 892 "goal_form.m"
            MR_Word hlds__goal_form__Unify_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__HeadVar__1_1, (MR_Integer) 3)));
#line 892 "goal_form.m"
            MR_Word hlds__goal_form__V_2_2 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__HeadVar__1_1, (MR_Integer) 0)));
#line 892 "goal_form.m"
            MR_Word hlds__goal_form__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__HeadVar__1_1, (MR_Integer) 1)));
#line 892 "goal_form.m"
            MR_Word hlds__goal_form__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__HeadVar__1_1, (MR_Integer) 2)));
#line 892 "goal_form.m"
            MR_Word hlds__goal_form__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__HeadVar__1_1, (MR_Integer) 4)));
#line 893 "goal_form.m"
            MR_Word hlds__goal_form__V_7_7;
#line 893 "goal_form.m"
            MR_Word hlds__goal_form__V_8_8;
#line 893 "goal_form.m"
            MR_Word hlds__goal_form__V_9_9;

#line 893 "goal_form.m"
            hlds__goal_form__succeeded = ((((MR_tag((MR_Word) hlds__goal_form__Unify_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__Unify_5, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 893 "goal_form.m"
            if (hlds__goal_form__succeeded)
#line 893 "goal_form.m"
              {
#line 893 "goal_form.m"
                hlds__goal_form__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__Unify_5, (MR_Integer) 1)));
#line 893 "goal_form.m"
                hlds__goal_form__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__Unify_5, (MR_Integer) 2)));
#line 893 "goal_form.m"
                hlds__goal_form__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__Unify_5, (MR_Integer) 3)));
#line 893 "goal_form.m"
              }
#line 893 "goal_form.m"
            hlds__goal_form__succeeded = !(hlds__goal_form__succeeded);
#line 892 "goal_form.m"
          }
#line 892 "goal_form.m"
        else
#line 892 "goal_form.m"
          if (((((MR_tag((MR_Word) hlds__goal_form__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 896 "goal_form.m"
            {
#line 896 "goal_form.m"
              MR_Word hlds__goal_form__ConjType_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__HeadVar__1_1, (MR_Integer) 1)));
#line 896 "goal_form.m"
              MR_Word hlds__goal_form__Goals_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__HeadVar__1_1, (MR_Integer) 2)));

#line 897 "goal_form.m"
              hlds__goal_form__succeeded = (hlds__goal_form__ConjType_16 == (MR_Integer) 0);
#line 896 "goal_form.m"
              if (hlds__goal_form__succeeded)
#line 898 "goal_form.m"
                {
#line 898 "goal_form.m"
                  return hlds__goal_form__succeeded = hlds__goal_form__cannot_stack_flush_goals_1_p_0(hlds__goal_form__Goals_17);
                }
#line 896 "goal_form.m"
            }
#line 892 "goal_form.m"
          else
#line 892 "goal_form.m"
            if (((((MR_tag((MR_Word) hlds__goal_form__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 899 "goal_form.m"
              {
#line 899 "goal_form.m"
                MR_Word hlds__goal_form__Cases_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__HeadVar__1_1, (MR_Integer) 3)));
#line 899 "goal_form.m"
                MR_Word hlds__goal_form__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__HeadVar__1_1, (MR_Integer) 1)));
#line 899 "goal_form.m"
                MR_Word hlds__goal_form__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__HeadVar__1_1, (MR_Integer) 2)));

#line 900 "goal_form.m"
                {
#line 900 "goal_form.m"
                  return hlds__goal_form__succeeded = hlds__goal_form__cannot_stack_flush_cases_1_p_0(hlds__goal_form__Cases_20);
                }
#line 899 "goal_form.m"
              }
#line 892 "goal_form.m"
            else
#line 892 "goal_form.m"
              hlds__goal_form__succeeded = MR_FALSE;
#line 892 "goal_form.m"
    return hlds__goal_form__succeeded;
#line 892 "goal_form.m"
  }
#line 890 "goal_form.m"
}

#line 875 "goal_form.m"
static void MR_CALL 
hlds__goal_form__cases_may_allocate_heap_2_p_0(
#line 875 "goal_form.m"
  MR_Word hlds__goal_form__HeadVar__1_1,
#line 875 "goal_form.m"
  MR_Word * hlds__goal_form__HeadVar__2_2)
#line 875 "goal_form.m"
{
#line 877 "goal_form.m"
  while (MR_TRUE)
#line 877 "goal_form.m"
    {
#line 877 "goal_form.m"
      /* tailcall optimized into a loop */
#line 877 "goal_form.m"
      {
#line 877 "goal_form.m"
        MR_bool hlds__goal_form__succeeded;

#line 877 "goal_form.m"
        if ((hlds__goal_form__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 877 "goal_form.m"
          *hlds__goal_form__HeadVar__2_2 = (MR_Integer) 0;
#line 877 "goal_form.m"
        else
#line 878 "goal_form.m"
          {
#line 878 "goal_form.m"
            MR_Word hlds__goal_form__Goal_5;
#line 878 "goal_form.m"
            MR_Word hlds__goal_form__Cases_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__HeadVar__1_1, (MR_Integer) 1)));
#line 878 "goal_form.m"
            MR_Word hlds__goal_form__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__HeadVar__1_1, (MR_Integer) 0)));
#line 878 "goal_form.m"
            MR_Word hlds__goal_form__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__V_8_8, (MR_Integer) 0)));
#line 878 "goal_form.m"
            MR_Word hlds__goal_form__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__V_8_8, (MR_Integer) 1)));
#line 879 "goal_form.m"
            MR_Word hlds__goal_form__V_10_10;
#line 879 "goal_form.m"
            MR_Word hlds__goal_form__GoalExpr_12;
#line 766 "goal_form.m"
            MR_Word hlds__goal_form___GoalInfo_13;

#line 878 "goal_form.m"
            hlds__goal_form__Goal_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__V_8_8, (MR_Integer) 2)));
#line 766 "goal_form.m"
            hlds__goal_form__GoalExpr_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Goal_5, (MR_Integer) 0)));
#line 766 "goal_form.m"
            hlds__goal_form___GoalInfo_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Goal_5, (MR_Integer) 1)));
#line 767 "goal_form.m"
            {
#line 767 "goal_form.m"
              hlds__goal_form__goal_may_allocate_heap_2_2_p_0(hlds__goal_form__GoalExpr_12, &hlds__goal_form__V_10_10);
            }
#line 879 "goal_form.m"
            hlds__goal_form__succeeded = ((MR_Integer) 1 == hlds__goal_form__V_10_10);
#line 881 "goal_form.m"
            if (hlds__goal_form__succeeded)
#line 880 "goal_form.m"
              *hlds__goal_form__HeadVar__2_2 = (MR_Integer) 1;
#line 881 "goal_form.m"
            else
#line 882 "goal_form.m"
              {
#line 882 "goal_form.m"
                /* direct tailcall eliminated */
#line 882 "goal_form.m"
                {
#line 882 "goal_form.m"
                  MR_Word hlds__goal_form__HeadVar__1__tmp_copy_1 = hlds__goal_form__Cases_6;

#line 882 "goal_form.m"
                  hlds__goal_form__HeadVar__1_1 = hlds__goal_form__HeadVar__1__tmp_copy_1;
#line 882 "goal_form.m"
                }
#line 882 "goal_form.m"
                continue;
#line 882 "goal_form.m"
              }
#line 878 "goal_form.m"
          }
#line 877 "goal_form.m"
      }
#line 877 "goal_form.m"
      break;
#line 877 "goal_form.m"
    }
#line 875 "goal_form.m"
}

#line 865 "goal_form.m"
static void MR_CALL 
hlds__goal_form__goal_list_may_allocate_heap_2_p_0(
#line 865 "goal_form.m"
  MR_Word hlds__goal_form__HeadVar__1_1,
#line 865 "goal_form.m"
  MR_Word * hlds__goal_form__HeadVar__2_2)
#line 865 "goal_form.m"
{
#line 867 "goal_form.m"
  while (MR_TRUE)
#line 867 "goal_form.m"
    {
#line 867 "goal_form.m"
      /* tailcall optimized into a loop */
#line 867 "goal_form.m"
      {
#line 867 "goal_form.m"
        MR_bool hlds__goal_form__succeeded;

#line 867 "goal_form.m"
        if ((hlds__goal_form__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 867 "goal_form.m"
          *hlds__goal_form__HeadVar__2_2 = (MR_Integer) 0;
#line 867 "goal_form.m"
        else
#line 868 "goal_form.m"
          {
#line 868 "goal_form.m"
            MR_Word hlds__goal_form__Goal_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__HeadVar__1_1, (MR_Integer) 0)));
#line 868 "goal_form.m"
            MR_Word hlds__goal_form__Goals_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__HeadVar__1_1, (MR_Integer) 1)));
#line 869 "goal_form.m"
            MR_Word hlds__goal_form__V_7_7;
#line 869 "goal_form.m"
            MR_Word hlds__goal_form__GoalExpr_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Goal_3, (MR_Integer) 0)));
#line 766 "goal_form.m"
            MR_Word hlds__goal_form___GoalInfo_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Goal_3, (MR_Integer) 1)));

#line 767 "goal_form.m"
            {
#line 767 "goal_form.m"
              hlds__goal_form__goal_may_allocate_heap_2_2_p_0(hlds__goal_form__GoalExpr_9, &hlds__goal_form__V_7_7);
            }
#line 869 "goal_form.m"
            hlds__goal_form__succeeded = ((MR_Integer) 1 == hlds__goal_form__V_7_7);
#line 871 "goal_form.m"
            if (hlds__goal_form__succeeded)
#line 870 "goal_form.m"
              *hlds__goal_form__HeadVar__2_2 = (MR_Integer) 1;
#line 871 "goal_form.m"
            else
#line 872 "goal_form.m"
              {
#line 872 "goal_form.m"
                /* direct tailcall eliminated */
#line 872 "goal_form.m"
                {
#line 872 "goal_form.m"
                  MR_Word hlds__goal_form__HeadVar__1__tmp_copy_1 = hlds__goal_form__Goals_4;

#line 872 "goal_form.m"
                  hlds__goal_form__HeadVar__1_1 = hlds__goal_form__HeadVar__1__tmp_copy_1;
#line 872 "goal_form.m"
                }
#line 872 "goal_form.m"
                continue;
#line 872 "goal_form.m"
              }
#line 868 "goal_form.m"
          }
#line 867 "goal_form.m"
      }
#line 867 "goal_form.m"
      break;
#line 867 "goal_form.m"
    }
#line 865 "goal_form.m"
}

#line 769 "goal_form.m"
static void MR_CALL 
hlds__goal_form__goal_may_allocate_heap_2_2_p_0(
#line 769 "goal_form.m"
  MR_Word hlds__goal_form__GoalExpr_3,
#line 769 "goal_form.m"
  MR_Word * hlds__goal_form__May_4)
#line 769 "goal_form.m"
{
#line 773 "goal_form.m"
  while (MR_TRUE)
#line 773 "goal_form.m"
    {
#line 773 "goal_form.m"
      /* tailcall optimized into a loop */
#line 773 "goal_form.m"
      {
#line 773 "goal_form.m"
        MR_bool hlds__goal_form__succeeded;

#line 773 "goal_form.m"
        if (((MR_tag((MR_Word) hlds__goal_form__GoalExpr_3)) == (MR_mktag((MR_Integer) 0))))
#line 829 "goal_form.m"
          {
#line 829 "goal_form.m"
            MR_Word hlds__goal_form__SubGoal_46 = (MR_Word) MR_body(((MR_Word) hlds__goal_form__GoalExpr_3), (MR_Integer) 0);
#line 829 "goal_form.m"
            MR_Word hlds__goal_form__GoalExpr_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__SubGoal_46, (MR_Integer) 0)));
#line 766 "goal_form.m"
            MR_Word hlds__goal_form___GoalInfo_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__SubGoal_46, (MR_Integer) 1)));

#line 767 "goal_form.m"
            /* direct tailcall eliminated */
#line 767 "goal_form.m"
            {
#line 767 "goal_form.m"
              MR_Word hlds__goal_form__GoalExpr__tmp_copy_3 = hlds__goal_form__GoalExpr_81;

#line 767 "goal_form.m"
              hlds__goal_form__GoalExpr_3 = hlds__goal_form__GoalExpr__tmp_copy_3;
#line 767 "goal_form.m"
            }
#line 767 "goal_form.m"
            continue;
#line 829 "goal_form.m"
          }
#line 773 "goal_form.m"
        else
#line 773 "goal_form.m"
          if (((MR_tag((MR_Word) hlds__goal_form__GoalExpr_3)) == (MR_mktag((MR_Integer) 2))))
#line 783 "goal_form.m"
            {
#line 783 "goal_form.m"
              MR_Word hlds__goal_form__Builtin_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__GoalExpr_3, (MR_Integer) 3)));
#line 783 "goal_form.m"
              MR_Word hlds__goal_form__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__GoalExpr_3, (MR_Integer) 0)));
#line 783 "goal_form.m"
              MR_Integer hlds__goal_form__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(2), hlds__goal_form__GoalExpr_3, (MR_Integer) 1)));
#line 783 "goal_form.m"
              MR_Word hlds__goal_form__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__GoalExpr_3, (MR_Integer) 2)));
#line 783 "goal_form.m"
              MR_Word hlds__goal_form__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__GoalExpr_3, (MR_Integer) 4)));
#line 783 "goal_form.m"
              MR_Word hlds__goal_form__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__GoalExpr_3, (MR_Integer) 5)));

#line 787 "goal_form.m"
              if ((hlds__goal_form__Builtin_22 == (MR_Integer) 0))
#line 786 "goal_form.m"
                *hlds__goal_form__May_4 = (MR_Integer) 0;
#line 787 "goal_form.m"
              else
#line 791 "goal_form.m"
                *hlds__goal_form__May_4 = (MR_Integer) 1;
#line 783 "goal_form.m"
            }
#line 773 "goal_form.m"
          else
#line 773 "goal_form.m"
            if (((MR_tag((MR_Word) hlds__goal_form__GoalExpr_3)) == (MR_mktag((MR_Integer) 1))))
#line 773 "goal_form.m"
              {
#line 773 "goal_form.m"
                MR_Word hlds__goal_form__Unification_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__GoalExpr_3, (MR_Integer) 3)));
#line 773 "goal_form.m"
                MR_Word hlds__goal_form__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__GoalExpr_3, (MR_Integer) 0)));
#line 773 "goal_form.m"
                MR_Word hlds__goal_form__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__GoalExpr_3, (MR_Integer) 1)));
#line 773 "goal_form.m"
                MR_Word hlds__goal_form__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__GoalExpr_3, (MR_Integer) 2)));
#line 773 "goal_form.m"
                MR_Word hlds__goal_form__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__GoalExpr_3, (MR_Integer) 4)));
#line 775 "goal_form.m"
                MR_Word hlds__goal_form__Args_12;
#line 775 "goal_form.m"
                MR_Word hlds__goal_form__V_10_10;
#line 775 "goal_form.m"
                MR_Word hlds__goal_form__V_11_11;
#line 775 "goal_form.m"
                MR_Word hlds__goal_form__V_13_13;
#line 775 "goal_form.m"
                MR_Word hlds__goal_form__V_14_14;
#line 775 "goal_form.m"
                MR_Word hlds__goal_form__V_15_15;
#line 775 "goal_form.m"
                MR_Word hlds__goal_form__V_16_16;
#line 776 "goal_form.m"
                MR_Word hlds__goal_form__V_17_17;
#line 776 "goal_form.m"
                MR_Word hlds__goal_form__V_18_18;

#line 775 "goal_form.m"
                hlds__goal_form__succeeded = ((MR_tag((MR_Word) hlds__goal_form__Unification_8)) == (MR_mktag((MR_Integer) 0)));
#line 775 "goal_form.m"
                if (hlds__goal_form__succeeded)
#line 775 "goal_form.m"
                  {
#line 775 "goal_form.m"
                    hlds__goal_form__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Unification_8, (MR_Integer) 0)));
#line 775 "goal_form.m"
                    hlds__goal_form__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Unification_8, (MR_Integer) 1)));
#line 775 "goal_form.m"
                    hlds__goal_form__Args_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Unification_8, (MR_Integer) 2)));
#line 775 "goal_form.m"
                    hlds__goal_form__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Unification_8, (MR_Integer) 3)));
#line 775 "goal_form.m"
                    hlds__goal_form__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Unification_8, (MR_Integer) 4)));
#line 775 "goal_form.m"
                    hlds__goal_form__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Unification_8, (MR_Integer) 5)));
#line 775 "goal_form.m"
                    hlds__goal_form__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Unification_8, (MR_Integer) 6)));
#line 776 "goal_form.m"
                    hlds__goal_form__succeeded = ((MR_tag((MR_Word) hlds__goal_form__Args_12)) == (MR_mktag((MR_Integer) 1)));
#line 776 "goal_form.m"
                    if (hlds__goal_form__succeeded)
#line 776 "goal_form.m"
                      {
#line 776 "goal_form.m"
                        hlds__goal_form__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__Args_12, (MR_Integer) 0)));
#line 776 "goal_form.m"
                        hlds__goal_form__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__Args_12, (MR_Integer) 1)));
#line 776 "goal_form.m"
                      }
#line 775 "goal_form.m"
                  }
#line 779 "goal_form.m"
                if (hlds__goal_form__succeeded)
#line 778 "goal_form.m"
                  *hlds__goal_form__May_4 = (MR_Integer) 1;
#line 779 "goal_form.m"
                else
#line 780 "goal_form.m"
                  *hlds__goal_form__May_4 = (MR_Integer) 0;
#line 773 "goal_form.m"
              }
#line 773 "goal_form.m"
            else
#line 773 "goal_form.m"
              if (((((MR_tag((MR_Word) hlds__goal_form__GoalExpr_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 803 "goal_form.m"
                *hlds__goal_form__May_4 = (MR_Integer) 1;
#line 773 "goal_form.m"
              else
#line 773 "goal_form.m"
                if (((((MR_tag((MR_Word) hlds__goal_form__GoalExpr_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 805 "goal_form.m"
                  {
#line 805 "goal_form.m"
                    MR_Word hlds__goal_form__ConjType_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_3, (MR_Integer) 1)));
#line 805 "goal_form.m"
                    MR_Word hlds__goal_form__Goals_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_3, (MR_Integer) 2)));

#line 809 "goal_form.m"
                    if ((hlds__goal_form__ConjType_37 == (MR_Integer) 1))
#line 808 "goal_form.m"
                      *hlds__goal_form__May_4 = (MR_Integer) 1;
#line 809 "goal_form.m"
                    else
#line 811 "goal_form.m"
                      {
#line 811 "goal_form.m"
                        hlds__goal_form__goal_list_may_allocate_heap_2_p_0(hlds__goal_form__Goals_38, hlds__goal_form__May_4);
#line 811 "goal_form.m"
                        return;
                      }
#line 805 "goal_form.m"
                  }
#line 773 "goal_form.m"
                else
#line 773 "goal_form.m"
                  if (((((MR_tag((MR_Word) hlds__goal_form__GoalExpr_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_3, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 814 "goal_form.m"
                    {
#line 814 "goal_form.m"
                      MR_Word hlds__goal_form__Goals_66 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_3, (MR_Integer) 1)));

#line 815 "goal_form.m"
                      {
#line 815 "goal_form.m"
                        hlds__goal_form__goal_list_may_allocate_heap_2_p_0(hlds__goal_form__Goals_66, hlds__goal_form__May_4);
#line 815 "goal_form.m"
                        return;
                      }
#line 814 "goal_form.m"
                    }
#line 773 "goal_form.m"
                  else
#line 773 "goal_form.m"
                    if (((((MR_tag((MR_Word) hlds__goal_form__GoalExpr_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 795 "goal_form.m"
                      *hlds__goal_form__May_4 = (MR_Integer) 1;
#line 773 "goal_form.m"
                    else
#line 773 "goal_form.m"
                      if (((((MR_tag((MR_Word) hlds__goal_form__GoalExpr_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_3, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 820 "goal_form.m"
                        {
#line 820 "goal_form.m"
                          MR_Word hlds__goal_form__Cond_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_3, (MR_Integer) 2)));
#line 820 "goal_form.m"
                          MR_Word hlds__goal_form__Then_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_3, (MR_Integer) 3)));
#line 820 "goal_form.m"
                          MR_Word hlds__goal_form__Else_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_3, (MR_Integer) 4)));
#line 820 "goal_form.m"
                          MR_Word hlds__goal_form___Vars_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_3, (MR_Integer) 1)));
#line 821 "goal_form.m"
                          MR_Word hlds__goal_form__V_68_68;
#line 821 "goal_form.m"
                          MR_Word hlds__goal_form__GoalExpr_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Cond_43, (MR_Integer) 0)));
#line 766 "goal_form.m"
                          MR_Word hlds__goal_form___GoalInfo_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Cond_43, (MR_Integer) 1)));

#line 767 "goal_form.m"
                          {
#line 767 "goal_form.m"
                            hlds__goal_form__goal_may_allocate_heap_2_2_p_0(hlds__goal_form__GoalExpr_72, &hlds__goal_form__V_68_68);
                          }
#line 821 "goal_form.m"
                          hlds__goal_form__succeeded = ((MR_Integer) 1 == hlds__goal_form__V_68_68);
#line 823 "goal_form.m"
                          if (hlds__goal_form__succeeded)
#line 822 "goal_form.m"
                            *hlds__goal_form__May_4 = (MR_Integer) 1;
#line 823 "goal_form.m"
                          else
#line 825 "goal_form.m"
                            {
#line 823 "goal_form.m"
                              MR_Word hlds__goal_form__V_69_69;
#line 823 "goal_form.m"
                              MR_Word hlds__goal_form__GoalExpr_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Then_44, (MR_Integer) 0)));
#line 766 "goal_form.m"
                              MR_Word hlds__goal_form___GoalInfo_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Then_44, (MR_Integer) 1)));

#line 767 "goal_form.m"
                              {
#line 767 "goal_form.m"
                                hlds__goal_form__goal_may_allocate_heap_2_2_p_0(hlds__goal_form__GoalExpr_75, &hlds__goal_form__V_69_69);
                              }
#line 823 "goal_form.m"
                              hlds__goal_form__succeeded = ((MR_Integer) 1 == hlds__goal_form__V_69_69);
#line 825 "goal_form.m"
                              if (hlds__goal_form__succeeded)
#line 824 "goal_form.m"
                                *hlds__goal_form__May_4 = (MR_Integer) 1;
#line 825 "goal_form.m"
                              else
#line 766 "goal_form.m"
                                {
#line 766 "goal_form.m"
                                  MR_Word hlds__goal_form__GoalExpr_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Else_45, (MR_Integer) 0)));
#line 766 "goal_form.m"
                                  MR_Word hlds__goal_form___GoalInfo_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Else_45, (MR_Integer) 1)));

#line 767 "goal_form.m"
                                  /* direct tailcall eliminated */
#line 767 "goal_form.m"
                                  {
#line 767 "goal_form.m"
                                    MR_Word hlds__goal_form__GoalExpr__tmp_copy_3 = hlds__goal_form__GoalExpr_78;

#line 767 "goal_form.m"
                                    hlds__goal_form__GoalExpr_3 = hlds__goal_form__GoalExpr__tmp_copy_3;
#line 767 "goal_form.m"
                                  }
#line 767 "goal_form.m"
                                  continue;
#line 766 "goal_form.m"
                                }
#line 825 "goal_form.m"
                            }
#line 820 "goal_form.m"
                        }
#line 773 "goal_form.m"
                      else
#line 773 "goal_form.m"
                        if (((((MR_tag((MR_Word) hlds__goal_form__GoalExpr_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_3, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 832 "goal_form.m"
                          {
#line 832 "goal_form.m"
                            MR_Word hlds__goal_form__Reason_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_3, (MR_Integer) 1)));
#line 832 "goal_form.m"
                            MR_Word hlds__goal_form__SubGoal_67 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_3, (MR_Integer) 2)));
#line 834 "goal_form.m"
                            MR_Word hlds__goal_form__FGT_49;
#line 834 "goal_form.m"
                            MR_Word hlds__goal_form__V_48_48;

#line 834 "goal_form.m"
                            hlds__goal_form__succeeded = ((((MR_tag((MR_Word) hlds__goal_form__Reason_47)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__Reason_47, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 834 "goal_form.m"
                            if (hlds__goal_form__succeeded)
#line 834 "goal_form.m"
                              {
#line 834 "goal_form.m"
                                hlds__goal_form__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__Reason_47, (MR_Integer) 1)));
#line 834 "goal_form.m"
                                hlds__goal_form__FGT_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__Reason_47, (MR_Integer) 2)));
#line 836 "goal_form.m"
                                if ((hlds__goal_form__FGT_49 == (MR_Integer) 1))
#line 835 "goal_form.m"
                                  hlds__goal_form__succeeded = MR_TRUE;
#line 836 "goal_form.m"
                                else
#line 836 "goal_form.m"
                                  if ((hlds__goal_form__FGT_49 == (MR_Integer) 2))
#line 836 "goal_form.m"
                                    hlds__goal_form__succeeded = MR_TRUE;
#line 836 "goal_form.m"
                                  else
#line 836 "goal_form.m"
                                    hlds__goal_form__succeeded = MR_FALSE;
#line 834 "goal_form.m"
                              }
#line 845 "goal_form.m"
                            if (hlds__goal_form__succeeded)
#line 844 "goal_form.m"
                              *hlds__goal_form__May_4 = (MR_Integer) 1;
#line 845 "goal_form.m"
                            else
#line 766 "goal_form.m"
                              {
#line 766 "goal_form.m"
                                MR_Word hlds__goal_form__GoalExpr_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__SubGoal_67, (MR_Integer) 0)));
#line 766 "goal_form.m"
                                MR_Word hlds__goal_form___GoalInfo_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__SubGoal_67, (MR_Integer) 1)));

#line 767 "goal_form.m"
                                /* direct tailcall eliminated */
#line 767 "goal_form.m"
                                {
#line 767 "goal_form.m"
                                  MR_Word hlds__goal_form__GoalExpr__tmp_copy_3 = hlds__goal_form__GoalExpr_84;

#line 767 "goal_form.m"
                                  hlds__goal_form__GoalExpr_3 = hlds__goal_form__GoalExpr__tmp_copy_3;
#line 767 "goal_form.m"
                                }
#line 767 "goal_form.m"
                                continue;
#line 766 "goal_form.m"
                              }
#line 832 "goal_form.m"
                          }
#line 773 "goal_form.m"
                        else
#line 773 "goal_form.m"
                          if (((((MR_tag((MR_Word) hlds__goal_form__GoalExpr_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_3, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 849 "goal_form.m"
                            {
#line 849 "goal_form.m"
                              MR_Word hlds__goal_form__ShortHand_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_3, (MR_Integer) 1)));

#line 855 "goal_form.m"
                              if (((MR_tag((MR_Word) hlds__goal_form__ShortHand_50)) == (MR_mktag((MR_Integer) 0))))
#line 856 "goal_form.m"
                                {
#line 856 "goal_form.m"
                                  MR_Word hlds__goal_form__GoalA_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__ShortHand_50, (MR_Integer) 0)));
#line 856 "goal_form.m"
                                  MR_Word hlds__goal_form__GoalB_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__ShortHand_50, (MR_Integer) 1)));
#line 857 "goal_form.m"
                                  MR_Word hlds__goal_form__V_70_70;
#line 857 "goal_form.m"
                                  MR_Word hlds__goal_form__GoalExpr_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__GoalA_61, (MR_Integer) 0)));
#line 766 "goal_form.m"
                                  MR_Word hlds__goal_form___GoalInfo_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__GoalA_61, (MR_Integer) 1)));

#line 767 "goal_form.m"
                                  {
#line 767 "goal_form.m"
                                    hlds__goal_form__goal_may_allocate_heap_2_2_p_0(hlds__goal_form__GoalExpr_87, &hlds__goal_form__V_70_70);
                                  }
#line 857 "goal_form.m"
                                  hlds__goal_form__succeeded = ((MR_Integer) 1 == hlds__goal_form__V_70_70);
#line 859 "goal_form.m"
                                  if (hlds__goal_form__succeeded)
#line 858 "goal_form.m"
                                    *hlds__goal_form__May_4 = (MR_Integer) 1;
#line 859 "goal_form.m"
                                  else
#line 766 "goal_form.m"
                                    {
#line 766 "goal_form.m"
                                      MR_Word hlds__goal_form__GoalExpr_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__GoalB_62, (MR_Integer) 0)));
#line 766 "goal_form.m"
                                      MR_Word hlds__goal_form___GoalInfo_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__GoalB_62, (MR_Integer) 1)));

#line 767 "goal_form.m"
                                      /* direct tailcall eliminated */
#line 767 "goal_form.m"
                                      {
#line 767 "goal_form.m"
                                        MR_Word hlds__goal_form__GoalExpr__tmp_copy_3 = hlds__goal_form__GoalExpr_90;

#line 767 "goal_form.m"
                                        hlds__goal_form__GoalExpr_3 = hlds__goal_form__GoalExpr__tmp_copy_3;
#line 767 "goal_form.m"
                                      }
#line 767 "goal_form.m"
                                      continue;
#line 766 "goal_form.m"
                                    }
#line 856 "goal_form.m"
                                }
#line 855 "goal_form.m"
                              else
#line 854 "goal_form.m"
                                *hlds__goal_form__May_4 = (MR_Integer) 1;
#line 849 "goal_form.m"
                            }
#line 773 "goal_form.m"
                          else
#line 817 "goal_form.m"
                            {
#line 817 "goal_form.m"
                              MR_Word hlds__goal_form__Cases_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_3, (MR_Integer) 3)));
#line 817 "goal_form.m"
                              MR_Word hlds__goal_form___Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_3, (MR_Integer) 1)));
#line 817 "goal_form.m"
                              MR_Word hlds__goal_form___CanFail_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_3, (MR_Integer) 2)));

#line 818 "goal_form.m"
                              {
#line 818 "goal_form.m"
                                hlds__goal_form__cases_may_allocate_heap_2_p_0(hlds__goal_form__Cases_41, hlds__goal_form__May_4);
#line 818 "goal_form.m"
                                return;
                              }
#line 817 "goal_form.m"
                            }
#line 773 "goal_form.m"
      }
#line 773 "goal_form.m"
      break;
#line 773 "goal_form.m"
    }
#line 769 "goal_form.m"
}

#line 746 "goal_form.m"
static MR_Word MR_CALL 
hlds__goal_form__goal_is_flat_list_1_f_0(
#line 746 "goal_form.m"
  MR_Word hlds__goal_form__HeadVar__1_1)
#line 746 "goal_form.m"
{
#line 748 "goal_form.m"
  while (MR_TRUE)
#line 748 "goal_form.m"
    {
#line 748 "goal_form.m"
      /* tailcall optimized into a loop */
#line 748 "goal_form.m"
      {
#line 748 "goal_form.m"
        MR_bool hlds__goal_form__succeeded;
#line 748 "goal_form.m"
        MR_Word hlds__goal_form__HeadVar__2_2;

#line 748 "goal_form.m"
        if ((hlds__goal_form__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 748 "goal_form.m"
          hlds__goal_form__HeadVar__2_2 = (MR_Integer) 1;
#line 748 "goal_form.m"
        else
#line 749 "goal_form.m"
          {
#line 749 "goal_form.m"
            MR_Word hlds__goal_form__Goal_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__HeadVar__1_1, (MR_Integer) 0)));
#line 749 "goal_form.m"
            MR_Word hlds__goal_form__Goals_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__HeadVar__1_1, (MR_Integer) 1)));
#line 750 "goal_form.m"
            MR_Word hlds__goal_form__V_6_6;
#line 750 "goal_form.m"
            MR_Word hlds__goal_form__GoalExpr_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Goal_3, (MR_Integer) 0)));
#line 701 "goal_form.m"
            MR_Word hlds__goal_form___GoalInfo_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Goal_3, (MR_Integer) 1)));

#line 701 "goal_form.m"
            {
#line 701 "goal_form.m"
              hlds__goal_form__V_6_6 = hlds__goal_form__goal_is_flat_expr_1_f_0(hlds__goal_form__GoalExpr_7);
            }
#line 750 "goal_form.m"
            hlds__goal_form__succeeded = (hlds__goal_form__V_6_6 == (MR_Integer) 1);
#line 752 "goal_form.m"
            if (hlds__goal_form__succeeded)
#line 751 "goal_form.m"
              {
#line 751 "goal_form.m"
                /* direct tailcall eliminated */
#line 751 "goal_form.m"
                {
#line 751 "goal_form.m"
                  MR_Word hlds__goal_form__HeadVar__1__tmp_copy_1 = hlds__goal_form__Goals_4;

#line 751 "goal_form.m"
                  hlds__goal_form__HeadVar__1_1 = hlds__goal_form__HeadVar__1__tmp_copy_1;
#line 751 "goal_form.m"
                }
#line 751 "goal_form.m"
                continue;
#line 751 "goal_form.m"
              }
#line 752 "goal_form.m"
            else
#line 753 "goal_form.m"
              hlds__goal_form__HeadVar__2_2 = (MR_Integer) 0;
#line 749 "goal_form.m"
          }
#line 748 "goal_form.m"
        return hlds__goal_form__HeadVar__2_2;
#line 748 "goal_form.m"
      }
#line 748 "goal_form.m"
      break;
#line 748 "goal_form.m"
    }
#line 746 "goal_form.m"
}

#line 703 "goal_form.m"
static MR_Word MR_CALL 
hlds__goal_form__goal_is_flat_expr_1_f_0(
#line 703 "goal_form.m"
  MR_Word hlds__goal_form__GoalExpr_3)
#line 703 "goal_form.m"
{
#line 711 "goal_form.m"
  while (MR_TRUE)
#line 711 "goal_form.m"
    {
#line 711 "goal_form.m"
      /* tailcall optimized into a loop */
#line 711 "goal_form.m"
      {
#line 711 "goal_form.m"
        MR_bool hlds__goal_form__succeeded;
#line 711 "goal_form.m"
        MR_Word hlds__goal_form__IsFlat_4;

#line 711 "goal_form.m"
        if (((MR_tag((MR_Word) hlds__goal_form__GoalExpr_3)) == (MR_mktag((MR_Integer) 0))))
#line 730 "goal_form.m"
          {
#line 730 "goal_form.m"
            MR_Word hlds__goal_form__SubGoal_39 = (MR_Word) MR_body(((MR_Word) hlds__goal_form__GoalExpr_3), (MR_Integer) 0);
#line 730 "goal_form.m"
            MR_Word hlds__goal_form__GoalExpr_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__SubGoal_39, (MR_Integer) 0)));
#line 701 "goal_form.m"
            MR_Word hlds__goal_form___GoalInfo_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__SubGoal_39, (MR_Integer) 1)));

#line 701 "goal_form.m"
            /* direct tailcall eliminated */
#line 701 "goal_form.m"
            {
#line 701 "goal_form.m"
              MR_Word hlds__goal_form__GoalExpr__tmp_copy_3 = hlds__goal_form__GoalExpr_44;

#line 701 "goal_form.m"
              hlds__goal_form__GoalExpr_3 = hlds__goal_form__GoalExpr__tmp_copy_3;
#line 701 "goal_form.m"
            }
#line 701 "goal_form.m"
            continue;
#line 730 "goal_form.m"
          }
#line 711 "goal_form.m"
        else
#line 711 "goal_form.m"
          if (((((MR_tag((MR_Word) hlds__goal_form__GoalExpr_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 714 "goal_form.m"
            {
#line 714 "goal_form.m"
              MR_Word hlds__goal_form__ConjType_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_3, (MR_Integer) 1)));
#line 714 "goal_form.m"
              MR_Word hlds__goal_form__Goals_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_3, (MR_Integer) 2)));

#line 718 "goal_form.m"
              if ((hlds__goal_form__ConjType_28 == (MR_Integer) 1))
#line 717 "goal_form.m"
                hlds__goal_form__IsFlat_4 = (MR_Integer) 0;
#line 718 "goal_form.m"
              else
#line 720 "goal_form.m"
                {
#line 720 "goal_form.m"
                  return hlds__goal_form__IsFlat_4 = hlds__goal_form__goal_is_flat_list_1_f_0(hlds__goal_form__Goals_29);
                }
#line 714 "goal_form.m"
            }
#line 711 "goal_form.m"
          else
#line 711 "goal_form.m"
            if (((((MR_tag((MR_Word) hlds__goal_form__GoalExpr_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_3, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 733 "goal_form.m"
              {
#line 733 "goal_form.m"
                MR_Word hlds__goal_form__Reason_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_3, (MR_Integer) 1)));
#line 733 "goal_form.m"
                MR_Word hlds__goal_form__SubGoal_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_3, (MR_Integer) 2)));
#line 735 "goal_form.m"
                MR_Word hlds__goal_form__FGT_42;
#line 735 "goal_form.m"
                MR_Word hlds__goal_form__V_41_41;

#line 735 "goal_form.m"
                hlds__goal_form__succeeded = ((((MR_tag((MR_Word) hlds__goal_form__Reason_40)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__Reason_40, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 735 "goal_form.m"
                if (hlds__goal_form__succeeded)
#line 735 "goal_form.m"
                  {
#line 735 "goal_form.m"
                    hlds__goal_form__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__Reason_40, (MR_Integer) 1)));
#line 735 "goal_form.m"
                    hlds__goal_form__FGT_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__Reason_40, (MR_Integer) 2)));
#line 737 "goal_form.m"
                    if ((hlds__goal_form__FGT_42 == (MR_Integer) 1))
#line 736 "goal_form.m"
                      hlds__goal_form__succeeded = MR_TRUE;
#line 737 "goal_form.m"
                    else
#line 737 "goal_form.m"
                      if ((hlds__goal_form__FGT_42 == (MR_Integer) 2))
#line 737 "goal_form.m"
                        hlds__goal_form__succeeded = MR_TRUE;
#line 737 "goal_form.m"
                      else
#line 737 "goal_form.m"
                        hlds__goal_form__succeeded = MR_FALSE;
#line 735 "goal_form.m"
                  }
#line 741 "goal_form.m"
                if (hlds__goal_form__succeeded)
#line 740 "goal_form.m"
                  hlds__goal_form__IsFlat_4 = (MR_Integer) 1;
#line 741 "goal_form.m"
                else
#line 701 "goal_form.m"
                  {
#line 701 "goal_form.m"
                    MR_Word hlds__goal_form__GoalExpr_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__SubGoal_43, (MR_Integer) 0)));
#line 701 "goal_form.m"
                    MR_Word hlds__goal_form___GoalInfo_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__SubGoal_43, (MR_Integer) 1)));

#line 701 "goal_form.m"
                    /* direct tailcall eliminated */
#line 701 "goal_form.m"
                    {
#line 701 "goal_form.m"
                      MR_Word hlds__goal_form__GoalExpr__tmp_copy_3 = hlds__goal_form__GoalExpr_46;

#line 701 "goal_form.m"
                      hlds__goal_form__GoalExpr_3 = hlds__goal_form__GoalExpr__tmp_copy_3;
#line 701 "goal_form.m"
                    }
#line 701 "goal_form.m"
                    continue;
#line 701 "goal_form.m"
                  }
#line 733 "goal_form.m"
              }
#line 711 "goal_form.m"
            else
#line 711 "goal_form.m"
              if (((((((((((MR_tag((MR_Word) hlds__goal_form__GoalExpr_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_3, (MR_Integer) 0)))) == (MR_Integer) 1)))) || (((((MR_tag((MR_Word) hlds__goal_form__GoalExpr_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_3, (MR_Integer) 0)))) == (MR_Integer) 0)))))) || (((MR_tag((MR_Word) hlds__goal_form__GoalExpr_3)) == (MR_mktag((MR_Integer) 2)))))) || (((MR_tag((MR_Word) hlds__goal_form__GoalExpr_3)) == (MR_mktag((MR_Integer) 1))))))
#line 712 "goal_form.m"
                hlds__goal_form__IsFlat_4 = (MR_Integer) 1;
#line 711 "goal_form.m"
              else
#line 728 "goal_form.m"
                hlds__goal_form__IsFlat_4 = (MR_Integer) 0;
#line 711 "goal_form.m"
        return hlds__goal_form__IsFlat_4;
#line 711 "goal_form.m"
      }
#line 711 "goal_form.m"
      break;
#line 711 "goal_form.m"
    }
#line 703 "goal_form.m"
}

#line 689 "goal_form.m"
static MR_Word MR_CALL 
hlds__goal_form__case_list_can_throw_2_f_0(
#line 689 "goal_form.m"
  MR_Word hlds__goal_form__MaybeModuleInfo_1,
#line 689 "goal_form.m"
  MR_Word hlds__goal_form__HeadVar__2_2)
#line 689 "goal_form.m"
{
#line 691 "goal_form.m"
  while (MR_TRUE)
#line 691 "goal_form.m"
    {
#line 691 "goal_form.m"
      /* tailcall optimized into a loop */
#line 691 "goal_form.m"
      {
#line 691 "goal_form.m"
        MR_bool hlds__goal_form__succeeded;
#line 691 "goal_form.m"
        MR_Word hlds__goal_form__HeadVar__3_3;

#line 691 "goal_form.m"
        if ((hlds__goal_form__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 691 "goal_form.m"
          hlds__goal_form__HeadVar__3_3 = (MR_Integer) 0;
#line 691 "goal_form.m"
        else
#line 692 "goal_form.m"
          {
#line 692 "goal_form.m"
            MR_Word hlds__goal_form__Goal_8;
#line 692 "goal_form.m"
            MR_Word hlds__goal_form__Cases_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__HeadVar__2_2, (MR_Integer) 1)));
#line 692 "goal_form.m"
            MR_Word hlds__goal_form__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__HeadVar__2_2, (MR_Integer) 0)));
#line 692 "goal_form.m"
            MR_Word hlds__goal_form__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__V_10_10, (MR_Integer) 0)));
#line 692 "goal_form.m"
            MR_Word hlds__goal_form__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__V_10_10, (MR_Integer) 1)));
#line 693 "goal_form.m"
            MR_Word hlds__goal_form__GoalExpr_14;
#line 693 "goal_form.m"
            MR_Word hlds__goal_form__GoalInfo_15;
#line 693 "goal_form.m"
            MR_Word hlds__goal_form__Determinism_16;

#line 692 "goal_form.m"
            hlds__goal_form__Goal_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__V_10_10, (MR_Integer) 2)));
#line 572 "goal_form.m"
            hlds__goal_form__GoalExpr_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Goal_8, (MR_Integer) 0)));
#line 572 "goal_form.m"
            hlds__goal_form__GoalInfo_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Goal_8, (MR_Integer) 1)));
#line 574 "goal_form.m"
            {
#line 574 "goal_form.m"
              hlds__goal_form__Determinism_16 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(hlds__goal_form__GoalInfo_15);
            }
#line 575 "goal_form.m"
            hlds__goal_form__succeeded = (hlds__goal_form__Determinism_16 == (MR_Integer) 6);
#line 577 "goal_form.m"
            if (hlds__goal_form__succeeded)
#line 576 "goal_form.m"
              hlds__goal_form__succeeded = MR_TRUE;
#line 577 "goal_form.m"
            else
#line 578 "goal_form.m"
              {
#line 578 "goal_form.m"
                MR_Word hlds__goal_form__V_18_18;

#line 578 "goal_form.m"
                {
#line 578 "goal_form.m"
                  hlds__goal_form__V_18_18 = hlds__goal_form__goal_expr_can_throw_2_f_0(hlds__goal_form__MaybeModuleInfo_1, hlds__goal_form__GoalExpr_14);
                }
#line 693 "goal_form.m"
                hlds__goal_form__succeeded = (hlds__goal_form__V_18_18 == (MR_Integer) 1);
#line 578 "goal_form.m"
              }
#line 692 "goal_form.m"
            if (hlds__goal_form__succeeded)
#line 694 "goal_form.m"
              hlds__goal_form__HeadVar__3_3 = (MR_Integer) 1;
#line 692 "goal_form.m"
            else
#line 696 "goal_form.m"
              {
#line 696 "goal_form.m"
                /* direct tailcall eliminated */
#line 696 "goal_form.m"
                {
#line 696 "goal_form.m"
                  MR_Word hlds__goal_form__HeadVar__2__tmp_copy_2 = hlds__goal_form__Cases_9;

#line 696 "goal_form.m"
                  hlds__goal_form__HeadVar__2_2 = hlds__goal_form__HeadVar__2__tmp_copy_2;
#line 696 "goal_form.m"
                }
#line 696 "goal_form.m"
                continue;
#line 696 "goal_form.m"
              }
#line 692 "goal_form.m"
          }
#line 691 "goal_form.m"
        return hlds__goal_form__HeadVar__3_3;
#line 691 "goal_form.m"
      }
#line 691 "goal_form.m"
      break;
#line 691 "goal_form.m"
    }
#line 689 "goal_form.m"
}

#line 679 "goal_form.m"
static MR_Word MR_CALL 
hlds__goal_form__goal_list_can_throw_2_f_0(
#line 679 "goal_form.m"
  MR_Word hlds__goal_form__MaybeModuleInfo_1,
#line 679 "goal_form.m"
  MR_Word hlds__goal_form__HeadVar__2_2)
#line 679 "goal_form.m"
{
#line 681 "goal_form.m"
  while (MR_TRUE)
#line 681 "goal_form.m"
    {
#line 681 "goal_form.m"
      /* tailcall optimized into a loop */
#line 681 "goal_form.m"
      {
#line 681 "goal_form.m"
        MR_bool hlds__goal_form__succeeded;
#line 681 "goal_form.m"
        MR_Word hlds__goal_form__HeadVar__3_3;

#line 681 "goal_form.m"
        if ((hlds__goal_form__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 681 "goal_form.m"
          hlds__goal_form__HeadVar__3_3 = (MR_Integer) 0;
#line 681 "goal_form.m"
        else
#line 682 "goal_form.m"
          {
#line 682 "goal_form.m"
            MR_Word hlds__goal_form__Goal_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__HeadVar__2_2, (MR_Integer) 0)));
#line 682 "goal_form.m"
            MR_Word hlds__goal_form__Goals_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__HeadVar__2_2, (MR_Integer) 1)));
#line 683 "goal_form.m"
            MR_Word hlds__goal_form__GoalExpr_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Goal_6, (MR_Integer) 0)));
#line 683 "goal_form.m"
            MR_Word hlds__goal_form__GoalInfo_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Goal_6, (MR_Integer) 1)));
#line 683 "goal_form.m"
            MR_Word hlds__goal_form__Determinism_13;

#line 574 "goal_form.m"
            {
#line 574 "goal_form.m"
              hlds__goal_form__Determinism_13 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(hlds__goal_form__GoalInfo_12);
            }
#line 575 "goal_form.m"
            hlds__goal_form__succeeded = (hlds__goal_form__Determinism_13 == (MR_Integer) 6);
#line 577 "goal_form.m"
            if (hlds__goal_form__succeeded)
#line 576 "goal_form.m"
              hlds__goal_form__succeeded = MR_TRUE;
#line 577 "goal_form.m"
            else
#line 578 "goal_form.m"
              {
#line 578 "goal_form.m"
                MR_Word hlds__goal_form__V_15_15;

#line 578 "goal_form.m"
                {
#line 578 "goal_form.m"
                  hlds__goal_form__V_15_15 = hlds__goal_form__goal_expr_can_throw_2_f_0(hlds__goal_form__MaybeModuleInfo_1, hlds__goal_form__GoalExpr_11);
                }
#line 683 "goal_form.m"
                hlds__goal_form__succeeded = (hlds__goal_form__V_15_15 == (MR_Integer) 1);
#line 578 "goal_form.m"
              }
#line 682 "goal_form.m"
            if (hlds__goal_form__succeeded)
#line 684 "goal_form.m"
              hlds__goal_form__HeadVar__3_3 = (MR_Integer) 1;
#line 682 "goal_form.m"
            else
#line 686 "goal_form.m"
              {
#line 686 "goal_form.m"
                /* direct tailcall eliminated */
#line 686 "goal_form.m"
                {
#line 686 "goal_form.m"
                  MR_Word hlds__goal_form__HeadVar__2__tmp_copy_2 = hlds__goal_form__Goals_7;

#line 686 "goal_form.m"
                  hlds__goal_form__HeadVar__2_2 = hlds__goal_form__HeadVar__2__tmp_copy_2;
#line 686 "goal_form.m"
                }
#line 686 "goal_form.m"
                continue;
#line 686 "goal_form.m"
              }
#line 682 "goal_form.m"
          }
#line 681 "goal_form.m"
        return hlds__goal_form__HeadVar__3_3;
#line 681 "goal_form.m"
      }
#line 681 "goal_form.m"
      break;
#line 681 "goal_form.m"
    }
#line 679 "goal_form.m"
}

#line 581 "goal_form.m"
static MR_Word MR_CALL 
hlds__goal_form__goal_expr_can_throw_2_f_0(
#line 581 "goal_form.m"
  MR_Word hlds__goal_form__MaybeModuleInfo_4,
#line 581 "goal_form.m"
  MR_Word hlds__goal_form__GoalExpr_5)
#line 581 "goal_form.m"
{
#line 585 "goal_form.m"
  {
#line 585 "goal_form.m"
    MR_bool hlds__goal_form__succeeded;
#line 585 "goal_form.m"
    MR_Word hlds__goal_form__CanThrow_6;

#line 585 "goal_form.m"
    if (((MR_tag((MR_Word) hlds__goal_form__GoalExpr_5)) == (MR_mktag((MR_Integer) 0))))
#line 649 "goal_form.m"
      {
#line 649 "goal_form.m"
        MR_Word hlds__goal_form__SubGoal_64 = (MR_Word) MR_body(((MR_Word) hlds__goal_form__GoalExpr_5), (MR_Integer) 0);

#line 650 "goal_form.m"
        {
#line 650 "goal_form.m"
          return hlds__goal_form__CanThrow_6 = hlds__goal_form__goal_can_throw_func_2_f_0(hlds__goal_form__MaybeModuleInfo_4, hlds__goal_form__SubGoal_64);
        }
#line 649 "goal_form.m"
      }
#line 585 "goal_form.m"
    else
#line 585 "goal_form.m"
      if (((MR_tag((MR_Word) hlds__goal_form__GoalExpr_5)) == (MR_mktag((MR_Integer) 2))))
#line 600 "goal_form.m"
        {
#line 600 "goal_form.m"
          MR_Word hlds__goal_form__PredId_32 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__GoalExpr_5, (MR_Integer) 0)));
#line 600 "goal_form.m"
          MR_Integer hlds__goal_form__ProcId_33 = ((MR_Integer) (MR_hl_field(MR_mktag(2), hlds__goal_form__GoalExpr_5, (MR_Integer) 1)));
#line 600 "goal_form.m"
          MR_Word hlds__goal_form__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__GoalExpr_5, (MR_Integer) 2)));
#line 600 "goal_form.m"
          MR_Word hlds__goal_form__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__GoalExpr_5, (MR_Integer) 3)));
#line 600 "goal_form.m"
          MR_Word hlds__goal_form__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__GoalExpr_5, (MR_Integer) 4)));
#line 600 "goal_form.m"
          MR_Word hlds__goal_form__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__GoalExpr_5, (MR_Integer) 5)));
#line 602 "goal_form.m"
          MR_Word hlds__goal_form__TypeCtorInfo_90_90;
#line 602 "goal_form.m"
          MR_Word hlds__goal_form__TypeCtorInfo_91_91;
#line 602 "goal_form.m"
          MR_Word hlds__goal_form__ModuleInfo_38;
#line 602 "goal_form.m"
          MR_Word hlds__goal_form__ExceptionInfo_39;
#line 602 "goal_form.m"
          MR_Word hlds__goal_form__ProcExceptionInfo_40;
#line 602 "goal_form.m"
          MR_Word hlds__goal_form__V_87_87;
#line 602 "goal_form.m"
          MR_Word hlds__goal_form__V_88_88;
#line 604 "goal_form.m"
          MR_Box hlds__goal_form__conv0_ProcExceptionInfo_40;
#line 605 "goal_form.m"
          MR_Word hlds__goal_form__V_41_41;

#line 602 "goal_form.m"
          hlds__goal_form__succeeded = ((MR_tag((MR_Word) hlds__goal_form__MaybeModuleInfo_4)) == (MR_mktag((MR_Integer) 1)));
#line 602 "goal_form.m"
          if (hlds__goal_form__succeeded)
#line 602 "goal_form.m"
            {
#line 602 "goal_form.m"
              hlds__goal_form__ModuleInfo_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__MaybeModuleInfo_4, (MR_Integer) 0)));
#line 603 "goal_form.m"
              {
#line 603 "goal_form.m"
                hlds__hlds_module__module_info_get_exception_info_2_p_0(hlds__goal_form__ModuleInfo_38, &hlds__goal_form__ExceptionInfo_39);
              }
#line 3902 "hlds.goal_form.c"
              hlds__goal_form__TypeCtorInfo_90_90 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
#line 3904 "hlds.goal_form.c"
              hlds__goal_form__TypeCtorInfo_91_91 = (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_proc_exception_info_0;
#line 604 "goal_form.m"
              {
#line 604 "goal_form.m"
                hlds__goal_form__V_87_87 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 604 "goal_form.m"
                MR_hl_field(MR_mktag(0), hlds__goal_form__V_87_87, 0) = ((MR_Box) (hlds__goal_form__PredId_32));
#line 604 "goal_form.m"
                MR_hl_field(MR_mktag(0), hlds__goal_form__V_87_87, 1) = ((MR_Box) (hlds__goal_form__ProcId_33));
#line 604 "goal_form.m"
              }
#line 604 "goal_form.m"
              {
#line 604 "goal_form.m"
                hlds__goal_form__succeeded = mercury__map__search_3_p_0(hlds__goal_form__TypeCtorInfo_90_90, hlds__goal_form__TypeCtorInfo_91_91, hlds__goal_form__ExceptionInfo_39, ((MR_Box) (hlds__goal_form__V_87_87)), &hlds__goal_form__conv0_ProcExceptionInfo_40);
              }
#line 604 "goal_form.m"
              if (hlds__goal_form__succeeded)
#line 604 "goal_form.m"
                {
#line 604 "goal_form.m"
                  hlds__goal_form__ProcExceptionInfo_40 = ((MR_Word) hlds__goal_form__conv0_ProcExceptionInfo_40);
#line 604 "goal_form.m"
                  hlds__goal_form__succeeded = MR_TRUE;
#line 604 "goal_form.m"
                }
#line 602 "goal_form.m"
              if (hlds__goal_form__succeeded)
#line 602 "goal_form.m"
                {
#line 605 "goal_form.m"
                  hlds__goal_form__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__ProcExceptionInfo_40, (MR_Integer) 0)));
#line 605 "goal_form.m"
                  hlds__goal_form__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__ProcExceptionInfo_40, (MR_Integer) 1)));
#line 605 "goal_form.m"
                  hlds__goal_form__succeeded = (hlds__goal_form__V_88_88 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 602 "goal_form.m"
                }
#line 602 "goal_form.m"
            }
#line 608 "goal_form.m"
          if (hlds__goal_form__succeeded)
#line 607 "goal_form.m"
            hlds__goal_form__CanThrow_6 = (MR_Integer) 0;
#line 608 "goal_form.m"
          else
#line 609 "goal_form.m"
            hlds__goal_form__CanThrow_6 = (MR_Integer) 1;
#line 600 "goal_form.m"
        }
#line 585 "goal_form.m"
      else
#line 585 "goal_form.m"
        if (((MR_tag((MR_Word) hlds__goal_form__GoalExpr_5)) == (MR_mktag((MR_Integer) 1))))
#line 585 "goal_form.m"
          {
#line 585 "goal_form.m"
            MR_Word hlds__goal_form__Uni_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__GoalExpr_5, (MR_Integer) 3)));
#line 585 "goal_form.m"
            MR_Word hlds__goal_form__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__GoalExpr_5, (MR_Integer) 0)));
#line 585 "goal_form.m"
            MR_Word hlds__goal_form__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__GoalExpr_5, (MR_Integer) 1)));
#line 585 "goal_form.m"
            MR_Word hlds__goal_form__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__GoalExpr_5, (MR_Integer) 2)));
#line 585 "goal_form.m"
            MR_Word hlds__goal_form__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__GoalExpr_5, (MR_Integer) 4)));

#line 593 "goal_form.m"
            if (((((MR_tag((MR_Word) hlds__goal_form__Uni_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__Uni_10, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 597 "goal_form.m"
              hlds__goal_form__CanThrow_6 = (MR_Integer) 1;
#line 593 "goal_form.m"
            else
#line 592 "goal_form.m"
              hlds__goal_form__CanThrow_6 = (MR_Integer) 0;
#line 585 "goal_form.m"
          }
#line 585 "goal_form.m"
        else
#line 585 "goal_form.m"
          if (((((MR_tag((MR_Word) hlds__goal_form__GoalExpr_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_5, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 612 "goal_form.m"
            {
#line 612 "goal_form.m"
              MR_Word hlds__goal_form__Attributes_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_5, (MR_Integer) 1)));
#line 612 "goal_form.m"
              MR_Word hlds__goal_form__ExceptionStatus_49;
#line 612 "goal_form.m"
              MR_Word hlds__goal_form__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_5, (MR_Integer) 2)));
#line 612 "goal_form.m"
              MR_Integer hlds__goal_form__V_44_44 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_5, (MR_Integer) 3)));
#line 612 "goal_form.m"
              MR_Word hlds__goal_form__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_5, (MR_Integer) 4)));
#line 612 "goal_form.m"
              MR_Word hlds__goal_form__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_5, (MR_Integer) 5)));
#line 612 "goal_form.m"
              MR_Word hlds__goal_form__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_5, (MR_Integer) 6)));
#line 612 "goal_form.m"
              MR_Word hlds__goal_form__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_5, (MR_Integer) 7)));

#line 613 "goal_form.m"
              {
#line 613 "goal_form.m"
                hlds__goal_form__ExceptionStatus_49 = parse_tree__prog_data__get_may_throw_exception_1_f_0(hlds__goal_form__Attributes_42);
              }
#line 617 "goal_form.m"
              if ((hlds__goal_form__ExceptionStatus_49 == (MR_Integer) 1))
#line 618 "goal_form.m"
                {
#line 618 "goal_form.m"
                  MR_Word hlds__goal_form__V_86_86;

#line 619 "goal_form.m"
                  {
#line 619 "goal_form.m"
                    hlds__goal_form__V_86_86 = parse_tree__prog_data__get_may_call_mercury_1_f_0(hlds__goal_form__Attributes_42);
                  }
#line 619 "goal_form.m"
                  hlds__goal_form__succeeded = (hlds__goal_form__V_86_86 == (MR_Integer) 1);
#line 618 "goal_form.m"
                }
#line 617 "goal_form.m"
              else
#line 616 "goal_form.m"
                hlds__goal_form__succeeded = MR_TRUE;
#line 623 "goal_form.m"
              if (hlds__goal_form__succeeded)
#line 622 "goal_form.m"
                hlds__goal_form__CanThrow_6 = (MR_Integer) 0;
#line 623 "goal_form.m"
              else
#line 624 "goal_form.m"
                hlds__goal_form__CanThrow_6 = (MR_Integer) 1;
#line 612 "goal_form.m"
            }
#line 585 "goal_form.m"
          else
#line 585 "goal_form.m"
            if (((((MR_tag((MR_Word) hlds__goal_form__GoalExpr_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_5, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 634 "goal_form.m"
              {
#line 634 "goal_form.m"
                MR_Word hlds__goal_form__Goals_56 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_5, (MR_Integer) 2)));
#line 632 "goal_form.m"
                MR_Word hlds__goal_form___ConjType_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_5, (MR_Integer) 1)));

#line 635 "goal_form.m"
                {
#line 635 "goal_form.m"
                  return hlds__goal_form__CanThrow_6 = hlds__goal_form__goal_list_can_throw_2_f_0(hlds__goal_form__MaybeModuleInfo_4, hlds__goal_form__Goals_56);
                }
#line 634 "goal_form.m"
              }
#line 585 "goal_form.m"
            else
#line 585 "goal_form.m"
              if (((((MR_tag((MR_Word) hlds__goal_form__GoalExpr_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_5, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 634 "goal_form.m"
                {
#line 634 "goal_form.m"
                  MR_Word hlds__goal_form__Goals_92 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_5, (MR_Integer) 1)));

#line 635 "goal_form.m"
                  {
#line 635 "goal_form.m"
                    return hlds__goal_form__CanThrow_6 = hlds__goal_form__goal_list_can_throw_2_f_0(hlds__goal_form__MaybeModuleInfo_4, hlds__goal_form__Goals_92);
                  }
#line 634 "goal_form.m"
                }
#line 585 "goal_form.m"
              else
#line 585 "goal_form.m"
                if (((((MR_tag((MR_Word) hlds__goal_form__GoalExpr_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_5, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 630 "goal_form.m"
                  hlds__goal_form__CanThrow_6 = (MR_Integer) 1;
#line 585 "goal_form.m"
                else
#line 585 "goal_form.m"
                  if (((((MR_tag((MR_Word) hlds__goal_form__GoalExpr_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_5, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 640 "goal_form.m"
                    {
#line 640 "goal_form.m"
                      MR_Word hlds__goal_form__Cond_61 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_5, (MR_Integer) 2)));
#line 640 "goal_form.m"
                      MR_Word hlds__goal_form__Then_62 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_5, (MR_Integer) 3)));
#line 640 "goal_form.m"
                      MR_Word hlds__goal_form__Else_63 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_5, (MR_Integer) 4)));
#line 640 "goal_form.m"
                      MR_Word hlds__goal_form__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_5, (MR_Integer) 1)));
#line 641 "goal_form.m"
                      MR_Word hlds__goal_form__GoalExpr_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Cond_61, (MR_Integer) 0)));
#line 641 "goal_form.m"
                      MR_Word hlds__goal_form__GoalInfo_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Cond_61, (MR_Integer) 1)));
#line 641 "goal_form.m"
                      MR_Word hlds__goal_form__Determinism_97;

#line 574 "goal_form.m"
                      {
#line 574 "goal_form.m"
                        hlds__goal_form__Determinism_97 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(hlds__goal_form__GoalInfo_96);
                      }
#line 575 "goal_form.m"
                      hlds__goal_form__succeeded = (hlds__goal_form__Determinism_97 == (MR_Integer) 6);
#line 577 "goal_form.m"
                      if (hlds__goal_form__succeeded)
#line 576 "goal_form.m"
                        hlds__goal_form__succeeded = MR_TRUE;
#line 577 "goal_form.m"
                      else
#line 578 "goal_form.m"
                        {
#line 578 "goal_form.m"
                          MR_Word hlds__goal_form__V_99_99;

#line 578 "goal_form.m"
                          {
#line 578 "goal_form.m"
                            hlds__goal_form__V_99_99 = hlds__goal_form__goal_expr_can_throw_2_f_0(hlds__goal_form__MaybeModuleInfo_4, hlds__goal_form__GoalExpr_95);
                          }
#line 641 "goal_form.m"
                          hlds__goal_form__succeeded = (hlds__goal_form__V_99_99 == (MR_Integer) 1);
#line 578 "goal_form.m"
                        }
#line 643 "goal_form.m"
                      if (hlds__goal_form__succeeded)
#line 642 "goal_form.m"
                        hlds__goal_form__CanThrow_6 = (MR_Integer) 1;
#line 643 "goal_form.m"
                      else
#line 645 "goal_form.m"
                        {
#line 643 "goal_form.m"
                          MR_Word hlds__goal_form__V_85_85;

#line 643 "goal_form.m"
                          {
#line 643 "goal_form.m"
                            hlds__goal_form__V_85_85 = hlds__goal_form__goal_can_throw_func_2_f_0(hlds__goal_form__MaybeModuleInfo_4, hlds__goal_form__Then_62);
                          }
#line 643 "goal_form.m"
                          hlds__goal_form__succeeded = (hlds__goal_form__V_85_85 == (MR_Integer) 1);
#line 645 "goal_form.m"
                          if (hlds__goal_form__succeeded)
#line 644 "goal_form.m"
                            hlds__goal_form__CanThrow_6 = (MR_Integer) 1;
#line 645 "goal_form.m"
                          else
#line 646 "goal_form.m"
                            {
#line 646 "goal_form.m"
                              return hlds__goal_form__CanThrow_6 = hlds__goal_form__goal_can_throw_func_2_f_0(hlds__goal_form__MaybeModuleInfo_4, hlds__goal_form__Else_63);
                            }
#line 645 "goal_form.m"
                        }
#line 640 "goal_form.m"
                    }
#line 585 "goal_form.m"
                  else
#line 585 "goal_form.m"
                    if (((((MR_tag((MR_Word) hlds__goal_form__GoalExpr_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_5, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 652 "goal_form.m"
                      {
#line 652 "goal_form.m"
                        MR_Word hlds__goal_form__Reason_65 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_5, (MR_Integer) 1)));
#line 652 "goal_form.m"
                        MR_Word hlds__goal_form__SubGoal_89 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_5, (MR_Integer) 2)));
#line 654 "goal_form.m"
                        MR_Word hlds__goal_form__FGT_67;
#line 654 "goal_form.m"
                        MR_Word hlds__goal_form__V_66_66;

#line 654 "goal_form.m"
                        hlds__goal_form__succeeded = ((((MR_tag((MR_Word) hlds__goal_form__Reason_65)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__Reason_65, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 654 "goal_form.m"
                        if (hlds__goal_form__succeeded)
#line 654 "goal_form.m"
                          {
#line 654 "goal_form.m"
                            hlds__goal_form__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__Reason_65, (MR_Integer) 1)));
#line 654 "goal_form.m"
                            hlds__goal_form__FGT_67 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__Reason_65, (MR_Integer) 2)));
#line 656 "goal_form.m"
                            if ((hlds__goal_form__FGT_67 == (MR_Integer) 1))
#line 655 "goal_form.m"
                              hlds__goal_form__succeeded = MR_TRUE;
#line 656 "goal_form.m"
                            else
#line 656 "goal_form.m"
                              if ((hlds__goal_form__FGT_67 == (MR_Integer) 2))
#line 656 "goal_form.m"
                                hlds__goal_form__succeeded = MR_TRUE;
#line 656 "goal_form.m"
                              else
#line 656 "goal_form.m"
                                hlds__goal_form__succeeded = MR_FALSE;
#line 654 "goal_form.m"
                          }
#line 662 "goal_form.m"
                        if (hlds__goal_form__succeeded)
#line 661 "goal_form.m"
                          hlds__goal_form__CanThrow_6 = (MR_Integer) 0;
#line 662 "goal_form.m"
                        else
#line 663 "goal_form.m"
                          {
#line 663 "goal_form.m"
                            return hlds__goal_form__CanThrow_6 = hlds__goal_form__goal_can_throw_func_2_f_0(hlds__goal_form__MaybeModuleInfo_4, hlds__goal_form__SubGoal_89);
                          }
#line 652 "goal_form.m"
                      }
#line 585 "goal_form.m"
                    else
#line 585 "goal_form.m"
                      if (((((MR_tag((MR_Word) hlds__goal_form__GoalExpr_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_5, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 666 "goal_form.m"
                        {
#line 666 "goal_form.m"
                          MR_Word hlds__goal_form__ShortHand_68 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_5, (MR_Integer) 1)));

#line 670 "goal_form.m"
                          if (((MR_tag((MR_Word) hlds__goal_form__ShortHand_68)) == (MR_mktag((MR_Integer) 1))))
#line 669 "goal_form.m"
                            hlds__goal_form__CanThrow_6 = (MR_Integer) 1;
#line 670 "goal_form.m"
                          else
#line 670 "goal_form.m"
                            if (((MR_tag((MR_Word) hlds__goal_form__ShortHand_68)) == (MR_mktag((MR_Integer) 0))))
#line 674 "goal_form.m"
                              {
#line 675 "goal_form.m"
                                {
#line 675 "goal_form.m"
                                  mercury__require__unexpected_3_p_0((MR_String) "hlds.goal_form", (MR_String) "function \140hlds.goal_form.goal_expr_can_throw\'/2", (MR_String) "bi_implication");
                                }
#line 674 "goal_form.m"
                              }
#line 670 "goal_form.m"
                            else
#line 672 "goal_form.m"
                              hlds__goal_form__CanThrow_6 = (MR_Integer) 1;
#line 666 "goal_form.m"
                        }
#line 585 "goal_form.m"
                      else
#line 637 "goal_form.m"
                        {
#line 637 "goal_form.m"
                          MR_Word hlds__goal_form__Cases_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_5, (MR_Integer) 3)));
#line 637 "goal_form.m"
                          MR_Word hlds__goal_form___Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_5, (MR_Integer) 1)));
#line 637 "goal_form.m"
                          MR_Word hlds__goal_form___CanFail_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_5, (MR_Integer) 2)));

#line 638 "goal_form.m"
                          {
#line 638 "goal_form.m"
                            return hlds__goal_form__CanThrow_6 = hlds__goal_form__case_list_can_throw_2_f_0(hlds__goal_form__MaybeModuleInfo_4, hlds__goal_form__Cases_59);
                          }
#line 637 "goal_form.m"
                        }
#line 585 "goal_form.m"
    return hlds__goal_form__CanThrow_6;
#line 585 "goal_form.m"
  }
#line 581 "goal_form.m"
}

#line 570 "goal_form.m"
static MR_Word MR_CALL 
hlds__goal_form__goal_can_throw_func_2_f_0(
#line 570 "goal_form.m"
  MR_Word hlds__goal_form__MaybeModuleInfo_4,
#line 570 "goal_form.m"
  MR_Word hlds__goal_form__HeadVar__2_2)
#line 570 "goal_form.m"
{
#line 573 "goal_form.m"
  {
#line 573 "goal_form.m"
    MR_bool hlds__goal_form__succeeded;
#line 573 "goal_form.m"
    MR_Word hlds__goal_form__CanThrow_7;
#line 573 "goal_form.m"
    MR_Word hlds__goal_form__GoalExpr_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__HeadVar__2_2, (MR_Integer) 0)));
#line 573 "goal_form.m"
    MR_Word hlds__goal_form__GoalInfo_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__HeadVar__2_2, (MR_Integer) 1)));
#line 573 "goal_form.m"
    MR_Word hlds__goal_form__Determinism_8;

#line 574 "goal_form.m"
    {
#line 574 "goal_form.m"
      hlds__goal_form__Determinism_8 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(hlds__goal_form__GoalInfo_6);
    }
#line 575 "goal_form.m"
    hlds__goal_form__succeeded = (hlds__goal_form__Determinism_8 == (MR_Integer) 6);
#line 577 "goal_form.m"
    if (hlds__goal_form__succeeded)
#line 576 "goal_form.m"
      hlds__goal_form__CanThrow_7 = (MR_Integer) 1;
#line 577 "goal_form.m"
    else
#line 578 "goal_form.m"
      {
#line 578 "goal_form.m"
        return hlds__goal_form__CanThrow_7 = hlds__goal_form__goal_expr_can_throw_2_f_0(hlds__goal_form__MaybeModuleInfo_4, hlds__goal_form__GoalExpr_5);
      }
#line 573 "goal_form.m"
    return hlds__goal_form__CanThrow_7;
#line 573 "goal_form.m"
  }
#line 570 "goal_form.m"
}

#line 558 "goal_form.m"
static MR_Word MR_CALL 
hlds__goal_form__case_list_can_loop_2_f_0(
#line 558 "goal_form.m"
  MR_Word hlds__goal_form__MaybeModuleInfo_1,
#line 558 "goal_form.m"
  MR_Word hlds__goal_form__HeadVar__2_2)
#line 558 "goal_form.m"
{
#line 560 "goal_form.m"
  while (MR_TRUE)
#line 560 "goal_form.m"
    {
#line 560 "goal_form.m"
      /* tailcall optimized into a loop */
#line 560 "goal_form.m"
      {
#line 560 "goal_form.m"
        MR_bool hlds__goal_form__succeeded;
#line 560 "goal_form.m"
        MR_Word hlds__goal_form__HeadVar__3_3;

#line 560 "goal_form.m"
        if ((hlds__goal_form__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 560 "goal_form.m"
          hlds__goal_form__HeadVar__3_3 = (MR_Integer) 0;
#line 560 "goal_form.m"
        else
#line 561 "goal_form.m"
          {
#line 561 "goal_form.m"
            MR_Word hlds__goal_form__Goal_8;
#line 561 "goal_form.m"
            MR_Word hlds__goal_form__Cases_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__HeadVar__2_2, (MR_Integer) 1)));
#line 561 "goal_form.m"
            MR_Word hlds__goal_form__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__HeadVar__2_2, (MR_Integer) 0)));
#line 561 "goal_form.m"
            MR_Word hlds__goal_form__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__V_10_10, (MR_Integer) 0)));
#line 561 "goal_form.m"
            MR_Word hlds__goal_form__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__V_10_10, (MR_Integer) 1)));
#line 562 "goal_form.m"
            MR_Word hlds__goal_form__V_11_11;

#line 561 "goal_form.m"
            hlds__goal_form__Goal_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__V_10_10, (MR_Integer) 2)));
#line 562 "goal_form.m"
            {
#line 562 "goal_form.m"
              hlds__goal_form__V_11_11 = hlds__goal_form__goal_can_loop_func_2_f_0(hlds__goal_form__MaybeModuleInfo_1, hlds__goal_form__Goal_8);
            }
#line 562 "goal_form.m"
            hlds__goal_form__succeeded = (hlds__goal_form__V_11_11 == (MR_Integer) 1);
#line 561 "goal_form.m"
            if (hlds__goal_form__succeeded)
#line 563 "goal_form.m"
              hlds__goal_form__HeadVar__3_3 = (MR_Integer) 1;
#line 561 "goal_form.m"
            else
#line 565 "goal_form.m"
              {
#line 565 "goal_form.m"
                /* direct tailcall eliminated */
#line 565 "goal_form.m"
                {
#line 565 "goal_form.m"
                  MR_Word hlds__goal_form__HeadVar__2__tmp_copy_2 = hlds__goal_form__Cases_9;

#line 565 "goal_form.m"
                  hlds__goal_form__HeadVar__2_2 = hlds__goal_form__HeadVar__2__tmp_copy_2;
#line 565 "goal_form.m"
                }
#line 565 "goal_form.m"
                continue;
#line 565 "goal_form.m"
              }
#line 561 "goal_form.m"
          }
#line 560 "goal_form.m"
        return hlds__goal_form__HeadVar__3_3;
#line 560 "goal_form.m"
      }
#line 560 "goal_form.m"
      break;
#line 560 "goal_form.m"
    }
#line 558 "goal_form.m"
}

#line 548 "goal_form.m"
static MR_Word MR_CALL 
hlds__goal_form__goal_list_can_loop_2_f_0(
#line 548 "goal_form.m"
  MR_Word hlds__goal_form__MaybeModuleInfo_1,
#line 548 "goal_form.m"
  MR_Word hlds__goal_form__HeadVar__2_2)
#line 548 "goal_form.m"
{
#line 550 "goal_form.m"
  while (MR_TRUE)
#line 550 "goal_form.m"
    {
#line 550 "goal_form.m"
      /* tailcall optimized into a loop */
#line 550 "goal_form.m"
      {
#line 550 "goal_form.m"
        MR_bool hlds__goal_form__succeeded;
#line 550 "goal_form.m"
        MR_Word hlds__goal_form__HeadVar__3_3;

#line 550 "goal_form.m"
        if ((hlds__goal_form__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 550 "goal_form.m"
          hlds__goal_form__HeadVar__3_3 = (MR_Integer) 0;
#line 550 "goal_form.m"
        else
#line 551 "goal_form.m"
          {
#line 551 "goal_form.m"
            MR_Word hlds__goal_form__Goal_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__HeadVar__2_2, (MR_Integer) 0)));
#line 551 "goal_form.m"
            MR_Word hlds__goal_form__Goals_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__HeadVar__2_2, (MR_Integer) 1)));
#line 552 "goal_form.m"
            MR_Word hlds__goal_form__V_8_8;

#line 552 "goal_form.m"
            {
#line 552 "goal_form.m"
              hlds__goal_form__V_8_8 = hlds__goal_form__goal_can_loop_func_2_f_0(hlds__goal_form__MaybeModuleInfo_1, hlds__goal_form__Goal_6);
            }
#line 552 "goal_form.m"
            hlds__goal_form__succeeded = (hlds__goal_form__V_8_8 == (MR_Integer) 1);
#line 551 "goal_form.m"
            if (hlds__goal_form__succeeded)
#line 553 "goal_form.m"
              hlds__goal_form__HeadVar__3_3 = (MR_Integer) 1;
#line 551 "goal_form.m"
            else
#line 555 "goal_form.m"
              {
#line 555 "goal_form.m"
                /* direct tailcall eliminated */
#line 555 "goal_form.m"
                {
#line 555 "goal_form.m"
                  MR_Word hlds__goal_form__HeadVar__2__tmp_copy_2 = hlds__goal_form__Goals_7;

#line 555 "goal_form.m"
                  hlds__goal_form__HeadVar__2_2 = hlds__goal_form__HeadVar__2__tmp_copy_2;
#line 555 "goal_form.m"
                }
#line 555 "goal_form.m"
                continue;
#line 555 "goal_form.m"
              }
#line 551 "goal_form.m"
          }
#line 550 "goal_form.m"
        return hlds__goal_form__HeadVar__3_3;
#line 550 "goal_form.m"
      }
#line 550 "goal_form.m"
      break;
#line 550 "goal_form.m"
    }
#line 548 "goal_form.m"
}

#line 434 "goal_form.m"
static MR_Word MR_CALL 
hlds__goal_form__goal_can_loop_func_2_f_0(
#line 434 "goal_form.m"
  MR_Word hlds__goal_form__MaybeModuleInfo_4,
#line 434 "goal_form.m"
  MR_Word hlds__goal_form__Goal_5)
#line 434 "goal_form.m"
{
#line 436 "goal_form.m"
  while (MR_TRUE)
#line 436 "goal_form.m"
    {
#line 436 "goal_form.m"
      /* tailcall optimized into a loop */
#line 436 "goal_form.m"
      {
#line 436 "goal_form.m"
        MR_bool hlds__goal_form__succeeded;
#line 436 "goal_form.m"
        MR_Word hlds__goal_form__CanLoop_6;
#line 436 "goal_form.m"
        MR_Word hlds__goal_form__GoalExpr_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Goal_5, (MR_Integer) 0)));
#line 437 "goal_form.m"
        MR_Word hlds__goal_form__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Goal_5, (MR_Integer) 1)));

#line 453 "goal_form.m"
        if (((MR_tag((MR_Word) hlds__goal_form__GoalExpr_7)) == (MR_mktag((MR_Integer) 0))))
#line 516 "goal_form.m"
          {
#line 516 "goal_form.m"
            MR_Word hlds__goal_form__SubGoal_69 = (MR_Word) MR_body(((MR_Word) hlds__goal_form__GoalExpr_7), (MR_Integer) 0);

#line 517 "goal_form.m"
            /* direct tailcall eliminated */
#line 517 "goal_form.m"
            {
#line 517 "goal_form.m"
              MR_Word hlds__goal_form__Goal__tmp_copy_5 = hlds__goal_form__SubGoal_69;

#line 517 "goal_form.m"
              hlds__goal_form__Goal_5 = hlds__goal_form__Goal__tmp_copy_5;
#line 517 "goal_form.m"
            }
#line 517 "goal_form.m"
            continue;
#line 516 "goal_form.m"
          }
#line 453 "goal_form.m"
        else
#line 453 "goal_form.m"
          if (((MR_tag((MR_Word) hlds__goal_form__GoalExpr_7)) == (MR_mktag((MR_Integer) 2))))
#line 454 "goal_form.m"
            {
#line 454 "goal_form.m"
              MR_Word hlds__goal_form__PredId_34 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__GoalExpr_7, (MR_Integer) 0)));
#line 454 "goal_form.m"
              MR_Integer hlds__goal_form__ProcId_35 = ((MR_Integer) (MR_hl_field(MR_mktag(2), hlds__goal_form__GoalExpr_7, (MR_Integer) 1)));
#line 454 "goal_form.m"
              MR_Word hlds__goal_form__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__GoalExpr_7, (MR_Integer) 2)));
#line 454 "goal_form.m"
              MR_Word hlds__goal_form__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__GoalExpr_7, (MR_Integer) 3)));
#line 454 "goal_form.m"
              MR_Word hlds__goal_form__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__GoalExpr_7, (MR_Integer) 4)));
#line 454 "goal_form.m"
              MR_Word hlds__goal_form__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__GoalExpr_7, (MR_Integer) 5)));
#line 456 "goal_form.m"
              MR_Word hlds__goal_form__ModuleInfo_40;
#line 456 "goal_form.m"
              MR_Word hlds__goal_form__ProcInfo_42;
#line 457 "goal_form.m"
              MR_Word hlds__goal_form__V_41_41;

#line 456 "goal_form.m"
              hlds__goal_form__succeeded = ((MR_tag((MR_Word) hlds__goal_form__MaybeModuleInfo_4)) == (MR_mktag((MR_Integer) 1)));
#line 456 "goal_form.m"
              if (hlds__goal_form__succeeded)
#line 456 "goal_form.m"
                {
#line 456 "goal_form.m"
                  hlds__goal_form__ModuleInfo_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__MaybeModuleInfo_4, (MR_Integer) 0)));
#line 457 "goal_form.m"
                  {
#line 457 "goal_form.m"
                    hlds__hlds_module__module_info_pred_proc_info_5_p_0(hlds__goal_form__ModuleInfo_40, hlds__goal_form__PredId_34, hlds__goal_form__ProcId_35, &hlds__goal_form__V_41_41, &hlds__goal_form__ProcInfo_42);
                  }
#line 460 "goal_form.m"
                  {
#line 460 "goal_form.m"
                    MR_Word hlds__goal_form__MaybeTermInfo_43;
#line 460 "goal_form.m"
                    MR_Word hlds__goal_form__V_97_97;

#line 460 "goal_form.m"
                    {
#line 460 "goal_form.m"
                      hlds__hlds_pred__proc_info_get_maybe_termination_info_2_p_0(hlds__goal_form__ProcInfo_42, &hlds__goal_form__MaybeTermInfo_43);
                    }
#line 461 "goal_form.m"
                    hlds__goal_form__succeeded = ((MR_tag((MR_Word) hlds__goal_form__MaybeTermInfo_43)) == (MR_mktag((MR_Integer) 1)));
#line 461 "goal_form.m"
                    if (hlds__goal_form__succeeded)
#line 461 "goal_form.m"
                      {
#line 461 "goal_form.m"
                        hlds__goal_form__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__MaybeTermInfo_43, (MR_Integer) 0)));
#line 461 "goal_form.m"
                        hlds__goal_form__succeeded = ((MR_tag((MR_Word) hlds__goal_form__V_97_97)) == (MR_mktag((MR_Integer) 0)));
#line 461 "goal_form.m"
                      }
#line 460 "goal_form.m"
                  }
#line 462 "goal_form.m"
                  if (!(hlds__goal_form__succeeded))
#line 463 "goal_form.m"
                    {
#line 463 "goal_form.m"
                      MR_Word hlds__goal_form__Term2Info_45;
#line 463 "goal_form.m"
                      MR_Word hlds__goal_form__V_95_95;
#line 463 "goal_form.m"
                      MR_Word hlds__goal_form__V_96_96;
#line 464 "goal_form.m"
                      MR_Word hlds__goal_form__V_46_46;

#line 463 "goal_form.m"
                      {
#line 463 "goal_form.m"
                        hlds__hlds_pred__proc_info_get_termination2_info_2_p_0(hlds__goal_form__ProcInfo_42, &hlds__goal_form__Term2Info_45);
                      }
#line 464 "goal_form.m"
                      {
#line 464 "goal_form.m"
                        hlds__goal_form__V_95_95 = transform_hlds__term_constr_main__term_status_1_f_0(hlds__goal_form__Term2Info_45);
                      }
#line 464 "goal_form.m"
                      hlds__goal_form__succeeded = ((MR_tag((MR_Word) hlds__goal_form__V_95_95)) == (MR_mktag((MR_Integer) 1)));
#line 464 "goal_form.m"
                      if (hlds__goal_form__succeeded)
#line 464 "goal_form.m"
                        {
#line 464 "goal_form.m"
                          hlds__goal_form__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__V_95_95, (MR_Integer) 0)));
#line 464 "goal_form.m"
                          hlds__goal_form__succeeded = ((MR_tag((MR_Word) hlds__goal_form__V_96_96)) == (MR_mktag((MR_Integer) 0)));
#line 464 "goal_form.m"
                          if (hlds__goal_form__succeeded)
#line 464 "goal_form.m"
                            hlds__goal_form__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__V_96_96, (MR_Integer) 0)));
#line 464 "goal_form.m"
                        }
#line 463 "goal_form.m"
                    }
#line 456 "goal_form.m"
                }
#line 468 "goal_form.m"
              if (hlds__goal_form__succeeded)
#line 467 "goal_form.m"
                hlds__goal_form__CanLoop_6 = (MR_Integer) 0;
#line 468 "goal_form.m"
              else
#line 469 "goal_form.m"
                hlds__goal_form__CanLoop_6 = (MR_Integer) 1;
#line 454 "goal_form.m"
            }
#line 453 "goal_form.m"
          else
#line 453 "goal_form.m"
            if (((MR_tag((MR_Word) hlds__goal_form__GoalExpr_7)) == (MR_mktag((MR_Integer) 1))))
#line 439 "goal_form.m"
              {
#line 439 "goal_form.m"
                MR_Word hlds__goal_form__Uni_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__GoalExpr_7, (MR_Integer) 3)));
#line 439 "goal_form.m"
                MR_Word hlds__goal_form__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__GoalExpr_7, (MR_Integer) 0)));
#line 439 "goal_form.m"
                MR_Word hlds__goal_form__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__GoalExpr_7, (MR_Integer) 1)));
#line 439 "goal_form.m"
                MR_Word hlds__goal_form__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__GoalExpr_7, (MR_Integer) 2)));
#line 439 "goal_form.m"
                MR_Word hlds__goal_form__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__GoalExpr_7, (MR_Integer) 4)));

#line 447 "goal_form.m"
                if (((((MR_tag((MR_Word) hlds__goal_form__Uni_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__Uni_12, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 451 "goal_form.m"
                  hlds__goal_form__CanLoop_6 = (MR_Integer) 1;
#line 447 "goal_form.m"
                else
#line 445 "goal_form.m"
                  hlds__goal_form__CanLoop_6 = (MR_Integer) 0;
#line 439 "goal_form.m"
              }
#line 453 "goal_form.m"
            else
#line 453 "goal_form.m"
              if (((((MR_tag((MR_Word) hlds__goal_form__GoalExpr_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_7, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 477 "goal_form.m"
                {
#line 477 "goal_form.m"
                  MR_Word hlds__goal_form__Attributes_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_7, (MR_Integer) 1)));
#line 477 "goal_form.m"
                  MR_Word hlds__goal_form__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_7, (MR_Integer) 2)));
#line 477 "goal_form.m"
                  MR_Integer hlds__goal_form__V_54_54 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_7, (MR_Integer) 3)));
#line 477 "goal_form.m"
                  MR_Word hlds__goal_form__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_7, (MR_Integer) 4)));
#line 477 "goal_form.m"
                  MR_Word hlds__goal_form__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_7, (MR_Integer) 5)));
#line 477 "goal_form.m"
                  MR_Word hlds__goal_form__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_7, (MR_Integer) 6)));
#line 477 "goal_form.m"
                  MR_Word hlds__goal_form__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_7, (MR_Integer) 7)));
#line 479 "goal_form.m"
                  MR_Word hlds__goal_form__Terminates_59;

#line 479 "goal_form.m"
                  {
#line 479 "goal_form.m"
                    hlds__goal_form__Terminates_59 = parse_tree__prog_data__get_terminates_1_f_0(hlds__goal_form__Attributes_52);
                  }
#line 482 "goal_form.m"
                  if ((hlds__goal_form__Terminates_59 == (MR_Integer) 2))
#line 483 "goal_form.m"
                    {
#line 483 "goal_form.m"
                      MR_Word hlds__goal_form__V_94_94;

#line 484 "goal_form.m"
                      {
#line 484 "goal_form.m"
                        hlds__goal_form__V_94_94 = parse_tree__prog_data__get_may_call_mercury_1_f_0(hlds__goal_form__Attributes_52);
                      }
#line 484 "goal_form.m"
                      hlds__goal_form__succeeded = (hlds__goal_form__V_94_94 == (MR_Integer) 1);
#line 483 "goal_form.m"
                    }
#line 482 "goal_form.m"
                  else
#line 482 "goal_form.m"
                    if ((hlds__goal_form__Terminates_59 == (MR_Integer) 0))
#line 481 "goal_form.m"
                      hlds__goal_form__succeeded = MR_TRUE;
#line 482 "goal_form.m"
                    else
#line 482 "goal_form.m"
                      hlds__goal_form__succeeded = MR_FALSE;
#line 488 "goal_form.m"
                  if (hlds__goal_form__succeeded)
#line 487 "goal_form.m"
                    hlds__goal_form__CanLoop_6 = (MR_Integer) 0;
#line 488 "goal_form.m"
                  else
#line 489 "goal_form.m"
                    hlds__goal_form__CanLoop_6 = (MR_Integer) 1;
#line 477 "goal_form.m"
                }
#line 453 "goal_form.m"
              else
#line 453 "goal_form.m"
                if (((((MR_tag((MR_Word) hlds__goal_form__GoalExpr_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_7, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 453 "goal_form.m"
                  {
#line 453 "goal_form.m"
                    MR_Word hlds__goal_form__V_103_103 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_7, (MR_Integer) 2)));
#line 453 "goal_form.m"
                    MR_Word hlds__goal_form__V_104_104 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_7, (MR_Integer) 1)));

#line 453 "goal_form.m"
                    if ((hlds__goal_form__V_104_104 == (MR_Integer) 1))
#line 499 "goal_form.m"
                      hlds__goal_form__CanLoop_6 = (MR_Integer) 1;
#line 453 "goal_form.m"
                    else
#line 493 "goal_form.m"
                      {
#line 493 "goal_form.m"
                        return hlds__goal_form__CanLoop_6 = hlds__goal_form__goal_list_can_loop_2_f_0(hlds__goal_form__MaybeModuleInfo_4, hlds__goal_form__V_103_103);
                      }
#line 453 "goal_form.m"
                  }
#line 453 "goal_form.m"
                else
#line 453 "goal_form.m"
                  if (((((MR_tag((MR_Word) hlds__goal_form__GoalExpr_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_7, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 501 "goal_form.m"
                    {
#line 501 "goal_form.m"
                      MR_Word hlds__goal_form__Goals_98 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_7, (MR_Integer) 1)));

#line 502 "goal_form.m"
                      {
#line 502 "goal_form.m"
                        return hlds__goal_form__CanLoop_6 = hlds__goal_form__goal_list_can_loop_2_f_0(hlds__goal_form__MaybeModuleInfo_4, hlds__goal_form__Goals_98);
                      }
#line 501 "goal_form.m"
                    }
#line 453 "goal_form.m"
                  else
#line 453 "goal_form.m"
                    if (((((MR_tag((MR_Word) hlds__goal_form__GoalExpr_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_7, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 475 "goal_form.m"
                      hlds__goal_form__CanLoop_6 = (MR_Integer) 1;
#line 453 "goal_form.m"
                    else
#line 453 "goal_form.m"
                      if (((((MR_tag((MR_Word) hlds__goal_form__GoalExpr_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_7, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 507 "goal_form.m"
                        {
#line 507 "goal_form.m"
                          MR_Word hlds__goal_form__Cond_66 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_7, (MR_Integer) 2)));
#line 507 "goal_form.m"
                          MR_Word hlds__goal_form__Then_67 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_7, (MR_Integer) 3)));
#line 507 "goal_form.m"
                          MR_Word hlds__goal_form__Else_68 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_7, (MR_Integer) 4)));
#line 507 "goal_form.m"
                          MR_Word hlds__goal_form___Vars_65 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_7, (MR_Integer) 1)));
#line 508 "goal_form.m"
                          MR_Word hlds__goal_form__V_90_90;

#line 508 "goal_form.m"
                          {
#line 508 "goal_form.m"
                            hlds__goal_form__V_90_90 = hlds__goal_form__goal_can_loop_func_2_f_0(hlds__goal_form__MaybeModuleInfo_4, hlds__goal_form__Cond_66);
                          }
#line 508 "goal_form.m"
                          hlds__goal_form__succeeded = (hlds__goal_form__V_90_90 == (MR_Integer) 1);
#line 510 "goal_form.m"
                          if (hlds__goal_form__succeeded)
#line 509 "goal_form.m"
                            hlds__goal_form__CanLoop_6 = (MR_Integer) 1;
#line 510 "goal_form.m"
                          else
#line 512 "goal_form.m"
                            {
#line 510 "goal_form.m"
                              MR_Word hlds__goal_form__V_91_91;

#line 510 "goal_form.m"
                              {
#line 510 "goal_form.m"
                                hlds__goal_form__V_91_91 = hlds__goal_form__goal_can_loop_func_2_f_0(hlds__goal_form__MaybeModuleInfo_4, hlds__goal_form__Then_67);
                              }
#line 510 "goal_form.m"
                              hlds__goal_form__succeeded = (hlds__goal_form__V_91_91 == (MR_Integer) 1);
#line 512 "goal_form.m"
                              if (hlds__goal_form__succeeded)
#line 511 "goal_form.m"
                                hlds__goal_form__CanLoop_6 = (MR_Integer) 1;
#line 512 "goal_form.m"
                              else
#line 513 "goal_form.m"
                                {
#line 513 "goal_form.m"
                                  /* direct tailcall eliminated */
#line 513 "goal_form.m"
                                  {
#line 513 "goal_form.m"
                                    MR_Word hlds__goal_form__Goal__tmp_copy_5 = hlds__goal_form__Else_68;

#line 513 "goal_form.m"
                                    hlds__goal_form__Goal_5 = hlds__goal_form__Goal__tmp_copy_5;
#line 513 "goal_form.m"
                                  }
#line 513 "goal_form.m"
                                  continue;
#line 513 "goal_form.m"
                                }
#line 512 "goal_form.m"
                            }
#line 507 "goal_form.m"
                        }
#line 453 "goal_form.m"
                      else
#line 453 "goal_form.m"
                        if (((((MR_tag((MR_Word) hlds__goal_form__GoalExpr_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_7, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 519 "goal_form.m"
                          {
#line 519 "goal_form.m"
                            MR_Word hlds__goal_form__Reason_70 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_7, (MR_Integer) 1)));
#line 519 "goal_form.m"
                            MR_Word hlds__goal_form__SubGoal_99 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_7, (MR_Integer) 2)));
#line 521 "goal_form.m"
                            MR_Word hlds__goal_form__FGT_72;
#line 521 "goal_form.m"
                            MR_Word hlds__goal_form__V_71_71;

#line 521 "goal_form.m"
                            hlds__goal_form__succeeded = ((((MR_tag((MR_Word) hlds__goal_form__Reason_70)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__Reason_70, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 521 "goal_form.m"
                            if (hlds__goal_form__succeeded)
#line 521 "goal_form.m"
                              {
#line 521 "goal_form.m"
                                hlds__goal_form__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__Reason_70, (MR_Integer) 1)));
#line 521 "goal_form.m"
                                hlds__goal_form__FGT_72 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__Reason_70, (MR_Integer) 2)));
#line 523 "goal_form.m"
                                if ((hlds__goal_form__FGT_72 == (MR_Integer) 1))
#line 522 "goal_form.m"
                                  hlds__goal_form__succeeded = MR_TRUE;
#line 523 "goal_form.m"
                                else
#line 523 "goal_form.m"
                                  if ((hlds__goal_form__FGT_72 == (MR_Integer) 2))
#line 523 "goal_form.m"
                                    hlds__goal_form__succeeded = MR_TRUE;
#line 523 "goal_form.m"
                                  else
#line 523 "goal_form.m"
                                    hlds__goal_form__succeeded = MR_FALSE;
#line 521 "goal_form.m"
                              }
#line 529 "goal_form.m"
                            if (hlds__goal_form__succeeded)
#line 528 "goal_form.m"
                              hlds__goal_form__CanLoop_6 = (MR_Integer) 0;
#line 529 "goal_form.m"
                            else
#line 530 "goal_form.m"
                              {
#line 530 "goal_form.m"
                                /* direct tailcall eliminated */
#line 530 "goal_form.m"
                                {
#line 530 "goal_form.m"
                                  MR_Word hlds__goal_form__Goal__tmp_copy_5 = hlds__goal_form__SubGoal_99;

#line 530 "goal_form.m"
                                  hlds__goal_form__Goal_5 = hlds__goal_form__Goal__tmp_copy_5;
#line 530 "goal_form.m"
                                }
#line 530 "goal_form.m"
                                continue;
#line 530 "goal_form.m"
                              }
#line 519 "goal_form.m"
                          }
#line 453 "goal_form.m"
                        else
#line 453 "goal_form.m"
                          if (((((MR_tag((MR_Word) hlds__goal_form__GoalExpr_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_7, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 533 "goal_form.m"
                            {
#line 533 "goal_form.m"
                              MR_Word hlds__goal_form__ShortHand_73 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_7, (MR_Integer) 1)));

#line 539 "goal_form.m"
                              if (((MR_tag((MR_Word) hlds__goal_form__ShortHand_73)) == (MR_mktag((MR_Integer) 1))))
#line 535 "goal_form.m"
                                {
#line 535 "goal_form.m"
                                  MR_Word hlds__goal_form__MainGoal_78 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__ShortHand_73, (MR_Integer) 4)));
#line 535 "goal_form.m"
                                  MR_Word hlds__goal_form__OrElseGoals_79 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__ShortHand_73, (MR_Integer) 5)));
#line 535 "goal_form.m"
                                  MR_Word hlds__goal_form__MainGoalCanLoop_81;
#line 535 "goal_form.m"
                                  MR_Word hlds__goal_form__OrElseCanLoop_82;
#line 535 "goal_form.m"
                                  MR_Word hlds__goal_form__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__ShortHand_73, (MR_Integer) 0)));
#line 535 "goal_form.m"
                                  MR_Word hlds__goal_form__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__ShortHand_73, (MR_Integer) 1)));
#line 535 "goal_form.m"
                                  MR_Word hlds__goal_form__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__ShortHand_73, (MR_Integer) 2)));
#line 535 "goal_form.m"
                                  MR_Word hlds__goal_form__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__ShortHand_73, (MR_Integer) 3)));
#line 535 "goal_form.m"
                                  MR_Word hlds__goal_form__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__ShortHand_73, (MR_Integer) 6)));

#line 536 "goal_form.m"
                                  {
#line 536 "goal_form.m"
                                    hlds__goal_form__MainGoalCanLoop_81 = hlds__goal_form__goal_can_loop_func_2_f_0(hlds__goal_form__MaybeModuleInfo_4, hlds__goal_form__MainGoal_78);
                                  }
#line 537 "goal_form.m"
                                  {
#line 537 "goal_form.m"
                                    hlds__goal_form__OrElseCanLoop_82 = hlds__goal_form__goal_list_can_loop_2_f_0(hlds__goal_form__MaybeModuleInfo_4, hlds__goal_form__OrElseGoals_79);
                                  }
#line 538 "goal_form.m"
                                  {
#line 538 "goal_form.m"
                                    return hlds__goal_form__CanLoop_6 = mercury__bool__or_2_f_0(hlds__goal_form__MainGoalCanLoop_81, hlds__goal_form__OrElseCanLoop_82);
                                  }
#line 535 "goal_form.m"
                                }
#line 539 "goal_form.m"
                              else
#line 539 "goal_form.m"
                                if (((MR_tag((MR_Word) hlds__goal_form__ShortHand_73)) == (MR_mktag((MR_Integer) 0))))
#line 543 "goal_form.m"
                                  {
#line 544 "goal_form.m"
                                    {
#line 544 "goal_form.m"
                                      mercury__require__unexpected_3_p_0((MR_String) "hlds.goal_form", (MR_String) "function \140hlds.goal_form.goal_can_loop_func\'/2", (MR_String) "bi_implication");
                                    }
#line 543 "goal_form.m"
                                  }
#line 539 "goal_form.m"
                                else
#line 540 "goal_form.m"
                                  {
#line 540 "goal_form.m"
                                    MR_Word hlds__goal_form__SubGoal_100 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__ShortHand_73, (MR_Integer) 2)));
#line 540 "goal_form.m"
                                    MR_Word hlds__goal_form__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__ShortHand_73, (MR_Integer) 0)));
#line 540 "goal_form.m"
                                    MR_Word hlds__goal_form__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__ShortHand_73, (MR_Integer) 1)));

#line 541 "goal_form.m"
                                    /* direct tailcall eliminated */
#line 541 "goal_form.m"
                                    {
#line 541 "goal_form.m"
                                      MR_Word hlds__goal_form__Goal__tmp_copy_5 = hlds__goal_form__SubGoal_100;

#line 541 "goal_form.m"
                                      hlds__goal_form__Goal_5 = hlds__goal_form__Goal__tmp_copy_5;
#line 541 "goal_form.m"
                                    }
#line 541 "goal_form.m"
                                    continue;
#line 540 "goal_form.m"
                                  }
#line 533 "goal_form.m"
                            }
#line 453 "goal_form.m"
                          else
#line 504 "goal_form.m"
                            {
#line 504 "goal_form.m"
                              MR_Word hlds__goal_form__Cases_64 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_7, (MR_Integer) 3)));
#line 504 "goal_form.m"
                              MR_Word hlds__goal_form___Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_7, (MR_Integer) 1)));
#line 504 "goal_form.m"
                              MR_Word hlds__goal_form___CanFail_63 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_7, (MR_Integer) 2)));

#line 505 "goal_form.m"
                              {
#line 505 "goal_form.m"
                                return hlds__goal_form__CanLoop_6 = hlds__goal_form__case_list_can_loop_2_f_0(hlds__goal_form__MaybeModuleInfo_4, hlds__goal_form__Cases_64);
                              }
#line 504 "goal_form.m"
                            }
#line 436 "goal_form.m"
        return hlds__goal_form__CanLoop_6;
#line 436 "goal_form.m"
      }
#line 436 "goal_form.m"
      break;
#line 436 "goal_form.m"
    }
#line 434 "goal_form.m"
}

#line 375 "goal_form.m"
static void MR_CALL 
hlds__goal_form__cases_can_throw_4_p_0(
#line 375 "goal_form.m"
  MR_Word hlds__goal_form__HeadVar__1_1,
#line 375 "goal_form.m"
  MR_Word * hlds__goal_form__HeadVar__2_2,
#line 375 "goal_form.m"
  MR_Word hlds__goal_form__STATE_VARIABLE_ModuleInfo_0_3,
#line 375 "goal_form.m"
  MR_Word * hlds__goal_form__STATE_VARIABLE_ModuleInfo_4)
#line 375 "goal_form.m"
{
#line 378 "goal_form.m"
  while (MR_TRUE)
#line 378 "goal_form.m"
    {
#line 378 "goal_form.m"
      /* tailcall optimized into a loop */
#line 378 "goal_form.m"
      {
#line 378 "goal_form.m"
        MR_bool hlds__goal_form__succeeded;

#line 378 "goal_form.m"
        if ((hlds__goal_form__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 378 "goal_form.m"
          {
#line 378 "goal_form.m"
            *hlds__goal_form__HeadVar__2_2 = (MR_Integer) 1;
#line 378 "goal_form.m"
            *hlds__goal_form__STATE_VARIABLE_ModuleInfo_4 = hlds__goal_form__STATE_VARIABLE_ModuleInfo_0_3;
#line 378 "goal_form.m"
          }
#line 378 "goal_form.m"
        else
#line 379 "goal_form.m"
          {
#line 379 "goal_form.m"
            MR_Word hlds__goal_form__Case_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__HeadVar__1_1, (MR_Integer) 0)));
#line 379 "goal_form.m"
            MR_Word hlds__goal_form__Cases_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__HeadVar__1_1, (MR_Integer) 1)));
#line 379 "goal_form.m"
            MR_Word hlds__goal_form__Goal_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Case_8, (MR_Integer) 2)));
#line 379 "goal_form.m"
            MR_Word hlds__goal_form__Result0_15;
#line 379 "goal_form.m"
            MR_Word hlds__goal_form__STATE_VARIABLE_ModuleInfo_18_18;
#line 380 "goal_form.m"
            MR_Word hlds__goal_form__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Case_8, (MR_Integer) 0)));
#line 380 "goal_form.m"
            MR_Word hlds__goal_form__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Case_8, (MR_Integer) 1)));

#line 381 "goal_form.m"
            {
#line 381 "goal_form.m"
              hlds__goal_form__goal_can_throw_4_p_0(hlds__goal_form__Goal_14, &hlds__goal_form__Result0_15, hlds__goal_form__STATE_VARIABLE_ModuleInfo_0_3, &hlds__goal_form__STATE_VARIABLE_ModuleInfo_18_18);
            }
#line 385 "goal_form.m"
            if ((hlds__goal_form__Result0_15 == (MR_Integer) 0))
#line 386 "goal_form.m"
              {
#line 387 "goal_form.m"
                *hlds__goal_form__HeadVar__2_2 = (MR_Integer) 0;
#line 387 "goal_form.m"
                *hlds__goal_form__STATE_VARIABLE_ModuleInfo_4 = hlds__goal_form__STATE_VARIABLE_ModuleInfo_18_18;
#line 386 "goal_form.m"
              }
#line 385 "goal_form.m"
            else
#line 384 "goal_form.m"
              {
#line 384 "goal_form.m"
                /* direct tailcall eliminated */
#line 384 "goal_form.m"
                {
#line 384 "goal_form.m"
                  MR_Word hlds__goal_form__HeadVar__1__tmp_copy_1 = hlds__goal_form__Cases_9;
#line 384 "goal_form.m"
                  MR_Word hlds__goal_form__STATE_VARIABLE_ModuleInfo_0__tmp_copy_3 = hlds__goal_form__STATE_VARIABLE_ModuleInfo_18_18;

#line 384 "goal_form.m"
                  hlds__goal_form__STATE_VARIABLE_ModuleInfo_0_3 = hlds__goal_form__STATE_VARIABLE_ModuleInfo_0__tmp_copy_3;
#line 384 "goal_form.m"
                  hlds__goal_form__HeadVar__1_1 = hlds__goal_form__HeadVar__1__tmp_copy_1;
#line 384 "goal_form.m"
                }
#line 384 "goal_form.m"
                continue;
#line 384 "goal_form.m"
              }
#line 379 "goal_form.m"
          }
#line 378 "goal_form.m"
      }
#line 378 "goal_form.m"
      break;
#line 378 "goal_form.m"
    }
#line 375 "goal_form.m"
}

#line 361 "goal_form.m"
static void MR_CALL 
hlds__goal_form__goals_can_throw_4_p_0(
#line 361 "goal_form.m"
  MR_Word hlds__goal_form__HeadVar__1_1,
#line 361 "goal_form.m"
  MR_Word * hlds__goal_form__HeadVar__2_2,
#line 361 "goal_form.m"
  MR_Word hlds__goal_form__STATE_VARIABLE_ModuleInfo_0_3,
#line 361 "goal_form.m"
  MR_Word * hlds__goal_form__STATE_VARIABLE_ModuleInfo_4)
#line 361 "goal_form.m"
{
#line 364 "goal_form.m"
  while (MR_TRUE)
#line 364 "goal_form.m"
    {
#line 364 "goal_form.m"
      /* tailcall optimized into a loop */
#line 364 "goal_form.m"
      {
#line 364 "goal_form.m"
        MR_bool hlds__goal_form__succeeded;

#line 364 "goal_form.m"
        if ((hlds__goal_form__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 364 "goal_form.m"
          {
#line 364 "goal_form.m"
            *hlds__goal_form__HeadVar__2_2 = (MR_Integer) 1;
#line 364 "goal_form.m"
            *hlds__goal_form__STATE_VARIABLE_ModuleInfo_4 = hlds__goal_form__STATE_VARIABLE_ModuleInfo_0_3;
#line 364 "goal_form.m"
          }
#line 364 "goal_form.m"
        else
#line 365 "goal_form.m"
          {
#line 365 "goal_form.m"
            MR_Word hlds__goal_form__Goal_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__HeadVar__1_1, (MR_Integer) 0)));
#line 365 "goal_form.m"
            MR_Word hlds__goal_form__Goals_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__HeadVar__1_1, (MR_Integer) 1)));
#line 365 "goal_form.m"
            MR_Word hlds__goal_form__Result0_12;
#line 365 "goal_form.m"
            MR_Word hlds__goal_form__STATE_VARIABLE_ModuleInfo_15_15;

#line 366 "goal_form.m"
            {
#line 366 "goal_form.m"
              hlds__goal_form__goal_can_throw_4_p_0(hlds__goal_form__Goal_8, &hlds__goal_form__Result0_12, hlds__goal_form__STATE_VARIABLE_ModuleInfo_0_3, &hlds__goal_form__STATE_VARIABLE_ModuleInfo_15_15);
            }
#line 370 "goal_form.m"
            if ((hlds__goal_form__Result0_12 == (MR_Integer) 0))
#line 371 "goal_form.m"
              {
#line 372 "goal_form.m"
                *hlds__goal_form__HeadVar__2_2 = (MR_Integer) 0;
#line 372 "goal_form.m"
                *hlds__goal_form__STATE_VARIABLE_ModuleInfo_4 = hlds__goal_form__STATE_VARIABLE_ModuleInfo_15_15;
#line 371 "goal_form.m"
              }
#line 370 "goal_form.m"
            else
#line 369 "goal_form.m"
              {
#line 369 "goal_form.m"
                /* direct tailcall eliminated */
#line 369 "goal_form.m"
                {
#line 369 "goal_form.m"
                  MR_Word hlds__goal_form__HeadVar__1__tmp_copy_1 = hlds__goal_form__Goals_9;
#line 369 "goal_form.m"
                  MR_Word hlds__goal_form__STATE_VARIABLE_ModuleInfo_0__tmp_copy_3 = hlds__goal_form__STATE_VARIABLE_ModuleInfo_15_15;

#line 369 "goal_form.m"
                  hlds__goal_form__STATE_VARIABLE_ModuleInfo_0_3 = hlds__goal_form__STATE_VARIABLE_ModuleInfo_0__tmp_copy_3;
#line 369 "goal_form.m"
                  hlds__goal_form__HeadVar__1_1 = hlds__goal_form__HeadVar__1__tmp_copy_1;
#line 369 "goal_form.m"
                }
#line 369 "goal_form.m"
                continue;
#line 369 "goal_form.m"
              }
#line 365 "goal_form.m"
          }
#line 364 "goal_form.m"
      }
#line 364 "goal_form.m"
      break;
#line 364 "goal_form.m"
    }
#line 361 "goal_form.m"
}

#line 231 "goal_form.m"
static MR_bool MR_CALL 
hlds__goal_form__only_constant_goals_3_p_0(
#line 231 "goal_form.m"
  MR_Word hlds__goal_form__HeadVar__1_1,
#line 231 "goal_form.m"
  MR_Word hlds__goal_form__STATE_VARIABLE_ToAssignVars_0_2,
#line 231 "goal_form.m"
  MR_Word * hlds__goal_form__STATE_VARIABLE_ToAssignVars_3)
#line 231 "goal_form.m"
{
#line 234 "goal_form.m"
  while (MR_TRUE)
#line 234 "goal_form.m"
    {
#line 234 "goal_form.m"
      /* tailcall optimized into a loop */
#line 234 "goal_form.m"
      {
#line 234 "goal_form.m"
        MR_bool hlds__goal_form__succeeded;

#line 234 "goal_form.m"
        if ((hlds__goal_form__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 234 "goal_form.m"
          {
#line 234 "goal_form.m"
            *hlds__goal_form__STATE_VARIABLE_ToAssignVars_3 = hlds__goal_form__STATE_VARIABLE_ToAssignVars_0_2;
#line 234 "goal_form.m"
            hlds__goal_form__succeeded = MR_TRUE;
#line 234 "goal_form.m"
          }
#line 234 "goal_form.m"
        else
#line 235 "goal_form.m"
          {
#line 235 "goal_form.m"
            MR_Word hlds__goal_form__TypeCtorInfo_31_31;
#line 235 "goal_form.m"
            MR_Word hlds__goal_form__Goal_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__HeadVar__1_1, (MR_Integer) 0)));
#line 235 "goal_form.m"
            MR_Word hlds__goal_form__Goals_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__HeadVar__1_1, (MR_Integer) 1)));
#line 235 "goal_form.m"
            MR_Word hlds__goal_form__GoalExpr_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Goal_7, (MR_Integer) 0)));
#line 235 "goal_form.m"
            MR_Word hlds__goal_form__Var_17;
#line 235 "goal_form.m"
            MR_Word hlds__goal_form__STATE_VARIABLE_ToAssignVars_29_29;
#line 236 "goal_form.m"
            MR_Word hlds__goal_form__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Goal_7, (MR_Integer) 1)));

#line 243 "goal_form.m"
            if (((MR_tag((MR_Word) hlds__goal_form__GoalExpr_10)) == (MR_mktag((MR_Integer) 1))))
#line 241 "goal_form.m"
              {
#line 241 "goal_form.m"
                MR_Word hlds__goal_form__Unification_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__GoalExpr_10, (MR_Integer) 3)));
#line 241 "goal_form.m"
                MR_Word hlds__goal_form__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__GoalExpr_10, (MR_Integer) 0)));
#line 241 "goal_form.m"
                MR_Word hlds__goal_form__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__GoalExpr_10, (MR_Integer) 1)));
#line 241 "goal_form.m"
                MR_Word hlds__goal_form__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__GoalExpr_10, (MR_Integer) 2)));
#line 241 "goal_form.m"
                MR_Word hlds__goal_form__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__GoalExpr_10, (MR_Integer) 4)));
#line 242 "goal_form.m"
                MR_Word hlds__goal_form__V_18_18;
#line 242 "goal_form.m"
                MR_Word hlds__goal_form__V_19_19;
#line 242 "goal_form.m"
                MR_Word hlds__goal_form__V_20_20;
#line 242 "goal_form.m"
                MR_Word hlds__goal_form__V_21_21;
#line 242 "goal_form.m"
                MR_Word hlds__goal_form__V_22_22;
#line 242 "goal_form.m"
                MR_Word hlds__goal_form__V_23_23;

#line 242 "goal_form.m"
                hlds__goal_form__succeeded = ((MR_tag((MR_Word) hlds__goal_form__Unification_15)) == (MR_mktag((MR_Integer) 0)));
#line 242 "goal_form.m"
                if (hlds__goal_form__succeeded)
#line 242 "goal_form.m"
                  {
#line 242 "goal_form.m"
                    hlds__goal_form__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Unification_15, (MR_Integer) 0)));
#line 242 "goal_form.m"
                    hlds__goal_form__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Unification_15, (MR_Integer) 1)));
#line 242 "goal_form.m"
                    hlds__goal_form__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Unification_15, (MR_Integer) 2)));
#line 242 "goal_form.m"
                    hlds__goal_form__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Unification_15, (MR_Integer) 3)));
#line 242 "goal_form.m"
                    hlds__goal_form__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Unification_15, (MR_Integer) 4)));
#line 242 "goal_form.m"
                    hlds__goal_form__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Unification_15, (MR_Integer) 5)));
#line 242 "goal_form.m"
                    hlds__goal_form__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Unification_15, (MR_Integer) 6)));
#line 242 "goal_form.m"
                  }
#line 241 "goal_form.m"
              }
#line 243 "goal_form.m"
            else
#line 243 "goal_form.m"
              if (((((MR_tag((MR_Word) hlds__goal_form__GoalExpr_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_10, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 244 "goal_form.m"
                {
#line 244 "goal_form.m"
                  MR_Word hlds__goal_form__Reason_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_10, (MR_Integer) 1)));
#line 244 "goal_form.m"
                  MR_Word hlds__goal_form__V_28_28;
#line 244 "goal_form.m"
                  MR_Word hlds__goal_form__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_10, (MR_Integer) 2)));

#line 245 "goal_form.m"
                  hlds__goal_form__succeeded = ((((MR_tag((MR_Word) hlds__goal_form__Reason_24)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__Reason_24, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 245 "goal_form.m"
                  if (hlds__goal_form__succeeded)
#line 245 "goal_form.m"
                    {
#line 245 "goal_form.m"
                      hlds__goal_form__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__Reason_24, (MR_Integer) 1)));
#line 245 "goal_form.m"
                      hlds__goal_form__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__Reason_24, (MR_Integer) 2)));
#line 245 "goal_form.m"
                      hlds__goal_form__succeeded = (hlds__goal_form__V_28_28 == (MR_Integer) 1);
#line 245 "goal_form.m"
                    }
#line 244 "goal_form.m"
                }
#line 243 "goal_form.m"
              else
#line 243 "goal_form.m"
                hlds__goal_form__succeeded = MR_FALSE;
#line 235 "goal_form.m"
            if (hlds__goal_form__succeeded)
#line 235 "goal_form.m"
              {
#line 5380 "hlds.goal_form.c"
                hlds__goal_form__TypeCtorInfo_31_31 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 247 "goal_form.m"
                {
#line 247 "goal_form.m"
                  parse_tree__set_of_var__delete_3_p_0(hlds__goal_form__TypeCtorInfo_31_31, hlds__goal_form__Var_17, hlds__goal_form__STATE_VARIABLE_ToAssignVars_0_2, &hlds__goal_form__STATE_VARIABLE_ToAssignVars_29_29);
                }
#line 248 "goal_form.m"
                /* direct tailcall eliminated */
#line 248 "goal_form.m"
                {
#line 248 "goal_form.m"
                  MR_Word hlds__goal_form__HeadVar__1__tmp_copy_1 = hlds__goal_form__Goals_8;
#line 248 "goal_form.m"
                  MR_Word hlds__goal_form__STATE_VARIABLE_ToAssignVars_0__tmp_copy_2 = hlds__goal_form__STATE_VARIABLE_ToAssignVars_29_29;

#line 248 "goal_form.m"
                  hlds__goal_form__STATE_VARIABLE_ToAssignVars_0_2 = hlds__goal_form__STATE_VARIABLE_ToAssignVars_0__tmp_copy_2;
#line 248 "goal_form.m"
                  hlds__goal_form__HeadVar__1_1 = hlds__goal_form__HeadVar__1__tmp_copy_1;
#line 248 "goal_form.m"
                }
#line 248 "goal_form.m"
                continue;
#line 235 "goal_form.m"
              }
#line 235 "goal_form.m"
          }
#line 234 "goal_form.m"
        return hlds__goal_form__succeeded;
#line 234 "goal_form.m"
      }
#line 234 "goal_form.m"
      break;
#line 234 "goal_form.m"
    }
#line 231 "goal_form.m"
}

#line 197 "goal_form.m"
MR_Word MR_CALL 
hlds__goal_form__goal_expr_has_subgoals_1_f_0(
#line 197 "goal_form.m"
  MR_Word hlds__goal_form__GoalExpr_3)
#line 197 "goal_form.m"
{
#line 1187 "goal_form.m"
  {
#line 1187 "goal_form.m"
    MR_bool hlds__goal_form__succeeded;
#line 1187 "goal_form.m"
    MR_Word hlds__goal_form__HasSubGoals_4;

#line 1187 "goal_form.m"
    if (((((MR_tag((MR_Word) hlds__goal_form__GoalExpr_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 1192 "goal_form.m"
      {
#line 1192 "goal_form.m"
        MR_Word hlds__goal_form__SubGoals_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_3, (MR_Integer) 2)));
#line 1190 "goal_form.m"
        MR_Word hlds__goal_form__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_3, (MR_Integer) 1)));

#line 1196 "goal_form.m"
        if ((hlds__goal_form__SubGoals_29 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1195 "goal_form.m"
          hlds__goal_form__HasSubGoals_4 = (MR_Integer) 1;
#line 1196 "goal_form.m"
        else
#line 1198 "goal_form.m"
          hlds__goal_form__HasSubGoals_4 = (MR_Integer) 0;
#line 1192 "goal_form.m"
      }
#line 1187 "goal_form.m"
    else
#line 1187 "goal_form.m"
      if (((((MR_tag((MR_Word) hlds__goal_form__GoalExpr_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_3, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 1192 "goal_form.m"
        {
#line 1192 "goal_form.m"
          MR_Word hlds__goal_form__SubGoals_61 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_3, (MR_Integer) 1)));

#line 1196 "goal_form.m"
          if ((hlds__goal_form__SubGoals_61 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1195 "goal_form.m"
            hlds__goal_form__HasSubGoals_4 = (MR_Integer) 1;
#line 1196 "goal_form.m"
          else
#line 1198 "goal_form.m"
            hlds__goal_form__HasSubGoals_4 = (MR_Integer) 0;
#line 1192 "goal_form.m"
        }
#line 1187 "goal_form.m"
      else
#line 1187 "goal_form.m"
        if (((((MR_tag((MR_Word) hlds__goal_form__GoalExpr_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_3, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 1213 "goal_form.m"
          hlds__goal_form__HasSubGoals_4 = (MR_Integer) 0;
#line 1187 "goal_form.m"
        else
#line 1187 "goal_form.m"
          if (((((((((((MR_tag((MR_Word) hlds__goal_form__GoalExpr_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_3, (MR_Integer) 0)))) == (MR_Integer) 1)))) || (((((MR_tag((MR_Word) hlds__goal_form__GoalExpr_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_3, (MR_Integer) 0)))) == (MR_Integer) 0)))))) || (((MR_tag((MR_Word) hlds__goal_form__GoalExpr_3)) == (MR_mktag((MR_Integer) 2)))))) || (((MR_tag((MR_Word) hlds__goal_form__GoalExpr_3)) == (MR_mktag((MR_Integer) 1))))))
#line 1188 "goal_form.m"
            hlds__goal_form__HasSubGoals_4 = (MR_Integer) 1;
#line 1187 "goal_form.m"
          else
#line 1206 "goal_form.m"
            hlds__goal_form__HasSubGoals_4 = (MR_Integer) 0;
#line 1187 "goal_form.m"
    return hlds__goal_form__HasSubGoals_4;
#line 1187 "goal_form.m"
  }
#line 197 "goal_form.m"
}

#line 186 "goal_form.m"
MR_Word MR_CALL 
hlds__goal_form__goal_has_foreign_1_f_0(
#line 186 "goal_form.m"
  MR_Word hlds__goal_form__Goal_3)
#line 186 "goal_form.m"
{
#line 1096 "goal_form.m"
  while (MR_TRUE)
#line 1096 "goal_form.m"
    {
#line 1096 "goal_form.m"
      /* tailcall optimized into a loop */
#line 1096 "goal_form.m"
      {
#line 1096 "goal_form.m"
        MR_bool hlds__goal_form__succeeded;
#line 1096 "goal_form.m"
        MR_Word hlds__goal_form__HasForeign_4;
#line 1096 "goal_form.m"
        MR_Word hlds__goal_form__GoalExpr_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Goal_3, (MR_Integer) 0)));
#line 1097 "goal_form.m"
        MR_Word hlds__goal_form__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Goal_3, (MR_Integer) 1)));

#line 1104 "goal_form.m"
        if (((MR_tag((MR_Word) hlds__goal_form__GoalExpr_5)) == (MR_mktag((MR_Integer) 0))))
#line 1114 "goal_form.m"
          {
#line 1114 "goal_form.m"
            MR_Word hlds__goal_form__SubGoal_28 = (MR_Word) MR_body(((MR_Word) hlds__goal_form__GoalExpr_5), (MR_Integer) 0);

#line 1115 "goal_form.m"
            /* direct tailcall eliminated */
#line 1115 "goal_form.m"
            {
#line 1115 "goal_form.m"
              MR_Word hlds__goal_form__Goal__tmp_copy_3 = hlds__goal_form__SubGoal_28;

#line 1115 "goal_form.m"
              hlds__goal_form__Goal_3 = hlds__goal_form__Goal__tmp_copy_3;
#line 1115 "goal_form.m"
            }
#line 1115 "goal_form.m"
            continue;
#line 1114 "goal_form.m"
          }
#line 1104 "goal_form.m"
        else
#line 1104 "goal_form.m"
          if (((((MR_tag((MR_Word) hlds__goal_form__GoalExpr_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_5, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 1142 "goal_form.m"
            hlds__goal_form__HasForeign_4 = (MR_Integer) 1;
#line 1104 "goal_form.m"
          else
#line 1104 "goal_form.m"
            if (((((MR_tag((MR_Word) hlds__goal_form__GoalExpr_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_5, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 1105 "goal_form.m"
              {
#line 1105 "goal_form.m"
                MR_Word hlds__goal_form__Goals_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_5, (MR_Integer) 2)));
#line 1105 "goal_form.m"
                MR_Word hlds__goal_form__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_5, (MR_Integer) 1)));

#line 1106 "goal_form.m"
                {
#line 1106 "goal_form.m"
                  return hlds__goal_form__HasForeign_4 = hlds__goal_form__goal_list_has_foreign_1_f_0(hlds__goal_form__Goals_24);
                }
#line 1105 "goal_form.m"
              }
#line 1104 "goal_form.m"
            else
#line 1104 "goal_form.m"
              if (((((MR_tag((MR_Word) hlds__goal_form__GoalExpr_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_5, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 1108 "goal_form.m"
                {
#line 1108 "goal_form.m"
                  MR_Word hlds__goal_form__Goals_60 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_5, (MR_Integer) 1)));

#line 1109 "goal_form.m"
                  {
#line 1109 "goal_form.m"
                    return hlds__goal_form__HasForeign_4 = hlds__goal_form__goal_list_has_foreign_1_f_0(hlds__goal_form__Goals_60);
                  }
#line 1108 "goal_form.m"
                }
#line 1104 "goal_form.m"
              else
#line 1104 "goal_form.m"
                if (((((MR_tag((MR_Word) hlds__goal_form__GoalExpr_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_5, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 1129 "goal_form.m"
                  {
#line 1129 "goal_form.m"
                    MR_Word hlds__goal_form__Cond_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_5, (MR_Integer) 2)));
#line 1129 "goal_form.m"
                    MR_Word hlds__goal_form__Then_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_5, (MR_Integer) 3)));
#line 1129 "goal_form.m"
                    MR_Word hlds__goal_form__Else_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_5, (MR_Integer) 4)));
#line 1129 "goal_form.m"
                    MR_Word hlds__goal_form__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_5, (MR_Integer) 1)));

#line 1131 "goal_form.m"
                    {
#line 1131 "goal_form.m"
                      MR_Word hlds__goal_form__V_59_59;

#line 1131 "goal_form.m"
                      {
#line 1131 "goal_form.m"
                        hlds__goal_form__V_59_59 = hlds__goal_form__goal_has_foreign_1_f_0(hlds__goal_form__Cond_33);
                      }
#line 1131 "goal_form.m"
                      hlds__goal_form__succeeded = (hlds__goal_form__V_59_59 == (MR_Integer) 1);
#line 1131 "goal_form.m"
                    }
#line 1132 "goal_form.m"
                    if (!(hlds__goal_form__succeeded))
#line 1132 "goal_form.m"
                      {
#line 1132 "goal_form.m"
                        {
#line 1132 "goal_form.m"
                          MR_Word hlds__goal_form__V_58_58;

#line 1132 "goal_form.m"
                          {
#line 1132 "goal_form.m"
                            hlds__goal_form__V_58_58 = hlds__goal_form__goal_has_foreign_1_f_0(hlds__goal_form__Then_34);
                          }
#line 1132 "goal_form.m"
                          hlds__goal_form__succeeded = (hlds__goal_form__V_58_58 == (MR_Integer) 1);
#line 1132 "goal_form.m"
                        }
#line 1132 "goal_form.m"
                        if (!(hlds__goal_form__succeeded))
#line 1133 "goal_form.m"
                          {
#line 1133 "goal_form.m"
                            MR_Word hlds__goal_form__V_57_57;

#line 1133 "goal_form.m"
                            {
#line 1133 "goal_form.m"
                              hlds__goal_form__V_57_57 = hlds__goal_form__goal_has_foreign_1_f_0(hlds__goal_form__Else_35);
                            }
#line 1133 "goal_form.m"
                            hlds__goal_form__succeeded = (hlds__goal_form__V_57_57 == (MR_Integer) 1);
#line 1133 "goal_form.m"
                          }
#line 1132 "goal_form.m"
                      }
#line 1137 "goal_form.m"
                    if (hlds__goal_form__succeeded)
#line 1136 "goal_form.m"
                      hlds__goal_form__HasForeign_4 = (MR_Integer) 1;
#line 1137 "goal_form.m"
                    else
#line 1138 "goal_form.m"
                      hlds__goal_form__HasForeign_4 = (MR_Integer) 0;
#line 1129 "goal_form.m"
                  }
#line 1104 "goal_form.m"
                else
#line 1104 "goal_form.m"
                  if (((((MR_tag((MR_Word) hlds__goal_form__GoalExpr_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_5, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 1117 "goal_form.m"
                    {
#line 1117 "goal_form.m"
                      MR_Word hlds__goal_form__Reason_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_5, (MR_Integer) 1)));
#line 1117 "goal_form.m"
                      MR_Word hlds__goal_form__SubGoal_61 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_5, (MR_Integer) 2)));
#line 1119 "goal_form.m"
                      MR_Word hlds__goal_form__FGT_31;
#line 1119 "goal_form.m"
                      MR_Word hlds__goal_form__V_30_30;

#line 1119 "goal_form.m"
                      hlds__goal_form__succeeded = ((((MR_tag((MR_Word) hlds__goal_form__Reason_29)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__Reason_29, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 1119 "goal_form.m"
                      if (hlds__goal_form__succeeded)
#line 1119 "goal_form.m"
                        {
#line 1119 "goal_form.m"
                          hlds__goal_form__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__Reason_29, (MR_Integer) 1)));
#line 1119 "goal_form.m"
                          hlds__goal_form__FGT_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__Reason_29, (MR_Integer) 2)));
#line 1121 "goal_form.m"
                          if ((hlds__goal_form__FGT_31 == (MR_Integer) 1))
#line 1120 "goal_form.m"
                            hlds__goal_form__succeeded = MR_TRUE;
#line 1121 "goal_form.m"
                          else
#line 1121 "goal_form.m"
                            if ((hlds__goal_form__FGT_31 == (MR_Integer) 2))
#line 1121 "goal_form.m"
                              hlds__goal_form__succeeded = MR_TRUE;
#line 1121 "goal_form.m"
                            else
#line 1121 "goal_form.m"
                              hlds__goal_form__succeeded = MR_FALSE;
#line 1119 "goal_form.m"
                        }
#line 1125 "goal_form.m"
                      if (hlds__goal_form__succeeded)
#line 1124 "goal_form.m"
                        hlds__goal_form__HasForeign_4 = (MR_Integer) 0;
#line 1125 "goal_form.m"
                      else
#line 1126 "goal_form.m"
                        {
#line 1126 "goal_form.m"
                          /* direct tailcall eliminated */
#line 1126 "goal_form.m"
                          {
#line 1126 "goal_form.m"
                            MR_Word hlds__goal_form__Goal__tmp_copy_3 = hlds__goal_form__SubGoal_61;

#line 1126 "goal_form.m"
                            hlds__goal_form__Goal_3 = hlds__goal_form__Goal__tmp_copy_3;
#line 1126 "goal_form.m"
                          }
#line 1126 "goal_form.m"
                          continue;
#line 1126 "goal_form.m"
                        }
#line 1117 "goal_form.m"
                    }
#line 1104 "goal_form.m"
                  else
#line 1104 "goal_form.m"
                    if (((((MR_tag((MR_Word) hlds__goal_form__GoalExpr_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_5, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 1144 "goal_form.m"
                      {
#line 1144 "goal_form.m"
                        MR_Word hlds__goal_form__ShortHand_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_5, (MR_Integer) 1)));

#line 1148 "goal_form.m"
                        if (((MR_tag((MR_Word) hlds__goal_form__ShortHand_43)) == (MR_mktag((MR_Integer) 1))))
#line 1147 "goal_form.m"
                          hlds__goal_form__HasForeign_4 = (MR_Integer) 1;
#line 1148 "goal_form.m"
                        else
#line 1148 "goal_form.m"
                          if (((MR_tag((MR_Word) hlds__goal_form__ShortHand_43)) == (MR_mktag((MR_Integer) 0))))
#line 1152 "goal_form.m"
                            {
#line 1152 "goal_form.m"
                              MR_Word hlds__goal_form__GoalA_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__ShortHand_43, (MR_Integer) 0)));
#line 1152 "goal_form.m"
                              MR_Word hlds__goal_form__GoalB_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__ShortHand_43, (MR_Integer) 1)));
#line 1152 "goal_form.m"
                              MR_Word hlds__goal_form__V_55_55;
#line 1152 "goal_form.m"
                              MR_Word hlds__goal_form__V_56_56;

#line 1153 "goal_form.m"
                              {
#line 1153 "goal_form.m"
                                hlds__goal_form__V_55_55 = hlds__goal_form__goal_has_foreign_1_f_0(hlds__goal_form__GoalA_53);
                              }
#line 1154 "goal_form.m"
                              {
#line 1154 "goal_form.m"
                                hlds__goal_form__V_56_56 = hlds__goal_form__goal_has_foreign_1_f_0(hlds__goal_form__GoalB_54);
                              }
#line 1153 "goal_form.m"
                              {
#line 1153 "goal_form.m"
                                return hlds__goal_form__HasForeign_4 = mercury__bool__or_2_f_0(hlds__goal_form__V_55_55, hlds__goal_form__V_56_56);
                              }
#line 1152 "goal_form.m"
                            }
#line 1148 "goal_form.m"
                          else
#line 1149 "goal_form.m"
                            {
#line 1149 "goal_form.m"
                              MR_Word hlds__goal_form__SubGoal_62 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__ShortHand_43, (MR_Integer) 2)));
#line 1149 "goal_form.m"
                              MR_Word hlds__goal_form__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__ShortHand_43, (MR_Integer) 0)));
#line 1149 "goal_form.m"
                              MR_Word hlds__goal_form__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__ShortHand_43, (MR_Integer) 1)));

#line 1150 "goal_form.m"
                              /* direct tailcall eliminated */
#line 1150 "goal_form.m"
                              {
#line 1150 "goal_form.m"
                                MR_Word hlds__goal_form__Goal__tmp_copy_3 = hlds__goal_form__SubGoal_62;

#line 1150 "goal_form.m"
                                hlds__goal_form__Goal_3 = hlds__goal_form__Goal__tmp_copy_3;
#line 1150 "goal_form.m"
                              }
#line 1150 "goal_form.m"
                              continue;
#line 1149 "goal_form.m"
                            }
#line 1144 "goal_form.m"
                      }
#line 1104 "goal_form.m"
                    else
#line 1104 "goal_form.m"
                      if (((((MR_tag((MR_Word) hlds__goal_form__GoalExpr_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_5, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 1111 "goal_form.m"
                        {
#line 1111 "goal_form.m"
                          MR_Word hlds__goal_form__Cases_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_5, (MR_Integer) 3)));
#line 1111 "goal_form.m"
                          MR_Word hlds__goal_form__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_5, (MR_Integer) 1)));
#line 1111 "goal_form.m"
                          MR_Word hlds__goal_form__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_5, (MR_Integer) 2)));

#line 1112 "goal_form.m"
                          {
#line 1112 "goal_form.m"
                            return hlds__goal_form__HasForeign_4 = hlds__goal_form__case_list_has_foreign_1_f_0(hlds__goal_form__Cases_27);
                          }
#line 1111 "goal_form.m"
                        }
#line 1104 "goal_form.m"
                      else
#line 1103 "goal_form.m"
                        hlds__goal_form__HasForeign_4 = (MR_Integer) 0;
#line 1096 "goal_form.m"
        return hlds__goal_form__HasForeign_4;
#line 1096 "goal_form.m"
      }
#line 1096 "goal_form.m"
      break;
#line 1096 "goal_form.m"
    }
#line 186 "goal_form.m"
}

#line 179 "goal_form.m"
MR_Word MR_CALL 
hlds__goal_form__goal_may_modify_trail_1_f_0(
#line 179 "goal_form.m"
  MR_Word hlds__goal_form__GoalInfo_3)
#line 179 "goal_form.m"
{
#line 1092 "goal_form.m"
  {
#line 1092 "goal_form.m"
    MR_bool hlds__goal_form__succeeded;
#line 1092 "goal_form.m"
    MR_Word hlds__goal_form__HeadVar__2_2;
#line 1092 "goal_form.m"
    MR_Word hlds__goal_form__V_4_4;

#line 1086 "goal_form.m"
    {
#line 1086 "goal_form.m"
      hlds__goal_form__succeeded = hlds__hlds_goal__goal_info_has_feature_2_p_0(hlds__goal_form__GoalInfo_3, (MR_Integer) 15);
    }
#line 1085 "goal_form.m"
    if (hlds__goal_form__succeeded)
#line 1087 "goal_form.m"
      hlds__goal_form__V_4_4 = (MR_Integer) 1;
#line 1085 "goal_form.m"
    else
#line 1089 "goal_form.m"
      hlds__goal_form__V_4_4 = (MR_Integer) 0;
#line 1092 "goal_form.m"
    {
#line 1092 "goal_form.m"
      return hlds__goal_form__HeadVar__2_2 = mercury__bool__not_1_f_0(hlds__goal_form__V_4_4);
    }
#line 1092 "goal_form.m"
    return hlds__goal_form__HeadVar__2_2;
#line 1092 "goal_form.m"
  }
#line 179 "goal_form.m"
}

#line 175 "goal_form.m"
MR_Word MR_CALL 
hlds__goal_form__goal_cannot_modify_trail_1_f_0(
#line 175 "goal_form.m"
  MR_Word hlds__goal_form__GoalInfo_3)
#line 175 "goal_form.m"
{
#line 1085 "goal_form.m"
  {
#line 1085 "goal_form.m"
    MR_bool hlds__goal_form__succeeded;
#line 1085 "goal_form.m"
    MR_Word hlds__goal_form__HeadVar__2_2;

#line 1086 "goal_form.m"
    {
#line 1086 "goal_form.m"
      hlds__goal_form__succeeded = hlds__hlds_goal__goal_info_has_feature_2_p_0(hlds__goal_form__GoalInfo_3, (MR_Integer) 15);
    }
#line 1085 "goal_form.m"
    if (hlds__goal_form__succeeded)
#line 1087 "goal_form.m"
      hlds__goal_form__HeadVar__2_2 = (MR_Integer) 1;
#line 1085 "goal_form.m"
    else
#line 1089 "goal_form.m"
      hlds__goal_form__HeadVar__2_2 = (MR_Integer) 0;
#line 1085 "goal_form.m"
    return hlds__goal_form__HeadVar__2_2;
#line 1085 "goal_form.m"
  }
#line 175 "goal_form.m"
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
#line 961 "goal_form.m"
  while (MR_TRUE)
#line 961 "goal_form.m"
    {
#line 961 "goal_form.m"
      /* tailcall optimized into a loop */
#line 961 "goal_form.m"
      {
#line 961 "goal_form.m"
        MR_bool hlds__goal_form__succeeded;
#line 961 "goal_form.m"
        MR_Word hlds__goal_form__GoalExpr_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Goal_6, (MR_Integer) 0)));
#line 962 "goal_form.m"
        MR_Word hlds__goal_form__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Goal_6, (MR_Integer) 1)));

#line 970 "goal_form.m"
        if (((MR_tag((MR_Word) hlds__goal_form__GoalExpr_11)) == (MR_mktag((MR_Integer) 0))))
#line 1001 "goal_form.m"
          {
#line 1001 "goal_form.m"
            MR_Word hlds__goal_form__SubGoal_54 = (MR_Word) MR_body(((MR_Word) hlds__goal_form__GoalExpr_11), (MR_Integer) 0);

#line 1002 "goal_form.m"
            /* direct tailcall eliminated */
#line 1002 "goal_form.m"
            {
#line 1002 "goal_form.m"
              MR_Word hlds__goal_form__Goal__tmp_copy_6 = hlds__goal_form__SubGoal_54;

#line 1002 "goal_form.m"
              hlds__goal_form__Goal_6 = hlds__goal_form__Goal__tmp_copy_6;
#line 1002 "goal_form.m"
            }
#line 1002 "goal_form.m"
            continue;
#line 1001 "goal_form.m"
          }
#line 970 "goal_form.m"
        else
#line 970 "goal_form.m"
          if (((MR_tag((MR_Word) hlds__goal_form__GoalExpr_11)) == (MR_mktag((MR_Integer) 2))))
#line 971 "goal_form.m"
            {
#line 971 "goal_form.m"
              MR_Word hlds__goal_form__CallPredId_30 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__GoalExpr_11, (MR_Integer) 0)));
#line 971 "goal_form.m"
              MR_Integer hlds__goal_form__CallProcId_31 = ((MR_Integer) (MR_hl_field(MR_mktag(2), hlds__goal_form__GoalExpr_11, (MR_Integer) 1)));
#line 971 "goal_form.m"
              MR_Word hlds__goal_form__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__GoalExpr_11, (MR_Integer) 2)));
#line 971 "goal_form.m"
              MR_Word hlds__goal_form__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__GoalExpr_11, (MR_Integer) 3)));
#line 971 "goal_form.m"
              MR_Word hlds__goal_form__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__GoalExpr_11, (MR_Integer) 4)));
#line 971 "goal_form.m"
              MR_Word hlds__goal_form__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__GoalExpr_11, (MR_Integer) 5)));

#line 973 "goal_form.m"
              {
#line 973 "goal_form.m"
                hlds__goal_form__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(hlds__goal_form__PredId_7, hlds__goal_form__CallPredId_30);
              }
#line 973 "goal_form.m"
              if (hlds__goal_form__succeeded)
#line 974 "goal_form.m"
                hlds__goal_form__succeeded = (hlds__goal_form__ProcId_8 == hlds__goal_form__CallProcId_31);
#line 977 "goal_form.m"
              if (hlds__goal_form__succeeded)
#line 976 "goal_form.m"
                *hlds__goal_form__Min_9 = (MR_Integer) 1;
#line 977 "goal_form.m"
              else
#line 978 "goal_form.m"
                *hlds__goal_form__Min_9 = (MR_Integer) 0;
#line 981 "goal_form.m"
              *hlds__goal_form__Max_10 = *hlds__goal_form__Min_9;
#line 971 "goal_form.m"
            }
#line 970 "goal_form.m"
          else
#line 970 "goal_form.m"
            if (((((MR_tag((MR_Word) hlds__goal_form__GoalExpr_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_11, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 983 "goal_form.m"
              {
#line 983 "goal_form.m"
                MR_Word hlds__goal_form__Goals_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_11, (MR_Integer) 2)));
#line 983 "goal_form.m"
                MR_Word hlds__goal_form__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_11, (MR_Integer) 1)));

#line 984 "goal_form.m"
                {
#line 984 "goal_form.m"
                  hlds__goal_form__count_recursive_calls_conj_7_p_0(hlds__goal_form__Goals_38, hlds__goal_form__PredId_7, hlds__goal_form__ProcId_8, (MR_Integer) 0, (MR_Integer) 0, hlds__goal_form__Min_9, hlds__goal_form__Max_10);
#line 984 "goal_form.m"
                  return;
                }
#line 983 "goal_form.m"
              }
#line 970 "goal_form.m"
            else
#line 970 "goal_form.m"
              if (((((MR_tag((MR_Word) hlds__goal_form__GoalExpr_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_11, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 986 "goal_form.m"
                {
#line 986 "goal_form.m"
                  MR_Word hlds__goal_form__Goals_76 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_11, (MR_Integer) 1)));

#line 987 "goal_form.m"
                  {
#line 987 "goal_form.m"
                    hlds__goal_form__count_recursive_calls_disj_5_p_0(hlds__goal_form__Goals_76, hlds__goal_form__PredId_7, hlds__goal_form__ProcId_8, hlds__goal_form__Min_9, hlds__goal_form__Max_10);
#line 987 "goal_form.m"
                    return;
                  }
#line 986 "goal_form.m"
                }
#line 970 "goal_form.m"
              else
#line 970 "goal_form.m"
                if (((((MR_tag((MR_Word) hlds__goal_form__GoalExpr_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_11, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 992 "goal_form.m"
                  {
#line 992 "goal_form.m"
                    MR_Word hlds__goal_form__Cond_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_11, (MR_Integer) 2)));
#line 992 "goal_form.m"
                    MR_Word hlds__goal_form__Then_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_11, (MR_Integer) 3)));
#line 992 "goal_form.m"
                    MR_Word hlds__goal_form__Else_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_11, (MR_Integer) 4)));
#line 992 "goal_form.m"
                    MR_Integer hlds__goal_form__CMin_46;
#line 992 "goal_form.m"
                    MR_Integer hlds__goal_form__CMax_47;
#line 992 "goal_form.m"
                    MR_Integer hlds__goal_form__TMin_48;
#line 992 "goal_form.m"
                    MR_Integer hlds__goal_form__TMax_49;
#line 992 "goal_form.m"
                    MR_Integer hlds__goal_form__EMin_50;
#line 992 "goal_form.m"
                    MR_Integer hlds__goal_form__EMax_51;
#line 992 "goal_form.m"
                    MR_Integer hlds__goal_form__CTMin_52;
#line 992 "goal_form.m"
                    MR_Integer hlds__goal_form__CTMax_53;
#line 992 "goal_form.m"
                    MR_Word hlds__goal_form__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_11, (MR_Integer) 1)));

#line 993 "goal_form.m"
                    {
#line 993 "goal_form.m"
                      hlds__goal_form__count_recursive_calls_5_p_0(hlds__goal_form__Cond_43, hlds__goal_form__PredId_7, hlds__goal_form__ProcId_8, &hlds__goal_form__CMin_46, &hlds__goal_form__CMax_47);
                    }
#line 994 "goal_form.m"
                    {
#line 994 "goal_form.m"
                      hlds__goal_form__count_recursive_calls_5_p_0(hlds__goal_form__Then_44, hlds__goal_form__PredId_7, hlds__goal_form__ProcId_8, &hlds__goal_form__TMin_48, &hlds__goal_form__TMax_49);
                    }
#line 995 "goal_form.m"
                    {
#line 995 "goal_form.m"
                      hlds__goal_form__count_recursive_calls_5_p_0(hlds__goal_form__Else_45, hlds__goal_form__PredId_7, hlds__goal_form__ProcId_8, &hlds__goal_form__EMin_50, &hlds__goal_form__EMax_51);
                    }
#line 996 "goal_form.m"
                    hlds__goal_form__CTMin_52 = (hlds__goal_form__CMin_46 + hlds__goal_form__TMin_48);
#line 997 "goal_form.m"
                    hlds__goal_form__CTMax_53 = (hlds__goal_form__CMax_47 + hlds__goal_form__TMax_49);
#line 998 "goal_form.m"
                    {
#line 998 "goal_form.m"
                      mercury__int__min_3_p_0(hlds__goal_form__CTMin_52, hlds__goal_form__EMin_50, hlds__goal_form__Min_9);
                    }
#line 999 "goal_form.m"
                    {
#line 999 "goal_form.m"
                      mercury__int__max_3_p_0(hlds__goal_form__CTMax_53, hlds__goal_form__EMax_51, hlds__goal_form__Max_10);
#line 999 "goal_form.m"
                      return;
                    }
#line 992 "goal_form.m"
                  }
#line 970 "goal_form.m"
                else
#line 970 "goal_form.m"
                  if (((((MR_tag((MR_Word) hlds__goal_form__GoalExpr_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_11, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 1004 "goal_form.m"
                    {
#line 1004 "goal_form.m"
                      MR_Word hlds__goal_form__Reason_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_11, (MR_Integer) 1)));
#line 1004 "goal_form.m"
                      MR_Word hlds__goal_form__SubGoal_77 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_11, (MR_Integer) 2)));
#line 1006 "goal_form.m"
                      MR_Word hlds__goal_form__FGT_57;
#line 1006 "goal_form.m"
                      MR_Word hlds__goal_form__V_56_56;

#line 1006 "goal_form.m"
                      hlds__goal_form__succeeded = ((((MR_tag((MR_Word) hlds__goal_form__Reason_55)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__Reason_55, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 1006 "goal_form.m"
                      if (hlds__goal_form__succeeded)
#line 1006 "goal_form.m"
                        {
#line 1006 "goal_form.m"
                          hlds__goal_form__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__Reason_55, (MR_Integer) 1)));
#line 1006 "goal_form.m"
                          hlds__goal_form__FGT_57 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__Reason_55, (MR_Integer) 2)));
#line 1008 "goal_form.m"
                          if ((hlds__goal_form__FGT_57 == (MR_Integer) 1))
#line 1007 "goal_form.m"
                            hlds__goal_form__succeeded = MR_TRUE;
#line 1008 "goal_form.m"
                          else
#line 1008 "goal_form.m"
                            if ((hlds__goal_form__FGT_57 == (MR_Integer) 2))
#line 1008 "goal_form.m"
                              hlds__goal_form__succeeded = MR_TRUE;
#line 1008 "goal_form.m"
                            else
#line 1008 "goal_form.m"
                              hlds__goal_form__succeeded = MR_FALSE;
#line 1006 "goal_form.m"
                        }
#line 1015 "goal_form.m"
                      if (hlds__goal_form__succeeded)
#line 1013 "goal_form.m"
                        {
#line 1013 "goal_form.m"
                          *hlds__goal_form__Min_9 = (MR_Integer) 0;
#line 1014 "goal_form.m"
                          *hlds__goal_form__Max_10 = (MR_Integer) 0;
#line 1013 "goal_form.m"
                        }
#line 1015 "goal_form.m"
                      else
#line 1016 "goal_form.m"
                        {
#line 1016 "goal_form.m"
                          /* direct tailcall eliminated */
#line 1016 "goal_form.m"
                          {
#line 1016 "goal_form.m"
                            MR_Word hlds__goal_form__Goal__tmp_copy_6 = hlds__goal_form__SubGoal_77;

#line 1016 "goal_form.m"
                            hlds__goal_form__Goal_6 = hlds__goal_form__Goal__tmp_copy_6;
#line 1016 "goal_form.m"
                          }
#line 1016 "goal_form.m"
                          continue;
#line 1016 "goal_form.m"
                        }
#line 1004 "goal_form.m"
                    }
#line 970 "goal_form.m"
                  else
#line 970 "goal_form.m"
                    if (((((MR_tag((MR_Word) hlds__goal_form__GoalExpr_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_11, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 1019 "goal_form.m"
                      {
#line 1019 "goal_form.m"
                        MR_Word hlds__goal_form__ShortHand_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_11, (MR_Integer) 1)));

#line 1024 "goal_form.m"
                        if (((MR_tag((MR_Word) hlds__goal_form__ShortHand_58)) == (MR_mktag((MR_Integer) 1))))
#line 1021 "goal_form.m"
                          {
#line 1021 "goal_form.m"
                            MR_Word hlds__goal_form__Goal_85 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__ShortHand_58, (MR_Integer) 4)));
#line 1021 "goal_form.m"
                            MR_Word hlds__goal_form__Goals_86 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__ShortHand_58, (MR_Integer) 5)));
#line 1021 "goal_form.m"
                            MR_Word hlds__goal_form__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__ShortHand_58, (MR_Integer) 0)));
#line 1021 "goal_form.m"
                            MR_Word hlds__goal_form__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__ShortHand_58, (MR_Integer) 1)));
#line 1021 "goal_form.m"
                            MR_Word hlds__goal_form__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__ShortHand_58, (MR_Integer) 2)));
#line 1021 "goal_form.m"
                            MR_Word hlds__goal_form__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__ShortHand_58, (MR_Integer) 3)));
#line 1021 "goal_form.m"
                            MR_Word hlds__goal_form__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__ShortHand_58, (MR_Integer) 6)));

#line 1054 "goal_form.m"
                            if ((hlds__goal_form__Goals_86 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1053 "goal_form.m"
                              {
#line 1053 "goal_form.m"
                                /* direct tailcall eliminated */
#line 1053 "goal_form.m"
                                {
#line 1053 "goal_form.m"
                                  MR_Word hlds__goal_form__Goal__tmp_copy_6 = hlds__goal_form__Goal_85;

#line 1053 "goal_form.m"
                                  hlds__goal_form__Goal_6 = hlds__goal_form__Goal__tmp_copy_6;
#line 1053 "goal_form.m"
                                }
#line 1053 "goal_form.m"
                                continue;
#line 1053 "goal_form.m"
                              }
#line 1054 "goal_form.m"
                            else
#line 1055 "goal_form.m"
                              {
#line 1055 "goal_form.m"
                                MR_Integer hlds__goal_form__Min0_93;
#line 1055 "goal_form.m"
                                MR_Integer hlds__goal_form__Max0_94;
#line 1055 "goal_form.m"
                                MR_Integer hlds__goal_form__Min1_95;
#line 1055 "goal_form.m"
                                MR_Integer hlds__goal_form__Max1_96;

#line 1056 "goal_form.m"
                                {
#line 1056 "goal_form.m"
                                  hlds__goal_form__count_recursive_calls_5_p_0(hlds__goal_form__Goal_85, hlds__goal_form__PredId_7, hlds__goal_form__ProcId_8, &hlds__goal_form__Min0_93, &hlds__goal_form__Max0_94);
                                }
#line 1057 "goal_form.m"
                                {
#line 1057 "goal_form.m"
                                  hlds__goal_form__count_recursive_calls_disj_5_p_0(hlds__goal_form__Goals_86, hlds__goal_form__PredId_7, hlds__goal_form__ProcId_8, &hlds__goal_form__Min1_95, &hlds__goal_form__Max1_96);
                                }
#line 1058 "goal_form.m"
                                {
#line 1058 "goal_form.m"
                                  mercury__int__min_3_p_0(hlds__goal_form__Min0_93, hlds__goal_form__Min1_95, hlds__goal_form__Min_9);
                                }
#line 1059 "goal_form.m"
                                {
#line 1059 "goal_form.m"
                                  mercury__int__max_3_p_0(hlds__goal_form__Max0_94, hlds__goal_form__Max1_96, hlds__goal_form__Max_10);
#line 1059 "goal_form.m"
                                  return;
                                }
#line 1055 "goal_form.m"
                              }
#line 1021 "goal_form.m"
                          }
#line 1024 "goal_form.m"
                        else
#line 1024 "goal_form.m"
                          if (((MR_tag((MR_Word) hlds__goal_form__ShortHand_58)) == (MR_mktag((MR_Integer) 0))))
#line 1028 "goal_form.m"
                            {
#line 1030 "goal_form.m"
                              {
#line 1030 "goal_form.m"
                                mercury__require__unexpected_3_p_0((MR_String) "hlds.goal_form", (MR_String) "predicate \140hlds.goal_form.count_recursive_calls\'/5", (MR_String) "bi_implication");
#line 1030 "goal_form.m"
                                return;
                              }
#line 1028 "goal_form.m"
                            }
#line 1024 "goal_form.m"
                          else
#line 1025 "goal_form.m"
                            {
#line 1025 "goal_form.m"
                              MR_Word hlds__goal_form__SubGoal_78 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__ShortHand_58, (MR_Integer) 2)));
#line 1025 "goal_form.m"
                              MR_Word hlds__goal_form__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__ShortHand_58, (MR_Integer) 0)));
#line 1025 "goal_form.m"
                              MR_Word hlds__goal_form__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__ShortHand_58, (MR_Integer) 1)));

#line 1026 "goal_form.m"
                              /* direct tailcall eliminated */
#line 1026 "goal_form.m"
                              {
#line 1026 "goal_form.m"
                                MR_Word hlds__goal_form__Goal__tmp_copy_6 = hlds__goal_form__SubGoal_78;

#line 1026 "goal_form.m"
                                hlds__goal_form__Goal_6 = hlds__goal_form__Goal__tmp_copy_6;
#line 1026 "goal_form.m"
                              }
#line 1026 "goal_form.m"
                              continue;
#line 1025 "goal_form.m"
                            }
#line 1019 "goal_form.m"
                      }
#line 970 "goal_form.m"
                    else
#line 970 "goal_form.m"
                      if (((((MR_tag((MR_Word) hlds__goal_form__GoalExpr_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_11, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 989 "goal_form.m"
                        {
#line 989 "goal_form.m"
                          MR_Word hlds__goal_form__Cases_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_11, (MR_Integer) 3)));
#line 989 "goal_form.m"
                          MR_Word hlds__goal_form__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_11, (MR_Integer) 1)));
#line 989 "goal_form.m"
                          MR_Word hlds__goal_form__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_11, (MR_Integer) 2)));

#line 990 "goal_form.m"
                          {
#line 990 "goal_form.m"
                            hlds__goal_form__count_recursive_calls_cases_5_p_0(hlds__goal_form__Cases_41, hlds__goal_form__PredId_7, hlds__goal_form__ProcId_8, hlds__goal_form__Min_9, hlds__goal_form__Max_10);
#line 990 "goal_form.m"
                            return;
                          }
#line 989 "goal_form.m"
                        }
#line 970 "goal_form.m"
                      else
#line 967 "goal_form.m"
                        {
#line 968 "goal_form.m"
                          *hlds__goal_form__Min_9 = (MR_Integer) 0;
#line 969 "goal_form.m"
                          *hlds__goal_form__Max_10 = (MR_Integer) 0;
#line 967 "goal_form.m"
                        }
#line 961 "goal_form.m"
      }
#line 961 "goal_form.m"
      break;
#line 961 "goal_form.m"
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
#line 920 "goal_form.m"
  {
#line 920 "goal_form.m"
    MR_bool hlds__goal_form__succeeded;
#line 920 "goal_form.m"
    MR_Word hlds__goal_form__GoalExpr_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__HeadVar__1_1, (MR_Integer) 0)));
#line 920 "goal_form.m"
    MR_Word hlds__goal_form__GoalInfo_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__HeadVar__1_1, (MR_Integer) 1)));
#line 920 "goal_form.m"
    MR_Word hlds__goal_form__Detism_4;
#line 920 "goal_form.m"
    MR_Word hlds__goal_form__CanFail_5;
#line 922 "goal_form.m"
    MR_Word hlds__goal_form__V_6_6;

#line 921 "goal_form.m"
    {
#line 921 "goal_form.m"
      hlds__goal_form__Detism_4 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(hlds__goal_form__GoalInfo_3);
    }
#line 922 "goal_form.m"
    {
#line 922 "goal_form.m"
      parse_tree__prog_data__determinism_components_3_p_0(hlds__goal_form__Detism_4, &hlds__goal_form__CanFail_5, &hlds__goal_form__V_6_6);
    }
#line 925 "goal_form.m"
    if ((hlds__goal_form__CanFail_5 == (MR_Integer) 0))
#line 932 "goal_form.m"
      {
#line 932 "goal_form.m"
        MR_Word hlds__goal_form__ConjType_7;
#line 932 "goal_form.m"
        MR_Word hlds__goal_form__Goals_8;

#line 932 "goal_form.m"
        hlds__goal_form__succeeded = ((((MR_tag((MR_Word) hlds__goal_form__GoalExpr_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_2, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 932 "goal_form.m"
        if (hlds__goal_form__succeeded)
#line 932 "goal_form.m"
          {
#line 932 "goal_form.m"
            hlds__goal_form__ConjType_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_2, (MR_Integer) 1)));
#line 932 "goal_form.m"
            hlds__goal_form__Goals_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_2, (MR_Integer) 2)));
#line 933 "goal_form.m"
            hlds__goal_form__succeeded = (hlds__goal_form__ConjType_7 == (MR_Integer) 0);
#line 932 "goal_form.m"
            if (hlds__goal_form__succeeded)
#line 934 "goal_form.m"
              {
#line 934 "goal_form.m"
                return hlds__goal_form__succeeded = hlds__goal_form__cannot_fail_before_stack_flush_conj_1_p_0(hlds__goal_form__Goals_8);
              }
#line 932 "goal_form.m"
          }
#line 932 "goal_form.m"
      }
#line 925 "goal_form.m"
    else
#line 924 "goal_form.m"
      hlds__goal_form__succeeded = MR_TRUE;
#line 920 "goal_form.m"
    return hlds__goal_form__succeeded;
#line 920 "goal_form.m"
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
#line 887 "goal_form.m"
  {
#line 887 "goal_form.m"
    MR_bool hlds__goal_form__succeeded;
#line 887 "goal_form.m"
    MR_Word hlds__goal_form__GoalExpr_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__HeadVar__1_1, (MR_Integer) 0)));
#line 887 "goal_form.m"
    MR_Word hlds__goal_form__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__HeadVar__1_1, (MR_Integer) 1)));

#line 888 "goal_form.m"
    {
#line 888 "goal_form.m"
      return hlds__goal_form__succeeded = hlds__goal_form__cannot_stack_flush_2_1_p_0(hlds__goal_form__GoalExpr_2);
    }
#line 887 "goal_form.m"
    return hlds__goal_form__succeeded;
#line 887 "goal_form.m"
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
#line 761 "goal_form.m"
  {
#line 761 "goal_form.m"
    MR_bool hlds__goal_form__succeeded;
#line 761 "goal_form.m"
    MR_Word hlds__goal_form__V_4_4;

#line 762 "goal_form.m"
    {
#line 762 "goal_form.m"
      hlds__goal_form__goal_list_may_allocate_heap_2_p_0(hlds__goal_form__Goals_2, &hlds__goal_form__V_4_4);
    }
#line 762 "goal_form.m"
    hlds__goal_form__succeeded = ((MR_Integer) 1 == hlds__goal_form__V_4_4);
#line 761 "goal_form.m"
    return hlds__goal_form__succeeded;
#line 761 "goal_form.m"
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
#line 758 "goal_form.m"
  {
#line 758 "goal_form.m"
    MR_bool hlds__goal_form__succeeded;
#line 758 "goal_form.m"
    MR_Word hlds__goal_form__V_4_4;
#line 758 "goal_form.m"
    MR_Word hlds__goal_form__GoalExpr_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Goal_2, (MR_Integer) 0)));
#line 766 "goal_form.m"
    MR_Word hlds__goal_form___GoalInfo_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Goal_2, (MR_Integer) 1)));

#line 767 "goal_form.m"
    {
#line 767 "goal_form.m"
      hlds__goal_form__goal_may_allocate_heap_2_2_p_0(hlds__goal_form__GoalExpr_6, &hlds__goal_form__V_4_4);
    }
#line 759 "goal_form.m"
    hlds__goal_form__succeeded = ((MR_Integer) 1 == hlds__goal_form__V_4_4);
#line 758 "goal_form.m"
    return hlds__goal_form__succeeded;
#line 758 "goal_form.m"
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
#line 701 "goal_form.m"
  {
#line 701 "goal_form.m"
    MR_bool hlds__goal_form__succeeded;
#line 701 "goal_form.m"
    MR_Word hlds__goal_form__HeadVar__2_2;
#line 701 "goal_form.m"
    MR_Word hlds__goal_form__GoalExpr_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__HeadVar__1_1, (MR_Integer) 0)));
#line 701 "goal_form.m"
    MR_Word hlds__goal_form___GoalInfo_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__HeadVar__1_1, (MR_Integer) 1)));

#line 701 "goal_form.m"
    {
#line 701 "goal_form.m"
      return hlds__goal_form__HeadVar__2_2 = hlds__goal_form__goal_is_flat_expr_1_f_0(hlds__goal_form__GoalExpr_3);
    }
#line 701 "goal_form.m"
    return hlds__goal_form__HeadVar__2_2;
#line 701 "goal_form.m"
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
#line 432 "goal_form.m"
  {
#line 432 "goal_form.m"
    MR_bool hlds__goal_form__succeeded;

#line 432 "goal_form.m"
    {
#line 432 "goal_form.m"
      hlds__goal_form__succeeded = hlds__goal_form__goal_cannot_loop_or_throw_1_p_0(hlds__goal_form__Goal_2);
    }
#line 432 "goal_form.m"
    hlds__goal_form__succeeded = !(hlds__goal_form__succeeded);
#line 432 "goal_form.m"
    return hlds__goal_form__succeeded;
#line 432 "goal_form.m"
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
#line 427 "goal_form.m"
  {
#line 427 "goal_form.m"
    MR_bool hlds__goal_form__succeeded;
#line 427 "goal_form.m"
    MR_Word hlds__goal_form__V_3_3;
#line 427 "goal_form.m"
    MR_Word hlds__goal_form__V_6_6;
#line 427 "goal_form.m"
    MR_Word hlds__goal_form__GoalExpr_9;
#line 427 "goal_form.m"
    MR_Word hlds__goal_form__GoalInfo_10;
#line 427 "goal_form.m"
    MR_Word hlds__goal_form__Determinism_11;

#line 428 "goal_form.m"
    {
#line 428 "goal_form.m"
      hlds__goal_form__V_3_3 = hlds__goal_form__goal_can_loop_func_2_f_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__goal_form__Goal_2);
    }
#line 428 "goal_form.m"
    hlds__goal_form__succeeded = (hlds__goal_form__V_3_3 == (MR_Integer) 0);
#line 427 "goal_form.m"
    if (hlds__goal_form__succeeded)
#line 427 "goal_form.m"
      {
#line 429 "goal_form.m"
        hlds__goal_form__V_6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 572 "goal_form.m"
        hlds__goal_form__GoalExpr_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Goal_2, (MR_Integer) 0)));
#line 572 "goal_form.m"
        hlds__goal_form__GoalInfo_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Goal_2, (MR_Integer) 1)));
#line 574 "goal_form.m"
        {
#line 574 "goal_form.m"
          hlds__goal_form__Determinism_11 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(hlds__goal_form__GoalInfo_10);
        }
#line 575 "goal_form.m"
        hlds__goal_form__succeeded = (hlds__goal_form__Determinism_11 == (MR_Integer) 6);
#line 577 "goal_form.m"
        if (hlds__goal_form__succeeded)
#line 576 "goal_form.m"
          hlds__goal_form__succeeded = MR_FALSE;
#line 577 "goal_form.m"
        else
#line 578 "goal_form.m"
          {
#line 578 "goal_form.m"
            MR_Word hlds__goal_form__V_13_13;

#line 578 "goal_form.m"
            {
#line 578 "goal_form.m"
              hlds__goal_form__V_13_13 = hlds__goal_form__goal_expr_can_throw_2_f_0(hlds__goal_form__V_6_6, hlds__goal_form__GoalExpr_9);
            }
#line 429 "goal_form.m"
            hlds__goal_form__succeeded = (hlds__goal_form__V_13_13 == (MR_Integer) 0);
#line 578 "goal_form.m"
          }
#line 427 "goal_form.m"
      }
#line 427 "goal_form.m"
    return hlds__goal_form__succeeded;
#line 427 "goal_form.m"
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
#line 425 "goal_form.m"
  {
#line 425 "goal_form.m"
    MR_bool hlds__goal_form__succeeded;

#line 425 "goal_form.m"
    {
#line 425 "goal_form.m"
      hlds__goal_form__succeeded = hlds__goal_form__goal_cannot_loop_or_throw_2_p_0(hlds__goal_form__ModuleInfo_3, hlds__goal_form__Goal_4);
    }
#line 425 "goal_form.m"
    hlds__goal_form__succeeded = !(hlds__goal_form__succeeded);
#line 425 "goal_form.m"
    return hlds__goal_form__succeeded;
#line 425 "goal_form.m"
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
#line 420 "goal_form.m"
  {
#line 420 "goal_form.m"
    MR_bool hlds__goal_form__succeeded;
#line 420 "goal_form.m"
    MR_Word hlds__goal_form__V_5_5;
#line 420 "goal_form.m"
    MR_Word hlds__goal_form__V_6_6;
#line 420 "goal_form.m"
    MR_Word hlds__goal_form__GoalExpr_11;
#line 420 "goal_form.m"
    MR_Word hlds__goal_form__GoalInfo_12;
#line 420 "goal_form.m"
    MR_Word hlds__goal_form__Determinism_13;

#line 421 "goal_form.m"
    {
#line 421 "goal_form.m"
      hlds__goal_form__V_6_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 421 "goal_form.m"
      MR_hl_field(MR_mktag(1), hlds__goal_form__V_6_6, 0) = ((MR_Box) (hlds__goal_form__ModuleInfo_3));
#line 421 "goal_form.m"
    }
#line 421 "goal_form.m"
    {
#line 421 "goal_form.m"
      hlds__goal_form__V_5_5 = hlds__goal_form__goal_can_loop_func_2_f_0(hlds__goal_form__V_6_6, hlds__goal_form__Goal_4);
    }
#line 421 "goal_form.m"
    hlds__goal_form__succeeded = (hlds__goal_form__V_5_5 == (MR_Integer) 0);
#line 420 "goal_form.m"
    if (hlds__goal_form__succeeded)
#line 420 "goal_form.m"
      {
#line 572 "goal_form.m"
        hlds__goal_form__GoalExpr_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Goal_4, (MR_Integer) 0)));
#line 572 "goal_form.m"
        hlds__goal_form__GoalInfo_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Goal_4, (MR_Integer) 1)));
#line 574 "goal_form.m"
        {
#line 574 "goal_form.m"
          hlds__goal_form__Determinism_13 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(hlds__goal_form__GoalInfo_12);
        }
#line 575 "goal_form.m"
        hlds__goal_form__succeeded = (hlds__goal_form__Determinism_13 == (MR_Integer) 6);
#line 577 "goal_form.m"
        if (hlds__goal_form__succeeded)
#line 576 "goal_form.m"
          hlds__goal_form__succeeded = MR_FALSE;
#line 577 "goal_form.m"
        else
#line 578 "goal_form.m"
          {
#line 578 "goal_form.m"
            MR_Word hlds__goal_form__V_15_15;

#line 578 "goal_form.m"
            {
#line 578 "goal_form.m"
              hlds__goal_form__V_15_15 = hlds__goal_form__goal_expr_can_throw_2_f_0(hlds__goal_form__V_6_6, hlds__goal_form__GoalExpr_11);
            }
#line 422 "goal_form.m"
            hlds__goal_form__succeeded = (hlds__goal_form__V_15_15 == (MR_Integer) 0);
#line 578 "goal_form.m"
          }
#line 420 "goal_form.m"
      }
#line 420 "goal_form.m"
    return hlds__goal_form__succeeded;
#line 420 "goal_form.m"
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
#line 417 "goal_form.m"
  {
#line 417 "goal_form.m"
    MR_bool hlds__goal_form__succeeded;
#line 417 "goal_form.m"
    MR_Word hlds__goal_form__V_6_6;
#line 417 "goal_form.m"
    MR_Word hlds__goal_form__GoalExpr_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Goal_4, (MR_Integer) 0)));
#line 417 "goal_form.m"
    MR_Word hlds__goal_form__GoalInfo_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Goal_4, (MR_Integer) 1)));
#line 417 "goal_form.m"
    MR_Word hlds__goal_form__Determinism_11;

#line 418 "goal_form.m"
    {
#line 418 "goal_form.m"
      hlds__goal_form__V_6_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 418 "goal_form.m"
      MR_hl_field(MR_mktag(1), hlds__goal_form__V_6_6, 0) = ((MR_Box) (hlds__goal_form__ModuleInfo_3));
#line 418 "goal_form.m"
    }
#line 574 "goal_form.m"
    {
#line 574 "goal_form.m"
      hlds__goal_form__Determinism_11 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(hlds__goal_form__GoalInfo_10);
    }
#line 575 "goal_form.m"
    hlds__goal_form__succeeded = (hlds__goal_form__Determinism_11 == (MR_Integer) 6);
#line 577 "goal_form.m"
    if (hlds__goal_form__succeeded)
#line 576 "goal_form.m"
      hlds__goal_form__succeeded = MR_TRUE;
#line 577 "goal_form.m"
    else
#line 578 "goal_form.m"
      {
#line 578 "goal_form.m"
        MR_Word hlds__goal_form__V_13_13;

#line 578 "goal_form.m"
        {
#line 578 "goal_form.m"
          hlds__goal_form__V_13_13 = hlds__goal_form__goal_expr_can_throw_2_f_0(hlds__goal_form__V_6_6, hlds__goal_form__GoalExpr_9);
        }
#line 418 "goal_form.m"
        hlds__goal_form__succeeded = (hlds__goal_form__V_13_13 == (MR_Integer) 1);
#line 578 "goal_form.m"
      }
#line 417 "goal_form.m"
    return hlds__goal_form__succeeded;
#line 417 "goal_form.m"
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
#line 574 "goal_form.m"
    {
#line 574 "goal_form.m"
      hlds__goal_form__Determinism_11 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(hlds__goal_form__GoalInfo_10);
    }
#line 575 "goal_form.m"
    hlds__goal_form__succeeded = (hlds__goal_form__Determinism_11 == (MR_Integer) 6);
#line 577 "goal_form.m"
    if (hlds__goal_form__succeeded)
#line 576 "goal_form.m"
      hlds__goal_form__succeeded = MR_FALSE;
#line 577 "goal_form.m"
    else
#line 578 "goal_form.m"
      {
#line 578 "goal_form.m"
        MR_Word hlds__goal_form__V_13_13;

#line 578 "goal_form.m"
        {
#line 578 "goal_form.m"
          hlds__goal_form__V_13_13 = hlds__goal_form__goal_expr_can_throw_2_f_0(hlds__goal_form__V_6_6, hlds__goal_form__GoalExpr_9);
        }
#line 415 "goal_form.m"
        hlds__goal_form__succeeded = (hlds__goal_form__V_13_13 == (MR_Integer) 0);
#line 578 "goal_form.m"
      }
#line 414 "goal_form.m"
    return hlds__goal_form__succeeded;
#line 414 "goal_form.m"
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
#line 411 "goal_form.m"
  {
#line 411 "goal_form.m"
    MR_bool hlds__goal_form__succeeded;
#line 411 "goal_form.m"
    MR_Word hlds__goal_form__V_5_5;
#line 411 "goal_form.m"
    MR_Word hlds__goal_form__V_6_6;

#line 412 "goal_form.m"
    {
#line 412 "goal_form.m"
      hlds__goal_form__V_6_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 412 "goal_form.m"
      MR_hl_field(MR_mktag(1), hlds__goal_form__V_6_6, 0) = ((MR_Box) (hlds__goal_form__ModuleInfo_3));
#line 412 "goal_form.m"
    }
#line 412 "goal_form.m"
    {
#line 412 "goal_form.m"
      hlds__goal_form__V_5_5 = hlds__goal_form__goal_can_loop_func_2_f_0(hlds__goal_form__V_6_6, hlds__goal_form__Goal_4);
    }
#line 412 "goal_form.m"
    hlds__goal_form__succeeded = (hlds__goal_form__V_5_5 == (MR_Integer) 1);
#line 411 "goal_form.m"
    return hlds__goal_form__succeeded;
#line 411 "goal_form.m"
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
    hlds__goal_form__succeeded = (hlds__goal_form__V_5_5 == (MR_Integer) 0);
#line 408 "goal_form.m"
    return hlds__goal_form__succeeded;
#line 408 "goal_form.m"
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
#line 402 "goal_form.m"
  {
#line 402 "goal_form.m"
    MR_bool hlds__goal_form__succeeded;
#line 408 "goal_form.m"
    MR_Word hlds__goal_form__V_14_14;
#line 408 "goal_form.m"
    MR_Word hlds__goal_form__V_15_15;

#line 409 "goal_form.m"
    {
#line 409 "goal_form.m"
      hlds__goal_form__V_15_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 409 "goal_form.m"
      MR_hl_field(MR_mktag(1), hlds__goal_form__V_15_15, 0) = ((MR_Box) (hlds__goal_form__STATE_VARIABLE_ModuleInfo_0_9));
#line 409 "goal_form.m"
    }
#line 409 "goal_form.m"
    {
#line 409 "goal_form.m"
      hlds__goal_form__V_14_14 = hlds__goal_form__goal_can_loop_func_2_f_0(hlds__goal_form__V_15_15, hlds__goal_form__Goal_5);
    }
#line 409 "goal_form.m"
    hlds__goal_form__succeeded = (hlds__goal_form__V_14_14 == (MR_Integer) 0);
#line 402 "goal_form.m"
    if (hlds__goal_form__succeeded)
#line 394 "goal_form.m"
      {
#line 394 "goal_form.m"
        MR_Word hlds__goal_form__ThrowResult_8;

#line 394 "goal_form.m"
        {
#line 394 "goal_form.m"
          hlds__goal_form__goal_can_throw_4_p_0(hlds__goal_form__Goal_5, &hlds__goal_form__ThrowResult_8, hlds__goal_form__STATE_VARIABLE_ModuleInfo_0_9, hlds__goal_form__STATE_VARIABLE_ModuleInfo_10);
        }
#line 398 "goal_form.m"
        if ((hlds__goal_form__ThrowResult_8 == (MR_Integer) 0))
#line 397 "goal_form.m"
          *hlds__goal_form__Result_6 = (MR_Integer) 0;
#line 398 "goal_form.m"
        else
#line 400 "goal_form.m"
          *hlds__goal_form__Result_6 = (MR_Integer) 1;
#line 394 "goal_form.m"
      }
#line 402 "goal_form.m"
    else
#line 403 "goal_form.m"
      {
#line 403 "goal_form.m"
        *hlds__goal_form__Result_6 = (MR_Integer) 0;
#line 403 "goal_form.m"
        *hlds__goal_form__STATE_VARIABLE_ModuleInfo_10 = hlds__goal_form__STATE_VARIABLE_ModuleInfo_0_9;
#line 403 "goal_form.m"
      }
#line 402 "goal_form.m"
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
#line 256 "goal_form.m"
  {
#line 256 "goal_form.m"
    MR_bool hlds__goal_form__succeeded;
#line 256 "goal_form.m"
    MR_Word hlds__goal_form__GoalExpr_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__HeadVar__1_1, (MR_Integer) 0)));
#line 256 "goal_form.m"
    MR_Word hlds__goal_form__GoalInfo_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__HeadVar__1_1, (MR_Integer) 1)));
#line 256 "goal_form.m"
    MR_Word hlds__goal_form__Determinism_9;

#line 257 "goal_form.m"
    {
#line 257 "goal_form.m"
      hlds__goal_form__Determinism_9 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(hlds__goal_form__GoalInfo_6);
    }
#line 258 "goal_form.m"
    hlds__goal_form__succeeded = (hlds__goal_form__Determinism_9 == (MR_Integer) 6);
#line 258 "goal_form.m"
    hlds__goal_form__succeeded = !(hlds__goal_form__succeeded);
#line 260 "goal_form.m"
    if (hlds__goal_form__succeeded)
#line 259 "goal_form.m"
      {
#line 259 "goal_form.m"
        hlds__goal_form__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_99_97_110_95_116_104_114_111_119_95_50_95_95_91_50_93_95_48_5_p_0(hlds__goal_form__GoalExpr_5, hlds__goal_form__Result_7, hlds__goal_form__STATE_VARIABLE_ModuleInfo_0_10, hlds__goal_form__STATE_VARIABLE_ModuleInfo_11);
#line 259 "goal_form.m"
        return;
      }
#line 260 "goal_form.m"
    else
#line 261 "goal_form.m"
      {
#line 261 "goal_form.m"
        *hlds__goal_form__Result_7 = (MR_Integer) 0;
#line 261 "goal_form.m"
        *hlds__goal_form__STATE_VARIABLE_ModuleInfo_11 = hlds__goal_form__STATE_VARIABLE_ModuleInfo_0_10;
#line 261 "goal_form.m"
      }
#line 256 "goal_form.m"
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
#line 226 "goal_form.m"
  while (MR_TRUE)
#line 226 "goal_form.m"
    {
#line 226 "goal_form.m"
      /* tailcall optimized into a loop */
#line 226 "goal_form.m"
      {
#line 226 "goal_form.m"
        MR_bool hlds__goal_form__succeeded;

#line 226 "goal_form.m"
        if ((hlds__goal_form__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 226 "goal_form.m"
          hlds__goal_form__succeeded = MR_TRUE;
#line 226 "goal_form.m"
        else
#line 227 "goal_form.m"
          {
#line 227 "goal_form.m"
            MR_Word hlds__goal_form__TypeCtorInfo_10_14;
#line 227 "goal_form.m"
            MR_Word hlds__goal_form__Disjunct_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__HeadVar__2_2, (MR_Integer) 0)));
#line 227 "goal_form.m"
            MR_Word hlds__goal_form__Disjuncts_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__HeadVar__2_2, (MR_Integer) 1)));
#line 227 "goal_form.m"
            MR_Word hlds__goal_form__GoalInfo_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Disjunct_5, (MR_Integer) 1)));
#line 227 "goal_form.m"
            MR_Word hlds__goal_form__CodeModel_11;
#line 227 "goal_form.m"
            MR_Word hlds__goal_form__Conj_12;
#line 227 "goal_form.m"
            MR_Word hlds__goal_form__ToAssignVars_13;
#line 219 "goal_form.m"
            MR_Word hlds__goal_form___GoalExpr_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Disjunct_5, (MR_Integer) 0)));

#line 220 "goal_form.m"
            {
#line 220 "goal_form.m"
              hlds__goal_form__CodeModel_11 = hlds__code_model__goal_info_get_code_model_1_f_0(hlds__goal_form__GoalInfo_10);
            }
#line 221 "goal_form.m"
            hlds__goal_form__succeeded = (hlds__goal_form__CodeModel_11 == (MR_Integer) 0);
#line 227 "goal_form.m"
            if (hlds__goal_form__succeeded)
#line 227 "goal_form.m"
              {
#line 222 "goal_form.m"
                {
#line 222 "goal_form.m"
                  hlds__hlds_goal__goal_to_conj_list_2_p_0(hlds__goal_form__Disjunct_5, &hlds__goal_form__Conj_12);
                }
#line 223 "goal_form.m"
                {
#line 223 "goal_form.m"
                  hlds__goal_form__succeeded = hlds__goal_form__only_constant_goals_3_p_0(hlds__goal_form__Conj_12, hlds__goal_form__HeadVar__1_1, &hlds__goal_form__ToAssignVars_13);
                }
#line 227 "goal_form.m"
                if (hlds__goal_form__succeeded)
#line 227 "goal_form.m"
                  {
#line 7154 "hlds.goal_form.c"
                    hlds__goal_form__TypeCtorInfo_10_14 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 224 "goal_form.m"
                    {
#line 224 "goal_form.m"
                      hlds__goal_form__succeeded = parse_tree__set_of_var__is_empty_1_p_0(hlds__goal_form__TypeCtorInfo_10_14, hlds__goal_form__ToAssignVars_13);
                    }
#line 227 "goal_form.m"
                    if (hlds__goal_form__succeeded)
#line 229 "goal_form.m"
                      {
#line 229 "goal_form.m"
                        /* direct tailcall eliminated */
#line 229 "goal_form.m"
                        {
#line 229 "goal_form.m"
                          MR_Word hlds__goal_form__HeadVar__2__tmp_copy_2 = hlds__goal_form__Disjuncts_6;

#line 229 "goal_form.m"
                          hlds__goal_form__HeadVar__2_2 = hlds__goal_form__HeadVar__2__tmp_copy_2;
#line 229 "goal_form.m"
                        }
#line 229 "goal_form.m"
                        continue;
#line 229 "goal_form.m"
                      }
#line 227 "goal_form.m"
                  }
#line 227 "goal_form.m"
              }
#line 227 "goal_form.m"
          }
#line 226 "goal_form.m"
        return hlds__goal_form__succeeded;
#line 226 "goal_form.m"
      }
#line 226 "goal_form.m"
      break;
#line 226 "goal_form.m"
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
#line 218 "goal_form.m"
  {
#line 218 "goal_form.m"
    MR_bool hlds__goal_form__succeeded;
#line 218 "goal_form.m"
    MR_Word hlds__goal_form__TypeCtorInfo_10_10;
#line 218 "goal_form.m"
    MR_Word hlds__goal_form__GoalInfo_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Goal_4, (MR_Integer) 1)));
#line 218 "goal_form.m"
    MR_Word hlds__goal_form__CodeModel_7;
#line 218 "goal_form.m"
    MR_Word hlds__goal_form__Conj_8;
#line 218 "goal_form.m"
    MR_Word hlds__goal_form__ToAssignVars_9;
#line 219 "goal_form.m"
    MR_Word hlds__goal_form___GoalExpr_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Goal_4, (MR_Integer) 0)));

#line 220 "goal_form.m"
    {
#line 220 "goal_form.m"
      hlds__goal_form__CodeModel_7 = hlds__code_model__goal_info_get_code_model_1_f_0(hlds__goal_form__GoalInfo_6);
    }
#line 221 "goal_form.m"
    hlds__goal_form__succeeded = (hlds__goal_form__CodeModel_7 == (MR_Integer) 0);
#line 218 "goal_form.m"
    if (hlds__goal_form__succeeded)
#line 218 "goal_form.m"
      {
#line 222 "goal_form.m"
        {
#line 222 "goal_form.m"
          hlds__hlds_goal__goal_to_conj_list_2_p_0(hlds__goal_form__Goal_4, &hlds__goal_form__Conj_8);
        }
#line 223 "goal_form.m"
        {
#line 223 "goal_form.m"
          hlds__goal_form__succeeded = hlds__goal_form__only_constant_goals_3_p_0(hlds__goal_form__Conj_8, hlds__goal_form__ToAssignVars0_3, &hlds__goal_form__ToAssignVars_9);
        }
#line 218 "goal_form.m"
        if (hlds__goal_form__succeeded)
#line 218 "goal_form.m"
          {
#line 7248 "hlds.goal_form.c"
            hlds__goal_form__TypeCtorInfo_10_10 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 224 "goal_form.m"
            {
#line 224 "goal_form.m"
              return hlds__goal_form__succeeded = parse_tree__set_of_var__is_empty_1_p_0(hlds__goal_form__TypeCtorInfo_10_10, hlds__goal_form__ToAssignVars_9);
            }
#line 218 "goal_form.m"
          }
#line 218 "goal_form.m"
      }
#line 218 "goal_form.m"
    return hlds__goal_form__succeeded;
#line 218 "goal_form.m"
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
