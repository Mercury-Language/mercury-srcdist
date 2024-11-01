/*
** Automatically generated from `goal_mode.m'
** by the Mercury compiler,
** version rotd-2024-11-01
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


// :- module hlds.goal_mode.
// :- implementation.

/*
INIT mercury__hlds__goal_mode__init
ENDINIT
*/

#include "hlds.goal_mode.mih"


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
#include "enum.mih"
#include "hlds.mih"
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
#include "ops.mih"
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
#include "analysis.framework.mih"
#include "analysis.operations.mih"
#include "check_hlds.inst_match.mih"
#include "check_hlds.inst_test.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.proc_requests.mih"
#include "hlds.const_struct.mih"
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
#include "hlds.hlds_proc_util.mih"
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
#include "libs.polyhedron.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.parse_tree_out_term.mih"
#include "parse_tree.parse_tree_output.mih"
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
#include "parse_tree.var_db.mih"
#include "parse_tree.var_table.mih"
#include "recompilation.record_uses.mih"
#include "string.builder.mih"
#include "string.format.mih"
#include "string.parse_util.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"
#include "parse_tree.module_qual.mq_info.mih"




static const MR_FA_PseudoTypeInfo_Struct1 hlds__goal_mode__set_tree234__pti_set_tree234_1__plain_hlds__hlds_pred__type_ctor_info_pred_id_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__goal_mode__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 hlds__goal_mode__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__goal_mode__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_DuFunctorDesc hlds__goal_mode__hlds__goal_mode__du_functor_desc_goal_mode_0_0;

static const MR_FA_TypeInfo_Struct1 hlds__goal_mode__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_PseudoTypeInfo hlds__goal_mode__hlds__goal_mode__field_types_goal_mode_0_1[3];

static const MR_ConstString hlds__goal_mode__hlds__goal_mode__field_names_goal_mode_0_1[3];

static const MR_DuFunctorDesc hlds__goal_mode__hlds__goal_mode__du_functor_desc_goal_mode_0_1;

static const MR_DuFunctorDescPtr hlds__goal_mode__hlds__goal_mode__du_stag_ordered_goal_mode_0_0[1];

static const MR_DuFunctorDescPtr hlds__goal_mode__hlds__goal_mode__du_stag_ordered_goal_mode_0_1[1];

static const MR_DuPtagLayout hlds__goal_mode__hlds__goal_mode__du_ptag_ordered_goal_mode_0[2];

static const MR_DuFunctorDescPtr hlds__goal_mode__hlds__goal_mode__du_name_ordered_goal_mode_0[2];

static const MR_Integer hlds__goal_mode__hlds__goal_mode__functor_number_map_goal_mode_0[2];

static void MR_CALL 
hlds__goal_mode__record_var_if_bound_11_p_0(
  MR_Word ModuleInfo_12,
  MR_Word VarTable_13,
  MR_Word InstMap0_14,
  MR_Word InstMap_15,
  MR_Word Var_16,
  MR_Word STATE_VARIABLE_BoundVars_0_23,
  MR_Word * STATE_VARIABLE_BoundVars_24,
  MR_Word STATE_VARIABLE_BoundGroundedVars_0_25,
  MR_Word * STATE_VARIABLE_BoundGroundedVars_26,
  MR_Word STATE_VARIABLE_BoundNonGroundedVars_0_27,
  MR_Word * STATE_VARIABLE_BoundNonGroundedVars_28);

static void MR_CALL 
hlds__goal_mode__compute_goal_modes_in_proc_3_p_0(
  MR_Word ModuleInfo_4,
  MR_Word STATE_VARIABLE_ProcInfo_0_11,
  MR_Word * STATE_VARIABLE_ProcInfo_12);

static void MR_CALL 
hlds__goal_mode__compute_goal_modes_in_switch_5_p_0(
  MR_Word ModuleInfo_1,
  MR_Word VarTable_2,
  MR_Word InstMap0_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5);

static void MR_CALL 
hlds__goal_mode__compute_goal_modes_in_disj_5_p_0(
  MR_Word ModuleInfo_1,
  MR_Word VarTable_2,
  MR_Word InstMap0_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5);

static void MR_CALL 
hlds__goal_mode__compute_goal_modes_in_conj_5_p_0(
  MR_Word ModuleInfo_1,
  MR_Word VarTable_2,
  MR_Word STATE_VARIABLE_InstMap_0_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5);

static void MR_CALL 
hlds__goal_mode__compute_goal_modes_in_goal_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word VarTable_8,
  MR_Word InstMap0_9,
  MR_Word * InstMap_10,
  MR_Word Goal0_11,
  MR_Word * Goal_12);

static void MR_CALL 
hlds__goal_mode__compute_goal_mode_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);

static void MR_CALL 
hlds__goal_mode__compute_goal_mode_7_p_0(
  MR_Word ModuleInfo_8,
  MR_Word VarTable_9,
  MR_Word InstMapDelta_10,
  MR_Word InstMap0_11,
  MR_Word InstMap_12,
  MR_Word STATE_VARIABLE_GoalInfo_0_22,
  MR_Word * STATE_VARIABLE_GoalInfo_23);

static void MR_CALL 
hlds__goal_mode__compute_goal_modes_in_pred_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
hlds__goal_mode__compute_goal_modes_in_pred_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word ValidPredIds_7,
  MR_Word PredId_8,
  MR_Word STATE_VARIABLE_PredInfo_0_12,
  MR_Word * STATE_VARIABLE_PredInfo_13);

static void MR_CALL 
hlds__goal_mode__compute_goal_modes_in_module_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
hlds__goal_mode____Unify____goal_mode_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__goal_mode____Compare____goal_mode_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box hlds__goal_mode_scalar_common_1[2][2];

