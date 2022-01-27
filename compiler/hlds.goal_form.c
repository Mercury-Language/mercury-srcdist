/*
** Automatically generated from `goal_form.m'
** by the Mercury compiler,
** version 13.05.1, configured for x86_64-apple-darwin12.3.0.
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




#line 133 "hlds.goal_form.c"
static const MR_EnumFunctorDesc hlds__goal_form__hlds__goal_form__enum_functor_desc_goal_loop_or_throw_status_0_0;

#line 136 "hlds.goal_form.c"
static const MR_EnumFunctorDesc hlds__goal_form__hlds__goal_form__enum_functor_desc_goal_loop_or_throw_status_0_1;

#line 139 "hlds.goal_form.c"
static const MR_EnumFunctorDescPtr hlds__goal_form__hlds__goal_form__enum_value_ordered_goal_loop_or_throw_status_0[2];

#line 142 "hlds.goal_form.c"
static const MR_EnumFunctorDescPtr hlds__goal_form__hlds__goal_form__enum_name_ordered_goal_loop_or_throw_status_0[2];

#line 145 "hlds.goal_form.c"
static const MR_Integer hlds__goal_form__hlds__goal_form__functor_number_map_goal_loop_or_throw_status_0[2];

#line 148 "hlds.goal_form.c"
static const MR_EnumFunctorDesc hlds__goal_form__hlds__goal_form__enum_functor_desc_goal_loop_status_0_0;

#line 151 "hlds.goal_form.c"
static const MR_EnumFunctorDesc hlds__goal_form__hlds__goal_form__enum_functor_desc_goal_loop_status_0_1;

#line 154 "hlds.goal_form.c"
static const MR_EnumFunctorDescPtr hlds__goal_form__hlds__goal_form__enum_value_ordered_goal_loop_status_0[2];

#line 157 "hlds.goal_form.c"
static const MR_EnumFunctorDescPtr hlds__goal_form__hlds__goal_form__enum_name_ordered_goal_loop_status_0[2];

#line 160 "hlds.goal_form.c"
static const MR_Integer hlds__goal_form__hlds__goal_form__functor_number_map_goal_loop_status_0[2];

#line 163 "hlds.goal_form.c"
static const MR_EnumFunctorDesc hlds__goal_form__hlds__goal_form__enum_functor_desc_goal_throw_status_0_0;

#line 166 "hlds.goal_form.c"
static const MR_EnumFunctorDesc hlds__goal_form__hlds__goal_form__enum_functor_desc_goal_throw_status_0_1;

#line 169 "hlds.goal_form.c"
static const MR_EnumFunctorDescPtr hlds__goal_form__hlds__goal_form__enum_value_ordered_goal_throw_status_0[2];

#line 172 "hlds.goal_form.c"
static const MR_EnumFunctorDescPtr hlds__goal_form__hlds__goal_form__enum_name_ordered_goal_throw_status_0[2];

#line 175 "hlds.goal_form.c"
static const MR_Integer hlds__goal_form__hlds__goal_form__functor_number_map_goal_throw_status_0[2];

#line 178 "hlds.goal_form.c"
static MR_bool MR_CALL 
hlds__goal_form____Unify____goal_loop_or_throw_status_0_0_10001(
#line 181 "hlds.goal_form.c"
  MR_Box hlds__goal_form__wrapper_arg_1,
#line 183 "hlds.goal_form.c"
  MR_Box hlds__goal_form__wrapper_arg_2);

#line 186 "hlds.goal_form.c"
static void MR_CALL 
hlds__goal_form____Compare____goal_loop_or_throw_status_0_0_10001(
#line 189 "hlds.goal_form.c"
  MR_Box * hlds__goal_form__wrapper_arg_1,
#line 191 "hlds.goal_form.c"
  MR_Box hlds__goal_form__wrapper_arg_2,
#line 193 "hlds.goal_form.c"
  MR_Box hlds__goal_form__wrapper_arg_3);

#line 196 "hlds.goal_form.c"
static MR_bool MR_CALL 
hlds__goal_form____Unify____goal_loop_status_0_0_10001(
#line 199 "hlds.goal_form.c"
  MR_Box hlds__goal_form__wrapper_arg_1,
#line 201 "hlds.goal_form.c"
  MR_Box hlds__goal_form__wrapper_arg_2);

#line 204 "hlds.goal_form.c"
static void MR_CALL 
hlds__goal_form____Compare____goal_loop_status_0_0_10001(
#line 207 "hlds.goal_form.c"
  MR_Box * hlds__goal_form__wrapper_arg_1,
#line 209 "hlds.goal_form.c"
  MR_Box hlds__goal_form__wrapper_arg_2,
#line 211 "hlds.goal_form.c"
  MR_Box hlds__goal_form__wrapper_arg_3);

#line 214 "hlds.goal_form.c"
static MR_bool MR_CALL 
hlds__goal_form____Unify____goal_throw_status_0_0_10001(
#line 217 "hlds.goal_form.c"
  MR_Box hlds__goal_form__wrapper_arg_1,
#line 219 "hlds.goal_form.c"
  MR_Box hlds__goal_form__wrapper_arg_2);

#line 222 "hlds.goal_form.c"
static void MR_CALL 
hlds__goal_form____Compare____goal_throw_status_0_0_10001(
#line 225 "hlds.goal_form.c"
  MR_Box * hlds__goal_form__wrapper_arg_1,
#line 227 "hlds.goal_form.c"
  MR_Box hlds__goal_form__wrapper_arg_2,
#line 229 "hlds.goal_form.c"
  MR_Box hlds__goal_form__wrapper_arg_3);

#line 246 "goal_form.m"
static void MR_CALL 
hlds__goal_form__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_99_97_110_95_116_104_114_111_119_95_50_95_95_91_50_93_95_48_5_p_0(
#line 246 "goal_form.m"
  MR_Word hlds__goal_form__GoalExpr_6,
#line 246 "goal_form.m"
  MR_Word * hlds__goal_form__Result_8,
#line 246 "goal_form.m"
  MR_Word hlds__goal_form__STATE_VARIABLE_ModuleInfo_0_82,
#line 246 "goal_form.m"
  MR_Word * hlds__goal_form__STATE_VARIABLE_ModuleInfo_83);

#line 1044 "goal_form.m"
static void MR_CALL 
hlds__goal_form__count_recursive_calls_cases_5_p_0(
#line 1044 "goal_form.m"
  MR_Word hlds__goal_form__HeadVar__1_1,
#line 1044 "goal_form.m"
  MR_Word hlds__goal_form__PredId_2,
#line 1044 "goal_form.m"
  MR_Integer hlds__goal_form__ProcId_3,
#line 1044 "goal_form.m"
  MR_Integer * hlds__goal_form__Min_4,
#line 1044 "goal_form.m"
  MR_Integer * hlds__goal_form__Max_5);

#line 1028 "goal_form.m"
static void MR_CALL 
hlds__goal_form__count_recursive_calls_disj_5_p_0(
#line 1028 "goal_form.m"
  MR_Word hlds__goal_form__HeadVar__1_1,
#line 1028 "goal_form.m"
  MR_Word hlds__goal_form__PredId_2,
#line 1028 "goal_form.m"
  MR_Integer hlds__goal_form__ProcId_3,
#line 1028 "goal_form.m"
  MR_Integer * hlds__goal_form__HeadVar__4_4,
#line 1028 "goal_form.m"
  MR_Integer * hlds__goal_form__HeadVar__5_5);

#line 1016 "goal_form.m"
static void MR_CALL 
hlds__goal_form__count_recursive_calls_conj_7_p_0(
#line 1016 "goal_form.m"
  MR_Word hlds__goal_form__HeadVar__1_1,
#line 1016 "goal_form.m"
  MR_Word hlds__goal_form__PredId_2,
#line 1016 "goal_form.m"
  MR_Integer hlds__goal_form__ProcId_3,
#line 1016 "goal_form.m"
  MR_Integer hlds__goal_form__HeadVar__4_4,
#line 1016 "goal_form.m"
  MR_Integer hlds__goal_form__HeadVar__5_5,
#line 1016 "goal_form.m"
  MR_Integer * hlds__goal_form__Min_6,
#line 1016 "goal_form.m"
  MR_Integer * hlds__goal_form__Max_7);

#line 918 "goal_form.m"
static MR_bool MR_CALL 
hlds__goal_form__cannot_fail_before_stack_flush_conj_1_p_0(
#line 918 "goal_form.m"
  MR_Word hlds__goal_form__HeadVar__1_1);

#line 893 "goal_form.m"
static MR_bool MR_CALL 
hlds__goal_form__cannot_stack_flush_cases_1_p_0(
#line 893 "goal_form.m"
  MR_Word hlds__goal_form__HeadVar__1_1);

#line 886 "goal_form.m"
static MR_bool MR_CALL 
hlds__goal_form__cannot_stack_flush_goals_1_p_0(
#line 886 "goal_form.m"
  MR_Word hlds__goal_form__HeadVar__1_1);

#line 872 "goal_form.m"
static MR_bool MR_CALL 
hlds__goal_form__cannot_stack_flush_2_1_p_0(
#line 872 "goal_form.m"
  MR_Word hlds__goal_form__HeadVar__1_1);

#line 857 "goal_form.m"
static void MR_CALL 
hlds__goal_form__cases_may_allocate_heap_2_p_0(
#line 857 "goal_form.m"
  MR_Word hlds__goal_form__HeadVar__1_1,
#line 857 "goal_form.m"
  MR_Word * hlds__goal_form__HeadVar__2_2);

#line 847 "goal_form.m"
static void MR_CALL 
hlds__goal_form__goal_list_may_allocate_heap_2_p_0(
#line 847 "goal_form.m"
  MR_Word hlds__goal_form__HeadVar__1_1,
#line 847 "goal_form.m"
  MR_Word * hlds__goal_form__HeadVar__2_2);

#line 751 "goal_form.m"
static void MR_CALL 
hlds__goal_form__goal_may_allocate_heap_2_2_p_0(
#line 751 "goal_form.m"
  MR_Word hlds__goal_form__GoalExpr_3,
#line 751 "goal_form.m"
  MR_Word * hlds__goal_form__May_4);

#line 728 "goal_form.m"
static MR_Word MR_CALL 
hlds__goal_form__goal_is_flat_list_1_f_0(
#line 728 "goal_form.m"
  MR_Word hlds__goal_form__HeadVar__1_1);

#line 685 "goal_form.m"
static MR_Word MR_CALL 
hlds__goal_form__goal_is_flat_expr_1_f_0(
#line 685 "goal_form.m"
  MR_Word hlds__goal_form__GoalExpr_3);

#line 671 "goal_form.m"
static MR_Word MR_CALL 
hlds__goal_form__case_list_can_throw_2_f_0(
#line 671 "goal_form.m"
  MR_Word hlds__goal_form__MaybeModuleInfo_1,
#line 671 "goal_form.m"
  MR_Word hlds__goal_form__HeadVar__2_2);

#line 661 "goal_form.m"
static MR_Word MR_CALL 
hlds__goal_form__goal_list_can_throw_2_f_0(
#line 661 "goal_form.m"
  MR_Word hlds__goal_form__MaybeModuleInfo_1,
#line 661 "goal_form.m"
  MR_Word hlds__goal_form__HeadVar__2_2);

#line 563 "goal_form.m"
static MR_Word MR_CALL 
hlds__goal_form__goal_expr_can_throw_2_f_0(
#line 563 "goal_form.m"
  MR_Word hlds__goal_form__MaybeModuleInfo_4,
#line 563 "goal_form.m"
  MR_Word hlds__goal_form__GoalExpr_5);

#line 552 "goal_form.m"
static MR_Word MR_CALL 
hlds__goal_form__goal_can_throw_func_2_f_0(
#line 552 "goal_form.m"
  MR_Word hlds__goal_form__MaybeModuleInfo_4,
#line 552 "goal_form.m"
  MR_Word hlds__goal_form__HeadVar__2_2);

#line 540 "goal_form.m"
static MR_Word MR_CALL 
hlds__goal_form__case_list_can_loop_2_f_0(
#line 540 "goal_form.m"
  MR_Word hlds__goal_form__MaybeModuleInfo_1,
#line 540 "goal_form.m"
  MR_Word hlds__goal_form__HeadVar__2_2);

#line 530 "goal_form.m"
static MR_Word MR_CALL 
hlds__goal_form__goal_list_can_loop_2_f_0(
#line 530 "goal_form.m"
  MR_Word hlds__goal_form__MaybeModuleInfo_1,
#line 530 "goal_form.m"
  MR_Word hlds__goal_form__HeadVar__2_2);

#line 416 "goal_form.m"
static MR_Word MR_CALL 
hlds__goal_form__goal_can_loop_func_2_f_0(
#line 416 "goal_form.m"
  MR_Word hlds__goal_form__MaybeModuleInfo_4,
#line 416 "goal_form.m"
  MR_Word hlds__goal_form__Goal_5);

#line 357 "goal_form.m"
static void MR_CALL 
hlds__goal_form__cases_can_throw_4_p_0(
#line 357 "goal_form.m"
  MR_Word hlds__goal_form__HeadVar__1_1,
#line 357 "goal_form.m"
  MR_Word * hlds__goal_form__HeadVar__2_2,
#line 357 "goal_form.m"
  MR_Word hlds__goal_form__STATE_VARIABLE_ModuleInfo_0_3,
#line 357 "goal_form.m"
  MR_Word * hlds__goal_form__STATE_VARIABLE_ModuleInfo_4);

#line 343 "goal_form.m"
static void MR_CALL 
hlds__goal_form__goals_can_throw_4_p_0(
#line 343 "goal_form.m"
  MR_Word hlds__goal_form__HeadVar__1_1,
#line 343 "goal_form.m"
  MR_Word * hlds__goal_form__HeadVar__2_2,
#line 343 "goal_form.m"
  MR_Word hlds__goal_form__STATE_VARIABLE_ModuleInfo_0_3,
#line 343 "goal_form.m"
  MR_Word * hlds__goal_form__STATE_VARIABLE_ModuleInfo_4);

#line 213 "goal_form.m"
static MR_bool MR_CALL 
hlds__goal_form__only_constant_goals_3_p_0(
#line 213 "goal_form.m"
  MR_Word hlds__goal_form__HeadVar__1_1,
#line 213 "goal_form.m"
  MR_Word hlds__goal_form__STATE_VARIABLE_ToAssignVars_0_2,
#line 213 "goal_form.m"
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



#line 461 "hlds.goal_form.c"
static const MR_EnumFunctorDesc hlds__goal_form__hlds__goal_form__enum_functor_desc_goal_loop_or_throw_status_0_0 = {
  (MR_String) "can_loop_or_throw",
  (MR_Integer) 0
};

#line 467 "hlds.goal_form.c"
static const MR_EnumFunctorDesc hlds__goal_form__hlds__goal_form__enum_functor_desc_goal_loop_or_throw_status_0_1 = {
  (MR_String) "cannot_loop_or_throw",
  (MR_Integer) 1
};

#line 473 "hlds.goal_form.c"
static const MR_EnumFunctorDescPtr hlds__goal_form__hlds__goal_form__enum_value_ordered_goal_loop_or_throw_status_0[2] = {
  &hlds__goal_form__hlds__goal_form__enum_functor_desc_goal_loop_or_throw_status_0_0,
  &hlds__goal_form__hlds__goal_form__enum_functor_desc_goal_loop_or_throw_status_0_1
};

#line 479 "hlds.goal_form.c"
static const MR_EnumFunctorDescPtr hlds__goal_form__hlds__goal_form__enum_name_ordered_goal_loop_or_throw_status_0[2] = {
  &hlds__goal_form__hlds__goal_form__enum_functor_desc_goal_loop_or_throw_status_0_0,
  &hlds__goal_form__hlds__goal_form__enum_functor_desc_goal_loop_or_throw_status_0_1
};

#line 485 "hlds.goal_form.c"
static const MR_Integer hlds__goal_form__hlds__goal_form__functor_number_map_goal_loop_or_throw_status_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 491 "hlds.goal_form.c"
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

#line 512 "hlds.goal_form.c"
static const MR_EnumFunctorDesc hlds__goal_form__hlds__goal_form__enum_functor_desc_goal_loop_status_0_0 = {
  (MR_String) "can_loop",
  (MR_Integer) 0
};

#line 518 "hlds.goal_form.c"
static const MR_EnumFunctorDesc hlds__goal_form__hlds__goal_form__enum_functor_desc_goal_loop_status_0_1 = {
  (MR_String) "cannot_loop",
  (MR_Integer) 1
};

#line 524 "hlds.goal_form.c"
static const MR_EnumFunctorDescPtr hlds__goal_form__hlds__goal_form__enum_value_ordered_goal_loop_status_0[2] = {
  &hlds__goal_form__hlds__goal_form__enum_functor_desc_goal_loop_status_0_0,
  &hlds__goal_form__hlds__goal_form__enum_functor_desc_goal_loop_status_0_1
};

#line 530 "hlds.goal_form.c"
static const MR_EnumFunctorDescPtr hlds__goal_form__hlds__goal_form__enum_name_ordered_goal_loop_status_0[2] = {
  &hlds__goal_form__hlds__goal_form__enum_functor_desc_goal_loop_status_0_0,
  &hlds__goal_form__hlds__goal_form__enum_functor_desc_goal_loop_status_0_1
};

#line 536 "hlds.goal_form.c"
static const MR_Integer hlds__goal_form__hlds__goal_form__functor_number_map_goal_loop_status_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 542 "hlds.goal_form.c"
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

#line 563 "hlds.goal_form.c"
static const MR_EnumFunctorDesc hlds__goal_form__hlds__goal_form__enum_functor_desc_goal_throw_status_0_0 = {
  (MR_String) "can_throw",
  (MR_Integer) 0
};

#line 569 "hlds.goal_form.c"
static const MR_EnumFunctorDesc hlds__goal_form__hlds__goal_form__enum_functor_desc_goal_throw_status_0_1 = {
  (MR_String) "cannot_throw",
  (MR_Integer) 1
};

#line 575 "hlds.goal_form.c"
static const MR_EnumFunctorDescPtr hlds__goal_form__hlds__goal_form__enum_value_ordered_goal_throw_status_0[2] = {
  &hlds__goal_form__hlds__goal_form__enum_functor_desc_goal_throw_status_0_0,
  &hlds__goal_form__hlds__goal_form__enum_functor_desc_goal_throw_status_0_1
};

#line 581 "hlds.goal_form.c"
static const MR_EnumFunctorDescPtr hlds__goal_form__hlds__goal_form__enum_name_ordered_goal_throw_status_0[2] = {
  &hlds__goal_form__hlds__goal_form__enum_functor_desc_goal_throw_status_0_0,
  &hlds__goal_form__hlds__goal_form__enum_functor_desc_goal_throw_status_0_1
};

#line 587 "hlds.goal_form.c"
static const MR_Integer hlds__goal_form__hlds__goal_form__functor_number_map_goal_throw_status_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 593 "hlds.goal_form.c"
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

#line 614 "hlds.goal_form.c"
static MR_bool MR_CALL 
hlds__goal_form____Unify____goal_loop_or_throw_status_0_0_10001(
#line 617 "hlds.goal_form.c"
  MR_Box hlds__goal_form__wrapper_arg_1,
#line 619 "hlds.goal_form.c"
  MR_Box hlds__goal_form__wrapper_arg_2)
#line 621 "hlds.goal_form.c"
{
#line 623 "hlds.goal_form.c"
  {
#line 625 "hlds.goal_form.c"
    MR_bool hlds__goal_form__succeeded;

#line 628 "hlds.goal_form.c"
    {
#line 630 "hlds.goal_form.c"
      hlds__goal_form__succeeded = hlds__goal_form____Unify____goal_loop_or_throw_status_0_0(((MR_Word) hlds__goal_form__wrapper_arg_1), ((MR_Word) hlds__goal_form__wrapper_arg_2));
    }
#line 633 "hlds.goal_form.c"
    return hlds__goal_form__succeeded;
#line 635 "hlds.goal_form.c"
  }
#line 637 "hlds.goal_form.c"
}

#line 640 "hlds.goal_form.c"
static void MR_CALL 
hlds__goal_form____Compare____goal_loop_or_throw_status_0_0_10001(
#line 643 "hlds.goal_form.c"
  MR_Box * hlds__goal_form__wrapper_arg_1,
#line 645 "hlds.goal_form.c"
  MR_Box hlds__goal_form__wrapper_arg_2,
#line 647 "hlds.goal_form.c"
  MR_Box hlds__goal_form__wrapper_arg_3)
#line 649 "hlds.goal_form.c"
{
#line 651 "hlds.goal_form.c"
  {
#line 653 "hlds.goal_form.c"
    MR_Word hlds__goal_form__conv0_HeadVar__1_1;

#line 656 "hlds.goal_form.c"
    {
#line 658 "hlds.goal_form.c"
      hlds__goal_form____Compare____goal_loop_or_throw_status_0_0(&hlds__goal_form__conv0_HeadVar__1_1, ((MR_Word) hlds__goal_form__wrapper_arg_2), ((MR_Word) hlds__goal_form__wrapper_arg_3));
    }
#line 661 "hlds.goal_form.c"
    *hlds__goal_form__wrapper_arg_1 = ((MR_Box) (hlds__goal_form__conv0_HeadVar__1_1));
#line 663 "hlds.goal_form.c"
  }
#line 665 "hlds.goal_form.c"
}

#line 668 "hlds.goal_form.c"
static MR_bool MR_CALL 
hlds__goal_form____Unify____goal_loop_status_0_0_10001(
#line 671 "hlds.goal_form.c"
  MR_Box hlds__goal_form__wrapper_arg_1,
#line 673 "hlds.goal_form.c"
  MR_Box hlds__goal_form__wrapper_arg_2)
#line 675 "hlds.goal_form.c"
{
#line 677 "hlds.goal_form.c"
  {
#line 679 "hlds.goal_form.c"
    MR_bool hlds__goal_form__succeeded;

#line 682 "hlds.goal_form.c"
    {
#line 684 "hlds.goal_form.c"
      hlds__goal_form__succeeded = hlds__goal_form____Unify____goal_loop_status_0_0(((MR_Word) hlds__goal_form__wrapper_arg_1), ((MR_Word) hlds__goal_form__wrapper_arg_2));
    }
#line 687 "hlds.goal_form.c"
    return hlds__goal_form__succeeded;
#line 689 "hlds.goal_form.c"
  }
#line 691 "hlds.goal_form.c"
}

#line 694 "hlds.goal_form.c"
static void MR_CALL 
hlds__goal_form____Compare____goal_loop_status_0_0_10001(
#line 697 "hlds.goal_form.c"
  MR_Box * hlds__goal_form__wrapper_arg_1,
#line 699 "hlds.goal_form.c"
  MR_Box hlds__goal_form__wrapper_arg_2,
#line 701 "hlds.goal_form.c"
  MR_Box hlds__goal_form__wrapper_arg_3)
#line 703 "hlds.goal_form.c"
{
#line 705 "hlds.goal_form.c"
  {
#line 707 "hlds.goal_form.c"
    MR_Word hlds__goal_form__conv0_HeadVar__1_1;

#line 710 "hlds.goal_form.c"
    {
#line 712 "hlds.goal_form.c"
      hlds__goal_form____Compare____goal_loop_status_0_0(&hlds__goal_form__conv0_HeadVar__1_1, ((MR_Word) hlds__goal_form__wrapper_arg_2), ((MR_Word) hlds__goal_form__wrapper_arg_3));
    }
#line 715 "hlds.goal_form.c"
    *hlds__goal_form__wrapper_arg_1 = ((MR_Box) (hlds__goal_form__conv0_HeadVar__1_1));
#line 717 "hlds.goal_form.c"
  }
#line 719 "hlds.goal_form.c"
}

#line 722 "hlds.goal_form.c"
static MR_bool MR_CALL 
hlds__goal_form____Unify____goal_throw_status_0_0_10001(
#line 725 "hlds.goal_form.c"
  MR_Box hlds__goal_form__wrapper_arg_1,
#line 727 "hlds.goal_form.c"
  MR_Box hlds__goal_form__wrapper_arg_2)
#line 729 "hlds.goal_form.c"
{
#line 731 "hlds.goal_form.c"
  {
#line 733 "hlds.goal_form.c"
    MR_bool hlds__goal_form__succeeded;

#line 736 "hlds.goal_form.c"
    {
#line 738 "hlds.goal_form.c"
      hlds__goal_form__succeeded = hlds__goal_form____Unify____goal_throw_status_0_0(((MR_Word) hlds__goal_form__wrapper_arg_1), ((MR_Word) hlds__goal_form__wrapper_arg_2));
    }
#line 741 "hlds.goal_form.c"
    return hlds__goal_form__succeeded;
#line 743 "hlds.goal_form.c"
  }
#line 745 "hlds.goal_form.c"
}

#line 748 "hlds.goal_form.c"
static void MR_CALL 
hlds__goal_form____Compare____goal_throw_status_0_0_10001(
#line 751 "hlds.goal_form.c"
  MR_Box * hlds__goal_form__wrapper_arg_1,
#line 753 "hlds.goal_form.c"
  MR_Box hlds__goal_form__wrapper_arg_2,
#line 755 "hlds.goal_form.c"
  MR_Box hlds__goal_form__wrapper_arg_3)
#line 757 "hlds.goal_form.c"
{
#line 759 "hlds.goal_form.c"
  {
#line 761 "hlds.goal_form.c"
    MR_Word hlds__goal_form__conv0_HeadVar__1_1;

#line 764 "hlds.goal_form.c"
    {
#line 766 "hlds.goal_form.c"
      hlds__goal_form____Compare____goal_throw_status_0_0(&hlds__goal_form__conv0_HeadVar__1_1, ((MR_Word) hlds__goal_form__wrapper_arg_2), ((MR_Word) hlds__goal_form__wrapper_arg_3));
    }
#line 769 "hlds.goal_form.c"
    *hlds__goal_form__wrapper_arg_1 = ((MR_Box) (hlds__goal_form__conv0_HeadVar__1_1));
#line 771 "hlds.goal_form.c"
  }
#line 773 "hlds.goal_form.c"
}

#line 246 "goal_form.m"
static void MR_CALL 
hlds__goal_form__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_99_97_110_95_116_104_114_111_119_95_50_95_95_91_50_93_95_48_5_p_0(
#line 246 "goal_form.m"
  MR_Word hlds__goal_form__GoalExpr_6,
#line 246 "goal_form.m"
  MR_Word * hlds__goal_form__Result_8,
#line 246 "goal_form.m"
  MR_Word hlds__goal_form__STATE_VARIABLE_ModuleInfo_0_82,
#line 246 "goal_form.m"
  MR_Word * hlds__goal_form__STATE_VARIABLE_ModuleInfo_83)
#line 246 "goal_form.m"
{
#line 258 "goal_form.m"
  {
#line 258 "goal_form.m"
    MR_bool hlds__goal_form__succeeded;

#line 258 "goal_form.m"
    if (((MR_tag((MR_Word) hlds__goal_form__GoalExpr_6)) == (MR_mktag((MR_Integer) 0))))
#line 295 "goal_form.m"
      {
#line 295 "goal_form.m"
        MR_Word hlds__goal_form__SubGoal_57 = (MR_Word) MR_body(((MR_Word) hlds__goal_form__GoalExpr_6), (MR_Integer) 0);

#line 296 "goal_form.m"
        {
#line 296 "goal_form.m"
          hlds__goal_form__goal_can_throw_4_p_0(hlds__goal_form__SubGoal_57, hlds__goal_form__Result_8, hlds__goal_form__STATE_VARIABLE_ModuleInfo_0_82, hlds__goal_form__STATE_VARIABLE_ModuleInfo_83);
#line 296 "goal_form.m"
          return;
        }
#line 295 "goal_form.m"
      }
#line 258 "goal_form.m"
    else
#line 258 "goal_form.m"
      if (((MR_tag((MR_Word) hlds__goal_form__GoalExpr_6)) == (MR_mktag((MR_Integer) 2))))
#line 261 "goal_form.m"
        {
#line 261 "goal_form.m"
          MR_Word hlds__goal_form__PredId_16 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__GoalExpr_6, (MR_Integer) 0)));
#line 261 "goal_form.m"
          MR_Integer hlds__goal_form__ProcId_17 = ((MR_Integer) (MR_hl_field(MR_mktag(2), hlds__goal_form__GoalExpr_6, (MR_Integer) 1)));
#line 261 "goal_form.m"
          MR_Word hlds__goal_form__Status_22;
#line 261 "goal_form.m"
          MR_Word hlds__goal_form__V_92_92;
#line 261 "goal_form.m"
          MR_Word hlds__goal_form__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__GoalExpr_6, (MR_Integer) 2)));
#line 261 "goal_form.m"
          MR_Word hlds__goal_form__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__GoalExpr_6, (MR_Integer) 3)));
#line 261 "goal_form.m"
          MR_Word hlds__goal_form__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__GoalExpr_6, (MR_Integer) 4)));
#line 261 "goal_form.m"
          MR_Word hlds__goal_form__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__GoalExpr_6, (MR_Integer) 5)));

#line 262 "goal_form.m"
          {
#line 262 "goal_form.m"
            hlds__goal_form__V_92_92 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 262 "goal_form.m"
            MR_hl_field(MR_mktag(0), hlds__goal_form__V_92_92, 0) = ((MR_Box) (hlds__goal_form__PredId_16));
#line 262 "goal_form.m"
            MR_hl_field(MR_mktag(0), hlds__goal_form__V_92_92, 1) = ((MR_Box) (hlds__goal_form__ProcId_17));
#line 262 "goal_form.m"
          }
#line 262 "goal_form.m"
          {
#line 262 "goal_form.m"
            transform_hlds__exception_analysis__lookup_exception_analysis_result_4_p_0(hlds__goal_form__V_92_92, &hlds__goal_form__Status_22, hlds__goal_form__STATE_VARIABLE_ModuleInfo_0_82, hlds__goal_form__STATE_VARIABLE_ModuleInfo_83);
          }
#line 267 "goal_form.m"
          if ((hlds__goal_form__Status_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 266 "goal_form.m"
            *hlds__goal_form__Result_8 = (MR_Integer) 1;
#line 267 "goal_form.m"
          else
#line 271 "goal_form.m"
            *hlds__goal_form__Result_8 = (MR_Integer) 0;
#line 261 "goal_form.m"
        }
#line 258 "goal_form.m"
      else
#line 258 "goal_form.m"
        if (((MR_tag((MR_Word) hlds__goal_form__GoalExpr_6)) == (MR_mktag((MR_Integer) 1))))
#line 281 "goal_form.m"
          {
#line 281 "goal_form.m"
            MR_Word hlds__goal_form__Uni_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__GoalExpr_6, (MR_Integer) 3)));
#line 281 "goal_form.m"
            MR_Word hlds__goal_form__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__GoalExpr_6, (MR_Integer) 0)));
#line 281 "goal_form.m"
            MR_Word hlds__goal_form__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__GoalExpr_6, (MR_Integer) 1)));
#line 281 "goal_form.m"
            MR_Word hlds__goal_form__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__GoalExpr_6, (MR_Integer) 2)));
#line 281 "goal_form.m"
            MR_Word hlds__goal_form__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__GoalExpr_6, (MR_Integer) 4)));

#line 286 "goal_form.m"
            if (((((MR_tag((MR_Word) hlds__goal_form__Uni_35)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__Uni_35, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 285 "goal_form.m"
              *hlds__goal_form__Result_8 = (MR_Integer) 0;
#line 286 "goal_form.m"
            else
#line 292 "goal_form.m"
              *hlds__goal_form__Result_8 = (MR_Integer) 1;
#line 292 "goal_form.m"
            *hlds__goal_form__STATE_VARIABLE_ModuleInfo_83 = hlds__goal_form__STATE_VARIABLE_ModuleInfo_0_82;
#line 281 "goal_form.m"
          }
#line 258 "goal_form.m"
        else
#line 258 "goal_form.m"
          if (((((MR_tag((MR_Word) hlds__goal_form__GoalExpr_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_6, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 312 "goal_form.m"
            {
#line 312 "goal_form.m"
              MR_Word hlds__goal_form__Attributes_61 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_6, (MR_Integer) 1)));
#line 312 "goal_form.m"
              MR_Word hlds__goal_form__ExceptionStatus_68;
#line 312 "goal_form.m"
              MR_Word hlds__goal_form__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_6, (MR_Integer) 2)));
#line 312 "goal_form.m"
              MR_Integer hlds__goal_form__V_63_63 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_6, (MR_Integer) 3)));
#line 312 "goal_form.m"
              MR_Word hlds__goal_form__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_6, (MR_Integer) 4)));
#line 312 "goal_form.m"
              MR_Word hlds__goal_form__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_6, (MR_Integer) 5)));
#line 312 "goal_form.m"
              MR_Word hlds__goal_form__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_6, (MR_Integer) 6)));
#line 312 "goal_form.m"
              MR_Word hlds__goal_form__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_6, (MR_Integer) 7)));

#line 313 "goal_form.m"
              {
#line 313 "goal_form.m"
                hlds__goal_form__ExceptionStatus_68 = parse_tree__prog_data__get_may_throw_exception_1_f_0(hlds__goal_form__Attributes_61);
              }
#line 317 "goal_form.m"
              if ((hlds__goal_form__ExceptionStatus_68 == (MR_Integer) 1))
#line 318 "goal_form.m"
                {
#line 318 "goal_form.m"
                  MR_Word hlds__goal_form__V_88_88;

#line 319 "goal_form.m"
                  {
#line 319 "goal_form.m"
                    hlds__goal_form__V_88_88 = parse_tree__prog_data__get_may_call_mercury_1_f_0(hlds__goal_form__Attributes_61);
                  }
#line 319 "goal_form.m"
                  hlds__goal_form__succeeded = (hlds__goal_form__V_88_88 == (MR_Integer) 1);
#line 318 "goal_form.m"
                }
#line 317 "goal_form.m"
              else
#line 316 "goal_form.m"
                hlds__goal_form__succeeded = MR_TRUE;
#line 323 "goal_form.m"
              if (hlds__goal_form__succeeded)
#line 322 "goal_form.m"
                *hlds__goal_form__Result_8 = (MR_Integer) 1;
#line 323 "goal_form.m"
              else
#line 324 "goal_form.m"
                *hlds__goal_form__Result_8 = (MR_Integer) 0;
#line 324 "goal_form.m"
              *hlds__goal_form__STATE_VARIABLE_ModuleInfo_83 = hlds__goal_form__STATE_VARIABLE_ModuleInfo_0_82;
#line 312 "goal_form.m"
            }
#line 258 "goal_form.m"
          else
#line 258 "goal_form.m"
            if (((((MR_tag((MR_Word) hlds__goal_form__GoalExpr_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_6, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 258 "goal_form.m"
              {
#line 258 "goal_form.m"
                MR_Word hlds__goal_form__Goals_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_6, (MR_Integer) 2)));
#line 252 "goal_form.m"
                MR_Word hlds__goal_form__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_6, (MR_Integer) 1)));

#line 259 "goal_form.m"
                {
#line 259 "goal_form.m"
                  hlds__goal_form__goals_can_throw_4_p_0(hlds__goal_form__Goals_11, hlds__goal_form__Result_8, hlds__goal_form__STATE_VARIABLE_ModuleInfo_0_82, hlds__goal_form__STATE_VARIABLE_ModuleInfo_83);
#line 259 "goal_form.m"
                  return;
                }
#line 258 "goal_form.m"
              }
#line 258 "goal_form.m"
            else
#line 258 "goal_form.m"
              if (((((MR_tag((MR_Word) hlds__goal_form__GoalExpr_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_6, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 258 "goal_form.m"
                {
#line 258 "goal_form.m"
                  MR_Word hlds__goal_form__Goals_99 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_6, (MR_Integer) 1)));

#line 259 "goal_form.m"
                  {
#line 259 "goal_form.m"
                    hlds__goal_form__goals_can_throw_4_p_0(hlds__goal_form__Goals_99, hlds__goal_form__Result_8, hlds__goal_form__STATE_VARIABLE_ModuleInfo_0_82, hlds__goal_form__STATE_VARIABLE_ModuleInfo_83);
#line 259 "goal_form.m"
                    return;
                  }
#line 258 "goal_form.m"
                }
#line 258 "goal_form.m"
              else
#line 258 "goal_form.m"
                if (((((MR_tag((MR_Word) hlds__goal_form__GoalExpr_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_6, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 274 "goal_form.m"
                  {
#line 276 "goal_form.m"
                    *hlds__goal_form__Result_8 = (MR_Integer) 0;
#line 276 "goal_form.m"
                    *hlds__goal_form__STATE_VARIABLE_ModuleInfo_83 = hlds__goal_form__STATE_VARIABLE_ModuleInfo_0_82;
#line 274 "goal_form.m"
                  }
#line 258 "goal_form.m"
                else
#line 258 "goal_form.m"
                  if (((((MR_tag((MR_Word) hlds__goal_form__GoalExpr_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_6, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 258 "goal_form.m"
                    {
#line 258 "goal_form.m"
                      MR_Word hlds__goal_form__ThenGoal_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_6, (MR_Integer) 3)));
#line 258 "goal_form.m"
                      MR_Word hlds__goal_form__ElseGoal_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_6, (MR_Integer) 4)));
#line 258 "goal_form.m"
                      MR_Word hlds__goal_form__V_95_95;
#line 258 "goal_form.m"
                      MR_Word hlds__goal_form__Goal_104 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_6, (MR_Integer) 2)));
#line 258 "goal_form.m"
                      MR_Word hlds__goal_form__Goals_105;
#line 258 "goal_form.m"
                      MR_Word hlds__goal_form__Result0_108;
#line 258 "goal_form.m"
                      MR_Word hlds__goal_form__STATE_VARIABLE_ModuleInfo_15_111;
#line 256 "goal_form.m"
                      MR_Word hlds__goal_form__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_6, (MR_Integer) 1)));

#line 257 "goal_form.m"
                      {
#line 257 "goal_form.m"
                        hlds__goal_form__V_95_95 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 257 "goal_form.m"
                        MR_hl_field(MR_mktag(1), hlds__goal_form__V_95_95, 0) = ((MR_Box) (hlds__goal_form__ElseGoal_15));
#line 257 "goal_form.m"
                        MR_hl_field(MR_mktag(1), hlds__goal_form__V_95_95, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 257 "goal_form.m"
                      }
#line 257 "goal_form.m"
                      {
#line 257 "goal_form.m"
                        hlds__goal_form__Goals_105 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 257 "goal_form.m"
                        MR_hl_field(MR_mktag(1), hlds__goal_form__Goals_105, 0) = ((MR_Box) (hlds__goal_form__ThenGoal_14));
#line 257 "goal_form.m"
                        MR_hl_field(MR_mktag(1), hlds__goal_form__Goals_105, 1) = ((MR_Box) (hlds__goal_form__V_95_95));
#line 257 "goal_form.m"
                      }
#line 348 "goal_form.m"
                      {
#line 348 "goal_form.m"
                        hlds__goal_form__goal_can_throw_4_p_0(hlds__goal_form__Goal_104, &hlds__goal_form__Result0_108, hlds__goal_form__STATE_VARIABLE_ModuleInfo_0_82, &hlds__goal_form__STATE_VARIABLE_ModuleInfo_15_111);
                      }
#line 352 "goal_form.m"
                      if ((hlds__goal_form__Result0_108 == (MR_Integer) 0))
#line 353 "goal_form.m"
                        {
#line 354 "goal_form.m"
                          *hlds__goal_form__Result_8 = (MR_Integer) 0;
#line 354 "goal_form.m"
                          *hlds__goal_form__STATE_VARIABLE_ModuleInfo_83 = hlds__goal_form__STATE_VARIABLE_ModuleInfo_15_111;
#line 353 "goal_form.m"
                        }
#line 352 "goal_form.m"
                      else
#line 347 "goal_form.m"
                        {
#line 347 "goal_form.m"
                          MR_Word hlds__goal_form__Goal_116 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__Goals_105, (MR_Integer) 0)));
#line 347 "goal_form.m"
                          MR_Word hlds__goal_form__Goals_117 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__Goals_105, (MR_Integer) 1)));
#line 347 "goal_form.m"
                          MR_Word hlds__goal_form__Result0_120;
#line 347 "goal_form.m"
                          MR_Word hlds__goal_form__STATE_VARIABLE_ModuleInfo_15_123;

#line 348 "goal_form.m"
                          {
#line 348 "goal_form.m"
                            hlds__goal_form__goal_can_throw_4_p_0(hlds__goal_form__Goal_116, &hlds__goal_form__Result0_120, hlds__goal_form__STATE_VARIABLE_ModuleInfo_15_111, &hlds__goal_form__STATE_VARIABLE_ModuleInfo_15_123);
                          }
#line 352 "goal_form.m"
                          if ((hlds__goal_form__Result0_120 == (MR_Integer) 0))
#line 353 "goal_form.m"
                            {
#line 354 "goal_form.m"
                              *hlds__goal_form__Result_8 = (MR_Integer) 0;
#line 354 "goal_form.m"
                              *hlds__goal_form__STATE_VARIABLE_ModuleInfo_83 = hlds__goal_form__STATE_VARIABLE_ModuleInfo_15_123;
#line 353 "goal_form.m"
                            }
#line 352 "goal_form.m"
                          else
#line 347 "goal_form.m"
                            {
#line 347 "goal_form.m"
                              MR_Word hlds__goal_form__Goal_128 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__Goals_117, (MR_Integer) 0)));
#line 347 "goal_form.m"
                              MR_Word hlds__goal_form__Result0_132;
#line 347 "goal_form.m"
                              MR_Word hlds__goal_form__STATE_VARIABLE_ModuleInfo_15_135;
#line 347 "goal_form.m"
                              MR_Word hlds__goal_form__Goals_129 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__Goals_117, (MR_Integer) 1)));

#line 348 "goal_form.m"
                              {
#line 348 "goal_form.m"
                                hlds__goal_form__goal_can_throw_4_p_0(hlds__goal_form__Goal_128, &hlds__goal_form__Result0_132, hlds__goal_form__STATE_VARIABLE_ModuleInfo_15_123, &hlds__goal_form__STATE_VARIABLE_ModuleInfo_15_135);
                              }
#line 352 "goal_form.m"
                              if ((hlds__goal_form__Result0_132 == (MR_Integer) 0))
#line 353 "goal_form.m"
                                {
#line 354 "goal_form.m"
                                  *hlds__goal_form__Result_8 = (MR_Integer) 0;
#line 354 "goal_form.m"
                                  *hlds__goal_form__STATE_VARIABLE_ModuleInfo_83 = hlds__goal_form__STATE_VARIABLE_ModuleInfo_15_135;
#line 353 "goal_form.m"
                                }
#line 352 "goal_form.m"
                              else
#line 346 "goal_form.m"
                                {
#line 346 "goal_form.m"
                                  *hlds__goal_form__Result_8 = (MR_Integer) 1;
#line 346 "goal_form.m"
                                  *hlds__goal_form__STATE_VARIABLE_ModuleInfo_83 = hlds__goal_form__STATE_VARIABLE_ModuleInfo_15_135;
#line 346 "goal_form.m"
                                }
#line 347 "goal_form.m"
                            }
#line 347 "goal_form.m"
                        }
#line 258 "goal_form.m"
                    }
#line 258 "goal_form.m"
                  else
#line 258 "goal_form.m"
                    if (((((MR_tag((MR_Word) hlds__goal_form__GoalExpr_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_6, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 298 "goal_form.m"
                      {
#line 298 "goal_form.m"
                        MR_Word hlds__goal_form__Reason_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_6, (MR_Integer) 1)));
#line 298 "goal_form.m"
                        MR_Word hlds__goal_form__SubGoal_98 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_6, (MR_Integer) 2)));
#line 300 "goal_form.m"
                        MR_Word hlds__goal_form__FGT_60;
#line 300 "goal_form.m"
                        MR_Word hlds__goal_form__V_59_59;

#line 300 "goal_form.m"
                        hlds__goal_form__succeeded = ((((MR_tag((MR_Word) hlds__goal_form__Reason_58)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__Reason_58, (MR_Integer) 0)))) == (MR_Integer) 4)));
#line 300 "goal_form.m"
                        if (hlds__goal_form__succeeded)
#line 300 "goal_form.m"
                          {
#line 300 "goal_form.m"
                            hlds__goal_form__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__Reason_58, (MR_Integer) 1)));
#line 300 "goal_form.m"
                            hlds__goal_form__FGT_60 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__Reason_58, (MR_Integer) 2)));
#line 302 "goal_form.m"
                            if ((hlds__goal_form__FGT_60 == (MR_Integer) 1))
#line 301 "goal_form.m"
                              hlds__goal_form__succeeded = MR_TRUE;
#line 302 "goal_form.m"
                            else
#line 302 "goal_form.m"
                              if ((hlds__goal_form__FGT_60 == (MR_Integer) 2))
#line 302 "goal_form.m"
                                hlds__goal_form__succeeded = MR_TRUE;
#line 302 "goal_form.m"
                              else
#line 302 "goal_form.m"
                                hlds__goal_form__succeeded = MR_FALSE;
#line 300 "goal_form.m"
                          }
#line 308 "goal_form.m"
                        if (hlds__goal_form__succeeded)
#line 307 "goal_form.m"
                          {
#line 307 "goal_form.m"
                            *hlds__goal_form__Result_8 = (MR_Integer) 1;
#line 307 "goal_form.m"
                            *hlds__goal_form__STATE_VARIABLE_ModuleInfo_83 = hlds__goal_form__STATE_VARIABLE_ModuleInfo_0_82;
#line 307 "goal_form.m"
                          }
#line 308 "goal_form.m"
                        else
#line 309 "goal_form.m"
                          {
#line 309 "goal_form.m"
                            hlds__goal_form__goal_can_throw_4_p_0(hlds__goal_form__SubGoal_98, hlds__goal_form__Result_8, hlds__goal_form__STATE_VARIABLE_ModuleInfo_0_82, hlds__goal_form__STATE_VARIABLE_ModuleInfo_83);
#line 309 "goal_form.m"
                            return;
                          }
#line 298 "goal_form.m"
                      }
#line 258 "goal_form.m"
                    else
#line 258 "goal_form.m"
                      if (((((MR_tag((MR_Word) hlds__goal_form__GoalExpr_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_6, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 327 "goal_form.m"
                        {
#line 327 "goal_form.m"
                          MR_Word hlds__goal_form__ShortHand_69 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_6, (MR_Integer) 1)));

#line 331 "goal_form.m"
                          if (((MR_tag((MR_Word) hlds__goal_form__ShortHand_69)) == (MR_mktag((MR_Integer) 1))))
#line 332 "goal_form.m"
                            {
#line 336 "goal_form.m"
                              *hlds__goal_form__Result_8 = (MR_Integer) 0;
#line 336 "goal_form.m"
                              *hlds__goal_form__STATE_VARIABLE_ModuleInfo_83 = hlds__goal_form__STATE_VARIABLE_ModuleInfo_0_82;
#line 332 "goal_form.m"
                            }
#line 331 "goal_form.m"
                          else
#line 331 "goal_form.m"
                            if (((MR_tag((MR_Word) hlds__goal_form__ShortHand_69)) == (MR_mktag((MR_Integer) 0))))
#line 329 "goal_form.m"
                              {
#line 329 "goal_form.m"
                                MR_Word hlds__goal_form__GoalB_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__ShortHand_69, (MR_Integer) 1)));
#line 329 "goal_form.m"
                                MR_Word hlds__goal_form__Goal_152 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__ShortHand_69, (MR_Integer) 0)));
#line 329 "goal_form.m"
                                MR_Word hlds__goal_form__Goals_153;
#line 329 "goal_form.m"
                                MR_Word hlds__goal_form__Result0_156;
#line 329 "goal_form.m"
                                MR_Word hlds__goal_form__STATE_VARIABLE_ModuleInfo_15_159;

#line 330 "goal_form.m"
                                {
#line 330 "goal_form.m"
                                  hlds__goal_form__Goals_153 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 330 "goal_form.m"
                                  MR_hl_field(MR_mktag(1), hlds__goal_form__Goals_153, 0) = ((MR_Box) (hlds__goal_form__GoalB_71));
#line 330 "goal_form.m"
                                  MR_hl_field(MR_mktag(1), hlds__goal_form__Goals_153, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 330 "goal_form.m"
                                }
#line 348 "goal_form.m"
                                {
#line 348 "goal_form.m"
                                  hlds__goal_form__goal_can_throw_4_p_0(hlds__goal_form__Goal_152, &hlds__goal_form__Result0_156, hlds__goal_form__STATE_VARIABLE_ModuleInfo_0_82, &hlds__goal_form__STATE_VARIABLE_ModuleInfo_15_159);
                                }
#line 352 "goal_form.m"
                                if ((hlds__goal_form__Result0_156 == (MR_Integer) 0))
#line 353 "goal_form.m"
                                  {
#line 354 "goal_form.m"
                                    *hlds__goal_form__Result_8 = (MR_Integer) 0;
#line 354 "goal_form.m"
                                    *hlds__goal_form__STATE_VARIABLE_ModuleInfo_83 = hlds__goal_form__STATE_VARIABLE_ModuleInfo_15_159;
#line 353 "goal_form.m"
                                  }
#line 352 "goal_form.m"
                                else
#line 347 "goal_form.m"
                                  {
#line 347 "goal_form.m"
                                    MR_Word hlds__goal_form__Goal_164 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__Goals_153, (MR_Integer) 0)));
#line 347 "goal_form.m"
                                    MR_Word hlds__goal_form__Result0_168;
#line 347 "goal_form.m"
                                    MR_Word hlds__goal_form__STATE_VARIABLE_ModuleInfo_15_171;
#line 347 "goal_form.m"
                                    MR_Word hlds__goal_form__Goals_165 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__Goals_153, (MR_Integer) 1)));

#line 348 "goal_form.m"
                                    {
#line 348 "goal_form.m"
                                      hlds__goal_form__goal_can_throw_4_p_0(hlds__goal_form__Goal_164, &hlds__goal_form__Result0_168, hlds__goal_form__STATE_VARIABLE_ModuleInfo_15_159, &hlds__goal_form__STATE_VARIABLE_ModuleInfo_15_171);
                                    }
#line 352 "goal_form.m"
                                    if ((hlds__goal_form__Result0_168 == (MR_Integer) 0))
#line 353 "goal_form.m"
                                      {
#line 354 "goal_form.m"
                                        *hlds__goal_form__Result_8 = (MR_Integer) 0;
#line 354 "goal_form.m"
                                        *hlds__goal_form__STATE_VARIABLE_ModuleInfo_83 = hlds__goal_form__STATE_VARIABLE_ModuleInfo_15_171;
#line 353 "goal_form.m"
                                      }
#line 352 "goal_form.m"
                                    else
#line 346 "goal_form.m"
                                      {
#line 346 "goal_form.m"
                                        *hlds__goal_form__Result_8 = (MR_Integer) 1;
#line 346 "goal_form.m"
                                        *hlds__goal_form__STATE_VARIABLE_ModuleInfo_83 = hlds__goal_form__STATE_VARIABLE_ModuleInfo_15_171;
#line 346 "goal_form.m"
                                      }
#line 347 "goal_form.m"
                                  }
#line 329 "goal_form.m"
                              }
#line 331 "goal_form.m"
                            else
#line 338 "goal_form.m"
                              {
#line 339 "goal_form.m"
                                *hlds__goal_form__Result_8 = (MR_Integer) 0;
#line 339 "goal_form.m"
                                *hlds__goal_form__STATE_VARIABLE_ModuleInfo_83 = hlds__goal_form__STATE_VARIABLE_ModuleInfo_0_82;
#line 338 "goal_form.m"
                              }
#line 327 "goal_form.m"
                        }
#line 258 "goal_form.m"
                      else
#line 278 "goal_form.m"
                        {
#line 278 "goal_form.m"
                          MR_Word hlds__goal_form__Cases_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_6, (MR_Integer) 3)));
#line 278 "goal_form.m"
                          MR_Word hlds__goal_form__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_6, (MR_Integer) 1)));
#line 278 "goal_form.m"
                          MR_Word hlds__goal_form__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_6, (MR_Integer) 2)));

#line 279 "goal_form.m"
                          {
#line 279 "goal_form.m"
                            hlds__goal_form__cases_can_throw_4_p_0(hlds__goal_form__Cases_31, hlds__goal_form__Result_8, hlds__goal_form__STATE_VARIABLE_ModuleInfo_0_82, hlds__goal_form__STATE_VARIABLE_ModuleInfo_83);
#line 279 "goal_form.m"
                            return;
                          }
#line 278 "goal_form.m"
                        }
#line 258 "goal_form.m"
  }
#line 246 "goal_form.m"
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
#line 1370 "hlds.goal_form.c"
  {
#line 1372 "hlds.goal_form.c"
    MR_bool hlds__goal_form__succeeded = (hlds__goal_form__HeadVar__2_1 == hlds__goal_form__HeadVar__2_2);

#line 1375 "hlds.goal_form.c"
    return hlds__goal_form__succeeded;
#line 1377 "hlds.goal_form.c"
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
#line 1423 "hlds.goal_form.c"
  {
#line 1425 "hlds.goal_form.c"
    MR_bool hlds__goal_form__succeeded = (hlds__goal_form__HeadVar__2_1 == hlds__goal_form__HeadVar__2_2);

#line 1428 "hlds.goal_form.c"
    return hlds__goal_form__succeeded;
#line 1430 "hlds.goal_form.c"
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
#line 1476 "hlds.goal_form.c"
  {
#line 1478 "hlds.goal_form.c"
    MR_bool hlds__goal_form__succeeded = (hlds__goal_form__HeadVar__2_1 == hlds__goal_form__HeadVar__2_2);

#line 1481 "hlds.goal_form.c"
    return hlds__goal_form__succeeded;
#line 1483 "hlds.goal_form.c"
  }
#line 58 "goal_form.m"
}

#line 1044 "goal_form.m"
static void MR_CALL 
hlds__goal_form__count_recursive_calls_cases_5_p_0(
#line 1044 "goal_form.m"
  MR_Word hlds__goal_form__HeadVar__1_1,
#line 1044 "goal_form.m"
  MR_Word hlds__goal_form__PredId_2,
#line 1044 "goal_form.m"
  MR_Integer hlds__goal_form__ProcId_3,
#line 1044 "goal_form.m"
  MR_Integer * hlds__goal_form__Min_4,
#line 1044 "goal_form.m"
  MR_Integer * hlds__goal_form__Max_5)
#line 1044 "goal_form.m"
{
#line 1047 "goal_form.m"
  {
#line 1047 "goal_form.m"
    MR_bool hlds__goal_form__succeeded;

#line 1047 "goal_form.m"
    if ((hlds__goal_form__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1047 "goal_form.m"
      {
#line 1048 "goal_form.m"
        {
#line 1048 "goal_form.m"
          mercury__require__unexpected_3_p_0((MR_String) "hlds.goal_form", (MR_String) "predicate \140hlds.goal_form.count_recursive_calls_cases\'/5", (MR_String) "[]");
#line 1048 "goal_form.m"
          return;
        }
#line 1047 "goal_form.m"
      }
#line 1047 "goal_form.m"
    else
#line 1050 "goal_form.m"
      {
#line 1050 "goal_form.m"
        MR_Word hlds__goal_form__Goal_15;
#line 1050 "goal_form.m"
        MR_Word hlds__goal_form__Cases_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__HeadVar__1_1, (MR_Integer) 1)));
#line 1050 "goal_form.m"
        MR_Word hlds__goal_form__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__HeadVar__1_1, (MR_Integer) 0)));
#line 1049 "goal_form.m"
        MR_Word hlds__goal_form__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__V_27_27, (MR_Integer) 0)));
#line 1049 "goal_form.m"
        MR_Word hlds__goal_form__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__V_27_27, (MR_Integer) 1)));

#line 1049 "goal_form.m"
        hlds__goal_form__Goal_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__V_27_27, (MR_Integer) 2)));
#line 1054 "goal_form.m"
        if ((hlds__goal_form__Cases_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1053 "goal_form.m"
          {
#line 1053 "goal_form.m"
            hlds__goal_form__count_recursive_calls_5_p_0(hlds__goal_form__Goal_15, hlds__goal_form__PredId_2, hlds__goal_form__ProcId_3, hlds__goal_form__Min_4, hlds__goal_form__Max_5);
#line 1053 "goal_form.m"
            return;
          }
#line 1054 "goal_form.m"
        else
#line 1055 "goal_form.m"
          {
#line 1055 "goal_form.m"
            MR_Integer hlds__goal_form__Min0_23;
#line 1055 "goal_form.m"
            MR_Integer hlds__goal_form__Max0_24;
#line 1055 "goal_form.m"
            MR_Integer hlds__goal_form__Min1_25;
#line 1055 "goal_form.m"
            MR_Integer hlds__goal_form__Max1_26;
#line 1055 "goal_form.m"
            MR_Word hlds__goal_form__Goal_37;
#line 1055 "goal_form.m"
            MR_Word hlds__goal_form__Cases_38;
#line 1055 "goal_form.m"
            MR_Word hlds__goal_form__V_49_49;
#line 1049 "goal_form.m"
            MR_Word hlds__goal_form__V_35_35;
#line 1049 "goal_form.m"
            MR_Word hlds__goal_form__V_36_36;

#line 1056 "goal_form.m"
            {
#line 1056 "goal_form.m"
              hlds__goal_form__count_recursive_calls_5_p_0(hlds__goal_form__Goal_15, hlds__goal_form__PredId_2, hlds__goal_form__ProcId_3, &hlds__goal_form__Min0_23, &hlds__goal_form__Max0_24);
            }
#line 1050 "goal_form.m"
            hlds__goal_form__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__Cases_16, (MR_Integer) 0)));
#line 1050 "goal_form.m"
            hlds__goal_form__Cases_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__Cases_16, (MR_Integer) 1)));
#line 1049 "goal_form.m"
            hlds__goal_form__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__V_49_49, (MR_Integer) 0)));
#line 1049 "goal_form.m"
            hlds__goal_form__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__V_49_49, (MR_Integer) 1)));
#line 1049 "goal_form.m"
            hlds__goal_form__Goal_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__V_49_49, (MR_Integer) 2)));
#line 1054 "goal_form.m"
            if ((hlds__goal_form__Cases_38 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1053 "goal_form.m"
              {
#line 1053 "goal_form.m"
                hlds__goal_form__count_recursive_calls_5_p_0(hlds__goal_form__Goal_37, hlds__goal_form__PredId_2, hlds__goal_form__ProcId_3, &hlds__goal_form__Min1_25, &hlds__goal_form__Max1_26);
              }
#line 1054 "goal_form.m"
            else
#line 1055 "goal_form.m"
              {
#line 1055 "goal_form.m"
                MR_Integer hlds__goal_form__Min0_45;
#line 1055 "goal_form.m"
                MR_Integer hlds__goal_form__Max0_46;
#line 1055 "goal_form.m"
                MR_Integer hlds__goal_form__Min1_47;
#line 1055 "goal_form.m"
                MR_Integer hlds__goal_form__Max1_48;

#line 1056 "goal_form.m"
                {
#line 1056 "goal_form.m"
                  hlds__goal_form__count_recursive_calls_5_p_0(hlds__goal_form__Goal_37, hlds__goal_form__PredId_2, hlds__goal_form__ProcId_3, &hlds__goal_form__Min0_45, &hlds__goal_form__Max0_46);
                }
#line 1057 "goal_form.m"
                {
#line 1057 "goal_form.m"
                  hlds__goal_form__count_recursive_calls_cases_5_p_0(hlds__goal_form__Cases_38, hlds__goal_form__PredId_2, hlds__goal_form__ProcId_3, &hlds__goal_form__Min1_47, &hlds__goal_form__Max1_48);
                }
#line 1058 "goal_form.m"
                {
#line 1058 "goal_form.m"
                  mercury__int__min_3_p_0(hlds__goal_form__Min0_45, hlds__goal_form__Min1_47, &hlds__goal_form__Min1_25);
                }
#line 1059 "goal_form.m"
                {
#line 1059 "goal_form.m"
                  mercury__int__max_3_p_0(hlds__goal_form__Max0_46, hlds__goal_form__Max1_48, &hlds__goal_form__Max1_26);
                }
#line 1055 "goal_form.m"
              }
#line 1058 "goal_form.m"
            {
#line 1058 "goal_form.m"
              mercury__int__min_3_p_0(hlds__goal_form__Min0_23, hlds__goal_form__Min1_25, hlds__goal_form__Min_4);
            }
#line 1059 "goal_form.m"
            {
#line 1059 "goal_form.m"
              mercury__int__max_3_p_0(hlds__goal_form__Max0_24, hlds__goal_form__Max1_26, hlds__goal_form__Max_5);
#line 1059 "goal_form.m"
              return;
            }
#line 1055 "goal_form.m"
          }
#line 1050 "goal_form.m"
      }
#line 1047 "goal_form.m"
  }
#line 1044 "goal_form.m"
}

#line 1028 "goal_form.m"
static void MR_CALL 
hlds__goal_form__count_recursive_calls_disj_5_p_0(
#line 1028 "goal_form.m"
  MR_Word hlds__goal_form__HeadVar__1_1,
#line 1028 "goal_form.m"
  MR_Word hlds__goal_form__PredId_2,
#line 1028 "goal_form.m"
  MR_Integer hlds__goal_form__ProcId_3,
#line 1028 "goal_form.m"
  MR_Integer * hlds__goal_form__HeadVar__4_4,
#line 1028 "goal_form.m"
  MR_Integer * hlds__goal_form__HeadVar__5_5)
#line 1028 "goal_form.m"
{
#line 1031 "goal_form.m"
  {
#line 1031 "goal_form.m"
    MR_bool hlds__goal_form__succeeded;

#line 1031 "goal_form.m"
    if ((hlds__goal_form__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1031 "goal_form.m"
      {
#line 1031 "goal_form.m"
        *hlds__goal_form__HeadVar__4_4 = (MR_Integer) 0;
#line 1031 "goal_form.m"
        *hlds__goal_form__HeadVar__5_5 = (MR_Integer) 0;
#line 1031 "goal_form.m"
      }
#line 1031 "goal_form.m"
    else
#line 1032 "goal_form.m"
      {
#line 1032 "goal_form.m"
        MR_Word hlds__goal_form__Goal_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__HeadVar__1_1, (MR_Integer) 0)));
#line 1032 "goal_form.m"
        MR_Word hlds__goal_form__Goals_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__HeadVar__1_1, (MR_Integer) 1)));

#line 1036 "goal_form.m"
        if ((hlds__goal_form__Goals_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1035 "goal_form.m"
          {
#line 1035 "goal_form.m"
            hlds__goal_form__count_recursive_calls_5_p_0(hlds__goal_form__Goal_8, hlds__goal_form__PredId_2, hlds__goal_form__ProcId_3, hlds__goal_form__HeadVar__4_4, hlds__goal_form__HeadVar__5_5);
#line 1035 "goal_form.m"
            return;
          }
#line 1036 "goal_form.m"
        else
#line 1037 "goal_form.m"
          {
#line 1037 "goal_form.m"
            MR_Integer hlds__goal_form__Min0_16;
#line 1037 "goal_form.m"
            MR_Integer hlds__goal_form__Max0_17;
#line 1037 "goal_form.m"
            MR_Integer hlds__goal_form__Min1_18;
#line 1037 "goal_form.m"
            MR_Integer hlds__goal_form__Max1_19;
#line 1037 "goal_form.m"
            MR_Word hlds__goal_form__Goal_22;
#line 1037 "goal_form.m"
            MR_Word hlds__goal_form__Goals_23;

#line 1038 "goal_form.m"
            {
#line 1038 "goal_form.m"
              hlds__goal_form__count_recursive_calls_5_p_0(hlds__goal_form__Goal_8, hlds__goal_form__PredId_2, hlds__goal_form__ProcId_3, &hlds__goal_form__Min0_16, &hlds__goal_form__Max0_17);
            }
#line 1032 "goal_form.m"
            hlds__goal_form__Goal_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__Goals_9, (MR_Integer) 0)));
#line 1032 "goal_form.m"
            hlds__goal_form__Goals_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__Goals_9, (MR_Integer) 1)));
#line 1036 "goal_form.m"
            if ((hlds__goal_form__Goals_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1035 "goal_form.m"
              {
#line 1035 "goal_form.m"
                hlds__goal_form__count_recursive_calls_5_p_0(hlds__goal_form__Goal_22, hlds__goal_form__PredId_2, hlds__goal_form__ProcId_3, &hlds__goal_form__Min1_18, &hlds__goal_form__Max1_19);
              }
#line 1036 "goal_form.m"
            else
#line 1037 "goal_form.m"
              {
#line 1037 "goal_form.m"
                MR_Integer hlds__goal_form__Min0_30;
#line 1037 "goal_form.m"
                MR_Integer hlds__goal_form__Max0_31;
#line 1037 "goal_form.m"
                MR_Integer hlds__goal_form__Min1_32;
#line 1037 "goal_form.m"
                MR_Integer hlds__goal_form__Max1_33;

#line 1038 "goal_form.m"
                {
#line 1038 "goal_form.m"
                  hlds__goal_form__count_recursive_calls_5_p_0(hlds__goal_form__Goal_22, hlds__goal_form__PredId_2, hlds__goal_form__ProcId_3, &hlds__goal_form__Min0_30, &hlds__goal_form__Max0_31);
                }
#line 1039 "goal_form.m"
                {
#line 1039 "goal_form.m"
                  hlds__goal_form__count_recursive_calls_disj_5_p_0(hlds__goal_form__Goals_23, hlds__goal_form__PredId_2, hlds__goal_form__ProcId_3, &hlds__goal_form__Min1_32, &hlds__goal_form__Max1_33);
                }
#line 1040 "goal_form.m"
                {
#line 1040 "goal_form.m"
                  mercury__int__min_3_p_0(hlds__goal_form__Min0_30, hlds__goal_form__Min1_32, &hlds__goal_form__Min1_18);
                }
#line 1041 "goal_form.m"
                {
#line 1041 "goal_form.m"
                  mercury__int__max_3_p_0(hlds__goal_form__Max0_31, hlds__goal_form__Max1_33, &hlds__goal_form__Max1_19);
                }
#line 1037 "goal_form.m"
              }
#line 1040 "goal_form.m"
            {
#line 1040 "goal_form.m"
              mercury__int__min_3_p_0(hlds__goal_form__Min0_16, hlds__goal_form__Min1_18, hlds__goal_form__HeadVar__4_4);
            }
#line 1041 "goal_form.m"
            {
#line 1041 "goal_form.m"
              mercury__int__max_3_p_0(hlds__goal_form__Max0_17, hlds__goal_form__Max1_19, hlds__goal_form__HeadVar__5_5);
#line 1041 "goal_form.m"
              return;
            }
#line 1037 "goal_form.m"
          }
#line 1032 "goal_form.m"
      }
#line 1031 "goal_form.m"
  }
#line 1028 "goal_form.m"
}

#line 1016 "goal_form.m"
static void MR_CALL 
hlds__goal_form__count_recursive_calls_conj_7_p_0(
#line 1016 "goal_form.m"
  MR_Word hlds__goal_form__HeadVar__1_1,
#line 1016 "goal_form.m"
  MR_Word hlds__goal_form__PredId_2,
#line 1016 "goal_form.m"
  MR_Integer hlds__goal_form__ProcId_3,
#line 1016 "goal_form.m"
  MR_Integer hlds__goal_form__HeadVar__4_4,
#line 1016 "goal_form.m"
  MR_Integer hlds__goal_form__HeadVar__5_5,
#line 1016 "goal_form.m"
  MR_Integer * hlds__goal_form__Min_6,
#line 1016 "goal_form.m"
  MR_Integer * hlds__goal_form__Max_7)
#line 1016 "goal_form.m"
{
#line 1019 "goal_form.m"
  while (MR_TRUE)
#line 1019 "goal_form.m"
    {
#line 1019 "goal_form.m"
      /* tailcall optimized into a loop */
