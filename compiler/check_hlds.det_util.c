/*
** Automatically generated from `det_util.m'
** by the Mercury compiler,
** version rotd-2017-07-15
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


/* :- module check_hlds.det_util. */
/* :- implementation. */

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
check_hlds__det_util____Unify____contains_format_call_0_0_10001(
  MR_Box check_hlds__det_util__wrapper_arg_1,
  MR_Box check_hlds__det_util__wrapper_arg_2);

static void MR_CALL 
check_hlds__det_util____Compare____contains_format_call_0_0_10001(
  MR_Box * check_hlds__det_util__wrapper_arg_1,
  MR_Box check_hlds__det_util__wrapper_arg_2,
  MR_Box check_hlds__det_util__wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__det_util____Unify____contains_incomplete_switch_0_0_10001(
  MR_Box check_hlds__det_util__wrapper_arg_1,
  MR_Box check_hlds__det_util__wrapper_arg_2);

static void MR_CALL 
check_hlds__det_util____Compare____contains_incomplete_switch_0_0_10001(
  MR_Box * check_hlds__det_util__wrapper_arg_1,
  MR_Box check_hlds__det_util__wrapper_arg_2,
  MR_Box check_hlds__det_util__wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__det_util____Unify____contains_require_scope_0_0_10001(
  MR_Box check_hlds__det_util__wrapper_arg_1,
  MR_Box check_hlds__det_util__wrapper_arg_2);

static void MR_CALL 
check_hlds__det_util____Compare____contains_require_scope_0_0_10001(
  MR_Box * check_hlds__det_util__wrapper_arg_1,
  MR_Box check_hlds__det_util__wrapper_arg_2,
  MR_Box check_hlds__det_util__wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__det_util____Unify____det_info_0_0_10001(
  MR_Box check_hlds__det_util__wrapper_arg_1,
  MR_Box check_hlds__det_util__wrapper_arg_2);

static void MR_CALL 
check_hlds__det_util____Compare____det_info_0_0_10001(
  MR_Box * check_hlds__det_util__wrapper_arg_1,
  MR_Box check_hlds__det_util__wrapper_arg_2,
  MR_Box check_hlds__det_util__wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__det_util____Unify____maybe_changed_0_0_10001(
  MR_Box check_hlds__det_util__wrapper_arg_1,
  MR_Box check_hlds__det_util__wrapper_arg_2);

static void MR_CALL 
check_hlds__det_util____Compare____maybe_changed_0_0_10001(
  MR_Box * check_hlds__det_util__wrapper_arg_1,
  MR_Box check_hlds__det_util__wrapper_arg_2,
  MR_Box check_hlds__det_util__wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__det_util____Unify____report_pess_extra_vars_0_0_10001(
  MR_Box check_hlds__det_util__wrapper_arg_1,
  MR_Box check_hlds__det_util__wrapper_arg_2);

static void MR_CALL 
check_hlds__det_util____Compare____report_pess_extra_vars_0_0_10001(
  MR_Box * check_hlds__det_util__wrapper_arg_1,
  MR_Box check_hlds__det_util__wrapper_arg_2,
  MR_Box check_hlds__det_util__wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__det_util__IntroducedFrom__pred__delete_unreachable_cases_acc__181__1_2_p_0(
  MR_Word check_hlds__det_util__HeadVar__2_2,
  MR_Word check_hlds__det_util__HeadVar__2_47);

static MR_bool MR_CALL 
check_hlds__det_util__IntroducedFrom__pred__delete_unreachable_cases_acc__176__1_2_p_0(
  MR_Word check_hlds__det_util__HeadVar__2_2,
  MR_Word check_hlds__det_util__HeadVar__2_44);

static MR_bool MR_CALL 
check_hlds__det_util__delete_unreachable_cases_acc_6_p_0_2(
  MR_Box check_hlds__det_util__closure_arg,
  MR_Box check_hlds__det_util__wrapper_arg_1);

static MR_bool MR_CALL 
check_hlds__det_util__delete_unreachable_cases_acc_6_p_0_1(
  MR_Box check_hlds__det_util__closure_arg,
  MR_Box check_hlds__det_util__wrapper_arg_1);

static void MR_CALL 
check_hlds__det_util__delete_unreachable_cases_acc_6_p_0(
  MR_Word check_hlds__det_util__HeadVar__1_1,
  MR_Word check_hlds__det_util__HeadVar__2_2,
  MR_Word check_hlds__det_util__STATE_VARIABLE_RevReachableCases_0_3,
  MR_Word * check_hlds__det_util__STATE_VARIABLE_RevReachableCases_4,
  MR_Word check_hlds__det_util__STATE_VARIABLE_RevUnreachableGoals_0_5,
  MR_Word * check_hlds__det_util__STATE_VARIABLE_RevUnreachableGoals_6);


static /* final */ const MR_Box check_hlds__det_util_scalar_common_1[3][2];

static /* final */ const MR_Box check_hlds__det_util_scalar_common_2[1][3];

static /* final */ const MR_Box check_hlds__det_util_scalar_common_3[1][5];




static /* final */ const MR_Box check_hlds__det_util_scalar_common_1[3][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__varset__varset__type_ctor_info_varset_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0))
  },
};

static /* final */ const MR_Box check_hlds__det_util_scalar_common_2[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&check_hlds__det_util_scalar_common_1[1])),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
};

static /* final */ const MR_Box check_hlds__det_util_scalar_common_3[1][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
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
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0
  }
};

static const MR_EnumFunctorDesc check_hlds__det_util__check_hlds__det_util__enum_functor_desc_contains_format_call_0_0 = {
  (MR_String) "does_not_contain_format_call",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc check_hlds__det_util__check_hlds__det_util__enum_functor_desc_contains_format_call_0_1 = {
  (MR_String) "contains_format_call",
  (MR_Integer) 1
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
  (MR_Integer) 17,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__det_util____Unify____contains_format_call_0_0_10001)),
  ((MR_Box) (check_hlds__det_util____Compare____contains_format_call_0_0_10001)),
  (MR_String) "check_hlds.det_util",
  (MR_String) "contains_format_call",
  {     check_hlds__det_util__check_hlds__det_util__enum_name_ordered_contains_format_call_0 },
  {     check_hlds__det_util__check_hlds__det_util__enum_value_ordered_contains_format_call_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  check_hlds__det_util__check_hlds__det_util__functor_number_map_contains_format_call_0
};

static const MR_EnumFunctorDesc check_hlds__det_util__check_hlds__det_util__enum_functor_desc_contains_incomplete_switch_0_0 = {
  (MR_String) "does_not_contain_incomplete_switch",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc check_hlds__det_util__check_hlds__det_util__enum_functor_desc_contains_incomplete_switch_0_1 = {
  (MR_String) "contains_incomplete_switch",
  (MR_Integer) 1
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
  (MR_Integer) 17,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__det_util____Unify____contains_incomplete_switch_0_0_10001)),
  ((MR_Box) (check_hlds__det_util____Compare____contains_incomplete_switch_0_0_10001)),
  (MR_String) "check_hlds.det_util",
  (MR_String) "contains_incomplete_switch",
  {     check_hlds__det_util__check_hlds__det_util__enum_name_ordered_contains_incomplete_switch_0 },
  {     check_hlds__det_util__check_hlds__det_util__enum_value_ordered_contains_incomplete_switch_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  check_hlds__det_util__check_hlds__det_util__functor_number_map_contains_incomplete_switch_0
};

static const MR_EnumFunctorDesc check_hlds__det_util__check_hlds__det_util__enum_functor_desc_contains_require_scope_0_0 = {
  (MR_String) "does_not_contain_require_scope",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc check_hlds__det_util__check_hlds__det_util__enum_functor_desc_contains_require_scope_0_1 = {
  (MR_String) "contains_require_scope",
  (MR_Integer) 1
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
  (MR_Integer) 17,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__det_util____Unify____contains_require_scope_0_0_10001)),
  ((MR_Box) (check_hlds__det_util____Compare____contains_require_scope_0_0_10001)),
  (MR_String) "check_hlds.det_util",
  (MR_String) "contains_require_scope",
  {     check_hlds__det_util__check_hlds__det_util__enum_name_ordered_contains_require_scope_0 },
  {     check_hlds__det_util__check_hlds__det_util__enum_value_ordered_contains_require_scope_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  check_hlds__det_util__check_hlds__det_util__functor_number_map_contains_require_scope_0
};

static const MR_FA_TypeInfo_Struct1 check_hlds__det_util__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__det_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_TypeInfo_Struct2 check_hlds__det_util__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &check_hlds__det_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__det_util__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0
  }
};

static const MR_PseudoTypeInfo check_hlds__det_util__check_hlds__det_util__field_types_det_info_0_0[9] = {
  (MR_PseudoTypeInfo) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0,
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
  (MR_PseudoTypeInfo) &check_hlds__det_util__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &check_hlds__det_util__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0,
  (MR_PseudoTypeInfo) &check_hlds__det_util__check_hlds__det_util__type_ctor_info_report_pess_extra_vars_0,
  (MR_PseudoTypeInfo) &check_hlds__det_util__check_hlds__det_util__type_ctor_info_contains_format_call_0,
  (MR_PseudoTypeInfo) &check_hlds__det_util__check_hlds__det_util__type_ctor_info_contains_require_scope_0,
  (MR_PseudoTypeInfo) &check_hlds__det_util__check_hlds__det_util__type_ctor_info_contains_incomplete_switch_0,
  (MR_PseudoTypeInfo) &check_hlds__det_util__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0
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
    (MR_Integer) 0,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 4,
    (MR_Integer) 1,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 4,
    (MR_Integer) 2,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 4,
    (MR_Integer) 3,
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
  (MR_Integer) 9,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  check_hlds__det_util__check_hlds__det_util__field_types_det_info_0_0,
  check_hlds__det_util__check_hlds__det_util__field_names_det_info_0_0,
  check_hlds__det_util__check_hlds__det_util__field_locns_det_info_0_0,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr check_hlds__det_util__check_hlds__det_util__du_stag_ordered_det_info_0_0[1] = {
  &check_hlds__det_util__check_hlds__det_util__du_functor_desc_det_info_0_0
};

static const MR_DuPtagLayout check_hlds__det_util__check_hlds__det_util__du_ptag_ordered_det_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__det_util__check_hlds__det_util__du_stag_ordered_det_info_0_0
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
  (MR_Integer) 17,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__det_util____Unify____det_info_0_0_10001)),
  ((MR_Box) (check_hlds__det_util____Compare____det_info_0_0_10001)),
  (MR_String) "check_hlds.det_util",
  (MR_String) "det_info",
  {     check_hlds__det_util__check_hlds__det_util__du_name_ordered_det_info_0 },
  {     check_hlds__det_util__check_hlds__det_util__du_ptag_ordered_det_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  check_hlds__det_util__check_hlds__det_util__functor_number_map_det_info_0
};

static const MR_EnumFunctorDesc check_hlds__det_util__check_hlds__det_util__enum_functor_desc_maybe_changed_0_0 = {
  (MR_String) "changed",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc check_hlds__det_util__check_hlds__det_util__enum_functor_desc_maybe_changed_0_1 = {
  (MR_String) "unchanged",
  (MR_Integer) 1
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
  (MR_Integer) 17,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__det_util____Unify____maybe_changed_0_0_10001)),
  ((MR_Box) (check_hlds__det_util____Compare____maybe_changed_0_0_10001)),
  (MR_String) "check_hlds.det_util",
  (MR_String) "maybe_changed",
  {     check_hlds__det_util__check_hlds__det_util__enum_name_ordered_maybe_changed_0 },
  {     check_hlds__det_util__check_hlds__det_util__enum_value_ordered_maybe_changed_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  check_hlds__det_util__check_hlds__det_util__functor_number_map_maybe_changed_0
};