static /* final */ const MR_Box hlds__goal_mode_scalar_common_2[1][8];

static /* final */ const MR_Box hlds__goal_mode_scalar_common_3[1][6];

static /* final */ const MR_Box hlds__goal_mode_scalar_common_4[1][14];




static /* final */ const MR_Box hlds__goal_mode_scalar_common_1[2][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&parse_tree__set_of_var__parse_tree__set_of_var__type_ctor_info_set_of_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box hlds__goal_mode_scalar_common_2[1][8] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__goal_mode__set_tree234__pti_set_tree234_1__plain_hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0))
  },
};

static /* final */ const MR_Box hlds__goal_mode_scalar_common_3[1][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0))
  },
};

static /* final */ const MR_Box hlds__goal_mode_scalar_common_4[1][14] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 11)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_0)),
    ((MR_Box) (&hlds__instmap__hlds__instmap__type_ctor_info_instmap_0)),
    ((MR_Box) (&hlds__instmap__hlds__instmap__type_ctor_info_instmap_0)),
    ((MR_Box) (&hlds__goal_mode__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__goal_mode__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__goal_mode__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__goal_mode__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__goal_mode__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__goal_mode__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__goal_mode__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_PseudoTypeInfo_Struct1 hlds__goal_mode__set_tree234__pti_set_tree234_1__plain_hlds__hlds_pred__type_ctor_info_pred_id_0 = {
  &mercury__set_tree234__set_tree234__type_ctor_info_set_tree234_1,
  { (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__goal_mode__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_TypeInfo_Struct1 hlds__goal_mode__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__goal_mode__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  { (MR_PseudoTypeInfo) (&hlds__goal_mode__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_DuFunctorDesc hlds__goal_mode__hlds__goal_mode__du_functor_desc_goal_mode_0_0 = {
  (MR_String) "gm_unreachable",
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

static const MR_FA_TypeInfo_Struct1 hlds__goal_mode__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  { (MR_TypeInfo) (&hlds__goal_mode__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_PseudoTypeInfo hlds__goal_mode__hlds__goal_mode__field_types_goal_mode_0_1[3] = {
  (MR_PseudoTypeInfo) (&hlds__goal_mode__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&hlds__goal_mode__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&hlds__goal_mode__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
};

static const MR_ConstString hlds__goal_mode__hlds__goal_mode__field_names_goal_mode_0_1[3] = {
  (MR_String) "gm_more_bound",
  (MR_String) "gm_more_bound_grounded",
  (MR_String) "gm_more_bound_not_grounded"
};

static const MR_DuFunctorDesc hlds__goal_mode__hlds__goal_mode__du_functor_desc_goal_mode_0_1 = {
  (MR_String) "gm_reachable",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  hlds__goal_mode__hlds__goal_mode__field_types_goal_mode_0_1,
  hlds__goal_mode__hlds__goal_mode__field_names_goal_mode_0_1,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr hlds__goal_mode__hlds__goal_mode__du_stag_ordered_goal_mode_0_0[1] = { &hlds__goal_mode__hlds__goal_mode__du_functor_desc_goal_mode_0_0 };

static const MR_DuFunctorDescPtr hlds__goal_mode__hlds__goal_mode__du_stag_ordered_goal_mode_0_1[1] = { &hlds__goal_mode__hlds__goal_mode__du_functor_desc_goal_mode_0_1 };

static const MR_DuPtagLayout hlds__goal_mode__hlds__goal_mode__du_ptag_ordered_goal_mode_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    hlds__goal_mode__hlds__goal_mode__du_stag_ordered_goal_mode_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__goal_mode__hlds__goal_mode__du_stag_ordered_goal_mode_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr hlds__goal_mode__hlds__goal_mode__du_name_ordered_goal_mode_0[2] = {
  &hlds__goal_mode__hlds__goal_mode__du_functor_desc_goal_mode_0_1,
  &hlds__goal_mode__hlds__goal_mode__du_functor_desc_goal_mode_0_0
};

static const MR_Integer hlds__goal_mode__hlds__goal_mode__functor_number_map_goal_mode_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct hlds__goal_mode__hlds__goal_mode__type_ctor_info_goal_mode_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__goal_mode____Unify____goal_mode_0_0_10001)),
  ((MR_Box) (hlds__goal_mode____Compare____goal_mode_0_0_10001)),
  (MR_String) "hlds.goal_mode",
  (MR_String) "goal_mode",
  { hlds__goal_mode__hlds__goal_mode__du_name_ordered_goal_mode_0 },
  { hlds__goal_mode__hlds__goal_mode__du_ptag_ordered_goal_mode_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  hlds__goal_mode__hlds__goal_mode__functor_number_map_goal_mode_0,

};

void MR_CALL 
hlds__goal_mode____Compare____goal_mode_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_12 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_13 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_12 == CastY_13);
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
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 2))));
    MR_Word SubResult1_6;

    mercury__builtin__compare_3_p_0((MR_Word) (&hlds__goal_mode_scalar_common_1[1]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      mercury__builtin__compare_3_p_0((MR_Word) (&hlds__goal_mode_scalar_common_1[1]), &SubResult2_9, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
        mercury__builtin__compare_3_p_0((MR_Word) (&hlds__goal_mode_scalar_common_1[1]), HeadVar__1_1, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
    }
  }
}

MR_bool MR_CALL 
hlds__goal_mode____Unify____goal_mode_0_0(
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
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Integer CastX_9 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_10 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastY_10 == CastX_9);
  }
  else
  {
    MR_Word TypeInfo_13_13;
    MR_Word TypeInfo_14_14;
    MR_Word TypeInfo_15_15;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4;
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6;
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 2))));
    MR_Word ArgY3_8;

    succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      ArgY1_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      ArgY2_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      ArgY3_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 2))));
      TypeInfo_13_13 = (MR_Word) (&hlds__goal_mode_scalar_common_1[1]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_13_13, ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
      if (succeeded)
      {
        TypeInfo_14_14 = (MR_Word) (&hlds__goal_mode_scalar_common_1[1]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_14_14, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
        if (succeeded)
        {
          TypeInfo_15_15 = (MR_Word) (&hlds__goal_mode_scalar_common_1[1]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_15_15, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
        }
      }
    }
  }
  return succeeded;
}