#line 1019 "goal_form.m"
      {
#line 1019 "goal_form.m"
        MR_bool hlds__goal_form__succeeded;

#line 1019 "goal_form.m"
        if ((hlds__goal_form__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1019 "goal_form.m"
          {
#line 1019 "goal_form.m"
            *hlds__goal_form__Min_6 = hlds__goal_form__HeadVar__4_4;
#line 1019 "goal_form.m"
            *hlds__goal_form__Max_7 = hlds__goal_form__HeadVar__5_5;
#line 1019 "goal_form.m"
          }
#line 1019 "goal_form.m"
        else
#line 1021 "goal_form.m"
          {
#line 1021 "goal_form.m"
            MR_Word hlds__goal_form__Goal_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__HeadVar__1_1, (MR_Integer) 0)));
#line 1021 "goal_form.m"
            MR_Word hlds__goal_form__Goals_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__HeadVar__1_1, (MR_Integer) 1)));
#line 1021 "goal_form.m"
            MR_Integer hlds__goal_form__Min1_20;
#line 1021 "goal_form.m"
            MR_Integer hlds__goal_form__Max1_21;
#line 1021 "goal_form.m"
            MR_Integer hlds__goal_form__Min2_22;
#line 1021 "goal_form.m"
            MR_Integer hlds__goal_form__Max2_23;

