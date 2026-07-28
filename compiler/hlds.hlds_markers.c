/*
** Automatically generated from `hlds_markers.m'
** by the Mercury compiler,
** version rotd-2026-07-28
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


// :- module hlds.hlds_markers.
// :- implementation.

/*
INIT mercury__hlds__hlds_markers__init
ENDINIT
*/

#include "hlds.hlds_markers.mih"


#include "assoc_list.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "cord.mih"
#include "enum.mih"
#include "hlds.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "one_or_more.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "term.mih"
#include "term_context.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "univ.mih"
#include "varset.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_item.mih"




static const MR_EnumFunctorDesc hlds__hlds_markers__hlds__hlds_markers__enum_functor_desc_goal_feature_0_0;

static const MR_EnumFunctorDesc hlds__hlds_markers__hlds__hlds_markers__enum_functor_desc_goal_feature_0_1;

static const MR_EnumFunctorDesc hlds__hlds_markers__hlds__hlds_markers__enum_functor_desc_goal_feature_0_2;

static const MR_EnumFunctorDesc hlds__hlds_markers__hlds__hlds_markers__enum_functor_desc_goal_feature_0_3;

static const MR_EnumFunctorDesc hlds__hlds_markers__hlds__hlds_markers__enum_functor_desc_goal_feature_0_4;

static const MR_EnumFunctorDesc hlds__hlds_markers__hlds__hlds_markers__enum_functor_desc_goal_feature_0_5;

static const MR_EnumFunctorDesc hlds__hlds_markers__hlds__hlds_markers__enum_functor_desc_goal_feature_0_6;

static const MR_EnumFunctorDesc hlds__hlds_markers__hlds__hlds_markers__enum_functor_desc_goal_feature_0_7;

static const MR_EnumFunctorDesc hlds__hlds_markers__hlds__hlds_markers__enum_functor_desc_goal_feature_0_8;

static const MR_EnumFunctorDesc hlds__hlds_markers__hlds__hlds_markers__enum_functor_desc_goal_feature_0_9;

static const MR_EnumFunctorDesc hlds__hlds_markers__hlds__hlds_markers__enum_functor_desc_goal_feature_0_10;

static const MR_EnumFunctorDesc hlds__hlds_markers__hlds__hlds_markers__enum_functor_desc_goal_feature_0_11;

static const MR_EnumFunctorDesc hlds__hlds_markers__hlds__hlds_markers__enum_functor_desc_goal_feature_0_12;

static const MR_EnumFunctorDesc hlds__hlds_markers__hlds__hlds_markers__enum_functor_desc_goal_feature_0_13;

static const MR_EnumFunctorDesc hlds__hlds_markers__hlds__hlds_markers__enum_functor_desc_goal_feature_0_14;

static const MR_EnumFunctorDesc hlds__hlds_markers__hlds__hlds_markers__enum_functor_desc_goal_feature_0_15;

static const MR_EnumFunctorDesc hlds__hlds_markers__hlds__hlds_markers__enum_functor_desc_goal_feature_0_16;

static const MR_EnumFunctorDesc hlds__hlds_markers__hlds__hlds_markers__enum_functor_desc_goal_feature_0_17;

static const MR_EnumFunctorDesc hlds__hlds_markers__hlds__hlds_markers__enum_functor_desc_goal_feature_0_18;

static const MR_EnumFunctorDesc hlds__hlds_markers__hlds__hlds_markers__enum_functor_desc_goal_feature_0_19;

static const MR_EnumFunctorDesc hlds__hlds_markers__hlds__hlds_markers__enum_functor_desc_goal_feature_0_20;

static const MR_EnumFunctorDesc hlds__hlds_markers__hlds__hlds_markers__enum_functor_desc_goal_feature_0_21;

static const MR_EnumFunctorDesc hlds__hlds_markers__hlds__hlds_markers__enum_functor_desc_goal_feature_0_22;

static const MR_EnumFunctorDesc hlds__hlds_markers__hlds__hlds_markers__enum_functor_desc_goal_feature_0_23;

static const MR_EnumFunctorDesc hlds__hlds_markers__hlds__hlds_markers__enum_functor_desc_goal_feature_0_24;

static const MR_EnumFunctorDesc hlds__hlds_markers__hlds__hlds_markers__enum_functor_desc_goal_feature_0_25;

static const MR_EnumFunctorDesc hlds__hlds_markers__hlds__hlds_markers__enum_functor_desc_goal_feature_0_26;

static const MR_EnumFunctorDesc hlds__hlds_markers__hlds__hlds_markers__enum_functor_desc_goal_feature_0_27;

static const MR_EnumFunctorDesc hlds__hlds_markers__hlds__hlds_markers__enum_functor_desc_goal_feature_0_28;

static const MR_EnumFunctorDesc hlds__hlds_markers__hlds__hlds_markers__enum_functor_desc_goal_feature_0_29;

static const MR_EnumFunctorDesc hlds__hlds_markers__hlds__hlds_markers__enum_functor_desc_goal_feature_0_30;

static const MR_EnumFunctorDescPtr hlds__hlds_markers__hlds__hlds_markers__enum_ordinal_ordered_goal_feature_0[31];

static const MR_EnumFunctorDescPtr hlds__hlds_markers__hlds__hlds_markers__enum_name_ordered_goal_feature_0[31];

static const MR_Integer hlds__hlds_markers__hlds__hlds_markers__functor_number_map_goal_feature_0[31];

static const MR_EnumFunctorDesc hlds__hlds_markers__hlds__hlds_markers__enum_functor_desc_pred_marker_0_0;

static const MR_EnumFunctorDesc hlds__hlds_markers__hlds__hlds_markers__enum_functor_desc_pred_marker_0_1;

static const MR_EnumFunctorDesc hlds__hlds_markers__hlds__hlds_markers__enum_functor_desc_pred_marker_0_2;

static const MR_EnumFunctorDesc hlds__hlds_markers__hlds__hlds_markers__enum_functor_desc_pred_marker_0_3;

static const MR_EnumFunctorDesc hlds__hlds_markers__hlds__hlds_markers__enum_functor_desc_pred_marker_0_4;

static const MR_EnumFunctorDesc hlds__hlds_markers__hlds__hlds_markers__enum_functor_desc_pred_marker_0_5;

static const MR_EnumFunctorDesc hlds__hlds_markers__hlds__hlds_markers__enum_functor_desc_pred_marker_0_6;

static const MR_EnumFunctorDesc hlds__hlds_markers__hlds__hlds_markers__enum_functor_desc_pred_marker_0_7;

