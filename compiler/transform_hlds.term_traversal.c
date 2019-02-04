/*
** Automatically generated from `term_traversal.m'
** by the Mercury compiler,
** version DEV
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


/* :- module transform_hlds.term_traversal. */
/* :- implementation. */

/*
INIT mercury__transform_hlds__term_traversal__init
ENDINIT
*/

#include "transform_hlds.term_traversal.mih"


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
#include "int.mih"
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
#include "require.mih"
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
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_traversal__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct2 transform_hlds__term_traversal__pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0term__type_ctor_info_context_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__term_traversal__maybe__ti_maybe_1pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0term__type_ctor_info_context_0;

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

static const MR_FA_TypeInfo_Struct2 transform_hlds__term_traversal__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0;

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
  MR_Word * HeadVar__2_2);

static void MR_CALL 
transform_hlds__term_traversal__params_get_output_suppliers_2_p_0(
  MR_Word Params_3,
  MR_Word * HeadVar__2_2);

static void MR_CALL 
transform_hlds__term_traversal__params_get_var_types_2_p_0(
  MR_Word Params_3,
  MR_Word * HeadVar__2_2);

static void MR_CALL 
transform_hlds__term_traversal__params_get_ppid_2_p_0(
  MR_Word Params_3,
  MR_Word * HeadVar__2_2);

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
  MR_Word VarTypes_1,
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
transform_hlds__term_traversal__add_error_5_p_0(
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
transform_hlds__term_traversal__params_get_context_2_p_0(
  MR_Word Params_3,
  MR_Word * HeadVar__2_2);

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

static /* final */ const MR_Box transform_hlds__term_traversal_scalar_common_2[4][3];

static /* final */ const MR_Box transform_hlds__term_traversal_scalar_common_3[2][5];




static /* final */ const MR_Box transform_hlds__term_traversal_scalar_common_1[8][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&transform_hlds__term_traversal_scalar_common_2[0]))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__bag__bag__type_ctor_info_bag_1)),
    ((MR_Box) (&transform_hlds__term_traversal_scalar_common_1[0]))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&transform_hlds__term_errors__transform_hlds__term_errors__type_ctor_info_term_error_0))
  },
  /* row 7 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&transform_hlds__term_traversal__transform_hlds__term_traversal__type_ctor_info_term_path_info_0))
  },
};

static /* final */ const MR_Box transform_hlds__term_traversal_scalar_common_2[4][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&transform_hlds__term_traversal_scalar_common_1[0])),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&transform_hlds__term_traversal_scalar_common_1[1]))
  },
  /* row 3 */
  {
    ((MR_Box) (&transform_hlds__term_traversal_scalar_common_3[0])),
    ((MR_Box) (transform_hlds__term_traversal__term_traverse_goal_5_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box transform_hlds__term_traversal_scalar_common_3[2][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0)),
    ((MR_Box) (&transform_hlds__term_traversal__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_traversal__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_TypeInfo_Struct2 transform_hlds__term_traversal__pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0term__type_ctor_info_context_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_TypeInfo) &mercury__term__term__type_ctor_info_context_0
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__term_traversal__maybe__ti_maybe_1pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0term__type_ctor_info_context_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &transform_hlds__term_traversal__pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0term__type_ctor_info_context_0
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__term_traversal__list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__term_traversal__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__term_traversal__bag__ti_bag_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__bag__bag__type_ctor_info_bag_1,
  {
    (MR_TypeInfo) &transform_hlds__term_traversal__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_PseudoTypeInfo transform_hlds__term_traversal__transform_hlds__term_traversal__field_types_term_path_info_0_0[5] = {
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
  (MR_PseudoTypeInfo) &transform_hlds__term_traversal__maybe__ti_maybe_1pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0term__type_ctor_info_context_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &transform_hlds__term_traversal__list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
  (MR_PseudoTypeInfo) &transform_hlds__term_traversal__bag__ti_bag_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

static const MR_DuFunctorDesc transform_hlds__term_traversal__transform_hlds__term_traversal__du_functor_desc_term_path_info_0_0 = {
  (MR_String) "term_path_info",
  (MR_Integer) 5,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  transform_hlds__term_traversal__transform_hlds__term_traversal__field_types_term_path_info_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr transform_hlds__term_traversal__transform_hlds__term_traversal__du_stag_ordered_term_path_info_0_0[1] = {
  &transform_hlds__term_traversal__transform_hlds__term_traversal__du_functor_desc_term_path_info_0_0
};

static const MR_DuPtagLayout transform_hlds__term_traversal__transform_hlds__term_traversal__du_ptag_ordered_term_path_info_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    transform_hlds__term_traversal__transform_hlds__term_traversal__du_stag_ordered_term_path_info_0_0
  }
};

static const MR_DuFunctorDescPtr transform_hlds__term_traversal__transform_hlds__term_traversal__du_name_ordered_term_path_info_0[1] = {
  &transform_hlds__term_traversal__transform_hlds__term_traversal__du_functor_desc_term_path_info_0_0
};

static const MR_Integer transform_hlds__term_traversal__transform_hlds__term_traversal__functor_number_map_term_path_info_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct transform_hlds__term_traversal__transform_hlds__term_traversal__type_ctor_info_term_path_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__term_traversal____Unify____term_path_info_0_0_10001)),
  ((MR_Box) (transform_hlds__term_traversal____Compare____term_path_info_0_0_10001)),
  (MR_String) "transform_hlds.term_traversal",
  (MR_String) "term_path_info",
  {     transform_hlds__term_traversal__transform_hlds__term_traversal__du_name_ordered_term_path_info_0 },
  {     transform_hlds__term_traversal__transform_hlds__term_traversal__du_ptag_ordered_term_path_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  transform_hlds__term_traversal__transform_hlds__term_traversal__functor_number_map_term_path_info_0
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__term_traversal__set_ordlist__ti_set_ordlist_1transform_hlds__term_traversal__type_ctor_info_term_path_info_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &transform_hlds__term_traversal__transform_hlds__term_traversal__type_ctor_info_term_path_info_0
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__term_traversal__list__ti_list_1transform_hlds__term_errors__type_ctor_info_term_error_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &transform_hlds__term_errors__transform_hlds__term_errors__type_ctor_info_term_error_0
  }
};

static const MR_PseudoTypeInfo transform_hlds__term_traversal__transform_hlds__term_traversal__field_types_term_traversal_info_0_0[2] = {
  (MR_PseudoTypeInfo) &transform_hlds__term_traversal__set_ordlist__ti_set_ordlist_1transform_hlds__term_traversal__type_ctor_info_term_path_info_0,
  (MR_PseudoTypeInfo) &transform_hlds__term_traversal__list__ti_list_1transform_hlds__term_errors__type_ctor_info_term_error_0
};

static const MR_DuFunctorDesc transform_hlds__term_traversal__transform_hlds__term_traversal__du_functor_desc_term_traversal_info_0_0 = {
  (MR_String) "term_traversal_ok",
  (MR_Integer) 2,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  transform_hlds__term_traversal__transform_hlds__term_traversal__field_types_term_traversal_info_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo transform_hlds__term_traversal__transform_hlds__term_traversal__field_types_term_traversal_info_0_1[2] = {
  (MR_PseudoTypeInfo) &transform_hlds__term_traversal__list__ti_list_1transform_hlds__term_errors__type_ctor_info_term_error_0,
  (MR_PseudoTypeInfo) &transform_hlds__term_traversal__list__ti_list_1transform_hlds__term_errors__type_ctor_info_term_error_0
};

static const MR_DuFunctorDesc transform_hlds__term_traversal__transform_hlds__term_traversal__du_functor_desc_term_traversal_info_0_1 = {
  (MR_String) "term_traversal_error",
  (MR_Integer) 2,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  transform_hlds__term_traversal__transform_hlds__term_traversal__field_types_term_traversal_info_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr transform_hlds__term_traversal__transform_hlds__term_traversal__du_stag_ordered_term_traversal_info_0_0[1] = {
  &transform_hlds__term_traversal__transform_hlds__term_traversal__du_functor_desc_term_traversal_info_0_0
};

static const MR_DuFunctorDescPtr transform_hlds__term_traversal__transform_hlds__term_traversal__du_stag_ordered_term_traversal_info_0_1[1] = {
  &transform_hlds__term_traversal__transform_hlds__term_traversal__du_functor_desc_term_traversal_info_0_1
};

static const MR_DuPtagLayout transform_hlds__term_traversal__transform_hlds__term_traversal__du_ptag_ordered_term_traversal_info_0[2] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    transform_hlds__term_traversal__transform_hlds__term_traversal__du_stag_ordered_term_traversal_info_0_0
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    transform_hlds__term_traversal__transform_hlds__term_traversal__du_stag_ordered_term_traversal_info_0_1
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
  (MR_Integer) 17,
  (MR_Integer) 2,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__term_traversal____Unify____term_traversal_info_0_0_10001)),
  ((MR_Box) (transform_hlds__term_traversal____Compare____term_traversal_info_0_0_10001)),
  (MR_String) "transform_hlds.term_traversal",
  (MR_String) "term_traversal_info",
  {     transform_hlds__term_traversal__transform_hlds__term_traversal__du_name_ordered_term_traversal_info_0 },
  {     transform_hlds__term_traversal__transform_hlds__term_traversal__du_ptag_ordered_term_traversal_info_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  transform_hlds__term_traversal__transform_hlds__term_traversal__functor_number_map_term_traversal_info_0
};

static const MR_FA_TypeInfo_Struct2 transform_hlds__term_traversal__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &transform_hlds__term_traversal__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__term_traversal__list__ti_list_1bool__type_ctor_info_bool_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__bool__bool__type_ctor_info_bool_0
  }
};

static const MR_FA_TypeInfo_Struct2 transform_hlds__term_traversal__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0list__ti_list_1bool__type_ctor_info_bool_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_TypeInfo) &transform_hlds__term_traversal__list__ti_list_1bool__type_ctor_info_bool_0
  }
};

