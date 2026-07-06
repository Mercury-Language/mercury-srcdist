/*
** Automatically generated from `switch_candidates.m'
** by the Mercury compiler,
** version rotd-2026-07-06
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


// :- module check_hlds.switch_candidates.
// :- implementation.

/*
INIT mercury__check_hlds__switch_candidates__init
ENDINIT
*/

#include "check_hlds.switch_candidates.mih"


#include "analysis.mih"
#include "array.mih"
#include "assoc_list.mih"
#include "bimap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "check_hlds.mih"
#include "cord.mih"
#include "digraph.mih"
#include "enum.mih"
#include "hlds.mih"
#include "int.mih"
#include "integer.mih"
#include "libs.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "multi_map.mih"
#include "one_or_more.mih"
#include "one_or_more_map.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "queue.mih"
#include "recompilation.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "set_tree234.mih"
#include "sparse_bitset.mih"
#include "term.mih"
#include "term_context.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "analysis.framework.mih"
#include "analysis.operations.mih"
#include "check_hlds.det_util.mih"
#include "check_hlds.proc_requests.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_mode.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_cons.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_inst_mode.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_markers.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_promise.mih"
#include "hlds.inst_test.mih"
#include "hlds.instmap.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "hlds.type_util.mih"
#include "libs.dependency_graph.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.maybe_util.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.d_file_deps.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_mode.mih"
#include "parse_tree.prog_parse_tree.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_table.mih"
#include "recompilation.record_uses.mih"
#include "parse_tree.module_qual.mq_info.mih"




static const MR_FA_TypeInfo_Struct1 check_hlds__switch_candidates__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__switch_candidates__list__ti_list_1hlds__hlds_goal__type_ctor_info_case_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__switch_candidates__list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0;

static const MR_PseudoTypeInfo check_hlds__switch_candidates__check_hlds__switch_candidates__field_types_candidate_switch_0_0[7];

static const MR_ConstString check_hlds__switch_candidates__check_hlds__switch_candidates__field_names_candidate_switch_0_0[7];

static const MR_DuArgLocn check_hlds__switch_candidates__check_hlds__switch_candidates__field_locns_candidate_switch_0_0[7];

static const MR_DuFunctorDesc check_hlds__switch_candidates__check_hlds__switch_candidates__du_functor_desc_candidate_switch_0_0;

static const MR_DuFunctorDescPtr check_hlds__switch_candidates__check_hlds__switch_candidates__du_stag_ordered_candidate_switch_0_0[1];

static const MR_DuPtagLayout check_hlds__switch_candidates__check_hlds__switch_candidates__du_ptag_ordered_candidate_switch_0[1];

static const MR_DuFunctorDescPtr check_hlds__switch_candidates__check_hlds__switch_candidates__du_name_ordered_candidate_switch_0[1];

static const MR_Integer check_hlds__switch_candidates__check_hlds__switch_candidates__functor_number_map_candidate_switch_0[1];

static const MR_PseudoTypeInfo check_hlds__switch_candidates__check_hlds__switch_candidates__field_types_candidate_switch_rank_0_0[1];

static const MR_DuFunctorDesc check_hlds__switch_candidates__check_hlds__switch_candidates__du_functor_desc_candidate_switch_rank_0_0;

static const MR_PseudoTypeInfo check_hlds__switch_candidates__check_hlds__switch_candidates__field_types_candidate_switch_rank_0_1[1];

static const MR_DuFunctorDesc check_hlds__switch_candidates__check_hlds__switch_candidates__du_functor_desc_candidate_switch_rank_0_1;

static const MR_DuFunctorDesc check_hlds__switch_candidates__check_hlds__switch_candidates__du_functor_desc_candidate_switch_rank_0_2;

static const MR_DuFunctorDesc check_hlds__switch_candidates__check_hlds__switch_candidates__du_functor_desc_candidate_switch_rank_0_3;

static const MR_DuFunctorDesc check_hlds__switch_candidates__check_hlds__switch_candidates__du_functor_desc_candidate_switch_rank_0_4;

static const MR_DuFunctorDesc check_hlds__switch_candidates__check_hlds__switch_candidates__du_functor_desc_candidate_switch_rank_0_5;

static const MR_DuFunctorDesc check_hlds__switch_candidates__check_hlds__switch_candidates__du_functor_desc_candidate_switch_rank_0_6;

static const MR_DuFunctorDesc check_hlds__switch_candidates__check_hlds__switch_candidates__du_functor_desc_candidate_switch_rank_0_7;

static const MR_DuFunctorDescPtr check_hlds__switch_candidates__check_hlds__switch_candidates__du_stag_ordered_candidate_switch_rank_0_0[6];

static const MR_DuFunctorDescPtr check_hlds__switch_candidates__check_hlds__switch_candidates__du_stag_ordered_candidate_switch_rank_0_1[1];

static const MR_DuFunctorDescPtr check_hlds__switch_candidates__check_hlds__switch_candidates__du_stag_ordered_candidate_switch_rank_0_2[1];

static const MR_DuPtagLayout check_hlds__switch_candidates__check_hlds__switch_candidates__du_ptag_ordered_candidate_switch_rank_0[3];

static const MR_DuFunctorDescPtr check_hlds__switch_candidates__check_hlds__switch_candidates__du_name_ordered_candidate_switch_rank_0[8];

static const MR_Integer check_hlds__switch_candidates__check_hlds__switch_candidates__functor_number_map_candidate_switch_rank_0[8];

static const MR_EnumFunctorDesc check_hlds__switch_candidates__check_hlds__switch_candidates__enum_functor_desc_cases_missing_0_0;

static const MR_EnumFunctorDesc check_hlds__switch_candidates__check_hlds__switch_candidates__enum_functor_desc_cases_missing_0_1;

static const MR_EnumFunctorDesc check_hlds__switch_candidates__check_hlds__switch_candidates__enum_functor_desc_cases_missing_0_2;

static const MR_EnumFunctorDescPtr check_hlds__switch_candidates__check_hlds__switch_candidates__enum_ordinal_ordered_cases_missing_0[3];

static const MR_EnumFunctorDescPtr check_hlds__switch_candidates__check_hlds__switch_candidates__enum_name_ordered_cases_missing_0[3];

static const MR_Integer check_hlds__switch_candidates__check_hlds__switch_candidates__functor_number_map_cases_missing_0[3];

static const MR_DuFunctorDesc check_hlds__switch_candidates__check_hlds__switch_candidates__du_functor_desc_maybe_candidate_switch_0_0;

static const MR_PseudoTypeInfo check_hlds__switch_candidates__check_hlds__switch_candidates__field_types_maybe_candidate_switch_0_1[1];

static const MR_DuFunctorDesc check_hlds__switch_candidates__check_hlds__switch_candidates__du_functor_desc_maybe_candidate_switch_0_1;

