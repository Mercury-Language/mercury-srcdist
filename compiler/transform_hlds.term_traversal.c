/*
** Automatically generated from `term_traversal.m'
** by the Mercury compiler,
** version rotd-2023-08-31
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


// :- module transform_hlds.term_traversal.
// :- implementation.

/*
INIT mercury__transform_hlds__term_traversal__init
ENDINIT
*/

#include "transform_hlds.term_traversal.mih"


#include "analysis.mih"
#include "array.mih"
#include "assoc_list.mih"
#include "bag.mih"
#include "bimap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "check_hlds.mih"
#include "cord.mih"
#include "counter.mih"
#include "digraph.mih"
#include "enum.mih"
#include "hlds.mih"
#include "int.mih"
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
#include "term.mih"
#include "term_context.mih"
#include "transform_hlds.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "check_hlds.mode_constraint_robdd.mih"
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
#include "libs.compiler_util.mih"
#include "libs.dependency_graph.mih"
#include "libs.globals.mih"
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
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_table.mih"
#include "parse_tree.vartypes.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"




static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_traversal__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct2 transform_hlds__term_traversal__pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0term_context__type_ctor_info_term_context_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__term_traversal__maybe__ti_maybe_1pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0term_context__type_ctor_info_term_context_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__term_traversal__list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__term_traversal__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__term_traversal__bag__ti_bag_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_PseudoTypeInfo transform_hlds__term_traversal__transform_hlds__term_traversal__field_types_term_path_info_0_0[5];

static const MR_DuFunctorDesc transform_hlds__term_traversal__transform_hlds__term_traversal__du_functor_desc_term_path_info_0_0;

static const MR_DuFunctorDescPtr transform_hlds__term_traversal__transform_hlds__term_traversal__du_stag_ordered_term_path_info_0_0[1];

static const MR_DuPtagLayout transform_hlds__term_traversal__transform_hlds__term_traversal__du_ptag_ordered_term_path_info_0[1];

static const MR_DuFunctorDescPtr transform_hlds__term_traversal__transform_hlds__term_traversal__du_name_ordered_term_path_info_0[1];

static const MR_Integer transform_hlds__term_traversal__transform_hlds__term_traversal__functor_number_map_term_path_info_0[1];

static const MR_FA_TypeInfo_Struct1 transform_hlds__term_traversal__set_ordlist__ti_set_ordlist_1transform_hlds__term_traversal__type_ctor_info_term_path_info_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__term_traversal__list__ti_list_1transform_hlds__term_errors__type_ctor_info_term_error_0;

static const MR_PseudoTypeInfo transform_hlds__term_traversal__transform_hlds__term_traversal__field_types_term_traversal_info_0_0[2];

static const MR_DuFunctorDesc transform_hlds__term_traversal__transform_hlds__term_traversal__du_functor_desc_term_traversal_info_0_0;

static const MR_PseudoTypeInfo transform_hlds__term_traversal__transform_hlds__term_traversal__field_types_term_traversal_info_0_1[2];

static const MR_DuFunctorDesc transform_hlds__term_traversal__transform_hlds__term_traversal__du_functor_desc_term_traversal_info_0_1;

static const MR_DuFunctorDescPtr transform_hlds__term_traversal__transform_hlds__term_traversal__du_stag_ordered_term_traversal_info_0_0[1];

static const MR_DuFunctorDescPtr transform_hlds__term_traversal__transform_hlds__term_traversal__du_stag_ordered_term_traversal_info_0_1[1];

static const MR_DuPtagLayout transform_hlds__term_traversal__transform_hlds__term_traversal__du_ptag_ordered_term_traversal_info_0[2];

static const MR_DuFunctorDescPtr transform_hlds__term_traversal__transform_hlds__term_traversal__du_name_ordered_term_traversal_info_0[2];

static const MR_Integer transform_hlds__term_traversal__transform_hlds__term_traversal__functor_number_map_term_traversal_info_0[2];

static const MR_FA_TypeInfo_Struct1 transform_hlds__term_traversal__list__ti_list_1bool__type_ctor_info_bool_0;

static const MR_FA_TypeInfo_Struct2 transform_hlds__term_traversal__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0list__ti_list_1bool__type_ctor_info_bool_0;

static const MR_PseudoTypeInfo transform_hlds__term_traversal__transform_hlds__term_traversal__field_types_term_traversal_params_0_0[8];

static const MR_ConstString transform_hlds__term_traversal__transform_hlds__term_traversal__field_names_term_traversal_params_0_0[8];

static const MR_DuFunctorDesc transform_hlds__term_traversal__transform_hlds__term_traversal__du_functor_desc_term_traversal_params_0_0;

static const MR_DuFunctorDescPtr transform_hlds__term_traversal__transform_hlds__term_traversal__du_stag_ordered_term_traversal_params_0_0[1];

static const MR_DuPtagLayout transform_hlds__term_traversal__transform_hlds__term_traversal__du_ptag_ordered_term_traversal_params_0[1];

static const MR_DuFunctorDescPtr transform_hlds__term_traversal__transform_hlds__term_traversal__du_name_ordered_term_traversal_params_0[1];

static const MR_Integer transform_hlds__term_traversal__transform_hlds__term_traversal__functor_number_map_term_traversal_params_0[1];

static MR_bool MR_CALL 
transform_hlds__term_traversal__term_traverse_goal_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
transform_hlds__term_traversal__term_traverse_goal_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
transform_hlds__term_traversal__term_traverse_rev_conj_5_p_0(
  MR_Word ModuleInfo_1,
  MR_Word Params_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_Info_0_4,
  MR_Word * STATE_VARIABLE_Info_5);

static void MR_CALL 
transform_hlds__term_traversal__term_traverse_switch_5_p_0(
  MR_Word ModuleInfo_1,
  MR_Word Params_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_Info_0_4,
  MR_Word * HeadVar__5_5);

static void MR_CALL 
transform_hlds__term_traversal__term_traverse_disj_5_p_0(
  MR_Word ModuleInfo_1,
  MR_Word Params_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_Info_0_4,
  MR_Word * HeadVar__5_5);

static void MR_CALL 
transform_hlds__term_traversal__params_get_rec_input_suppliers_2_p_0(
  MR_Word Params_3,
  MR_Word * X_4);

static void MR_CALL 
transform_hlds__term_traversal__params_get_output_suppliers_2_p_0(
  MR_Word Params_3,
  MR_Word * X_4);

static void MR_CALL 
transform_hlds__term_traversal__params_get_var_table_2_p_0(
  MR_Word Params_3,
  MR_Word * X_4);

static void MR_CALL 
transform_hlds__term_traversal__params_get_ppid_2_p_0(
  MR_Word Params_3,
  MR_Word * X_4);

static void MR_CALL 
transform_hlds__term_traversal__error_if_intersect_5_p_0(
  MR_Word OutVars_6,
  MR_Word Context_7,
  MR_Word ErrorKind_8,
  MR_Word STATE_VARIABLE_Info_0_16,
  MR_Word * STATE_VARIABLE_Info_17);

static MR_bool MR_CALL 
transform_hlds__term_traversal__some_active_vars_in_bag_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word OutVars_5);

static void MR_CALL 
transform_hlds__term_traversal__record_change_6_p_0(
  MR_Word InVars_7,
  MR_Word OutVars_8,
  MR_Integer Gamma_9,
  MR_Word CalledPPIds_10,
  MR_Word Info0_11,
  MR_Word * Info_12);

static void MR_CALL 
transform_hlds__term_traversal__record_change_2_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word InVars_2,
  MR_Word OutVars_3,
  MR_Integer CallGamma_4,
  MR_Word CallPPIds_5,
  MR_Word STATE_VARIABLE_PathSet_0_6,
  MR_Word * STATE_VARIABLE_PathSet_7);

static MR_bool MR_CALL 
transform_hlds__term_traversal__unify_change_9_p_0(
  MR_Word ModuleInfo_10,
  MR_Word OutVar_11,
  MR_Word ConsId_12,
  MR_Word Args0_13,
  MR_Word Modes0_14,
  MR_Word Params_15,
  MR_Integer * Gamma_16,
  MR_Word * InVars_17,
  MR_Word * OutVars_18);

static void MR_CALL 
transform_hlds__term_traversal__filter_typeinfos_from_args_and_modes_5_p_0(
  MR_Word VarTable_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5);

static void MR_CALL 
transform_hlds__term_traversal__compute_rec_start_vars_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3);

static void MR_CALL 
transform_hlds__term_traversal__called_can_loop_5_p_0(
  MR_Word Context_6,
  MR_Word ErrorKind_7,
  MR_Word Params_8,
  MR_Word Info0_9,
  MR_Word * Info_10);

static void MR_CALL 
transform_hlds__term_traversal__add_term_error_5_p_0(
  MR_Word Params_6,
  MR_Word Context_7,
  MR_Word ErrorKind_8,
  MR_Word Info0_9,
  MR_Word * Info_10);

static void MR_CALL 
transform_hlds__term_traversal__add_path_3_p_0(
  MR_Word Path_4,
  MR_Word Info0_5,
  MR_Word * Info_6);

static void MR_CALL 
transform_hlds__term_traversal__cannot_succeed_2_p_0(
  MR_Word Info0_3,
  MR_Word * Info_4);

static void MR_CALL 
transform_hlds__term_traversal__combine_paths_4_p_0(
  MR_Word InfoA_5,
  MR_Word InfoB_6,
  MR_Word Params_7,
  MR_Word * Info_8);

static void MR_CALL 
transform_hlds__term_traversal__remove_unused_args_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_Vars_0_3,
  MR_Word * STATE_VARIABLE_Vars_4);

static MR_bool MR_CALL 
transform_hlds__term_traversal____Unify____term_path_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__term_traversal____Compare____term_path_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__term_traversal____Unify____term_traversal_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__term_traversal____Compare____term_traversal_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__term_traversal____Unify____term_traversal_params_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__term_traversal____Compare____term_traversal_params_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box transform_hlds__term_traversal_scalar_common_1[8][2];

static /* final */ const MR_Box transform_hlds__term_traversal_scalar_common_2[3][3];

static /* final */ const MR_Box transform_hlds__term_traversal_scalar_common_3[2][5];




static /* final */ const MR_Box transform_hlds__term_traversal_scalar_common_1[8][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&transform_hlds__term_traversal_scalar_common_2[0]))
  },
  /* row   4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0))
  },
  /* row   5 */
  {
    ((MR_Box) (&mercury__bag__bag__type_ctor_info_bag_1)),
    ((MR_Box) (&transform_hlds__term_traversal_scalar_common_1[0]))
  },
  /* row   6 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&transform_hlds__term_errors__transform_hlds__term_errors__type_ctor_info_term_error_0))
  },
  /* row   7 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&transform_hlds__term_traversal__transform_hlds__term_traversal__type_ctor_info_term_path_info_0))
  },
};

static /* final */ const MR_Box transform_hlds__term_traversal_scalar_common_2[3][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&mercury__term_context__term_context__type_ctor_info_term_context_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&transform_hlds__term_traversal_scalar_common_1[1]))
  },
  /* row   2 */
  {
    ((MR_Box) (&transform_hlds__term_traversal_scalar_common_3[0])),
    ((MR_Box) (transform_hlds__term_traversal__term_traverse_goal_5_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box transform_hlds__term_traversal_scalar_common_3[2][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0)),
    ((MR_Box) (&transform_hlds__term_traversal__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0))
  },
};



#include "array.mh"


