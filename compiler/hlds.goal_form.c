/*
** Automatically generated from `goal_form.m'
** by the Mercury compiler,
** version rotd-2016-10-04
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
#include "libs.compiler_util.mih"
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
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
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




static const MR_EnumFunctorDesc hlds__goal_form__hlds__goal_form__enum_functor_desc_goal_loop_or_throw_status_0_0;

static const MR_EnumFunctorDesc hlds__goal_form__hlds__goal_form__enum_functor_desc_goal_loop_or_throw_status_0_1;

static const MR_EnumFunctorDescPtr hlds__goal_form__hlds__goal_form__enum_value_ordered_goal_loop_or_throw_status_0[2];

static const MR_EnumFunctorDescPtr hlds__goal_form__hlds__goal_form__enum_name_ordered_goal_loop_or_throw_status_0[2];

static const MR_Integer hlds__goal_form__hlds__goal_form__functor_number_map_goal_loop_or_throw_status_0[2];

static const MR_EnumFunctorDesc hlds__goal_form__hlds__goal_form__enum_functor_desc_goal_loop_status_0_0;

static const MR_EnumFunctorDesc hlds__goal_form__hlds__goal_form__enum_functor_desc_goal_loop_status_0_1;

static const MR_EnumFunctorDescPtr hlds__goal_form__hlds__goal_form__enum_value_ordered_goal_loop_status_0[2];

static const MR_EnumFunctorDescPtr hlds__goal_form__hlds__goal_form__enum_name_ordered_goal_loop_status_0[2];

static const MR_Integer hlds__goal_form__hlds__goal_form__functor_number_map_goal_loop_status_0[2];

static const MR_EnumFunctorDesc hlds__goal_form__hlds__goal_form__enum_functor_desc_goal_throw_status_0_0;

static const MR_EnumFunctorDesc hlds__goal_form__hlds__goal_form__enum_functor_desc_goal_throw_status_0_1;

static const MR_EnumFunctorDescPtr hlds__goal_form__hlds__goal_form__enum_value_ordered_goal_throw_status_0[2];

static const MR_EnumFunctorDescPtr hlds__goal_form__hlds__goal_form__enum_name_ordered_goal_throw_status_0[2];

static const MR_Integer hlds__goal_form__hlds__goal_form__functor_number_map_goal_throw_status_0[2];

static const MR_EnumFunctorDesc hlds__goal_form__hlds__goal_form__enum_functor_desc_has_subgoals_0_0;

static const MR_EnumFunctorDesc hlds__goal_form__hlds__goal_form__enum_functor_desc_has_subgoals_0_1;

static const MR_EnumFunctorDescPtr hlds__goal_form__hlds__goal_form__enum_value_ordered_has_subgoals_0[2];

static const MR_EnumFunctorDescPtr hlds__goal_form__hlds__goal_form__enum_name_ordered_has_subgoals_0[2];

static const MR_Integer hlds__goal_form__hlds__goal_form__functor_number_map_has_subgoals_0[2];

static MR_bool MR_CALL 
hlds__goal_form____Unify____goal_loop_or_throw_status_0_0_10001(
  MR_Box hlds__goal_form__wrapper_arg_1,
  MR_Box hlds__goal_form__wrapper_arg_2);

static void MR_CALL 
hlds__goal_form____Compare____goal_loop_or_throw_status_0_0_10001(
  MR_Box * hlds__goal_form__wrapper_arg_1,
  MR_Box hlds__goal_form__wrapper_arg_2,
  MR_Box hlds__goal_form__wrapper_arg_3);

static MR_bool MR_CALL 
hlds__goal_form____Unify____goal_loop_status_0_0_10001(
  MR_Box hlds__goal_form__wrapper_arg_1,
  MR_Box hlds__goal_form__wrapper_arg_2);

static void MR_CALL 
hlds__goal_form____Compare____goal_loop_status_0_0_10001(
  MR_Box * hlds__goal_form__wrapper_arg_1,
  MR_Box hlds__goal_form__wrapper_arg_2,
  MR_Box hlds__goal_form__wrapper_arg_3);

static MR_bool MR_CALL 
hlds__goal_form____Unify____goal_throw_status_0_0_10001(
  MR_Box hlds__goal_form__wrapper_arg_1,
  MR_Box hlds__goal_form__wrapper_arg_2);

static void MR_CALL 
hlds__goal_form____Compare____goal_throw_status_0_0_10001(
  MR_Box * hlds__goal_form__wrapper_arg_1,
  MR_Box hlds__goal_form__wrapper_arg_2,
  MR_Box hlds__goal_form__wrapper_arg_3);

static MR_bool MR_CALL 
hlds__goal_form____Unify____has_subgoals_0_0_10001(
  MR_Box hlds__goal_form__wrapper_arg_1,
  MR_Box hlds__goal_form__wrapper_arg_2);

static void MR_CALL 
hlds__goal_form____Compare____has_subgoals_0_0_10001(
  MR_Box * hlds__goal_form__wrapper_arg_1,
  MR_Box hlds__goal_form__wrapper_arg_2,
  MR_Box hlds__goal_form__wrapper_arg_3);

static void MR_CALL 
hlds__goal_form__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_99_97_110_95_116_104_114_111_119_95_50_95_95_91_50_93_95_48_5_p_0(
  MR_Word hlds__goal_form__GoalExpr_6,
  MR_Word * hlds__goal_form__Result_8,
  MR_Word hlds__goal_form__STATE_VARIABLE_ModuleInfo_0_82,
  MR_Word * hlds__goal_form__STATE_VARIABLE_ModuleInfo_83);

static MR_Word MR_CALL 
hlds__goal_form__case_list_has_foreign_1_f_0(
  MR_Word hlds__goal_form__HeadVar__1_1);

static MR_Word MR_CALL 
hlds__goal_form__goal_list_has_foreign_1_f_0(
  MR_Word hlds__goal_form__HeadVar__1_1);

static void MR_CALL 
hlds__goal_form__count_recursive_calls_cases_5_p_0(
  MR_Word hlds__goal_form__HeadVar__1_1,
  MR_Word hlds__goal_form__PredId_2,
  MR_Integer hlds__goal_form__ProcId_3,
  MR_Integer * hlds__goal_form__Min_4,
  MR_Integer * hlds__goal_form__Max_5);

static void MR_CALL 
hlds__goal_form__count_recursive_calls_disj_5_p_0(
  MR_Word hlds__goal_form__HeadVar__1_1,
  MR_Word hlds__goal_form__PredId_2,
  MR_Integer hlds__goal_form__ProcId_3,
  MR_Integer * hlds__goal_form__HeadVar__4_4,
  MR_Integer * hlds__goal_form__HeadVar__5_5);

static void MR_CALL 
hlds__goal_form__count_recursive_calls_conj_7_p_0(
  MR_Word hlds__goal_form__HeadVar__1_1,
  MR_Word hlds__goal_form__PredId_2,
  MR_Integer hlds__goal_form__ProcId_3,
  MR_Integer hlds__goal_form__HeadVar__4_4,
  MR_Integer hlds__goal_form__HeadVar__5_5,
  MR_Integer * hlds__goal_form__Min_6,
  MR_Integer * hlds__goal_form__Max_7);

static MR_bool MR_CALL 
hlds__goal_form__cannot_fail_before_stack_flush_conj_1_p_0(
  MR_Word hlds__goal_form__HeadVar__1_1);

static MR_bool MR_CALL 
hlds__goal_form__cannot_stack_flush_cases_1_p_0(
  MR_Word hlds__goal_form__HeadVar__1_1);

static MR_bool MR_CALL 
hlds__goal_form__cannot_stack_flush_goals_1_p_0(
  MR_Word hlds__goal_form__HeadVar__1_1);

static MR_bool MR_CALL 
hlds__goal_form__cannot_stack_flush_2_1_p_0(
  MR_Word hlds__goal_form__HeadVar__1_1);

static void MR_CALL 
hlds__goal_form__cases_may_allocate_heap_2_p_0(
  MR_Word hlds__goal_form__HeadVar__1_1,
  MR_Word * hlds__goal_form__HeadVar__2_2);

static void MR_CALL 
hlds__goal_form__goal_list_may_allocate_heap_2_p_0(
  MR_Word hlds__goal_form__HeadVar__1_1,
  MR_Word * hlds__goal_form__HeadVar__2_2);

static void MR_CALL 
hlds__goal_form__goal_may_allocate_heap_2_2_p_0(
  MR_Word hlds__goal_form__GoalExpr_3,
  MR_Word * hlds__goal_form__May_4);

static MR_Word MR_CALL 
hlds__goal_form__goal_is_flat_list_1_f_0(
  MR_Word hlds__goal_form__HeadVar__1_1);

static MR_Word MR_CALL 
hlds__goal_form__goal_is_flat_expr_1_f_0(
  MR_Word hlds__goal_form__GoalExpr_3);

static MR_Word MR_CALL 
hlds__goal_form__case_list_can_throw_2_f_0(
  MR_Word hlds__goal_form__MaybeModuleInfo_1,
  MR_Word hlds__goal_form__HeadVar__2_2);

static MR_Word MR_CALL 
hlds__goal_form__goal_list_can_throw_2_f_0(
  MR_Word hlds__goal_form__MaybeModuleInfo_1,
  MR_Word hlds__goal_form__HeadVar__2_2);

static MR_Word MR_CALL 
hlds__goal_form__goal_expr_can_throw_2_f_0(
  MR_Word hlds__goal_form__MaybeModuleInfo_4,
  MR_Word hlds__goal_form__GoalExpr_5);

static MR_Word MR_CALL 
hlds__goal_form__goal_can_throw_func_2_f_0(
  MR_Word hlds__goal_form__MaybeModuleInfo_4,
  MR_Word hlds__goal_form__HeadVar__2_2);

static MR_Word MR_CALL 
hlds__goal_form__case_list_can_loop_2_f_0(
  MR_Word hlds__goal_form__MaybeModuleInfo_1,
  MR_Word hlds__goal_form__HeadVar__2_2);

static MR_Word MR_CALL 
hlds__goal_form__goal_list_can_loop_2_f_0(
  MR_Word hlds__goal_form__MaybeModuleInfo_1,
  MR_Word hlds__goal_form__HeadVar__2_2);

static MR_Word MR_CALL 
hlds__goal_form__goal_can_loop_func_2_f_0(
  MR_Word hlds__goal_form__MaybeModuleInfo_4,
  MR_Word hlds__goal_form__Goal_5);

static void MR_CALL 
hlds__goal_form__cases_can_throw_4_p_0(
  MR_Word hlds__goal_form__HeadVar__1_1,
  MR_Word * hlds__goal_form__HeadVar__2_2,
  MR_Word hlds__goal_form__STATE_VARIABLE_ModuleInfo_0_3,
  MR_Word * hlds__goal_form__STATE_VARIABLE_ModuleInfo_4);

static void MR_CALL 
hlds__goal_form__goals_can_throw_4_p_0(
  MR_Word hlds__goal_form__HeadVar__1_1,
  MR_Word * hlds__goal_form__HeadVar__2_2,
  MR_Word hlds__goal_form__STATE_VARIABLE_ModuleInfo_0_3,
  MR_Word * hlds__goal_form__STATE_VARIABLE_ModuleInfo_4);

static MR_bool MR_CALL 
hlds__goal_form__only_constant_goals_3_p_0(
  MR_Word hlds__goal_form__HeadVar__1_1,
  MR_Word hlds__goal_form__STATE_VARIABLE_ToAssignVars_0_2,
  MR_Word * hlds__goal_form__STATE_VARIABLE_ToAssignVars_3);







#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_EnumFunctorDesc hlds__goal_form__hlds__goal_form__enum_functor_desc_goal_loop_or_throw_status_0_0 = {
  (MR_String) "can_loop_or_throw",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc hlds__goal_form__hlds__goal_form__enum_functor_desc_goal_loop_or_throw_status_0_1 = {
  (MR_String) "cannot_loop_or_throw",
  (MR_Integer) 1
};

static const MR_EnumFunctorDescPtr hlds__goal_form__hlds__goal_form__enum_value_ordered_goal_loop_or_throw_status_0[2] = {
  &hlds__goal_form__hlds__goal_form__enum_functor_desc_goal_loop_or_throw_status_0_0,
  &hlds__goal_form__hlds__goal_form__enum_functor_desc_goal_loop_or_throw_status_0_1
};

static const MR_EnumFunctorDescPtr hlds__goal_form__hlds__goal_form__enum_name_ordered_goal_loop_or_throw_status_0[2] = {
  &hlds__goal_form__hlds__goal_form__enum_functor_desc_goal_loop_or_throw_status_0_0,
  &hlds__goal_form__hlds__goal_form__enum_functor_desc_goal_loop_or_throw_status_0_1
};

static const MR_Integer hlds__goal_form__hlds__goal_form__functor_number_map_goal_loop_or_throw_status_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct hlds__goal_form__hlds__goal_form__type_ctor_info_goal_loop_or_throw_status_0 = {
  (MR_Integer) 0,
  (MR_Integer) 16,
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

static const MR_EnumFunctorDesc hlds__goal_form__hlds__goal_form__enum_functor_desc_goal_loop_status_0_0 = {
  (MR_String) "can_loop",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc hlds__goal_form__hlds__goal_form__enum_functor_desc_goal_loop_status_0_1 = {
  (MR_String) "cannot_loop",
  (MR_Integer) 1
};

static const MR_EnumFunctorDescPtr hlds__goal_form__hlds__goal_form__enum_value_ordered_goal_loop_status_0[2] = {
  &hlds__goal_form__hlds__goal_form__enum_functor_desc_goal_loop_status_0_0,
  &hlds__goal_form__hlds__goal_form__enum_functor_desc_goal_loop_status_0_1
};

static const MR_EnumFunctorDescPtr hlds__goal_form__hlds__goal_form__enum_name_ordered_goal_loop_status_0[2] = {
  &hlds__goal_form__hlds__goal_form__enum_functor_desc_goal_loop_status_0_0,
  &hlds__goal_form__hlds__goal_form__enum_functor_desc_goal_loop_status_0_1
};

static const MR_Integer hlds__goal_form__hlds__goal_form__functor_number_map_goal_loop_status_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct hlds__goal_form__hlds__goal_form__type_ctor_info_goal_loop_status_0 = {
  (MR_Integer) 0,
  (MR_Integer) 16,
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

static const MR_EnumFunctorDesc hlds__goal_form__hlds__goal_form__enum_functor_desc_goal_throw_status_0_0 = {
  (MR_String) "can_throw",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc hlds__goal_form__hlds__goal_form__enum_functor_desc_goal_throw_status_0_1 = {
  (MR_String) "cannot_throw",
  (MR_Integer) 1
};

static const MR_EnumFunctorDescPtr hlds__goal_form__hlds__goal_form__enum_value_ordered_goal_throw_status_0[2] = {
  &hlds__goal_form__hlds__goal_form__enum_functor_desc_goal_throw_status_0_0,
  &hlds__goal_form__hlds__goal_form__enum_functor_desc_goal_throw_status_0_1
};

static const MR_EnumFunctorDescPtr hlds__goal_form__hlds__goal_form__enum_name_ordered_goal_throw_status_0[2] = {
  &hlds__goal_form__hlds__goal_form__enum_functor_desc_goal_throw_status_0_0,
  &hlds__goal_form__hlds__goal_form__enum_functor_desc_goal_throw_status_0_1
};

static const MR_Integer hlds__goal_form__hlds__goal_form__functor_number_map_goal_throw_status_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct hlds__goal_form__hlds__goal_form__type_ctor_info_goal_throw_status_0 = {
  (MR_Integer) 0,
  (MR_Integer) 16,
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

static const MR_EnumFunctorDesc hlds__goal_form__hlds__goal_form__enum_functor_desc_has_subgoals_0_0 = {
  (MR_String) "has_subgoals",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc hlds__goal_form__hlds__goal_form__enum_functor_desc_has_subgoals_0_1 = {
  (MR_String) "does_not_have_subgoals",
  (MR_Integer) 1
};

static const MR_EnumFunctorDescPtr hlds__goal_form__hlds__goal_form__enum_value_ordered_has_subgoals_0[2] = {
  &hlds__goal_form__hlds__goal_form__enum_functor_desc_has_subgoals_0_0,
  &hlds__goal_form__hlds__goal_form__enum_functor_desc_has_subgoals_0_1
};

static const MR_EnumFunctorDescPtr hlds__goal_form__hlds__goal_form__enum_name_ordered_has_subgoals_0[2] = {
  &hlds__goal_form__hlds__goal_form__enum_functor_desc_has_subgoals_0_1,
  &hlds__goal_form__hlds__goal_form__enum_functor_desc_has_subgoals_0_0
};

static const MR_Integer hlds__goal_form__hlds__goal_form__functor_number_map_has_subgoals_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct hlds__goal_form__hlds__goal_form__type_ctor_info_has_subgoals_0 = {
  (MR_Integer) 0,
  (MR_Integer) 16,
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

static MR_bool MR_CALL 
hlds__goal_form____Unify____goal_loop_or_throw_status_0_0_10001(
  MR_Box hlds__goal_form__wrapper_arg_1,
  MR_Box hlds__goal_form__wrapper_arg_2)
{
  {
    MR_bool hlds__goal_form__succeeded;

    {
      hlds__goal_form__succeeded = hlds__goal_form____Unify____goal_loop_or_throw_status_0_0(((MR_Word) hlds__goal_form__wrapper_arg_1), ((MR_Word) hlds__goal_form__wrapper_arg_2));
    }
    return hlds__goal_form__succeeded;
  }
}

static void MR_CALL 
hlds__goal_form____Compare____goal_loop_or_throw_status_0_0_10001(
  MR_Box * hlds__goal_form__wrapper_arg_1,
  MR_Box hlds__goal_form__wrapper_arg_2,
  MR_Box hlds__goal_form__wrapper_arg_3)
{
  {
    MR_Word hlds__goal_form__conv0_HeadVar__1_1;

    {
      hlds__goal_form____Compare____goal_loop_or_throw_status_0_0(&hlds__goal_form__conv0_HeadVar__1_1, ((MR_Word) hlds__goal_form__wrapper_arg_2), ((MR_Word) hlds__goal_form__wrapper_arg_3));
    }
    *hlds__goal_form__wrapper_arg_1 = ((MR_Box) (hlds__goal_form__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__goal_form____Unify____goal_loop_status_0_0_10001(
  MR_Box hlds__goal_form__wrapper_arg_1,
  MR_Box hlds__goal_form__wrapper_arg_2)
{
  {
    MR_bool hlds__goal_form__succeeded;

    {
      hlds__goal_form__succeeded = hlds__goal_form____Unify____goal_loop_status_0_0(((MR_Word) hlds__goal_form__wrapper_arg_1), ((MR_Word) hlds__goal_form__wrapper_arg_2));
    }
    return hlds__goal_form__succeeded;
  }
}

static void MR_CALL 
hlds__goal_form____Compare____goal_loop_status_0_0_10001(
  MR_Box * hlds__goal_form__wrapper_arg_1,
  MR_Box hlds__goal_form__wrapper_arg_2,
  MR_Box hlds__goal_form__wrapper_arg_3)
{
  {
    MR_Word hlds__goal_form__conv0_HeadVar__1_1;

    {
      hlds__goal_form____Compare____goal_loop_status_0_0(&hlds__goal_form__conv0_HeadVar__1_1, ((MR_Word) hlds__goal_form__wrapper_arg_2), ((MR_Word) hlds__goal_form__wrapper_arg_3));
    }
    *hlds__goal_form__wrapper_arg_1 = ((MR_Box) (hlds__goal_form__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__goal_form____Unify____goal_throw_status_0_0_10001(
  MR_Box hlds__goal_form__wrapper_arg_1,
  MR_Box hlds__goal_form__wrapper_arg_2)
{
  {
    MR_bool hlds__goal_form__succeeded;

    {
      hlds__goal_form__succeeded = hlds__goal_form____Unify____goal_throw_status_0_0(((MR_Word) hlds__goal_form__wrapper_arg_1), ((MR_Word) hlds__goal_form__wrapper_arg_2));
    }
    return hlds__goal_form__succeeded;
  }
}

static void MR_CALL 
hlds__goal_form____Compare____goal_throw_status_0_0_10001(
  MR_Box * hlds__goal_form__wrapper_arg_1,
  MR_Box hlds__goal_form__wrapper_arg_2,
  MR_Box hlds__goal_form__wrapper_arg_3)
{
  {
    MR_Word hlds__goal_form__conv0_HeadVar__1_1;

    {
      hlds__goal_form____Compare____goal_throw_status_0_0(&hlds__goal_form__conv0_HeadVar__1_1, ((MR_Word) hlds__goal_form__wrapper_arg_2), ((MR_Word) hlds__goal_form__wrapper_arg_3));
    }
    *hlds__goal_form__wrapper_arg_1 = ((MR_Box) (hlds__goal_form__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__goal_form____Unify____has_subgoals_0_0_10001(
  MR_Box hlds__goal_form__wrapper_arg_1,
  MR_Box hlds__goal_form__wrapper_arg_2)
{
  {
    MR_bool hlds__goal_form__succeeded;

    {
      hlds__goal_form__succeeded = hlds__goal_form____Unify____has_subgoals_0_0(((MR_Word) hlds__goal_form__wrapper_arg_1), ((MR_Word) hlds__goal_form__wrapper_arg_2));
    }
    return hlds__goal_form__succeeded;
  }
}

static void MR_CALL 
hlds__goal_form____Compare____has_subgoals_0_0_10001(
  MR_Box * hlds__goal_form__wrapper_arg_1,
  MR_Box hlds__goal_form__wrapper_arg_2,
  MR_Box hlds__goal_form__wrapper_arg_3)
{
  {
    MR_Word hlds__goal_form__conv0_HeadVar__1_1;

    {
      hlds__goal_form____Compare____has_subgoals_0_0(&hlds__goal_form__conv0_HeadVar__1_1, ((MR_Word) hlds__goal_form__wrapper_arg_2), ((MR_Word) hlds__goal_form__wrapper_arg_3));
    }
    *hlds__goal_form__wrapper_arg_1 = ((MR_Box) (hlds__goal_form__conv0_HeadVar__1_1));
  }
}

static void MR_CALL 
hlds__goal_form__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_99_97_110_95_116_104_114_111_119_95_50_95_95_91_50_93_95_48_5_p_0(
  MR_Word hlds__goal_form__GoalExpr_6,
  MR_Word * hlds__goal_form__Result_8,
  MR_Word hlds__goal_form__STATE_VARIABLE_ModuleInfo_0_82,
  MR_Word * hlds__goal_form__STATE_VARIABLE_ModuleInfo_83)
{
  {
    MR_bool hlds__goal_form__succeeded;

    switch (MR_tag((MR_Word) hlds__goal_form__GoalExpr_6)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word hlds__goal_form__SubGoal_57 = (MR_Word) MR_body(((MR_Word) hlds__goal_form__GoalExpr_6), (MR_Integer) 0);

          {
            hlds__goal_form__goal_can_throw_4_p_0(hlds__goal_form__SubGoal_57, hlds__goal_form__Result_8, hlds__goal_form__STATE_VARIABLE_ModuleInfo_0_82, hlds__goal_form__STATE_VARIABLE_ModuleInfo_83);
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word hlds__goal_form__Uni_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__GoalExpr_6, (MR_Integer) 3)));
          MR_Word hlds__goal_form__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__GoalExpr_6, (MR_Integer) 0)));
          MR_Word hlds__goal_form__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__GoalExpr_6, (MR_Integer) 1)));
          MR_Word hlds__goal_form__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__GoalExpr_6, (MR_Integer) 2)));
          MR_Word hlds__goal_form__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__GoalExpr_6, (MR_Integer) 4)));

          switch (MR_tag((MR_Word) hlds__goal_form__Uni_35)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
            case (MR_Integer) 1:
            case (MR_Integer) 2:
              *hlds__goal_form__Result_8 = (MR_Integer) 1;
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__Uni_35, (MR_Integer) 0)))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  *hlds__goal_form__Result_8 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 1:
                  *hlds__goal_form__Result_8 = (MR_Integer) 0;
                  break;
              }
              break;
          }
          *hlds__goal_form__STATE_VARIABLE_ModuleInfo_83 = hlds__goal_form__STATE_VARIABLE_ModuleInfo_0_82;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word hlds__goal_form__PredId_16 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__GoalExpr_6, (MR_Integer) 0)));
          MR_Integer hlds__goal_form__ProcId_17 = ((MR_Integer) (MR_hl_field(MR_mktag(2), hlds__goal_form__GoalExpr_6, (MR_Integer) 1)));
          MR_Word hlds__goal_form__Status_22;
          MR_Word hlds__goal_form__V_92_92;
          MR_Word hlds__goal_form__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__GoalExpr_6, (MR_Integer) 2)));
          MR_Word hlds__goal_form__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__GoalExpr_6, (MR_Integer) 3)));
          MR_Word hlds__goal_form__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__GoalExpr_6, (MR_Integer) 4)));
          MR_Word hlds__goal_form__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__GoalExpr_6, (MR_Integer) 5)));

          {
            hlds__goal_form__V_92_92 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), hlds__goal_form__V_92_92, 0) = ((MR_Box) (hlds__goal_form__PredId_16));
            MR_hl_field(MR_mktag(0), hlds__goal_form__V_92_92, 1) = ((MR_Box) (hlds__goal_form__ProcId_17));
          }
          {
            transform_hlds__exception_analysis__lookup_exception_analysis_result_4_p_0(hlds__goal_form__V_92_92, &hlds__goal_form__Status_22, hlds__goal_form__STATE_VARIABLE_ModuleInfo_0_82, hlds__goal_form__STATE_VARIABLE_ModuleInfo_83);
          }
          switch (MR_tag((MR_Word) hlds__goal_form__Status_22)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (MR_unmkbody(hlds__goal_form__Status_22)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  *hlds__goal_form__Result_8 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 1:
                  *hlds__goal_form__Result_8 = (MR_Integer) 0;
                  break;
              }
              break;
            case (MR_Integer) 1:
              *hlds__goal_form__Result_8 = (MR_Integer) 0;
              break;
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_6, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              *hlds__goal_form__Result_8 = (MR_Integer) 0;
              *hlds__goal_form__STATE_VARIABLE_ModuleInfo_83 = hlds__goal_form__STATE_VARIABLE_ModuleInfo_0_82;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word hlds__goal_form__Attributes_61 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_6, (MR_Integer) 1)));
              MR_Word hlds__goal_form__ExceptionStatus_68;
              MR_Word hlds__goal_form__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_6, (MR_Integer) 2)));
              MR_Integer hlds__goal_form__V_63_63 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_6, (MR_Integer) 3)));
              MR_Word hlds__goal_form__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_6, (MR_Integer) 4)));
              MR_Word hlds__goal_form__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_6, (MR_Integer) 5)));
              MR_Word hlds__goal_form__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_6, (MR_Integer) 6)));
              MR_Word hlds__goal_form__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_6, (MR_Integer) 7)));

              {
                hlds__goal_form__ExceptionStatus_68 = parse_tree__prog_data_foreign__get_may_throw_exception_1_f_0(hlds__goal_form__Attributes_61);
              }
              switch (hlds__goal_form__ExceptionStatus_68) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  {
                    MR_Word hlds__goal_form__V_88_88;

                    {
                      hlds__goal_form__V_88_88 = parse_tree__prog_data_foreign__get_may_call_mercury_1_f_0(hlds__goal_form__Attributes_61);
                    }
                    hlds__goal_form__succeeded = (hlds__goal_form__V_88_88 == (MR_Integer) 1);
                  }
                  break;
                case (MR_Integer) 0:
                  hlds__goal_form__succeeded = MR_TRUE;
                  break;
              }
              if (hlds__goal_form__succeeded)
                *hlds__goal_form__Result_8 = (MR_Integer) 1;
              else
                *hlds__goal_form__Result_8 = (MR_Integer) 0;
              *hlds__goal_form__STATE_VARIABLE_ModuleInfo_83 = hlds__goal_form__STATE_VARIABLE_ModuleInfo_0_82;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word hlds__goal_form__Goals_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_6, (MR_Integer) 2)));
              MR_Word hlds__goal_form__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_6, (MR_Integer) 1)));

              {
                hlds__goal_form__goals_can_throw_4_p_0(hlds__goal_form__Goals_11, hlds__goal_form__Result_8, hlds__goal_form__STATE_VARIABLE_ModuleInfo_0_82, hlds__goal_form__STATE_VARIABLE_ModuleInfo_83);
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word hlds__goal_form__Goals_99 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_6, (MR_Integer) 1)));

              {
                hlds__goal_form__goals_can_throw_4_p_0(hlds__goal_form__Goals_99, hlds__goal_form__Result_8, hlds__goal_form__STATE_VARIABLE_ModuleInfo_0_82, hlds__goal_form__STATE_VARIABLE_ModuleInfo_83);
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word hlds__goal_form__Cases_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_6, (MR_Integer) 3)));
              MR_Word hlds__goal_form__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_6, (MR_Integer) 1)));
              MR_Word hlds__goal_form__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_6, (MR_Integer) 2)));

              {
                hlds__goal_form__cases_can_throw_4_p_0(hlds__goal_form__Cases_31, hlds__goal_form__Result_8, hlds__goal_form__STATE_VARIABLE_ModuleInfo_0_82, hlds__goal_form__STATE_VARIABLE_ModuleInfo_83);
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word hlds__goal_form__Reason_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_6, (MR_Integer) 1)));
              MR_Word hlds__goal_form__SubGoal_98 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_6, (MR_Integer) 2)));
              MR_Word hlds__goal_form__FGT_60;
              MR_Word hlds__goal_form__V_59_59;

              hlds__goal_form__succeeded = ((((MR_tag((MR_Word) hlds__goal_form__Reason_58)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__Reason_58, (MR_Integer) 0)))) == (MR_Integer) 5)));
              if (hlds__goal_form__succeeded)
                {
                  hlds__goal_form__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__Reason_58, (MR_Integer) 1)));
                  hlds__goal_form__FGT_60 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__Reason_58, (MR_Integer) 2)));
                  switch (hlds__goal_form__FGT_60) {
                    default:
                      hlds__goal_form__succeeded = MR_FALSE;
                      break;
                    case (MR_Integer) 1:
                      hlds__goal_form__succeeded = MR_TRUE;
                      break;
                    case (MR_Integer) 2:
                      hlds__goal_form__succeeded = MR_TRUE;
                      break;
                  }
                }
              if (hlds__goal_form__succeeded)
                {
                  *hlds__goal_form__Result_8 = (MR_Integer) 1;
                  *hlds__goal_form__STATE_VARIABLE_ModuleInfo_83 = hlds__goal_form__STATE_VARIABLE_ModuleInfo_0_82;
                }
              else
                {
                  hlds__goal_form__goal_can_throw_4_p_0(hlds__goal_form__SubGoal_98, hlds__goal_form__Result_8, hlds__goal_form__STATE_VARIABLE_ModuleInfo_0_82, hlds__goal_form__STATE_VARIABLE_ModuleInfo_83);
                }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word hlds__goal_form__CondGoal_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_6, (MR_Integer) 2)));
              MR_Word hlds__goal_form__ThenGoal_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_6, (MR_Integer) 3)));
              MR_Word hlds__goal_form__ElseGoal_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_6, (MR_Integer) 4)));
              MR_Word hlds__goal_form__V_94_94;
              MR_Word hlds__goal_form__V_95_95;
              MR_Word hlds__goal_form__Goals_100;
              MR_Word hlds__goal_form__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_6, (MR_Integer) 1)));

              {
                hlds__goal_form__V_95_95 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), hlds__goal_form__V_95_95, 0) = ((MR_Box) (hlds__goal_form__ElseGoal_15));
                MR_hl_field(MR_mktag(1), hlds__goal_form__V_95_95, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                hlds__goal_form__V_94_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), hlds__goal_form__V_94_94, 0) = ((MR_Box) (hlds__goal_form__ThenGoal_14));
                MR_hl_field(MR_mktag(1), hlds__goal_form__V_94_94, 1) = ((MR_Box) (hlds__goal_form__V_95_95));
              }
              {
                hlds__goal_form__Goals_100 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), hlds__goal_form__Goals_100, 0) = ((MR_Box) (hlds__goal_form__CondGoal_13));
                MR_hl_field(MR_mktag(1), hlds__goal_form__Goals_100, 1) = ((MR_Box) (hlds__goal_form__V_94_94));
              }
              {
                hlds__goal_form__goals_can_throw_4_p_0(hlds__goal_form__Goals_100, hlds__goal_form__Result_8, hlds__goal_form__STATE_VARIABLE_ModuleInfo_0_82, hlds__goal_form__STATE_VARIABLE_ModuleInfo_83);
              }
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word hlds__goal_form__ShortHand_69 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_6, (MR_Integer) 1)));

              switch (MR_tag((MR_Word) hlds__goal_form__ShortHand_69)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word hlds__goal_form__GoalA_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__ShortHand_69, (MR_Integer) 0)));
                    MR_Word hlds__goal_form__GoalB_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__ShortHand_69, (MR_Integer) 1)));
                    MR_Word hlds__goal_form__V_84_84;
                    MR_Word hlds__goal_form__V_86_86;

                    {
                      hlds__goal_form__V_86_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), hlds__goal_form__V_86_86, 0) = ((MR_Box) (hlds__goal_form__GoalB_71));
                      MR_hl_field(MR_mktag(1), hlds__goal_form__V_86_86, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    }
                    {
                      hlds__goal_form__V_84_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), hlds__goal_form__V_84_84, 0) = ((MR_Box) (hlds__goal_form__GoalA_70));
                      MR_hl_field(MR_mktag(1), hlds__goal_form__V_84_84, 1) = ((MR_Box) (hlds__goal_form__V_86_86));
                    }
                    {
                      hlds__goal_form__goals_can_throw_4_p_0(hlds__goal_form__V_84_84, hlds__goal_form__Result_8, hlds__goal_form__STATE_VARIABLE_ModuleInfo_0_82, hlds__goal_form__STATE_VARIABLE_ModuleInfo_83);
                    }
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    *hlds__goal_form__Result_8 = (MR_Integer) 0;
                    *hlds__goal_form__STATE_VARIABLE_ModuleInfo_83 = hlds__goal_form__STATE_VARIABLE_ModuleInfo_0_82;
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    *hlds__goal_form__Result_8 = (MR_Integer) 0;
                    *hlds__goal_form__STATE_VARIABLE_ModuleInfo_83 = hlds__goal_form__STATE_VARIABLE_ModuleInfo_0_82;
                  }
                  break;
              }
            }
            break;
        }
        break;
    }
  }
}

void MR_CALL 
hlds__goal_form____Compare____has_subgoals_0_0(
  MR_Word * hlds__goal_form__HeadVar__1_1,
  MR_Word hlds__goal_form__HeadVar__2_2,
  MR_Word hlds__goal_form__HeadVar__3_3)
{
  {
    MR_bool hlds__goal_form__succeeded;
    MR_Integer hlds__goal_form__Cast_HeadVar1_4 = (MR_Integer) hlds__goal_form__HeadVar__2_2;
    MR_Integer hlds__goal_form__Cast_HeadVar2_5 = (MR_Integer) hlds__goal_form__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(hlds__goal_form__HeadVar__1_1, hlds__goal_form__Cast_HeadVar1_4, hlds__goal_form__Cast_HeadVar2_5);
    }
  }
}

MR_bool MR_CALL 
hlds__goal_form____Unify____has_subgoals_0_0(
  MR_Word hlds__goal_form__HeadVar__2_1,
  MR_Word hlds__goal_form__HeadVar__2_2)
{
  {
    MR_bool hlds__goal_form__succeeded = (hlds__goal_form__HeadVar__2_1 == hlds__goal_form__HeadVar__2_2);

    return hlds__goal_form__succeeded;
  }
}

void MR_CALL 
hlds__goal_form____Compare____goal_throw_status_0_0(
  MR_Word * hlds__goal_form__HeadVar__1_1,
  MR_Word hlds__goal_form__HeadVar__2_2,
  MR_Word hlds__goal_form__HeadVar__3_3)
{
  {
    MR_bool hlds__goal_form__succeeded;
    MR_Integer hlds__goal_form__Cast_HeadVar1_4 = (MR_Integer) hlds__goal_form__HeadVar__2_2;
    MR_Integer hlds__goal_form__Cast_HeadVar2_5 = (MR_Integer) hlds__goal_form__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(hlds__goal_form__HeadVar__1_1, hlds__goal_form__Cast_HeadVar1_4, hlds__goal_form__Cast_HeadVar2_5);
    }
  }
}

MR_bool MR_CALL 
hlds__goal_form____Unify____goal_throw_status_0_0(
  MR_Word hlds__goal_form__HeadVar__2_1,
  MR_Word hlds__goal_form__HeadVar__2_2)
{
  {
    MR_bool hlds__goal_form__succeeded = (hlds__goal_form__HeadVar__2_1 == hlds__goal_form__HeadVar__2_2);

    return hlds__goal_form__succeeded;
  }
}

void MR_CALL 
hlds__goal_form____Compare____goal_loop_status_0_0(
  MR_Word * hlds__goal_form__HeadVar__1_1,
  MR_Word hlds__goal_form__HeadVar__2_2,
  MR_Word hlds__goal_form__HeadVar__3_3)
{
  {
    MR_bool hlds__goal_form__succeeded;
    MR_Integer hlds__goal_form__Cast_HeadVar1_4 = (MR_Integer) hlds__goal_form__HeadVar__2_2;
    MR_Integer hlds__goal_form__Cast_HeadVar2_5 = (MR_Integer) hlds__goal_form__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(hlds__goal_form__HeadVar__1_1, hlds__goal_form__Cast_HeadVar1_4, hlds__goal_form__Cast_HeadVar2_5);
    }
  }
}

MR_bool MR_CALL 
hlds__goal_form____Unify____goal_loop_status_0_0(
  MR_Word hlds__goal_form__HeadVar__2_1,
  MR_Word hlds__goal_form__HeadVar__2_2)
{
  {
    MR_bool hlds__goal_form__succeeded = (hlds__goal_form__HeadVar__2_1 == hlds__goal_form__HeadVar__2_2);

    return hlds__goal_form__succeeded;
  }
}

void MR_CALL 
hlds__goal_form____Compare____goal_loop_or_throw_status_0_0(
  MR_Word * hlds__goal_form__HeadVar__1_1,
  MR_Word hlds__goal_form__HeadVar__2_2,
  MR_Word hlds__goal_form__HeadVar__3_3)
{
  {
    MR_bool hlds__goal_form__succeeded;
    MR_Integer hlds__goal_form__Cast_HeadVar1_4 = (MR_Integer) hlds__goal_form__HeadVar__2_2;
    MR_Integer hlds__goal_form__Cast_HeadVar2_5 = (MR_Integer) hlds__goal_form__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(hlds__goal_form__HeadVar__1_1, hlds__goal_form__Cast_HeadVar1_4, hlds__goal_form__Cast_HeadVar2_5);
    }
  }
}

MR_bool MR_CALL 
hlds__goal_form____Unify____goal_loop_or_throw_status_0_0(
  MR_Word hlds__goal_form__HeadVar__2_1,
  MR_Word hlds__goal_form__HeadVar__2_2)
{
  {
    MR_bool hlds__goal_form__succeeded = (hlds__goal_form__HeadVar__2_1 == hlds__goal_form__HeadVar__2_2);

    return hlds__goal_form__succeeded;
  }
}

static MR_Word MR_CALL 
hlds__goal_form__case_list_has_foreign_1_f_0(
  MR_Word hlds__goal_form__HeadVar__1_1)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool hlds__goal_form__succeeded;
        MR_Word hlds__goal_form__HeadVar__2_2;

        if ((hlds__goal_form__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          hlds__goal_form__HeadVar__2_2 = (MR_Integer) 0;
        else
          {
            MR_Word hlds__goal_form__Case_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word hlds__goal_form__Cases_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word hlds__goal_form__Goal_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Case_3, (MR_Integer) 2)));
            MR_Word hlds__goal_form__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Case_3, (MR_Integer) 0)));
            MR_Word hlds__goal_form__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Case_3, (MR_Integer) 1)));
            MR_Word hlds__goal_form__V_9_9;

            {
              hlds__goal_form__V_9_9 = hlds__goal_form__goal_has_foreign_1_f_0(hlds__goal_form__Goal_8);
            }
            hlds__goal_form__succeeded = (hlds__goal_form__V_9_9 == (MR_Integer) 1);
            if (hlds__goal_form__succeeded)
              hlds__goal_form__HeadVar__2_2 = (MR_Integer) 1;
            else
              {
                /* direct tailcall eliminated */
                {
                  MR_Word hlds__goal_form__HeadVar__1__tmp_copy_1 = hlds__goal_form__Cases_4;

                  hlds__goal_form__HeadVar__1_1 = hlds__goal_form__HeadVar__1__tmp_copy_1;
                }
                continue;
              }
          }
        return hlds__goal_form__HeadVar__2_2;
      }
      break;
    }
}

