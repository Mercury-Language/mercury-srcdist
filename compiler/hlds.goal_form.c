/*
** Automatically generated from `goal_form.m'
** by the Mercury compiler,
** version rotd-2017-07-24
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
#include "check_hlds.proc_requests.mih"
#include "hlds.code_model.mih"
#include "hlds.const_struct.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
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
#include "libs.dependency_graph.mih"
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

static void MR_CALL 
hlds__goal_form__cases_may_allocate_heap_2_p_0(
  MR_Word hlds__goal_form__HeadVar__1_1,
  MR_Word * hlds__goal_form__HeadVar__2_2);

static void MR_CALL 
hlds__goal_form__goal_list_may_allocate_heap_2_p_0(
  MR_Word hlds__goal_form__HeadVar__1_1,
  MR_Word * hlds__goal_form__HeadVar__2_2);

static void MR_CALL 
hlds__goal_form__goal_may_allocate_heap_2_p_0(
  MR_Word hlds__goal_form__HeadVar__1_1,
  MR_Word * hlds__goal_form__May_5);

static MR_Word MR_CALL 
hlds__goal_form__goal_is_flat_list_1_f_0(
  MR_Word hlds__goal_form__HeadVar__1_1);

static MR_Word MR_CALL 
hlds__goal_form__case_list_can_throw_2_f_0(
  MR_Word hlds__goal_form__MaybeModuleInfo_1,
  MR_Word hlds__goal_form__HeadVar__2_2);

static MR_Word MR_CALL 
hlds__goal_form__goal_list_can_throw_2_f_0(
  MR_Word hlds__goal_form__MaybeModuleInfo_1,
  MR_Word hlds__goal_form__HeadVar__2_2);

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
hlds__goal_form__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_99_97_110_95_116_104_114_111_119_95_50_95_95_91_50_93_95_48_5_p_0(
  MR_Word hlds__goal_form__GoalExpr_6,
  MR_Word * hlds__goal_form__Result_8,
  MR_Word hlds__goal_form__STATE_VARIABLE_ModuleInfo_0_82,
  MR_Word * hlds__goal_form__STATE_VARIABLE_ModuleInfo_83);

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
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
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
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
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
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
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
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
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
              MR_Word hlds__goal_form__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_3, (MR_Integer) 1)));

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
            MR_Word hlds__goal_form__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Case_3, (MR_Integer) 0)));
            MR_Word hlds__goal_form__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Case_3, (MR_Integer) 1)));
            MR_Word hlds__goal_form__Var_9;

            {
              hlds__goal_form__Var_9 = hlds__goal_form__goal_has_foreign_1_f_0(hlds__goal_form__Goal_8);
            }
            hlds__goal_form__succeeded = (hlds__goal_form__Var_9 == (MR_Integer) 1);
            if (hlds__goal_form__succeeded)
              hlds__goal_form__HeadVar__2_2 = (MR_Integer) 1;
            else
              {
                /* direct tailcall eliminated */
                {
                  MR_Word hlds__goal_form__next_value_of_HeadVar__1_1 = hlds__goal_form__Cases_4;

                  hlds__goal_form__HeadVar__1_1 = hlds__goal_form__next_value_of_HeadVar__1_1;
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
            MR_Word hlds__goal_form__Var_6;

            {
              hlds__goal_form__Var_6 = hlds__goal_form__goal_has_foreign_1_f_0(hlds__goal_form__Goal_3);
            }
            hlds__goal_form__succeeded = (hlds__goal_form__Var_6 == (MR_Integer) 1);
            if (hlds__goal_form__succeeded)
              hlds__goal_form__HeadVar__2_2 = (MR_Integer) 1;
            else
              {
                /* direct tailcall eliminated */
                {
                  MR_Word hlds__goal_form__next_value_of_HeadVar__1_1 = hlds__goal_form__Goals_4;

                  hlds__goal_form__HeadVar__1_1 = hlds__goal_form__next_value_of_HeadVar__1_1;
                }
                continue;
              }
          }
        return hlds__goal_form__HeadVar__2_2;
      }
      break;
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
        MR_Word hlds__goal_form__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Goal_3, (MR_Integer) 1)));

        switch (MR_tag((MR_Word) hlds__goal_form__GoalExpr_5)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word hlds__goal_form__SubGoal_28 = (MR_Word) MR_body(((MR_Word) hlds__goal_form__GoalExpr_5), (MR_Integer) 0);

              /* direct tailcall eliminated */
              {
                MR_Word hlds__goal_form__next_value_of_Goal_3 = hlds__goal_form__SubGoal_28;

                hlds__goal_form__Goal_3 = hlds__goal_form__next_value_of_Goal_3;
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
                  MR_Word hlds__goal_form__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_5, (MR_Integer) 1)));

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
                  MR_Word hlds__goal_form__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_5, (MR_Integer) 1)));
                  MR_Word hlds__goal_form__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_5, (MR_Integer) 2)));

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
                  MR_Word hlds__goal_form__Var_30;

                  hlds__goal_form__succeeded = ((((MR_tag((MR_Word) hlds__goal_form__Reason_29)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__Reason_29, (MR_Integer) 0)))) == (MR_Integer) 6)));
                  if (hlds__goal_form__succeeded)
                    {
                      hlds__goal_form__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__Reason_29, (MR_Integer) 1)));
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
                        MR_Word hlds__goal_form__next_value_of_Goal_3 = hlds__goal_form__SubGoal_61;

                        hlds__goal_form__Goal_3 = hlds__goal_form__next_value_of_Goal_3;
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
                  MR_Word hlds__goal_form__Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_5, (MR_Integer) 1)));

                  {
                    MR_Word hlds__goal_form__Var_59;

                    {
                      hlds__goal_form__Var_59 = hlds__goal_form__goal_has_foreign_1_f_0(hlds__goal_form__Cond_33);
                    }
                    hlds__goal_form__succeeded = (hlds__goal_form__Var_59 == (MR_Integer) 1);
                  }
                  if (!(hlds__goal_form__succeeded))
                    {
                      {
                        MR_Word hlds__goal_form__Var_58;

                        {
                          hlds__goal_form__Var_58 = hlds__goal_form__goal_has_foreign_1_f_0(hlds__goal_form__Then_34);
                        }
                        hlds__goal_form__succeeded = (hlds__goal_form__Var_58 == (MR_Integer) 1);
                      }
                      if (!(hlds__goal_form__succeeded))
                        {
                          MR_Word hlds__goal_form__Var_57;

                          {
                            hlds__goal_form__Var_57 = hlds__goal_form__goal_has_foreign_1_f_0(hlds__goal_form__Else_35);
                          }
                          hlds__goal_form__succeeded = (hlds__goal_form__Var_57 == (MR_Integer) 1);
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
                        MR_Word hlds__goal_form__Var_55;
                        MR_Word hlds__goal_form__Var_56;

                        {
                          hlds__goal_form__Var_55 = hlds__goal_form__goal_has_foreign_1_f_0(hlds__goal_form__GoalA_53);
                        }
                        {
                          hlds__goal_form__Var_56 = hlds__goal_form__goal_has_foreign_1_f_0(hlds__goal_form__GoalB_54);
                        }
                        {
                          hlds__goal_form__HasForeign_4 = mercury__bool__or_2_f_0(hlds__goal_form__Var_55, hlds__goal_form__Var_56);
                        }
                      }
                      break;
                    case (MR_Integer) 1:
                      hlds__goal_form__HasForeign_4 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 2:
                      {
                        MR_Word hlds__goal_form__SubGoal_62 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__ShortHand_43, (MR_Integer) 2)));
                        MR_Word hlds__goal_form__Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__ShortHand_43, (MR_Integer) 0)));
                        MR_Word hlds__goal_form__Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__ShortHand_43, (MR_Integer) 1)));

                        /* direct tailcall eliminated */
                        {
                          MR_Word hlds__goal_form__next_value_of_Goal_3 = hlds__goal_form__SubGoal_62;

                          hlds__goal_form__Goal_3 = hlds__goal_form__next_value_of_Goal_3;
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
    MR_Word hlds__goal_form__Var_4;

    {
      hlds__goal_form__succeeded = hlds__hlds_goal__goal_info_has_feature_2_p_0(hlds__goal_form__GoalInfo_3, (MR_Integer) 16);
    }
    if (hlds__goal_form__succeeded)
      hlds__goal_form__Var_4 = (MR_Integer) 1;
    else
      hlds__goal_form__Var_4 = (MR_Integer) 0;
    {
      hlds__goal_form__HeadVar__2_2 = mercury__bool__not_1_f_0(hlds__goal_form__Var_4);
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
      hlds__goal_form__succeeded = hlds__hlds_goal__goal_info_has_feature_2_p_0(hlds__goal_form__GoalInfo_3, (MR_Integer) 16);
    }
    if (hlds__goal_form__succeeded)
      hlds__goal_form__HeadVar__2_2 = (MR_Integer) 1;
    else
      hlds__goal_form__HeadVar__2_2 = (MR_Integer) 0;
    return hlds__goal_form__HeadVar__2_2;
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
        MR_Word hlds__goal_form__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word hlds__goal_form__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Var_27, (MR_Integer) 0)));
        MR_Word hlds__goal_form__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Var_27, (MR_Integer) 1)));

        hlds__goal_form__Goal_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Var_27, (MR_Integer) 2)));
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
            MR_Word hlds__goal_form__Var_49;
            MR_Word hlds__goal_form__Var_35;
            MR_Word hlds__goal_form__Var_36;

            {
              hlds__goal_form__count_recursive_calls_5_p_0(hlds__goal_form__Goal_15, hlds__goal_form__PredId_2, hlds__goal_form__ProcId_3, &hlds__goal_form__Min0_23, &hlds__goal_form__Max0_24);
            }
            hlds__goal_form__Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__Cases_16, (MR_Integer) 0)));
            hlds__goal_form__Cases_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__Cases_16, (MR_Integer) 1)));
            hlds__goal_form__Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Var_49, (MR_Integer) 0)));
            hlds__goal_form__Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Var_49, (MR_Integer) 1)));
            hlds__goal_form__Goal_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Var_49, (MR_Integer) 2)));
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
              MR_Word hlds__goal_form__next_value_of_HeadVar__1_1 = hlds__goal_form__Goals_13;
              MR_Integer hlds__goal_form__next_value_of_HeadVar__4_4 = hlds__goal_form__Min2_22;
              MR_Integer hlds__goal_form__next_value_of_HeadVar__5_5 = hlds__goal_form__Max2_23;

              hlds__goal_form__HeadVar__5_5 = hlds__goal_form__next_value_of_HeadVar__5_5;
              hlds__goal_form__HeadVar__4_4 = hlds__goal_form__next_value_of_HeadVar__4_4;
              hlds__goal_form__HeadVar__1_1 = hlds__goal_form__next_value_of_HeadVar__1_1;
            }
            continue;
          }
      }
      break;
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
        MR_Word hlds__goal_form__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Goal_6, (MR_Integer) 1)));

        switch (MR_tag((MR_Word) hlds__goal_form__GoalExpr_11)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word hlds__goal_form__SubGoal_54 = (MR_Word) MR_body(((MR_Word) hlds__goal_form__GoalExpr_11), (MR_Integer) 0);

              /* direct tailcall eliminated */
              {
                MR_Word hlds__goal_form__next_value_of_Goal_6 = hlds__goal_form__SubGoal_54;

                hlds__goal_form__Goal_6 = hlds__goal_form__next_value_of_Goal_6;
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
              MR_Word hlds__goal_form__Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__GoalExpr_11, (MR_Integer) 2)));
              MR_Word hlds__goal_form__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__GoalExpr_11, (MR_Integer) 3)));
              MR_Word hlds__goal_form__Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__GoalExpr_11, (MR_Integer) 4)));
              MR_Word hlds__goal_form__Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__GoalExpr_11, (MR_Integer) 5)));

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
                  MR_Word hlds__goal_form__Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_11, (MR_Integer) 1)));

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
                  MR_Word hlds__goal_form__Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_11, (MR_Integer) 1)));
                  MR_Word hlds__goal_form__Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_11, (MR_Integer) 2)));

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
                  MR_Word hlds__goal_form__Var_56;

                  hlds__goal_form__succeeded = ((((MR_tag((MR_Word) hlds__goal_form__Reason_55)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__Reason_55, (MR_Integer) 0)))) == (MR_Integer) 6)));
                  if (hlds__goal_form__succeeded)
                    {
                      hlds__goal_form__Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__Reason_55, (MR_Integer) 1)));
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
                        MR_Word hlds__goal_form__next_value_of_Goal_6 = hlds__goal_form__SubGoal_77;

                        hlds__goal_form__Goal_6 = hlds__goal_form__next_value_of_Goal_6;
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
                  MR_Word hlds__goal_form__Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_11, (MR_Integer) 1)));

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
                        MR_Word hlds__goal_form__Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__ShortHand_58, (MR_Integer) 0)));
                        MR_Word hlds__goal_form__Var_60 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__ShortHand_58, (MR_Integer) 1)));
                        MR_Word hlds__goal_form__Var_61 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__ShortHand_58, (MR_Integer) 2)));
                        MR_Word hlds__goal_form__Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__ShortHand_58, (MR_Integer) 3)));
                        MR_Word hlds__goal_form__Var_65 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__ShortHand_58, (MR_Integer) 6)));

                        if ((hlds__goal_form__Goals_85 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                          {
                            /* direct tailcall eliminated */
                            {
                              MR_Word hlds__goal_form__next_value_of_Goal_6 = hlds__goal_form__Goal_84;

                              hlds__goal_form__Goal_6 = hlds__goal_form__next_value_of_Goal_6;
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
                        MR_Word hlds__goal_form__Var_66 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__ShortHand_58, (MR_Integer) 0)));
                        MR_Word hlds__goal_form__Var_67 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__ShortHand_58, (MR_Integer) 1)));

                        /* direct tailcall eliminated */
                        {
                          MR_Word hlds__goal_form__next_value_of_Goal_6 = hlds__goal_form__SubGoal_78;

                          hlds__goal_form__Goal_6 = hlds__goal_form__next_value_of_Goal_6;
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
    MR_Word hlds__goal_form__Var_6;

    {
      hlds__goal_form__Detism_4 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(hlds__goal_form__GoalInfo_3);
    }
    {
      parse_tree__prog_data__determinism_components_3_p_0(hlds__goal_form__Detism_4, &hlds__goal_form__CanFail_5, &hlds__goal_form__Var_6);
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
                MR_Word hlds__goal_form__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__GoalExpr_4, (MR_Integer) 0)));
                MR_Integer hlds__goal_form__Var_7 = ((MR_Integer) (MR_hl_field(MR_mktag(2), hlds__goal_form__GoalExpr_4, (MR_Integer) 1)));
                MR_Word hlds__goal_form__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__GoalExpr_4, (MR_Integer) 2)));
                MR_Word hlds__goal_form__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__GoalExpr_4, (MR_Integer) 4)));
                MR_Word hlds__goal_form__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__GoalExpr_4, (MR_Integer) 5)));

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
                MR_Word hlds__goal_form__Var_20;
                MR_Word hlds__goal_form__Var_18;

                {
                  hlds__goal_form__Detism_17 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(hlds__goal_form__GoalInfo_5);
                }
                {
                  parse_tree__prog_data__determinism_components_3_p_0(hlds__goal_form__Detism_17, &hlds__goal_form__Var_20, &hlds__goal_form__Var_18);
                }
                hlds__goal_form__succeeded = ((MR_Integer) 1 == hlds__goal_form__Var_20);
                if (hlds__goal_form__succeeded)
                  {
                    /* direct tailcall eliminated */
                    {
                      MR_Word hlds__goal_form__next_value_of_HeadVar__1_1 = hlds__goal_form__Goals_3;

                      hlds__goal_form__HeadVar__1_1 = hlds__goal_form__next_value_of_HeadVar__1_1;
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

MR_bool MR_CALL 
hlds__goal_form__cannot_stack_flush_1_p_0(
  MR_Word hlds__goal_form__HeadVar__1_1)
{
  {
    MR_bool hlds__goal_form__succeeded;
    MR_Word hlds__goal_form__GoalExpr_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__HeadVar__1_1, (MR_Integer) 0)));
    MR_Word hlds__goal_form__Var_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__HeadVar__1_1, (MR_Integer) 1)));

    switch (MR_tag((MR_Word) hlds__goal_form__GoalExpr_2)) {
      default:
        hlds__goal_form__succeeded = MR_FALSE;
        break;
      case (MR_Integer) 0:
        {
          MR_Word hlds__goal_form__Unify_26;
          MR_Word hlds__goal_form__Var_32 = (MR_Word) MR_body(((MR_Word) hlds__goal_form__GoalExpr_2), (MR_Integer) 0);
          MR_Word hlds__goal_form__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Var_32, (MR_Integer) 0)));
          MR_Word hlds__goal_form__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Var_32, (MR_Integer) 1)));
          MR_Word hlds__goal_form__Var_23;
          MR_Word hlds__goal_form__Var_24;
          MR_Word hlds__goal_form__Var_25;
          MR_Word hlds__goal_form__Var_27;
          MR_Word hlds__goal_form__Var_29;
          MR_Word hlds__goal_form__Var_30;
          MR_Word hlds__goal_form__Var_31;

          hlds__goal_form__succeeded = ((MR_tag((MR_Word) hlds__goal_form__Var_33)) == (MR_mktag((MR_Integer) 1)));
          if (hlds__goal_form__succeeded)
            {
              hlds__goal_form__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__Var_33, (MR_Integer) 0)));
              hlds__goal_form__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__Var_33, (MR_Integer) 1)));
              hlds__goal_form__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__Var_33, (MR_Integer) 2)));
              hlds__goal_form__Unify_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__Var_33, (MR_Integer) 3)));
              hlds__goal_form__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__Var_33, (MR_Integer) 4)));
              hlds__goal_form__succeeded = ((((MR_tag((MR_Word) hlds__goal_form__Unify_26)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__Unify_26, (MR_Integer) 0)))) == (MR_Integer) 1)));
              if (hlds__goal_form__succeeded)
                {
                  hlds__goal_form__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__Unify_26, (MR_Integer) 1)));
                  hlds__goal_form__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__Unify_26, (MR_Integer) 2)));
                  hlds__goal_form__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__Unify_26, (MR_Integer) 3)));
                }
              hlds__goal_form__succeeded = !(hlds__goal_form__succeeded);
            }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word hlds__goal_form__Unify_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__GoalExpr_2, (MR_Integer) 3)));
          MR_Word hlds__goal_form__Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__GoalExpr_2, (MR_Integer) 0)));
          MR_Word hlds__goal_form__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__GoalExpr_2, (MR_Integer) 1)));
          MR_Word hlds__goal_form__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__GoalExpr_2, (MR_Integer) 2)));
          MR_Word hlds__goal_form__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__GoalExpr_2, (MR_Integer) 4)));
          MR_Word hlds__goal_form__Var_9;
          MR_Word hlds__goal_form__Var_10;
          MR_Word hlds__goal_form__Var_11;

          hlds__goal_form__succeeded = ((((MR_tag((MR_Word) hlds__goal_form__Unify_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__Unify_7, (MR_Integer) 0)))) == (MR_Integer) 1)));
          if (hlds__goal_form__succeeded)
            {
              hlds__goal_form__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__Unify_7, (MR_Integer) 1)));
              hlds__goal_form__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__Unify_7, (MR_Integer) 2)));
              hlds__goal_form__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__Unify_7, (MR_Integer) 3)));
            }
          hlds__goal_form__succeeded = !(hlds__goal_form__succeeded);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word hlds__goal_form__BuiltinState_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__GoalExpr_2, (MR_Integer) 3)));
          MR_Word hlds__goal_form__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__GoalExpr_2, (MR_Integer) 0)));
          MR_Integer hlds__goal_form__Var_13 = ((MR_Integer) (MR_hl_field(MR_mktag(2), hlds__goal_form__GoalExpr_2, (MR_Integer) 1)));
          MR_Word hlds__goal_form__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__GoalExpr_2, (MR_Integer) 2)));
          MR_Word hlds__goal_form__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__GoalExpr_2, (MR_Integer) 4)));
          MR_Word hlds__goal_form__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__GoalExpr_2, (MR_Integer) 5)));

          hlds__goal_form__succeeded = (hlds__goal_form__BuiltinState_15 == (MR_Integer) 0);
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_2, (MR_Integer) 0)))) {
          default:
            hlds__goal_form__succeeded = MR_FALSE;
            break;
          case (MR_Integer) 2:
            {
              MR_Word hlds__goal_form__ConjType_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_2, (MR_Integer) 1)));
              MR_Word hlds__goal_form__Goals_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_2, (MR_Integer) 2)));

              hlds__goal_form__succeeded = (hlds__goal_form__ConjType_18 == (MR_Integer) 0);
              if (hlds__goal_form__succeeded)
                {
                  hlds__goal_form__succeeded = hlds__goal_form__cannot_stack_flush_goals_1_p_0(hlds__goal_form__Goals_19);
                }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word hlds__goal_form__Cases_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_2, (MR_Integer) 3)));
              MR_Word hlds__goal_form__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_2, (MR_Integer) 1)));
              MR_Word hlds__goal_form__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_2, (MR_Integer) 2)));

              {
                hlds__goal_form__succeeded = hlds__goal_form__cannot_stack_flush_cases_1_p_0(hlds__goal_form__Cases_22);
              }
            }
            break;
        }
        break;
    }
    return hlds__goal_form__succeeded;
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
            MR_Word hlds__goal_form__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word hlds__goal_form__GoalExpr_7;
            MR_Word hlds__goal_form__Var_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Var_6, (MR_Integer) 0)));
            MR_Word hlds__goal_form__Var_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Var_6, (MR_Integer) 1)));
            MR_Word hlds__goal_form__Var_8;

            hlds__goal_form__Goal_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Var_6, (MR_Integer) 2)));
            hlds__goal_form__GoalExpr_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Goal_4, (MR_Integer) 0)));
            hlds__goal_form__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Goal_4, (MR_Integer) 1)));
            switch (MR_tag((MR_Word) hlds__goal_form__GoalExpr_7)) {
              default:
                hlds__goal_form__succeeded = MR_FALSE;
                break;
              case (MR_Integer) 0:
                {
                  MR_Word hlds__goal_form__Unify_31;
                  MR_Word hlds__goal_form__Var_37 = (MR_Word) MR_body(((MR_Word) hlds__goal_form__GoalExpr_7), (MR_Integer) 0);
                  MR_Word hlds__goal_form__Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Var_37, (MR_Integer) 0)));
                  MR_Word hlds__goal_form__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Var_37, (MR_Integer) 1)));
                  MR_Word hlds__goal_form__Var_28;
                  MR_Word hlds__goal_form__Var_29;
                  MR_Word hlds__goal_form__Var_30;
                  MR_Word hlds__goal_form__Var_32;
                  MR_Word hlds__goal_form__Var_34;
                  MR_Word hlds__goal_form__Var_35;
                  MR_Word hlds__goal_form__Var_36;

                  hlds__goal_form__succeeded = ((MR_tag((MR_Word) hlds__goal_form__Var_38)) == (MR_mktag((MR_Integer) 1)));
                  if (hlds__goal_form__succeeded)
                    {
                      hlds__goal_form__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__Var_38, (MR_Integer) 0)));
                      hlds__goal_form__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__Var_38, (MR_Integer) 1)));
                      hlds__goal_form__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__Var_38, (MR_Integer) 2)));
                      hlds__goal_form__Unify_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__Var_38, (MR_Integer) 3)));
                      hlds__goal_form__Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__Var_38, (MR_Integer) 4)));
                      hlds__goal_form__succeeded = ((((MR_tag((MR_Word) hlds__goal_form__Unify_31)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__Unify_31, (MR_Integer) 0)))) == (MR_Integer) 1)));
                      if (hlds__goal_form__succeeded)
                        {
                          hlds__goal_form__Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__Unify_31, (MR_Integer) 1)));
                          hlds__goal_form__Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__Unify_31, (MR_Integer) 2)));
                          hlds__goal_form__Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__Unify_31, (MR_Integer) 3)));
                        }
                      hlds__goal_form__succeeded = !(hlds__goal_form__succeeded);
                    }
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word hlds__goal_form__Unify_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__GoalExpr_7, (MR_Integer) 3)));
                  MR_Word hlds__goal_form__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__GoalExpr_7, (MR_Integer) 0)));
                  MR_Word hlds__goal_form__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__GoalExpr_7, (MR_Integer) 1)));
                  MR_Word hlds__goal_form__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__GoalExpr_7, (MR_Integer) 2)));
                  MR_Word hlds__goal_form__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__GoalExpr_7, (MR_Integer) 4)));
                  MR_Word hlds__goal_form__Var_14;
                  MR_Word hlds__goal_form__Var_15;
                  MR_Word hlds__goal_form__Var_16;

                  hlds__goal_form__succeeded = ((((MR_tag((MR_Word) hlds__goal_form__Unify_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__Unify_12, (MR_Integer) 0)))) == (MR_Integer) 1)));
                  if (hlds__goal_form__succeeded)
                    {
                      hlds__goal_form__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__Unify_12, (MR_Integer) 1)));
                      hlds__goal_form__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__Unify_12, (MR_Integer) 2)));
                      hlds__goal_form__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__Unify_12, (MR_Integer) 3)));
                    }
                  hlds__goal_form__succeeded = !(hlds__goal_form__succeeded);
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word hlds__goal_form__BuiltinState_20 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__GoalExpr_7, (MR_Integer) 3)));
                  MR_Word hlds__goal_form__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__GoalExpr_7, (MR_Integer) 0)));
                  MR_Integer hlds__goal_form__Var_18 = ((MR_Integer) (MR_hl_field(MR_mktag(2), hlds__goal_form__GoalExpr_7, (MR_Integer) 1)));
                  MR_Word hlds__goal_form__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__GoalExpr_7, (MR_Integer) 2)));
                  MR_Word hlds__goal_form__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__GoalExpr_7, (MR_Integer) 4)));
                  MR_Word hlds__goal_form__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__GoalExpr_7, (MR_Integer) 5)));

                  hlds__goal_form__succeeded = (hlds__goal_form__BuiltinState_20 == (MR_Integer) 0);
                }
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_7, (MR_Integer) 0)))) {
                  default:
                    hlds__goal_form__succeeded = MR_FALSE;
                    break;
                  case (MR_Integer) 2:
                    {
                      MR_Word hlds__goal_form__ConjType_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_7, (MR_Integer) 1)));
                      MR_Word hlds__goal_form__Goals_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_7, (MR_Integer) 2)));

                      hlds__goal_form__succeeded = (hlds__goal_form__ConjType_23 == (MR_Integer) 0);
                      if (hlds__goal_form__succeeded)
                        {
                          hlds__goal_form__succeeded = hlds__goal_form__cannot_stack_flush_goals_1_p_0(hlds__goal_form__Goals_24);
                        }
                    }
                    break;
                  case (MR_Integer) 4:
                    {
                      MR_Word hlds__goal_form__Cases_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_7, (MR_Integer) 3)));
                      MR_Word hlds__goal_form__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_7, (MR_Integer) 1)));
                      MR_Word hlds__goal_form__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_7, (MR_Integer) 2)));

                      {
                        hlds__goal_form__succeeded = hlds__goal_form__cannot_stack_flush_cases_1_p_0(hlds__goal_form__Cases_27);
                      }
                    }
                    break;
                }
                break;
            }
            if (hlds__goal_form__succeeded)
              {
                /* direct tailcall eliminated */
                {
                  MR_Word hlds__goal_form__next_value_of_HeadVar__1_1 = hlds__goal_form__Cases_5;

                  hlds__goal_form__HeadVar__1_1 = hlds__goal_form__next_value_of_HeadVar__1_1;
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
            MR_Word hlds__goal_form__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Goal_2, (MR_Integer) 1)));

            switch (MR_tag((MR_Word) hlds__goal_form__GoalExpr_4)) {
              default:
                hlds__goal_form__succeeded = MR_FALSE;
                break;
              case (MR_Integer) 0:
                {
                  MR_Word hlds__goal_form__Unify_28;
                  MR_Word hlds__goal_form__Var_34 = (MR_Word) MR_body(((MR_Word) hlds__goal_form__GoalExpr_4), (MR_Integer) 0);
                  MR_Word hlds__goal_form__Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Var_34, (MR_Integer) 0)));
                  MR_Word hlds__goal_form__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Var_34, (MR_Integer) 1)));
                  MR_Word hlds__goal_form__Var_25;
                  MR_Word hlds__goal_form__Var_26;
                  MR_Word hlds__goal_form__Var_27;
                  MR_Word hlds__goal_form__Var_29;
                  MR_Word hlds__goal_form__Var_31;
                  MR_Word hlds__goal_form__Var_32;
                  MR_Word hlds__goal_form__Var_33;

                  hlds__goal_form__succeeded = ((MR_tag((MR_Word) hlds__goal_form__Var_35)) == (MR_mktag((MR_Integer) 1)));
                  if (hlds__goal_form__succeeded)
                    {
                      hlds__goal_form__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__Var_35, (MR_Integer) 0)));
                      hlds__goal_form__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__Var_35, (MR_Integer) 1)));
                      hlds__goal_form__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__Var_35, (MR_Integer) 2)));
                      hlds__goal_form__Unify_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__Var_35, (MR_Integer) 3)));
                      hlds__goal_form__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__Var_35, (MR_Integer) 4)));
                      hlds__goal_form__succeeded = ((((MR_tag((MR_Word) hlds__goal_form__Unify_28)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__Unify_28, (MR_Integer) 0)))) == (MR_Integer) 1)));
                      if (hlds__goal_form__succeeded)
                        {
                          hlds__goal_form__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__Unify_28, (MR_Integer) 1)));
                          hlds__goal_form__Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__Unify_28, (MR_Integer) 2)));
                          hlds__goal_form__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__Unify_28, (MR_Integer) 3)));
                        }
                      hlds__goal_form__succeeded = !(hlds__goal_form__succeeded);
                    }
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word hlds__goal_form__Unify_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__GoalExpr_4, (MR_Integer) 3)));
                  MR_Word hlds__goal_form__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__GoalExpr_4, (MR_Integer) 0)));
                  MR_Word hlds__goal_form__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__GoalExpr_4, (MR_Integer) 1)));
                  MR_Word hlds__goal_form__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__GoalExpr_4, (MR_Integer) 2)));
                  MR_Word hlds__goal_form__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__GoalExpr_4, (MR_Integer) 4)));
                  MR_Word hlds__goal_form__Var_11;
                  MR_Word hlds__goal_form__Var_12;
                  MR_Word hlds__goal_form__Var_13;

                  hlds__goal_form__succeeded = ((((MR_tag((MR_Word) hlds__goal_form__Unify_9)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__Unify_9, (MR_Integer) 0)))) == (MR_Integer) 1)));
                  if (hlds__goal_form__succeeded)
                    {
                      hlds__goal_form__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__Unify_9, (MR_Integer) 1)));
                      hlds__goal_form__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__Unify_9, (MR_Integer) 2)));
                      hlds__goal_form__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__Unify_9, (MR_Integer) 3)));
                    }
                  hlds__goal_form__succeeded = !(hlds__goal_form__succeeded);
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word hlds__goal_form__BuiltinState_17 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__GoalExpr_4, (MR_Integer) 3)));
                  MR_Word hlds__goal_form__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__GoalExpr_4, (MR_Integer) 0)));
                  MR_Integer hlds__goal_form__Var_15 = ((MR_Integer) (MR_hl_field(MR_mktag(2), hlds__goal_form__GoalExpr_4, (MR_Integer) 1)));
                  MR_Word hlds__goal_form__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__GoalExpr_4, (MR_Integer) 2)));
                  MR_Word hlds__goal_form__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__GoalExpr_4, (MR_Integer) 4)));
                  MR_Word hlds__goal_form__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__GoalExpr_4, (MR_Integer) 5)));

                  hlds__goal_form__succeeded = (hlds__goal_form__BuiltinState_17 == (MR_Integer) 0);
                }
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_4, (MR_Integer) 0)))) {
                  default:
                    hlds__goal_form__succeeded = MR_FALSE;
                    break;
                  case (MR_Integer) 2:
                    {
                      MR_Word hlds__goal_form__ConjType_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_4, (MR_Integer) 1)));
                      MR_Word hlds__goal_form__Goals_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_4, (MR_Integer) 2)));

                      hlds__goal_form__succeeded = (hlds__goal_form__ConjType_20 == (MR_Integer) 0);
                      if (hlds__goal_form__succeeded)
                        {
                          hlds__goal_form__succeeded = hlds__goal_form__cannot_stack_flush_goals_1_p_0(hlds__goal_form__Goals_21);
                        }
                    }
                    break;
                  case (MR_Integer) 4:
                    {
                      MR_Word hlds__goal_form__Cases_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_4, (MR_Integer) 3)));
                      MR_Word hlds__goal_form__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_4, (MR_Integer) 1)));
                      MR_Word hlds__goal_form__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_4, (MR_Integer) 2)));

                      {
                        hlds__goal_form__succeeded = hlds__goal_form__cannot_stack_flush_cases_1_p_0(hlds__goal_form__Cases_24);
                      }
                    }
                    break;
                }
                break;
            }
            if (hlds__goal_form__succeeded)
              {
                /* direct tailcall eliminated */
                {
                  MR_Word hlds__goal_form__next_value_of_HeadVar__1_1 = hlds__goal_form__Goals_3;

                  hlds__goal_form__HeadVar__1_1 = hlds__goal_form__next_value_of_HeadVar__1_1;
                }
                continue;
              }
          }
        return hlds__goal_form__succeeded;
      }
      break;
    }
}