static void MR_CALL 
hlds__goal_mode__record_var_if_bound_11_p_0(
  MR_Word ModuleInfo_12,
  MR_Word VarTable_13,
  MR_Word InstMap0_14,
  MR_Word InstMap_15,
  MR_Word Var_16,
  MR_Word STATE_VARIABLE_BoundVars_0_23,
  MR_Word * STATE_VARIABLE_BoundVars_24,
  MR_Word STATE_VARIABLE_BoundGroundedVars_0_25,
  MR_Word * STATE_VARIABLE_BoundGroundedVars_26,
  MR_Word STATE_VARIABLE_BoundNonGroundedVars_0_27,
  MR_Word * STATE_VARIABLE_BoundNonGroundedVars_28)
{
  MR_bool succeeded;
  MR_Word Inst0_20;
  MR_Word Inst_21;
  MR_Word Type_22;

  hlds__instmap__instmap_lookup_var_3_p_0(InstMap0_14, Var_16, &Inst0_20);
  hlds__instmap__instmap_lookup_var_3_p_0(InstMap_15, Var_16, &Inst_21);
  parse_tree__var_table__lookup_var_type_3_p_0(VarTable_13, Var_16, &Type_22);
  succeeded = check_hlds__inst_match__inst_matches_final_4_p_0(ModuleInfo_12, Type_22, Inst0_20, Inst_21);
  if (succeeded)
  {
    *STATE_VARIABLE_BoundNonGroundedVars_28 = STATE_VARIABLE_BoundNonGroundedVars_0_27;
    *STATE_VARIABLE_BoundGroundedVars_26 = STATE_VARIABLE_BoundGroundedVars_0_25;
    *STATE_VARIABLE_BoundVars_24 = STATE_VARIABLE_BoundVars_0_23;
  }
  else
  {
    parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_16, STATE_VARIABLE_BoundVars_0_23, STATE_VARIABLE_BoundVars_24);
    succeeded = check_hlds__inst_test__inst_is_ground_3_p_0(ModuleInfo_12, Type_22, Inst_21);
    if (succeeded)
    {
      parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_16, STATE_VARIABLE_BoundGroundedVars_0_25, STATE_VARIABLE_BoundGroundedVars_26);
      *STATE_VARIABLE_BoundNonGroundedVars_28 = STATE_VARIABLE_BoundNonGroundedVars_0_27;
    }
    else
    {
      parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_16, STATE_VARIABLE_BoundNonGroundedVars_0_27, STATE_VARIABLE_BoundNonGroundedVars_28);
      *STATE_VARIABLE_BoundGroundedVars_26 = STATE_VARIABLE_BoundGroundedVars_0_25;
    }
  }
}

static void MR_CALL 
hlds__goal_mode__compute_goal_modes_in_proc_3_p_0(
  MR_Word ModuleInfo_4,
  MR_Word STATE_VARIABLE_ProcInfo_0_11,
  MR_Word * STATE_VARIABLE_ProcInfo_12)
{
  MR_Word VarTable_6;
  MR_Word InstMap0_7;
  MR_Word Goal0_8;
  MR_Word Goal_10;
  MR_Word _InstMap_9;

  hlds__hlds_pred__proc_info_get_var_table_2_p_0(STATE_VARIABLE_ProcInfo_0_11, &VarTable_6);
  hlds__hlds_proc_util__proc_info_get_initial_instmap_3_p_0(ModuleInfo_4, STATE_VARIABLE_ProcInfo_0_11, &InstMap0_7);
  hlds__hlds_pred__proc_info_get_goal_2_p_0(STATE_VARIABLE_ProcInfo_0_11, &Goal0_8);
  hlds__goal_mode__compute_goal_modes_in_goal_6_p_0(ModuleInfo_4, VarTable_6, InstMap0_7, &_InstMap_9, Goal0_8, &Goal_10);
  hlds__hlds_pred__proc_info_set_goal_3_p_0(Goal_10, STATE_VARIABLE_ProcInfo_0_11, STATE_VARIABLE_ProcInfo_12);
}

static void MR_CALL 
hlds__goal_mode__compute_goal_modes_in_switch_5_p_0(
  MR_Word ModuleInfo_1,
  MR_Word VarTable_2,
  MR_Word InstMap0_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5)
{
  if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__5_5 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Case0_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 0))));
    MR_Word Cases0_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 1))));
    MR_Word Case_14;
    MR_Word Cases_15;
    MR_Word MainConsId_16 = ((MR_Word) ((MR_hl_field(0, Case0_12, (MR_Integer) 0))));
    MR_Word OtherConsIds_17 = ((MR_Word) ((MR_hl_field(0, Case0_12, (MR_Integer) 1))));
    MR_Word Goal0_18 = ((MR_Word) ((MR_hl_field(0, Case0_12, (MR_Integer) 2))));
    MR_Word Goal_20;
    MR_Word _InstMap_19;

    hlds__goal_mode__compute_goal_modes_in_goal_6_p_0(ModuleInfo_1, VarTable_2, InstMap0_3, &_InstMap_19, Goal0_18, &Goal_20);
    {
      Case_14 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Case_14, 0) = ((MR_Box) (MainConsId_16));
      MR_hl_field(0, Case_14, 1) = ((MR_Box) (OtherConsIds_17));
      MR_hl_field(0, Case_14, 2) = ((MR_Box) (Goal_20));
    }
    hlds__goal_mode__compute_goal_modes_in_switch_5_p_0(ModuleInfo_1, VarTable_2, InstMap0_3, Cases0_13, &Cases_15);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__5_5 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Case_14));
      MR_hl_field(1, base, 1) = ((MR_Box) (Cases_15));
    }
  }
}

