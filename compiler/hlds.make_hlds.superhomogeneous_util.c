/*
** Automatically generated from `superhomogeneous_util.m'
** by the Mercury compiler,
** version rotd-2025-09-08
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


// :- module hlds.make_hlds.superhomogeneous_util.
// :- implementation.

/*
INIT mercury__hlds__make_hlds__superhomogeneous_util__init
ENDINIT
*/

#include "hlds.make_hlds.superhomogeneous_util.mih"


#include "analysis.mih"
#include "array.mih"
#include "assoc_list.mih"
#include "bimap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "check_hlds.mih"
#include "cord.mih"
#include "enum.mih"
#include "hlds.mih"
#include "integer.mih"
#include "libs.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "one_or_more.mih"
#include "one_or_more_map.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "require.mih"
#include "robdd.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "sparse_bitset.mih"
#include "stack.mih"
#include "term.mih"
#include "term_context.mih"
#include "transform_hlds.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "analysis.framework.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "hlds.goal_mode.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_cons.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_markers.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_promise.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.make_hlds.mih"
#include "hlds.pred_name.mih"
#include "hlds.pred_table.mih"
#include "hlds.status.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.polyhedron.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_db.mih"
#include "parse_tree.var_table.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"
#include "hlds.make_hlds.goal_expr_to_goal.mih"
#include "hlds.make_hlds.qual_info.mih"
#include "hlds.make_hlds.state_var.mih"




static const MR_PseudoTypeInfo hlds__make_hlds__superhomogeneous_util__hlds__make_hlds__superhomogeneous_util__field_types_arg_context_0_0[2];

static const MR_DuArgLocn hlds__make_hlds__superhomogeneous_util__hlds__make_hlds__superhomogeneous_util__field_locns_arg_context_0_0[2];

static const MR_DuFunctorDesc hlds__make_hlds__superhomogeneous_util__hlds__make_hlds__superhomogeneous_util__du_functor_desc_arg_context_0_0;

static const MR_PseudoTypeInfo hlds__make_hlds__superhomogeneous_util__hlds__make_hlds__superhomogeneous_util__field_types_arg_context_0_1[1];

static const MR_DuFunctorDesc hlds__make_hlds__superhomogeneous_util__hlds__make_hlds__superhomogeneous_util__du_functor_desc_arg_context_0_1;

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__superhomogeneous_util__list__ti_list_1hlds__hlds_goal__type_ctor_info_unify_sub_context_0;

static const MR_PseudoTypeInfo hlds__make_hlds__superhomogeneous_util__hlds__make_hlds__superhomogeneous_util__field_types_arg_context_0_2[3];

static const MR_DuFunctorDesc hlds__make_hlds__superhomogeneous_util__hlds__make_hlds__superhomogeneous_util__du_functor_desc_arg_context_0_2;

static const MR_DuFunctorDescPtr hlds__make_hlds__superhomogeneous_util__hlds__make_hlds__superhomogeneous_util__du_stag_ordered_arg_context_0_0[1];

static const MR_DuFunctorDescPtr hlds__make_hlds__superhomogeneous_util__hlds__make_hlds__superhomogeneous_util__du_stag_ordered_arg_context_0_1[1];

static const MR_DuFunctorDescPtr hlds__make_hlds__superhomogeneous_util__hlds__make_hlds__superhomogeneous_util__du_stag_ordered_arg_context_0_2[1];

static const MR_DuPtagLayout hlds__make_hlds__superhomogeneous_util__hlds__make_hlds__superhomogeneous_util__du_ptag_ordered_arg_context_0[3];

static const MR_DuFunctorDescPtr hlds__make_hlds__superhomogeneous_util__hlds__make_hlds__superhomogeneous_util__du_name_ordered_arg_context_0[3];

static const MR_Integer hlds__make_hlds__superhomogeneous_util__hlds__make_hlds__superhomogeneous_util__functor_number_map_arg_context_0[3];

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__superhomogeneous_util__cord__ti_cord_1hlds__hlds_goal__type_ctor_info_hlds_goal_0;

static const MR_PseudoTypeInfo hlds__make_hlds__superhomogeneous_util__hlds__make_hlds__superhomogeneous_util__field_types_expansion_0_0[2];

static const MR_DuFunctorDesc hlds__make_hlds__superhomogeneous_util__hlds__make_hlds__superhomogeneous_util__du_functor_desc_expansion_0_0;

static const MR_DuFunctorDescPtr hlds__make_hlds__superhomogeneous_util__hlds__make_hlds__superhomogeneous_util__du_stag_ordered_expansion_0_0[1];

static const MR_DuPtagLayout hlds__make_hlds__superhomogeneous_util__hlds__make_hlds__superhomogeneous_util__du_ptag_ordered_expansion_0[1];

static const MR_DuFunctorDescPtr hlds__make_hlds__superhomogeneous_util__hlds__make_hlds__superhomogeneous_util__du_name_ordered_expansion_0[1];

static const MR_Integer hlds__make_hlds__superhomogeneous_util__hlds__make_hlds__superhomogeneous_util__functor_number_map_expansion_0[1];

static const MR_DuFunctorDesc hlds__make_hlds__superhomogeneous_util__hlds__make_hlds__superhomogeneous_util__du_functor_desc_maybe_fgti_var_size_0_0;

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__superhomogeneous_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_PseudoTypeInfo hlds__make_hlds__superhomogeneous_util__hlds__make_hlds__superhomogeneous_util__field_types_maybe_fgti_var_size_0_1[2];

static const MR_DuFunctorDesc hlds__make_hlds__superhomogeneous_util__hlds__make_hlds__superhomogeneous_util__du_functor_desc_maybe_fgti_var_size_0_1;

static const MR_DuFunctorDescPtr hlds__make_hlds__superhomogeneous_util__hlds__make_hlds__superhomogeneous_util__du_stag_ordered_maybe_fgti_var_size_0_0[1];

static const MR_DuFunctorDescPtr hlds__make_hlds__superhomogeneous_util__hlds__make_hlds__superhomogeneous_util__du_stag_ordered_maybe_fgti_var_size_0_1[1];

static const MR_DuPtagLayout hlds__make_hlds__superhomogeneous_util__hlds__make_hlds__superhomogeneous_util__du_ptag_ordered_maybe_fgti_var_size_0[2];

static const MR_DuFunctorDescPtr hlds__make_hlds__superhomogeneous_util__hlds__make_hlds__superhomogeneous_util__du_name_ordered_maybe_fgti_var_size_0[2];

