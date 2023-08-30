/*
** Automatically generated from `det_util.m'
** by the Mercury compiler,
** version rotd-2023-08-30
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
#include "counter.mih"
#include "deconstruct.mih"
#include "digraph.mih"
#include "edit_seq.mih"
#include "enum.mih"
#include "getopt.mih"
#include "hlds.mih"
#include "integer.mih"
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
#include "term_subst.mih"
#include "term_unify.mih"
#include "time.mih"
#include "transform_hlds.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.proc_requests.mih"
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
#include "libs.dependency_graph.mih"
#include "libs.globals.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
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
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_table.mih"
#include "parse_tree.vartypes.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"




static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__det_util__set_tree234__pti_set_tree234_1__plain_parse_tree__prog_data__type_ctor_info_cons_id_0;

static const MR_EnumFunctorDesc check_hlds__det_util__check_hlds__det_util__enum_functor_desc_contains_format_call_0_0;

static const MR_EnumFunctorDesc check_hlds__det_util__check_hlds__det_util__enum_functor_desc_contains_format_call_0_1;

static const MR_EnumFunctorDescPtr check_hlds__det_util__check_hlds__det_util__enum_ordinal_ordered_contains_format_call_0[2];

static const MR_EnumFunctorDescPtr check_hlds__det_util__check_hlds__det_util__enum_name_ordered_contains_format_call_0[2];

static const MR_Integer check_hlds__det_util__check_hlds__det_util__functor_number_map_contains_format_call_0[2];

static const MR_EnumFunctorDesc check_hlds__det_util__check_hlds__det_util__enum_functor_desc_contains_incomplete_switch_0_0;

static const MR_EnumFunctorDesc check_hlds__det_util__check_hlds__det_util__enum_functor_desc_contains_incomplete_switch_0_1;

static const MR_EnumFunctorDescPtr check_hlds__det_util__check_hlds__det_util__enum_ordinal_ordered_contains_incomplete_switch_0[2];

static const MR_EnumFunctorDescPtr check_hlds__det_util__check_hlds__det_util__enum_name_ordered_contains_incomplete_switch_0[2];

static const MR_Integer check_hlds__det_util__check_hlds__det_util__functor_number_map_contains_incomplete_switch_0[2];

static const MR_EnumFunctorDesc check_hlds__det_util__check_hlds__det_util__enum_functor_desc_contains_require_scope_0_0;

static const MR_EnumFunctorDesc check_hlds__det_util__check_hlds__det_util__enum_functor_desc_contains_require_scope_0_1;

static const MR_EnumFunctorDescPtr check_hlds__det_util__check_hlds__det_util__enum_ordinal_ordered_contains_require_scope_0[2];

static const MR_EnumFunctorDescPtr check_hlds__det_util__check_hlds__det_util__enum_name_ordered_contains_require_scope_0[2];

static const MR_Integer check_hlds__det_util__check_hlds__det_util__functor_number_map_contains_require_scope_0[2];

static const MR_FA_TypeInfo_Struct1 check_hlds__det_util__list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0;

static const MR_PseudoTypeInfo check_hlds__det_util__check_hlds__det_util__field_types_det_info_0_0[8];

static const MR_ConstString check_hlds__det_util__check_hlds__det_util__field_names_det_info_0_0[8];

static const MR_DuArgLocn check_hlds__det_util__check_hlds__det_util__field_locns_det_info_0_0[8];

static const MR_DuFunctorDesc check_hlds__det_util__check_hlds__det_util__du_functor_desc_det_info_0_0;

static const MR_DuFunctorDescPtr check_hlds__det_util__check_hlds__det_util__du_stag_ordered_det_info_0_0[1];

static const MR_DuPtagLayout check_hlds__det_util__check_hlds__det_util__du_ptag_ordered_det_info_0[1];

static const MR_DuFunctorDescPtr check_hlds__det_util__check_hlds__det_util__du_name_ordered_det_info_0[1];

static const MR_Integer check_hlds__det_util__check_hlds__det_util__functor_number_map_det_info_0[1];

static const MR_EnumFunctorDesc check_hlds__det_util__check_hlds__det_util__enum_functor_desc_report_pess_extra_vars_0_0;

static const MR_EnumFunctorDesc check_hlds__det_util__check_hlds__det_util__enum_functor_desc_report_pess_extra_vars_0_1;

static const MR_EnumFunctorDescPtr check_hlds__det_util__check_hlds__det_util__enum_ordinal_ordered_report_pess_extra_vars_0[2];

static const MR_EnumFunctorDescPtr check_hlds__det_util__check_hlds__det_util__enum_name_ordered_report_pess_extra_vars_0[2];

static const MR_Integer check_hlds__det_util__check_hlds__det_util__functor_number_map_report_pess_extra_vars_0[2];

static MR_bool MR_CALL 
check_hlds__det_util__IntroducedFrom__pred__delete_unreachable_cases_acc__170__1_2_p_0(
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__2_43);

static MR_bool MR_CALL 
check_hlds__det_util__IntroducedFrom__pred__delete_unreachable_cases_acc__165__1_2_p_0(
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__2_40);

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
check_hlds__det_util____Unify____report_pess_extra_vars_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__det_util____Compare____report_pess_extra_vars_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box check_hlds__det_util_scalar_common_1[1][2];

static /* final */ const MR_Box check_hlds__det_util_scalar_common_2[1][5];