static const MR_PseudoTypeInfo transform_hlds__term_traversal__transform_hlds__term_traversal__field_types_term_traversal_params_0_0[8] = {
  (MR_PseudoTypeInfo) &transform_hlds__term_norm__transform_hlds__term_norm__type_ctor_info_functor_info_0,
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0,
  (MR_PseudoTypeInfo) &transform_hlds__term_traversal__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0,
  (MR_PseudoTypeInfo) &transform_hlds__term_traversal__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0list__ti_list_1bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &transform_hlds__term_traversal__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0list__ti_list_1bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

static const MR_ConstString transform_hlds__term_traversal__transform_hlds__term_traversal__field_names_term_traversal_params_0_0[8] = {
  (MR_String) "term_trav_functor_info",
  (MR_String) "term_trav_ppid",
  (MR_String) "term_trav_context",
  (MR_String) "term_trav_vartypes",
  (MR_String) "term_trav_output_suppliers",
  (MR_String) "term_trav_rec_input_supplier",
  (MR_String) "term_trav_max_errors",
  (MR_String) "term_trav_max_paths"
};

static const MR_DuFunctorDesc transform_hlds__term_traversal__transform_hlds__term_traversal__du_functor_desc_term_traversal_params_0_0 = {
  (MR_String) "term_traversal_params",
  (MR_Integer) 8,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  transform_hlds__term_traversal__transform_hlds__term_traversal__field_types_term_traversal_params_0_0,
  transform_hlds__term_traversal__transform_hlds__term_traversal__field_names_term_traversal_params_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr transform_hlds__term_traversal__transform_hlds__term_traversal__du_stag_ordered_term_traversal_params_0_0[1] = {
  &transform_hlds__term_traversal__transform_hlds__term_traversal__du_functor_desc_term_traversal_params_0_0
};

static const MR_DuPtagLayout transform_hlds__term_traversal__transform_hlds__term_traversal__du_ptag_ordered_term_traversal_params_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    transform_hlds__term_traversal__transform_hlds__term_traversal__du_stag_ordered_term_traversal_params_0_0
  }
};

static const MR_DuFunctorDescPtr transform_hlds__term_traversal__transform_hlds__term_traversal__du_name_ordered_term_traversal_params_0[1] = {
  &transform_hlds__term_traversal__transform_hlds__term_traversal__du_functor_desc_term_traversal_params_0_0
};

static const MR_Integer transform_hlds__term_traversal__transform_hlds__term_traversal__functor_number_map_term_traversal_params_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct transform_hlds__term_traversal__transform_hlds__term_traversal__type_ctor_info_term_traversal_params_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__term_traversal____Unify____term_traversal_params_0_0_10001)),
  ((MR_Box) (transform_hlds__term_traversal____Compare____term_traversal_params_0_0_10001)),
  (MR_String) "transform_hlds.term_traversal",
  (MR_String) "term_traversal_params",
  {     transform_hlds__term_traversal__transform_hlds__term_traversal__du_name_ordered_term_traversal_params_0 },
  {     transform_hlds__term_traversal__transform_hlds__term_traversal__du_ptag_ordered_term_traversal_params_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  transform_hlds__term_traversal__transform_hlds__term_traversal__functor_number_map_term_traversal_params_0
};

void MR_CALL 
transform_hlds__term_traversal____Compare____term_traversal_params_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_27 = (MR_Integer) HeadVar__2_2;
    MR_Integer CastY_28 = (MR_Integer) HeadVar__3_3;

    succeeded = (CastX_27 == CastY_28);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0)));
      MR_Word ArgX2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1)));
      MR_Word ArgX3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2)));
      MR_Word ArgY3_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2)));
      MR_Word ArgX4_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3)));
      MR_Word ArgY4_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 3)));
      MR_Word ArgX5_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4)));
      MR_Word ArgY5_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 4)));
      MR_Word ArgX6_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 5)));
      MR_Word ArgY6_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 5)));
      MR_Integer ArgX7_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 6)));
      MR_Integer ArgY7_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 6)));
      MR_Integer ArgX8_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 7)));
      MR_Integer ArgY8_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 7)));
      MR_Word Var_20;

      transform_hlds__term_norm____Compare____functor_info_0_0(&Var_20, ArgX1_4, ArgY1_5);
      succeeded = (Var_20 == (MR_Integer) 0);
      succeeded = !(succeeded);
      if (succeeded)
        *HeadVar__1_1 = Var_20;
      else
      {
        MR_Word Var_21;

        hlds__hlds_pred____Compare____pred_proc_id_0_0(&Var_21, ArgX2_6, ArgY2_7);
        succeeded = (Var_21 == (MR_Integer) 0);
        succeeded = !(succeeded);
        if (succeeded)
          *HeadVar__1_1 = Var_21;
        else
        {
          MR_Word Var_22;

          mercury__term____Compare____context_0_0(&Var_22, ArgX3_8, ArgY3_9);
          succeeded = (Var_22 == (MR_Integer) 0);
          succeeded = !(succeeded);
          if (succeeded)
            *HeadVar__1_1 = Var_22;
          else
          {
            MR_Word Var_23;

            mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_traversal_scalar_common_2[1], &Var_23, ((MR_Box) (ArgX4_10)), ((MR_Box) (ArgY4_11)));
            succeeded = (Var_23 == (MR_Integer) 0);
            succeeded = !(succeeded);
            if (succeeded)
              *HeadVar__1_1 = Var_23;
            else
            {
              MR_Word Var_24;

              mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_traversal_scalar_common_2[2], &Var_24, ((MR_Box) (ArgX5_12)), ((MR_Box) (ArgY5_13)));
              succeeded = (Var_24 == (MR_Integer) 0);
              succeeded = !(succeeded);
              if (succeeded)
                *HeadVar__1_1 = Var_24;
              else
              {
                MR_Word Var_25;

                mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_traversal_scalar_common_2[2], &Var_25, ((MR_Box) (ArgX6_14)), ((MR_Box) (ArgY6_15)));
                succeeded = (Var_25 == (MR_Integer) 0);
                succeeded = !(succeeded);
                if (succeeded)
                  *HeadVar__1_1 = Var_25;
                else
                {
                  MR_Word Var_26;

                  mercury__private_builtin__builtin_compare_int_3_p_0(&Var_26, ArgX7_16, ArgY7_17);
                  succeeded = (Var_26 == (MR_Integer) 0);
                  succeeded = !(succeeded);
                  if (succeeded)
                    *HeadVar__1_1 = Var_26;
                  else
                    mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, ArgX8_18, ArgY8_19);
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
  {
    MR_bool succeeded;
    MR_Integer CastX_19 = (MR_Integer) HeadVar__1_1;
    MR_Integer CastY_20 = (MR_Integer) HeadVar__2_2;

    succeeded = (CastX_19 == CastY_20);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word TypeInfo_24_24;
      MR_Word TypeInfo_25_25;
      MR_Word TypeInfo_26_26;
      MR_Word ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word ArgX3_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2)));
      MR_Word ArgY3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2)));
      MR_Word ArgX4_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3)));
      MR_Word ArgY4_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3)));
      MR_Word ArgX5_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 4)));
      MR_Word ArgY5_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4)));
      MR_Word ArgX6_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 5)));
      MR_Word ArgY6_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 5)));
      MR_Integer ArgX7_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 6)));
      MR_Integer ArgY7_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 6)));
      MR_Integer ArgX8_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 7)));
      MR_Integer ArgY8_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 7)));

      succeeded = transform_hlds__term_norm____Unify____functor_info_0_0(ArgX1_3, ArgY1_4);
      if (succeeded)
      {
        succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(ArgX2_5, ArgY2_6);
        if (succeeded)
        {
          succeeded = mercury__term____Unify____context_0_0(ArgX3_7, ArgY3_8);
          if (succeeded)
          {
            TypeInfo_24_24 = (MR_Word) &transform_hlds__term_traversal_scalar_common_2[1];
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_24_24, ((MR_Box) (ArgX4_9)), ((MR_Box) (ArgY4_10)));
            if (succeeded)
            {
              TypeInfo_25_25 = (MR_Word) &transform_hlds__term_traversal_scalar_common_2[2];
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_25_25, ((MR_Box) (ArgX5_11)), ((MR_Box) (ArgY5_12)));
              if (succeeded)
              {
                TypeInfo_26_26 = (MR_Word) &transform_hlds__term_traversal_scalar_common_2[2];
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
}

void MR_CALL 
transform_hlds__term_traversal____Compare____term_traversal_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_22 = (MR_Integer) HeadVar__2_2;
    MR_Integer CastY_23 = (MR_Integer) HeadVar__3_3;

    succeeded = (CastX_22 == CastY_23);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
    {
      MR_Word Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));

      if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Word ArgY1_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0)));
        MR_Word ArgY2_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1)));
        MR_Word Var_21;

        mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_traversal_scalar_common_1[6], &Var_21, ((MR_Box) (Var_29)), ((MR_Box) (ArgY1_18)));
        succeeded = (Var_21 == (MR_Integer) 0);
        succeeded = !(succeeded);
        if (succeeded)
          *HeadVar__1_1 = Var_21;
        else
        {
          mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_traversal_scalar_common_1[6], HeadVar__1_1, ((MR_Box) (Var_28)), ((MR_Box) (ArgY2_20)));
        }
      }
      else
        *HeadVar__1_1 = (MR_Integer) 2;
    }
    else
    {
      MR_Word Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));

      if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
        *HeadVar__1_1 = (MR_Integer) 1;
      else
      {
        MR_Word ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0)));
        MR_Word ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1)));
        MR_Word Var_8;

        mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_traversal_scalar_common_1[7], &Var_8, ((MR_Box) (Var_31)), ((MR_Box) (ArgY1_5)));
        succeeded = (Var_8 == (MR_Integer) 0);
        succeeded = !(succeeded);
        if (succeeded)
          *HeadVar__1_1 = Var_8;
        else
        {
          mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_traversal_scalar_common_1[6], HeadVar__1_1, ((MR_Box) (Var_30)), ((MR_Box) (ArgY2_7)));
        }
      }
    }
  }
}

MR_bool MR_CALL 
transform_hlds__term_traversal____Unify____term_traversal_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_11 = (MR_Integer) HeadVar__1_1;
    MR_Integer CastY_12 = (MR_Integer) HeadVar__2_2;

    succeeded = (CastX_11 == CastY_12);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
    {
      MR_Word TypeInfo_13_13;
      MR_Word TypeInfo_14_14;
      MR_Word ArgX1_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word ArgY1_8;
      MR_Word ArgX2_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word ArgY2_10;

      succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
      {
        ArgY1_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));
        ArgY2_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));
        TypeInfo_13_13 = (MR_Word) &transform_hlds__term_traversal_scalar_common_1[6];
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_13_13, ((MR_Box) (ArgX1_7)), ((MR_Box) (ArgY1_8)));
        if (succeeded)
        {
          TypeInfo_14_14 = (MR_Word) &transform_hlds__term_traversal_scalar_common_1[6];
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_14_14, ((MR_Box) (ArgX2_9)), ((MR_Box) (ArgY2_10)));
        }
      }
    }
    else
    {
      MR_Word TypeInfo_15_15;
      MR_Word TypeInfo_16_16;
      MR_Word ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word ArgY1_4;
      MR_Word ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word ArgY2_6;

      succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
      if (succeeded)
      {
        ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
        ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
        TypeInfo_15_15 = (MR_Word) &transform_hlds__term_traversal_scalar_common_1[7];
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_15_15, ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
        if (succeeded)
        {
          TypeInfo_16_16 = (MR_Word) &transform_hlds__term_traversal_scalar_common_1[6];
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_16_16, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
        }
      }
    }
    return succeeded;
  }
}