static const MR_EnumFunctorDesc check_hlds__det_util__check_hlds__det_util__enum_functor_desc_report_pess_extra_vars_0_0 = {
  (MR_String) "pess_extra_vars_report",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc check_hlds__det_util__check_hlds__det_util__enum_functor_desc_report_pess_extra_vars_0_1 = {
  (MR_String) "pess_extra_vars_ignore",
  (MR_Integer) 1
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
  (MR_Integer) 17,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__det_util____Unify____report_pess_extra_vars_0_0_10001)),
  ((MR_Box) (check_hlds__det_util____Compare____report_pess_extra_vars_0_0_10001)),
  (MR_String) "check_hlds.det_util",
  (MR_String) "report_pess_extra_vars",
  {     check_hlds__det_util__check_hlds__det_util__enum_name_ordered_report_pess_extra_vars_0 },
  {     check_hlds__det_util__check_hlds__det_util__enum_value_ordered_report_pess_extra_vars_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  check_hlds__det_util__check_hlds__det_util__functor_number_map_report_pess_extra_vars_0
};

static MR_bool MR_CALL 
check_hlds__det_util____Unify____contains_format_call_0_0_10001(
  MR_Box check_hlds__det_util__wrapper_arg_1,
  MR_Box check_hlds__det_util__wrapper_arg_2)
{
  {
    MR_bool check_hlds__det_util__succeeded;

    {
      check_hlds__det_util__succeeded = check_hlds__det_util____Unify____contains_format_call_0_0(((MR_Word) check_hlds__det_util__wrapper_arg_1), ((MR_Word) check_hlds__det_util__wrapper_arg_2));
    }
    return check_hlds__det_util__succeeded;
  }
}