static MR_Word MR_CALL 
hlds__goal_form__goal_list_has_foreign_1_f_0(
  MR_Word hlds__goal_form__HeadVar__1_1)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool hlds__goal_form__succeeded;
        MR_Word hlds__goal_form__HeadVar__2_2;

        if ((hlds__goal_form__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          hlds__goal_form__HeadVar__2_2 = (MR_Integer) 0;
        else
          {
            MR_Word hlds__goal_form__Goal_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word hlds__goal_form__Goals_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word hlds__goal_form__V_6_6;

            {
              hlds__goal_form__V_6_6 = hlds__goal_form__goal_has_foreign_1_f_0(hlds__goal_form__Goal_3);
            }
            hlds__goal_form__succeeded = (hlds__goal_form__V_6_6 == (MR_Integer) 1);
            if (hlds__goal_form__succeeded)
              hlds__goal_form__HeadVar__2_2 = (MR_Integer) 1;
            else
              {
                /* direct tailcall eliminated */
                {
                  MR_Word hlds__goal_form__HeadVar__1__tmp_copy_1 = hlds__goal_form__Goals_4;

                  hlds__goal_form__HeadVar__1_1 = hlds__goal_form__HeadVar__1__tmp_copy_1;
                }
                continue;
              }
          }
        return hlds__goal_form__HeadVar__2_2;
      }
      break;
    }
}

static void MR_CALL 
hlds__goal_form__count_recursive_calls_cases_5_p_0(
  MR_Word hlds__goal_form__HeadVar__1_1,
  MR_Word hlds__goal_form__PredId_2,
  MR_Integer hlds__goal_form__ProcId_3,
  MR_Integer * hlds__goal_form__Min_4,
  MR_Integer * hlds__goal_form__Max_5)
{
  {
    MR_bool hlds__goal_form__succeeded;

    if ((hlds__goal_form__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "hlds.goal_form", (MR_String) "predicate \140hlds.goal_form.count_recursive_calls_cases\'/5", (MR_String) "[]");
          return;
        }
      }
    else
      {
        MR_Word hlds__goal_form__Goal_15;
        MR_Word hlds__goal_form__Cases_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word hlds__goal_form__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word hlds__goal_form__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__V_27_27, (MR_Integer) 0)));
        MR_Word hlds__goal_form__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__V_27_27, (MR_Integer) 1)));

        hlds__goal_form__Goal_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__V_27_27, (MR_Integer) 2)));
        if ((hlds__goal_form__Cases_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            hlds__goal_form__count_recursive_calls_5_p_0(hlds__goal_form__Goal_15, hlds__goal_form__PredId_2, hlds__goal_form__ProcId_3, hlds__goal_form__Min_4, hlds__goal_form__Max_5);
          }
        else
          {
            MR_Integer hlds__goal_form__Min0_23;
            MR_Integer hlds__goal_form__Max0_24;
            MR_Integer hlds__goal_form__Min1_25;
            MR_Integer hlds__goal_form__Max1_26;
            MR_Word hlds__goal_form__Goal_37;
            MR_Word hlds__goal_form__Cases_38;
            MR_Word hlds__goal_form__V_49_49;
            MR_Word hlds__goal_form__V_35_35;
            MR_Word hlds__goal_form__V_36_36;

            {
              hlds__goal_form__count_recursive_calls_5_p_0(hlds__goal_form__Goal_15, hlds__goal_form__PredId_2, hlds__goal_form__ProcId_3, &hlds__goal_form__Min0_23, &hlds__goal_form__Max0_24);
            }
            hlds__goal_form__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__Cases_16, (MR_Integer) 0)));
            hlds__goal_form__Cases_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__Cases_16, (MR_Integer) 1)));
            hlds__goal_form__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__V_49_49, (MR_Integer) 0)));
            hlds__goal_form__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__V_49_49, (MR_Integer) 1)));
            hlds__goal_form__Goal_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__V_49_49, (MR_Integer) 2)));
            if ((hlds__goal_form__Cases_38 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                hlds__goal_form__count_recursive_calls_5_p_0(hlds__goal_form__Goal_37, hlds__goal_form__PredId_2, hlds__goal_form__ProcId_3, &hlds__goal_form__Min1_25, &hlds__goal_form__Max1_26);
              }
            else
              {
                MR_Integer hlds__goal_form__Min0_45;
                MR_Integer hlds__goal_form__Max0_46;
                MR_Integer hlds__goal_form__Min1_47;
                MR_Integer hlds__goal_form__Max1_48;

                {
                  hlds__goal_form__count_recursive_calls_5_p_0(hlds__goal_form__Goal_37, hlds__goal_form__PredId_2, hlds__goal_form__ProcId_3, &hlds__goal_form__Min0_45, &hlds__goal_form__Max0_46);
                }
                {
                  hlds__goal_form__count_recursive_calls_cases_5_p_0(hlds__goal_form__Cases_38, hlds__goal_form__PredId_2, hlds__goal_form__ProcId_3, &hlds__goal_form__Min1_47, &hlds__goal_form__Max1_48);
                }
                {
                  mercury__int__min_3_p_0(hlds__goal_form__Min0_45, hlds__goal_form__Min1_47, &hlds__goal_form__Min1_25);
                }
                {
                  mercury__int__max_3_p_0(hlds__goal_form__Max0_46, hlds__goal_form__Max1_48, &hlds__goal_form__Max1_26);
                }
              }
            {
              mercury__int__min_3_p_0(hlds__goal_form__Min0_23, hlds__goal_form__Min1_25, hlds__goal_form__Min_4);
            }
            {
              mercury__int__max_3_p_0(hlds__goal_form__Max0_24, hlds__goal_form__Max1_26, hlds__goal_form__Max_5);
            }
          }
      }
  }
}