static /* final */ const MR_Box check_hlds__det_util_scalar_common_1[1][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0))
  },
};

static /* final */ const MR_Box check_hlds__det_util_scalar_common_2[1][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&check_hlds__det_util__set_tree234__pti_set_tree234_1__plain_parse_tree__prog_data__type_ctor_info_cons_id_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__det_util__set_tree234__pti_set_tree234_1__plain_parse_tree__prog_data__type_ctor_info_cons_id_0 = {
  &mercury__set_tree234__set_tree234__type_ctor_info_set_tree234_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0) }
};

static const MR_EnumFunctorDesc check_hlds__det_util__check_hlds__det_util__enum_functor_desc_contains_format_call_0_0 = {
  (MR_String) "does_not_contain_format_call",
  INT32_C(0)
};

static const MR_EnumFunctorDesc check_hlds__det_util__check_hlds__det_util__enum_functor_desc_contains_format_call_0_1 = {
  (MR_String) "contains_format_call",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr check_hlds__det_util__check_hlds__det_util__enum_ordinal_ordered_contains_format_call_0[2] = {
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
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__det_util____Unify____contains_format_call_0_0_10001)),
  ((MR_Box) (check_hlds__det_util____Compare____contains_format_call_0_0_10001)),
  (MR_String) "check_hlds.det_util",
  (MR_String) "contains_format_call",
  { check_hlds__det_util__check_hlds__det_util__enum_name_ordered_contains_format_call_0 },
  { check_hlds__det_util__check_hlds__det_util__enum_ordinal_ordered_contains_format_call_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  check_hlds__det_util__check_hlds__det_util__functor_number_map_contains_format_call_0,

};

static const MR_EnumFunctorDesc check_hlds__det_util__check_hlds__det_util__enum_functor_desc_contains_incomplete_switch_0_0 = {
  (MR_String) "does_not_contain_incomplete_switch",
  INT32_C(0)
};

static const MR_EnumFunctorDesc check_hlds__det_util__check_hlds__det_util__enum_functor_desc_contains_incomplete_switch_0_1 = {
  (MR_String) "contains_incomplete_switch",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr check_hlds__det_util__check_hlds__det_util__enum_ordinal_ordered_contains_incomplete_switch_0[2] = {
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
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__det_util____Unify____contains_incomplete_switch_0_0_10001)),
  ((MR_Box) (check_hlds__det_util____Compare____contains_incomplete_switch_0_0_10001)),
  (MR_String) "check_hlds.det_util",
  (MR_String) "contains_incomplete_switch",
  { check_hlds__det_util__check_hlds__det_util__enum_name_ordered_contains_incomplete_switch_0 },
  { check_hlds__det_util__check_hlds__det_util__enum_ordinal_ordered_contains_incomplete_switch_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  check_hlds__det_util__check_hlds__det_util__functor_number_map_contains_incomplete_switch_0,

};

static const MR_EnumFunctorDesc check_hlds__det_util__check_hlds__det_util__enum_functor_desc_contains_require_scope_0_0 = {
  (MR_String) "does_not_contain_require_scope",
  INT32_C(0)
};

static const MR_EnumFunctorDesc check_hlds__det_util__check_hlds__det_util__enum_functor_desc_contains_require_scope_0_1 = {
  (MR_String) "contains_require_scope",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr check_hlds__det_util__check_hlds__det_util__enum_ordinal_ordered_contains_require_scope_0[2] = {
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
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__det_util____Unify____contains_require_scope_0_0_10001)),
  ((MR_Box) (check_hlds__det_util____Compare____contains_require_scope_0_0_10001)),
  (MR_String) "check_hlds.det_util",
  (MR_String) "contains_require_scope",
  { check_hlds__det_util__check_hlds__det_util__enum_name_ordered_contains_require_scope_0 },
  { check_hlds__det_util__check_hlds__det_util__enum_ordinal_ordered_contains_require_scope_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  check_hlds__det_util__check_hlds__det_util__functor_number_map_contains_require_scope_0,

};

static const MR_FA_TypeInfo_Struct1 check_hlds__det_util__list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0) }
};

static const MR_PseudoTypeInfo check_hlds__det_util__check_hlds__det_util__field_types_det_info_0_0[8] = {
  (MR_PseudoTypeInfo) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0),
  (MR_PseudoTypeInfo) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_0),
  (MR_PseudoTypeInfo) (&check_hlds__det_util__check_hlds__det_util__type_ctor_info_report_pess_extra_vars_0),
  (MR_PseudoTypeInfo) (&check_hlds__det_util__check_hlds__det_util__type_ctor_info_contains_format_call_0),
  (MR_PseudoTypeInfo) (&check_hlds__det_util__check_hlds__det_util__type_ctor_info_contains_require_scope_0),
  (MR_PseudoTypeInfo) (&check_hlds__det_util__check_hlds__det_util__type_ctor_info_contains_incomplete_switch_0),
  (MR_PseudoTypeInfo) (&check_hlds__det_util__list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0)
};