static void MR_CALL 
check_hlds__det_util____Compare____contains_format_call_0_0_10001(
  MR_Box * check_hlds__det_util__wrapper_arg_1,
  MR_Box check_hlds__det_util__wrapper_arg_2,
  MR_Box check_hlds__det_util__wrapper_arg_3)
{
  {
    MR_Word check_hlds__det_util__conv0_HeadVar__1_1;

    {
      check_hlds__det_util____Compare____contains_format_call_0_0(&check_hlds__det_util__conv0_HeadVar__1_1, ((MR_Word) check_hlds__det_util__wrapper_arg_2), ((MR_Word) check_hlds__det_util__wrapper_arg_3));
    }
    *check_hlds__det_util__wrapper_arg_1 = ((MR_Box) (check_hlds__det_util__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__det_util____Unify____contains_incomplete_switch_0_0_10001(
  MR_Box check_hlds__det_util__wrapper_arg_1,
  MR_Box check_hlds__det_util__wrapper_arg_2)
{
  {
    MR_bool check_hlds__det_util__succeeded;

    {
      check_hlds__det_util__succeeded = check_hlds__det_util____Unify____contains_incomplete_switch_0_0(((MR_Word) check_hlds__det_util__wrapper_arg_1), ((MR_Word) check_hlds__det_util__wrapper_arg_2));
    }
    return check_hlds__det_util__succeeded;
  }
}

static void MR_CALL 
check_hlds__det_util____Compare____contains_incomplete_switch_0_0_10001(
  MR_Box * check_hlds__det_util__wrapper_arg_1,
  MR_Box check_hlds__det_util__wrapper_arg_2,
  MR_Box check_hlds__det_util__wrapper_arg_3)
{
  {
    MR_Word check_hlds__det_util__conv0_HeadVar__1_1;

    {
      check_hlds__det_util____Compare____contains_incomplete_switch_0_0(&check_hlds__det_util__conv0_HeadVar__1_1, ((MR_Word) check_hlds__det_util__wrapper_arg_2), ((MR_Word) check_hlds__det_util__wrapper_arg_3));
    }
    *check_hlds__det_util__wrapper_arg_1 = ((MR_Box) (check_hlds__det_util__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__det_util____Unify____contains_require_scope_0_0_10001(
  MR_Box check_hlds__det_util__wrapper_arg_1,
  MR_Box check_hlds__det_util__wrapper_arg_2)
{
  {
    MR_bool check_hlds__det_util__succeeded;

    {
      check_hlds__det_util__succeeded = check_hlds__det_util____Unify____contains_require_scope_0_0(((MR_Word) check_hlds__det_util__wrapper_arg_1), ((MR_Word) check_hlds__det_util__wrapper_arg_2));
    }
    return check_hlds__det_util__succeeded;
  }
}

static void MR_CALL 
check_hlds__det_util____Compare____contains_require_scope_0_0_10001(
  MR_Box * check_hlds__det_util__wrapper_arg_1,
  MR_Box check_hlds__det_util__wrapper_arg_2,
  MR_Box check_hlds__det_util__wrapper_arg_3)
{
  {
    MR_Word check_hlds__det_util__conv0_HeadVar__1_1;

    {
      check_hlds__det_util____Compare____contains_require_scope_0_0(&check_hlds__det_util__conv0_HeadVar__1_1, ((MR_Word) check_hlds__det_util__wrapper_arg_2), ((MR_Word) check_hlds__det_util__wrapper_arg_3));
    }
    *check_hlds__det_util__wrapper_arg_1 = ((MR_Box) (check_hlds__det_util__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__det_util____Unify____det_info_0_0_10001(
  MR_Box check_hlds__det_util__wrapper_arg_1,
  MR_Box check_hlds__det_util__wrapper_arg_2)
{
  {
    MR_bool check_hlds__det_util__succeeded;

    {
      check_hlds__det_util__succeeded = check_hlds__det_util____Unify____det_info_0_0(((MR_Word) check_hlds__det_util__wrapper_arg_1), ((MR_Word) check_hlds__det_util__wrapper_arg_2));
    }
    return check_hlds__det_util__succeeded;
  }
}

static void MR_CALL 
check_hlds__det_util____Compare____det_info_0_0_10001(
  MR_Box * check_hlds__det_util__wrapper_arg_1,
  MR_Box check_hlds__det_util__wrapper_arg_2,
  MR_Box check_hlds__det_util__wrapper_arg_3)
{
  {
    MR_Word check_hlds__det_util__conv0_HeadVar__1_1;

    {
      check_hlds__det_util____Compare____det_info_0_0(&check_hlds__det_util__conv0_HeadVar__1_1, ((MR_Word) check_hlds__det_util__wrapper_arg_2), ((MR_Word) check_hlds__det_util__wrapper_arg_3));
    }
    *check_hlds__det_util__wrapper_arg_1 = ((MR_Box) (check_hlds__det_util__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__det_util____Unify____maybe_changed_0_0_10001(
  MR_Box check_hlds__det_util__wrapper_arg_1,
  MR_Box check_hlds__det_util__wrapper_arg_2)
{
  {
    MR_bool check_hlds__det_util__succeeded;

    {
      check_hlds__det_util__succeeded = check_hlds__det_util____Unify____maybe_changed_0_0(((MR_Word) check_hlds__det_util__wrapper_arg_1), ((MR_Word) check_hlds__det_util__wrapper_arg_2));
    }
    return check_hlds__det_util__succeeded;
  }
}

static void MR_CALL 
check_hlds__det_util____Compare____maybe_changed_0_0_10001(
  MR_Box * check_hlds__det_util__wrapper_arg_1,
  MR_Box check_hlds__det_util__wrapper_arg_2,
  MR_Box check_hlds__det_util__wrapper_arg_3)
{
  {
    MR_Word check_hlds__det_util__conv0_HeadVar__1_1;

    {
      check_hlds__det_util____Compare____maybe_changed_0_0(&check_hlds__det_util__conv0_HeadVar__1_1, ((MR_Word) check_hlds__det_util__wrapper_arg_2), ((MR_Word) check_hlds__det_util__wrapper_arg_3));
    }
    *check_hlds__det_util__wrapper_arg_1 = ((MR_Box) (check_hlds__det_util__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__det_util____Unify____report_pess_extra_vars_0_0_10001(
  MR_Box check_hlds__det_util__wrapper_arg_1,
  MR_Box check_hlds__det_util__wrapper_arg_2)
{
  {
    MR_bool check_hlds__det_util__succeeded;

    {
      check_hlds__det_util__succeeded = check_hlds__det_util____Unify____report_pess_extra_vars_0_0(((MR_Word) check_hlds__det_util__wrapper_arg_1), ((MR_Word) check_hlds__det_util__wrapper_arg_2));
    }
    return check_hlds__det_util__succeeded;
  }
}

static void MR_CALL 
check_hlds__det_util____Compare____report_pess_extra_vars_0_0_10001(
  MR_Box * check_hlds__det_util__wrapper_arg_1,
  MR_Box check_hlds__det_util__wrapper_arg_2,
  MR_Box check_hlds__det_util__wrapper_arg_3)
{
  {
    MR_Word check_hlds__det_util__conv0_HeadVar__1_1;

    {
      check_hlds__det_util____Compare____report_pess_extra_vars_0_0(&check_hlds__det_util__conv0_HeadVar__1_1, ((MR_Word) check_hlds__det_util__wrapper_arg_2), ((MR_Word) check_hlds__det_util__wrapper_arg_3));
    }
    *check_hlds__det_util__wrapper_arg_1 = ((MR_Box) (check_hlds__det_util__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__det_util__IntroducedFrom__pred__delete_unreachable_cases_acc__181__1_2_p_0(
  MR_Word check_hlds__det_util__HeadVar__2_2,
  MR_Word check_hlds__det_util__HeadVar__2_47)
{
  {
    MR_bool check_hlds__det_util__succeeded;

    {
      check_hlds__det_util__succeeded = mercury__set_tree234__contains_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, check_hlds__det_util__HeadVar__2_2, ((MR_Box) (check_hlds__det_util__HeadVar__2_47)));
    }
    return check_hlds__det_util__succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__det_util__IntroducedFrom__pred__delete_unreachable_cases_acc__176__1_2_p_0(
  MR_Word check_hlds__det_util__HeadVar__2_2,
  MR_Word check_hlds__det_util__HeadVar__2_44)
{
  {
    MR_bool check_hlds__det_util__succeeded;

    {
      check_hlds__det_util__succeeded = mercury__set_tree234__contains_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, check_hlds__det_util__HeadVar__2_2, ((MR_Box) (check_hlds__det_util__HeadVar__2_44)));
    }
    return check_hlds__det_util__succeeded;
  }
}

void MR_CALL 
check_hlds__det_util____Compare____report_pess_extra_vars_0_0(
  MR_Word * check_hlds__det_util__HeadVar__1_1,
  MR_Word check_hlds__det_util__HeadVar__2_2,
  MR_Word check_hlds__det_util__HeadVar__3_3)
{
  {
    MR_bool check_hlds__det_util__succeeded;
    MR_Integer check_hlds__det_util__Cast_HeadVar1_4 = (MR_Integer) check_hlds__det_util__HeadVar__2_2;
    MR_Integer check_hlds__det_util__Cast_HeadVar2_5 = (MR_Integer) check_hlds__det_util__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(check_hlds__det_util__HeadVar__1_1, check_hlds__det_util__Cast_HeadVar1_4, check_hlds__det_util__Cast_HeadVar2_5);
    }
  }
}

MR_bool MR_CALL 
check_hlds__det_util____Unify____report_pess_extra_vars_0_0(
  MR_Word check_hlds__det_util__HeadVar__2_1,
  MR_Word check_hlds__det_util__HeadVar__2_2)
{
  {
    MR_bool check_hlds__det_util__succeeded = (check_hlds__det_util__HeadVar__2_1 == check_hlds__det_util__HeadVar__2_2);

    return check_hlds__det_util__succeeded;
  }
}

void MR_CALL 
check_hlds__det_util____Compare____maybe_changed_0_0(
  MR_Word * check_hlds__det_util__HeadVar__1_1,
  MR_Word check_hlds__det_util__HeadVar__2_2,
  MR_Word check_hlds__det_util__HeadVar__3_3)
{
  {
    MR_bool check_hlds__det_util__succeeded;
    MR_Integer check_hlds__det_util__Cast_HeadVar1_4 = (MR_Integer) check_hlds__det_util__HeadVar__2_2;
    MR_Integer check_hlds__det_util__Cast_HeadVar2_5 = (MR_Integer) check_hlds__det_util__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(check_hlds__det_util__HeadVar__1_1, check_hlds__det_util__Cast_HeadVar1_4, check_hlds__det_util__Cast_HeadVar2_5);
    }
  }
}

MR_bool MR_CALL 
check_hlds__det_util____Unify____maybe_changed_0_0(
  MR_Word check_hlds__det_util__HeadVar__2_1,
  MR_Word check_hlds__det_util__HeadVar__2_2)
{
  {
    MR_bool check_hlds__det_util__succeeded = (check_hlds__det_util__HeadVar__2_1 == check_hlds__det_util__HeadVar__2_2);

    return check_hlds__det_util__succeeded;
  }
}

void MR_CALL 
check_hlds__det_util____Compare____det_info_0_0(
  MR_Word * check_hlds__det_util__HeadVar__1_1,
  MR_Word check_hlds__det_util__HeadVar__2_2,
  MR_Word check_hlds__det_util__HeadVar__3_3)
{
  {
    MR_bool check_hlds__det_util__succeeded;
    MR_Integer check_hlds__det_util__CastX_30 = (MR_Integer) check_hlds__det_util__HeadVar__2_2;
    MR_Integer check_hlds__det_util__CastY_31 = (MR_Integer) check_hlds__det_util__HeadVar__3_3;

    check_hlds__det_util__succeeded = (check_hlds__det_util__CastX_30 == check_hlds__det_util__CastY_31);
    if (check_hlds__det_util__succeeded)
      *check_hlds__det_util__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word check_hlds__det_util__ArgX1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word check_hlds__det_util__ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word check_hlds__det_util__ArgX2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word check_hlds__det_util__ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word check_hlds__det_util__ArgX3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word check_hlds__det_util__ArgY3_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__HeadVar__3_3, (MR_Integer) 2)));
        MR_Word check_hlds__det_util__ArgX4_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__HeadVar__2_2, (MR_Integer) 3)));
        MR_Word check_hlds__det_util__ArgY4_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__HeadVar__3_3, (MR_Integer) 3)));
        MR_Word check_hlds__det_util__ArgX5_12 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__HeadVar__2_2, (MR_Integer) 4)))) & (MR_Integer) 1);
        MR_Word check_hlds__det_util__ArgY5_13 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__HeadVar__3_3, (MR_Integer) 4)))) & (MR_Integer) 1);
        MR_Word check_hlds__det_util__ArgX6_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__HeadVar__2_2, (MR_Integer) 4)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
        MR_Word check_hlds__det_util__ArgY6_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__HeadVar__3_3, (MR_Integer) 4)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
        MR_Word check_hlds__det_util__ArgX7_16 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__HeadVar__2_2, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
        MR_Word check_hlds__det_util__ArgY7_17 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__HeadVar__3_3, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
        MR_Word check_hlds__det_util__ArgX8_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__HeadVar__2_2, (MR_Integer) 4)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
        MR_Word check_hlds__det_util__ArgY8_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__HeadVar__3_3, (MR_Integer) 4)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
        MR_Word check_hlds__det_util__ArgX9_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__HeadVar__2_2, (MR_Integer) 5)));
        MR_Word check_hlds__det_util__ArgY9_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__HeadVar__3_3, (MR_Integer) 5)));
        MR_Word check_hlds__det_util__Var_22;

        {
          hlds__hlds_module____Compare____module_info_0_0(&check_hlds__det_util__Var_22, check_hlds__det_util__ArgX1_4, check_hlds__det_util__ArgY1_5);
        }
        check_hlds__det_util__succeeded = (check_hlds__det_util__Var_22 == (MR_Integer) 0);
        check_hlds__det_util__succeeded = !(check_hlds__det_util__succeeded);
        if (check_hlds__det_util__succeeded)
          *check_hlds__det_util__HeadVar__1_1 = check_hlds__det_util__Var_22;
        else
          {
            MR_Word check_hlds__det_util__Var_23;

            {
              hlds__hlds_pred____Compare____pred_proc_id_0_0(&check_hlds__det_util__Var_23, check_hlds__det_util__ArgX2_6, check_hlds__det_util__ArgY2_7);
            }
            check_hlds__det_util__succeeded = (check_hlds__det_util__Var_23 == (MR_Integer) 0);
            check_hlds__det_util__succeeded = !(check_hlds__det_util__succeeded);
            if (check_hlds__det_util__succeeded)
              *check_hlds__det_util__HeadVar__1_1 = check_hlds__det_util__Var_23;
            else
              {
                MR_Word check_hlds__det_util__Var_24;

                {
                  mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__det_util_scalar_common_1[0], &check_hlds__det_util__Var_24, ((MR_Box) (check_hlds__det_util__ArgX3_8)), ((MR_Box) (check_hlds__det_util__ArgY3_9)));
                }
                check_hlds__det_util__succeeded = (check_hlds__det_util__Var_24 == (MR_Integer) 0);
                check_hlds__det_util__succeeded = !(check_hlds__det_util__succeeded);
                if (check_hlds__det_util__succeeded)
                  *check_hlds__det_util__HeadVar__1_1 = check_hlds__det_util__Var_24;
                else
                  {
                    MR_Word check_hlds__det_util__Var_25;

                    {
                      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__det_util_scalar_common_2[0], &check_hlds__det_util__Var_25, ((MR_Box) (check_hlds__det_util__ArgX4_10)), ((MR_Box) (check_hlds__det_util__ArgY4_11)));
                    }
                    check_hlds__det_util__succeeded = (check_hlds__det_util__Var_25 == (MR_Integer) 0);
                    check_hlds__det_util__succeeded = !(check_hlds__det_util__succeeded);
                    if (check_hlds__det_util__succeeded)
                      *check_hlds__det_util__HeadVar__1_1 = check_hlds__det_util__Var_25;
                    else
                      {
                        MR_Word check_hlds__det_util__Var_26;
                        MR_Integer check_hlds__det_util__Var_41 = (MR_Integer) check_hlds__det_util__ArgX5_12;
                        MR_Integer check_hlds__det_util__Var_42 = (MR_Integer) check_hlds__det_util__ArgY5_13;

                        {
                          mercury__private_builtin__builtin_compare_int_3_p_0(&check_hlds__det_util__Var_26, check_hlds__det_util__Var_41, check_hlds__det_util__Var_42);
                        }
                        check_hlds__det_util__succeeded = (check_hlds__det_util__Var_26 == (MR_Integer) 0);
                        check_hlds__det_util__succeeded = !(check_hlds__det_util__succeeded);
                        if (check_hlds__det_util__succeeded)
                          *check_hlds__det_util__HeadVar__1_1 = check_hlds__det_util__Var_26;
                        else
                          {
                            MR_Word check_hlds__det_util__Var_27;
                            MR_Integer check_hlds__det_util__Var_43 = (MR_Integer) check_hlds__det_util__ArgX6_14;
                            MR_Integer check_hlds__det_util__Var_44 = (MR_Integer) check_hlds__det_util__ArgY6_15;

                            {
                              mercury__private_builtin__builtin_compare_int_3_p_0(&check_hlds__det_util__Var_27, check_hlds__det_util__Var_43, check_hlds__det_util__Var_44);
                            }
                            check_hlds__det_util__succeeded = (check_hlds__det_util__Var_27 == (MR_Integer) 0);
                            check_hlds__det_util__succeeded = !(check_hlds__det_util__succeeded);
                            if (check_hlds__det_util__succeeded)
                              *check_hlds__det_util__HeadVar__1_1 = check_hlds__det_util__Var_27;
                            else
                              {
                                MR_Word check_hlds__det_util__Var_28;
                                MR_Integer check_hlds__det_util__Var_45 = (MR_Integer) check_hlds__det_util__ArgX7_16;
                                MR_Integer check_hlds__det_util__Var_46 = (MR_Integer) check_hlds__det_util__ArgY7_17;

                                {
                                  mercury__private_builtin__builtin_compare_int_3_p_0(&check_hlds__det_util__Var_28, check_hlds__det_util__Var_45, check_hlds__det_util__Var_46);
                                }
                                check_hlds__det_util__succeeded = (check_hlds__det_util__Var_28 == (MR_Integer) 0);
                                check_hlds__det_util__succeeded = !(check_hlds__det_util__succeeded);
                                if (check_hlds__det_util__succeeded)
                                  *check_hlds__det_util__HeadVar__1_1 = check_hlds__det_util__Var_28;
                                else
                                  {
                                    MR_Word check_hlds__det_util__Var_29;
                                    MR_Integer check_hlds__det_util__Var_47 = (MR_Integer) check_hlds__det_util__ArgX8_18;
                                    MR_Integer check_hlds__det_util__Var_48 = (MR_Integer) check_hlds__det_util__ArgY8_19;

                                    {
                                      mercury__private_builtin__builtin_compare_int_3_p_0(&check_hlds__det_util__Var_29, check_hlds__det_util__Var_47, check_hlds__det_util__Var_48);
                                    }
                                    check_hlds__det_util__succeeded = (check_hlds__det_util__Var_29 == (MR_Integer) 0);
                                    check_hlds__det_util__succeeded = !(check_hlds__det_util__succeeded);
                                    if (check_hlds__det_util__succeeded)
                                      *check_hlds__det_util__HeadVar__1_1 = check_hlds__det_util__Var_29;
                                    else
                                      {
                                        {
                                          mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__det_util_scalar_common_1[2], check_hlds__det_util__HeadVar__1_1, ((MR_Box) (check_hlds__det_util__ArgX9_20)), ((MR_Box) (check_hlds__det_util__ArgY9_21)));
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
}

MR_bool MR_CALL 
check_hlds__det_util____Unify____det_info_0_0(
  MR_Word check_hlds__det_util__HeadVar__1_1,
  MR_Word check_hlds__det_util__HeadVar__2_2)
{
  {
    MR_bool check_hlds__det_util__succeeded;
    MR_Integer check_hlds__det_util__CastX_21 = (MR_Integer) check_hlds__det_util__HeadVar__1_1;
    MR_Integer check_hlds__det_util__CastY_22 = (MR_Integer) check_hlds__det_util__HeadVar__2_2;

    check_hlds__det_util__succeeded = (check_hlds__det_util__CastX_21 == check_hlds__det_util__CastY_22);
    if (check_hlds__det_util__succeeded)
      check_hlds__det_util__succeeded = MR_TRUE;
    else
      {
        MR_Word check_hlds__det_util__TypeInfo_25_25;
        MR_Word check_hlds__det_util__TypeInfo_26_26;
        MR_Word check_hlds__det_util__TypeInfo_27_27;
        MR_Word check_hlds__det_util__ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word check_hlds__det_util__ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word check_hlds__det_util__ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word check_hlds__det_util__ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word check_hlds__det_util__ArgX3_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__HeadVar__1_1, (MR_Integer) 2)));
        MR_Word check_hlds__det_util__ArgY3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word check_hlds__det_util__ArgX4_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__HeadVar__1_1, (MR_Integer) 3)));
        MR_Word check_hlds__det_util__ArgY4_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__HeadVar__2_2, (MR_Integer) 3)));
        MR_Word check_hlds__det_util__ArgX5_11 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__HeadVar__1_1, (MR_Integer) 4)))) & (MR_Integer) 1);
        MR_Word check_hlds__det_util__ArgY5_12 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__HeadVar__2_2, (MR_Integer) 4)))) & (MR_Integer) 1);
        MR_Word check_hlds__det_util__ArgX6_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__HeadVar__1_1, (MR_Integer) 4)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
        MR_Word check_hlds__det_util__ArgY6_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__HeadVar__2_2, (MR_Integer) 4)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
        MR_Word check_hlds__det_util__ArgX7_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__HeadVar__1_1, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
        MR_Word check_hlds__det_util__ArgY7_16 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__HeadVar__2_2, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
        MR_Word check_hlds__det_util__ArgX8_17 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__HeadVar__1_1, (MR_Integer) 4)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
        MR_Word check_hlds__det_util__ArgY8_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__HeadVar__2_2, (MR_Integer) 4)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
        MR_Word check_hlds__det_util__ArgX9_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__HeadVar__1_1, (MR_Integer) 5)));
        MR_Word check_hlds__det_util__ArgY9_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__HeadVar__2_2, (MR_Integer) 5)));

        {
          check_hlds__det_util__succeeded = hlds__hlds_module____Unify____module_info_0_0(check_hlds__det_util__ArgX1_3, check_hlds__det_util__ArgY1_4);
        }
        if (check_hlds__det_util__succeeded)
          {
            {
              check_hlds__det_util__succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(check_hlds__det_util__ArgX2_5, check_hlds__det_util__ArgY2_6);
            }
            if (check_hlds__det_util__succeeded)
              {
                check_hlds__det_util__TypeInfo_25_25 = (MR_Word) &check_hlds__det_util_scalar_common_1[0];
                {
                  check_hlds__det_util__succeeded = mercury__builtin__unify_2_p_0(check_hlds__det_util__TypeInfo_25_25, ((MR_Box) (check_hlds__det_util__ArgX3_7)), ((MR_Box) (check_hlds__det_util__ArgY3_8)));
                }
                if (check_hlds__det_util__succeeded)
                  {
                    check_hlds__det_util__TypeInfo_26_26 = (MR_Word) &check_hlds__det_util_scalar_common_2[0];
                    {
                      check_hlds__det_util__succeeded = mercury__builtin__unify_2_p_0(check_hlds__det_util__TypeInfo_26_26, ((MR_Box) (check_hlds__det_util__ArgX4_9)), ((MR_Box) (check_hlds__det_util__ArgY4_10)));
                    }
                    if (check_hlds__det_util__succeeded)
                      {
                        check_hlds__det_util__succeeded = (check_hlds__det_util__ArgX5_11 == check_hlds__det_util__ArgY5_12);
                        if (check_hlds__det_util__succeeded)
                          {
                            check_hlds__det_util__succeeded = (check_hlds__det_util__ArgX6_13 == check_hlds__det_util__ArgY6_14);
                            if (check_hlds__det_util__succeeded)
                              {
                                check_hlds__det_util__succeeded = (check_hlds__det_util__ArgX7_15 == check_hlds__det_util__ArgY7_16);
                                if (check_hlds__det_util__succeeded)
                                  {
                                    check_hlds__det_util__succeeded = (check_hlds__det_util__ArgX8_17 == check_hlds__det_util__ArgY8_18);
                                    if (check_hlds__det_util__succeeded)
                                      {
                                        check_hlds__det_util__TypeInfo_27_27 = (MR_Word) &check_hlds__det_util_scalar_common_1[2];
                                        {
                                          check_hlds__det_util__succeeded = mercury__builtin__unify_2_p_0(check_hlds__det_util__TypeInfo_27_27, ((MR_Box) (check_hlds__det_util__ArgX9_19)), ((MR_Box) (check_hlds__det_util__ArgY9_20)));
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
    return check_hlds__det_util__succeeded;
  }
}

void MR_CALL 
check_hlds__det_util____Compare____contains_require_scope_0_0(
  MR_Word * check_hlds__det_util__HeadVar__1_1,
  MR_Word check_hlds__det_util__HeadVar__2_2,
  MR_Word check_hlds__det_util__HeadVar__3_3)
{
  {
    MR_bool check_hlds__det_util__succeeded;
    MR_Integer check_hlds__det_util__Cast_HeadVar1_4 = (MR_Integer) check_hlds__det_util__HeadVar__2_2;
    MR_Integer check_hlds__det_util__Cast_HeadVar2_5 = (MR_Integer) check_hlds__det_util__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(check_hlds__det_util__HeadVar__1_1, check_hlds__det_util__Cast_HeadVar1_4, check_hlds__det_util__Cast_HeadVar2_5);
    }
  }
}

MR_bool MR_CALL 
check_hlds__det_util____Unify____contains_require_scope_0_0(
  MR_Word check_hlds__det_util__HeadVar__2_1,
  MR_Word check_hlds__det_util__HeadVar__2_2)
{
  {
    MR_bool check_hlds__det_util__succeeded = (check_hlds__det_util__HeadVar__2_1 == check_hlds__det_util__HeadVar__2_2);

    return check_hlds__det_util__succeeded;
  }
}

void MR_CALL 
check_hlds__det_util____Compare____contains_incomplete_switch_0_0(
  MR_Word * check_hlds__det_util__HeadVar__1_1,
  MR_Word check_hlds__det_util__HeadVar__2_2,
  MR_Word check_hlds__det_util__HeadVar__3_3)
{
  {
    MR_bool check_hlds__det_util__succeeded;
    MR_Integer check_hlds__det_util__Cast_HeadVar1_4 = (MR_Integer) check_hlds__det_util__HeadVar__2_2;
    MR_Integer check_hlds__det_util__Cast_HeadVar2_5 = (MR_Integer) check_hlds__det_util__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(check_hlds__det_util__HeadVar__1_1, check_hlds__det_util__Cast_HeadVar1_4, check_hlds__det_util__Cast_HeadVar2_5);
    }
  }
}

MR_bool MR_CALL 
check_hlds__det_util____Unify____contains_incomplete_switch_0_0(
  MR_Word check_hlds__det_util__HeadVar__2_1,
  MR_Word check_hlds__det_util__HeadVar__2_2)
{
  {
    MR_bool check_hlds__det_util__succeeded = (check_hlds__det_util__HeadVar__2_1 == check_hlds__det_util__HeadVar__2_2);

    return check_hlds__det_util__succeeded;
  }
}

void MR_CALL 
check_hlds__det_util____Compare____contains_format_call_0_0(
  MR_Word * check_hlds__det_util__HeadVar__1_1,
  MR_Word check_hlds__det_util__HeadVar__2_2,
  MR_Word check_hlds__det_util__HeadVar__3_3)
{
  {
    MR_bool check_hlds__det_util__succeeded;
    MR_Integer check_hlds__det_util__Cast_HeadVar1_4 = (MR_Integer) check_hlds__det_util__HeadVar__2_2;
    MR_Integer check_hlds__det_util__Cast_HeadVar2_5 = (MR_Integer) check_hlds__det_util__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(check_hlds__det_util__HeadVar__1_1, check_hlds__det_util__Cast_HeadVar1_4, check_hlds__det_util__Cast_HeadVar2_5);
    }
  }
}

MR_bool MR_CALL 
check_hlds__det_util____Unify____contains_format_call_0_0(
  MR_Word check_hlds__det_util__HeadVar__2_1,
  MR_Word check_hlds__det_util__HeadVar__2_2)
{
  {
    MR_bool check_hlds__det_util__succeeded = (check_hlds__det_util__HeadVar__2_1 == check_hlds__det_util__HeadVar__2_2);

    return check_hlds__det_util__succeeded;
  }
}

void MR_CALL 
check_hlds__det_util__det_info_set_has_incomplete_switch_2_p_0(
  MR_Word check_hlds__det_util__STATE_VARIABLE_DetInfo_0_5,
  MR_Word * check_hlds__det_util__STATE_VARIABLE_DetInfo_6)
{
  {
    MR_bool check_hlds__det_util__succeeded;
    MR_Word check_hlds__det_util__Var_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__STATE_VARIABLE_DetInfo_0_5, (MR_Integer) 4)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    MR_Word check_hlds__det_util__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__STATE_VARIABLE_DetInfo_0_5, (MR_Integer) 0)));
    MR_Word check_hlds__det_util__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__STATE_VARIABLE_DetInfo_0_5, (MR_Integer) 1)));
    MR_Word check_hlds__det_util__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__STATE_VARIABLE_DetInfo_0_5, (MR_Integer) 2)));
    MR_Word check_hlds__det_util__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__STATE_VARIABLE_DetInfo_0_5, (MR_Integer) 3)));
    MR_Word check_hlds__det_util__Var_12 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__STATE_VARIABLE_DetInfo_0_5, (MR_Integer) 4)))) & (MR_Integer) 1);
    MR_Word check_hlds__det_util__Var_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__STATE_VARIABLE_DetInfo_0_5, (MR_Integer) 4)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Word check_hlds__det_util__Var_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__STATE_VARIABLE_DetInfo_0_5, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word check_hlds__det_util__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__STATE_VARIABLE_DetInfo_0_5, (MR_Integer) 5)));

    check_hlds__det_util__succeeded = ((MR_Integer) 1 == check_hlds__det_util__Var_25);
    if (check_hlds__det_util__succeeded)
      *check_hlds__det_util__STATE_VARIABLE_DetInfo_6 = check_hlds__det_util__STATE_VARIABLE_DetInfo_0_5;
    else
      {
        MR_Word check_hlds__det_util__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__STATE_VARIABLE_DetInfo_0_5, (MR_Integer) 0)));
        MR_Word check_hlds__det_util__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__STATE_VARIABLE_DetInfo_0_5, (MR_Integer) 1)));
        MR_Word check_hlds__det_util__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__STATE_VARIABLE_DetInfo_0_5, (MR_Integer) 2)));
        MR_Word check_hlds__det_util__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__STATE_VARIABLE_DetInfo_0_5, (MR_Integer) 3)));
        MR_Word check_hlds__det_util__Var_20 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__STATE_VARIABLE_DetInfo_0_5, (MR_Integer) 4)))) & (MR_Integer) 1);
        MR_Word check_hlds__det_util__Var_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__STATE_VARIABLE_DetInfo_0_5, (MR_Integer) 4)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
        MR_Word check_hlds__det_util__Var_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__STATE_VARIABLE_DetInfo_0_5, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
        MR_Word check_hlds__det_util__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__STATE_VARIABLE_DetInfo_0_5, (MR_Integer) 5)));
        MR_Word check_hlds__det_util__Var_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__STATE_VARIABLE_DetInfo_0_5, (MR_Integer) 4)))) >> (MR_Integer) 3)) & (MR_Integer) 1);

        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
          *check_hlds__det_util__STATE_VARIABLE_DetInfo_6 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__det_util__Var_16));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__det_util__Var_17));
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__det_util__Var_18));
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__det_util__Var_19));
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) ((check_hlds__det_util__Var_20 | ((((check_hlds__det_util__Var_21 << (MR_Integer) 1)) | ((((check_hlds__det_util__Var_22 << (MR_Integer) 2)) | (((MR_Integer) 1 << (MR_Integer) 3)))))))));
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__det_util__Var_24));
        }
      }
  }
}