static const MR_Integer hlds__make_hlds__superhomogeneous_util__hlds__make_hlds__superhomogeneous_util__functor_number_map_maybe_fgti_var_size_0[2];

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__superhomogeneous_util__term__ti_term_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_PseudoTypeInfo hlds__make_hlds__superhomogeneous_util__hlds__make_hlds__superhomogeneous_util__field_types_unify_var_term_0_0[2];

static const MR_DuFunctorDesc hlds__make_hlds__superhomogeneous_util__hlds__make_hlds__superhomogeneous_util__du_functor_desc_unify_var_term_0_0;

static const MR_DuFunctorDescPtr hlds__make_hlds__superhomogeneous_util__hlds__make_hlds__superhomogeneous_util__du_stag_ordered_unify_var_term_0_0[1];

static const MR_DuPtagLayout hlds__make_hlds__superhomogeneous_util__hlds__make_hlds__superhomogeneous_util__du_ptag_ordered_unify_var_term_0[1];

static const MR_DuFunctorDescPtr hlds__make_hlds__superhomogeneous_util__hlds__make_hlds__superhomogeneous_util__du_name_ordered_unify_var_term_0[1];

static const MR_Integer hlds__make_hlds__superhomogeneous_util__hlds__make_hlds__superhomogeneous_util__functor_number_map_unify_var_term_0[1];

static const MR_PseudoTypeInfo hlds__make_hlds__superhomogeneous_util__hlds__make_hlds__superhomogeneous_util__field_types_unify_var_term_num_context_0_0[4];

static const MR_DuFunctorDesc hlds__make_hlds__superhomogeneous_util__hlds__make_hlds__superhomogeneous_util__du_functor_desc_unify_var_term_num_context_0_0;

static const MR_DuFunctorDescPtr hlds__make_hlds__superhomogeneous_util__hlds__make_hlds__superhomogeneous_util__du_stag_ordered_unify_var_term_num_context_0_0[1];

static const MR_DuPtagLayout hlds__make_hlds__superhomogeneous_util__hlds__make_hlds__superhomogeneous_util__du_ptag_ordered_unify_var_term_num_context_0[1];

static const MR_DuFunctorDescPtr hlds__make_hlds__superhomogeneous_util__hlds__make_hlds__superhomogeneous_util__du_name_ordered_unify_var_term_num_context_0[1];

static const MR_Integer hlds__make_hlds__superhomogeneous_util__hlds__make_hlds__superhomogeneous_util__functor_number_map_unify_var_term_num_context_0[1];

static void MR_CALL 
hlds__make_hlds__superhomogeneous_util__make_fresh_arg_vars_subst_svars_loop_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_RevVarsArgs_0_3,
  MR_Word * STATE_VARIABLE_RevVarsArgs_4,
  MR_Word STATE_VARIABLE_SVarState_0_5,
  MR_Word * STATE_VARIABLE_SVarState_6,
  MR_Word STATE_VARIABLE_UrInfo_0_7,
  MR_Word * STATE_VARIABLE_UrInfo_8);

static MR_bool MR_CALL 
hlds__make_hlds__superhomogeneous_util__have_seen_arg_var_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word ArgVar_5);

static MR_bool MR_CALL 
hlds__make_hlds__superhomogeneous_util____Unify____arg_context_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__make_hlds__superhomogeneous_util____Compare____arg_context_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__make_hlds__superhomogeneous_util____Unify____expansion_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__make_hlds__superhomogeneous_util____Compare____expansion_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__make_hlds__superhomogeneous_util____Unify____maybe_fgti_var_size_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__make_hlds__superhomogeneous_util____Compare____maybe_fgti_var_size_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__make_hlds__superhomogeneous_util____Unify____unify_var_term_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__make_hlds__superhomogeneous_util____Compare____unify_var_term_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__make_hlds__superhomogeneous_util____Unify____unify_var_term_num_context_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__make_hlds__superhomogeneous_util____Compare____unify_var_term_num_context_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box hlds__make_hlds__superhomogeneous_util_scalar_common_1[4][2];




static /* final */ const MR_Box hlds__make_hlds__superhomogeneous_util_scalar_common_1[4][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_unify_sub_context_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_term_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};



#include "array.mh"


static const MR_PseudoTypeInfo hlds__make_hlds__superhomogeneous_util__hlds__make_hlds__superhomogeneous_util__field_types_arg_context_0_0[2] = {
  (MR_PseudoTypeInfo) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_pred_or_func_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_pred_form_arity_0)
};

static const MR_DuArgLocn hlds__make_hlds__superhomogeneous_util__hlds__make_hlds__superhomogeneous_util__field_locns_arg_context_0_0[2] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 0
  }
};

static const MR_DuFunctorDesc hlds__make_hlds__superhomogeneous_util__hlds__make_hlds__superhomogeneous_util__du_functor_desc_arg_context_0_0 = {
  (MR_String) "ac_head",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  hlds__make_hlds__superhomogeneous_util__hlds__make_hlds__superhomogeneous_util__field_types_arg_context_0_0,
  NULL,
  hlds__make_hlds__superhomogeneous_util__hlds__make_hlds__superhomogeneous_util__field_locns_arg_context_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo hlds__make_hlds__superhomogeneous_util__hlds__make_hlds__superhomogeneous_util__field_types_arg_context_0_1[1] = { (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_call_id_0) };

static const MR_DuFunctorDesc hlds__make_hlds__superhomogeneous_util__hlds__make_hlds__superhomogeneous_util__du_functor_desc_arg_context_0_1 = {
  (MR_String) "ac_call",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  hlds__make_hlds__superhomogeneous_util__hlds__make_hlds__superhomogeneous_util__field_types_arg_context_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__superhomogeneous_util__list__ti_list_1hlds__hlds_goal__type_ctor_info_unify_sub_context_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_unify_sub_context_0) }
};

static const MR_PseudoTypeInfo hlds__make_hlds__superhomogeneous_util__hlds__make_hlds__superhomogeneous_util__field_types_arg_context_0_2[3] = {
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_unify_main_context_0),
  (MR_PseudoTypeInfo) (&hlds__make_hlds__superhomogeneous_util__list__ti_list_1hlds__hlds_goal__type_ctor_info_unify_sub_context_0)
};