static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_traversal__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_TypeInfo_Struct2 transform_hlds__term_traversal__pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0term_context__type_ctor_info_term_context_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0),
    (MR_TypeInfo) (&mercury__term_context__term_context__type_ctor_info_term_context_0)
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__term_traversal__maybe__ti_maybe_1pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0term_context__type_ctor_info_term_context_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  { (MR_TypeInfo) (&transform_hlds__term_traversal__pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0term_context__type_ctor_info_term_context_0) }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__term_traversal__list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0) }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__term_traversal__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__term_traversal__bag__ti_bag_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__bag__bag__type_ctor_info_bag_1,
  { (MR_TypeInfo) (&transform_hlds__term_traversal__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_PseudoTypeInfo transform_hlds__term_traversal__transform_hlds__term_traversal__field_types_term_path_info_0_0[5] = {
  (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0),
  (MR_PseudoTypeInfo) (&transform_hlds__term_traversal__maybe__ti_maybe_1pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0term_context__type_ctor_info_term_context_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&transform_hlds__term_traversal__list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0),
  (MR_PseudoTypeInfo) (&transform_hlds__term_traversal__bag__ti_bag_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
};

static const MR_DuFunctorDesc transform_hlds__term_traversal__transform_hlds__term_traversal__du_functor_desc_term_path_info_0_0 = {
  (MR_String) "term_path_info",
  INT16_C(5),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  transform_hlds__term_traversal__transform_hlds__term_traversal__field_types_term_path_info_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr transform_hlds__term_traversal__transform_hlds__term_traversal__du_stag_ordered_term_path_info_0_0[1] = { &transform_hlds__term_traversal__transform_hlds__term_traversal__du_functor_desc_term_path_info_0_0 };

static const MR_DuPtagLayout transform_hlds__term_traversal__transform_hlds__term_traversal__du_ptag_ordered_term_path_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    transform_hlds__term_traversal__transform_hlds__term_traversal__du_stag_ordered_term_path_info_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr transform_hlds__term_traversal__transform_hlds__term_traversal__du_name_ordered_term_path_info_0[1] = { &transform_hlds__term_traversal__transform_hlds__term_traversal__du_functor_desc_term_path_info_0_0 };

static const MR_Integer transform_hlds__term_traversal__transform_hlds__term_traversal__functor_number_map_term_path_info_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct transform_hlds__term_traversal__transform_hlds__term_traversal__type_ctor_info_term_path_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__term_traversal____Unify____term_path_info_0_0_10001)),
  ((MR_Box) (transform_hlds__term_traversal____Compare____term_path_info_0_0_10001)),
  (MR_String) "transform_hlds.term_traversal",
  (MR_String) "term_path_info",
  { transform_hlds__term_traversal__transform_hlds__term_traversal__du_name_ordered_term_path_info_0 },
  { transform_hlds__term_traversal__transform_hlds__term_traversal__du_ptag_ordered_term_path_info_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  transform_hlds__term_traversal__transform_hlds__term_traversal__functor_number_map_term_path_info_0,

};

static const MR_FA_TypeInfo_Struct1 transform_hlds__term_traversal__set_ordlist__ti_set_ordlist_1transform_hlds__term_traversal__type_ctor_info_term_path_info_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  { (MR_TypeInfo) (&transform_hlds__term_traversal__transform_hlds__term_traversal__type_ctor_info_term_path_info_0) }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__term_traversal__list__ti_list_1transform_hlds__term_errors__type_ctor_info_term_error_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&transform_hlds__term_errors__transform_hlds__term_errors__type_ctor_info_term_error_0) }
};

static const MR_PseudoTypeInfo transform_hlds__term_traversal__transform_hlds__term_traversal__field_types_term_traversal_info_0_0[2] = {
  (MR_PseudoTypeInfo) (&transform_hlds__term_traversal__set_ordlist__ti_set_ordlist_1transform_hlds__term_traversal__type_ctor_info_term_path_info_0),
  (MR_PseudoTypeInfo) (&transform_hlds__term_traversal__list__ti_list_1transform_hlds__term_errors__type_ctor_info_term_error_0)
};

static const MR_DuFunctorDesc transform_hlds__term_traversal__transform_hlds__term_traversal__du_functor_desc_term_traversal_info_0_0 = {
  (MR_String) "term_traversal_ok",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  transform_hlds__term_traversal__transform_hlds__term_traversal__field_types_term_traversal_info_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo transform_hlds__term_traversal__transform_hlds__term_traversal__field_types_term_traversal_info_0_1[2] = {
  (MR_PseudoTypeInfo) (&transform_hlds__term_traversal__list__ti_list_1transform_hlds__term_errors__type_ctor_info_term_error_0),
  (MR_PseudoTypeInfo) (&transform_hlds__term_traversal__list__ti_list_1transform_hlds__term_errors__type_ctor_info_term_error_0)
};

static const MR_DuFunctorDesc transform_hlds__term_traversal__transform_hlds__term_traversal__du_functor_desc_term_traversal_info_0_1 = {
  (MR_String) "term_traversal_error",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  transform_hlds__term_traversal__transform_hlds__term_traversal__field_types_term_traversal_info_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr transform_hlds__term_traversal__transform_hlds__term_traversal__du_stag_ordered_term_traversal_info_0_0[1] = { &transform_hlds__term_traversal__transform_hlds__term_traversal__du_functor_desc_term_traversal_info_0_0 };

static const MR_DuFunctorDescPtr transform_hlds__term_traversal__transform_hlds__term_traversal__du_stag_ordered_term_traversal_info_0_1[1] = { &transform_hlds__term_traversal__transform_hlds__term_traversal__du_functor_desc_term_traversal_info_0_1 };

static const MR_DuPtagLayout transform_hlds__term_traversal__transform_hlds__term_traversal__du_ptag_ordered_term_traversal_info_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    transform_hlds__term_traversal__transform_hlds__term_traversal__du_stag_ordered_term_traversal_info_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    transform_hlds__term_traversal__transform_hlds__term_traversal__du_stag_ordered_term_traversal_info_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr transform_hlds__term_traversal__transform_hlds__term_traversal__du_name_ordered_term_traversal_info_0[2] = {
  &transform_hlds__term_traversal__transform_hlds__term_traversal__du_functor_desc_term_traversal_info_0_1,
  &transform_hlds__term_traversal__transform_hlds__term_traversal__du_functor_desc_term_traversal_info_0_0
};

static const MR_Integer transform_hlds__term_traversal__transform_hlds__term_traversal__functor_number_map_term_traversal_info_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct transform_hlds__term_traversal__transform_hlds__term_traversal__type_ctor_info_term_traversal_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__term_traversal____Unify____term_traversal_info_0_0_10001)),
  ((MR_Box) (transform_hlds__term_traversal____Compare____term_traversal_info_0_0_10001)),
  (MR_String) "transform_hlds.term_traversal",
  (MR_String) "term_traversal_info",
  { transform_hlds__term_traversal__transform_hlds__term_traversal__du_name_ordered_term_traversal_info_0 },
  { transform_hlds__term_traversal__transform_hlds__term_traversal__du_ptag_ordered_term_traversal_info_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  transform_hlds__term_traversal__transform_hlds__term_traversal__functor_number_map_term_traversal_info_0,

};

static const MR_FA_TypeInfo_Struct1 transform_hlds__term_traversal__list__ti_list_1bool__type_ctor_info_bool_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0) }
};

static const MR_FA_TypeInfo_Struct2 transform_hlds__term_traversal__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0list__ti_list_1bool__type_ctor_info_bool_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0),
    (MR_TypeInfo) (&transform_hlds__term_traversal__list__ti_list_1bool__type_ctor_info_bool_0)
  }
};

static const MR_PseudoTypeInfo transform_hlds__term_traversal__transform_hlds__term_traversal__field_types_term_traversal_params_0_0[8] = {
  (MR_PseudoTypeInfo) (&transform_hlds__term_norm__transform_hlds__term_norm__type_ctor_info_functor_info_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0),
  (MR_PseudoTypeInfo) (&mercury__term_context__term_context__type_ctor_info_term_context_0),
  (MR_PseudoTypeInfo) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_0),
  (MR_PseudoTypeInfo) (&transform_hlds__term_traversal__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0list__ti_list_1bool__type_ctor_info_bool_0),
  (MR_PseudoTypeInfo) (&transform_hlds__term_traversal__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0list__ti_list_1bool__type_ctor_info_bool_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_ConstString transform_hlds__term_traversal__transform_hlds__term_traversal__field_names_term_traversal_params_0_0[8] = {
  (MR_String) "term_trav_functor_info",
  (MR_String) "term_trav_ppid",
  (MR_String) "term_trav_context",
  (MR_String) "term_trav_var_table",
  (MR_String) "term_trav_output_suppliers",
  (MR_String) "term_trav_rec_input_supplier",
  (MR_String) "term_trav_max_errors",
  (MR_String) "term_trav_max_paths"
};

static const MR_DuFunctorDesc transform_hlds__term_traversal__transform_hlds__term_traversal__du_functor_desc_term_traversal_params_0_0 = {
  (MR_String) "term_traversal_params",
  INT16_C(8),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  transform_hlds__term_traversal__transform_hlds__term_traversal__field_types_term_traversal_params_0_0,
  transform_hlds__term_traversal__transform_hlds__term_traversal__field_names_term_traversal_params_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr transform_hlds__term_traversal__transform_hlds__term_traversal__du_stag_ordered_term_traversal_params_0_0[1] = { &transform_hlds__term_traversal__transform_hlds__term_traversal__du_functor_desc_term_traversal_params_0_0 };

static const MR_DuPtagLayout transform_hlds__term_traversal__transform_hlds__term_traversal__du_ptag_ordered_term_traversal_params_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    transform_hlds__term_traversal__transform_hlds__term_traversal__du_stag_ordered_term_traversal_params_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr transform_hlds__term_traversal__transform_hlds__term_traversal__du_name_ordered_term_traversal_params_0[1] = { &transform_hlds__term_traversal__transform_hlds__term_traversal__du_functor_desc_term_traversal_params_0_0 };

static const MR_Integer transform_hlds__term_traversal__transform_hlds__term_traversal__functor_number_map_term_traversal_params_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct transform_hlds__term_traversal__transform_hlds__term_traversal__type_ctor_info_term_traversal_params_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__term_traversal____Unify____term_traversal_params_0_0_10001)),
  ((MR_Box) (transform_hlds__term_traversal____Compare____term_traversal_params_0_0_10001)),
  (MR_String) "transform_hlds.term_traversal",
  (MR_String) "term_traversal_params",
  { transform_hlds__term_traversal__transform_hlds__term_traversal__du_name_ordered_term_traversal_params_0 },
  { transform_hlds__term_traversal__transform_hlds__term_traversal__du_ptag_ordered_term_traversal_params_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  transform_hlds__term_traversal__transform_hlds__term_traversal__functor_number_map_term_traversal_params_0,

};