void MR_CALL 
check_hlds__det_util__det_info_set_has_req_scope_2_p_0(
  MR_Word check_hlds__det_util__STATE_VARIABLE_DetInfo_0_5,
  MR_Word * check_hlds__det_util__STATE_VARIABLE_DetInfo_6)
{
  {
    MR_bool check_hlds__det_util__succeeded;
    MR_Word check_hlds__det_util__Var_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__STATE_VARIABLE_DetInfo_0_5, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word check_hlds__det_util__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__STATE_VARIABLE_DetInfo_0_5, (MR_Integer) 0)));
    MR_Word check_hlds__det_util__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__STATE_VARIABLE_DetInfo_0_5, (MR_Integer) 1)));
    MR_Word check_hlds__det_util__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__STATE_VARIABLE_DetInfo_0_5, (MR_Integer) 2)));
    MR_Word check_hlds__det_util__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__STATE_VARIABLE_DetInfo_0_5, (MR_Integer) 3)));
    MR_Word check_hlds__det_util__Var_12 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__STATE_VARIABLE_DetInfo_0_5, (MR_Integer) 4)))) & (MR_Integer) 1);
    MR_Word check_hlds__det_util__Var_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__STATE_VARIABLE_DetInfo_0_5, (MR_Integer) 4)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Word check_hlds__det_util__Var_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__STATE_VARIABLE_DetInfo_0_5, (MR_Integer) 4)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    MR_Word check_hlds__det_util__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__STATE_VARIABLE_DetInfo_0_5, (MR_Integer) 5)));

    check_hlds__det_util__succeeded = ((MR_Integer) 1 == check_hlds__det_util__Var_25);
    if (check_hlds__det_util__succeeded)
      *check_hlds__det_util__STATE_VARIABLE_DetInfo_6 = check_hlds__det_util__STATE_VARIABLE_DetInfo_0_5;
    else
      {
        MR_Word check_hlds__det_util__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__STATE_VARIABLE_DetInfo_0_5, (MR_Integer) 0)));
        MR_Word check_hlds__det_util__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__STATE_VARIABLE_DetInfo_0_5, (MR_Integer) 1)));
        MR_Word check_hlds__det_util__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__STATE_VARIABLE_DetInfo_0_5, (MR_Integer) 2)));
        MR_Word check_hlds__det_util__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__STATE_VARIABLE_DetInfo_0_5, (MR_Integer) 3)));
        MR_Word check_hlds__det_util__Var_20 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__STATE_VARIABLE_DetInfo_0_5, (MR_Integer) 4)))) & (MR_Integer) 1);
        MR_Word check_hlds__det_util__Var_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__STATE_VARIABLE_DetInfo_0_5, (MR_Integer) 4)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
        MR_Word check_hlds__det_util__Var_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__STATE_VARIABLE_DetInfo_0_5, (MR_Integer) 4)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
        MR_Word check_hlds__det_util__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__STATE_VARIABLE_DetInfo_0_5, (MR_Integer) 5)));
        MR_Word check_hlds__det_util__Var_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__STATE_VARIABLE_DetInfo_0_5, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);

        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
          *check_hlds__det_util__STATE_VARIABLE_DetInfo_6 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__det_util__Var_16));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__det_util__Var_17));
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__det_util__Var_18));
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__det_util__Var_19));
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) ((check_hlds__det_util__Var_20 | ((((check_hlds__det_util__Var_21 << (MR_Integer) 1)) | (((((MR_Integer) 1 << (MR_Integer) 2)) | ((check_hlds__det_util__Var_23 << (MR_Integer) 3)))))))));
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__det_util__Var_24));
        }
      }
  }
}