static void MR_CALL 
hlds__goal_form__count_recursive_calls_disj_5_p_0(
  MR_Word hlds__goal_form__HeadVar__1_1,
  MR_Word hlds__goal_form__PredId_2,
  MR_Integer hlds__goal_form__ProcId_3,
  MR_Integer * hlds__goal_form__HeadVar__4_4,
  MR_Integer * hlds__goal_form__HeadVar__5_5)
{
  {
    MR_bool hlds__goal_form__succeeded;

    if ((hlds__goal_form__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *hlds__goal_form__HeadVar__4_4 = (MR_Integer) 0;
        *hlds__goal_form__HeadVar__5_5 = (MR_Integer) 0;
      }
    else
      {
        MR_Word hlds__goal_form__Goal_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word hlds__goal_form__Goals_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__HeadVar__1_1, (MR_Integer) 1)));

        if ((hlds__goal_form__Goals_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            hlds__goal_form__count_recursive_calls_5_p_0(hlds__goal_form__Goal_8, hlds__goal_form__PredId_2, hlds__goal_form__ProcId_3, hlds__goal_form__HeadVar__4_4, hlds__goal_form__HeadVar__5_5);
          }
        else
          {
            MR_Integer hlds__goal_form__Min0_16;
            MR_Integer hlds__goal_form__Max0_17;
            MR_Integer hlds__goal_form__Min1_18;
            MR_Integer hlds__goal_form__Max1_19;
            MR_Word hlds__goal_form__Goal_22;
            MR_Word hlds__goal_form__Goals_23;

            {
              hlds__goal_form__count_recursive_calls_5_p_0(hlds__goal_form__Goal_8, hlds__goal_form__PredId_2, hlds__goal_form__ProcId_3, &hlds__goal_form__Min0_16, &hlds__goal_form__Max0_17);
            }
            hlds__goal_form__Goal_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__Goals_9, (MR_Integer) 0)));
            hlds__goal_form__Goals_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__Goals_9, (MR_Integer) 1)));
            if ((hlds__goal_form__Goals_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                hlds__goal_form__count_recursive_calls_5_p_0(hlds__goal_form__Goal_22, hlds__goal_form__PredId_2, hlds__goal_form__ProcId_3, &hlds__goal_form__Min1_18, &hlds__goal_form__Max1_19);
              }
            else
              {
                MR_Integer hlds__goal_form__Min0_30;
                MR_Integer hlds__goal_form__Max0_31;
                MR_Integer hlds__goal_form__Min1_32;
                MR_Integer hlds__goal_form__Max1_33;

                {
                  hlds__goal_form__count_recursive_calls_5_p_0(hlds__goal_form__Goal_22, hlds__goal_form__PredId_2, hlds__goal_form__ProcId_3, &hlds__goal_form__Min0_30, &hlds__goal_form__Max0_31);
                }
                {
                  hlds__goal_form__count_recursive_calls_disj_5_p_0(hlds__goal_form__Goals_23, hlds__goal_form__PredId_2, hlds__goal_form__ProcId_3, &hlds__goal_form__Min1_32, &hlds__goal_form__Max1_33);
                }
                {
                  mercury__int__min_3_p_0(hlds__goal_form__Min0_30, hlds__goal_form__Min1_32, &hlds__goal_form__Min1_18);
                }
                {
                  mercury__int__max_3_p_0(hlds__goal_form__Max0_31, hlds__goal_form__Max1_33, &hlds__goal_form__Max1_19);
                }
              }
            {
              mercury__int__min_3_p_0(hlds__goal_form__Min0_16, hlds__goal_form__Min1_18, hlds__goal_form__HeadVar__4_4);
            }
            {
              mercury__int__max_3_p_0(hlds__goal_form__Max0_17, hlds__goal_form__Max1_19, hlds__goal_form__HeadVar__5_5);
            }
          }
      }
  }
}

static void MR_CALL 
hlds__goal_form__count_recursive_calls_conj_7_p_0(
  MR_Word hlds__goal_form__HeadVar__1_1,
  MR_Word hlds__goal_form__PredId_2,
  MR_Integer hlds__goal_form__ProcId_3,
  MR_Integer hlds__goal_form__HeadVar__4_4,
  MR_Integer hlds__goal_form__HeadVar__5_5,
  MR_Integer * hlds__goal_form__Min_6,
  MR_Integer * hlds__goal_form__Max_7)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool hlds__goal_form__succeeded;

        if ((hlds__goal_form__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *hlds__goal_form__Min_6 = hlds__goal_form__HeadVar__4_4;
            *hlds__goal_form__Max_7 = hlds__goal_form__HeadVar__5_5;
          }
        else
          {
            MR_Word hlds__goal_form__Goal_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word hlds__goal_form__Goals_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__HeadVar__1_1, (MR_Integer) 1)));
            MR_Integer hlds__goal_form__Min1_20;
            MR_Integer hlds__goal_form__Max1_21;
            MR_Integer hlds__goal_form__Min2_22;
            MR_Integer hlds__goal_form__Max2_23;

            {
              hlds__goal_form__count_recursive_calls_5_p_0(hlds__goal_form__Goal_12, hlds__goal_form__PredId_2, hlds__goal_form__ProcId_3, &hlds__goal_form__Min1_20, &hlds__goal_form__Max1_21);
            }
            hlds__goal_form__Min2_22 = (hlds__goal_form__HeadVar__4_4 + hlds__goal_form__Min1_20);
            hlds__goal_form__Max2_23 = (hlds__goal_form__HeadVar__5_5 + hlds__goal_form__Max1_21);
            /* direct tailcall eliminated */
            {
              MR_Word hlds__goal_form__HeadVar__1__tmp_copy_1 = hlds__goal_form__Goals_13;
              MR_Integer hlds__goal_form__HeadVar__4__tmp_copy_4 = hlds__goal_form__Min2_22;
              MR_Integer hlds__goal_form__HeadVar__5__tmp_copy_5 = hlds__goal_form__Max2_23;

              hlds__goal_form__HeadVar__5_5 = hlds__goal_form__HeadVar__5__tmp_copy_5;
              hlds__goal_form__HeadVar__4_4 = hlds__goal_form__HeadVar__4__tmp_copy_4;
              hlds__goal_form__HeadVar__1_1 = hlds__goal_form__HeadVar__1__tmp_copy_1;
            }
            continue;
          }
      }
      break;
    }
}

static MR_bool MR_CALL 
hlds__goal_form__cannot_fail_before_stack_flush_conj_1_p_0(
  MR_Word hlds__goal_form__HeadVar__1_1)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool hlds__goal_form__succeeded;

        if ((hlds__goal_form__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          hlds__goal_form__succeeded = MR_TRUE;
        else
          {
            MR_Word hlds__goal_form__Goal_2 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word hlds__goal_form__Goals_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word hlds__goal_form__GoalExpr_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Goal_2, (MR_Integer) 0)));
            MR_Word hlds__goal_form__GoalInfo_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Goal_2, (MR_Integer) 1)));

            if (((MR_tag((MR_Word) hlds__goal_form__GoalExpr_4)) == (MR_mktag((MR_Integer) 2))))
              {
                MR_Word hlds__goal_form__BuiltinState_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__GoalExpr_4, (MR_Integer) 3)));
                MR_Word hlds__goal_form__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__GoalExpr_4, (MR_Integer) 0)));
                MR_Integer hlds__goal_form__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(2), hlds__goal_form__GoalExpr_4, (MR_Integer) 1)));
                MR_Word hlds__goal_form__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__GoalExpr_4, (MR_Integer) 2)));
                MR_Word hlds__goal_form__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__GoalExpr_4, (MR_Integer) 4)));
                MR_Word hlds__goal_form__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__GoalExpr_4, (MR_Integer) 5)));

                hlds__goal_form__succeeded = (hlds__goal_form__BuiltinState_9 == (MR_Integer) 0);
                hlds__goal_form__succeeded = !(hlds__goal_form__succeeded);
              }
            else
            if (((((MR_tag((MR_Word) hlds__goal_form__GoalExpr_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_4, (MR_Integer) 0)))) == (MR_Integer) 0))))
              hlds__goal_form__succeeded = MR_TRUE;
            else
              hlds__goal_form__succeeded = MR_FALSE;
            if (hlds__goal_form__succeeded)
              hlds__goal_form__succeeded = MR_TRUE;
            else
              {
                MR_Word hlds__goal_form__Detism_17;
                MR_Word hlds__goal_form__V_20_20;
                MR_Word hlds__goal_form__V_18_18;

                {
                  hlds__goal_form__Detism_17 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(hlds__goal_form__GoalInfo_5);
                }
                {
                  parse_tree__prog_data__determinism_components_3_p_0(hlds__goal_form__Detism_17, &hlds__goal_form__V_20_20, &hlds__goal_form__V_18_18);
                }
                hlds__goal_form__succeeded = ((MR_Integer) 1 == hlds__goal_form__V_20_20);
                if (hlds__goal_form__succeeded)
                  {
                    /* direct tailcall eliminated */
                    {
                      MR_Word hlds__goal_form__HeadVar__1__tmp_copy_1 = hlds__goal_form__Goals_3;

                      hlds__goal_form__HeadVar__1_1 = hlds__goal_form__HeadVar__1__tmp_copy_1;
                    }
                    continue;
                  }
              }
          }
        return hlds__goal_form__succeeded;
      }
      break;
    }
}

static MR_bool MR_CALL 
hlds__goal_form__cannot_stack_flush_cases_1_p_0(
  MR_Word hlds__goal_form__HeadVar__1_1)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool hlds__goal_form__succeeded;

        if ((hlds__goal_form__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          hlds__goal_form__succeeded = MR_TRUE;
        else
          {
            MR_Word hlds__goal_form__Goal_4;
            MR_Word hlds__goal_form__Cases_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word hlds__goal_form__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word hlds__goal_form__GoalExpr_7;
            MR_Word hlds__goal_form__V_2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__V_6_6, (MR_Integer) 0)));
            MR_Word hlds__goal_form__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__V_6_6, (MR_Integer) 1)));
            MR_Word hlds__goal_form__V_8_8;

            hlds__goal_form__Goal_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__V_6_6, (MR_Integer) 2)));
            hlds__goal_form__GoalExpr_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Goal_4, (MR_Integer) 0)));
            hlds__goal_form__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Goal_4, (MR_Integer) 1)));
            {
              hlds__goal_form__succeeded = hlds__goal_form__cannot_stack_flush_2_1_p_0(hlds__goal_form__GoalExpr_7);
            }
            if (hlds__goal_form__succeeded)
              {
                /* direct tailcall eliminated */
                {
                  MR_Word hlds__goal_form__HeadVar__1__tmp_copy_1 = hlds__goal_form__Cases_5;

                  hlds__goal_form__HeadVar__1_1 = hlds__goal_form__HeadVar__1__tmp_copy_1;
                }
                continue;
              }
          }
        return hlds__goal_form__succeeded;
      }
      break;
    }
}

static MR_bool MR_CALL 
hlds__goal_form__cannot_stack_flush_goals_1_p_0(
  MR_Word hlds__goal_form__HeadVar__1_1)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool hlds__goal_form__succeeded;

        if ((hlds__goal_form__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          hlds__goal_form__succeeded = MR_TRUE;
        else
          {
            MR_Word hlds__goal_form__Goal_2 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word hlds__goal_form__Goals_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word hlds__goal_form__GoalExpr_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Goal_2, (MR_Integer) 0)));
            MR_Word hlds__goal_form__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Goal_2, (MR_Integer) 1)));

            {
              hlds__goal_form__succeeded = hlds__goal_form__cannot_stack_flush_2_1_p_0(hlds__goal_form__GoalExpr_4);
            }
            if (hlds__goal_form__succeeded)
              {
                /* direct tailcall eliminated */
                {
                  MR_Word hlds__goal_form__HeadVar__1__tmp_copy_1 = hlds__goal_form__Goals_3;

                  hlds__goal_form__HeadVar__1_1 = hlds__goal_form__HeadVar__1__tmp_copy_1;
                }
                continue;
              }
          }
        return hlds__goal_form__succeeded;
      }
      break;
    }
}

static MR_bool MR_CALL 
hlds__goal_form__cannot_stack_flush_2_1_p_0(
  MR_Word hlds__goal_form__HeadVar__1_1)
{
  {
    MR_bool hlds__goal_form__succeeded;

    switch (MR_tag((MR_Word) hlds__goal_form__HeadVar__1_1)) {
      default:
        hlds__goal_form__succeeded = MR_FALSE;
        break;
      case (MR_Integer) 0:
        {
          MR_Word hlds__goal_form__Unify_24;
          MR_Word hlds__goal_form__V_30_30 = (MR_Word) MR_body(((MR_Word) hlds__goal_form__HeadVar__1_1), (MR_Integer) 0);
          MR_Word hlds__goal_form__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__V_30_30, (MR_Integer) 0)));
          MR_Word hlds__goal_form__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__V_30_30, (MR_Integer) 1)));
          MR_Word hlds__goal_form__V_21_21;
          MR_Word hlds__goal_form__V_22_22;
          MR_Word hlds__goal_form__V_23_23;
          MR_Word hlds__goal_form__V_25_25;
          MR_Word hlds__goal_form__V_27_27;
          MR_Word hlds__goal_form__V_28_28;
          MR_Word hlds__goal_form__V_29_29;

          hlds__goal_form__succeeded = ((MR_tag((MR_Word) hlds__goal_form__V_31_31)) == (MR_mktag((MR_Integer) 1)));
          if (hlds__goal_form__succeeded)
            {
              hlds__goal_form__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__V_31_31, (MR_Integer) 0)));
              hlds__goal_form__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__V_31_31, (MR_Integer) 1)));
              hlds__goal_form__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__V_31_31, (MR_Integer) 2)));
              hlds__goal_form__Unify_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__V_31_31, (MR_Integer) 3)));
              hlds__goal_form__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__V_31_31, (MR_Integer) 4)));
              hlds__goal_form__succeeded = ((((MR_tag((MR_Word) hlds__goal_form__Unify_24)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__Unify_24, (MR_Integer) 0)))) == (MR_Integer) 1)));
              if (hlds__goal_form__succeeded)
                {
                  hlds__goal_form__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__Unify_24, (MR_Integer) 1)));
                  hlds__goal_form__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__Unify_24, (MR_Integer) 2)));
                  hlds__goal_form__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__Unify_24, (MR_Integer) 3)));
                }
              hlds__goal_form__succeeded = !(hlds__goal_form__succeeded);
            }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word hlds__goal_form__Unify_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__HeadVar__1_1, (MR_Integer) 3)));
          MR_Word hlds__goal_form__V_2_2 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__HeadVar__1_1, (MR_Integer) 0)));
          MR_Word hlds__goal_form__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__HeadVar__1_1, (MR_Integer) 1)));
          MR_Word hlds__goal_form__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__HeadVar__1_1, (MR_Integer) 2)));
          MR_Word hlds__goal_form__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__HeadVar__1_1, (MR_Integer) 4)));
          MR_Word hlds__goal_form__V_7_7;
          MR_Word hlds__goal_form__V_8_8;
          MR_Word hlds__goal_form__V_9_9;

          hlds__goal_form__succeeded = ((((MR_tag((MR_Word) hlds__goal_form__Unify_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__Unify_5, (MR_Integer) 0)))) == (MR_Integer) 1)));
          if (hlds__goal_form__succeeded)
            {
              hlds__goal_form__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__Unify_5, (MR_Integer) 1)));
              hlds__goal_form__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__Unify_5, (MR_Integer) 2)));
              hlds__goal_form__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__Unify_5, (MR_Integer) 3)));
            }
          hlds__goal_form__succeeded = !(hlds__goal_form__succeeded);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word hlds__goal_form__BuiltinState_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__HeadVar__1_1, (MR_Integer) 3)));
          MR_Word hlds__goal_form__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__HeadVar__1_1, (MR_Integer) 0)));
          MR_Integer hlds__goal_form__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(2), hlds__goal_form__HeadVar__1_1, (MR_Integer) 1)));
          MR_Word hlds__goal_form__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__HeadVar__1_1, (MR_Integer) 2)));
          MR_Word hlds__goal_form__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__HeadVar__1_1, (MR_Integer) 4)));
          MR_Word hlds__goal_form__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__HeadVar__1_1, (MR_Integer) 5)));

          hlds__goal_form__succeeded = (hlds__goal_form__BuiltinState_13 == (MR_Integer) 0);
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__HeadVar__1_1, (MR_Integer) 0)))) {
          default:
            hlds__goal_form__succeeded = MR_FALSE;
            break;
          case (MR_Integer) 2:
            {
              MR_Word hlds__goal_form__ConjType_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__HeadVar__1_1, (MR_Integer) 1)));
              MR_Word hlds__goal_form__Goals_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__HeadVar__1_1, (MR_Integer) 2)));

              hlds__goal_form__succeeded = (hlds__goal_form__ConjType_16 == (MR_Integer) 0);
              if (hlds__goal_form__succeeded)
                {
                  hlds__goal_form__succeeded = hlds__goal_form__cannot_stack_flush_goals_1_p_0(hlds__goal_form__Goals_17);
                }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word hlds__goal_form__Cases_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__HeadVar__1_1, (MR_Integer) 3)));
              MR_Word hlds__goal_form__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__HeadVar__1_1, (MR_Integer) 1)));
              MR_Word hlds__goal_form__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__HeadVar__1_1, (MR_Integer) 2)));

              {
                hlds__goal_form__succeeded = hlds__goal_form__cannot_stack_flush_cases_1_p_0(hlds__goal_form__Cases_20);
              }
            }
            break;
        }
        break;
    }
    return hlds__goal_form__succeeded;
  }
}

static void MR_CALL 
hlds__goal_form__cases_may_allocate_heap_2_p_0(
  MR_Word hlds__goal_form__HeadVar__1_1,
  MR_Word * hlds__goal_form__HeadVar__2_2)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool hlds__goal_form__succeeded;

        if ((hlds__goal_form__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *hlds__goal_form__HeadVar__2_2 = (MR_Integer) 0;
        else
          {
            MR_Word hlds__goal_form__Goal_5;
            MR_Word hlds__goal_form__Cases_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word hlds__goal_form__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word hlds__goal_form__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__V_8_8, (MR_Integer) 0)));
            MR_Word hlds__goal_form__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__V_8_8, (MR_Integer) 1)));
            MR_Word hlds__goal_form__V_10_10;
            MR_Word hlds__goal_form__GoalExpr_12;
            MR_Word hlds__goal_form___GoalInfo_13;

            hlds__goal_form__Goal_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__V_8_8, (MR_Integer) 2)));
            hlds__goal_form__GoalExpr_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Goal_5, (MR_Integer) 0)));
            hlds__goal_form___GoalInfo_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Goal_5, (MR_Integer) 1)));
            {
              hlds__goal_form__goal_may_allocate_heap_2_2_p_0(hlds__goal_form__GoalExpr_12, &hlds__goal_form__V_10_10);
            }
            hlds__goal_form__succeeded = ((MR_Integer) 1 == hlds__goal_form__V_10_10);
            if (hlds__goal_form__succeeded)
              *hlds__goal_form__HeadVar__2_2 = (MR_Integer) 1;
            else
              {
                /* direct tailcall eliminated */
                {
                  MR_Word hlds__goal_form__HeadVar__1__tmp_copy_1 = hlds__goal_form__Cases_6;

                  hlds__goal_form__HeadVar__1_1 = hlds__goal_form__HeadVar__1__tmp_copy_1;
                }
                continue;
              }
          }
      }
      break;
    }
}

static void MR_CALL 
hlds__goal_form__goal_list_may_allocate_heap_2_p_0(
  MR_Word hlds__goal_form__HeadVar__1_1,
  MR_Word * hlds__goal_form__HeadVar__2_2)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool hlds__goal_form__succeeded;

        if ((hlds__goal_form__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *hlds__goal_form__HeadVar__2_2 = (MR_Integer) 0;
        else
          {
            MR_Word hlds__goal_form__Goal_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word hlds__goal_form__Goals_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word hlds__goal_form__V_7_7;
            MR_Word hlds__goal_form__GoalExpr_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Goal_3, (MR_Integer) 0)));
            MR_Word hlds__goal_form___GoalInfo_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Goal_3, (MR_Integer) 1)));

            {
              hlds__goal_form__goal_may_allocate_heap_2_2_p_0(hlds__goal_form__GoalExpr_9, &hlds__goal_form__V_7_7);
            }
            hlds__goal_form__succeeded = ((MR_Integer) 1 == hlds__goal_form__V_7_7);
            if (hlds__goal_form__succeeded)
              *hlds__goal_form__HeadVar__2_2 = (MR_Integer) 1;
            else
              {
                /* direct tailcall eliminated */
                {
                  MR_Word hlds__goal_form__HeadVar__1__tmp_copy_1 = hlds__goal_form__Goals_4;

                  hlds__goal_form__HeadVar__1_1 = hlds__goal_form__HeadVar__1__tmp_copy_1;
                }
                continue;
              }
          }
      }
      break;
    }
}

