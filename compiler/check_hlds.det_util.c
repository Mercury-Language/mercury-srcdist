/*
** Automatically generated from `det_util.m'
** by the Mercury compiler,
** version rotd-2019-02-15
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


// :- module check_hlds.det_util.
// :- implementation.

/*
INIT mercury__check_hlds__det_util__init
ENDINIT
*/

#include "check_hlds.det_util.mih"


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
#include "hlds.const_struct.mih"
#include "hlds.goal_mode.mih"
#include "hlds.hlds_args.mih"
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
#include "parse_tree.prog_type.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__det_util__set_tree234__pti_set_tree234_1__plain_parse_tree__prog_data__type_ctor_info_cons_id_0;

static const MR_EnumFunctorDesc check_hlds__det_util__check_hlds__det_util__enum_functor_desc_contains_format_call_0_0;

static const MR_EnumFunctorDesc check_hlds__det_util__check_hlds__det_util__enum_functor_desc_contains_format_call_0_1;

static const MR_EnumFunctorDescPtr check_hlds__det_util__check_hlds__det_util__enum_value_ordered_contains_format_call_0[2];

static const MR_EnumFunctorDescPtr check_hlds__det_util__check_hlds__det_util__enum_name_ordered_contains_format_call_0[2];

static const MR_Integer check_hlds__det_util__check_hlds__det_util__functor_number_map_contains_format_call_0[2];

static const MR_EnumFunctorDesc check_hlds__det_util__check_hlds__det_util__enum_functor_desc_contains_incomplete_switch_0_0;

static const MR_EnumFunctorDesc check_hlds__det_util__check_hlds__det_util__enum_functor_desc_contains_incomplete_switch_0_1;

static const MR_EnumFunctorDescPtr check_hlds__det_util__check_hlds__det_util__enum_value_ordered_contains_incomplete_switch_0[2];

static const MR_EnumFunctorDescPtr check_hlds__det_util__check_hlds__det_util__enum_name_ordered_contains_incomplete_switch_0[2];

static const MR_Integer check_hlds__det_util__check_hlds__det_util__functor_number_map_contains_incomplete_switch_0[2];

static const MR_EnumFunctorDesc check_hlds__det_util__check_hlds__det_util__enum_functor_desc_contains_require_scope_0_0;

static const MR_EnumFunctorDesc check_hlds__det_util__check_hlds__det_util__enum_functor_desc_contains_require_scope_0_1;

static const MR_EnumFunctorDescPtr check_hlds__det_util__check_hlds__det_util__enum_value_ordered_contains_require_scope_0[2];

static const MR_EnumFunctorDescPtr check_hlds__det_util__check_hlds__det_util__enum_name_ordered_contains_require_scope_0[2];

static const MR_Integer check_hlds__det_util__check_hlds__det_util__functor_number_map_contains_require_scope_0[2];

static const MR_FA_TypeInfo_Struct1 check_hlds__det_util__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__det_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct2 check_hlds__det_util__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__det_util__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0;

static const MR_PseudoTypeInfo check_hlds__det_util__check_hlds__det_util__field_types_det_info_0_0[9];

static const MR_ConstString check_hlds__det_util__check_hlds__det_util__field_names_det_info_0_0[9];

static const MR_DuArgLocn check_hlds__det_util__check_hlds__det_util__field_locns_det_info_0_0[9];

static const MR_DuFunctorDesc check_hlds__det_util__check_hlds__det_util__du_functor_desc_det_info_0_0;

static const MR_DuFunctorDescPtr check_hlds__det_util__check_hlds__det_util__du_stag_ordered_det_info_0_0[1];

static const MR_DuPtagLayout check_hlds__det_util__check_hlds__det_util__du_ptag_ordered_det_info_0[1];

static const MR_DuFunctorDescPtr check_hlds__det_util__check_hlds__det_util__du_name_ordered_det_info_0[1];

static const MR_Integer check_hlds__det_util__check_hlds__det_util__functor_number_map_det_info_0[1];

static const MR_EnumFunctorDesc check_hlds__det_util__check_hlds__det_util__enum_functor_desc_maybe_changed_0_0;

static const MR_EnumFunctorDesc check_hlds__det_util__check_hlds__det_util__enum_functor_desc_maybe_changed_0_1;

static const MR_EnumFunctorDescPtr check_hlds__det_util__check_hlds__det_util__enum_value_ordered_maybe_changed_0[2];

static const MR_EnumFunctorDescPtr check_hlds__det_util__check_hlds__det_util__enum_name_ordered_maybe_changed_0[2];

static const MR_Integer check_hlds__det_util__check_hlds__det_util__functor_number_map_maybe_changed_0[2];

static const MR_EnumFunctorDesc check_hlds__det_util__check_hlds__det_util__enum_functor_desc_report_pess_extra_vars_0_0;

static const MR_EnumFunctorDesc check_hlds__det_util__check_hlds__det_util__enum_functor_desc_report_pess_extra_vars_0_1;

static const MR_EnumFunctorDescPtr check_hlds__det_util__check_hlds__det_util__enum_value_ordered_report_pess_extra_vars_0[2];

static const MR_EnumFunctorDescPtr check_hlds__det_util__check_hlds__det_util__enum_name_ordered_report_pess_extra_vars_0[2];

static const MR_Integer check_hlds__det_util__check_hlds__det_util__functor_number_map_report_pess_extra_vars_0[2];

static MR_bool MR_CALL 
check_hlds__det_util__IntroducedFrom__pred__delete_unreachable_cases_acc__181__1_2_p_0(
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__2_47);

static MR_bool MR_CALL 
check_hlds__det_util__IntroducedFrom__pred__delete_unreachable_cases_acc__176__1_2_p_0(
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__2_44);

static MR_bool MR_CALL 
check_hlds__det_util__delete_unreachable_cases_acc_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
check_hlds__det_util__delete_unreachable_cases_acc_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
check_hlds__det_util__delete_unreachable_cases_acc_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_RevReachableCases_0_3,
  MR_Word * STATE_VARIABLE_RevReachableCases_4,
  MR_Word STATE_VARIABLE_RevUnreachableGoals_0_5,
  MR_Word * STATE_VARIABLE_RevUnreachableGoals_6);

static MR_bool MR_CALL 
check_hlds__det_util____Unify____contains_format_call_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__det_util____Compare____contains_format_call_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__det_util____Unify____contains_incomplete_switch_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__det_util____Compare____contains_incomplete_switch_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__det_util____Unify____contains_require_scope_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__det_util____Compare____contains_require_scope_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__det_util____Unify____det_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__det_util____Compare____det_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__det_util____Unify____maybe_changed_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__det_util____Compare____maybe_changed_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__det_util____Unify____report_pess_extra_vars_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__det_util____Compare____report_pess_extra_vars_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box check_hlds__det_util_scalar_common_1[2][2];

static /* final */ const MR_Box check_hlds__det_util_scalar_common_2[1][5];




