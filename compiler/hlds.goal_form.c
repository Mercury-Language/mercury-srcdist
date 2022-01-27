/*
** Automatically generated from `goal_form.m'
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
#include "parse_tree.maybe_error.mih"
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




#line 143 "hlds.goal_form.c"
static const MR_EnumFunctorDesc hlds__goal_form__hlds__goal_form__enum_functor_desc_goal_loop_or_throw_status_0_0;

#line 146 "hlds.goal_form.c"
static const MR_EnumFunctorDesc hlds__goal_form__hlds__goal_form__enum_functor_desc_goal_loop_or_throw_status_0_1;

#line 149 "hlds.goal_form.c"
static const MR_EnumFunctorDescPtr hlds__goal_form__hlds__goal_form__enum_value_ordered_goal_loop_or_throw_status_0[2];

#line 152 "hlds.goal_form.c"
static const MR_EnumFunctorDescPtr hlds__goal_form__hlds__goal_form__enum_name_ordered_goal_loop_or_throw_status_0[2];

#line 155 "hlds.goal_form.c"
static const MR_Integer hlds__goal_form__hlds__goal_form__functor_number_map_goal_loop_or_throw_status_0[2];

#line 158 "hlds.goal_form.c"
static const MR_EnumFunctorDesc hlds__goal_form__hlds__goal_form__enum_functor_desc_goal_loop_status_0_0;

#line 161 "hlds.goal_form.c"
static const MR_EnumFunctorDesc hlds__goal_form__hlds__goal_form__enum_functor_desc_goal_loop_status_0_1;

#line 164 "hlds.goal_form.c"
static const MR_EnumFunctorDescPtr hlds__goal_form__hlds__goal_form__enum_value_ordered_goal_loop_status_0[2];

#line 167 "hlds.goal_form.c"
static const MR_EnumFunctorDescPtr hlds__goal_form__hlds__goal_form__enum_name_ordered_goal_loop_status_0[2];

#line 170 "hlds.goal_form.c"
static const MR_Integer hlds__goal_form__hlds__goal_form__functor_number_map_goal_loop_status_0[2];

#line 173 "hlds.goal_form.c"
static const MR_EnumFunctorDesc hlds__goal_form__hlds__goal_form__enum_functor_desc_goal_throw_status_0_0;

#line 176 "hlds.goal_form.c"
static const MR_EnumFunctorDesc hlds__goal_form__hlds__goal_form__enum_functor_desc_goal_throw_status_0_1;

#line 179 "hlds.goal_form.c"
static const MR_EnumFunctorDescPtr hlds__goal_form__hlds__goal_form__enum_value_ordered_goal_throw_status_0[2];

#line 182 "hlds.goal_form.c"
static const MR_EnumFunctorDescPtr hlds__goal_form__hlds__goal_form__enum_name_ordered_goal_throw_status_0[2];

#line 185 "hlds.goal_form.c"
static const MR_Integer hlds__goal_form__hlds__goal_form__functor_number_map_goal_throw_status_0[2];

#line 188 "hlds.goal_form.c"
static const MR_EnumFunctorDesc hlds__goal_form__hlds__goal_form__enum_functor_desc_has_subgoals_0_0;

#line 191 "hlds.goal_form.c"
static const MR_EnumFunctorDesc hlds__goal_form__hlds__goal_form__enum_functor_desc_has_subgoals_0_1;

#line 194 "hlds.goal_form.c"
static const MR_EnumFunctorDescPtr hlds__goal_form__hlds__goal_form__enum_value_ordered_has_subgoals_0[2];

#line 197 "hlds.goal_form.c"
static const MR_EnumFunctorDescPtr hlds__goal_form__hlds__goal_form__enum_name_ordered_has_subgoals_0[2];

#line 200 "hlds.goal_form.c"
static const MR_Integer hlds__goal_form__hlds__goal_form__functor_number_map_has_subgoals_0[2];

#line 203 "hlds.goal_form.c"
static MR_bool MR_CALL 
hlds__goal_form____Unify____goal_loop_or_throw_status_0_0_10001(
#line 206 "hlds.goal_form.c"
  MR_Box hlds__goal_form__wrapper_arg_1,
#line 208 "hlds.goal_form.c"
  MR_Box hlds__goal_form__wrapper_arg_2);

#line 211 "hlds.goal_form.c"
static void MR_CALL 
hlds__goal_form____Compare____goal_loop_or_throw_status_0_0_10001(
#line 214 "hlds.goal_form.c"
  MR_Box * hlds__goal_form__wrapper_arg_1,
#line 216 "hlds.goal_form.c"
  MR_Box hlds__goal_form__wrapper_arg_2,
#line 218 "hlds.goal_form.c"
  MR_Box hlds__goal_form__wrapper_arg_3);

#line 221 "hlds.goal_form.c"
static MR_bool MR_CALL 
hlds__goal_form____Unify____goal_loop_status_0_0_10001(
#line 224 "hlds.goal_form.c"
  MR_Box hlds__goal_form__wrapper_arg_1,
#line 226 "hlds.goal_form.c"
  MR_Box hlds__goal_form__wrapper_arg_2);

#line 229 "hlds.goal_form.c"
static void MR_CALL 
hlds__goal_form____Compare____goal_loop_status_0_0_10001(
#line 232 "hlds.goal_form.c"
  MR_Box * hlds__goal_form__wrapper_arg_1,
#line 234 "hlds.goal_form.c"
  MR_Box hlds__goal_form__wrapper_arg_2,
#line 236 "hlds.goal_form.c"
  MR_Box hlds__goal_form__wrapper_arg_3);

#line 239 "hlds.goal_form.c"
static MR_bool MR_CALL 
hlds__goal_form____Unify____goal_throw_status_0_0_10001(
#line 242 "hlds.goal_form.c"
  MR_Box hlds__goal_form__wrapper_arg_1,
#line 244 "hlds.goal_form.c"
  MR_Box hlds__goal_form__wrapper_arg_2);

#line 247 "hlds.goal_form.c"
static void MR_CALL 
hlds__goal_form____Compare____goal_throw_status_0_0_10001(
#line 250 "hlds.goal_form.c"
  MR_Box * hlds__goal_form__wrapper_arg_1,
#line 252 "hlds.goal_form.c"
  MR_Box hlds__goal_form__wrapper_arg_2,
#line 254 "hlds.goal_form.c"
  MR_Box hlds__goal_form__wrapper_arg_3);

#line 257 "hlds.goal_form.c"
static MR_bool MR_CALL 
hlds__goal_form____Unify____has_subgoals_0_0_10001(
#line 260 "hlds.goal_form.c"
  MR_Box hlds__goal_form__wrapper_arg_1,
#line 262 "hlds.goal_form.c"
  MR_Box hlds__goal_form__wrapper_arg_2);

#line 265 "hlds.goal_form.c"
static void MR_CALL 
hlds__goal_form____Compare____has_subgoals_0_0_10001(
#line 268 "hlds.goal_form.c"
  MR_Box * hlds__goal_form__wrapper_arg_1,
#line 270 "hlds.goal_form.c"
  MR_Box hlds__goal_form__wrapper_arg_2,
#line 272 "hlds.goal_form.c"
  MR_Box hlds__goal_form__wrapper_arg_3);

#line 260 "goal_form.m"
static void MR_CALL 
hlds__goal_form__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_99_97_110_95_116_104_114_111_119_95_50_95_95_91_50_93_95_48_5_p_0(
#line 260 "goal_form.m"
  MR_Word hlds__goal_form__GoalExpr_6,
#line 260 "goal_form.m"
  MR_Word * hlds__goal_form__Result_8,
#line 260 "goal_form.m"
  MR_Word hlds__goal_form__STATE_VARIABLE_ModuleInfo_0_82,
#line 260 "goal_form.m"
  MR_Word * hlds__goal_form__STATE_VARIABLE_ModuleInfo_83);

#line 1166 "goal_form.m"
static MR_Word MR_CALL 
hlds__goal_form__case_list_has_foreign_1_f_0(
#line 1166 "goal_form.m"
  MR_Word hlds__goal_form__HeadVar__1_1);

#line 1156 "goal_form.m"
static MR_Word MR_CALL 
hlds__goal_form__goal_list_has_foreign_1_f_0(
#line 1156 "goal_form.m"
  MR_Word hlds__goal_form__HeadVar__1_1);

#line 1060 "goal_form.m"
static void MR_CALL 
hlds__goal_form__count_recursive_calls_cases_5_p_0(
#line 1060 "goal_form.m"
  MR_Word hlds__goal_form__HeadVar__1_1,
#line 1060 "goal_form.m"
  MR_Word hlds__goal_form__PredId_2,
#line 1060 "goal_form.m"
  MR_Integer hlds__goal_form__ProcId_3,
#line 1060 "goal_form.m"
  MR_Integer * hlds__goal_form__Min_4,
#line 1060 "goal_form.m"
  MR_Integer * hlds__goal_form__Max_5);

#line 1044 "goal_form.m"
static void MR_CALL 
hlds__goal_form__count_recursive_calls_disj_5_p_0(
#line 1044 "goal_form.m"
  MR_Word hlds__goal_form__HeadVar__1_1,
#line 1044 "goal_form.m"
  MR_Word hlds__goal_form__PredId_2,
#line 1044 "goal_form.m"
  MR_Integer hlds__goal_form__ProcId_3,
#line 1044 "goal_form.m"
  MR_Integer * hlds__goal_form__HeadVar__4_4,
#line 1044 "goal_form.m"
  MR_Integer * hlds__goal_form__HeadVar__5_5);

#line 1032 "goal_form.m"
static void MR_CALL 
hlds__goal_form__count_recursive_calls_conj_7_p_0(
#line 1032 "goal_form.m"
  MR_Word hlds__goal_form__HeadVar__1_1,
#line 1032 "goal_form.m"
  MR_Word hlds__goal_form__PredId_2,
#line 1032 "goal_form.m"
  MR_Integer hlds__goal_form__ProcId_3,
#line 1032 "goal_form.m"
  MR_Integer hlds__goal_form__HeadVar__4_4,
#line 1032 "goal_form.m"
  MR_Integer hlds__goal_form__HeadVar__5_5,
#line 1032 "goal_form.m"
  MR_Integer * hlds__goal_form__Min_6,
#line 1032 "goal_form.m"
  MR_Integer * hlds__goal_form__Max_7);

#line 934 "goal_form.m"
static MR_bool MR_CALL 
hlds__goal_form__cannot_fail_before_stack_flush_conj_1_p_0(
#line 934 "goal_form.m"
  MR_Word hlds__goal_form__HeadVar__1_1);

#line 909 "goal_form.m"
static MR_bool MR_CALL 
hlds__goal_form__cannot_stack_flush_cases_1_p_0(
#line 909 "goal_form.m"
  MR_Word hlds__goal_form__HeadVar__1_1);

#line 902 "goal_form.m"
static MR_bool MR_CALL 
hlds__goal_form__cannot_stack_flush_goals_1_p_0(
#line 902 "goal_form.m"
  MR_Word hlds__goal_form__HeadVar__1_1);

#line 888 "goal_form.m"
static MR_bool MR_CALL 
hlds__goal_form__cannot_stack_flush_2_1_p_0(
#line 888 "goal_form.m"
  MR_Word hlds__goal_form__HeadVar__1_1);

#line 873 "goal_form.m"
static void MR_CALL 
hlds__goal_form__cases_may_allocate_heap_2_p_0(
#line 873 "goal_form.m"
  MR_Word hlds__goal_form__HeadVar__1_1,
#line 873 "goal_form.m"
  MR_Word * hlds__goal_form__HeadVar__2_2);

#line 863 "goal_form.m"
static void MR_CALL 
hlds__goal_form__goal_list_may_allocate_heap_2_p_0(
#line 863 "goal_form.m"
  MR_Word hlds__goal_form__HeadVar__1_1,
#line 863 "goal_form.m"
  MR_Word * hlds__goal_form__HeadVar__2_2);

#line 767 "goal_form.m"
static void MR_CALL 
hlds__goal_form__goal_may_allocate_heap_2_2_p_0(
#line 767 "goal_form.m"
  MR_Word hlds__goal_form__GoalExpr_3,
#line 767 "goal_form.m"
  MR_Word * hlds__goal_form__May_4);

#line 744 "goal_form.m"
static MR_Word MR_CALL 
hlds__goal_form__goal_is_flat_list_1_f_0(
#line 744 "goal_form.m"
  MR_Word hlds__goal_form__HeadVar__1_1);

#line 701 "goal_form.m"
static MR_Word MR_CALL 
hlds__goal_form__goal_is_flat_expr_1_f_0(
#line 701 "goal_form.m"
  MR_Word hlds__goal_form__GoalExpr_3);

#line 687 "goal_form.m"
static MR_Word MR_CALL 
hlds__goal_form__case_list_can_throw_2_f_0(
#line 687 "goal_form.m"
  MR_Word hlds__goal_form__MaybeModuleInfo_1,
#line 687 "goal_form.m"
  MR_Word hlds__goal_form__HeadVar__2_2);

#line 677 "goal_form.m"
static MR_Word MR_CALL 
hlds__goal_form__goal_list_can_throw_2_f_0(
#line 677 "goal_form.m"
  MR_Word hlds__goal_form__MaybeModuleInfo_1,
#line 677 "goal_form.m"
  MR_Word hlds__goal_form__HeadVar__2_2);

#line 577 "goal_form.m"
static MR_Word MR_CALL 
hlds__goal_form__goal_expr_can_throw_2_f_0(
#line 577 "goal_form.m"
  MR_Word hlds__goal_form__MaybeModuleInfo_4,
#line 577 "goal_form.m"
  MR_Word hlds__goal_form__GoalExpr_5);

#line 566 "goal_form.m"
static MR_Word MR_CALL 
hlds__goal_form__goal_can_throw_func_2_f_0(
#line 566 "goal_form.m"
  MR_Word hlds__goal_form__MaybeModuleInfo_4,
#line 566 "goal_form.m"
  MR_Word hlds__goal_form__HeadVar__2_2);

#line 554 "goal_form.m"
static MR_Word MR_CALL 
hlds__goal_form__case_list_can_loop_2_f_0(
#line 554 "goal_form.m"
  MR_Word hlds__goal_form__MaybeModuleInfo_1,
#line 554 "goal_form.m"
  MR_Word hlds__goal_form__HeadVar__2_2);

#line 544 "goal_form.m"
static MR_Word MR_CALL 
hlds__goal_form__goal_list_can_loop_2_f_0(
#line 544 "goal_form.m"
  MR_Word hlds__goal_form__MaybeModuleInfo_1,
#line 544 "goal_form.m"
  MR_Word hlds__goal_form__HeadVar__2_2);

#line 430 "goal_form.m"
static MR_Word MR_CALL 
hlds__goal_form__goal_can_loop_func_2_f_0(
#line 430 "goal_form.m"
  MR_Word hlds__goal_form__MaybeModuleInfo_4,
#line 430 "goal_form.m"
  MR_Word hlds__goal_form__Goal_5);

#line 371 "goal_form.m"
static void MR_CALL 
hlds__goal_form__cases_can_throw_4_p_0(
#line 371 "goal_form.m"
  MR_Word hlds__goal_form__HeadVar__1_1,
#line 371 "goal_form.m"
  MR_Word * hlds__goal_form__HeadVar__2_2,
#line 371 "goal_form.m"
  MR_Word hlds__goal_form__STATE_VARIABLE_ModuleInfo_0_3,
#line 371 "goal_form.m"
  MR_Word * hlds__goal_form__STATE_VARIABLE_ModuleInfo_4);

#line 357 "goal_form.m"
static void MR_CALL 
hlds__goal_form__goals_can_throw_4_p_0(
#line 357 "goal_form.m"
  MR_Word hlds__goal_form__HeadVar__1_1,
#line 357 "goal_form.m"
  MR_Word * hlds__goal_form__HeadVar__2_2,
#line 357 "goal_form.m"
  MR_Word hlds__goal_form__STATE_VARIABLE_ModuleInfo_0_3,
#line 357 "goal_form.m"
  MR_Word * hlds__goal_form__STATE_VARIABLE_ModuleInfo_4);

#line 227 "goal_form.m"
static MR_bool MR_CALL 
hlds__goal_form__only_constant_goals_3_p_0(
#line 227 "goal_form.m"
  MR_Word hlds__goal_form__HeadVar__1_1,
#line 227 "goal_form.m"
  MR_Word hlds__goal_form__STATE_VARIABLE_ToAssignVars_0_2,
#line 227 "goal_form.m"
  MR_Word * hlds__goal_form__STATE_VARIABLE_ToAssignVars_3);







#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



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
  {     hlds__goal_form__hlds__goal_form__enum_name_ordered_goal_loop_or_throw_status_0 },
  {     hlds__goal_form__hlds__goal_form__enum_value_ordered_goal_loop_or_throw_status_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  hlds__goal_form__hlds__goal_form__functor_number_map_goal_loop_or_throw_status_0
};

#line 555 "hlds.goal_form.c"
static const MR_EnumFunctorDesc hlds__goal_form__hlds__goal_form__enum_functor_desc_goal_loop_status_0_0 = {
  (MR_String) "can_loop",
  (MR_Integer) 0
};

#line 561 "hlds.goal_form.c"
static const MR_EnumFunctorDesc hlds__goal_form__hlds__goal_form__enum_functor_desc_goal_loop_status_0_1 = {
  (MR_String) "cannot_loop",
  (MR_Integer) 1
};

#line 567 "hlds.goal_form.c"
static const MR_EnumFunctorDescPtr hlds__goal_form__hlds__goal_form__enum_value_ordered_goal_loop_status_0[2] = {
  &hlds__goal_form__hlds__goal_form__enum_functor_desc_goal_loop_status_0_0,
  &hlds__goal_form__hlds__goal_form__enum_functor_desc_goal_loop_status_0_1
};

#line 573 "hlds.goal_form.c"
static const MR_EnumFunctorDescPtr hlds__goal_form__hlds__goal_form__enum_name_ordered_goal_loop_status_0[2] = {
  &hlds__goal_form__hlds__goal_form__enum_functor_desc_goal_loop_status_0_0,
  &hlds__goal_form__hlds__goal_form__enum_functor_desc_goal_loop_status_0_1
};

#line 579 "hlds.goal_form.c"
static const MR_Integer hlds__goal_form__hlds__goal_form__functor_number_map_goal_loop_status_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 585 "hlds.goal_form.c"
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

#line 602 "hlds.goal_form.c"
static const MR_EnumFunctorDesc hlds__goal_form__hlds__goal_form__enum_functor_desc_goal_throw_status_0_0 = {
  (MR_String) "can_throw",
  (MR_Integer) 0
};

#line 608 "hlds.goal_form.c"
static const MR_EnumFunctorDesc hlds__goal_form__hlds__goal_form__enum_functor_desc_goal_throw_status_0_1 = {
  (MR_String) "cannot_throw",
  (MR_Integer) 1
};

#line 614 "hlds.goal_form.c"
static const MR_EnumFunctorDescPtr hlds__goal_form__hlds__goal_form__enum_value_ordered_goal_throw_status_0[2] = {
  &hlds__goal_form__hlds__goal_form__enum_functor_desc_goal_throw_status_0_0,
  &hlds__goal_form__hlds__goal_form__enum_functor_desc_goal_throw_status_0_1
};

#line 620 "hlds.goal_form.c"
static const MR_EnumFunctorDescPtr hlds__goal_form__hlds__goal_form__enum_name_ordered_goal_throw_status_0[2] = {
  &hlds__goal_form__hlds__goal_form__enum_functor_desc_goal_throw_status_0_0,
  &hlds__goal_form__hlds__goal_form__enum_functor_desc_goal_throw_status_0_1
};

#line 626 "hlds.goal_form.c"
static const MR_Integer hlds__goal_form__hlds__goal_form__functor_number_map_goal_throw_status_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 632 "hlds.goal_form.c"
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

#line 649 "hlds.goal_form.c"
static const MR_EnumFunctorDesc hlds__goal_form__hlds__goal_form__enum_functor_desc_has_subgoals_0_0 = {
  (MR_String) "has_subgoals",
  (MR_Integer) 0
};

#line 655 "hlds.goal_form.c"
static const MR_EnumFunctorDesc hlds__goal_form__hlds__goal_form__enum_functor_desc_has_subgoals_0_1 = {
  (MR_String) "does_not_have_subgoals",
  (MR_Integer) 1
};

#line 661 "hlds.goal_form.c"
static const MR_EnumFunctorDescPtr hlds__goal_form__hlds__goal_form__enum_value_ordered_has_subgoals_0[2] = {
  &hlds__goal_form__hlds__goal_form__enum_functor_desc_has_subgoals_0_0,
  &hlds__goal_form__hlds__goal_form__enum_functor_desc_has_subgoals_0_1
};

#line 667 "hlds.goal_form.c"
static const MR_EnumFunctorDescPtr hlds__goal_form__hlds__goal_form__enum_name_ordered_has_subgoals_0[2] = {
  &hlds__goal_form__hlds__goal_form__enum_functor_desc_has_subgoals_0_1,
  &hlds__goal_form__hlds__goal_form__enum_functor_desc_has_subgoals_0_0
};

#line 673 "hlds.goal_form.c"
static const MR_Integer hlds__goal_form__hlds__goal_form__functor_number_map_has_subgoals_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 679 "hlds.goal_form.c"
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

#line 696 "hlds.goal_form.c"
static MR_bool MR_CALL 
hlds__goal_form____Unify____goal_loop_or_throw_status_0_0_10001(
#line 699 "hlds.goal_form.c"
  MR_Box hlds__goal_form__wrapper_arg_1,
#line 701 "hlds.goal_form.c"
  MR_Box hlds__goal_form__wrapper_arg_2)
#line 703 "hlds.goal_form.c"
{
#line 705 "hlds.goal_form.c"
  {
#line 707 "hlds.goal_form.c"
    MR_bool hlds__goal_form__succeeded;

#line 710 "hlds.goal_form.c"
    {
#line 712 "hlds.goal_form.c"
      hlds__goal_form__succeeded = hlds__goal_form____Unify____goal_loop_or_throw_status_0_0(((MR_Word) hlds__goal_form__wrapper_arg_1), ((MR_Word) hlds__goal_form__wrapper_arg_2));
    }
#line 715 "hlds.goal_form.c"
    return hlds__goal_form__succeeded;
#line 717 "hlds.goal_form.c"
  }
#line 719 "hlds.goal_form.c"
}

#line 722 "hlds.goal_form.c"
static void MR_CALL 
hlds__goal_form____Compare____goal_loop_or_throw_status_0_0_10001(
#line 725 "hlds.goal_form.c"
  MR_Box * hlds__goal_form__wrapper_arg_1,
#line 727 "hlds.goal_form.c"
  MR_Box hlds__goal_form__wrapper_arg_2,
#line 729 "hlds.goal_form.c"
  MR_Box hlds__goal_form__wrapper_arg_3)
#line 731 "hlds.goal_form.c"
{
#line 733 "hlds.goal_form.c"
  {
#line 735 "hlds.goal_form.c"
    MR_Word hlds__goal_form__conv0_HeadVar__1_1;

#line 738 "hlds.goal_form.c"
    {
#line 740 "hlds.goal_form.c"
      hlds__goal_form____Compare____goal_loop_or_throw_status_0_0(&hlds__goal_form__conv0_HeadVar__1_1, ((MR_Word) hlds__goal_form__wrapper_arg_2), ((MR_Word) hlds__goal_form__wrapper_arg_3));
    }
#line 743 "hlds.goal_form.c"
    *hlds__goal_form__wrapper_arg_1 = ((MR_Box) (hlds__goal_form__conv0_HeadVar__1_1));
#line 745 "hlds.goal_form.c"
  }
#line 747 "hlds.goal_form.c"
}

#line 750 "hlds.goal_form.c"
static MR_bool MR_CALL 
hlds__goal_form____Unify____goal_loop_status_0_0_10001(
#line 753 "hlds.goal_form.c"
  MR_Box hlds__goal_form__wrapper_arg_1,
#line 755 "hlds.goal_form.c"
  MR_Box hlds__goal_form__wrapper_arg_2)
#line 757 "hlds.goal_form.c"
{
#line 759 "hlds.goal_form.c"
  {
#line 761 "hlds.goal_form.c"
    MR_bool hlds__goal_form__succeeded;

#line 764 "hlds.goal_form.c"
    {
#line 766 "hlds.goal_form.c"
      hlds__goal_form__succeeded = hlds__goal_form____Unify____goal_loop_status_0_0(((MR_Word) hlds__goal_form__wrapper_arg_1), ((MR_Word) hlds__goal_form__wrapper_arg_2));
    }
#line 769 "hlds.goal_form.c"
    return hlds__goal_form__succeeded;
#line 771 "hlds.goal_form.c"
  }
#line 773 "hlds.goal_form.c"
}

#line 776 "hlds.goal_form.c"
static void MR_CALL 
hlds__goal_form____Compare____goal_loop_status_0_0_10001(
#line 779 "hlds.goal_form.c"
  MR_Box * hlds__goal_form__wrapper_arg_1,
#line 781 "hlds.goal_form.c"
  MR_Box hlds__goal_form__wrapper_arg_2,
#line 783 "hlds.goal_form.c"
  MR_Box hlds__goal_form__wrapper_arg_3)
#line 785 "hlds.goal_form.c"
{
#line 787 "hlds.goal_form.c"
  {
#line 789 "hlds.goal_form.c"
    MR_Word hlds__goal_form__conv0_HeadVar__1_1;

#line 792 "hlds.goal_form.c"
    {
#line 794 "hlds.goal_form.c"
      hlds__goal_form____Compare____goal_loop_status_0_0(&hlds__goal_form__conv0_HeadVar__1_1, ((MR_Word) hlds__goal_form__wrapper_arg_2), ((MR_Word) hlds__goal_form__wrapper_arg_3));
    }
#line 797 "hlds.goal_form.c"
    *hlds__goal_form__wrapper_arg_1 = ((MR_Box) (hlds__goal_form__conv0_HeadVar__1_1));
#line 799 "hlds.goal_form.c"
  }
#line 801 "hlds.goal_form.c"
}

#line 804 "hlds.goal_form.c"
static MR_bool MR_CALL 
hlds__goal_form____Unify____goal_throw_status_0_0_10001(
#line 807 "hlds.goal_form.c"
  MR_Box hlds__goal_form__wrapper_arg_1,
#line 809 "hlds.goal_form.c"
  MR_Box hlds__goal_form__wrapper_arg_2)
#line 811 "hlds.goal_form.c"
{
#line 813 "hlds.goal_form.c"
  {
#line 815 "hlds.goal_form.c"
    MR_bool hlds__goal_form__succeeded;

#line 818 "hlds.goal_form.c"
    {
#line 820 "hlds.goal_form.c"
      hlds__goal_form__succeeded = hlds__goal_form____Unify____goal_throw_status_0_0(((MR_Word) hlds__goal_form__wrapper_arg_1), ((MR_Word) hlds__goal_form__wrapper_arg_2));
    }
#line 823 "hlds.goal_form.c"
    return hlds__goal_form__succeeded;
#line 825 "hlds.goal_form.c"
  }
#line 827 "hlds.goal_form.c"
}

#line 830 "hlds.goal_form.c"
static void MR_CALL 
hlds__goal_form____Compare____goal_throw_status_0_0_10001(
#line 833 "hlds.goal_form.c"
  MR_Box * hlds__goal_form__wrapper_arg_1,
#line 835 "hlds.goal_form.c"
  MR_Box hlds__goal_form__wrapper_arg_2,
#line 837 "hlds.goal_form.c"
  MR_Box hlds__goal_form__wrapper_arg_3)
#line 839 "hlds.goal_form.c"
{
#line 841 "hlds.goal_form.c"
  {
#line 843 "hlds.goal_form.c"
    MR_Word hlds__goal_form__conv0_HeadVar__1_1;

#line 846 "hlds.goal_form.c"
    {
#line 848 "hlds.goal_form.c"
      hlds__goal_form____Compare____goal_throw_status_0_0(&hlds__goal_form__conv0_HeadVar__1_1, ((MR_Word) hlds__goal_form__wrapper_arg_2), ((MR_Word) hlds__goal_form__wrapper_arg_3));
    }
#line 851 "hlds.goal_form.c"
    *hlds__goal_form__wrapper_arg_1 = ((MR_Box) (hlds__goal_form__conv0_HeadVar__1_1));
#line 853 "hlds.goal_form.c"
  }
#line 855 "hlds.goal_form.c"
}

#line 858 "hlds.goal_form.c"
static MR_bool MR_CALL 
hlds__goal_form____Unify____has_subgoals_0_0_10001(
#line 861 "hlds.goal_form.c"
  MR_Box hlds__goal_form__wrapper_arg_1,
#line 863 "hlds.goal_form.c"
  MR_Box hlds__goal_form__wrapper_arg_2)
#line 865 "hlds.goal_form.c"
{
#line 867 "hlds.goal_form.c"
  {
#line 869 "hlds.goal_form.c"
    MR_bool hlds__goal_form__succeeded;

#line 872 "hlds.goal_form.c"
    {
#line 874 "hlds.goal_form.c"
      hlds__goal_form__succeeded = hlds__goal_form____Unify____has_subgoals_0_0(((MR_Word) hlds__goal_form__wrapper_arg_1), ((MR_Word) hlds__goal_form__wrapper_arg_2));
    }
#line 877 "hlds.goal_form.c"
    return hlds__goal_form__succeeded;
#line 879 "hlds.goal_form.c"
  }
#line 881 "hlds.goal_form.c"
}

#line 884 "hlds.goal_form.c"
static void MR_CALL 
hlds__goal_form____Compare____has_subgoals_0_0_10001(
#line 887 "hlds.goal_form.c"
  MR_Box * hlds__goal_form__wrapper_arg_1,
#line 889 "hlds.goal_form.c"
  MR_Box hlds__goal_form__wrapper_arg_2,
#line 891 "hlds.goal_form.c"
  MR_Box hlds__goal_form__wrapper_arg_3)
#line 893 "hlds.goal_form.c"
{
#line 895 "hlds.goal_form.c"
  {
#line 897 "hlds.goal_form.c"
    MR_Word hlds__goal_form__conv0_HeadVar__1_1;

#line 900 "hlds.goal_form.c"
    {
#line 902 "hlds.goal_form.c"
      hlds__goal_form____Compare____has_subgoals_0_0(&hlds__goal_form__conv0_HeadVar__1_1, ((MR_Word) hlds__goal_form__wrapper_arg_2), ((MR_Word) hlds__goal_form__wrapper_arg_3));
    }
#line 905 "hlds.goal_form.c"
    *hlds__goal_form__wrapper_arg_1 = ((MR_Box) (hlds__goal_form__conv0_HeadVar__1_1));
#line 907 "hlds.goal_form.c"
  }
#line 909 "hlds.goal_form.c"
}

#line 260 "goal_form.m"
static void MR_CALL 
hlds__goal_form__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_99_97_110_95_116_104_114_111_119_95_50_95_95_91_50_93_95_48_5_p_0(
#line 260 "goal_form.m"
  MR_Word hlds__goal_form__GoalExpr_6,
#line 260 "goal_form.m"
  MR_Word * hlds__goal_form__Result_8,
#line 260 "goal_form.m"
  MR_Word hlds__goal_form__STATE_VARIABLE_ModuleInfo_0_82,
#line 260 "goal_form.m"
  MR_Word * hlds__goal_form__STATE_VARIABLE_ModuleInfo_83)
#line 260 "goal_form.m"
{
#line 272 "goal_form.m"
  {
#line 272 "goal_form.m"
    MR_bool hlds__goal_form__succeeded;

#line 272 "goal_form.m"
#line 272 "goal_form.m"
    switch (MR_tag((MR_Word) hlds__goal_form__GoalExpr_6)) {
#line 272 "goal_form.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 272 "goal_form.m"
      case (MR_Integer) 0:
#line 309 "goal_form.m"
        {
#line 309 "goal_form.m"
          MR_Word hlds__goal_form__SubGoal_57 = (MR_Word) MR_body(((MR_Word) hlds__goal_form__GoalExpr_6), (MR_Integer) 0);

#line 310 "goal_form.m"
          {
#line 310 "goal_form.m"
            hlds__goal_form__goal_can_throw_4_p_0(hlds__goal_form__SubGoal_57, hlds__goal_form__Result_8, hlds__goal_form__STATE_VARIABLE_ModuleInfo_0_82, hlds__goal_form__STATE_VARIABLE_ModuleInfo_83);
          }
#line 309 "goal_form.m"
        }
#line 272 "goal_form.m"
        break;
#line 272 "goal_form.m"
      case (MR_Integer) 1:
#line 295 "goal_form.m"
        {
#line 295 "goal_form.m"
          MR_Word hlds__goal_form__Uni_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__GoalExpr_6, (MR_Integer) 3)));
#line 295 "goal_form.m"
          MR_Word hlds__goal_form__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__GoalExpr_6, (MR_Integer) 0)));
#line 295 "goal_form.m"
          MR_Word hlds__goal_form__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__GoalExpr_6, (MR_Integer) 1)));
#line 295 "goal_form.m"
          MR_Word hlds__goal_form__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__GoalExpr_6, (MR_Integer) 2)));
#line 295 "goal_form.m"
          MR_Word hlds__goal_form__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__GoalExpr_6, (MR_Integer) 4)));

#line 300 "goal_form.m"
#line 300 "goal_form.m"
          switch (MR_tag((MR_Word) hlds__goal_form__Uni_35)) {
#line 300 "goal_form.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 300 "goal_form.m"
            case (MR_Integer) 0:
#line 300 "goal_form.m"
            case (MR_Integer) 1:
#line 300 "goal_form.m"
            case (MR_Integer) 2:
#line 306 "goal_form.m"
              *hlds__goal_form__Result_8 = (MR_Integer) 1;
#line 300 "goal_form.m"
              break;
#line 300 "goal_form.m"
            case (MR_Integer) 3:
#line 300 "goal_form.m"
#line 300 "goal_form.m"
              switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__Uni_35, (MR_Integer) 0)))) {
#line 300 "goal_form.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 300 "goal_form.m"
                case (MR_Integer) 0:
#line 306 "goal_form.m"
                  *hlds__goal_form__Result_8 = (MR_Integer) 1;
#line 300 "goal_form.m"
                  break;
#line 300 "goal_form.m"
                case (MR_Integer) 1:
#line 299 "goal_form.m"
                  *hlds__goal_form__Result_8 = (MR_Integer) 0;
#line 300 "goal_form.m"
                  break;
#line 300 "goal_form.m"
              }
#line 300 "goal_form.m"
              break;
#line 300 "goal_form.m"
          }
#line 295 "goal_form.m"
          *hlds__goal_form__STATE_VARIABLE_ModuleInfo_83 = hlds__goal_form__STATE_VARIABLE_ModuleInfo_0_82;
#line 295 "goal_form.m"
        }
#line 272 "goal_form.m"
        break;
#line 272 "goal_form.m"
      case (MR_Integer) 2:
#line 275 "goal_form.m"
        {
#line 275 "goal_form.m"
          MR_Word hlds__goal_form__PredId_16 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__GoalExpr_6, (MR_Integer) 0)));
#line 275 "goal_form.m"
          MR_Integer hlds__goal_form__ProcId_17 = ((MR_Integer) (MR_hl_field(MR_mktag(2), hlds__goal_form__GoalExpr_6, (MR_Integer) 1)));
#line 275 "goal_form.m"
          MR_Word hlds__goal_form__Status_22;
#line 275 "goal_form.m"
          MR_Word hlds__goal_form__V_92_92;
#line 275 "goal_form.m"
          MR_Word hlds__goal_form__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__GoalExpr_6, (MR_Integer) 2)));
#line 275 "goal_form.m"
          MR_Word hlds__goal_form__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__GoalExpr_6, (MR_Integer) 3)));
#line 275 "goal_form.m"
          MR_Word hlds__goal_form__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__GoalExpr_6, (MR_Integer) 4)));
#line 275 "goal_form.m"
          MR_Word hlds__goal_form__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__GoalExpr_6, (MR_Integer) 5)));

#line 276 "goal_form.m"
          {
#line 276 "goal_form.m"
            hlds__goal_form__V_92_92 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 276 "goal_form.m"
            MR_hl_field(MR_mktag(0), hlds__goal_form__V_92_92, 0) = ((MR_Box) (hlds__goal_form__PredId_16));
#line 276 "goal_form.m"
            MR_hl_field(MR_mktag(0), hlds__goal_form__V_92_92, 1) = ((MR_Box) (hlds__goal_form__ProcId_17));
#line 276 "goal_form.m"
          }
#line 276 "goal_form.m"
          {
#line 276 "goal_form.m"
            transform_hlds__exception_analysis__lookup_exception_analysis_result_4_p_0(hlds__goal_form__V_92_92, &hlds__goal_form__Status_22, hlds__goal_form__STATE_VARIABLE_ModuleInfo_0_82, hlds__goal_form__STATE_VARIABLE_ModuleInfo_83);
          }
#line 281 "goal_form.m"
#line 281 "goal_form.m"
          switch (MR_tag((MR_Word) hlds__goal_form__Status_22)) {
#line 281 "goal_form.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 281 "goal_form.m"
            case (MR_Integer) 0:
#line 281 "goal_form.m"
#line 281 "goal_form.m"
              switch (MR_unmkbody(hlds__goal_form__Status_22)) {
#line 281 "goal_form.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 281 "goal_form.m"
                case (MR_Integer) 0:
#line 280 "goal_form.m"
                  *hlds__goal_form__Result_8 = (MR_Integer) 1;
#line 281 "goal_form.m"
                  break;
#line 281 "goal_form.m"
                case (MR_Integer) 1:
#line 285 "goal_form.m"
                  *hlds__goal_form__Result_8 = (MR_Integer) 0;
#line 281 "goal_form.m"
                  break;
#line 281 "goal_form.m"
              }
#line 281 "goal_form.m"
              break;
#line 281 "goal_form.m"
            case (MR_Integer) 1:
#line 285 "goal_form.m"
              *hlds__goal_form__Result_8 = (MR_Integer) 0;
#line 281 "goal_form.m"
              break;
#line 281 "goal_form.m"
          }
#line 275 "goal_form.m"
        }
#line 272 "goal_form.m"
        break;
#line 272 "goal_form.m"
      case (MR_Integer) 3:
#line 272 "goal_form.m"
#line 272 "goal_form.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_6, (MR_Integer) 0)))) {
#line 272 "goal_form.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 272 "goal_form.m"
          case (MR_Integer) 0:
#line 288 "goal_form.m"
            {
#line 290 "goal_form.m"
              *hlds__goal_form__Result_8 = (MR_Integer) 0;
#line 288 "goal_form.m"
              *hlds__goal_form__STATE_VARIABLE_ModuleInfo_83 = hlds__goal_form__STATE_VARIABLE_ModuleInfo_0_82;
#line 288 "goal_form.m"
            }
#line 272 "goal_form.m"
            break;
#line 272 "goal_form.m"
          case (MR_Integer) 1:
#line 326 "goal_form.m"
            {
#line 326 "goal_form.m"
              MR_Word hlds__goal_form__Attributes_61 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_6, (MR_Integer) 1)));
#line 326 "goal_form.m"
              MR_Word hlds__goal_form__ExceptionStatus_68;
#line 326 "goal_form.m"
              MR_Word hlds__goal_form__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_6, (MR_Integer) 2)));
#line 326 "goal_form.m"
              MR_Integer hlds__goal_form__V_63_63 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_6, (MR_Integer) 3)));
#line 326 "goal_form.m"
              MR_Word hlds__goal_form__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_6, (MR_Integer) 4)));
#line 326 "goal_form.m"
              MR_Word hlds__goal_form__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_6, (MR_Integer) 5)));
#line 326 "goal_form.m"
              MR_Word hlds__goal_form__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_6, (MR_Integer) 6)));
#line 326 "goal_form.m"
              MR_Word hlds__goal_form__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_6, (MR_Integer) 7)));

#line 327 "goal_form.m"
              {
#line 327 "goal_form.m"
                hlds__goal_form__ExceptionStatus_68 = parse_tree__prog_data__get_may_throw_exception_1_f_0(hlds__goal_form__Attributes_61);
              }
#line 331 "goal_form.m"
#line 331 "goal_form.m"
              switch (hlds__goal_form__ExceptionStatus_68) {
#line 331 "goal_form.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 331 "goal_form.m"
                case (MR_Integer) 1:
#line 332 "goal_form.m"
                  {
#line 332 "goal_form.m"
                    MR_Word hlds__goal_form__V_88_88;

#line 333 "goal_form.m"
                    {
#line 333 "goal_form.m"
                      hlds__goal_form__V_88_88 = parse_tree__prog_data__get_may_call_mercury_1_f_0(hlds__goal_form__Attributes_61);
                    }
#line 333 "goal_form.m"
                    hlds__goal_form__succeeded = (hlds__goal_form__V_88_88 == (MR_Integer) 1);
#line 332 "goal_form.m"
                  }
#line 331 "goal_form.m"
                  break;
#line 331 "goal_form.m"
                case (MR_Integer) 0:
#line 330 "goal_form.m"
                  hlds__goal_form__succeeded = MR_TRUE;
#line 331 "goal_form.m"
                  break;
#line 331 "goal_form.m"
              }
#line 328 "goal_form.m"
              if (hlds__goal_form__succeeded)
#line 336 "goal_form.m"
                *hlds__goal_form__Result_8 = (MR_Integer) 1;
#line 328 "goal_form.m"
              else
#line 338 "goal_form.m"
                *hlds__goal_form__Result_8 = (MR_Integer) 0;
#line 326 "goal_form.m"
              *hlds__goal_form__STATE_VARIABLE_ModuleInfo_83 = hlds__goal_form__STATE_VARIABLE_ModuleInfo_0_82;
#line 326 "goal_form.m"
            }
#line 272 "goal_form.m"
            break;
#line 272 "goal_form.m"
          case (MR_Integer) 2:
#line 272 "goal_form.m"
            {
#line 272 "goal_form.m"
              MR_Word hlds__goal_form__Goals_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_6, (MR_Integer) 2)));
#line 266 "goal_form.m"
              MR_Word hlds__goal_form__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_6, (MR_Integer) 1)));

#line 273 "goal_form.m"
              {
#line 273 "goal_form.m"
                hlds__goal_form__goals_can_throw_4_p_0(hlds__goal_form__Goals_11, hlds__goal_form__Result_8, hlds__goal_form__STATE_VARIABLE_ModuleInfo_0_82, hlds__goal_form__STATE_VARIABLE_ModuleInfo_83);
              }
#line 272 "goal_form.m"
            }
#line 272 "goal_form.m"
            break;
#line 272 "goal_form.m"
          case (MR_Integer) 3:
#line 272 "goal_form.m"
            {
#line 272 "goal_form.m"
              MR_Word hlds__goal_form__Goals_99 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_6, (MR_Integer) 1)));

#line 273 "goal_form.m"
              {
#line 273 "goal_form.m"
                hlds__goal_form__goals_can_throw_4_p_0(hlds__goal_form__Goals_99, hlds__goal_form__Result_8, hlds__goal_form__STATE_VARIABLE_ModuleInfo_0_82, hlds__goal_form__STATE_VARIABLE_ModuleInfo_83);
              }
#line 272 "goal_form.m"
            }
#line 272 "goal_form.m"
            break;
#line 272 "goal_form.m"
          case (MR_Integer) 4:
#line 292 "goal_form.m"
            {
#line 292 "goal_form.m"
              MR_Word hlds__goal_form__Cases_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_6, (MR_Integer) 3)));
#line 292 "goal_form.m"
              MR_Word hlds__goal_form__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_6, (MR_Integer) 1)));
#line 292 "goal_form.m"
              MR_Word hlds__goal_form__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_6, (MR_Integer) 2)));

#line 293 "goal_form.m"
              {
#line 293 "goal_form.m"
                hlds__goal_form__cases_can_throw_4_p_0(hlds__goal_form__Cases_31, hlds__goal_form__Result_8, hlds__goal_form__STATE_VARIABLE_ModuleInfo_0_82, hlds__goal_form__STATE_VARIABLE_ModuleInfo_83);
              }
#line 292 "goal_form.m"
            }
#line 272 "goal_form.m"
            break;
#line 272 "goal_form.m"
          case (MR_Integer) 5:
#line 312 "goal_form.m"
            {
#line 312 "goal_form.m"
              MR_Word hlds__goal_form__Reason_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_6, (MR_Integer) 1)));
#line 312 "goal_form.m"
              MR_Word hlds__goal_form__SubGoal_98 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_6, (MR_Integer) 2)));
#line 314 "goal_form.m"
              MR_Word hlds__goal_form__FGT_60;
#line 314 "goal_form.m"
              MR_Word hlds__goal_form__V_59_59;

#line 314 "goal_form.m"
              hlds__goal_form__succeeded = ((((MR_tag((MR_Word) hlds__goal_form__Reason_58)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__Reason_58, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 314 "goal_form.m"
              if (hlds__goal_form__succeeded)
#line 314 "goal_form.m"
                {
#line 314 "goal_form.m"
                  hlds__goal_form__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__Reason_58, (MR_Integer) 1)));
#line 314 "goal_form.m"
                  hlds__goal_form__FGT_60 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__Reason_58, (MR_Integer) 2)));
#line 316 "goal_form.m"
#line 316 "goal_form.m"
                  switch (hlds__goal_form__FGT_60) {
#line 316 "goal_form.m"
                    default:
#line 316 "goal_form.m"
                      hlds__goal_form__succeeded = MR_FALSE;
#line 316 "goal_form.m"
                      break;
#line 316 "goal_form.m"
                    case (MR_Integer) 1:
#line 315 "goal_form.m"
                      hlds__goal_form__succeeded = MR_TRUE;
#line 316 "goal_form.m"
                      break;
#line 316 "goal_form.m"
                    case (MR_Integer) 2:
#line 316 "goal_form.m"
                      hlds__goal_form__succeeded = MR_TRUE;
#line 316 "goal_form.m"
                      break;
#line 316 "goal_form.m"
                  }
#line 314 "goal_form.m"
                }
#line 313 "goal_form.m"
              if (hlds__goal_form__succeeded)
#line 321 "goal_form.m"
                {
#line 321 "goal_form.m"
                  *hlds__goal_form__Result_8 = (MR_Integer) 1;
#line 321 "goal_form.m"
                  *hlds__goal_form__STATE_VARIABLE_ModuleInfo_83 = hlds__goal_form__STATE_VARIABLE_ModuleInfo_0_82;
#line 321 "goal_form.m"
                }
#line 313 "goal_form.m"
              else
#line 323 "goal_form.m"
                {
#line 323 "goal_form.m"
                  hlds__goal_form__goal_can_throw_4_p_0(hlds__goal_form__SubGoal_98, hlds__goal_form__Result_8, hlds__goal_form__STATE_VARIABLE_ModuleInfo_0_82, hlds__goal_form__STATE_VARIABLE_ModuleInfo_83);
                }
#line 312 "goal_form.m"
            }
#line 272 "goal_form.m"
            break;
#line 272 "goal_form.m"
          case (MR_Integer) 6:
#line 272 "goal_form.m"
            {
#line 272 "goal_form.m"
              MR_Word hlds__goal_form__CondGoal_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_6, (MR_Integer) 2)));
#line 272 "goal_form.m"
              MR_Word hlds__goal_form__ThenGoal_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_6, (MR_Integer) 3)));
#line 272 "goal_form.m"
              MR_Word hlds__goal_form__ElseGoal_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_6, (MR_Integer) 4)));
#line 272 "goal_form.m"
              MR_Word hlds__goal_form__V_94_94;
#line 272 "goal_form.m"
              MR_Word hlds__goal_form__V_95_95;
#line 272 "goal_form.m"
              MR_Word hlds__goal_form__Goals_100;
#line 270 "goal_form.m"
              MR_Word hlds__goal_form__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_6, (MR_Integer) 1)));

#line 271 "goal_form.m"
              {
#line 271 "goal_form.m"
                hlds__goal_form__V_95_95 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 271 "goal_form.m"
                MR_hl_field(MR_mktag(1), hlds__goal_form__V_95_95, 0) = ((MR_Box) (hlds__goal_form__ElseGoal_15));
#line 271 "goal_form.m"
                MR_hl_field(MR_mktag(1), hlds__goal_form__V_95_95, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 271 "goal_form.m"
              }
#line 271 "goal_form.m"
              {
#line 271 "goal_form.m"
                hlds__goal_form__V_94_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 271 "goal_form.m"
                MR_hl_field(MR_mktag(1), hlds__goal_form__V_94_94, 0) = ((MR_Box) (hlds__goal_form__ThenGoal_14));
#line 271 "goal_form.m"
                MR_hl_field(MR_mktag(1), hlds__goal_form__V_94_94, 1) = ((MR_Box) (hlds__goal_form__V_95_95));
#line 271 "goal_form.m"
              }
#line 271 "goal_form.m"
              {
#line 271 "goal_form.m"
                hlds__goal_form__Goals_100 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 271 "goal_form.m"
                MR_hl_field(MR_mktag(1), hlds__goal_form__Goals_100, 0) = ((MR_Box) (hlds__goal_form__CondGoal_13));
#line 271 "goal_form.m"
                MR_hl_field(MR_mktag(1), hlds__goal_form__Goals_100, 1) = ((MR_Box) (hlds__goal_form__V_94_94));
#line 271 "goal_form.m"
              }
#line 273 "goal_form.m"
              {
#line 273 "goal_form.m"
                hlds__goal_form__goals_can_throw_4_p_0(hlds__goal_form__Goals_100, hlds__goal_form__Result_8, hlds__goal_form__STATE_VARIABLE_ModuleInfo_0_82, hlds__goal_form__STATE_VARIABLE_ModuleInfo_83);
              }
#line 272 "goal_form.m"
            }
#line 272 "goal_form.m"
            break;
#line 272 "goal_form.m"
          case (MR_Integer) 7:
#line 341 "goal_form.m"
            {
#line 341 "goal_form.m"
              MR_Word hlds__goal_form__ShortHand_69 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_6, (MR_Integer) 1)));

#line 345 "goal_form.m"
#line 345 "goal_form.m"
              switch (MR_tag((MR_Word) hlds__goal_form__ShortHand_69)) {
#line 345 "goal_form.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 345 "goal_form.m"
                case (MR_Integer) 0:
#line 343 "goal_form.m"
                  {
#line 343 "goal_form.m"
                    MR_Word hlds__goal_form__GoalA_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__ShortHand_69, (MR_Integer) 0)));
#line 343 "goal_form.m"
                    MR_Word hlds__goal_form__GoalB_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__ShortHand_69, (MR_Integer) 1)));
#line 343 "goal_form.m"
                    MR_Word hlds__goal_form__V_84_84;
#line 343 "goal_form.m"
                    MR_Word hlds__goal_form__V_86_86;

#line 344 "goal_form.m"
                    {
#line 344 "goal_form.m"
                      hlds__goal_form__V_86_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 344 "goal_form.m"
                      MR_hl_field(MR_mktag(1), hlds__goal_form__V_86_86, 0) = ((MR_Box) (hlds__goal_form__GoalB_71));
#line 344 "goal_form.m"
                      MR_hl_field(MR_mktag(1), hlds__goal_form__V_86_86, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 344 "goal_form.m"
                    }
#line 344 "goal_form.m"
                    {
#line 344 "goal_form.m"
                      hlds__goal_form__V_84_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 344 "goal_form.m"
                      MR_hl_field(MR_mktag(1), hlds__goal_form__V_84_84, 0) = ((MR_Box) (hlds__goal_form__GoalA_70));
#line 344 "goal_form.m"
                      MR_hl_field(MR_mktag(1), hlds__goal_form__V_84_84, 1) = ((MR_Box) (hlds__goal_form__V_86_86));
#line 344 "goal_form.m"
                    }
#line 344 "goal_form.m"
                    {
#line 344 "goal_form.m"
                      hlds__goal_form__goals_can_throw_4_p_0(hlds__goal_form__V_84_84, hlds__goal_form__Result_8, hlds__goal_form__STATE_VARIABLE_ModuleInfo_0_82, hlds__goal_form__STATE_VARIABLE_ModuleInfo_83);
                    }
#line 343 "goal_form.m"
                  }
#line 345 "goal_form.m"
                  break;
#line 345 "goal_form.m"
                case (MR_Integer) 1:
#line 346 "goal_form.m"
                  {
#line 350 "goal_form.m"
                    *hlds__goal_form__Result_8 = (MR_Integer) 0;
#line 346 "goal_form.m"
                    *hlds__goal_form__STATE_VARIABLE_ModuleInfo_83 = hlds__goal_form__STATE_VARIABLE_ModuleInfo_0_82;
#line 346 "goal_form.m"
                  }
#line 345 "goal_form.m"
                  break;
#line 345 "goal_form.m"
                case (MR_Integer) 2:
#line 352 "goal_form.m"
                  {
#line 353 "goal_form.m"
                    *hlds__goal_form__Result_8 = (MR_Integer) 0;
#line 352 "goal_form.m"
                    *hlds__goal_form__STATE_VARIABLE_ModuleInfo_83 = hlds__goal_form__STATE_VARIABLE_ModuleInfo_0_82;
#line 352 "goal_form.m"
                  }
#line 345 "goal_form.m"
                  break;
#line 345 "goal_form.m"
              }
#line 341 "goal_form.m"
            }
#line 272 "goal_form.m"
            break;
#line 272 "goal_form.m"
        }
#line 272 "goal_form.m"
        break;
#line 272 "goal_form.m"
    }
#line 272 "goal_form.m"
  }
#line 260 "goal_form.m"
}

#line 186 "goal_form.m"
void MR_CALL 
hlds__goal_form____Compare____has_subgoals_0_0(
#line 186 "goal_form.m"
  MR_Word * hlds__goal_form__HeadVar__1_1,
#line 186 "goal_form.m"
  MR_Word hlds__goal_form__HeadVar__2_2,
#line 186 "goal_form.m"
  MR_Word hlds__goal_form__HeadVar__3_3)
#line 186 "goal_form.m"
{
#line 186 "goal_form.m"
  {
#line 186 "goal_form.m"
    MR_bool hlds__goal_form__succeeded;
#line 186 "goal_form.m"
    MR_Integer hlds__goal_form__Cast_HeadVar1_4 = (MR_Integer) hlds__goal_form__HeadVar__2_2;
#line 186 "goal_form.m"
    MR_Integer hlds__goal_form__Cast_HeadVar2_5 = (MR_Integer) hlds__goal_form__HeadVar__3_3;

#line 186 "goal_form.m"
    {
#line 186 "goal_form.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(hlds__goal_form__HeadVar__1_1, hlds__goal_form__Cast_HeadVar1_4, hlds__goal_form__Cast_HeadVar2_5);
    }
#line 186 "goal_form.m"
  }
#line 186 "goal_form.m"
}

#line 186 "goal_form.m"
MR_bool MR_CALL 
hlds__goal_form____Unify____has_subgoals_0_0(
#line 186 "goal_form.m"
  MR_Word hlds__goal_form__HeadVar__2_1,
#line 186 "goal_form.m"
  MR_Word hlds__goal_form__HeadVar__2_2)
#line 186 "goal_form.m"
{
#line 1493 "hlds.goal_form.c"
  {
#line 1495 "hlds.goal_form.c"
    MR_bool hlds__goal_form__succeeded = (hlds__goal_form__HeadVar__2_1 == hlds__goal_form__HeadVar__2_2);

#line 1498 "hlds.goal_form.c"
    return hlds__goal_form__succeeded;
#line 1500 "hlds.goal_form.c"
  }
#line 186 "goal_form.m"
}

#line 53 "goal_form.m"
void MR_CALL 
hlds__goal_form____Compare____goal_throw_status_0_0(
#line 53 "goal_form.m"
  MR_Word * hlds__goal_form__HeadVar__1_1,
#line 53 "goal_form.m"
  MR_Word hlds__goal_form__HeadVar__2_2,
#line 53 "goal_form.m"
  MR_Word hlds__goal_form__HeadVar__3_3)
#line 53 "goal_form.m"
{
#line 53 "goal_form.m"
  {
#line 53 "goal_form.m"
    MR_bool hlds__goal_form__succeeded;
#line 53 "goal_form.m"
    MR_Integer hlds__goal_form__Cast_HeadVar1_4 = (MR_Integer) hlds__goal_form__HeadVar__2_2;
#line 53 "goal_form.m"
    MR_Integer hlds__goal_form__Cast_HeadVar2_5 = (MR_Integer) hlds__goal_form__HeadVar__3_3;

#line 53 "goal_form.m"
    {
#line 53 "goal_form.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(hlds__goal_form__HeadVar__1_1, hlds__goal_form__Cast_HeadVar1_4, hlds__goal_form__Cast_HeadVar2_5);
    }
#line 53 "goal_form.m"
  }
#line 53 "goal_form.m"
}

#line 53 "goal_form.m"
MR_bool MR_CALL 
hlds__goal_form____Unify____goal_throw_status_0_0(
#line 53 "goal_form.m"
  MR_Word hlds__goal_form__HeadVar__2_1,
#line 53 "goal_form.m"
  MR_Word hlds__goal_form__HeadVar__2_2)
#line 53 "goal_form.m"
{
#line 1544 "hlds.goal_form.c"
  {
#line 1546 "hlds.goal_form.c"
    MR_bool hlds__goal_form__succeeded = (hlds__goal_form__HeadVar__2_1 == hlds__goal_form__HeadVar__2_2);

#line 1549 "hlds.goal_form.c"
    return hlds__goal_form__succeeded;
#line 1551 "hlds.goal_form.c"
  }
#line 53 "goal_form.m"
}

#line 47 "goal_form.m"
void MR_CALL 
hlds__goal_form____Compare____goal_loop_status_0_0(
#line 47 "goal_form.m"
  MR_Word * hlds__goal_form__HeadVar__1_1,
#line 47 "goal_form.m"
  MR_Word hlds__goal_form__HeadVar__2_2,
#line 47 "goal_form.m"
  MR_Word hlds__goal_form__HeadVar__3_3)
#line 47 "goal_form.m"
{
#line 47 "goal_form.m"
  {
#line 47 "goal_form.m"
    MR_bool hlds__goal_form__succeeded;
#line 47 "goal_form.m"
    MR_Integer hlds__goal_form__Cast_HeadVar1_4 = (MR_Integer) hlds__goal_form__HeadVar__2_2;
#line 47 "goal_form.m"
    MR_Integer hlds__goal_form__Cast_HeadVar2_5 = (MR_Integer) hlds__goal_form__HeadVar__3_3;

#line 47 "goal_form.m"
    {
#line 47 "goal_form.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(hlds__goal_form__HeadVar__1_1, hlds__goal_form__Cast_HeadVar1_4, hlds__goal_form__Cast_HeadVar2_5);
    }
#line 47 "goal_form.m"
  }
#line 47 "goal_form.m"
}

#line 47 "goal_form.m"
MR_bool MR_CALL 
hlds__goal_form____Unify____goal_loop_status_0_0(
#line 47 "goal_form.m"
  MR_Word hlds__goal_form__HeadVar__2_1,
#line 47 "goal_form.m"
  MR_Word hlds__goal_form__HeadVar__2_2)
#line 47 "goal_form.m"
{
#line 1595 "hlds.goal_form.c"
  {
#line 1597 "hlds.goal_form.c"
    MR_bool hlds__goal_form__succeeded = (hlds__goal_form__HeadVar__2_1 == hlds__goal_form__HeadVar__2_2);

#line 1600 "hlds.goal_form.c"
    return hlds__goal_form__succeeded;
#line 1602 "hlds.goal_form.c"
  }
#line 47 "goal_form.m"
}

#line 59 "goal_form.m"
void MR_CALL 
hlds__goal_form____Compare____goal_loop_or_throw_status_0_0(
#line 59 "goal_form.m"
  MR_Word * hlds__goal_form__HeadVar__1_1,
#line 59 "goal_form.m"
  MR_Word hlds__goal_form__HeadVar__2_2,
#line 59 "goal_form.m"
  MR_Word hlds__goal_form__HeadVar__3_3)
#line 59 "goal_form.m"
{
#line 59 "goal_form.m"
  {
#line 59 "goal_form.m"
    MR_bool hlds__goal_form__succeeded;
#line 59 "goal_form.m"
    MR_Integer hlds__goal_form__Cast_HeadVar1_4 = (MR_Integer) hlds__goal_form__HeadVar__2_2;
#line 59 "goal_form.m"
    MR_Integer hlds__goal_form__Cast_HeadVar2_5 = (MR_Integer) hlds__goal_form__HeadVar__3_3;

#line 59 "goal_form.m"
    {
#line 59 "goal_form.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(hlds__goal_form__HeadVar__1_1, hlds__goal_form__Cast_HeadVar1_4, hlds__goal_form__Cast_HeadVar2_5);
    }
#line 59 "goal_form.m"
  }
#line 59 "goal_form.m"
}

#line 59 "goal_form.m"
MR_bool MR_CALL 
hlds__goal_form____Unify____goal_loop_or_throw_status_0_0(
#line 59 "goal_form.m"
  MR_Word hlds__goal_form__HeadVar__2_1,
#line 59 "goal_form.m"
  MR_Word hlds__goal_form__HeadVar__2_2)
#line 59 "goal_form.m"
{
#line 1646 "hlds.goal_form.c"
  {
#line 1648 "hlds.goal_form.c"
    MR_bool hlds__goal_form__succeeded = (hlds__goal_form__HeadVar__2_1 == hlds__goal_form__HeadVar__2_2);

#line 1651 "hlds.goal_form.c"
    return hlds__goal_form__succeeded;
#line 1653 "hlds.goal_form.c"
  }
#line 59 "goal_form.m"
}

#line 1166 "goal_form.m"
static MR_Word MR_CALL 
hlds__goal_form__case_list_has_foreign_1_f_0(
#line 1166 "goal_form.m"
  MR_Word hlds__goal_form__HeadVar__1_1)
#line 1166 "goal_form.m"
{
#line 1168 "goal_form.m"
  while (MR_TRUE)
#line 1168 "goal_form.m"
    {
#line 1168 "goal_form.m"
      /* tailcall optimized into a loop */