static const MR_EnumFunctorDesc hlds__hlds_markers__hlds__hlds_markers__enum_functor_desc_pred_marker_0_8;

static const MR_EnumFunctorDesc hlds__hlds_markers__hlds__hlds_markers__enum_functor_desc_pred_marker_0_9;

static const MR_EnumFunctorDesc hlds__hlds_markers__hlds__hlds_markers__enum_functor_desc_pred_marker_0_10;

static const MR_EnumFunctorDesc hlds__hlds_markers__hlds__hlds_markers__enum_functor_desc_pred_marker_0_11;

static const MR_EnumFunctorDesc hlds__hlds_markers__hlds__hlds_markers__enum_functor_desc_pred_marker_0_12;

static const MR_EnumFunctorDesc hlds__hlds_markers__hlds__hlds_markers__enum_functor_desc_pred_marker_0_13;

static const MR_EnumFunctorDesc hlds__hlds_markers__hlds__hlds_markers__enum_functor_desc_pred_marker_0_14;

static const MR_EnumFunctorDesc hlds__hlds_markers__hlds__hlds_markers__enum_functor_desc_pred_marker_0_15;

static const MR_EnumFunctorDesc hlds__hlds_markers__hlds__hlds_markers__enum_functor_desc_pred_marker_0_16;

static const MR_EnumFunctorDesc hlds__hlds_markers__hlds__hlds_markers__enum_functor_desc_pred_marker_0_17;

static const MR_EnumFunctorDesc hlds__hlds_markers__hlds__hlds_markers__enum_functor_desc_pred_marker_0_18;

static const MR_EnumFunctorDesc hlds__hlds_markers__hlds__hlds_markers__enum_functor_desc_pred_marker_0_19;

static const MR_EnumFunctorDesc hlds__hlds_markers__hlds__hlds_markers__enum_functor_desc_pred_marker_0_20;

static const MR_EnumFunctorDesc hlds__hlds_markers__hlds__hlds_markers__enum_functor_desc_pred_marker_0_21;

static const MR_EnumFunctorDesc hlds__hlds_markers__hlds__hlds_markers__enum_functor_desc_pred_marker_0_22;

static const MR_EnumFunctorDesc hlds__hlds_markers__hlds__hlds_markers__enum_functor_desc_pred_marker_0_23;

static const MR_EnumFunctorDesc hlds__hlds_markers__hlds__hlds_markers__enum_functor_desc_pred_marker_0_24;

static const MR_EnumFunctorDesc hlds__hlds_markers__hlds__hlds_markers__enum_functor_desc_pred_marker_0_25;

static const MR_EnumFunctorDesc hlds__hlds_markers__hlds__hlds_markers__enum_functor_desc_pred_marker_0_26;

static const MR_EnumFunctorDesc hlds__hlds_markers__hlds__hlds_markers__enum_functor_desc_pred_marker_0_27;

static const MR_EnumFunctorDesc hlds__hlds_markers__hlds__hlds_markers__enum_functor_desc_pred_marker_0_28;

static const MR_EnumFunctorDesc hlds__hlds_markers__hlds__hlds_markers__enum_functor_desc_pred_marker_0_29;

static const MR_EnumFunctorDesc hlds__hlds_markers__hlds__hlds_markers__enum_functor_desc_pred_marker_0_30;

static const MR_EnumFunctorDescPtr hlds__hlds_markers__hlds__hlds_markers__enum_ordinal_ordered_pred_marker_0[31];

static const MR_EnumFunctorDescPtr hlds__hlds_markers__hlds__hlds_markers__enum_name_ordered_pred_marker_0[31];

static const MR_Integer hlds__hlds_markers__hlds__hlds_markers__functor_number_map_pred_marker_0[31];

static const MR_FA_TypeInfo_Struct1 hlds__hlds_markers__set_ordlist__ti_set_ordlist_1hlds__hlds_markers__type_ctor_info_pred_marker_0;

static MR_bool MR_CALL 
hlds__hlds_markers____Unify____goal_feature_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__hlds_markers____Compare____goal_feature_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__hlds_markers____Unify____pred_marker_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__hlds_markers____Compare____pred_marker_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__hlds_markers____Unify____pred_markers_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__hlds_markers____Compare____pred_markers_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box hlds__hlds_markers_scalar_common_1[3][2];


struct hlds__hlds_markers__vector_common_type_2_0_s {
  const MR_String hlds__hlds_markers__vector_common_type_2_0__vct_2_f_0;
};

static /* final */ const struct hlds__hlds_markers__vector_common_type_2_0_s hlds__hlds_markers_vector_common_2[31];