#line 1022 "goal_form.m"
            {
#line 1022 "goal_form.m"
              hlds__goal_form__count_recursive_calls_5_p_0(hlds__goal_form__Goal_12, hlds__goal_form__PredId_2, hlds__goal_form__ProcId_3, &hlds__goal_form__Min1_20, &hlds__goal_form__Max1_21);
            }
#line 1023 "goal_form.m"
            hlds__goal_form__Min2_22 = (hlds__goal_form__HeadVar__4_4 + hlds__goal_form__Min1_20);
#line 1024 "goal_form.m"
            hlds__goal_form__Max2_23 = (hlds__goal_form__HeadVar__5_5 + hlds__goal_form__Max1_21);
#line 1025 "goal_form.m"
            /* direct tailcall eliminated */
#line 1025 "goal_form.m"
            {
#line 1025 "goal_form.m"
              MR_Word hlds__goal_form__HeadVar__1__tmp_copy_1 = hlds__goal_form__Goals_13;
#line 1025 "goal_form.m"
              MR_Integer hlds__goal_form__HeadVar__4__tmp_copy_4 = hlds__goal_form__Min2_22;
#line 1025 "goal_form.m"
              MR_Integer hlds__goal_form__HeadVar__5__tmp_copy_5 = hlds__goal_form__Max2_23;

#line 1025 "goal_form.m"
              hlds__goal_form__HeadVar__5_5 = hlds__goal_form__HeadVar__5__tmp_copy_5;
#line 1025 "goal_form.m"
              hlds__goal_form__HeadVar__4_4 = hlds__goal_form__HeadVar__4__tmp_copy_4;
#line 1025 "goal_form.m"
              hlds__goal_form__HeadVar__1_1 = hlds__goal_form__HeadVar__1__tmp_copy_1;
#line 1025 "goal_form.m"
            }
#line 1025 "goal_form.m"
            continue;
#line 1021 "goal_form.m"
          }
#line 1019 "goal_form.m"
      }
#line 1019 "goal_form.m"
      break;
#line 1019 "goal_form.m"
    }
#line 1016 "goal_form.m"
}

#line 918 "goal_form.m"
static MR_bool MR_CALL 
hlds__goal_form__cannot_fail_before_stack_flush_conj_1_p_0(
#line 918 "goal_form.m"
  MR_Word hlds__goal_form__HeadVar__1_1)
#line 918 "goal_form.m"
{
#line 920 "goal_form.m"
  while (MR_TRUE)
#line 920 "goal_form.m"
    {
#line 920 "goal_form.m"
      /* tailcall optimized into a loop */
#line 920 "goal_form.m"
      {
#line 920 "goal_form.m"
        MR_bool hlds__goal_form__succeeded;

#line 920 "goal_form.m"
        if ((hlds__goal_form__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 920 "goal_form.m"
          hlds__goal_form__succeeded = MR_TRUE;
#line 920 "goal_form.m"
        else
#line 921 "goal_form.m"
          {
#line 921 "goal_form.m"
            MR_Word hlds__goal_form__Goal_2 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__HeadVar__1_1, (MR_Integer) 0)));
#line 921 "goal_form.m"
            MR_Word hlds__goal_form__Goals_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__HeadVar__1_1, (MR_Integer) 1)));
#line 921 "goal_form.m"
            MR_Word hlds__goal_form__GoalExpr_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Goal_2, (MR_Integer) 0)));
#line 921 "goal_form.m"
            MR_Word hlds__goal_form__GoalInfo_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Goal_2, (MR_Integer) 1)));

#line 927 "goal_form.m"
            if (((MR_tag((MR_Word) hlds__goal_form__GoalExpr_4)) == (MR_mktag((MR_Integer) 2))))
#line 925 "goal_form.m"
              {
#line 925 "goal_form.m"
                MR_Word hlds__goal_form__BuiltinState_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__GoalExpr_4, (MR_Integer) 3)));
#line 925 "goal_form.m"
                MR_Word hlds__goal_form__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__GoalExpr_4, (MR_Integer) 0)));
#line 925 "goal_form.m"
                MR_Integer hlds__goal_form__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(2), hlds__goal_form__GoalExpr_4, (MR_Integer) 1)));
#line 925 "goal_form.m"
                MR_Word hlds__goal_form__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__GoalExpr_4, (MR_Integer) 2)));
#line 925 "goal_form.m"
                MR_Word hlds__goal_form__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__GoalExpr_4, (MR_Integer) 4)));
#line 925 "goal_form.m"
                MR_Word hlds__goal_form__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__GoalExpr_4, (MR_Integer) 5)));

#line 926 "goal_form.m"
                hlds__goal_form__succeeded = (hlds__goal_form__BuiltinState_9 == (MR_Integer) 0);
#line 926 "goal_form.m"
                hlds__goal_form__succeeded = !(hlds__goal_form__succeeded);
#line 925 "goal_form.m"
              }
#line 927 "goal_form.m"
            else
#line 927 "goal_form.m"
              if (((((MR_tag((MR_Word) hlds__goal_form__GoalExpr_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_4, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 928 "goal_form.m"
                hlds__goal_form__succeeded = MR_TRUE;
#line 927 "goal_form.m"
              else
#line 927 "goal_form.m"
                hlds__goal_form__succeeded = MR_FALSE;
#line 932 "goal_form.m"
            if (hlds__goal_form__succeeded)
#line 931 "goal_form.m"
              hlds__goal_form__succeeded = MR_TRUE;
#line 932 "goal_form.m"
            else
#line 937 "goal_form.m"
              {
#line 937 "goal_form.m"
                MR_Word hlds__goal_form__Detism_17;
#line 937 "goal_form.m"
                MR_Word hlds__goal_form__V_20_20;
#line 934 "goal_form.m"
                MR_Word hlds__goal_form__V_18_18;

#line 933 "goal_form.m"
                {
#line 933 "goal_form.m"
                  hlds__goal_form__Detism_17 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(hlds__goal_form__GoalInfo_5);
                }
#line 934 "goal_form.m"
                {
#line 934 "goal_form.m"
                  parse_tree__prog_data__determinism_components_3_p_0(hlds__goal_form__Detism_17, &hlds__goal_form__V_20_20, &hlds__goal_form__V_18_18);
                }
#line 934 "goal_form.m"
                hlds__goal_form__succeeded = ((MR_Integer) 1 == hlds__goal_form__V_20_20);
#line 937 "goal_form.m"
                if (hlds__goal_form__succeeded)
#line 936 "goal_form.m"
                  {
#line 936 "goal_form.m"
                    /* direct tailcall eliminated */
#line 936 "goal_form.m"
                    {
#line 936 "goal_form.m"
                      MR_Word hlds__goal_form__HeadVar__1__tmp_copy_1 = hlds__goal_form__Goals_3;

#line 936 "goal_form.m"
                      hlds__goal_form__HeadVar__1_1 = hlds__goal_form__HeadVar__1__tmp_copy_1;
#line 936 "goal_form.m"
                    }
#line 936 "goal_form.m"
                    continue;
#line 936 "goal_form.m"
                  }
#line 937 "goal_form.m"
              }
#line 921 "goal_form.m"
          }
#line 920 "goal_form.m"
        return hlds__goal_form__succeeded;
#line 920 "goal_form.m"
      }
#line 920 "goal_form.m"
      break;
#line 920 "goal_form.m"
    }
#line 918 "goal_form.m"
}

#line 893 "goal_form.m"
static MR_bool MR_CALL 
hlds__goal_form__cannot_stack_flush_cases_1_p_0(
#line 893 "goal_form.m"
  MR_Word hlds__goal_form__HeadVar__1_1)
#line 893 "goal_form.m"
{
#line 895 "goal_form.m"
  while (MR_TRUE)
#line 895 "goal_form.m"
    {
#line 895 "goal_form.m"
      /* tailcall optimized into a loop */
#line 895 "goal_form.m"
      {
#line 895 "goal_form.m"
        MR_bool hlds__goal_form__succeeded;

#line 895 "goal_form.m"
        if ((hlds__goal_form__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 895 "goal_form.m"
          hlds__goal_form__succeeded = MR_TRUE;
#line 895 "goal_form.m"
        else
#line 896 "goal_form.m"
          {
#line 896 "goal_form.m"
            MR_Word hlds__goal_form__Goal_4;
#line 896 "goal_form.m"
            MR_Word hlds__goal_form__Cases_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__HeadVar__1_1, (MR_Integer) 1)));
#line 896 "goal_form.m"
            MR_Word hlds__goal_form__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__HeadVar__1_1, (MR_Integer) 0)));
#line 896 "goal_form.m"
            MR_Word hlds__goal_form__GoalExpr_7;
#line 896 "goal_form.m"
            MR_Word hlds__goal_form__V_2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__V_6_6, (MR_Integer) 0)));
#line 896 "goal_form.m"
            MR_Word hlds__goal_form__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__V_6_6, (MR_Integer) 1)));
#line 869 "goal_form.m"
            MR_Word hlds__goal_form__V_8_8;

#line 896 "goal_form.m"
            hlds__goal_form__Goal_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__V_6_6, (MR_Integer) 2)));
#line 869 "goal_form.m"
            hlds__goal_form__GoalExpr_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Goal_4, (MR_Integer) 0)));
#line 869 "goal_form.m"
            hlds__goal_form__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Goal_4, (MR_Integer) 1)));
#line 870 "goal_form.m"
            {
#line 870 "goal_form.m"
              hlds__goal_form__succeeded = hlds__goal_form__cannot_stack_flush_2_1_p_0(hlds__goal_form__GoalExpr_7);
            }
#line 896 "goal_form.m"
            if (hlds__goal_form__succeeded)
#line 898 "goal_form.m"
              {
#line 898 "goal_form.m"
                /* direct tailcall eliminated */
#line 898 "goal_form.m"
                {
#line 898 "goal_form.m"
                  MR_Word hlds__goal_form__HeadVar__1__tmp_copy_1 = hlds__goal_form__Cases_5;

#line 898 "goal_form.m"
                  hlds__goal_form__HeadVar__1_1 = hlds__goal_form__HeadVar__1__tmp_copy_1;
#line 898 "goal_form.m"
                }
#line 898 "goal_form.m"
                continue;
#line 898 "goal_form.m"
              }
#line 896 "goal_form.m"
          }
#line 895 "goal_form.m"
        return hlds__goal_form__succeeded;
#line 895 "goal_form.m"
      }
#line 895 "goal_form.m"
      break;
#line 895 "goal_form.m"
    }
#line 893 "goal_form.m"
}

#line 886 "goal_form.m"
static MR_bool MR_CALL 
hlds__goal_form__cannot_stack_flush_goals_1_p_0(
#line 886 "goal_form.m"
  MR_Word hlds__goal_form__HeadVar__1_1)
#line 886 "goal_form.m"
{
#line 888 "goal_form.m"
  while (MR_TRUE)
#line 888 "goal_form.m"
    {
#line 888 "goal_form.m"
      /* tailcall optimized into a loop */
#line 888 "goal_form.m"
      {
#line 888 "goal_form.m"
        MR_bool hlds__goal_form__succeeded;

#line 888 "goal_form.m"
        if ((hlds__goal_form__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 888 "goal_form.m"
          hlds__goal_form__succeeded = MR_TRUE;
#line 888 "goal_form.m"
        else
#line 889 "goal_form.m"
          {
#line 889 "goal_form.m"
            MR_Word hlds__goal_form__Goal_2 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__HeadVar__1_1, (MR_Integer) 0)));
#line 889 "goal_form.m"
            MR_Word hlds__goal_form__Goals_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__HeadVar__1_1, (MR_Integer) 1)));
#line 889 "goal_form.m"
            MR_Word hlds__goal_form__GoalExpr_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Goal_2, (MR_Integer) 0)));
#line 869 "goal_form.m"
            MR_Word hlds__goal_form__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Goal_2, (MR_Integer) 1)));

#line 870 "goal_form.m"
            {
#line 870 "goal_form.m"
              hlds__goal_form__succeeded = hlds__goal_form__cannot_stack_flush_2_1_p_0(hlds__goal_form__GoalExpr_4);
            }
#line 889 "goal_form.m"
            if (hlds__goal_form__succeeded)
#line 891 "goal_form.m"
              {
#line 891 "goal_form.m"
                /* direct tailcall eliminated */
#line 891 "goal_form.m"
                {
#line 891 "goal_form.m"
                  MR_Word hlds__goal_form__HeadVar__1__tmp_copy_1 = hlds__goal_form__Goals_3;

#line 891 "goal_form.m"
                  hlds__goal_form__HeadVar__1_1 = hlds__goal_form__HeadVar__1__tmp_copy_1;
#line 891 "goal_form.m"
                }
#line 891 "goal_form.m"
                continue;
#line 891 "goal_form.m"
              }
#line 889 "goal_form.m"
          }
#line 888 "goal_form.m"
        return hlds__goal_form__succeeded;
#line 888 "goal_form.m"
      }
#line 888 "goal_form.m"
      break;
#line 888 "goal_form.m"
    }
#line 886 "goal_form.m"
}

#line 872 "goal_form.m"
static MR_bool MR_CALL 
hlds__goal_form__cannot_stack_flush_2_1_p_0(
#line 872 "goal_form.m"
  MR_Word hlds__goal_form__HeadVar__1_1)
#line 872 "goal_form.m"
{
#line 874 "goal_form.m"
  {
#line 874 "goal_form.m"
    MR_bool hlds__goal_form__succeeded;

#line 874 "goal_form.m"
    if (((MR_tag((MR_Word) hlds__goal_form__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 883 "goal_form.m"
      {
#line 883 "goal_form.m"
        MR_Word hlds__goal_form__Unify_24;
#line 883 "goal_form.m"
        MR_Word hlds__goal_form__V_30_30 = (MR_Word) MR_body(((MR_Word) hlds__goal_form__HeadVar__1_1), (MR_Integer) 0);
#line 883 "goal_form.m"
        MR_Word hlds__goal_form__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__V_30_30, (MR_Integer) 0)));
#line 883 "goal_form.m"
        MR_Word hlds__goal_form__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__V_30_30, (MR_Integer) 1)));
#line 883 "goal_form.m"
        MR_Word hlds__goal_form__V_21_21;
#line 883 "goal_form.m"
        MR_Word hlds__goal_form__V_22_22;
#line 883 "goal_form.m"
        MR_Word hlds__goal_form__V_23_23;
#line 883 "goal_form.m"
        MR_Word hlds__goal_form__V_25_25;
#line 884 "goal_form.m"
        MR_Word hlds__goal_form__V_27_27;
#line 884 "goal_form.m"
        MR_Word hlds__goal_form__V_28_28;
#line 884 "goal_form.m"
        MR_Word hlds__goal_form__V_29_29;

#line 883 "goal_form.m"
        hlds__goal_form__succeeded = ((MR_tag((MR_Word) hlds__goal_form__V_31_31)) == (MR_mktag((MR_Integer) 1)));
#line 883 "goal_form.m"
        if (hlds__goal_form__succeeded)
#line 883 "goal_form.m"
          {
#line 883 "goal_form.m"
            hlds__goal_form__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__V_31_31, (MR_Integer) 0)));
#line 883 "goal_form.m"
            hlds__goal_form__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__V_31_31, (MR_Integer) 1)));
#line 883 "goal_form.m"
            hlds__goal_form__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__V_31_31, (MR_Integer) 2)));
#line 883 "goal_form.m"
            hlds__goal_form__Unify_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__V_31_31, (MR_Integer) 3)));
#line 883 "goal_form.m"
            hlds__goal_form__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__V_31_31, (MR_Integer) 4)));
#line 884 "goal_form.m"
            hlds__goal_form__succeeded = ((((MR_tag((MR_Word) hlds__goal_form__Unify_24)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__Unify_24, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 884 "goal_form.m"
            if (hlds__goal_form__succeeded)
#line 884 "goal_form.m"
              {
#line 884 "goal_form.m"
                hlds__goal_form__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__Unify_24, (MR_Integer) 1)));
#line 884 "goal_form.m"
                hlds__goal_form__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__Unify_24, (MR_Integer) 2)));
#line 884 "goal_form.m"
                hlds__goal_form__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__Unify_24, (MR_Integer) 3)));
#line 884 "goal_form.m"
              }
#line 884 "goal_form.m"
            hlds__goal_form__succeeded = !(hlds__goal_form__succeeded);
#line 883 "goal_form.m"
          }
#line 883 "goal_form.m"
      }
#line 874 "goal_form.m"
    else
#line 874 "goal_form.m"
      if (((MR_tag((MR_Word) hlds__goal_form__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 876 "goal_form.m"
        {
#line 876 "goal_form.m"
          MR_Word hlds__goal_form__BuiltinState_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__HeadVar__1_1, (MR_Integer) 3)));
#line 876 "goal_form.m"
          MR_Word hlds__goal_form__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__HeadVar__1_1, (MR_Integer) 0)));
#line 876 "goal_form.m"
          MR_Integer hlds__goal_form__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(2), hlds__goal_form__HeadVar__1_1, (MR_Integer) 1)));
#line 876 "goal_form.m"
          MR_Word hlds__goal_form__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__HeadVar__1_1, (MR_Integer) 2)));
#line 876 "goal_form.m"
          MR_Word hlds__goal_form__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__HeadVar__1_1, (MR_Integer) 4)));
#line 876 "goal_form.m"
          MR_Word hlds__goal_form__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__HeadVar__1_1, (MR_Integer) 5)));

#line 877 "goal_form.m"
          hlds__goal_form__succeeded = (hlds__goal_form__BuiltinState_13 == (MR_Integer) 0);
#line 876 "goal_form.m"
        }
#line 874 "goal_form.m"
      else
#line 874 "goal_form.m"
        if (((MR_tag((MR_Word) hlds__goal_form__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 874 "goal_form.m"
          {
#line 874 "goal_form.m"
            MR_Word hlds__goal_form__Unify_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__HeadVar__1_1, (MR_Integer) 3)));
#line 874 "goal_form.m"
            MR_Word hlds__goal_form__V_2_2 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__HeadVar__1_1, (MR_Integer) 0)));
#line 874 "goal_form.m"
            MR_Word hlds__goal_form__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__HeadVar__1_1, (MR_Integer) 1)));
#line 874 "goal_form.m"
            MR_Word hlds__goal_form__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__HeadVar__1_1, (MR_Integer) 2)));
#line 874 "goal_form.m"
            MR_Word hlds__goal_form__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__HeadVar__1_1, (MR_Integer) 4)));
#line 875 "goal_form.m"
            MR_Word hlds__goal_form__V_7_7;
#line 875 "goal_form.m"
            MR_Word hlds__goal_form__V_8_8;
#line 875 "goal_form.m"
            MR_Word hlds__goal_form__V_9_9;

#line 875 "goal_form.m"
            hlds__goal_form__succeeded = ((((MR_tag((MR_Word) hlds__goal_form__Unify_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__Unify_5, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 875 "goal_form.m"
            if (hlds__goal_form__succeeded)
#line 875 "goal_form.m"
              {
#line 875 "goal_form.m"
                hlds__goal_form__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__Unify_5, (MR_Integer) 1)));
#line 875 "goal_form.m"
                hlds__goal_form__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__Unify_5, (MR_Integer) 2)));
#line 875 "goal_form.m"
                hlds__goal_form__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__Unify_5, (MR_Integer) 3)));
#line 875 "goal_form.m"
              }
#line 875 "goal_form.m"
            hlds__goal_form__succeeded = !(hlds__goal_form__succeeded);
#line 874 "goal_form.m"
          }
#line 874 "goal_form.m"
        else
#line 874 "goal_form.m"
          if (((((MR_tag((MR_Word) hlds__goal_form__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 878 "goal_form.m"
            {
#line 878 "goal_form.m"
              MR_Word hlds__goal_form__ConjType_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__HeadVar__1_1, (MR_Integer) 1)));
#line 878 "goal_form.m"
              MR_Word hlds__goal_form__Goals_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__HeadVar__1_1, (MR_Integer) 2)));

#line 879 "goal_form.m"
              hlds__goal_form__succeeded = (hlds__goal_form__ConjType_16 == (MR_Integer) 0);
#line 878 "goal_form.m"
              if (hlds__goal_form__succeeded)
#line 880 "goal_form.m"
                {
#line 880 "goal_form.m"
                  return hlds__goal_form__succeeded = hlds__goal_form__cannot_stack_flush_goals_1_p_0(hlds__goal_form__Goals_17);
                }
#line 878 "goal_form.m"
            }
#line 874 "goal_form.m"
          else
#line 874 "goal_form.m"
            if (((((MR_tag((MR_Word) hlds__goal_form__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 881 "goal_form.m"
              {
#line 881 "goal_form.m"
                MR_Word hlds__goal_form__Cases_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__HeadVar__1_1, (MR_Integer) 3)));
#line 881 "goal_form.m"
                MR_Word hlds__goal_form__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__HeadVar__1_1, (MR_Integer) 1)));
#line 881 "goal_form.m"
                MR_Word hlds__goal_form__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__HeadVar__1_1, (MR_Integer) 2)));

#line 882 "goal_form.m"
                {
#line 882 "goal_form.m"
                  return hlds__goal_form__succeeded = hlds__goal_form__cannot_stack_flush_cases_1_p_0(hlds__goal_form__Cases_20);
                }
#line 881 "goal_form.m"
              }
#line 874 "goal_form.m"
            else
#line 874 "goal_form.m"
              hlds__goal_form__succeeded = MR_FALSE;
#line 874 "goal_form.m"
    return hlds__goal_form__succeeded;
#line 874 "goal_form.m"
  }
#line 872 "goal_form.m"
}

#line 857 "goal_form.m"
static void MR_CALL 
hlds__goal_form__cases_may_allocate_heap_2_p_0(
#line 857 "goal_form.m"
  MR_Word hlds__goal_form__HeadVar__1_1,
#line 857 "goal_form.m"
  MR_Word * hlds__goal_form__HeadVar__2_2)
#line 857 "goal_form.m"
{
#line 859 "goal_form.m"
  while (MR_TRUE)
#line 859 "goal_form.m"
    {
#line 859 "goal_form.m"
      /* tailcall optimized into a loop */
#line 859 "goal_form.m"
      {
#line 859 "goal_form.m"
        MR_bool hlds__goal_form__succeeded;

#line 859 "goal_form.m"
        if ((hlds__goal_form__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 859 "goal_form.m"
          *hlds__goal_form__HeadVar__2_2 = (MR_Integer) 0;
#line 859 "goal_form.m"
        else
#line 860 "goal_form.m"
          {
#line 860 "goal_form.m"
            MR_Word hlds__goal_form__Goal_5;
#line 860 "goal_form.m"
            MR_Word hlds__goal_form__Cases_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__HeadVar__1_1, (MR_Integer) 1)));
#line 860 "goal_form.m"
            MR_Word hlds__goal_form__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__HeadVar__1_1, (MR_Integer) 0)));
#line 860 "goal_form.m"
            MR_Word hlds__goal_form__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__V_8_8, (MR_Integer) 0)));
#line 860 "goal_form.m"
            MR_Word hlds__goal_form__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__V_8_8, (MR_Integer) 1)));
#line 861 "goal_form.m"
            MR_Word hlds__goal_form__V_10_10;
#line 861 "goal_form.m"
            MR_Word hlds__goal_form__GoalExpr_12;
#line 748 "goal_form.m"
            MR_Word hlds__goal_form___GoalInfo_13;

#line 860 "goal_form.m"
            hlds__goal_form__Goal_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__V_8_8, (MR_Integer) 2)));
#line 748 "goal_form.m"
            hlds__goal_form__GoalExpr_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Goal_5, (MR_Integer) 0)));
#line 748 "goal_form.m"
            hlds__goal_form___GoalInfo_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Goal_5, (MR_Integer) 1)));
#line 749 "goal_form.m"
            {
#line 749 "goal_form.m"
              hlds__goal_form__goal_may_allocate_heap_2_2_p_0(hlds__goal_form__GoalExpr_12, &hlds__goal_form__V_10_10);
            }
#line 861 "goal_form.m"
            hlds__goal_form__succeeded = ((MR_Integer) 1 == hlds__goal_form__V_10_10);
#line 863 "goal_form.m"
            if (hlds__goal_form__succeeded)
#line 862 "goal_form.m"
              *hlds__goal_form__HeadVar__2_2 = (MR_Integer) 1;
#line 863 "goal_form.m"
            else
#line 864 "goal_form.m"
              {
#line 864 "goal_form.m"
                /* direct tailcall eliminated */
#line 864 "goal_form.m"
                {
#line 864 "goal_form.m"
                  MR_Word hlds__goal_form__HeadVar__1__tmp_copy_1 = hlds__goal_form__Cases_6;

#line 864 "goal_form.m"
                  hlds__goal_form__HeadVar__1_1 = hlds__goal_form__HeadVar__1__tmp_copy_1;
#line 864 "goal_form.m"
                }
#line 864 "goal_form.m"
                continue;
#line 864 "goal_form.m"
              }
#line 860 "goal_form.m"
          }
#line 859 "goal_form.m"
      }
#line 859 "goal_form.m"
      break;
#line 859 "goal_form.m"
    }
#line 857 "goal_form.m"
}

#line 847 "goal_form.m"
static void MR_CALL 
hlds__goal_form__goal_list_may_allocate_heap_2_p_0(
#line 847 "goal_form.m"
  MR_Word hlds__goal_form__HeadVar__1_1,
#line 847 "goal_form.m"
  MR_Word * hlds__goal_form__HeadVar__2_2)
#line 847 "goal_form.m"
{
#line 849 "goal_form.m"
  while (MR_TRUE)
#line 849 "goal_form.m"
    {
#line 849 "goal_form.m"
      /* tailcall optimized into a loop */
#line 849 "goal_form.m"
      {
#line 849 "goal_form.m"
        MR_bool hlds__goal_form__succeeded;

#line 849 "goal_form.m"
        if ((hlds__goal_form__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 849 "goal_form.m"
          *hlds__goal_form__HeadVar__2_2 = (MR_Integer) 0;
#line 849 "goal_form.m"
        else
#line 850 "goal_form.m"
          {
#line 850 "goal_form.m"
            MR_Word hlds__goal_form__Goal_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__HeadVar__1_1, (MR_Integer) 0)));
#line 850 "goal_form.m"
            MR_Word hlds__goal_form__Goals_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__HeadVar__1_1, (MR_Integer) 1)));
#line 851 "goal_form.m"
            MR_Word hlds__goal_form__V_7_7;
#line 851 "goal_form.m"
            MR_Word hlds__goal_form__GoalExpr_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Goal_3, (MR_Integer) 0)));
#line 748 "goal_form.m"
            MR_Word hlds__goal_form___GoalInfo_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Goal_3, (MR_Integer) 1)));

#line 749 "goal_form.m"
            {
#line 749 "goal_form.m"
              hlds__goal_form__goal_may_allocate_heap_2_2_p_0(hlds__goal_form__GoalExpr_9, &hlds__goal_form__V_7_7);
            }
#line 851 "goal_form.m"
            hlds__goal_form__succeeded = ((MR_Integer) 1 == hlds__goal_form__V_7_7);
#line 853 "goal_form.m"
            if (hlds__goal_form__succeeded)