static /* final */ const MR_Box check_hlds__det_util_scalar_common_1[2][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__varset__varset__type_ctor_info_varset_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0))
  },
};

static /* final */ const MR_Box check_hlds__det_util_scalar_common_2[1][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&check_hlds__det_util__set_tree234__pti_set_tree234_1__plain_parse_tree__prog_data__type_ctor_info_cons_id_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__det_util__set_tree234__pti_set_tree234_1__plain_parse_tree__prog_data__type_ctor_info_cons_id_0 = {
  &mercury__set_tree234__set_tree234__type_ctor_info_set_tree234_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0)
  }
};

static const MR_EnumFunctorDesc check_hlds__det_util__check_hlds__det_util__enum_functor_desc_contains_format_call_0_0 = {
  (MR_String) "does_not_contain_format_call",
  INT32_C(0)
};

static const MR_EnumFunctorDesc check_hlds__det_util__check_hlds__det_util__enum_functor_desc_contains_format_call_0_1 = {
  (MR_String) "contains_format_call",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr check_hlds__det_util__check_hlds__det_util__enum_value_ordered_contains_format_call_0[2] = {
  &check_hlds__det_util__check_hlds__det_util__enum_functor_desc_contains_format_call_0_0,
  &check_hlds__det_util__check_hlds__det_util__enum_functor_desc_contains_format_call_0_1
};

static const MR_EnumFunctorDescPtr check_hlds__det_util__check_hlds__det_util__enum_name_ordered_contains_format_call_0[2] = {
  &check_hlds__det_util__check_hlds__det_util__enum_functor_desc_contains_format_call_0_1,
  &check_hlds__det_util__check_hlds__det_util__enum_functor_desc_contains_format_call_0_0
};

static const MR_Integer check_hlds__det_util__check_hlds__det_util__functor_number_map_contains_format_call_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct check_hlds__det_util__check_hlds__det_util__type_ctor_info_contains_format_call_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__det_util____Unify____contains_format_call_0_0_10001)),
  ((MR_Box) (check_hlds__det_util____Compare____contains_format_call_0_0_10001)),
  (MR_String) "check_hlds.det_util",
  (MR_String) "contains_format_call",
  {     check_hlds__det_util__check_hlds__det_util__enum_name_ordered_contains_format_call_0 },
  {     check_hlds__det_util__check_hlds__det_util__enum_value_ordered_contains_format_call_0 },
  (MR_Integer) 2,
  UINT16_C(4),
  check_hlds__det_util__check_hlds__det_util__functor_number_map_contains_format_call_0
};

static const MR_EnumFunctorDesc check_hlds__det_util__check_hlds__det_util__enum_functor_desc_contains_incomplete_switch_0_0 = {
  (MR_String) "does_not_contain_incomplete_switch",
  INT32_C(0)
};

static const MR_EnumFunctorDesc check_hlds__det_util__check_hlds__det_util__enum_functor_desc_contains_incomplete_switch_0_1 = {
  (MR_String) "contains_incomplete_switch",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr check_hlds__det_util__check_hlds__det_util__enum_value_ordered_contains_incomplete_switch_0[2] = {
  &check_hlds__det_util__check_hlds__det_util__enum_functor_desc_contains_incomplete_switch_0_0,
  &check_hlds__det_util__check_hlds__det_util__enum_functor_desc_contains_incomplete_switch_0_1
};

static const MR_EnumFunctorDescPtr check_hlds__det_util__check_hlds__det_util__enum_name_ordered_contains_incomplete_switch_0[2] = {
  &check_hlds__det_util__check_hlds__det_util__enum_functor_desc_contains_incomplete_switch_0_1,
  &check_hlds__det_util__check_hlds__det_util__enum_functor_desc_contains_incomplete_switch_0_0
};

static const MR_Integer check_hlds__det_util__check_hlds__det_util__functor_number_map_contains_incomplete_switch_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct check_hlds__det_util__check_hlds__det_util__type_ctor_info_contains_incomplete_switch_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__det_util____Unify____contains_incomplete_switch_0_0_10001)),
  ((MR_Box) (check_hlds__det_util____Compare____contains_incomplete_switch_0_0_10001)),
  (MR_String) "check_hlds.det_util",
  (MR_String) "contains_incomplete_switch",
  {     check_hlds__det_util__check_hlds__det_util__enum_name_ordered_contains_incomplete_switch_0 },
  {     check_hlds__det_util__check_hlds__det_util__enum_value_ordered_contains_incomplete_switch_0 },
  (MR_Integer) 2,
  UINT16_C(4),
  check_hlds__det_util__check_hlds__det_util__functor_number_map_contains_incomplete_switch_0
};

static const MR_EnumFunctorDesc check_hlds__det_util__check_hlds__det_util__enum_functor_desc_contains_require_scope_0_0 = {
  (MR_String) "does_not_contain_require_scope",
  INT32_C(0)
};

static const MR_EnumFunctorDesc check_hlds__det_util__check_hlds__det_util__enum_functor_desc_contains_require_scope_0_1 = {
  (MR_String) "contains_require_scope",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr check_hlds__det_util__check_hlds__det_util__enum_value_ordered_contains_require_scope_0[2] = {
  &check_hlds__det_util__check_hlds__det_util__enum_functor_desc_contains_require_scope_0_0,
  &check_hlds__det_util__check_hlds__det_util__enum_functor_desc_contains_require_scope_0_1
};

static const MR_EnumFunctorDescPtr check_hlds__det_util__check_hlds__det_util__enum_name_ordered_contains_require_scope_0[2] = {
  &check_hlds__det_util__check_hlds__det_util__enum_functor_desc_contains_require_scope_0_1,
  &check_hlds__det_util__check_hlds__det_util__enum_functor_desc_contains_require_scope_0_0
};

static const MR_Integer check_hlds__det_util__check_hlds__det_util__functor_number_map_contains_require_scope_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct check_hlds__det_util__check_hlds__det_util__type_ctor_info_contains_require_scope_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__det_util____Unify____contains_require_scope_0_0_10001)),
  ((MR_Box) (check_hlds__det_util____Compare____contains_require_scope_0_0_10001)),
  (MR_String) "check_hlds.det_util",
  (MR_String) "contains_require_scope",
  {     check_hlds__det_util__check_hlds__det_util__enum_name_ordered_contains_require_scope_0 },
  {     check_hlds__det_util__check_hlds__det_util__enum_value_ordered_contains_require_scope_0 },
  (MR_Integer) 2,
  UINT16_C(4),
  check_hlds__det_util__check_hlds__det_util__functor_number_map_contains_require_scope_0
};

static const MR_FA_TypeInfo_Struct1 check_hlds__det_util__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__det_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_TypeInfo_Struct2 check_hlds__det_util__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&check_hlds__det_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)
  }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__det_util__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0)
  }
};

