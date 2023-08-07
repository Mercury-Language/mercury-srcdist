/*
** Automatically generated from `goal_form.m'
** by the Mercury compiler,
** version rotd-2023-08-07
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
#include "array.mih"
#include "assoc_list.mih"
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
#include "one_or_more.mih"
#include "one_or_more_map.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "queue.mih"
#include "recompilation.mih"
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
#include "term_context.mih"
#include "time.mih"
#include "transform_hlds.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "check_hlds.mode_constraint_robdd.mih"
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
#include "hlds.pred_name.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "libs.compiler_util.mih"
#include "libs.dependency_graph.mih"
#include "libs.globals.mih"
#include "libs.lp_rational.mih"
#include "libs.polyhedron.mih"
#include "libs.rat.mih"
#include "libs.timestamp.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_table.mih"
#include "parse_tree.vartypes.mih"
#include "transform_hlds.exception_analysis.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"




static const MR_EnumFunctorDesc hlds__goal_form__hlds__goal_form__enum_functor_desc_goal_loop_or_throw_status_0_0;

static const MR_EnumFunctorDesc hlds__goal_form__hlds__goal_form__enum_functor_desc_goal_loop_or_throw_status_0_1;

static const MR_EnumFunctorDescPtr hlds__goal_form__hlds__goal_form__enum_ordinal_ordered_goal_loop_or_throw_status_0[2];

static const MR_EnumFunctorDescPtr hlds__goal_form__hlds__goal_form__enum_name_ordered_goal_loop_or_throw_status_0[2];

static const MR_Integer hlds__goal_form__hlds__goal_form__functor_number_map_goal_loop_or_throw_status_0[2];

static const MR_EnumFunctorDesc hlds__goal_form__hlds__goal_form__enum_functor_desc_goal_loop_status_0_0;

static const MR_EnumFunctorDesc hlds__goal_form__hlds__goal_form__enum_functor_desc_goal_loop_status_0_1;

static const MR_EnumFunctorDescPtr hlds__goal_form__hlds__goal_form__enum_ordinal_ordered_goal_loop_status_0[2];

static const MR_EnumFunctorDescPtr hlds__goal_form__hlds__goal_form__enum_name_ordered_goal_loop_status_0[2];

static const MR_Integer hlds__goal_form__hlds__goal_form__functor_number_map_goal_loop_status_0[2];

static const MR_EnumFunctorDesc hlds__goal_form__hlds__goal_form__enum_functor_desc_goal_throw_status_0_0;

static const MR_EnumFunctorDesc hlds__goal_form__hlds__goal_form__enum_functor_desc_goal_throw_status_0_1;

static const MR_EnumFunctorDescPtr hlds__goal_form__hlds__goal_form__enum_ordinal_ordered_goal_throw_status_0[2];

static const MR_EnumFunctorDescPtr hlds__goal_form__hlds__goal_form__enum_name_ordered_goal_throw_status_0[2];

static const MR_Integer hlds__goal_form__hlds__goal_form__functor_number_map_goal_throw_status_0[2];

static const MR_EnumFunctorDesc hlds__goal_form__hlds__goal_form__enum_functor_desc_has_subgoals_0_0;

static const MR_EnumFunctorDesc hlds__goal_form__hlds__goal_form__enum_functor_desc_has_subgoals_0_1;

static const MR_EnumFunctorDescPtr hlds__goal_form__hlds__goal_form__enum_ordinal_ordered_has_subgoals_0[2];

static const MR_EnumFunctorDescPtr hlds__goal_form__hlds__goal_form__enum_name_ordered_has_subgoals_0[2];

static const MR_Integer hlds__goal_form__hlds__goal_form__functor_number_map_has_subgoals_0[2];

static const MR_EnumFunctorDesc hlds__goal_form__hlds__goal_form__enum_functor_desc_is_termvar_needed_0_0;

static const MR_EnumFunctorDesc hlds__goal_form__hlds__goal_form__enum_functor_desc_is_termvar_needed_0_1;

static const MR_EnumFunctorDescPtr hlds__goal_form__hlds__goal_form__enum_ordinal_ordered_is_termvar_needed_0[2];

static const MR_EnumFunctorDescPtr hlds__goal_form__hlds__goal_form__enum_name_ordered_is_termvar_needed_0[2];

static const MR_Integer hlds__goal_form__hlds__goal_form__functor_number_map_is_termvar_needed_0[2];

static MR_Word MR_CALL 
hlds__goal_form__case_list_has_foreign_1_f_0(
  MR_Word HeadVar__1_1);

static MR_Word MR_CALL 
hlds__goal_form__goals_has_foreign_1_f_0(
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
hlds__goal_form__cases_cannot_stack_flush_1_p_0(
  MR_Word HeadVar__1_1);

static MR_bool MR_CALL 
hlds__goal_form__goals_cannot_stack_flush_1_p_0(
  MR_Word HeadVar__1_1);

static void MR_CALL 
hlds__goal_form__may_goal_allocate_heap_2_p_0(
  MR_Word Goal_3,
  MR_Word * May_4);

static void MR_CALL 
hlds__goal_form__may_cases_allocate_heap_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2);

static void MR_CALL 
hlds__goal_form__may_goals_allocate_heap_2_p_0(
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
hlds__goal_form__goals_can_throw_2_f_0(
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
hlds__goal_form__goals_can_loop_2_f_0(
  MR_Word MaybeModuleInfo_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
hlds__goal_form__cases_can_throw_imaf_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_ModuleInfo_0_3,
  MR_Word * STATE_VARIABLE_ModuleInfo_4);

static void MR_CALL 
hlds__goal_form__goals_can_throw_imaf_4_p_0(
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
  /* row   0 */
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
#include "io.stream_ops.mh"


static const MR_EnumFunctorDesc hlds__goal_form__hlds__goal_form__enum_functor_desc_goal_loop_or_throw_status_0_0 = {
  (MR_String) "can_loop_or_throw",
  INT32_C(0)
};

static const MR_EnumFunctorDesc hlds__goal_form__hlds__goal_form__enum_functor_desc_goal_loop_or_throw_status_0_1 = {
  (MR_String) "cannot_loop_or_throw",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr hlds__goal_form__hlds__goal_form__enum_ordinal_ordered_goal_loop_or_throw_status_0[2] = {
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
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (hlds__goal_form____Unify____goal_loop_or_throw_status_0_0_10001)),
  ((MR_Box) (hlds__goal_form____Compare____goal_loop_or_throw_status_0_0_10001)),
  (MR_String) "hlds.goal_form",
  (MR_String) "goal_loop_or_throw_status",
  { hlds__goal_form__hlds__goal_form__enum_name_ordered_goal_loop_or_throw_status_0 },
  { hlds__goal_form__hlds__goal_form__enum_ordinal_ordered_goal_loop_or_throw_status_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  hlds__goal_form__hlds__goal_form__functor_number_map_goal_loop_or_throw_status_0,

};

static const MR_EnumFunctorDesc hlds__goal_form__hlds__goal_form__enum_functor_desc_goal_loop_status_0_0 = {
  (MR_String) "can_loop",
  INT32_C(0)
};

static const MR_EnumFunctorDesc hlds__goal_form__hlds__goal_form__enum_functor_desc_goal_loop_status_0_1 = {
  (MR_String) "cannot_loop",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr hlds__goal_form__hlds__goal_form__enum_ordinal_ordered_goal_loop_status_0[2] = {
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
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (hlds__goal_form____Unify____goal_loop_status_0_0_10001)),
  ((MR_Box) (hlds__goal_form____Compare____goal_loop_status_0_0_10001)),
  (MR_String) "hlds.goal_form",
  (MR_String) "goal_loop_status",
  { hlds__goal_form__hlds__goal_form__enum_name_ordered_goal_loop_status_0 },
  { hlds__goal_form__hlds__goal_form__enum_ordinal_ordered_goal_loop_status_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  hlds__goal_form__hlds__goal_form__functor_number_map_goal_loop_status_0,

};

static const MR_EnumFunctorDesc hlds__goal_form__hlds__goal_form__enum_functor_desc_goal_throw_status_0_0 = {
  (MR_String) "can_throw",
  INT32_C(0)
};

static const MR_EnumFunctorDesc hlds__goal_form__hlds__goal_form__enum_functor_desc_goal_throw_status_0_1 = {
  (MR_String) "cannot_throw",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr hlds__goal_form__hlds__goal_form__enum_ordinal_ordered_goal_throw_status_0[2] = {
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
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (hlds__goal_form____Unify____goal_throw_status_0_0_10001)),
  ((MR_Box) (hlds__goal_form____Compare____goal_throw_status_0_0_10001)),
  (MR_String) "hlds.goal_form",
  (MR_String) "goal_throw_status",
  { hlds__goal_form__hlds__goal_form__enum_name_ordered_goal_throw_status_0 },
  { hlds__goal_form__hlds__goal_form__enum_ordinal_ordered_goal_throw_status_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  hlds__goal_form__hlds__goal_form__functor_number_map_goal_throw_status_0,

};

static const MR_EnumFunctorDesc hlds__goal_form__hlds__goal_form__enum_functor_desc_has_subgoals_0_0 = {
  (MR_String) "has_subgoals",
  INT32_C(0)
};

static const MR_EnumFunctorDesc hlds__goal_form__hlds__goal_form__enum_functor_desc_has_subgoals_0_1 = {
  (MR_String) "does_not_have_subgoals",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr hlds__goal_form__hlds__goal_form__enum_ordinal_ordered_has_subgoals_0[2] = {
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
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (hlds__goal_form____Unify____has_subgoals_0_0_10001)),
  ((MR_Box) (hlds__goal_form____Compare____has_subgoals_0_0_10001)),
  (MR_String) "hlds.goal_form",
  (MR_String) "has_subgoals",
  { hlds__goal_form__hlds__goal_form__enum_name_ordered_has_subgoals_0 },
  { hlds__goal_form__hlds__goal_form__enum_ordinal_ordered_has_subgoals_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  hlds__goal_form__hlds__goal_form__functor_number_map_has_subgoals_0,

};

static const MR_EnumFunctorDesc hlds__goal_form__hlds__goal_form__enum_functor_desc_is_termvar_needed_0_0 = {
  (MR_String) "termvar_is_not_needed",
  INT32_C(0)
};

static const MR_EnumFunctorDesc hlds__goal_form__hlds__goal_form__enum_functor_desc_is_termvar_needed_0_1 = {
  (MR_String) "termvar_is_needed",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr hlds__goal_form__hlds__goal_form__enum_ordinal_ordered_is_termvar_needed_0[2] = {
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
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (hlds__goal_form____Unify____is_termvar_needed_0_0_10001)),
  ((MR_Box) (hlds__goal_form____Compare____is_termvar_needed_0_0_10001)),
  (MR_String) "hlds.goal_form",
  (MR_String) "is_termvar_needed",
  { hlds__goal_form__hlds__goal_form__enum_name_ordered_is_termvar_needed_0 },
  { hlds__goal_form__hlds__goal_form__enum_ordinal_ordered_is_termvar_needed_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  hlds__goal_form__hlds__goal_form__functor_number_map_is_termvar_needed_0,

};

void MR_CALL 
hlds__goal_form____Compare____is_termvar_needed_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
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

MR_bool MR_CALL 
hlds__goal_form____Unify____is_termvar_needed_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
hlds__goal_form____Compare____has_subgoals_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
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

MR_bool MR_CALL 
hlds__goal_form____Unify____has_subgoals_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
hlds__goal_form____Compare____goal_throw_status_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
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

MR_bool MR_CALL 
hlds__goal_form____Unify____goal_throw_status_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
hlds__goal_form____Compare____goal_loop_status_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
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

MR_bool MR_CALL 
hlds__goal_form____Unify____goal_loop_status_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
hlds__goal_form____Compare____goal_loop_or_throw_status_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
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

MR_bool MR_CALL 
hlds__goal_form____Unify____goal_loop_or_throw_status_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
hlds__goal_form__get_from_ground_term_construct_conjunct_info_5_p_0(
  MR_Word Goal_6,
  MR_Word * LHSVar_7,
  MR_Word * ConsId_8,
  MR_Word * RHSVars_9,
  MR_Word * GoalInfo_10)
{
  MR_bool succeeded;
  MR_Word GoalExpr_11 = ((MR_Word) ((MR_hl_field(0, Goal_6, (MR_Integer) 0))));
  MR_Word LHSVarPrime_17;
  MR_Word ConsIdPrime_18;
  MR_Word RHSVarsPrime_19;
  MR_Word Unify_15;
  MR_Word SubInfo_23;

  *GoalInfo_10 = ((MR_Word) ((MR_hl_field(0, Goal_6, (MR_Integer) 1))));
  succeeded = ((MR_tag((MR_Word) GoalExpr_11)) == (MR_Integer) 1);
  if (succeeded)
  {
    Unify_15 = ((MR_Word) ((MR_hl_field(1, GoalExpr_11, (MR_Integer) 3))));
    succeeded = ((MR_tag((MR_Word) Unify_15)) == (MR_Integer) 0);
    if (succeeded)
    {
      LHSVarPrime_17 = ((MR_Word) ((MR_hl_field(0, Unify_15, (MR_Integer) 0))));
      ConsIdPrime_18 = ((MR_Word) ((MR_hl_field(0, Unify_15, (MR_Integer) 1))));
      RHSVarsPrime_19 = ((MR_Word) ((MR_hl_field(0, Unify_15, (MR_Integer) 2))));
      SubInfo_23 = ((MR_Word) ((MR_hl_field(0, Unify_15, (MR_Integer) 6))));
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

void MR_CALL 
hlds__goal_form__get_from_ground_term_construct_info_5_p_0(
  MR_Word TermVar_6,
  MR_Word Goal_7,
  MR_Word * TermVarIsNeeded_8,
  MR_Word * Conjuncts_9,
  MR_Word * GoalInfo_10)
{
  MR_bool succeeded;
  MR_Word GoalExpr_11 = ((MR_Word) ((MR_hl_field(0, Goal_7, (MR_Integer) 0))));
  MR_Word NonLocals_12;
  MR_Word NonLocalList_13;

  *GoalInfo_10 = ((MR_Word) ((MR_hl_field(0, Goal_7, (MR_Integer) 1))));
  NonLocals_12 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(*GoalInfo_10);
  parse_tree__set_of_var__to_sorted_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NonLocals_12, &NonLocalList_13);
  if ((NonLocalList_13 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word ConjunctsPrime_15;
    MR_Word Var_22;

    *TermVarIsNeeded_8 = (MR_Integer) 0;
    succeeded = ((((MR_tag((MR_Word) GoalExpr_11)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, GoalExpr_11, (MR_Integer) 0)))) == (MR_Integer) 2)));
    if (succeeded)
    {
      Var_22 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr_11, (MR_Integer) 1))) & (MR_Integer) 1);
      ConjunctsPrime_15 = ((MR_Word) ((MR_hl_field(3, GoalExpr_11, (MR_Integer) 2))));
      succeeded = (Var_22 == (MR_Integer) 0);
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
    MR_Word Var_44 = ((MR_Word) ((MR_hl_field(1, NonLocalList_13, (MR_Integer) 1))));
    MR_Word Var_45 = ((MR_Word) ((MR_hl_field(1, NonLocalList_13, (MR_Integer) 0))));

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
      succeeded = ((((MR_tag((MR_Word) GoalExpr_11)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, GoalExpr_11, (MR_Integer) 0)))) == (MR_Integer) 2)));
      if (succeeded)
      {
        Var_29 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr_11, (MR_Integer) 1))) & (MR_Integer) 1);
        ConjunctsPrime_32 = ((MR_Word) ((MR_hl_field(3, GoalExpr_11, (MR_Integer) 2))));
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