static const MR_DuFunctorDesc hlds__make_hlds__superhomogeneous_util__hlds__make_hlds__superhomogeneous_util__du_functor_desc_arg_context_0_2 = {
  (MR_String) "ac_functor",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(2),
  (MR_Integer) -1,
  INT32_C(2),
  hlds__make_hlds__superhomogeneous_util__hlds__make_hlds__superhomogeneous_util__field_types_arg_context_0_2,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr hlds__make_hlds__superhomogeneous_util__hlds__make_hlds__superhomogeneous_util__du_stag_ordered_arg_context_0_0[1] = { &hlds__make_hlds__superhomogeneous_util__hlds__make_hlds__superhomogeneous_util__du_functor_desc_arg_context_0_0 };

static const MR_DuFunctorDescPtr hlds__make_hlds__superhomogeneous_util__hlds__make_hlds__superhomogeneous_util__du_stag_ordered_arg_context_0_1[1] = { &hlds__make_hlds__superhomogeneous_util__hlds__make_hlds__superhomogeneous_util__du_functor_desc_arg_context_0_1 };

static const MR_DuFunctorDescPtr hlds__make_hlds__superhomogeneous_util__hlds__make_hlds__superhomogeneous_util__du_stag_ordered_arg_context_0_2[1] = { &hlds__make_hlds__superhomogeneous_util__hlds__make_hlds__superhomogeneous_util__du_functor_desc_arg_context_0_2 };

static const MR_DuPtagLayout hlds__make_hlds__superhomogeneous_util__hlds__make_hlds__superhomogeneous_util__du_ptag_ordered_arg_context_0[3] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__make_hlds__superhomogeneous_util__hlds__make_hlds__superhomogeneous_util__du_stag_ordered_arg_context_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__make_hlds__superhomogeneous_util__hlds__make_hlds__superhomogeneous_util__du_stag_ordered_arg_context_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__make_hlds__superhomogeneous_util__hlds__make_hlds__superhomogeneous_util__du_stag_ordered_arg_context_0_2,
    INT8_C(-1),
    UINT8_C(2),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr hlds__make_hlds__superhomogeneous_util__hlds__make_hlds__superhomogeneous_util__du_name_ordered_arg_context_0[3] = {
  &hlds__make_hlds__superhomogeneous_util__hlds__make_hlds__superhomogeneous_util__du_functor_desc_arg_context_0_1,
  &hlds__make_hlds__superhomogeneous_util__hlds__make_hlds__superhomogeneous_util__du_functor_desc_arg_context_0_2,
  &hlds__make_hlds__superhomogeneous_util__hlds__make_hlds__superhomogeneous_util__du_functor_desc_arg_context_0_0
};

static const MR_Integer hlds__make_hlds__superhomogeneous_util__hlds__make_hlds__superhomogeneous_util__functor_number_map_arg_context_0[3] = {
  (MR_Integer) 2,
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct hlds__make_hlds__superhomogeneous_util__hlds__make_hlds__superhomogeneous_util__type_ctor_info_arg_context_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(3),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__make_hlds__superhomogeneous_util____Unify____arg_context_0_0_10001)),
  ((MR_Box) (hlds__make_hlds__superhomogeneous_util____Compare____arg_context_0_0_10001)),
  (MR_String) "hlds.make_hlds.superhomogeneous_util",
  (MR_String) "arg_context",
  { hlds__make_hlds__superhomogeneous_util__hlds__make_hlds__superhomogeneous_util__du_name_ordered_arg_context_0 },
  { hlds__make_hlds__superhomogeneous_util__hlds__make_hlds__superhomogeneous_util__du_ptag_ordered_arg_context_0 },
  (MR_Integer) 3,
  UINT16_C(12),
  hlds__make_hlds__superhomogeneous_util__hlds__make_hlds__superhomogeneous_util__functor_number_map_arg_context_0,

};

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__superhomogeneous_util__cord__ti_cord_1hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  { (MR_TypeInfo) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0) }
};

static const MR_PseudoTypeInfo hlds__make_hlds__superhomogeneous_util__hlds__make_hlds__superhomogeneous_util__field_types_expansion_0_0[2] = {
  (MR_PseudoTypeInfo) (&hlds__make_hlds__superhomogeneous_util__hlds__make_hlds__superhomogeneous_util__type_ctor_info_maybe_fgti_var_size_0),
  (MR_PseudoTypeInfo) (&hlds__make_hlds__superhomogeneous_util__cord__ti_cord_1hlds__hlds_goal__type_ctor_info_hlds_goal_0)
};

static const MR_DuFunctorDesc hlds__make_hlds__superhomogeneous_util__hlds__make_hlds__superhomogeneous_util__du_functor_desc_expansion_0_0 = {
  (MR_String) "expansion",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  hlds__make_hlds__superhomogeneous_util__hlds__make_hlds__superhomogeneous_util__field_types_expansion_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr hlds__make_hlds__superhomogeneous_util__hlds__make_hlds__superhomogeneous_util__du_stag_ordered_expansion_0_0[1] = { &hlds__make_hlds__superhomogeneous_util__hlds__make_hlds__superhomogeneous_util__du_functor_desc_expansion_0_0 };

static const MR_DuPtagLayout hlds__make_hlds__superhomogeneous_util__hlds__make_hlds__superhomogeneous_util__du_ptag_ordered_expansion_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__make_hlds__superhomogeneous_util__hlds__make_hlds__superhomogeneous_util__du_stag_ordered_expansion_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr hlds__make_hlds__superhomogeneous_util__hlds__make_hlds__superhomogeneous_util__du_name_ordered_expansion_0[1] = { &hlds__make_hlds__superhomogeneous_util__hlds__make_hlds__superhomogeneous_util__du_functor_desc_expansion_0_0 };

static const MR_Integer hlds__make_hlds__superhomogeneous_util__hlds__make_hlds__superhomogeneous_util__functor_number_map_expansion_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct hlds__make_hlds__superhomogeneous_util__hlds__make_hlds__superhomogeneous_util__type_ctor_info_expansion_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__make_hlds__superhomogeneous_util____Unify____expansion_0_0_10001)),
  ((MR_Box) (hlds__make_hlds__superhomogeneous_util____Compare____expansion_0_0_10001)),
  (MR_String) "hlds.make_hlds.superhomogeneous_util",
  (MR_String) "expansion",
  { hlds__make_hlds__superhomogeneous_util__hlds__make_hlds__superhomogeneous_util__du_name_ordered_expansion_0 },
  { hlds__make_hlds__superhomogeneous_util__hlds__make_hlds__superhomogeneous_util__du_ptag_ordered_expansion_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  hlds__make_hlds__superhomogeneous_util__hlds__make_hlds__superhomogeneous_util__functor_number_map_expansion_0,

};