static const MR_PseudoTypeInfo check_hlds__det_util__check_hlds__det_util__field_types_det_info_0_0[9] = {
  (MR_PseudoTypeInfo) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0),
  (MR_PseudoTypeInfo) (&check_hlds__det_util__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&check_hlds__det_util__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0),
  (MR_PseudoTypeInfo) (&check_hlds__det_util__check_hlds__det_util__type_ctor_info_report_pess_extra_vars_0),
  (MR_PseudoTypeInfo) (&check_hlds__det_util__check_hlds__det_util__type_ctor_info_contains_format_call_0),
  (MR_PseudoTypeInfo) (&check_hlds__det_util__check_hlds__det_util__type_ctor_info_contains_require_scope_0),
  (MR_PseudoTypeInfo) (&check_hlds__det_util__check_hlds__det_util__type_ctor_info_contains_incomplete_switch_0),
  (MR_PseudoTypeInfo) (&check_hlds__det_util__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0)
};

static const MR_ConstString check_hlds__det_util__check_hlds__det_util__field_names_det_info_0_0[9] = {
  (MR_String) "di_module_info",
  (MR_String) "di_pred_proc_id",
  (MR_String) "di_varset",
  (MR_String) "di_vartypes",
  (MR_String) "di_pess_extra_vars",
  (MR_String) "di_has_format_call",
  (MR_String) "di_has_req_scope",
  (MR_String) "di_has_incomplete_switch",
  (MR_String) "di_error_specs"
};

static const MR_DuArgLocn check_hlds__det_util__check_hlds__det_util__field_locns_det_info_0_0[9] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 2,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 3,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 4,
    (MR_Integer) 3,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 4,
    (MR_Integer) 2,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 4,
    (MR_Integer) 1,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 4,
    (MR_Integer) 0,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 5,
    (MR_Integer) 0,
    (MR_Integer) 0
  }
};

static const MR_DuFunctorDesc check_hlds__det_util__check_hlds__det_util__du_functor_desc_det_info_0_0 = {
  (MR_String) "det_info",
  INT16_C(9),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  check_hlds__det_util__check_hlds__det_util__field_types_det_info_0_0,
  check_hlds__det_util__check_hlds__det_util__field_names_det_info_0_0,
  check_hlds__det_util__check_hlds__det_util__field_locns_det_info_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__det_util__check_hlds__det_util__du_stag_ordered_det_info_0_0[1] = {
  &check_hlds__det_util__check_hlds__det_util__du_functor_desc_det_info_0_0
};

static const MR_DuPtagLayout check_hlds__det_util__check_hlds__det_util__du_ptag_ordered_det_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__det_util__check_hlds__det_util__du_stag_ordered_det_info_0_0,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__det_util__check_hlds__det_util__du_name_ordered_det_info_0[1] = {
  &check_hlds__det_util__check_hlds__det_util__du_functor_desc_det_info_0_0
};

static const MR_Integer check_hlds__det_util__check_hlds__det_util__functor_number_map_det_info_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct check_hlds__det_util__check_hlds__det_util__type_ctor_info_det_info_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__det_util____Unify____det_info_0_0_10001)),
  ((MR_Box) (check_hlds__det_util____Compare____det_info_0_0_10001)),
  (MR_String) "check_hlds.det_util",
  (MR_String) "det_info",
  {     check_hlds__det_util__check_hlds__det_util__du_name_ordered_det_info_0 },
  {     check_hlds__det_util__check_hlds__det_util__du_ptag_ordered_det_info_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  check_hlds__det_util__check_hlds__det_util__functor_number_map_det_info_0
};

static const MR_EnumFunctorDesc check_hlds__det_util__check_hlds__det_util__enum_functor_desc_maybe_changed_0_0 = {
  (MR_String) "changed",
  INT32_C(0)
};

static const MR_EnumFunctorDesc check_hlds__det_util__check_hlds__det_util__enum_functor_desc_maybe_changed_0_1 = {
  (MR_String) "unchanged",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr check_hlds__det_util__check_hlds__det_util__enum_value_ordered_maybe_changed_0[2] = {
  &check_hlds__det_util__check_hlds__det_util__enum_functor_desc_maybe_changed_0_0,
  &check_hlds__det_util__check_hlds__det_util__enum_functor_desc_maybe_changed_0_1
};

static const MR_EnumFunctorDescPtr check_hlds__det_util__check_hlds__det_util__enum_name_ordered_maybe_changed_0[2] = {
  &check_hlds__det_util__check_hlds__det_util__enum_functor_desc_maybe_changed_0_0,
  &check_hlds__det_util__check_hlds__det_util__enum_functor_desc_maybe_changed_0_1
};

static const MR_Integer check_hlds__det_util__check_hlds__det_util__functor_number_map_maybe_changed_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct check_hlds__det_util__check_hlds__det_util__type_ctor_info_maybe_changed_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__det_util____Unify____maybe_changed_0_0_10001)),
  ((MR_Box) (check_hlds__det_util____Compare____maybe_changed_0_0_10001)),
  (MR_String) "check_hlds.det_util",
  (MR_String) "maybe_changed",
  {     check_hlds__det_util__check_hlds__det_util__enum_name_ordered_maybe_changed_0 },
  {     check_hlds__det_util__check_hlds__det_util__enum_value_ordered_maybe_changed_0 },
  (MR_Integer) 2,
  UINT16_C(4),
  check_hlds__det_util__check_hlds__det_util__functor_number_map_maybe_changed_0
};

static const MR_EnumFunctorDesc check_hlds__det_util__check_hlds__det_util__enum_functor_desc_report_pess_extra_vars_0_0 = {
  (MR_String) "pess_extra_vars_report",
  INT32_C(0)
};

static const MR_EnumFunctorDesc check_hlds__det_util__check_hlds__det_util__enum_functor_desc_report_pess_extra_vars_0_1 = {
  (MR_String) "pess_extra_vars_ignore",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr check_hlds__det_util__check_hlds__det_util__enum_value_ordered_report_pess_extra_vars_0[2] = {
  &check_hlds__det_util__check_hlds__det_util__enum_functor_desc_report_pess_extra_vars_0_0,
  &check_hlds__det_util__check_hlds__det_util__enum_functor_desc_report_pess_extra_vars_0_1
};

static const MR_EnumFunctorDescPtr check_hlds__det_util__check_hlds__det_util__enum_name_ordered_report_pess_extra_vars_0[2] = {
  &check_hlds__det_util__check_hlds__det_util__enum_functor_desc_report_pess_extra_vars_0_1,
  &check_hlds__det_util__check_hlds__det_util__enum_functor_desc_report_pess_extra_vars_0_0
};

static const MR_Integer check_hlds__det_util__check_hlds__det_util__functor_number_map_report_pess_extra_vars_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct check_hlds__det_util__check_hlds__det_util__type_ctor_info_report_pess_extra_vars_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__det_util____Unify____report_pess_extra_vars_0_0_10001)),
  ((MR_Box) (check_hlds__det_util____Compare____report_pess_extra_vars_0_0_10001)),
  (MR_String) "check_hlds.det_util",
  (MR_String) "report_pess_extra_vars",
  {     check_hlds__det_util__check_hlds__det_util__enum_name_ordered_report_pess_extra_vars_0 },
  {     check_hlds__det_util__check_hlds__det_util__enum_value_ordered_report_pess_extra_vars_0 },
  (MR_Integer) 2,
  UINT16_C(4),
  check_hlds__det_util__check_hlds__det_util__functor_number_map_report_pess_extra_vars_0
};