void MR_CALL 
hlds__goal_form__get_notag_or_direct_arg_arg_2_p_0(
  MR_Word TypeInfo_for_Arg_9,
  MR_Word RHSVars_3,
  MR_Box * RHSVar_4)
{
  MR_bool succeeded = (RHSVars_3 != (MR_Word) ((MR_Unsigned) 0U));
  MR_Box RHSVarPrime_5;
  MR_Word Var_6;

  if (succeeded)
  {
    RHSVarPrime_5 = (MR_hl_field(1, RHSVars_3, (MR_Integer) 0));
    Var_6 = ((MR_Word) ((MR_hl_field(1, RHSVars_3, (MR_Integer) 1))));
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

void MR_CALL 
hlds__goal_form__get_notag_or_direct_arg_arg_mode_4_p_0(
  MR_Word TypeInfo_for_Arg_15,
  MR_Word TypeInfo_for_UM_16,
  MR_Word RHSVars_5,
  MR_Word ArgModes_6,
  MR_Box * RHSVar_7,
  MR_Box * ArgMode_8)
{
  MR_bool succeeded = (RHSVars_5 != (MR_Word) ((MR_Unsigned) 0U));
  MR_Box RHSVarPrime_9;
  MR_Box ArgModePrime_10;
  MR_Word Var_11;
  MR_Word Var_12;

  if (succeeded)
  {
    RHSVarPrime_9 = (MR_hl_field(1, RHSVars_5, (MR_Integer) 0));
    Var_11 = ((MR_Word) ((MR_hl_field(1, RHSVars_5, (MR_Integer) 1))));
    succeeded = (Var_11 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      succeeded = (ArgModes_6 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        ArgModePrime_10 = (MR_hl_field(1, ArgModes_6, (MR_Integer) 0));
        Var_12 = ((MR_Word) ((MR_hl_field(1, ArgModes_6, (MR_Integer) 1))));
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

MR_Word MR_CALL 
hlds__goal_form__goal_expr_has_subgoals_1_f_0(
  MR_Word GoalExpr_3)
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
      switch (((MR_Integer) ((MR_hl_field(3, GoalExpr_3, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
        case (MR_Integer) 1:
          HasSubGoals_4 = (MR_Integer) 1;
          break;
        case (MR_Integer) 2:
          {
            MR_Word SubGoals_29 = ((MR_Word) ((MR_hl_field(3, GoalExpr_3, (MR_Integer) 2))));

            if ((SubGoals_29 == (MR_Word) ((MR_Unsigned) 0U)))
              HasSubGoals_4 = (MR_Integer) 1;
            else
              HasSubGoals_4 = (MR_Integer) 0;
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word SubGoals_61 = ((MR_Word) ((MR_hl_field(3, GoalExpr_3, (MR_Integer) 1))));

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

MR_Word MR_CALL 
hlds__goal_form__goal_has_foreign_1_f_0(
  MR_Word Goal_3)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word HasForeign_4;
    MR_Word GoalExpr_5 = ((MR_Word) ((MR_hl_field(0, Goal_3, (MR_Integer) 0))));

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
        switch (((MR_Integer) ((MR_hl_field(3, GoalExpr_5, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            HasForeign_4 = (MR_Integer) 0;
            break;
          case (MR_Integer) 1:
            HasForeign_4 = (MR_Integer) 1;
            break;
          case (MR_Integer) 2:
            {
              MR_Word Goals_24 = ((MR_Word) ((MR_hl_field(3, GoalExpr_5, (MR_Integer) 2))));

              HasForeign_4 = hlds__goal_form__goals_has_foreign_1_f_0(Goals_24);
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Goals_60 = ((MR_Word) ((MR_hl_field(3, GoalExpr_5, (MR_Integer) 1))));

              HasForeign_4 = hlds__goal_form__goals_has_foreign_1_f_0(Goals_60);
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Cases_27 = ((MR_Word) ((MR_hl_field(3, GoalExpr_5, (MR_Integer) 3))));

              HasForeign_4 = hlds__goal_form__case_list_has_foreign_1_f_0(Cases_27);
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word Reason_29 = ((MR_Word) ((MR_hl_field(3, GoalExpr_5, (MR_Integer) 1))));
              MR_Word SubGoal_61 = ((MR_Word) ((MR_hl_field(3, GoalExpr_5, (MR_Integer) 2))));
              MR_Word FGT_31;

              succeeded = ((((MR_tag((MR_Word) Reason_29)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Reason_29, (MR_Integer) 0)))) == (MR_Integer) 6)));
              if (succeeded)
              {
                FGT_31 = ((MR_Unsigned) ((MR_hl_field(3, Reason_29, (MR_Integer) 2))) & (MR_Integer) 3);
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
              MR_Word Cond_33 = ((MR_Word) ((MR_hl_field(3, GoalExpr_5, (MR_Integer) 2))));
              MR_Word Then_34 = ((MR_Word) ((MR_hl_field(3, GoalExpr_5, (MR_Integer) 3))));
              MR_Word Else_35 = ((MR_Word) ((MR_hl_field(3, GoalExpr_5, (MR_Integer) 4))));

              {
                MR_Word Var_55;

                Var_55 = hlds__goal_form__goal_has_foreign_1_f_0(Cond_33);
                succeeded = (Var_55 == (MR_Integer) 1);
              }
              if (!(succeeded))
              {
                {
                  MR_Word Var_56;

                  Var_56 = hlds__goal_form__goal_has_foreign_1_f_0(Then_34);
                  succeeded = (Var_56 == (MR_Integer) 1);
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
              MR_Word ShortHand_43 = ((MR_Word) ((MR_hl_field(3, GoalExpr_5, (MR_Integer) 1))));

              switch (MR_tag((MR_Word) ShortHand_43)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word GoalA_53 = ((MR_Word) ((MR_hl_field(0, ShortHand_43, (MR_Integer) 0))));
                    MR_Word GoalB_54 = ((MR_Word) ((MR_hl_field(0, ShortHand_43, (MR_Integer) 1))));
                    MR_Word Var_58;
                    MR_Word Var_59;

                    Var_58 = hlds__goal_form__goal_has_foreign_1_f_0(GoalA_53);
                    Var_59 = hlds__goal_form__goal_has_foreign_1_f_0(GoalB_54);
                    HasForeign_4 = mercury__bool__or_2_f_0(Var_58, Var_59);
                  }
                  break;
                case (MR_Integer) 1:
                  HasForeign_4 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word SubGoal_62 = ((MR_Word) ((MR_hl_field(2, ShortHand_43, (MR_Integer) 2))));
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
      MR_Word Case_3 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Cases_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Goal_8 = ((MR_Word) ((MR_hl_field(0, Case_3, (MR_Integer) 2))));
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
hlds__goal_form__goals_has_foreign_1_f_0(
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
      MR_Word Goal_3 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Goals_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
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

MR_Word MR_CALL 
hlds__goal_form__goal_cannot_modify_trail_1_f_0(
  MR_Word GoalInfo_3)
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

void MR_CALL 
hlds__goal_form__count_recursive_calls_5_p_0(
  MR_Word tscc_proc_1_input_1_Goal_6,
  MR_Word tscc_proc_1_input_2_PredId_7,
  MR_Integer tscc_proc_1_input_3_ProcId_8,
  MR_Integer * tscc_output_ptr_1_Min_9,
  MR_Integer * tscc_output_ptr_2_Max_10)
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
    MR_Word GoalExpr_11 = ((MR_Word) ((MR_hl_field(0, Goal_6, (MR_Integer) 0))));

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
          MR_Word CallPredId_30 = ((MR_Word) ((MR_hl_field(2, GoalExpr_11, (MR_Integer) 0))));
          MR_Integer CallProcId_31 = ((MR_Integer) ((MR_hl_field(2, GoalExpr_11, (MR_Integer) 1))));

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
        switch (((MR_Integer) ((MR_hl_field(3, GoalExpr_11, (MR_Integer) 0))))) {
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
              MR_Word Goals_38 = ((MR_Word) ((MR_hl_field(3, GoalExpr_11, (MR_Integer) 2))));

              hlds__goal_form__count_recursive_calls_conj_7_p_0(Goals_38, PredId_7, ProcId_8, (MR_Integer) 0, (MR_Integer) 0, &Min_9, &Max_10);
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Goals_75 = ((MR_Word) ((MR_hl_field(3, GoalExpr_11, (MR_Integer) 1))));
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
              MR_Word Cases_41 = ((MR_Word) ((MR_hl_field(3, GoalExpr_11, (MR_Integer) 3))));
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
              MR_Word Reason_55 = ((MR_Word) ((MR_hl_field(3, GoalExpr_11, (MR_Integer) 1))));
              MR_Word SubGoal_76 = ((MR_Word) ((MR_hl_field(3, GoalExpr_11, (MR_Integer) 2))));
              MR_Word FGT_57;

              succeeded = ((((MR_tag((MR_Word) Reason_55)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Reason_55, (MR_Integer) 0)))) == (MR_Integer) 6)));
              if (succeeded)
              {
                FGT_57 = ((MR_Unsigned) ((MR_hl_field(3, Reason_55, (MR_Integer) 2))) & (MR_Integer) 3);
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
              MR_Word Cond_43 = ((MR_Word) ((MR_hl_field(3, GoalExpr_11, (MR_Integer) 2))));
              MR_Word Then_44 = ((MR_Word) ((MR_hl_field(3, GoalExpr_11, (MR_Integer) 3))));
              MR_Word Else_45 = ((MR_Word) ((MR_hl_field(3, GoalExpr_11, (MR_Integer) 4))));
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
              MR_Word ShortHand_58 = ((MR_Word) ((MR_hl_field(3, GoalExpr_11, (MR_Integer) 1))));

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
                    MR_Word Goal_82 = ((MR_Word) ((MR_hl_field(1, ShortHand_58, (MR_Integer) 4))));
                    MR_Word Goals_83 = ((MR_Word) ((MR_hl_field(1, ShortHand_58, (MR_Integer) 5))));

                    if ((Goals_83 == (MR_Word) ((MR_Unsigned) 0U)))
                    {
                      MR_Word next_value_of_tscc_proc_1_input_1_Goal_6 = Goal_82;
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
                      MR_Integer Min0_90;
                      MR_Integer Max0_91;
                      MR_Integer Min1_92;
                      MR_Integer Max1_93;

                      hlds__goal_form__count_recursive_calls_5_p_0(Goal_82, PredId_7, ProcId_8, &Min0_90, &Max0_91);
                      hlds__goal_form__count_recursive_calls_disj_5_p_0(Goals_83, PredId_7, ProcId_8, &Min1_92, &Max1_93);
                      mercury__int__min_3_p_0(Min0_90, Min1_92, &Min_9);
                      mercury__int__max_3_p_0(Max0_91, Max1_93, &Max_10);
                    }
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word SubGoal_77 = ((MR_Word) ((MR_hl_field(2, ShortHand_58, (MR_Integer) 2))));
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
      MR_Word Goal_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Goals_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));

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
        Goal_22 = ((MR_Word) ((MR_hl_field(1, Goals_9, (MR_Integer) 0))));
        Goals_23 = ((MR_Word) ((MR_hl_field(1, Goals_9, (MR_Integer) 1))));
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
      MR_Word Cases_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Var_26 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));

      Goal_14 = ((MR_Word) ((MR_hl_field(0, Var_26, (MR_Integer) 2))));
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
        Var_47 = ((MR_Word) ((MR_hl_field(1, Cases_15, (MR_Integer) 0))));
        Cases_36 = ((MR_Word) ((MR_hl_field(1, Cases_15, (MR_Integer) 1))));
        Goal_35 = ((MR_Word) ((MR_hl_field(0, Var_47, (MR_Integer) 2))));
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

static void MR_CALL 
hlds__goal_form__count_recursive_calls_disj_5_p_0(
  MR_Word tscc_proc_2_input_1_HeadVar__1_1,
  MR_Word tscc_proc_2_input_2_PredId_2,
  MR_Integer tscc_proc_2_input_3_ProcId_3,
  MR_Integer * tscc_output_ptr_1_Min_9,
  MR_Integer * tscc_output_ptr_2_Max_10)
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
    MR_Word GoalExpr_11 = ((MR_Word) ((MR_hl_field(0, Goal_6, (MR_Integer) 0))));

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
          MR_Word CallPredId_30 = ((MR_Word) ((MR_hl_field(2, GoalExpr_11, (MR_Integer) 0))));
          MR_Integer CallProcId_31 = ((MR_Integer) ((MR_hl_field(2, GoalExpr_11, (MR_Integer) 1))));

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
        switch (((MR_Integer) ((MR_hl_field(3, GoalExpr_11, (MR_Integer) 0))))) {
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
              MR_Word Goals_38 = ((MR_Word) ((MR_hl_field(3, GoalExpr_11, (MR_Integer) 2))));

              hlds__goal_form__count_recursive_calls_conj_7_p_0(Goals_38, PredId_7, ProcId_8, (MR_Integer) 0, (MR_Integer) 0, &Min_9, &Max_10);
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Goals_75 = ((MR_Word) ((MR_hl_field(3, GoalExpr_11, (MR_Integer) 1))));
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
              MR_Word Cases_41 = ((MR_Word) ((MR_hl_field(3, GoalExpr_11, (MR_Integer) 3))));
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
              MR_Word Reason_55 = ((MR_Word) ((MR_hl_field(3, GoalExpr_11, (MR_Integer) 1))));
              MR_Word SubGoal_76 = ((MR_Word) ((MR_hl_field(3, GoalExpr_11, (MR_Integer) 2))));
              MR_Word FGT_57;

              succeeded = ((((MR_tag((MR_Word) Reason_55)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Reason_55, (MR_Integer) 0)))) == (MR_Integer) 6)));
              if (succeeded)
              {
                FGT_57 = ((MR_Unsigned) ((MR_hl_field(3, Reason_55, (MR_Integer) 2))) & (MR_Integer) 3);
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
              MR_Word Cond_43 = ((MR_Word) ((MR_hl_field(3, GoalExpr_11, (MR_Integer) 2))));
              MR_Word Then_44 = ((MR_Word) ((MR_hl_field(3, GoalExpr_11, (MR_Integer) 3))));
              MR_Word Else_45 = ((MR_Word) ((MR_hl_field(3, GoalExpr_11, (MR_Integer) 4))));
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
              MR_Word ShortHand_58 = ((MR_Word) ((MR_hl_field(3, GoalExpr_11, (MR_Integer) 1))));

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
                    MR_Word Goal_82 = ((MR_Word) ((MR_hl_field(1, ShortHand_58, (MR_Integer) 4))));
                    MR_Word Goals_83 = ((MR_Word) ((MR_hl_field(1, ShortHand_58, (MR_Integer) 5))));

                    if ((Goals_83 == (MR_Word) ((MR_Unsigned) 0U)))
                    {
                      MR_Word next_value_of_tscc_proc_1_input_1_Goal_6 = Goal_82;
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
                      MR_Integer Min0_90;
                      MR_Integer Max0_91;
                      MR_Integer Min1_92;
                      MR_Integer Max1_93;

                      hlds__goal_form__count_recursive_calls_5_p_0(Goal_82, PredId_7, ProcId_8, &Min0_90, &Max0_91);
                      hlds__goal_form__count_recursive_calls_disj_5_p_0(Goals_83, PredId_7, ProcId_8, &Min1_92, &Max1_93);
                      mercury__int__min_3_p_0(Min0_90, Min1_92, &Min_9);
                      mercury__int__max_3_p_0(Max0_91, Max1_93, &Max_10);
                    }
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word SubGoal_77 = ((MR_Word) ((MR_hl_field(2, ShortHand_58, (MR_Integer) 2))));
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
      MR_Word Goal_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Goals_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));

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
        Goal_22 = ((MR_Word) ((MR_hl_field(1, Goals_9, (MR_Integer) 0))));
        Goals_23 = ((MR_Word) ((MR_hl_field(1, Goals_9, (MR_Integer) 1))));
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
      MR_Word Cases_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Var_26 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));

      Goal_14 = ((MR_Word) ((MR_hl_field(0, Var_26, (MR_Integer) 2))));
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
        Var_47 = ((MR_Word) ((MR_hl_field(1, Cases_15, (MR_Integer) 0))));
        Cases_36 = ((MR_Word) ((MR_hl_field(1, Cases_15, (MR_Integer) 1))));
        Goal_35 = ((MR_Word) ((MR_hl_field(0, Var_47, (MR_Integer) 2))));
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

static void MR_CALL 
hlds__goal_form__count_recursive_calls_cases_5_p_0(
  MR_Word tscc_proc_3_input_1_HeadVar__1_1,
  MR_Word tscc_proc_3_input_2_PredId_2,
  MR_Integer tscc_proc_3_input_3_ProcId_3,
  MR_Integer * tscc_output_ptr_1_Min_9,
  MR_Integer * tscc_output_ptr_2_Max_10)
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
    MR_Word GoalExpr_11 = ((MR_Word) ((MR_hl_field(0, Goal_6, (MR_Integer) 0))));

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
          MR_Word CallPredId_30 = ((MR_Word) ((MR_hl_field(2, GoalExpr_11, (MR_Integer) 0))));
          MR_Integer CallProcId_31 = ((MR_Integer) ((MR_hl_field(2, GoalExpr_11, (MR_Integer) 1))));

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
        switch (((MR_Integer) ((MR_hl_field(3, GoalExpr_11, (MR_Integer) 0))))) {
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
              MR_Word Goals_38 = ((MR_Word) ((MR_hl_field(3, GoalExpr_11, (MR_Integer) 2))));

              hlds__goal_form__count_recursive_calls_conj_7_p_0(Goals_38, PredId_7, ProcId_8, (MR_Integer) 0, (MR_Integer) 0, &Min_9, &Max_10);
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Goals_75 = ((MR_Word) ((MR_hl_field(3, GoalExpr_11, (MR_Integer) 1))));
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
              MR_Word Cases_41 = ((MR_Word) ((MR_hl_field(3, GoalExpr_11, (MR_Integer) 3))));
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
              MR_Word Reason_55 = ((MR_Word) ((MR_hl_field(3, GoalExpr_11, (MR_Integer) 1))));
              MR_Word SubGoal_76 = ((MR_Word) ((MR_hl_field(3, GoalExpr_11, (MR_Integer) 2))));
              MR_Word FGT_57;

              succeeded = ((((MR_tag((MR_Word) Reason_55)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Reason_55, (MR_Integer) 0)))) == (MR_Integer) 6)));
              if (succeeded)
              {
                FGT_57 = ((MR_Unsigned) ((MR_hl_field(3, Reason_55, (MR_Integer) 2))) & (MR_Integer) 3);
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
              MR_Word Cond_43 = ((MR_Word) ((MR_hl_field(3, GoalExpr_11, (MR_Integer) 2))));
              MR_Word Then_44 = ((MR_Word) ((MR_hl_field(3, GoalExpr_11, (MR_Integer) 3))));
              MR_Word Else_45 = ((MR_Word) ((MR_hl_field(3, GoalExpr_11, (MR_Integer) 4))));
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
              MR_Word ShortHand_58 = ((MR_Word) ((MR_hl_field(3, GoalExpr_11, (MR_Integer) 1))));

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
                    MR_Word Goal_82 = ((MR_Word) ((MR_hl_field(1, ShortHand_58, (MR_Integer) 4))));
                    MR_Word Goals_83 = ((MR_Word) ((MR_hl_field(1, ShortHand_58, (MR_Integer) 5))));

                    if ((Goals_83 == (MR_Word) ((MR_Unsigned) 0U)))
                    {
                      MR_Word next_value_of_tscc_proc_1_input_1_Goal_6 = Goal_82;
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
                      MR_Integer Min0_90;
                      MR_Integer Max0_91;
                      MR_Integer Min1_92;
                      MR_Integer Max1_93;

                      hlds__goal_form__count_recursive_calls_5_p_0(Goal_82, PredId_7, ProcId_8, &Min0_90, &Max0_91);
                      hlds__goal_form__count_recursive_calls_disj_5_p_0(Goals_83, PredId_7, ProcId_8, &Min1_92, &Max1_93);
                      mercury__int__min_3_p_0(Min0_90, Min1_92, &Min_9);
                      mercury__int__max_3_p_0(Max0_91, Max1_93, &Max_10);
                    }
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word SubGoal_77 = ((MR_Word) ((MR_hl_field(2, ShortHand_58, (MR_Integer) 2))));
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
      MR_Word Goal_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Goals_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));

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
        Goal_22 = ((MR_Word) ((MR_hl_field(1, Goals_9, (MR_Integer) 0))));
        Goals_23 = ((MR_Word) ((MR_hl_field(1, Goals_9, (MR_Integer) 1))));
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
      MR_Word Cases_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Var_26 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));

      Goal_14 = ((MR_Word) ((MR_hl_field(0, Var_26, (MR_Integer) 2))));
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
        Var_47 = ((MR_Word) ((MR_hl_field(1, Cases_15, (MR_Integer) 0))));
        Cases_36 = ((MR_Word) ((MR_hl_field(1, Cases_15, (MR_Integer) 1))));
        Goal_35 = ((MR_Word) ((MR_hl_field(0, Var_47, (MR_Integer) 2))));
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
      MR_Word Goal_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Goals_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
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
  MR_bool succeeded;
  MR_Word GoalExpr_2 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
  MR_Word GoalInfo_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
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

        succeeded = ((((MR_tag((MR_Word) GoalExpr_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, GoalExpr_2, (MR_Integer) 0)))) == (MR_Integer) 2)));
        if (succeeded)
        {
          ConjType_7 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr_2, (MR_Integer) 1))) & (MR_Integer) 1);
          Goals_8 = ((MR_Word) ((MR_hl_field(3, GoalExpr_2, (MR_Integer) 2))));
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
      MR_Word Goal_2 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Goals_3 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word GoalExpr_4 = ((MR_Word) ((MR_hl_field(0, Goal_2, (MR_Integer) 0))));
      MR_Word GoalInfo_5 = ((MR_Word) ((MR_hl_field(0, Goal_2, (MR_Integer) 1))));

      if (((MR_tag((MR_Word) GoalExpr_4)) == (MR_Integer) 2))
      {
        MR_Word BuiltinState_9 = ((MR_Unsigned) ((MR_hl_field(2, GoalExpr_4, (MR_Integer) 3))) & (MR_Integer) 1);

        succeeded = (BuiltinState_9 != (MR_Integer) 0);
      }
      else
      if (((((MR_tag((MR_Word) GoalExpr_4)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, GoalExpr_4, (MR_Integer) 0)))) == (MR_Integer) 0))))
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
hlds__goal_form__goal_cannot_stack_flush_1_p_0(
  MR_Word Goal_2)
{
  MR_bool succeeded;
  MR_Word GoalExpr_3 = ((MR_Word) ((MR_hl_field(0, Goal_2, (MR_Integer) 0))));

  switch (MR_tag((MR_Word) GoalExpr_3)) {
    default:
      succeeded = MR_FALSE;
      break;
    case (MR_Integer) 0:
      {
        MR_Word SubGoal_24 = (MR_Word) ((MR_Word) (GoalExpr_3));
        MR_Word SubGoalExpr_25 = ((MR_Word) ((MR_hl_field(0, SubGoal_24, (MR_Integer) 0))));
        MR_Word Unify_34;

        succeeded = ((MR_tag((MR_Word) SubGoalExpr_25)) == (MR_Integer) 1);
        if (succeeded)
        {
          Unify_34 = ((MR_Word) ((MR_hl_field(1, SubGoalExpr_25, (MR_Integer) 3))));
          succeeded = ((((MR_tag((MR_Word) Unify_34)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Unify_34, (MR_Integer) 0)))) == (MR_Integer) 1)));
          if (succeeded)
          {
          }
          succeeded = !(succeeded);
        }
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Unify_8 = ((MR_Word) ((MR_hl_field(1, GoalExpr_3, (MR_Integer) 3))));

        succeeded = ((((MR_tag((MR_Word) Unify_8)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Unify_8, (MR_Integer) 0)))) == (MR_Integer) 1)));
        if (succeeded)
        {
        }
        succeeded = !(succeeded);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word BuiltinState_16 = ((MR_Unsigned) ((MR_hl_field(2, GoalExpr_3, (MR_Integer) 3))) & (MR_Integer) 1);

        succeeded = (BuiltinState_16 == (MR_Integer) 0);
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, GoalExpr_3, (MR_Integer) 0))))) {
        default:
          succeeded = MR_FALSE;
          break;
        case (MR_Integer) 2:
          {
            MR_Word ConjType_19 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr_3, (MR_Integer) 1))) & (MR_Integer) 1);
            MR_Word Goals_20 = ((MR_Word) ((MR_hl_field(3, GoalExpr_3, (MR_Integer) 2))));

            succeeded = (ConjType_19 == (MR_Integer) 0);
            if (succeeded)
              succeeded = hlds__goal_form__goals_cannot_stack_flush_1_p_0(Goals_20);
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word Cases_23 = ((MR_Word) ((MR_hl_field(3, GoalExpr_3, (MR_Integer) 3))));

            succeeded = hlds__goal_form__cases_cannot_stack_flush_1_p_0(Cases_23);
          }
          break;
      }
      break;
  }
  return succeeded;
}