static const MR_ConstString check_hlds__det_util__check_hlds__det_util__field_names_det_info_0_0[8] = {
  (MR_String) "di_module_info",
  (MR_String) "di_pred_proc_id",
  (MR_String) "di_var_table",
  (MR_String) "di_pess_extra_vars",
  (MR_String) "di_has_format_call",
  (MR_String) "di_has_req_scope",
  (MR_String) "di_has_incomplete_switch",
  (MR_String) "di_error_specs"
};

static const MR_DuArgLocn check_hlds__det_util__check_hlds__det_util__field_locns_det_info_0_0[8] = {
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
    (MR_Integer) 3,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 3,
    (MR_Integer) 2,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 3,
    (MR_Integer) 1,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 3,
    (MR_Integer) 0,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 4,
    (MR_Integer) 0,
    (MR_Integer) 0
  }
};

static const MR_DuFunctorDesc check_hlds__det_util__check_hlds__det_util__du_functor_desc_det_info_0_0 = {
  (MR_String) "det_info",
  INT16_C(8),
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

static const MR_DuFunctorDescPtr check_hlds__det_util__check_hlds__det_util__du_stag_ordered_det_info_0_0[1] = { &check_hlds__det_util__check_hlds__det_util__du_functor_desc_det_info_0_0 };

static const MR_DuPtagLayout check_hlds__det_util__check_hlds__det_util__du_ptag_ordered_det_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__det_util__check_hlds__det_util__du_stag_ordered_det_info_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__det_util__check_hlds__det_util__du_name_ordered_det_info_0[1] = { &check_hlds__det_util__check_hlds__det_util__du_functor_desc_det_info_0_0 };

static const MR_Integer check_hlds__det_util__check_hlds__det_util__functor_number_map_det_info_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct check_hlds__det_util__check_hlds__det_util__type_ctor_info_det_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__det_util____Unify____det_info_0_0_10001)),
  ((MR_Box) (check_hlds__det_util____Compare____det_info_0_0_10001)),
  (MR_String) "check_hlds.det_util",
  (MR_String) "det_info",
  { check_hlds__det_util__check_hlds__det_util__du_name_ordered_det_info_0 },
  { check_hlds__det_util__check_hlds__det_util__du_ptag_ordered_det_info_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  check_hlds__det_util__check_hlds__det_util__functor_number_map_det_info_0,

};

static const MR_EnumFunctorDesc check_hlds__det_util__check_hlds__det_util__enum_functor_desc_report_pess_extra_vars_0_0 = {
  (MR_String) "pess_extra_vars_report",
  INT32_C(0)
};

static const MR_EnumFunctorDesc check_hlds__det_util__check_hlds__det_util__enum_functor_desc_report_pess_extra_vars_0_1 = {
  (MR_String) "pess_extra_vars_ignore",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr check_hlds__det_util__check_hlds__det_util__enum_ordinal_ordered_report_pess_extra_vars_0[2] = {
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
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__det_util____Unify____report_pess_extra_vars_0_0_10001)),
  ((MR_Box) (check_hlds__det_util____Compare____report_pess_extra_vars_0_0_10001)),
  (MR_String) "check_hlds.det_util",
  (MR_String) "report_pess_extra_vars",
  { check_hlds__det_util__check_hlds__det_util__enum_name_ordered_report_pess_extra_vars_0 },
  { check_hlds__det_util__check_hlds__det_util__enum_ordinal_ordered_report_pess_extra_vars_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  check_hlds__det_util__check_hlds__det_util__functor_number_map_report_pess_extra_vars_0,

};

static MR_bool MR_CALL 
check_hlds__det_util__IntroducedFrom__pred__delete_unreachable_cases_acc__170__1_2_p_0(
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__2_43)
{
  MR_bool succeeded;

  succeeded = mercury__set_tree234__contains_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0), HeadVar__2_2, ((MR_Box) (HeadVar__2_43)));
  return succeeded;
}

static MR_bool MR_CALL 
check_hlds__det_util__IntroducedFrom__pred__delete_unreachable_cases_acc__165__1_2_p_0(
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__2_40)
{
  MR_bool succeeded;

  succeeded = mercury__set_tree234__contains_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0), HeadVar__2_2, ((MR_Box) (HeadVar__2_40)));
  return succeeded;
}