static void MR_CALL 
hlds__goal_form__goal_may_allocate_heap_2_2_p_0(
  MR_Word hlds__goal_form__GoalExpr_3,
  MR_Word * hlds__goal_form__May_4)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool hlds__goal_form__succeeded;

        switch (MR_tag((MR_Word) hlds__goal_form__GoalExpr_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word hlds__goal_form__SubGoal_46 = (MR_Word) MR_body(((MR_Word) hlds__goal_form__GoalExpr_3), (MR_Integer) 0);
              MR_Word hlds__goal_form__GoalExpr_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__SubGoal_46, (MR_Integer) 0)));
              MR_Word hlds__goal_form___GoalInfo_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__SubGoal_46, (MR_Integer) 1)));

              /* direct tailcall eliminated */
              {
                MR_Word hlds__goal_form__GoalExpr__tmp_copy_3 = hlds__goal_form__GoalExpr_81;

                hlds__goal_form__GoalExpr_3 = hlds__goal_form__GoalExpr__tmp_copy_3;
              }
              continue;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word hlds__goal_form__Unification_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__GoalExpr_3, (MR_Integer) 3)));
              MR_Word hlds__goal_form__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__GoalExpr_3, (MR_Integer) 0)));
              MR_Word hlds__goal_form__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__GoalExpr_3, (MR_Integer) 1)));
              MR_Word hlds__goal_form__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__GoalExpr_3, (MR_Integer) 2)));
              MR_Word hlds__goal_form__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__GoalExpr_3, (MR_Integer) 4)));
              MR_Word hlds__goal_form__Args_12;
              MR_Word hlds__goal_form__V_10_10;
              MR_Word hlds__goal_form__V_11_11;
              MR_Word hlds__goal_form__V_13_13;
              MR_Word hlds__goal_form__V_14_14;
              MR_Word hlds__goal_form__V_15_15;
              MR_Word hlds__goal_form__V_16_16;
              MR_Word hlds__goal_form__V_17_17;
              MR_Word hlds__goal_form__V_18_18;

              hlds__goal_form__succeeded = ((MR_tag((MR_Word) hlds__goal_form__Unification_8)) == (MR_mktag((MR_Integer) 0)));
              if (hlds__goal_form__succeeded)
                {
                  hlds__goal_form__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Unification_8, (MR_Integer) 0)));
                  hlds__goal_form__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Unification_8, (MR_Integer) 1)));
                  hlds__goal_form__Args_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Unification_8, (MR_Integer) 2)));
                  hlds__goal_form__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Unification_8, (MR_Integer) 3)));
                  hlds__goal_form__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Unification_8, (MR_Integer) 4)));
                  hlds__goal_form__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Unification_8, (MR_Integer) 5)));
                  hlds__goal_form__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Unification_8, (MR_Integer) 6)));
                  hlds__goal_form__succeeded = ((MR_tag((MR_Word) hlds__goal_form__Args_12)) == (MR_mktag((MR_Integer) 1)));
                  if (hlds__goal_form__succeeded)
                    {
                      hlds__goal_form__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__Args_12, (MR_Integer) 0)));
                      hlds__goal_form__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__Args_12, (MR_Integer) 1)));
                    }
                }
              if (hlds__goal_form__succeeded)
                *hlds__goal_form__May_4 = (MR_Integer) 1;
              else
                *hlds__goal_form__May_4 = (MR_Integer) 0;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word hlds__goal_form__Builtin_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__GoalExpr_3, (MR_Integer) 3)));
              MR_Word hlds__goal_form__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__GoalExpr_3, (MR_Integer) 0)));
              MR_Integer hlds__goal_form__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(2), hlds__goal_form__GoalExpr_3, (MR_Integer) 1)));
              MR_Word hlds__goal_form__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__GoalExpr_3, (MR_Integer) 2)));
              MR_Word hlds__goal_form__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__GoalExpr_3, (MR_Integer) 4)));
              MR_Word hlds__goal_form__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__GoalExpr_3, (MR_Integer) 5)));

              switch (hlds__goal_form__Builtin_22) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  *hlds__goal_form__May_4 = (MR_Integer) 0;
                  break;
                case (MR_Integer) 2:
                case (MR_Integer) 1:
                  *hlds__goal_form__May_4 = (MR_Integer) 1;
                  break;
              }
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_3, (MR_Integer) 0)))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *hlds__goal_form__May_4 = (MR_Integer) 1;
                break;
              case (MR_Integer) 1:
                *hlds__goal_form__May_4 = (MR_Integer) 1;
                break;
              case (MR_Integer) 2:
                {
                  MR_Word hlds__goal_form__ConjType_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_3, (MR_Integer) 1)));
                  MR_Word hlds__goal_form__Goals_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_3, (MR_Integer) 2)));

                  switch (hlds__goal_form__ConjType_37) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 1:
                      *hlds__goal_form__May_4 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 0:
                      {
                        hlds__goal_form__goal_list_may_allocate_heap_2_p_0(hlds__goal_form__Goals_38, hlds__goal_form__May_4);
                      }
                      break;
                  }
                }
                break;
              case (MR_Integer) 3:
                {
                  MR_Word hlds__goal_form__Goals_66 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_3, (MR_Integer) 1)));

                  {
                    hlds__goal_form__goal_list_may_allocate_heap_2_p_0(hlds__goal_form__Goals_66, hlds__goal_form__May_4);
                  }
                }
                break;
              case (MR_Integer) 4:
                {
                  MR_Word hlds__goal_form__Cases_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_3, (MR_Integer) 3)));
                  MR_Word hlds__goal_form___Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_3, (MR_Integer) 1)));
                  MR_Word hlds__goal_form___CanFail_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_3, (MR_Integer) 2)));

                  {
                    hlds__goal_form__cases_may_allocate_heap_2_p_0(hlds__goal_form__Cases_41, hlds__goal_form__May_4);
                  }
                }
                break;
              case (MR_Integer) 5:
                {
                  MR_Word hlds__goal_form__Reason_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_3, (MR_Integer) 1)));
                  MR_Word hlds__goal_form__SubGoal_67 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_3, (MR_Integer) 2)));
                  MR_Word hlds__goal_form__FGT_49;
                  MR_Word hlds__goal_form__V_48_48;

                  hlds__goal_form__succeeded = ((((MR_tag((MR_Word) hlds__goal_form__Reason_47)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__Reason_47, (MR_Integer) 0)))) == (MR_Integer) 5)));
                  if (hlds__goal_form__succeeded)
                    {
                      hlds__goal_form__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__Reason_47, (MR_Integer) 1)));
                      hlds__goal_form__FGT_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__Reason_47, (MR_Integer) 2)));
                      switch (hlds__goal_form__FGT_49) {
                        default:
                          hlds__goal_form__succeeded = MR_FALSE;
                          break;
                        case (MR_Integer) 1:
                          hlds__goal_form__succeeded = MR_TRUE;
                          break;
                        case (MR_Integer) 2:
                          hlds__goal_form__succeeded = MR_TRUE;
                          break;
                      }
                    }
                  if (hlds__goal_form__succeeded)
                    *hlds__goal_form__May_4 = (MR_Integer) 1;
                  else
                    {
                      MR_Word hlds__goal_form__GoalExpr_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__SubGoal_67, (MR_Integer) 0)));
                      MR_Word hlds__goal_form___GoalInfo_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__SubGoal_67, (MR_Integer) 1)));

                      /* direct tailcall eliminated */
                      {
                        MR_Word hlds__goal_form__GoalExpr__tmp_copy_3 = hlds__goal_form__GoalExpr_84;

                        hlds__goal_form__GoalExpr_3 = hlds__goal_form__GoalExpr__tmp_copy_3;
                      }
                      continue;
                    }
                }
                break;
              case (MR_Integer) 6:
                {
                  MR_Word hlds__goal_form__Cond_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_3, (MR_Integer) 2)));
                  MR_Word hlds__goal_form__Then_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_3, (MR_Integer) 3)));
                  MR_Word hlds__goal_form__Else_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_3, (MR_Integer) 4)));
                  MR_Word hlds__goal_form___Vars_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_3, (MR_Integer) 1)));
                  MR_Word hlds__goal_form__V_68_68;
                  MR_Word hlds__goal_form__GoalExpr_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Cond_43, (MR_Integer) 0)));
                  MR_Word hlds__goal_form___GoalInfo_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Cond_43, (MR_Integer) 1)));

                  {
                    hlds__goal_form__goal_may_allocate_heap_2_2_p_0(hlds__goal_form__GoalExpr_72, &hlds__goal_form__V_68_68);
                  }
                  hlds__goal_form__succeeded = ((MR_Integer) 1 == hlds__goal_form__V_68_68);
                  if (hlds__goal_form__succeeded)
                    *hlds__goal_form__May_4 = (MR_Integer) 1;
                  else
                    {
                      MR_Word hlds__goal_form__V_69_69;
                      MR_Word hlds__goal_form__GoalExpr_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Then_44, (MR_Integer) 0)));
                      MR_Word hlds__goal_form___GoalInfo_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Then_44, (MR_Integer) 1)));

                      {
                        hlds__goal_form__goal_may_allocate_heap_2_2_p_0(hlds__goal_form__GoalExpr_75, &hlds__goal_form__V_69_69);
                      }
                      hlds__goal_form__succeeded = ((MR_Integer) 1 == hlds__goal_form__V_69_69);
                      if (hlds__goal_form__succeeded)
                        *hlds__goal_form__May_4 = (MR_Integer) 1;
                      else
                        {
                          MR_Word hlds__goal_form__GoalExpr_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Else_45, (MR_Integer) 0)));
                          MR_Word hlds__goal_form___GoalInfo_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Else_45, (MR_Integer) 1)));

                          /* direct tailcall eliminated */
                          {
                            MR_Word hlds__goal_form__GoalExpr__tmp_copy_3 = hlds__goal_form__GoalExpr_78;

                            hlds__goal_form__GoalExpr_3 = hlds__goal_form__GoalExpr__tmp_copy_3;
                          }
                          continue;
                        }
                    }
                }
                break;
              case (MR_Integer) 7:
                {
                  MR_Word hlds__goal_form__ShortHand_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_3, (MR_Integer) 1)));

                  switch (MR_tag((MR_Word) hlds__goal_form__ShortHand_50)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        MR_Word hlds__goal_form__GoalA_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__ShortHand_50, (MR_Integer) 0)));
                        MR_Word hlds__goal_form__GoalB_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__ShortHand_50, (MR_Integer) 1)));
                        MR_Word hlds__goal_form__V_70_70;
                        MR_Word hlds__goal_form__GoalExpr_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__GoalA_61, (MR_Integer) 0)));
                        MR_Word hlds__goal_form___GoalInfo_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__GoalA_61, (MR_Integer) 1)));

                        {
                          hlds__goal_form__goal_may_allocate_heap_2_2_p_0(hlds__goal_form__GoalExpr_87, &hlds__goal_form__V_70_70);
                        }
                        hlds__goal_form__succeeded = ((MR_Integer) 1 == hlds__goal_form__V_70_70);
                        if (hlds__goal_form__succeeded)
                          *hlds__goal_form__May_4 = (MR_Integer) 1;
                        else
                          {
                            MR_Word hlds__goal_form__GoalExpr_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__GoalB_62, (MR_Integer) 0)));
                            MR_Word hlds__goal_form___GoalInfo_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__GoalB_62, (MR_Integer) 1)));

                            /* direct tailcall eliminated */
                            {
                              MR_Word hlds__goal_form__GoalExpr__tmp_copy_3 = hlds__goal_form__GoalExpr_90;

                              hlds__goal_form__GoalExpr_3 = hlds__goal_form__GoalExpr__tmp_copy_3;
                            }
                            continue;
                          }
                      }
                      break;
                    case (MR_Integer) 1:
                    case (MR_Integer) 2:
                      *hlds__goal_form__May_4 = (MR_Integer) 1;
                      break;
                  }
                }
                break;
            }
            break;
        }
      }
      break;
    }
}

static MR_Word MR_CALL 
hlds__goal_form__goal_is_flat_list_1_f_0(
  MR_Word hlds__goal_form__HeadVar__1_1)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool hlds__goal_form__succeeded;
        MR_Word hlds__goal_form__HeadVar__2_2;

        if ((hlds__goal_form__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          hlds__goal_form__HeadVar__2_2 = (MR_Integer) 1;
        else
          {
            MR_Word hlds__goal_form__Goal_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word hlds__goal_form__Goals_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word hlds__goal_form__V_6_6;
            MR_Word hlds__goal_form__GoalExpr_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Goal_3, (MR_Integer) 0)));
            MR_Word hlds__goal_form___GoalInfo_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Goal_3, (MR_Integer) 1)));

            {
              hlds__goal_form__V_6_6 = hlds__goal_form__goal_is_flat_expr_1_f_0(hlds__goal_form__GoalExpr_7);
            }
            hlds__goal_form__succeeded = (hlds__goal_form__V_6_6 == (MR_Integer) 1);
            if (hlds__goal_form__succeeded)
              {
                /* direct tailcall eliminated */
                {
                  MR_Word hlds__goal_form__HeadVar__1__tmp_copy_1 = hlds__goal_form__Goals_4;

                  hlds__goal_form__HeadVar__1_1 = hlds__goal_form__HeadVar__1__tmp_copy_1;
                }
                continue;
              }
            else
              hlds__goal_form__HeadVar__2_2 = (MR_Integer) 0;
          }
        return hlds__goal_form__HeadVar__2_2;
      }
      break;
    }
}

static MR_Word MR_CALL 
hlds__goal_form__goal_is_flat_expr_1_f_0(
  MR_Word hlds__goal_form__GoalExpr_3)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool hlds__goal_form__succeeded;
        MR_Word hlds__goal_form__IsFlat_4;

        switch (MR_tag((MR_Word) hlds__goal_form__GoalExpr_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word hlds__goal_form__SubGoal_39 = (MR_Word) MR_body(((MR_Word) hlds__goal_form__GoalExpr_3), (MR_Integer) 0);
              MR_Word hlds__goal_form__GoalExpr_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__SubGoal_39, (MR_Integer) 0)));
              MR_Word hlds__goal_form___GoalInfo_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__SubGoal_39, (MR_Integer) 1)));

              /* direct tailcall eliminated */
              {
                MR_Word hlds__goal_form__GoalExpr__tmp_copy_3 = hlds__goal_form__GoalExpr_44;

                hlds__goal_form__GoalExpr_3 = hlds__goal_form__GoalExpr__tmp_copy_3;
              }
              continue;
            }
            break;
          case (MR_Integer) 1:
          case (MR_Integer) 2:
            hlds__goal_form__IsFlat_4 = (MR_Integer) 1;
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_3, (MR_Integer) 0)))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
              case (MR_Integer) 1:
                hlds__goal_form__IsFlat_4 = (MR_Integer) 1;
                break;
              case (MR_Integer) 2:
                {
                  MR_Word hlds__goal_form__ConjType_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_3, (MR_Integer) 1)));
                  MR_Word hlds__goal_form__Goals_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_3, (MR_Integer) 2)));

                  switch (hlds__goal_form__ConjType_28) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 1:
                      hlds__goal_form__IsFlat_4 = (MR_Integer) 0;
                      break;
                    case (MR_Integer) 0:
                      {
                        hlds__goal_form__IsFlat_4 = hlds__goal_form__goal_is_flat_list_1_f_0(hlds__goal_form__Goals_29);
                      }
                      break;
                  }
                }
                break;
              case (MR_Integer) 3:
              case (MR_Integer) 4:
              case (MR_Integer) 6:
              case (MR_Integer) 7:
                hlds__goal_form__IsFlat_4 = (MR_Integer) 0;
                break;
              case (MR_Integer) 5:
                {
                  MR_Word hlds__goal_form__Reason_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_3, (MR_Integer) 1)));
                  MR_Word hlds__goal_form__SubGoal_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_3, (MR_Integer) 2)));
                  MR_Word hlds__goal_form__FGT_42;
                  MR_Word hlds__goal_form__V_41_41;

                  hlds__goal_form__succeeded = ((((MR_tag((MR_Word) hlds__goal_form__Reason_40)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__Reason_40, (MR_Integer) 0)))) == (MR_Integer) 5)));
                  if (hlds__goal_form__succeeded)
                    {
                      hlds__goal_form__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__Reason_40, (MR_Integer) 1)));
                      hlds__goal_form__FGT_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__Reason_40, (MR_Integer) 2)));
                      switch (hlds__goal_form__FGT_42) {
                        default:
                          hlds__goal_form__succeeded = MR_FALSE;
                          break;
                        case (MR_Integer) 1:
                          hlds__goal_form__succeeded = MR_TRUE;
                          break;
                        case (MR_Integer) 2:
                          hlds__goal_form__succeeded = MR_TRUE;
                          break;
                      }
                    }
                  if (hlds__goal_form__succeeded)
                    hlds__goal_form__IsFlat_4 = (MR_Integer) 1;
                  else
                    {
                      MR_Word hlds__goal_form__GoalExpr_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__SubGoal_43, (MR_Integer) 0)));
                      MR_Word hlds__goal_form___GoalInfo_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__SubGoal_43, (MR_Integer) 1)));

                      /* direct tailcall eliminated */
                      {
                        MR_Word hlds__goal_form__GoalExpr__tmp_copy_3 = hlds__goal_form__GoalExpr_46;

                        hlds__goal_form__GoalExpr_3 = hlds__goal_form__GoalExpr__tmp_copy_3;
                      }
                      continue;
                    }
                }
                break;
            }
            break;
        }
        return hlds__goal_form__IsFlat_4;
      }
      break;
    }
}

static MR_Word MR_CALL 
hlds__goal_form__case_list_can_throw_2_f_0(
  MR_Word hlds__goal_form__MaybeModuleInfo_1,
  MR_Word hlds__goal_form__HeadVar__2_2)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool hlds__goal_form__succeeded;
        MR_Word hlds__goal_form__HeadVar__3_3;

        if ((hlds__goal_form__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          hlds__goal_form__HeadVar__3_3 = (MR_Integer) 0;
        else
          {
            MR_Word hlds__goal_form__Goal_8;
            MR_Word hlds__goal_form__Cases_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__HeadVar__2_2, (MR_Integer) 1)));
            MR_Word hlds__goal_form__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__HeadVar__2_2, (MR_Integer) 0)));
            MR_Word hlds__goal_form__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__V_10_10, (MR_Integer) 0)));
            MR_Word hlds__goal_form__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__V_10_10, (MR_Integer) 1)));
            MR_Word hlds__goal_form__GoalExpr_14;
            MR_Word hlds__goal_form__GoalInfo_15;
            MR_Word hlds__goal_form__Determinism_16;

            hlds__goal_form__Goal_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__V_10_10, (MR_Integer) 2)));
            hlds__goal_form__GoalExpr_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Goal_8, (MR_Integer) 0)));
            hlds__goal_form__GoalInfo_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Goal_8, (MR_Integer) 1)));
            {
              hlds__goal_form__Determinism_16 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(hlds__goal_form__GoalInfo_15);
            }
            hlds__goal_form__succeeded = (hlds__goal_form__Determinism_16 == (MR_Integer) 6);
            if (hlds__goal_form__succeeded)
              hlds__goal_form__succeeded = MR_TRUE;
            else
              {
                MR_Word hlds__goal_form__V_18_18;

                {
                  hlds__goal_form__V_18_18 = hlds__goal_form__goal_expr_can_throw_2_f_0(hlds__goal_form__MaybeModuleInfo_1, hlds__goal_form__GoalExpr_14);
                }
                hlds__goal_form__succeeded = (hlds__goal_form__V_18_18 == (MR_Integer) 1);
              }
            if (hlds__goal_form__succeeded)
              hlds__goal_form__HeadVar__3_3 = (MR_Integer) 1;
            else
              {
                /* direct tailcall eliminated */
                {
                  MR_Word hlds__goal_form__HeadVar__2__tmp_copy_2 = hlds__goal_form__Cases_9;

                  hlds__goal_form__HeadVar__2_2 = hlds__goal_form__HeadVar__2__tmp_copy_2;
                }
                continue;
              }
          }
        return hlds__goal_form__HeadVar__3_3;
      }
      break;
    }
}

static MR_Word MR_CALL 
hlds__goal_form__goal_list_can_throw_2_f_0(
  MR_Word hlds__goal_form__MaybeModuleInfo_1,
  MR_Word hlds__goal_form__HeadVar__2_2)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool hlds__goal_form__succeeded;
        MR_Word hlds__goal_form__HeadVar__3_3;

        if ((hlds__goal_form__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          hlds__goal_form__HeadVar__3_3 = (MR_Integer) 0;
        else
          {
            MR_Word hlds__goal_form__Goal_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__HeadVar__2_2, (MR_Integer) 0)));
            MR_Word hlds__goal_form__Goals_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__HeadVar__2_2, (MR_Integer) 1)));
            MR_Word hlds__goal_form__GoalExpr_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Goal_6, (MR_Integer) 0)));
            MR_Word hlds__goal_form__GoalInfo_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Goal_6, (MR_Integer) 1)));
            MR_Word hlds__goal_form__Determinism_13;

            {
              hlds__goal_form__Determinism_13 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(hlds__goal_form__GoalInfo_12);
            }
            hlds__goal_form__succeeded = (hlds__goal_form__Determinism_13 == (MR_Integer) 6);
            if (hlds__goal_form__succeeded)
              hlds__goal_form__succeeded = MR_TRUE;
            else
              {
                MR_Word hlds__goal_form__V_15_15;

                {
                  hlds__goal_form__V_15_15 = hlds__goal_form__goal_expr_can_throw_2_f_0(hlds__goal_form__MaybeModuleInfo_1, hlds__goal_form__GoalExpr_11);
                }
                hlds__goal_form__succeeded = (hlds__goal_form__V_15_15 == (MR_Integer) 1);
              }
            if (hlds__goal_form__succeeded)
              hlds__goal_form__HeadVar__3_3 = (MR_Integer) 1;
            else
              {
                /* direct tailcall eliminated */
                {
                  MR_Word hlds__goal_form__HeadVar__2__tmp_copy_2 = hlds__goal_form__Goals_7;

                  hlds__goal_form__HeadVar__2_2 = hlds__goal_form__HeadVar__2__tmp_copy_2;
                }
                continue;
              }
          }
        return hlds__goal_form__HeadVar__3_3;
      }
      break;
    }
}

