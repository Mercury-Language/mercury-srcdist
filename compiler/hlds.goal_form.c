/*
** Automatically generated from `goal_form.m'
** by the Mercury compiler,
** version rotd-2019-10-26
** configured for x86_64-pc-linux-gnu.
** Do not edit.
**
** The autoconfigured grade settings governing
** the generation of this C file were
**
** TAG_BITS=2
** UNBOXED_FLOAT=no
** UNBOXED_INT64S=no
** PREGENERATED_DIST=yes
** HIGHLEVEL_CODE=yes
**
** END_OF_C_GRADE_INFO
*/


// :- module hlds.goal_form.
// :- implementation.

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
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.proc_requests.mih"
#include "hlds.code_model.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_mode.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_cons.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_inst_mode.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_promise.mih"
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
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.rat.mih"
#include "libs.timestamp.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "array.mih"
#include "assoc_list.mih"
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
#include "require.mih"
#include "robdd.mih"
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
#include "transform_hlds.term_util.mih"




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

static const MR_EnumFunctorDesc hlds__goal_form__hlds__goal_form__enum_functor_desc_is_termvar_needed_0_0;

static const MR_EnumFunctorDesc hlds__goal_form__hlds__goal_form__enum_functor_desc_is_termvar_needed_0_1;

static const MR_EnumFunctorDescPtr hlds__goal_form__hlds__goal_form__enum_value_ordered_is_termvar_needed_0[2];

static const MR_EnumFunctorDescPtr hlds__goal_form__hlds__goal_form__enum_name_ordered_is_termvar_needed_0[2];

static const MR_Integer hlds__goal_form__hlds__goal_form__functor_number_map_is_termvar_needed_0[2];

static MR_Word MR_CALL 
hlds__goal_form__case_list_has_foreign_1_f_0(
  MR_Word HeadVar__1_1);

static MR_Word MR_CALL 
hlds__goal_form__goal_list_has_foreign_1_f_0(
  MR_Word HeadVar__1_1);

static void MR_CALL 
hlds__goal_form__count_recursive_calls_disj_5_p_0(
  MR_Word tscc_proc_2_input_1_HeadVar__1_1,
  MR_Word tscc_proc_2_input_2_PredId_2,
  MR_Integer tscc_proc_2_input_3_ProcId_3,
  MR_Integer * tscc_output_ptr_1_Min_9,
  MR_Integer * tscc_output_ptr_2_Max_10);

static void MR_CALL 
hlds__goal_form__count_recursive_calls_cases_5_p_0(
  MR_Word tscc_proc_3_input_1_HeadVar__1_1,
  MR_Word tscc_proc_3_input_2_PredId_2,
  MR_Integer tscc_proc_3_input_3_ProcId_3,
  MR_Integer * tscc_output_ptr_1_Min_9,
  MR_Integer * tscc_output_ptr_2_Max_10);

static void MR_CALL 
hlds__goal_form__count_recursive_calls_conj_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word PredId_2,
  MR_Integer ProcId_3,
  MR_Integer HeadVar__4_4,
  MR_Integer HeadVar__5_5,
  MR_Integer * Min_6,
  MR_Integer * Max_7);

static MR_bool MR_CALL 
hlds__goal_form__cannot_fail_before_stack_flush_conj_1_p_0(
  MR_Word HeadVar__1_1);

static MR_bool MR_CALL 
hlds__goal_form__cannot_stack_flush_cases_1_p_0(
  MR_Word HeadVar__1_1);

static MR_bool MR_CALL 
hlds__goal_form__cannot_stack_flush_goals_1_p_0(
  MR_Word HeadVar__1_1);

static void MR_CALL 
hlds__goal_form__goal_may_allocate_heap_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * May_5);

static void MR_CALL 
hlds__goal_form__cases_may_allocate_heap_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2);

static void MR_CALL 
hlds__goal_form__goal_list_may_allocate_heap_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2);

static MR_Word MR_CALL 
hlds__goal_form__goal_is_flat_list_1_f_0(
  MR_Word HeadVar__1_1);

static MR_Word MR_CALL 
hlds__goal_form__goal_can_throw_func_2_f_0(
  MR_Word MaybeModuleInfo_4,
  MR_Word HeadVar__2_2);

static MR_Word MR_CALL 
hlds__goal_form__case_list_can_throw_2_f_0(
  MR_Word MaybeModuleInfo_1,
  MR_Word HeadVar__2_2);

static MR_Word MR_CALL 
hlds__goal_form__goal_list_can_throw_2_f_0(
  MR_Word MaybeModuleInfo_1,
  MR_Word HeadVar__2_2);

static MR_Word MR_CALL 
hlds__goal_form__goal_can_loop_func_2_f_0(
  MR_Word MaybeModuleInfo_4,
  MR_Word Goal_5);

static MR_Word MR_CALL 
hlds__goal_form__case_list_can_loop_2_f_0(
  MR_Word MaybeModuleInfo_1,
  MR_Word HeadVar__2_2);

static MR_Word MR_CALL 
hlds__goal_form__goal_list_can_loop_2_f_0(
  MR_Word MaybeModuleInfo_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
hlds__goal_form__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_99_97_110_95_116_104_114_111_119_95_50_95_95_91_50_93_95_48_5_p_0(
  MR_Word tscc_proc_2_input_1_GoalExpr_6,
  MR_Word * tscc_output_ptr_1_Result_7,
  MR_Word tscc_proc_2_input_2_STATE_VARIABLE_ModuleInfo_0_82,
  MR_Word * tscc_output_ptr_2_STATE_VARIABLE_ModuleInfo_11);

static void MR_CALL 
hlds__goal_form__cases_can_throw_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_ModuleInfo_0_3,
  MR_Word * STATE_VARIABLE_ModuleInfo_4);

static void MR_CALL 
hlds__goal_form__goals_can_throw_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_ModuleInfo_0_3,
  MR_Word * STATE_VARIABLE_ModuleInfo_4);

static MR_bool MR_CALL 
hlds__goal_form__only_constant_goals_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_ToAssignVars_0_2,
  MR_Word * STATE_VARIABLE_ToAssignVars_3);

static MR_bool MR_CALL 
hlds__goal_form____Unify____goal_loop_or_throw_status_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__goal_form____Compare____goal_loop_or_throw_status_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__goal_form____Unify____goal_loop_status_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__goal_form____Compare____goal_loop_status_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__goal_form____Unify____goal_throw_status_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__goal_form____Compare____goal_throw_status_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__goal_form____Unify____has_subgoals_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__goal_form____Compare____has_subgoals_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__goal_form____Unify____is_termvar_needed_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__goal_form____Compare____is_termvar_needed_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box hlds__goal_form_scalar_common_1[1][2];




static /* final */ const MR_Box hlds__goal_form_scalar_common_1[1][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"



static const MR_EnumFunctorDesc hlds__goal_form__hlds__goal_form__enum_functor_desc_goal_loop_or_throw_status_0_0 = {
  (MR_String) "can_loop_or_throw",
  INT32_C(0)
};

static const MR_EnumFunctorDesc hlds__goal_form__hlds__goal_form__enum_functor_desc_goal_loop_or_throw_status_0_1 = {
  (MR_String) "cannot_loop_or_throw",
  INT32_C(1)
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
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (hlds__goal_form____Unify____goal_loop_or_throw_status_0_0_10001)),
  ((MR_Box) (hlds__goal_form____Compare____goal_loop_or_throw_status_0_0_10001)),
  (MR_String) "hlds.goal_form",
  (MR_String) "goal_loop_or_throw_status",
  {     hlds__goal_form__hlds__goal_form__enum_name_ordered_goal_loop_or_throw_status_0 },
  {     hlds__goal_form__hlds__goal_form__enum_value_ordered_goal_loop_or_throw_status_0 },
  (MR_Integer) 2,
  UINT16_C(4),
  hlds__goal_form__hlds__goal_form__functor_number_map_goal_loop_or_throw_status_0
};

static const MR_EnumFunctorDesc hlds__goal_form__hlds__goal_form__enum_functor_desc_goal_loop_status_0_0 = {
  (MR_String) "can_loop",
  INT32_C(0)
};

static const MR_EnumFunctorDesc hlds__goal_form__hlds__goal_form__enum_functor_desc_goal_loop_status_0_1 = {
  (MR_String) "cannot_loop",
  INT32_C(1)
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
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (hlds__goal_form____Unify____goal_loop_status_0_0_10001)),
  ((MR_Box) (hlds__goal_form____Compare____goal_loop_status_0_0_10001)),
  (MR_String) "hlds.goal_form",
  (MR_String) "goal_loop_status",
  {     hlds__goal_form__hlds__goal_form__enum_name_ordered_goal_loop_status_0 },
  {     hlds__goal_form__hlds__goal_form__enum_value_ordered_goal_loop_status_0 },
  (MR_Integer) 2,
  UINT16_C(4),
  hlds__goal_form__hlds__goal_form__functor_number_map_goal_loop_status_0
};

static const MR_EnumFunctorDesc hlds__goal_form__hlds__goal_form__enum_functor_desc_goal_throw_status_0_0 = {
  (MR_String) "can_throw",
  INT32_C(0)
};

static const MR_EnumFunctorDesc hlds__goal_form__hlds__goal_form__enum_functor_desc_goal_throw_status_0_1 = {
  (MR_String) "cannot_throw",
  INT32_C(1)
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
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (hlds__goal_form____Unify____goal_throw_status_0_0_10001)),
  ((MR_Box) (hlds__goal_form____Compare____goal_throw_status_0_0_10001)),
  (MR_String) "hlds.goal_form",
  (MR_String) "goal_throw_status",
  {     hlds__goal_form__hlds__goal_form__enum_name_ordered_goal_throw_status_0 },
  {     hlds__goal_form__hlds__goal_form__enum_value_ordered_goal_throw_status_0 },
  (MR_Integer) 2,
  UINT16_C(4),
  hlds__goal_form__hlds__goal_form__functor_number_map_goal_throw_status_0
};

static const MR_EnumFunctorDesc hlds__goal_form__hlds__goal_form__enum_functor_desc_has_subgoals_0_0 = {
  (MR_String) "has_subgoals",
  INT32_C(0)
};

static const MR_EnumFunctorDesc hlds__goal_form__hlds__goal_form__enum_functor_desc_has_subgoals_0_1 = {
  (MR_String) "does_not_have_subgoals",
  INT32_C(1)
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
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (hlds__goal_form____Unify____has_subgoals_0_0_10001)),
  ((MR_Box) (hlds__goal_form____Compare____has_subgoals_0_0_10001)),
  (MR_String) "hlds.goal_form",
  (MR_String) "has_subgoals",
  {     hlds__goal_form__hlds__goal_form__enum_name_ordered_has_subgoals_0 },
  {     hlds__goal_form__hlds__goal_form__enum_value_ordered_has_subgoals_0 },
  (MR_Integer) 2,
  UINT16_C(4),
  hlds__goal_form__hlds__goal_form__functor_number_map_has_subgoals_0
};

static const MR_EnumFunctorDesc hlds__goal_form__hlds__goal_form__enum_functor_desc_is_termvar_needed_0_0 = {
  (MR_String) "termvar_is_not_needed",
  INT32_C(0)
};

static const MR_EnumFunctorDesc hlds__goal_form__hlds__goal_form__enum_functor_desc_is_termvar_needed_0_1 = {
  (MR_String) "termvar_is_needed",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr hlds__goal_form__hlds__goal_form__enum_value_ordered_is_termvar_needed_0[2] = {
  &hlds__goal_form__hlds__goal_form__enum_functor_desc_is_termvar_needed_0_0,
  &hlds__goal_form__hlds__goal_form__enum_functor_desc_is_termvar_needed_0_1
};

static const MR_EnumFunctorDescPtr hlds__goal_form__hlds__goal_form__enum_name_ordered_is_termvar_needed_0[2] = {
  &hlds__goal_form__hlds__goal_form__enum_functor_desc_is_termvar_needed_0_1,
  &hlds__goal_form__hlds__goal_form__enum_functor_desc_is_termvar_needed_0_0
};

static const MR_Integer hlds__goal_form__hlds__goal_form__functor_number_map_is_termvar_needed_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct hlds__goal_form__hlds__goal_form__type_ctor_info_is_termvar_needed_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (hlds__goal_form____Unify____is_termvar_needed_0_0_10001)),
  ((MR_Box) (hlds__goal_form____Compare____is_termvar_needed_0_0_10001)),
  (MR_String) "hlds.goal_form",
  (MR_String) "is_termvar_needed",
  {     hlds__goal_form__hlds__goal_form__enum_name_ordered_is_termvar_needed_0 },
  {     hlds__goal_form__hlds__goal_form__enum_value_ordered_is_termvar_needed_0 },
  (MR_Integer) 2,
  UINT16_C(4),
  hlds__goal_form__hlds__goal_form__functor_number_map_is_termvar_needed_0
};

void MR_CALL 
hlds__goal_form____Compare____is_termvar_needed_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer Cast_HeadVar1_4 = (MR_Integer) (HeadVar__2_2);
    MR_Integer Cast_HeadVar2_5 = (MR_Integer) (HeadVar__3_3);

    succeeded = (Cast_HeadVar1_4 < Cast_HeadVar2_5);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      succeeded = (Cast_HeadVar1_4 > Cast_HeadVar2_5);
      if (succeeded)
        *HeadVar__1_1 = (MR_Integer) 2;
      else
        *HeadVar__1_1 = (MR_Integer) 0;
    }
  }
}

MR_bool MR_CALL 
hlds__goal_form____Unify____is_termvar_needed_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

void MR_CALL 
hlds__goal_form____Compare____has_subgoals_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer Cast_HeadVar1_4 = (MR_Integer) (HeadVar__2_2);
    MR_Integer Cast_HeadVar2_5 = (MR_Integer) (HeadVar__3_3);

    succeeded = (Cast_HeadVar1_4 < Cast_HeadVar2_5);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      succeeded = (Cast_HeadVar1_4 > Cast_HeadVar2_5);
      if (succeeded)
        *HeadVar__1_1 = (MR_Integer) 2;
      else
        *HeadVar__1_1 = (MR_Integer) 0;
    }
  }
}

MR_bool MR_CALL 
hlds__goal_form____Unify____has_subgoals_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

void MR_CALL 
hlds__goal_form____Compare____goal_throw_status_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer Cast_HeadVar1_4 = (MR_Integer) (HeadVar__2_2);
    MR_Integer Cast_HeadVar2_5 = (MR_Integer) (HeadVar__3_3);

    succeeded = (Cast_HeadVar1_4 < Cast_HeadVar2_5);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      succeeded = (Cast_HeadVar1_4 > Cast_HeadVar2_5);
      if (succeeded)
        *HeadVar__1_1 = (MR_Integer) 2;
      else
        *HeadVar__1_1 = (MR_Integer) 0;
    }
  }
}

MR_bool MR_CALL 
hlds__goal_form____Unify____goal_throw_status_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

void MR_CALL 
hlds__goal_form____Compare____goal_loop_status_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer Cast_HeadVar1_4 = (MR_Integer) (HeadVar__2_2);
    MR_Integer Cast_HeadVar2_5 = (MR_Integer) (HeadVar__3_3);

    succeeded = (Cast_HeadVar1_4 < Cast_HeadVar2_5);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      succeeded = (Cast_HeadVar1_4 > Cast_HeadVar2_5);
      if (succeeded)
        *HeadVar__1_1 = (MR_Integer) 2;
      else
        *HeadVar__1_1 = (MR_Integer) 0;
    }
  }
}

MR_bool MR_CALL 
hlds__goal_form____Unify____goal_loop_status_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

void MR_CALL 
hlds__goal_form____Compare____goal_loop_or_throw_status_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer Cast_HeadVar1_4 = (MR_Integer) (HeadVar__2_2);
    MR_Integer Cast_HeadVar2_5 = (MR_Integer) (HeadVar__3_3);

    succeeded = (Cast_HeadVar1_4 < Cast_HeadVar2_5);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      succeeded = (Cast_HeadVar1_4 > Cast_HeadVar2_5);
      if (succeeded)
        *HeadVar__1_1 = (MR_Integer) 2;
      else
        *HeadVar__1_1 = (MR_Integer) 0;
    }
  }
}

MR_bool MR_CALL 
hlds__goal_form____Unify____goal_loop_or_throw_status_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

void MR_CALL 
hlds__goal_form__get_from_ground_term_construct_conjunct_info_5_p_0(
  MR_Word Goal_6,
  MR_Word * LHSVar_7,
  MR_Word * ConsId_8,
  MR_Word * RHSVars_9,
  MR_Word * GoalInfo_10)
{
  {
    MR_bool succeeded;
    MR_Word GoalExpr_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_6, (MR_Integer) 0))));
    MR_Word LHSVarPrime_17;
    MR_Word ConsIdPrime_18;
    MR_Word RHSVarsPrime_19;
    MR_Word Unify_15;
    MR_Word SubInfo_23;

    *GoalInfo_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_6, (MR_Integer) 1))));
    succeeded = ((MR_tag((MR_Word) GoalExpr_11)) == (MR_Integer) 1);
    if (succeeded)
    {
      Unify_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr_11, (MR_Integer) 3))));
      succeeded = ((MR_tag((MR_Word) Unify_15)) == (MR_Integer) 0);
      if (succeeded)
      {
        LHSVarPrime_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Unify_15, (MR_Integer) 0))));
        ConsIdPrime_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Unify_15, (MR_Integer) 1))));
        RHSVarsPrime_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Unify_15, (MR_Integer) 2))));
        SubInfo_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Unify_15, (MR_Integer) 6))));
        succeeded = (SubInfo_23 == (MR_Word) ((MR_Unsigned) 0U));
      }
    }
    if (succeeded)
    {
      *LHSVar_7 = LHSVarPrime_17;
      *ConsId_8 = ConsIdPrime_18;
      *RHSVars_9 = RHSVarsPrime_19;
    }
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.goal_form.get_from_ground_term_construct_conjunct_info\'/5", (MR_String) "unexpected goal as fgt_construct conjunct");
        return;
      }
  }
}

void MR_CALL 
hlds__goal_form__get_from_ground_term_construct_info_5_p_0(
  MR_Word TermVar_6,
  MR_Word Goal_7,
  MR_Word * TermVarIsNeeded_8,
  MR_Word * Conjuncts_9,
  MR_Word * GoalInfo_10)
{
  {
    MR_bool succeeded;
    MR_Word GoalExpr_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_7, (MR_Integer) 0))));
    MR_Word NonLocals_12;
    MR_Word NonLocalList_13;

    *GoalInfo_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_7, (MR_Integer) 1))));
    NonLocals_12 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(*GoalInfo_10);
    parse_tree__set_of_var__to_sorted_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NonLocals_12, &NonLocalList_13);
    if ((NonLocalList_13 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word ConjunctsPrime_15;
      MR_Word Var_25;

      *TermVarIsNeeded_8 = (MR_Integer) 0;
      succeeded = ((((MR_tag((MR_Word) GoalExpr_11)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), GoalExpr_11, (MR_Integer) 0)))) == (MR_Integer) 2)));
      if (succeeded)
      {
        Var_25 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), GoalExpr_11, (MR_Integer) 1))) & (MR_Integer) 1);
        ConjunctsPrime_15 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_11, (MR_Integer) 2))));
        succeeded = (Var_25 == (MR_Integer) 0);
      }
      if (succeeded)
        *Conjuncts_9 = ConjunctsPrime_15;
      else
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.goal_form.get_from_ground_term_construct_info\'/5", (MR_String) "unexpected nonlocal");
          return;
        }
    }
    else
    {
      MR_Word Var_44 = ((MR_Word) ((MR_hl_field(MR_mktag(1), NonLocalList_13, (MR_Integer) 1))));
      MR_Word Var_45 = ((MR_Word) ((MR_hl_field(MR_mktag(1), NonLocalList_13, (MR_Integer) 0))));

      if ((Var_44 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word ConjunctsPrime_32;
        MR_Word Var_29;

        succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&hlds__goal_form_scalar_common_1[0]), ((MR_Box) (Var_45)), ((MR_Box) (TermVar_6)));
        if (succeeded)
          *TermVarIsNeeded_8 = (MR_Integer) 1;
        else
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.goal_form.get_from_ground_term_construct_info\'/5", (MR_String) "unexpected nonlocal");
            return;
          }
        succeeded = ((((MR_tag((MR_Word) GoalExpr_11)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), GoalExpr_11, (MR_Integer) 0)))) == (MR_Integer) 2)));
        if (succeeded)
        {
          Var_29 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), GoalExpr_11, (MR_Integer) 1))) & (MR_Integer) 1);
          ConjunctsPrime_32 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_11, (MR_Integer) 2))));
          succeeded = (Var_29 == (MR_Integer) 0);
        }
        if (succeeded)
          *Conjuncts_9 = ConjunctsPrime_32;
        else
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.goal_form.get_from_ground_term_construct_info\'/5", (MR_String) "unexpected nonlocal");
            return;
          }
      }
      else
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.goal_form.get_from_ground_term_construct_info\'/5", (MR_String) "unexpected nonlocals");
          return;
        }
    }
  }
}

void MR_CALL 
hlds__goal_form__get_notag_or_direct_arg_arg_2_p_0(
  MR_Word TypeInfo_for_Arg_9,
  MR_Word RHSVars_3,
  MR_Box * RHSVar_4)
{
  {
    MR_bool succeeded = (RHSVars_3 != (MR_Word) ((MR_Unsigned) 0U));
    MR_Box RHSVarPrime_5;
    MR_Word Var_6;

    if (succeeded)
    {
      RHSVarPrime_5 = (MR_hl_field(MR_mktag(1), RHSVars_3, (MR_Integer) 0));
      Var_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), RHSVars_3, (MR_Integer) 1))));
      succeeded = (Var_6 == (MR_Word) ((MR_Unsigned) 0U));
    }
    if (succeeded)
      *RHSVar_4 = RHSVarPrime_5;
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.goal_form.get_notag_or_direct_arg_arg\'/2", (MR_String) "arity != 1)");
        return;
      }
  }
}

void MR_CALL 
hlds__goal_form__get_notag_or_direct_arg_arg_mode_4_p_0(
  MR_Word TypeInfo_for_Arg_15,
  MR_Word TypeInfo_for_UM_16,
  MR_Word RHSVars_5,
  MR_Word ArgModes_6,
  MR_Box * RHSVar_7,
  MR_Box * ArgMode_8)
{
  {
    MR_bool succeeded = (RHSVars_5 != (MR_Word) ((MR_Unsigned) 0U));
    MR_Box RHSVarPrime_9;
    MR_Box ArgModePrime_10;
    MR_Word Var_11;
    MR_Word Var_12;

    if (succeeded)
    {
      RHSVarPrime_9 = (MR_hl_field(MR_mktag(1), RHSVars_5, (MR_Integer) 0));
      Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), RHSVars_5, (MR_Integer) 1))));
      succeeded = (Var_11 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        succeeded = (ArgModes_6 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          ArgModePrime_10 = (MR_hl_field(MR_mktag(1), ArgModes_6, (MR_Integer) 0));
          Var_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgModes_6, (MR_Integer) 1))));
          succeeded = (Var_12 == (MR_Word) ((MR_Unsigned) 0U));
        }
      }
    }
    if (succeeded)
    {
      *RHSVar_7 = RHSVarPrime_9;
      *ArgMode_8 = ArgModePrime_10;
    }
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.goal_form.get_notag_or_direct_arg_arg_mode\'/4", (MR_String) "arity != 1)");
        return;
      }
  }
}