void MR_CALL 
check_hlds__det_util____Compare____report_pess_extra_vars_0_0(
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
check_hlds__det_util____Unify____report_pess_extra_vars_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
check_hlds__det_util____Compare____det_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_27 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_28 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_27 == CastY_28);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 2))));
    MR_Word ArgX4_13 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))) >> 3)) & (MR_Integer) 1);
    MR_Word ArgY4_14 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 3))) >> 3)) & (MR_Integer) 1);
    MR_Word ArgX5_16 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))) >> 2)) & (MR_Integer) 1);
    MR_Word ArgY5_17 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 3))) >> 2)) & (MR_Integer) 1);
    MR_Word ArgX6_19 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgY6_20 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 3))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgX7_22 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))) & (MR_Integer) 1);
    MR_Word ArgY7_23 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 3))) & (MR_Integer) 1);
    MR_Word ArgX8_25 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 4))));
    MR_Word ArgY8_26 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 4))));
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

        parse_tree__var_table____Compare____var_table_0_0(&SubResult3_12, ArgX3_10, ArgY3_11);
        succeeded = (SubResult3_12 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
        {
          MR_Word SubResult4_15;
          MR_Integer Var_37 = (MR_Integer) (ArgX4_13);
          MR_Integer Var_38 = (MR_Integer) (ArgY4_14);

          succeeded = (Var_37 < Var_38);
          if (succeeded)
          {
            SubResult4_15 = (MR_Integer) 1;
            succeeded = MR_TRUE;
          }
          else
          {
            succeeded = (Var_37 > Var_38);
            if (succeeded)
            {
              SubResult4_15 = (MR_Integer) 2;
              succeeded = MR_TRUE;
            }
            else
            {
              succeeded = MR_TRUE;
              succeeded = !(succeeded);
              if (succeeded)
              {
                SubResult4_15 = (MR_Integer) 0;
                succeeded = MR_TRUE;
              }
            }
          }
          if (succeeded)
            *HeadVar__1_1 = SubResult4_15;
          else
          {
            MR_Word SubResult5_18;
            MR_Integer Var_39 = (MR_Integer) (ArgX5_16);
            MR_Integer Var_40 = (MR_Integer) (ArgY5_17);

            succeeded = (Var_39 < Var_40);
            if (succeeded)
            {
              SubResult5_18 = (MR_Integer) 1;
              succeeded = MR_TRUE;
            }
            else
            {
              succeeded = (Var_39 > Var_40);
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
              MR_Integer Var_41 = (MR_Integer) (ArgX6_19);
              MR_Integer Var_42 = (MR_Integer) (ArgY6_20);

              succeeded = (Var_41 < Var_42);
              if (succeeded)
              {
                SubResult6_21 = (MR_Integer) 1;
                succeeded = MR_TRUE;
              }
              else
              {
                succeeded = (Var_41 > Var_42);
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
                MR_Integer Var_43 = (MR_Integer) (ArgX7_22);
                MR_Integer Var_44 = (MR_Integer) (ArgY7_23);

                succeeded = (Var_43 < Var_44);
                if (succeeded)
                {
                  SubResult7_24 = (MR_Integer) 1;
                  succeeded = MR_TRUE;
                }
                else
                {
                  succeeded = (Var_43 > Var_44);
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
                  mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__det_util_scalar_common_1[0]), HeadVar__1_1, ((MR_Box) (ArgX8_25)), ((MR_Box) (ArgY8_26)));
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
  MR_bool succeeded;
  MR_Integer CastX_19 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_20 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_19 == CastY_20);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word TypeInfo_24_24;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgX4_9 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 3))) >> 3)) & (MR_Integer) 1);
    MR_Word ArgY4_10 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))) >> 3)) & (MR_Integer) 1);
    MR_Word ArgX5_11 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 3))) >> 2)) & (MR_Integer) 1);
    MR_Word ArgY5_12 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))) >> 2)) & (MR_Integer) 1);
    MR_Word ArgX6_13 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 3))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgY6_14 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgX7_15 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 3))) & (MR_Integer) 1);
    MR_Word ArgY7_16 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))) & (MR_Integer) 1);
    MR_Word ArgX8_17 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 4))));
    MR_Word ArgY8_18 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 4))));

    succeeded = hlds__hlds_module____Unify____module_info_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
    {
      succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(ArgX2_5, ArgY2_6);
      if (succeeded)
      {
        succeeded = parse_tree__var_table____Unify____var_table_0_0(ArgX3_7, ArgY3_8);
        if (succeeded)
        {
          succeeded = (ArgX4_9 == ArgY4_10);
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
                  TypeInfo_24_24 = (MR_Word) (&check_hlds__det_util_scalar_common_1[0]);
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_24_24, ((MR_Box) (ArgX8_17)), ((MR_Box) (ArgY8_18)));
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

void MR_CALL 
check_hlds__det_util____Compare____contains_require_scope_0_0(
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
check_hlds__det_util____Unify____contains_require_scope_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
check_hlds__det_util____Compare____contains_incomplete_switch_0_0(
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
check_hlds__det_util____Unify____contains_incomplete_switch_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
check_hlds__det_util____Compare____contains_format_call_0_0(
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
check_hlds__det_util____Unify____contains_format_call_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
check_hlds__det_util__det_info_set_has_incomplete_switch_2_p_0(
  MR_Word STATE_VARIABLE_DetInfo_0_5,
  MR_Word * STATE_VARIABLE_DetInfo_6)
{
  MR_bool succeeded;
  MR_Word Var_22 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_DetInfo_0_5, (MR_Integer) 3))) & (MR_Integer) 1);

  succeeded = ((MR_Integer) 1 == Var_22);
  if (succeeded)
    *STATE_VARIABLE_DetInfo_6 = STATE_VARIABLE_DetInfo_0_5;
  else
  {
    MR_Word Var_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_DetInfo_0_5, (MR_Integer) 0))));
    MR_Word Var_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_DetInfo_0_5, (MR_Integer) 1))));
    MR_Word Var_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_DetInfo_0_5, (MR_Integer) 2))));
    MR_Word Var_21 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_DetInfo_0_5, (MR_Integer) 4))));
    MR_Unsigned packed_word_1 = (MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_DetInfo_0_5, (MR_Integer) 3)));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_DetInfo_6 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_14));
      MR_hl_field(0, base, 1) = ((MR_Box) (Var_15));
      MR_hl_field(0, base, 2) = ((MR_Box) (Var_16));
      MR_hl_field(0, base, 3) = (MR_Box) ((((packed_word_1 & (~((MR_Unsigned) 1U)))) | (MR_Unsigned) ((MR_Integer) 1)));
      MR_hl_field(0, base, 4) = ((MR_Box) (Var_21));
    }
  }
}