#line 852 "goal_form.m"
              *hlds__goal_form__HeadVar__2_2 = (MR_Integer) 1;
#line 853 "goal_form.m"
            else
#line 854 "goal_form.m"
              {
#line 854 "goal_form.m"
                /* direct tailcall eliminated */
#line 854 "goal_form.m"
                {
#line 854 "goal_form.m"
                  MR_Word hlds__goal_form__HeadVar__1__tmp_copy_1 = hlds__goal_form__Goals_4;

#line 854 "goal_form.m"
                  hlds__goal_form__HeadVar__1_1 = hlds__goal_form__HeadVar__1__tmp_copy_1;
#line 854 "goal_form.m"
                }
#line 854 "goal_form.m"
                continue;
#line 854 "goal_form.m"
              }
#line 850 "goal_form.m"
          }
#line 849 "goal_form.m"
      }
#line 849 "goal_form.m"
      break;
#line 849 "goal_form.m"
    }
#line 847 "goal_form.m"
}

#line 751 "goal_form.m"
static void MR_CALL 
hlds__goal_form__goal_may_allocate_heap_2_2_p_0(
#line 751 "goal_form.m"
  MR_Word hlds__goal_form__GoalExpr_3,
#line 751 "goal_form.m"
  MR_Word * hlds__goal_form__May_4)
#line 751 "goal_form.m"
{
#line 755 "goal_form.m"
  while (MR_TRUE)
#line 755 "goal_form.m"
    {
#line 755 "goal_form.m"
      /* tailcall optimized into a loop */
#line 755 "goal_form.m"
      {
#line 755 "goal_form.m"
        MR_bool hlds__goal_form__succeeded;

#line 755 "goal_form.m"
        if (((MR_tag((MR_Word) hlds__goal_form__GoalExpr_3)) == (MR_mktag((MR_Integer) 0))))
#line 811 "goal_form.m"
          {
#line 811 "goal_form.m"
            MR_Word hlds__goal_form__SubGoal_46 = (MR_Word) MR_body(((MR_Word) hlds__goal_form__GoalExpr_3), (MR_Integer) 0);
#line 811 "goal_form.m"
            MR_Word hlds__goal_form__GoalExpr_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__SubGoal_46, (MR_Integer) 0)));
#line 748 "goal_form.m"
            MR_Word hlds__goal_form___GoalInfo_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__SubGoal_46, (MR_Integer) 1)));

#line 749 "goal_form.m"
            /* direct tailcall eliminated */
#line 749 "goal_form.m"
            {
#line 749 "goal_form.m"
              MR_Word hlds__goal_form__GoalExpr__tmp_copy_3 = hlds__goal_form__GoalExpr_81;

#line 749 "goal_form.m"
              hlds__goal_form__GoalExpr_3 = hlds__goal_form__GoalExpr__tmp_copy_3;
#line 749 "goal_form.m"
            }
#line 749 "goal_form.m"
            continue;
#line 811 "goal_form.m"
          }
#line 755 "goal_form.m"
        else
#line 755 "goal_form.m"
          if (((MR_tag((MR_Word) hlds__goal_form__GoalExpr_3)) == (MR_mktag((MR_Integer) 2))))
#line 765 "goal_form.m"
            {
#line 765 "goal_form.m"
              MR_Word hlds__goal_form__Builtin_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__GoalExpr_3, (MR_Integer) 3)));
#line 765 "goal_form.m"
              MR_Word hlds__goal_form__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__GoalExpr_3, (MR_Integer) 0)));
#line 765 "goal_form.m"
              MR_Integer hlds__goal_form__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(2), hlds__goal_form__GoalExpr_3, (MR_Integer) 1)));
#line 765 "goal_form.m"
              MR_Word hlds__goal_form__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__GoalExpr_3, (MR_Integer) 2)));
#line 765 "goal_form.m"
              MR_Word hlds__goal_form__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__GoalExpr_3, (MR_Integer) 4)));
#line 765 "goal_form.m"
              MR_Word hlds__goal_form__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__GoalExpr_3, (MR_Integer) 5)));

#line 769 "goal_form.m"
              if ((hlds__goal_form__Builtin_22 == (MR_Integer) 0))
#line 768 "goal_form.m"
                *hlds__goal_form__May_4 = (MR_Integer) 0;
#line 769 "goal_form.m"
              else
#line 773 "goal_form.m"
                *hlds__goal_form__May_4 = (MR_Integer) 1;
#line 765 "goal_form.m"
            }
#line 755 "goal_form.m"
          else
#line 755 "goal_form.m"
            if (((MR_tag((MR_Word) hlds__goal_form__GoalExpr_3)) == (MR_mktag((MR_Integer) 1))))
#line 755 "goal_form.m"
              {
#line 755 "goal_form.m"
                MR_Word hlds__goal_form__Unification_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__GoalExpr_3, (MR_Integer) 3)));
#line 755 "goal_form.m"
                MR_Word hlds__goal_form__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__GoalExpr_3, (MR_Integer) 0)));
#line 755 "goal_form.m"
                MR_Word hlds__goal_form__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__GoalExpr_3, (MR_Integer) 1)));
#line 755 "goal_form.m"
                MR_Word hlds__goal_form__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__GoalExpr_3, (MR_Integer) 2)));
#line 755 "goal_form.m"
                MR_Word hlds__goal_form__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__GoalExpr_3, (MR_Integer) 4)));
#line 757 "goal_form.m"
                MR_Word hlds__goal_form__Args_12;
#line 757 "goal_form.m"
                MR_Word hlds__goal_form__V_10_10;
#line 757 "goal_form.m"
                MR_Word hlds__goal_form__V_11_11;
#line 757 "goal_form.m"
                MR_Word hlds__goal_form__V_13_13;
#line 757 "goal_form.m"
                MR_Word hlds__goal_form__V_14_14;
#line 757 "goal_form.m"
                MR_Word hlds__goal_form__V_15_15;
#line 757 "goal_form.m"
                MR_Word hlds__goal_form__V_16_16;
#line 758 "goal_form.m"
                MR_Word hlds__goal_form__V_17_17;
#line 758 "goal_form.m"
                MR_Word hlds__goal_form__V_18_18;

#line 757 "goal_form.m"
                hlds__goal_form__succeeded = ((MR_tag((MR_Word) hlds__goal_form__Unification_8)) == (MR_mktag((MR_Integer) 0)));
#line 757 "goal_form.m"
                if (hlds__goal_form__succeeded)
#line 757 "goal_form.m"
                  {
#line 757 "goal_form.m"
                    hlds__goal_form__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Unification_8, (MR_Integer) 0)));
#line 757 "goal_form.m"
                    hlds__goal_form__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Unification_8, (MR_Integer) 1)));
#line 757 "goal_form.m"
                    hlds__goal_form__Args_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Unification_8, (MR_Integer) 2)));
#line 757 "goal_form.m"
                    hlds__goal_form__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Unification_8, (MR_Integer) 3)));
#line 757 "goal_form.m"
                    hlds__goal_form__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Unification_8, (MR_Integer) 4)));
#line 757 "goal_form.m"
                    hlds__goal_form__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Unification_8, (MR_Integer) 5)));
#line 757 "goal_form.m"
                    hlds__goal_form__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Unification_8, (MR_Integer) 6)));
#line 758 "goal_form.m"
                    hlds__goal_form__succeeded = ((MR_tag((MR_Word) hlds__goal_form__Args_12)) == (MR_mktag((MR_Integer) 1)));
#line 758 "goal_form.m"
                    if (hlds__goal_form__succeeded)
#line 758 "goal_form.m"
                      {
#line 758 "goal_form.m"
                        hlds__goal_form__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__Args_12, (MR_Integer) 0)));
#line 758 "goal_form.m"
                        hlds__goal_form__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__Args_12, (MR_Integer) 1)));
#line 758 "goal_form.m"
                      }
#line 757 "goal_form.m"
                  }
#line 761 "goal_form.m"
                if (hlds__goal_form__succeeded)
#line 760 "goal_form.m"
                  *hlds__goal_form__May_4 = (MR_Integer) 1;
#line 761 "goal_form.m"
                else
#line 762 "goal_form.m"
                  *hlds__goal_form__May_4 = (MR_Integer) 0;
#line 755 "goal_form.m"
              }
#line 755 "goal_form.m"
            else
#line 755 "goal_form.m"
              if (((((MR_tag((MR_Word) hlds__goal_form__GoalExpr_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 785 "goal_form.m"
                *hlds__goal_form__May_4 = (MR_Integer) 1;
#line 755 "goal_form.m"
              else
#line 755 "goal_form.m"
                if (((((MR_tag((MR_Word) hlds__goal_form__GoalExpr_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 787 "goal_form.m"
                  {
#line 787 "goal_form.m"
                    MR_Word hlds__goal_form__ConjType_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_3, (MR_Integer) 1)));
#line 787 "goal_form.m"
                    MR_Word hlds__goal_form__Goals_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_3, (MR_Integer) 2)));

#line 791 "goal_form.m"
                    if ((hlds__goal_form__ConjType_37 == (MR_Integer) 1))
#line 790 "goal_form.m"
                      *hlds__goal_form__May_4 = (MR_Integer) 1;
#line 791 "goal_form.m"
                    else
#line 793 "goal_form.m"
                      {
#line 793 "goal_form.m"
                        hlds__goal_form__goal_list_may_allocate_heap_2_p_0(hlds__goal_form__Goals_38, hlds__goal_form__May_4);
#line 793 "goal_form.m"
                        return;
                      }
#line 787 "goal_form.m"
                  }
#line 755 "goal_form.m"
                else
#line 755 "goal_form.m"
                  if (((((MR_tag((MR_Word) hlds__goal_form__GoalExpr_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_3, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 796 "goal_form.m"
                    {
#line 796 "goal_form.m"
                      MR_Word hlds__goal_form__Goals_66 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_3, (MR_Integer) 1)));

#line 797 "goal_form.m"
                      {
#line 797 "goal_form.m"
                        hlds__goal_form__goal_list_may_allocate_heap_2_p_0(hlds__goal_form__Goals_66, hlds__goal_form__May_4);
#line 797 "goal_form.m"
                        return;
                      }
#line 796 "goal_form.m"
                    }
#line 755 "goal_form.m"
                  else
#line 755 "goal_form.m"
                    if (((((MR_tag((MR_Word) hlds__goal_form__GoalExpr_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 777 "goal_form.m"
                      *hlds__goal_form__May_4 = (MR_Integer) 1;
#line 755 "goal_form.m"
                    else
#line 755 "goal_form.m"
                      if (((((MR_tag((MR_Word) hlds__goal_form__GoalExpr_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_3, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 802 "goal_form.m"
                        {
#line 802 "goal_form.m"
                          MR_Word hlds__goal_form__Cond_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_3, (MR_Integer) 2)));
#line 802 "goal_form.m"
                          MR_Word hlds__goal_form__Then_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_3, (MR_Integer) 3)));
#line 802 "goal_form.m"
                          MR_Word hlds__goal_form__Else_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_3, (MR_Integer) 4)));
#line 802 "goal_form.m"
                          MR_Word hlds__goal_form___Vars_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_3, (MR_Integer) 1)));
#line 803 "goal_form.m"
                          MR_Word hlds__goal_form__V_68_68;
#line 803 "goal_form.m"
                          MR_Word hlds__goal_form__GoalExpr_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Cond_43, (MR_Integer) 0)));
#line 748 "goal_form.m"
                          MR_Word hlds__goal_form___GoalInfo_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Cond_43, (MR_Integer) 1)));

#line 749 "goal_form.m"
                          {
#line 749 "goal_form.m"
                            hlds__goal_form__goal_may_allocate_heap_2_2_p_0(hlds__goal_form__GoalExpr_72, &hlds__goal_form__V_68_68);
                          }
#line 803 "goal_form.m"
                          hlds__goal_form__succeeded = ((MR_Integer) 1 == hlds__goal_form__V_68_68);
#line 805 "goal_form.m"
                          if (hlds__goal_form__succeeded)
#line 804 "goal_form.m"
                            *hlds__goal_form__May_4 = (MR_Integer) 1;
#line 805 "goal_form.m"
                          else
#line 807 "goal_form.m"
                            {
#line 805 "goal_form.m"
                              MR_Word hlds__goal_form__V_69_69;
#line 805 "goal_form.m"
                              MR_Word hlds__goal_form__GoalExpr_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Then_44, (MR_Integer) 0)));
#line 748 "goal_form.m"
                              MR_Word hlds__goal_form___GoalInfo_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Then_44, (MR_Integer) 1)));

#line 749 "goal_form.m"
                              {
#line 749 "goal_form.m"
                                hlds__goal_form__goal_may_allocate_heap_2_2_p_0(hlds__goal_form__GoalExpr_75, &hlds__goal_form__V_69_69);
                              }
#line 805 "goal_form.m"
                              hlds__goal_form__succeeded = ((MR_Integer) 1 == hlds__goal_form__V_69_69);
#line 807 "goal_form.m"
                              if (hlds__goal_form__succeeded)
#line 806 "goal_form.m"
                                *hlds__goal_form__May_4 = (MR_Integer) 1;
#line 807 "goal_form.m"
                              else
#line 748 "goal_form.m"
                                {
#line 748 "goal_form.m"
                                  MR_Word hlds__goal_form__GoalExpr_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Else_45, (MR_Integer) 0)));
#line 748 "goal_form.m"
                                  MR_Word hlds__goal_form___GoalInfo_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Else_45, (MR_Integer) 1)));

#line 749 "goal_form.m"
                                  /* direct tailcall eliminated */
#line 749 "goal_form.m"
                                  {
#line 749 "goal_form.m"
                                    MR_Word hlds__goal_form__GoalExpr__tmp_copy_3 = hlds__goal_form__GoalExpr_78;

#line 749 "goal_form.m"
                                    hlds__goal_form__GoalExpr_3 = hlds__goal_form__GoalExpr__tmp_copy_3;
#line 749 "goal_form.m"
                                  }
#line 749 "goal_form.m"
                                  continue;
#line 748 "goal_form.m"
                                }
#line 807 "goal_form.m"
                            }
#line 802 "goal_form.m"
                        }
#line 755 "goal_form.m"
                      else
#line 755 "goal_form.m"
                        if (((((MR_tag((MR_Word) hlds__goal_form__GoalExpr_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_3, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 814 "goal_form.m"
                          {
#line 814 "goal_form.m"
                            MR_Word hlds__goal_form__Reason_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_3, (MR_Integer) 1)));
#line 814 "goal_form.m"
                            MR_Word hlds__goal_form__SubGoal_67 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_3, (MR_Integer) 2)));
#line 816 "goal_form.m"
                            MR_Word hlds__goal_form__FGT_49;
#line 816 "goal_form.m"
                            MR_Word hlds__goal_form__V_48_48;

#line 816 "goal_form.m"
                            hlds__goal_form__succeeded = ((((MR_tag((MR_Word) hlds__goal_form__Reason_47)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__Reason_47, (MR_Integer) 0)))) == (MR_Integer) 4)));
#line 816 "goal_form.m"
                            if (hlds__goal_form__succeeded)
#line 816 "goal_form.m"
                              {
#line 816 "goal_form.m"
                                hlds__goal_form__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__Reason_47, (MR_Integer) 1)));
#line 816 "goal_form.m"
                                hlds__goal_form__FGT_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__Reason_47, (MR_Integer) 2)));
#line 818 "goal_form.m"
                                if ((hlds__goal_form__FGT_49 == (MR_Integer) 1))
#line 817 "goal_form.m"
                                  hlds__goal_form__succeeded = MR_TRUE;
#line 818 "goal_form.m"
                                else
#line 818 "goal_form.m"
                                  if ((hlds__goal_form__FGT_49 == (MR_Integer) 2))
#line 818 "goal_form.m"
                                    hlds__goal_form__succeeded = MR_TRUE;
#line 818 "goal_form.m"
                                  else
#line 818 "goal_form.m"
                                    hlds__goal_form__succeeded = MR_FALSE;
#line 816 "goal_form.m"
                              }
#line 827 "goal_form.m"
                            if (hlds__goal_form__succeeded)
#line 826 "goal_form.m"
                              *hlds__goal_form__May_4 = (MR_Integer) 1;
#line 827 "goal_form.m"
                            else
#line 748 "goal_form.m"
                              {
#line 748 "goal_form.m"
                                MR_Word hlds__goal_form__GoalExpr_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__SubGoal_67, (MR_Integer) 0)));
#line 748 "goal_form.m"
                                MR_Word hlds__goal_form___GoalInfo_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__SubGoal_67, (MR_Integer) 1)));

#line 749 "goal_form.m"
                                /* direct tailcall eliminated */
#line 749 "goal_form.m"
                                {
#line 749 "goal_form.m"
                                  MR_Word hlds__goal_form__GoalExpr__tmp_copy_3 = hlds__goal_form__GoalExpr_84;

#line 749 "goal_form.m"
                                  hlds__goal_form__GoalExpr_3 = hlds__goal_form__GoalExpr__tmp_copy_3;
#line 749 "goal_form.m"
                                }
#line 749 "goal_form.m"
                                continue;
#line 748 "goal_form.m"
                              }
#line 814 "goal_form.m"
                          }
#line 755 "goal_form.m"
                        else
#line 755 "goal_form.m"
                          if (((((MR_tag((MR_Word) hlds__goal_form__GoalExpr_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_3, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 831 "goal_form.m"
                            {
#line 831 "goal_form.m"
                              MR_Word hlds__goal_form__ShortHand_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_3, (MR_Integer) 1)));

#line 837 "goal_form.m"
                              if (((MR_tag((MR_Word) hlds__goal_form__ShortHand_50)) == (MR_mktag((MR_Integer) 0))))
#line 838 "goal_form.m"
                                {
#line 838 "goal_form.m"
                                  MR_Word hlds__goal_form__GoalA_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__ShortHand_50, (MR_Integer) 0)));
#line 838 "goal_form.m"
                                  MR_Word hlds__goal_form__GoalB_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__ShortHand_50, (MR_Integer) 1)));
#line 839 "goal_form.m"
                                  MR_Word hlds__goal_form__V_70_70;
#line 839 "goal_form.m"
                                  MR_Word hlds__goal_form__GoalExpr_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__GoalA_61, (MR_Integer) 0)));
#line 748 "goal_form.m"
                                  MR_Word hlds__goal_form___GoalInfo_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__GoalA_61, (MR_Integer) 1)));

#line 749 "goal_form.m"
                                  {
#line 749 "goal_form.m"
                                    hlds__goal_form__goal_may_allocate_heap_2_2_p_0(hlds__goal_form__GoalExpr_87, &hlds__goal_form__V_70_70);
                                  }
#line 839 "goal_form.m"
                                  hlds__goal_form__succeeded = ((MR_Integer) 1 == hlds__goal_form__V_70_70);
#line 841 "goal_form.m"
                                  if (hlds__goal_form__succeeded)
#line 840 "goal_form.m"
                                    *hlds__goal_form__May_4 = (MR_Integer) 1;
#line 841 "goal_form.m"
                                  else
#line 748 "goal_form.m"
                                    {
#line 748 "goal_form.m"
                                      MR_Word hlds__goal_form__GoalExpr_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__GoalB_62, (MR_Integer) 0)));
#line 748 "goal_form.m"
                                      MR_Word hlds__goal_form___GoalInfo_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__GoalB_62, (MR_Integer) 1)));

#line 749 "goal_form.m"
                                      /* direct tailcall eliminated */
#line 749 "goal_form.m"
                                      {
#line 749 "goal_form.m"
                                        MR_Word hlds__goal_form__GoalExpr__tmp_copy_3 = hlds__goal_form__GoalExpr_90;

#line 749 "goal_form.m"
                                        hlds__goal_form__GoalExpr_3 = hlds__goal_form__GoalExpr__tmp_copy_3;
#line 749 "goal_form.m"
                                      }
#line 749 "goal_form.m"
                                      continue;
#line 748 "goal_form.m"
                                    }
#line 838 "goal_form.m"
                                }
#line 837 "goal_form.m"
                              else
#line 836 "goal_form.m"
                                *hlds__goal_form__May_4 = (MR_Integer) 1;
#line 831 "goal_form.m"
                            }
#line 755 "goal_form.m"
                          else
#line 799 "goal_form.m"
                            {
#line 799 "goal_form.m"
                              MR_Word hlds__goal_form__Cases_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_3, (MR_Integer) 3)));
#line 799 "goal_form.m"
                              MR_Word hlds__goal_form___Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_3, (MR_Integer) 1)));
#line 799 "goal_form.m"
                              MR_Word hlds__goal_form___CanFail_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_3, (MR_Integer) 2)));

#line 800 "goal_form.m"
                              {
#line 800 "goal_form.m"
                                hlds__goal_form__cases_may_allocate_heap_2_p_0(hlds__goal_form__Cases_41, hlds__goal_form__May_4);
#line 800 "goal_form.m"
                                return;
                              }
#line 799 "goal_form.m"
                            }
#line 755 "goal_form.m"
      }
#line 755 "goal_form.m"
      break;
#line 755 "goal_form.m"
    }
#line 751 "goal_form.m"
}

#line 728 "goal_form.m"
static MR_Word MR_CALL 
hlds__goal_form__goal_is_flat_list_1_f_0(
#line 728 "goal_form.m"
  MR_Word hlds__goal_form__HeadVar__1_1)
#line 728 "goal_form.m"
{
#line 730 "goal_form.m"
  while (MR_TRUE)
#line 730 "goal_form.m"
    {
#line 730 "goal_form.m"
      /* tailcall optimized into a loop */
#line 730 "goal_form.m"
      {
#line 730 "goal_form.m"
        MR_bool hlds__goal_form__succeeded;
#line 730 "goal_form.m"
        MR_Word hlds__goal_form__HeadVar__2_2;

#line 730 "goal_form.m"
        if ((hlds__goal_form__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 730 "goal_form.m"
          hlds__goal_form__HeadVar__2_2 = (MR_Integer) 1;
#line 730 "goal_form.m"
        else
#line 731 "goal_form.m"
          {
#line 731 "goal_form.m"
            MR_Word hlds__goal_form__Goal_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__HeadVar__1_1, (MR_Integer) 0)));
#line 731 "goal_form.m"
            MR_Word hlds__goal_form__Goals_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__HeadVar__1_1, (MR_Integer) 1)));
#line 732 "goal_form.m"
            MR_Word hlds__goal_form__V_6_6;
#line 732 "goal_form.m"
            MR_Word hlds__goal_form__GoalExpr_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Goal_3, (MR_Integer) 0)));
#line 683 "goal_form.m"
            MR_Word hlds__goal_form___GoalInfo_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Goal_3, (MR_Integer) 1)));

#line 683 "goal_form.m"
            {
#line 683 "goal_form.m"
              hlds__goal_form__V_6_6 = hlds__goal_form__goal_is_flat_expr_1_f_0(hlds__goal_form__GoalExpr_7);
            }
#line 732 "goal_form.m"
            hlds__goal_form__succeeded = (hlds__goal_form__V_6_6 == (MR_Integer) 1);
#line 734 "goal_form.m"
            if (hlds__goal_form__succeeded)
#line 733 "goal_form.m"
              {
#line 733 "goal_form.m"
                /* direct tailcall eliminated */
#line 733 "goal_form.m"
                {
#line 733 "goal_form.m"
                  MR_Word hlds__goal_form__HeadVar__1__tmp_copy_1 = hlds__goal_form__Goals_4;

#line 733 "goal_form.m"
                  hlds__goal_form__HeadVar__1_1 = hlds__goal_form__HeadVar__1__tmp_copy_1;
#line 733 "goal_form.m"
                }
#line 733 "goal_form.m"
                continue;
#line 733 "goal_form.m"
              }
#line 734 "goal_form.m"
            else
#line 735 "goal_form.m"
              hlds__goal_form__HeadVar__2_2 = (MR_Integer) 0;
#line 731 "goal_form.m"
          }
#line 730 "goal_form.m"
        return hlds__goal_form__HeadVar__2_2;
#line 730 "goal_form.m"
      }
#line 730 "goal_form.m"
      break;
#line 730 "goal_form.m"
    }
#line 728 "goal_form.m"
}

#line 685 "goal_form.m"
static MR_Word MR_CALL 
hlds__goal_form__goal_is_flat_expr_1_f_0(
#line 685 "goal_form.m"
  MR_Word hlds__goal_form__GoalExpr_3)
#line 685 "goal_form.m"
{
#line 693 "goal_form.m"
  while (MR_TRUE)
#line 693 "goal_form.m"
    {
#line 693 "goal_form.m"
      /* tailcall optimized into a loop */
#line 693 "goal_form.m"
      {
#line 693 "goal_form.m"
        MR_bool hlds__goal_form__succeeded;
#line 693 "goal_form.m"
        MR_Word hlds__goal_form__IsFlat_4;

#line 693 "goal_form.m"
        if (((MR_tag((MR_Word) hlds__goal_form__GoalExpr_3)) == (MR_mktag((MR_Integer) 0))))
#line 712 "goal_form.m"
          {
#line 712 "goal_form.m"
            MR_Word hlds__goal_form__SubGoal_39 = (MR_Word) MR_body(((MR_Word) hlds__goal_form__GoalExpr_3), (MR_Integer) 0);
#line 712 "goal_form.m"
            MR_Word hlds__goal_form__GoalExpr_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__SubGoal_39, (MR_Integer) 0)));
#line 683 "goal_form.m"
            MR_Word hlds__goal_form___GoalInfo_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__SubGoal_39, (MR_Integer) 1)));

#line 683 "goal_form.m"
            /* direct tailcall eliminated */
#line 683 "goal_form.m"
            {
#line 683 "goal_form.m"
              MR_Word hlds__goal_form__GoalExpr__tmp_copy_3 = hlds__goal_form__GoalExpr_44;

#line 683 "goal_form.m"
              hlds__goal_form__GoalExpr_3 = hlds__goal_form__GoalExpr__tmp_copy_3;
#line 683 "goal_form.m"
            }
#line 683 "goal_form.m"
            continue;
#line 712 "goal_form.m"
          }
#line 693 "goal_form.m"
        else
#line 693 "goal_form.m"
          if (((((MR_tag((MR_Word) hlds__goal_form__GoalExpr_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 696 "goal_form.m"
            {
#line 696 "goal_form.m"
              MR_Word hlds__goal_form__ConjType_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_3, (MR_Integer) 1)));
#line 696 "goal_form.m"
              MR_Word hlds__goal_form__Goals_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_3, (MR_Integer) 2)));

#line 700 "goal_form.m"
              if ((hlds__goal_form__ConjType_28 == (MR_Integer) 1))
#line 699 "goal_form.m"
                hlds__goal_form__IsFlat_4 = (MR_Integer) 0;
#line 700 "goal_form.m"
              else
#line 702 "goal_form.m"
                {
#line 702 "goal_form.m"
                  return hlds__goal_form__IsFlat_4 = hlds__goal_form__goal_is_flat_list_1_f_0(hlds__goal_form__Goals_29);
                }
#line 696 "goal_form.m"
            }
#line 693 "goal_form.m"
          else
#line 693 "goal_form.m"
            if (((((MR_tag((MR_Word) hlds__goal_form__GoalExpr_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_3, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 715 "goal_form.m"
              {
#line 715 "goal_form.m"
                MR_Word hlds__goal_form__Reason_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_3, (MR_Integer) 1)));
#line 715 "goal_form.m"
                MR_Word hlds__goal_form__SubGoal_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_3, (MR_Integer) 2)));
#line 717 "goal_form.m"
                MR_Word hlds__goal_form__FGT_42;
#line 717 "goal_form.m"
                MR_Word hlds__goal_form__V_41_41;

#line 717 "goal_form.m"
                hlds__goal_form__succeeded = ((((MR_tag((MR_Word) hlds__goal_form__Reason_40)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__Reason_40, (MR_Integer) 0)))) == (MR_Integer) 4)));
#line 717 "goal_form.m"
                if (hlds__goal_form__succeeded)
#line 717 "goal_form.m"
                  {
#line 717 "goal_form.m"
                    hlds__goal_form__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__Reason_40, (MR_Integer) 1)));
#line 717 "goal_form.m"
                    hlds__goal_form__FGT_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__Reason_40, (MR_Integer) 2)));
#line 719 "goal_form.m"
                    if ((hlds__goal_form__FGT_42 == (MR_Integer) 1))
#line 718 "goal_form.m"
                      hlds__goal_form__succeeded = MR_TRUE;
#line 719 "goal_form.m"
                    else
#line 719 "goal_form.m"
                      if ((hlds__goal_form__FGT_42 == (MR_Integer) 2))
#line 719 "goal_form.m"
                        hlds__goal_form__succeeded = MR_TRUE;
#line 719 "goal_form.m"
                      else
#line 719 "goal_form.m"
                        hlds__goal_form__succeeded = MR_FALSE;
#line 717 "goal_form.m"
                  }
#line 723 "goal_form.m"
                if (hlds__goal_form__succeeded)
#line 722 "goal_form.m"
                  hlds__goal_form__IsFlat_4 = (MR_Integer) 1;
#line 723 "goal_form.m"
                else
#line 683 "goal_form.m"
                  {
#line 683 "goal_form.m"
                    MR_Word hlds__goal_form__GoalExpr_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__SubGoal_43, (MR_Integer) 0)));
#line 683 "goal_form.m"
                    MR_Word hlds__goal_form___GoalInfo_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__SubGoal_43, (MR_Integer) 1)));

#line 683 "goal_form.m"
                    /* direct tailcall eliminated */
#line 683 "goal_form.m"
                    {
#line 683 "goal_form.m"
                      MR_Word hlds__goal_form__GoalExpr__tmp_copy_3 = hlds__goal_form__GoalExpr_46;

#line 683 "goal_form.m"
                      hlds__goal_form__GoalExpr_3 = hlds__goal_form__GoalExpr__tmp_copy_3;
#line 683 "goal_form.m"
                    }
#line 683 "goal_form.m"
                    continue;
#line 683 "goal_form.m"
                  }
#line 715 "goal_form.m"
              }
#line 693 "goal_form.m"
            else
#line 693 "goal_form.m"
              if (((((((((((MR_tag((MR_Word) hlds__goal_form__GoalExpr_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_3, (MR_Integer) 0)))) == (MR_Integer) 1)))) || (((((MR_tag((MR_Word) hlds__goal_form__GoalExpr_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_3, (MR_Integer) 0)))) == (MR_Integer) 0)))))) || (((MR_tag((MR_Word) hlds__goal_form__GoalExpr_3)) == (MR_mktag((MR_Integer) 2)))))) || (((MR_tag((MR_Word) hlds__goal_form__GoalExpr_3)) == (MR_mktag((MR_Integer) 1))))))
#line 694 "goal_form.m"
                hlds__goal_form__IsFlat_4 = (MR_Integer) 1;
#line 693 "goal_form.m"
              else
#line 710 "goal_form.m"
                hlds__goal_form__IsFlat_4 = (MR_Integer) 0;
#line 693 "goal_form.m"
        return hlds__goal_form__IsFlat_4;
#line 693 "goal_form.m"
      }
#line 693 "goal_form.m"
      break;
#line 693 "goal_form.m"
    }
#line 685 "goal_form.m"
}

#line 671 "goal_form.m"
static MR_Word MR_CALL 
hlds__goal_form__case_list_can_throw_2_f_0(
#line 671 "goal_form.m"
  MR_Word hlds__goal_form__MaybeModuleInfo_1,
#line 671 "goal_form.m"
  MR_Word hlds__goal_form__HeadVar__2_2)
#line 671 "goal_form.m"
{
#line 673 "goal_form.m"
  while (MR_TRUE)
#line 673 "goal_form.m"
    {
#line 673 "goal_form.m"
      /* tailcall optimized into a loop */
#line 673 "goal_form.m"
      {
#line 673 "goal_form.m"
        MR_bool hlds__goal_form__succeeded;
#line 673 "goal_form.m"
        MR_Word hlds__goal_form__HeadVar__3_3;

#line 673 "goal_form.m"
        if ((hlds__goal_form__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 673 "goal_form.m"
          hlds__goal_form__HeadVar__3_3 = (MR_Integer) 0;
#line 673 "goal_form.m"
        else
#line 674 "goal_form.m"
          {
#line 674 "goal_form.m"
            MR_Word hlds__goal_form__Goal_8;
#line 674 "goal_form.m"
            MR_Word hlds__goal_form__Cases_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__HeadVar__2_2, (MR_Integer) 1)));
#line 674 "goal_form.m"
            MR_Word hlds__goal_form__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__HeadVar__2_2, (MR_Integer) 0)));