MR_Word MR_CALL 
hlds__goal_form__goal_expr_has_subgoals_1_f_0(
  MR_Word GoalExpr_3)
{
  {
    MR_Word HasSubGoals_4;

    switch (MR_tag((MR_Word) GoalExpr_3)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        HasSubGoals_4 = (MR_Integer) 0;
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        HasSubGoals_4 = (MR_Integer) 1;
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), GoalExpr_3, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
            HasSubGoals_4 = (MR_Integer) 1;
            break;
          case (MR_Integer) 2:
            {
              MR_Word SubGoals_29 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_3, (MR_Integer) 2))));

              if ((SubGoals_29 == (MR_Word) ((MR_Unsigned) 0U)))
                HasSubGoals_4 = (MR_Integer) 1;
              else
                HasSubGoals_4 = (MR_Integer) 0;
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word SubGoals_61 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_3, (MR_Integer) 1))));

              if ((SubGoals_61 == (MR_Word) ((MR_Unsigned) 0U)))
                HasSubGoals_4 = (MR_Integer) 1;
              else
                HasSubGoals_4 = (MR_Integer) 0;
            }
            break;
          case (MR_Integer) 4:
          case (MR_Integer) 5:
          case (MR_Integer) 6:
            HasSubGoals_4 = (MR_Integer) 0;
            break;
          case (MR_Integer) 7:
            HasSubGoals_4 = (MR_Integer) 0;
            break;
        }
        break;
    }
    return HasSubGoals_4;
  }
}

MR_Word MR_CALL 
hlds__goal_form__goal_has_foreign_1_f_0(
  MR_Word Goal_3)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word HasForeign_4;
    MR_Word GoalExpr_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_3, (MR_Integer) 0))));

    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) GoalExpr_5)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word SubGoal_28 = (MR_Word) ((MR_Word) (GoalExpr_5));
          MR_Word next_value_of_Goal_3 = SubGoal_28;

          // direct tailcall eliminated
          ;
          Goal_3 = next_value_of_Goal_3;
          continue;
        }
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        HasForeign_4 = (MR_Integer) 0;
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), GoalExpr_5, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            HasForeign_4 = (MR_Integer) 0;
            break;
          case (MR_Integer) 1:
            HasForeign_4 = (MR_Integer) 1;
            break;
          case (MR_Integer) 2:
            {
              MR_Word Goals_24 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_5, (MR_Integer) 2))));

              HasForeign_4 = hlds__goal_form__goal_list_has_foreign_1_f_0(Goals_24);
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Goals_60 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_5, (MR_Integer) 1))));

              HasForeign_4 = hlds__goal_form__goal_list_has_foreign_1_f_0(Goals_60);
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Cases_27 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_5, (MR_Integer) 3))));

              HasForeign_4 = hlds__goal_form__case_list_has_foreign_1_f_0(Cases_27);
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word Reason_29 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_5, (MR_Integer) 1))));
              MR_Word SubGoal_61 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_5, (MR_Integer) 2))));
              MR_Word FGT_31;

              succeeded = ((((MR_tag((MR_Word) Reason_29)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Reason_29, (MR_Integer) 0)))) == (MR_Integer) 6)));
              if (succeeded)
              {
                FGT_31 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Reason_29, (MR_Integer) 2))) & (MR_Integer) 3);
                switch (FGT_31) {
                  default:
                    succeeded = MR_FALSE;
                    break;
                  case (MR_Integer) 1:
                    succeeded = MR_TRUE;
                    break;
                  case (MR_Integer) 2:
                    succeeded = MR_TRUE;
                    break;
                }
              }
              if (succeeded)
                HasForeign_4 = (MR_Integer) 0;
              else
              {
                MR_Word next_value_of_Goal_3 = SubGoal_61;

                // direct tailcall eliminated
                ;
                Goal_3 = next_value_of_Goal_3;
                continue;
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word Cond_33 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_5, (MR_Integer) 2))));
              MR_Word Then_34 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_5, (MR_Integer) 3))));
              MR_Word Else_35 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_5, (MR_Integer) 4))));

              {
                MR_Word Var_59;

                Var_59 = hlds__goal_form__goal_has_foreign_1_f_0(Cond_33);
                succeeded = (Var_59 == (MR_Integer) 1);
              }
              if (!(succeeded))
              {
                {
                  MR_Word Var_58;

                  Var_58 = hlds__goal_form__goal_has_foreign_1_f_0(Then_34);
                  succeeded = (Var_58 == (MR_Integer) 1);
                }
                if (!(succeeded))
                {
                  MR_Word Var_57;

                  Var_57 = hlds__goal_form__goal_has_foreign_1_f_0(Else_35);
                  succeeded = (Var_57 == (MR_Integer) 1);
                }
              }
              if (succeeded)
                HasForeign_4 = (MR_Integer) 1;
              else
                HasForeign_4 = (MR_Integer) 0;
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word ShortHand_43 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_5, (MR_Integer) 1))));

              switch (MR_tag((MR_Word) ShortHand_43)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word GoalA_53 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ShortHand_43, (MR_Integer) 0))));
                    MR_Word GoalB_54 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ShortHand_43, (MR_Integer) 1))));
                    MR_Word Var_55;
                    MR_Word Var_56;

                    Var_55 = hlds__goal_form__goal_has_foreign_1_f_0(GoalA_53);
                    Var_56 = hlds__goal_form__goal_has_foreign_1_f_0(GoalB_54);
                    HasForeign_4 = mercury__bool__or_2_f_0(Var_55, Var_56);
                  }
                  break;
                case (MR_Integer) 1:
                  HasForeign_4 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word SubGoal_62 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ShortHand_43, (MR_Integer) 2))));
                    MR_Word next_value_of_Goal_3 = SubGoal_62;

                    // direct tailcall eliminated
                    ;
                    Goal_3 = next_value_of_Goal_3;
                    continue;
                  }
                  break;
              }
            }
            break;
        }
        break;
    }
    return HasForeign_4;
    break;
  }
}

static MR_Word MR_CALL 
hlds__goal_form__case_list_has_foreign_1_f_0(
  MR_Word HeadVar__1_1)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word HeadVar__2_2;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      HeadVar__2_2 = (MR_Integer) 0;
    else
    {
      MR_Word Case_3 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Cases_4 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Goal_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case_3, (MR_Integer) 2))));
      MR_Word Var_9;

      Var_9 = hlds__goal_form__goal_has_foreign_1_f_0(Goal_8);
      succeeded = (Var_9 == (MR_Integer) 1);
      if (succeeded)
        HeadVar__2_2 = (MR_Integer) 1;
      else
      {
        MR_Word next_value_of_HeadVar__1_1 = Cases_4;

        // direct tailcall eliminated
        ;
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        continue;
      }
    }
    return HeadVar__2_2;
    break;
  }
}

static MR_Word MR_CALL 
hlds__goal_form__goal_list_has_foreign_1_f_0(
  MR_Word HeadVar__1_1)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word HeadVar__2_2;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      HeadVar__2_2 = (MR_Integer) 0;
    else
    {
      MR_Word Goal_3 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Goals_4 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Var_6;

      Var_6 = hlds__goal_form__goal_has_foreign_1_f_0(Goal_3);
      succeeded = (Var_6 == (MR_Integer) 1);
      if (succeeded)
        HeadVar__2_2 = (MR_Integer) 1;
      else
      {
        MR_Word next_value_of_HeadVar__1_1 = Goals_4;

        // direct tailcall eliminated
        ;
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        continue;
      }
    }
    return HeadVar__2_2;
    break;
  }
}

MR_Word MR_CALL 
hlds__goal_form__goal_may_modify_trail_1_f_0(
  MR_Word GoalInfo_3)
{
  {
    MR_bool succeeded;
    MR_Word HeadVar__2_2;
    MR_Word Var_4;

    succeeded = hlds__hlds_goal__goal_info_has_feature_2_p_0(GoalInfo_3, (MR_Integer) 18);
    if (succeeded)
      Var_4 = (MR_Integer) 1;
    else
      Var_4 = (MR_Integer) 0;
    HeadVar__2_2 = mercury__bool__not_1_f_0(Var_4);
    return HeadVar__2_2;
  }
}

MR_Word MR_CALL 
hlds__goal_form__goal_cannot_modify_trail_1_f_0(
  MR_Word GoalInfo_3)
{
  {
    MR_bool succeeded;
    MR_Word HeadVar__2_2;

    succeeded = hlds__hlds_goal__goal_info_has_feature_2_p_0(GoalInfo_3, (MR_Integer) 18);
    if (succeeded)
      HeadVar__2_2 = (MR_Integer) 1;
    else
      HeadVar__2_2 = (MR_Integer) 0;
    return HeadVar__2_2;
  }
}

void MR_CALL 
hlds__goal_form__count_recursive_calls_5_p_0(
  MR_Word tscc_proc_1_input_1_Goal_6,
  MR_Word tscc_proc_1_input_2_PredId_7,
  MR_Integer tscc_proc_1_input_3_ProcId_8,
  MR_Integer * tscc_output_ptr_1_Min_9,
  MR_Integer * tscc_output_ptr_2_Max_10)
{
  {
    MR_Word tscc_proc_2_input_1_HeadVar__1_1;
    MR_Word tscc_proc_2_input_2_PredId_2;
    MR_Integer tscc_proc_2_input_3_ProcId_3;
    MR_Word tscc_proc_3_input_1_HeadVar__1_1;
    MR_Word tscc_proc_3_input_2_PredId_2;
    MR_Integer tscc_proc_3_input_3_ProcId_3;
    MR_Integer tscc_output_1_Min_9;
    MR_Integer tscc_output_2_Max_10;

    // The code for TSCC PROC 1: pred hlds.goal_form.count_recursive_calls/5-0.
    ;
    // Setup for mutual tailcalls optimized into a loop.
    ;
    // The mutually recursive procedures are:
    ;
    ;
    // proc 1 in TSCC: pred hlds.goal_form.count_recursive_calls/5-0
    ;
    // proc 2 in TSCC: pred hlds.goal_form.count_recursive_calls_disj/5-0
    ;
    // proc 3 in TSCC: pred hlds.goal_form.count_recursive_calls_cases/5-0
    ;
    ;
    goto top_of_proc_1;
  top_of_proc_1:;
    {
      MR_Word Goal_6 = tscc_proc_1_input_1_Goal_6;
      MR_Word PredId_7 = tscc_proc_1_input_2_PredId_7;
      MR_Integer ProcId_8 = tscc_proc_1_input_3_ProcId_8;
      MR_Integer Min_9;
      MR_Integer Max_10;
      MR_bool succeeded;
      MR_Word GoalExpr_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_6, (MR_Integer) 0))));

      switch (MR_tag((MR_Word) GoalExpr_11)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word SubGoal_54 = (MR_Word) ((MR_Word) (GoalExpr_11));
            MR_Word next_value_of_tscc_proc_1_input_1_Goal_6 = SubGoal_54;
            MR_Word next_value_of_tscc_proc_1_input_2_PredId_7 = PredId_7;
            MR_Integer next_value_of_tscc_proc_1_input_3_ProcId_8 = ProcId_8;

            // direct tailcall eliminated
            ;
            tscc_proc_1_input_1_Goal_6 = next_value_of_tscc_proc_1_input_1_Goal_6;
            tscc_proc_1_input_2_PredId_7 = next_value_of_tscc_proc_1_input_2_PredId_7;
            tscc_proc_1_input_3_ProcId_8 = next_value_of_tscc_proc_1_input_3_ProcId_8;
            goto top_of_proc_1;
          }
          break;
        case (MR_Integer) 1:
          {
            Min_9 = (MR_Integer) 0;
            Max_10 = (MR_Integer) 0;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word CallPredId_30 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr_11, (MR_Integer) 0))));
            MR_Integer CallProcId_31 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), GoalExpr_11, (MR_Integer) 1))));

            succeeded = hlds__hlds_pred____Unify____pred_id_0_0(PredId_7, CallPredId_30);
            if (succeeded)
              succeeded = (ProcId_8 == CallProcId_31);
            if (succeeded)
              Min_9 = (MR_Integer) 1;
            else
              Min_9 = (MR_Integer) 0;
            Max_10 = Min_9;
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), GoalExpr_11, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
            case (MR_Integer) 1:
              {
                Min_9 = (MR_Integer) 0;
                Max_10 = (MR_Integer) 0;
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word Goals_38 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_11, (MR_Integer) 2))));

                hlds__goal_form__count_recursive_calls_conj_7_p_0(Goals_38, PredId_7, ProcId_8, (MR_Integer) 0, (MR_Integer) 0, &Min_9, &Max_10);
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word Goals_75 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_11, (MR_Integer) 1))));
                MR_Word next_value_of_tscc_proc_2_input_1_HeadVar__1_1 = Goals_75;
                MR_Word next_value_of_tscc_proc_2_input_2_PredId_2 = PredId_7;
                MR_Integer next_value_of_tscc_proc_2_input_3_ProcId_3 = ProcId_8;

                // direct tailcall eliminated
                ;
                tscc_proc_2_input_1_HeadVar__1_1 = next_value_of_tscc_proc_2_input_1_HeadVar__1_1;
                tscc_proc_2_input_2_PredId_2 = next_value_of_tscc_proc_2_input_2_PredId_2;
                tscc_proc_2_input_3_ProcId_3 = next_value_of_tscc_proc_2_input_3_ProcId_3;
                goto top_of_proc_2;
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Word Cases_41 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_11, (MR_Integer) 3))));
                MR_Word next_value_of_tscc_proc_3_input_1_HeadVar__1_1 = Cases_41;
                MR_Word next_value_of_tscc_proc_3_input_2_PredId_2 = PredId_7;
                MR_Integer next_value_of_tscc_proc_3_input_3_ProcId_3 = ProcId_8;

                // direct tailcall eliminated
                ;
                tscc_proc_3_input_1_HeadVar__1_1 = next_value_of_tscc_proc_3_input_1_HeadVar__1_1;
                tscc_proc_3_input_2_PredId_2 = next_value_of_tscc_proc_3_input_2_PredId_2;
                tscc_proc_3_input_3_ProcId_3 = next_value_of_tscc_proc_3_input_3_ProcId_3;
                goto top_of_proc_3;
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word Reason_55 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_11, (MR_Integer) 1))));
                MR_Word SubGoal_76 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_11, (MR_Integer) 2))));
                MR_Word FGT_57;

                succeeded = ((((MR_tag((MR_Word) Reason_55)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Reason_55, (MR_Integer) 0)))) == (MR_Integer) 6)));
                if (succeeded)
                {
                  FGT_57 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Reason_55, (MR_Integer) 2))) & (MR_Integer) 3);
                  switch (FGT_57) {
                    default:
                      succeeded = MR_FALSE;
                      break;
                    case (MR_Integer) 1:
                      succeeded = MR_TRUE;
                      break;
                    case (MR_Integer) 2:
                      succeeded = MR_TRUE;
                      break;
                  }
                }
                if (succeeded)
                {
                  Min_9 = (MR_Integer) 0;
                  Max_10 = (MR_Integer) 0;
                }
                else
                {
                  MR_Word next_value_of_tscc_proc_1_input_1_Goal_6 = SubGoal_76;
                  MR_Word next_value_of_tscc_proc_1_input_2_PredId_7 = PredId_7;
                  MR_Integer next_value_of_tscc_proc_1_input_3_ProcId_8 = ProcId_8;

                  // direct tailcall eliminated
                  ;
                  tscc_proc_1_input_1_Goal_6 = next_value_of_tscc_proc_1_input_1_Goal_6;
                  tscc_proc_1_input_2_PredId_7 = next_value_of_tscc_proc_1_input_2_PredId_7;
                  tscc_proc_1_input_3_ProcId_8 = next_value_of_tscc_proc_1_input_3_ProcId_8;
                  goto top_of_proc_1;
                }
              }
              break;
            case (MR_Integer) 6:
              {
                MR_Word Cond_43 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_11, (MR_Integer) 2))));
                MR_Word Then_44 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_11, (MR_Integer) 3))));
                MR_Word Else_45 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_11, (MR_Integer) 4))));
                MR_Integer CMin_46;
                MR_Integer CMax_47;
                MR_Integer TMin_48;
                MR_Integer TMax_49;
                MR_Integer EMin_50;
                MR_Integer EMax_51;
                MR_Integer CTMin_52;
                MR_Integer CTMax_53;

                hlds__goal_form__count_recursive_calls_5_p_0(Cond_43, PredId_7, ProcId_8, &CMin_46, &CMax_47);
                hlds__goal_form__count_recursive_calls_5_p_0(Then_44, PredId_7, ProcId_8, &TMin_48, &TMax_49);
                hlds__goal_form__count_recursive_calls_5_p_0(Else_45, PredId_7, ProcId_8, &EMin_50, &EMax_51);
                CTMin_52 = (MR_Integer) ((MR_Unsigned) CMin_46 + (MR_Unsigned) TMin_48);
                CTMax_53 = (MR_Integer) ((MR_Unsigned) CMax_47 + (MR_Unsigned) TMax_49);
                mercury__int__min_3_p_0(CTMin_52, EMin_50, &Min_9);
                mercury__int__max_3_p_0(CTMax_53, EMax_51, &Max_10);
              }
              break;
            case (MR_Integer) 7:
              {
                MR_Word ShortHand_58 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_11, (MR_Integer) 1))));

                switch (MR_tag((MR_Word) ShortHand_58)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.goal_form.count_recursive_calls\'/5", (MR_String) "bi_implication");
                      return;
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word Goal_84 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand_58, (MR_Integer) 4))));
                      MR_Word Goals_85 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand_58, (MR_Integer) 5))));

                      if ((Goals_85 == (MR_Word) ((MR_Unsigned) 0U)))
                      {
                        MR_Word next_value_of_tscc_proc_1_input_1_Goal_6 = Goal_84;
                        MR_Word next_value_of_tscc_proc_1_input_2_PredId_7 = PredId_7;
                        MR_Integer next_value_of_tscc_proc_1_input_3_ProcId_8 = ProcId_8;

                        // direct tailcall eliminated
                        ;
                        tscc_proc_1_input_1_Goal_6 = next_value_of_tscc_proc_1_input_1_Goal_6;
                        tscc_proc_1_input_2_PredId_7 = next_value_of_tscc_proc_1_input_2_PredId_7;
                        tscc_proc_1_input_3_ProcId_8 = next_value_of_tscc_proc_1_input_3_ProcId_8;
                        goto top_of_proc_1;
                      }
                      else
                      {
                        MR_Integer Min0_92;
                        MR_Integer Max0_93;
                        MR_Integer Min1_94;
                        MR_Integer Max1_95;

                        hlds__goal_form__count_recursive_calls_5_p_0(Goal_84, PredId_7, ProcId_8, &Min0_92, &Max0_93);
                        hlds__goal_form__count_recursive_calls_disj_5_p_0(Goals_85, PredId_7, ProcId_8, &Min1_94, &Max1_95);
                        mercury__int__min_3_p_0(Min0_92, Min1_94, &Min_9);
                        mercury__int__max_3_p_0(Max0_93, Max1_95, &Max_10);
                      }
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      MR_Word SubGoal_77 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ShortHand_58, (MR_Integer) 2))));
                      MR_Word next_value_of_tscc_proc_1_input_1_Goal_6 = SubGoal_77;
                      MR_Word next_value_of_tscc_proc_1_input_2_PredId_7 = PredId_7;
                      MR_Integer next_value_of_tscc_proc_1_input_3_ProcId_8 = ProcId_8;

                      // direct tailcall eliminated
                      ;
                      tscc_proc_1_input_1_Goal_6 = next_value_of_tscc_proc_1_input_1_Goal_6;
                      tscc_proc_1_input_2_PredId_7 = next_value_of_tscc_proc_1_input_2_PredId_7;
                      tscc_proc_1_input_3_ProcId_8 = next_value_of_tscc_proc_1_input_3_ProcId_8;
                      goto top_of_proc_1;
                    }
                    break;
                }
              }
              break;
          }
          break;
      }
      tscc_output_1_Min_9 = Min_9;
      tscc_output_2_Max_10 = Max_10;
      goto tscc_end;
    }
  top_of_proc_2:;
    {
      MR_Word HeadVar__1_1 = tscc_proc_2_input_1_HeadVar__1_1;
      MR_Word PredId_2 = tscc_proc_2_input_2_PredId_2;
      MR_Integer ProcId_3 = tscc_proc_2_input_3_ProcId_3;
      MR_Integer HeadVar__4_4;
      MR_Integer HeadVar__5_5;

      if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        HeadVar__4_4 = (MR_Integer) 0;
        HeadVar__5_5 = (MR_Integer) 0;
      }
      else
      {
        MR_Word Goal_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
        MR_Word Goals_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));

        if ((Goals_9 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word next_value_of_tscc_proc_1_input_1_Goal_6 = Goal_8;
          MR_Word next_value_of_tscc_proc_1_input_2_PredId_7 = PredId_2;
          MR_Integer next_value_of_tscc_proc_1_input_3_ProcId_8 = ProcId_3;

          // direct tailcall eliminated
          ;
          tscc_proc_1_input_1_Goal_6 = next_value_of_tscc_proc_1_input_1_Goal_6;
          tscc_proc_1_input_2_PredId_7 = next_value_of_tscc_proc_1_input_2_PredId_7;
          tscc_proc_1_input_3_ProcId_8 = next_value_of_tscc_proc_1_input_3_ProcId_8;
          goto top_of_proc_1;
        }
        else
        {
          MR_Integer Min0_16;
          MR_Integer Max0_17;
          MR_Integer Min1_18;
          MR_Integer Max1_19;
          MR_Word Goal_22;
          MR_Word Goals_23;

          hlds__goal_form__count_recursive_calls_5_p_0(Goal_8, PredId_2, ProcId_3, &Min0_16, &Max0_17);
          Goal_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Goals_9, (MR_Integer) 0))));
          Goals_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Goals_9, (MR_Integer) 1))));
          if ((Goals_23 == (MR_Word) ((MR_Unsigned) 0U)))
            hlds__goal_form__count_recursive_calls_5_p_0(Goal_22, PredId_2, ProcId_3, &Min1_18, &Max1_19);
          else
          {
            MR_Integer Min0_30;
            MR_Integer Max0_31;
            MR_Integer Min1_32;
            MR_Integer Max1_33;

            hlds__goal_form__count_recursive_calls_5_p_0(Goal_22, PredId_2, ProcId_3, &Min0_30, &Max0_31);
            hlds__goal_form__count_recursive_calls_disj_5_p_0(Goals_23, PredId_2, ProcId_3, &Min1_32, &Max1_33);
            mercury__int__min_3_p_0(Min0_30, Min1_32, &Min1_18);
            mercury__int__max_3_p_0(Max0_31, Max1_33, &Max1_19);
          }
          mercury__int__min_3_p_0(Min0_16, Min1_18, &HeadVar__4_4);
          mercury__int__max_3_p_0(Max0_17, Max1_19, &HeadVar__5_5);
        }
      }
      tscc_output_1_Min_9 = HeadVar__4_4;
      tscc_output_2_Max_10 = HeadVar__5_5;
      goto tscc_end;
    }
  top_of_proc_3:;
    {
      MR_Word HeadVar__1_1 = tscc_proc_3_input_1_HeadVar__1_1;
      MR_Word PredId_2 = tscc_proc_3_input_2_PredId_2;
      MR_Integer ProcId_3 = tscc_proc_3_input_3_ProcId_3;
      MR_Integer Min_4;
      MR_Integer Max_5;

      if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.goal_form.count_recursive_calls_cases\'/5", (MR_String) "[]");
          return;
        }
      else
      {
        MR_Word Goal_14;
        MR_Word Cases_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
        MR_Word Var_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));

        Goal_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_26, (MR_Integer) 2))));
        if ((Cases_15 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word next_value_of_tscc_proc_1_input_1_Goal_6 = Goal_14;
          MR_Word next_value_of_tscc_proc_1_input_2_PredId_7 = PredId_2;
          MR_Integer next_value_of_tscc_proc_1_input_3_ProcId_8 = ProcId_3;

          // direct tailcall eliminated
          ;
          tscc_proc_1_input_1_Goal_6 = next_value_of_tscc_proc_1_input_1_Goal_6;
          tscc_proc_1_input_2_PredId_7 = next_value_of_tscc_proc_1_input_2_PredId_7;
          tscc_proc_1_input_3_ProcId_8 = next_value_of_tscc_proc_1_input_3_ProcId_8;
          goto top_of_proc_1;
        }
        else
        {
          MR_Integer Min0_22;
          MR_Integer Max0_23;
          MR_Integer Min1_24;
          MR_Integer Max1_25;
          MR_Word Goal_35;
          MR_Word Cases_36;
          MR_Word Var_47;

          hlds__goal_form__count_recursive_calls_5_p_0(Goal_14, PredId_2, ProcId_3, &Min0_22, &Max0_23);
          Var_47 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Cases_15, (MR_Integer) 0))));
          Cases_36 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Cases_15, (MR_Integer) 1))));
          Goal_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_47, (MR_Integer) 2))));
          if ((Cases_36 == (MR_Word) ((MR_Unsigned) 0U)))
            hlds__goal_form__count_recursive_calls_5_p_0(Goal_35, PredId_2, ProcId_3, &Min1_24, &Max1_25);
          else
          {
            MR_Integer Min0_43;
            MR_Integer Max0_44;
            MR_Integer Min1_45;
            MR_Integer Max1_46;

            hlds__goal_form__count_recursive_calls_5_p_0(Goal_35, PredId_2, ProcId_3, &Min0_43, &Max0_44);
            hlds__goal_form__count_recursive_calls_cases_5_p_0(Cases_36, PredId_2, ProcId_3, &Min1_45, &Max1_46);
            mercury__int__min_3_p_0(Min0_43, Min1_45, &Min1_24);
            mercury__int__max_3_p_0(Max0_44, Max1_46, &Max1_25);
          }
          mercury__int__min_3_p_0(Min0_22, Min1_24, &Min_4);
          mercury__int__max_3_p_0(Max0_23, Max1_25, &Max_5);
        }
      }
      tscc_output_1_Min_9 = Min_4;
      tscc_output_2_Max_10 = Max_5;
      goto tscc_end;
    }
  tscc_end:;
    *tscc_output_ptr_1_Min_9 = tscc_output_1_Min_9;
    *tscc_output_ptr_2_Max_10 = tscc_output_2_Max_10;
    return;
  }
}