void MR_CALL 
transform_hlds__term_traversal____Compare____term_traversal_params_0_0(
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
    MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));
    MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 3))));
    MR_Word ArgX5_16 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 4))));
    MR_Word ArgY5_17 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 4))));
    MR_Word ArgX6_19 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 5))));
    MR_Word ArgY6_20 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 5))));
    MR_Integer ArgX7_22 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 6))));
    MR_Integer ArgY7_23 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 6))));
    MR_Integer ArgX8_25 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 7))));
    MR_Integer ArgY8_26 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 7))));
    MR_Word SubResult1_6;

    transform_hlds__term_norm____Compare____functor_info_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
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

        mercury__term_context____Compare____term_context_0_0(&SubResult3_12, ArgX3_10, ArgY3_11);
        succeeded = (SubResult3_12 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
        {
          MR_Word SubResult4_15;

          parse_tree__var_table____Compare____var_table_0_0(&SubResult4_15, ArgX4_13, ArgY4_14);
          succeeded = (SubResult4_15 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult4_15;
          else
          {
            MR_Word SubResult5_18;

            mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__term_traversal_scalar_common_2[1]), &SubResult5_18, ((MR_Box) (ArgX5_16)), ((MR_Box) (ArgY5_17)));
            succeeded = (SubResult5_18 != (MR_Integer) 0);
            if (succeeded)
              *HeadVar__1_1 = SubResult5_18;
            else
            {
              MR_Word SubResult6_21;

              mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__term_traversal_scalar_common_2[1]), &SubResult6_21, ((MR_Box) (ArgX6_19)), ((MR_Box) (ArgY6_20)));
              succeeded = (SubResult6_21 != (MR_Integer) 0);
              if (succeeded)
                *HeadVar__1_1 = SubResult6_21;
              else
              {
                MR_Word SubResult7_24;

                succeeded = (ArgX7_22 < ArgY7_23);
                if (succeeded)
                {
                  SubResult7_24 = (MR_Integer) 1;
                  succeeded = MR_TRUE;
                }
                else
                {
                  succeeded = (ArgX7_22 > ArgY7_23);
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
                  succeeded = (ArgX8_25 < ArgY8_26);
                  if (succeeded)
                    *HeadVar__1_1 = (MR_Integer) 1;
                  else
                  {
                    succeeded = (ArgX8_25 > ArgY8_26);
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
}

MR_bool MR_CALL 
transform_hlds__term_traversal____Unify____term_traversal_params_0_0(
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
    MR_Word TypeInfo_25_25;
    MR_Word TypeInfo_26_26;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 3))));
    MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));
    MR_Word ArgX5_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 4))));
    MR_Word ArgY5_12 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 4))));
    MR_Word ArgX6_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 5))));
    MR_Word ArgY6_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 5))));
    MR_Integer ArgX7_15 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 6))));
    MR_Integer ArgY7_16 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 6))));
    MR_Integer ArgX8_17 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 7))));
    MR_Integer ArgY8_18 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 7))));

    succeeded = transform_hlds__term_norm____Unify____functor_info_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
    {
      succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(ArgX2_5, ArgY2_6);
      if (succeeded)
      {
        succeeded = mercury__term_context____Unify____term_context_0_0(ArgX3_7, ArgY3_8);
        if (succeeded)
        {
          succeeded = parse_tree__var_table____Unify____var_table_0_0(ArgX4_9, ArgY4_10);
          if (succeeded)
          {
            TypeInfo_25_25 = (MR_Word) (&transform_hlds__term_traversal_scalar_common_2[1]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_25_25, ((MR_Box) (ArgX5_11)), ((MR_Box) (ArgY5_12)));
            if (succeeded)
            {
              TypeInfo_26_26 = (MR_Word) (&transform_hlds__term_traversal_scalar_common_2[1]);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_26_26, ((MR_Box) (ArgX6_13)), ((MR_Box) (ArgY6_14)));
              if (succeeded)
              {
                succeeded = (ArgX7_15 == ArgY7_16);
                if (succeeded)
                  succeeded = (ArgX8_17 == ArgY8_18);
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
transform_hlds__term_traversal____Compare____term_traversal_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_22 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_23 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_22 == CastY_23);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1))
  {
    MR_Word Var_28 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word Var_29 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));

    if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1))
    {
      MR_Word ArgY1_18 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
      MR_Word ArgY2_21 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
      MR_Word SubResult1_19;

      mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__term_traversal_scalar_common_1[6]), &SubResult1_19, ((MR_Box) (Var_29)), ((MR_Box) (ArgY1_18)));
      succeeded = (SubResult1_19 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_19;
      else
        mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__term_traversal_scalar_common_1[6]), HeadVar__1_1, ((MR_Box) (Var_28)), ((MR_Box) (ArgY2_21)));
    }
    else
      *HeadVar__1_1 = (MR_Integer) 2;
  }
  else
  {
    MR_Word Var_30 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word Var_31 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));

    if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1))
      *HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
      MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
      MR_Word SubResult1_6;

      mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__term_traversal_scalar_common_1[7]), &SubResult1_6, ((MR_Box) (Var_31)), ((MR_Box) (ArgY1_5)));
      succeeded = (SubResult1_6 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
        mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__term_traversal_scalar_common_1[6]), HeadVar__1_1, ((MR_Box) (Var_30)), ((MR_Box) (ArgY2_8)));
    }
  }
}

MR_bool MR_CALL 
transform_hlds__term_traversal____Unify____term_traversal_info_0_0(
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
  if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 1))
  {
    MR_Word TypeInfo_13_13;
    MR_Word TypeInfo_14_14;
    MR_Word ArgX1_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_8;
    MR_Word ArgX2_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_10;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
    if (succeeded)
    {
      ArgY1_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      ArgY2_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      TypeInfo_13_13 = (MR_Word) (&transform_hlds__term_traversal_scalar_common_1[6]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_13_13, ((MR_Box) (ArgX1_7)), ((MR_Box) (ArgY1_8)));
      if (succeeded)
      {
        TypeInfo_14_14 = (MR_Word) (&transform_hlds__term_traversal_scalar_common_1[6]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_14_14, ((MR_Box) (ArgX2_9)), ((MR_Box) (ArgY2_10)));
      }
    }
  }
  else
  {
    MR_Word TypeInfo_15_15;
    MR_Word TypeInfo_16_16;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4;
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
    if (succeeded)
    {
      ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
      ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
      TypeInfo_15_15 = (MR_Word) (&transform_hlds__term_traversal_scalar_common_1[7]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_15_15, ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
      if (succeeded)
      {
        TypeInfo_16_16 = (MR_Word) (&transform_hlds__term_traversal_scalar_common_1[6]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_16_16, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
      }
    }
  }
  return succeeded;
}

void MR_CALL 
transform_hlds__term_traversal____Compare____term_path_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_18 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_19 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_18 == CastY_19);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
    MR_Integer ArgX3_10 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Integer ArgY3_11 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 2))));
    MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));
    MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 3))));
    MR_Word ArgX5_16 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 4))));
    MR_Word ArgY5_17 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 4))));
    MR_Word SubResult1_6;

    hlds__hlds_pred____Compare____pred_proc_id_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__term_traversal_scalar_common_1[3]), &SubResult2_9, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
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
        {
          MR_Word SubResult4_15;

          mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__term_traversal_scalar_common_1[4]), &SubResult4_15, ((MR_Box) (ArgX4_13)), ((MR_Box) (ArgY4_14)));
          succeeded = (SubResult4_15 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult4_15;
          else
            mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__term_traversal_scalar_common_1[5]), HeadVar__1_1, ((MR_Box) (ArgX5_16)), ((MR_Box) (ArgY5_17)));
        }
      }
    }
  }
}

MR_bool MR_CALL 
transform_hlds__term_traversal____Unify____term_path_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_13 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_14 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_13 == CastY_14);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word TypeInfo_16_16;
    MR_Word TypeInfo_17_17;
    MR_Word TypeInfo_18_18;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Integer ArgX3_7 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 2))));
    MR_Integer ArgY3_8 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 3))));
    MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));
    MR_Word ArgX5_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 4))));
    MR_Word ArgY5_12 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 4))));

    succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
    {
      TypeInfo_16_16 = (MR_Word) (&transform_hlds__term_traversal_scalar_common_1[3]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_16_16, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
      if (succeeded)
      {
        succeeded = (ArgX3_7 == ArgY3_8);
        if (succeeded)
        {
          TypeInfo_17_17 = (MR_Word) (&transform_hlds__term_traversal_scalar_common_1[4]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_17_17, ((MR_Box) (ArgX4_9)), ((MR_Box) (ArgY4_10)));
          if (succeeded)
          {
            TypeInfo_18_18 = (MR_Word) (&transform_hlds__term_traversal_scalar_common_1[5]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_18_18, ((MR_Box) (ArgX5_11)), ((MR_Box) (ArgY5_12)));
          }
        }
      }
    }
  }
  return succeeded;
}

void MR_CALL 
transform_hlds__term_traversal__init_term_traversal_params_9_p_0(
  MR_Word FunctorInfo_10,
  MR_Word PredProcId_11,
  MR_Word Context_12,
  MR_Word VarTable_13,
  MR_Word OutputSuppliers_14,
  MR_Word RecInputSuppliers_15,
  MR_Integer MaxErrors_16,
  MR_Integer MaxPaths_17,
  MR_Word * Params_18)
{
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
    *Params_18 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (FunctorInfo_10));
    MR_hl_field(0, base, 1) = ((MR_Box) (PredProcId_11));
    MR_hl_field(0, base, 2) = ((MR_Box) (Context_12));
    MR_hl_field(0, base, 3) = ((MR_Box) (VarTable_13));
    MR_hl_field(0, base, 4) = ((MR_Box) (OutputSuppliers_14));
    MR_hl_field(0, base, 5) = ((MR_Box) (RecInputSuppliers_15));
    MR_hl_field(0, base, 6) = ((MR_Box) (MaxErrors_16));
    MR_hl_field(0, base, 7) = ((MR_Box) (MaxPaths_17));
  }
}

void MR_CALL 
transform_hlds__term_traversal__upper_bound_active_vars_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * ActiveVars_2)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    mercury__bag__init_1_p_0((MR_Word) (&transform_hlds__term_traversal_scalar_common_1[0]), ActiveVars_2);
  else
  {
    MR_Word Path_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Paths_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ActiveVars1_7;
    MR_Word ActiveVars2_12;

    transform_hlds__term_traversal__upper_bound_active_vars_2_p_0(Paths_5, &ActiveVars1_7);
    ActiveVars2_12 = ((MR_Word) ((MR_hl_field(0, Path_4, (MR_Integer) 4))));
    mercury__bag__least_upper_bound_3_p_0((MR_Word) (&transform_hlds__term_traversal_scalar_common_1[0]), ActiveVars1_7, ActiveVars2_12, ActiveVars_2);
  }
}

static MR_bool MR_CALL 
transform_hlds__term_traversal__term_traverse_goal_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = transform_hlds__term_util__pred_proc_id_terminates_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static MR_Box MR_CALL 
transform_hlds__term_traversal__term_traverse_goal_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__2_2;

  conv0_HeadVar__2_2 = hlds__hlds_goal__foreign_arg_var_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
  return wrapper_arg_2;
}