#line 1168 "goal_form.m"
      {
#line 1168 "goal_form.m"
        MR_bool hlds__goal_form__succeeded;
#line 1168 "goal_form.m"
        MR_Word hlds__goal_form__HeadVar__2_2;

#line 1168 "goal_form.m"
        if ((hlds__goal_form__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1168 "goal_form.m"
          hlds__goal_form__HeadVar__2_2 = (MR_Integer) 0;
#line 1168 "goal_form.m"
        else
#line 1169 "goal_form.m"
          {
#line 1169 "goal_form.m"
            MR_Word hlds__goal_form__Case_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__HeadVar__1_1, (MR_Integer) 0)));
#line 1169 "goal_form.m"
            MR_Word hlds__goal_form__Cases_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__HeadVar__1_1, (MR_Integer) 1)));
#line 1169 "goal_form.m"
            MR_Word hlds__goal_form__Goal_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Case_3, (MR_Integer) 2)));
#line 1170 "goal_form.m"
            MR_Word hlds__goal_form__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Case_3, (MR_Integer) 0)));
#line 1170 "goal_form.m"
            MR_Word hlds__goal_form__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Case_3, (MR_Integer) 1)));
#line 1171 "goal_form.m"
            MR_Word hlds__goal_form__V_9_9;

#line 1171 "goal_form.m"
            {
#line 1171 "goal_form.m"
              hlds__goal_form__V_9_9 = hlds__goal_form__goal_has_foreign_1_f_0(hlds__goal_form__Goal_8);
            }
#line 1171 "goal_form.m"
            hlds__goal_form__succeeded = (hlds__goal_form__V_9_9 == (MR_Integer) 1);
#line 1171 "goal_form.m"
            if (hlds__goal_form__succeeded)
#line 1172 "goal_form.m"
              hlds__goal_form__HeadVar__2_2 = (MR_Integer) 1;
#line 1171 "goal_form.m"
            else
#line 1174 "goal_form.m"
              {
#line 1174 "goal_form.m"
                /* direct tailcall eliminated */
#line 1174 "goal_form.m"
                {
#line 1174 "goal_form.m"
                  MR_Word hlds__goal_form__HeadVar__1__tmp_copy_1 = hlds__goal_form__Cases_4;

#line 1174 "goal_form.m"
                  hlds__goal_form__HeadVar__1_1 = hlds__goal_form__HeadVar__1__tmp_copy_1;
#line 1174 "goal_form.m"
                }
#line 1174 "goal_form.m"
                continue;
#line 1174 "goal_form.m"
              }
#line 1169 "goal_form.m"
          }
#line 1168 "goal_form.m"
        return hlds__goal_form__HeadVar__2_2;
#line 1168 "goal_form.m"
      }
#line 1168 "goal_form.m"
      break;
#line 1168 "goal_form.m"
    }
#line 1166 "goal_form.m"
}

#line 1156 "goal_form.m"
static MR_Word MR_CALL 
hlds__goal_form__goal_list_has_foreign_1_f_0(
#line 1156 "goal_form.m"
  MR_Word hlds__goal_form__HeadVar__1_1)
#line 1156 "goal_form.m"
{
#line 1158 "goal_form.m"
  while (MR_TRUE)
#line 1158 "goal_form.m"
    {
#line 1158 "goal_form.m"
      /* tailcall optimized into a loop */
#line 1158 "goal_form.m"
      {
#line 1158 "goal_form.m"
        MR_bool hlds__goal_form__succeeded;
#line 1158 "goal_form.m"
        MR_Word hlds__goal_form__HeadVar__2_2;

#line 1158 "goal_form.m"
        if ((hlds__goal_form__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1158 "goal_form.m"
          hlds__goal_form__HeadVar__2_2 = (MR_Integer) 0;
#line 1158 "goal_form.m"
        else
#line 1159 "goal_form.m"
          {
#line 1159 "goal_form.m"
            MR_Word hlds__goal_form__Goal_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__HeadVar__1_1, (MR_Integer) 0)));
#line 1159 "goal_form.m"
            MR_Word hlds__goal_form__Goals_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__HeadVar__1_1, (MR_Integer) 1)));
#line 1160 "goal_form.m"
            MR_Word hlds__goal_form__V_6_6;

#line 1160 "goal_form.m"
            {
#line 1160 "goal_form.m"
              hlds__goal_form__V_6_6 = hlds__goal_form__goal_has_foreign_1_f_0(hlds__goal_form__Goal_3);
            }
#line 1160 "goal_form.m"
            hlds__goal_form__succeeded = (hlds__goal_form__V_6_6 == (MR_Integer) 1);
#line 1160 "goal_form.m"
            if (hlds__goal_form__succeeded)
#line 1161 "goal_form.m"
              hlds__goal_form__HeadVar__2_2 = (MR_Integer) 1;
#line 1160 "goal_form.m"
            else
#line 1163 "goal_form.m"
              {
#line 1163 "goal_form.m"
                /* direct tailcall eliminated */
#line 1163 "goal_form.m"
                {
#line 1163 "goal_form.m"
                  MR_Word hlds__goal_form__HeadVar__1__tmp_copy_1 = hlds__goal_form__Goals_4;

#line 1163 "goal_form.m"
                  hlds__goal_form__HeadVar__1_1 = hlds__goal_form__HeadVar__1__tmp_copy_1;
#line 1163 "goal_form.m"
                }
#line 1163 "goal_form.m"
                continue;
#line 1163 "goal_form.m"
              }
#line 1159 "goal_form.m"
          }
#line 1158 "goal_form.m"
        return hlds__goal_form__HeadVar__2_2;
#line 1158 "goal_form.m"
      }
#line 1158 "goal_form.m"
      break;
#line 1158 "goal_form.m"
    }
#line 1156 "goal_form.m"
}

#line 1060 "goal_form.m"
static void MR_CALL 
hlds__goal_form__count_recursive_calls_cases_5_p_0(
#line 1060 "goal_form.m"
  MR_Word hlds__goal_form__HeadVar__1_1,
#line 1060 "goal_form.m"
  MR_Word hlds__goal_form__PredId_2,
#line 1060 "goal_form.m"
  MR_Integer hlds__goal_form__ProcId_3,
#line 1060 "goal_form.m"
  MR_Integer * hlds__goal_form__Min_4,
#line 1060 "goal_form.m"
  MR_Integer * hlds__goal_form__Max_5)
#line 1060 "goal_form.m"
{
#line 1063 "goal_form.m"
  {
#line 1063 "goal_form.m"
    MR_bool hlds__goal_form__succeeded;

#line 1063 "goal_form.m"
    if ((hlds__goal_form__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1063 "goal_form.m"
      {
#line 1064 "goal_form.m"
        {
#line 1064 "goal_form.m"
          mercury__require__unexpected_3_p_0((MR_String) "hlds.goal_form", (MR_String) "predicate \140hlds.goal_form.count_recursive_calls_cases\'/5", (MR_String) "[]");
#line 1064 "goal_form.m"
          return;
        }
#line 1063 "goal_form.m"
      }
#line 1063 "goal_form.m"
    else
#line 1066 "goal_form.m"
      {
#line 1066 "goal_form.m"
        MR_Word hlds__goal_form__Goal_15;
#line 1066 "goal_form.m"
        MR_Word hlds__goal_form__Cases_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__HeadVar__1_1, (MR_Integer) 1)));
#line 1066 "goal_form.m"
        MR_Word hlds__goal_form__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__HeadVar__1_1, (MR_Integer) 0)));
#line 1065 "goal_form.m"
        MR_Word hlds__goal_form__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__V_27_27, (MR_Integer) 0)));
#line 1065 "goal_form.m"
        MR_Word hlds__goal_form__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__V_27_27, (MR_Integer) 1)));

#line 1065 "goal_form.m"
        hlds__goal_form__Goal_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__V_27_27, (MR_Integer) 2)));
#line 1070 "goal_form.m"
        if ((hlds__goal_form__Cases_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1069 "goal_form.m"
          {
#line 1069 "goal_form.m"
            hlds__goal_form__count_recursive_calls_5_p_0(hlds__goal_form__Goal_15, hlds__goal_form__PredId_2, hlds__goal_form__ProcId_3, hlds__goal_form__Min_4, hlds__goal_form__Max_5);
          }
#line 1070 "goal_form.m"
        else
#line 1071 "goal_form.m"
          {
#line 1071 "goal_form.m"
            MR_Integer hlds__goal_form__Min0_23;
#line 1071 "goal_form.m"
            MR_Integer hlds__goal_form__Max0_24;
#line 1071 "goal_form.m"
            MR_Integer hlds__goal_form__Min1_25;
#line 1071 "goal_form.m"
            MR_Integer hlds__goal_form__Max1_26;
#line 1071 "goal_form.m"
            MR_Word hlds__goal_form__Goal_37;
#line 1071 "goal_form.m"
            MR_Word hlds__goal_form__Cases_38;
#line 1071 "goal_form.m"
            MR_Word hlds__goal_form__V_49_49;
#line 1065 "goal_form.m"
            MR_Word hlds__goal_form__V_35_35;
#line 1065 "goal_form.m"
            MR_Word hlds__goal_form__V_36_36;

#line 1072 "goal_form.m"
            {
#line 1072 "goal_form.m"
              hlds__goal_form__count_recursive_calls_5_p_0(hlds__goal_form__Goal_15, hlds__goal_form__PredId_2, hlds__goal_form__ProcId_3, &hlds__goal_form__Min0_23, &hlds__goal_form__Max0_24);
            }
#line 1065 "goal_form.m"
            hlds__goal_form__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__Cases_16, (MR_Integer) 0)));
#line 1065 "goal_form.m"
            hlds__goal_form__Cases_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__Cases_16, (MR_Integer) 1)));
#line 1065 "goal_form.m"
            hlds__goal_form__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__V_49_49, (MR_Integer) 0)));
#line 1065 "goal_form.m"
            hlds__goal_form__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__V_49_49, (MR_Integer) 1)));
#line 1065 "goal_form.m"
            hlds__goal_form__Goal_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__V_49_49, (MR_Integer) 2)));
#line 1070 "goal_form.m"
            if ((hlds__goal_form__Cases_38 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1069 "goal_form.m"
              {
#line 1069 "goal_form.m"
                hlds__goal_form__count_recursive_calls_5_p_0(hlds__goal_form__Goal_37, hlds__goal_form__PredId_2, hlds__goal_form__ProcId_3, &hlds__goal_form__Min1_25, &hlds__goal_form__Max1_26);
              }
#line 1070 "goal_form.m"
            else
#line 1071 "goal_form.m"
              {
#line 1071 "goal_form.m"
                MR_Integer hlds__goal_form__Min0_45;
#line 1071 "goal_form.m"
                MR_Integer hlds__goal_form__Max0_46;
#line 1071 "goal_form.m"
                MR_Integer hlds__goal_form__Min1_47;
#line 1071 "goal_form.m"
                MR_Integer hlds__goal_form__Max1_48;

#line 1072 "goal_form.m"
                {
#line 1072 "goal_form.m"
                  hlds__goal_form__count_recursive_calls_5_p_0(hlds__goal_form__Goal_37, hlds__goal_form__PredId_2, hlds__goal_form__ProcId_3, &hlds__goal_form__Min0_45, &hlds__goal_form__Max0_46);
                }
#line 1073 "goal_form.m"
                {
#line 1073 "goal_form.m"
                  hlds__goal_form__count_recursive_calls_cases_5_p_0(hlds__goal_form__Cases_38, hlds__goal_form__PredId_2, hlds__goal_form__ProcId_3, &hlds__goal_form__Min1_47, &hlds__goal_form__Max1_48);
                }
#line 1074 "goal_form.m"
                {
#line 1074 "goal_form.m"
                  mercury__int__min_3_p_0(hlds__goal_form__Min0_45, hlds__goal_form__Min1_47, &hlds__goal_form__Min1_25);
                }
#line 1075 "goal_form.m"
                {
#line 1075 "goal_form.m"
                  mercury__int__max_3_p_0(hlds__goal_form__Max0_46, hlds__goal_form__Max1_48, &hlds__goal_form__Max1_26);
                }
#line 1071 "goal_form.m"
              }
#line 1074 "goal_form.m"
            {
#line 1074 "goal_form.m"
              mercury__int__min_3_p_0(hlds__goal_form__Min0_23, hlds__goal_form__Min1_25, hlds__goal_form__Min_4);
            }
#line 1075 "goal_form.m"
            {
#line 1075 "goal_form.m"
              mercury__int__max_3_p_0(hlds__goal_form__Max0_24, hlds__goal_form__Max1_26, hlds__goal_form__Max_5);
            }
#line 1071 "goal_form.m"
          }
#line 1066 "goal_form.m"
      }
#line 1063 "goal_form.m"
  }
#line 1060 "goal_form.m"
}

#line 1044 "goal_form.m"
static void MR_CALL 
hlds__goal_form__count_recursive_calls_disj_5_p_0(
#line 1044 "goal_form.m"
  MR_Word hlds__goal_form__HeadVar__1_1,
#line 1044 "goal_form.m"
  MR_Word hlds__goal_form__PredId_2,
#line 1044 "goal_form.m"
  MR_Integer hlds__goal_form__ProcId_3,
#line 1044 "goal_form.m"
  MR_Integer * hlds__goal_form__HeadVar__4_4,
#line 1044 "goal_form.m"
  MR_Integer * hlds__goal_form__HeadVar__5_5)
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
#line 1047 "goal_form.m"
        *hlds__goal_form__HeadVar__4_4 = (MR_Integer) 0;
#line 1047 "goal_form.m"
        *hlds__goal_form__HeadVar__5_5 = (MR_Integer) 0;
#line 1047 "goal_form.m"
      }
#line 1047 "goal_form.m"
    else
#line 1048 "goal_form.m"
      {
#line 1048 "goal_form.m"
        MR_Word hlds__goal_form__Goal_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__HeadVar__1_1, (MR_Integer) 0)));
#line 1048 "goal_form.m"
        MR_Word hlds__goal_form__Goals_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__HeadVar__1_1, (MR_Integer) 1)));