static void MR_CALL 
hlds__goal_mode__compute_goal_modes_in_disj_5_p_0(
  MR_Word ModuleInfo_1,
  MR_Word VarTable_2,
  MR_Word InstMap0_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5)
{
  if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__5_5 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Disjunct0_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 0))));
    MR_Word Disjuncts0_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 1))));
    MR_Word Disjunct_14;
    MR_Word Disjuncts_15;
    MR_Word _InstMap_16;

    hlds__goal_mode__compute_goal_modes_in_goal_6_p_0(ModuleInfo_1, VarTable_2, InstMap0_3, &_InstMap_16, Disjunct0_12, &Disjunct_14);
    hlds__goal_mode__compute_goal_modes_in_disj_5_p_0(ModuleInfo_1, VarTable_2, InstMap0_3, Disjuncts0_13, &Disjuncts_15);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__5_5 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Disjunct_14));
      MR_hl_field(1, base, 1) = ((MR_Box) (Disjuncts_15));
    }
  }
}

static void MR_CALL 
hlds__goal_mode__compute_goal_modes_in_conj_5_p_0(
  MR_Word ModuleInfo_1,
  MR_Word VarTable_2,
  MR_Word STATE_VARIABLE_InstMap_0_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5)
{
  if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__5_5 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Conjunct0_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 0))));
    MR_Word Conjuncts0_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 1))));
    MR_Word Conjunct_14;
    MR_Word Conjuncts_15;
    MR_Word STATE_VARIABLE_InstMap_17_17;

    hlds__goal_mode__compute_goal_modes_in_goal_6_p_0(ModuleInfo_1, VarTable_2, STATE_VARIABLE_InstMap_0_3, &STATE_VARIABLE_InstMap_17_17, Conjunct0_12, &Conjunct_14);
    hlds__goal_mode__compute_goal_modes_in_conj_5_p_0(ModuleInfo_1, VarTable_2, STATE_VARIABLE_InstMap_17_17, Conjuncts0_13, &Conjuncts_15);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__5_5 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Conjunct_14));
      MR_hl_field(1, base, 1) = ((MR_Box) (Conjuncts_15));
    }
  }
}