#line 674 "goal_form.m"
            MR_Word hlds__goal_form__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__V_10_10, (MR_Integer) 0)));
#line 674 "goal_form.m"
            MR_Word hlds__goal_form__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__V_10_10, (MR_Integer) 1)));
#line 675 "goal_form.m"
            MR_Word hlds__goal_form__GoalExpr_14;
#line 675 "goal_form.m"
            MR_Word hlds__goal_form__GoalInfo_15;
#line 675 "goal_form.m"
            MR_Word hlds__goal_form__Determinism_16;

#line 674 "goal_form.m"
            hlds__goal_form__Goal_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__V_10_10, (MR_Integer) 2)));
#line 555 "goal_form.m"
            hlds__goal_form__GoalExpr_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Goal_8, (MR_Integer) 0)));
#line 555 "goal_form.m"
            hlds__goal_form__GoalInfo_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Goal_8, (MR_Integer) 1)));
#line 556 "goal_form.m"
            {
#line 556 "goal_form.m"
              hlds__goal_form__Determinism_16 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(hlds__goal_form__GoalInfo_15);
            }
#line 557 "goal_form.m"
            hlds__goal_form__succeeded = (hlds__goal_form__Determinism_16 == (MR_Integer) 6);
#line 559 "goal_form.m"
            if (hlds__goal_form__succeeded)
#line 558 "goal_form.m"
              hlds__goal_form__succeeded = MR_TRUE;
#line 559 "goal_form.m"
            else
#line 560 "goal_form.m"
              {
#line 560 "goal_form.m"
                MR_Word hlds__goal_form__V_18_18;

#line 560 "goal_form.m"
                {
#line 560 "goal_form.m"
                  hlds__goal_form__V_18_18 = hlds__goal_form__goal_expr_can_throw_2_f_0(hlds__goal_form__MaybeModuleInfo_1, hlds__goal_form__GoalExpr_14);
                }
#line 675 "goal_form.m"
                hlds__goal_form__succeeded = (hlds__goal_form__V_18_18 == (MR_Integer) 1);
#line 560 "goal_form.m"
              }
#line 674 "goal_form.m"
            if (hlds__goal_form__succeeded)
#line 674 "goal_form.m"
              hlds__goal_form__HeadVar__3_3 = (MR_Integer) 1;
#line 674 "goal_form.m"
            else
#line 674 "goal_form.m"
              {
#line 674 "goal_form.m"
                /* direct tailcall eliminated */
#line 674 "goal_form.m"
                {
#line 674 "goal_form.m"
                  MR_Word hlds__goal_form__HeadVar__2__tmp_copy_2 = hlds__goal_form__Cases_9;

#line 674 "goal_form.m"
                  hlds__goal_form__HeadVar__2_2 = hlds__goal_form__HeadVar__2__tmp_copy_2;
#line 674 "goal_form.m"
                }
#line 674 "goal_form.m"
                continue;
#line 674 "goal_form.m"
              }
#line 674 "goal_form.m"
          }
#line 673 "goal_form.m"
        return hlds__goal_form__HeadVar__3_3;
#line 673 "goal_form.m"
      }
#line 673 "goal_form.m"
      break;
#line 673 "goal_form.m"
    }
#line 671 "goal_form.m"
}

#line 661 "goal_form.m"
static MR_Word MR_CALL 
hlds__goal_form__goal_list_can_throw_2_f_0(
#line 661 "goal_form.m"
  MR_Word hlds__goal_form__MaybeModuleInfo_1,
#line 661 "goal_form.m"
  MR_Word hlds__goal_form__HeadVar__2_2)
#line 661 "goal_form.m"
{
#line 663 "goal_form.m"
  while (MR_TRUE)
#line 663 "goal_form.m"
    {
#line 663 "goal_form.m"
      /* tailcall optimized into a loop */
#line 663 "goal_form.m"
      {
#line 663 "goal_form.m"
        MR_bool hlds__goal_form__succeeded;
#line 663 "goal_form.m"
        MR_Word hlds__goal_form__HeadVar__3_3;

#line 663 "goal_form.m"
        if ((hlds__goal_form__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 663 "goal_form.m"
          hlds__goal_form__HeadVar__3_3 = (MR_Integer) 0;
#line 663 "goal_form.m"
        else
#line 664 "goal_form.m"
          {
#line 664 "goal_form.m"
            MR_Word hlds__goal_form__Goal_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__HeadVar__2_2, (MR_Integer) 0)));
#line 664 "goal_form.m"
            MR_Word hlds__goal_form__Goals_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__HeadVar__2_2, (MR_Integer) 1)));
#line 665 "goal_form.m"
            MR_Word hlds__goal_form__GoalExpr_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Goal_6, (MR_Integer) 0)));
#line 665 "goal_form.m"
            MR_Word hlds__goal_form__GoalInfo_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Goal_6, (MR_Integer) 1)));
#line 665 "goal_form.m"
            MR_Word hlds__goal_form__Determinism_13;

#line 556 "goal_form.m"
            {
#line 556 "goal_form.m"
              hlds__goal_form__Determinism_13 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(hlds__goal_form__GoalInfo_12);
            }
#line 557 "goal_form.m"
            hlds__goal_form__succeeded = (hlds__goal_form__Determinism_13 == (MR_Integer) 6);
#line 559 "goal_form.m"
            if (hlds__goal_form__succeeded)
#line 558 "goal_form.m"
              hlds__goal_form__succeeded = MR_TRUE;
#line 559 "goal_form.m"
            else
#line 560 "goal_form.m"
              {
#line 560 "goal_form.m"
                MR_Word hlds__goal_form__V_15_15;

#line 560 "goal_form.m"
                {
#line 560 "goal_form.m"
                  hlds__goal_form__V_15_15 = hlds__goal_form__goal_expr_can_throw_2_f_0(hlds__goal_form__MaybeModuleInfo_1, hlds__goal_form__GoalExpr_11);
                }
#line 665 "goal_form.m"
                hlds__goal_form__succeeded = (hlds__goal_form__V_15_15 == (MR_Integer) 1);
#line 560 "goal_form.m"
              }
#line 664 "goal_form.m"
            if (hlds__goal_form__succeeded)
#line 664 "goal_form.m"
              hlds__goal_form__HeadVar__3_3 = (MR_Integer) 1;
#line 664 "goal_form.m"
            else
#line 664 "goal_form.m"
              {
#line 664 "goal_form.m"
                /* direct tailcall eliminated */
#line 664 "goal_form.m"
                {
#line 664 "goal_form.m"
                  MR_Word hlds__goal_form__HeadVar__2__tmp_copy_2 = hlds__goal_form__Goals_7;

#line 664 "goal_form.m"
                  hlds__goal_form__HeadVar__2_2 = hlds__goal_form__HeadVar__2__tmp_copy_2;
#line 664 "goal_form.m"
                }
#line 664 "goal_form.m"
                continue;
#line 664 "goal_form.m"
              }
#line 664 "goal_form.m"
          }
#line 663 "goal_form.m"
        return hlds__goal_form__HeadVar__3_3;
#line 663 "goal_form.m"
      }
#line 663 "goal_form.m"
      break;
#line 663 "goal_form.m"
    }
#line 661 "goal_form.m"
}

#line 563 "goal_form.m"
static MR_Word MR_CALL 
hlds__goal_form__goal_expr_can_throw_2_f_0(
#line 563 "goal_form.m"
  MR_Word hlds__goal_form__MaybeModuleInfo_4,
#line 563 "goal_form.m"
  MR_Word hlds__goal_form__GoalExpr_5)
#line 563 "goal_form.m"
{
#line 567 "goal_form.m"
  {
#line 567 "goal_form.m"
    MR_bool hlds__goal_form__succeeded;
#line 567 "goal_form.m"
    MR_Word hlds__goal_form__CanThrow_6;

#line 567 "goal_form.m"
    if (((MR_tag((MR_Word) hlds__goal_form__GoalExpr_5)) == (MR_mktag((MR_Integer) 0))))
#line 631 "goal_form.m"
      {
#line 631 "goal_form.m"
        MR_Word hlds__goal_form__SubGoal_64 = (MR_Word) MR_body(((MR_Word) hlds__goal_form__GoalExpr_5), (MR_Integer) 0);

#line 632 "goal_form.m"
        {
#line 632 "goal_form.m"
          return hlds__goal_form__CanThrow_6 = hlds__goal_form__goal_can_throw_func_2_f_0(hlds__goal_form__MaybeModuleInfo_4, hlds__goal_form__SubGoal_64);
        }
#line 631 "goal_form.m"
      }
#line 567 "goal_form.m"
    else
#line 567 "goal_form.m"
      if (((MR_tag((MR_Word) hlds__goal_form__GoalExpr_5)) == (MR_mktag((MR_Integer) 2))))
#line 582 "goal_form.m"
        {
#line 582 "goal_form.m"
          MR_Word hlds__goal_form__PredId_32 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__GoalExpr_5, (MR_Integer) 0)));
#line 582 "goal_form.m"
          MR_Integer hlds__goal_form__ProcId_33 = ((MR_Integer) (MR_hl_field(MR_mktag(2), hlds__goal_form__GoalExpr_5, (MR_Integer) 1)));
#line 582 "goal_form.m"
          MR_Word hlds__goal_form__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__GoalExpr_5, (MR_Integer) 2)));
#line 582 "goal_form.m"
          MR_Word hlds__goal_form__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__GoalExpr_5, (MR_Integer) 3)));
#line 582 "goal_form.m"
          MR_Word hlds__goal_form__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__GoalExpr_5, (MR_Integer) 4)));
#line 582 "goal_form.m"
          MR_Word hlds__goal_form__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__GoalExpr_5, (MR_Integer) 5)));
#line 584 "goal_form.m"
          MR_Word hlds__goal_form__TypeCtorInfo_90_90;
#line 584 "goal_form.m"
          MR_Word hlds__goal_form__TypeCtorInfo_91_91;
#line 584 "goal_form.m"
          MR_Word hlds__goal_form__ModuleInfo_38;
#line 584 "goal_form.m"
          MR_Word hlds__goal_form__ExceptionInfo_39;
#line 584 "goal_form.m"
          MR_Word hlds__goal_form__ProcExceptionInfo_40;
#line 584 "goal_form.m"
          MR_Word hlds__goal_form__V_87_87;
#line 584 "goal_form.m"
          MR_Word hlds__goal_form__V_88_88;
#line 586 "goal_form.m"
          MR_Box hlds__goal_form__conv0_ProcExceptionInfo_40;
#line 587 "goal_form.m"
          MR_Word hlds__goal_form__V_41_41;

#line 584 "goal_form.m"
          hlds__goal_form__succeeded = ((MR_tag((MR_Word) hlds__goal_form__MaybeModuleInfo_4)) == (MR_mktag((MR_Integer) 1)));
#line 584 "goal_form.m"
          if (hlds__goal_form__succeeded)
#line 584 "goal_form.m"
            {
#line 584 "goal_form.m"
              hlds__goal_form__ModuleInfo_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__MaybeModuleInfo_4, (MR_Integer) 0)));
#line 585 "goal_form.m"
              {
#line 585 "goal_form.m"
                hlds__hlds_module__module_info_get_exception_info_2_p_0(hlds__goal_form__ModuleInfo_38, &hlds__goal_form__ExceptionInfo_39);
              }
#line 3535 "hlds.goal_form.c"
              hlds__goal_form__TypeCtorInfo_90_90 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
#line 3537 "hlds.goal_form.c"
              hlds__goal_form__TypeCtorInfo_91_91 = (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_proc_exception_info_0;
#line 586 "goal_form.m"
              {
#line 586 "goal_form.m"
                hlds__goal_form__V_87_87 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 586 "goal_form.m"
                MR_hl_field(MR_mktag(0), hlds__goal_form__V_87_87, 0) = ((MR_Box) (hlds__goal_form__PredId_32));
#line 586 "goal_form.m"
                MR_hl_field(MR_mktag(0), hlds__goal_form__V_87_87, 1) = ((MR_Box) (hlds__goal_form__ProcId_33));
#line 586 "goal_form.m"
              }
#line 586 "goal_form.m"
              {
#line 586 "goal_form.m"
                hlds__goal_form__succeeded = mercury__map__search_3_p_0(hlds__goal_form__TypeCtorInfo_90_90, hlds__goal_form__TypeCtorInfo_91_91, hlds__goal_form__ExceptionInfo_39, ((MR_Box) (hlds__goal_form__V_87_87)), &hlds__goal_form__conv0_ProcExceptionInfo_40);
              }
#line 586 "goal_form.m"
              if (hlds__goal_form__succeeded)
#line 586 "goal_form.m"
                {
#line 586 "goal_form.m"
                  hlds__goal_form__ProcExceptionInfo_40 = ((MR_Word) hlds__goal_form__conv0_ProcExceptionInfo_40);
#line 586 "goal_form.m"
                  hlds__goal_form__succeeded = MR_TRUE;
#line 586 "goal_form.m"
                }
#line 584 "goal_form.m"
              if (hlds__goal_form__succeeded)
#line 584 "goal_form.m"
                {
#line 587 "goal_form.m"
                  hlds__goal_form__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__ProcExceptionInfo_40, (MR_Integer) 0)));
#line 587 "goal_form.m"
                  hlds__goal_form__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__ProcExceptionInfo_40, (MR_Integer) 1)));
#line 587 "goal_form.m"
                  hlds__goal_form__succeeded = (hlds__goal_form__V_88_88 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 584 "goal_form.m"
                }
#line 584 "goal_form.m"
            }
#line 590 "goal_form.m"
          if (hlds__goal_form__succeeded)
#line 589 "goal_form.m"
            hlds__goal_form__CanThrow_6 = (MR_Integer) 0;
#line 590 "goal_form.m"
          else
#line 591 "goal_form.m"
            hlds__goal_form__CanThrow_6 = (MR_Integer) 1;
#line 582 "goal_form.m"
        }
#line 567 "goal_form.m"
      else
#line 567 "goal_form.m"
        if (((MR_tag((MR_Word) hlds__goal_form__GoalExpr_5)) == (MR_mktag((MR_Integer) 1))))
#line 567 "goal_form.m"
          {
#line 567 "goal_form.m"
            MR_Word hlds__goal_form__Uni_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__GoalExpr_5, (MR_Integer) 3)));
#line 567 "goal_form.m"
            MR_Word hlds__goal_form__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__GoalExpr_5, (MR_Integer) 0)));
#line 567 "goal_form.m"
            MR_Word hlds__goal_form__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__GoalExpr_5, (MR_Integer) 1)));
#line 567 "goal_form.m"
            MR_Word hlds__goal_form__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__GoalExpr_5, (MR_Integer) 2)));
#line 567 "goal_form.m"
            MR_Word hlds__goal_form__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__GoalExpr_5, (MR_Integer) 4)));

#line 575 "goal_form.m"
            if (((((MR_tag((MR_Word) hlds__goal_form__Uni_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__Uni_10, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 579 "goal_form.m"
              hlds__goal_form__CanThrow_6 = (MR_Integer) 1;
#line 575 "goal_form.m"
            else
#line 574 "goal_form.m"
              hlds__goal_form__CanThrow_6 = (MR_Integer) 0;
#line 567 "goal_form.m"
          }
#line 567 "goal_form.m"
        else
#line 567 "goal_form.m"
          if (((((MR_tag((MR_Word) hlds__goal_form__GoalExpr_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_5, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 594 "goal_form.m"
            {
#line 594 "goal_form.m"
              MR_Word hlds__goal_form__Attributes_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_5, (MR_Integer) 1)));
#line 594 "goal_form.m"
              MR_Word hlds__goal_form__ExceptionStatus_49;
#line 594 "goal_form.m"
              MR_Word hlds__goal_form__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_5, (MR_Integer) 2)));
#line 594 "goal_form.m"
              MR_Integer hlds__goal_form__V_44_44 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_5, (MR_Integer) 3)));
#line 594 "goal_form.m"
              MR_Word hlds__goal_form__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_5, (MR_Integer) 4)));
#line 594 "goal_form.m"
              MR_Word hlds__goal_form__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_5, (MR_Integer) 5)));
#line 594 "goal_form.m"
              MR_Word hlds__goal_form__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_5, (MR_Integer) 6)));
#line 594 "goal_form.m"
              MR_Word hlds__goal_form__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_5, (MR_Integer) 7)));

#line 595 "goal_form.m"
              {
#line 595 "goal_form.m"
                hlds__goal_form__ExceptionStatus_49 = parse_tree__prog_data__get_may_throw_exception_1_f_0(hlds__goal_form__Attributes_42);
              }
#line 599 "goal_form.m"
              if ((hlds__goal_form__ExceptionStatus_49 == (MR_Integer) 1))
#line 600 "goal_form.m"
                {
#line 600 "goal_form.m"
                  MR_Word hlds__goal_form__V_86_86;

#line 601 "goal_form.m"
                  {
#line 601 "goal_form.m"
                    hlds__goal_form__V_86_86 = parse_tree__prog_data__get_may_call_mercury_1_f_0(hlds__goal_form__Attributes_42);
                  }
#line 601 "goal_form.m"
                  hlds__goal_form__succeeded = (hlds__goal_form__V_86_86 == (MR_Integer) 1);
#line 600 "goal_form.m"
                }
#line 599 "goal_form.m"
              else
#line 598 "goal_form.m"
                hlds__goal_form__succeeded = MR_TRUE;
#line 605 "goal_form.m"
              if (hlds__goal_form__succeeded)
#line 604 "goal_form.m"
                hlds__goal_form__CanThrow_6 = (MR_Integer) 0;
#line 605 "goal_form.m"
              else
#line 606 "goal_form.m"
                hlds__goal_form__CanThrow_6 = (MR_Integer) 1;
#line 594 "goal_form.m"
            }
#line 567 "goal_form.m"
          else
#line 567 "goal_form.m"
            if (((((MR_tag((MR_Word) hlds__goal_form__GoalExpr_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_5, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 616 "goal_form.m"
              {
#line 616 "goal_form.m"
                MR_Word hlds__goal_form__Goals_56 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_5, (MR_Integer) 2)));
#line 614 "goal_form.m"
                MR_Word hlds__goal_form___ConjType_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_5, (MR_Integer) 1)));

#line 617 "goal_form.m"
                {
#line 617 "goal_form.m"
                  return hlds__goal_form__CanThrow_6 = hlds__goal_form__goal_list_can_throw_2_f_0(hlds__goal_form__MaybeModuleInfo_4, hlds__goal_form__Goals_56);
                }
#line 616 "goal_form.m"
              }
#line 567 "goal_form.m"
            else
#line 567 "goal_form.m"
              if (((((MR_tag((MR_Word) hlds__goal_form__GoalExpr_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_5, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 616 "goal_form.m"
                {
#line 616 "goal_form.m"
                  MR_Word hlds__goal_form__Goals_92 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_5, (MR_Integer) 1)));

#line 617 "goal_form.m"
                  {
#line 617 "goal_form.m"
                    return hlds__goal_form__CanThrow_6 = hlds__goal_form__goal_list_can_throw_2_f_0(hlds__goal_form__MaybeModuleInfo_4, hlds__goal_form__Goals_92);
                  }
#line 616 "goal_form.m"
                }
#line 567 "goal_form.m"
              else
#line 567 "goal_form.m"
                if (((((MR_tag((MR_Word) hlds__goal_form__GoalExpr_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_5, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 612 "goal_form.m"
                  hlds__goal_form__CanThrow_6 = (MR_Integer) 1;
#line 567 "goal_form.m"
                else
#line 567 "goal_form.m"
                  if (((((MR_tag((MR_Word) hlds__goal_form__GoalExpr_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_5, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 622 "goal_form.m"
                    {
#line 622 "goal_form.m"
                      MR_Word hlds__goal_form__Cond_61 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_5, (MR_Integer) 2)));
#line 622 "goal_form.m"
                      MR_Word hlds__goal_form__Then_62 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_5, (MR_Integer) 3)));
#line 622 "goal_form.m"
                      MR_Word hlds__goal_form__Else_63 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_5, (MR_Integer) 4)));
#line 622 "goal_form.m"
                      MR_Word hlds__goal_form__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_5, (MR_Integer) 1)));
#line 623 "goal_form.m"
                      MR_Word hlds__goal_form__GoalExpr_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Cond_61, (MR_Integer) 0)));
#line 623 "goal_form.m"
                      MR_Word hlds__goal_form__GoalInfo_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Cond_61, (MR_Integer) 1)));
#line 623 "goal_form.m"
                      MR_Word hlds__goal_form__Determinism_97;

#line 556 "goal_form.m"
                      {
#line 556 "goal_form.m"
                        hlds__goal_form__Determinism_97 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(hlds__goal_form__GoalInfo_96);
                      }
#line 557 "goal_form.m"
                      hlds__goal_form__succeeded = (hlds__goal_form__Determinism_97 == (MR_Integer) 6);
#line 559 "goal_form.m"
                      if (hlds__goal_form__succeeded)
#line 558 "goal_form.m"
                        hlds__goal_form__succeeded = MR_TRUE;
#line 559 "goal_form.m"
                      else
#line 560 "goal_form.m"
                        {
#line 560 "goal_form.m"
                          MR_Word hlds__goal_form__V_99_99;

#line 560 "goal_form.m"
                          {
#line 560 "goal_form.m"
                            hlds__goal_form__V_99_99 = hlds__goal_form__goal_expr_can_throw_2_f_0(hlds__goal_form__MaybeModuleInfo_4, hlds__goal_form__GoalExpr_95);
                          }
#line 623 "goal_form.m"
                          hlds__goal_form__succeeded = (hlds__goal_form__V_99_99 == (MR_Integer) 1);
#line 560 "goal_form.m"
                        }
#line 625 "goal_form.m"
                      if (hlds__goal_form__succeeded)
#line 624 "goal_form.m"
                        hlds__goal_form__CanThrow_6 = (MR_Integer) 1;
#line 625 "goal_form.m"
                      else
#line 627 "goal_form.m"
                        {
#line 625 "goal_form.m"
                          MR_Word hlds__goal_form__V_85_85;

#line 625 "goal_form.m"
                          {
#line 625 "goal_form.m"
                            hlds__goal_form__V_85_85 = hlds__goal_form__goal_can_throw_func_2_f_0(hlds__goal_form__MaybeModuleInfo_4, hlds__goal_form__Then_62);
                          }
#line 625 "goal_form.m"
                          hlds__goal_form__succeeded = (hlds__goal_form__V_85_85 == (MR_Integer) 1);
#line 627 "goal_form.m"
                          if (hlds__goal_form__succeeded)
#line 626 "goal_form.m"
                            hlds__goal_form__CanThrow_6 = (MR_Integer) 1;
#line 627 "goal_form.m"
                          else
#line 628 "goal_form.m"
                            {
#line 628 "goal_form.m"
                              return hlds__goal_form__CanThrow_6 = hlds__goal_form__goal_can_throw_func_2_f_0(hlds__goal_form__MaybeModuleInfo_4, hlds__goal_form__Else_63);
                            }
#line 627 "goal_form.m"
                        }
#line 622 "goal_form.m"
                    }
#line 567 "goal_form.m"
                  else
#line 567 "goal_form.m"
                    if (((((MR_tag((MR_Word) hlds__goal_form__GoalExpr_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_5, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 634 "goal_form.m"
                      {
#line 634 "goal_form.m"
                        MR_Word hlds__goal_form__Reason_65 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_5, (MR_Integer) 1)));
#line 634 "goal_form.m"
                        MR_Word hlds__goal_form__SubGoal_89 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_5, (MR_Integer) 2)));
#line 636 "goal_form.m"
                        MR_Word hlds__goal_form__FGT_67;
#line 636 "goal_form.m"
                        MR_Word hlds__goal_form__V_66_66;

#line 636 "goal_form.m"
                        hlds__goal_form__succeeded = ((((MR_tag((MR_Word) hlds__goal_form__Reason_65)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__Reason_65, (MR_Integer) 0)))) == (MR_Integer) 4)));
#line 636 "goal_form.m"
                        if (hlds__goal_form__succeeded)
#line 636 "goal_form.m"
                          {
#line 636 "goal_form.m"
                            hlds__goal_form__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__Reason_65, (MR_Integer) 1)));
#line 636 "goal_form.m"
                            hlds__goal_form__FGT_67 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__Reason_65, (MR_Integer) 2)));
#line 638 "goal_form.m"
                            if ((hlds__goal_form__FGT_67 == (MR_Integer) 1))
#line 637 "goal_form.m"
                              hlds__goal_form__succeeded = MR_TRUE;
#line 638 "goal_form.m"
                            else
#line 638 "goal_form.m"
                              if ((hlds__goal_form__FGT_67 == (MR_Integer) 2))
#line 638 "goal_form.m"
                                hlds__goal_form__succeeded = MR_TRUE;
#line 638 "goal_form.m"
                              else
#line 638 "goal_form.m"
                                hlds__goal_form__succeeded = MR_FALSE;
#line 636 "goal_form.m"
                          }
#line 644 "goal_form.m"
                        if (hlds__goal_form__succeeded)
#line 643 "goal_form.m"
                          hlds__goal_form__CanThrow_6 = (MR_Integer) 0;
#line 644 "goal_form.m"
                        else
#line 645 "goal_form.m"
                          {
#line 645 "goal_form.m"
                            return hlds__goal_form__CanThrow_6 = hlds__goal_form__goal_can_throw_func_2_f_0(hlds__goal_form__MaybeModuleInfo_4, hlds__goal_form__SubGoal_89);
                          }
#line 634 "goal_form.m"
                      }
#line 567 "goal_form.m"
                    else
#line 567 "goal_form.m"
                      if (((((MR_tag((MR_Word) hlds__goal_form__GoalExpr_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_5, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 648 "goal_form.m"
                        {
#line 648 "goal_form.m"
                          MR_Word hlds__goal_form__ShortHand_68 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_5, (MR_Integer) 1)));

#line 652 "goal_form.m"
                          if (((MR_tag((MR_Word) hlds__goal_form__ShortHand_68)) == (MR_mktag((MR_Integer) 1))))
#line 651 "goal_form.m"
                            hlds__goal_form__CanThrow_6 = (MR_Integer) 1;
#line 652 "goal_form.m"
                          else
#line 652 "goal_form.m"
                            if (((MR_tag((MR_Word) hlds__goal_form__ShortHand_68)) == (MR_mktag((MR_Integer) 0))))
#line 656 "goal_form.m"
                              {
#line 657 "goal_form.m"
                                {
#line 657 "goal_form.m"
                                  mercury__require__unexpected_3_p_0((MR_String) "hlds.goal_form", (MR_String) "function \140hlds.goal_form.goal_expr_can_throw\'/2", (MR_String) "bi_implication");
                                }
#line 656 "goal_form.m"
                              }
#line 652 "goal_form.m"
                            else
#line 654 "goal_form.m"
                              hlds__goal_form__CanThrow_6 = (MR_Integer) 1;
#line 648 "goal_form.m"
                        }
#line 567 "goal_form.m"
                      else
#line 619 "goal_form.m"
                        {
#line 619 "goal_form.m"
                          MR_Word hlds__goal_form__Cases_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_5, (MR_Integer) 3)));
#line 619 "goal_form.m"
                          MR_Word hlds__goal_form___Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_5, (MR_Integer) 1)));
#line 619 "goal_form.m"
                          MR_Word hlds__goal_form___CanFail_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_5, (MR_Integer) 2)));

#line 620 "goal_form.m"
                          {
#line 620 "goal_form.m"
                            return hlds__goal_form__CanThrow_6 = hlds__goal_form__case_list_can_throw_2_f_0(hlds__goal_form__MaybeModuleInfo_4, hlds__goal_form__Cases_59);
                          }
#line 619 "goal_form.m"
                        }
#line 567 "goal_form.m"
    return hlds__goal_form__CanThrow_6;
#line 567 "goal_form.m"
  }
#line 563 "goal_form.m"
}

#line 552 "goal_form.m"
static MR_Word MR_CALL 
hlds__goal_form__goal_can_throw_func_2_f_0(
#line 552 "goal_form.m"
  MR_Word hlds__goal_form__MaybeModuleInfo_4,
#line 552 "goal_form.m"
  MR_Word hlds__goal_form__HeadVar__2_2)
#line 552 "goal_form.m"
{
#line 555 "goal_form.m"
  {
#line 555 "goal_form.m"
    MR_bool hlds__goal_form__succeeded;
#line 555 "goal_form.m"
    MR_Word hlds__goal_form__CanThrow_7;
#line 555 "goal_form.m"
    MR_Word hlds__goal_form__GoalExpr_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__HeadVar__2_2, (MR_Integer) 0)));
#line 555 "goal_form.m"
    MR_Word hlds__goal_form__GoalInfo_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__HeadVar__2_2, (MR_Integer) 1)));
#line 555 "goal_form.m"
    MR_Word hlds__goal_form__Determinism_8;

#line 556 "goal_form.m"
    {
#line 556 "goal_form.m"
      hlds__goal_form__Determinism_8 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(hlds__goal_form__GoalInfo_6);
    }
#line 557 "goal_form.m"
    hlds__goal_form__succeeded = (hlds__goal_form__Determinism_8 == (MR_Integer) 6);
#line 559 "goal_form.m"
    if (hlds__goal_form__succeeded)
#line 558 "goal_form.m"
      hlds__goal_form__CanThrow_7 = (MR_Integer) 1;
#line 559 "goal_form.m"
    else
#line 560 "goal_form.m"
      {
#line 560 "goal_form.m"
        return hlds__goal_form__CanThrow_7 = hlds__goal_form__goal_expr_can_throw_2_f_0(hlds__goal_form__MaybeModuleInfo_4, hlds__goal_form__GoalExpr_5);
      }
#line 555 "goal_form.m"
    return hlds__goal_form__CanThrow_7;
#line 555 "goal_form.m"
  }
#line 552 "goal_form.m"
}

#line 540 "goal_form.m"
static MR_Word MR_CALL 
hlds__goal_form__case_list_can_loop_2_f_0(
#line 540 "goal_form.m"
  MR_Word hlds__goal_form__MaybeModuleInfo_1,
#line 540 "goal_form.m"
  MR_Word hlds__goal_form__HeadVar__2_2)
#line 540 "goal_form.m"
{
#line 542 "goal_form.m"
  while (MR_TRUE)
#line 542 "goal_form.m"
    {
#line 542 "goal_form.m"
      /* tailcall optimized into a loop */
#line 542 "goal_form.m"
      {
#line 542 "goal_form.m"
        MR_bool hlds__goal_form__succeeded;
#line 542 "goal_form.m"
        MR_Word hlds__goal_form__HeadVar__3_3;

#line 542 "goal_form.m"
        if ((hlds__goal_form__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 542 "goal_form.m"
          hlds__goal_form__HeadVar__3_3 = (MR_Integer) 0;
#line 542 "goal_form.m"
        else
#line 543 "goal_form.m"
          {
#line 543 "goal_form.m"
            MR_Word hlds__goal_form__Goal_8;
#line 543 "goal_form.m"
            MR_Word hlds__goal_form__Cases_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__HeadVar__2_2, (MR_Integer) 1)));
#line 543 "goal_form.m"
            MR_Word hlds__goal_form__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__HeadVar__2_2, (MR_Integer) 0)));
#line 543 "goal_form.m"
            MR_Word hlds__goal_form__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__V_10_10, (MR_Integer) 0)));
#line 543 "goal_form.m"
            MR_Word hlds__goal_form__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__V_10_10, (MR_Integer) 1)));
#line 544 "goal_form.m"
            MR_Word hlds__goal_form__V_11_11;

#line 543 "goal_form.m"
            hlds__goal_form__Goal_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__V_10_10, (MR_Integer) 2)));
#line 544 "goal_form.m"
            {
#line 544 "goal_form.m"
              hlds__goal_form__V_11_11 = hlds__goal_form__goal_can_loop_func_2_f_0(hlds__goal_form__MaybeModuleInfo_1, hlds__goal_form__Goal_8);
            }