#line 1052 "goal_form.m"
        if ((hlds__goal_form__Goals_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1051 "goal_form.m"
          {
#line 1051 "goal_form.m"
            hlds__goal_form__count_recursive_calls_5_p_0(hlds__goal_form__Goal_8, hlds__goal_form__PredId_2, hlds__goal_form__ProcId_3, hlds__goal_form__HeadVar__4_4, hlds__goal_form__HeadVar__5_5);
          }
#line 1052 "goal_form.m"
        else
#line 1053 "goal_form.m"
          {
#line 1053 "goal_form.m"
            MR_Integer hlds__goal_form__Min0_16;
#line 1053 "goal_form.m"
            MR_Integer hlds__goal_form__Max0_17;
#line 1053 "goal_form.m"
            MR_Integer hlds__goal_form__Min1_18;
#line 1053 "goal_form.m"
            MR_Integer hlds__goal_form__Max1_19;
#line 1053 "goal_form.m"
            MR_Word hlds__goal_form__Goal_22;
#line 1053 "goal_form.m"
            MR_Word hlds__goal_form__Goals_23;

#line 1054 "goal_form.m"
            {
#line 1054 "goal_form.m"
              hlds__goal_form__count_recursive_calls_5_p_0(hlds__goal_form__Goal_8, hlds__goal_form__PredId_2, hlds__goal_form__ProcId_3, &hlds__goal_form__Min0_16, &hlds__goal_form__Max0_17);
            }
#line 1048 "goal_form.m"
            hlds__goal_form__Goal_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__Goals_9, (MR_Integer) 0)));
#line 1048 "goal_form.m"
            hlds__goal_form__Goals_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__Goals_9, (MR_Integer) 1)));
#line 1052 "goal_form.m"
            if ((hlds__goal_form__Goals_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1051 "goal_form.m"
              {
#line 1051 "goal_form.m"
                hlds__goal_form__count_recursive_calls_5_p_0(hlds__goal_form__Goal_22, hlds__goal_form__PredId_2, hlds__goal_form__ProcId_3, &hlds__goal_form__Min1_18, &hlds__goal_form__Max1_19);
              }
#line 1052 "goal_form.m"
            else
#line 1053 "goal_form.m"
              {
#line 1053 "goal_form.m"
                MR_Integer hlds__goal_form__Min0_30;
#line 1053 "goal_form.m"
                MR_Integer hlds__goal_form__Max0_31;
#line 1053 "goal_form.m"
                MR_Integer hlds__goal_form__Min1_32;
#line 1053 "goal_form.m"
                MR_Integer hlds__goal_form__Max1_33;

#line 1054 "goal_form.m"
                {
#line 1054 "goal_form.m"
                  hlds__goal_form__count_recursive_calls_5_p_0(hlds__goal_form__Goal_22, hlds__goal_form__PredId_2, hlds__goal_form__ProcId_3, &hlds__goal_form__Min0_30, &hlds__goal_form__Max0_31);
                }
#line 1055 "goal_form.m"
                {
#line 1055 "goal_form.m"
                  hlds__goal_form__count_recursive_calls_disj_5_p_0(hlds__goal_form__Goals_23, hlds__goal_form__PredId_2, hlds__goal_form__ProcId_3, &hlds__goal_form__Min1_32, &hlds__goal_form__Max1_33);
                }
#line 1056 "goal_form.m"
                {
#line 1056 "goal_form.m"
                  mercury__int__min_3_p_0(hlds__goal_form__Min0_30, hlds__goal_form__Min1_32, &hlds__goal_form__Min1_18);
                }
#line 1057 "goal_form.m"
                {
#line 1057 "goal_form.m"
                  mercury__int__max_3_p_0(hlds__goal_form__Max0_31, hlds__goal_form__Max1_33, &hlds__goal_form__Max1_19);
                }
#line 1053 "goal_form.m"
              }
#line 1056 "goal_form.m"
            {
#line 1056 "goal_form.m"
              mercury__int__min_3_p_0(hlds__goal_form__Min0_16, hlds__goal_form__Min1_18, hlds__goal_form__HeadVar__4_4);
            }
#line 1057 "goal_form.m"
            {
#line 1057 "goal_form.m"
              mercury__int__max_3_p_0(hlds__goal_form__Max0_17, hlds__goal_form__Max1_19, hlds__goal_form__HeadVar__5_5);
            }
#line 1053 "goal_form.m"
          }
#line 1048 "goal_form.m"
      }
#line 1047 "goal_form.m"
  }
#line 1044 "goal_form.m"
}

#line 1032 "goal_form.m"
static void MR_CALL 
hlds__goal_form__count_recursive_calls_conj_7_p_0(
#line 1032 "goal_form.m"
  MR_Word hlds__goal_form__HeadVar__1_1,
#line 1032 "goal_form.m"
  MR_Word hlds__goal_form__PredId_2,
#line 1032 "goal_form.m"
  MR_Integer hlds__goal_form__ProcId_3,
#line 1032 "goal_form.m"
  MR_Integer hlds__goal_form__HeadVar__4_4,
#line 1032 "goal_form.m"
  MR_Integer hlds__goal_form__HeadVar__5_5,
#line 1032 "goal_form.m"
  MR_Integer * hlds__goal_form__Min_6,
#line 1032 "goal_form.m"
  MR_Integer * hlds__goal_form__Max_7)
#line 1032 "goal_form.m"
{
#line 1035 "goal_form.m"
  while (MR_TRUE)
#line 1035 "goal_form.m"
    {
#line 1035 "goal_form.m"
      /* tailcall optimized into a loop */
#line 1035 "goal_form.m"
      {
#line 1035 "goal_form.m"
        MR_bool hlds__goal_form__succeeded;

#line 1035 "goal_form.m"
        if ((hlds__goal_form__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1035 "goal_form.m"
          {
#line 1035 "goal_form.m"
            *hlds__goal_form__Min_6 = hlds__goal_form__HeadVar__4_4;
#line 1035 "goal_form.m"
            *hlds__goal_form__Max_7 = hlds__goal_form__HeadVar__5_5;
#line 1035 "goal_form.m"
          }
#line 1035 "goal_form.m"
        else
#line 1037 "goal_form.m"
          {
#line 1037 "goal_form.m"
            MR_Word hlds__goal_form__Goal_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__HeadVar__1_1, (MR_Integer) 0)));
#line 1037 "goal_form.m"
            MR_Word hlds__goal_form__Goals_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__HeadVar__1_1, (MR_Integer) 1)));
#line 1037 "goal_form.m"
            MR_Integer hlds__goal_form__Min1_20;
#line 1037 "goal_form.m"
            MR_Integer hlds__goal_form__Max1_21;
#line 1037 "goal_form.m"
            MR_Integer hlds__goal_form__Min2_22;
#line 1037 "goal_form.m"
            MR_Integer hlds__goal_form__Max2_23;

#line 1038 "goal_form.m"
            {
#line 1038 "goal_form.m"
              hlds__goal_form__count_recursive_calls_5_p_0(hlds__goal_form__Goal_12, hlds__goal_form__PredId_2, hlds__goal_form__ProcId_3, &hlds__goal_form__Min1_20, &hlds__goal_form__Max1_21);
            }
#line 1039 "goal_form.m"
            hlds__goal_form__Min2_22 = (hlds__goal_form__HeadVar__4_4 + hlds__goal_form__Min1_20);
#line 1040 "goal_form.m"
            hlds__goal_form__Max2_23 = (hlds__goal_form__HeadVar__5_5 + hlds__goal_form__Max1_21);
#line 1041 "goal_form.m"
            /* direct tailcall eliminated */
#line 1041 "goal_form.m"
            {
#line 1041 "goal_form.m"
              MR_Word hlds__goal_form__HeadVar__1__tmp_copy_1 = hlds__goal_form__Goals_13;
#line 1041 "goal_form.m"
              MR_Integer hlds__goal_form__HeadVar__4__tmp_copy_4 = hlds__goal_form__Min2_22;
#line 1041 "goal_form.m"
              MR_Integer hlds__goal_form__HeadVar__5__tmp_copy_5 = hlds__goal_form__Max2_23;

#line 1041 "goal_form.m"
              hlds__goal_form__HeadVar__5_5 = hlds__goal_form__HeadVar__5__tmp_copy_5;
#line 1041 "goal_form.m"
              hlds__goal_form__HeadVar__4_4 = hlds__goal_form__HeadVar__4__tmp_copy_4;
#line 1041 "goal_form.m"
              hlds__goal_form__HeadVar__1_1 = hlds__goal_form__HeadVar__1__tmp_copy_1;
#line 1041 "goal_form.m"
            }
#line 1041 "goal_form.m"
            continue;
#line 1037 "goal_form.m"
          }
#line 1035 "goal_form.m"
      }
#line 1035 "goal_form.m"
      break;
#line 1035 "goal_form.m"
    }
#line 1032 "goal_form.m"
}

#line 934 "goal_form.m"
static MR_bool MR_CALL 
hlds__goal_form__cannot_fail_before_stack_flush_conj_1_p_0(
#line 934 "goal_form.m"
  MR_Word hlds__goal_form__HeadVar__1_1)
#line 934 "goal_form.m"
{
#line 936 "goal_form.m"
  while (MR_TRUE)
#line 936 "goal_form.m"
    {
#line 936 "goal_form.m"
      /* tailcall optimized into a loop */
#line 936 "goal_form.m"
      {
#line 936 "goal_form.m"
        MR_bool hlds__goal_form__succeeded;

#line 936 "goal_form.m"
        if ((hlds__goal_form__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 936 "goal_form.m"
          hlds__goal_form__succeeded = MR_TRUE;
#line 936 "goal_form.m"
        else
#line 937 "goal_form.m"
          {
#line 937 "goal_form.m"
            MR_Word hlds__goal_form__Goal_2 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__HeadVar__1_1, (MR_Integer) 0)));
#line 937 "goal_form.m"
            MR_Word hlds__goal_form__Goals_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__HeadVar__1_1, (MR_Integer) 1)));
#line 937 "goal_form.m"
            MR_Word hlds__goal_form__GoalExpr_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Goal_2, (MR_Integer) 0)));
#line 937 "goal_form.m"
            MR_Word hlds__goal_form__GoalInfo_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Goal_2, (MR_Integer) 1)));

#line 943 "goal_form.m"
            if (((MR_tag((MR_Word) hlds__goal_form__GoalExpr_4)) == (MR_mktag((MR_Integer) 2))))
#line 941 "goal_form.m"
              {
#line 941 "goal_form.m"
                MR_Word hlds__goal_form__BuiltinState_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__GoalExpr_4, (MR_Integer) 3)));
#line 941 "goal_form.m"
                MR_Word hlds__goal_form__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__GoalExpr_4, (MR_Integer) 0)));
#line 941 "goal_form.m"
                MR_Integer hlds__goal_form__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(2), hlds__goal_form__GoalExpr_4, (MR_Integer) 1)));
#line 941 "goal_form.m"
                MR_Word hlds__goal_form__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__GoalExpr_4, (MR_Integer) 2)));
#line 941 "goal_form.m"
                MR_Word hlds__goal_form__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__GoalExpr_4, (MR_Integer) 4)));
#line 941 "goal_form.m"
                MR_Word hlds__goal_form__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__GoalExpr_4, (MR_Integer) 5)));

#line 942 "goal_form.m"
                hlds__goal_form__succeeded = (hlds__goal_form__BuiltinState_9 == (MR_Integer) 0);
#line 942 "goal_form.m"
                hlds__goal_form__succeeded = !(hlds__goal_form__succeeded);
#line 941 "goal_form.m"
              }
#line 943 "goal_form.m"
            else
#line 943 "goal_form.m"
            if (((((MR_tag((MR_Word) hlds__goal_form__GoalExpr_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_4, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 944 "goal_form.m"
              hlds__goal_form__succeeded = MR_TRUE;
#line 943 "goal_form.m"
            else
#line 943 "goal_form.m"
              hlds__goal_form__succeeded = MR_FALSE;
#line 939 "goal_form.m"
            if (hlds__goal_form__succeeded)
#line 947 "goal_form.m"
              hlds__goal_form__succeeded = MR_TRUE;
#line 939 "goal_form.m"
            else
#line 948 "goal_form.m"
              {
#line 948 "goal_form.m"
                MR_Word hlds__goal_form__Detism_17;
#line 948 "goal_form.m"
                MR_Word hlds__goal_form__V_20_20;
#line 950 "goal_form.m"
                MR_Word hlds__goal_form__V_18_18;

#line 949 "goal_form.m"
                {
#line 949 "goal_form.m"
                  hlds__goal_form__Detism_17 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(hlds__goal_form__GoalInfo_5);
                }
#line 950 "goal_form.m"
                {
#line 950 "goal_form.m"
                  parse_tree__prog_data__determinism_components_3_p_0(hlds__goal_form__Detism_17, &hlds__goal_form__V_20_20, &hlds__goal_form__V_18_18);
                }
#line 950 "goal_form.m"
                hlds__goal_form__succeeded = ((MR_Integer) 1 == hlds__goal_form__V_20_20);
#line 948 "goal_form.m"
                if (hlds__goal_form__succeeded)
#line 952 "goal_form.m"
                  {
#line 952 "goal_form.m"
                    /* direct tailcall eliminated */
#line 952 "goal_form.m"
                    {
#line 952 "goal_form.m"
                      MR_Word hlds__goal_form__HeadVar__1__tmp_copy_1 = hlds__goal_form__Goals_3;

#line 952 "goal_form.m"
                      hlds__goal_form__HeadVar__1_1 = hlds__goal_form__HeadVar__1__tmp_copy_1;
#line 952 "goal_form.m"
                    }
#line 952 "goal_form.m"
                    continue;
#line 952 "goal_form.m"
                  }
#line 948 "goal_form.m"
              }
#line 937 "goal_form.m"
          }
#line 936 "goal_form.m"
        return hlds__goal_form__succeeded;
#line 936 "goal_form.m"
      }
#line 936 "goal_form.m"
      break;
#line 936 "goal_form.m"
    }
#line 934 "goal_form.m"
}

#line 909 "goal_form.m"
static MR_bool MR_CALL 
hlds__goal_form__cannot_stack_flush_cases_1_p_0(
#line 909 "goal_form.m"
  MR_Word hlds__goal_form__HeadVar__1_1)
#line 909 "goal_form.m"
{
#line 911 "goal_form.m"
  while (MR_TRUE)
#line 911 "goal_form.m"
    {
#line 911 "goal_form.m"
      /* tailcall optimized into a loop */
#line 911 "goal_form.m"
      {
#line 911 "goal_form.m"
        MR_bool hlds__goal_form__succeeded;

#line 911 "goal_form.m"
        if ((hlds__goal_form__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 911 "goal_form.m"
          hlds__goal_form__succeeded = MR_TRUE;
#line 911 "goal_form.m"
        else
#line 912 "goal_form.m"
          {
#line 912 "goal_form.m"
            MR_Word hlds__goal_form__Goal_4;
#line 912 "goal_form.m"
            MR_Word hlds__goal_form__Cases_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__HeadVar__1_1, (MR_Integer) 1)));
#line 912 "goal_form.m"
            MR_Word hlds__goal_form__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__HeadVar__1_1, (MR_Integer) 0)));
#line 912 "goal_form.m"
            MR_Word hlds__goal_form__GoalExpr_7;
#line 912 "goal_form.m"
            MR_Word hlds__goal_form__V_2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__V_6_6, (MR_Integer) 0)));
#line 912 "goal_form.m"
            MR_Word hlds__goal_form__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__V_6_6, (MR_Integer) 1)));
#line 885 "goal_form.m"
            MR_Word hlds__goal_form__V_8_8;

#line 912 "goal_form.m"
            hlds__goal_form__Goal_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__V_6_6, (MR_Integer) 2)));
#line 885 "goal_form.m"
            hlds__goal_form__GoalExpr_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Goal_4, (MR_Integer) 0)));
#line 885 "goal_form.m"
            hlds__goal_form__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Goal_4, (MR_Integer) 1)));
#line 886 "goal_form.m"
            {
#line 886 "goal_form.m"
              hlds__goal_form__succeeded = hlds__goal_form__cannot_stack_flush_2_1_p_0(hlds__goal_form__GoalExpr_7);
            }
#line 912 "goal_form.m"
            if (hlds__goal_form__succeeded)
#line 914 "goal_form.m"
              {
#line 914 "goal_form.m"
                /* direct tailcall eliminated */
#line 914 "goal_form.m"
                {
#line 914 "goal_form.m"
                  MR_Word hlds__goal_form__HeadVar__1__tmp_copy_1 = hlds__goal_form__Cases_5;

#line 914 "goal_form.m"
                  hlds__goal_form__HeadVar__1_1 = hlds__goal_form__HeadVar__1__tmp_copy_1;
#line 914 "goal_form.m"
                }
#line 914 "goal_form.m"
                continue;
#line 914 "goal_form.m"
              }
#line 912 "goal_form.m"
          }
#line 911 "goal_form.m"
        return hlds__goal_form__succeeded;
#line 911 "goal_form.m"
      }
#line 911 "goal_form.m"
      break;
#line 911 "goal_form.m"
    }
#line 909 "goal_form.m"
}

#line 902 "goal_form.m"
static MR_bool MR_CALL 
hlds__goal_form__cannot_stack_flush_goals_1_p_0(
#line 902 "goal_form.m"
  MR_Word hlds__goal_form__HeadVar__1_1)
#line 902 "goal_form.m"
{
#line 904 "goal_form.m"
  while (MR_TRUE)
#line 904 "goal_form.m"
    {
#line 904 "goal_form.m"
      /* tailcall optimized into a loop */
#line 904 "goal_form.m"
      {
#line 904 "goal_form.m"
        MR_bool hlds__goal_form__succeeded;

#line 904 "goal_form.m"
        if ((hlds__goal_form__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 904 "goal_form.m"
          hlds__goal_form__succeeded = MR_TRUE;
#line 904 "goal_form.m"
        else
#line 905 "goal_form.m"
          {
#line 905 "goal_form.m"
            MR_Word hlds__goal_form__Goal_2 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__HeadVar__1_1, (MR_Integer) 0)));
#line 905 "goal_form.m"
            MR_Word hlds__goal_form__Goals_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__HeadVar__1_1, (MR_Integer) 1)));
#line 905 "goal_form.m"
            MR_Word hlds__goal_form__GoalExpr_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Goal_2, (MR_Integer) 0)));
#line 885 "goal_form.m"
            MR_Word hlds__goal_form__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Goal_2, (MR_Integer) 1)));

#line 886 "goal_form.m"
            {
#line 886 "goal_form.m"
              hlds__goal_form__succeeded = hlds__goal_form__cannot_stack_flush_2_1_p_0(hlds__goal_form__GoalExpr_4);
            }
#line 905 "goal_form.m"
            if (hlds__goal_form__succeeded)
#line 907 "goal_form.m"
              {
#line 907 "goal_form.m"
                /* direct tailcall eliminated */
#line 907 "goal_form.m"
                {
#line 907 "goal_form.m"
                  MR_Word hlds__goal_form__HeadVar__1__tmp_copy_1 = hlds__goal_form__Goals_3;

#line 907 "goal_form.m"
                  hlds__goal_form__HeadVar__1_1 = hlds__goal_form__HeadVar__1__tmp_copy_1;
#line 907 "goal_form.m"
                }
#line 907 "goal_form.m"
                continue;
#line 907 "goal_form.m"
              }
#line 905 "goal_form.m"
          }
#line 904 "goal_form.m"
        return hlds__goal_form__succeeded;
#line 904 "goal_form.m"
      }
#line 904 "goal_form.m"
      break;
#line 904 "goal_form.m"
    }
#line 902 "goal_form.m"
}

#line 888 "goal_form.m"
static MR_bool MR_CALL 
hlds__goal_form__cannot_stack_flush_2_1_p_0(
#line 888 "goal_form.m"
  MR_Word hlds__goal_form__HeadVar__1_1)
#line 888 "goal_form.m"
{
#line 890 "goal_form.m"
  {
#line 890 "goal_form.m"
    MR_bool hlds__goal_form__succeeded;

#line 890 "goal_form.m"
#line 890 "goal_form.m"
    switch (MR_tag((MR_Word) hlds__goal_form__HeadVar__1_1)) {
#line 890 "goal_form.m"
      default:
#line 890 "goal_form.m"
        hlds__goal_form__succeeded = MR_FALSE;
#line 890 "goal_form.m"
        break;
#line 890 "goal_form.m"
      case (MR_Integer) 0:
#line 899 "goal_form.m"
        {
#line 899 "goal_form.m"
          MR_Word hlds__goal_form__Unify_24;
#line 899 "goal_form.m"
          MR_Word hlds__goal_form__V_30_30 = (MR_Word) MR_body(((MR_Word) hlds__goal_form__HeadVar__1_1), (MR_Integer) 0);
#line 899 "goal_form.m"
          MR_Word hlds__goal_form__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__V_30_30, (MR_Integer) 0)));
#line 899 "goal_form.m"
          MR_Word hlds__goal_form__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__V_30_30, (MR_Integer) 1)));
#line 899 "goal_form.m"
          MR_Word hlds__goal_form__V_21_21;
#line 899 "goal_form.m"
          MR_Word hlds__goal_form__V_22_22;
#line 899 "goal_form.m"
          MR_Word hlds__goal_form__V_23_23;
#line 899 "goal_form.m"
          MR_Word hlds__goal_form__V_25_25;
#line 900 "goal_form.m"
          MR_Word hlds__goal_form__V_27_27;
#line 900 "goal_form.m"
          MR_Word hlds__goal_form__V_28_28;
#line 900 "goal_form.m"
          MR_Word hlds__goal_form__V_29_29;

#line 899 "goal_form.m"
          hlds__goal_form__succeeded = ((MR_tag((MR_Word) hlds__goal_form__V_31_31)) == (MR_mktag((MR_Integer) 1)));
#line 899 "goal_form.m"
          if (hlds__goal_form__succeeded)
#line 899 "goal_form.m"
            {
#line 899 "goal_form.m"
              hlds__goal_form__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__V_31_31, (MR_Integer) 0)));
#line 899 "goal_form.m"
              hlds__goal_form__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__V_31_31, (MR_Integer) 1)));
#line 899 "goal_form.m"
              hlds__goal_form__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__V_31_31, (MR_Integer) 2)));
#line 899 "goal_form.m"
              hlds__goal_form__Unify_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__V_31_31, (MR_Integer) 3)));
#line 899 "goal_form.m"
              hlds__goal_form__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__V_31_31, (MR_Integer) 4)));
#line 900 "goal_form.m"
              hlds__goal_form__succeeded = ((((MR_tag((MR_Word) hlds__goal_form__Unify_24)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__Unify_24, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 900 "goal_form.m"
              if (hlds__goal_form__succeeded)
#line 900 "goal_form.m"
                {
#line 900 "goal_form.m"
                  hlds__goal_form__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__Unify_24, (MR_Integer) 1)));
#line 900 "goal_form.m"
                  hlds__goal_form__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__Unify_24, (MR_Integer) 2)));
#line 900 "goal_form.m"
                  hlds__goal_form__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__Unify_24, (MR_Integer) 3)));
#line 900 "goal_form.m"
                }
#line 900 "goal_form.m"
              hlds__goal_form__succeeded = !(hlds__goal_form__succeeded);
#line 899 "goal_form.m"
            }
#line 899 "goal_form.m"
        }
#line 890 "goal_form.m"
        break;
#line 890 "goal_form.m"
      case (MR_Integer) 1:
#line 890 "goal_form.m"
        {
#line 890 "goal_form.m"
          MR_Word hlds__goal_form__Unify_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__HeadVar__1_1, (MR_Integer) 3)));
#line 890 "goal_form.m"
          MR_Word hlds__goal_form__V_2_2 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__HeadVar__1_1, (MR_Integer) 0)));
#line 890 "goal_form.m"
          MR_Word hlds__goal_form__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__HeadVar__1_1, (MR_Integer) 1)));
#line 890 "goal_form.m"
          MR_Word hlds__goal_form__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__HeadVar__1_1, (MR_Integer) 2)));
#line 890 "goal_form.m"
          MR_Word hlds__goal_form__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__HeadVar__1_1, (MR_Integer) 4)));
#line 891 "goal_form.m"
          MR_Word hlds__goal_form__V_7_7;
#line 891 "goal_form.m"
          MR_Word hlds__goal_form__V_8_8;
#line 891 "goal_form.m"
          MR_Word hlds__goal_form__V_9_9;

#line 891 "goal_form.m"
          hlds__goal_form__succeeded = ((((MR_tag((MR_Word) hlds__goal_form__Unify_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__Unify_5, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 891 "goal_form.m"
          if (hlds__goal_form__succeeded)
#line 891 "goal_form.m"
            {
#line 891 "goal_form.m"
              hlds__goal_form__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__Unify_5, (MR_Integer) 1)));
#line 891 "goal_form.m"
              hlds__goal_form__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__Unify_5, (MR_Integer) 2)));
#line 891 "goal_form.m"
              hlds__goal_form__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__Unify_5, (MR_Integer) 3)));
#line 891 "goal_form.m"
            }
#line 891 "goal_form.m"
          hlds__goal_form__succeeded = !(hlds__goal_form__succeeded);
#line 890 "goal_form.m"
        }
#line 890 "goal_form.m"
        break;
#line 890 "goal_form.m"
      case (MR_Integer) 2:
#line 892 "goal_form.m"
        {
#line 892 "goal_form.m"
          MR_Word hlds__goal_form__BuiltinState_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__HeadVar__1_1, (MR_Integer) 3)));
#line 892 "goal_form.m"
          MR_Word hlds__goal_form__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__HeadVar__1_1, (MR_Integer) 0)));
#line 892 "goal_form.m"
          MR_Integer hlds__goal_form__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(2), hlds__goal_form__HeadVar__1_1, (MR_Integer) 1)));
#line 892 "goal_form.m"
          MR_Word hlds__goal_form__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__HeadVar__1_1, (MR_Integer) 2)));
#line 892 "goal_form.m"
          MR_Word hlds__goal_form__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__HeadVar__1_1, (MR_Integer) 4)));
#line 892 "goal_form.m"
          MR_Word hlds__goal_form__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__HeadVar__1_1, (MR_Integer) 5)));

#line 893 "goal_form.m"
          hlds__goal_form__succeeded = (hlds__goal_form__BuiltinState_13 == (MR_Integer) 0);
#line 892 "goal_form.m"
        }
#line 890 "goal_form.m"
        break;
#line 890 "goal_form.m"
      case (MR_Integer) 3:
#line 890 "goal_form.m"
#line 890 "goal_form.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__HeadVar__1_1, (MR_Integer) 0)))) {
#line 890 "goal_form.m"
          default:
#line 890 "goal_form.m"
            hlds__goal_form__succeeded = MR_FALSE;
#line 890 "goal_form.m"
            break;
#line 890 "goal_form.m"
          case (MR_Integer) 2:
#line 894 "goal_form.m"
            {
#line 894 "goal_form.m"
              MR_Word hlds__goal_form__ConjType_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__HeadVar__1_1, (MR_Integer) 1)));
#line 894 "goal_form.m"
              MR_Word hlds__goal_form__Goals_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__HeadVar__1_1, (MR_Integer) 2)));

#line 895 "goal_form.m"
              hlds__goal_form__succeeded = (hlds__goal_form__ConjType_16 == (MR_Integer) 0);
#line 894 "goal_form.m"
              if (hlds__goal_form__succeeded)
#line 896 "goal_form.m"
                {
#line 896 "goal_form.m"
                  hlds__goal_form__succeeded = hlds__goal_form__cannot_stack_flush_goals_1_p_0(hlds__goal_form__Goals_17);
                }
#line 894 "goal_form.m"
            }
#line 890 "goal_form.m"
            break;
#line 890 "goal_form.m"
          case (MR_Integer) 4:
#line 897 "goal_form.m"
            {
#line 897 "goal_form.m"
              MR_Word hlds__goal_form__Cases_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__HeadVar__1_1, (MR_Integer) 3)));
#line 897 "goal_form.m"
              MR_Word hlds__goal_form__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__HeadVar__1_1, (MR_Integer) 1)));
#line 897 "goal_form.m"
              MR_Word hlds__goal_form__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__HeadVar__1_1, (MR_Integer) 2)));

#line 898 "goal_form.m"
              {
#line 898 "goal_form.m"
                hlds__goal_form__succeeded = hlds__goal_form__cannot_stack_flush_cases_1_p_0(hlds__goal_form__Cases_20);
              }
#line 897 "goal_form.m"
            }
#line 890 "goal_form.m"
            break;
#line 890 "goal_form.m"
        }
#line 890 "goal_form.m"
        break;
#line 890 "goal_form.m"
    }
#line 890 "goal_form.m"
    return hlds__goal_form__succeeded;
#line 890 "goal_form.m"
  }
#line 888 "goal_form.m"
}

#line 873 "goal_form.m"
static void MR_CALL 
hlds__goal_form__cases_may_allocate_heap_2_p_0(
#line 873 "goal_form.m"
  MR_Word hlds__goal_form__HeadVar__1_1,
#line 873 "goal_form.m"
  MR_Word * hlds__goal_form__HeadVar__2_2)
#line 873 "goal_form.m"
{
#line 875 "goal_form.m"
  while (MR_TRUE)
#line 875 "goal_form.m"
    {
#line 875 "goal_form.m"
      /* tailcall optimized into a loop */
#line 875 "goal_form.m"
      {
#line 875 "goal_form.m"
        MR_bool hlds__goal_form__succeeded;

#line 875 "goal_form.m"
        if ((hlds__goal_form__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 875 "goal_form.m"
          *hlds__goal_form__HeadVar__2_2 = (MR_Integer) 0;
#line 875 "goal_form.m"
        else
#line 876 "goal_form.m"
          {
#line 876 "goal_form.m"
            MR_Word hlds__goal_form__Goal_5;
#line 876 "goal_form.m"
            MR_Word hlds__goal_form__Cases_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__HeadVar__1_1, (MR_Integer) 1)));
#line 876 "goal_form.m"
            MR_Word hlds__goal_form__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__HeadVar__1_1, (MR_Integer) 0)));
#line 876 "goal_form.m"
            MR_Word hlds__goal_form__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__V_8_8, (MR_Integer) 0)));
#line 876 "goal_form.m"
            MR_Word hlds__goal_form__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__V_8_8, (MR_Integer) 1)));
#line 877 "goal_form.m"
            MR_Word hlds__goal_form__V_10_10;
#line 877 "goal_form.m"
            MR_Word hlds__goal_form__GoalExpr_12;
#line 764 "goal_form.m"
            MR_Word hlds__goal_form___GoalInfo_13;

#line 876 "goal_form.m"
            hlds__goal_form__Goal_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__V_8_8, (MR_Integer) 2)));
#line 764 "goal_form.m"
            hlds__goal_form__GoalExpr_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Goal_5, (MR_Integer) 0)));
#line 764 "goal_form.m"
            hlds__goal_form___GoalInfo_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Goal_5, (MR_Integer) 1)));
#line 765 "goal_form.m"
            {
#line 765 "goal_form.m"
              hlds__goal_form__goal_may_allocate_heap_2_2_p_0(hlds__goal_form__GoalExpr_12, &hlds__goal_form__V_10_10);
            }
#line 877 "goal_form.m"
            hlds__goal_form__succeeded = ((MR_Integer) 1 == hlds__goal_form__V_10_10);
#line 877 "goal_form.m"
            if (hlds__goal_form__succeeded)
#line 878 "goal_form.m"
              *hlds__goal_form__HeadVar__2_2 = (MR_Integer) 1;
#line 877 "goal_form.m"
            else
#line 880 "goal_form.m"
              {
#line 880 "goal_form.m"
                /* direct tailcall eliminated */
#line 880 "goal_form.m"
                {
#line 880 "goal_form.m"
                  MR_Word hlds__goal_form__HeadVar__1__tmp_copy_1 = hlds__goal_form__Cases_6;

#line 880 "goal_form.m"
                  hlds__goal_form__HeadVar__1_1 = hlds__goal_form__HeadVar__1__tmp_copy_1;
#line 880 "goal_form.m"
                }
#line 880 "goal_form.m"
                continue;
#line 880 "goal_form.m"
              }
#line 876 "goal_form.m"
          }
#line 875 "goal_form.m"
      }
#line 875 "goal_form.m"
      break;
#line 875 "goal_form.m"
    }
#line 873 "goal_form.m"
}

#line 863 "goal_form.m"
static void MR_CALL 
hlds__goal_form__goal_list_may_allocate_heap_2_p_0(
#line 863 "goal_form.m"
  MR_Word hlds__goal_form__HeadVar__1_1,
#line 863 "goal_form.m"
  MR_Word * hlds__goal_form__HeadVar__2_2)
#line 863 "goal_form.m"
{
#line 865 "goal_form.m"
  while (MR_TRUE)
#line 865 "goal_form.m"
    {
#line 865 "goal_form.m"
      /* tailcall optimized into a loop */
#line 865 "goal_form.m"
      {
#line 865 "goal_form.m"
        MR_bool hlds__goal_form__succeeded;

#line 865 "goal_form.m"
        if ((hlds__goal_form__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 865 "goal_form.m"
          *hlds__goal_form__HeadVar__2_2 = (MR_Integer) 0;
#line 865 "goal_form.m"
        else
#line 866 "goal_form.m"
          {
#line 866 "goal_form.m"
            MR_Word hlds__goal_form__Goal_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__HeadVar__1_1, (MR_Integer) 0)));
#line 866 "goal_form.m"
            MR_Word hlds__goal_form__Goals_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__HeadVar__1_1, (MR_Integer) 1)));
#line 867 "goal_form.m"
            MR_Word hlds__goal_form__V_7_7;
#line 867 "goal_form.m"
            MR_Word hlds__goal_form__GoalExpr_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Goal_3, (MR_Integer) 0)));
#line 764 "goal_form.m"
            MR_Word hlds__goal_form___GoalInfo_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Goal_3, (MR_Integer) 1)));

#line 765 "goal_form.m"
            {
#line 765 "goal_form.m"
              hlds__goal_form__goal_may_allocate_heap_2_2_p_0(hlds__goal_form__GoalExpr_9, &hlds__goal_form__V_7_7);
            }
#line 867 "goal_form.m"
            hlds__goal_form__succeeded = ((MR_Integer) 1 == hlds__goal_form__V_7_7);
#line 867 "goal_form.m"
            if (hlds__goal_form__succeeded)
#line 868 "goal_form.m"
              *hlds__goal_form__HeadVar__2_2 = (MR_Integer) 1;
#line 867 "goal_form.m"
            else
#line 870 "goal_form.m"
              {
#line 870 "goal_form.m"
                /* direct tailcall eliminated */
#line 870 "goal_form.m"
                {
#line 870 "goal_form.m"
                  MR_Word hlds__goal_form__HeadVar__1__tmp_copy_1 = hlds__goal_form__Goals_4;

#line 870 "goal_form.m"
                  hlds__goal_form__HeadVar__1_1 = hlds__goal_form__HeadVar__1__tmp_copy_1;
#line 870 "goal_form.m"
                }
#line 870 "goal_form.m"
                continue;
#line 870 "goal_form.m"
              }
#line 866 "goal_form.m"
          }
#line 865 "goal_form.m"
      }
#line 865 "goal_form.m"
      break;
#line 865 "goal_form.m"
    }
#line 863 "goal_form.m"
}

#line 767 "goal_form.m"
static void MR_CALL 
hlds__goal_form__goal_may_allocate_heap_2_2_p_0(
#line 767 "goal_form.m"
  MR_Word hlds__goal_form__GoalExpr_3,
#line 767 "goal_form.m"
  MR_Word * hlds__goal_form__May_4)
#line 767 "goal_form.m"
{
#line 771 "goal_form.m"
  while (MR_TRUE)
#line 771 "goal_form.m"
    {
#line 771 "goal_form.m"
      /* tailcall optimized into a loop */
#line 771 "goal_form.m"
      {
#line 771 "goal_form.m"
        MR_bool hlds__goal_form__succeeded;

#line 771 "goal_form.m"
#line 771 "goal_form.m"
        switch (MR_tag((MR_Word) hlds__goal_form__GoalExpr_3)) {
#line 771 "goal_form.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 771 "goal_form.m"
          case (MR_Integer) 0:
#line 827 "goal_form.m"
            {
#line 827 "goal_form.m"
              MR_Word hlds__goal_form__SubGoal_46 = (MR_Word) MR_body(((MR_Word) hlds__goal_form__GoalExpr_3), (MR_Integer) 0);
#line 827 "goal_form.m"
              MR_Word hlds__goal_form__GoalExpr_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__SubGoal_46, (MR_Integer) 0)));
#line 764 "goal_form.m"
              MR_Word hlds__goal_form___GoalInfo_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__SubGoal_46, (MR_Integer) 1)));

#line 765 "goal_form.m"
              /* direct tailcall eliminated */
#line 765 "goal_form.m"
              {
#line 765 "goal_form.m"
                MR_Word hlds__goal_form__GoalExpr__tmp_copy_3 = hlds__goal_form__GoalExpr_81;

#line 765 "goal_form.m"
                hlds__goal_form__GoalExpr_3 = hlds__goal_form__GoalExpr__tmp_copy_3;
#line 765 "goal_form.m"
              }
#line 765 "goal_form.m"
              continue;
#line 827 "goal_form.m"
            }
#line 771 "goal_form.m"
            break;
#line 771 "goal_form.m"
          case (MR_Integer) 1:
#line 771 "goal_form.m"
            {
#line 771 "goal_form.m"
              MR_Word hlds__goal_form__Unification_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__GoalExpr_3, (MR_Integer) 3)));
#line 771 "goal_form.m"
              MR_Word hlds__goal_form__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__GoalExpr_3, (MR_Integer) 0)));
#line 771 "goal_form.m"
              MR_Word hlds__goal_form__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__GoalExpr_3, (MR_Integer) 1)));
#line 771 "goal_form.m"
              MR_Word hlds__goal_form__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__GoalExpr_3, (MR_Integer) 2)));
#line 771 "goal_form.m"
              MR_Word hlds__goal_form__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__GoalExpr_3, (MR_Integer) 4)));
#line 773 "goal_form.m"
              MR_Word hlds__goal_form__Args_12;
#line 773 "goal_form.m"
              MR_Word hlds__goal_form__V_10_10;
#line 773 "goal_form.m"
              MR_Word hlds__goal_form__V_11_11;
#line 773 "goal_form.m"
              MR_Word hlds__goal_form__V_13_13;
#line 773 "goal_form.m"
              MR_Word hlds__goal_form__V_14_14;
#line 773 "goal_form.m"
              MR_Word hlds__goal_form__V_15_15;