static MR_bool MR_CALL 
check_hlds__det_util__IntroducedFrom__pred__delete_unreachable_cases_acc__181__1_2_p_0(
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__2_47)
{
  {
    MR_bool succeeded;

    succeeded = mercury__set_tree234__contains_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0), HeadVar__2_2, ((MR_Box) (HeadVar__2_47)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__det_util__IntroducedFrom__pred__delete_unreachable_cases_acc__176__1_2_p_0(
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__2_44)
{
  {
    MR_bool succeeded;

    succeeded = mercury__set_tree234__contains_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0), HeadVar__2_2, ((MR_Box) (HeadVar__2_44)));
    return succeeded;
  }
}

void MR_CALL 
check_hlds__det_util____Compare____report_pess_extra_vars_0_0(
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
check_hlds__det_util____Unify____report_pess_extra_vars_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

void MR_CALL 
check_hlds__det_util____Compare____maybe_changed_0_0(
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
check_hlds__det_util____Unify____maybe_changed_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

void MR_CALL 
check_hlds__det_util____Compare____det_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_30 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_31 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_30 == CastY_31);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))));
      MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));
      MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 3))));
      MR_Word ArgX5_16 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4))) >> 3)) & (MR_Integer) 1);
      MR_Word ArgY5_17 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 4))) >> 3)) & (MR_Integer) 1);
      MR_Word ArgX6_19 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4))) >> 2)) & (MR_Integer) 1);
      MR_Word ArgY6_20 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 4))) >> 2)) & (MR_Integer) 1);
      MR_Word ArgX7_22 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4))) >> 1)) & (MR_Integer) 1);
      MR_Word ArgY7_23 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 4))) >> 1)) & (MR_Integer) 1);
      MR_Word ArgX8_25 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4))) & (MR_Integer) 1);
      MR_Word ArgY8_26 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 4))) & (MR_Integer) 1);
      MR_Word ArgX9_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 5))));
      MR_Word ArgY9_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 5))));
      MR_Word SubResult1_6;

      hlds__hlds_module____Compare____module_info_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
      succeeded = (SubResult1_6 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
      {
        MR_Word SubResult2_9;

        hlds__hlds_pred____Compare____pred_proc_id_0_0(&SubResult2_9, ArgX2_7, ArgY2_8);
        succeeded = (SubResult2_9 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult2_9;
        else
        {
          MR_Word SubResult3_12;

          mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__det_util_scalar_common_1[0]), &SubResult3_12, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
          succeeded = (SubResult3_12 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult3_12;
          else
          {
            MR_Word SubResult4_15;

            mercury__builtin__compare_3_p_0((MR_Word) (&hlds__vartypes__hlds__vartypes__type_ctor_info_vartypes_0), &SubResult4_15, ((MR_Box) (ArgX4_13)), ((MR_Box) (ArgY4_14)));
            succeeded = (SubResult4_15 != (MR_Integer) 0);
            if (succeeded)
              *HeadVar__1_1 = SubResult4_15;
            else
            {
              MR_Word SubResult5_18;
              MR_Integer Var_41 = (MR_Integer) (ArgX5_16);
              MR_Integer Var_42 = (MR_Integer) (ArgY5_17);

              succeeded = (Var_41 < Var_42);
              if (succeeded)
              {
                SubResult5_18 = (MR_Integer) 1;
                succeeded = MR_TRUE;
              }
              else
              {
                succeeded = (Var_41 > Var_42);
                if (succeeded)
                {
                  SubResult5_18 = (MR_Integer) 2;
                  succeeded = MR_TRUE;
                }
                else
                {
                  succeeded = MR_TRUE;
                  succeeded = !(succeeded);
                  if (succeeded)
                  {
                    SubResult5_18 = (MR_Integer) 0;
                    succeeded = MR_TRUE;
                  }
                }
              }
              if (succeeded)
                *HeadVar__1_1 = SubResult5_18;
              else
              {
                MR_Word SubResult6_21;
                MR_Integer Var_43 = (MR_Integer) (ArgX6_19);
                MR_Integer Var_44 = (MR_Integer) (ArgY6_20);

                succeeded = (Var_43 < Var_44);
                if (succeeded)
                {
                  SubResult6_21 = (MR_Integer) 1;
                  succeeded = MR_TRUE;
                }
                else
                {
                  succeeded = (Var_43 > Var_44);
                  if (succeeded)
                  {
                    SubResult6_21 = (MR_Integer) 2;
                    succeeded = MR_TRUE;
                  }
                  else
                  {
                    succeeded = MR_TRUE;
                    succeeded = !(succeeded);
                    if (succeeded)
                    {
                      SubResult6_21 = (MR_Integer) 0;
                      succeeded = MR_TRUE;
                    }
                  }
                }
                if (succeeded)
                  *HeadVar__1_1 = SubResult6_21;
                else
                {
                  MR_Word SubResult7_24;
                  MR_Integer Var_45 = (MR_Integer) (ArgX7_22);
                  MR_Integer Var_46 = (MR_Integer) (ArgY7_23);

                  succeeded = (Var_45 < Var_46);
                  if (succeeded)
                  {
                    SubResult7_24 = (MR_Integer) 1;
                    succeeded = MR_TRUE;
                  }
                  else
                  {
                    succeeded = (Var_45 > Var_46);
                    if (succeeded)
                    {
                      SubResult7_24 = (MR_Integer) 2;
                      succeeded = MR_TRUE;
                    }
                    else
                    {
                      succeeded = MR_TRUE;
                      succeeded = !(succeeded);
                      if (succeeded)
                      {
                        SubResult7_24 = (MR_Integer) 0;
                        succeeded = MR_TRUE;
                      }
                    }
                  }
                  if (succeeded)
                    *HeadVar__1_1 = SubResult7_24;
                  else
                  {
                    MR_Word SubResult8_27;
                    MR_Integer Var_47 = (MR_Integer) (ArgX8_25);
                    MR_Integer Var_48 = (MR_Integer) (ArgY8_26);

                    succeeded = (Var_47 < Var_48);
                    if (succeeded)
                    {
                      SubResult8_27 = (MR_Integer) 1;
                      succeeded = MR_TRUE;
                    }
                    else
                    {
                      succeeded = (Var_47 > Var_48);
                      if (succeeded)
                      {
                        SubResult8_27 = (MR_Integer) 2;
                        succeeded = MR_TRUE;
                      }
                      else
                      {
                        succeeded = MR_TRUE;
                        succeeded = !(succeeded);
                        if (succeeded)
                        {
                          SubResult8_27 = (MR_Integer) 0;
                          succeeded = MR_TRUE;
                        }
                      }
                    }
                    if (succeeded)
                      *HeadVar__1_1 = SubResult8_27;
                    else
                    {
                      mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__det_util_scalar_common_1[1]), HeadVar__1_1, ((MR_Box) (ArgX9_28)), ((MR_Box) (ArgY9_29)));
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
}

MR_bool MR_CALL 
check_hlds__det_util____Unify____det_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_21 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_22 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_21 == CastY_22);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word TypeInfo_25_25;
      MR_Word TypeCtorInfo_26_26;
      MR_Word TypeInfo_27_27;
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
      MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3))));
      MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));
      MR_Word ArgX5_11 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 4))) >> 3)) & (MR_Integer) 1);
      MR_Word ArgY5_12 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4))) >> 3)) & (MR_Integer) 1);
      MR_Word ArgX6_13 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 4))) >> 2)) & (MR_Integer) 1);
      MR_Word ArgY6_14 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4))) >> 2)) & (MR_Integer) 1);
      MR_Word ArgX7_15 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 4))) >> 1)) & (MR_Integer) 1);
      MR_Word ArgY7_16 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4))) >> 1)) & (MR_Integer) 1);
      MR_Word ArgX8_17 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 4))) & (MR_Integer) 1);
      MR_Word ArgY8_18 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4))) & (MR_Integer) 1);
      MR_Word ArgX9_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 5))));
      MR_Word ArgY9_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 5))));

      succeeded = hlds__hlds_module____Unify____module_info_0_0(ArgX1_3, ArgY1_4);
      if (succeeded)
      {
        succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(ArgX2_5, ArgY2_6);
        if (succeeded)
        {
          TypeInfo_25_25 = (MR_Word) (&check_hlds__det_util_scalar_common_1[0]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_25_25, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
          if (succeeded)
          {
            TypeCtorInfo_26_26 = (MR_Word) (&hlds__vartypes__hlds__vartypes__type_ctor_info_vartypes_0);
            succeeded = mercury__builtin__unify_2_p_0(TypeCtorInfo_26_26, ((MR_Box) (ArgX4_9)), ((MR_Box) (ArgY4_10)));
            if (succeeded)
            {
              succeeded = (ArgX5_11 == ArgY5_12);
              if (succeeded)
              {
                succeeded = (ArgX6_13 == ArgY6_14);
                if (succeeded)
                {
                  succeeded = (ArgX7_15 == ArgY7_16);
                  if (succeeded)
                  {
                    succeeded = (ArgX8_17 == ArgY8_18);
                    if (succeeded)
                    {
                      TypeInfo_27_27 = (MR_Word) (&check_hlds__det_util_scalar_common_1[1]);
                      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_27_27, ((MR_Box) (ArgX9_19)), ((MR_Box) (ArgY9_20)));
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    return succeeded;
  }
}

void MR_CALL 
check_hlds__det_util____Compare____contains_require_scope_0_0(
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
check_hlds__det_util____Unify____contains_require_scope_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

void MR_CALL 
check_hlds__det_util____Compare____contains_incomplete_switch_0_0(
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
check_hlds__det_util____Unify____contains_incomplete_switch_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

void MR_CALL 
check_hlds__det_util____Compare____contains_format_call_0_0(
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
check_hlds__det_util____Unify____contains_format_call_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

void MR_CALL 
check_hlds__det_util__det_info_set_has_incomplete_switch_2_p_0(
  MR_Word STATE_VARIABLE_DetInfo_0_5,
  MR_Word * STATE_VARIABLE_DetInfo_6)
{
  {
    MR_bool succeeded;
    MR_Word Var_25 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_DetInfo_0_5, (MR_Integer) 4))) & (MR_Integer) 1);

    succeeded = ((MR_Integer) 1 == Var_25);
    if (succeeded)
      *STATE_VARIABLE_DetInfo_6 = STATE_VARIABLE_DetInfo_0_5;
    else
    {
      MR_Word Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_DetInfo_0_5, (MR_Integer) 0))));
      MR_Word Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_DetInfo_0_5, (MR_Integer) 1))));
      MR_Word Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_DetInfo_0_5, (MR_Integer) 2))));
      MR_Word Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_DetInfo_0_5, (MR_Integer) 3))));
      MR_Word Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_DetInfo_0_5, (MR_Integer) 5))));
      MR_Unsigned packed_word_1 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_DetInfo_0_5, (MR_Integer) 4)));

      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
        *STATE_VARIABLE_DetInfo_6 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_16));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_17));
        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_18));
        MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_19));
        MR_hl_field(MR_mktag(0), base, 4) = (MR_Box) ((((packed_word_1 & (~((MR_Unsigned) 1U)))) | (MR_Unsigned) ((MR_Integer) 1)));
        MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_24));
      }
    }
  }
}