static const MR_DuFunctorDescPtr check_hlds__switch_candidates__check_hlds__switch_candidates__du_stag_ordered_maybe_candidate_switch_0_0[1];

static const MR_DuFunctorDescPtr check_hlds__switch_candidates__check_hlds__switch_candidates__du_stag_ordered_maybe_candidate_switch_0_1[1];

static const MR_DuPtagLayout check_hlds__switch_candidates__check_hlds__switch_candidates__du_ptag_ordered_maybe_candidate_switch_0[2];

static const MR_DuFunctorDescPtr check_hlds__switch_candidates__check_hlds__switch_candidates__du_name_ordered_maybe_candidate_switch_0[2];

static const MR_Integer check_hlds__switch_candidates__check_hlds__switch_candidates__functor_number_map_maybe_candidate_switch_0[2];

static const MR_DuFunctorDesc check_hlds__switch_candidates__check_hlds__switch_candidates__du_functor_desc_maybe_required_switch_var_0_0;

static const MR_PseudoTypeInfo check_hlds__switch_candidates__check_hlds__switch_candidates__field_types_maybe_required_switch_var_0_1[1];

static const MR_DuFunctorDesc check_hlds__switch_candidates__check_hlds__switch_candidates__du_functor_desc_maybe_required_switch_var_0_1;

static const MR_DuFunctorDescPtr check_hlds__switch_candidates__check_hlds__switch_candidates__du_stag_ordered_maybe_required_switch_var_0_0[1];

static const MR_DuFunctorDescPtr check_hlds__switch_candidates__check_hlds__switch_candidates__du_stag_ordered_maybe_required_switch_var_0_1[1];

static const MR_DuPtagLayout check_hlds__switch_candidates__check_hlds__switch_candidates__du_ptag_ordered_maybe_required_switch_var_0[2];

static const MR_DuFunctorDescPtr check_hlds__switch_candidates__check_hlds__switch_candidates__du_name_ordered_maybe_required_switch_var_0[2];

static const MR_Integer check_hlds__switch_candidates__check_hlds__switch_candidates__functor_number_map_maybe_required_switch_var_0[2];

static void MR_CALL 
check_hlds__switch_candidates____Compare____cases_missing_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__switch_candidates____Unify____cases_missing_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__switch_candidates__count_covered_cons_ids_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer STATE_VARIABLE_NumCoveredConsIds_0_2,
  MR_Integer * STATE_VARIABLE_NumCoveredConsIds_3);

static void MR_CALL 
check_hlds__switch_candidates__acc_covered_functors_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_CoveredConsIds_0_2,
  MR_Word * STATE_VARIABLE_CoveredConsIds_3);

static MR_bool MR_CALL 
check_hlds__switch_candidates____Unify____candidate_switch_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__switch_candidates____Compare____candidate_switch_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__switch_candidates____Unify____candidate_switch_rank_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__switch_candidates____Compare____candidate_switch_rank_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__switch_candidates____Unify____cases_missing_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__switch_candidates____Compare____cases_missing_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__switch_candidates____Unify____maybe_candidate_switch_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__switch_candidates____Compare____maybe_candidate_switch_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__switch_candidates____Unify____maybe_required_switch_var_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__switch_candidates____Compare____maybe_required_switch_var_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box check_hlds__switch_candidates_scalar_common_1[3][2];




static /* final */ const MR_Box check_hlds__switch_candidates_scalar_common_1[3][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0))
  },
};



#include "array.mh"


static const MR_FA_TypeInfo_Struct1 check_hlds__switch_candidates__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__switch_candidates__list__ti_list_1hlds__hlds_goal__type_ctor_info_case_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0) }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__switch_candidates__list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0) }
};

static const MR_PseudoTypeInfo check_hlds__switch_candidates__check_hlds__switch_candidates__field_types_candidate_switch_0_0[7] = {
  (MR_PseudoTypeInfo) (&check_hlds__switch_candidates__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&check_hlds__switch_candidates__list__ti_list_1hlds__hlds_goal__type_ctor_info_case_0),
  (MR_PseudoTypeInfo) (&check_hlds__switch_candidates__list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0),
  (MR_PseudoTypeInfo) (&check_hlds__switch_candidates__list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0),
  (MR_PseudoTypeInfo) (&check_hlds__switch_candidates__check_hlds__switch_candidates__type_ctor_info_candidate_switch_rank_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_can_fail_0),
  (MR_PseudoTypeInfo) (&libs__maybe_util__libs__maybe_util__type_ctor_info_need_to_requantify_0)
};

static const MR_ConstString check_hlds__switch_candidates__check_hlds__switch_candidates__field_names_candidate_switch_0_0[7] = {
  (MR_String) "cs_var",
  (MR_String) "cs_cases",
  (MR_String) "cs_unreachable_case_goals",
  (MR_String) "cs_left_over_disjuncts",
  (MR_String) "cs_rank",
  (MR_String) "cs_can_fail",
  (MR_String) "cs_requant"
};

static const MR_DuArgLocn check_hlds__switch_candidates__check_hlds__switch_candidates__field_locns_candidate_switch_0_0[7] = {
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
    (MR_Integer) 0
  },
  {
    (MR_Integer) 5,
    (MR_Integer) 1,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 5,
    (MR_Integer) 0,
    (MR_Integer) 1
  }
};

static const MR_DuFunctorDesc check_hlds__switch_candidates__check_hlds__switch_candidates__du_functor_desc_candidate_switch_0_0 = {
  (MR_String) "candidate_switch",
  INT16_C(7),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  check_hlds__switch_candidates__check_hlds__switch_candidates__field_types_candidate_switch_0_0,
  check_hlds__switch_candidates__check_hlds__switch_candidates__field_names_candidate_switch_0_0,
  check_hlds__switch_candidates__check_hlds__switch_candidates__field_locns_candidate_switch_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__switch_candidates__check_hlds__switch_candidates__du_stag_ordered_candidate_switch_0_0[1] = { &check_hlds__switch_candidates__check_hlds__switch_candidates__du_functor_desc_candidate_switch_0_0 };

static const MR_DuPtagLayout check_hlds__switch_candidates__check_hlds__switch_candidates__du_ptag_ordered_candidate_switch_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__switch_candidates__check_hlds__switch_candidates__du_stag_ordered_candidate_switch_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__switch_candidates__check_hlds__switch_candidates__du_name_ordered_candidate_switch_0[1] = { &check_hlds__switch_candidates__check_hlds__switch_candidates__du_functor_desc_candidate_switch_0_0 };

static const MR_Integer check_hlds__switch_candidates__check_hlds__switch_candidates__functor_number_map_candidate_switch_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct check_hlds__switch_candidates__check_hlds__switch_candidates__type_ctor_info_candidate_switch_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__switch_candidates____Unify____candidate_switch_0_0_10001)),
  ((MR_Box) (check_hlds__switch_candidates____Compare____candidate_switch_0_0_10001)),
  (MR_String) "check_hlds.switch_candidates",
  (MR_String) "candidate_switch",
  { check_hlds__switch_candidates__check_hlds__switch_candidates__du_name_ordered_candidate_switch_0 },
  { check_hlds__switch_candidates__check_hlds__switch_candidates__du_ptag_ordered_candidate_switch_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  check_hlds__switch_candidates__check_hlds__switch_candidates__functor_number_map_candidate_switch_0,

};