static void MR_CALL 
hlds__goal_form__count_recursive_calls_disj_5_p_0(
  MR_Word tscc_proc_2_input_1_HeadVar__1_1,
  MR_Word tscc_proc_2_input_2_PredId_2,
  MR_Integer tscc_proc_2_input_3_ProcId_3,
  MR_Integer * tscc_output_ptr_1_Min_9,
  MR_Integer * tscc_output_ptr_2_Max_10)
{
  {
    MR_Word tscc_proc_1_input_1_Goal_6;
    MR_Word tscc_proc_1_input_2_PredId_7;
    MR_Integer tscc_proc_1_input_3_ProcId_8;
    MR_Word tscc_proc_3_input_1_HeadVar__1_1;
    MR_Word tscc_proc_3_input_2_PredId_2;
    MR_Integer tscc_proc_3_input_3_ProcId_3;
    MR_Integer tscc_output_1_Min_9;
    MR_Integer tscc_output_2_Max_10;

    // The code for TSCC PROC 2: pred hlds.goal_form.count_recursive_calls_disj/5-0.
    ;
    // Setup for mutual tailcalls optimized into a loop.
    ;
    // The mutually recursive procedures are:
    ;
    ;
    // proc 1 in TSCC: pred hlds.goal_form.count_recursive_calls/5-0
    ;
    // proc 2 in TSCC: pred hlds.goal_form.count_recursive_calls_disj/5-0
    ;
    // proc 3 in TSCC: pred hlds.goal_form.count_recursive_calls_cases/5-0
    ;
    ;
    goto top_of_proc_2;
  top_of_proc_1:;
    {
      MR_Word Goal_6 = tscc_proc_1_input_1_Goal_6;
      MR_Word PredId_7 = tscc_proc_1_input_2_PredId_7;
      MR_Integer ProcId_8 = tscc_proc_1_input_3_ProcId_8;
      MR_Integer Min_9;
      MR_Integer Max_10;
      MR_bool succeeded;
      MR_Word GoalExpr_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_6, (MR_Integer) 0))));

      switch (MR_tag((MR_Word) GoalExpr_11)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word SubGoal_54 = (MR_Word) ((MR_Word) (GoalExpr_11));
            MR_Word next_value_of_tscc_proc_1_input_1_Goal_6 = SubGoal_54;
            MR_Word next_value_of_tscc_proc_1_input_2_PredId_7 = PredId_7;
            MR_Integer next_value_of_tscc_proc_1_input_3_ProcId_8 = ProcId_8;

            // direct tailcall eliminated
            ;
            tscc_proc_1_input_1_Goal_6 = next_value_of_tscc_proc_1_input_1_Goal_6;
            tscc_proc_1_input_2_PredId_7 = next_value_of_tscc_proc_1_input_2_PredId_7;
            tscc_proc_1_input_3_ProcId_8 = next_value_of_tscc_proc_1_input_3_ProcId_8;
            goto top_of_proc_1;
          }
          break;
        case (MR_Integer) 1:
          {
            Min_9 = (MR_Integer) 0;
            Max_10 = (MR_Integer) 0;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word CallPredId_30 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr_11, (MR_Integer) 0))));
            MR_Integer CallProcId_31 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), GoalExpr_11, (MR_Integer) 1))));

            succeeded = hlds__hlds_pred____Unify____pred_id_0_0(PredId_7, CallPredId_30);
            if (succeeded)
              succeeded = (ProcId_8 == CallProcId_31);
            if (succeeded)
              Min_9 = (MR_Integer) 1;
            else
              Min_9 = (MR_Integer) 0;
            Max_10 = Min_9;
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), GoalExpr_11, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
            case (MR_Integer) 1:
              {
                Min_9 = (MR_Integer) 0;
                Max_10 = (MR_Integer) 0;
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word Goals_38 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_11, (MR_Integer) 2))));

                hlds__goal_form__count_recursive_calls_conj_7_p_0(Goals_38, PredId_7, ProcId_8, (MR_Integer) 0, (MR_Integer) 0, &Min_9, &Max_10);
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word Goals_75 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_11, (MR_Integer) 1))));
                MR_Word next_value_of_tscc_proc_2_input_1_HeadVar__1_1 = Goals_75;
                MR_Word next_value_of_tscc_proc_2_input_2_PredId_2 = PredId_7;
                MR_Integer next_value_of_tscc_proc_2_input_3_ProcId_3 = ProcId_8;

                // direct tailcall eliminated
                ;
                tscc_proc_2_input_1_HeadVar__1_1 = next_value_of_tscc_proc_2_input_1_HeadVar__1_1;
                tscc_proc_2_input_2_PredId_2 = next_value_of_tscc_proc_2_input_2_PredId_2;
                tscc_proc_2_input_3_ProcId_3 = next_value_of_tscc_proc_2_input_3_ProcId_3;
                goto top_of_proc_2;
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Word Cases_41 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_11, (MR_Integer) 3))));
                MR_Word next_value_of_tscc_proc_3_input_1_HeadVar__1_1 = Cases_41;
                MR_Word next_value_of_tscc_proc_3_input_2_PredId_2 = PredId_7;
                MR_Integer next_value_of_tscc_proc_3_input_3_ProcId_3 = ProcId_8;

                // direct tailcall eliminated
                ;
                tscc_proc_3_input_1_HeadVar__1_1 = next_value_of_tscc_proc_3_input_1_HeadVar__1_1;
                tscc_proc_3_input_2_PredId_2 = next_value_of_tscc_proc_3_input_2_PredId_2;
                tscc_proc_3_input_3_ProcId_3 = next_value_of_tscc_proc_3_input_3_ProcId_3;
                goto top_of_proc_3;
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word Reason_55 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_11, (MR_Integer) 1))));
                MR_Word SubGoal_76 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_11, (MR_Integer) 2))));
                MR_Word FGT_57;

                succeeded = ((((MR_tag((MR_Word) Reason_55)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Reason_55, (MR_Integer) 0)))) == (MR_Integer) 6)));
                if (succeeded)
                {
                  FGT_57 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Reason_55, (MR_Integer) 2))) & (MR_Integer) 3);
                  switch (FGT_57) {
                    default:
                      succeeded = MR_FALSE;
                      break;
                    case (MR_Integer) 1:
                      succeeded = MR_TRUE;
                      break;
                    case (MR_Integer) 2:
                      succeeded = MR_TRUE;
                      break;
                  }
                }
                if (succeeded)
                {
                  Min_9 = (MR_Integer) 0;
                  Max_10 = (MR_Integer) 0;
                }
                else
                {
                  MR_Word next_value_of_tscc_proc_1_input_1_Goal_6 = SubGoal_76;
                  MR_Word next_value_of_tscc_proc_1_input_2_PredId_7 = PredId_7;
                  MR_Integer next_value_of_tscc_proc_1_input_3_ProcId_8 = ProcId_8;

                  // direct tailcall eliminated
                  ;
                  tscc_proc_1_input_1_Goal_6 = next_value_of_tscc_proc_1_input_1_Goal_6;
                  tscc_proc_1_input_2_PredId_7 = next_value_of_tscc_proc_1_input_2_PredId_7;
                  tscc_proc_1_input_3_ProcId_8 = next_value_of_tscc_proc_1_input_3_ProcId_8;
                  goto top_of_proc_1;
                }
              }
              break;
            case (MR_Integer) 6:
              {
                MR_Word Cond_43 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_11, (MR_Integer) 2))));
                MR_Word Then_44 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_11, (MR_Integer) 3))));
                MR_Word Else_45 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_11, (MR_Integer) 4))));
                MR_Integer CMin_46;
                MR_Integer CMax_47;
                MR_Integer TMin_48;
                MR_Integer TMax_49;
                MR_Integer EMin_50;
                MR_Integer EMax_51;
                MR_Integer CTMin_52;
                MR_Integer CTMax_53;

                hlds__goal_form__count_recursive_calls_5_p_0(Cond_43, PredId_7, ProcId_8, &CMin_46, &CMax_47);
                hlds__goal_form__count_recursive_calls_5_p_0(Then_44, PredId_7, ProcId_8, &TMin_48, &TMax_49);
                hlds__goal_form__count_recursive_calls_5_p_0(Else_45, PredId_7, ProcId_8, &EMin_50, &EMax_51);
                CTMin_52 = (MR_Integer) ((MR_Unsigned) CMin_46 + (MR_Unsigned) TMin_48);
                CTMax_53 = (MR_Integer) ((MR_Unsigned) CMax_47 + (MR_Unsigned) TMax_49);
                mercury__int__min_3_p_0(CTMin_52, EMin_50, &Min_9);
                mercury__int__max_3_p_0(CTMax_53, EMax_51, &Max_10);
              }
              break;
            case (MR_Integer) 7:
              {
                MR_Word ShortHand_58 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_11, (MR_Integer) 1))));

                switch (MR_tag((MR_Word) ShortHand_58)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.goal_form.count_recursive_calls\'/5", (MR_String) "bi_implication");
                      return;
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word Goal_84 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand_58, (MR_Integer) 4))));
                      MR_Word Goals_85 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand_58, (MR_Integer) 5))));

                      if ((Goals_85 == (MR_Word) ((MR_Unsigned) 0U)))
                      {
                        MR_Word next_value_of_tscc_proc_1_input_1_Goal_6 = Goal_84;
                        MR_Word next_value_of_tscc_proc_1_input_2_PredId_7 = PredId_7;
                        MR_Integer next_value_of_tscc_proc_1_input_3_ProcId_8 = ProcId_8;

                        // direct tailcall eliminated
                        ;
                        tscc_proc_1_input_1_Goal_6 = next_value_of_tscc_proc_1_input_1_Goal_6;
                        tscc_proc_1_input_2_PredId_7 = next_value_of_tscc_proc_1_input_2_PredId_7;
                        tscc_proc_1_input_3_ProcId_8 = next_value_of_tscc_proc_1_input_3_ProcId_8;
                        goto top_of_proc_1;
                      }
                      else
                      {
                        MR_Integer Min0_92;
                        MR_Integer Max0_93;
                        MR_Integer Min1_94;
                        MR_Integer Max1_95;

                        hlds__goal_form__count_recursive_calls_5_p_0(Goal_84, PredId_7, ProcId_8, &Min0_92, &Max0_93);
                        hlds__goal_form__count_recursive_calls_disj_5_p_0(Goals_85, PredId_7, ProcId_8, &Min1_94, &Max1_95);
                        mercury__int__min_3_p_0(Min0_92, Min1_94, &Min_9);
                        mercury__int__max_3_p_0(Max0_93, Max1_95, &Max_10);
                      }
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      MR_Word SubGoal_77 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ShortHand_58, (MR_Integer) 2))));
                      MR_Word next_value_of_tscc_proc_1_input_1_Goal_6 = SubGoal_77;
                      MR_Word next_value_of_tscc_proc_1_input_2_PredId_7 = PredId_7;
                      MR_Integer next_value_of_tscc_proc_1_input_3_ProcId_8 = ProcId_8;

                      // direct tailcall eliminated
                      ;
                      tscc_proc_1_input_1_Goal_6 = next_value_of_tscc_proc_1_input_1_Goal_6;
                      tscc_proc_1_input_2_PredId_7 = next_value_of_tscc_proc_1_input_2_PredId_7;
                      tscc_proc_1_input_3_ProcId_8 = next_value_of_tscc_proc_1_input_3_ProcId_8;
                      goto top_of_proc_1;
                    }
                    break;
                }
              }
              break;
          }
          break;
      }
      tscc_output_1_Min_9 = Min_9;
      tscc_output_2_Max_10 = Max_10;
      goto tscc_end;
    }
  top_of_proc_2:;
    {
      MR_Word HeadVar__1_1 = tscc_proc_2_input_1_HeadVar__1_1;
      MR_Word PredId_2 = tscc_proc_2_input_2_PredId_2;
      MR_Integer ProcId_3 = tscc_proc_2_input_3_ProcId_3;
      MR_Integer HeadVar__4_4;
      MR_Integer HeadVar__5_5;

      if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        HeadVar__4_4 = (MR_Integer) 0;
        HeadVar__5_5 = (MR_Integer) 0;
      }
      else
      {
        MR_Word Goal_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
        MR_Word Goals_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));

        if ((Goals_9 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word next_value_of_tscc_proc_1_input_1_Goal_6 = Goal_8;
          MR_Word next_value_of_tscc_proc_1_input_2_PredId_7 = PredId_2;
          MR_Integer next_value_of_tscc_proc_1_input_3_ProcId_8 = ProcId_3;

          // direct tailcall eliminated
          ;
          tscc_proc_1_input_1_Goal_6 = next_value_of_tscc_proc_1_input_1_Goal_6;
          tscc_proc_1_input_2_PredId_7 = next_value_of_tscc_proc_1_input_2_PredId_7;
          tscc_proc_1_input_3_ProcId_8 = next_value_of_tscc_proc_1_input_3_ProcId_8;
          goto top_of_proc_1;
        }
        else
        {
          MR_Integer Min0_16;
          MR_Integer Max0_17;
          MR_Integer Min1_18;
          MR_Integer Max1_19;
          MR_Word Goal_22;
          MR_Word Goals_23;

          hlds__goal_form__count_recursive_calls_5_p_0(Goal_8, PredId_2, ProcId_3, &Min0_16, &Max0_17);
          Goal_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Goals_9, (MR_Integer) 0))));
          Goals_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Goals_9, (MR_Integer) 1))));
          if ((Goals_23 == (MR_Word) ((MR_Unsigned) 0U)))
            hlds__goal_form__count_recursive_calls_5_p_0(Goal_22, PredId_2, ProcId_3, &Min1_18, &Max1_19);
          else
          {
            MR_Integer Min0_30;
            MR_Integer Max0_31;
            MR_Integer Min1_32;
            MR_Integer Max1_33;

            hlds__goal_form__count_recursive_calls_5_p_0(Goal_22, PredId_2, ProcId_3, &Min0_30, &Max0_31);
            hlds__goal_form__count_recursive_calls_disj_5_p_0(Goals_23, PredId_2, ProcId_3, &Min1_32, &Max1_33);
            mercury__int__min_3_p_0(Min0_30, Min1_32, &Min1_18);
            mercury__int__max_3_p_0(Max0_31, Max1_33, &Max1_19);
          }
          mercury__int__min_3_p_0(Min0_16, Min1_18, &HeadVar__4_4);
          mercury__int__max_3_p_0(Max0_17, Max1_19, &HeadVar__5_5);
        }
      }
      tscc_output_1_Min_9 = HeadVar__4_4;
      tscc_output_2_Max_10 = HeadVar__5_5;
      goto tscc_end;
    }
  top_of_proc_3:;
    {
      MR_Word HeadVar__1_1 = tscc_proc_3_input_1_HeadVar__1_1;
      MR_Word PredId_2 = tscc_proc_3_input_2_PredId_2;
      MR_Integer ProcId_3 = tscc_proc_3_input_3_ProcId_3;
      MR_Integer Min_4;
      MR_Integer Max_5;

      if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.goal_form.count_recursive_calls_cases\'/5", (MR_String) "[]");
          return;
        }
      else
      {
        MR_Word Goal_14;
        MR_Word Cases_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
        MR_Word Var_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));

        Goal_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_26, (MR_Integer) 2))));
        if ((Cases_15 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word next_value_of_tscc_proc_1_input_1_Goal_6 = Goal_14;
          MR_Word next_value_of_tscc_proc_1_input_2_PredId_7 = PredId_2;
          MR_Integer next_value_of_tscc_proc_1_input_3_ProcId_8 = ProcId_3;

          // direct tailcall eliminated
          ;
          tscc_proc_1_input_1_Goal_6 = next_value_of_tscc_proc_1_input_1_Goal_6;
          tscc_proc_1_input_2_PredId_7 = next_value_of_tscc_proc_1_input_2_PredId_7;
          tscc_proc_1_input_3_ProcId_8 = next_value_of_tscc_proc_1_input_3_ProcId_8;
          goto top_of_proc_1;
        }
        else
        {
          MR_Integer Min0_22;
          MR_Integer Max0_23;
          MR_Integer Min1_24;
          MR_Integer Max1_25;
          MR_Word Goal_35;
          MR_Word Cases_36;
          MR_Word Var_47;

          hlds__goal_form__count_recursive_calls_5_p_0(Goal_14, PredId_2, ProcId_3, &Min0_22, &Max0_23);
          Var_47 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Cases_15, (MR_Integer) 0))));
          Cases_36 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Cases_15, (MR_Integer) 1))));
          Goal_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_47, (MR_Integer) 2))));
          if ((Cases_36 == (MR_Word) ((MR_Unsigned) 0U)))
            hlds__goal_form__count_recursive_calls_5_p_0(Goal_35, PredId_2, ProcId_3, &Min1_24, &Max1_25);
          else
          {
            MR_Integer Min0_43;
            MR_Integer Max0_44;
            MR_Integer Min1_45;
            MR_Integer Max1_46;

            hlds__goal_form__count_recursive_calls_5_p_0(Goal_35, PredId_2, ProcId_3, &Min0_43, &Max0_44);
            hlds__goal_form__count_recursive_calls_cases_5_p_0(Cases_36, PredId_2, ProcId_3, &Min1_45, &Max1_46);
            mercury__int__min_3_p_0(Min0_43, Min1_45, &Min1_24);
            mercury__int__max_3_p_0(Max0_44, Max1_46, &Max1_25);
          }
          mercury__int__min_3_p_0(Min0_22, Min1_24, &Min_4);
          mercury__int__max_3_p_0(Max0_23, Max1_25, &Max_5);
        }
      }
      tscc_output_1_Min_9 = Min_4;
      tscc_output_2_Max_10 = Max_5;
      goto tscc_end;
    }
  tscc_end:;
    *tscc_output_ptr_1_Min_9 = tscc_output_1_Min_9;
    *tscc_output_ptr_2_Max_10 = tscc_output_2_Max_10;
    return;
  }
}