void MR_CALL 
check_hlds__det_util__det_info_set_has_req_scope_2_p_0(
  MR_Word STATE_VARIABLE_DetInfo_0_5,
  MR_Word * STATE_VARIABLE_DetInfo_6)
{
  MR_bool succeeded;
  MR_Word Var_22 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_DetInfo_0_5, (MR_Integer) 3))) >> 1)) & (MR_Integer) 1);

  succeeded = ((MR_Integer) 1 == Var_22);
  if (succeeded)
    *STATE_VARIABLE_DetInfo_6 = STATE_VARIABLE_DetInfo_0_5;
  else
  {
    MR_Word Var_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_DetInfo_0_5, (MR_Integer) 0))));
    MR_Word Var_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_DetInfo_0_5, (MR_Integer) 1))));
    MR_Word Var_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_DetInfo_0_5, (MR_Integer) 2))));
    MR_Word Var_21 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_DetInfo_0_5, (MR_Integer) 4))));
    MR_Unsigned packed_word_1 = (MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_DetInfo_0_5, (MR_Integer) 3)));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_DetInfo_6 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_14));
      MR_hl_field(0, base, 1) = ((MR_Box) (Var_15));
      MR_hl_field(0, base, 2) = ((MR_Box) (Var_16));
      MR_hl_field(0, base, 3) = (MR_Box) ((((packed_word_1 & (~((MR_Unsigned) 2U)))) | (((MR_Unsigned) ((MR_Integer) 1) << 1))));
      MR_hl_field(0, base, 4) = ((MR_Box) (Var_21));
    }
  }
}

void MR_CALL 
check_hlds__det_util__det_info_set_has_format_call_2_p_0(
  MR_Word STATE_VARIABLE_DetInfo_0_5,
  MR_Word * STATE_VARIABLE_DetInfo_6)
{
  MR_bool succeeded;
  MR_Word Var_22 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_DetInfo_0_5, (MR_Integer) 3))) >> 2)) & (MR_Integer) 1);

  succeeded = ((MR_Integer) 1 == Var_22);
  if (succeeded)
    *STATE_VARIABLE_DetInfo_6 = STATE_VARIABLE_DetInfo_0_5;
  else
  {
    MR_Word Var_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_DetInfo_0_5, (MR_Integer) 0))));
    MR_Word Var_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_DetInfo_0_5, (MR_Integer) 1))));
    MR_Word Var_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_DetInfo_0_5, (MR_Integer) 2))));
    MR_Word Var_21 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_DetInfo_0_5, (MR_Integer) 4))));
    MR_Unsigned packed_word_1 = (MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_DetInfo_0_5, (MR_Integer) 3)));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_DetInfo_6 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_14));
      MR_hl_field(0, base, 1) = ((MR_Box) (Var_15));
      MR_hl_field(0, base, 2) = ((MR_Box) (Var_16));
      MR_hl_field(0, base, 3) = (MR_Box) ((((packed_word_1 & (~((MR_Unsigned) 4U)))) | (((MR_Unsigned) ((MR_Integer) 1) << 2))));
      MR_hl_field(0, base, 4) = ((MR_Box) (Var_21));
    }
  }
}

void MR_CALL 
check_hlds__det_util__det_info_set_module_info_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_DetInfo_0_6,
  MR_Word * STATE_VARIABLE_DetInfo_7)
{
  MR_bool succeeded;
  MR_Word Var_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_DetInfo_0_6, (MR_Integer) 0))));

  succeeded = (((MR_Word) X_4) == ((MR_Word) Var_8));
  if (succeeded)
    *STATE_VARIABLE_DetInfo_7 = STATE_VARIABLE_DetInfo_0_6;
  else
  {
    MR_Word Var_17 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_DetInfo_0_6, (MR_Integer) 1))));
    MR_Word Var_18 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_DetInfo_0_6, (MR_Integer) 2))));
    MR_Word Var_23 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_DetInfo_0_6, (MR_Integer) 4))));
    MR_Unsigned packed_word_1 = (MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_DetInfo_0_6, (MR_Integer) 3)));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_DetInfo_7 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (X_4));
      MR_hl_field(0, base, 1) = ((MR_Box) (Var_17));
      MR_hl_field(0, base, 2) = ((MR_Box) (Var_18));
      MR_hl_field(0, base, 3) = (MR_Box) (packed_word_1);
      MR_hl_field(0, base, 4) = ((MR_Box) (Var_23));
    }
  }
}

void MR_CALL 
check_hlds__det_util__det_info_get_error_specs_2_p_0(
  MR_Word DetInfo_3,
  MR_Word * X_4)
{
  *X_4 = ((MR_Word) ((MR_hl_field(0, DetInfo_3, (MR_Integer) 4))));
}