void MR_CALL 
transform_hlds__term_traversal__term_traverse_goal_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word Params_7,
  MR_Word Goal_8,
  MR_Word STATE_VARIABLE_Info_0_109,
  MR_Word * STATE_VARIABLE_Info_110)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word GoalExpr_10 = ((MR_Word) ((MR_hl_field(0, Goal_8, (MR_Integer) 0))));
    MR_Word GoalInfo_11 = ((MR_Word) ((MR_hl_field(0, Goal_8, (MR_Integer) 1))));
    MR_Word STATE_VARIABLE_Info_112_112;
    MR_Word Detism_12;
    MR_Word Var_240;
    MR_Word Var_13;

    // setup for model_det tailcalls optimized into a loop
    ;
    Detism_12 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(GoalInfo_11);
    parse_tree__prog_data__determinism_components_3_p_0(Detism_12, &Var_13, &Var_240);
    succeeded = ((MR_Integer) 0 == Var_240);
    if (succeeded)
      transform_hlds__term_traversal__cannot_succeed_2_p_0(STATE_VARIABLE_Info_0_109, &STATE_VARIABLE_Info_112_112);
    else
      STATE_VARIABLE_Info_112_112 = STATE_VARIABLE_Info_0_109;
    switch (MR_tag((MR_Word) GoalExpr_10)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word SubGoal_106 = (MR_Word) ((MR_Word) (GoalExpr_10));
          MR_Word next_value_of_Goal_8 = SubGoal_106;
          MR_Word next_value_of_STATE_VARIABLE_Info_0_109 = STATE_VARIABLE_Info_112_112;

          // direct tailcall eliminated
          ;
          Goal_8 = next_value_of_Goal_8;
          STATE_VARIABLE_Info_0_109 = next_value_of_STATE_VARIABLE_Info_0_109;
          continue;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Unification_17 = ((MR_Word) ((MR_hl_field(1, GoalExpr_10, (MR_Integer) 3))));

          switch (MR_tag((MR_Word) Unification_17)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word OutVar_19 = ((MR_Word) ((MR_hl_field(0, Unification_17, (MR_Integer) 0))));
                MR_Word ConsId_20 = ((MR_Word) ((MR_hl_field(0, Unification_17, (MR_Integer) 1))));
                MR_Word Args_21 = ((MR_Word) ((MR_hl_field(0, Unification_17, (MR_Integer) 2))));
                MR_Word Modes_22 = ((MR_Word) ((MR_hl_field(0, Unification_17, (MR_Integer) 3))));
                MR_Integer Gamma_26;
                MR_Word InVars_27;
                MR_Word OutVars0_28;

                succeeded = transform_hlds__term_traversal__unify_change_9_p_0(ModuleInfo_6, OutVar_19, ConsId_20, Args_21, Modes_22, Params_7, &Gamma_26, &InVars_27, &OutVars0_28);
                if (succeeded)
                {
                  MR_Word OutVars_29;

                  mercury__bag__insert_3_p_0((MR_Word) (&transform_hlds__term_traversal_scalar_common_1[0]), ((MR_Box) (OutVar_19)), OutVars0_28, &OutVars_29);
                  transform_hlds__term_traversal__record_change_6_p_0(InVars_27, OutVars_29, Gamma_26, (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_Info_112_112, STATE_VARIABLE_Info_110);
                }
                else
                  *STATE_VARIABLE_Info_110 = STATE_VARIABLE_Info_112_112;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word InVar_30 = ((MR_Word) ((MR_hl_field(1, Unification_17, (MR_Integer) 0))));
                MR_Word ConsId_176 = ((MR_Word) ((MR_hl_field(1, Unification_17, (MR_Integer) 1))));
                MR_Word Args_177 = ((MR_Word) ((MR_hl_field(1, Unification_17, (MR_Integer) 2))));
                MR_Word Modes_178 = ((MR_Word) ((MR_hl_field(1, Unification_17, (MR_Integer) 3))));
                MR_Integer Gamma0_33;
                MR_Word InVars0_34;
                MR_Word OutVars_175;

                succeeded = transform_hlds__term_traversal__unify_change_9_p_0(ModuleInfo_6, InVar_30, ConsId_176, Args_177, Modes_178, Params_7, &Gamma0_33, &InVars0_34, &OutVars_175);
                if (succeeded)
                {
                  MR_Integer Gamma_171;
                  MR_Word InVars_172;

                  mercury__bag__insert_3_p_0((MR_Word) (&transform_hlds__term_traversal_scalar_common_1[0]), ((MR_Box) (InVar_30)), InVars0_34, &InVars_172);
                  Gamma_171 = (MR_Integer) ((MR_Unsigned) 0 - (MR_Unsigned) Gamma0_33);
                  transform_hlds__term_traversal__record_change_6_p_0(InVars_172, OutVars_175, Gamma_171, (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_Info_112_112, STATE_VARIABLE_Info_110);
                }
                else
                  {
                    mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.term_traversal.term_traverse_goal\'/5", (MR_String) "higher order deconstruction");
                    return;
                  }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word OutVar_182 = ((MR_Word) ((MR_hl_field(2, Unification_17, (MR_Integer) 0))));
                MR_Word InVars_183;
                MR_Word OutVars_184;
                MR_Word InVar_185 = ((MR_Word) ((MR_hl_field(2, Unification_17, (MR_Integer) 1))));

                InVars_183 = mercury__bag__singleton_1_f_0((MR_Word) (&transform_hlds__term_traversal_scalar_common_1[0]), ((MR_Box) (InVar_185)));
                OutVars_184 = mercury__bag__singleton_1_f_0((MR_Word) (&transform_hlds__term_traversal_scalar_common_1[0]), ((MR_Box) (OutVar_182)));
                transform_hlds__term_traversal__record_change_6_p_0(InVars_183, OutVars_184, (MR_Integer) 0, (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_Info_112_112, STATE_VARIABLE_Info_110);
              }
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) ((MR_hl_field(3, Unification_17, (MR_Integer) 0))))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  *STATE_VARIABLE_Info_110 = STATE_VARIABLE_Info_112_112;
                  break;
                case (MR_Integer) 1:
                  {
                    mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.term_traversal.term_traverse_goal\'/5", (MR_String) "complicated unify");
                    return;
                  }
                  break;
              }
              break;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word CallPredId_40 = ((MR_Word) ((MR_hl_field(2, GoalExpr_10, (MR_Integer) 0))));
          MR_Integer CallProcId_41 = ((MR_Integer) ((MR_hl_field(2, GoalExpr_10, (MR_Integer) 1))));
          MR_Word Context_45;
          MR_Word PPId_46;
          MR_Word CallPPId_47;
          MR_Word CallProcInfo_49;
          MR_Word CallArgModes_50;
          MR_Word CallArgSizeInfo_51;
          MR_Word CallTerminationInfo_52;
          MR_Word STATE_VARIABLE_Info_127_127;
          MR_Word STATE_VARIABLE_Info_137_137;
          MR_Word STATE_VARIABLE_Info_139_139;
          MR_Word Args_188 = ((MR_Word) ((MR_hl_field(2, GoalExpr_10, (MR_Integer) 2))));
          MR_Word InVars_189;
          MR_Word OutVars_190;
          MR_Word Var_48;
          MR_Word Var_135;
          MR_Word VarTable_59;
          MR_Word RecInputSuppliers_61;
          MR_Word RecInputSuppliersMap_60;
          MR_Box conv3_RecInputSuppliers_61;

          Context_45 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_11);
          transform_hlds__term_traversal__params_get_ppid_2_p_0(Params_7, &PPId_46);
          {
            CallPPId_47 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, CallPPId_47, 0) = ((MR_Box) (CallPredId_40));
            MR_hl_field(0, CallPPId_47, 1) = ((MR_Box) (CallProcId_41));
          }
          hlds__hlds_module__module_info_pred_proc_info_5_p_0(ModuleInfo_6, CallPredId_40, CallProcId_41, &Var_48, &CallProcInfo_49);
          hlds__hlds_pred__proc_info_get_argmodes_2_p_0(CallProcInfo_49, &CallArgModes_50);
          hlds__hlds_pred__proc_info_get_maybe_arg_size_info_2_p_0(CallProcInfo_49, &CallArgSizeInfo_51);
          hlds__hlds_pred__proc_info_get_maybe_termination_info_2_p_0(CallProcInfo_49, &CallTerminationInfo_52);
          transform_hlds__term_util__partition_call_args_5_p_0(ModuleInfo_6, CallArgModes_50, Args_188, &InVars_189, &OutVars_190);
          if ((CallArgSizeInfo_51 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            MR_Word OutputSuppliersMap_57;
            MR_Word Var_132;
            MR_Word OutputSuppliers_186;
            MR_Word UsedInVars_187;
            MR_Box conv2_OutputSuppliers_186;

            transform_hlds__term_traversal__params_get_output_suppliers_2_p_0(Params_7, &OutputSuppliersMap_57);
            mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__term_traversal_scalar_common_1[1]), OutputSuppliersMap_57, ((MR_Box) (CallPPId_47)), &conv2_OutputSuppliers_186);
            OutputSuppliers_186 = ((MR_Word) (conv2_OutputSuppliers_186));
            transform_hlds__term_traversal__remove_unused_args_4_p_0(Args_188, OutputSuppliers_186, InVars_189, &UsedInVars_187);
            {
              Var_132 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_132, 0) = ((MR_Box) (CallPPId_47));
              MR_hl_field(1, Var_132, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            transform_hlds__term_traversal__record_change_6_p_0(UsedInVars_187, OutVars_190, (MR_Integer) 0, Var_132, STATE_VARIABLE_Info_112_112, &STATE_VARIABLE_Info_127_127);
          }
          else
          {
            MR_Word Var_241 = ((MR_Word) ((MR_hl_field(1, CallArgSizeInfo_51, (MR_Integer) 0))));

            if (((MR_tag((MR_Word) Var_241)) == (MR_Integer) 0))
            {
              MR_Integer CallGamma_53 = ((MR_Integer) ((MR_hl_field(0, Var_241, (MR_Integer) 0))));
              MR_Word OutputSuppliers_54 = ((MR_Word) ((MR_hl_field(0, Var_241, (MR_Integer) 1))));
              MR_Word UsedInVars_55;

              transform_hlds__term_traversal__remove_unused_args_4_p_0(Args_188, OutputSuppliers_54, InVars_189, &UsedInVars_55);
              transform_hlds__term_traversal__record_change_6_p_0(UsedInVars_55, OutVars_190, CallGamma_53, (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_Info_112_112, &STATE_VARIABLE_Info_127_127);
            }
            else
            {
              MR_Word Var_129;

              {
                Var_129 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Var_129, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(3, Var_129, 1) = ((MR_Box) (PPId_46));
                MR_hl_field(3, Var_129, 2) = ((MR_Box) (CallPPId_47));
              }
              transform_hlds__term_traversal__error_if_intersect_5_p_0(OutVars_190, Context_45, Var_129, STATE_VARIABLE_Info_112_112, &STATE_VARIABLE_Info_127_127);
            }
          }
          succeeded = (CallTerminationInfo_52 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            Var_135 = ((MR_Word) ((MR_hl_field(1, CallTerminationInfo_52, (MR_Integer) 0))));
            succeeded = ((MR_tag((MR_Word) Var_135)) == (MR_Integer) 1);
            if (succeeded)
            {
            }
          }
          if (succeeded)
          {
            MR_Word Var_136;

            {
              Var_136 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_136, 0) = ((MR_Box) (PPId_46));
              MR_hl_field(1, Var_136, 1) = ((MR_Box) (CallPPId_47));
            }
            transform_hlds__term_traversal__called_can_loop_5_p_0(Context_45, Var_136, Params_7, STATE_VARIABLE_Info_127_127, &STATE_VARIABLE_Info_137_137);
          }
          else
            STATE_VARIABLE_Info_137_137 = STATE_VARIABLE_Info_127_127;
          transform_hlds__term_traversal__params_get_var_table_2_p_0(Params_7, &VarTable_59);
          succeeded = transform_hlds__term_util__some_var_is_higher_order_2_p_0(VarTable_59, Args_188);
          if (succeeded)
          {
            MR_Word Var_138;

            {
              Var_138 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(2, Var_138, 0) = ((MR_Box) (PPId_46));
              MR_hl_field(2, Var_138, 1) = ((MR_Box) (CallPPId_47));
            }
            transform_hlds__term_traversal__add_term_error_5_p_0(Params_7, Context_45, Var_138, STATE_VARIABLE_Info_137_137, &STATE_VARIABLE_Info_139_139);
          }
          else
            STATE_VARIABLE_Info_139_139 = STATE_VARIABLE_Info_137_137;
          transform_hlds__term_traversal__params_get_rec_input_suppliers_2_p_0(Params_7, &RecInputSuppliersMap_60);
          succeeded = mercury__map__search_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__term_traversal_scalar_common_1[1]), RecInputSuppliersMap_60, ((MR_Box) (CallPPId_47)), &conv3_RecInputSuppliers_61);
          if (succeeded)
          {
            RecInputSuppliers_61 = ((MR_Word) (conv3_RecInputSuppliers_61));
            succeeded = MR_TRUE;
          }
          if (succeeded)
          {
            MR_Word Bag_62;
            MR_Word PathStart_63;
            MR_Word NewPath_64;
            MR_Word Var_140;

            transform_hlds__term_traversal__compute_rec_start_vars_3_p_0(Args_188, RecInputSuppliers_61, &Bag_62);
            {
              Var_140 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_140, 0) = ((MR_Box) (CallPPId_47));
              MR_hl_field(0, Var_140, 1) = ((MR_Box) (Context_45));
            }
            {
              PathStart_63 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, PathStart_63, 0) = ((MR_Box) (Var_140));
            }
            {
              NewPath_64 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, NewPath_64, 0) = ((MR_Box) (PPId_46));
              MR_hl_field(0, NewPath_64, 1) = ((MR_Box) (PathStart_63));
              MR_hl_field(0, NewPath_64, 2) = ((MR_Box) ((MR_Integer) 0));
              MR_hl_field(0, NewPath_64, 3) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(0, NewPath_64, 4) = ((MR_Box) (Bag_62));
            }
            transform_hlds__term_traversal__add_path_3_p_0(NewPath_64, STATE_VARIABLE_Info_139_139, STATE_VARIABLE_Info_110);
          }
          else
            *STATE_VARIABLE_Info_110 = STATE_VARIABLE_Info_139_139;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, GoalExpr_10, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Details_72 = ((MR_Word) ((MR_hl_field(3, GoalExpr_10, (MR_Integer) 1))));
              MR_Word ArgModes_73 = ((MR_Word) ((MR_hl_field(3, GoalExpr_10, (MR_Integer) 3))));
              MR_Word Args_217 = ((MR_Word) ((MR_hl_field(3, GoalExpr_10, (MR_Integer) 2))));
              MR_Word Context_219;

              Context_219 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_11);
              switch (MR_tag((MR_Word) Details_72)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word Var_76 = ((MR_Word) ((MR_hl_field(0, Details_72, (MR_Integer) 0))));
                    MR_Word ClosureValueMap_80;
                    MR_Word ClosureValues0_81;
                    MR_Box conv1_ClosureValues0_81;

                    ClosureValueMap_80 = hlds__hlds_goal__goal_info_get_higher_order_value_map_1_f_0(GoalInfo_11);
                    succeeded = mercury__map__search_3_p_0((MR_Word) (&transform_hlds__term_traversal_scalar_common_1[0]), (MR_Word) (&transform_hlds__term_traversal_scalar_common_1[2]), ClosureValueMap_80, ((MR_Box) (Var_76)), &conv1_ClosureValues0_81);
                    if (succeeded)
                    {
                      ClosureValues0_81 = ((MR_Word) (conv1_ClosureValues0_81));
                      succeeded = MR_TRUE;
                    }
                    if (succeeded)
                    {
                      MR_Word ClosureValues_82;
                      MR_Word Terminating_83;
                      MR_Word NonTerminating_84;
                      MR_Word Var_152;

                      ClosureValues_82 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), ClosureValues0_81);
                      {
                        Var_152 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(0, Var_152, 0) = ((MR_Box) (&transform_hlds__term_traversal_scalar_common_3[1]));
                        MR_hl_field(0, Var_152, 1) = ((MR_Box) (transform_hlds__term_traversal__term_traverse_goal_5_p_0_2));
                        MR_hl_field(0, Var_152, 2) = ((MR_Box) ((MR_Integer) 1));
                        MR_hl_field(0, Var_152, 3) = ((MR_Box) (ModuleInfo_6));
                      }
                      mercury__list__filter_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), Var_152, ClosureValues_82, &Terminating_83, &NonTerminating_84);
                      if ((NonTerminating_84 == (MR_Word) ((MR_Unsigned) 0U)))
                      {
                        MR_Word Error_85;
                        MR_Word OutVars_199;
                        MR_Word PPId_200;
                        MR_Word _InVars_198;

                        transform_hlds__term_util__partition_call_args_5_p_0(ModuleInfo_6, ArgModes_73, Args_217, &_InVars_198, &OutVars_199);
                        transform_hlds__term_traversal__params_get_ppid_2_p_0(Params_7, &PPId_200);
                        {
                          Error_85 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(3, Error_85, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                          MR_hl_field(3, Error_85, 1) = ((MR_Box) (PPId_200));
                          MR_hl_field(3, Error_85, 2) = ((MR_Box) (Terminating_83));
                        }
                        transform_hlds__term_traversal__error_if_intersect_5_p_0(OutVars_199, Context_219, Error_85, STATE_VARIABLE_Info_112_112, STATE_VARIABLE_Info_110);
                      }
                      else
                        transform_hlds__term_traversal__add_term_error_5_p_0(Params_7, Context_219, (MR_Word) ((MR_Unsigned) 8U), STATE_VARIABLE_Info_112_112, STATE_VARIABLE_Info_110);
                    }
                    else
                      transform_hlds__term_traversal__add_term_error_5_p_0(Params_7, Context_219, (MR_Word) ((MR_Unsigned) 8U), STATE_VARIABLE_Info_112_112, STATE_VARIABLE_Info_110);
                  }
                  break;
                case (MR_Integer) 1:
                  transform_hlds__term_traversal__add_term_error_5_p_0(Params_7, Context_219, (MR_Word) ((MR_Unsigned) 12U), STATE_VARIABLE_Info_112_112, STATE_VARIABLE_Info_110);
                  break;
                case (MR_Integer) 2:
                  *STATE_VARIABLE_Info_110 = STATE_VARIABLE_Info_112_112;
                  break;
                case (MR_Integer) 3:
                  *STATE_VARIABLE_Info_110 = STATE_VARIABLE_Info_112_112;
                  break;
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Attributes_65 = ((MR_Word) ((MR_hl_field(3, GoalExpr_10, (MR_Integer) 1))));
              MR_Word ArgVars_70;
              MR_Word Args_191 = ((MR_Word) ((MR_hl_field(3, GoalExpr_10, (MR_Integer) 4))));
              MR_Word OutVars_192;
              MR_Word CallPredId_193 = ((MR_Word) ((MR_hl_field(3, GoalExpr_10, (MR_Integer) 2))));
              MR_Integer CallProcId_194 = ((MR_Integer) ((MR_hl_field(3, GoalExpr_10, (MR_Integer) 3))));
              MR_Word Context_195;
              MR_Word CallProcInfo_196;
              MR_Word CallArgModes_197;
              MR_Word Var_69;
              MR_Word _InVars_71;
              MR_Word Var_145;

              hlds__hlds_module__module_info_pred_proc_info_5_p_0(ModuleInfo_6, CallPredId_193, CallProcId_194, &Var_69, &CallProcInfo_196);
              hlds__hlds_pred__proc_info_get_argmodes_2_p_0(CallProcInfo_196, &CallArgModes_197);
              ArgVars_70 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0), (MR_Word) (&transform_hlds__term_traversal_scalar_common_1[0]), (MR_Word) (&transform_hlds__term_traversal_scalar_common_2[2]), Args_191);
              transform_hlds__term_util__partition_call_args_5_p_0(ModuleInfo_6, CallArgModes_197, ArgVars_70, &_InVars_71, &OutVars_192);
              Context_195 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_11);
              {
                Var_145 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_145, 0) = ((MR_Box) (CallPredId_193));
                MR_hl_field(0, Var_145, 1) = ((MR_Box) (CallProcId_194));
              }
              succeeded = transform_hlds__term_util__is_termination_known_2_p_0(ModuleInfo_6, Var_145);
              if (succeeded)
                transform_hlds__term_traversal__error_if_intersect_5_p_0(OutVars_192, Context_195, (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_Info_112_112, STATE_VARIABLE_Info_110);
              else
              {
                succeeded = transform_hlds__term_util__attributes_imply_termination_1_p_0(Attributes_65);
                if (succeeded)
                  transform_hlds__term_traversal__error_if_intersect_5_p_0(OutVars_192, Context_195, (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_Info_112_112, STATE_VARIABLE_Info_110);
                else
                {
                  MR_Word Var_150;

                  {
                    Var_150 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(3, Var_150, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                    MR_hl_field(3, Var_150, 1) = ((MR_Box) (CallPredId_193));
                  }
                  transform_hlds__term_traversal__add_term_error_5_p_0(Params_7, Context_195, Var_150, STATE_VARIABLE_Info_112_112, STATE_VARIABLE_Info_110);
                }
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word Goals_95 = ((MR_Word) ((MR_hl_field(3, GoalExpr_10, (MR_Integer) 2))));
              MR_Word RevGoals_96;

              mercury__list__reverse_2_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), Goals_95, &RevGoals_96);
              transform_hlds__term_traversal__term_traverse_rev_conj_5_p_0(ModuleInfo_6, Params_7, RevGoals_96, STATE_VARIABLE_Info_112_112, STATE_VARIABLE_Info_110);
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Goals_222 = ((MR_Word) ((MR_hl_field(3, GoalExpr_10, (MR_Integer) 1))));

              transform_hlds__term_traversal__term_traverse_disj_5_p_0(ModuleInfo_6, Params_7, Goals_222, STATE_VARIABLE_Info_112_112, STATE_VARIABLE_Info_110);
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Cases_99 = ((MR_Word) ((MR_hl_field(3, GoalExpr_10, (MR_Integer) 3))));

              transform_hlds__term_traversal__term_traverse_switch_5_p_0(ModuleInfo_6, Params_7, Cases_99, STATE_VARIABLE_Info_112_112, STATE_VARIABLE_Info_110);
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word SubGoal_223 = ((MR_Word) ((MR_hl_field(3, GoalExpr_10, (MR_Integer) 2))));
              MR_Word next_value_of_Goal_8 = SubGoal_223;
              MR_Word next_value_of_STATE_VARIABLE_Info_0_109 = STATE_VARIABLE_Info_112_112;

              // direct tailcall eliminated
              ;
              Goal_8 = next_value_of_Goal_8;
              STATE_VARIABLE_Info_0_109 = next_value_of_STATE_VARIABLE_Info_0_109;
              continue;
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word Cond_101 = ((MR_Word) ((MR_hl_field(3, GoalExpr_10, (MR_Integer) 2))));
              MR_Word Else_103 = ((MR_Word) ((MR_hl_field(3, GoalExpr_10, (MR_Integer) 4))));
              MR_Word CondThenInfo_104;
              MR_Word ElseInfo_105;
              MR_Word Goal_248 = ((MR_Word) ((MR_hl_field(3, GoalExpr_10, (MR_Integer) 3))));
              MR_Word Goals_249;
              MR_Word STATE_VARIABLE_Info_18_252;
              MR_Word Goal_259;

              {
                Goals_249 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Goals_249, 0) = ((MR_Box) (Cond_101));
                MR_hl_field(1, Goals_249, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              transform_hlds__term_traversal__term_traverse_goal_5_p_0(ModuleInfo_6, Params_7, Goal_248, STATE_VARIABLE_Info_112_112, &STATE_VARIABLE_Info_18_252);
              Goal_259 = ((MR_Word) ((MR_hl_field(1, Goals_249, (MR_Integer) 0))));
              transform_hlds__term_traversal__term_traverse_goal_5_p_0(ModuleInfo_6, Params_7, Goal_259, STATE_VARIABLE_Info_18_252, &CondThenInfo_104);
              transform_hlds__term_traversal__term_traverse_goal_5_p_0(ModuleInfo_6, Params_7, Else_103, STATE_VARIABLE_Info_112_112, &ElseInfo_105);
              transform_hlds__term_traversal__combine_paths_4_p_0(CondThenInfo_104, ElseInfo_105, Params_7, STATE_VARIABLE_Info_110);
            }
            break;
          case (MR_Integer) 7:
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.term_traversal.term_traverse_goal\'/5", (MR_String) "shorthand");
              return;
            }
            break;
        }
        break;
    }
    break;
  }
}