static const MR_DuFunctorDesc hlds__make_hlds__superhomogeneous_util__hlds__make_hlds__superhomogeneous_util__du_functor_desc_maybe_fgti_var_size_0_0 = {
  (MR_String) "not_fgti",
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

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__superhomogeneous_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_PseudoTypeInfo hlds__make_hlds__superhomogeneous_util__hlds__make_hlds__superhomogeneous_util__field_types_maybe_fgti_var_size_0_1[2] = {
  (MR_PseudoTypeInfo) (&hlds__make_hlds__superhomogeneous_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_DuFunctorDesc hlds__make_hlds__superhomogeneous_util__hlds__make_hlds__superhomogeneous_util__du_functor_desc_maybe_fgti_var_size_0_1 = {
  (MR_String) "fgti_var_size",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  hlds__make_hlds__superhomogeneous_util__hlds__make_hlds__superhomogeneous_util__field_types_maybe_fgti_var_size_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr hlds__make_hlds__superhomogeneous_util__hlds__make_hlds__superhomogeneous_util__du_stag_ordered_maybe_fgti_var_size_0_0[1] = { &hlds__make_hlds__superhomogeneous_util__hlds__make_hlds__superhomogeneous_util__du_functor_desc_maybe_fgti_var_size_0_0 };

static const MR_DuFunctorDescPtr hlds__make_hlds__superhomogeneous_util__hlds__make_hlds__superhomogeneous_util__du_stag_ordered_maybe_fgti_var_size_0_1[1] = { &hlds__make_hlds__superhomogeneous_util__hlds__make_hlds__superhomogeneous_util__du_functor_desc_maybe_fgti_var_size_0_1 };

static const MR_DuPtagLayout hlds__make_hlds__superhomogeneous_util__hlds__make_hlds__superhomogeneous_util__du_ptag_ordered_maybe_fgti_var_size_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    hlds__make_hlds__superhomogeneous_util__hlds__make_hlds__superhomogeneous_util__du_stag_ordered_maybe_fgti_var_size_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__make_hlds__superhomogeneous_util__hlds__make_hlds__superhomogeneous_util__du_stag_ordered_maybe_fgti_var_size_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr hlds__make_hlds__superhomogeneous_util__hlds__make_hlds__superhomogeneous_util__du_name_ordered_maybe_fgti_var_size_0[2] = {
  &hlds__make_hlds__superhomogeneous_util__hlds__make_hlds__superhomogeneous_util__du_functor_desc_maybe_fgti_var_size_0_1,
  &hlds__make_hlds__superhomogeneous_util__hlds__make_hlds__superhomogeneous_util__du_functor_desc_maybe_fgti_var_size_0_0
};

static const MR_Integer hlds__make_hlds__superhomogeneous_util__hlds__make_hlds__superhomogeneous_util__functor_number_map_maybe_fgti_var_size_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct hlds__make_hlds__superhomogeneous_util__hlds__make_hlds__superhomogeneous_util__type_ctor_info_maybe_fgti_var_size_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__make_hlds__superhomogeneous_util____Unify____maybe_fgti_var_size_0_0_10001)),
  ((MR_Box) (hlds__make_hlds__superhomogeneous_util____Compare____maybe_fgti_var_size_0_0_10001)),
  (MR_String) "hlds.make_hlds.superhomogeneous_util",
  (MR_String) "maybe_fgti_var_size",
  { hlds__make_hlds__superhomogeneous_util__hlds__make_hlds__superhomogeneous_util__du_name_ordered_maybe_fgti_var_size_0 },
  { hlds__make_hlds__superhomogeneous_util__hlds__make_hlds__superhomogeneous_util__du_ptag_ordered_maybe_fgti_var_size_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  hlds__make_hlds__superhomogeneous_util__hlds__make_hlds__superhomogeneous_util__functor_number_map_maybe_fgti_var_size_0,

};

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__superhomogeneous_util__term__ti_term_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_term_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_PseudoTypeInfo hlds__make_hlds__superhomogeneous_util__hlds__make_hlds__superhomogeneous_util__field_types_unify_var_term_0_0[2] = {
  (MR_PseudoTypeInfo) (&hlds__make_hlds__superhomogeneous_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&hlds__make_hlds__superhomogeneous_util__term__ti_term_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
};

static const MR_DuFunctorDesc hlds__make_hlds__superhomogeneous_util__hlds__make_hlds__superhomogeneous_util__du_functor_desc_unify_var_term_0_0 = {
  (MR_String) "unify_var_term",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  hlds__make_hlds__superhomogeneous_util__hlds__make_hlds__superhomogeneous_util__field_types_unify_var_term_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr hlds__make_hlds__superhomogeneous_util__hlds__make_hlds__superhomogeneous_util__du_stag_ordered_unify_var_term_0_0[1] = { &hlds__make_hlds__superhomogeneous_util__hlds__make_hlds__superhomogeneous_util__du_functor_desc_unify_var_term_0_0 };

static const MR_DuPtagLayout hlds__make_hlds__superhomogeneous_util__hlds__make_hlds__superhomogeneous_util__du_ptag_ordered_unify_var_term_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__make_hlds__superhomogeneous_util__hlds__make_hlds__superhomogeneous_util__du_stag_ordered_unify_var_term_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr hlds__make_hlds__superhomogeneous_util__hlds__make_hlds__superhomogeneous_util__du_name_ordered_unify_var_term_0[1] = { &hlds__make_hlds__superhomogeneous_util__hlds__make_hlds__superhomogeneous_util__du_functor_desc_unify_var_term_0_0 };

static const MR_Integer hlds__make_hlds__superhomogeneous_util__hlds__make_hlds__superhomogeneous_util__functor_number_map_unify_var_term_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct hlds__make_hlds__superhomogeneous_util__hlds__make_hlds__superhomogeneous_util__type_ctor_info_unify_var_term_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__make_hlds__superhomogeneous_util____Unify____unify_var_term_0_0_10001)),
  ((MR_Box) (hlds__make_hlds__superhomogeneous_util____Compare____unify_var_term_0_0_10001)),
  (MR_String) "hlds.make_hlds.superhomogeneous_util",
  (MR_String) "unify_var_term",
  { hlds__make_hlds__superhomogeneous_util__hlds__make_hlds__superhomogeneous_util__du_name_ordered_unify_var_term_0 },
  { hlds__make_hlds__superhomogeneous_util__hlds__make_hlds__superhomogeneous_util__du_ptag_ordered_unify_var_term_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  hlds__make_hlds__superhomogeneous_util__hlds__make_hlds__superhomogeneous_util__functor_number_map_unify_var_term_0,

};

static const MR_PseudoTypeInfo hlds__make_hlds__superhomogeneous_util__hlds__make_hlds__superhomogeneous_util__field_types_unify_var_term_num_context_0_0[4] = {
  (MR_PseudoTypeInfo) (&hlds__make_hlds__superhomogeneous_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&hlds__make_hlds__superhomogeneous_util__term__ti_term_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&hlds__make_hlds__superhomogeneous_util__hlds__make_hlds__superhomogeneous_util__type_ctor_info_arg_context_0)
};

static const MR_DuFunctorDesc hlds__make_hlds__superhomogeneous_util__hlds__make_hlds__superhomogeneous_util__du_functor_desc_unify_var_term_num_context_0_0 = {
  (MR_String) "unify_var_term_num_context",
  INT16_C(4),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  hlds__make_hlds__superhomogeneous_util__hlds__make_hlds__superhomogeneous_util__field_types_unify_var_term_num_context_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr hlds__make_hlds__superhomogeneous_util__hlds__make_hlds__superhomogeneous_util__du_stag_ordered_unify_var_term_num_context_0_0[1] = { &hlds__make_hlds__superhomogeneous_util__hlds__make_hlds__superhomogeneous_util__du_functor_desc_unify_var_term_num_context_0_0 };

static const MR_DuPtagLayout hlds__make_hlds__superhomogeneous_util__hlds__make_hlds__superhomogeneous_util__du_ptag_ordered_unify_var_term_num_context_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__make_hlds__superhomogeneous_util__hlds__make_hlds__superhomogeneous_util__du_stag_ordered_unify_var_term_num_context_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr hlds__make_hlds__superhomogeneous_util__hlds__make_hlds__superhomogeneous_util__du_name_ordered_unify_var_term_num_context_0[1] = { &hlds__make_hlds__superhomogeneous_util__hlds__make_hlds__superhomogeneous_util__du_functor_desc_unify_var_term_num_context_0_0 };

static const MR_Integer hlds__make_hlds__superhomogeneous_util__hlds__make_hlds__superhomogeneous_util__functor_number_map_unify_var_term_num_context_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct hlds__make_hlds__superhomogeneous_util__hlds__make_hlds__superhomogeneous_util__type_ctor_info_unify_var_term_num_context_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__make_hlds__superhomogeneous_util____Unify____unify_var_term_num_context_0_0_10001)),
  ((MR_Box) (hlds__make_hlds__superhomogeneous_util____Compare____unify_var_term_num_context_0_0_10001)),
  (MR_String) "hlds.make_hlds.superhomogeneous_util",
  (MR_String) "unify_var_term_num_context",
  { hlds__make_hlds__superhomogeneous_util__hlds__make_hlds__superhomogeneous_util__du_name_ordered_unify_var_term_num_context_0 },
  { hlds__make_hlds__superhomogeneous_util__hlds__make_hlds__superhomogeneous_util__du_ptag_ordered_unify_var_term_num_context_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  hlds__make_hlds__superhomogeneous_util__hlds__make_hlds__superhomogeneous_util__functor_number_map_unify_var_term_num_context_0,

};

void MR_CALL 
hlds__make_hlds__superhomogeneous_util____Compare____unify_var_term_num_context_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_15 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_16 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_15 == CastY_16);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 1))));
    MR_Integer ArgX3_10 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Integer ArgY3_11 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, 2))));
    MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 3))));
    MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 3))));
    MR_Word SubResult1_6;

    mercury__builtin__compare_3_p_0((MR_Word) (&hlds__make_hlds__superhomogeneous_util_scalar_common_1[0]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      mercury__builtin__compare_3_p_0((MR_Word) (&hlds__make_hlds__superhomogeneous_util_scalar_common_1[3]), &SubResult2_9, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word SubResult3_12;

        succeeded = (ArgX3_10 < ArgY3_11);
        if (succeeded)
        {
          SubResult3_12 = (MR_Integer) 1;
          succeeded = MR_TRUE;
        }
        else
        {
          succeeded = (ArgX3_10 > ArgY3_11);
          if (succeeded)
          {
            SubResult3_12 = (MR_Integer) 2;
            succeeded = MR_TRUE;
          }
          else
          {
            succeeded = MR_TRUE;
            succeeded = !(succeeded);
            if (succeeded)
            {
              SubResult3_12 = (MR_Integer) 0;
              succeeded = MR_TRUE;
            }
          }
        }
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
          hlds__make_hlds__superhomogeneous_util____Compare____arg_context_0_0(HeadVar__1_1, ArgX4_13, ArgY4_14);
      }
    }
  }
}