void MR_CALL 
transform_hlds__term_traversal____Compare____term_path_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_18 = (MR_Integer) HeadVar__2_2;
    MR_Integer CastY_19 = (MR_Integer) HeadVar__3_3;

    succeeded = (CastX_18 == CastY_19);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0)));
      MR_Word ArgX2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1)));
      MR_Integer ArgX3_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2)));
      MR_Integer ArgY3_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2)));
      MR_Word ArgX4_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3)));
      MR_Word ArgY4_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 3)));
      MR_Word ArgX5_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4)));
      MR_Word ArgY5_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 4)));
      MR_Word Var_14;

      hlds__hlds_pred____Compare____pred_proc_id_0_0(&Var_14, ArgX1_4, ArgY1_5);
      succeeded = (Var_14 == (MR_Integer) 0);
      succeeded = !(succeeded);
      if (succeeded)
        *HeadVar__1_1 = Var_14;
      else
      {
        MR_Word Var_15;

        mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_traversal_scalar_common_1[3], &Var_15, ((MR_Box) (ArgX2_6)), ((MR_Box) (ArgY2_7)));
        succeeded = (Var_15 == (MR_Integer) 0);
        succeeded = !(succeeded);
        if (succeeded)
          *HeadVar__1_1 = Var_15;
        else
        {
          MR_Word Var_16;

          mercury__private_builtin__builtin_compare_int_3_p_0(&Var_16, ArgX3_8, ArgY3_9);
          succeeded = (Var_16 == (MR_Integer) 0);
          succeeded = !(succeeded);
          if (succeeded)
            *HeadVar__1_1 = Var_16;
          else
          {
            MR_Word Var_17;

            mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_traversal_scalar_common_1[4], &Var_17, ((MR_Box) (ArgX4_10)), ((MR_Box) (ArgY4_11)));
            succeeded = (Var_17 == (MR_Integer) 0);
            succeeded = !(succeeded);
            if (succeeded)
              *HeadVar__1_1 = Var_17;
            else
            {
              mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_traversal_scalar_common_1[5], HeadVar__1_1, ((MR_Box) (ArgX5_12)), ((MR_Box) (ArgY5_13)));
            }
          }
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
  {
    MR_bool succeeded;
    MR_Integer CastX_13 = (MR_Integer) HeadVar__1_1;
    MR_Integer CastY_14 = (MR_Integer) HeadVar__2_2;

    succeeded = (CastX_13 == CastY_14);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word TypeInfo_16_16;
      MR_Word TypeInfo_17_17;
      MR_Word TypeInfo_18_18;
      MR_Word ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
      MR_Integer ArgX3_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2)));
      MR_Integer ArgY3_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2)));
      MR_Word ArgX4_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3)));
      MR_Word ArgY4_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3)));
      MR_Word ArgX5_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 4)));
      MR_Word ArgY5_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4)));

      succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(ArgX1_3, ArgY1_4);
      if (succeeded)
      {
        TypeInfo_16_16 = (MR_Word) &transform_hlds__term_traversal_scalar_common_1[3];
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_16_16, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
        if (succeeded)
        {
          succeeded = (ArgX3_7 == ArgY3_8);
          if (succeeded)
          {
            TypeInfo_17_17 = (MR_Word) &transform_hlds__term_traversal_scalar_common_1[4];
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_17_17, ((MR_Box) (ArgX4_9)), ((MR_Box) (ArgY4_10)));
            if (succeeded)
            {
              TypeInfo_18_18 = (MR_Word) &transform_hlds__term_traversal_scalar_common_1[5];
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_18_18, ((MR_Box) (ArgX5_11)), ((MR_Box) (ArgY5_12)));
            }
          }
        }
      }
    }
    return succeeded;
  }
}

void MR_CALL 
transform_hlds__term_traversal__upper_bound_active_vars_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * ActiveVars_2)
{
  if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
  {
    mercury__bag__init_1_p_0((MR_Word) &transform_hlds__term_traversal_scalar_common_1[0], ActiveVars_2);
  }
  else
  {
    MR_Word Path_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
    MR_Word Paths_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
    MR_Word ActiveVars1_7;
    MR_Word ActiveVars2_12;
    MR_Word Var_8;
    MR_Word Var_9;
    MR_Integer Var_10;
    MR_Word Var_11;

    transform_hlds__term_traversal__upper_bound_active_vars_2_p_0(Paths_5, &ActiveVars1_7);
    Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), Path_4, (MR_Integer) 0)));
    Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), Path_4, (MR_Integer) 1)));
    Var_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Path_4, (MR_Integer) 2)));
    Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), Path_4, (MR_Integer) 3)));
    ActiveVars2_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), Path_4, (MR_Integer) 4)));
    mercury__bag__least_upper_bound_3_p_0((MR_Word) &transform_hlds__term_traversal_scalar_common_1[0], ActiveVars1_7, ActiveVars2_12, ActiveVars_2);
  }
}

static MR_bool MR_CALL 
transform_hlds__term_traversal__term_traverse_goal_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = transform_hlds__term_util__pred_proc_id_terminates_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1));
    return succeeded;
  }
}