static MR_bool MR_CALL 
hlds__goal_form__cases_cannot_stack_flush_1_p_0(
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
      MR_Word Cases_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Var_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word next_value_of_HeadVar__1_1;

      Goal_4 = ((MR_Word) ((MR_hl_field(0, Var_6, (MR_Integer) 2))));
      succeeded = hlds__goal_form__goal_cannot_stack_flush_1_p_0(Goal_4);
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
hlds__goal_form__goals_cannot_stack_flush_1_p_0(
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
      MR_Word Goal_2 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Goals_3 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word next_value_of_HeadVar__1_1;

      succeeded = hlds__goal_form__goal_cannot_stack_flush_1_p_0(Goal_2);
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
hlds__goal_form__goals_may_allocate_heap_1_p_0(
  MR_Word Goals_2)
{
  MR_bool succeeded;
  MR_Word Var_4;

  hlds__goal_form__may_goals_allocate_heap_2_p_0(Goals_2, &Var_4);
  succeeded = ((MR_Integer) 1 == Var_4);
  return succeeded;
}

MR_bool MR_CALL 
hlds__goal_form__goal_may_allocate_heap_1_p_0(
  MR_Word Goal_2)
{
  MR_bool succeeded;
  MR_Word Var_4;

  hlds__goal_form__may_goal_allocate_heap_2_p_0(Goal_2, &Var_4);
  succeeded = ((MR_Integer) 1 == Var_4);
  return succeeded;
}

static void MR_CALL 
hlds__goal_form__may_goal_allocate_heap_2_p_0(
  MR_Word Goal_3,
  MR_Word * May_4)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word GoalExpr_5 = ((MR_Word) ((MR_hl_field(0, Goal_3, (MR_Integer) 0))));

    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) GoalExpr_5)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word SubGoal_48 = (MR_Word) ((MR_Word) (GoalExpr_5));
          MR_Word next_value_of_Goal_3 = SubGoal_48;

          // direct tailcall eliminated
          ;
          Goal_3 = next_value_of_Goal_3;
          continue;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Unification_10 = ((MR_Word) ((MR_hl_field(1, GoalExpr_5, (MR_Integer) 3))));
          MR_Word Args_14;

          succeeded = ((MR_tag((MR_Word) Unification_10)) == (MR_Integer) 0);
          if (succeeded)
          {
            Args_14 = ((MR_Word) ((MR_hl_field(0, Unification_10, (MR_Integer) 2))));
            succeeded = (Args_14 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
            }
          }
          if (succeeded)
            *May_4 = (MR_Integer) 1;
          else
            *May_4 = (MR_Integer) 0;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Builtin_24 = ((MR_Unsigned) ((MR_hl_field(2, GoalExpr_5, (MR_Integer) 3))) & (MR_Integer) 1);

          switch (Builtin_24) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *May_4 = (MR_Integer) 0;
              break;
            case (MR_Integer) 1:
              *May_4 = (MR_Integer) 1;
              break;
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, GoalExpr_5, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *May_4 = (MR_Integer) 1;
            break;
          case (MR_Integer) 1:
            *May_4 = (MR_Integer) 1;
            break;
          case (MR_Integer) 2:
            {
              MR_Word ConjType_39 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr_5, (MR_Integer) 1))) & (MR_Integer) 1);
              MR_Word Goals_40 = ((MR_Word) ((MR_hl_field(3, GoalExpr_5, (MR_Integer) 2))));

              switch (ConjType_39) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  *May_4 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 0:
                  hlds__goal_form__may_goals_allocate_heap_2_p_0(Goals_40, May_4);
                  break;
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Goals_68 = ((MR_Word) ((MR_hl_field(3, GoalExpr_5, (MR_Integer) 1))));

              hlds__goal_form__may_goals_allocate_heap_2_p_0(Goals_68, May_4);
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Cases_43 = ((MR_Word) ((MR_hl_field(3, GoalExpr_5, (MR_Integer) 3))));

              hlds__goal_form__may_cases_allocate_heap_2_p_0(Cases_43, May_4);
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word Reason_49 = ((MR_Word) ((MR_hl_field(3, GoalExpr_5, (MR_Integer) 1))));
              MR_Word SubGoal_69 = ((MR_Word) ((MR_hl_field(3, GoalExpr_5, (MR_Integer) 2))));
              MR_Word FGT_51;

              succeeded = ((((MR_tag((MR_Word) Reason_49)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Reason_49, (MR_Integer) 0)))) == (MR_Integer) 6)));
              if (succeeded)
              {
                FGT_51 = ((MR_Unsigned) ((MR_hl_field(3, Reason_49, (MR_Integer) 2))) & (MR_Integer) 3);
                switch (FGT_51) {
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
                *May_4 = (MR_Integer) 1;
              else
              {
                MR_Word next_value_of_Goal_3 = SubGoal_69;

                // direct tailcall eliminated
                ;
                Goal_3 = next_value_of_Goal_3;
                continue;
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word Cond_45 = ((MR_Word) ((MR_hl_field(3, GoalExpr_5, (MR_Integer) 2))));
              MR_Word Then_46 = ((MR_Word) ((MR_hl_field(3, GoalExpr_5, (MR_Integer) 3))));
              MR_Word Else_47 = ((MR_Word) ((MR_hl_field(3, GoalExpr_5, (MR_Integer) 4))));
              MR_Word Var_70;

              hlds__goal_form__may_goal_allocate_heap_2_p_0(Cond_45, &Var_70);
              succeeded = ((MR_Integer) 1 == Var_70);
              if (succeeded)
                *May_4 = (MR_Integer) 1;
              else
              {
                MR_Word Var_71;

                hlds__goal_form__may_goal_allocate_heap_2_p_0(Then_46, &Var_71);
                succeeded = ((MR_Integer) 1 == Var_71);
                if (succeeded)
                  *May_4 = (MR_Integer) 1;
                else
                {
                  MR_Word next_value_of_Goal_3 = Else_47;

                  // direct tailcall eliminated
                  ;
                  Goal_3 = next_value_of_Goal_3;
                  continue;
                }
              }
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word ShortHand_52 = ((MR_Word) ((MR_hl_field(3, GoalExpr_5, (MR_Integer) 1))));

              switch (MR_tag((MR_Word) ShortHand_52)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word GoalA_63 = ((MR_Word) ((MR_hl_field(0, ShortHand_52, (MR_Integer) 0))));
                    MR_Word GoalB_64 = ((MR_Word) ((MR_hl_field(0, ShortHand_52, (MR_Integer) 1))));
                    MR_Word Var_72;

                    hlds__goal_form__may_goal_allocate_heap_2_p_0(GoalA_63, &Var_72);
                    succeeded = ((MR_Integer) 1 == Var_72);
                    if (succeeded)
                      *May_4 = (MR_Integer) 1;
                    else
                    {
                      MR_Word next_value_of_Goal_3 = GoalB_64;

                      // direct tailcall eliminated
                      ;
                      Goal_3 = next_value_of_Goal_3;
                      continue;
                    }
                  }
                  break;
                case (MR_Integer) 1:
                case (MR_Integer) 2:
                  *May_4 = (MR_Integer) 1;
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
hlds__goal_form__may_cases_allocate_heap_2_p_0(
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
      MR_Word Cases_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Var_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Var_10;

      Goal_5 = ((MR_Word) ((MR_hl_field(0, Var_8, (MR_Integer) 2))));
      hlds__goal_form__may_goal_allocate_heap_2_p_0(Goal_5, &Var_10);
      succeeded = ((MR_Integer) 1 == Var_10);
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
hlds__goal_form__may_goals_allocate_heap_2_p_0(
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
      MR_Word Goal_3 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Goals_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Var_7;

      hlds__goal_form__may_goal_allocate_heap_2_p_0(Goal_3, &Var_7);
      succeeded = ((MR_Integer) 1 == Var_7);
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
    MR_Word GoalExpr_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));

    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) GoalExpr_3)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word SubGoal_39 = (MR_Word) ((MR_Word) (GoalExpr_3));
          MR_Word next_value_of_HeadVar__1_1 = SubGoal_39;

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
        switch (((MR_Integer) ((MR_hl_field(3, GoalExpr_3, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
            HeadVar__2_2 = (MR_Integer) 1;
            break;
          case (MR_Integer) 2:
            {
              MR_Word ConjType_28 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr_3, (MR_Integer) 1))) & (MR_Integer) 1);
              MR_Word Goals_29 = ((MR_Word) ((MR_hl_field(3, GoalExpr_3, (MR_Integer) 2))));

              switch (ConjType_28) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  HeadVar__2_2 = (MR_Integer) 0;
                  break;
                case (MR_Integer) 0:
                  HeadVar__2_2 = hlds__goal_form__goal_is_flat_list_1_f_0(Goals_29);
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
              MR_Word Reason_40 = ((MR_Word) ((MR_hl_field(3, GoalExpr_3, (MR_Integer) 1))));
              MR_Word SubGoal_43 = ((MR_Word) ((MR_hl_field(3, GoalExpr_3, (MR_Integer) 2))));
              MR_Word FGT_42;

              succeeded = ((((MR_tag((MR_Word) Reason_40)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Reason_40, (MR_Integer) 0)))) == (MR_Integer) 6)));
              if (succeeded)
              {
                FGT_42 = ((MR_Unsigned) ((MR_hl_field(3, Reason_40, (MR_Integer) 2))) & (MR_Integer) 3);
                switch (FGT_42) {
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
                MR_Word next_value_of_HeadVar__1_1 = SubGoal_43;

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
      MR_Word Goal_3 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Goals_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word GoalExpr_7 = ((MR_Word) ((MR_hl_field(0, Goal_3, (MR_Integer) 0))));

      switch (MR_tag((MR_Word) GoalExpr_7)) {
        default:
          succeeded = MR_FALSE;
          break;
        case (MR_Integer) 0:
          {
            MR_Word SubGoal_43 = (MR_Word) ((MR_Word) (GoalExpr_7));
            MR_Word Var_59;

            Var_59 = hlds__goal_form__goal_is_flat_1_f_0(SubGoal_43);
            succeeded = (Var_59 == (MR_Integer) 1);
          }
          break;
        case (MR_Integer) 1:
        case (MR_Integer) 2:
          succeeded = MR_TRUE;
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(3, GoalExpr_7, (MR_Integer) 0))))) {
            default:
              succeeded = MR_FALSE;
              break;
            case (MR_Integer) 0:
            case (MR_Integer) 1:
              succeeded = MR_TRUE;
              break;
            case (MR_Integer) 2:
              {
                MR_Word ConjType_32 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr_7, (MR_Integer) 1))) & (MR_Integer) 1);
                MR_Word Goals_33 = ((MR_Word) ((MR_hl_field(3, GoalExpr_7, (MR_Integer) 2))));
                MR_Word Var_54;

                succeeded = (ConjType_32 == (MR_Integer) 0);
                if (succeeded)
                {
                  Var_54 = hlds__goal_form__goal_is_flat_list_1_f_0(Goals_33);
                  succeeded = (Var_54 == (MR_Integer) 1);
                }
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word Reason_44 = ((MR_Word) ((MR_hl_field(3, GoalExpr_7, (MR_Integer) 1))));
                MR_Word SubGoal_47 = ((MR_Word) ((MR_hl_field(3, GoalExpr_7, (MR_Integer) 2))));
                MR_Word FGT_46;

                succeeded = ((((MR_tag((MR_Word) Reason_44)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Reason_44, (MR_Integer) 0)))) == (MR_Integer) 6)));
                if (succeeded)
                {
                  FGT_46 = ((MR_Unsigned) ((MR_hl_field(3, Reason_44, (MR_Integer) 2))) & (MR_Integer) 3);
                  switch (FGT_46) {
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
                  MR_Word Var_62;

                  Var_62 = hlds__goal_form__goal_is_flat_1_f_0(SubGoal_47);
                  succeeded = (Var_62 == (MR_Integer) 1);
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
  MR_bool succeeded;

  succeeded = hlds__goal_form__goal_cannot_loop_or_throw_1_p_0(Goal_2);
  succeeded = !(succeeded);
  return succeeded;
}

MR_bool MR_CALL 
hlds__goal_form__goal_cannot_loop_or_throw_1_p_0(
  MR_Word Goal_2)
{
  MR_bool succeeded;
  MR_Word Var_3;
  MR_Word Var_6;
  MR_Word GoalExpr_7;
  MR_Word GoalInfo_8;
  MR_Word Determinism_9;

  Var_3 = hlds__goal_form__goal_can_loop_func_2_f_0((MR_Word) ((MR_Unsigned) 0U), Goal_2);
  succeeded = (Var_3 == (MR_Integer) 0);
  if (succeeded)
  {
    Var_6 = (MR_Word) ((MR_Unsigned) 0U);
    GoalExpr_7 = ((MR_Word) ((MR_hl_field(0, Goal_2, (MR_Integer) 0))));
    GoalInfo_8 = ((MR_Word) ((MR_hl_field(0, Goal_2, (MR_Integer) 1))));
    Determinism_9 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(GoalInfo_8);
    succeeded = (Determinism_9 == (MR_Integer) 6);
    if (succeeded)
      succeeded = MR_FALSE;
    else
      switch (MR_tag((MR_Word) GoalExpr_7)) {
        default:
          succeeded = MR_FALSE;
          break;
        case (MR_Integer) 0:
          {
            MR_Word SubGoal_69 = (MR_Word) ((MR_Word) (GoalExpr_7));
            MR_Word Var_124;

            Var_124 = hlds__goal_form__goal_can_throw_func_2_f_0(Var_6, SubGoal_69);
            succeeded = (Var_124 == (MR_Integer) 0);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Uni_13 = ((MR_Word) ((MR_hl_field(1, GoalExpr_7, (MR_Integer) 3))));

            if (((((((((MR_tag((MR_Word) Uni_13)) == (MR_Integer) 2)) || (((MR_tag((MR_Word) Uni_13)) == (MR_Integer) 0)))) || (((MR_tag((MR_Word) Uni_13)) == (MR_Integer) 1)))) || (((((MR_tag((MR_Word) Uni_13)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Uni_13, (MR_Integer) 0)))) == (MR_Integer) 0))))))
              succeeded = MR_TRUE;
            else
              succeeded = MR_FALSE;
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(3, GoalExpr_7, (MR_Integer) 0))))) {
            default:
              succeeded = MR_FALSE;
              break;
            case (MR_Integer) 1:
              {
                MR_Word Attributes_47 = ((MR_Word) ((MR_hl_field(3, GoalExpr_7, (MR_Integer) 1))));
                MR_Word ExceptionStatus_54;
                MR_Word Var_95;

                ExceptionStatus_54 = parse_tree__prog_data_foreign__get_may_throw_exception_1_f_0(Attributes_47);
                switch (ExceptionStatus_54) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 1:
                    {
                      MR_Word Var_87;

                      Var_87 = parse_tree__prog_data_foreign__get_may_call_mercury_1_f_0(Attributes_47);
                      succeeded = (Var_87 == (MR_Integer) 1);
                    }
                    break;
                  case (MR_Integer) 0:
                    succeeded = MR_TRUE;
                    break;
                }
                if (succeeded)
                {
                  Var_95 = (MR_Integer) 0;
                  succeeded = (Var_95 == (MR_Integer) 0);
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word Goals_61 = ((MR_Word) ((MR_hl_field(3, GoalExpr_7, (MR_Integer) 2))));
                MR_Word Var_112;

                Var_112 = hlds__goal_form__goals_can_throw_2_f_0(Var_6, Goals_61);
                succeeded = (Var_112 == (MR_Integer) 0);
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word Goals_93 = ((MR_Word) ((MR_hl_field(3, GoalExpr_7, (MR_Integer) 1))));
                MR_Word Var_113;

                Var_113 = hlds__goal_form__goals_can_throw_2_f_0(Var_6, Goals_93);
                succeeded = (Var_113 == (MR_Integer) 0);
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Word Cases_64 = ((MR_Word) ((MR_hl_field(3, GoalExpr_7, (MR_Integer) 3))));
                MR_Word Var_138;

                Var_138 = hlds__goal_form__case_list_can_throw_2_f_0(Var_6, Cases_64);
                succeeded = (Var_138 == (MR_Integer) 0);
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word Reason_70 = ((MR_Word) ((MR_hl_field(3, GoalExpr_7, (MR_Integer) 1))));
                MR_Word SubGoal_92 = ((MR_Word) ((MR_hl_field(3, GoalExpr_7, (MR_Integer) 2))));
                MR_Word FGT_72;

                succeeded = ((((MR_tag((MR_Word) Reason_70)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Reason_70, (MR_Integer) 0)))) == (MR_Integer) 6)));
                if (succeeded)
                {
                  FGT_72 = ((MR_Unsigned) ((MR_hl_field(3, Reason_70, (MR_Integer) 2))) & (MR_Integer) 3);
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
                  succeeded = MR_TRUE;
                else
                {
                  MR_Word Var_129;

                  Var_129 = hlds__goal_form__goal_can_throw_func_2_f_0(Var_6, SubGoal_92);
                  succeeded = (Var_129 == (MR_Integer) 0);
                }
              }
              break;
            case (MR_Integer) 6:
              {
                MR_Word Cond_66 = ((MR_Word) ((MR_hl_field(3, GoalExpr_7, (MR_Integer) 2))));
                MR_Word Then_67 = ((MR_Word) ((MR_hl_field(3, GoalExpr_7, (MR_Integer) 3))));
                MR_Word Else_68 = ((MR_Word) ((MR_hl_field(3, GoalExpr_7, (MR_Integer) 4))));
                MR_Word Var_88;

                Var_88 = hlds__goal_form__goal_can_throw_func_2_f_0(Var_6, Cond_66);
                succeeded = (Var_88 == (MR_Integer) 1);
                if (succeeded)
                  succeeded = MR_FALSE;
                else
                {
                  MR_Word Var_89;

                  Var_89 = hlds__goal_form__goal_can_throw_func_2_f_0(Var_6, Then_67);
                  succeeded = (Var_89 == (MR_Integer) 1);
                  if (succeeded)
                    succeeded = MR_FALSE;
                  else
                  {
                    MR_Word Var_120;

                    Var_120 = hlds__goal_form__goal_can_throw_func_2_f_0(Var_6, Else_68);
                    succeeded = (Var_120 == (MR_Integer) 0);
                  }
                }
              }
              break;
            case (MR_Integer) 7:
              {
                MR_Word ShortHand_73 = ((MR_Word) ((MR_hl_field(3, GoalExpr_7, (MR_Integer) 1))));
                MR_String Var_90;
                MR_String Var_91;

                succeeded = ((MR_tag((MR_Word) ShortHand_73)) == (MR_Integer) 0);
                if (succeeded)
                {
                  Var_90 = (MR_String) "function \140hlds.goal_form.goal_expr_can_throw\'/2";
                  Var_91 = (MR_String) "bi_implication";
                  mercury__require__unexpected_2_p_0(Var_90, Var_91);
                  succeeded = MR_TRUE;
                }
              }
              break;
          }
          break;
      }
  }
  return succeeded;
}