MR_bool MR_CALL 
hlds__make_hlds__superhomogeneous_util____Unify____unify_var_term_num_context_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_11 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_12 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_11 == CastY_12);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word TypeInfo_14_14;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Integer ArgX3_7 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, 2))));
    MR_Integer ArgY3_8 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 3))));
    MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 3))));

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&hlds__make_hlds__superhomogeneous_util_scalar_common_1[0]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
    if (succeeded)
    {
      TypeInfo_14_14 = (MR_Word) (&hlds__make_hlds__superhomogeneous_util_scalar_common_1[3]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_14_14, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
      if (succeeded)
      {
        succeeded = (ArgX3_7 == ArgY3_8);
        if (succeeded)
          succeeded = hlds__make_hlds__superhomogeneous_util____Unify____arg_context_0_0(ArgX4_9, ArgY4_10);
      }
    }
  }
  return succeeded;
}

void MR_CALL 
hlds__make_hlds__superhomogeneous_util____Compare____unify_var_term_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_9 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_10 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_9 == CastY_10);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 1))));
    MR_Word SubResult1_6;

    mercury__builtin__compare_3_p_0((MR_Word) (&hlds__make_hlds__superhomogeneous_util_scalar_common_1[0]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
      mercury__builtin__compare_3_p_0((MR_Word) (&hlds__make_hlds__superhomogeneous_util_scalar_common_1[3]), HeadVar__1_1, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
  }
}

MR_bool MR_CALL 
hlds__make_hlds__superhomogeneous_util____Unify____unify_var_term_0_0(
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
  {
    MR_Word TypeInfo_10_10;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&hlds__make_hlds__superhomogeneous_util_scalar_common_1[0]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
    if (succeeded)
    {
      TypeInfo_10_10 = (MR_Word) (&hlds__make_hlds__superhomogeneous_util_scalar_common_1[3]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_10_10, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
    }
  }
  return succeeded;
}

void MR_CALL 
hlds__make_hlds__superhomogeneous_util____Compare____expansion_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_9 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_10 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_9 == CastY_10);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 1))));
    MR_Word SubResult1_6;

    hlds__make_hlds__superhomogeneous_util____Compare____maybe_fgti_var_size_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
      mercury__builtin__compare_3_p_0((MR_Word) (&hlds__make_hlds__superhomogeneous_util_scalar_common_1[2]), HeadVar__1_1, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
  }
}