static MR_Box MR_CALL 
transform_hlds__term_traversal__term_traverse_goal_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__2_2;

    conv0_HeadVar__2_2 = hlds__hlds_goal__foreign_arg_var_1_f_0(((MR_Word) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
    return wrapper_arg_2;
  }
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
    /* tailcall optimized into a loop */
    {
      MR_bool succeeded;
      MR_Word GoalExpr_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal_8, (MR_Integer) 0)));
      MR_Word GoalInfo_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal_8, (MR_Integer) 1)));
      MR_Word STATE_VARIABLE_Info_112_112;
      MR_Word Detism_12;
      MR_Word Var_243;
      MR_Word Var_13;

      Detism_12 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(GoalInfo_11);
      parse_tree__prog_data__determinism_components_3_p_0(Detism_12, &Var_13, &Var_243);
      succeeded = ((MR_Integer) 0 == Var_243);
      if (succeeded)
        transform_hlds__term_traversal__cannot_succeed_2_p_0(STATE_VARIABLE_Info_0_109, &STATE_VARIABLE_Info_112_112);
      else
        STATE_VARIABLE_Info_112_112 = STATE_VARIABLE_Info_0_109;
      switch (MR_tag((MR_Word) GoalExpr_10)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word SubGoal_106 = (MR_Word) MR_body(((MR_Word) GoalExpr_10), (MR_Integer) 0);

            /* direct tailcall eliminated */
            {
              MR_Word next_value_of_Goal_8 = SubGoal_106;
              MR_Word next_value_of_STATE_VARIABLE_Info_0_109 = STATE_VARIABLE_Info_112_112;

              Goal_8 = next_value_of_Goal_8;
              STATE_VARIABLE_Info_0_109 = next_value_of_STATE_VARIABLE_Info_0_109;
            }
            continue;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Unification_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), GoalExpr_10, (MR_Integer) 3)));
            MR_Word _Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), GoalExpr_10, (MR_Integer) 0)));
            MR_Word _RHS_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), GoalExpr_10, (MR_Integer) 1)));
            MR_Word _UniMode_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), GoalExpr_10, (MR_Integer) 2)));
            MR_Word _Context_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), GoalExpr_10, (MR_Integer) 4)));

            switch (MR_tag((MR_Word) Unification_17)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word OutVar_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), Unification_17, (MR_Integer) 0)));
                  MR_Word ConsId_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), Unification_17, (MR_Integer) 1)));
                  MR_Word Args_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), Unification_17, (MR_Integer) 2)));
                  MR_Word Modes_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), Unification_17, (MR_Integer) 3)));
                  MR_Word Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), Unification_17, (MR_Integer) 4)));
                  MR_Word Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), Unification_17, (MR_Integer) 5)));
                  MR_Word Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), Unification_17, (MR_Integer) 6)));
                  MR_Integer Gamma_26;
                  MR_Word InVars_27;
                  MR_Word OutVars0_28;

                  succeeded = transform_hlds__term_traversal__unify_change_9_p_0(ModuleInfo_6, OutVar_19, ConsId_20, Args_21, Modes_22, Params_7, &Gamma_26, &InVars_27, &OutVars0_28);
                  if (succeeded)
                  {
                    MR_Word OutVars_29;

                    mercury__bag__insert_3_p_0((MR_Word) &transform_hlds__term_traversal_scalar_common_1[0], ((MR_Box) (OutVar_19)), OutVars0_28, &OutVars_29);
                    transform_hlds__term_traversal__record_change_6_p_0(InVars_27, OutVars_29, Gamma_26, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), STATE_VARIABLE_Info_112_112, STATE_VARIABLE_Info_110);
                  }
                  else
                    *STATE_VARIABLE_Info_110 = STATE_VARIABLE_Info_112_112;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word InVar_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), Unification_17, (MR_Integer) 0)));
                  MR_Word ConsId_179 = ((MR_Word) (MR_hl_field(MR_mktag(1), Unification_17, (MR_Integer) 1)));
                  MR_Word Args_180 = ((MR_Word) (MR_hl_field(MR_mktag(1), Unification_17, (MR_Integer) 2)));
                  MR_Word Modes_181 = ((MR_Word) (MR_hl_field(MR_mktag(1), Unification_17, (MR_Integer) 3)));
                  MR_Word Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), Unification_17, (MR_Integer) 4)));
                  MR_Word Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), Unification_17, (MR_Integer) 5)));
                  MR_Integer Gamma0_33;
                  MR_Word InVars0_34;
                  MR_Word OutVars_178;

                  succeeded = transform_hlds__term_traversal__unify_change_9_p_0(ModuleInfo_6, InVar_30, ConsId_179, Args_180, Modes_181, Params_7, &Gamma0_33, &InVars0_34, &OutVars_178);
                  if (succeeded)
                  {
                    MR_Integer Gamma_174;
                    MR_Word InVars_175;

                    mercury__bag__insert_3_p_0((MR_Word) &transform_hlds__term_traversal_scalar_common_1[0], ((MR_Box) (InVar_30)), InVars0_34, &InVars_175);
                    Gamma_174 = ((MR_Integer) 0 - Gamma0_33);
                    transform_hlds__term_traversal__record_change_6_p_0(InVars_175, OutVars_178, Gamma_174, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), STATE_VARIABLE_Info_112_112, STATE_VARIABLE_Info_110);
                  }
                  else
                  {
                    {
                      mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.term_traversal", (MR_String) "predicate \140transform_hlds.term_traversal.term_traverse_goal\'/5", (MR_String) "higher order deconstruction");
                      return;
                    }
                  }
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word TypeInfo_229_229 = (MR_Word) &transform_hlds__term_traversal_scalar_common_1[0];
                  MR_Word OutVar_185 = ((MR_Word) (MR_hl_field(MR_mktag(2), Unification_17, (MR_Integer) 0)));
                  MR_Word InVars_186;
                  MR_Word OutVars_187;
                  MR_Word InVar_188 = ((MR_Word) (MR_hl_field(MR_mktag(2), Unification_17, (MR_Integer) 1)));

                  InVars_186 = mercury__bag__singleton_1_f_0(TypeInfo_229_229, ((MR_Box) (InVar_188)));
                  OutVars_187 = mercury__bag__singleton_1_f_0(TypeInfo_229_229, ((MR_Box) (OutVar_185)));
                  transform_hlds__term_traversal__record_change_6_p_0(InVars_186, OutVars_187, (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), STATE_VARIABLE_Info_112_112, STATE_VARIABLE_Info_110);
                }
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Unification_17, (MR_Integer) 0)))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *STATE_VARIABLE_Info_110 = STATE_VARIABLE_Info_112_112;
                    break;
                  case (MR_Integer) 1:
                    {
                      {
                        mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.term_traversal", (MR_String) "predicate \140transform_hlds.term_traversal.term_traverse_goal\'/5", (MR_String) "complicated unify");
                        return;
                      }
                    }
                    break;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word CallPredId_40 = ((MR_Word) (MR_hl_field(MR_mktag(2), GoalExpr_10, (MR_Integer) 0)));
            MR_Integer CallProcId_41 = ((MR_Integer) (MR_hl_field(MR_mktag(2), GoalExpr_10, (MR_Integer) 1)));
            MR_Word Context_45;
            MR_Word PPId_46;
            MR_Word CallPPId_47;
            MR_Word CallProcInfo_49;
            MR_Word CallArgModes_50;
            MR_Word CallArgSizeInfo_51;
            MR_Word CallTerminationInfo_52;
            MR_Word STATE_VARIABLE_Info_150_150;
            MR_Word STATE_VARIABLE_Info_153_153;
            MR_Word STATE_VARIABLE_Info_155_155;
            MR_Word Args_191 = ((MR_Word) (MR_hl_field(MR_mktag(2), GoalExpr_10, (MR_Integer) 2)));
            MR_Word InVars_192;
            MR_Word OutVars_193;
            MR_Word Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(2), GoalExpr_10, (MR_Integer) 3)));
            MR_Word Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(2), GoalExpr_10, (MR_Integer) 4)));
            MR_Word Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(2), GoalExpr_10, (MR_Integer) 5)));
            MR_Word Var_48;
            MR_Word Var_151;
            MR_Word Var_58;
            MR_Word VarTypes_59;
            MR_Word RecInputSuppliers_61;
            MR_Word RecInputSuppliersMap_60;
            MR_Box conv3_RecInputSuppliers_61;

            Context_45 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_11);
            transform_hlds__term_traversal__params_get_ppid_2_p_0(Params_7, &PPId_46);
            {
              CallPPId_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), CallPPId_47, 0) = ((MR_Box) (CallPredId_40));
              MR_hl_field(MR_mktag(0), CallPPId_47, 1) = ((MR_Box) (CallProcId_41));
            }
            hlds__hlds_module__module_info_pred_proc_info_5_p_0(ModuleInfo_6, CallPredId_40, CallProcId_41, &Var_48, &CallProcInfo_49);
            hlds__hlds_pred__proc_info_get_argmodes_2_p_0(CallProcInfo_49, &CallArgModes_50);
            hlds__hlds_pred__proc_info_get_maybe_arg_size_info_2_p_0(CallProcInfo_49, &CallArgSizeInfo_51);
            hlds__hlds_pred__proc_info_get_maybe_termination_info_2_p_0(CallProcInfo_49, &CallTerminationInfo_52);
            transform_hlds__term_util__partition_call_args_5_p_0(ModuleInfo_6, CallArgModes_50, Args_191, &InVars_192, &OutVars_193);
            if ((CallArgSizeInfo_51 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            {
              MR_Word OutputSuppliersMap_57;
              MR_Word Var_142;
              MR_Word OutputSuppliers_189;
              MR_Word UsedInVars_190;
              MR_Box conv2_OutputSuppliers_189;

              transform_hlds__term_traversal__params_get_output_suppliers_2_p_0(Params_7, &OutputSuppliersMap_57);
              mercury__map__lookup_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__term_traversal_scalar_common_1[1], OutputSuppliersMap_57, ((MR_Box) (CallPPId_47)), &conv2_OutputSuppliers_189);
              OutputSuppliers_189 = ((MR_Word) conv2_OutputSuppliers_189);
              transform_hlds__term_util__remove_unused_args_4_p_0(InVars_192, Args_191, OutputSuppliers_189, &UsedInVars_190);
              {
                Var_142 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_142, 0) = ((MR_Box) (CallPPId_47));
                MR_hl_field(MR_mktag(1), Var_142, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              transform_hlds__term_traversal__record_change_6_p_0(UsedInVars_190, OutVars_193, (MR_Integer) 0, Var_142, STATE_VARIABLE_Info_112_112, &STATE_VARIABLE_Info_150_150);
            }
            else
            {
              MR_Word Var_244 = ((MR_Word) (MR_hl_field(MR_mktag(1), CallArgSizeInfo_51, (MR_Integer) 0)));

              if (((MR_tag((MR_Word) Var_244)) == (MR_mktag((MR_Integer) 0))))
              {
                MR_Integer CallGamma_53 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Var_244, (MR_Integer) 0)));
                MR_Word OutputSuppliers_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_244, (MR_Integer) 1)));
                MR_Word UsedInVars_55;

                transform_hlds__term_util__remove_unused_args_4_p_0(InVars_192, Args_191, OutputSuppliers_54, &UsedInVars_55);
                transform_hlds__term_traversal__record_change_6_p_0(UsedInVars_55, OutVars_193, CallGamma_53, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), STATE_VARIABLE_Info_112_112, &STATE_VARIABLE_Info_150_150);
              }
              else
              {
                MR_Word Var_146;

                {
                  Var_146 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Var_146, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                  MR_hl_field(MR_mktag(3), Var_146, 1) = ((MR_Box) (PPId_46));
                  MR_hl_field(MR_mktag(3), Var_146, 2) = ((MR_Box) (CallPPId_47));
                }
                transform_hlds__term_traversal__error_if_intersect_5_p_0(OutVars_193, Context_45, Var_146, STATE_VARIABLE_Info_112_112, &STATE_VARIABLE_Info_150_150);
              }
            }
            succeeded = ((MR_tag((MR_Word) CallTerminationInfo_52)) == (MR_mktag((MR_Integer) 1)));
            if (succeeded)
            {
              Var_151 = ((MR_Word) (MR_hl_field(MR_mktag(1), CallTerminationInfo_52, (MR_Integer) 0)));
              succeeded = ((MR_tag((MR_Word) Var_151)) == (MR_mktag((MR_Integer) 1)));
              if (succeeded)
                Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_151, (MR_Integer) 0)));
            }
            if (succeeded)
            {
              MR_Word Var_152;

              {
                Var_152 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_152, 0) = ((MR_Box) (PPId_46));
                MR_hl_field(MR_mktag(1), Var_152, 1) = ((MR_Box) (CallPPId_47));
              }
              transform_hlds__term_traversal__called_can_loop_5_p_0(Context_45, Var_152, Params_7, STATE_VARIABLE_Info_150_150, &STATE_VARIABLE_Info_153_153);
            }
            else
              STATE_VARIABLE_Info_153_153 = STATE_VARIABLE_Info_150_150;
            transform_hlds__term_traversal__params_get_var_types_2_p_0(Params_7, &VarTypes_59);
            succeeded = transform_hlds__term_util__horder_vars_2_p_0(Args_191, VarTypes_59);
            if (succeeded)
            {
              MR_Word Var_154;

              {
                Var_154 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), Var_154, 0) = ((MR_Box) (PPId_46));
                MR_hl_field(MR_mktag(2), Var_154, 1) = ((MR_Box) (CallPPId_47));
              }
              transform_hlds__term_traversal__add_error_5_p_0(Params_7, Context_45, Var_154, STATE_VARIABLE_Info_153_153, &STATE_VARIABLE_Info_155_155);
            }
            else
              STATE_VARIABLE_Info_155_155 = STATE_VARIABLE_Info_153_153;
            transform_hlds__term_traversal__params_get_rec_input_suppliers_2_p_0(Params_7, &RecInputSuppliersMap_60);
            succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__term_traversal_scalar_common_1[1], RecInputSuppliersMap_60, ((MR_Box) (CallPPId_47)), &conv3_RecInputSuppliers_61);
            if (succeeded)
            {
              RecInputSuppliers_61 = ((MR_Word) conv3_RecInputSuppliers_61);
              succeeded = MR_TRUE;
            }
            if (succeeded)
            {
              MR_Word Bag_62;
              MR_Word PathStart_63;
              MR_Word NewPath_64;
              MR_Word Var_156;

              transform_hlds__term_traversal__compute_rec_start_vars_3_p_0(Args_191, RecInputSuppliers_61, &Bag_62);
              {
                Var_156 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_156, 0) = ((MR_Box) (CallPPId_47));
                MR_hl_field(MR_mktag(0), Var_156, 1) = ((MR_Box) (Context_45));
              }
              {
                PathStart_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), PathStart_63, 0) = ((MR_Box) (Var_156));
              }
              {
                NewPath_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), NewPath_64, 0) = ((MR_Box) (PPId_46));
                MR_hl_field(MR_mktag(0), NewPath_64, 1) = ((MR_Box) (PathStart_63));
                MR_hl_field(MR_mktag(0), NewPath_64, 2) = ((MR_Box) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(0), NewPath_64, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                MR_hl_field(MR_mktag(0), NewPath_64, 4) = ((MR_Box) (Bag_62));
              }
              transform_hlds__term_traversal__add_path_3_p_0(NewPath_64, STATE_VARIABLE_Info_155_155, STATE_VARIABLE_Info_110);
            }
            else
              *STATE_VARIABLE_Info_110 = STATE_VARIABLE_Info_155_155;
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word Details_72 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 1)));
                MR_Word ArgModes_73 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 3)));
                MR_Word Args_220 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 2)));
                MR_Word Context_222;
                MR_Word Var_74 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 4)));
                MR_Word Var_75 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 5)));

                Context_222 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_11);
                switch (MR_tag((MR_Word) Details_72)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      MR_Word Var_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), Details_72, (MR_Integer) 0)));
                      MR_Word ClosureValueMap_80;
                      MR_Word Var_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), Details_72, (MR_Integer) 1)));
                      MR_Word Var_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), Details_72, (MR_Integer) 2)));
                      MR_Integer Var_79 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Details_72, (MR_Integer) 3)));
                      MR_Word ClosureValues0_81;
                      MR_Box conv1_ClosureValues0_81;

                      ClosureValueMap_80 = hlds__hlds_goal__goal_info_get_ho_values_1_f_0(GoalInfo_11);
                      succeeded = mercury__map__search_3_p_0((MR_Word) &transform_hlds__term_traversal_scalar_common_1[0], (MR_Word) &transform_hlds__term_traversal_scalar_common_1[2], ClosureValueMap_80, ((MR_Box) (Var_76)), &conv1_ClosureValues0_81);
                      if (succeeded)
                      {
                        ClosureValues0_81 = ((MR_Word) conv1_ClosureValues0_81);
                        succeeded = MR_TRUE;
                      }
                      if (succeeded)
                      {
                        MR_Word TypeCtorInfo_240_240 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
                        MR_Word ClosureValues_82;
                        MR_Word Terminating_83;
                        MR_Word NonTerminating_84;
                        MR_Word Var_127;

                        ClosureValues_82 = mercury__set__to_sorted_list_1_f_0(TypeCtorInfo_240_240, ClosureValues0_81);
                        {
                          Var_127 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), Var_127, 0) = ((MR_Box) (&transform_hlds__term_traversal_scalar_common_3[1]));
                          MR_hl_field(MR_mktag(0), Var_127, 1) = ((MR_Box) (transform_hlds__term_traversal__term_traverse_goal_5_p_0_2));
                          MR_hl_field(MR_mktag(0), Var_127, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                          MR_hl_field(MR_mktag(0), Var_127, 3) = ((MR_Box) (ModuleInfo_6));
                        }
                        mercury__list__filter_4_p_0(TypeCtorInfo_240_240, Var_127, ClosureValues_82, &Terminating_83, &NonTerminating_84);
                        if ((NonTerminating_84 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                        {
                          MR_Word Error_85;
                          MR_Word OutVars_202;
                          MR_Word PPId_203;
                          MR_Word _InVars_201;

                          transform_hlds__term_util__partition_call_args_5_p_0(ModuleInfo_6, ArgModes_73, Args_220, &_InVars_201, &OutVars_202);
                          transform_hlds__term_traversal__params_get_ppid_2_p_0(Params_7, &PPId_203);
                          {
                            Error_85 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(3), Error_85, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                            MR_hl_field(MR_mktag(3), Error_85, 1) = ((MR_Box) (PPId_203));
                            MR_hl_field(MR_mktag(3), Error_85, 2) = ((MR_Box) (Terminating_83));
                          }
                          transform_hlds__term_traversal__error_if_intersect_5_p_0(OutVars_202, Context_222, Error_85, STATE_VARIABLE_Info_112_112, STATE_VARIABLE_Info_110);
                        }
                        else
                        {
                          transform_hlds__term_traversal__add_error_5_p_0(Params_7, Context_222, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)), STATE_VARIABLE_Info_112_112, STATE_VARIABLE_Info_110);
                        }
                      }
                      else
                      {
                        transform_hlds__term_traversal__add_error_5_p_0(Params_7, Context_222, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)), STATE_VARIABLE_Info_112_112, STATE_VARIABLE_Info_110);
                      }
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      transform_hlds__term_traversal__add_error_5_p_0(Params_7, Context_222, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)), STATE_VARIABLE_Info_112_112, STATE_VARIABLE_Info_110);
                    }
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
                MR_Word Attributes_65 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 1)));
                MR_Word ArgVars_70;
                MR_Word Args_194 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 4)));
                MR_Word OutVars_195;
                MR_Word CallPredId_196 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 2)));
                MR_Integer CallProcId_197 = ((MR_Integer) (MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 3)));
                MR_Word Context_198;
                MR_Word CallProcInfo_199;
                MR_Word CallArgModes_200;
                MR_Word Var_66 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 5)));
                MR_Word Var_67 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 6)));
                MR_Word Var_68 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 7)));
                MR_Word Var_69;
                MR_Word _InVars_71;
                MR_Word Var_134;

                hlds__hlds_module__module_info_pred_proc_info_5_p_0(ModuleInfo_6, CallPredId_196, CallProcId_197, &Var_69, &CallProcInfo_199);
                hlds__hlds_pred__proc_info_get_argmodes_2_p_0(CallProcInfo_199, &CallArgModes_200);
                ArgVars_70 = mercury__list__map_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0, (MR_Word) &transform_hlds__term_traversal_scalar_common_1[0], (MR_Word) &transform_hlds__term_traversal_scalar_common_2[3], Args_194);
                transform_hlds__term_util__partition_call_args_5_p_0(ModuleInfo_6, CallArgModes_200, ArgVars_70, &_InVars_71, &OutVars_195);
                Context_198 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_11);
                {
                  Var_134 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_134, 0) = ((MR_Box) (CallPredId_196));
                  MR_hl_field(MR_mktag(0), Var_134, 1) = ((MR_Box) (CallProcId_197));
                }
                succeeded = transform_hlds__term_util__is_termination_known_2_p_0(ModuleInfo_6, Var_134);
                if (succeeded)
                {
                  transform_hlds__term_traversal__error_if_intersect_5_p_0(OutVars_195, Context_198, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), STATE_VARIABLE_Info_112_112, STATE_VARIABLE_Info_110);
                }
                else
                {
                  succeeded = transform_hlds__term_util__attributes_imply_termination_1_p_0(Attributes_65);
                  if (succeeded)
                  {
                    transform_hlds__term_traversal__error_if_intersect_5_p_0(OutVars_195, Context_198, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), STATE_VARIABLE_Info_112_112, STATE_VARIABLE_Info_110);
                  }
                  else
                  {
                    MR_Word Var_139;

                    {
                      Var_139 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Var_139, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                      MR_hl_field(MR_mktag(3), Var_139, 1) = ((MR_Box) (CallPredId_196));
                    }
                    transform_hlds__term_traversal__add_error_5_p_0(Params_7, Context_198, Var_139, STATE_VARIABLE_Info_112_112, STATE_VARIABLE_Info_110);
                  }
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word Goals_95 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 2)));
                MR_Word RevGoals_96;
                MR_Word Var_94 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 1)));

                mercury__list__reverse_2_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, Goals_95, &RevGoals_96);
                transform_hlds__term_traversal__term_traverse_rev_conj_5_p_0(ModuleInfo_6, Params_7, RevGoals_96, STATE_VARIABLE_Info_112_112, STATE_VARIABLE_Info_110);
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word Goals_225 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 1)));

                transform_hlds__term_traversal__term_traverse_disj_5_p_0(ModuleInfo_6, Params_7, Goals_225, STATE_VARIABLE_Info_112_112, STATE_VARIABLE_Info_110);
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Word Cases_99 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 3)));
                MR_Word Var_97 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 1)));
                MR_Word Var_98 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 2)));

                transform_hlds__term_traversal__term_traverse_switch_5_p_0(ModuleInfo_6, Params_7, Cases_99, STATE_VARIABLE_Info_112_112, STATE_VARIABLE_Info_110);
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word SubGoal_226 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 2)));
                MR_Word Var_107 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 1)));

                /* direct tailcall eliminated */
                {
                  MR_Word next_value_of_Goal_8 = SubGoal_226;
                  MR_Word next_value_of_STATE_VARIABLE_Info_0_109 = STATE_VARIABLE_Info_112_112;

                  Goal_8 = next_value_of_Goal_8;
                  STATE_VARIABLE_Info_0_109 = next_value_of_STATE_VARIABLE_Info_0_109;
                }
                continue;
              }
              break;
            case (MR_Integer) 6:
              {
                MR_Word Cond_101 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 2)));
                MR_Word Then_102 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 3)));
                MR_Word Else_103 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 4)));
                MR_Word CondThenInfo_104;
                MR_Word ElseInfo_105;
                MR_Word Var_118;
                MR_Word Var_119;
                MR_Word Var_100 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 1)));

                {
                  Var_119 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_119, 0) = ((MR_Box) (Cond_101));
                  MR_hl_field(MR_mktag(1), Var_119, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
                {
                  Var_118 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_118, 0) = ((MR_Box) (Then_102));
                  MR_hl_field(MR_mktag(1), Var_118, 1) = ((MR_Box) (Var_119));
                }
                transform_hlds__term_traversal__term_traverse_rev_conj_5_p_0(ModuleInfo_6, Params_7, Var_118, STATE_VARIABLE_Info_112_112, &CondThenInfo_104);
                transform_hlds__term_traversal__term_traverse_goal_5_p_0(ModuleInfo_6, Params_7, Else_103, STATE_VARIABLE_Info_112_112, &ElseInfo_105);
                transform_hlds__term_traversal__combine_paths_4_p_0(CondThenInfo_104, ElseInfo_105, Params_7, STATE_VARIABLE_Info_110);
              }
              break;
            case (MR_Integer) 7:
              {
                {
                  mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.term_traversal", (MR_String) "predicate \140transform_hlds.term_traversal.term_traverse_goal\'/5", (MR_String) "shorthand");
                  return;
                }
              }
              break;
          }
          break;
      }
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
    /* tailcall optimized into a loop */
    if ((HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *STATE_VARIABLE_Info_5 = STATE_VARIABLE_Info_0_4;
    else
    {
      MR_Word Goal_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0)));
      MR_Word Goals_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1)));
      MR_Word STATE_VARIABLE_Info_18_18;

      transform_hlds__term_traversal__term_traverse_goal_5_p_0(ModuleInfo_1, Params_2, Goal_13, STATE_VARIABLE_Info_0_4, &STATE_VARIABLE_Info_18_18);
      /* direct tailcall eliminated */
      {
        MR_Word next_value_of_HeadVar__3_3 = Goals_14;
        MR_Word next_value_of_STATE_VARIABLE_Info_0_4 = STATE_VARIABLE_Info_18_18;

        HeadVar__3_3 = next_value_of_HeadVar__3_3;
        STATE_VARIABLE_Info_0_4 = next_value_of_STATE_VARIABLE_Info_0_4;
      }
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
  if ((HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
  {
    MR_Word Var_9;

    Var_9 = mercury__set__init_0_f_0((MR_Word) &transform_hlds__term_traversal__transform_hlds__term_traversal__type_ctor_info_term_path_info_0);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *HeadVar__5_5 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_9));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
  }
  else
  {
    MR_Word Case_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0)));
    MR_Word Cases_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1)));
    MR_Word Goal_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), Case_13, (MR_Integer) 2)));
    MR_Word CaseInfo_19;
    MR_Word CasesInfo_20;
    MR_Word Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), Case_13, (MR_Integer) 0)));
    MR_Word Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), Case_13, (MR_Integer) 1)));

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
  if ((HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
  {
    MR_Word Var_9;

    Var_9 = mercury__set__init_0_f_0((MR_Word) &transform_hlds__term_traversal__transform_hlds__term_traversal__type_ctor_info_term_path_info_0);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *HeadVar__5_5 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_9));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
  }
  else
  {
    MR_Word Goal_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0)));
    MR_Word Goals_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1)));
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
  MR_Word * HeadVar__2_2)
{
  {
    MR_Word Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), Params_3, (MR_Integer) 0)));
    MR_Word Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), Params_3, (MR_Integer) 1)));
    MR_Word Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), Params_3, (MR_Integer) 2)));
    MR_Word Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), Params_3, (MR_Integer) 3)));
    MR_Word Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), Params_3, (MR_Integer) 4)));
    MR_Integer Var_9;
    MR_Integer Var_10;

    *HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), Params_3, (MR_Integer) 5)));
    Var_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Params_3, (MR_Integer) 6)));
    Var_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Params_3, (MR_Integer) 7)));
  }
}