#line 544 "goal_form.m"
            hlds__goal_form__succeeded = (hlds__goal_form__V_11_11 == (MR_Integer) 1);
#line 543 "goal_form.m"
            if (hlds__goal_form__succeeded)
#line 543 "goal_form.m"
              hlds__goal_form__HeadVar__3_3 = (MR_Integer) 1;
#line 543 "goal_form.m"
            else
#line 543 "goal_form.m"
              {
#line 543 "goal_form.m"
                /* direct tailcall eliminated */
#line 543 "goal_form.m"
                {
#line 543 "goal_form.m"
                  MR_Word hlds__goal_form__HeadVar__2__tmp_copy_2 = hlds__goal_form__Cases_9;

#line 543 "goal_form.m"
                  hlds__goal_form__HeadVar__2_2 = hlds__goal_form__HeadVar__2__tmp_copy_2;
#line 543 "goal_form.m"
                }
#line 543 "goal_form.m"
                continue;
#line 543 "goal_form.m"
              }
#line 543 "goal_form.m"
          }
#line 542 "goal_form.m"
        return hlds__goal_form__HeadVar__3_3;
#line 542 "goal_form.m"
      }
#line 542 "goal_form.m"
      break;
#line 542 "goal_form.m"
    }
#line 540 "goal_form.m"
}

#line 530 "goal_form.m"
static MR_Word MR_CALL 
hlds__goal_form__goal_list_can_loop_2_f_0(
#line 530 "goal_form.m"
  MR_Word hlds__goal_form__MaybeModuleInfo_1,
#line 530 "goal_form.m"
  MR_Word hlds__goal_form__HeadVar__2_2)
#line 530 "goal_form.m"
{
#line 532 "goal_form.m"
  while (MR_TRUE)
#line 532 "goal_form.m"
    {
#line 532 "goal_form.m"
      /* tailcall optimized into a loop */
#line 532 "goal_form.m"
      {
#line 532 "goal_form.m"
        MR_bool hlds__goal_form__succeeded;
#line 532 "goal_form.m"
        MR_Word hlds__goal_form__HeadVar__3_3;

#line 532 "goal_form.m"
        if ((hlds__goal_form__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 532 "goal_form.m"
          hlds__goal_form__HeadVar__3_3 = (MR_Integer) 0;
#line 532 "goal_form.m"
        else
#line 533 "goal_form.m"
          {
#line 533 "goal_form.m"
            MR_Word hlds__goal_form__Goal_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__HeadVar__2_2, (MR_Integer) 0)));
#line 533 "goal_form.m"
            MR_Word hlds__goal_form__Goals_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__HeadVar__2_2, (MR_Integer) 1)));
#line 534 "goal_form.m"
            MR_Word hlds__goal_form__V_8_8;

#line 534 "goal_form.m"
            {
#line 534 "goal_form.m"
              hlds__goal_form__V_8_8 = hlds__goal_form__goal_can_loop_func_2_f_0(hlds__goal_form__MaybeModuleInfo_1, hlds__goal_form__Goal_6);
            }
#line 534 "goal_form.m"
            hlds__goal_form__succeeded = (hlds__goal_form__V_8_8 == (MR_Integer) 1);
#line 533 "goal_form.m"
            if (hlds__goal_form__succeeded)
#line 533 "goal_form.m"
              hlds__goal_form__HeadVar__3_3 = (MR_Integer) 1;
#line 533 "goal_form.m"
            else
#line 533 "goal_form.m"
              {
#line 533 "goal_form.m"
                /* direct tailcall eliminated */
#line 533 "goal_form.m"
                {
#line 533 "goal_form.m"
                  MR_Word hlds__goal_form__HeadVar__2__tmp_copy_2 = hlds__goal_form__Goals_7;

#line 533 "goal_form.m"
                  hlds__goal_form__HeadVar__2_2 = hlds__goal_form__HeadVar__2__tmp_copy_2;
#line 533 "goal_form.m"
                }
#line 533 "goal_form.m"
                continue;
#line 533 "goal_form.m"
              }
#line 533 "goal_form.m"
          }
#line 532 "goal_form.m"
        return hlds__goal_form__HeadVar__3_3;
#line 532 "goal_form.m"
      }
#line 532 "goal_form.m"
      break;
#line 532 "goal_form.m"
    }
#line 530 "goal_form.m"
}

#line 416 "goal_form.m"
static MR_Word MR_CALL 
hlds__goal_form__goal_can_loop_func_2_f_0(
#line 416 "goal_form.m"
  MR_Word hlds__goal_form__MaybeModuleInfo_4,
#line 416 "goal_form.m"
  MR_Word hlds__goal_form__Goal_5)
#line 416 "goal_form.m"
{
#line 418 "goal_form.m"
  while (MR_TRUE)
#line 418 "goal_form.m"
    {
#line 418 "goal_form.m"
      /* tailcall optimized into a loop */
#line 418 "goal_form.m"
      {
#line 418 "goal_form.m"
        MR_bool hlds__goal_form__succeeded;
#line 418 "goal_form.m"
        MR_Word hlds__goal_form__CanLoop_6;
#line 418 "goal_form.m"
        MR_Word hlds__goal_form__GoalExpr_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Goal_5, (MR_Integer) 0)));
#line 419 "goal_form.m"
        MR_Word hlds__goal_form__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Goal_5, (MR_Integer) 1)));

#line 435 "goal_form.m"
        if (((MR_tag((MR_Word) hlds__goal_form__GoalExpr_7)) == (MR_mktag((MR_Integer) 0))))
#line 498 "goal_form.m"
          {
#line 498 "goal_form.m"
            MR_Word hlds__goal_form__SubGoal_69 = (MR_Word) MR_body(((MR_Word) hlds__goal_form__GoalExpr_7), (MR_Integer) 0);

#line 499 "goal_form.m"
            /* direct tailcall eliminated */
#line 499 "goal_form.m"
            {
#line 499 "goal_form.m"
              MR_Word hlds__goal_form__Goal__tmp_copy_5 = hlds__goal_form__SubGoal_69;

#line 499 "goal_form.m"
              hlds__goal_form__Goal_5 = hlds__goal_form__Goal__tmp_copy_5;
#line 499 "goal_form.m"
            }
#line 499 "goal_form.m"
            continue;
#line 498 "goal_form.m"
          }
#line 435 "goal_form.m"
        else
#line 435 "goal_form.m"
          if (((MR_tag((MR_Word) hlds__goal_form__GoalExpr_7)) == (MR_mktag((MR_Integer) 2))))
#line 436 "goal_form.m"
            {
#line 436 "goal_form.m"
              MR_Word hlds__goal_form__PredId_34 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__GoalExpr_7, (MR_Integer) 0)));
#line 436 "goal_form.m"
              MR_Integer hlds__goal_form__ProcId_35 = ((MR_Integer) (MR_hl_field(MR_mktag(2), hlds__goal_form__GoalExpr_7, (MR_Integer) 1)));
#line 436 "goal_form.m"
              MR_Word hlds__goal_form__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__GoalExpr_7, (MR_Integer) 2)));
#line 436 "goal_form.m"
              MR_Word hlds__goal_form__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__GoalExpr_7, (MR_Integer) 3)));
#line 436 "goal_form.m"
              MR_Word hlds__goal_form__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__GoalExpr_7, (MR_Integer) 4)));
#line 436 "goal_form.m"
              MR_Word hlds__goal_form__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__GoalExpr_7, (MR_Integer) 5)));
#line 438 "goal_form.m"
              MR_Word hlds__goal_form__ModuleInfo_40;
#line 438 "goal_form.m"
              MR_Word hlds__goal_form__ProcInfo_42;
#line 439 "goal_form.m"
              MR_Word hlds__goal_form__V_41_41;

#line 438 "goal_form.m"
              hlds__goal_form__succeeded = ((MR_tag((MR_Word) hlds__goal_form__MaybeModuleInfo_4)) == (MR_mktag((MR_Integer) 1)));
#line 438 "goal_form.m"
              if (hlds__goal_form__succeeded)
#line 438 "goal_form.m"
                {
#line 438 "goal_form.m"
                  hlds__goal_form__ModuleInfo_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__MaybeModuleInfo_4, (MR_Integer) 0)));
#line 439 "goal_form.m"
                  {
#line 439 "goal_form.m"
                    hlds__hlds_module__module_info_pred_proc_info_5_p_0(hlds__goal_form__ModuleInfo_40, hlds__goal_form__PredId_34, hlds__goal_form__ProcId_35, &hlds__goal_form__V_41_41, &hlds__goal_form__ProcInfo_42);
                  }
#line 442 "goal_form.m"
                  {
#line 442 "goal_form.m"
                    MR_Word hlds__goal_form__MaybeTermInfo_43;
#line 442 "goal_form.m"
                    MR_Word hlds__goal_form__V_97_97;

#line 442 "goal_form.m"
                    {
#line 442 "goal_form.m"
                      hlds__hlds_pred__proc_info_get_maybe_termination_info_2_p_0(hlds__goal_form__ProcInfo_42, &hlds__goal_form__MaybeTermInfo_43);
                    }
#line 443 "goal_form.m"
                    hlds__goal_form__succeeded = ((MR_tag((MR_Word) hlds__goal_form__MaybeTermInfo_43)) == (MR_mktag((MR_Integer) 1)));
#line 443 "goal_form.m"
                    if (hlds__goal_form__succeeded)
#line 443 "goal_form.m"
                      {
#line 443 "goal_form.m"
                        hlds__goal_form__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__MaybeTermInfo_43, (MR_Integer) 0)));
#line 443 "goal_form.m"
                        hlds__goal_form__succeeded = ((MR_tag((MR_Word) hlds__goal_form__V_97_97)) == (MR_mktag((MR_Integer) 0)));
#line 443 "goal_form.m"
                      }
#line 442 "goal_form.m"
                  }
#line 444 "goal_form.m"
                  if (!(hlds__goal_form__succeeded))
#line 445 "goal_form.m"
                    {
#line 445 "goal_form.m"
                      MR_Word hlds__goal_form__Term2Info_45;
#line 445 "goal_form.m"
                      MR_Word hlds__goal_form__V_95_95;
#line 445 "goal_form.m"
                      MR_Word hlds__goal_form__V_96_96;
#line 446 "goal_form.m"
                      MR_Word hlds__goal_form__V_46_46;

#line 445 "goal_form.m"
                      {
#line 445 "goal_form.m"
                        hlds__hlds_pred__proc_info_get_termination2_info_2_p_0(hlds__goal_form__ProcInfo_42, &hlds__goal_form__Term2Info_45);
                      }
#line 446 "goal_form.m"
                      {
#line 446 "goal_form.m"
                        hlds__goal_form__V_95_95 = transform_hlds__term_constr_main__term_status_1_f_0(hlds__goal_form__Term2Info_45);
                      }
#line 446 "goal_form.m"
                      hlds__goal_form__succeeded = ((MR_tag((MR_Word) hlds__goal_form__V_95_95)) == (MR_mktag((MR_Integer) 1)));
#line 446 "goal_form.m"
                      if (hlds__goal_form__succeeded)
#line 446 "goal_form.m"
                        {
#line 446 "goal_form.m"
                          hlds__goal_form__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__V_95_95, (MR_Integer) 0)));
#line 446 "goal_form.m"
                          hlds__goal_form__succeeded = ((MR_tag((MR_Word) hlds__goal_form__V_96_96)) == (MR_mktag((MR_Integer) 0)));
#line 446 "goal_form.m"
                          if (hlds__goal_form__succeeded)
#line 446 "goal_form.m"
                            hlds__goal_form__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__V_96_96, (MR_Integer) 0)));
#line 446 "goal_form.m"
                        }
#line 445 "goal_form.m"
                    }
#line 438 "goal_form.m"
                }
#line 450 "goal_form.m"
              if (hlds__goal_form__succeeded)
#line 449 "goal_form.m"
                hlds__goal_form__CanLoop_6 = (MR_Integer) 0;
#line 450 "goal_form.m"
              else
#line 451 "goal_form.m"
                hlds__goal_form__CanLoop_6 = (MR_Integer) 1;
#line 436 "goal_form.m"
            }
#line 435 "goal_form.m"
          else
#line 435 "goal_form.m"
            if (((MR_tag((MR_Word) hlds__goal_form__GoalExpr_7)) == (MR_mktag((MR_Integer) 1))))
#line 421 "goal_form.m"
              {
#line 421 "goal_form.m"
                MR_Word hlds__goal_form__Uni_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__GoalExpr_7, (MR_Integer) 3)));
#line 421 "goal_form.m"
                MR_Word hlds__goal_form__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__GoalExpr_7, (MR_Integer) 0)));
#line 421 "goal_form.m"
                MR_Word hlds__goal_form__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__GoalExpr_7, (MR_Integer) 1)));
#line 421 "goal_form.m"
                MR_Word hlds__goal_form__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__GoalExpr_7, (MR_Integer) 2)));
#line 421 "goal_form.m"
                MR_Word hlds__goal_form__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__GoalExpr_7, (MR_Integer) 4)));

#line 429 "goal_form.m"
                if (((((MR_tag((MR_Word) hlds__goal_form__Uni_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__Uni_12, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 433 "goal_form.m"
                  hlds__goal_form__CanLoop_6 = (MR_Integer) 1;
#line 429 "goal_form.m"
                else
#line 427 "goal_form.m"
                  hlds__goal_form__CanLoop_6 = (MR_Integer) 0;
#line 421 "goal_form.m"
              }
#line 435 "goal_form.m"
            else
#line 435 "goal_form.m"
              if (((((MR_tag((MR_Word) hlds__goal_form__GoalExpr_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_7, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 459 "goal_form.m"
                {
#line 459 "goal_form.m"
                  MR_Word hlds__goal_form__Attributes_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_7, (MR_Integer) 1)));
#line 459 "goal_form.m"
                  MR_Word hlds__goal_form__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_7, (MR_Integer) 2)));
#line 459 "goal_form.m"
                  MR_Integer hlds__goal_form__V_54_54 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_7, (MR_Integer) 3)));
#line 459 "goal_form.m"
                  MR_Word hlds__goal_form__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_7, (MR_Integer) 4)));
#line 459 "goal_form.m"
                  MR_Word hlds__goal_form__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_7, (MR_Integer) 5)));
#line 459 "goal_form.m"
                  MR_Word hlds__goal_form__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_7, (MR_Integer) 6)));
#line 459 "goal_form.m"
                  MR_Word hlds__goal_form__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_7, (MR_Integer) 7)));
#line 461 "goal_form.m"
                  MR_Word hlds__goal_form__Terminates_59;

#line 461 "goal_form.m"
                  {
#line 461 "goal_form.m"
                    hlds__goal_form__Terminates_59 = parse_tree__prog_data__get_terminates_1_f_0(hlds__goal_form__Attributes_52);
                  }
#line 464 "goal_form.m"
                  if ((hlds__goal_form__Terminates_59 == (MR_Integer) 2))
#line 465 "goal_form.m"
                    {
#line 465 "goal_form.m"
                      MR_Word hlds__goal_form__V_94_94;

#line 466 "goal_form.m"
                      {
#line 466 "goal_form.m"
                        hlds__goal_form__V_94_94 = parse_tree__prog_data__get_may_call_mercury_1_f_0(hlds__goal_form__Attributes_52);
                      }
#line 466 "goal_form.m"
                      hlds__goal_form__succeeded = (hlds__goal_form__V_94_94 == (MR_Integer) 1);
#line 465 "goal_form.m"
                    }
#line 464 "goal_form.m"
                  else
#line 464 "goal_form.m"
                    if ((hlds__goal_form__Terminates_59 == (MR_Integer) 0))
#line 463 "goal_form.m"
                      hlds__goal_form__succeeded = MR_TRUE;
#line 464 "goal_form.m"
                    else
#line 464 "goal_form.m"
                      hlds__goal_form__succeeded = MR_FALSE;
#line 470 "goal_form.m"
                  if (hlds__goal_form__succeeded)
#line 469 "goal_form.m"
                    hlds__goal_form__CanLoop_6 = (MR_Integer) 0;
#line 470 "goal_form.m"
                  else
#line 471 "goal_form.m"
                    hlds__goal_form__CanLoop_6 = (MR_Integer) 1;
#line 459 "goal_form.m"
                }
#line 435 "goal_form.m"
              else
#line 435 "goal_form.m"
                if (((((MR_tag((MR_Word) hlds__goal_form__GoalExpr_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_7, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 435 "goal_form.m"
                  {
#line 435 "goal_form.m"
                    MR_Word hlds__goal_form__V_103_103 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_7, (MR_Integer) 2)));
#line 435 "goal_form.m"
                    MR_Word hlds__goal_form__V_104_104 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_7, (MR_Integer) 1)));

#line 435 "goal_form.m"
                    if ((hlds__goal_form__V_104_104 == (MR_Integer) 1))
#line 481 "goal_form.m"
                      hlds__goal_form__CanLoop_6 = (MR_Integer) 1;
#line 435 "goal_form.m"
                    else
#line 475 "goal_form.m"
                      {
#line 475 "goal_form.m"
                        return hlds__goal_form__CanLoop_6 = hlds__goal_form__goal_list_can_loop_2_f_0(hlds__goal_form__MaybeModuleInfo_4, hlds__goal_form__V_103_103);
                      }
#line 435 "goal_form.m"
                  }
#line 435 "goal_form.m"
                else
#line 435 "goal_form.m"
                  if (((((MR_tag((MR_Word) hlds__goal_form__GoalExpr_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_7, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 483 "goal_form.m"
                    {
#line 483 "goal_form.m"
                      MR_Word hlds__goal_form__Goals_98 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_7, (MR_Integer) 1)));

#line 484 "goal_form.m"
                      {
#line 484 "goal_form.m"
                        return hlds__goal_form__CanLoop_6 = hlds__goal_form__goal_list_can_loop_2_f_0(hlds__goal_form__MaybeModuleInfo_4, hlds__goal_form__Goals_98);
                      }
#line 483 "goal_form.m"
                    }
#line 435 "goal_form.m"
                  else
#line 435 "goal_form.m"
                    if (((((MR_tag((MR_Word) hlds__goal_form__GoalExpr_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_7, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 457 "goal_form.m"
                      hlds__goal_form__CanLoop_6 = (MR_Integer) 1;
#line 435 "goal_form.m"
                    else
#line 435 "goal_form.m"
                      if (((((MR_tag((MR_Word) hlds__goal_form__GoalExpr_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_7, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 489 "goal_form.m"
                        {
#line 489 "goal_form.m"
                          MR_Word hlds__goal_form__Cond_66 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_7, (MR_Integer) 2)));
#line 489 "goal_form.m"
                          MR_Word hlds__goal_form__Then_67 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_7, (MR_Integer) 3)));
#line 489 "goal_form.m"
                          MR_Word hlds__goal_form__Else_68 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_7, (MR_Integer) 4)));
#line 489 "goal_form.m"
                          MR_Word hlds__goal_form___Vars_65 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_7, (MR_Integer) 1)));
#line 490 "goal_form.m"
                          MR_Word hlds__goal_form__V_90_90;

#line 490 "goal_form.m"
                          {
#line 490 "goal_form.m"
                            hlds__goal_form__V_90_90 = hlds__goal_form__goal_can_loop_func_2_f_0(hlds__goal_form__MaybeModuleInfo_4, hlds__goal_form__Cond_66);
                          }
#line 490 "goal_form.m"
                          hlds__goal_form__succeeded = (hlds__goal_form__V_90_90 == (MR_Integer) 1);
#line 492 "goal_form.m"
                          if (hlds__goal_form__succeeded)
#line 491 "goal_form.m"
                            hlds__goal_form__CanLoop_6 = (MR_Integer) 1;
#line 492 "goal_form.m"
                          else
#line 494 "goal_form.m"
                            {
#line 492 "goal_form.m"
                              MR_Word hlds__goal_form__V_91_91;

#line 492 "goal_form.m"
                              {
#line 492 "goal_form.m"
                                hlds__goal_form__V_91_91 = hlds__goal_form__goal_can_loop_func_2_f_0(hlds__goal_form__MaybeModuleInfo_4, hlds__goal_form__Then_67);
                              }
#line 492 "goal_form.m"
                              hlds__goal_form__succeeded = (hlds__goal_form__V_91_91 == (MR_Integer) 1);
#line 494 "goal_form.m"
                              if (hlds__goal_form__succeeded)
#line 493 "goal_form.m"
                                hlds__goal_form__CanLoop_6 = (MR_Integer) 1;
#line 494 "goal_form.m"
                              else
#line 495 "goal_form.m"
                                {
#line 495 "goal_form.m"
                                  /* direct tailcall eliminated */
#line 495 "goal_form.m"
                                  {
#line 495 "goal_form.m"
                                    MR_Word hlds__goal_form__Goal__tmp_copy_5 = hlds__goal_form__Else_68;

#line 495 "goal_form.m"
                                    hlds__goal_form__Goal_5 = hlds__goal_form__Goal__tmp_copy_5;
#line 495 "goal_form.m"
                                  }
#line 495 "goal_form.m"
                                  continue;
#line 495 "goal_form.m"
                                }
#line 494 "goal_form.m"
                            }
#line 489 "goal_form.m"
                        }
#line 435 "goal_form.m"
                      else
#line 435 "goal_form.m"
                        if (((((MR_tag((MR_Word) hlds__goal_form__GoalExpr_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_7, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 501 "goal_form.m"
                          {
#line 501 "goal_form.m"
                            MR_Word hlds__goal_form__Reason_70 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_7, (MR_Integer) 1)));
#line 501 "goal_form.m"
                            MR_Word hlds__goal_form__SubGoal_99 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_7, (MR_Integer) 2)));
#line 503 "goal_form.m"
                            MR_Word hlds__goal_form__FGT_72;
#line 503 "goal_form.m"
                            MR_Word hlds__goal_form__V_71_71;

#line 503 "goal_form.m"
                            hlds__goal_form__succeeded = ((((MR_tag((MR_Word) hlds__goal_form__Reason_70)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__Reason_70, (MR_Integer) 0)))) == (MR_Integer) 4)));
#line 503 "goal_form.m"
                            if (hlds__goal_form__succeeded)
#line 503 "goal_form.m"
                              {
#line 503 "goal_form.m"
                                hlds__goal_form__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__Reason_70, (MR_Integer) 1)));
#line 503 "goal_form.m"
                                hlds__goal_form__FGT_72 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__Reason_70, (MR_Integer) 2)));
#line 505 "goal_form.m"
                                if ((hlds__goal_form__FGT_72 == (MR_Integer) 1))
#line 504 "goal_form.m"
                                  hlds__goal_form__succeeded = MR_TRUE;
#line 505 "goal_form.m"
                                else
#line 505 "goal_form.m"
                                  if ((hlds__goal_form__FGT_72 == (MR_Integer) 2))
#line 505 "goal_form.m"
                                    hlds__goal_form__succeeded = MR_TRUE;
#line 505 "goal_form.m"
                                  else
#line 505 "goal_form.m"
                                    hlds__goal_form__succeeded = MR_FALSE;
#line 503 "goal_form.m"
                              }
#line 511 "goal_form.m"
                            if (hlds__goal_form__succeeded)
#line 510 "goal_form.m"
                              hlds__goal_form__CanLoop_6 = (MR_Integer) 0;
#line 511 "goal_form.m"
                            else
#line 512 "goal_form.m"
                              {
#line 512 "goal_form.m"
                                /* direct tailcall eliminated */
#line 512 "goal_form.m"
                                {
#line 512 "goal_form.m"
                                  MR_Word hlds__goal_form__Goal__tmp_copy_5 = hlds__goal_form__SubGoal_99;

#line 512 "goal_form.m"
                                  hlds__goal_form__Goal_5 = hlds__goal_form__Goal__tmp_copy_5;
#line 512 "goal_form.m"
                                }
#line 512 "goal_form.m"
                                continue;
#line 512 "goal_form.m"
                              }
#line 501 "goal_form.m"
                          }
#line 435 "goal_form.m"
                        else
#line 435 "goal_form.m"
                          if (((((MR_tag((MR_Word) hlds__goal_form__GoalExpr_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_7, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 515 "goal_form.m"
                            {
#line 515 "goal_form.m"
                              MR_Word hlds__goal_form__ShortHand_73 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_7, (MR_Integer) 1)));

#line 521 "goal_form.m"
                              if (((MR_tag((MR_Word) hlds__goal_form__ShortHand_73)) == (MR_mktag((MR_Integer) 1))))
#line 517 "goal_form.m"
                                {
#line 517 "goal_form.m"
                                  MR_Word hlds__goal_form__MainGoal_78 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__ShortHand_73, (MR_Integer) 4)));
#line 517 "goal_form.m"
                                  MR_Word hlds__goal_form__OrElseGoals_79 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__ShortHand_73, (MR_Integer) 5)));
#line 517 "goal_form.m"
                                  MR_Word hlds__goal_form__MainGoalCanLoop_81;
#line 517 "goal_form.m"
                                  MR_Word hlds__goal_form__OrElseCanLoop_82;
#line 517 "goal_form.m"
                                  MR_Word hlds__goal_form__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__ShortHand_73, (MR_Integer) 0)));
#line 517 "goal_form.m"
                                  MR_Word hlds__goal_form__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__ShortHand_73, (MR_Integer) 1)));
#line 517 "goal_form.m"
                                  MR_Word hlds__goal_form__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__ShortHand_73, (MR_Integer) 2)));
#line 517 "goal_form.m"
                                  MR_Word hlds__goal_form__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__ShortHand_73, (MR_Integer) 3)));
#line 517 "goal_form.m"
                                  MR_Word hlds__goal_form__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__ShortHand_73, (MR_Integer) 6)));

#line 518 "goal_form.m"
                                  {
#line 518 "goal_form.m"
                                    hlds__goal_form__MainGoalCanLoop_81 = hlds__goal_form__goal_can_loop_func_2_f_0(hlds__goal_form__MaybeModuleInfo_4, hlds__goal_form__MainGoal_78);
                                  }
#line 519 "goal_form.m"
                                  {
#line 519 "goal_form.m"
                                    hlds__goal_form__OrElseCanLoop_82 = hlds__goal_form__goal_list_can_loop_2_f_0(hlds__goal_form__MaybeModuleInfo_4, hlds__goal_form__OrElseGoals_79);
                                  }
#line 520 "goal_form.m"
                                  {
#line 520 "goal_form.m"
                                    return hlds__goal_form__CanLoop_6 = mercury__bool__or_2_f_0(hlds__goal_form__MainGoalCanLoop_81, hlds__goal_form__OrElseCanLoop_82);
                                  }
#line 517 "goal_form.m"
                                }
#line 521 "goal_form.m"
                              else
#line 521 "goal_form.m"
                                if (((MR_tag((MR_Word) hlds__goal_form__ShortHand_73)) == (MR_mktag((MR_Integer) 0))))
#line 525 "goal_form.m"
                                  {
#line 526 "goal_form.m"
                                    {
#line 526 "goal_form.m"
                                      mercury__require__unexpected_3_p_0((MR_String) "hlds.goal_form", (MR_String) "function \140hlds.goal_form.goal_can_loop_func\'/2", (MR_String) "bi_implication");
                                    }
#line 525 "goal_form.m"
                                  }
#line 521 "goal_form.m"
                                else
#line 522 "goal_form.m"
                                  {
#line 522 "goal_form.m"
                                    MR_Word hlds__goal_form__SubGoal_100 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__ShortHand_73, (MR_Integer) 2)));
#line 522 "goal_form.m"
                                    MR_Word hlds__goal_form__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__ShortHand_73, (MR_Integer) 0)));
#line 522 "goal_form.m"
                                    MR_Word hlds__goal_form__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__ShortHand_73, (MR_Integer) 1)));

#line 523 "goal_form.m"
                                    /* direct tailcall eliminated */
#line 523 "goal_form.m"
                                    {
#line 523 "goal_form.m"
                                      MR_Word hlds__goal_form__Goal__tmp_copy_5 = hlds__goal_form__SubGoal_100;

#line 523 "goal_form.m"
                                      hlds__goal_form__Goal_5 = hlds__goal_form__Goal__tmp_copy_5;
#line 523 "goal_form.m"
                                    }
#line 523 "goal_form.m"
                                    continue;
#line 522 "goal_form.m"
                                  }
#line 515 "goal_form.m"
                            }
#line 435 "goal_form.m"
                          else
#line 486 "goal_form.m"
                            {
#line 486 "goal_form.m"
                              MR_Word hlds__goal_form__Cases_64 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_7, (MR_Integer) 3)));
#line 486 "goal_form.m"
                              MR_Word hlds__goal_form___Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_7, (MR_Integer) 1)));
#line 486 "goal_form.m"
                              MR_Word hlds__goal_form___CanFail_63 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_7, (MR_Integer) 2)));

#line 487 "goal_form.m"
                              {
#line 487 "goal_form.m"
                                return hlds__goal_form__CanLoop_6 = hlds__goal_form__case_list_can_loop_2_f_0(hlds__goal_form__MaybeModuleInfo_4, hlds__goal_form__Cases_64);
                              }
#line 486 "goal_form.m"
                            }
#line 418 "goal_form.m"
        return hlds__goal_form__CanLoop_6;
#line 418 "goal_form.m"
      }
#line 418 "goal_form.m"
      break;
#line 418 "goal_form.m"
    }
#line 416 "goal_form.m"
}

#line 357 "goal_form.m"
static void MR_CALL 
hlds__goal_form__cases_can_throw_4_p_0(
#line 357 "goal_form.m"
  MR_Word hlds__goal_form__HeadVar__1_1,
#line 357 "goal_form.m"
  MR_Word * hlds__goal_form__HeadVar__2_2,
#line 357 "goal_form.m"
  MR_Word hlds__goal_form__STATE_VARIABLE_ModuleInfo_0_3,
#line 357 "goal_form.m"
  MR_Word * hlds__goal_form__STATE_VARIABLE_ModuleInfo_4)
#line 357 "goal_form.m"
{
#line 360 "goal_form.m"
  while (MR_TRUE)
#line 360 "goal_form.m"
    {
#line 360 "goal_form.m"
      /* tailcall optimized into a loop */
#line 360 "goal_form.m"
      {
#line 360 "goal_form.m"
        MR_bool hlds__goal_form__succeeded;

#line 360 "goal_form.m"
        if ((hlds__goal_form__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 360 "goal_form.m"
          {
#line 360 "goal_form.m"
            *hlds__goal_form__HeadVar__2_2 = (MR_Integer) 1;
#line 360 "goal_form.m"
            *hlds__goal_form__STATE_VARIABLE_ModuleInfo_4 = hlds__goal_form__STATE_VARIABLE_ModuleInfo_0_3;
#line 360 "goal_form.m"
          }
#line 360 "goal_form.m"
        else
#line 361 "goal_form.m"
          {
#line 361 "goal_form.m"
            MR_Word hlds__goal_form__Case_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__HeadVar__1_1, (MR_Integer) 0)));
#line 361 "goal_form.m"
            MR_Word hlds__goal_form__Cases_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__HeadVar__1_1, (MR_Integer) 1)));
#line 361 "goal_form.m"
            MR_Word hlds__goal_form__Goal_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Case_8, (MR_Integer) 2)));
#line 361 "goal_form.m"
            MR_Word hlds__goal_form__Result0_15;
#line 361 "goal_form.m"
            MR_Word hlds__goal_form__STATE_VARIABLE_ModuleInfo_18_18;
#line 362 "goal_form.m"
            MR_Word hlds__goal_form__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Case_8, (MR_Integer) 0)));
#line 362 "goal_form.m"
            MR_Word hlds__goal_form__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Case_8, (MR_Integer) 1)));

#line 363 "goal_form.m"
            {
#line 363 "goal_form.m"
              hlds__goal_form__goal_can_throw_4_p_0(hlds__goal_form__Goal_14, &hlds__goal_form__Result0_15, hlds__goal_form__STATE_VARIABLE_ModuleInfo_0_3, &hlds__goal_form__STATE_VARIABLE_ModuleInfo_18_18);
            }
#line 367 "goal_form.m"
            if ((hlds__goal_form__Result0_15 == (MR_Integer) 0))