static void MR_CALL 
transform_hlds__term_traversal__term_traverse_rev_conj_5_p_0(
  MR_Word ModuleInfo_1,
  MR_Word Params_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_Info_0_4,
  MR_Word * STATE_VARIABLE_Info_5)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Info_5 = STATE_VARIABLE_Info_0_4;
    else
    {
      MR_Word Goal_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
      MR_Word Goals_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_Info_18_18;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word next_value_of_STATE_VARIABLE_Info_0_4;

      transform_hlds__term_traversal__term_traverse_goal_5_p_0(ModuleInfo_1, Params_2, Goal_13, STATE_VARIABLE_Info_0_4, &STATE_VARIABLE_Info_18_18);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_3 = Goals_14;
      next_value_of_STATE_VARIABLE_Info_0_4 = STATE_VARIABLE_Info_18_18;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      STATE_VARIABLE_Info_0_4 = next_value_of_STATE_VARIABLE_Info_0_4;
      continue;
    }
    break;
  }
}

static void MR_CALL 
transform_hlds__term_traversal__term_traverse_switch_5_p_0(
  MR_Word ModuleInfo_1,
  MR_Word Params_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_Info_0_4,
  MR_Word * HeadVar__5_5)
{
  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word Var_9;

    Var_9 = mercury__set__init_0_f_0((MR_Word) (&transform_hlds__term_traversal__transform_hlds__term_traversal__type_ctor_info_term_path_info_0));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *HeadVar__5_5 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_9));
      MR_hl_field(0, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
  }
  else
  {
    MR_Word Case_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word Cases_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word Goal_18 = ((MR_Word) ((MR_hl_field(0, Case_13, (MR_Integer) 2))));
    MR_Word CaseInfo_19;
    MR_Word CasesInfo_20;

    transform_hlds__term_traversal__term_traverse_goal_5_p_0(ModuleInfo_1, Params_2, Goal_18, STATE_VARIABLE_Info_0_4, &CaseInfo_19);
    transform_hlds__term_traversal__term_traverse_switch_5_p_0(ModuleInfo_1, Params_2, Cases_14, STATE_VARIABLE_Info_0_4, &CasesInfo_20);
    transform_hlds__term_traversal__combine_paths_4_p_0(CaseInfo_19, CasesInfo_20, Params_2, HeadVar__5_5);
  }
}