void MR_CALL 
check_hlds__det_util__det_info_set_has_format_call_2_p_0(
  MR_Word check_hlds__det_util__STATE_VARIABLE_DetInfo_0_5,
  MR_Word * check_hlds__det_util__STATE_VARIABLE_DetInfo_6)
{
  {
    MR_bool check_hlds__det_util__succeeded;
    MR_Word check_hlds__det_util__Var_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__STATE_VARIABLE_DetInfo_0_5, (MR_Integer) 4)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Word check_hlds__det_util__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__STATE_VARIABLE_DetInfo_0_5, (MR_Integer) 0)));
    MR_Word check_hlds__det_util__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__STATE_VARIABLE_DetInfo_0_5, (MR_Integer) 1)));
    MR_Word check_hlds__det_util__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__STATE_VARIABLE_DetInfo_0_5, (MR_Integer) 2)));
    MR_Word check_hlds__det_util__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__STATE_VARIABLE_DetInfo_0_5, (MR_Integer) 3)));
    MR_Word check_hlds__det_util__Var_12 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__STATE_VARIABLE_DetInfo_0_5, (MR_Integer) 4)))) & (MR_Integer) 1);
    MR_Word check_hlds__det_util__Var_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__STATE_VARIABLE_DetInfo_0_5, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word check_hlds__det_util__Var_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__STATE_VARIABLE_DetInfo_0_5, (MR_Integer) 4)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    MR_Word check_hlds__det_util__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__STATE_VARIABLE_DetInfo_0_5, (MR_Integer) 5)));

    check_hlds__det_util__succeeded = ((MR_Integer) 1 == check_hlds__det_util__Var_25);
    if (check_hlds__det_util__succeeded)
      *check_hlds__det_util__STATE_VARIABLE_DetInfo_6 = check_hlds__det_util__STATE_VARIABLE_DetInfo_0_5;
    else
      {
        MR_Word check_hlds__det_util__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__STATE_VARIABLE_DetInfo_0_5, (MR_Integer) 0)));
        MR_Word check_hlds__det_util__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__STATE_VARIABLE_DetInfo_0_5, (MR_Integer) 1)));
        MR_Word check_hlds__det_util__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__STATE_VARIABLE_DetInfo_0_5, (MR_Integer) 2)));
        MR_Word check_hlds__det_util__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__STATE_VARIABLE_DetInfo_0_5, (MR_Integer) 3)));
        MR_Word check_hlds__det_util__Var_20 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__STATE_VARIABLE_DetInfo_0_5, (MR_Integer) 4)))) & (MR_Integer) 1);
        MR_Word check_hlds__det_util__Var_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__STATE_VARIABLE_DetInfo_0_5, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
        MR_Word check_hlds__det_util__Var_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__STATE_VARIABLE_DetInfo_0_5, (MR_Integer) 4)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
        MR_Word check_hlds__det_util__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__STATE_VARIABLE_DetInfo_0_5, (MR_Integer) 5)));
        MR_Word check_hlds__det_util__Var_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__STATE_VARIABLE_DetInfo_0_5, (MR_Integer) 4)))) >> (MR_Integer) 1)) & (MR_Integer) 1);

        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
          *check_hlds__det_util__STATE_VARIABLE_DetInfo_6 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__det_util__Var_16));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__det_util__Var_17));
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__det_util__Var_18));
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__det_util__Var_19));
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) ((check_hlds__det_util__Var_20 | (((((MR_Integer) 1 << (MR_Integer) 1)) | ((((check_hlds__det_util__Var_22 << (MR_Integer) 2)) | ((check_hlds__det_util__Var_23 << (MR_Integer) 3)))))))));
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__det_util__Var_24));
        }
      }
  }
}

void MR_CALL 
check_hlds__det_util__det_info_set_module_info_3_p_0(
  MR_Word check_hlds__det_util__X_4,
  MR_Word check_hlds__det_util__STATE_VARIABLE_DetInfo_0_6,
  MR_Word * check_hlds__det_util__STATE_VARIABLE_DetInfo_7)
{
  {
    MR_bool check_hlds__det_util__succeeded;
    MR_Word check_hlds__det_util__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__STATE_VARIABLE_DetInfo_0_6, (MR_Integer) 0)));
    MR_Word check_hlds__det_util__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__STATE_VARIABLE_DetInfo_0_6, (MR_Integer) 1)));
    MR_Word check_hlds__det_util__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__STATE_VARIABLE_DetInfo_0_6, (MR_Integer) 2)));
    MR_Word check_hlds__det_util__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__STATE_VARIABLE_DetInfo_0_6, (MR_Integer) 3)));
    MR_Word check_hlds__det_util__Var_13 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__STATE_VARIABLE_DetInfo_0_6, (MR_Integer) 4)))) & (MR_Integer) 1);
    MR_Word check_hlds__det_util__Var_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__STATE_VARIABLE_DetInfo_0_6, (MR_Integer) 4)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Word check_hlds__det_util__Var_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__STATE_VARIABLE_DetInfo_0_6, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word check_hlds__det_util__Var_16 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__STATE_VARIABLE_DetInfo_0_6, (MR_Integer) 4)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    MR_Word check_hlds__det_util__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__STATE_VARIABLE_DetInfo_0_6, (MR_Integer) 5)));

    check_hlds__det_util__succeeded = (((MR_Word) check_hlds__det_util__X_4) == ((MR_Word) check_hlds__det_util__Var_8));
    if (check_hlds__det_util__succeeded)
      *check_hlds__det_util__STATE_VARIABLE_DetInfo_7 = check_hlds__det_util__STATE_VARIABLE_DetInfo_0_6;
    else
      {
        MR_Word check_hlds__det_util__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__STATE_VARIABLE_DetInfo_0_6, (MR_Integer) 1)));
        MR_Word check_hlds__det_util__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__STATE_VARIABLE_DetInfo_0_6, (MR_Integer) 2)));
        MR_Word check_hlds__det_util__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__STATE_VARIABLE_DetInfo_0_6, (MR_Integer) 3)));
        MR_Word check_hlds__det_util__Var_22 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__STATE_VARIABLE_DetInfo_0_6, (MR_Integer) 4)))) & (MR_Integer) 1);
        MR_Word check_hlds__det_util__Var_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__STATE_VARIABLE_DetInfo_0_6, (MR_Integer) 4)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
        MR_Word check_hlds__det_util__Var_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__STATE_VARIABLE_DetInfo_0_6, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
        MR_Word check_hlds__det_util__Var_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__STATE_VARIABLE_DetInfo_0_6, (MR_Integer) 4)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
        MR_Word check_hlds__det_util__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__STATE_VARIABLE_DetInfo_0_6, (MR_Integer) 5)));
        MR_Word check_hlds__det_util__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__STATE_VARIABLE_DetInfo_0_6, (MR_Integer) 0)));

        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
          *check_hlds__det_util__STATE_VARIABLE_DetInfo_7 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__det_util__X_4));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__det_util__Var_19));
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__det_util__Var_20));
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__det_util__Var_21));
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) ((check_hlds__det_util__Var_22 | ((((check_hlds__det_util__Var_23 << (MR_Integer) 1)) | ((((check_hlds__det_util__Var_24 << (MR_Integer) 2)) | ((check_hlds__det_util__Var_25 << (MR_Integer) 3)))))))));
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__det_util__Var_26));
        }
      }
  }
}

void MR_CALL 
check_hlds__det_util__det_info_get_error_specs_2_p_0(
  MR_Word check_hlds__det_util__DetInfo_3,
  MR_Word * check_hlds__det_util__X_4)
{
  {
    MR_bool check_hlds__det_util__succeeded;
    MR_Word check_hlds__det_util__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_3, (MR_Integer) 0)));
    MR_Word check_hlds__det_util__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_3, (MR_Integer) 1)));
    MR_Word check_hlds__det_util__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_3, (MR_Integer) 2)));
    MR_Word check_hlds__det_util__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_3, (MR_Integer) 3)));
    MR_Word check_hlds__det_util__Var_9 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_3, (MR_Integer) 4)))) & (MR_Integer) 1);
    MR_Word check_hlds__det_util__Var_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_3, (MR_Integer) 4)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Word check_hlds__det_util__Var_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_3, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word check_hlds__det_util__Var_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_3, (MR_Integer) 4)))) >> (MR_Integer) 3)) & (MR_Integer) 1);

    *check_hlds__det_util__X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_3, (MR_Integer) 5)));
  }
}

void MR_CALL 
check_hlds__det_util__det_info_get_has_incomplete_switch_2_p_0(
  MR_Word check_hlds__det_util__DetInfo_3,
  MR_Word * check_hlds__det_util__X_4)
{
  {
    MR_bool check_hlds__det_util__succeeded;
    MR_Word check_hlds__det_util__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_3, (MR_Integer) 0)));
    MR_Word check_hlds__det_util__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_3, (MR_Integer) 1)));
    MR_Word check_hlds__det_util__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_3, (MR_Integer) 2)));
    MR_Word check_hlds__det_util__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_3, (MR_Integer) 3)));
    MR_Word check_hlds__det_util__Var_9 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_3, (MR_Integer) 4)))) & (MR_Integer) 1);
    MR_Word check_hlds__det_util__Var_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_3, (MR_Integer) 4)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Word check_hlds__det_util__Var_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_3, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word check_hlds__det_util__Var_12;

    *check_hlds__det_util__X_4 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_3, (MR_Integer) 4)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    check_hlds__det_util__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_3, (MR_Integer) 5)));
  }
}