static void MR_CALL 
hlds__goal_form__count_recursive_calls_cases_5_p_0(
  MR_Word tscc_proc_3_input_1_HeadVar__1_1,
  MR_Word tscc_proc_3_input_2_PredId_2,
  MR_Integer tscc_proc_3_input_3_ProcId_3,
  MR_Integer * tscc_output_ptr_1_Min_9,
  MR_Integer * tscc_output_ptr_2_Max_10)
{
  {
    MR_Word tscc_proc_1_input_1_Goal_6;
    MR_Word tscc_proc_1_input_2_PredId_7;
    MR_Integer tscc_proc_1_input_3_ProcId_8;
    MR_Word tscc_proc_2_input_1_HeadVar__1_1;
    MR_Word tscc_proc_2_input_2_PredId_2;
    MR_Integer tscc_proc_2_input_3_ProcId_3;
    MR_Integer tscc_output_1_Min_9;
    MR_Integer tscc_output_2_Max_10;

    // The code for TSCC PROC 3: pred hlds.goal_form.count_recursive_calls_cases/5-0.
    ;
    // Setup for mutual tailcalls optimized into a loop.
    ;
    // The mutually recursive procedures are:
    ;
    ;
    // proc 1 in TSCC: pred hlds.goal_form.count_recursive_calls/5-0
    ;
    // proc 2 in TSCC: pred hlds.goal_form.count_recursive_calls_disj/5-0
    ;
    // proc 3 in TSCC: pred hlds.goal_form.count_recursive_calls_cases/5-0
    ;
    ;
    goto top_of_proc_3;
  top_of_proc_1:;
    {
      MR_Word Goal_6 = tscc_proc_1_input_1_Goal_6;
      MR_Word PredId_7 = tscc_proc_1_input_2_PredId_7;
      MR_Integer ProcId_8 = tscc_proc_1_input_3_ProcId_8;
      MR_Integer Min_9;
      MR_Integer Max_10;
      MR_bool succeeded;
      MR_Word GoalExpr_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_6, (MR_Integer) 0))));

      switch (MR_tag((MR_Word) GoalExpr_11)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word SubGoal_54 = (MR_Word) ((MR_Word) (GoalExpr_11));
            MR_Word next_value_of_tscc_proc_1_input_1_Goal_6 = SubGoal_54;
            MR_Word next_value_of_tscc_proc_1_input_2_PredId_7 = PredId_7;
            MR_Integer next_value_of_tscc_proc_1_input_3_ProcId_8 = ProcId_8;

            // direct tailcall eliminated
            ;
            tscc_proc_1_input_1_Goal_6 = next_value_of_tscc_proc_1_input_1_Goal_6;
            tscc_proc_1_input_2_PredId_7 = next_value_of_tscc_proc_1_input_2_PredId_7;
            tscc_proc_1_input_3_ProcId_8 = next_value_of_tscc_proc_1_input_3_ProcId_8;
            goto top_of_proc_1;
          }
          break;
        case (MR_Integer) 1:
          {
            Min_9 = (MR_Integer) 0;
            Max_10 = (MR_Integer) 0;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word CallPredId_30 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr_11, (MR_Integer) 0))));
            MR_Integer CallProcId_31 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), GoalExpr_11, (MR_Integer) 1))));

            succeeded = hlds__hlds_pred____Unify____pred_id_0_0(PredId_7, CallPredId_30);
            if (succeeded)
              succeeded = (ProcId_8 == CallProcId_31);
            if (succeeded)
              Min_9 = (MR_Integer) 1;
            else
              Min_9 = (MR_Integer) 0;
            Max_10 = Min_9;
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), GoalExpr_11, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
            case (MR_Integer) 1:
              {
                Min_9 = (MR_Integer) 0;
                Max_10 = (MR_Integer) 0;
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word Goals_38 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_11, (MR_Integer) 2))));

                hlds__goal_form__count_recursive_calls_conj_7_p_0(Goals_38, PredId_7, ProcId_8, (MR_Integer) 0, (MR_Integer) 0, &Min_9, &Max_10);
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word Goals_75 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_11, (MR_Integer) 1))));
                MR_Word next_value_of_tscc_proc_2_input_1_HeadVar__1_1 = Goals_75;
                MR_Word next_value_of_tscc_proc_2_input_2_PredId_2 = PredId_7;
                MR_Integer next_value_of_tscc_proc_2_input_3_ProcId_3 = ProcId_8;

                // direct tailcall eliminated
                ;
                tscc_proc_2_input_1_HeadVar__1_1 = next_value_of_tscc_proc_2_input_1_HeadVar__1_1;
                tscc_proc_2_input_2_PredId_2 = next_value_of_tscc_proc_2_input_2_PredId_2;
                tscc_proc_2_input_3_ProcId_3 = next_value_of_tscc_proc_2_input_3_ProcId_3;
                goto top_of_proc_2;
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Word Cases_41 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_11, (MR_Integer) 3))));
                MR_Word next_value_of_tscc_proc_3_input_1_HeadVar__1_1 = Cases_41;
                MR_Word next_value_of_tscc_proc_3_input_2_PredId_2 = PredId_7;
                MR_Integer next_value_of_tscc_proc_3_input_3_ProcId_3 = ProcId_8;

                // direct tailcall eliminated
                ;
                tscc_proc_3_input_1_HeadVar__1_1 = next_value_of_tscc_proc_3_input_1_HeadVar__1_1;
                tscc_proc_3_input_2_PredId_2 = next_value_of_tscc_proc_3_input_2_PredId_2;
                tscc_proc_3_input_3_ProcId_3 = next_value_of_tscc_proc_3_input_3_ProcId_3;
                goto top_of_proc_3;
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word Reason_55 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_11, (MR_Integer) 1))));
                MR_Word SubGoal_76 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_11, (MR_Integer) 2))));
                MR_Word FGT_57;

                succeeded = ((((MR_tag((MR_Word) Reason_55)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Reason_55, (MR_Integer) 0)))) == (MR_Integer) 6)));
                if (succeeded)
                {
                  FGT_57 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Reason_55, (MR_Integer) 2))) & (MR_Integer) 3);
                  switch (FGT_57) {
                    default:
                      succeeded = MR_FALSE;
                      break;
                    case (MR_Integer) 1:
                      succeeded = MR_TRUE;
                      break;
                    case (MR_Integer) 2:
                      succeeded = MR_TRUE;
                      break;
                  }
                }
                if (succeeded)
                {
                  Min_9 = (MR_Integer) 0;
                  Max_10 = (MR_Integer) 0;
                }
                else
                {
                  MR_Word next_value_of_tscc_proc_1_input_1_Goal_6 = SubGoal_76;
                  MR_Word next_value_of_tscc_proc_1_input_2_PredId_7 = PredId_7;
                  MR_Integer next_value_of_tscc_proc_1_input_3_ProcId_8 = ProcId_8;

                  // direct tailcall eliminated
                  ;
                  tscc_proc_1_input_1_Goal_6 = next_value_of_tscc_proc_1_input_1_Goal_6;
                  tscc_proc_1_input_2_PredId_7 = next_value_of_tscc_proc_1_input_2_PredId_7;
                  tscc_proc_1_input_3_ProcId_8 = next_value_of_tscc_proc_1_input_3_ProcId_8;
                  goto top_of_proc_1;
                }
              }
              break;
            case (MR_Integer) 6:
              {
                MR_Word Cond_43 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_11, (MR_Integer) 2))));
                MR_Word Then_44 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_11, (MR_Integer) 3))));
                MR_Word Else_45 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_11, (MR_Integer) 4))));
                MR_Integer CMin_46;
                MR_Integer CMax_47;
                MR_Integer TMin_48;
                MR_Integer TMax_49;
                MR_Integer EMin_50;
                MR_Integer EMax_51;
                MR_Integer CTMin_52;
                MR_Integer CTMax_53;

                hlds__goal_form__count_recursive_calls_5_p_0(Cond_43, PredId_7, ProcId_8, &CMin_46, &CMax_47);
                hlds__goal_form__count_recursive_calls_5_p_0(Then_44, PredId_7, ProcId_8, &TMin_48, &TMax_49);
                hlds__goal_form__count_recursive_calls_5_p_0(Else_45, PredId_7, ProcId_8, &EMin_50, &EMax_51);
                CTMin_52 = (MR_Integer) ((MR_Unsigned) CMin_46 + (MR_Unsigned) TMin_48);
                CTMax_53 = (MR_Integer) ((MR_Unsigned) CMax_47 + (MR_Unsigned) TMax_49);
                mercury__int__min_3_p_0(CTMin_52, EMin_50, &Min_9);
                mercury__int__max_3_p_0(CTMax_53, EMax_51, &Max_10);
              }
              break;
            case (MR_Integer) 7:
              {
                MR_Word ShortHand_58 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_11, (MR_Integer) 1))));

                switch (MR_tag((MR_Word) ShortHand_58)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.goal_form.count_recursive_calls\'/5", (MR_String) "bi_implication");
                      return;
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word Goal_84 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand_58, (MR_Integer) 4))));
                      MR_Word Goals_85 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand_58, (MR_Integer) 5))));

                      if ((Goals_85 == (MR_Word) ((MR_Unsigned) 0U)))
                      {
                        MR_Word next_value_of_tscc_proc_1_input_1_Goal_6 = Goal_84;
                        MR_Word next_value_of_tscc_proc_1_input_2_PredId_7 = PredId_7;
                        MR_Integer next_value_of_tscc_proc_1_input_3_ProcId_8 = ProcId_8;

                        // direct tailcall eliminated
                        ;
                        tscc_proc_1_input_1_Goal_6 = next_value_of_tscc_proc_1_input_1_Goal_6;
                        tscc_proc_1_input_2_PredId_7 = next_value_of_tscc_proc_1_input_2_PredId_7;
                        tscc_proc_1_input_3_ProcId_8 = next_value_of_tscc_proc_1_input_3_ProcId_8;
                        goto top_of_proc_1;
                      }
                      else
                      {
                        MR_Integer Min0_92;
                        MR_Integer Max0_93;
                        MR_Integer Min1_94;
                        MR_Integer Max1_95;

                        hlds__goal_form__count_recursive_calls_5_p_0(Goal_84, PredId_7, ProcId_8, &Min0_92, &Max0_93);
                        hlds__goal_form__count_recursive_calls_disj_5_p_0(Goals_85, PredId_7, ProcId_8, &Min1_94, &Max1_95);
                        mercury__int__min_3_p_0(Min0_92, Min1_94, &Min_9);
                        mercury__int__max_3_p_0(Max0_93, Max1_95, &Max_10);
                      }
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      MR_Word SubGoal_77 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ShortHand_58, (MR_Integer) 2))));
                      MR_Word next_value_of_tscc_proc_1_input_1_Goal_6 = SubGoal_77;
                      MR_Word next_value_of_tscc_proc_1_input_2_PredId_7 = PredId_7;
                      MR_Integer next_value_of_tscc_proc_1_input_3_ProcId_8 = ProcId_8;

                      // direct tailcall eliminated
                      ;
                      tscc_proc_1_input_1_Goal_6 = next_value_of_tscc_proc_1_input_1_Goal_6;
                      tscc_proc_1_input_2_PredId_7 = next_value_of_tscc_proc_1_input_2_PredId_7;
                      tscc_proc_1_input_3_ProcId_8 = next_value_of_tscc_proc_1_input_3_ProcId_8;
                      goto top_of_proc_1;
                    }
                    break;
                }
              }
              break;
          }
          break;
      }
      tscc_output_1_Min_9 = Min_9;
      tscc_output_2_Max_10 = Max_10;
      goto tscc_end;
    }
  top_of_proc_2:;
    {
      MR_Word HeadVar__1_1 = tscc_proc_2_input_1_HeadVar__1_1;
      MR_Word PredId_2 = tscc_proc_2_input_2_PredId_2;
      MR_Integer ProcId_3 = tscc_proc_2_input_3_ProcId_3;
      MR_Integer HeadVar__4_4;
      MR_Integer HeadVar__5_5;

      if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        HeadVar__4_4 = (MR_Integer) 0;
        HeadVar__5_5 = (MR_Integer) 0;
      }
      else
      {
        MR_Word Goal_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
        MR_Word Goals_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));

        if ((Goals_9 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word next_value_of_tscc_proc_1_input_1_Goal_6 = Goal_8;
          MR_Word next_value_of_tscc_proc_1_input_2_PredId_7 = PredId_2;
          MR_Integer next_value_of_tscc_proc_1_input_3_ProcId_8 = ProcId_3;

          // direct tailcall eliminated
          ;
          tscc_proc_1_input_1_Goal_6 = next_value_of_tscc_proc_1_input_1_Goal_6;
          tscc_proc_1_input_2_PredId_7 = next_value_of_tscc_proc_1_input_2_PredId_7;
          tscc_proc_1_input_3_ProcId_8 = next_value_of_tscc_proc_1_input_3_ProcId_8;
          goto top_of_proc_1;
        }
        else
        {
          MR_Integer Min0_16;
          MR_Integer Max0_17;
          MR_Integer Min1_18;
          MR_Integer Max1_19;
          MR_Word Goal_22;
          MR_Word Goals_23;

          hlds__goal_form__count_recursive_calls_5_p_0(Goal_8, PredId_2, ProcId_3, &Min0_16, &Max0_17);
          Goal_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Goals_9, (MR_Integer) 0))));
          Goals_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Goals_9, (MR_Integer) 1))));
          if ((Goals_23 == (MR_Word) ((MR_Unsigned) 0U)))
            hlds__goal_form__count_recursive_calls_5_p_0(Goal_22, PredId_2, ProcId_3, &Min1_18, &Max1_19);
          else
          {
            MR_Integer Min0_30;
            MR_Integer Max0_31;
            MR_Integer Min1_32;
            MR_Integer Max1_33;

            hlds__goal_form__count_recursive_calls_5_p_0(Goal_22, PredId_2, ProcId_3, &Min0_30, &Max0_31);
            hlds__goal_form__count_recursive_calls_disj_5_p_0(Goals_23, PredId_2, ProcId_3, &Min1_32, &Max1_33);
            mercury__int__min_3_p_0(Min0_30, Min1_32, &Min1_18);
            mercury__int__max_3_p_0(Max0_31, Max1_33, &Max1_19);
          }
          mercury__int__min_3_p_0(Min0_16, Min1_18, &HeadVar__4_4);
          mercury__int__max_3_p_0(Max0_17, Max1_19, &HeadVar__5_5);
        }
      }
      tscc_output_1_Min_9 = HeadVar__4_4;
      tscc_output_2_Max_10 = HeadVar__5_5;
      goto tscc_end;
    }
  top_of_proc_3:;
    {
      MR_Word HeadVar__1_1 = tscc_proc_3_input_1_HeadVar__1_1;
      MR_Word PredId_2 = tscc_proc_3_input_2_PredId_2;
      MR_Integer ProcId_3 = tscc_proc_3_input_3_ProcId_3;
      MR_Integer Min_4;
      MR_Integer Max_5;

      if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.goal_form.count_recursive_calls_cases\'/5", (MR_String) "[]");
          return;
        }
      else
      {
        MR_Word Goal_14;
        MR_Word Cases_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
        MR_Word Var_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));

        Goal_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_26, (MR_Integer) 2))));
        if ((Cases_15 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word next_value_of_tscc_proc_1_input_1_Goal_6 = Goal_14;
          MR_Word next_value_of_tscc_proc_1_input_2_PredId_7 = PredId_2;
          MR_Integer next_value_of_tscc_proc_1_input_3_ProcId_8 = ProcId_3;

          // direct tailcall eliminated
          ;
          tscc_proc_1_input_1_Goal_6 = next_value_of_tscc_proc_1_input_1_Goal_6;
          tscc_proc_1_input_2_PredId_7 = next_value_of_tscc_proc_1_input_2_PredId_7;
          tscc_proc_1_input_3_ProcId_8 = next_value_of_tscc_proc_1_input_3_ProcId_8;
          goto top_of_proc_1;
        }
        else
        {
          MR_Integer Min0_22;
          MR_Integer Max0_23;
          MR_Integer Min1_24;
          MR_Integer Max1_25;
          MR_Word Goal_35;
          MR_Word Cases_36;
          MR_Word Var_47;

          hlds__goal_form__count_recursive_calls_5_p_0(Goal_14, PredId_2, ProcId_3, &Min0_22, &Max0_23);
          Var_47 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Cases_15, (MR_Integer) 0))));
          Cases_36 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Cases_15, (MR_Integer) 1))));
          Goal_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_47, (MR_Integer) 2))));
          if ((Cases_36 == (MR_Word) ((MR_Unsigned) 0U)))
            hlds__goal_form__count_recursive_calls_5_p_0(Goal_35, PredId_2, ProcId_3, &Min1_24, &Max1_25);
          else
          {
            MR_Integer Min0_43;
            MR_Integer Max0_44;
            MR_Integer Min1_45;
            MR_Integer Max1_46;

            hlds__goal_form__count_recursive_calls_5_p_0(Goal_35, PredId_2, ProcId_3, &Min0_43, &Max0_44);
            hlds__goal_form__count_recursive_calls_cases_5_p_0(Cases_36, PredId_2, ProcId_3, &Min1_45, &Max1_46);
            mercury__int__min_3_p_0(Min0_43, Min1_45, &Min1_24);
            mercury__int__max_3_p_0(Max0_44, Max1_46, &Max1_25);
          }
          mercury__int__min_3_p_0(Min0_22, Min1_24, &Min_4);
          mercury__int__max_3_p_0(Max0_23, Max1_25, &Max_5);
        }
      }
      tscc_output_1_Min_9 = Min_4;
      tscc_output_2_Max_10 = Max_5;
      goto tscc_end;
    }
  tscc_end:;
    *tscc_output_ptr_1_Min_9 = tscc_output_1_Min_9;
    *tscc_output_ptr_2_Max_10 = tscc_output_2_Max_10;
    return;
  }
}

static void MR_CALL 
hlds__goal_form__count_recursive_calls_conj_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word PredId_2,
  MR_Integer ProcId_3,
  MR_Integer HeadVar__4_4,
  MR_Integer HeadVar__5_5,
  MR_Integer * Min_6,
  MR_Integer * Max_7)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *Min_6 = HeadVar__4_4;
      *Max_7 = HeadVar__5_5;
    }
    else
    {
      MR_Word Goal_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Goals_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Integer Min1_20;
      MR_Integer Max1_21;
      MR_Integer Min2_22;
      MR_Integer Max2_23;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Integer next_value_of_HeadVar__4_4;
      MR_Integer next_value_of_HeadVar__5_5;

      hlds__goal_form__count_recursive_calls_5_p_0(Goal_12, PredId_2, ProcId_3, &Min1_20, &Max1_21);
      Min2_22 = (MR_Integer) ((MR_Unsigned) HeadVar__4_4 + (MR_Unsigned) Min1_20);
      Max2_23 = (MR_Integer) ((MR_Unsigned) HeadVar__5_5 + (MR_Unsigned) Max1_21);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Goals_13;
      next_value_of_HeadVar__4_4 = Min2_22;
      next_value_of_HeadVar__5_5 = Max2_23;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      HeadVar__4_4 = next_value_of_HeadVar__4_4;
      HeadVar__5_5 = next_value_of_HeadVar__5_5;
      continue;
    }
    break;
  }
}