static void MR_CALL 
transform_hlds__term_traversal__params_get_output_suppliers_2_p_0(
  MR_Word Params_3,
  MR_Word * HeadVar__2_2)
{
  {
    MR_Word Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), Params_3, (MR_Integer) 0)));
    MR_Word Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), Params_3, (MR_Integer) 1)));
    MR_Word Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), Params_3, (MR_Integer) 2)));
    MR_Word Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), Params_3, (MR_Integer) 3)));
    MR_Word Var_8;
    MR_Integer Var_9;
    MR_Integer Var_10;

    *HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), Params_3, (MR_Integer) 4)));
    Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), Params_3, (MR_Integer) 5)));
    Var_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Params_3, (MR_Integer) 6)));
    Var_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Params_3, (MR_Integer) 7)));
  }
}

static void MR_CALL 
transform_hlds__term_traversal__params_get_var_types_2_p_0(
  MR_Word Params_3,
  MR_Word * HeadVar__2_2)
{
  {
    MR_Word Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), Params_3, (MR_Integer) 0)));
    MR_Word Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), Params_3, (MR_Integer) 1)));
    MR_Word Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), Params_3, (MR_Integer) 2)));
    MR_Word Var_7;
    MR_Word Var_8;
    MR_Integer Var_9;
    MR_Integer Var_10;

    *HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), Params_3, (MR_Integer) 3)));
    Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), Params_3, (MR_Integer) 4)));
    Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), Params_3, (MR_Integer) 5)));
    Var_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Params_3, (MR_Integer) 6)));
    Var_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Params_3, (MR_Integer) 7)));
  }
}