static /* final */ const MR_Box hlds__hlds_markers_scalar_common_1[3][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&hlds__hlds_markers__hlds__hlds_markers__type_ctor_info_pred_marker_0))
  },
  /* row   1 */
  {
    ((MR_Box) ((MR_Integer) 15)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   2 */
  {
    ((MR_Box) ((MR_Integer) 16)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};


static /* final */ const struct hlds__hlds_markers__vector_common_type_2_0_s hlds__hlds_markers_vector_common_2[31] = {
  /* row   0 */   { (MR_String) "stub" },
  /* row   1 */   { (MR_String) "builtin_stub" },
  /* row   2 */   { (MR_String) "infer_type" },
  /* row   3 */   { (MR_String) "infer_modes" },
  /* row   4 */   { (MR_String) "no_pred_decl" },
  /* row   5 */   { (MR_String) "no_determinism_warning" },
  /* row   6 */   { (MR_String) "inline" },
  /* row   7 */   { (MR_String) "heuristic_inline" },
  /* row   8 */   { (MR_String) "no_inline" },
  /* row   9 */   { (MR_String) "mmc_no_inline" },
  /* row  10 */   { (MR_String) "consider_used" },
  /* row  11 */   { (MR_String) "require_switch_arms_in_type_order" },
  /* row  12 */   { (MR_String) "class_method" },
  /* row  13 */   { (MR_String) "class_instance_method" },
  /* row  14 */   { (MR_String) "named_class_instance_method" },
  /* row  15 */   { (MR_String) "impure" },
  /* row  16 */   { (MR_String) "semipure" },
  /* row  17 */   { (MR_String) "promise_pure" },
  /* row  18 */   { (MR_String) "promise_semipure" },
  /* row  19 */   { (MR_String) "promise_equivalent_clauses" },
  /* row  20 */   { (MR_String) "terminates" },
  /* row  21 */   { (MR_String) "does_not_terminate" },
  /* row  22 */   { (MR_String) "check_termination" },
  /* row  23 */   { (MR_String) "calls_are_fully_qualified" },
  /* row  24 */   { (MR_String) "mode_check_clauses" },
  /* row  25 */   { (MR_String) "mutable_access_pred" },
  /* row  26 */   { (MR_String) "has_require_scope" },
  /* row  27 */   { (MR_String) "has_incomplete_switch" },
  /* row  28 */   { (MR_String) "has_format_call" },
  /* row  29 */   { (MR_String) "has_rhs_lambda" },
  /* row  30 */   { (MR_String) "fact_table_semantic_errors" },
};




static const MR_EnumFunctorDesc hlds__hlds_markers__hlds__hlds_markers__enum_functor_desc_goal_feature_0_0 = {
  (MR_String) "feature_was_clause",
  INT32_C(0)
};

static const MR_EnumFunctorDesc hlds__hlds_markers__hlds__hlds_markers__enum_functor_desc_goal_feature_0_1 = {
  (MR_String) "feature_from_head",
  INT32_C(1)
};

static const MR_EnumFunctorDesc hlds__hlds_markers__hlds__hlds_markers__enum_functor_desc_goal_feature_0_2 = {
  (MR_String) "feature_constraint",
  INT32_C(2)
};

static const MR_EnumFunctorDesc hlds__hlds_markers__hlds__hlds_markers__enum_functor_desc_goal_feature_0_3 = {
  (MR_String) "feature_not_impure_for_determinism",
  INT32_C(3)
};

static const MR_EnumFunctorDesc hlds__hlds_markers__hlds__hlds_markers__enum_functor_desc_goal_feature_0_4 = {
  (MR_String) "feature_stack_opt",
  INT32_C(4)
};

static const MR_EnumFunctorDesc hlds__hlds_markers__hlds__hlds_markers__enum_functor_desc_goal_feature_0_5 = {
  (MR_String) "feature_tuple_opt",
  INT32_C(5)
};

static const MR_EnumFunctorDesc hlds__hlds_markers__hlds__hlds_markers__enum_functor_desc_goal_feature_0_6 = {
  (MR_String) "feature_call_table_gen",
  INT32_C(6)
};

static const MR_EnumFunctorDesc hlds__hlds_markers__hlds__hlds_markers__enum_functor_desc_goal_feature_0_7 = {
  (MR_String) "feature_preserve_backtrack_into",
  INT32_C(7)
};

static const MR_EnumFunctorDesc hlds__hlds_markers__hlds__hlds_markers__enum_functor_desc_goal_feature_0_8 = {
  (MR_String) "feature_save_deep_excp_vars",
  INT32_C(8)
};

static const MR_EnumFunctorDesc hlds__hlds_markers__hlds__hlds_markers__enum_functor_desc_goal_feature_0_9 = {
  (MR_String) "feature_hide_debug_event",
  INT32_C(9)
};

static const MR_EnumFunctorDesc hlds__hlds_markers__hlds__hlds_markers__enum_functor_desc_goal_feature_0_10 = {
  (MR_String) "feature_deep_self_tail_rec_call",
  INT32_C(10)
};

static const MR_EnumFunctorDesc hlds__hlds_markers__hlds__hlds_markers__enum_functor_desc_goal_feature_0_11 = {
  (MR_String) "feature_debug_self_tail_rec_call",
  INT32_C(11)
};

static const MR_EnumFunctorDesc hlds__hlds_markers__hlds__hlds_markers__enum_functor_desc_goal_feature_0_12 = {
  (MR_String) "feature_self_or_mutual_tail_rec_call",
  INT32_C(12)
};

static const MR_EnumFunctorDesc hlds__hlds_markers__hlds__hlds_markers__enum_functor_desc_goal_feature_0_13 = {
  (MR_String) "feature_obvious_nontail_rec_call",
  INT32_C(13)
};

static const MR_EnumFunctorDesc hlds__hlds_markers__hlds__hlds_markers__enum_functor_desc_goal_feature_0_14 = {
  (MR_String) "feature_keep_constant_binding",
  INT32_C(14)
};

static const MR_EnumFunctorDesc hlds__hlds_markers__hlds__hlds_markers__enum_functor_desc_goal_feature_0_15 = {
  (MR_String) "feature_do_not_warn_singleton",
  INT32_C(15)
};

static const MR_EnumFunctorDesc hlds__hlds_markers__hlds__hlds_markers__enum_functor_desc_goal_feature_0_16 = {
  (MR_String) "feature_state_var_copy",
  INT32_C(16)
};

static const MR_EnumFunctorDesc hlds__hlds_markers__hlds__hlds_markers__enum_functor_desc_goal_feature_0_17 = {
  (MR_String) "feature_duplicated_for_switch",
  INT32_C(17)
};

static const MR_EnumFunctorDesc hlds__hlds_markers__hlds__hlds_markers__enum_functor_desc_goal_feature_0_18 = {
  (MR_String) "feature_mode_check_clauses_goal",
  INT32_C(18)
};

static const MR_EnumFunctorDesc hlds__hlds_markers__hlds__hlds_markers__enum_functor_desc_goal_feature_0_19 = {
  (MR_String) "feature_will_not_modify_trail",
  INT32_C(19)
};

static const MR_EnumFunctorDesc hlds__hlds_markers__hlds__hlds_markers__enum_functor_desc_goal_feature_0_20 = {
  (MR_String) "feature_will_not_call_mm_tabled",
  INT32_C(20)
};

static const MR_EnumFunctorDesc hlds__hlds_markers__hlds__hlds_markers__enum_functor_desc_goal_feature_0_21 = {
  (MR_String) "feature_contains_trace",
  INT32_C(21)
};

static const MR_EnumFunctorDesc hlds__hlds_markers__hlds__hlds_markers__enum_functor_desc_goal_feature_0_22 = {
  (MR_String) "feature_pretest_equality",
  INT32_C(22)
};

static const MR_EnumFunctorDesc hlds__hlds_markers__hlds__hlds_markers__enum_functor_desc_goal_feature_0_23 = {
  (MR_String) "feature_pretest_equality_condition",
  INT32_C(23)
};

static const MR_EnumFunctorDesc hlds__hlds_markers__hlds__hlds_markers__enum_functor_desc_goal_feature_0_24 = {
  (MR_String) "feature_lambda_undetermined_mode",
  INT32_C(24)
};

static const MR_EnumFunctorDesc hlds__hlds_markers__hlds__hlds_markers__enum_functor_desc_goal_feature_0_25 = {
  (MR_String) "feature_contains_stm_inner_outer",
  INT32_C(25)
};

static const MR_EnumFunctorDesc hlds__hlds_markers__hlds__hlds_markers__enum_functor_desc_goal_feature_0_26 = {
  (MR_String) "feature_do_not_tailcall",
  INT32_C(26)
};

static const MR_EnumFunctorDesc hlds__hlds_markers__hlds__hlds_markers__enum_functor_desc_goal_feature_0_27 = {
  (MR_String) "feature_do_not_warn_implicit_stream",
  INT32_C(27)
};

static const MR_EnumFunctorDesc hlds__hlds_markers__hlds__hlds_markers__enum_functor_desc_goal_feature_0_28 = {
  (MR_String) "feature_lifted_by_cse",
  INT32_C(28)
};

static const MR_EnumFunctorDesc hlds__hlds_markers__hlds__hlds_markers__enum_functor_desc_goal_feature_0_29 = {
  (MR_String) "feature_lambda_from_try",
  INT32_C(29)
};

static const MR_EnumFunctorDesc hlds__hlds_markers__hlds__hlds_markers__enum_functor_desc_goal_feature_0_30 = {
  (MR_String) "feature_non_tailrec_reported",
  INT32_C(30)
};

static const MR_EnumFunctorDescPtr hlds__hlds_markers__hlds__hlds_markers__enum_ordinal_ordered_goal_feature_0[31] = {
  &hlds__hlds_markers__hlds__hlds_markers__enum_functor_desc_goal_feature_0_0,
  &hlds__hlds_markers__hlds__hlds_markers__enum_functor_desc_goal_feature_0_1,
  &hlds__hlds_markers__hlds__hlds_markers__enum_functor_desc_goal_feature_0_2,
  &hlds__hlds_markers__hlds__hlds_markers__enum_functor_desc_goal_feature_0_3,
  &hlds__hlds_markers__hlds__hlds_markers__enum_functor_desc_goal_feature_0_4,
  &hlds__hlds_markers__hlds__hlds_markers__enum_functor_desc_goal_feature_0_5,
  &hlds__hlds_markers__hlds__hlds_markers__enum_functor_desc_goal_feature_0_6,
  &hlds__hlds_markers__hlds__hlds_markers__enum_functor_desc_goal_feature_0_7,
  &hlds__hlds_markers__hlds__hlds_markers__enum_functor_desc_goal_feature_0_8,
  &hlds__hlds_markers__hlds__hlds_markers__enum_functor_desc_goal_feature_0_9,
  &hlds__hlds_markers__hlds__hlds_markers__enum_functor_desc_goal_feature_0_10,
  &hlds__hlds_markers__hlds__hlds_markers__enum_functor_desc_goal_feature_0_11,
  &hlds__hlds_markers__hlds__hlds_markers__enum_functor_desc_goal_feature_0_12,
  &hlds__hlds_markers__hlds__hlds_markers__enum_functor_desc_goal_feature_0_13,
  &hlds__hlds_markers__hlds__hlds_markers__enum_functor_desc_goal_feature_0_14,
  &hlds__hlds_markers__hlds__hlds_markers__enum_functor_desc_goal_feature_0_15,
  &hlds__hlds_markers__hlds__hlds_markers__enum_functor_desc_goal_feature_0_16,
  &hlds__hlds_markers__hlds__hlds_markers__enum_functor_desc_goal_feature_0_17,
  &hlds__hlds_markers__hlds__hlds_markers__enum_functor_desc_goal_feature_0_18,
  &hlds__hlds_markers__hlds__hlds_markers__enum_functor_desc_goal_feature_0_19,
  &hlds__hlds_markers__hlds__hlds_markers__enum_functor_desc_goal_feature_0_20,
  &hlds__hlds_markers__hlds__hlds_markers__enum_functor_desc_goal_feature_0_21,
  &hlds__hlds_markers__hlds__hlds_markers__enum_functor_desc_goal_feature_0_22,
  &hlds__hlds_markers__hlds__hlds_markers__enum_functor_desc_goal_feature_0_23,
  &hlds__hlds_markers__hlds__hlds_markers__enum_functor_desc_goal_feature_0_24,
  &hlds__hlds_markers__hlds__hlds_markers__enum_functor_desc_goal_feature_0_25,
  &hlds__hlds_markers__hlds__hlds_markers__enum_functor_desc_goal_feature_0_26,
  &hlds__hlds_markers__hlds__hlds_markers__enum_functor_desc_goal_feature_0_27,
  &hlds__hlds_markers__hlds__hlds_markers__enum_functor_desc_goal_feature_0_28,
  &hlds__hlds_markers__hlds__hlds_markers__enum_functor_desc_goal_feature_0_29,
  &hlds__hlds_markers__hlds__hlds_markers__enum_functor_desc_goal_feature_0_30
};

static const MR_EnumFunctorDescPtr hlds__hlds_markers__hlds__hlds_markers__enum_name_ordered_goal_feature_0[31] = {
  &hlds__hlds_markers__hlds__hlds_markers__enum_functor_desc_goal_feature_0_6,
  &hlds__hlds_markers__hlds__hlds_markers__enum_functor_desc_goal_feature_0_2,
  &hlds__hlds_markers__hlds__hlds_markers__enum_functor_desc_goal_feature_0_25,
  &hlds__hlds_markers__hlds__hlds_markers__enum_functor_desc_goal_feature_0_21,
  &hlds__hlds_markers__hlds__hlds_markers__enum_functor_desc_goal_feature_0_11,
  &hlds__hlds_markers__hlds__hlds_markers__enum_functor_desc_goal_feature_0_10,
  &hlds__hlds_markers__hlds__hlds_markers__enum_functor_desc_goal_feature_0_26,
  &hlds__hlds_markers__hlds__hlds_markers__enum_functor_desc_goal_feature_0_27,
  &hlds__hlds_markers__hlds__hlds_markers__enum_functor_desc_goal_feature_0_15,
  &hlds__hlds_markers__hlds__hlds_markers__enum_functor_desc_goal_feature_0_17,
  &hlds__hlds_markers__hlds__hlds_markers__enum_functor_desc_goal_feature_0_1,
  &hlds__hlds_markers__hlds__hlds_markers__enum_functor_desc_goal_feature_0_9,
  &hlds__hlds_markers__hlds__hlds_markers__enum_functor_desc_goal_feature_0_14,
  &hlds__hlds_markers__hlds__hlds_markers__enum_functor_desc_goal_feature_0_29,
  &hlds__hlds_markers__hlds__hlds_markers__enum_functor_desc_goal_feature_0_24,
  &hlds__hlds_markers__hlds__hlds_markers__enum_functor_desc_goal_feature_0_28,
  &hlds__hlds_markers__hlds__hlds_markers__enum_functor_desc_goal_feature_0_18,
  &hlds__hlds_markers__hlds__hlds_markers__enum_functor_desc_goal_feature_0_30,
  &hlds__hlds_markers__hlds__hlds_markers__enum_functor_desc_goal_feature_0_3,
  &hlds__hlds_markers__hlds__hlds_markers__enum_functor_desc_goal_feature_0_13,
  &hlds__hlds_markers__hlds__hlds_markers__enum_functor_desc_goal_feature_0_7,
  &hlds__hlds_markers__hlds__hlds_markers__enum_functor_desc_goal_feature_0_22,
  &hlds__hlds_markers__hlds__hlds_markers__enum_functor_desc_goal_feature_0_23,
  &hlds__hlds_markers__hlds__hlds_markers__enum_functor_desc_goal_feature_0_8,
  &hlds__hlds_markers__hlds__hlds_markers__enum_functor_desc_goal_feature_0_12,
  &hlds__hlds_markers__hlds__hlds_markers__enum_functor_desc_goal_feature_0_4,
  &hlds__hlds_markers__hlds__hlds_markers__enum_functor_desc_goal_feature_0_16,
  &hlds__hlds_markers__hlds__hlds_markers__enum_functor_desc_goal_feature_0_5,
  &hlds__hlds_markers__hlds__hlds_markers__enum_functor_desc_goal_feature_0_0,
  &hlds__hlds_markers__hlds__hlds_markers__enum_functor_desc_goal_feature_0_20,
  &hlds__hlds_markers__hlds__hlds_markers__enum_functor_desc_goal_feature_0_19
};

static const MR_Integer hlds__hlds_markers__hlds__hlds_markers__functor_number_map_goal_feature_0[31] = {
  (MR_Integer) 28,
  (MR_Integer) 10,
  (MR_Integer) 1,
  (MR_Integer) 18,
  (MR_Integer) 25,
  (MR_Integer) 27,
  (MR_Integer) 0,
  (MR_Integer) 20,
  (MR_Integer) 23,
  (MR_Integer) 11,
  (MR_Integer) 5,
  (MR_Integer) 4,
  (MR_Integer) 24,
  (MR_Integer) 19,
  (MR_Integer) 12,
  (MR_Integer) 8,
  (MR_Integer) 26,
  (MR_Integer) 9,
  (MR_Integer) 16,
  (MR_Integer) 30,
  (MR_Integer) 29,
  (MR_Integer) 3,
  (MR_Integer) 21,
  (MR_Integer) 22,
  (MR_Integer) 14,
  (MR_Integer) 2,
  (MR_Integer) 6,
  (MR_Integer) 7,
  (MR_Integer) 15,
  (MR_Integer) 13,
  (MR_Integer) 17
};

const MR_TypeCtorInfo_Struct hlds__hlds_markers__hlds__hlds_markers__type_ctor_info_goal_feature_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (hlds__hlds_markers____Unify____goal_feature_0_0_10001)),
  ((MR_Box) (hlds__hlds_markers____Compare____goal_feature_0_0_10001)),
  (MR_String) "hlds.hlds_markers",
  (MR_String) "goal_feature",
  { hlds__hlds_markers__hlds__hlds_markers__enum_name_ordered_goal_feature_0 },
  { hlds__hlds_markers__hlds__hlds_markers__enum_ordinal_ordered_goal_feature_0 },
  (MR_Integer) 31,
  UINT16_C(12),
  hlds__hlds_markers__hlds__hlds_markers__functor_number_map_goal_feature_0,

};

static const MR_EnumFunctorDesc hlds__hlds_markers__hlds__hlds_markers__enum_functor_desc_pred_marker_0_0 = {
  (MR_String) "marker_stub",
  INT32_C(0)
};

static const MR_EnumFunctorDesc hlds__hlds_markers__hlds__hlds_markers__enum_functor_desc_pred_marker_0_1 = {
  (MR_String) "marker_builtin_stub",
  INT32_C(1)
};

static const MR_EnumFunctorDesc hlds__hlds_markers__hlds__hlds_markers__enum_functor_desc_pred_marker_0_2 = {
  (MR_String) "marker_infer_type",
  INT32_C(2)
};

static const MR_EnumFunctorDesc hlds__hlds_markers__hlds__hlds_markers__enum_functor_desc_pred_marker_0_3 = {
  (MR_String) "marker_infer_modes",
  INT32_C(3)
};

static const MR_EnumFunctorDesc hlds__hlds_markers__hlds__hlds_markers__enum_functor_desc_pred_marker_0_4 = {
  (MR_String) "marker_no_pred_decl",
  INT32_C(4)
};

static const MR_EnumFunctorDesc hlds__hlds_markers__hlds__hlds_markers__enum_functor_desc_pred_marker_0_5 = {
  (MR_String) "marker_no_detism_warning",
  INT32_C(5)
};

static const MR_EnumFunctorDesc hlds__hlds_markers__hlds__hlds_markers__enum_functor_desc_pred_marker_0_6 = {
  (MR_String) "marker_user_marked_inline",
  INT32_C(6)
};

static const MR_EnumFunctorDesc hlds__hlds_markers__hlds__hlds_markers__enum_functor_desc_pred_marker_0_7 = {
  (MR_String) "marker_heuristic_inline",
  INT32_C(7)
};

static const MR_EnumFunctorDesc hlds__hlds_markers__hlds__hlds_markers__enum_functor_desc_pred_marker_0_8 = {
  (MR_String) "marker_user_marked_no_inline",
  INT32_C(8)
};

static const MR_EnumFunctorDesc hlds__hlds_markers__hlds__hlds_markers__enum_functor_desc_pred_marker_0_9 = {
  (MR_String) "marker_mmc_marked_no_inline",
  INT32_C(9)
};

static const MR_EnumFunctorDesc hlds__hlds_markers__hlds__hlds_markers__enum_functor_desc_pred_marker_0_10 = {
  (MR_String) "marker_consider_used",
  INT32_C(10)
};

static const MR_EnumFunctorDesc hlds__hlds_markers__hlds__hlds_markers__enum_functor_desc_pred_marker_0_11 = {
  (MR_String) "marker_req_sw_arms_type_order",
  INT32_C(11)
};

static const MR_EnumFunctorDesc hlds__hlds_markers__hlds__hlds_markers__enum_functor_desc_pred_marker_0_12 = {
  (MR_String) "marker_class_method",
  INT32_C(12)
};

static const MR_EnumFunctorDesc hlds__hlds_markers__hlds__hlds_markers__enum_functor_desc_pred_marker_0_13 = {
  (MR_String) "marker_class_instance_method",
  INT32_C(13)
};

static const MR_EnumFunctorDesc hlds__hlds_markers__hlds__hlds_markers__enum_functor_desc_pred_marker_0_14 = {
  (MR_String) "marker_named_class_instance_method",
  INT32_C(14)
};

static const MR_EnumFunctorDesc hlds__hlds_markers__hlds__hlds_markers__enum_functor_desc_pred_marker_0_15 = {
  (MR_String) "marker_is_impure",
  INT32_C(15)
};

static const MR_EnumFunctorDesc hlds__hlds_markers__hlds__hlds_markers__enum_functor_desc_pred_marker_0_16 = {
  (MR_String) "marker_is_semipure",
  INT32_C(16)
};

static const MR_EnumFunctorDesc hlds__hlds_markers__hlds__hlds_markers__enum_functor_desc_pred_marker_0_17 = {
  (MR_String) "marker_promised_pure",
  INT32_C(17)
};

static const MR_EnumFunctorDesc hlds__hlds_markers__hlds__hlds_markers__enum_functor_desc_pred_marker_0_18 = {
  (MR_String) "marker_promised_semipure",
  INT32_C(18)
};

static const MR_EnumFunctorDesc hlds__hlds_markers__hlds__hlds_markers__enum_functor_desc_pred_marker_0_19 = {
  (MR_String) "marker_promised_equivalent_clauses",
  INT32_C(19)
};

static const MR_EnumFunctorDesc hlds__hlds_markers__hlds__hlds_markers__enum_functor_desc_pred_marker_0_20 = {
  (MR_String) "marker_terminates",
  INT32_C(20)
};

static const MR_EnumFunctorDesc hlds__hlds_markers__hlds__hlds_markers__enum_functor_desc_pred_marker_0_21 = {
  (MR_String) "marker_does_not_terminate",
  INT32_C(21)
};

static const MR_EnumFunctorDesc hlds__hlds_markers__hlds__hlds_markers__enum_functor_desc_pred_marker_0_22 = {
  (MR_String) "marker_check_termination",
  INT32_C(22)
};

static const MR_EnumFunctorDesc hlds__hlds_markers__hlds__hlds_markers__enum_functor_desc_pred_marker_0_23 = {
  (MR_String) "marker_calls_are_fully_qualified",
  INT32_C(23)
};

static const MR_EnumFunctorDesc hlds__hlds_markers__hlds__hlds_markers__enum_functor_desc_pred_marker_0_24 = {
  (MR_String) "marker_mode_check_clauses",
  INT32_C(24)
};

static const MR_EnumFunctorDesc hlds__hlds_markers__hlds__hlds_markers__enum_functor_desc_pred_marker_0_25 = {
  (MR_String) "marker_mutable_access_pred",
  INT32_C(25)
};

static const MR_EnumFunctorDesc hlds__hlds_markers__hlds__hlds_markers__enum_functor_desc_pred_marker_0_26 = {
  (MR_String) "marker_has_require_scope",
  INT32_C(26)
};

static const MR_EnumFunctorDesc hlds__hlds_markers__hlds__hlds_markers__enum_functor_desc_pred_marker_0_27 = {
  (MR_String) "marker_has_incomplete_switch",
  INT32_C(27)
};

static const MR_EnumFunctorDesc hlds__hlds_markers__hlds__hlds_markers__enum_functor_desc_pred_marker_0_28 = {
  (MR_String) "marker_has_format_call",
  INT32_C(28)
};

static const MR_EnumFunctorDesc hlds__hlds_markers__hlds__hlds_markers__enum_functor_desc_pred_marker_0_29 = {
  (MR_String) "marker_has_rhs_lambda",
  INT32_C(29)
};

static const MR_EnumFunctorDesc hlds__hlds_markers__hlds__hlds_markers__enum_functor_desc_pred_marker_0_30 = {
  (MR_String) "marker_fact_table_semantic_errors",
  INT32_C(30)
};

static const MR_EnumFunctorDescPtr hlds__hlds_markers__hlds__hlds_markers__enum_ordinal_ordered_pred_marker_0[31] = {
  &hlds__hlds_markers__hlds__hlds_markers__enum_functor_desc_pred_marker_0_0,
  &hlds__hlds_markers__hlds__hlds_markers__enum_functor_desc_pred_marker_0_1,
  &hlds__hlds_markers__hlds__hlds_markers__enum_functor_desc_pred_marker_0_2,
  &hlds__hlds_markers__hlds__hlds_markers__enum_functor_desc_pred_marker_0_3,
  &hlds__hlds_markers__hlds__hlds_markers__enum_functor_desc_pred_marker_0_4,
  &hlds__hlds_markers__hlds__hlds_markers__enum_functor_desc_pred_marker_0_5,
  &hlds__hlds_markers__hlds__hlds_markers__enum_functor_desc_pred_marker_0_6,
  &hlds__hlds_markers__hlds__hlds_markers__enum_functor_desc_pred_marker_0_7,
  &hlds__hlds_markers__hlds__hlds_markers__enum_functor_desc_pred_marker_0_8,
  &hlds__hlds_markers__hlds__hlds_markers__enum_functor_desc_pred_marker_0_9,
  &hlds__hlds_markers__hlds__hlds_markers__enum_functor_desc_pred_marker_0_10,
  &hlds__hlds_markers__hlds__hlds_markers__enum_functor_desc_pred_marker_0_11,
  &hlds__hlds_markers__hlds__hlds_markers__enum_functor_desc_pred_marker_0_12,
  &hlds__hlds_markers__hlds__hlds_markers__enum_functor_desc_pred_marker_0_13,
  &hlds__hlds_markers__hlds__hlds_markers__enum_functor_desc_pred_marker_0_14,
  &hlds__hlds_markers__hlds__hlds_markers__enum_functor_desc_pred_marker_0_15,
  &hlds__hlds_markers__hlds__hlds_markers__enum_functor_desc_pred_marker_0_16,
  &hlds__hlds_markers__hlds__hlds_markers__enum_functor_desc_pred_marker_0_17,
  &hlds__hlds_markers__hlds__hlds_markers__enum_functor_desc_pred_marker_0_18,
  &hlds__hlds_markers__hlds__hlds_markers__enum_functor_desc_pred_marker_0_19,
  &hlds__hlds_markers__hlds__hlds_markers__enum_functor_desc_pred_marker_0_20,
  &hlds__hlds_markers__hlds__hlds_markers__enum_functor_desc_pred_marker_0_21,
  &hlds__hlds_markers__hlds__hlds_markers__enum_functor_desc_pred_marker_0_22,
  &hlds__hlds_markers__hlds__hlds_markers__enum_functor_desc_pred_marker_0_23,
  &hlds__hlds_markers__hlds__hlds_markers__enum_functor_desc_pred_marker_0_24,
  &hlds__hlds_markers__hlds__hlds_markers__enum_functor_desc_pred_marker_0_25,
  &hlds__hlds_markers__hlds__hlds_markers__enum_functor_desc_pred_marker_0_26,
  &hlds__hlds_markers__hlds__hlds_markers__enum_functor_desc_pred_marker_0_27,
  &hlds__hlds_markers__hlds__hlds_markers__enum_functor_desc_pred_marker_0_28,
  &hlds__hlds_markers__hlds__hlds_markers__enum_functor_desc_pred_marker_0_29,
  &hlds__hlds_markers__hlds__hlds_markers__enum_functor_desc_pred_marker_0_30
};

static const MR_EnumFunctorDescPtr hlds__hlds_markers__hlds__hlds_markers__enum_name_ordered_pred_marker_0[31] = {
  &hlds__hlds_markers__hlds__hlds_markers__enum_functor_desc_pred_marker_0_1,
  &hlds__hlds_markers__hlds__hlds_markers__enum_functor_desc_pred_marker_0_23,
  &hlds__hlds_markers__hlds__hlds_markers__enum_functor_desc_pred_marker_0_22,
  &hlds__hlds_markers__hlds__hlds_markers__enum_functor_desc_pred_marker_0_13,
  &hlds__hlds_markers__hlds__hlds_markers__enum_functor_desc_pred_marker_0_12,
  &hlds__hlds_markers__hlds__hlds_markers__enum_functor_desc_pred_marker_0_10,
  &hlds__hlds_markers__hlds__hlds_markers__enum_functor_desc_pred_marker_0_21,
  &hlds__hlds_markers__hlds__hlds_markers__enum_functor_desc_pred_marker_0_30,
  &hlds__hlds_markers__hlds__hlds_markers__enum_functor_desc_pred_marker_0_28,
  &hlds__hlds_markers__hlds__hlds_markers__enum_functor_desc_pred_marker_0_27,
  &hlds__hlds_markers__hlds__hlds_markers__enum_functor_desc_pred_marker_0_26,
  &hlds__hlds_markers__hlds__hlds_markers__enum_functor_desc_pred_marker_0_29,
  &hlds__hlds_markers__hlds__hlds_markers__enum_functor_desc_pred_marker_0_7,
  &hlds__hlds_markers__hlds__hlds_markers__enum_functor_desc_pred_marker_0_3,
  &hlds__hlds_markers__hlds__hlds_markers__enum_functor_desc_pred_marker_0_2,
  &hlds__hlds_markers__hlds__hlds_markers__enum_functor_desc_pred_marker_0_15,
  &hlds__hlds_markers__hlds__hlds_markers__enum_functor_desc_pred_marker_0_16,
  &hlds__hlds_markers__hlds__hlds_markers__enum_functor_desc_pred_marker_0_9,
  &hlds__hlds_markers__hlds__hlds_markers__enum_functor_desc_pred_marker_0_24,
  &hlds__hlds_markers__hlds__hlds_markers__enum_functor_desc_pred_marker_0_25,
  &hlds__hlds_markers__hlds__hlds_markers__enum_functor_desc_pred_marker_0_14,
  &hlds__hlds_markers__hlds__hlds_markers__enum_functor_desc_pred_marker_0_5,
  &hlds__hlds_markers__hlds__hlds_markers__enum_functor_desc_pred_marker_0_4,
  &hlds__hlds_markers__hlds__hlds_markers__enum_functor_desc_pred_marker_0_19,
  &hlds__hlds_markers__hlds__hlds_markers__enum_functor_desc_pred_marker_0_17,
  &hlds__hlds_markers__hlds__hlds_markers__enum_functor_desc_pred_marker_0_18,
  &hlds__hlds_markers__hlds__hlds_markers__enum_functor_desc_pred_marker_0_11,
  &hlds__hlds_markers__hlds__hlds_markers__enum_functor_desc_pred_marker_0_0,
  &hlds__hlds_markers__hlds__hlds_markers__enum_functor_desc_pred_marker_0_20,
  &hlds__hlds_markers__hlds__hlds_markers__enum_functor_desc_pred_marker_0_6,
  &hlds__hlds_markers__hlds__hlds_markers__enum_functor_desc_pred_marker_0_8
};

static const MR_Integer hlds__hlds_markers__hlds__hlds_markers__functor_number_map_pred_marker_0[31] = {
  (MR_Integer) 27,
  (MR_Integer) 0,
  (MR_Integer) 14,
  (MR_Integer) 13,
  (MR_Integer) 22,
  (MR_Integer) 21,
  (MR_Integer) 29,
  (MR_Integer) 12,
  (MR_Integer) 30,
  (MR_Integer) 17,
  (MR_Integer) 5,
  (MR_Integer) 26,
  (MR_Integer) 4,
  (MR_Integer) 3,
  (MR_Integer) 20,
  (MR_Integer) 15,
  (MR_Integer) 16,
  (MR_Integer) 24,
  (MR_Integer) 25,
  (MR_Integer) 23,
  (MR_Integer) 28,
  (MR_Integer) 6,
  (MR_Integer) 2,
  (MR_Integer) 1,
  (MR_Integer) 18,
  (MR_Integer) 19,
  (MR_Integer) 10,
  (MR_Integer) 9,
  (MR_Integer) 8,
  (MR_Integer) 11,
  (MR_Integer) 7
};

const MR_TypeCtorInfo_Struct hlds__hlds_markers__hlds__hlds_markers__type_ctor_info_pred_marker_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (hlds__hlds_markers____Unify____pred_marker_0_0_10001)),
  ((MR_Box) (hlds__hlds_markers____Compare____pred_marker_0_0_10001)),
  (MR_String) "hlds.hlds_markers",
  (MR_String) "pred_marker",
  { hlds__hlds_markers__hlds__hlds_markers__enum_name_ordered_pred_marker_0 },
  { hlds__hlds_markers__hlds__hlds_markers__enum_ordinal_ordered_pred_marker_0 },
  (MR_Integer) 31,
  UINT16_C(12),
  hlds__hlds_markers__hlds__hlds_markers__functor_number_map_pred_marker_0,

};