MR_bool MR_CALL 
hlds__goal_form__goal_list_may_allocate_heap_1_p_0(
  MR_Word hlds__goal_form__Goals_2)
{
  {
    MR_bool hlds__goal_form__succeeded;
    MR_Word hlds__goal_form__Var_4;

    {
      hlds__goal_form__goal_list_may_allocate_heap_2_p_0(hlds__goal_form__Goals_2, &hlds__goal_form__Var_4);
    }
    hlds__goal_form__succeeded = ((MR_Integer) 1 == hlds__goal_form__Var_4);
    return hlds__goal_form__succeeded;
  }
}

MR_bool MR_CALL 
hlds__goal_form__goal_may_allocate_heap_1_p_0(
  MR_Word hlds__goal_form__Goal_2)
{
  {
    MR_bool hlds__goal_form__succeeded;
    MR_Word hlds__goal_form__GoalExpr_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Goal_2, (MR_Integer) 0)));
    MR_Word hlds__goal_form___GoalInfo_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Goal_2, (MR_Integer) 1)));

    switch (MR_tag((MR_Word) hlds__goal_form__GoalExpr_6)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word hlds__goal_form__SubGoal_51 = (MR_Word) MR_body(((MR_Word) hlds__goal_form__GoalExpr_6), (MR_Integer) 0);
          MR_Word hlds__goal_form__Var_104;

          {
            hlds__goal_form__goal_may_allocate_heap_2_p_0(hlds__goal_form__SubGoal_51, &hlds__goal_form__Var_104);
          }
          hlds__goal_form__succeeded = ((MR_Integer) 1 == hlds__goal_form__Var_104);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word hlds__goal_form__Unification_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__GoalExpr_6, (MR_Integer) 3)));
          MR_Word hlds__goal_form__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__GoalExpr_6, (MR_Integer) 0)));
          MR_Word hlds__goal_form__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__GoalExpr_6, (MR_Integer) 1)));
          MR_Word hlds__goal_form__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__GoalExpr_6, (MR_Integer) 2)));
          MR_Word hlds__goal_form__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__GoalExpr_6, (MR_Integer) 4)));
          MR_Word hlds__goal_form__Args_17;
          MR_Word hlds__goal_form__Var_15;
          MR_Word hlds__goal_form__Var_16;
          MR_Word hlds__goal_form__Var_18;
          MR_Word hlds__goal_form__Var_19;
          MR_Word hlds__goal_form__Var_20;
          MR_Word hlds__goal_form__Var_21;
          MR_Word hlds__goal_form__Var_22;
          MR_Word hlds__goal_form__Var_23;

          hlds__goal_form__succeeded = ((MR_tag((MR_Word) hlds__goal_form__Unification_13)) == (MR_mktag((MR_Integer) 0)));
          if (hlds__goal_form__succeeded)
            {
              hlds__goal_form__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Unification_13, (MR_Integer) 0)));
              hlds__goal_form__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Unification_13, (MR_Integer) 1)));
              hlds__goal_form__Args_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Unification_13, (MR_Integer) 2)));
              hlds__goal_form__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Unification_13, (MR_Integer) 3)));
              hlds__goal_form__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Unification_13, (MR_Integer) 4)));
              hlds__goal_form__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Unification_13, (MR_Integer) 5)));
              hlds__goal_form__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Unification_13, (MR_Integer) 6)));
              hlds__goal_form__succeeded = ((MR_tag((MR_Word) hlds__goal_form__Args_17)) == (MR_mktag((MR_Integer) 1)));
              if (hlds__goal_form__succeeded)
                {
                  hlds__goal_form__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__Args_17, (MR_Integer) 0)));
                  hlds__goal_form__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__Args_17, (MR_Integer) 1)));
                }
            }
          if (hlds__goal_form__succeeded)
            {
              hlds__goal_form__succeeded = ((MR_Integer) 1 == (MR_Integer) 1);
            }
          else
            {
              hlds__goal_form__succeeded = ((MR_Integer) 1 == (MR_Integer) 0);
            }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word hlds__goal_form__Builtin_27 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__GoalExpr_6, (MR_Integer) 3)));
          MR_Word hlds__goal_form__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__GoalExpr_6, (MR_Integer) 0)));
          MR_Integer hlds__goal_form__Var_25 = ((MR_Integer) (MR_hl_field(MR_mktag(2), hlds__goal_form__GoalExpr_6, (MR_Integer) 1)));
          MR_Word hlds__goal_form__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__GoalExpr_6, (MR_Integer) 2)));
          MR_Word hlds__goal_form__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__GoalExpr_6, (MR_Integer) 4)));
          MR_Word hlds__goal_form__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__GoalExpr_6, (MR_Integer) 5)));

          switch (hlds__goal_form__Builtin_27) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                hlds__goal_form__succeeded = ((MR_Integer) 1 == (MR_Integer) 0);
              }
              break;
            case (MR_Integer) 1:
              {
                hlds__goal_form__succeeded = ((MR_Integer) 1 == (MR_Integer) 1);
              }
              break;
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_6, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              hlds__goal_form__succeeded = ((MR_Integer) 1 == (MR_Integer) 1);
            }
            break;
          case (MR_Integer) 1:
            {
              hlds__goal_form__succeeded = ((MR_Integer) 1 == (MR_Integer) 1);
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word hlds__goal_form__ConjType_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_6, (MR_Integer) 1)));
              MR_Word hlds__goal_form__Goals_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_6, (MR_Integer) 2)));

              switch (hlds__goal_form__ConjType_42) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  {
                    hlds__goal_form__succeeded = ((MR_Integer) 1 == (MR_Integer) 1);
                  }
                  break;
                case (MR_Integer) 0:
                  {
                    MR_Word hlds__goal_form__Var_90;

                    {
                      hlds__goal_form__goal_list_may_allocate_heap_2_p_0(hlds__goal_form__Goals_43, &hlds__goal_form__Var_90);
                    }
                    hlds__goal_form__succeeded = ((MR_Integer) 1 == hlds__goal_form__Var_90);
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word hlds__goal_form__Goals_71 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_6, (MR_Integer) 1)));
              MR_Word hlds__goal_form__Var_93;

              {
                hlds__goal_form__goal_list_may_allocate_heap_2_p_0(hlds__goal_form__Goals_71, &hlds__goal_form__Var_93);
              }
              hlds__goal_form__succeeded = ((MR_Integer) 1 == hlds__goal_form__Var_93);
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word hlds__goal_form__Cases_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_6, (MR_Integer) 3)));
              MR_Word hlds__goal_form__Var_125;
              MR_Word hlds__goal_form___Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_6, (MR_Integer) 1)));
              MR_Word hlds__goal_form___CanFail_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_6, (MR_Integer) 2)));

              {
                hlds__goal_form__cases_may_allocate_heap_2_p_0(hlds__goal_form__Cases_46, &hlds__goal_form__Var_125);
              }
              hlds__goal_form__succeeded = ((MR_Integer) 1 == hlds__goal_form__Var_125);
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word hlds__goal_form__Reason_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_6, (MR_Integer) 1)));
              MR_Word hlds__goal_form__SubGoal_72 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_6, (MR_Integer) 2)));
              MR_Word hlds__goal_form__FGT_54;
              MR_Word hlds__goal_form__Var_53;

              hlds__goal_form__succeeded = ((((MR_tag((MR_Word) hlds__goal_form__Reason_52)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__Reason_52, (MR_Integer) 0)))) == (MR_Integer) 6)));
              if (hlds__goal_form__succeeded)
                {
                  hlds__goal_form__Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__Reason_52, (MR_Integer) 1)));
                  hlds__goal_form__FGT_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__Reason_52, (MR_Integer) 2)));
                  switch (hlds__goal_form__FGT_54) {
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
                  hlds__goal_form__succeeded = ((MR_Integer) 1 == (MR_Integer) 1);
                }
              else
                {
                  MR_Word hlds__goal_form__Var_113;

                  {
                    hlds__goal_form__goal_may_allocate_heap_2_p_0(hlds__goal_form__SubGoal_72, &hlds__goal_form__Var_113);
                  }
                  hlds__goal_form__succeeded = ((MR_Integer) 1 == hlds__goal_form__Var_113);
                }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word hlds__goal_form__Cond_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_6, (MR_Integer) 2)));
              MR_Word hlds__goal_form__Then_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_6, (MR_Integer) 3)));
              MR_Word hlds__goal_form__Else_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_6, (MR_Integer) 4)));
              MR_Word hlds__goal_form___Vars_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_6, (MR_Integer) 1)));
              MR_Word hlds__goal_form__Var_73;

              {
                hlds__goal_form__goal_may_allocate_heap_2_p_0(hlds__goal_form__Cond_48, &hlds__goal_form__Var_73);
              }
              hlds__goal_form__succeeded = ((MR_Integer) 1 == hlds__goal_form__Var_73);
              if (hlds__goal_form__succeeded)
                {
                  hlds__goal_form__succeeded = ((MR_Integer) 1 == (MR_Integer) 1);
                }
              else
                {
                  MR_Word hlds__goal_form__Var_74;

                  {
                    hlds__goal_form__goal_may_allocate_heap_2_p_0(hlds__goal_form__Then_49, &hlds__goal_form__Var_74);
                  }
                  hlds__goal_form__succeeded = ((MR_Integer) 1 == hlds__goal_form__Var_74);
                  if (hlds__goal_form__succeeded)
                    {
                      hlds__goal_form__succeeded = ((MR_Integer) 1 == (MR_Integer) 1);
                    }
                  else
                    {
                      MR_Word hlds__goal_form__Var_100;

                      {
                        hlds__goal_form__goal_may_allocate_heap_2_p_0(hlds__goal_form__Else_50, &hlds__goal_form__Var_100);
                      }
                      hlds__goal_form__succeeded = ((MR_Integer) 1 == hlds__goal_form__Var_100);
                    }
                }
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word hlds__goal_form__ShortHand_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_6, (MR_Integer) 1)));

              switch (MR_tag((MR_Word) hlds__goal_form__ShortHand_55)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word hlds__goal_form__GoalA_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__ShortHand_55, (MR_Integer) 0)));
                    MR_Word hlds__goal_form__GoalB_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__ShortHand_55, (MR_Integer) 1)));
                    MR_Word hlds__goal_form__Var_75;

                    {
                      hlds__goal_form__goal_may_allocate_heap_2_p_0(hlds__goal_form__GoalA_66, &hlds__goal_form__Var_75);
                    }
                    hlds__goal_form__succeeded = ((MR_Integer) 1 == hlds__goal_form__Var_75);
                    if (hlds__goal_form__succeeded)
                      {
                        hlds__goal_form__succeeded = ((MR_Integer) 1 == (MR_Integer) 1);
                      }
                    else
                      {
                        MR_Word hlds__goal_form__Var_120;

                        {
                          hlds__goal_form__goal_may_allocate_heap_2_p_0(hlds__goal_form__GoalB_67, &hlds__goal_form__Var_120);
                        }
                        hlds__goal_form__succeeded = ((MR_Integer) 1 == hlds__goal_form__Var_120);
                      }
                  }
                  break;
                case (MR_Integer) 1:
                case (MR_Integer) 2:
                  {
                    hlds__goal_form__succeeded = ((MR_Integer) 1 == (MR_Integer) 1);
                  }
                  break;
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
            MR_Word hlds__goal_form__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word hlds__goal_form__Var_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Var_8, (MR_Integer) 0)));
            MR_Word hlds__goal_form__Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Var_8, (MR_Integer) 1)));
            MR_Word hlds__goal_form__GoalExpr_12;
            MR_Word hlds__goal_form___GoalInfo_13;

            hlds__goal_form__Goal_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Var_8, (MR_Integer) 2)));
            hlds__goal_form__GoalExpr_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Goal_5, (MR_Integer) 0)));
            hlds__goal_form___GoalInfo_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Goal_5, (MR_Integer) 1)));
            switch (MR_tag((MR_Word) hlds__goal_form__GoalExpr_12)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word hlds__goal_form__SubGoal_57 = (MR_Word) MR_body(((MR_Word) hlds__goal_form__GoalExpr_12), (MR_Integer) 0);
                  MR_Word hlds__goal_form__Var_110;

                  {
                    hlds__goal_form__goal_may_allocate_heap_2_p_0(hlds__goal_form__SubGoal_57, &hlds__goal_form__Var_110);
                  }
                  hlds__goal_form__succeeded = ((MR_Integer) 1 == hlds__goal_form__Var_110);
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word hlds__goal_form__Unification_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__GoalExpr_12, (MR_Integer) 3)));
                  MR_Word hlds__goal_form__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__GoalExpr_12, (MR_Integer) 0)));
                  MR_Word hlds__goal_form__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__GoalExpr_12, (MR_Integer) 1)));
                  MR_Word hlds__goal_form__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__GoalExpr_12, (MR_Integer) 2)));
                  MR_Word hlds__goal_form__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__GoalExpr_12, (MR_Integer) 4)));
                  MR_Word hlds__goal_form__Args_23;
                  MR_Word hlds__goal_form__Var_21;
                  MR_Word hlds__goal_form__Var_22;
                  MR_Word hlds__goal_form__Var_24;
                  MR_Word hlds__goal_form__Var_25;
                  MR_Word hlds__goal_form__Var_26;
                  MR_Word hlds__goal_form__Var_27;
                  MR_Word hlds__goal_form__Var_28;
                  MR_Word hlds__goal_form__Var_29;

                  hlds__goal_form__succeeded = ((MR_tag((MR_Word) hlds__goal_form__Unification_19)) == (MR_mktag((MR_Integer) 0)));
                  if (hlds__goal_form__succeeded)
                    {
                      hlds__goal_form__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Unification_19, (MR_Integer) 0)));
                      hlds__goal_form__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Unification_19, (MR_Integer) 1)));
                      hlds__goal_form__Args_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Unification_19, (MR_Integer) 2)));
                      hlds__goal_form__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Unification_19, (MR_Integer) 3)));
                      hlds__goal_form__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Unification_19, (MR_Integer) 4)));
                      hlds__goal_form__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Unification_19, (MR_Integer) 5)));
                      hlds__goal_form__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Unification_19, (MR_Integer) 6)));
                      hlds__goal_form__succeeded = ((MR_tag((MR_Word) hlds__goal_form__Args_23)) == (MR_mktag((MR_Integer) 1)));
                      if (hlds__goal_form__succeeded)
                        {
                          hlds__goal_form__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__Args_23, (MR_Integer) 0)));
                          hlds__goal_form__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__Args_23, (MR_Integer) 1)));
                        }
                    }
                  if (hlds__goal_form__succeeded)
                    {
                      hlds__goal_form__succeeded = ((MR_Integer) 1 == (MR_Integer) 1);
                    }
                  else
                    {
                      hlds__goal_form__succeeded = ((MR_Integer) 1 == (MR_Integer) 0);
                    }
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word hlds__goal_form__Builtin_33 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__GoalExpr_12, (MR_Integer) 3)));
                  MR_Word hlds__goal_form__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__GoalExpr_12, (MR_Integer) 0)));
                  MR_Integer hlds__goal_form__Var_31 = ((MR_Integer) (MR_hl_field(MR_mktag(2), hlds__goal_form__GoalExpr_12, (MR_Integer) 1)));
                  MR_Word hlds__goal_form__Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__GoalExpr_12, (MR_Integer) 2)));
                  MR_Word hlds__goal_form__Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__GoalExpr_12, (MR_Integer) 4)));
                  MR_Word hlds__goal_form__Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__GoalExpr_12, (MR_Integer) 5)));

                  switch (hlds__goal_form__Builtin_33) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        hlds__goal_form__succeeded = ((MR_Integer) 1 == (MR_Integer) 0);
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        hlds__goal_form__succeeded = ((MR_Integer) 1 == (MR_Integer) 1);
                      }
                      break;
                  }
                }
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_12, (MR_Integer) 0)))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      hlds__goal_form__succeeded = ((MR_Integer) 1 == (MR_Integer) 1);
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      hlds__goal_form__succeeded = ((MR_Integer) 1 == (MR_Integer) 1);
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      MR_Word hlds__goal_form__ConjType_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_12, (MR_Integer) 1)));
                      MR_Word hlds__goal_form__Goals_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_12, (MR_Integer) 2)));

                      switch (hlds__goal_form__ConjType_48) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 1:
                          {
                            hlds__goal_form__succeeded = ((MR_Integer) 1 == (MR_Integer) 1);
                          }
                          break;
                        case (MR_Integer) 0:
                          {
                            MR_Word hlds__goal_form__Var_96;

                            {
                              hlds__goal_form__goal_list_may_allocate_heap_2_p_0(hlds__goal_form__Goals_49, &hlds__goal_form__Var_96);
                            }
                            hlds__goal_form__succeeded = ((MR_Integer) 1 == hlds__goal_form__Var_96);
                          }
                          break;
                      }
                    }
                    break;
                  case (MR_Integer) 3:
                    {
                      MR_Word hlds__goal_form__Goals_77 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_12, (MR_Integer) 1)));
                      MR_Word hlds__goal_form__Var_99;

                      {
                        hlds__goal_form__goal_list_may_allocate_heap_2_p_0(hlds__goal_form__Goals_77, &hlds__goal_form__Var_99);
                      }
                      hlds__goal_form__succeeded = ((MR_Integer) 1 == hlds__goal_form__Var_99);
                    }
                    break;
                  case (MR_Integer) 4:
                    {
                      MR_Word hlds__goal_form__Cases_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_12, (MR_Integer) 3)));
                      MR_Word hlds__goal_form__Var_131;
                      MR_Word hlds__goal_form___Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_12, (MR_Integer) 1)));
                      MR_Word hlds__goal_form___CanFail_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_12, (MR_Integer) 2)));

                      {
                        hlds__goal_form__cases_may_allocate_heap_2_p_0(hlds__goal_form__Cases_52, &hlds__goal_form__Var_131);
                      }
                      hlds__goal_form__succeeded = ((MR_Integer) 1 == hlds__goal_form__Var_131);
                    }
                    break;
                  case (MR_Integer) 5:
                    {
                      MR_Word hlds__goal_form__Reason_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_12, (MR_Integer) 1)));
                      MR_Word hlds__goal_form__SubGoal_78 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_12, (MR_Integer) 2)));
                      MR_Word hlds__goal_form__FGT_60;
                      MR_Word hlds__goal_form__Var_59;

                      hlds__goal_form__succeeded = ((((MR_tag((MR_Word) hlds__goal_form__Reason_58)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__Reason_58, (MR_Integer) 0)))) == (MR_Integer) 6)));
                      if (hlds__goal_form__succeeded)
                        {
                          hlds__goal_form__Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__Reason_58, (MR_Integer) 1)));
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
                          hlds__goal_form__succeeded = ((MR_Integer) 1 == (MR_Integer) 1);
                        }
                      else
                        {
                          MR_Word hlds__goal_form__Var_119;

                          {
                            hlds__goal_form__goal_may_allocate_heap_2_p_0(hlds__goal_form__SubGoal_78, &hlds__goal_form__Var_119);
                          }
                          hlds__goal_form__succeeded = ((MR_Integer) 1 == hlds__goal_form__Var_119);
                        }
                    }
                    break;
                  case (MR_Integer) 6:
                    {
                      MR_Word hlds__goal_form__Cond_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_12, (MR_Integer) 2)));
                      MR_Word hlds__goal_form__Then_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_12, (MR_Integer) 3)));
                      MR_Word hlds__goal_form__Else_56 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_12, (MR_Integer) 4)));
                      MR_Word hlds__goal_form___Vars_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_12, (MR_Integer) 1)));
                      MR_Word hlds__goal_form__Var_79;

                      {
                        hlds__goal_form__goal_may_allocate_heap_2_p_0(hlds__goal_form__Cond_54, &hlds__goal_form__Var_79);
                      }
                      hlds__goal_form__succeeded = ((MR_Integer) 1 == hlds__goal_form__Var_79);
                      if (hlds__goal_form__succeeded)
                        {
                          hlds__goal_form__succeeded = ((MR_Integer) 1 == (MR_Integer) 1);
                        }
                      else
                        {
                          MR_Word hlds__goal_form__Var_80;

                          {
                            hlds__goal_form__goal_may_allocate_heap_2_p_0(hlds__goal_form__Then_55, &hlds__goal_form__Var_80);
                          }
                          hlds__goal_form__succeeded = ((MR_Integer) 1 == hlds__goal_form__Var_80);
                          if (hlds__goal_form__succeeded)
                            {
                              hlds__goal_form__succeeded = ((MR_Integer) 1 == (MR_Integer) 1);
                            }
                          else
                            {
                              MR_Word hlds__goal_form__Var_106;

                              {
                                hlds__goal_form__goal_may_allocate_heap_2_p_0(hlds__goal_form__Else_56, &hlds__goal_form__Var_106);
                              }
                              hlds__goal_form__succeeded = ((MR_Integer) 1 == hlds__goal_form__Var_106);
                            }
                        }
                    }
                    break;
                  case (MR_Integer) 7:
                    {
                      MR_Word hlds__goal_form__ShortHand_61 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_12, (MR_Integer) 1)));

                      switch (MR_tag((MR_Word) hlds__goal_form__ShortHand_61)) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 0:
                          {
                            MR_Word hlds__goal_form__GoalA_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__ShortHand_61, (MR_Integer) 0)));
                            MR_Word hlds__goal_form__GoalB_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__ShortHand_61, (MR_Integer) 1)));
                            MR_Word hlds__goal_form__Var_81;

                            {
                              hlds__goal_form__goal_may_allocate_heap_2_p_0(hlds__goal_form__GoalA_72, &hlds__goal_form__Var_81);
                            }
                            hlds__goal_form__succeeded = ((MR_Integer) 1 == hlds__goal_form__Var_81);
                            if (hlds__goal_form__succeeded)
                              {
                                hlds__goal_form__succeeded = ((MR_Integer) 1 == (MR_Integer) 1);
                              }
                            else
                              {
                                MR_Word hlds__goal_form__Var_126;

                                {
                                  hlds__goal_form__goal_may_allocate_heap_2_p_0(hlds__goal_form__GoalB_73, &hlds__goal_form__Var_126);
                                }
                                hlds__goal_form__succeeded = ((MR_Integer) 1 == hlds__goal_form__Var_126);
                              }
                          }
                          break;
                        case (MR_Integer) 1:
                        case (MR_Integer) 2:
                          {
                            hlds__goal_form__succeeded = ((MR_Integer) 1 == (MR_Integer) 1);
                          }
                          break;
                      }
                    }
                    break;
                }
                break;
            }
            if (hlds__goal_form__succeeded)
              *hlds__goal_form__HeadVar__2_2 = (MR_Integer) 1;
            else
              {
                /* direct tailcall eliminated */
                {
                  MR_Word hlds__goal_form__next_value_of_HeadVar__1_1 = hlds__goal_form__Cases_6;

                  hlds__goal_form__HeadVar__1_1 = hlds__goal_form__next_value_of_HeadVar__1_1;
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
            MR_Word hlds__goal_form__GoalExpr_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Goal_3, (MR_Integer) 0)));
            MR_Word hlds__goal_form___GoalInfo_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Goal_3, (MR_Integer) 1)));

            switch (MR_tag((MR_Word) hlds__goal_form__GoalExpr_9)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word hlds__goal_form__SubGoal_54 = (MR_Word) MR_body(((MR_Word) hlds__goal_form__GoalExpr_9), (MR_Integer) 0);
                  MR_Word hlds__goal_form__Var_107;

                  {
                    hlds__goal_form__goal_may_allocate_heap_2_p_0(hlds__goal_form__SubGoal_54, &hlds__goal_form__Var_107);
                  }
                  hlds__goal_form__succeeded = ((MR_Integer) 1 == hlds__goal_form__Var_107);
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word hlds__goal_form__Unification_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__GoalExpr_9, (MR_Integer) 3)));
                  MR_Word hlds__goal_form__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__GoalExpr_9, (MR_Integer) 0)));
                  MR_Word hlds__goal_form__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__GoalExpr_9, (MR_Integer) 1)));
                  MR_Word hlds__goal_form__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__GoalExpr_9, (MR_Integer) 2)));
                  MR_Word hlds__goal_form__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__GoalExpr_9, (MR_Integer) 4)));
                  MR_Word hlds__goal_form__Args_20;
                  MR_Word hlds__goal_form__Var_18;
                  MR_Word hlds__goal_form__Var_19;
                  MR_Word hlds__goal_form__Var_21;
                  MR_Word hlds__goal_form__Var_22;
                  MR_Word hlds__goal_form__Var_23;
                  MR_Word hlds__goal_form__Var_24;
                  MR_Word hlds__goal_form__Var_25;
                  MR_Word hlds__goal_form__Var_26;

                  hlds__goal_form__succeeded = ((MR_tag((MR_Word) hlds__goal_form__Unification_16)) == (MR_mktag((MR_Integer) 0)));
                  if (hlds__goal_form__succeeded)
                    {
                      hlds__goal_form__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Unification_16, (MR_Integer) 0)));
                      hlds__goal_form__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Unification_16, (MR_Integer) 1)));
                      hlds__goal_form__Args_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Unification_16, (MR_Integer) 2)));
                      hlds__goal_form__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Unification_16, (MR_Integer) 3)));
                      hlds__goal_form__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Unification_16, (MR_Integer) 4)));
                      hlds__goal_form__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Unification_16, (MR_Integer) 5)));
                      hlds__goal_form__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Unification_16, (MR_Integer) 6)));
                      hlds__goal_form__succeeded = ((MR_tag((MR_Word) hlds__goal_form__Args_20)) == (MR_mktag((MR_Integer) 1)));
                      if (hlds__goal_form__succeeded)
                        {
                          hlds__goal_form__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__Args_20, (MR_Integer) 0)));
                          hlds__goal_form__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__Args_20, (MR_Integer) 1)));
                        }
                    }
                  if (hlds__goal_form__succeeded)
                    {
                      hlds__goal_form__succeeded = ((MR_Integer) 1 == (MR_Integer) 1);
                    }
                  else
                    {
                      hlds__goal_form__succeeded = ((MR_Integer) 1 == (MR_Integer) 0);
                    }
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word hlds__goal_form__Builtin_30 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__GoalExpr_9, (MR_Integer) 3)));
                  MR_Word hlds__goal_form__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__GoalExpr_9, (MR_Integer) 0)));
                  MR_Integer hlds__goal_form__Var_28 = ((MR_Integer) (MR_hl_field(MR_mktag(2), hlds__goal_form__GoalExpr_9, (MR_Integer) 1)));
                  MR_Word hlds__goal_form__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__GoalExpr_9, (MR_Integer) 2)));
                  MR_Word hlds__goal_form__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__GoalExpr_9, (MR_Integer) 4)));
                  MR_Word hlds__goal_form__Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__GoalExpr_9, (MR_Integer) 5)));

                  switch (hlds__goal_form__Builtin_30) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        hlds__goal_form__succeeded = ((MR_Integer) 1 == (MR_Integer) 0);
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        hlds__goal_form__succeeded = ((MR_Integer) 1 == (MR_Integer) 1);
                      }
                      break;
                  }
                }
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_9, (MR_Integer) 0)))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      hlds__goal_form__succeeded = ((MR_Integer) 1 == (MR_Integer) 1);
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      hlds__goal_form__succeeded = ((MR_Integer) 1 == (MR_Integer) 1);
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      MR_Word hlds__goal_form__ConjType_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_9, (MR_Integer) 1)));
                      MR_Word hlds__goal_form__Goals_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_9, (MR_Integer) 2)));

                      switch (hlds__goal_form__ConjType_45) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 1:
                          {
                            hlds__goal_form__succeeded = ((MR_Integer) 1 == (MR_Integer) 1);
                          }
                          break;
                        case (MR_Integer) 0:
                          {
                            MR_Word hlds__goal_form__Var_93;

                            {
                              hlds__goal_form__goal_list_may_allocate_heap_2_p_0(hlds__goal_form__Goals_46, &hlds__goal_form__Var_93);
                            }
                            hlds__goal_form__succeeded = ((MR_Integer) 1 == hlds__goal_form__Var_93);
                          }
                          break;
                      }
                    }
                    break;
                  case (MR_Integer) 3:
                    {
                      MR_Word hlds__goal_form__Goals_74 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_9, (MR_Integer) 1)));
                      MR_Word hlds__goal_form__Var_96;

                      {
                        hlds__goal_form__goal_list_may_allocate_heap_2_p_0(hlds__goal_form__Goals_74, &hlds__goal_form__Var_96);
                      }
                      hlds__goal_form__succeeded = ((MR_Integer) 1 == hlds__goal_form__Var_96);
                    }
                    break;
                  case (MR_Integer) 4:
                    {
                      MR_Word hlds__goal_form__Cases_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_9, (MR_Integer) 3)));
                      MR_Word hlds__goal_form__Var_128;
                      MR_Word hlds__goal_form___Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_9, (MR_Integer) 1)));
                      MR_Word hlds__goal_form___CanFail_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_9, (MR_Integer) 2)));

                      {
                        hlds__goal_form__cases_may_allocate_heap_2_p_0(hlds__goal_form__Cases_49, &hlds__goal_form__Var_128);
                      }
                      hlds__goal_form__succeeded = ((MR_Integer) 1 == hlds__goal_form__Var_128);
                    }
                    break;
                  case (MR_Integer) 5:
                    {
                      MR_Word hlds__goal_form__Reason_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_9, (MR_Integer) 1)));
                      MR_Word hlds__goal_form__SubGoal_75 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_9, (MR_Integer) 2)));
                      MR_Word hlds__goal_form__FGT_57;
                      MR_Word hlds__goal_form__Var_56;

                      hlds__goal_form__succeeded = ((((MR_tag((MR_Word) hlds__goal_form__Reason_55)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__Reason_55, (MR_Integer) 0)))) == (MR_Integer) 6)));
                      if (hlds__goal_form__succeeded)
                        {
                          hlds__goal_form__Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__Reason_55, (MR_Integer) 1)));
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
                          hlds__goal_form__succeeded = ((MR_Integer) 1 == (MR_Integer) 1);
                        }
                      else
                        {
                          MR_Word hlds__goal_form__Var_116;

                          {
                            hlds__goal_form__goal_may_allocate_heap_2_p_0(hlds__goal_form__SubGoal_75, &hlds__goal_form__Var_116);
                          }
                          hlds__goal_form__succeeded = ((MR_Integer) 1 == hlds__goal_form__Var_116);
                        }
                    }
                    break;
                  case (MR_Integer) 6:
                    {
                      MR_Word hlds__goal_form__Cond_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_9, (MR_Integer) 2)));
                      MR_Word hlds__goal_form__Then_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_9, (MR_Integer) 3)));
                      MR_Word hlds__goal_form__Else_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_9, (MR_Integer) 4)));
                      MR_Word hlds__goal_form___Vars_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_9, (MR_Integer) 1)));
                      MR_Word hlds__goal_form__Var_76;

                      {
                        hlds__goal_form__goal_may_allocate_heap_2_p_0(hlds__goal_form__Cond_51, &hlds__goal_form__Var_76);
                      }
                      hlds__goal_form__succeeded = ((MR_Integer) 1 == hlds__goal_form__Var_76);
                      if (hlds__goal_form__succeeded)
                        {
                          hlds__goal_form__succeeded = ((MR_Integer) 1 == (MR_Integer) 1);
                        }
                      else
                        {
                          MR_Word hlds__goal_form__Var_77;

                          {
                            hlds__goal_form__goal_may_allocate_heap_2_p_0(hlds__goal_form__Then_52, &hlds__goal_form__Var_77);
                          }
                          hlds__goal_form__succeeded = ((MR_Integer) 1 == hlds__goal_form__Var_77);
                          if (hlds__goal_form__succeeded)
                            {
                              hlds__goal_form__succeeded = ((MR_Integer) 1 == (MR_Integer) 1);
                            }
                          else
                            {
                              MR_Word hlds__goal_form__Var_103;

                              {
                                hlds__goal_form__goal_may_allocate_heap_2_p_0(hlds__goal_form__Else_53, &hlds__goal_form__Var_103);
                              }
                              hlds__goal_form__succeeded = ((MR_Integer) 1 == hlds__goal_form__Var_103);
                            }
                        }
                    }
                    break;
                  case (MR_Integer) 7:
                    {
                      MR_Word hlds__goal_form__ShortHand_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_9, (MR_Integer) 1)));

                      switch (MR_tag((MR_Word) hlds__goal_form__ShortHand_58)) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 0:
                          {
                            MR_Word hlds__goal_form__GoalA_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__ShortHand_58, (MR_Integer) 0)));
                            MR_Word hlds__goal_form__GoalB_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__ShortHand_58, (MR_Integer) 1)));
                            MR_Word hlds__goal_form__Var_78;

                            {
                              hlds__goal_form__goal_may_allocate_heap_2_p_0(hlds__goal_form__GoalA_69, &hlds__goal_form__Var_78);
                            }
                            hlds__goal_form__succeeded = ((MR_Integer) 1 == hlds__goal_form__Var_78);
                            if (hlds__goal_form__succeeded)
                              {
                                hlds__goal_form__succeeded = ((MR_Integer) 1 == (MR_Integer) 1);
                              }
                            else
                              {
                                MR_Word hlds__goal_form__Var_123;

                                {
                                  hlds__goal_form__goal_may_allocate_heap_2_p_0(hlds__goal_form__GoalB_70, &hlds__goal_form__Var_123);
                                }
                                hlds__goal_form__succeeded = ((MR_Integer) 1 == hlds__goal_form__Var_123);
                              }
                          }
                          break;
                        case (MR_Integer) 1:
                        case (MR_Integer) 2:
                          {
                            hlds__goal_form__succeeded = ((MR_Integer) 1 == (MR_Integer) 1);
                          }
                          break;
                      }
                    }
                    break;
                }
                break;
            }
            if (hlds__goal_form__succeeded)
              *hlds__goal_form__HeadVar__2_2 = (MR_Integer) 1;
            else
              {
                /* direct tailcall eliminated */
                {
                  MR_Word hlds__goal_form__next_value_of_HeadVar__1_1 = hlds__goal_form__Goals_4;

                  hlds__goal_form__HeadVar__1_1 = hlds__goal_form__next_value_of_HeadVar__1_1;
                }
                continue;
              }
          }
      }
      break;
    }
}