MR_bool MR_CALL 
hlds__goal_form__goal_can_loop_or_throw_term_info_2_p_0(
  MR_Word ModuleInfo_3,
  MR_Word Goal_4)
{
  MR_bool succeeded;

  succeeded = hlds__goal_form__goal_cannot_loop_or_throw_term_info_2_p_0(ModuleInfo_3, Goal_4);
  succeeded = !(succeeded);
  return succeeded;
}

MR_bool MR_CALL 
hlds__goal_form__goal_cannot_loop_or_throw_term_info_2_p_0(
  MR_Word ModuleInfo_3,
  MR_Word Goal_4)
{
  MR_bool succeeded;
  MR_Word Var_5;
  MR_Word Var_6;
  MR_Word GoalExpr_9;
  MR_Word GoalInfo_10;
  MR_Word Determinism_11;

  {
    Var_6 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_6, 0) = ((MR_Box) (ModuleInfo_3));
  }
  Var_5 = hlds__goal_form__goal_can_loop_func_2_f_0(Var_6, Goal_4);
  succeeded = (Var_5 == (MR_Integer) 0);
  if (succeeded)
  {
    GoalExpr_9 = ((MR_Word) ((MR_hl_field(0, Goal_4, (MR_Integer) 0))));
    GoalInfo_10 = ((MR_Word) ((MR_hl_field(0, Goal_4, (MR_Integer) 1))));
    Determinism_11 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(GoalInfo_10);
    succeeded = (Determinism_11 == (MR_Integer) 6);
    if (succeeded)
      succeeded = MR_FALSE;
    else
      switch (MR_tag((MR_Word) GoalExpr_9)) {
        default:
          succeeded = MR_FALSE;
          break;
        case (MR_Integer) 0:
          {
            MR_Word SubGoal_71 = (MR_Word) ((MR_Word) (GoalExpr_9));
            MR_Word Var_127;

            Var_127 = hlds__goal_form__goal_can_throw_func_2_f_0(Var_6, SubGoal_71);
            succeeded = (Var_127 == (MR_Integer) 0);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Uni_15 = ((MR_Word) ((MR_hl_field(1, GoalExpr_9, (MR_Integer) 3))));

            if (((((((((MR_tag((MR_Word) Uni_15)) == (MR_Integer) 2)) || (((MR_tag((MR_Word) Uni_15)) == (MR_Integer) 0)))) || (((MR_tag((MR_Word) Uni_15)) == (MR_Integer) 1)))) || (((((MR_tag((MR_Word) Uni_15)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Uni_15, (MR_Integer) 0)))) == (MR_Integer) 0))))))
              succeeded = MR_TRUE;
            else
              succeeded = MR_FALSE;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word PredId_37 = ((MR_Word) ((MR_hl_field(2, GoalExpr_9, (MR_Integer) 0))));
            MR_Integer ProcId_38 = ((MR_Integer) ((MR_hl_field(2, GoalExpr_9, (MR_Integer) 1))));
            MR_Word ModuleInfo_43;
            MR_Word ProcInfo_45;
            MR_Word MaybeExceptionInfo_46;
            MR_Word ExceptionInfo_47;
            MR_Word Var_88;
            MR_Word Var_102;
            MR_Word _PredInfo_44;

            succeeded = (Var_6 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              ModuleInfo_43 = ((MR_Word) ((MR_hl_field(1, Var_6, (MR_Integer) 0))));
              hlds__hlds_module__module_info_pred_proc_info_5_p_0(ModuleInfo_43, PredId_37, ProcId_38, &_PredInfo_44, &ProcInfo_45);
              hlds__hlds_pred__proc_info_get_exception_info_2_p_0(ProcInfo_45, &MaybeExceptionInfo_46);
              succeeded = (MaybeExceptionInfo_46 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                ExceptionInfo_47 = ((MR_Word) ((MR_hl_field(1, MaybeExceptionInfo_46, (MR_Integer) 0))));
                Var_88 = ((MR_Word) ((MR_hl_field(0, ExceptionInfo_47, (MR_Integer) 0))));
                succeeded = (Var_88 == (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  Var_102 = (MR_Integer) 0;
                  succeeded = (Var_102 == (MR_Integer) 0);
                }
              }
            }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(3, GoalExpr_9, (MR_Integer) 0))))) {
            default:
              succeeded = MR_FALSE;
              break;
            case (MR_Integer) 1:
              {
                MR_Word Attributes_49 = ((MR_Word) ((MR_hl_field(3, GoalExpr_9, (MR_Integer) 1))));
                MR_Word ExceptionStatus_56;
                MR_Word Var_97;

                ExceptionStatus_56 = parse_tree__prog_data_foreign__get_may_throw_exception_1_f_0(Attributes_49);
                switch (ExceptionStatus_56) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 1:
                    {
                      MR_Word Var_89;

                      Var_89 = parse_tree__prog_data_foreign__get_may_call_mercury_1_f_0(Attributes_49);
                      succeeded = (Var_89 == (MR_Integer) 1);
                    }
                    break;
                  case (MR_Integer) 0:
                    succeeded = MR_TRUE;
                    break;
                }
                if (succeeded)
                {
                  Var_97 = (MR_Integer) 0;
                  succeeded = (Var_97 == (MR_Integer) 0);
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word Goals_63 = ((MR_Word) ((MR_hl_field(3, GoalExpr_9, (MR_Integer) 2))));
                MR_Word Var_115;

                Var_115 = hlds__goal_form__goals_can_throw_2_f_0(Var_6, Goals_63);
                succeeded = (Var_115 == (MR_Integer) 0);
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word Goals_95 = ((MR_Word) ((MR_hl_field(3, GoalExpr_9, (MR_Integer) 1))));
                MR_Word Var_116;

                Var_116 = hlds__goal_form__goals_can_throw_2_f_0(Var_6, Goals_95);
                succeeded = (Var_116 == (MR_Integer) 0);
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Word Cases_66 = ((MR_Word) ((MR_hl_field(3, GoalExpr_9, (MR_Integer) 3))));
                MR_Word Var_145;

                Var_145 = hlds__goal_form__case_list_can_throw_2_f_0(Var_6, Cases_66);
                succeeded = (Var_145 == (MR_Integer) 0);
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word Reason_72 = ((MR_Word) ((MR_hl_field(3, GoalExpr_9, (MR_Integer) 1))));
                MR_Word SubGoal_94 = ((MR_Word) ((MR_hl_field(3, GoalExpr_9, (MR_Integer) 2))));
                MR_Word FGT_74;

                succeeded = ((((MR_tag((MR_Word) Reason_72)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Reason_72, (MR_Integer) 0)))) == (MR_Integer) 6)));
                if (succeeded)
                {
                  FGT_74 = ((MR_Unsigned) ((MR_hl_field(3, Reason_72, (MR_Integer) 2))) & (MR_Integer) 3);
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
                  succeeded = MR_TRUE;
                else
                {
                  MR_Word Var_136;

                  Var_136 = hlds__goal_form__goal_can_throw_func_2_f_0(Var_6, SubGoal_94);
                  succeeded = (Var_136 == (MR_Integer) 0);
                }
              }
              break;
            case (MR_Integer) 6:
              {
                MR_Word Cond_68 = ((MR_Word) ((MR_hl_field(3, GoalExpr_9, (MR_Integer) 2))));
                MR_Word Then_69 = ((MR_Word) ((MR_hl_field(3, GoalExpr_9, (MR_Integer) 3))));
                MR_Word Else_70 = ((MR_Word) ((MR_hl_field(3, GoalExpr_9, (MR_Integer) 4))));
                MR_Word Var_90;

                Var_90 = hlds__goal_form__goal_can_throw_func_2_f_0(Var_6, Cond_68);
                succeeded = (Var_90 == (MR_Integer) 1);
                if (succeeded)
                  succeeded = MR_FALSE;
                else
                {
                  MR_Word Var_91;

                  Var_91 = hlds__goal_form__goal_can_throw_func_2_f_0(Var_6, Then_69);
                  succeeded = (Var_91 == (MR_Integer) 1);
                  if (succeeded)
                    succeeded = MR_FALSE;
                  else
                  {
                    MR_Word Var_123;

                    Var_123 = hlds__goal_form__goal_can_throw_func_2_f_0(Var_6, Else_70);
                    succeeded = (Var_123 == (MR_Integer) 0);
                  }
                }
              }
              break;
            case (MR_Integer) 7:
              {
                MR_Word ShortHand_75 = ((MR_Word) ((MR_hl_field(3, GoalExpr_9, (MR_Integer) 1))));
                MR_String Var_92;
                MR_String Var_93;

                succeeded = ((MR_tag((MR_Word) ShortHand_75)) == (MR_Integer) 0);
                if (succeeded)
                {
                  Var_92 = (MR_String) "function \140hlds.goal_form.goal_expr_can_throw\'/2";
                  Var_93 = (MR_String) "bi_implication";
                  mercury__require__unexpected_2_p_0(Var_92, Var_93);
                  succeeded = MR_TRUE;
                }
              }
              break;
          }
          break;
      }
  }
  return succeeded;
}