static const MR_PseudoTypeInfo check_hlds__switch_candidates__check_hlds__switch_candidates__field_types_candidate_switch_rank_0_0[1] = { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0) };

static const MR_DuFunctorDesc check_hlds__switch_candidates__check_hlds__switch_candidates__du_functor_desc_candidate_switch_rank_0_0 = {
  (MR_String) "some_leftover_can_fail",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(0),
  check_hlds__switch_candidates__check_hlds__switch_candidates__field_types_candidate_switch_rank_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo check_hlds__switch_candidates__check_hlds__switch_candidates__field_types_candidate_switch_rank_0_1[1] = { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0) };

static const MR_DuFunctorDesc check_hlds__switch_candidates__check_hlds__switch_candidates__du_functor_desc_candidate_switch_rank_0_1 = {
  (MR_String) "some_leftover_cannot_fail",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(2),
  (MR_Integer) -1,
  INT32_C(1),
  check_hlds__switch_candidates__check_hlds__switch_candidates__field_types_candidate_switch_rank_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc check_hlds__switch_candidates__check_hlds__switch_candidates__du_functor_desc_candidate_switch_rank_0_2 = {
  (MR_String) "no_leftover_twoplus_cases_finite_can_fail",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 0,
  INT32_C(2),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc check_hlds__switch_candidates__check_hlds__switch_candidates__du_functor_desc_candidate_switch_rank_0_3 = {
  (MR_String) "no_leftover_one_case",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 1,
  INT32_C(3),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc check_hlds__switch_candidates__check_hlds__switch_candidates__du_functor_desc_candidate_switch_rank_0_4 = {
  (MR_String) "no_leftover_twoplus_cases_infinite_can_fail",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 2,
  INT32_C(4),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc check_hlds__switch_candidates__check_hlds__switch_candidates__du_functor_desc_candidate_switch_rank_0_5 = {
  (MR_String) "no_leftover_twoplus_cases_finite_cannot_fail",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 3,
  INT32_C(5),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc check_hlds__switch_candidates__check_hlds__switch_candidates__du_functor_desc_candidate_switch_rank_0_6 = {
  (MR_String) "all_disjuncts_are_unreachable",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 4,
  INT32_C(6),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc check_hlds__switch_candidates__check_hlds__switch_candidates__du_functor_desc_candidate_switch_rank_0_7 = {
  (MR_String) "no_leftover_twoplus_cases_explicitly_selected",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 5,
  INT32_C(7),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__switch_candidates__check_hlds__switch_candidates__du_stag_ordered_candidate_switch_rank_0_0[6] = {
  &check_hlds__switch_candidates__check_hlds__switch_candidates__du_functor_desc_candidate_switch_rank_0_2,
  &check_hlds__switch_candidates__check_hlds__switch_candidates__du_functor_desc_candidate_switch_rank_0_3,
  &check_hlds__switch_candidates__check_hlds__switch_candidates__du_functor_desc_candidate_switch_rank_0_4,
  &check_hlds__switch_candidates__check_hlds__switch_candidates__du_functor_desc_candidate_switch_rank_0_5,
  &check_hlds__switch_candidates__check_hlds__switch_candidates__du_functor_desc_candidate_switch_rank_0_6,
  &check_hlds__switch_candidates__check_hlds__switch_candidates__du_functor_desc_candidate_switch_rank_0_7
};

static const MR_DuFunctorDescPtr check_hlds__switch_candidates__check_hlds__switch_candidates__du_stag_ordered_candidate_switch_rank_0_1[1] = { &check_hlds__switch_candidates__check_hlds__switch_candidates__du_functor_desc_candidate_switch_rank_0_0 };

static const MR_DuFunctorDescPtr check_hlds__switch_candidates__check_hlds__switch_candidates__du_stag_ordered_candidate_switch_rank_0_2[1] = { &check_hlds__switch_candidates__check_hlds__switch_candidates__du_functor_desc_candidate_switch_rank_0_1 };

static const MR_DuPtagLayout check_hlds__switch_candidates__check_hlds__switch_candidates__du_ptag_ordered_candidate_switch_rank_0[3] = {
  {
    UINT32_C(6),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    check_hlds__switch_candidates__check_hlds__switch_candidates__du_stag_ordered_candidate_switch_rank_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__switch_candidates__check_hlds__switch_candidates__du_stag_ordered_candidate_switch_rank_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__switch_candidates__check_hlds__switch_candidates__du_stag_ordered_candidate_switch_rank_0_2,
    INT8_C(-1),
    UINT8_C(2),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__switch_candidates__check_hlds__switch_candidates__du_name_ordered_candidate_switch_rank_0[8] = {
  &check_hlds__switch_candidates__check_hlds__switch_candidates__du_functor_desc_candidate_switch_rank_0_6,
  &check_hlds__switch_candidates__check_hlds__switch_candidates__du_functor_desc_candidate_switch_rank_0_3,
  &check_hlds__switch_candidates__check_hlds__switch_candidates__du_functor_desc_candidate_switch_rank_0_7,
  &check_hlds__switch_candidates__check_hlds__switch_candidates__du_functor_desc_candidate_switch_rank_0_2,
  &check_hlds__switch_candidates__check_hlds__switch_candidates__du_functor_desc_candidate_switch_rank_0_5,
  &check_hlds__switch_candidates__check_hlds__switch_candidates__du_functor_desc_candidate_switch_rank_0_4,
  &check_hlds__switch_candidates__check_hlds__switch_candidates__du_functor_desc_candidate_switch_rank_0_0,
  &check_hlds__switch_candidates__check_hlds__switch_candidates__du_functor_desc_candidate_switch_rank_0_1
};

static const MR_Integer check_hlds__switch_candidates__check_hlds__switch_candidates__functor_number_map_candidate_switch_rank_0[8] = {
  (MR_Integer) 6,
  (MR_Integer) 7,
  (MR_Integer) 3,
  (MR_Integer) 1,
  (MR_Integer) 5,
  (MR_Integer) 4,
  (MR_Integer) 0,
  (MR_Integer) 2
};

const MR_TypeCtorInfo_Struct check_hlds__switch_candidates__check_hlds__switch_candidates__type_ctor_info_candidate_switch_rank_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(3),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__switch_candidates____Unify____candidate_switch_rank_0_0_10001)),
  ((MR_Box) (check_hlds__switch_candidates____Compare____candidate_switch_rank_0_0_10001)),
  (MR_String) "check_hlds.switch_candidates",
  (MR_String) "candidate_switch_rank",
  { check_hlds__switch_candidates__check_hlds__switch_candidates__du_name_ordered_candidate_switch_rank_0 },
  { check_hlds__switch_candidates__check_hlds__switch_candidates__du_ptag_ordered_candidate_switch_rank_0 },
  (MR_Integer) 8,
  UINT16_C(12),
  check_hlds__switch_candidates__check_hlds__switch_candidates__functor_number_map_candidate_switch_rank_0,

};

static const MR_EnumFunctorDesc check_hlds__switch_candidates__check_hlds__switch_candidates__enum_functor_desc_cases_missing_0_0 = {
  (MR_String) "no_cases_missing",
  INT32_C(0)
};

static const MR_EnumFunctorDesc check_hlds__switch_candidates__check_hlds__switch_candidates__enum_functor_desc_cases_missing_0_1 = {
  (MR_String) "some_cases_missing",
  INT32_C(1)
};

static const MR_EnumFunctorDesc check_hlds__switch_candidates__check_hlds__switch_candidates__enum_functor_desc_cases_missing_0_2 = {
  (MR_String) "unbounded_cases",
  INT32_C(2)
};

static const MR_EnumFunctorDescPtr check_hlds__switch_candidates__check_hlds__switch_candidates__enum_ordinal_ordered_cases_missing_0[3] = {
  &check_hlds__switch_candidates__check_hlds__switch_candidates__enum_functor_desc_cases_missing_0_0,
  &check_hlds__switch_candidates__check_hlds__switch_candidates__enum_functor_desc_cases_missing_0_1,
  &check_hlds__switch_candidates__check_hlds__switch_candidates__enum_functor_desc_cases_missing_0_2
};

static const MR_EnumFunctorDescPtr check_hlds__switch_candidates__check_hlds__switch_candidates__enum_name_ordered_cases_missing_0[3] = {
  &check_hlds__switch_candidates__check_hlds__switch_candidates__enum_functor_desc_cases_missing_0_0,
  &check_hlds__switch_candidates__check_hlds__switch_candidates__enum_functor_desc_cases_missing_0_1,
  &check_hlds__switch_candidates__check_hlds__switch_candidates__enum_functor_desc_cases_missing_0_2
};

static const MR_Integer check_hlds__switch_candidates__check_hlds__switch_candidates__functor_number_map_cases_missing_0[3] = {
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 2
};

const MR_TypeCtorInfo_Struct check_hlds__switch_candidates__check_hlds__switch_candidates__type_ctor_info_cases_missing_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__switch_candidates____Unify____cases_missing_0_0_10001)),
  ((MR_Box) (check_hlds__switch_candidates____Compare____cases_missing_0_0_10001)),
  (MR_String) "check_hlds.switch_candidates",
  (MR_String) "cases_missing",
  { check_hlds__switch_candidates__check_hlds__switch_candidates__enum_name_ordered_cases_missing_0 },
  { check_hlds__switch_candidates__check_hlds__switch_candidates__enum_ordinal_ordered_cases_missing_0 },
  (MR_Integer) 3,
  UINT16_C(12),
  check_hlds__switch_candidates__check_hlds__switch_candidates__functor_number_map_cases_missing_0,

};

static const MR_DuFunctorDesc check_hlds__switch_candidates__check_hlds__switch_candidates__du_functor_desc_maybe_candidate_switch_0_0 = {
  (MR_String) "no_candidate_switch",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 0,
  INT32_C(0),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo check_hlds__switch_candidates__check_hlds__switch_candidates__field_types_maybe_candidate_switch_0_1[1] = { (MR_PseudoTypeInfo) (&check_hlds__switch_candidates__check_hlds__switch_candidates__type_ctor_info_candidate_switch_0) };

static const MR_DuFunctorDesc check_hlds__switch_candidates__check_hlds__switch_candidates__du_functor_desc_maybe_candidate_switch_0_1 = {
  (MR_String) "best_candidate_switch_so_far",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE_DIRECT_ARG,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  check_hlds__switch_candidates__check_hlds__switch_candidates__field_types_maybe_candidate_switch_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__switch_candidates__check_hlds__switch_candidates__du_stag_ordered_maybe_candidate_switch_0_0[1] = { &check_hlds__switch_candidates__check_hlds__switch_candidates__du_functor_desc_maybe_candidate_switch_0_0 };

static const MR_DuFunctorDescPtr check_hlds__switch_candidates__check_hlds__switch_candidates__du_stag_ordered_maybe_candidate_switch_0_1[1] = { &check_hlds__switch_candidates__check_hlds__switch_candidates__du_functor_desc_maybe_candidate_switch_0_1 };

static const MR_DuPtagLayout check_hlds__switch_candidates__check_hlds__switch_candidates__du_ptag_ordered_maybe_candidate_switch_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    check_hlds__switch_candidates__check_hlds__switch_candidates__du_stag_ordered_maybe_candidate_switch_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE_DIRECT_ARG,
    check_hlds__switch_candidates__check_hlds__switch_candidates__du_stag_ordered_maybe_candidate_switch_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__switch_candidates__check_hlds__switch_candidates__du_name_ordered_maybe_candidate_switch_0[2] = {
  &check_hlds__switch_candidates__check_hlds__switch_candidates__du_functor_desc_maybe_candidate_switch_0_1,
  &check_hlds__switch_candidates__check_hlds__switch_candidates__du_functor_desc_maybe_candidate_switch_0_0
};

static const MR_Integer check_hlds__switch_candidates__check_hlds__switch_candidates__functor_number_map_maybe_candidate_switch_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct check_hlds__switch_candidates__check_hlds__switch_candidates__type_ctor_info_maybe_candidate_switch_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__switch_candidates____Unify____maybe_candidate_switch_0_0_10001)),
  ((MR_Box) (check_hlds__switch_candidates____Compare____maybe_candidate_switch_0_0_10001)),
  (MR_String) "check_hlds.switch_candidates",
  (MR_String) "maybe_candidate_switch",
  { check_hlds__switch_candidates__check_hlds__switch_candidates__du_name_ordered_maybe_candidate_switch_0 },
  { check_hlds__switch_candidates__check_hlds__switch_candidates__du_ptag_ordered_maybe_candidate_switch_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  check_hlds__switch_candidates__check_hlds__switch_candidates__functor_number_map_maybe_candidate_switch_0,

};

static const MR_DuFunctorDesc check_hlds__switch_candidates__check_hlds__switch_candidates__du_functor_desc_maybe_required_switch_var_0_0 = {
  (MR_String) "nrsv",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 0,
  INT32_C(0),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo check_hlds__switch_candidates__check_hlds__switch_candidates__field_types_maybe_required_switch_var_0_1[1] = { (MR_PseudoTypeInfo) (&check_hlds__switch_candidates__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0) };

static const MR_DuFunctorDesc check_hlds__switch_candidates__check_hlds__switch_candidates__du_functor_desc_maybe_required_switch_var_0_1 = {
  (MR_String) "rsv",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  check_hlds__switch_candidates__check_hlds__switch_candidates__field_types_maybe_required_switch_var_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__switch_candidates__check_hlds__switch_candidates__du_stag_ordered_maybe_required_switch_var_0_0[1] = { &check_hlds__switch_candidates__check_hlds__switch_candidates__du_functor_desc_maybe_required_switch_var_0_0 };

static const MR_DuFunctorDescPtr check_hlds__switch_candidates__check_hlds__switch_candidates__du_stag_ordered_maybe_required_switch_var_0_1[1] = { &check_hlds__switch_candidates__check_hlds__switch_candidates__du_functor_desc_maybe_required_switch_var_0_1 };

static const MR_DuPtagLayout check_hlds__switch_candidates__check_hlds__switch_candidates__du_ptag_ordered_maybe_required_switch_var_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    check_hlds__switch_candidates__check_hlds__switch_candidates__du_stag_ordered_maybe_required_switch_var_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__switch_candidates__check_hlds__switch_candidates__du_stag_ordered_maybe_required_switch_var_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__switch_candidates__check_hlds__switch_candidates__du_name_ordered_maybe_required_switch_var_0[2] = {
  &check_hlds__switch_candidates__check_hlds__switch_candidates__du_functor_desc_maybe_required_switch_var_0_0,
  &check_hlds__switch_candidates__check_hlds__switch_candidates__du_functor_desc_maybe_required_switch_var_0_1
};

static const MR_Integer check_hlds__switch_candidates__check_hlds__switch_candidates__functor_number_map_maybe_required_switch_var_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct check_hlds__switch_candidates__check_hlds__switch_candidates__type_ctor_info_maybe_required_switch_var_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__switch_candidates____Unify____maybe_required_switch_var_0_0_10001)),
  ((MR_Box) (check_hlds__switch_candidates____Compare____maybe_required_switch_var_0_0_10001)),
  (MR_String) "check_hlds.switch_candidates",
  (MR_String) "maybe_required_switch_var",
  { check_hlds__switch_candidates__check_hlds__switch_candidates__du_name_ordered_maybe_required_switch_var_0 },
  { check_hlds__switch_candidates__check_hlds__switch_candidates__du_ptag_ordered_maybe_required_switch_var_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  check_hlds__switch_candidates__check_hlds__switch_candidates__functor_number_map_maybe_required_switch_var_0,

};

void MR_CALL 
check_hlds__switch_candidates____Compare____maybe_required_switch_var_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_6 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_7 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_6 == CastY_7);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__1_1 = (MR_Integer) 0;
    else
      *HeadVar__1_1 = (MR_Integer) 1;
  else
  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__1_1 = (MR_Integer) 2;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));

    mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__switch_candidates_scalar_common_1[0]), HeadVar__1_1, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
  }
}