#line 368 "goal_form.m"
              {
#line 369 "goal_form.m"
                *hlds__goal_form__HeadVar__2_2 = (MR_Integer) 0;
#line 369 "goal_form.m"
                *hlds__goal_form__STATE_VARIABLE_ModuleInfo_4 = hlds__goal_form__STATE_VARIABLE_ModuleInfo_18_18;
#line 368 "goal_form.m"
              }
#line 367 "goal_form.m"
            else
#line 366 "goal_form.m"
              {
#line 366 "goal_form.m"
                /* direct tailcall eliminated */
#line 366 "goal_form.m"
                {
#line 366 "goal_form.m"
                  MR_Word hlds__goal_form__HeadVar__1__tmp_copy_1 = hlds__goal_form__Cases_9;
#line 366 "goal_form.m"
                  MR_Word hlds__goal_form__STATE_VARIABLE_ModuleInfo_0__tmp_copy_3 = hlds__goal_form__STATE_VARIABLE_ModuleInfo_18_18;

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
#line 361 "goal_form.m"
          }
#line 360 "goal_form.m"
      }
#line 360 "goal_form.m"
      break;
#line 360 "goal_form.m"
    }
#line 357 "goal_form.m"
}

#line 343 "goal_form.m"
static void MR_CALL 
hlds__goal_form__goals_can_throw_4_p_0(
#line 343 "goal_form.m"
  MR_Word hlds__goal_form__HeadVar__1_1,
#line 343 "goal_form.m"
  MR_Word * hlds__goal_form__HeadVar__2_2,
#line 343 "goal_form.m"
  MR_Word hlds__goal_form__STATE_VARIABLE_ModuleInfo_0_3,
#line 343 "goal_form.m"
  MR_Word * hlds__goal_form__STATE_VARIABLE_ModuleInfo_4)
#line 343 "goal_form.m"
{
#line 346 "goal_form.m"
  while (MR_TRUE)
#line 346 "goal_form.m"
    {
#line 346 "goal_form.m"
      /* tailcall optimized into a loop */
#line 346 "goal_form.m"
      {
#line 346 "goal_form.m"
        MR_bool hlds__goal_form__succeeded;

#line 346 "goal_form.m"
        if ((hlds__goal_form__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 346 "goal_form.m"
          {
#line 346 "goal_form.m"
            *hlds__goal_form__HeadVar__2_2 = (MR_Integer) 1;
#line 346 "goal_form.m"
            *hlds__goal_form__STATE_VARIABLE_ModuleInfo_4 = hlds__goal_form__STATE_VARIABLE_ModuleInfo_0_3;
#line 346 "goal_form.m"
          }
#line 346 "goal_form.m"
        else
#line 347 "goal_form.m"
          {
#line 347 "goal_form.m"
            MR_Word hlds__goal_form__Goal_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__HeadVar__1_1, (MR_Integer) 0)));
#line 347 "goal_form.m"
            MR_Word hlds__goal_form__Goals_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__HeadVar__1_1, (MR_Integer) 1)));
#line 347 "goal_form.m"
            MR_Word hlds__goal_form__Result0_12;
#line 347 "goal_form.m"
            MR_Word hlds__goal_form__STATE_VARIABLE_ModuleInfo_15_15;

#line 348 "goal_form.m"
            {
#line 348 "goal_form.m"
              hlds__goal_form__goal_can_throw_4_p_0(hlds__goal_form__Goal_8, &hlds__goal_form__Result0_12, hlds__goal_form__STATE_VARIABLE_ModuleInfo_0_3, &hlds__goal_form__STATE_VARIABLE_ModuleInfo_15_15);
            }
#line 352 "goal_form.m"
            if ((hlds__goal_form__Result0_12 == (MR_Integer) 0))
#line 353 "goal_form.m"
              {
#line 354 "goal_form.m"
                *hlds__goal_form__HeadVar__2_2 = (MR_Integer) 0;
#line 354 "goal_form.m"
                *hlds__goal_form__STATE_VARIABLE_ModuleInfo_4 = hlds__goal_form__STATE_VARIABLE_ModuleInfo_15_15;
#line 353 "goal_form.m"
              }
#line 352 "goal_form.m"
            else
#line 351 "goal_form.m"
              {
#line 351 "goal_form.m"
                /* direct tailcall eliminated */
#line 351 "goal_form.m"
                {
#line 351 "goal_form.m"
                  MR_Word hlds__goal_form__HeadVar__1__tmp_copy_1 = hlds__goal_form__Goals_9;
#line 351 "goal_form.m"
                  MR_Word hlds__goal_form__STATE_VARIABLE_ModuleInfo_0__tmp_copy_3 = hlds__goal_form__STATE_VARIABLE_ModuleInfo_15_15;

#line 351 "goal_form.m"
                  hlds__goal_form__STATE_VARIABLE_ModuleInfo_0_3 = hlds__goal_form__STATE_VARIABLE_ModuleInfo_0__tmp_copy_3;
#line 351 "goal_form.m"
                  hlds__goal_form__HeadVar__1_1 = hlds__goal_form__HeadVar__1__tmp_copy_1;
#line 351 "goal_form.m"
                }
#line 351 "goal_form.m"
                continue;
#line 351 "goal_form.m"
              }
#line 347 "goal_form.m"
          }
#line 346 "goal_form.m"
      }
#line 346 "goal_form.m"
      break;
#line 346 "goal_form.m"
    }
#line 343 "goal_form.m"
}

#line 213 "goal_form.m"
static MR_bool MR_CALL 
hlds__goal_form__only_constant_goals_3_p_0(
#line 213 "goal_form.m"
  MR_Word hlds__goal_form__HeadVar__1_1,
#line 213 "goal_form.m"
  MR_Word hlds__goal_form__STATE_VARIABLE_ToAssignVars_0_2,
#line 213 "goal_form.m"
  MR_Word * hlds__goal_form__STATE_VARIABLE_ToAssignVars_3)
#line 213 "goal_form.m"
{
#line 216 "goal_form.m"
  while (MR_TRUE)
#line 216 "goal_form.m"
    {
#line 216 "goal_form.m"
      /* tailcall optimized into a loop */
#line 216 "goal_form.m"
      {
#line 216 "goal_form.m"
        MR_bool hlds__goal_form__succeeded;

#line 216 "goal_form.m"
        if ((hlds__goal_form__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 216 "goal_form.m"
          {
#line 216 "goal_form.m"
            *hlds__goal_form__STATE_VARIABLE_ToAssignVars_3 = hlds__goal_form__STATE_VARIABLE_ToAssignVars_0_2;
#line 216 "goal_form.m"
            hlds__goal_form__succeeded = MR_TRUE;
#line 216 "goal_form.m"
          }
#line 216 "goal_form.m"
        else
#line 217 "goal_form.m"
          {
#line 217 "goal_form.m"
            MR_Word hlds__goal_form__TypeCtorInfo_31_31;
#line 217 "goal_form.m"
            MR_Word hlds__goal_form__Goal_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__HeadVar__1_1, (MR_Integer) 0)));
#line 217 "goal_form.m"
            MR_Word hlds__goal_form__Goals_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__HeadVar__1_1, (MR_Integer) 1)));
#line 217 "goal_form.m"
            MR_Word hlds__goal_form__GoalExpr_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Goal_7, (MR_Integer) 0)));
#line 217 "goal_form.m"
            MR_Word hlds__goal_form__Var_17;
#line 217 "goal_form.m"
            MR_Word hlds__goal_form__STATE_VARIABLE_ToAssignVars_29_29;
#line 218 "goal_form.m"
            MR_Word hlds__goal_form__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Goal_7, (MR_Integer) 1)));

#line 225 "goal_form.m"
            if (((MR_tag((MR_Word) hlds__goal_form__GoalExpr_10)) == (MR_mktag((MR_Integer) 1))))
#line 223 "goal_form.m"
              {
#line 223 "goal_form.m"
                MR_Word hlds__goal_form__Unification_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__GoalExpr_10, (MR_Integer) 3)));
#line 223 "goal_form.m"
                MR_Word hlds__goal_form__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__GoalExpr_10, (MR_Integer) 0)));
#line 223 "goal_form.m"
                MR_Word hlds__goal_form__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__GoalExpr_10, (MR_Integer) 1)));
#line 223 "goal_form.m"
                MR_Word hlds__goal_form__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__GoalExpr_10, (MR_Integer) 2)));
#line 223 "goal_form.m"
                MR_Word hlds__goal_form__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__GoalExpr_10, (MR_Integer) 4)));
#line 224 "goal_form.m"
                MR_Word hlds__goal_form__V_18_18;
#line 224 "goal_form.m"
                MR_Word hlds__goal_form__V_19_19;
#line 224 "goal_form.m"
                MR_Word hlds__goal_form__V_20_20;
#line 224 "goal_form.m"
                MR_Word hlds__goal_form__V_21_21;
#line 224 "goal_form.m"
                MR_Word hlds__goal_form__V_22_22;
#line 224 "goal_form.m"
                MR_Word hlds__goal_form__V_23_23;

#line 224 "goal_form.m"
                hlds__goal_form__succeeded = ((MR_tag((MR_Word) hlds__goal_form__Unification_15)) == (MR_mktag((MR_Integer) 0)));
#line 224 "goal_form.m"
                if (hlds__goal_form__succeeded)
#line 224 "goal_form.m"
                  {
#line 224 "goal_form.m"
                    hlds__goal_form__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Unification_15, (MR_Integer) 0)));
#line 224 "goal_form.m"
                    hlds__goal_form__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Unification_15, (MR_Integer) 1)));
#line 224 "goal_form.m"
                    hlds__goal_form__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Unification_15, (MR_Integer) 2)));
#line 224 "goal_form.m"
                    hlds__goal_form__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Unification_15, (MR_Integer) 3)));
#line 224 "goal_form.m"
                    hlds__goal_form__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Unification_15, (MR_Integer) 4)));
#line 224 "goal_form.m"
                    hlds__goal_form__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Unification_15, (MR_Integer) 5)));
#line 224 "goal_form.m"
                    hlds__goal_form__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Unification_15, (MR_Integer) 6)));
#line 224 "goal_form.m"
                  }
#line 223 "goal_form.m"
              }
#line 225 "goal_form.m"
            else
#line 225 "goal_form.m"
              if (((((MR_tag((MR_Word) hlds__goal_form__GoalExpr_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_10, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 226 "goal_form.m"
                {
#line 226 "goal_form.m"
                  MR_Word hlds__goal_form__Reason_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_10, (MR_Integer) 1)));
#line 226 "goal_form.m"
                  MR_Word hlds__goal_form__V_28_28;
#line 226 "goal_form.m"
                  MR_Word hlds__goal_form__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_10, (MR_Integer) 2)));

#line 227 "goal_form.m"
                  hlds__goal_form__succeeded = ((((MR_tag((MR_Word) hlds__goal_form__Reason_24)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__Reason_24, (MR_Integer) 0)))) == (MR_Integer) 4)));
#line 227 "goal_form.m"
                  if (hlds__goal_form__succeeded)
#line 227 "goal_form.m"
                    {
#line 227 "goal_form.m"
                      hlds__goal_form__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__Reason_24, (MR_Integer) 1)));
#line 227 "goal_form.m"
                      hlds__goal_form__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__Reason_24, (MR_Integer) 2)));
#line 227 "goal_form.m"
                      hlds__goal_form__succeeded = (hlds__goal_form__V_28_28 == (MR_Integer) 1);
#line 227 "goal_form.m"
                    }
#line 226 "goal_form.m"
                }
#line 225 "goal_form.m"
              else
#line 225 "goal_form.m"
                hlds__goal_form__succeeded = MR_FALSE;
#line 217 "goal_form.m"
            if (hlds__goal_form__succeeded)
#line 217 "goal_form.m"
              {
#line 5013 "hlds.goal_form.c"
                hlds__goal_form__TypeCtorInfo_31_31 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 229 "goal_form.m"
                {
#line 229 "goal_form.m"
                  parse_tree__set_of_var__delete_3_p_0(hlds__goal_form__TypeCtorInfo_31_31, hlds__goal_form__Var_17, hlds__goal_form__STATE_VARIABLE_ToAssignVars_0_2, &hlds__goal_form__STATE_VARIABLE_ToAssignVars_29_29);
                }
#line 230 "goal_form.m"
                /* direct tailcall eliminated */
#line 230 "goal_form.m"
                {
#line 230 "goal_form.m"
                  MR_Word hlds__goal_form__HeadVar__1__tmp_copy_1 = hlds__goal_form__Goals_8;
#line 230 "goal_form.m"
                  MR_Word hlds__goal_form__STATE_VARIABLE_ToAssignVars_0__tmp_copy_2 = hlds__goal_form__STATE_VARIABLE_ToAssignVars_29_29;

#line 230 "goal_form.m"
                  hlds__goal_form__STATE_VARIABLE_ToAssignVars_0_2 = hlds__goal_form__STATE_VARIABLE_ToAssignVars_0__tmp_copy_2;
#line 230 "goal_form.m"
                  hlds__goal_form__HeadVar__1_1 = hlds__goal_form__HeadVar__1__tmp_copy_1;
#line 230 "goal_form.m"
                }
#line 230 "goal_form.m"
                continue;
#line 217 "goal_form.m"
              }
#line 217 "goal_form.m"
          }
#line 216 "goal_form.m"
        return hlds__goal_form__succeeded;
#line 216 "goal_form.m"
      }
#line 216 "goal_form.m"
      break;
#line 216 "goal_form.m"
    }
#line 213 "goal_form.m"
}

#line 179 "goal_form.m"
MR_Word MR_CALL 
hlds__goal_form__goal_may_modify_trail_1_f_0(
#line 179 "goal_form.m"
  MR_Word hlds__goal_form__GoalInfo_3)
#line 179 "goal_form.m"
{
#line 1074 "goal_form.m"
  {
#line 1074 "goal_form.m"
    MR_bool hlds__goal_form__succeeded;
#line 1074 "goal_form.m"
    MR_Word hlds__goal_form__HeadVar__2_2;
#line 1074 "goal_form.m"
    MR_Word hlds__goal_form__V_4_4;

#line 1068 "goal_form.m"
    {
#line 1068 "goal_form.m"
      hlds__goal_form__succeeded = hlds__hlds_goal__goal_info_has_feature_2_p_0(hlds__goal_form__GoalInfo_3, (MR_Integer) 15);
    }
#line 1067 "goal_form.m"
    if (hlds__goal_form__succeeded)
#line 1067 "goal_form.m"
      hlds__goal_form__V_4_4 = (MR_Integer) 1;
#line 1067 "goal_form.m"
    else
#line 1067 "goal_form.m"
      hlds__goal_form__V_4_4 = (MR_Integer) 0;
#line 1074 "goal_form.m"
    {
#line 1074 "goal_form.m"
      return hlds__goal_form__HeadVar__2_2 = mercury__bool__not_1_f_0(hlds__goal_form__V_4_4);
    }
#line 1074 "goal_form.m"
    return hlds__goal_form__HeadVar__2_2;
#line 1074 "goal_form.m"
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
#line 1067 "goal_form.m"
  {
#line 1067 "goal_form.m"
    MR_bool hlds__goal_form__succeeded;
#line 1067 "goal_form.m"
    MR_Word hlds__goal_form__HeadVar__2_2;

#line 1068 "goal_form.m"
    {
#line 1068 "goal_form.m"
      hlds__goal_form__succeeded = hlds__hlds_goal__goal_info_has_feature_2_p_0(hlds__goal_form__GoalInfo_3, (MR_Integer) 15);
    }
#line 1067 "goal_form.m"
    if (hlds__goal_form__succeeded)
#line 1067 "goal_form.m"
      hlds__goal_form__HeadVar__2_2 = (MR_Integer) 1;
#line 1067 "goal_form.m"
    else
#line 1067 "goal_form.m"
      hlds__goal_form__HeadVar__2_2 = (MR_Integer) 0;
#line 1067 "goal_form.m"
    return hlds__goal_form__HeadVar__2_2;
#line 1067 "goal_form.m"
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
#line 943 "goal_form.m"
  while (MR_TRUE)
#line 943 "goal_form.m"
    {
#line 943 "goal_form.m"
      /* tailcall optimized into a loop */
#line 943 "goal_form.m"
      {
#line 943 "goal_form.m"
        MR_bool hlds__goal_form__succeeded;
#line 943 "goal_form.m"
        MR_Word hlds__goal_form__GoalExpr_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Goal_6, (MR_Integer) 0)));
#line 944 "goal_form.m"
        MR_Word hlds__goal_form__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Goal_6, (MR_Integer) 1)));

#line 952 "goal_form.m"
        if (((MR_tag((MR_Word) hlds__goal_form__GoalExpr_11)) == (MR_mktag((MR_Integer) 0))))
#line 983 "goal_form.m"
          {
#line 983 "goal_form.m"
            MR_Word hlds__goal_form__SubGoal_54 = (MR_Word) MR_body(((MR_Word) hlds__goal_form__GoalExpr_11), (MR_Integer) 0);

#line 984 "goal_form.m"
            /* direct tailcall eliminated */
#line 984 "goal_form.m"
            {
#line 984 "goal_form.m"
              MR_Word hlds__goal_form__Goal__tmp_copy_6 = hlds__goal_form__SubGoal_54;

#line 984 "goal_form.m"
              hlds__goal_form__Goal_6 = hlds__goal_form__Goal__tmp_copy_6;
#line 984 "goal_form.m"
            }
#line 984 "goal_form.m"
            continue;
#line 983 "goal_form.m"
          }
#line 952 "goal_form.m"
        else
#line 952 "goal_form.m"
          if (((MR_tag((MR_Word) hlds__goal_form__GoalExpr_11)) == (MR_mktag((MR_Integer) 2))))
#line 953 "goal_form.m"
            {
#line 953 "goal_form.m"
              MR_Word hlds__goal_form__CallPredId_30 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__GoalExpr_11, (MR_Integer) 0)));
#line 953 "goal_form.m"
              MR_Integer hlds__goal_form__CallProcId_31 = ((MR_Integer) (MR_hl_field(MR_mktag(2), hlds__goal_form__GoalExpr_11, (MR_Integer) 1)));
#line 953 "goal_form.m"
              MR_Word hlds__goal_form__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__GoalExpr_11, (MR_Integer) 2)));
#line 953 "goal_form.m"
              MR_Word hlds__goal_form__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__GoalExpr_11, (MR_Integer) 3)));
#line 953 "goal_form.m"
              MR_Word hlds__goal_form__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__GoalExpr_11, (MR_Integer) 4)));
#line 953 "goal_form.m"
              MR_Word hlds__goal_form__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__GoalExpr_11, (MR_Integer) 5)));

#line 955 "goal_form.m"
              {
#line 955 "goal_form.m"
                hlds__goal_form__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(hlds__goal_form__PredId_7, hlds__goal_form__CallPredId_30);
              }
#line 955 "goal_form.m"
              if (hlds__goal_form__succeeded)
#line 956 "goal_form.m"
                hlds__goal_form__succeeded = (hlds__goal_form__ProcId_8 == hlds__goal_form__CallProcId_31);
#line 959 "goal_form.m"
              if (hlds__goal_form__succeeded)
#line 958 "goal_form.m"
                *hlds__goal_form__Min_9 = (MR_Integer) 1;
#line 959 "goal_form.m"
              else
#line 960 "goal_form.m"
                *hlds__goal_form__Min_9 = (MR_Integer) 0;
#line 963 "goal_form.m"
              *hlds__goal_form__Max_10 = *hlds__goal_form__Min_9;
#line 953 "goal_form.m"
            }
#line 952 "goal_form.m"
          else
#line 952 "goal_form.m"
            if (((((MR_tag((MR_Word) hlds__goal_form__GoalExpr_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_11, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 965 "goal_form.m"
              {
#line 965 "goal_form.m"
                MR_Word hlds__goal_form__Goals_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_11, (MR_Integer) 2)));
#line 965 "goal_form.m"
                MR_Word hlds__goal_form__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_11, (MR_Integer) 1)));

#line 966 "goal_form.m"
                {
#line 966 "goal_form.m"
                  hlds__goal_form__count_recursive_calls_conj_7_p_0(hlds__goal_form__Goals_38, hlds__goal_form__PredId_7, hlds__goal_form__ProcId_8, (MR_Integer) 0, (MR_Integer) 0, hlds__goal_form__Min_9, hlds__goal_form__Max_10);
#line 966 "goal_form.m"
                  return;
                }
#line 965 "goal_form.m"
              }
#line 952 "goal_form.m"
            else
#line 952 "goal_form.m"
              if (((((MR_tag((MR_Word) hlds__goal_form__GoalExpr_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_11, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 968 "goal_form.m"
                {
#line 968 "goal_form.m"
                  MR_Word hlds__goal_form__Goals_76 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_11, (MR_Integer) 1)));

#line 969 "goal_form.m"
                  {
#line 969 "goal_form.m"
                    hlds__goal_form__count_recursive_calls_disj_5_p_0(hlds__goal_form__Goals_76, hlds__goal_form__PredId_7, hlds__goal_form__ProcId_8, hlds__goal_form__Min_9, hlds__goal_form__Max_10);
#line 969 "goal_form.m"
                    return;
                  }
#line 968 "goal_form.m"
                }
#line 952 "goal_form.m"
              else
#line 952 "goal_form.m"
                if (((((MR_tag((MR_Word) hlds__goal_form__GoalExpr_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_11, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 974 "goal_form.m"
                  {
#line 974 "goal_form.m"
                    MR_Word hlds__goal_form__Cond_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_11, (MR_Integer) 2)));
#line 974 "goal_form.m"
                    MR_Word hlds__goal_form__Then_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_11, (MR_Integer) 3)));
#line 974 "goal_form.m"
                    MR_Word hlds__goal_form__Else_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_11, (MR_Integer) 4)));
#line 974 "goal_form.m"
                    MR_Integer hlds__goal_form__CMin_46;
#line 974 "goal_form.m"
                    MR_Integer hlds__goal_form__CMax_47;
#line 974 "goal_form.m"
                    MR_Integer hlds__goal_form__TMin_48;
#line 974 "goal_form.m"
                    MR_Integer hlds__goal_form__TMax_49;
#line 974 "goal_form.m"
                    MR_Integer hlds__goal_form__EMin_50;
#line 974 "goal_form.m"
                    MR_Integer hlds__goal_form__EMax_51;
#line 974 "goal_form.m"
                    MR_Integer hlds__goal_form__CTMin_52;
#line 974 "goal_form.m"
                    MR_Integer hlds__goal_form__CTMax_53;
#line 974 "goal_form.m"
                    MR_Word hlds__goal_form__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_11, (MR_Integer) 1)));

#line 975 "goal_form.m"
                    {
#line 975 "goal_form.m"
                      hlds__goal_form__count_recursive_calls_5_p_0(hlds__goal_form__Cond_43, hlds__goal_form__PredId_7, hlds__goal_form__ProcId_8, &hlds__goal_form__CMin_46, &hlds__goal_form__CMax_47);
                    }
#line 976 "goal_form.m"
                    {
#line 976 "goal_form.m"
                      hlds__goal_form__count_recursive_calls_5_p_0(hlds__goal_form__Then_44, hlds__goal_form__PredId_7, hlds__goal_form__ProcId_8, &hlds__goal_form__TMin_48, &hlds__goal_form__TMax_49);
                    }
#line 977 "goal_form.m"
                    {
#line 977 "goal_form.m"
                      hlds__goal_form__count_recursive_calls_5_p_0(hlds__goal_form__Else_45, hlds__goal_form__PredId_7, hlds__goal_form__ProcId_8, &hlds__goal_form__EMin_50, &hlds__goal_form__EMax_51);
                    }
#line 978 "goal_form.m"
                    hlds__goal_form__CTMin_52 = (hlds__goal_form__CMin_46 + hlds__goal_form__TMin_48);
#line 979 "goal_form.m"
                    hlds__goal_form__CTMax_53 = (hlds__goal_form__CMax_47 + hlds__goal_form__TMax_49);
#line 980 "goal_form.m"
                    {
#line 980 "goal_form.m"
                      mercury__int__min_3_p_0(hlds__goal_form__CTMin_52, hlds__goal_form__EMin_50, hlds__goal_form__Min_9);
                    }
#line 981 "goal_form.m"
                    {
#line 981 "goal_form.m"
                      mercury__int__max_3_p_0(hlds__goal_form__CTMax_53, hlds__goal_form__EMax_51, hlds__goal_form__Max_10);
#line 981 "goal_form.m"
                      return;
                    }
#line 974 "goal_form.m"
                  }
#line 952 "goal_form.m"
                else
#line 952 "goal_form.m"
                  if (((((MR_tag((MR_Word) hlds__goal_form__GoalExpr_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_11, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 986 "goal_form.m"
                    {
#line 986 "goal_form.m"
                      MR_Word hlds__goal_form__Reason_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_11, (MR_Integer) 1)));
#line 986 "goal_form.m"
                      MR_Word hlds__goal_form__SubGoal_77 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_11, (MR_Integer) 2)));
#line 988 "goal_form.m"
                      MR_Word hlds__goal_form__FGT_57;
#line 988 "goal_form.m"
                      MR_Word hlds__goal_form__V_56_56;

#line 988 "goal_form.m"
                      hlds__goal_form__succeeded = ((((MR_tag((MR_Word) hlds__goal_form__Reason_55)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__Reason_55, (MR_Integer) 0)))) == (MR_Integer) 4)));
#line 988 "goal_form.m"
                      if (hlds__goal_form__succeeded)
#line 988 "goal_form.m"
                        {
#line 988 "goal_form.m"
                          hlds__goal_form__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__Reason_55, (MR_Integer) 1)));
#line 988 "goal_form.m"
                          hlds__goal_form__FGT_57 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__Reason_55, (MR_Integer) 2)));
#line 990 "goal_form.m"
                          if ((hlds__goal_form__FGT_57 == (MR_Integer) 1))
#line 989 "goal_form.m"
                            hlds__goal_form__succeeded = MR_TRUE;
#line 990 "goal_form.m"
                          else
#line 990 "goal_form.m"
                            if ((hlds__goal_form__FGT_57 == (MR_Integer) 2))
#line 990 "goal_form.m"
                              hlds__goal_form__succeeded = MR_TRUE;
#line 990 "goal_form.m"
                            else
#line 990 "goal_form.m"
                              hlds__goal_form__succeeded = MR_FALSE;
#line 988 "goal_form.m"
                        }
#line 997 "goal_form.m"
                      if (hlds__goal_form__succeeded)
#line 995 "goal_form.m"
                        {
#line 995 "goal_form.m"
                          *hlds__goal_form__Min_9 = (MR_Integer) 0;
#line 996 "goal_form.m"
                          *hlds__goal_form__Max_10 = (MR_Integer) 0;
#line 995 "goal_form.m"
                        }
#line 997 "goal_form.m"
                      else
#line 998 "goal_form.m"
                        {
#line 998 "goal_form.m"
                          /* direct tailcall eliminated */
#line 998 "goal_form.m"
                          {
#line 998 "goal_form.m"
                            MR_Word hlds__goal_form__Goal__tmp_copy_6 = hlds__goal_form__SubGoal_77;

#line 998 "goal_form.m"
                            hlds__goal_form__Goal_6 = hlds__goal_form__Goal__tmp_copy_6;
#line 998 "goal_form.m"
                          }
#line 998 "goal_form.m"
                          continue;
#line 998 "goal_form.m"
                        }
#line 986 "goal_form.m"
                    }
#line 952 "goal_form.m"
                  else
#line 952 "goal_form.m"
                    if (((((MR_tag((MR_Word) hlds__goal_form__GoalExpr_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_11, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 1001 "goal_form.m"
                      {
#line 1001 "goal_form.m"
                        MR_Word hlds__goal_form__ShortHand_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_11, (MR_Integer) 1)));

#line 1006 "goal_form.m"
                        if (((MR_tag((MR_Word) hlds__goal_form__ShortHand_58)) == (MR_mktag((MR_Integer) 1))))
#line 1003 "goal_form.m"
                          {
#line 1003 "goal_form.m"
                            MR_Word hlds__goal_form__Goal_85 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__ShortHand_58, (MR_Integer) 4)));
#line 1003 "goal_form.m"
                            MR_Word hlds__goal_form__Goals_86 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__ShortHand_58, (MR_Integer) 5)));
#line 1003 "goal_form.m"
                            MR_Word hlds__goal_form__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__ShortHand_58, (MR_Integer) 0)));
#line 1003 "goal_form.m"
                            MR_Word hlds__goal_form__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__ShortHand_58, (MR_Integer) 1)));
#line 1003 "goal_form.m"
                            MR_Word hlds__goal_form__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__ShortHand_58, (MR_Integer) 2)));
#line 1003 "goal_form.m"
                            MR_Word hlds__goal_form__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__ShortHand_58, (MR_Integer) 3)));
#line 1003 "goal_form.m"
                            MR_Word hlds__goal_form__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__ShortHand_58, (MR_Integer) 6)));

#line 1036 "goal_form.m"
                            if ((hlds__goal_form__Goals_86 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1035 "goal_form.m"
                              {
#line 1035 "goal_form.m"
                                /* direct tailcall eliminated */
#line 1035 "goal_form.m"
                                {
#line 1035 "goal_form.m"
                                  MR_Word hlds__goal_form__Goal__tmp_copy_6 = hlds__goal_form__Goal_85;

#line 1035 "goal_form.m"
                                  hlds__goal_form__Goal_6 = hlds__goal_form__Goal__tmp_copy_6;
#line 1035 "goal_form.m"
                                }
#line 1035 "goal_form.m"
                                continue;
#line 1035 "goal_form.m"
                              }
#line 1036 "goal_form.m"
                            else
#line 1037 "goal_form.m"
                              {
#line 1037 "goal_form.m"
                                MR_Integer hlds__goal_form__Min0_93;
#line 1037 "goal_form.m"
                                MR_Integer hlds__goal_form__Max0_94;
#line 1037 "goal_form.m"
                                MR_Integer hlds__goal_form__Min1_95;
#line 1037 "goal_form.m"
                                MR_Integer hlds__goal_form__Max1_96;

#line 1038 "goal_form.m"
                                {
#line 1038 "goal_form.m"
                                  hlds__goal_form__count_recursive_calls_5_p_0(hlds__goal_form__Goal_85, hlds__goal_form__PredId_7, hlds__goal_form__ProcId_8, &hlds__goal_form__Min0_93, &hlds__goal_form__Max0_94);
                                }
#line 1039 "goal_form.m"
                                {
#line 1039 "goal_form.m"
                                  hlds__goal_form__count_recursive_calls_disj_5_p_0(hlds__goal_form__Goals_86, hlds__goal_form__PredId_7, hlds__goal_form__ProcId_8, &hlds__goal_form__Min1_95, &hlds__goal_form__Max1_96);
                                }
#line 1040 "goal_form.m"
                                {
#line 1040 "goal_form.m"
                                  mercury__int__min_3_p_0(hlds__goal_form__Min0_93, hlds__goal_form__Min1_95, hlds__goal_form__Min_9);
                                }
#line 1041 "goal_form.m"
                                {
#line 1041 "goal_form.m"
                                  mercury__int__max_3_p_0(hlds__goal_form__Max0_94, hlds__goal_form__Max1_96, hlds__goal_form__Max_10);
#line 1041 "goal_form.m"
                                  return;
                                }
#line 1037 "goal_form.m"
                              }
#line 1003 "goal_form.m"
                          }
#line 1006 "goal_form.m"
                        else
#line 1006 "goal_form.m"
                          if (((MR_tag((MR_Word) hlds__goal_form__ShortHand_58)) == (MR_mktag((MR_Integer) 0))))
#line 1010 "goal_form.m"
                            {
#line 1012 "goal_form.m"
                              {
#line 1012 "goal_form.m"
                                mercury__require__unexpected_3_p_0((MR_String) "hlds.goal_form", (MR_String) "predicate \140hlds.goal_form.count_recursive_calls\'/5", (MR_String) "bi_implication");
#line 1012 "goal_form.m"
                                return;
                              }
#line 1010 "goal_form.m"
                            }
#line 1006 "goal_form.m"
                          else
#line 1007 "goal_form.m"
                            {
#line 1007 "goal_form.m"
                              MR_Word hlds__goal_form__SubGoal_78 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__ShortHand_58, (MR_Integer) 2)));