static void MR_CALL 
transform_hlds__term_traversal__term_traverse_disj_5_p_0(
  MR_Word ModuleInfo_1,
  MR_Word Params_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_Info_0_4,
  MR_Word * HeadVar__5_5)
{
  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word Var_9;

    Var_9 = mercury__set__init_0_f_0((MR_Word) (&transform_hlds__term_traversal__transform_hlds__term_traversal__type_ctor_info_term_path_info_0));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *HeadVar__5_5 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_9));
      MR_hl_field(0, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
  }
  else
  {
    MR_Word Goal_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word Goals_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word GoalInfo_16;
    MR_Word GoalsInfo_17;

    transform_hlds__term_traversal__term_traverse_goal_5_p_0(ModuleInfo_1, Params_2, Goal_13, STATE_VARIABLE_Info_0_4, &GoalInfo_16);
    transform_hlds__term_traversal__term_traverse_disj_5_p_0(ModuleInfo_1, Params_2, Goals_14, STATE_VARIABLE_Info_0_4, &GoalsInfo_17);
    transform_hlds__term_traversal__combine_paths_4_p_0(GoalInfo_16, GoalsInfo_17, Params_2, HeadVar__5_5);
  }
}

static void MR_CALL 
transform_hlds__term_traversal__params_get_rec_input_suppliers_2_p_0(
  MR_Word Params_3,
  MR_Word * X_4)
{
  *X_4 = ((MR_Word) ((MR_hl_field(0, Params_3, (MR_Integer) 5))));
}

static void MR_CALL 
transform_hlds__term_traversal__params_get_output_suppliers_2_p_0(
  MR_Word Params_3,
  MR_Word * X_4)
{
  *X_4 = ((MR_Word) ((MR_hl_field(0, Params_3, (MR_Integer) 4))));
}

static void MR_CALL 
transform_hlds__term_traversal__params_get_var_table_2_p_0(
  MR_Word Params_3,
  MR_Word * X_4)
{
  *X_4 = ((MR_Word) ((MR_hl_field(0, Params_3, (MR_Integer) 3))));
}

static void MR_CALL 
transform_hlds__term_traversal__params_get_ppid_2_p_0(
  MR_Word Params_3,
  MR_Word * X_4)
{
  *X_4 = ((MR_Word) ((MR_hl_field(0, Params_3, (MR_Integer) 1))));
}

static void MR_CALL 
transform_hlds__term_traversal__error_if_intersect_5_p_0(
  MR_Word OutVars_6,
  MR_Word Context_7,
  MR_Word ErrorKind_8,
  MR_Word STATE_VARIABLE_Info_0_16,
  MR_Word * STATE_VARIABLE_Info_17)
{
  MR_bool succeeded;

  if (((MR_tag((MR_Word) STATE_VARIABLE_Info_0_16)) == (MR_Integer) 1))
    *STATE_VARIABLE_Info_17 = STATE_VARIABLE_Info_0_16;
  else
  {
    MR_Word Paths_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_16, (MR_Integer) 0))));
    MR_Word CanLoop_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_16, (MR_Integer) 1))));
    MR_Word PathList_14;

    mercury__set__to_sorted_list_2_p_0((MR_Word) (&transform_hlds__term_traversal__transform_hlds__term_traversal__type_ctor_info_term_path_info_0), Paths_12, &PathList_14);
    succeeded = transform_hlds__term_traversal__some_active_vars_in_bag_2_p_0(PathList_14, OutVars_6);
    if (succeeded)
    {
      MR_Word Error_15;
      MR_Word Var_19;

      {
        Error_15 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Error_15, 0) = ((MR_Box) (Context_7));
        MR_hl_field(0, Error_15, 1) = ((MR_Box) (ErrorKind_8));
      }
      {
        Var_19 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_19, 0) = ((MR_Box) (Error_15));
        MR_hl_field(1, Var_19, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_Info_17 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Var_19));
        MR_hl_field(1, base, 1) = ((MR_Box) (CanLoop_13));
      }
    }
    else
      *STATE_VARIABLE_Info_17 = STATE_VARIABLE_Info_0_16;
  }
}

static MR_bool MR_CALL 
transform_hlds__term_traversal__some_active_vars_in_bag_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word OutVars_5)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (HeadVar__1_1 != (MR_Word) ((MR_Unsigned) 0U));
    MR_Word Path_3;
    MR_Word Paths_4;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      Path_3 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      Paths_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      {
        MR_Word Vars_10 = ((MR_Word) ((MR_hl_field(0, Path_3, (MR_Integer) 4))));

        succeeded = mercury__bag__intersect_2_p_0((MR_Word) (&transform_hlds__term_traversal_scalar_common_1[0]), Vars_10, OutVars_5);
      }
      if (!(succeeded))
      {
        MR_Word next_value_of_HeadVar__1_1 = Paths_4;

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

static void MR_CALL 
transform_hlds__term_traversal__record_change_6_p_0(
  MR_Word InVars_7,
  MR_Word OutVars_8,
  MR_Integer Gamma_9,
  MR_Word CalledPPIds_10,
  MR_Word Info0_11,
  MR_Word * Info_12)
{
  if (((MR_tag((MR_Word) Info0_11)) == (MR_Integer) 1))
    *Info_12 = Info0_11;
  else
  {
    MR_Word Paths0_15 = ((MR_Word) ((MR_hl_field(0, Info0_11, (MR_Integer) 0))));
    MR_Word CanLoop_16 = ((MR_Word) ((MR_hl_field(0, Info0_11, (MR_Integer) 1))));
    MR_Word PathsList0_17;
    MR_Word NewPaths0_18;
    MR_Word NewPaths_19;

    mercury__set__to_sorted_list_2_p_0((MR_Word) (&transform_hlds__term_traversal__transform_hlds__term_traversal__type_ctor_info_term_path_info_0), Paths0_15, &PathsList0_17);
    mercury__set__init_1_p_0((MR_Word) (&transform_hlds__term_traversal__transform_hlds__term_traversal__type_ctor_info_term_path_info_0), &NewPaths0_18);
    transform_hlds__term_traversal__record_change_2_7_p_0(PathsList0_17, InVars_7, OutVars_8, Gamma_9, CalledPPIds_10, NewPaths0_18, &NewPaths_19);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *Info_12 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (NewPaths_19));
      MR_hl_field(0, base, 1) = ((MR_Box) (CanLoop_16));
    }
  }
}

static void MR_CALL 
transform_hlds__term_traversal__record_change_2_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word InVars_2,
  MR_Word OutVars_3,
  MR_Integer CallGamma_4,
  MR_Word CallPPIds_5,
  MR_Word STATE_VARIABLE_PathSet_0_6,
  MR_Word * STATE_VARIABLE_PathSet_7)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_PathSet_7 = STATE_VARIABLE_PathSet_0_6;
    else
    {
      MR_Word Path0_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Paths0_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ProcData_22 = ((MR_Word) ((MR_hl_field(0, Path0_15, (MR_Integer) 0))));
      MR_Word Start_23 = ((MR_Word) ((MR_hl_field(0, Path0_15, (MR_Integer) 1))));
      MR_Integer Gamma0_24 = ((MR_Integer) ((MR_hl_field(0, Path0_15, (MR_Integer) 2))));
      MR_Word PPIds0_25 = ((MR_Word) ((MR_hl_field(0, Path0_15, (MR_Integer) 3))));
      MR_Word Vars0_26 = ((MR_Word) ((MR_hl_field(0, Path0_15, (MR_Integer) 4))));
      MR_Word Path_31;
      MR_Word STATE_VARIABLE_PathSet_34_34;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_PathSet_0_6;

      succeeded = mercury__bag__intersect_2_p_0((MR_Word) (&transform_hlds__term_traversal_scalar_common_1[0]), OutVars_3, Vars0_26);
      if (succeeded)
      {
        MR_Integer Gamma_27 = (MR_Integer) ((MR_Unsigned) CallGamma_4 + (MR_Unsigned) Gamma0_24);
        MR_Word PPIds_28;
        MR_Word Vars1_29;
        MR_Word Vars_30;

        mercury__list__append_3_p_1((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), CallPPIds_5, PPIds0_25, &PPIds_28);
        mercury__bag__subtract_3_p_0((MR_Word) (&transform_hlds__term_traversal_scalar_common_1[0]), Vars0_26, OutVars_3, &Vars1_29);
        mercury__bag__union_3_p_0((MR_Word) (&transform_hlds__term_traversal_scalar_common_1[0]), InVars_2, Vars1_29, &Vars_30);
        {
          Path_31 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Path_31, 0) = ((MR_Box) (ProcData_22));
          MR_hl_field(0, Path_31, 1) = ((MR_Box) (Start_23));
          MR_hl_field(0, Path_31, 2) = ((MR_Box) (Gamma_27));
          MR_hl_field(0, Path_31, 3) = ((MR_Box) (PPIds_28));
          MR_hl_field(0, Path_31, 4) = ((MR_Box) (Vars_30));
        }
      }
      else
        Path_31 = Path0_15;
      mercury__set__insert_3_p_0((MR_Word) (&transform_hlds__term_traversal__transform_hlds__term_traversal__type_ctor_info_term_path_info_0), ((MR_Box) (Path_31)), STATE_VARIABLE_PathSet_0_6, &STATE_VARIABLE_PathSet_34_34);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Paths0_16;
      next_value_of_STATE_VARIABLE_PathSet_0_6 = STATE_VARIABLE_PathSet_34_34;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_PathSet_0_6 = next_value_of_STATE_VARIABLE_PathSet_0_6;
      continue;
    }
    break;
  }
}