#line 773 "goal_form.m"
              MR_Word hlds__goal_form__V_16_16;
#line 774 "goal_form.m"
              MR_Word hlds__goal_form__V_17_17;
#line 774 "goal_form.m"
              MR_Word hlds__goal_form__V_18_18;

#line 773 "goal_form.m"
              hlds__goal_form__succeeded = ((MR_tag((MR_Word) hlds__goal_form__Unification_8)) == (MR_mktag((MR_Integer) 0)));
#line 773 "goal_form.m"
              if (hlds__goal_form__succeeded)
#line 773 "goal_form.m"
                {
#line 773 "goal_form.m"
                  hlds__goal_form__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Unification_8, (MR_Integer) 0)));
#line 773 "goal_form.m"
                  hlds__goal_form__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Unification_8, (MR_Integer) 1)));
#line 773 "goal_form.m"
                  hlds__goal_form__Args_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Unification_8, (MR_Integer) 2)));
#line 773 "goal_form.m"
                  hlds__goal_form__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Unification_8, (MR_Integer) 3)));
#line 773 "goal_form.m"
                  hlds__goal_form__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Unification_8, (MR_Integer) 4)));
#line 773 "goal_form.m"
                  hlds__goal_form__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Unification_8, (MR_Integer) 5)));
#line 773 "goal_form.m"
                  hlds__goal_form__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Unification_8, (MR_Integer) 6)));
#line 774 "goal_form.m"
                  hlds__goal_form__succeeded = ((MR_tag((MR_Word) hlds__goal_form__Args_12)) == (MR_mktag((MR_Integer) 1)));
#line 774 "goal_form.m"
                  if (hlds__goal_form__succeeded)
#line 774 "goal_form.m"
                    {
#line 774 "goal_form.m"
                      hlds__goal_form__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__Args_12, (MR_Integer) 0)));
#line 774 "goal_form.m"
                      hlds__goal_form__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__Args_12, (MR_Integer) 1)));
#line 774 "goal_form.m"
                    }
#line 773 "goal_form.m"
                }
#line 772 "goal_form.m"
              if (hlds__goal_form__succeeded)
#line 776 "goal_form.m"
                *hlds__goal_form__May_4 = (MR_Integer) 1;
#line 772 "goal_form.m"
              else
#line 778 "goal_form.m"
                *hlds__goal_form__May_4 = (MR_Integer) 0;
#line 771 "goal_form.m"
            }
#line 771 "goal_form.m"
            break;
#line 771 "goal_form.m"
          case (MR_Integer) 2:
#line 781 "goal_form.m"
            {
#line 781 "goal_form.m"
              MR_Word hlds__goal_form__Builtin_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__GoalExpr_3, (MR_Integer) 3)));
#line 781 "goal_form.m"
              MR_Word hlds__goal_form__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__GoalExpr_3, (MR_Integer) 0)));
#line 781 "goal_form.m"
              MR_Integer hlds__goal_form__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(2), hlds__goal_form__GoalExpr_3, (MR_Integer) 1)));
#line 781 "goal_form.m"
              MR_Word hlds__goal_form__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__GoalExpr_3, (MR_Integer) 2)));
#line 781 "goal_form.m"
              MR_Word hlds__goal_form__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__GoalExpr_3, (MR_Integer) 4)));
#line 781 "goal_form.m"
              MR_Word hlds__goal_form__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__GoalExpr_3, (MR_Integer) 5)));

#line 785 "goal_form.m"
#line 785 "goal_form.m"
              switch (hlds__goal_form__Builtin_22) {
#line 785 "goal_form.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 785 "goal_form.m"
                case (MR_Integer) 0:
#line 784 "goal_form.m"
                  *hlds__goal_form__May_4 = (MR_Integer) 0;
#line 785 "goal_form.m"
                  break;
#line 785 "goal_form.m"
                case (MR_Integer) 2:
#line 785 "goal_form.m"
                case (MR_Integer) 1:
#line 789 "goal_form.m"
                  *hlds__goal_form__May_4 = (MR_Integer) 1;
#line 785 "goal_form.m"
                  break;
#line 785 "goal_form.m"
              }
#line 781 "goal_form.m"
            }
#line 771 "goal_form.m"
            break;
#line 771 "goal_form.m"
          case (MR_Integer) 3:
#line 771 "goal_form.m"
#line 771 "goal_form.m"
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_3, (MR_Integer) 0)))) {
#line 771 "goal_form.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 771 "goal_form.m"
              case (MR_Integer) 0:
#line 793 "goal_form.m"
                *hlds__goal_form__May_4 = (MR_Integer) 1;
#line 771 "goal_form.m"
                break;
#line 771 "goal_form.m"
              case (MR_Integer) 1:
#line 801 "goal_form.m"
                *hlds__goal_form__May_4 = (MR_Integer) 1;
#line 771 "goal_form.m"
                break;
#line 771 "goal_form.m"
              case (MR_Integer) 2:
#line 803 "goal_form.m"
                {
#line 803 "goal_form.m"
                  MR_Word hlds__goal_form__ConjType_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_3, (MR_Integer) 1)));
#line 803 "goal_form.m"
                  MR_Word hlds__goal_form__Goals_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_3, (MR_Integer) 2)));

#line 807 "goal_form.m"
#line 807 "goal_form.m"
                  switch (hlds__goal_form__ConjType_37) {
#line 807 "goal_form.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 807 "goal_form.m"
                    case (MR_Integer) 1:
#line 806 "goal_form.m"
                      *hlds__goal_form__May_4 = (MR_Integer) 1;
#line 807 "goal_form.m"
                      break;
#line 807 "goal_form.m"
                    case (MR_Integer) 0:
#line 809 "goal_form.m"
                      {
#line 809 "goal_form.m"
                        hlds__goal_form__goal_list_may_allocate_heap_2_p_0(hlds__goal_form__Goals_38, hlds__goal_form__May_4);
                      }
#line 807 "goal_form.m"
                      break;
#line 807 "goal_form.m"
                  }
#line 803 "goal_form.m"
                }
#line 771 "goal_form.m"
                break;
#line 771 "goal_form.m"
              case (MR_Integer) 3:
#line 812 "goal_form.m"
                {
#line 812 "goal_form.m"
                  MR_Word hlds__goal_form__Goals_66 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_3, (MR_Integer) 1)));

#line 813 "goal_form.m"
                  {
#line 813 "goal_form.m"
                    hlds__goal_form__goal_list_may_allocate_heap_2_p_0(hlds__goal_form__Goals_66, hlds__goal_form__May_4);
                  }
#line 812 "goal_form.m"
                }
#line 771 "goal_form.m"
                break;
#line 771 "goal_form.m"
              case (MR_Integer) 4:
#line 815 "goal_form.m"
                {
#line 815 "goal_form.m"
                  MR_Word hlds__goal_form__Cases_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_3, (MR_Integer) 3)));
#line 815 "goal_form.m"
                  MR_Word hlds__goal_form___Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_3, (MR_Integer) 1)));
#line 815 "goal_form.m"
                  MR_Word hlds__goal_form___CanFail_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_3, (MR_Integer) 2)));

#line 816 "goal_form.m"
                  {
#line 816 "goal_form.m"
                    hlds__goal_form__cases_may_allocate_heap_2_p_0(hlds__goal_form__Cases_41, hlds__goal_form__May_4);
                  }
#line 815 "goal_form.m"
                }
#line 771 "goal_form.m"
                break;
#line 771 "goal_form.m"
              case (MR_Integer) 5:
#line 830 "goal_form.m"
                {
#line 830 "goal_form.m"
                  MR_Word hlds__goal_form__Reason_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_3, (MR_Integer) 1)));
#line 830 "goal_form.m"
                  MR_Word hlds__goal_form__SubGoal_67 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_3, (MR_Integer) 2)));
#line 832 "goal_form.m"
                  MR_Word hlds__goal_form__FGT_49;
#line 832 "goal_form.m"
                  MR_Word hlds__goal_form__V_48_48;

#line 832 "goal_form.m"
                  hlds__goal_form__succeeded = ((((MR_tag((MR_Word) hlds__goal_form__Reason_47)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__Reason_47, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 832 "goal_form.m"
                  if (hlds__goal_form__succeeded)
#line 832 "goal_form.m"
                    {
#line 832 "goal_form.m"
                      hlds__goal_form__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__Reason_47, (MR_Integer) 1)));
#line 832 "goal_form.m"
                      hlds__goal_form__FGT_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__Reason_47, (MR_Integer) 2)));
#line 834 "goal_form.m"
#line 834 "goal_form.m"
                      switch (hlds__goal_form__FGT_49) {
#line 834 "goal_form.m"
                        default:
#line 834 "goal_form.m"
                          hlds__goal_form__succeeded = MR_FALSE;
#line 834 "goal_form.m"
                          break;
#line 834 "goal_form.m"
                        case (MR_Integer) 1:
#line 833 "goal_form.m"
                          hlds__goal_form__succeeded = MR_TRUE;
#line 834 "goal_form.m"
                          break;
#line 834 "goal_form.m"
                        case (MR_Integer) 2:
#line 834 "goal_form.m"
                          hlds__goal_form__succeeded = MR_TRUE;
#line 834 "goal_form.m"
                          break;
#line 834 "goal_form.m"
                      }
#line 832 "goal_form.m"
                    }
#line 831 "goal_form.m"
                  if (hlds__goal_form__succeeded)
#line 842 "goal_form.m"
                    *hlds__goal_form__May_4 = (MR_Integer) 1;
#line 831 "goal_form.m"
                  else
#line 764 "goal_form.m"
                    {
#line 764 "goal_form.m"
                      MR_Word hlds__goal_form__GoalExpr_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__SubGoal_67, (MR_Integer) 0)));
#line 764 "goal_form.m"
                      MR_Word hlds__goal_form___GoalInfo_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__SubGoal_67, (MR_Integer) 1)));

#line 765 "goal_form.m"
                      /* direct tailcall eliminated */
#line 765 "goal_form.m"
                      {
#line 765 "goal_form.m"
                        MR_Word hlds__goal_form__GoalExpr__tmp_copy_3 = hlds__goal_form__GoalExpr_84;

#line 765 "goal_form.m"
                        hlds__goal_form__GoalExpr_3 = hlds__goal_form__GoalExpr__tmp_copy_3;
#line 765 "goal_form.m"
                      }
#line 765 "goal_form.m"
                      continue;
#line 764 "goal_form.m"
                    }
#line 830 "goal_form.m"
                }
#line 771 "goal_form.m"
                break;
#line 771 "goal_form.m"
              case (MR_Integer) 6:
#line 818 "goal_form.m"
                {
#line 818 "goal_form.m"
                  MR_Word hlds__goal_form__Cond_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_3, (MR_Integer) 2)));
#line 818 "goal_form.m"
                  MR_Word hlds__goal_form__Then_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_3, (MR_Integer) 3)));
#line 818 "goal_form.m"
                  MR_Word hlds__goal_form__Else_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_3, (MR_Integer) 4)));
#line 818 "goal_form.m"
                  MR_Word hlds__goal_form___Vars_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_3, (MR_Integer) 1)));
#line 819 "goal_form.m"
                  MR_Word hlds__goal_form__V_68_68;
#line 819 "goal_form.m"
                  MR_Word hlds__goal_form__GoalExpr_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Cond_43, (MR_Integer) 0)));
#line 764 "goal_form.m"
                  MR_Word hlds__goal_form___GoalInfo_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Cond_43, (MR_Integer) 1)));

#line 765 "goal_form.m"
                  {
#line 765 "goal_form.m"
                    hlds__goal_form__goal_may_allocate_heap_2_2_p_0(hlds__goal_form__GoalExpr_72, &hlds__goal_form__V_68_68);
                  }
#line 819 "goal_form.m"
                  hlds__goal_form__succeeded = ((MR_Integer) 1 == hlds__goal_form__V_68_68);
#line 819 "goal_form.m"
                  if (hlds__goal_form__succeeded)
#line 820 "goal_form.m"
                    *hlds__goal_form__May_4 = (MR_Integer) 1;
#line 819 "goal_form.m"
                  else
#line 821 "goal_form.m"
                    {
#line 821 "goal_form.m"
                      MR_Word hlds__goal_form__V_69_69;
#line 821 "goal_form.m"
                      MR_Word hlds__goal_form__GoalExpr_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Then_44, (MR_Integer) 0)));
#line 764 "goal_form.m"
                      MR_Word hlds__goal_form___GoalInfo_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Then_44, (MR_Integer) 1)));

#line 765 "goal_form.m"
                      {
#line 765 "goal_form.m"
                        hlds__goal_form__goal_may_allocate_heap_2_2_p_0(hlds__goal_form__GoalExpr_75, &hlds__goal_form__V_69_69);
                      }
#line 821 "goal_form.m"
                      hlds__goal_form__succeeded = ((MR_Integer) 1 == hlds__goal_form__V_69_69);
#line 821 "goal_form.m"
                      if (hlds__goal_form__succeeded)
#line 822 "goal_form.m"
                        *hlds__goal_form__May_4 = (MR_Integer) 1;
#line 821 "goal_form.m"
                      else
#line 764 "goal_form.m"
                        {
#line 764 "goal_form.m"
                          MR_Word hlds__goal_form__GoalExpr_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Else_45, (MR_Integer) 0)));
#line 764 "goal_form.m"
                          MR_Word hlds__goal_form___GoalInfo_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Else_45, (MR_Integer) 1)));

#line 765 "goal_form.m"
                          /* direct tailcall eliminated */
#line 765 "goal_form.m"
                          {
#line 765 "goal_form.m"
                            MR_Word hlds__goal_form__GoalExpr__tmp_copy_3 = hlds__goal_form__GoalExpr_78;

#line 765 "goal_form.m"
                            hlds__goal_form__GoalExpr_3 = hlds__goal_form__GoalExpr__tmp_copy_3;
#line 765 "goal_form.m"
                          }
#line 765 "goal_form.m"
                          continue;
#line 764 "goal_form.m"
                        }
#line 821 "goal_form.m"
                    }
#line 818 "goal_form.m"
                }
#line 771 "goal_form.m"
                break;
#line 771 "goal_form.m"
              case (MR_Integer) 7:
#line 847 "goal_form.m"
                {
#line 847 "goal_form.m"
                  MR_Word hlds__goal_form__ShortHand_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_3, (MR_Integer) 1)));

#line 853 "goal_form.m"
#line 853 "goal_form.m"
                  switch (MR_tag((MR_Word) hlds__goal_form__ShortHand_50)) {
#line 853 "goal_form.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 853 "goal_form.m"
                    case (MR_Integer) 0:
#line 854 "goal_form.m"
                      {
#line 854 "goal_form.m"
                        MR_Word hlds__goal_form__GoalA_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__ShortHand_50, (MR_Integer) 0)));
#line 854 "goal_form.m"
                        MR_Word hlds__goal_form__GoalB_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__ShortHand_50, (MR_Integer) 1)));
#line 855 "goal_form.m"
                        MR_Word hlds__goal_form__V_70_70;
#line 855 "goal_form.m"
                        MR_Word hlds__goal_form__GoalExpr_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__GoalA_61, (MR_Integer) 0)));
#line 764 "goal_form.m"
                        MR_Word hlds__goal_form___GoalInfo_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__GoalA_61, (MR_Integer) 1)));

#line 765 "goal_form.m"
                        {
#line 765 "goal_form.m"
                          hlds__goal_form__goal_may_allocate_heap_2_2_p_0(hlds__goal_form__GoalExpr_87, &hlds__goal_form__V_70_70);
                        }
#line 855 "goal_form.m"
                        hlds__goal_form__succeeded = ((MR_Integer) 1 == hlds__goal_form__V_70_70);
#line 855 "goal_form.m"
                        if (hlds__goal_form__succeeded)
#line 856 "goal_form.m"
                          *hlds__goal_form__May_4 = (MR_Integer) 1;
#line 855 "goal_form.m"
                        else
#line 764 "goal_form.m"
                          {
#line 764 "goal_form.m"
                            MR_Word hlds__goal_form__GoalExpr_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__GoalB_62, (MR_Integer) 0)));
#line 764 "goal_form.m"
                            MR_Word hlds__goal_form___GoalInfo_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__GoalB_62, (MR_Integer) 1)));

#line 765 "goal_form.m"
                            /* direct tailcall eliminated */
#line 765 "goal_form.m"
                            {
#line 765 "goal_form.m"
                              MR_Word hlds__goal_form__GoalExpr__tmp_copy_3 = hlds__goal_form__GoalExpr_90;

#line 765 "goal_form.m"
                              hlds__goal_form__GoalExpr_3 = hlds__goal_form__GoalExpr__tmp_copy_3;
#line 765 "goal_form.m"
                            }
#line 765 "goal_form.m"
                            continue;
#line 764 "goal_form.m"
                          }
#line 854 "goal_form.m"
                      }
#line 853 "goal_form.m"
                      break;
#line 853 "goal_form.m"
                    case (MR_Integer) 1:
#line 853 "goal_form.m"
                    case (MR_Integer) 2:
#line 852 "goal_form.m"
                      *hlds__goal_form__May_4 = (MR_Integer) 1;
#line 853 "goal_form.m"
                      break;
#line 853 "goal_form.m"
                  }
#line 847 "goal_form.m"
                }
#line 771 "goal_form.m"
                break;
#line 771 "goal_form.m"
            }
#line 771 "goal_form.m"
            break;
#line 771 "goal_form.m"
        }
#line 771 "goal_form.m"
      }
#line 771 "goal_form.m"
      break;
#line 771 "goal_form.m"
    }
#line 767 "goal_form.m"
}

#line 744 "goal_form.m"
static MR_Word MR_CALL 
hlds__goal_form__goal_is_flat_list_1_f_0(
#line 744 "goal_form.m"
  MR_Word hlds__goal_form__HeadVar__1_1)
#line 744 "goal_form.m"
{
#line 746 "goal_form.m"
  while (MR_TRUE)
#line 746 "goal_form.m"
    {
#line 746 "goal_form.m"
      /* tailcall optimized into a loop */
#line 746 "goal_form.m"
      {
#line 746 "goal_form.m"
        MR_bool hlds__goal_form__succeeded;
#line 746 "goal_form.m"
        MR_Word hlds__goal_form__HeadVar__2_2;

#line 746 "goal_form.m"
        if ((hlds__goal_form__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 746 "goal_form.m"
          hlds__goal_form__HeadVar__2_2 = (MR_Integer) 1;
#line 746 "goal_form.m"
        else
#line 747 "goal_form.m"
          {
#line 747 "goal_form.m"
            MR_Word hlds__goal_form__Goal_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__HeadVar__1_1, (MR_Integer) 0)));
#line 747 "goal_form.m"
            MR_Word hlds__goal_form__Goals_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__HeadVar__1_1, (MR_Integer) 1)));
#line 748 "goal_form.m"
            MR_Word hlds__goal_form__V_6_6;
#line 748 "goal_form.m"
            MR_Word hlds__goal_form__GoalExpr_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Goal_3, (MR_Integer) 0)));
#line 699 "goal_form.m"
            MR_Word hlds__goal_form___GoalInfo_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Goal_3, (MR_Integer) 1)));

#line 699 "goal_form.m"
            {
#line 699 "goal_form.m"
              hlds__goal_form__V_6_6 = hlds__goal_form__goal_is_flat_expr_1_f_0(hlds__goal_form__GoalExpr_7);
            }
#line 748 "goal_form.m"
            hlds__goal_form__succeeded = (hlds__goal_form__V_6_6 == (MR_Integer) 1);
#line 748 "goal_form.m"
            if (hlds__goal_form__succeeded)
#line 749 "goal_form.m"
              {
#line 749 "goal_form.m"
                /* direct tailcall eliminated */
#line 749 "goal_form.m"
                {
#line 749 "goal_form.m"
                  MR_Word hlds__goal_form__HeadVar__1__tmp_copy_1 = hlds__goal_form__Goals_4;

#line 749 "goal_form.m"
                  hlds__goal_form__HeadVar__1_1 = hlds__goal_form__HeadVar__1__tmp_copy_1;
#line 749 "goal_form.m"
                }
#line 749 "goal_form.m"
                continue;
#line 749 "goal_form.m"
              }
#line 748 "goal_form.m"
            else
#line 751 "goal_form.m"
              hlds__goal_form__HeadVar__2_2 = (MR_Integer) 0;
#line 747 "goal_form.m"
          }
#line 746 "goal_form.m"
        return hlds__goal_form__HeadVar__2_2;
#line 746 "goal_form.m"
      }
#line 746 "goal_form.m"
      break;
#line 746 "goal_form.m"
    }
#line 744 "goal_form.m"
}

#line 701 "goal_form.m"
static MR_Word MR_CALL 
hlds__goal_form__goal_is_flat_expr_1_f_0(
#line 701 "goal_form.m"
  MR_Word hlds__goal_form__GoalExpr_3)
#line 701 "goal_form.m"
{
#line 709 "goal_form.m"
  while (MR_TRUE)
#line 709 "goal_form.m"
    {
#line 709 "goal_form.m"
      /* tailcall optimized into a loop */
#line 709 "goal_form.m"
      {
#line 709 "goal_form.m"
        MR_bool hlds__goal_form__succeeded;
#line 709 "goal_form.m"
        MR_Word hlds__goal_form__IsFlat_4;

#line 709 "goal_form.m"
#line 709 "goal_form.m"
        switch (MR_tag((MR_Word) hlds__goal_form__GoalExpr_3)) {
#line 709 "goal_form.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 709 "goal_form.m"
          case (MR_Integer) 0:
#line 728 "goal_form.m"
            {
#line 728 "goal_form.m"
              MR_Word hlds__goal_form__SubGoal_39 = (MR_Word) MR_body(((MR_Word) hlds__goal_form__GoalExpr_3), (MR_Integer) 0);
#line 728 "goal_form.m"
              MR_Word hlds__goal_form__GoalExpr_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__SubGoal_39, (MR_Integer) 0)));
#line 699 "goal_form.m"
              MR_Word hlds__goal_form___GoalInfo_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__SubGoal_39, (MR_Integer) 1)));

#line 699 "goal_form.m"
              /* direct tailcall eliminated */
#line 699 "goal_form.m"
              {
#line 699 "goal_form.m"
                MR_Word hlds__goal_form__GoalExpr__tmp_copy_3 = hlds__goal_form__GoalExpr_44;

#line 699 "goal_form.m"
                hlds__goal_form__GoalExpr_3 = hlds__goal_form__GoalExpr__tmp_copy_3;
#line 699 "goal_form.m"
              }
#line 699 "goal_form.m"
              continue;
#line 728 "goal_form.m"
            }
#line 709 "goal_form.m"
            break;
#line 709 "goal_form.m"
          case (MR_Integer) 1:
#line 709 "goal_form.m"
          case (MR_Integer) 2:
#line 710 "goal_form.m"
            hlds__goal_form__IsFlat_4 = (MR_Integer) 1;
#line 709 "goal_form.m"
            break;
#line 709 "goal_form.m"
          case (MR_Integer) 3:
#line 709 "goal_form.m"
#line 709 "goal_form.m"
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_3, (MR_Integer) 0)))) {
#line 709 "goal_form.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 709 "goal_form.m"
              case (MR_Integer) 0:
#line 709 "goal_form.m"
              case (MR_Integer) 1:
#line 710 "goal_form.m"
                hlds__goal_form__IsFlat_4 = (MR_Integer) 1;
#line 709 "goal_form.m"
                break;
#line 709 "goal_form.m"
              case (MR_Integer) 2:
#line 712 "goal_form.m"
                {
#line 712 "goal_form.m"
                  MR_Word hlds__goal_form__ConjType_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_3, (MR_Integer) 1)));
#line 712 "goal_form.m"
                  MR_Word hlds__goal_form__Goals_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_3, (MR_Integer) 2)));

#line 716 "goal_form.m"
#line 716 "goal_form.m"
                  switch (hlds__goal_form__ConjType_28) {
#line 716 "goal_form.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 716 "goal_form.m"
                    case (MR_Integer) 1:
#line 715 "goal_form.m"
                      hlds__goal_form__IsFlat_4 = (MR_Integer) 0;
#line 716 "goal_form.m"
                      break;
#line 716 "goal_form.m"
                    case (MR_Integer) 0:
#line 718 "goal_form.m"
                      {
#line 718 "goal_form.m"
                        hlds__goal_form__IsFlat_4 = hlds__goal_form__goal_is_flat_list_1_f_0(hlds__goal_form__Goals_29);
                      }
#line 716 "goal_form.m"
                      break;
#line 716 "goal_form.m"
                  }
#line 712 "goal_form.m"
                }
#line 709 "goal_form.m"
                break;
#line 709 "goal_form.m"
              case (MR_Integer) 3:
#line 709 "goal_form.m"
              case (MR_Integer) 4:
#line 709 "goal_form.m"
              case (MR_Integer) 6:
#line 709 "goal_form.m"
              case (MR_Integer) 7:
#line 726 "goal_form.m"
                hlds__goal_form__IsFlat_4 = (MR_Integer) 0;
#line 709 "goal_form.m"
                break;
#line 709 "goal_form.m"
              case (MR_Integer) 5:
#line 731 "goal_form.m"
                {
#line 731 "goal_form.m"
                  MR_Word hlds__goal_form__Reason_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_3, (MR_Integer) 1)));
#line 731 "goal_form.m"
                  MR_Word hlds__goal_form__SubGoal_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_3, (MR_Integer) 2)));
#line 733 "goal_form.m"
                  MR_Word hlds__goal_form__FGT_42;
#line 733 "goal_form.m"
                  MR_Word hlds__goal_form__V_41_41;

#line 733 "goal_form.m"
                  hlds__goal_form__succeeded = ((((MR_tag((MR_Word) hlds__goal_form__Reason_40)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__Reason_40, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 733 "goal_form.m"
                  if (hlds__goal_form__succeeded)
#line 733 "goal_form.m"
                    {
#line 733 "goal_form.m"
                      hlds__goal_form__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__Reason_40, (MR_Integer) 1)));
#line 733 "goal_form.m"
                      hlds__goal_form__FGT_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__Reason_40, (MR_Integer) 2)));
#line 735 "goal_form.m"
#line 735 "goal_form.m"
                      switch (hlds__goal_form__FGT_42) {
#line 735 "goal_form.m"
                        default:
#line 735 "goal_form.m"
                          hlds__goal_form__succeeded = MR_FALSE;
#line 735 "goal_form.m"
                          break;
#line 735 "goal_form.m"
                        case (MR_Integer) 1:
#line 734 "goal_form.m"
                          hlds__goal_form__succeeded = MR_TRUE;
#line 735 "goal_form.m"
                          break;
#line 735 "goal_form.m"
                        case (MR_Integer) 2:
#line 735 "goal_form.m"
                          hlds__goal_form__succeeded = MR_TRUE;
#line 735 "goal_form.m"
                          break;
#line 735 "goal_form.m"
                      }
#line 733 "goal_form.m"
                    }
#line 732 "goal_form.m"
                  if (hlds__goal_form__succeeded)
#line 738 "goal_form.m"
                    hlds__goal_form__IsFlat_4 = (MR_Integer) 1;
#line 732 "goal_form.m"
                  else
#line 699 "goal_form.m"
                    {
#line 699 "goal_form.m"
                      MR_Word hlds__goal_form__GoalExpr_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__SubGoal_43, (MR_Integer) 0)));
#line 699 "goal_form.m"
                      MR_Word hlds__goal_form___GoalInfo_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__SubGoal_43, (MR_Integer) 1)));

#line 699 "goal_form.m"
                      /* direct tailcall eliminated */
#line 699 "goal_form.m"
                      {
#line 699 "goal_form.m"
                        MR_Word hlds__goal_form__GoalExpr__tmp_copy_3 = hlds__goal_form__GoalExpr_46;

#line 699 "goal_form.m"
                        hlds__goal_form__GoalExpr_3 = hlds__goal_form__GoalExpr__tmp_copy_3;
#line 699 "goal_form.m"
                      }
#line 699 "goal_form.m"
                      continue;
#line 699 "goal_form.m"
                    }
#line 731 "goal_form.m"
                }
#line 709 "goal_form.m"
                break;
#line 709 "goal_form.m"
            }
#line 709 "goal_form.m"
            break;
#line 709 "goal_form.m"
        }
#line 709 "goal_form.m"
        return hlds__goal_form__IsFlat_4;
#line 709 "goal_form.m"
      }
#line 709 "goal_form.m"
      break;
#line 709 "goal_form.m"
    }
#line 701 "goal_form.m"
}

#line 687 "goal_form.m"
static MR_Word MR_CALL 
hlds__goal_form__case_list_can_throw_2_f_0(
#line 687 "goal_form.m"
  MR_Word hlds__goal_form__MaybeModuleInfo_1,
#line 687 "goal_form.m"
  MR_Word hlds__goal_form__HeadVar__2_2)
#line 687 "goal_form.m"
{
#line 689 "goal_form.m"
  while (MR_TRUE)
#line 689 "goal_form.m"
    {
#line 689 "goal_form.m"
      /* tailcall optimized into a loop */
#line 689 "goal_form.m"
      {
#line 689 "goal_form.m"
        MR_bool hlds__goal_form__succeeded;
#line 689 "goal_form.m"
        MR_Word hlds__goal_form__HeadVar__3_3;

#line 689 "goal_form.m"
        if ((hlds__goal_form__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 689 "goal_form.m"
          hlds__goal_form__HeadVar__3_3 = (MR_Integer) 0;
#line 689 "goal_form.m"
        else
#line 690 "goal_form.m"
          {
#line 690 "goal_form.m"
            MR_Word hlds__goal_form__Goal_8;
#line 690 "goal_form.m"
            MR_Word hlds__goal_form__Cases_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__HeadVar__2_2, (MR_Integer) 1)));
#line 690 "goal_form.m"
            MR_Word hlds__goal_form__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__HeadVar__2_2, (MR_Integer) 0)));
#line 690 "goal_form.m"
            MR_Word hlds__goal_form__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__V_10_10, (MR_Integer) 0)));
#line 690 "goal_form.m"
            MR_Word hlds__goal_form__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__V_10_10, (MR_Integer) 1)));
#line 691 "goal_form.m"
            MR_Word hlds__goal_form__GoalExpr_14;
#line 691 "goal_form.m"
            MR_Word hlds__goal_form__GoalInfo_15;
#line 691 "goal_form.m"
            MR_Word hlds__goal_form__Determinism_16;

#line 690 "goal_form.m"
            hlds__goal_form__Goal_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__V_10_10, (MR_Integer) 2)));
#line 568 "goal_form.m"
            hlds__goal_form__GoalExpr_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Goal_8, (MR_Integer) 0)));
#line 568 "goal_form.m"
            hlds__goal_form__GoalInfo_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Goal_8, (MR_Integer) 1)));
#line 570 "goal_form.m"
            {
#line 570 "goal_form.m"
              hlds__goal_form__Determinism_16 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(hlds__goal_form__GoalInfo_15);
            }
#line 571 "goal_form.m"
            hlds__goal_form__succeeded = (hlds__goal_form__Determinism_16 == (MR_Integer) 6);
#line 571 "goal_form.m"
            if (hlds__goal_form__succeeded)
#line 572 "goal_form.m"
              hlds__goal_form__succeeded = MR_TRUE;
#line 571 "goal_form.m"
            else
#line 574 "goal_form.m"
              {
#line 574 "goal_form.m"
                MR_Word hlds__goal_form__V_18_18;

#line 574 "goal_form.m"
                {
#line 574 "goal_form.m"
                  hlds__goal_form__V_18_18 = hlds__goal_form__goal_expr_can_throw_2_f_0(hlds__goal_form__MaybeModuleInfo_1, hlds__goal_form__GoalExpr_14);
                }
#line 691 "goal_form.m"
                hlds__goal_form__succeeded = (hlds__goal_form__V_18_18 == (MR_Integer) 1);
#line 574 "goal_form.m"
              }
#line 690 "goal_form.m"
            if (hlds__goal_form__succeeded)
#line 692 "goal_form.m"
              hlds__goal_form__HeadVar__3_3 = (MR_Integer) 1;
#line 690 "goal_form.m"
            else
#line 694 "goal_form.m"
              {
#line 694 "goal_form.m"
                /* direct tailcall eliminated */
#line 694 "goal_form.m"
                {
#line 694 "goal_form.m"
                  MR_Word hlds__goal_form__HeadVar__2__tmp_copy_2 = hlds__goal_form__Cases_9;

#line 694 "goal_form.m"
                  hlds__goal_form__HeadVar__2_2 = hlds__goal_form__HeadVar__2__tmp_copy_2;
#line 694 "goal_form.m"
                }
#line 694 "goal_form.m"
                continue;
#line 694 "goal_form.m"
              }
#line 690 "goal_form.m"
          }
#line 689 "goal_form.m"
        return hlds__goal_form__HeadVar__3_3;
#line 689 "goal_form.m"
      }
#line 689 "goal_form.m"
      break;
#line 689 "goal_form.m"
    }
#line 687 "goal_form.m"
}

#line 677 "goal_form.m"
static MR_Word MR_CALL 
hlds__goal_form__goal_list_can_throw_2_f_0(
#line 677 "goal_form.m"
  MR_Word hlds__goal_form__MaybeModuleInfo_1,
#line 677 "goal_form.m"
  MR_Word hlds__goal_form__HeadVar__2_2)
#line 677 "goal_form.m"
{
#line 679 "goal_form.m"
  while (MR_TRUE)
#line 679 "goal_form.m"
    {
#line 679 "goal_form.m"
      /* tailcall optimized into a loop */
#line 679 "goal_form.m"
      {
#line 679 "goal_form.m"
        MR_bool hlds__goal_form__succeeded;
#line 679 "goal_form.m"
        MR_Word hlds__goal_form__HeadVar__3_3;

#line 679 "goal_form.m"
        if ((hlds__goal_form__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 679 "goal_form.m"
          hlds__goal_form__HeadVar__3_3 = (MR_Integer) 0;
#line 679 "goal_form.m"
        else
#line 680 "goal_form.m"
          {
#line 680 "goal_form.m"
            MR_Word hlds__goal_form__Goal_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__HeadVar__2_2, (MR_Integer) 0)));
#line 680 "goal_form.m"
            MR_Word hlds__goal_form__Goals_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__HeadVar__2_2, (MR_Integer) 1)));
#line 681 "goal_form.m"
            MR_Word hlds__goal_form__GoalExpr_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Goal_6, (MR_Integer) 0)));
#line 681 "goal_form.m"
            MR_Word hlds__goal_form__GoalInfo_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Goal_6, (MR_Integer) 1)));
#line 681 "goal_form.m"
            MR_Word hlds__goal_form__Determinism_13;

#line 570 "goal_form.m"
            {
#line 570 "goal_form.m"
              hlds__goal_form__Determinism_13 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(hlds__goal_form__GoalInfo_12);
            }
#line 571 "goal_form.m"
            hlds__goal_form__succeeded = (hlds__goal_form__Determinism_13 == (MR_Integer) 6);
#line 571 "goal_form.m"
            if (hlds__goal_form__succeeded)
#line 572 "goal_form.m"
              hlds__goal_form__succeeded = MR_TRUE;
#line 571 "goal_form.m"
            else
#line 574 "goal_form.m"
              {
#line 574 "goal_form.m"
                MR_Word hlds__goal_form__V_15_15;

#line 574 "goal_form.m"
                {
#line 574 "goal_form.m"
                  hlds__goal_form__V_15_15 = hlds__goal_form__goal_expr_can_throw_2_f_0(hlds__goal_form__MaybeModuleInfo_1, hlds__goal_form__GoalExpr_11);
                }
#line 681 "goal_form.m"
                hlds__goal_form__succeeded = (hlds__goal_form__V_15_15 == (MR_Integer) 1);
#line 574 "goal_form.m"
              }
#line 680 "goal_form.m"
            if (hlds__goal_form__succeeded)
#line 682 "goal_form.m"
              hlds__goal_form__HeadVar__3_3 = (MR_Integer) 1;
#line 680 "goal_form.m"
            else
#line 684 "goal_form.m"
              {
#line 684 "goal_form.m"
                /* direct tailcall eliminated */
#line 684 "goal_form.m"
                {
#line 684 "goal_form.m"
                  MR_Word hlds__goal_form__HeadVar__2__tmp_copy_2 = hlds__goal_form__Goals_7;

#line 684 "goal_form.m"
                  hlds__goal_form__HeadVar__2_2 = hlds__goal_form__HeadVar__2__tmp_copy_2;
#line 684 "goal_form.m"
                }
#line 684 "goal_form.m"
                continue;
#line 684 "goal_form.m"
              }
#line 680 "goal_form.m"
          }
#line 679 "goal_form.m"
        return hlds__goal_form__HeadVar__3_3;
#line 679 "goal_form.m"
      }
#line 679 "goal_form.m"
      break;
#line 679 "goal_form.m"
    }
#line 677 "goal_form.m"
}

#line 577 "goal_form.m"
static MR_Word MR_CALL 
hlds__goal_form__goal_expr_can_throw_2_f_0(
#line 577 "goal_form.m"
  MR_Word hlds__goal_form__MaybeModuleInfo_4,
#line 577 "goal_form.m"
  MR_Word hlds__goal_form__GoalExpr_5)
#line 577 "goal_form.m"
{
#line 581 "goal_form.m"
  {
#line 581 "goal_form.m"
    MR_bool hlds__goal_form__succeeded;
#line 581 "goal_form.m"
    MR_Word hlds__goal_form__CanThrow_6;

#line 581 "goal_form.m"
#line 581 "goal_form.m"
    switch (MR_tag((MR_Word) hlds__goal_form__GoalExpr_5)) {
#line 581 "goal_form.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 581 "goal_form.m"
      case (MR_Integer) 0:
#line 647 "goal_form.m"
        {
#line 647 "goal_form.m"
          MR_Word hlds__goal_form__SubGoal_66 = (MR_Word) MR_body(((MR_Word) hlds__goal_form__GoalExpr_5), (MR_Integer) 0);

#line 648 "goal_form.m"
          {
#line 648 "goal_form.m"
            hlds__goal_form__CanThrow_6 = hlds__goal_form__goal_can_throw_func_2_f_0(hlds__goal_form__MaybeModuleInfo_4, hlds__goal_form__SubGoal_66);
          }
#line 647 "goal_form.m"
        }
#line 581 "goal_form.m"
        break;
#line 581 "goal_form.m"
      case (MR_Integer) 1:
#line 581 "goal_form.m"
        {
#line 581 "goal_form.m"
          MR_Word hlds__goal_form__Uni_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__GoalExpr_5, (MR_Integer) 3)));
#line 581 "goal_form.m"
          MR_Word hlds__goal_form__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__GoalExpr_5, (MR_Integer) 0)));