static const MR_FA_TypeInfo_Struct1 hlds__hlds_markers__set_ordlist__ti_set_ordlist_1hlds__hlds_markers__type_ctor_info_pred_marker_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  { (MR_TypeInfo) (&hlds__hlds_markers__hlds__hlds_markers__type_ctor_info_pred_marker_0) }
};

const MR_TypeCtorInfo_Struct hlds__hlds_markers__hlds__hlds_markers__type_ctor_info_pred_markers_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (hlds__hlds_markers____Unify____pred_markers_0_0_10001)),
  ((MR_Box) (hlds__hlds_markers____Compare____pred_markers_0_0_10001)),
  (MR_String) "hlds.hlds_markers",
  (MR_String) "pred_markers",
  { NULL },
  { (MR_PseudoTypeInfo) (&hlds__hlds_markers__set_ordlist__ti_set_ordlist_1hlds__hlds_markers__type_ctor_info_pred_marker_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

void MR_CALL 
hlds__hlds_markers____Compare____pred_markers_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_markers_scalar_common_1[0]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

MR_bool MR_CALL 
hlds__hlds_markers____Unify____pred_markers_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&hlds__hlds_markers_scalar_common_1[0]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

void MR_CALL 
hlds__hlds_markers____Compare____pred_marker_0_0(
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
hlds__hlds_markers____Unify____pred_marker_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
hlds__hlds_markers____Compare____goal_feature_0_0(
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
hlds__hlds_markers____Unify____goal_feature_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
hlds__hlds_markers__purity_to_markers_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  switch (HeadVar__1_1) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 2:
      *HeadVar__2_2 = (MR_Word) (MR_mkword(1, &hlds__hlds_markers_scalar_common_1[1]));
      break;
    case (MR_Integer) 0:
      *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
      break;
    case (MR_Integer) 1:
      *HeadVar__2_2 = (MR_Word) (MR_mkword(1, &hlds__hlds_markers_scalar_common_1[2]));
      break;
  }
}

void MR_CALL 
hlds__hlds_markers__marker_list_to_markers_2_p_0(
  MR_Word Markers_3,
  MR_Word * MarkerSet_4)
{
  mercury__set__list_to_set_2_p_0((MR_Word) (&hlds__hlds_markers__hlds__hlds_markers__type_ctor_info_pred_marker_0), Markers_3, MarkerSet_4);
}

void MR_CALL 
hlds__hlds_markers__markers_to_marker_list_2_p_0(
  MR_Word MarkerSet_3,
  MR_Word * Markers_4)
{
  mercury__set__to_sorted_list_2_p_0((MR_Word) (&hlds__hlds_markers__hlds__hlds_markers__type_ctor_info_pred_marker_0), MarkerSet_3, Markers_4);
}

void MR_CALL 
hlds__hlds_markers__remove_marker_3_p_0(
  MR_Word Marker_4,
  MR_Word STATE_VARIABLE_MarkerSet_0_6,
  MR_Word * STATE_VARIABLE_MarkerSet_7)
{
  mercury__set__delete_3_p_0((MR_Word) (&hlds__hlds_markers__hlds__hlds_markers__type_ctor_info_pred_marker_0), ((MR_Box) (Marker_4)), STATE_VARIABLE_MarkerSet_0_6, STATE_VARIABLE_MarkerSet_7);
}

void MR_CALL 
hlds__hlds_markers__add_markers_3_p_0(
  MR_Word Markers_4,
  MR_Word STATE_VARIABLE_MarkerSet_0_6,
  MR_Word * STATE_VARIABLE_MarkerSet_7)
{
  mercury__set__insert_list_3_p_0((MR_Word) (&hlds__hlds_markers__hlds__hlds_markers__type_ctor_info_pred_marker_0), Markers_4, STATE_VARIABLE_MarkerSet_0_6, STATE_VARIABLE_MarkerSet_7);
}

void MR_CALL 
hlds__hlds_markers__add_marker_3_p_0(
  MR_Word Marker_4,
  MR_Word STATE_VARIABLE_MarkerSet_0_6,
  MR_Word * STATE_VARIABLE_MarkerSet_7)
{
  mercury__set__insert_3_p_0((MR_Word) (&hlds__hlds_markers__hlds__hlds_markers__type_ctor_info_pred_marker_0), ((MR_Box) (Marker_4)), STATE_VARIABLE_MarkerSet_0_6, STATE_VARIABLE_MarkerSet_7);
}

MR_bool MR_CALL 
hlds__hlds_markers__marker_is_present_2_p_0(
  MR_Word MarkerSet_3,
  MR_Word Marker_4)
{
  MR_bool succeeded;

  succeeded = mercury__set__member_2_p_0((MR_Word) (&hlds__hlds_markers__hlds__hlds_markers__type_ctor_info_pred_marker_0), ((MR_Box) (Marker_4)), MarkerSet_3);
  return succeeded;
}

void MR_CALL 
hlds__hlds_markers__init_markers_1_p_0(
  MR_Word * HeadVar__1_1)
{
  *HeadVar__1_1 = mercury__set__init_0_f_0((MR_Word) (&hlds__hlds_markers__hlds__hlds_markers__type_ctor_info_pred_marker_0));
}

void MR_CALL 
hlds__hlds_markers__marker_name_2_p_0(
  MR_Word HeadVar__1_1,
  MR_String * HeadVar__2_2)
{
  *HeadVar__2_2 = ((&hlds__hlds_markers_vector_common_2[0 + HeadVar__1_1]))->hlds__hlds_markers__vector_common_type_2_0__vct_2_f_0;
}

static MR_bool MR_CALL 
hlds__hlds_markers____Unify____goal_feature_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__hlds_markers____Unify____goal_feature_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__hlds_markers____Compare____goal_feature_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__hlds_markers____Compare____goal_feature_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
hlds__hlds_markers____Unify____pred_marker_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__hlds_markers____Unify____pred_marker_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__hlds_markers____Compare____pred_marker_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__hlds_markers____Compare____pred_marker_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
hlds__hlds_markers____Unify____pred_markers_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__hlds_markers____Unify____pred_markers_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__hlds_markers____Compare____pred_markers_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__hlds_markers____Compare____pred_markers_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__hlds__hlds_markers__init(void)
{
}

void mercury__hlds__hlds_markers__init_type_tables(void)
{
  static MR_bool initialised = MR_FALSE;
  if (initialised) return;
  initialised = MR_TRUE;

  MR_register_type_ctor_info(&hlds__hlds_markers__hlds__hlds_markers__type_ctor_info_goal_feature_0);
  MR_register_type_ctor_info(&hlds__hlds_markers__hlds__hlds_markers__type_ctor_info_pred_marker_0);
  MR_register_type_ctor_info(&hlds__hlds_markers__hlds__hlds_markers__type_ctor_info_pred_markers_0);
}

void mercury__hlds__hlds_markers__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__hlds__hlds_markers__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module hlds.hlds_markers.