void MR_CALL 
check_hlds__det_util__det_info_get_has_req_scope_2_p_0(
  MR_Word check_hlds__det_util__DetInfo_3,
  MR_Word * check_hlds__det_util__X_4)
{
  {
    MR_bool check_hlds__det_util__succeeded;
    MR_Word check_hlds__det_util__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_3, (MR_Integer) 0)));
    MR_Word check_hlds__det_util__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_3, (MR_Integer) 1)));
    MR_Word check_hlds__det_util__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_3, (MR_Integer) 2)));
    MR_Word check_hlds__det_util__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_3, (MR_Integer) 3)));
    MR_Word check_hlds__det_util__Var_9 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_3, (MR_Integer) 4)))) & (MR_Integer) 1);
    MR_Word check_hlds__det_util__Var_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_3, (MR_Integer) 4)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Word check_hlds__det_util__Var_11;
    MR_Word check_hlds__det_util__Var_12;

    *check_hlds__det_util__X_4 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_3, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    check_hlds__det_util__Var_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_3, (MR_Integer) 4)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    check_hlds__det_util__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_3, (MR_Integer) 5)));
  }
}

void MR_CALL 
check_hlds__det_util__det_info_get_has_format_call_2_p_0(
  MR_Word check_hlds__det_util__DetInfo_3,
  MR_Word * check_hlds__det_util__X_4)
{
  {
    MR_bool check_hlds__det_util__succeeded;
    MR_Word check_hlds__det_util__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_3, (MR_Integer) 0)));
    MR_Word check_hlds__det_util__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_3, (MR_Integer) 1)));
    MR_Word check_hlds__det_util__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_3, (MR_Integer) 2)));
    MR_Word check_hlds__det_util__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_3, (MR_Integer) 3)));
    MR_Word check_hlds__det_util__Var_9 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_3, (MR_Integer) 4)))) & (MR_Integer) 1);
    MR_Word check_hlds__det_util__Var_10;
    MR_Word check_hlds__det_util__Var_11;
    MR_Word check_hlds__det_util__Var_12;

    *check_hlds__det_util__X_4 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_3, (MR_Integer) 4)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    check_hlds__det_util__Var_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_3, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    check_hlds__det_util__Var_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_3, (MR_Integer) 4)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    check_hlds__det_util__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_3, (MR_Integer) 5)));
  }
}

void MR_CALL 
check_hlds__det_util__det_info_get_pess_extra_vars_2_p_0(
  MR_Word check_hlds__det_util__DetInfo_3,
  MR_Word * check_hlds__det_util__X_4)
{
  {
    MR_bool check_hlds__det_util__succeeded;
    MR_Word check_hlds__det_util__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_3, (MR_Integer) 0)));
    MR_Word check_hlds__det_util__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_3, (MR_Integer) 1)));
    MR_Word check_hlds__det_util__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_3, (MR_Integer) 2)));
    MR_Word check_hlds__det_util__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_3, (MR_Integer) 3)));
    MR_Word check_hlds__det_util__Var_9;
    MR_Word check_hlds__det_util__Var_10;
    MR_Word check_hlds__det_util__Var_11;
    MR_Word check_hlds__det_util__Var_12;

    *check_hlds__det_util__X_4 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_3, (MR_Integer) 4)))) & (MR_Integer) 1);
    check_hlds__det_util__Var_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_3, (MR_Integer) 4)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    check_hlds__det_util__Var_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_3, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    check_hlds__det_util__Var_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_3, (MR_Integer) 4)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    check_hlds__det_util__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_3, (MR_Integer) 5)));
  }
}

void MR_CALL 
check_hlds__det_util__det_info_get_vartypes_2_p_0(
  MR_Word check_hlds__det_util__DetInfo_3,
  MR_Word * check_hlds__det_util__X_4)
{
  {
    MR_bool check_hlds__det_util__succeeded;
    MR_Word check_hlds__det_util__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_3, (MR_Integer) 0)));
    MR_Word check_hlds__det_util__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_3, (MR_Integer) 1)));
    MR_Word check_hlds__det_util__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_3, (MR_Integer) 2)));
    MR_Word check_hlds__det_util__Var_8;
    MR_Word check_hlds__det_util__Var_9;
    MR_Word check_hlds__det_util__Var_10;
    MR_Word check_hlds__det_util__Var_11;
    MR_Word check_hlds__det_util__Var_12;

    *check_hlds__det_util__X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_3, (MR_Integer) 3)));
    check_hlds__det_util__Var_8 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_3, (MR_Integer) 4)))) & (MR_Integer) 1);
    check_hlds__det_util__Var_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_3, (MR_Integer) 4)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    check_hlds__det_util__Var_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_3, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    check_hlds__det_util__Var_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_3, (MR_Integer) 4)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    check_hlds__det_util__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_3, (MR_Integer) 5)));
  }
}

void MR_CALL 
check_hlds__det_util__det_info_get_varset_2_p_0(
  MR_Word check_hlds__det_util__DetInfo_3,
  MR_Word * check_hlds__det_util__X_4)
{
  {
    MR_bool check_hlds__det_util__succeeded;
    MR_Word check_hlds__det_util__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_3, (MR_Integer) 0)));
    MR_Word check_hlds__det_util__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_3, (MR_Integer) 1)));
    MR_Word check_hlds__det_util__Var_7;
    MR_Word check_hlds__det_util__Var_8;
    MR_Word check_hlds__det_util__Var_9;
    MR_Word check_hlds__det_util__Var_10;
    MR_Word check_hlds__det_util__Var_11;
    MR_Word check_hlds__det_util__Var_12;

    *check_hlds__det_util__X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_3, (MR_Integer) 2)));
    check_hlds__det_util__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_3, (MR_Integer) 3)));
    check_hlds__det_util__Var_8 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_3, (MR_Integer) 4)))) & (MR_Integer) 1);
    check_hlds__det_util__Var_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_3, (MR_Integer) 4)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    check_hlds__det_util__Var_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_3, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    check_hlds__det_util__Var_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_3, (MR_Integer) 4)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    check_hlds__det_util__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_3, (MR_Integer) 5)));
  }
}

void MR_CALL 
check_hlds__det_util__det_info_get_pred_proc_id_2_p_0(
  MR_Word check_hlds__det_util__DetInfo_3,
  MR_Word * check_hlds__det_util__X_4)
{
  {
    MR_bool check_hlds__det_util__succeeded;
    MR_Word check_hlds__det_util__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_3, (MR_Integer) 0)));
    MR_Word check_hlds__det_util__Var_6;
    MR_Word check_hlds__det_util__Var_7;
    MR_Word check_hlds__det_util__Var_8;
    MR_Word check_hlds__det_util__Var_9;
    MR_Word check_hlds__det_util__Var_10;
    MR_Word check_hlds__det_util__Var_11;
    MR_Word check_hlds__det_util__Var_12;

    *check_hlds__det_util__X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_3, (MR_Integer) 1)));
    check_hlds__det_util__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_3, (MR_Integer) 2)));
    check_hlds__det_util__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_3, (MR_Integer) 3)));
    check_hlds__det_util__Var_8 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_3, (MR_Integer) 4)))) & (MR_Integer) 1);
    check_hlds__det_util__Var_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_3, (MR_Integer) 4)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    check_hlds__det_util__Var_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_3, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    check_hlds__det_util__Var_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_3, (MR_Integer) 4)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    check_hlds__det_util__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_3, (MR_Integer) 5)));
  }
}

void MR_CALL 
check_hlds__det_util__det_info_get_module_info_2_p_0(
  MR_Word check_hlds__det_util__DetInfo_3,
  MR_Word * check_hlds__det_util__X_4)
{
  {
    MR_bool check_hlds__det_util__succeeded;
    MR_Word check_hlds__det_util__Var_5;
    MR_Word check_hlds__det_util__Var_6;
    MR_Word check_hlds__det_util__Var_7;
    MR_Word check_hlds__det_util__Var_8;
    MR_Word check_hlds__det_util__Var_9;
    MR_Word check_hlds__det_util__Var_10;
    MR_Word check_hlds__det_util__Var_11;
    MR_Word check_hlds__det_util__Var_12;

    *check_hlds__det_util__X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_3, (MR_Integer) 0)));
    check_hlds__det_util__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_3, (MR_Integer) 1)));
    check_hlds__det_util__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_3, (MR_Integer) 2)));
    check_hlds__det_util__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_3, (MR_Integer) 3)));
    check_hlds__det_util__Var_8 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_3, (MR_Integer) 4)))) & (MR_Integer) 1);
    check_hlds__det_util__Var_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_3, (MR_Integer) 4)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    check_hlds__det_util__Var_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_3, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    check_hlds__det_util__Var_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_3, (MR_Integer) 4)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    check_hlds__det_util__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_3, (MR_Integer) 5)));
  }
}

void MR_CALL 
check_hlds__det_util__det_info_init_7_p_0(
  MR_Word check_hlds__det_util__ModuleInfo_8,
  MR_Word check_hlds__det_util__PredProcId_9,
  MR_Word check_hlds__det_util__VarSet_10,
  MR_Word check_hlds__det_util__VarTypes_11,
  MR_Word check_hlds__det_util__PessExtraVars_12,
  MR_Word check_hlds__det_util__Specs_13,
  MR_Word * check_hlds__det_util__DetInfo_14)
{
  {
    MR_bool check_hlds__det_util__succeeded;

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      *check_hlds__det_util__DetInfo_14 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__det_util__ModuleInfo_8));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__det_util__PredProcId_9));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__det_util__VarSet_10));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__det_util__VarTypes_11));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) ((check_hlds__det_util__PessExtraVars_12 | (((((MR_Integer) 0 << (MR_Integer) 1)) | (((((MR_Integer) 0 << (MR_Integer) 2)) | (((MR_Integer) 0 << (MR_Integer) 3)))))))));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__det_util__Specs_13));
    }
  }
}

void MR_CALL 
check_hlds__det_util__det_info_add_error_spec_3_p_0(
  MR_Word check_hlds__det_util__Spec_4,
  MR_Word check_hlds__det_util__STATE_VARIABLE_DetInfo_0_8,
  MR_Word * check_hlds__det_util__STATE_VARIABLE_DetInfo_9)
{
  {
    MR_bool check_hlds__det_util__succeeded;
    MR_Word check_hlds__det_util__Specs0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__STATE_VARIABLE_DetInfo_0_8, (MR_Integer) 5)));
    MR_Word check_hlds__det_util__Specs_7;
    MR_Word check_hlds__det_util__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__STATE_VARIABLE_DetInfo_0_8, (MR_Integer) 0)));
    MR_Word check_hlds__det_util__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__STATE_VARIABLE_DetInfo_0_8, (MR_Integer) 1)));
    MR_Word check_hlds__det_util__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__STATE_VARIABLE_DetInfo_0_8, (MR_Integer) 2)));
    MR_Word check_hlds__det_util__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__STATE_VARIABLE_DetInfo_0_8, (MR_Integer) 3)));
    MR_Word check_hlds__det_util__Var_17 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__STATE_VARIABLE_DetInfo_0_8, (MR_Integer) 4)))) & (MR_Integer) 1);
    MR_Word check_hlds__det_util__Var_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__STATE_VARIABLE_DetInfo_0_8, (MR_Integer) 4)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Word check_hlds__det_util__Var_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__STATE_VARIABLE_DetInfo_0_8, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word check_hlds__det_util__Var_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__STATE_VARIABLE_DetInfo_0_8, (MR_Integer) 4)))) >> (MR_Integer) 3)) & (MR_Integer) 1);

    {
      check_hlds__det_util__Specs_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__det_util__Specs_7, 0) = ((MR_Box) (check_hlds__det_util__Spec_4));
      MR_hl_field(MR_mktag(1), check_hlds__det_util__Specs_7, 1) = ((MR_Box) (check_hlds__det_util__Specs0_6));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      *check_hlds__det_util__STATE_VARIABLE_DetInfo_9 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__det_util__Var_13));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__det_util__Var_14));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__det_util__Var_15));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__det_util__Var_16));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) ((check_hlds__det_util__Var_17 | ((((check_hlds__det_util__Var_18 << (MR_Integer) 1)) | ((((check_hlds__det_util__Var_19 << (MR_Integer) 2)) | ((check_hlds__det_util__Var_20 << (MR_Integer) 3)))))))));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__det_util__Specs_7));
    }
  }
}