#line 581 "goal_form.m"
          MR_Word hlds__goal_form__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__GoalExpr_5, (MR_Integer) 1)));
#line 581 "goal_form.m"
          MR_Word hlds__goal_form__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__GoalExpr_5, (MR_Integer) 2)));
#line 581 "goal_form.m"
          MR_Word hlds__goal_form__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__GoalExpr_5, (MR_Integer) 4)));

#line 589 "goal_form.m"
#line 589 "goal_form.m"
          switch (MR_tag((MR_Word) hlds__goal_form__Uni_10)) {
#line 589 "goal_form.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 589 "goal_form.m"
            case (MR_Integer) 0:
#line 589 "goal_form.m"
            case (MR_Integer) 1:
#line 589 "goal_form.m"
            case (MR_Integer) 2:
#line 588 "goal_form.m"
              hlds__goal_form__CanThrow_6 = (MR_Integer) 0;
#line 589 "goal_form.m"
              break;
#line 589 "goal_form.m"
            case (MR_Integer) 3:
#line 589 "goal_form.m"
#line 589 "goal_form.m"
              switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__Uni_10, (MR_Integer) 0)))) {
#line 589 "goal_form.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 589 "goal_form.m"
                case (MR_Integer) 0:
#line 588 "goal_form.m"
                  hlds__goal_form__CanThrow_6 = (MR_Integer) 0;
#line 589 "goal_form.m"
                  break;
#line 589 "goal_form.m"
                case (MR_Integer) 1:
#line 593 "goal_form.m"
                  hlds__goal_form__CanThrow_6 = (MR_Integer) 1;
#line 589 "goal_form.m"
                  break;
#line 589 "goal_form.m"
              }
#line 589 "goal_form.m"
              break;
#line 589 "goal_form.m"
          }
#line 581 "goal_form.m"
        }
#line 581 "goal_form.m"
        break;
#line 581 "goal_form.m"
      case (MR_Integer) 2:
#line 596 "goal_form.m"
        {
#line 596 "goal_form.m"
          MR_Word hlds__goal_form__PredId_32 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__GoalExpr_5, (MR_Integer) 0)));
#line 596 "goal_form.m"
          MR_Integer hlds__goal_form__ProcId_33 = ((MR_Integer) (MR_hl_field(MR_mktag(2), hlds__goal_form__GoalExpr_5, (MR_Integer) 1)));
#line 596 "goal_form.m"
          MR_Word hlds__goal_form__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__GoalExpr_5, (MR_Integer) 2)));
#line 596 "goal_form.m"
          MR_Word hlds__goal_form__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__GoalExpr_5, (MR_Integer) 3)));
#line 596 "goal_form.m"
          MR_Word hlds__goal_form__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__GoalExpr_5, (MR_Integer) 4)));
#line 596 "goal_form.m"
          MR_Word hlds__goal_form__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__GoalExpr_5, (MR_Integer) 5)));
#line 598 "goal_form.m"
          MR_Word hlds__goal_form__ModuleInfo_38;
#line 598 "goal_form.m"
          MR_Word hlds__goal_form__ProcInfo_40;
#line 598 "goal_form.m"
          MR_Word hlds__goal_form__MaybeExceptionInfo_41;
#line 598 "goal_form.m"
          MR_Word hlds__goal_form__ExceptionInfo_42;
#line 598 "goal_form.m"
          MR_Word hlds__goal_form__V_89_89;
#line 599 "goal_form.m"
          MR_Word hlds__goal_form___PredInfo_39;
#line 603 "goal_form.m"
          MR_Word hlds__goal_form__V_43_43;

#line 598 "goal_form.m"
          hlds__goal_form__succeeded = ((MR_tag((MR_Word) hlds__goal_form__MaybeModuleInfo_4)) == (MR_mktag((MR_Integer) 1)));
#line 598 "goal_form.m"
          if (hlds__goal_form__succeeded)
#line 598 "goal_form.m"
            {
#line 598 "goal_form.m"
              hlds__goal_form__ModuleInfo_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__MaybeModuleInfo_4, (MR_Integer) 0)));
#line 599 "goal_form.m"
              {
#line 599 "goal_form.m"
                hlds__hlds_module__module_info_pred_proc_info_5_p_0(hlds__goal_form__ModuleInfo_38, hlds__goal_form__PredId_32, hlds__goal_form__ProcId_33, &hlds__goal_form___PredInfo_39, &hlds__goal_form__ProcInfo_40);
              }
#line 601 "goal_form.m"
              {
#line 601 "goal_form.m"
                hlds__hlds_pred__proc_info_get_exception_info_2_p_0(hlds__goal_form__ProcInfo_40, &hlds__goal_form__MaybeExceptionInfo_41);
              }
#line 602 "goal_form.m"
              hlds__goal_form__succeeded = ((MR_tag((MR_Word) hlds__goal_form__MaybeExceptionInfo_41)) == (MR_mktag((MR_Integer) 1)));
#line 602 "goal_form.m"
              if (hlds__goal_form__succeeded)
#line 602 "goal_form.m"
                {
#line 602 "goal_form.m"
                  hlds__goal_form__ExceptionInfo_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__MaybeExceptionInfo_41, (MR_Integer) 0)));
#line 603 "goal_form.m"
                  hlds__goal_form__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__ExceptionInfo_42, (MR_Integer) 0)));
#line 603 "goal_form.m"
                  hlds__goal_form__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__ExceptionInfo_42, (MR_Integer) 1)));
#line 603 "goal_form.m"
                  hlds__goal_form__succeeded = (hlds__goal_form__V_89_89 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 602 "goal_form.m"
                }
#line 598 "goal_form.m"
            }
#line 597 "goal_form.m"
          if (hlds__goal_form__succeeded)
#line 605 "goal_form.m"
            hlds__goal_form__CanThrow_6 = (MR_Integer) 0;
#line 597 "goal_form.m"
          else
#line 607 "goal_form.m"
            hlds__goal_form__CanThrow_6 = (MR_Integer) 1;
#line 596 "goal_form.m"
        }
#line 581 "goal_form.m"
        break;
#line 581 "goal_form.m"
      case (MR_Integer) 3:
#line 581 "goal_form.m"
#line 581 "goal_form.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_5, (MR_Integer) 0)))) {
#line 581 "goal_form.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 581 "goal_form.m"
          case (MR_Integer) 0:
#line 628 "goal_form.m"
            hlds__goal_form__CanThrow_6 = (MR_Integer) 1;
#line 581 "goal_form.m"
            break;
#line 581 "goal_form.m"
          case (MR_Integer) 1:
#line 610 "goal_form.m"
            {
#line 610 "goal_form.m"
              MR_Word hlds__goal_form__Attributes_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_5, (MR_Integer) 1)));
#line 610 "goal_form.m"
              MR_Word hlds__goal_form__ExceptionStatus_51;
#line 610 "goal_form.m"
              MR_Word hlds__goal_form__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_5, (MR_Integer) 2)));
#line 610 "goal_form.m"
              MR_Integer hlds__goal_form__V_46_46 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_5, (MR_Integer) 3)));
#line 610 "goal_form.m"
              MR_Word hlds__goal_form__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_5, (MR_Integer) 4)));
#line 610 "goal_form.m"
              MR_Word hlds__goal_form__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_5, (MR_Integer) 5)));
#line 610 "goal_form.m"
              MR_Word hlds__goal_form__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_5, (MR_Integer) 6)));
#line 610 "goal_form.m"
              MR_Word hlds__goal_form__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_5, (MR_Integer) 7)));

#line 611 "goal_form.m"
              {
#line 611 "goal_form.m"
                hlds__goal_form__ExceptionStatus_51 = parse_tree__prog_data__get_may_throw_exception_1_f_0(hlds__goal_form__Attributes_44);
              }
#line 615 "goal_form.m"
#line 615 "goal_form.m"
              switch (hlds__goal_form__ExceptionStatus_51) {
#line 615 "goal_form.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 615 "goal_form.m"
                case (MR_Integer) 1:
#line 616 "goal_form.m"
                  {
#line 616 "goal_form.m"
                    MR_Word hlds__goal_form__V_88_88;

#line 617 "goal_form.m"
                    {
#line 617 "goal_form.m"
                      hlds__goal_form__V_88_88 = parse_tree__prog_data__get_may_call_mercury_1_f_0(hlds__goal_form__Attributes_44);
                    }
#line 617 "goal_form.m"
                    hlds__goal_form__succeeded = (hlds__goal_form__V_88_88 == (MR_Integer) 1);
#line 616 "goal_form.m"
                  }
#line 615 "goal_form.m"
                  break;
#line 615 "goal_form.m"
                case (MR_Integer) 0:
#line 614 "goal_form.m"
                  hlds__goal_form__succeeded = MR_TRUE;
#line 615 "goal_form.m"
                  break;
#line 615 "goal_form.m"
              }
#line 612 "goal_form.m"
              if (hlds__goal_form__succeeded)
#line 620 "goal_form.m"
                hlds__goal_form__CanThrow_6 = (MR_Integer) 0;
#line 612 "goal_form.m"
              else
#line 622 "goal_form.m"
                hlds__goal_form__CanThrow_6 = (MR_Integer) 1;
#line 610 "goal_form.m"
            }
#line 581 "goal_form.m"
            break;
#line 581 "goal_form.m"
          case (MR_Integer) 2:
#line 632 "goal_form.m"
            {
#line 632 "goal_form.m"
              MR_Word hlds__goal_form__Goals_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_5, (MR_Integer) 2)));
#line 630 "goal_form.m"
              MR_Word hlds__goal_form___ConjType_57 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_5, (MR_Integer) 1)));

#line 633 "goal_form.m"
              {
#line 633 "goal_form.m"
                hlds__goal_form__CanThrow_6 = hlds__goal_form__goal_list_can_throw_2_f_0(hlds__goal_form__MaybeModuleInfo_4, hlds__goal_form__Goals_58);
              }
#line 632 "goal_form.m"
            }
#line 581 "goal_form.m"
            break;
#line 581 "goal_form.m"
          case (MR_Integer) 3:
#line 632 "goal_form.m"
            {
#line 632 "goal_form.m"
              MR_Word hlds__goal_form__Goals_91 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_5, (MR_Integer) 1)));

#line 633 "goal_form.m"
              {
#line 633 "goal_form.m"
                hlds__goal_form__CanThrow_6 = hlds__goal_form__goal_list_can_throw_2_f_0(hlds__goal_form__MaybeModuleInfo_4, hlds__goal_form__Goals_91);
              }
#line 632 "goal_form.m"
            }
#line 581 "goal_form.m"
            break;
#line 581 "goal_form.m"
          case (MR_Integer) 4:
#line 635 "goal_form.m"
            {
#line 635 "goal_form.m"
              MR_Word hlds__goal_form__Cases_61 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_5, (MR_Integer) 3)));
#line 635 "goal_form.m"
              MR_Word hlds__goal_form___Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_5, (MR_Integer) 1)));
#line 635 "goal_form.m"
              MR_Word hlds__goal_form___CanFail_60 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_5, (MR_Integer) 2)));

#line 636 "goal_form.m"
              {
#line 636 "goal_form.m"
                hlds__goal_form__CanThrow_6 = hlds__goal_form__case_list_can_throw_2_f_0(hlds__goal_form__MaybeModuleInfo_4, hlds__goal_form__Cases_61);
              }
#line 635 "goal_form.m"
            }
#line 581 "goal_form.m"
            break;
#line 581 "goal_form.m"
          case (MR_Integer) 5:
#line 650 "goal_form.m"
            {
#line 650 "goal_form.m"
              MR_Word hlds__goal_form__Reason_67 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_5, (MR_Integer) 1)));
#line 650 "goal_form.m"
              MR_Word hlds__goal_form__SubGoal_90 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_5, (MR_Integer) 2)));
#line 652 "goal_form.m"
              MR_Word hlds__goal_form__FGT_69;
#line 652 "goal_form.m"
              MR_Word hlds__goal_form__V_68_68;

#line 652 "goal_form.m"
              hlds__goal_form__succeeded = ((((MR_tag((MR_Word) hlds__goal_form__Reason_67)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__Reason_67, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 652 "goal_form.m"
              if (hlds__goal_form__succeeded)
#line 652 "goal_form.m"
                {
#line 652 "goal_form.m"
                  hlds__goal_form__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__Reason_67, (MR_Integer) 1)));
#line 652 "goal_form.m"
                  hlds__goal_form__FGT_69 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__Reason_67, (MR_Integer) 2)));
#line 654 "goal_form.m"
#line 654 "goal_form.m"
                  switch (hlds__goal_form__FGT_69) {
#line 654 "goal_form.m"
                    default:
#line 654 "goal_form.m"
                      hlds__goal_form__succeeded = MR_FALSE;
#line 654 "goal_form.m"
                      break;
#line 654 "goal_form.m"
                    case (MR_Integer) 1:
#line 653 "goal_form.m"
                      hlds__goal_form__succeeded = MR_TRUE;
#line 654 "goal_form.m"
                      break;
#line 654 "goal_form.m"
                    case (MR_Integer) 2:
#line 654 "goal_form.m"
                      hlds__goal_form__succeeded = MR_TRUE;
#line 654 "goal_form.m"
                      break;
#line 654 "goal_form.m"
                  }
#line 652 "goal_form.m"
                }
#line 651 "goal_form.m"
              if (hlds__goal_form__succeeded)
#line 659 "goal_form.m"
                hlds__goal_form__CanThrow_6 = (MR_Integer) 0;
#line 651 "goal_form.m"
              else
#line 661 "goal_form.m"
                {
#line 661 "goal_form.m"
                  hlds__goal_form__CanThrow_6 = hlds__goal_form__goal_can_throw_func_2_f_0(hlds__goal_form__MaybeModuleInfo_4, hlds__goal_form__SubGoal_90);
                }
#line 650 "goal_form.m"
            }
#line 581 "goal_form.m"
            break;
#line 581 "goal_form.m"
          case (MR_Integer) 6:
#line 638 "goal_form.m"
            {
#line 638 "goal_form.m"
              MR_Word hlds__goal_form__Cond_63 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_5, (MR_Integer) 2)));
#line 638 "goal_form.m"
              MR_Word hlds__goal_form__Then_64 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_5, (MR_Integer) 3)));
#line 638 "goal_form.m"
              MR_Word hlds__goal_form__Else_65 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_5, (MR_Integer) 4)));
#line 638 "goal_form.m"
              MR_Word hlds__goal_form__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_5, (MR_Integer) 1)));
#line 639 "goal_form.m"
              MR_Word hlds__goal_form__GoalExpr_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Cond_63, (MR_Integer) 0)));
#line 639 "goal_form.m"
              MR_Word hlds__goal_form__GoalInfo_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Cond_63, (MR_Integer) 1)));
#line 639 "goal_form.m"
              MR_Word hlds__goal_form__Determinism_96;

#line 570 "goal_form.m"
              {
#line 570 "goal_form.m"
                hlds__goal_form__Determinism_96 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(hlds__goal_form__GoalInfo_95);
              }
#line 571 "goal_form.m"
              hlds__goal_form__succeeded = (hlds__goal_form__Determinism_96 == (MR_Integer) 6);
#line 571 "goal_form.m"
              if (hlds__goal_form__succeeded)
#line 572 "goal_form.m"
                hlds__goal_form__succeeded = MR_TRUE;
#line 571 "goal_form.m"
              else
#line 574 "goal_form.m"
                {
#line 574 "goal_form.m"
                  MR_Word hlds__goal_form__V_98_98;

#line 574 "goal_form.m"
                  {
#line 574 "goal_form.m"
                    hlds__goal_form__V_98_98 = hlds__goal_form__goal_expr_can_throw_2_f_0(hlds__goal_form__MaybeModuleInfo_4, hlds__goal_form__GoalExpr_94);
                  }
#line 639 "goal_form.m"
                  hlds__goal_form__succeeded = (hlds__goal_form__V_98_98 == (MR_Integer) 1);
#line 574 "goal_form.m"
                }
#line 639 "goal_form.m"
              if (hlds__goal_form__succeeded)
#line 640 "goal_form.m"
                hlds__goal_form__CanThrow_6 = (MR_Integer) 1;
#line 639 "goal_form.m"
              else
#line 641 "goal_form.m"
                {
#line 641 "goal_form.m"
                  MR_Word hlds__goal_form__V_87_87;

#line 641 "goal_form.m"
                  {
#line 641 "goal_form.m"
                    hlds__goal_form__V_87_87 = hlds__goal_form__goal_can_throw_func_2_f_0(hlds__goal_form__MaybeModuleInfo_4, hlds__goal_form__Then_64);
                  }
#line 641 "goal_form.m"
                  hlds__goal_form__succeeded = (hlds__goal_form__V_87_87 == (MR_Integer) 1);
#line 641 "goal_form.m"
                  if (hlds__goal_form__succeeded)
#line 642 "goal_form.m"
                    hlds__goal_form__CanThrow_6 = (MR_Integer) 1;
#line 641 "goal_form.m"
                  else
#line 644 "goal_form.m"
                    {
#line 644 "goal_form.m"
                      hlds__goal_form__CanThrow_6 = hlds__goal_form__goal_can_throw_func_2_f_0(hlds__goal_form__MaybeModuleInfo_4, hlds__goal_form__Else_65);
                    }
#line 641 "goal_form.m"
                }
#line 638 "goal_form.m"
            }
#line 581 "goal_form.m"
            break;
#line 581 "goal_form.m"
          case (MR_Integer) 7:
#line 664 "goal_form.m"
            {
#line 664 "goal_form.m"
              MR_Word hlds__goal_form__ShortHand_70 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_5, (MR_Integer) 1)));

#line 668 "goal_form.m"
#line 668 "goal_form.m"
              switch (MR_tag((MR_Word) hlds__goal_form__ShortHand_70)) {
#line 668 "goal_form.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 668 "goal_form.m"
                case (MR_Integer) 0:
#line 672 "goal_form.m"
                  {
#line 673 "goal_form.m"
                    {
#line 673 "goal_form.m"
                      mercury__require__unexpected_3_p_0((MR_String) "hlds.goal_form", (MR_String) "function \140hlds.goal_form.goal_expr_can_throw\'/2", (MR_String) "bi_implication");
                    }
#line 672 "goal_form.m"
                  }
#line 668 "goal_form.m"
                  break;
#line 668 "goal_form.m"
                case (MR_Integer) 1:
#line 667 "goal_form.m"
                  hlds__goal_form__CanThrow_6 = (MR_Integer) 1;
#line 668 "goal_form.m"
                  break;
#line 668 "goal_form.m"
                case (MR_Integer) 2:
#line 670 "goal_form.m"
                  hlds__goal_form__CanThrow_6 = (MR_Integer) 1;
#line 668 "goal_form.m"
                  break;
#line 668 "goal_form.m"
              }
#line 664 "goal_form.m"
            }
#line 581 "goal_form.m"
            break;
#line 581 "goal_form.m"
        }
#line 581 "goal_form.m"
        break;
#line 581 "goal_form.m"
    }
#line 581 "goal_form.m"
    return hlds__goal_form__CanThrow_6;
#line 581 "goal_form.m"
  }
#line 577 "goal_form.m"
}

#line 566 "goal_form.m"
static MR_Word MR_CALL 
hlds__goal_form__goal_can_throw_func_2_f_0(
#line 566 "goal_form.m"
  MR_Word hlds__goal_form__MaybeModuleInfo_4,
#line 566 "goal_form.m"
  MR_Word hlds__goal_form__HeadVar__2_2)
#line 566 "goal_form.m"
{
#line 569 "goal_form.m"
  {
#line 569 "goal_form.m"
    MR_bool hlds__goal_form__succeeded;
#line 569 "goal_form.m"
    MR_Word hlds__goal_form__CanThrow_7;
#line 569 "goal_form.m"
    MR_Word hlds__goal_form__GoalExpr_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__HeadVar__2_2, (MR_Integer) 0)));
#line 569 "goal_form.m"
    MR_Word hlds__goal_form__GoalInfo_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__HeadVar__2_2, (MR_Integer) 1)));
#line 569 "goal_form.m"
    MR_Word hlds__goal_form__Determinism_8;

#line 570 "goal_form.m"
    {
#line 570 "goal_form.m"
      hlds__goal_form__Determinism_8 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(hlds__goal_form__GoalInfo_6);
    }
#line 571 "goal_form.m"
    hlds__goal_form__succeeded = (hlds__goal_form__Determinism_8 == (MR_Integer) 6);
#line 571 "goal_form.m"
    if (hlds__goal_form__succeeded)
#line 572 "goal_form.m"
      hlds__goal_form__CanThrow_7 = (MR_Integer) 1;
#line 571 "goal_form.m"
    else
#line 574 "goal_form.m"
      {
#line 574 "goal_form.m"
        hlds__goal_form__CanThrow_7 = hlds__goal_form__goal_expr_can_throw_2_f_0(hlds__goal_form__MaybeModuleInfo_4, hlds__goal_form__GoalExpr_5);
      }
#line 569 "goal_form.m"
    return hlds__goal_form__CanThrow_7;
#line 569 "goal_form.m"
  }
#line 566 "goal_form.m"
}

#line 554 "goal_form.m"
static MR_Word MR_CALL 
hlds__goal_form__case_list_can_loop_2_f_0(
#line 554 "goal_form.m"
  MR_Word hlds__goal_form__MaybeModuleInfo_1,
#line 554 "goal_form.m"
  MR_Word hlds__goal_form__HeadVar__2_2)
#line 554 "goal_form.m"
{
#line 556 "goal_form.m"
  while (MR_TRUE)
#line 556 "goal_form.m"
    {
#line 556 "goal_form.m"
      /* tailcall optimized into a loop */
#line 556 "goal_form.m"
      {
#line 556 "goal_form.m"
        MR_bool hlds__goal_form__succeeded;
#line 556 "goal_form.m"
        MR_Word hlds__goal_form__HeadVar__3_3;

#line 556 "goal_form.m"
        if ((hlds__goal_form__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 556 "goal_form.m"
          hlds__goal_form__HeadVar__3_3 = (MR_Integer) 0;
#line 556 "goal_form.m"
        else
#line 557 "goal_form.m"
          {
#line 557 "goal_form.m"
            MR_Word hlds__goal_form__Goal_8;
#line 557 "goal_form.m"
            MR_Word hlds__goal_form__Cases_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__HeadVar__2_2, (MR_Integer) 1)));
#line 557 "goal_form.m"
            MR_Word hlds__goal_form__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__HeadVar__2_2, (MR_Integer) 0)));
#line 557 "goal_form.m"
            MR_Word hlds__goal_form__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__V_10_10, (MR_Integer) 0)));
#line 557 "goal_form.m"
            MR_Word hlds__goal_form__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__V_10_10, (MR_Integer) 1)));
#line 558 "goal_form.m"
            MR_Word hlds__goal_form__V_11_11;

#line 557 "goal_form.m"
            hlds__goal_form__Goal_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__V_10_10, (MR_Integer) 2)));
#line 558 "goal_form.m"
            {
#line 558 "goal_form.m"
              hlds__goal_form__V_11_11 = hlds__goal_form__goal_can_loop_func_2_f_0(hlds__goal_form__MaybeModuleInfo_1, hlds__goal_form__Goal_8);
            }
#line 558 "goal_form.m"
            hlds__goal_form__succeeded = (hlds__goal_form__V_11_11 == (MR_Integer) 1);
#line 557 "goal_form.m"
            if (hlds__goal_form__succeeded)
#line 559 "goal_form.m"
              hlds__goal_form__HeadVar__3_3 = (MR_Integer) 1;
#line 557 "goal_form.m"
            else
#line 561 "goal_form.m"
              {
#line 561 "goal_form.m"
                /* direct tailcall eliminated */
#line 561 "goal_form.m"
                {
#line 561 "goal_form.m"
                  MR_Word hlds__goal_form__HeadVar__2__tmp_copy_2 = hlds__goal_form__Cases_9;

#line 561 "goal_form.m"
                  hlds__goal_form__HeadVar__2_2 = hlds__goal_form__HeadVar__2__tmp_copy_2;
#line 561 "goal_form.m"
                }
#line 561 "goal_form.m"
                continue;
#line 561 "goal_form.m"
              }
#line 557 "goal_form.m"
          }
#line 556 "goal_form.m"
        return hlds__goal_form__HeadVar__3_3;
#line 556 "goal_form.m"
      }
#line 556 "goal_form.m"
      break;
#line 556 "goal_form.m"
    }
#line 554 "goal_form.m"
}

#line 544 "goal_form.m"
static MR_Word MR_CALL 
hlds__goal_form__goal_list_can_loop_2_f_0(
#line 544 "goal_form.m"
  MR_Word hlds__goal_form__MaybeModuleInfo_1,
#line 544 "goal_form.m"
  MR_Word hlds__goal_form__HeadVar__2_2)
#line 544 "goal_form.m"
{
#line 546 "goal_form.m"
  while (MR_TRUE)
#line 546 "goal_form.m"
    {
#line 546 "goal_form.m"
      /* tailcall optimized into a loop */
#line 546 "goal_form.m"
      {
#line 546 "goal_form.m"
        MR_bool hlds__goal_form__succeeded;
#line 546 "goal_form.m"
        MR_Word hlds__goal_form__HeadVar__3_3;

#line 546 "goal_form.m"
        if ((hlds__goal_form__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 546 "goal_form.m"
          hlds__goal_form__HeadVar__3_3 = (MR_Integer) 0;
#line 546 "goal_form.m"
        else
#line 547 "goal_form.m"
          {
#line 547 "goal_form.m"
            MR_Word hlds__goal_form__Goal_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__HeadVar__2_2, (MR_Integer) 0)));
#line 547 "goal_form.m"
            MR_Word hlds__goal_form__Goals_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__HeadVar__2_2, (MR_Integer) 1)));
#line 548 "goal_form.m"
            MR_Word hlds__goal_form__V_8_8;

#line 548 "goal_form.m"
            {
#line 548 "goal_form.m"
              hlds__goal_form__V_8_8 = hlds__goal_form__goal_can_loop_func_2_f_0(hlds__goal_form__MaybeModuleInfo_1, hlds__goal_form__Goal_6);
            }
#line 548 "goal_form.m"
            hlds__goal_form__succeeded = (hlds__goal_form__V_8_8 == (MR_Integer) 1);
#line 547 "goal_form.m"
            if (hlds__goal_form__succeeded)
#line 549 "goal_form.m"
              hlds__goal_form__HeadVar__3_3 = (MR_Integer) 1;
#line 547 "goal_form.m"
            else
#line 551 "goal_form.m"
              {
#line 551 "goal_form.m"
                /* direct tailcall eliminated */
#line 551 "goal_form.m"
                {
#line 551 "goal_form.m"
                  MR_Word hlds__goal_form__HeadVar__2__tmp_copy_2 = hlds__goal_form__Goals_7;

#line 551 "goal_form.m"
                  hlds__goal_form__HeadVar__2_2 = hlds__goal_form__HeadVar__2__tmp_copy_2;
#line 551 "goal_form.m"
                }
#line 551 "goal_form.m"
                continue;
#line 551 "goal_form.m"
              }
#line 547 "goal_form.m"
          }
#line 546 "goal_form.m"
        return hlds__goal_form__HeadVar__3_3;
#line 546 "goal_form.m"
      }
#line 546 "goal_form.m"
      break;
#line 546 "goal_form.m"
    }
#line 544 "goal_form.m"
}

#line 430 "goal_form.m"
static MR_Word MR_CALL 
hlds__goal_form__goal_can_loop_func_2_f_0(
#line 430 "goal_form.m"
  MR_Word hlds__goal_form__MaybeModuleInfo_4,
#line 430 "goal_form.m"
  MR_Word hlds__goal_form__Goal_5)
#line 430 "goal_form.m"
{
#line 432 "goal_form.m"
  while (MR_TRUE)
#line 432 "goal_form.m"
    {
#line 432 "goal_form.m"
      /* tailcall optimized into a loop */
#line 432 "goal_form.m"
      {
#line 432 "goal_form.m"
        MR_bool hlds__goal_form__succeeded;
#line 432 "goal_form.m"
        MR_Word hlds__goal_form__CanLoop_6;
#line 432 "goal_form.m"
        MR_Word hlds__goal_form__GoalExpr_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Goal_5, (MR_Integer) 0)));
#line 433 "goal_form.m"
        MR_Word hlds__goal_form__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Goal_5, (MR_Integer) 1)));

#line 449 "goal_form.m"
#line 449 "goal_form.m"
        switch (MR_tag((MR_Word) hlds__goal_form__GoalExpr_7)) {
#line 449 "goal_form.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 449 "goal_form.m"
          case (MR_Integer) 0:
#line 512 "goal_form.m"
            {
#line 512 "goal_form.m"
              MR_Word hlds__goal_form__SubGoal_69 = (MR_Word) MR_body(((MR_Word) hlds__goal_form__GoalExpr_7), (MR_Integer) 0);

#line 513 "goal_form.m"
              /* direct tailcall eliminated */
#line 513 "goal_form.m"
              {
#line 513 "goal_form.m"
                MR_Word hlds__goal_form__Goal__tmp_copy_5 = hlds__goal_form__SubGoal_69;

#line 513 "goal_form.m"
                hlds__goal_form__Goal_5 = hlds__goal_form__Goal__tmp_copy_5;
#line 513 "goal_form.m"
              }
#line 513 "goal_form.m"
              continue;
#line 512 "goal_form.m"
            }
#line 449 "goal_form.m"
            break;
#line 449 "goal_form.m"
          case (MR_Integer) 1:
#line 435 "goal_form.m"
            {
#line 435 "goal_form.m"
              MR_Word hlds__goal_form__Uni_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__GoalExpr_7, (MR_Integer) 3)));
#line 435 "goal_form.m"
              MR_Word hlds__goal_form__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__GoalExpr_7, (MR_Integer) 0)));
#line 435 "goal_form.m"
              MR_Word hlds__goal_form__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__GoalExpr_7, (MR_Integer) 1)));
#line 435 "goal_form.m"
              MR_Word hlds__goal_form__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__GoalExpr_7, (MR_Integer) 2)));
#line 435 "goal_form.m"
              MR_Word hlds__goal_form__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__GoalExpr_7, (MR_Integer) 4)));

#line 443 "goal_form.m"
#line 443 "goal_form.m"
              switch (MR_tag((MR_Word) hlds__goal_form__Uni_12)) {
#line 443 "goal_form.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 443 "goal_form.m"
                case (MR_Integer) 0:
#line 443 "goal_form.m"
                case (MR_Integer) 1:
#line 443 "goal_form.m"
                case (MR_Integer) 2:
#line 441 "goal_form.m"
                  hlds__goal_form__CanLoop_6 = (MR_Integer) 0;
#line 443 "goal_form.m"
                  break;
#line 443 "goal_form.m"
                case (MR_Integer) 3:
#line 443 "goal_form.m"
#line 443 "goal_form.m"
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__Uni_12, (MR_Integer) 0)))) {
#line 443 "goal_form.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 443 "goal_form.m"
                    case (MR_Integer) 0:
#line 441 "goal_form.m"
                      hlds__goal_form__CanLoop_6 = (MR_Integer) 0;
#line 443 "goal_form.m"
                      break;
#line 443 "goal_form.m"
                    case (MR_Integer) 1:
#line 447 "goal_form.m"
                      hlds__goal_form__CanLoop_6 = (MR_Integer) 1;
#line 443 "goal_form.m"
                      break;
#line 443 "goal_form.m"
                  }
#line 443 "goal_form.m"
                  break;
#line 443 "goal_form.m"
              }
#line 435 "goal_form.m"
            }
#line 449 "goal_form.m"
            break;
#line 449 "goal_form.m"
          case (MR_Integer) 2:
#line 450 "goal_form.m"
            {
#line 450 "goal_form.m"
              MR_Word hlds__goal_form__PredId_34 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__GoalExpr_7, (MR_Integer) 0)));
#line 450 "goal_form.m"
              MR_Integer hlds__goal_form__ProcId_35 = ((MR_Integer) (MR_hl_field(MR_mktag(2), hlds__goal_form__GoalExpr_7, (MR_Integer) 1)));
#line 450 "goal_form.m"
              MR_Word hlds__goal_form__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__GoalExpr_7, (MR_Integer) 2)));
#line 450 "goal_form.m"
              MR_Word hlds__goal_form__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__GoalExpr_7, (MR_Integer) 3)));
#line 450 "goal_form.m"
              MR_Word hlds__goal_form__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__GoalExpr_7, (MR_Integer) 4)));
#line 450 "goal_form.m"
              MR_Word hlds__goal_form__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__GoalExpr_7, (MR_Integer) 5)));
#line 452 "goal_form.m"
              MR_Word hlds__goal_form__ModuleInfo_40;
#line 452 "goal_form.m"
              MR_Word hlds__goal_form__ProcInfo_42;
#line 453 "goal_form.m"
              MR_Word hlds__goal_form__V_41_41;

#line 452 "goal_form.m"
              hlds__goal_form__succeeded = ((MR_tag((MR_Word) hlds__goal_form__MaybeModuleInfo_4)) == (MR_mktag((MR_Integer) 1)));
#line 452 "goal_form.m"
              if (hlds__goal_form__succeeded)
#line 452 "goal_form.m"
                {
#line 452 "goal_form.m"
                  hlds__goal_form__ModuleInfo_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__MaybeModuleInfo_4, (MR_Integer) 0)));
#line 453 "goal_form.m"
                  {
#line 453 "goal_form.m"
                    hlds__hlds_module__module_info_pred_proc_info_5_p_0(hlds__goal_form__ModuleInfo_40, hlds__goal_form__PredId_34, hlds__goal_form__ProcId_35, &hlds__goal_form__V_41_41, &hlds__goal_form__ProcInfo_42);
                  }
#line 456 "goal_form.m"
                  {
#line 456 "goal_form.m"
                    MR_Word hlds__goal_form__MaybeTermInfo_43;
#line 456 "goal_form.m"
                    MR_Word hlds__goal_form__V_97_97;

#line 456 "goal_form.m"
                    {
#line 456 "goal_form.m"
                      hlds__hlds_pred__proc_info_get_maybe_termination_info_2_p_0(hlds__goal_form__ProcInfo_42, &hlds__goal_form__MaybeTermInfo_43);
                    }
#line 457 "goal_form.m"
                    hlds__goal_form__succeeded = ((MR_tag((MR_Word) hlds__goal_form__MaybeTermInfo_43)) == (MR_mktag((MR_Integer) 1)));
#line 457 "goal_form.m"
                    if (hlds__goal_form__succeeded)
#line 457 "goal_form.m"
                      {
#line 457 "goal_form.m"
                        hlds__goal_form__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__MaybeTermInfo_43, (MR_Integer) 0)));
#line 457 "goal_form.m"
                        hlds__goal_form__succeeded = ((MR_tag((MR_Word) hlds__goal_form__V_97_97)) == (MR_mktag((MR_Integer) 0)));
#line 457 "goal_form.m"
                      }
#line 456 "goal_form.m"
                  }
#line 458 "goal_form.m"
                  if (!(hlds__goal_form__succeeded))
#line 459 "goal_form.m"
                    {
#line 459 "goal_form.m"
                      MR_Word hlds__goal_form__Term2Info_45;
#line 459 "goal_form.m"
                      MR_Word hlds__goal_form__V_95_95;
#line 459 "goal_form.m"
                      MR_Word hlds__goal_form__V_96_96;
#line 460 "goal_form.m"
                      MR_Word hlds__goal_form__V_46_46;

#line 459 "goal_form.m"
                      {
#line 459 "goal_form.m"
                        hlds__hlds_pred__proc_info_get_termination2_info_2_p_0(hlds__goal_form__ProcInfo_42, &hlds__goal_form__Term2Info_45);
                      }
#line 460 "goal_form.m"
                      {
#line 460 "goal_form.m"
                        hlds__goal_form__V_95_95 = transform_hlds__term_constr_main_types__term2_info_get_term_status_1_f_0(hlds__goal_form__Term2Info_45);
                      }
#line 460 "goal_form.m"
                      hlds__goal_form__succeeded = ((MR_tag((MR_Word) hlds__goal_form__V_95_95)) == (MR_mktag((MR_Integer) 1)));
#line 460 "goal_form.m"
                      if (hlds__goal_form__succeeded)
#line 460 "goal_form.m"
                        {
#line 460 "goal_form.m"
                          hlds__goal_form__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__V_95_95, (MR_Integer) 0)));
#line 460 "goal_form.m"
                          hlds__goal_form__succeeded = ((MR_tag((MR_Word) hlds__goal_form__V_96_96)) == (MR_mktag((MR_Integer) 0)));
#line 460 "goal_form.m"
                          if (hlds__goal_form__succeeded)
#line 460 "goal_form.m"
                            hlds__goal_form__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__V_96_96, (MR_Integer) 0)));
#line 460 "goal_form.m"
                        }
#line 459 "goal_form.m"
                    }
#line 452 "goal_form.m"
                }
#line 451 "goal_form.m"
              if (hlds__goal_form__succeeded)
#line 463 "goal_form.m"
                hlds__goal_form__CanLoop_6 = (MR_Integer) 0;
#line 451 "goal_form.m"
              else
#line 465 "goal_form.m"
                hlds__goal_form__CanLoop_6 = (MR_Integer) 1;
#line 450 "goal_form.m"
            }
#line 449 "goal_form.m"
            break;
#line 449 "goal_form.m"
          case (MR_Integer) 3:
#line 449 "goal_form.m"
#line 449 "goal_form.m"
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_7, (MR_Integer) 0)))) {
#line 449 "goal_form.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 449 "goal_form.m"
              case (MR_Integer) 0:
#line 471 "goal_form.m"
                hlds__goal_form__CanLoop_6 = (MR_Integer) 1;
#line 449 "goal_form.m"
                break;
#line 449 "goal_form.m"
              case (MR_Integer) 1:
#line 473 "goal_form.m"
                {
#line 473 "goal_form.m"
                  MR_Word hlds__goal_form__Attributes_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_7, (MR_Integer) 1)));