static MR_Word MR_CALL 
hlds__goal_form__goal_expr_can_throw_2_f_0(
  MR_Word hlds__goal_form__MaybeModuleInfo_4,
  MR_Word hlds__goal_form__GoalExpr_5)
{
  {
    MR_bool hlds__goal_form__succeeded;
    MR_Word hlds__goal_form__CanThrow_6;

    switch (MR_tag((MR_Word) hlds__goal_form__GoalExpr_5)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word hlds__goal_form__SubGoal_66 = (MR_Word) MR_body(((MR_Word) hlds__goal_form__GoalExpr_5), (MR_Integer) 0);

          {
            hlds__goal_form__CanThrow_6 = hlds__goal_form__goal_can_throw_func_2_f_0(hlds__goal_form__MaybeModuleInfo_4, hlds__goal_form__SubGoal_66);
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word hlds__goal_form__Uni_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__GoalExpr_5, (MR_Integer) 3)));
          MR_Word hlds__goal_form__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__GoalExpr_5, (MR_Integer) 0)));
          MR_Word hlds__goal_form__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__GoalExpr_5, (MR_Integer) 1)));
          MR_Word hlds__goal_form__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__GoalExpr_5, (MR_Integer) 2)));
          MR_Word hlds__goal_form__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__GoalExpr_5, (MR_Integer) 4)));

          switch (MR_tag((MR_Word) hlds__goal_form__Uni_10)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
            case (MR_Integer) 1:
            case (MR_Integer) 2:
              hlds__goal_form__CanThrow_6 = (MR_Integer) 0;
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__Uni_10, (MR_Integer) 0)))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  hlds__goal_form__CanThrow_6 = (MR_Integer) 0;
                  break;
                case (MR_Integer) 1:
                  hlds__goal_form__CanThrow_6 = (MR_Integer) 1;
                  break;
              }
              break;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word hlds__goal_form__PredId_32 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__GoalExpr_5, (MR_Integer) 0)));
          MR_Integer hlds__goal_form__ProcId_33 = ((MR_Integer) (MR_hl_field(MR_mktag(2), hlds__goal_form__GoalExpr_5, (MR_Integer) 1)));
          MR_Word hlds__goal_form__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__GoalExpr_5, (MR_Integer) 2)));
          MR_Word hlds__goal_form__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__GoalExpr_5, (MR_Integer) 3)));
          MR_Word hlds__goal_form__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__GoalExpr_5, (MR_Integer) 4)));
          MR_Word hlds__goal_form__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__GoalExpr_5, (MR_Integer) 5)));
          MR_Word hlds__goal_form__ModuleInfo_38;
          MR_Word hlds__goal_form__ProcInfo_40;
          MR_Word hlds__goal_form__MaybeExceptionInfo_41;
          MR_Word hlds__goal_form__ExceptionInfo_42;
          MR_Word hlds__goal_form__V_89_89;
          MR_Word hlds__goal_form___PredInfo_39;
          MR_Word hlds__goal_form__V_43_43;

          hlds__goal_form__succeeded = ((MR_tag((MR_Word) hlds__goal_form__MaybeModuleInfo_4)) == (MR_mktag((MR_Integer) 1)));
          if (hlds__goal_form__succeeded)
            {
              hlds__goal_form__ModuleInfo_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__MaybeModuleInfo_4, (MR_Integer) 0)));
              {
                hlds__hlds_module__module_info_pred_proc_info_5_p_0(hlds__goal_form__ModuleInfo_38, hlds__goal_form__PredId_32, hlds__goal_form__ProcId_33, &hlds__goal_form___PredInfo_39, &hlds__goal_form__ProcInfo_40);
              }
              {
                hlds__hlds_pred__proc_info_get_exception_info_2_p_0(hlds__goal_form__ProcInfo_40, &hlds__goal_form__MaybeExceptionInfo_41);
              }
              hlds__goal_form__succeeded = ((MR_tag((MR_Word) hlds__goal_form__MaybeExceptionInfo_41)) == (MR_mktag((MR_Integer) 1)));
              if (hlds__goal_form__succeeded)
                {
                  hlds__goal_form__ExceptionInfo_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__MaybeExceptionInfo_41, (MR_Integer) 0)));
                  hlds__goal_form__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__ExceptionInfo_42, (MR_Integer) 0)));
                  hlds__goal_form__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__ExceptionInfo_42, (MR_Integer) 1)));
                  hlds__goal_form__succeeded = (hlds__goal_form__V_89_89 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
            }
          if (hlds__goal_form__succeeded)
            hlds__goal_form__CanThrow_6 = (MR_Integer) 0;
          else
            hlds__goal_form__CanThrow_6 = (MR_Integer) 1;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_5, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            hlds__goal_form__CanThrow_6 = (MR_Integer) 1;
            break;
          case (MR_Integer) 1:
            {
              MR_Word hlds__goal_form__Attributes_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_5, (MR_Integer) 1)));
              MR_Word hlds__goal_form__ExceptionStatus_51;
              MR_Word hlds__goal_form__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_5, (MR_Integer) 2)));
              MR_Integer hlds__goal_form__V_46_46 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_5, (MR_Integer) 3)));
              MR_Word hlds__goal_form__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_5, (MR_Integer) 4)));
              MR_Word hlds__goal_form__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_5, (MR_Integer) 5)));
              MR_Word hlds__goal_form__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_5, (MR_Integer) 6)));
              MR_Word hlds__goal_form__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_5, (MR_Integer) 7)));

              {
                hlds__goal_form__ExceptionStatus_51 = parse_tree__prog_data_foreign__get_may_throw_exception_1_f_0(hlds__goal_form__Attributes_44);
              }
              switch (hlds__goal_form__ExceptionStatus_51) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  {
                    MR_Word hlds__goal_form__V_88_88;

                    {
                      hlds__goal_form__V_88_88 = parse_tree__prog_data_foreign__get_may_call_mercury_1_f_0(hlds__goal_form__Attributes_44);
                    }
                    hlds__goal_form__succeeded = (hlds__goal_form__V_88_88 == (MR_Integer) 1);
                  }
                  break;
                case (MR_Integer) 0:
                  hlds__goal_form__succeeded = MR_TRUE;
                  break;
              }
              if (hlds__goal_form__succeeded)
                hlds__goal_form__CanThrow_6 = (MR_Integer) 0;
              else
                hlds__goal_form__CanThrow_6 = (MR_Integer) 1;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word hlds__goal_form__Goals_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_5, (MR_Integer) 2)));
              MR_Word hlds__goal_form___ConjType_57 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_5, (MR_Integer) 1)));

              {
                hlds__goal_form__CanThrow_6 = hlds__goal_form__goal_list_can_throw_2_f_0(hlds__goal_form__MaybeModuleInfo_4, hlds__goal_form__Goals_58);
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word hlds__goal_form__Goals_91 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_5, (MR_Integer) 1)));

              {
                hlds__goal_form__CanThrow_6 = hlds__goal_form__goal_list_can_throw_2_f_0(hlds__goal_form__MaybeModuleInfo_4, hlds__goal_form__Goals_91);
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word hlds__goal_form__Cases_61 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_5, (MR_Integer) 3)));
              MR_Word hlds__goal_form___Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_5, (MR_Integer) 1)));
              MR_Word hlds__goal_form___CanFail_60 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_5, (MR_Integer) 2)));

              {
                hlds__goal_form__CanThrow_6 = hlds__goal_form__case_list_can_throw_2_f_0(hlds__goal_form__MaybeModuleInfo_4, hlds__goal_form__Cases_61);
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word hlds__goal_form__Reason_67 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_5, (MR_Integer) 1)));
              MR_Word hlds__goal_form__SubGoal_90 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_5, (MR_Integer) 2)));
              MR_Word hlds__goal_form__FGT_69;
              MR_Word hlds__goal_form__V_68_68;

              hlds__goal_form__succeeded = ((((MR_tag((MR_Word) hlds__goal_form__Reason_67)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__Reason_67, (MR_Integer) 0)))) == (MR_Integer) 5)));
              if (hlds__goal_form__succeeded)
                {
                  hlds__goal_form__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__Reason_67, (MR_Integer) 1)));
                  hlds__goal_form__FGT_69 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__Reason_67, (MR_Integer) 2)));
                  switch (hlds__goal_form__FGT_69) {
                    default:
                      hlds__goal_form__succeeded = MR_FALSE;
                      break;
                    case (MR_Integer) 1:
                      hlds__goal_form__succeeded = MR_TRUE;
                      break;
                    case (MR_Integer) 2:
                      hlds__goal_form__succeeded = MR_TRUE;
                      break;
                  }
                }
              if (hlds__goal_form__succeeded)
                hlds__goal_form__CanThrow_6 = (MR_Integer) 0;
              else
                {
                  hlds__goal_form__CanThrow_6 = hlds__goal_form__goal_can_throw_func_2_f_0(hlds__goal_form__MaybeModuleInfo_4, hlds__goal_form__SubGoal_90);
                }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word hlds__goal_form__Cond_63 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_5, (MR_Integer) 2)));
              MR_Word hlds__goal_form__Then_64 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_5, (MR_Integer) 3)));
              MR_Word hlds__goal_form__Else_65 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_5, (MR_Integer) 4)));
              MR_Word hlds__goal_form__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_5, (MR_Integer) 1)));
              MR_Word hlds__goal_form__GoalExpr_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Cond_63, (MR_Integer) 0)));
              MR_Word hlds__goal_form__GoalInfo_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Cond_63, (MR_Integer) 1)));
              MR_Word hlds__goal_form__Determinism_96;

              {
                hlds__goal_form__Determinism_96 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(hlds__goal_form__GoalInfo_95);
              }
              hlds__goal_form__succeeded = (hlds__goal_form__Determinism_96 == (MR_Integer) 6);
              if (hlds__goal_form__succeeded)
                hlds__goal_form__succeeded = MR_TRUE;
              else
                {
                  MR_Word hlds__goal_form__V_98_98;

                  {
                    hlds__goal_form__V_98_98 = hlds__goal_form__goal_expr_can_throw_2_f_0(hlds__goal_form__MaybeModuleInfo_4, hlds__goal_form__GoalExpr_94);
                  }
                  hlds__goal_form__succeeded = (hlds__goal_form__V_98_98 == (MR_Integer) 1);
                }
              if (hlds__goal_form__succeeded)
                hlds__goal_form__CanThrow_6 = (MR_Integer) 1;
              else
                {
                  MR_Word hlds__goal_form__V_87_87;

                  {
                    hlds__goal_form__V_87_87 = hlds__goal_form__goal_can_throw_func_2_f_0(hlds__goal_form__MaybeModuleInfo_4, hlds__goal_form__Then_64);
                  }
                  hlds__goal_form__succeeded = (hlds__goal_form__V_87_87 == (MR_Integer) 1);
                  if (hlds__goal_form__succeeded)
                    hlds__goal_form__CanThrow_6 = (MR_Integer) 1;
                  else
                    {
                      hlds__goal_form__CanThrow_6 = hlds__goal_form__goal_can_throw_func_2_f_0(hlds__goal_form__MaybeModuleInfo_4, hlds__goal_form__Else_65);
                    }
                }
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word hlds__goal_form__ShortHand_70 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_5, (MR_Integer) 1)));

              switch (MR_tag((MR_Word) hlds__goal_form__ShortHand_70)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    {
                      mercury__require__unexpected_3_p_0((MR_String) "hlds.goal_form", (MR_String) "function \140hlds.goal_form.goal_expr_can_throw\'/2", (MR_String) "bi_implication");
                    }
                  }
                  break;
                case (MR_Integer) 1:
                  hlds__goal_form__CanThrow_6 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 2:
                  hlds__goal_form__CanThrow_6 = (MR_Integer) 1;
                  break;
              }
            }
            break;
        }
        break;
    }
    return hlds__goal_form__CanThrow_6;
  }
}

static MR_Word MR_CALL 
hlds__goal_form__goal_can_throw_func_2_f_0(
  MR_Word hlds__goal_form__MaybeModuleInfo_4,
  MR_Word hlds__goal_form__HeadVar__2_2)
{
  {
    MR_bool hlds__goal_form__succeeded;
    MR_Word hlds__goal_form__CanThrow_7;
    MR_Word hlds__goal_form__GoalExpr_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__HeadVar__2_2, (MR_Integer) 0)));
    MR_Word hlds__goal_form__GoalInfo_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__HeadVar__2_2, (MR_Integer) 1)));
    MR_Word hlds__goal_form__Determinism_8;

    {
      hlds__goal_form__Determinism_8 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(hlds__goal_form__GoalInfo_6);
    }
    hlds__goal_form__succeeded = (hlds__goal_form__Determinism_8 == (MR_Integer) 6);
    if (hlds__goal_form__succeeded)
      hlds__goal_form__CanThrow_7 = (MR_Integer) 1;
    else
      {
        hlds__goal_form__CanThrow_7 = hlds__goal_form__goal_expr_can_throw_2_f_0(hlds__goal_form__MaybeModuleInfo_4, hlds__goal_form__GoalExpr_5);
      }
    return hlds__goal_form__CanThrow_7;
  }
}

static MR_Word MR_CALL 
hlds__goal_form__case_list_can_loop_2_f_0(
  MR_Word hlds__goal_form__MaybeModuleInfo_1,
  MR_Word hlds__goal_form__HeadVar__2_2)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool hlds__goal_form__succeeded;
        MR_Word hlds__goal_form__HeadVar__3_3;

        if ((hlds__goal_form__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          hlds__goal_form__HeadVar__3_3 = (MR_Integer) 0;
        else
          {
            MR_Word hlds__goal_form__Goal_8;
            MR_Word hlds__goal_form__Cases_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__HeadVar__2_2, (MR_Integer) 1)));
            MR_Word hlds__goal_form__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__HeadVar__2_2, (MR_Integer) 0)));
            MR_Word hlds__goal_form__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__V_10_10, (MR_Integer) 0)));
            MR_Word hlds__goal_form__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__V_10_10, (MR_Integer) 1)));
            MR_Word hlds__goal_form__V_11_11;

            hlds__goal_form__Goal_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__V_10_10, (MR_Integer) 2)));
            {
              hlds__goal_form__V_11_11 = hlds__goal_form__goal_can_loop_func_2_f_0(hlds__goal_form__MaybeModuleInfo_1, hlds__goal_form__Goal_8);
            }
            hlds__goal_form__succeeded = (hlds__goal_form__V_11_11 == (MR_Integer) 1);
            if (hlds__goal_form__succeeded)
              hlds__goal_form__HeadVar__3_3 = (MR_Integer) 1;
            else
              {
                /* direct tailcall eliminated */
                {
                  MR_Word hlds__goal_form__HeadVar__2__tmp_copy_2 = hlds__goal_form__Cases_9;

                  hlds__goal_form__HeadVar__2_2 = hlds__goal_form__HeadVar__2__tmp_copy_2;
                }
                continue;
              }
          }
        return hlds__goal_form__HeadVar__3_3;
      }
      break;
    }
}

static MR_Word MR_CALL 
hlds__goal_form__goal_list_can_loop_2_f_0(
  MR_Word hlds__goal_form__MaybeModuleInfo_1,
  MR_Word hlds__goal_form__HeadVar__2_2)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool hlds__goal_form__succeeded;
        MR_Word hlds__goal_form__HeadVar__3_3;

        if ((hlds__goal_form__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          hlds__goal_form__HeadVar__3_3 = (MR_Integer) 0;
        else
          {
            MR_Word hlds__goal_form__Goal_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__HeadVar__2_2, (MR_Integer) 0)));
            MR_Word hlds__goal_form__Goals_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__HeadVar__2_2, (MR_Integer) 1)));
            MR_Word hlds__goal_form__V_8_8;

            {
              hlds__goal_form__V_8_8 = hlds__goal_form__goal_can_loop_func_2_f_0(hlds__goal_form__MaybeModuleInfo_1, hlds__goal_form__Goal_6);
            }
            hlds__goal_form__succeeded = (hlds__goal_form__V_8_8 == (MR_Integer) 1);
            if (hlds__goal_form__succeeded)
              hlds__goal_form__HeadVar__3_3 = (MR_Integer) 1;
            else
              {
                /* direct tailcall eliminated */
                {
                  MR_Word hlds__goal_form__HeadVar__2__tmp_copy_2 = hlds__goal_form__Goals_7;

                  hlds__goal_form__HeadVar__2_2 = hlds__goal_form__HeadVar__2__tmp_copy_2;
                }
                continue;
              }
          }
        return hlds__goal_form__HeadVar__3_3;
      }
      break;
    }
}