static void MR_CALL 
transform_hlds__term_traversal__params_get_ppid_2_p_0(
  MR_Word Params_3,
  MR_Word * HeadVar__2_2)
{
  {
    MR_Word Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), Params_3, (MR_Integer) 0)));
    MR_Word Var_5;
    MR_Word Var_6;
    MR_Word Var_7;
    MR_Word Var_8;
    MR_Integer Var_9;
    MR_Integer Var_10;

    *HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), Params_3, (MR_Integer) 1)));
    Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), Params_3, (MR_Integer) 2)));
    Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), Params_3, (MR_Integer) 3)));
    Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), Params_3, (MR_Integer) 4)));
    Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), Params_3, (MR_Integer) 5)));
    Var_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Params_3, (MR_Integer) 6)));
    Var_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Params_3, (MR_Integer) 7)));
  }
}

static void MR_CALL 
transform_hlds__term_traversal__error_if_intersect_5_p_0(
  MR_Word OutVars_6,
  MR_Word Context_7,
  MR_Word ErrorKind_8,
  MR_Word STATE_VARIABLE_Info_0_16,
  MR_Word * STATE_VARIABLE_Info_17)
{
  {
    MR_bool succeeded;

    if (((MR_tag((MR_Word) STATE_VARIABLE_Info_0_16)) == (MR_mktag((MR_Integer) 1))))
      *STATE_VARIABLE_Info_17 = STATE_VARIABLE_Info_0_16;
    else
    {
      MR_Word Paths_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_16, (MR_Integer) 0)));
      MR_Word CanLoop_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_16, (MR_Integer) 1)));
      MR_Word PathList_14;

      mercury__set__to_sorted_list_2_p_0((MR_Word) &transform_hlds__term_traversal__transform_hlds__term_traversal__type_ctor_info_term_path_info_0, Paths_12, &PathList_14);
      succeeded = transform_hlds__term_traversal__some_active_vars_in_bag_2_p_0(PathList_14, OutVars_6);
      if (succeeded)
      {
        MR_Word Error_15;
        MR_Word Var_19;

        {
          Error_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Error_15, 0) = ((MR_Box) (Context_7));
          MR_hl_field(MR_mktag(0), Error_15, 1) = ((MR_Box) (ErrorKind_8));
        }
        {
          Var_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_19, 0) = ((MR_Box) (Error_15));
          MR_hl_field(MR_mktag(1), Var_19, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *STATE_VARIABLE_Info_17 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_19));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (CanLoop_13));
        }
      }
      else
        *STATE_VARIABLE_Info_17 = STATE_VARIABLE_Info_0_16;
    }
  }
}