MR_bool MR_CALL 
hlds__goal_form__goal_can_throw_term_info_2_p_0(
  MR_Word ModuleInfo_3,
  MR_Word Goal_4)
{
  MR_bool succeeded;
  MR_Word Var_6;
  MR_Word GoalExpr_7 = ((MR_Word) ((MR_hl_field(0, Goal_4, (MR_Integer) 0))));
  MR_Word GoalInfo_8 = ((MR_Word) ((MR_hl_field(0, Goal_4, (MR_Integer) 1))));
  MR_Word Determinism_9;

  {
    Var_6 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_6, 0) = ((MR_Box) (ModuleInfo_3));
  }
  Determinism_9 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(GoalInfo_8);
  succeeded = (Determinism_9 == (MR_Integer) 6);
  if (succeeded)
    succeeded = MR_TRUE;
  else
    switch (MR_tag((MR_Word) GoalExpr_7)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word SubGoal_69 = (MR_Word) ((MR_Word) (GoalExpr_7));
          MR_Word Var_125;

          Var_125 = hlds__goal_form__goal_can_throw_func_2_f_0(Var_6, SubGoal_69);
          succeeded = (Var_125 == (MR_Integer) 1);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Uni_13 = ((MR_Word) ((MR_hl_field(1, GoalExpr_7, (MR_Integer) 3))));

          succeeded = ((((MR_tag((MR_Word) Uni_13)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Uni_13, (MR_Integer) 0)))) == (MR_Integer) 1)));
          if (succeeded)
          {
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word PredId_35 = ((MR_Word) ((MR_hl_field(2, GoalExpr_7, (MR_Integer) 0))));
          MR_Integer ProcId_36 = ((MR_Integer) ((MR_hl_field(2, GoalExpr_7, (MR_Integer) 1))));
          MR_Word ModuleInfo_41;
          MR_Word ProcInfo_43;
          MR_Word MaybeExceptionInfo_44;
          MR_Word ExceptionInfo_45;
          MR_Word Var_86;
          MR_Word _PredInfo_42;

          succeeded = (Var_6 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            ModuleInfo_41 = ((MR_Word) ((MR_hl_field(1, Var_6, (MR_Integer) 0))));
            hlds__hlds_module__module_info_pred_proc_info_5_p_0(ModuleInfo_41, PredId_35, ProcId_36, &_PredInfo_42, &ProcInfo_43);
            hlds__hlds_pred__proc_info_get_exception_info_2_p_0(ProcInfo_43, &MaybeExceptionInfo_44);
            succeeded = (MaybeExceptionInfo_44 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              ExceptionInfo_45 = ((MR_Word) ((MR_hl_field(1, MaybeExceptionInfo_44, (MR_Integer) 0))));
              Var_86 = ((MR_Word) ((MR_hl_field(0, ExceptionInfo_45, (MR_Integer) 0))));
              succeeded = (Var_86 == (MR_Word) ((MR_Unsigned) 0U));
            }
          }
          if (succeeded)
            succeeded = MR_FALSE;
          else
            succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, GoalExpr_7, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            succeeded = MR_TRUE;
            break;
          case (MR_Integer) 1:
            {
              MR_Word Attributes_47 = ((MR_Word) ((MR_hl_field(3, GoalExpr_7, (MR_Integer) 1))));
              MR_Word ExceptionStatus_54;

              ExceptionStatus_54 = parse_tree__prog_data_foreign__get_may_throw_exception_1_f_0(Attributes_47);
              switch (ExceptionStatus_54) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  {
                    MR_Word Var_87;

                    Var_87 = parse_tree__prog_data_foreign__get_may_call_mercury_1_f_0(Attributes_47);
                    succeeded = (Var_87 == (MR_Integer) 1);
                  }
                  break;
                case (MR_Integer) 0:
                  succeeded = MR_TRUE;
                  break;
              }
              if (succeeded)
                succeeded = MR_FALSE;
              else
                succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word Goals_61 = ((MR_Word) ((MR_hl_field(3, GoalExpr_7, (MR_Integer) 2))));
              MR_Word Var_113;

              Var_113 = hlds__goal_form__goals_can_throw_2_f_0(Var_6, Goals_61);
              succeeded = (Var_113 == (MR_Integer) 1);
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Goals_93 = ((MR_Word) ((MR_hl_field(3, GoalExpr_7, (MR_Integer) 1))));
              MR_Word Var_114;

              Var_114 = hlds__goal_form__goals_can_throw_2_f_0(Var_6, Goals_93);
              succeeded = (Var_114 == (MR_Integer) 1);
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Cases_64 = ((MR_Word) ((MR_hl_field(3, GoalExpr_7, (MR_Integer) 3))));
              MR_Word Var_143;

              Var_143 = hlds__goal_form__case_list_can_throw_2_f_0(Var_6, Cases_64);
              succeeded = (Var_143 == (MR_Integer) 1);
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word Reason_70 = ((MR_Word) ((MR_hl_field(3, GoalExpr_7, (MR_Integer) 1))));
              MR_Word SubGoal_92 = ((MR_Word) ((MR_hl_field(3, GoalExpr_7, (MR_Integer) 2))));
              MR_Word FGT_72;

              succeeded = ((((MR_tag((MR_Word) Reason_70)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Reason_70, (MR_Integer) 0)))) == (MR_Integer) 6)));
              if (succeeded)
              {
                FGT_72 = ((MR_Unsigned) ((MR_hl_field(3, Reason_70, (MR_Integer) 2))) & (MR_Integer) 3);
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
                succeeded = MR_FALSE;
              else
              {
                MR_Word Var_134;

                Var_134 = hlds__goal_form__goal_can_throw_func_2_f_0(Var_6, SubGoal_92);
                succeeded = (Var_134 == (MR_Integer) 1);
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word Cond_66 = ((MR_Word) ((MR_hl_field(3, GoalExpr_7, (MR_Integer) 2))));
              MR_Word Then_67 = ((MR_Word) ((MR_hl_field(3, GoalExpr_7, (MR_Integer) 3))));
              MR_Word Else_68 = ((MR_Word) ((MR_hl_field(3, GoalExpr_7, (MR_Integer) 4))));
              MR_Word Var_88;

              Var_88 = hlds__goal_form__goal_can_throw_func_2_f_0(Var_6, Cond_66);
              succeeded = (Var_88 == (MR_Integer) 1);
              if (succeeded)
                succeeded = MR_TRUE;
              else
              {
                MR_Word Var_89;

                Var_89 = hlds__goal_form__goal_can_throw_func_2_f_0(Var_6, Then_67);
                succeeded = (Var_89 == (MR_Integer) 1);
                if (succeeded)
                  succeeded = MR_TRUE;
                else
                {
                  MR_Word Var_121;

                  Var_121 = hlds__goal_form__goal_can_throw_func_2_f_0(Var_6, Else_68);
                  succeeded = (Var_121 == (MR_Integer) 1);
                }
              }
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word ShortHand_73 = ((MR_Word) ((MR_hl_field(3, GoalExpr_7, (MR_Integer) 1))));

              switch (MR_tag((MR_Word) ShortHand_73)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  mercury__require__unexpected_2_p_0((MR_String) "function \140hlds.goal_form.goal_expr_can_throw\'/2", (MR_String) "bi_implication");
                  break;
                case (MR_Integer) 1:
                  {
                  }
                  break;
                case (MR_Integer) 2:
                  {
                  }
                  break;
              }
              succeeded = MR_TRUE;
            }
            break;
        }
        break;
    }
  return succeeded;
}