static MR_Word MR_CALL 
hlds__goal_form__goal_can_loop_func_2_f_0(
  MR_Word hlds__goal_form__MaybeModuleInfo_4,
  MR_Word hlds__goal_form__Goal_5)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool hlds__goal_form__succeeded;
        MR_Word hlds__goal_form__CanLoop_6;
        MR_Word hlds__goal_form__GoalExpr_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Goal_5, (MR_Integer) 0)));
        MR_Word hlds__goal_form__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Goal_5, (MR_Integer) 1)));

        switch (MR_tag((MR_Word) hlds__goal_form__GoalExpr_7)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word hlds__goal_form__SubGoal_69 = (MR_Word) MR_body(((MR_Word) hlds__goal_form__GoalExpr_7), (MR_Integer) 0);

              /* direct tailcall eliminated */
              {
                MR_Word hlds__goal_form__Goal__tmp_copy_5 = hlds__goal_form__SubGoal_69;

                hlds__goal_form__Goal_5 = hlds__goal_form__Goal__tmp_copy_5;
              }
              continue;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word hlds__goal_form__Uni_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__GoalExpr_7, (MR_Integer) 3)));
              MR_Word hlds__goal_form__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__GoalExpr_7, (MR_Integer) 0)));
              MR_Word hlds__goal_form__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__GoalExpr_7, (MR_Integer) 1)));
              MR_Word hlds__goal_form__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__GoalExpr_7, (MR_Integer) 2)));
              MR_Word hlds__goal_form__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__GoalExpr_7, (MR_Integer) 4)));

              switch (MR_tag((MR_Word) hlds__goal_form__Uni_12)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                case (MR_Integer) 1:
                case (MR_Integer) 2:
                  hlds__goal_form__CanLoop_6 = (MR_Integer) 0;
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__Uni_12, (MR_Integer) 0)))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      hlds__goal_form__CanLoop_6 = (MR_Integer) 0;
                      break;
                    case (MR_Integer) 1:
                      hlds__goal_form__CanLoop_6 = (MR_Integer) 1;
                      break;
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word hlds__goal_form__PredId_34 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__GoalExpr_7, (MR_Integer) 0)));
              MR_Integer hlds__goal_form__ProcId_35 = ((MR_Integer) (MR_hl_field(MR_mktag(2), hlds__goal_form__GoalExpr_7, (MR_Integer) 1)));
              MR_Word hlds__goal_form__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__GoalExpr_7, (MR_Integer) 2)));
              MR_Word hlds__goal_form__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__GoalExpr_7, (MR_Integer) 3)));
              MR_Word hlds__goal_form__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__GoalExpr_7, (MR_Integer) 4)));
              MR_Word hlds__goal_form__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__GoalExpr_7, (MR_Integer) 5)));
              MR_Word hlds__goal_form__ModuleInfo_40;
              MR_Word hlds__goal_form__ProcInfo_42;
              MR_Word hlds__goal_form__V_41_41;

              hlds__goal_form__succeeded = ((MR_tag((MR_Word) hlds__goal_form__MaybeModuleInfo_4)) == (MR_mktag((MR_Integer) 1)));
              if (hlds__goal_form__succeeded)
                {
                  hlds__goal_form__ModuleInfo_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__MaybeModuleInfo_4, (MR_Integer) 0)));
                  {
                    hlds__hlds_module__module_info_pred_proc_info_5_p_0(hlds__goal_form__ModuleInfo_40, hlds__goal_form__PredId_34, hlds__goal_form__ProcId_35, &hlds__goal_form__V_41_41, &hlds__goal_form__ProcInfo_42);
                  }
                  {
                    MR_Word hlds__goal_form__MaybeTermInfo_43;
                    MR_Word hlds__goal_form__V_97_97;

                    {
                      hlds__hlds_pred__proc_info_get_maybe_termination_info_2_p_0(hlds__goal_form__ProcInfo_42, &hlds__goal_form__MaybeTermInfo_43);
                    }
                    hlds__goal_form__succeeded = ((MR_tag((MR_Word) hlds__goal_form__MaybeTermInfo_43)) == (MR_mktag((MR_Integer) 1)));
                    if (hlds__goal_form__succeeded)
                      {
                        hlds__goal_form__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__MaybeTermInfo_43, (MR_Integer) 0)));
                        hlds__goal_form__succeeded = ((MR_tag((MR_Word) hlds__goal_form__V_97_97)) == (MR_mktag((MR_Integer) 0)));
                      }
                  }
                  if (!(hlds__goal_form__succeeded))
                    {
                      MR_Word hlds__goal_form__Term2Info_45;
                      MR_Word hlds__goal_form__V_95_95;
                      MR_Word hlds__goal_form__V_96_96;
                      MR_Word hlds__goal_form__V_46_46;

                      {
                        hlds__hlds_pred__proc_info_get_termination2_info_2_p_0(hlds__goal_form__ProcInfo_42, &hlds__goal_form__Term2Info_45);
                      }
                      {
                        hlds__goal_form__V_95_95 = transform_hlds__term_constr_main_types__term2_info_get_term_status_1_f_0(hlds__goal_form__Term2Info_45);
                      }
                      hlds__goal_form__succeeded = ((MR_tag((MR_Word) hlds__goal_form__V_95_95)) == (MR_mktag((MR_Integer) 1)));
                      if (hlds__goal_form__succeeded)
                        {
                          hlds__goal_form__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__V_95_95, (MR_Integer) 0)));
                          hlds__goal_form__succeeded = ((MR_tag((MR_Word) hlds__goal_form__V_96_96)) == (MR_mktag((MR_Integer) 0)));
                          if (hlds__goal_form__succeeded)
                            hlds__goal_form__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__V_96_96, (MR_Integer) 0)));
                        }
                    }
                }
              if (hlds__goal_form__succeeded)
                hlds__goal_form__CanLoop_6 = (MR_Integer) 0;
              else
                hlds__goal_form__CanLoop_6 = (MR_Integer) 1;
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_7, (MR_Integer) 0)))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                hlds__goal_form__CanLoop_6 = (MR_Integer) 1;
                break;
              case (MR_Integer) 1:
                {
                  MR_Word hlds__goal_form__Attributes_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_7, (MR_Integer) 1)));
                  MR_Word hlds__goal_form__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_7, (MR_Integer) 2)));
                  MR_Integer hlds__goal_form__V_54_54 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_7, (MR_Integer) 3)));
                  MR_Word hlds__goal_form__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_7, (MR_Integer) 4)));
                  MR_Word hlds__goal_form__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_7, (MR_Integer) 5)));
                  MR_Word hlds__goal_form__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_7, (MR_Integer) 6)));
                  MR_Word hlds__goal_form__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_7, (MR_Integer) 7)));
                  MR_Word hlds__goal_form__Terminates_59;

                  {
                    hlds__goal_form__Terminates_59 = parse_tree__prog_data_foreign__get_terminates_1_f_0(hlds__goal_form__Attributes_52);
                  }
                  switch (hlds__goal_form__Terminates_59) {
                    default:
                      hlds__goal_form__succeeded = MR_FALSE;
                      break;
                    case (MR_Integer) 2:
                      {
                        MR_Word hlds__goal_form__V_94_94;

                        {
                          hlds__goal_form__V_94_94 = parse_tree__prog_data_foreign__get_may_call_mercury_1_f_0(hlds__goal_form__Attributes_52);
                        }
                        hlds__goal_form__succeeded = (hlds__goal_form__V_94_94 == (MR_Integer) 1);
                      }
                      break;
                    case (MR_Integer) 0:
                      hlds__goal_form__succeeded = MR_TRUE;
                      break;
                  }
                  if (hlds__goal_form__succeeded)
                    hlds__goal_form__CanLoop_6 = (MR_Integer) 0;
                  else
                    hlds__goal_form__CanLoop_6 = (MR_Integer) 1;
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word hlds__goal_form__V_103_103 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_7, (MR_Integer) 2)));
                  MR_Word hlds__goal_form__V_104_104 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_7, (MR_Integer) 1)));

                  switch (hlds__goal_form__V_104_104) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 1:
                      hlds__goal_form__CanLoop_6 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 0:
                      {
                        hlds__goal_form__CanLoop_6 = hlds__goal_form__goal_list_can_loop_2_f_0(hlds__goal_form__MaybeModuleInfo_4, hlds__goal_form__V_103_103);
                      }
                      break;
                  }
                }
                break;
              case (MR_Integer) 3:
                {
                  MR_Word hlds__goal_form__Goals_98 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_7, (MR_Integer) 1)));

                  {
                    hlds__goal_form__CanLoop_6 = hlds__goal_form__goal_list_can_loop_2_f_0(hlds__goal_form__MaybeModuleInfo_4, hlds__goal_form__Goals_98);
                  }
                }
                break;
              case (MR_Integer) 4:
                {
                  MR_Word hlds__goal_form__Cases_64 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_7, (MR_Integer) 3)));
                  MR_Word hlds__goal_form___Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_7, (MR_Integer) 1)));
                  MR_Word hlds__goal_form___CanFail_63 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_7, (MR_Integer) 2)));

                  {
                    hlds__goal_form__CanLoop_6 = hlds__goal_form__case_list_can_loop_2_f_0(hlds__goal_form__MaybeModuleInfo_4, hlds__goal_form__Cases_64);
                  }
                }
                break;
              case (MR_Integer) 5:
                {
                  MR_Word hlds__goal_form__Reason_70 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_7, (MR_Integer) 1)));
                  MR_Word hlds__goal_form__SubGoal_99 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_7, (MR_Integer) 2)));
                  MR_Word hlds__goal_form__FGT_72;
                  MR_Word hlds__goal_form__V_71_71;

                  hlds__goal_form__succeeded = ((((MR_tag((MR_Word) hlds__goal_form__Reason_70)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__Reason_70, (MR_Integer) 0)))) == (MR_Integer) 5)));
                  if (hlds__goal_form__succeeded)
                    {
                      hlds__goal_form__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__Reason_70, (MR_Integer) 1)));
                      hlds__goal_form__FGT_72 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__Reason_70, (MR_Integer) 2)));
                      switch (hlds__goal_form__FGT_72) {
                        default:
                          hlds__goal_form__succeeded = MR_FALSE;
                          break;
                        case (MR_Integer) 1:
                          hlds__goal_form__succeeded = MR_TRUE;
                          break;
                        case (MR_Integer) 2:
                          hlds__goal_form__succeeded = MR_TRUE;
                          break;
                      }
                    }
                  if (hlds__goal_form__succeeded)
                    hlds__goal_form__CanLoop_6 = (MR_Integer) 0;
                  else
                    {
                      /* direct tailcall eliminated */
                      {
                        MR_Word hlds__goal_form__Goal__tmp_copy_5 = hlds__goal_form__SubGoal_99;

                        hlds__goal_form__Goal_5 = hlds__goal_form__Goal__tmp_copy_5;
                      }
                      continue;
                    }
                }
                break;
              case (MR_Integer) 6:
                {
                  MR_Word hlds__goal_form__Cond_66 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_7, (MR_Integer) 2)));
                  MR_Word hlds__goal_form__Then_67 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_7, (MR_Integer) 3)));
                  MR_Word hlds__goal_form__Else_68 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_7, (MR_Integer) 4)));
                  MR_Word hlds__goal_form___Vars_65 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_7, (MR_Integer) 1)));
                  MR_Word hlds__goal_form__V_90_90;

                  {
                    hlds__goal_form__V_90_90 = hlds__goal_form__goal_can_loop_func_2_f_0(hlds__goal_form__MaybeModuleInfo_4, hlds__goal_form__Cond_66);
                  }
                  hlds__goal_form__succeeded = (hlds__goal_form__V_90_90 == (MR_Integer) 1);
                  if (hlds__goal_form__succeeded)
                    hlds__goal_form__CanLoop_6 = (MR_Integer) 1;
                  else
                    {
                      MR_Word hlds__goal_form__V_91_91;

                      {
                        hlds__goal_form__V_91_91 = hlds__goal_form__goal_can_loop_func_2_f_0(hlds__goal_form__MaybeModuleInfo_4, hlds__goal_form__Then_67);
                      }
                      hlds__goal_form__succeeded = (hlds__goal_form__V_91_91 == (MR_Integer) 1);
                      if (hlds__goal_form__succeeded)
                        hlds__goal_form__CanLoop_6 = (MR_Integer) 1;
                      else
                        {
                          /* direct tailcall eliminated */
                          {
                            MR_Word hlds__goal_form__Goal__tmp_copy_5 = hlds__goal_form__Else_68;

                            hlds__goal_form__Goal_5 = hlds__goal_form__Goal__tmp_copy_5;
                          }
                          continue;
                        }
                    }
                }
                break;
              case (MR_Integer) 7:
                {
                  MR_Word hlds__goal_form__ShortHand_73 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_7, (MR_Integer) 1)));

                  switch (MR_tag((MR_Word) hlds__goal_form__ShortHand_73)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        {
                          mercury__require__unexpected_3_p_0((MR_String) "hlds.goal_form", (MR_String) "function \140hlds.goal_form.goal_can_loop_func\'/2", (MR_String) "bi_implication");
                        }
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        MR_Word hlds__goal_form__MainGoal_78 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__ShortHand_73, (MR_Integer) 4)));
                        MR_Word hlds__goal_form__OrElseGoals_79 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__ShortHand_73, (MR_Integer) 5)));
                        MR_Word hlds__goal_form__MainGoalCanLoop_81;
                        MR_Word hlds__goal_form__OrElseCanLoop_82;
                        MR_Word hlds__goal_form__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__ShortHand_73, (MR_Integer) 0)));
                        MR_Word hlds__goal_form__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__ShortHand_73, (MR_Integer) 1)));
                        MR_Word hlds__goal_form__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__ShortHand_73, (MR_Integer) 2)));
                        MR_Word hlds__goal_form__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__ShortHand_73, (MR_Integer) 3)));
                        MR_Word hlds__goal_form__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__ShortHand_73, (MR_Integer) 6)));

                        {
                          hlds__goal_form__MainGoalCanLoop_81 = hlds__goal_form__goal_can_loop_func_2_f_0(hlds__goal_form__MaybeModuleInfo_4, hlds__goal_form__MainGoal_78);
                        }
                        {
                          hlds__goal_form__OrElseCanLoop_82 = hlds__goal_form__goal_list_can_loop_2_f_0(hlds__goal_form__MaybeModuleInfo_4, hlds__goal_form__OrElseGoals_79);
                        }
                        {
                          hlds__goal_form__CanLoop_6 = mercury__bool__or_2_f_0(hlds__goal_form__MainGoalCanLoop_81, hlds__goal_form__OrElseCanLoop_82);
                        }
                      }
                      break;
                    case (MR_Integer) 2:
                      {
                        MR_Word hlds__goal_form__SubGoal_100 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__ShortHand_73, (MR_Integer) 2)));
                        MR_Word hlds__goal_form__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__ShortHand_73, (MR_Integer) 0)));
                        MR_Word hlds__goal_form__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__ShortHand_73, (MR_Integer) 1)));

                        /* direct tailcall eliminated */
                        {
                          MR_Word hlds__goal_form__Goal__tmp_copy_5 = hlds__goal_form__SubGoal_100;

                          hlds__goal_form__Goal_5 = hlds__goal_form__Goal__tmp_copy_5;
                        }
                        continue;
                      }
                      break;
                  }
                }
                break;
            }
            break;
        }
        return hlds__goal_form__CanLoop_6;
      }
      break;
    }
}

static void MR_CALL 
hlds__goal_form__cases_can_throw_4_p_0(
  MR_Word hlds__goal_form__HeadVar__1_1,
  MR_Word * hlds__goal_form__HeadVar__2_2,
  MR_Word hlds__goal_form__STATE_VARIABLE_ModuleInfo_0_3,
  MR_Word * hlds__goal_form__STATE_VARIABLE_ModuleInfo_4)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool hlds__goal_form__succeeded;

        if ((hlds__goal_form__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *hlds__goal_form__HeadVar__2_2 = (MR_Integer) 1;
            *hlds__goal_form__STATE_VARIABLE_ModuleInfo_4 = hlds__goal_form__STATE_VARIABLE_ModuleInfo_0_3;
          }
        else
          {
            MR_Word hlds__goal_form__Case_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word hlds__goal_form__Cases_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word hlds__goal_form__Goal_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Case_8, (MR_Integer) 2)));
            MR_Word hlds__goal_form__GoalExpr_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Goal_14, (MR_Integer) 0)));
            MR_Word hlds__goal_form__GoalInfo_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Goal_14, (MR_Integer) 1)));
            MR_Word hlds__goal_form__Determinism_26;
            MR_Word hlds__goal_form__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Case_8, (MR_Integer) 0)));
            MR_Word hlds__goal_form__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Case_8, (MR_Integer) 1)));

            {
              hlds__goal_form__Determinism_26 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(hlds__goal_form__GoalInfo_24);
            }
            hlds__goal_form__succeeded = (hlds__goal_form__Determinism_26 == (MR_Integer) 6);
            if (hlds__goal_form__succeeded)
              {
                *hlds__goal_form__HeadVar__2_2 = (MR_Integer) 0;
                *hlds__goal_form__STATE_VARIABLE_ModuleInfo_4 = hlds__goal_form__STATE_VARIABLE_ModuleInfo_0_3;
              }
            else
              {
                MR_Word hlds__goal_form__Result0_28;
                MR_Word hlds__goal_form__STATE_VARIABLE_ModuleInfo_18_29;

                {
                  hlds__goal_form__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_99_97_110_95_116_104_114_111_119_95_50_95_95_91_50_93_95_48_5_p_0(hlds__goal_form__GoalExpr_23, &hlds__goal_form__Result0_28, hlds__goal_form__STATE_VARIABLE_ModuleInfo_0_3, &hlds__goal_form__STATE_VARIABLE_ModuleInfo_18_29);
                }
                switch (hlds__goal_form__Result0_28) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      *hlds__goal_form__HeadVar__2_2 = (MR_Integer) 0;
                      *hlds__goal_form__STATE_VARIABLE_ModuleInfo_4 = hlds__goal_form__STATE_VARIABLE_ModuleInfo_18_29;
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      /* direct tailcall eliminated */
                      {
                        MR_Word hlds__goal_form__HeadVar__1__tmp_copy_1 = hlds__goal_form__Cases_9;
                        MR_Word hlds__goal_form__STATE_VARIABLE_ModuleInfo_0__tmp_copy_3 = hlds__goal_form__STATE_VARIABLE_ModuleInfo_18_29;

                        hlds__goal_form__STATE_VARIABLE_ModuleInfo_0_3 = hlds__goal_form__STATE_VARIABLE_ModuleInfo_0__tmp_copy_3;
                        hlds__goal_form__HeadVar__1_1 = hlds__goal_form__HeadVar__1__tmp_copy_1;
                      }
                      continue;
                    }
                    break;
                }
              }
          }
      }
      break;
    }
}

static void MR_CALL 
hlds__goal_form__goals_can_throw_4_p_0(
  MR_Word hlds__goal_form__HeadVar__1_1,
  MR_Word * hlds__goal_form__HeadVar__2_2,
  MR_Word hlds__goal_form__STATE_VARIABLE_ModuleInfo_0_3,
  MR_Word * hlds__goal_form__STATE_VARIABLE_ModuleInfo_4)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool hlds__goal_form__succeeded;

        if ((hlds__goal_form__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *hlds__goal_form__HeadVar__2_2 = (MR_Integer) 1;
            *hlds__goal_form__STATE_VARIABLE_ModuleInfo_4 = hlds__goal_form__STATE_VARIABLE_ModuleInfo_0_3;
          }
        else
          {
            MR_Word hlds__goal_form__Goal_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word hlds__goal_form__Goals_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word hlds__goal_form__GoalExpr_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Goal_8, (MR_Integer) 0)));
            MR_Word hlds__goal_form__GoalInfo_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Goal_8, (MR_Integer) 1)));
            MR_Word hlds__goal_form__Determinism_23;

            {
              hlds__goal_form__Determinism_23 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(hlds__goal_form__GoalInfo_21);
            }
            hlds__goal_form__succeeded = (hlds__goal_form__Determinism_23 == (MR_Integer) 6);
            if (hlds__goal_form__succeeded)
              {
                *hlds__goal_form__HeadVar__2_2 = (MR_Integer) 0;
                *hlds__goal_form__STATE_VARIABLE_ModuleInfo_4 = hlds__goal_form__STATE_VARIABLE_ModuleInfo_0_3;
              }
            else
              {
                MR_Word hlds__goal_form__Result0_25;
                MR_Word hlds__goal_form__STATE_VARIABLE_ModuleInfo_15_26;

                {
                  hlds__goal_form__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_99_97_110_95_116_104_114_111_119_95_50_95_95_91_50_93_95_48_5_p_0(hlds__goal_form__GoalExpr_20, &hlds__goal_form__Result0_25, hlds__goal_form__STATE_VARIABLE_ModuleInfo_0_3, &hlds__goal_form__STATE_VARIABLE_ModuleInfo_15_26);
                }
                switch (hlds__goal_form__Result0_25) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      *hlds__goal_form__HeadVar__2_2 = (MR_Integer) 0;
                      *hlds__goal_form__STATE_VARIABLE_ModuleInfo_4 = hlds__goal_form__STATE_VARIABLE_ModuleInfo_15_26;
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      /* direct tailcall eliminated */
                      {
                        MR_Word hlds__goal_form__HeadVar__1__tmp_copy_1 = hlds__goal_form__Goals_9;
                        MR_Word hlds__goal_form__STATE_VARIABLE_ModuleInfo_0__tmp_copy_3 = hlds__goal_form__STATE_VARIABLE_ModuleInfo_15_26;

                        hlds__goal_form__STATE_VARIABLE_ModuleInfo_0_3 = hlds__goal_form__STATE_VARIABLE_ModuleInfo_0__tmp_copy_3;
                        hlds__goal_form__HeadVar__1_1 = hlds__goal_form__HeadVar__1__tmp_copy_1;
                      }
                      continue;
                    }
                    break;
                }
              }
          }
      }
      break;
    }
}

static MR_bool MR_CALL 
hlds__goal_form__only_constant_goals_3_p_0(
  MR_Word hlds__goal_form__HeadVar__1_1,
  MR_Word hlds__goal_form__STATE_VARIABLE_ToAssignVars_0_2,
  MR_Word * hlds__goal_form__STATE_VARIABLE_ToAssignVars_3)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool hlds__goal_form__succeeded;

        if ((hlds__goal_form__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *hlds__goal_form__STATE_VARIABLE_ToAssignVars_3 = hlds__goal_form__STATE_VARIABLE_ToAssignVars_0_2;
            hlds__goal_form__succeeded = MR_TRUE;
          }
        else
          {
            MR_Word hlds__goal_form__TypeCtorInfo_31_31;
            MR_Word hlds__goal_form__Goal_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word hlds__goal_form__Goals_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word hlds__goal_form__GoalExpr_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Goal_7, (MR_Integer) 0)));
            MR_Word hlds__goal_form__Var_17;
            MR_Word hlds__goal_form__STATE_VARIABLE_ToAssignVars_29_29;
            MR_Word hlds__goal_form__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Goal_7, (MR_Integer) 1)));

            if (((MR_tag((MR_Word) hlds__goal_form__GoalExpr_10)) == (MR_mktag((MR_Integer) 1))))
              {
                MR_Word hlds__goal_form__Unification_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__GoalExpr_10, (MR_Integer) 3)));
                MR_Word hlds__goal_form__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__GoalExpr_10, (MR_Integer) 0)));
                MR_Word hlds__goal_form__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__GoalExpr_10, (MR_Integer) 1)));
                MR_Word hlds__goal_form__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__GoalExpr_10, (MR_Integer) 2)));
                MR_Word hlds__goal_form__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__GoalExpr_10, (MR_Integer) 4)));
                MR_Word hlds__goal_form__V_18_18;
                MR_Word hlds__goal_form__V_19_19;
                MR_Word hlds__goal_form__V_20_20;
                MR_Word hlds__goal_form__V_21_21;
                MR_Word hlds__goal_form__V_22_22;
                MR_Word hlds__goal_form__V_23_23;

                hlds__goal_form__succeeded = ((MR_tag((MR_Word) hlds__goal_form__Unification_15)) == (MR_mktag((MR_Integer) 0)));
                if (hlds__goal_form__succeeded)
                  {
                    hlds__goal_form__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Unification_15, (MR_Integer) 0)));
                    hlds__goal_form__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Unification_15, (MR_Integer) 1)));
                    hlds__goal_form__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Unification_15, (MR_Integer) 2)));
                    hlds__goal_form__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Unification_15, (MR_Integer) 3)));
                    hlds__goal_form__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Unification_15, (MR_Integer) 4)));
                    hlds__goal_form__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Unification_15, (MR_Integer) 5)));
                    hlds__goal_form__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Unification_15, (MR_Integer) 6)));
                  }
              }
            else
            if (((((MR_tag((MR_Word) hlds__goal_form__GoalExpr_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_10, (MR_Integer) 0)))) == (MR_Integer) 5))))
              {
                MR_Word hlds__goal_form__Reason_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_10, (MR_Integer) 1)));
                MR_Word hlds__goal_form__V_28_28;
                MR_Word hlds__goal_form__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_10, (MR_Integer) 2)));

                hlds__goal_form__succeeded = ((((MR_tag((MR_Word) hlds__goal_form__Reason_24)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__Reason_24, (MR_Integer) 0)))) == (MR_Integer) 5)));
                if (hlds__goal_form__succeeded)
                  {
                    hlds__goal_form__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__Reason_24, (MR_Integer) 1)));
                    hlds__goal_form__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__Reason_24, (MR_Integer) 2)));
                    hlds__goal_form__succeeded = (hlds__goal_form__V_28_28 == (MR_Integer) 1);
                  }
              }
            else
              hlds__goal_form__succeeded = MR_FALSE;
            if (hlds__goal_form__succeeded)
              {
                hlds__goal_form__TypeCtorInfo_31_31 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
                {
                  parse_tree__set_of_var__delete_3_p_0(hlds__goal_form__TypeCtorInfo_31_31, hlds__goal_form__Var_17, hlds__goal_form__STATE_VARIABLE_ToAssignVars_0_2, &hlds__goal_form__STATE_VARIABLE_ToAssignVars_29_29);
                }
                /* direct tailcall eliminated */
                {
                  MR_Word hlds__goal_form__HeadVar__1__tmp_copy_1 = hlds__goal_form__Goals_8;
                  MR_Word hlds__goal_form__STATE_VARIABLE_ToAssignVars_0__tmp_copy_2 = hlds__goal_form__STATE_VARIABLE_ToAssignVars_29_29;

                  hlds__goal_form__STATE_VARIABLE_ToAssignVars_0_2 = hlds__goal_form__STATE_VARIABLE_ToAssignVars_0__tmp_copy_2;
                  hlds__goal_form__HeadVar__1_1 = hlds__goal_form__HeadVar__1__tmp_copy_1;
                }
                continue;
              }
          }
        return hlds__goal_form__succeeded;
      }
      break;
    }
}

MR_Word MR_CALL 
hlds__goal_form__goal_expr_has_subgoals_1_f_0(
  MR_Word hlds__goal_form__GoalExpr_3)
{
  {
    MR_bool hlds__goal_form__succeeded;
    MR_Word hlds__goal_form__HasSubGoals_4;

    switch (MR_tag((MR_Word) hlds__goal_form__GoalExpr_3)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        hlds__goal_form__HasSubGoals_4 = (MR_Integer) 0;
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        hlds__goal_form__HasSubGoals_4 = (MR_Integer) 1;
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_3, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
            hlds__goal_form__HasSubGoals_4 = (MR_Integer) 1;
            break;
          case (MR_Integer) 2:
            {
              MR_Word hlds__goal_form__SubGoals_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_3, (MR_Integer) 2)));
              MR_Word hlds__goal_form__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_3, (MR_Integer) 1)));

              if ((hlds__goal_form__SubGoals_29 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                hlds__goal_form__HasSubGoals_4 = (MR_Integer) 1;
              else
                hlds__goal_form__HasSubGoals_4 = (MR_Integer) 0;
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word hlds__goal_form__SubGoals_61 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_3, (MR_Integer) 1)));

              if ((hlds__goal_form__SubGoals_61 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                hlds__goal_form__HasSubGoals_4 = (MR_Integer) 1;
              else
                hlds__goal_form__HasSubGoals_4 = (MR_Integer) 0;
            }
            break;
          case (MR_Integer) 4:
          case (MR_Integer) 5:
          case (MR_Integer) 6:
            hlds__goal_form__HasSubGoals_4 = (MR_Integer) 0;
            break;
          case (MR_Integer) 7:
            hlds__goal_form__HasSubGoals_4 = (MR_Integer) 0;
            break;
        }
        break;
    }
    return hlds__goal_form__HasSubGoals_4;
  }
}