static void MR_CALL 
hlds__goal_form__goal_may_allocate_heap_2_p_0(
  MR_Word hlds__goal_form__HeadVar__1_1,
  MR_Word * hlds__goal_form__May_5)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool hlds__goal_form__succeeded;
        MR_Word hlds__goal_form__GoalExpr_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word hlds__goal_form___GoalInfo_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__HeadVar__1_1, (MR_Integer) 1)));

        switch (MR_tag((MR_Word) hlds__goal_form__GoalExpr_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word hlds__goal_form__SubGoal_49 = (MR_Word) MR_body(((MR_Word) hlds__goal_form__GoalExpr_3), (MR_Integer) 0);

              /* direct tailcall eliminated */
              {
                MR_Word hlds__goal_form__next_value_of_HeadVar__1_1 = hlds__goal_form__SubGoal_49;

                hlds__goal_form__HeadVar__1_1 = hlds__goal_form__next_value_of_HeadVar__1_1;
              }
              continue;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word hlds__goal_form__Unification_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__GoalExpr_3, (MR_Integer) 3)));
              MR_Word hlds__goal_form__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__GoalExpr_3, (MR_Integer) 0)));
              MR_Word hlds__goal_form__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__GoalExpr_3, (MR_Integer) 1)));
              MR_Word hlds__goal_form__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__GoalExpr_3, (MR_Integer) 2)));
              MR_Word hlds__goal_form__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__GoalExpr_3, (MR_Integer) 4)));
              MR_Word hlds__goal_form__Args_15;
              MR_Word hlds__goal_form__Var_13;
              MR_Word hlds__goal_form__Var_14;
              MR_Word hlds__goal_form__Var_16;
              MR_Word hlds__goal_form__Var_17;
              MR_Word hlds__goal_form__Var_18;
              MR_Word hlds__goal_form__Var_19;
              MR_Word hlds__goal_form__Var_20;
              MR_Word hlds__goal_form__Var_21;

              hlds__goal_form__succeeded = ((MR_tag((MR_Word) hlds__goal_form__Unification_11)) == (MR_mktag((MR_Integer) 0)));
              if (hlds__goal_form__succeeded)
                {
                  hlds__goal_form__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Unification_11, (MR_Integer) 0)));
                  hlds__goal_form__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Unification_11, (MR_Integer) 1)));
                  hlds__goal_form__Args_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Unification_11, (MR_Integer) 2)));
                  hlds__goal_form__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Unification_11, (MR_Integer) 3)));
                  hlds__goal_form__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Unification_11, (MR_Integer) 4)));
                  hlds__goal_form__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Unification_11, (MR_Integer) 5)));
                  hlds__goal_form__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Unification_11, (MR_Integer) 6)));
                  hlds__goal_form__succeeded = ((MR_tag((MR_Word) hlds__goal_form__Args_15)) == (MR_mktag((MR_Integer) 1)));
                  if (hlds__goal_form__succeeded)
                    {
                      hlds__goal_form__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__Args_15, (MR_Integer) 0)));
                      hlds__goal_form__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__Args_15, (MR_Integer) 1)));
                    }
                }
              if (hlds__goal_form__succeeded)
                *hlds__goal_form__May_5 = (MR_Integer) 1;
              else
                *hlds__goal_form__May_5 = (MR_Integer) 0;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word hlds__goal_form__Builtin_25 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__GoalExpr_3, (MR_Integer) 3)));
              MR_Word hlds__goal_form__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__GoalExpr_3, (MR_Integer) 0)));
              MR_Integer hlds__goal_form__Var_23 = ((MR_Integer) (MR_hl_field(MR_mktag(2), hlds__goal_form__GoalExpr_3, (MR_Integer) 1)));
              MR_Word hlds__goal_form__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__GoalExpr_3, (MR_Integer) 2)));
              MR_Word hlds__goal_form__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__GoalExpr_3, (MR_Integer) 4)));
              MR_Word hlds__goal_form__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__GoalExpr_3, (MR_Integer) 5)));

              switch (hlds__goal_form__Builtin_25) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  *hlds__goal_form__May_5 = (MR_Integer) 0;
                  break;
                case (MR_Integer) 1:
                  *hlds__goal_form__May_5 = (MR_Integer) 1;
                  break;
              }
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_3, (MR_Integer) 0)))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *hlds__goal_form__May_5 = (MR_Integer) 1;
                break;
              case (MR_Integer) 1:
                *hlds__goal_form__May_5 = (MR_Integer) 1;
                break;
              case (MR_Integer) 2:
                {
                  MR_Word hlds__goal_form__ConjType_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_3, (MR_Integer) 1)));
                  MR_Word hlds__goal_form__Goals_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_3, (MR_Integer) 2)));

                  switch (hlds__goal_form__ConjType_40) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 1:
                      *hlds__goal_form__May_5 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 0:
                      {
                        hlds__goal_form__goal_list_may_allocate_heap_2_p_0(hlds__goal_form__Goals_41, hlds__goal_form__May_5);
                      }
                      break;
                  }
                }
                break;
              case (MR_Integer) 3:
                {
                  MR_Word hlds__goal_form__Goals_69 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_3, (MR_Integer) 1)));

                  {
                    hlds__goal_form__goal_list_may_allocate_heap_2_p_0(hlds__goal_form__Goals_69, hlds__goal_form__May_5);
                  }
                }
                break;
              case (MR_Integer) 4:
                {
                  MR_Word hlds__goal_form__Cases_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_3, (MR_Integer) 3)));
                  MR_Word hlds__goal_form___Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_3, (MR_Integer) 1)));
                  MR_Word hlds__goal_form___CanFail_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_3, (MR_Integer) 2)));

                  {
                    hlds__goal_form__cases_may_allocate_heap_2_p_0(hlds__goal_form__Cases_44, hlds__goal_form__May_5);
                  }
                }
                break;
              case (MR_Integer) 5:
                {
                  MR_Word hlds__goal_form__Reason_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_3, (MR_Integer) 1)));
                  MR_Word hlds__goal_form__SubGoal_70 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_3, (MR_Integer) 2)));
                  MR_Word hlds__goal_form__FGT_52;
                  MR_Word hlds__goal_form__Var_51;

                  hlds__goal_form__succeeded = ((((MR_tag((MR_Word) hlds__goal_form__Reason_50)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__Reason_50, (MR_Integer) 0)))) == (MR_Integer) 6)));
                  if (hlds__goal_form__succeeded)
                    {
                      hlds__goal_form__Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__Reason_50, (MR_Integer) 1)));
                      hlds__goal_form__FGT_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__Reason_50, (MR_Integer) 2)));
                      switch (hlds__goal_form__FGT_52) {
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
                    *hlds__goal_form__May_5 = (MR_Integer) 1;
                  else
                    {
                      /* direct tailcall eliminated */
                      {
                        MR_Word hlds__goal_form__next_value_of_HeadVar__1_1 = hlds__goal_form__SubGoal_70;

                        hlds__goal_form__HeadVar__1_1 = hlds__goal_form__next_value_of_HeadVar__1_1;
                      }
                      continue;
                    }
                }
                break;
              case (MR_Integer) 6:
                {
                  MR_Word hlds__goal_form__Cond_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_3, (MR_Integer) 2)));
                  MR_Word hlds__goal_form__Then_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_3, (MR_Integer) 3)));
                  MR_Word hlds__goal_form__Else_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_3, (MR_Integer) 4)));
                  MR_Word hlds__goal_form___Vars_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_3, (MR_Integer) 1)));
                  MR_Word hlds__goal_form__Var_71;

                  {
                    hlds__goal_form__goal_may_allocate_heap_2_p_0(hlds__goal_form__Cond_46, &hlds__goal_form__Var_71);
                  }
                  hlds__goal_form__succeeded = ((MR_Integer) 1 == hlds__goal_form__Var_71);
                  if (hlds__goal_form__succeeded)
                    *hlds__goal_form__May_5 = (MR_Integer) 1;
                  else
                    {
                      MR_Word hlds__goal_form__Var_72;

                      {
                        hlds__goal_form__goal_may_allocate_heap_2_p_0(hlds__goal_form__Then_47, &hlds__goal_form__Var_72);
                      }
                      hlds__goal_form__succeeded = ((MR_Integer) 1 == hlds__goal_form__Var_72);
                      if (hlds__goal_form__succeeded)
                        *hlds__goal_form__May_5 = (MR_Integer) 1;
                      else
                        {
                          /* direct tailcall eliminated */
                          {
                            MR_Word hlds__goal_form__next_value_of_HeadVar__1_1 = hlds__goal_form__Else_48;

                            hlds__goal_form__HeadVar__1_1 = hlds__goal_form__next_value_of_HeadVar__1_1;
                          }
                          continue;
                        }
                    }
                }
                break;
              case (MR_Integer) 7:
                {
                  MR_Word hlds__goal_form__ShortHand_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_3, (MR_Integer) 1)));

                  switch (MR_tag((MR_Word) hlds__goal_form__ShortHand_53)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        MR_Word hlds__goal_form__GoalA_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__ShortHand_53, (MR_Integer) 0)));
                        MR_Word hlds__goal_form__GoalB_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__ShortHand_53, (MR_Integer) 1)));
                        MR_Word hlds__goal_form__Var_73;

                        {
                          hlds__goal_form__goal_may_allocate_heap_2_p_0(hlds__goal_form__GoalA_64, &hlds__goal_form__Var_73);
                        }
                        hlds__goal_form__succeeded = ((MR_Integer) 1 == hlds__goal_form__Var_73);
                        if (hlds__goal_form__succeeded)
                          *hlds__goal_form__May_5 = (MR_Integer) 1;
                        else
                          {
                            /* direct tailcall eliminated */
                            {
                              MR_Word hlds__goal_form__next_value_of_HeadVar__1_1 = hlds__goal_form__GoalB_65;

                              hlds__goal_form__HeadVar__1_1 = hlds__goal_form__next_value_of_HeadVar__1_1;
                            }
                            continue;
                          }
                      }
                      break;
                    case (MR_Integer) 1:
                    case (MR_Integer) 2:
                      *hlds__goal_form__May_5 = (MR_Integer) 1;
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
            MR_Word hlds__goal_form__GoalExpr_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Goal_3, (MR_Integer) 0)));
            MR_Word hlds__goal_form___GoalInfo_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Goal_3, (MR_Integer) 1)));

            switch (MR_tag((MR_Word) hlds__goal_form__GoalExpr_7)) {
              default:
                hlds__goal_form__succeeded = MR_FALSE;
                break;
              case (MR_Integer) 0:
                {
                  MR_Word hlds__goal_form__SubGoal_45 = (MR_Word) MR_body(((MR_Word) hlds__goal_form__GoalExpr_7), (MR_Integer) 0);
                  MR_Word hlds__goal_form__Var_61;

                  {
                    hlds__goal_form__Var_61 = hlds__goal_form__goal_is_flat_1_f_0(hlds__goal_form__SubGoal_45);
                  }
                  hlds__goal_form__succeeded = (hlds__goal_form__Var_61 == (MR_Integer) 1);
                }
                break;
              case (MR_Integer) 1:
              case (MR_Integer) 2:
                hlds__goal_form__succeeded = MR_TRUE;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_7, (MR_Integer) 0)))) {
                  default:
                    hlds__goal_form__succeeded = MR_FALSE;
                    break;
                  case (MR_Integer) 0:
                  case (MR_Integer) 1:
                    hlds__goal_form__succeeded = MR_TRUE;
                    break;
                  case (MR_Integer) 2:
                    {
                      MR_Word hlds__goal_form__ConjType_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_7, (MR_Integer) 1)));
                      MR_Word hlds__goal_form__Goals_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_7, (MR_Integer) 2)));
                      MR_Word hlds__goal_form__Var_56;

                      hlds__goal_form__succeeded = (hlds__goal_form__ConjType_34 == (MR_Integer) 0);
                      if (hlds__goal_form__succeeded)
                        {
                          {
                            hlds__goal_form__Var_56 = hlds__goal_form__goal_is_flat_list_1_f_0(hlds__goal_form__Goals_35);
                          }
                          hlds__goal_form__succeeded = (hlds__goal_form__Var_56 == (MR_Integer) 1);
                        }
                    }
                    break;
                  case (MR_Integer) 5:
                    {
                      MR_Word hlds__goal_form__Reason_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_7, (MR_Integer) 1)));
                      MR_Word hlds__goal_form__SubGoal_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_7, (MR_Integer) 2)));
                      MR_Word hlds__goal_form__FGT_48;
                      MR_Word hlds__goal_form__Var_47;

                      hlds__goal_form__succeeded = ((((MR_tag((MR_Word) hlds__goal_form__Reason_46)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__Reason_46, (MR_Integer) 0)))) == (MR_Integer) 6)));
                      if (hlds__goal_form__succeeded)
                        {
                          hlds__goal_form__Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__Reason_46, (MR_Integer) 1)));
                          hlds__goal_form__FGT_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__Reason_46, (MR_Integer) 2)));
                          switch (hlds__goal_form__FGT_48) {
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
                        hlds__goal_form__succeeded = MR_TRUE;
                      else
                        {
                          MR_Word hlds__goal_form__Var_64;

                          {
                            hlds__goal_form__Var_64 = hlds__goal_form__goal_is_flat_1_f_0(hlds__goal_form__SubGoal_49);
                          }
                          hlds__goal_form__succeeded = (hlds__goal_form__Var_64 == (MR_Integer) 1);
                        }
                    }
                    break;
                }
                break;
            }
            if (hlds__goal_form__succeeded)
              {
                /* direct tailcall eliminated */
                {
                  MR_Word hlds__goal_form__next_value_of_HeadVar__1_1 = hlds__goal_form__Goals_4;

                  hlds__goal_form__HeadVar__1_1 = hlds__goal_form__next_value_of_HeadVar__1_1;
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

MR_Word MR_CALL 
hlds__goal_form__goal_is_flat_1_f_0(
  MR_Word hlds__goal_form__HeadVar__1_1)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool hlds__goal_form__succeeded;
        MR_Word hlds__goal_form__HeadVar__2_2;
        MR_Word hlds__goal_form__GoalExpr_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word hlds__goal_form___GoalInfo_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__HeadVar__1_1, (MR_Integer) 1)));

        switch (MR_tag((MR_Word) hlds__goal_form__GoalExpr_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word hlds__goal_form__SubGoal_41 = (MR_Word) MR_body(((MR_Word) hlds__goal_form__GoalExpr_3), (MR_Integer) 0);

              /* direct tailcall eliminated */
              {
                MR_Word hlds__goal_form__next_value_of_HeadVar__1_1 = hlds__goal_form__SubGoal_41;

                hlds__goal_form__HeadVar__1_1 = hlds__goal_form__next_value_of_HeadVar__1_1;
              }
              continue;
            }
            break;
          case (MR_Integer) 1:
          case (MR_Integer) 2:
            hlds__goal_form__HeadVar__2_2 = (MR_Integer) 1;
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_3, (MR_Integer) 0)))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
              case (MR_Integer) 1:
                hlds__goal_form__HeadVar__2_2 = (MR_Integer) 1;
                break;
              case (MR_Integer) 2:
                {
                  MR_Word hlds__goal_form__ConjType_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_3, (MR_Integer) 1)));
                  MR_Word hlds__goal_form__Goals_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_3, (MR_Integer) 2)));

                  switch (hlds__goal_form__ConjType_30) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 1:
                      hlds__goal_form__HeadVar__2_2 = (MR_Integer) 0;
                      break;
                    case (MR_Integer) 0:
                      {
                        hlds__goal_form__HeadVar__2_2 = hlds__goal_form__goal_is_flat_list_1_f_0(hlds__goal_form__Goals_31);
                      }
                      break;
                  }
                }
                break;
              case (MR_Integer) 3:
              case (MR_Integer) 4:
              case (MR_Integer) 6:
              case (MR_Integer) 7:
                hlds__goal_form__HeadVar__2_2 = (MR_Integer) 0;
                break;
              case (MR_Integer) 5:
                {
                  MR_Word hlds__goal_form__Reason_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_3, (MR_Integer) 1)));
                  MR_Word hlds__goal_form__SubGoal_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_3, (MR_Integer) 2)));
                  MR_Word hlds__goal_form__FGT_44;
                  MR_Word hlds__goal_form__Var_43;

                  hlds__goal_form__succeeded = ((((MR_tag((MR_Word) hlds__goal_form__Reason_42)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__Reason_42, (MR_Integer) 0)))) == (MR_Integer) 6)));
                  if (hlds__goal_form__succeeded)
                    {
                      hlds__goal_form__Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__Reason_42, (MR_Integer) 1)));
                      hlds__goal_form__FGT_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__Reason_42, (MR_Integer) 2)));
                      switch (hlds__goal_form__FGT_44) {
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
                    hlds__goal_form__HeadVar__2_2 = (MR_Integer) 1;
                  else
                    {
                      /* direct tailcall eliminated */
                      {
                        MR_Word hlds__goal_form__next_value_of_HeadVar__1_1 = hlds__goal_form__SubGoal_45;

                        hlds__goal_form__HeadVar__1_1 = hlds__goal_form__next_value_of_HeadVar__1_1;
                      }
                      continue;
                    }
                }
                break;
            }
            break;
        }
        return hlds__goal_form__HeadVar__2_2;
      }
      break;
    }
}