static MR_bool MR_CALL 
transform_hlds__term_traversal__unify_change_9_p_0(
  MR_Word ModuleInfo_10,
  MR_Word OutVar_11,
  MR_Word ConsId_12,
  MR_Word Args0_13,
  MR_Word Modes0_14,
  MR_Word Params_15,
  MR_Integer * Gamma_16,
  MR_Word * InVars_17,
  MR_Word * OutVars_18)
{
  MR_bool succeeded;
  MR_Word FunctorInfo_19 = ((MR_Word) ((MR_hl_field(0, Params_15, (MR_Integer) 0))));
  MR_Word VarTable_20 = ((MR_Word) ((MR_hl_field(0, Params_15, (MR_Integer) 3))));
  MR_Word Type_21;
  MR_Word TypeCtor_24;
  MR_Word Args1_25;
  MR_Word Modes1_26;
  MR_Word Args_27;
  MR_Word Modes_28;

  parse_tree__var_table__lookup_var_type_3_p_0(VarTable_20, OutVar_11, &Type_21);
  succeeded = parse_tree__prog_type__type_is_higher_order_1_p_0(Type_21);
  succeeded = !(succeeded);
  if (succeeded)
  {
    if (((((MR_tag((MR_Word) ConsId_12)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, ConsId_12, (MR_Integer) 0)))) == (MR_Integer) 12))))
      succeeded = MR_TRUE;
    else
    if (((((MR_tag((MR_Word) ConsId_12)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, ConsId_12, (MR_Integer) 0)))) == (MR_Integer) 13))))
      succeeded = MR_TRUE;
    else
      succeeded = MR_FALSE;
    succeeded = !(succeeded);
    if (succeeded)
    {
      parse_tree__prog_type__type_to_ctor_det_2_p_0(Type_21, &TypeCtor_24);
      transform_hlds__term_traversal__filter_typeinfos_from_args_and_modes_5_p_0(VarTable_20, Args0_13, &Args1_25, Modes0_14, &Modes1_26);
      transform_hlds__term_norm__functor_norm_9_p_0(ModuleInfo_10, FunctorInfo_19, TypeCtor_24, ConsId_12, Gamma_16, Args1_25, &Args_27, Modes1_26, &Modes_28);
      transform_hlds__term_util__split_unification_vars_5_p_0(ModuleInfo_10, Args_27, Modes_28, InVars_17, OutVars_18);
      succeeded = MR_TRUE;
    }
  }
  return succeeded;
}

static void MR_CALL 
transform_hlds__term_traversal__filter_typeinfos_from_args_and_modes_5_p_0(
  MR_Word VarTable_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5)
{
  MR_bool succeeded;

  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
      *HeadVar__5_5 = (MR_Word) ((MR_Unsigned) 0U);
    }
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.term_traversal.filter_typeinfos_from_args_and_modes\'/5", (MR_String) "list length mismatch");
        return;
      }
  else
  {
    MR_Word Var_31 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word Var_32 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));

    if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.term_traversal.filter_typeinfos_from_args_and_modes\'/5", (MR_String) "list length mismatch");
        return;
      }
    else
    {
      MR_Word Mode0_25 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 0))));
      MR_Word Modes0_26 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 1))));
      MR_Word TailArgs_28;
      MR_Word TailModes_29;
      MR_Word Type_30;

      transform_hlds__term_traversal__filter_typeinfos_from_args_and_modes_5_p_0(VarTable_1, Var_31, &TailArgs_28, Modes0_26, &TailModes_29);
      parse_tree__var_table__lookup_var_type_3_p_0(VarTable_1, Var_32, &Type_30);
      succeeded = parse_tree__prog_type__is_introduced_type_info_type_1_p_0(Type_30);
      if (succeeded)
      {
        *HeadVar__3_3 = TailArgs_28;
        *HeadVar__5_5 = TailModes_29;
      }
      else
      {
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__3_3 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Var_32));
          MR_hl_field(1, base, 1) = ((MR_Box) (TailArgs_28));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__5_5 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Mode0_25));
          MR_hl_field(1, base, 1) = ((MR_Box) (TailModes_29));
        }
      }
    }
  }
}

static void MR_CALL 
transform_hlds__term_traversal__compute_rec_start_vars_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      mercury__bag__init_1_p_0((MR_Word) (&transform_hlds__term_traversal_scalar_common_1[0]), HeadVar__3_3);
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.term_traversal.compute_rec_start_vars\'/3", (MR_String) "unmatched variables");
        return;
      }
  else
  {
    MR_Word Var_23 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Var_24 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));

    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.term_traversal.compute_rec_start_vars\'/3", (MR_String) "unmatched variables");
        return;
      }
    else
    {
      MR_Word RecInputSupplier_17 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word RecInputSuppliers_18 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Out1_20;

      transform_hlds__term_traversal__compute_rec_start_vars_3_p_0(Var_23, RecInputSuppliers_18, &Out1_20);
      switch (RecInputSupplier_17) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          *HeadVar__3_3 = Out1_20;
          break;
        case (MR_Integer) 1:
          mercury__bag__insert_3_p_0((MR_Word) (&transform_hlds__term_traversal_scalar_common_1[0]), ((MR_Box) (Var_24)), Out1_20, HeadVar__3_3);
          break;
      }
    }
  }
}

static void MR_CALL 
transform_hlds__term_traversal__called_can_loop_5_p_0(
  MR_Word Context_6,
  MR_Word ErrorKind_7,
  MR_Word Params_8,
  MR_Word Info0_9,
  MR_Word * Info_10)
{
  if (((MR_tag((MR_Word) Info0_9)) == (MR_Integer) 1))
  {
    MR_Word Errors_11 = ((MR_Word) ((MR_hl_field(1, Info0_9, (MR_Integer) 0))));
    MR_Word CanLoop0_12 = ((MR_Word) ((MR_hl_field(1, Info0_9, (MR_Integer) 1))));
    MR_Word CanLoop1_13;
    MR_Integer MaxErrors_14;
    MR_Word CanLoop_15;
    MR_Word Var_17;

    {
      Var_17 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_17, 0) = ((MR_Box) (Context_6));
      MR_hl_field(0, Var_17, 1) = ((MR_Box) (ErrorKind_7));
    }
    {
      CanLoop1_13 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, CanLoop1_13, 0) = ((MR_Box) (Var_17));
      MR_hl_field(1, CanLoop1_13, 1) = ((MR_Box) (CanLoop0_12));
    }
    MaxErrors_14 = ((MR_Integer) ((MR_hl_field(0, Params_8, (MR_Integer) 6))));
    mercury__list__take_upto_3_p_0((MR_Word) (&transform_hlds__term_errors__transform_hlds__term_errors__type_ctor_info_term_error_0), MaxErrors_14, CanLoop1_13, &CanLoop_15);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *Info_10 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Errors_11));
      MR_hl_field(1, base, 1) = ((MR_Box) (CanLoop_15));
    }
  }
  else
  {
    MR_Word Paths_16 = ((MR_Word) ((MR_hl_field(0, Info0_9, (MR_Integer) 0))));
    MR_Word Var_18;
    MR_Word CanLoop0_19 = ((MR_Word) ((MR_hl_field(0, Info0_9, (MR_Integer) 1))));
    MR_Word CanLoop1_20;
    MR_Integer MaxErrors_21;
    MR_Word CanLoop_22;

    {
      Var_18 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_18, 0) = ((MR_Box) (Context_6));
      MR_hl_field(0, Var_18, 1) = ((MR_Box) (ErrorKind_7));
    }
    {
      CanLoop1_20 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, CanLoop1_20, 0) = ((MR_Box) (Var_18));
      MR_hl_field(1, CanLoop1_20, 1) = ((MR_Box) (CanLoop0_19));
    }
    MaxErrors_21 = ((MR_Integer) ((MR_hl_field(0, Params_8, (MR_Integer) 6))));
    mercury__list__take_upto_3_p_0((MR_Word) (&transform_hlds__term_errors__transform_hlds__term_errors__type_ctor_info_term_error_0), MaxErrors_21, CanLoop1_20, &CanLoop_22);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *Info_10 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Paths_16));
      MR_hl_field(0, base, 1) = ((MR_Box) (CanLoop_22));
    }
  }
}

static void MR_CALL 
transform_hlds__term_traversal__add_term_error_5_p_0(
  MR_Word Params_6,
  MR_Word Context_7,
  MR_Word ErrorKind_8,
  MR_Word Info0_9,
  MR_Word * Info_10)
{
  if (((MR_tag((MR_Word) Info0_9)) == (MR_Integer) 1))
  {
    MR_Word Errors0_11 = ((MR_Word) ((MR_hl_field(1, Info0_9, (MR_Integer) 0))));
    MR_Word CanLoop_12 = ((MR_Word) ((MR_hl_field(1, Info0_9, (MR_Integer) 1))));
    MR_Word Errors1_13;
    MR_Integer MaxErrors_14;
    MR_Word Errors_15;
    MR_Word Var_18;

    {
      Var_18 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_18, 0) = ((MR_Box) (Context_7));
      MR_hl_field(0, Var_18, 1) = ((MR_Box) (ErrorKind_8));
    }
    {
      Errors1_13 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Errors1_13, 0) = ((MR_Box) (Var_18));
      MR_hl_field(1, Errors1_13, 1) = ((MR_Box) (Errors0_11));
    }
    MaxErrors_14 = ((MR_Integer) ((MR_hl_field(0, Params_6, (MR_Integer) 6))));
    mercury__list__take_upto_3_p_0((MR_Word) (&transform_hlds__term_errors__transform_hlds__term_errors__type_ctor_info_term_error_0), MaxErrors_14, Errors1_13, &Errors_15);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *Info_10 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Errors_15));
      MR_hl_field(1, base, 1) = ((MR_Box) (CanLoop_12));
    }
  }
  else
  {
    MR_Word ErrorContext_17;
    MR_Word Var_19;
    MR_Word CanLoop_21 = ((MR_Word) ((MR_hl_field(0, Info0_9, (MR_Integer) 1))));

    {
      ErrorContext_17 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, ErrorContext_17, 0) = ((MR_Box) (Context_7));
      MR_hl_field(0, ErrorContext_17, 1) = ((MR_Box) (ErrorKind_8));
    }
    {
      Var_19 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_19, 0) = ((MR_Box) (ErrorContext_17));
      MR_hl_field(1, Var_19, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *Info_10 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Var_19));
      MR_hl_field(1, base, 1) = ((MR_Box) (CanLoop_21));
    }
  }
}

static void MR_CALL 
transform_hlds__term_traversal__add_path_3_p_0(
  MR_Word Path_4,
  MR_Word Info0_5,
  MR_Word * Info_6)
{
  if (((MR_tag((MR_Word) Info0_5)) == (MR_Integer) 1))
    *Info_6 = Info0_5;
  else
  {
    MR_Word Paths0_9 = ((MR_Word) ((MR_hl_field(0, Info0_5, (MR_Integer) 0))));
    MR_Word CanLoop_10 = ((MR_Word) ((MR_hl_field(0, Info0_5, (MR_Integer) 1))));
    MR_Word Paths_11;

    mercury__set__insert_3_p_0((MR_Word) (&transform_hlds__term_traversal__transform_hlds__term_traversal__type_ctor_info_term_path_info_0), ((MR_Box) (Path_4)), Paths0_9, &Paths_11);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *Info_6 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Paths_11));
      MR_hl_field(0, base, 1) = ((MR_Box) (CanLoop_10));
    }
  }
}