MR_bool MR_CALL 
hlds__goal_form__cannot_fail_before_stack_flush_1_p_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_bool succeeded;
    MR_Word GoalExpr_2 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word GoalInfo_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Detism_4;
    MR_Word CanFail_5;
    MR_Word Var_6;

    Detism_4 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(GoalInfo_3);
    parse_tree__prog_data__determinism_components_3_p_0(Detism_4, &CanFail_5, &Var_6);
    switch (CanFail_5) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word ConjType_7;
          MR_Word Goals_8;

          succeeded = ((((MR_tag((MR_Word) GoalExpr_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), GoalExpr_2, (MR_Integer) 0)))) == (MR_Integer) 2)));
          if (succeeded)
          {
            ConjType_7 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), GoalExpr_2, (MR_Integer) 1))) & (MR_Integer) 1);
            Goals_8 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_2, (MR_Integer) 2))));
            succeeded = (ConjType_7 == (MR_Integer) 0);
            if (succeeded)
              succeeded = hlds__goal_form__cannot_fail_before_stack_flush_conj_1_p_0(Goals_8);
          }
        }
        break;
      case (MR_Integer) 1:
        succeeded = MR_TRUE;
        break;
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
hlds__goal_form__cannot_fail_before_stack_flush_conj_1_p_0(
  MR_Word HeadVar__1_1)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      succeeded = MR_TRUE;
    else
    {
      MR_Word Goal_2 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Goals_3 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word GoalExpr_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_2, (MR_Integer) 0))));
      MR_Word GoalInfo_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_2, (MR_Integer) 1))));

      if (((MR_tag((MR_Word) GoalExpr_4)) == (MR_Integer) 2))
      {
        MR_Word BuiltinState_9 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), GoalExpr_4, (MR_Integer) 3))) & (MR_Integer) 1);

        succeeded = (BuiltinState_9 != (MR_Integer) 0);
      }
      else
      if (((((MR_tag((MR_Word) GoalExpr_4)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), GoalExpr_4, (MR_Integer) 0)))) == (MR_Integer) 0))))
        succeeded = MR_TRUE;
      else
        succeeded = MR_FALSE;
      if (succeeded)
        succeeded = MR_TRUE;
      else
      {
        MR_Word Detism_17;
        MR_Word Var_20;
        MR_Word Var_18;
        MR_Word next_value_of_HeadVar__1_1;

        Detism_17 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(GoalInfo_5);
        parse_tree__prog_data__determinism_components_3_p_0(Detism_17, &Var_20, &Var_18);
        succeeded = ((MR_Integer) 1 == Var_20);
        if (succeeded)
        {
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__1_1 = Goals_3;
          HeadVar__1_1 = next_value_of_HeadVar__1_1;
          continue;
        }
      }
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
hlds__goal_form__cannot_stack_flush_1_p_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_bool succeeded;
    MR_Word GoalExpr_2 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));

    switch (MR_tag((MR_Word) GoalExpr_2)) {
      default:
        succeeded = MR_FALSE;
        break;
      case (MR_Integer) 0:
        {
          MR_Word Unify_26;
          MR_Word Var_32 = (MR_Word) ((MR_Word) (GoalExpr_2));
          MR_Word Var_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_32, (MR_Integer) 0))));

          succeeded = ((MR_tag((MR_Word) Var_33)) == (MR_Integer) 1);
          if (succeeded)
          {
            Unify_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_33, (MR_Integer) 3))));
            succeeded = ((((MR_tag((MR_Word) Unify_26)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Unify_26, (MR_Integer) 0)))) == (MR_Integer) 1)));
            if (succeeded)
            {
            }
            succeeded = !(succeeded);
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Unify_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr_2, (MR_Integer) 3))));

          succeeded = ((((MR_tag((MR_Word) Unify_7)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Unify_7, (MR_Integer) 0)))) == (MR_Integer) 1)));
          if (succeeded)
          {
          }
          succeeded = !(succeeded);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word BuiltinState_15 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), GoalExpr_2, (MR_Integer) 3))) & (MR_Integer) 1);

          succeeded = (BuiltinState_15 == (MR_Integer) 0);
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), GoalExpr_2, (MR_Integer) 0))))) {
          default:
            succeeded = MR_FALSE;
            break;
          case (MR_Integer) 2:
            {
              MR_Word ConjType_18 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), GoalExpr_2, (MR_Integer) 1))) & (MR_Integer) 1);
              MR_Word Goals_19 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_2, (MR_Integer) 2))));

              succeeded = (ConjType_18 == (MR_Integer) 0);
              if (succeeded)
                succeeded = hlds__goal_form__cannot_stack_flush_goals_1_p_0(Goals_19);
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Cases_22 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_2, (MR_Integer) 3))));

              succeeded = hlds__goal_form__cannot_stack_flush_cases_1_p_0(Cases_22);
            }
            break;
        }
        break;
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
hlds__goal_form__cannot_stack_flush_cases_1_p_0(
  MR_Word HeadVar__1_1)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      succeeded = MR_TRUE;
    else
    {
      MR_Word Goal_4;
      MR_Word Cases_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Var_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word GoalExpr_7;
      MR_Word next_value_of_HeadVar__1_1;

      Goal_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_6, (MR_Integer) 2))));
      GoalExpr_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_4, (MR_Integer) 0))));
      switch (MR_tag((MR_Word) GoalExpr_7)) {
        default:
          succeeded = MR_FALSE;
          break;
        case (MR_Integer) 0:
          {
            MR_Word Unify_31;
            MR_Word Var_37 = (MR_Word) ((MR_Word) (GoalExpr_7));
            MR_Word Var_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_37, (MR_Integer) 0))));

            succeeded = ((MR_tag((MR_Word) Var_38)) == (MR_Integer) 1);
            if (succeeded)
            {
              Unify_31 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_38, (MR_Integer) 3))));
              succeeded = ((((MR_tag((MR_Word) Unify_31)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Unify_31, (MR_Integer) 0)))) == (MR_Integer) 1)));
              if (succeeded)
              {
              }
              succeeded = !(succeeded);
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Unify_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr_7, (MR_Integer) 3))));

            succeeded = ((((MR_tag((MR_Word) Unify_12)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Unify_12, (MR_Integer) 0)))) == (MR_Integer) 1)));
            if (succeeded)
            {
            }
            succeeded = !(succeeded);
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word BuiltinState_20 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), GoalExpr_7, (MR_Integer) 3))) & (MR_Integer) 1);

            succeeded = (BuiltinState_20 == (MR_Integer) 0);
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), GoalExpr_7, (MR_Integer) 0))))) {
            default:
              succeeded = MR_FALSE;
              break;
            case (MR_Integer) 2:
              {
                MR_Word ConjType_23 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), GoalExpr_7, (MR_Integer) 1))) & (MR_Integer) 1);
                MR_Word Goals_24 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_7, (MR_Integer) 2))));

                succeeded = (ConjType_23 == (MR_Integer) 0);
                if (succeeded)
                  succeeded = hlds__goal_form__cannot_stack_flush_goals_1_p_0(Goals_24);
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Word Cases_27 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_7, (MR_Integer) 3))));

                succeeded = hlds__goal_form__cannot_stack_flush_cases_1_p_0(Cases_27);
              }
              break;
          }
          break;
      }
      if (succeeded)
      {
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__1_1 = Cases_5;
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

static MR_bool MR_CALL 
hlds__goal_form__cannot_stack_flush_goals_1_p_0(
  MR_Word HeadVar__1_1)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      succeeded = MR_TRUE;
    else
    {
      MR_Word Goal_2 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Goals_3 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word GoalExpr_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_2, (MR_Integer) 0))));
      MR_Word next_value_of_HeadVar__1_1;

      switch (MR_tag((MR_Word) GoalExpr_4)) {
        default:
          succeeded = MR_FALSE;
          break;
        case (MR_Integer) 0:
          {
            MR_Word Unify_28;
            MR_Word Var_34 = (MR_Word) ((MR_Word) (GoalExpr_4));
            MR_Word Var_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_34, (MR_Integer) 0))));

            succeeded = ((MR_tag((MR_Word) Var_35)) == (MR_Integer) 1);
            if (succeeded)
            {
              Unify_28 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_35, (MR_Integer) 3))));
              succeeded = ((((MR_tag((MR_Word) Unify_28)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Unify_28, (MR_Integer) 0)))) == (MR_Integer) 1)));
              if (succeeded)
              {
              }
              succeeded = !(succeeded);
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Unify_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr_4, (MR_Integer) 3))));

            succeeded = ((((MR_tag((MR_Word) Unify_9)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Unify_9, (MR_Integer) 0)))) == (MR_Integer) 1)));
            if (succeeded)
            {
            }
            succeeded = !(succeeded);
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word BuiltinState_17 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), GoalExpr_4, (MR_Integer) 3))) & (MR_Integer) 1);

            succeeded = (BuiltinState_17 == (MR_Integer) 0);
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), GoalExpr_4, (MR_Integer) 0))))) {
            default:
              succeeded = MR_FALSE;
              break;
            case (MR_Integer) 2:
              {
                MR_Word ConjType_20 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), GoalExpr_4, (MR_Integer) 1))) & (MR_Integer) 1);
                MR_Word Goals_21 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_4, (MR_Integer) 2))));

                succeeded = (ConjType_20 == (MR_Integer) 0);
                if (succeeded)
                  succeeded = hlds__goal_form__cannot_stack_flush_goals_1_p_0(Goals_21);
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Word Cases_24 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_4, (MR_Integer) 3))));

                succeeded = hlds__goal_form__cannot_stack_flush_cases_1_p_0(Cases_24);
              }
              break;
          }
          break;
      }
      if (succeeded)
      {
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__1_1 = Goals_3;
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
hlds__goal_form__goal_list_may_allocate_heap_1_p_0(
  MR_Word Goals_2)
{
  {
    MR_bool succeeded;
    MR_Word Var_4;

    hlds__goal_form__goal_list_may_allocate_heap_2_p_0(Goals_2, &Var_4);
    succeeded = ((MR_Integer) 1 == Var_4);
    return succeeded;
  }
}

MR_bool MR_CALL 
hlds__goal_form__goal_may_allocate_heap_1_p_0(
  MR_Word Goal_2)
{
  {
    MR_bool succeeded;
    MR_Word GoalExpr_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_2, (MR_Integer) 0))));

    switch (MR_tag((MR_Word) GoalExpr_6)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word SubGoal_51 = (MR_Word) ((MR_Word) (GoalExpr_6));
          MR_Word Var_104;

          hlds__goal_form__goal_may_allocate_heap_2_p_0(SubGoal_51, &Var_104);
          succeeded = ((MR_Integer) 1 == Var_104);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Unification_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr_6, (MR_Integer) 3))));
          MR_Word Args_17;

          succeeded = ((MR_tag((MR_Word) Unification_13)) == (MR_Integer) 0);
          if (succeeded)
          {
            Args_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Unification_13, (MR_Integer) 2))));
            succeeded = (Args_17 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
            }
          }
          if (succeeded)
            succeeded = MR_TRUE;
          else
            succeeded = ((MR_Integer) 1 == (MR_Integer) 0);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Builtin_27 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), GoalExpr_6, (MR_Integer) 3))) & (MR_Integer) 1);

          switch (Builtin_27) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              succeeded = ((MR_Integer) 1 == (MR_Integer) 0);
              break;
            case (MR_Integer) 1:
              succeeded = MR_TRUE;
              break;
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), GoalExpr_6, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            succeeded = MR_TRUE;
            break;
          case (MR_Integer) 1:
            succeeded = MR_TRUE;
            break;
          case (MR_Integer) 2:
            {
              MR_Word ConjType_42 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), GoalExpr_6, (MR_Integer) 1))) & (MR_Integer) 1);
              MR_Word Goals_43 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_6, (MR_Integer) 2))));

              switch (ConjType_42) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  succeeded = MR_TRUE;
                  break;
                case (MR_Integer) 0:
                  {
                    MR_Word Var_90;

                    hlds__goal_form__goal_list_may_allocate_heap_2_p_0(Goals_43, &Var_90);
                    succeeded = ((MR_Integer) 1 == Var_90);
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Goals_71 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_6, (MR_Integer) 1))));
              MR_Word Var_93;

              hlds__goal_form__goal_list_may_allocate_heap_2_p_0(Goals_71, &Var_93);
              succeeded = ((MR_Integer) 1 == Var_93);
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Cases_46 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_6, (MR_Integer) 3))));
              MR_Word Var_125;

              hlds__goal_form__cases_may_allocate_heap_2_p_0(Cases_46, &Var_125);
              succeeded = ((MR_Integer) 1 == Var_125);
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word Reason_52 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_6, (MR_Integer) 1))));
              MR_Word SubGoal_72 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_6, (MR_Integer) 2))));
              MR_Word FGT_54;

              succeeded = ((((MR_tag((MR_Word) Reason_52)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Reason_52, (MR_Integer) 0)))) == (MR_Integer) 6)));
              if (succeeded)
              {
                FGT_54 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Reason_52, (MR_Integer) 2))) & (MR_Integer) 3);
                switch (FGT_54) {
                  default:
                    succeeded = MR_FALSE;
                    break;
                  case (MR_Integer) 1:
                    succeeded = MR_TRUE;
                    break;
                  case (MR_Integer) 2:
                    succeeded = MR_TRUE;
                    break;
                }
              }
              if (succeeded)
                succeeded = MR_TRUE;
              else
              {
                MR_Word Var_113;

                hlds__goal_form__goal_may_allocate_heap_2_p_0(SubGoal_72, &Var_113);
                succeeded = ((MR_Integer) 1 == Var_113);
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word Cond_48 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_6, (MR_Integer) 2))));
              MR_Word Then_49 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_6, (MR_Integer) 3))));
              MR_Word Else_50 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_6, (MR_Integer) 4))));
              MR_Word Var_73;

              hlds__goal_form__goal_may_allocate_heap_2_p_0(Cond_48, &Var_73);
              succeeded = ((MR_Integer) 1 == Var_73);
              if (succeeded)
                succeeded = MR_TRUE;
              else
              {
                MR_Word Var_74;

                hlds__goal_form__goal_may_allocate_heap_2_p_0(Then_49, &Var_74);
                succeeded = ((MR_Integer) 1 == Var_74);
                if (succeeded)
                  succeeded = MR_TRUE;
                else
                {
                  MR_Word Var_100;

                  hlds__goal_form__goal_may_allocate_heap_2_p_0(Else_50, &Var_100);
                  succeeded = ((MR_Integer) 1 == Var_100);
                }
              }
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word ShortHand_55 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_6, (MR_Integer) 1))));

              switch (MR_tag((MR_Word) ShortHand_55)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word GoalA_66 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ShortHand_55, (MR_Integer) 0))));
                    MR_Word GoalB_67 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ShortHand_55, (MR_Integer) 1))));
                    MR_Word Var_75;

                    hlds__goal_form__goal_may_allocate_heap_2_p_0(GoalA_66, &Var_75);
                    succeeded = ((MR_Integer) 1 == Var_75);
                    if (succeeded)
                      succeeded = MR_TRUE;
                    else
                    {
                      MR_Word Var_120;

                      hlds__goal_form__goal_may_allocate_heap_2_p_0(GoalB_67, &Var_120);
                      succeeded = ((MR_Integer) 1 == Var_120);
                    }
                  }
                  break;
                case (MR_Integer) 1:
                case (MR_Integer) 2:
                  succeeded = MR_TRUE;
                  break;
              }
            }
            break;
        }
        break;
    }
    return succeeded;
  }
}

static void MR_CALL 
hlds__goal_form__goal_may_allocate_heap_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * May_5)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word GoalExpr_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));

    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) GoalExpr_3)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word SubGoal_49 = (MR_Word) ((MR_Word) (GoalExpr_3));
          MR_Word next_value_of_HeadVar__1_1 = SubGoal_49;

          // direct tailcall eliminated
          ;
          HeadVar__1_1 = next_value_of_HeadVar__1_1;
          continue;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Unification_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr_3, (MR_Integer) 3))));
          MR_Word Args_15;

          succeeded = ((MR_tag((MR_Word) Unification_11)) == (MR_Integer) 0);
          if (succeeded)
          {
            Args_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Unification_11, (MR_Integer) 2))));
            succeeded = (Args_15 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
            }
          }
          if (succeeded)
            *May_5 = (MR_Integer) 1;
          else
            *May_5 = (MR_Integer) 0;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Builtin_25 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), GoalExpr_3, (MR_Integer) 3))) & (MR_Integer) 1);

          switch (Builtin_25) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *May_5 = (MR_Integer) 0;
              break;
            case (MR_Integer) 1:
              *May_5 = (MR_Integer) 1;
              break;
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), GoalExpr_3, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *May_5 = (MR_Integer) 1;
            break;
          case (MR_Integer) 1:
            *May_5 = (MR_Integer) 1;
            break;
          case (MR_Integer) 2:
            {
              MR_Word ConjType_40 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), GoalExpr_3, (MR_Integer) 1))) & (MR_Integer) 1);
              MR_Word Goals_41 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_3, (MR_Integer) 2))));

              switch (ConjType_40) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  *May_5 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 0:
                  hlds__goal_form__goal_list_may_allocate_heap_2_p_0(Goals_41, May_5);
                  break;
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Goals_69 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_3, (MR_Integer) 1))));

              hlds__goal_form__goal_list_may_allocate_heap_2_p_0(Goals_69, May_5);
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Cases_44 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_3, (MR_Integer) 3))));

              hlds__goal_form__cases_may_allocate_heap_2_p_0(Cases_44, May_5);
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word Reason_50 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_3, (MR_Integer) 1))));
              MR_Word SubGoal_70 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_3, (MR_Integer) 2))));
              MR_Word FGT_52;

              succeeded = ((((MR_tag((MR_Word) Reason_50)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Reason_50, (MR_Integer) 0)))) == (MR_Integer) 6)));
              if (succeeded)
              {
                FGT_52 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Reason_50, (MR_Integer) 2))) & (MR_Integer) 3);
                switch (FGT_52) {
                  default:
                    succeeded = MR_FALSE;
                    break;
                  case (MR_Integer) 1:
                    succeeded = MR_TRUE;
                    break;
                  case (MR_Integer) 2:
                    succeeded = MR_TRUE;
                    break;
                }
              }
              if (succeeded)
                *May_5 = (MR_Integer) 1;
              else
              {
                MR_Word next_value_of_HeadVar__1_1 = SubGoal_70;

                // direct tailcall eliminated
                ;
                HeadVar__1_1 = next_value_of_HeadVar__1_1;
                continue;
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word Cond_46 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_3, (MR_Integer) 2))));
              MR_Word Then_47 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_3, (MR_Integer) 3))));
              MR_Word Else_48 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_3, (MR_Integer) 4))));
              MR_Word Var_71;

              hlds__goal_form__goal_may_allocate_heap_2_p_0(Cond_46, &Var_71);
              succeeded = ((MR_Integer) 1 == Var_71);
              if (succeeded)
                *May_5 = (MR_Integer) 1;
              else
              {
                MR_Word Var_72;

                hlds__goal_form__goal_may_allocate_heap_2_p_0(Then_47, &Var_72);
                succeeded = ((MR_Integer) 1 == Var_72);
                if (succeeded)
                  *May_5 = (MR_Integer) 1;
                else
                {
                  MR_Word next_value_of_HeadVar__1_1 = Else_48;

                  // direct tailcall eliminated
                  ;
                  HeadVar__1_1 = next_value_of_HeadVar__1_1;
                  continue;
                }
              }
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word ShortHand_53 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_3, (MR_Integer) 1))));

              switch (MR_tag((MR_Word) ShortHand_53)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word GoalA_64 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ShortHand_53, (MR_Integer) 0))));
                    MR_Word GoalB_65 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ShortHand_53, (MR_Integer) 1))));
                    MR_Word Var_73;

                    hlds__goal_form__goal_may_allocate_heap_2_p_0(GoalA_64, &Var_73);
                    succeeded = ((MR_Integer) 1 == Var_73);
                    if (succeeded)
                      *May_5 = (MR_Integer) 1;
                    else
                    {
                      MR_Word next_value_of_HeadVar__1_1 = GoalB_65;

                      // direct tailcall eliminated
                      ;
                      HeadVar__1_1 = next_value_of_HeadVar__1_1;
                      continue;
                    }
                  }
                  break;
                case (MR_Integer) 1:
                case (MR_Integer) 2:
                  *May_5 = (MR_Integer) 1;
                  break;
              }
            }
            break;
        }
        break;
    }
    break;
  }
}

static void MR_CALL 
hlds__goal_form__cases_may_allocate_heap_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__2_2 = (MR_Integer) 0;
    else
    {
      MR_Word Goal_5;
      MR_Word Cases_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Var_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word GoalExpr_12;

      Goal_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_8, (MR_Integer) 2))));
      GoalExpr_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_5, (MR_Integer) 0))));
      switch (MR_tag((MR_Word) GoalExpr_12)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word SubGoal_57 = (MR_Word) ((MR_Word) (GoalExpr_12));
            MR_Word Var_110;

            hlds__goal_form__goal_may_allocate_heap_2_p_0(SubGoal_57, &Var_110);
            succeeded = ((MR_Integer) 1 == Var_110);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Unification_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr_12, (MR_Integer) 3))));
            MR_Word Args_23;

            succeeded = ((MR_tag((MR_Word) Unification_19)) == (MR_Integer) 0);
            if (succeeded)
            {
              Args_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Unification_19, (MR_Integer) 2))));
              succeeded = (Args_23 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
              }
            }
            if (succeeded)
              succeeded = MR_TRUE;
            else
              succeeded = ((MR_Integer) 1 == (MR_Integer) 0);
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Builtin_33 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), GoalExpr_12, (MR_Integer) 3))) & (MR_Integer) 1);

            switch (Builtin_33) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                succeeded = ((MR_Integer) 1 == (MR_Integer) 0);
                break;
              case (MR_Integer) 1:
                succeeded = MR_TRUE;
                break;
            }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), GoalExpr_12, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              succeeded = MR_TRUE;
              break;
            case (MR_Integer) 1:
              succeeded = MR_TRUE;
              break;
            case (MR_Integer) 2:
              {
                MR_Word ConjType_48 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), GoalExpr_12, (MR_Integer) 1))) & (MR_Integer) 1);
                MR_Word Goals_49 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_12, (MR_Integer) 2))));

                switch (ConjType_48) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 1:
                    succeeded = MR_TRUE;
                    break;
                  case (MR_Integer) 0:
                    {
                      MR_Word Var_96;

                      hlds__goal_form__goal_list_may_allocate_heap_2_p_0(Goals_49, &Var_96);
                      succeeded = ((MR_Integer) 1 == Var_96);
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word Goals_77 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_12, (MR_Integer) 1))));
                MR_Word Var_99;

                hlds__goal_form__goal_list_may_allocate_heap_2_p_0(Goals_77, &Var_99);
                succeeded = ((MR_Integer) 1 == Var_99);
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Word Cases_52 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_12, (MR_Integer) 3))));
                MR_Word Var_131;

                hlds__goal_form__cases_may_allocate_heap_2_p_0(Cases_52, &Var_131);
                succeeded = ((MR_Integer) 1 == Var_131);
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word Reason_58 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_12, (MR_Integer) 1))));
                MR_Word SubGoal_78 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_12, (MR_Integer) 2))));
                MR_Word FGT_60;

                succeeded = ((((MR_tag((MR_Word) Reason_58)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Reason_58, (MR_Integer) 0)))) == (MR_Integer) 6)));
                if (succeeded)
                {
                  FGT_60 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Reason_58, (MR_Integer) 2))) & (MR_Integer) 3);
                  switch (FGT_60) {
                    default:
                      succeeded = MR_FALSE;
                      break;
                    case (MR_Integer) 1:
                      succeeded = MR_TRUE;
                      break;
                    case (MR_Integer) 2:
                      succeeded = MR_TRUE;
                      break;
                  }
                }
                if (succeeded)
                  succeeded = MR_TRUE;
                else
                {
                  MR_Word Var_119;

                  hlds__goal_form__goal_may_allocate_heap_2_p_0(SubGoal_78, &Var_119);
                  succeeded = ((MR_Integer) 1 == Var_119);
                }
              }
              break;
            case (MR_Integer) 6:
              {
                MR_Word Cond_54 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_12, (MR_Integer) 2))));
                MR_Word Then_55 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_12, (MR_Integer) 3))));
                MR_Word Else_56 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_12, (MR_Integer) 4))));
                MR_Word Var_79;

                hlds__goal_form__goal_may_allocate_heap_2_p_0(Cond_54, &Var_79);
                succeeded = ((MR_Integer) 1 == Var_79);
                if (succeeded)
                  succeeded = MR_TRUE;
                else
                {
                  MR_Word Var_80;

                  hlds__goal_form__goal_may_allocate_heap_2_p_0(Then_55, &Var_80);
                  succeeded = ((MR_Integer) 1 == Var_80);
                  if (succeeded)
                    succeeded = MR_TRUE;
                  else
                  {
                    MR_Word Var_106;

                    hlds__goal_form__goal_may_allocate_heap_2_p_0(Else_56, &Var_106);
                    succeeded = ((MR_Integer) 1 == Var_106);
                  }
                }
              }
              break;
            case (MR_Integer) 7:
              {
                MR_Word ShortHand_61 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_12, (MR_Integer) 1))));

                switch (MR_tag((MR_Word) ShortHand_61)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      MR_Word GoalA_72 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ShortHand_61, (MR_Integer) 0))));
                      MR_Word GoalB_73 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ShortHand_61, (MR_Integer) 1))));
                      MR_Word Var_81;

                      hlds__goal_form__goal_may_allocate_heap_2_p_0(GoalA_72, &Var_81);
                      succeeded = ((MR_Integer) 1 == Var_81);
                      if (succeeded)
                        succeeded = MR_TRUE;
                      else
                      {
                        MR_Word Var_126;

                        hlds__goal_form__goal_may_allocate_heap_2_p_0(GoalB_73, &Var_126);
                        succeeded = ((MR_Integer) 1 == Var_126);
                      }
                    }
                    break;
                  case (MR_Integer) 1:
                  case (MR_Integer) 2:
                    succeeded = MR_TRUE;
                    break;
                }
              }
              break;
          }
          break;
      }
      if (succeeded)
        *HeadVar__2_2 = (MR_Integer) 1;
      else
      {
        MR_Word next_value_of_HeadVar__1_1 = Cases_6;

        // direct tailcall eliminated
        ;
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        continue;
      }
    }
    break;
  }
}