MR_bool MR_CALL 
hlds__goal_form__goal_cannot_throw_term_info_2_p_0(
  MR_Word ModuleInfo_3,
  MR_Word Goal_4)
{
  MR_bool succeeded;
  MR_Word Var_6;
  MR_Word GoalExpr_7 = ((MR_Word) ((MR_hl_field(0, Goal_4, (MR_Integer) 0))));
  MR_Word GoalInfo_8 = ((MR_Word) ((MR_hl_field(0, Goal_4, (MR_Integer) 1))));
  MR_Word Determinism_9;

  {
    Var_6 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_6, 0) = ((MR_Box) (ModuleInfo_3));
  }
  Determinism_9 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(GoalInfo_8);
  succeeded = (Determinism_9 == (MR_Integer) 6);
  if (succeeded)
    succeeded = MR_FALSE;
  else
    switch (MR_tag((MR_Word) GoalExpr_7)) {
      default:
        succeeded = MR_FALSE;
        break;
      case (MR_Integer) 0:
        {
          MR_Word SubGoal_69 = (MR_Word) ((MR_Word) (GoalExpr_7));
          MR_Word Var_125;

          Var_125 = hlds__goal_form__goal_can_throw_func_2_f_0(Var_6, SubGoal_69);
          succeeded = (Var_125 == (MR_Integer) 0);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Uni_13 = ((MR_Word) ((MR_hl_field(1, GoalExpr_7, (MR_Integer) 3))));

          if (((((((((MR_tag((MR_Word) Uni_13)) == (MR_Integer) 2)) || (((MR_tag((MR_Word) Uni_13)) == (MR_Integer) 0)))) || (((MR_tag((MR_Word) Uni_13)) == (MR_Integer) 1)))) || (((((MR_tag((MR_Word) Uni_13)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Uni_13, (MR_Integer) 0)))) == (MR_Integer) 0))))))
            succeeded = MR_TRUE;
          else
            succeeded = MR_FALSE;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word PredId_35 = ((MR_Word) ((MR_hl_field(2, GoalExpr_7, (MR_Integer) 0))));
          MR_Integer ProcId_36 = ((MR_Integer) ((MR_hl_field(2, GoalExpr_7, (MR_Integer) 1))));
          MR_Word ModuleInfo_41;
          MR_Word ProcInfo_43;
          MR_Word MaybeExceptionInfo_44;
          MR_Word ExceptionInfo_45;
          MR_Word Var_86;
          MR_Word _PredInfo_42;

          succeeded = (Var_6 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            ModuleInfo_41 = ((MR_Word) ((MR_hl_field(1, Var_6, (MR_Integer) 0))));
            hlds__hlds_module__module_info_pred_proc_info_5_p_0(ModuleInfo_41, PredId_35, ProcId_36, &_PredInfo_42, &ProcInfo_43);
            hlds__hlds_pred__proc_info_get_exception_info_2_p_0(ProcInfo_43, &MaybeExceptionInfo_44);
            succeeded = (MaybeExceptionInfo_44 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              ExceptionInfo_45 = ((MR_Word) ((MR_hl_field(1, MaybeExceptionInfo_44, (MR_Integer) 0))));
              Var_86 = ((MR_Word) ((MR_hl_field(0, ExceptionInfo_45, (MR_Integer) 0))));
              succeeded = (Var_86 == (MR_Word) ((MR_Unsigned) 0U));
            }
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, GoalExpr_7, (MR_Integer) 0))))) {
          default:
            succeeded = MR_FALSE;
            break;
          case (MR_Integer) 1:
            {
              MR_Word Attributes_47 = ((MR_Word) ((MR_hl_field(3, GoalExpr_7, (MR_Integer) 1))));
              MR_Word ExceptionStatus_54;

              ExceptionStatus_54 = parse_tree__prog_data_foreign__get_may_throw_exception_1_f_0(Attributes_47);
              switch (ExceptionStatus_54) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  {
                    MR_Word Var_87;

                    Var_87 = parse_tree__prog_data_foreign__get_may_call_mercury_1_f_0(Attributes_47);
                    succeeded = (Var_87 == (MR_Integer) 1);
                  }
                  break;
                case (MR_Integer) 0:
                  succeeded = MR_TRUE;
                  break;
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word Goals_61 = ((MR_Word) ((MR_hl_field(3, GoalExpr_7, (MR_Integer) 2))));
              MR_Word Var_113;

              Var_113 = hlds__goal_form__goals_can_throw_2_f_0(Var_6, Goals_61);
              succeeded = (Var_113 == (MR_Integer) 0);
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Goals_93 = ((MR_Word) ((MR_hl_field(3, GoalExpr_7, (MR_Integer) 1))));
              MR_Word Var_114;

              Var_114 = hlds__goal_form__goals_can_throw_2_f_0(Var_6, Goals_93);
              succeeded = (Var_114 == (MR_Integer) 0);
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Cases_64 = ((MR_Word) ((MR_hl_field(3, GoalExpr_7, (MR_Integer) 3))));
              MR_Word Var_143;

              Var_143 = hlds__goal_form__case_list_can_throw_2_f_0(Var_6, Cases_64);
              succeeded = (Var_143 == (MR_Integer) 0);
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word Reason_70 = ((MR_Word) ((MR_hl_field(3, GoalExpr_7, (MR_Integer) 1))));
              MR_Word SubGoal_92 = ((MR_Word) ((MR_hl_field(3, GoalExpr_7, (MR_Integer) 2))));
              MR_Word FGT_72;

              succeeded = ((((MR_tag((MR_Word) Reason_70)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Reason_70, (MR_Integer) 0)))) == (MR_Integer) 6)));
              if (succeeded)
              {
                FGT_72 = ((MR_Unsigned) ((MR_hl_field(3, Reason_70, (MR_Integer) 2))) & (MR_Integer) 3);
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
                succeeded = MR_TRUE;
              else
              {
                MR_Word Var_134;

                Var_134 = hlds__goal_form__goal_can_throw_func_2_f_0(Var_6, SubGoal_92);
                succeeded = (Var_134 == (MR_Integer) 0);
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word Cond_66 = ((MR_Word) ((MR_hl_field(3, GoalExpr_7, (MR_Integer) 2))));
              MR_Word Then_67 = ((MR_Word) ((MR_hl_field(3, GoalExpr_7, (MR_Integer) 3))));
              MR_Word Else_68 = ((MR_Word) ((MR_hl_field(3, GoalExpr_7, (MR_Integer) 4))));
              MR_Word Var_88;

              Var_88 = hlds__goal_form__goal_can_throw_func_2_f_0(Var_6, Cond_66);
              succeeded = (Var_88 == (MR_Integer) 1);
              if (succeeded)
                succeeded = MR_FALSE;
              else
              {
                MR_Word Var_89;

                Var_89 = hlds__goal_form__goal_can_throw_func_2_f_0(Var_6, Then_67);
                succeeded = (Var_89 == (MR_Integer) 1);
                if (succeeded)
                  succeeded = MR_FALSE;
                else
                {
                  MR_Word Var_121;

                  Var_121 = hlds__goal_form__goal_can_throw_func_2_f_0(Var_6, Else_68);
                  succeeded = (Var_121 == (MR_Integer) 0);
                }
              }
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word ShortHand_73 = ((MR_Word) ((MR_hl_field(3, GoalExpr_7, (MR_Integer) 1))));
              MR_String Var_90;
              MR_String Var_91;

              succeeded = ((MR_tag((MR_Word) ShortHand_73)) == (MR_Integer) 0);
              if (succeeded)
              {
                Var_90 = (MR_String) "function \140hlds.goal_form.goal_expr_can_throw\'/2";
                Var_91 = (MR_String) "bi_implication";
                mercury__require__unexpected_2_p_0(Var_90, Var_91);
                succeeded = MR_TRUE;
              }
            }
            break;
        }
        break;
    }
  return succeeded;
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
    MR_Word GoalExpr_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word GoalInfo_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
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
            MR_Word SubGoal_68 = (MR_Word) ((MR_Word) (GoalExpr_5));
            MR_Word next_value_of_HeadVar__2_2 = SubGoal_68;

            // direct tailcall eliminated
            ;
            HeadVar__2_2 = next_value_of_HeadVar__2_2;
            continue;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Uni_12 = ((MR_Word) ((MR_hl_field(1, GoalExpr_5, (MR_Integer) 3))));

            switch (MR_tag((MR_Word) Uni_12)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
              case (MR_Integer) 1:
              case (MR_Integer) 2:
                CanThrow_7 = (MR_Integer) 0;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(3, Uni_12, (MR_Integer) 0))))) {
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
            MR_Word PredId_34 = ((MR_Word) ((MR_hl_field(2, GoalExpr_5, (MR_Integer) 0))));
            MR_Integer ProcId_35 = ((MR_Integer) ((MR_hl_field(2, GoalExpr_5, (MR_Integer) 1))));
            MR_Word ModuleInfo_40;
            MR_Word ProcInfo_42;
            MR_Word MaybeExceptionInfo_43;
            MR_Word ExceptionInfo_44;
            MR_Word Var_85;
            MR_Word _PredInfo_41;

            succeeded = (MaybeModuleInfo_4 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              ModuleInfo_40 = ((MR_Word) ((MR_hl_field(1, MaybeModuleInfo_4, (MR_Integer) 0))));
              hlds__hlds_module__module_info_pred_proc_info_5_p_0(ModuleInfo_40, PredId_34, ProcId_35, &_PredInfo_41, &ProcInfo_42);
              hlds__hlds_pred__proc_info_get_exception_info_2_p_0(ProcInfo_42, &MaybeExceptionInfo_43);
              succeeded = (MaybeExceptionInfo_43 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                ExceptionInfo_44 = ((MR_Word) ((MR_hl_field(1, MaybeExceptionInfo_43, (MR_Integer) 0))));
                Var_85 = ((MR_Word) ((MR_hl_field(0, ExceptionInfo_44, (MR_Integer) 0))));
                succeeded = (Var_85 == (MR_Word) ((MR_Unsigned) 0U));
              }
            }
            if (succeeded)
              CanThrow_7 = (MR_Integer) 0;
            else
              CanThrow_7 = (MR_Integer) 1;
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(3, GoalExpr_5, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              CanThrow_7 = (MR_Integer) 1;
              break;
            case (MR_Integer) 1:
              {
                MR_Word Attributes_46 = ((MR_Word) ((MR_hl_field(3, GoalExpr_5, (MR_Integer) 1))));
                MR_Word ExceptionStatus_53;

                ExceptionStatus_53 = parse_tree__prog_data_foreign__get_may_throw_exception_1_f_0(Attributes_46);
                switch (ExceptionStatus_53) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 1:
                    {
                      MR_Word Var_86;

                      Var_86 = parse_tree__prog_data_foreign__get_may_call_mercury_1_f_0(Attributes_46);
                      succeeded = (Var_86 == (MR_Integer) 1);
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
                MR_Word Goals_60 = ((MR_Word) ((MR_hl_field(3, GoalExpr_5, (MR_Integer) 2))));

                CanThrow_7 = hlds__goal_form__goals_can_throw_2_f_0(MaybeModuleInfo_4, Goals_60);
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word Goals_92 = ((MR_Word) ((MR_hl_field(3, GoalExpr_5, (MR_Integer) 1))));

                CanThrow_7 = hlds__goal_form__goals_can_throw_2_f_0(MaybeModuleInfo_4, Goals_92);
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Word Cases_63 = ((MR_Word) ((MR_hl_field(3, GoalExpr_5, (MR_Integer) 3))));

                CanThrow_7 = hlds__goal_form__case_list_can_throw_2_f_0(MaybeModuleInfo_4, Cases_63);
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word Reason_69 = ((MR_Word) ((MR_hl_field(3, GoalExpr_5, (MR_Integer) 1))));
                MR_Word SubGoal_91 = ((MR_Word) ((MR_hl_field(3, GoalExpr_5, (MR_Integer) 2))));
                MR_Word FGT_71;

                succeeded = ((((MR_tag((MR_Word) Reason_69)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Reason_69, (MR_Integer) 0)))) == (MR_Integer) 6)));
                if (succeeded)
                {
                  FGT_71 = ((MR_Unsigned) ((MR_hl_field(3, Reason_69, (MR_Integer) 2))) & (MR_Integer) 3);
                  switch (FGT_71) {
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
                  MR_Word next_value_of_HeadVar__2_2 = SubGoal_91;

                  // direct tailcall eliminated
                  ;
                  HeadVar__2_2 = next_value_of_HeadVar__2_2;
                  continue;
                }
              }
              break;
            case (MR_Integer) 6:
              {
                MR_Word Cond_65 = ((MR_Word) ((MR_hl_field(3, GoalExpr_5, (MR_Integer) 2))));
                MR_Word Then_66 = ((MR_Word) ((MR_hl_field(3, GoalExpr_5, (MR_Integer) 3))));
                MR_Word Else_67 = ((MR_Word) ((MR_hl_field(3, GoalExpr_5, (MR_Integer) 4))));
                MR_Word Var_87;

                Var_87 = hlds__goal_form__goal_can_throw_func_2_f_0(MaybeModuleInfo_4, Cond_65);
                succeeded = (Var_87 == (MR_Integer) 1);
                if (succeeded)
                  CanThrow_7 = (MR_Integer) 1;
                else
                {
                  MR_Word Var_88;

                  Var_88 = hlds__goal_form__goal_can_throw_func_2_f_0(MaybeModuleInfo_4, Then_66);
                  succeeded = (Var_88 == (MR_Integer) 1);
                  if (succeeded)
                    CanThrow_7 = (MR_Integer) 1;
                  else
                  {
                    MR_Word next_value_of_HeadVar__2_2 = Else_67;

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
                MR_Word ShortHand_72 = ((MR_Word) ((MR_hl_field(3, GoalExpr_5, (MR_Integer) 1))));

                switch (MR_tag((MR_Word) ShortHand_72)) {
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
      MR_Word Cases_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Var_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Var_11;

      Goal_8 = ((MR_Word) ((MR_hl_field(0, Var_10, (MR_Integer) 2))));
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
hlds__goal_form__goals_can_throw_2_f_0(
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
      MR_Word Goal_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Goals_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Word GoalExpr_9 = ((MR_Word) ((MR_hl_field(0, Goal_6, (MR_Integer) 0))));
      MR_Word GoalInfo_10 = ((MR_Word) ((MR_hl_field(0, Goal_6, (MR_Integer) 1))));
      MR_Word Determinism_11;

      Determinism_11 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(GoalInfo_10);
      succeeded = (Determinism_11 == (MR_Integer) 6);
      if (succeeded)
        succeeded = MR_TRUE;
      else
        switch (MR_tag((MR_Word) GoalExpr_9)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word SubGoal_71 = (MR_Word) ((MR_Word) (GoalExpr_9));
              MR_Word Var_127;

              Var_127 = hlds__goal_form__goal_can_throw_func_2_f_0(MaybeModuleInfo_1, SubGoal_71);
              succeeded = (Var_127 == (MR_Integer) 1);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Uni_15 = ((MR_Word) ((MR_hl_field(1, GoalExpr_9, (MR_Integer) 3))));

              succeeded = ((((MR_tag((MR_Word) Uni_15)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Uni_15, (MR_Integer) 0)))) == (MR_Integer) 1)));
              if (succeeded)
              {
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word PredId_37 = ((MR_Word) ((MR_hl_field(2, GoalExpr_9, (MR_Integer) 0))));
              MR_Integer ProcId_38 = ((MR_Integer) ((MR_hl_field(2, GoalExpr_9, (MR_Integer) 1))));
              MR_Word ModuleInfo_43;
              MR_Word ProcInfo_45;
              MR_Word MaybeExceptionInfo_46;
              MR_Word ExceptionInfo_47;
              MR_Word Var_88;
              MR_Word _PredInfo_44;

              succeeded = (MaybeModuleInfo_1 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                ModuleInfo_43 = ((MR_Word) ((MR_hl_field(1, MaybeModuleInfo_1, (MR_Integer) 0))));
                hlds__hlds_module__module_info_pred_proc_info_5_p_0(ModuleInfo_43, PredId_37, ProcId_38, &_PredInfo_44, &ProcInfo_45);
                hlds__hlds_pred__proc_info_get_exception_info_2_p_0(ProcInfo_45, &MaybeExceptionInfo_46);
                succeeded = (MaybeExceptionInfo_46 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  ExceptionInfo_47 = ((MR_Word) ((MR_hl_field(1, MaybeExceptionInfo_46, (MR_Integer) 0))));
                  Var_88 = ((MR_Word) ((MR_hl_field(0, ExceptionInfo_47, (MR_Integer) 0))));
                  succeeded = (Var_88 == (MR_Word) ((MR_Unsigned) 0U));
                }
              }
              if (succeeded)
                succeeded = MR_FALSE;
              else
                succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) ((MR_hl_field(3, GoalExpr_9, (MR_Integer) 0))))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                succeeded = MR_TRUE;
                break;
              case (MR_Integer) 1:
                {
                  MR_Word Attributes_49 = ((MR_Word) ((MR_hl_field(3, GoalExpr_9, (MR_Integer) 1))));
                  MR_Word ExceptionStatus_56;

                  ExceptionStatus_56 = parse_tree__prog_data_foreign__get_may_throw_exception_1_f_0(Attributes_49);
                  switch (ExceptionStatus_56) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 1:
                      {
                        MR_Word Var_89;

                        Var_89 = parse_tree__prog_data_foreign__get_may_call_mercury_1_f_0(Attributes_49);
                        succeeded = (Var_89 == (MR_Integer) 1);
                      }
                      break;
                    case (MR_Integer) 0:
                      succeeded = MR_TRUE;
                      break;
                  }
                  if (succeeded)
                    succeeded = MR_FALSE;
                  else
                    succeeded = MR_TRUE;
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word Goals_63 = ((MR_Word) ((MR_hl_field(3, GoalExpr_9, (MR_Integer) 2))));
                  MR_Word Var_115;

                  Var_115 = hlds__goal_form__goals_can_throw_2_f_0(MaybeModuleInfo_1, Goals_63);
                  succeeded = (Var_115 == (MR_Integer) 1);
                }
                break;
              case (MR_Integer) 3:
                {
                  MR_Word Goals_95 = ((MR_Word) ((MR_hl_field(3, GoalExpr_9, (MR_Integer) 1))));
                  MR_Word Var_116;

                  Var_116 = hlds__goal_form__goals_can_throw_2_f_0(MaybeModuleInfo_1, Goals_95);
                  succeeded = (Var_116 == (MR_Integer) 1);
                }
                break;
              case (MR_Integer) 4:
                {
                  MR_Word Cases_66 = ((MR_Word) ((MR_hl_field(3, GoalExpr_9, (MR_Integer) 3))));
                  MR_Word Var_145;

                  Var_145 = hlds__goal_form__case_list_can_throw_2_f_0(MaybeModuleInfo_1, Cases_66);
                  succeeded = (Var_145 == (MR_Integer) 1);
                }
                break;
              case (MR_Integer) 5:
                {
                  MR_Word Reason_72 = ((MR_Word) ((MR_hl_field(3, GoalExpr_9, (MR_Integer) 1))));
                  MR_Word SubGoal_94 = ((MR_Word) ((MR_hl_field(3, GoalExpr_9, (MR_Integer) 2))));
                  MR_Word FGT_74;

                  succeeded = ((((MR_tag((MR_Word) Reason_72)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Reason_72, (MR_Integer) 0)))) == (MR_Integer) 6)));
                  if (succeeded)
                  {
                    FGT_74 = ((MR_Unsigned) ((MR_hl_field(3, Reason_72, (MR_Integer) 2))) & (MR_Integer) 3);
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
                    succeeded = MR_FALSE;
                  else
                  {
                    MR_Word Var_136;

                    Var_136 = hlds__goal_form__goal_can_throw_func_2_f_0(MaybeModuleInfo_1, SubGoal_94);
                    succeeded = (Var_136 == (MR_Integer) 1);
                  }
                }
                break;
              case (MR_Integer) 6:
                {
                  MR_Word Cond_68 = ((MR_Word) ((MR_hl_field(3, GoalExpr_9, (MR_Integer) 2))));
                  MR_Word Then_69 = ((MR_Word) ((MR_hl_field(3, GoalExpr_9, (MR_Integer) 3))));
                  MR_Word Else_70 = ((MR_Word) ((MR_hl_field(3, GoalExpr_9, (MR_Integer) 4))));
                  MR_Word Var_90;

                  Var_90 = hlds__goal_form__goal_can_throw_func_2_f_0(MaybeModuleInfo_1, Cond_68);
                  succeeded = (Var_90 == (MR_Integer) 1);
                  if (succeeded)
                    succeeded = MR_TRUE;
                  else
                  {
                    MR_Word Var_91;

                    Var_91 = hlds__goal_form__goal_can_throw_func_2_f_0(MaybeModuleInfo_1, Then_69);
                    succeeded = (Var_91 == (MR_Integer) 1);
                    if (succeeded)
                      succeeded = MR_TRUE;
                    else
                    {
                      MR_Word Var_123;

                      Var_123 = hlds__goal_form__goal_can_throw_func_2_f_0(MaybeModuleInfo_1, Else_70);
                      succeeded = (Var_123 == (MR_Integer) 1);
                    }
                  }
                }
                break;
              case (MR_Integer) 7:
                {
                  MR_Word ShortHand_75 = ((MR_Word) ((MR_hl_field(3, GoalExpr_9, (MR_Integer) 1))));

                  switch (MR_tag((MR_Word) ShortHand_75)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      mercury__require__unexpected_2_p_0((MR_String) "function \140hlds.goal_form.goal_expr_can_throw\'/2", (MR_String) "bi_implication");
                      break;
                    case (MR_Integer) 1:
                      {
                      }
                      break;
                    case (MR_Integer) 2:
                      {
                      }
                      break;
                  }
                  succeeded = MR_TRUE;
                }
                break;
            }
            break;
        }
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
hlds__goal_form__goal_can_loop_term_info_2_p_0(
  MR_Word ModuleInfo_3,
  MR_Word Goal_4)
{
  MR_bool succeeded;
  MR_Word Var_5;
  MR_Word Var_6;

  {
    Var_6 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_6, 0) = ((MR_Box) (ModuleInfo_3));
  }
  Var_5 = hlds__goal_form__goal_can_loop_func_2_f_0(Var_6, Goal_4);
  succeeded = (Var_5 == (MR_Integer) 1);
  return succeeded;
}

MR_bool MR_CALL 
hlds__goal_form__goal_cannot_loop_term_info_2_p_0(
  MR_Word ModuleInfo_3,
  MR_Word Goal_4)
{
  MR_bool succeeded;
  MR_Word Var_5;
  MR_Word Var_6;

  {
    Var_6 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_6, 0) = ((MR_Box) (ModuleInfo_3));
  }
  Var_5 = hlds__goal_form__goal_can_loop_func_2_f_0(Var_6, Goal_4);
  succeeded = (Var_5 == (MR_Integer) 0);
  return succeeded;
}