static MR_bool MR_CALL 
transform_hlds__term_traversal__some_active_vars_in_bag_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word OutVars_5)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool succeeded = ((MR_tag((MR_Word) HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
      MR_Word Path_3;
      MR_Word Paths_4;

      if (succeeded)
      {
        Path_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
        Paths_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
        {
          MR_Word Vars_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), Path_3, (MR_Integer) 4)));
          MR_Word Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), Path_3, (MR_Integer) 0)));
          MR_Word Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), Path_3, (MR_Integer) 1)));
          MR_Integer Var_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Path_3, (MR_Integer) 2)));
          MR_Word Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), Path_3, (MR_Integer) 3)));

          succeeded = mercury__bag__intersect_2_p_0((MR_Word) &transform_hlds__term_traversal_scalar_common_1[0], Vars_10, OutVars_5);
        }
        if (!(succeeded))
        {
          /* direct tailcall eliminated */
          {
            MR_Word next_value_of_HeadVar__1_1 = Paths_4;

            HeadVar__1_1 = next_value_of_HeadVar__1_1;
          }
          continue;
        }
      }
      return succeeded;
    }
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
  if (((MR_tag((MR_Word) Info0_11)) == (MR_mktag((MR_Integer) 1))))
    *Info_12 = Info0_11;
  else
  {
    MR_Word TypeCtorInfo_20_20 = (MR_Word) &transform_hlds__term_traversal__transform_hlds__term_traversal__type_ctor_info_term_path_info_0;
    MR_Word Paths0_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info0_11, (MR_Integer) 0)));
    MR_Word CanLoop_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info0_11, (MR_Integer) 1)));
    MR_Word PathsList0_17;
    MR_Word NewPaths0_18;
    MR_Word NewPaths_19;

    mercury__set__to_sorted_list_2_p_0(TypeCtorInfo_20_20, Paths0_15, &PathsList0_17);
    mercury__set__init_1_p_0(TypeCtorInfo_20_20, &NewPaths0_18);
    transform_hlds__term_traversal__record_change_2_7_p_0(PathsList0_17, InVars_7, OutVars_8, Gamma_9, CalledPPIds_10, NewPaths0_18, &NewPaths_19);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *Info_12 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (NewPaths_19));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (CanLoop_16));
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
    /* tailcall optimized into a loop */
    {
      MR_bool succeeded;

      if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        *STATE_VARIABLE_PathSet_7 = STATE_VARIABLE_PathSet_0_6;
      else
      {
        MR_Word Path0_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
        MR_Word Paths0_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
        MR_Word ProcData_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), Path0_15, (MR_Integer) 0)));
        MR_Word Start_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), Path0_15, (MR_Integer) 1)));
        MR_Integer Gamma0_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Path0_15, (MR_Integer) 2)));
        MR_Word PPIds0_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), Path0_15, (MR_Integer) 3)));
        MR_Word Vars0_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), Path0_15, (MR_Integer) 4)));
        MR_Word Path_31;
        MR_Word STATE_VARIABLE_PathSet_34_34;

        succeeded = mercury__bag__intersect_2_p_0((MR_Word) &transform_hlds__term_traversal_scalar_common_1[0], OutVars_3, Vars0_26);
        if (succeeded)
        {
          MR_Word TypeInfo_38_38;
          MR_Integer Gamma_27 = (CallGamma_4 + Gamma0_24);
          MR_Word PPIds_28;
          MR_Word Vars1_29;
          MR_Word Vars_30;

          mercury__list__append_3_p_1((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, CallPPIds_5, PPIds0_25, &PPIds_28);
          TypeInfo_38_38 = (MR_Word) &transform_hlds__term_traversal_scalar_common_1[0];
          mercury__bag__subtract_3_p_0(TypeInfo_38_38, Vars0_26, OutVars_3, &Vars1_29);
          mercury__bag__union_3_p_0(TypeInfo_38_38, InVars_2, Vars1_29, &Vars_30);
          {
            Path_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Path_31, 0) = ((MR_Box) (ProcData_22));
            MR_hl_field(MR_mktag(0), Path_31, 1) = ((MR_Box) (Start_23));
            MR_hl_field(MR_mktag(0), Path_31, 2) = ((MR_Box) (Gamma_27));
            MR_hl_field(MR_mktag(0), Path_31, 3) = ((MR_Box) (PPIds_28));
            MR_hl_field(MR_mktag(0), Path_31, 4) = ((MR_Box) (Vars_30));
          }
        }
        else
          Path_31 = Path0_15;
        mercury__set__insert_3_p_0((MR_Word) &transform_hlds__term_traversal__transform_hlds__term_traversal__type_ctor_info_term_path_info_0, ((MR_Box) (Path_31)), STATE_VARIABLE_PathSet_0_6, &STATE_VARIABLE_PathSet_34_34);
        /* direct tailcall eliminated */
        {
          MR_Word next_value_of_HeadVar__1_1 = Paths0_16;
          MR_Word next_value_of_STATE_VARIABLE_PathSet_0_6 = STATE_VARIABLE_PathSet_34_34;

          HeadVar__1_1 = next_value_of_HeadVar__1_1;
          STATE_VARIABLE_PathSet_0_6 = next_value_of_STATE_VARIABLE_PathSet_0_6;
        }
        continue;
      }
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
  {
    MR_bool succeeded;
    MR_Word FunctorInfo_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), Params_15, (MR_Integer) 0)));
    MR_Word VarTypes_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), Params_15, (MR_Integer) 3)));
    MR_Word Type_21;
    MR_Word TypeCtor_24;
    MR_Word Args1_25;
    MR_Word Modes1_26;
    MR_Word Args_27;
    MR_Word Modes_28;
    MR_Word Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), Params_15, (MR_Integer) 1)));
    MR_Word Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), Params_15, (MR_Integer) 2)));
    MR_Word Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), Params_15, (MR_Integer) 4)));
    MR_Word Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), Params_15, (MR_Integer) 5)));
    MR_Integer Var_35 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Params_15, (MR_Integer) 6)));
    MR_Integer Var_36 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Params_15, (MR_Integer) 7)));

    hlds__vartypes__lookup_var_type_3_p_0(VarTypes_20, OutVar_11, &Type_21);
    succeeded = parse_tree__prog_type__type_is_higher_order_1_p_0(Type_21);
    succeeded = !(succeeded);
    if (succeeded)
    {
      if (((((MR_tag((MR_Word) ConsId_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ConsId_12, (MR_Integer) 0)))) == (MR_Integer) 19))))
        succeeded = MR_TRUE;
      else
      if (((((MR_tag((MR_Word) ConsId_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ConsId_12, (MR_Integer) 0)))) == (MR_Integer) 20))))
        succeeded = MR_TRUE;
      else
        succeeded = MR_FALSE;
      succeeded = !(succeeded);
      if (succeeded)
      {
        parse_tree__prog_type__type_to_ctor_det_2_p_0(Type_21, &TypeCtor_24);
        transform_hlds__term_traversal__filter_typeinfos_from_args_and_modes_5_p_0(VarTypes_20, Args0_13, &Args1_25, Modes0_14, &Modes1_26);
        transform_hlds__term_norm__functor_norm_9_p_0(ModuleInfo_10, FunctorInfo_19, TypeCtor_24, ConsId_12, Gamma_16, Args1_25, &Args_27, Modes1_26, &Modes_28);
        transform_hlds__term_util__split_unification_vars_5_p_0(ModuleInfo_10, Args_27, Modes_28, InVars_17, OutVars_18);
        succeeded = MR_TRUE;
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__term_traversal__filter_typeinfos_from_args_and_modes_5_p_0(
  MR_Word VarTypes_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5)
{
  {
    MR_bool succeeded;

    if ((HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      if ((HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      }
      else
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.term_traversal", (MR_String) "predicate \140transform_hlds.term_traversal.filter_typeinfos_from_args_and_modes\'/5", (MR_String) "list length mismatch");
          return;
        }
      }
    else
    {
      MR_Word Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));

      if ((HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.term_traversal", (MR_String) "predicate \140transform_hlds.term_traversal.filter_typeinfos_from_args_and_modes\'/5", (MR_String) "list length mismatch");
          return;
        }
      }
      else
      {
        MR_Word Mode0_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 0)));
        MR_Word Modes0_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 1)));
        MR_Word TailArgs_30;
        MR_Word TailModes_31;
        MR_Word Type_32;

        transform_hlds__term_traversal__filter_typeinfos_from_args_and_modes_5_p_0(VarTypes_1, Var_33, &TailArgs_30, Modes0_28, &TailModes_31);
        hlds__vartypes__lookup_var_type_3_p_0(VarTypes_1, Var_34, &Type_32);
        succeeded = parse_tree__prog_type__is_introduced_type_info_type_1_p_0(Type_32);
        if (succeeded)
        {
          *HeadVar__3_3 = TailArgs_30;
          *HeadVar__5_5 = TailModes_31;
        }
        else
        {
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *HeadVar__3_3 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_34));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (TailArgs_30));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *HeadVar__5_5 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Mode0_27));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (TailModes_31));
          }
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
  if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    if ((HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      mercury__bag__init_1_p_0((MR_Word) &transform_hlds__term_traversal_scalar_common_1[0], HeadVar__3_3);
    }
    else
    {
      {
        mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.term_traversal", (MR_String) "predicate \140transform_hlds.term_traversal.compute_rec_start_vars\'/3", (MR_String) "unmatched variables");
        return;
      }
    }
  else
  {
    MR_Word Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
    MR_Word Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));

    if ((HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      {
        mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.term_traversal", (MR_String) "predicate \140transform_hlds.term_traversal.compute_rec_start_vars\'/3", (MR_String) "unmatched variables");
        return;
      }
    }
    else
    {
      MR_Word RecInputSupplier_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word RecInputSuppliers_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word Out1_22;

      transform_hlds__term_traversal__compute_rec_start_vars_3_p_0(Var_25, RecInputSuppliers_20, &Out1_22);
      switch (RecInputSupplier_19) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          *HeadVar__3_3 = Out1_22;
          break;
        case (MR_Integer) 1:
          {
            mercury__bag__insert_3_p_0((MR_Word) &transform_hlds__term_traversal_scalar_common_1[0], ((MR_Box) (Var_26)), Out1_22, HeadVar__3_3);
          }
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
  if (((MR_tag((MR_Word) Info0_9)) == (MR_mktag((MR_Integer) 1))))
  {
    MR_Word Errors_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), Info0_9, (MR_Integer) 0)));
    MR_Word CanLoop0_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), Info0_9, (MR_Integer) 1)));
    MR_Word CanLoop1_13;
    MR_Integer MaxErrors_14;
    MR_Word CanLoop_15;
    MR_Word Var_18;
    MR_Word Var_26;
    MR_Word Var_27;
    MR_Word Var_28;
    MR_Word Var_29;
    MR_Word Var_30;
    MR_Word Var_31;
    MR_Integer Var_32;

    {
      Var_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_18, 0) = ((MR_Box) (Context_6));
      MR_hl_field(MR_mktag(0), Var_18, 1) = ((MR_Box) (ErrorKind_7));
    }
    {
      CanLoop1_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), CanLoop1_13, 0) = ((MR_Box) (Var_18));
      MR_hl_field(MR_mktag(1), CanLoop1_13, 1) = ((MR_Box) (CanLoop0_12));
    }
    Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), Params_8, (MR_Integer) 0)));
    Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), Params_8, (MR_Integer) 1)));
    Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), Params_8, (MR_Integer) 2)));
    Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), Params_8, (MR_Integer) 3)));
    Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), Params_8, (MR_Integer) 4)));
    Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), Params_8, (MR_Integer) 5)));
    MaxErrors_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Params_8, (MR_Integer) 6)));
    Var_32 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Params_8, (MR_Integer) 7)));
    mercury__list__take_upto_3_p_0((MR_Word) &transform_hlds__term_errors__transform_hlds__term_errors__type_ctor_info_term_error_0, MaxErrors_14, CanLoop1_13, &CanLoop_15);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *Info_10 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Errors_11));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (CanLoop_15));
    }
  }
  else
  {
    MR_Word Paths_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info0_9, (MR_Integer) 0)));
    MR_Word Var_17;
    MR_Word CanLoop0_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info0_9, (MR_Integer) 1)));
    MR_Word CanLoop1_20;
    MR_Integer MaxErrors_21;
    MR_Word CanLoop_22;
    MR_Word Var_34;
    MR_Word Var_35;
    MR_Word Var_36;
    MR_Word Var_37;
    MR_Word Var_38;
    MR_Word Var_39;
    MR_Integer Var_40;

    {
      Var_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_17, 0) = ((MR_Box) (Context_6));
      MR_hl_field(MR_mktag(0), Var_17, 1) = ((MR_Box) (ErrorKind_7));
    }
    {
      CanLoop1_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), CanLoop1_20, 0) = ((MR_Box) (Var_17));
      MR_hl_field(MR_mktag(1), CanLoop1_20, 1) = ((MR_Box) (CanLoop0_19));
    }
    Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), Params_8, (MR_Integer) 0)));
    Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), Params_8, (MR_Integer) 1)));
    Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), Params_8, (MR_Integer) 2)));
    Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), Params_8, (MR_Integer) 3)));
    Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), Params_8, (MR_Integer) 4)));
    Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), Params_8, (MR_Integer) 5)));
    MaxErrors_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Params_8, (MR_Integer) 6)));
    Var_40 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Params_8, (MR_Integer) 7)));
    mercury__list__take_upto_3_p_0((MR_Word) &transform_hlds__term_errors__transform_hlds__term_errors__type_ctor_info_term_error_0, MaxErrors_21, CanLoop1_20, &CanLoop_22);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *Info_10 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Paths_16));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (CanLoop_22));
    }
  }
}

static void MR_CALL 
transform_hlds__term_traversal__add_error_5_p_0(
  MR_Word Params_6,
  MR_Word Context_7,
  MR_Word ErrorKind_8,
  MR_Word Info0_9,
  MR_Word * Info_10)
{
  if (((MR_tag((MR_Word) Info0_9)) == (MR_mktag((MR_Integer) 1))))
  {
    MR_Word Errors0_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), Info0_9, (MR_Integer) 0)));
    MR_Word CanLoop_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), Info0_9, (MR_Integer) 1)));
    MR_Word Errors1_13;
    MR_Integer MaxErrors_14;
    MR_Word Errors_15;
    MR_Word Var_20;
    MR_Word Var_24;
    MR_Word Var_25;
    MR_Word Var_26;
    MR_Word Var_27;
    MR_Word Var_28;
    MR_Word Var_29;
    MR_Integer Var_30;

    {
      Var_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_20, 0) = ((MR_Box) (Context_7));
      MR_hl_field(MR_mktag(0), Var_20, 1) = ((MR_Box) (ErrorKind_8));
    }
    {
      Errors1_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Errors1_13, 0) = ((MR_Box) (Var_20));
      MR_hl_field(MR_mktag(1), Errors1_13, 1) = ((MR_Box) (Errors0_11));
    }
    Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), Params_6, (MR_Integer) 0)));
    Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), Params_6, (MR_Integer) 1)));
    Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), Params_6, (MR_Integer) 2)));
    Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), Params_6, (MR_Integer) 3)));
    Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), Params_6, (MR_Integer) 4)));
    Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), Params_6, (MR_Integer) 5)));
    MaxErrors_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Params_6, (MR_Integer) 6)));
    Var_30 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Params_6, (MR_Integer) 7)));
    mercury__list__take_upto_3_p_0((MR_Word) &transform_hlds__term_errors__transform_hlds__term_errors__type_ctor_info_term_error_0, MaxErrors_14, Errors1_13, &Errors_15);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *Info_10 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Errors_15));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (CanLoop_12));
    }
  }
  else
  {
    MR_Word ErrorContext_17;
    MR_Word Var_18;
    MR_Word CanLoop_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info0_9, (MR_Integer) 1)));
    MR_Word Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info0_9, (MR_Integer) 0)));

    {
      ErrorContext_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ErrorContext_17, 0) = ((MR_Box) (Context_7));
      MR_hl_field(MR_mktag(0), ErrorContext_17, 1) = ((MR_Box) (ErrorKind_8));
    }
    {
      Var_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_18, 0) = ((MR_Box) (ErrorContext_17));
      MR_hl_field(MR_mktag(1), Var_18, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *Info_10 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_18));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (CanLoop_21));
    }
  }
}

static void MR_CALL 
transform_hlds__term_traversal__add_path_3_p_0(
  MR_Word Path_4,
  MR_Word Info0_5,
  MR_Word * Info_6)
{
  if (((MR_tag((MR_Word) Info0_5)) == (MR_mktag((MR_Integer) 1))))
    *Info_6 = Info0_5;
  else
  {
    MR_Word Paths0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info0_5, (MR_Integer) 0)));
    MR_Word CanLoop_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info0_5, (MR_Integer) 1)));
    MR_Word Paths_11;

    mercury__set__insert_3_p_0((MR_Word) &transform_hlds__term_traversal__transform_hlds__term_traversal__type_ctor_info_term_path_info_0, ((MR_Box) (Path_4)), Paths0_9, &Paths_11);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *Info_6 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Paths_11));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (CanLoop_10));
    }
  }
}