#line 1007 "goal_form.m"
                              MR_Word hlds__goal_form__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__ShortHand_58, (MR_Integer) 0)));
#line 1007 "goal_form.m"
                              MR_Word hlds__goal_form__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__ShortHand_58, (MR_Integer) 1)));

#line 1008 "goal_form.m"
                              /* direct tailcall eliminated */
#line 1008 "goal_form.m"
                              {
#line 1008 "goal_form.m"
                                MR_Word hlds__goal_form__Goal__tmp_copy_6 = hlds__goal_form__SubGoal_78;

#line 1008 "goal_form.m"
                                hlds__goal_form__Goal_6 = hlds__goal_form__Goal__tmp_copy_6;
#line 1008 "goal_form.m"
                              }
#line 1008 "goal_form.m"
                              continue;
#line 1007 "goal_form.m"
                            }
#line 1001 "goal_form.m"
                      }
#line 952 "goal_form.m"
                    else
#line 952 "goal_form.m"
                      if (((((MR_tag((MR_Word) hlds__goal_form__GoalExpr_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_11, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 971 "goal_form.m"
                        {
#line 971 "goal_form.m"
                          MR_Word hlds__goal_form__Cases_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_11, (MR_Integer) 3)));
#line 971 "goal_form.m"
                          MR_Word hlds__goal_form__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_11, (MR_Integer) 1)));
#line 971 "goal_form.m"
                          MR_Word hlds__goal_form__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_11, (MR_Integer) 2)));

#line 972 "goal_form.m"
                          {
#line 972 "goal_form.m"
                            hlds__goal_form__count_recursive_calls_cases_5_p_0(hlds__goal_form__Cases_41, hlds__goal_form__PredId_7, hlds__goal_form__ProcId_8, hlds__goal_form__Min_9, hlds__goal_form__Max_10);
#line 972 "goal_form.m"
                            return;
                          }
#line 971 "goal_form.m"
                        }
#line 952 "goal_form.m"
                      else
#line 949 "goal_form.m"
                        {
#line 950 "goal_form.m"
                          *hlds__goal_form__Min_9 = (MR_Integer) 0;
#line 951 "goal_form.m"
                          *hlds__goal_form__Max_10 = (MR_Integer) 0;
#line 949 "goal_form.m"
                        }
#line 943 "goal_form.m"
      }
#line 943 "goal_form.m"
      break;
#line 943 "goal_form.m"
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
#line 902 "goal_form.m"
  {
#line 902 "goal_form.m"
    MR_bool hlds__goal_form__succeeded;
#line 902 "goal_form.m"
    MR_Word hlds__goal_form__GoalExpr_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__HeadVar__1_1, (MR_Integer) 0)));
#line 902 "goal_form.m"
    MR_Word hlds__goal_form__GoalInfo_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__HeadVar__1_1, (MR_Integer) 1)));
#line 902 "goal_form.m"
    MR_Word hlds__goal_form__Detism_4;
#line 902 "goal_form.m"
    MR_Word hlds__goal_form__CanFail_5;
#line 904 "goal_form.m"
    MR_Word hlds__goal_form__V_6_6;

#line 903 "goal_form.m"
    {
#line 903 "goal_form.m"
      hlds__goal_form__Detism_4 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(hlds__goal_form__GoalInfo_3);
    }
#line 904 "goal_form.m"
    {
#line 904 "goal_form.m"
      parse_tree__prog_data__determinism_components_3_p_0(hlds__goal_form__Detism_4, &hlds__goal_form__CanFail_5, &hlds__goal_form__V_6_6);
    }
#line 907 "goal_form.m"
    if ((hlds__goal_form__CanFail_5 == (MR_Integer) 0))
#line 914 "goal_form.m"
      {
#line 914 "goal_form.m"
        MR_Word hlds__goal_form__ConjType_7;
#line 914 "goal_form.m"
        MR_Word hlds__goal_form__Goals_8;

#line 914 "goal_form.m"
        hlds__goal_form__succeeded = ((((MR_tag((MR_Word) hlds__goal_form__GoalExpr_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_2, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 914 "goal_form.m"
        if (hlds__goal_form__succeeded)
#line 914 "goal_form.m"
          {
#line 914 "goal_form.m"
            hlds__goal_form__ConjType_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_2, (MR_Integer) 1)));
#line 914 "goal_form.m"
            hlds__goal_form__Goals_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_2, (MR_Integer) 2)));
#line 915 "goal_form.m"
            hlds__goal_form__succeeded = (hlds__goal_form__ConjType_7 == (MR_Integer) 0);
#line 914 "goal_form.m"
            if (hlds__goal_form__succeeded)
#line 916 "goal_form.m"
              {
#line 916 "goal_form.m"
                return hlds__goal_form__succeeded = hlds__goal_form__cannot_fail_before_stack_flush_conj_1_p_0(hlds__goal_form__Goals_8);
              }
#line 914 "goal_form.m"
          }
#line 914 "goal_form.m"
      }
#line 907 "goal_form.m"
    else
#line 906 "goal_form.m"
      hlds__goal_form__succeeded = MR_TRUE;
#line 902 "goal_form.m"
    return hlds__goal_form__succeeded;
#line 902 "goal_form.m"
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
#line 869 "goal_form.m"
  {
#line 869 "goal_form.m"
    MR_bool hlds__goal_form__succeeded;
#line 869 "goal_form.m"
    MR_Word hlds__goal_form__GoalExpr_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__HeadVar__1_1, (MR_Integer) 0)));
#line 869 "goal_form.m"
    MR_Word hlds__goal_form__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__HeadVar__1_1, (MR_Integer) 1)));

#line 870 "goal_form.m"
    {
#line 870 "goal_form.m"
      return hlds__goal_form__succeeded = hlds__goal_form__cannot_stack_flush_2_1_p_0(hlds__goal_form__GoalExpr_2);
    }
#line 869 "goal_form.m"
    return hlds__goal_form__succeeded;
#line 869 "goal_form.m"
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
#line 743 "goal_form.m"
  {
#line 743 "goal_form.m"
    MR_bool hlds__goal_form__succeeded;
#line 743 "goal_form.m"
    MR_Word hlds__goal_form__V_4_4;

#line 744 "goal_form.m"
    {
#line 744 "goal_form.m"
      hlds__goal_form__goal_list_may_allocate_heap_2_p_0(hlds__goal_form__Goals_2, &hlds__goal_form__V_4_4);
    }
#line 744 "goal_form.m"
    hlds__goal_form__succeeded = ((MR_Integer) 1 == hlds__goal_form__V_4_4);
#line 743 "goal_form.m"
    return hlds__goal_form__succeeded;
#line 743 "goal_form.m"
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
#line 740 "goal_form.m"
  {
#line 740 "goal_form.m"
    MR_bool hlds__goal_form__succeeded;
#line 740 "goal_form.m"
    MR_Word hlds__goal_form__V_4_4;
#line 740 "goal_form.m"
    MR_Word hlds__goal_form__GoalExpr_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Goal_2, (MR_Integer) 0)));
#line 748 "goal_form.m"
    MR_Word hlds__goal_form___GoalInfo_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Goal_2, (MR_Integer) 1)));

#line 749 "goal_form.m"
    {
#line 749 "goal_form.m"
      hlds__goal_form__goal_may_allocate_heap_2_2_p_0(hlds__goal_form__GoalExpr_6, &hlds__goal_form__V_4_4);
    }
#line 741 "goal_form.m"
    hlds__goal_form__succeeded = ((MR_Integer) 1 == hlds__goal_form__V_4_4);
#line 740 "goal_form.m"
    return hlds__goal_form__succeeded;
#line 740 "goal_form.m"
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
#line 683 "goal_form.m"
  {
#line 683 "goal_form.m"
    MR_bool hlds__goal_form__succeeded;
#line 683 "goal_form.m"
    MR_Word hlds__goal_form__HeadVar__2_2;
#line 683 "goal_form.m"
    MR_Word hlds__goal_form__GoalExpr_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__HeadVar__1_1, (MR_Integer) 0)));
#line 683 "goal_form.m"
    MR_Word hlds__goal_form___GoalInfo_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__HeadVar__1_1, (MR_Integer) 1)));

#line 683 "goal_form.m"
    {
#line 683 "goal_form.m"
      return hlds__goal_form__HeadVar__2_2 = hlds__goal_form__goal_is_flat_expr_1_f_0(hlds__goal_form__GoalExpr_3);
    }
#line 683 "goal_form.m"
    return hlds__goal_form__HeadVar__2_2;
#line 683 "goal_form.m"
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
#line 414 "goal_form.m"
  {
#line 414 "goal_form.m"
    MR_bool hlds__goal_form__succeeded;

#line 414 "goal_form.m"
    {
#line 414 "goal_form.m"
      hlds__goal_form__succeeded = hlds__goal_form__goal_cannot_loop_or_throw_1_p_0(hlds__goal_form__Goal_2);
    }
#line 414 "goal_form.m"
    hlds__goal_form__succeeded = !(hlds__goal_form__succeeded);
#line 414 "goal_form.m"
    return hlds__goal_form__succeeded;
#line 414 "goal_form.m"
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
#line 409 "goal_form.m"
  {
#line 409 "goal_form.m"
    MR_bool hlds__goal_form__succeeded;
#line 409 "goal_form.m"
    MR_Word hlds__goal_form__V_3_3;
#line 409 "goal_form.m"
    MR_Word hlds__goal_form__V_6_6;
#line 409 "goal_form.m"
    MR_Word hlds__goal_form__GoalExpr_9;
#line 409 "goal_form.m"
    MR_Word hlds__goal_form__GoalInfo_10;
#line 409 "goal_form.m"
    MR_Word hlds__goal_form__Determinism_11;

#line 410 "goal_form.m"
    {
#line 410 "goal_form.m"
      hlds__goal_form__V_3_3 = hlds__goal_form__goal_can_loop_func_2_f_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__goal_form__Goal_2);
    }
#line 410 "goal_form.m"
    hlds__goal_form__succeeded = (hlds__goal_form__V_3_3 == (MR_Integer) 0);
#line 409 "goal_form.m"
    if (hlds__goal_form__succeeded)
#line 409 "goal_form.m"
      {
#line 411 "goal_form.m"
        hlds__goal_form__V_6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 555 "goal_form.m"
        hlds__goal_form__GoalExpr_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Goal_2, (MR_Integer) 0)));
#line 555 "goal_form.m"
        hlds__goal_form__GoalInfo_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Goal_2, (MR_Integer) 1)));
#line 556 "goal_form.m"
        {
#line 556 "goal_form.m"
          hlds__goal_form__Determinism_11 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(hlds__goal_form__GoalInfo_10);
        }
#line 557 "goal_form.m"
        hlds__goal_form__succeeded = (hlds__goal_form__Determinism_11 == (MR_Integer) 6);
#line 559 "goal_form.m"
        if (hlds__goal_form__succeeded)
#line 558 "goal_form.m"
          hlds__goal_form__succeeded = MR_FALSE;
#line 559 "goal_form.m"
        else
#line 560 "goal_form.m"
          {
#line 560 "goal_form.m"
            MR_Word hlds__goal_form__V_13_13;

#line 560 "goal_form.m"
            {
#line 560 "goal_form.m"
              hlds__goal_form__V_13_13 = hlds__goal_form__goal_expr_can_throw_2_f_0(hlds__goal_form__V_6_6, hlds__goal_form__GoalExpr_9);
            }
#line 411 "goal_form.m"
            hlds__goal_form__succeeded = (hlds__goal_form__V_13_13 == (MR_Integer) 0);
#line 560 "goal_form.m"
          }
#line 409 "goal_form.m"
      }
#line 409 "goal_form.m"
    return hlds__goal_form__succeeded;
#line 409 "goal_form.m"
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
#line 407 "goal_form.m"
  {
#line 407 "goal_form.m"
    MR_bool hlds__goal_form__succeeded;

#line 407 "goal_form.m"
    {
#line 407 "goal_form.m"
      hlds__goal_form__succeeded = hlds__goal_form__goal_cannot_loop_or_throw_2_p_0(hlds__goal_form__ModuleInfo_3, hlds__goal_form__Goal_4);
    }
#line 407 "goal_form.m"
    hlds__goal_form__succeeded = !(hlds__goal_form__succeeded);
#line 407 "goal_form.m"
    return hlds__goal_form__succeeded;
#line 407 "goal_form.m"
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
#line 402 "goal_form.m"
  {
#line 402 "goal_form.m"
    MR_bool hlds__goal_form__succeeded;
#line 402 "goal_form.m"
    MR_Word hlds__goal_form__V_5_5;
#line 402 "goal_form.m"
    MR_Word hlds__goal_form__V_6_6;
#line 402 "goal_form.m"
    MR_Word hlds__goal_form__GoalExpr_11;
#line 402 "goal_form.m"
    MR_Word hlds__goal_form__GoalInfo_12;
#line 402 "goal_form.m"
    MR_Word hlds__goal_form__Determinism_13;

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
    if (hlds__goal_form__succeeded)
#line 402 "goal_form.m"
      {
#line 555 "goal_form.m"
        hlds__goal_form__GoalExpr_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Goal_4, (MR_Integer) 0)));
#line 555 "goal_form.m"
        hlds__goal_form__GoalInfo_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Goal_4, (MR_Integer) 1)));
#line 556 "goal_form.m"
        {
#line 556 "goal_form.m"
          hlds__goal_form__Determinism_13 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(hlds__goal_form__GoalInfo_12);
        }
#line 557 "goal_form.m"
        hlds__goal_form__succeeded = (hlds__goal_form__Determinism_13 == (MR_Integer) 6);
#line 559 "goal_form.m"
        if (hlds__goal_form__succeeded)
#line 558 "goal_form.m"
          hlds__goal_form__succeeded = MR_FALSE;
#line 559 "goal_form.m"
        else
#line 560 "goal_form.m"
          {
#line 560 "goal_form.m"
            MR_Word hlds__goal_form__V_15_15;

#line 560 "goal_form.m"
            {
#line 560 "goal_form.m"
              hlds__goal_form__V_15_15 = hlds__goal_form__goal_expr_can_throw_2_f_0(hlds__goal_form__V_6_6, hlds__goal_form__GoalExpr_11);
            }
#line 404 "goal_form.m"
            hlds__goal_form__succeeded = (hlds__goal_form__V_15_15 == (MR_Integer) 0);
#line 560 "goal_form.m"
          }
#line 402 "goal_form.m"
      }
#line 402 "goal_form.m"
    return hlds__goal_form__succeeded;
#line 402 "goal_form.m"
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
#line 399 "goal_form.m"
  {
#line 399 "goal_form.m"
    MR_bool hlds__goal_form__succeeded;
#line 399 "goal_form.m"
    MR_Word hlds__goal_form__V_6_6;
#line 399 "goal_form.m"
    MR_Word hlds__goal_form__GoalExpr_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Goal_4, (MR_Integer) 0)));
#line 399 "goal_form.m"
    MR_Word hlds__goal_form__GoalInfo_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Goal_4, (MR_Integer) 1)));
#line 399 "goal_form.m"
    MR_Word hlds__goal_form__Determinism_11;

#line 400 "goal_form.m"
    {
#line 400 "goal_form.m"
      hlds__goal_form__V_6_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 400 "goal_form.m"
      MR_hl_field(MR_mktag(1), hlds__goal_form__V_6_6, 0) = ((MR_Box) (hlds__goal_form__ModuleInfo_3));
#line 400 "goal_form.m"
    }
#line 556 "goal_form.m"
    {
#line 556 "goal_form.m"
      hlds__goal_form__Determinism_11 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(hlds__goal_form__GoalInfo_10);
    }
#line 557 "goal_form.m"
    hlds__goal_form__succeeded = (hlds__goal_form__Determinism_11 == (MR_Integer) 6);
#line 559 "goal_form.m"
    if (hlds__goal_form__succeeded)
#line 558 "goal_form.m"
      hlds__goal_form__succeeded = MR_TRUE;
#line 559 "goal_form.m"
    else
#line 560 "goal_form.m"
      {
#line 560 "goal_form.m"
        MR_Word hlds__goal_form__V_13_13;

#line 560 "goal_form.m"
        {
#line 560 "goal_form.m"
          hlds__goal_form__V_13_13 = hlds__goal_form__goal_expr_can_throw_2_f_0(hlds__goal_form__V_6_6, hlds__goal_form__GoalExpr_9);
        }
#line 400 "goal_form.m"
        hlds__goal_form__succeeded = (hlds__goal_form__V_13_13 == (MR_Integer) 1);
#line 560 "goal_form.m"
      }
#line 399 "goal_form.m"
    return hlds__goal_form__succeeded;
#line 399 "goal_form.m"
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
#line 396 "goal_form.m"
  {
#line 396 "goal_form.m"
    MR_bool hlds__goal_form__succeeded;
#line 396 "goal_form.m"
    MR_Word hlds__goal_form__V_6_6;
#line 396 "goal_form.m"
    MR_Word hlds__goal_form__GoalExpr_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Goal_4, (MR_Integer) 0)));
#line 396 "goal_form.m"
    MR_Word hlds__goal_form__GoalInfo_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Goal_4, (MR_Integer) 1)));
#line 396 "goal_form.m"
    MR_Word hlds__goal_form__Determinism_11;

#line 397 "goal_form.m"
    {
#line 397 "goal_form.m"
      hlds__goal_form__V_6_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 397 "goal_form.m"
      MR_hl_field(MR_mktag(1), hlds__goal_form__V_6_6, 0) = ((MR_Box) (hlds__goal_form__ModuleInfo_3));
#line 397 "goal_form.m"
    }
#line 556 "goal_form.m"
    {
#line 556 "goal_form.m"
      hlds__goal_form__Determinism_11 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(hlds__goal_form__GoalInfo_10);
    }
#line 557 "goal_form.m"
    hlds__goal_form__succeeded = (hlds__goal_form__Determinism_11 == (MR_Integer) 6);
#line 559 "goal_form.m"
    if (hlds__goal_form__succeeded)
#line 558 "goal_form.m"
      hlds__goal_form__succeeded = MR_FALSE;
#line 559 "goal_form.m"
    else
#line 560 "goal_form.m"
      {
#line 560 "goal_form.m"
        MR_Word hlds__goal_form__V_13_13;

#line 560 "goal_form.m"
        {
#line 560 "goal_form.m"
          hlds__goal_form__V_13_13 = hlds__goal_form__goal_expr_can_throw_2_f_0(hlds__goal_form__V_6_6, hlds__goal_form__GoalExpr_9);
        }
#line 397 "goal_form.m"
        hlds__goal_form__succeeded = (hlds__goal_form__V_13_13 == (MR_Integer) 0);
#line 560 "goal_form.m"
      }
#line 396 "goal_form.m"
    return hlds__goal_form__succeeded;
#line 396 "goal_form.m"
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
#line 393 "goal_form.m"
  {
#line 393 "goal_form.m"
    MR_bool hlds__goal_form__succeeded;
#line 393 "goal_form.m"
    MR_Word hlds__goal_form__V_5_5;
#line 393 "goal_form.m"
    MR_Word hlds__goal_form__V_6_6;

#line 394 "goal_form.m"
    {
#line 394 "goal_form.m"
      hlds__goal_form__V_6_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 394 "goal_form.m"
      MR_hl_field(MR_mktag(1), hlds__goal_form__V_6_6, 0) = ((MR_Box) (hlds__goal_form__ModuleInfo_3));
#line 394 "goal_form.m"
    }
#line 394 "goal_form.m"
    {
#line 394 "goal_form.m"
      hlds__goal_form__V_5_5 = hlds__goal_form__goal_can_loop_func_2_f_0(hlds__goal_form__V_6_6, hlds__goal_form__Goal_4);
    }
#line 394 "goal_form.m"
    hlds__goal_form__succeeded = (hlds__goal_form__V_5_5 == (MR_Integer) 1);
#line 393 "goal_form.m"
    return hlds__goal_form__succeeded;
#line 393 "goal_form.m"
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
#line 390 "goal_form.m"
  {
#line 390 "goal_form.m"
    MR_bool hlds__goal_form__succeeded;
#line 390 "goal_form.m"
    MR_Word hlds__goal_form__V_5_5;
#line 390 "goal_form.m"
    MR_Word hlds__goal_form__V_6_6;

#line 391 "goal_form.m"
    {
#line 391 "goal_form.m"
      hlds__goal_form__V_6_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 391 "goal_form.m"
      MR_hl_field(MR_mktag(1), hlds__goal_form__V_6_6, 0) = ((MR_Box) (hlds__goal_form__ModuleInfo_3));
#line 391 "goal_form.m"
    }
#line 391 "goal_form.m"
    {
#line 391 "goal_form.m"
      hlds__goal_form__V_5_5 = hlds__goal_form__goal_can_loop_func_2_f_0(hlds__goal_form__V_6_6, hlds__goal_form__Goal_4);
    }
#line 391 "goal_form.m"
    hlds__goal_form__succeeded = (hlds__goal_form__V_5_5 == (MR_Integer) 0);
#line 390 "goal_form.m"
    return hlds__goal_form__succeeded;
#line 390 "goal_form.m"
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
#line 384 "goal_form.m"
  {
#line 384 "goal_form.m"
    MR_bool hlds__goal_form__succeeded;
#line 390 "goal_form.m"
    MR_Word hlds__goal_form__V_14_14;
#line 390 "goal_form.m"
    MR_Word hlds__goal_form__V_15_15;

#line 391 "goal_form.m"
    {
#line 391 "goal_form.m"
      hlds__goal_form__V_15_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 391 "goal_form.m"
      MR_hl_field(MR_mktag(1), hlds__goal_form__V_15_15, 0) = ((MR_Box) (hlds__goal_form__STATE_VARIABLE_ModuleInfo_0_9));
#line 391 "goal_form.m"
    }
#line 391 "goal_form.m"
    {
#line 391 "goal_form.m"
      hlds__goal_form__V_14_14 = hlds__goal_form__goal_can_loop_func_2_f_0(hlds__goal_form__V_15_15, hlds__goal_form__Goal_5);
    }
#line 391 "goal_form.m"
    hlds__goal_form__succeeded = (hlds__goal_form__V_14_14 == (MR_Integer) 0);
#line 384 "goal_form.m"
    if (hlds__goal_form__succeeded)
#line 376 "goal_form.m"
      {
#line 376 "goal_form.m"
        MR_Word hlds__goal_form__ThrowResult_8;

#line 376 "goal_form.m"
        {
#line 376 "goal_form.m"
          hlds__goal_form__goal_can_throw_4_p_0(hlds__goal_form__Goal_5, &hlds__goal_form__ThrowResult_8, hlds__goal_form__STATE_VARIABLE_ModuleInfo_0_9, hlds__goal_form__STATE_VARIABLE_ModuleInfo_10);
        }
#line 380 "goal_form.m"
        if ((hlds__goal_form__ThrowResult_8 == (MR_Integer) 0))
#line 379 "goal_form.m"
          *hlds__goal_form__Result_6 = (MR_Integer) 0;
#line 380 "goal_form.m"
        else
#line 382 "goal_form.m"
          *hlds__goal_form__Result_6 = (MR_Integer) 1;
#line 376 "goal_form.m"
      }
#line 384 "goal_form.m"
    else
#line 385 "goal_form.m"
      {
#line 385 "goal_form.m"
        *hlds__goal_form__Result_6 = (MR_Integer) 0;
#line 385 "goal_form.m"
        *hlds__goal_form__STATE_VARIABLE_ModuleInfo_10 = hlds__goal_form__STATE_VARIABLE_ModuleInfo_0_9;
#line 385 "goal_form.m"
      }
#line 384 "goal_form.m"
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
#line 238 "goal_form.m"
  {
#line 238 "goal_form.m"
    MR_bool hlds__goal_form__succeeded;
#line 238 "goal_form.m"
    MR_Word hlds__goal_form__GoalExpr_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__HeadVar__1_1, (MR_Integer) 0)));
#line 238 "goal_form.m"
    MR_Word hlds__goal_form__GoalInfo_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__HeadVar__1_1, (MR_Integer) 1)));
#line 238 "goal_form.m"
    MR_Word hlds__goal_form__Determinism_9;

#line 239 "goal_form.m"
    {
#line 239 "goal_form.m"
      hlds__goal_form__Determinism_9 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(hlds__goal_form__GoalInfo_6);
    }
#line 240 "goal_form.m"
    hlds__goal_form__succeeded = (hlds__goal_form__Determinism_9 == (MR_Integer) 6);
#line 240 "goal_form.m"
    hlds__goal_form__succeeded = !(hlds__goal_form__succeeded);
#line 242 "goal_form.m"
    if (hlds__goal_form__succeeded)
#line 241 "goal_form.m"
      {
#line 241 "goal_form.m"
        hlds__goal_form__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_99_97_110_95_116_104_114_111_119_95_50_95_95_91_50_93_95_48_5_p_0(hlds__goal_form__GoalExpr_5, hlds__goal_form__Result_7, hlds__goal_form__STATE_VARIABLE_ModuleInfo_0_10, hlds__goal_form__STATE_VARIABLE_ModuleInfo_11);
#line 241 "goal_form.m"
        return;
      }
#line 242 "goal_form.m"
    else
#line 243 "goal_form.m"
      {
#line 243 "goal_form.m"
        *hlds__goal_form__Result_7 = (MR_Integer) 0;
#line 243 "goal_form.m"
        *hlds__goal_form__STATE_VARIABLE_ModuleInfo_11 = hlds__goal_form__STATE_VARIABLE_ModuleInfo_0_10;
#line 243 "goal_form.m"
      }
#line 238 "goal_form.m"
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
#line 208 "goal_form.m"
  while (MR_TRUE)
#line 208 "goal_form.m"
    {
#line 208 "goal_form.m"
      /* tailcall optimized into a loop */
#line 208 "goal_form.m"
      {
#line 208 "goal_form.m"
        MR_bool hlds__goal_form__succeeded;

#line 208 "goal_form.m"
        if ((hlds__goal_form__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 208 "goal_form.m"
          hlds__goal_form__succeeded = MR_TRUE;
#line 208 "goal_form.m"
        else
#line 209 "goal_form.m"
          {
#line 209 "goal_form.m"
            MR_Word hlds__goal_form__TypeCtorInfo_10_14;
#line 209 "goal_form.m"
            MR_Word hlds__goal_form__Disjunct_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__HeadVar__2_2, (MR_Integer) 0)));
#line 209 "goal_form.m"
            MR_Word hlds__goal_form__Disjuncts_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__HeadVar__2_2, (MR_Integer) 1)));
#line 209 "goal_form.m"
            MR_Word hlds__goal_form__GoalInfo_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Disjunct_5, (MR_Integer) 1)));
#line 209 "goal_form.m"
            MR_Word hlds__goal_form__CodeModel_11;
#line 209 "goal_form.m"
            MR_Word hlds__goal_form__Conj_12;
#line 209 "goal_form.m"
            MR_Word hlds__goal_form__ToAssignVars_13;
#line 201 "goal_form.m"
            MR_Word hlds__goal_form___GoalExpr_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Disjunct_5, (MR_Integer) 0)));

#line 202 "goal_form.m"
            {
#line 202 "goal_form.m"
              hlds__goal_form__CodeModel_11 = hlds__code_model__goal_info_get_code_model_1_f_0(hlds__goal_form__GoalInfo_10);
            }
#line 203 "goal_form.m"
            hlds__goal_form__succeeded = (hlds__goal_form__CodeModel_11 == (MR_Integer) 0);
#line 209 "goal_form.m"
            if (hlds__goal_form__succeeded)
#line 209 "goal_form.m"
              {
#line 204 "goal_form.m"
                {
#line 204 "goal_form.m"
                  hlds__hlds_goal__goal_to_conj_list_2_p_0(hlds__goal_form__Disjunct_5, &hlds__goal_form__Conj_12);
                }
#line 205 "goal_form.m"
                {
#line 205 "goal_form.m"
                  hlds__goal_form__succeeded = hlds__goal_form__only_constant_goals_3_p_0(hlds__goal_form__Conj_12, hlds__goal_form__HeadVar__1_1, &hlds__goal_form__ToAssignVars_13);
                }
#line 209 "goal_form.m"
                if (hlds__goal_form__succeeded)
#line 209 "goal_form.m"
                  {
#line 6377 "hlds.goal_form.c"
                    hlds__goal_form__TypeCtorInfo_10_14 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 206 "goal_form.m"
                    {
#line 206 "goal_form.m"
                      hlds__goal_form__succeeded = parse_tree__set_of_var__is_empty_1_p_0(hlds__goal_form__TypeCtorInfo_10_14, hlds__goal_form__ToAssignVars_13);
                    }
#line 209 "goal_form.m"
                    if (hlds__goal_form__succeeded)
#line 211 "goal_form.m"
                      {
#line 211 "goal_form.m"
                        /* direct tailcall eliminated */
#line 211 "goal_form.m"
                        {
#line 211 "goal_form.m"
                          MR_Word hlds__goal_form__HeadVar__2__tmp_copy_2 = hlds__goal_form__Disjuncts_6;

#line 211 "goal_form.m"
                          hlds__goal_form__HeadVar__2_2 = hlds__goal_form__HeadVar__2__tmp_copy_2;
#line 211 "goal_form.m"
                        }
#line 211 "goal_form.m"
                        continue;
#line 211 "goal_form.m"
                      }
#line 209 "goal_form.m"
                  }
#line 209 "goal_form.m"
              }
#line 209 "goal_form.m"
          }
#line 208 "goal_form.m"
        return hlds__goal_form__succeeded;
#line 208 "goal_form.m"
      }
#line 208 "goal_form.m"
      break;
#line 208 "goal_form.m"
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
#line 200 "goal_form.m"
  {
#line 200 "goal_form.m"
    MR_bool hlds__goal_form__succeeded;
#line 200 "goal_form.m"
    MR_Word hlds__goal_form__TypeCtorInfo_10_10;
#line 200 "goal_form.m"
    MR_Word hlds__goal_form__GoalInfo_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Goal_4, (MR_Integer) 1)));
#line 200 "goal_form.m"
    MR_Word hlds__goal_form__CodeModel_7;
#line 200 "goal_form.m"
    MR_Word hlds__goal_form__Conj_8;
#line 200 "goal_form.m"
    MR_Word hlds__goal_form__ToAssignVars_9;
#line 201 "goal_form.m"
    MR_Word hlds__goal_form___GoalExpr_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Goal_4, (MR_Integer) 0)));

#line 202 "goal_form.m"
    {
#line 202 "goal_form.m"
      hlds__goal_form__CodeModel_7 = hlds__code_model__goal_info_get_code_model_1_f_0(hlds__goal_form__GoalInfo_6);
    }
#line 203 "goal_form.m"
    hlds__goal_form__succeeded = (hlds__goal_form__CodeModel_7 == (MR_Integer) 0);
#line 200 "goal_form.m"
    if (hlds__goal_form__succeeded)
#line 200 "goal_form.m"
      {
#line 204 "goal_form.m"
        {
#line 204 "goal_form.m"
          hlds__hlds_goal__goal_to_conj_list_2_p_0(hlds__goal_form__Goal_4, &hlds__goal_form__Conj_8);
        }
#line 205 "goal_form.m"
        {
#line 205 "goal_form.m"
          hlds__goal_form__succeeded = hlds__goal_form__only_constant_goals_3_p_0(hlds__goal_form__Conj_8, hlds__goal_form__ToAssignVars0_3, &hlds__goal_form__ToAssignVars_9);
        }
#line 200 "goal_form.m"
        if (hlds__goal_form__succeeded)
#line 200 "goal_form.m"
          {
#line 6471 "hlds.goal_form.c"
            hlds__goal_form__TypeCtorInfo_10_10 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 206 "goal_form.m"
            {
#line 206 "goal_form.m"
              return hlds__goal_form__succeeded = parse_tree__set_of_var__is_empty_1_p_0(hlds__goal_form__TypeCtorInfo_10_10, hlds__goal_form__ToAssignVars_9);
            }
#line 200 "goal_form.m"
          }
#line 200 "goal_form.m"
      }
#line 200 "goal_form.m"
    return hlds__goal_form__succeeded;
#line 200 "goal_form.m"
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
}

void mercury__hlds__goal_form__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module hlds.goal_form. */