void MR_CALL 
hlds__goal_form__goal_can_loop_or_throw_imaf_4_p_0(
  MR_Word Goal_5,
  MR_Word * Result_6,
  MR_Word STATE_VARIABLE_ModuleInfo_0_9,
  MR_Word * STATE_VARIABLE_ModuleInfo_10)
{
  MR_bool succeeded;
  MR_Word Var_11;
  MR_Word Var_12;

  {
    Var_12 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_12, 0) = ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_9));
  }
  Var_11 = hlds__goal_form__goal_can_loop_func_2_f_0(Var_12, Goal_5);
  succeeded = (Var_11 == (MR_Integer) 0);
  if (succeeded)
  {
    MR_Word GoalExpr_13 = ((MR_Word) ((MR_hl_field(0, Goal_5, (MR_Integer) 0))));
    MR_Word GoalInfo_14 = ((MR_Word) ((MR_hl_field(0, Goal_5, (MR_Integer) 1))));
    MR_Word Determinism_15;

    Determinism_15 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(GoalInfo_14);
    succeeded = (Determinism_15 == (MR_Integer) 6);
    if (succeeded)
    {
      *STATE_VARIABLE_ModuleInfo_10 = STATE_VARIABLE_ModuleInfo_0_9;
      *Result_6 = (MR_Integer) 0;
    }
    else
      switch (MR_tag((MR_Word) GoalExpr_13)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word SubGoal_63 = (MR_Word) ((MR_Word) (GoalExpr_13));
            MR_Word ThrowResult_168;

            hlds__goal_form__goal_can_throw_imaf_4_p_0(SubGoal_63, &ThrowResult_168, STATE_VARIABLE_ModuleInfo_0_9, STATE_VARIABLE_ModuleInfo_10);
            switch (ThrowResult_168) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *Result_6 = (MR_Integer) 0;
                break;
              case (MR_Integer) 1:
                *Result_6 = (MR_Integer) 1;
                break;
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Uni_41 = ((MR_Word) ((MR_hl_field(1, GoalExpr_13, (MR_Integer) 3))));

            *STATE_VARIABLE_ModuleInfo_10 = STATE_VARIABLE_ModuleInfo_0_9;
            switch (MR_tag((MR_Word) Uni_41)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
              case (MR_Integer) 1:
              case (MR_Integer) 2:
                *Result_6 = (MR_Integer) 1;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(3, Uni_41, (MR_Integer) 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *Result_6 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 1:
                    *Result_6 = (MR_Integer) 0;
                    break;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word PredId_22 = ((MR_Word) ((MR_hl_field(2, GoalExpr_13, (MR_Integer) 0))));
            MR_Integer ProcId_23 = ((MR_Integer) ((MR_hl_field(2, GoalExpr_13, (MR_Integer) 1))));
            MR_Word Status_28;
            MR_Word Var_91;

            {
              Var_91 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_91, 0) = ((MR_Box) (PredId_22));
              MR_hl_field(0, Var_91, 1) = ((MR_Box) (ProcId_23));
            }
            transform_hlds__exception_analysis__lookup_exception_analysis_result_4_p_0(Var_91, &Status_28, STATE_VARIABLE_ModuleInfo_0_9, STATE_VARIABLE_ModuleInfo_10);
            switch (MR_tag((MR_Word) Status_28)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(Status_28)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *Result_6 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 1:
                    *Result_6 = (MR_Integer) 0;
                    break;
                }
                break;
              case (MR_Integer) 1:
                *Result_6 = (MR_Integer) 0;
                break;
            }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(3, GoalExpr_13, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                *STATE_VARIABLE_ModuleInfo_10 = STATE_VARIABLE_ModuleInfo_0_9;
                *Result_6 = (MR_Integer) 0;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word Attributes_67 = ((MR_Word) ((MR_hl_field(3, GoalExpr_13, (MR_Integer) 1))));
                MR_Word ExceptionStatus_74;

                ExceptionStatus_74 = parse_tree__prog_data_foreign__get_may_throw_exception_1_f_0(Attributes_67);
                *STATE_VARIABLE_ModuleInfo_10 = STATE_VARIABLE_ModuleInfo_0_9;
                switch (ExceptionStatus_74) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 1:
                    {
                      MR_Word Var_92;

                      Var_92 = parse_tree__prog_data_foreign__get_may_call_mercury_1_f_0(Attributes_67);
                      succeeded = (Var_92 == (MR_Integer) 1);
                    }
                    break;
                  case (MR_Integer) 0:
                    succeeded = MR_TRUE;
                    break;
                }
                if (succeeded)
                  *Result_6 = (MR_Integer) 1;
                else
                  *Result_6 = (MR_Integer) 0;
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word Goals_17 = ((MR_Word) ((MR_hl_field(3, GoalExpr_13, (MR_Integer) 2))));
                MR_Word ThrowResult_163;

                hlds__goal_form__goals_can_throw_imaf_4_p_0(Goals_17, &ThrowResult_163, STATE_VARIABLE_ModuleInfo_0_9, STATE_VARIABLE_ModuleInfo_10);
                switch (ThrowResult_163) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *Result_6 = (MR_Integer) 0;
                    break;
                  case (MR_Integer) 1:
                    *Result_6 = (MR_Integer) 1;
                    break;
                }
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word Goals_97 = ((MR_Word) ((MR_hl_field(3, GoalExpr_13, (MR_Integer) 1))));
                MR_Word ThrowResult_164;

                hlds__goal_form__goals_can_throw_imaf_4_p_0(Goals_97, &ThrowResult_164, STATE_VARIABLE_ModuleInfo_0_9, STATE_VARIABLE_ModuleInfo_10);
                switch (ThrowResult_164) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *Result_6 = (MR_Integer) 0;
                    break;
                  case (MR_Integer) 1:
                    *Result_6 = (MR_Integer) 1;
                    break;
                }
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Word Cases_37 = ((MR_Word) ((MR_hl_field(3, GoalExpr_13, (MR_Integer) 3))));
                MR_Word ThrowResult_172;

                hlds__goal_form__cases_can_throw_imaf_4_p_0(Cases_37, &ThrowResult_172, STATE_VARIABLE_ModuleInfo_0_9, STATE_VARIABLE_ModuleInfo_10);
                switch (ThrowResult_172) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *Result_6 = (MR_Integer) 0;
                    break;
                  case (MR_Integer) 1:
                    *Result_6 = (MR_Integer) 1;
                    break;
                }
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word Reason_64 = ((MR_Word) ((MR_hl_field(3, GoalExpr_13, (MR_Integer) 1))));
                MR_Word SubGoal_96 = ((MR_Word) ((MR_hl_field(3, GoalExpr_13, (MR_Integer) 2))));
                MR_Word FGT_66;

                succeeded = ((((MR_tag((MR_Word) Reason_64)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Reason_64, (MR_Integer) 0)))) == (MR_Integer) 6)));
                if (succeeded)
                {
                  FGT_66 = ((MR_Unsigned) ((MR_hl_field(3, Reason_64, (MR_Integer) 2))) & (MR_Integer) 3);
                  switch (FGT_66) {
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
                  *STATE_VARIABLE_ModuleInfo_10 = STATE_VARIABLE_ModuleInfo_0_9;
                  *Result_6 = (MR_Integer) 1;
                }
                else
                {
                  MR_Word ThrowResult_182;

                  hlds__goal_form__goal_can_throw_imaf_4_p_0(SubGoal_96, &ThrowResult_182, STATE_VARIABLE_ModuleInfo_0_9, STATE_VARIABLE_ModuleInfo_10);
                  switch (ThrowResult_182) {
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
              break;
            case (MR_Integer) 6:
              {
                MR_Word ThenGoal_20 = ((MR_Word) ((MR_hl_field(3, GoalExpr_13, (MR_Integer) 3))));
                MR_Word ElseGoal_21 = ((MR_Word) ((MR_hl_field(3, GoalExpr_13, (MR_Integer) 4))));
                MR_Word Goal_101 = ((MR_Word) ((MR_hl_field(3, GoalExpr_13, (MR_Integer) 2))));
                MR_Word Result0_104;
                MR_Word STATE_VARIABLE_ModuleInfo_15_107;

                hlds__goal_form__goal_can_throw_imaf_4_p_0(Goal_101, &Result0_104, STATE_VARIABLE_ModuleInfo_0_9, &STATE_VARIABLE_ModuleInfo_15_107);
                switch (Result0_104) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      *STATE_VARIABLE_ModuleInfo_10 = STATE_VARIABLE_ModuleInfo_15_107;
                      *Result_6 = (MR_Integer) 0;
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word Result0_113;
                      MR_Word STATE_VARIABLE_ModuleInfo_15_116;

                      hlds__goal_form__goal_can_throw_imaf_4_p_0(ThenGoal_20, &Result0_113, STATE_VARIABLE_ModuleInfo_15_107, &STATE_VARIABLE_ModuleInfo_15_116);
                      switch (Result0_113) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 0:
                          {
                            *STATE_VARIABLE_ModuleInfo_10 = STATE_VARIABLE_ModuleInfo_15_116;
                            *Result_6 = (MR_Integer) 0;
                          }
                          break;
                        case (MR_Integer) 1:
                          {
                            MR_Word Result0_122;
                            MR_Word STATE_VARIABLE_ModuleInfo_15_125;

                            hlds__goal_form__goal_can_throw_imaf_4_p_0(ElseGoal_21, &Result0_122, STATE_VARIABLE_ModuleInfo_15_116, &STATE_VARIABLE_ModuleInfo_15_125);
                            switch (Result0_122) {
                              default: /*NOTREACHED*/ MR_assert(0);
                              case (MR_Integer) 0:
                                {
                                  *STATE_VARIABLE_ModuleInfo_10 = STATE_VARIABLE_ModuleInfo_15_125;
                                  *Result_6 = (MR_Integer) 0;
                                }
                                break;
                              case (MR_Integer) 1:
                                {
                                  *STATE_VARIABLE_ModuleInfo_10 = STATE_VARIABLE_ModuleInfo_15_125;
                                  *Result_6 = (MR_Integer) 1;
                                }
                                break;
                            }
                          }
                          break;
                      }
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 7:
              {
                MR_Word ShortHand_75 = ((MR_Word) ((MR_hl_field(3, GoalExpr_13, (MR_Integer) 1))));

                switch (MR_tag((MR_Word) ShortHand_75)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      MR_Word GoalB_77 = ((MR_Word) ((MR_hl_field(0, ShortHand_75, (MR_Integer) 1))));
                      MR_Word Goal_137 = ((MR_Word) ((MR_hl_field(0, ShortHand_75, (MR_Integer) 0))));
                      MR_Word Result0_140;
                      MR_Word STATE_VARIABLE_ModuleInfo_15_143;

                      hlds__goal_form__goal_can_throw_imaf_4_p_0(Goal_137, &Result0_140, STATE_VARIABLE_ModuleInfo_0_9, &STATE_VARIABLE_ModuleInfo_15_143);
                      switch (Result0_140) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 0:
                          {
                            *STATE_VARIABLE_ModuleInfo_10 = STATE_VARIABLE_ModuleInfo_15_143;
                            *Result_6 = (MR_Integer) 0;
                          }
                          break;
                        case (MR_Integer) 1:
                          {
                            MR_Word Result0_149;
                            MR_Word STATE_VARIABLE_ModuleInfo_15_152;

                            hlds__goal_form__goal_can_throw_imaf_4_p_0(GoalB_77, &Result0_149, STATE_VARIABLE_ModuleInfo_15_143, &STATE_VARIABLE_ModuleInfo_15_152);
                            switch (Result0_149) {
                              default: /*NOTREACHED*/ MR_assert(0);
                              case (MR_Integer) 0:
                                {
                                  *STATE_VARIABLE_ModuleInfo_10 = STATE_VARIABLE_ModuleInfo_15_152;
                                  *Result_6 = (MR_Integer) 0;
                                }
                                break;
                              case (MR_Integer) 1:
                                {
                                  *STATE_VARIABLE_ModuleInfo_10 = STATE_VARIABLE_ModuleInfo_15_152;
                                  *Result_6 = (MR_Integer) 1;
                                }
                                break;
                            }
                          }
                          break;
                      }
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      *STATE_VARIABLE_ModuleInfo_10 = STATE_VARIABLE_ModuleInfo_0_9;
                      *Result_6 = (MR_Integer) 0;
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      *STATE_VARIABLE_ModuleInfo_10 = STATE_VARIABLE_ModuleInfo_0_9;
                      *Result_6 = (MR_Integer) 0;
                    }
                    break;
                }
              }
              break;
          }
          break;
      }
  }
  else
  {
    *Result_6 = (MR_Integer) 0;
    *STATE_VARIABLE_ModuleInfo_10 = STATE_VARIABLE_ModuleInfo_0_9;
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
    MR_Word GoalExpr_7 = ((MR_Word) ((MR_hl_field(0, Goal_5, (MR_Integer) 0))));

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
          MR_Word Uni_12 = ((MR_Word) ((MR_hl_field(1, GoalExpr_7, (MR_Integer) 3))));

          switch (MR_tag((MR_Word) Uni_12)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
            case (MR_Integer) 1:
            case (MR_Integer) 2:
              CanLoop_6 = (MR_Integer) 0;
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) ((MR_hl_field(3, Uni_12, (MR_Integer) 0))))) {
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
          MR_Word PredId_34 = ((MR_Word) ((MR_hl_field(2, GoalExpr_7, (MR_Integer) 0))));
          MR_Integer ProcId_35 = ((MR_Integer) ((MR_hl_field(2, GoalExpr_7, (MR_Integer) 1))));
          MR_Word ModuleInfo_40;
          MR_Word ProcInfo_42;
          MR_Word Var_41;

          succeeded = (MaybeModuleInfo_4 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            ModuleInfo_40 = ((MR_Word) ((MR_hl_field(1, MaybeModuleInfo_4, (MR_Integer) 0))));
            hlds__hlds_module__module_info_pred_proc_info_5_p_0(ModuleInfo_40, PredId_34, ProcId_35, &Var_41, &ProcInfo_42);
            {
              MR_Word MaybeTermInfo_43;
              MR_Word Var_87;

              hlds__hlds_pred__proc_info_get_maybe_termination_info_2_p_0(ProcInfo_42, &MaybeTermInfo_43);
              succeeded = (MaybeTermInfo_43 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                Var_87 = ((MR_Word) ((MR_hl_field(1, MaybeTermInfo_43, (MR_Integer) 0))));
                succeeded = ((MR_tag((MR_Word) Var_87)) == (MR_Integer) 0);
              }
            }
            if (!(succeeded))
            {
              MR_Word Term2Info_45;
              MR_Word Var_88;
              MR_Word Var_89;

              hlds__hlds_pred__proc_info_get_termination2_info_2_p_0(ProcInfo_42, &Term2Info_45);
              Var_88 = transform_hlds__term_constr_main_types__term2_info_get_term_status_1_f_0(Term2Info_45);
              succeeded = (Var_88 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                Var_89 = ((MR_Word) ((MR_hl_field(1, Var_88, (MR_Integer) 0))));
                succeeded = ((MR_tag((MR_Word) Var_89)) == (MR_Integer) 0);
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
        switch (((MR_Integer) ((MR_hl_field(3, GoalExpr_7, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            CanLoop_6 = (MR_Integer) 1;
            break;
          case (MR_Integer) 1:
            {
              MR_Word Attributes_52 = ((MR_Word) ((MR_hl_field(3, GoalExpr_7, (MR_Integer) 1))));
              MR_Word Terminates_59;

              Terminates_59 = parse_tree__prog_data_foreign__get_terminates_1_f_0(Attributes_52);
              switch (Terminates_59) {
                default:
                  succeeded = MR_FALSE;
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word Var_90;

                    Var_90 = parse_tree__prog_data_foreign__get_may_call_mercury_1_f_0(Attributes_52);
                    succeeded = (Var_90 == (MR_Integer) 1);
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
              MR_Word Var_100 = ((MR_Word) ((MR_hl_field(3, GoalExpr_7, (MR_Integer) 2))));
              MR_Word Var_101 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr_7, (MR_Integer) 1))) & (MR_Integer) 1);

              switch (Var_101) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  CanLoop_6 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 0:
                  CanLoop_6 = hlds__goal_form__goals_can_loop_2_f_0(MaybeModuleInfo_4, Var_100);
                  break;
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Goals_97 = ((MR_Word) ((MR_hl_field(3, GoalExpr_7, (MR_Integer) 1))));

              CanLoop_6 = hlds__goal_form__goals_can_loop_2_f_0(MaybeModuleInfo_4, Goals_97);
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Cases_64 = ((MR_Word) ((MR_hl_field(3, GoalExpr_7, (MR_Integer) 3))));

              CanLoop_6 = hlds__goal_form__case_list_can_loop_2_f_0(MaybeModuleInfo_4, Cases_64);
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word Reason_70 = ((MR_Word) ((MR_hl_field(3, GoalExpr_7, (MR_Integer) 1))));
              MR_Word SubGoal_98 = ((MR_Word) ((MR_hl_field(3, GoalExpr_7, (MR_Integer) 2))));
              MR_Word FGT_72;

              succeeded = ((((MR_tag((MR_Word) Reason_70)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Reason_70, (MR_Integer) 0)))) == (MR_Integer) 6)));
              if (succeeded)
              {
                FGT_72 = ((MR_Unsigned) ((MR_hl_field(3, Reason_70, (MR_Integer) 2))) & (MR_Integer) 3);
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
              MR_Word Cond_66 = ((MR_Word) ((MR_hl_field(3, GoalExpr_7, (MR_Integer) 2))));
              MR_Word Then_67 = ((MR_Word) ((MR_hl_field(3, GoalExpr_7, (MR_Integer) 3))));
              MR_Word Else_68 = ((MR_Word) ((MR_hl_field(3, GoalExpr_7, (MR_Integer) 4))));
              MR_Word Var_93;

              Var_93 = hlds__goal_form__goal_can_loop_func_2_f_0(MaybeModuleInfo_4, Cond_66);
              succeeded = (Var_93 == (MR_Integer) 1);
              if (succeeded)
                CanLoop_6 = (MR_Integer) 1;
              else
              {
                MR_Word Var_94;

                Var_94 = hlds__goal_form__goal_can_loop_func_2_f_0(MaybeModuleInfo_4, Then_67);
                succeeded = (Var_94 == (MR_Integer) 1);
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
              MR_Word ShortHand_73 = ((MR_Word) ((MR_hl_field(3, GoalExpr_7, (MR_Integer) 1))));

              switch (MR_tag((MR_Word) ShortHand_73)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  mercury__require__unexpected_2_p_0((MR_String) "function \140hlds.goal_form.goal_can_loop_func\'/2", (MR_String) "bi_implication");
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word MainGoal_78 = ((MR_Word) ((MR_hl_field(1, ShortHand_73, (MR_Integer) 4))));
                    MR_Word OrElseGoals_79 = ((MR_Word) ((MR_hl_field(1, ShortHand_73, (MR_Integer) 5))));
                    MR_Word MainGoalCanLoop_81;
                    MR_Word OrElseCanLoop_82;

                    MainGoalCanLoop_81 = hlds__goal_form__goal_can_loop_func_2_f_0(MaybeModuleInfo_4, MainGoal_78);
                    OrElseCanLoop_82 = hlds__goal_form__goals_can_loop_2_f_0(MaybeModuleInfo_4, OrElseGoals_79);
                    CanLoop_6 = mercury__bool__or_2_f_0(MainGoalCanLoop_81, OrElseCanLoop_82);
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word SubGoal_99 = ((MR_Word) ((MR_hl_field(2, ShortHand_73, (MR_Integer) 2))));
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
      MR_Word Cases_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Var_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Var_11;

      Goal_8 = ((MR_Word) ((MR_hl_field(0, Var_10, (MR_Integer) 2))));
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
hlds__goal_form__goals_can_loop_2_f_0(
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
      MR_Word Goal_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Goals_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
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
hlds__goal_form__goal_can_throw_imaf_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * Result_7,
  MR_Word STATE_VARIABLE_ModuleInfo_0_10,
  MR_Word * STATE_VARIABLE_ModuleInfo_11)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word GoalExpr_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word GoalInfo_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Determinism_9;

    // setup for model_det tailcalls optimized into a loop
    ;
    Determinism_9 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(GoalInfo_6);
    succeeded = (Determinism_9 == (MR_Integer) 6);
    if (succeeded)
    {
      *Result_7 = (MR_Integer) 0;
      *STATE_VARIABLE_ModuleInfo_11 = STATE_VARIABLE_ModuleInfo_0_10;
    }
    else
      switch (MR_tag((MR_Word) GoalExpr_5)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word SubGoal_59 = (MR_Word) ((MR_Word) (GoalExpr_5));
            MR_Word next_value_of_HeadVar__1_1 = SubGoal_59;

            // direct tailcall eliminated
            ;
            HeadVar__1_1 = next_value_of_HeadVar__1_1;
            continue;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Uni_37 = ((MR_Word) ((MR_hl_field(1, GoalExpr_5, (MR_Integer) 3))));

            switch (MR_tag((MR_Word) Uni_37)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
              case (MR_Integer) 1:
              case (MR_Integer) 2:
                *Result_7 = (MR_Integer) 1;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(3, Uni_37, (MR_Integer) 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *Result_7 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 1:
                    *Result_7 = (MR_Integer) 0;
                    break;
                }
                break;
            }
            *STATE_VARIABLE_ModuleInfo_11 = STATE_VARIABLE_ModuleInfo_0_10;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word PredId_18 = ((MR_Word) ((MR_hl_field(2, GoalExpr_5, (MR_Integer) 0))));
            MR_Integer ProcId_19 = ((MR_Integer) ((MR_hl_field(2, GoalExpr_5, (MR_Integer) 1))));
            MR_Word Status_24;
            MR_Word Var_87;

            {
              Var_87 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_87, 0) = ((MR_Box) (PredId_18));
              MR_hl_field(0, Var_87, 1) = ((MR_Box) (ProcId_19));
            }
            transform_hlds__exception_analysis__lookup_exception_analysis_result_4_p_0(Var_87, &Status_24, STATE_VARIABLE_ModuleInfo_0_10, STATE_VARIABLE_ModuleInfo_11);
            switch (MR_tag((MR_Word) Status_24)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(Status_24)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *Result_7 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 1:
                    *Result_7 = (MR_Integer) 0;
                    break;
                }
                break;
              case (MR_Integer) 1:
                *Result_7 = (MR_Integer) 0;
                break;
            }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(3, GoalExpr_5, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                *Result_7 = (MR_Integer) 0;
                *STATE_VARIABLE_ModuleInfo_11 = STATE_VARIABLE_ModuleInfo_0_10;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word Attributes_63 = ((MR_Word) ((MR_hl_field(3, GoalExpr_5, (MR_Integer) 1))));
                MR_Word ExceptionStatus_70;

                ExceptionStatus_70 = parse_tree__prog_data_foreign__get_may_throw_exception_1_f_0(Attributes_63);
                switch (ExceptionStatus_70) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 1:
                    {
                      MR_Word Var_88;

                      Var_88 = parse_tree__prog_data_foreign__get_may_call_mercury_1_f_0(Attributes_63);
                      succeeded = (Var_88 == (MR_Integer) 1);
                    }
                    break;
                  case (MR_Integer) 0:
                    succeeded = MR_TRUE;
                    break;
                }
                if (succeeded)
                  *Result_7 = (MR_Integer) 1;
                else
                  *Result_7 = (MR_Integer) 0;
                *STATE_VARIABLE_ModuleInfo_11 = STATE_VARIABLE_ModuleInfo_0_10;
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word Goals_13 = ((MR_Word) ((MR_hl_field(3, GoalExpr_5, (MR_Integer) 2))));

                hlds__goal_form__goals_can_throw_imaf_4_p_0(Goals_13, Result_7, STATE_VARIABLE_ModuleInfo_0_10, STATE_VARIABLE_ModuleInfo_11);
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word Goals_93 = ((MR_Word) ((MR_hl_field(3, GoalExpr_5, (MR_Integer) 1))));

                hlds__goal_form__goals_can_throw_imaf_4_p_0(Goals_93, Result_7, STATE_VARIABLE_ModuleInfo_0_10, STATE_VARIABLE_ModuleInfo_11);
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Word Cases_33 = ((MR_Word) ((MR_hl_field(3, GoalExpr_5, (MR_Integer) 3))));

                hlds__goal_form__cases_can_throw_imaf_4_p_0(Cases_33, Result_7, STATE_VARIABLE_ModuleInfo_0_10, STATE_VARIABLE_ModuleInfo_11);
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word Reason_60 = ((MR_Word) ((MR_hl_field(3, GoalExpr_5, (MR_Integer) 1))));
                MR_Word SubGoal_92 = ((MR_Word) ((MR_hl_field(3, GoalExpr_5, (MR_Integer) 2))));
                MR_Word FGT_62;

                succeeded = ((((MR_tag((MR_Word) Reason_60)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Reason_60, (MR_Integer) 0)))) == (MR_Integer) 6)));
                if (succeeded)
                {
                  FGT_62 = ((MR_Unsigned) ((MR_hl_field(3, Reason_60, (MR_Integer) 2))) & (MR_Integer) 3);
                  switch (FGT_62) {
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
                  *Result_7 = (MR_Integer) 1;
                  *STATE_VARIABLE_ModuleInfo_11 = STATE_VARIABLE_ModuleInfo_0_10;
                }
                else
                {
                  MR_Word next_value_of_HeadVar__1_1 = SubGoal_92;

                  // direct tailcall eliminated
                  ;
                  HeadVar__1_1 = next_value_of_HeadVar__1_1;
                  continue;
                }
              }
              break;
            case (MR_Integer) 6:
              {
                MR_Word ThenGoal_16 = ((MR_Word) ((MR_hl_field(3, GoalExpr_5, (MR_Integer) 3))));
                MR_Word ElseGoal_17 = ((MR_Word) ((MR_hl_field(3, GoalExpr_5, (MR_Integer) 4))));
                MR_Word Var_85;
                MR_Word Goal_97 = ((MR_Word) ((MR_hl_field(3, GoalExpr_5, (MR_Integer) 2))));
                MR_Word Goals_98;
                MR_Word Result0_100;
                MR_Word STATE_VARIABLE_ModuleInfo_15_103;

                {
                  Var_85 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_85, 0) = ((MR_Box) (ElseGoal_17));
                  MR_hl_field(1, Var_85, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  Goals_98 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Goals_98, 0) = ((MR_Box) (ThenGoal_16));
                  MR_hl_field(1, Goals_98, 1) = ((MR_Box) (Var_85));
                }
                hlds__goal_form__goal_can_throw_imaf_4_p_0(Goal_97, &Result0_100, STATE_VARIABLE_ModuleInfo_0_10, &STATE_VARIABLE_ModuleInfo_15_103);
                switch (Result0_100) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      *Result_7 = (MR_Integer) 0;
                      *STATE_VARIABLE_ModuleInfo_11 = STATE_VARIABLE_ModuleInfo_15_103;
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word Goal_106 = ((MR_Word) ((MR_hl_field(1, Goals_98, (MR_Integer) 0))));
                      MR_Word Goals_107 = ((MR_Word) ((MR_hl_field(1, Goals_98, (MR_Integer) 1))));
                      MR_Word Result0_109;
                      MR_Word STATE_VARIABLE_ModuleInfo_15_112;

                      hlds__goal_form__goal_can_throw_imaf_4_p_0(Goal_106, &Result0_109, STATE_VARIABLE_ModuleInfo_15_103, &STATE_VARIABLE_ModuleInfo_15_112);
                      switch (Result0_109) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 0:
                          {
                            *Result_7 = (MR_Integer) 0;
                            *STATE_VARIABLE_ModuleInfo_11 = STATE_VARIABLE_ModuleInfo_15_112;
                          }
                          break;
                        case (MR_Integer) 1:
                          {
                            MR_Word Goal_115 = ((MR_Word) ((MR_hl_field(1, Goals_107, (MR_Integer) 0))));
                            MR_Word Result0_118;
                            MR_Word STATE_VARIABLE_ModuleInfo_15_121;

                            hlds__goal_form__goal_can_throw_imaf_4_p_0(Goal_115, &Result0_118, STATE_VARIABLE_ModuleInfo_15_112, &STATE_VARIABLE_ModuleInfo_15_121);
                            switch (Result0_118) {
                              default: /*NOTREACHED*/ MR_assert(0);
                              case (MR_Integer) 0:
                                {
                                  *Result_7 = (MR_Integer) 0;
                                  *STATE_VARIABLE_ModuleInfo_11 = STATE_VARIABLE_ModuleInfo_15_121;
                                }
                                break;
                              case (MR_Integer) 1:
                                {
                                  *Result_7 = (MR_Integer) 1;
                                  *STATE_VARIABLE_ModuleInfo_11 = STATE_VARIABLE_ModuleInfo_15_121;
                                }
                                break;
                            }
                          }
                          break;
                      }
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 7:
              {
                MR_Word ShortHand_71 = ((MR_Word) ((MR_hl_field(3, GoalExpr_5, (MR_Integer) 1))));

                switch (MR_tag((MR_Word) ShortHand_71)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      MR_Word GoalB_73 = ((MR_Word) ((MR_hl_field(0, ShortHand_71, (MR_Integer) 1))));
                      MR_Word Goal_133 = ((MR_Word) ((MR_hl_field(0, ShortHand_71, (MR_Integer) 0))));
                      MR_Word Goals_134;
                      MR_Word Result0_136;
                      MR_Word STATE_VARIABLE_ModuleInfo_15_139;

                      {
                        Goals_134 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, Goals_134, 0) = ((MR_Box) (GoalB_73));
                        MR_hl_field(1, Goals_134, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                      }
                      hlds__goal_form__goal_can_throw_imaf_4_p_0(Goal_133, &Result0_136, STATE_VARIABLE_ModuleInfo_0_10, &STATE_VARIABLE_ModuleInfo_15_139);
                      switch (Result0_136) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 0:
                          {
                            *Result_7 = (MR_Integer) 0;
                            *STATE_VARIABLE_ModuleInfo_11 = STATE_VARIABLE_ModuleInfo_15_139;
                          }
                          break;
                        case (MR_Integer) 1:
                          {
                            MR_Word Goal_142 = ((MR_Word) ((MR_hl_field(1, Goals_134, (MR_Integer) 0))));
                            MR_Word Result0_145;
                            MR_Word STATE_VARIABLE_ModuleInfo_15_148;

                            hlds__goal_form__goal_can_throw_imaf_4_p_0(Goal_142, &Result0_145, STATE_VARIABLE_ModuleInfo_15_139, &STATE_VARIABLE_ModuleInfo_15_148);
                            switch (Result0_145) {
                              default: /*NOTREACHED*/ MR_assert(0);
                              case (MR_Integer) 0:
                                {
                                  *Result_7 = (MR_Integer) 0;
                                  *STATE_VARIABLE_ModuleInfo_11 = STATE_VARIABLE_ModuleInfo_15_148;
                                }
                                break;
                              case (MR_Integer) 1:
                                {
                                  *Result_7 = (MR_Integer) 1;
                                  *STATE_VARIABLE_ModuleInfo_11 = STATE_VARIABLE_ModuleInfo_15_148;
                                }
                                break;
                            }
                          }
                          break;
                      }
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      *Result_7 = (MR_Integer) 0;
                      *STATE_VARIABLE_ModuleInfo_11 = STATE_VARIABLE_ModuleInfo_0_10;
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      *Result_7 = (MR_Integer) 0;
                      *STATE_VARIABLE_ModuleInfo_11 = STATE_VARIABLE_ModuleInfo_0_10;
                    }
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
hlds__goal_form__cases_can_throw_imaf_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_ModuleInfo_0_3,
  MR_Word * STATE_VARIABLE_ModuleInfo_4)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__2_2 = (MR_Integer) 1;
      *STATE_VARIABLE_ModuleInfo_4 = STATE_VARIABLE_ModuleInfo_0_3;
    }
    else
    {
      MR_Word Case_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Cases_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Goal_14 = ((MR_Word) ((MR_hl_field(0, Case_8, (MR_Integer) 2))));
      MR_Word Result0_15;
      MR_Word STATE_VARIABLE_ModuleInfo_18_18;

      hlds__goal_form__goal_can_throw_imaf_4_p_0(Goal_14, &Result0_15, STATE_VARIABLE_ModuleInfo_0_3, &STATE_VARIABLE_ModuleInfo_18_18);
      switch (Result0_15) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            *HeadVar__2_2 = (MR_Integer) 0;
            *STATE_VARIABLE_ModuleInfo_4 = STATE_VARIABLE_ModuleInfo_18_18;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word next_value_of_HeadVar__1_1 = Cases_9;
            MR_Word next_value_of_STATE_VARIABLE_ModuleInfo_0_3 = STATE_VARIABLE_ModuleInfo_18_18;

            // direct tailcall eliminated
            ;
            HeadVar__1_1 = next_value_of_HeadVar__1_1;
            STATE_VARIABLE_ModuleInfo_0_3 = next_value_of_STATE_VARIABLE_ModuleInfo_0_3;
            continue;
          }
          break;
      }
    }
    break;
  }
}