#line 473 "goal_form.m"
                  MR_Word hlds__goal_form__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_7, (MR_Integer) 2)));
#line 473 "goal_form.m"
                  MR_Integer hlds__goal_form__V_54_54 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_7, (MR_Integer) 3)));
#line 473 "goal_form.m"
                  MR_Word hlds__goal_form__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_7, (MR_Integer) 4)));
#line 473 "goal_form.m"
                  MR_Word hlds__goal_form__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_7, (MR_Integer) 5)));
#line 473 "goal_form.m"
                  MR_Word hlds__goal_form__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_7, (MR_Integer) 6)));
#line 473 "goal_form.m"
                  MR_Word hlds__goal_form__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_7, (MR_Integer) 7)));
#line 475 "goal_form.m"
                  MR_Word hlds__goal_form__Terminates_59;

#line 475 "goal_form.m"
                  {
#line 475 "goal_form.m"
                    hlds__goal_form__Terminates_59 = parse_tree__prog_data__get_terminates_1_f_0(hlds__goal_form__Attributes_52);
                  }
#line 478 "goal_form.m"
#line 478 "goal_form.m"
                  switch (hlds__goal_form__Terminates_59) {
#line 478 "goal_form.m"
                    default:
#line 478 "goal_form.m"
                      hlds__goal_form__succeeded = MR_FALSE;
#line 478 "goal_form.m"
                      break;
#line 478 "goal_form.m"
                    case (MR_Integer) 2:
#line 479 "goal_form.m"
                      {
#line 479 "goal_form.m"
                        MR_Word hlds__goal_form__V_94_94;

#line 480 "goal_form.m"
                        {
#line 480 "goal_form.m"
                          hlds__goal_form__V_94_94 = parse_tree__prog_data__get_may_call_mercury_1_f_0(hlds__goal_form__Attributes_52);
                        }
#line 480 "goal_form.m"
                        hlds__goal_form__succeeded = (hlds__goal_form__V_94_94 == (MR_Integer) 1);
#line 479 "goal_form.m"
                      }
#line 478 "goal_form.m"
                      break;
#line 478 "goal_form.m"
                    case (MR_Integer) 0:
#line 477 "goal_form.m"
                      hlds__goal_form__succeeded = MR_TRUE;
#line 478 "goal_form.m"
                      break;
#line 478 "goal_form.m"
                  }
#line 474 "goal_form.m"
                  if (hlds__goal_form__succeeded)
#line 483 "goal_form.m"
                    hlds__goal_form__CanLoop_6 = (MR_Integer) 0;
#line 474 "goal_form.m"
                  else
#line 485 "goal_form.m"
                    hlds__goal_form__CanLoop_6 = (MR_Integer) 1;
#line 473 "goal_form.m"
                }
#line 449 "goal_form.m"
                break;
#line 449 "goal_form.m"
              case (MR_Integer) 2:
#line 449 "goal_form.m"
                {
#line 449 "goal_form.m"
                  MR_Word hlds__goal_form__V_103_103 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_7, (MR_Integer) 2)));
#line 449 "goal_form.m"
                  MR_Word hlds__goal_form__V_104_104 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_7, (MR_Integer) 1)));

#line 449 "goal_form.m"
#line 449 "goal_form.m"
                  switch (hlds__goal_form__V_104_104) {
#line 449 "goal_form.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 449 "goal_form.m"
                    case (MR_Integer) 1:
#line 495 "goal_form.m"
                      hlds__goal_form__CanLoop_6 = (MR_Integer) 1;
#line 449 "goal_form.m"
                      break;
#line 449 "goal_form.m"
                    case (MR_Integer) 0:
#line 489 "goal_form.m"
                      {
#line 489 "goal_form.m"
                        hlds__goal_form__CanLoop_6 = hlds__goal_form__goal_list_can_loop_2_f_0(hlds__goal_form__MaybeModuleInfo_4, hlds__goal_form__V_103_103);
                      }
#line 449 "goal_form.m"
                      break;
#line 449 "goal_form.m"
                  }
#line 449 "goal_form.m"
                }
#line 449 "goal_form.m"
                break;
#line 449 "goal_form.m"
              case (MR_Integer) 3:
#line 497 "goal_form.m"
                {
#line 497 "goal_form.m"
                  MR_Word hlds__goal_form__Goals_98 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_7, (MR_Integer) 1)));

#line 498 "goal_form.m"
                  {
#line 498 "goal_form.m"
                    hlds__goal_form__CanLoop_6 = hlds__goal_form__goal_list_can_loop_2_f_0(hlds__goal_form__MaybeModuleInfo_4, hlds__goal_form__Goals_98);
                  }
#line 497 "goal_form.m"
                }
#line 449 "goal_form.m"
                break;
#line 449 "goal_form.m"
              case (MR_Integer) 4:
#line 500 "goal_form.m"
                {
#line 500 "goal_form.m"
                  MR_Word hlds__goal_form__Cases_64 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_7, (MR_Integer) 3)));
#line 500 "goal_form.m"
                  MR_Word hlds__goal_form___Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_7, (MR_Integer) 1)));
#line 500 "goal_form.m"
                  MR_Word hlds__goal_form___CanFail_63 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_7, (MR_Integer) 2)));

#line 501 "goal_form.m"
                  {
#line 501 "goal_form.m"
                    hlds__goal_form__CanLoop_6 = hlds__goal_form__case_list_can_loop_2_f_0(hlds__goal_form__MaybeModuleInfo_4, hlds__goal_form__Cases_64);
                  }
#line 500 "goal_form.m"
                }
#line 449 "goal_form.m"
                break;
#line 449 "goal_form.m"
              case (MR_Integer) 5:
#line 515 "goal_form.m"
                {
#line 515 "goal_form.m"
                  MR_Word hlds__goal_form__Reason_70 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_7, (MR_Integer) 1)));
#line 515 "goal_form.m"
                  MR_Word hlds__goal_form__SubGoal_99 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_7, (MR_Integer) 2)));
#line 517 "goal_form.m"
                  MR_Word hlds__goal_form__FGT_72;
#line 517 "goal_form.m"
                  MR_Word hlds__goal_form__V_71_71;

#line 517 "goal_form.m"
                  hlds__goal_form__succeeded = ((((MR_tag((MR_Word) hlds__goal_form__Reason_70)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__Reason_70, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 517 "goal_form.m"
                  if (hlds__goal_form__succeeded)
#line 517 "goal_form.m"
                    {
#line 517 "goal_form.m"
                      hlds__goal_form__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__Reason_70, (MR_Integer) 1)));
#line 517 "goal_form.m"
                      hlds__goal_form__FGT_72 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__Reason_70, (MR_Integer) 2)));
#line 519 "goal_form.m"
#line 519 "goal_form.m"
                      switch (hlds__goal_form__FGT_72) {
#line 519 "goal_form.m"
                        default:
#line 519 "goal_form.m"
                          hlds__goal_form__succeeded = MR_FALSE;
#line 519 "goal_form.m"
                          break;
#line 519 "goal_form.m"
                        case (MR_Integer) 1:
#line 518 "goal_form.m"
                          hlds__goal_form__succeeded = MR_TRUE;
#line 519 "goal_form.m"
                          break;
#line 519 "goal_form.m"
                        case (MR_Integer) 2:
#line 519 "goal_form.m"
                          hlds__goal_form__succeeded = MR_TRUE;
#line 519 "goal_form.m"
                          break;
#line 519 "goal_form.m"
                      }
#line 517 "goal_form.m"
                    }
#line 516 "goal_form.m"
                  if (hlds__goal_form__succeeded)
#line 524 "goal_form.m"
                    hlds__goal_form__CanLoop_6 = (MR_Integer) 0;
#line 516 "goal_form.m"
                  else
#line 526 "goal_form.m"
                    {
#line 526 "goal_form.m"
                      /* direct tailcall eliminated */
#line 526 "goal_form.m"
                      {
#line 526 "goal_form.m"
                        MR_Word hlds__goal_form__Goal__tmp_copy_5 = hlds__goal_form__SubGoal_99;

#line 526 "goal_form.m"
                        hlds__goal_form__Goal_5 = hlds__goal_form__Goal__tmp_copy_5;
#line 526 "goal_form.m"
                      }
#line 526 "goal_form.m"
                      continue;
#line 526 "goal_form.m"
                    }
#line 515 "goal_form.m"
                }
#line 449 "goal_form.m"
                break;
#line 449 "goal_form.m"
              case (MR_Integer) 6:
#line 503 "goal_form.m"
                {
#line 503 "goal_form.m"
                  MR_Word hlds__goal_form__Cond_66 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_7, (MR_Integer) 2)));
#line 503 "goal_form.m"
                  MR_Word hlds__goal_form__Then_67 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_7, (MR_Integer) 3)));
#line 503 "goal_form.m"
                  MR_Word hlds__goal_form__Else_68 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_7, (MR_Integer) 4)));
#line 503 "goal_form.m"
                  MR_Word hlds__goal_form___Vars_65 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_7, (MR_Integer) 1)));
#line 504 "goal_form.m"
                  MR_Word hlds__goal_form__V_90_90;

#line 504 "goal_form.m"
                  {
#line 504 "goal_form.m"
                    hlds__goal_form__V_90_90 = hlds__goal_form__goal_can_loop_func_2_f_0(hlds__goal_form__MaybeModuleInfo_4, hlds__goal_form__Cond_66);
                  }
#line 504 "goal_form.m"
                  hlds__goal_form__succeeded = (hlds__goal_form__V_90_90 == (MR_Integer) 1);
#line 504 "goal_form.m"
                  if (hlds__goal_form__succeeded)
#line 505 "goal_form.m"
                    hlds__goal_form__CanLoop_6 = (MR_Integer) 1;
#line 504 "goal_form.m"
                  else
#line 506 "goal_form.m"
                    {
#line 506 "goal_form.m"
                      MR_Word hlds__goal_form__V_91_91;

#line 506 "goal_form.m"
                      {
#line 506 "goal_form.m"
                        hlds__goal_form__V_91_91 = hlds__goal_form__goal_can_loop_func_2_f_0(hlds__goal_form__MaybeModuleInfo_4, hlds__goal_form__Then_67);
                      }
#line 506 "goal_form.m"
                      hlds__goal_form__succeeded = (hlds__goal_form__V_91_91 == (MR_Integer) 1);
#line 506 "goal_form.m"
                      if (hlds__goal_form__succeeded)
#line 507 "goal_form.m"
                        hlds__goal_form__CanLoop_6 = (MR_Integer) 1;
#line 506 "goal_form.m"
                      else
#line 509 "goal_form.m"
                        {
#line 509 "goal_form.m"
                          /* direct tailcall eliminated */
#line 509 "goal_form.m"
                          {
#line 509 "goal_form.m"
                            MR_Word hlds__goal_form__Goal__tmp_copy_5 = hlds__goal_form__Else_68;

#line 509 "goal_form.m"
                            hlds__goal_form__Goal_5 = hlds__goal_form__Goal__tmp_copy_5;
#line 509 "goal_form.m"
                          }
#line 509 "goal_form.m"
                          continue;
#line 509 "goal_form.m"
                        }
#line 506 "goal_form.m"
                    }
#line 503 "goal_form.m"
                }
#line 449 "goal_form.m"
                break;
#line 449 "goal_form.m"
              case (MR_Integer) 7:
#line 529 "goal_form.m"
                {
#line 529 "goal_form.m"
                  MR_Word hlds__goal_form__ShortHand_73 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_7, (MR_Integer) 1)));

#line 535 "goal_form.m"
#line 535 "goal_form.m"
                  switch (MR_tag((MR_Word) hlds__goal_form__ShortHand_73)) {
#line 535 "goal_form.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 535 "goal_form.m"
                    case (MR_Integer) 0:
#line 539 "goal_form.m"
                      {
#line 540 "goal_form.m"
                        {
#line 540 "goal_form.m"
                          mercury__require__unexpected_3_p_0((MR_String) "hlds.goal_form", (MR_String) "function \140hlds.goal_form.goal_can_loop_func\'/2", (MR_String) "bi_implication");
                        }
#line 539 "goal_form.m"
                      }
#line 535 "goal_form.m"
                      break;
#line 535 "goal_form.m"
                    case (MR_Integer) 1:
#line 531 "goal_form.m"
                      {
#line 531 "goal_form.m"
                        MR_Word hlds__goal_form__MainGoal_78 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__ShortHand_73, (MR_Integer) 4)));
#line 531 "goal_form.m"
                        MR_Word hlds__goal_form__OrElseGoals_79 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__ShortHand_73, (MR_Integer) 5)));
#line 531 "goal_form.m"
                        MR_Word hlds__goal_form__MainGoalCanLoop_81;
#line 531 "goal_form.m"
                        MR_Word hlds__goal_form__OrElseCanLoop_82;
#line 531 "goal_form.m"
                        MR_Word hlds__goal_form__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__ShortHand_73, (MR_Integer) 0)));
#line 531 "goal_form.m"
                        MR_Word hlds__goal_form__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__ShortHand_73, (MR_Integer) 1)));
#line 531 "goal_form.m"
                        MR_Word hlds__goal_form__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__ShortHand_73, (MR_Integer) 2)));
#line 531 "goal_form.m"
                        MR_Word hlds__goal_form__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__ShortHand_73, (MR_Integer) 3)));
#line 531 "goal_form.m"
                        MR_Word hlds__goal_form__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__ShortHand_73, (MR_Integer) 6)));

#line 532 "goal_form.m"
                        {
#line 532 "goal_form.m"
                          hlds__goal_form__MainGoalCanLoop_81 = hlds__goal_form__goal_can_loop_func_2_f_0(hlds__goal_form__MaybeModuleInfo_4, hlds__goal_form__MainGoal_78);
                        }
#line 533 "goal_form.m"
                        {
#line 533 "goal_form.m"
                          hlds__goal_form__OrElseCanLoop_82 = hlds__goal_form__goal_list_can_loop_2_f_0(hlds__goal_form__MaybeModuleInfo_4, hlds__goal_form__OrElseGoals_79);
                        }
#line 534 "goal_form.m"
                        {
#line 534 "goal_form.m"
                          hlds__goal_form__CanLoop_6 = mercury__bool__or_2_f_0(hlds__goal_form__MainGoalCanLoop_81, hlds__goal_form__OrElseCanLoop_82);
                        }
#line 531 "goal_form.m"
                      }
#line 535 "goal_form.m"
                      break;
#line 535 "goal_form.m"
                    case (MR_Integer) 2:
#line 536 "goal_form.m"
                      {
#line 536 "goal_form.m"
                        MR_Word hlds__goal_form__SubGoal_100 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__ShortHand_73, (MR_Integer) 2)));
#line 536 "goal_form.m"
                        MR_Word hlds__goal_form__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__ShortHand_73, (MR_Integer) 0)));
#line 536 "goal_form.m"
                        MR_Word hlds__goal_form__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__ShortHand_73, (MR_Integer) 1)));

#line 537 "goal_form.m"
                        /* direct tailcall eliminated */
#line 537 "goal_form.m"
                        {
#line 537 "goal_form.m"
                          MR_Word hlds__goal_form__Goal__tmp_copy_5 = hlds__goal_form__SubGoal_100;

#line 537 "goal_form.m"
                          hlds__goal_form__Goal_5 = hlds__goal_form__Goal__tmp_copy_5;
#line 537 "goal_form.m"
                        }
#line 537 "goal_form.m"
                        continue;
#line 536 "goal_form.m"
                      }
#line 535 "goal_form.m"
                      break;
#line 535 "goal_form.m"
                  }
#line 529 "goal_form.m"
                }
#line 449 "goal_form.m"
                break;
#line 449 "goal_form.m"
            }
#line 449 "goal_form.m"
            break;
#line 449 "goal_form.m"
        }
#line 432 "goal_form.m"
        return hlds__goal_form__CanLoop_6;
#line 432 "goal_form.m"
      }
#line 432 "goal_form.m"
      break;
#line 432 "goal_form.m"
    }
#line 430 "goal_form.m"
}

#line 371 "goal_form.m"
static void MR_CALL 
hlds__goal_form__cases_can_throw_4_p_0(
#line 371 "goal_form.m"
  MR_Word hlds__goal_form__HeadVar__1_1,
#line 371 "goal_form.m"
  MR_Word * hlds__goal_form__HeadVar__2_2,
#line 371 "goal_form.m"
  MR_Word hlds__goal_form__STATE_VARIABLE_ModuleInfo_0_3,
#line 371 "goal_form.m"
  MR_Word * hlds__goal_form__STATE_VARIABLE_ModuleInfo_4)
#line 371 "goal_form.m"
{
#line 374 "goal_form.m"
  while (MR_TRUE)
#line 374 "goal_form.m"
    {
#line 374 "goal_form.m"
      /* tailcall optimized into a loop */
#line 374 "goal_form.m"
      {
#line 374 "goal_form.m"
        MR_bool hlds__goal_form__succeeded;

#line 374 "goal_form.m"
        if ((hlds__goal_form__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 374 "goal_form.m"
          {
#line 374 "goal_form.m"
            *hlds__goal_form__HeadVar__2_2 = (MR_Integer) 1;
#line 374 "goal_form.m"
            *hlds__goal_form__STATE_VARIABLE_ModuleInfo_4 = hlds__goal_form__STATE_VARIABLE_ModuleInfo_0_3;
#line 374 "goal_form.m"
          }
#line 374 "goal_form.m"
        else
#line 375 "goal_form.m"
          {
#line 375 "goal_form.m"
            MR_Word hlds__goal_form__Case_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__HeadVar__1_1, (MR_Integer) 0)));
#line 375 "goal_form.m"
            MR_Word hlds__goal_form__Cases_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__HeadVar__1_1, (MR_Integer) 1)));
#line 375 "goal_form.m"
            MR_Word hlds__goal_form__Goal_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Case_8, (MR_Integer) 2)));
#line 375 "goal_form.m"
            MR_Word hlds__goal_form__GoalExpr_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Goal_14, (MR_Integer) 0)));
#line 375 "goal_form.m"
            MR_Word hlds__goal_form__GoalInfo_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Goal_14, (MR_Integer) 1)));
#line 375 "goal_form.m"
            MR_Word hlds__goal_form__Determinism_26;
#line 376 "goal_form.m"
            MR_Word hlds__goal_form__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Case_8, (MR_Integer) 0)));
#line 376 "goal_form.m"
            MR_Word hlds__goal_form__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Case_8, (MR_Integer) 1)));

#line 253 "goal_form.m"
            {
#line 253 "goal_form.m"
              hlds__goal_form__Determinism_26 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(hlds__goal_form__GoalInfo_24);
            }
#line 254 "goal_form.m"
            hlds__goal_form__succeeded = (hlds__goal_form__Determinism_26 == (MR_Integer) 6);
#line 5361 "hlds.goal_form.c"
            if (hlds__goal_form__succeeded)
#line 5363 "hlds.goal_form.c"
              {
#line 383 "goal_form.m"
                *hlds__goal_form__HeadVar__2_2 = (MR_Integer) 0;
#line 382 "goal_form.m"
                *hlds__goal_form__STATE_VARIABLE_ModuleInfo_4 = hlds__goal_form__STATE_VARIABLE_ModuleInfo_0_3;
#line 5369 "hlds.goal_form.c"
              }
#line 5371 "hlds.goal_form.c"
            else
#line 5373 "hlds.goal_form.c"
              {
#line 5375 "hlds.goal_form.c"
                MR_Word hlds__goal_form__Result0_28;
#line 5377 "hlds.goal_form.c"
                MR_Word hlds__goal_form__STATE_VARIABLE_ModuleInfo_18_29;

#line 257 "goal_form.m"
                {
#line 257 "goal_form.m"
                  hlds__goal_form__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_99_97_110_95_116_104_114_111_119_95_50_95_95_91_50_93_95_48_5_p_0(hlds__goal_form__GoalExpr_23, &hlds__goal_form__Result0_28, hlds__goal_form__STATE_VARIABLE_ModuleInfo_0_3, &hlds__goal_form__STATE_VARIABLE_ModuleInfo_18_29);
                }
#line 381 "goal_form.m"
#line 381 "goal_form.m"
                switch (hlds__goal_form__Result0_28) {
#line 381 "goal_form.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 381 "goal_form.m"
                  case (MR_Integer) 0:
#line 382 "goal_form.m"
                    {
#line 383 "goal_form.m"
                      *hlds__goal_form__HeadVar__2_2 = (MR_Integer) 0;
#line 382 "goal_form.m"
                      *hlds__goal_form__STATE_VARIABLE_ModuleInfo_4 = hlds__goal_form__STATE_VARIABLE_ModuleInfo_18_29;
#line 382 "goal_form.m"
                    }
#line 381 "goal_form.m"
                    break;
#line 381 "goal_form.m"
                  case (MR_Integer) 1:
#line 380 "goal_form.m"
                    {
#line 380 "goal_form.m"
                      /* direct tailcall eliminated */
#line 380 "goal_form.m"
                      {
#line 380 "goal_form.m"
                        MR_Word hlds__goal_form__HeadVar__1__tmp_copy_1 = hlds__goal_form__Cases_9;
#line 380 "goal_form.m"
                        MR_Word hlds__goal_form__STATE_VARIABLE_ModuleInfo_0__tmp_copy_3 = hlds__goal_form__STATE_VARIABLE_ModuleInfo_18_29;

#line 380 "goal_form.m"
                        hlds__goal_form__STATE_VARIABLE_ModuleInfo_0_3 = hlds__goal_form__STATE_VARIABLE_ModuleInfo_0__tmp_copy_3;
#line 380 "goal_form.m"
                        hlds__goal_form__HeadVar__1_1 = hlds__goal_form__HeadVar__1__tmp_copy_1;
#line 380 "goal_form.m"
                      }
#line 380 "goal_form.m"
                      continue;
#line 380 "goal_form.m"
                    }
#line 381 "goal_form.m"
                    break;
#line 381 "goal_form.m"
                }
#line 5429 "hlds.goal_form.c"
              }
#line 375 "goal_form.m"
          }
#line 374 "goal_form.m"
      }
#line 374 "goal_form.m"
      break;
#line 374 "goal_form.m"
    }
#line 371 "goal_form.m"
}

#line 357 "goal_form.m"
static void MR_CALL 
hlds__goal_form__goals_can_throw_4_p_0(
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
            MR_Word hlds__goal_form__Goal_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__HeadVar__1_1, (MR_Integer) 0)));
#line 361 "goal_form.m"
            MR_Word hlds__goal_form__Goals_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__HeadVar__1_1, (MR_Integer) 1)));
#line 361 "goal_form.m"
            MR_Word hlds__goal_form__GoalExpr_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Goal_8, (MR_Integer) 0)));
#line 361 "goal_form.m"
            MR_Word hlds__goal_form__GoalInfo_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Goal_8, (MR_Integer) 1)));
#line 361 "goal_form.m"
            MR_Word hlds__goal_form__Determinism_23;

#line 253 "goal_form.m"
            {
#line 253 "goal_form.m"
              hlds__goal_form__Determinism_23 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(hlds__goal_form__GoalInfo_21);
            }
#line 254 "goal_form.m"
            hlds__goal_form__succeeded = (hlds__goal_form__Determinism_23 == (MR_Integer) 6);
#line 5498 "hlds.goal_form.c"
            if (hlds__goal_form__succeeded)
#line 5500 "hlds.goal_form.c"
              {
#line 368 "goal_form.m"
                *hlds__goal_form__HeadVar__2_2 = (MR_Integer) 0;
#line 367 "goal_form.m"
                *hlds__goal_form__STATE_VARIABLE_ModuleInfo_4 = hlds__goal_form__STATE_VARIABLE_ModuleInfo_0_3;
#line 5506 "hlds.goal_form.c"
              }
#line 5508 "hlds.goal_form.c"
            else
#line 5510 "hlds.goal_form.c"
              {
#line 5512 "hlds.goal_form.c"
                MR_Word hlds__goal_form__Result0_25;
#line 5514 "hlds.goal_form.c"
                MR_Word hlds__goal_form__STATE_VARIABLE_ModuleInfo_15_26;

#line 257 "goal_form.m"
                {
#line 257 "goal_form.m"
                  hlds__goal_form__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_99_97_110_95_116_104_114_111_119_95_50_95_95_91_50_93_95_48_5_p_0(hlds__goal_form__GoalExpr_20, &hlds__goal_form__Result0_25, hlds__goal_form__STATE_VARIABLE_ModuleInfo_0_3, &hlds__goal_form__STATE_VARIABLE_ModuleInfo_15_26);
                }
#line 366 "goal_form.m"
#line 366 "goal_form.m"
                switch (hlds__goal_form__Result0_25) {
#line 366 "goal_form.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 366 "goal_form.m"
                  case (MR_Integer) 0:
#line 367 "goal_form.m"
                    {
#line 368 "goal_form.m"
                      *hlds__goal_form__HeadVar__2_2 = (MR_Integer) 0;
#line 367 "goal_form.m"
                      *hlds__goal_form__STATE_VARIABLE_ModuleInfo_4 = hlds__goal_form__STATE_VARIABLE_ModuleInfo_15_26;
#line 367 "goal_form.m"
                    }
#line 366 "goal_form.m"
                    break;
#line 366 "goal_form.m"
                  case (MR_Integer) 1:
#line 365 "goal_form.m"
                    {
#line 365 "goal_form.m"
                      /* direct tailcall eliminated */
#line 365 "goal_form.m"
                      {
#line 365 "goal_form.m"
                        MR_Word hlds__goal_form__HeadVar__1__tmp_copy_1 = hlds__goal_form__Goals_9;
#line 365 "goal_form.m"
                        MR_Word hlds__goal_form__STATE_VARIABLE_ModuleInfo_0__tmp_copy_3 = hlds__goal_form__STATE_VARIABLE_ModuleInfo_15_26;

#line 365 "goal_form.m"
                        hlds__goal_form__STATE_VARIABLE_ModuleInfo_0_3 = hlds__goal_form__STATE_VARIABLE_ModuleInfo_0__tmp_copy_3;
#line 365 "goal_form.m"
                        hlds__goal_form__HeadVar__1_1 = hlds__goal_form__HeadVar__1__tmp_copy_1;
#line 365 "goal_form.m"
                      }
#line 365 "goal_form.m"
                      continue;
#line 365 "goal_form.m"
                    }
#line 366 "goal_form.m"
                    break;
#line 366 "goal_form.m"
                }
#line 5566 "hlds.goal_form.c"
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

#line 227 "goal_form.m"
static MR_bool MR_CALL 
hlds__goal_form__only_constant_goals_3_p_0(
#line 227 "goal_form.m"
  MR_Word hlds__goal_form__HeadVar__1_1,
#line 227 "goal_form.m"
  MR_Word hlds__goal_form__STATE_VARIABLE_ToAssignVars_0_2,
#line 227 "goal_form.m"
  MR_Word * hlds__goal_form__STATE_VARIABLE_ToAssignVars_3)
#line 227 "goal_form.m"
{
#line 230 "goal_form.m"
  while (MR_TRUE)
#line 230 "goal_form.m"
    {
#line 230 "goal_form.m"
      /* tailcall optimized into a loop */
#line 230 "goal_form.m"
      {
#line 230 "goal_form.m"
        MR_bool hlds__goal_form__succeeded;

#line 230 "goal_form.m"
        if ((hlds__goal_form__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 230 "goal_form.m"
          {
#line 230 "goal_form.m"
            *hlds__goal_form__STATE_VARIABLE_ToAssignVars_3 = hlds__goal_form__STATE_VARIABLE_ToAssignVars_0_2;
#line 230 "goal_form.m"
            hlds__goal_form__succeeded = MR_TRUE;
#line 230 "goal_form.m"
          }
#line 230 "goal_form.m"
        else
#line 231 "goal_form.m"
          {
#line 231 "goal_form.m"
            MR_Word hlds__goal_form__TypeCtorInfo_31_31;
#line 231 "goal_form.m"
            MR_Word hlds__goal_form__Goal_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__HeadVar__1_1, (MR_Integer) 0)));
#line 231 "goal_form.m"
            MR_Word hlds__goal_form__Goals_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__HeadVar__1_1, (MR_Integer) 1)));
#line 231 "goal_form.m"
            MR_Word hlds__goal_form__GoalExpr_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Goal_7, (MR_Integer) 0)));
#line 231 "goal_form.m"
            MR_Word hlds__goal_form__Var_17;
#line 231 "goal_form.m"
            MR_Word hlds__goal_form__STATE_VARIABLE_ToAssignVars_29_29;
#line 232 "goal_form.m"
            MR_Word hlds__goal_form__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Goal_7, (MR_Integer) 1)));

#line 239 "goal_form.m"
            if (((MR_tag((MR_Word) hlds__goal_form__GoalExpr_10)) == (MR_mktag((MR_Integer) 1))))
#line 237 "goal_form.m"
              {
#line 237 "goal_form.m"
                MR_Word hlds__goal_form__Unification_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__GoalExpr_10, (MR_Integer) 3)));
#line 237 "goal_form.m"
                MR_Word hlds__goal_form__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__GoalExpr_10, (MR_Integer) 0)));
#line 237 "goal_form.m"
                MR_Word hlds__goal_form__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__GoalExpr_10, (MR_Integer) 1)));
#line 237 "goal_form.m"
                MR_Word hlds__goal_form__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__GoalExpr_10, (MR_Integer) 2)));
#line 237 "goal_form.m"
                MR_Word hlds__goal_form__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__GoalExpr_10, (MR_Integer) 4)));
#line 238 "goal_form.m"
                MR_Word hlds__goal_form__V_18_18;
#line 238 "goal_form.m"
                MR_Word hlds__goal_form__V_19_19;
#line 238 "goal_form.m"
                MR_Word hlds__goal_form__V_20_20;
#line 238 "goal_form.m"
                MR_Word hlds__goal_form__V_21_21;
#line 238 "goal_form.m"
                MR_Word hlds__goal_form__V_22_22;
#line 238 "goal_form.m"
                MR_Word hlds__goal_form__V_23_23;

#line 238 "goal_form.m"
                hlds__goal_form__succeeded = ((MR_tag((MR_Word) hlds__goal_form__Unification_15)) == (MR_mktag((MR_Integer) 0)));
#line 238 "goal_form.m"
                if (hlds__goal_form__succeeded)
#line 238 "goal_form.m"
                  {
#line 238 "goal_form.m"
                    hlds__goal_form__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Unification_15, (MR_Integer) 0)));
#line 238 "goal_form.m"
                    hlds__goal_form__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Unification_15, (MR_Integer) 1)));
#line 238 "goal_form.m"
                    hlds__goal_form__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Unification_15, (MR_Integer) 2)));
#line 238 "goal_form.m"
                    hlds__goal_form__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Unification_15, (MR_Integer) 3)));
#line 238 "goal_form.m"
                    hlds__goal_form__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Unification_15, (MR_Integer) 4)));
#line 238 "goal_form.m"
                    hlds__goal_form__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Unification_15, (MR_Integer) 5)));
#line 238 "goal_form.m"
                    hlds__goal_form__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Unification_15, (MR_Integer) 6)));
#line 238 "goal_form.m"
                  }
#line 237 "goal_form.m"
              }
#line 239 "goal_form.m"
            else
#line 239 "goal_form.m"
            if (((((MR_tag((MR_Word) hlds__goal_form__GoalExpr_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_10, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 240 "goal_form.m"
              {
#line 240 "goal_form.m"
                MR_Word hlds__goal_form__Reason_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_10, (MR_Integer) 1)));
#line 240 "goal_form.m"
                MR_Word hlds__goal_form__V_28_28;
#line 240 "goal_form.m"
                MR_Word hlds__goal_form__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_10, (MR_Integer) 2)));

#line 241 "goal_form.m"
                hlds__goal_form__succeeded = ((((MR_tag((MR_Word) hlds__goal_form__Reason_24)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__Reason_24, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 241 "goal_form.m"
                if (hlds__goal_form__succeeded)
#line 241 "goal_form.m"
                  {
#line 241 "goal_form.m"
                    hlds__goal_form__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__Reason_24, (MR_Integer) 1)));
#line 241 "goal_form.m"
                    hlds__goal_form__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__Reason_24, (MR_Integer) 2)));
#line 241 "goal_form.m"
                    hlds__goal_form__succeeded = (hlds__goal_form__V_28_28 == (MR_Integer) 1);
#line 241 "goal_form.m"
                  }
#line 240 "goal_form.m"
              }
#line 239 "goal_form.m"
            else
#line 239 "goal_form.m"
              hlds__goal_form__succeeded = MR_FALSE;
#line 231 "goal_form.m"
            if (hlds__goal_form__succeeded)
#line 231 "goal_form.m"
              {
#line 5718 "hlds.goal_form.c"
                hlds__goal_form__TypeCtorInfo_31_31 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 243 "goal_form.m"
                {
#line 243 "goal_form.m"
                  parse_tree__set_of_var__delete_3_p_0(hlds__goal_form__TypeCtorInfo_31_31, hlds__goal_form__Var_17, hlds__goal_form__STATE_VARIABLE_ToAssignVars_0_2, &hlds__goal_form__STATE_VARIABLE_ToAssignVars_29_29);
                }
#line 244 "goal_form.m"
                /* direct tailcall eliminated */
#line 244 "goal_form.m"
                {
#line 244 "goal_form.m"
                  MR_Word hlds__goal_form__HeadVar__1__tmp_copy_1 = hlds__goal_form__Goals_8;
#line 244 "goal_form.m"
                  MR_Word hlds__goal_form__STATE_VARIABLE_ToAssignVars_0__tmp_copy_2 = hlds__goal_form__STATE_VARIABLE_ToAssignVars_29_29;

#line 244 "goal_form.m"
                  hlds__goal_form__STATE_VARIABLE_ToAssignVars_0_2 = hlds__goal_form__STATE_VARIABLE_ToAssignVars_0__tmp_copy_2;
#line 244 "goal_form.m"
                  hlds__goal_form__HeadVar__1_1 = hlds__goal_form__HeadVar__1__tmp_copy_1;
#line 244 "goal_form.m"
                }
#line 244 "goal_form.m"
                continue;
#line 231 "goal_form.m"
              }
#line 231 "goal_form.m"
          }
#line 230 "goal_form.m"
        return hlds__goal_form__succeeded;
#line 230 "goal_form.m"
      }
#line 230 "goal_form.m"
      break;
#line 230 "goal_form.m"
    }
#line 227 "goal_form.m"
}

#line 195 "goal_form.m"
MR_Word MR_CALL 
hlds__goal_form__goal_expr_has_subgoals_1_f_0(
#line 195 "goal_form.m"
  MR_Word hlds__goal_form__GoalExpr_3)
#line 195 "goal_form.m"
{
#line 1185 "goal_form.m"
  {
#line 1185 "goal_form.m"
    MR_bool hlds__goal_form__succeeded;
#line 1185 "goal_form.m"
    MR_Word hlds__goal_form__HasSubGoals_4;

#line 1185 "goal_form.m"
#line 1185 "goal_form.m"
    switch (MR_tag((MR_Word) hlds__goal_form__GoalExpr_3)) {
#line 1185 "goal_form.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1185 "goal_form.m"
      case (MR_Integer) 0:
#line 1204 "goal_form.m"
        hlds__goal_form__HasSubGoals_4 = (MR_Integer) 0;
#line 1185 "goal_form.m"
        break;
#line 1185 "goal_form.m"
      case (MR_Integer) 1:
#line 1185 "goal_form.m"
      case (MR_Integer) 2:
#line 1186 "goal_form.m"
        hlds__goal_form__HasSubGoals_4 = (MR_Integer) 1;
#line 1185 "goal_form.m"
        break;
#line 1185 "goal_form.m"
      case (MR_Integer) 3:
#line 1185 "goal_form.m"
#line 1185 "goal_form.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_3, (MR_Integer) 0)))) {
#line 1185 "goal_form.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1185 "goal_form.m"
          case (MR_Integer) 0:
#line 1185 "goal_form.m"
          case (MR_Integer) 1:
#line 1186 "goal_form.m"
            hlds__goal_form__HasSubGoals_4 = (MR_Integer) 1;
#line 1185 "goal_form.m"
            break;
#line 1185 "goal_form.m"
          case (MR_Integer) 2:
#line 1190 "goal_form.m"
            {
#line 1190 "goal_form.m"
              MR_Word hlds__goal_form__SubGoals_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_3, (MR_Integer) 2)));
#line 1188 "goal_form.m"
              MR_Word hlds__goal_form__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_3, (MR_Integer) 1)));

#line 1194 "goal_form.m"
              if ((hlds__goal_form__SubGoals_29 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1193 "goal_form.m"
                hlds__goal_form__HasSubGoals_4 = (MR_Integer) 1;
#line 1194 "goal_form.m"
              else
#line 1196 "goal_form.m"
                hlds__goal_form__HasSubGoals_4 = (MR_Integer) 0;
#line 1190 "goal_form.m"
            }
#line 1185 "goal_form.m"
            break;
#line 1185 "goal_form.m"
          case (MR_Integer) 3:
#line 1190 "goal_form.m"
            {
#line 1190 "goal_form.m"
              MR_Word hlds__goal_form__SubGoals_61 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_3, (MR_Integer) 1)));

#line 1194 "goal_form.m"
              if ((hlds__goal_form__SubGoals_61 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1193 "goal_form.m"
                hlds__goal_form__HasSubGoals_4 = (MR_Integer) 1;
#line 1194 "goal_form.m"
              else
#line 1196 "goal_form.m"
                hlds__goal_form__HasSubGoals_4 = (MR_Integer) 0;
#line 1190 "goal_form.m"
            }
#line 1185 "goal_form.m"
            break;
#line 1185 "goal_form.m"
          case (MR_Integer) 4:
#line 1185 "goal_form.m"
          case (MR_Integer) 5:
#line 1185 "goal_form.m"
          case (MR_Integer) 6:
#line 1204 "goal_form.m"
            hlds__goal_form__HasSubGoals_4 = (MR_Integer) 0;
#line 1185 "goal_form.m"
            break;
#line 1185 "goal_form.m"
          case (MR_Integer) 7:
#line 1211 "goal_form.m"
            hlds__goal_form__HasSubGoals_4 = (MR_Integer) 0;
#line 1185 "goal_form.m"
            break;
#line 1185 "goal_form.m"
        }
#line 1185 "goal_form.m"
        break;
#line 1185 "goal_form.m"
    }