static void MR_CALL 
hlds__goal_mode__compute_goal_modes_in_goal_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word VarTable_8,
  MR_Word InstMap0_9,
  MR_Word * InstMap_10,
  MR_Word Goal0_11,
  MR_Word * Goal_12)
{
  MR_Word GoalExpr0_13 = ((MR_Word) ((MR_hl_field(0, Goal0_11, (MR_Integer) 0))));
  MR_Word GoalInfo0_14 = ((MR_Word) ((MR_hl_field(0, Goal0_11, (MR_Integer) 1))));
  MR_Word InstMapDelta_15;
  MR_Word GoalExpr_39;
  MR_Word GoalInfo_81;

  InstMapDelta_15 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(GoalInfo0_14);
  switch (MR_tag((MR_Word) GoalExpr0_13)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word SubGoal0_59 = (MR_Word) ((MR_Word) (GoalExpr0_13));
        MR_Word SubGoal_61;
        MR_Word Var_60;

        hlds__goal_mode__compute_goal_modes_in_goal_6_p_0(ModuleInfo_7, VarTable_8, InstMap0_9, &Var_60, SubGoal0_59, &SubGoal_61);
        GoalExpr_39 = (MR_Word) ((MR_Word) (SubGoal_61));
      }
      break;
    case (MR_Integer) 1:
    case (MR_Integer) 2:
      GoalExpr_39 = GoalExpr0_13;
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, GoalExpr0_13, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
        case (MR_Integer) 1:
          GoalExpr_39 = GoalExpr0_13;
          break;
        case (MR_Integer) 2:
          {
            MR_Word ConjType_40 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr0_13, (MR_Integer) 1))) & (MR_Integer) 1);
            MR_Word Conjuncts0_41 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_13, (MR_Integer) 2))));
            MR_Word Conjuncts_42;

            hlds__goal_mode__compute_goal_modes_in_conj_5_p_0(ModuleInfo_7, VarTable_8, InstMap0_9, Conjuncts0_41, &Conjuncts_42);
            {
              GoalExpr_39 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr_39, 0) = ((MR_Box) ((MR_Unsigned) 2U));
              MR_hl_field(3, GoalExpr_39, 1) = (MR_Box) ((MR_Unsigned) (ConjType_40));
              MR_hl_field(3, GoalExpr_39, 2) = ((MR_Box) (Conjuncts_42));
            }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word Disjuncts0_43 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_13, (MR_Integer) 1))));
            MR_Word Disjuncts_44;

            hlds__goal_mode__compute_goal_modes_in_disj_5_p_0(ModuleInfo_7, VarTable_8, InstMap0_9, Disjuncts0_43, &Disjuncts_44);
            {
              GoalExpr_39 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr_39, 0) = ((MR_Box) ((MR_Unsigned) 3U));
              MR_hl_field(3, GoalExpr_39, 1) = ((MR_Box) (Disjuncts_44));
            }
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word Var_45 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_13, (MR_Integer) 1))));
            MR_Word CanFail_46 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr0_13, (MR_Integer) 2))) & (MR_Integer) 1);
            MR_Word Cases0_47 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_13, (MR_Integer) 3))));
            MR_Word Cases_48;

            hlds__goal_mode__compute_goal_modes_in_switch_5_p_0(ModuleInfo_7, VarTable_8, InstMap0_9, Cases0_47, &Cases_48);
            {
              GoalExpr_39 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr_39, 0) = ((MR_Box) ((MR_Unsigned) 4U));
              MR_hl_field(3, GoalExpr_39, 1) = ((MR_Box) (Var_45));
              MR_hl_field(3, GoalExpr_39, 2) = (MR_Box) ((MR_Unsigned) (CanFail_46));
              MR_hl_field(3, GoalExpr_39, 3) = ((MR_Box) (Cases_48));
            }
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word Reason_62 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_13, (MR_Integer) 1))));
            MR_Word SubGoal0_84 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_13, (MR_Integer) 2))));
            MR_Word SubGoal_85;
            MR_Word Var_63;

            hlds__goal_mode__compute_goal_modes_in_goal_6_p_0(ModuleInfo_7, VarTable_8, InstMap0_9, &Var_63, SubGoal0_84, &SubGoal_85);
            {
              GoalExpr_39 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr_39, 0) = ((MR_Box) ((MR_Unsigned) 5U));
              MR_hl_field(3, GoalExpr_39, 1) = ((MR_Box) (Reason_62));
              MR_hl_field(3, GoalExpr_39, 2) = ((MR_Box) (SubGoal_85));
            }
          }
          break;
        case (MR_Integer) 6:
          {
            MR_Word Vars_49 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_13, (MR_Integer) 1))));
            MR_Word CondGoal0_50 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_13, (MR_Integer) 2))));
            MR_Word ThenGoal0_51 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_13, (MR_Integer) 3))));
            MR_Word ElseGoal0_52 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_13, (MR_Integer) 4))));
            MR_Word InstMapCond_53;
            MR_Word CondGoal_54;
            MR_Word ThenGoal_56;
            MR_Word ElseGoal_58;
            MR_Word Var_55;
            MR_Word Var_57;

            hlds__goal_mode__compute_goal_modes_in_goal_6_p_0(ModuleInfo_7, VarTable_8, InstMap0_9, &InstMapCond_53, CondGoal0_50, &CondGoal_54);
            hlds__goal_mode__compute_goal_modes_in_goal_6_p_0(ModuleInfo_7, VarTable_8, InstMapCond_53, &Var_55, ThenGoal0_51, &ThenGoal_56);
            hlds__goal_mode__compute_goal_modes_in_goal_6_p_0(ModuleInfo_7, VarTable_8, InstMap0_9, &Var_57, ElseGoal0_52, &ElseGoal_58);
            {
              GoalExpr_39 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr_39, 0) = ((MR_Box) ((MR_Unsigned) 6U));
              MR_hl_field(3, GoalExpr_39, 1) = ((MR_Box) (Vars_49));
              MR_hl_field(3, GoalExpr_39, 2) = ((MR_Box) (CondGoal_54));
              MR_hl_field(3, GoalExpr_39, 3) = ((MR_Box) (ThenGoal_56));
              MR_hl_field(3, GoalExpr_39, 4) = ((MR_Box) (ElseGoal_58));
            }
          }
          break;
        case (MR_Integer) 7:
          {
            MR_Word Shorthand0_64 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_13, (MR_Integer) 1))));
            MR_Word Shorthand_70;

            switch (MR_tag((MR_Word) Shorthand0_64)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.goal_mode.compute_goal_modes_in_goal\'/6", (MR_String) "bi_implication");
                  return;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word AtomicGoalType_71 = ((MR_Unsigned) ((MR_hl_field(1, Shorthand0_64, (MR_Integer) 0))) & (MR_Integer) 3);
                  MR_Word OuterVars_72 = ((MR_Word) ((MR_hl_field(1, Shorthand0_64, (MR_Integer) 1))));
                  MR_Word InnerVars_73 = ((MR_Word) ((MR_hl_field(1, Shorthand0_64, (MR_Integer) 2))));
                  MR_Word OutputVars_74 = ((MR_Word) ((MR_hl_field(1, Shorthand0_64, (MR_Integer) 3))));
                  MR_Word MainGoal0_75 = ((MR_Word) ((MR_hl_field(1, Shorthand0_64, (MR_Integer) 4))));
                  MR_Word OrElseGoals0_76 = ((MR_Word) ((MR_hl_field(1, Shorthand0_64, (MR_Integer) 5))));
                  MR_Word OrElseInners_77 = ((MR_Word) ((MR_hl_field(1, Shorthand0_64, (MR_Integer) 6))));
                  MR_Word MainGoal_79;
                  MR_Word OrElseGoals_80;
                  MR_Word Var_78;

                  hlds__goal_mode__compute_goal_modes_in_goal_6_p_0(ModuleInfo_7, VarTable_8, InstMap0_9, &Var_78, MainGoal0_75, &MainGoal_79);
                  hlds__goal_mode__compute_goal_modes_in_disj_5_p_0(ModuleInfo_7, VarTable_8, InstMap0_9, OrElseGoals0_76, &OrElseGoals_80);
                  {
                    Shorthand_70 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Shorthand_70, 0) = (MR_Box) ((MR_Unsigned) (AtomicGoalType_71));
                    MR_hl_field(1, Shorthand_70, 1) = ((MR_Box) (OuterVars_72));
                    MR_hl_field(1, Shorthand_70, 2) = ((MR_Box) (InnerVars_73));
                    MR_hl_field(1, Shorthand_70, 3) = ((MR_Box) (OutputVars_74));
                    MR_hl_field(1, Shorthand_70, 4) = ((MR_Box) (MainGoal_79));
                    MR_hl_field(1, Shorthand_70, 5) = ((MR_Box) (OrElseGoals_80));
                    MR_hl_field(1, Shorthand_70, 6) = ((MR_Box) (OrElseInners_77));
                  }
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word MaybeIOVars_67 = ((MR_Word) ((MR_hl_field(2, Shorthand0_64, (MR_Integer) 0))));
                  MR_Word ResultVar_68 = ((MR_Word) ((MR_hl_field(2, Shorthand0_64, (MR_Integer) 1))));
                  MR_Word SubGoal0_86 = ((MR_Word) ((MR_hl_field(2, Shorthand0_64, (MR_Integer) 2))));
                  MR_Word SubGoal_87;
                  MR_Word Var_69;

                  hlds__goal_mode__compute_goal_modes_in_goal_6_p_0(ModuleInfo_7, VarTable_8, InstMap0_9, &Var_69, SubGoal0_86, &SubGoal_87);
                  {
                    Shorthand_70 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(2, Shorthand_70, 0) = ((MR_Box) (MaybeIOVars_67));
                    MR_hl_field(2, Shorthand_70, 1) = ((MR_Box) (ResultVar_68));
                    MR_hl_field(2, Shorthand_70, 2) = ((MR_Box) (SubGoal_87));
                  }
                }
                break;
            }
            {
              GoalExpr_39 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr_39, 0) = ((MR_Box) ((MR_Unsigned) 7U));
              MR_hl_field(3, GoalExpr_39, 1) = ((MR_Box) (Shorthand_70));
            }
          }
          break;
      }
      break;
  }
  hlds__instmap__apply_instmap_delta_3_p_0(InstMapDelta_15, InstMap0_9, InstMap_10);
  hlds__goal_mode__compute_goal_mode_7_p_0(ModuleInfo_7, VarTable_8, InstMapDelta_15, InstMap0_9, *InstMap_10, GoalInfo0_14, &GoalInfo_81);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *Goal_12 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_39));
    MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo_81));
  }
}