MR_bool MR_CALL 
check_hlds__switch_candidates____Unify____maybe_required_switch_var_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_7 == CastY_8);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Integer CastX_5 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_6 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastY_6 == CastX_5);
  }
  else
  {
    MR_Word TypeInfo_9_9;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_Word ArgY1_4;

    succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      ArgY1_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      TypeInfo_9_9 = (MR_Word) (&check_hlds__switch_candidates_scalar_common_1[0]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_9_9, ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
    }
  }
  return succeeded;
}

void MR_CALL 
check_hlds__switch_candidates____Compare____maybe_candidate_switch_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_6 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_7 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_6 == CastY_7);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__1_1 = (MR_Integer) 0;
    else
      *HeadVar__1_1 = (MR_Integer) 1;
  else
  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__1_1 = (MR_Integer) 2;
  else
  {
    MR_Word ArgX1_4 = (MR_Word) (MR_body((MR_Word) (HeadVar__2_2), (MR_Integer) 1));
    MR_Word ArgY1_5 = (MR_Word) (MR_body((MR_Word) (HeadVar__3_3), (MR_Integer) 1));

    check_hlds__switch_candidates____Compare____candidate_switch_0_0(HeadVar__1_1, ArgX1_4, ArgY1_5);
  }
}

MR_bool MR_CALL 
check_hlds__switch_candidates____Unify____maybe_candidate_switch_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_7 == CastY_8);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Integer CastX_5 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_6 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastY_6 == CastX_5);
  }
  else
  {
    MR_Word ArgX1_3 = (MR_Word) (MR_body((MR_Word) (HeadVar__1_1), (MR_Integer) 1));
    MR_Word ArgY1_4;

    succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      ArgY1_4 = (MR_Word) (MR_body((MR_Word) (HeadVar__2_2), (MR_Integer) 1));
      succeeded = check_hlds__switch_candidates____Unify____candidate_switch_0_0(ArgX1_3, ArgY1_4);
    }
  }
  return succeeded;
}