MR_bool MR_CALL 
check_hlds__det_util__det_no_output_vars_4_p_0(
  MR_Word check_hlds__det_util__DetInfo_5,
  MR_Word check_hlds__det_util__InstMap_6,
  MR_Word check_hlds__det_util__InstMapDelta_7,
  MR_Word check_hlds__det_util__Vars_8)
{
  {
    MR_bool check_hlds__det_util__succeeded;
    MR_Word check_hlds__det_util__ModuleInfo_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_5, (MR_Integer) 0)));
    MR_Word check_hlds__det_util__VarTypes_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_5, (MR_Integer) 3)));
    MR_Word check_hlds__det_util__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_5, (MR_Integer) 1)));
    MR_Word check_hlds__det_util__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_5, (MR_Integer) 2)));
    MR_Word check_hlds__det_util__Var_24 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_5, (MR_Integer) 4)))) & (MR_Integer) 1);
    MR_Word check_hlds__det_util__Var_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_5, (MR_Integer) 4)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Word check_hlds__det_util__Var_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_5, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word check_hlds__det_util__Var_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_5, (MR_Integer) 4)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    MR_Word check_hlds__det_util__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_5, (MR_Integer) 5)));

    {
      check_hlds__det_util__succeeded = hlds__instmap__instmap_delta_no_output_vars_5_p_0(check_hlds__det_util__ModuleInfo_9, check_hlds__det_util__VarTypes_10, check_hlds__det_util__InstMap_6, check_hlds__det_util__InstMapDelta_7, check_hlds__det_util__Vars_8);
    }
    return check_hlds__det_util__succeeded;
  }
}

MR_bool MR_CALL 
check_hlds__det_util__det_lookup_var_type_4_p_0(
  MR_Word check_hlds__det_util__ModuleInfo_5,
  MR_Word check_hlds__det_util__ProcInfo_6,
  MR_Word check_hlds__det_util__Var_7,
  MR_Word * check_hlds__det_util__TypeDefn_8)
{
  {
    MR_bool check_hlds__det_util__succeeded;
    MR_Word check_hlds__det_util__VarTypes_9;
    MR_Word check_hlds__det_util__Type_10;
    MR_Word check_hlds__det_util__TypeCtor_11;
    MR_Word check_hlds__det_util__TypeTable_12;

    {
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(check_hlds__det_util__ProcInfo_6, &check_hlds__det_util__VarTypes_9);
    }
    {
      hlds__vartypes__lookup_var_type_3_p_0(check_hlds__det_util__VarTypes_9, check_hlds__det_util__Var_7, &check_hlds__det_util__Type_10);
    }
    {
      parse_tree__prog_type__type_to_ctor_det_2_p_0(check_hlds__det_util__Type_10, &check_hlds__det_util__TypeCtor_11);
    }
    {
      hlds__hlds_module__module_info_get_type_table_2_p_0(check_hlds__det_util__ModuleInfo_5, &check_hlds__det_util__TypeTable_12);
    }
    {
      check_hlds__det_util__succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(check_hlds__det_util__TypeTable_12, check_hlds__det_util__TypeCtor_11, check_hlds__det_util__TypeDefn_8);
    }
    return check_hlds__det_util__succeeded;
  }
}

void MR_CALL 
check_hlds__det_util__det_get_proc_info_2_p_0(
  MR_Word check_hlds__det_util__DetInfo_3,
  MR_Word * check_hlds__det_util__ProcInfo_4)
{
  {
    MR_bool check_hlds__det_util__succeeded;
    MR_Word check_hlds__det_util__ModuleInfo_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_3, (MR_Integer) 0)));
    MR_Word check_hlds__det_util__PredProcId_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_3, (MR_Integer) 1)));
    MR_Word check_hlds__det_util__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_3, (MR_Integer) 2)));
    MR_Word check_hlds__det_util__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_3, (MR_Integer) 3)));
    MR_Word check_hlds__det_util__Var_12 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_3, (MR_Integer) 4)))) & (MR_Integer) 1);
    MR_Word check_hlds__det_util__Var_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_3, (MR_Integer) 4)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Word check_hlds__det_util__Var_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_3, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word check_hlds__det_util__Var_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_3, (MR_Integer) 4)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    MR_Word check_hlds__det_util__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_3, (MR_Integer) 5)));

    {
      hlds__hlds_module__module_info_proc_info_3_p_0(check_hlds__det_util__ModuleInfo_5, check_hlds__det_util__PredProcId_6, check_hlds__det_util__ProcInfo_4);
    }
  }
}

void MR_CALL 
check_hlds__det_util__det_lookup_pred_info_and_detism_5_p_0(
  MR_Word check_hlds__det_util__DetInfo_6,
  MR_Word check_hlds__det_util__PredId_7,
  MR_Integer check_hlds__det_util__ModeId_8,
  MR_Word * check_hlds__det_util__PredInfo_9,
  MR_Word * check_hlds__det_util__Detism_10)
{
  {
    MR_bool check_hlds__det_util__succeeded;
    MR_Word check_hlds__det_util__ModuleInfo_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_6, (MR_Integer) 0)));
    MR_Word check_hlds__det_util__PredTable_12;
    MR_Word check_hlds__det_util__ProcTable_13;
    MR_Word check_hlds__det_util__ProcInfo_14;
    MR_Word check_hlds__det_util__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_6, (MR_Integer) 1)));
    MR_Word check_hlds__det_util__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_6, (MR_Integer) 2)));
    MR_Word check_hlds__det_util__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_6, (MR_Integer) 3)));
    MR_Word check_hlds__det_util__Var_24 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_6, (MR_Integer) 4)))) & (MR_Integer) 1);
    MR_Word check_hlds__det_util__Var_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_6, (MR_Integer) 4)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Word check_hlds__det_util__Var_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_6, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word check_hlds__det_util__Var_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_6, (MR_Integer) 4)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    MR_Word check_hlds__det_util__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__DetInfo_6, (MR_Integer) 5)));
    MR_Box check_hlds__det_util__conv0_PredInfo_9;
    MR_Box check_hlds__det_util__conv1_ProcInfo_14;

    {
      hlds__hlds_module__module_info_get_preds_2_p_0(check_hlds__det_util__ModuleInfo_11, &check_hlds__det_util__PredTable_12);
    }
    {
      mercury__map__lookup_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0, check_hlds__det_util__PredTable_12, ((MR_Box) (check_hlds__det_util__PredId_7)), &check_hlds__det_util__conv0_PredInfo_9);
    }
    *check_hlds__det_util__PredInfo_9 = ((MR_Word) check_hlds__det_util__conv0_PredInfo_9);
    {
      hlds__hlds_pred__pred_info_get_proc_table_2_p_0(*check_hlds__det_util__PredInfo_9, &check_hlds__det_util__ProcTable_13);
    }
    {
      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0, check_hlds__det_util__ProcTable_13, check_hlds__det_util__ModeId_8, &check_hlds__det_util__conv1_ProcInfo_14);
    }
    check_hlds__det_util__ProcInfo_14 = ((MR_Word) check_hlds__det_util__conv1_ProcInfo_14);
    {
      hlds__hlds_pred__proc_info_interface_determinism_2_p_0(check_hlds__det_util__ProcInfo_14, check_hlds__det_util__Detism_10);
    }
  }
}

MR_bool MR_CALL 
check_hlds__det_util__interpret_unify_4_p_0(
  MR_Word check_hlds__det_util__HeadVar__1_1,
  MR_Word check_hlds__det_util__HeadVar__2_2,
  MR_Word check_hlds__det_util__STATE_VARIABLE_Subst_0_3,
  MR_Word * check_hlds__det_util__STATE_VARIABLE_Subst_4)
{
  {
    MR_bool check_hlds__det_util__succeeded;

    switch (MR_tag((MR_Word) check_hlds__det_util__HeadVar__2_2)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word check_hlds__det_util__Y_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__HeadVar__2_2, (MR_Integer) 0)));
          MR_Word check_hlds__det_util__Var_10;
          MR_Word check_hlds__det_util__Var_11;
          MR_Word check_hlds__det_util__Var_13;
          MR_Word check_hlds__det_util__Var_14;

          {
            check_hlds__det_util__Var_13 = mercury__term__context_init_0_f_0();
          }
          {
            check_hlds__det_util__Var_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), check_hlds__det_util__Var_10, 0) = ((MR_Box) (check_hlds__det_util__HeadVar__1_1));
            MR_hl_field(MR_mktag(1), check_hlds__det_util__Var_10, 1) = ((MR_Box) (check_hlds__det_util__Var_13));
          }
          {
            check_hlds__det_util__Var_14 = mercury__term__context_init_0_f_0();
          }
          {
            check_hlds__det_util__Var_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), check_hlds__det_util__Var_11, 0) = ((MR_Box) (check_hlds__det_util__Y_6));
            MR_hl_field(MR_mktag(1), check_hlds__det_util__Var_11, 1) = ((MR_Box) (check_hlds__det_util__Var_14));
          }
          {
            check_hlds__det_util__succeeded = mercury__term__unify_term_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__det_util__Var_10, check_hlds__det_util__Var_11, check_hlds__det_util__STATE_VARIABLE_Subst_0_3, check_hlds__det_util__STATE_VARIABLE_Subst_4);
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word check_hlds__det_util__TypeCtorInfo_41_41 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
          MR_Word check_hlds__det_util__ConsId_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_util__HeadVar__2_2, (MR_Integer) 0)));
          MR_Word check_hlds__det_util__ArgVars_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_util__HeadVar__2_2, (MR_Integer) 2)));
          MR_Word check_hlds__det_util__ArgTerms_20;
          MR_Word check_hlds__det_util__RhsTerm_21;
          MR_Word check_hlds__det_util__Var_24;
          MR_Word check_hlds__det_util__Var_26;
          MR_Word check_hlds__det_util__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_util__HeadVar__2_2, (MR_Integer) 1)));

          {
            mercury__term__var_list_to_term_list_2_p_0(check_hlds__det_util__TypeCtorInfo_41_41, check_hlds__det_util__ArgVars_18, &check_hlds__det_util__ArgTerms_20);
          }
          {
            check_hlds__det_util__succeeded = parse_tree__prog_util__cons_id_and_args_to_term_3_p_0(check_hlds__det_util__TypeCtorInfo_41_41, check_hlds__det_util__ConsId_16, check_hlds__det_util__ArgTerms_20, &check_hlds__det_util__RhsTerm_21);
          }
          if (check_hlds__det_util__succeeded)
            {
              {
                check_hlds__det_util__Var_26 = mercury__term__context_init_0_f_0();
              }
              {
                check_hlds__det_util__Var_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), check_hlds__det_util__Var_24, 0) = ((MR_Box) (check_hlds__det_util__HeadVar__1_1));
                MR_hl_field(MR_mktag(1), check_hlds__det_util__Var_24, 1) = ((MR_Box) (check_hlds__det_util__Var_26));
              }
              {
                check_hlds__det_util__succeeded = mercury__term__unify_term_4_p_0(check_hlds__det_util__TypeCtorInfo_41_41, check_hlds__det_util__Var_24, check_hlds__det_util__RhsTerm_21, check_hlds__det_util__STATE_VARIABLE_Subst_0_3, check_hlds__det_util__STATE_VARIABLE_Subst_4);
              }
            }
        }
        break;
      case (MR_Integer) 2:
        {
          *check_hlds__det_util__STATE_VARIABLE_Subst_4 = check_hlds__det_util__STATE_VARIABLE_Subst_0_3;
          check_hlds__det_util__succeeded = MR_TRUE;
        }
        break;
    }
    return check_hlds__det_util__succeeded;
  }
}