static void MR_CALL 
hlds__goal_mode__compute_goal_mode_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_STATE_VARIABLE_BoundVars_24;
  MR_Word conv1_STATE_VARIABLE_BoundGroundedVars_26;
  MR_Word conv0_STATE_VARIABLE_BoundNonGroundedVars_28;

  hlds__goal_mode__record_var_if_bound_11_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 6)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_BoundVars_24, ((MR_Word) (wrapper_arg_4)), &conv1_STATE_VARIABLE_BoundGroundedVars_26, ((MR_Word) (wrapper_arg_6)), &conv0_STATE_VARIABLE_BoundNonGroundedVars_28);
  *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_BoundVars_24));
  *wrapper_arg_5 = ((MR_Box) (conv1_STATE_VARIABLE_BoundGroundedVars_26));
  *wrapper_arg_7 = ((MR_Box) (conv0_STATE_VARIABLE_BoundNonGroundedVars_28));
}

static void MR_CALL 
hlds__goal_mode__compute_goal_mode_7_p_0(
  MR_Word ModuleInfo_8,
  MR_Word VarTable_9,
  MR_Word InstMapDelta_10,
  MR_Word InstMap0_11,
  MR_Word InstMap_12,
  MR_Word STATE_VARIABLE_GoalInfo_0_22,
  MR_Word * STATE_VARIABLE_GoalInfo_23)
{
  MR_bool succeeded;
  MR_Word GoalMode_21;

  succeeded = hlds__instmap__instmap_delta_is_reachable_1_p_0(InstMapDelta_10);
  if (succeeded)
  {
    MR_Word Vars_14;
    MR_Word BoundVars0_15;
    MR_Word BoundGroundedVars0_16;
    MR_Word BoundNonGroundedVars0_17;
    MR_Word BoundVars_18;
    MR_Word BoundGroundedVars_19;
    MR_Word BoundNonGroundedVars_20;
    MR_Word Var_24;
    MR_Word Var_25;
    MR_Box conv5_BoundVars_18;
    MR_Box conv4_BoundGroundedVars_19;
    MR_Box conv3_BoundNonGroundedVars_20;

    hlds__instmap__instmap_delta_changed_vars_2_p_0(InstMapDelta_10, &Vars_14);
    BoundVars0_15 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
    BoundGroundedVars0_16 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
    BoundNonGroundedVars0_17 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
    {
      Var_24 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_24, 0) = ((MR_Box) (&hlds__goal_mode_scalar_common_4[0]));
      MR_hl_field(0, Var_24, 1) = ((MR_Box) (hlds__goal_mode__compute_goal_mode_7_p_0_1));
      MR_hl_field(0, Var_24, 2) = ((MR_Box) ((MR_Integer) 4));
      MR_hl_field(0, Var_24, 3) = ((MR_Box) (ModuleInfo_8));
      MR_hl_field(0, Var_24, 4) = ((MR_Box) (VarTable_9));
      MR_hl_field(0, Var_24, 5) = ((MR_Box) (InstMap0_11));
      MR_hl_field(0, Var_24, 6) = ((MR_Box) (InstMap_12));
    }
    Var_25 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Vars_14);
    mercury__list__foldl3_8_p_0((MR_Word) (&hlds__goal_mode_scalar_common_1[0]), (MR_Word) (&hlds__goal_mode_scalar_common_1[1]), (MR_Word) (&hlds__goal_mode_scalar_common_1[1]), (MR_Word) (&hlds__goal_mode_scalar_common_1[1]), Var_24, Var_25, ((MR_Box) (BoundVars0_15)), &conv5_BoundVars_18, ((MR_Box) (BoundGroundedVars0_16)), &conv4_BoundGroundedVars_19, ((MR_Box) (BoundNonGroundedVars0_17)), &conv3_BoundNonGroundedVars_20);
    BoundVars_18 = ((MR_Word) (conv5_BoundVars_18));
    BoundGroundedVars_19 = ((MR_Word) (conv4_BoundGroundedVars_19));
    BoundNonGroundedVars_20 = ((MR_Word) (conv3_BoundNonGroundedVars_20));
    {
      GoalMode_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, GoalMode_21, 0) = ((MR_Box) (BoundVars_18));
      MR_hl_field(1, GoalMode_21, 1) = ((MR_Box) (BoundGroundedVars_19));
      MR_hl_field(1, GoalMode_21, 2) = ((MR_Box) (BoundNonGroundedVars_20));
    }
  }
  else
    GoalMode_21 = (MR_Word) ((MR_Unsigned) 0U);
  hlds__hlds_goal__goal_info_set_goal_mode_3_p_0(GoalMode_21, STATE_VARIABLE_GoalInfo_0_22, STATE_VARIABLE_GoalInfo_23);
}