static void MR_CALL 
check_hlds__switch_candidates____Compare____cases_missing_0_0(
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

static MR_bool MR_CALL 
check_hlds__switch_candidates____Unify____cases_missing_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
check_hlds__switch_candidates____Compare____candidate_switch_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_24 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_25 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_24 == CastY_25);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 1))));
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 2))));
    MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 3))));
    MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 3))));
    MR_Word ArgX5_16 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 4))));
    MR_Word ArgY5_17 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 4))));
    MR_Word ArgX6_19 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 5))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgY6_20 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 5))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgX7_22 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 5))) & (MR_Integer) 1);
    MR_Word ArgY7_23 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 5))) & (MR_Integer) 1);
    MR_Word SubResult1_6;

    mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__switch_candidates_scalar_common_1[0]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__switch_candidates_scalar_common_1[1]), &SubResult2_9, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word SubResult3_12;

        mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__switch_candidates_scalar_common_1[2]), &SubResult3_12, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
        succeeded = (SubResult3_12 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
        {
          MR_Word SubResult4_15;

          mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__switch_candidates_scalar_common_1[2]), &SubResult4_15, ((MR_Box) (ArgX4_13)), ((MR_Box) (ArgY4_14)));
          succeeded = (SubResult4_15 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult4_15;
          else
          {
            MR_Word SubResult5_18;

            check_hlds__switch_candidates____Compare____candidate_switch_rank_0_0(&SubResult5_18, ArgX5_16, ArgY5_17);
            succeeded = (SubResult5_18 != (MR_Integer) 0);
            if (succeeded)
              *HeadVar__1_1 = SubResult5_18;
            else
            {
              MR_Word SubResult6_21;
              MR_Integer Var_33 = (MR_Integer) (ArgX6_19);
              MR_Integer Var_34 = (MR_Integer) (ArgY6_20);

              succeeded = (Var_33 < Var_34);
              if (succeeded)
              {
                SubResult6_21 = (MR_Integer) 1;
                succeeded = MR_TRUE;
              }
              else
              {
                succeeded = (Var_33 > Var_34);
                if (succeeded)
                {
                  SubResult6_21 = (MR_Integer) 2;
                  succeeded = MR_TRUE;
                }
              }
              if (succeeded)
                *HeadVar__1_1 = SubResult6_21;
              else
              {
                MR_Integer Var_35 = (MR_Integer) (ArgX7_22);
                MR_Integer Var_36 = (MR_Integer) (ArgY7_23);

                succeeded = (Var_35 < Var_36);
                if (succeeded)
                  *HeadVar__1_1 = (MR_Integer) 1;
                else
                {
                  succeeded = (Var_35 > Var_36);
                  if (succeeded)
                    *HeadVar__1_1 = (MR_Integer) 2;
                  else
                    *HeadVar__1_1 = (MR_Integer) 0;
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
check_hlds__switch_candidates____Unify____candidate_switch_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_17 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_18 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_17 == CastY_18);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word TypeInfo_20_20;
    MR_Word TypeInfo_21_21;
    MR_Word TypeInfo_22_22;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 3))));
    MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 3))));
    MR_Word ArgX5_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 4))));
    MR_Word ArgY5_12 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 4))));
    MR_Word ArgX6_13 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 5))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgY6_14 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 5))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgX7_15 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 5))) & (MR_Integer) 1);
    MR_Word ArgY7_16 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 5))) & (MR_Integer) 1);

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__switch_candidates_scalar_common_1[0]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
    if (succeeded)
    {
      TypeInfo_20_20 = (MR_Word) (&check_hlds__switch_candidates_scalar_common_1[1]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_20_20, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
      if (succeeded)
      {
        TypeInfo_21_21 = (MR_Word) (&check_hlds__switch_candidates_scalar_common_1[2]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_21_21, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
        if (succeeded)
        {
          TypeInfo_22_22 = (MR_Word) (&check_hlds__switch_candidates_scalar_common_1[2]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_22_22, ((MR_Box) (ArgX4_9)), ((MR_Box) (ArgY4_10)));
          if (succeeded)
          {
            succeeded = check_hlds__switch_candidates____Unify____candidate_switch_rank_0_0(ArgX5_11, ArgY5_12);
            if (succeeded)
            {
              succeeded = (ArgX6_13 == ArgY6_14);
              if (succeeded)
                succeeded = (ArgX7_15 == ArgY7_16);
            }
          }
        }
      }
    }
  }
  return succeeded;
}