static void MR_CALL 
hlds__goal_form__goals_can_throw_imaf_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_ModuleInfo_0_3,
  MR_Word * STATE_VARIABLE_ModuleInfo_4)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__2_2 = (MR_Integer) 1;
      *STATE_VARIABLE_ModuleInfo_4 = STATE_VARIABLE_ModuleInfo_0_3;
    }
    else
    {
      MR_Word Goal_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Goals_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Result0_12;
      MR_Word STATE_VARIABLE_ModuleInfo_15_15;

      hlds__goal_form__goal_can_throw_imaf_4_p_0(Goal_8, &Result0_12, STATE_VARIABLE_ModuleInfo_0_3, &STATE_VARIABLE_ModuleInfo_15_15);
      switch (Result0_12) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            *HeadVar__2_2 = (MR_Integer) 0;
            *STATE_VARIABLE_ModuleInfo_4 = STATE_VARIABLE_ModuleInfo_15_15;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word next_value_of_HeadVar__1_1 = Goals_9;
            MR_Word next_value_of_STATE_VARIABLE_ModuleInfo_0_3 = STATE_VARIABLE_ModuleInfo_15_15;

            // direct tailcall eliminated
            ;
            HeadVar__1_1 = next_value_of_HeadVar__1_1;
            STATE_VARIABLE_ModuleInfo_0_3 = next_value_of_STATE_VARIABLE_ModuleInfo_0_3;
            continue;
          }
          break;
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
      MR_Word TypeCtorInfo_10_12;
      MR_Word Disjunct_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Disjuncts_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Word GoalInfo_8 = ((MR_Word) ((MR_hl_field(0, Disjunct_5, (MR_Integer) 1))));
      MR_Word CodeModel_9;
      MR_Word Conj_10;
      MR_Word ToAssignVars_11;
      MR_Word next_value_of_HeadVar__2_2;

      CodeModel_9 = hlds__code_model__goal_info_get_code_model_1_f_0(GoalInfo_8);
      succeeded = (CodeModel_9 == (MR_Integer) 0);
      if (succeeded)
      {
        hlds__hlds_goal__goal_to_conj_list_2_p_0(Disjunct_5, &Conj_10);
        succeeded = hlds__goal_form__only_constant_goals_3_p_0(Conj_10, HeadVar__1_1, &ToAssignVars_11);
        if (succeeded)
        {
          TypeCtorInfo_10_12 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
          succeeded = parse_tree__set_of_var__is_empty_1_p_0(TypeCtorInfo_10_12, ToAssignVars_11);
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
  MR_bool succeeded;
  MR_Word TypeCtorInfo_10_10;
  MR_Word GoalInfo_6 = ((MR_Word) ((MR_hl_field(0, Goal_4, (MR_Integer) 1))));
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
      MR_Word TypeCtorInfo_30_30;
      MR_Word Goal_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Goals_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word GoalExpr_10 = ((MR_Word) ((MR_hl_field(0, Goal_7, (MR_Integer) 0))));
      MR_Word Var_17;
      MR_Word STATE_VARIABLE_ToAssignVars_29_29;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_ToAssignVars_0_2;

      if (((MR_tag((MR_Word) GoalExpr_10)) == (MR_Integer) 1))
      {
        MR_Word Unification_15 = ((MR_Word) ((MR_hl_field(1, GoalExpr_10, (MR_Integer) 3))));

        succeeded = ((MR_tag((MR_Word) Unification_15)) == (MR_Integer) 0);
        if (succeeded)
          Var_17 = ((MR_Word) ((MR_hl_field(0, Unification_15, (MR_Integer) 0))));
      }
      else
      if (((((MR_tag((MR_Word) GoalExpr_10)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, GoalExpr_10, (MR_Integer) 0)))) == (MR_Integer) 5))))
      {
        MR_Word Reason_24 = ((MR_Word) ((MR_hl_field(3, GoalExpr_10, (MR_Integer) 1))));
        MR_Word Var_28;

        succeeded = ((((MR_tag((MR_Word) Reason_24)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Reason_24, (MR_Integer) 0)))) == (MR_Integer) 6)));
        if (succeeded)
        {
          Var_17 = ((MR_Word) ((MR_hl_field(3, Reason_24, (MR_Integer) 1))));
          Var_28 = ((MR_Unsigned) ((MR_hl_field(3, Reason_24, (MR_Integer) 2))) & (MR_Integer) 3);
          succeeded = (Var_28 == (MR_Integer) 1);
        }
      }
      else
        succeeded = MR_FALSE;
      if (succeeded)
      {
        TypeCtorInfo_30_30 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
        parse_tree__set_of_var__delete_3_p_0(TypeCtorInfo_30_30, Var_17, STATE_VARIABLE_ToAssignVars_0_2, &STATE_VARIABLE_ToAssignVars_29_29);
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
  MR_bool succeeded;

  succeeded = hlds__goal_form____Unify____goal_loop_or_throw_status_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__goal_form____Compare____goal_loop_or_throw_status_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__goal_form____Compare____goal_loop_or_throw_status_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
hlds__goal_form____Unify____goal_loop_status_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__goal_form____Unify____goal_loop_status_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__goal_form____Compare____goal_loop_status_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__goal_form____Compare____goal_loop_status_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
hlds__goal_form____Unify____goal_throw_status_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__goal_form____Unify____goal_throw_status_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__goal_form____Compare____goal_throw_status_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__goal_form____Compare____goal_throw_status_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
hlds__goal_form____Unify____has_subgoals_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__goal_form____Unify____has_subgoals_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__goal_form____Compare____has_subgoals_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__goal_form____Compare____has_subgoals_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
hlds__goal_form____Unify____is_termvar_needed_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__goal_form____Unify____is_termvar_needed_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__goal_form____Compare____is_termvar_needed_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__goal_form____Compare____is_termvar_needed_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
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