static void MR_CALL 
hlds__goal_mode__compute_goal_modes_in_pred_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_ProcInfo_12;

  hlds__goal_mode__compute_goal_modes_in_proc_3_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_STATE_VARIABLE_ProcInfo_12);
  *wrapper_arg_2 = ((MR_Box) (conv0_STATE_VARIABLE_ProcInfo_12));
}

static void MR_CALL 
hlds__goal_mode__compute_goal_modes_in_pred_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word ValidPredIds_7,
  MR_Word PredId_8,
  MR_Word STATE_VARIABLE_PredInfo_0_12,
  MR_Word * STATE_VARIABLE_PredInfo_13)
{
  MR_bool succeeded;

  succeeded = mercury__set_tree234__member_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), ((MR_Box) (PredId_8)), ValidPredIds_7);
  if (succeeded)
  {
    MR_Word ProcTable0_10;
    MR_Word ProcTable_11;
    MR_Word Var_14;

    hlds__hlds_pred__pred_info_get_proc_table_2_p_0(STATE_VARIABLE_PredInfo_0_12, &ProcTable0_10);
    {
      Var_14 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_14, 0) = ((MR_Box) (&hlds__goal_mode_scalar_common_3[0]));
      MR_hl_field(0, Var_14, 1) = ((MR_Box) (hlds__goal_mode__compute_goal_modes_in_pred_5_p_0_1));
      MR_hl_field(0, Var_14, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_14, 3) = ((MR_Box) (ModuleInfo_6));
    }
    mercury__map__map_values_only_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), Var_14, ProcTable0_10, &ProcTable_11);
    hlds__hlds_pred__pred_info_set_proc_table_3_p_0(ProcTable_11, STATE_VARIABLE_PredInfo_0_12, STATE_VARIABLE_PredInfo_13);
  }
  else
    *STATE_VARIABLE_PredInfo_13 = STATE_VARIABLE_PredInfo_0_12;
}

static void MR_CALL 
hlds__goal_mode__compute_goal_modes_in_module_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_PredInfo_13;

  hlds__goal_mode__compute_goal_modes_in_pred_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_PredInfo_13);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_PredInfo_13));
}

void MR_CALL 
hlds__goal_mode__compute_goal_modes_in_module_2_p_0(
  MR_Word STATE_VARIABLE_ModuleInfo_0_7,
  MR_Word * STATE_VARIABLE_ModuleInfo_8)
{
  MR_Word ValidPredIds_4;
  MR_Word PredIdTable0_5;
  MR_Word PredIdTable_6;
  MR_Word Var_9;

  hlds__hlds_module__module_info_get_valid_pred_id_set_2_p_0(STATE_VARIABLE_ModuleInfo_0_7, &ValidPredIds_4);
  hlds__hlds_module__module_info_get_pred_id_table_2_p_0(STATE_VARIABLE_ModuleInfo_0_7, &PredIdTable0_5);
  {
    Var_9 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_9, 0) = ((MR_Box) (&hlds__goal_mode_scalar_common_2[0]));
    MR_hl_field(0, Var_9, 1) = ((MR_Box) (hlds__goal_mode__compute_goal_modes_in_module_2_p_0_1));
    MR_hl_field(0, Var_9, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_9, 3) = ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_7));
    MR_hl_field(0, Var_9, 4) = ((MR_Box) (ValidPredIds_4));
  }
  mercury__map__map_values_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), Var_9, PredIdTable0_5, &PredIdTable_6);
  hlds__hlds_module__module_info_set_pred_id_table_3_p_0(PredIdTable_6, STATE_VARIABLE_ModuleInfo_0_7, STATE_VARIABLE_ModuleInfo_8);
}