MR_bool MR_CALL 
check_hlds__switch_candidates____Unify____candidate_switch_rank_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_9 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_10 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_9 == CastY_10);
  if (succeeded)
    succeeded = MR_TRUE;
  else
    switch (MR_tag((MR_Word) HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
          MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

          succeeded = (CastY_8 == CastX_7);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Integer ArgX1_3 = ((MR_Integer) ((MR_hl_field(1, HeadVar__1_1, 0))));
          MR_Integer ArgY1_4;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_4 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, 0))));
            succeeded = (ArgX1_3 == ArgY1_4);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Integer ArgX1_5 = ((MR_Integer) ((MR_hl_field(2, HeadVar__1_1, 0))));
          MR_Integer ArgY1_6;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
          if (succeeded)
          {
            ArgY1_6 = ((MR_Integer) ((MR_hl_field(2, HeadVar__2_2, 0))));
            succeeded = (ArgX1_5 == ArgY1_6);
          }
        }
        break;
    }
  return succeeded;
}

void MR_CALL 
check_hlds__switch_candidates__record_candidate_switch_3_p_0(
  MR_Word ThisCandidate_4,
  MR_Word MaybeBestSoFar0_5,
  MR_Word * MaybeBestSoFar_6)
{
  if ((MaybeBestSoFar0_5 == (MR_Word) ((MR_Unsigned) 0U)))
    *MaybeBestSoFar_6 = (MR_Word) (MR_mkword(1, (MR_Word) (ThisCandidate_4)));
  else
  {
    MR_Word BestCandidate0_7 = (MR_Word) (MR_body((MR_Word) (MaybeBestSoFar0_5), (MR_Integer) 1));
    MR_Word Result_8;
    MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, ThisCandidate_4, 4))));
    MR_Word Var_10 = ((MR_Word) ((MR_hl_field(0, BestCandidate0_7, 4))));

    check_hlds__switch_candidates____Compare____candidate_switch_rank_0_0(&Result_8, Var_9, Var_10);
    switch (Result_8) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
      case (MR_Integer) 0:
        *MaybeBestSoFar_6 = MaybeBestSoFar0_5;
        break;
      case (MR_Integer) 2:
        *MaybeBestSoFar_6 = (MR_Word) (MR_mkword(1, (MR_Word) (ThisCandidate_4)));
        break;
    }
  }
}

void MR_CALL 
check_hlds__switch_candidates____Compare____candidate_switch_rank_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_8 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_9 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_8 == CastY_9);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
    switch (MR_tag((MR_Word) HeadVar__2_2)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(HeadVar__2_2)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 0;
                    break;
                  case (MR_Integer) 1:
                  case (MR_Integer) 2:
                  case (MR_Integer) 3:
                  case (MR_Integer) 4:
                  case (MR_Integer) 5:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
              case (MR_Integer) 1:
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
            }
            break;
          case (MR_Integer) 1:
            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 0;
                    break;
                  case (MR_Integer) 2:
                  case (MR_Integer) 3:
                  case (MR_Integer) 4:
                  case (MR_Integer) 5:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
              case (MR_Integer) 1:
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
            }
            break;
          case (MR_Integer) 2:
            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *HeadVar__1_1 = (MR_Integer) 0;
                    break;
                  case (MR_Integer) 3:
                  case (MR_Integer) 4:
                  case (MR_Integer) 5:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
              case (MR_Integer) 1:
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
            }
            break;
          case (MR_Integer) 3:
            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                  case (MR_Integer) 1:
                  case (MR_Integer) 2:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 3:
                    *HeadVar__1_1 = (MR_Integer) 0;
                    break;
                  case (MR_Integer) 4:
                  case (MR_Integer) 5:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
              case (MR_Integer) 1:
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
            }
            break;
          case (MR_Integer) 4:
            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                  case (MR_Integer) 1:
                  case (MR_Integer) 2:
                  case (MR_Integer) 3:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 4:
                    *HeadVar__1_1 = (MR_Integer) 0;
                    break;
                  case (MR_Integer) 5:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
              case (MR_Integer) 1:
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
            }
            break;
          case (MR_Integer) 5:
            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                  case (MR_Integer) 1:
                  case (MR_Integer) 2:
                  case (MR_Integer) 3:
                  case (MR_Integer) 4:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 5:
                    *HeadVar__1_1 = (MR_Integer) 0;
                    break;
                }
                break;
              case (MR_Integer) 1:
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        switch (MR_tag((MR_Word) HeadVar__3_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 2:
            *HeadVar__1_1 = (MR_Integer) 1;
            break;
          case (MR_Integer) 1:
            {
              MR_Integer ArgX1_4 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, 0))));
              MR_Integer ArgY1_5 = ((MR_Integer) ((MR_hl_field(1, HeadVar__3_3, 0))));

              succeeded = (ArgX1_4 < ArgY1_5);
              if (succeeded)
                *HeadVar__1_1 = (MR_Integer) 1;
              else
              {
                succeeded = (ArgX1_4 > ArgY1_5);
                if (succeeded)
                  *HeadVar__1_1 = (MR_Integer) 2;
                else
                  *HeadVar__1_1 = (MR_Integer) 0;
              }
            }
            break;
        }
        break;
      case (MR_Integer) 2:
        switch (MR_tag((MR_Word) HeadVar__3_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *HeadVar__1_1 = (MR_Integer) 1;
            break;
          case (MR_Integer) 1:
            *HeadVar__1_1 = (MR_Integer) 2;
            break;
          case (MR_Integer) 2:
            {
              MR_Integer ArgX1_6 = ((MR_Integer) ((MR_hl_field(2, HeadVar__2_2, 0))));
              MR_Integer ArgY1_7 = ((MR_Integer) ((MR_hl_field(2, HeadVar__3_3, 0))));

              succeeded = (ArgX1_6 < ArgY1_7);
              if (succeeded)
                *HeadVar__1_1 = (MR_Integer) 1;
              else
              {
                succeeded = (ArgX1_6 > ArgY1_7);
                if (succeeded)
                  *HeadVar__1_1 = (MR_Integer) 2;
                else
                  *HeadVar__1_1 = (MR_Integer) 0;
              }
            }
            break;
        }
        break;
    }
}