MR_Word MR_CALL 
hlds__goal_form__goal_has_foreign_1_f_0(
  MR_Word hlds__goal_form__Goal_3)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool hlds__goal_form__succeeded;
        MR_Word hlds__goal_form__HasForeign_4;
        MR_Word hlds__goal_form__GoalExpr_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Goal_3, (MR_Integer) 0)));
        MR_Word hlds__goal_form__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Goal_3, (MR_Integer) 1)));

        switch (MR_tag((MR_Word) hlds__goal_form__GoalExpr_5)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word hlds__goal_form__SubGoal_28 = (MR_Word) MR_body(((MR_Word) hlds__goal_form__GoalExpr_5), (MR_Integer) 0);

              /* direct tailcall eliminated */
              {
                MR_Word hlds__goal_form__Goal__tmp_copy_3 = hlds__goal_form__SubGoal_28;

                hlds__goal_form__Goal_3 = hlds__goal_form__Goal__tmp_copy_3;
              }
              continue;
            }
            break;
          case (MR_Integer) 1:
          case (MR_Integer) 2:
            hlds__goal_form__HasForeign_4 = (MR_Integer) 0;
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_5, (MR_Integer) 0)))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                hlds__goal_form__HasForeign_4 = (MR_Integer) 0;
                break;
              case (MR_Integer) 1:
                hlds__goal_form__HasForeign_4 = (MR_Integer) 1;
                break;
              case (MR_Integer) 2:
                {
                  MR_Word hlds__goal_form__Goals_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_5, (MR_Integer) 2)));
                  MR_Word hlds__goal_form__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_5, (MR_Integer) 1)));

                  {
                    hlds__goal_form__HasForeign_4 = hlds__goal_form__goal_list_has_foreign_1_f_0(hlds__goal_form__Goals_24);
                  }
                }
                break;
              case (MR_Integer) 3:
                {
                  MR_Word hlds__goal_form__Goals_60 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_5, (MR_Integer) 1)));

                  {
                    hlds__goal_form__HasForeign_4 = hlds__goal_form__goal_list_has_foreign_1_f_0(hlds__goal_form__Goals_60);
                  }
                }
                break;
              case (MR_Integer) 4:
                {
                  MR_Word hlds__goal_form__Cases_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_5, (MR_Integer) 3)));
                  MR_Word hlds__goal_form__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_5, (MR_Integer) 1)));
                  MR_Word hlds__goal_form__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_5, (MR_Integer) 2)));

                  {
                    hlds__goal_form__HasForeign_4 = hlds__goal_form__case_list_has_foreign_1_f_0(hlds__goal_form__Cases_27);
                  }
                }
                break;
              case (MR_Integer) 5:
                {
                  MR_Word hlds__goal_form__Reason_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_5, (MR_Integer) 1)));
                  MR_Word hlds__goal_form__SubGoal_61 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_5, (MR_Integer) 2)));
                  MR_Word hlds__goal_form__FGT_31;
                  MR_Word hlds__goal_form__V_30_30;

                  hlds__goal_form__succeeded = ((((MR_tag((MR_Word) hlds__goal_form__Reason_29)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__Reason_29, (MR_Integer) 0)))) == (MR_Integer) 5)));
                  if (hlds__goal_form__succeeded)
                    {
                      hlds__goal_form__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__Reason_29, (MR_Integer) 1)));
                      hlds__goal_form__FGT_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__Reason_29, (MR_Integer) 2)));
                      switch (hlds__goal_form__FGT_31) {
                        default:
                          hlds__goal_form__succeeded = MR_FALSE;
                          break;
                        case (MR_Integer) 1:
                          hlds__goal_form__succeeded = MR_TRUE;
                          break;
                        case (MR_Integer) 2:
                          hlds__goal_form__succeeded = MR_TRUE;
                          break;
                      }
                    }
                  if (hlds__goal_form__succeeded)
                    hlds__goal_form__HasForeign_4 = (MR_Integer) 0;
                  else
                    {
                      /* direct tailcall eliminated */
                      {
                        MR_Word hlds__goal_form__Goal__tmp_copy_3 = hlds__goal_form__SubGoal_61;

                        hlds__goal_form__Goal_3 = hlds__goal_form__Goal__tmp_copy_3;
                      }
                      continue;
                    }
                }
                break;
              case (MR_Integer) 6:
                {
                  MR_Word hlds__goal_form__Cond_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_5, (MR_Integer) 2)));
                  MR_Word hlds__goal_form__Then_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_5, (MR_Integer) 3)));
                  MR_Word hlds__goal_form__Else_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_5, (MR_Integer) 4)));
                  MR_Word hlds__goal_form__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_5, (MR_Integer) 1)));

                  {
                    MR_Word hlds__goal_form__V_59_59;

                    {
                      hlds__goal_form__V_59_59 = hlds__goal_form__goal_has_foreign_1_f_0(hlds__goal_form__Cond_33);
                    }
                    hlds__goal_form__succeeded = (hlds__goal_form__V_59_59 == (MR_Integer) 1);
                  }
                  if (!(hlds__goal_form__succeeded))
                    {
                      {
                        MR_Word hlds__goal_form__V_58_58;

                        {
                          hlds__goal_form__V_58_58 = hlds__goal_form__goal_has_foreign_1_f_0(hlds__goal_form__Then_34);
                        }
                        hlds__goal_form__succeeded = (hlds__goal_form__V_58_58 == (MR_Integer) 1);
                      }
                      if (!(hlds__goal_form__succeeded))
                        {
                          MR_Word hlds__goal_form__V_57_57;

                          {
                            hlds__goal_form__V_57_57 = hlds__goal_form__goal_has_foreign_1_f_0(hlds__goal_form__Else_35);
                          }
                          hlds__goal_form__succeeded = (hlds__goal_form__V_57_57 == (MR_Integer) 1);
                        }
                    }
                  if (hlds__goal_form__succeeded)
                    hlds__goal_form__HasForeign_4 = (MR_Integer) 1;
                  else
                    hlds__goal_form__HasForeign_4 = (MR_Integer) 0;
                }
                break;
              case (MR_Integer) 7:
                {
                  MR_Word hlds__goal_form__ShortHand_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_5, (MR_Integer) 1)));

                  switch (MR_tag((MR_Word) hlds__goal_form__ShortHand_43)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        MR_Word hlds__goal_form__GoalA_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__ShortHand_43, (MR_Integer) 0)));
                        MR_Word hlds__goal_form__GoalB_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__ShortHand_43, (MR_Integer) 1)));
                        MR_Word hlds__goal_form__V_55_55;
                        MR_Word hlds__goal_form__V_56_56;

                        {
                          hlds__goal_form__V_55_55 = hlds__goal_form__goal_has_foreign_1_f_0(hlds__goal_form__GoalA_53);
                        }
                        {
                          hlds__goal_form__V_56_56 = hlds__goal_form__goal_has_foreign_1_f_0(hlds__goal_form__GoalB_54);
                        }
                        {
                          hlds__goal_form__HasForeign_4 = mercury__bool__or_2_f_0(hlds__goal_form__V_55_55, hlds__goal_form__V_56_56);
                        }
                      }
                      break;
                    case (MR_Integer) 1:
                      hlds__goal_form__HasForeign_4 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 2:
                      {
                        MR_Word hlds__goal_form__SubGoal_62 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__ShortHand_43, (MR_Integer) 2)));
                        MR_Word hlds__goal_form__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__ShortHand_43, (MR_Integer) 0)));
                        MR_Word hlds__goal_form__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__ShortHand_43, (MR_Integer) 1)));

                        /* direct tailcall eliminated */
                        {
                          MR_Word hlds__goal_form__Goal__tmp_copy_3 = hlds__goal_form__SubGoal_62;

                          hlds__goal_form__Goal_3 = hlds__goal_form__Goal__tmp_copy_3;
                        }
                        continue;
                      }
                      break;
                  }
                }
                break;
            }
            break;
        }
        return hlds__goal_form__HasForeign_4;
      }
      break;
    }
}

MR_Word MR_CALL 
hlds__goal_form__goal_may_modify_trail_1_f_0(
  MR_Word hlds__goal_form__GoalInfo_3)
{
  {
    MR_bool hlds__goal_form__succeeded;
    MR_Word hlds__goal_form__HeadVar__2_2;
    MR_Word hlds__goal_form__V_4_4;

    {
      hlds__goal_form__succeeded = hlds__hlds_goal__goal_info_has_feature_2_p_0(hlds__goal_form__GoalInfo_3, (MR_Integer) 15);
    }
    if (hlds__goal_form__succeeded)
      hlds__goal_form__V_4_4 = (MR_Integer) 1;
    else
      hlds__goal_form__V_4_4 = (MR_Integer) 0;
    {
      hlds__goal_form__HeadVar__2_2 = mercury__bool__not_1_f_0(hlds__goal_form__V_4_4);
    }
    return hlds__goal_form__HeadVar__2_2;
  }
}

MR_Word MR_CALL 
hlds__goal_form__goal_cannot_modify_trail_1_f_0(
  MR_Word hlds__goal_form__GoalInfo_3)
{
  {
    MR_bool hlds__goal_form__succeeded;
    MR_Word hlds__goal_form__HeadVar__2_2;

    {
      hlds__goal_form__succeeded = hlds__hlds_goal__goal_info_has_feature_2_p_0(hlds__goal_form__GoalInfo_3, (MR_Integer) 15);
    }
    if (hlds__goal_form__succeeded)
      hlds__goal_form__HeadVar__2_2 = (MR_Integer) 1;
    else
      hlds__goal_form__HeadVar__2_2 = (MR_Integer) 0;
    return hlds__goal_form__HeadVar__2_2;
  }
}

void MR_CALL 
hlds__goal_form__count_recursive_calls_5_p_0(
  MR_Word hlds__goal_form__Goal_6,
  MR_Word hlds__goal_form__PredId_7,
  MR_Integer hlds__goal_form__ProcId_8,
  MR_Integer * hlds__goal_form__Min_9,
  MR_Integer * hlds__goal_form__Max_10)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool hlds__goal_form__succeeded;
        MR_Word hlds__goal_form__GoalExpr_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Goal_6, (MR_Integer) 0)));
        MR_Word hlds__goal_form__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Goal_6, (MR_Integer) 1)));

        switch (MR_tag((MR_Word) hlds__goal_form__GoalExpr_11)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word hlds__goal_form__SubGoal_54 = (MR_Word) MR_body(((MR_Word) hlds__goal_form__GoalExpr_11), (MR_Integer) 0);

              /* direct tailcall eliminated */
              {
                MR_Word hlds__goal_form__Goal__tmp_copy_6 = hlds__goal_form__SubGoal_54;

                hlds__goal_form__Goal_6 = hlds__goal_form__Goal__tmp_copy_6;
              }
              continue;
            }
            break;
          case (MR_Integer) 1:
            {
              *hlds__goal_form__Min_9 = (MR_Integer) 0;
              *hlds__goal_form__Max_10 = (MR_Integer) 0;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word hlds__goal_form__CallPredId_30 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__GoalExpr_11, (MR_Integer) 0)));
              MR_Integer hlds__goal_form__CallProcId_31 = ((MR_Integer) (MR_hl_field(MR_mktag(2), hlds__goal_form__GoalExpr_11, (MR_Integer) 1)));
              MR_Word hlds__goal_form__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__GoalExpr_11, (MR_Integer) 2)));
              MR_Word hlds__goal_form__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__GoalExpr_11, (MR_Integer) 3)));
              MR_Word hlds__goal_form__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__GoalExpr_11, (MR_Integer) 4)));
              MR_Word hlds__goal_form__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__GoalExpr_11, (MR_Integer) 5)));

              {
                hlds__goal_form__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(hlds__goal_form__PredId_7, hlds__goal_form__CallPredId_30);
              }
              if (hlds__goal_form__succeeded)
                hlds__goal_form__succeeded = (hlds__goal_form__ProcId_8 == hlds__goal_form__CallProcId_31);
              if (hlds__goal_form__succeeded)
                *hlds__goal_form__Min_9 = (MR_Integer) 1;
              else
                *hlds__goal_form__Min_9 = (MR_Integer) 0;
              *hlds__goal_form__Max_10 = *hlds__goal_form__Min_9;
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_11, (MR_Integer) 0)))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
              case (MR_Integer) 1:
                {
                  *hlds__goal_form__Min_9 = (MR_Integer) 0;
                  *hlds__goal_form__Max_10 = (MR_Integer) 0;
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word hlds__goal_form__Goals_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_11, (MR_Integer) 2)));
                  MR_Word hlds__goal_form__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_11, (MR_Integer) 1)));

                  {
                    hlds__goal_form__count_recursive_calls_conj_7_p_0(hlds__goal_form__Goals_38, hlds__goal_form__PredId_7, hlds__goal_form__ProcId_8, (MR_Integer) 0, (MR_Integer) 0, hlds__goal_form__Min_9, hlds__goal_form__Max_10);
                  }
                }
                break;
              case (MR_Integer) 3:
                {
                  MR_Word hlds__goal_form__Goals_76 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_11, (MR_Integer) 1)));

                  {
                    hlds__goal_form__count_recursive_calls_disj_5_p_0(hlds__goal_form__Goals_76, hlds__goal_form__PredId_7, hlds__goal_form__ProcId_8, hlds__goal_form__Min_9, hlds__goal_form__Max_10);
                  }
                }
                break;
              case (MR_Integer) 4:
                {
                  MR_Word hlds__goal_form__Cases_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_11, (MR_Integer) 3)));
                  MR_Word hlds__goal_form__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_11, (MR_Integer) 1)));
                  MR_Word hlds__goal_form__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_11, (MR_Integer) 2)));

                  {
                    hlds__goal_form__count_recursive_calls_cases_5_p_0(hlds__goal_form__Cases_41, hlds__goal_form__PredId_7, hlds__goal_form__ProcId_8, hlds__goal_form__Min_9, hlds__goal_form__Max_10);
                  }
                }
                break;
              case (MR_Integer) 5:
                {
                  MR_Word hlds__goal_form__Reason_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_11, (MR_Integer) 1)));
                  MR_Word hlds__goal_form__SubGoal_77 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_11, (MR_Integer) 2)));
                  MR_Word hlds__goal_form__FGT_57;
                  MR_Word hlds__goal_form__V_56_56;

                  hlds__goal_form__succeeded = ((((MR_tag((MR_Word) hlds__goal_form__Reason_55)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__Reason_55, (MR_Integer) 0)))) == (MR_Integer) 5)));
                  if (hlds__goal_form__succeeded)
                    {
                      hlds__goal_form__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__Reason_55, (MR_Integer) 1)));
                      hlds__goal_form__FGT_57 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__Reason_55, (MR_Integer) 2)));
                      switch (hlds__goal_form__FGT_57) {
                        default:
                          hlds__goal_form__succeeded = MR_FALSE;
                          break;
                        case (MR_Integer) 1:
                          hlds__goal_form__succeeded = MR_TRUE;
                          break;
                        case (MR_Integer) 2:
                          hlds__goal_form__succeeded = MR_TRUE;
                          break;
                      }
                    }
                  if (hlds__goal_form__succeeded)
                    {
                      *hlds__goal_form__Min_9 = (MR_Integer) 0;
                      *hlds__goal_form__Max_10 = (MR_Integer) 0;
                    }
                  else
                    {
                      /* direct tailcall eliminated */
                      {
                        MR_Word hlds__goal_form__Goal__tmp_copy_6 = hlds__goal_form__SubGoal_77;

                        hlds__goal_form__Goal_6 = hlds__goal_form__Goal__tmp_copy_6;
                      }
                      continue;
                    }
                }
                break;
              case (MR_Integer) 6:
                {
                  MR_Word hlds__goal_form__Cond_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_11, (MR_Integer) 2)));
                  MR_Word hlds__goal_form__Then_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_11, (MR_Integer) 3)));
                  MR_Word hlds__goal_form__Else_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_11, (MR_Integer) 4)));
                  MR_Integer hlds__goal_form__CMin_46;
                  MR_Integer hlds__goal_form__CMax_47;
                  MR_Integer hlds__goal_form__TMin_48;
                  MR_Integer hlds__goal_form__TMax_49;
                  MR_Integer hlds__goal_form__EMin_50;
                  MR_Integer hlds__goal_form__EMax_51;
                  MR_Integer hlds__goal_form__CTMin_52;
                  MR_Integer hlds__goal_form__CTMax_53;
                  MR_Word hlds__goal_form__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_11, (MR_Integer) 1)));

                  {
                    hlds__goal_form__count_recursive_calls_5_p_0(hlds__goal_form__Cond_43, hlds__goal_form__PredId_7, hlds__goal_form__ProcId_8, &hlds__goal_form__CMin_46, &hlds__goal_form__CMax_47);
                  }
                  {
                    hlds__goal_form__count_recursive_calls_5_p_0(hlds__goal_form__Then_44, hlds__goal_form__PredId_7, hlds__goal_form__ProcId_8, &hlds__goal_form__TMin_48, &hlds__goal_form__TMax_49);
                  }
                  {
                    hlds__goal_form__count_recursive_calls_5_p_0(hlds__goal_form__Else_45, hlds__goal_form__PredId_7, hlds__goal_form__ProcId_8, &hlds__goal_form__EMin_50, &hlds__goal_form__EMax_51);
                  }
                  hlds__goal_form__CTMin_52 = (hlds__goal_form__CMin_46 + hlds__goal_form__TMin_48);
                  hlds__goal_form__CTMax_53 = (hlds__goal_form__CMax_47 + hlds__goal_form__TMax_49);
                  {
                    mercury__int__min_3_p_0(hlds__goal_form__CTMin_52, hlds__goal_form__EMin_50, hlds__goal_form__Min_9);
                  }
                  {
                    mercury__int__max_3_p_0(hlds__goal_form__CTMax_53, hlds__goal_form__EMax_51, hlds__goal_form__Max_10);
                  }
                }
                break;
              case (MR_Integer) 7:
                {
                  MR_Word hlds__goal_form__ShortHand_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_11, (MR_Integer) 1)));

                  switch (MR_tag((MR_Word) hlds__goal_form__ShortHand_58)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        {
                          mercury__require__unexpected_3_p_0((MR_String) "hlds.goal_form", (MR_String) "predicate \140hlds.goal_form.count_recursive_calls\'/5", (MR_String) "bi_implication");
                          return;
                        }
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        MR_Word hlds__goal_form__Goal_84 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__ShortHand_58, (MR_Integer) 4)));
                        MR_Word hlds__goal_form__Goals_85 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__ShortHand_58, (MR_Integer) 5)));
                        MR_Word hlds__goal_form__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__ShortHand_58, (MR_Integer) 0)));
                        MR_Word hlds__goal_form__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__ShortHand_58, (MR_Integer) 1)));
                        MR_Word hlds__goal_form__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__ShortHand_58, (MR_Integer) 2)));
                        MR_Word hlds__goal_form__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__ShortHand_58, (MR_Integer) 3)));
                        MR_Word hlds__goal_form__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__ShortHand_58, (MR_Integer) 6)));

                        if ((hlds__goal_form__Goals_85 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                          {
                            /* direct tailcall eliminated */
                            {
                              MR_Word hlds__goal_form__Goal__tmp_copy_6 = hlds__goal_form__Goal_84;

                              hlds__goal_form__Goal_6 = hlds__goal_form__Goal__tmp_copy_6;
                            }
                            continue;
                          }
                        else
                          {
                            MR_Integer hlds__goal_form__Min0_92;
                            MR_Integer hlds__goal_form__Max0_93;
                            MR_Integer hlds__goal_form__Min1_94;
                            MR_Integer hlds__goal_form__Max1_95;

                            {
                              hlds__goal_form__count_recursive_calls_5_p_0(hlds__goal_form__Goal_84, hlds__goal_form__PredId_7, hlds__goal_form__ProcId_8, &hlds__goal_form__Min0_92, &hlds__goal_form__Max0_93);
                            }
                            {
                              hlds__goal_form__count_recursive_calls_disj_5_p_0(hlds__goal_form__Goals_85, hlds__goal_form__PredId_7, hlds__goal_form__ProcId_8, &hlds__goal_form__Min1_94, &hlds__goal_form__Max1_95);
                            }
                            {
                              mercury__int__min_3_p_0(hlds__goal_form__Min0_92, hlds__goal_form__Min1_94, hlds__goal_form__Min_9);
                            }
                            {
                              mercury__int__max_3_p_0(hlds__goal_form__Max0_93, hlds__goal_form__Max1_95, hlds__goal_form__Max_10);
                            }
                          }
                      }
                      break;
                    case (MR_Integer) 2:
                      {
                        MR_Word hlds__goal_form__SubGoal_78 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__ShortHand_58, (MR_Integer) 2)));
                        MR_Word hlds__goal_form__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__ShortHand_58, (MR_Integer) 0)));
                        MR_Word hlds__goal_form__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__ShortHand_58, (MR_Integer) 1)));

                        /* direct tailcall eliminated */
                        {
                          MR_Word hlds__goal_form__Goal__tmp_copy_6 = hlds__goal_form__SubGoal_78;

                          hlds__goal_form__Goal_6 = hlds__goal_form__Goal__tmp_copy_6;
                        }
                        continue;
                      }
                      break;
                  }
                }
                break;
            }
            break;
        }
      }
      break;
    }
}

MR_bool MR_CALL 
hlds__goal_form__cannot_fail_before_stack_flush_1_p_0(
  MR_Word hlds__goal_form__HeadVar__1_1)
{
  {
    MR_bool hlds__goal_form__succeeded;
    MR_Word hlds__goal_form__GoalExpr_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__HeadVar__1_1, (MR_Integer) 0)));
    MR_Word hlds__goal_form__GoalInfo_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__HeadVar__1_1, (MR_Integer) 1)));
    MR_Word hlds__goal_form__Detism_4;
    MR_Word hlds__goal_form__CanFail_5;
    MR_Word hlds__goal_form__V_6_6;

    {
      hlds__goal_form__Detism_4 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(hlds__goal_form__GoalInfo_3);
    }
    {
      parse_tree__prog_data__determinism_components_3_p_0(hlds__goal_form__Detism_4, &hlds__goal_form__CanFail_5, &hlds__goal_form__V_6_6);
    }
    switch (hlds__goal_form__CanFail_5) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word hlds__goal_form__ConjType_7;
          MR_Word hlds__goal_form__Goals_8;

          hlds__goal_form__succeeded = ((((MR_tag((MR_Word) hlds__goal_form__GoalExpr_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_2, (MR_Integer) 0)))) == (MR_Integer) 2)));
          if (hlds__goal_form__succeeded)
            {
              hlds__goal_form__ConjType_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_2, (MR_Integer) 1)));
              hlds__goal_form__Goals_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_2, (MR_Integer) 2)));
              hlds__goal_form__succeeded = (hlds__goal_form__ConjType_7 == (MR_Integer) 0);
              if (hlds__goal_form__succeeded)
                {
                  hlds__goal_form__succeeded = hlds__goal_form__cannot_fail_before_stack_flush_conj_1_p_0(hlds__goal_form__Goals_8);
                }
            }
        }
        break;
      case (MR_Integer) 1:
        hlds__goal_form__succeeded = MR_TRUE;
        break;
    }
    return hlds__goal_form__succeeded;
  }
}