#line 1185 "goal_form.m"
    return hlds__goal_form__HasSubGoals_4;
#line 1185 "goal_form.m"
  }
#line 195 "goal_form.m"
}

#line 184 "goal_form.m"
MR_Word MR_CALL 
hlds__goal_form__goal_has_foreign_1_f_0(
#line 184 "goal_form.m"
  MR_Word hlds__goal_form__Goal_3)
#line 184 "goal_form.m"
{
#line 1094 "goal_form.m"
  while (MR_TRUE)
#line 1094 "goal_form.m"
    {
#line 1094 "goal_form.m"
      /* tailcall optimized into a loop */
#line 1094 "goal_form.m"
      {
#line 1094 "goal_form.m"
        MR_bool hlds__goal_form__succeeded;
#line 1094 "goal_form.m"
        MR_Word hlds__goal_form__HasForeign_4;
#line 1094 "goal_form.m"
        MR_Word hlds__goal_form__GoalExpr_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Goal_3, (MR_Integer) 0)));
#line 1095 "goal_form.m"
        MR_Word hlds__goal_form__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Goal_3, (MR_Integer) 1)));

#line 1102 "goal_form.m"
#line 1102 "goal_form.m"
        switch (MR_tag((MR_Word) hlds__goal_form__GoalExpr_5)) {
#line 1102 "goal_form.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1102 "goal_form.m"
          case (MR_Integer) 0:
#line 1112 "goal_form.m"
            {
#line 1112 "goal_form.m"
              MR_Word hlds__goal_form__SubGoal_28 = (MR_Word) MR_body(((MR_Word) hlds__goal_form__GoalExpr_5), (MR_Integer) 0);

#line 1113 "goal_form.m"
              /* direct tailcall eliminated */
#line 1113 "goal_form.m"
              {
#line 1113 "goal_form.m"
                MR_Word hlds__goal_form__Goal__tmp_copy_3 = hlds__goal_form__SubGoal_28;

#line 1113 "goal_form.m"
                hlds__goal_form__Goal_3 = hlds__goal_form__Goal__tmp_copy_3;
#line 1113 "goal_form.m"
              }
#line 1113 "goal_form.m"
              continue;
#line 1112 "goal_form.m"
            }
#line 1102 "goal_form.m"
            break;
#line 1102 "goal_form.m"
          case (MR_Integer) 1:
#line 1102 "goal_form.m"
          case (MR_Integer) 2:
#line 1101 "goal_form.m"
            hlds__goal_form__HasForeign_4 = (MR_Integer) 0;
#line 1102 "goal_form.m"
            break;
#line 1102 "goal_form.m"
          case (MR_Integer) 3:
#line 1102 "goal_form.m"
#line 1102 "goal_form.m"
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_5, (MR_Integer) 0)))) {
#line 1102 "goal_form.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1102 "goal_form.m"
              case (MR_Integer) 0:
#line 1101 "goal_form.m"
                hlds__goal_form__HasForeign_4 = (MR_Integer) 0;
#line 1102 "goal_form.m"
                break;
#line 1102 "goal_form.m"
              case (MR_Integer) 1:
#line 1140 "goal_form.m"
                hlds__goal_form__HasForeign_4 = (MR_Integer) 1;
#line 1102 "goal_form.m"
                break;
#line 1102 "goal_form.m"
              case (MR_Integer) 2:
#line 1103 "goal_form.m"
                {
#line 1103 "goal_form.m"
                  MR_Word hlds__goal_form__Goals_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_5, (MR_Integer) 2)));
#line 1103 "goal_form.m"
                  MR_Word hlds__goal_form__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_5, (MR_Integer) 1)));

#line 1104 "goal_form.m"
                  {
#line 1104 "goal_form.m"
                    hlds__goal_form__HasForeign_4 = hlds__goal_form__goal_list_has_foreign_1_f_0(hlds__goal_form__Goals_24);
                  }
#line 1103 "goal_form.m"
                }
#line 1102 "goal_form.m"
                break;
#line 1102 "goal_form.m"
              case (MR_Integer) 3:
#line 1106 "goal_form.m"
                {
#line 1106 "goal_form.m"
                  MR_Word hlds__goal_form__Goals_60 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_5, (MR_Integer) 1)));

#line 1107 "goal_form.m"
                  {
#line 1107 "goal_form.m"
                    hlds__goal_form__HasForeign_4 = hlds__goal_form__goal_list_has_foreign_1_f_0(hlds__goal_form__Goals_60);
                  }
#line 1106 "goal_form.m"
                }
#line 1102 "goal_form.m"
                break;
#line 1102 "goal_form.m"
              case (MR_Integer) 4:
#line 1109 "goal_form.m"
                {
#line 1109 "goal_form.m"
                  MR_Word hlds__goal_form__Cases_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_5, (MR_Integer) 3)));
#line 1109 "goal_form.m"
                  MR_Word hlds__goal_form__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_5, (MR_Integer) 1)));
#line 1109 "goal_form.m"
                  MR_Word hlds__goal_form__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_5, (MR_Integer) 2)));

#line 1110 "goal_form.m"
                  {
#line 1110 "goal_form.m"
                    hlds__goal_form__HasForeign_4 = hlds__goal_form__case_list_has_foreign_1_f_0(hlds__goal_form__Cases_27);
                  }
#line 1109 "goal_form.m"
                }
#line 1102 "goal_form.m"
                break;
#line 1102 "goal_form.m"
              case (MR_Integer) 5:
#line 1115 "goal_form.m"
                {
#line 1115 "goal_form.m"
                  MR_Word hlds__goal_form__Reason_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_5, (MR_Integer) 1)));
#line 1115 "goal_form.m"
                  MR_Word hlds__goal_form__SubGoal_61 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_5, (MR_Integer) 2)));
#line 1117 "goal_form.m"
                  MR_Word hlds__goal_form__FGT_31;
#line 1117 "goal_form.m"
                  MR_Word hlds__goal_form__V_30_30;

#line 1117 "goal_form.m"
                  hlds__goal_form__succeeded = ((((MR_tag((MR_Word) hlds__goal_form__Reason_29)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__Reason_29, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 1117 "goal_form.m"
                  if (hlds__goal_form__succeeded)
#line 1117 "goal_form.m"
                    {
#line 1117 "goal_form.m"
                      hlds__goal_form__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__Reason_29, (MR_Integer) 1)));
#line 1117 "goal_form.m"
                      hlds__goal_form__FGT_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__Reason_29, (MR_Integer) 2)));
#line 1119 "goal_form.m"
#line 1119 "goal_form.m"
                      switch (hlds__goal_form__FGT_31) {
#line 1119 "goal_form.m"
                        default:
#line 1119 "goal_form.m"
                          hlds__goal_form__succeeded = MR_FALSE;
#line 1119 "goal_form.m"
                          break;
#line 1119 "goal_form.m"
                        case (MR_Integer) 1:
#line 1118 "goal_form.m"
                          hlds__goal_form__succeeded = MR_TRUE;
#line 1119 "goal_form.m"
                          break;
#line 1119 "goal_form.m"
                        case (MR_Integer) 2:
#line 1119 "goal_form.m"
                          hlds__goal_form__succeeded = MR_TRUE;
#line 1119 "goal_form.m"
                          break;
#line 1119 "goal_form.m"
                      }
#line 1117 "goal_form.m"
                    }
#line 1116 "goal_form.m"
                  if (hlds__goal_form__succeeded)
#line 1122 "goal_form.m"
                    hlds__goal_form__HasForeign_4 = (MR_Integer) 0;
#line 1116 "goal_form.m"
                  else
#line 1124 "goal_form.m"
                    {
#line 1124 "goal_form.m"
                      /* direct tailcall eliminated */
#line 1124 "goal_form.m"
                      {
#line 1124 "goal_form.m"
                        MR_Word hlds__goal_form__Goal__tmp_copy_3 = hlds__goal_form__SubGoal_61;

#line 1124 "goal_form.m"
                        hlds__goal_form__Goal_3 = hlds__goal_form__Goal__tmp_copy_3;
#line 1124 "goal_form.m"
                      }
#line 1124 "goal_form.m"
                      continue;
#line 1124 "goal_form.m"
                    }
#line 1115 "goal_form.m"
                }
#line 1102 "goal_form.m"
                break;
#line 1102 "goal_form.m"
              case (MR_Integer) 6:
#line 1127 "goal_form.m"
                {
#line 1127 "goal_form.m"
                  MR_Word hlds__goal_form__Cond_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_5, (MR_Integer) 2)));
#line 1127 "goal_form.m"
                  MR_Word hlds__goal_form__Then_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_5, (MR_Integer) 3)));
#line 1127 "goal_form.m"
                  MR_Word hlds__goal_form__Else_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_5, (MR_Integer) 4)));
#line 1127 "goal_form.m"
                  MR_Word hlds__goal_form__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_5, (MR_Integer) 1)));

#line 1129 "goal_form.m"
                  {
#line 1129 "goal_form.m"
                    MR_Word hlds__goal_form__V_59_59;

#line 1129 "goal_form.m"
                    {
#line 1129 "goal_form.m"
                      hlds__goal_form__V_59_59 = hlds__goal_form__goal_has_foreign_1_f_0(hlds__goal_form__Cond_33);
                    }
#line 1129 "goal_form.m"
                    hlds__goal_form__succeeded = (hlds__goal_form__V_59_59 == (MR_Integer) 1);
#line 1129 "goal_form.m"
                  }
#line 1130 "goal_form.m"
                  if (!(hlds__goal_form__succeeded))
#line 1130 "goal_form.m"
                    {
#line 1130 "goal_form.m"
                      {
#line 1130 "goal_form.m"
                        MR_Word hlds__goal_form__V_58_58;

#line 1130 "goal_form.m"
                        {
#line 1130 "goal_form.m"
                          hlds__goal_form__V_58_58 = hlds__goal_form__goal_has_foreign_1_f_0(hlds__goal_form__Then_34);
                        }
#line 1130 "goal_form.m"
                        hlds__goal_form__succeeded = (hlds__goal_form__V_58_58 == (MR_Integer) 1);
#line 1130 "goal_form.m"
                      }
#line 1130 "goal_form.m"
                      if (!(hlds__goal_form__succeeded))
#line 1131 "goal_form.m"
                        {
#line 1131 "goal_form.m"
                          MR_Word hlds__goal_form__V_57_57;

#line 1131 "goal_form.m"
                          {
#line 1131 "goal_form.m"
                            hlds__goal_form__V_57_57 = hlds__goal_form__goal_has_foreign_1_f_0(hlds__goal_form__Else_35);
                          }
#line 1131 "goal_form.m"
                          hlds__goal_form__succeeded = (hlds__goal_form__V_57_57 == (MR_Integer) 1);
#line 1131 "goal_form.m"
                        }
#line 1130 "goal_form.m"
                    }
#line 1128 "goal_form.m"
                  if (hlds__goal_form__succeeded)
#line 1134 "goal_form.m"
                    hlds__goal_form__HasForeign_4 = (MR_Integer) 1;
#line 1128 "goal_form.m"
                  else
#line 1136 "goal_form.m"
                    hlds__goal_form__HasForeign_4 = (MR_Integer) 0;
#line 1127 "goal_form.m"
                }
#line 1102 "goal_form.m"
                break;
#line 1102 "goal_form.m"
              case (MR_Integer) 7:
#line 1142 "goal_form.m"
                {
#line 1142 "goal_form.m"
                  MR_Word hlds__goal_form__ShortHand_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_5, (MR_Integer) 1)));

#line 1146 "goal_form.m"
#line 1146 "goal_form.m"
                  switch (MR_tag((MR_Word) hlds__goal_form__ShortHand_43)) {
#line 1146 "goal_form.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 1146 "goal_form.m"
                    case (MR_Integer) 0:
#line 1150 "goal_form.m"
                      {
#line 1150 "goal_form.m"
                        MR_Word hlds__goal_form__GoalA_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__ShortHand_43, (MR_Integer) 0)));
#line 1150 "goal_form.m"
                        MR_Word hlds__goal_form__GoalB_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__ShortHand_43, (MR_Integer) 1)));
#line 1150 "goal_form.m"
                        MR_Word hlds__goal_form__V_55_55;
#line 1150 "goal_form.m"
                        MR_Word hlds__goal_form__V_56_56;

#line 1151 "goal_form.m"
                        {
#line 1151 "goal_form.m"
                          hlds__goal_form__V_55_55 = hlds__goal_form__goal_has_foreign_1_f_0(hlds__goal_form__GoalA_53);
                        }
#line 1152 "goal_form.m"
                        {
#line 1152 "goal_form.m"
                          hlds__goal_form__V_56_56 = hlds__goal_form__goal_has_foreign_1_f_0(hlds__goal_form__GoalB_54);
                        }
#line 1151 "goal_form.m"
                        {
#line 1151 "goal_form.m"
                          hlds__goal_form__HasForeign_4 = mercury__bool__or_2_f_0(hlds__goal_form__V_55_55, hlds__goal_form__V_56_56);
                        }
#line 1150 "goal_form.m"
                      }
#line 1146 "goal_form.m"
                      break;
#line 1146 "goal_form.m"
                    case (MR_Integer) 1:
#line 1145 "goal_form.m"
                      hlds__goal_form__HasForeign_4 = (MR_Integer) 1;
#line 1146 "goal_form.m"
                      break;
#line 1146 "goal_form.m"
                    case (MR_Integer) 2:
#line 1147 "goal_form.m"
                      {
#line 1147 "goal_form.m"
                        MR_Word hlds__goal_form__SubGoal_62 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__ShortHand_43, (MR_Integer) 2)));
#line 1147 "goal_form.m"
                        MR_Word hlds__goal_form__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__ShortHand_43, (MR_Integer) 0)));
#line 1147 "goal_form.m"
                        MR_Word hlds__goal_form__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__ShortHand_43, (MR_Integer) 1)));

#line 1148 "goal_form.m"
                        /* direct tailcall eliminated */
#line 1148 "goal_form.m"
                        {
#line 1148 "goal_form.m"
                          MR_Word hlds__goal_form__Goal__tmp_copy_3 = hlds__goal_form__SubGoal_62;

#line 1148 "goal_form.m"
                          hlds__goal_form__Goal_3 = hlds__goal_form__Goal__tmp_copy_3;
#line 1148 "goal_form.m"
                        }
#line 1148 "goal_form.m"
                        continue;
#line 1147 "goal_form.m"
                      }
#line 1146 "goal_form.m"
                      break;
#line 1146 "goal_form.m"
                  }
#line 1142 "goal_form.m"
                }
#line 1102 "goal_form.m"
                break;
#line 1102 "goal_form.m"
            }
#line 1102 "goal_form.m"
            break;
#line 1102 "goal_form.m"
        }
#line 1094 "goal_form.m"
        return hlds__goal_form__HasForeign_4;
#line 1094 "goal_form.m"
      }
#line 1094 "goal_form.m"
      break;
#line 1094 "goal_form.m"
    }
#line 184 "goal_form.m"
}

#line 177 "goal_form.m"
MR_Word MR_CALL 
hlds__goal_form__goal_may_modify_trail_1_f_0(
#line 177 "goal_form.m"
  MR_Word hlds__goal_form__GoalInfo_3)
#line 177 "goal_form.m"
{
#line 1090 "goal_form.m"
  {
#line 1090 "goal_form.m"
    MR_bool hlds__goal_form__succeeded;
#line 1090 "goal_form.m"
    MR_Word hlds__goal_form__HeadVar__2_2;
#line 1090 "goal_form.m"
    MR_Word hlds__goal_form__V_4_4;

#line 1084 "goal_form.m"
    {
#line 1084 "goal_form.m"
      hlds__goal_form__succeeded = hlds__hlds_goal__goal_info_has_feature_2_p_0(hlds__goal_form__GoalInfo_3, (MR_Integer) 15);
    }
#line 1083 "goal_form.m"
    if (hlds__goal_form__succeeded)
#line 1085 "goal_form.m"
      hlds__goal_form__V_4_4 = (MR_Integer) 1;
#line 1083 "goal_form.m"
    else
#line 1087 "goal_form.m"
      hlds__goal_form__V_4_4 = (MR_Integer) 0;
#line 1090 "goal_form.m"
    {
#line 1090 "goal_form.m"
      hlds__goal_form__HeadVar__2_2 = mercury__bool__not_1_f_0(hlds__goal_form__V_4_4);
    }
#line 1090 "goal_form.m"
    return hlds__goal_form__HeadVar__2_2;
#line 1090 "goal_form.m"
  }
#line 177 "goal_form.m"
}

#line 173 "goal_form.m"
MR_Word MR_CALL 
hlds__goal_form__goal_cannot_modify_trail_1_f_0(
#line 173 "goal_form.m"
  MR_Word hlds__goal_form__GoalInfo_3)
#line 173 "goal_form.m"
{
#line 1083 "goal_form.m"
  {
#line 1083 "goal_form.m"
    MR_bool hlds__goal_form__succeeded;
#line 1083 "goal_form.m"
    MR_Word hlds__goal_form__HeadVar__2_2;

#line 1084 "goal_form.m"
    {
#line 1084 "goal_form.m"
      hlds__goal_form__succeeded = hlds__hlds_goal__goal_info_has_feature_2_p_0(hlds__goal_form__GoalInfo_3, (MR_Integer) 15);
    }
#line 1083 "goal_form.m"
    if (hlds__goal_form__succeeded)
#line 1085 "goal_form.m"
      hlds__goal_form__HeadVar__2_2 = (MR_Integer) 1;
#line 1083 "goal_form.m"
    else
#line 1087 "goal_form.m"
      hlds__goal_form__HeadVar__2_2 = (MR_Integer) 0;
#line 1083 "goal_form.m"
    return hlds__goal_form__HeadVar__2_2;
#line 1083 "goal_form.m"
  }
#line 173 "goal_form.m"
}

#line 166 "goal_form.m"
void MR_CALL 
hlds__goal_form__count_recursive_calls_5_p_0(
#line 166 "goal_form.m"
  MR_Word hlds__goal_form__Goal_6,
#line 166 "goal_form.m"
  MR_Word hlds__goal_form__PredId_7,
#line 166 "goal_form.m"
  MR_Integer hlds__goal_form__ProcId_8,
#line 166 "goal_form.m"
  MR_Integer * hlds__goal_form__Min_9,
#line 166 "goal_form.m"
  MR_Integer * hlds__goal_form__Max_10)
#line 166 "goal_form.m"
{
#line 959 "goal_form.m"
  while (MR_TRUE)
#line 959 "goal_form.m"
    {
#line 959 "goal_form.m"
      /* tailcall optimized into a loop */
#line 959 "goal_form.m"
      {
#line 959 "goal_form.m"
        MR_bool hlds__goal_form__succeeded;
#line 959 "goal_form.m"
        MR_Word hlds__goal_form__GoalExpr_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Goal_6, (MR_Integer) 0)));
#line 960 "goal_form.m"
        MR_Word hlds__goal_form__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Goal_6, (MR_Integer) 1)));

#line 968 "goal_form.m"
#line 968 "goal_form.m"
        switch (MR_tag((MR_Word) hlds__goal_form__GoalExpr_11)) {
#line 968 "goal_form.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 968 "goal_form.m"
          case (MR_Integer) 0:
#line 999 "goal_form.m"
            {
#line 999 "goal_form.m"
              MR_Word hlds__goal_form__SubGoal_54 = (MR_Word) MR_body(((MR_Word) hlds__goal_form__GoalExpr_11), (MR_Integer) 0);

#line 1000 "goal_form.m"
              /* direct tailcall eliminated */
#line 1000 "goal_form.m"
              {
#line 1000 "goal_form.m"
                MR_Word hlds__goal_form__Goal__tmp_copy_6 = hlds__goal_form__SubGoal_54;

#line 1000 "goal_form.m"
                hlds__goal_form__Goal_6 = hlds__goal_form__Goal__tmp_copy_6;
#line 1000 "goal_form.m"
              }
#line 1000 "goal_form.m"
              continue;
#line 999 "goal_form.m"
            }
#line 968 "goal_form.m"
            break;
#line 968 "goal_form.m"
          case (MR_Integer) 1:
#line 965 "goal_form.m"
            {
#line 966 "goal_form.m"
              *hlds__goal_form__Min_9 = (MR_Integer) 0;
#line 967 "goal_form.m"
              *hlds__goal_form__Max_10 = (MR_Integer) 0;
#line 965 "goal_form.m"
            }
#line 968 "goal_form.m"
            break;
#line 968 "goal_form.m"
          case (MR_Integer) 2:
#line 969 "goal_form.m"
            {
#line 969 "goal_form.m"
              MR_Word hlds__goal_form__CallPredId_30 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__GoalExpr_11, (MR_Integer) 0)));
#line 969 "goal_form.m"
              MR_Integer hlds__goal_form__CallProcId_31 = ((MR_Integer) (MR_hl_field(MR_mktag(2), hlds__goal_form__GoalExpr_11, (MR_Integer) 1)));
#line 969 "goal_form.m"
              MR_Word hlds__goal_form__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__GoalExpr_11, (MR_Integer) 2)));
#line 969 "goal_form.m"
              MR_Word hlds__goal_form__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__GoalExpr_11, (MR_Integer) 3)));
#line 969 "goal_form.m"
              MR_Word hlds__goal_form__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__GoalExpr_11, (MR_Integer) 4)));
#line 969 "goal_form.m"
              MR_Word hlds__goal_form__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__GoalExpr_11, (MR_Integer) 5)));

#line 971 "goal_form.m"
              {
#line 971 "goal_form.m"
                hlds__goal_form__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(hlds__goal_form__PredId_7, hlds__goal_form__CallPredId_30);
              }
#line 971 "goal_form.m"
              if (hlds__goal_form__succeeded)
#line 972 "goal_form.m"
                hlds__goal_form__succeeded = (hlds__goal_form__ProcId_8 == hlds__goal_form__CallProcId_31);
#line 970 "goal_form.m"
              if (hlds__goal_form__succeeded)
#line 974 "goal_form.m"
                *hlds__goal_form__Min_9 = (MR_Integer) 1;
#line 970 "goal_form.m"
              else
#line 976 "goal_form.m"
                *hlds__goal_form__Min_9 = (MR_Integer) 0;
#line 979 "goal_form.m"
              *hlds__goal_form__Max_10 = *hlds__goal_form__Min_9;
#line 969 "goal_form.m"
            }
#line 968 "goal_form.m"
            break;
#line 968 "goal_form.m"
          case (MR_Integer) 3:
#line 968 "goal_form.m"
#line 968 "goal_form.m"
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_11, (MR_Integer) 0)))) {
#line 968 "goal_form.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 968 "goal_form.m"
              case (MR_Integer) 0:
#line 968 "goal_form.m"
              case (MR_Integer) 1:
#line 965 "goal_form.m"
                {
#line 966 "goal_form.m"
                  *hlds__goal_form__Min_9 = (MR_Integer) 0;
#line 967 "goal_form.m"
                  *hlds__goal_form__Max_10 = (MR_Integer) 0;
#line 965 "goal_form.m"
                }
#line 968 "goal_form.m"
                break;
#line 968 "goal_form.m"
              case (MR_Integer) 2:
#line 981 "goal_form.m"
                {
#line 981 "goal_form.m"
                  MR_Word hlds__goal_form__Goals_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_11, (MR_Integer) 2)));
#line 981 "goal_form.m"
                  MR_Word hlds__goal_form__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_11, (MR_Integer) 1)));

#line 982 "goal_form.m"
                  {
#line 982 "goal_form.m"
                    hlds__goal_form__count_recursive_calls_conj_7_p_0(hlds__goal_form__Goals_38, hlds__goal_form__PredId_7, hlds__goal_form__ProcId_8, (MR_Integer) 0, (MR_Integer) 0, hlds__goal_form__Min_9, hlds__goal_form__Max_10);
                  }
#line 981 "goal_form.m"
                }
#line 968 "goal_form.m"
                break;
#line 968 "goal_form.m"
              case (MR_Integer) 3:
#line 984 "goal_form.m"
                {
#line 984 "goal_form.m"
                  MR_Word hlds__goal_form__Goals_76 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_11, (MR_Integer) 1)));

#line 985 "goal_form.m"
                  {
#line 985 "goal_form.m"
                    hlds__goal_form__count_recursive_calls_disj_5_p_0(hlds__goal_form__Goals_76, hlds__goal_form__PredId_7, hlds__goal_form__ProcId_8, hlds__goal_form__Min_9, hlds__goal_form__Max_10);
                  }
#line 984 "goal_form.m"
                }
#line 968 "goal_form.m"
                break;
#line 968 "goal_form.m"
              case (MR_Integer) 4:
#line 987 "goal_form.m"
                {
#line 987 "goal_form.m"
                  MR_Word hlds__goal_form__Cases_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_11, (MR_Integer) 3)));
#line 987 "goal_form.m"
                  MR_Word hlds__goal_form__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_11, (MR_Integer) 1)));
#line 987 "goal_form.m"
                  MR_Word hlds__goal_form__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_11, (MR_Integer) 2)));

#line 988 "goal_form.m"
                  {
#line 988 "goal_form.m"
                    hlds__goal_form__count_recursive_calls_cases_5_p_0(hlds__goal_form__Cases_41, hlds__goal_form__PredId_7, hlds__goal_form__ProcId_8, hlds__goal_form__Min_9, hlds__goal_form__Max_10);
                  }
#line 987 "goal_form.m"
                }
#line 968 "goal_form.m"
                break;
#line 968 "goal_form.m"
              case (MR_Integer) 5:
#line 1002 "goal_form.m"
                {
#line 1002 "goal_form.m"
                  MR_Word hlds__goal_form__Reason_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_11, (MR_Integer) 1)));
#line 1002 "goal_form.m"
                  MR_Word hlds__goal_form__SubGoal_77 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_11, (MR_Integer) 2)));
#line 1004 "goal_form.m"
                  MR_Word hlds__goal_form__FGT_57;
#line 1004 "goal_form.m"
                  MR_Word hlds__goal_form__V_56_56;

#line 1004 "goal_form.m"
                  hlds__goal_form__succeeded = ((((MR_tag((MR_Word) hlds__goal_form__Reason_55)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__Reason_55, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 1004 "goal_form.m"
                  if (hlds__goal_form__succeeded)
#line 1004 "goal_form.m"
                    {
#line 1004 "goal_form.m"
                      hlds__goal_form__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__Reason_55, (MR_Integer) 1)));
#line 1004 "goal_form.m"
                      hlds__goal_form__FGT_57 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__Reason_55, (MR_Integer) 2)));
#line 1006 "goal_form.m"
#line 1006 "goal_form.m"
                      switch (hlds__goal_form__FGT_57) {
#line 1006 "goal_form.m"
                        default:
#line 1006 "goal_form.m"
                          hlds__goal_form__succeeded = MR_FALSE;
#line 1006 "goal_form.m"
                          break;
#line 1006 "goal_form.m"
                        case (MR_Integer) 1:
#line 1005 "goal_form.m"
                          hlds__goal_form__succeeded = MR_TRUE;
#line 1006 "goal_form.m"
                          break;
#line 1006 "goal_form.m"
                        case (MR_Integer) 2:
#line 1006 "goal_form.m"
                          hlds__goal_form__succeeded = MR_TRUE;
#line 1006 "goal_form.m"
                          break;
#line 1006 "goal_form.m"
                      }
#line 1004 "goal_form.m"
                    }
#line 1003 "goal_form.m"
                  if (hlds__goal_form__succeeded)
#line 1011 "goal_form.m"
                    {
#line 1011 "goal_form.m"
                      *hlds__goal_form__Min_9 = (MR_Integer) 0;
#line 1012 "goal_form.m"
                      *hlds__goal_form__Max_10 = (MR_Integer) 0;
#line 1011 "goal_form.m"
                    }
#line 1003 "goal_form.m"
                  else
#line 1014 "goal_form.m"
                    {
#line 1014 "goal_form.m"
                      /* direct tailcall eliminated */
#line 1014 "goal_form.m"
                      {
#line 1014 "goal_form.m"
                        MR_Word hlds__goal_form__Goal__tmp_copy_6 = hlds__goal_form__SubGoal_77;

#line 1014 "goal_form.m"
                        hlds__goal_form__Goal_6 = hlds__goal_form__Goal__tmp_copy_6;
#line 1014 "goal_form.m"
                      }
#line 1014 "goal_form.m"
                      continue;
#line 1014 "goal_form.m"
                    }
#line 1002 "goal_form.m"
                }
#line 968 "goal_form.m"
                break;
#line 968 "goal_form.m"
              case (MR_Integer) 6:
#line 990 "goal_form.m"
                {
#line 990 "goal_form.m"
                  MR_Word hlds__goal_form__Cond_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_11, (MR_Integer) 2)));
#line 990 "goal_form.m"
                  MR_Word hlds__goal_form__Then_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_11, (MR_Integer) 3)));
#line 990 "goal_form.m"
                  MR_Word hlds__goal_form__Else_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_11, (MR_Integer) 4)));
#line 990 "goal_form.m"
                  MR_Integer hlds__goal_form__CMin_46;
#line 990 "goal_form.m"
                  MR_Integer hlds__goal_form__CMax_47;
#line 990 "goal_form.m"
                  MR_Integer hlds__goal_form__TMin_48;
#line 990 "goal_form.m"
                  MR_Integer hlds__goal_form__TMax_49;
#line 990 "goal_form.m"
                  MR_Integer hlds__goal_form__EMin_50;
#line 990 "goal_form.m"
                  MR_Integer hlds__goal_form__EMax_51;
#line 990 "goal_form.m"
                  MR_Integer hlds__goal_form__CTMin_52;
#line 990 "goal_form.m"
                  MR_Integer hlds__goal_form__CTMax_53;
#line 990 "goal_form.m"
                  MR_Word hlds__goal_form__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_11, (MR_Integer) 1)));

#line 991 "goal_form.m"
                  {
#line 991 "goal_form.m"
                    hlds__goal_form__count_recursive_calls_5_p_0(hlds__goal_form__Cond_43, hlds__goal_form__PredId_7, hlds__goal_form__ProcId_8, &hlds__goal_form__CMin_46, &hlds__goal_form__CMax_47);
                  }
#line 992 "goal_form.m"
                  {
#line 992 "goal_form.m"
                    hlds__goal_form__count_recursive_calls_5_p_0(hlds__goal_form__Then_44, hlds__goal_form__PredId_7, hlds__goal_form__ProcId_8, &hlds__goal_form__TMin_48, &hlds__goal_form__TMax_49);
                  }
#line 993 "goal_form.m"
                  {
#line 993 "goal_form.m"
                    hlds__goal_form__count_recursive_calls_5_p_0(hlds__goal_form__Else_45, hlds__goal_form__PredId_7, hlds__goal_form__ProcId_8, &hlds__goal_form__EMin_50, &hlds__goal_form__EMax_51);
                  }
#line 994 "goal_form.m"
                  hlds__goal_form__CTMin_52 = (hlds__goal_form__CMin_46 + hlds__goal_form__TMin_48);
#line 995 "goal_form.m"
                  hlds__goal_form__CTMax_53 = (hlds__goal_form__CMax_47 + hlds__goal_form__TMax_49);
#line 996 "goal_form.m"
                  {
#line 996 "goal_form.m"
                    mercury__int__min_3_p_0(hlds__goal_form__CTMin_52, hlds__goal_form__EMin_50, hlds__goal_form__Min_9);
                  }
#line 997 "goal_form.m"
                  {
#line 997 "goal_form.m"
                    mercury__int__max_3_p_0(hlds__goal_form__CTMax_53, hlds__goal_form__EMax_51, hlds__goal_form__Max_10);
                  }
#line 990 "goal_form.m"
                }
#line 968 "goal_form.m"
                break;
#line 968 "goal_form.m"
              case (MR_Integer) 7:
#line 1017 "goal_form.m"
                {
#line 1017 "goal_form.m"
                  MR_Word hlds__goal_form__ShortHand_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_11, (MR_Integer) 1)));

#line 1022 "goal_form.m"
#line 1022 "goal_form.m"
                  switch (MR_tag((MR_Word) hlds__goal_form__ShortHand_58)) {
#line 1022 "goal_form.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 1022 "goal_form.m"
                    case (MR_Integer) 0:
#line 1026 "goal_form.m"
                      {
#line 1028 "goal_form.m"
                        {
#line 1028 "goal_form.m"
                          mercury__require__unexpected_3_p_0((MR_String) "hlds.goal_form", (MR_String) "predicate \140hlds.goal_form.count_recursive_calls\'/5", (MR_String) "bi_implication");
#line 1028 "goal_form.m"
                          return;
                        }
#line 1026 "goal_form.m"
                      }
#line 1022 "goal_form.m"
                      break;
#line 1022 "goal_form.m"
                    case (MR_Integer) 1:
#line 1019 "goal_form.m"
                      {
#line 1019 "goal_form.m"
                        MR_Word hlds__goal_form__Goal_84 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__ShortHand_58, (MR_Integer) 4)));
#line 1019 "goal_form.m"
                        MR_Word hlds__goal_form__Goals_85 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__ShortHand_58, (MR_Integer) 5)));
#line 1019 "goal_form.m"
                        MR_Word hlds__goal_form__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__ShortHand_58, (MR_Integer) 0)));
#line 1019 "goal_form.m"
                        MR_Word hlds__goal_form__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__ShortHand_58, (MR_Integer) 1)));
#line 1019 "goal_form.m"
                        MR_Word hlds__goal_form__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__ShortHand_58, (MR_Integer) 2)));
#line 1019 "goal_form.m"
                        MR_Word hlds__goal_form__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__ShortHand_58, (MR_Integer) 3)));
#line 1019 "goal_form.m"
                        MR_Word hlds__goal_form__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__ShortHand_58, (MR_Integer) 6)));

#line 1052 "goal_form.m"
                        if ((hlds__goal_form__Goals_85 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1051 "goal_form.m"
                          {
#line 1051 "goal_form.m"
                            /* direct tailcall eliminated */
#line 1051 "goal_form.m"
                            {
#line 1051 "goal_form.m"
                              MR_Word hlds__goal_form__Goal__tmp_copy_6 = hlds__goal_form__Goal_84;

#line 1051 "goal_form.m"
                              hlds__goal_form__Goal_6 = hlds__goal_form__Goal__tmp_copy_6;
#line 1051 "goal_form.m"
                            }
#line 1051 "goal_form.m"
                            continue;
#line 1051 "goal_form.m"
                          }
#line 1052 "goal_form.m"
                        else
#line 1053 "goal_form.m"
                          {
#line 1053 "goal_form.m"
                            MR_Integer hlds__goal_form__Min0_92;
#line 1053 "goal_form.m"
                            MR_Integer hlds__goal_form__Max0_93;
#line 1053 "goal_form.m"
                            MR_Integer hlds__goal_form__Min1_94;
#line 1053 "goal_form.m"
                            MR_Integer hlds__goal_form__Max1_95;

#line 1054 "goal_form.m"
                            {
#line 1054 "goal_form.m"
                              hlds__goal_form__count_recursive_calls_5_p_0(hlds__goal_form__Goal_84, hlds__goal_form__PredId_7, hlds__goal_form__ProcId_8, &hlds__goal_form__Min0_92, &hlds__goal_form__Max0_93);
                            }
#line 1055 "goal_form.m"
                            {
#line 1055 "goal_form.m"
                              hlds__goal_form__count_recursive_calls_disj_5_p_0(hlds__goal_form__Goals_85, hlds__goal_form__PredId_7, hlds__goal_form__ProcId_8, &hlds__goal_form__Min1_94, &hlds__goal_form__Max1_95);
                            }
#line 1056 "goal_form.m"
                            {
#line 1056 "goal_form.m"
                              mercury__int__min_3_p_0(hlds__goal_form__Min0_92, hlds__goal_form__Min1_94, hlds__goal_form__Min_9);
                            }
#line 1057 "goal_form.m"
                            {
#line 1057 "goal_form.m"
                              mercury__int__max_3_p_0(hlds__goal_form__Max0_93, hlds__goal_form__Max1_95, hlds__goal_form__Max_10);
                            }
#line 1053 "goal_form.m"
                          }
#line 1019 "goal_form.m"
                      }
#line 1022 "goal_form.m"
                      break;
#line 1022 "goal_form.m"
                    case (MR_Integer) 2:
#line 1023 "goal_form.m"
                      {
#line 1023 "goal_form.m"
                        MR_Word hlds__goal_form__SubGoal_78 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__ShortHand_58, (MR_Integer) 2)));
#line 1023 "goal_form.m"
                        MR_Word hlds__goal_form__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__ShortHand_58, (MR_Integer) 0)));
#line 1023 "goal_form.m"
                        MR_Word hlds__goal_form__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__ShortHand_58, (MR_Integer) 1)));

#line 1024 "goal_form.m"
                        /* direct tailcall eliminated */
#line 1024 "goal_form.m"
                        {
#line 1024 "goal_form.m"
                          MR_Word hlds__goal_form__Goal__tmp_copy_6 = hlds__goal_form__SubGoal_78;

#line 1024 "goal_form.m"
                          hlds__goal_form__Goal_6 = hlds__goal_form__Goal__tmp_copy_6;
#line 1024 "goal_form.m"
                        }
#line 1024 "goal_form.m"
                        continue;
#line 1023 "goal_form.m"
                      }
#line 1022 "goal_form.m"
                      break;
#line 1022 "goal_form.m"
                  }
#line 1017 "goal_form.m"
                }
#line 968 "goal_form.m"
                break;
#line 968 "goal_form.m"
            }
#line 968 "goal_form.m"
            break;
#line 968 "goal_form.m"
        }
#line 959 "goal_form.m"
      }
#line 959 "goal_form.m"
      break;
#line 959 "goal_form.m"
    }
#line 166 "goal_form.m"
}

#line 159 "goal_form.m"
MR_bool MR_CALL 
hlds__goal_form__cannot_fail_before_stack_flush_1_p_0(
#line 159 "goal_form.m"
  MR_Word hlds__goal_form__HeadVar__1_1)
#line 159 "goal_form.m"
{
#line 918 "goal_form.m"
  {
#line 918 "goal_form.m"
    MR_bool hlds__goal_form__succeeded;
#line 918 "goal_form.m"
    MR_Word hlds__goal_form__GoalExpr_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__HeadVar__1_1, (MR_Integer) 0)));