MR_bool MR_CALL 
hlds__goal_form__goal_can_loop_or_throw_1_p_0(
  MR_Word hlds__goal_form__Goal_2)
{
  {
    MR_bool hlds__goal_form__succeeded;
    MR_Word hlds__goal_form__Var_4;
    MR_Word hlds__goal_form__Var_6;
    MR_Word hlds__goal_form__Var_7;

    {
      hlds__goal_form__Var_4 = hlds__goal_form__goal_can_loop_func_2_f_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__goal_form__Goal_2);
    }
    hlds__goal_form__succeeded = (hlds__goal_form__Var_4 == (MR_Integer) 0);
    if (hlds__goal_form__succeeded)
      {
        hlds__goal_form__Var_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        {
          hlds__goal_form__Var_6 = hlds__goal_form__goal_can_throw_func_2_f_0(hlds__goal_form__Var_7, hlds__goal_form__Goal_2);
        }
        hlds__goal_form__succeeded = (hlds__goal_form__Var_6 == (MR_Integer) 0);
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
    MR_Word hlds__goal_form__Var_3;
    MR_Word hlds__goal_form__Var_5;
    MR_Word hlds__goal_form__Var_6;

    {
      hlds__goal_form__Var_3 = hlds__goal_form__goal_can_loop_func_2_f_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__goal_form__Goal_2);
    }
    hlds__goal_form__succeeded = (hlds__goal_form__Var_3 == (MR_Integer) 0);
    if (hlds__goal_form__succeeded)
      {
        hlds__goal_form__Var_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        {
          hlds__goal_form__Var_5 = hlds__goal_form__goal_can_throw_func_2_f_0(hlds__goal_form__Var_6, hlds__goal_form__Goal_2);
        }
        hlds__goal_form__succeeded = (hlds__goal_form__Var_5 == (MR_Integer) 0);
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
    MR_Word hlds__goal_form__Var_7;
    MR_Word hlds__goal_form__Var_8;
    MR_Word hlds__goal_form__Var_9;

    {
      hlds__goal_form__Var_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__goal_form__Var_8, 0) = ((MR_Box) (hlds__goal_form__ModuleInfo_3));
    }
    {
      hlds__goal_form__Var_7 = hlds__goal_form__goal_can_loop_func_2_f_0(hlds__goal_form__Var_8, hlds__goal_form__Goal_4);
    }
    hlds__goal_form__succeeded = (hlds__goal_form__Var_7 == (MR_Integer) 0);
    if (hlds__goal_form__succeeded)
      {
        {
          hlds__goal_form__Var_9 = hlds__goal_form__goal_can_throw_func_2_f_0(hlds__goal_form__Var_8, hlds__goal_form__Goal_4);
        }
        hlds__goal_form__succeeded = (hlds__goal_form__Var_9 == (MR_Integer) 0);
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
    MR_Word hlds__goal_form__Var_5;
    MR_Word hlds__goal_form__Var_6;
    MR_Word hlds__goal_form__Var_7;

    {
      hlds__goal_form__Var_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__goal_form__Var_6, 0) = ((MR_Box) (hlds__goal_form__ModuleInfo_3));
    }
    {
      hlds__goal_form__Var_5 = hlds__goal_form__goal_can_loop_func_2_f_0(hlds__goal_form__Var_6, hlds__goal_form__Goal_4);
    }
    hlds__goal_form__succeeded = (hlds__goal_form__Var_5 == (MR_Integer) 0);
    if (hlds__goal_form__succeeded)
      {
        {
          hlds__goal_form__Var_7 = hlds__goal_form__goal_can_throw_func_2_f_0(hlds__goal_form__Var_6, hlds__goal_form__Goal_4);
        }
        hlds__goal_form__succeeded = (hlds__goal_form__Var_7 == (MR_Integer) 0);
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
    MR_Word hlds__goal_form__Var_5;
    MR_Word hlds__goal_form__Var_6;

    {
      hlds__goal_form__Var_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__goal_form__Var_6, 0) = ((MR_Box) (hlds__goal_form__ModuleInfo_3));
    }
    {
      hlds__goal_form__Var_5 = hlds__goal_form__goal_can_throw_func_2_f_0(hlds__goal_form__Var_6, hlds__goal_form__Goal_4);
    }
    hlds__goal_form__succeeded = (hlds__goal_form__Var_5 == (MR_Integer) 1);
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
    MR_Word hlds__goal_form__Var_5;
    MR_Word hlds__goal_form__Var_6;

    {
      hlds__goal_form__Var_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__goal_form__Var_6, 0) = ((MR_Box) (hlds__goal_form__ModuleInfo_3));
    }
    {
      hlds__goal_form__Var_5 = hlds__goal_form__goal_can_throw_func_2_f_0(hlds__goal_form__Var_6, hlds__goal_form__Goal_4);
    }
    hlds__goal_form__succeeded = (hlds__goal_form__Var_5 == (MR_Integer) 0);
    return hlds__goal_form__succeeded;
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
            MR_Word hlds__goal_form__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__HeadVar__2_2, (MR_Integer) 0)));
            MR_Word hlds__goal_form__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Var_10, (MR_Integer) 0)));
            MR_Word hlds__goal_form__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Var_10, (MR_Integer) 1)));
            MR_Word hlds__goal_form__Var_11;

            hlds__goal_form__Goal_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Var_10, (MR_Integer) 2)));
            {
              hlds__goal_form__Var_11 = hlds__goal_form__goal_can_throw_func_2_f_0(hlds__goal_form__MaybeModuleInfo_1, hlds__goal_form__Goal_8);
            }
            hlds__goal_form__succeeded = (hlds__goal_form__Var_11 == (MR_Integer) 1);
            if (hlds__goal_form__succeeded)
              hlds__goal_form__HeadVar__3_3 = (MR_Integer) 1;
            else
              {
                /* direct tailcall eliminated */
                {
                  MR_Word hlds__goal_form__next_value_of_HeadVar__2_2 = hlds__goal_form__Cases_9;

                  hlds__goal_form__HeadVar__2_2 = hlds__goal_form__next_value_of_HeadVar__2_2;
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
            MR_Word hlds__goal_form__Var_8;

            {
              hlds__goal_form__Var_8 = hlds__goal_form__goal_can_throw_func_2_f_0(hlds__goal_form__MaybeModuleInfo_1, hlds__goal_form__Goal_6);
            }
            hlds__goal_form__succeeded = (hlds__goal_form__Var_8 == (MR_Integer) 1);
            if (hlds__goal_form__succeeded)
              hlds__goal_form__HeadVar__3_3 = (MR_Integer) 1;
            else
              {
                /* direct tailcall eliminated */
                {
                  MR_Word hlds__goal_form__next_value_of_HeadVar__2_2 = hlds__goal_form__Goals_7;

                  hlds__goal_form__HeadVar__2_2 = hlds__goal_form__next_value_of_HeadVar__2_2;
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
hlds__goal_form__goal_can_throw_func_2_f_0(
  MR_Word hlds__goal_form__MaybeModuleInfo_4,
  MR_Word hlds__goal_form__HeadVar__2_2)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
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
          switch (MR_tag((MR_Word) hlds__goal_form__GoalExpr_5)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word hlds__goal_form__SubGoal_71 = (MR_Word) MR_body(((MR_Word) hlds__goal_form__GoalExpr_5), (MR_Integer) 0);

                /* direct tailcall eliminated */
                {
                  MR_Word hlds__goal_form__next_value_of_HeadVar__2_2 = hlds__goal_form__SubGoal_71;

                  hlds__goal_form__HeadVar__2_2 = hlds__goal_form__next_value_of_HeadVar__2_2;
                }
                continue;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word hlds__goal_form__Uni_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__GoalExpr_5, (MR_Integer) 3)));
                MR_Word hlds__goal_form__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__GoalExpr_5, (MR_Integer) 0)));
                MR_Word hlds__goal_form__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__GoalExpr_5, (MR_Integer) 1)));
                MR_Word hlds__goal_form__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__GoalExpr_5, (MR_Integer) 2)));
                MR_Word hlds__goal_form__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__GoalExpr_5, (MR_Integer) 4)));

                switch (MR_tag((MR_Word) hlds__goal_form__Uni_15)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                  case (MR_Integer) 1:
                  case (MR_Integer) 2:
                    hlds__goal_form__CanThrow_7 = (MR_Integer) 0;
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__Uni_15, (MR_Integer) 0)))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        hlds__goal_form__CanThrow_7 = (MR_Integer) 0;
                        break;
                      case (MR_Integer) 1:
                        hlds__goal_form__CanThrow_7 = (MR_Integer) 1;
                        break;
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word hlds__goal_form__PredId_37 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__GoalExpr_5, (MR_Integer) 0)));
                MR_Integer hlds__goal_form__ProcId_38 = ((MR_Integer) (MR_hl_field(MR_mktag(2), hlds__goal_form__GoalExpr_5, (MR_Integer) 1)));
                MR_Word hlds__goal_form__Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__GoalExpr_5, (MR_Integer) 2)));
                MR_Word hlds__goal_form__Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__GoalExpr_5, (MR_Integer) 3)));
                MR_Word hlds__goal_form__Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__GoalExpr_5, (MR_Integer) 4)));
                MR_Word hlds__goal_form__Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__GoalExpr_5, (MR_Integer) 5)));
                MR_Word hlds__goal_form__ModuleInfo_43;
                MR_Word hlds__goal_form__ProcInfo_45;
                MR_Word hlds__goal_form__MaybeExceptionInfo_46;
                MR_Word hlds__goal_form__ExceptionInfo_47;
                MR_Word hlds__goal_form__Var_94;
                MR_Word hlds__goal_form___PredInfo_44;
                MR_Word hlds__goal_form__Var_48;

                hlds__goal_form__succeeded = ((MR_tag((MR_Word) hlds__goal_form__MaybeModuleInfo_4)) == (MR_mktag((MR_Integer) 1)));
                if (hlds__goal_form__succeeded)
                  {
                    hlds__goal_form__ModuleInfo_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__MaybeModuleInfo_4, (MR_Integer) 0)));
                    {
                      hlds__hlds_module__module_info_pred_proc_info_5_p_0(hlds__goal_form__ModuleInfo_43, hlds__goal_form__PredId_37, hlds__goal_form__ProcId_38, &hlds__goal_form___PredInfo_44, &hlds__goal_form__ProcInfo_45);
                    }
                    {
                      hlds__hlds_pred__proc_info_get_exception_info_2_p_0(hlds__goal_form__ProcInfo_45, &hlds__goal_form__MaybeExceptionInfo_46);
                    }
                    hlds__goal_form__succeeded = ((MR_tag((MR_Word) hlds__goal_form__MaybeExceptionInfo_46)) == (MR_mktag((MR_Integer) 1)));
                    if (hlds__goal_form__succeeded)
                      {
                        hlds__goal_form__ExceptionInfo_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__MaybeExceptionInfo_46, (MR_Integer) 0)));
                        hlds__goal_form__Var_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__ExceptionInfo_47, (MR_Integer) 0)));
                        hlds__goal_form__Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__ExceptionInfo_47, (MR_Integer) 1)));
                        hlds__goal_form__succeeded = (hlds__goal_form__Var_94 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      }
                  }
                if (hlds__goal_form__succeeded)
                  hlds__goal_form__CanThrow_7 = (MR_Integer) 0;
                else
                  hlds__goal_form__CanThrow_7 = (MR_Integer) 1;
              }
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_5, (MR_Integer) 0)))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  hlds__goal_form__CanThrow_7 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word hlds__goal_form__Attributes_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_5, (MR_Integer) 1)));
                    MR_Word hlds__goal_form__ExceptionStatus_56;
                    MR_Word hlds__goal_form__Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_5, (MR_Integer) 2)));
                    MR_Integer hlds__goal_form__Var_51 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_5, (MR_Integer) 3)));
                    MR_Word hlds__goal_form__Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_5, (MR_Integer) 4)));
                    MR_Word hlds__goal_form__Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_5, (MR_Integer) 5)));
                    MR_Word hlds__goal_form__Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_5, (MR_Integer) 6)));
                    MR_Word hlds__goal_form__Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_5, (MR_Integer) 7)));

                    {
                      hlds__goal_form__ExceptionStatus_56 = parse_tree__prog_data_foreign__get_may_throw_exception_1_f_0(hlds__goal_form__Attributes_49);
                    }
                    switch (hlds__goal_form__ExceptionStatus_56) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 1:
                        {
                          MR_Word hlds__goal_form__Var_93;

                          {
                            hlds__goal_form__Var_93 = parse_tree__prog_data_foreign__get_may_call_mercury_1_f_0(hlds__goal_form__Attributes_49);
                          }
                          hlds__goal_form__succeeded = (hlds__goal_form__Var_93 == (MR_Integer) 1);
                        }
                        break;
                      case (MR_Integer) 0:
                        hlds__goal_form__succeeded = MR_TRUE;
                        break;
                    }
                    if (hlds__goal_form__succeeded)
                      hlds__goal_form__CanThrow_7 = (MR_Integer) 0;
                    else
                      hlds__goal_form__CanThrow_7 = (MR_Integer) 1;
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word hlds__goal_form__Goals_63 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_5, (MR_Integer) 2)));
                    MR_Word hlds__goal_form___ConjType_62 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_5, (MR_Integer) 1)));

                    {
                      hlds__goal_form__CanThrow_7 = hlds__goal_form__goal_list_can_throw_2_f_0(hlds__goal_form__MaybeModuleInfo_4, hlds__goal_form__Goals_63);
                    }
                  }
                  break;
                case (MR_Integer) 3:
                  {
                    MR_Word hlds__goal_form__Goals_96 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_5, (MR_Integer) 1)));

                    {
                      hlds__goal_form__CanThrow_7 = hlds__goal_form__goal_list_can_throw_2_f_0(hlds__goal_form__MaybeModuleInfo_4, hlds__goal_form__Goals_96);
                    }
                  }
                  break;
                case (MR_Integer) 4:
                  {
                    MR_Word hlds__goal_form__Cases_66 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_5, (MR_Integer) 3)));
                    MR_Word hlds__goal_form___Var_64 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_5, (MR_Integer) 1)));
                    MR_Word hlds__goal_form___CanFail_65 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_5, (MR_Integer) 2)));

                    {
                      hlds__goal_form__CanThrow_7 = hlds__goal_form__case_list_can_throw_2_f_0(hlds__goal_form__MaybeModuleInfo_4, hlds__goal_form__Cases_66);
                    }
                  }
                  break;
                case (MR_Integer) 5:
                  {
                    MR_Word hlds__goal_form__Reason_72 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_5, (MR_Integer) 1)));
                    MR_Word hlds__goal_form__SubGoal_95 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_5, (MR_Integer) 2)));
                    MR_Word hlds__goal_form__FGT_74;
                    MR_Word hlds__goal_form__Var_73;

                    hlds__goal_form__succeeded = ((((MR_tag((MR_Word) hlds__goal_form__Reason_72)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__Reason_72, (MR_Integer) 0)))) == (MR_Integer) 6)));
                    if (hlds__goal_form__succeeded)
                      {
                        hlds__goal_form__Var_73 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__Reason_72, (MR_Integer) 1)));
                        hlds__goal_form__FGT_74 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__Reason_72, (MR_Integer) 2)));
                        switch (hlds__goal_form__FGT_74) {
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
                      hlds__goal_form__CanThrow_7 = (MR_Integer) 0;
                    else
                      {
                        /* direct tailcall eliminated */
                        {
                          MR_Word hlds__goal_form__next_value_of_HeadVar__2_2 = hlds__goal_form__SubGoal_95;

                          hlds__goal_form__HeadVar__2_2 = hlds__goal_form__next_value_of_HeadVar__2_2;
                        }
                        continue;
                      }
                  }
                  break;
                case (MR_Integer) 6:
                  {
                    MR_Word hlds__goal_form__Cond_68 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_5, (MR_Integer) 2)));
                    MR_Word hlds__goal_form__Then_69 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_5, (MR_Integer) 3)));
                    MR_Word hlds__goal_form__Else_70 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_5, (MR_Integer) 4)));
                    MR_Word hlds__goal_form__Var_67 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_5, (MR_Integer) 1)));
                    MR_Word hlds__goal_form__Var_91;

                    {
                      hlds__goal_form__Var_91 = hlds__goal_form__goal_can_throw_func_2_f_0(hlds__goal_form__MaybeModuleInfo_4, hlds__goal_form__Cond_68);
                    }
                    hlds__goal_form__succeeded = (hlds__goal_form__Var_91 == (MR_Integer) 1);
                    if (hlds__goal_form__succeeded)
                      hlds__goal_form__CanThrow_7 = (MR_Integer) 1;
                    else
                      {
                        MR_Word hlds__goal_form__Var_92;

                        {
                          hlds__goal_form__Var_92 = hlds__goal_form__goal_can_throw_func_2_f_0(hlds__goal_form__MaybeModuleInfo_4, hlds__goal_form__Then_69);
                        }
                        hlds__goal_form__succeeded = (hlds__goal_form__Var_92 == (MR_Integer) 1);
                        if (hlds__goal_form__succeeded)
                          hlds__goal_form__CanThrow_7 = (MR_Integer) 1;
                        else
                          {
                            /* direct tailcall eliminated */
                            {
                              MR_Word hlds__goal_form__next_value_of_HeadVar__2_2 = hlds__goal_form__Else_70;

                              hlds__goal_form__HeadVar__2_2 = hlds__goal_form__next_value_of_HeadVar__2_2;
                            }
                            continue;
                          }
                      }
                  }
                  break;
                case (MR_Integer) 7:
                  {
                    MR_Word hlds__goal_form__ShortHand_75 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_5, (MR_Integer) 1)));

                    switch (MR_tag((MR_Word) hlds__goal_form__ShortHand_75)) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                          {
                            mercury__require__unexpected_3_p_0((MR_String) "hlds.goal_form", (MR_String) "function \140hlds.goal_form.goal_expr_can_throw\'/2", (MR_String) "bi_implication");
                          }
                        }
                        break;
                      case (MR_Integer) 1:
                        hlds__goal_form__CanThrow_7 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 2:
                        hlds__goal_form__CanThrow_7 = (MR_Integer) 1;
                        break;
                    }
                  }
                  break;
              }
              break;
          }
        return hlds__goal_form__CanThrow_7;
      }
      break;
    }
}