MR_bool MR_CALL 
hlds__goal_form__cannot_stack_flush_1_p_0(
  MR_Word hlds__goal_form__HeadVar__1_1)
{
  {
    MR_bool hlds__goal_form__succeeded;
    MR_Word hlds__goal_form__GoalExpr_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__HeadVar__1_1, (MR_Integer) 0)));
    MR_Word hlds__goal_form__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__HeadVar__1_1, (MR_Integer) 1)));

    {
      hlds__goal_form__succeeded = hlds__goal_form__cannot_stack_flush_2_1_p_0(hlds__goal_form__GoalExpr_2);
    }
    return hlds__goal_form__succeeded;
  }
}

MR_bool MR_CALL 
hlds__goal_form__goal_list_may_allocate_heap_1_p_0(
  MR_Word hlds__goal_form__Goals_2)
{
  {
    MR_bool hlds__goal_form__succeeded;
    MR_Word hlds__goal_form__V_4_4;

    {
      hlds__goal_form__goal_list_may_allocate_heap_2_p_0(hlds__goal_form__Goals_2, &hlds__goal_form__V_4_4);
    }
    hlds__goal_form__succeeded = ((MR_Integer) 1 == hlds__goal_form__V_4_4);
    return hlds__goal_form__succeeded;
  }
}

MR_bool MR_CALL 
hlds__goal_form__goal_may_allocate_heap_1_p_0(
  MR_Word hlds__goal_form__Goal_2)
{
  {
    MR_bool hlds__goal_form__succeeded;
    MR_Word hlds__goal_form__V_4_4;
    MR_Word hlds__goal_form__GoalExpr_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Goal_2, (MR_Integer) 0)));
    MR_Word hlds__goal_form___GoalInfo_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Goal_2, (MR_Integer) 1)));

    {
      hlds__goal_form__goal_may_allocate_heap_2_2_p_0(hlds__goal_form__GoalExpr_6, &hlds__goal_form__V_4_4);
    }
    hlds__goal_form__succeeded = ((MR_Integer) 1 == hlds__goal_form__V_4_4);
    return hlds__goal_form__succeeded;
  }
}

MR_Word MR_CALL 
hlds__goal_form__goal_is_flat_1_f_0(
  MR_Word hlds__goal_form__HeadVar__1_1)
{
  {
    MR_bool hlds__goal_form__succeeded;
    MR_Word hlds__goal_form__HeadVar__2_2;
    MR_Word hlds__goal_form__GoalExpr_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__HeadVar__1_1, (MR_Integer) 0)));
    MR_Word hlds__goal_form___GoalInfo_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__HeadVar__1_1, (MR_Integer) 1)));

    {
      hlds__goal_form__HeadVar__2_2 = hlds__goal_form__goal_is_flat_expr_1_f_0(hlds__goal_form__GoalExpr_3);
    }
    return hlds__goal_form__HeadVar__2_2;
  }
}

MR_bool MR_CALL 
hlds__goal_form__goal_can_loop_or_throw_1_p_0(
  MR_Word hlds__goal_form__Goal_2)
{
  {
    MR_bool hlds__goal_form__succeeded;

    {
      hlds__goal_form__succeeded = hlds__goal_form__goal_cannot_loop_or_throw_1_p_0(hlds__goal_form__Goal_2);
    }
    hlds__goal_form__succeeded = !(hlds__goal_form__succeeded);
    return hlds__goal_form__succeeded;
  }
}

MR_bool MR_CALL 
hlds__goal_form__goal_cannot_loop_or_throw_1_p_0(
  MR_Word hlds__goal_form__Goal_2)
{
  {
    MR_bool hlds__goal_form__succeeded;
    MR_Word hlds__goal_form__V_3_3;
    MR_Word hlds__goal_form__V_6_6;
    MR_Word hlds__goal_form__GoalExpr_9;
    MR_Word hlds__goal_form__GoalInfo_10;
    MR_Word hlds__goal_form__Determinism_11;

    {
      hlds__goal_form__V_3_3 = hlds__goal_form__goal_can_loop_func_2_f_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__goal_form__Goal_2);
    }
    hlds__goal_form__succeeded = (hlds__goal_form__V_3_3 == (MR_Integer) 0);
    if (hlds__goal_form__succeeded)
      {
        hlds__goal_form__V_6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        hlds__goal_form__GoalExpr_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Goal_2, (MR_Integer) 0)));
        hlds__goal_form__GoalInfo_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Goal_2, (MR_Integer) 1)));
        {
          hlds__goal_form__Determinism_11 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(hlds__goal_form__GoalInfo_10);
        }
        hlds__goal_form__succeeded = (hlds__goal_form__Determinism_11 == (MR_Integer) 6);
        if (hlds__goal_form__succeeded)
          hlds__goal_form__succeeded = MR_FALSE;
        else
          {
            MR_Word hlds__goal_form__V_13_13;

            {
              hlds__goal_form__V_13_13 = hlds__goal_form__goal_expr_can_throw_2_f_0(hlds__goal_form__V_6_6, hlds__goal_form__GoalExpr_9);
            }
            hlds__goal_form__succeeded = (hlds__goal_form__V_13_13 == (MR_Integer) 0);
          }
      }
    return hlds__goal_form__succeeded;
  }
}

MR_bool MR_CALL 
hlds__goal_form__goal_can_loop_or_throw_2_p_0(
  MR_Word hlds__goal_form__ModuleInfo_3,
  MR_Word hlds__goal_form__Goal_4)
{
  {
    MR_bool hlds__goal_form__succeeded;

    {
      hlds__goal_form__succeeded = hlds__goal_form__goal_cannot_loop_or_throw_2_p_0(hlds__goal_form__ModuleInfo_3, hlds__goal_form__Goal_4);
    }
    hlds__goal_form__succeeded = !(hlds__goal_form__succeeded);
    return hlds__goal_form__succeeded;
  }
}

MR_bool MR_CALL 
hlds__goal_form__goal_cannot_loop_or_throw_2_p_0(
  MR_Word hlds__goal_form__ModuleInfo_3,
  MR_Word hlds__goal_form__Goal_4)
{
  {
    MR_bool hlds__goal_form__succeeded;
    MR_Word hlds__goal_form__V_5_5;
    MR_Word hlds__goal_form__V_6_6;
    MR_Word hlds__goal_form__GoalExpr_11;
    MR_Word hlds__goal_form__GoalInfo_12;
    MR_Word hlds__goal_form__Determinism_13;

    {
      hlds__goal_form__V_6_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__goal_form__V_6_6, 0) = ((MR_Box) (hlds__goal_form__ModuleInfo_3));
    }
    {
      hlds__goal_form__V_5_5 = hlds__goal_form__goal_can_loop_func_2_f_0(hlds__goal_form__V_6_6, hlds__goal_form__Goal_4);
    }
    hlds__goal_form__succeeded = (hlds__goal_form__V_5_5 == (MR_Integer) 0);
    if (hlds__goal_form__succeeded)
      {
        hlds__goal_form__GoalExpr_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Goal_4, (MR_Integer) 0)));
        hlds__goal_form__GoalInfo_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Goal_4, (MR_Integer) 1)));
        {
          hlds__goal_form__Determinism_13 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(hlds__goal_form__GoalInfo_12);
        }
        hlds__goal_form__succeeded = (hlds__goal_form__Determinism_13 == (MR_Integer) 6);
        if (hlds__goal_form__succeeded)
          hlds__goal_form__succeeded = MR_FALSE;
        else
          {
            MR_Word hlds__goal_form__V_15_15;

            {
              hlds__goal_form__V_15_15 = hlds__goal_form__goal_expr_can_throw_2_f_0(hlds__goal_form__V_6_6, hlds__goal_form__GoalExpr_11);
            }
            hlds__goal_form__succeeded = (hlds__goal_form__V_15_15 == (MR_Integer) 0);
          }
      }
    return hlds__goal_form__succeeded;
  }
}

MR_bool MR_CALL 
hlds__goal_form__goal_can_throw_2_p_0(
  MR_Word hlds__goal_form__ModuleInfo_3,
  MR_Word hlds__goal_form__Goal_4)
{
  {
    MR_bool hlds__goal_form__succeeded;
    MR_Word hlds__goal_form__V_6_6;
    MR_Word hlds__goal_form__GoalExpr_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Goal_4, (MR_Integer) 0)));
    MR_Word hlds__goal_form__GoalInfo_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Goal_4, (MR_Integer) 1)));
    MR_Word hlds__goal_form__Determinism_11;

    {
      hlds__goal_form__V_6_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__goal_form__V_6_6, 0) = ((MR_Box) (hlds__goal_form__ModuleInfo_3));
    }
    {
      hlds__goal_form__Determinism_11 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(hlds__goal_form__GoalInfo_10);
    }
    hlds__goal_form__succeeded = (hlds__goal_form__Determinism_11 == (MR_Integer) 6);
    if (hlds__goal_form__succeeded)
      hlds__goal_form__succeeded = MR_TRUE;
    else
      {
        MR_Word hlds__goal_form__V_13_13;

        {
          hlds__goal_form__V_13_13 = hlds__goal_form__goal_expr_can_throw_2_f_0(hlds__goal_form__V_6_6, hlds__goal_form__GoalExpr_9);
        }
        hlds__goal_form__succeeded = (hlds__goal_form__V_13_13 == (MR_Integer) 1);
      }
    return hlds__goal_form__succeeded;
  }
}

MR_bool MR_CALL 
hlds__goal_form__goal_cannot_throw_2_p_0(
  MR_Word hlds__goal_form__ModuleInfo_3,
  MR_Word hlds__goal_form__Goal_4)
{
  {
    MR_bool hlds__goal_form__succeeded;
    MR_Word hlds__goal_form__V_6_6;
    MR_Word hlds__goal_form__GoalExpr_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Goal_4, (MR_Integer) 0)));
    MR_Word hlds__goal_form__GoalInfo_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Goal_4, (MR_Integer) 1)));
    MR_Word hlds__goal_form__Determinism_11;

    {
      hlds__goal_form__V_6_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__goal_form__V_6_6, 0) = ((MR_Box) (hlds__goal_form__ModuleInfo_3));
    }
    {
      hlds__goal_form__Determinism_11 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(hlds__goal_form__GoalInfo_10);
    }
    hlds__goal_form__succeeded = (hlds__goal_form__Determinism_11 == (MR_Integer) 6);
    if (hlds__goal_form__succeeded)
      hlds__goal_form__succeeded = MR_FALSE;
    else
      {
        MR_Word hlds__goal_form__V_13_13;

        {
          hlds__goal_form__V_13_13 = hlds__goal_form__goal_expr_can_throw_2_f_0(hlds__goal_form__V_6_6, hlds__goal_form__GoalExpr_9);
        }
        hlds__goal_form__succeeded = (hlds__goal_form__V_13_13 == (MR_Integer) 0);
      }
    return hlds__goal_form__succeeded;
  }
}

MR_bool MR_CALL 
hlds__goal_form__goal_can_loop_2_p_0(
  MR_Word hlds__goal_form__ModuleInfo_3,
  MR_Word hlds__goal_form__Goal_4)
{
  {
    MR_bool hlds__goal_form__succeeded;
    MR_Word hlds__goal_form__V_5_5;
    MR_Word hlds__goal_form__V_6_6;

    {
      hlds__goal_form__V_6_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__goal_form__V_6_6, 0) = ((MR_Box) (hlds__goal_form__ModuleInfo_3));
    }
    {
      hlds__goal_form__V_5_5 = hlds__goal_form__goal_can_loop_func_2_f_0(hlds__goal_form__V_6_6, hlds__goal_form__Goal_4);
    }
    hlds__goal_form__succeeded = (hlds__goal_form__V_5_5 == (MR_Integer) 1);
    return hlds__goal_form__succeeded;
  }
}

MR_bool MR_CALL 
hlds__goal_form__goal_cannot_loop_2_p_0(
  MR_Word hlds__goal_form__ModuleInfo_3,
  MR_Word hlds__goal_form__Goal_4)
{
  {
    MR_bool hlds__goal_form__succeeded;
    MR_Word hlds__goal_form__V_5_5;
    MR_Word hlds__goal_form__V_6_6;

    {
      hlds__goal_form__V_6_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__goal_form__V_6_6, 0) = ((MR_Box) (hlds__goal_form__ModuleInfo_3));
    }
    {
      hlds__goal_form__V_5_5 = hlds__goal_form__goal_can_loop_func_2_f_0(hlds__goal_form__V_6_6, hlds__goal_form__Goal_4);
    }
    hlds__goal_form__succeeded = (hlds__goal_form__V_5_5 == (MR_Integer) 0);
    return hlds__goal_form__succeeded;
  }
}

void MR_CALL 
hlds__goal_form__goal_can_loop_or_throw_4_p_0(
  MR_Word hlds__goal_form__Goal_5,
  MR_Word * hlds__goal_form__Result_6,
  MR_Word hlds__goal_form__STATE_VARIABLE_ModuleInfo_0_9,
  MR_Word * hlds__goal_form__STATE_VARIABLE_ModuleInfo_10)
{
  {
    MR_bool hlds__goal_form__succeeded;
    MR_Word hlds__goal_form__V_14_14;
    MR_Word hlds__goal_form__V_15_15;

    {
      hlds__goal_form__V_15_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__goal_form__V_15_15, 0) = ((MR_Box) (hlds__goal_form__STATE_VARIABLE_ModuleInfo_0_9));
    }
    {
      hlds__goal_form__V_14_14 = hlds__goal_form__goal_can_loop_func_2_f_0(hlds__goal_form__V_15_15, hlds__goal_form__Goal_5);
    }
    hlds__goal_form__succeeded = (hlds__goal_form__V_14_14 == (MR_Integer) 0);
    if (hlds__goal_form__succeeded)
      {
        MR_Word hlds__goal_form__GoalExpr_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Goal_5, (MR_Integer) 0)));
        MR_Word hlds__goal_form__GoalInfo_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Goal_5, (MR_Integer) 1)));
        MR_Word hlds__goal_form__Determinism_22;

        {
          hlds__goal_form__Determinism_22 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(hlds__goal_form__GoalInfo_20);
        }
        hlds__goal_form__succeeded = (hlds__goal_form__Determinism_22 == (MR_Integer) 6);
        if (hlds__goal_form__succeeded)
          {
            *hlds__goal_form__STATE_VARIABLE_ModuleInfo_10 = hlds__goal_form__STATE_VARIABLE_ModuleInfo_0_9;
            *hlds__goal_form__Result_6 = (MR_Integer) 0;
          }
        else
          {
            MR_Word hlds__goal_form__ThrowResult_24;

            {
              hlds__goal_form__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_99_97_110_95_116_104_114_111_119_95_50_95_95_91_50_93_95_48_5_p_0(hlds__goal_form__GoalExpr_19, &hlds__goal_form__ThrowResult_24, hlds__goal_form__STATE_VARIABLE_ModuleInfo_0_9, hlds__goal_form__STATE_VARIABLE_ModuleInfo_10);
            }
            switch (hlds__goal_form__ThrowResult_24) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *hlds__goal_form__Result_6 = (MR_Integer) 0;
                break;
              case (MR_Integer) 1:
                *hlds__goal_form__Result_6 = (MR_Integer) 1;
                break;
            }
          }
      }
    else
      {
        *hlds__goal_form__Result_6 = (MR_Integer) 0;
        *hlds__goal_form__STATE_VARIABLE_ModuleInfo_10 = hlds__goal_form__STATE_VARIABLE_ModuleInfo_0_9;
      }
  }
}

void MR_CALL 
hlds__goal_form__goal_can_throw_4_p_0(
  MR_Word hlds__goal_form__HeadVar__1_1,
  MR_Word * hlds__goal_form__Result_7,
  MR_Word hlds__goal_form__STATE_VARIABLE_ModuleInfo_0_10,
  MR_Word * hlds__goal_form__STATE_VARIABLE_ModuleInfo_11)
{
  {
    MR_bool hlds__goal_form__succeeded;
    MR_Word hlds__goal_form__GoalExpr_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__HeadVar__1_1, (MR_Integer) 0)));
    MR_Word hlds__goal_form__GoalInfo_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__HeadVar__1_1, (MR_Integer) 1)));
    MR_Word hlds__goal_form__Determinism_9;

    {
      hlds__goal_form__Determinism_9 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(hlds__goal_form__GoalInfo_6);
    }
    hlds__goal_form__succeeded = (hlds__goal_form__Determinism_9 == (MR_Integer) 6);
    if (hlds__goal_form__succeeded)
      {
        *hlds__goal_form__Result_7 = (MR_Integer) 0;
        *hlds__goal_form__STATE_VARIABLE_ModuleInfo_11 = hlds__goal_form__STATE_VARIABLE_ModuleInfo_0_10;
      }
    else
      {
        hlds__goal_form__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_99_97_110_95_116_104_114_111_119_95_50_95_95_91_50_93_95_48_5_p_0(hlds__goal_form__GoalExpr_5, hlds__goal_form__Result_7, hlds__goal_form__STATE_VARIABLE_ModuleInfo_0_10, hlds__goal_form__STATE_VARIABLE_ModuleInfo_11);
      }
  }
}

MR_bool MR_CALL 
hlds__goal_form__all_disjuncts_are_conj_of_unify_2_p_0(
  MR_Word hlds__goal_form__HeadVar__1_1,
  MR_Word hlds__goal_form__HeadVar__2_2)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool hlds__goal_form__succeeded;

        if ((hlds__goal_form__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          hlds__goal_form__succeeded = MR_TRUE;
        else
          {
            MR_Word hlds__goal_form__TypeCtorInfo_10_14;
            MR_Word hlds__goal_form__Disjunct_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__HeadVar__2_2, (MR_Integer) 0)));
            MR_Word hlds__goal_form__Disjuncts_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__HeadVar__2_2, (MR_Integer) 1)));
            MR_Word hlds__goal_form__GoalInfo_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Disjunct_5, (MR_Integer) 1)));
            MR_Word hlds__goal_form__CodeModel_11;
            MR_Word hlds__goal_form__Conj_12;
            MR_Word hlds__goal_form__ToAssignVars_13;
            MR_Word hlds__goal_form___GoalExpr_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Disjunct_5, (MR_Integer) 0)));

            {
              hlds__goal_form__CodeModel_11 = hlds__code_model__goal_info_get_code_model_1_f_0(hlds__goal_form__GoalInfo_10);
            }
            hlds__goal_form__succeeded = (hlds__goal_form__CodeModel_11 == (MR_Integer) 0);
            if (hlds__goal_form__succeeded)
              {
                {
                  hlds__hlds_goal__goal_to_conj_list_2_p_0(hlds__goal_form__Disjunct_5, &hlds__goal_form__Conj_12);
                }
                {
                  hlds__goal_form__succeeded = hlds__goal_form__only_constant_goals_3_p_0(hlds__goal_form__Conj_12, hlds__goal_form__HeadVar__1_1, &hlds__goal_form__ToAssignVars_13);
                }
                if (hlds__goal_form__succeeded)
                  {
                    hlds__goal_form__TypeCtorInfo_10_14 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
                    {
                      hlds__goal_form__succeeded = parse_tree__set_of_var__is_empty_1_p_0(hlds__goal_form__TypeCtorInfo_10_14, hlds__goal_form__ToAssignVars_13);
                    }
                    if (hlds__goal_form__succeeded)
                      {
                        /* direct tailcall eliminated */
                        {
                          MR_Word hlds__goal_form__HeadVar__2__tmp_copy_2 = hlds__goal_form__Disjuncts_6;

                          hlds__goal_form__HeadVar__2_2 = hlds__goal_form__HeadVar__2__tmp_copy_2;
                        }
                        continue;
                      }
                  }
              }
          }
        return hlds__goal_form__succeeded;
      }
      break;
    }
}

MR_bool MR_CALL 
hlds__goal_form__goal_is_conj_of_unify_2_p_0(
  MR_Word hlds__goal_form__ToAssignVars0_3,
  MR_Word hlds__goal_form__Goal_4)
{
  {
    MR_bool hlds__goal_form__succeeded;
    MR_Word hlds__goal_form__TypeCtorInfo_10_10;
    MR_Word hlds__goal_form__GoalInfo_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Goal_4, (MR_Integer) 1)));
    MR_Word hlds__goal_form__CodeModel_7;
    MR_Word hlds__goal_form__Conj_8;
    MR_Word hlds__goal_form__ToAssignVars_9;
    MR_Word hlds__goal_form___GoalExpr_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Goal_4, (MR_Integer) 0)));

    {
      hlds__goal_form__CodeModel_7 = hlds__code_model__goal_info_get_code_model_1_f_0(hlds__goal_form__GoalInfo_6);
    }
    hlds__goal_form__succeeded = (hlds__goal_form__CodeModel_7 == (MR_Integer) 0);
    if (hlds__goal_form__succeeded)
      {
        {
          hlds__hlds_goal__goal_to_conj_list_2_p_0(hlds__goal_form__Goal_4, &hlds__goal_form__Conj_8);
        }
        {
          hlds__goal_form__succeeded = hlds__goal_form__only_constant_goals_3_p_0(hlds__goal_form__Conj_8, hlds__goal_form__ToAssignVars0_3, &hlds__goal_form__ToAssignVars_9);
        }
        if (hlds__goal_form__succeeded)
          {
            hlds__goal_form__TypeCtorInfo_10_10 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
            {
              hlds__goal_form__succeeded = parse_tree__set_of_var__is_empty_1_p_0(hlds__goal_form__TypeCtorInfo_10_10, hlds__goal_form__ToAssignVars_9);
            }
          }
      }
    return hlds__goal_form__succeeded;
  }
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

// Ensure everything is compiled with the same grade.
const char *mercury__hlds__goal_form__grade_check(void)
{
    return &MR_GRADE_VAR;
}

/* :- end_module hlds.goal_form. */