void MR_CALL 
hlds__make_hlds__superhomogeneous_util____Compare____maybe_fgti_var_size_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_9 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_10 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_9 == CastY_10);
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
    MR_Integer ArgX2_7 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, 1))));
    MR_Integer ArgY2_8 = ((MR_Integer) ((MR_hl_field(1, HeadVar__3_3, 1))));
    MR_Word SubResult1_6;

    mercury__builtin__compare_3_p_0((MR_Word) (&hlds__make_hlds__superhomogeneous_util_scalar_common_1[0]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      succeeded = (ArgX2_7 < ArgY2_8);
      if (succeeded)
        *HeadVar__1_1 = (MR_Integer) 1;
      else
      {
        succeeded = (ArgX2_7 > ArgY2_8);
        if (succeeded)
          *HeadVar__1_1 = (MR_Integer) 2;
        else
          *HeadVar__1_1 = (MR_Integer) 0;
      }
    }
  }
}

MR_bool MR_CALL 
hlds__make_hlds__superhomogeneous_util____Unify____expansion_0_0(
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
  {
    MR_Word TypeInfo_9_9;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));

    succeeded = hlds__make_hlds__superhomogeneous_util____Unify____maybe_fgti_var_size_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
    {
      TypeInfo_9_9 = (MR_Word) (&hlds__make_hlds__superhomogeneous_util_scalar_common_1[2]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_9_9, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
    }
  }
  return succeeded;
}

MR_bool MR_CALL 
hlds__make_hlds__superhomogeneous_util____Unify____maybe_fgti_var_size_0_0(
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
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastY_8 == CastX_7);
  }
  else
  {
    MR_Word TypeInfo_11_11;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_Word ArgY1_4;
    MR_Integer ArgX2_5 = ((MR_Integer) ((MR_hl_field(1, HeadVar__1_1, 1))));
    MR_Integer ArgY2_6;

    succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      ArgY1_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      ArgY2_6 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, 1))));
      TypeInfo_11_11 = (MR_Word) (&hlds__make_hlds__superhomogeneous_util_scalar_common_1[0]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_11_11, ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
      if (succeeded)
        succeeded = (ArgX2_5 == ArgY2_6);
    }
  }
  return succeeded;
}

void MR_CALL 
hlds__make_hlds__superhomogeneous_util____Compare____arg_context_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_19 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_20 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_19 == CastY_20);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
    switch (MR_tag((MR_Word) HeadVar__2_2)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_tag((MR_Word) HeadVar__3_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word ArgX1_4 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) & (MR_Integer) 1);
              MR_Word ArgY1_5 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 0))) & (MR_Integer) 1);
              MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
              MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 1))));
              MR_Word SubResult1_6;
              MR_Integer Var_27 = (MR_Integer) (ArgX1_4);
              MR_Integer Var_28 = (MR_Integer) (ArgY1_5);

              succeeded = (Var_27 < Var_28);
              if (succeeded)
              {
                SubResult1_6 = (MR_Integer) 1;
                succeeded = MR_TRUE;
              }
              else
              {
                succeeded = (Var_27 > Var_28);
                if (succeeded)
                {
                  SubResult1_6 = (MR_Integer) 2;
                  succeeded = MR_TRUE;
                }
                else
                {
                  succeeded = MR_TRUE;
                  succeeded = !(succeeded);
                  if (succeeded)
                  {
                    SubResult1_6 = (MR_Integer) 0;
                    succeeded = MR_TRUE;
                  }
                }
              }
              if (succeeded)
                *HeadVar__1_1 = SubResult1_6;
              else
              {
                MR_Integer Var_29 = (MR_Integer) (ArgX2_7);
                MR_Integer Var_30 = (MR_Integer) (ArgY2_8);

                succeeded = (Var_29 < Var_30);
                if (succeeded)
                  *HeadVar__1_1 = (MR_Integer) 1;
                else
                {
                  succeeded = (Var_29 > Var_30);
                  if (succeeded)
                    *HeadVar__1_1 = (MR_Integer) 2;
                  else
                    *HeadVar__1_1 = (MR_Integer) 0;
                }
              }
            }
            break;
          case (MR_Integer) 1:
          case (MR_Integer) 2:
            *HeadVar__1_1 = (MR_Integer) 1;
            break;
        }
        break;
      case (MR_Integer) 1:
        switch (MR_tag((MR_Word) HeadVar__3_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *HeadVar__1_1 = (MR_Integer) 2;
            break;
          case (MR_Integer) 1:
            {
              MR_Word ArgX1_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
              MR_Word ArgY1_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));

              hlds__hlds_pred____Compare____call_id_0_0(HeadVar__1_1, ArgX1_9, ArgY1_10);
            }
            break;
          case (MR_Integer) 2:
            *HeadVar__1_1 = (MR_Integer) 1;
            break;
        }
        break;
      case (MR_Integer) 2:
        switch (MR_tag((MR_Word) HeadVar__3_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
            *HeadVar__1_1 = (MR_Integer) 2;
            break;
          case (MR_Integer) 2:
            {
              MR_Word ArgX1_11 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, 0))));
              MR_Word ArgY1_12 = ((MR_Word) ((MR_hl_field(2, HeadVar__3_3, 0))));
              MR_Word ArgX2_14 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, 1))));
              MR_Word ArgY2_15 = ((MR_Word) ((MR_hl_field(2, HeadVar__3_3, 1))));
              MR_Word ArgX3_17 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, 2))));
              MR_Word ArgY3_18 = ((MR_Word) ((MR_hl_field(2, HeadVar__3_3, 2))));
              MR_Word SubResult1_13;

              parse_tree__prog_data____Compare____cons_id_0_0(&SubResult1_13, ArgX1_11, ArgY1_12);
              succeeded = (SubResult1_13 != (MR_Integer) 0);
              if (succeeded)
                *HeadVar__1_1 = SubResult1_13;
              else
              {
                MR_Word SubResult2_16;

                hlds__hlds_goal____Compare____unify_main_context_0_0(&SubResult2_16, ArgX2_14, ArgY2_15);
                succeeded = (SubResult2_16 != (MR_Integer) 0);
                if (succeeded)
                  *HeadVar__1_1 = SubResult2_16;
                else
                  mercury__builtin__compare_3_p_0((MR_Word) (&hlds__make_hlds__superhomogeneous_util_scalar_common_1[1]), HeadVar__1_1, ((MR_Box) (ArgX3_17)), ((MR_Box) (ArgY3_18)));
              }
            }
            break;
        }
        break;
    }
}