static void MR_CALL 
hlds__goal_form__goal_list_may_allocate_heap_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__2_2 = (MR_Integer) 0;
    else
    {
      MR_Word Goal_3 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Goals_4 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word GoalExpr_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_3, (MR_Integer) 0))));

      switch (MR_tag((MR_Word) GoalExpr_9)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word SubGoal_54 = (MR_Word) ((MR_Word) (GoalExpr_9));
            MR_Word Var_107;

            hlds__goal_form__goal_may_allocate_heap_2_p_0(SubGoal_54, &Var_107);
            succeeded = ((MR_Integer) 1 == Var_107);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Unification_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr_9, (MR_Integer) 3))));
            MR_Word Args_20;

            succeeded = ((MR_tag((MR_Word) Unification_16)) == (MR_Integer) 0);
            if (succeeded)
            {
              Args_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Unification_16, (MR_Integer) 2))));
              succeeded = (Args_20 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
              }
            }
            if (succeeded)
              succeeded = MR_TRUE;
            else
              succeeded = ((MR_Integer) 1 == (MR_Integer) 0);
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Builtin_30 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), GoalExpr_9, (MR_Integer) 3))) & (MR_Integer) 1);

            switch (Builtin_30) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                succeeded = ((MR_Integer) 1 == (MR_Integer) 0);
                break;
              case (MR_Integer) 1:
                succeeded = MR_TRUE;
                break;
            }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), GoalExpr_9, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              succeeded = MR_TRUE;
              break;
            case (MR_Integer) 1:
              succeeded = MR_TRUE;
              break;
            case (MR_Integer) 2:
              {
                MR_Word ConjType_45 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), GoalExpr_9, (MR_Integer) 1))) & (MR_Integer) 1);
                MR_Word Goals_46 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_9, (MR_Integer) 2))));

                switch (ConjType_45) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 1:
                    succeeded = MR_TRUE;
                    break;
                  case (MR_Integer) 0:
                    {
                      MR_Word Var_93;

                      hlds__goal_form__goal_list_may_allocate_heap_2_p_0(Goals_46, &Var_93);
                      succeeded = ((MR_Integer) 1 == Var_93);
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word Goals_74 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_9, (MR_Integer) 1))));
                MR_Word Var_96;

                hlds__goal_form__goal_list_may_allocate_heap_2_p_0(Goals_74, &Var_96);
                succeeded = ((MR_Integer) 1 == Var_96);
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Word Cases_49 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_9, (MR_Integer) 3))));
                MR_Word Var_128;

                hlds__goal_form__cases_may_allocate_heap_2_p_0(Cases_49, &Var_128);
                succeeded = ((MR_Integer) 1 == Var_128);
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word Reason_55 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_9, (MR_Integer) 1))));
                MR_Word SubGoal_75 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_9, (MR_Integer) 2))));
                MR_Word FGT_57;

                succeeded = ((((MR_tag((MR_Word) Reason_55)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Reason_55, (MR_Integer) 0)))) == (MR_Integer) 6)));
                if (succeeded)
                {
                  FGT_57 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Reason_55, (MR_Integer) 2))) & (MR_Integer) 3);
                  switch (FGT_57) {
                    default:
                      succeeded = MR_FALSE;
                      break;
                    case (MR_Integer) 1:
                      succeeded = MR_TRUE;
                      break;
                    case (MR_Integer) 2:
                      succeeded = MR_TRUE;
                      break;
                  }
                }
                if (succeeded)
                  succeeded = MR_TRUE;
                else
                {
                  MR_Word Var_116;

                  hlds__goal_form__goal_may_allocate_heap_2_p_0(SubGoal_75, &Var_116);
                  succeeded = ((MR_Integer) 1 == Var_116);
                }
              }
              break;
            case (MR_Integer) 6:
              {
                MR_Word Cond_51 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_9, (MR_Integer) 2))));
                MR_Word Then_52 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_9, (MR_Integer) 3))));
                MR_Word Else_53 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_9, (MR_Integer) 4))));
                MR_Word Var_76;

                hlds__goal_form__goal_may_allocate_heap_2_p_0(Cond_51, &Var_76);
                succeeded = ((MR_Integer) 1 == Var_76);
                if (succeeded)
                  succeeded = MR_TRUE;
                else
                {
                  MR_Word Var_77;

                  hlds__goal_form__goal_may_allocate_heap_2_p_0(Then_52, &Var_77);
                  succeeded = ((MR_Integer) 1 == Var_77);
                  if (succeeded)
                    succeeded = MR_TRUE;
                  else
                  {
                    MR_Word Var_103;

                    hlds__goal_form__goal_may_allocate_heap_2_p_0(Else_53, &Var_103);
                    succeeded = ((MR_Integer) 1 == Var_103);
                  }
                }
              }
              break;
            case (MR_Integer) 7:
              {
                MR_Word ShortHand_58 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_9, (MR_Integer) 1))));

                switch (MR_tag((MR_Word) ShortHand_58)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      MR_Word GoalA_69 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ShortHand_58, (MR_Integer) 0))));
                      MR_Word GoalB_70 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ShortHand_58, (MR_Integer) 1))));
                      MR_Word Var_78;

                      hlds__goal_form__goal_may_allocate_heap_2_p_0(GoalA_69, &Var_78);
                      succeeded = ((MR_Integer) 1 == Var_78);
                      if (succeeded)
                        succeeded = MR_TRUE;
                      else
                      {
                        MR_Word Var_123;

                        hlds__goal_form__goal_may_allocate_heap_2_p_0(GoalB_70, &Var_123);
                        succeeded = ((MR_Integer) 1 == Var_123);
                      }
                    }
                    break;
                  case (MR_Integer) 1:
                  case (MR_Integer) 2:
                    succeeded = MR_TRUE;
                    break;
                }
              }
              break;
          }
          break;
      }
      if (succeeded)
        *HeadVar__2_2 = (MR_Integer) 1;
      else
      {
        MR_Word next_value_of_HeadVar__1_1 = Goals_4;

        // direct tailcall eliminated
        ;
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        continue;
      }
    }
    break;
  }
}

MR_Word MR_CALL 
hlds__goal_form__goal_is_flat_1_f_0(
  MR_Word HeadVar__1_1)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word HeadVar__2_2;
    MR_Word GoalExpr_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));

    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) GoalExpr_3)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word SubGoal_41 = (MR_Word) ((MR_Word) (GoalExpr_3));
          MR_Word next_value_of_HeadVar__1_1 = SubGoal_41;

          // direct tailcall eliminated
          ;
          HeadVar__1_1 = next_value_of_HeadVar__1_1;
          continue;
        }
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        HeadVar__2_2 = (MR_Integer) 1;
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), GoalExpr_3, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
            HeadVar__2_2 = (MR_Integer) 1;
            break;
          case (MR_Integer) 2:
            {
              MR_Word ConjType_30 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), GoalExpr_3, (MR_Integer) 1))) & (MR_Integer) 1);
              MR_Word Goals_31 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_3, (MR_Integer) 2))));

              switch (ConjType_30) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  HeadVar__2_2 = (MR_Integer) 0;
                  break;
                case (MR_Integer) 0:
                  HeadVar__2_2 = hlds__goal_form__goal_is_flat_list_1_f_0(Goals_31);
                  break;
              }
            }
            break;
          case (MR_Integer) 3:
          case (MR_Integer) 4:
          case (MR_Integer) 6:
          case (MR_Integer) 7:
            HeadVar__2_2 = (MR_Integer) 0;
            break;
          case (MR_Integer) 5:
            {
              MR_Word Reason_42 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_3, (MR_Integer) 1))));
              MR_Word SubGoal_45 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_3, (MR_Integer) 2))));
              MR_Word FGT_44;

              succeeded = ((((MR_tag((MR_Word) Reason_42)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Reason_42, (MR_Integer) 0)))) == (MR_Integer) 6)));
              if (succeeded)
              {
                FGT_44 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Reason_42, (MR_Integer) 2))) & (MR_Integer) 3);
                switch (FGT_44) {
                  default:
                    succeeded = MR_FALSE;
                    break;
                  case (MR_Integer) 1:
                    succeeded = MR_TRUE;
                    break;
                  case (MR_Integer) 2:
                    succeeded = MR_TRUE;
                    break;
                }
              }
              if (succeeded)
                HeadVar__2_2 = (MR_Integer) 1;
              else
              {
                MR_Word next_value_of_HeadVar__1_1 = SubGoal_45;

                // direct tailcall eliminated
                ;
                HeadVar__1_1 = next_value_of_HeadVar__1_1;
                continue;
              }
            }
            break;
        }
        break;
    }
    return HeadVar__2_2;
    break;
  }
}

static MR_Word MR_CALL 
hlds__goal_form__goal_is_flat_list_1_f_0(
  MR_Word HeadVar__1_1)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word HeadVar__2_2;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      HeadVar__2_2 = (MR_Integer) 1;
    else
    {
      MR_Word Goal_3 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Goals_4 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word GoalExpr_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_3, (MR_Integer) 0))));

      switch (MR_tag((MR_Word) GoalExpr_7)) {
        default:
          succeeded = MR_FALSE;
          break;
        case (MR_Integer) 0:
          {
            MR_Word SubGoal_45 = (MR_Word) ((MR_Word) (GoalExpr_7));
            MR_Word Var_61;

            Var_61 = hlds__goal_form__goal_is_flat_1_f_0(SubGoal_45);
            succeeded = (Var_61 == (MR_Integer) 1);
          }
          break;
        case (MR_Integer) 1:
        case (MR_Integer) 2:
          succeeded = MR_TRUE;
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), GoalExpr_7, (MR_Integer) 0))))) {
            default:
              succeeded = MR_FALSE;
              break;
            case (MR_Integer) 0:
            case (MR_Integer) 1:
              succeeded = MR_TRUE;
              break;
            case (MR_Integer) 2:
              {
                MR_Word ConjType_34 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), GoalExpr_7, (MR_Integer) 1))) & (MR_Integer) 1);
                MR_Word Goals_35 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_7, (MR_Integer) 2))));
                MR_Word Var_56;

                succeeded = (ConjType_34 == (MR_Integer) 0);
                if (succeeded)
                {
                  Var_56 = hlds__goal_form__goal_is_flat_list_1_f_0(Goals_35);
                  succeeded = (Var_56 == (MR_Integer) 1);
                }
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word Reason_46 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_7, (MR_Integer) 1))));
                MR_Word SubGoal_49 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_7, (MR_Integer) 2))));
                MR_Word FGT_48;

                succeeded = ((((MR_tag((MR_Word) Reason_46)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Reason_46, (MR_Integer) 0)))) == (MR_Integer) 6)));
                if (succeeded)
                {
                  FGT_48 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Reason_46, (MR_Integer) 2))) & (MR_Integer) 3);
                  switch (FGT_48) {
                    default:
                      succeeded = MR_FALSE;
                      break;
                    case (MR_Integer) 1:
                      succeeded = MR_TRUE;
                      break;
                    case (MR_Integer) 2:
                      succeeded = MR_TRUE;
                      break;
                  }
                }
                if (succeeded)
                  succeeded = MR_TRUE;
                else
                {
                  MR_Word Var_64;

                  Var_64 = hlds__goal_form__goal_is_flat_1_f_0(SubGoal_49);
                  succeeded = (Var_64 == (MR_Integer) 1);
                }
              }
              break;
          }
          break;
      }
      if (succeeded)
      {
        MR_Word next_value_of_HeadVar__1_1 = Goals_4;

        // direct tailcall eliminated
        ;
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        continue;
      }
      else
        HeadVar__2_2 = (MR_Integer) 0;
    }
    return HeadVar__2_2;
    break;
  }
}

MR_bool MR_CALL 
hlds__goal_form__goal_can_loop_or_throw_1_p_0(
  MR_Word Goal_2)
{
  {
    MR_bool succeeded;
    MR_Word Var_4;
    MR_Word Var_6;
    MR_Word Var_7;

    Var_4 = hlds__goal_form__goal_can_loop_func_2_f_0((MR_Word) ((MR_Unsigned) 0U), Goal_2);
    succeeded = (Var_4 == (MR_Integer) 0);
    if (succeeded)
    {
      Var_7 = (MR_Word) ((MR_Unsigned) 0U);
      Var_6 = hlds__goal_form__goal_can_throw_func_2_f_0(Var_7, Goal_2);
      succeeded = (Var_6 == (MR_Integer) 0);
    }
    succeeded = !(succeeded);
    return succeeded;
  }
}

MR_bool MR_CALL 
hlds__goal_form__goal_cannot_loop_or_throw_1_p_0(
  MR_Word Goal_2)
{
  {
    MR_bool succeeded;
    MR_Word Var_3;
    MR_Word Var_5;
    MR_Word Var_6;

    Var_3 = hlds__goal_form__goal_can_loop_func_2_f_0((MR_Word) ((MR_Unsigned) 0U), Goal_2);
    succeeded = (Var_3 == (MR_Integer) 0);
    if (succeeded)
    {
      Var_6 = (MR_Word) ((MR_Unsigned) 0U);
      Var_5 = hlds__goal_form__goal_can_throw_func_2_f_0(Var_6, Goal_2);
      succeeded = (Var_5 == (MR_Integer) 0);
    }
    return succeeded;
  }
}

MR_bool MR_CALL 
hlds__goal_form__goal_can_loop_or_throw_2_p_0(
  MR_Word ModuleInfo_3,
  MR_Word Goal_4)
{
  {
    MR_bool succeeded;
    MR_Word Var_7;
    MR_Word Var_8;
    MR_Word Var_9;

    {
      Var_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_8, 0) = ((MR_Box) (ModuleInfo_3));
    }
    Var_7 = hlds__goal_form__goal_can_loop_func_2_f_0(Var_8, Goal_4);
    succeeded = (Var_7 == (MR_Integer) 0);
    if (succeeded)
    {
      Var_9 = hlds__goal_form__goal_can_throw_func_2_f_0(Var_8, Goal_4);
      succeeded = (Var_9 == (MR_Integer) 0);
    }
    succeeded = !(succeeded);
    return succeeded;
  }
}

MR_bool MR_CALL 
hlds__goal_form__goal_cannot_loop_or_throw_2_p_0(
  MR_Word ModuleInfo_3,
  MR_Word Goal_4)
{
  {
    MR_bool succeeded;
    MR_Word Var_5;
    MR_Word Var_6;
    MR_Word Var_7;

    {
      Var_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_6, 0) = ((MR_Box) (ModuleInfo_3));
    }
    Var_5 = hlds__goal_form__goal_can_loop_func_2_f_0(Var_6, Goal_4);
    succeeded = (Var_5 == (MR_Integer) 0);
    if (succeeded)
    {
      Var_7 = hlds__goal_form__goal_can_throw_func_2_f_0(Var_6, Goal_4);
      succeeded = (Var_7 == (MR_Integer) 0);
    }
    return succeeded;
  }
}

MR_bool MR_CALL 
hlds__goal_form__goal_can_throw_2_p_0(
  MR_Word ModuleInfo_3,
  MR_Word Goal_4)
{
  {
    MR_bool succeeded;
    MR_Word Var_5;
    MR_Word Var_6;

    {
      Var_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_6, 0) = ((MR_Box) (ModuleInfo_3));
    }
    Var_5 = hlds__goal_form__goal_can_throw_func_2_f_0(Var_6, Goal_4);
    succeeded = (Var_5 == (MR_Integer) 1);
    return succeeded;
  }
}

MR_bool MR_CALL 
hlds__goal_form__goal_cannot_throw_2_p_0(
  MR_Word ModuleInfo_3,
  MR_Word Goal_4)
{
  {
    MR_bool succeeded;
    MR_Word Var_5;
    MR_Word Var_6;

    {
      Var_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_6, 0) = ((MR_Box) (ModuleInfo_3));
    }
    Var_5 = hlds__goal_form__goal_can_throw_func_2_f_0(Var_6, Goal_4);
    succeeded = (Var_5 == (MR_Integer) 0);
    return succeeded;
  }
}

static MR_Word MR_CALL 
hlds__goal_form__goal_can_throw_func_2_f_0(
  MR_Word MaybeModuleInfo_4,
  MR_Word HeadVar__2_2)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word CanThrow_7;
    MR_Word GoalExpr_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
    MR_Word GoalInfo_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
    MR_Word Determinism_8;

    // setup for model_det tailcalls optimized into a loop
    ;
    Determinism_8 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(GoalInfo_6);
    succeeded = (Determinism_8 == (MR_Integer) 6);
    if (succeeded)
      CanThrow_7 = (MR_Integer) 1;
    else
      switch (MR_tag((MR_Word) GoalExpr_5)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word SubGoal_71 = (MR_Word) ((MR_Word) (GoalExpr_5));
            MR_Word next_value_of_HeadVar__2_2 = SubGoal_71;

            // direct tailcall eliminated
            ;
            HeadVar__2_2 = next_value_of_HeadVar__2_2;
            continue;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Uni_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr_5, (MR_Integer) 3))));

            switch (MR_tag((MR_Word) Uni_15)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
              case (MR_Integer) 1:
              case (MR_Integer) 2:
                CanThrow_7 = (MR_Integer) 0;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Uni_15, (MR_Integer) 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    CanThrow_7 = (MR_Integer) 0;
                    break;
                  case (MR_Integer) 1:
                    CanThrow_7 = (MR_Integer) 1;
                    break;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word PredId_37 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr_5, (MR_Integer) 0))));
            MR_Integer ProcId_38 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), GoalExpr_5, (MR_Integer) 1))));
            MR_Word ModuleInfo_43;
            MR_Word ProcInfo_45;
            MR_Word MaybeExceptionInfo_46;
            MR_Word ExceptionInfo_47;
            MR_Word Var_93;
            MR_Word _PredInfo_44;

            succeeded = (MaybeModuleInfo_4 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              ModuleInfo_43 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeModuleInfo_4, (MR_Integer) 0))));
              hlds__hlds_module__module_info_pred_proc_info_5_p_0(ModuleInfo_43, PredId_37, ProcId_38, &_PredInfo_44, &ProcInfo_45);
              hlds__hlds_pred__proc_info_get_exception_info_2_p_0(ProcInfo_45, &MaybeExceptionInfo_46);
              succeeded = (MaybeExceptionInfo_46 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                ExceptionInfo_47 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeExceptionInfo_46, (MR_Integer) 0))));
                Var_93 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ExceptionInfo_47, (MR_Integer) 0))));
                succeeded = (Var_93 == (MR_Word) ((MR_Unsigned) 0U));
              }
            }
            if (succeeded)
              CanThrow_7 = (MR_Integer) 0;
            else
              CanThrow_7 = (MR_Integer) 1;
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), GoalExpr_5, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              CanThrow_7 = (MR_Integer) 1;
              break;
            case (MR_Integer) 1:
              {
                MR_Word Attributes_49 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_5, (MR_Integer) 1))));
                MR_Word ExceptionStatus_56;

                ExceptionStatus_56 = parse_tree__prog_data_foreign__get_may_throw_exception_1_f_0(Attributes_49);
                switch (ExceptionStatus_56) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 1:
                    {
                      MR_Word Var_92;

                      Var_92 = parse_tree__prog_data_foreign__get_may_call_mercury_1_f_0(Attributes_49);
                      succeeded = (Var_92 == (MR_Integer) 1);
                    }
                    break;
                  case (MR_Integer) 0:
                    succeeded = MR_TRUE;
                    break;
                }
                if (succeeded)
                  CanThrow_7 = (MR_Integer) 0;
                else
                  CanThrow_7 = (MR_Integer) 1;
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word Goals_63 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_5, (MR_Integer) 2))));

                CanThrow_7 = hlds__goal_form__goal_list_can_throw_2_f_0(MaybeModuleInfo_4, Goals_63);
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word Goals_95 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_5, (MR_Integer) 1))));

                CanThrow_7 = hlds__goal_form__goal_list_can_throw_2_f_0(MaybeModuleInfo_4, Goals_95);
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Word Cases_66 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_5, (MR_Integer) 3))));

                CanThrow_7 = hlds__goal_form__case_list_can_throw_2_f_0(MaybeModuleInfo_4, Cases_66);
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word Reason_72 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_5, (MR_Integer) 1))));
                MR_Word SubGoal_94 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_5, (MR_Integer) 2))));
                MR_Word FGT_74;

                succeeded = ((((MR_tag((MR_Word) Reason_72)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Reason_72, (MR_Integer) 0)))) == (MR_Integer) 6)));
                if (succeeded)
                {
                  FGT_74 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Reason_72, (MR_Integer) 2))) & (MR_Integer) 3);
                  switch (FGT_74) {
                    default:
                      succeeded = MR_FALSE;
                      break;
                    case (MR_Integer) 1:
                      succeeded = MR_TRUE;
                      break;
                    case (MR_Integer) 2:
                      succeeded = MR_TRUE;
                      break;
                  }
                }
                if (succeeded)
                  CanThrow_7 = (MR_Integer) 0;
                else
                {
                  MR_Word next_value_of_HeadVar__2_2 = SubGoal_94;

                  // direct tailcall eliminated
                  ;
                  HeadVar__2_2 = next_value_of_HeadVar__2_2;
                  continue;
                }
              }
              break;
            case (MR_Integer) 6:
              {
                MR_Word Cond_68 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_5, (MR_Integer) 2))));
                MR_Word Then_69 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_5, (MR_Integer) 3))));
                MR_Word Else_70 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_5, (MR_Integer) 4))));
                MR_Word Var_90;

                Var_90 = hlds__goal_form__goal_can_throw_func_2_f_0(MaybeModuleInfo_4, Cond_68);
                succeeded = (Var_90 == (MR_Integer) 1);
                if (succeeded)
                  CanThrow_7 = (MR_Integer) 1;
                else
                {
                  MR_Word Var_91;

                  Var_91 = hlds__goal_form__goal_can_throw_func_2_f_0(MaybeModuleInfo_4, Then_69);
                  succeeded = (Var_91 == (MR_Integer) 1);
                  if (succeeded)
                    CanThrow_7 = (MR_Integer) 1;
                  else
                  {
                    MR_Word next_value_of_HeadVar__2_2 = Else_70;

                    // direct tailcall eliminated
                    ;
                    HeadVar__2_2 = next_value_of_HeadVar__2_2;
                    continue;
                  }
                }
              }
              break;
            case (MR_Integer) 7:
              {
                MR_Word ShortHand_75 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_5, (MR_Integer) 1))));

                switch (MR_tag((MR_Word) ShortHand_75)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    mercury__require__unexpected_2_p_0((MR_String) "function \140hlds.goal_form.goal_expr_can_throw\'/2", (MR_String) "bi_implication");
                    break;
                  case (MR_Integer) 1:
                    CanThrow_7 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 2:
                    CanThrow_7 = (MR_Integer) 1;
                    break;
                }
              }
              break;
          }
          break;
      }
    return CanThrow_7;
    break;
  }
}

static MR_Word MR_CALL 
hlds__goal_form__case_list_can_throw_2_f_0(
  MR_Word MaybeModuleInfo_1,
  MR_Word HeadVar__2_2)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word HeadVar__3_3;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      HeadVar__3_3 = (MR_Integer) 0;
    else
    {
      MR_Word Goal_8;
      MR_Word Cases_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Var_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Var_11;

      Goal_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_10, (MR_Integer) 2))));
      Var_11 = hlds__goal_form__goal_can_throw_func_2_f_0(MaybeModuleInfo_1, Goal_8);
      succeeded = (Var_11 == (MR_Integer) 1);
      if (succeeded)
        HeadVar__3_3 = (MR_Integer) 1;
      else
      {
        MR_Word next_value_of_HeadVar__2_2 = Cases_9;

        // direct tailcall eliminated
        ;
        HeadVar__2_2 = next_value_of_HeadVar__2_2;
        continue;
      }
    }
    return HeadVar__3_3;
    break;
  }
}

static MR_Word MR_CALL 
hlds__goal_form__goal_list_can_throw_2_f_0(
  MR_Word MaybeModuleInfo_1,
  MR_Word HeadVar__2_2)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word HeadVar__3_3;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      HeadVar__3_3 = (MR_Integer) 0;
    else
    {
      MR_Word Goal_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Goals_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Var_8;

      Var_8 = hlds__goal_form__goal_can_throw_func_2_f_0(MaybeModuleInfo_1, Goal_6);
      succeeded = (Var_8 == (MR_Integer) 1);
      if (succeeded)
        HeadVar__3_3 = (MR_Integer) 1;
      else
      {
        MR_Word next_value_of_HeadVar__2_2 = Goals_7;

        // direct tailcall eliminated
        ;
        HeadVar__2_2 = next_value_of_HeadVar__2_2;
        continue;
      }
    }
    return HeadVar__3_3;
    break;
  }
}