void MR_CALL 
check_hlds__det_util__delete_unreachable_cases_4_p_0(
  MR_Word check_hlds__det_util__Cases0_5,
  MR_Word check_hlds__det_util__PossibleConsIds_6,
  MR_Word * check_hlds__det_util__ReachableCases_7,
  MR_Word * check_hlds__det_util__UnreachableGoals_8)
{
  {
    MR_bool check_hlds__det_util__succeeded;
    MR_Word check_hlds__det_util__PossibleConsIdSet_9;
    MR_Word check_hlds__det_util__RevReachableCases_10;
    MR_Word check_hlds__det_util__RevUnreachableGoals_11;

    {
      check_hlds__det_util__PossibleConsIdSet_9 = mercury__set_tree234__list_to_set_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, check_hlds__det_util__PossibleConsIds_6);
    }
    {
      check_hlds__det_util__delete_unreachable_cases_acc_6_p_0(check_hlds__det_util__Cases0_5, check_hlds__det_util__PossibleConsIdSet_9, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__det_util__RevReachableCases_10, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__det_util__RevUnreachableGoals_11);
    }
    {
      mercury__list__reverse_2_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0, check_hlds__det_util__RevReachableCases_10, check_hlds__det_util__ReachableCases_7);
    }
    {
      mercury__list__reverse_2_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, check_hlds__det_util__RevUnreachableGoals_11, check_hlds__det_util__UnreachableGoals_8);
    }
  }
}

static MR_bool MR_CALL 
check_hlds__det_util__delete_unreachable_cases_acc_6_p_0_2(
  MR_Box check_hlds__det_util__closure_arg,
  MR_Box check_hlds__det_util__wrapper_arg_1)
{
  {
    MR_bool check_hlds__det_util__succeeded;
    MR_Box check_hlds__det_util__closure = check_hlds__det_util__closure_arg;

    {
      check_hlds__det_util__succeeded = check_hlds__det_util__IntroducedFrom__pred__delete_unreachable_cases_acc__181__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__det_util__wrapper_arg_1));
    }
    return check_hlds__det_util__succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__det_util__delete_unreachable_cases_acc_6_p_0_1(
  MR_Box check_hlds__det_util__closure_arg,
  MR_Box check_hlds__det_util__wrapper_arg_1)
{
  {
    MR_bool check_hlds__det_util__succeeded;
    MR_Box check_hlds__det_util__closure = check_hlds__det_util__closure_arg;

    {
      check_hlds__det_util__succeeded = check_hlds__det_util__IntroducedFrom__pred__delete_unreachable_cases_acc__176__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__det_util__wrapper_arg_1));
    }
    return check_hlds__det_util__succeeded;
  }
}

static void MR_CALL 
check_hlds__det_util__delete_unreachable_cases_acc_6_p_0(
  MR_Word check_hlds__det_util__HeadVar__1_1,
  MR_Word check_hlds__det_util__HeadVar__2_2,
  MR_Word check_hlds__det_util__STATE_VARIABLE_RevReachableCases_0_3,
  MR_Word * check_hlds__det_util__STATE_VARIABLE_RevReachableCases_4,
  MR_Word check_hlds__det_util__STATE_VARIABLE_RevUnreachableGoals_0_5,
  MR_Word * check_hlds__det_util__STATE_VARIABLE_RevUnreachableGoals_6)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool check_hlds__det_util__succeeded;

        if ((check_hlds__det_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *check_hlds__det_util__STATE_VARIABLE_RevUnreachableGoals_6 = check_hlds__det_util__STATE_VARIABLE_RevUnreachableGoals_0_5;
            *check_hlds__det_util__STATE_VARIABLE_RevReachableCases_4 = check_hlds__det_util__STATE_VARIABLE_RevReachableCases_0_3;
          }
        else
          {
            MR_Word check_hlds__det_util__Case0_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_util__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word check_hlds__det_util__Cases0_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_util__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word check_hlds__det_util__MainConsId0_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__Case0_14, (MR_Integer) 0)));
            MR_Word check_hlds__det_util__OtherConsIds0_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__Case0_14, (MR_Integer) 1)));
            MR_Word check_hlds__det_util__Goal_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__det_util__Case0_14, (MR_Integer) 2)));
            MR_Word check_hlds__det_util__STATE_VARIABLE_RevReachableCases_31_31;
            MR_Word check_hlds__det_util__STATE_VARIABLE_RevUnreachableGoals_34_34;

            {
              check_hlds__det_util__succeeded = mercury__set_tree234__contains_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, check_hlds__det_util__HeadVar__2_2, ((MR_Box) (check_hlds__det_util__MainConsId0_19)));
            }
            if (check_hlds__det_util__succeeded)
              {
                MR_Word check_hlds__det_util__OtherConsIds_22;
                MR_Word check_hlds__det_util__Case_23;
                MR_Word check_hlds__det_util__Var_30;

                {
                  check_hlds__det_util__Var_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), check_hlds__det_util__Var_30, 0) = ((MR_Box) (&check_hlds__det_util_scalar_common_3[0]));
                  MR_hl_field(MR_mktag(0), check_hlds__det_util__Var_30, 1) = ((MR_Box) (check_hlds__det_util__delete_unreachable_cases_acc_6_p_0_1));
                  MR_hl_field(MR_mktag(0), check_hlds__det_util__Var_30, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(0), check_hlds__det_util__Var_30, 3) = ((MR_Box) (check_hlds__det_util__HeadVar__2_2));
                }
                {
                  mercury__list__filter_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, check_hlds__det_util__Var_30, check_hlds__det_util__OtherConsIds0_20, &check_hlds__det_util__OtherConsIds_22);
                }
                {
                  check_hlds__det_util__Case_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), check_hlds__det_util__Case_23, 0) = ((MR_Box) (check_hlds__det_util__MainConsId0_19));
                  MR_hl_field(MR_mktag(0), check_hlds__det_util__Case_23, 1) = ((MR_Box) (check_hlds__det_util__OtherConsIds_22));
                  MR_hl_field(MR_mktag(0), check_hlds__det_util__Case_23, 2) = ((MR_Box) (check_hlds__det_util__Goal_21));
                }
                {
                  check_hlds__det_util__STATE_VARIABLE_RevReachableCases_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), check_hlds__det_util__STATE_VARIABLE_RevReachableCases_31_31, 0) = ((MR_Box) (check_hlds__det_util__Case_23));
                  MR_hl_field(MR_mktag(1), check_hlds__det_util__STATE_VARIABLE_RevReachableCases_31_31, 1) = ((MR_Box) (check_hlds__det_util__STATE_VARIABLE_RevReachableCases_0_3));
                }
                check_hlds__det_util__STATE_VARIABLE_RevUnreachableGoals_34_34 = check_hlds__det_util__STATE_VARIABLE_RevUnreachableGoals_0_5;
              }
            else
              {
                MR_Word check_hlds__det_util__OtherConsIds1_24;
                MR_Word check_hlds__det_util__Var_32;

                {
                  check_hlds__det_util__Var_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), check_hlds__det_util__Var_32, 0) = ((MR_Box) (&check_hlds__det_util_scalar_common_3[0]));
                  MR_hl_field(MR_mktag(0), check_hlds__det_util__Var_32, 1) = ((MR_Box) (check_hlds__det_util__delete_unreachable_cases_acc_6_p_0_2));
                  MR_hl_field(MR_mktag(0), check_hlds__det_util__Var_32, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(0), check_hlds__det_util__Var_32, 3) = ((MR_Box) (check_hlds__det_util__HeadVar__2_2));
                }
                {
                  mercury__list__filter_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, check_hlds__det_util__Var_32, check_hlds__det_util__OtherConsIds0_20, &check_hlds__det_util__OtherConsIds1_24);
                }
                if ((check_hlds__det_util__OtherConsIds1_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                  {
                    {
                      check_hlds__det_util__STATE_VARIABLE_RevUnreachableGoals_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), check_hlds__det_util__STATE_VARIABLE_RevUnreachableGoals_34_34, 0) = ((MR_Box) (check_hlds__det_util__Goal_21));
                      MR_hl_field(MR_mktag(1), check_hlds__det_util__STATE_VARIABLE_RevUnreachableGoals_34_34, 1) = ((MR_Box) (check_hlds__det_util__STATE_VARIABLE_RevUnreachableGoals_0_5));
                    }
                    check_hlds__det_util__STATE_VARIABLE_RevReachableCases_31_31 = check_hlds__det_util__STATE_VARIABLE_RevReachableCases_0_3;
                  }
                else
                  {
                    MR_Word check_hlds__det_util__MainConsId_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_util__OtherConsIds1_24, (MR_Integer) 0)));
                    MR_Word check_hlds__det_util__OtherConsIds_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__det_util__OtherConsIds1_24, (MR_Integer) 1)));
                    MR_Word check_hlds__det_util__Case_38;

                    {
                      check_hlds__det_util__Case_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), check_hlds__det_util__Case_38, 0) = ((MR_Box) (check_hlds__det_util__MainConsId_25));
                      MR_hl_field(MR_mktag(0), check_hlds__det_util__Case_38, 1) = ((MR_Box) (check_hlds__det_util__OtherConsIds_37));
                      MR_hl_field(MR_mktag(0), check_hlds__det_util__Case_38, 2) = ((MR_Box) (check_hlds__det_util__Goal_21));
                    }
                    {
                      check_hlds__det_util__STATE_VARIABLE_RevReachableCases_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), check_hlds__det_util__STATE_VARIABLE_RevReachableCases_31_31, 0) = ((MR_Box) (check_hlds__det_util__Case_38));
                      MR_hl_field(MR_mktag(1), check_hlds__det_util__STATE_VARIABLE_RevReachableCases_31_31, 1) = ((MR_Box) (check_hlds__det_util__STATE_VARIABLE_RevReachableCases_0_3));
                    }
                    check_hlds__det_util__STATE_VARIABLE_RevUnreachableGoals_34_34 = check_hlds__det_util__STATE_VARIABLE_RevUnreachableGoals_0_5;
                  }
              }
            /* direct tailcall eliminated */
            {
              MR_Word check_hlds__det_util__next_value_of_HeadVar__1_1 = check_hlds__det_util__Cases0_15;
              MR_Word check_hlds__det_util__next_value_of_STATE_VARIABLE_RevReachableCases_0_3 = check_hlds__det_util__STATE_VARIABLE_RevReachableCases_31_31;
              MR_Word check_hlds__det_util__next_value_of_STATE_VARIABLE_RevUnreachableGoals_0_5 = check_hlds__det_util__STATE_VARIABLE_RevUnreachableGoals_34_34;

              check_hlds__det_util__STATE_VARIABLE_RevUnreachableGoals_0_5 = check_hlds__det_util__next_value_of_STATE_VARIABLE_RevUnreachableGoals_0_5;
              check_hlds__det_util__STATE_VARIABLE_RevReachableCases_0_3 = check_hlds__det_util__next_value_of_STATE_VARIABLE_RevReachableCases_0_3;
              check_hlds__det_util__HeadVar__1_1 = check_hlds__det_util__next_value_of_HeadVar__1_1;
            }
            continue;
          }
      }
      break;
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

/* :- end_module check_hlds.det_util. */