void MR_CALL 
check_hlds__switch_candidates__categorize_candidate_switch_9_p_0(
  MR_Word ModuleInfo_10,
  MR_Word MaybeRequiredVar_11,
  MR_Word Var_12,
  MR_Word VarType_13,
  MR_Word VarInst0_14,
  MR_Word Cases0_15,
  MR_Word LeftOver_16,
  MR_Word Requant_17,
  MR_Word * Candidate_18)
{
  MR_bool succeeded;
  MR_Word CanFail_19;
  MR_Word CasesMissing_20;
  MR_Word Cases_21;
  MR_Word UnreachableCaseGoals_22;
  MR_Word Rank_23;
  MR_Word BoundFunctors_32;

  succeeded = hlds__inst_test__inst_is_bound_to_functors_3_p_0(ModuleInfo_10, VarInst0_14, &BoundFunctors_32);
  if (succeeded)
  {
    MR_Word TypeCtor_33;
    MR_Word InstConsIds_34;
    MR_Word InstConsIdSet_35;
    MR_Word CoveredConsIds_38;
    MR_Word UncoveredConsIds_39;
    MR_Word Var_40;

    parse_tree__prog_type__type_to_ctor_det_2_p_0(VarType_13, &TypeCtor_33);
    parse_tree__prog_mode__bound_functors_to_cons_ids_3_p_0(TypeCtor_33, BoundFunctors_32, &InstConsIds_34);
    mercury__set_tree234__list_to_set_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0), InstConsIds_34, &InstConsIdSet_35);
    check_hlds__det_util__delete_unreachable_cases_4_p_0(Cases0_15, InstConsIdSet_35, &Cases_21, &UnreachableCaseGoals_22);
    Var_40 = mercury__set_tree234__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0));
    check_hlds__switch_candidates__acc_covered_functors_3_p_0(Cases_21, Var_40, &CoveredConsIds_38);
    mercury__set_tree234__difference_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0), InstConsIdSet_35, CoveredConsIds_38, &UncoveredConsIds_39);
    succeeded = mercury__set_tree234__is_empty_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0), UncoveredConsIds_39);
    if (succeeded)
    {
      CanFail_19 = (MR_Integer) 1;
      CasesMissing_20 = (MR_Integer) 0;
    }
    else
    {
      CanFail_19 = (MR_Integer) 0;
      CasesMissing_20 = (MR_Integer) 1;
    }
  }
  else
  {
    MR_Integer NumFunctors_36;

    Cases_21 = Cases0_15;
    UnreachableCaseGoals_22 = (MR_Word) ((MR_Unsigned) 0U);
    succeeded = hlds__type_util__switch_type_num_functors_3_p_0(ModuleInfo_10, VarType_13, &NumFunctors_36);
    if (succeeded)
    {
      MR_Integer NumCoveredConsIds_42;

      check_hlds__switch_candidates__count_covered_cons_ids_3_p_0(Cases_21, (MR_Integer) 0, &NumCoveredConsIds_42);
      succeeded = (NumCoveredConsIds_42 == NumFunctors_36);
      if (succeeded)
      {
        CanFail_19 = (MR_Integer) 1;
        CasesMissing_20 = (MR_Integer) 0;
      }
      else
      {
        CanFail_19 = (MR_Integer) 0;
        CasesMissing_20 = (MR_Integer) 1;
      }
    }
    else
    {
      CanFail_19 = (MR_Integer) 0;
      CasesMissing_20 = (MR_Integer) 2;
    }
  }
  if ((LeftOver_16 == (MR_Word) ((MR_Unsigned) 0U)))
    if ((Cases_21 == (MR_Word) ((MR_Unsigned) 0U)))
      Rank_23 = (MR_Word) ((MR_Unsigned) 16U);
    else
    {
      MR_Word LaterCases_25 = ((MR_Word) ((MR_hl_field(1, Cases_21, 1))));

      succeeded = (LaterCases_25 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
        succeeded = (UnreachableCaseGoals_22 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
        Rank_23 = (MR_Word) ((MR_Unsigned) 4U);
      else
      {
        MR_Word TypeInfo_31_31;
        MR_Word RequiredVar_26;

        succeeded = (MaybeRequiredVar_11 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          RequiredVar_26 = ((MR_Word) ((MR_hl_field(1, MaybeRequiredVar_11, 0))));
          TypeInfo_31_31 = (MR_Word) (&check_hlds__switch_candidates_scalar_common_1[0]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_31_31, ((MR_Box) (RequiredVar_26)), ((MR_Box) (Var_12)));
        }
        if (succeeded)
          Rank_23 = (MR_Word) ((MR_Unsigned) 20U);
        else
          switch (CasesMissing_20) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              Rank_23 = (MR_Word) ((MR_Unsigned) 12U);
              break;
            case (MR_Integer) 1:
              Rank_23 = (MR_Word) ((MR_Unsigned) 0U);
              break;
            case (MR_Integer) 2:
              Rank_23 = (MR_Word) ((MR_Unsigned) 8U);
              break;
          }
      }
    }
  else
  {
    MR_Integer NumCases_29;

    mercury__list__length_2_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0), Cases_21, &NumCases_29);
    switch (CanFail_19) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          Rank_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Rank_23, 0) = ((MR_Box) (NumCases_29));
        }
        break;
      case (MR_Integer) 1:
        {
          Rank_23 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(2, Rank_23, 0) = ((MR_Box) (NumCases_29));
        }
        break;
    }
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    *Candidate_18 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_12));
    MR_hl_field(0, base, 1) = ((MR_Box) (Cases_21));
    MR_hl_field(0, base, 2) = ((MR_Box) (UnreachableCaseGoals_22));
    MR_hl_field(0, base, 3) = ((MR_Box) (LeftOver_16));
    MR_hl_field(0, base, 4) = ((MR_Box) (Rank_23));
    MR_hl_field(0, base, 5) = (MR_Box) (((((MR_Unsigned) (CanFail_19) << 1)) | (MR_Unsigned) (Requant_17)));
  }
}