void MR_CALL 
check_hlds__det_util__det_info_set_has_req_scope_2_p_0(
  MR_Word STATE_VARIABLE_DetInfo_0_5,
  MR_Word * STATE_VARIABLE_DetInfo_6)
{
  {
    MR_bool succeeded;
    MR_Word Var_25 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_DetInfo_0_5, (MR_Integer) 4))) >> 1)) & (MR_Integer) 1);

    succeeded = ((MR_Integer) 1 == Var_25);
    if (succeeded)
      *STATE_VARIABLE_DetInfo_6 = STATE_VARIABLE_DetInfo_0_5;
    else
    {
      MR_Word Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_DetInfo_0_5, (MR_Integer) 0))));
      MR_Word Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_DetInfo_0_5, (MR_Integer) 1))));
      MR_Word Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_DetInfo_0_5, (MR_Integer) 2))));
      MR_Word Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_DetInfo_0_5, (MR_Integer) 3))));
      MR_Word Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_DetInfo_0_5, (MR_Integer) 5))));
      MR_Unsigned packed_word_1 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_DetInfo_0_5, (MR_Integer) 4)));

      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
        *STATE_VARIABLE_DetInfo_6 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_16));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_17));
        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_18));
        MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_19));
        MR_hl_field(MR_mktag(0), base, 4) = (MR_Box) ((((packed_word_1 & (~((MR_Unsigned) 2U)))) | (((MR_Unsigned) ((MR_Integer) 1) << 1))));
        MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_24));
      }
    }
  }
}