static void MR_CALL 
transform_hlds__term_traversal__cannot_succeed_2_p_0(
  MR_Word Info0_3,
  MR_Word * Info_4)
{
  if (((MR_tag((MR_Word) Info0_3)) == (MR_mktag((MR_Integer) 1))))
    *Info_4 = Info0_3;
  else
  {
    MR_Word CanLoop_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info0_3, (MR_Integer) 1)));
    MR_Word Var_9;
    MR_Word Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info0_3, (MR_Integer) 0)));

    Var_9 = mercury__set__init_0_f_0((MR_Word) &transform_hlds__term_traversal__transform_hlds__term_traversal__type_ctor_info_term_path_info_0);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *Info_4 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_9));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (CanLoop_8));
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
  {
    MR_bool succeeded;

    if (((MR_tag((MR_Word) InfoA_5)) == (MR_mktag((MR_Integer) 1))))
    {
      MR_Word Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), InfoA_5, (MR_Integer) 1)));
      MR_Word Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), InfoA_5, (MR_Integer) 0)));

      if (((MR_tag((MR_Word) InfoB_6)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Word TypeCtorInfo_47_47 = (MR_Word) &transform_hlds__term_errors__transform_hlds__term_errors__type_ctor_info_term_error_0;
        MR_Word ErrorsB_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), InfoB_6, (MR_Integer) 0)));
        MR_Word CanLoopB_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), InfoB_6, (MR_Integer) 1)));
        MR_Integer MaxErrors_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Params_7, (MR_Integer) 6)));
        MR_Word Errors_14;
        MR_Word CanLoop_15;
        MR_Word Var_31;
        MR_Word Var_32;
        MR_Word Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), Params_7, (MR_Integer) 0)));
        MR_Word Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), Params_7, (MR_Integer) 1)));
        MR_Word Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), Params_7, (MR_Integer) 2)));
        MR_Word Var_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), Params_7, (MR_Integer) 3)));
        MR_Word Var_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), Params_7, (MR_Integer) 4)));
        MR_Word Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), Params_7, (MR_Integer) 5)));
        MR_Integer Var_63 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Params_7, (MR_Integer) 7)));

        Var_31 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_47_47, Var_53, ErrorsB_11);
        mercury__list__take_upto_3_p_0(TypeCtorInfo_47_47, MaxErrors_13, Var_31, &Errors_14);
        Var_32 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_47_47, Var_52, CanLoopB_12);
        mercury__list__take_upto_3_p_0(TypeCtorInfo_47_47, MaxErrors_13, Var_32, &CanLoop_15);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *Info_8 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Errors_14));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (CanLoop_15));
        }
      }
      else
      {
        MR_Word TypeCtorInfo_48_48 = (MR_Word) &transform_hlds__term_errors__transform_hlds__term_errors__type_ctor_info_term_error_0;
        MR_Word Var_30;
        MR_Word CanLoopB_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), InfoB_6, (MR_Integer) 1)));
        MR_Integer MaxErrors_36 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Params_7, (MR_Integer) 6)));
        MR_Word CanLoop_37;
        MR_Word Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), InfoB_6, (MR_Integer) 0)));
        MR_Word Var_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), Params_7, (MR_Integer) 0)));
        MR_Word Var_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), Params_7, (MR_Integer) 1)));
        MR_Word Var_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), Params_7, (MR_Integer) 2)));
        MR_Word Var_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), Params_7, (MR_Integer) 3)));
        MR_Word Var_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), Params_7, (MR_Integer) 4)));
        MR_Word Var_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), Params_7, (MR_Integer) 5)));
        MR_Integer Var_71 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Params_7, (MR_Integer) 7)));

        Var_30 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_48_48, Var_52, CanLoopB_35);
        mercury__list__take_upto_3_p_0(TypeCtorInfo_48_48, MaxErrors_36, Var_30, &CanLoop_37);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *Info_8 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_53));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (CanLoop_37));
        }
      }
    }
    else
    {
      MR_Word Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), InfoA_5, (MR_Integer) 1)));
      MR_Word Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), InfoA_5, (MR_Integer) 0)));

      if (((MR_tag((MR_Word) InfoB_6)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Word TypeCtorInfo_49_49 = (MR_Word) &transform_hlds__term_errors__transform_hlds__term_errors__type_ctor_info_term_error_0;
        MR_Word Var_29;
        MR_Word ErrorsB_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), InfoB_6, (MR_Integer) 0)));
        MR_Word CanLoopB_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), InfoB_6, (MR_Integer) 1)));
        MR_Integer MaxErrors_41 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Params_7, (MR_Integer) 6)));
        MR_Word CanLoop_42;
        MR_Word Var_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), Params_7, (MR_Integer) 0)));
        MR_Word Var_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), Params_7, (MR_Integer) 1)));
        MR_Word Var_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), Params_7, (MR_Integer) 2)));
        MR_Word Var_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), Params_7, (MR_Integer) 3)));
        MR_Word Var_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), Params_7, (MR_Integer) 4)));
        MR_Word Var_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), Params_7, (MR_Integer) 5)));
        MR_Integer Var_79 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Params_7, (MR_Integer) 7)));

        Var_29 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_49_49, Var_54, CanLoopB_40);
        mercury__list__take_upto_3_p_0(TypeCtorInfo_49_49, MaxErrors_41, Var_29, &CanLoop_42);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *Info_8 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ErrorsB_39));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (CanLoop_42));
        }
      }
      else
      {
        MR_Word TypeCtorInfo_50_50 = (MR_Word) &transform_hlds__term_errors__transform_hlds__term_errors__type_ctor_info_term_error_0;
        MR_Word TypeCtorInfo_51_51;
        MR_Word PathsB_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), InfoB_6, (MR_Integer) 0)));
        MR_Word Paths_20;
        MR_Integer MaxPaths_21;
        MR_Word Var_25;
        MR_Word CanLoopB_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), InfoB_6, (MR_Integer) 1)));
        MR_Integer MaxErrors_45 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Params_7, (MR_Integer) 6)));
        MR_Word CanLoop_46;
        MR_Word Var_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), Params_7, (MR_Integer) 0)));
        MR_Word Var_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), Params_7, (MR_Integer) 1)));
        MR_Word Var_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), Params_7, (MR_Integer) 2)));
        MR_Word Var_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), Params_7, (MR_Integer) 3)));
        MR_Word Var_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), Params_7, (MR_Integer) 4)));
        MR_Word Var_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), Params_7, (MR_Integer) 5)));
        MR_Integer Var_87 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Params_7, (MR_Integer) 7)));
        MR_Word Var_89;
        MR_Word Var_90;
        MR_Word Var_91;
        MR_Word Var_92;
        MR_Word Var_93;
        MR_Word Var_94;
        MR_Integer Var_95;
        MR_Integer Count_22;

        Var_25 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_50_50, Var_54, CanLoopB_44);
        mercury__list__take_upto_3_p_0(TypeCtorInfo_50_50, MaxErrors_45, Var_25, &CanLoop_46);
        TypeCtorInfo_51_51 = (MR_Word) &transform_hlds__term_traversal__transform_hlds__term_traversal__type_ctor_info_term_path_info_0;
        mercury__set__union_3_p_0(TypeCtorInfo_51_51, PathsB_19, Var_55, &Paths_20);
        Var_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), Params_7, (MR_Integer) 0)));
        Var_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), Params_7, (MR_Integer) 1)));
        Var_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), Params_7, (MR_Integer) 2)));
        Var_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), Params_7, (MR_Integer) 3)));
        Var_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), Params_7, (MR_Integer) 4)));
        Var_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), Params_7, (MR_Integer) 5)));
        Var_95 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Params_7, (MR_Integer) 6)));
        MaxPaths_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Params_7, (MR_Integer) 7)));
        mercury__set__count_2_p_0(TypeCtorInfo_51_51, Paths_20, &Count_22);
        succeeded = (Count_22 <= MaxPaths_21);
        if (succeeded)
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            *Info_8 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Paths_20));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (CanLoop_46));
          }
        else
        {
          MR_Word Context_23;
          MR_Word Error_24;
          MR_Word Var_27;

          transform_hlds__term_traversal__params_get_context_2_p_0(Params_7, &Context_23);
          {
            Error_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Error_24, 0) = ((MR_Box) (Context_23));
            MR_hl_field(MR_mktag(0), Error_24, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5))));
          }
          {
            Var_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_27, 0) = ((MR_Box) (Error_24));
            MR_hl_field(MR_mktag(1), Var_27, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *Info_8 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_27));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (CanLoop_46));
          }
        }
      }
    }
  }
}

static void MR_CALL 
transform_hlds__term_traversal__params_get_context_2_p_0(
  MR_Word Params_3,
  MR_Word * HeadVar__2_2)
{
  {
    MR_Word Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), Params_3, (MR_Integer) 0)));
    MR_Word Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), Params_3, (MR_Integer) 1)));
    MR_Word Var_6;
    MR_Word Var_7;
    MR_Word Var_8;
    MR_Integer Var_9;
    MR_Integer Var_10;

    *HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), Params_3, (MR_Integer) 2)));
    Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), Params_3, (MR_Integer) 3)));
    Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), Params_3, (MR_Integer) 4)));
    Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), Params_3, (MR_Integer) 5)));
    Var_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Params_3, (MR_Integer) 6)));
    Var_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Params_3, (MR_Integer) 7)));
  }
}

void MR_CALL 
transform_hlds__term_traversal__init_term_traversal_params_9_p_0(
  MR_Word FunctorInfo_10,
  MR_Word PredProcId_11,
  MR_Word Context_12,
  MR_Word VarTypes_13,
  MR_Word OutputSuppliers_14,
  MR_Word RecInputSuppliers_15,
  MR_Integer MaxErrors_16,
  MR_Integer MaxPaths_17,
  MR_Word * Params_18)
{
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
    *Params_18 = base;
    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (FunctorInfo_10));
    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (PredProcId_11));
    MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Context_12));
    MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (VarTypes_13));
    MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (OutputSuppliers_14));
    MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (RecInputSuppliers_15));
    MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (MaxErrors_16));
    MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (MaxPaths_17));
  }
}

static MR_bool MR_CALL 
transform_hlds__term_traversal____Unify____term_path_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = transform_hlds__term_traversal____Unify____term_path_info_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__term_traversal____Compare____term_path_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    transform_hlds__term_traversal____Compare____term_path_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__term_traversal____Unify____term_traversal_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = transform_hlds__term_traversal____Unify____term_traversal_info_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__term_traversal____Compare____term_traversal_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    transform_hlds__term_traversal____Compare____term_traversal_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__term_traversal____Unify____term_traversal_params_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = transform_hlds__term_traversal____Unify____term_traversal_params_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__term_traversal____Compare____term_traversal_params_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    transform_hlds__term_traversal____Compare____term_traversal_params_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
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

/* :- end_module transform_hlds.term_traversal. */