#line 918 "goal_form.m"
    MR_Word hlds__goal_form__GoalInfo_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__HeadVar__1_1, (MR_Integer) 1)));
#line 918 "goal_form.m"
    MR_Word hlds__goal_form__Detism_4;
#line 918 "goal_form.m"
    MR_Word hlds__goal_form__CanFail_5;
#line 920 "goal_form.m"
    MR_Word hlds__goal_form__V_6_6;

#line 919 "goal_form.m"
    {
#line 919 "goal_form.m"
      hlds__goal_form__Detism_4 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(hlds__goal_form__GoalInfo_3);
    }
#line 920 "goal_form.m"
    {
#line 920 "goal_form.m"
      parse_tree__prog_data__determinism_components_3_p_0(hlds__goal_form__Detism_4, &hlds__goal_form__CanFail_5, &hlds__goal_form__V_6_6);
    }
#line 923 "goal_form.m"
#line 923 "goal_form.m"
    switch (hlds__goal_form__CanFail_5) {
#line 923 "goal_form.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 923 "goal_form.m"
      case (MR_Integer) 0:
#line 930 "goal_form.m"
        {
#line 930 "goal_form.m"
          MR_Word hlds__goal_form__ConjType_7;
#line 930 "goal_form.m"
          MR_Word hlds__goal_form__Goals_8;

#line 930 "goal_form.m"
          hlds__goal_form__succeeded = ((((MR_tag((MR_Word) hlds__goal_form__GoalExpr_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_2, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 930 "goal_form.m"
          if (hlds__goal_form__succeeded)
#line 930 "goal_form.m"
            {
#line 930 "goal_form.m"
              hlds__goal_form__ConjType_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_2, (MR_Integer) 1)));
#line 930 "goal_form.m"
              hlds__goal_form__Goals_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_2, (MR_Integer) 2)));
#line 931 "goal_form.m"
              hlds__goal_form__succeeded = (hlds__goal_form__ConjType_7 == (MR_Integer) 0);
#line 930 "goal_form.m"
              if (hlds__goal_form__succeeded)
#line 932 "goal_form.m"
                {
#line 932 "goal_form.m"
                  hlds__goal_form__succeeded = hlds__goal_form__cannot_fail_before_stack_flush_conj_1_p_0(hlds__goal_form__Goals_8);
                }
#line 930 "goal_form.m"
            }
#line 930 "goal_form.m"
        }
#line 923 "goal_form.m"
        break;
#line 923 "goal_form.m"
      case (MR_Integer) 1:
#line 922 "goal_form.m"
        hlds__goal_form__succeeded = MR_TRUE;
#line 923 "goal_form.m"
        break;
#line 923 "goal_form.m"
    }
#line 918 "goal_form.m"
    return hlds__goal_form__succeeded;
#line 918 "goal_form.m"
  }
#line 159 "goal_form.m"
}

#line 152 "goal_form.m"
MR_bool MR_CALL 
hlds__goal_form__cannot_stack_flush_1_p_0(
#line 152 "goal_form.m"
  MR_Word hlds__goal_form__HeadVar__1_1)
#line 152 "goal_form.m"
{
#line 885 "goal_form.m"
  {
#line 885 "goal_form.m"
    MR_bool hlds__goal_form__succeeded;
#line 885 "goal_form.m"
    MR_Word hlds__goal_form__GoalExpr_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__HeadVar__1_1, (MR_Integer) 0)));
#line 885 "goal_form.m"
    MR_Word hlds__goal_form__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__HeadVar__1_1, (MR_Integer) 1)));

#line 886 "goal_form.m"
    {
#line 886 "goal_form.m"
      hlds__goal_form__succeeded = hlds__goal_form__cannot_stack_flush_2_1_p_0(hlds__goal_form__GoalExpr_2);
    }
#line 885 "goal_form.m"
    return hlds__goal_form__succeeded;
#line 885 "goal_form.m"
  }
#line 152 "goal_form.m"
}

#line 143 "goal_form.m"
MR_bool MR_CALL 
hlds__goal_form__goal_list_may_allocate_heap_1_p_0(
#line 143 "goal_form.m"
  MR_Word hlds__goal_form__Goals_2)
#line 143 "goal_form.m"
{
#line 759 "goal_form.m"
  {
#line 759 "goal_form.m"
    MR_bool hlds__goal_form__succeeded;
#line 759 "goal_form.m"
    MR_Word hlds__goal_form__V_4_4;

#line 760 "goal_form.m"
    {
#line 760 "goal_form.m"
      hlds__goal_form__goal_list_may_allocate_heap_2_p_0(hlds__goal_form__Goals_2, &hlds__goal_form__V_4_4);
    }
#line 760 "goal_form.m"
    hlds__goal_form__succeeded = ((MR_Integer) 1 == hlds__goal_form__V_4_4);
#line 759 "goal_form.m"
    return hlds__goal_form__succeeded;
#line 759 "goal_form.m"
  }
#line 143 "goal_form.m"
}

#line 142 "goal_form.m"
MR_bool MR_CALL 
hlds__goal_form__goal_may_allocate_heap_1_p_0(
#line 142 "goal_form.m"
  MR_Word hlds__goal_form__Goal_2)
#line 142 "goal_form.m"
{
#line 756 "goal_form.m"
  {
#line 756 "goal_form.m"
    MR_bool hlds__goal_form__succeeded;
#line 756 "goal_form.m"
    MR_Word hlds__goal_form__V_4_4;
#line 756 "goal_form.m"
    MR_Word hlds__goal_form__GoalExpr_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Goal_2, (MR_Integer) 0)));
#line 764 "goal_form.m"
    MR_Word hlds__goal_form___GoalInfo_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Goal_2, (MR_Integer) 1)));

#line 765 "goal_form.m"
    {
#line 765 "goal_form.m"
      hlds__goal_form__goal_may_allocate_heap_2_2_p_0(hlds__goal_form__GoalExpr_6, &hlds__goal_form__V_4_4);
    }
#line 757 "goal_form.m"
    hlds__goal_form__succeeded = ((MR_Integer) 1 == hlds__goal_form__V_4_4);
#line 756 "goal_form.m"
    return hlds__goal_form__succeeded;
#line 756 "goal_form.m"
  }
#line 142 "goal_form.m"
}

#line 133 "goal_form.m"
MR_Word MR_CALL 
hlds__goal_form__goal_is_flat_1_f_0(
#line 133 "goal_form.m"
  MR_Word hlds__goal_form__HeadVar__1_1)
#line 133 "goal_form.m"
{
#line 699 "goal_form.m"
  {
#line 699 "goal_form.m"
    MR_bool hlds__goal_form__succeeded;
#line 699 "goal_form.m"
    MR_Word hlds__goal_form__HeadVar__2_2;
#line 699 "goal_form.m"
    MR_Word hlds__goal_form__GoalExpr_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__HeadVar__1_1, (MR_Integer) 0)));
#line 699 "goal_form.m"
    MR_Word hlds__goal_form___GoalInfo_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__HeadVar__1_1, (MR_Integer) 1)));

#line 699 "goal_form.m"
    {
#line 699 "goal_form.m"
      hlds__goal_form__HeadVar__2_2 = hlds__goal_form__goal_is_flat_expr_1_f_0(hlds__goal_form__GoalExpr_3);
    }
#line 699 "goal_form.m"
    return hlds__goal_form__HeadVar__2_2;
#line 699 "goal_form.m"
  }
#line 133 "goal_form.m"
}

#line 128 "goal_form.m"
MR_bool MR_CALL 
hlds__goal_form__goal_can_loop_or_throw_1_p_0(
#line 128 "goal_form.m"
  MR_Word hlds__goal_form__Goal_2)
#line 128 "goal_form.m"
{
#line 428 "goal_form.m"
  {
#line 428 "goal_form.m"
    MR_bool hlds__goal_form__succeeded;

#line 428 "goal_form.m"
    {
#line 428 "goal_form.m"
      hlds__goal_form__succeeded = hlds__goal_form__goal_cannot_loop_or_throw_1_p_0(hlds__goal_form__Goal_2);
    }
#line 428 "goal_form.m"
    hlds__goal_form__succeeded = !(hlds__goal_form__succeeded);
#line 428 "goal_form.m"
    return hlds__goal_form__succeeded;
#line 428 "goal_form.m"
  }
#line 128 "goal_form.m"
}

#line 124 "goal_form.m"
MR_bool MR_CALL 
hlds__goal_form__goal_cannot_loop_or_throw_1_p_0(
#line 124 "goal_form.m"
  MR_Word hlds__goal_form__Goal_2)
#line 124 "goal_form.m"
{
#line 423 "goal_form.m"
  {
#line 423 "goal_form.m"
    MR_bool hlds__goal_form__succeeded;
#line 423 "goal_form.m"
    MR_Word hlds__goal_form__V_3_3;
#line 423 "goal_form.m"
    MR_Word hlds__goal_form__V_6_6;
#line 423 "goal_form.m"
    MR_Word hlds__goal_form__GoalExpr_9;
#line 423 "goal_form.m"
    MR_Word hlds__goal_form__GoalInfo_10;
#line 423 "goal_form.m"
    MR_Word hlds__goal_form__Determinism_11;

#line 424 "goal_form.m"
    {
#line 424 "goal_form.m"
      hlds__goal_form__V_3_3 = hlds__goal_form__goal_can_loop_func_2_f_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__goal_form__Goal_2);
    }
#line 424 "goal_form.m"
    hlds__goal_form__succeeded = (hlds__goal_form__V_3_3 == (MR_Integer) 0);
#line 423 "goal_form.m"
    if (hlds__goal_form__succeeded)
#line 423 "goal_form.m"
      {
#line 425 "goal_form.m"
        hlds__goal_form__V_6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 568 "goal_form.m"
        hlds__goal_form__GoalExpr_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Goal_2, (MR_Integer) 0)));
#line 568 "goal_form.m"
        hlds__goal_form__GoalInfo_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Goal_2, (MR_Integer) 1)));
#line 570 "goal_form.m"
        {
#line 570 "goal_form.m"
          hlds__goal_form__Determinism_11 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(hlds__goal_form__GoalInfo_10);
        }
#line 571 "goal_form.m"
        hlds__goal_form__succeeded = (hlds__goal_form__Determinism_11 == (MR_Integer) 6);
#line 571 "goal_form.m"
        if (hlds__goal_form__succeeded)
#line 572 "goal_form.m"
          hlds__goal_form__succeeded = MR_FALSE;
#line 571 "goal_form.m"
        else
#line 574 "goal_form.m"
          {
#line 574 "goal_form.m"
            MR_Word hlds__goal_form__V_13_13;

#line 574 "goal_form.m"
            {
#line 574 "goal_form.m"
              hlds__goal_form__V_13_13 = hlds__goal_form__goal_expr_can_throw_2_f_0(hlds__goal_form__V_6_6, hlds__goal_form__GoalExpr_9);
            }
#line 425 "goal_form.m"
            hlds__goal_form__succeeded = (hlds__goal_form__V_13_13 == (MR_Integer) 0);
#line 574 "goal_form.m"
          }
#line 423 "goal_form.m"
      }
#line 423 "goal_form.m"
    return hlds__goal_form__succeeded;
#line 423 "goal_form.m"
  }
#line 124 "goal_form.m"
}

#line 117 "goal_form.m"
MR_bool MR_CALL 
hlds__goal_form__goal_can_loop_or_throw_2_p_0(
#line 117 "goal_form.m"
  MR_Word hlds__goal_form__ModuleInfo_3,
#line 117 "goal_form.m"
  MR_Word hlds__goal_form__Goal_4)
#line 117 "goal_form.m"
{
#line 421 "goal_form.m"
  {
#line 421 "goal_form.m"
    MR_bool hlds__goal_form__succeeded;

#line 421 "goal_form.m"
    {
#line 421 "goal_form.m"
      hlds__goal_form__succeeded = hlds__goal_form__goal_cannot_loop_or_throw_2_p_0(hlds__goal_form__ModuleInfo_3, hlds__goal_form__Goal_4);
    }
#line 421 "goal_form.m"
    hlds__goal_form__succeeded = !(hlds__goal_form__succeeded);
#line 421 "goal_form.m"
    return hlds__goal_form__succeeded;
#line 421 "goal_form.m"
  }
#line 117 "goal_form.m"
}

#line 113 "goal_form.m"
MR_bool MR_CALL 
hlds__goal_form__goal_cannot_loop_or_throw_2_p_0(
#line 113 "goal_form.m"
  MR_Word hlds__goal_form__ModuleInfo_3,
#line 113 "goal_form.m"
  MR_Word hlds__goal_form__Goal_4)
#line 113 "goal_form.m"
{
#line 416 "goal_form.m"
  {
#line 416 "goal_form.m"
    MR_bool hlds__goal_form__succeeded;
#line 416 "goal_form.m"
    MR_Word hlds__goal_form__V_5_5;
#line 416 "goal_form.m"
    MR_Word hlds__goal_form__V_6_6;
#line 416 "goal_form.m"
    MR_Word hlds__goal_form__GoalExpr_11;
#line 416 "goal_form.m"
    MR_Word hlds__goal_form__GoalInfo_12;
#line 416 "goal_form.m"
    MR_Word hlds__goal_form__Determinism_13;

#line 417 "goal_form.m"
    {
#line 417 "goal_form.m"
      hlds__goal_form__V_6_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 417 "goal_form.m"
      MR_hl_field(MR_mktag(1), hlds__goal_form__V_6_6, 0) = ((MR_Box) (hlds__goal_form__ModuleInfo_3));
#line 417 "goal_form.m"
    }
#line 417 "goal_form.m"
    {
#line 417 "goal_form.m"
      hlds__goal_form__V_5_5 = hlds__goal_form__goal_can_loop_func_2_f_0(hlds__goal_form__V_6_6, hlds__goal_form__Goal_4);
    }
#line 417 "goal_form.m"
    hlds__goal_form__succeeded = (hlds__goal_form__V_5_5 == (MR_Integer) 0);
#line 416 "goal_form.m"
    if (hlds__goal_form__succeeded)
#line 416 "goal_form.m"
      {
#line 568 "goal_form.m"
        hlds__goal_form__GoalExpr_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Goal_4, (MR_Integer) 0)));
#line 568 "goal_form.m"
        hlds__goal_form__GoalInfo_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Goal_4, (MR_Integer) 1)));
#line 570 "goal_form.m"
        {
#line 570 "goal_form.m"
          hlds__goal_form__Determinism_13 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(hlds__goal_form__GoalInfo_12);
        }
#line 571 "goal_form.m"
        hlds__goal_form__succeeded = (hlds__goal_form__Determinism_13 == (MR_Integer) 6);
#line 571 "goal_form.m"
        if (hlds__goal_form__succeeded)
#line 572 "goal_form.m"
          hlds__goal_form__succeeded = MR_FALSE;
#line 571 "goal_form.m"
        else
#line 574 "goal_form.m"
          {
#line 574 "goal_form.m"
            MR_Word hlds__goal_form__V_15_15;

#line 574 "goal_form.m"
            {
#line 574 "goal_form.m"
              hlds__goal_form__V_15_15 = hlds__goal_form__goal_expr_can_throw_2_f_0(hlds__goal_form__V_6_6, hlds__goal_form__GoalExpr_11);
            }
#line 418 "goal_form.m"
            hlds__goal_form__succeeded = (hlds__goal_form__V_15_15 == (MR_Integer) 0);
#line 574 "goal_form.m"
          }
#line 416 "goal_form.m"
      }
#line 416 "goal_form.m"
    return hlds__goal_form__succeeded;
#line 416 "goal_form.m"
  }
#line 113 "goal_form.m"
}

#line 109 "goal_form.m"
MR_bool MR_CALL 
hlds__goal_form__goal_can_throw_2_p_0(
#line 109 "goal_form.m"
  MR_Word hlds__goal_form__ModuleInfo_3,
#line 109 "goal_form.m"
  MR_Word hlds__goal_form__Goal_4)
#line 109 "goal_form.m"
{
#line 413 "goal_form.m"
  {
#line 413 "goal_form.m"
    MR_bool hlds__goal_form__succeeded;
#line 413 "goal_form.m"
    MR_Word hlds__goal_form__V_6_6;
#line 413 "goal_form.m"
    MR_Word hlds__goal_form__GoalExpr_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Goal_4, (MR_Integer) 0)));
#line 413 "goal_form.m"
    MR_Word hlds__goal_form__GoalInfo_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Goal_4, (MR_Integer) 1)));
#line 413 "goal_form.m"
    MR_Word hlds__goal_form__Determinism_11;

#line 414 "goal_form.m"
    {
#line 414 "goal_form.m"
      hlds__goal_form__V_6_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 414 "goal_form.m"
      MR_hl_field(MR_mktag(1), hlds__goal_form__V_6_6, 0) = ((MR_Box) (hlds__goal_form__ModuleInfo_3));
#line 414 "goal_form.m"
    }
#line 570 "goal_form.m"
    {
#line 570 "goal_form.m"
      hlds__goal_form__Determinism_11 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(hlds__goal_form__GoalInfo_10);
    }
#line 571 "goal_form.m"
    hlds__goal_form__succeeded = (hlds__goal_form__Determinism_11 == (MR_Integer) 6);
#line 571 "goal_form.m"
    if (hlds__goal_form__succeeded)
#line 572 "goal_form.m"
      hlds__goal_form__succeeded = MR_TRUE;
#line 571 "goal_form.m"
    else
#line 574 "goal_form.m"
      {
#line 574 "goal_form.m"
        MR_Word hlds__goal_form__V_13_13;

#line 574 "goal_form.m"
        {
#line 574 "goal_form.m"
          hlds__goal_form__V_13_13 = hlds__goal_form__goal_expr_can_throw_2_f_0(hlds__goal_form__V_6_6, hlds__goal_form__GoalExpr_9);
        }
#line 414 "goal_form.m"
        hlds__goal_form__succeeded = (hlds__goal_form__V_13_13 == (MR_Integer) 1);
#line 574 "goal_form.m"
      }
#line 413 "goal_form.m"
    return hlds__goal_form__succeeded;
#line 413 "goal_form.m"
  }
#line 109 "goal_form.m"
}

#line 105 "goal_form.m"
MR_bool MR_CALL 
hlds__goal_form__goal_cannot_throw_2_p_0(
#line 105 "goal_form.m"
  MR_Word hlds__goal_form__ModuleInfo_3,
#line 105 "goal_form.m"
  MR_Word hlds__goal_form__Goal_4)
#line 105 "goal_form.m"
{
#line 410 "goal_form.m"
  {
#line 410 "goal_form.m"
    MR_bool hlds__goal_form__succeeded;
#line 410 "goal_form.m"
    MR_Word hlds__goal_form__V_6_6;
#line 410 "goal_form.m"
    MR_Word hlds__goal_form__GoalExpr_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Goal_4, (MR_Integer) 0)));
#line 410 "goal_form.m"
    MR_Word hlds__goal_form__GoalInfo_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Goal_4, (MR_Integer) 1)));
#line 410 "goal_form.m"
    MR_Word hlds__goal_form__Determinism_11;

#line 411 "goal_form.m"
    {
#line 411 "goal_form.m"
      hlds__goal_form__V_6_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 411 "goal_form.m"
      MR_hl_field(MR_mktag(1), hlds__goal_form__V_6_6, 0) = ((MR_Box) (hlds__goal_form__ModuleInfo_3));
#line 411 "goal_form.m"
    }
#line 570 "goal_form.m"
    {
#line 570 "goal_form.m"
      hlds__goal_form__Determinism_11 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(hlds__goal_form__GoalInfo_10);
    }
#line 571 "goal_form.m"
    hlds__goal_form__succeeded = (hlds__goal_form__Determinism_11 == (MR_Integer) 6);
#line 571 "goal_form.m"
    if (hlds__goal_form__succeeded)
#line 572 "goal_form.m"
      hlds__goal_form__succeeded = MR_FALSE;
#line 571 "goal_form.m"
    else
#line 574 "goal_form.m"
      {
#line 574 "goal_form.m"
        MR_Word hlds__goal_form__V_13_13;

#line 574 "goal_form.m"
        {
#line 574 "goal_form.m"
          hlds__goal_form__V_13_13 = hlds__goal_form__goal_expr_can_throw_2_f_0(hlds__goal_form__V_6_6, hlds__goal_form__GoalExpr_9);
        }
#line 411 "goal_form.m"
        hlds__goal_form__succeeded = (hlds__goal_form__V_13_13 == (MR_Integer) 0);
#line 574 "goal_form.m"
      }
#line 410 "goal_form.m"
    return hlds__goal_form__succeeded;
#line 410 "goal_form.m"
  }
#line 105 "goal_form.m"
}

#line 101 "goal_form.m"
MR_bool MR_CALL 
hlds__goal_form__goal_can_loop_2_p_0(
#line 101 "goal_form.m"
  MR_Word hlds__goal_form__ModuleInfo_3,
#line 101 "goal_form.m"
  MR_Word hlds__goal_form__Goal_4)
#line 101 "goal_form.m"
{
#line 407 "goal_form.m"
  {
#line 407 "goal_form.m"
    MR_bool hlds__goal_form__succeeded;
#line 407 "goal_form.m"
    MR_Word hlds__goal_form__V_5_5;
#line 407 "goal_form.m"
    MR_Word hlds__goal_form__V_6_6;

#line 408 "goal_form.m"
    {
#line 408 "goal_form.m"
      hlds__goal_form__V_6_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 408 "goal_form.m"
      MR_hl_field(MR_mktag(1), hlds__goal_form__V_6_6, 0) = ((MR_Box) (hlds__goal_form__ModuleInfo_3));
#line 408 "goal_form.m"
    }
#line 408 "goal_form.m"
    {
#line 408 "goal_form.m"
      hlds__goal_form__V_5_5 = hlds__goal_form__goal_can_loop_func_2_f_0(hlds__goal_form__V_6_6, hlds__goal_form__Goal_4);
    }
#line 408 "goal_form.m"
    hlds__goal_form__succeeded = (hlds__goal_form__V_5_5 == (MR_Integer) 1);
#line 407 "goal_form.m"
    return hlds__goal_form__succeeded;
#line 407 "goal_form.m"
  }
#line 101 "goal_form.m"
}

#line 97 "goal_form.m"
MR_bool MR_CALL 
hlds__goal_form__goal_cannot_loop_2_p_0(
#line 97 "goal_form.m"
  MR_Word hlds__goal_form__ModuleInfo_3,
#line 97 "goal_form.m"
  MR_Word hlds__goal_form__Goal_4)
#line 97 "goal_form.m"
{
#line 404 "goal_form.m"
  {
#line 404 "goal_form.m"
    MR_bool hlds__goal_form__succeeded;
#line 404 "goal_form.m"
    MR_Word hlds__goal_form__V_5_5;
#line 404 "goal_form.m"
    MR_Word hlds__goal_form__V_6_6;

#line 405 "goal_form.m"
    {
#line 405 "goal_form.m"
      hlds__goal_form__V_6_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 405 "goal_form.m"
      MR_hl_field(MR_mktag(1), hlds__goal_form__V_6_6, 0) = ((MR_Box) (hlds__goal_form__ModuleInfo_3));
#line 405 "goal_form.m"
    }
#line 405 "goal_form.m"
    {
#line 405 "goal_form.m"
      hlds__goal_form__V_5_5 = hlds__goal_form__goal_can_loop_func_2_f_0(hlds__goal_form__V_6_6, hlds__goal_form__Goal_4);
    }
#line 405 "goal_form.m"
    hlds__goal_form__succeeded = (hlds__goal_form__V_5_5 == (MR_Integer) 0);
#line 404 "goal_form.m"
    return hlds__goal_form__succeeded;
#line 404 "goal_form.m"
  }
#line 97 "goal_form.m"
}

#line 85 "goal_form.m"
void MR_CALL 
hlds__goal_form__goal_can_loop_or_throw_4_p_0(
#line 85 "goal_form.m"
  MR_Word hlds__goal_form__Goal_5,
#line 85 "goal_form.m"
  MR_Word * hlds__goal_form__Result_6,
#line 85 "goal_form.m"
  MR_Word hlds__goal_form__STATE_VARIABLE_ModuleInfo_0_9,
#line 85 "goal_form.m"
  MR_Word * hlds__goal_form__STATE_VARIABLE_ModuleInfo_10)
#line 85 "goal_form.m"
{
#line 389 "goal_form.m"
  {
#line 389 "goal_form.m"
    MR_bool hlds__goal_form__succeeded;
#line 404 "goal_form.m"
    MR_Word hlds__goal_form__V_14_14;
#line 404 "goal_form.m"
    MR_Word hlds__goal_form__V_15_15;

#line 405 "goal_form.m"
    {
#line 405 "goal_form.m"
      hlds__goal_form__V_15_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 405 "goal_form.m"
      MR_hl_field(MR_mktag(1), hlds__goal_form__V_15_15, 0) = ((MR_Box) (hlds__goal_form__STATE_VARIABLE_ModuleInfo_0_9));
#line 405 "goal_form.m"
    }
#line 405 "goal_form.m"
    {
#line 405 "goal_form.m"
      hlds__goal_form__V_14_14 = hlds__goal_form__goal_can_loop_func_2_f_0(hlds__goal_form__V_15_15, hlds__goal_form__Goal_5);
    }
#line 405 "goal_form.m"
    hlds__goal_form__succeeded = (hlds__goal_form__V_14_14 == (MR_Integer) 0);
#line 389 "goal_form.m"
    if (hlds__goal_form__succeeded)
#line 390 "goal_form.m"
      {
#line 390 "goal_form.m"
        MR_Word hlds__goal_form__GoalExpr_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Goal_5, (MR_Integer) 0)));
#line 390 "goal_form.m"
        MR_Word hlds__goal_form__GoalInfo_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Goal_5, (MR_Integer) 1)));
#line 390 "goal_form.m"
        MR_Word hlds__goal_form__Determinism_22;

#line 253 "goal_form.m"
        {
#line 253 "goal_form.m"
          hlds__goal_form__Determinism_22 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(hlds__goal_form__GoalInfo_20);
        }
#line 254 "goal_form.m"
        hlds__goal_form__succeeded = (hlds__goal_form__Determinism_22 == (MR_Integer) 6);
#line 7495 "hlds.goal_form.c"
        if (hlds__goal_form__succeeded)
#line 7497 "hlds.goal_form.c"
          {
#line 255 "goal_form.m"
            *hlds__goal_form__STATE_VARIABLE_ModuleInfo_10 = hlds__goal_form__STATE_VARIABLE_ModuleInfo_0_9;
#line 393 "goal_form.m"
            *hlds__goal_form__Result_6 = (MR_Integer) 0;
#line 7503 "hlds.goal_form.c"
          }
#line 7505 "hlds.goal_form.c"
        else
#line 7507 "hlds.goal_form.c"
          {
#line 7509 "hlds.goal_form.c"
            MR_Word hlds__goal_form__ThrowResult_24;

#line 257 "goal_form.m"
            {
#line 257 "goal_form.m"
              hlds__goal_form__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_99_97_110_95_116_104_114_111_119_95_50_95_95_91_50_93_95_48_5_p_0(hlds__goal_form__GoalExpr_19, &hlds__goal_form__ThrowResult_24, hlds__goal_form__STATE_VARIABLE_ModuleInfo_0_9, hlds__goal_form__STATE_VARIABLE_ModuleInfo_10);
            }
#line 394 "goal_form.m"
#line 394 "goal_form.m"
            switch (hlds__goal_form__ThrowResult_24) {
#line 394 "goal_form.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 394 "goal_form.m"
              case (MR_Integer) 0:
#line 393 "goal_form.m"
                *hlds__goal_form__Result_6 = (MR_Integer) 0;
#line 394 "goal_form.m"
                break;
#line 394 "goal_form.m"
              case (MR_Integer) 1:
#line 396 "goal_form.m"
                *hlds__goal_form__Result_6 = (MR_Integer) 1;
#line 394 "goal_form.m"
                break;
#line 394 "goal_form.m"
            }
#line 7536 "hlds.goal_form.c"
          }
#line 390 "goal_form.m"
      }
#line 389 "goal_form.m"
    else
#line 399 "goal_form.m"
      {
#line 399 "goal_form.m"
        *hlds__goal_form__Result_6 = (MR_Integer) 0;
#line 399 "goal_form.m"
        *hlds__goal_form__STATE_VARIABLE_ModuleInfo_10 = hlds__goal_form__STATE_VARIABLE_ModuleInfo_0_9;
#line 399 "goal_form.m"
      }
#line 389 "goal_form.m"
  }
#line 85 "goal_form.m"
}

#line 79 "goal_form.m"
void MR_CALL 
hlds__goal_form__goal_can_throw_4_p_0(
#line 79 "goal_form.m"
  MR_Word hlds__goal_form__HeadVar__1_1,
#line 79 "goal_form.m"
  MR_Word * hlds__goal_form__Result_7,
#line 79 "goal_form.m"
  MR_Word hlds__goal_form__STATE_VARIABLE_ModuleInfo_0_10,
#line 79 "goal_form.m"
  MR_Word * hlds__goal_form__STATE_VARIABLE_ModuleInfo_11)
#line 79 "goal_form.m"
{
#line 252 "goal_form.m"
  {
#line 252 "goal_form.m"
    MR_bool hlds__goal_form__succeeded;
#line 252 "goal_form.m"
    MR_Word hlds__goal_form__GoalExpr_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__HeadVar__1_1, (MR_Integer) 0)));
#line 252 "goal_form.m"
    MR_Word hlds__goal_form__GoalInfo_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__HeadVar__1_1, (MR_Integer) 1)));
#line 252 "goal_form.m"
    MR_Word hlds__goal_form__Determinism_9;

#line 253 "goal_form.m"
    {
#line 253 "goal_form.m"
      hlds__goal_form__Determinism_9 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(hlds__goal_form__GoalInfo_6);
    }
#line 254 "goal_form.m"
    hlds__goal_form__succeeded = (hlds__goal_form__Determinism_9 == (MR_Integer) 6);
#line 254 "goal_form.m"
    if (hlds__goal_form__succeeded)
#line 255 "goal_form.m"
      {
#line 255 "goal_form.m"
        *hlds__goal_form__Result_7 = (MR_Integer) 0;
#line 255 "goal_form.m"
        *hlds__goal_form__STATE_VARIABLE_ModuleInfo_11 = hlds__goal_form__STATE_VARIABLE_ModuleInfo_0_10;
#line 255 "goal_form.m"
      }
#line 254 "goal_form.m"
    else
#line 257 "goal_form.m"
      {
#line 257 "goal_form.m"
        hlds__goal_form__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_99_97_110_95_116_104_114_111_119_95_50_95_95_91_50_93_95_48_5_p_0(hlds__goal_form__GoalExpr_5, hlds__goal_form__Result_7, hlds__goal_form__STATE_VARIABLE_ModuleInfo_0_10, hlds__goal_form__STATE_VARIABLE_ModuleInfo_11);
      }
#line 252 "goal_form.m"
  }
#line 79 "goal_form.m"
}

#line 40 "goal_form.m"
MR_bool MR_CALL 
hlds__goal_form__all_disjuncts_are_conj_of_unify_2_p_0(
#line 40 "goal_form.m"
  MR_Word hlds__goal_form__HeadVar__1_1,
#line 40 "goal_form.m"
  MR_Word hlds__goal_form__HeadVar__2_2)
#line 40 "goal_form.m"
{
#line 222 "goal_form.m"
  while (MR_TRUE)
#line 222 "goal_form.m"
    {
#line 222 "goal_form.m"
      /* tailcall optimized into a loop */
#line 222 "goal_form.m"
      {
#line 222 "goal_form.m"
        MR_bool hlds__goal_form__succeeded;

#line 222 "goal_form.m"
        if ((hlds__goal_form__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 222 "goal_form.m"
          hlds__goal_form__succeeded = MR_TRUE;
#line 222 "goal_form.m"
        else
#line 223 "goal_form.m"
          {
#line 223 "goal_form.m"
            MR_Word hlds__goal_form__TypeCtorInfo_10_14;
#line 223 "goal_form.m"
            MR_Word hlds__goal_form__Disjunct_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__HeadVar__2_2, (MR_Integer) 0)));
#line 223 "goal_form.m"
            MR_Word hlds__goal_form__Disjuncts_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__HeadVar__2_2, (MR_Integer) 1)));
#line 223 "goal_form.m"
            MR_Word hlds__goal_form__GoalInfo_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Disjunct_5, (MR_Integer) 1)));
#line 223 "goal_form.m"
            MR_Word hlds__goal_form__CodeModel_11;
#line 223 "goal_form.m"
            MR_Word hlds__goal_form__Conj_12;
#line 223 "goal_form.m"
            MR_Word hlds__goal_form__ToAssignVars_13;
#line 215 "goal_form.m"
            MR_Word hlds__goal_form___GoalExpr_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Disjunct_5, (MR_Integer) 0)));

#line 216 "goal_form.m"
            {
#line 216 "goal_form.m"
              hlds__goal_form__CodeModel_11 = hlds__code_model__goal_info_get_code_model_1_f_0(hlds__goal_form__GoalInfo_10);
            }
#line 217 "goal_form.m"
            hlds__goal_form__succeeded = (hlds__goal_form__CodeModel_11 == (MR_Integer) 0);
#line 223 "goal_form.m"
            if (hlds__goal_form__succeeded)
#line 223 "goal_form.m"
              {
#line 218 "goal_form.m"
                {
#line 218 "goal_form.m"
                  hlds__hlds_goal__goal_to_conj_list_2_p_0(hlds__goal_form__Disjunct_5, &hlds__goal_form__Conj_12);
                }
#line 219 "goal_form.m"
                {
#line 219 "goal_form.m"
                  hlds__goal_form__succeeded = hlds__goal_form__only_constant_goals_3_p_0(hlds__goal_form__Conj_12, hlds__goal_form__HeadVar__1_1, &hlds__goal_form__ToAssignVars_13);
                }
#line 223 "goal_form.m"
                if (hlds__goal_form__succeeded)
#line 223 "goal_form.m"
                  {
#line 7678 "hlds.goal_form.c"
                    hlds__goal_form__TypeCtorInfo_10_14 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 220 "goal_form.m"
                    {
#line 220 "goal_form.m"
                      hlds__goal_form__succeeded = parse_tree__set_of_var__is_empty_1_p_0(hlds__goal_form__TypeCtorInfo_10_14, hlds__goal_form__ToAssignVars_13);
                    }
#line 223 "goal_form.m"
                    if (hlds__goal_form__succeeded)
#line 225 "goal_form.m"
                      {
#line 225 "goal_form.m"
                        /* direct tailcall eliminated */
#line 225 "goal_form.m"
                        {
#line 225 "goal_form.m"
                          MR_Word hlds__goal_form__HeadVar__2__tmp_copy_2 = hlds__goal_form__Disjuncts_6;

#line 225 "goal_form.m"
                          hlds__goal_form__HeadVar__2_2 = hlds__goal_form__HeadVar__2__tmp_copy_2;
#line 225 "goal_form.m"
                        }
#line 225 "goal_form.m"
                        continue;
#line 225 "goal_form.m"
                      }
#line 223 "goal_form.m"
                  }
#line 223 "goal_form.m"
              }
#line 223 "goal_form.m"
          }
#line 222 "goal_form.m"
        return hlds__goal_form__succeeded;
#line 222 "goal_form.m"
      }
#line 222 "goal_form.m"
      break;
#line 222 "goal_form.m"
    }
#line 40 "goal_form.m"
}

#line 36 "goal_form.m"
MR_bool MR_CALL 
hlds__goal_form__goal_is_conj_of_unify_2_p_0(
#line 36 "goal_form.m"
  MR_Word hlds__goal_form__ToAssignVars0_3,
#line 36 "goal_form.m"
  MR_Word hlds__goal_form__Goal_4)
#line 36 "goal_form.m"
{
#line 214 "goal_form.m"
  {
#line 214 "goal_form.m"
    MR_bool hlds__goal_form__succeeded;
#line 214 "goal_form.m"
    MR_Word hlds__goal_form__TypeCtorInfo_10_10;
#line 214 "goal_form.m"
    MR_Word hlds__goal_form__GoalInfo_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Goal_4, (MR_Integer) 1)));
#line 214 "goal_form.m"
    MR_Word hlds__goal_form__CodeModel_7;
#line 214 "goal_form.m"
    MR_Word hlds__goal_form__Conj_8;
#line 214 "goal_form.m"
    MR_Word hlds__goal_form__ToAssignVars_9;
#line 215 "goal_form.m"
    MR_Word hlds__goal_form___GoalExpr_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Goal_4, (MR_Integer) 0)));

#line 216 "goal_form.m"
    {
#line 216 "goal_form.m"
      hlds__goal_form__CodeModel_7 = hlds__code_model__goal_info_get_code_model_1_f_0(hlds__goal_form__GoalInfo_6);
    }
#line 217 "goal_form.m"
    hlds__goal_form__succeeded = (hlds__goal_form__CodeModel_7 == (MR_Integer) 0);
#line 214 "goal_form.m"
    if (hlds__goal_form__succeeded)
#line 214 "goal_form.m"
      {
#line 218 "goal_form.m"
        {
#line 218 "goal_form.m"
          hlds__hlds_goal__goal_to_conj_list_2_p_0(hlds__goal_form__Goal_4, &hlds__goal_form__Conj_8);
        }
#line 219 "goal_form.m"
        {
#line 219 "goal_form.m"
          hlds__goal_form__succeeded = hlds__goal_form__only_constant_goals_3_p_0(hlds__goal_form__Conj_8, hlds__goal_form__ToAssignVars0_3, &hlds__goal_form__ToAssignVars_9);
        }
#line 214 "goal_form.m"
        if (hlds__goal_form__succeeded)
#line 214 "goal_form.m"
          {
#line 7772 "hlds.goal_form.c"
            hlds__goal_form__TypeCtorInfo_10_10 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 220 "goal_form.m"
            {
#line 220 "goal_form.m"
              hlds__goal_form__succeeded = parse_tree__set_of_var__is_empty_1_p_0(hlds__goal_form__TypeCtorInfo_10_10, hlds__goal_form__ToAssignVars_9);
            }
#line 214 "goal_form.m"
          }
#line 214 "goal_form.m"
      }
#line 214 "goal_form.m"
    return hlds__goal_form__succeeded;
#line 214 "goal_form.m"
  }
#line 36 "goal_form.m"
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