void MR_CALL 
check_hlds__det_util__det_info_get_has_incomplete_switch_2_p_0(
  MR_Word DetInfo_3,
  MR_Word * X_4)
{
  *X_4 = ((MR_Unsigned) ((MR_hl_field(0, DetInfo_3, (MR_Integer) 3))) & (MR_Integer) 1);
}

void MR_CALL 
check_hlds__det_util__det_info_get_has_req_scope_2_p_0(
  MR_Word DetInfo_3,
  MR_Word * X_4)
{
  *X_4 = ((((MR_Unsigned) ((MR_hl_field(0, DetInfo_3, (MR_Integer) 3))) >> 1)) & (MR_Integer) 1);
}

void MR_CALL 
check_hlds__det_util__det_info_get_has_format_call_2_p_0(
  MR_Word DetInfo_3,
  MR_Word * X_4)
{
  *X_4 = ((((MR_Unsigned) ((MR_hl_field(0, DetInfo_3, (MR_Integer) 3))) >> 2)) & (MR_Integer) 1);
}

void MR_CALL 
check_hlds__det_util__det_info_get_pess_extra_vars_2_p_0(
  MR_Word DetInfo_3,
  MR_Word * X_4)
{
  *X_4 = ((((MR_Unsigned) ((MR_hl_field(0, DetInfo_3, (MR_Integer) 3))) >> 3)) & (MR_Integer) 1);
}

void MR_CALL 
check_hlds__det_util__det_info_get_var_table_2_p_0(
  MR_Word DetInfo_3,
  MR_Word * X_4)
{
  *X_4 = ((MR_Word) ((MR_hl_field(0, DetInfo_3, (MR_Integer) 2))));
}

void MR_CALL 
check_hlds__det_util__det_info_get_pred_proc_id_2_p_0(
  MR_Word DetInfo_3,
  MR_Word * X_4)
{
  *X_4 = ((MR_Word) ((MR_hl_field(0, DetInfo_3, (MR_Integer) 1))));
}

void MR_CALL 
check_hlds__det_util__det_info_get_module_info_2_p_0(
  MR_Word DetInfo_3,
  MR_Word * X_4)
{
  *X_4 = ((MR_Word) ((MR_hl_field(0, DetInfo_3, (MR_Integer) 0))));
}

void MR_CALL 
check_hlds__det_util__det_info_init_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word PredProcId_8,
  MR_Word VarTable_9,
  MR_Word PessExtraVars_10,
  MR_Word Specs_11,
  MR_Word * DetInfo_12)
{
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    *DetInfo_12 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (ModuleInfo_7));
    MR_hl_field(0, base, 1) = ((MR_Box) (PredProcId_8));
    MR_hl_field(0, base, 2) = ((MR_Box) (VarTable_9));
    MR_hl_field(0, base, 3) = (MR_Box) (((((MR_Unsigned) (PessExtraVars_10) << 3)) | (((((MR_Unsigned) ((MR_Integer) 0) << 2)) | (((((MR_Unsigned) ((MR_Integer) 0) << 1)) | (MR_Unsigned) ((MR_Integer) 0)))))));
    MR_hl_field(0, base, 4) = ((MR_Box) (Specs_11));
  }
}

void MR_CALL 
check_hlds__det_util__det_info_add_error_spec_3_p_0(
  MR_Word Spec_4,
  MR_Word STATE_VARIABLE_DetInfo_0_8,
  MR_Word * STATE_VARIABLE_DetInfo_9)
{
  MR_Word Specs0_6 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_DetInfo_0_8, (MR_Integer) 4))));
  MR_Word Specs_7;
  MR_Word Var_10 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_DetInfo_0_8, (MR_Integer) 0))));
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_DetInfo_0_8, (MR_Integer) 1))));
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_DetInfo_0_8, (MR_Integer) 2))));
  MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_DetInfo_0_8, (MR_Integer) 3)));

  {
    Specs_7 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Specs_7, 0) = ((MR_Box) (Spec_4));
    MR_hl_field(1, Specs_7, 1) = ((MR_Box) (Specs0_6));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_DetInfo_9 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_10));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_11));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_12));
    MR_hl_field(0, base, 3) = (MR_Box) (packed_word_0);
    MR_hl_field(0, base, 4) = ((MR_Box) (Specs_7));
  }
}

MR_bool MR_CALL 
check_hlds__det_util__det_no_output_vars_4_p_0(
  MR_Word DetInfo_5,
  MR_Word InstMap_6,
  MR_Word InstMapDelta_7,
  MR_Word Vars_8)
{
  MR_bool succeeded;
  MR_Word ModuleInfo_9 = ((MR_Word) ((MR_hl_field(0, DetInfo_5, (MR_Integer) 0))));
  MR_Word VarTable_10 = ((MR_Word) ((MR_hl_field(0, DetInfo_5, (MR_Integer) 2))));

  succeeded = hlds__instmap__instmap_delta_no_output_vars_5_p_0(ModuleInfo_9, VarTable_10, InstMap_6, InstMapDelta_7, Vars_8);
  return succeeded;
}