MR_bool MR_CALL 
hlds__make_hlds__superhomogeneous_util____Unify____arg_context_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_15 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_16 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_15 == CastY_16);
  if (succeeded)
    succeeded = MR_TRUE;
  else
    switch (MR_tag((MR_Word) HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word ArgX1_3 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 0))) & (MR_Integer) 1);
          MR_Word ArgY1_4;
          MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
          MR_Word ArgY2_6;
          MR_Integer Var_22;
          MR_Integer Var_23;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
          if (succeeded)
          {
            ArgY1_4 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) & (MR_Integer) 1);
            ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
            succeeded = (ArgX1_3 == ArgY1_4);
            if (succeeded)
            {
              Var_22 = (MR_Integer) (ArgX2_5);
              Var_23 = (MR_Integer) (ArgY2_6);
              succeeded = (Var_22 == Var_23);
            }
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ArgX1_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
          MR_Word ArgY1_8;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
            succeeded = hlds__hlds_pred____Unify____call_id_0_0(ArgX1_7, ArgY1_8);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word TypeInfo_20_20;
          MR_Word ArgX1_9 = ((MR_Word) ((MR_hl_field(2, HeadVar__1_1, 0))));
          MR_Word ArgY1_10;
          MR_Word ArgX2_11 = ((MR_Word) ((MR_hl_field(2, HeadVar__1_1, 1))));
          MR_Word ArgY2_12;
          MR_Word ArgX3_13 = ((MR_Word) ((MR_hl_field(2, HeadVar__1_1, 2))));
          MR_Word ArgY3_14;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
          if (succeeded)
          {
            ArgY1_10 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, 0))));
            ArgY2_12 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, 1))));
            ArgY3_14 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, 2))));
            succeeded = parse_tree__prog_data____Unify____cons_id_0_0(ArgX1_9, ArgY1_10);
            if (succeeded)
            {
              succeeded = hlds__hlds_goal____Unify____unify_main_context_0_0(ArgX2_11, ArgY2_12);
              if (succeeded)
              {
                TypeInfo_20_20 = (MR_Word) (&hlds__make_hlds__superhomogeneous_util_scalar_common_1[1]);
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_20_20, ((MR_Box) (ArgX3_13)), ((MR_Box) (ArgY3_14)));
              }
            }
          }
        }
        break;
    }
  return succeeded;
}

void MR_CALL 
hlds__make_hlds__superhomogeneous_util__make_fresh_arg_var_no_svar_5_p_0(
  MR_Word Arg_6,
  MR_Word * Var_7,
  MR_Word Vars0_8,
  MR_Word STATE_VARIABLE_UrInfo_0_12,
  MR_Word * STATE_VARIABLE_UrInfo_13)
{
  MR_bool succeeded = ((MR_tag((MR_Word) Arg_6)) == (MR_Integer) 1);
  MR_Word ArgVar_10;
  MR_Word TypeInfo_14_14;

  if (succeeded)
  {
    ArgVar_10 = ((MR_Word) ((MR_hl_field(1, Arg_6, 0))));
    TypeInfo_14_14 = (MR_Word) (&hlds__make_hlds__superhomogeneous_util_scalar_common_1[0]);
    succeeded = mercury__list__member_2_p_0(TypeInfo_14_14, ((MR_Box) (ArgVar_10)), Vars0_8);
    succeeded = !(succeeded);
  }
  if (succeeded)
  {
    *Var_7 = ArgVar_10;
    *STATE_VARIABLE_UrInfo_13 = STATE_VARIABLE_UrInfo_0_12;
  }
  else
    hlds__make_hlds__state_var__create_new_unravel_var_3_p_0(Var_7, STATE_VARIABLE_UrInfo_0_12, STATE_VARIABLE_UrInfo_13);
}

void MR_CALL 
hlds__make_hlds__superhomogeneous_util__make_fresh_arg_vars_subst_svars_7_p_0(
  MR_Word Args_8,
  MR_Word * Vars_9,
  MR_Word * VarsArgs_10,
  MR_Word STATE_VARIABLE_SVarState_0_14,
  MR_Word * STATE_VARIABLE_SVarState_15,
  MR_Word STATE_VARIABLE_UrInfo_0_16,
  MR_Word * STATE_VARIABLE_UrInfo_17)
{
  MR_Word RevVarsArgs_13;

  hlds__make_hlds__superhomogeneous_util__make_fresh_arg_vars_subst_svars_loop_8_p_0(Args_8, Vars_9, (MR_Word) ((MR_Unsigned) 0U), &RevVarsArgs_13, STATE_VARIABLE_SVarState_0_14, STATE_VARIABLE_SVarState_15, STATE_VARIABLE_UrInfo_0_16, STATE_VARIABLE_UrInfo_17);
  mercury__list__reverse_2_p_0((MR_Word) (&hlds__make_hlds__superhomogeneous_util__hlds__make_hlds__superhomogeneous_util__type_ctor_info_unify_var_term_0), RevVarsArgs_13, VarsArgs_10);
}