void MR_CALL 
check_hlds__det_util__det_info_set_has_format_call_2_p_0(
  MR_Word STATE_VARIABLE_DetInfo_0_5,
  MR_Word * STATE_VARIABLE_DetInfo_6)
{
  {
    MR_bool succeeded;
    MR_Word Var_25 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_DetInfo_0_5, (MR_Integer) 4))) >> 2)) & (MR_Integer) 1);

    succeeded = ((MR_Integer) 1 == Var_25);
    if (succeeded)
      *STATE_VARIABLE_DetInfo_6 = STATE_VARIABLE_DetInfo_0_5;
    else
    {
      MR_Word Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_DetInfo_0_5, (MR_Integer) 0))));
      MR_Word Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_DetInfo_0_5, (MR_Integer) 1))));
      MR_Word Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_DetInfo_0_5, (MR_Integer) 2))));
      MR_Word Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_DetInfo_0_5, (MR_Integer) 3))));
      MR_Word Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_DetInfo_0_5, (MR_Integer) 5))));
      MR_Unsigned packed_word_1 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_DetInfo_0_5, (MR_Integer) 4)));

      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
        *STATE_VARIABLE_DetInfo_6 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_16));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_17));
        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_18));
        MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_19));
        MR_hl_field(MR_mktag(0), base, 4) = (MR_Box) ((((packed_word_1 & (~((MR_Unsigned) 4U)))) | (((MR_Unsigned) ((MR_Integer) 1) << 2))));
        MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_24));
      }
    }
  }
}

void MR_CALL 
check_hlds__det_util__det_info_set_module_info_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_DetInfo_0_6,
  MR_Word * STATE_VARIABLE_DetInfo_7)
{
  {
    MR_bool succeeded;
    MR_Word Var_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_DetInfo_0_6, (MR_Integer) 0))));

    succeeded = (((MR_Word) X_4) == ((MR_Word) Var_8));
    if (succeeded)
      *STATE_VARIABLE_DetInfo_7 = STATE_VARIABLE_DetInfo_0_6;
    else
    {
      MR_Word Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_DetInfo_0_6, (MR_Integer) 1))));
      MR_Word Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_DetInfo_0_6, (MR_Integer) 2))));
      MR_Word Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_DetInfo_0_6, (MR_Integer) 3))));
      MR_Word Var_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_DetInfo_0_6, (MR_Integer) 5))));
      MR_Unsigned packed_word_1 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_DetInfo_0_6, (MR_Integer) 4)));

      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
        *STATE_VARIABLE_DetInfo_7 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (X_4));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_19));
        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_20));
        MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_21));
        MR_hl_field(MR_mktag(0), base, 4) = (MR_Box) (packed_word_1);
        MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_26));
      }
    }
  }
}

void MR_CALL 
check_hlds__det_util__det_info_get_error_specs_2_p_0(
  MR_Word DetInfo_3,
  MR_Word * X_4)
{
  *X_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetInfo_3, (MR_Integer) 5))));
}

void MR_CALL 
check_hlds__det_util__det_info_get_has_incomplete_switch_2_p_0(
  MR_Word DetInfo_3,
  MR_Word * X_4)
{
  *X_4 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), DetInfo_3, (MR_Integer) 4))) & (MR_Integer) 1);
}

void MR_CALL 
check_hlds__det_util__det_info_get_has_req_scope_2_p_0(
  MR_Word DetInfo_3,
  MR_Word * X_4)
{
  *X_4 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), DetInfo_3, (MR_Integer) 4))) >> 1)) & (MR_Integer) 1);
}

void MR_CALL 
check_hlds__det_util__det_info_get_has_format_call_2_p_0(
  MR_Word DetInfo_3,
  MR_Word * X_4)
{
  *X_4 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), DetInfo_3, (MR_Integer) 4))) >> 2)) & (MR_Integer) 1);
}

void MR_CALL 
check_hlds__det_util__det_info_get_pess_extra_vars_2_p_0(
  MR_Word DetInfo_3,
  MR_Word * X_4)
{
  *X_4 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), DetInfo_3, (MR_Integer) 4))) >> 3)) & (MR_Integer) 1);
}

void MR_CALL 
check_hlds__det_util__det_info_get_vartypes_2_p_0(
  MR_Word DetInfo_3,
  MR_Word * X_4)
{
  *X_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetInfo_3, (MR_Integer) 3))));
}

void MR_CALL 
check_hlds__det_util__det_info_get_varset_2_p_0(
  MR_Word DetInfo_3,
  MR_Word * X_4)
{
  *X_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetInfo_3, (MR_Integer) 2))));
}

void MR_CALL 
check_hlds__det_util__det_info_get_pred_proc_id_2_p_0(
  MR_Word DetInfo_3,
  MR_Word * X_4)
{
  *X_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetInfo_3, (MR_Integer) 1))));
}

void MR_CALL 
check_hlds__det_util__det_info_get_module_info_2_p_0(
  MR_Word DetInfo_3,
  MR_Word * X_4)
{
  *X_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetInfo_3, (MR_Integer) 0))));
}

void MR_CALL 
check_hlds__det_util__det_info_init_7_p_0(
  MR_Word ModuleInfo_8,
  MR_Word PredProcId_9,
  MR_Word VarSet_10,
  MR_Word VarTypes_11,
  MR_Word PessExtraVars_12,
  MR_Word Specs_13,
  MR_Word * DetInfo_14)
{
  {
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      *DetInfo_14 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ModuleInfo_8));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (PredProcId_9));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (VarSet_10));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (VarTypes_11));
      MR_hl_field(MR_mktag(0), base, 4) = (MR_Box) (((((MR_Unsigned) (PessExtraVars_12) << 3)) | (((((MR_Unsigned) ((MR_Integer) 0) << 2)) | (((((MR_Unsigned) ((MR_Integer) 0) << 1)) | (MR_Unsigned) ((MR_Integer) 0)))))));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Specs_13));
    }
  }
}

void MR_CALL 
check_hlds__det_util__det_info_add_error_spec_3_p_0(
  MR_Word Spec_4,
  MR_Word STATE_VARIABLE_DetInfo_0_8,
  MR_Word * STATE_VARIABLE_DetInfo_9)
{
  {
    MR_Word Specs0_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_DetInfo_0_8, (MR_Integer) 5))));
    MR_Word Specs_7;
    MR_Word Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_DetInfo_0_8, (MR_Integer) 0))));
    MR_Word Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_DetInfo_0_8, (MR_Integer) 1))));
    MR_Word Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_DetInfo_0_8, (MR_Integer) 2))));
    MR_Word Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_DetInfo_0_8, (MR_Integer) 3))));
    MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_DetInfo_0_8, (MR_Integer) 4)));

    {
      Specs_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Specs_7, 0) = ((MR_Box) (Spec_4));
      MR_hl_field(MR_mktag(1), Specs_7, 1) = ((MR_Box) (Specs0_6));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_DetInfo_9 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_13));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_14));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_15));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_16));
      MR_hl_field(MR_mktag(0), base, 4) = (MR_Box) (packed_word_0);
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Specs_7));
    }
  }
}

MR_bool MR_CALL 
check_hlds__det_util__det_no_output_vars_4_p_0(
  MR_Word DetInfo_5,
  MR_Word InstMap_6,
  MR_Word InstMapDelta_7,
  MR_Word Vars_8)
{
  {
    MR_bool succeeded;
    MR_Word ModuleInfo_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetInfo_5, (MR_Integer) 0))));
    MR_Word VarTypes_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetInfo_5, (MR_Integer) 3))));

    succeeded = hlds__instmap__instmap_delta_no_output_vars_5_p_0(ModuleInfo_9, VarTypes_10, InstMap_6, InstMapDelta_7, Vars_8);
    return succeeded;
  }
}