MR_bool MR_CALL 
hlds__goal_form__goal_can_loop_2_p_0(
  MR_Word hlds__goal_form__ModuleInfo_3,
  MR_Word hlds__goal_form__Goal_4)
{
  {
    MR_bool hlds__goal_form__succeeded;
    MR_Word hlds__goal_form__Var_5;
    MR_Word hlds__goal_form__Var_6;

    {
      hlds__goal_form__Var_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__goal_form__Var_6, 0) = ((MR_Box) (hlds__goal_form__ModuleInfo_3));
    }
    {
      hlds__goal_form__Var_5 = hlds__goal_form__goal_can_loop_func_2_f_0(hlds__goal_form__Var_6, hlds__goal_form__Goal_4);
    }
    hlds__goal_form__succeeded = (hlds__goal_form__Var_5 == (MR_Integer) 1);
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
    MR_Word hlds__goal_form__Var_5;
    MR_Word hlds__goal_form__Var_6;

    {
      hlds__goal_form__Var_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__goal_form__Var_6, 0) = ((MR_Box) (hlds__goal_form__ModuleInfo_3));
    }
    {
      hlds__goal_form__Var_5 = hlds__goal_form__goal_can_loop_func_2_f_0(hlds__goal_form__Var_6, hlds__goal_form__Goal_4);
    }
    hlds__goal_form__succeeded = (hlds__goal_form__Var_5 == (MR_Integer) 0);
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
    MR_Word hlds__goal_form__Var_14;
    MR_Word hlds__goal_form__Var_15;

    {
      hlds__goal_form__Var_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__goal_form__Var_15, 0) = ((MR_Box) (hlds__goal_form__STATE_VARIABLE_ModuleInfo_0_9));
    }
    {
      hlds__goal_form__Var_14 = hlds__goal_form__goal_can_loop_func_2_f_0(hlds__goal_form__Var_15, hlds__goal_form__Goal_5);
    }
    hlds__goal_form__succeeded = (hlds__goal_form__Var_14 == (MR_Integer) 0);
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
            MR_Word hlds__goal_form__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__HeadVar__2_2, (MR_Integer) 0)));
            MR_Word hlds__goal_form__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Var_10, (MR_Integer) 0)));
            MR_Word hlds__goal_form__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Var_10, (MR_Integer) 1)));
            MR_Word hlds__goal_form__Var_11;

            hlds__goal_form__Goal_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Var_10, (MR_Integer) 2)));
            {
              hlds__goal_form__Var_11 = hlds__goal_form__goal_can_loop_func_2_f_0(hlds__goal_form__MaybeModuleInfo_1, hlds__goal_form__Goal_8);
            }
            hlds__goal_form__succeeded = (hlds__goal_form__Var_11 == (MR_Integer) 1);
            if (hlds__goal_form__succeeded)
              hlds__goal_form__HeadVar__3_3 = (MR_Integer) 1;
            else
              {
                /* direct tailcall eliminated */
                {
                  MR_Word hlds__goal_form__next_value_of_HeadVar__2_2 = hlds__goal_form__Cases_9;

                  hlds__goal_form__HeadVar__2_2 = hlds__goal_form__next_value_of_HeadVar__2_2;
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
            MR_Word hlds__goal_form__Var_8;

            {
              hlds__goal_form__Var_8 = hlds__goal_form__goal_can_loop_func_2_f_0(hlds__goal_form__MaybeModuleInfo_1, hlds__goal_form__Goal_6);
            }
            hlds__goal_form__succeeded = (hlds__goal_form__Var_8 == (MR_Integer) 1);
            if (hlds__goal_form__succeeded)
              hlds__goal_form__HeadVar__3_3 = (MR_Integer) 1;
            else
              {
                /* direct tailcall eliminated */
                {
                  MR_Word hlds__goal_form__next_value_of_HeadVar__2_2 = hlds__goal_form__Goals_7;

                  hlds__goal_form__HeadVar__2_2 = hlds__goal_form__next_value_of_HeadVar__2_2;
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
        MR_Word hlds__goal_form__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Goal_5, (MR_Integer) 1)));

        switch (MR_tag((MR_Word) hlds__goal_form__GoalExpr_7)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word hlds__goal_form__SubGoal_69 = (MR_Word) MR_body(((MR_Word) hlds__goal_form__GoalExpr_7), (MR_Integer) 0);

              /* direct tailcall eliminated */
              {
                MR_Word hlds__goal_form__next_value_of_Goal_5 = hlds__goal_form__SubGoal_69;

                hlds__goal_form__Goal_5 = hlds__goal_form__next_value_of_Goal_5;
              }
              continue;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word hlds__goal_form__Uni_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__GoalExpr_7, (MR_Integer) 3)));
              MR_Word hlds__goal_form__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__GoalExpr_7, (MR_Integer) 0)));
              MR_Word hlds__goal_form__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__GoalExpr_7, (MR_Integer) 1)));
              MR_Word hlds__goal_form__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__GoalExpr_7, (MR_Integer) 2)));
              MR_Word hlds__goal_form__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__GoalExpr_7, (MR_Integer) 4)));

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
              MR_Word hlds__goal_form__Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__GoalExpr_7, (MR_Integer) 2)));
              MR_Word hlds__goal_form__Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__GoalExpr_7, (MR_Integer) 3)));
              MR_Word hlds__goal_form__Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__GoalExpr_7, (MR_Integer) 4)));
              MR_Word hlds__goal_form__Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__GoalExpr_7, (MR_Integer) 5)));
              MR_Word hlds__goal_form__ModuleInfo_40;
              MR_Word hlds__goal_form__ProcInfo_42;
              MR_Word hlds__goal_form__Var_41;

              hlds__goal_form__succeeded = ((MR_tag((MR_Word) hlds__goal_form__MaybeModuleInfo_4)) == (MR_mktag((MR_Integer) 1)));
              if (hlds__goal_form__succeeded)
                {
                  hlds__goal_form__ModuleInfo_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__MaybeModuleInfo_4, (MR_Integer) 0)));
                  {
                    hlds__hlds_module__module_info_pred_proc_info_5_p_0(hlds__goal_form__ModuleInfo_40, hlds__goal_form__PredId_34, hlds__goal_form__ProcId_35, &hlds__goal_form__Var_41, &hlds__goal_form__ProcInfo_42);
                  }
                  {
                    MR_Word hlds__goal_form__MaybeTermInfo_43;
                    MR_Word hlds__goal_form__Var_97;

                    {
                      hlds__hlds_pred__proc_info_get_maybe_termination_info_2_p_0(hlds__goal_form__ProcInfo_42, &hlds__goal_form__MaybeTermInfo_43);
                    }
                    hlds__goal_form__succeeded = ((MR_tag((MR_Word) hlds__goal_form__MaybeTermInfo_43)) == (MR_mktag((MR_Integer) 1)));
                    if (hlds__goal_form__succeeded)
                      {
                        hlds__goal_form__Var_97 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__MaybeTermInfo_43, (MR_Integer) 0)));
                        hlds__goal_form__succeeded = ((MR_tag((MR_Word) hlds__goal_form__Var_97)) == (MR_mktag((MR_Integer) 0)));
                      }
                  }
                  if (!(hlds__goal_form__succeeded))
                    {
                      MR_Word hlds__goal_form__Term2Info_45;
                      MR_Word hlds__goal_form__Var_95;
                      MR_Word hlds__goal_form__Var_96;
                      MR_Word hlds__goal_form__Var_46;

                      {
                        hlds__hlds_pred__proc_info_get_termination2_info_2_p_0(hlds__goal_form__ProcInfo_42, &hlds__goal_form__Term2Info_45);
                      }
                      {
                        hlds__goal_form__Var_95 = transform_hlds__term_constr_main_types__term2_info_get_term_status_1_f_0(hlds__goal_form__Term2Info_45);
                      }
                      hlds__goal_form__succeeded = ((MR_tag((MR_Word) hlds__goal_form__Var_95)) == (MR_mktag((MR_Integer) 1)));
                      if (hlds__goal_form__succeeded)
                        {
                          hlds__goal_form__Var_96 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__Var_95, (MR_Integer) 0)));
                          hlds__goal_form__succeeded = ((MR_tag((MR_Word) hlds__goal_form__Var_96)) == (MR_mktag((MR_Integer) 0)));
                          if (hlds__goal_form__succeeded)
                            hlds__goal_form__Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Var_96, (MR_Integer) 0)));
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
                  MR_Word hlds__goal_form__Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_7, (MR_Integer) 2)));
                  MR_Integer hlds__goal_form__Var_54 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_7, (MR_Integer) 3)));
                  MR_Word hlds__goal_form__Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_7, (MR_Integer) 4)));
                  MR_Word hlds__goal_form__Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_7, (MR_Integer) 5)));
                  MR_Word hlds__goal_form__Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_7, (MR_Integer) 6)));
                  MR_Word hlds__goal_form__Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_7, (MR_Integer) 7)));
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
                        MR_Word hlds__goal_form__Var_94;

                        {
                          hlds__goal_form__Var_94 = parse_tree__prog_data_foreign__get_may_call_mercury_1_f_0(hlds__goal_form__Attributes_52);
                        }
                        hlds__goal_form__succeeded = (hlds__goal_form__Var_94 == (MR_Integer) 1);
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
                  MR_Word hlds__goal_form__Var_103 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_7, (MR_Integer) 2)));
                  MR_Word hlds__goal_form__Var_104 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_7, (MR_Integer) 1)));

                  switch (hlds__goal_form__Var_104) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 1:
                      hlds__goal_form__CanLoop_6 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 0:
                      {
                        hlds__goal_form__CanLoop_6 = hlds__goal_form__goal_list_can_loop_2_f_0(hlds__goal_form__MaybeModuleInfo_4, hlds__goal_form__Var_103);
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
                  MR_Word hlds__goal_form__Var_71;

                  hlds__goal_form__succeeded = ((((MR_tag((MR_Word) hlds__goal_form__Reason_70)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__Reason_70, (MR_Integer) 0)))) == (MR_Integer) 6)));
                  if (hlds__goal_form__succeeded)
                    {
                      hlds__goal_form__Var_71 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__Reason_70, (MR_Integer) 1)));
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
                        MR_Word hlds__goal_form__next_value_of_Goal_5 = hlds__goal_form__SubGoal_99;

                        hlds__goal_form__Goal_5 = hlds__goal_form__next_value_of_Goal_5;
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
                  MR_Word hlds__goal_form__Var_90;

                  {
                    hlds__goal_form__Var_90 = hlds__goal_form__goal_can_loop_func_2_f_0(hlds__goal_form__MaybeModuleInfo_4, hlds__goal_form__Cond_66);
                  }
                  hlds__goal_form__succeeded = (hlds__goal_form__Var_90 == (MR_Integer) 1);
                  if (hlds__goal_form__succeeded)
                    hlds__goal_form__CanLoop_6 = (MR_Integer) 1;
                  else
                    {
                      MR_Word hlds__goal_form__Var_91;

                      {
                        hlds__goal_form__Var_91 = hlds__goal_form__goal_can_loop_func_2_f_0(hlds__goal_form__MaybeModuleInfo_4, hlds__goal_form__Then_67);
                      }
                      hlds__goal_form__succeeded = (hlds__goal_form__Var_91 == (MR_Integer) 1);
                      if (hlds__goal_form__succeeded)
                        hlds__goal_form__CanLoop_6 = (MR_Integer) 1;
                      else
                        {
                          /* direct tailcall eliminated */
                          {
                            MR_Word hlds__goal_form__next_value_of_Goal_5 = hlds__goal_form__Else_68;

                            hlds__goal_form__Goal_5 = hlds__goal_form__next_value_of_Goal_5;
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
                        MR_Word hlds__goal_form__Var_74 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__ShortHand_73, (MR_Integer) 0)));
                        MR_Word hlds__goal_form__Var_75 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__ShortHand_73, (MR_Integer) 1)));
                        MR_Word hlds__goal_form__Var_76 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__ShortHand_73, (MR_Integer) 2)));
                        MR_Word hlds__goal_form__Var_77 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__ShortHand_73, (MR_Integer) 3)));
                        MR_Word hlds__goal_form__Var_80 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__ShortHand_73, (MR_Integer) 6)));

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
                        MR_Word hlds__goal_form__Var_83 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__ShortHand_73, (MR_Integer) 0)));
                        MR_Word hlds__goal_form__Var_84 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__ShortHand_73, (MR_Integer) 1)));

                        /* direct tailcall eliminated */
                        {
                          MR_Word hlds__goal_form__next_value_of_Goal_5 = hlds__goal_form__SubGoal_100;

                          hlds__goal_form__Goal_5 = hlds__goal_form__next_value_of_Goal_5;
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
          MR_Word hlds__goal_form__Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__GoalExpr_6, (MR_Integer) 0)));
          MR_Word hlds__goal_form__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__GoalExpr_6, (MR_Integer) 1)));
          MR_Word hlds__goal_form__Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__GoalExpr_6, (MR_Integer) 2)));
          MR_Word hlds__goal_form__Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__GoalExpr_6, (MR_Integer) 4)));

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
          MR_Word hlds__goal_form__Var_92;
          MR_Word hlds__goal_form__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__GoalExpr_6, (MR_Integer) 2)));
          MR_Word hlds__goal_form__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__GoalExpr_6, (MR_Integer) 3)));
          MR_Word hlds__goal_form__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__GoalExpr_6, (MR_Integer) 4)));
          MR_Word hlds__goal_form__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_form__GoalExpr_6, (MR_Integer) 5)));

          {
            hlds__goal_form__Var_92 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), hlds__goal_form__Var_92, 0) = ((MR_Box) (hlds__goal_form__PredId_16));
            MR_hl_field(MR_mktag(0), hlds__goal_form__Var_92, 1) = ((MR_Box) (hlds__goal_form__ProcId_17));
          }
          {
            transform_hlds__exception_analysis__lookup_exception_analysis_result_4_p_0(hlds__goal_form__Var_92, &hlds__goal_form__Status_22, hlds__goal_form__STATE_VARIABLE_ModuleInfo_0_82, hlds__goal_form__STATE_VARIABLE_ModuleInfo_83);
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
              MR_Word hlds__goal_form__Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_6, (MR_Integer) 2)));
              MR_Integer hlds__goal_form__Var_63 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_6, (MR_Integer) 3)));
              MR_Word hlds__goal_form__Var_64 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_6, (MR_Integer) 4)));
              MR_Word hlds__goal_form__Var_65 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_6, (MR_Integer) 5)));
              MR_Word hlds__goal_form__Var_66 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_6, (MR_Integer) 6)));
              MR_Word hlds__goal_form__Var_67 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_6, (MR_Integer) 7)));

              {
                hlds__goal_form__ExceptionStatus_68 = parse_tree__prog_data_foreign__get_may_throw_exception_1_f_0(hlds__goal_form__Attributes_61);
              }
              switch (hlds__goal_form__ExceptionStatus_68) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  {
                    MR_Word hlds__goal_form__Var_88;

                    {
                      hlds__goal_form__Var_88 = parse_tree__prog_data_foreign__get_may_call_mercury_1_f_0(hlds__goal_form__Attributes_61);
                    }
                    hlds__goal_form__succeeded = (hlds__goal_form__Var_88 == (MR_Integer) 1);
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
              MR_Word hlds__goal_form__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_6, (MR_Integer) 1)));

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
              MR_Word hlds__goal_form__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_6, (MR_Integer) 1)));
              MR_Word hlds__goal_form__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_6, (MR_Integer) 2)));

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
              MR_Word hlds__goal_form__Var_59;

              hlds__goal_form__succeeded = ((((MR_tag((MR_Word) hlds__goal_form__Reason_58)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__Reason_58, (MR_Integer) 0)))) == (MR_Integer) 6)));
              if (hlds__goal_form__succeeded)
                {
                  hlds__goal_form__Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__Reason_58, (MR_Integer) 1)));
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
              MR_Word hlds__goal_form__Var_94;
              MR_Word hlds__goal_form__Var_95;
              MR_Word hlds__goal_form__Goals_100;
              MR_Word hlds__goal_form__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_6, (MR_Integer) 1)));

              {
                hlds__goal_form__Var_95 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), hlds__goal_form__Var_95, 0) = ((MR_Box) (hlds__goal_form__ElseGoal_15));
                MR_hl_field(MR_mktag(1), hlds__goal_form__Var_95, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                hlds__goal_form__Var_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), hlds__goal_form__Var_94, 0) = ((MR_Box) (hlds__goal_form__ThenGoal_14));
                MR_hl_field(MR_mktag(1), hlds__goal_form__Var_94, 1) = ((MR_Box) (hlds__goal_form__Var_95));
              }
              {
                hlds__goal_form__Goals_100 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), hlds__goal_form__Goals_100, 0) = ((MR_Box) (hlds__goal_form__CondGoal_13));
                MR_hl_field(MR_mktag(1), hlds__goal_form__Goals_100, 1) = ((MR_Box) (hlds__goal_form__Var_94));
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
                    MR_Word hlds__goal_form__Var_84;
                    MR_Word hlds__goal_form__Var_86;

                    {
                      hlds__goal_form__Var_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), hlds__goal_form__Var_86, 0) = ((MR_Box) (hlds__goal_form__GoalB_71));
                      MR_hl_field(MR_mktag(1), hlds__goal_form__Var_86, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    }
                    {
                      hlds__goal_form__Var_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), hlds__goal_form__Var_84, 0) = ((MR_Box) (hlds__goal_form__GoalA_70));
                      MR_hl_field(MR_mktag(1), hlds__goal_form__Var_84, 1) = ((MR_Box) (hlds__goal_form__Var_86));
                    }
                    {
                      hlds__goal_form__goals_can_throw_4_p_0(hlds__goal_form__Var_84, hlds__goal_form__Result_8, hlds__goal_form__STATE_VARIABLE_ModuleInfo_0_82, hlds__goal_form__STATE_VARIABLE_ModuleInfo_83);
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
            MR_Word hlds__goal_form__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Case_8, (MR_Integer) 0)));
            MR_Word hlds__goal_form__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Case_8, (MR_Integer) 1)));

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
                        MR_Word hlds__goal_form__next_value_of_HeadVar__1_1 = hlds__goal_form__Cases_9;
                        MR_Word hlds__goal_form__next_value_of_STATE_VARIABLE_ModuleInfo_0_3 = hlds__goal_form__STATE_VARIABLE_ModuleInfo_18_29;

                        hlds__goal_form__STATE_VARIABLE_ModuleInfo_0_3 = hlds__goal_form__next_value_of_STATE_VARIABLE_ModuleInfo_0_3;
                        hlds__goal_form__HeadVar__1_1 = hlds__goal_form__next_value_of_HeadVar__1_1;
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
                        MR_Word hlds__goal_form__next_value_of_HeadVar__1_1 = hlds__goal_form__Goals_9;
                        MR_Word hlds__goal_form__next_value_of_STATE_VARIABLE_ModuleInfo_0_3 = hlds__goal_form__STATE_VARIABLE_ModuleInfo_15_26;

                        hlds__goal_form__STATE_VARIABLE_ModuleInfo_0_3 = hlds__goal_form__next_value_of_STATE_VARIABLE_ModuleInfo_0_3;
                        hlds__goal_form__HeadVar__1_1 = hlds__goal_form__next_value_of_HeadVar__1_1;
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
                          MR_Word hlds__goal_form__next_value_of_HeadVar__2_2 = hlds__goal_form__Disjuncts_6;

                          hlds__goal_form__HeadVar__2_2 = hlds__goal_form__next_value_of_HeadVar__2_2;
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
            MR_Word hlds__goal_form__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Goal_7, (MR_Integer) 1)));

            if (((MR_tag((MR_Word) hlds__goal_form__GoalExpr_10)) == (MR_mktag((MR_Integer) 1))))
              {
                MR_Word hlds__goal_form__Unification_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__GoalExpr_10, (MR_Integer) 3)));
                MR_Word hlds__goal_form__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__GoalExpr_10, (MR_Integer) 0)));
                MR_Word hlds__goal_form__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__GoalExpr_10, (MR_Integer) 1)));
                MR_Word hlds__goal_form__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__GoalExpr_10, (MR_Integer) 2)));
                MR_Word hlds__goal_form__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_form__GoalExpr_10, (MR_Integer) 4)));
                MR_Word hlds__goal_form__Var_18;
                MR_Word hlds__goal_form__Var_19;
                MR_Word hlds__goal_form__Var_20;
                MR_Word hlds__goal_form__Var_21;
                MR_Word hlds__goal_form__Var_22;
                MR_Word hlds__goal_form__Var_23;

                hlds__goal_form__succeeded = ((MR_tag((MR_Word) hlds__goal_form__Unification_15)) == (MR_mktag((MR_Integer) 0)));
                if (hlds__goal_form__succeeded)
                  {
                    hlds__goal_form__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Unification_15, (MR_Integer) 0)));
                    hlds__goal_form__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Unification_15, (MR_Integer) 1)));
                    hlds__goal_form__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Unification_15, (MR_Integer) 2)));
                    hlds__goal_form__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Unification_15, (MR_Integer) 3)));
                    hlds__goal_form__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Unification_15, (MR_Integer) 4)));
                    hlds__goal_form__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Unification_15, (MR_Integer) 5)));
                    hlds__goal_form__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_form__Unification_15, (MR_Integer) 6)));
                  }
              }
            else
            if (((((MR_tag((MR_Word) hlds__goal_form__GoalExpr_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_10, (MR_Integer) 0)))) == (MR_Integer) 5))))
              {
                MR_Word hlds__goal_form__Reason_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_10, (MR_Integer) 1)));
                MR_Word hlds__goal_form__Var_28;
                MR_Word hlds__goal_form__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__GoalExpr_10, (MR_Integer) 2)));

                hlds__goal_form__succeeded = ((((MR_tag((MR_Word) hlds__goal_form__Reason_24)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__Reason_24, (MR_Integer) 0)))) == (MR_Integer) 6)));
                if (hlds__goal_form__succeeded)
                  {
                    hlds__goal_form__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__Reason_24, (MR_Integer) 1)));
                    hlds__goal_form__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_form__Reason_24, (MR_Integer) 2)));
                    hlds__goal_form__succeeded = (hlds__goal_form__Var_28 == (MR_Integer) 1);
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
                  MR_Word hlds__goal_form__next_value_of_HeadVar__1_1 = hlds__goal_form__Goals_8;
                  MR_Word hlds__goal_form__next_value_of_STATE_VARIABLE_ToAssignVars_0_2 = hlds__goal_form__STATE_VARIABLE_ToAssignVars_29_29;

                  hlds__goal_form__STATE_VARIABLE_ToAssignVars_0_2 = hlds__goal_form__next_value_of_STATE_VARIABLE_ToAssignVars_0_2;
                  hlds__goal_form__HeadVar__1_1 = hlds__goal_form__next_value_of_HeadVar__1_1;
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