static void MR_CALL 
hlds__make_hlds__superhomogeneous_util__make_fresh_arg_vars_subst_svars_loop_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_RevVarsArgs_0_3,
  MR_Word * STATE_VARIABLE_RevVarsArgs_4,
  MR_Word STATE_VARIABLE_SVarState_0_5,
  MR_Word * STATE_VARIABLE_SVarState_6,
  MR_Word STATE_VARIABLE_UrInfo_0_7,
  MR_Word * STATE_VARIABLE_UrInfo_8)
{
  MR_bool succeeded;

  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_UrInfo_8 = STATE_VARIABLE_UrInfo_0_7;
    *STATE_VARIABLE_SVarState_6 = STATE_VARIABLE_SVarState_0_5;
    *STATE_VARIABLE_RevVarsArgs_4 = STATE_VARIABLE_RevVarsArgs_0_3;
  }
  else
  {
    MR_Word Arg_18 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_Word Args_19 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
    MR_Word Var_20;
    MR_Word Vars_21;
    MR_Word STATE_VARIABLE_RevVarsArgs_1_31;
    MR_Word STATE_VARIABLE_SVarState_1_32;
    MR_Word STATE_VARIABLE_UrInfo_1_33;
    MR_Word Arg_34;
    MR_Word STATE_VARIABLE_UrInfo_1_40;
    MR_Word Var_41;

    hlds__make_hlds__state_var__replace_any_dot_colon_state_var_in_term_6_p_0(Arg_18, &Arg_34, STATE_VARIABLE_SVarState_0_5, &STATE_VARIABLE_SVarState_1_32, STATE_VARIABLE_UrInfo_0_7, &STATE_VARIABLE_UrInfo_1_40);
    if (((MR_tag((MR_Word) Arg_34)) == (MR_Integer) 0))
      hlds__make_hlds__state_var__create_new_unravel_var_3_p_0(&Var_20, STATE_VARIABLE_UrInfo_1_40, &STATE_VARIABLE_UrInfo_1_33);
    else
    {
      MR_Word ArgVar_35 = ((MR_Word) ((MR_hl_field(1, Arg_34, 0))));

      succeeded = hlds__make_hlds__superhomogeneous_util__have_seen_arg_var_2_p_0(STATE_VARIABLE_RevVarsArgs_0_3, ArgVar_35);
      if (succeeded)
        hlds__make_hlds__state_var__create_new_unravel_var_3_p_0(&Var_20, STATE_VARIABLE_UrInfo_1_40, &STATE_VARIABLE_UrInfo_1_33);
      else
      {
        Var_20 = ArgVar_35;
        STATE_VARIABLE_UrInfo_1_33 = STATE_VARIABLE_UrInfo_1_40;
      }
    }
    {
      Var_41 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_41, 0) = ((MR_Box) (Var_20));
      MR_hl_field(0, Var_41, 1) = ((MR_Box) (Arg_34));
    }
    {
      STATE_VARIABLE_RevVarsArgs_1_31 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, STATE_VARIABLE_RevVarsArgs_1_31, 0) = ((MR_Box) (Var_41));
      MR_hl_field(1, STATE_VARIABLE_RevVarsArgs_1_31, 1) = ((MR_Box) (STATE_VARIABLE_RevVarsArgs_0_3));
    }
    hlds__make_hlds__superhomogeneous_util__make_fresh_arg_vars_subst_svars_loop_8_p_0(Args_19, &Vars_21, STATE_VARIABLE_RevVarsArgs_1_31, STATE_VARIABLE_RevVarsArgs_4, STATE_VARIABLE_SVarState_1_32, STATE_VARIABLE_SVarState_6, STATE_VARIABLE_UrInfo_1_33, STATE_VARIABLE_UrInfo_8);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Var_20));
      MR_hl_field(1, base, 1) = ((MR_Box) (Vars_21));
    }
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__superhomogeneous_util__have_seen_arg_var_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word ArgVar_5)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (HeadVar__1_1 != (MR_Word) ((MR_Unsigned) 0U));
    MR_Word RevUnifyVarTerm_3;
    MR_Word RevUnifyVarTerms_4;
    MR_Word RevVar_6;
    MR_Word TypeInfo_8_8;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      RevUnifyVarTerm_3 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      RevUnifyVarTerms_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      RevVar_6 = ((MR_Word) ((MR_hl_field(0, RevUnifyVarTerm_3, 0))));
      TypeInfo_8_8 = (MR_Word) (&hlds__make_hlds__superhomogeneous_util_scalar_common_1[0]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_8_8, ((MR_Box) (RevVar_6)), ((MR_Box) (ArgVar_5)));
      if (succeeded)
        succeeded = MR_TRUE;
      else
      {
        MR_Word next_value_of_HeadVar__1_1 = RevUnifyVarTerms_4;

        // direct tailcall eliminated
        ;
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

void MR_CALL 
hlds__make_hlds__superhomogeneous_util__pair_vars_with_terms_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.make_hlds.superhomogeneous_util.pair_vars_with_terms\'/3", (MR_String) "length mismatch");
        return;
      }
  else
  {
    MR_Word Var_20 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
    MR_Word Var_21 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));

    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.make_hlds.superhomogeneous_util.pair_vars_with_terms\'/3", (MR_String) "length mismatch");
        return;
      }
    else
    {
      MR_Word Term_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      MR_Word Terms_17 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
      MR_Word VarTerm_18;
      MR_Word VarsTerms_19;

      {
        VarTerm_18 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, VarTerm_18, 0) = ((MR_Box) (Var_21));
        MR_hl_field(0, VarTerm_18, 1) = ((MR_Box) (Term_16));
      }
      hlds__make_hlds__superhomogeneous_util__pair_vars_with_terms_3_p_0(Var_20, Terms_17, &VarsTerms_19);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__3_3 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (VarTerm_18));
        MR_hl_field(1, base, 1) = ((MR_Box) (VarsTerms_19));
      }
    }
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__superhomogeneous_util____Unify____arg_context_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__make_hlds__superhomogeneous_util____Unify____arg_context_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__make_hlds__superhomogeneous_util____Compare____arg_context_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__make_hlds__superhomogeneous_util____Compare____arg_context_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
hlds__make_hlds__superhomogeneous_util____Unify____expansion_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__make_hlds__superhomogeneous_util____Unify____expansion_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__make_hlds__superhomogeneous_util____Compare____expansion_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__make_hlds__superhomogeneous_util____Compare____expansion_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
hlds__make_hlds__superhomogeneous_util____Unify____maybe_fgti_var_size_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__make_hlds__superhomogeneous_util____Unify____maybe_fgti_var_size_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__make_hlds__superhomogeneous_util____Compare____maybe_fgti_var_size_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__make_hlds__superhomogeneous_util____Compare____maybe_fgti_var_size_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
hlds__make_hlds__superhomogeneous_util____Unify____unify_var_term_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__make_hlds__superhomogeneous_util____Unify____unify_var_term_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__make_hlds__superhomogeneous_util____Compare____unify_var_term_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__make_hlds__superhomogeneous_util____Compare____unify_var_term_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
hlds__make_hlds__superhomogeneous_util____Unify____unify_var_term_num_context_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__make_hlds__superhomogeneous_util____Unify____unify_var_term_num_context_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__make_hlds__superhomogeneous_util____Compare____unify_var_term_num_context_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__make_hlds__superhomogeneous_util____Compare____unify_var_term_num_context_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__hlds__make_hlds__superhomogeneous_util__init(void)
{
}

void mercury__hlds__make_hlds__superhomogeneous_util__init_type_tables(void)
{
  static MR_bool initialised = MR_FALSE;
  if (initialised) return;
  initialised = MR_TRUE;

  MR_register_type_ctor_info(&hlds__make_hlds__superhomogeneous_util__hlds__make_hlds__superhomogeneous_util__type_ctor_info_arg_context_0);
  MR_register_type_ctor_info(&hlds__make_hlds__superhomogeneous_util__hlds__make_hlds__superhomogeneous_util__type_ctor_info_expansion_0);
  MR_register_type_ctor_info(&hlds__make_hlds__superhomogeneous_util__hlds__make_hlds__superhomogeneous_util__type_ctor_info_maybe_fgti_var_size_0);
  MR_register_type_ctor_info(&hlds__make_hlds__superhomogeneous_util__hlds__make_hlds__superhomogeneous_util__type_ctor_info_unify_var_term_0);
  MR_register_type_ctor_info(&hlds__make_hlds__superhomogeneous_util__hlds__make_hlds__superhomogeneous_util__type_ctor_info_unify_var_term_num_context_0);
}

void mercury__hlds__make_hlds__superhomogeneous_util__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__hlds__make_hlds__superhomogeneous_util__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module hlds.make_hlds.superhomogeneous_util.