MR_Word MR_CALL 
hlds__goal_mode__dump_goal_mode_3_f_0(
  MR_String PrefixStr_5,
  MR_Word VarTable_6,
  MR_Word GoalMode_7)
{
  MR_bool succeeded;
  MR_Word STATE_VARIABLE_DumpStrs_22;

  if ((GoalMode_7 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_String Var_24;

    Var_24 = mercury__string__f_43_43_2_f_0(PrefixStr_5, (MR_String) "gm_unreachable\n");
    {
      STATE_VARIABLE_DumpStrs_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, STATE_VARIABLE_DumpStrs_22, 0) = ((MR_Box) (Var_24));
      MR_hl_field(1, STATE_VARIABLE_DumpStrs_22, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
  }
  else
  {
    MR_Word BoundGrounded_10 = ((MR_Word) ((MR_hl_field(1, GoalMode_7, (MR_Integer) 1))));
    MR_Word BoundNonGrounded_11 = ((MR_Word) ((MR_hl_field(1, GoalMode_7, (MR_Integer) 2))));
    MR_Word BoundGroundedVars_12;
    MR_Word BoundNonGroundedVars_13;

    BoundGroundedVars_12 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), BoundGrounded_10);
    BoundNonGroundedVars_13 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), BoundNonGrounded_11);
    succeeded = (BoundGroundedVars_12 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
      succeeded = (BoundNonGroundedVars_13 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      MR_String Var_28;

      Var_28 = mercury__string__f_43_43_2_f_0(PrefixStr_5, (MR_String) "gm_reachable, no vars bound\n");
      {
        STATE_VARIABLE_DumpStrs_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, STATE_VARIABLE_DumpStrs_22, 0) = ((MR_Box) (Var_28));
        MR_hl_field(1, STATE_VARIABLE_DumpStrs_22, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
    }
    else
    {
      MR_Word STATE_VARIABLE_DumpStrs_31_31;

      if ((BoundNonGroundedVars_13 == (MR_Word) ((MR_Unsigned) 0U)))
        STATE_VARIABLE_DumpStrs_31_31 = (MR_Word) ((MR_Unsigned) 0U);
      else
      {
        MR_String NGVarsStr_16;
        MR_String NonGroundedStr_17;
        MR_String Var_50;
        MR_String Var_52;

        NGVarsStr_16 = parse_tree__parse_tree_out_term__mercury_vars_to_string_3_f_0(VarTable_6, (MR_Integer) 1, BoundNonGroundedVars_13);
        Var_50 = mercury__string__f_43_43_2_f_0(NGVarsStr_16, (MR_String) "\n");
        Var_52 = mercury__string__f_43_43_2_f_0((MR_String) "bound but not grounded:", Var_50);
        NonGroundedStr_17 = mercury__string__f_43_43_2_f_0(PrefixStr_5, Var_52);
        {
          STATE_VARIABLE_DumpStrs_31_31 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, STATE_VARIABLE_DumpStrs_31_31, 0) = ((MR_Box) (NonGroundedStr_17));
          MR_hl_field(1, STATE_VARIABLE_DumpStrs_31_31, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
      }
      if ((BoundGroundedVars_12 == (MR_Word) ((MR_Unsigned) 0U)))
        STATE_VARIABLE_DumpStrs_22 = STATE_VARIABLE_DumpStrs_31_31;
      else
      {
        MR_String GVarsStr_20;
        MR_String GroundedStr_21;
        MR_String Var_54;
        MR_String Var_56;

        GVarsStr_20 = parse_tree__parse_tree_out_term__mercury_vars_to_string_3_f_0(VarTable_6, (MR_Integer) 1, BoundNonGroundedVars_13);
        Var_54 = mercury__string__f_43_43_2_f_0(GVarsStr_20, (MR_String) "\n");
        Var_56 = mercury__string__f_43_43_2_f_0((MR_String) "bound and grounded:", Var_54);
        GroundedStr_21 = mercury__string__f_43_43_2_f_0(PrefixStr_5, Var_56);
        {
          STATE_VARIABLE_DumpStrs_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, STATE_VARIABLE_DumpStrs_22, 0) = ((MR_Box) (GroundedStr_21));
          MR_hl_field(1, STATE_VARIABLE_DumpStrs_22, 1) = ((MR_Box) (STATE_VARIABLE_DumpStrs_31_31));
        }
      }
    }
  }
  return STATE_VARIABLE_DumpStrs_22;
}

void MR_CALL 
hlds__goal_mode__rename_vars_in_goal_mode_4_p_0(
  MR_Word Must_5,
  MR_Word Subn_6,
  MR_Word STATE_VARIABLE_GoalMode_0_14,
  MR_Word * STATE_VARIABLE_GoalMode_15)
{
  if ((STATE_VARIABLE_GoalMode_0_14 == (MR_Word) ((MR_Unsigned) 0U)))
    *STATE_VARIABLE_GoalMode_15 = STATE_VARIABLE_GoalMode_0_14;
  else
  {
    MR_Word Bound0_8 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_GoalMode_0_14, (MR_Integer) 0))));
    MR_Word BoundGrounded0_9 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_GoalMode_0_14, (MR_Integer) 1))));
    MR_Word BoundNonGrounded0_10 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_GoalMode_0_14, (MR_Integer) 2))));
    MR_Word Bound_11;
    MR_Word BoundGrounded_12;
    MR_Word BoundNonGrounded_13;

    parse_tree__prog_rename__rename_vars_in_set_of_var_4_p_2((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Must_5, Subn_6, Bound0_8, &Bound_11);
    parse_tree__prog_rename__rename_vars_in_set_of_var_4_p_2((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Must_5, Subn_6, BoundGrounded0_9, &BoundGrounded_12);
    parse_tree__prog_rename__rename_vars_in_set_of_var_4_p_2((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Must_5, Subn_6, BoundNonGrounded0_10, &BoundNonGrounded_13);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_GoalMode_15 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Bound_11));
      MR_hl_field(1, base, 1) = ((MR_Box) (BoundGrounded_12));
      MR_hl_field(1, base, 2) = ((MR_Box) (BoundNonGrounded_13));
    }
  }
}

MR_Word MR_CALL 
hlds__goal_mode__make_dummy_goal_mode_0_f_0(void)
{
  return (MR_Word) ((MR_Unsigned) 0U);
}

static MR_bool MR_CALL 
hlds__goal_mode____Unify____goal_mode_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__goal_mode____Unify____goal_mode_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__goal_mode____Compare____goal_mode_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__goal_mode____Compare____goal_mode_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__hlds__goal_mode__init(void)
{
}

void mercury__hlds__goal_mode__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&hlds__goal_mode__hlds__goal_mode__type_ctor_info_goal_mode_0);
}

void mercury__hlds__goal_mode__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__hlds__goal_mode__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module hlds.goal_mode.