static void MR_CALL 
check_hlds__switch_candidates__count_covered_cons_ids_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer STATE_VARIABLE_NumCoveredConsIds_0_2,
  MR_Integer * STATE_VARIABLE_NumCoveredConsIds_3)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_NumCoveredConsIds_3 = STATE_VARIABLE_NumCoveredConsIds_0_2;
    else
    {
      MR_Word Case_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word Cases_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word OtherConsIds_11 = ((MR_Word) ((MR_hl_field(0, Case_7, 1))));
      MR_Integer STATE_VARIABLE_NumCoveredConsIds_1_15;
      MR_Integer Var_16 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_NumCoveredConsIds_0_2 + (MR_Unsigned) 1);
      MR_Integer Var_18;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Integer next_value_of_STATE_VARIABLE_NumCoveredConsIds_0_2;

      Var_18 = mercury__list__length_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0), OtherConsIds_11);
      STATE_VARIABLE_NumCoveredConsIds_1_15 = (MR_Integer) ((MR_Unsigned) Var_16 + (MR_Unsigned) Var_18);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Cases_8;
      next_value_of_STATE_VARIABLE_NumCoveredConsIds_0_2 = STATE_VARIABLE_NumCoveredConsIds_1_15;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_NumCoveredConsIds_0_2 = next_value_of_STATE_VARIABLE_NumCoveredConsIds_0_2;
      continue;
    }
    break;
  }
}

static void MR_CALL 
check_hlds__switch_candidates__acc_covered_functors_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_CoveredConsIds_0_2,
  MR_Word * STATE_VARIABLE_CoveredConsIds_3)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_CoveredConsIds_3 = STATE_VARIABLE_CoveredConsIds_0_2;
    else
    {
      MR_Word Case_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word Cases_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word MainConsId_10 = ((MR_Word) ((MR_hl_field(0, Case_7, 0))));
      MR_Word OtherConsIds_11 = ((MR_Word) ((MR_hl_field(0, Case_7, 1))));
      MR_Word STATE_VARIABLE_CoveredConsIds_1_15;
      MR_Word STATE_VARIABLE_CoveredConsIds_2_16;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_CoveredConsIds_0_2;

      mercury__set_tree234__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0), ((MR_Box) (MainConsId_10)), STATE_VARIABLE_CoveredConsIds_0_2, &STATE_VARIABLE_CoveredConsIds_1_15);
      mercury__set_tree234__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0), OtherConsIds_11, STATE_VARIABLE_CoveredConsIds_1_15, &STATE_VARIABLE_CoveredConsIds_2_16);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Cases_8;
      next_value_of_STATE_VARIABLE_CoveredConsIds_0_2 = STATE_VARIABLE_CoveredConsIds_2_16;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_CoveredConsIds_0_2 = next_value_of_STATE_VARIABLE_CoveredConsIds_0_2;
      continue;
    }
    break;
  }
}

MR_bool MR_CALL 
check_hlds__switch_candidates__is_candidate_switch_2_p_0(
  MR_Word Cases0_3,
  MR_Word LeftOver_4)
{
  MR_bool succeeded = (LeftOver_4 == (MR_Word) ((MR_Unsigned) 0U));

  if (!(succeeded))
  {
    MR_Word Var_8;

    succeeded = (Cases0_3 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      Var_8 = ((MR_Word) ((MR_hl_field(1, Cases0_3, 1))));
      succeeded = (Var_8 != (MR_Word) ((MR_Unsigned) 0U));
    }
  }
  return succeeded;
}

static MR_bool MR_CALL 
check_hlds__switch_candidates____Unify____candidate_switch_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__switch_candidates____Unify____candidate_switch_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__switch_candidates____Compare____candidate_switch_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__switch_candidates____Compare____candidate_switch_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__switch_candidates____Unify____candidate_switch_rank_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__switch_candidates____Unify____candidate_switch_rank_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__switch_candidates____Compare____candidate_switch_rank_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__switch_candidates____Compare____candidate_switch_rank_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__switch_candidates____Unify____cases_missing_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__switch_candidates____Unify____cases_missing_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__switch_candidates____Compare____cases_missing_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__switch_candidates____Compare____cases_missing_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__switch_candidates____Unify____maybe_candidate_switch_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__switch_candidates____Unify____maybe_candidate_switch_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__switch_candidates____Compare____maybe_candidate_switch_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__switch_candidates____Compare____maybe_candidate_switch_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__switch_candidates____Unify____maybe_required_switch_var_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__switch_candidates____Unify____maybe_required_switch_var_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__switch_candidates____Compare____maybe_required_switch_var_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__switch_candidates____Compare____maybe_required_switch_var_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__check_hlds__switch_candidates__init(void)
{
}

void mercury__check_hlds__switch_candidates__init_type_tables(void)
{
  static MR_bool initialised = MR_FALSE;
  if (initialised) return;
  initialised = MR_TRUE;

  MR_register_type_ctor_info(&check_hlds__switch_candidates__check_hlds__switch_candidates__type_ctor_info_candidate_switch_0);
  MR_register_type_ctor_info(&check_hlds__switch_candidates__check_hlds__switch_candidates__type_ctor_info_candidate_switch_rank_0);
  MR_register_type_ctor_info(&check_hlds__switch_candidates__check_hlds__switch_candidates__type_ctor_info_cases_missing_0);
  MR_register_type_ctor_info(&check_hlds__switch_candidates__check_hlds__switch_candidates__type_ctor_info_maybe_candidate_switch_0);
  MR_register_type_ctor_info(&check_hlds__switch_candidates__check_hlds__switch_candidates__type_ctor_info_maybe_required_switch_var_0);
}

void mercury__check_hlds__switch_candidates__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__check_hlds__switch_candidates__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module check_hlds.switch_candidates.