MR_bool MR_CALL 
check_hlds__det_util__det_lookup_var_type_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word ProcInfo_6,
  MR_Word Var_7,
  MR_Word * TypeDefn_8)
{
  {
    MR_bool succeeded;
    MR_Word VarTypes_9;
    MR_Word Type_10;
    MR_Word TypeCtor_11;
    MR_Word TypeTable_12;

    hlds__hlds_pred__proc_info_get_vartypes_2_p_0(ProcInfo_6, &VarTypes_9);
    hlds__vartypes__lookup_var_type_3_p_0(VarTypes_9, Var_7, &Type_10);
    parse_tree__prog_type__type_to_ctor_det_2_p_0(Type_10, &TypeCtor_11);
    hlds__hlds_module__module_info_get_type_table_2_p_0(ModuleInfo_5, &TypeTable_12);
    succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(TypeTable_12, TypeCtor_11, TypeDefn_8);
    return succeeded;
  }
}

void MR_CALL 
check_hlds__det_util__det_get_proc_info_2_p_0(
  MR_Word DetInfo_3,
  MR_Word * ProcInfo_4)
{
  {
    MR_Word ModuleInfo_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetInfo_3, (MR_Integer) 0))));
    MR_Word PredProcId_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetInfo_3, (MR_Integer) 1))));

    hlds__hlds_module__module_info_proc_info_3_p_0(ModuleInfo_5, PredProcId_6, ProcInfo_4);
  }
}

void MR_CALL 
check_hlds__det_util__det_lookup_pred_info_and_detism_5_p_0(
  MR_Word DetInfo_6,
  MR_Word PredId_7,
  MR_Integer ModeId_8,
  MR_Word * PredInfo_9,
  MR_Word * Detism_10)
{
  {
    MR_Word ModuleInfo_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetInfo_6, (MR_Integer) 0))));
    MR_Word PredTable_12;
    MR_Word ProcTable_13;
    MR_Word ProcInfo_14;
    MR_Box conv0_PredInfo_9;
    MR_Box conv1_ProcInfo_14;

    hlds__hlds_module__module_info_get_preds_2_p_0(ModuleInfo_11, &PredTable_12);
    mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), PredTable_12, ((MR_Box) (PredId_7)), &conv0_PredInfo_9);
    *PredInfo_9 = ((MR_Word) (conv0_PredInfo_9));
    hlds__hlds_pred__pred_info_get_proc_table_2_p_0(*PredInfo_9, &ProcTable_13);
    mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ProcTable_13, ((MR_Box) (ModeId_8)), &conv1_ProcInfo_14);
    ProcInfo_14 = ((MR_Word) (conv1_ProcInfo_14));
    hlds__hlds_pred__proc_info_interface_determinism_2_p_0(ProcInfo_14, Detism_10);
  }
}

MR_bool MR_CALL 
check_hlds__det_util__interpret_unify_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_Subst_0_3,
  MR_Word * STATE_VARIABLE_Subst_4)
{
  {
    MR_bool succeeded;

    switch (MR_tag((MR_Word) HeadVar__2_2)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Y_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
          MR_Word Var_10;
          MR_Word Var_11;
          MR_Word Var_13;
          MR_Word Var_14;

          Var_13 = mercury__term__context_init_0_f_0();
          {
            Var_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_10, 0) = ((MR_Box) (HeadVar__1_1));
            MR_hl_field(MR_mktag(1), Var_10, 1) = ((MR_Box) (Var_13));
          }
          Var_14 = mercury__term__context_init_0_f_0();
          {
            Var_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_11, 0) = ((MR_Box) (Y_6));
            MR_hl_field(MR_mktag(1), Var_11, 1) = ((MR_Box) (Var_14));
          }
          succeeded = mercury__term__unify_term_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_10, Var_11, STATE_VARIABLE_Subst_0_3, STATE_VARIABLE_Subst_4);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ConsId_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
          MR_Word ArgVars_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2))));
          MR_Word ArgTerms_20;
          MR_Word RhsTerm_21;
          MR_Word Var_24;
          MR_Word Var_26;

          mercury__term__var_list_to_term_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ArgVars_18, &ArgTerms_20);
          succeeded = parse_tree__prog_util__cons_id_and_args_to_term_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ConsId_16, ArgTerms_20, &RhsTerm_21);
          if (succeeded)
          {
            Var_26 = mercury__term__context_init_0_f_0();
            {
              Var_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_24, 0) = ((MR_Box) (HeadVar__1_1));
              MR_hl_field(MR_mktag(1), Var_24, 1) = ((MR_Box) (Var_26));
            }
            succeeded = mercury__term__unify_term_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_24, RhsTerm_21, STATE_VARIABLE_Subst_0_3, STATE_VARIABLE_Subst_4);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          *STATE_VARIABLE_Subst_4 = STATE_VARIABLE_Subst_0_3;
          succeeded = MR_TRUE;
        }
        break;
    }
    return succeeded;
  }
}

void MR_CALL 
check_hlds__det_util__delete_unreachable_cases_4_p_0(
  MR_Word Cases0_5,
  MR_Word PossibleConsIds_6,
  MR_Word * ReachableCases_7,
  MR_Word * UnreachableGoals_8)
{
  {
    MR_Word PossibleConsIdSet_9;
    MR_Word RevReachableCases_10;
    MR_Word RevUnreachableGoals_11;

    PossibleConsIdSet_9 = mercury__set_tree234__list_to_set_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0), PossibleConsIds_6);
    check_hlds__det_util__delete_unreachable_cases_acc_6_p_0(Cases0_5, PossibleConsIdSet_9, (MR_Word) ((MR_Unsigned) 0U), &RevReachableCases_10, (MR_Word) ((MR_Unsigned) 0U), &RevUnreachableGoals_11);
    mercury__list__reverse_2_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0), RevReachableCases_10, ReachableCases_7);
    mercury__list__reverse_2_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), RevUnreachableGoals_11, UnreachableGoals_8);
  }
}