MR_bool MR_CALL 
hlds__goal_form__goal_can_loop_2_p_0(
  MR_Word ModuleInfo_3,
  MR_Word Goal_4)
{
  {
    MR_bool succeeded;
    MR_Word Var_5;
    MR_Word Var_6;

    {
      Var_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_6, 0) = ((MR_Box) (ModuleInfo_3));
    }
    Var_5 = hlds__goal_form__goal_can_loop_func_2_f_0(Var_6, Goal_4);
    succeeded = (Var_5 == (MR_Integer) 1);
    return succeeded;
  }
}

MR_bool MR_CALL 
hlds__goal_form__goal_cannot_loop_2_p_0(
  MR_Word ModuleInfo_3,
  MR_Word Goal_4)
{
  {
    MR_bool succeeded;
    MR_Word Var_5;
    MR_Word Var_6;

    {
      Var_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_6, 0) = ((MR_Box) (ModuleInfo_3));
    }
    Var_5 = hlds__goal_form__goal_can_loop_func_2_f_0(Var_6, Goal_4);
    succeeded = (Var_5 == (MR_Integer) 0);
    return succeeded;
  }
}

void MR_CALL 
hlds__goal_form__goal_can_loop_or_throw_4_p_0(
  MR_Word Goal_5,
  MR_Word * Result_6,
  MR_Word STATE_VARIABLE_ModuleInfo_0_9,
  MR_Word * STATE_VARIABLE_ModuleInfo_10)
{
  {
    MR_bool succeeded;
    MR_Word Var_14;
    MR_Word Var_15;

    {
      Var_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_15, 0) = ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_9));
    }
    Var_14 = hlds__goal_form__goal_can_loop_func_2_f_0(Var_15, Goal_5);
    succeeded = (Var_14 == (MR_Integer) 0);
    if (succeeded)
    {
      MR_Word GoalExpr_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_5, (MR_Integer) 0))));
      MR_Word GoalInfo_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_5, (MR_Integer) 1))));
      MR_Word Determinism_22;

      Determinism_22 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(GoalInfo_20);
      succeeded = (Determinism_22 == (MR_Integer) 6);
      if (succeeded)
      {
        *STATE_VARIABLE_ModuleInfo_10 = STATE_VARIABLE_ModuleInfo_0_9;
        *Result_6 = (MR_Integer) 0;
      }
      else
      {
        MR_Word ThrowResult_24;

        hlds__goal_form__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_99_97_110_95_116_104_114_111_119_95_50_95_95_91_50_93_95_48_5_p_0(GoalExpr_19, &ThrowResult_24, STATE_VARIABLE_ModuleInfo_0_9, STATE_VARIABLE_ModuleInfo_10);
        switch (ThrowResult_24) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *Result_6 = (MR_Integer) 0;
            break;
          case (MR_Integer) 1:
            *Result_6 = (MR_Integer) 1;
            break;
        }
      }
    }
    else
    {
      *Result_6 = (MR_Integer) 0;
      *STATE_VARIABLE_ModuleInfo_10 = STATE_VARIABLE_ModuleInfo_0_9;
    }
  }
}

static MR_Word MR_CALL 
hlds__goal_form__goal_can_loop_func_2_f_0(
  MR_Word MaybeModuleInfo_4,
  MR_Word Goal_5)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word CanLoop_6;
    MR_Word GoalExpr_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_5, (MR_Integer) 0))));

    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) GoalExpr_7)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word SubGoal_69 = (MR_Word) ((MR_Word) (GoalExpr_7));
          MR_Word next_value_of_Goal_5 = SubGoal_69;

          // direct tailcall eliminated
          ;
          Goal_5 = next_value_of_Goal_5;
          continue;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Uni_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr_7, (MR_Integer) 3))));

          switch (MR_tag((MR_Word) Uni_12)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
            case (MR_Integer) 1:
            case (MR_Integer) 2:
              CanLoop_6 = (MR_Integer) 0;
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Uni_12, (MR_Integer) 0))))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  CanLoop_6 = (MR_Integer) 0;
                  break;
                case (MR_Integer) 1:
                  CanLoop_6 = (MR_Integer) 1;
                  break;
              }
              break;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word PredId_34 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr_7, (MR_Integer) 0))));
          MR_Integer ProcId_35 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), GoalExpr_7, (MR_Integer) 1))));
          MR_Word ModuleInfo_40;
          MR_Word ProcInfo_42;
          MR_Word Var_41;

          succeeded = (MaybeModuleInfo_4 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            ModuleInfo_40 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeModuleInfo_4, (MR_Integer) 0))));
            hlds__hlds_module__module_info_pred_proc_info_5_p_0(ModuleInfo_40, PredId_34, ProcId_35, &Var_41, &ProcInfo_42);
            {
              MR_Word MaybeTermInfo_43;
              MR_Word Var_96;

              hlds__hlds_pred__proc_info_get_maybe_termination_info_2_p_0(ProcInfo_42, &MaybeTermInfo_43);
              succeeded = (MaybeTermInfo_43 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                Var_96 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeTermInfo_43, (MR_Integer) 0))));
                succeeded = ((MR_tag((MR_Word) Var_96)) == (MR_Integer) 0);
              }
            }
            if (!(succeeded))
            {
              MR_Word Term2Info_45;
              MR_Word Var_94;
              MR_Word Var_95;

              hlds__hlds_pred__proc_info_get_termination2_info_2_p_0(ProcInfo_42, &Term2Info_45);
              Var_94 = transform_hlds__term_constr_main_types__term2_info_get_term_status_1_f_0(Term2Info_45);
              succeeded = (Var_94 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                Var_95 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_94, (MR_Integer) 0))));
                succeeded = ((MR_tag((MR_Word) Var_95)) == (MR_Integer) 0);
                if (succeeded)
                {
                }
              }
            }
          }
          if (succeeded)
            CanLoop_6 = (MR_Integer) 0;
          else
            CanLoop_6 = (MR_Integer) 1;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), GoalExpr_7, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            CanLoop_6 = (MR_Integer) 1;
            break;
          case (MR_Integer) 1:
            {
              MR_Word Attributes_52 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_7, (MR_Integer) 1))));
              MR_Word Terminates_59;

              Terminates_59 = parse_tree__prog_data_foreign__get_terminates_1_f_0(Attributes_52);
              switch (Terminates_59) {
                default:
                  succeeded = MR_FALSE;
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word Var_93;

                    Var_93 = parse_tree__prog_data_foreign__get_may_call_mercury_1_f_0(Attributes_52);
                    succeeded = (Var_93 == (MR_Integer) 1);
                  }
                  break;
                case (MR_Integer) 0:
                  succeeded = MR_TRUE;
                  break;
              }
              if (succeeded)
                CanLoop_6 = (MR_Integer) 0;
              else
                CanLoop_6 = (MR_Integer) 1;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word Var_102 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_7, (MR_Integer) 2))));
              MR_Word Var_103 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), GoalExpr_7, (MR_Integer) 1))) & (MR_Integer) 1);

              switch (Var_103) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  CanLoop_6 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 0:
                  CanLoop_6 = hlds__goal_form__goal_list_can_loop_2_f_0(MaybeModuleInfo_4, Var_102);
                  break;
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Goals_97 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_7, (MR_Integer) 1))));

              CanLoop_6 = hlds__goal_form__goal_list_can_loop_2_f_0(MaybeModuleInfo_4, Goals_97);
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Cases_64 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_7, (MR_Integer) 3))));

              CanLoop_6 = hlds__goal_form__case_list_can_loop_2_f_0(MaybeModuleInfo_4, Cases_64);
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word Reason_70 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_7, (MR_Integer) 1))));
              MR_Word SubGoal_98 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_7, (MR_Integer) 2))));
              MR_Word FGT_72;

              succeeded = ((((MR_tag((MR_Word) Reason_70)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Reason_70, (MR_Integer) 0)))) == (MR_Integer) 6)));
              if (succeeded)
              {
                FGT_72 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Reason_70, (MR_Integer) 2))) & (MR_Integer) 3);
                switch (FGT_72) {
                  default:
                    succeeded = MR_FALSE;
                    break;
                  case (MR_Integer) 1:
                    succeeded = MR_TRUE;
                    break;
                  case (MR_Integer) 2:
                    succeeded = MR_TRUE;
                    break;
                }
              }
              if (succeeded)
                CanLoop_6 = (MR_Integer) 0;
              else
              {
                MR_Word next_value_of_Goal_5 = SubGoal_98;

                // direct tailcall eliminated
                ;
                Goal_5 = next_value_of_Goal_5;
                continue;
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word Cond_66 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_7, (MR_Integer) 2))));
              MR_Word Then_67 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_7, (MR_Integer) 3))));
              MR_Word Else_68 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_7, (MR_Integer) 4))));
              MR_Word Var_89;

              Var_89 = hlds__goal_form__goal_can_loop_func_2_f_0(MaybeModuleInfo_4, Cond_66);
              succeeded = (Var_89 == (MR_Integer) 1);
              if (succeeded)
                CanLoop_6 = (MR_Integer) 1;
              else
              {
                MR_Word Var_90;

                Var_90 = hlds__goal_form__goal_can_loop_func_2_f_0(MaybeModuleInfo_4, Then_67);
                succeeded = (Var_90 == (MR_Integer) 1);
                if (succeeded)
                  CanLoop_6 = (MR_Integer) 1;
                else
                {
                  MR_Word next_value_of_Goal_5 = Else_68;

                  // direct tailcall eliminated
                  ;
                  Goal_5 = next_value_of_Goal_5;
                  continue;
                }
              }
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word ShortHand_73 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_7, (MR_Integer) 1))));

              switch (MR_tag((MR_Word) ShortHand_73)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  mercury__require__unexpected_2_p_0((MR_String) "function \140hlds.goal_form.goal_can_loop_func\'/2", (MR_String) "bi_implication");
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word MainGoal_78 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand_73, (MR_Integer) 4))));
                    MR_Word OrElseGoals_79 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand_73, (MR_Integer) 5))));
                    MR_Word MainGoalCanLoop_81;
                    MR_Word OrElseCanLoop_82;

                    MainGoalCanLoop_81 = hlds__goal_form__goal_can_loop_func_2_f_0(MaybeModuleInfo_4, MainGoal_78);
                    OrElseCanLoop_82 = hlds__goal_form__goal_list_can_loop_2_f_0(MaybeModuleInfo_4, OrElseGoals_79);
                    CanLoop_6 = mercury__bool__or_2_f_0(MainGoalCanLoop_81, OrElseCanLoop_82);
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word SubGoal_99 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ShortHand_73, (MR_Integer) 2))));
                    MR_Word next_value_of_Goal_5 = SubGoal_99;

                    // direct tailcall eliminated
                    ;
                    Goal_5 = next_value_of_Goal_5;
                    continue;
                  }
                  break;
              }
            }
            break;
        }
        break;
    }
    return CanLoop_6;
    break;
  }
}

static MR_Word MR_CALL 
hlds__goal_form__case_list_can_loop_2_f_0(
  MR_Word MaybeModuleInfo_1,
  MR_Word HeadVar__2_2)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word HeadVar__3_3;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      HeadVar__3_3 = (MR_Integer) 0;
    else
    {
      MR_Word Goal_8;
      MR_Word Cases_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Var_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Var_11;

      Goal_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_10, (MR_Integer) 2))));
      Var_11 = hlds__goal_form__goal_can_loop_func_2_f_0(MaybeModuleInfo_1, Goal_8);
      succeeded = (Var_11 == (MR_Integer) 1);
      if (succeeded)
        HeadVar__3_3 = (MR_Integer) 1;
      else
      {
        MR_Word next_value_of_HeadVar__2_2 = Cases_9;

        // direct tailcall eliminated
        ;
        HeadVar__2_2 = next_value_of_HeadVar__2_2;
        continue;
      }
    }
    return HeadVar__3_3;
    break;
  }
}

static MR_Word MR_CALL 
hlds__goal_form__goal_list_can_loop_2_f_0(
  MR_Word MaybeModuleInfo_1,
  MR_Word HeadVar__2_2)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word HeadVar__3_3;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      HeadVar__3_3 = (MR_Integer) 0;
    else
    {
      MR_Word Goal_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Goals_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Var_8;

      Var_8 = hlds__goal_form__goal_can_loop_func_2_f_0(MaybeModuleInfo_1, Goal_6);
      succeeded = (Var_8 == (MR_Integer) 1);
      if (succeeded)
        HeadVar__3_3 = (MR_Integer) 1;
      else
      {
        MR_Word next_value_of_HeadVar__2_2 = Goals_7;

        // direct tailcall eliminated
        ;
        HeadVar__2_2 = next_value_of_HeadVar__2_2;
        continue;
      }
    }
    return HeadVar__3_3;
    break;
  }
}

void MR_CALL 
hlds__goal_form__goal_can_throw_4_p_0(
  MR_Word tscc_proc_1_input_1_HeadVar__1_1,
  MR_Word * tscc_output_ptr_1_Result_7,
  MR_Word tscc_proc_1_input_2_STATE_VARIABLE_ModuleInfo_0_10,
  MR_Word * tscc_output_ptr_2_STATE_VARIABLE_ModuleInfo_11)
{
  {
    MR_Word tscc_proc_2_input_1_GoalExpr_6;
    MR_Word tscc_proc_2_input_2_STATE_VARIABLE_ModuleInfo_0_82;
    MR_Word tscc_output_1_Result_7;
    MR_Word tscc_output_2_STATE_VARIABLE_ModuleInfo_11;

    // The code for TSCC PROC 1: pred hlds.goal_form.goal_can_throw/4-0.
    ;
    // Setup for mutual tailcalls optimized into a loop.
    ;
    // The mutually recursive procedures are:
    ;
    ;
    // proc 1 in TSCC: pred hlds.goal_form.goal_can_throw/4-0
    ;
    // proc 2 in TSCC: pred hlds.goal_form.UnusedArgs__pred__goal_can_throw_2__[2]_0/5-0
    ;
    ;
    goto top_of_proc_1;
  top_of_proc_1:;
    {
      MR_Word HeadVar__1_1 = tscc_proc_1_input_1_HeadVar__1_1;
      MR_Word Result_7;
      MR_Word STATE_VARIABLE_ModuleInfo_0_10 = tscc_proc_1_input_2_STATE_VARIABLE_ModuleInfo_0_10;
      MR_Word STATE_VARIABLE_ModuleInfo_11;
      MR_bool succeeded;
      MR_Word GoalExpr_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word GoalInfo_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Determinism_9;

      Determinism_9 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(GoalInfo_6);
      succeeded = (Determinism_9 == (MR_Integer) 6);
      if (succeeded)
      {
        Result_7 = (MR_Integer) 0;
        STATE_VARIABLE_ModuleInfo_11 = STATE_VARIABLE_ModuleInfo_0_10;
      }
      else
      {
        MR_Word next_value_of_tscc_proc_2_input_1_GoalExpr_6 = GoalExpr_5;
        MR_Word next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_ModuleInfo_0_82 = STATE_VARIABLE_ModuleInfo_0_10;

        // direct tailcall eliminated
        ;
        tscc_proc_2_input_1_GoalExpr_6 = next_value_of_tscc_proc_2_input_1_GoalExpr_6;
        tscc_proc_2_input_2_STATE_VARIABLE_ModuleInfo_0_82 = next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_ModuleInfo_0_82;
        goto top_of_proc_2;
      }
      tscc_output_1_Result_7 = Result_7;
      tscc_output_2_STATE_VARIABLE_ModuleInfo_11 = STATE_VARIABLE_ModuleInfo_11;
      goto tscc_end;
    }
  top_of_proc_2:;
    {
      MR_Word GoalExpr_6 = tscc_proc_2_input_1_GoalExpr_6;
      MR_Word Result_8;
      MR_Word STATE_VARIABLE_ModuleInfo_0_82 = tscc_proc_2_input_2_STATE_VARIABLE_ModuleInfo_0_82;
      MR_Word STATE_VARIABLE_ModuleInfo_83;
      MR_bool succeeded;

      switch (MR_tag((MR_Word) GoalExpr_6)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word SubGoal_57 = (MR_Word) ((MR_Word) (GoalExpr_6));
            MR_Word next_value_of_tscc_proc_1_input_1_HeadVar__1_1 = SubGoal_57;
            MR_Word next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_ModuleInfo_0_10 = STATE_VARIABLE_ModuleInfo_0_82;

            // direct tailcall eliminated
            ;
            tscc_proc_1_input_1_HeadVar__1_1 = next_value_of_tscc_proc_1_input_1_HeadVar__1_1;
            tscc_proc_1_input_2_STATE_VARIABLE_ModuleInfo_0_10 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_ModuleInfo_0_10;
            goto top_of_proc_1;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Uni_35 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr_6, (MR_Integer) 3))));

            switch (MR_tag((MR_Word) Uni_35)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
              case (MR_Integer) 1:
              case (MR_Integer) 2:
                Result_8 = (MR_Integer) 1;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Uni_35, (MR_Integer) 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    Result_8 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 1:
                    Result_8 = (MR_Integer) 0;
                    break;
                }
                break;
            }
            STATE_VARIABLE_ModuleInfo_83 = STATE_VARIABLE_ModuleInfo_0_82;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word PredId_16 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr_6, (MR_Integer) 0))));
            MR_Integer ProcId_17 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), GoalExpr_6, (MR_Integer) 1))));
            MR_Word Status_22;
            MR_Word Var_92;

            {
              Var_92 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_92, 0) = ((MR_Box) (PredId_16));
              MR_hl_field(MR_mktag(0), Var_92, 1) = ((MR_Box) (ProcId_17));
            }
            transform_hlds__exception_analysis__lookup_exception_analysis_result_4_p_0(Var_92, &Status_22, STATE_VARIABLE_ModuleInfo_0_82, &STATE_VARIABLE_ModuleInfo_83);
            switch (MR_tag((MR_Word) Status_22)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(Status_22)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    Result_8 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 1:
                    Result_8 = (MR_Integer) 0;
                    break;
                }
                break;
              case (MR_Integer) 1:
                Result_8 = (MR_Integer) 0;
                break;
            }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), GoalExpr_6, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                Result_8 = (MR_Integer) 0;
                STATE_VARIABLE_ModuleInfo_83 = STATE_VARIABLE_ModuleInfo_0_82;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word Attributes_61 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_6, (MR_Integer) 1))));
                MR_Word ExceptionStatus_68;

                ExceptionStatus_68 = parse_tree__prog_data_foreign__get_may_throw_exception_1_f_0(Attributes_61);
                switch (ExceptionStatus_68) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 1:
                    {
                      MR_Word Var_88;

                      Var_88 = parse_tree__prog_data_foreign__get_may_call_mercury_1_f_0(Attributes_61);
                      succeeded = (Var_88 == (MR_Integer) 1);
                    }
                    break;
                  case (MR_Integer) 0:
                    succeeded = MR_TRUE;
                    break;
                }
                if (succeeded)
                  Result_8 = (MR_Integer) 1;
                else
                  Result_8 = (MR_Integer) 0;
                STATE_VARIABLE_ModuleInfo_83 = STATE_VARIABLE_ModuleInfo_0_82;
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word Goals_11 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_6, (MR_Integer) 2))));

                hlds__goal_form__goals_can_throw_4_p_0(Goals_11, &Result_8, STATE_VARIABLE_ModuleInfo_0_82, &STATE_VARIABLE_ModuleInfo_83);
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word Goals_99 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_6, (MR_Integer) 1))));

                hlds__goal_form__goals_can_throw_4_p_0(Goals_99, &Result_8, STATE_VARIABLE_ModuleInfo_0_82, &STATE_VARIABLE_ModuleInfo_83);
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Word Cases_31 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_6, (MR_Integer) 3))));

                hlds__goal_form__cases_can_throw_4_p_0(Cases_31, &Result_8, STATE_VARIABLE_ModuleInfo_0_82, &STATE_VARIABLE_ModuleInfo_83);
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word Reason_58 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_6, (MR_Integer) 1))));
                MR_Word SubGoal_98 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_6, (MR_Integer) 2))));
                MR_Word FGT_60;

                succeeded = ((((MR_tag((MR_Word) Reason_58)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Reason_58, (MR_Integer) 0)))) == (MR_Integer) 6)));
                if (succeeded)
                {
                  FGT_60 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Reason_58, (MR_Integer) 2))) & (MR_Integer) 3);
                  switch (FGT_60) {
                    default:
                      succeeded = MR_FALSE;
                      break;
                    case (MR_Integer) 1:
                      succeeded = MR_TRUE;
                      break;
                    case (MR_Integer) 2:
                      succeeded = MR_TRUE;
                      break;
                  }
                }
                if (succeeded)
                {
                  Result_8 = (MR_Integer) 1;
                  STATE_VARIABLE_ModuleInfo_83 = STATE_VARIABLE_ModuleInfo_0_82;
                }
                else
                {
                  MR_Word next_value_of_tscc_proc_1_input_1_HeadVar__1_1 = SubGoal_98;
                  MR_Word next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_ModuleInfo_0_10 = STATE_VARIABLE_ModuleInfo_0_82;

                  // direct tailcall eliminated
                  ;
                  tscc_proc_1_input_1_HeadVar__1_1 = next_value_of_tscc_proc_1_input_1_HeadVar__1_1;
                  tscc_proc_1_input_2_STATE_VARIABLE_ModuleInfo_0_10 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_ModuleInfo_0_10;
                  goto top_of_proc_1;
                }
              }
              break;
            case (MR_Integer) 6:
              {
                MR_Word CondGoal_13 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_6, (MR_Integer) 2))));
                MR_Word ThenGoal_14 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_6, (MR_Integer) 3))));
                MR_Word ElseGoal_15 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_6, (MR_Integer) 4))));
                MR_Word Var_94;
                MR_Word Var_95;
                MR_Word Goals_100;

                {
                  Var_95 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_95, 0) = ((MR_Box) (ElseGoal_15));
                  MR_hl_field(MR_mktag(1), Var_95, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  Var_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_94, 0) = ((MR_Box) (ThenGoal_14));
                  MR_hl_field(MR_mktag(1), Var_94, 1) = ((MR_Box) (Var_95));
                }
                {
                  Goals_100 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Goals_100, 0) = ((MR_Box) (CondGoal_13));
                  MR_hl_field(MR_mktag(1), Goals_100, 1) = ((MR_Box) (Var_94));
                }
                hlds__goal_form__goals_can_throw_4_p_0(Goals_100, &Result_8, STATE_VARIABLE_ModuleInfo_0_82, &STATE_VARIABLE_ModuleInfo_83);
              }
              break;
            case (MR_Integer) 7:
              {
                MR_Word ShortHand_69 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_6, (MR_Integer) 1))));

                switch (MR_tag((MR_Word) ShortHand_69)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      MR_Word GoalA_70 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ShortHand_69, (MR_Integer) 0))));
                      MR_Word GoalB_71 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ShortHand_69, (MR_Integer) 1))));
                      MR_Word Var_84;
                      MR_Word Var_86;

                      {
                        Var_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), Var_86, 0) = ((MR_Box) (GoalB_71));
                        MR_hl_field(MR_mktag(1), Var_86, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                      }
                      {
                        Var_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), Var_84, 0) = ((MR_Box) (GoalA_70));
                        MR_hl_field(MR_mktag(1), Var_84, 1) = ((MR_Box) (Var_86));
                      }
                      hlds__goal_form__goals_can_throw_4_p_0(Var_84, &Result_8, STATE_VARIABLE_ModuleInfo_0_82, &STATE_VARIABLE_ModuleInfo_83);
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      Result_8 = (MR_Integer) 0;
                      STATE_VARIABLE_ModuleInfo_83 = STATE_VARIABLE_ModuleInfo_0_82;
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      Result_8 = (MR_Integer) 0;
                      STATE_VARIABLE_ModuleInfo_83 = STATE_VARIABLE_ModuleInfo_0_82;
                    }
                    break;
                }
              }
              break;
          }
          break;
      }
      tscc_output_1_Result_7 = Result_8;
      tscc_output_2_STATE_VARIABLE_ModuleInfo_11 = STATE_VARIABLE_ModuleInfo_83;
      goto tscc_end;
    }
  tscc_end:;
    *tscc_output_ptr_1_Result_7 = tscc_output_1_Result_7;
    *tscc_output_ptr_2_STATE_VARIABLE_ModuleInfo_11 = tscc_output_2_STATE_VARIABLE_ModuleInfo_11;
    return;
  }
}