void MR_CALL 
check_hlds__det_util__det_lookup_pred_info_and_detism_5_p_0(
  MR_Word DetInfo_6,
  MR_Word PredId_7,
  MR_Integer ModeId_8,
  MR_Word * PredInfo_9,
  MR_Word * Detism_10)
{
  MR_Word ModuleInfo_11 = ((MR_Word) ((MR_hl_field(0, DetInfo_6, (MR_Integer) 0))));
  MR_Word ProcTable_12;
  MR_Word ProcInfo_13;
  MR_Box conv0_ProcInfo_13;

  hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_11, PredId_7, PredInfo_9);
  hlds__hlds_pred__pred_info_get_proc_table_2_p_0(*PredInfo_9, &ProcTable_12);
  mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ProcTable_12, ((MR_Box) (ModeId_8)), &conv0_ProcInfo_13);
  ProcInfo_13 = ((MR_Word) (conv0_ProcInfo_13));
  hlds__hlds_pred__proc_info_interface_determinism_2_p_0(ProcInfo_13, Detism_10);
}

MR_bool MR_CALL 
check_hlds__det_util__interpret_unify_4_p_0(
  MR_Word LHSVar_5,
  MR_Word RHS_6,
  MR_Word STATE_VARIABLE_Subst_0_22,
  MR_Word * STATE_VARIABLE_Subst_23)
{
  MR_bool succeeded;

  switch (MR_tag((MR_Word) RHS_6)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word RHSVar_8 = ((MR_Word) ((MR_hl_field(0, RHS_6, (MR_Integer) 0))));
        MR_Word Var_24;
        MR_Word Var_25;
        MR_Word Var_27;
        MR_Word Var_28;

        Var_27 = mercury__term_context__dummy_context_0_f_0();
        {
          Var_24 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_24, 0) = ((MR_Box) (LHSVar_5));
          MR_hl_field(1, Var_24, 1) = ((MR_Box) (Var_27));
        }
        Var_28 = mercury__term_context__dummy_context_0_f_0();
        {
          Var_25 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_25, 0) = ((MR_Box) (RHSVar_8));
          MR_hl_field(1, Var_25, 1) = ((MR_Box) (Var_28));
        }
        succeeded = mercury__term_unify__unify_terms_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_24, Var_25, STATE_VARIABLE_Subst_0_22, STATE_VARIABLE_Subst_23);
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word ConsId_9 = ((MR_Word) ((MR_hl_field(1, RHS_6, (MR_Integer) 0))));
        MR_Word RHSArgVars_11 = ((MR_Word) ((MR_hl_field(1, RHS_6, (MR_Integer) 2))));
        MR_Word RHSArgTerms_12;
        MR_Word RHSTerm_13;
        MR_Word Var_29;
        MR_Word Var_31;

        mercury__term_subst__var_list_to_term_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), RHSArgVars_11, &RHSArgTerms_12);
        succeeded = parse_tree__prog_util__cons_id_and_args_to_term_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ConsId_9, RHSArgTerms_12, &RHSTerm_13);
        if (succeeded)
        {
          Var_31 = mercury__term_context__dummy_context_0_f_0();
          {
            Var_29 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_29, 0) = ((MR_Box) (LHSVar_5));
            MR_hl_field(1, Var_29, 1) = ((MR_Box) (Var_31));
          }
          succeeded = mercury__term_unify__unify_terms_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_29, RHSTerm_13, STATE_VARIABLE_Subst_0_22, STATE_VARIABLE_Subst_23);
        }
      }
      break;
    case (MR_Integer) 2:
      {
        *STATE_VARIABLE_Subst_23 = STATE_VARIABLE_Subst_0_22;
        succeeded = MR_TRUE;
      }
      break;
  }
  return succeeded;
}

void MR_CALL 
check_hlds__det_util__delete_unreachable_cases_4_p_0(
  MR_Word Cases0_5,
  MR_Word PossibleConsIds_6,
  MR_Word * ReachableCases_7,
  MR_Word * UnreachableGoals_8)
{
  MR_Word RevReachableCases_9;
  MR_Word RevUnreachableGoals_10;

  check_hlds__det_util__delete_unreachable_cases_acc_6_p_0(Cases0_5, PossibleConsIds_6, (MR_Word) ((MR_Unsigned) 0U), &RevReachableCases_9, (MR_Word) ((MR_Unsigned) 0U), &RevUnreachableGoals_10);
  mercury__list__reverse_2_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0), RevReachableCases_9, ReachableCases_7);
  mercury__list__reverse_2_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), RevUnreachableGoals_10, UnreachableGoals_8);
}