static MR_bool MR_CALL 
check_hlds__det_util__delete_unreachable_cases_acc_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = check_hlds__det_util__IntroducedFrom__pred__delete_unreachable_cases_acc__181__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__det_util__delete_unreachable_cases_acc_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = check_hlds__det_util__IntroducedFrom__pred__delete_unreachable_cases_acc__176__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__det_util__delete_unreachable_cases_acc_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_RevReachableCases_0_3,
  MR_Word * STATE_VARIABLE_RevReachableCases_4,
  MR_Word STATE_VARIABLE_RevUnreachableGoals_0_5,
  MR_Word * STATE_VARIABLE_RevUnreachableGoals_6)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_RevUnreachableGoals_6 = STATE_VARIABLE_RevUnreachableGoals_0_5;
      *STATE_VARIABLE_RevReachableCases_4 = STATE_VARIABLE_RevReachableCases_0_3;
    }
    else
    {
      MR_Word Case0_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Cases0_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word MainConsId0_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case0_14, (MR_Integer) 0))));
      MR_Word OtherConsIds0_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case0_14, (MR_Integer) 1))));
      MR_Word Goal_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case0_14, (MR_Integer) 2))));
      MR_Word STATE_VARIABLE_RevReachableCases_31_31;
      MR_Word STATE_VARIABLE_RevUnreachableGoals_34_34;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_RevReachableCases_0_3;
      MR_Word next_value_of_STATE_VARIABLE_RevUnreachableGoals_0_5;

      succeeded = mercury__set_tree234__contains_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0), HeadVar__2_2, ((MR_Box) (MainConsId0_19)));
      if (succeeded)
      {
        MR_Word OtherConsIds_22;
        MR_Word Case_23;
        MR_Word Var_30;

        {
          Var_30 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_30, 0) = ((MR_Box) (&check_hlds__det_util_scalar_common_2[0]));
          MR_hl_field(MR_mktag(0), Var_30, 1) = ((MR_Box) (check_hlds__det_util__delete_unreachable_cases_acc_6_p_0_1));
          MR_hl_field(MR_mktag(0), Var_30, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), Var_30, 3) = ((MR_Box) (HeadVar__2_2));
        }
        mercury__list__filter_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0), Var_30, OtherConsIds0_20, &OtherConsIds_22);
        {
          Case_23 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Case_23, 0) = ((MR_Box) (MainConsId0_19));
          MR_hl_field(MR_mktag(0), Case_23, 1) = ((MR_Box) (OtherConsIds_22));
          MR_hl_field(MR_mktag(0), Case_23, 2) = ((MR_Box) (Goal_21));
        }
        {
          STATE_VARIABLE_RevReachableCases_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevReachableCases_31_31, 0) = ((MR_Box) (Case_23));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevReachableCases_31_31, 1) = ((MR_Box) (STATE_VARIABLE_RevReachableCases_0_3));
        }
        STATE_VARIABLE_RevUnreachableGoals_34_34 = STATE_VARIABLE_RevUnreachableGoals_0_5;
      }
      else
      {
        MR_Word OtherConsIds1_24;
        MR_Word Var_32;

        {
          Var_32 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_32, 0) = ((MR_Box) (&check_hlds__det_util_scalar_common_2[0]));
          MR_hl_field(MR_mktag(0), Var_32, 1) = ((MR_Box) (check_hlds__det_util__delete_unreachable_cases_acc_6_p_0_2));
          MR_hl_field(MR_mktag(0), Var_32, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), Var_32, 3) = ((MR_Box) (HeadVar__2_2));
        }
        mercury__list__filter_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0), Var_32, OtherConsIds0_20, &OtherConsIds1_24);
        if ((OtherConsIds1_24 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          {
            STATE_VARIABLE_RevUnreachableGoals_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevUnreachableGoals_34_34, 0) = ((MR_Box) (Goal_21));
            MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevUnreachableGoals_34_34, 1) = ((MR_Box) (STATE_VARIABLE_RevUnreachableGoals_0_5));
          }
          STATE_VARIABLE_RevReachableCases_31_31 = STATE_VARIABLE_RevReachableCases_0_3;
        }
        else
        {
          MR_Word MainConsId_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), OtherConsIds1_24, (MR_Integer) 0))));
          MR_Word OtherConsIds_37 = ((MR_Word) ((MR_hl_field(MR_mktag(1), OtherConsIds1_24, (MR_Integer) 1))));
          MR_Word Case_38;

          {
            Case_38 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Case_38, 0) = ((MR_Box) (MainConsId_25));
            MR_hl_field(MR_mktag(0), Case_38, 1) = ((MR_Box) (OtherConsIds_37));
            MR_hl_field(MR_mktag(0), Case_38, 2) = ((MR_Box) (Goal_21));
          }
          {
            STATE_VARIABLE_RevReachableCases_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevReachableCases_31_31, 0) = ((MR_Box) (Case_38));
            MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevReachableCases_31_31, 1) = ((MR_Box) (STATE_VARIABLE_RevReachableCases_0_3));
          }
          STATE_VARIABLE_RevUnreachableGoals_34_34 = STATE_VARIABLE_RevUnreachableGoals_0_5;
        }
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Cases0_15;
      next_value_of_STATE_VARIABLE_RevReachableCases_0_3 = STATE_VARIABLE_RevReachableCases_31_31;
      next_value_of_STATE_VARIABLE_RevUnreachableGoals_0_5 = STATE_VARIABLE_RevUnreachableGoals_34_34;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_RevReachableCases_0_3 = next_value_of_STATE_VARIABLE_RevReachableCases_0_3;
      STATE_VARIABLE_RevUnreachableGoals_0_5 = next_value_of_STATE_VARIABLE_RevUnreachableGoals_0_5;
      continue;
    }
    break;
  }
}

static MR_bool MR_CALL 
check_hlds__det_util____Unify____contains_format_call_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__det_util____Unify____contains_format_call_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__det_util____Compare____contains_format_call_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__det_util____Compare____contains_format_call_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__det_util____Unify____contains_incomplete_switch_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__det_util____Unify____contains_incomplete_switch_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__det_util____Compare____contains_incomplete_switch_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__det_util____Compare____contains_incomplete_switch_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__det_util____Unify____contains_require_scope_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__det_util____Unify____contains_require_scope_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__det_util____Compare____contains_require_scope_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__det_util____Compare____contains_require_scope_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__det_util____Unify____det_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__det_util____Unify____det_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__det_util____Compare____det_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__det_util____Compare____det_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__det_util____Unify____maybe_changed_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__det_util____Unify____maybe_changed_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__det_util____Compare____maybe_changed_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__det_util____Compare____maybe_changed_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__det_util____Unify____report_pess_extra_vars_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__det_util____Unify____report_pess_extra_vars_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__det_util____Compare____report_pess_extra_vars_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__det_util____Compare____report_pess_extra_vars_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

void mercury__check_hlds__det_util__init(void)
{
}

void mercury__check_hlds__det_util__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&check_hlds__det_util__check_hlds__det_util__type_ctor_info_contains_format_call_0);
	MR_register_type_ctor_info(&check_hlds__det_util__check_hlds__det_util__type_ctor_info_contains_incomplete_switch_0);
	MR_register_type_ctor_info(&check_hlds__det_util__check_hlds__det_util__type_ctor_info_contains_require_scope_0);
	MR_register_type_ctor_info(&check_hlds__det_util__check_hlds__det_util__type_ctor_info_det_info_0);
	MR_register_type_ctor_info(&check_hlds__det_util__check_hlds__det_util__type_ctor_info_maybe_changed_0);
	MR_register_type_ctor_info(&check_hlds__det_util__check_hlds__det_util__type_ctor_info_report_pess_extra_vars_0);
}

void mercury__check_hlds__det_util__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__check_hlds__det_util__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module check_hlds.det_util.