static void MR_CALL 
hlds__goal_form__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_99_97_110_95_116_104_114_111_119_95_50_95_95_91_50_93_95_48_5_p_0(
  MR_Word tscc_proc_2_input_1_GoalExpr_6,
  MR_Word * tscc_output_ptr_1_Result_7,
  MR_Word tscc_proc_2_input_2_STATE_VARIABLE_ModuleInfo_0_82,
  MR_Word * tscc_output_ptr_2_STATE_VARIABLE_ModuleInfo_11)
{
  {
    MR_Word tscc_proc_1_input_1_HeadVar__1_1;
    MR_Word tscc_proc_1_input_2_STATE_VARIABLE_ModuleInfo_0_10;
    MR_Word tscc_output_1_Result_7;
    MR_Word tscc_output_2_STATE_VARIABLE_ModuleInfo_11;

    // The code for TSCC PROC 2: pred hlds.goal_form.UnusedArgs__pred__goal_can_throw_2__[2]_0/5-0.
    ;
    // Setup for mutual tailcalls optimized into a loop.
    ;
    // The mutually recursive procedures are:
    ;
    ;
    // proc 1 in TSCC: pred hlds.goal_form.goal_can_throw/4-0
    ;
    // proc 2 in TSCC: pred hlds.goal_form.UnusedArgs__pred__goal_can_throw_2__[2]_0/5-0
    ;
    ;
    goto top_of_proc_2;
  top_of_proc_1:;
    {
      MR_Word HeadVar__1_1 = tscc_proc_1_input_1_HeadVar__1_1;
      MR_Word Result_7;
      MR_Word STATE_VARIABLE_ModuleInfo_0_10 = tscc_proc_1_input_2_STATE_VARIABLE_ModuleInfo_0_10;
      MR_Word STATE_VARIABLE_ModuleInfo_11;
      MR_bool succeeded;
      MR_Word GoalExpr_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word GoalInfo_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Determinism_9;

      Determinism_9 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(GoalInfo_6);
      succeeded = (Determinism_9 == (MR_Integer) 6);
      if (succeeded)
      {
        Result_7 = (MR_Integer) 0;
        STATE_VARIABLE_ModuleInfo_11 = STATE_VARIABLE_ModuleInfo_0_10;
      }
      else
      {
        MR_Word next_value_of_tscc_proc_2_input_1_GoalExpr_6 = GoalExpr_5;
        MR_Word next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_ModuleInfo_0_82 = STATE_VARIABLE_ModuleInfo_0_10;

        // direct tailcall eliminated
        ;
        tscc_proc_2_input_1_GoalExpr_6 = next_value_of_tscc_proc_2_input_1_GoalExpr_6;
        tscc_proc_2_input_2_STATE_VARIABLE_ModuleInfo_0_82 = next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_ModuleInfo_0_82;
        goto top_of_proc_2;
      }
      tscc_output_1_Result_7 = Result_7;
      tscc_output_2_STATE_VARIABLE_ModuleInfo_11 = STATE_VARIABLE_ModuleInfo_11;
      goto tscc_end;
    }
  top_of_proc_2:;
    {
      MR_Word GoalExpr_6 = tscc_proc_2_input_1_GoalExpr_6;
      MR_Word Result_8;
      MR_Word STATE_VARIABLE_ModuleInfo_0_82 = tscc_proc_2_input_2_STATE_VARIABLE_ModuleInfo_0_82;
      MR_Word STATE_VARIABLE_ModuleInfo_83;
      MR_bool succeeded;

      switch (MR_tag((MR_Word) GoalExpr_6)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word SubGoal_57 = (MR_Word) ((MR_Word) (GoalExpr_6));
            MR_Word next_value_of_tscc_proc_1_input_1_HeadVar__1_1 = SubGoal_57;
            MR_Word next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_ModuleInfo_0_10 = STATE_VARIABLE_ModuleInfo_0_82;

            // direct tailcall eliminated
            ;
            tscc_proc_1_input_1_HeadVar__1_1 = next_value_of_tscc_proc_1_input_1_HeadVar__1_1;
            tscc_proc_1_input_2_STATE_VARIABLE_ModuleInfo_0_10 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_ModuleInfo_0_10;
            goto top_of_proc_1;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Uni_35 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr_6, (MR_Integer) 3))));

            switch (MR_tag((MR_Word) Uni_35)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
              case (MR_Integer) 1:
              case (MR_Integer) 2:
                Result_8 = (MR_Integer) 1;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Uni_35, (MR_Integer) 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    Result_8 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 1:
                    Result_8 = (MR_Integer) 0;
                    break;
                }
                break;
            }
            STATE_VARIABLE_ModuleInfo_83 = STATE_VARIABLE_ModuleInfo_0_82;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word PredId_16 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr_6, (MR_Integer) 0))));
            MR_Integer ProcId_17 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), GoalExpr_6, (MR_Integer) 1))));
            MR_Word Status_22;
            MR_Word Var_92;

            {
              Var_92 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_92, 0) = ((MR_Box) (PredId_16));
              MR_hl_field(MR_mktag(0), Var_92, 1) = ((MR_Box) (ProcId_17));
            }
            transform_hlds__exception_analysis__lookup_exception_analysis_result_4_p_0(Var_92, &Status_22, STATE_VARIABLE_ModuleInfo_0_82, &STATE_VARIABLE_ModuleInfo_83);
            switch (MR_tag((MR_Word) Status_22)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(Status_22)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    Result_8 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 1:
                    Result_8 = (MR_Integer) 0;
                    break;
                }
                break;
              case (MR_Integer) 1:
                Result_8 = (MR_Integer) 0;
                break;
            }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), GoalExpr_6, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                Result_8 = (MR_Integer) 0;
                STATE_VARIABLE_ModuleInfo_83 = STATE_VARIABLE_ModuleInfo_0_82;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word Attributes_61 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_6, (MR_Integer) 1))));
                MR_Word ExceptionStatus_68;

                ExceptionStatus_68 = parse_tree__prog_data_foreign__get_may_throw_exception_1_f_0(Attributes_61);
                switch (ExceptionStatus_68) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 1:
                    {
                      MR_Word Var_88;

                      Var_88 = parse_tree__prog_data_foreign__get_may_call_mercury_1_f_0(Attributes_61);
                      succeeded = (Var_88 == (MR_Integer) 1);
                    }
                    break;
                  case (MR_Integer) 0:
                    succeeded = MR_TRUE;
                    break;
                }
                if (succeeded)
                  Result_8 = (MR_Integer) 1;
                else
                  Result_8 = (MR_Integer) 0;
                STATE_VARIABLE_ModuleInfo_83 = STATE_VARIABLE_ModuleInfo_0_82;
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word Goals_11 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_6, (MR_Integer) 2))));

                hlds__goal_form__goals_can_throw_4_p_0(Goals_11, &Result_8, STATE_VARIABLE_ModuleInfo_0_82, &STATE_VARIABLE_ModuleInfo_83);
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word Goals_99 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_6, (MR_Integer) 1))));

                hlds__goal_form__goals_can_throw_4_p_0(Goals_99, &Result_8, STATE_VARIABLE_ModuleInfo_0_82, &STATE_VARIABLE_ModuleInfo_83);
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Word Cases_31 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_6, (MR_Integer) 3))));

                hlds__goal_form__cases_can_throw_4_p_0(Cases_31, &Result_8, STATE_VARIABLE_ModuleInfo_0_82, &STATE_VARIABLE_ModuleInfo_83);
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word Reason_58 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_6, (MR_Integer) 1))));
                MR_Word SubGoal_98 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_6, (MR_Integer) 2))));
                MR_Word FGT_60;

                succeeded = ((((MR_tag((MR_Word) Reason_58)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Reason_58, (MR_Integer) 0)))) == (MR_Integer) 6)));
                if (succeeded)
                {
                  FGT_60 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Reason_58, (MR_Integer) 2))) & (MR_Integer) 3);
                  switch (FGT_60) {
                    default:
                      succeeded = MR_FALSE;
                      break;
                    case (MR_Integer) 1:
                      succeeded = MR_TRUE;
                      break;
                    case (MR_Integer) 2:
                      succeeded = MR_TRUE;
                      break;
                  }
                }
                if (succeeded)
                {
                  Result_8 = (MR_Integer) 1;
                  STATE_VARIABLE_ModuleInfo_83 = STATE_VARIABLE_ModuleInfo_0_82;
                }
                else
                {
                  MR_Word next_value_of_tscc_proc_1_input_1_HeadVar__1_1 = SubGoal_98;
                  MR_Word next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_ModuleInfo_0_10 = STATE_VARIABLE_ModuleInfo_0_82;

                  // direct tailcall eliminated
                  ;
                  tscc_proc_1_input_1_HeadVar__1_1 = next_value_of_tscc_proc_1_input_1_HeadVar__1_1;
                  tscc_proc_1_input_2_STATE_VARIABLE_ModuleInfo_0_10 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_ModuleInfo_0_10;
                  goto top_of_proc_1;
                }
              }
              break;
            case (MR_Integer) 6:
              {
                MR_Word CondGoal_13 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_6, (MR_Integer) 2))));
                MR_Word ThenGoal_14 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_6, (MR_Integer) 3))));
                MR_Word ElseGoal_15 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_6, (MR_Integer) 4))));
                MR_Word Var_94;
                MR_Word Var_95;
                MR_Word Goals_100;

                {
                  Var_95 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_95, 0) = ((MR_Box) (ElseGoal_15));
                  MR_hl_field(MR_mktag(1), Var_95, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  Var_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_94, 0) = ((MR_Box) (ThenGoal_14));
                  MR_hl_field(MR_mktag(1), Var_94, 1) = ((MR_Box) (Var_95));
                }
                {
                  Goals_100 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Goals_100, 0) = ((MR_Box) (CondGoal_13));
                  MR_hl_field(MR_mktag(1), Goals_100, 1) = ((MR_Box) (Var_94));
                }
                hlds__goal_form__goals_can_throw_4_p_0(Goals_100, &Result_8, STATE_VARIABLE_ModuleInfo_0_82, &STATE_VARIABLE_ModuleInfo_83);
              }
              break;
            case (MR_Integer) 7:
              {
                MR_Word ShortHand_69 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_6, (MR_Integer) 1))));

                switch (MR_tag((MR_Word) ShortHand_69)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      MR_Word GoalA_70 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ShortHand_69, (MR_Integer) 0))));
                      MR_Word GoalB_71 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ShortHand_69, (MR_Integer) 1))));
                      MR_Word Var_84;
                      MR_Word Var_86;

                      {
                        Var_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), Var_86, 0) = ((MR_Box) (GoalB_71));
                        MR_hl_field(MR_mktag(1), Var_86, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                      }
                      {
                        Var_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), Var_84, 0) = ((MR_Box) (GoalA_70));
                        MR_hl_field(MR_mktag(1), Var_84, 1) = ((MR_Box) (Var_86));
                      }
                      hlds__goal_form__goals_can_throw_4_p_0(Var_84, &Result_8, STATE_VARIABLE_ModuleInfo_0_82, &STATE_VARIABLE_ModuleInfo_83);
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      Result_8 = (MR_Integer) 0;
                      STATE_VARIABLE_ModuleInfo_83 = STATE_VARIABLE_ModuleInfo_0_82;
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      Result_8 = (MR_Integer) 0;
                      STATE_VARIABLE_ModuleInfo_83 = STATE_VARIABLE_ModuleInfo_0_82;
                    }
                    break;
                }
              }
              break;
          }
          break;
      }
      tscc_output_1_Result_7 = Result_8;
      tscc_output_2_STATE_VARIABLE_ModuleInfo_11 = STATE_VARIABLE_ModuleInfo_83;
      goto tscc_end;
    }
  tscc_end:;
    *tscc_output_ptr_1_Result_7 = tscc_output_1_Result_7;
    *tscc_output_ptr_2_STATE_VARIABLE_ModuleInfo_11 = tscc_output_2_STATE_VARIABLE_ModuleInfo_11;
    return;
  }
}

static void MR_CALL 
hlds__goal_form__cases_can_throw_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_ModuleInfo_0_3,
  MR_Word * STATE_VARIABLE_ModuleInfo_4)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__2_2 = (MR_Integer) 1;
      *STATE_VARIABLE_ModuleInfo_4 = STATE_VARIABLE_ModuleInfo_0_3;
    }
    else
    {
      MR_Word Case_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Cases_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Goal_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case_8, (MR_Integer) 2))));
      MR_Word GoalExpr_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_14, (MR_Integer) 0))));
      MR_Word GoalInfo_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_14, (MR_Integer) 1))));
      MR_Word Determinism_26;

      Determinism_26 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(GoalInfo_24);
      succeeded = (Determinism_26 == (MR_Integer) 6);
      if (succeeded)
      {
        *HeadVar__2_2 = (MR_Integer) 0;
        *STATE_VARIABLE_ModuleInfo_4 = STATE_VARIABLE_ModuleInfo_0_3;
      }
      else
      {
        MR_Word Result0_28;
        MR_Word STATE_VARIABLE_ModuleInfo_18_29;

        hlds__goal_form__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_99_97_110_95_116_104_114_111_119_95_50_95_95_91_50_93_95_48_5_p_0(GoalExpr_23, &Result0_28, STATE_VARIABLE_ModuleInfo_0_3, &STATE_VARIABLE_ModuleInfo_18_29);
        switch (Result0_28) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              *HeadVar__2_2 = (MR_Integer) 0;
              *STATE_VARIABLE_ModuleInfo_4 = STATE_VARIABLE_ModuleInfo_18_29;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word next_value_of_HeadVar__1_1 = Cases_9;
              MR_Word next_value_of_STATE_VARIABLE_ModuleInfo_0_3 = STATE_VARIABLE_ModuleInfo_18_29;

              // direct tailcall eliminated
              ;
              HeadVar__1_1 = next_value_of_HeadVar__1_1;
              STATE_VARIABLE_ModuleInfo_0_3 = next_value_of_STATE_VARIABLE_ModuleInfo_0_3;
              continue;
            }
            break;
        }
      }
    }
    break;
  }
}

static void MR_CALL 
hlds__goal_form__goals_can_throw_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_ModuleInfo_0_3,
  MR_Word * STATE_VARIABLE_ModuleInfo_4)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__2_2 = (MR_Integer) 1;
      *STATE_VARIABLE_ModuleInfo_4 = STATE_VARIABLE_ModuleInfo_0_3;
    }
    else
    {
      MR_Word Goal_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Goals_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word GoalExpr_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_8, (MR_Integer) 0))));
      MR_Word GoalInfo_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_8, (MR_Integer) 1))));
      MR_Word Determinism_23;

      Determinism_23 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(GoalInfo_21);
      succeeded = (Determinism_23 == (MR_Integer) 6);
      if (succeeded)
      {
        *HeadVar__2_2 = (MR_Integer) 0;
        *STATE_VARIABLE_ModuleInfo_4 = STATE_VARIABLE_ModuleInfo_0_3;
      }
      else
      {
        MR_Word Result0_25;
        MR_Word STATE_VARIABLE_ModuleInfo_15_26;

        hlds__goal_form__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_99_97_110_95_116_104_114_111_119_95_50_95_95_91_50_93_95_48_5_p_0(GoalExpr_20, &Result0_25, STATE_VARIABLE_ModuleInfo_0_3, &STATE_VARIABLE_ModuleInfo_15_26);
        switch (Result0_25) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              *HeadVar__2_2 = (MR_Integer) 0;
              *STATE_VARIABLE_ModuleInfo_4 = STATE_VARIABLE_ModuleInfo_15_26;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word next_value_of_HeadVar__1_1 = Goals_9;
              MR_Word next_value_of_STATE_VARIABLE_ModuleInfo_0_3 = STATE_VARIABLE_ModuleInfo_15_26;

              // direct tailcall eliminated
              ;
              HeadVar__1_1 = next_value_of_HeadVar__1_1;
              STATE_VARIABLE_ModuleInfo_0_3 = next_value_of_STATE_VARIABLE_ModuleInfo_0_3;
              continue;
            }
            break;
        }
      }
    }
    break;
  }
}

MR_bool MR_CALL 
hlds__goal_form__all_disjuncts_are_conj_of_unify_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      succeeded = MR_TRUE;
    else
    {
      MR_Word TypeCtorInfo_10_14;
      MR_Word Disjunct_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Disjuncts_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word GoalInfo_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Disjunct_5, (MR_Integer) 1))));
      MR_Word CodeModel_11;
      MR_Word Conj_12;
      MR_Word ToAssignVars_13;
      MR_Word next_value_of_HeadVar__2_2;

      CodeModel_11 = hlds__code_model__goal_info_get_code_model_1_f_0(GoalInfo_10);
      succeeded = (CodeModel_11 == (MR_Integer) 0);
      if (succeeded)
      {
        hlds__hlds_goal__goal_to_conj_list_2_p_0(Disjunct_5, &Conj_12);
        succeeded = hlds__goal_form__only_constant_goals_3_p_0(Conj_12, HeadVar__1_1, &ToAssignVars_13);
        if (succeeded)
        {
          TypeCtorInfo_10_14 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
          succeeded = parse_tree__set_of_var__is_empty_1_p_0(TypeCtorInfo_10_14, ToAssignVars_13);
          if (succeeded)
          {
            // direct tailcall eliminated
            ;
            next_value_of_HeadVar__2_2 = Disjuncts_6;
            HeadVar__2_2 = next_value_of_HeadVar__2_2;
            continue;
          }
        }
      }
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
hlds__goal_form__goal_is_conj_of_unify_2_p_0(
  MR_Word ToAssignVars0_3,
  MR_Word Goal_4)
{
  {
    MR_bool succeeded;
    MR_Word TypeCtorInfo_10_10;
    MR_Word GoalInfo_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_4, (MR_Integer) 1))));
    MR_Word CodeModel_7;
    MR_Word Conj_8;
    MR_Word ToAssignVars_9;

    CodeModel_7 = hlds__code_model__goal_info_get_code_model_1_f_0(GoalInfo_6);
    succeeded = (CodeModel_7 == (MR_Integer) 0);
    if (succeeded)
    {
      hlds__hlds_goal__goal_to_conj_list_2_p_0(Goal_4, &Conj_8);
      succeeded = hlds__goal_form__only_constant_goals_3_p_0(Conj_8, ToAssignVars0_3, &ToAssignVars_9);
      if (succeeded)
      {
        TypeCtorInfo_10_10 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
        succeeded = parse_tree__set_of_var__is_empty_1_p_0(TypeCtorInfo_10_10, ToAssignVars_9);
      }
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
hlds__goal_form__only_constant_goals_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_ToAssignVars_0_2,
  MR_Word * STATE_VARIABLE_ToAssignVars_3)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_ToAssignVars_3 = STATE_VARIABLE_ToAssignVars_0_2;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Word TypeCtorInfo_31_31;
      MR_Word Goal_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Goals_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word GoalExpr_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_7, (MR_Integer) 0))));
      MR_Word Var_17;
      MR_Word STATE_VARIABLE_ToAssignVars_29_29;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_ToAssignVars_0_2;

      if (((MR_tag((MR_Word) GoalExpr_10)) == (MR_Integer) 1))
      {
        MR_Word Unification_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr_10, (MR_Integer) 3))));

        succeeded = ((MR_tag((MR_Word) Unification_15)) == (MR_Integer) 0);
        if (succeeded)
          Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Unification_15, (MR_Integer) 0))));
      }
      else
      if (((((MR_tag((MR_Word) GoalExpr_10)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 0)))) == (MR_Integer) 5))))
      {
        MR_Word Reason_24 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 1))));
        MR_Word Var_28;

        succeeded = ((((MR_tag((MR_Word) Reason_24)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Reason_24, (MR_Integer) 0)))) == (MR_Integer) 6)));
        if (succeeded)
        {
          Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Reason_24, (MR_Integer) 1))));
          Var_28 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Reason_24, (MR_Integer) 2))) & (MR_Integer) 3);
          succeeded = (Var_28 == (MR_Integer) 1);
        }
      }
      else
        succeeded = MR_FALSE;
      if (succeeded)
      {
        TypeCtorInfo_31_31 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
        parse_tree__set_of_var__delete_3_p_0(TypeCtorInfo_31_31, Var_17, STATE_VARIABLE_ToAssignVars_0_2, &STATE_VARIABLE_ToAssignVars_29_29);
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__1_1 = Goals_8;
        next_value_of_STATE_VARIABLE_ToAssignVars_0_2 = STATE_VARIABLE_ToAssignVars_29_29;
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        STATE_VARIABLE_ToAssignVars_0_2 = next_value_of_STATE_VARIABLE_ToAssignVars_0_2;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

static MR_bool MR_CALL 
hlds__goal_form____Unify____goal_loop_or_throw_status_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = hlds__goal_form____Unify____goal_loop_or_throw_status_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
hlds__goal_form____Compare____goal_loop_or_throw_status_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    hlds__goal_form____Compare____goal_loop_or_throw_status_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__goal_form____Unify____goal_loop_status_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = hlds__goal_form____Unify____goal_loop_status_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
hlds__goal_form____Compare____goal_loop_status_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    hlds__goal_form____Compare____goal_loop_status_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__goal_form____Unify____goal_throw_status_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = hlds__goal_form____Unify____goal_throw_status_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
hlds__goal_form____Compare____goal_throw_status_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    hlds__goal_form____Compare____goal_throw_status_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__goal_form____Unify____has_subgoals_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = hlds__goal_form____Unify____has_subgoals_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
hlds__goal_form____Compare____has_subgoals_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    hlds__goal_form____Compare____has_subgoals_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__goal_form____Unify____is_termvar_needed_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = hlds__goal_form____Unify____is_termvar_needed_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
hlds__goal_form____Compare____is_termvar_needed_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    hlds__goal_form____Compare____is_termvar_needed_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
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
	MR_register_type_ctor_info(&hlds__goal_form__hlds__goal_form__type_ctor_info_is_termvar_needed_0);
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

// :- end_module hlds.goal_form.