static void MR_CALL 
transform_hlds__term_traversal__cannot_succeed_2_p_0(
  MR_Word Info0_3,
  MR_Word * Info_4)
{
  if (((MR_tag((MR_Word) Info0_3)) == (MR_Integer) 1))
    *Info_4 = Info0_3;
  else
  {
    MR_Word CanLoop_8 = ((MR_Word) ((MR_hl_field(0, Info0_3, (MR_Integer) 1))));
    MR_Word Var_9;

    Var_9 = mercury__set__init_0_f_0((MR_Word) (&transform_hlds__term_traversal__transform_hlds__term_traversal__type_ctor_info_term_path_info_0));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *Info_4 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_9));
      MR_hl_field(0, base, 1) = ((MR_Box) (CanLoop_8));
    }
  }
}

static void MR_CALL 
transform_hlds__term_traversal__combine_paths_4_p_0(
  MR_Word InfoA_5,
  MR_Word InfoB_6,
  MR_Word Params_7,
  MR_Word * Info_8)
{
  MR_bool succeeded;

  if (((MR_tag((MR_Word) InfoA_5)) == (MR_Integer) 1))
  {
    MR_Word Var_52 = ((MR_Word) ((MR_hl_field(1, InfoA_5, (MR_Integer) 1))));
    MR_Word Var_53 = ((MR_Word) ((MR_hl_field(1, InfoA_5, (MR_Integer) 0))));

    if (((MR_tag((MR_Word) InfoB_6)) == (MR_Integer) 1))
    {
      MR_Word ErrorsB_11 = ((MR_Word) ((MR_hl_field(1, InfoB_6, (MR_Integer) 0))));
      MR_Word CanLoopB_12 = ((MR_Word) ((MR_hl_field(1, InfoB_6, (MR_Integer) 1))));
      MR_Integer MaxErrors_13 = ((MR_Integer) ((MR_hl_field(0, Params_7, (MR_Integer) 6))));
      MR_Word Errors_14;
      MR_Word CanLoop_15;
      MR_Word Var_25;
      MR_Word Var_26;

      Var_25 = mercury__list__f_43_43_2_f_0((MR_Word) (&transform_hlds__term_errors__transform_hlds__term_errors__type_ctor_info_term_error_0), Var_53, ErrorsB_11);
      mercury__list__take_upto_3_p_0((MR_Word) (&transform_hlds__term_errors__transform_hlds__term_errors__type_ctor_info_term_error_0), MaxErrors_13, Var_25, &Errors_14);
      Var_26 = mercury__list__f_43_43_2_f_0((MR_Word) (&transform_hlds__term_errors__transform_hlds__term_errors__type_ctor_info_term_error_0), Var_52, CanLoopB_12);
      mercury__list__take_upto_3_p_0((MR_Word) (&transform_hlds__term_errors__transform_hlds__term_errors__type_ctor_info_term_error_0), MaxErrors_13, Var_26, &CanLoop_15);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *Info_8 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Errors_14));
        MR_hl_field(1, base, 1) = ((MR_Box) (CanLoop_15));
      }
    }
    else
    {
      MR_Word Var_27;
      MR_Word CanLoopB_35 = ((MR_Word) ((MR_hl_field(0, InfoB_6, (MR_Integer) 1))));
      MR_Integer MaxErrors_36 = ((MR_Integer) ((MR_hl_field(0, Params_7, (MR_Integer) 6))));
      MR_Word CanLoop_37;

      Var_27 = mercury__list__f_43_43_2_f_0((MR_Word) (&transform_hlds__term_errors__transform_hlds__term_errors__type_ctor_info_term_error_0), Var_52, CanLoopB_35);
      mercury__list__take_upto_3_p_0((MR_Word) (&transform_hlds__term_errors__transform_hlds__term_errors__type_ctor_info_term_error_0), MaxErrors_36, Var_27, &CanLoop_37);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *Info_8 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Var_53));
        MR_hl_field(1, base, 1) = ((MR_Box) (CanLoop_37));
      }
    }
  }
  else
  {
    MR_Word Var_54 = ((MR_Word) ((MR_hl_field(0, InfoA_5, (MR_Integer) 1))));
    MR_Word Var_55 = ((MR_Word) ((MR_hl_field(0, InfoA_5, (MR_Integer) 0))));

    if (((MR_tag((MR_Word) InfoB_6)) == (MR_Integer) 1))
    {
      MR_Word Var_28;
      MR_Word ErrorsB_39 = ((MR_Word) ((MR_hl_field(1, InfoB_6, (MR_Integer) 0))));
      MR_Word CanLoopB_40 = ((MR_Word) ((MR_hl_field(1, InfoB_6, (MR_Integer) 1))));
      MR_Integer MaxErrors_41 = ((MR_Integer) ((MR_hl_field(0, Params_7, (MR_Integer) 6))));
      MR_Word CanLoop_42;

      Var_28 = mercury__list__f_43_43_2_f_0((MR_Word) (&transform_hlds__term_errors__transform_hlds__term_errors__type_ctor_info_term_error_0), Var_54, CanLoopB_40);
      mercury__list__take_upto_3_p_0((MR_Word) (&transform_hlds__term_errors__transform_hlds__term_errors__type_ctor_info_term_error_0), MaxErrors_41, Var_28, &CanLoop_42);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *Info_8 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (ErrorsB_39));
        MR_hl_field(1, base, 1) = ((MR_Box) (CanLoop_42));
      }
    }
    else
    {
      MR_Word PathsB_19 = ((MR_Word) ((MR_hl_field(0, InfoB_6, (MR_Integer) 0))));
      MR_Word Paths_20;
      MR_Integer MaxPaths_21;
      MR_Word Var_29;
      MR_Word CanLoopB_44 = ((MR_Word) ((MR_hl_field(0, InfoB_6, (MR_Integer) 1))));
      MR_Integer MaxErrors_45 = ((MR_Integer) ((MR_hl_field(0, Params_7, (MR_Integer) 6))));
      MR_Word CanLoop_46;
      MR_Integer Count_22;

      Var_29 = mercury__list__f_43_43_2_f_0((MR_Word) (&transform_hlds__term_errors__transform_hlds__term_errors__type_ctor_info_term_error_0), Var_54, CanLoopB_44);
      mercury__list__take_upto_3_p_0((MR_Word) (&transform_hlds__term_errors__transform_hlds__term_errors__type_ctor_info_term_error_0), MaxErrors_45, Var_29, &CanLoop_46);
      mercury__set__union_3_p_0((MR_Word) (&transform_hlds__term_traversal__transform_hlds__term_traversal__type_ctor_info_term_path_info_0), PathsB_19, Var_55, &Paths_20);
      MaxPaths_21 = ((MR_Integer) ((MR_hl_field(0, Params_7, (MR_Integer) 7))));
      mercury__set__count_2_p_0((MR_Word) (&transform_hlds__term_traversal__transform_hlds__term_traversal__type_ctor_info_term_path_info_0), Paths_20, &Count_22);
      succeeded = (Count_22 <= MaxPaths_21);
      if (succeeded)
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          *Info_8 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Paths_20));
          MR_hl_field(0, base, 1) = ((MR_Box) (CanLoop_46));
        }
      else
      {
        MR_Word Context_23 = ((MR_Word) ((MR_hl_field(0, Params_7, (MR_Integer) 2))));
        MR_Word Error_24;
        MR_Word Var_31;

        {
          Error_24 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Error_24, 0) = ((MR_Box) (Context_23));
          MR_hl_field(0, Error_24, 1) = ((MR_Box) ((MR_Unsigned) 20U));
        }
        {
          Var_31 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_31, 0) = ((MR_Box) (Error_24));
          MR_hl_field(1, Var_31, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *Info_8 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Var_31));
          MR_hl_field(1, base, 1) = ((MR_Box) (CanLoop_46));
        }
      }
    }
  }
}

static void MR_CALL 
transform_hlds__term_traversal__remove_unused_args_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_Vars_0_3,
  MR_Word * STATE_VARIABLE_Vars_4)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
        *STATE_VARIABLE_Vars_4 = STATE_VARIABLE_Vars_0_3;
      else
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.term_traversal.remove_unused_args\'/4", (MR_String) "unmatched variables");
          return;
        }
    else
    {
      MR_Word Var_32 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Var_33 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));

      if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.term_traversal.remove_unused_args\'/4", (MR_String) "unmatched variables");
          return;
        }
      else
      {
        MR_Word UsedVar_24 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
        MR_Word UsedVars_25 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));

        switch (UsedVar_24) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word STATE_VARIABLE_Vars_30_30;
              MR_Word next_value_of_HeadVar__1_1;
              MR_Word next_value_of_HeadVar__2_2;
              MR_Word next_value_of_STATE_VARIABLE_Vars_0_3;

              mercury__bag__delete_3_p_0((MR_Word) (&transform_hlds__term_traversal_scalar_common_1[0]), ((MR_Box) (Var_33)), STATE_VARIABLE_Vars_0_3, &STATE_VARIABLE_Vars_30_30);
              // direct tailcall eliminated
              ;
              next_value_of_HeadVar__1_1 = Var_32;
              next_value_of_HeadVar__2_2 = UsedVars_25;
              next_value_of_STATE_VARIABLE_Vars_0_3 = STATE_VARIABLE_Vars_30_30;
              HeadVar__1_1 = next_value_of_HeadVar__1_1;
              HeadVar__2_2 = next_value_of_HeadVar__2_2;
              STATE_VARIABLE_Vars_0_3 = next_value_of_STATE_VARIABLE_Vars_0_3;
              continue;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word next_value_of_HeadVar__1_1 = Var_32;
              MR_Word next_value_of_HeadVar__2_2 = UsedVars_25;

              // direct tailcall eliminated
              ;
              HeadVar__1_1 = next_value_of_HeadVar__1_1;
              HeadVar__2_2 = next_value_of_HeadVar__2_2;
              continue;
            }
            break;
        }
      }
    }
    break;
  }
}

static MR_bool MR_CALL 
transform_hlds__term_traversal____Unify____term_path_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__term_traversal____Unify____term_path_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__term_traversal____Compare____term_path_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__term_traversal____Compare____term_path_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
transform_hlds__term_traversal____Unify____term_traversal_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__term_traversal____Unify____term_traversal_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__term_traversal____Compare____term_traversal_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__term_traversal____Compare____term_traversal_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
transform_hlds__term_traversal____Unify____term_traversal_params_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__term_traversal____Unify____term_traversal_params_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__term_traversal____Compare____term_traversal_params_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__term_traversal____Compare____term_traversal_params_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__transform_hlds__term_traversal__init(void)
{
}

void mercury__transform_hlds__term_traversal__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&transform_hlds__term_traversal__transform_hlds__term_traversal__type_ctor_info_term_path_info_0);
	MR_register_type_ctor_info(&transform_hlds__term_traversal__transform_hlds__term_traversal__type_ctor_info_term_traversal_info_0);
	MR_register_type_ctor_info(&transform_hlds__term_traversal__transform_hlds__term_traversal__type_ctor_info_term_traversal_params_0);
}

void mercury__transform_hlds__term_traversal__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__transform_hlds__term_traversal__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module transform_hlds.term_traversal.