static MR_bool MR_CALL 
check_hlds__det_util__delete_unreachable_cases_acc_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = check_hlds__det_util__IntroducedFrom__pred__delete_unreachable_cases_acc__170__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static MR_bool MR_CALL 
check_hlds__det_util__delete_unreachable_cases_acc_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = check_hlds__det_util__IntroducedFrom__pred__delete_unreachable_cases_acc__165__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  return succeeded;
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
      MR_Word Case0_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Cases0_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word MainConsId0_19 = ((MR_Word) ((MR_hl_field(0, Case0_14, (MR_Integer) 0))));
      MR_Word OtherConsIds0_20 = ((MR_Word) ((MR_hl_field(0, Case0_14, (MR_Integer) 1))));
      MR_Word Goal_21 = ((MR_Word) ((MR_hl_field(0, Case0_14, (MR_Integer) 2))));
      MR_Word STATE_VARIABLE_RevReachableCases_31_31;
      MR_Word STATE_VARIABLE_RevUnreachableGoals_33_33;
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
          MR_hl_field(0, Var_30, 0) = ((MR_Box) (&check_hlds__det_util_scalar_common_2[0]));
          MR_hl_field(0, Var_30, 1) = ((MR_Box) (check_hlds__det_util__delete_unreachable_cases_acc_6_p_0_1));
          MR_hl_field(0, Var_30, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(0, Var_30, 3) = ((MR_Box) (HeadVar__2_2));
        }
        mercury__list__filter_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0), Var_30, OtherConsIds0_20, &OtherConsIds_22);
        {
          Case_23 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Case_23, 0) = ((MR_Box) (MainConsId0_19));
          MR_hl_field(0, Case_23, 1) = ((MR_Box) (OtherConsIds_22));
          MR_hl_field(0, Case_23, 2) = ((MR_Box) (Goal_21));
        }
        {
          STATE_VARIABLE_RevReachableCases_31_31 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, STATE_VARIABLE_RevReachableCases_31_31, 0) = ((MR_Box) (Case_23));
          MR_hl_field(1, STATE_VARIABLE_RevReachableCases_31_31, 1) = ((MR_Box) (STATE_VARIABLE_RevReachableCases_0_3));
        }
        STATE_VARIABLE_RevUnreachableGoals_33_33 = STATE_VARIABLE_RevUnreachableGoals_0_5;
      }
      else
      {
        MR_Word OtherConsIds1_24;
        MR_Word Var_32;

        {
          Var_32 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_32, 0) = ((MR_Box) (&check_hlds__det_util_scalar_common_2[0]));
          MR_hl_field(0, Var_32, 1) = ((MR_Box) (check_hlds__det_util__delete_unreachable_cases_acc_6_p_0_2));
          MR_hl_field(0, Var_32, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(0, Var_32, 3) = ((MR_Box) (HeadVar__2_2));
        }
        mercury__list__filter_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0), Var_32, OtherConsIds0_20, &OtherConsIds1_24);
        if ((OtherConsIds1_24 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          {
            STATE_VARIABLE_RevUnreachableGoals_33_33 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, STATE_VARIABLE_RevUnreachableGoals_33_33, 0) = ((MR_Box) (Goal_21));
            MR_hl_field(1, STATE_VARIABLE_RevUnreachableGoals_33_33, 1) = ((MR_Box) (STATE_VARIABLE_RevUnreachableGoals_0_5));
          }
          STATE_VARIABLE_RevReachableCases_31_31 = STATE_VARIABLE_RevReachableCases_0_3;
        }
        else
        {
          MR_Word MainConsId_25 = ((MR_Word) ((MR_hl_field(1, OtherConsIds1_24, (MR_Integer) 0))));
          MR_Word OtherConsIds_37 = ((MR_Word) ((MR_hl_field(1, OtherConsIds1_24, (MR_Integer) 1))));
          MR_Word Case_38;

          {
            Case_38 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Case_38, 0) = ((MR_Box) (MainConsId_25));
            MR_hl_field(0, Case_38, 1) = ((MR_Box) (OtherConsIds_37));
            MR_hl_field(0, Case_38, 2) = ((MR_Box) (Goal_21));
          }
          {
            STATE_VARIABLE_RevReachableCases_31_31 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, STATE_VARIABLE_RevReachableCases_31_31, 0) = ((MR_Box) (Case_38));
            MR_hl_field(1, STATE_VARIABLE_RevReachableCases_31_31, 1) = ((MR_Box) (STATE_VARIABLE_RevReachableCases_0_3));
          }
          STATE_VARIABLE_RevUnreachableGoals_33_33 = STATE_VARIABLE_RevUnreachableGoals_0_5;
        }
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Cases0_15;
      next_value_of_STATE_VARIABLE_RevReachableCases_0_3 = STATE_VARIABLE_RevReachableCases_31_31;
      next_value_of_STATE_VARIABLE_RevUnreachableGoals_0_5 = STATE_VARIABLE_RevUnreachableGoals_33_33;
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
  MR_bool succeeded;

  succeeded = check_hlds__det_util____Unify____contains_format_call_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__det_util____Compare____contains_format_call_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__det_util____Compare____contains_format_call_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__det_util____Unify____contains_incomplete_switch_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__det_util____Unify____contains_incomplete_switch_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__det_util____Compare____contains_incomplete_switch_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__det_util____Compare____contains_incomplete_switch_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__det_util____Unify____contains_require_scope_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__det_util____Unify____contains_require_scope_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__det_util____Compare____contains_require_scope_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__det_util____Compare____contains_require_scope_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__det_util____Unify____det_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__det_util____Unify____det_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__det_util____Compare____det_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__det_util____Compare____det_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__det_util____Unify____report_pess_extra_vars_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__det_util____Unify____report_pess_extra_vars_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__det_util____Compare____report_pess_extra_vars_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__det_util____Compare____report_pess_extra_vars_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
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
